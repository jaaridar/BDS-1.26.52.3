# World generation in Bedrock Dedicated Server 1.26.52.3 — recovered design

Status: **living document**. Every claim below is tied to a piece of evidence in
this directory (recovered pseudocode, a triage report, or a decoded game asset).
Nothing here is copied from Mojang source; it is reconstructed from the shipped
binary and the shipped data files.

```
triage/                     static structure of the ELF (RTTI, vtables, xrefs)
decompiled/shard-N/         Ghidra pseudocode (evidence, generated)
data/                       decoded world-generation data assets
tools -> ../../../tools     the harness that produced all of the above
```

## 1. What the binary actually contains

`bedrock_server` is a stripped, position-independent x86-64 ELF (LLD 20.1.8,
clang 20.1.8) with the debug link pointing at `bedrock_server.debug`, which is
not shipped. What survives are the parts needed at run time:

| structure | size | what it gives us |
|---|---|---|
| `.eh_frame` | 29.6 MB | FDE for essentially every function → complete function map (551,185 starts) |
| `.text` | 0xadda750 (182 MB) | ~46.4 M instructions of world logic |
| `.data.rel.ro` | 6.6 MB | Itanium-ABI RTTI + vtables for 5,275 classes |
| `.rela.dyn` | 17.1 MB | 724,003 pointer relocations → typeinfo pointers, vtable slot targets, static tables |
| `.rodata` | 13.5 MB | JSON component names, assertion strings, source paths |

The binary is *not* symbol-stripped of information that matters: Bedrock keeps
its C++ RTTI and its vtable dispatch, so the whole biome/surface/feature class
hierarchy can be enumerated exactly by walking `.data.rel.ro` and the
relocations. That is what `triage/classes.tsv`, `triage/worldgen-vtables.tsv`
and `triage/interesting-classes.tsv` contain.

Address convention used throughout: **ELF virtual addresses** (what `readelf`
prints). Ghidra maps this PIE at `image base = 0x100000`, so program addresses
in the raw Ghidra output are `ELF + 0x100000`; each recovered file states both.

## 2. The pipeline, as recovered

```
seed ──► XoroshiroRandom  ──┬─► biome source (BiomeSource3d)  ──► 4×4×4 biome cells
                            ├─► terrain/noise generation     (per-chunk volumes)
                            ├─► surface builders            (per biome, per column)
                            └─► feature placement           (per biome, per pass)
```

The generator objects are polymorphic with a wide, stable vtable:

| class | vtable slots | role |
|---|---|---|
| `OverworldGenerator` | 68 | 2-D (base) overworld generator |
| `OverworldGeneratorMultinoise` | 68 | new multi-noise overworld generator |
| `OverworldGenerator2d` | 68 | legacy 2-D generator |
| `WorldGenerator` | 60 | shared chunk/structure/feature driver |
| `FlatWorldGenerator` | 60 | superflat |
| `BiomeSource3d` | 12 | 3-D biome source |
| `FixedBiomeSource` | 12 | single-biome source |
| `br::worldgen::WorldGenRandom` | 18 | random wrapper passed to generators |
| `XoroshiroRandom` | 18 | the actual PRNG |
| `VanillaSurfaceBuilders::*` | 7 each | surface rules per biome family |

`triage/worldgen-vtables.tsv` lists all 1,095 world-generation vtable slots with
typeinfo, table base, slot index and target address; `data/function-index.tsv`
is the decompiled subset.

### 2.1 Random numbers — fully recovered

`XoroshiroRandom` (vtable at typeinfo `0xf2xxxx`, object fields `s0` @ +0x8,
`s1` @ +0x10) is **xoroshiro128++**, and every operation is recovered:

| slot | vaddr | operation |
|---|---|---|
| 3 | `0x48ca750` | `nextInt(bound)` (Lemire multiply-and-reject over 32 bits) |
| 6 | `0x48ca860` | `nextFloat()` |
| 7 | `0x48ca8b0` | `nextDouble()` |
| 8 | `0x48ca900` | `nextGaussian()` (Marsaglia polar, cached) |
| 9 | `0x48caa60` | `skip(n)` |
| 10 | `0x485b6e0` | copy/`fork` of the state |

The step function recovered from slot 3 is byte-for-byte the reference
algorithm:

```
result = rotl(s0 + s1, 17) + s0
s1    ^= s0
s0     = rotl(s0, 49) ^ s1 ^ (s1 << 21)
s1     = rotl(s1, 28)
```

`nextInt(bound)` is the multiply-and-reject variant: it multiplies the **low 32
bits** of the draw by `bound`, rejects when `(product & 0xffffffff) < (2^32 -
bound) % bound`, and returns the high half. `nextDouble` uses the top 53 bits
(`>> 11` × 2⁻⁵³), `nextFloat` the top 24 (`>> 40` × 2⁻²⁴).

