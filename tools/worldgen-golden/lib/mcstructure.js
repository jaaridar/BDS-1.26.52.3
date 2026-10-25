'use strict';
// Decoder/encoder for Bedrock `.mcstructure` files, plus the canonical "golden"
// block-grid format used by the world-gen verifier.
//
// The block ordering inside `structure.block_indices` is NOT assumed: the
// decoder can emit any of the plausible orders, and `tools/worldgen-golden/
// probe` decides which one the server actually used by placing marker blocks at
// known coordinates and checking where they land. Once the probe has fixed the
// order it is recorded in research/proprietary/bds-1.26.52.3/golden/MANIFEST.json
// and every later capture uses it.

const { parseRoot, writeRoot, TAG } = require('./nbt');

// index = f(size, x, y, z). All are "y slowest" or "x slowest" permutations;
// the probe tells us which is right.
const ORDERS = {
  // x fastest, then z, then y  (index = x + z*sx + y*sx*sz)
  xzy: (sx, sy, sz, x, y, z) => x + z * sx + y * sx * sz,
  // x fastest, then y, then z
  xyz: (sx, sy, sz, x, y, z) => x + y * sx + z * sx * sy,
  // z fastest, then x, then y
  zxy: (sx, sy, sz, x, y, z) => z + x * sz + y * sx * sz,
  // z fastest, then y, then x
  zyx: (sx, sy, sz, x, y, z) => z + y * sz + x * sy * sz,
  // y fastest, then z, then x
  yzx: (sx, sy, sz, x, y, z) => y + z * sy + x * sy * sz,
  // y fastest, then x, then z
  yxz: (sx, sy, sz, x, y, z) => y + x * sy + z * sy * sx,
};

function normalizeState(states) {
  const out = {};
  for (const [key, value] of Object.entries(states || {})) {
    if (value === null || value === undefined) continue;
    if (typeof value === 'bigint') out[key] = Number(value);
    else if (Buffer.isBuffer(value)) out[key] = value.toString('hex');
    else out[key] = value;
  }
  const keys = Object.keys(out).sort();
  const sorted = {};
  for (const key of keys) sorted[key] = out[key];
  return sorted;
}

function decodeStructure(buffer, { order = 'xzy' } = {}) {
  const parsed = parseRoot(buffer);
  const root = parsed.value;
  const size = (root.size || []).map(Number);
  if (size.length !== 3) throw new Error(`structure size is ${JSON.stringify(root.size)}`);
  const structure = root.structure || {};
  const indices = structure.block_indices || [];
  if (!Array.isArray(indices) || indices.length === 0) {
    throw new Error('structure.block_indices missing');
  }
  const paletteRoot = (structure.palette && structure.palette.default) || {};
  const blockPalette = paletteRoot.block_palette || [];
  const palette = blockPalette.map((entry) => ({
    name: entry.name,
    states: normalizeState(entry.states),
  }));
  const origin = (root.structure_world_origin || []).map(Number);
  const [sx, sy, sz] = size;
  // Bedrock omits trailing layers that carry no data (the second layer only
  // exists when a cell has a waterlogged/snow layer), so an empty list is legal
  // and simply means "absent". A non-empty layer must match the volume.
  const expected = sx * sy * sz;
  const validate = indices.map((layer, layerIndex) => {
    if (!Array.isArray(layer)) throw new Error(`block_indices[${layerIndex}] is not a list`);
    if (layer.length === 0) return [];
    if (layer.length !== expected) {
      throw new Error(
        `block_indices[${layerIndex}] has ${layer.length} entries, expected ${expected}`
      );
    }
    return layer.map(Number);
  });
  return {
    formatVersion: Number(root.format_version || 0),
    size,
    origin,
    palette,
    layers: validate,
    layerCount: validate.length,
    stringMode: parsed.stringMode,
    bytesConsumed: parsed.bytesConsumed,
    fileSize: buffer.length,
    order,
  };
}

function paletteKey(entry) {
  return `${entry.name}|${JSON.stringify(entry.states || {})}`;
}

