#!/usr/bin/env node
'use strict'

/**
 * Strongholds: a fitting harness for the concentric-ring placement.
 *
 * Strongholds are not on the jittered grid, so `fit-placement.js` cannot say
 * anything about them (`--id stronghold` reports "no perfect band", correctly).
 * The binary has its own ring code (`StrongholdFeature::vslot5`/`vslot6`, with a
 * per-candidate MT seed and a `cell*200 + draw + 50` style coordinate formula),
 * and this tool measures which ring model the captures are consistent with.
 *
 * The model is the concentric-ring family, written with the ring parameters as
 * unknowns rather than Java's constants:
 *
 *   rng = engine(seed)                      engine: java LCG or MT19937
 *   angle = 2*pi*u1
 *   radius = base * distance + (u2 - 0.5) * distance * spread     (chunks)
 *   candidate = round(cos(angle) * radius), round(sin(angle) * radius)   (chunks)
 *
 * plus the later rings, and a relocation tolerance because the server moves a
 * candidate to the nearest valid biome (Java searches 112 blocks = 7 chunks).
 *
 * The score is the fraction of captures whose nearest reported stronghold is
 * within the tolerance of *some* candidate of the rings modelled. A model that
 * cannot put a candidate near the answer is refuted; a model that can is a
 * candidate for the parameters, not a proof -- the tool prints the tolerance it
 * needed so the two cases stay distinguishable.
 *
 *   node tools/worldgen-algo/fit-strongholds.js
 *   node tools/worldgen-algo/fit-strongholds.js --json
 */

const { loadObservations } = require('./verify-placements')
const { JavaLcg, ringChunks } = require('./fit-placement')

/** MT19937 draws as doubles, for the non-Java engine. */
function mtDoubles (seed32, count) {
  const mt = new Uint32Array(624)
  mt[0] = seed32 >>> 0
  for (let i = 1; i < 624; i++) {
    const p = mt[i - 1]
    mt[i] = (Math.imul(p ^ (p >>> 30), 1812433253) + i) >>> 0
  }
  let index = 624
  const next32 = () => {
    if (index >= 624) {
      for (let i = 0; i < 624; i++) {
        const y = ((mt[i] & 0x80000000) | (mt[(i + 1) % 624] & 0x7fffffff)) >>> 0
        let n = mt[(i + 397) % 624] ^ (y >>> 1)
        if (y & 1) n ^= 0x9908b0df
        mt[i] = n >>> 0
      }
      index = 0
    }
    let y = mt[index++]
    y ^= y >>> 11
    y ^= (y << 7) & 0x9d2c5680
    y ^= (y << 15) & 0xefc60000
    y ^= y >>> 18
    return y >>> 0
  }
  const out = []
  for (let i = 0; i < count; i++) out.push(next32() / 4294967296)
  return out
}

/** One ring's candidate chunks, as [chunkX, chunkZ]. */
function ringCandidates (doubles, offset, ring, { distance, spread, base }) {
  const radius = base * distance * ring + (doubles[offset + 1] - 0.5) * distance * spread
  const angle = 2 * Math.PI * doubles[offset]
  return [Math.round(Math.cos(angle) * radius), Math.round(Math.sin(angle) * radius)]
}

function candidates (engine, seed, options) {
  const out = []
  const samples = 64
  const doubles = engine === 'java'
    ? (() => {
        const random = new JavaLcg(BigInt(seed))
        return Array.from({ length: samples }, () => random.nextDouble())
      })()
    : mtDoubles(seed >>> 0, samples)
  for (let ring = 1; ring <= (options.rings || 4); ring++) {
    out.push(ringCandidates(doubles, (ring - 1) * 2, ring, options))
  }
  return out
}

function scoreModel (rows, options) {
  let hits = 0
  const residuals = []
  for (const row of rows) {
    const targets = candidates(options.engine, row.seed, options)
    const cx = row.chunkX
    const cz = row.chunkZ
    let best = Infinity
    for (const [x, z] of targets) {
      const d = Math.max(Math.abs(x - cx), Math.abs(z - cz))
      if (d < best) best = d
    }
    residuals.push(best)
    if (best <= options.tolerance) hits++
  }
  return { hits, residuals }
}

function main () {
  const asJson = process.argv.includes('--json')
  const observations = loadObservations().filter((row) => row.id === 'minecraft:stronghold')
  const fromOrigin = observations.filter((row) => row.from[0] === 0 && row.from[1] === 0)

  if (!asJson) {
    console.log(`${observations.length} stronghold captures, ${fromOrigin.length} from 0,0`)
    console.log('seed  chunk          blocks          radius(chunks)  angle(deg)')
    for (const row of fromOrigin) {
      const radius = Math.hypot(row.chunkX, row.chunkZ)
      const angle = (Math.atan2(row.chunkZ, row.chunkX) * 180) / Math.PI
      console.log(
        String(row.seed).padEnd(5),
        (`${row.chunkX},${row.chunkZ}`).padEnd(14),
        (`${row.block[0]},${row.block[2]}`).padEnd(15),
        radius.toFixed(1).padEnd(15),
        angle.toFixed(1)
      )
    }
  }

  const results = []
  for (const engine of ['java', 'mt']) {
    for (const distance of [8, 12, 16, 20, 24, 28, 32, 40, 48, 64]) {
      for (const spread of [0, 1, 1.5, 2, 2.5, 3]) {
        for (const base of [4, 6]) {
          for (const tolerance of [7, 16, 32, 64]) {
            const scored = scoreModel(fromOrigin, { engine, distance, spread, base, tolerance, rings: 4 })
            results.push({ engine, distance, spread, base, tolerance, hits: scored.hits, total: fromOrigin.length })
          }
        }
      }
    }
  }
  results.sort((a, b) => b.hits - a.hits || a.tolerance - b.tolerance)

  if (asJson) {
    process.stdout.write(JSON.stringify(results.slice(0, 20), null, 2) + '\n')
    return
  }
  console.log('\nbest ring models (hits out of ' + fromOrigin.length + ', tolerance in chunks):')
  for (const row of results.slice(0, 10)) {
    console.log(`  ${row.hits}/${row.total}  engine ${row.engine} distance ${row.distance} spread ${row.spread} base ${row.base} tolerance ${row.tolerance}`)
  }
  const anyPerfect = results.some((row) => row.hits === fromOrigin.length)
  console.log(anyPerfect
    ? '\na model places a candidate near every capture: treat it as a parameter candidate, not a proof'
    : '\nno ring model in this family places a candidate near every capture: the ring parameters and the relocation rule are still open')
}

if (require.main === module) main()

module.exports = { scoreModel, candidates }
