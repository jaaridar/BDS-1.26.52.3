# 489af90

```asm
0489af90  CMP byte ptr [RDI + 0x18],0x0
0489af94  JNZ 0x0489afdf
0489af96  PUSH R14
0489af98  PUSH RBX
0489af99  PUSH RAX
0489af9a  MOV RAX,qword ptr [RDI + 0x8]
0489af9e  MOV RCX,qword ptr [RDI + 0x10]
0489afa2  MOV RBX,qword ptr [RCX]
0489afa5  MOV R14,qword ptr [RAX]
0489afa8  JMP 0x0489afb4
0489afb0  ADD RBX,-0x50
0489afb4  CMP RBX,R14
0489afb7  JZ 0x0489afd8
0489afb9  CMP byte ptr [RBX + -0x8],0x1
0489afbd  JNZ 0x0489afb0
0489afbf  TEST byte ptr [RBX + -0x30],0x1
0489afc3  JZ 0x0489afb0
0489afc5  MOV RSI,qword ptr [RBX + -0x30]
0489afc9  MOV RDI,qword ptr [RBX + -0x20]
0489afcd  AND RSI,-0x2
0489afd1  CALL 0x0412a280
0489afd6  JMP 0x0489afb0
0489afd8  ADD RSP,0x8
0489afdc  POP RBX
0489afdd  POP R14
0489afdf  RET
```
