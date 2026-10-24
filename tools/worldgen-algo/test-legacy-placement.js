'use strict'

/**
 * The unsalted placement family, tested directly against captures.
 *
 * `ca71350` calls two resolvers. One is the salted random-spread form
 * (`d2d2570`); the other (`d2d2c60`) is the shape of
 * `WorldGenRandom.setLargeFeatureSeed`:
 *
 *     setSeed(seed); i = nextLong(); j = nextLong();
 *     setSeed((cellX * i) ^ (cellZ * j) ^ seed);
 *
 * It has no salt constant at all, so a set placed this way can never be found by
 * a salt sweep -- the sweep would be looking for a number the algorithm does not
 * have. That is why this file exists: it decides the family per
 * `(spacing, separation)` pair, with no free parameter, so a match is a result
 * rather than a candidate.
 *
 * Three details are not in the shape above and are not guessable, so each is
 * tried and reported separately instead of being folded into one score:
 *
 *   - Java 1.13+ forces the two 64-bit multipliers odd (`i |= 1`); earlier
 *     versions round them to odd with a different expression;
 *   - the two cell products can be combined with `^` or with `+`;
 *   - the world seed can be folded in with `^` or with `+`.
 *
 *   node tools/worldgen-algo/test-legacy-placement.js
 *   node tools/worldgen-algo/test-legacy-placement.js --id village --json
 */

const fs = require('node:fs')
const path = require('node:path')

const { JavaRandom } = require('../../src/world/java-random')
const { DEFAULT_ROOT, byId, floorDiv, loadObservations } = require('./observations')

const OUT = path.join('research', 'proprietary', 'bds-1.26.52.3', 'structures',
  'legacy-fit.json')

const MASK64 = 0xffffffffffffffffn

/**
 * The two 64-bit multipliers a `setLargeFeatureSeed` call derives from the world
 * seed. They do not depend on the cell, so they are computed once per seed.
 */
function multipliers (seed, odd) {
  const random = new JavaRandom(BigInt(seed))
  let i = random.nextLong()
  let j = random.nextLong()
  if (odd) {
    i |= 1n
    j |= 1n
  }
  return { i, j }
}

/** Java's `setLargeFeatureSeed`, in the variants worth distinguishing. */
function legacySeed (seed, cellX, cellZ, { odd, fold, seedFold }) {
  const { i, j } = multipliers(seed, odd)
  const x = BigInt(cellX)
  const z = BigInt(cellZ)
  let sum = fold === 'xor' ? ((x * i) ^ (z * j)) : (x * i + z * j)
  sum = seedFold === 'xor' ? (sum ^ BigInt(seed)) : (sum + BigInt(seed))
  sum &= MASK64
  return new JavaRandom(sum)
}

function offsets (seedBig, span, spreadType) {
  const random = new JavaRandom(seedBig)
  if (spreadType === 'triangular') {
    return {
      offX: Math.floor((random.nextInt(span) + random.nextInt(span)) / 2),
      offZ: Math.floor((random.nextInt(span) + random.nextInt(span)) / 2)
    }
  }
  return { offX: random.nextInt(span), offZ: random.nextInt(span) }
}

const VARIANTS = []
for (const odd of [true, false]) {
  for (const fold of ['xor', 'plus']) {
    for (const seedFold of ['xor', 'plus']) {
      VARIANTS.push({ odd, fold, seedFold })
    }
  }
}

/**
 * Score one configuration over one set of observations.
 *
 * The accept rule is the measured one: the reported origin can be one chunk
 * before the placement chunk, never after, so the residual is in {0, 1}.
 */
function score (observations, { spacing, separation, spreadType, variant }) {
  const span = spacing - separation
  let exact = 0
  let forward = 0
  let miss = 0
  for (const row of observations) {
    const chunkX = floorDiv(row.block[0], 16)
    const chunkZ = floorDiv(row.block[1], 16)
    const cellX = floorDiv(chunkX, spacing)
    const cellZ = floorDiv(chunkZ, spacing)
    const { i, j } = multipliers(row.seed, variant.odd)
    const x = BigInt(cellX)
    const z = BigInt(cellZ)
    let sum = variant.fold === 'xor' ? ((x * i) ^ (z * j)) : (x * i + z * j)
    sum = variant.seedFold === 'xor' ? (sum ^ BigInt(row.seed)) : (sum + BigInt(row.seed))
    const { offX, offZ } = offsets(sum & MASK64, span, spreadType)
    const dx = cellX * spacing + offX - chunkX
    const dz = cellZ * spacing + offZ - chunkZ
    if (dx === 0 && dz === 0) exact++
    if ((dx === 0 || dx === 1) && (dz === 0 || dz === 1)) forward++
    else miss++
  }
  return { exact, forward, miss, total: observations.length }
}

function main (argv) {
  const only = argv.includes('--id') ? argv[argv.indexOf('--id') + 1] : null
  const asJson = argv.includes('--json')
  const groups = byId(loadObservations(DEFAULT_ROOT))

  const rows = []
  for (const [id, observations] of groups) {
    if (only && id !== only) continue
    // Every (spacing, separation) pair up to 96 chunks, because the point is to
    // decide the family without assuming Bedrock reused a Java grid.
    let best = null
    for (let spacing = 2; spacing <= 96; spacing++) {
      for (let separation = 0; separation < spacing; separation++) {
        for (const spreadType of ['linear', 'triangular']) {
          for (const variant of VARIANTS) {
            const result = score(observations, { spacing, separation, spreadType, variant })
            const key = result.forward
            if (!best || key > best.forward ||
              (key === best.forward && result.exact > best.exact)) {
              best = { spacing, separation, spreadType, variant, ...result }
            }
          }
        }
      }
    }
    rows.push({ id, total: observations.length, best })
    if (!asJson) {
      console.log(`${id.padEnd(18)} n=${String(observations.length).padStart(3)}  ` +
        `best ${best.spacing}/${best.separation} ${best.spreadType} ` +
        `odd=${best.variant.odd} fold=${best.variant.fold}/${best.variant.seedFold}: ` +
        `${best.forward}/${best.total} within {0,1}, ${best.exact} exact`)
    }
  }

  if (asJson) {
    fs.mkdirSync(path.dirname(OUT), { recursive: true })
    fs.writeFileSync(OUT, JSON.stringify({
      note: 'unsalted setLargeFeatureSeed family; forward means predicted - observed in {0,1}',
      variants: VARIANTS,
      results: rows
    }, null, 1) + '\n')
    console.log(`wrote ${OUT}`)
  }
  return 0
}

if (require.main === module) process.exit(main(process.argv.slice(2)))

module.exports = { legacySeed, offsets, score, VARIANTS }
