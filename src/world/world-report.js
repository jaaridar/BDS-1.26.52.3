'use strict'

/**
 * What this seed's world contains -- from the seed alone.
 *
 * This is the user-facing entry point of the world generator: no server, no
 * recorded data, no network. It composes whatever subsystems are implemented
 * and, just as importantly, says what is not: every section carries a status so
 * a reader can tell a fitted answer from a modelled one from an unknown.
 *
 * Current state:
 *
 *   structures   placement modelled and, per set, either confirmed against the
 *                server, read from the vanilla pack, or explicitly unknown
 *   terrain      the noise primitive is implemented but the density function,
 *                climate routing and surface rules are not wired up, so no
 *                block can be predicted yet
 *   biomes       not implemented
 *
 * The point of the status lines is that the gaps stay visible instead of turning
 * into plausible-looking output.
 */

const { PLACEMENTS, PLACEMENT_SOURCE } = require('./structures-data')
const { candidateStarts } = require('./structure-placement')

const STATUS = {
  confirmed: 'confirmed',
  pack: 'from pack',
  unknown: 'unconfirmed'
}

/**
 * Structures near a position for a seed.
 *
 * @param {number} seed
 * @param {object} options {x, z, radiusChunks, only}
 */
function structuresNear (seed, { x = 0, z = 0, radiusChunks = 256, only = null } = {}) {
  const chunkX = Math.floor(x / 16)
  const chunkZ = Math.floor(z / 16)
  const out = []
  for (const placement of Object.values(PLACEMENTS)) {
    if (only && !only.includes(placement.id) && !only.includes(placement.id.replace('minecraft:', ''))) continue
    if (!placement.spacing) {
      out.push({
        id: placement.id,
        status: 'not modelled',
        note: 'ring placement (strongholds) has not been recovered yet',
        candidates: []
      })
      continue
    }
    const starts = candidateStarts(placement, seed, chunkX, chunkZ, radiusChunks)
    out.push({
      id: placement.id,
      status: STATUS[placement.evidence] || 'unconfirmed',
      note: placement.evidence === 'unknown'
        ? 'placement parameters are placeholders; use the oracle fit to confirm'
        : null,
      candidates: starts.map((start) => ({
        block: [start.blockX, start.blockZ],
        chunk: [start.chunkX, start.chunkZ],
        cell: [start.cellX, start.cellZ],
        distance: Math.round(start.distance)
      }))
    })
  }
  return { seed, from: [x, z], radiusChunks, structures: out }
}

/** A one-screen text report. */
function formatReport (report) {
  const lines = []
  lines.push(`seed ${report.seed}, structures within ${report.radiusChunks} chunks of ${report.from.join(',')}`)
  lines.push('')
  for (const structure of report.structures) {
    lines.push(`${structure.id}  [${structure.status}]`)
    if (structure.note) lines.push(`  note: ${structure.note}`)
    if (!structure.candidates.length) {
      if (structure.status !== 'not modelled') lines.push('  no candidate start in range')
      continue
    }
    const nearest = structure.candidates[0]
    lines.push(`  nearest: block ${nearest.block.join(',')}  chunk ${nearest.chunk.join(',')}  (${nearest.distance} blocks away, cell ${nearest.cell.join(',')})`)
    if (structure.candidates.length > 1) {
      const others = structure.candidates.slice(1, 4)
        .map((candidate) => `${candidate.block.join(',')} (${candidate.distance})`)
        .join('; ')
      lines.push(`  next:    ${others}`)
    }
  }
  lines.push('')
  lines.push('not modelled yet: terrain height and blocks, biome assignment, surface rules,')
  lines.push('stronghold rings, and the per-structure biome/height checks that decide whether')
  lines.push('a candidate start actually becomes a structure.')
  lines.push('')
  lines.push(`placement data: ${PLACEMENT_SOURCE.measured}`)
  return lines.join('\n')
}

module.exports = { structuresNear, formatReport, STATUS }
