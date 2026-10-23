'use strict'

/**
 * Deterministic Mersenne Twister (MT19937), the generator BDS seeds for chunk
 * terrain and for every noise layer.
 *
 * Clean-room implementation from the published MT19937 definition
 * (Matsumoto & Nishimura, 1997): 624-word state, 32-bit words, tempering
 * constants 0x9d2c5680 / 0xefc60000, initialiser multiplier 1812433253.
 *
 * Two of the draw conventions are not fixed by the algorithm itself -- the
 * binary calls through a virtual interface, so "next float" and "next int in
 * [0, bound)" are implementation choices. Both are policy objects here so a
 * caller can select an interpretation instead of hard-coding a guess, and
 * `tools/worldgen-golden` can score the alternatives against real server
 * output.
 */

/** Smallest float below 1 that a 24-bit draw can produce, as a double. */
const INV_2_24 = 2.3283064365386963e-10
/** 2^-53, the scale of a 53-bit draw. */
const INV_2_53 = 1.1102230246251565e-16

const N = 624
const M = 397
const MATRIX_A = 0x9908b0df
const UPPER_MASK = 0x80000000
const LOWER_MASK = 0x7fffffff
const TEMPER_MASK_B = 0x9d2c5680
const TEMPER_MASK_C = 0xefc60000
const INIT_MULT = 1812433253

class Mt19937 {
  constructor (seed) {
    this.state = new Uint32Array(N)
    this.index = N
    this.seed(seed)
  }

  /** init_genrand: state[0] = seed, state[i] = f(state[i-1]) + i. */
  seed (seed) {
    this.state[0] = seed >>> 0
    for (let i = 1; i < N; i++) {
      const prev = this.state[i - 1]
      this.state[i] = (Math.imul(prev ^ (prev >>> 30), INIT_MULT) + i) >>> 0
    }
    this.index = N
  }

  /** Produce the next block of 624 words. */
  generate () {
    const s = this.state
    for (let i = 0; i < N; i++) {
      const y = (s[i] & UPPER_MASK) | (s[(i + 1) % N] & LOWER_MASK)
      let next = s[(i + M) % N] ^ (y >>> 1)
      if (y & 1) next ^= MATRIX_A
      s[i] = next >>> 0
    }
    this.index = 0
  }

  /** Raw 32-bit output word, tempered. */
  nextU32 () {
    if (this.index >= N) this.generate()
    let y = this.state[this.index++]
    y ^= y >>> 11
    y ^= (y << 7) & TEMPER_MASK_B
    y ^= (y << 15) & TEMPER_MASK_C
    y ^= y >>> 18
    return y >>> 0
  }

  /**
   * A real in [0, 1).
   *
   * 'float24' consumes one word and uses its top 24 bits -- what a float
   * `generate_canonical<float, 24>` produces. 'double53' consumes two words
   * and uses 53 bits, the double `generate_canonical<double, 53>` form.
   */
  nextUnit (policy) {
    if (policy === 'double53') {
      const hi = this.nextU32() >>> 5
      const lo = this.nextU32() >>> 6
      return (hi * 67108864 + lo) * INV_2_53
    }
    return (this.nextU32() >>> 8) * INV_2_24
  }

  /**
   * A uniform integer in [0, bound).
   *
   * 'topBits' takes the high bits of one word, which is exact and consuming
   * one word per call when bound is a power of two. 'modulo' takes the low
   * bits (biased, but the obvious implementation). 'reject' is the unbiased
   * multiply-and-reject scheme (Lemire), also one word per successful call.
   */
  nextInt (bound, policy) {
    if (bound <= 1) {
      this.nextU32()
      return 0
    }
    if (policy === 'modulo') return this.nextU32() % bound
    if (policy === 'reject') {
      // Threshold trick: reject the values that would make the low part wrap.
      const threshold = (2 ** 32 - bound) % bound
      for (;;) {
        const r = this.nextU32()
        const product = r * bound
        if (product % 2 ** 32 >= threshold) return Math.floor(product / 2 ** 32)
      }
    }
    // 'topBits': mask off enough high bits; exact for powers of two.
    const bits = 32 - Math.clz32(bound - 1)
    const mask = (1 << bits) - 1
    for (;;) {
      const candidate = this.nextU32() >>> (32 - bits)
      if (candidate <= mask && candidate < bound) return candidate
    }
  }
}

module.exports = { Mt19937, INV_2_24, INV_2_53 }
