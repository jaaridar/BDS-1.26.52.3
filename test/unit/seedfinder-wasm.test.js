'use strict'

/**
 * The WebAssembly core must agree with the JavaScript reference, cell for cell.
 *
 * `web/assembly/seedfinder.ts` is a transcription of `src/world/`, and a
 * transcription can rot: a constant gets edited on one side, a draw is read in
 * the wrong order, an integer narrows where the other side widened. This test
 * pins the two together over a seed matrix that covers every seed class the
 * site accepts -- zero, small, negative, the 32-bit boundaries, both 64-bit
 * extremes, and values that only differ above the bits placement reads -- and
 * over every structure type in the table, at several origins and radii.
 *
 * If the wasm artifact is missing (a fresh checkout before `npm run web:build`)
 * the test falls back to compiling it in-process when AssemblyScript is
 * available, and otherwise reports itself as skipped rather than passing.
 */

const test = require('node:test')
const assert = require('node:assert/strict')
const fs = require('node:fs')
const path = require('node:path')
const { execFileSync } = require('node:child_process')

const ROOT = path.resolve(__dirname, '..', '..')
const WASM = path.join(ROOT, 'web', 'public', 'seedfinder.wasm')

const { PLACEMENTS } = require(path.join(ROOT, 'src', 'world', 'structures-data.js'))
const { candidateStarts } = require(path.join(ROOT, 'src', 'world', 'structure-placement.js'))
const { strongholdsNear } = require(path.join(ROOT, 'src', 'world', 'stronghold.js'))

/** Every seed class the finder is allowed to take. */
const SEEDS = [
  0n,
  1n,
  2n,
  7n,
  39n,
  12345n,
  -1n,
  -2n,
  -12345n,
  2147483647n, // 2^31 - 1
  2147483648n, // 2^31
  4294967295n, // 2^32 - 1
  4294967296n, // 2^32
  4294967297n, // 2^32 + 1
  9007199254740993n, // 2^53 + 1, past the double-safe range
  281474976710656n, // 2^48
  281474976710657n, // 2^48 + 1
  9223372036854775807n, // 2^63 - 1
  -9223372036854775808n // -2^63
]

const ORIGINS = [[0, 0], [1234, -987], [-6400, 4800]]
const RADII = [64, 200, 320]

let wasm = null

function loadWasm () {
  if (!fs.existsSync(WASM)) {
    const builder = path.join(ROOT, 'tools', 'web', 'build-seedfinder.js')
    const candidates = [process.env.ASC, '/tmp/asc/node_modules/assemblyscript/bin/asc.js']
      .filter(Boolean)
      .filter((candidate) => fs.existsSync(candidate))
    if (!candidates.length) return null
    execFileSync(process.execPath, [builder], {
      cwd: ROOT,
      env: { ...process.env, ASC: candidates[0] },
      stdio: 'ignore'
    })
  }
  const module = new WebAssembly.Module(fs.readFileSync(WASM))
  // The AssemblyScript stub runtime imports `env.abort`; nothing in the hot paths
  // can reach it, and reaching it should fail loudly rather than corrupt state.
  const instance = new WebAssembly.Instance(module, {
    env: {
      abort: (message, file, line, column) => {
        throw new Error(`wasm abort: ${message} at ${file}:${line}:${column}`)
      }
    }
  })
  const exports = instance.exports
  return {
    exports,
    i32: new Int32Array(exports.memory.buffer),
    u32: new Uint32Array(exports.memory.buffer),
    out: exports.outPtr()
  }
}

function reductions (seed) {
  return { lo32: Number(BigInt.asUintN(32, seed)), lo48: BigInt.asUintN(48, seed) }
}

/** The filterable rows, in the order the build script emits them. */
function filterable () {
  const manifest = JSON.parse(fs.readFileSync(path.join(ROOT, 'web', 'public', 'placements.json'), 'utf8'))
  return manifest.available
}

test('wasm core is available', () => {
  wasm = loadWasm()
  if (!wasm) {
    console.log('skipping: no wasm artifact and no AssemblyScript compiler')
    return
  }
  assert.equal(wasm.exports.placementCount(), filterable().length,
    'wasm table and placements.json disagree about how many sets exist')
})

test('every placement agrees with the reference, cell for cell', () => {
  wasm = wasm || loadWasm()
  if (!wasm) return
  const rows = filterable()
  let comparisons = 0
  for (const row of rows) {
    const placement = PLACEMENTS[row.id]
    for (const seed of SEEDS) {
      const { lo32, lo48 } = reductions(seed)
      for (const [originX, originZ] of ORIGINS) {
        const chunkX = Math.floor(originX / 16)
        const chunkZ = Math.floor(originZ / 16)
        for (const radius of RADII) {
          const expected = candidateStarts(placement, seed, chunkX, chunkZ, radius)
          const count = wasm.exports.detail(lo32, lo48, chunkX, chunkZ, row.index, radius, 0, wasm.out)
          const view = wasm.i32
          const scale = wasm.out >> 2
          assert.equal(count, expected.length,
            `${row.name} seed ${seed} origin ${originX},${originZ} r${radius}: count`)
          assert.equal(view[scale + 0], expected.length)
          if (count > 0) {
            const nearest = expected[0]
            assert.equal(view[scale + 2], nearest.chunkX,
              `${row.name} seed ${seed} origin ${originX},${originZ} r${radius}: nearest chunkX`)
            assert.equal(view[scale + 3], nearest.chunkZ,
              `${row.name} seed ${seed} origin ${originX},${originZ} r${radius}: nearest chunkZ`)
            assert.ok(Math.abs(view[scale + 1] - nearest.distance) < 1,
              `${row.name} seed ${seed}: nearest distance ${view[scale + 1]} vs ${nearest.distance}`)
          } else {
            assert.equal(view[scale + 1], -1)
          }
          comparisons++
        }
      }
    }
  }
  assert.ok(comparisons > 1000, `only ${comparisons} comparisons ran`)
})

