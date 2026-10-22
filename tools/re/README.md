# Local-only reverse-engineering harness

This directory answers "how would I study the proprietary `bedrock_server`
binary with a headless decompiler?" as far as this project legally and
practically can. Read this file before running anything here.

## TL;DR

* There is **no Mojang binary in a fresh clone** to decompile: the repo
  stores `bedrock_server` as a Git LFS pointer (verify with
  `node tools/re/check-target.js bedrock_server` - it reports the expected
  sha256 `0a490c71…` and size 256,133,808 bytes, file present: **no**).
* Decompiling Mojang's binary and publishing the output (or code derived
  from it) here would breach the Minecraft/BDS EULA and copyright, and
  would destroy this project's ability to be MIT-licensed. See
  [`../../NOTICE`](../../NOTICE) and [`../../docs/licensing.md`](../../docs/licensing.md).
  **Nothing in this directory changes that, and no output of these tools
  may be committed to this repository** (`re-output/` is gitignored;
  pull requests containing derived constants/code will be rejected to
  protect the clean-room status of OpenBDS).
* What you get instead: a **target-agnostic harness** - pre-flight check,
  binutils triage, a gated Ghidra-headless wrapper with a generic export
  script, and notes on agent-driven tooling - that you can run **on your
  own machine, against your own licensed copy**, for private study where
  your license and local law permit it (interoperability research rules
  vary by jurisdiction; that determination is yours, not this project's).
* The world-generation *knowledge* most people want from such a study is
  already available lawfully from public documentation, and OpenBDS now
  implements it clean-room: [`../../docs/world-generation.md`](../../docs/world-generation.md),
  `src/world/{rng,noise,biomes,terrain}.js`, selected with
  `openbds-generator=infinite`. Behavioral parity against a real BDS
  world is measured black-box with `tools/worldgen-map.js` +
  `tools/worldgen-compare.js` - no binary analysis required.

## Why "just run Ghidra on it here" is also technically infeasible

Even setting licensing aside, this cloud sandbox (2 vCPU, ~4 GB RAM, no
JDK, no Ghidra, no `git-lfs`) cannot auto-analyze a 256 MB stripped C++
executable with on the order of 10^5 functions. Practically you want:

* Ghidra's `MAXMEM` raised to 16 GB+ (`support/launch.properties`),
  tens of GB of project disk, and hours of CPU for first-pass analysis;
* follow-up passes for RTTI/vtable recovery and STL/container patterns
  before decompiler output becomes readable C++-like pseudocode;
* symbol knowledge from elsewhere (the binary is stripped - function
  names in any export will mostly be `FUN_00xxxxxx`).

A decompiler produces *pseudocode to study*, never the original source,
build system, comments or test suite. Budget accordingly.

## The harness

### 1. Pre-flight (metadata only)

```bash
node tools/re/check-target.js <path>
```

Reports presence/size/sha256/container format and specifically detects
the Git LFS pointer, so you never waste an hour pointing a decompiler at
a 134-byte stub. It reads no code and disassembles nothing.

### 2. Binutils triage (proven here on our own binary)

`tools/re/triage.sh <binary> <out-dir-outside-git>` runs
`readelf`/`nm`/`objdump` and writes section/symbol/disassembly summaries.
Its in-repo purpose is a pipeline self-test against the sample we wrote:

```bash
gcc -O2 -o /tmp/noise_sample tools/re/sample/noise_sample.c -lm
tools/re/triage.sh /tmp/noise_sample /tmp/triage-out
grep -A20 '<sample_height>:' /tmp/triage-out/disassembly.txt
```

### 3. Ghidra headless (gated, generic)

Prerequisites on **your** machine: JDK 17+ and Ghidra 11.x from the NSA
Ghidra releases on GitHub.

```bash
export GHIDRA_HOME=/opt/ghidra
BINARY=/path/on/your/machine/bedrock_server \
I_OWN_THIS_BINARY_AND_OUTPUT_STAYS_LOCAL=1 \
  tools/re/run-ghidra-headless.sh
```

The wrapper refuses to run without the explicit acknowledgement, refuses
LFS pointers/missing files, and writes a function index + decompiled C
(`tools/re/ghidra/ExportFunctions.java`, a textbook `DecompInterface`
script) only under the gitignored `re-output/`. Create the world-gen
shortlist the standard way once you have that index: rank functions by
cross-references to data you can observe black-box (chunk serialization,
seed handling in `start_game`, height limits -64/320, sea level 63) and
validate every hypothesis against *observable behavior* (next section)
rather than transcribing pseudocode. If you do this study, keep notes
and code out of OpenBDS entirely - contributing transcribed constants
would taint the clean room for everyone.

Lighter-weight alternatives for a first look: `radare2`/`rizin` with
`r2dec` or the Ghidra decompiler via `rz-ghidra`, e.g.
`rz-bin -I <binary>`, `rizin -AA -c afl <binary>` - far faster to start
than full Ghidra analysis, proportionally shallower. Not installed here
deliberately; same local-only rules apply.

### 4. Agent-driven exploration (`morluto/rea` and friends)

[github.com/morluto/rea](https://github.com/morluto/rea) (MIT) advertises
"reverse engineer anything with agents, from app behavior down to native
binaries". Tools in this class orchestrate an LLM agent loop around
ordinary RE primitives (triage, disassembly, decompilation, dynamic
probing). If you use one: clone it in a workspace **outside** this repo,
point it only at your own local binary copy, and apply every rule in
this file to its transcripts and exports - an agent writing derived code
into this repo is the same clean-room and copyright problem, just
faster. No agent in this project's development was pointed at Mojang's
binary, and that is a permanent project rule, not an oversight.

## The lawful path that actually ships features

1. **Public documentation first**: Minecraft Wiki
   ("World generation", "Noise", "Biome", "Ore"), Mojang developer
   articles, and open protocol/data projects (PrismarineJS
   `minecraft-data`/`bedrock-protocol`) describe the architecture,
   constants like sea level/height range, and distribution shapes.
2. **Black-box observation**: run the official server (you may do that -
   it's the product working as intended; see
   `scripts/start-official.sh`), generate worlds from known seeds,
   export heightmaps/biome names by any means that observes outputs
   (in-game, world-folder inspection with separate tooling, network
   traffic of your own client), then compare with
   `tools/worldgen-compare.js` against `tools/worldgen-map.js` dumps.
3. **Clean-room implementation**: write original code that reproduces
   the observed behavior and the published algorithm structure - which
   is exactly what `src/world/terrain.js` does, with its simplifications
   listed openly in `docs/world-generation.md`.

That loop improves OpenBDS forever without ever owing anyone a lawyer.
Decompiler output rots in a private folder; a tested, MIT-licensed
generator compounds.
