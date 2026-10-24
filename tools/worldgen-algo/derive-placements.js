'use strict'

/**
 * Recover a placement tuple for every structure set that has captures.
 *
 * The order of attempts is deliberate, cheapest and most specific first:
 *
 *   1. the tuple the table already believes in (from pack data or a previous
 *      derivation). If it reproduces every observation, nothing is recovered --
 *      it is confirmed, which is a different and stronger statement.
 *   2. the same span and spread type with the 32-bit salt solved for, over the
 *      whole 2^32 space.
 *   3. every span, both spread types and every salt, which is the full space a
 *      random-spread record can describe.
 *
 * A candidate only counts if it reproduces *every* observation. `--slack`
 * exists because the server reports a structure's origin block, not the
 * placement chunk, and for larger structures the origin can fall into the
 * previous chunk; the fit prints the residual so the slack stays visible.
 *
 *   node tools/worldgen-algo/derive-placements.js
 *   node tools/worldgen-algo/derive-placements.js --id village --slack 1
 */

const fs = require('node:fs')
const os = require('node:os')
const path = require('node:path')
const { execFileSync } = require('node:child_process')

const { PLACEMENTS } = require('../../src/world/structures-data')
const { structureInCell } = require('../../src/world/structure-placement')
const { DEFAULT_ROOT, loadObservations, byId, floorDiv } = require('./observations')

const HERE = __dirname

function parseArgs (argv) {
  const args = {
    root: DEFAULT_ROOT,
    id: null,
    slack: 1,
    blocks: 3,
    threads: Math.max(2, os.cpus().length),
    skipFull: false
  }
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
      case '--slack': args.slack = Number(next()); break
      case '--blocks': args.blocks = Number(next()); break
      case '--threads': args.threads = Number(next()); break
      case '--skip-full': args.skipFull = true; break
      default: throw new Error(`unknown argument ${arg}`)
    }
  }
  return args
}

/** Build the C solvers once, outside the tree, so nothing generated is committed. */
function buildSolvers () {
  const directory = fs.mkdtempSync(path.join(os.tmpdir(), 'bds-solvers-'))
  const solvers = {}
  for (const name of ['solve-salt', 'solve-placement']) {
    const binary = path.join(directory, name)
    execFileSync('cc', ['-O2', '-o', binary, path.join(HERE, `${name}.c`), '-lpthread'], {
      stdio: ['ignore', 'ignore', 'inherit']
    })
    solvers[name] = binary
  }
  return solvers
}

function writeRows (rows) {
  const file = path.join(fs.mkdtempSync(path.join(os.tmpdir(), 'bds-obs-')), 'observations.tsv')
  fs.writeFileSync(file, rows.join('\n') + '\n')
  return file
}

/** Do these parameters reproduce every observation? */
function score (placement, observations, blocks) {
  let worst = 0
  let misses = 0
  for (const observation of observations) {
    const chunkX = floorDiv(observation.block[0], 16)
    const chunkZ = floorDiv(observation.block[1], 16)
    const predicted = structureInCell(placement, observation.seed,
      floorDiv(chunkX, placement.spacing), floorDiv(chunkZ, placement.spacing))
    const dx = observation.block[0] - predicted.chunkX * 16
    const dz = observation.block[1] - predicted.chunkZ * 16
    worst = Math.max(worst, Math.abs(dx), Math.abs(dz))
    if (Math.abs(dx) > blocks || Math.abs(dz) > blocks) misses++
  }
  return { misses, worst }
}

function runSolver (binary, file, extra) {
  try {
    const output = execFileSync(binary, [file, ...extra], { encoding: 'utf8', maxBuffer: 64 << 20 })
    return output.split('\n').filter((line) => line && !line.startsWith('#'))
  } catch (error) {
    if (error.stdout) return String(error.stdout).split('\n').filter((line) => line && !line.startsWith('#'))
    throw error
  }
}

