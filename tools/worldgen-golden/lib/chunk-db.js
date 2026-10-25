'use strict';
// Decoder for the Bedrock world database (LevelDB) as written by the official
// dedicated server 1.26.52.3.
//
// Everything here was derived from real captures and is re-validated on every
// run (see `assertValid`): the palette must consume the value exactly and every
// packed index must be inside the palette. Nothing is guessed.
//
// ---------------------------------------------------------------------------
// Key layout (10 bytes for a subchunk, 9 bytes for chunk metadata):
//
//   [ x:int32 LE ][ z:int32 LE ][ tag:u8 ][ subchunkIndex:i8 ]   tag 0x2f
//   [ x:int32 LE ][ z:int32 LE ][ tag:u8 ]                      tag 0x2b/0x2c
//
// Dimensions live in separate databases, so no dimension field is present.
//
// Subchunk value layout (version 9):
//
//   [ version:u8 = 9 ][ storageCount:u8 ][ y:i8 ][ bits:u8 ]
//   repeated storageCount times:
//     (only storages after the first repeat the `bits` byte)
//     blocks: wordCount * 4 bytes, wordCount = ceil(4096 / floor(32 / bpb))
//             bpb = bits / 2, u32 words little-endian, lowest bits first
//     paletteCount:int32 LE, then paletteCount little-endian NBT compounds
//
// Block index inside a subchunk: x*256 + z*16 + y (y fastest).
//
// The `bits` field is empirically twice the packed width; the packing width is
// re-derived from the byte length and cross-checked against the palette size, so
// a wrong reading cannot silently pass.
// ---------------------------------------------------------------------------

const SUBCHUNK_TAG = 0x2f;
const DATA3D_TAG = 0x2b;
const DATA2D_TAG = 0x2c;
const BLOCKS_PER_SUBCHUNK = 4096;
const SUBCHUNK_EDGE = 16;

// Little-endian NBT, as used by Bedrock for palettes and level.dat.
function readNbtString(buf, p) {
  if (p + 2 > buf.length) throw new Error('nbt: truncated string length');
  const n = buf.readUInt16LE(p);
  p += 2;
  if (p + n > buf.length) throw new Error('nbt: truncated string');
  return [buf.toString('utf8', p, p + n), p + n];
}

const NBT_SIZES = { 1: 1, 2: 2, 3: 4, 4: 8, 5: 4, 6: 8 };

function readNbtPayload(buf, p, tag) {
  if (tag in NBT_SIZES) {
    const size = NBT_SIZES[tag];
    if (p + size > buf.length) throw new Error('nbt: truncated scalar');
    let value;
    switch (tag) {
      case 1: value = buf.readInt8(p); break;
      case 2: value = buf.readInt16LE(p); break;
      case 3: value = buf.readInt32LE(p); break;
      case 4: value = buf.readBigInt64LE(p).toString(); break;
      case 5: value = buf.readFloatLE(p); break;
      case 6: value = buf.readDoubleLE(p); break;
      default: value = null;
    }
    return [value, p + size];
  }
  switch (tag) {
    case 7: {
      const n = buf.readInt32LE(p);
      if (p + 4 + n > buf.length) throw new Error('nbt: truncated byte array');
      return [buf.subarray(p + 4, p + 4 + n).toString('base64'), p + 4 + n];
    }
    case 8: return readNbtString(buf, p);
    case 9: {
      const element = buf.readUInt8(p);
      const n = buf.readInt32LE(p + 1);
      p += 5;
      const items = [];
      for (let i = 0; i < n; i++) {
        let value;
        [value, p] = readNbtPayload(buf, p, element);
        items.push(value);
      }
      return [items, p];
    }
    case 10: {
      const obj = {};
      for (;;) {
        const t = buf.readUInt8(p);
        p += 1;
        if (t === 0) return [obj, p];
        const [name, next] = readNbtString(buf, p);
        let value;
        [value, p] = readNbtPayload(buf, next, t);
        obj[name] = value;
      }
    }
    case 11: {
      const n = buf.readInt32LE(p);
      p += 4;
      const out = [];
      for (let i = 0; i < n; i++) out.push(buf.readInt32LE(p + i * 4));
      return [out, p + 4 * n];
    }
    case 12: {
      const n = buf.readInt32LE(p);
      p += 4;
      const out = [];
      for (let i = 0; i < n; i++) out.push(buf.readBigInt64LE(p + i * 8).toString());
      return [out, p + 8 * n];
    }
    default:
      throw new Error(`nbt: unknown tag ${tag}`);
  }
}

