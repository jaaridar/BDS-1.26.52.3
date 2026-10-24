'use strict'

/**
 * Fit structure placement parameters to positions the server reported.
 *
 * The oracle hands us one fact per (seed, structure): the nearest placed
 * structure to the world origin. Our model predicts a *set* of accepted cell
 * starts. The two are compared like this:
 *
 *   - the claim under test is that the reported position is one of the model's
 *     cell starts (same chunk). The server may keep searching past a cell whose
 *     biome check fails, so the model's *nearest* start is allowed to be closer
 *     than the answer; what is not allowed is the answer not being a start at
 *     all.
 *   - a candidate parameter set is accepted only if it explains every captured
 *     answer for that structure, over every seed. One miss rejects it.
 *
 * That is a falsification test, not a fit: the solver enumerates plausible
 * parameter sets and keeps the ones that survive. Nothing is adjusted until it
 * matches, which is the difference between measuring and curve-fitting.
 *
 *   node tools/worldgen-algo/fit-structures.js --capture dir/seed-1 --capture dir/seed-2
 *   node tools/worldgen-algo/fit-structures.js --capture ... --salts 0..2000000000
 */

const fs = require('node:fs')
const path = require('node:path')

const { structureInCell } = require('../../src/world/structure-placement')

function parseArgs (argv) {
  const args = { captures: [], spacingMax: 96, separationMax: 32, radiusCells: 40, top: 5 }
  for (let i = 2; i < argv.length; i++) {
    const arg = argv[i]
    const next = () => {
      const value = argv[++i]
      if (value === undefined) throw new Error(`${arg} needs a value`)
      return value
    }
    switch (arg) {
      case '--capture': args.captures.push(next()); break
      case '--spacing-max': args.spacingMax = Number(next()); break
      case '--separation-max': args.separationMax = Number(next()); break
      case '--radius-cells': args.radiusCells = Number(next()); break
      case '--salts': args.salts = next(); break
      case '--salt-file': args.saltFile = next(); break
      case '--id': args.id = next(); break
      case '--top': args.top = Number(next()); break
      case '--json': args.json = true; break
      case '--help':
        console.log('usage: fit-structures.js --capture <dir> [--id <structure>] [--salts a,b,c | --salts lo..hi] [--spacing-max n]')
        process.exit(0)
        break
      default: throw new Error(`unknown argument ${arg}`)
    }
  }
  if (!args.captures.length) throw new Error('at least one --capture is required')
  return args
}

/** Read every capture directory into {seed, structures: {name: [x, z]}}. */
function loadObservations (dirs, wantedId) {
  const observations = []
  for (const dir of dirs) {
    const file = path.join(dir, 'structures.json')
    if (!fs.existsSync(file)) continue
    const capture = JSON.parse(fs.readFileSync(file, 'utf8'))
    for (const result of capture.results || []) {
      if (!result.found || !result.at) continue
      const resolved = (result.resolvedId || result.id || '').replace(/^minecraft:/, '')
      if (wantedId && resolved !== wantedId.replace(/^minecraft:/, '')) continue
      observations.push({
        seed: Number(capture.seed),
        id: resolved,
        chunk: [Math.floor(result.at[0] / 16), Math.floor(result.at[2] / 16)],
        at: result.at
      })
    }
  }
  // One observation per (seed, id): later duplicates are the same answer.
  const seen = new Set()
  return observations.filter((observation) => {
    const key = `${observation.seed}|${observation.id}`
    if (seen.has(key)) return false
    seen.add(key)
    return true
  })
}

