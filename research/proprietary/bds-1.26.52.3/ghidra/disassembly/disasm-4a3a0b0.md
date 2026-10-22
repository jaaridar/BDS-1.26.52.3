# 4a3a0b0

```asm
04a3a0b0  PUSH RBX
04a3a0b1  MOV RBX,RDI
04a3a0b4  TEST byte ptr [RDI + 0x68],0x1
04a3a0b8  JNZ 0x04a3a0d3
04a3a0ba  TEST byte ptr [RBX + 0x48],0x1
04a3a0be  JNZ 0x04a3a0ea
04a3a0c0  TEST byte ptr [RBX + 0x30],0x1
04a3a0c4  JNZ 0x04a3a101
04a3a0c6  TEST byte ptr [RBX + 0x18],0x1
04a3a0ca  JNZ 0x04a3a118
04a3a0cc  TEST byte ptr [RBX],0x1
04a3a0cf  JNZ 0x04a3a12e
04a3a0d1  POP RBX
04a3a0d2  RET
04a3a0d3  MOV RSI,qword ptr [RBX + 0x68]
04a3a0d7  MOV RDI,qword ptr [RBX + 0x78]
04a3a0db  AND RSI,-0x2
04a3a0df  CALL 0x0412a280
04a3a0e4  TEST byte ptr [RBX + 0x48],0x1
04a3a0e8  JZ 0x04a3a0c0
04a3a0ea  MOV RSI,qword ptr [RBX + 0x48]
04a3a0ee  MOV RDI,qword ptr [RBX + 0x58]
04a3a0f2  AND RSI,-0x2
04a3a0f6  CALL 0x0412a280
04a3a0fb  TEST byte ptr [RBX + 0x30],0x1
04a3a0ff  JZ 0x04a3a0c6
04a3a101  MOV RSI,qword ptr [RBX + 0x30]
04a3a105  MOV RDI,qword ptr [RBX + 0x40]
04a3a109  AND RSI,-0x2
04a3a10d  CALL 0x0412a280
04a3a112  TEST byte ptr [RBX + 0x18],0x1
04a3a116  JZ 0x04a3a0cc
04a3a118  MOV RSI,qword ptr [RBX + 0x18]
04a3a11c  MOV RDI,qword ptr [RBX + 0x28]
04a3a120  AND RSI,-0x2
04a3a124  CALL 0x0412a280
04a3a129  TEST byte ptr [RBX],0x1
04a3a12c  JZ 0x04a3a0d1
04a3a12e  MOV RSI,qword ptr [RBX]
04a3a131  MOV RDI,qword ptr [RBX + 0x10]
04a3a135  AND RSI,-0x2
04a3a139  POP RBX
04a3a13a  JMP 0x0412a280
```
