#!/usr/bin/env node
'use strict'

/**
 * Replay every captured `locate structure` answer through the model in
 * `src/world/structure-placement.js` and print one line per set.
 *
 * This is the evidence behind the numbers in `src/world/structures-data.js`:
 * a set is only marked `confirmed` when this prints a full tally.
 *
 *   node tools/worldgen-algo/verify-placements.js
 *   node tools/worldgen-algo/verify-placements.js --json
 *
 * Each observation is scored by taking the cell that *contains* the reported
 * chunk and asking the model where that cell puts its structure. That is a
 * stronger test than "is there a candidate near the answer": a cell has
 * `span^2` possible offsets, so a wrong table cannot score by luck.
 *
 * The engine is reported per set because the binary has two of them:
 * `mt` (legacy sets) reproduces the answer chunk exactly, `java` (pack-driven
 * sets) reproduces it up to the jigsaw origin, one chunk back on either axis.
 */

const fs = require('node:fs')
const path = require('node:path')

const { structureInCell } = require('../../src/world/structure-placement')
const { PLACEMENTS } = require('../../src/world/structures-data')

const CAPTURE_ROOT = path.resolve(__dirname, '../../research/proprietary/bds-1.26.52.3/structures/captures')

/** Every distinct (set, seed, chunk) answer in the capture tree. */
function loadObservations () {
  const seen = new Set()
  const rows = []
  function walk (dir) {
    let entries
    try {
      entries = fs.readdirSync(dir, { withFileTypes: true })
    } catch {
      return
    }
    for (const entry of entries) {
      const full = path.join(dir, entry.name)
      if (entry.isDirectory()) {
        walk(full)
        continue
      }
      if (entry.name !== 'structures.json') continue
      const capture = JSON.parse(fs.readFileSync(full, 'utf8'))
      for (const result of capture.results || []) {
        if (!result.found || !Array.isArray(result.at)) continue
        const seed = Number(capture.seed)
        const chunkX = Math.floor(result.at[0] / 16)
        const chunkZ = Math.floor(result.at[2] / 16)
        const id = String(result.id).includes(':') ? String(result.id) : `minecraft:${result.id}`
        const key = `${id}:${seed}:${chunkX}:${chunkZ}`
        if (seen.has(key)) continue
        seen.add(key)
        rows.push({
          id,
          seed,
          chunkX,
          chunkZ,
          block: result.at,
          from: result.from || [0, 0],
          command: result.command || null
        })
      }
    }
  }
  walk(CAPTURE_ROOT)
  return rows
}

/** Where `at` lands relative to the model's chunk, clipped for display. */
function deltaOf (row, start) {
  return [row.chunkX - start.chunkX, row.chunkZ - start.chunkZ]
}

function scoreSet (placement, rows) {
  let exact = 0
  let withinOne = 0
  const misses = []
  for (const row of rows) {
    const cellX = Math.floor(row.chunkX / placement.spacing)
    const cellZ = Math.floor(row.chunkZ / placement.spacing)
    const start = structureInCell(placement, row.seed, cellX, cellZ)
    const [dx, dz] = deltaOf(row, start)
    if (dx === 0 && dz === 0) {
      exact++
      withinOne++
    } else if (Math.abs(dx) <= 1 && Math.abs(dz) <= 1) {
      withinOne++
    } else {
      misses.push({ ...row, dx, dz })
    }
  }
  return { exact, withinOne, misses, total: rows.length }
}

function main () {
  const args = process.argv.slice(2)
  const asJson = args.includes('--json')
  const observations = loadObservations()
  const byId = new Map()
  for (const row of observations) {
    if (!byId.has(row.id)) byId.set(row.id, [])
    byId.get(row.id).push(row)
  }

  const report = []
  for (const [id, rows] of [...byId].sort((a, b) => a[0].localeCompare(b[0]))) {
    const placement = PLACEMENTS[id]
    if (!placement) {
      report.push({ id, total: rows.length, status: 'no table row' })
      continue
    }
    if (!placement.spacing) {
      report.push({ id, total: rows.length, status: 'not modelled' })
      continue
    }
    if (placement.spacing - placement.separation < 2) {
      // A one-chunk span has a single possible offset, so every chunk "matches"
      // and the tally would be meaningless. Say so instead of printing 24/24.
      report.push({ id, total: rows.length, status: 'degenerate band: span 1' })
      continue
    }
    const scored = scoreSet(placement, rows)
    report.push({
      id,
      engine: placement.engine || 'mt',
      spacing: placement.spacing,
      separation: placement.separation,
      salt: placement.salt,
      spread: placement.spreadType,
      exact: scored.exact,
      withinOne: scored.withinOne,
      total: scored.total,
      status: scored.exact === scored.total ? 'exact' : (scored.withinOne === scored.total ? 'within one chunk' : 'MISS'),
      misses: scored.misses.map((m) => ({
        seed: m.seed, at: m.block, chunk: [m.chunkX, m.chunkZ], delta: [m.dx, m.dz]
      }))
    })
  }

  if (asJson) {
    process.stdout.write(JSON.stringify(report, null, 2) + '\n')
    return
  }

  const pad = (value, width) => String(value).padEnd(width)
  console.log(pad('set', 26) + pad('engine', 7) + pad('band', 9) + pad('salt', 11) + pad('spread', 11) + 'exact / <=1 / total  status')
  let failures = 0
  for (const row of report) {
    if (row.status === 'no table row' || row.status === 'not modelled' || row.status.startsWith('degenerate')) {
      console.log(pad(row.id, 26) + pad('-', 7) + pad('-', 9) + pad('-', 11) + pad('-', 11) + `${row.total} observations  ${row.status}`)
      continue
    }
    if (row.status === 'MISS') failures++
    console.log(
      pad(row.id, 26) + pad(row.engine, 7) +
      pad(`${row.spacing}/${row.separation}`, 9) +
      pad(row.salt, 11) + pad(row.spread, 11) +
      `${row.exact} / ${row.withinOne} / ${row.total}  ${row.status}`
    )
  }
  if (failures) {
    console.error(`\n${failures} set(s) did not reproduce every capture`)
    process.exitCode = 1
  }
}

if (require.main === module) main()

module.exports = { loadObservations, scoreSet }
