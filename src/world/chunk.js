'use strict'

/**
 * Network chunk serialization.
 *
 * This is the classic `level_chunk` payload layout used by the Bedrock
 * dedicated server and verified against the two most battle-tested
 * open-source implementations (PocketMine-MP and Dragonfly):
 *
 *   payload := subChunk{subChunkCount}  biomeStorage{24}  borderCount:u8 (=0)  tiles*
 *   subChunk := version:u8 (=8)  layerCount:u8 (=1)  layer
 *   layer    := storage
 *   storage  := header:u8 ((bitsPerBlock << 1) | 1)  words:u32le[]  palette
 *   palette  := [count:zigzag32]  runtimeIds:zigzag32[]
 *
 * Details that matter:
 *  - bitsPerBlock is one of 0, 1, 2, 3, 4, 5, 6, 8, 16. When it is 0 the
 *    storage holds a single value: no words and no palette count follow, only
 *    one zigzag32 runtime id.
 *  - words are raw little-endian uint32s. For 3/5/6 bits each word holds
 *    floor(32/bits) blocks (the leftover high bits are padding) and the last
 *    word may be partially filled.
 *  - block order inside a sub-chunk is index = (x << 8) | (z << 4) | y.
 *  - biomes are 4x4x4 per sub-chunk (64 cells, order (x << 4) | (z << 2) | y)
 *    and one biome storage is written for EVERY sub-chunk in the dimension
 *    column - 24 of them for the overworld (y = -64 .. 319).
 *  - sub-chunks are written from the bottom of the column (y index -4)
 *    upward; `subChunkCount` stops at the highest non-empty one.
 */

const BLOCKS_PER_SUBCHUNK = 4096
const BIOMES_PER_SUBCHUNK = 64
const SUBCHUNK_VERSION = 8
const ALLOWED_BITS = [1, 2, 3, 4, 5, 6, 8, 16]

/** Overworld column: sub-chunk y index -4 .. 19 */
const OVERWORLD = { minSubChunkIndex: -4, maxSubChunkIndex: 19, subChunkSlots: 24 }

/** Unsigned LEB128 */
function writeVarint (value, out) {
  let v = value >>> 0
  do {
    let b = v & 0x7f
    v >>>= 7
    if (v !== 0) b |= 0x80
    out.push(b)
  } while (v !== 0)
}

/** Signed LEB128 (zigzag) - what the Bedrock chunk palette uses */
function writeSignedVarint (value, out) {
  writeVarint(((value << 1) ^ (value >> 31)) >>> 0, out)
}

function bitsNeeded (paletteSize) {
  for (const bits of ALLOWED_BITS) {
    if (2 ** bits >= paletteSize) return bits
  }
  throw new Error(`palette too large: ${paletteSize} entries`)
}

/**
 * Encode one paletted storage.
 *
 * @param {Uint16Array|Uint8Array|Array<number>} values runtime ids (4096 or 64)
 * @returns {number[]} bytes
 */
function encodePalettedStorage (values) {
  // Compact values into first-seen local palette order
  const remap = new Map()
  const localPalette = []
  const packed = new Uint16Array(values.length)
  for (let i = 0; i < values.length; i++) {
    const v = values[i] | 0
    let slot = remap.get(v)
    if (slot === undefined) {
      slot = localPalette.length
      remap.set(v, slot)
      localPalette.push(v)
    }
    packed[i] = slot
  }

  const out = []

  if (localPalette.length === 1) {
    // 0 bits per block: header only, no words, no count, one palette entry
    out.push((0 << 1) | 1)
    writeSignedVarint(localPalette[0], out)
    return out
  }

  const bits = bitsNeeded(localPalette.length)
  const blocksPerWord = Math.floor(32 / bits)
  const wordCount = Math.ceil(values.length / blocksPerWord)
  const mask = (1 << bits) - 1

  out.push((bits << 1) | 1)

  for (let w = 0; w < wordCount; w++) {
    let word = 0
    for (let b = 0; b < blocksPerWord; b++) {
      const i = w * blocksPerWord + b
      if (i < packed.length) word |= (packed[i] & mask) << (bits * b)
    }
    out.push(word & 0xff, (word >>> 8) & 0xff, (word >>> 16) & 0xff, (word >>> 24) & 0xff)
  }

  writeSignedVarint(localPalette.length, out)
  for (const entry of localPalette) writeSignedVarint(entry, out)
  return out
}

