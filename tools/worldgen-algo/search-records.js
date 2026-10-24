'use strict'

/**
 * Recover placement tuples from the binary's record-writing immediates, then
 * let the server's own answers pick the right one.
 *
 * Code that builds a placement record has to materialise three numbers: spacing,
 * separation and salt (plus a spread type). A constructor writes them as dword
 * stores, `C7 /0 disp32 imm32`, and `scan-binary.py --imm-stores` already
 * clusters those stores by position in .text. What it cannot say is which
 * cluster belongs to which structure set, or which of the three numbers is
 * which.
 *
 * So this tool does not interpret: it enumerates. Every cluster that holds two
 * small immediates and one large one yields candidate tuples, and each tuple is
 * tested against the captured `locate structure` answers. A tuple that
 * reproduces a structure's positions on every seed is that structure's
 * placement; nothing about the cluster needs to be guessed.
 *
 *   node tools/worldgen-algo/search-records.js
 *   node tools/worldgen-algo/search-records.js --min-observations 6
 */

const fs = require('node:fs')

const { loadObservations, byId, floorDiv } = require('./observations')
const { structureInCell } = require('../../src/world/structure-placement')

const SCAN = 'research/proprietary/bds-1.26.52.3/structures/scan-records/scan.json'
const DATA_SCAN = 'research/proprietary/bds-1.26.52.3/structures/scan-data/scan.json'

function parseArgs (argv) {
  const args = { scan: null, dataScan: DATA_SCAN, minObservations: 6, blocks: 8, limit: 400000, spread: null }
  for (let i = 2; i < argv.length; i++) {
    const arg = argv[i]
    const next = () => {
      const value = argv[++i]
      if (value === undefined) throw new Error(`${arg} needs a value`)
      return value
    }
    switch (arg) {
      case '--scan': args.scan = next(); break
      case '--data-scan': args.dataScan = next(); break
      case '--min-observations': args.minObservations = Number(next()); break
      case '--blocks': args.blocks = Number(next()); break
      case '--limit': args.limit = Number(next()); break
      case '--spread': args.spread = next(); break
      default: throw new Error(`unknown argument ${arg}`)
    }
  }
  return args
}

/** Small immediates that plausibly mean spacing or separation. */
const isSmall = (value) => value >= 1 && value <= 128
/** Large immediates that plausibly mean a salt. */
const isLarge = (value) => Math.abs(value) >= 1000

function candidateTuples (scan, limit) {
  const tuples = []
  const seen = new Set()
  for (const cluster of scan.imm_clusters || []) {
    const stores = cluster.stores || []
    const smalls = stores.filter((store) => isSmall(store.imm_signed))
    const larges = stores.filter((store) => isLarge(store.imm_signed))
    if (!smalls.length || !larges.length) continue
    for (const a of smalls) {
      for (const b of smalls) {
        if (a === b) continue
        for (const salt of larges) {
          const spacing = a.imm_signed
          const separation = b.imm_signed
          if (separation >= spacing) continue
          const key = `${spacing}:${separation}:${salt.imm_signed}`
          if (seen.has(key)) continue
          seen.add(key)
          tuples.push({
            spacing,
            separation,
            salt: salt.imm_signed,
            at: salt.ghidra,
            cluster: cluster.start
          })
          if (tuples.length >= limit) return tuples
        }
      }
    }
  }
  return tuples
}

/** Does this tuple put every observation within `blocks` of the reported block? */
function scoreTuple (tuple, observations, spreadType, blocks, spacingOverride) {
  const spacing = spacingOverride ?? tuple.spacing
  const placement = {
    id: 'candidate',
    spacing,
    separation: tuple.separation,
    salt: tuple.salt,
    spreadType
  }
  if (placement.separation >= placement.spacing) return null
  let worst = 0
  for (const observation of observations) {
    const chunkX = floorDiv(observation.block[0], 16)
    const chunkZ = floorDiv(observation.block[1], 16)
    const predicted = structureInCell(placement, observation.seed,
      floorDiv(chunkX, placement.spacing), floorDiv(chunkZ, placement.spacing))
    const dx = observation.block[0] - predicted.chunkX * 16
    const dz = observation.block[1] - predicted.chunkZ * 16
    worst = Math.max(worst, Math.abs(dx), Math.abs(dz))
    if (Math.abs(dx) > blocks || Math.abs(dz) > blocks) return null
  }
  return { worst, placement }
}

/** Tuples already recovered from the data sections, if that scan has run. */
function dataTuples (file, limit) {
  if (!fs.existsSync(file)) return []
  const scan = JSON.parse(fs.readFileSync(file, 'utf8'))
  return (scan.data_records || []).slice(0, limit).map((record) => ({
    spacing: record.spacing,
    separation: record.separation,
    salt: record.salt,
    at: record.ghidra,
    cluster: record.offset
  }))
}

function main () {
  const args = parseArgs(process.argv)
  const tuples = []
  const seen = new Set()
  const addTuples = (list, source) => {
    for (const tuple of list) {
      const key = `${tuple.spacing}:${tuple.separation}:${tuple.salt}`
      if (seen.has(key)) continue
      seen.add(key)
      tuples.push({ ...tuple, source })
    }
  }
  if (args.scan) {
    if (!fs.existsSync(args.scan)) {
      console.error(`missing ${args.scan}`)
      process.exit(1)
    }
    const scan = JSON.parse(fs.readFileSync(args.scan, 'utf8'))
    addTuples(candidateTuples(scan, args.limit), 'code')
    console.log(`# ${(scan.imm_clusters || []).length} store clusters -> ${tuples.length} tuples`)
  }
  const fromData = dataTuples(args.dataScan, args.limit)
  if (fromData.length) {
    addTuples(fromData, 'data')
    console.log(`# ${fromData.length} data-section records -> ${tuples.length} tuples total`)
  }
  if (!tuples.length) {
    console.error('no candidate tuples: pass --scan and/or --data-scan')
    process.exit(1)
  }

  const groups = byId(loadObservations())
  const spreadTypes = args.spread ? [args.spread] : ['linear', 'triangular']

  for (const [id, observations] of [...groups].sort()) {
    if (observations.length < args.minObservations) continue
    const hits = []
    for (const tuple of tuples) {
      for (const spreadType of spreadTypes) {
        const result = scoreTuple(tuple, observations, spreadType, args.blocks)
        if (result) {
          hits.push({ ...result, tuple, spreadType })
          break
        }
      }
    }
    if (!hits.length) {
      console.log(`${id}\t${observations.length} observations\tno candidate from the binary fits`)
      continue
    }
    hits.sort((a, b) => a.worst - b.worst)
    for (const hit of hits.slice(0, 5)) {
      console.log(`${id}\t${observations.length} observations\tspacing ${hit.placement.spacing}` +
        ` separation ${hit.placement.separation} salt ${hit.placement.salt} ${hit.spreadType}` +
        `\tworst ${hit.worst} blocks\timmediate at 0x${hit.tuple.at.toString(16)}`)
    }
  }
}

try {
  main()
} catch (error) {
  console.error(error.message)
  process.exit(1)
}
