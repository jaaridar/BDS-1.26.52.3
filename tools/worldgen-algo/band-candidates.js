'use strict'

/**
 * Which (spacing, separation) pairs are even possible for a captured set?
 *
 * A start chunk is `cell * spacing + offset` with the offset drawn below
 * `span = spacing - separation`, so every observed chunk must satisfy
 * `chunk mod spacing < span`. That test needs no random stream and no salt, and
 * with twenty-odd captures it throws away almost every pair -- what survives is a
 * short list worth spending a 2^32 sweep on.
 *
 * Pairs are ordered tightest first: the evidence for a pair is roughly
 * `(span / spacing) ^ (2 * captures)`, so a small span that still explains every
 * capture is much stronger than a large one, and is tried first.
 *
 *   node tools/worldgen-algo/band-candidates.js --id village
 *   node tools/worldgen-algo/band-candidates.js --all --max-spacing 192
 */

const { DEFAULT_ROOT, byId, floorDiv, loadObservations } = require('./observations')
const { possible } = require('./match-records')

function mod (a, b) {
  return ((a % b) + b) % b
}

/** Residue evidence: how improbable the observed band would be by chance. */
function strength (spacing, separation, observations) {
  const span = spacing - separation
  let log = 0
  for (const row of observations) {
    log += Math.log(span / spacing)
    log += Math.log(span / spacing)
  }
  return log / Math.LN10
}

function candidatesFor (observations, maxSpacing) {
  const out = []
  for (let spacing = 2; spacing <= maxSpacing; spacing++) {
    for (let separation = 0; separation < spacing - 1; separation++) {
      // A span of one is satisfied by every chunk (the only residue, 0, is below
      // the span as well as being `spacing - 1`), so it says nothing.
      if (!possible(spacing, separation, observations)) continue
      out.push({
        spacing,
        separation,
        span: spacing - separation,
        log10: strength(spacing, separation, observations)
      })
    }
  }
  out.sort((a, b) => a.log10 - b.log10)
  return out
}

function main (argv) {
  let ids = null
  let maxSpacing = 192
  const all = argv.includes('--all')
  for (let i = 0; i < argv.length; i++) {
    const arg = argv[i]
    const next = () => {
      const value = argv[++i]
      if (value === undefined) throw new Error(`${arg} needs a value`)
      return value
    }
    switch (arg) {
      case '--id': ids = [next()]; break
      case '--max-spacing': maxSpacing = Number(next()); break
      case '--all': break
      default: throw new Error(`unknown argument ${arg}`)
    }
  }

  const groups = byId(loadObservations(DEFAULT_ROOT))
  const wanted = all || !ids ? [...groups.keys()] : ids
  for (const id of wanted) {
    const observations = groups.get(id)
    if (!observations) {
      console.error(`no captures for ${id}`)
      continue
    }
    const candidates = candidatesFor(observations, maxSpacing)
    console.log(`# ${id}: ${observations.length} captures, ${candidates.length} possible pairs`)
    for (const candidate of candidates) {
      console.log(`${id}\t${candidate.spacing}\t${candidate.separation}\t` +
        `${observations.length}\t${candidate.log10.toFixed(1)}`)
    }
  }
  return 0
}

if (require.main === module) process.exit(main(process.argv.slice(2)))

module.exports = { candidatesFor, mod, strength }