/**
 * Encode one 16x16x16 sub-chunk (single block layer).
 * @param {Uint16Array|number[]} blocks 4096 palette/runtime ids
 */
function encodeSubChunk (blocks) {
  if (!blocks || blocks.length !== BLOCKS_PER_SUBCHUNK) {
    throw new Error(`blocks must have ${BLOCKS_PER_SUBCHUNK} entries`)
  }
  const out = [SUBCHUNK_VERSION, 1]
  out.push(...encodePalettedStorage(blocks))
  return Buffer.from(out)
}

function isAllAir (blocks) {
  if (!blocks) return true
  for (let i = 0; i < blocks.length; i++) if (blocks[i] !== 0) return false
  return true
}

/**
 * Encode a full overworld column payload for `level_chunk`.
 *
 * @param {object} opts
 * @param {Array<Uint16Array|number[]|null>} opts.subChunks
 *   Block arrays per sub-chunk slot; slot 0 is y index -4. Null/omitted slots
 *   are air. Only slots below the highest non-empty one are written.
 * @param {number} [opts.biomeId] biome id for the whole column (default 1 = plains)
 * @param {(wx: number, wy: number, wz: number) => number} [opts.biomeSampler]
 *   Per-cell biome lookup in world coordinates. When given, each 4x4x4
 *   biome cell is sampled at its center block and `biomeId` is ignored.
 *   Requires `chunkX`/`chunkZ` to translate cells to world coordinates.
 * @param {number} [opts.chunkX] chunk x (only used with biomeSampler)
 * @param {number} [opts.chunkZ] chunk z (only used with biomeSampler)
 * @returns {{ payload: Buffer, subChunkCount: number }}
 */
function encodeColumn ({ subChunks = [], biomeId = 1, biomeSampler, chunkX = 0, chunkZ = 0 } = {}) {
  let highest = -1
  for (let i = 0; i < subChunks.length; i++) {
    if (!isAllAir(subChunks[i])) highest = i
  }
  const subChunkCount = highest + 1

  const parts = []
  for (let i = 0; i < subChunkCount; i++) {
    const blocks = subChunks[i] && !isAllAir(subChunks[i])
      ? subChunks[i]
      : new Uint16Array(BLOCKS_PER_SUBCHUNK) // air
    parts.push(encodeSubChunk(blocks))
  }

  // One biome storage per column slot (always all 24 for the overworld).
  // Cell order inside a storage is (x << 4) | (z << 2) | y over 4x4x4 cells.
  for (let i = 0; i < OVERWORLD.subChunkSlots; i++) {
    let biomeCells
    if (biomeSampler) {
      biomeCells = new Uint16Array(BIOMES_PER_SUBCHUNK)
      const baseY = (i + OVERWORLD.minSubChunkIndex) * 16
      for (let bx = 0; bx < 4; bx++) {
        for (let bz = 0; bz < 4; bz++) {
          for (let by = 0; by < 4; by++) {
            biomeCells[(bx << 4) | (bz << 2) | by] = biomeSampler(
              chunkX * 16 + bx * 4 + 2, baseY + by * 4 + 2, chunkZ * 16 + bz * 4 + 2) & 0xffff
          }
        }
      }
    } else {
      biomeCells = new Uint8Array(BIOMES_PER_SUBCHUNK).fill(biomeId)
    }
    parts.push(Buffer.from(encodePalettedStorage(biomeCells)))
  }

  // Border block array count (always 0 - border blocks crash the retail client)
  parts.push(Buffer.from([0]))

  return { payload: Buffer.concat(parts), subChunkCount }
}

module.exports = {
  BLOCKS_PER_SUBCHUNK,
  BIOMES_PER_SUBCHUNK,
  SUBCHUNK_VERSION,
  ALLOWED_BITS,
  OVERWORLD,
  writeVarint,
  writeSignedVarint,
  bitsNeeded,
  encodePalettedStorage,
  encodeSubChunk,
  encodeColumn
}
