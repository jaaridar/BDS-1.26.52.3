# Noise lattice call tree

- seeds: `0xee4a030` `0x8b5a9c0` `0x8b5aa40` `0xd3430a0` `0xd3411f0` 
- depth: 3
- functions: 43
- referenced data addresses: 134

| depth | function | entry | bytes | pseudocode | disassembly | callers |
| --- | --- | --- | --- | --- | --- | --- |
| 0 | `FUN_0ee4a030` | `0xee4a030` | 426 | pseudocode-001.md | disasm-001.md | FUN_08b5a9c0, FUN_08b5aa40 |
| 0 | `FUN_08b5a9c0` | `0x8b5a9c0` | 32 | pseudocode-002.md | disasm-002.md |  |
| 0 | `FUN_08b5aa40` | `0x8b5aa40` | 36 | pseudocode-003.md | disasm-003.md |  |
| 0 | `FUN_0d3430a0` | `0xd3430a0` | 3181 | pseudocode-004.md | disasm-004.md |  |
| 0 | `FUN_0d3411f0` | `0xd3411f0` | 710 | pseudocode-005.md | disasm-005.md |  |
| 1 | `memcpy` | `0xeee2f00` | 6 | pseudocode-006.md | disasm-006.md | FUN_0412f8c0, FUN_04134310, FUN_0d33fd60, FUN_0d3430a0 |
| 1 | `thunk_FUN_0ee326a0` | `0x412a280` | 5 | pseudocode-007.md | disasm-007.md | FUN_0412f8c0, FUN_0d33fd60, FUN_0d3430a0, FUN_0eeb5980 |
| 1 | `memset` | `0xeee2dd0` | 6 | pseudocode-008.md | disasm-008.md | FUN_041086b0, FUN_0d33fd60, FUN_0d3430a0 |
| 1 | `FUN_0eec74c0` | `0xeec74c0` | 129 | pseudocode-009.md | disasm-009.md | FUN_0d33fd60, FUN_0d3430a0, FUN_0ee32660, FUN_0eeb5980 |
| 1 | `FUN_052bdae0` | `0x52bdae0` | 14 | pseudocode-010.md | disasm-010.md | FUN_0d3430a0 |
| 1 | `FUN_04882eb0` | `0x4882eb0` | 45 | pseudocode-011.md | disasm-011.md | FUN_0d33fd60, FUN_0d3430a0 |
| 1 | `_Unwind_Resume` | `0xeee2d70` | 6 | pseudocode-012.md | disasm-012.md | FUN_04108d40, FUN_04882e40, FUN_04882ef0, FUN_0d33fd60, FUN_0d3430a0, FUN_0eeddcf0 |
| 1 | `FUN_0d3457a0` | `0xd3457a0` | 100 | pseudocode-013.md | disasm-013.md | FUN_0d3430a0 |
| 1 | `FUN_0d33fd60` | `0xd33fd60` | 4902 | pseudocode-014.md | disasm-014.md | FUN_0d3411f0 |
| 2 | `FUN_0eeddcf0` | `0xeeddcf0` | 251 | pseudocode-015.md | disasm-015.md | FUN_0eec74c0 |
| 2 | `FUN_04882e40` | `0x4882e40` | 73 | pseudocode-016.md | disasm-016.md | FUN_04882e30, FUN_049cd2d0, FUN_052bdae0, FUN_0d345710 |
| 2 | `FUN_041086b0` | `0x41086b0` | 67 | pseudocode-017.md | disasm-017.md | FUN_04882e40, FUN_04882eb0, FUN_04882ef0, FUN_04891200 |
| 2 | `FUN_0412a430` | `0x412a430` | 15 | pseudocode-018.md | disasm-018.md | FUN_04882eb0 |
| 2 | `FUN_041088a0` | `0x41088a0` | 87 | pseudocode-019.md | disasm-019.md | FUN_04882e40, FUN_04882eb0, FUN_04882ef0, FUN_04891200 |
| 2 | `FUN_04134310` | `0x4134310` | 263 | pseudocode-020.md | disasm-020.md | FUN_0d33fd60 |
| 2 | `FUN_0412f8c0` | `0x412f8c0` | 403 | pseudocode-021.md | disasm-021.md | FUN_0d33fd60 |
| 2 | `ldexp` | `0xeee3a30` | 6 | pseudocode-022.md | disasm-022.md | FUN_0d33fd60 |
| 2 | `FUN_0d345720` | `0xd345720` | 14 | pseudocode-023.md | disasm-023.md | FUN_0d33fd60 |
| 2 | `FUN_0d345700` | `0xd345700` | 14 | pseudocode-024.md | disasm-024.md | FUN_0d33fd60 |
| 2 | `FUN_049cd2d0` | `0x49cd2d0` | 14 | pseudocode-025.md | disasm-025.md | FUN_0d33fd60 |
| 2 | `FUN_0d345710` | `0xd345710` | 14 | pseudocode-026.md | disasm-026.md | FUN_0d33fd60 |
| 3 | `thunk_FUN_0eeb5980` | `0xeeb5fa0` | 5 | pseudocode-027.md | disasm-027.md | FUN_0eeddcf0 |
| 3 | `FUN_04891200` | `0x4891200` | 48 | pseudocode-028.md | disasm-028.md | FUN_0eeb5980, FUN_0eeddcf0 |
| 3 | `FUN_04882e90` | `0x4882e90` | 25 | pseudocode-029.md | disasm-029.md | FUN_04882e40 |
| 3 | `FUN_04108780` | `0x4108780` | 12 | pseudocode-030.md | disasm-030.md | FUN_04882e40, FUN_04882ef0 |
| 3 | `FUN_04108d40` | `0x4108d40` | 411 | pseudocode-031.md | disasm-031.md | FUN_041086b0 |
| 3 | `FUN_04109e60` | `0x4109e60` | 82 | pseudocode-032.md | disasm-032.md | FUN_041086b0, FUN_04108700, FUN_04882e20 |
| 3 | `FUN_04882e20` | `0x4882e20` | 12 | pseudocode-033.md | disasm-033.md | FUN_041086b0, FUN_04108700, FUN_04109e60, FUN_04109ee0 |
| 3 | `FUN_0410a090` | `0x410a090` | 22 | pseudocode-034.md | disasm-034.md | FUN_04108700, FUN_041088a0 |
| 3 | `FUN_041087a0` | `0x41087a0` | 95 | pseudocode-035.md | disasm-035.md | FUN_041088a0 |
| 3 | `_Unwind_RaiseException` | `0xeee2de0` | 6 | pseudocode-036.md | disasm-036.md | FUN_041088a0 |
| 3 | `FUN_04108700` | `0x4108700` | 115 | pseudocode-037.md | disasm-037.md | FUN_041088a0, FUN_04109ee0, FUN_04882e20 |
| 3 | `FUN_04109ee0` | `0x4109ee0` | 48 | pseudocode-038.md | disasm-038.md | FUN_041088a0, FUN_04109e60 |
| 3 | `FUN_04136630` | `0x4136630` | 863 | pseudocode-039.md | disasm-039.md | FUN_04134310 |
| 3 | `FUN_0ee32660` | `0xee32660` | 60 | pseudocode-040.md | disasm-040.md | FUN_0412f8c0, FUN_04134310 |
| 3 | `FUN_04882e30` | `0x4882e30` | 14 | pseudocode-041.md | disasm-041.md | FUN_0412f8c0, FUN_04134310 |
| 3 | `memmove` | `0xeee2ee0` | 6 | pseudocode-042.md | disasm-042.md | FUN_0412f8c0 |
| 3 | `FUN_04882ef0` | `0x4882ef0` | 73 | pseudocode-043.md | disasm-043.md | FUN_0d345700, FUN_0d345720 |
