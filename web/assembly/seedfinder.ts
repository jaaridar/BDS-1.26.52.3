// Seed finder core, compiled to WebAssembly.
//
// This is a *transcription* of the placement rules in `src/world/` (which were
// recovered from the BDS binary and confirmed against the server). The
// JavaScript modules stay the reference implementation: the site loads both and
// the stress test compares them cell by cell, so the two can never drift
// silently. Nothing is invented here -- every constant comes from
// `src/world/structures-data.js` through the generated `placements.gen.ts`, and
// the arithmetic follows the reference line for line.
//
// A search is a list of rules ("at least N of structure X within R chunks, and
// optionally one closer than B blocks"). Each candidate seed is tested rule by
// rule and the first failure stops it, so the order rules are added in is the
// order they cost time.
//
// Only part of a world seed reaches placement, and the two engines differ:
//
//   Mersenne engine  folds the cell seed into 32 bits -> low 32 bits of seed
//   Java engine      masks the LCG state to 48 bits   -> low 48 bits of seed
//
// so the caller passes both reductions and the site can say honestly which
// seeds are distinguishable. See `web/README.md`.

import {
  P_COUNT,
  pSpacing,
  pSeparation,
  pSalt,
  pTriangular,
  pJava
} from './placements.gen'

// ---------------------------------------------------------------------------
// Mersenne Twister (32-bit, init_genrand), exactly as the binary uses it
// ---------------------------------------------------------------------------

const N: i32 = 624
const M: i32 = 397
const MATRIX_A: u32 = 0x9908b0df
const UPPER_MASK: u32 = 0x80000000
const LOWER_MASK: u32 = 0x7fffffff
const TEMPER_B: u32 = 0x9d2c5680
const TEMPER_C: u32 = 0xefc60000
const INIT_MULT: u32 = 1812433253

const mtState = new StaticArray<u32>(N)
let mtIndex: i32 = N
let mtMaterialised: i32 = 0

function mtSeed (seed: u32): void {
  unchecked(mtState[0] = seed)
  for (let i: i32 = 1; i < N; i++) {
    const prev = unchecked(mtState[i - 1])
    unchecked(mtState[i] = (prev ^ (prev >>> 30)) * INIT_MULT + <u32>i)
  }
  mtIndex = 0
  mtMaterialised = 0
}

// One twist step, in place. Doing this lazily lets the few draws placement needs
// skip the other 618 words of the block; the reference regenerates all 624, and
// both orders agree for the first 227 draws, which is every draw used here.
function mtTwist (i: i32): void {
  const y = (unchecked(mtState[i]) & UPPER_MASK) | (unchecked(mtState[(i + 1) % N]) & LOWER_MASK)
  let next = unchecked(mtState[(i + M) % N]) ^ (y >>> 1)
  if ((y & 1) != 0) next ^= MATRIX_A
  unchecked(mtState[i] = next)
  mtMaterialised = i + 1
}

// A tempered word. Cheaper than the reference's "generate a whole block" because
// a search only ever reads a handful of words per seed.
function mtWord (): u32 {
  if (mtIndex >= N) {
    mtIndex = 0
    mtMaterialised = 0
  }
  const i = mtIndex
  if (i >= mtMaterialised) mtTwist(i)
  let y = unchecked(mtState[i])
  mtIndex = i + 1
  y ^= y >>> 11
  y ^= (y << 7) & TEMPER_B
  y ^= (y << 15) & TEMPER_C
  y ^= y >>> 18
  return y
}

// nextUnit(): one word widened to a double, scaled by 2^-32, narrowed to float.
function mtUnit (): f32 {
  return f32(<f64>mtWord() * 2.3283064365386963e-10)
}

// ---------------------------------------------------------------------------
// Java-compatible 48-bit LCG, for the data-driven sets
// ---------------------------------------------------------------------------

const JR_MULT: u64 = 0x5deece66d
const JR_ADD: u64 = 0xb
const JR_MASK: u64 = 0xffffffffffff

let jrState: u64 = 0

function jrSeed (seed: i64): void {
  jrState = (<u64>seed ^ JR_MULT) & JR_MASK
}

function jrBits (bits: i32): u32 {
  jrState = (jrState * JR_MULT + JR_ADD) & JR_MASK
  return <u32>(jrState >> <u64>(48 - bits))
}

// nextInt(bound) with the reference's rejection loop and power-of-two path.
function jrInt (bound: i32): i32 {
  if (bound <= 0) return 0
  if ((bound & -bound) == bound) {
    return <i32>((<u64>bound * <u64>jrBits(31)) >> 31)
  }
  let bits: u32 = 0
  let value: u32 = 0
  do {
    bits = jrBits(31)
    value = bits % <u32>bound
  } while (<i32>(bits - value + <u32>(bound - 1)) < 0)
  return <i32>value
}

