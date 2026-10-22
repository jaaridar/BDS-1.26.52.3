# Recovering the world generator from the shipped server

OpenBDS ships the unmodified Bedrock Dedicated Server binary (Git LFS) and
vanilla behaviour packs. This page documents how we turn those artefacts into a
readable description of how the world is generated, without ever executing the
server and without shipping Mojang code as OpenBDS source.

## Method

1. **Static structure.** `tools/binary-analysis/triage.py` parses the stripped,
   PIE x86-64 ELF: `.eh_frame` gives the function map, `.data.rel.ro` plus
   `.rela.dyn` give the Itanium-ABI RTTI and vtables, a Capstone sweep resolves
   RIP-relative references and direct calls, and a keyword/class scoring pass
   ranks the world-generation functions.
2. **Decompilation.** `tools/binary-analysis/ghidra/DecompileTargets.java`
   runs inside Ghidra headless, rebases the ELF addresses onto the program image
   (Ghidra loads this PIE at `0x100000`), creates functions from the ranked
   list, expands one call ring, and writes pseudocode, per-function indexes and
   a call graph.
3. **Data assets.** `tools/worldgen-data/brarchive.py` decodes the `*.brarchive`
   containers that hold the biome, feature and feature-rule JSON, and
   `summarize.py` flattens them into TSV tables.
4. **Synthesis.** `research/proprietary/bds-1.26.52.3/worldgen/RECONSTRUCTION.md`
   ties the evidence together; `tools/worldgen-data/xoroshiro.py` re-implements
   the recovered PRNG and self-tests it.

## Guarantees

* The harness never executes the proprietary binary; it is only parsed and
  decompiled.
* A synthetic fixture (`tools/binary-analysis/fixtures/worldgen_fixture.cpp`) is
  analysed on every CI run, so RTTI/vtable recovery, string-xref attribution and
  the ELF → Ghidra address mapping cannot silently regress.
* Generated evidence lives under `research/proprietary/` and is never copied
  into `src/`.

## Where to look

| question | artefact |
|---|---|
| which classes and vtables exist | `research/.../worldgen/triage/classes.tsv` |
| which world-gen vtable slots exist | `research/.../worldgen/triage/worldgen-vtables.tsv` |
| which functions were decompiled | `research/.../worldgen/data/function-index.tsv` |
| what a function does | `research/.../worldgen/decompiled/shard-*/functions/*.c` |
| what the RNG does | `tools/worldgen-data/xoroshiro.py`, `RECONSTRUCTION.md` §2.1 |
| what the biome data says | `research/.../worldgen/data/biome-table.tsv` |
