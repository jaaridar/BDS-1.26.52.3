'use strict'

/**
 * Sweep the salt for the bands a set could plausibly use, and report the ones
 * that explain the captures.
 *
 * The salt is unknown and 2^32 wide, so a band is only worth sweeping once the
 * captures agree that it is possible at all -- that is what
 * `band-candidates.js` decides from the residues alone. This takes the strongest
 * of those bands and runs the exhaustive solver (`solve-salt.c`) on each,
 * accepting the one-chunk displacement the oracle fit measured.
 *
 *   cc -O2 -o /tmp/solve-salt tools/worldgen-algo/solve-salt.c -lpthread
 *   node tools/worldgen-algo/sweep-bands.js --id village --top 20
 *   node tools/worldgen-algo/sweep-bands.js --all --top 8 --jobs 2
 */

const { spawn } = require('node:child_process')
const fs = require('node:fs')
const os = require('node:os')
const path = require('node:path')

const { DEFAULT_ROOT, byId, floorDiv, loadObservations } = require('./observations')
const { candidatesFor } = require('./band-candidates')

function parseArgs (argv) {
  const args = {
    ids: [],
    top: 12,
    slack: 1,
    minMatchDelta: 1,
    solver: '/tmp/solve-salt',
    jobs: 1,
    mode: 0,
    maxSpacing: 192,
    all: false
  }
  for (let i = 0; i < argv.length; i++) {
    const arg = argv[i]
    const next = () => {
      const value = argv[++i]
      if (value === undefined) throw new Error(`${arg} needs a value`)
      return value
    }
    switch (arg) {
      case '--id': args.ids.push(next()); break
      case '--all': args.all = true; break
      case '--top': args.top = Number(next()); break
      case '--slack': args.slack = Number(next()); break
      case '--min-match-delta': args.minMatchDelta = Number(next()); break
      case '--solver': args.solver = next(); break
      case '--jobs': args.jobs = Number(next()); break
      case '--mode': args.mode = Number(next()); break
      case '--max-spacing': args.maxSpacing = Number(next()); break
      default: throw new Error(`unknown argument ${arg}`)
    }
  }
  return args
}

/** One observation per line in the solver's format, for a given band. */
function rowsFor (id, observations, spacing, separation, mode) {
  return observations.map((row) => {
    const chunkX = floorDiv(row.block[0], 16)
    const chunkZ = floorDiv(row.block[1], 16)
    const cellX = floorDiv(chunkX, spacing)
    const cellZ = floorDiv(chunkZ, spacing)
    return [id, spacing, separation, mode, row.seed, cellX, cellZ,
      chunkX - cellX * spacing, chunkZ - cellZ * spacing].join('\t')
  }).join('\n') + '\n'
}

function run (solver, file, slack, minMatch) {
  return new Promise((resolve) => {
    const child = spawn(solver, [file, '--slack', String(slack),
      '--min-match', String(minMatch), '--threads', '2'], { stdio: ['ignore', 'pipe', 'pipe'] })
    let out = ''
    child.stdout.on('data', (chunk) => { out += chunk })
    child.stderr.on('data', () => {})
    child.on('close', () => resolve(out))
  })
}

/** Spawn at most `jobs` children at a time. */
async function pool (tasks, jobs) {
  const results = []
  let index = 0
  const workers = Array.from({ length: Math.max(1, jobs) }, async () => {
    while (index < tasks.length) {
      const mine = index++
      results[mine] = await tasks[mine]()
    }
  })
  await Promise.all(workers)
  return results
}

async function sweepOne (args, id, groups) {
  const observations = groups.get(id)
  if (!observations) {
    console.error(`no captures for ${id}`)
    return []
  }
  const bands = candidatesFor(observations, args.maxSpacing)
    // The sweep rejects a candidate salt by the first observation's offset. With
    // slack 1 that test accepts three residues, so a band whose span is three or
    // less rejects nothing and every one of the 2^32 salts runs the full set --
    // minutes per band for an answer that cannot be a fit. Those bands are also
    // the ones the residue test likes best (a span of two fits anything), so they
    // have to be excluded rather than sorted away.
    .filter((band) => band.span > 2 * args.slack + 1)
    .slice(0, args.top)
  const minMatch = observations.length - args.minMatchDelta
  const dir = fs.mkdtempSync(path.join(os.tmpdir(), `sweep-${id}-`))
  console.log(`# ${id}: ${observations.length} captures, ${bands.length} bands, ` +
    `slack ${args.slack}, min-match ${minMatch}`)

  const tasks = bands.map((band) => async () => {
    const file = path.join(dir, `${band.spacing}-${band.separation}.tsv`)
    fs.writeFileSync(file, rowsFor(id, observations, band.spacing, band.separation, args.mode))
    const out = await run(args.solver, file, args.slack, minMatch)
    const hits = out.split('\n')
      .filter((line) => line && !line.startsWith('#'))
      .map((line) => line.split('\t'))
      // The solver prints `id salt signed hits/total`.
      .filter((fields) => fields.length >= 4)
    for (const fields of hits) {
      console.log(`  MATCH ${id} ${band.spacing}/${band.separation} log10 ${band.log10.toFixed(1)} ` +
        `salt ${fields[1]} (${fields[2]}) ${fields[3]}`)
    }
    return hits.map((fields) => ({
      id, spacing: band.spacing, separation: band.separation, salt: Number(fields[1])
    }))
  })
  const done = await pool(tasks, args.jobs)
  fs.rmSync(dir, { recursive: true, force: true })
  return done.flat()
}

async function main (argv) {
  const args = parseArgs(argv)
  const groups = byId(loadObservations(DEFAULT_ROOT))
  const ids = args.all || !args.ids.length ? [...groups.keys()] : args.ids
  const found = []
  for (const id of ids) found.push(...await sweepOne(args, id, groups))
  console.log(`# ${found.length} fits`)
  return found.length ? 0 : 1
}

if (require.main === module) {
  main(process.argv.slice(2)).then((code) => process.exit(code)).catch((error) => {
    console.error(error.stack || error)
    process.exit(1)
  })
}

module.exports = { rowsFor, sweepOne }
