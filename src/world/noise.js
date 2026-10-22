'use strict'

/**
 * Gradient (Perlin-style) noise, implemented from the published mathematics.
 *
 * This is the classic "improved Perlin noise" construction (Ken Perlin,
 * SIGGRAPH 2002 course notes; the author placed the reference algorithm in
 * the public domain long ago and the same construction is described in
 * countless textbooks): a seeded permutation of 0..255 selects a pseudo-
 * random gradient at each integer lattice point, contributions are blended
 * with the quintic fade curve 6t^5 - 15t^4 + 10t^3, and several octaves are
 * summed (fractal Brownian motion) for terrain-scale signals.
 *
 * Minecraft's world generation is publicly documented (Minecraft Wiki:
 * "Noise", "World generation", Mojang's own Caves & Cliffs dev blogs) to be
 * built from layered Perlin-style octave noises fed through splines. This
 * module supplies that same published *family* of primitives; it is not a
 * copy of any game's noise tables or code, and outputs will not bit-match
 * a vanilla world for the same seed (see docs/world-generation.md for the
 * parity analysis).
 */

const { Xoroshiro128PlusPlus } = require('./rng')

function fade (t) {
  return t * t * t * (t * (t * 6 - 15) + 10)
}

function lerp (a, b, t) {
  return a + t * (b - a)
}

/** Gradient dot product for 3D improved Perlin noise (12 edge gradients). */
function grad3 (hash, x, y, z) {
  switch (hash & 15) {
    case 0: return x + y
    case 1: return x - y
    case 2: return -x + y
    case 3: return -x - y
    case 4: return x + z
    case 5: return x - z
    case 6: return -x + z
    case 7: return -x - z
    case 8: return y + z
    case 9: return y - z
    case 10: return -y + z
    default: return -y - z
  }
}

class PerlinNoise {
  /** @param {bigint|number|string} seed seed for the permutation shuffle */
  constructor (seed) {
    const rng = new Xoroshiro128PlusPlus(seed)
    const p = new Uint8Array(256)
    for (let i = 0; i < 256; i++) p[i] = i
    for (let i = 255; i > 0; i--) {
      const j = rng.nextInt(i + 1)
      const tmp = p[i]
      p[i] = p[j]
      p[j] = tmp
    }
    this.perm = new Uint8Array(512)
    this.permMod12 = new Uint8Array(512)
    for (let i = 0; i < 512; i++) {
      this.perm[i] = p[i & 255]
      this.permMod12[i] = this.perm[i] % 12
    }
  }

  /** Raw 3D noise, approximately in [-1, 1]. */
  noise3 (x, y, z) {
    const perm = this.perm
    const X = Math.floor(x) & 255
    const Y = Math.floor(y) & 255
    const Z = Math.floor(z) & 255
    const xf = x - Math.floor(x)
    const yf = y - Math.floor(y)
    const zf = z - Math.floor(z)
    const u = fade(xf)
    const v = fade(yf)
    const w = fade(zf)

    const a = perm[X] + Y
    const aa = perm[a & 511] + Z
    const ab = perm[(a + 1) & 511] + Z
    const b = perm[(X + 1) & 255] + Y
    const ba = perm[b & 511] + Z
    const bb = perm[(b + 1) & 511] + Z

    // Trilinear blend of gradient contributions at the 8 lattice corners.
    // The 1.42 factor rescales the theoretical [-~0.7, ~0.7] range toward
    // [-1, 1]; callers should still treat the range as approximate.
    return 1.42 * lerp(
      lerp(
        lerp(grad3(perm[aa & 511], xf, yf, zf), grad3(perm[ba & 511], xf - 1, yf, zf), u),
        lerp(grad3(perm[ab & 511], xf, yf - 1, zf), grad3(perm[bb & 511], xf - 1, yf - 1, zf), u),
        v),
      lerp(
        lerp(grad3(perm[(aa + 1) & 511], xf, yf, zf - 1), grad3(perm[(ba + 1) & 511], xf - 1, yf, zf - 1), u),
        lerp(grad3(perm[(ab + 1) & 511], xf, yf - 1, zf - 1), grad3(perm[(bb + 1) & 511], xf - 1, yf - 1, zf - 1), u),
        v),
      w)
  }

  /** 2D noise (a z=0 slice of the 3D field, offset to decorrelate axes). */
  noise2 (x, y) {
    return this.noise3(x, y, 0.5)
  }
}

/**
 * Fractal octave sum over a single PerlinNoise.
 * Returns a value normalized to roughly [-1, 1].
 */
class OctaveNoise {
  constructor (seed, { octaves = 4, lacunarity = 2, persistence = 0.5 } = {}) {
    this.noise = new PerlinNoise(seed)
    this.octaves = octaves
    this.lacunarity = lacunarity
    this.persistence = persistence
    // Precompute amplitude normalization: sum of persistence^i
    let norm = 0
    let amp = 1
    for (let i = 0; i < octaves; i++) {
      norm += amp
      amp *= persistence
    }
    this.norm = norm
  }

  sample2 (x, y) {
    let sum = 0
    let amp = 1
    let freq = 1
    for (let i = 0; i < this.octaves; i++) {
      sum += amp * this.noise.noise2(x * freq, y * freq)
      amp *= this.persistence
      freq *= this.lacunarity
    }
    return sum / this.norm
  }

  sample3 (x, y, z) {
    let sum = 0
    let amp = 1
    let freq = 1
    for (let i = 0; i < this.octaves; i++) {
      sum += amp * this.noise.noise3(x * freq, y * freq, z * freq)
      amp *= this.persistence
      freq *= this.lacunarity
    }
    return sum / this.norm
  }

  /** Ridged variant: 1 - |noise|, sharp crests - used for mountain peaks. */
  ridged2 (x, y) {
    let sum = 0
    let amp = 1
    let freq = 1
    for (let i = 0; i < this.octaves; i++) {
      sum += amp * (1 - Math.abs(this.noise.noise2(x * freq, y * freq)))
      amp *= this.persistence
      freq *= this.lacunarity
    }
    return (sum / this.norm) * 2 - 1 // back to roughly [-1, 1], crests near +1
  }
}

/**
 * Monotone piecewise-linear spline through sorted [x, y] control points.
 * Vanilla generation uses cubic splines over its density functions; linear
 * interpolation through denser control points is our documented
 * simplification (same control-point *shape*, cheaper evaluation).
 */
function makeSpline (points) {
  const pts = [...points].sort((a, b) => a[0] - b[0])
  return function spline (x) {
    if (x <= pts[0][0]) return pts[0][1]
    for (let i = 1; i < pts.length; i++) {
      if (x <= pts[i][0]) {
        const [x0, y0] = pts[i - 1]
        const [x1, y1] = pts[i]
        const t = (x - x0) / (x1 - x0)
        return y0 + t * (y1 - y0)
      }
    }
    return pts[pts.length - 1][1]
  }
}

function clamp (v, min, max) {
  return v < min ? min : v > max ? max : v
}

module.exports = { PerlinNoise, OctaveNoise, makeSpline, clamp, lerp, fade }
