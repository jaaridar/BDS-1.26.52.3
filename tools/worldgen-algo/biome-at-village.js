#!/usr/bin/env node
'use strict'

/**
 * What biome is each probed village in?
 *
 * `locate biome <id>` from a chunk answers distance 0 exactly when that chunk is
 * in `<id>`, so a village's own chunk asked about a short list of biomes either
 * names its biome (one answer at distance 0) or names none of them. Each row
 * therefore gets the biome it is in, when the probe list covers it.
 *
 *   node tools/worldgen-algo/biome-at-village.js
 *
 * Cross-referencing with the stronghold labels is what tests whether the
 * villages that carry a stronghold are the ones in particular biomes.
 */

const fs = require('node:fs')
const path = require('node:path')
const { xz } = require('./structure-enumeration')

const CAPTURE_ROOT = path.resolve(__dirname, '../../research/proprietary/bds-1.26.52.3/structures/captures')

/** Village chunk -> biome, from a biome probe capture. */
function biomeAt (capture) {
  const byOrigin = new Map()
  for (const result of capture.results || []) {
    if (!Array.isArray(result.from) || !result.found || !Array.isArray(result.at)) continue
    const [fromX, fromZ] = xz(result.from)
    const [atX, atZ] = xz(result.at)
    const origin = `${Math.floor(fromX / 16)},${Math.floor(fromZ / 16)}`
    const distance = Math.hypot(atX - fromX, atZ - fromZ)
    if (!byOrigin.has(origin)) byOrigin.set(origin, [])
    if (distance < 16) byOrigin.get(origin).push({ biome: result.id, distance })
  }
  const out = new Map()
  for (const [origin, hits] of byOrigin) {
    if (!hits.length) { out.set(origin, null); continue }
    hits.sort((a, b) => a.distance - b.distance)
    out.set(origin, hits[0].biome)
  }
  return out
}

function main () {
  const rows = []
  for (const entry of fs.readdirSync(CAPTURE_ROOT, { withFileTypes: true })) {
    if (!entry.isDirectory() || !entry.name.startsWith('biome_probe_')) continue
    for (const seedDir of fs.readdirSync(path.join(CAPTURE_ROOT, entry.name), { withFileTypes: true })) {
      if (!seedDir.isDirectory()) continue
      const file = path.join(CAPTURE_ROOT, entry.name, seedDir.name, 'structures.json')
      if (!fs.existsSync(file)) continue
      const capture = JSON.parse(fs.readFileSync(file, 'utf8'))
      const biomes = biomeAt(capture)
      for (const [origin, biome] of biomes) {
        rows.push({ seed: String(capture.seed), chunk: origin.split(',').map(Number), biome })
      }
    }
  }
  if (!rows.length) { console.log('no biome_probe_* captures yet'); return }
  const counts = new Map()
  for (const row of rows) {
    const key = row.biome || '(none of the probed biomes)'
    counts.set(key, (counts.get(key) || 0) + 1)
  }
  console.log(`${rows.length} probed villages`)
  for (const [biome, n] of [...counts.entries()].sort((a, b) => b[1] - a[1])) {
    console.log(`  ${String(n).padStart(3)}  ${biome}`)
  }
  // The stronghold-hosting villages are the interesting subset, so they are
  // printed with their biome once the stronghold labels are available.
  const { collectLabels } = require('./village-strongholds')
  const labels = new Map(collectLabels().map((row) => [`${row.seed}:${row.chunk.join(',')}`, row.stronghold]))
  console.log('\nvillages by biome, split by whether they carry a stronghold:')
  const split = new Map()
  for (const row of rows) {
    const key = row.biome || '(none of the probed biomes)'
    if (!split.has(key)) split.set(key, { with: 0, without: 0 })
    const has = labels.get(`${row.seed}:${row.chunk.join(',')}`)
    if (has === undefined) continue
    if (has) split.get(key).with++
    else split.get(key).without++
  }
  for (const [biome, counts2] of split) {
    console.log(`  ${biome.padEnd(28)} stronghold ${counts2.with}  no stronghold ${counts2.without}`)
  }
}

if (require.main === module) main()

module.exports = { biomeAt }
