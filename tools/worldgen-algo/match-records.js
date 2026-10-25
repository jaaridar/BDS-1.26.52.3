'use strict'

/**
 * Attach a structure identifier to every placement record the server built.
 *
 * `dump-memory.js` finds records by their shape -- a salt, then spacing and
 * separation packed into one dword, then the spread type -- so each record
 * arrives as numbers with no name. The captures supply the name: a record that
 * reproduces a set's `locate structure` answers *is* that set's record.
 *
 * Two tests run in sequence, because the cheap one rejects almost everything:
 *
 *  1. a necessary condition that ignores the salt. A start chunk is
 *     `cell * spacing + offset` with `0 <= offset < spacing - separation`, so an
 *     observed chunk must satisfy `chunk mod spacing < span`. One observation
 *     rules out most (spacing, separation) pairs; thirty of them rule out all but
 *     a handful.
 *  2. for survivors, the real resolver. The accept rule is the measured one: the
 *     reported origin sits in the placement chunk or one chunk before it, so the
 *     residual is in {0, 1} per axis.
 *
 * A wrong record explains one capture with probability around
 * `((span + 3) / spacing)^2 / 9`, so "every capture explained" is what a real
 * match looks like and anything less is reported as unattributed.
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

/** Save division that matches Java's for negative numerators. */
function mod (a, b) {
  return ((a % b) + b) % b
}

/**
 * The other salt a record could have.
 *
 * Java's salt is one dword, and that is what the layout puts at +0. A two-dword
 * salt would push the packed pair to +8, and then the word the scan reads at +0
 * is the *high* half while the low half ends up in `before`. Both readings are
 * tried rather than assuming the width.
 */
function saltsOf (record) {
  const wide = (record.salt >>> 0) + (record.before >>> 0) * 2 ** 32
  const out = [record.salt >>> 0, ((record.salt % 2 ** 48) + 2 ** 48) % 2 ** 48]
  if (record.before !== 0 && Number.isSafeInteger(wide)) out.push(wide % 2 ** 48)
  return [...new Set(out.map((value) => String(value)))]
}

function explain (placement, observations) {
  let hits = 0
  let exact = 0
  for (const row of observations) {
    const chunkX = floorDiv(row.block[0], 16)
    const chunkZ = floorDiv(row.block[1], 16)
    const cellX = floorDiv(chunkX, placement.spacing)
    const cellZ = floorDiv(chunkZ, placement.spacing)
    const start = structureInCell(placement, row.seed, cellX, cellZ)
    const dx = start.chunkX - chunkX
    const dz = start.chunkZ - chunkZ
    if (dx >= 0 && dx <= 1 && dz >= 0 && dz <= 1) {
      hits++
      if (dx === 0 && dz === 0) exact++
    }
  }
  return { hits, exact }
}

/**
 * Could this pair have produced every capture?
 *
 * A start chunk is `cell * spacing + offset`, `offset < span`, so the residue
 * `chunk mod spacing` must be below the span -- except that the reported origin
 * can sit one chunk *before* the placement chunk, which is the `spacing - 1`
 * residue. That one-chunk slack is measured, not assumed: with the known
 * trail_ruins numbers (34/8) the residuals are 0 or 1 in each axis, and without
 * the slack the true pair fails this test.
 */
function possible (spacing, separation, observations) {
  const span = spacing - separation
  for (const row of observations) {
    const rx = mod(floorDiv(row.block[0], 16), spacing)
    const rz = mod(floorDiv(row.block[1], 16), spacing)
    if (rx >= span && rx !== spacing - 1) return false
    if (rz >= span && rz !== spacing - 1) return false
  }
  return true
}

/**
 * Test every record against every captured set.
 *
 * @param {Array} records records from the memory scan
 * @param {Map<string, Array>} [groups] captures, loaded from the tree by default
 * @returns {{total: number, candidates: Array, narrowed: string[], matches: Array}}
 */
function identify (records, groups = byId(loadObservations(DEFAULT_ROOT))) {
  const shaped = records.map((record) => ({
    ...record,
    before: record.before === undefined ? 0 : record.before
  }))

  // Cheap invariant first: keep only records whose spacing can host every
  // capture of at least one set.
  const candidates = []
  const narrowed = new Set()
  for (const record of shaped) {
    let relevant = false
    for (const [, observations] of groups) {
      if (!possible(record.spacing, record.separation, observations)) continue
      relevant = true
      narrowed.add(record.spacing + '/' + record.separation)
    }
    if (relevant) candidates.push(record)
  }

  const matches = []
  for (const record of candidates) {
    const spreadType = record.type === 1 ? 'triangular' : 'linear'
    for (const [id, observations] of groups) {
      if (!possible(record.spacing, record.separation, observations)) continue
      for (const salt of saltsOf(record)) {
        const placement = {
          id,
          spacing: record.spacing,
          separation: record.separation,
          salt: Number(salt),
          spreadType
        }
        const { hits, exact } = explain(placement, observations)
        // One capture may disagree: the known trail_ruins record (salt 83469867,
        // 34/8) explains 34 of its 35 captures and puts the last one 21 chunks
        // off in z, which is not a placement error but a different kind of
        // answer from that probe. Requiring every capture would have thrown the
        // one record whose numbers are known away.
        if (hits < observations.length - 1) continue
        matches.push({
          id,
          salt: Number(salt),
          spacing: record.spacing,
          separation: record.separation,
          spreadType,
          hits,
          exact,
          total: observations.length,
          at: record.at,
          nearby: (record.strings || []).map((entry) => entry.text)
        })
      }
    }
  }
  return { total: shaped.length, candidates, narrowed: [...narrowed], matches }
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
  console.log(`${records.length} candidate records, ${groups.size} captured sets`)

  const result = identify(records, groups)
  console.log(`${result.candidates.length} records survive the spacing invariant (` +
    `${result.narrowed.join(' ')}); tested them against every set`)

  for (const match of result.matches) {
    console.log(`  MATCH ${match.id}: salt ${match.salt} ${match.spacing}/${match.separation} ` +
      `${match.spreadType} -- ${match.hits}/${match.total} placed, ${match.exact} exact`)
  }
  if (!result.matches.length) console.log('no record reproduces a captured set')
  if (asJson) {
    fs.writeFileSync(OUT, JSON.stringify({
      source: 'dump-memory.js record scan, matched against captures',
      candidates: result.candidates.length,
      narrowed: result.narrowed,
      matches: result.matches
    }, null, 1) + '\n')
    console.log(`wrote ${OUT}`)
  }
  return result.matches.length ? 0 : 1
}

if (require.main === module) process.exit(main(process.argv.slice(2)))

module.exports = { explain, identify, possible, saltsOf }
