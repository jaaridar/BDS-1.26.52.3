'use strict';
// Dump a Bedrock world's LevelDB to a portable JSON file.
//
// We cannot rely on `/structure save` producing files (on the dedicated server
// it keeps structures in memory), so the raw database is the ground truth. This
// tool only reads: it opens the database read-only and serialises keys and
// values as hex.
//
//   node tools/worldgen-golden/dump-db.js --db capture/seed-1/server/worlds/golden/db \
//        --out capture/seed-1/db-dump.json [--max-bytes 4000000]
//
// Requires `classic-level` (installed on the runner, not vendored).

const fs = require('node:fs');

// Bedrock chunk keys all start with a one-byte tag; the ones we care about are
// documented in research/proprietary/.../ANALYSIS.md and the Bedrock wiki.
const KEY_TAGS = {
  0x2f: 'SubChunkPrefix',
  0x2b: 'Data3D',
  0x2c: 'Data2D',
  0x2d: 'Data2DLegacy',
  0x2e: 'LegacyTerrain',
  0x30: 'LegacyBlockExtraData',
  0x31: 'BiomeState',
  0x32: 'FinalizedState',
  0x33: 'ConversionData',
  0x34: 'BorderBlocks',
  0x35: 'HardcodedSpawnAreas',
  0x36: 'RandomTicks',
  0x37: 'Checksums',
  0x38: 'UpdateArea',
  0x39: 'MovingBlocks',
  0x3a: 'MovingBlockExtra',
  0x3b: 'PendingTicks',
  0x3c: 'BlockTicks',
  0x3d: 'PreLoadChunk',
  0x3e: 'ChunkVersion',
  0x76: 'PortionProto',
};

function describeKey(key) {
  if (key.length === 0) return 'unknown';
  const tag = key[0];
  const name = KEY_TAGS[tag];
  if (name) return name;
  if (key.length >= 3 && key[0] === 0x2f) return 'SubChunkPrefix';
  // level.dat is stored under a plain "~local_player"/"LevelDB" style key in
  // some versions; anything else is reported verbatim.
  const printable = key.toString('latin1').replace(/[^\x20-\x7e]/g, '.');
  return `other:${printable}`;
}

async function main() {
  const args = { maxBytes: 8 << 20 };
  for (let i = 2; i < process.argv.length; i++) {
    const arg = process.argv[i];
    if (arg === '--db') args.db = process.argv[++i];
    else if (arg === '--out') args.out = process.argv[++i];
    else if (arg === '--max-bytes') args.maxBytes = Number(process.argv[++i]);
    else throw new Error(`unknown argument ${arg}`);
  }
  if (!args.db || !args.out) throw new Error('--db and --out are required');

  let ClassicLevel;
  try {
    ({ ClassicLevel } = require('classic-level'));
  } catch {
    throw new Error(
      'classic-level is not installed; run `npm install --no-save classic-level` first'
    );
  }

  const db = new ClassicLevel(args.db, { keyEncoding: 'buffer', valueEncoding: 'buffer' });
  await db.open({ readOnly: true });

  const entries = [];
  let bytes = 0;
  let skipped = 0;
  const counts = new Map();
  for await (const [key, value] of db.iterator()) {
    const kind = describeKey(key);
    counts.set(kind, (counts.get(kind) || 0) + 1);
    const cost = key.length + value.length;
    // Subchunks and the level metadata are what the decoder needs; skip the
    // bulky unrelated records once the budget is reached so the dump stays
    // small enough to commit.
    const wanted = kind === 'SubChunkPrefix' || kind.startsWith('other') ||
      kind === 'Data3D' || kind === 'Data2D' || kind === 'ChunkVersion' ||
      kind === 'FinalizedState';
    if (!wanted || bytes + cost > args.maxBytes) {
      skipped++;
      continue;
    }
    entries.push({ kind, k: key.toString('hex'), v: value.toString('hex') });
    bytes += cost;
  }
  await db.close();

  const dump = {
    schema: 1,
    source: args.db,
    keyCounts: Object.fromEntries([...counts.entries()].sort()),
    entryCount: entries.length,
    skipped,
    bytes,
    entries,
  };
  fs.writeFileSync(args.out, `${JSON.stringify(dump)}\n`);
  console.log(
    `dumped ${entries.length} entries (${bytes} B of key+value) to ${args.out}; ` +
    `skipped ${skipped}`
  );
  console.log(`key kinds: ${JSON.stringify(dump.keyCounts)}`);
}

if (require.main === module) {
  main().catch((error) => {
    console.error(`dump-db failed: ${error.message}`);
    process.exit(1);
  });
}

module.exports = { describeKey, KEY_TAGS };
