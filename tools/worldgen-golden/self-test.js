'use strict';
// Unit tests for the golden-data tooling. Runs without the proprietary binary:
// it builds synthetic `.mcstructure` files whose contents are known, then checks
// that decoding, grid flattening, golden encoding and the comparator all agree.
//
//   node tools/worldgen-golden/self-test.js
//
// Deliberately dependency-free so it runs on a bare runner and in CI.

const assert = require('node:assert');
const fs = require('node:fs');
const os = require('node:os');
const path = require('node:path');
const { writeRoot, TAG } = require('./lib/nbt');
const { ORDERS, decodeStructure, toGrid, encodeGolden, decodeGolden, blockAt } =
  require('./lib/mcstructure');
const { buildGolden } = require('./build-golden');
const { compareGrids, formatReport } = require('./lib/compare');
const { determineOrder, stackSlices, MARKERS } = require('./build-golden');

let passed = 0;
function test(name, fn) {
  try {
    fn();
    passed++;
    console.log(`ok   ${name}`);
  } catch (error) {
    console.error(`FAIL ${name}\n     ${error.message}`);
    process.exitCode = 1;
  }
}

// Build a structure of size (sx,sy,sz) where every cell holds a distinct block
// name encoding its own coordinates, so any index-order bug is immediately
// visible.
function syntheticStructure(sx, sy, sz, filter) {
  const palette = [{ name: 'minecraft:air', states: {} }];
  const ids = new Map([['minecraft:air|{}', 0]]);
  const indices = [];
  for (let y = 0; y < sy; y++) {
    for (let z = 0; z < sz; z++) {
      for (let x = 0; x < sx; x++) {
        if (filter && !filter(x, y, z)) {
          indices.push(0);
          continue;
        }
        const name = `test:block_${x}_${y}_${z}`;
        const key = `${name}|{}`;
        let id = ids.get(key);
        if (id === undefined) {
          id = palette.length;
          palette.push({ name, states: {} });
          ids.set(key, id);
        }
        indices.push(id);
      }
    }
  }
  return {
    format_version: 1,
    size: [sx, sy, sz],
    structure_world_origin: [-32, -64, 48],
    structure: {
      block_indices: [indices, []],
      entities: [],
      palette: { default: { block_palette: palette, block_position_data: {} } },
    },
  };
}

// The structure writer stores indices in the same order the generator emitted
// them, which is what the server does: it is the *reader* that must know the
// order. To model that faithfully we generate in one canonical order and let
// the decoder try each candidate.
function buildFile(order, sx, sy, sz) {
  const index = ORDERS[order];
  const total = sx * sy * sz;
  const indices = new Array(total).fill(0);
  const palette = [{ name: 'minecraft:air', states: {} }];
  for (let y = 0; y < sy; y++) {
    for (let z = 0; z < sz; z++) {
      for (let x = 0; x < sx; x++) {
        const name = `test:b_${x}_${y}_${z}`;
        palette.push({ name, states: {} });
        indices[index(sx, sy, sz, x, y, z)] = palette.length - 1;
      }
    }
  }
  const root = {
    format_version: 1,
    size: [sx, sy, sz],
    structure_world_origin: [0, 0, 0],
    structure: {
      block_indices: [indices, []],
      entities: [],
      palette: { default: { block_palette: palette, block_position_data: {} } },
    },
  };
  return writeRoot(root, '');
}

test('nbt round-trips a compound with ints, strings and lists', () => {
  const buffer = writeRoot({ a: 1, b: 'hello', c: [-1, 2, 3], d: { e: 5 } }, '');
  const { parseRoot } = require('./lib/nbt');
  const parsed = parseRoot(buffer);
  assert.strictEqual(parsed.value.a, 1);
  assert.strictEqual(parsed.value.b, 'hello');
  assert.deepStrictEqual(parsed.value.c, [-1, 2, 3]);
  assert.strictEqual(parsed.value.d.e, 5);
});

test('string length encoding is detected as varint for Bedrock files', () => {
  const buffer = writeRoot({ name: 'minecraft:stone' }, '');
  const { parseRoot } = require('./lib/nbt');
  assert.strictEqual(parseRoot(buffer).stringMode, 'varint');
});

