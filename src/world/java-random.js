'use strict'

/**
 * The 48-bit linear congruential generator behind structure placement.
 *
 * Recovered from the binary: `br::worldgen::WorldGenRandom` implements the
 * classic `next(bits)` loop with multiplier 0x5deece66d and addend 0xb, masked
 * to 48 bits, and its seed is `(seed ^ 0x5deece66d) & 0xffffffffffff`
 * (research/proprietary/bds-1.26.52.3/ANALYSIS.md section 4.4, function
 * 0xd2d59a0).
 *
 * State is held in a BigInt so the 48-bit arithmetic cannot silently lose
 * precision the way doubles would.
 */

const MULTIPLIER = 0x5deece66dn
const ADDEND = 0xbn
const MASK = 0xffffffffffffn
const DOUBLE_UNIT = 1.1102230246251565e-16 // 2^-53

class JavaRandom {
  constructor (seed = 0n) {
    this.setSeed(seed)
  }

  /** Seeds the stream. Accepts a BigInt, a number, or a numeric string. */
  setSeed (seed) {
    const value = typeof seed === 'bigint' ? seed : BigInt(seed)
    // Java truncates the incoming long into 48 bits after the xor.
    this.state = (value ^ MULTIPLIER) & MASK
  }

  /** The raw next(bits) step: the primitive every other method builds on. */
  next (bits) {
    this.state = (this.state * MULTIPLIER + ADDEND) & MASK
    const shifted = this.state >> BigInt(48 - bits)
    return Number(shifted)
  }

  /** Uniform int in [0, bound). Rejection loop, as in the original. */
  nextInt (bound) {
    if (bound === undefined) {
      const high = this.next(32)
      // next(32) yields an unsigned 32-bit value; the reference returns int32.
      return high | 0
    }
    if (!Number.isInteger(bound) || bound <= 0) {
      throw new RangeError(`bound must be a positive integer, got ${bound}`)
    }
    if ((bound & -bound) === bound) {
      // Power of two: take the high bits directly.
      const bits = 31 - Math.clz32(bound)
      return Number((BigInt(bound) * BigInt(this.next(bits))) >> 31n)
    }
    let bits
    let value
    do {
      bits = this.next(31)
      value = bits % bound
    } while (bits - value + (bound - 1) < 0)
    return value
  }

  /** Uniform float in [0, 1). */
  nextFloat () {
    return this.next(24) / (1 << 24)
  }

  /** Uniform double in [0, 1). */
  nextDouble () {
    const high = this.next(26)
    const low = this.next(27)
    return (high * 134217728 + low) * DOUBLE_UNIT
  }

  /** True with probability `frequency`. */
  nextChance (frequency) {
    return this.nextFloat() < frequency
  }
}

/** Multipliers the binary uses to fold grid coordinates and a set salt in. */
const X_MULTIPLIER = 341873128712n
const Z_MULTIPLIER = 132897987541n

/**
 * The structure seed for one grid cell.
 *
 * Recovered verbatim from the spacing resolver (`0xd2d2570`):
 * `x * 341873128712 + z * 132897987541 + seed + salt`, then seeded into the
 * LCG. Java long arithmetic wraps, so the sum is taken modulo 2^64 first.
 */
function structureSeed (seed, cellX, cellZ, salt) {
  let sum = BigInt(cellX) * X_MULTIPLIER + BigInt(cellZ) * Z_MULTIPLIER
  sum += BigInt(seed) + BigInt(salt)
  // Two's complement wrap into a signed 64-bit value.
  sum &= 0xffffffffffffffffn
  if (sum >= 0x8000000000000000n) sum -= 0x10000000000000000n
  return sum
}

module.exports = { JavaRandom, structureSeed, X_MULTIPLIER, Z_MULTIPLIER }
