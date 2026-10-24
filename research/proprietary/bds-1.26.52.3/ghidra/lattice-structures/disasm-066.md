# FUN_04fd2990 (disassembly)

```
04fd2990  PUSH RBX
04fd2991  MOV RBX,RDI
04fd2994  MOV RSI,qword ptr [RDI + 0x80]
04fd299b  BT RSI,0x37
04fd29a0  JNC 0x04fd29c4
04fd29a2  MOV RAX,-0xff000000000001
04fd29ac  AND RSI,RAX
04fd29af  ADD RSI,-0x8
04fd29b3  LEA RDI,[0xf5463b0]
04fd29ba  MOV RAX,qword ptr [0x0f5463b0]
04fd29c1  CALL qword ptr [RAX + 0x28]
04fd29c4  MOV RAX,0x80000000000000
04fd29ce  MOV qword ptr [RBX + 0x80],0x0
04fd29d9  MOV RSI,qword ptr [RBX + 0x78]
04fd29dd  TEST RSI,RAX
04fd29e0  JZ 0x04fd2a04
04fd29e2  MOV RAX,-0xff000000000001
04fd29ec  AND RSI,RAX
04fd29ef  ADD RSI,-0x8
04fd29f3  LEA RDI,[0xf5463b0]
04fd29fa  MOV RAX,qword ptr [0x0f5463b0]
04fd2a01  CALL qword ptr [RAX + 0x28]
04fd2a04  MOV qword ptr [RBX + 0x78],0x0
04fd2a0c  TEST byte ptr [RBX + 0x58],0x1
04fd2a10  JZ 0x04fd2a23
04fd2a12  MOV RSI,qword ptr [RBX + 0x58]
04fd2a16  MOV RDI,qword ptr [RBX + 0x68]
04fd2a1a  AND RSI,-0x2
04fd2a1e  CALL 0x0412a280
04fd2a23  MOV RDI,qword ptr [RBX + 0x40]
04fd2a27  TEST RDI,RDI
04fd2a2a  JZ 0x04fd2a39
04fd2a2c  MOV RSI,qword ptr [RBX + 0x50]
04fd2a30  SHL RSI,0x3
04fd2a34  CALL 0x0412a280
04fd2a39  TEST byte ptr [RBX + 0x18],0x1
04fd2a3d  JNZ 0x04fd2a41
04fd2a3f  POP RBX
04fd2a40  RET
04fd2a41  MOV RSI,qword ptr [RBX + 0x18]
04fd2a45  MOV RDI,qword ptr [RBX + 0x28]
04fd2a49  AND RSI,-0x2
04fd2a4d  POP RBX
04fd2a4e  JMP 0x0412a280
```
