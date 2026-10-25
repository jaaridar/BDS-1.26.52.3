'use strict'

/**
 * Search worker.
 *
 * One worker tests one contiguous slice of the seed range. It owns a WebAssembly
 * instance of the placement core and falls back to the bundled JavaScript
 * reference if the core cannot be loaded, so the page still answers when wasm is
 * blocked — slower, and the UI says so.
 *
 * The hot loop never touches BigInt: a candidate is a pair of 32-bit halves that
 * are advanced by hand, because 4 million BigInt additions per search is the one
 * thing that would make this page feel slow. BigInt appears only when a hit is
 * reported, which is rare by construction.
 */

/* global OpenBDSWorld, importScripts, performance */

importScripts('reference.js')

const TWO32 = 4294967296

let core = null
let outPtr = 0
let stopRequested = false

async function loadCore () {
  try {
    const response = await fetch('seedfinder.wasm', { cache: 'no-cache' })
    if (!response.ok) throw new Error(`core: HTTP ${response.status}`)
    const bytes = await response.arrayBuffer()
    const { instance } = await WebAssembly.instantiate(bytes, {
      env: {
        abort: (message, file, line, column) => {
          throw new Error(`wasm abort: ${message} at ${file}:${line}:${column}`)
        }
      }
    })
    core = instance.exports
    outPtr = core.outPtr()
    return true
  } catch (error) {
    core = null
    return false
  }
}

function view () {
  return new Int32Array(core.memory.buffer)
}

/** The 48-bit reduction the Java engine sees. */
function low48 (hi, lo) {
  return (BigInt(hi & 0xffff) << 32n) | BigInt(lo)
}

function seedOf (hi, lo) {
  return BigInt.asIntN(64, (BigInt(hi >>> 0) << 32n) | BigInt(lo >>> 0))
}

function setupRules (rules) {
  if (!core) return
  core.resetRules()
  for (const rule of rules) {
    core.addRule(rule.placement, rule.minCount, rule.radiusChunks, rule.maxNearest, rule.mode)
  }
}

/**
 * The JavaScript path, used only when the core is unavailable. It calls the
 * same modules the wasm core was transcribed from, so a hit here is the same
 * hit — it just costs an order of magnitude more per seed.
 */
function evaluateReference (seed, rules, chunkX, chunkZ) {
  for (const rule of rules) {
    let count = 0
    let nearest = -1
    if (rule.kind === 'stronghold') {
      const cells = OpenBDSWorld.strongholdsNear(seed, chunkX, chunkZ, rule.radiusChunks)
      for (const cell of cells) {
        if (rule.mode === 0 && !cell.gated) continue
        count++
        if (nearest < 0 || cell.distance < nearest) nearest = cell.distance
      }
    } else {
      const placement = OpenBDSWorld.PLACEMENTS[rule.id]
      const starts = OpenBDSWorld.candidateStarts(placement, seed, chunkX, chunkZ, rule.radiusChunks)
      count = starts.length
      if (count > 0) nearest = starts[0].distance
    }
    if (count < rule.minCount) return false
    if (rule.maxNearest >= 0 && (nearest < 0 || nearest > rule.maxNearest)) return false
  }
  return true
}

/** Counts and nearest positions for one passing seed, for the results table. */
function detailsFor (seed, hi, lo, chunkX, chunkZ, rules) {
  const out = []
  const buffer = core ? view() : null
  const base = outPtr >> 2
  for (const rule of rules) {
    if (core) {
      const count = core.detail(lo, low48(hi, lo), chunkX, chunkZ, rule.placement, rule.radiusChunks, rule.mode, outPtr)
      out.push({
        name: rule.name,
        count,
        nearest: count > 0 ? buffer[base + 1] : null,
        chunkX: count > 0 ? buffer[base + 2] : null,
        chunkZ: count > 0 ? buffer[base + 3] : null
      })
    } else if (rule.kind === 'stronghold') {
      const cells = OpenBDSWorld.strongholdsNear(seed, chunkX, chunkZ, rule.radiusChunks)
        .filter((cell) => rule.mode !== 0 || cell.gated)
      out.push({
        name: rule.name,
        count: cells.length,
        nearest: cells.length ? Math.round(cells[0].distance) : null,
        chunkX: cells.length ? cells[0].chunkX : null,
        chunkZ: cells.length ? cells[0].chunkZ : null
      })
    } else {
      const starts = OpenBDSWorld.candidateStarts(OpenBDSWorld.PLACEMENTS[rule.id], seed, chunkX, chunkZ, rule.radiusChunks)
      out.push({
        name: rule.name,
        count: starts.length,
        nearest: starts.length ? Math.round(starts[0].distance) : null,
        chunkX: starts.length ? starts[0].chunkX : null,
        chunkZ: starts.length ? starts[0].chunkZ : null
      })
    }
  }
  return out
}

const tick = () => new Promise((resolve) => setTimeout(resolve, 0))

async function search (job) {
  const chunkX = Math.floor(job.originX / 16)
  const chunkZ = Math.floor(job.originZ / 16)
  setupRules(job.rules)
  let hi = job.startHi >>> 0
  let lo = job.startLo >>> 0
  const step = job.step >>> 0
  let scanned = 0
  const started = performance.now()
  let lastReport = started
  const batch = core ? 4000 : 300

  while (scanned < job.count && !stopRequested) {
    const stop = Math.min(job.count, scanned + batch)
    const hits = []
    for (; scanned < stop; scanned++) {
      let passed
      if (core) {
        passed = core.evaluate(lo, low48(hi, lo), chunkX, chunkZ) === 1
      } else {
        passed = evaluateReference(seedOf(hi, lo), job.rules, chunkX, chunkZ)
      }
      if (passed) {
        const seed = seedOf(hi, lo)
        hits.push({
          seed: seed.toString(),
          details: detailsFor(seed, hi, lo, chunkX, chunkZ, job.rules)
        })
      }
      // Advance the 64-bit seed by `step`, keeping the halves apart.
      lo += step
      if (lo >= TWO32) {
        lo -= TWO32
        hi = (hi + 1) >>> 0
      }
    }
    if (hits.length) postMessage({ type: 'hits', id: job.id, hits })
    const now = performance.now()
    if (now - lastReport > 120) {
      postMessage({ type: 'progress', id: job.id, scanned, elapsed: now - started })
      lastReport = now
    }
    await tick()
  }

  postMessage({
    type: 'done',
    id: job.id,
    scanned,
    elapsed: performance.now() - started,
    stopped: stopRequested,
    engine: core ? 'wasm' : 'js'
  })
}

self.onmessage = async (event) => {
  const message = event.data
  if (message.type === 'start') {
    stopRequested = false
    const ready = core ? true : await loadCore()
    postMessage({ type: 'ready', id: message.job.id, wasm: ready })
    await search(message.job)
    return
  }
  if (message.type === 'stop') {
    stopRequested = true
  }
}
