'use strict'

/**
 * Structure placement: turning a seed into structure positions.
 *
 * The recovered pipeline (research/proprietary/bds-1.26.52.3/ANALYSIS.md
 * section 4.4) is the Java-style spaced-structure resolver:
 *
 *   1. the world is cut into cells of `spacing` chunks;
 *   2. each cell gets a `java.util.Random` seeded from
 *      `cellX * 341873128712 + cellZ * 132897987541 + seed + salt`;
 *   3. that stream picks an offset inside the cell, either linear (one draw per
 *      axis) or triangular (two draws averaged per axis);
 *   4. a frequency check can reject the cell outright.
 *
 * Everything above is transcribed from the disassembly. The per-structure
 * numbers -- spacing, separation, salt, spread type, frequency -- are data the
 * engine supplies; they live in `structures-data.js` and are the part the oracle
 * is used to confirm, so they are never invented here.
 */

const { JavaRandom, structureSeed } = require('./java-random')

/** Floor division that matches Java's for negative numerators. */
function floorDiv (a, b) {
  return Math.floor(a / b)
}

/**
 * Where one grid cell puts its structure.
 *
 * @param {object} placement {spacing, separation, salt, spreadType, frequency}
 * @param {number} seed world seed
 * @param {number} cellX cell coordinate (chunk / spacing, floored)
 * @param {number} cellZ
 * @returns {{chunkX: number, chunkZ: number, accepted: boolean}}
 */
function structureInCell (placement, seed, cellX, cellZ) {
  const random = new JavaRandom(structureSeed(seed, cellX, cellZ, placement.salt))
  const span = placement.spacing - placement.separation
  if (span <= 0) {
    throw new RangeError(`${placement.id}: spacing ${placement.spacing} leaves no room inside separation ${placement.separation}`)
  }
  let offsetX
  let offsetZ
  if (placement.spreadType === 'triangular') {
    offsetX = Math.floor((random.nextInt(span) + random.nextInt(span)) / 2)
    offsetZ = Math.floor((random.nextInt(span) + random.nextInt(span)) / 2)
  } else {
    offsetX = random.nextInt(span)
    offsetZ = random.nextInt(span)
  }
  // The frequency gate, when a set declares one, is drawn from the same stream
  // after the offsets -- the order matters, so it is kept explicit.
  const accepted = placement.frequency === undefined || placement.frequency >= 1
    ? true
    : random.nextChance(placement.frequency)
  return {
    chunkX: cellX * placement.spacing + offsetX,
    chunkZ: cellZ * placement.spacing + offsetZ,
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
 */
function nearestStart (placement, seed, chunkX, chunkZ, radiusChunks = 512) {
  const candidates = candidateStarts(placement, seed, chunkX, chunkZ, radiusChunks)
  return candidates.length ? candidates[0] : null
}

module.exports = { floorDiv, structureInCell, candidateStarts, nearestStart }
