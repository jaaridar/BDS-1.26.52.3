#!/usr/bin/env node
'use strict'

/**
 * Build an OpenBDS palette JSON file from a block-state dump.
 *
 *   node tools/gen-block-palette.js <input.json> <output.json>
 *
 * Input format - a JSON array (or { "blocks": [...] }) of block states:
 *
 *   [
 *     { "name": "minecraft:air", "states": {} },
 *     { "name": "minecraft:stone", "states": {} },
 *     { "name": "minecraft:grass_block", "states": { "infiniburn_bit": false } },
 *     ...
 *   ]
 *
 * The order of the array defines the runtime ids: the first entry MUST be
 * `minecraft:air` (runtime id 0). Duplicates are rejected.
 *
 * Where to get a full dump (do NOT commit Mojang data to this repository):
 *  - Convert `canonical_block_states.nbt` from the Minecraft client/server
 *    data using any NBT tool (e.g. prismarine-nbt's CLI or Amulet), and map
 *    each state to the JSON shape above.
 *  - The PocketMine-MP project publishes `bedrock-data` packages with
 *    canonical block state dumps for many game versions; convert them the
 *    same way. Keep the generated file in data/palettes/ locally and add
 *    data/palettes/ to .gitignore if it contains proprietary dumps.
 *
 * The resulting file is referenced with `openbds-palette=<path>` in
 * server.properties (or `--palette <path>`).
 */

const fs = require('fs')
const path = require('path')

function usage (msg) {
  if (msg) console.error(`error: ${msg}\n`)
  console.error('usage: node tools/gen-block-palette.js <input.json> <output.json>')
  process.exit(2)
}

function main () {
  const [input, output] = process.argv.slice(2)
  if (!input || !output) usage()
  if (!fs.existsSync(input)) usage(`input not found: ${input}`)

  const data = JSON.parse(fs.readFileSync(input, 'utf8'))
  const blocks = Array.isArray(data) ? data : data.blocks
  if (!Array.isArray(blocks) || blocks.length === 0) {
    usage('input must be a JSON array of block states or { "blocks": [...] }')
  }

  const seen = new Set()
  const out = []
  for (const [i, entry] of blocks.entries()) {
    if (!entry || typeof entry.name !== 'string' || !entry.name.includes(':')) {
      usage(`entry ${i}: missing block name (expected "minecraft:air")`)
    }
    const states = entry.states ?? {}
    const key = entry.name + JSON.stringify(states, Object.keys(states).sort())
    if (seen.has(key)) usage(`entry ${i}: duplicate block state ${entry.name} ${JSON.stringify(states)}`)
    seen.add(key)
    out.push({ name: entry.name, states })
  }

  if (out[0].name !== 'minecraft:air') {
    console.warn('warning: first entry is not minecraft:air - runtime id 0 is expected to be air')
  }

  const target = path.resolve(output)
  fs.mkdirSync(path.dirname(target), { recursive: true })
  fs.writeFileSync(target, JSON.stringify({ blocks: out }, null, 1))
  console.log(`wrote ${target} (${out.length} block states)`)
}

main()
