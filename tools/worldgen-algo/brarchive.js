'use strict'

/**
 * Reader for the `.brarchive` bundles the Bedrock vanilla data pack ships.
 *
 * The pack keeps its JSON in these archives instead of loose files, so reading
 * them is a prerequisite for anything data driven -- structure sets, jigsaw
 * structures, biome components, feature rules.
 *
 * Layout, established from the files themselves and checked against every
 * bundle in `behavior_packs/vanilla_1.26.50/__brarchive`:
 *
 *   header   8  bytes  magic 7d 27 25 b1 a0 52 70 26
 *            4  bytes  entry count     (u32 LE)
 *            4  bytes  format version  (u32 LE, 1 in the shipped packs)
 *   records  count * 256 bytes:
 *            +0   u8   name length
 *            +1   name, then zero padding
 *            +252 u32  blob length (LE) -- always the final four bytes
 *   blobs    the record payloads, in record order, back to back
 *
 * The last four bytes of a record being the length is what makes the format
 * self-describing: names and payloads are stored in separate runs, so a record
 * with a zero length is an empty file rather than a corruption.
 */

const MAGIC = Buffer.from([0x7d, 0x27, 0x25, 0xb1, 0xa0, 0x52, 0x70, 0x26])
const RECORD_SIZE = 256

/**
 * Parse an archive buffer.
 *
 * @param {Buffer} buffer
 * @returns {{version: number, entries: Array<{name: string, data: Buffer}>}}
 */
function readArchive (buffer) {
  if (buffer.length < 16 || !buffer.subarray(0, 8).equals(MAGIC)) {
    throw new Error('not a brarchive: bad magic')
  }
  const count = buffer.readUInt32LE(8)
  const version = buffer.readUInt32LE(12)
  const tableEnd = 16 + count * RECORD_SIZE
  if (tableEnd > buffer.length) {
    throw new Error(`truncated name table: ${count} records need ${tableEnd} bytes`)
  }
  const names = []
  for (let i = 0; i < count; i++) {
    const base = 16 + i * RECORD_SIZE
    const nameLength = buffer[base]
    if (nameLength === 0 || base + 1 + nameLength > base + RECORD_SIZE) {
      throw new Error(`bad name length in record ${i}`)
    }
    names.push({
      name: buffer.toString('utf8', base + 1, base + 1 + nameLength),
      length: buffer.readUInt32LE(base + RECORD_SIZE - 4)
    })
  }
  const entries = []
  let offset = tableEnd
  for (const { name, length } of names) {
    if (offset + length > buffer.length) {
      throw new Error(`truncated payload for ${name}`)
    }
    entries.push({ name, data: buffer.subarray(offset, offset + length) })
    offset += length
  }
  return { version, entries }
}

/** Parse an archive whose payloads are all JSON. */
function readJsonArchive (buffer) {
  const { version, entries } = readArchive(buffer)
  return {
    version,
    entries: entries.map(({ name, data }) => ({
      name,
      json: JSON.parse(data.toString('utf8'))
    }))
  }
}

module.exports = { readArchive, readJsonArchive, MAGIC, RECORD_SIZE }