// Flatten a decoded structure into a canonical grid: for every (x,y,z) emit the
// palette id of layer 0 (and layer 1 when it has real content).
function toGrid(structure, { order = structure.order } = {}) {
  const index = ORDERS[order];
  if (!index) throw new Error(`unknown order ${order}`);
  const [sx, sy, sz] = structure.size;
  const palette = [];
  const paletteIds = new Map();
  const intern = (paletteId) => {
    const entry = structure.palette[paletteId] || { name: '<missing>', states: {} };
    const key = paletteKey(entry);
    let id = paletteIds.get(key);
    if (id === undefined) {
      id = palette.length;
      palette.push({ name: entry.name, states: entry.states });
      paletteIds.set(key, id);
    }
    return id;
  };
  const layer0 = new Uint16Array(sx * sy * sz);
  const layer1 = new Uint16Array(sx * sy * sz);
  let hasLayer1 = false;
  const layer0Source = structure.layers[0];
  const layer1Source = structure.layers[1] || [];
  for (let y = 0; y < sy; y++) {
    for (let z = 0; z < sz; z++) {
      for (let x = 0; x < sx; x++) {
        const source = index(sx, sy, sz, x, y, z);
        const target = (y * sz + z) * sx + x;
        const a = layer0Source[source];
        layer0[target] = a >= 0 ? intern(a) : 0;
        const b = layer1Source[source];
        if (b !== undefined && b >= 0) {
          layer1[target] = intern(b);
          hasLayer1 = true;
        }
      }
    }
  }
  return { size: structure.size, palette, layer0, layer1, hasLayer1 };
}

// ---- golden container -------------------------------------------------------
//
// A golden capture is two files plus an entry in MANIFEST.json:
//   golden-<label>.json        metadata: seed, origin, size, palette, sha256
//   golden-<label>.blocks.bin  uint16 LE palette indices, row-major y/z/x

function encodeGolden(grid, meta) {
  const { createHash } = require('node:crypto');
  const bytes = Buffer.alloc(grid.layer0.length * 2);
  for (let i = 0; i < grid.layer0.length; i++) bytes.writeUInt16LE(grid.layer0[i], i * 2);
  const layer1Bytes = grid.hasLayer1 ? Buffer.alloc(grid.layer1.length * 2) : null;
  if (layer1Bytes) {
    for (let i = 0; i < grid.layer1.length; i++) layer1Bytes.writeUInt16LE(grid.layer1[i], i * 2);
  }
  const header = {
    schema: 1,
    label: meta.label,
    seed: String(meta.seed),
    dimension: meta.dimension || 'overworld',
    generator: meta.generator || 'default',
    capture: meta.capture || {},
    origin: meta.origin,
    size: grid.size,
    ordering: 'y,z,x row-major (x fastest)',
    palette: grid.palette,
    blocks: {
      file: `golden-${meta.label}.blocks.bin`,
      sha256: createHash('sha256').update(bytes).digest('hex'),
      bytes: bytes.length,
      layers: layer1Bytes ? 2 : 1,
    },
  };
  if (layer1Bytes) {
    header.blocks.file1 = `golden-${meta.label}.layer1.bin`;
    header.blocks.sha256_1 = createHash('sha256').update(layer1Bytes).digest('hex');
  }
  return { header, bytes, layer1Bytes };
}

function decodeGolden(header, blocksBuffer, layer1Buffer) {
  const [sx, sy, sz] = header.size;
  const expected = sx * sy * sz;
  if (blocksBuffer.length !== expected * 2) {
    throw new Error(`blocks.bin is ${blocksBuffer.length} B, expected ${expected * 2}`);
  }
  const layer0 = new Uint16Array(expected);
  for (let i = 0; i < expected; i++) layer0[i] = blocksBuffer.readUInt16LE(i * 2);
  let layer1 = null;
  if (layer1Buffer) {
    layer1 = new Uint16Array(expected);
    for (let i = 0; i < expected; i++) layer1[i] = layer1Buffer.readUInt16LE(i * 2);
  }
  return { size: header.size, palette: header.palette, layer0, layer1 };
}

function blockAt(grid, x, y, z) {
  const [sx, sy, sz] = grid.size;
  if (x < 0 || y < 0 || z < 0 || x >= sx || y >= sy || z >= sz) return null;
  return grid.palette[grid.layer0[(y * sz + z) * sx + x]] || null;
}

module.exports = { ORDERS, decodeStructure, toGrid, encodeGolden, decodeGolden, blockAt, normalizeState };
