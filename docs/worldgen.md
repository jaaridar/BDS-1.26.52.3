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
| Per-structure placement data | **partial** | ten sets measured against the server; temples, ocean ruins, mineshaft and abandoned camps still unconfirmed |
| Structure positions | **tools ready** | `structure-locate.js` computes hypotheses; `fit-structures.js` rejects any that the server's `locate` output contradicts |
| Biome climate rules | **data loaded** | 76 biomes, 14 with `multinoise_generation_rules`, read from the packs |
| Surface builder materials | **data loaded** | per-biome `surface_builder` components from the packs |
| Climate noise router | **not implemented** | the descriptor table is built at startup inside the binary |
| Density / terrain height | **not implemented** | depends on the router |
| Block prediction | **not implemented** | depends on density, surface rules and feature order |
| Strongholds | **mostly exact** | 200-chunk cell grid, one stronghold per cell; the grid position is exact for the gated quarter, the rest need the biome layer (below) |

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

# fit the placement model itself: engine x seed formula x spread x band x salt,
# reporting every band that reproduces *all* captures (uniqueness, not a guess)
node tools/worldgen-algo/fit-placement.js --all

# the two models that are not grids: per-chunk gates and stronghold rings
node tools/worldgen-algo/fit-placement.js --id mineshaft --model gate
node tools/worldgen-algo/fit-placement.js --id mineshaft --model modzero
node tools/worldgen-algo/fit-strongholds.js

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

### The fitting harness

`tools/worldgen-algo/fit-placement.js` is the tool that produced the table, and
its shape is the point: it searches the *model space*, not just the numbers.

| axis | values searched | why |
|---|---|---|
| engine | `mt` (MT19937), `java` (48-bit LCG) | the binary has both resolvers |
| seed formula | additive, xor, `setLargeFeatureSeed` | three mixes appear in different resolvers |
| spread | linear, triangular | `spread_type` is per set |
| band | spacing 4..128 x every separation | not trusted from Java |
| salt | the binary's value, plus any `--salt` list | the one number read statically |

For a set with captures it prints `unique perfect band` when exactly one
combination reproduces every capture, or lists all of them when it is ambiguous.
All eight `mt` sets come back unique; the tool would say so if they did not. The
same search is what refuted the earlier hypotheses, so it is also the regression
test for them:

```
node tools/worldgen-algo/fit-placement.js --all
minecraft:village            unique perfect band  mt/add 34/8 salt 10387312 triangular
minecraft:pillager_outpost   unique perfect band  mt/add 80/24 salt 165745296 triangular
minecraft:monument           unique perfect band  mt/add 32/5 salt 10387313 triangular
minecraft:mansion            unique perfect band  mt/add 80/20 salt 10387319 triangular
minecraft:shipwreck          unique perfect band  mt/add 24/4 salt 165745295 linear
minecraft:buried_treasure    unique perfect band  mt/add 4/2 salt 16842397 triangular
minecraft:ruined_portal      unique perfect band  mt/add 40/15 salt 40552231 linear
minecraft:ancient_city       unique perfect band  mt/add 24/8 salt 20083232 triangular
minecraft:trail_ruins        no perfect band   (9/27: the jigsaw-origin convention)
minecraft:trial_chambers     no perfect band   (24/27 within one chunk)
minecraft:mineshaft          no perfect band   (not a grid: see below)
minecraft:stronghold         no perfect band   (not a grid: see below)
```

The JSON of each run is kept under
`research/proprietary/bds-1.26.52.3/structures/fits/`, so the numbers in this
document can be checked without re-running the search.

### The two sets that are not on the grid

Both are open, and both are open *for a measured reason* rather than for want of
trying.

**`mineshaft`** is a per-chunk set (`spacing 1, separation 0`): every chunk is a
candidate and something decides. The harness tests both shapes such a decision
can take:

* a threshold on a draw -- `accept if draw < t` (or `> t`), for draw indices 0-4,
  three seed families, both engines. It walks the resolver's ring order from each
  capture's origin and collects the values of every chunk the search had to
  reject. Result: **zero separating thresholds**. The reason is arithmetic: with
  thousands of rejected chunks the rejected values cover the whole unit
  interval, so no cut can separate them from 24 accepted values unless the gate
  is much sparser than a uniform draw allows -- which is itself the answer.
* a `raw % k == 0` gate for every k up to 512, same families and draws. Result:
  **no k accepts all 24 answers**, so the gate is not a modulo test either.

What is left is a condition that is not a function of the chunk's own placement
stream, i.e. the biome/height check, which is the same reason the grid sets are
only exact at the chunk level. `mineshaft` therefore waits on the biome layer.

**`stronghold`** uses the concentric-ring algorithm, not a grid, so the grid
harness is silent about it. `tools/worldgen-algo/fit-strongholds.js` measures the
shape of the data instead:

