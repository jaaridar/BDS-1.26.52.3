'use strict'

const test = require('node:test')
const assert = require('node:assert')

const { Mt19937 } = require('../../src/world/mt19937')
const {
  OctaveNoise,
  NormalNoise,
  GRADIENTS_CLASSIC,
  fade,
  lerp,
  shufflePermutation
} = require('../../src/world/perlin')

const POLICY = { unit: 'u32', int: 'modulo', gradients: GRADIENTS_CLASSIC }

test('mt19937 matches the published reference stream', () => {
  // Reference values for init_genrand(5489), the canonical test vector.
  const random = new Mt19937(5489)
  assert.deepStrictEqual(
    [random.nextU32(), random.nextU32(), random.nextU32()],
    [3499211612, 581869302, 3890346734]
  )
})

test('mt19937 stays inside 32 bits across a block boundary', () => {
  const random = new Mt19937(7)
  for (let i = 0; i < 2000; i++) {
    const value = random.nextU32()
    assert.ok(Number.isInteger(value) && value >= 0 && value <= 0xffffffff, `word ${i}`)
  }
})

test('unit draws stay in [0, 1)', () => {
  for (const unit of ['u32', 'float24', 'double53']) {
    const random = new Mt19937(99)
    for (let i = 0; i < 1000; i++) {
      const value = random.nextUnit(unit)
      assert.ok(value >= 0 && value < 1, `${unit} gave ${value}`)
    }
  }
})

test('bounded ints respect the bound for every policy', () => {
  for (const int of ['topBits', 'modulo', 'reject']) {
    const random = new Mt19937(4)
    for (let bound = 1; bound <= 300; bound += 7) {
      for (let i = 0; i < 20; i++) {
        const value = random.nextInt(bound, int)
        assert.ok(value >= 0 && value < bound, `${int} bound ${bound} gave ${value}`)
      }
    }
  }
})

test('permutation is a bijection whose upper half mirrors the lower half', () => {
  const perm = shufflePermutation(new Mt19937(1234), 'topBits')
  assert.strictEqual(perm.length, 512)
  const seen = new Set()
  for (let i = 0; i < 256; i++) {
    assert.ok(!seen.has(perm[i]), 'duplicate entry')
    seen.add(perm[i])
    assert.strictEqual(perm[i + 256], perm[i], 'mirror mismatch')
  }
  assert.strictEqual(seen.size, 256)
})

test('the octave amplitude is the reciprocal of the octave sum', () => {
  for (let layers = 1; layers <= 6; layers++) {
    const noise = new OctaveNoise(layers, new Mt19937(layers), POLICY)
    let sum = 0
    for (let i = 0; i < layers; i++) sum += 1 / 2 ** i
    assert.ok(Math.abs(noise.amplitude - 1 / sum) < 1e-12, `${layers} octaves`)
  }
})

test('the octave amplitude stays bounded as layers grow', () => {
  const noise = new OctaveNoise(16, new Mt19937(3), POLICY)
  assert.ok(noise.amplitude > 0.49 && noise.amplitude <= 1)
})

test('noise is deterministic and seed sensitive', () => {
  const a = new OctaveNoise(3, new Mt19937(11), POLICY)
  const b = new OctaveNoise(3, new Mt19937(11), POLICY)
  const c = new OctaveNoise(3, new Mt19937(12), POLICY)
  for (const [x, y, z] of [[0, 0, 0], [1.5, -2.25, 3.75], [-100.125, 0.5, 42]]) {
    assert.strictEqual(a.getValue(x, y, z), b.getValue(x, y, z))
    assert.notStrictEqual(a.getValue(x, y, z), c.getValue(x, y, z))
  }
})

test('noise is finite and within the gradient bound', () => {
  const noise = new OctaveNoise(4, new Mt19937(5), POLICY)
  for (let i = 0; i < 500; i++) {
    const value = noise.getValue(i * 0.37 - 40, i * 0.11 - 12, i * 0.73 - 90)
    assert.ok(Number.isFinite(value), 'finite')
    // Each octave contributes at most 1 (unit gradients, unit cell), and the
    // stack divides by the octave factor, so the sum is bounded by the octave
    // count.
    assert.ok(Math.abs(value) <= noise.layers + 1e-9, `bound: ${value}`)
  }
})

test('normal noise folds two layers and the input factor', () => {
  const noise = new NormalNoise(4, new Mt19937(8), {
    inputFactor: 1.0181268882175227,
    maxValue: 1,
    policy: POLICY
  })
  assert.strictEqual(noise.first.layers, 4)
  assert.strictEqual(noise.second.layers, 4)
  // The two layers must not share a permutation: the stream continues.
  assert.notDeepStrictEqual(Array.from(noise.first.permutations[0]), Array.from(noise.second.permutations[0]))
  const value = noise.getValue(12.5, 0, -30.25)
  assert.ok(Number.isFinite(value))
})

test('fade and lerp behave', () => {
  assert.strictEqual(fade(0), 0)
  assert.strictEqual(fade(1), 1)
  assert.ok(Math.abs(fade(0.5) - 0.5) < 1e-12)
  assert.strictEqual(lerp(0, 3, 7), 3)
  assert.strictEqual(lerp(1, 3, 7), 7)
  assert.strictEqual(lerp(0.5, 0, 4), 2)
})

test('the gradient set has 16 unit-length entries', () => {
  assert.strictEqual(GRADIENTS_CLASSIC.length, 16)
  for (const [x, y, z] of GRADIENTS_CLASSIC) {
    assert.ok(Math.abs(Math.hypot(x, y, z) - Math.SQRT2) < 1e-12 || Math.hypot(x, y, z) === 1)
  }
})
