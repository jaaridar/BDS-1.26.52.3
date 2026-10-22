# Headless Ghidra recovery — official BDS binary

> Proprietary research evidence, mechanically derived from the Mojang
> `bedrock_server` binary. Not MIT-licensed OpenBDS source. The target was
> never executed: this is a static import plus decompiler pass.

- mode: `worldgen`
- RTTI `type_info` objects recovered: `10094`
- distinct classes/vtables recovered: `6104` / `6509`
- vtables selected by name filter: `85`
- selected vtable slots: `702`
- functions analysed: `924`
- functions decompiled: `924`

## How the class names were recovered

The binary has no symbol table. Itanium ABI `type_info` objects were
located structurally: a pointer to a data-section vtable followed by a
pointer to an ASCII mangled type name in `.rodata`. Vtables were then
found as relocated pointers equal to those `type_info` addresses, so the
inventory in `VTABLE-CLASSES.tsv` covers every polymorphic class in the
binary rather than a hand-written guess list.

## Files

- `VTABLE-CLASSES.tsv` — every recovered class/vtable
- `vtable-slots.tsv` — slot-to-function map for selected classes
- `functions.tsv` — analysis + string attribution per function
- `callgraph.tsv` — recovered direct call edges
- `pseudocode/pseudocode-*.md` — Ghidra C output
- `pseudocode-index.md` — index into the parts

## Priority classes (expanded by call-graph BFS)

- VoidGenerator
- br::worldgen::WorldGenRandom
- JigsawStructurePostprocessAction
- br::worldgen::processors::JigsawReplacement
- br::worldgen::JigsawStructure
- JigsawStructureLoader
- br::worldgen::JigsawStructureBuilder
- NoiseUtils::DoublesForFloatsRandom
- FlatWorldGenerator

## Diagnostics

- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
- cannot read block at 0: ghidra.program.model.mem.MemoryAccessException: Unable to read bytes at ram:00000000
