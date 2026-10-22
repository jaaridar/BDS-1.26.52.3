'use strict';
// Drives the official bedrock_server binary to produce *server-authored* ground
// truth: it starts the server with a fixed seed, forces chunk generation with a
// ticking area, and saves regions with the in-game `structure save` command.
//
// Nothing here executes anything but the server itself, and the server is only
// asked to do what a normal admin would do. The interesting part is that the
// output is produced by Mojang's code, not by ours, so it is usable as an
// oracle even though we cannot read that code.
//
//   node tools/worldgen-golden/run-golden.js --binary ./bedrock_server \
//        --seed 12345 --out capture/seed-12345
//
// Runs on a Linux x86-64 host with the server's shared libraries next to the
// binary (the release zip layout).

const { spawn } = require('node:child_process');
const fs = require('node:fs');
const path = require('node:path');
const crypto = require('node:crypto');

function parseArgs(argv) {
  const args = { seed: '0', out: 'capture', timeout: 600, verbose: false, probe: true };
  for (let i = 2; i < argv.length; i++) {
    const arg = argv[i];
    const next = () => {
      const value = argv[++i];
      if (value === undefined) throw new Error(`${arg} needs a value`);
      return value;
    };
    switch (arg) {
      case '--binary': args.binary = next(); break;
      case '--seed': args.seed = next(); break;
      case '--out': args.out = next(); break;
      case '--timeout': args.timeout = Number(next()); break;
      case '--assets': args.assets = next(); break;
      case '--no-probe': args.probe = false; break;
      case '--verbose': args.verbose = true; break;
      case '--help':
        console.log(fs.readFileSync(__filename, 'utf8').split('\n').slice(1, 14).join('\n'));
        process.exit(0);
        break;
      default: throw new Error(`unknown argument ${arg}`);
    }
  }
  if (!args.binary) throw new Error('--binary is required');
  return args;
}

const sleep = (ms) => new Promise((resolve) => setTimeout(resolve, ms));

function sha256(file) {
  const hash = crypto.createHash('sha256');
  const fd = fs.openSync(file, 'r');
  const buffer = Buffer.alloc(1 << 20);
  let read;
  while ((read = fs.readSync(fd, buffer, 0, buffer.length, null)) > 0) {
    hash.update(buffer.subarray(0, read));
  }
  fs.closeSync(fd);
  return hash.digest('hex');
}

// Server properties tuned for reproducible, quiet, single-threaded capture.
function propertiesFor(seed, levelName) {
  return [
    'server-name=BDS golden capture',
    'gamemode=creative',
    'difficulty=peaceful',
    'allow-cheats=true',
    'online-mode=false',
    'allow-list=false',
    'player-idle-timeout=0',
    'max-players=1',
    'view-distance=5',
    'tick-distance=4',
    'level-name=' + levelName,
    'level-seed=' + seed,
    'default-player-permission-level=operator',
    'texturepack-required=false',
    'server-port=19132',
    'server-portv6=19133',
    'enable-lan-visibility=false',
    'compression-threshold=1',
    'client-side-chunk-generation-enabled=false',
    'block-network-ids-are-hashes=true',
    'sync-server-client-ticks=false',
    '',
  ].join('\n');
}

class Server {
  constructor(binary, cwd, verbose, logFile) {
    this.binary = binary;
    this.cwd = cwd;
    this.verbose = verbose;
    this.lines = [];
    this.waiters = [];
    // Written incrementally: if the server crashes during startup there is
    // still a log to read afterwards.
    this.logFile = logFile;
    this.logStream = logFile ? fs.createWriteStream(logFile, { flags: 'a' }) : null;
  }

  start() {
    this.child = spawn(this.binary, [], {
      cwd: this.cwd,
      env: {
        ...process.env,
        LD_LIBRARY_PATH: [this.cwd, process.env.LD_LIBRARY_PATH || ''].filter(Boolean).join(':'),
      },
      stdio: ['pipe', 'pipe', 'pipe'],
    });
    const onData = (chunk) => {
      const text = chunk.toString('utf8');
      if (this.verbose) process.stdout.write(text);
      if (this.logStream) this.logStream.write(text);
      this.lines.push(text);
      for (const waiter of [...this.waiters]) {
        if (waiter.pattern.test(text)) {
          this.waiters.splice(this.waiters.indexOf(waiter), 1);
          clearTimeout(waiter.timer);
          waiter.resolve(text);
        }
      }
    };
    this.child.stdout.on('data', onData);
    this.child.stderr.on('data', onData);
    this.child.on('error', (error) => {
      this.lines.push(`[spawn error] ${error.message}\n`);
      for (const waiter of [...this.waiters]) {
        clearTimeout(waiter.timer);
        waiter.reject(new Error(`server failed to spawn: ${error.message}`));
      }
      this.waiters.length = 0;
    });
    this.child.on('exit', (code, signal) => {
      this.lines.push(`[exit] code=${code} signal=${signal}\n`);
      for (const waiter of [...this.waiters]) {
        clearTimeout(waiter.timer);
        waiter.reject(
          new Error(
            `server exited (code ${code}, signal ${signal}) before the expected output; ` +
            `last lines: ${this.lines.join('').slice(-1200)}`
          )
        );
      }
      this.waiters.length = 0;
    });
    return this;
  }

