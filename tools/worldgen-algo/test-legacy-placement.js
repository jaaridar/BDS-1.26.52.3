'use strict'

/**
 * Test the *unsalted* placement path against the captures.
 *
 * `d2d2c60` is a second seeding routine next to the salted one in `d2d2570`, and
 * it is the shape of `WorldGenRandom.setLargeFeatureSeed`:
 *
 *     rng.setSeed(worldSeed);
 *     i = rng.nextLong();          (| 1 in the reference)
 *     j = rng.nextLong();          (| 1 in the reference)
 *     rng.setSeed(cellX * i ^ cellZ * j ^ worldSeed);
 *
 * Two different resolvers means two different families of structure set: the
 * ones that ship a `random_spread` placement (salted, Java-semantics, and
 * `trail_ruins` is confirmed that way), and the older ones that derive their
 * per-cell stream from the seed alone. An exhaustive search for an additive
 * salt cannot find the second family, which is exactly what the sweeps kept
 * reporting.
 *
 * The unsalted family has no unknown constant, so it is not a search at all:
 * every (spacing, separation) can be scored outright, and a set either fits
 * exactly one grid or does not fit this family.
 *
 *   node tools/worldgen-algo/test-legacy-placement.js
 *   node tools/worldgen-algo/test-legacy-placement.js --id village --verbose
 */

const { loadObservations, byId, floorDiv, DEFAULT_ROOT } = require('./observations')
const { JavaRandom } = require('../../src/world/java-random')

const MASK64 = 0xffffffffffffffffn

function parseArgs (argv) {
  const args = {
    root: DEFAULT_ROOT,
    id: null,
    maxSpacing: 96,
    minSpacing: 2,
    spanMin: 8,
    variants: 'xor,plus,plusSeed',
    odd: true,
    verbose: false
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
      case '--max-spacing': args.maxSpacing = Number(next()); break
      case '--min-spacing': args.minSpacing = Number(next()); break
      case '--span-min': args.spanMin = Number(next()); break
      case '--variants': args.variants = next(); break
      case '--no-odd': args.odd = false; break
      case '--verbose': args.verbose = true; break
      default: throw new Error(`unknown argument ${arg}`)
    }
  }
  return args
}

/** Signed 64-bit wrap, so the mix behaves like Java's longs. */
function wrap (value) {
  let v = value & MASK64
  if (v >= 0x8000000000000000n) v -= 0x10000000000000000n
  return v
}

/**
 * The stream a legacy set draws its cell offsets from.
 *
 * @param {bigint|number} seed world seed
 * @param {number} cellX
 * @param {number} cellZ
 * @param {{variant: string, odd: boolean}} options
 */
function legacyRandom (seed, cellX, cellZ, options) {
  const warmup = new JavaRandom(typeof seed === 'bigint' ? seed : BigInt(seed))
  let i = warmup.nextLong()
  let j = warmup.nextLong()
  if (options.odd) {
    i |= 1n
    j |= 1n
  }
  const x = BigInt(cellX) * i
  const z = BigInt(cellZ) * j
  let mixed
  switch (options.variant) {
    case 'xor': mixed = wrap(x ^ z ^ BigInt(seed)); break
    case 'plus': mixed = wrap(wrap(x + z) ^ BigInt(seed)); break
    case 'plusSeed': mixed = wrap(x + z + BigInt(seed)); break
    default: throw new Error(`unknown variant ${options.variant}`)
  }
  const random = new JavaRandom(0n)
  random.setSeed(mixed)
  return random
}

function legacyOffsets (random, span, triangular) {
  if (triangular) {
    const a = random.nextInt(span)
    const b = random.nextInt(span)
    const c = random.nextInt(span)
    const d = random.nextInt(span)
    return { offX: (a + b) >> 1, offZ: (c + d) >> 1 }
  }
  return { offX: random.nextInt(span), offZ: random.nextInt(span) }
}

function chunkOf (observation) {
  return [floorDiv(observation.block[0], 16), floorDiv(observation.block[1], 16)]
}

/**
 * A structure's origin block can sit in the chunk *before* the chunk the set
 * placed it in -- `trail_ruins` shows exactly that -- so the comparison is
 * `predicted - observed in {0, 1}` and not equality.
 */
function score (observations, spacing, separation, options) {
  const span = spacing - separation
  let exact = 0
  let within = 0
  let worst = 0
  for (const observation of observations) {
    const chunk = chunkOf(observation)
    const cellX = floorDiv(chunk[0], spacing)
    const cellZ = floorDiv(chunk[1], spacing)
    const random = legacyRandom(observation.seed, cellX, cellZ, options)
    const offsets = legacyOffsets(random, span, options.triangular)
    const dx = cellX * spacing + offsets.offX - chunk[0]
    const dz = cellZ * spacing + offsets.offZ - chunk[1]
    worst = Math.max(worst, Math.abs(dx), Math.abs(dz))
    if (dx === 0 && dz === 0) exact++
    if (dx >= 0 && dx <= 1 && dz >= 0 && dz <= 1) within++
  }
  return { exact, within, worst }
}

function main () {
  const args = parseArgs(process.argv)
  const groups = byId(loadObservations(args.root))
  const variants = args.variants.split(',')
  const report = []

  for (const [id, observations] of [...groups].sort()) {
    if (args.id && id !== args.id) continue
    const results = []
    for (const variant of variants) {
      for (const triangular of [false, true]) {
        for (let spacing = args.minSpacing; spacing <= args.maxSpacing; spacing++) {
          for (let separation = 1; separation < spacing; separation++) {
            // A span of one chunk makes the prediction a constant, which every
            // observation satisfies: not a fit, a tautology.
            if (spacing - separation < args.spanMin) continue
            const options = { variant, odd: args.odd, triangular }
            const scored = score(observations, spacing, separation, options)
            if (scored.within !== observations.length) continue
            results.push({ spacing, separation, variant, triangular, ...scored })
          }
        }
      }
    }
    report.push({ id, observations: observations.length, fits: results })
    console.log(`${id}: ${observations.length} captures, ${results.length} unsalted fits`)
    for (const fit of results.slice(0, args.verbose ? 100 : 6)) {
      console.log(`   ${fit.variant}${fit.triangular ? ' triangular' : ''} spacing ${fit.spacing} ` +
        `separation ${fit.separation} span ${fit.spacing - fit.separation} ` +
        `exact ${fit.exact}/${observations.length} worst ${fit.worst}`)
    }
  }
  return report
}

const report = main()
if (require.main === module) {
  const out = 'research/proprietary/bds-1.26.52.3/structures/legacy-fit.json'
  try {
    require('node:fs').writeFileSync(out, JSON.stringify(report, null, 2) + '\n')
    console.log(`# wrote ${out}`)
  } catch (error) {
    console.error(`# could not write ${out}: ${error.message}`)
  }
}

module.exports = { legacyRandom, legacyOffsets, score, wrap }
