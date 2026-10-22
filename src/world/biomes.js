'use strict'

/**
 * Overworld biome selection (clean-room).
 *
 * Since the Caves & Cliffs update, Minecraft selects overworld biomes with
 * a *multi-noise* biome source: independent climate noises - temperature,
 * humidity (vegetation), continentalness, erosion, weirdness and depth -
 * are sampled at each position and the biome whose climate parameter point
 * is nearest wins. That architecture, the parameter names, the sea level
 * (y=63) and the overworld height range (y -64..319) are all documented on
 * the Minecraft Wiki ("Biome", "World generation", "Noise") and in Mojang's
 * own developer articles; the biome numeric IDs below are the long-stable
 * Bedrock chunk-data IDs listed on the wiki's "Biome ID" table.
 *
 * What is NOT reproduced here: Mojang's exact climate parameter table and
 * noise router constants, which are not public for Bedrock. This module
 * implements the same decision structure with its own parameter points,
 * over a practical subset of overworld biomes. Expect comparable *kinds*
 * of terrain in comparable places (hot+dry -> desert, cold -> snowy, far
 * inland + high erosion variety -> mountains), not block-for-block vanilla
 * parity for a given seed. See docs/world-generation.md.
 *
 * Surface block names are resolved against the active palette by the
 * terrain generator, with fallbacks, so small palettes degrade gracefully.
 */

const SEA_LEVEL = 63
const MIN_Y = -64
const MAX_Y = 319

/**
 * Biome definitions. `id` is the Bedrock chunk biome-storage id.
 * Climate points live in normalized noise space, roughly [-1, 1] per axis:
 *   t = temperature, h = humidity, c = continentalness
 * Selection is nearest-point with per-axis weights, gated by water/height
 * rules applied in `selectBiome` (oceans, rivers, beaches, peaks), which
 * mirrors how the multi-noise source separates those categories.
 */
const BIOMES = [
  { name: 'ocean', id: 0, t: 0.0, h: 0.0, top: 'minecraft:gravel', under: 'minecraft:gravel', category: 'ocean' },
  { name: 'deep_ocean', id: 24, t: 0.0, h: 0.0, top: 'minecraft:gravel', under: 'minecraft:gravel', category: 'ocean' },
  { name: 'frozen_ocean', id: 10, t: -0.8, h: 0.0, top: 'minecraft:gravel', under: 'minecraft:gravel', category: 'ocean' },
  { name: 'river', id: 7, t: 0.0, h: 0.0, top: 'minecraft:gravel', under: 'minecraft:dirt', category: 'river' },
  { name: 'frozen_river', id: 11, t: -0.8, h: 0.0, top: 'minecraft:gravel', under: 'minecraft:dirt', category: 'river' },
  { name: 'beach', id: 16, t: 0.2, h: 0.0, top: 'minecraft:sand', under: 'minecraft:sand', category: 'beach' },
  { name: 'plains', id: 1, t: 0.15, h: -0.1, top: 'minecraft:grass_block', under: 'minecraft:dirt', category: 'land', trees: 0.02 },
  { name: 'forest', id: 4, t: 0.1, h: 0.35, top: 'minecraft:grass_block', under: 'minecraft:dirt', category: 'land', trees: 0.5 },
  { name: 'birch_forest', id: 27, t: 0.25, h: 0.2, top: 'minecraft:grass_block', under: 'minecraft:dirt', category: 'land', trees: 0.45, treeKind: 'birch' },
  { name: 'dark_forest', id: 29, t: 0.05, h: 0.65, top: 'minecraft:grass_block', under: 'minecraft:dirt', category: 'land', trees: 0.7 },
  { name: 'taiga', id: 5, t: -0.35, h: 0.3, top: 'minecraft:grass_block', under: 'minecraft:dirt', category: 'land', trees: 0.45, treeKind: 'spruce' },
  { name: 'snowy_plains', id: 12, t: -0.75, h: -0.1, top: 'minecraft:grass_block', under: 'minecraft:dirt', category: 'land', trees: 0.02 },
  { name: 'snowy_taiga', id: 30, t: -0.7, h: 0.35, top: 'minecraft:grass_block', under: 'minecraft:dirt', category: 'land', trees: 0.4, treeKind: 'spruce' },
  { name: 'desert', id: 2, t: 0.75, h: -0.7, top: 'minecraft:sand', under: 'minecraft:sand', category: 'land' },
  { name: 'badlands', id: 37, t: 0.85, h: -0.45, top: 'minecraft:sand', under: 'minecraft:sandstone', category: 'land' },
  { name: 'savanna', id: 35, t: 0.65, h: -0.15, top: 'minecraft:grass_block', under: 'minecraft:dirt', category: 'land', trees: 0.04 },
  { name: 'jungle', id: 21, t: 0.7, h: 0.7, top: 'minecraft:grass_block', under: 'minecraft:dirt', category: 'land', trees: 0.65 },
  { name: 'swamp', id: 6, t: 0.3, h: 0.8, top: 'minecraft:grass_block', under: 'minecraft:dirt', category: 'land', trees: 0.1 },
  { name: 'mountains', id: 3, t: -0.1, h: 0.0, top: 'minecraft:stone', under: 'minecraft:stone', category: 'peak', trees: 0.03, treeKind: 'spruce' }
]

