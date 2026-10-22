# 48aeca0

```asm
048aeca0  PUSH R15
048aeca2  PUSH R14
048aeca4  PUSH R12
048aeca6  PUSH RBX
048aeca7  PUSH RAX
048aeca8  MOV RBX,RDI
048aecab  TEST byte ptr [RDI + 0x88],0x1
048aecb2  JZ 0x048aeccb
048aecb4  MOV RSI,qword ptr [RBX + 0x88]
048aecbb  MOV RDI,qword ptr [RBX + 0x98]
048aecc2  AND RSI,-0x2
048aecc6  CALL 0x0412a280
048aeccb  MOV R15,qword ptr [RBX + 0x70]
048aeccf  TEST R15,R15
048aecd2  JZ 0x048aed53
048aecd4  MOV RDI,qword ptr [RBX + 0x78]
048aecd8  MOV RAX,R15
048aecdb  CMP R15,RDI
048aecde  JNZ 0x048aed05
048aece0  JMP 0x048aed3d
048aecf0  LEA R14,[RDI + -0x58]
048aecf4  ADD RDI,-0x48
048aecf8  CALL 0x04167a40
048aecfd  MOV RDI,R14
048aed00  CMP R14,R15
048aed03  JZ 0x048aed39
048aed05  MOV R14,qword ptr [RDI + -0x18]
048aed09  TEST R14,R14
048aed0c  JZ 0x048aecf0
048aed0e  MOV RAX,-0x1
048aed15  XADD.LOCK qword ptr [R14 + 0x8],RAX
048aed1b  TEST RAX,RAX
048aed1e  JNZ 0x048aecf0
048aed20  MOV RAX,qword ptr [R14]
048aed23  MOV R12,RDI
048aed26  MOV RDI,R14
048aed29  CALL qword ptr [RAX + 0x10]
048aed2c  MOV RDI,R14
048aed2f  CALL 0x0412c2d0
048aed34  MOV RDI,R12
048aed37  JMP 0x048aecf0
048aed39  MOV RAX,qword ptr [RBX + 0x70]
048aed3d  MOV qword ptr [RBX + 0x78],R15
048aed41  MOV RSI,qword ptr [RBX + 0x80]
048aed48  SUB RSI,RAX
048aed4b  MOV RDI,RAX
048aed4e  CALL 0x0412a280
048aed53  LEA RDI,[RBX + 0x38]
048aed57  CALL 0x048aff40
048aed5c  MOV R14,qword ptr [RBX + 0x20]
048aed60  TEST R14,R14
048aed63  JZ 0x048aede9
048aed69  MOV R15,qword ptr [RBX + 0x28]
048aed6d  MOV RDI,R14
048aed70  CMP R14,R15
048aed73  JNZ 0x048aed89
048aed75  JMP 0x048aedd9
048aed80  ADD R15,-0x38
048aed84  CMP R14,R15
048aed87  JZ 0x048aedd5
048aed89  MOV RDI,qword ptr [R15 + -0x20]
048aed8d  TEST RDI,RDI
048aed90  JZ 0x048aedb5
048aed92  NOP word ptr CS:[RAX + RAX*0x1]
048aeda0  MOV R12,qword ptr [RDI]
048aeda3  MOV ESI,0x18
048aeda8  CALL 0x0412a280
048aedad  MOV RDI,R12
048aedb0  TEST R12,R12
048aedb3  JNZ 0x048aeda0
048aedb5  MOV RDI,qword ptr [R15 + -0x30]
048aedb9  MOV qword ptr [R15 + -0x30],0x0
048aedc1  TEST RDI,RDI
048aedc4  JZ 0x048aed80
048aedc6  MOV RSI,qword ptr [R15 + -0x28]
048aedca  SHL RSI,0x3
048aedce  CALL 0x0412a280
048aedd3  JMP 0x048aed80
048aedd5  MOV RDI,qword ptr [RBX + 0x20]
048aedd9  MOV qword ptr [RBX + 0x28],R14
048aeddd  MOV RSI,qword ptr [RBX + 0x30]
048aede1  SUB RSI,RDI
048aede4  CALL 0x0412a280
048aede9  TEST byte ptr [RBX + 0x8],0x1
048aeded  JZ 0x048aee00
048aedef  MOV RSI,qword ptr [RBX + 0x8]
048aedf3  MOV RDI,qword ptr [RBX + 0x18]
048aedf7  AND RSI,-0x2
048aedfb  CALL 0x0412a280
048aee00  MOV RDI,qword ptr [RBX]
048aee03  MOV qword ptr [RBX],0x0
048aee0a  TEST RDI,RDI
048aee0d  JZ 0x048aee20
048aee0f  MOV RAX,qword ptr [RDI]
048aee12  ADD RSP,0x8
048aee16  POP RBX
048aee17  POP R12
048aee19  POP R14
048aee1b  POP R15
048aee1d  JMP qword ptr [RAX + 0x8]
048aee20  ADD RSP,0x8
048aee24  POP RBX
048aee25  POP R12
048aee27  POP R14
048aee29  POP R15
048aee2b  RET
```
