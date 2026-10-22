'use strict'

const test = require('node:test')
const assert = require('node:assert')

const { splitmix64Next, deriveSeeds, normalizeSeed, Xoroshiro128PlusPlus, chunkRandom } = require('../../src/world/rng')
const { PerlinNoise, OctaveNoise, makeSpline } = require('../../src/world/noise')
const { selectBiome, SEA_LEVEL, MIN_Y } = require('../../src/world/biomes')
const { createInfiniteGenerator, CONTINENT_SPLINE } = require('../../src/world/terrain')
const { BlockPalette } = require('../../src/world/palette')
const { encodeColumn, BLOCKS_PER_SUBCHUNK, BIOMES_PER_SUBCHUNK, OVERWORLD } = require('../../src/world/chunk')
const { World } = require('../../src/world/world')
const { loadConfig } = require('../../src/config')

function blockAt (slots, x, y, z) {
  const sub = Math.floor(y / 16)
  const slot = sub - OVERWORLD.minSubChunkIndex
  const arr = slots[slot]
  if (!arr) return 0
  return arr[(x << 8) | (z << 4) | (y - sub * 16)]
}

function makeGen (seed) {
  const palette = BlockPalette.terrain()
  return { palette, gen: createInfiniteGenerator(palette, { seed }) }
}

test('splitmix64 matches its published reference vector', () => {
  // Well-known first output of splitmix64 seeded with 0.
  assert.strictEqual(splitmix64Next(0n).value, 0xe220a8397b1dcdafn)
  assert.strictEqual(deriveSeeds(0n, 1)[0], 0xe220a8397b1dcdafn)
})

test('seed normalization: numeric, signed, text and empty', () => {
  assert.strictEqual(normalizeSeed(''), 0n)
  assert.strictEqual(normalizeSeed('42'), 42n)
  assert.strictEqual(normalizeSeed(-1), 0xffffffffffffffffn)
  assert.notStrictEqual(normalizeSeed('abc'), normalizeSeed('abd'))
  assert.strictEqual(normalizeSeed('openbds'), normalizeSeed('openbds'))
})

test('xoroshiro128++ and chunkRandom are deterministic', () => {
  const a = new Xoroshiro128PlusPlus(1234n)
  const b = new Xoroshiro128PlusPlus(1234n)
  for (let i = 0; i < 100; i++) {
    const f = a.nextFloat()
    assert.ok(f >= 0 && f < 1)
    assert.strictEqual(f, b.nextFloat())
  }
  const c1 = chunkRandom(7n, -3, 9, 101)
  const c2 = chunkRandom(7n, -3, 9, 101)
  assert.deepStrictEqual(
    Array.from({ length: 8 }, () => c1.nextInt(1000)),
    Array.from({ length: 8 }, () => c2.nextInt(1000)))
  const c3 = chunkRandom(7n, -3, 10, 101)
  assert.notDeepStrictEqual(
    Array.from({ length: 8 }, () => chunkRandom(7n, -3, 9, 101).nextInt(1000)),
    Array.from({ length: 8 }, () => c3.nextInt(1000)))
})

test('perlin/octave noise is bounded and deterministic', () => {
  const n1 = new PerlinNoise(99n)
  const n2 = new PerlinNoise(99n)
  for (let x = -5; x < 5; x += 0.37) {
    for (let y = -5; y < 5; y += 0.41) {
      const v = n1.noise2(x, y)
      assert.ok(Math.abs(v) < 1.6, `|noise| ${v}`)
      assert.strictEqual(v, n2.noise2(x, y))
    }
  }
  const oct = new OctaveNoise(5n, { octaves: 4 })
  for (let i = 0; i < 200; i++) {
    assert.ok(Math.abs(oct.sample2(i * 0.13, i * -0.07)) < 1.6)
    assert.ok(Math.abs(oct.sample3(i * 0.11, i * 0.05, i * -0.09)) < 1.6)
  }
})

test('continent spline crosses sea level and spline clamps at the ends', () => {
  assert.ok(CONTINENT_SPLINE(-1) < SEA_LEVEL)
  assert.ok(CONTINENT_SPLINE(0.05) > SEA_LEVEL)
  const s = makeSpline([[0, 10], [1, 20]])
  assert.strictEqual(s(-5), 10)
  assert.strictEqual(s(5), 20)
  assert.strictEqual(s(0.5), 15)
})

