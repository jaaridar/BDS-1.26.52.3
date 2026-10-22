'use strict';
// Turns a raw capture (`.mcstructure` files saved by the server) into the
// canonical golden format, and *pins down* the block ordering using the probe
// structure instead of assuming it.
//
//   node tools/worldgen-golden/build-golden.js capture/seed-12345 \
//        --out research/proprietary/bds-1.26.52.3/golden
//
// Steps
//   1. decode wp_probe.mcstructure under every candidate index order;
//   2. score each order against the six marker blocks the capture placed;
//   3. require a single unambiguous winner (ties are a hard failure, never a
//      guess);
//   4. stack the six 64-block vertical slices of each chunk into one 384-block
//      column and write golden-<seed>-c<x>_<z>.{json,blocks.bin};
//   5. append everything to MANIFEST.json, which records the winning order so
//      later tooling never has to guess again.

const fs = require('node:fs');
const path = require('node:path');
const { ORDERS, decodeStructure, toGrid, encodeGolden, blockAt } =
  require('./lib/mcstructure');

const MARKERS = [
  { at: [0, 0, 0], block: 'minecraft:gold_block' },
  { at: [4, 0, 0], block: 'minecraft:diamond_block' },
  { at: [0, 0, 4], block: 'minecraft:emerald_block' },
  { at: [4, 0, 4], block: 'minecraft:lapis_block' },
  { at: [0, 4, 0], block: 'minecraft:iron_block' },
  { at: [2, 2, 2], block: 'minecraft:redstone_block' },
];

function parseArgs(argv) {
  const args = { out: null, seed: null };
  for (let i = 2; i < argv.length; i++) {
    const arg = argv[i];
    if (arg === '--out') args.out = argv[++i];
    else if (arg === '--seed') args.seed = argv[++i];
    else if (!args.capture) args.capture = arg;
    else throw new Error(`unexpected argument ${arg}`);
  }
  if (!args.capture) throw new Error('capture directory is required');
  return args;
}

function scoreOrder(structureBuffer, order) {
  const decoded = decodeStructure(structureBuffer, { order });
  const grid = toGrid(decoded, { order });
  let hits = 0;
  const detail = [];
  for (const marker of MARKERS) {
    const block = blockAt(grid, ...marker.at);
    const name = block ? block.name : null;
    if (name === marker.block) hits++;
    detail.push({ at: marker.at, expected: marker.block, got: name });
  }
  return { order, hits, detail, size: decoded.size, origin: decoded.origin };
}

function determineOrder(probeBuffer) {
  const candidates = Object.keys(ORDERS).map((order) => scoreOrder(probeBuffer, order));
  candidates.sort((a, b) => b.hits - a.hits);
  const best = candidates[0];
  const tie = candidates.filter((c) => c.hits === best.hits);
  if (best.hits < MARKERS.length) {
    const lines = candidates.map(
      (c) => `  ${c.order}: ${c.hits}/${MARKERS.length}` +
        (c.hits ? ` (${c.detail.filter((d) => d.expected !== d.got).slice(0, 2)
          .map((d) => `${d.at.join(',')} ${d.expected}->${d.got}`).join('; ')})` : '')
    );
    throw new Error(
      `probe could not confirm the block ordering (best ${best.order} = ` +
      `${best.hits}/${MARKERS.length}); refusing to guess.\n${lines.join('\n')}`
    );
  }
  if (tie.length > 1) {
    throw new Error(
      `ambiguous block ordering: ${tie.map((t) => t.order).join(' and ')} both score ` +
      `${best.hits}/${MARKERS.length}; the probe must use markers that break the tie`
    );
  }
  return { order: best.order, scores: candidates.map((c) => ({ order: c.order, hits: c.hits })) };
}

function stackSlices(sliceGrids, yRanges) {
  const [sx] = sliceGrids[0].size; // (sx, sy, sz) per slice; sy is the slice height
  const [, , sz] = sliceGrids[0].size;
  const sy = sliceGrids[0].size[1];
  const totalY = yRanges.reduce((sum, [a, b]) => sum + (b - a + 1), 0);
  for (let i = 1; i < sliceGrids.length; i++) {
    const g = sliceGrids[i];
    if (g.size[0] !== sx || g.size[2] !== sz) throw new Error('slice dimensions disagree');
    if (g.size[1] !== yRanges[i][1] - yRanges[i][0] + 1) {
      throw new Error(`slice ${i} height ${g.size[1]} != ${yRanges[i][1] - yRanges[i][0] + 1}`);
    }
  }
  // Union palette across slices.
  const palette = [];
  const keyOf = (e) => `${e.name}|${JSON.stringify(e.states || {})}`;
  const ids = new Map();
  const intern = (e) => {
    const key = keyOf(e);
    if (ids.has(key)) return ids.get(key);
    ids.set(key, palette.length);
    palette.push(e);
    return ids.get(key);
  };
  const layer0 = new Uint16Array(sx * totalY * sz);
  const remap = sliceGrids.map((g) => g.palette.map(intern));
  let yOffset = 0;
  for (let s = 0; s < sliceGrids.length; s++) {
    const g = sliceGrids[s];
    const height = g.size[1];
    for (let y = 0; y < height; y++) {
      for (let z = 0; z < sz; z++) {
        for (let x = 0; x < sx; x++) {
          const from = (y * sz + z) * sx + x;
          const to = ((y + yOffset) * sz + z) * sx + x;
          layer0[to] = remap[s][g.layer0[from]];
        }
      }
    }
    yOffset += height;
  }
  return { size: [sx, totalY, sz], palette, layer0, layer1: null, hasLayer1: false };
}