`tools/worldgen-data/xoroshiro.py --verify` contains a literal transcription of
the recovered pseudocode plus an independent reference implementation, and
checks that they agree over 10,000 draws and that the bounded/float/Gaussian
contracts hold. This is the one layer where the recovery is complete enough to
be re-implemented bit-exactly.

Legacy code paths (surface builders, feature placement) additionally use the
Java-style Mersenne Twister: the constant `0x6c078965` (1812433253, MT19937's
initialisation multiplier) appears in
`VanillaSurfaceBuilders::SwampSurfaceBuilder` and in several
`WorldGenerator` slots, i.e. `Random(seed)` seeding followed by `nextInt`.

### 2.2 Biome sampling — `BiomeSource3d`

`BiomeSource3d::vslot4` (`0x493aaf0`) prepares the biome volume for a chunk:

* reads the vertical range from the dimension/chunk description
  (`+0xa8`/`+0xaa` of the world-generation context, both `int16`),
* quantises to **4-block** cells: `cells = ((top - bottom) >> 3) + 2` with
  16 elements per cell row (`x` and `z` both 4-wide → 4×4×4 sampling),
* allocates the per-cell volume array through the global allocator
  (`_DAT_0f5463b0 + 0x10`), builds the chunk volumes with
  `func_0x04a3a2f0`/`func_0x0c84f340`, and hands them to
  `func_0x0caf8fb0` on the generator.

`BiomeSource3d::vslot7` (`0x493b030`) is the *fill* operation. It walks the
requested box in steps of 4 on all axes, clamps the vertical range to
`[class+0x1c, class+0xe2]`, and for every cell performs an **indirect call
through vtable slot +0x58** with a `{x, y, z, flag}` descriptor. A non-zero
return aborts the fill (`return 0`). The `param_7`/`param_8` variants select the
locked/cached path used by `ChunkLocalNoiseCache`.

The remaining `BiomeSource3d` slots are small adaptors: `+0x58`
(`0x493b290`... family: `0x493ae30`, `0x493a160`, `0x493b4d0`, `0x493b510`) and
the destructor chain at `0x495e290`/`0x495e300`.

### 2.3 Climate → biome: the multi-noise rules are data, not code

The new generator does **not** hard-code a climate table. The biome registry
carries a `minecraft:multinoise_generation_rules` component (see
`data/biome-table.tsv`, `data/biomes/*.biome.json`) with
`target_temperature`, `target_humidity`, `target_altitude`, `target_weirdness`
and a `weight`; 14 of the 71 shipped biomes define it:

| biome | temp | humidity | altitude | weirdness | weight |
|---|---|---|---|---|---|
| desert | 0.4 | -0.4 | 0.0 | 0.0 | 0.1 |
| desert_hills | 0.4 | -0.4 | 0.2 | 0.0 | 0.1 |
| forest | 0.0 | 0.5 | 0.0 | 0.0 | 0.375 |
| forest_hills | 0.0 | 0.5 | 0.2 | 0.0 | 0.375 |
| frozen_ocean | -1.5 | 1.0 | -0.2 | 1.0 | 0.0 |
| hell | 0.0 | 0.0 | 0.0 | 0.0 | 0.0 |
| ice_plains | -1.0 | 1.0 | 0.2 | 1.0 | 0.0 |
| jungle | 0.4 | 0.0 | 0.0 | 0.0 | 0.0 |
| jungle_hills | 0.4 | 0.0 | 0.2 | 0.0 | 0.0 |
| ocean | 0.0 | 0.1 | -0.1 | 0.0 | 0.3 |
| plains | 0.0 | 0.0 | 0.0 | 0.0 | 0.4 |
| savanna | 0.1 | -0.1 | 0.0 | 0.1 | 0.2 |
| taiga | 0.0 | -0.4 | 0.0 | 0.0 | 0.1 |
| taiga_hills | 0.0 | -0.5 | 0.2 | 0.0 | 0.0 |

Selection is therefore a nearest-target search over the 5-D climate vector
(temperature, humidity, altitude/continentalness, weirdness, and the erosion
axis carried by the height component), with the weights breaking ties — which
is exactly what `MultinoiseGenerationRulesBiomeComponentGlue`
(`triage/worldgen-vtables.tsv`, typeinfo `0xeea5688`, slots at `0x5258ea0`,
`0x5258970`, `0x5250780`, `0x5250790`) and `WorldGenMultiNoiseClimateAttributes`
(typeinfo `0xeea5b08`, slots `0x497b3e0`, `0x525d920`) read and write. Those
glue classes are cereal (JSON ⇄ C++) marshallers: they turn the JSON component
into the runtime struct the generator consumes.

Everything else about a biome is also component data:

