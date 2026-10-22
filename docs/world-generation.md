# World generation

How modern (1.18+, including the 1.26 line) Minecraft overworld generation
is *publicly documented* to work, what OpenBDS implements from that
documentation, and where the two deliberately differ. This is the
knowledge a decompilation would be hoped to provide - obtained from the
Minecraft Wiki ("World generation", "Noise", "Biome", "Ore",
"Seed (level generation)"), Mojang's Caves & Cliffs developer articles,
and open protocol documentation, then implemented clean-room in
`src/world/{rng,noise,biomes,terrain}.js`. No Mojang binary, symbol, or
data table was used (project policy: `NOTICE`, `docs/licensing.md`,
`tools/re/README.md`).

## The documented algorithm, end to end

```
seed (string/number; Bedrock UI exposes 32-bit seeds, wire carries 64-bit)
  │
  ├─ per-field seed expansion ─► independent noise fields
  │     continentalness · erosion · weirdness (peaks & valleys)
  │     temperature · humidity/vegetation · (depth underground)
  │
  ├─ BIOMES: multi-noise source - nearest climate point wins
  │
  ├─ TERRAIN SHAPE: noise "router" density functions; splines map
  │     continentalness/erosion/weirdness to a base height/density;
  │     sampled on a coarse grid and interpolated into blocks
  │     overworld: y -64..319, sea level 63
  │
  ├─ SURFACE RULES + STRATA: bedrock gradient at the floor, deepslate
  │     below y≈0, biome top/under blocks, water filled to sea level
  │     (vanilla: aquifer system decides underground fluids)
  │
  ├─ CARVERS: noise caves - wide "cheese", twin-noise "spaghetti",
  │     thin "noodle"; plus canyons/ravines in vanilla
  │
  ├─ FEATURES per chunk, from positional randomness:
  │     ores with published uniform/triangle height distributions,
  │     vegetation/trees by biome, then structures (vanilla)
  │
  └─ chunk columns encoded as paletted sub-chunks + 4×4×4 biome cells
        (OpenBDS: src/world/chunk.js, classic level_chunk payload)
```

Positional randomness is the key determinism idea, and it is documented:
decoration randomness derives from the world seed *and* chunk position
(modern worldgen uses xoroshiro128++, a CC0 algorithm published by
Blackman & Vigna), so chunk content is independent of the order chunks
happen to be generated in.

## What OpenBDS implements (`openbds-generator=infinite`)

| Stage | Implementation |
|---|---|
| Seed expansion | SplitMix64 seed tree (`rng.deriveSeeds`), text seeds folded in (`rng.normalizeSeed`) |
| Decoration RNG | Xoroshiro128++ from its public spec, per-chunk streams with pass salts (`rng.chunkRandom`) |
| Noise | Improved Perlin gradient noise from the published math, fractal octaves + ridged variant (`noise.js`) |
| Climate fields | continentalness ~1/720, erosion ~1/512, peaks ~1/360, temperature/humidity ~1/900 blocks per wavelength unit (`terrain.climateAt`) |
| Height | Continentalness spline (34 deep-ocean floor → 110 far-inland base) + hill/detail octaves + quadratic ridged mountains (peaks observed ≈ y 170), river channels carved through lowlands |
| Biomes | 19 overworld biomes, nearest climate point in temperature×humidity with ocean/river/beach/peak gates, Bedrock biome IDs (`biomes.js`) |
| Strata | Bedrock gradient y −64..−60, deepslate y<−8 with blend band to y 0, stone, biome surface rules, sand→sandstone backing, water to y 63 |
| Caves | Cheese caverns + paired-noise spaghetti tunnels from 3D noise on a 4-block grid, trilinearly interpolated; occasional surface entrances; bedrock and ocean floor protected |
| Ores | Coal, iron (two bands), copper, gold, redstone, lapis, diamond, emerald (mountains), wiki-shaped uniform/triangle heights, random-walk veins in stone/deepslate (`terrain.ORES`) |
| Trees | Oak/birch/spruce by biome density, canopies contained in-chunk |
| Wire format | Existing paletted sub-chunk encoder; biome cells now sampled per 4×4×4 cell (`encodeColumn` `biomeSampler`) |
| Spawn | Expanding search for dry land near origin |

Measured in the dev sandbox: ≈12 ms per chunk, ~42% ocean coverage over
an 8192² sample, heights y 29..179 across test seeds, all 19 biomes
occurring. Try it:

```bash
node bin/openbds.js --generator infinite --palette terrain --port 19132
# or fully offline, with an ASCII survey of a seed:
node tools/worldgen-map.js --seed 42 --size 768 --step 12
```

## Honest parity table

| Aspect | Status vs. vanilla |
|---|---|
| Overall terrain *character* (continents, coasts, rivers, mountain ranges, biome climate logic, cave styles, ore depth logic) | Comparable by construction |
| Same seed ⇒ same world as BDS/Java | **No.** Exact parity needs Mojang's unpublished Bedrock noise-router constants, climate parameter table and feature placements; obtaining those by decompiling their binary and shipping them here is exactly what this project will not do |
| Shape model | Heightmap surface (no overhangs/floating islands — vanilla uses full 3D density) |
| Underground biomes / aquifers / lava lakes / noodle caves / ravines | Not yet |
| Structures, villages, strongholds, fossils | Not yet (roadmap) |
| Snow/ice surface layers, waterlogging | Not yet — the wire encoder writes a single block layer |
| Deepslate ore variants | Stone-variant block is reused below y 0 |
| Nether / End | Not yet |

## Measuring (not assuming) parity - black-box workflow

Parity work must measure *behavior*, which needs no binary analysis:

1. Dump OpenBDS: `node tools/worldgen-map.js --seed 42 --out ours.json`
2. On your own machine, run the official server (`scripts/start-official.sh`)
   with the seed under study, and export an equivalent height/biome map
   of its *output world* with whatever external tooling you prefer, in
   the documented `openbds-worldgen-map/1` JSON shape (see the header of
   `tools/worldgen-map.js`).
3. Compare: `node tools/worldgen-compare.js ours.json reference.json`
   reports mean/RMSE height error, exact-cell %, land/sea agreement and
   biome agreement. Today, with different (clean-room) constants, expect
   "same kind of world", not cell agreement - the tool exists so future
   tuning against *published* data is quantified instead of vibes.

## Notes for contributors

* Keep every field a pure function of world coordinates; per-chunk RNG
  may only decorate inside its own chunk. The border-continuity and
  determinism tests in `test/unit/worldgen.test.js` enforce this.
* New palette blocks go in `BlockPalette.terrain()`; surface rules
  reference blocks by name with palette fallbacks so tiny palettes
  degrade instead of crashing.
* Constants must come from public sources or your own tuning. If you
  have studied a proprietary binary privately, do not contribute values
  transcribed from it (see `tools/re/README.md`).