function buildGolden(captureDir, outDir, seedOverride) {
  const manifestPath = path.join(captureDir, 'capture.json');
  const capture = JSON.parse(fs.readFileSync(manifestPath, 'utf8'));
  const structuresDir = path.join(captureDir, 'structures');
  const seed = seedOverride || capture.seed;

  const probePath = path.join(structuresDir, 'wp_probe.mcstructure');
  if (!fs.existsSync(probePath)) {
    throw new Error(
      'wp_probe.mcstructure missing: the capture ran without --probe, so the block ' +
      'ordering cannot be established and no golden data can be trusted'
    );
  }
  const { order, scores } = determineOrder(fs.readFileSync(probePath));
  console.log(`block ordering: ${order} (probe scores: ${scores.map((s) => `${s.order}=${s.hits}`).join(' ')})`);

  fs.mkdirSync(outDir, { recursive: true });
  const written = [];
  for (const [cx, cz] of capture.chunks) {
    const names = capture.slices.map((_, i) => `c${cx}_${cz}_y${i}.mcstructure`);
    const grids = [];
    for (let i = 0; i < names.length; i++) {
      const file = path.join(structuresDir, names[i]);
      if (!fs.existsSync(file)) throw new Error(`missing slice ${names[i]}`);
      const decoded = decodeStructure(fs.readFileSync(file), { order });
      // Cross-check: the origin recorded by the server must be where we asked.
      const [ox, oy, oz] = decoded.origin;
      const [ex, ey, ez] = [cx * 16, capture.slices[i][0], cz * 16];
      if (ox !== ex || oy !== ey || oz !== ez) {
        throw new Error(
          `${names[i]}: origin ${decoded.origin.join(',')} but expected ${ex},${ey},${ez}`
        );
      }
      grids.push(toGrid(decoded, { order }));
    }
    const column = stackSlices(grids, capture.slices);
    const label = `${seed}-c${cx}_${cz}`;
    const { header, bytes } = encodeGolden(column, {
      label,
      seed,
      origin: [cx * 16, capture.slices[0][0], cz * 16],
      capture: {
        binarySha256: capture.binary.sha256,
        generatedAt: capture.generatedAt,
        structures: names,
        blockOrdering: order,
      },
    });
    fs.writeFileSync(path.join(outDir, `golden-${label}.json`), `${JSON.stringify(header, null, 2)}\n`);
    fs.writeFileSync(path.join(outDir, `golden-${label}.blocks.bin`), bytes);
    written.push({ label, header, bytes: bytes.length });
    console.log(
      `golden ${label}: ${column.size.join('x')} = ${column.layer0.length} blocks, ` +
      `${bytes.length} B, palette ${column.palette.length}`
    );
  }

  const manifestFile = path.join(outDir, 'MANIFEST.json');
  const manifest = fs.existsSync(manifestFile)
    ? JSON.parse(fs.readFileSync(manifestFile, 'utf8'))
    : { schema: 1, blockOrdering: null, captures: [] };
  manifest.blockOrdering = order;
  manifest.probeScores = scores;
  manifest.updatedAt = new Date().toISOString();
  for (const item of written) {
    const entry = {
      label: item.label,
      seed: String(seed),
      size: item.header.size,
      origin: item.header.origin,
      palette: item.header.palette.length,
      blocks: item.header.blocks,
      binarySha256: item.header.capture.binarySha256,
    };
    const existing = manifest.captures.findIndex((c) => c.label === entry.label);
    if (existing >= 0) manifest.captures[existing] = entry;
    else manifest.captures.push(entry);
  }
  manifest.captures.sort((a, b) => a.label.localeCompare(b.label));
  fs.writeFileSync(manifestFile, `${JSON.stringify(manifest, null, 2)}\n`);
  console.log(`wrote ${manifestFile} (${manifest.captures.length} capture(s))`);
  return manifest;
}

if (require.main === module) {
  let args;
  try {
    args = parseArgs(process.argv);
  } catch (error) {
    console.error(`error: ${error.message}`);
    process.exit(2);
  }
  const out = args.out || path.join(args.capture, 'golden');
  try {
    buildGolden(args.capture, out, args.seed);
  } catch (error) {
    console.error(`build-golden failed: ${error.message}`);
    process.exit(1);
  }
}

module.exports = { buildGolden, determineOrder, stackSlices, MARKERS };
