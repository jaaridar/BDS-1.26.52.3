#!/usr/bin/env node
'use strict'

/**
 * The acceptance test: does the model answer `/locate structure stronghold`?
 *
 * Every capture recorded, for each origin it probed, the position the server
 * answered. That pair is a question and its ground truth, and it is a harder
 * test than "is the structure set right": the structure a query lands on is the
 * *nearest* one, so a model that is right about some strongholds and wrong about
 * their order still fails here.
 *
 *   node tools/worldgen-algo/verify-locate.js
 *   node tools/worldgen-algo/verify-locate.js --slug stronghold_enum3
 *   node tools/worldgen-algo/verify-locate.js --json
 *
 * Each answer is classified, never rounded into a hit:
 *
 *   exact       the model's nearest gated cell is the chunk the server named
 *   relocated   the server named a chunk that is no cell's grid position at all,
 *               i.e. a stronghold the biome query moved; the model cannot know
 *               that position yet and does not pretend to
 *   wrong       the server named a grid position that is not the model's nearest,
 *               which would mean the model's ordering or its gate is broken
 *
 * `wrong` is the number that must stay at zero as the model improves.
 */

const path = require('node:path')
const { loadEnumeration } = require('./structure-enumeration')
const { strongholdInCell, CELL } = require('../../src/world/stronghold')

const CAPTURE_ROOT = path.resolve(__dirname, '../../research/proprietary/bds-1.26.52.3/structures/captures')

function parseArgs (argv) {
  const args = { slugs: [], json: false, reach: 4 }
  for (let i = 0; i < argv.length; i++) {
    switch (argv[i]) {
      case '--slug': args.slugs.push(argv[++i]); break
      case '--reach': args.reach = Number(argv[++i]); break
      case '--json': args.json = true; break
      default: throw new Error(`unknown argument ${argv[i]}`)
    }
  }
  if (!args.slugs.length) {
    const fs = require('node:fs')
    args.slugs = fs.readdirSync(CAPTURE_ROOT, { withFileTypes: true })
      .filter((entry) => entry.isDirectory() && entry.name.startsWith('stronghold'))
      .map((entry) => entry.name)
      .sort()
  }
  return args
}

/** Is this chunk a cell grid position for this seed, and is that cell gated? */
function gridLookup (seed, chunkX, chunkZ, reach) {
  const baseX = Math.floor(chunkX / CELL)
  const baseZ = Math.floor(chunkZ / CELL)
  for (let dx = -1; dx <= 1; dx++) {
    for (let dz = -1; dz <= 1; dz++) {
      const stronghold = strongholdInCell(seed, baseX + dx, baseZ + dz)
      if (stronghold.chunkX === chunkX && stronghold.chunkZ === chunkZ) return stronghold
    }
  }
  void reach
  return null
}

/** The model's answer to a query: the nearest gated cell position. */
function nearestGated (seed, originX, originZ, reach) {
  const baseX = Math.floor(originX / CELL)
  const baseZ = Math.floor(originZ / CELL)
  let best = null
  for (let dx = -reach; dx <= reach; dx++) {
    for (let dz = -reach; dz <= reach; dz++) {
      const stronghold = strongholdInCell(seed, baseX + dx, baseZ + dz)
      if (!stronghold.gated) continue
      const distance = Math.hypot(stronghold.chunkX - originX, stronghold.chunkZ - originZ)
      if (!best || distance < best.distance) best = { ...stronghold, distance }
    }
  }
  return best
}

function score (slug, reach) {
  const { seeds } = loadEnumeration(slug, 'stronghold')
  const rows = []
  for (const entry of seeds) {
    for (const answer of entry.answers) {
      for (const [blockX, blockZ] of answer.seenFrom) {
        const originChunk = [Math.floor(blockX / 16), Math.floor(blockZ / 16)]
        const model = nearestGated(entry.seed, originChunk[0], originChunk[1], reach)
        const serverAnswer = [answer.chunkX, answer.chunkZ]
        let verdict
        if (model && model.chunkX === serverAnswer[0] && model.chunkZ === serverAnswer[1]) {
          verdict = 'exact'
        } else if (gridLookup(entry.seed, serverAnswer[0], serverAnswer[1], reach)) {
          verdict = 'wrong'
        } else {
          verdict = 'relocated'
        }
        rows.push({
          seed: entry.seed,
          origin: originChunk,
          server: serverAnswer,
          model: model ? [model.chunkX, model.chunkZ] : null,
          verdict
        })
      }
    }
  }
  const count = (verdict) => rows.filter((row) => row.verdict === verdict).length
  return {
    slug,
    queries: rows.length,
    exact: count('exact'),
    relocated: count('relocated'),
    wrong: count('wrong'),
    rows
  }
}

function main () {
  const args = parseArgs(process.argv.slice(2))
  const results = args.slugs.map((slug) => score(slug, args.reach))
  if (args.json) {
    console.log(JSON.stringify(results.length === 1 ? results[0] : results, null, 2))
    return
  }
  for (const result of results) {
    if (!result.queries) continue
    const pct = (n) => `${((100 * n) / result.queries).toFixed(1)}%`
    console.log(`${result.slug}: ${result.queries} queries  ` +
      `exact ${result.exact} (${pct(result.exact)})  ` +
      `relocated ${result.relocated} (${pct(result.relocated)})  ` +
      `wrong ${result.wrong}`)
  }
  const total = results.reduce((sum, r) => sum + r.queries, 0)
  const exact = results.reduce((sum, r) => sum + r.exact, 0)
  const relocated = results.reduce((sum, r) => sum + r.relocated, 0)
  const wrong = results.reduce((sum, r) => sum + r.wrong, 0)
  console.log(`\nall sets: ${total} queries, ${exact} exact (${((100 * exact) / total).toFixed(1)}%), ` +
    `${relocated} relocated, ${wrong} wrong`)
  // `wrong` means the model named a grid position that the server did not, so
  // the run fails on it; relocated answers are the biome layer's business and
  // are reported rather than hidden.
  if (wrong > 0) process.exitCode = 1
}

if (require.main === module) main()

module.exports = { score, nearestGated }
