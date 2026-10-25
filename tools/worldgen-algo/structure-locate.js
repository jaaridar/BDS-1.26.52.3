'use strict'

/**
 * Ask the open implementation where structures are, for any seed.
 *
 *   node tools/worldgen-algo/structure-locate.js --seed 12345 --from 0,0 --id village
 *   node tools/worldgen-algo/structure-locate.js --seed 12345 --list
 *   node tools/worldgen-algo/structure-locate.js --seed 12345 --cell 3,-2 --id village
 *
 * This is the counterpart of `locate structure` on the server: it needs no
 * server, no world, and no recorded data. The numbers it uses come from
 * `structures-data.js`, which records where each set's placement parameters were
 * read from; anything not yet confirmed is reported as unconfirmed rather than
 * silently guessed.
 */

const path = require('node:path')
const { PLACEMENTS, PLACEMENT_SOURCE } = require('../../src/world/structures-data')
const { candidateStarts, structureInCell } = require('../../src/world/structure-placement')

function parseArgs (argv) {
  const args = { from: [0, 0], radius: 512, id: 'village', format: 'text' }
  for (let i = 2; i < argv.length; i++) {
    const arg = argv[i]
    const next = () => {
      const value = argv[++i]
      if (value === undefined) throw new Error(`${arg} needs a value`)
      return value
    }
    switch (arg) {
      case '--seed': args.seed = next(); break
      case '--from': args.from = next().split(',').map(Number); break
      case '--radius': args.radius = Number(next()); break
      case '--id': args.id = next(); break
      case '--cell': args.cell = next().split(',').map(Number); break
      case '--list': args.list = true; break
      case '--json': args.format = 'json'; break
      case '--help':
        console.log('usage: structure-locate.js --seed <n> [--id <set>] [--from x,z] [--radius chunks] [--list] [--json]')
        process.exit(0)
        break
      default: throw new Error(`unknown argument ${arg}`)
    }
  }
  if (args.seed === undefined) throw new Error('--seed is required')
  return args
}

/** Accept both a number and a string seed; Bedrock allows either. */
function normaliseSeed (seed) {
  const text = String(seed).trim()
  if (/^-?\d+$/.test(text)) return Number(text)
  // Non-numeric seeds are hashed by the engine; that hash is not measured yet.
  throw new Error(`non-numeric seed ${JSON.stringify(text)}: the engine's string-seed hash has not been recovered`)
}

function main () {
  const args = parseArgs(process.argv)
  const seed = normaliseSeed(args.seed)

  if (args.list) {
    const rows = Object.values(PLACEMENTS).map((placement) => ({
      id: placement.id,
      spacing: placement.spacing,
      separation: placement.separation,
      salt: placement.salt,
      spread: placement.spreadType || 'linear',
      confirmed: placement.confirmed === true,
      evidence: placement.evidence || 'unknown'
    }))
    if (args.format === 'json') {
      console.log(JSON.stringify({ seed, placements: rows, source: PLACEMENT_SOURCE }, null, 2))
      return
    }
    console.log(`seed ${seed}`)
    console.log('set'.padEnd(34), 'spacing'.padStart(7), 'sep'.padStart(4), 'salt'.padStart(11), 'spread'.padStart(10), 'status')
    for (const row of rows) {
      console.log(
        row.id.padEnd(34),
        String(row.spacing).padStart(7),
        String(row.separation).padStart(4),
        String(row.salt).padStart(11),
        row.spread.padStart(10),
        row.evidence === 'measured' ? 'measured on the server'
          : row.evidence === 'pack' ? 'from the vanilla data pack'
            : row.evidence === 'binary' ? 'read from the binary'
              : 'unconfirmed'
      )
    }
    return
  }

  const key = args.id.startsWith('minecraft:') ? args.id : `minecraft:${args.id}`
  const placement = PLACEMENTS[key] || PLACEMENTS[args.id]
  if (!placement) {
    throw new Error(`unknown set ${args.id}; known sets: ${Object.keys(PLACEMENTS).join(', ')}`)
  }

  if (!placement.spacing) {
    throw new Error(`${placement.id} does not use grid placement (ring layout); not modelled yet -- run findStronghold`)
  }

  if (args.cell) {
    const [cellX, cellZ] = args.cell
    const start = structureInCell(placement, seed, cellX, cellZ)
    const out = {
      seed, set: placement.id, cell: [cellX, cellZ],
      chunk: [start.chunkX, start.chunkZ],
      block: [start.chunkX * 16 + 8, start.chunkZ * 16 + 8],
      accepted: start.accepted
    }
    console.log(args.format === 'json' ? JSON.stringify(out, null, 2) : `${out.set} cell ${cellX},${cellZ} -> chunk ${out.chunk.join(',')} block ${out.block.join(',')}${out.accepted ? '' : ' (rejected by frequency)'}`)
    return
  }

  const [x, z] = args.from
  const starts = candidateStarts(placement, seed, Math.floor(x / 16), Math.floor(z / 16), args.radius)
  const out = {
    seed,
    set: placement.id,
    from: [x, z],
    radiusChunks: args.radius,
    confirmed: placement.confirmed === true,
    candidates: starts.map((start) => ({
      chunk: [start.chunkX, start.chunkZ],
      block: [start.blockX, start.blockZ],
      distance: Math.round(start.distance),
      cell: [start.cellX, start.cellZ]
    }))
  }
  if (args.format === 'json') {
    console.log(JSON.stringify(out, null, 2))
    return
  }
  console.log(`${out.set} for seed ${seed} near ${x},${z} (within ${args.radius} chunks)`)
  if (!out.confirmed) {
    console.log('note: this set\'s placement numbers are not yet confirmed against the server')
  }
  if (!starts.length) {
    console.log('no candidate start found')
    return
  }
  for (const [index, start] of starts.slice(0, 10).entries()) {
    console.log(
      `${String(index + 1).padStart(3)}. chunk ${String(start.chunkX).padStart(7)},${String(start.chunkZ).padStart(7)}` +
      `  block ${String(start.blockX).padStart(8)},${String(start.blockZ).padStart(8)}` +
      `  ${String(Math.round(start.distance)).padStart(6)} blocks away  cell ${start.cellX},${start.cellZ}`
    )
  }
}

try {
  main()
} catch (error) {
  console.error(error.message)
  process.exit(1)
}
