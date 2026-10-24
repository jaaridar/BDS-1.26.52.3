# FUN_04e9c980 (disassembly)

```
04e9c980  PUSH RBX
04e9c981  MOV RBX,RDI
04e9c984  MOV RSI,qword ptr [RDI + 0x80]
04e9c98b  BT RSI,0x37
04e9c990  JNC 0x04e9c9b4
04e9c992  MOV RAX,-0xff000000000001
04e9c99c  AND RSI,RAX
04e9c99f  ADD RSI,-0x8
04e9c9a3  LEA RDI,[0xf5463b0]
04e9c9aa  MOV RAX,qword ptr [0x0f5463b0]
04e9c9b1  CALL qword ptr [RAX + 0x28]
04e9c9b4  MOV RAX,0x80000000000000
04e9c9be  MOV qword ptr [RBX + 0x80],0x0
04e9c9c9  MOV RSI,qword ptr [RBX + 0x78]
04e9c9cd  TEST RSI,RAX
04e9c9d0  JZ 0x04e9c9f4
04e9c9d2  MOV RAX,-0xff000000000001
04e9c9dc  AND RSI,RAX
04e9c9df  ADD RSI,-0x8
04e9c9e3  LEA RDI,[0xf5463b0]
04e9c9ea  MOV RAX,qword ptr [0x0f5463b0]
04e9c9f1  CALL qword ptr [RAX + 0x28]
04e9c9f4  MOV qword ptr [RBX + 0x78],0x0
04e9c9fc  TEST byte ptr [RBX + 0x58],0x1
04e9ca00  JZ 0x04e9ca13
04e9ca02  MOV RSI,qword ptr [RBX + 0x58]
04e9ca06  MOV RDI,qword ptr [RBX + 0x68]
04e9ca0a  AND RSI,-0x2
04e9ca0e  CALL 0x0412a280
04e9ca13  MOV RDI,qword ptr [RBX + 0x40]
04e9ca17  TEST RDI,RDI
04e9ca1a  JZ 0x04e9ca29
04e9ca1c  MOV RSI,qword ptr [RBX + 0x50]
04e9ca20  SHL RSI,0x3
04e9ca24  CALL 0x0412a280
04e9ca29  TEST byte ptr [RBX + 0x18],0x1
04e9ca2d  JNZ 0x04e9ca31
04e9ca2f  POP RBX
04e9ca30  RET
04e9ca31  MOV RSI,qword ptr [RBX + 0x18]
04e9ca35  MOV RDI,qword ptr [RBX + 0x28]
04e9ca39  AND RSI,-0x2
04e9ca3d  POP RBX
04e9ca3e  JMP 0x0412a280
```
