'use strict'

/**
 * Which derivation does Bedrock actually use for a structure cell?
 *
 * For the two sets whose parameters ship in the vanilla pack (`trail_ruins`,
 * `abandoned_camp`) spacing, separation and salt are known exactly. That removes
 * the salt from the search and leaves only the *derivation*: how a cell
 * coordinate and the world seed become a random stream, and how that stream
 * becomes an offset.
 *
 * This tool enumerates the plausible derivations and keeps the ones that put a
 * predicted start exactly on a position the server reported. It prints every
 * hypothesis with its score, including the zeros -- a hypothesis that fails on
 * real data is a result, not a failure.
 *
 *   node tools/worldgen-algo/probe-derivation.js --id trail_ruins \
 *        --capture research/proprietary/bds-1.26.52.3/structures
 */

const fs = require('node:fs')
const path = require('node:path')

const { JavaRandom } = require('../../src/world/java-random')
const { Mt19937 } = require('../../src/world/mt19937')
const { PLACEMENTS } = require('../../src/world/structures-data')

function parseArgs (argv) {
  const args = { id: 'trail_ruins', capture: 'research/proprietary/bds-1.26.52.3/structures' }
  for (let i = 2; i < argv.length; i++) {
    const arg = argv[i]
    const next = () => {
      const value = argv[++i]
      if (value === undefined) throw new Error(`${arg} needs a value`)
      return value
    }
    switch (arg) {
      case '--id': args.id = next(); break
      case '--capture': args.capture = next(); break
      default: throw new Error(`unknown argument ${arg}`)
    }
  }
  return args
}

/** Every reported position for one structure, across every captured seed. */
function loadObservations (dir, id) {
  const wanted = id.replace(/^minecraft:/, '')
  const out = []
  for (const entry of fs.readdirSync(dir)) {
    if (!entry.startsWith('seed-')) continue
    const file = path.join(dir, entry, 'structures.json')
    if (!fs.existsSync(file)) continue
    const capture = JSON.parse(fs.readFileSync(file, 'utf8'))
    for (const result of capture.results || []) {
      if (!result.found || !result.at) continue
      const resolved = (result.resolvedId || '').replace(/^minecraft:/, '')
      if (resolved !== wanted) continue
      out.push({
        seed: Number(capture.seed),
        chunk: [Math.floor(result.at[0] / 16), Math.floor(result.at[2] / 16)],
        block: [result.at[0], result.at[2]]
      })
    }
  }
  // One per seed: repeated probes at different origins report the same nearest.
  const seen = new Set()
  return out.filter((observation) => {
    if (seen.has(observation.seed)) return false
    seen.add(observation.seed)
    return true
  })
}

/** Cell candidates for a chunk: the offset must fall inside [0, span). */
function cellsFor (chunk, placement) {
  const span = placement.spacing - placement.separation
  const cells = []
  for (const base of [Math.floor(chunk / placement.spacing), Math.floor(chunk / placement.spacing) - 1]) {
    const offset = chunk - base * placement.spacing
    if (offset >= 0 && offset < span) cells.push({ cell: base, offset })
  }
  return cells
}

const X_MULT = 341873128712n
const Z_MULT = 132897987541n

