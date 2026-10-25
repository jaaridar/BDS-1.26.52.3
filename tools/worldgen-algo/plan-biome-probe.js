#!/usr/bin/env node
'use strict'

/**
 * Probe the biome at chosen villages.
 *
 * `locate biome <id>` from a position returns distance 0 exactly when that
 * position is in `<id>`, so asking a village's own chunk about a handful of
 * biomes identifies the village's biome. That is the one biome question the
 * console can answer without dumping a world, and it is what tests whether the
 * villages that carry strongholds are the ones in particular biomes.
 *
 *   node tools/worldgen-algo/plan-biome-probe.js --seed 1 --strongholds -158,85 -228,-158
 *   node tools/worldgen-algo/plan-biome-probe.js --seed 1 --json > plan.json
 */

const { candidateStarts } = require('../../src/world/structure-placement')
const { PLACEMENTS } = require('../../src/world/structures-data')

/** Biomes a village can occupy, plus a few neighbours as a sanity check. */
const BIOMES = [
  'plains', 'desert', 'savanna', 'taiga', 'snowy_plains', 'snowy_taiga',
  'sunflower_plains', 'meadow', 'jungle', 'swamp'
]

function parseArgs (argv) {
  const args = { seeds: ['1'], radius: 700, negatives: 10, strongholds: [], json: false, kind: 'biome' }
  for (let i = 0; i < argv.length; i++) {
    switch (argv[i]) {
      case '--seed': args.seeds = String(argv[++i]).split(','); break
      case '--radius': args.radius = Number(argv[++i]); break
      case '--negatives': args.negatives = Number(argv[++i]); break
      case '--strongholds': args.strongholds.push(String(argv[++i])); break
      case '--json': args.json = true; break
      default: throw new Error(`unknown argument ${argv[i]}`)
    }
  }
  return args
}

function villagesFor (seed, radius) {
  return candidateStarts(PLACEMENTS['minecraft:village'], BigInt(seed), 0, 0, radius)
}

function main () {
  const args = parseArgs(process.argv.slice(2))
  const sweeps = []
  for (const seed of args.seeds) {
    const villages = villagesFor(seed, args.radius)
    const positives = (args.strongholds || []).map((pair) => pair.split(',').map(Number))
    // Controls: villages evenly spread through the same area, as far from a
    // positive as possible so a shared biome cannot be an artefact of proximity.
    const negatives = []
    const step = Math.max(1, Math.floor(villages.length / (args.negatives * 4)))
    for (let i = 0; i < villages.length && negatives.length < args.negatives; i += step) {
      const village = villages[i]
      if (positives.some((p) => p[0] === village.chunkX && p[1] === village.chunkZ)) continue
      negatives.push([village.chunkX, village.chunkZ])
    }
    const origins = [...positives, ...negatives].map(([x, z]) => `${x * 16 + 8},${z * 16 + 8}`)
    sweeps.push({
      slug: `biome_probe_${String(seed).replace(/[^0-9a-zA-Z]/g, '_')}`,
      kind: args.kind,
      ids: BIOMES,
      seeds: [seed],
      note: 'origins are village chunks; a biome answering distance 0 is that village\'s biome',
      origins
    })
  }
  if (args.json) {
    console.log(JSON.stringify({ sweeps }, null, 2))
    return
  }
  for (const sweep of sweeps) {
    console.log(`${sweep.slug}: ${sweep.origins.length} villages x ${sweep.ids.length} biomes = ${sweep.origins.length * sweep.ids.length} probes`)
  }
}

if (require.main === module) main()

module.exports = { BIOMES, villagesFor }
