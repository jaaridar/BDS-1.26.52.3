# FUN_04fcf220 (disassembly)

```
04fcf220  PUSH R15
04fcf222  PUSH R14
04fcf224  PUSH R12
04fcf226  PUSH RBX
04fcf227  PUSH RAX
04fcf228  MOV RBX,RDI
04fcf22b  MOV R15,qword ptr [RDI + 0x88]
04fcf232  TEST R15,R15
04fcf235  JZ 0x04fcf2d8
04fcf23b  MOV R12,qword ptr [RBX + 0x90]
04fcf242  MOV RDI,R15
04fcf245  CMP R15,R12
04fcf248  JNZ 0x04fcf259
04fcf24a  JMP 0x04fcf2c2
04fcf250  ADD R12,-0x38
04fcf254  CMP R12,R15
04fcf257  JZ 0x04fcf2bb
04fcf259  MOV R14,qword ptr [R12 + -0x8]
04fcf25e  TEST R14,R14
04fcf261  JZ 0x04fcf275
04fcf263  MOV RAX,-0x1
04fcf26a  XADD.LOCK qword ptr [R14 + 0x8],RAX
04fcf270  TEST RAX,RAX
04fcf273  JZ 0x04fcf2a0
04fcf275  TEST byte ptr [R12 + -0x30],0x1
04fcf27b  JZ 0x04fcf250
04fcf27d  MOV RSI,qword ptr [R12 + -0x30]
04fcf282  MOV RDI,qword ptr [R12 + -0x20]
04fcf287  AND RSI,-0x2
04fcf28b  CALL 0x0412a280
04fcf290  JMP 0x04fcf250
04fcf2a0  MOV RAX,qword ptr [R14]
04fcf2a3  MOV RDI,R14
04fcf2a6  CALL qword ptr [RAX + 0x10]
04fcf2a9  MOV RDI,R14
04fcf2ac  CALL 0x0412c2d0
04fcf2b1  TEST byte ptr [R12 + -0x30],0x1
04fcf2b7  JZ 0x04fcf250
04fcf2b9  JMP 0x04fcf27d
04fcf2bb  MOV RDI,qword ptr [RBX + 0x88]
04fcf2c2  MOV qword ptr [RBX + 0x90],R15
04fcf2c9  MOV RSI,qword ptr [RBX + 0x98]
04fcf2d0  SUB RSI,RDI
04fcf2d3  CALL 0x0412a280
04fcf2d8  LEA RDI,[RBX + 0x38]
04fcf2dc  MOV R14,qword ptr [RBX + 0x68]
04fcf2e0  TEST R14,R14
04fcf2e3  JZ 0x04fcf2f7
04fcf2e5  MOV RAX,-0x1
04fcf2ec  XADD.LOCK qword ptr [R14 + 0x8],RAX
04fcf2f2  TEST RAX,RAX
04fcf2f5  JZ 0x04fcf33a
04fcf2f7  CALL 0x04167a40
04fcf2fc  TEST byte ptr [RBX + 0x18],0x1
04fcf300  JZ 0x04fcf313
04fcf302  MOV RSI,qword ptr [RBX + 0x18]
04fcf306  MOV RDI,qword ptr [RBX + 0x28]
04fcf30a  AND RSI,-0x2
04fcf30e  CALL 0x0412a280
04fcf313  MOV RBX,qword ptr [RBX + 0x8]
04fcf317  TEST RBX,RBX
04fcf31a  JZ 0x04fcf32e
04fcf31c  MOV RAX,-0x1
04fcf323  XADD.LOCK qword ptr [RBX + 0x8],RAX
04fcf329  TEST RAX,RAX
04fcf32c  JZ 0x04fcf35e
04fcf32e  ADD RSP,0x8
04fcf332  POP RBX
04fcf333  POP R12
04fcf335  POP R14
04fcf337  POP R15
04fcf339  RET
04fcf33a  MOV RAX,qword ptr [R14]
04fcf33d  MOV R15,RDI
04fcf340  MOV RDI,R14
04fcf343  CALL qword ptr [RAX + 0x10]
04fcf346  MOV RDI,R14
04fcf349  CALL 0x0412c2d0
04fcf34e  MOV RDI,R15
04fcf351  CALL 0x04167a40
04fcf356  TEST byte ptr [RBX + 0x18],0x1
04fcf35a  JNZ 0x04fcf302
04fcf35c  JMP 0x04fcf313
04fcf35e  MOV RAX,qword ptr [RBX]
04fcf361  MOV RDI,RBX
04fcf364  CALL qword ptr [RAX + 0x10]
04fcf367  MOV RDI,RBX
04fcf36a  ADD RSP,0x8
04fcf36e  POP RBX
04fcf36f  POP R12
04fcf371  POP R14
04fcf373  POP R15
04fcf375  JMP 0x0412c2d0
```
