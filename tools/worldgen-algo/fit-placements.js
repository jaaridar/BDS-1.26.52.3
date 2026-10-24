'use strict'

/**
 * Fit the recovered placement model against `locate structure` output.
 *
 * The model predicts a placement *chunk* per grid cell. The server reports a
 * block position for the structure's origin, which is not the same point: for
 * trail_ruins the reported block sits within three blocks of the placement
 * chunk's corner, so it is in that chunk or in the chunk immediately before it.
 * The comparison here therefore reports the residual in blocks as well as a
 * chunk-level pass/fail, so the convention stays visible instead of being
 * absorbed into a loose tolerance.
 *
 *   node tools/worldgen-algo/fit-placements.js
 *   node tools/worldgen-algo/fit-placements.js --id trail_ruins --json
 */

const fs = require('node:fs')
const path = require('node:path')

const { PLACEMENTS } = require('../../src/world/structures-data')
const { structureInCell } = require('../../src/world/structure-placement')

const ROOT = 'research/proprietary/bds-1.26.52.3/structures'

function parseArgs (argv) {
  const args = { root: ROOT, id: null, json: false, blocks: 3, verbose: false }
  for (let i = 2; i < argv.length; i++) {
    const arg = argv[i]
    const next = () => {
      const value = argv[++i]
      if (value === undefined) throw new Error(`${arg} needs a value`)
      return value
    }
    switch (arg) {
      case '--root': args.root = next(); break
      case '--id': args.id = next().replace(/^minecraft:/, ''); break
      case '--blocks': args.blocks = Number(next()); break
      case '--json': args.json = true; break
      case '--verbose': args.verbose = true; break
      default: throw new Error(`unknown argument ${arg}`)
    }
  }
  return args
}

/** Every structures.json under the capture root, however deeply nested. */
function findCaptures (directory, out = []) {
  if (!fs.existsSync(directory)) return out
  for (const entry of fs.readdirSync(directory, { withFileTypes: true })) {
    const full = path.join(directory, entry.name)
    if (entry.isDirectory()) findCaptures(full, out)
    else if (entry.name === 'structures.json') out.push(full)
  }
  return out
}

/** One observation per (seed, identifier): the first probe that found it. */
function observations (root) {
  const seen = new Set()
  const out = []
  for (const file of findCaptures(root).sort()) {
    let capture
    try {
      capture = JSON.parse(fs.readFileSync(file, 'utf8'))
    } catch {
      continue
    }
    for (const result of capture.results || []) {
      if (!result.found || !Array.isArray(result.at)) continue
      const id = (result.resolvedId || '').replace(/^minecraft:/, '')
      if (!id) continue
      const key = `${capture.seed}\u0000${id}`
      if (seen.has(key)) continue
      seen.add(key)
      out.push({ seed: Number(capture.seed), id, block: [result.at[0], result.at[2]] })
    }
  }
  return out
}

function floorDiv (a, b) { return Math.floor(a / b) }

function main () {
  const args = parseArgs(process.argv)
  const rows = observations(args.root)
  if (!rows.length) {
    console.error(`no catches under ${args.root}`)
    process.exit(1)
  }

  const byId = new Map()
  for (const row of rows) {
    if (args.id && row.id !== args.id) continue
    if (!byId.has(row.id)) byId.set(row.id, [])
    byId.get(row.id).push(row)
  }

  const report = []
  for (const [id, list] of [...byId].sort()) {
    const placement = PLACEMENTS[`minecraft:${id}`]
    if (!placement || !placement.spacing) {
      report.push({ id, observations: list.length, status: 'no placement parameters' })
      continue
    }
    let sameChunk = 0
    let withinBlocks = 0
    let missed = 0
    let worst = 0
    const residuals = []
    for (const row of list) {
      const chunk = [floorDiv(row.block[0], 16), floorDiv(row.block[1], 16)]
      const cell = [floorDiv(chunk[0], placement.spacing), floorDiv(chunk[1], placement.spacing)]
      const predicted = structureInCell(placement, row.seed, cell[0], cell[1])
      const dx = row.block[0] - predicted.chunkX * 16
      const dz = row.block[1] - predicted.chunkZ * 16
      residuals.push([row.seed, dx, dz])
      worst = Math.max(worst, Math.abs(dx), Math.abs(dz))
      if (dx === 0 && dz === 0 && chunk[0] === predicted.chunkX && chunk[1] === predicted.chunkZ) sameChunk++
      if (Math.abs(dx) <= args.blocks && Math.abs(dz) <= args.blocks) withinBlocks++
      else missed++
    }
    report.push({
      id,
      observations: list.length,
      spacing: placement.spacing,
      separation: placement.separation,
      salt: placement.salt,
      spreadType: placement.spreadType || 'linear',
      sameChunk,
      withinBlocks,
      missed,
      worstResidualBlocks: worst,
      residuals,
      status: missed === 0 ? 'fits' : `does not fit (${missed} outside ${args.blocks} blocks)`
    })
  }

  if (args.json) {
    console.log(JSON.stringify(report, null, 2))
    return
  }

  for (const row of report) {
    if (row.status === 'no placement parameters') {
      console.log(`${row.id}: ${row.observations} observations, no parameters to test`)
      continue
    }
    console.log(`${row.id}: ${row.observations} observations, spacing ${row.spacing}/${row.separation} salt ${row.salt} ${row.spreadType}`)
    console.log(`  exact corner: ${row.sameChunk}   within ${args.blocks} blocks: ${row.withinBlocks}   outside: ${row.missed}   worst residual: ${row.worstResidualBlocks}`)
    console.log(`  ${row.status}`)
    if (args.verbose || row.missed) {
      console.log(`  residuals (seed: dx,dz): ${row.residuals.map(([seed, dx, dz]) => `${seed}:${dx},${dz}`).join('  ')}`)
    }
  }
}

try {
  main()
} catch (error) {
  console.error(error.message)
  process.exit(1)
}
