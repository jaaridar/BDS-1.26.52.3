# World database capture — verified findings

Ground truth for world generation comes from the official `bedrock_server`
1.26.52.3 (sha256 `0a490c711d4a2ce075debcd979e8862b7eaba008373f9970f0edbb67f98f9207`)
run headless on a GitHub runner with a fixed seed. Everything below was derived
from real captures and is re-checked on every run; nothing is assumed.

## Dead end: `structure save` does not write files

The first capture design used the in-game command
`structure save wp_probe x y z ...` and then collected `*.mcstructure` files.
The server reports `Saved a structure with name mystructure:<name>` for all 25
saves, but **no file is ever written**: a full filesystem scan after the save
(recorded in `diagnostics/filesystem-*.txt`) found neither the requested names
nor a `structures/` directory in the world save. On the dedicated server the
structure stays in memory.

The world's own LevelDB (`worlds/golden/db`) therefore is the only persisted
artefact, and it is what the harness now uses.

## Key layout (verified)

A subchunk key is 10 bytes, chunk metadata keys are 9:

```
[ x:int32 LE ][ z:int32 LE ][ tag:u8 ][ subchunkIndex:i8 ]   tag 0x2f = SubChunkPrefix
[ x:int32 LE ][ z:int32 LE ][ tag:u8 ]                       tag 0x2b = Data3D (3D biomes)
                                                             tag 0x2c = Data2D
digp + [ x:int32 ][ z:int32 ]                                chunk index record
```

There is no dimension field: each dimension has its own database.

A subchunk index `i` holds world Y `i*16 .. i*16+15`, so index `-4` is the world
floor (-64) and index `0` is Y 0..15.

## Subchunk value layout, version 9 (verified)

```
[ version:u8 = 9 ][ storageCount:u8 ][ y:i8 ][ bits:u8 ]
  for each storage (later storages repeat the bits byte):
    blocks:  ceil(4096 / floor(32/bpb)) u32 words, little-endian
    palette: int32 count, then that many little-endian NBT compounds
```

* `bpb = bits / 2` — the stored field is twice the packed width.
* Blocks inside a subchunk are indexed `x*256 + z*16 + y` (Y fastest).
* `storageCount` is 1 for plain chunks. A second storage appears where a cell
  holds a second block (observed palette `[air, water]`, and once
  `[air, flowing_water, water]`); it is recorded as golden layer 1.
* Subchunks are uncompressed: 25/25 values contain the literal `minecraft:`.
* An absent subchunk key means the subchunk is entirely air — which is why the
  air above the surface has no key while the marker pocket created one.

### How the layout was pinned (not guessed)

The capture writes a known 5x5x5 marker pocket with the in-game commands:

| offset from probe origin | block |
| --- | --- |
| (0,0,0) | `minecraft:gold_block` |
| (4,0,0) | `minecraft:diamond_block` |
| (0,0,4) | `minecraft:emerald_block` |
| (4,0,4) | `minecraft:lapis_block` |
| (0,4,0) | `minecraft:iron_block` |
| (2,2,2) | `minecraft:redstone_block` |

Candidates were scored against that pocket. Only one reading of the data
reproduces all six markers at their exact coordinates:

| word size | bit order | block index | markers reproduced |
| --- | --- | --- | --- |
| 2 bytes | low bits first | `x*256 + z*16 + y` | 3/6 |
| 4 bytes | low bits first | `x*256 + z*16 + y` | **6/6** |

It also produced zero out-of-range palette indices. Every alternative was
rejected, so `check-db.js` gates the pipeline: if the markers do not decode, the
build fails instead of shipping golden data on an assumption.

Additional structural checks that make a silent misread impossible:

* the palette must consume the subchunk value **exactly** (no trailing bytes);
* every unpacked index must be `< palette.length`;
* the `y` byte in the value must equal the `y` byte in the key.

## Current capture

* seed `1`, chunks `(0,0)`, `(0,1)`, `(1,1)` present; `(1,0)` has no saved
  subchunks yet. Column = `16 x 384 x 16` = 98,304 blocks, 196,608 B per layer.
* `(0,0)` has 9 subchunks (including the marker pocket at Y 96..111), the other
  two have 8 each.
* Golden palette keeps block **states**, so `water[level=3]` and `water[level=0]`
  remain distinct.

## Reproducibility: terrain is stable, decoration is not

Two independent captures of the same seed were diffed block by block. Measured on
the captured columns:

* **98,229 of 98,304 blocks (99.92%)** were identical.
* Every differing block was a **feature-placed** block: `moss_block`,
  `moss_carpet`, `azalea`, `short_grass`, `tall_grass`, `cave_vines*`,
  `glow_lichen`, `clay` discs, `big_dripleaf`, `vine`.
* No terrain block (stone, deepslate, dirt, gravel, tuff, water body, bedrock)
  ever differed in a way that was not itself a feature placement.

So BDS's noise-based terrain is deterministic, while its decoration features are
not stable between runs of the same seed. This was measured, not assumed, and the
harness is built around it:

* the golden set is built from **two** captures; a block is *stable* only if both
  agree on it (layer 0 and layer 1 together);
* stable blocks are compared **exactly**;
* unstable blocks are recorded in `golden-<label>.unstable.json` with the
  variants the server actually produced, and a candidate must produce one of
  them;
* CI then verifies a **third, unseen** capture against the golden set, so the
  gate cannot pass by construction.

Two gates, deliberately different:

| gate | criterion | purpose |
| --- | --- | --- |
| implementation (`src/world`) | every stable block identical; unstable position must be a recorded variant | judging a reimplementation |
| oracle self-check (held-out capture) | zero disagreements except where one side is a material the server was measured to vary | proving the oracle itself |

The second gate is what makes the first trustworthy: a held-out capture that was
never used to build the golden set reproduces every column at **100%**, with 57
blocks out of 393,216 classified as measured decoration variance.

Earlier, before the material-level rule, the same comparison left 1–164 blocks
disagreeing per run (0.0003%–0.17%). Pooling the evidence across columns collapses
that to zero: a plain per-position rule cannot catch a feature that happened to
agree in the references and differ in the held-out capture.

An earlier attempt to model instability as connected features (a flipping clay
disc marking its neighbours unstable) was measured and rejected: it removed no
residual at all while making 9,000 blocks per column unverifiable.

Ruled out as causes (each checked):

| hypothesis | evidence |
| --- | --- |
| random ticks (glow lichen, grass spreading) | `Game rule randomTickSpeed has been updated to 0` is applied before the capture area is loaded; grass and lichen still differ |
| spawn-area ticking | capture moved to chunk (128,128), 2048 blocks from spawn |
| missing neighbour chunks | a 2-chunk generation buffer is generated around the captured chunks |
| missing chunks in the save | every captured chunk gets a marker block at Y 319 so the server marks it modified; the server only persists modified chunks |
| decoder misread | the same decoder reproduces all six probe markers in every capture |

## Next

* Grow the captured area (more chunks, and a `tickingarea` that covers them) so
  the oracle covers structure and biome boundaries.
* Decode `Data3D` (tag `0x2b`, 4,728 B per chunk) to also verify 3D biomes.
* Feed `verify.js` with an OpenBDS `src/world` implementation and require an
  exact match on every block.
