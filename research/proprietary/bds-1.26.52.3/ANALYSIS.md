# BDS 1.26.52.3 — world generation: static decompilation report

> **Provenance.** Everything in this file is derived by static analysis of the
> proprietary Mojang/Microsoft `bedrock_server` binary that ships in this
> repository. It is research evidence, **not** MIT-licensed OpenBDS source, and
> it must not be copied into `src/` (see `research/proprietary/README.md` and
> `docs/licensing.md`). The binary was imported and decompiled; it was never
> executed by the analysis pipeline.

This report is the human-readable companion to the machine-generated evidence in
[`ghidra/`](ghidra/). Numbers below refer to that directory.

---

## 1. Target

| property | value |
|---|---|
| file | `bedrock_server` (Git LFS object) |
| size | 256,133,808 bytes |
| SHA-256 | `0a490c711d4a2ce075debcd979e8862b7eaba008373f9970f0edbb67f98f9207` |
| format | ELF64, x86-64, `ET_DYN` (PIE), little endian |
| build id | `c0ff36e2eacfc191f01e189237df71f139b5d04a` |
| symbols | **stripped** — no `.symtab`, only 379 `.dynsym` imports |
| interpreter | `/lib64/ld-linux-x86-64.so.2` |

Section budget (from `inventory/section-headers.txt`; addresses are ELF link
addresses — Ghidra adds the `0x100000` image base, see §2):

| section | link address | size |
|---|---|---|
| `.text` | `0x4008240` | 182,298,448 (`0xadda750`) |
| `.rodata` | `0x1098340` | 13,534,716 (`0xce85fc`) |
| `.gcc_except_table` | `0x1d8093c` | 8,436,872 (`0x80bc88`) |
| `.eh_frame` | `0x29c0e60` | 23,356,380 (`0x16463dc`) |
| `.data.rel.ro` | `0xede8db0` | 6,633,576 (`0x653868`) |
| `.data` | `0xf43dab0` | 35,168 (`0x8960`) |
| `.rela.dyn` | `0x3de0` | 17,376,072 → **724,003** `R_X86_64_RELATIVE` entries |
| `.bss` | `0xf446f80` | 2,568,888 (`0x2732b8`) |

`.rela.dyn` alone is 17 MB of relocation records — that is what makes vtable
recovery possible at all, and it is also why `readLong` has to consult the
relocation overlay rather than the raw image (the on-disk slots hold link-time
addresses; the overlay holds the *relocated* pointers).

Two non-standard executable sections exist: `__lcxx_override` and
`malloc_hook` — the binary hooks its own allocator, which is why nearly every
`new`/`delete` in the decompiled output goes through `_DAT_0f5463b0` (the
`operator new` slot table).

---

## 2. Method

The binary cannot be fetched from the development sandbox: it is a 256 MB Git
LFS object and GitHub serves LFS content from `github-cloud.githubusercontent.com`,
which the sandbox cannot reach. The decompiler therefore runs on a GitHub
Actions runner, where `actions/checkout` with `lfs: true` materialises the object.

```
.github/workflows/official-binary-decompile.yml   # CI driver (JDK 21 + Ghidra 12.1.4)
tools/binary-analysis/run-headless.sh             # analyzeHeadless wrapper
tools/binary-analysis/ghidra/RecoverWorldgen.java # the harness (single Ghidra script)
tools/binary-analysis/targets.txt                 # extra classes / call-graph depth
tools/binary-analysis/summarize_evidence.py       # post-processing
```

Pipeline, all static:

1. **Import without auto-analysis.** `analyzeHeadless -import … -noanalysis`
   loads the ELF in seconds; whole-program analysis of a 182 MB `.text` is not
   practical. Ghidra applies the `.rela.dyn` relocations and uses an image base
   of `0x100000`, so every address in the evidence is
   *link address + 0x100000* (`FUN_0527ab30` is at link address `0x517ab30`).
2. **RTTI recovery without a symbol table.** Every Itanium `type_info` object is
   located structurally: `[vptr into .data*][pointer to a mangled name in
   .rodata]`, where the pointee is a valid mangled type name. This needs no
   guess list and recovers *every* polymorphic class, not only the ones we
   suspected.
3. **Vtable reconstruction.** A vtable is any relocated pointer equal to a
   recovered `type_info` address, preceded by a plausible offset-to-top word;
   its slots follow at `+8` and are filtered to executable targets.
4. **Naming.** Vtables get `vt_<Class>` labels, `type_info` gets `ti_<Class>`,
   every vtable slot function is renamed `<Class>_v<slot>`, and referenced
   string literals are given `s_…` data labels so the decompiler prints readable
   string names instead of `UNK_…` addresses.
5. **Discovery of anonymous code.** Every vtable address point is only ever
   materialised in code by `lea reg, [rip+disp32]`. Scanning `.text` for that
   encoding (`REX.W 8D /r`, `mod=00 rm=101`) recovers, for each vtable, the
   constructor that installs it, and — for `std::function`/lambda vtables, whose
   mangled names embed their enclosing function (`ZN18OverworldGenerator9loadChunkE…`)
   — the *enclosing function itself*. This is how otherwise anonymous code gets
   a real C++ name (`code-references.tsv`).