function readPalette(buf, p) {
  const count = buf.readInt32LE(p);
  p += 4;
  if (count < 0 || count > BLOCKS_PER_SUBCHUNK) {
    throw new Error(`palette: implausible entry count ${count}`);
  }
  const entries = [];
  for (let i = 0; i < count; i++) {
    const tag = buf.readUInt8(p);
    if (tag !== 10) throw new Error(`palette entry ${i}: expected compound, got tag ${tag}`);
    p += 1;
    let value;
    [, p] = readNbtString(buf, p); // entry name, unused
    [value, p] = readNbtPayload(buf, p, 10);
    entries.push({ name: value.name || '<unnamed>', states: value.states || {} });
  }
  return [entries, p];
}

// Unpack one storage's 4096 indices.
function unpackIndices(buf, p, bits) {
  if (bits === 0) {
    throw new Error(
      'subchunk uses a zero-bit palette; that encoding has not been observed ' +
      'in a verified capture and must be derived before it is trusted'
    );
  }
  const bpb = bits / 2;
  if (!Number.isInteger(bpb) || bpb < 1 || bpb > 32) {
    throw new Error(`subchunk bit width ${bits} is not a verified encoding`);
  }
  const blocksPerWord = Math.floor(32 / bpb);
  const words = Math.ceil(BLOCKS_PER_SUBCHUNK / blocksPerWord);
  const byteLength = words * 4;
  if (p + byteLength > buf.length) {
    throw new Error('subchunk: block data runs past the end of the value');
  }
  const indices = new Uint16Array(BLOCKS_PER_SUBCHUNK);
  const mask = (1 << bpb) - 1;
  let out = 0;
  for (let w = 0; w < words; w++) {
    const word = buf.readUInt32LE(p + w * 4);
    for (let k = 0; k < blocksPerWord && out < BLOCKS_PER_SUBCHUNK; k++) {
      indices[out++] = (word >>> (k * bpb)) & mask;
    }
  }
  return [indices, p + byteLength];
}

// Decode a subchunk value into its storages.
function decodeSubchunk(buf) {
  if (buf.length < 4) throw new Error('subchunk: value too short');
  const version = buf.readUInt8(0);
  if (version !== 9) throw new Error(`subchunk: unsupported version ${version}`);
  const storageCount = buf.readUInt8(1);
  if (storageCount < 1 || storageCount > 4) {
    throw new Error(`subchunk: implausible storage count ${storageCount}`);
  }
  const y = buf.readInt8(2);
  let bits = buf.readUInt8(3);
  let p = 4;
  const storages = [];
  for (let s = 0; s < storageCount; s++) {
    if (s > 0) {
      bits = buf.readUInt8(p);
      p += 1;
    }
    const [indices, next] = unpackIndices(buf, p, bits);
    p = next;
    const [palette, end] = readPalette(buf, p);
    p = end;
    for (const index of indices) {
      if (index >= palette.length) {
        throw new Error(
          `subchunk y=${y}: palette index ${index} out of range (palette ${palette.length}); ` +
          'the bit width or word packing was misread'
        );
      }
    }
    storages.push({ bits, palette, indices });
  }
  if (p !== buf.length) {
    throw new Error(
      `subchunk y=${y}: consumed ${p} of ${buf.length} bytes; the layout was misread`
    );
  }
  return { y, version, storages };
}

// ---- database-level helpers -------------------------------------------------

function decodeKey(key) {
  if (key.length === 10 && key[8] === SUBCHUNK_TAG) {
    return { kind: 'subchunk', x: key.readInt32LE(0), z: key.readInt32LE(4), y: key.readInt8(9) };
  }
  if (key.length === 9 && (key[8] === DATA3D_TAG || key[8] === DATA2D_TAG)) {
    return {
      kind: key[8] === DATA3D_TAG ? 'data3d' : 'data2d',
      x: key.readInt32LE(0),
      z: key.readInt32LE(4),
    };
  }
  if (key.length === 9 && key.toString('latin1', 0, 4) === 'digp') {
    return { kind: 'digp', x: key.readInt32LE(4), z: key.readInt32LE(8) };
  }
  return { kind: 'other', text: key.toString('latin1').replace(/[^\x20-\x7e]/g, '.') };
}

