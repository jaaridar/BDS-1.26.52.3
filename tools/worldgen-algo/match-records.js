'use strict'

/**
 * Attach a structure identifier to every placement record the server built.
 *
 * `dump-memory.js` finds records by their shape -- a salt, then spacing and
 * separation packed into one dword, then the spread type -- so each record
 * arrives as numbers with no name. The captures supply the name: a record that
 * reproduces a set's `locate structure` answers *is* that set's record. Records
 * that match nothing captured so far are reported as unattributed rather than
 * being given a name that has not been measured.
 *
 *   node tools/worldgen-algo/match-records.js
 *   node tools/worldgen-algo/match-records.js --json
 */

const fs = require('node:fs')
const path = require('node:path')

const { DEFAULT_ROOT, byId, floorDiv, loadObservations } = require('./observations')
const { structureInCell } = require('../../src/world/structure-placement')

const MEMORY = path.join(DEFAULT_ROOT, 'memory', 'memory.json')
const OUT = path.join(DEFAULT_ROOT, 'placement-records.json')

/**
 * How many captures a record explains.
 *
 * The accept rule is the measured one: the reported origin sits in the placement
 * chunk or one chunk before it, so the residual is in {0, 1} per axis. A wrong
 * record explains a capture with probability ((span + 1) / spacing)^2 / 9 or so,
 * which is a few percent for the spans in play, so a real match has to explain
 * essentially all of them to be believable.
 */
function explain (record, observations) {
  const placement = {
    id: record.id || 'record',
    spacing: record.spacing,
    separation: record.separation,
    salt: record.salt,
    spreadType: record.type === 1 ? 'triangular' : 'linear'
  }
  let hits = 0
  for (const row of observations) {
    const chunkX = floorDiv(row.block[0], 16)
    const chunkZ = floorDiv(row.block[1], 16)
    const cellX = floorDiv(chunkX, placement.spacing)
    const cellZ = floorDiv(chunkZ, placement.spacing)
    const start = structureInCell(placement, row.seed, cellX, cellZ)
    const dx = start.chunkX - chunkX
    const dz = start.chunkZ - chunkZ
    if (dx >= 0 && dx <= 1 && dz >= 0 && dz <= 1) hits++
  }
  return hits
}

function main (argv) {
  const asJson = argv.includes('--json')
  const groups = byId(loadObservations(DEFAULT_ROOT))
  if (!fs.existsSync(MEMORY)) {
    console.error(`no memory dump at ${MEMORY}`)
    return 1
  }
  const dump = JSON.parse(fs.readFileSync(MEMORY, 'utf8'))
  const records = dump.records || []
  if (!records.length) {
    console.error('the dump has no records; re-run dump-memory.js with the record scan')
    return 1
  }

  const results = []
  for (const record of records) {
    const scores = []
    for (const [id, observations] of groups) {
      const hits = explain(record, observations)
      if (hits >= observations.length - 1) {
        scores.push({ id, hits, total: observations.length })
      }
    }
    const names = (record.strings || []).map((entry) => entry.text)
    const named = scores.sort((a, b) => b.hits - a.hits)[0] || null
    results.push({
      salt: record.salt,
      spacing: record.spacing,
      separation: record.separation,
      spreadType: record.type === 1 ? 'triangular' : 'linear',
      at: record.at,
      // The pointer scan is the independent path to the same conclusion: if a
      // record sits next to a pointer at "minecraft:village", the numbers are
      // that set's whatever the captures say.
      nearby: names,
      matches: scores,
      id: named ? named.id : null
    })
    if (!asJson) {
      const label = named ? `${named.id} ${named.hits}/${named.total}` : 'unattributed'
      console.log(`${String(record.salt).padStart(11)}  ${String(record.spacing).padStart(3)}` +
        `/${String(record.separation).padEnd(3)} ${record.type ? 'tri' : 'lin'}  ${label}` +
        (names.length ? `  nearby: ${names.join(' ')}` : ''))
    }
  }

  if (asJson) {
    fs.writeFileSync(OUT, JSON.stringify({
      source: 'dump-memory.js record scan, matched against captures',
      records: results
    }, null, 1) + '\n')
    console.log(`wrote ${OUT}`)
  }
  return 0
}

if (require.main === module) process.exit(main(process.argv.slice(2)))

module.exports = { explain }
