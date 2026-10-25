#!/usr/bin/env node
'use strict'

/**
 * The strongholds that are not on the 200-chunk grid.
 *
 * Every `/locate` answer is either a cell's grid position or something else. The
 * something-else only appears near spawn, which is the signature of a second
 * placement covering the middle of the map, so this tool collects those
 * positions per seed and prints them as radius and angle from the origin --
 * exactly the coordinates a ring algorithm would produce.
 *
 *   node tools/worldgen-algo/near-spawn-strongholds.js
 *   node tools/worldgen-algo/near-spawn-strongholds.js --json
 *
 * Nothing here fits anything: it is the measurement the fit needs.
 */

const fs = require('node:fs')
const path = require('node:path')
const { xz } = require('./structure-enumeration')
const { strongholdInCell, CELL } = require('../../src/world/stronghold')

const CAPTURE_ROOT = path.resolve(__dirname, '../../research/proprietary/bds-1.26.52.3/structures/captures')

function parseArgs (argv) {
  const args = { json: false }
  for (let i = 0; i < argv.length; i++) {
    if (argv[i] === '--json') args.json = true
    else throw new Error(`unknown argument ${argv[i]}`)
  }
  return args
}

/** Is this chunk a cell grid position for this seed? */
function onGrid (seed, chunkX, chunkZ) {
  const baseX = Math.floor(chunkX / CELL)
  const baseZ = Math.floor(chunkZ / CELL)
  for (let dx = -1; dx <= 1; dx++) {
    for (let dz = -1; dz <= 1; dz++) {
      const stronghold = strongholdInCell(seed, baseX + dx, baseZ + dz)
      if (stronghold.chunkX === chunkX && stronghold.chunkZ === chunkZ) return stronghold
    }
  }
  return null
}

function collect () {
  const bySeed = new Map()
  for (const entry of fs.readdirSync(CAPTURE_ROOT, { withFileTypes: true })) {
    if (!entry.isDirectory()) continue
    for (const seedDir of fs.readdirSync(path.join(CAPTURE_ROOT, entry.name), { withFileTypes: true })) {
      if (!seedDir.isDirectory()) continue
      const file = path.join(CAPTURE_ROOT, entry.name, seedDir.name, 'structures.json')
      if (!fs.existsSync(file)) continue
      const capture = JSON.parse(fs.readFileSync(file, 'utf8'))
      const seed = String(capture.seed)
      if (!bySeed.has(seed)) bySeed.set(seed, { offGrid: new Map(), onGrid: new Map() })
      const bucket = bySeed.get(seed)
      for (const result of capture.results || []) {
        if (!result.found || !Array.isArray(result.at)) continue
        const id = String(result.resolvedId || result.id || '')
        if (!id.includes('stronghold')) continue
        const [blockX, blockZ] = xz(result.at)
        const chunkX = Math.floor(blockX / 16)
        const chunkZ = Math.floor(blockZ / 16)
        const key = `${chunkX},${chunkZ}`
        const grid = onGrid(seed, chunkX, chunkZ)
        if (grid) bucket.onGrid.set(key, { chunkX, chunkZ, gated: grid.gated })
        else bucket.offGrid.set(key, { chunkX, chunkZ })
      }
    }
  }
  const out = []
  for (const [seed, bucket] of bySeed) {
    const offGrid = [...bucket.offGrid.values()].map((entry) => ({
      ...entry,
      radiusChunks: Math.hypot(entry.chunkX, entry.chunkZ),
      angleDegrees: (Math.atan2(entry.chunkZ, entry.chunkX) * 180) / Math.PI
    })).sort((a, b) => a.radiusChunks - b.radiusChunks)
    const onGridPositions = [...bucket.onGrid.values()]
    out.push({
      seed,
      onGrid: onGridPositions.length,
      offGridCount: offGrid.length,
      offGrid,
      offGridPositiveGate: offGrid.filter((entry) => {
        const cell = strongholdInCell(seed, Math.floor(entry.chunkX / CELL), Math.floor(entry.chunkZ / CELL))
        return cell.gated
      }).length
    })
  }
  return out
}

function main () {
  const args = parseArgs(process.argv.slice(2))
  const rows = collect()
  if (args.json) {
    console.log(JSON.stringify(rows, null, 2))
    return
  }
  for (const row of rows) {
    console.log(`seed ${row.seed}: ${row.onGrid} on-grid answers, ${row.offGridCount} distinct off-grid strongholds` +
      ` (${row.offGridPositiveGate} of them inside a gated cell)`)
    for (const entry of row.offGrid) {
      console.log(`   chunk ${String(entry.chunkX).padStart(5)},${String(entry.chunkZ).padStart(5)}` +
        `  radius ${entry.radiusChunks.toFixed(1).padStart(6)} chunks  angle ${entry.angleDegrees.toFixed(1).padStart(7)}`)
    }
  }
}

if (require.main === module) main()

module.exports = { collect, onGrid }
