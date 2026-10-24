'use strict'

/**
 * One loader for every captured `locate structure` answer.
 *
 * Captures are written per probe (`captures/<id set>/seed-<n>/structures.json`)
 * and older probes sit next to them (`seed-<n>/structures.json`), so the reader
 * walks the whole tree and de-duplicates by (seed, identifier): the same world
 * asked from two different origins answers the same structure, and counting it
 * twice would inflate a fit.
 */

const fs = require('node:fs')
const path = require('node:path')

const DEFAULT_ROOT = 'research/proprietary/bds-1.26.52.3/structures'

/** Every structures.json under a directory, however deeply nested. */
function findCaptureFiles (directory, out = []) {
  if (!fs.existsSync(directory)) return out
  for (const entry of fs.readdirSync(directory, { withFileTypes: true })) {
    const full = path.join(directory, entry.name)
    if (entry.isDirectory()) findCaptureFiles(full, out)
    else if (entry.name === 'structures.json') out.push(full)
  }
  return out.sort()
}

/**
 * @param {string} root capture root
 * @returns {Array<{seed: number, id: string, block: number[], file: string}>}
 */
function loadObservations (root = DEFAULT_ROOT) {
  const seen = new Set()
  const out = []
  for (const file of findCaptureFiles(root)) {
    let capture
    try {
      capture = JSON.parse(fs.readFileSync(file, 'utf8'))
    } catch {
      continue
    }
    const seed = Number(capture.seed)
    if (!Number.isFinite(seed)) continue
    for (const result of capture.results || []) {
      if (!result.found || !Array.isArray(result.at)) continue
      const id = (result.resolvedId || '').replace(/^minecraft:/, '')
      if (!id) continue
      // Keyed by position, not by seed: asking from several origins finds
      // several *different* structures in the same world, and each one is a
      // separate observation. The same structure reached from two origins is
      // the one thing that has to collapse.
      const key = `${seed}\u0000${id}\u0000${result.at[0]}\u0000${result.at[2]}`
      if (seen.has(key)) continue
      seen.add(key)
      out.push({ seed, id, block: [result.at[0], result.at[2]], file })
    }
  }
  return out
}

/** Group by identifier; keys are bare identifiers, not namespaced ones. */
function byId (observations) {
  const groups = new Map()
  for (const observation of observations) {
    if (!groups.has(observation.id)) groups.set(observation.id, [])
    groups.get(observation.id).push(observation)
  }
  return groups
}

const floorDiv = (a, b) => Math.floor(a / b)

/**
 * The cell a reported position claims, and the offsets it implies.
 *
 * The cell is forced by the model -- the reported position has to belong to the
 * cell that placed it -- so nothing is fitted here. `offX`/`offZ` are the
 * offsets the solver has to reproduce.
 */
function toSolverRows (id, observations, { spacing, separation, spreadType = 'linear' }) {
  const mode = spreadType === 'triangular' ? 1 : 0
  return observations.map((observation) => {
    const chunkX = floorDiv(observation.block[0], 16)
    const chunkZ = floorDiv(observation.block[1], 16)
    const cellX = floorDiv(chunkX, spacing)
    const cellZ = floorDiv(chunkZ, spacing)
    return {
      chunkX,
      chunkZ,
      cellX,
      cellZ,
      offX: chunkX - cellX * spacing,
      offZ: chunkZ - cellZ * spacing,
      line: [id, spacing, separation, mode, observation.seed, cellX, cellZ,
        chunkX - cellX * spacing, chunkZ - cellZ * spacing].join('\t')
    }
  })
}

module.exports = {
  DEFAULT_ROOT,
  findCaptureFiles,
  loadObservations,
  byId,
  floorDiv,
  toSolverRows
}