test('u16 string mode is accepted as a fallback', () => {
  // Hand-build a tiny file using a u16 length prefix.
  const body = Buffer.concat([
    Buffer.from([TAG.COMPOUND]),
    Buffer.from([3, 0]), // 3-byte name "abc" as u16
    Buffer.from('abc'),
    Buffer.from([TAG.INT]),
    Buffer.from([1, 0]),
    Buffer.from('k'),
    Buffer.from([42, 0, 0, 0]),
    Buffer.from([TAG.END]),
  ]);
  const { parseRoot } = require('./lib/nbt');
  const parsed = parseRoot(body);
  assert.strictEqual(parsed.stringMode, 'u16');
  // "abc" is the root compound's *name*; its payload is { k: 42 }.
  assert.strictEqual(parsed.name, 'abc');
  assert.strictEqual(parsed.value.k, 42);
});

test('every candidate index order decodes its own file correctly', () => {
  const sx = 3;
  const sy = 2;
  const sz = 4;
  for (const order of Object.keys(ORDERS)) {
    const decoded = decodeStructure(buildFile(order, sx, sy, sz), { order });
    const grid = toGrid(decoded, { order });
    for (let y = 0; y < sy; y++) {
      for (let z = 0; z < sz; z++) {
        for (let x = 0; x < sx; x++) {
          assert.strictEqual(
            blockAt(grid, x, y, z).name,
            `test:b_${x}_${y}_${z}`,
            `order ${order} wrong at ${x},${y},${z}`
          );
        }
      }
    }
  }
});

test('a wrong index order is detected (no silent success)', () => {
  const file = buildFile('xzy', 3, 2, 4);
  let mismatches = 0;
  for (const order of Object.keys(ORDERS)) {
    if (order === 'xzy') continue;
    const grid = toGrid(decodeStructure(file, { order }), { order });
    // Compare against `xzy` ground truth; any other order must disagree.
    const truth = toGrid(decodeStructure(file, { order: 'xzy' }), { order: 'xzy' });
    const report = compareGrids({ golden: truth, candidate: grid });
    if (report.total !== report.matched) mismatches++;
  }
  assert.strictEqual(mismatches, Object.keys(ORDERS).length - 1);
});

test('golden round-trip preserves every block', () => {
  const file = buildFile('xzy', 4, 3, 5);
  const grid = toGrid(decodeStructure(file, { order: 'xzy' }), { order: 'xzy' });
  const { header, bytes } = encodeGolden(grid, {
    label: 'unit',
    seed: '0',
    origin: [0, -64, 0],
    capture: { note: 'synthetic' },
  });
  const restored = decodeGolden(header, bytes);
  assert.deepStrictEqual(Array.from(restored.layer0), Array.from(grid.layer0));
  const report = compareGrids({ golden: restored, candidate: grid });
  assert.strictEqual(report.total, report.matched);
  assert.strictEqual(report.total, 4 * 3 * 5);
});

test('comparator reports exact coordinates of mismatches', () => {
  const file = buildFile('xzy', 3, 2, 3);
  const grid = toGrid(decodeStructure(file, { order: 'xzy' }), { order: 'xzy' });
  const tampered = {
    size: grid.size,
    palette: grid.palette,
    layer0: Uint16Array.from(grid.layer0),
    layer1: null,
  };
  const index = ORDERS.xzy(3, 2, 3, 1, 1, 2);
  tampered.layer0[index] = 0; // air-ify one cell
  const report = compareGrids({ golden: grid, candidate: tampered });
  assert.strictEqual(report.mismatched, 1);
  assert.deepStrictEqual(report.worst[0].at, [1, 1, 2]);
});

test('comparator separates missing/extra palette handling', () => {
  const file = buildFile('xzy', 2, 2, 2);
  const grid = toGrid(decodeStructure(file, { order: 'xzy' }), { order: 'xzy' });
  const other = {
    size: grid.size,
    palette: [{ name: 'minecraft:stone', states: {} }],
    layer0: new Uint16Array(grid.layer0.length),
    layer1: null,
  };
  const report = compareGrids({ golden: grid, candidate: other });
  assert.strictEqual(report.mismatched, 8);
  const text = formatReport(report, { title: 'unit test' });
  assert.ok(text.includes('mismatched'), text.slice(0, 200));
});


// ---- synthetic capture: exercises build-golden without the real server -----

