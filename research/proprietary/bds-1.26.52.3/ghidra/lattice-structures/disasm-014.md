# FUN_04fd31ae (disassembly)

```
04fd31ae  XADD.LOCK qword ptr [RBX + 0x8],RAX
04fd31b4  TEST RAX,RAX
04fd31b7  JNZ 0x04fd31d0
04fd31b9  MOV RAX,qword ptr [RBX]
04fd31bc  MOV R14,RDI
04fd31bf  MOV RDI,RBX
04fd31c2  CALL qword ptr [RAX + 0x10]
04fd31c5  MOV RDI,RBX
04fd31c8  CALL 0x0412c2d0
04fd31cd  MOV RDI,R14
04fd31d0  LEA RAX,[0xef9bb08]
04fd31d7  MOV qword ptr [RDI],RAX
04fd31da  MOV RAX,qword ptr [RDI + 0x10]
04fd31de  TEST RAX,RAX
04fd31e1  JZ 0x04fd31f1
04fd31e3  ADD RDI,0x10
04fd31e7  ADD RSP,0x8
04fd31eb  POP RBX
04fd31ec  POP R14
04fd31ee  JMP qword ptr [RAX + 0x8]
04fd31f1  ADD RSP,0x8
04fd31f5  POP RBX
04fd31f6  POP R14
04fd31f8  RET
```
