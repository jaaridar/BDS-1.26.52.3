'use strict'

/**
 * Read the structure placement records out of the running server's memory.
 *
 * The static scans came back empty: the salts are not store immediates, they are
 * not dword runs in .rodata, and there is no JSON text in the binary for the
 * sets that are not in a pack. What they are, unambiguously, is *in memory*:
 * the resolver takes a structure definition object and reads the salt at one
 * fixed offset and the separation, spacing and spread type at three others. So
 * instead of guessing where the numbers are stored on disk, ask the process that
 * has already constructed them.
 *
 * Two independent anchors, so a wrong assumption about one does not lose the
 * other:
 *
 *   names   find the bytes of an identifier (say `minecraft:village`), then find
 *           every 8-byte value that points at it. A structure set has to know
 *           its own name, so the pointer finds the record.
 *   salts   find the two placement records whose salt is known from the packs
 *           (`minecraft:trail_ruins` 83469867, `minecraft:abandoned_camp`
 *           91231127) and dump the object around each.
 *
 * Everything it finds is written as raw bytes and as decoded 32-bit words, so
 * the layout is read off the dump rather than assumed here.
 *
 *   node tools/worldgen-algo/dump-memory.js --binary ./bedrock_server --assets . \
 *     --seed 1 --out research/.../structures/memory
 */

const fs = require('node:fs')
const path = require('node:path')
const crypto = require('node:crypto')
const { spawn } = require('node:child_process')

const DEFAULT_IDS = ['trail_ruins', 'village', 'pillager_outpost', 'monument', 'mansion',
  'shipwreck', 'ocean_ruin', 'ancient_city', 'trial_chambers', 'stronghold', 'ruined_portal',
  'desert_pyramid', 'jungle_temple', 'swamp_hut', 'igloo', 'buried_treasure', 'mineshaft']

/** Salts the packs state, so they are facts rather than candidates. */
const KNOWN_SALTS = { trail_ruins: 83469867, abandoned_camp: 91231127 }

function parseArgs (argv) {
  const args = {
    binary: null,
    assets: '.',
    seed: '1',
    ids: DEFAULT_IDS.join(','),
    out: 'memory-dump',
    window: 192,
    minAddress: 0,
    maxRegions: 400,
    verbose: false
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
      case '--assets': args.assets = next(); break
      case '--seed': args.seed = next(); break
      case '--ids': args.ids = next(); break
      case '--out': args.out = next(); break
      case '--window': args.window = Number(next()); break
      case '--max-regions': args.maxRegions = Number(next()); break
      case '--verbose': args.verbose = true; break
      default: throw new Error(`unknown argument ${arg}`)
    }
  }
  if (!args.binary) throw new Error('--binary is required')
  return args
}

function propertiesFor (seed, levelName) {
  return [
    'server-name=BDS registry dump',
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
    ''
  ].join('\n')
}

const sleep = (ms) => new Promise((resolve) => setTimeout(resolve, ms))

