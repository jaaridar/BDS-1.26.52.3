#!/usr/bin/env node
'use strict'

/**
 * Dump a heightmap + biome map for the infinite generator.
 *
 * This is the black-box interchange format for world-generation parity
 * work: any implementation (ours, or an export produced from a world that
 * the official BDS generated on your own machine by whatever external
 * tooling you choose) can be rendered to the same JSON shape and compared
 * with tools/worldgen-compare.js - no decompilation involved.
 *
 * Usage:
 *   node tools/worldgen-map.js [--seed 42] [--center 0,0]
 *                              [--size 512] [--step 4] [--out map.json]
 *
 * Output JSON:
 *   { format: "openbds-worldgen-map/1", seed, originX, originZ, step,
 *     width, heights: number[], biomes: string[] }   // row-major, z rows
 *
 * Without --out, an ASCII preview is printed instead ( ~ water, . lowland,
 * : hills, ^ mountains, plus a letter for notable biomes ).
 */

const fs = require('fs')
const { BlockPalette } = require('../src/world/palette')
const { createInfiniteGenerator } = require('../src/world/terrain')
const { SEA_LEVEL } = require('../src/world/biomes')

function parseArgs (argv) {
  const out = { seed: '42', center: [0, 0], size: 512, step: 4, file: null }
  for (let i = 0; i < argv.length; i++) {
    const a = argv[i]
    const next = () => argv[++i]
    if (a === '--seed') out.seed = next()
    else if (a === '--center') out.center = next().split(',').map(Number)
    else if (a === '--size') out.size = Number(next())
    else if (a === '--step') out.step = Number(next())
    else if (a === '--out') out.file = next()
    else if (a === '--help' || a === '-h') out.help = true
  }
  return out
}

const BIOME_GLYPH = {
  desert: 'D', badlands: 'B', jungle: 'J', savanna: 'S', swamp: 'W',
  snowy_plains: '*', snowy_taiga: '*', frozen_ocean: '=', frozen_river: '=',
  taiga: 't', forest: 'f', birch_forest: 'f', dark_forest: 'F', mountains: '^'
}

function glyph (h, biomeName) {
  if (BIOME_GLYPH[biomeName] && h >= SEA_LEVEL) return BIOME_GLYPH[biomeName]
  if (h < SEA_LEVEL - 12) return '#'
  if (h < SEA_LEVEL) return '~'
  if (h < SEA_LEVEL + 8) return '.'
  if (h < 95) return ':'
  if (h < 130) return 'n'
  return '^'
}

function main () {
  const args = parseArgs(process.argv.slice(2))
  if (args.help) {
    console.log('Usage: node tools/worldgen-map.js [--seed 42] [--center 0,0] [--size 512] [--step 4] [--out map.json]')
    return
  }
  if (!(args.size > 0) || !(args.step > 0)) throw new Error('--size and --step must be positive')

  const gen = createInfiniteGenerator(BlockPalette.terrain(), { seed: args.seed })
  const width = Math.floor(args.size / args.step)
  const originX = args.center[0] - Math.floor(args.size / 2)
  const originZ = args.center[1] - Math.floor(args.size / 2)

  const heights = []
  const biomes = []
  for (let row = 0; row < width; row++) {
    for (let col = 0; col < width; col++) {
      const wx = originX + col * args.step
      const wz = originZ + row * args.step
      heights.push(gen.heightAt(wx, wz))
      biomes.push(gen.biomeAt(wx, wz).name)
    }
  }

  if (args.file) {
    const doc = {
      format: 'openbds-worldgen-map/1',
      generator: 'openbds-infinite',
      seed: String(args.seed),
      originX,
      originZ,
      step: args.step,
      width,
      spawn: gen.spawn,
      heights,
      biomes
    }
    fs.writeFileSync(args.file, JSON.stringify(doc))
    console.log(`wrote ${args.file}: ${width}x${width} samples, seed=${args.seed}, spawn=${JSON.stringify(gen.spawn)}`)
    return
  }

  console.log(`seed=${args.seed} center=${args.center} size=${args.size} step=${args.step} spawn=${JSON.stringify(gen.spawn)}`)
  for (let row = 0; row < width; row++) {
    let line = ''
    for (let col = 0; col < width; col++) {
      const i = row * width + col
      line += glyph(heights[i], biomes[i])
    }
    console.log(line)
  }
}

if (require.main === module) main()
module.exports = { parseArgs, glyph }
