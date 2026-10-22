# 48b0bc0

```asm
048b0bc0  PUSH RBX
048b0bc1  MOV RBX,RDI
048b0bc4  TEST byte ptr [RDI + 0x90],0x1
048b0bcb  JZ 0x048b0be4
048b0bcd  MOV RSI,qword ptr [RBX + 0x90]
048b0bd4  MOV RDI,qword ptr [RBX + 0xa0]
048b0bdb  AND RSI,-0x2
048b0bdf  CALL 0x0412a280
048b0be4  MOV RDI,qword ptr [RBX + 0x78]
048b0be8  TEST RDI,RDI
048b0beb  JZ 0x048b0c03
048b0bed  MOV qword ptr [RBX + 0x80],RDI
048b0bf4  MOV RSI,qword ptr [RBX + 0x88]
048b0bfb  SUB RSI,RDI
048b0bfe  CALL 0x0412a280
048b0c03  LEA RDI,[RBX + 0x40]
048b0c07  CALL 0x048aff40
048b0c0c  TEST byte ptr [RBX + 0x28],0x1
048b0c10  JNZ 0x048b0c45
048b0c12  TEST byte ptr [RBX + 0x10],0x1
048b0c16  JNZ 0x048b0c5c
048b0c18  MOV RDI,qword ptr [RBX + 0x8]
048b0c1c  MOV qword ptr [RBX + 0x8],0x0
048b0c24  TEST RDI,RDI
048b0c27  JZ 0x048b0c2f
048b0c29  MOV RAX,qword ptr [RDI]
048b0c2c  CALL qword ptr [RAX + 0x28]
048b0c2f  MOV RDI,qword ptr [RBX]
048b0c32  MOV qword ptr [RBX],0x0
048b0c39  TEST RDI,RDI
048b0c3c  JZ 0x048b0c80
048b0c3e  MOV RAX,qword ptr [RDI]
048b0c41  POP RBX
048b0c42  JMP qword ptr [RAX + 0x8]
048b0c45  MOV RSI,qword ptr [RBX + 0x28]
048b0c49  MOV RDI,qword ptr [RBX + 0x38]
048b0c4d  AND RSI,-0x2
048b0c51  CALL 0x0412a280
048b0c56  TEST byte ptr [RBX + 0x10],0x1
048b0c5a  JZ 0x048b0c18
048b0c5c  MOV RSI,qword ptr [RBX + 0x10]
048b0c60  MOV RDI,qword ptr [RBX + 0x20]
048b0c64  AND RSI,-0x2
048b0c68  CALL 0x0412a280
048b0c6d  MOV RDI,qword ptr [RBX + 0x8]
048b0c71  MOV qword ptr [RBX + 0x8],0x0
048b0c79  TEST RDI,RDI
048b0c7c  JNZ 0x048b0c29
048b0c7e  JMP 0x048b0c2f
048b0c80  POP RBX
048b0c81  RET
```
