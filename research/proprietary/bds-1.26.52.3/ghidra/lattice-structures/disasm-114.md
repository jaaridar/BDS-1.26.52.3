# FUN_0eebe810 (disassembly)

```
0eebe810  PUSH R15
0eebe812  PUSH R14
0eebe814  PUSH R13
0eebe816  PUSH R12
0eebe818  PUSH RBX
0eebe819  MOV RBX,RDI
0eebe81c  MOV R15,qword ptr [RDI + 0x8]
0eebe820  MOV R12,qword ptr [RDI + 0x10]
0eebe824  CMP R15,R12
0eebe827  JZ 0x0eebe880
0eebe829  MOV R13,-0xff000000000001
0eebe833  LEA R14,[0xf5463b0]
0eebe83a  JMP 0x0eebe851
0eebe840  MOV qword ptr [R12 + -0x10],0x0
0eebe849  MOV R12,RAX
0eebe84c  CMP R15,RAX
0eebe84f  JZ 0x0eebe880
0eebe851  LEA RAX,[R12 + -0x28]
0eebe856  MOV qword ptr [RBX + 0x10],RAX
0eebe85a  MOV RSI,qword ptr [R12 + -0x10]
0eebe85f  BT RSI,0x37
0eebe864  JNC 0x0eebe840
0eebe866  AND RSI,R13
0eebe869  ADD RSI,-0x8
0eebe86d  MOV RAX,qword ptr [0x0f5463b0]
0eebe874  MOV RDI,R14
0eebe877  CALL qword ptr [RAX + 0x28]
0eebe87a  MOV RAX,qword ptr [RBX + 0x10]
0eebe87e  JMP 0x0eebe840
0eebe880  MOV RDI,qword ptr [RBX]
0eebe883  TEST RDI,RDI
0eebe886  JZ 0x0eebe89d
0eebe888  MOV RSI,qword ptr [RBX + 0x18]
0eebe88c  SUB RSI,RDI
0eebe88f  POP RBX
0eebe890  POP R12
0eebe892  POP R13
0eebe894  POP R14
0eebe896  POP R15
0eebe898  JMP 0x0412a280
0eebe89d  POP RBX
0eebe89e  POP R12
0eebe8a0  POP R13
0eebe8a2  POP R14
0eebe8a4  POP R15
0eebe8a6  RET
```