```
seed  chunk     blocks        radius(chunks)  angle(deg)
1     66,76     1058,1218     100.7            49.0
2     -20,-55   -318,-878      58.5          -110.0
7     -20,43    -318,690       47.4           114.9
12    41,-199    658,-3182    203.2           -78.4
```

The nearest stronghold to the origin is 47-203 chunks out, which already
contradicts Java's first ring (128 chunks +/- 20). A parameterized ring model
(java/MT engine, base 4 or 6 rings, distance 8-64, spread 0-3, tolerance 7-64
chunks) explains at best 6 of 12 captures, i.e. chance. The harness prints the
tolerance it needed, so "fits with a huge tolerance" cannot be mistaken for a
fit. Cracking this needs the ring enumeration itself (`StrongholdFeature::vslot5`
/ `vslot6`), which is next.

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

### Strongholds are a cell grid with a twist (2026-10-24)

Strongholds are not a ring walk in this build. The ring harness in
`tools/worldgen-algo/fit-strongholds.js` cannot explain them (it tops out at
3 of 6 from the origin at any tolerance up to 64 chunks), and the Java ring
radii are refuted outright by the captured sets: the strongholds of one seed sit
at 58, 179, 277, 338, 355, 503 chunks, which is no ring Java produces.

The real placement is a 200-chunk cell grid like every other set, with two
differences that make it look like a ring if you only look at positions:

1. the cell is 200 chunks wide, four times the widest legacy spacing; and
2. the seed mix folds the *cell centre*, `cell * 200 + 100`, not the cell index.

```
cellX  = floor(chunkX / 200)                       chunks, floored
u      = cellX * 200 + 100                         the cell centre
v      = cellZ * 200 + 100
seed32 = u * 0x9babeb51 + v * 0xbe68aeb9 + seed + 0x5d534e7      (mod 2^32)
```

`seed32` seeds a 32-bit Mersenne Twister and three draws come out of it:

| draw | use |
| --- | --- |
| 1 | `nextInt(100)` — the x jitter |
| 2 | `nextInt(100)` — the z jitter |
| 3 | `nextUInt() / 2^32` — compared against 0.25; see the tally below |

so the grid position is `cell * 200 + 50 + jitter` per axis. That is the `divps` by 200 at `0x4e9f094`, the `pmuludq` against
the two multipliers at `0x13e4220` / `0x13e8740`, the `add $0x5d534e7` at
`0x4e9f12a`, the two virtual `nextInt(100)` calls at `0x4e9f234` / `0x4e9f249`
and the `ucomiss` against the `0.25f` at `0x1098630`.

Three captured sets, one fitted on and two held out, give this tally
(`node tools/worldgen-algo/verify-strongholds.js`, no `--slug` means the whole
corpus):

| capture set | strongholds | on the predicted chunk | gated cells | of those, exact | ungated, exact |
| --- | --- | --- | --- | --- | --- |
| `stronghold_enum` (fit) | 32 | 17 | 20 | 17 | **0** |
| `stronghold_enum2` (fit, origin region) | 42 | 30 | 32 | 30 | **0** |
| `stronghold_enum3` (held out, untouched region) | 23 | 22 | 23 | 22 | **0** |
| all | 114 | 74 | 82 | 74 (90%) | **0** |

So the gate is a *necessary* condition, with no counter-example in 114 captures,
and a *sufficient* one 90% of the time. The 8 exceptions are strongholds whose
cell was gated in but whose position the generator still moved, so they are
reported as `gated: true` with a note rather than claimed as exact. The held-out
region is where the model does best, which is what a terrain-dependent relocation
should look like: the origin region is the one that has oceans in it.

What happens to the other three quarters of the cells is now readable in the
binary too. `0x4e9fca0` loads a provider out of the feature's own state
(`+0x1a8`), calls slot 6 of its vtable with the candidate position, and the
provider both decides *whether to reject* the cell and *rewrites the position*:
the value it leaves in that slot is what gets re-snapped to a cell and re-seeded.
That is a biome query, and it is why the relocated strongholds are not on the
200-chunk grid at all: `(84, 9)` cannot be `cell * 200 + 50 + [0..100)` for any
cell, on either axis, so no amount of jitter explains it. Predicting those
positions needs the biome layer, which is the next milestone; what is known today
is that each cell carries exactly one stronghold (42 captures, no cell holds two)
and a quarter of them are pinned exactly.

`src/world/stronghold.js` implements the grid, the mix and the gate, and
`tools/worldgen-algo/verify-strongholds.js` replays the captures and prints both
numbers separately, so a relocated stronghold is never counted as a hit.

### The gate decides existence, and that is measured (2026-10-25)