// ---------------------------------------------------------------------------
// Grid placement (the reference's structure-placement.js)
// ---------------------------------------------------------------------------

const CELL_MUL_X: i64 = 341873128712
const CELL_MUL_Z: i64 = 132897987541
const CELL_MUL_X32: u32 = 0x9939f508 // Java constant reduced to 32 bits
const CELL_MUL_Z32: u32 = 0xf1565bd5

function floorDiv (a: i32, b: i32): i32 {
  let q = a / b
  if ((a % b != 0) && ((a < 0) != (b < 0))) q--
  return q
}

function cellSeedMt (seedLo32: u32, cellX: i32, cellZ: i32, salt: u32): u32 {
  const x = unchecked(<u32>cellX * CELL_MUL_X32)
  const z = unchecked(<u32>cellZ * CELL_MUL_Z32)
  return unchecked(x + z + seedLo32 + salt)
}

function cellSeedJava (seedLo48: u64, cellX: i32, cellZ: i32, salt: u32): i64 {
  return (<i64>cellX * CELL_MUL_X) + (<i64>cellZ * CELL_MUL_Z) + (<i64>seedLo48) + (<i64>(<u64>salt))
}

const cellOut = new StaticArray<i32>(2)

// Where one grid cell puts its structure.
function placeInCell (p: i32, seedLo32: u32, seedLo48: u64, cellX: i32, cellZ: i32): void {
  const spacing = pSpacing(p)
  const span = spacing - pSeparation(p)
  let ox: i32 = 0
  let oz: i32 = 0
  if (pJava(p)) {
    jrSeed(cellSeedJava(seedLo48, cellX, cellZ, pSalt(p)))
    if (pTriangular(p)) {
      const x = jrInt(span) + jrInt(span)
      const z = jrInt(span) + jrInt(span)
      ox = x / 2
      oz = z / 2
    } else {
      ox = jrInt(span)
      oz = jrInt(span)
    }
  } else {
    mtSeed(cellSeedMt(seedLo32, cellX, cellZ, pSalt(p)))
    const uSpan = <u32>span
    if (pTriangular(p)) {
      const x = (mtWord() % uSpan) + (mtWord() % uSpan)
      const z = (mtWord() % uSpan) + (mtWord() % uSpan)
      ox = <i32>(x / 2)
      oz = <i32>(z / 2)
    } else {
      ox = <i32>(mtWord() % uSpan)
      oz = <i32>(mtWord() % uSpan)
    }
  }
  unchecked(cellOut[0] = cellX * spacing + ox)
  unchecked(cellOut[1] = cellZ * spacing + oz)
}

const scanOut = new StaticArray<i32>(4)
const shOut = new StaticArray<i32>(4)

// Count starts within radiusChunks of the origin chunk and remember the nearest.
// `stopAt` > 0 lets the caller stop early (then `nearest` is the first found).
function scanPlacement (p: i32, seedLo32: u32, seedLo48: u64, originChunkX: i32, originChunkZ: i32,
  radiusChunks: i32, stopAt: i32): i32 {
  const spacing = pSpacing(p)
  const limit: f64 = <f64>(radiusChunks * 16)
  const originBlockX = originChunkX * 16 + 8
  const originBlockZ = originChunkZ * 16 + 8
  const minCellX = floorDiv(originChunkX - radiusChunks, spacing) - 1
  const maxCellX = floorDiv(originChunkX + radiusChunks, spacing) + 1
  const minCellZ = floorDiv(originChunkZ - radiusChunks, spacing) - 1
  const maxCellZ = floorDiv(originChunkZ + radiusChunks, spacing) + 1
  let count: i32 = 0
  let bestDist: f64 = 1e30
  let bestX: i32 = 0
  let bestZ: i32 = 0
  for (let cellZ = minCellZ; cellZ <= maxCellZ; cellZ++) {
    for (let cellX = minCellX; cellX <= maxCellX; cellX++) {
      placeInCell(p, seedLo32, seedLo48, cellX, cellZ)
      const chunkX = unchecked(cellOut[0])
      const chunkZ = unchecked(cellOut[1])
      const dx: f64 = <f64>(chunkX * 16 + 8 - originBlockX)
      const dz: f64 = <f64>(chunkZ * 16 + 8 - originBlockZ)
      const dist = Math.sqrt(dx * dx + dz * dz)
      if (dist > limit) continue
      count++
      if (dist < bestDist) {
        bestDist = dist
        bestX = chunkX
        bestZ = chunkZ
      }
      if (stopAt > 0 && count >= stopAt) {
        unchecked(scanOut[0] = count)
        unchecked(scanOut[1] = <i32>bestDist)
        unchecked(scanOut[2] = bestX)
        unchecked(scanOut[3] = bestZ)
        return count
      }
    }
  }
  unchecked(scanOut[0] = count)
  unchecked(scanOut[1] = count > 0 ? <i32>bestDist : -1)
  unchecked(scanOut[2] = bestX)
  unchecked(scanOut[3] = bestZ)
  return count
}

