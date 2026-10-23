'use strict'

/**
 * Octave-stacked Perlin noise, the primitive under BDS's multinoise router.
 *
 * Clean-room implementation of classic Ken Perlin gradient noise as described
 * in "Improving Noise" (2002): 256-entry permutation folded onto itself,
 * quintic fade, 16-entry gradient set, trilinear blend of eight corners.
 *
 * The structure below is what the recovered evidence pins down
 * (research/proprietary/bds-1.26.52.3/ANALYSIS.md section 5):
 *
 *   - one permutation of 0..255, shuffled by a descending Fisher-Yates walk
 *     that consumes `nextInt(256 - i)` per step and mirrors each settled entry
 *     into a second half, giving a 512-entry lookup;
 *   - three per-layer offsets, each `nextUnit() * 256`;
 *   - inputs scaled by an octave factor of 2 and the blend result divided by
 *     that factor, so higher octaves contribute less;
 *   - a stored amplitude `1 / sum(2^-i for i in 0..layers-1)`.
 *
 * The gradient set and the draw conventions are inputs rather than constants,
 * because they are the two things still being measured; see `resolveNoisePolicy`.
 */

const { Mt19937 } = require('./mt19937')

/**
 * The 16 gradients, read out of the binary's own table.
 *
 * The first twelve are the classic edge-midpoint directions; entries 12-15 are
 * the padding, and padding is exactly where implementations disagree, so these
 * are transcribed from the measured table rather than assumed. Source:
 * research/proprietary/bds-1.26.52.3/ghidra/lattice/tables.md, region
 * 0x01d9f3c0, 16 entries of three floats (12 bytes each).
 */
const GRADIENTS_CLASSIC = [
  [1, 1, 0], [-1, 1, 0], [1, -1, 0], [-1, -1, 0],
  [1, 0, 1], [-1, 0, 1], [1, 0, -1], [-1, 0, -1],
  [0, 1, 1], [0, -1, 1], [0, 1, -1], [0, -1, -1],
  [1, 1, 0], [0, -1, 1], [-1, 1, 0], [0, -1, -1]
]

/** Quintic fade: 6t^5 - 15t^4 + 10t^3. */
function fade (t) {
  return t * t * t * (t * (t * 6 - 15) + 10)
}

function lerp (t, a, b) {
  return a + t * (b - a)
}

function floor (v) {
  // Math.floor, but -0 normalised so the integer index does not become -0.
  return Math.floor(v) + 0
}

class OctaveNoise {
  /**
   * @param {number} layers number of octaves
   * @param {Mt19937} random stream to consume
   * @param {object} policy { unit: 'float24'|'double53', int: 'topBits'|'modulo'|'reject', gradients }
   */
  constructor (layers, random, policy) {
    this.layers = layers
    this.policy = policy
    this.offsets = []
    this.permutations = []
    for (let i = 0; i < layers; i++) {
      this.offsets.push([
        random.nextUnit(policy.unit) * 256,
        random.nextUnit(policy.unit) * 256,
        random.nextUnit(policy.unit) * 256
      ])
      this.permutations.push(shufflePermutation(random, policy.int))
    }
    let sum = 0
    for (let i = 0; i < layers; i++) sum += 1 / 2 ** i
    /** Amplitude that normalises the octave sum to roughly unit scale. */
    this.amplitude = layers > 0 ? 1 / sum : 0
  }

  /**
   * Sample at (x, y, z).
   *
   * Note the deliberate asymmetry with the usual textbook form: the value is
   * divided by the octave factor inside the loop and multiplied by the stored
   * amplitude by the caller, which keeps the intermediate magnitudes identical
   * to the binary's evaluation order.
   */
  getValue (x, y, z) {
    let sum = 0
    let scale = 1
    for (let i = 0; i < this.layers; i++) {
      const offset = this.offsets[i]
      const perm = this.permutations[i]
      const fx0 = x * scale + offset[0]
      const fy0 = y * scale + offset[1]
      const fz0 = z * scale + offset[2]
      const ix = floor(fx0)
      const iy = floor(fy0)
      const iz = floor(fz0)
      const fx = fx0 - ix
      const fy = fy0 - iy
      const fz = fz0 - iz
      sum += cornerValue(perm, this.policy.gradients, ix, iy, iz, fx, fy, fz) / scale
      scale *= 2
    }
    return sum
  }
}

