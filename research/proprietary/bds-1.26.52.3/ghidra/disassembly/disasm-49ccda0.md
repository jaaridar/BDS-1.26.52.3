# 49ccda0

```asm
049ccda0  PUSH R15
049ccda2  PUSH R14
049ccda4  PUSH RBX
049ccda5  MOV RBX,RDI
049ccda8  MOV R14,qword ptr [RDI + 0x8]
049ccdac  MOV R15,qword ptr [RDI + 0x10]
049ccdb0  JMP 0x049ccdc4
049ccdc0  MOV R15,qword ptr [RBX + 0x10]
049ccdc4  CMP R14,R15
049ccdc7  JZ 0x049cce04
049ccdc9  LEA RAX,[R15 + -0x48]
049ccdcd  MOV qword ptr [RBX + 0x10],RAX
049ccdd1  MOV RDI,qword ptr [R15 + -0x28]
049ccdd5  TEST RDI,RDI
049ccdd8  JZ 0x049ccdea
049ccdda  MOV qword ptr [R15 + -0x20],RDI
049ccdde  MOV RSI,qword ptr [R15 + -0x18]
049ccde2  SUB RSI,RDI
049ccde5  CALL 0x0412a280
049ccdea  TEST byte ptr [R15 + -0x40],0x1
049ccdef  JZ 0x049ccdc0
049ccdf1  MOV RSI,qword ptr [R15 + -0x40]
049ccdf5  MOV RDI,qword ptr [R15 + -0x30]
049ccdf9  AND RSI,-0x2
049ccdfd  CALL 0x0412a280
049cce02  JMP 0x049ccdc0
049cce04  MOV RDI,qword ptr [RBX]
049cce07  TEST RDI,RDI
049cce0a  JZ 0x049cce1d
049cce0c  MOV RSI,qword ptr [RBX + 0x18]
049cce10  SUB RSI,RDI
049cce13  POP RBX
049cce14  POP R14
049cce16  POP R15
049cce18  JMP 0x0412a280
049cce1d  POP RBX
049cce1e  POP R14
049cce20  POP R15
049cce22  RET
```
