'use strict'

/**
 * In-memory world: chunk cache, time, spawn point.
 * World persistence (LevelDB / region files) is on the roadmap.
 */

const { encodeColumn } = require('./chunk')

class World {
  /**
   * @param {object} opts
   * @param {import('./generator').createGenerator} opts.generator
   * @param {import('./palette').BlockPalette} opts.palette
   * @param {string} [opts.levelName]
   * @param {string|number} [opts.seed]
   * @param {boolean} [opts.doDaylightCycle]
   */
  constructor ({ generator, palette, levelName = 'Bedrock level', seed = '', doDaylightCycle = true }) {
    this.generator = generator
    this.palette = palette
    this.levelName = levelName
    this.seed = typeof seed === 'number' ? BigInt(seed) : hashSeed(String(seed))
    this.doDaylightCycle = doDaylightCycle
    this.spawn = { ...generator.spawn }
    this.time = 1000 // morning, like a fresh BDS world
    this.tick = 0
    this.chunks = new Map() // "x,z" -> { payload, subChunkCount }
    this.biomeId = 1 // plains
  }

  /** Chunk cache key */
  static key (x, z) {
    return `${x},${z}`
  }

  /**
   * Get (and cache) the encoded column at chunk x,z.
   * @returns {{ payload: Buffer, subChunkCount: number }}
   */
  getColumn (x, z) {
    const key = World.key(x, z)
    let col = this.chunks.get(key)
    if (!col) {
      // Generate blocks first: the infinite generator caches per-column
      // biomes during generate(), which biomeIdAt then serves cheaply.
      const subChunks = this.generator.generate(x, z)
      const encoded = encodeColumn({
        subChunks,
        biomeId: this.biomeId,
        biomeSampler: typeof this.generator.biomeIdAt === 'function'
          ? (wx, wy, wz) => this.generator.biomeIdAt(wx, wy, wz)
          : undefined,
        chunkX: x,
        chunkZ: z
      })
      col = encoded
      this.chunks.set(key, col)
    }
    return col
  }

  /** Advance the world clock by one tick (20 ticks per second). */
  doTick () {
    this.tick++
    if (this.doDaylightCycle && this.tick % 1 === 0) this.time++
    return this.tick
  }

  get chunksGenerated () {
    return this.chunks.size
  }
}

/** Deterministic small string -> BigInt hash for level seeds */
function hashSeed (str) {
  if (!str) return 0n
  if (/^-?\d+$/.test(str)) return BigInt(str)
  let h = 0n
  for (const ch of str) {
    h = (h * 31n + BigInt(ch.codePointAt(0))) & 0x7fffffffffffffffn
  }
  return h
}

module.exports = { World, hashSeed }