function startServer (binary, cwd, logFile, verbose) {
  const child = spawn(binary, [], {
    cwd,
    env: {
      ...process.env,
      LD_LIBRARY_PATH: [cwd, process.env.LD_LIBRARY_PATH || ''].filter(Boolean).join(':')
    },
    stdio: ['pipe', 'pipe', 'pipe']
  })
  const state = { child, text: '' }
  const stream = fs.createWriteStream(logFile, { flags: 'a' })
  const onData = (chunk) => {
    const text = chunk.toString('utf8')
    if (verbose) process.stdout.write(text)
    stream.write(text)
    state.text += text
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

/** Readable and writable regions of the process, biggest first. */
function readRegions (pid) {
  const regions = []
  for (const line of fs.readFileSync(`/proc/${pid}/maps`, 'utf8').split('\n')) {
    const match = line.match(/^([0-9a-f]+)-([0-9a-f]+)\s+(\S{4})\s+\S+\s+\S+\s+\S+\s*(.*)$/)
    if (!match) continue
    const start = parseInt(match[1], 16)
    const end = parseInt(match[2], 16)
    const perms = match[3]
    regions.push({ start, end, size: end - start, perms, name: match[4] || '' })
  }
  return regions.sort((a, b) => b.size - a.size)
}

/** Every occurrence of a byte pattern inside one region. */
function findAll (memFd, region, needle, limit = 4096) {
  const hits = []
  const chunk = 8 << 20
  const overlap = needle.length - 1
  let at = region.start
  let carry = Buffer.alloc(0)
  let carryBase = region.start
  while (at < region.end && hits.length < limit) {
    const size = Math.min(chunk, region.end - at)
    let buffer
    try {
      buffer = Buffer.alloc(size)
      const read = fs.readSync(memFd, buffer, 0, size, at)
      if (read <= 0) break
      buffer = buffer.subarray(0, read)
    } catch {
      at += size
      carry = Buffer.alloc(0)
      carryBase = at
      continue
    }
    const haystack = carry.length ? Buffer.concat([carry, buffer]) : buffer
    const base = carry.length ? carryBase : at
    let index = haystack.indexOf(needle)
    while (index >= 0 && hits.length < limit) {
      hits.push(base + index)
      index = haystack.indexOf(needle, index + 1)
    }
    carryBase = base + haystack.length - overlap
    carry = haystack.subarray(Math.max(0, haystack.length - overlap))
    at += size
  }
  return hits
}

/** Little-endian 8-byte encoding, for searching for pointers. */
function pointerPattern (address) {
  const buffer = Buffer.alloc(8)
  buffer.writeBigUInt64LE(BigInt(address))
  return buffer
}

function decodeWindow (memFd, address, window) {
  const start = Math.max(0, address - Math.floor(window / 2))
  const buffer = Buffer.alloc(window)
  let read = 0
  try {
    read = fs.readSync(memFd, buffer, 0, window, start)
  } catch {
    return null
  }
  const bytes = buffer.subarray(0, read)
  const words = []
  for (let offset = 0; offset + 4 <= bytes.length; offset += 4) {
    words.push({ at: start + offset, offset: offset - Math.floor(window / 2), value: bytes.readInt32LE(offset) })
  }
  const qwords = []
  for (let offset = 0; offset + 8 <= bytes.length; offset += 8) {
    qwords.push({ at: start + offset, value: bytes.readBigUInt64LE(offset).toString() })
  }
  return { at: start, hex: bytes.toString('hex'), words, qwords }
}

async function main () {
  const args = parseArgs(process.argv)
  const absOut = path.resolve(args.out)
  fs.rmSync(absOut, { recursive: true, force: true })
  fs.mkdirSync(absOut, { recursive: true })
  const workDir = path.join(absOut, 'server')
  fs.mkdirSync(workDir, { recursive: true })
  fs.writeFileSync(path.join(absOut, '.gitignore'), 'server/\n')

  const binaryPath = path.resolve(args.binary)
  const localBinary = path.join(workDir, 'bedrock_server')
  fs.copyFileSync(binaryPath, localBinary)
  fs.chmodSync(localBinary, 0o755)
  const assetRoot = path.resolve(args.assets)
  for (const name of ['resource_packs', 'behavior_packs', 'definitions', 'data', 'config']) {
    const source = path.join(assetRoot, name)
    const target = path.join(workDir, name)
    if (!fs.existsSync(source) || fs.existsSync(target)) continue
    fs.cpSync(source, target, { recursive: true, dereference: true })
  }
  fs.writeFileSync(path.join(workDir, 'server.properties'), propertiesFor(args.seed, 'memory'))

  const server = startServer(localBinary, workDir, path.join(absOut, 'server.log'), args.verbose)
  const report = {
    schema: 1,
    generatedAt: new Date().toISOString(),
    seed: args.seed,
    binary: {
      sha256: crypto.createHash('sha256').update(fs.readFileSync(binaryPath)).digest('hex'),
      bytes: fs.statSync(binaryPath).size
    },
    queries: [],
    names: [],
    salts: [],
    regions: []
  }
  try {
    await server.waitFor(/Server started\.?/i, 300000, 'server start')
    server.child.stdin.write('gamerule sendcommandfeedback true\n')
    await sleep(500)
    const ids = args.ids.split(',').map((id) => id.trim()).filter(Boolean)
    for (const id of ids) {
      const before = server.text.length
      server.child.stdin.write(`execute positioned 0 64 0 run locate structure ${id}\n`)
      for (let attempt = 0; attempt < 80; attempt++) {
        await sleep(250)
        const chunk = server.text.slice(before)
        if (/nearest|could not|no structure|invalid|unknown|failed|cannot/i.test(chunk)) break
      }
      const answer = server.text.slice(before).split('\n').filter(Boolean).slice(-2).join(' | ')
      report.queries.push({ id, answer })
      console.log(`${id}: ${answer.slice(0, 120)}`)
    }
    // The generator builds its registries while answering those queries; give it
    // a moment to finish before reading.
    await sleep(2000)

    const pid = server.child.pid
    const allRegions = readRegions(pid)
    // Anonymous mappings and [heap] are where the records live; file-backed
    // mappings are the binary and its libraries, which the static scans already
    // covered and which cost more to read than they return.
    const regions = allRegions.filter((region) => !region.name || region.name === '[heap]')
    report.regions = allRegions.map((region) => ({
      start: region.start, end: region.end, size: region.size, perms: region.perms, name: region.name
    }))
    const scanned = regions.reduce((sum, region) => sum + region.size, 0)
    console.log(`regions: ${allRegions.length} mapped, ${regions.length} anonymous ` +
      `(${(scanned / 2 ** 20).toFixed(0)} MB) to scan`)
    const memFd = fs.openSync(`/proc/${pid}/mem`, 'r')

    // Pass one: where do the identifiers and the two known salts appear?
    const needles = []
    for (const id of ids.slice(0, 8)) {
      for (const text of [id, `minecraft:${id}`]) {
        needles.push({ kind: 'name', id, text, bytes: Buffer.from(text + '\0') })
      }
    }
    for (const [id, salt] of Object.entries(KNOWN_SALTS)) {
      const bytes = Buffer.alloc(4)
      bytes.writeInt32LE(salt)
      needles.push({ kind: 'salt', id, salt, text: String(salt), bytes })
    }
    const found = needles.map((needle) => ({ ...needle, at: [] }))
    for (const region of regions) {
      for (const needle of found) {
        for (const at of findAll(memFd, region, needle.bytes, 64)) {
          needle.at.push({ at, region: { start: region.start, name: region.name } })
        }
      }
    }
    for (const needle of found) {
      if (!needle.at.length) continue
      // Every anchor costs a full pass over the process to look for pointers at
      // it, so keep the first few of each: a record is reachable from any one of
      // its occurrences, and the salts are rare enough that a handful is plenty.
      const cap = needle.kind === 'salt' ? 8 : 3
      if (needle.at.length > cap) needle.at = needle.at.slice(0, cap)
      console.log(`${needle.kind} ${needle.text}: ${needle.at.length} occurrences kept`)
    }

    // Pass two: what points at them? A structure set has to know its own name,
    // and the registry has to reference the record it built.
    for (const needle of found) {
      for (const hit of needle.at) {
        const entry = {
          kind: needle.kind,
          id: needle.id,
          needle: needle.text,
          at: hit.at,
          region: hit.region,
          window: decodeWindow(memFd, hit.at, args.window),
          owners: []
        }
        for (const region of regions) {
          for (const ref of findAll(memFd, region, pointerPattern(hit.at), 32)) {
            entry.owners.push({
              at: ref,
              region: { start: region.start, name: region.name },
              window: decodeWindow(memFd, ref, args.window)
            })
          }
        }
        if (needle.kind === 'name') report.names.push(entry)
        else report.salts.push(entry)
        const owners = entry.owners.length
        console.log(`${needle.kind} ${needle.text} @${hit.at.toString(16)}: ${owners} pointers` +
          (owners ? ` first @${entry.owners[0].at.toString(16)}` : ''))
      }
    }
    fs.closeSync(memFd)
  } catch (error) {
    fs.writeFileSync(path.join(absOut, 'error.txt'), `${error && error.stack || error}\n`)
    throw error
  } finally {
    await server.close()
  }

  const file = path.join(absOut, 'memory.json')
  fs.writeFileSync(file, JSON.stringify(report, null, 1))
  console.log(`wrote ${file}: ${report.names.length} name hits, ${report.salts.length} salt hits`)
}

module.exports = { parseArgs, propertiesFor, readRegions, findAll, pointerPattern }

if (require.main === module) {
  main().catch((error) => {
    console.error(error && error.stack || error)
    process.exit(1)
  })
}
