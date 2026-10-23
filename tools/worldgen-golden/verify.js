'use strict';
// Compare a candidate world-gen implementation against the golden captures.
//
// A "candidate" can be:
//   * another capture directory (another run of the official server), which is
//     how the harness proves its own determinism end to end, or
//   * a directory of golden-format files produced by OpenBDS' generator
//     (see tools/worldgen-golden/lib/mcstructure.js for the format).
//
//   node tools/worldgen-golden/verify.js \
//        --golden research/proprietary/bds-1.26.52.3/golden \
//        --candidate capture/seed-12345 \
//        [--ignore-air] [--write-report out.md] [--require-exact]
//
// Exit code 0 when the chosen threshold is met, 1 otherwise, 2 on bad input —
// so it can gate CI without a wrapper script.

const fs = require('node:fs');
const path = require('node:path');
const crypto = require('node:crypto');
const { decodeGolden } = require('./lib/mcstructure');
const { compareGrids, formatReport } = require('./lib/compare');

function parseArgs(argv) {
  const args = { ignoreAir: false, requireExact: false, writeReport: null, threshold: null };
  for (let i = 2; i < argv.length; i++) {
    const arg = argv[i];
    switch (arg) {
      case '--golden': args.golden = argv[++i]; break;
      case '--candidate': args.candidate = argv[++i]; break;
      case '--ignore-air': args.ignoreAir = true; break;
      case '--require-exact': args.requireExact = true; break;
      case '--threshold': args.threshold = Number(argv[++i]); break;
      case '--write-report': args.writeReport = argv[++i]; break;
      case '--label': args.labelFilter = new RegExp(argv[++i]); break;
      default: throw new Error(`unknown argument ${arg}`);
    }
  }
  if (!args.golden || !args.candidate) throw new Error('--golden and --candidate are required');
  return args;
}

// Load every golden grid in a directory (optionally only those matching a label).
function loadGoldenSet(dir, filter) {
  const manifestPath = path.join(dir, 'MANIFEST.json');
  const manifest = fs.existsSync(manifestPath)
    ? JSON.parse(fs.readFileSync(manifestPath, 'utf8'))
    : null;
  // Newer manifests record `columns` (built from the world database); older
  // ones recorded `captures` (built from structure files). Accept either.
  const recorded = manifest ? [...(manifest.captures || []), ...(manifest.columns || [])] : [];
  const labels = manifest && recorded.length
    ? [...new Set(recorded.map((c) => c.label))]
    : fs.readdirSync(dir)
      .filter((f) => f.startsWith('golden-') && f.endsWith('.json'))
      .map((f) => f.replace(/^golden-/, '').replace(/\.json$/, ''));
  const selected = filter ? labels.filter((l) => filter.test(l)) : labels;
  if (selected.length === 0) throw new Error(`no golden captures in ${dir}`);
  return selected.map((label) => {
    const headerPath = path.join(dir, `golden-${label}.json`);
    const header = JSON.parse(fs.readFileSync(headerPath, 'utf8'));
    const blocksPath = path.join(dir, header.blocks.file);
    const blocks = fs.readFileSync(blocksPath);
    const expectedSha = header.blocks.sha256;
    const actualSha = crypto.createHash('sha256').update(blocks).digest('hex');
    if (expectedSha && expectedSha !== actualSha) {
      throw new Error(`${label}: blocks.bin sha256 mismatch (file is corrupt or truncated)`);
    }
    let layer1 = null;
    let unstable = null;
    if (header.blocks.file1 && fs.existsSync(path.join(dir, header.blocks.file1))) {
      layer1 = fs.readFileSync(path.join(dir, header.blocks.file1));
    }
    if (header.stability && header.stability.file) {
      const file = path.join(dir, header.stability.file);
      if (!fs.existsSync(file)) {
        throw new Error(`${label}: header refers to ${header.stability.file} but it is missing`);
      }
      unstable = JSON.parse(fs.readFileSync(file, 'utf8'));
    }
    return { label, header, grid: decodeGolden(header, blocks, layer1), unstable };
  });
}

// Candidates are golden-format files with a different prefix, so a capture can
// be re-encoded and compared directly.
function loadCandidate(dir, label) {
  const headerPath = path.join(dir, `golden-${label}.json`);
  if (!fs.existsSync(headerPath)) return null;
  const header = JSON.parse(fs.readFileSync(headerPath, 'utf8'));
  const blocks = fs.readFileSync(path.join(dir, header.blocks.file));
  const layer1 = header.blocks.file1 && fs.existsSync(path.join(dir, header.blocks.file1))
    ? fs.readFileSync(path.join(dir, header.blocks.file1))
    : null;
  return decodeGolden(header, blocks, layer1);
}

function main() {
  let args;
  try {
    args = parseArgs(process.argv);
  } catch (error) {
    console.error(`error: ${error.message}`);
    process.exit(2);
  }

  const goldens = loadGoldenSet(args.golden, args.labelFilter);
  const reports = [];
  let failures = 0;
  for (const golden of goldens) {
    const candidate = loadCandidate(args.candidate, golden.label);
    if (!candidate) {
      console.error(`missing candidate for ${golden.label}`);
      failures++;
      continue;
    }
    const report = compareGrids({
      golden: golden.grid,
      candidate,
      ignoreAir: args.ignoreAir,
      unstable: golden.unstable,
    });
    report.label = golden.label;
    reports.push(report);
    const ok = args.requireExact ? report.mismatched === 0 : true;
    if (!ok) failures++;
    console.log(
      `${golden.label}: ${report.matched}/${report.matched + report.mismatched} blocks ` +
      `(${(report.accuracy * 100).toFixed(4)}%)` +
      (args.requireExact ? (ok ? ' exact' : ' NOT EXACT') : '')
    );
    if (args.threshold !== null && report.accuracy < args.threshold) {
      console.error(`  below threshold ${args.threshold}`);
      failures++;
    }
  }

  if (args.writeReport) {
    const parts = reports.map((report) =>
      formatReport(report, { title: `worldgen comparison — ${report.label}` }));
    const summary = [
      '# Golden comparison summary',
      '',
      `- golden set: \`${args.golden}\``,
      `- candidate: \`${args.candidate}\``,
      `- captures compared: ${reports.length}`,
      `- total blocks: ${reports.reduce((n, r) => n + r.total, 0).toLocaleString()}`,
      `- total mismatches: ${reports.reduce((n, r) => n + r.mismatched, 0).toLocaleString()}`,
      '',
      ...parts,
    ].join('\n');
    fs.writeFileSync(args.writeReport, `${summary}\n`);
    console.log(`wrote ${args.writeReport}`);
  }

  process.exit(failures ? 1 : 0);
}

if (require.main === module) main();

module.exports = { loadGoldenSet, loadCandidate };
