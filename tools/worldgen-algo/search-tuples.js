'use strict'

/**
 * Recover a placement tuple as a *tuple*: spacing and separation candidates come
 * from the binary's small immediates, the salt comes from an exhaustive sweep.
 *
 * Why in this order:
 *
 *   - the salt is a 32-bit field, so it can be swept, but only once the grid is
 *     known;
 *   - spacing and separation are small integers, so they are exactly the kind of
 *     number that appears as a store immediate in the code that builds a
 *     placement record;
 *   - and the observations themselves reject most pairs for free, because every
 *     reported chunk must fall in the `[0, spacing - separation)` offset band.
 *
 * That gives a mechanical pipeline: pair candidates from the binary, prune with
 * the band, sweep the salt for what survives, and keep only tuples that
 * reproduce every observation.
 *
 *   node tools/worldgen-algo/search-tuples.js --id village
 *   node tools/worldgen-algo/search-tuples.js --id monument --slack 3
 */

const fs = require('node:fs')
const os = require('node:os')
const path = require('node:path')
const { execFileSync } = require('node:child_process')

const { structureInCell } = require('../../src/world/structure-placement')
const { loadObservations, byId, floorDiv } = require('./observations')

const HERE = __dirname
const STORE_SCAN = 'research/proprietary/bds-1.26.52.3/structures/scan-records/scan.json'
const DATA_SCAN = 'research/proprietary/bds-1.26.52.3/structures/scan-data/scan.json'

function parseArgs (argv) {
  const args = { id: null, slack: 1, blocks: 8, threads: 2, minPairs: 0, maxPairs: 40, pairLimit: 400, pairs: null, cellSearch: 0 }
  for (let i = 2; i < argv.length; i++) {
    const arg = argv[i]
    const next = () => {
      const value = argv[++i]
      if (value === undefined) throw new Error(`${arg} needs a value`)
      return value
    }
    switch (arg) {
      case '--pairs': args.pairs = next().split(',').map((pair) => pair.split(':').map(Number)); break
      case '--id': args.id = next().replace(/^minecraft:/, ''); break
      case '--slack': args.slack = Number(next()); break
      case '--blocks': args.blocks = Number(next()); break
      case '--threads': args.threads = Number(next()); break
      case '--max-pairs': args.maxPairs = Number(next()); break
      case '--cell-search': args.cellSearch = Number(next()); break
      case '--pair-limit': args.pairLimit = Number(next()); break
      default: throw new Error(`unknown argument ${arg}`)
    }
  }
  return args
}

function buildSolver () {
  const directory = fs.mkdtempSync(path.join(os.tmpdir(), 'bds-tuples-'))
  const binary = path.join(directory, 'solve-salt')
  execFileSync('cc', ['-O2', '-o', binary, path.join(HERE, 'solve-salt.c'), '-lpthread'], {
    stdio: ['ignore', 'ignore', 'inherit']
  })
  return binary
}

/**
 * Every distinct (spacing, separation) pair the binary proposes.
 *
 * Store clusters contribute pairs that co-occur with a salt-sized immediate --
 * the shape of a placement record being built. The data scan contributes pairs
 * from static tables. Both are just proposals; the observations decide.
 */
function candidatePairs (limit) {
  const pairs = new Map()
  const add = (spacing, separation, source) => {
    if (!(spacing >= 8 && spacing <= 128)) return
    if (!(separation >= 1 && separation < spacing)) return
    if (separation > spacing - 2) return
    const key = `${spacing}:${separation}`
    if (!pairs.has(key)) pairs.set(key, { spacing, separation, source })
  }

  if (fs.existsSync(STORE_SCAN)) {
    const scan = JSON.parse(fs.readFileSync(STORE_SCAN, 'utf8'))
    for (const cluster of scan.imm_clusters || []) {
      const stores = cluster.stores || []
      const smalls = stores.filter((store) => store.imm_signed >= 1 && store.imm_signed <= 128)
      if (!smalls.length) continue
      for (const a of smalls) {
        for (const b of smalls) {
          if (a === b) continue
          add(a.imm_signed, b.imm_signed, 'store')
        }
      }
    }
  }
  if (fs.existsSync(DATA_SCAN)) {
    const scan = JSON.parse(fs.readFileSync(DATA_SCAN, 'utf8'))
    for (const record of scan.data_records || []) add(record.spacing, record.separation, 'data')
  }
  return [...pairs.values()].slice(0, limit)
}

const mod = (value, divisor) => ((value % divisor) + divisor) % divisor

