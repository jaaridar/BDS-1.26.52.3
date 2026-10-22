'use strict'

/**
 * Infinite (vanilla-shaped) overworld terrain generator - clean-room.
 *
 * Pipeline, following the publicly documented structure of modern
 * Minecraft world generation (Minecraft Wiki: "World generation",
 * "Noise", "Ore (feature)"; Mojang's Caves & Cliffs developer blogs):
 *
 *   seed
 *    -> independent climate noises (continentalness, erosion, weirdness/
 *       peaks & valleys, temperature, humidity, river channel)
 *    -> surface height: continentalness spline + hill/detail octaves +
 *       ridged-noise mountains, rivers carved back through lowlands
 *    -> biome per column (multi-noise nearest climate point, biomes.js)
 *    -> strata fill: bedrock gradient at y=-64, deepslate below y~0,
 *       stone, biome surface rules (top/under blocks), water to sea
 *       level y=63
 *    -> caves carved from 3D noise sampled on a coarse 4-block grid and
 *       trilinearly interpolated (the same coarse-grid-then-interpolate
 *       strategy vanilla density functions use, at our own constants):
 *       wide "cheese" caverns + paired-noise "spaghetti" tunnels
 *    -> ores scattered by per-chunk positional randomness using the
 *       uniform/triangle height distributions published on the wiki's
 *       ore-distribution chart (approximate counts/sizes, our table below)
 *    -> trees on grass, density per biome, kept inside chunk borders
 *
 * Deterministic: generation is a pure function of (seed, chunkX, chunkZ).
 * Neighboring chunks agree on borders because every field is sampled in
 * world coordinates; only chunk-local decorations (ores, trees) use
 * `chunkRandom`, and those never write outside their own chunk.
 *
 * Deliberate simplifications vs. vanilla (see docs/world-generation.md):
 * heightmap-based surface instead of full 3D density (no overhangs or
 * floating islands), 2D biomes (no underground-only biomes), no aquifers
 * (lava/water pockets), no structures, single block layer (no snow layers
 * or waterlogged blocks), deepslate ore variants reuse the stone ore.
 */

const { BLOCKS_PER_SUBCHUNK, OVERWORLD } = require('./chunk')
const { OctaveNoise, makeSpline, clamp, lerp } = require('./noise')
const { deriveSeeds, normalizeSeed, chunkRandom, hashBlock } = require('./rng')
const { SEA_LEVEL, MIN_Y, MAX_Y, selectBiome } = require('./biomes')

const ORE_SALT = 101
const TREE_SALT = 202

/** Continentalness -> base surface height. Crosses sea level near -0.08. */
const CONTINENT_SPLINE = makeSpline([
  [-1.0, 34], [-0.7, 42], [-0.45, 48], [-0.25, 55], [-0.12, 61],
  [-0.05, 64], [0.05, 67], [0.25, 72], [0.5, 82], [0.75, 95], [1.0, 110]
])

/**
 * Ore table. Counts are placement attempts per chunk; `y(rng)` follows the
 * shape (uniform vs. triangle and peak height) of the distributions on the
 * Minecraft Wiki's 1.18+ ore chart, scaled to our vein walker.
 */
const ORES = [
  { block: 'minecraft:coal_ore', attempts: 24, size: [4, 12], y: (r) => r.nextTriangle(0, 256, 96) },
  { block: 'minecraft:iron_ore', attempts: 18, size: [3, 8], y: (r) => (r.nextFloat() < 0.5 ? r.nextTriangle(-24, 72, 32) : r.nextTriangle(80, 280, 200)) },
  { block: 'minecraft:copper_ore', attempts: 8, size: [3, 8], y: (r) => r.nextTriangle(-16, 112, 48) },
  { block: 'minecraft:gold_ore', attempts: 5, size: [2, 6], y: (r) => r.nextTriangle(-64, 32, -16) },
  { block: 'minecraft:redstone_ore', attempts: 7, size: [3, 7], y: (r) => r.nextTriangle(-64, 16, -64) },
  { block: 'minecraft:lapis_ore', attempts: 3, size: [2, 5], y: (r) => r.nextTriangle(-32, 32, 0) },
  { block: 'minecraft:diamond_ore', attempts: 6, size: [2, 6], y: (r) => r.nextTriangle(-64, 16, -59) },
  { block: 'minecraft:emerald_ore', attempts: 6, size: [1, 1], y: (r) => r.nextTriangle(-16, 256, 200), mountainsOnly: true }
]

