# Targeted Ghidra recovery

> Proprietary research evidence; not part of the MIT OpenBDS engine.

This bounded headless pass imported the ELF without whole-program auto-analysis, found selected Itanium C++ RTTI names, reconstructed candidate vtables from relocated pointers, disassembled their executable slots, followed a bounded nearby direct-call graph, and invoked Ghidra's decompiler. It did not execute the target.

- Classes with recovered entries: `12`
- Vtable entries: `406`
- Unique virtual functions decompiled: `179`
- Nearby direct callees decompiled: `29`
- Direct call edges recorded: `55`
- Maximum slots examined per vtable: `96`
- Maximum unique virtual functions: `320`
- Maximum nearby direct callees: `80`
- Maximum direct-call depth: `3`

## Diagnostics

- BiomeSource: RTTI string found but no executable vtable entries recovered