test('strongholds agree with the reference, gated cells and all cells', () => {
  wasm = wasm || loadWasm()
  if (!wasm) return
  for (const seed of SEEDS) {
    const { lo32 } = reductions(seed)
    for (const [originX, originZ] of ORIGINS) {
      const chunkX = Math.floor(originX / 16)
      const chunkZ = Math.floor(originZ / 16)
      for (const radius of RADII) {
        const cells = strongholdsNear(seed, chunkX, chunkZ, radius)
        const gated = cells.filter((cell) => cell.gated)
        const scale = wasm.out >> 2
        const allCount = wasm.exports.detail(lo32, 0n, chunkX, chunkZ, -1, radius, 1, wasm.out)
        assert.equal(allCount, cells.length, `strongholds seed ${seed} r${radius}: all cells`)
        const gatedCount = wasm.exports.detail(lo32, 0n, chunkX, chunkZ, -1, radius, 0, wasm.out)
        assert.equal(gatedCount, gated.length, `strongholds seed ${seed} r${radius}: gated cells`)
        if (gatedCount > 0) {
          assert.equal(wasm.i32[scale + 2], gated[0].chunkX, `strongholds seed ${seed}: nearest gated chunkX`)
          assert.equal(wasm.i32[scale + 3], gated[0].chunkZ, `strongholds seed ${seed}: nearest gated chunkZ`)
        }
      }
    }
  }
})

test('the 200-chunk cell gate is the same value the reference computes', () => {
  wasm = wasm || loadWasm()
  if (!wasm) return
  const seeds = SEEDS.slice(0, 8)
  for (const seed of seeds) {
    const { lo32 } = reductions(seed)
    for (let cellZ = -3; cellZ <= 3; cellZ++) {
      for (let cellX = -3; cellX <= 3; cellX++) {
        wasm.exports.strongholdCellAt(lo32, cellX, cellZ, wasm.out)
        const scale = wasm.out >> 2
        const reference = require(path.join(ROOT, 'src', 'world', 'stronghold.js')).strongholdInCell(seed, cellX, cellZ)
        assert.equal(wasm.i32[scale + 0], reference.chunkX, `cell ${cellX},${cellZ} seed ${seed}: chunkX`)
        assert.equal(wasm.i32[scale + 1], reference.chunkZ, `cell ${cellX},${cellZ} seed ${seed}: chunkZ`)
        assert.equal(wasm.i32[scale + 2] === 1, reference.gated, `cell ${cellX},${cellZ} seed ${seed}: gate`)
      }
    }
  }
})

test('rule evaluation matches "count at least N" semantics', () => {
  wasm = wasm || loadWasm()
  if (!wasm) return
  const rows = filterable()
  const village = rows.find((row) => row.name === 'village')
  const placement = PLACEMENTS[village.id]
  let checked = 0
  for (const seed of SEEDS) {
    const { lo32, lo48 } = reductions(seed)
    const expected = candidateStarts(placement, seed, 0, 0, 200)
    for (let minCount = 0; minCount <= Math.min(expected.length, 4); minCount++) {
      for (const maxNearest of [-1, 0, 400, 10000]) {
        wasm.exports.resetRules()
        wasm.exports.addRule(village.index, minCount, 200, maxNearest, 0)
        const passed = wasm.exports.evaluate(lo32, lo48, 0, 0) === 1
        const wanted = expected.length >= minCount &&
          (maxNearest < 0 || (expected.length > 0 && expected[0].distance <= maxNearest))
        assert.equal(passed, wanted,
          `seed ${seed} minCount ${minCount} maxNearest ${maxNearest}: got ${passed}, expected ${wanted} (${expected.length} villages)`)
        checked++
      }
    }
  }
  assert.ok(checked > 100)
})

test('seeds that differ only above the bits placement reads behave identically', () => {
  const { candidateStarts: starts } = require(path.join(ROOT, 'src', 'world', 'structure-placement.js'))
  const village = PLACEMENTS['minecraft:village']
  // Mersenne sets read the low 32 bits: seed and seed + 2^32 are the same world.
  const a = starts(village, 0n, 0, 0, 400)
  const b = starts(village, 4294967296n, 0, 0, 400)
  assert.deepEqual(b.map((s) => [s.chunkX, s.chunkZ]), a.map((s) => [s.chunkX, s.chunkZ]))
  // Java sets read the low 48 bits.
  const trail = PLACEMENTS['minecraft:trail_ruins']
  const c = starts(trail, 5n, 0, 0, 400)
  const d = starts(trail, 5n + 281474976710656n, 0, 0, 400)
  assert.deepEqual(d.map((s) => [s.chunkX, s.chunkZ]), c.map((s) => [s.chunkX, s.chunkZ]))
  const e = starts(trail, 5n + 4294967296n, 0, 0, 400)
  assert.notDeepEqual(e.map((s) => [s.chunkX, s.chunkZ]), c.map((s) => [s.chunkX, s.chunkZ]),
    'Java sets must react to bits 32..47, unlike the Mersenne sets')
})
