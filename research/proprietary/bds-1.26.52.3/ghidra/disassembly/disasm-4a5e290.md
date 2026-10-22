# 4a5e290  BiomeSource3d::vslot0

```asm
04a5e290  PUSH RBX
04a5e291  MOV RBX,RDI
04a5e294  LEA RAX,[0xef52f68]
04a5e29b  MOV qword ptr [RDI],RAX
04a5e29e  CMP byte ptr [RDI + 0xc8],0x1
04a5e2a5  JNZ 0x04a5e2d5
04a5e2a7  MOV RSI,qword ptr [RBX + 0x98]
04a5e2ae  TEST RSI,RSI
04a5e2b1  JZ 0x04a5e2d5
04a5e2b3  LEA RDI,[RBX + 0x98]
04a5e2ba  CALL 0x04a67380
04a5e2bf  MOV RDI,qword ptr [RBX + 0x98]
04a5e2c6  MOV RSI,qword ptr [RBX + 0xa8]
04a5e2cd  SUB RSI,RDI
04a5e2d0  CALL 0x0412a280
04a5e2d5  MOV RDI,qword ptr [RBX + 0x10]
04a5e2d9  TEST RDI,RDI
04a5e2dc  JZ 0x04a5e2ef
04a5e2de  MOV qword ptr [RBX + 0x18],RDI
04a5e2e2  MOV RSI,qword ptr [RBX + 0x20]
04a5e2e6  SUB RSI,RDI
04a5e2e9  POP RBX
04a5e2ea  JMP 0x0412a280
04a5e2ef  POP RBX
04a5e2f0  RET
```
