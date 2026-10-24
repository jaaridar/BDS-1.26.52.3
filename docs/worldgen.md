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
| Is a structure position a jittered grid cell start? | **yes** | 20 seeds of `trail_ruins` and 20 of `village`: every reported chunk falls in the `spacing - separation` band, 2.2e-5 by chance for each set (`test-grid-hypothesis.js`) |
| Is `trail_ruins` placement reproduced end to end? | **yes, 34 of 35 captures over 20 seeds** | pack tuple 34/8/83469867 linear, every report within 3 blocks of the predicted chunk corner (`fit-placements.js`); the one outlier is a second `trail_ruins` found from a far origin, 350 blocks out |
| Was the outlier a second structure or a model failure? | **unknown, and quarantined** | it is reported rather than dropped: if the model ever misses on a structure the server placed, that is a fact about the model, not noise |
| Is the generator seed truncated to 32 bits? | **no** | seeds `1` and `2^32+1` place `trail_ruins` at different chunks (`structures/seed-*`) |
| Do Java's tuples work for the other sets? | **no** | `village` misses by up to 328 blocks, `monument` by 312, `pillager_outpost` by 408, `mansion` by 552; an exhaustive 2^32 sweep of the salt field with each set's Java span finds nothing |
| Are the salts store immediates in code? | **no** | `scan-records` found 33 481 store clusters; none of the 1 049 plausible tuples fits even `trail_ruins`, whose tuple is known, so the numbers are not written by a constructor |
| Where are the parameters then? | **data, and only partly on disk** | the two sets that ship a `structure_set` JSON in the pack are exactly the two whose tuples are known; no other pack ships placement for them (all 597 `*.brarchive` files were searched) |
| Is the placement JSON inside the binary as text? | **no** | scanning for `"salt":`, `"spacing":`, `"separation":`, `"spread_type":` finds nothing; the only `random_spread` hits are the cereal factory type name and an unrelated feature |
| Are the compiled-in salts dword runs in the data sections? | **no** | 25 349 records from `.rodata`/`.data.rel.ro`/`.data`, 21 567 after dropping self-referential small spacings, and no tuple fits any set -- including the one whose tuple is known |
| What about `mineshaft` and `buried_treasure`? | **not grids** | `spacing 1, separation 0` -- every chunk is a candidate and a per-chunk frequency decides; the gate is not recovered yet, so they are marked `kind: 'frequency'` |
| Strongholds | **not a Java ring** | 12 captures: nearest stronghold 760-3249 blocks out (47-203 chunks), while Java's first ring is 1408-2688 blocks; the ring parameters are Bedrock's own |

Every static route is now closed: not immediates, not `.rodata` dwords, not JSON
text, not a shipped pack. The numbers exist, though -- the server uses them -- so
the measurement moves to the one place they are certain to be: the running
process. `tools/worldgen-algo/dump-memory.js` starts the server, forces the
structure registry to be built by answering a `locate`, and then reads the
process's own anonymous memory, anchored on the identifier strings and on the two
salts the packs state. It records the raw bytes of every object that points at
them, so the record layout is read off a dump instead of assumed.

That dump is the measurement the rest of this work waits on. What the resolver
already tells us the record looks like, from `d2d2570` and its caller:

| field | where | value |
|---|---|---|
| separation | placement record `+0` | small, chunks |
| spacing | placement record `+4` | small, chunks |
| spread type | placement record `+8` | `1` selects triangular, `0` linear |
| salt | set record `+4` | 32-bit, added to the mix |
| seed | pointer argument | added to the mix, full 64 bits |
| potential chunk | return | `(cell * spacing + draw, ...)`, packed |

and the band fit over the enlarged captures puts the compiled-in candidates
somewhere else entirely from Java's:

| set | Java (spacing/separation) | best band candidate | log10 chance |
|---|---|---|---|
| `ancient_city` | 24/8 | **24/9** | -9.8 |
| `monument` | 32/5 | **33/11** | -7.7 |
| `pillager_outpost` | 32/8 | **86/32** | -7.7 |
| `ruined_portal` | 40/15 | **60/35** | -18.3 |
| `mansion` | 80/20 | **80/32** | -5.8 |
| `shipwreck` | 24/4 | **24/4** | -3.8 |