function smoothstep (v, edge0, edge1) {
  const t = clamp((v - edge0) / (edge1 - edge0), 0, 1)
  return t * t * (3 - 2 * t)
}

function worldToSlot (y) {
  const subChunkIndex = Math.floor(y / 16)
  return { slot: subChunkIndex - OVERWORLD.minSubChunkIndex, localY: y - subChunkIndex * 16 }
}

/**
 * Create the infinite generator.
 * @param {import('./palette').BlockPalette} palette
 * @param {{ seed?: (string|number|bigint) }} [opts]
 */
function createInfiniteGenerator (palette, { seed = '' } = {}) {
  const worldSeed = normalizeSeed(seed)
  const seedLo = Number(worldSeed & 0xffffffffn) | 0
  const s = deriveSeeds(worldSeed, 12)

  const noises = {
    continentalness: new OctaveNoise(s[0], { octaves: 4 }),
    erosion: new OctaveNoise(s[1], { octaves: 4 }),
    peaks: new OctaveNoise(s[2], { octaves: 4 }),
    temperature: new OctaveNoise(s[3], { octaves: 3 }),
    humidity: new OctaveNoise(s[4], { octaves: 3 }),
    river: new OctaveNoise(s[5], { octaves: 2 }),
    hills: new OctaveNoise(s[6], { octaves: 3 }),
    detail: new OctaveNoise(s[7], { octaves: 2 }),
    cheese: new OctaveNoise(s[8], { octaves: 2 }),
    spaghettiA: new OctaveNoise(s[9], { octaves: 1 }),
    spaghettiB: new OctaveNoise(s[10], { octaves: 1 }),
    floor: new OctaveNoise(s[11], { octaves: 2 })
  }

  const air = palette.tryRuntimeId('minecraft:air', {}, 0)
  const id = (name, fallback) => palette.tryRuntimeId(name, {}, fallback)
  const stone = id('minecraft:stone', air)
  const ids = {
    air,
    bedrock: id('minecraft:bedrock', stone),
    stone,
    deepslate: id('minecraft:deepslate', stone),
    dirt: id('minecraft:dirt', stone),
    water: id('minecraft:water', air),
    sandstone: id('minecraft:sandstone', stone)
  }
  // Per-block-name cache (surface rules + ores + trees resolve by name).
  const idCache = new Map()
  function blockId (name) {
    let v = idCache.get(name)
    if (v === undefined) {
      v = palette.tryRuntimeId(name, {}, name.includes('leaves') ? ids.air : ids.stone)
      idCache.set(name, v)
    }
    return v
  }

  /** Sample all climate fields at a world column. Pure function of x/z. */
  function climateAt (wx, wz) {
    const continentalness = noises.continentalness.sample2(wx / 720, wz / 720)
    const erosion = noises.erosion.sample2(wx / 512, wz / 512)
    // Octave sums concentrate near 0; stretch climate axes so hot/cold and
    // wet/dry extremes (desert, jungle, snowy) actually occur.
    const temperature = clamp(noises.temperature.sample2(wx / 900, wz / 900) * 1.35, -1, 1)
    const humidity = clamp(noises.humidity.sample2(wx / 900, wz / 900) * 1.35, -1, 1)
    const riverN = noises.river.sample2(wx / 280, wz / 280)
    const ridge = (noises.peaks.ridged2(wx / 360, wz / 360) + 1) / 2 // 0..1
    const mountainness = clamp(
      ridge * smoothstep(continentalness, 0.15, 0.65) * (1 - 0.45 * smoothstep(erosion, 0.1, 0.8)),
      0, 1)
    return {
      continentalness,
      erosion,
      temperature,
      humidity,
      mountainness,
      riverN,
      isRiver: Math.abs(riverN) < 0.045 && continentalness > -0.05
    }
  }

  /** Surface height (highest solid y before water) for one column. */
  function heightFor (wx, wz, climate) {
    const c = climate ?? climateAt(wx, wz)
    let h = CONTINENT_SPLINE(c.continentalness)
    // Rolling hills, calmer where erosion is high (plains/badlands plateaus)
    const hillAmp = 5 + 9 * (1 - smoothstep(c.erosion, -0.2, 0.7))
    h += noises.hills.sample2(wx / 160, wz / 160) * hillAmp
    h += noises.detail.sample2(wx / 48, wz / 48) * 2.2
    // Ocean floor undulation
    if (h < SEA_LEVEL) h += noises.floor.sample2(wx / 96, wz / 96) * 3
    // Mountains rise quadratically so foothills blend into peaks
    h += c.mountainness * c.mountainness * 95
    // Rivers carve a shallow channel through land
    if (c.isRiver && h > SEA_LEVEL - 4) {
      const t = clamp(Math.abs(c.riverN) / 0.045, 0, 1)
      h = lerp(SEA_LEVEL - 4, h, t * t)
    }
    return clamp(Math.floor(h), MIN_Y + 6, MAX_Y - 32)
  }

  function biomeFor (wx, wz, climate, height) {
    const c = climate ?? climateAt(wx, wz)
    const h = height ?? heightFor(wx, wz, c)
    return selectBiome(c, h)
  }

  // Cache of the most recent chunks' per-column biome ids, so the chunk
  // encoder's 1536 biome-cell samples don't re-run the climate stack.
  const biomeCache = new Map() // "cx,cz" -> Uint16Array(256), index x*16+z
  function cacheBiomes (cx, cz, ids256) {
    biomeCache.set(`${cx},${cz}`, ids256)
    if (biomeCache.size > 16) biomeCache.delete(biomeCache.keys().next().value)
  }

  /** Biome storage id at a world position (2D biomes: y is ignored). */
  function biomeIdAt (wx, _wy, wz) {
    const cx = Math.floor(wx / 16)
    const cz = Math.floor(wz / 16)
    const hit = biomeCache.get(`${cx},${cz}`)
    if (hit) return hit[(wx - cx * 16) * 16 + (wz - cz * 16)]
    return biomeFor(wx, wz).id
  }

  /** Find a dry-land spawn near the origin by an expanding square search. */
  function findSpawn () {
    for (let r = 0; r <= 64; r++) {
      for (let dx = -r; dx <= r; dx++) {
        for (let dz = -r; dz <= r; dz++) {
          if (Math.max(Math.abs(dx), Math.abs(dz)) !== r) continue
          const wx = dx * 16 + 8
          const wz = dz * 16 + 8
          const h = heightFor(wx, wz)
          if (h > SEA_LEVEL && h < 130) return { x: wx, y: h + 1, z: wz }
        }
      }
    }
    const h = heightFor(0, 0)
    return { x: 0, y: Math.max(h + 1, SEA_LEVEL + 2), z: 0 }
  }

  /**
   * Generate one chunk column.
   * @returns {Array<Uint16Array|null>} sub-chunk slots (slot 0 = y index -4)
   */
  function generate (cx = 0, cz = 0) {
    const heights = new Int16Array(256)
    const biomes = new Array(256)
    const biomeIds = new Uint16Array(256)
    let maxHeight = MIN_Y

    for (let x = 0; x < 16; x++) {
      for (let z = 0; z < 16; z++) {
        const wx = cx * 16 + x
        const wz = cz * 16 + z
        const climate = climateAt(wx, wz)
        const h = heightFor(wx, wz, climate)
        const biome = selectBiome(climate, h)
        const idx = x * 16 + z
        heights[idx] = h
        biomes[idx] = biome
        biomeIds[idx] = biome.id
        if (h > maxHeight) maxHeight = h
      }
    }
    cacheBiomes(cx, cz, biomeIds)

    const slots = []
    const getSlot = (slot) => {
      if (!slots[slot]) slots[slot] = new Uint16Array(BLOCKS_PER_SUBCHUNK)
      return slots[slot]
    }
    const setBlock = (x, y, z, block) => {
      const { slot, localY } = worldToSlot(y)
      getSlot(slot)[(x << 8) | (z << 4) | localY] = block
    }
    const getBlock = (x, y, z) => {
      const { slot, localY } = worldToSlot(y)
      const arr = slots[slot]
      return arr ? arr[(x << 8) | (z << 4) | localY] : ids.air
    }

    // ---- strata + surface + water -------------------------------------
    for (let x = 0; x < 16; x++) {
      for (let z = 0; z < 16; z++) {
        const idx = x * 16 + z
        const wx = cx * 16 + x
        const wz = cz * 16 + z
        const h = heights[idx]
        const biome = biomes[idx]
        const topId = blockId(biome.top)
        const underId = blockId(biome.under)
        const underwater = h < SEA_LEVEL
        // Ocean/river floors get a dirt band under the gravel cap.
        const underDepth = 3

        for (let y = MIN_Y; y <= h; y++) {
          let block
          if (y === MIN_Y) {
            block = ids.bedrock
          } else if (y <= MIN_Y + 4) {
            // Bedrock gradient: p = 1 at the floor fading to 0 by +5.
            const p = 1 - (y - MIN_Y) / 5
            block = hashBlock(seedLo, wx, y, wz) < p ? ids.bedrock : ids.deepslate
          } else if (y === h) {
            block = topId
          } else if (y >= h - underDepth) {
            block = underId
            // Sand surfaces sit on sandstone so caves don't drip sand.
            if (underId === blockId('minecraft:sand') && y < h - 1) block = ids.sandstone
          } else if (y < -8) {
            block = ids.deepslate
          } else if (y < 0) {
            // Stone/deepslate blend band between y=-8 and y=0.
            block = hashBlock(seedLo ^ 0x5eed, wx, y, wz) < (0 - y) / 8 ? ids.deepslate : ids.stone
          } else {
            block = ids.stone
          }
          setBlock(x, y, z, block)
        }
        if (underwater) {
          for (let y = h + 1; y <= SEA_LEVEL; y++) setBlock(x, y, z, ids.water)
        }
      }
    }

    // ---- caves (coarse grid + trilerp) ---------------------------------
    carveCaves(cx, cz, heights, maxHeight, getBlock, setBlock)

    // ---- ores -----------------------------------------------------------
    placeOres(cx, cz, getBlock, setBlock)

    // ---- trees ----------------------------------------------------------
    placeTrees(cx, cz, heights, biomes, getBlock, setBlock)

    return slots
  }

  function carveCaves (cx, cz, heights, maxHeight, getBlock, setBlock) {
    const STEP = 4
    const gxCount = 5 // x/z grid points: 0,4,8,12,16
    const y0 = MIN_Y
    const gyCount = Math.floor((maxHeight - y0) / STEP) + 2
    if (gyCount < 2) return
    const cheese = new Float32Array(gxCount * gxCount * gyCount)
    const spagA = new Float32Array(gxCount * gxCount * gyCount)
    const spagB = new Float32Array(gxCount * gxCount * gyCount)
    const gidx = (gx, gy, gz) => (gx * gxCount + gz) * gyCount + gy

    for (let gx = 0; gx < gxCount; gx++) {
      for (let gz = 0; gz < gxCount; gz++) {
        const wx = cx * 16 + gx * STEP
        const wz = cz * 16 + gz * STEP
        for (let gy = 0; gy < gyCount; gy++) {
          const wy = y0 + gy * STEP
          const i = gidx(gx, gy, gz)
          cheese[i] = noises.cheese.sample3(wx / 56, wy / 40, wz / 56)
          spagA[i] = noises.spaghettiA.sample3(wx / 72, wy / 24, wz / 72)
          spagB[i] = noises.spaghettiB.sample3(wx / 72, wy / 24, wz / 72)
        }
      }
    }

    const sample = (field, fx, fy, fz) => {
      // fx in block units 0..16, fy world y, fz 0..16 -> grid trilerp
      const gx = clamp(Math.floor(fx / STEP), 0, gxCount - 2)
      const gz = clamp(Math.floor(fz / STEP), 0, gxCount - 2)
      const gy = clamp(Math.floor((fy - y0) / STEP), 0, gyCount - 2)
      const tx = clamp(fx / STEP - gx, 0, 1)
      const tz = clamp(fz / STEP - gz, 0, 1)
      const ty = clamp((fy - y0) / STEP - gy, 0, 1)
      const c000 = field[gidx(gx, gy, gz)]
      const c100 = field[gidx(gx + 1, gy, gz)]
      const c010 = field[gidx(gx, gy + 1, gz)]
      const c110 = field[gidx(gx + 1, gy + 1, gz)]
      const c001 = field[gidx(gx, gy, gz + 1)]
      const c101 = field[gidx(gx + 1, gy, gz + 1)]
      const c011 = field[gidx(gx, gy + 1, gz + 1)]
      const c111 = field[gidx(gx + 1, gy + 1, gz + 1)]
      return lerp(
        lerp(lerp(c000, c100, tx), lerp(c010, c110, tx), ty),
        lerp(lerp(c001, c101, tx), lerp(c011, c111, tx), ty),
        tz)
    }

    for (let x = 0; x < 16; x++) {
      for (let z = 0; z < 16; z++) {
        const h = heights[x * 16 + z]
        const underwater = h < SEA_LEVEL
        const top = underwater ? h - 6 : h - 4
        for (let y = MIN_Y + 4; y <= top; y++) {
          const cur = getBlock(x, y, z)
          if (cur === ids.air || cur === ids.bedrock || cur === ids.water) continue
          const ch = sample(cheese, x, y, z)
          let carve = ch > 0.58
          if (!carve) {
            const a = sample(spagA, x, y, z)
            if (Math.abs(a) < 0.055) {
              const b = sample(spagB, x, y, z)
              carve = Math.abs(b) < 0.055
            }
          }
          // Strong cheese noise may breach the surface as an entrance.
          if (!carve && !underwater && y > top - 4 && ch > 0.78) carve = true
          if (carve) setBlock(x, y, z, ids.air)
        }
      }
    }
  }

  function placeOres (cx, cz, getBlock, setBlock) {
    const rng = chunkRandom(worldSeed, cx, cz, ORE_SALT)
    // Mountain check for emeralds uses the chunk-center climate.
    const centerClimate = climateAt(cx * 16 + 8, cz * 16 + 8)
    for (const ore of ORES) {
      if (ore.mountainsOnly && centerClimate.mountainness < 0.45) continue
      const oreId = blockId(ore.block)
      if (oreId === ids.air) continue
      for (let n = 0; n < ore.attempts; n++) {
        let x = rng.nextInt(16)
        let z = rng.nextInt(16)
        let y = clamp(ore.y(rng), MIN_Y + 1, MAX_Y - 1)
        const size = rng.nextRange(ore.size[0], ore.size[1])
        for (let i = 0; i < size; i++) {
          const cur = getBlock(x, y, z)
          if (cur === ids.stone || cur === ids.deepslate) setBlock(x, y, z, oreId)
          // Random-walk the vein, clamped inside the chunk
          x = clamp(x + rng.nextRange(-1, 1), 0, 15)
          z = clamp(z + rng.nextRange(-1, 1), 0, 15)
          y = clamp(y + rng.nextRange(-1, 1), MIN_Y + 1, MAX_Y - 1)
        }
      }
    }
  }

  function placeTrees (cx, cz, heights, biomes, getBlock, setBlock) {
    const rng = chunkRandom(worldSeed, cx, cz, TREE_SALT)
    const grassId = blockId('minecraft:grass_block')
    const kinds = {
      oak: { log: blockId('minecraft:oak_log'), leaves: blockId('minecraft:oak_leaves') },
      birch: { log: blockId('minecraft:birch_log'), leaves: blockId('minecraft:birch_leaves') },
      spruce: { log: blockId('minecraft:spruce_log'), leaves: blockId('minecraft:spruce_leaves') }
    }
    for (let attempt = 0; attempt < 10; attempt++) {
      const x = 2 + rng.nextInt(12) // 2..13 keeps the canopy in-chunk
      const z = 2 + rng.nextInt(12)
      const idx = x * 16 + z
      const biome = biomes[idx]
      if (!biome.trees || rng.nextFloat() > biome.trees) continue
      const h = heights[idx]
      if (h <= SEA_LEVEL || h > MAX_Y - 12) continue
      if (getBlock(x, h, z) !== grassId) continue
      const kind = kinds[biome.treeKind ?? 'oak'] ?? kinds.oak
      const trunk = 4 + rng.nextInt(3) // 4..6
      // Canopy: two radius-2 layers, then two radius-1 layers.
      for (let ly = h + trunk - 2; ly <= h + trunk + 1; ly++) {
        const r = ly <= h + trunk - 1 ? 2 : 1
        for (let dx = -r; dx <= r; dx++) {
          for (let dz = -r; dz <= r; dz++) {
            if (dx === 0 && dz === 0 && ly <= h + trunk) continue
            if (Math.abs(dx) === r && Math.abs(dz) === r && rng.nextFloat() < 0.6) continue
            if (getBlock(x + dx, ly, z + dz) === ids.air) setBlock(x + dx, ly, z + dz, kind.leaves)
          }
        }
      }
      for (let y = h + 1; y <= h + trunk; y++) setBlock(x, y, z, kind.log)
    }
  }

  return {
    name: 'infinite',
    seed: worldSeed,
    spawn: findSpawn(),
    generate,
    // Introspection used by tools/tests (and World for biome storage)
    climateAt,
    heightAt: (wx, wz) => heightFor(wx, wz),
    biomeAt: (wx, wz) => biomeFor(wx, wz),
    biomeIdAt,
    noises // exposed for diagnostics in tools/worldgen-map.js
  }
}

module.exports = { createInfiniteGenerator, ORES, CONTINENT_SPLINE }
