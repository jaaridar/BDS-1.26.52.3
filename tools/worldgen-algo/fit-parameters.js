'use strict'

/**
 * Recover the placement parameters of a structure set from captures alone.
 *
 * Two of Bedrock's structure sets ship their placement in JSON
 * (`worldgen/structure_sets/*.brarchive`), so for those the spacing, separation,
 * salt and spread type are read rather than fitted. Every other set has its
 * numbers compiled into the binary, and the earlier attempts to find them --
 * scanning `.text` immediates, scanning `.rodata` dword runs, sweeping the salts
 * the Java version uses -- all came back empty. Those scans looked for values we
 * had guessed. This tool stops guessing and fits.
 *
 * The model is the one the decompiled resolver implements:
 *
 *     cell  = floorDiv(chunk, spacing)
 *     off   = chunk - cell * spacing            has to be in [0, spacing - separation)
 *     state = ((cellZ*132897987541 + cellX*341873128712 + seed + salt)
 *              ^ 0x5deece66d) & 2^48-1
 *     draw  = (state >> 17) % span              span = spacing - separation
 *     off   = draw                              (linear)
 *     off   = (draw1 + draw2) / 2               (triangular)
 *
 * Stage 1 tests the part that needs no salt at all: every reported chunk must
 * sit inside the offset band of its own cell. That is a cheap, strong filter --
 * one observation survives a wrong pair with probability (span/spacing)^2.
 *
 * Stage 2 sweeps the whole 32-bit salt space for the pairs stage 1 kept. The
 * sweep is exhaustive, so a set either yields the unique constant that
 * reproduces every capture or has no such constant, which refutes the model for
 * that set instead of leaving a plausible-looking approximation behind.
 *
 *   node tools/worldgen-algo/fit-parameters.js                    # stage 1
 *   node tools/worldgen-algo/fit-parameters.js --sweep            # stage 1 + 2
 *   node tools/worldgen-algo/fit-parameters.js --id village --sweep --spacing 34
 */

const fs = require('node:fs')
const os = require('node:os')
const path = require('node:path')
const { execFileSync } = require('node:child_process')

const { DEFAULT_ROOT, loadObservations, byId, floorDiv } = require('./observations')

const HERE = __dirname

function parseArgs (argv) {
  const args = {
    root: DEFAULT_ROOT,
    id: null,
    sweep: false,
    threads: Math.max(1, os.cpus().length),
    slack: 1,
    maxSpacing: 96,
    minSpacing: 2,
    spacing: null,
    separation: null,
    limit: 4,
    blocks: 3,
    emit: null,
    top: 0,
    modes: '0,1'
  }
  for (let i = 2; i < argv.length; i++) {
    const arg = argv[i]
    const next = () => {
      const value = argv[++i]
      if (value === undefined) throw new Error(`${arg} needs a value`)
      return value
    }
    switch (arg) {
      case '--root': args.root = next(); break
      case '--id': args.id = next().replace(/^minecraft:/, ''); break
      case '--sweep': args.sweep = true; break
      case '--threads': args.threads = Number(next()); break
      case '--slack': args.slack = Number(next()); break
      case '--max-spacing': args.maxSpacing = Number(next()); break
      case '--min-spacing': args.minSpacing = Number(next()); break
      case '--spacing': args.spacing = Number(next()); break
      case '--separation': args.separation = Number(next()); break
      case '--limit': args.limit = Number(next()); break
      case '--blocks': args.blocks = Number(next()); break
      case '--emit': args.emit = next(); break
      case '--top': args.top = Number(next()); break
      case '--modes': args.modes = next(); break
      default: throw new Error(`unknown argument ${arg}`)
    }
  }
  return args
}

function buildSolver () {
  const directory = fs.mkdtempSync(path.join(os.tmpdir(), 'bds-solvers-'))
  const binary = path.join(directory, 'solve-salt')
  execFileSync('cc', ['-O2', '-o', binary, path.join(HERE, 'solve-salt.c'), '-lpthread'],
    { stdio: ['ignore', 'ignore', 'inherit'] })
  return binary
}

/** Chunk coordinates of every capture, and the probability a wrong pair keeps it. */
function prepare (observations) {
  return observations.map((observation) => {
    const chunkX = floorDiv(observation.block[0], 16)
    const chunkZ = floorDiv(observation.block[1], 16)
    return { ...observation, chunkX, chunkZ }
  })
}

