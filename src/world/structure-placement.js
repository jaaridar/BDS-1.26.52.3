'use strict'

/**
 * Structure placement: turning a seed into structure positions.
 *
 * The pipeline was recovered from the binary and then confirmed against the
 * server, and it is shorter than the Java one it borrows its constants from:
 *
 *   1. the world is cut into cells of `spacing` chunks (cell = floor(chunk / spacing));
 *   2. a cell's seed is
 *        seed32 = cellX * 341873128712 + cellZ * 132897987541 + seed + salt
 *      evaluated mod 2^32 (multiproperties of the Java constants folded down);
 *   3. that seed initialises a 32-bit Mersenne Twister (init_genrand);
 *   4. the Mersenne stream picks the offset inside the cell:
 *        linear      one  draw per axis:  next32() % span
 *        triangular  two draws per axis:  (next32() % span + next32() % span) / 2
 *      with span = spacing - separation;
 *   5. the start chunk is cell * spacing + offset, i.e. it is always inside its
 *      own cell and never inside the separation margin;
 *   6. optional per-cell odds gate drawn from the same stream.
 *
 * Two engines exist in the shipped binary, and which one a set uses is
 * measured, not assumed:
 *
 *   'mt'    the legacy (hard-coded) structure sets. Seven of them reproduce
 *           every captured position exactly (see tools/worldgen-algo/verify-placements.js).
 *   'java'  the data-driven sets that come out of the vanilla packs. These use
 *           a Java-compatible 48-bit LCG over the same cell seed, computed in
 *           64 bits. Their reported position is the structure's own origin
 *           block, which sits in the placement chunk or one chunk before it.
 *
 * Everything above is transcribed from the disassembly. The per-structure
 * numbers -- spacing, separation, salt, spread type, engine -- are data the
 * engine supplies; they live in `structures-data.js` and are confirmed by the
 * oracle, so they are never invented here.
 */

const { Mt19937 } = require('./mt19937')
const { JavaRandom } = require('./java-random')

/** Java's placement constants, which the binary folds into 32-bit form. */
const CELL_MUL_X = 341873128712n
const CELL_MUL_Z = 132897987541n

/** The same two constants reduced to what a 32-bit multiply sees. */
const CELL_MUL_X32 = Number(CELL_MUL_X % 4294967296n) >>> 0 // 0x9939f508
const CELL_MUL_Z32 = Number(CELL_MUL_Z % 4294967296n) >>> 0 // 0xf1565bd5

/** Floor division that matches Java's for negative numerators. */
function floorDiv (a, b) {
  return Math.floor(a / b)
}

/**
 * The 32-bit cell seed the Mersenne engine consumes.
 *
 * The binary computes `cellZ * -0xea9a42b + cellX * -0x66c60af8 + salt + seed`
 * in 32-bit two's complement; the two magnitudes are exactly the low halves of
 * the Java constants above. Only the low 32 bits of the world seed take part,
 * which is why seeds 1 and 4294967297 share placements but not biomes.
 */
function cellSeed (seed, cellX, cellZ, salt) {
  return (Math.imul(cellX, CELL_MUL_X32) +
    Math.imul(cellZ, CELL_MUL_Z32) +
    (Number(seed) >>> 0) +
    (Number(salt) >>> 0)) >>> 0
}

/** The same cell seed kept at 64 bits, which is what the Java engine sees. */
function javaCellSeed (seed, cellX, cellZ, salt) {
  return BigInt.asIntN(64,
    BigInt(cellX) * CELL_MUL_X +
    BigInt(cellZ) * CELL_MUL_Z +
    BigInt(seed) +
    BigInt(salt))
}

/** The inside-a-cell width: the offset is drawn from [0, span). */
function spanOf (placement) {
  const span = placement.spacing - placement.separation
  if (span <= 0) {
    throw new RangeError(`${placement.id}: spacing ${placement.spacing} leaves no room inside separation ${placement.separation}`)
  }
  return span
}

/** Offset inside one cell, for the Mersenne engine. */
function offsetMt (random, span, triangular) {
  if (!triangular) {
    return [random.nextInt(span, 'modulo'), random.nextInt(span, 'modulo')]
  }
  const x = (random.nextInt(span, 'modulo') + random.nextInt(span, 'modulo'))
  const z = (random.nextInt(span, 'modulo') + random.nextInt(span, 'modulo'))
  return [Math.floor(x / 2), Math.floor(z / 2)]
}

