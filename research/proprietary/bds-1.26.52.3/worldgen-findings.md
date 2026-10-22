# BDS 1.26.52.3 world-generation findings

> Proprietary reverse-engineering research. This document and the adjacent generated
> decompiler evidence are not part of the MIT-licensed OpenBDS implementation.
> Do not copy mechanically recovered pseudocode into `src/`.

## Scope and evidence

This report concerns the exact repository-owned Linux ELF:

- Size: `256,133,808` bytes
- SHA-256: `0a490c711d4a2ce075debcd979e8862b7eaba008373f9970f0edbb67f98f9207`
- GNU build ID: `c0ff36e2eacfc191f01e189237df71f139b5d04a`
- Format: x86-64 little-endian PIE, stripped, no `.symtab`
- `.gnu_debuglink`: `bedrock_server.debug` (the separate debug object is not present)

The primary local evidence is in:

- `inventory/` — ELF metadata, strings, dynamic symbols, relocations, and section reports.
- `ghidra/vtable-functions.tsv` — reconstructed Itanium RTTI/vtable entries.
- `ghidra/virtual-function-pseudocode.md` — mechanically generated decompilation and instructions.
- `ghidra/direct-callees.tsv` and `ghidra/direct-callee-pseudocode.md` — bounded direct-call expansion from the principal generator methods.

The Ghidra pass imports the file without whole-program auto-analysis and does not run
it. Function names below are therefore evidence-backed labels, not recovered source
symbols. The final reproducible passes succeeded in GitHub Actions:

- inventory run [`39784947127`](https://github.com/jaaridar/BDS-1.26.52.3/actions/runs/39784947127);
- complete-vtable/direct-call run [`39785801803`](https://github.com/jaaridar/BDS-1.26.52.3/actions/runs/39785801803).

### Corroborating public sources

Two public sources were used for names and cross-checking, not as substitutes for the
exact ELF evidence:

1. LeviLamina's generated declarations for `WorldGenerator`, `OverworldGenerator`,
   `OverworldGenerator2d`, and `OverworldGeneratorMultinoise`, commit
   [`4ca13569fc0d1cdeb873cf6e7c48ddcc7a74e59c`](https://github.com/LiteLDev/LeviLamina/tree/4ca13569fc0d1cdeb873cf6e7c48ddcc7a74e59c).
2. Sapling's independently documented BDS static analysis and executable Rust parity
   work, commit
   [`11d45e329664f663491db196eabddeaf9bd9087e`](https://github.com/acacia-rs/sapling/tree/11d45e329664f663491db196eabddeaf9bd9087e),
   especially `docs/research/worldgen-bds*.md` and
   `crates/sapling-worldgen`. Its recorded virtual addresses are from a Windows PE and
   must not be transferred to this Linux ELF. Its algorithmic conclusions and oracle
   comparisons are cited explicitly as independent corroboration below.

## Verdict

The current overworld generator is a native C++ port of the **Java 1.18.0/1.18.1
`NoiseSampler`-era pipeline**, with Bedrock-specific surrounding stages. It is **not**
the Java 1.18.2+ data-driven noise-router pipeline.

The central terrain path is:

1. derive Xoroshiro128++ positional streams from the 64-bit world seed;
2. initialize named climate, terrain, cave, aquifer, noodle, ore-vein, surface, and
   depth-layer noises;
3. sample a `5 × 5 × 41` float density lattice for one `16 × 16 × 320` chunk volume;
4. shape the base density with climate values and hardcoded terrain splines;
5. carve cheese, entrance, spaghetti, pillar, roughness, and noodle cave terms;
6. trilinearly interpolate the lattice to blocks;
7. apply structure terrain adjustment, aquifer pressure/fluid selection, ore veins,
   and the stone/deepslate transition;
8. fill 3D biomes, build the Bedrock data-driven biome surface, and add the Bedrock
   floor;
9. run pregeneration carvers, structure post-processing, feature-rule decoration,
   legacy hardcoded features, freezing/snow, fluid ticks, and lighting/heightmap work.

The mathematically central terrain noises and splines closely track Java 1.18.1, but
Bedrock is not bit-identical to Java:

- the terrain/noise path performs the important calculations in `float` rather than
  Java `double`;
- it omits Java's large-coordinate `wrap()` behavior;
- blended-noise octave offsets use Bedrock's virtual Xoroshiro `nextFloat` behavior;
- Bedrock uses MT19937 and Bedrock-specific seed derivations for carvers, decoration,
  surfaces, legacy features, and many structures;
- surfaces come from Bedrock biome JSON and surface builders, not Java surface rules;
- structure, carver, feature, floor, Nether, and End behavior has substantial
  Bedrock-specific logic.

## Exact Linux class and vtable recovery

The bounded pass recovered 65 primary slots for each overworld implementation plus a
three-slot `IPreliminarySurfaceProvider` secondary table (`offset-to-top = -112`).

| Class | Primary vtable | Primary slots | Secondary vtable | Secondary slots |
|---|---:|---:|---:|---:|
| `WorldGenerator` | `0x0f3ed038` | 57 | `0x0f3ed210` | 3 |
| `OverworldGenerator` | `0x0ef9d290` | 65 | `0x0ef9d4a8` | 3 |
| `OverworldGenerator2d` | `0x0ef9d4d0` | 65 | `0x0ef9d6e8` | 3 |
| `OverworldGeneratorMultinoise` | `0x0ef9d710` | 65 | `0x0ef9d928` | 3 |

The first two primary slots are the Itanium destructor pair. The complete tables,
including inherited entries, are in `ghidra/vtable-functions.tsv`.

### Named multinoise slots

The following mapping is supported jointly by table comparison, public declarations,
function signatures/returns, field offsets, and direct calls. For example,
`OverworldGenerator::prepareHeights` at `0x0527a850` calls slots 61, 60, and 64 at
vtable byte offsets `0x1e8`, `0x1e0`, and `0x200`, exactly matching
`createNoiseCache`, `tryMakeAquifer`, and `_prepareHeights`.

| Slot | Linux address | Recovered role | Key evidence |
|---:|---:|---|---|
| 10 | `0x0527c470` | `OverworldGenerator::loadChunk` | large chunk-generation entry; changed from `WorldGenerator` |
| 11 | `0x0527cd10` | `structurePostProcessChunk` | neighborhood/structure post-process path |
| 15 | `0x0527ab30` | `decorationPostProcessChunk` | chunk MT initialization and decoration work |
| 39 | `0x05293840` | `chunkPosNeedsBlending` | queries the chunk-blender factory and returns presence |
| 40 | `0x05286a80` | `_clearBlendingCache` | destroys/clears object at the blender field |
| 47 | `0x0527a850` | `prepareHeights` | orchestrates slots 61, 60, and 64 |
| 48 | `0x0527aae0` | `getBiomeArea` | forwards to biome-source virtual operation |
| 49 | `0x0528a520` | `getBiomeSource` | returns field at `this + 0xc88` |
| 50 | `0x0527a840` | `getBlockVolumeDimensions` | returns `{16,16,320}` |
| 51 | `0x05288770` | `findSpawnPosition` | substantial spawn search |
| 52 | `0x052884e0` | `getPreliminarySurfaceLevel` | evaluates a quart coordinate and returns optional height |
| 54 | `0x05288460` | `propagateCombinedChunkSource` | installs propagated blender/chunk-source state |
| 55 | `0x0527a720` | `decorateWorldGenLoadChunk` | iterates large-feature decoration descriptors |
| 56 | `0x05281650` | `decorateWorldGenPostProcess` | iterates post-process biome feature descriptors |
| 57 | `0x05287590` | `generateDensityCellsForChunk` | allocates the `5×5×41` result and dispatches density generation |
| 58 | `0x05287580` | `getLevelGenHeight` | returns `0x140` (320) |
| 59 | `0x05286b50` | `getXoroshiroPositionalRandomFactory` | Stafford mixing constants and Xoroshiro state setup |
| 60 | `0x05286a90` | `tryMakeAquifer` | allocates `0x68` bytes and constructs the aquifer |
| 61 | `0x05286c40` | `createNoiseCache` | forwards to static helper `0x05286c70` |
| 62 | `0x052884c0` | `getSurfaceNoise` | returns `this + 0x8e0` |
| 63 | `0x052884d0` | `getMaterialAdjNoise` | returns field at `this + 0xc98` |
| 64 | `0x05288b10` | `_prepareHeights` | core block-volume interpolation/aquifer/vein path |

`OverworldGenerator2d` overrides slots 49, 51, 56–59, and 62–64 with the
legacy 2D implementation. `OverworldGeneratorMultinoise` is the 3D climate/density
implementation described in the rest of this report.

### Recovered direct-call core

The second bounded pass followed 55 direct call edges and decompiled 29 additional
nearby functions. It establishes this exact Linux call chain:

| Linux address | Role | Evidence |
|---:|---|---|
| `0x05286c70` | static noise-cache builder | called by slot 61 and slot 57; fills quart cache entries |
| `0x05287930` | `_generateDensityCellsForChunk` | called by slot 57 and slot 64; explicit 5×5×41 loops |
| `0x05259f00` | `Cavifier::carve` | samples the cave-noise bundle and combines cave terms |
| `0x052588d0` | `Aquifer::Aquifer` | constructs the 0x68-byte object allocated by slot 60 |
| `0x05258c60` | `Aquifer::computeSubstance` | 3×2×3 center search, positional Xoroshiro, barrier/fluid result |
| `0x05259950` | `Aquifer::computeFluid` | samples the 13 fixed surface offsets and fluid-level noises |
| `0x052884e0` | preliminary-surface virtual entry | calls cache/blender helpers and scans up to 40 vertical cells |

In `0x05287930`, the exact ELF clears three `0x1004`-byte float grids, fills
multi-octave `5 × 41 × 5` buffers, and iterates five X corners, five Z corners, and
41 Y corners. Each corner invokes `0x05259f00` for cave shaping, consults chunk
blending, and fills the noodle/ore auxiliary grids. In `_prepareHeights`, direct call
`0x05258c60` performs the aquifer decision for interpolated block positions.

## Generator object layout relevant to the algorithm

The public declarations and Linux pseudocode agree on this high-level composition:

- `OverworldGenerator::ThreadData`
  - `float[1024]` scratch buffer;
  - two `float[256]` buffers;
  - `Block const*[81920]`, exactly `16 × 16 × 320`;
  - a per-thread MT19937 `Random`.
- `OverworldGeneratorMultinoise::Noises`
  - `LegacyBlendedNoise mTerrainNoise`;
  - sixteen cave normal noises in `CavifierNoises`;
  - four aquifer noises and a positional factory;
  - four noodle-cave noises;
  - four ore-vein noises and a positional factory;
  - blending and surface `PerlinSimplexNoise` instances;
  - seven common climate/terrain normal noises plus `TerrainShaper`;
  - a `DepthBasedBlockSupplier`.
- Generator-owned pointers
  - 3D biome source;
  - cavifier;
  - material-adjustment noise;
  - fixed chunk blender and chunk-blender factory.

The density lattice contains `5 × 5 × 41 = 1025` float corners. Horizontal cells are
4 blocks wide/deep and vertical cells are 8 blocks high, yielding the generated
`16 × 16 × 320` range, normally Y `-64..255`.

## Random number generators and seed domains

### Xoroshiro128++

The exact Linux `getXoroshiroPositionalRandomFactory` implementation at
`0x05286b50` exposes the canonical constants:

- golden ratio increment: `0x9e3779b97f4a7c15`;
- silver seed constant: `0x6a09e667f3bcc909`;
- Stafford Mix13 multipliers:
  `0xbf58476d1ce4e5b9` and `0x94d049bb133111eb`;
- Xoroshiro state transitions using rotations equivalent to the Java worldgen RNG.

This family drives world-seed expansion, positional forks, named terrain/climate
noises, aquifers, and ore veins. Named forks use MD5-derived two-word hashes and
`"octave_" + index` for per-octave streams, matching the Java 1.18 design.

### Bedrock MT19937

The decoration path at `0x0527ab30` visibly initializes standard MT19937 with
`0x6c078965`, filling 624 state words. Its worldgen uses include the Bedrock floor,
surfaces, carvers/canyons, decoration and feature rules, legacy structures, and
legacy Nether/End noise paths.

The per-chunk generator-thread seed visible in the exact ELF is:

```text
seed32 = chunkX * 0x14609048 + chunkZ * 0x07ebe2d5   (mod 2^32)
```

This particular stream is independent of the world seed and begins the floor/surface
portion of `loadChunk`. Other stages reseed MT from the low 32 bits of the level seed
and chunk-position mixes.

## Hardcoded named noises

Independent static analysis of the matching BDS family identifies the following
construction order, consistent with strings retained in this ELF:

1. `minecraft:blending`
2. `minecraft:terrain`
3. `minecraft:surface`
4. `minecraft:aquifer_barrier`
5. `minecraft:aquifer_fluid_level_floodedness`
6. `minecraft:aquifer_fluid_level_spread`
7. `minecraft:aquifer_lava`
8. positional factory `minecraft:aquifer`
9. cave noises:
   - `cave_cheese`, `cave_layer`, `cave_entrance`;
   - `spaghetti_3d_1`, `spaghetti_3d_2`, rarity, and thickness;
   - `spaghetti_2d`, elevation, modulator, and thickness;
   - spaghetti roughness and roughness modulator;
   - pillar, pillar rareness, and pillar thickness;
10. ore noises `ore_veininess`, `ore_vein_a`, `ore_vein_b`, `ore_gap`;
11. noodle noises `noodle`, `noodle_thickness`, `noodle_ridge_a`, `noodle_ridge_b`;
12. common climate/terrain noises;
13. positional depth-layer supplier `minecraft:depth_based_layer`.

Common 3D climate parameters match Java 1.18.1:

| Noise | First octave | Amplitudes |
|---|---:|---|
| temperature | -10 | `1.5, 0, 1, 0, 0, 0` |
| vegetation | -8 | `1, 1, 0, 0, 0, 0` |
| continentalness | -9 | `1, 1, 2, 2, 2, 1, 1, 1, 1` |
| erosion | -9 | `1, 1, 0, 1, 1` |
| ridge | -7 | `1, 2, 1, 0, 0, 0` |
| offset | -3 | `1, 1, 1, 0` |
| jagged | -16 | sixteen amplitudes of `1` |

The NormalNoise value factor is the Java formula based on the octave span, and the
second sampler's input factor is approximately `1.0181268f`.

## Density and block selection

### Cell generation

The base blended-noise scales are the Java-era values represented in float:

- coordinate scale `684.412`;
- main horizontal scale `8.55515` (`684.412 / 80`);
- main vertical scale `4.277575` (`684.412 / 160`).

The lower and upper 16-octave stacks are blended by an 8-octave main stack. Bedrock's
density convention is approximately Java density multiplied by 128: the terrain
factor carries the scale, while the later block interpolation scales with `0.005f`
(`0.64 / 128`). Top and bottom slides correspond to the Java 1.18.1 settings.

The terrain shaper is the hardcoded Java 1.18.1 overworld spline over
continentalness, erosion, ridges/weirdness, and jaggedness. Representative control
points include erosion `-0.6, -0.5, -0.35, -0.25, 0.03` and the familiar ridge and
weirdness branches.

### Interpolation

For each 4×4×8 cell, `_prepareHeights` loads eight corner values and interpolates in
the order Z, X, then Y. Fractions are multiples of `0.25f` horizontally and `0.125f`
vertically. The interpolated base density is clamped and transformed with the
NoiseSampler-era cubic squeeze:

```text
v = clamp(rawDensity * 0.005, -1, 1)
squeezed = v * 0.5 - v^3 / 24
```

Structure beard/bury adjustments are applied before final material selection when
requested.

### Caves

The cavifier combines cheese caves, layers, entrances, spaghetti 2D/3D, roughness,
and pillars with the terrain density. Noodle caves are applied after cell
interpolation. Noodle thickness maps its sampled value into approximately
`[0.05, 0.10]`; the two ridge fields are scaled and converted to absolute-distance
terms, and their maximum can lower positive terrain density.

Notable Bedrock differences documented by the independent parity work include:

- caves/noodles use float operation order;
- noodles use a Bedrock block-level lower-Y test;
- the 3D-spaghetti thickness span is a particular float value near `0.023`;
- pillar cubing follows the target C runtime's `powf` behavior.

### Aquifers

When the post-cave density is non-positive, the aquifer evaluates nearby randomized
centers, surface samples, floodedness/spread, lava, and barrier pressure. Barrier
pressure can turn a nominal cavity back into solid. Otherwise the selected fluid
status yields air, water below its local level, or lava in deep regions; selected
fluid boundaries schedule tick updates.

The global fallback fluid is water around sea level 63, with deep lava below roughly
Y `-54`. The exact per-cell path is represented by the slot-60 constructor and
slot-64 `_prepareHeights` evidence.

### Solid material, deepslate, and ore veins

For positive final density:

- stone is the default foundation;
- below Y 0, deepslate is selected;
- Y 0..8 is a positional-random stone/deepslate transition;
- the supplier is forked from `minecraft:depth_based_layer`.

Ore veins follow the Java 1.18.1 `OreVeinifier` design with Bedrock float sampling:

- positive veininess: copper vein, Y `0..50`, copper ore/raw copper/granite family;
- negative veininess: iron vein, Y `-60..-8`, deepslate iron/raw iron/tuff family;
- `ore_vein_a` and `ore_vein_b` form the ridge/gap geometry;
- `ore_gap` and a positional `minecraft:ore` stream choose gaps, ore, and rare raw
  blocks.

## Biomes

The current path uses `BiomeSource3d`, a climate parameter table, and an R-tree. The
climate dimensions are temperature, humidity/vegetation, continentalness, erosion,
weirdness/ridges, and depth/offset terms. Values are quantized through a float-to-
double-to-integer step before R-tree distance evaluation.

The biome table is the Java 1.18 overworld builder with Bedrock identifiers and later
Bedrock additions, including underground cave biomes and version-gated plateau
variants. Block biomes are chosen from an 8-block climate lattice using jittered
nearest-corner selection. Bedrock's R-tree build order and MSVC sorting behavior can
change exact-boundary tie resolution compared with Java's tree.

Vanilla JSON components can provide `multinoise_generation_rules`, but the normal
vanilla multinoise path uses the hardcoded table.

## Surface and floor

Bedrock does **not** use Java surface rules here. After terrain and 3D biomes:

1. `minecraft:surface` Perlin-simplex depth noise is sampled per column;
2. biome JSON resolves a Bedrock surface builder;
3. surface-material adjustment noise can replace configured materials;
4. biome-specific builders apply top, middle, sea-floor, mesa, frozen-ocean, swamp,
   capped, or noise-gradient behavior;
5. the foundation run is transformed column by column.

The Bedrock floor uses the chunk MT stream and places a variable bottom thickness,
normally 2–5 layers from Y -64 upward. The floor's chunk-local stream is not seeded by
the world seed at this stage.

The surface system is partly data-driven by the shipped biome definitions, including
`surface_builder`, `surface_material_adjustments`, `mountain_parameters`,
`replace_biomes`, climate, tags, and generation-rule components.

## Chunk pipeline

The recovered Linux entry points divide work into three major chunk stages.

### 1. `loadChunk` — `0x0527c470`

High-level order:

1. obtain the biome source and create the quart-resolution climate/noise cache;
2. preprocess legacy and data-driven structure blueprints;
3. initialize per-thread chunk random state and clear the 81920-block buffer;
4. construct a chunk aquifer;
5. fill 3D biomes;
6. generate the `5×5×41` density grid and run `_prepareHeights`;
7. generate the bottom Bedrock floor;
8. sample surface depth and material-adjustment noise;
9. build biome surfaces and optional underground-biome surface runs;
10. run pregeneration-pass carvers/features and hardcoded canyons;
11. commit the volume, generator state, fluid updates, and height information to the
    `LevelChunk`.

### 2. Structure post-process — `0x0527cd10`

A level/chunk-seeded MT stream post-processes legacy structure features and newer
jigsaw/data-driven structure instances against a neighborhood view. Structure
terrain adaptation uses beard, beard-and-shaver, and bury-like density adjustments.

### 3. Decoration post-process — `0x0527ab30`

The function visibly initializes MT19937 and coordinates:

- legacy conditional water/lava lakes;
- monster-room attempts;
- twelve feature-rule passes;
- biome feature decoration;
- freezing and snow;
- boundary water updates and scheduled fluid ticks;
- final chunk-state and post-processing work.

Feature passes are:

1. `pregeneration_pass`
2. `first_pass`
3. `before_underground_pass`
4. `underground_pass`
5. `after_underground_pass`
6. `before_surface_pass`
7. `surface_pass`
8. `after_surface_pass`
9. `before_sky_pass`
10. `sky_pass`
11. `after_sky_pass`
12. `final_pass`

Feature rules are Bedrock data-driven definitions with Molang conditions and a fresh
per-rule MT stream derived by a Boost-style hash combine from the chunk stream and
rule-name hash. The implementations include scatter/search wrappers, ores/disks,
vegetation and trees, geodes, caves, speleothems, underwater caves, aggregates,
sequences, weighted choices, structure templates, and terrain-adjustment wrappers.

## Structures

Structure generation is not simply Java placement:

- legacy Bedrock structure features use low-32-bit MT region/chunk formulas;
- trail/trial-era and newer jigsaw structures use separate data-driven paths, some
  with Java-style LCG placement;
- structure starts are prepared before terrain, can adjust terrain density, are
  placed during structure post-processing, and affect later decoration;
- template pools and processors are shipped in `.brarchive` resources;
- Bedrock-specific spacing, salts, viability filters, piece generation, and
  post-processing remain relevant even when terrain shape resembles Java.

## Nether, End, flat, and legacy overworld

RTTI/vtables also prove separate generator families. Independent mapping indicates:

- `OverworldGenerator2d` is the legacy biome/noise path selected for compatible old
  worlds and uses classic 2D biome height inputs plus old blended terrain;
- Nether terrain follows the older Java-1.12-style hell-density model combined with
  Bedrock MT and Bedrock biome/surface/feature behavior;
- End terrain follows the older End-island density family, with Bedrock decoration
  and structure seeding;
- `FlatWorldGenerator` is present and recovered separately;
- `DensityFunctionWorldGenerator`-style classes exist elsewhere in the codebase, but
  the vanilla current overworld vtable and data flow here are the v1 multinoise
  generator, not that alternate data-driven density system.

## What is established vs. still uncertain

### High confidence

- exact target identity and stripping status;
- full 65-slot overworld vtables and principal Linux method addresses;
- `16×16×320` block buffer and `5×5×41` density lattice;
- multinoise class composition;
- Xoroshiro constants and positional-factory behavior;
- MT19937 initialization and chunk-coordinate seed visible in decoration;
- Java 1.18.1-era terrain/noise architecture with float math;
- slot-64 interpolation/material pipeline, aquifer construction, surface/noise
  getters, and height 320;
- Bedrock-specific surface, feature, structure, and post-process layers.

### Medium confidence / bounded-analysis limitations

- many direct callees outside the selected nearby text range remain unnamed;
- indirect virtual calls need type propagation to resolve automatically;
- some Ghidra functions have imperfect boundaries because whole-program analysis was
  deliberately skipped;
- exact constants inside every cavifier and aquifer branch have not all been
  independently transcribed from this Linux build;
- the selection rules for all legacy/experimental generator variants are not fully
  mapped;
- lighting, every structure piece, and every feature implementation would require
  broader subsystem-specific passes.

These limitations do not change the principal algorithm verdict. A complete source
reconstruction of a 256 MB stripped server is not a finite single-report claim; the
reproducible inventory and targeted Ghidra harness are the extension mechanism for
additional subsystems.

## Reimplementation boundary

The repository's `src/world/` code is intentionally clean-room and currently supports
flat/void generation. The reports under `research/proprietary/` may guide behavioral
tests and black-box requirements, but mechanically generated pseudocode must remain
outside the MIT source tree. A production-compatible generator should be implemented
from a separately written specification with independent tests, not by copying the
adjacent decompiler output.
