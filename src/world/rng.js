'use strict'

/**
 * Deterministic seeded randomness for world generation.
 *
 * Everything here is a well-known, public-domain algorithm implemented from
 * its published specification - no game code involved:
 *
 *  - SplitMix64 (Steele, Lea & Flood 2014; popularized by Sebastiano Vigna,
 *    public domain) expands one 64-bit seed into a stream of uncorrelated
 *    64-bit values. Used to derive independent per-noise / per-chunk seeds.
 *  - Xoroshiro128++ (Blackman & Vigna 2021, CC0 reference code at
 *    prng.di.unimi.it) is the general-purpose generator. Modern Minecraft
 *    worldgen is publicly documented (Minecraft Wiki, "World generation")
 *    to use xoroshiro128++ for its positional/decoration randomness, so a
 *    clean-room generator aiming for the same *shape* of output uses the
 *    same published primitive.
 *  - `hash2`/`hash3` are integer avalanche hashes (splitmix-style finalizer
 *    on 32-bit ints) for cheap per-block decisions (bedrock roughness, the
 *    stone/deepslate blend, ...). They must be pure functions of position so
 *    neighboring chunks agree on shared borders.
 *
 * Seed handling: a world seed may arrive as a number, a numeric string, a
 * free-form string, or ''. Bedrock has historically exposed seeds as 32-bit
 * values in the UI (see Minecraft Wiki, "Seed (level generation)"), while
 * the wire protocol carries a 64-bit seed. We therefore keep the full
 * 64-bit value for the protocol (`World.seed`) and derive this module's
 * working seed by folding the input through SplitMix64, which makes text
 * seeds and numeric seeds equally well distributed.
 */

const MASK64 = 0xffffffffffffffffn
const SPLITMIX_INCREMENT = 0x9e3779b97f4a7c15n

/** One SplitMix64 step: state (BigInt) -> { value: BigInt u64, state } */
function splitmix64Next (state) {
  const s = (state + SPLITMIX_INCREMENT) & MASK64
  let z = s
  z = ((z ^ (z >> 30n)) * 0xbf58476d1ce4e5b9n) & MASK64
  z = ((z ^ (z >> 27n)) * 0x94d049bb133111ebn) & MASK64
  z = z ^ (z >> 31n)
  return { value: z & MASK64, state: s }
}

/** Expand a single u64 seed into `count` independent u64 seeds. */
function deriveSeeds (seed, count) {
  let state = BigInt(seed) & MASK64
  const out = []
  for (let i = 0; i < count; i++) {
    const r = splitmix64Next(state)
    state = r.state
    out.push(r.value)
  }
  return out
}

/**
 * Normalize any user seed input to a u64 BigInt.
 * ''/undefined -> 0n (BDS treats an empty level-seed as "pick one"; we keep
 * generation reproducible by using 0 - the server layer may randomize first).
 */
function normalizeSeed (seed) {
  if (seed === undefined || seed === null || seed === '') return 0n
  if (typeof seed === 'bigint') return seed & MASK64
  if (typeof seed === 'number' && Number.isFinite(seed)) {
    return BigInt(Math.trunc(seed)) & MASK64
  }
  const s = String(seed).trim()
  if (/^-?\d+$/.test(s)) return BigInt(s) & MASK64
  // Free-form text seed: polynomial rolling hash, then one splitmix round
  // so similar strings ("abc"/"abd") produce unrelated worlds.
  let h = 0n
  for (const ch of s) h = (h * 31n + BigInt(ch.codePointAt(0))) & MASK64
  return splitmix64Next(h).value
}

function rotl64 (x, k) {
  const bk = BigInt(k)
  return ((x << bk) | (x >> (64n - bk))) & MASK64
}

/**
 * Xoroshiro128++ generator seeded from a u64 (expanded via SplitMix64,
 * exactly as the algorithm's authors recommend for seeding).
 */