/** Shuffle 0..255 once, mirroring each settled slot into the upper half. */
function shufflePermutation (random, intPolicy) {
  const perm = new Uint16Array(512)
  for (let i = 0; i < 256; i++) perm[i] = i
  for (let i = 0; i < 256; i++) {
    const j = random.nextInt(256 - i, intPolicy) + i
    const tmp = perm[i]
    perm[i] = perm[j]
    perm[j] = tmp
    perm[i + 256] = perm[i]
  }
  return perm
}

/** Trilinear blend of the eight gradient dot products around a lattice cell. */
function cornerValue (perm, gradients, ix, iy, iz, fx, fy, fz) {
  const X = ix & 255
  const Y = iy & 255
  const Z = iz & 255
  const a = perm[X] + Y
  const b = perm[X + 1] + Y
  const aa = perm[a] + Z
  const ab = perm[a + 1] + Z
  const ba = perm[b] + Z
  const bb = perm[b + 1] + Z

  const u = fade(fx)
  const v = fade(fy)
  const w = fade(fz)

  const x1 = fx - 1
  const y1 = fy - 1
  const z1 = fz - 1

  const g000 = dot(gradients, perm[aa] & 15, fx, fy, fz)
  const g100 = dot(gradients, perm[ba] & 15, x1, fy, fz)
  const g010 = dot(gradients, perm[ab] & 15, fx, y1, fz)
  const g110 = dot(gradients, perm[bb] & 15, x1, y1, fz)
  const g001 = dot(gradients, perm[aa + 1] & 15, fx, fy, z1)
  const g101 = dot(gradients, perm[ba + 1] & 15, x1, fy, z1)
  const g011 = dot(gradients, perm[ab + 1] & 15, fx, y1, z1)
  const g111 = dot(gradients, perm[bb + 1] & 15, x1, y1, z1)

  const z0 = lerp(v, lerp(u, g000, g100), lerp(u, g010, g110))
  const z1v = lerp(v, lerp(u, g001, g101), lerp(u, g011, g111))
  return lerp(w, z0, z1v)
}

function dot (gradients, index, x, y, z) {
  const g = gradients[index]
  return g[0] * x + g[1] * y + g[2] * z
}

/** The two-layer normal noise the router samples. */
class NormalNoise {
  /**
   * @param {number} layers octaves per layer
   * @param {Mt19937} random shared stream; the second layer continues it
   * @param {object} options { inputFactor, maxValue, policy }
   */
  constructor (layers, random, options) {
    this.first = new OctaveNoise(layers, random, options.policy)
    this.second = new OctaveNoise(layers, random, options.policy)
    this.inputFactor = options.inputFactor
    this.maxValue = options.maxValue
  }

  /**
   * Sample both layers and fold them.
   *
   * The second layer is sampled at coordinates multiplied by `inputFactor`
   * (1.0181268882175227, recovered as a float from the binary) but carries no
   * extra weight: each layer's own amplitude already normalises it, and the
   * combined result is scaled by `maxValue`.
   */
  getValue (x, y, z) {
    const f = this.inputFactor
    const first = this.first.getValue(x, y, z) * this.first.amplitude
    const second = this.second.getValue(x * f, y * f, z * f) * this.second.amplitude
    return (second + first) * this.maxValue
  }
}

module.exports = {
  OctaveNoise,
  NormalNoise,
  GRADIENTS_CLASSIC,
  fade,
  lerp,
  shufflePermutation
}
