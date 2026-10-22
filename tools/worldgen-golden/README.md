# Worldgen golden-data harness

Ground truth for world generation, produced by **the official server itself**.

The goal is bit-exact terrain: for a given seed, every block OpenBDS generates
must match what Mojang's `bedrock_server` generates. Matching that requires an
oracle, and the only honest oracle is the real binary. This directory runs the
server, saves real chunks with the in-game `structure save` command, and
converts them into a canonical grid that a reimplementation can be diffed
against, block by block.

```
tools/worldgen-golden/
├── run-golden.js     # drives bedrock_server: fixed seed, ticking area, structure save
├── build-golden.js   # .mcstructure -> golden grid, and *proves* the block ordering
├── verify.js         # candidate vs golden, per-block, with coordinates
├── self-test.js      # 10 tests; runs with no binary and no network
└── lib/
    ├── nbt.js        # little-endian Bedrock NBT, varint/u16 string-length autodetect
    ├── mcstructure.js# .mcstructure decode + canonical grid + container format
    └── compare.js    # block-by-block diff, confusion matrix, per-layer report
```

Everything here is MIT-licensed tooling. The *output* is derived from the
proprietary binary and is therefore kept under `research/proprietary/`.

## Why it runs on a runner

`bedrock_server` is a proprietary release asset and is not available in the
development sandbox, so `.github/workflows/worldgen-golden.yml` downloads it
(authenticated, hash-verified) on a GitHub runner and drives it there. Locally
you can run the tooling against any copy of the binary you already have.

## Capture protocol

`run-golden.js`:

1. writes a minimal `server.properties` (`level-seed=<seed>`, cheats on,
   `online-mode=false`, one player slot, no LAN visibility);
2. starts the server and waits for `Server started`;
3. builds a **probe**: a 5×5×5 air pocket at `(0,100,0)` with six distinct
   marker blocks at known offsets, then `structure save wp_probe` over it;
4. `tickingarea add 0 0 0 47 0 47` to force generation of a 3×3 chunk region,
   then waits;
5. saves each chunk column in six vertical slices
   (`-64..-1, 0..63, …, 256..319`) so a full 384-block column is captured;
6. `stop`, then collects every `.mcstructure` produced, plus `server.log` and
   `capture.json` (binary SHA-256, platform, slices, chunks).

## The ordering problem, and why it is not guessed

`structure.block_indices` is a flat array whose
`(x,y,z) → index` mapping is not documented. Getting it wrong yields
plausible-looking terrain that is wrong everywhere — the worst possible failure
mode.

`build-golden.js` therefore runs the probe structure through **all six**
plausible orderings (`xzy`, `xyz`, `zxy`, `zyx`, `yzx`, `yxz`), scores each
against the six marker blocks, and:

* requires the winner to score 6/6;
* requires the winner to be unique;
* records the winner in `research/proprietary/bds-1.26.52.3/golden/MANIFEST.json`.

Anything else is a hard failure. There is no "assume xzy" fallback anywhere in
the pipeline.

## Golden format

Per capture: `golden-<seed>-c<cx>_<cz>.json` + `.blocks.bin`.

```json
{
  "schema": 1,
  "label": "1-c0_0",
  "seed": "1",
  "origin": [0, -64, 0],
  "size": [16, 384, 16],
  "ordering": "y,z,x row-major (x fastest)",
  "palette": [{ "name": "minecraft:stone", "states": {} }],
  "blocks": { "file": "...", "sha256": "...", "bytes": 196608, "layers": 1 }
}
```

`.blocks.bin` is `uint16` little-endian palette indices, `y` slowest then `z`
then `x`. The palette carries block names **and** block states, so a
`minecraft:water[level=3]` cannot silently compare equal to
`minecraft:water[level=0]`. A SHA-256 of the grid is stored with it, and
`verify.js` refuses to compare a file whose hash does not match.

## Usage

```bash
# unit tests: no binary, no network
node tools/worldgen-golden/self-test.js

# capture (needs ./bedrock_server and an x86-64 Linux host)
node tools/worldgen-golden/run-golden.js --binary ./bedrock_server \
     --seed 1 --out capture/seed-1 --verbose

# decode + pin the ordering
node tools/worldgen-golden/build-golden.js capture/seed-1 \
     --out research/proprietary/bds-1.26.52.3/golden

# compare a candidate against the golden set
node tools/worldgen-golden/verify.js \
     --golden research/proprietary/bds-1.26.52.3/golden \
     --candidate capture/golden-1-recheck \
     --require-exact --write-report capture/verify.md
```

`verify.js` exits `0` on success, `1` on mismatch, `2` on bad input, so it can
gate CI directly.

## Determinism check

The workflow captures the same seed **twice** and requires the two captures to
be identical (`verify.js --require-exact`). If that ever fails, the capture is
not a trustworthy oracle and is not committed as golden data. This is the
guard against "the server generated something, therefore it is truth" —
generation must first be shown to be reproducible.

## Status and next steps

* Tooling: complete and self-tested (10/10).
* Capture: runs in `worldgen-golden.yml`; the first green run establishes the
  real block ordering and the first golden column.
* Once one seed is captured, add more (`workflow_dispatch` with `seed=N`) to
  cover negative coordinates, biome variety and structure placement.
* OpenBDS' generator is then expected to emit golden-format files, and
  `verify.js` becomes the acceptance test for world generation.
