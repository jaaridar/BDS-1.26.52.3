#!/usr/bin/env node
'use strict'

/**
 * Read the model-probe captures: each origin sits on a position the model
 * predicted, so a correct stronghold there makes `/locate` answer that chunk.
 *
 *   node tools/worldgen-algo/verify-probe.js
 *
 * Two rates come out, and they are the two claims the model makes:
 *
 *   gated    a cell whose gate draw is below 0.25 has a stronghold on its grid
 *            position, so the answer should be the origin chunk itself
 *   control  a cell whose draw is above it should *not* answer with the origin,
 *            which is what stops the first rate from being "everything answers
 *            itself"
 */

const fs = require('node:fs')
const path = require('node:path')
const { strongholdInCell, CELL } = require('../../src/world/stronghold')

const CAPTURE_ROOT = path.resolve(__dirname, '../../research/proprietary/bds-1.26.52.3/structures/captures')

function loadProbes (root) {
  const rows = []
  for (const entry of fs.readdirSync(root, { withFileTypes: true })) {
    if (!entry.isDirectory() || !entry.name.startsWith('stronghold_probe_')) continue
    for (const seedDir of fs.readdirSync(path.join(root, entry.name), { withFileTypes: true })) {
      if (!seedDir.isDirectory()) continue
      const file = path.join(root, entry.name, seedDir.name, 'structures.json')
      if (!fs.existsSync(file)) continue
      const capture = JSON.parse(fs.readFileSync(file, 'utf8'))
      for (const result of capture.results || []) {
        if (!result.from) continue
        const originChunk = [Math.floor(result.from[0] / 16), Math.floor(result.from[2] / 16)]
        const cell = [Math.floor(originChunk[0] / CELL), Math.floor(originChunk[1] / CELL)]
        const predicted = strongholdInCell(capture.seed, cell[0], cell[1])
        // The probe only touches model positions, so the origin is either the
        // grid position (gated cells) or the ungated position (controls).
        const onGridPosition = predicted.chunkX === originChunk[0] && predicted.chunkZ === originChunk[1]
        if (!onGridPosition) continue
        rows.push({
          seed: capture.seed,
          origin: originChunk,
          gated: predicted.gated,
          gate: predicted.gate,
          found: Boolean(result.found),
          answer: result.found ? [Math.floor(result.at[0] / 16), Math.floor(result.at[2] / 16)] : null
        })
      }
    }
  }
  return rows
}

function main () {
  if (!fs.existsSync(CAPTURE_ROOT)) throw new Error(`no captures at ${CAPTURE_ROOT}`)
  const rows = loadProbes(CAPTURE_ROOT)
  if (!rows.length) {
    console.log('no probe captures yet')
    return
  }
  const summarize = (label, list) => {
    const hit = list.filter((row) => row.answer && row.answer[0] === row.origin[0] && row.answer[1] === row.origin[1])
    const near = list.filter((row) => row.answer && Math.hypot(row.answer[0] - row.origin[0], row.answer[1] - row.origin[1]) <= 8)
    console.log(`${label}: ${list.length} probes, ${hit.length} answered with the origin chunk itself ` +
      `(${((100 * hit.length) / Math.max(1, list.length)).toFixed(1)}%), ${near.length} within 8 chunks`)
    return hit.length
  }
  const gated = rows.filter((row) => row.gated)
  const control = rows.filter((row) => !row.gated)
  const gatedHits = summarize('gated cells  ', gated)
  const controlHits = summarize('ungated cells', control)
  console.log(`\nseparation: gated ${gatedHits}/${gated.length} vs ungated ${controlHits}/${control.length}`)
  const wrong = gated.filter((row) => !row.answer || row.answer[0] !== row.origin[0] || row.answer[1] !== row.origin[1])
  for (const row of wrong.slice(0, 12)) {
    console.log(`  miss seed ${row.seed} at ${row.origin.join(',')} gate ${row.gate.toFixed(3)} -> ${row.answer ? row.answer.join(',') : 'nothing found'}`)
  }
}

if (require.main === module) main()

module.exports = { loadProbes }