/** seed-mix and stream variants, each returning [offsetX, offsetZ]. */
const DERIVATIONS = {
  'java mix, lcg, linear': (placement, seed, cellX, cellZ, span) => {
    const random = new JavaRandom(BigInt(cellX) * X_MULT + BigInt(cellZ) * Z_MULT + BigInt(seed) + BigInt(placement.salt))
    return [random.nextInt(span), random.nextInt(span)]
  },
  'java mix, lcg, triangular': (placement, seed, cellX, cellZ, span) => {
    const random = new JavaRandom(BigInt(cellX) * X_MULT + BigInt(cellZ) * Z_MULT + BigInt(seed) + BigInt(placement.salt))
    return [
      Math.floor((random.nextInt(span) + random.nextInt(span)) / 2),
      Math.floor((random.nextInt(span) + random.nextInt(span)) / 2)
    ]
  },
  'swapped multipliers, lcg, linear': (placement, seed, cellX, cellZ, span) => {
    const random = new JavaRandom(BigInt(cellX) * Z_MULT + BigInt(cellZ) * X_MULT + BigInt(seed) + BigInt(placement.salt))
    return [random.nextInt(span), random.nextInt(span)]
  },
  'no salt, lcg, linear': (placement, seed, cellX, cellZ, span) => {
    const random = new JavaRandom(BigInt(cellX) * X_MULT + BigInt(cellZ) * Z_MULT + BigInt(seed))
    return [random.nextInt(span), random.nextInt(span)]
  },
  'xor salt, lcg, linear': (placement, seed, cellX, cellZ, span) => {
    const random = new JavaRandom(BigInt(cellX) * X_MULT + BigInt(cellZ) * Z_MULT + (BigInt(seed) ^ BigInt(placement.salt)))
    return [random.nextInt(span), random.nextInt(span)]
  },
  'chunk-seed mt19937, modulo': (placement, seed, cellX, cellZ, span) => {
    // The per-chunk MT19937 the terrain pipeline uses, applied to the cell.
    const mixed = Math.imul(cellX, 0x14609048) + Math.imul(cellZ, 0x7ebe2d5) + seed
    const random = new Mt19937(mixed >>> 0)
    return [random.nextU32() % span, random.nextU32() % span]
  },
  'cell product mt19937, modulo': (placement, seed, cellX, cellZ, span) => {
    const mixed = (Math.imul(cellX, 0x14609048) + Math.imul(cellZ, 0x7ebe2d5) + seed) >>> 0
    const random = new Mt19937((mixed ^ Math.imul(placement.salt, 1)) >>> 0)
    return [random.nextU32() % span, random.nextU32() % span]
  }
}

function main () {
  const args = parseArgs(process.argv)
  const placement = PLACEMENTS[args.id.startsWith('minecraft:') ? args.id : `minecraft:${args.id}`]
  if (!placement) throw new Error(`no placement data for ${args.id}`)
  if (!placement.spacing) throw new Error(`${placement.id} does not use grid placement`)
  const span = placement.spacing - placement.separation
  const observations = loadObservations(args.capture, args.id)
  if (!observations.length) throw new Error(`no captured positions for ${args.id}`)

  console.log(`${placement.id}: spacing ${placement.spacing}, separation ${placement.separation}, salt ${placement.salt}`)
  console.log(`${observations.length} observed seeds: ${observations.map((o) => o.seed).join(', ')}`)
  console.log('')

  const results = []
  for (const [name, derive] of Object.entries(DERIVATIONS)) {
    let explained = 0
    for (const observation of observations) {
      const candidatesX = cellsFor(observation.chunk[0], placement)
      const candidatesZ = cellsFor(observation.chunk[1], placement)
      let hit = false
      for (const cx of candidatesX) {
        for (const cz of candidatesZ) {
          const [ox, oz] = derive(placement, observation.seed, cx.cell, cz.cell, span)
          if (cx.cell * placement.spacing + ox === observation.chunk[0] &&
              cz.cell * placement.spacing + oz === observation.chunk[1]) {
            hit = true
          }
        }
      }
      if (hit) explained++
      if (!hit && process.env.VERBOSE) console.log(`  miss: ${name} seed ${observation.seed}`)
    }
    results.push({ name, explained })
  }

  results.sort((a, b) => b.explained - a.explained)
  for (const result of results) {
    const mark = result.explained === observations.length ? 'ALL' : `${result.explained}/${observations.length}`
    console.log(`${mark.padStart(6)}  ${result.name}`)
  }
  const best = results[0]
  if (best && best.explained === observations.length) {
    console.log(`\n${best.name} explains every observation; it is a candidate, not a conclusion,`)
    console.log('until it survives a seed it was not fitted on.')
  } else {
    console.log('\nNo derivation explains every observation, so none of them is the answer.')
    console.log('The next constraint has to come from the binary (the code that seeds the stream).')
  }
}

try {
  main()
} catch (error) {
  console.error(error.message)
  process.exit(1)
}