  waitFor(pattern, timeoutMs = 120000, label = String(pattern)) {
    return new Promise((resolve, reject) => {
      // Re-check buffered output first so we never miss an early line.
      const buffered = this.lines.join('');
      if (pattern.test(buffered)) return resolve(buffered);
      const waiter = { pattern, resolve, reject, timer: null };
      waiter.timer = setTimeout(() => {
        const at = this.waiters.indexOf(waiter);
        if (at >= 0) this.waiters.splice(at, 1);
        reject(new Error(`timeout waiting for ${label}; last output: ${this.tail(800)}`));
      }, timeoutMs);
      this.waiters.push(waiter);
    });
  }

  tail(chars = 2000) {
    return this.lines.join('').slice(-chars);
  }

  async command(text) {
    if (this.verbose) console.log(`> ${text}`);
    this.child.stdin.write(`${text}\n`);
    await sleep(120);
  }

  async stop() {
    try {
      this.child.stdin.write('stop\n');
    } catch { /* already gone */ }
    await new Promise((resolve) => {
      const timer = setTimeout(() => {
        try { this.child.kill('SIGKILL'); } catch { /* ignore */ }
        resolve();
      }, 60000);
      this.child.once('exit', () => { clearTimeout(timer); resolve(); });
    });
  }
}

async function capture(args) {
  try {
    return await captureInner(args);
  } catch (error) {
    const absOut = path.resolve(args.out);
    fs.mkdirSync(absOut, { recursive: true });
    fs.writeFileSync(path.join(absOut, 'error.txt'), `${error && error.stack || error}\n`);
    throw error;
  }
}