function main () {
  const args = parseArgs(process.argv)
  const groups = byId(loadObservations(args.root))
  if (!groups.size) {
    console.error(`no captures under ${args.root}`)
    process.exit(1)
  }

  const solvers = buildSolvers()
  const results = []

  for (const [id, observations] of [...groups].sort()) {
    if (args.id && id !== args.id) continue
    const row = {
      id,
      observations: observations.length,
      concluded: null,
      placement: null,
      detail: null
    }

    const table = PLACEMENTS[`minecraft:${id}`]
    if (!table || !table.spacing) {
      row.concluded = 'no-parameters'
      results.push(row)
      continue
    }

    // 1. what the table already believes
    const asIs = score(table, observations, args.blocks)
    if (asIs.misses === 0) {
      row.concluded = 'confirmed'
      row.placement = { ...table }
      row.detail = `every observation within ${asIs.worst} blocks`
      results.push(row)
      continue
    }

    const span = table.spacing - table.separation
    const mode = table.spreadType === 'triangular' ? 'triangular' : 'linear'
    const file = writeRows(observations.map((observation) => {
      const chunkX = floorDiv(observation.block[0], 16)
      const chunkZ = floorDiv(observation.block[1], 16)
      const cellX = floorDiv(chunkX, table.spacing)
      const cellZ = floorDiv(chunkZ, table.spacing)
      return [id, table.spacing, table.separation, mode === 'triangular' ? 1 : 0,
        observation.seed, cellX, cellZ,
        chunkX - cellX * table.spacing, chunkZ - cellZ * table.spacing].join('\t')
    }))

    // 2. solve the salt alone, with the span and spread type the table claims
    const saltHits = runSolver(solvers['solve-salt'], file,
      ['--slack', String(args.slack), '--threads', String(args.threads)])
    const verified = []
    for (const hit of saltHits) {
      const salt = Number(hit.split('\t')[1])
      const candidate = { id: `minecraft:${id}`, spacing: table.spacing, separation: table.separation, salt, spreadType: table.spreadType || 'linear' }
      const check = score(candidate, observations, args.blocks)
      if (check.misses === 0) verified.push({ ...candidate, worst: check.worst })
    }
    if (verified.length) {
      row.concluded = 'derived-salt'
      row.placement = verified[0]
      row.detail = `${verified.length} salt(s) survive, worst residual ${verified[0].worst} blocks`
      results.push(row)
      continue
    }

    // 3. the whole record: span and spread type too
    if (args.skipFull) {
      row.concluded = 'unresolved (salt sweep failed, full sweep skipped)'
      results.push(row)
      continue
    }
    const fullHits = runSolver(solvers['solve-placement'], file,
      ['--spacing', String(table.spacing), '--slack', String(args.slack), '--threads', String(args.threads)])
    for (const hit of fullHits) {
      const fields = Object.fromEntries(hit.split('\t').map((part) => {
        const [key, value] = part.split('=')
        return [key, value]
      }))
      const candidate = {
        id: `minecraft:${id}`,
        spacing: Number(fields.spacing),
        separation: Number(fields.separation),
        salt: Number(fields.salt),
        spreadType: fields.mode
      }
      const check = score(candidate, observations, args.blocks)
      if (check.misses !== 0) continue
      row.concluded = 'derived-full'
      row.placement = { ...candidate, worst: check.worst }
      row.detail = `worst residual ${check.worst} blocks`
      break
    }
    if (!row.concluded) {
      row.concluded = `unresolved (${asIs.misses}/${observations.length} observations missed, worst ${asIs.worst} blocks)`
    }
    results.push(row)
  }

  for (const row of results) {
    if (row.concluded === 'no-parameters') {
      console.log(`${row.id}\t${row.observations} observations\tno placement parameters to test`)
      continue
    }
    const p = row.placement
    console.log(`${row.id}\t${row.observations} observations\t${row.concluded}` +
      (p ? `\tspacing ${p.spacing} separation ${p.separation} salt ${p.salt} ${p.spreadType}` : '') +
      (row.detail ? `\t${row.detail}` : ''))
  }
}

try {
  main()
} catch (error) {
  console.error(error.message)
  process.exit(1)
}
