#!/usr/bin/env node
'use strict'

/**
 * Compare two `openbds-worldgen-map/1` dumps (see tools/worldgen-map.js).
 *
 * Intended use: dump map A from OpenBDS and map B from any *external*
 * black-box export of a reference world (for example, a heightmap you
 * exported yourself from a world folder the official server generated on
 * your own machine). This tool only ever sees the two JSON files - it is
 * a measurement instrument for behavioral parity work, entirely separate
 * from any binary analysis.
 *
 * Maps must share origin/step/width to be comparable cell-by-cell.
 *
 * Usage: node tools/worldgen-compare.js a.json b.json
 * Exit code 0 if the maps are identical, 1 otherwise (stats always print).
 */

const fs = require('fs')

function loadMap (file) {
  const doc = JSON.parse(fs.readFileSync(file, 'utf8'))
  if (doc.format !== 'openbds-worldgen-map/1') {
    throw new Error(`${file}: not an openbds-worldgen-map/1 file`)
  }
  if (!Array.isArray(doc.heights) || doc.heights.length !== doc.width * doc.width) {
    throw new Error(`${file}: heights length does not match width`)
  }
  return doc
}

function compare (a, b) {
  if (a.originX !== b.originX || a.originZ !== b.originZ || a.step !== b.step || a.width !== b.width) {
    throw new Error('maps are not aligned: origin/step/width must match (re-dump with the same flags)')
  }
  const n = a.heights.length
  let sumAbs = 0
  let sumSq = 0
  let maxAbs = 0
  let exact = 0
  let within2 = 0
  let landSeaAgree = 0
  let biomeAgree = 0
  let biomeCompared = 0
  for (let i = 0; i < n; i++) {
    const d = Math.abs(a.heights[i] - b.heights[i])
    sumAbs += d
    sumSq += d * d
    if (d > maxAbs) maxAbs = d
    if (d === 0) exact++
    if (d <= 2) within2++
    if ((a.heights[i] < 63) === (b.heights[i] < 63)) landSeaAgree++
    if (a.biomes && b.biomes) {
      biomeCompared++
      if (a.biomes[i] === b.biomes[i]) biomeAgree++
    }
  }
  return {
    cells: n,
    seedA: a.seed,
    seedB: b.seed,
    meanAbsHeightDiff: sumAbs / n,
    rmseHeight: Math.sqrt(sumSq / n),
    maxAbsHeightDiff: maxAbs,
    exactHeightPct: (100 * exact) / n,
    within2Pct: (100 * within2) / n,
    landSeaAgreementPct: (100 * landSeaAgree) / n,
    biomeAgreementPct: biomeCompared ? (100 * biomeAgree) / biomeCompared : null,
    identical: exact === n && (!biomeCompared || biomeAgree === biomeCompared)
  }
}

function main () {
  const [fa, fb] = process.argv.slice(2)
  if (!fa || !fb) {
    console.error('Usage: node tools/worldgen-compare.js a.json b.json')
    process.exit(2)
  }
  const stats = compare(loadMap(fa), loadMap(fb))
  console.log(JSON.stringify(stats, null, 2))
  process.exit(stats.identical ? 0 : 1)
}

if (require.main === module) main()
module.exports = { loadMap, compare }
