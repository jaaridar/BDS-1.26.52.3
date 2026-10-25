#!/usr/bin/env node
'use strict'

/**
 * Fit a placement model to the captures, for every set at once.
 *
 * This is the harness the structure work is driven from. It has three models,
 * because the binary has three kinds of set:
 *
 *   grid     the jittered cell grid described in src/world/structure-placement.js.
 *            The unknowns are engine (MT19937 vs Java LCG), the seed formula,
 *            spread (one draw per axis, or two averaged), band (spacing,
 *            separation) and salt. With a known salt the space is small enough
 *            to search exhaustively, so the tool reports *every* band that
 *            reproduces all captures -- a set with two perfect fits is not
 *            solved, and the tool says so.
 *
 *   gate     the per-chunk frequency sets (mineshaft). Every chunk is a
 *            candidate and a draw from that chunk's own stream decides. The
 *            tool collects that draw for the chunks the server *accepted* (the
 *            answers) and for the chunks it *rejected* (everything the search
 *            walked past first, in the resolver's ring order), then asks whether
 *            one threshold separates the two.
 *
 *   modzero  the same idea for a gate written as `raw % k == 0`: every accepted
 *            chunk must satisfy it, and the rejected chunks must satisfy it at
 *            about the rate 1/k.
 *
 * Usage:
 *   node tools/worldgen-algo/fit-placement.js --all
 *   node tools/worldgen-algo/fit-placement.js --id village --max-spacing 64
 *   node tools/worldgen-algo/fit-placement.js --id mineshaft --model gate
 *   node tools/worldgen-algo/fit-placement.js --id mineshaft --model modzero
 *   node tools/worldgen-algo/fit-placement.js --all --json > grid.json
 */

const { PLACEMENTS } = require('../../src/world/structures-data')
const { loadObservations } = require('./verify-placements')

// --- fast MT19937 -----------------------------------------------------------
const mt = new Uint32Array(624)
let mtIndex = 624

function seedMt (s) {
  mt[0] = s >>> 0
  for (let i = 1; i < 624; i++) {
    const p = mt[i - 1]
    mt[i] = (Math.imul(p ^ (p >>> 30), 1812433253) + i) >>> 0
  }
  mtIndex = 624
}

function next32 () {
  if (mtIndex >= 624) {
    for (let i = 0; i < 624; i++) {
      const y = ((mt[i] & 0x80000000) | (mt[(i + 1) % 624] & 0x7fffffff)) >>> 0
      let n = mt[(i + 397) % 624] ^ (y >>> 1)
      if (y & 1) n ^= 0x9908b0df
      mt[i] = n >>> 0
    }
    mtIndex = 0
  }
  let y = mt[mtIndex++]
  y ^= y >>> 11
  y ^= (y << 7) & 0x9d2c5680
  y ^= (y << 15) & 0xefc60000
  y ^= y >>> 18
  return y >>> 0
}

// --- fast java.util.Random --------------------------------------------------
const JAVA_MASK = (1n << 48n) - 1n

class JavaLcg {
  constructor (seed) {
    this.state = (BigInt.asUintN(64, BigInt(seed)) ^ 0x5deece66dn) & JAVA_MASK
  }

  next (bits) {
    this.state = (this.state * 0x5deece66dn + 0xbn) & JAVA_MASK
    return Number(this.state >> BigInt(48 - bits))
  }

  nextDouble () {
    return ((this.next(26) * 134217728) + this.next(27)) / 9007199254740992
  }

  nextLong () {
    const high = BigInt(this.next(32) | 0)
    const low = BigInt(this.next(32) | 0)
    return BigInt.asIntN(64, (high << 32n) + low)
  }

  nextInt (bound) {
    if ((bound & -bound) === bound) return (bound * this.next(31)) >> 31
    let bits = this.next(31)
    let value = bits % bound
    while (bits - value + (bound - 1) < 0) {
      bits = this.next(31)
      value = bits % bound
    }
    return value
  }
}

// --- the cell seed families the binary uses ---------------------------------
// 341873128712 mod 2^32 and 132897987541 mod 2^32, the constants the grid
// resolver multiplies by (as -0x66c60af8 and -0xea9a42b in two's complement).
const X_ADD = 0x9939f508
const Z_ADD = 0xf1565bd5

function cellSeed (formula, seed, cellX, cellZ, salt) {
  const seedLow = seed >>> 0
  if (formula === 'xor') {
    // mineshaft: `cellX * param_4[0] ^ cellZ * param_4[1] ^ seed`.
    return (Math.imul(cellX, X_ADD) ^ Math.imul(cellZ, Z_ADD) ^ seedLow ^ (salt >>> 0)) >>> 0
  }
  return (Math.imul(cellX, X_ADD) + Math.imul(cellZ, Z_ADD) + seedLow + (salt >>> 0)) >>> 0
}