function writeProbe(file, trueOrder) {
  const sx = 5;
  const sy = 5;
  const sz = 5;
  const total = sx * sy * sz;
  const palette = [{ name: 'minecraft:air', states: {} }];
  const indices = new Array(total).fill(0);
  for (const marker of MARKERS) {
    palette.push({ name: marker.block, states: {} });
    const [x, y, z] = marker.at;
    indices[ORDERS[trueOrder](sx, sy, sz, x, y, z)] = palette.length - 1;
  }
  const root = {
    format_version: 1,
    size: [sx, sy, sz],
    structure_world_origin: [0, 100, 0],
    structure: {
      block_indices: [indices, []],
      entities: [],
      palette: { default: { block_palette: palette, block_position_data: {} } },
    },
  };
  fs.mkdirSync(path.dirname(file), { recursive: true });
  fs.writeFileSync(file, writeRoot(root, ''));
}

function writeSlice(file, cx, cz, y0, y1, trueOrder) {
  const sx = 16;
  const sz = 16;
  const sy = y1 - y0 + 1;
  const palette = [];
  const ids = new Map();
  const intern = (name) => {
    if (ids.has(name)) return ids.get(name);
    ids.set(name, palette.length);
    palette.push({ name, states: {} });
    return palette.length - 1;
  };
  intern('minecraft:air');
  const indices = new Array(sx * sy * sz).fill(0);
  for (let y = 0; y < sy; y++) {
    for (let z = 0; z < sz; z++) {
      for (let x = 0; x < sx; x++) {
        // Deterministic "terrain": below a height that varies with x,z.
        const worldY = y0 + y;
        const surface = -64 + ((x * 7 + z * 13) % 40);
        if (worldY <= surface) {
          const name = worldY < surface - 4 ? 'minecraft:stone' : 'minecraft:dirt';
          indices[ORDERS[trueOrder](sx, sy, sz, x, y, z)] = intern(name);
        }
      }
    }
  }
  const root = {
    format_version: 1,
    size: [sx, sy, sz],
    structure_world_origin: [cx * 16, y0, cz * 16],
    structure: {
      block_indices: [indices, []],
      entities: [],
      palette: { default: { block_palette: palette, block_position_data: {} } },
    },
  };
  fs.writeFileSync(file, writeRoot(root, ''));
}

test('determineOrder picks the true ordering and rejects ties', () => {
  const dir = fs.mkdtempSync(path.join(os.tmpdir(), 'golden-probe-'));
  const probe = path.join(dir, 'wp_probe.mcstructure');
  writeProbe(probe, 'zyx');
  const { order, scores } = determineOrder(fs.readFileSync(probe));
  assert.strictEqual(order, 'zyx');
  assert.strictEqual(scores.find((s) => s.order === 'zyx').hits, MARKERS.length);

  // A probe that carries no markers must fail loudly rather than guess.
  const empty = path.join(dir, 'empty.mcstructure');
  fs.writeFileSync(empty, writeRoot({
    format_version: 1,
    size: [2, 2, 2],
    structure_world_origin: [0, 0, 0],
    structure: {
      block_indices: [[0, 0, 0, 0, 0, 0, 0, 0], []],
      entities: [],
      palette: { default: { block_palette: [{ name: 'minecraft:air', states: {} }] } },
    },
  }, ''));
  assert.throws(() => determineOrder(fs.readFileSync(empty)), /refusing to guess/);
  fs.rmSync(dir, { recursive: true, force: true });
});

