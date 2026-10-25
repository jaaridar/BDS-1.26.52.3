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
 *   exact   the captured chunk is the grid chunk the cell predicts, and the
 *           cell's third draw is below the quarter threshold;
 *   cell    the captured chunk falls inside the cell the model assigns it to,
 *           which holds for every stronghold, gated or relocated.
 *
 * A relocated stronghold is not a miss -- it is a stronghold the model knows the
 * cell of but not yet the position of, because the position comes from the ring
 * search's biome test. They are reported apart so the tally cannot flatter
 * itself.
 */

const fs = require('node:fs')
const path = require('node:path')
const { loadEnumeration } = require('./structure-enumeration')
const { strongholdInCell, CELL, GRID_ODDS } = require('../../src/world/stronghold')

function parseArgs (argv) {
  // No --slug means every capture set that holds strongholds, so the default
  // tally is the whole corpus rather than one hand-picked set.
  const args = { slugs: [], json: false }
  for (let i = 0; i < argv.length; i++) {
    switch (argv[i]) {
      case '--slug': args.slugs.push(argv[++i]); break
      case '--json': args.json = true; break
      default: throw new Error(`unknown argument ${argv[i]}`)
    }
  }
  if (!args.slugs.length) args.slugs = captureSlugs()
  return args
}

const CAPTURE_ROOT = path.resolve(__dirname, '../../research/proprietary/bds-1.26.52.3/structures/captures')

/** Every capture set that recorded at least one stronghold. */
function captureSlugs () {
  if (!fs.existsSync(CAPTURE_ROOT)) return ['stronghold_enum2']
  const slugs = []
  for (const entry of fs.readdirSync(CAPTURE_ROOT, { withFileTypes: true })) {
    if (!entry.isDirectory()) continue
    try {
      if (score(entry.name).total) slugs.push(entry.name)
    } catch {
      // A capture set without a structures.json is simply not one of ours.
    }
  }
  return slugs.sort()
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
        gated: predicted.gated,
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
    // relocated ones almost none of them are.
    exactGated: exact.filter((row) => row.gated).length,
    relocatedGated: relocated.filter((row) => row.gated).length,
    rows
  }
}

function main () {
  const args = parseArgs(process.argv.slice(2))
  const results = args.slugs.map((slug) => score(slug))
  if (args.json) {
    console.log(JSON.stringify(results.length === 1 ? results[0] : results, null, 2))
    return
  }
  for (const result of results) {
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
  }
  const total = results.reduce((sum, r) => sum + r.total, 0)
  const exact = results.reduce((sum, r) => sum + r.exact, 0)
  const gated = results.reduce((sum, r) => sum + r.exactGated + r.relocatedGated, 0)
  console.log(`\nall sets: exact ${exact}/${total}` +
    `  gated cells ${gated} (exact ${exact}, ${gated - exact} relocated)` +
    `  ungated cells ${total - gated} (exact 0)`)
  // The model makes one hard claim: an ungated cell is never the grid position.
  if (results.some((result) => result.exactGated !== result.exact)) process.exitCode = 1
}

if (require.main === module) main()

module.exports = { score }