/** Offset inside one cell, for the Java engine. */
function offsetJava (random, span, triangular) {
  if (!triangular) {
    return [random.nextInt(span), random.nextInt(span)]
  }
  const x = random.nextInt(span) + random.nextInt(span)
  const z = random.nextInt(span) + random.nextInt(span)
  return [Math.floor(x / 2), Math.floor(z / 2)]
}

/**
 * Where one grid cell puts its structure.
 *
 * @param {object} placement {spacing, separation, salt, spreadType, engine, frequency}
 * @param {number} seed world seed
 * @param {number} cellX cell coordinate (chunk / spacing, floored)
 * @param {number} cellZ
 * @returns {{chunkX: number, chunkZ: number, accepted: boolean}}
 */
function structureInCell (placement, seed, cellX, cellZ) {
  const span = spanOf(placement)
  const triangular = placement.spreadType === 'triangular'
  const engine = placement.engine === 'java' ? 'java' : 'mt'
  let offsets
  let gate = null
  if (engine === 'java') {
    const random = new JavaRandom(javaCellSeed(seed, cellX, cellZ, placement.salt))
    offsets = offsetJava(random, span, triangular)
    gate = random
  } else {
    const random = new Mt19937(cellSeed(seed, cellX, cellZ, placement.salt))
    offsets = offsetMt(random, span, triangular)
    gate = random
  }
  // The frequency gate, when a set declares one, is drawn from the same stream
  // after the offsets -- the order matters, so it is kept explicit.
  let accepted = true
  if (placement.frequency !== undefined && placement.frequency < 1) {
    accepted = engine === 'java'
      ? gate.nextFloat() < placement.frequency
      : gate.nextUnit() < placement.frequency
  }
  return {
    chunkX: cellX * placement.spacing + offsets[0],
    chunkZ: cellZ * placement.spacing + offsets[1],
    accepted
  }
}

/**
 * Every accepted cell start within `radiusChunks` of a chunk.
 *
 * Cells are visited in a deterministic order so callers can rely on the result
 * being reproducible; the order is by distance, then by cell coordinates.
 */
function candidateStarts (placement, seed, chunkX, chunkZ, radiusChunks) {
  const minCellX = floorDiv(chunkX - radiusChunks, placement.spacing) - 1
  const maxCellX = floorDiv(chunkX + radiusChunks, placement.spacing) + 1
  const minCellZ = floorDiv(chunkZ - radiusChunks, placement.spacing) - 1
  const maxCellZ = floorDiv(chunkZ + radiusChunks, placement.spacing) + 1
  const out = []
  for (let cellZ = minCellZ; cellZ <= maxCellZ; cellZ++) {
    for (let cellX = minCellX; cellX <= maxCellX; cellX++) {
      const start = structureInCell(placement, seed, cellX, cellZ)
      if (!start.accepted) continue
      const blockX = start.chunkX * 16 + 8
      const blockZ = start.chunkZ * 16 + 8
      const distance = Math.hypot(blockX - (chunkX * 16 + 8), blockZ - (chunkZ * 16 + 8))
      if (distance > radiusChunks * 16) continue
      out.push({ ...start, cellX, cellZ, blockX, blockZ, distance })
    }
  }
  out.sort((a, b) => a.distance - b.distance || a.cellX - b.cellX || a.cellZ - b.cellZ)
  return out
}

/**
 * The nearest candidate start, i.e. what `locate structure` would report before
 * the per-structure biome and height checks are applied.
 *
 * This is the *candidate grid*, not the answer: the server walks the same cells
 * in ring order around the origin and returns the first one whose biome and
 * height pass, so a caller that does not model biomes yet can only offer the
 * cell grid.
 */
function nearestStart (placement, seed, chunkX, chunkZ, radiusChunks = 512) {
  const candidates = candidateStarts(placement, seed, chunkX, chunkZ, radiusChunks)
  return candidates.length ? candidates[0] : null
}

module.exports = {
  floorDiv,
  spanOf,
  cellSeed,
  javaCellSeed,
  structureInCell,
  candidateStarts,
  nearestStart,
  CELL_MUL_X,
  CELL_MUL_Z
}
