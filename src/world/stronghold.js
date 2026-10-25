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
 *   draw 3 -> nextUInt() / 2^32, compared against 0.25  (see `gated`)
 *
 * and the grid position of the cell is
 *
 *   chunkX = cellX * 200 + 50 + draw1 % 100
 *   chunkZ = cellZ * 200 + 50 + draw2 % 100
 *
 * What the third draw gates is measured, and it is *not* existence: every cell
 * carries exactly one stronghold (114 captures, no cell holds two). It gates
 * whether the stronghold ends up on that grid position. Across 114 captured
 * strongholds, 74 sit exactly on the predicted position and every one of those
 * 74 is a gated cell, while 0 of the 32 ungated ones are. Of the 82 gated
 * cells, 74 are exact -- so the gate is necessary with no counter-example and
 * sufficient 90% of the time.
 *
 * The rest of the cells are relocated: the binary calls a biome provider with
 * the candidate position (`0x4e9fca0`, virtual slot 6 of the object at
 * `+0x1a8`), which can reject the cell or rewrite the position, and the value it
 * leaves behind is what gets re-snapped. That is why relocated strongholds are
 * not on the 200-chunk grid at all -- `(84, 9)` cannot be `cell * 200 + 50 +
 * [0..100)` on either axis. Modelling them needs the biome layer, so this module
 * reports the cell and says `gated: false` rather than inventing a position.
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

/** The threshold the third draw is compared against (`ucomiss` against 0.25f). */
const GRID_ODDS = 0.25

/**
 * A world seed reduced to the 32 bits the placement mix uses.
 *
 * Seeds go beyond 2^53 in practice (`-9223372036854775808` is a legal world
 * seed), so a `Number(seed) >>> 0` would reduce the wrong value for them. The
 * reduction is therefore done in BigInt whenever the seed is not a safe
 * integer.
 */
function seed32 (seed) {
  if (typeof seed === 'bigint') return Number(BigInt.asUintN(32, seed))
  if (typeof seed === 'string') return Number(BigInt.asUintN(32, BigInt(seed.trim())))
  if (Number.isSafeInteger(seed)) return Number(BigInt.asUintN(32, BigInt(seed)))
  return Number(BigInt.asUintN(32, BigInt(Math.trunc(seed))))
}

/** The centre of a cell, in chunks. */
function cellCentre (cell) {
  return cell * CELL + CELL / 2
}

/** The 32-bit Mersenne seed for one cell. */
function cellSeed (seed, cellX, cellZ) {
  return (Math.imul(cellCentre(cellX), MUL_X) +
    Math.imul(cellCentre(cellZ), MUL_Z) +
    seed32(seed) +
    SALT) >>> 0
}

/**
 * The stronghold a cell carries.
 *
 * @param {number|bigint|string} seed world seed; only its low 32 bits are used,
 *   so seeds 1 and 2^32+1 share every grid position
 * @param {number} cellX cell coordinate, i.e. floor(chunkX / 200)
 * @param {number} cellZ
 * @returns {{cellX: number, cellZ: number, chunkX: number, chunkZ: number,
 *   blockX: number, blockZ: number, gated: boolean, gate: number}}
 *   `chunkX/chunkZ` is the cell's grid position and `gate` its third draw.
 *   When `gated` is false the stronghold exists in this cell but the generator
 *   moved it off that position, so the grid position is not where to dig.
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
    gated: gate < GRID_ODDS,
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
  seed32,
  cellCentre,
  cellSeed,
  strongholdInCell,
  strongholdsNear
}
