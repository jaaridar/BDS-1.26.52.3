'use strict'

const test = require('node:test')
const assert = require('node:assert')

const {
  BLOCKS_PER_SUBCHUNK, BIOMES_PER_SUBCHUNK, SUBCHUNK_VERSION, OVERWORLD,
  encodePalettedStorage, encodeSubChunk, encodeColumn,
  writeSignedVarint, bitsNeeded
} = require('../../src/world/chunk')

/** Reference decoder used to prove the encoder round-trips. */
function readSignedVarint (buf, state) {
  let result = 0
  let shift = 0
  let b
  do {
    b = buf[state.o++]
    result |= (b & 0x7f) << shift
    shift += 7
  } while (b & 0x80)
  return (result >>> 1) ^ -(result & 1)
}

function decodePalettedStorage (buf, state, length) {
  const header = buf[state.o++]
  const bits = header >> 1
  assert.strictEqual(header & 1, 1, 'runtime-id storage flag')
  assert.ok([0, 1, 2, 3, 4, 5, 6, 8, 16].includes(bits), `bits per block ${bits}`)

  const values = new Uint16Array(length)
  if (bits === 0) {
    const entry = readSignedVarint(buf, state)
    values.fill(entry)
    return values
  }

  const blocksPerWord = Math.floor(32 / bits)
  const wordCount = Math.ceil(length / blocksPerWord)
  const mask = (1 << bits) - 1
  const slots = new Uint16Array(length)
  for (let w = 0; w < wordCount; w++) {
    const word = buf.readUInt32LE(state.o)
    state.o += 4
    for (let b = 0; b < blocksPerWord; b++) {
      const i = w * blocksPerWord + b
      if (i < length) slots[i] = (word >>> (bits * b)) & mask
    }
  }
  const count = readSignedVarint(buf, state)
  const palette = []
  for (let i = 0; i < count; i++) palette.push(readSignedVarint(buf, state))
  for (let i = 0; i < length; i++) values[i] = palette[slots[i]]
  return values
}

test('writeSignedVarint is zigzag32', () => {
  const cases = [[0, [0]], [1, [2]], [-1, [1]], [2, [4]], [-2, [3]], [64, [128, 1]]]
  for (const [value, encoded] of cases) {
    const out = []
    writeSignedVarint(value, out)
    assert.deepStrictEqual(out, encoded, `zigzag(${value})`)
  }
})

test('all-same storage uses the compact 0-bit form', () => {
  const bytes = encodePalettedStorage(new Uint16Array(BLOCKS_PER_SUBCHUNK)) // all air (0)
  assert.deepStrictEqual(bytes, [0x01, 0x00], 'header(0 bits, runtime) + zigzag(0)')

  const bedrock = encodePalettedStorage(new Uint16Array(BLOCKS_PER_SUBCHUNK).fill(1))
  assert.deepStrictEqual(bedrock, [0x01, 0x02], 'zigzag(1) = 2')
})

test('bitsNeeded picks from the allowed set', () => {
  assert.strictEqual(bitsNeeded(1), 1)
  assert.strictEqual(bitsNeeded(2), 1)
  assert.strictEqual(bitsNeeded(3), 2)
  assert.strictEqual(bitsNeeded(7), 3)
  assert.strictEqual(bitsNeeded(64), 6) // 2^6 = 64 >= 64
  assert.strictEqual(bitsNeeded(65), 8)
  assert.strictEqual(bitsNeeded(200), 8) // 2^8 = 256 >= 200
  assert.strictEqual(bitsNeeded(300), 16)
})

test('paletted storage round-trips for every bit width', () => {
  // Force each bit width with the right number of distinct values
  for (const [distinct, expectedBits] of [[2, 1], [4, 2], [7, 3], [20, 5], [50, 6], [100, 8], [300, 16]]) {
    const values = new Uint16Array(BLOCKS_PER_SUBCHUNK)
    for (let i = 0; i < BLOCKS_PER_SUBCHUNK; i++) values[i] = (i * 7919) % distinct
    const bytes = Buffer.from(encodePalettedStorage(values))
    assert.strictEqual(bytes[0] >> 1, expectedBits, `${distinct} distinct -> ${expectedBits} bits`)
    const state = { o: 0 }
    const decoded = decodePalettedStorage(bytes, state, BLOCKS_PER_SUBCHUNK)
    assert.strictEqual(state.o, bytes.length, 'consumed all bytes')
    assert.deepStrictEqual([...decoded], [...values], `round-trip ${distinct} distinct`)
  }
})

test('sub-chunk is version 8 with a single block layer', () => {
  const blocks = new Uint16Array(BLOCKS_PER_SUBCHUNK)
  const buf = encodeSubChunk(blocks)
  assert.strictEqual(buf[0], SUBCHUNK_VERSION)
  assert.strictEqual(buf[1], 1)
  const state = { o: 2 }
  const decoded = decodePalettedStorage(buf, state, BLOCKS_PER_SUBCHUNK)
  assert.deepStrictEqual([...decoded].every((v) => v === 0), true)
})

test('encodeColumn counts sub-chunks up to the highest non-empty one', () => {
  const floor = new Uint16Array(BLOCKS_PER_SUBCHUNK)
  floor[0] = 1 // one bedrock block in the bottom-left corner

  // Slot 4 = world y index 0 (column slots start at y index -4)
  const slots = []
  slots[4] = floor
  const { payload, subChunkCount } = encodeColumn({ subChunks: slots, biomeId: 1 })
  assert.strictEqual(subChunkCount, 5)

  const state = { o: 0 }
  // 5 sub-chunks
  for (let i = 0; i < 5; i++) {
    assert.strictEqual(payload[state.o], SUBCHUNK_VERSION)
    state.o += 2
    const blocks = decodePalettedStorage(payload, state, BLOCKS_PER_SUBCHUNK)
    if (i === 4) assert.strictEqual(blocks[0], 1)
    else assert.ok([...blocks].every((v) => v === 0))
  }
  // 24 biome storages (4x4x4 cells, plains = 1)
  for (let i = 0; i < OVERWORLD.subChunkSlots; i++) {
    const biomes = decodePalettedStorage(payload, state, BIOMES_PER_SUBCHUNK)
    assert.ok([...biomes].every((v) => v === 1), 'all plains')
  }
  // border block count
  assert.strictEqual(payload[state.o], 0)
  state.o += 1
  assert.strictEqual(state.o, payload.length, 'consumed the whole payload')
})

test('empty column has subChunkCount 0 but valid biomes and border byte', () => {
  const { payload, subChunkCount } = encodeColumn({ subChunks: [] })
  assert.strictEqual(subChunkCount, 0)
  const state = { o: 0 }
  for (let i = 0; i < OVERWORLD.subChunkSlots; i++) {
    decodePalettedStorage(payload, state, BIOMES_PER_SUBCHUNK)
  }
  assert.strictEqual(payload[state.o], 0)
  assert.strictEqual(state.o + 1, payload.length)
})

test('rejects wrong block array sizes', () => {
  assert.throws(() => encodeSubChunk(new Uint16Array(10)), /4096/)
})