These are candidates, not conclusions: the band test only says the observed
offsets are consistent with that grid. The conclusion is a salt that reproduces
every capture, which is what `fit-parameters.js --sweep` looks for.

### Two seeding routines, not one (measured 2026-10-24)

`ca71350` (`StructureAccess::ctor`) calls **two** different placement resolvers,
and they take different arguments:

| resolver | arguments | mix |
|---|---|---|
| `d2d2570` | separation, spacing, spread type, salt, seed, chunk pair | `(cellZ*132897987541 + cellX*341873128712 + seed + salt) ^ 0x5deece66d` |
| `d2d2c60` | seed, chunk pair, and no salt | `rng.setSeed(seed); i = nextLong(); j = nextLong(); setSeed((cellZ*j) ^ (i*cellX) ^ seed)` |

The second is the shape of `WorldGenRandom.setLargeFeatureSeed`, which has no
salt at all. That is the important asymmetry: an exhaustive search over an
additive salt can never find a set that uses the second routine, because there is
no constant to find. It also explains why the sweeps kept coming back empty for
the same sets whose captures sit neatly on a grid -- the grid is real, the jitter
is real, and the constant the search was looking for is not there.

`tools/worldgen-algo/test-legacy-placement.js` scores the unsalted family
directly. It has no unknown constant, so every `(spacing, separation)` is decided
outright, for both `|1` and plain multipliers and for `^` and `+` folds. Result:
**no set fits it**, with `trail_ruins` as the control (it must not fit, and does
not). So the compiled-in sets are neither the Java salted form nor the plain
`setLargeFeatureSeed` form, and the next measurement has to read the values the
server actually built.

### One more measured fact: the origin sits at or before the placement chunk

Across the 35 `trail_ruins` captures the predicted chunk minus the observed chunk
is `0` for 9 of them and `+1` for 25 (`tools/worldgen-algo/fit-placements.js`,
residual list). So `locate structure` reports the structure's origin block, and
that origin can be one chunk *before* the chunk the set placed -- never after.
Every fit in this repository therefore accepts `predicted - observed in {0, 1}`
rather than equality, and a fit that only works with a symmetric tolerance is
not accepted.

### Checked against Cubiomes, set by set (2026-10-24)

Cubiomes' parameter table is now a reference in this repository
(`docs/reference/cubiomes-placement.md`) and
`tools/worldgen-algo/compare-cubiomes.js` runs it against every capture. Two of
the nine types with captures land on Java's cells: `trail_ruins` (35/35 within
one chunk -- the control, since the pack states its numbers) and
`trial_chambers` (24/24, and its set exists only inside the binary). The other
seven are at chance distance for their grid, so their parameters are Bedrock's
own. That is a cleaner statement than "the sweeps all failed": the mix is proven
correct by the two matches, and what is missing for the rest is exactly the
triple `(spacing, separation, salt)`.

A second measurement from the same pass, which is about what `locate` reports
rather than about the grid: the *within-chunk* part of every reported position is
constant per type. `village` is at `+8,+8` in 35 of 35 captures, `shipwreck` at
`+8,+8` in 24 of 24, `trial_chambers` at `+7,+7` or `+9,+9`, and `trail_ruins` at
`+3,+3` for most captures and `+2,+14` for a few. So the answer is the
structure's origin block, anchored to a template-specific point inside the
placement chunk, and the chunk itself is what the resolver computed. That is why
every fit here compares chunks and reports the block residual separately.

### Why the binary has to be read where it runs

The release asset is on a host this working environment cannot reach
(`www.minecraft.net` and `release-assets.githubusercontent.com` both fail at
connect, and no npm or PyPI package ships the server), so the binary is only ever
available inside CI. That is enough to run it (captures, memory dumps) and enough
to read it (`objdump`/Capstone over published slices), but it makes every
measurement that needs the file a round trip. The pipeline therefore publishes
what it reads: `binary-sections/` holds `.rodata`, `.data.rel.ro`, `.data` and the
2.4 MiB of `.text` that contains every structure-name reference, each with its
virtual address, so the static side of this work can be repeated from a checkout.

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