6. **Call-graph expansion.** Vtable slots of selected classes are seeds; direct
   calls are followed N levels deep (N from `targets.txt`, 5 for the core
   generators, so the BFS reaches the noise/surface/feature helpers).
7. **Decompilation + attribution.** Ghidra's decompiler emits C per function;
   each function also gets its referenced strings, referenced `.rodata`
   constants (`constants.tsv`: raw bytes, `u32`, `f32`, `f64`) and call edges
   (`callgraph.tsv`).

Numbers from the last pass:

| metric | value |
|---|---|
| `type_info` objects | 51,998 |
| vtables | 50,263 |
| distinct class names | 41,849 |
| classes selected as worldgen | 616 |
| selected vtable slots | 5,120 |
| functions analysed / decompiled | 5,000 / ~4,800 |
| pseudocode volume | ~13 MB of C |

---

## 3. Recovered architecture

### 3.1 Chunk production

The chunk pipeline is a `ChunkSource` (42 virtual slots) implemented by
`MainChunkSource` (the server pipeline), `ChunkViewSource` (the restricted view
handed to features and structures), `NetworkChunkSource`,
`WorldLimitChunkSource`, `EditorChunkSource`, and the generators themselves.
`WorldGenerator` adds 15 more slots; `OverworldGenerator` adds 7 on top of that.

Virtual slot map (Ghidra addresses; `ChunkSource::vslot9` is the big shared
"produce this chunk" entry point, 1137 instructions, identical in every
generator):

| slot | `WorldGenerator` / `OverworldGenerator` | what it is |
|---|---|---|
| 0, 1 | `ca70460` / `527a670`, `527a6d0` | constructor-adjacent / deleting destructor |
| 2–9 | `cb31380` … `cb314e0` | inherited `ChunkSource` API; **slot 9 = build a chunk** |
| 10 | `cb32720` / `527c470` | generator-specific "prepare" step (297 instr for the nether) |
| 11 | `cb32730` / `527cd10` | generator-specific terrain + biome fill (3026 instr for the nether!) |
| 15 | `cb32770` / `527ab30` | post-generation fixups (1,243 instr: ores, features, structures) |
| 16, 17 | `ca73030`, `ca730a0` | shared helpers (41 / 149 instr) |
| 41 | `ca72b00` | `CreateWorldGenRandom`-style factory (see §4.4) |
| 42–46 | `ca70bd0`, `ca70bf0`, `ca70cc0`, `ca70eb0`, `ca72c10` | dimension descriptors |
| 47 | per-generator | dimension-specific main routine (nether `5261d20`, end `5295960`, flat `d3a5280`) |
| 55–56 | per-generator | block-state / material table hooks |

Everything from slot 2 to 9 is shared with `ChunkSource`, which is why the same
addresses appear in `vtable-slots.tsv` under a dozen class names.

### 3.2 Biome sources

```
BiomeSource                 (12 slots)
├── BiomeSource3d           12   ← volumetric (3-D) biome source, the modern one
├── FixedBiomeSource        12
├── VanillaOverworldBiomeSource<Pos2d>   12
├── NodeGraphBiomeSource<Pos2d>          12   ← node-graph / multi-noise selector
├── ReplacementBiomeSource<BlockPos|Pos2d> 12
├── EditorCustomBiomeSource 12
└── ICustomBiomeSource      12
CachedBiomeSource<T>      12 (caching decorator over any of the above)
```

`BiomeSource3d::vslot7` (`4a3b030`, ~2 KB of pseudocode) is the volumetric fill:
it takes `(x0, y0, z0, x1, y1, z1, cache, seed)`-style coordinates, clamps to the
dimension's biome volume (`*(short *)(this + 0xe2)`, `this[0x1c]`), and writes a
`ChunkVolume::VolumeOf<Biome>` — this matches the assert strings in `.rodata`:

```
virtual void BiomeSource3d::fillBiomes(LevelChunk &, const ChunkLocalNoiseCache *) const
virtual ChunkVolume::VolumeOf<Biome> BiomeSource3d::getBiomeVolumeToFill(
    Height, BlockPos, RandomSeed, const ChunkLocalNoiseCache *) const
```

Those strings also give away the source layout, e.g.
`/mnt/vss/_work/1/s/handheld/src-vanilla/vanilla_shared/src/common/world/level/biome/BiomeSource3d.cpp`
and `…/common/world/level/levelgen/v1/ChunkBlenderFactory.cpp`.

### 3.3 The operation-node graph (biome layers)

The single most structurally interesting find is that BDS does **not** implement
biome generation as a hand-written function. It builds a graph of polymorphic
**operation nodes** whose class names are preserved by RTTI, and evaluates it.
48 node classes were recovered:

