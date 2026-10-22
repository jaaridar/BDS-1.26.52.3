# Targeted Ghidra recovery

> Proprietary research evidence; not part of the MIT OpenBDS engine.

This bounded headless pass imported the ELF without whole-program auto-analysis, found selected Itanium C++ RTTI names, reconstructed candidate vtables from relocated pointers, disassembled their executable slots, and invoked Ghidra's decompiler. It did not execute the target.

- Classes with recovered entries: `12`
- Vtable entries: `406`
- Unique functions decompiled: `179`
- Maximum slots examined per vtable: `96`
- Maximum unique functions: `320`

## Diagnostics

- BiomeSource: RTTI string found but no executable vtable entries recovered
