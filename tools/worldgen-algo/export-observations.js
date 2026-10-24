'use strict'

/**
 * Turn captured structure positions into the TSV the salt solver eats.
 *
 * For every observation the solver needs the cell the position falls in and
 * the offset inside that cell:
 *
 *     cellX  = floorDiv(chunkX, spacing)
 *     offX   = chunkX - cellX * spacing
 *
 * Those are forced by the grid model alone; nothing is fitted here. The only
 * thing the solver varies is the additive constant in the seed mix.
 *
 *   node tools/worldgen-algo/export-observations.js --id trail_ruins --mode 0
 */

const fs = require('node:fs')
const path = require('node:path')

const { PLACEMENTS } = require('../../src/world/structures-data')

function parseArgs (argv) {
  const args = {
    capture: 'research/proprietary/bds-1.26.52.3/structures',
    mode: 0,
    ids: null,
    spacing: null,
    separation: null
  }
  for (let i = 2; i < argv.length; i++) {
    const arg = argv[i]
    const next = () => {
      const value = argv[++i]
      if (value === undefined) throw new Error(`${arg} needs a value`)
      return value
    }
    switch (arg) {
      case '--capture': args.capture = next(); break
      case '--mode': args.mode = Number(next()); break
      case '--id': args.ids = [next()]; break
      case '--spacing': args.spacing = Number(next()); break
      case '--separation': args.separation = Number(next()); break
      default: throw new Error(`unknown argument ${arg}`)
    }
  }
  return args
}

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
      const seed = Number(capture.seed)
      if (list.some((observation) => observation.seed === seed)) continue
      list.push({ seed, chunk: [Math.floor(result.at[0] / 16), Math.floor(result.at[2] / 16)] })
    }
  }
  return byId
}

const floorDiv = (a, b) => Math.floor(a / b)

function main () {
  const args = parseArgs(process.argv)
  const byId = loadAll(args.capture)
  const lines = []
  for (const [id, observations] of byId) {
    if (args.ids && !args.ids.map((value) => value.replace(/^minecraft:/, '')).includes(id)) continue
    const placement = PLACEMENTS[`minecraft:${id}`] || {}
    const spacing = args.spacing ?? placement.spacing
    const separation = args.separation ?? placement.separation
    if (!spacing) continue
    for (const observation of observations) {
      const cellX = floorDiv(observation.chunk[0], spacing)
      const cellZ = floorDiv(observation.chunk[1], spacing)
      const offX = observation.chunk[0] - cellX * spacing
      const offZ = observation.chunk[1] - cellZ * spacing
      lines.push([id, spacing, separation, args.mode, observation.seed, cellX, cellZ, offX, offZ].join('\t'))
    }
  }
  if (!lines.length) {
    console.error('no observations selected')
    process.exit(1)
  }
  console.log(lines.join('\n'))
}

try {
  main()
} catch (error) {
  console.error(error.message)
  process.exit(1)
}