| node | vtable | role |
|---|---|---|
| `OperationNode<...>` | `581d10` | abstract base (evaluate = vslot 2) |
| `IslandOperationNode` | `f45e318` | the "island" seed layer |
| `RegionHillsOperationNode` | `f45e168` | hills/`Hills` layer |
| `OceanMixerOperationNode` | `f45e128` | land/ocean blending |
| `TransformationMixerOperationNode<...>` | `5803f0` | mixes a transformed volume back in |
| `MixerOperationNode<T, …, T>` | 12 variants, e.g. `ef9e200` | lerp/mix two volumes (`Terrain`, `PreBiome`, `int`, `bool`, `float`) |
| `ZoomOperationNodeCommon<…, Zoom2x>` | `ef9e338` | 2× bilinear-ish zoom |
| `ZoomOperationNodeCommon<…, Zoom2xFuzzy>` | `ef9e190` | 2× zoom with a random tie-break |
| `ZoomOperationNodeCommon<…, Zoom4xVoronoi>` | `ef9df88` | 4× zoom, Voronoi (nearest of 4) |
| `NormalNoiseOperationNode<…>` | `ef9ddb8` | samples a `NormalNoise` into the volume |
| `BiomeClimateSelectorOperationNode<…>` | `ef9de88` | picks a biome from climate parameters |
| `FilterOperationNode<Filter, …>` | 20 variants | pointwise filters (below) |

The filter vocabulary is the *entire* Bedrock biome-layer rule set, which makes
the algorithm directly comparable with the legacy Java `GenLayer` chain:

```
AddIsland            AddIslandWithTemperature   AddBiomeIsland
AddEdgeCoolWarm      AddEdgeHeatIce              AddEdgeSpecial
AddMushroomIsland    AddOceanEdge                AddSnow
BiomeInit            BiomeInit (2nd)             PromoteCenter
RareBiomeSpot        RemoveTooMuchOcean          River
RiverInit            Shore                       Smooth
Smooth<bool>         FilteredTransformation (x3)
```

