'use strict';
// Answer "what block is at (x, y, z)?" offline, from verified golden data.
//
// This is NOT a world generator. It can only answer inside the regions that
// were captured from the real server (see `--info`). Every value it returns is
// the block the official server actually produced, proven by
// research/proprietary/bds-1.26.52.3/golden/CAPTURE-FINDINGS.md.
//
// Usage:
//   node tools/worldgen-golden/lookup.js --info
//   node tools/worldgen-golden/lookup.js --x 2048 --y 100 --z 2048
//   node tools/worldgen-golden/lookup.js --column 2050 2051
//   node tools/worldgen-golden/lookup.js --area 2048 -60 2048 2051 -56 2051

const fs = require('node:fs');
const path = require('node:path');

const DEFAULT_GOLDEN = path.resolve(
  __dirname, '..', '..', 'research', 'proprietary', 'bds-1.26.52.3', 'golden'
);

function loadGolden(dir) {
  const manifestFile = path.join(dir, 'MANIFEST.json');
  if (!fs.existsSync(manifestFile)) {
    throw new Error(`no MANIFEST.json in ${dir}; capture data is missing`);
  }
  const manifest = JSON.parse(fs.readFileSync(manifestFile, 'utf8'));
  const columns = [];
  for (const entry of manifest.columns || []) {
    const headerFile = path.join(dir, `golden-${entry.label}.json`);
    if (!fs.existsSync(headerFile)) continue;
    const header = JSON.parse(fs.readFileSync(headerFile, 'utf8'));
    const blocks = fs.readFileSync(path.join(dir, header.blocks.file));
    const layer1File = header.blocks.file1 ? path.join(dir, header.blocks.file1) : null;
    const layer1 = layer1File && fs.existsSync(layer1File)
      ? fs.readFileSync(layer1File)
      : null;
    // Measured-unstable positions: the server itself does not reproduce these.
    let unstable = null;
    if (header.stability && header.stability.file) {
      const file = path.join(dir, header.stability.file);
      if (fs.existsSync(file)) unstable = JSON.parse(fs.readFileSync(file, 'utf8'));
    }
    const [sx, sy, sz] = header.size;
    columns.push({
      label: header.label,
      seed: header.seed,
      origin: header.origin,
      size: header.size,
      palette: header.palette,
      layer0: blocks,
      layer1,
      count: sx * sy * sz,
      unstable,
    });
  }
  return columns;
}

function describeStates(states) {
  const keys = Object.keys(states || {});
  if (!keys.length) return '';
  return `{${keys.map((k) => `${k}=${states[k]}`).join(',')}}`;
}

function blockAt(column, x, y, z) {
  const [sx, sy, sz] = column.size;
  const [ox, oy, oz] = column.origin;
  const lx = x - ox;
  const ly = y - oy;
  const lz = z - oz;
  if (lx < 0 || ly < 0 || lz < 0 || lx >= sx || ly >= sy || lz >= sz) return null;
  const index = (ly * sz + lz) * sx + lx;
  const id = column.layer0.readUInt16LE(index * 2);
  const entry = column.palette[id];
  let second = null;
  if (column.layer1) {
    const id1 = column.layer1.readUInt16LE(index * 2);
    const entry1 = column.palette[id1];
    if (entry1 && entry1.name !== 'minecraft:air') second = entry1;
  }
  const variants = column.unstable ? column.unstable[String(index)] : null;
  return {
    name: entry ? entry.name : `<palette#${id}>`,
    states: entry ? entry.states : {},
    second,
    unstable: variants || null,
  };
}

function findColumn(columns, x, z) {
  for (const column of columns) {
    const [ox, , oz] = column.origin;
    const [sx, , sz] = column.size;
    if (x >= ox && x < ox + sx && z >= oz && z < oz + sz) return column;
  }
  return null;
}

function format(value) {
  if (!value) return '(outside captured data)';
  let out = `${value.name}${describeStates(value.states)}`;
  if (value.second) out += ` + ${value.second.name}${describeStates(value.second.states)}`;
  if (value.unstable) {
    const names = value.unstable.map((v) => v.layer0).join(' | ');
    out += `   [server varies here; also seen: ${names}]`;
  }
  return out;
}