const BY_NAME = new Map(BIOMES.map((b) => [b.name, b]))
const BY_ID = new Map(BIOMES.map((b) => [b.id, b]))

function biomeByName (name) {
  return BY_NAME.get(name)
}

function biomeById (id) {
  return BY_ID.get(id)
}

/**
 * Pick a biome from sampled climate + terrain height.
 *
 * @param {object} c climate sample, each axis roughly in [-1, 1]
 * @param {number} c.temperature
 * @param {number} c.humidity
 * @param {number} c.continentalness
 * @param {number} c.mountainness 0 on plains, approaching 1 on peaks
 * @param {boolean} c.isRiver river channel carved by the terrain shape
 * @param {number} surfaceY highest solid block y (before water fill)
 */
function selectBiome (c, surfaceY) {
  const frozen = c.temperature < -0.45

  if (c.isRiver && surfaceY <= SEA_LEVEL + 1) {
    return frozen ? BY_NAME.get('frozen_river') : BY_NAME.get('river')
  }

  if (surfaceY < SEA_LEVEL - 1) {
    if (frozen) return BY_NAME.get('frozen_ocean')
    return surfaceY < SEA_LEVEL - 14 ? BY_NAME.get('deep_ocean') : BY_NAME.get('ocean')
  }

  // Narrow shore band around sea level: height alone is not enough (half
  // of all lowland sits at y 64-65), so also require a coastal
  // continentalness value, as the vanilla multi-noise table does.
  if (surfaceY <= SEA_LEVEL + 1 && c.mountainness < 0.35 && (c.continentalness ?? 0) < 0.02) {
    return BY_NAME.get('beach')
  }

  if (c.mountainness > 0.72 || surfaceY > 150) {
    return BY_NAME.get('mountains')
  }

  // Nearest climate point among land biomes. Temperature is weighted
  // slightly higher than humidity so latitudinal bands read cleanly.
  let best = null
  let bestDist = Infinity
  for (const b of BIOMES) {
    if (b.category !== 'land') continue
    const dt = (c.temperature - b.t) * 1.25
    const dh = c.humidity - b.h
    const d = dt * dt + dh * dh
    if (d < bestDist) {
      bestDist = d
      best = b
    }
  }

  // Swamps only claim genuinely low, wet ground; otherwise the wettest
  // climate point would swallow every humid hill.
  if (best.name === 'swamp' && surfaceY > SEA_LEVEL + 6) {
    return BY_NAME.get('dark_forest')
  }
  return best
}

module.exports = { BIOMES, SEA_LEVEL, MIN_Y, MAX_Y, biomeByName, biomeById, selectBiome }