/**
 * `setLargeFeatureSeed`, the unsalted family: two longs are taken from the world
 * seed and the cell pair is folded in with a multiply-and-xor.
 */
function largeFeatureSeed (seed, cellX, cellZ) {
  const source = new JavaLcg(BigInt(seed))
  const i = source.nextLong()
  const j = source.nextLong()
  return BigInt.asIntN(64, BigInt(cellX) * i + BigInt(cellZ) * j) ^ BigInt.asIntN(64, BigInt(seed))
}

/** The Java engine's 64-bit cell seed for the additive family. */
function javaCellSeed (seed, cellX, cellZ, salt) {
  return BigInt.asIntN(64,
    BigInt(cellX) * 341873128712n + BigInt(cellZ) * 132897987541n +
    BigInt(seed) + BigInt(salt))
}

// --- grid model -------------------------------------------------------------

/** Offsets of one cell under one (engine, formula, spread) combination. */
function offsetOf (engine, formula, seed, cellX, cellZ, salt, spacing, span, triangular) {
  // `setLargeFeatureSeed` is a Java-side routine; pairing it with the MT engine
  // would silently duplicate the additive family, so the combination is not a
  // model at all.
  if (formula === 'large' && engine !== 'java') return null
  let a, b, c, d
  if (engine === 'java') {
    const random = new JavaLcg(formula === 'large'
      ? largeFeatureSeed(seed, cellX, cellZ)
      : javaCellSeed(seed, cellX, cellZ, salt))
    a = random.nextInt(span)
    b = random.nextInt(span)
    if (!triangular) return [a, b]
    c = random.nextInt(span)
    d = random.nextInt(span)
    return [Math.floor((a + b) / 2), Math.floor((c + d) / 2)]
  }
  seedMt(cellSeed(formula, seed, cellX, cellZ, salt))
  a = next32() % span
  b = next32() % span
  if (!triangular) return [a, b]
  c = next32() % span
  d = next32() % span
  return [Math.floor((a + b) / 2), Math.floor((c + d) / 2)]
}

/** How many captures a (engine, formula, spread, salt, band) combination reproduces. */
function scoreGrid (rows, options) {
  const { engine, formula, spread, salt, spacing, separation } = options
  const span = spacing - separation
  const triangular = spread === 'triangular'
  let hit = 0
  for (const row of rows) {
    const cellX = Math.floor(row.chunkX / spacing)
    const cellZ = Math.floor(row.chunkZ / spacing)
    const offsets = offsetOf(engine, formula, row.seed, cellX, cellZ, salt, spacing, span, triangular)
    if (!offsets) continue
    if (cellX * spacing + offsets[0] === row.chunkX && cellZ * spacing + offsets[1] === row.chunkZ) hit++
  }
  return hit
}

function fitGrid (rows, { maxSpacing = 128, salts, engines, formulas, spreads }) {
  const perfect = []
  const best = []
  for (const engine of engines) {
    for (const formula of formulas) {
      for (const salt of salts) {
        for (const spread of spreads) {
          for (let spacing = 4; spacing <= maxSpacing; spacing++) {
            for (let separation = 0; separation < spacing - 1; separation++) {
              const hit = scoreGrid(rows, { engine, formula, spread, salt, spacing, separation })
              if (hit === rows.length) perfect.push({ engine, formula, salt, spread, spacing, separation })
              best.push({ hit, engine, formula, salt, spread, spacing, separation })
            }
          }
        }
      }
    }
  }
  best.sort((a, b) => b.hit - a.hit || a.spacing - b.spacing || a.separation - b.separation)
  best.length = Math.min(best.length, 5)
  return { perfect, best }
}

// --- gate models ------------------------------------------------------------

/** Chebyshev ring walk in the order the resolver uses (x outer, z inner). */
function * ringChunks (radius) {
  if (radius === 0) {
    yield [0, 0]
    return
  }
  for (let x = -radius; x <= radius; x++) {
    for (let z = -radius; z <= radius; z++) {
      if (Math.max(Math.abs(x), Math.abs(z)) !== radius) continue
      yield [x, z]
    }
  }
}

/** Candidate draw value for one chunk under a gate model (null: not a model). */
function gateValue (engine, formula, seed, chunkX, chunkZ, salt, draw, mode) {
  // `setLargeFeatureSeed` is Java-side only, the same rule as the grid model:
  // pairing it with the MT engine would duplicate the additive family.
  if (formula === 'large' && engine !== 'java') return null
  let random
  if (formula === 'large') random = new JavaLcg(largeFeatureSeed(seed, chunkX, chunkZ))
  else if (engine === 'java') random = new JavaLcg(javaCellSeed(seed, chunkX, chunkZ, salt))
  else seedMt(cellSeed(formula, seed, chunkX, chunkZ, salt))
  let last = 0
  if (random) for (let i = 0; i <= draw; i++) last = random.next(32)
  else for (let i = 0; i <= draw; i++) last = next32()
  if (mode === 'unit') return (last >>> 0) / 4294967296
  if (mode === 'int100') return last % 100
  return last >>> 0
}

