'use strict'

/**
 * Biome generation data, read from the vanilla packs that ship with the server.
 *
 * This is the part of world generation that is *data*, not code: every biome
 * declares where it sits in the climate space and what its surface looks like.
 * That data is not a guess and does not need the binary -- it is in the
 * repository, and reading it is enough to know what the generator is aiming at.
 *
 * Fields consumed here (exact JSON paths, as the packs spell them):
 *
 *   minecraft:multinoise_generation_rules
 *       target_temperature, target_humidity, target_altitude, target_weirdness,
 *       weight                    -- the climate point this biome occupies
 *   minecraft:overworld_height
 *       noise_type                -- 'default' | 'lowlands' | 'taiga' | ...
 *   minecraft:surface_builder
 *       builder.type, sea_floor_depth/material, foundation_material,
 *       mid_material, top_material
 *   minecraft:climate
 *       temperature, downfall, snow_accumulation
 *
 * Only some packs carry the multinoise rules: the delta packs add a few biomes,
 * the cumulative `vanilla` pack carries the bulk. Loading order therefore
 * matters -- later packs override earlier ones, which is why `loadBiomeData`
 * takes an explicit ordered list.
 */

const fs = require('node:fs')
const path = require('node:path')

const { readJsonArchive } = require('../../tools/worldgen-algo/brarchive')

/** Read one pack's biome archive, if it has one. */
function readPack (packDir) {
  const archive = path.join(packDir, '__brarchive', 'biomes.brarchive')
  if (!fs.existsSync(archive)) return []
  const { entries } = readJsonArchive(fs.readFileSync(archive))
  return entries.map((entry) => entry.json)
}

/** Pull the worldgen-relevant fields out of one biome document. */
function parseBiome (document) {
  const biome = document['minecraft:biome']
  if (!biome) return null
  const identifier = biome.description && biome.description.identifier
  if (!identifier) return null
  const components = biome.components || {}
  const rules = components['minecraft:multinoise_generation_rules']
  const height = components['minecraft:overworld_height']
  const surface = components['minecraft:surface_builder']
  const climate = components['minecraft:climate']
  const builder = surface && surface.builder
  return {
    id: identifier,
    climatePoint: rules
      ? {
          temperature: rules.target_temperature,
          humidity: rules.target_humidity,
          altitude: rules.target_altitude,
          weirdness: rules.target_weirdness,
          weight: rules.weight
        }
      : null,
    height: height ? { noiseType: height.noise_type } : null,
    surface: builder
      ? {
          type: builder.type,
          seaFloorDepth: builder.sea_floor_depth,
          seaFloorMaterial: builder.sea_floor_material,
          foundationMaterial: builder.foundation_material,
          midMaterial: builder.mid_material,
          topMaterial: builder.top_material
        }
      : null,
    weather: climate
      ? {
          temperature: climate.temperature,
          downfall: climate.downfall,
          snowAccumulation: climate.snow_accumulation
        }
      : null
  }
}

/**
 * Load every biome the given packs define, later packs overriding earlier ones.
 *
 * @param {string[]} packDirs absolute or repo-relative pack directories
 * @returns {{biomes: Map<string, object>, order: string[], withClimate: number}}
 */
function loadBiomeData (packDirs) {
  const biomes = new Map()
  const order = []
  for (const packDir of packDirs) {
    for (const document of readPack(packDir)) {
      const biome = parseBiome(document)
      if (!biome) continue
      if (!biomes.has(biome.id)) order.push(biome.id)
      biomes.set(biome.id, biome)
    }
  }
  let withClimate = 0
  for (const biome of biomes.values()) if (biome.climatePoint) withClimate++
  return { biomes, order, withClimate }
}

/**
 * The packs that together define the current world, in load order.
 *
 * The cumulative `vanilla` pack carries the multinoise rules; the versioned
 * packs after it are deltas and override individual biomes.
 */
const DEFAULT_PACKS = [
  'behavior_packs/vanilla',
  'behavior_packs/vanilla_1.21.100',
  'behavior_packs/vanilla_1.26.0',
  'behavior_packs/vanilla_1.26.50'
]

module.exports = { loadBiomeData, parseBiome, readPack, DEFAULT_PACKS }
