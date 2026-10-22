# 4a402a0  ReplacementBiomeSource<?, ?, long, ?, char, ?, ?*, short>::vslot11

```asm
04a402a0  PUSH R14
04a402a2  PUSH RBX
04a402a3  SUB RSP,0x18
04a402a7  MOV RBX,RSI
04a402aa  MOV R14,RDI
04a402ad  MOV RDI,qword ptr [RDI + 0x8]
04a402b1  MOV RAX,qword ptr [RDI]
04a402b4  CALL qword ptr [RAX + 0x58]
04a402b7  MOV ECX,dword ptr [RBX]
04a402b9  MOV EDX,dword ptr [RBX + 0x4]
04a402bc  AND ECX,0xfffffffc
04a402bf  MOV ESI,dword ptr [RBX + 0x8]
04a402c2  AND EDX,0xfffffffc
04a402c5  AND ESI,0xfffffffc
04a402c8  SHL RDX,0x20
04a402cc  OR RDX,RCX
04a402cf  MOV qword ptr [RSP + 0x8],RDX
04a402d4  MOV dword ptr [RSP + 0x10],ESI
04a402d8  LEA RDX,[RSP + 0x8]
04a402dd  MOV RDI,R14
04a402e0  MOV RSI,RAX
04a402e3  CALL 0x04a3d700
04a402e8  ADD RSP,0x18
04a402ec  POP RBX
04a402ed  POP R14
04a402ef  RET
```