test('biome selection follows climate gates', () => {
  const base = { temperature: 0, humidity: 0, continentalness: 0.4, mountainness: 0, isRiver: false }
  assert.strictEqual(selectBiome({ ...base, temperature: 0.75, humidity: -0.7 }, 70).name, 'desert')
  assert.strictEqual(selectBiome({ ...base, temperature: 0.7, humidity: 0.7 }, 70).name, 'jungle')
  assert.strictEqual(selectBiome({ ...base, temperature: -0.75, humidity: -0.1 }, 70).name, 'snowy_plains')
  assert.strictEqual(selectBiome({ ...base, temperature: -0.8 }, 40).name, 'frozen_ocean')
  assert.strictEqual(selectBiome({ ...base }, 40).name, 'deep_ocean')
  assert.strictEqual(selectBiome({ ...base, mountainness: 0.9 }, 170).name, 'mountains')
  assert.strictEqual(selectBiome({ ...base, isRiver: true }, SEA_LEVEL - 3).name, 'river')
})

test('chunk generation is deterministic per seed and differs across seeds', () => {
  const { gen } = makeGen('42')
  const a = gen.generate(2, -3)
  const b = gen.generate(2, -3)
  assert.deepStrictEqual(a.map((s) => s && [...s]), b.map((s) => s && [...s]))
  const { gen: other } = makeGen('43')
  const c = other.generate(2, -3)
  assert.notDeepStrictEqual(a.map((s) => s && [...s]), c.map((s) => s && [...s]))
})

test('strata: bedrock floor, solid surface, water filled to sea level', () => {
  const { palette, gen } = makeGen('42')
  const bedrock = palette.runtimeId('minecraft:bedrock')
  const water = palette.runtimeId('minecraft:water')
  const slots = gen.generate(0, 0)
  let sawWaterColumn = false
  for (let x = 0; x < 16; x++) {
    for (let z = 0; z < 16; z++) {
      assert.strictEqual(blockAt(slots, x, MIN_Y, z), bedrock, 'bedrock floor')
      const h = gen.heightAt(x, z)
      assert.notStrictEqual(blockAt(slots, x, h, z), 0, 'surface block is solid')
      if (h < SEA_LEVEL) {
        sawWaterColumn = true
        assert.strictEqual(blockAt(slots, x, SEA_LEVEL, z), water, 'water at sea level')
        assert.strictEqual(blockAt(slots, x, SEA_LEVEL + 1, z), 0, 'air above sea level')
      }
    }
  }
  // Chunk (0,0) of seed 42 is a coastline (spawn at y=67, ocean nearby);
  // if tuning changes that, at least require the generator to produce
  // water somewhere in a small neighborhood.
  if (!sawWaterColumn) {
    let found = false
    outer: for (let cx = -4; cx < 5 && !found; cx++) {
      for (let cz = -4; cz < 5; cz++) {
        if (gen.heightAt(cx * 16 + 8, cz * 16 + 8) < SEA_LEVEL) { found = true; break outer }
      }
    }
    assert.ok(found, 'ocean exists near origin')
  }
})

test('caves carve underground air but never touch the bedrock floor', () => {
  const { palette, gen } = makeGen('-12345')
  const bedrock = palette.runtimeId('minecraft:bedrock')
  let caveAir = 0
  for (let cx = 0; cx < 3; cx++) {
    const slots = gen.generate(cx, 0)
    for (let x = 0; x < 16; x++) {
      for (let z = 0; z < 16; z++) {
        assert.strictEqual(blockAt(slots, x, MIN_Y, z), bedrock)
        const h = gen.heightAt(cx * 16 + x, z)
        for (let y = MIN_Y + 5; y < h - 6; y++) {
          if (blockAt(slots, x, y, z) === 0) caveAir++
        }
      }
    }
  }
  assert.ok(caveAir > 0, `expected some cave air, got ${caveAir}`)
})

test('ores appear underground and respect their height bands', () => {
  const { palette, gen } = makeGen('2026')
  const diamond = palette.runtimeId('minecraft:diamond_ore')
  const iron = palette.runtimeId('minecraft:iron_ore')
  const coal = palette.runtimeId('minecraft:coal_ore')
  let diamonds = 0
  let irons = 0
  let coals = 0
  for (let cx = -2; cx < 3; cx++) {
    for (let cz = -2; cz < 3; cz++) {
      const slots = gen.generate(cx, cz)
      for (let x = 0; x < 16; x++) {
        for (let z = 0; z < 16; z++) {
          const h = gen.heightAt(cx * 16 + x, cz * 16 + z)
          for (let y = MIN_Y + 1; y < h; y++) {
            const b = blockAt(slots, x, y, z)
            if (b === diamond) { diamonds++; assert.ok(y <= 16, `diamond at y=${y}`) }
            if (b === iron) irons++
            if (b === coal) coals++
          }
        }
      }
    }
  }
  assert.ok(diamonds > 0, 'diamonds generated')
  assert.ok(irons > 0 && coals > 0, 'iron and coal generated')
  assert.ok(coals > diamonds, 'coal is more common than diamond')
})