Each `FilterOperationNode<Filter, …>` is a 6-slot object: slot 2 evaluates the
filter over a `short` volume. Because the filter type is a template parameter,
the compiled `evaluate` for `AddIsland` and the compiled `evaluate` for `Shore`
are separate functions — and their pseudocode *is* the rule ("if exactly 3 of 4
neighbours are land, and …"), so this is where the biome algorithm can be read
line by line.

Values are typed by `OperationNodeValues` (`Terrain`, `PreBiome`, biome ids as
`short`), and the zoom nodes take `OperationNodeZooms` (`Zoom2x`,
`Zoom2xFuzzy`, `Zoom4xVoronoi`) — so the graph is
**coarse volume → zoom chain → climate selection → terrain**, evaluated lazily.

### 3.4 Surface builders

Nine polymorphic surface builders (`VanillaSurfaceBuilders::*`), which map 1:1
onto the `SurfaceBuilder` variants found in the biome JSON schemas:

`OverworldDefaultSurfaceBuilder`, `MesaSurfaceBuilder`, `LegacyMesaSurfaceBuilder`,
`SwampSurfaceBuilder`, `OceanFrozenSurfaceBuilder`, `CappedSurfaceBuilder`
(+ nested `MaterialHelper`), `NoiseGradientSurfaceBuilder`, `TheEndSurfaceBuilder`.

The JSON side is visible as
`SharedTypes::v1_21_100::SurfaceBuilder::{OverworldSurfaceSettings,
FrozenOceanSurfaceSettings, MesaSurfaceSettings, SwampSurfaceSettings,
CappedSurfaceSettings, TheEndSurfaceSettings}` and
`SharedTypes::v1_26_30::SurfaceBuilder::NoiseGradientSurfaceSettings`.

### 3.5 Features, structures, jigsaw

* **115** `*Feature` classes recovered (`CaveFeature`, `GeodeFeature`,
  `AncientCityFeature`, `VillageFeature`, `OceanMonumentFeature`,
  `StrongholdFeature`, `MineshaftFeature`, `RuinedPortalFeature`,
  `ScatteredFeature`-family, tree features, ore/blob features, …).
* Structure machinery: `StructurePiece`, `TemplateStructurePiece`,
  `PoolElementStructurePiece`, `StructureTemplate`, `LegacyStructureTemplate`,
  `StructurePoolElement`, `JigsawPlacement`, `JigsawBlockActor`.
* A dedicated namespace `br::worldgen::` (**28 classes**) for the modern
  structure system: `Structure`, `StructureBuilder`, `JigsawStructure`,
  `JigsawStructureBuilder`, `StructureHeightProvider`, `ConstantHeight`,
  `UniformHeight`, `StructureProcessor`, and the processor rule tree
  (`processors::Rule`, `Capped`, `Gravity`, `BlockIgnore`, `ProtectedBlock`,
  `JigsawReplacement`, `BlockRules::{BlockMatch, BlockStateMatch, TagMatch,
  RandomBlockMatch, RandomBlockStateMatch}`, `PosRules::{AxisAlignedLinear,…}`,
  `BlockEntity::{AppendLoot, Modifier, Passthrough}`).

### 3.6 Data-driven biome components

The biome definition format is fully visible as cereal schema types
(`VTABLE-CLASSES.tsv`), which is effectively the complete list of biome
components the engine understands:

`ClimateBiomeJsonComponent`, `MultinoiseGenerationRulesBiomeJsonComponent`,
`OverworldGenerationRulesBiomeJsonComponent` (with `WeightedBiomeName`,
`WeightedTemperatureCategory`), `OverworldHeightBiomeJsonComponent`
(with `NoiseType`), `MountainParametersBiomeJsonComponent`
(`SteepMaterial`, `TopSlideSettings`), `SurfaceMaterialAdjustmentsBiomeJsonComponent`,
`SurfaceBuilderBiomeJsonComponent`, `TagsBiomeJsonComponent`,
`CreatureSpawnProbabilityBiomeJsonComponent`, `CustomHumidityBiomeJsonComponent`,
`CustomMapTintBiomeJsonComponent` (`GrassTint`, `GrassNoise`),
`FrozenNoiseBasedBiomeJsonComponent`, plus client-only colour/fog/music/skybox
components, and the legacy/beta variants.

`EAS::NoiseAlignment` / `EAS::NoiseAlignmentType` and
`SharedTypes::v1_26_30::NoiseDescriptor` / `NoiseBlockSpecifier` show that the
newest surface generation is driven by named noise descriptors.

### 3.7 Structures and placement

The chunk pipeline calls two structure passes from `OverworldGenerator::vslot15`
(`FUN_0ca71350` then `FUN_0ca71230`, both taking the generator, a chunk
position, and a positional random stream). The heavy lifting is
`d2d2570` (221 instructions), which resolves one structure grid cell:

* grid coordinates are derived by dividing the chunk position by the
  structure's spacing (`iVar1 = param_1[1]`) with signed-rounding correction;
* each candidate gets a `WorldGenRandom` seeded with
  `x * 0x1ef1565bd5 + z * 0x4f9939f508 + structureSalt + setSalt ^ 0x5deece66d`;
* the `spacing & (spacing-1)` fast path handles power-of-two spacings, the
  general path is `nextInt(spacing - separation)`;
* `param_1[2]` selects linear vs triangular spread (three draws averaged).

Structures themselves are `br::worldgen::Structure` subclasses
(`JigsawStructure`, `StructureBuilder`, `StructureHeightProvider` →
`ConstantHeight` / `UniformHeight`) with a processor tree
(`processors::Rule`, `Capped`, `Gravity`, `BlockIgnore`, `ProtectedBlock`,
`JigsawReplacement`, `BlockRules::*`, `PosRules::*`,
`BlockEntity::{AppendLoot, Modifier, Passthrough}`).

## 4. Randomness — four different generators

This is the most important finding for anybody trying to reproduce BDS terrain:
**the binary does not use one RNG.** It mixes four, and which one is used
depends on the subsystem: xoroshiro128++ (`Core::Random`),
`std::mt19937` (chunk and feature level), `java.util.Random`'s 48-bit LCG
(`br::worldgen::WorldGenRandom`, i.e. the modern structure system), and
splitmix64 as a seed mixer.

### 4.1 `XoroshiroRandom` — xoroshiro128++

Class layout (from the destructor and slot bodies): `[vptr][s0][s1][cached gaussian
double][has-cached flag]`, i.e. 0x28 bytes.

`XoroshiroRandom::vslot2` (`49ca710`) decompiles to, verbatim:

```c
int XoroshiroRandom_v2(long param_1)
{
  ulong uVar2 = *(ulong *)(param_1 + 8);          /* s0 */
  long  lVar1 = *(ulong *)(param_1 + 0x10) + uVar2;  /* s0 + s1 */
  ulong uVar3 = *(ulong *)(param_1 + 0x10) ^ uVar2;  /* s1 ^ s0  */
  *(ulong *)(param_1 + 8)  = uVar3 << 0x15 ^ (uVar2 << 0x31 | uVar2 >> 0xf) ^ uVar3;
  *(ulong *)(param_1 + 0x10) = uVar3 << 0x1c | uVar3 >> 0x24;
  return ((int)lVar1 * 0x20000 | (uint)((ulong)lVar1 >> 0x2f)) + (int)uVar2;
}
```

Read with the shifts resolved: `s0 = (s1^s0)<<21 ^ rotl(s0,49) ^ (s1^s0)`,
`s1 = rotl(s1^s0, 28)`, and the result is `rotl(s0+s1, 17) + s0` — i.e. plain
**xoroshiro128++** (`<<0x31|>>0xf` is `rotl 49`, `<<0x1c|>>0x24` is `rotl 28`,
`<<0x11` folded into the `*0x20000|>>0x2f` idiom is `rotl 17`).

Slots:

| slot | address | semantics |
|---|---|---|
| 2 | `49ca710` | `nextInt()` — low 32 bits of `rotl(s0+s1,17)+s0` |
| 3 | `49ca750` | `nextInt(bound)` — Lemire multiply-and-reject: `(u64)next32 * bound`, reject while `(u32)product < (-bound % bound)`, result `product >> 32` |
| 7 | `49ca8b0` | `nextDouble()` — `(next64 >> 11) * 2^-53` |
| 8 | `49ca900` | `nextGaussian()` — polar (Marsaglia) method, second value cached in the object |
| 9 | `49caa60` | `skip(n)` — unrolled 2× updates |
| 10 | `495b6e0` | `forkPositional()` — allocates a child `XoroshiroRandom`, seeds it with two consecutive outputs |

`forkPositional` is the bridge between the world seed and per-position
randomness: it derives child state `[rotl(s0+s1,17)+s0, rotl(s1',17)+s0']`.

### 4.2 `XoroshiroPositionalRandomFactory` — Minecraft's `getSeed` mixing

`49cc570` (slot 2: "give me a random stream for position p") decompiles to,
verbatim, the Java Edition `Mth.getSeed` triple-mix followed by a fallback:

```c
uVar6 = *param_3;                       /* x            */
uVar2 = param_3[1];                     /* z            */
uVar4 = *(ulong *)(param_2 + 8);        /* factory s0   */
lVar1 = *(long  *)(param_2 + 0x10);     /* factory s1   */
puVar3 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);  /* new 0x28 bytes */
uVar6 = (long)(int)uVar2 * 0x6ebfff5 ^ (long)(uVar6 * 0x2fc20f00000000 ^ uVar6) >> 0x20;
uVar4 = (long)((uVar6 * 0x285b825 + 0xb) * uVar6) >> 0x10 ^ uVar4;
uVar6 = 0x9e3779b97f4a7c15;
if (uVar4 != 0 || lVar1 != 0) { uVar6 = uVar4; }
lVar5 = 0x6a09e667f3bcc909;
if (uVar4 != 0 || lVar1 != 0) { lVar5 = lVar1; }
*puVar3      = &UNK_0ef512d0;   /* XoroshiroRandom vtable */
puVar3[1]    = uVar6;           /* s0 */
puVar3[2]    = lVar5;           /* s1 */
puVar3[3]    = 0;               /* gaussian cache */
*(undefined1 *)(puVar3 + 4) = 0;/* has-gaussian flag */
```

The constants are Java's: `3129871` (`0x2fc20f`) for `x`, `116129781`
(`0x6ebfff5`) for `z`, then `* 42317861` (`0x285b825`), `+ 11`, `>> 16`. A zero
result falls back to the standard Minecraft seed-mixer pair
`0x9e3779b97f4a7c15` / `0x6a09e667f3bcc909`. Note the hash here is only 2-D
(`x` and `z`); the 3-D variant with a `y` term appears in
`br::worldgen::processors::Rule::vslot2`.

### 4.3 `std::mt19937` — per-chunk and per-feature RNG

The Mersenne-Twister initialisation constant `0x6c078965` (1812433253) appears
in **most** terrain-producing functions:

* `OverworldGenerator` slots 10/11/15, `NetherGenerator` 10/11/15,
  `TheEndGenerator` 10/11/15, `FlatWorldGenerator::vslot11`;
* every `*Feature::vslot6` (placement);
* `NormalNoiseOperationNode::vslot2` (noise sampling — see §5);
* `CappedSurfaceBuilder::vslot2/3`, `SwampSurfaceBuilder::vslot2`,
  `MesaSurfaceBuilder::vslot2`, `LegacyMesaSurfaceBuilder::vslot2`.

For chunks the seed is the mixed chunk coordinate described in §3.1. Feature
placement uses the same construction with its own seed derivation, which is why
BDS feature placement cannot be reproduced with a single xoroshiro stream.

The object layout falls out of the same loop and is worth recording, because it
identifies the field offsets a reimplementation has to match:

```
+0x00  vptr
+0x08  seed      (the 32-bit value the engine seeded with)
+0x0c  mt[0]     (624 words -> +0x9cb)
+0x9cc mti       (written as 624 = 0x270 together with a following 0x18e word)
```

`0x0c + 624 * 4 = 0x9cc`, which is exactly where the terminating store lands, so
`mt[0]` starts at `+0xc` and `+8` holds the original seed.

### 4.4 `br::worldgen::WorldGenRandom` — a `java.util.Random` clone

`br::worldgen::WorldGenRandom` has an 18-slot vtable (`f45e800`, slots
`624d960`, `d2d9de0`, `d2d59a0` … `d2d5c20`, then `49caae0` … `49cabe0`), so it
is a full `Random`/`RandomSource` implementation. Its state is the classic
48-bit LCG; `d2d59a0` (`vslot2`) contains the Java `next(bits)` loop verbatim:

```c
uStack_58 = (long)(int)uVar9 * 0x1ef1565bd5 + (long)(int)uVar4 * 0x4f9939f508
            + *param_3 + (long)*(int *)(param_2 + 4) ^ 0x5deece66d;   /* setSeed */
uStack_58 = uStack_58 * 0x5deece66d + 0xb & 0xffffffffffff;           /* next(48) */
uVar7 = (uint)((long)(uStack_58 >> 0x11) % (long)(int)uVar2);         /* bounded  */
```

`0x5deece66d` and `+ 0xb` masked to 48 bits is `java.util.Random` exactly.
Three more things fall out of the same function:

* `0x1ef1565bd5` (132,897,987,541) and `0x4f9939f508` (341,873,128,712) are the
  two per-region salt multipliers that combine with the grid coordinates and the
  structure-set salt to produce each structure's seed;
* the `(uVar2 & (uVar2 - 1)) == 0` branch is the power-of-two spacing fast path,
  the general branch is the `nextInt(spacing - separation)` rejection loop;
* `if ((char)param_1[2] == '\x01')` selects **triangular** placement, which
  averages three draws (`uVar7 = iVar8 + uVar7 >> 1` and the extra loop) —
  i.e. BDS implements both `SpreadType::LINEAR` and `SpreadType::TRIANGULAR`,
  and this function (`d2d2570`) is the spaced-structure cell resolver called
  from the chunk pipeline (`ca71350`).

The 3-D seed variant, in `br::worldgen::processors::Rule::vslot2` (`d2be660`):

```c
uVar7 = (long)*(int *)((long)param_9 + 4)
      ^ (long)(int)param_9[1] * 0x6ebfff5
      ^ (long)(int)*param_9 * 0x2fc20f;
uStack_58 = (uVar7 * 0x285b825 + 0xb) * uVar7 >> 0x10 ^ 0x5deece66d;
puStack_68 = &vt_br_worldgen_WorldGenRandom;
```

i.e. the same `Mth.getSeed(x, y, z)` mix, XOR-ed with the LCG multiplier to seed
a `WorldGenRandom` for each jigsaw processor evaluation.

### 4.5 splitmix64 in the surface builders

`NoiseGradientSurfaceBuilder::vslot3` (`52f3680`) derives a per-position stream
with splitmix64 and then hand-rolls the xoroshiro128++ seed:

```c
uVar7 = *(ulong *)(param_1 + 8) ^ 0x6a09e667f3bcc909;
uVar9 = (uVar7 >> 0x1e ^ uVar7) * -0x40a7b892e31b1a47;   /* * 0xbf58476d1ce4e5b9 */
uVar9 = (uVar9 >> 0x1b ^ uVar9) * -0x6b2fb644ecceee15;   /* * 0x94d049bb133111eb */
uVar9 = uVar9 >> 0x1f ^ uVar9;
uVar7 = (uVar7 + 0x9e3779b97f4a7c15 >> 0x1e ^ uVar7 + 0x9e3779b97f4a7c15)
        * -0x40a7b892e31b1a47;
uVar7 = (uVar7 >> 0x1b ^ uVar7) * -0x6b2fb644ecceee15;
uVar7 = uVar7 >> 0x1f ^ uVar7;
if (uVar7 == 0 && uVar9 == 0) { uVar9 = 0x9e3779b97f4a7c15; uVar7 = 0x6a09e667f3bcc909; }
uVar11 = uVar7 ^ uVar9;
uVar13 = uVar11 << 0x15 ^ (uVar9 << 0x31 | uVar9 >> 0xf) ^ uVar11;  /* s0 of child */
uVar11 = (uVar11 << 0x1c | uVar11 >> 0x24) + uVar13;
```

So the surface builder takes its stored seed, XORs the SHA-512 IV `H0`, runs two
splitmix64 mixes at offsets `0` and the golden ratio, and uses the two results
as the `(s0, s1)` of a child xoroshiro stream. The `-0x40a7…` / `-0x6b2f…`
constants are the standard splitmix64 multipliers
`0xbf58476d1ce4e5b9` / `0x94d049bb133111eb` written as signed literals.

### 4.6 Summary table

| subsystem | RNG | evidence |
|---|---|---|
| chunk terrain (all dimensions) | `std::mt19937`, seed = `x*0x14609048 + z*0x7ebe2d5` | `527ab30`, `527c470`, `527cd10`, `5263f50`, `5294820` |
| features (placement + shape) | `std::mt19937` | every `*Feature::vslot6` |
| noise layers (construction) | `std::mt19937` seeded by an MMIX-LCG hash of the node seed | `529bef0` |
| positional / per-position seeds | xoroshiro128++ via `Mth.getSeed` mixing | `49cc570`, `49cc650` |
| biome multinoise / climate | Xoroshiro family | `5287590`, `5288770` |
| jigsaw processors, structure templates | java.util.Random LCG (`0x5deece66d`) | `d2be660`, `d36ee70` |
| surface builders | splitmix64 of a seed | `52f3680`, `52f40e0`, `52f1f50` |

---

## 5. Noise

`NormalNoiseOperationNode<T>::vslot2` (`529bef0`, 151 instructions) is the node
that *builds* a normal-noise operation whenever its seed changes — it is not a
sample loop. Verbatim:

```c
lVar3 = *(long *)(param_1 + 0x10);
lVar2 = (param_2 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * param_2 + lVar3;
lVar2 = (lVar2 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * lVar2 + lVar3;
*(long *)(param_1 + 8) = (lVar2 * 0x5851f42d4c957f2d + 0x14057b7ef767814f) * lVar2 + lVar3;
uStack_a08 = (int)param_2 + *(int *)(param_1 + 0x18);
puStack_a18 = &UNK_0f147b18;          /* std::mt19937 vtable */
puStack_a10 = &UNK_0f5356d0;
...
lVar3 = 7;
while( true ) {                        /* std::mt19937 init_genrand */
  uVar4 = ((ulong)((uVar5 >> 0x1e ^ uVar5) * 0x6c078965) + lVar3) - 6;
  ...
  if (lVar3 == 0x193) break;           /* 624 words                 */
}
uStack_44 = 0x18e00000270;             /* mti = 624                 */
...
puVar1 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
*puVar1 = *(undefined4 *)(param_1 + 0x1c);   /* first octave / levels */
FUN_0d341b00(puVar1,&puStack_a18,0,0);       /* construct noise layer  */
```

The shape is: **a 64-bit seed is hashed with a Knuth/MMIX-style LCG**
(`0x5851f42d4c957f2d`, increment `0x14057b7ef767814f`, applied three times with
the node index as an input), the result seeds a stack `std::mt19937`
(`0x6c078965`, 624 words), and that engine constructs **two** noise layers
(0x28-byte objects, each storing `firstOctave` at `+0`). Finally the node's
amplitude is computed:

```c
*(float *)(param_1 + 0x30) =
     _DAT_011988b0 /
     (float)((_DAT_014f0478 / (double)(*(int *)(param_1 + 0x1c) + 1) + _DAT_014f0478)
             * _DAT_014f0518);
```

which is the "expected deviation scaled by octave count" formula, with the three
`.rodata` doubles interpreted through `constants.tsv`.

So the noise stack is: **data-driven `NoiseDescriptor` → operation node →
xoroshiro-seeded/Mersenne-seeded layers → `FUN_0d341b00` (lattice evaluation)**.
`FUN_0d341b00` is itself 551 instructions; it is the one function anybody
reimplementing BDS terrain must read next, and it is included in the pseudocode
set.

`OverworldGeneratorMultinoise::vslot2` (`5288760`) is the terrain-density entry
point — the float pipeline:

```c
fVar = ((float)(int)x * _DAT_01198698 + _DAT_011983f0 + (float)u) * (float)(u >> 32);
...   fVar * _DAT_014f0a50[(0.0f < fVar) * 4] + _DAT_0119880c
```

and its vertical extent is decoded as `((… >> 3) - 0x2f)` to `…*8 + 0x138`,
i.e. block `y = -64 .. 320` (384 = the overworld height). `vslot57` (`5287590`)
allocates the 0x4180-byte per-chunk noise cache, fills 16³ volumes from a
`.rodata` descriptor table (`_DAT_014ea7c0` … `_UNK_014ea7cc`) and calls
`FUN_05286c70`.

### 5.1 What the strings say about the noise stack

Several doc-comments and assert messages survived in `.rodata` and pin the
design down without any guessing:

| string | where | meaning |
|---|---|---|
| `Returns a Perlin simplex noise value for the given (x, z) position.` | `.rodata` | the 2-D noise primitive is **Perlin simplex** noise |
| `Base spline`, `offsetSpline`, `WeirdnessSpline for {:.2f} jaggedness factor` | `.rodata` | terrain shaping is spline-driven: a base spline, an offset spline, and a weirdness spline parameterised by a jaggedness factor |
| `minecraft:continentalness`, `minecraft:erosion`, `minecraft:jagged`, `minecraft:offset`, `minecraft:temperature`, `minecraft:vegetation` | `5256180` | the six climate parameters of the multi-noise router |
| `Weighted climate categories` | `.rodata` | biome selection is a weighted climate-category lookup |
| `noise threshold`, `noise freq scale`, `NoiseAlignment`, `NoiseAlignmentType` | `.rodata` | the newest surface builder is driven by aligned noise specs |
| `Noise cache must be provided here!` | assert | `BiomeSource3d::fillBiomes` requires a `ChunkLocalNoiseCache` |

`5256180` (1081 instructions, mislabelled `XoroshiroRandom_ctor` by the function
namer because it happens to construct a positional random) is the router setup:
it references all six `minecraft:` climate names, calls `4a43690` (the
`jaggednessSpline` builder) and `49cce40` (the positional random factory), and
assembles the parameter list that `OverworldGeneratorMultinoise` samples.

Together with §3.2 this is the BDS equivalent of Java's `NoiseRouterData`:
six climate noises → splines (base/offset/weirdness) → density → surface rule.

## 6. What a reimplementation has to reproduce

In rough priority order, and only if bit-exact terrain is the goal:

1. **Per-chunk MT19937** with seed `x*0x14609048 + z*0x7ebe2d5` — every
   generator slot that produces blocks depends on it.
2. **xoroshiro128++** with `rotl 17/49/28/21` for positional streams, and the
   `Mth.getSeed` mixing (`3129871`, `116129781`, `42317861`, `+11`, `>>16`).
3. **Noise sampling**: MMIX-LCG hash → MT19937 → gradient evaluation (§5).
   This is where BDS diverges most from any Java-derived implementation.
4. **Biome selection**: `BiomeSource3d` volumetric fill over the dimension's
   biome volume, driven by the climate parameters listed in §3.5.
5. **Surface building** per biome, with the nine `VanillaSurfaceBuilders`
   variants; the newer path uses noise descriptors
   (`EAS::NoiseAlignment`, `NoiseBlockSpecifier`).
6. **Features** in the order the chunk pipeline invokes them (each with its own
   MT19937 instance), then `br::worldgen` structures with the Java LCG.

---

## 7. Reproducing and extending this analysis

```
# The workflow runs automatically on push to an arena/* branch when
# tools/binary-analysis/ghidra/RecoverWorldgen.java or the workflow changes.
gh workflow run "Official binary decompile" -f mode=worldgen -f max-functions=5000
```

Modes: `worldgen` (keyword selection + call-graph BFS), `all` (select every
recovered class), `rtti` (class/vtable inventory only, no decompilation).

To go deeper on a subsystem, add a line to `tools/binary-analysis/targets.txt`:

```
OverworldGeneratorMultinoise<TAB>6
Noise<TAB>6
SurfaceBuilder<TAB>5
```

and push. Each run is stateless; the evidence directory is regenerated and
committed.

## 8. Open questions

These are the places where the pseudocode is not yet sufficient and more
evidence is required. Each one is tracked by a concrete next step.

1. **Sign of the `x` term in `getSeed`.** `XoroshiroPositionalRandomFactory_v2`
   renders the x contribution as
   `(long)(x * 0x2fc20f00000000 ^ x) >> 0x20`, while the z contribution is
   explicitly sign-extended (`(long)(int)z * 0x6ebfff5`). The two readings agree
   for every non-negative coordinate and disagree for negative ones — which
   matters because block/chunk coordinates are frequently negative. Resolving it
   needs the raw instruction stream (`disassembly/disasm-*.md`), where the
   `imul`/`sar` vs `imul`/`shr` pair is unambiguous.
   `tools/binary-analysis/reference_rng.py` implements both and defaults to the
   Java-compatible one (`get_seed_2d(..., sign_extend_x=True)`).
2. **`FUN_0d341b00` (551 instructions).** The lattice evaluation behind every
   noise layer. Its inner loop has not been read yet; it is the single most
   important remaining function for bit-exact terrain.
3. **`.rodata` float tables.** `_DAT_014f0a50` (a sign-indexed pair),
   `_DAT_01198698`, `_DAT_0119880c`, `_DAT_014f0478`, `_DAT_014f0518` are the
   actual multinoise constants. `constants.tsv` lists them with their `f32` and
   `f64` interpretations; the table *contents* (not just the first word) still
   need dumping.
4. **`std::mt19937` output path in feature placement.** Which slot of
   `*Feature` consumes the MT19937 and how the per-feature seed is derived
   (`chunk seed ^ feature index` or a fresh `getSeed`) is not yet confirmed.
5. **Per-function source attribution coverage.** `code-references.tsv` and
   `source-attribution.tsv` can only name functions that exist in the program
   database. Because the import runs with `-noanalysis`, only the functions the
   harness creates are known; sites outside them are reported as unresolved.
   Running Ghidra's full analysis (or a function-boundary heuristic) would close
   this gap.

## 9. Reproducing the recovered primitives

`tools/binary-analysis/reference_rng.py` is a dependency-free transliteration of
everything in §4. It is executable and self-checking:

```
python3 tools/binary-analysis/reference_rng.py --self-test
```

It covers xoroshiro128++ (including the Lemire bounded path, the polar gaussian
and `skip`), the `Mth.getSeed` mixing in 2-D and 3-D, `forkPositional`, the
chunk seed `x*0x14609048 + z*0x7ebe2d5` and the MT19937 seeding loop, the
48-bit Java LCG behind `WorldGenRandom` together with the spaced-structure salt
multipliers, splitmix64 and the surface-builder seed derivation, and the
MMIX-LCG hash used to seed noise nodes. It is a *decode of the binary*, not a
copy of Mojang source, and it is deliberately not wired into the OpenBDS build.

### Evidence files

| file | contents |
|---|---|
| `VTABLE-CLASSES.tsv` | every recovered class: mangled name, demangled name, `type_info`, vtable address point, offset-to-top, slot count |
| `vtable-slots.tsv` | selected classes → slot → function address |
| `functions.tsv` | per function: instruction count, owners, inferred names, callees, referenced strings |
| `callgraph.tsv` | direct call edges |
| `code-references.tsv` | vtable `lea` sites → constructor / lambda-enclosing function |
| `lambda-attribution.tsv` | lambda vtable → inferred enclosing C++ function |
| `source-attribution.tsv` | function → original `/mnt/vss/...` source path (from `lea` sites) |
| `source-files.tsv` | source path → number of functions referencing it |
| `disassembly/disasm-<addr>.md` | raw x86-64 for the functions a signedness question hinges on |
| `SUMMARY.md` | one-page roll-up produced by `summarize_evidence.py` |
| `constants.tsv` | referenced `.rodata` constants with `u32`/`f32`/`f64` interpretations |
| `pseudocode/pseudocode-*.md` | Ghidra C output, index in `pseudocode-index.md` |
| `seed-diagnostics.txt` | trace from a known mangled type name to its `type_info` and vtable |
| `memory-blocks.txt` | Ghidra memory layout (image base, block permissions) |
| `headless.txt`, `ghidra-script.log` | run logs |

### Known limitations

* Decompilation without auto-analysis means types are unknown: expect
  `undefined8`, `param_1`, and virtual calls through raw offsets.
* Only functions reachable from the selected vtables (plus their
  `lea`-discovered constructors) are decompiled; non-virtual helpers that are
  never called from that set are absent.
* Template-heavy class names are demangled best-effort; names containing `?`
  are unresolved substitution/template arguments.
* String attribution only covers literals that Ghidra resolved as data
  references; assert text is often in separate throw helpers.
