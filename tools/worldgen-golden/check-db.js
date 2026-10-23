'use strict';
// Validates the database decoder against a real capture.
//
// Two independent checks, both from the actual server output:
//   1. every subchunk value must decode with the palette consuming the buffer
//      exactly and every packed index inside its palette (enforced by the
//      decoder, so a misread layout cannot pass);
//   2. the marker pocket written by the in-game commands must appear at exactly
//      the coordinates it was written to. This is what pins the bit packing and
//      the block index order — it is an oracle, not a plausibility check.
//
//   node tools/worldgen-golden/check-db.js <dump.json> [--probe 0,100,0]
//
// Exit code 0 when every check passes.

const fs = require('node:fs');
const path = require('node:path');
const { parseDump, buildColumn, blockAt } = require('./lib/chunk-db');

// The probe written by run-golden.js: 5x5x5 of air with six markers.
// Offsets are relative to the probe origin, which is (0,100,0) by default.
const PROBE_PATTERN = [
  { offset: [0, 0, 0], block: 'minecraft:gold_block' },
  { offset: [4, 0, 0], block: 'minecraft:diamond_block' },
  { offset: [0, 0, 4], block: 'minecraft:emerald_block' },
  { offset: [4, 0, 4], block: 'minecraft:lapis_block' },
  { offset: [0, 4, 0], block: 'minecraft:iron_block' },
  { offset: [2, 2, 2], block: 'minecraft:redstone_block' },
];

function main() {
  const args = process.argv.slice(2);
  const file = args[0];
  if (!file) {
    console.error('usage: check-db.js <dump.json> [--probe x,y,z]');
    return 2;
  }
  const probeArg = args.includes('--probe') ? args[args.indexOf('--probe') + 1] : '0,100,0';
  const origin = probeArg.split(',').map(Number);

  const parsed = parseDump(fs.readFileSync(file, 'utf8'));
  const chunkCount = parsed.chunks.size;
  let subchunkCount = 0;
  for (const chunk of parsed.chunks.values()) subchunkCount += chunk.subchunks.size;
  console.log(`dump ${path.basename(file)}: ${chunkCount} chunks, ${subchunkCount} subchunks`);
  console.log(`all subchunks decoded with exact buffer consumption and in-range indices`);

  const failures = [];
  const probeChunk = [Math.floor(origin[0] / 16), Math.floor(origin[2] / 16)];
  const column = buildColumn(parsed, probeChunk[0], probeChunk[1]);
  for (const { offset, block } of PROBE_PATTERN) {
    const x = origin[0] + offset[0] - probeChunk[0] * 16;
    const y = origin[1] + offset[1];
    const z = origin[2] + offset[2] - probeChunk[1] * 16;
    const found = blockAt(column, x, y, z);
    const got = found ? found.name : null;
    const ok = got === block;
    console.log(
      `  ${ok ? 'ok  ' : 'FAIL'} (${origin[0] + offset[0]}, ${y}, ${origin[2] + offset[2]}) ` +
      `expected ${block}, found ${got}`
    );
    if (!ok) failures.push(`${block} missing at ${origin[0] + offset[0]},${y},${origin[2] + offset[2]}`);
  }

  if (failures.length) {
    console.error(`\n${failures.length} marker(s) did not match; the decoder is wrong or the ` +
      'capture is not the run that placed the probe.');
    return 1;
  }
  console.log(`\nall ${PROBE_PATTERN.length} markers reproduced exactly`);
  return 0;
}

if (require.main === module) process.exit(main());

module.exports = { PROBE_PATTERN };
