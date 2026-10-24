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
const { strongholdInCell, CELL: STRONGHOLD_CELL } = require('./stronghold')

const STATUS = {
  confirmed: 'confirmed',
  measured: 'measured',
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
      // Strongholds are the one set with its own placement code: a 200-chunk
      // cell grid whose cells carry one stronghold each, at the grid position
      // for a gated quarter of them and relocated otherwise.
      const cells = []
      const reach = Math.ceil(radiusChunks / STRONGHOLD_CELL) + 1
      const baseCellX = Math.floor(chunkX / STRONGHOLD_CELL)
      const baseCellZ = Math.floor(chunkZ / STRONGHOLD_CELL)
      for (let dz = -reach; dz <= reach; dz++) {
        for (let dx = -reach; dx <= reach; dx++) {
          const stronghold = strongholdInCell(seed, baseCellX + dx, baseCellZ + dz)
          const distance = Math.hypot(stronghold.blockX - x, stronghold.blockZ - z)
          if (distance > radiusChunks * 16) continue
          cells.push({ ...stronghold, distance })
        }
      }
      cells.sort((a, b) => a.distance - b.distance)
      out.push({
        id: placement.id,
        status: 'measured',
        note: '200-chunk cells, one stronghold each; the grid position is exact in 90% ' +
          'of the cells whose gate draw is below 0.25 and never in the others (74 of 114 ' +
          'captures exact), the rest are relocated by a biome query that is not modelled yet',
        candidates: cells.map((cell) => ({
          block: [cell.blockX, cell.blockZ],
          chunk: [cell.chunkX, cell.chunkZ],
          cell: [cell.cellX, cell.cellZ],
          distance: Math.round(cell.distance),
          gated: cell.gated
        }))
      })
      continue
    }
    const starts = candidateStarts(placement, seed, chunkX, chunkZ, radiusChunks)
    out.push({
      id: placement.id,
      status: STATUS[placement.evidence] || 'unconfirmed',
      note: placement.evidence === 'unknown' && !placement.note
        ? 'placement parameters are placeholders; use the oracle fit to confirm'
        : (placement.note || null),
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
  lines.push('the relocation of strongholds whose cell is not on the grid, and the')
  lines.push('per-structure biome/height checks that decide whether a candidate start')
  lines.push('actually becomes a structure.')
  lines.push('')
  lines.push(`placement data: ${PLACEMENT_SOURCE.measured}`)
  return lines.join('\n')
}

module.exports = { structuresNear, formatReport, STATUS }