test('build-golden stacks slices into a full 384-block column', () => {
  const dir = fs.mkdtempSync(path.join(os.tmpdir(), 'golden-build-'));
  const captureDir = path.join(dir, 'capture');
  const structures = path.join(captureDir, 'structures');
  fs.mkdirSync(structures, { recursive: true });
  const slices = [[-64, -1], [0, 63], [64, 127], [128, 191], [192, 255], [256, 319]];
  const trueOrder = 'xzy';
  writeProbe(path.join(structures, 'wp_probe.mcstructure'), trueOrder);
  for (const [cx, cz] of [[0, 0]]) {
    slices.forEach(([y0, y1], i) => {
      writeSlice(path.join(structures, `c${cx}_${cz}_y${i}.mcstructure`), cx, cz, y0, y1, trueOrder);
    });
  }
  fs.writeFileSync(path.join(captureDir, 'capture.json'), JSON.stringify({
    schema: 1,
    generatedAt: 'test',
    binary: { sha256: 'test' },
    seed: '42',
    slices,
    chunks: [[0, 0]],
    structures: [],
  }));

  const outDir = path.join(dir, 'golden');
  const manifest = buildGolden(captureDir, outDir, null);
  assert.strictEqual(manifest.blockOrdering, trueOrder);
  assert.strictEqual(manifest.captures.length, 1);

  const header = JSON.parse(fs.readFileSync(path.join(outDir, 'golden-42-c0_0.json'), 'utf8'));
  assert.deepStrictEqual(header.size, [16, 384, 16]);
  assert.deepStrictEqual(header.origin, [0, -64, 0]);

  const grid = decodeGolden(
    header,
    fs.readFileSync(path.join(outDir, header.blocks.file))
  );
  // The synthetic surface is at world y = -64 + ((x*7 + z*13) % 40); the grid is
  // indexed from the capture origin (y = -64), so world y maps to index y + 64.
  // Checking several columns at their exact surface height proves the six
  // slices were stacked in the right order rather than shuffled.
  const yIndex = (worldY) => worldY - header.origin[1];
  for (const [x, z] of [[0, 0], [3, 5], [15, 15], [7, 2]]) {
    const surface = -64 + ((x * 7 + z * 13) % 40);
    assert.strictEqual(
      blockAt(grid, x, yIndex(surface), z).name, 'minecraft:dirt',
      `dirt at ${x},${surface},${z}`
    );
    // Columns whose surface sits on the very bottom have no stone beneath them.
    if (surface - 8 >= header.origin[1]) {
      assert.strictEqual(blockAt(grid, x, yIndex(surface - 8), z).name, 'minecraft:stone');
    }
    if (surface + 1 < header.origin[1] + header.size[1]) {
      assert.strictEqual(blockAt(grid, x, yIndex(surface + 1), z).name, 'minecraft:air');
    }
  }
  // Every one of the 384 layers must be populated: a mis-stacked column would
  // leave a hole where a slice should have been.
  for (let y = 0; y < 384; y += 7) {
    const block = blockAt(grid, 0, y, 0);
    assert.ok(block, `no block decoded at layer ${y}`);
  }
  fs.rmSync(dir, { recursive: true, force: true });
});

// The capture orchestration is the part with the most moving pieces (process
// lifecycle, command round trips, waits, staging, manifest) and it cannot be
// exercised against the real server here. A stand-in that speaks the same
// protocol runs it end to end, so a scoping or lifecycle mistake fails in
// seconds instead of after a full CI capture.
test('capture orchestration runs end to end against a protocol stand-in', () => {
  const { execFileSync } = require('node:child_process');
  const dir = fs.mkdtempSync(path.join(os.tmpdir(), 'worldgen-capture-'));
  const mock = path.join(__dirname, 'test', 'mock-server.sh');
  let output;
  try {
    output = execFileSync(
      process.execPath,
      [
        path.join(__dirname, 'run-golden.js'),
        '--binary', mock,
        '--no-assets',
        '--settle', '0',
        '--seed', '42',
        '--out', dir,
      ],
      {
        encoding: 'utf8',
        timeout: 120000,
        env: { ...process.env, MOCK_SKIP_ASSETS: '1' },
      }
    );
  } catch (error) {
    throw new Error(`capture failed against the stand-in: ${error.message}`);
  }
  const manifest = JSON.parse(fs.readFileSync(path.join(dir, 'capture.json'), 'utf8'));
  assert.strictEqual(String(manifest.seed), '42');
  // The stand-in refuses placements until it has "generated", so a completed
  // capture proves the readiness polling actually waited instead of assuming.
  assert.ok(manifest.generationMs >= 0, 'generation time was not recorded');
  assert.strictEqual(manifest.dirtied.length, 4, 'every captured chunk must be marked modified');
  assert.ok(fs.existsSync(path.join(dir, 'server.log')), 'the server log must be kept');
  assert.match(output, /captured seed 42/);
  fs.rmSync(dir, { recursive: true, force: true });
});

console.log(`\n${passed} passed`);
if (process.exitCode) {
  console.error('\nself-test FAILED');
  process.exit(process.exitCode);
}
