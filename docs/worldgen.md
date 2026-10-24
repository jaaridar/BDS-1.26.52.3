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
| Structure placement machinery | **implemented, measured** | cell → 32-bit cell seed → MT19937 (legacy sets) or Java LCG (pack sets) → jittered start; seven sets reproduce every capture exactly |
| Per-structure placement data | **partial** | nine sets measured against the server; temples, ocean ruins, mineshaft, stronghold and abandoned camps still unconfirmed |
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

# replay every captured locate answer through the shipped table (the evidence
# table in this document is this command's output)
node tools/worldgen-algo/verify-placements.js

# score the model against every captured locate answer, per structure set
node tools/worldgen-algo/fit-placements.js --verbose

# recover the tuple for every set that has captures (compiles the C solvers)
node tools/worldgen-algo/derive-placements.js
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

## Measured state of structure placement (2026-10-24)

Every number below is a measurement; the commands that produce them are in the
repository, so each can be re-run.

| question | answer | how it was measured |
|---|---|---|
| Is a structure position a jittered grid cell start? | **yes** | every captured answer lies inside its cell's `spacing - separation` band, and the band model reproduces the answers below |
| What seeds a cell? | **`cellX*341873128712 + cellZ*132897987541 + seed + salt`** | read in `FUN_0d351a10` (32-bit folds of the Java constants) and `d2d2570` (64-bit) |
| Which random consumes that seed? | **two, and the engine is part of the data** | legacy sets: a 32-bit MT19937 seeded with the folded value. Pack-driven sets: a Java-compatible 48-bit LCG over the 64-bit value |
| How is the offset drawn? | **linear or triangular, per set** | `spread_type`: one draw per axis, or two averaged. Both shapes are confirmed sets in the table |
| Does the generator seed get truncated to 32 bits? | **for the legacy engine, yes** | seeds `1` and `2^32+1` produce the same legacy cell seed, hence the same village cells, but different answers, because the biome and height gates see the full seed |
| Do Java's tuples work for the other sets? | **mostly, but the spread type is theirs** | Java's `spacing/separation` and `salt` are right for village, monument, mansion, shipwreck, ancient city and buried treasure; Java's `linear`/`triangular` choice is not |
| Are the reported positions exact? | **exact for the legacy engine, chunk-aligned for the pack engine** | `node tools/worldgen-algo/verify-placements.js` |

### The table, with its tally

`node tools/worldgen-algo/verify-placements.js` prints this from the committed
captures; each row takes the cell that contains the reported chunk and asks the
model where that cell puts its structure.

| set | engine | spacing/separation | salt | spread | result |
|---|---|---|---|---|---|
| `minecraft:village` | mt | 34 / 8 | 10387312 | triangular | 27 / 27 exact |
| `minecraft:monument` | mt | 32 / 5 | 10387313 | triangular | 22 / 22 exact |
| `minecraft:mansion` | mt | 80 / 20 | 10387319 | triangular | 13 / 13 exact |
| `minecraft:pillager_outpost` | mt | 80 / 24 | 165745296 | triangular | 19 / 19 exact |
| `minecraft:ancient_city` | mt | 24 / 8 | 20083232 | triangular | 24 / 24 exact |
| `minecraft:shipwreck` | mt | 24 / 4 | 165745295 | linear | 24 / 24 exact |
| `minecraft:ruined_portal` | mt | 40 / 15 | 40552231 | linear | 24 / 24 exact |
| `minecraft:buried_treasure` | mt | 4 / 2 | 16842397 | triangular | 24 / 24 exact |
| `minecraft:trial_chambers` | java | 34 / 12 | 94251327 | linear | 4 exact, 24 / 24 within one chunk |
| `minecraft:trail_ruins` | java | 34 / 8 | 83469867 | linear | 9 exact, 26 / 27 within one chunk |

Each row is also the *unique* perfect fit: the same sweep over spacing 4..128
and every separation leaves one candidate per set, and perturbing the salt by
one breaks it. `buried_treasure` and `mineshaft` are grids after all — the
`spacing 1 / separation 0` reading was a wrong hypothesis, and
`buried_treasure` is `4 / 2` with a triangular draw.

