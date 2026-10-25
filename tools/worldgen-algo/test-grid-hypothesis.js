'use strict'

/**
 * Is a structure position really a jittered-grid cell start?
 *
 * The resolver recovered from the binary places a structure at
 *
 *     chunk = cell * spacing + offset,   offset ∈ [0, spacing - separation)
 *
 * so every reported position must satisfy `chunk mod spacing < spacing -
 * separation` on both axes. That is a testable claim about the server's output
 * and it does not depend on the salt, the seed mix or the RNG -- only on the two
 * numbers the pack gives us.
 *
 * If a single observation falls outside the band, BDS is not placing structures
 * on a jittered grid, and the whole derivation question changes shape (the
 * likely alternative is that positions are snapped to a valid biome, which
 * would put them anywhere).
 *
 *   node tools/worldgen-algo/test-grid-hypothesis.js --capture <dir> --id trail_ruins
 */

const fs = require('node:fs')
const path = require('node:path')

const { PLACEMENTS } = require('../../src/world/structures-data')

function parseArgs (argv) {
  const args = { capture: 'research/proprietary/bds-1.26.52.3/structures', id: null }
  for (let i = 2; i < argv.length; i++) {
    const arg = argv[i]
    const next = () => {
      const value = argv[++i]
      if (value === undefined) throw new Error(`${arg} needs a value`)
      return value
    }
    switch (arg) {
      case '--capture': args.capture = next(); break
      case '--id': args.id = next(); break
      case '--json': args.json = true; break
      default: throw new Error(`unknown argument ${arg}`)
    }
  }
  return args
}

/** Every reported chunk for every captured structure, keyed by identifier. */
function loadAll (dir) {
  const byId = new Map()
  for (const entry of fs.readdirSync(dir)) {
    if (!entry.startsWith('seed-')) continue
    const file = path.join(dir, entry, 'structures.json')
    if (!fs.existsSync(file)) continue
    const capture = JSON.parse(fs.readFileSync(file, 'utf8'))
    for (const result of capture.results || []) {
      if (!result.found || !result.at) continue
      const id = (result.resolvedId || '').replace(/^minecraft:/, '')
      if (!id) continue
      if (!byId.has(id)) byId.set(id, [])
      const list = byId.get(id)
      if (list.some((observation) => observation.seed === Number(capture.seed))) continue
      list.push({
        seed: Number(capture.seed),
        chunk: [Math.floor(result.at[0] / 16), Math.floor(result.at[2] / 16)],
        block: [result.at[0], result.at[2]]
      })
    }
  }
  return byId
}

const mod = (value, divisor) => ((value % divisor) + divisor) % divisor

function main () {
  const args = parseArgs(process.argv)
  const byId = loadAll(args.capture)
  const report = []
  for (const [id, observations] of byId) {
    if (args.id && id !== args.id.replace(/^minecraft:/, '')) continue
    const placement = PLACEMENTS[`minecraft:${id}`]
    if (!placement || !placement.spacing) continue
    const span = placement.spacing - placement.separation
    let inside = 0
    const outside = []
    for (const observation of observations) {
      const rx = mod(observation.chunk[0], placement.spacing)
      const rz = mod(observation.chunk[1], placement.spacing)
      if (rx < span && rz < span) inside++
      else outside.push({ seed: observation.seed, chunk: observation.chunk, rx, rz })
    }
    report.push({
      id,
      spacing: placement.spacing,
      separation: placement.separation,
      observations: observations.length,
      inside,
      outside,
      // Probability that N uniform-random positions would all land in the band.
      chanceIfRandom: Math.pow(span / placement.spacing, 2 * observations.length)
    })
  }

  if (!report.length) {
    console.error('no observations for a structure with known spacing')
    process.exit(1)
  }

  for (const row of report) {
    console.log(`${row.id}: spacing ${row.spacing}, separation ${row.separation} -> offset band [0,${row.spacing - row.separation})`)
    console.log(`  observations: ${row.observations}, inside the band: ${row.inside}, outside: ${row.outside.length}`)
    if (row.outside.length) {
      console.log('  outside (a jittered grid cannot produce these):')
      for (const miss of row.outside) {
        console.log(`    seed ${miss.seed}: chunk ${miss.chunk.join(',')} -> mod ${miss.rx},${miss.rz}`)
      }
    }
    console.log(`  chance of this happening by luck with random placement: ${row.chanceIfRandom.toExponential(2)}`)
    console.log('')
  }

  const grid = report.every((row) => row.outside.length === 0)
  console.log(grid
    ? 'consistent with a jittered grid: every observed position could be a cell start'
    : 'NOT a jittered grid: at least one observed position cannot be a cell start')

  if (args.json) console.log(JSON.stringify(report, null, 2))
}

try {
  main()
} catch (error) {
  console.error(error.message)
  process.exit(1)
}
