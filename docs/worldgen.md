# World generation

A seed is supposed to be enough. This directory is the open-source attempt to
make that true for Bedrock 1.26.52.3: given a seed, say what is in the world,
without running the proprietary server and without recording anything.

It is a work in progress, and this file is written so that the state of each
subsystem is legible rather than implied. Nothing here is allowed to look more
certain than its evidence.

| subsystem | state | evidence |
|---|---|---|
| MT19937 | **implemented** | stream matches the published reference vector; draw conventions read from `.text` |
| Octave Perlin noise | **implemented** | constructor, sampler, fade, amplitude and the 16-entry gradient table read out of the binary |
| Two-layer normal noise | **implemented** | `NormalNoiseOperationNode::vslot4`, incl. the 1.0181268 input factor and `maxValue` formula |
| `java.util.Random` LCG | **implemented** | `WorldGenRandom`, multiplier/addend/mask read from `.text` |
| Structure placement machinery | **implemented** | cell → seeded LCG → jittered start, linear and triangular spread, frequency gate |
| Per-structure placement data | **partial** | `trail_ruins` and `abandoned_camp` read from the shipped packs; the rest is in the binary and not yet recovered |
| Structure positions | **tools ready** | `structure-locate.js` computes hypotheses; `fit-structures.js` rejects any that the server's `locate` output contradicts |
| Biome climate rules | **data loaded** | 76 biomes, 14 with `multinoise_generation_rules`, read from the packs |
| Surface builder materials | **data loaded** | per-biome `surface_builder` components from the packs |
| Climate noise router | **not implemented** | the descriptor table is built at startup inside the binary |
| Density / terrain height | **not implemented** | depends on the router |
| Block prediction | **not implemented** | depends on density, surface rules and feature order |
| Strongholds | **not implemented** | ring placement, not a jittered grid |

## What you can run now

```
# area report for a seed: which structures, where, and how sure we are
node tools/worldgen-algo/world.js --seed 12345

# one structure set near a position, with candidates ordered by distance
node tools/worldgen-algo/structure-locate.js --seed 12345 --id trail_ruins --from 0,0

# the placement parameters currently known, and where each came from
node tools/worldgen-algo/structure-locate.js --seed 1 --list

# the placement numbers the server ships as data (no binary needed)
node tools/worldgen-algo/pack-structure-sets.js

# score the model against every captured locate answer, per structure set
node tools/worldgen-algo/fit-placements.js --verbose
```

The report labels each set `from pack` (readable data), `measured` (confirmed
against the server), or `unconfirmed` (shape-only placeholder that must not be
trusted yet).

## How the uncertain parts get settled

Two independent measurements, and a rule that a hypothesis dies on the first
contradiction:

1. **Ask the server.** `tools/worldgen-algo/capture-structures.js` runs
   `locate structure` for a list of seeds and records the answers verbatim. That
   is Mojang's generator answering, so it is ground truth for those seeds.
2. **Read the binary.** `tools/binary-analysis/scan-binary.py` finds the
   identifiers in `.rodata`, resolves which code references them (RIP-relative
   scan over real instruction encodings), and exposes the dword-store immediates
   that constructors use to fill a placement record. Ghidra then decompiles the
   referencing functions.
3. **Fit, then try to break it.** `fit-structures.js` takes a candidate
   (salt, spacing, separation, spread) and requires that it put a cell start
   exactly on every reported chunk, for every seed. One miss rejects it.

That is why the placeholder rows in `src/world/structures-data.js` carry
`evidence: 'unknown'`: a salt that has not survived step 3 is a guess, and this
project does not ship guesses as answers.

## Recovered constants

Floats and doubles, all from `.rodata`, all cross-checked in
`research/proprietary/bds-1.26.52.3/ghidra/lattice-*/`:

| value | meaning | address |
|---|---|---|
| `1.0181268` (f32) | normal-noise input factor for the second layer | `0x011988fc` |
| `0.015625` (f32) | 1/64, coordinate scale for noise sampling | `0x01198af8` |
| `1.0` (f64) | `maxValue` numerator term | `0x014f0478` |
| `0.1` (f64) | `maxValue` denominator term | `0x014f0518` |
| `1/6` (f32) | `maxValue` leading factor | `0x011988b0` |

The gradient table at `0x01d9f3c0` is sixteen float triples; entries 12–15 are
`(1,1,0) (0,-1,1) (-1,1,0) (0,-1,-1)`, which is *not* the padding a
Java-derived port would assume.

## Layout

```
src/world/mt19937.js              MT19937 with the draw conventions as policies
src/world/perlin.js               octave Perlin, normal noise, gradient table
src/world/java-random.js          48-bit LCG, Mth-style structure seed mix
src/world/structure-placement.js  spaced-structure resolver
src/world/structures-data.js      placement parameters + where each came from
src/world/biomes-data.js          biome climate/surface data from the packs
src/world/world-report.js         composition + status labels for a seed
tools/worldgen-algo/              CLI: world report, locate, fit; brarchive reader
tools/binary-analysis/            static extraction: identifier scan, record scan
tools/worldgen-golden/            oracle harness: block capture and verification
```

## Honest limitations

- **The placement derivation is now reproduced for one set, end to end.**
  `trail_ruins` ships its placement in the vanilla pack
  (`salt 83469867, separation 8, spacing 34, spread_type linear`) and the
  recovered resolver turns that into chunk positions that agree with the server
  on **23 of 23 seeds** (`node tools/worldgen-algo/fit-placements.js --id
  trail_ruins`). The reported position is the structure's origin block, not the
  placement chunk: in every one of those 23 cases it sits within 3 blocks of the
  predicted chunk's corner, i.e. inside that chunk or the one before it.
- **The other sets' parameters are Bedrock's own, not Java's.** This was the
  real gap. `minecraft:village` fits the same resolver with a different tuple --
  Java's `spacing 34 / separation 8 / salt 10387312` misses in every direction,
  by up to 328 blocks. The recovery path is an exhaustive search rather than a
  preference: `tools/worldgen-algo/solve-salt.c` sweeps all 2^32 values of the
  32-bit salt field, and `solve-placement.c` sweeps that space together with
  every span and both spread types, with `slack 0` for the 1-cell structures and
  `slack 1` where the origin can fall back into the previous chunk. A candidate
  that survives has to reproduce *every* observation, so surviving is the claim.
  Any set whose numbers are still placeholders reports candidates computed from
  unconfirmed values, and says so.
- **A set's reported position is not its placement chunk.** The server answers
  `locate structure` with the structure's origin block. For small structures
  that lands within a couple of blocks of the chunk corner; for a jigsaw as
  large as a village it can land in the previous chunk. The fit tool reports the
  block residual so this convention stays visible rather than hiding inside a
  tolerance.
- **Strongholds use ring placement**, which is a different algorithm from the
  jittered grid; it is not modelled at all yet, and the tool says so instead of
  producing a number.
- **Terrain blocks are not predicted.** The noise primitive is exact, but the
  router that decides which noises to sample, and the splines that turn climate
  into density, are not wired up.
- **Biome assignment is not implemented**, although the climate target points
  each biome occupies are loaded and available.