The band numbers also settle an old question. `village`, `monument`,
`mansion`, `shipwreck` and `ancient_city` keep Java's grid and Java's salt;
`pillager_outpost` does not (80 / 24, not 32 / 8); `ruined_portal` keeps Java's
grid but not its salt (`0x26ac727`, not Java's 34222645).

### The two engines

`d2d2570` and `d2d2c60` are two placement resolvers, and they take different
arguments:

| resolver | arguments | mix |
|---|---|---|
| `d2d2570` | separation, spacing, spread type, salt, seed, cell pair | `(cellX*341873128712 + cellZ*132897987541 + seed + salt) ^ 0x5deece66d`, i.e. a Java LCG seed |
| `FUN_0d351a10` | the same, plus a per-level offset, and a ring search | `cellZ * -0xea9a42b + cellX * -0x66c60af8 + salt + seed` in 32 bits, then MT19937 |

The two multipliers in the second row are exactly the first row's constants
truncated to 32 bits (`341873128712 = 0x4F9939F508`, so `-0x66c60af8` mod 2^32 is
`0x9939f508`); the same identity holds for the Z constant. One arithmetic
family, two random engines.

`FUN_0d351a10` also shows *how* `locate` searches: it walks square rings of
cells outward from the origin cell (up to 100 rings), asks each cell for its
placement, and returns the first one the per-structure validity check accepts.
That is why a capture taken from `2048,2048` can name a structure whose cell is
not the one containing the reported chunk: the rings are walked around the
*origin*, and the answer is the first cell that passes the biome/height gate.

### What the reported position is

The chunk part is the placement chunk for every legacy set. For the two
pack-driven sets the answer is the jigsaw structure's own origin block: it sits
in the placement chunk or one chunk back on either axis, and for a corridor as
long as a trail ruin it can sit further along the corridor (one capture is 21
chunks out in Z). Predicting those exactly means running the jigsaw assembly,
which is a separate piece of work; the placement chunk underneath it is exact.

A second measurement from the same pass is about the within-chunk part: it is
constant per type. `village` is at `+8,+8` in 35 of 35 captures, `shipwreck` at
`+8,+8` in 24 of 24, `trial_chambers` at `+7,+7` or `+9,+9`, `trail_ruins` at
`+3,+3` for most captures. So the answer is a block position anchored inside the
placement chunk, and the chunk is what the resolver computed.

### Why the binary has to be read where it runs

The release asset is on a host this working environment cannot reach
(`www.minecraft.net` and `release-assets.githubusercontent.com` both fail at
connect, and no npm or PyPI package ships the server), so the binary is only ever
available inside CI. That is enough to run it (captures, memory dumps) and enough
to read it (`objdump`/Capstone over published slices), but it makes every
measurement that needs the file a round trip. The pipeline therefore publishes
what it reads: `binary-sections/` holds `.rodata`, `.data.rel.ro`, `.data` and the
`.text` window that contains every structure-name reference, each with its
virtual address, so the static side of this work can be repeated from a checkout.

## Honest limitations

- **Placement is reproduced for ten sets.** Eight are exact for every captured
  position; `trail_ruins` and `trial_chambers` are within a chunk and are limited
  by the jigsaw-origin convention described above, not by the grid. Re-run
  `node tools/worldgen-algo/verify-placements.js` for the current tally.
- **Six sets still have no measured row**: ocean ruins, desert pyramids, jungle
  temples, witch huts, igloos, abandoned camps. Their shape is known
  (`placeholder` rows say so) and nothing pretends otherwise.
- **`mineshaft` and `stronghold` are not grids at all.** Mineshafts are a
  per-chunk frequency gate whose threshold is not recovered; strongholds use ring
  placement, and the captures already contradict Java's ring radii
  (nearest stronghold 47-203 chunks out in 12 captures).
- **A set's reported position is not always its placement chunk.** For the
  pack-driven sets it is the structure's own origin block, which can sit one
  chunk back on either axis (and further, along a corridor). The model reports
  the placement chunk and the tools keep the residual visible instead of hiding
  it inside a symmetric tolerance.
- **Strongholds use ring placement**, which is a different algorithm from the
  jittered grid; it is not modelled at all yet, and the tool says so instead of
  producing a number.
- **Terrain blocks are not predicted.** The noise primitive is exact, but the
  router that decides which noises to sample, and the splines that turn climate
  into density, are not wired up.
- **Biome assignment is not implemented**, although the climate target points
  each biome occupies are loaded and available.
