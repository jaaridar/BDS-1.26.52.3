# 412c2d0

```asm
0412c2d0  MOV RAX,qword ptr [RDI + 0x10]
0412c2d4  TEST RAX,RAX
0412c2d7  JZ 0x0412c2ec
0412c2d9  MOV RAX,-0x1
0412c2e0  XADD.LOCK qword ptr [RDI + 0x10],RAX
0412c2e6  TEST RAX,RAX
0412c2e9  JZ 0x0412c2ec
0412c2eb  RET
0412c2ec  MOV RAX,qword ptr [RDI]
0412c2ef  JMP qword ptr [RAX + 0x20]
```
