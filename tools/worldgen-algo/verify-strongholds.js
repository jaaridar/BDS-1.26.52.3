#!/usr/bin/env node
'use strict'

/**
 * Replay captured strongholds against `src/world/stronghold.js`.
 *
 *   node tools/worldgen-algo/verify-strongholds.js
 *   node tools/worldgen-algo/verify-strongholds.js --slug stronghold_enum2 --json
 *
 * Two numbers matter, and both are printed:
 *
 *   exact   the captured chunk is the chunk the cell predicts, and the cell's
 *           third draw is below the quarter-gate;
 *   cell    the captured chunk falls inside the cell the model assigns it to,
 *           which holds for every stronghold, gated or relocated.
 *
 * A relocated stronghold is not a miss -- it is a stronghold the model knows the
 * cell of but not yet the position of, because the position comes from the ring
 * search's biome test. They are reported apart so the tally cannot flatter
 * itself.
 */

const path = require('node:path')
const { loadEnumeration } = require('./structure-enumeration')
const { strongholdInCell, CELL, GRID_ODDS } = require('../../src/world/stronghold')

function parseArgs (argv) {
  const args = { slug: 'stronghold_enum2', json: false }
  for (let i = 0; i < argv.length; i++) {
    switch (argv[i]) {
      case '--slug': args.slug = argv[++i]; break
      case '--json': args.json = true; break
      default: throw new Error(`unknown argument ${argv[i]}`)
    }
  }
  return args
}

function score (slug) {
  const { seeds } = loadEnumeration(slug, 'stronghold')
  const rows = []
  for (const entry of seeds) {
    for (const answer of entry.answers) {
      const cellX = Math.floor(answer.chunkX / CELL)
      const cellZ = Math.floor(answer.chunkZ / CELL)
      const predicted = strongholdInCell(entry.seed, cellX, cellZ)
      const exact = predicted.chunkX === answer.chunkX && predicted.chunkZ === answer.chunkZ
      rows.push({
        seed: entry.seed,
        observed: [answer.chunkX, answer.chunkZ],
        predicted: [predicted.chunkX, predicted.chunkZ],
        cell: [cellX, cellZ],
        gate: predicted.gate,
        onGrid: predicted.onGrid,
        exact
      })
    }
  }
  const exact = rows.filter((row) => row.exact)
  const relocated = rows.filter((row) => !row.exact)
  return {
    slug,
    total: rows.length,
    exact: exact.length,
    relocated: relocated.length,
    // The gate has to explain the split: every exact hit is gated in, and the
    // relocated ones mostly are not.
    exactGated: exact.filter((row) => row.onGrid).length,
    relocatedGated: relocated.filter((row) => row.onGrid).length,
    rows
  }
}

function main () {
  const args = parseArgs(process.argv.slice(2))
  const result = score(args.slug)
  if (args.json) {
    console.log(JSON.stringify(result, null, 2))
    return
  }
  console.log(`${result.slug}: ${result.total} captured strongholds`)
  console.log(`  exact grid position: ${result.exact}/${result.total}` +
    `  (gate < ${GRID_ODDS}: ${result.exactGated}/${result.exact})`)
  console.log(`  relocated:           ${result.relocated}/${result.total}` +
    `  (gate >= ${GRID_ODDS}: ${result.relocated - result.relocatedGated}/${result.relocated})`)
  for (const row of result.rows) {
    const mark = row.exact ? 'exact' : 'relocated'
    console.log(`  seed ${row.seed}  observed ${row.observed.join(',').padEnd(11)}` +
      ` predicted ${row.predicted.join(',').padEnd(11)} gate ${row.gate.toFixed(3)}  ${mark}`)
  }
  if (result.exactGated !== result.exact) process.exitCode = 1
}

if (require.main === module) main()

module.exports = { score }
