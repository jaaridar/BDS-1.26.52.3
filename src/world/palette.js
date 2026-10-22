'use strict'

/**
 * Block palette.
 *
 * The Bedrock server defines the block palette itself: the `block_properties`
 * list carried in `start_game` maps every runtime block id (the palette index)
 * to a block state. Chunk payloads then reference those runtime ids. This
 * module owns that mapping.
 *
 * Three palettes ship with OpenBDS:
 *   - 'air'    : only air. Guaranteed-consistent void world.
 *   - 'flat'   : the handful of blocks needed for a classic superflat world.
 *   - 'vanilla': loaded from a JSON dump (see tools/gen-block-palette.js).
 *
 * Because the palette is negotiated per-session via `start_game`, a subset
 * palette is self-consistent on the wire. A full vanilla dump is only needed
 * to place every vanilla block.
 */

const fs = require('fs')

/** prismarine-nbt style compound from a plain JS object */
function toNbtCompound (obj = {}) {
  const value = {}
  for (const [k, v] of Object.entries(obj)) value[k] = toNbtValue(v)
  return { name: '', type: 'compound', value }
}

function toNbtValue (v) {
  if (v === null || v === undefined) return { type: 'int', value: 0 }
  switch (typeof v) {
    case 'string': return { type: 'string', value: v }
    case 'boolean': return { type: 'byte', value: v ? 1 : 0 }
    case 'number':
      return Number.isInteger(v)
        ? { type: 'int', value: v }
        : { type: 'float', value: v }
    default:
      if (Array.isArray(v)) {
        // homogeneous lists only, which is all block states need
        const type = v.length ? toNbtValue(v[0]).type : 'int'
        return { type: 'list', value: { type, value: v.map((x) => toNbtValue(x).value) } }
      }
      return toNbtCompound(v)
  }
}

class BlockPalette {
  /**
   * @param {Array<{name: string, states?: object}>} blocks
   */
  constructor (blocks) {
    if (!Array.isArray(blocks) || blocks.length === 0) {
      throw new Error('BlockPalette requires at least one block')
    }
    this.blocks = blocks.map((b, i) => {
      if (!b || typeof b.name !== 'string' || !b.name.includes(':')) {
        throw new Error(`palette entry ${i} must look like "minecraft:air"`)
      }
      return { name: b.name, states: b.states ? { ...b.states } : {} }
    })
    this.index = new Map()
    this.blocks.forEach((b, i) => {
      this.index.set(this._key(b.name, b.states), i)
    })
  }

  _key (name, states = {}) {
    const sorted = Object.keys(states).sort().map((k) => `${k}=${JSON.stringify(states[k])}`).join(',')
    return `${name}|${sorted}`
  }

  get size () {
    return this.blocks.length
  }

  /** Runtime id of a block state (throws when unknown). */
  runtimeId (name, states = {}) {
    const id = this.index.get(this._key(name, states))
    if (id === undefined) throw new Error(`block state not in palette: ${name}`)
    return id
  }

  /** Like runtimeId, but returns `fallback` instead of throwing. */
  tryRuntimeId (name, states = {}, fallback = 0) {
    const id = this.index.get(this._key(name, states))
    return id === undefined ? fallback : id
  }

  /** Entries for the `block_properties` field of `start_game`. */
  toBlockProperties () {
    return this.blocks.map((b) => ({ name: b.name, state: toNbtCompound(b.states) }))
  }

  toJSON () {
    return { blocks: this.blocks }
  }

  static fromJSON (data) {
    const blocks = Array.isArray(data) ? data : data.blocks
    return new BlockPalette(blocks)
  }

  static fromFile (file) {
    return BlockPalette.fromJSON(JSON.parse(fs.readFileSync(file, 'utf8')))
  }

  /** Air-only palette (index 0 is always air). */
  static air () {
    return new BlockPalette([{ name: 'minecraft:air', states: {} }])
  }

  /** Minimal palette for a classic superflat world. */
  static flat () {
    return new BlockPalette([
      { name: 'minecraft:air', states: {} },
      { name: 'minecraft:bedrock', states: {} },
      { name: 'minecraft:stone', states: {} },
      { name: 'minecraft:dirt', states: {} },
      { name: 'minecraft:grass_block', states: { 'minecraft:infiniburn_bit': false } }
    ])
  }
}

/**
 * Resolve the `openbds-palette` config value to a BlockPalette instance.
 * Accepts 'air', 'flat', 'vanilla' (looks in data/palettes/vanilla.json) or
 * a filesystem path to a palette JSON file.
 */
function loadPalette (spec, { baseDir = process.cwd() } = {}) {
  if (spec instanceof BlockPalette) return spec
  switch (spec) {
    case 'air':
      return BlockPalette.air()
    case 'flat':
      return BlockPalette.flat()
    case 'vanilla':
      return BlockPalette.fromFile(require('path').join(baseDir, 'data', 'palettes', 'vanilla.json'))
    default: {
      const file = require('path').isAbsolute(spec) ? spec : require('path').join(baseDir, spec)
      return BlockPalette.fromFile(file)
    }
  }
}

module.exports = { BlockPalette, loadPalette, toNbtCompound, toNbtValue }
