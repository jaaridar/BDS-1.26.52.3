# 49ccc60

```asm
049ccc60  PUSH R15
049ccc62  PUSH R14
049ccc64  PUSH R13
049ccc66  PUSH R12
049ccc68  PUSH RBX
049ccc69  MOV RBX,RSI
049ccc6c  MOV R14,RDI
049ccc6f  MOV R15,qword ptr [RDI]
049ccc72  MOV R13,qword ptr [RDI + 0x8]
049ccc76  MOV R12,R15
049ccc79  SUB R12,R13
049ccc7c  ADD R12,qword ptr [RSI + 0x8]
049ccc80  CMP R15,R13
049ccc83  JZ 0x049ccd4f
049ccc89  XOR EAX,EAX
049ccc8b  XORPS XMM0,XMM0
049ccc8e  NOP
049ccc90  MOV RCX,qword ptr [R15 + RAX*0x1]
049ccc94  MOV qword ptr [R12 + RAX*0x1],RCX
049ccc98  TEST RCX,RCX
049ccc9b  JZ 0x049ccd93
049ccca1  LEA RCX,[R15 + RAX*0x1]
049ccca5  LEA RDX,[R12 + RAX*0x1]
049ccca9  MOV RSI,qword ptr [RCX + 0x18]
049cccad  MOV qword ptr [RDX + 0x18],RSI
049cccb1  MOVUPS XMM1,xmmword ptr [RCX + 0x8]
049cccb5  MOVUPS xmmword ptr [RDX + 0x8],XMM1
049cccb9  MOVUPS xmmword ptr [RCX + 0x8],XMM0
049cccbd  MOV qword ptr [RCX + 0x18],0x0
049cccc5  MOVUPS xmmword ptr [RDX + 0x20],XMM0
049cccc9  MOV qword ptr [RDX + 0x30],0x0
049cccd1  MOVUPS XMM1,xmmword ptr [RCX + 0x20]
049cccd5  MOVUPS xmmword ptr [RDX + 0x20],XMM1
049cccd9  MOV RSI,qword ptr [RCX + 0x30]
049cccdd  MOV qword ptr [RDX + 0x30],RSI
049ccce1  MOVUPS xmmword ptr [RCX + 0x20],XMM0
049ccce5  MOV qword ptr [RCX + 0x30],0x0
049ccced  MOV ESI,dword ptr [RCX + 0x40]
049cccf0  MOV dword ptr [RDX + 0x40],ESI
049cccf3  MOV RSI,qword ptr [RCX + 0x38]
049cccf7  MOV qword ptr [RDX + 0x38],RSI
049cccfb  ADD RAX,0x48
049cccff  ADD RCX,0x48
049ccd03  CMP RCX,R13
049ccd06  JNZ 0x049ccc90
049ccd08  JMP 0x049ccd19
049ccd10  ADD R15,0x48
049ccd14  CMP R15,R13
049ccd17  JZ 0x049ccd4c
049ccd19  MOV RDI,qword ptr [R15 + 0x20]
049ccd1d  TEST RDI,RDI
049ccd20  JZ 0x049ccd32
049ccd22  MOV qword ptr [R15 + 0x28],RDI
049ccd26  MOV RSI,qword ptr [R15 + 0x30]
049ccd2a  SUB RSI,RDI
049ccd2d  CALL 0x0412a280
049ccd32  TEST byte ptr [R15 + 0x8],0x1
049ccd37  JZ 0x049ccd10
049ccd39  MOV RSI,qword ptr [R15 + 0x8]
049ccd3d  MOV RDI,qword ptr [R15 + 0x18]
049ccd41  AND RSI,-0x2
049ccd45  CALL 0x0412a280
049ccd4a  JMP 0x049ccd10
049ccd4c  MOV R15,qword ptr [R14]
049ccd4f  MOV qword ptr [RBX + 0x8],R12
049ccd53  MOV qword ptr [R14 + 0x8],R15
049ccd57  MOV RAX,qword ptr [RBX + 0x8]
049ccd5b  MOV qword ptr [R14],RAX
049ccd5e  MOV qword ptr [RBX + 0x8],R15
049ccd62  MOV RAX,qword ptr [R14 + 0x8]
049ccd66  MOV RCX,qword ptr [RBX + 0x10]
049ccd6a  MOV qword ptr [R14 + 0x8],RCX
049ccd6e  MOV qword ptr [RBX + 0x10],RAX
049ccd72  MOV RAX,qword ptr [R14 + 0x10]
049ccd76  MOV RCX,qword ptr [RBX + 0x18]
049ccd7a  MOV qword ptr [R14 + 0x10],RCX
049ccd7e  MOV qword ptr [RBX + 0x18],RAX
049ccd82  MOV RAX,qword ptr [RBX + 0x8]
049ccd86  MOV qword ptr [RBX],RAX
049ccd89  POP RBX
049ccd8a  POP R12
049ccd8c  POP R13
049ccd8e  POP R14
049ccd90  POP R15
049ccd92  RET
049ccd93  CALL 0x04890760
049ccd98  INT3
```