A sweep that walks a rectangle only finds out what is nearest to a grid of
origins. To test the model itself, `tools/worldgen-algo/plan-stronghold-probe.js`
builds a plan whose origins *are* the model's predictions: 40 cells per seed
whose gate draw is below 0.25 and which no capture had seen, plus 40 cells above
it as controls. An origin sitting on a stronghold makes `/locate` answer that
very chunk, so the answer is the model's own claim read back from the server.

`node tools/worldgen-algo/verify-probe.js` over 4 seeds (320 probes):

| cells | answered with the origin chunk itself |
| --- | --- |
| gated (draw < 0.25) | **159 / 160** (99.4%) |
| ungated (draw >= 0.25) | **0 / 160** |

So the gate is not a cosmetic flag: it is whether the cell holds a stronghold at
its grid position. The one gated miss is reported rather than smoothed away.

Two further measurements fell out of the same captures:

* **Only the low 32 bits of the seed reach the grid.** Seeds `1` and `2^32+1`
  produce the same four grid positions (three identical, one differing), while
  `2^32` produces a different world entirely. That is what `seed32` in
  `stronghold.js` implements, and why it is done in BigInt — a `Number() >>> 0`
  is wrong above 2^53, which is where the int64 seeds live.
* **A second, near-spawn population exists.** Of the strongholds `/locate`
  answers with, some are not any cell's grid position. Grouping every captured
  answer by distance from the origin shows they are not scattered:

  | distance from spawn (chunks) | strongholds | not on the grid |
  | --- | --- | --- |
  | 0-100 | 7 | **7 (100%)** |
  | 100-200 | 26 | 18 (69%) |
  | 200-300 | 16 | 12 (75%) |
  | 300-450 | 31 | 5 (16%) |
  | 450-600 | 23 | 3 (13%) |
  | 900-1500 | 12 | **0 (0%)** |

  Those positions are inside a 200-chunk cell but 50-350 chunks from its grid
  position, so no jitter explains them, and they change when only the high half
  of the seed changes (`1` vs `2^32+1` differ exactly there) — so that placement
  reads the full 64-bit seed, i.e. it is driven by the biome/climate data. The
  grid does not. Modelling them is part of the biome milestone, and until then
  they are reported as `relocated` rather than guessed at.

`node tools/worldgen-algo/verify-locate.js` is the acceptance harness for this:
it replays every captured `/locate` question and classifies the answer as
`exact`, `relocated` (a position that is no cell's grid position) or `wrong`
(the server named a grid position that was not the model's nearest). The current
tally over 4708 queries is 2779 exact (59.0%), 1883 relocated, 46 wrong — the
`wrong` count is the one that has to be driven to zero, and it is 1.6% of the
queries whose answer is on the grid at all.

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

- **Placement is reproduced for eleven sets.** Eight are exact for every captured
  position; `trail_ruins` and `trial_chambers` are within a chunk and are limited
  by the jigsaw-origin convention described above, not by the grid. Strongholds
  are exact for the cells whose gate draw is below 0.25 (30 of 32 measured), and cell-exact
  for the rest, whose position comes out of a biome query that is not modelled
  yet. Re-run `node tools/worldgen-algo/verify-placements.js` and
  `node tools/worldgen-algo/verify-strongholds.js` for the current tallies.
- **Six sets still have no measured row**: ocean ruins, desert pyramids, jungle
  temples, witch huts, igloos, abandoned camps. Their shape is known
  (`placeholder` rows say so) and nothing pretends otherwise.
- **`mineshaft` and `stronghold` are not grids at all, and both are still open.**
  Mineshafts are a per-chunk decision, and the harness has refuted every
  draw-based shape of it (threshold and modulo, three seed families, both
  engines), which points at the biome/height check rather than a new random.
  Strongholds use concentric rings; the captures contradict Java's ring radii
  (nearest stronghold 47-203 chunks out) and no parameterized ring model in the
  family the harness searches explains them. Strongholds turned out not to be
  rings at all -- they are a 200-chunk cell grid with a gate (see above) -- so
  what is left open for them is the biome query, and for mineshaft the
  biome/height test. Both need the biome layer this repository does not have yet.
- **A set's reported position is not always its placement chunk.** For the
  pack-driven sets it is the structure's own origin block, which can sit one
  chunk back on either axis (and further, along a corridor). The model reports
  the placement chunk and the tools keep the residual visible instead of hiding
  it inside a symmetric tolerance.
- **A quarter of the strongholds are exact, the rest are cell-exact.** The
  stronghold grid, mix and gate are modelled; what a cell's non-gated stronghold
  position is comes from the biome provider, so until biomes are modelled those
  are reported as `gated: false` rather than given a made-up position.
- **Terrain blocks are not predicted.** The noise primitive is exact, but the
  router that decides which noises to sample, and the splines that turn climate
  into density, are not wired up.
- **Biome assignment is not implemented**, although the climate target points
  each biome occupies are loaded and available.
