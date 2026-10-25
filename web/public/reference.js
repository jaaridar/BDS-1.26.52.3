// GENERATED FILE -- do not edit. Bundled by tools/web/build-seedfinder.js
// from src/world/*.js. This is the reference implementation, unmodified:
// the wasm core is checked against it by the in-browser stress test.
(function (global) {
  'use strict'
  var defs = {}
  var cache = {}
  function resolve (from, request) {
    if (request.charAt(0) !== '.') throw new Error('external require in a world module: ' + request)
    var base = from.split('/').slice(0, -1)
    request.split('/').forEach(function (part) {
      if (part === '.' || part === '') return
      if (part === '..') base.pop()
      else base.push(part)
    })
    var id = base.join('/')
    return /\.js$/.test(id) ? id : id + '.js'
  }
  function req (id) {
    if (cache[id]) return cache[id].exports
    if (!defs[id]) throw new Error('module not bundled: ' + id)
    var module = { exports: {} }
    cache[id] = module
    defs[id](module, module.exports, function (request) { return req(resolve(id, request)) })
    return module.exports
  }
  defs["src/world/mt19937.js"] = function (module, exports, require) {
    'use strict'
    
    /**
     * Deterministic Mersenne Twister (MT19937), the generator BDS seeds for chunk
     * terrain and for every noise layer.
     *
     * Clean-room implementation from the published MT19937 definition
     * (Matsumoto & Nishimura, 1997): 624-word state, 32-bit words, tempering
     * constants 0x9d2c5680 / 0xefc60000, initialiser multiplier 1812433253.
     *
     * Two of the draw conventions are not fixed by the algorithm itself -- the
     * binary calls through a virtual interface, so "next float" and "next int in
     * [0, bound)" are implementation choices. Both are policy objects here so a
     * caller can select an interpretation instead of hard-coding a guess, and
     * `tools/worldgen-golden` can score the alternatives against real server
     * output.
     */
    
    /** Smallest float below 1 that a 24-bit draw can produce, as a double. */
    const INV_2_24 = 2.3283064365386963e-10
    /** 2^-32, the scale the binary applies to a full 32-bit draw. */
    const INV_2_32 = 2.3283064365386963e-10
    /** 2^-53, the scale of a 53-bit draw. */
    const INV_2_53 = 1.1102230246251565e-16
    
    const N = 624
    const M = 397
    const MATRIX_A = 0x9908b0df
    const UPPER_MASK = 0x80000000
    const LOWER_MASK = 0x7fffffff
    const TEMPER_MASK_B = 0x9d2c5680
    const TEMPER_MASK_C = 0xefc60000
    const INIT_MULT = 1812433253
    
    class Mt19937 {
      constructor (seed) {
        this.state = new Uint32Array(N)
        this.index = N
        this.seed(seed)
      }
    
      /** init_genrand: state[0] = seed, state[i] = f(state[i-1]) + i. */
      seed (seed) {
        this.state[0] = seed >>> 0
        for (let i = 1; i < N; i++) {
          const prev = this.state[i - 1]
          this.state[i] = (Math.imul(prev ^ (prev >>> 30), INIT_MULT) + i) >>> 0
        }
        this.index = N
      }
    
      /** Produce the next block of 624 words. */
      generate () {
        const s = this.state
        for (let i = 0; i < N; i++) {
          const y = (s[i] & UPPER_MASK) | (s[(i + 1) % N] & LOWER_MASK)
          let next = s[(i + M) % N] ^ (y >>> 1)
          if (y & 1) next ^= MATRIX_A
          s[i] = next >>> 0
        }
        this.index = 0
      }
    
      /** Raw 32-bit output word, tempered. */
      nextU32 () {
        if (this.index >= N) this.generate()
        let y = this.state[this.index++]
        y ^= y >>> 11
        y ^= (y << 7) & TEMPER_MASK_B
        y ^= (y << 15) & TEMPER_MASK_C
        y ^= y >>> 18
        return y >>> 0
      }
    
      /**
       * A real in [0, 1).
       *
       * 'u32' is the measured convention: one word, widened to a double, scaled by
       * 2^-32, then narrowed to float. That is exactly the binary's sequence
       * `MOV EAX,EAX / CVTSI2SD / MULSD 2^-32 / CVTSD2SS`, so the value carries
       * full 32-bit granularity before the float rounding.
       *
       * The other entries are kept as alternatives for fitting, not as guesses:
       * 'float24' is a 24-bit float canonical draw, 'double53' a 53-bit double one.
       */
      nextUnit (policy) {
        if (policy !== 'float24' && policy !== 'double53') {
          // Default and measured: 32 bits through double, narrowed to float.
          return Math.fround(this.nextU32() * INV_2_32)
        }
        if (policy === 'double53') {
          const hi = this.nextU32() >>> 5
          const lo = this.nextU32() >>> 6
          return (hi * 67108864 + lo) * INV_2_53
        }
        return (this.nextU32() >>> 8) * INV_2_24
      }
    
      /**
       * A uniform integer in [0, bound).
       *
       * 'modulo' is the measured convention: the binary issues an unsigned
       * `DIV`, i.e. `raw32 % bound`, with no rejection. The others are fit
       * candidates ('topBits' high-bit masking, 'reject' Lemire multiply-shift).
       */
      nextInt (bound, policy) {
        if (bound <= 1) {
          this.nextU32()
          return 0
        }
        if (policy === 'modulo') return this.nextU32() % bound
        if (policy === 'reject') {
          // Threshold trick: reject the values that would make the low part wrap.
          const threshold = (2 ** 32 - bound) % bound
          for (;;) {
            const r = this.nextU32()
            const product = r * bound
            if (product % 2 ** 32 >= threshold) return Math.floor(product / 2 ** 32)
          }
        }
        // 'topBits': mask off enough high bits; exact for powers of two.
        const bits = 32 - Math.clz32(bound - 1)
        const mask = (1 << bits) - 1
        for (;;) {
          const candidate = this.nextU32() >>> (32 - bits)
          if (candidate <= mask && candidate < bound) return candidate
        }
      }
    }
    
    module.exports = { Mt19937, INV_2_24, INV_2_53 }
    
  }
  defs["src/world/java-random.js"] = function (module, exports, require) {
    'use strict'
    
    /**
     * The 48-bit linear congruential generator behind structure placement.
     *
     * Recovered from the binary: `br::worldgen::WorldGenRandom` implements the
     * classic `next(bits)` loop with multiplier 0x5deece66d and addend 0xb, masked
     * to 48 bits, and its seed is `(seed ^ 0x5deece66d) & 0xffffffffffff`
     * (research/proprietary/bds-1.26.52.3/ANALYSIS.md section 4.4, function
     * 0xd2d59a0).
     *
     * State is held in a BigInt so the 48-bit arithmetic cannot silently lose
     * precision the way doubles would.
     */
    
    const MULTIPLIER = 0x5deece66dn
    const ADDEND = 0xbn
    const MASK = 0xffffffffffffn
    const DOUBLE_UNIT = 1.1102230246251565e-16 // 2^-53
    
    class JavaRandom {
      constructor (seed = 0n) {
        this.setSeed(seed)
      }
    
      /** Seeds the stream. Accepts a BigInt, a number, or a numeric string. */
      setSeed (seed) {
        const value = typeof seed === 'bigint' ? seed : BigInt(seed)
        // Java truncates the incoming long into 48 bits after the xor.
        this.state = (value ^ MULTIPLIER) & MASK
      }
    
      /** The raw next(bits) step: the primitive every other method builds on. */
      next (bits) {
        this.state = (this.state * MULTIPLIER + ADDEND) & MASK
        const shifted = this.state >> BigInt(48 - bits)
        return Number(shifted)
      }
    
      /** Uniform int in [0, bound). Rejection loop, as in the original. */
      nextInt (bound) {
        if (bound === undefined) {
          const high = this.next(32)
          // next(32) yields an unsigned 32-bit value; the reference returns int32.
          return high | 0
        }
        if (!Number.isInteger(bound) || bound <= 0) {
          throw new RangeError(`bound must be a positive integer, got ${bound}`)
        }
        if ((bound & -bound) === bound) {
          // Power of two: the reference still draws 31 bits and scales them down,
          // so the stream advances by exactly one step here.
          return Number((BigInt(bound) * BigInt(this.next(31))) >> 31n)
        }
        let bits
        let value
        do {
          bits = this.next(31)
          value = bits % bound
        } while (bits - value + (bound - 1) < 0)
        return value
      }
    
      /**
       * A full 64-bit draw, exactly as the reference does it:
       * `((long) next(32) << 32) + next(32)` with *signed* halves, so the low word
       * can borrow from the high one.
       */
      nextLong () {
        const high = this.next(32) | 0
        const low = this.next(32) | 0
        return BigInt(high) * 4294967296n + BigInt(low)
      }
    
      /** Uniform float in [0, 1). */
      nextFloat () {
        return this.next(24) / (1 << 24)
      }
    
      /** Uniform double in [0, 1). */
      nextDouble () {
        const high = this.next(26)
        const low = this.next(27)
        return (high * 134217728 + low) * DOUBLE_UNIT
      }
    
      /** True with probability `frequency`. */
      nextChance (frequency) {
        return this.nextFloat() < frequency
      }
    }
    
    /** Multipliers the binary uses to fold grid coordinates and a set salt in. */
    const X_MULTIPLIER = 341873128712n
    const Z_MULTIPLIER = 132897987541n
    
    /**
     * The structure seed for one grid cell.
     *
     * Recovered verbatim from the spacing resolver (`0xd2d2570`):
     * `x * 341873128712 + z * 132897987541 + seed + salt`, then seeded into the
     * LCG. Java long arithmetic wraps, so the sum is taken modulo 2^64 first.
     */
    function structureSeed (seed, cellX, cellZ, salt) {
      let sum = BigInt(cellX) * X_MULTIPLIER + BigInt(cellZ) * Z_MULTIPLIER
      sum += BigInt(seed) + BigInt(salt)
      // Two's complement wrap into a signed 64-bit value.
      sum &= 0xffffffffffffffffn
      if (sum >= 0x8000000000000000n) sum -= 0x10000000000000000n
      return sum
    }
    
    module.exports = { JavaRandom, structureSeed, X_MULTIPLIER, Z_MULTIPLIER }
    
  }
  defs["src/world/structures-data.js"] = function (module, exports, require) {
    'use strict'
    
    /**
     * Placement parameters, per structure set.
     *
     * Every entry here has to be *measured*, not remembered from Java: Bedrock's
     * spacings, salts and spread types are its own, and the whole point of this
     * file is that a reader can check each number against evidence.
     *
     * `evidence` says where a row came from:
     *
     *   'pack'      the vanilla data pack ships the placement (readable JSON)
     *   'binary'    read out of the proprietary binary's constant pool
     *   'measured'  confirmed by asking the server (`locate structure`) and matching
     *   'unknown'   not recovered yet; present so callers can report it honestly
     *
     * A row marked `confirmed: true` has been replayed against every captured
     * position of that set; `note` carries the tally. Re-run the tally with
     *
     *   node tools/worldgen-algo/verify-placements.js
     *
     * which reads research/proprietary/bds-1.26.52.3/structures/captures and prints
     * one line per set.
     */
    
    /** Where the numbers come from, for the reader. */
    const PLACEMENT_SOURCE = {
      pack: 'behavior_packs/vanilla_*/__brarchive/worldgen/structure_sets.brarchive (brarchive reader in tools/worldgen-algo/brarchive.js)',
      binary: 'per-set salt inlined in each `<Feature>::vslot5` wrapper; grid resolver at `FUN_0d351a10`',
      measured: 'tools/worldgen-algo/capture-structures.js asks the server with locate structure; tools/worldgen-algo/verify-placements.js replays the captures',
      note: 'rows marked confirmed:false are shape-only and must not be presented as facts'
    }
    
    function row (id, { spacing, separation, salt, spreadType, engine = 'mt', evidence = 'measured', confirmed = true, kind, note = null }) {
      const placement = { id, spacing, separation, salt, spreadType, engine, confirmed, evidence, note }
      if (kind) placement.kind = kind
      return placement
    }
    
    /**
     * Sets that place one candidate per chunk behind a frequency gate.
     *
     * `spacing 1, separation 0` means the resolver's offset is always 0, so every
     * chunk is a potential start and the only thing that decides is a per-chunk
     * probability drawn from the same stream. Predicting these needs the frequency
     * and the per-chunk seed; the gate's *shape* is known (a draw from the same
     * stream, after the offsets) but its threshold is not recovered yet.
     */
    function frequency (id, salt, note) {
      return row(id, {
        spacing: 1,
        separation: 0,
        salt,
        spreadType: 'linear',
        kind: 'frequency',
        confirmed: false,
        evidence: 'unknown',
        note: note || 'per-chunk frequency placement; the gate threshold is not recovered yet'
      })
    }
    
    function placeholder (id, spacing, separation, salt, spreadType = 'linear', note = null) {
      return row(id, { spacing, separation, salt, spreadType, confirmed: false, evidence: 'unknown', note })
    }
    
    const PLACEMENTS = {
      // --- measured: every captured position reproduced exactly ------------------
      'minecraft:village': row('minecraft:village', {
        spacing: 34, separation: 8, salt: 10387312, spreadType: 'triangular',
        note: '98/98 captured positions, across 35 distinct (seed, chunk) answers'
      }),
    
      'minecraft:pillager_outpost': row('minecraft:pillager_outpost', {
        spacing: 80, separation: 24, salt: 165745296, spreadType: 'triangular',
        note: '19/19 captured positions; the unique perfect fit over spacing 4..128 and every separation'
      }),
    
      'minecraft:monument': row('minecraft:monument', {
        spacing: 32, separation: 5, salt: 10387313, spreadType: 'triangular',
        note: '22/22 captured positions; unique perfect fit'
      }),
    
      'minecraft:mansion': row('minecraft:mansion', {
        spacing: 80, separation: 20, salt: 10387319, spreadType: 'triangular',
        note: '13/13 captured positions; unique perfect fit'
      }),
    
      'minecraft:shipwreck': row('minecraft:shipwreck', {
        spacing: 24, separation: 4, salt: 165745295, spreadType: 'linear',
        note: '24/24 captured positions; unique perfect fit'
      }),
    
      'minecraft:ruined_portal': row('minecraft:ruined_portal', {
        spacing: 40, separation: 15, salt: 40552231, spreadType: 'linear',
        note: '24/24 captured positions; unique perfect fit. Salt read from the binary (0x26ac727), not Java\'s 34222645'
      }),
    
      'minecraft:ancient_city': row('minecraft:ancient_city', {
        spacing: 24, separation: 8, salt: 20083232, spreadType: 'triangular',
        note: '24/24 captured positions; unique perfect fit'
      }),
    
      'minecraft:buried_treasure': row('minecraft:buried_treasure', {
        spacing: 4, separation: 2, salt: 16842397, spreadType: 'triangular',
        note: '24/24 captured positions. The set is grid-placed, not frequency-gated'
      }),
    
      // --- measured through the Java-compatible engine ---------------------------
      'minecraft:trail_ruins': row('minecraft:trail_ruins', {
        spacing: 34, separation: 8, salt: 83469867, spreadType: 'linear', engine: 'java',
        evidence: 'pack',
        note: 'pack placement replayed with the Java engine: 9/35 exact, 34/35 within one chunk. ' +
          'The reported position is the jigsaw structure origin, which sits in the placement chunk ' +
          'or one chunk back on either axis'
      }),
    
      'minecraft:trial_chambers': row('minecraft:trial_chambers', {
        spacing: 34, separation: 12, salt: 94251327, spreadType: 'linear', engine: 'java',
        note: '4/24 exact, 24/24 within one chunk: same Java engine as trail_ruins, same ' +
          'jigsaw-origin offset'
      }),
    
      'minecraft:abandoned_camp': row('minecraft:abandoned_camp', {
        spacing: 37, separation: 8, salt: 91231127, spreadType: 'linear', engine: 'java',
        evidence: 'pack', confirmed: false,
        note: 'pack placement; no captured positions yet, so the engine is inferred from the other pack sets'
      }),
    
      // --- shape-only rows: numbers not yet read from the binary ----------------
      'minecraft:ocean_ruin': placeholder('minecraft:ocean_ruin', 20, 8, 14357621),
      'minecraft:desert_pyramid': placeholder('minecraft:desert_pyramid', 32, 8, 14357617),
      'minecraft:jungle_temple': placeholder('minecraft:jungle_temple', 32, 8, 14357619),
      'minecraft:witch_hut': placeholder('minecraft:witch_hut', 32, 8, 14357620),
      'minecraft:igloo': placeholder('minecraft:igloo', 32, 8, 14357618),
      'minecraft:mineshaft': frequency('minecraft:mineshaft', 0),
      // Strongholds are not a jittered grid of this kind: they use a 200-chunk cell
      // grid whose cells carry one stronghold each, and the placement lives in
      // `stronghold.js` rather than in this table. The row stays empty on purpose so
      // nothing here can be mistaken for a spacing.
      'minecraft:stronghold': row('minecraft:stronghold', {
        spacing: 0, separation: 0, salt: 0x5d534e7, spreadType: 'linear',
        evidence: 'binary', confirmed: false,
        note: 'own code path: see src/world/stronghold.js; the spacing is 0 so no table-driven tool can mistake the row for a grid'
      })
    }
    
    module.exports = { PLACEMENTS, PLACEMENT_SOURCE }
    
  }
  defs["src/world/structure-placement.js"] = function (module, exports, require) {
    'use strict'
    
    /**
     * Structure placement: turning a seed into structure positions.
     *
     * The pipeline was recovered from the binary and then confirmed against the
     * server, and it is shorter than the Java one it borrows its constants from:
     *
     *   1. the world is cut into cells of `spacing` chunks (cell = floor(chunk / spacing));
     *   2. a cell's seed is
     *        seed32 = cellX * 341873128712 + cellZ * 132897987541 + seed + salt
     *      evaluated mod 2^32 (multiproperties of the Java constants folded down);
     *   3. that seed initialises a 32-bit Mersenne Twister (init_genrand);
     *   4. the Mersenne stream picks the offset inside the cell:
     *        linear      one  draw per axis:  next32() % span
     *        triangular  two draws per axis:  (next32() % span + next32() % span) / 2
     *      with span = spacing - separation;
     *   5. the start chunk is cell * spacing + offset, i.e. it is always inside its
     *      own cell and never inside the separation margin;
     *   6. optional per-cell odds gate drawn from the same stream.
     *
     * Two engines exist in the shipped binary, and which one a set uses is
     * measured, not assumed:
     *
     *   'mt'    the legacy (hard-coded) structure sets. Seven of them reproduce
     *           every captured position exactly (see tools/worldgen-algo/verify-placements.js).
     *   'java'  the data-driven sets that come out of the vanilla packs. These use
     *           a Java-compatible 48-bit LCG over the same cell seed, computed in
     *           64 bits. Their reported position is the structure's own origin
     *           block, which sits in the placement chunk or one chunk before it.
     *
     * Everything above is transcribed from the disassembly. The per-structure
     * numbers -- spacing, separation, salt, spread type, engine -- are data the
     * engine supplies; they live in `structures-data.js` and are confirmed by the
     * oracle, so they are never invented here.
     */
    
    const { Mt19937 } = require('./mt19937')
    const { JavaRandom } = require('./java-random')
    
    /** Java's placement constants, which the binary folds into 32-bit form. */
    const CELL_MUL_X = 341873128712n
    const CELL_MUL_Z = 132897987541n
    
    /** The same two constants reduced to what a 32-bit multiply sees. */
    const CELL_MUL_X32 = Number(CELL_MUL_X % 4294967296n) >>> 0 // 0x9939f508
    const CELL_MUL_Z32 = Number(CELL_MUL_Z % 4294967296n) >>> 0 // 0xf1565bd5
    
    /** Floor division that matches Java's for negative numerators. */
    function floorDiv (a, b) {
      return Math.floor(a / b)
    }
    
    /**
     * A world seed reduced to the 32 bits the Mersenne cell seed folds in.
     *
     * Seeds above 2^53 are legal (`-9223372036854775808` is a real world seed) and
     * `Number(seed) >>> 0` reduces *those* incorrectly: it rounds to the nearest
     * double first, so 2^63 - 1 arrives as 2^63 and reduces to 0 instead of
     * 0xffffffff. The reduction therefore goes through BigInt whenever the seed is
     * not a safe integer. Verified by `test/unit/world-placement-seed-width.test.js`:
     * seed 2^63 - 1 must place structures exactly like seed -1.
     */
    function seed32 (seed) {
      if (typeof seed === 'bigint') return Number(BigInt.asUintN(32, seed))
      if (typeof seed === 'string') return Number(BigInt.asUintN(32, BigInt(seed.trim())))
      if (Number.isSafeInteger(seed)) return Number(BigInt.asUintN(32, BigInt(seed)))
      return Number(BigInt.asUintN(32, BigInt(Math.trunc(seed))))
    }
    
    /** The low 48 bits, which is all the Java engine's LCG keeps. */
    function seed48 (seed) {
      if (typeof seed === 'bigint') return BigInt.asUintN(48, seed)
      if (typeof seed === 'string') return BigInt.asUintN(48, BigInt(seed.trim()))
      if (Number.isSafeInteger(seed)) return BigInt.asUintN(48, BigInt(seed))
      return BigInt.asUintN(48, BigInt(Math.trunc(seed)))
    }
    
    /**
     * The 32-bit cell seed the Mersenne engine consumes.
     *
     * The binary computes `cellZ * -0xea9a42b + cellX * -0x66c60af8 + salt + seed`
     * in 32-bit two's complement; the two magnitudes are exactly the low halves of
     * the Java constants above. Only the low 32 bits of the world seed take part,
     * which is why seeds 1 and 4294967297 share placements but not biomes.
     */
    function cellSeed (seed, cellX, cellZ, salt) {
      return (Math.imul(cellX, CELL_MUL_X32) +
        Math.imul(cellZ, CELL_MUL_Z32) +
        seed32(seed) +
        (Number(salt) >>> 0)) >>> 0
    }
    
    /** The same cell seed kept at 64 bits, which is what the Java engine sees. */
    function javaCellSeed (seed, cellX, cellZ, salt) {
      return BigInt.asIntN(64,
        BigInt(cellX) * CELL_MUL_X +
        BigInt(cellZ) * CELL_MUL_Z +
        BigInt(seed) +
        BigInt(salt))
    }
    
    /** The inside-a-cell width: the offset is drawn from [0, span). */
    function spanOf (placement) {
      const span = placement.spacing - placement.separation
      if (span <= 0) {
        throw new RangeError(`${placement.id}: spacing ${placement.spacing} leaves no room inside separation ${placement.separation}`)
      }
      return span
    }
    
    /** Offset inside one cell, for the Mersenne engine. */
    function offsetMt (random, span, triangular) {
      if (!triangular) {
        return [random.nextInt(span, 'modulo'), random.nextInt(span, 'modulo')]
      }
      const x = (random.nextInt(span, 'modulo') + random.nextInt(span, 'modulo'))
      const z = (random.nextInt(span, 'modulo') + random.nextInt(span, 'modulo'))
      return [Math.floor(x / 2), Math.floor(z / 2)]
    }
    
    /** Offset inside one cell, for the Java engine. */
    function offsetJava (random, span, triangular) {
      if (!triangular) {
        return [random.nextInt(span), random.nextInt(span)]
      }
      const x = random.nextInt(span) + random.nextInt(span)
      const z = random.nextInt(span) + random.nextInt(span)
      return [Math.floor(x / 2), Math.floor(z / 2)]
    }
    
    /**
     * Where one grid cell puts its structure.
     *
     * @param {object} placement {spacing, separation, salt, spreadType, engine, frequency}
     * @param {number} seed world seed
     * @param {number} cellX cell coordinate (chunk / spacing, floored)
     * @param {number} cellZ
     * @returns {{chunkX: number, chunkZ: number, accepted: boolean}}
     */
    function structureInCell (placement, seed, cellX, cellZ) {
      const span = spanOf(placement)
      const triangular = placement.spreadType === 'triangular'
      const engine = placement.engine === 'java' ? 'java' : 'mt'
      let offsets
      let gate = null
      if (engine === 'java') {
        const random = new JavaRandom(javaCellSeed(seed, cellX, cellZ, placement.salt))
        offsets = offsetJava(random, span, triangular)
        gate = random
      } else {
        const random = new Mt19937(cellSeed(seed, cellX, cellZ, placement.salt))
        offsets = offsetMt(random, span, triangular)
        gate = random
      }
      // The frequency gate, when a set declares one, is drawn from the same stream
      // after the offsets -- the order matters, so it is kept explicit.
      let accepted = true
      if (placement.frequency !== undefined && placement.frequency < 1) {
        accepted = engine === 'java'
          ? gate.nextFloat() < placement.frequency
          : gate.nextUnit() < placement.frequency
      }
      return {
        chunkX: cellX * placement.spacing + offsets[0],
        chunkZ: cellZ * placement.spacing + offsets[1],
        accepted
      }
    }
    
    /**
     * Every accepted cell start within `radiusChunks` of a chunk.
     *
     * Cells are visited in a deterministic order so callers can rely on the result
     * being reproducible; the order is by distance, then by cell coordinates.
     */
    function candidateStarts (placement, seed, chunkX, chunkZ, radiusChunks) {
      const minCellX = floorDiv(chunkX - radiusChunks, placement.spacing) - 1
      const maxCellX = floorDiv(chunkX + radiusChunks, placement.spacing) + 1
      const minCellZ = floorDiv(chunkZ - radiusChunks, placement.spacing) - 1
      const maxCellZ = floorDiv(chunkZ + radiusChunks, placement.spacing) + 1
      const out = []
      for (let cellZ = minCellZ; cellZ <= maxCellZ; cellZ++) {
        for (let cellX = minCellX; cellX <= maxCellX; cellX++) {
          const start = structureInCell(placement, seed, cellX, cellZ)
          if (!start.accepted) continue
          const blockX = start.chunkX * 16 + 8
          const blockZ = start.chunkZ * 16 + 8
          const distance = Math.hypot(blockX - (chunkX * 16 + 8), blockZ - (chunkZ * 16 + 8))
          if (distance > radiusChunks * 16) continue
          out.push({ ...start, cellX, cellZ, blockX, blockZ, distance })
        }
      }
      out.sort((a, b) => a.distance - b.distance || a.cellX - b.cellX || a.cellZ - b.cellZ)
      return out
    }
    
    /**
     * The nearest candidate start, i.e. what `locate structure` would report before
     * the per-structure biome and height checks are applied.
     *
     * This is the *candidate grid*, not the answer: the server walks the same cells
     * in ring order around the origin and returns the first one whose biome and
     * height pass, so a caller that does not model biomes yet can only offer the
     * cell grid.
     */
    function nearestStart (placement, seed, chunkX, chunkZ, radiusChunks = 512) {
      const candidates = candidateStarts(placement, seed, chunkX, chunkZ, radiusChunks)
      return candidates.length ? candidates[0] : null
    }
    
    module.exports = {
      floorDiv,
      spanOf,
      cellSeed,
      javaCellSeed,
      seed32,
      seed48,
      structureInCell,
      candidateStarts,
      nearestStart,
      CELL_MUL_X,
      CELL_MUL_Z
    }
    
  }
  defs["src/world/stronghold.js"] = function (module, exports, require) {
    'use strict'
    
    /**
     * Stronghold placement.
     *
     * Strongholds are *not* a ring walk in this build, and they are not a jittered
     * grid of the kind every other structure uses. The 200-chunk cell grid is
     * there, but the cell does not hold a 0..span offset: it holds the *centre* of
     * the cell, and the two salts in the mix are folded over that centre instead of
     * over the cell index. Everything below was read out of the binary and then
     * replayed against captured `locate structure` answers.
     *
     *   cellX = floor(chunkX / 200)                      (chunks, floored)
     *   u     = cellX * 200 + 100                        (the cell centre)
     *   v     = cellZ * 200 + 100
     *   seed32 = u * 0x9babeb51 + v * 0xbe68aeb9 + seed + 0x5d534e7     (mod 2^32)
     *
     * `seed32` seeds a 32-bit Mersenne Twister (the same init_genrand the grid
     * structures use). Three draws come out of it:
     *
     *   draw 1 -> nextInt(100)   the x jitter
     *   draw 2 -> nextInt(100)   the z jitter
     *   draw 3 -> nextUInt() / 2^32, compared against 0.25  (see `gated`)
     *
     * and the grid position of the cell is
     *
     *   chunkX = cellX * 200 + 50 + draw1 % 100
     *   chunkZ = cellZ * 200 + 50 + draw2 % 100
     *
     * What the third draw gates is measured, and it is *not* existence: every cell
     * carries exactly one stronghold (114 captures, no cell holds two). It gates
     * whether the stronghold ends up on that grid position. Across 114 captured
     * strongholds, 74 sit exactly on the predicted position and every one of those
     * 74 is a gated cell, while 0 of the 32 ungated ones are. Of the 82 gated
     * cells, 74 are exact -- so the gate is necessary with no counter-example and
     * sufficient 90% of the time.
     *
     * The rest of the cells are relocated: the binary calls a biome provider with
     * the candidate position (`0x4e9fca0`, virtual slot 6 of the object at
     * `+0x1a8`), which can reject the cell or rewrite the position, and the value it
     * leaves behind is what gets re-snapped. That is why relocated strongholds are
     * not on the 200-chunk grid at all -- `(84, 9)` cannot be `cell * 200 + 50 +
     * [0..100)` on either axis. Modelling them needs the biome layer, so this module
     * reports the cell and says `gated: false` rather than inventing a position.
     */
    
    const { Mt19937 } = require('./mt19937')
    
    /** Chunks per stronghold cell. */
    const CELL = 200
    
    /** The salt in the stronghold seed mix (`add $0x5d534e7` in the binary). */
    const SALT = 0x5d534e7
    
    /**
     * The two multipliers in the seed mix, in the order the binary applies them:
     * the x cell centre is scaled by 0x9babeb51 and the z cell centre by
     * 0xbe68aeb9. They are 32-bit values used with `pmuludq`, not floats, even
     * though the bytes at their addresses also happen to decode as tiny floats.
     */
    const MUL_X = 0x9babeb51
    const MUL_Z = 0xbe68aeb9
    
    /** The threshold the third draw is compared against (`ucomiss` against 0.25f). */
    const GRID_ODDS = 0.25
    
    /**
     * A world seed reduced to the 32 bits the placement mix uses.
     *
     * Seeds go beyond 2^53 in practice (`-9223372036854775808` is a legal world
     * seed), so a `Number(seed) >>> 0` would reduce the wrong value for them. The
     * reduction is therefore done in BigInt whenever the seed is not a safe
     * integer.
     */
    function seed32 (seed) {
      if (typeof seed === 'bigint') return Number(BigInt.asUintN(32, seed))
      if (typeof seed === 'string') return Number(BigInt.asUintN(32, BigInt(seed.trim())))
      if (Number.isSafeInteger(seed)) return Number(BigInt.asUintN(32, BigInt(seed)))
      return Number(BigInt.asUintN(32, BigInt(Math.trunc(seed))))
    }
    
    /** The centre of a cell, in chunks. */
    function cellCentre (cell) {
      return cell * CELL + CELL / 2
    }
    
    /** The 32-bit Mersenne seed for one cell. */
    function cellSeed (seed, cellX, cellZ) {
      return (Math.imul(cellCentre(cellX), MUL_X) +
        Math.imul(cellCentre(cellZ), MUL_Z) +
        seed32(seed) +
        SALT) >>> 0
    }
    
    /**
     * The stronghold a cell carries.
     *
     * @param {number|bigint|string} seed world seed; only its low 32 bits are used,
     *   so seeds 1 and 2^32+1 share every grid position
     * @param {number} cellX cell coordinate, i.e. floor(chunkX / 200)
     * @param {number} cellZ
     * @returns {{cellX: number, cellZ: number, chunkX: number, chunkZ: number,
     *   blockX: number, blockZ: number, gated: boolean, gate: number}}
     *   `chunkX/chunkZ` is the cell's grid position and `gate` its third draw.
     *   When `gated` is false the stronghold exists in this cell but the generator
     *   moved it off that position, so the grid position is not where to dig.
     */
    function strongholdInCell (seed, cellX, cellZ) {
      const random = new Mt19937(cellSeed(seed, cellX, cellZ))
      const dx = random.nextInt(100, 'modulo')
      const dz = random.nextInt(100, 'modulo')
      const gate = random.nextUnit()
      const chunkX = cellX * CELL + 50 + dx
      const chunkZ = cellZ * CELL + 50 + dz
      return {
        cellX,
        cellZ,
        chunkX,
        chunkZ,
        blockX: chunkX * 16 + 8,
        blockZ: chunkZ * 16 + 8,
        gated: gate < GRID_ODDS,
        gate
      }
    }
    
    /**
     * Every stronghold cell whose grid position is within `radiusChunks` of a
     * chunk, nearest first.
     *
     * The radius test uses the grid position because that is what the cell is
     * anchored to; a relocated stronghold can end up somewhat further out, so a
     * caller matching against real positions should look at the cells around the
     * hits too, not only at the ones inside the radius.
     */
    function strongholdsNear (seed, chunkX, chunkZ, radiusChunks = 256) {
      const minCellX = Math.floor((chunkX - radiusChunks) / CELL) - 1
      const maxCellX = Math.floor((chunkX + radiusChunks) / CELL) + 1
      const minCellZ = Math.floor((chunkZ - radiusChunks) / CELL) - 1
      const maxCellZ = Math.floor((chunkZ + radiusChunks) / CELL) + 1
      const out = []
      for (let cellZ = minCellZ; cellZ <= maxCellZ; cellZ++) {
        for (let cellX = minCellX; cellX <= maxCellX; cellX++) {
          const stronghold = strongholdInCell(seed, cellX, cellZ)
          const distance = Math.hypot(stronghold.blockX - (chunkX * 16 + 8),
            stronghold.blockZ - (chunkZ * 16 + 8))
          if (distance > radiusChunks * 16) continue
          out.push({ ...stronghold, distance })
        }
      }
      out.sort((a, b) => a.distance - b.distance || a.cellX - b.cellX || a.cellZ - b.cellZ)
      return out
    }
    
    module.exports = {
      CELL,
      SALT,
      MUL_X,
      MUL_Z,
      GRID_ODDS,
      seed32,
      cellCentre,
      cellSeed,
      strongholdInCell,
      strongholdsNear
    }
    
  }
  defs["src/world/world-report.js"] = function (module, exports, require) {
    'use strict'
    
    /**
     * What this seed's world contains -- from the seed alone.
     *
     * This is the user-facing entry point of the world generator: no server, no
     * recorded data, no network. It composes whatever subsystems are implemented
     * and, just as importantly, says what is not: every section carries a status so
     * a reader can tell a fitted answer from a modelled one from an unknown.
     *
     * Current state:
     *
     *   structures   placement modelled and, per set, either confirmed against the
     *                server, read from the vanilla pack, or explicitly unknown
     *   terrain      the noise primitive is implemented but the density function,
     *                climate routing and surface rules are not wired up, so no
     *                block can be predicted yet
     *   biomes       not implemented
     *
     * The point of the status lines is that the gaps stay visible instead of turning
     * into plausible-looking output.
     */
    
    const { PLACEMENTS, PLACEMENT_SOURCE } = require('./structures-data')
    const { candidateStarts } = require('./structure-placement')
    const { strongholdInCell, CELL: STRONGHOLD_CELL } = require('./stronghold')
    
    const STATUS = {
      confirmed: 'confirmed',
      measured: 'measured',
      pack: 'from pack',
      unknown: 'unconfirmed'
    }
    
    /**
     * Structures near a position for a seed.
     *
     * @param {number} seed
     * @param {object} options {x, z, radiusChunks, only}
     */
    function structuresNear (seed, { x = 0, z = 0, radiusChunks = 256, only = null } = {}) {
      const chunkX = Math.floor(x / 16)
      const chunkZ = Math.floor(z / 16)
      const out = []
      for (const placement of Object.values(PLACEMENTS)) {
        if (only && !only.includes(placement.id) && !only.includes(placement.id.replace('minecraft:', ''))) continue
        if (!placement.spacing) {
          // Strongholds are the one set with its own placement code: a 200-chunk
          // cell grid whose cells carry one stronghold each, at the grid position
          // for a gated quarter of them and relocated otherwise.
          const cells = []
          const reach = Math.ceil(radiusChunks / STRONGHOLD_CELL) + 1
          const baseCellX = Math.floor(chunkX / STRONGHOLD_CELL)
          const baseCellZ = Math.floor(chunkZ / STRONGHOLD_CELL)
          for (let dz = -reach; dz <= reach; dz++) {
            for (let dx = -reach; dx <= reach; dx++) {
              const stronghold = strongholdInCell(seed, baseCellX + dx, baseCellZ + dz)
              const distance = Math.hypot(stronghold.blockX - x, stronghold.blockZ - z)
              if (distance > radiusChunks * 16) continue
              cells.push({ ...stronghold, distance })
            }
          }
          cells.sort((a, b) => a.distance - b.distance)
          out.push({
            id: placement.id,
            status: 'measured',
            note: '200-chunk cells; a gate draw below 0.25 means the cell holds a stronghold ' +
              'at its grid position (probed: 159 of 160 gated cells, 0 of 160 ungated). A ' +
              'separate set of three strongholds per world is always at a village; their ' +
              'positions are exact village chunks but which villages are chosen is not ' +
              'recovered yet, so they are not reported here',
            candidates: cells.map((cell) => ({
              block: [cell.blockX, cell.blockZ],
              chunk: [cell.chunkX, cell.chunkZ],
              cell: [cell.cellX, cell.cellZ],
              distance: Math.round(cell.distance),
              gated: cell.gated
            }))
          })
          continue
        }
        const starts = candidateStarts(placement, seed, chunkX, chunkZ, radiusChunks)
        out.push({
          id: placement.id,
          status: STATUS[placement.evidence] || 'unconfirmed',
          note: placement.evidence === 'unknown' && !placement.note
            ? 'placement parameters are placeholders; use the oracle fit to confirm'
            : (placement.note || null),
          candidates: starts.map((start) => ({
            block: [start.blockX, start.blockZ],
            chunk: [start.chunkX, start.chunkZ],
            cell: [start.cellX, start.cellZ],
            distance: Math.round(start.distance)
          }))
        })
      }
      return { seed, from: [x, z], radiusChunks, structures: out }
    }
    
    /** A one-screen text report. */
    function formatReport (report) {
      const lines = []
      lines.push(`seed ${report.seed}, structures within ${report.radiusChunks} chunks of ${report.from.join(',')}`)
      lines.push('')
      for (const structure of report.structures) {
        lines.push(`${structure.id}  [${structure.status}]`)
        if (structure.note) lines.push(`  note: ${structure.note}`)
        if (!structure.candidates.length) {
          if (structure.status !== 'not modelled') lines.push('  no candidate start in range')
          continue
        }
        const nearest = structure.candidates[0]
        lines.push(`  nearest: block ${nearest.block.join(',')}  chunk ${nearest.chunk.join(',')}  (${nearest.distance} blocks away, cell ${nearest.cell.join(',')})`)
        if (structure.candidates.length > 1) {
          const others = structure.candidates.slice(1, 4)
            .map((candidate) => `${candidate.block.join(',')} (${candidate.distance})`)
            .join('; ')
          lines.push(`  next:    ${others}`)
        }
      }
      lines.push('')
      lines.push('not modelled yet: terrain height and blocks, biome assignment, surface rules,')
      lines.push('the relocation of strongholds whose cell is not on the grid, and the')
      lines.push('per-structure biome/height checks that decide whether a candidate start')
      lines.push('actually becomes a structure.')
      lines.push('')
      lines.push(`placement data: ${PLACEMENT_SOURCE.measured}`)
      return lines.join('\n')
    }
    
    module.exports = { structuresNear, formatReport, STATUS }
    
  }
  var placementData = req('src/world/structures-data.js')
  var placement = req('src/world/structure-placement.js')
  var stronghold = req('src/world/stronghold.js')
  var report = req('src/world/world-report.js')
  global.OpenBDSWorld = {
    PLACEMENTS: placementData.PLACEMENTS,
    candidateStarts: placement.candidateStarts,
    structureInCell: placement.structureInCell,
    nearestStart: placement.nearestStart,
    strongholdInCell: stronghold.strongholdInCell,
    strongholdsNear: stronghold.strongholdsNear,
    seed32: stronghold.seed32,
    strongholdCell: stronghold.CELL,
    structuresNear: report.structuresNear,
    formatReport: report.formatReport
  }
})(typeof self !== 'undefined' ? self : globalThis)