// Parse the JSON produced by dump-db.js into a map of chunk -> subchunks.
function parseDump(text) {
  const dump = typeof text === 'string' ? JSON.parse(text) : text;
  const chunks = new Map();
  const other = [];
  for (const entry of dump.entries) {
    const key = Buffer.from(entry.k, 'hex');
    const value = Buffer.from(entry.v, 'hex');
    const info = decodeKey(key);
    if (info.kind === 'subchunk') {
      const id = `${info.x},${info.z}`;
      if (!chunks.has(id)) chunks.set(id, { x: info.x, z: info.z, subchunks: new Map(), extra: {} });
      const chunk = chunks.get(id);
      const decoded = decodeSubchunk(value);
      if (decoded.y !== info.y) {
        throw new Error(
          `chunk ${id}: key says subchunk y=${info.y} but the value says ${decoded.y}`
        );
      }
      chunk.subchunks.set(decoded.y, decoded);
    } else {
      const match = /^(-?\d+),(-?\d+)$/.exec(info.kind === 'digp' ? `${info.x},${info.z}` : '');
      if (match) {
        const id = `${info.x},${info.z}`;
        if (!chunks.has(id)) chunks.set(id, { x: info.x, z: info.z, subchunks: new Map(), extra: {} });
        chunks.get(id).extra.digp = value;
      } else {
        other.push({ info, value });
      }
    }
  }
  return { meta: { schema: dump.schema, source: dump.source, keyCounts: dump.keyCounts }, chunks, other };
}

// ---- column assembly --------------------------------------------------------

const MIN_Y = -64;
const MAX_Y = 319;

// Assemble one 16 x 384 x 16 column in the canonical golden layout.
//   index = (worldY - MIN_Y) * 256 + z * 16 + x   (x fastest, as `encodeGolden`)
// A subchunk index `i` holds world Y from i*16 to i*16+15, so the world floor
// -64 starts at index -4 and the first subchunk above zero is index 0.
// A subchunk that is absent from the database holds no blocks at all, i.e. air:
// the server omits fully empty subchunks, which is why the air above the
// surface has no key while the marker pocket at y=100 created one.
function buildColumn(parsed, cx, cz) {
  const id = `${cx},${cz}`;
  const chunk = parsed.chunks.get(id);
  if (!chunk) throw new Error(`chunk ${id} is not present in the database`);
  const height = MAX_Y - MIN_Y + 1;
  const size = [SUBCHUNK_EDGE, height, SUBCHUNK_EDGE];
  const layer0 = new Uint16Array(SUBCHUNK_EDGE * height * SUBCHUNK_EDGE);
  const layer1 = new Uint16Array(SUBCHUNK_EDGE * height * SUBCHUNK_EDGE);
  let hasLayer1 = false;
  const palette = [];
  const paletteIds = new Map();
  const intern = (entry) => {
    const key = `${entry.name}|${JSON.stringify(entry.states || {})}`;
    let index = paletteIds.get(key);
    if (index === undefined) {
      index = palette.length;
      palette.push({ name: entry.name, states: entry.states });
      paletteIds.set(key, index);
    }
    return index;
  };
  const airId = intern({ name: 'minecraft:air', states: {} });

  const present = [...chunk.subchunks.keys()].sort((a, b) => a - b);
  for (const sy of present) {
    const sub = chunk.subchunks.get(sy);
    const storage0 = sub.storages[0];
    const storage1 = sub.storages[1] || null;
    if (storage1) hasLayer1 = true;
    const ids0 = storage0.palette.map(intern);
    const ids1 = storage1 ? storage1.palette.map(intern) : null;
    for (let ly = 0; ly < SUBCHUNK_EDGE; ly++) {
      const worldY = sy * SUBCHUNK_EDGE + ly;
      if (worldY < MIN_Y || worldY > MAX_Y) continue;
      const rowBase = (worldY - MIN_Y) * 256;
      for (let lz = 0; lz < SUBCHUNK_EDGE; lz++) {
        for (let lx = 0; lx < SUBCHUNK_EDGE; lx++) {
          const source = lx * 256 + lz * 16 + ly;
          layer0[rowBase + lz * 16 + lx] = ids0[storage0.indices[source]];
          if (ids1) layer1[rowBase + lz * 16 + lx] = ids1[storage1.indices[source]];
        }
      }
    }
  }
  if (!hasLayer1) layer1.fill(airId);
  return { size, palette, layer0, layer1, hasLayer1, origin: [cx * 16, MIN_Y, cz * 16] };
}

// `y` is a world Y (-64..319); `x` and `z` are column-local (0..15).
function blockAt(column, x, worldY, z) {
  const [sx, sy, sz] = column.size;
  const y = worldY - MIN_Y;
  if (x < 0 || y < 0 || z < 0 || x >= sx || y >= sy || z >= sz) return null;
  return column.palette[column.layer0[(y * sz + z) * sx + x]] || null;
}

module.exports = {
  decodeKey,
  decodeSubchunk,
  parseDump,
  buildColumn,
  blockAt,
  readNbtPayload,
  MIN_Y,
  MAX_Y,
  SUBCHUNK_TAG,
  DATA3D_TAG,
  DATA2D_TAG,
};
