#!/usr/bin/env node
'use strict'

/**
 * The measured tallies, gathered by running the repository's own verifiers.
 *
 * A web page that quotes "98/98 captured positions" is quoting a number that
 * lives in a comment somewhere and can drift the moment a capture is added. This
 * module instead *runs* the verifiers and hands back what they printed, so the
 * seed finder, the dossier and anything else generated from here always show the
 * current tally -- or say that the corpus is not present, rather than showing a
 * number nobody can reproduce.
 *
 * Both verifiers read `research/proprietary/.../structures/captures`, which is
 * tracked in this repository but is not redistributed as open source (see
 * docs/licensing.md). When that directory is missing, the tallies are null and
 * callers must degrade to a neutral label.
 */

const path = require('node:path')
const { execFileSync } = require('node:child_process')

const ROOT = path.resolve(__dirname, '..', '..')

/** Run a verifier that can print JSON, and parse it. */
function runJson (script, args = []) {
  try {
    const output = execFileSync(process.execPath, [path.join(ROOT, script), ...args, '--json'], {
      cwd: ROOT,
      encoding: 'utf8',
      stdio: ['ignore', 'pipe', 'ignore'],
      maxBuffer: 64 * 1024 * 1024
    })
    return JSON.parse(output)
  } catch {
    return null
  }
}

/** Per-set placement tallies, as `verify-placements.js` scores them. */
function placementTallies () {
  const rows = runJson('tools/worldgen-algo/verify-placements.js')
  if (!rows) return null
  return rows.map((row) => ({
    id: row.id,
    engine: row.engine || null,
    spacing: row.spacing || null,
    separation: row.separation || null,
    salt: row.salt ?? null,
    spread: row.spread || null,
    exact: row.exact ?? null,
    withinOne: row.withinOne ?? null,
    total: row.total ?? null,
    status: row.status
  }))
}

/** Stronghold tallies: gated cells against ungated cells, exact against relocated. */
function strongholdTally () {
  const rows = runJson('tools/worldgen-algo/verify-strongholds.js')
  if (!rows) return null
  const total = { observations: 0, exact: 0, relocated: 0, gated: 0, gatedExact: 0, gatedRelocated: 0, ungated: 0, ungatedExact: 0, ungatedRelocated: 0 }
  const sets = []
  for (const row of rows) {
    const gated = (row.exactGated || 0) + (row.relocatedGated || 0)
    const gatedExact = row.exactGated || 0
    const ungated = row.total - gated
    const ungatedExact = (row.exact || 0) - gatedExact
    total.observations += row.total
    total.exact += row.exact
    total.relocated += row.relocated
    total.gated += gated
    total.gatedExact += gatedExact
    total.gatedRelocated += (row.relocatedGated || 0)
    total.ungated += ungated
    total.ungatedExact += ungatedExact
    total.ungatedRelocated += ungated - ungatedExact
    sets.push({ slug: row.slug, observations: row.total, exact: row.exact, gated, gatedExact })
  }
  return { total, sets }
}

/** Everything, with the commands that produced it so a reader can re-run them. */
function collect () {
  const placements = placementTallies()
  const strongholds = strongholdTally()
  return {
    placements,
    strongholds,
    commands: [
      'node tools/worldgen-algo/verify-placements.js',
      'node tools/worldgen-algo/verify-strongholds.js',
      'node tools/worldgen-algo/verify-locate.js',
      'node tools/worldgen-algo/world.js --seed 12345'
    ],
    available: Boolean(placements || strongholds)
  }
}

module.exports = { collect, placementTallies, strongholdTally }

if (require.main === module) {
  const evidence = collect()
  console.log(JSON.stringify(evidence, null, 2))
}
