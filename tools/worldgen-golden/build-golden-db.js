'use strict';
// Build canonical golden columns from a dumped world database.
//
//   node tools/worldgen-golden/build-golden-db.js capture/seed-1/db-dump.json \
//        --out research/proprietary/bds-1.26.52.3/golden \
//        [--capture capture/seed-1] [--chunks 0,0 1,0 0,1 1,1]
//
// The output is the same container `verify.js` already understands, so a
// candidate implementation is judged by comparing block grids, not by trusting
// logs or screenshots.

const fs = require('node:fs');
const path = require('node:path');
const { parseDump, buildColumn, blockAt } = require('./lib/chunk-db');
const { encodeGolden } = require('./lib/mcstructure');

function parseArgs(argv) {
  const args = { out: null, capture: null, chunks: null, probe: null, also: [] };
  for (let i = 0; i < argv.length; i++) {
    const arg = argv[i];
    if (arg === '--out') args.out = argv[++i];
    else if (arg === '--capture') args.capture = argv[++i];
    else if (arg === '--also') args.also.push(argv[++i]);
    else if (arg === '--probe') {
      args.probe = argv[++i].split(',').map(Number);
      if (args.probe.length !== 3 || args.probe.some((n) => !Number.isFinite(n))) {
        throw new Error('--probe expects x,y,z');
      }
    } else if (arg === '--chunks') {
      args.chunks = [];
      while (argv[i + 1] && !argv[i + 1].startsWith('--')) {
        const [x, z] = argv[++i].split(',').map(Number);
        args.chunks.push([x, z]);
      }
    } else if (arg.startsWith('--')) {
      throw new Error(`unknown argument ${arg}`);
    } else {
      args.dump = arg;
    }
  }
  if (!args.dump || !args.out) throw new Error('usage: build-golden-db.js <dump.json> --out <dir>');
  return args;
}

function loadCaptureMeta(captureDir) {
  if (!captureDir) return {};
  const file = path.join(captureDir, 'capture.json');
  if (!fs.existsSync(file)) return {};
  const capture = JSON.parse(fs.readFileSync(file, 'utf8'));
  return {
    binarySha256: capture.binary && capture.binary.sha256,
    generatedAt: capture.generatedAt,
    seed: capture.seed,
  };
}

