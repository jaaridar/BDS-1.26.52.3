#!/usr/bin/env node
'use strict'

/**
 * Build a sweep plan that probes the model itself.
 *
 * A sweep that walks a rectangle only shows which structures are nearest to a
 * grid of origins. This plan walks the *model*: for each seed it takes the
 * cells whose gate draw is below 0.25, whose grid position the captures have
 * never seen, and puts an origin exactly on that position. If the model is
 * right, `/locate` from a stronghold's own position answers that position --
 * distance zero. If it is wrong, the answer is somewhere else and says so.
 *
 * Non-gated cells are probed the same way as controls, so the two rates can be
 * compared instead of assumed.
 *
 *   node tools/worldgen-algo/plan-stronghold-probe.js --seed 1 --count 30
 *   node tools/worldgen-algo/plan-stronghold-probe.js --json > plan.json
 */

const path = require('node:path')
const { loadEnumeration } = require('./structure-enumeration')
const { strongholdInCell, CELL } = require('../../src/world/stronghold')

const CAPTURE_ROOT = path.resolve(__dirname, '../../research/proprietary/bds-1.26.52.3/structures/captures')

function parseArgs (argv) {
  const args = { seeds: ['1'], count: 24, radius: 1500, json: false }
  for (let i = 0; i < argv.length; i++) {
    switch (argv[i]) {
      case '--seed': args.seeds = String(argv[++i]).split(','); break
      case '--count': args.count = Number(argv[++i]); break
      case '--radius': args.radius = Number(argv[++i]); break
      case '--json': args.json = true; break
      default: throw new Error(`unknown argument ${argv[i]}`)
    }
  }
  return args
}

/** Every stronghold position already captured for a seed. */
function seenFor (seed) {
  const seen = new Set()
  for (const slug of ['stronghold_enum', 'stronghold_enum2', 'stronghold_enum3', 'stronghold_seeds']) {
    let seeds
    try {
      ({ seeds } = loadEnumeration(slug, 'stronghold'))
    } catch {
      continue
    }
    for (const entry of seeds) {
      if (String(entry.seed) !== String(seed)) continue
      for (const answer of entry.answers) seen.add(`${answer.chunkX},${answer.chunkZ}`)
    }
  }
  return seen
}

/**
 * Predicted positions to probe: `count` gated cells the captures never saw, and
 * the same number of ungated cells as a control. The origin is the block centre
 * of the predicted chunk, so a correct answer is that chunk itself.
 */
function probeFor (seed, { count, radius }) {
  const seen = seenFor(seed)
  const reach = Math.ceil(radius / CELL)
  const gated = []
  const control = []
  for (let cellZ = -reach; cellZ <= reach; cellZ++) {
    for (let cellX = -reach; cellX <= reach; cellX++) {
      const stronghold = strongholdInCell(seed, cellX, cellZ)
      if (Math.hypot(stronghold.chunkX, stronghold.chunkZ) > radius) continue
      if (seen.has(`${stronghold.chunkX},${stronghold.chunkZ}`)) continue
      const entry = { cell: [cellX, cellZ], chunk: [stronghold.chunkX, stronghold.chunkZ], gate: stronghold.gate }
      if (stronghold.gated) gated.push(entry)
      else control.push(entry)
    }
  }
  // Even spacing over each list rather than the first N, so the probe is not
  // biased towards one corner of the map.
  const pick = (list, n) => {
    const out = []
    for (let i = 0; i < n && list.length; i++) out.push(list[Math.floor((i * list.length) / n)])
    return out
  }
  return { gated: pick(gated, count), control: pick(control, count), seen: [...seen] }
}

function main () {
  const args = parseArgs(process.argv.slice(2))
  const probes = args.seeds.map((seed) => ({ seed, ...probeFor(seed, args) }))
  if (args.json) {
    const sweeps = probes.map((probe) => ({
      slug: `stronghold_probe_${probe.seed.replace(/[^0-9a-zA-Z]/g, '_')}`,
      ids: ['stronghold'],
      seeds: [probe.seed],
      note: 'origins are the model\'s own predicted positions: gated cells first, then ungated controls',
      origins: [...probe.gated, ...probe.control].map((entry) => `${entry.chunk[0] * 16 + 8},${entry.chunk[1] * 16 + 8}`)
    }))
    console.log(JSON.stringify({ sweeps }, null, 2))
    return
  }
  for (const probe of probes) {
    console.log(`seed ${probe.seed}: ${probe.gated.length} gated probes, ${probe.control.length} controls, ${probe.seen.length} already seen`)
    for (const entry of [...probe.gated, ...probe.control].slice(0, 8)) {
      console.log(`  ${entry.gated === false ? 'ungated' : 'gated  '} cell ${entry.cell.join(',')} chunk ${entry.chunk.join(',')} gate ${entry.gate.toFixed(3)}`)
    }
  }
}

if (require.main === module) main()

module.exports = { probeFor }