/**
 * Walk the resolver's search from the origin and split the chunks it saw into
 * accepted (the answer) and rejected (everything before it).
 */
function walkCapture (row, visit, maxRadius) {
  const originX = Math.floor(row.from[0] / 16)
  const originZ = Math.floor(row.from[1] / 16)
  let answer = null
  accept: for (let radius = 0; radius <= maxRadius; radius++) {
    for (const [dx, dz] of ringChunks(radius)) {
      const chunkX = originX + dx
      const chunkZ = originZ + dz
      const value = visit(chunkX, chunkZ)
      if (value === null) return null
      if (chunkX === row.chunkX && chunkZ === row.chunkZ) {
        answer = value
        break accept
      }
    }
  }
  return answer
}

/** Threshold gate: does one cut separate accepted from rejected values? */
function fitGate (rows, { salts, engines, formulas, draws, modes, maxRadius = 64 }) {
  const results = []
  for (const engine of engines) {
    for (const formula of formulas) {
      for (const salt of salts) {
        for (const draw of draws) {
          for (const mode of modes) {
            let acceptedMin = Infinity
            let acceptedMax = -Infinity
            let rejectedMin = Infinity
            let rejectedMax = -Infinity
            if (formula === 'large' && engine !== 'java') continue
            let used = 0
            for (const row of rows) {
              const value = walkCapture(row, (chunkX, chunkZ) => {
                const v = gateValue(engine, formula, row.seed, chunkX, chunkZ, salt, draw, mode)
                if (v < rejectedMin) rejectedMin = v
                if (v > rejectedMax) rejectedMax = v
                return v
              }, maxRadius)
              if (value === null) continue
              used++
              if (value < acceptedMin) acceptedMin = value
              if (value > acceptedMax) acceptedMax = value
            }
            // "accept when value < threshold" separates iff every accepted value
            // is below every rejected one; the mirror image covers the other
            // direction. Either needs the whole rejected set on one side, which
            // a sparse gate over a long walk cannot do unless it is real.
            const lowSeparates = acceptedMax < rejectedMin
            const highSeparates = acceptedMin > rejectedMax
            results.push({
              engine,
              formula,
              salt,
              draw,
              mode,
              captures: used,
              lowSeparates,
              highSeparates,
              acceptedMin,
              acceptedMax,
              rejectedMin,
              rejectedMax,
              gap: Math.max(rejectedMin - acceptedMax, acceptedMin - rejectedMax)
            })
          }
        }
      }
    }
  }
  results.sort((a, b) => b.gap - a.gap || b.captures - a.captures)
  return { results, consistent: results.filter((r) => r.lowSeparates || r.highSeparates) }
}

/**
 * `raw % k == 0` gate: every accepted chunk must satisfy it, and the rejected
 * chunks must satisfy it at about the rate 1/k (a little less, since some of
 * them were rejected by the biome/height check instead).
 */
function fitModZero (rows, { salts, engines, formulas, draws, maxK = 512, maxRadius = 96 }) {
  const out = []
  for (const engine of engines) {
    for (const formula of formulas) {
      for (const salt of salts) {
        if (formula === 'large' && engine !== 'java') continue
        for (const draw of draws) {
          const accepted = []
          const rejected = []
          for (const row of rows) {
            const value = walkCapture(row, (chunkX, chunkZ) => {
              const v = gateValue(engine, formula, row.seed, chunkX, chunkZ, salt, draw, 'raw')
              rejected.push(v)
              return v
            }, maxRadius)
            if (value !== null) accepted.push(value)
          }
          if (accepted.length === 0) continue
          for (let k = 2; k <= maxK; k++) {
            if (!accepted.every((v) => v % k === 0)) continue
            let hits = 0
            for (const v of rejected) if (v % k === 0) hits++
            const rate = hits / rejected.length
            const expected = 1 / k
            out.push({
              engine,
              formula,
              salt,
              draw,
              k,
              accepted: accepted.length,
              rate,
              expected,
              // Distance from the geometric expectation, in binomial standard
              // errors of the rejected sample.
              deviation: Math.abs(rate - expected) / Math.sqrt((expected * (1 - expected)) / rejected.length)
            })
          }
        }
      }
    }
  }
  out.sort((a, b) => a.deviation - b.deviation)
  return out
}

// --- CLI --------------------------------------------------------------------

