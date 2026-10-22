# 48aff40

```asm
048aff40  PUSH R15
048aff42  PUSH R14
048aff44  PUSH RBX
048aff45  MOV RBX,RDI
048aff48  MOV R14,qword ptr [RDI + 0x18]
048aff4c  TEST R14,R14
048aff4f  JZ 0x048affa6
048aff51  MOV R15,qword ptr [RBX + 0x20]
048aff55  MOV RDI,R14
048aff58  CMP R14,R15
048aff5b  JNZ 0x048aff69
048aff5d  JMP 0x048aff96
048aff60  ADD R15,-0x50
048aff64  CMP R15,R14
048aff67  JZ 0x048aff92
048aff69  MOV RAX,qword ptr [R15 + -0x10]
048aff6d  TEST RAX,RAX
048aff70  JZ 0x048aff78
048aff72  LEA RDI,[R15 + -0x28]
048aff76  CALL RAX
048aff78  TEST byte ptr [R15 + -0x48],0x1
048aff7d  JZ 0x048aff60
048aff7f  MOV RSI,qword ptr [R15 + -0x48]
048aff83  MOV RDI,qword ptr [R15 + -0x38]
048aff87  AND RSI,-0x2
048aff8b  CALL 0x0412a280
048aff90  JMP 0x048aff60
048aff92  MOV RDI,qword ptr [RBX + 0x18]
048aff96  MOV qword ptr [RBX + 0x20],R14
048aff9a  MOV RSI,qword ptr [RBX + 0x28]
048aff9e  SUB RSI,RDI
048affa1  CALL 0x0412a280
048affa6  MOV RDI,qword ptr [RBX]
048affa9  TEST RDI,RDI
048affac  JZ 0x048affc3
048affae  MOV qword ptr [RBX + 0x8],RDI
048affb2  MOV RSI,qword ptr [RBX + 0x10]
048affb6  SUB RSI,RDI
048affb9  POP RBX
048affba  POP R14
048affbc  POP R15
048affbe  JMP 0x0412a280
048affc3  POP RBX
048affc4  POP R14
048affc6  POP R15
048affc8  RET
```
