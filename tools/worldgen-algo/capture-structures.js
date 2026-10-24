'use strict'

/**
 * Asks the official server where its structures actually are.
 *
 * `locate structure` is answered by Mojang's own world generator, so the result
 * is ground truth for a seed without reading any code: exactly what the golden
 * block capture is for terrain, but for structure placement.
 *
 * Each probe runs `execute positioned <x> 64 <z> run locate structure <id>`
 * from the server console, so the search origin can be moved without a player.
 * Every answer is recorded verbatim as well as parsed, because the message
 * format is itself something we should not assume.
 *
 *   node tools/worldgen-algo/capture-structures.js --binary ./bedrock_server \
 *        --seed 12345 --out capture/structures-12345 --assets .
 *
 * The binary is only asked to do what an admin could do from the console.
 */

const { spawn } = require('node:child_process')
const fs = require('node:fs')
const path = require('node:path')
const crypto = require('node:crypto')

const sleep = (ms) => new Promise((resolve) => setTimeout(resolve, ms))

function parseArgs (argv) {
  const args = {
    seed: '0',
    out: 'capture/structures',
    timeout: 900,
    verbose: false,
    ids: 'village,stronghold,monument,mansion,pillageroutpost,ruin,shipwreck,ruins,buriedtreasure,mineshaft,desert_pyramid',
    from: '0,0',
    assist: true
  }
  for (let i = 2; i < argv.length; i++) {
    const arg = argv[i]
    const next = () => {
      const value = argv[++i]
      if (value === undefined) throw new Error(`${arg} needs a value`)
      return value
    }
    switch (arg) {
      case '--binary': args.binary = next(); break
      case '--seed': args.seed = next(); break
      case '--out': args.out = next(); break
      case '--assets': args.assets = next(); break
      case '--ids': args.ids = next(); break
      case '--from': args.from = next(); break
      case '--timeout': args.timeout = Number(next()); break
      case '--no-assist': args.assist = false; break
      case '--verbose': args.verbose = true; break
      default: throw new Error(`unknown argument ${arg}`)
    }
  }
  if (!args.binary) throw new Error('--binary is required')
  return args
}

function sha256 (file) {
  const hash = crypto.createHash('sha256')
  const fd = fs.openSync(file, 'r')
  const buffer = Buffer.alloc(1 << 20)
  let read
  while ((read = fs.readSync(fd, buffer, 0, buffer.length, null)) > 0) {
    hash.update(buffer.subarray(0, read))
  }
  fs.closeSync(fd)
  return hash.digest('hex')
}

function propertiesFor (seed, levelName) {
  return [
    'server-name=BDS structure capture',
    'gamemode=creative',
    'difficulty=peaceful',
    'allow-cheats=true',
    'online-mode=false',
    'allow-list=false',
    'player-idle-timeout=0',
    'max-players=1',
    'view-distance=4',
    'tick-distance=4',
    'level-name=' + levelName,
    'level-seed=' + seed,
    'default-player-permission-level=operator',
    'texturepack-required=false',
    'server-port=19132',
    'server-portv6=19133',
    'enable-lan-visibility=false',
    'client-side-chunk-generation-enabled=false',
    '',
  ].join('\n')
}

/** Spawn the server and expose the console. */
function startServer (binary, cwd, logFile, verbose) {
  const child = spawn(binary, [], {
    cwd,
    env: {
      ...process.env,
      LD_LIBRARY_PATH: [cwd, process.env.LD_LIBRARY_PATH || ''].filter(Boolean).join(':')
    },
    stdio: ['pipe', 'pipe', 'pipe']
  })
  const state = { child, text: '', lines: [] }
  const stream = fs.createWriteStream(logFile, { flags: 'a' })
  const onData = (chunk) => {
    const text = chunk.toString('utf8')
    if (verbose) process.stdout.write(text)
    stream.write(text)
    state.text += text
    state.lines.push(text)
  }
  child.stdout.on('data', onData)
  child.stderr.on('data', onData)
  state.waitFor = (pattern, timeoutMs, label) => new Promise((resolve, reject) => {
    const started = Date.now()
    const tick = () => {
      if (pattern.test(state.text)) return resolve(state.text)
      if (Date.now() - started > timeoutMs) {
        return reject(new Error(`timeout waiting for ${label}; tail: ${state.text.slice(-800)}`))
      }
      setTimeout(tick, 250)
    }
    tick()
  })
  state.close = async () => {
    try { child.stdin.write('stop\n') } catch { /* already gone */ }
    await new Promise((resolve) => {
      const timer = setTimeout(() => { try { child.kill('SIGKILL') } catch {} resolve() }, 90000)
      child.once('exit', () => { clearTimeout(timer); resolve() })
    })
    await new Promise((resolve) => stream.end(resolve))
  }
  return state
}

/**
 * Pull the answer out of the console echo.
 *
 * Two shapes are handled, both taken from observed output: a single
 * "The nearest <id> is at [x, y, z]" line, and a failure line. The raw text is
 * always kept, so an unexpected format is visible rather than silently dropped.
 */
