#!/usr/bin/env node
'use strict'

/**
 * Probe the village-stronghold rule.
 *
 * Every stronghold `/locate` reports that is not on a 200-chunk cell's grid
 * position turns out to be exactly on a village. So the question is which
 * villages carry one, and answering that needs positives *and* negatives.
 *
 * This plan puts an origin on every village the model predicts (the village
 * grid is exact, so those origins are real village chunks), and `/locate
 * structure stronghold` from a village answers that same chunk only when the
 * village holds a stronghold. One sweep therefore labels hundreds of villages.
 *
 *   node tools/worldgen-algo/plan-village-probe.js --seed 1 --radius 500
 *   node tools/worldgen-algo/plan-village-probe.js --seed 1,2,3 --json > plan.json
 */

const { candidateStarts } = require('../../src/world/structure-placement')
const { PLACEMENTS } = require('../../src/world/structures-data')

function parseArgs (argv) {
  const args = { seeds: ['1'], radius: 500, minRadius: 0, json: false, limit: 900 }
  for (let i = 0; i < argv.length; i++) {
    switch (argv[i]) {
      case '--seed': args.seeds = String(argv[++i]).split(','); break
      case '--radius': args.radius = Number(argv[++i]); break
      case '--min-radius': args.minRadius = Number(argv[++i]); break
      case '--limit': args.limit = Number(argv[++i]); break
      case '--json': args.json = true; break
      default: throw new Error(`unknown argument ${argv[i]}`)
    }
  }
  return args
}

/** Village chunks the model predicts within `radius` chunks of the origin. */
function villagesFor (seed, radius, minRadius = 0) {
  const village = PLACEMENTS['minecraft:village']
  return candidateStarts(village, BigInt(seed), 0, 0, radius)
    .map((start) => ({ chunk: [start.chunkX, start.chunkZ], block: [start.blockX, start.blockZ] }))
    .filter((entry) => Math.hypot(entry.chunk[0], entry.chunk[1]) >= minRadius)
    .sort((a, b) => Math.hypot(a.chunk[0], a.chunk[1]) - Math.hypot(b.chunk[0], b.chunk[1]))
}

function main () {
  const args = parseArgs(process.argv.slice(2))
  const sweeps = args.seeds.map((seed) => {
    let villages = villagesFor(seed, args.radius, args.minRadius)
    // Even thinning keeps the sample spread over the whole radius instead of
    // stopping at a distance cut.
    if (villages.length > args.limit) {
      const step = villages.length / args.limit
      villages = Array.from({ length: args.limit }, (_, i) => villages[Math.floor(i * step)])
    }
    return {
      slug: `village_probe_${String(seed).replace(/[^0-9a-zA-Z]/g, '_')}`,
      ids: ['stronghold'],
      seeds: [seed],
      note: 'origins are modeled village chunks: an answer equal to the origin means that village holds a stronghold',
      origins: villages.map((village) => `${village.block[0]},${village.block[1]}`)
    }
  })
  if (args.json) {
    console.log(JSON.stringify({ sweeps }, null, 2))
    return
  }
  for (const sweep of sweeps) {
    console.log(`${sweep.slug}: ${sweep.origins.length} village origins`)
    console.log(`  first: ${sweep.origins.slice(0, 5).join(' ')}`)
  }
}

if (require.main === module) main()

module.exports = { villagesFor }