/**
 * Stage 1. Every (spacing, separation) whose band contains every capture.
 *
 * The band is [0, spacing - separation) in both axes, so a pair that survives
 * on N captures has survived a test that `(span/spacing)^(2N)` random positions
 * would fail. The score is that probability, printed so a survivor can be told
 * apart from a coincidence.
 */
function bandSurvivors (rows, args) {
  const survivors = []
  const spacings = args.spacing
    ? [args.spacing]
    : Array.from({ length: args.maxSpacing - args.minSpacing + 1 }, (_, i) => args.minSpacing + i)
  for (const spacing of spacings) {
    const separations = args.separation !== null
      ? [args.separation]
      : Array.from({ length: spacing }, (_, i) => i)
    for (const separation of separations) {
      const span = spacing - separation
      if (span <= 0) continue
      let inside = 0
      for (const row of rows) {
        const offX = row.chunkX - floorDiv(row.chunkX, spacing) * spacing
        const offZ = row.chunkZ - floorDiv(row.chunkZ, spacing) * spacing
        if (offX < span && offZ < span) inside++
        else break
      }
      if (inside !== rows.length) continue
      survivors.push({
        spacing,
        separation,
        span,
        log10Chance: rows.length * 2 * Math.log10(span / spacing)
      })
    }
  }
  return survivors.sort((a, b) => a.log10Chance - b.log10Chance)
}

/** Stage 2. Every salt in [0, 2^32) that reproduces the captures for one pair. */
function sweepSalt (solver, id, rows, spacing, separation, mode, args) {
  const lines = rows.map((row) => [
    id, spacing, separation, mode, row.seed,
    floorDiv(row.chunkX, spacing), floorDiv(row.chunkZ, spacing),
    row.chunkX - floorDiv(row.chunkX, spacing) * spacing,
    row.chunkZ - floorDiv(row.chunkZ, spacing) * spacing
  ].join('\t'))
  const file = path.join(fs.mkdtempSync(path.join(os.tmpdir(), 'bds-obs-')), 'observations.tsv')
  fs.writeFileSync(file, lines.join('\n') + '\n')
  let out
  try {
    out = execFileSync(solver, [file, '--slack', String(args.slack), '--threads', String(args.threads)],
      { encoding: 'utf8', maxBuffer: 64 << 20 })
  } catch (error) {
    out = String(error.stdout || '')
  }
  return out.split('\n').filter((line) => line && !line.startsWith('#'))
}

/** Does the solved placement predict every capture, in blocks? */
function score (rows, spacing, separation, salt, mode, blocks) {
  let worst = 0
  let misses = 0
  for (const row of rows) {
    const cellX = floorDiv(row.chunkX, spacing)
    const cellZ = floorDiv(row.chunkZ, spacing)
    const predicted = predict(chunkMix(cellX, cellZ, row.seed, salt), spacing - separation, mode)
    const dx = row.chunkX - (cellX * spacing + predicted.offX)
    const dz = row.chunkZ - (cellZ * spacing + predicted.offZ)
    worst = Math.max(worst, Math.abs(dx), Math.abs(dz))
    if (Math.abs(dx) > blocks || Math.abs(dz) > blocks) misses++
  }
  return { misses, worst }
}

const MASK48 = (1n << 48n) - 1n
const MUL = 0x5deece66dn
const ADD = 0xbn

function chunkMix (cellX, cellZ, seed, salt) {
  let state = (BigInt(cellZ) * 132897987541n + BigInt(cellX) * 341873128712n +
    BigInt(seed) + BigInt(salt)) & MASK48
  return (state ^ 0x5deece66dn) & MASK48
}

function next (state) {
  const nextState = (state * MUL + ADD) & MASK48
  return { state: nextState, value: Number(nextState >> 17n) }
}

function predict (state, span, mode) {
  let step = next(state)
  const a = step.value % span
  step = next(step.state)
  const b = step.value % span
  if (mode === 0) return { offX: a, offZ: b }
  step = next(step.state)
  const c = step.value % span
  step = next(step.state)
  const d = step.value % span
  return { offX: (a + b) >>> 1, offZ: (c + d) >> 1 }
}

