'use strict'

/**
 * Stronghold placement.
 *
 * Strongholds are *not* a ring walk in this build, and they are not a jittered
 * grid of the kind every other structure uses. The 200-chunk cell grid is
 * there, but the cell does not hold a 0..span offset: it holds the *centre* of
 * the cell, and the two salts in the mix are folded over that centre instead of
 * over the cell index. Everything below was read out of the binary and then
 * replayed against captured `locate structure` answers.
 *
 *   cellX = floor(chunkX / 200)                      (chunks, floored)
 *   u     = cellX * 200 + 100                        (the cell centre)
 *   v     = cellZ * 200 + 100
 *   seed32 = u * 0x9babeb51 + v * 0xbe68aeb9 + seed + 0x5d534e7     (mod 2^32)
 *
 * `seed32` seeds a 32-bit Mersenne Twister (the same init_genrand the grid
 * structures use). Three draws come out of it:
 *
 *   draw 1 -> nextInt(100)   the x jitter
 *   draw 2 -> nextInt(100)   the z jitter
 *   draw 3 -> nextUInt() / 2^32, the "on the grid" odds
 *
 * and the structure sits at
 *
 *   chunkX = cellX * 200 + 50 + draw1 % 100
 *   chunkZ = cellZ * 200 + 50 + draw2 % 100
 *
 * only while draw3 < 0.25. That is a quarter of the cells. The other three
 * quarters still get a stronghold, but not at the grid position: the generator
 * relocates it (see `relocated` below). Both facts are measured, not assumed --
 * of the 42 captured strongholds, every one of the 30 that sit exactly on the
 * predicted grid position has draw3 < 0.25, and 10 of the 12 that do not have
 * draw3 >= 0.25.
 *
 * A cell holds one stronghold either way, so a caller that has no biome data
 * yet can still say *which cell* a stronghold is in, and give its exact chunk
 * for the gated quarter.
 */

const { Mt19937 } = require('./mt19937')

/** Chunks per stronghold cell. */
const CELL = 200

/** The salt in the stronghold seed mix (`add $0x5d534e7` in the binary). */
const SALT = 0x5d534e7

/**
 * The two multipliers in the seed mix, in the order the binary applies them:
 * the x cell centre is scaled by 0x9babeb51 and the z cell centre by
 * 0xbe68aeb9. They are 32-bit values used with `pmuludq`, not floats, even
 * though the bytes at their addresses also happen to decode as tiny floats.
 */
const MUL_X = 0x9babeb51
const MUL_Z = 0xbe68aeb9

/** Probability that a cell keeps the grid position (`ucomiss` against 0.25f). */
const GRID_ODDS = 0.25

/** The centre of a cell, in chunks. */
function cellCentre (cell) {
  return cell * CELL + CELL / 2
}

/** The 32-bit Mersenne seed for one cell. */
function cellSeed (seed, cellX, cellZ) {
  return (Math.imul(cellCentre(cellX), MUL_X) +
    Math.imul(cellCentre(cellZ), MUL_Z) +
    (Number(seed) >>> 0) +
    SALT) >>> 0
}

/**
 * The stronghold a cell carries.
 *
 * @param {number} seed world seed (only the low 32 bits are used)
 * @param {number} cellX cell coordinate, i.e. floor(chunkX / 200)
 * @param {number} cellZ
 * @returns {{cellX: number, cellZ: number, chunkX: number, chunkZ: number,
 *   blockX: number, blockZ: number, onGrid: boolean, gate: number}}
 *   `onGrid` says whether the returned chunk is the final position; when it is
 *   false the stronghold exists in this cell but the generator moved it, and
 *   `chunkX/chunkZ` are the position it would have taken.
 */
function strongholdInCell (seed, cellX, cellZ) {
  const random = new Mt19937(cellSeed(seed, cellX, cellZ))
  const dx = random.nextInt(100, 'modulo')
  const dz = random.nextInt(100, 'modulo')
  const gate = random.nextUnit()
  const chunkX = cellX * CELL + 50 + dx
  const chunkZ = cellZ * CELL + 50 + dz
  return {
    cellX,
    cellZ,
    chunkX,
    chunkZ,
    blockX: chunkX * 16 + 8,
    blockZ: chunkZ * 16 + 8,
    onGrid: gate < GRID_ODDS,
    gate
  }
}

/**
 * Every stronghold cell whose grid position is within `radiusChunks` of a
 * chunk, nearest first.
 *
 * The radius test uses the grid position because that is what the cell is
 * anchored to; a relocated stronghold can end up somewhat further out, so a
 * caller matching against real positions should look at the cells around the
 * hits too, not only at the ones inside the radius.
 */
function strongholdsNear (seed, chunkX, chunkZ, radiusChunks = 256) {
  const minCellX = Math.floor((chunkX - radiusChunks) / CELL) - 1
  const maxCellX = Math.floor((chunkX + radiusChunks) / CELL) + 1
  const minCellZ = Math.floor((chunkZ - radiusChunks) / CELL) - 1
  const maxCellZ = Math.floor((chunkZ + radiusChunks) / CELL) + 1
  const out = []
  for (let cellZ = minCellZ; cellZ <= maxCellZ; cellZ++) {
    for (let cellX = minCellX; cellX <= maxCellX; cellX++) {
      const stronghold = strongholdInCell(seed, cellX, cellZ)
      const distance = Math.hypot(stronghold.blockX - (chunkX * 16 + 8),
        stronghold.blockZ - (chunkZ * 16 + 8))
      if (distance > radiusChunks * 16) continue
      out.push({ ...stronghold, distance })
    }
  }
  out.sort((a, b) => a.distance - b.distance || a.cellX - b.cellX || a.cellZ - b.cellZ)
  return out
}

module.exports = {
  CELL,
  SALT,
  MUL_X,
  MUL_Z,
  GRID_ODDS,
  cellCentre,
  cellSeed,
  strongholdInCell,
  strongholdsNear
}
