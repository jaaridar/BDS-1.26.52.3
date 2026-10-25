#!/usr/bin/env node
'use strict'

/**
 * Turn a sweep of `locate structure` answers into a structure *set* per seed.
 *
 * One origin only reveals the nearest structure of each type. A grid of origins
 * reveals many, because each origin names its own nearest -- so the distinct
 * answers of a sweep approximate the set the generator produced, deduplicated by
 * position. For a ring algorithm (strongholds) that set is what a fit needs: it
 * shows how many structures a ring has, at what radius, at what angles.
 *
 *   node tools/worldgen-algo/structure-enumeration.js --slug stronghold_enum
 *   node tools/worldgen-algo/structure-enumeration.js --slug stronghold_enum --json
 *
 * The output is a measurement, not a model: radii and angles are printed as the
 * server reported them, in chunks, with no relocation applied.
 */

const fs = require('node:fs')
const path = require('node:path')

const CAPTURE_ROOT = path.resolve(__dirname, '../../research/proprietary/bds-1.26.52.3/structures/captures')

/**
 * A captured position as `[x, z]`.
 *
 * The captures are not consistent about this: `at` is `[x, y, z]` with a null
 * y, while `from` is `[x, z]`. Reading `[2]` from both silently yields NaN for
 * the origins, which is how a whole probe run can look empty.
 */
function xz (position) {
  if (!Array.isArray(position)) return [NaN, NaN]
  return position.length === 2 ? [position[0], position[1]] : [position[0], position[2]]
}

/** A capture's seed as both its exact decimal string and a BigInt. */
function toSeedValue (text) {
  try {
    return BigInt(String(text).trim())
  } catch {
    return BigInt(Number(text))
  }
}

function parseArgs (argv) {
  const args = { slug: null, json: false, id: null }
  for (let i = 0; i < argv.length; i++) {
    const next = () => argv[++i]
    switch (argv[i]) {
      case '--slug': args.slug = next(); break
      case '--id': args.id = next(); break
      case '--json': args.json = true; break
      default: throw new Error(`unknown argument ${argv[i]}`)
    }
  }
  return args
}

/** Every distinct answer in a sweep, grouped by seed and identifier. */
function loadEnumeration (slug, onlyId = null) {
  const root = path.join(CAPTURE_ROOT, slug)
  const bySeed = new Map()
  let files = 0
  for (const entry of fs.readdirSync(root, { withFileTypes: true })) {
    if (!entry.isDirectory()) continue
    const file = path.join(root, entry.name, 'structures.json')
    if (!fs.existsSync(file)) continue
    files++
    const capture = JSON.parse(fs.readFileSync(file, 'utf8'))
    // Seeds are kept as the decimal string the capture recorded. Two of the
    // probed seeds are beyond 2^53 (the int64 extremes), where a JS number is
    // already wrong, so converting here would silently test the wrong world.
    const seed = String(capture.seed)
    if (!bySeed.has(seed)) {
      bySeed.set(seed, { seed, seedValue: toSeedValue(seed), origins: 0, answers: new Map() })
    }
    const bucket = bySeed.get(seed)
    for (const result of capture.results || []) {
      if (!result.found || !Array.isArray(result.at)) continue
      const id = String(result.id)
      if (onlyId && id !== onlyId) continue
      const chunkX = Math.floor(result.at[0] / 16)
      const chunkZ = Math.floor(result.at[2] / 16)
      const key = `${id}:${chunkX}:${chunkZ}`
      bucket.origins++
      if (!bucket.answers.has(key)) {
        bucket.answers.set(key, {
          id, chunkX, chunkZ, blockX: result.at[0], blockZ: result.at[2], seenFrom: []
        })
      }
      bucket.answers.get(key).seenFrom.push(result.from || [0, 0])
    }
  }
  const out = []
  for (const seed of [...bySeed.keys()].sort((a, b) => (BigInt(a) < BigInt(b) ? -1 : BigInt(a) > BigInt(b) ? 1 : 0))) {
    const bucket = bySeed.get(seed)
    const answers = [...bucket.answers.values()].map((answer) => ({
      ...answer,
      radiusChunks: Math.hypot(answer.chunkX, answer.chunkZ),
      angleDegrees: (Math.atan2(answer.chunkZ, answer.chunkX) * 180) / Math.PI,
      origins: answer.seenFrom.length
    }))
    answers.sort((a, b) => a.radiusChunks - b.radiusChunks)
    out.push({ seed, seedValue: bucket.seedValue, files: bucket.origins, answers })
  }
  return { files, seeds: out }
}

function main () {
  const args = parseArgs(process.argv.slice(2))
  if (!args.slug) throw new Error('pass --slug <capture directory>')
  const { files, seeds } = loadEnumeration(args.slug, args.id ? (args.id.includes(':') ? args.id : `minecraft:${args.id}`) : null)
  if (args.json) {
    process.stdout.write(JSON.stringify({ files, seeds }, null, 2) + '\n')
    return
  }
  console.log(`${seeds.length} seeds from ${files} captures`)
  for (const seed of seeds) {
    console.log(`\nseed ${seed.seed}: ${seed.answers.length} distinct positions`)
    for (const answer of seed.answers) {
      console.log(
        `  ${answer.id.replace('minecraft:', '').padEnd(16)}` +
        `chunk ${String(answer.chunkX).padStart(6)},${String(answer.chunkZ).padStart(6)}` +
        `  block ${String(answer.blockX).padStart(7)},${String(answer.blockZ).padStart(7)}` +
        `  r ${answer.radiusChunks.toFixed(1).padStart(6)} chunks` +
        `  angle ${answer.angleDegrees.toFixed(1).padStart(7)}` +
        `  (${answer.origins} origins)`
      )
    }
  }
}

if (require.main === module) main()

module.exports = {
  xz, loadEnumeration }