/**
 * One TSV holding every (set, pair, spread type) that stage 1 kept. The solver
 * groups by (id, spacing, separation, mode) and sweeps each group, so a single
 * run covers the batch and no compiler or process start-up is paid per group.
 */
function emitTsv (args, groups) {
  const lines = []
  const picks = []
  for (const [id, observations] of [...groups].sort()) {
    if (args.id && id !== args.id) continue
    const rows = prepare(observations)
    const survivors = bandSurvivors(rows, args).slice(0, args.top || args.limit)
    for (const survivor of survivors) {
      picks.push({ id, spacing: survivor.spacing, separation: survivor.separation,
        span: survivor.span, log10Chance: survivor.log10Chance })
      for (const mode of args.modes.split(',').map(Number)) {
        for (const row of rows) {
          lines.push([id, survivor.spacing, survivor.separation, mode, row.seed,
            floorDiv(row.chunkX, survivor.spacing), floorDiv(row.chunkZ, survivor.spacing),
            row.chunkX - floorDiv(row.chunkX, survivor.spacing) * survivor.spacing,
            row.chunkZ - floorDiv(row.chunkZ, survivor.spacing) * survivor.spacing].join('\t'))
        }
      }
    }
  }
  fs.writeFileSync(args.emit, lines.join('\n') + '\n')
  fs.writeFileSync(args.emit.replace(/\.tsv$/, '') + '-picks.json', JSON.stringify(picks, null, 2) + '\n')
  console.log(`# ${picks.length} (set, pair) candidates x ${args.modes.split(',').length} spread types ` +
    `= ${lines.length} observations -> ${args.emit}`)
  for (const pick of picks) {
    console.log(`#   ${pick.id} ${pick.spacing}/${pick.separation} span ${pick.span} ` +
      `log10(by chance) ${pick.log10Chance.toFixed(1)}`)
  }
}

function main () {
  const args = parseArgs(process.argv)
  const groups = byId(loadObservations(args.root))
  if (!groups.size) {
    console.error(`no captures under ${args.root}`)
    process.exit(1)
  }

  if (args.emit) {
    emitTsv(args, groups)
    return
  }

  const solver = args.sweep ? buildSolver() : null
  const results = []

  for (const [id, observations] of [...groups].sort()) {
    if (args.id && id !== args.id) continue
    const rows = prepare(observations)
    const survivors = bandSurvivors(rows, args)
    console.log(`# ${id}: ${rows.length} captures, ${survivors.length} (spacing, separation) pairs keep them all in the band`)
    for (const survivor of survivors.slice(0, args.limit)) {
      console.log(`#   ${survivor.spacing}/${survivor.separation} span ${survivor.span} ` +
        `log10(by chance) ${survivor.log10Chance.toFixed(1)}`)
    }
    const result = { id, captures: rows.length, survivors: survivors.length, fits: [] }

    if (args.sweep && survivors.length) {
      for (const survivor of survivors.slice(0, args.limit)) {
        for (const mode of [0, 1]) {
          const hits = sweepSalt(solver, id, rows, survivor.spacing, survivor.separation, mode, args)
          for (const hit of hits) {
            const salt = Number(hit.split('\t')[1])
            const checked = score(rows, survivor.spacing, survivor.separation, salt, mode, args.blocks)
            const entry = {
              spacing: survivor.spacing,
              separation: survivor.separation,
              spreadType: mode === 0 ? 'linear' : 'triangular',
              salt: BigInt.asIntN(32, BigInt(hit.split('\t')[1])).toString(),
              delta: hit.split('\t')[3],
              misses: checked.misses,
              worst: checked.worst
            }
            result.fits.push(entry)
            console.log(`#   FIT ${id} spacing ${entry.spacing} separation ${entry.separation} ` +
              `${entry.spreadType} salt ${entry.salt} ${entry.delta} ` +
              `misses ${entry.misses}/${rows.length} worst ${entry.worst}`)
          }
        }
      }
      if (!result.fits.length) console.log(`#   no salt in [0, 2^32) reproduces these captures`)
    }
    results.push(result)
  }

  const out = path.join(args.root, 'fit-parameters.json')
  if (args.id) {
    console.log(JSON.stringify(results, null, 2))
    return
  }
  fs.writeFileSync(out, JSON.stringify(results, null, 2) + '\n')
  console.log(`# wrote ${out}`)
}

main()