| component | biomes | meaning |
|---|---|---|
| `minecraft:climate` | 71 | temperature, downfall, snow accumulation |
| `minecraft:surface_builder` | 70 | builder type + material parameters |
| `minecraft:overworld_height` | 69 | `noise_type` and/or `noise_params` |
| `minecraft:overworld_generation_rules` | 31 | river/shore/hills/mutate/climate links |
| `minecraft:multinoise_generation_rules` | 14 | climate target vector (above) |
| `minecraft:surface_material_adjustments` | 11 | per-material overrides |
| `minecraft:map_tints`, `creature_spawn_probability`, `partially_frozen`, `humidity` | 8/5/2/2 | presentation & spawning |

Height noise types in use: `mountains` 11, `default` 9, `ocean` 6,
`default_mutated` 5, `deep_ocean` 5, `lowlands` 5, `extreme` 4, `beach` 3,
`taiga` 3, `highlands` 3, `river` 2, and one each of `less_extreme`, `mushroom`,
`stone_beach`, `swamp`.

### 2.4 Surface builders

`minecraft:surface_builder` selects one of six C++ builders; the JSON's
parameter set is the builder's constructor input:

| builder | biomes | notable parameters |
|---|---|---|
| `minecraft:overworld` | 59 | `top_material`, `mid_material`, `foundation_material`, `sea_material`, `sea_floor_material`, `sea_floor_depth` |
| `minecraft:mesa` | 6 | + `clay_material`, `hard_clay_material`, `bryce_pillars`, `has_forest` |
| `minecraft:frozen_ocean` | 2 | `minecraft:overworld` set |
| `minecraft:swamp` | 2 | + `max_puddle_depth_below_sea_level` |
| `minecraft:the_end` | 1 | `minecraft:overworld` set |

Each builder is a 7-slot polymorphic class
(`VanillaSurfaceBuilders::OverworldDefaultSurfaceBuilder`,
`LegacyMesaSurfaceBuilder`, `MesaSurfaceBuilder`, `CappedSurfaceBuilder`,
`OceanFrozenSurfaceBuilder`, `SwampSurfaceBuilder`, `TheEndSurfaceBuilder`), and
`NoiseGradientSurfaceBuilder` (7 slots) provides the noise-driven variant. All
of them are recovered in `decompiled/`; the per-builder slot layout is in
`data/function-index.tsv`.

### 2.5 Features and feature rules

`feature_rules.brarchive` ships 120 rules over 12 feature types:

| pass | rules |
|---|---|
| `surface_pass` | 78 |
| `after_surface_pass` | 14 |
| `underground_pass` | 13 |
| `first_pass` | 11 |
| `pregeneration_pass` | 3 |
| `before_surface_pass` | 1 |

| feature type | count |
|---|---|
| `scatter_feature` | 44 |
| `aggregate_feature` | 29 |
| `tree_feature` | 24 |
| `single_block_feature` | 17 |
| `ore_feature` | 14 |
| `weighted_random_feature` | 5 |
| `search_feature`, `fossil_feature`, `sequence_feature` | 1 each |
| `cave_carver_feature`, `nether_cave_carver_feature`, `underwater_cave_carver_feature` | 1 each |

Every placement coordinate/distribution in the shipped rules is `uniform`
(239 distributions, no `gaussian`/`weighted`/`fixed` usage), with iteration
counts often derived from Molang expressions, e.g.

```
math.clamp(math.trunc(math.ceil((query.noise(originx/80, originz/80) + 0.3) * 160)), 15, 160)
```

so feature density is a function of a noise field sampled at 1/80-block scale —
the code path behind `FeatureRegistryPacket` and `WorldGenerator`'s feature
slots.

## 3. Reproducing this

```bash
# static structure + ranking (no Ghidra needed)
python3 tools/binary-analysis/triage.py bedrock_server <outdir>
# headless decompilation of the ranked targets
gh workflow run bds-decompile.yml      # or run DecompileTargets.java locally
# re-index / summarise the recovered corpus
python3 tools/worldgen-data/analyse.py research/proprietary/bds-1.26.52.3/worldgen \
    --write-index research/proprietary/bds-1.26.52.3/worldgen/data/function-index.tsv
```

The harness is validated end to end against a synthetic fixture
(`tools/binary-analysis/fixtures/worldgen_fixture.cpp`) so that address
mapping, RTTI/vtable recovery and string-xref attribution are all checked on
every CI run.

## 4. Confidence

| area | confidence | basis |
|---|---|---|
| RNG semantics | **high** | exact pseudocode, re-implemented and self-tested |
| class/vtable map | high | RTTI + relocations, mechanically enumerated |
| biome data model | **high** | shipped JSON components, all 71 biomes |
| feature/pass model | high | shipped rules, all 120 |
| surface builder behaviour | medium | full slot set recovered, semantics partial |
| noise/density synthesis | medium | generator slots recovered, primitives still unnamed |
| structure/jigsaw generation | low–medium | processors/jigsaw classes mapped, flow partial |

Open items are tracked in section 5 as they are resolved.