/**
 * Necessary condition: every observed chunk has to sit inside the offset band of
 * its cell. A pair that cannot even satisfy this cannot be the grid.
 */
function passesBand (observations, spacing, separation, allowance = 0) {
  const span = spacing - separation
  for (const observation of observations) {
    const chunkX = floorDiv(observation.block[0], 16)
    const chunkZ = floorDiv(observation.block[1], 16)
    if (mod(chunkX, spacing) >= span + allowance) return false
    if (mod(chunkZ, spacing) >= span + allowance) return false
  }
  return true
}

function scoreTuple (placement, observations, blocks) {
  let worst = 0
  for (const observation of observations) {
    const chunkX = floorDiv(observation.block[0], 16)
    const chunkZ = floorDiv(observation.block[1], 16)
    const predicted = structureInCell(placement, observation.seed,
      floorDiv(chunkX, placement.spacing), floorDiv(chunkZ, placement.spacing))
    const dx = observation.block[0] - predicted.chunkX * 16
    const dz = observation.block[1] - predicted.chunkZ * 16
    worst = Math.max(worst, Math.abs(dx), Math.abs(dz))
    if (Math.abs(dx) > blocks || Math.abs(dz) > blocks) return null
  }
  return worst
}

function main () {
  const args = parseArgs(process.argv)
  const groups = byId(loadObservations())
  const solver = buildSolver()
  let pairs = args.pairs
    ? args.pairs.map(([spacing, separation]) => ({ spacing, separation, source: 'given' }))
    : candidatePairs(args.pairLimit)
  // The Java table's pairs are the strongest prior on what Bedrock might use, so
  // they are tried first; the rest follow in the order the binary proposed them.
  const prior = new Set(['34:8', '34:11', '32:5', '32:8', '80:20', '24:4', '40:15', '24:8', '34:12', '12:2', '20:8', '27:4', '48:8', '16:4'])
  pairs = pairs.slice().sort((a, b) => {
    const ka = prior.has(`${a.spacing}:${a.separation}`) ? 0 : 1
    const kb = prior.has(`${b.spacing}:${b.separation}`) ? 0 : 1
    return ka - kb
  })
  console.log(`# ${pairs.length} (spacing, separation) pairs proposed by the binary`)

  for (const [id, observations] of [...groups].sort()) {
    if (args.id && id !== args.id) continue
    const survivors = pairs.filter((pair) => passesBand(observations, pair.spacing, pair.separation))
    console.log(`# ${id}: ${observations.length} observations, ${survivors.length} pairs pass the offset band`)
    if (!survivors.length) {
      console.log(`${id}\tno pair is compatible with the reported offsets`)
      continue
    }
    let found = false
    for (const pair of survivors.slice(0, args.maxPairs)) {
      const rows = observations.map((observation) => {
        const chunkX = floorDiv(observation.block[0], 16)
        const chunkZ = floorDiv(observation.block[1], 16)
        const cellX = floorDiv(chunkX, pair.spacing)
        const cellZ = floorDiv(chunkZ, pair.spacing)
        return [id, pair.spacing, pair.separation, 0, observation.seed, cellX, cellZ,
          chunkX - cellX * pair.spacing, chunkZ - cellZ * pair.spacing].join('\t')
      })
      const file = path.join(fs.mkdtempSync(path.join(os.tmpdir(), 'bds-pair-')), 'obs.tsv')
      fs.writeFileSync(file, rows.join('\n') + '\n')
      let output = ''
      try {
        output = execFileSync(solver, [file, '--slack', String(args.slack),
          '--cell-search', String(args.cellSearch),
          '--threads', String(args.threads)], { encoding: 'utf8', maxBuffer: 32 << 20 })
      } catch (error) {
        output = String(error.stdout || '')
      }
      for (const line of output.split('\n')) {
        if (!line || line.startsWith('#')) continue
        const salt = Number(line.split('\t')[1])
        for (const spreadType of ['linear', 'triangular']) {
          const placement = {
            id: `minecraft:${id}`,
            spacing: pair.spacing,
            separation: pair.separation,
            salt,
            spreadType
          }
          const worst = scoreTuple(placement, observations, args.blocks)
          if (worst === null) continue
          console.log(`${id}\tspacing ${pair.spacing} separation ${pair.separation} salt ${salt} ${spreadType}` +
            `\tworst ${worst} blocks\t${observations.length}/${observations.length} observations`)
          found = true
        }
      }
    }
    if (!found) console.log(`${id}\tswept ${survivors.length} pairs, no tuple reproduces the observations`)
  }
}

try {
  main()
} catch (error) {
  console.error(error.message)
  process.exit(1)
}