// ---------------------------------------------------------------------------
// Strongholds (the reference's stronghold.js)
// ---------------------------------------------------------------------------

const SH_CELL: i32 = 200
const SH_SALT: u32 = 0x5d534e7
const SH_MUL_X: u32 = 0x9babeb51
const SH_MUL_Z: u32 = 0xbe68aeb9
const SH_ODDS: f32 = 0.25

// One cell's grid stronghold: [chunkX, chunkZ, gated, gateScaled].
function strongholdCell (seedLo32: u32, cellX: i32, cellZ: i32): void {
  const u = <u32>(cellX * SH_CELL + 100)
  const v = <u32>(cellZ * SH_CELL + 100)
  const seed = unchecked(<u32>u * SH_MUL_X + <u32>v * SH_MUL_Z + seedLo32 + SH_SALT)
  mtSeed(seed)
  const dx = <i32>(mtWord() % 100)
  const dz = <i32>(mtWord() % 100)
  const gate = mtUnit()
  unchecked(shOut[0] = cellX * SH_CELL + 50 + dx)
  unchecked(shOut[1] = cellZ * SH_CELL + 50 + dz)
  unchecked(shOut[2] = gate < SH_ODDS ? 1 : 0)
  unchecked(shOut[3] = <i32>(<f64>gate * 1.0e9))
}

// Grid strongholds within radius. mode 0 = gated cells only (positions exact),
// 1 = every cell (each cell carries one stronghold, but ungated ones are moved).
function scanStrongholds (seedLo32: u32, originChunkX: i32, originChunkZ: i32, radiusChunks: i32,
  mode: i32, stopAt: i32): i32 {
  const limit: f64 = <f64>(radiusChunks * 16)
  const originBlockX = originChunkX * 16 + 8
  const originBlockZ = originChunkZ * 16 + 8
  const minCellX = floorDiv(originChunkX - radiusChunks, SH_CELL) - 1
  const maxCellX = floorDiv(originChunkX + radiusChunks, SH_CELL) + 1
  const minCellZ = floorDiv(originChunkZ - radiusChunks, SH_CELL) - 1
  const maxCellZ = floorDiv(originChunkZ + radiusChunks, SH_CELL) + 1
  let count: i32 = 0
  let bestDist: f64 = 1e30
  let bestX: i32 = 0
  let bestZ: i32 = 0
  for (let cellZ = minCellZ; cellZ <= maxCellZ; cellZ++) {
    for (let cellX = minCellX; cellX <= maxCellX; cellX++) {
      strongholdCell(seedLo32, cellX, cellZ)
      if (mode == 0 && unchecked(shOut[2]) == 0) continue
      const chunkX = unchecked(shOut[0])
      const chunkZ = unchecked(shOut[1])
      const dx: f64 = <f64>(chunkX * 16 + 8 - originBlockX)
      const dz: f64 = <f64>(chunkZ * 16 + 8 - originBlockZ)
      const dist = Math.sqrt(dx * dx + dz * dz)
      if (dist > limit) continue
      count++
      if (dist < bestDist) {
        bestDist = dist
        bestX = chunkX
        bestZ = chunkZ
      }
      if (stopAt > 0 && count >= stopAt) {
        unchecked(scanOut[0] = count)
        unchecked(scanOut[1] = <i32>bestDist)
        unchecked(scanOut[2] = bestX)
        unchecked(scanOut[3] = bestZ)
        return count
      }
    }
  }
  unchecked(scanOut[0] = count)
  unchecked(scanOut[1] = count > 0 ? <i32>bestDist : -1)
  unchecked(scanOut[2] = bestX)
  unchecked(scanOut[3] = bestZ)
  return count
}

// ---------------------------------------------------------------------------
// Rules
// ---------------------------------------------------------------------------

const MAX_RULES: i32 = 24
const rPlacement = new StaticArray<i32>(MAX_RULES)
const rMinCount = new StaticArray<i32>(MAX_RULES)
const rRadius = new StaticArray<i32>(MAX_RULES)
const rMaxNearest = new StaticArray<i32>(MAX_RULES)
const rMode = new StaticArray<i32>(MAX_RULES) // 0 grid structure, 1 gated stronghold, 2 any cell