async function captureInner({ binary, seed, out, timeout, probe, verbose, assets }) {
  const absOut = path.resolve(out);
  fs.rmSync(absOut, { recursive: true, force: true });
  fs.mkdirSync(absOut, { recursive: true });
  const workDir = path.join(absOut, 'server');
  fs.mkdirSync(workDir, { recursive: true });

  const binaryPath = path.resolve(binary);
  const binarySha = sha256(binaryPath);
  // The server resolves some resources relative to its own path, so run a copy
  // from inside the isolated working directory rather than the repo root.
  const localBinary = path.join(workDir, 'bedrock_server');
  fs.copyFileSync(binaryPath, localBinary);
  fs.chmodSync(localBinary, 0o755);

  // The binary alone is not a working server: it loads the vanilla resource and
  // behaviour packs (and the shared definitions/data trees) relative to its
  // working directory. Link those in from the repository so the world is
  // generated by the stock content rather than failing to start.
  const assetRoot = path.resolve(assets || path.dirname(binaryPath));
  const assetsToLink = [
    'resource_packs', 'behavior_packs', 'definitions', 'data', 'config',
    'allowlist.json', 'permissions.json', 'profanity_filter.wlist',
    'packetlimitconfig.json', 'release-notes.txt', 'bedrock_server_how_to.html',
  ];
  const linked = [];
  for (const name of assetsToLink) {
    const source = path.join(assetRoot, name);
    const target = path.join(workDir, name);
    if (!fs.existsSync(source) || fs.existsSync(target)) continue;
    try {
      fs.symlinkSync(source, target, fs.statSync(source).isDirectory() ? 'dir' : 'file');
      linked.push(name);
    } catch (error) {
      console.warn(`could not link ${name}: ${error.message}`);
    }
  }
  if (!linked.includes('resource_packs')) {
    throw new Error(
      `the vanilla resource pack is required but was not found under ${assetRoot}; ` +
      'pass --assets <dir> pointing at the unpacked server distribution'
    );
  }
  console.log(`linked assets: ${linked.join(', ')}`);
  console.log(`binary ${binaryPath}`);
  console.log(`sha256 ${binarySha}`);
  console.log(`seed   ${seed}`);

  const levelName = 'golden';
  fs.writeFileSync(path.join(workDir, 'server.properties'), propertiesFor(seed, levelName));

  const server = new Server(localBinary, workDir, verbose, path.join(absOut, 'server.log')).start();
  const started = Date.now();
  try {
    await server.waitFor(/Server started\.?/i, 300000, 'server start');

    // --- probe: build a known marker pattern and save it -------------------
    // Used to pin down the block_indices ordering of `.mcstructure`.
    if (probe) {
      const base = { x: 0, y: 100, z: 0 };
      await server.command('gamerule sendcommandfeedback false');
      await server.command(`fill ${base.x} ${base.y} ${base.z} ${base.x + 4} ${base.y + 4} ${base.z + 4} air`);
      const markers = [
        [0, 0, 0, 'gold_block'],
        [4, 0, 0, 'diamond_block'],
        [0, 0, 4, 'emerald_block'],
        [4, 0, 4, 'lapis_block'],
        [0, 4, 0, 'iron_block'],
        [2, 2, 2, 'redstone_block'],
      ];
      for (const [dx, dy, dz, block] of markers) {
        await server.command(`setblock ${base.x + dx} ${base.y + dy} ${base.z + dz} ${block}`);
      }
      await sleep(500);
      await server.command(
        `structure save wp_probe ${base.x} ${base.y} ${base.z} ${base.x + 4} ${base.y + 4} ${base.z + 4}`
      );
      await sleep(1500);
    }

    // --- force generation of the capture area -----------------------------
    await server.command('tickingarea add 0 0 0 47 0 47 capture');
    await sleep(25000); // let the generator finish the 3x3 chunk area

    // --- save each chunk column in 64-block vertical slices ---------------
    const chunks = [[0, 0], [1, 0], [0, 1], [1, 1]];
    const slices = [[-64, -1], [0, 63], [64, 127], [128, 191], [192, 255], [256, 319]];
    const saved = [];
    for (const [cx, cz] of chunks) {
      for (let i = 0; i < slices.length; i++) {
        const [y0, y1] = slices[i];
        const x0 = cx * 16;
        const z0 = cz * 16;
        const name = `c${cx}_${cz}_y${i}`;
        await server.command(`structure save ${name} ${x0} ${y0} ${z0} ${x0 + 15} ${y1} ${z0 + 15}`);
        saved.push({ name, chunk: [cx, cz], slice: i, y: [y0, y1] });
        await sleep(250);
      }
    }
    await sleep(3000);
    console.log(`requested ${saved.length} structure saves in ${Date.now() - started} ms`);
  } finally {
    await server.stop();
    if (server.logStream) {
      await new Promise((resolve) => server.logStream.end(resolve));
    }
    fs.writeFileSync(path.join(absOut, 'server-transcript.txt'), server.lines.join(''));
  }

  // --- collect -------------------------------------------------------------
  // `structure save` writes into the world's structures directory, but the
  // exact path depends on whether any behaviour pack is loaded, so search the
  // whole working tree instead of assuming one location.
  const collected = [];
  const walk = (dir) => {
    for (const entry of fs.readdirSync(dir, { withFileTypes: true })) {
      const full = path.join(dir, entry.name);
      if (entry.isDirectory()) walk(full);
      else if (entry.name.endsWith('.mcstructure')) {
        fs.mkdirSync(path.join(absOut, 'structures'), { recursive: true });
        const to = path.join(absOut, 'structures', entry.name);
        fs.copyFileSync(full, to);
        collected.push({
          file: entry.name,
          bytes: fs.statSync(to).size,
          source: path.relative(workDir, full),
        });
      }
    }
  };
  if (fs.existsSync(workDir)) walk(workDir);
  fs.writeFileSync(path.join(absOut, 'server.log'), server.lines.join(''));
  console.log(`collected ${collected.length} structure file(s)`);

  const manifest = {
    schema: 1,
    generatedAt: new Date().toISOString(),
    binary: { path: path.basename(binaryPath), sha256: binarySha, bytes: fs.statSync(binaryPath).size },
    assets: { root: assetRoot, linked },
    seed: String(seed),
    levelName,
    dimension: 'overworld',
    generator: 'default',
    platform: {
      os: process.platform,
      arch: process.arch,
      node: process.version,
      release: fs.existsSync('/etc/os-release')
        ? fs.readFileSync('/etc/os-release', 'utf8').split('\n')[0]
        : 'unknown',
    },
    slices: [
      [-64, -1], [0, 63], [64, 127], [128, 191], [192, 255], [256, 319],
    ],
    chunks: [[0, 0], [1, 0], [0, 1], [1, 1]],
    structures: collected,
  };
  fs.writeFileSync(path.join(absOut, 'capture.json'), `${JSON.stringify(manifest, null, 2)}\n`);
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
  capture(args)
    .then((manifest) => {
      console.log(`captured ${manifest.structures.length} structures for seed ${manifest.seed}`);
    })
    .catch((error) => {
      console.error(`capture failed: ${error.message}`);
      process.exit(1);
    });
}

module.exports = { capture, propertiesFor };
