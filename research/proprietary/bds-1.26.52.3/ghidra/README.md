# Targeted Ghidra recovery

> Proprietary research evidence; not part of the MIT OpenBDS engine.

This bounded headless pass imported the ELF without whole-program auto-analysis, found selected Itanium C++ RTTI names, reconstructed candidate vtables from relocated pointers, disassembled their executable slots, and invoked Ghidra's decompiler. It did not execute the target.

- Classes with recovered entries: `12`
- Vtable entries: `337`
- Unique functions decompiled: `143`
- Maximum slots examined per vtable: `48`
- Maximum unique functions: `180`

## Diagnostics

- BiomeSource: RTTI string found but no executable vtable entries recovered
