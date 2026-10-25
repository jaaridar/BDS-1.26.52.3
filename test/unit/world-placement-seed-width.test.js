'use strict'

/**
 * A world seed is 64 bits wide and placement reads only part of it.
 *
 * The tables in `docs/worldgen.md` state which part: 32 bits for the legacy
 * (Mersenne) engine, 48 for the pack-driven (Java LCG) sets. Those statements are
 * only true if the reduction is done on the wide value rather than on a double,
 * because `Number(2n ** 63n - 1n)` rounds up to 2^63 and would reduce to 0
 * instead of 0xffffffff. This test pins the reduction on the seeds where the two
 * routes disagree.
 */

const test = require('node:test')
const assert = require('node:assert/strict')
const path = require('node:path')

const ROOT = path.resolve(__dirname, '..', '..')
const { PLACEMENTS } = require(path.join(ROOT, 'src', 'world', 'structures-data.js'))
const { candidateStarts, seed32, seed48 } = require(path.join(ROOT, 'src', 'world', 'structure-placement.js'))

const village = PLACEMENTS['minecraft:village']
const trail = PLACEMENTS['minecraft:trail_ruins']

const positions = (placement, seed, radius = 256) =>
  candidateStarts(placement, seed, 0, 0, radius).map((start) => `${start.chunkX},${start.chunkZ}`)

test('the low-32 reduction is correct past the safe-integer range', () => {
  assert.equal(seed32(9223372036854775807n), 4294967295)
  assert.equal(seed32(-9223372036854775808n), 0)
  assert.equal(seed32(9223372036854775807n), seed32(-1n))
  assert.equal(seed32(9007199254740993n), 1, '2^53 + 1 must not round to 2^53')
  // The double route would get both of these wrong, which is the point.
  assert.notEqual(Number(9223372036854775807n) >>> 0, 4294967295)
})

test('the low-48 reduction is correct past the safe-integer range', () => {
  assert.equal(seed48(9223372036854775807n), 281474976710655n)
  assert.equal(seed48(-1n), 281474976710655n)
  assert.equal(seed48(281474976710657n), 1n)
})

test('seeds that differ only above bit 31 place identically', () => {
  for (const base of [0n, 1n, 39n, -1n, 4294967295n]) {
    const reference = positions(village, base)
    assert.deepEqual(positions(village, BigInt.asIntN(64, base + 4294967296n)), reference)
    assert.deepEqual(positions(village, BigInt.asIntN(64, base + 4294967296n * 5n)), reference)
  }
})

test('64-bit extremes behave like their low halves', () => {
  assert.deepEqual(positions(village, 9223372036854775807n), positions(village, -1n))
  assert.deepEqual(positions(village, -9223372036854775808n), positions(village, 0n))
  assert.deepEqual(positions(trail, 9223372036854775807n), positions(trail, -1n))
})

test('the Java sets read bits 32..47 while the Mersenne sets do not', () => {
  const villageBefore = positions(village, 5n)
  const villageAfter = positions(village, 5n + 281474976710656n)
  assert.deepEqual(villageAfter, villageBefore, '2^48 is invisible to the Mersenne sets')
  const trailBefore = positions(trail, 5n)
  const trailAfter = positions(trail, 5n + 281474976710656n)
  assert.deepEqual(trailAfter, trailBefore, '2^48 is invisible to the Java sets too')
  const trailCarry = positions(trail, 5n + 4294967296n)
  assert.notDeepEqual(trailCarry, trailBefore, 'bit 32 does reach the Java sets')
})