let ruleCount: i32 = 0

export function resetRules (): void {
  ruleCount = 0
}

// placement < 0 means "strongholds"; `mode` is only read for those.
export function addRule (placement: i32, minCount: i32, radiusChunks: i32, maxNearestBlocks: i32, mode: i32): i32 {
  if (ruleCount >= MAX_RULES) return -1
  unchecked(rPlacement[ruleCount] = placement)
  unchecked(rMinCount[ruleCount] = minCount)
  unchecked(rRadius[ruleCount] = radiusChunks)
  unchecked(rMaxNearest[ruleCount] = maxNearestBlocks)
  unchecked(rMode[ruleCount] = mode)
  return ruleCount++
}

// 1 when every rule passes. The first failure returns, so rule order is cost.
export function evaluate (seedLo32: u32, seedLo48: u64, originChunkX: i32, originChunkZ: i32): i32 {
  for (let i: i32 = 0; i < ruleCount; i++) {
    const placement = unchecked(rPlacement[i])
    const minCount = unchecked(rMinCount[i])
    const radius = unchecked(rRadius[i])
    const maxNearest = unchecked(rMaxNearest[i])
    const mode = unchecked(rMode[i])
    // A nearest-distance test needs the true nearest, so such a rule scans fully.
    const stopAt = maxNearest >= 0 ? 0 : (minCount > 0 ? minCount : 1)
    const count = placement < 0
      ? scanStrongholds(seedLo32, originChunkX, originChunkZ, radius, mode, stopAt)
      : scanPlacement(placement, seedLo32, seedLo48, originChunkX, originChunkZ, radius, stopAt)
    if (count < minCount) return 0
    if (maxNearest >= 0) {
      const nearest = unchecked(scanOut[1])
      if (nearest < 0 || nearest > maxNearest) return 0
    }
  }
  return 1
}

const detailOut = new StaticArray<i32>(8)

// Full detail for one placement at one seed, written to `out` (8 i32 words):
// [count, nearestDistance, chunkX, chunkZ, blockX, blockZ, gatedOrFlag, 0].
export function detail (seedLo32: u32, seedLo48: u64, originChunkX: i32, originChunkZ: i32,
  placement: i32, radiusChunks: i32, mode: i32, out: usize): i32 {
  const count = placement < 0
    ? scanStrongholds(seedLo32, originChunkX, originChunkZ, radiusChunks, mode, 0)
    : scanPlacement(placement, seedLo32, seedLo48, originChunkX, originChunkZ, radiusChunks, 0)
  const chunkX = unchecked(scanOut[2])
  const chunkZ = unchecked(scanOut[3])
  store<i32>(out, count)
  store<i32>(out + 4, unchecked(scanOut[1]))
  store<i32>(out + 8, chunkX)
  store<i32>(out + 12, chunkZ)
  store<i32>(out + 16, count > 0 ? chunkX * 16 + 8 : 0)
  store<i32>(out + 20, count > 0 ? chunkZ * 16 + 8 : 0)
  store<i32>(out + 24, 0)
  store<i32>(out + 28, 0)
  return count
}

// One stronghold cell, for the stress test: [chunkX, chunkZ, gated, gateScaled].
export function strongholdCellAt (seedLo32: u32, cellX: i32, cellZ: i32, out: usize): void {
  strongholdCell(seedLo32, cellX, cellZ)
  store<i32>(out, unchecked(shOut[0]))
  store<i32>(out + 4, unchecked(shOut[1]))
  store<i32>(out + 8, unchecked(shOut[2]))
  store<i32>(out + 12, unchecked(shOut[3]))
}

// A fixed 8-word buffer callers can pass to `detail` without allocating.
export function outPtr (): usize {
  return changetype<usize>(detailOut)
}

// How many placements the table knows, so JS can assert it is in sync.
export function placementCount (): i32 {
  return P_COUNT
}

// Throughput probe for the stress test: total candidates over `iterations`
// consecutive low-32 seeds.
export function bench (placement: i32, seedLo32: u32, originChunkX: i32, originChunkZ: i32,
  radiusChunks: i32, iterations: i32): i32 {
  let total: i32 = 0
  for (let i: i32 = 0; i < iterations; i++) {
    const lo = unchecked(seedLo32 + <u32>i)
    total += scanPlacement(placement, lo, <u64>lo, originChunkX, originChunkZ, radiusChunks, 0)
  }
  return total
}