test('spawn stands on dry land at the surface', () => {
  const { gen } = makeGen('openbds')
  const h = gen.heightAt(gen.spawn.x, gen.spawn.z)
  assert.strictEqual(gen.spawn.y, h + 1)
  assert.ok(h > SEA_LEVEL, `spawn height ${h} is above sea level`)
})

test('neighboring chunks agree on border heights (world-space fields)', () => {
  const { gen } = makeGen('42')
  // heightAt is the same function generate() uses per column, so equal
  // world coordinates must give equal heights regardless of chunk context.
  assert.strictEqual(gen.heightAt(16, 5), gen.heightAt(16, 5))
  const a = gen.generate(0, 0)
  const b = gen.generate(1, 0)
  // Surface continuity: adjacent border columns differ by at most a few
  // blocks (no chunk seams/cliffs from per-chunk randomness).
  for (let z = 0; z < 16; z++) {
    const east = gen.heightAt(15, z)
    const west = gen.heightAt(16, z)
    assert.ok(Math.abs(east - west) <= 6, `border step at z=${z}: ${east} -> ${west}`)
  }
  assert.ok(a.some(Boolean) && b.some(Boolean))
})

function readSignedVarint (buf, state) {
  let result = 0
  let shift = 0
  let byte
  do {
    byte = buf[state.o++]
    result |= (byte & 0x7f) << shift
    shift += 7
  } while (byte & 0x80)
  return (result >>> 1) ^ -(result & 1)
}

function decodeStorage (buf, state, length) {
  const header = buf[state.o++]
  const bits = header >> 1
  const values = new Array(length)
  if (bits === 0) {
    values.fill(readSignedVarint(buf, state))
    return values
  }
  const perWord = Math.floor(32 / bits)
  const words = Math.ceil(length / perWord)
  const mask = (1 << bits) - 1
  const slotsIdx = new Array(length)
  for (let w = 0; w < words; w++) {
    const word = buf.readUInt32LE(state.o)
    state.o += 4
    for (let i = 0; i < perWord; i++) {
      const idx = w * perWord + i
      if (idx < length) slotsIdx[idx] = (word >>> (bits * i)) & mask
    }
  }
  const count = readSignedVarint(buf, state)
  const pal = []
  for (let i = 0; i < count; i++) pal.push(readSignedVarint(buf, state))
  for (let i = 0; i < length; i++) values[i] = pal[slotsIdx[i]]
  return values
}

test('encodeColumn with biomeSampler writes per-cell biomes', () => {
  const floor = new Uint16Array(BLOCKS_PER_SUBCHUNK)
  floor[0] = 1
  const slots = []
  slots[4] = floor
  const sampler = (wx, _wy, _wz) => (wx >= 8 ? 2 : 1) // desert east, plains west
  const { payload, subChunkCount } = encodeColumn({ subChunks: slots, biomeSampler: sampler, chunkX: 0, chunkZ: 0 })
  assert.strictEqual(subChunkCount, 5)
  const state = { o: 0 }
  for (let i = 0; i < subChunkCount; i++) {
    state.o += 2
    decodeStorage(payload, state, BLOCKS_PER_SUBCHUNK)
  }
  const biomes = decodeStorage(payload, state, BIOMES_PER_SUBCHUNK)
  // cell (bx=0,bz=0,by=0) -> index 0 samples wx=2 -> plains(1)
  // cell (bx=3,bz=0,by=0) -> index 48 samples wx=14 -> desert(2)
  assert.strictEqual(biomes[0], 1)
  assert.strictEqual(biomes[48], 2)
})

test('World encodes an infinite chunk deterministically', () => {
  const palette = BlockPalette.terrain()
  const make = () => new World({
    generator: createInfiniteGenerator(palette, { seed: '42' }),
    palette,
    seed: '42'
  })
  const w1 = make()
  const w2 = make()
  const c1 = w1.getColumn(0, 0)
  const c2 = w2.getColumn(0, 0)
  assert.ok(c1.subChunkCount > 5, 'terrain chunk has real height')
  assert.ok(c1.payload.equals(c2.payload), 'identical wire payloads')
  assert.strictEqual(w1.spawn.y, w2.spawn.y)
})

test('config accepts the infinite generator and terrain palette', () => {
  const cfg = loadConfig({ env: {}, argv: { generator: 'infinite', palette: 'terrain' } })
  assert.strictEqual(cfg.generator, 'infinite')
  assert.strictEqual(cfg.palette, 'terrain')
})