class Xoroshiro128PlusPlus {
  constructor (seed) {
    const [s0, s1] = deriveSeeds(normalizeSeed(seed), 2)
    this.s0 = s0
    this.s1 = s1 === 0n && s0 === 0n ? SPLITMIX_INCREMENT : s1
  }

  /** Next u64 as BigInt. */
  nextU64 () {
    const s0 = this.s0
    let s1 = this.s1
    const result = (rotl64((s0 + s1) & MASK64, 17) + s0) & MASK64
    s1 ^= s0
    this.s0 = (rotl64(s0, 49) ^ s1 ^ ((s1 << 21n) & MASK64)) & MASK64
    this.s1 = rotl64(s1, 28)
    return result
  }

  /** Next u32 in [0, 2^32). */
  nextU32 () {
    return Number(this.nextU64() >> 32n)
  }

  /** Float in [0, 1) with 53 bits of precision. */
  nextFloat () {
    return Number(this.nextU64() >> 11n) / 9007199254740992 // 2^53
  }

  /** Integer in [0, bound). Uses rejection-free multiply-shift (Lemire). */
  nextInt (bound) {
    if (!Number.isInteger(bound) || bound <= 0) throw new Error('bound must be a positive integer')
    return Math.floor(this.nextFloat() * bound)
  }

  /** Integer in [min, max] inclusive. */
  nextRange (min, max) {
    return min + this.nextInt(max - min + 1)
  }

  /** Triangular-distributed integer in [min, max] peaking at `peak`. */
  nextTriangle (min, max, peak) {
    const u = this.nextFloat() + this.nextFloat() // 0..2, triangular around 1
    if (u < 1) return Math.floor(min + (peak - min) * u)
    return Math.floor(peak + (max - peak) * (u - 1))
  }

  fork () {
    return new Xoroshiro128PlusPlus(this.nextU64())
  }
}

/**
 * Positional random for a chunk: same (seed, chunkX, chunkZ, salt) always
 * yields the same stream, independent of generation order. This is the
 * publicly documented structure of Minecraft decoration randomness
 * (a per-chunk random derived from the world seed and chunk position);
 * salts separate ore passes, tree passes, etc.
 */
function chunkRandom (worldSeed, chunkX, chunkZ, salt = 0) {
  let h = normalizeSeed(worldSeed)
  h ^= (BigInt(chunkX) * 0x9e3779b97f4a7c15n) & MASK64
  h ^= (BigInt(chunkZ) * 0xc2b2ae3d27d4eb4fn) & MASK64
  h ^= (BigInt(salt) * 0x165667b19e3779f9n) & MASK64
  return new Xoroshiro128PlusPlus(splitmix64Next(h & MASK64).value)
}

/** 32-bit avalanche hash of an integer stream; returns float in [0, 1). */
function hashToFloat (a, b = 0, c = 0, d = 0) {
  let h = (a | 0) ^ 0x9e3779b9
  h = Math.imul(h ^ (b | 0), 0x85ebca6b)
  h = Math.imul(h ^ (c | 0), 0xc2b2ae35)
  h = Math.imul(h ^ (d | 0), 0x27d4eb2f)
  h ^= h >>> 15
  h = Math.imul(h, 0x2c1b3c6d)
  h ^= h >>> 12
  return (h >>> 0) / 4294967296
}

/** Per-block hash in [0,1): hash3(seedLow32, x, y, z). */
function hashBlock (seedLo, x, y, z) {
  return hashToFloat(
    (seedLo | 0) ^ Math.imul(x | 0, 0x27d4eb2d),
    Math.imul(y | 0, 0x165667b1),
    Math.imul(z | 0, 0x9fb21c65),
    0x632be59b
  )
}

module.exports = {
  MASK64,
  splitmix64Next,
  deriveSeeds,
  normalizeSeed,
  Xoroshiro128PlusPlus,
  chunkRandom,
  hashToFloat,
  hashBlock
}