function parseAnswer (text, id) {
  const lines = text.split(/\r?\n/).filter((line) => line.trim().length > 0)
  // The dedicated server answers with
  //   "The nearest minecraft:village is at block 152, (y?), 808 (83 chunks away ...)"
  // -- note the unknown y and the trailing distance. Bracket form and bare
  // "x, y, z" are also accepted, because the message shape is not ours to
  // assume and a format change must not silently become "not found".
  for (const line of lines) {
    const block = line.match(/nearest\s+(\S+)\s+is\s+at\s+block\s+(-?\d+)\s*,\s*(?:\(y\?\)|(-?\d+))\s*,\s*(-?\d+)(?:\s*\((\d+)\s+chunks?)?/i)
    if (block) {
      return {
        id,
        resolvedId: block[1],
        found: true,
        at: [Number(block[2]), block[3] === undefined ? null : Number(block[3]), Number(block[4])],
        chunksAway: block[5] === undefined ? null : Number(block[5]),
        raw: line.trim()
      }
    }
    const bracketed = line.match(/nearest\s+(\S+)\s+is\s+at\s+\[\s*(-?\d+)\s*,\s*(-?\d+)\s*,\s*(-?\d+)\s*\]/i)
    if (bracketed) {
      return {
        id,
        resolvedId: bracketed[1],
        found: true,
        at: [Number(bracketed[2]), Number(bracketed[3]), Number(bracketed[4])],
        chunksAway: null,
        raw: line.trim()
      }
    }
  }
  const failure = lines.find((line) => /could not|no structure|invalid|unknown|failed|cannot/i.test(line))
  return {
    id,
    found: false,
    at: null,
    resolvedId: null,
    chunksAway: null,
    raw: (failure || lines[lines.length - 1] || '').trim()
  }
}

async function main () {
  const args = parseArgs(process.argv)
  const absOut = path.resolve(args.out)
  fs.rmSync(absOut, { recursive: true, force: true })
  fs.mkdirSync(absOut, { recursive: true })
  const workDir = path.join(absOut, 'server')
  fs.mkdirSync(workDir, { recursive: true })
  // The staged server tree holds a world database and a copy of the vanilla
  // packs; only the probe results are evidence, so keep it out of git.
  fs.writeFileSync(path.join(absOut, '.gitignore'), 'server/\n')

  const binaryPath = path.resolve(args.binary)
  const binarySha = sha256(binaryPath)
  const localBinary = path.join(workDir, 'bedrock_server')
  fs.copyFileSync(binaryPath, localBinary)
  fs.chmodSync(localBinary, 0o755)

  const assetRoot = path.resolve(args.assets || path.dirname(binaryPath))
  for (const name of ['resource_packs', 'behavior_packs', 'definitions', 'data', 'config']) {
    const source = path.join(assetRoot, name)
    const target = path.join(workDir, name)
    if (!fs.existsSync(source) || fs.existsSync(target)) continue
    fs.cpSync(source, target, { recursive: true, dereference: true })
  }
  fs.writeFileSync(path.join(workDir, 'server.properties'), propertiesFor(args.seed, 'structures'))

  const server = startServer(localBinary, workDir, path.join(absOut, 'server.log'), args.verbose)
  const results = []
  const started = Date.now()
  try {
    await server.waitFor(/Server started\.?/i, 300000, 'server start')
    // Output of the answers must reach the console.
    server.child.stdin.write('gamerule sendcommandfeedback true\n')
    await sleep(500)

    const origins = args.from.split(';').map((pair) => pair.split(',').map(Number))
    const ids = args.ids.split(',').map((id) => id.trim()).filter(Boolean)

    // Learn the accepted vocabulary instead of assuming it.
    server.child.stdin.write('help locate\n')
    await sleep(1500)
    results.push({ probe: 'help', raw: server.text.slice(-1500) })

    for (const origin of origins) {
      for (const id of ids) {
        const command = `execute positioned ${origin[0]} 64 ${origin[1]} run locate structure ${id}`
        const before = server.text.length
        server.child.stdin.write(command + '\n')
        // A locate can take a while: it samples biomes over a wide radius.
        let answer = { id, found: false, at: null, raw: '' }
        for (let attempt = 0; attempt < 100; attempt++) {
          await sleep(250)
          const chunk = server.text.slice(before)
          answer = parseAnswer(chunk, id)
          if (answer.found || /could not|no structure|invalid|unknown|failed|cannot/i.test(chunk)) break
        }
        results.push({ command, from: origin, ...answer })
        console.log(`${id} from ${origin.join(',')} -> ${answer.found ? answer.at.join(',') : answer.raw}`)
      }
    }
  } catch (error) {
    fs.writeFileSync(path.join(absOut, 'error.txt'), `${error && error.stack || error}\n`)
    throw error
  } finally {
    await server.close()
  }

  fs.writeFileSync(path.join(absOut, 'structures.json'), JSON.stringify({
    schema: 1,
    generatedAt: new Date().toISOString(),
    durationMs: Date.now() - started,
    binary: { sha256: binarySha, bytes: fs.statSync(binaryPath).size },
    seed: args.seed,
    // The capture has to describe itself: which identifiers were asked for, and
    // from where. A fit against a capture whose identifier set is only in the
    // directory name cannot be replayed from the file alone.
    ids: args.ids,
    origins: args.from,
    results
  }, null, 2))
  console.log(`wrote ${path.join(absOut, 'structures.json')} (${results.length} probes)`)
}

module.exports = { parseAnswer }

if (require.main === module) {
  main().catch((error) => {
    console.error(error && error.stack || error)
    process.exit(1)
  })
}