function parseArgs (argv) {
  const args = { id: null, all: false, model: 'grid', maxSpacing: 128, json: false, salts: null }
  for (let i = 0; i < argv.length; i++) {
    const next = () => argv[++i]
    switch (argv[i]) {
      case '--id': args.id = next(); break
      case '--all': args.all = true; break
      case '--model': args.model = next(); break
      case '--max-spacing': args.maxSpacing = Number(next()); break
      case '--salt': args.salts = next().split(',').map(Number); break
      case '--json': args.json = true; break
      default: throw new Error(`unknown argument ${argv[i]}`)
    }
  }
  return args
}

function saltsFor (id, explicit) {
  if (explicit) return explicit
  const placement = PLACEMENTS[id]
  if (placement && placement.salt !== undefined) return [placement.salt]
  return [0]
}

function fmt (value) {
  return Number.isFinite(value) ? value.toExponential(3) : String(value)
}

function main () {
  const args = parseArgs(process.argv.slice(2))
  const byId = new Map()
  for (const row of loadObservations()) {
    if (!byId.has(row.id)) byId.set(row.id, [])
    byId.get(row.id).push(row)
  }
  const ids = args.all
    ? [...byId.keys()]
    : [args.id ? (args.id.includes(':') ? args.id : `minecraft:${args.id}`) : null]
  if (!ids[0]) throw new Error('pass --id <set> or --all')

  const report = {}
  for (const id of ids) {
    const rows = byId.get(id)
    if (!rows || rows.length === 0) {
      report[id] = { captures: 0, status: 'no captures' }
      continue
    }
    const salts = saltsFor(id, args.salts)
    if (args.model === 'gate' || args.model === 'modzero') {
      const options = {
        salts,
        engines: ['mt', 'java'],
        formulas: ['add', 'xor', 'large'],
        draws: [0, 1, 2, 3, 4],
        maxRadius: 96
      }
      if (args.model === 'gate') {
        const { results, consistent } = fitGate(rows, { ...options, modes: ['unit', 'int100', 'raw'] })
        report[id] = { model: 'gate', captures: rows.length, separators: consistent.length, best: results.slice(0, 5) }
      } else {
        const fits = fitModZero(rows, { ...options, maxK: 512 })
        report[id] = { model: 'modzero', captures: rows.length, candidates: fits.length, best: fits.slice(0, 5) }
      }
      continue
    }
    const { perfect, best } = fitGrid(rows, {
      maxSpacing: args.maxSpacing,
      salts,
      engines: ['mt', 'java'],
      formulas: ['add', 'xor', 'large'],
      spreads: ['linear', 'triangular']
    })
    report[id] = {
      model: 'grid',
      captures: rows.length,
      status: perfect.length === 0
        ? 'no perfect band'
        : (perfect.length === 1 ? 'unique perfect band' : `${perfect.length} perfect bands (ambiguous)`),
      perfect,
      best: perfect.length ? [] : best
    }
  }

  if (args.json) {
    process.stdout.write(JSON.stringify(report, null, 2) + '\n')
    return
  }

  for (const [id, entry] of Object.entries(report)) {
    console.log(`${id} (${entry.captures} captures, model ${entry.model || '-'})`)
    if (entry.status) console.log(`  ${entry.status}`)
    for (const fit of entry.perfect || []) {
      console.log(`   fit ${fit.engine}/${fit.formula} ${fit.spacing}/${fit.separation} salt ${fit.salt} ${fit.spread}`)
    }
    if (entry.separators !== undefined) console.log(`  separating thresholds found: ${entry.separators}`)
    if (entry.candidates !== undefined) console.log(`  (raw % k == 0) models accepting every capture: ${entry.candidates}`)
    for (const fit of entry.best || []) {
      if (fit.k !== undefined) {
        console.log(`   k=${fit.k} draw ${fit.draw} ${fit.engine}/${fit.formula} salt ${fit.salt}: accepted ${fit.accepted}, rejected rate ${fmt(fit.rate)} vs expected ${fmt(fit.expected)} (${fit.deviation.toFixed(1)} sigma)`)
      } else if (fit.gap !== undefined) {
        console.log(`   gap ${fit.gap.toExponential(2)} ${fit.engine}/${fit.formula} draw ${fit.draw} ${fit.mode} salt ${fit.salt} (accepted ${fmt(fit.acceptedMin)}..${fmt(fit.acceptedMax)}, rejected ${fmt(fit.rejectedMin)}..${fmt(fit.rejectedMax)})`)
      } else {
        console.log(`   ${fit.hit}/${entry.captures} ${fit.engine}/${fit.formula} ${fit.spacing}/${fit.separation} salt ${fit.salt} ${fit.spread}`)
      }
    }
  }
}

if (require.main === module) main()

module.exports = {
  fitGrid,
  fitGate,
  fitModZero,
  scoreGrid,
  cellSeed,
  largeFeatureSeed,
  JavaLcg,
  ringChunks
}
