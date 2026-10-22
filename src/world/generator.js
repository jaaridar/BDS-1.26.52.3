'use strict'

/**
 * Terrain generators.
 *
 * OpenBDS ships three generators:
 *  - 'flat': classic superflat - bedrock, two dirt layers, grass on top,
 *    air above. This is what BDS `generator=flat` feels like.
 *  - 'void': empty air columns (bring your own floor via commands later).
 *  - 'infinite': seeded, vanilla-shaped overworld terrain (climate noises,
 *    biomes, oceans/rivers, caves, ores, trees) - see terrain.js and
 *    docs/world-generation.md. Clean-room: built from publicly documented
 *    algorithms, not from Mojang's binary or data tables.
 *
 * All are deterministic functions of (seed, chunkX, chunkZ).
 */

const { BLOCKS_PER_SUBCHUNK, OVERWORLD } = require('./chunk')

/** Block index inside a sub-chunk: (x << 8) | (z << 4) | y */
function blockIndex (x, y, z) {
  return (x << 8) | (z << 4) | y
}

/**
 * Map an absolute world y to a column slot and local y.
 * Slot 0 is sub-chunk y index -4 (world y -64) in the overworld.
 */
function worldToSubChunk (y) {
  const subChunkIndex = Math.floor(y / 16)
  return {
    slot: subChunkIndex - OVERWORLD.minSubChunkIndex,
    localY: y - subChunkIndex * 16
  }
}

/**
 * Create a generator.
 *
 * @param {import('./palette').BlockPalette} palette
 * @param {'flat'|'void'|'infinite'} name
 * @param {{ seed?: (string|number|bigint) }} [opts] world seed ('infinite')
 */
function createGenerator (palette, name = 'flat', opts = {}) {
  if (name === 'infinite') {
    return require('./terrain').createInfiniteGenerator(palette, opts)
  }
  const ids = {
    air: palette.tryRuntimeId('minecraft:air', {}, 0),
    bedrock: palette.tryRuntimeId('minecraft:bedrock', {}, palette.tryRuntimeId('minecraft:air', {}, 0)),
    stone: palette.tryRuntimeId('minecraft:stone', {}, palette.tryRuntimeId('minecraft:air', {}, 0)),
    dirt: palette.tryRuntimeId('minecraft:dirt', {}, palette.tryRuntimeId('minecraft:air', {}, 0)),
    grass: palette.tryRuntimeId('minecraft:grass_block', {}, palette.tryRuntimeId('minecraft:dirt', {}, 0))
  }

  /** Flat world: y=0 bedrock, y=1..2 dirt, y=3 grass */
  function flatColumn () {
    const slots = []
    // find which slots the surface layers land in (world y 0..3 -> slot 4)
    for (const [y, id] of [[0, ids.bedrock], [1, ids.dirt], [2, ids.dirt], [3, ids.grass]]) {
      const { slot, localY } = worldToSubChunk(y)
      if (!slots[slot]) slots[slot] = new Uint16Array(BLOCKS_PER_SUBCHUNK)
      for (let x = 0; x < 16; x++) {
        for (let z = 0; z < 16; z++) {
          slots[slot][blockIndex(x, localY, z)] = id
        }
      }
    }
    slots.length = Math.max(slots.length, 1 + (worldToSubChunk(3).slot))
    return slots
  }

  function voidColumn () {
    return []
  }

  const build = name === 'void' ? voidColumn : flatColumn

  return {
    name,
    /** Spawn point in world coordinates (standing on the grass layer). */
    spawn: name === 'void'
      ? { x: 0, y: 32, z: 0 }
      : { x: 0, y: 4, z: 0 },
    /**
     * Column block data.
     * @returns {Array<Uint16Array|null>} one entry per slot from y index -4 up
     */
    generate () {
      return build()
    }
  }
}

module.exports = { createGenerator, blockIndex, worldToSubChunk }
