#!/usr/bin/env node
'use strict'

/**
 * Which villages carry a stronghold?
 *
 * The `village_probe_*` captures put an origin on a modeled village chunk, so
 * each result is a labelled village: `answer == origin` means that village holds
 * a stronghold, anything else means it does not. This tool turns those labels
 * into a table and tests every rule shape that could explain them:
 *
 *   - a per-village gate drawn from the village cell's own Mersenne stream
 *   - a gate on a hash of the village's position (per-chunk seed, low bits, ...)
 *   - a rule on the village's rank in generation order or on its radius
 *
 * Every candidate is scored by how well one cut separates positives from
 * negatives; a rule that works leaves a gap between the largest negative and the
 * smallest positive. Nothing is fitted by eye: the report prints the gap, so a
 * candidate is either separated or it is not.
 *
 *   node tools/worldgen-algo/village-strongholds.js
 *   node tools/worldgen-algo/village-strongholds.js --json
 */

const fs = require('node:fs')
const path = require('node:path')
const { xz } = require('./structure-enumeration')
const { Mt19937 } = require('../../src/world/mt19937')

const CAPTURE_ROOT = path.resolve(__dirname, '../../research/proprietary/bds-1.26.52.3/structures/captures')

function parseArgs (argv) {
  const args = { json: false }
  for (let i = 0; i < argv.length; i++) {
    if (argv[i] === '--json') args.json = true
    else throw new Error(`unknown argument ${argv[i]}`)
  }
  return args
}

/** Every labelled village across the probe captures. */
function collectLabels (root = CAPTURE_ROOT) {
  const rows = []
  for (const entry of fs.readdirSync(root, { withFileTypes: true })) {
    if (!entry.isDirectory() || !entry.name.startsWith('village_probe_')) continue
    for (const seedDir of fs.readdirSync(path.join(root, entry.name), { withFileTypes: true })) {
      if (!seedDir.isDirectory()) continue
      const file = path.join(root, entry.name, seedDir.name, 'structures.json')
      if (!fs.existsSync(file)) continue
      const capture = JSON.parse(fs.readFileSync(file, 'utf8'))
      const seen = new Map()
      for (const result of capture.results || []) {
        if (!Array.isArray(result.from)) continue
        const [fromX, fromZ] = xz(result.from)
        const originChunk = [Math.floor(fromX / 16), Math.floor(fromZ / 16)]
        const key = originChunk.join(',')
        if (seen.has(key)) continue
        const answer = result.found && Array.isArray(result.at)
          ? xz(result.at).map((value) => Math.floor(value / 16))
          : null
        seen.set(key, {
          seed: String(capture.seed),
          chunk: originChunk,
          radiusChunks: Math.hypot(originChunk[0], originChunk[1]),
          stronghold: Boolean(answer && answer[0] === originChunk[0] && answer[1] === originChunk[1]),
          answer
        })
      }
      rows.push(...seen.values())
    }
  }
  return rows
}

/**
 * Candidate signals, each a function of one labelled village.
 *
 * The draws come from a Mersenne stream seeded by the village chunk in the same
 * way the structure resolver seeds a cell, because that is the only per-village
 * stream the recovered code exposes.
 */
function signals (row, streams) {
  const village = streams.village(row)
  const perChunk = streams.perChunk(row)
  return {
    'village cell draw0': village[0],
    'village cell draw1': village[1],
    'village cell draw2': village[2],
    'village cell draw3': village[3],
    'per-chunk seed draw0': perChunk[0],
    'per-chunk seed draw1': perChunk[1],
    'per-chunk seed draw2': perChunk[2],
    'chunk x low bits': ((row.chunk[0] % 8) + 8) % 8,
    'chunk z low bits': ((row.chunk[1] % 8) + 8) % 8,
    'x31z low 8 bits': (((row.chunk[0] * 31 + row.chunk[1]) % 256) + 256) % 256,
    radiusChunks: row.radiusChunks
  }
}