function main() {
  const args = parseArgs(process.argv.slice(2));
  const parsed = parseDump(fs.readFileSync(args.dump, 'utf8'));
  const capture = loadCaptureMeta(args.capture);
  const seed = capture.seed !== undefined ? capture.seed : 'unknown';

  fs.mkdirSync(args.out, { recursive: true });

  const available = [...parsed.chunks.keys()].map((id) => id.split(',').map(Number));
  const requested = args.chunks || available;
  const written = [];
  const skipped = [];

  const extraDumps = args.also.map((file) => parseDump(fs.readFileSync(file, 'utf8')));

  for (const [cx, cz] of requested) {
    const id = `${cx},${cz}`;
    if (!parsed.chunks.has(id)) {
      skipped.push(id);
      console.warn(`chunk ${id}: not in the database, skipping`);
      continue;
    }
    const primary = buildColumn(parsed, cx, cz);
    const columns = [primary];
    let compared = 0;
    for (const extra of extraDumps) {
      if (!extra.chunks.has(id)) {
        // A capture from a different chunk base is not evidence about this
        // chunk, so it is skipped rather than treated as disagreement.
        console.warn(`chunk ${id}: absent from an extra capture, ignoring that capture`);
        continue;
      }
      columns.push(buildColumn(extra, cx, cz));
      compared++;
    }

    // Block-level stability measured across independent captures of the same
    // seed. BDS reproduces terrain exactly but decorates caves and surfaces with
    // features whose placement is not stable between runs, so only blocks that
    // every capture agrees on may be demanded of an implementation; the rest are
    // recorded with the variants that were actually observed.
    const keyOf = (column, index) => {
      const entry = column.palette[column.layer0[index]];
      const second = column.palette[column.layer1[index]];
      return `${entry.name}|${JSON.stringify(entry.states || {})}|` +
        `${second.name}|${JSON.stringify(second.states || {})}`;
    };
    const total = primary.layer0.length;
    const variantsAt = (i) => {
      const seen = new Set(columns.map((c) => keyOf(c, i)));
      return [...seen].map((key) => {
        const [l0, , l1] = key.split('|');
        return { layer0: l0, layer1: l1 };
      });
    };
    const unstable = {};
    if (columns.length >= 2) {
      for (let i = 0; i < total; i++) {
        if (variantsAt(i).length > 1) unstable[i] = variantsAt(i);
      }
    }

    const stableCount = total - Object.keys(unstable).length;

    const label = `${seed}-c${cx}_${cz}`;
    const { header, bytes, layer1Bytes } = encodeGolden(primary, {
      label,
      seed,
      origin: primary.origin,
      capture: {
        binarySha256: capture.binarySha256 || null,
        generatedAt: capture.generatedAt || null,
        source: 'leveldb',
        database: path.basename(args.dump),
        comparedCaptures: 1 + compared,
      },
    });
    header.stability = {
      stableBlocks: stableCount,
      unstableBlocks: Object.keys(unstable).length,
      file: `golden-${label}.unstable.json`,
      note:
        'Blocks listed in `file` are not reproducible by BDS itself across ' +
        'captures of the same seed; a candidate must produce one of the listed ' +
        'variants there. Every other block must match exactly.',
    };
    fs.writeFileSync(path.join(args.out, `golden-${label}.json`), `${JSON.stringify(header, null, 2)}\n`);
    fs.writeFileSync(path.join(args.out, `golden-${label}.blocks.bin`), bytes);
    if (layer1Bytes) {
      fs.writeFileSync(path.join(args.out, `golden-${label}.layer1.bin`), layer1Bytes);
    }
    fs.writeFileSync(path.join(args.out, `golden-${label}.unstable.json`), `${JSON.stringify(unstable)}\n`);
    written.push({ label, header, bytes: bytes.length });
    console.log(
      `golden ${label}: ${primary.size.join('x')} = ${total} blocks, ${bytes.length} B, ` +
      `palette ${primary.palette.length}, layers ${layer1Bytes ? 2 : 1}, ` +
      `stable ${stableCount}, unstable ${total - stableCount}`
    );
  }

  const manifestFile = path.join(args.out, 'MANIFEST.json');
  const manifest = fs.existsSync(manifestFile)
    ? JSON.parse(fs.readFileSync(manifestFile, 'utf8'))
    : { schema: 1, captures: [] };
  manifest.blockOrdering = 'x*256 + z*16 + y (y fastest), proven by the marker probe';
  manifest.updatedAt = new Date().toISOString();
  manifest.columns = manifest.columns || [];
  for (const item of written) {
    const entry = {
      label: item.label,
      seed: String(seed),
      size: item.header.size,
      origin: item.header.origin,
      palette: item.header.palette.length,
      blocks: item.header.blocks,
      binarySha256: item.header.capture.binarySha256,
      source: 'leveldb',
    };
    const existing = manifest.columns.findIndex((c) => c.label === entry.label);
    if (existing >= 0) manifest.columns[existing] = entry;
    else manifest.columns.push(entry);
  }
  // Drop columns whose data is no longer on disk (e.g. captured from a different
  // chunk base). A manifest entry without its blocks.bin would make verify.js
  // demand a candidate it can never match.
  const before = manifest.columns.length;
  manifest.columns = manifest.columns.filter((c) =>
    fs.existsSync(path.join(args.out, c.blocks.file)) &&
    (!c.blocks.file1 || fs.existsSync(path.join(args.out, c.blocks.file1)))
  );
  if (manifest.columns.length !== before) {
    console.log(`pruned ${before - manifest.columns.length} stale manifest column(s)`);
  }
  if (skipped.length) manifest.missingChunks = skipped;
  fs.writeFileSync(manifestFile, `${JSON.stringify(manifest, null, 2)}\n`);
  console.log(`\nwrote ${written.length} column(s) to ${args.out}; skipped ${skipped.length}`);

  // The probe must survive into the golden data, otherwise the ordering claim is
  // unsupported. Only assert this when the probe chunk was built.
  const probe = args.probe || [0, 100, 0];
  const probeChunk = [Math.floor(probe[0] / 16), Math.floor(probe[2] / 16)];
  if (written.some((w) => w.label === `${seed}-c${probeChunk[0]}_${probeChunk[1]}`)) {
    const column = buildColumn(parsed, probeChunk[0], probeChunk[1]);
    const gold = blockAt(
      column,
      probe[0] - probeChunk[0] * 16,
      probe[1],
      probe[2] - probeChunk[1] * 16
    );
    if (!gold || gold.name !== 'minecraft:gold_block') {
      throw new Error(
        `the probe marker is missing at ${probe.join(',')}, so the reported block ` +
        'ordering is not backed by this capture'
      );
    }
    console.log(`probe marker present at ${probe.join(',')}: ordering claim is supported`);
  }
  return 0;
}

if (require.main === module) {
  try {
    process.exit(main());
  } catch (error) {
    console.error(`build-golden-db failed: ${error.message}`);
    process.exit(1);
  }
}