/** Does this parameter set put an accepted start exactly on the answer chunk? */
function explains (placement, observation, radiusCells) {
  const [targetX, targetZ] = observation.chunk
  const span = placement.spacing - placement.separation
  if (span <= 0) return false
  const minCellX = Math.floor((targetX - 1) / placement.spacing)
  const maxCellX = Math.floor((targetX + 1) / placement.spacing) + 1
  const minCellZ = Math.floor((targetZ - 1) / placement.spacing)
  const maxCellZ = Math.floor((targetZ + 1) / placement.spacing) + 1
  for (let cellZ = minCellZ; cellZ <= maxCellZ; cellZ++) {
    for (let cellX = minCellX; cellX <= maxCellX; cellX++) {
      const start = structureInCell(placement, observation.seed, cellX, cellZ)
      if (!start.accepted) continue
      if (start.chunkX === targetX && start.chunkZ === targetZ) return true
    }
  }
  return false
}

function parseSalts (spec, file) {
  if (file) {
    return fs.readFileSync(file, 'utf8')
      .split(/[\s,]+/)
      .filter(Boolean)
      .map((value) => Number(value.startsWith('0x') ? value : value))
  }
  if (!spec) return null
  const range = spec.match(/^(-?\d+)\.\.(-?\d+)$/)
  if (range) {
    const out = []
    for (let value = Number(range[1]); value <= Number(range[2]); value++) out.push(value)
    return out
  }
  return spec.split(',').map((value) => Number(value.trim())).filter((value) => Number.isFinite(value))
}

/**
 * Score one salt across the whole grid of spacing/separation.
 *
 * The search is exhaustive over the small dimensions and cheap per candidate:
 * each observation needs a couple of cell evaluations, so a salt sweep of a few
 * million values over a dozen observations is still minutes, not hours.
 */
function fitForSalt (placement, observations, args) {
  const survivors = []
  for (let spacing = 4; spacing <= args.spacingMax; spacing++) {
    for (let separation = 0; separation < Math.min(spacing, args.separationMax + 1); separation++) {
      for (const spreadType of ['linear', 'triangular']) {
        const candidate = { ...placement, spacing, separation, spreadType }
        let ok = true
        for (const observation of observations) {
          if (!explains(candidate, observation, args.radiusCells)) { ok = false; break }
        }
        if (ok) survivors.push({ spacing, separation, spreadType })
      }
    }
  }
  return survivors
}

function main () {
  const args = parseArgs(process.argv)
  const observations = loadObservations(args.captures, args.id)
  if (!observations.length) {
    console.error('no usable observations: the captures must contain found results with positions')
    process.exit(1)
  }
  const ids = [...new Set(observations.map((observation) => observation.id))]
  const seeds = [...new Set(observations.map((observation) => observation.seed))]
  console.log(`${observations.length} observations, ${ids.length} structures, ${seeds.length} seeds: ${seeds.join(',')}`)

  const saltList = parseSalts(args.salts, args.saltFile)
  if (!saltList) {
    console.error('a salt list is required: --salts 10387312,10387313 or --salts 0..1000000')
    process.exit(1)
  }

  const perId = {}
  for (const id of ids) {
    const forId = observations.filter((observation) => observation.id === id)
    if (forId.length < 2) {
      console.log(`skipping ${id}: only ${forId.length} observation`)
      continue
    }
    const winners = []
    for (const salt of saltList) {
      const survivors = fitForSalt({ id, salt }, forId, args)
      if (survivors.length) winners.push({ salt, survivors })
    }
    perId[id] = winners
    console.log(`${id}: ${forId.length} observations, ${winners.length} salts survive`)
    for (const winner of winners.slice(0, args.top)) {
      console.log(`  salt ${winner.salt}: ${winner.survivors.length} (spacing, separation, spread) combinations`)
      for (const survivor of winner.survivors.slice(0, 4)) {
        console.log(`    spacing ${survivor.spacing} separation ${survivor.separation} ${survivor.spreadType}`)
      }
    }
  }

  if (args.json) {
    console.log(JSON.stringify({ observations: observations.length, perId }, null, 2))
  }
}

module.exports = { explains, fitForSalt, loadObservations, parseSalts }

if (require.main === module) {
  try {
    main()
  } catch (error) {
    console.error(error.stack || error.message)
    process.exit(1)
  }
}
