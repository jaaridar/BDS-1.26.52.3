'use strict'

/**
 * Compare Bedrock's structure placement against Cubiomes' (Java) parameters.
 *
 * Cubiomes is the reference implementation of Java's world generation, and its
 * `getStructureConfig` table states, per structure type, the salt, the region
 * size (our `spacing`) and the chunk range (our `spacing - separation`). Reading
 * those numbers off that table is how "is Bedrock the same as Java here?" gets
 * answered without guessing at either side:
 *
 *   - if a set's captures land on its Java cells, the deployment is the Java one
 *     and the numbers are the table's;
 *   - if they do not, Bedrock uses its own numbers and they have to be measured.
 *
 * The comparison is deliberately in chunks, per axis, and reports the residual
 * and the search radius, because a reported position can sit in a neighbouring
 * chunk (the structures are bigger than a chunk, and the server reports an
 * origin block rather than the placement chunk).
 *
 *   node tools/worldgen-algo/compare-cubiomes.js
 *   node tools/worldgen-algo/compare-cubiomes.js --json
 */

const fs = require('node:fs')
const path = require('node:path')

const { DEFAULT_ROOT, byId, loadObservations } = require('./observations')
const { structureInCell } = require('../../src/world/structure-placement')

/**
 * Cubiomes `getStructureConfig`, MC 1.18 and later.
 *
 * Source: github.com/Cubitect/cubiomes, `finders.c`, the `s_feature` ..
 * `s_trial_chambers` block. Fields are (salt, spacing, span, triangular):
 * Cubiomes stores `chunkRange` = `spacing - separation`, and picks the
 * triangular resolver for the large structures (mansion, monument).
 */
const CUBIOMES_118 = {
  village: { salt: 10387312, spacing: 34, span: 26, triangular: false },
  pillager_outpost: { salt: 165745296, spacing: 32, span: 24, triangular: false },
  monument: { salt: 10387313, spacing: 32, span: 27, triangular: true },
  mansion: { salt: 10387319, spacing: 80, span: 60, triangular: true },
  ocean_ruin: { salt: 14357621, spacing: 20, span: 12, triangular: false },
  shipwreck: { salt: 165745295, spacing: 24, span: 20, triangular: false },
  ruined_portal: { salt: 34222645, spacing: 40, span: 25, triangular: false },
  ancient_city: { salt: 20083232, spacing: 24, span: 16, triangular: false },
  trial_chambers: { salt: 94251327, spacing: 34, span: 22, triangular: false },
  trail_ruins: { salt: 83469867, spacing: 34, span: 26, triangular: false },
  desert_pyramid: { salt: 14357617, spacing: 32, span: 24, triangular: false },
  jungle_temple: { salt: 14357619, spacing: 32, span: 24, triangular: false },
  swamp_hut: { salt: 14357620, spacing: 32, span: 24, triangular: false },
  igloo: { salt: 14357618, spacing: 32, span: 24, triangular: false }
}

const DEFAULT_OUT = path.join(
  'research', 'proprietary', 'bds-1.26.52.3', 'structures', 'cubiomes-compare.json')

const floorDiv = (a, b) => Math.floor(a / b)

/**
 * How far the reported chunk is from the nearest candidate, over a cell radius.
 *
 * A radius of 2 cells covers the case where the report belongs to a cell that is
 * not the one its own coordinate implies, which is what a large structure looks
 * like when it is measured this way.
 */
function nearest (placement, seed, chunkX, chunkZ, radius = 2) {
  const cellX = floorDiv(chunkX, placement.spacing)
  const cellZ = floorDiv(chunkZ, placement.spacing)
  let best = { distance: Infinity, dx: 0, dz: 0, atCell: [0, 0] }
  for (let cx = -radius; cx <= radius; cx++) {
    for (let cz = -radius; cz <= radius; cz++) {
      const start = structureInCell(placement, seed, cellX + cx, cellZ + cz)
      const dx = start.chunkX - chunkX
      const dz = start.chunkZ - chunkZ
      const distance = Math.max(Math.abs(dx), Math.abs(dz))
      if (distance < best.distance) best = { distance, dx, dz, atCell: [cx, cz] }
    }
  }
  return best
}

function compare (rows, config) {
  const out = []
  for (const [id, params] of Object.entries(config)) {
    const observations = rows.get(id) || []
    if (!observations.length) continue
    const placement = {
      id,
      spacing: params.spacing,
      separation: params.spacing - params.span,
      salt: params.salt,
      spreadType: params.triangular ? 'triangular' : 'linear'
    }
    const result = {
      id,
      salt: params.salt,
      spacing: params.spacing,
      separation: placement.separation,
      span: params.span,
      spreadType: placement.spreadType,
      observations: observations.length,
      exact: 0,
      withinOneChunk: 0,
      distances: []
    }
    for (const row of observations) {
      const chunkX = floorDiv(row.block[0], 16)
      const chunkZ = floorDiv(row.block[1], 16)
      const best = nearest(placement, row.seed, chunkX, chunkZ)
      if (best.distance === 0) result.exact++
      if (best.distance <= 1) result.withinOneChunk++
      result.distances.push(best.distance)
    }
    result.distances.sort((a, b) => a - b)
    const at = (fraction) => result.distances[Math.min(
      result.distances.length - 1, Math.floor(result.distances.length * fraction))]
    result.median = at(0.5)
    result.p90 = at(0.9)
    result.max = result.distances[result.distances.length - 1]
    delete result.distances
    result.verdict = result.withinOneChunk === result.observations
      ? 'matches Java'
      : result.median <= 2 ? 'close to Java' : 'its own parameters'
    out.push(result)
  }
  return out
}

function main (argv) {
  const rows = byId(loadObservations(DEFAULT_ROOT))
  const results = compare(rows, CUBIOMES_118)

  if (argv.includes('--json')) {
    const outIndex = argv.indexOf('--out')
    const target = outIndex >= 0 ? argv[outIndex + 1] : DEFAULT_OUT
    fs.mkdirSync(path.dirname(target), { recursive: true })
    fs.writeFileSync(target, JSON.stringify({
      source: 'github.com/Cubitect/cubiomes finders.c getStructureConfig (MC 1.18+)',
      config: CUBIOMES_118,
      results
    }, null, 1) + '\n')
    console.log(`wrote ${target}`)
    return 0
  }

  const pad = (value, width) => String(value).padEnd(width)
  console.log(pad('set', 18) + pad('salt', 11) + pad('grid', 9) + pad('n', 4) +
    pad('exact', 6) + pad('<=1', 6) + pad('median', 7) + pad('p90', 5) + 'verdict')
  for (const result of results) {
    console.log(
      pad(result.id, 18) + pad(result.salt, 11) +
      pad(`${result.spacing}/${result.separation}`, 9) +
      pad(result.observations, 4) + pad(result.exact, 6) +
      pad(result.withinOneChunk, 6) + pad(result.median, 7) + pad(result.p90, 5) +
      result.verdict)
  }
  return 0
}

if (require.main === module) process.exit(main(process.argv.slice(2)))

module.exports = { CUBIOMES_118, compare, nearest }
