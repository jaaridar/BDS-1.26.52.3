'use strict'

const test = require('node:test')
const assert = require('node:assert')

const { JavaRandom, structureSeed } = require('../../src/world/java-random')
const {
  structureInCell,
  candidateStarts,
  nearestStart,
  floorDiv
} = require('../../src/world/structure-placement')

const PLACEMENT = {
  id: 'minecraft:test_set',
  spacing: 34,
  separation: 8,
  salt: 10387312,
  spreadType: 'linear'
}

test('the LCG reproduces its own stream deterministically', () => {
  const a = new JavaRandom(42)
  const b = new JavaRandom(42)
  for (let i = 0; i < 100; i++) {
    assert.strictEqual(a.next(32), b.next(32))
  }
})

test('seeding is the xor-and-mask the binary performs', () => {
  const random = new JavaRandom(0)
  // (0 ^ 0x5deece66d) & 0xffffffffffff
  assert.strictEqual(random.state, 0x5deece66dn)
  random.setSeed(-1)
  assert.strictEqual(random.state, (BigInt(-1) ^ 0x5deece66dn) & 0xffffffffffffn)
})

test('bounded draws stay inside the bound for every shape of bound', () => {
  for (const bound of [2, 3, 4, 7, 16, 17, 26, 33, 100, 255, 256, 257, 1000, 65536]) {
    const random = new JavaRandom(bound)
    for (let i = 0; i < 500; i++) {
      const value = random.nextInt(bound)
      assert.ok(Number.isInteger(value), `not an integer for bound ${bound}`)
      assert.ok(value >= 0 && value < bound, `bound ${bound} gave ${value}`)
    }
  }
})

test('power-of-two draws use the high bits and consume exactly one step', () => {
  const random = new JavaRandom(7)
  const before = random.state
  const value = random.nextInt(256)
  const afterOne = ((before * 0x5deece66dn + 0xbn) & 0xffffffffffffn)
  assert.strictEqual(random.state, afterOne, 'consumed more than one step')
  assert.ok(value >= 0 && value < 256)
})

test('unit draws stay in range', () => {
  const random = new JavaRandom(9)
  for (let i = 0; i < 1000; i++) {
    const asFloat = random.nextFloat()
    const asDouble = random.nextDouble()
    assert.ok(asFloat >= 0 && asFloat < 1, `float ${asFloat}`)
    assert.ok(asDouble >= 0 && asDouble < 1, `double ${asDouble}`)
  }
})

test('the structure seed folds coordinates and salt with 64-bit wrap', () => {
  assert.strictEqual(structureSeed(0, 0, 0, 0), 0n)
  assert.strictEqual(structureSeed(0, 1, 0, 0), 341873128712n)
  assert.strictEqual(structureSeed(0, 0, 1, 0), 132897987541n)
  assert.strictEqual(structureSeed(123, 0, 0, 456), 579n)
  // A large cell coordinate pushes the sum past 2^63, where Java would wrap.
  const wrapped = structureSeed(0, 0, 100000000, 0)
  assert.ok(wrapped < 0n, 'expected the sum to wrap negative')
  const expected = (132897987541n * 100000000n) & 0xffffffffffffffffn
  assert.strictEqual(wrapped, expected >= 2n ** 63n ? expected - 2n ** 64n : expected)
})

test('cell placement stays inside the cell and past the separation', () => {
  const span = PLACEMENT.spacing - PLACEMENT.separation
  for (let cell = -30; cell <= 30; cell++) {
    for (const cellZ of [-7, 0, 3]) {
      const start = structureInCell(PLACEMENT, 99, cell, cellZ)
      const baseX = cell * PLACEMENT.spacing
      const baseZ = cellZ * PLACEMENT.spacing
      assert.ok(start.chunkX >= baseX && start.chunkX < baseX + span, 'x outside the cell span')
      assert.ok(start.chunkZ >= baseZ && start.chunkZ < baseZ + span, 'z outside the cell span')
    }
  }
})

test('triangular spread keeps two draws per axis inside the span', () => {
  const triangular = { ...PLACEMENT, spreadType: 'triangular' }
  const span = triangular.spacing - triangular.separation
  for (let cell = 0; cell < 40; cell++) {
    const start = structureInCell(triangular, 5, cell, cell)
    const base = cell * triangular.spacing
    assert.ok(start.chunkX >= base && start.chunkX < base + span)
    assert.ok(start.chunkZ >= base && start.chunkZ < base + span)
  }
})

test('linear and triangular spreads differ', () => {
  const linear = structureInCell(PLACEMENT, 1, 3, 4)
  const triangular = structureInCell({ ...PLACEMENT, spreadType: 'triangular' }, 1, 3, 4)
  assert.notDeepStrictEqual(
    [linear.chunkX, linear.chunkZ],
    [triangular.chunkX, triangular.chunkZ]
  )
})

test('placement is deterministic per seed and varies between seeds', () => {
  const a = structureInCell(PLACEMENT, 1234, 5, 6)
  const b = structureInCell(PLACEMENT, 1234, 5, 6)
  const c = structureInCell(PLACEMENT, 1235, 5, 6)
  assert.deepStrictEqual(a, b)
  assert.notDeepStrictEqual([a.chunkX, a.chunkZ], [c.chunkX, c.chunkZ])
})

test('candidates are sorted by distance and inside the radius', () => {
  const starts = candidateStarts(PLACEMENT, 777, 100, 100, 256)
  assert.ok(starts.length > 0, 'expected candidates')
  for (let i = 1; i < starts.length; i++) {
    assert.ok(starts[i].distance >= starts[i - 1].distance, 'not sorted')
  }
  for (const start of starts) {
    assert.ok(start.distance <= 256 * 16, 'outside the radius')
  }
  const nearest = nearestStart(PLACEMENT, 777, 100, 100, 256)
  assert.deepStrictEqual(nearest, starts[0])
})

test('a frequency gate rejects some cells', () => {
  const gated = { ...PLACEMENT, frequency: 0.5 }
  let accepted = 0
  let rejected = 0
  for (let cell = 0; cell < 200; cell++) {
    if (structureInCell(gated, 3, cell, 11).accepted) accepted++
    else rejected++
  }
  assert.ok(accepted > 0 && rejected > 0, `accepted ${accepted} rejected ${rejected}`)
})

test('floorDiv matches Java for negative values', () => {
  assert.strictEqual(floorDiv(-1, 34), -1)
  assert.strictEqual(floorDiv(-34, 34), -1)
  assert.strictEqual(floorDiv(-35, 34), -2)
  assert.strictEqual(floorDiv(33, 34), 0)
})
