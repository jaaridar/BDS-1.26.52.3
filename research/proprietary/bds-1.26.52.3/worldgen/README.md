# BDS 1.26.52.3 world-generation research

> **Provenance and licensing.** Everything in this directory is *mechanically
> derived* from Mojang/Microsoft proprietary material: the `bedrock_server`
> executable and the vanilla data packs shipped beside it. It is **not**
> MIT-licensed OpenBDS source, it is not original Mojang source, and it must
> not be copied into `src/`. See [NOTICE](../../../../NOTICE) and
> [docs/licensing.md](../../../../docs/licensing.md). Use it as private
> research evidence and validate any compatible behaviour independently.

Target identity (verified in `triage/identity.json`, expected digest matched):

| field | value |
|---|---|
| file | `bedrock_server` (Git LFS object) |
| SHA-256 | `0a490c711d4a2ce075debcd979e8862b7eaba008373f9970f0edbb67f98f9207` |
| size | 256 133 808 bytes |
| build id | `c0ff36e2eacfc191f01e189237df71f139b5d04a` |
| compiler | clang 20.1.8 / LLD 20.1.8, GCC 10.2.1 runtime |
| debug link | `bedrock_server.debug` (not shipped) |
| symbol table | stripped - no `.symtab`, 382 dynamic imports |

## Method

The binary is 256 MB with a 182 MB `.text` and 551 185 `.eh_frame` FDE
function entries. Whole-program auto-analysis is not practical on a
GitHub-hosted runner, so the harness is deliberately *targeted*:

1. **Stage 1 - structural triage** (`tools/binary-analysis/triage.py`, CPU
   only, never executes the target):
   * ELF section/program-header map, identity, dynamic dependencies;
   * function boundaries from `.eh_frame_hdr`;
   * full pointer map from `.rela.dyn` (724 003 relocations);
   * Itanium C++ RTTI recovery: typeinfo → vtable → virtual slot, which
     yields 5 275 classes and their virtual functions without symbols;
   * a Capstone linear sweep of the 46.4 M instructions in `.text` that
     records RIP-relative references to world-generation strings;
   * ranking of candidate world-generation functions and export of
     `targets.tsv`.
2. **Stage 2 - targeted decompilation** (`tools/binary-analysis/ghidra/DecompileTargets.java`,
   Ghidra 12.1.4 headless, `-noanalysis`): creates a function for each ranked
   entry point (plus its callees, two levels deep for core targets),
   decompiles it, and writes one C file per function with the referenced
   strings attached.
3. **Vanilla data decode** (`tools/worldgen-data/brarchive.py`): the biome and
   behaviour documents the server loads at boot live in `.brarchive`
   containers; the decoder unpacks them so the data-driven half of world
   generation can be read next to the code.

Neither stage executes the binary. Nothing here is uploaded anywhere except
the repository itself (evidence is committed by the CI run that produced it).

## Layout

| path | content |
|---|---|
| `ALGORITHM.md` | synthesis: how the world-generation pipeline is put together |
| `triage/` | stage-1 reports: `summary.md`, `classes.tsv`, `worldgen-vtables.tsv`, `string-xrefs.tsv`, `candidates.tsv`, `targets.tsv`, `callgraph-worldgen.tsv` |
| `decompiled/shard-N/` | stage-2 Ghidra pseudocode, one file per function, plus `index.md`, `callgraph.tsv`, `failures.tsv` |
| `data/biomes/` | decoded `*.biome.json` documents (71 biomes) |
| `data/biome-table.tsv` | one row per biome: climate, height noise type, surface builder, transformation rules, multinoise targets |
| `data/feature-rules.tsv` | the 120 vanilla feature rules: placement pass, iterations, distribution, biome filters |
| `data/feature-types.tsv` | feature type histogram |

## Reproducing

The binary is stored with Git LFS and normally exists only as a pointer in a
checkout. `.github/workflows/bds-decompile.yml` performs the whole pipeline on
a GitHub runner, where `actions/checkout` materialises the LFS object:

```
Actions -> "BDS worldgen decompile" -> Run workflow
  budget_seconds   decompiler wall clock per shard (default 3300)
  max_functions    functions per shard (default 600)
  shards           parallel decompiler jobs (default 4)
```

Locally, with the real object present:

```bash
python3 -m pip install capstone pyelftools
python3 tools/binary-analysis/triage.py bedrock_server research/proprietary/bds-1.26.52.3/worldgen/triage \
    --expected-sha256 0a490c711d4a2ce075debcd979e8862b7eaba008373f9970f0edbb67f98f9207
# then, with a Ghidra install:
analyzeHeadless /tmp/proj bds -import bedrock_server -overwrite -noanalysis \
    -scriptPath tools/binary-analysis/ghidra \
    -postScript DecompileTargets.java OUTDIR research/.../triage/targets.tsv 3600 400 \
        research/.../triage/worldgen-vtables.tsv
```

The triage tool is validated against a synthetic stripped C++ fixture
(`OVERWORLD_DECL` / `BiomeSource` / `OverworldGeneratorMultinoise` stand-ins)
so the RTTI, vtable and string-xref logic is checked end-to-end before it is
pointed at the real binary.

## Limitations

* Decompilation is *targeted*: functions that no world-generation class,
  string or seed reaches are not covered.
* Vectorised/intrinsics-heavy code (noise sampling) decompiles to unreadable
  SIMD; structure and constants are still visible.
* Types, struct layouts and member names are not recoverable from a stripped
  binary; pseudocode shows raw offsets.
* Anything derived from inline data (noise tables, permutation arrays) is
  identified by address and content, not by name.
