'use strict'

/**
 * Tell me about a seed's world, without a server.
 *
 *   node tools/worldgen-algo/world.js --seed 12345
 *   node tools/worldgen-algo/world.js --seed 12345 --x 2000 --z -1500 --radius 128
 *   node tools/worldgen-algo/world.js --seed 12345 --only village,stronghold --json
 */

const { structuresNear, formatReport } = require('../../src/world/world-report')

function parseArgs (argv) {
  const args = { x: 0, z: 0, radius: 256 }
  for (let i = 2; i < argv.length; i++) {
    const arg = argv[i]
    const next = () => {
      const value = argv[++i]
      if (value === undefined) throw new Error(`${arg} needs a value`)
      return value
    }
    switch (arg) {
      case '--seed': args.seed = next(); break
      case '--x': args.x = Number(next()); break
      case '--z': args.z = Number(next()); break
      case '--radius': args.radius = Number(next()); break
      case '--only': args.only = next().split(',').map((value) => value.trim()); break
      case '--json': args.json = true; break
      case '--help':
        console.log('usage: world.js --seed <n> [--x <block>] [--z <block>] [--radius <chunks>] [--only a,b] [--json]')
        process.exit(0)
        break
      default: throw new Error(`unknown argument ${arg}`)
    }
  }
  if (args.seed === undefined) throw new Error('--seed is required')
  if (!/^-?\d+$/.test(String(args.seed))) {
    throw new Error('string seeds are not supported yet: the engine\'s string-seed hash has not been recovered')
  }
  return args
}

try {
  const args = parseArgs(process.argv)
  const report = structuresNear(Number(args.seed), {
    x: args.x,
    z: args.z,
    radiusChunks: args.radius,
    only: args.only
  })
  console.log(args.json ? JSON.stringify(report, null, 2) : formatReport(report))
} catch (error) {
  console.error(error.message)
  process.exit(1)
}