function main() {
  const argv = process.argv.slice(2);
  const args = { dir: DEFAULT_GOLDEN };
  for (let i = 0; i < argv.length; i++) {
    const a = argv[i];
    if (a === '--golden') args.dir = path.resolve(argv[++i]);
    else if (a === '--seed') args.seed = String(argv[++i]);
    else if (a === '--info') args.info = true;
    else if (a === '--x') args.x = Number(argv[++i]);
    else if (a === '--y') args.y = Number(argv[++i]);
    else if (a === '--z') args.z = Number(argv[++i]);
    else if (a === '--column') args.column = [Number(argv[++i]), Number(argv[++i])];
    else if (a === '--area') args.area = argv.slice(i + 1, i + 7).map(Number), i += 6;
    else throw new Error(`unknown argument ${a}`);
  }

  let columns = loadGolden(args.dir);
  if (!columns.length) throw new Error(`no golden columns in ${args.dir}`);
  if (args.seed !== undefined) {
    columns = columns.filter((c) => String(c.seed) === args.seed);
    if (!columns.length) {
      const seeds = [...new Set(loadGolden(args.dir).map((c) => String(c.seed)))];
      throw new Error(
        `seed ${args.seed} has not been captured; captured seed(s): ${seeds.join(', ')}`
      );
    }
  }

  if (args.info || argv.length === 0) {
    console.log('Offline lookup over verified golden data (no server needed).\n');
    const seeds = [...new Set(columns.map((c) => String(c.seed)))];
    console.log(`  captured seed(s): ${seeds.join(', ')}`);
    console.log('  pick one with --seed <n>\n');
    for (const c of columns) {
      const [ox, oy, oz] = c.origin;
      const [sx, sy, sz] = c.size;
      const unstable = c.unstable ? Object.keys(c.unstable).length : 0;
      console.log(
        `  [seed ${c.seed}] ${c.label}: x ${ox}..${ox + sx - 1}, y ${oy}..${oy + sy - 1}, ` +
        `z ${oz}..${oz + sz - 1}  (${c.size.join('x')} = ${c.count} blocks, ` +
        `${unstable} server-unstable)`
      );
    }
    const total = columns.reduce((n, c) => n + c.count, 0);
    console.log(`\n  ${columns.length} column(s), ${total} verified blocks.`);
    console.log('  Outside these ranges this tool cannot answer: that needs a generator.');
    return 0;
  }

  if (args.x !== undefined) {
    if ([args.x, args.y, args.z].some((n) => !Number.isFinite(n))) {
      throw new Error('--x, --y and --z are all required');
    }
    const column = findColumn(columns, args.x, args.z);
    if (!column) {
      console.error(
        `(${args.x}, ${args.y}, ${args.z}) is outside every captured column; ` +
        'run --info to see the covered ranges'
      );
      return 1;
    }
    console.log(`${format(blockAt(column, args.x, args.y, args.z))}`);
    return 0;
  }

  if (args.column) {
    const [x, z] = args.column;
    const column = findColumn(columns, x, z);
    if (!column) {
      console.error(`column (${x}, ${z}) is not captured; run --info`);
      return 1;
    }
    const [ox, oy, oz] = column.origin;
    const [sx, sy, sz] = column.size;
    console.log(`column x=${x} z=${z} (${oy}..${oy + sy - 1})`);
    // Print the topmost non-air block, then the vertical profile compressed into
    // runs so a whole column is readable.
    let top = null;
    for (let y = oy + sy - 1; y >= oy; y--) {
      const v = blockAt(column, ox + (x - ox), y, oz + (z - oz));
      if (v && v.name !== 'minecraft:air') { top = { y, v }; break; }
    }
    if (top) console.log(`  surface: y=${top.y} ${format(top.v)}`);
    let run = null;
    for (let y = oy; y < oy + sy; y++) {
      const v = blockAt(column, x, y, z);
      const key = format(v);
      if (run && run.key === key) { run.to = y; continue; }
      if (run) console.log(`  y ${run.from}..${run.to}: ${run.key}`);
      run = { from: y, to: y, key };
    }
    if (run) console.log(`  y ${run.from}..${run.to}: ${run.key}`);
    return 0;
  }

  if (args.area) {
    const [x0, y0, z0, x1, y1, z1] = args.area;
    for (let y = y0; y <= y1; y++) {
      console.log(`y=${y}`);
      for (let z = z0; z <= z1; z++) {
        const cells = [];
        for (let x = x0; x <= x1; x++) {
          const column = findColumn(columns, x, z);
          const v = column ? blockAt(column, x, y, z) : null;
          cells.push(v ? v.name.replace('minecraft:', '').slice(0, 12) : '?');
        }
        console.log(`  z=${z}: ${cells.join(' | ')}`);
      }
    }
    return 0;
  }

  console.log('nothing requested; try --info');
  return 2;
}

if (require.main === module) {
  try {
    process.exit(main());
  } catch (error) {
    console.error(`lookup failed: ${error.message}`);
    process.exit(2);
  }
}

module.exports = { loadGolden, blockAt, format };