/** A stream of unit draws for each labelling, computed once per village. */
function makeStreams () {
  const cache = new Map()
  const draws = (key, seedFn, count) => {
    if (!cache.has(key)) cache.set(key, seedFn())
    return cache.get(key)
  }
  const cellSeed = (seed, cellX, cellZ, salt) => {
    const MUL_X = 0x9939f508
    const MUL_Z = 0xf1565bd5
    return (Math.imul(cellX, MUL_X) + Math.imul(cellZ, MUL_Z) +
      Number(BigInt.asUintN(32, BigInt(seed))) + (salt >>> 0)) >>> 0
  }
  return {
    /** The village cell's own stream (spacing 34, village salt). */
    village (row) {
      const key = `v:${row.seed}:${row.chunk.join(',')}`
      return draws(key, () => {
        const random = new Mt19937(cellSeed(row.seed, Math.floor(row.chunk[0] / 34), Math.floor(row.chunk[1] / 34), 0x9e7f70))
        return Array.from({ length: 4 }, () => random.nextUnit())
      })
    },
    /** A stream seeded by the chunk itself, zero salt. */
    perChunk (row) {
      const key = `c:${row.seed}:${row.chunk.join(',')}`
      return draws(key, () => {
        const random = new Mt19937(cellSeed(row.seed, row.chunk[0], row.chunk[1], 0))
        return Array.from({ length: 3 }, () => random.nextUnit())
      })
    }
  }
}

/**
 * How well one cut on one signal separates the two classes.
 *
 * Returns the best single threshold and the gap it leaves: a positive and a
 * negative are "separated" when no negative scores above any positive.
 */
function separation (rows, valueOf) {
  const positives = rows.filter((row) => row.stronghold).map(valueOf)
  const negatives = rows.filter((row) => !row.stronghold).map(valueOf)
  if (!positives.length) return null
  const minPositive = Math.min(...positives)
  const maxPositive = Math.max(...positives)
  const maxNegative = Math.max(...negatives)
  const minNegative = Math.min(...negatives)
  return {
    positives: positives.length,
    negatives: negatives.length,
    minPositive,
    maxPositive,
    minNegative,
    maxNegative,
    // A "below the cut" rule needs every positive under every negative.
    lowCutGap: maxPositive < minNegative ? minNegative - maxPositive : 0,
    // An "above the cut" rule needs every positive above every negative.
    highCutGap: minPositive > maxNegative ? minPositive - maxNegative : 0
  }
}

function main () {
  const args = parseArgs(process.argv.slice(2))
  const rows = collectLabels()
  if (!rows.length) {
    console.log('no village_probe_* captures yet')
    return
  }
  const positives = rows.filter((row) => row.stronghold)
  console.log(`${rows.length} labelled villages, ${positives.length} with a stronghold`)
  for (const row of positives) {
    console.log(`  seed ${row.seed} village ${row.chunk.join(',')} radius ${row.radiusChunks.toFixed(1)} chunks`)
  }
  const streams = makeStreams()
  const sample = rows.slice(0, 1)[0]
  const names = Object.keys(signals(sample, streams))
  console.log('\nseparation by signal (a non-zero gap means one cut explains every label):')
  const report = []
  for (const name of names) {
    const s = separation(rows, (row) => signals(row, streams)[name])
    if (!s) continue
    report.push({ name, ...s })
    const best = Math.max(s.lowCutGap, s.highCutGap)
    console.log(`  ${name.padEnd(24)} low-cut gap ${s.lowCutGap.toFixed(4).padStart(9)}  high-cut gap ${s.highCutGap.toFixed(4).padStart(9)}${best > 0 ? '  <-- SEPARATES' : ''}`)
  }
  if (args.json) console.log(JSON.stringify({ rows, report }, null, 2))
}

if (require.main === module) main()

module.exports = { collectLabels, signals, separation, makeStreams }
