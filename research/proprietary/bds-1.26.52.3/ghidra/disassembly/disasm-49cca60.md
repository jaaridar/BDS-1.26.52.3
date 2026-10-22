# 49cca60

```asm
049cca60  PUSH R15
049cca62  PUSH R14
049cca64  PUSH R13
049cca66  PUSH R12
049cca68  PUSH RBX
049cca69  SUB RSP,0x30
049cca6d  MOV RAX,0x38e38e38e38e38e
049cca77  MOV RCX,qword ptr [RDI]
049cca7a  MOV R12,qword ptr [RDI + 0x8]
049cca7e  SUB R12,RCX
049cca81  MOV R13,R12
049cca84  SAR R13,0x3
049cca88  MOV RDX,-0x71c71c71c71c71c7
049cca92  IMUL R13,RDX
049cca96  INC R13
049cca99  CMP R13,RAX
049cca9c  JA 0x049ccc33
049ccaa2  MOV R14,RSI
049ccaa5  MOV RBX,RDI
049ccaa8  MOV RSI,qword ptr [RDI + 0x10]
049ccaac  SUB RSI,RCX
049ccaaf  SAR RSI,0x3
049ccab3  IMUL RSI,RDX
049ccab7  LEA RCX,[RSI + RSI*0x1]
049ccabb  CMP RCX,R13
049ccabe  CMOVA R13,RCX
049ccac2  MOV RCX,0x1c71c71c71c71c7
049ccacc  CMP RSI,RCX
049ccacf  CMOVNC R13,RAX
049ccad3  MOV qword ptr [RSP + 0x28],RDI
049ccad8  TEST R13,R13
049ccadb  JZ 0x049ccb15
049ccadd  CMP R13,RAX
049ccae0  JA 0x049ccc38
049ccae6  LEA RAX,[R13*0x8]
049ccaee  LEA R15,[RAX + RAX*0x8]
049ccaf2  MOV RAX,qword ptr [0x0f5463b0]
049ccaf9  LEA RDI,[0xf5463b0]
049ccb00  MOV RSI,R15
049ccb03  CALL qword ptr [RAX + 0x10]
049ccb06  TEST RAX,RAX
049ccb09  JNZ 0x049ccb17
049ccb0b  MOV RDI,R15
049ccb0e  XOR ESI,ESI
049ccb10  CALL 0x0eec74c0
049ccb15  XOR EAX,EAX
049ccb17  MOV qword ptr [RSP + 0x8],RAX
049ccb1c  LEA RCX,[RAX + R12*0x1]
049ccb20  MOV qword ptr [RSP + 0x10],RCX
049ccb25  LEA RDX,[R13*0x8]
049ccb2d  ADD RDX,R13
049ccb30  LEA RDX,[RAX + RDX*0x8]
049ccb34  MOV qword ptr [RSP + 0x20],RDX
049ccb39  MOV RDX,qword ptr [R14]
049ccb3c  MOV qword ptr [RAX + R12*0x1],RDX
049ccb40  TEST RDX,RDX
049ccb43  JZ 0x049ccc2e
049ccb49  MOV RAX,qword ptr [R14 + 0x18]
049ccb4d  MOV qword ptr [RCX + 0x18],RAX
049ccb51  MOVUPS XMM0,xmmword ptr [R14 + 0x8]
049ccb56  MOVUPS xmmword ptr [RCX + 0x8],XMM0
049ccb5a  XORPS XMM0,XMM0
049ccb5d  MOVUPS xmmword ptr [R14 + 0x8],XMM0
049ccb62  MOV qword ptr [R14 + 0x18],0x0
049ccb6a  MOVUPS XMM1,xmmword ptr [R14 + 0x20]
049ccb6f  MOVUPS xmmword ptr [RCX + 0x20],XMM1
049ccb73  MOV RAX,qword ptr [R14 + 0x30]
049ccb77  MOV qword ptr [RCX + 0x30],RAX
049ccb7b  MOVUPS xmmword ptr [R14 + 0x20],XMM0
049ccb80  MOV qword ptr [R14 + 0x30],0x0
049ccb88  MOV EAX,dword ptr [R14 + 0x40]
049ccb8c  MOV dword ptr [RCX + 0x40],EAX
049ccb8f  MOV RAX,qword ptr [R14 + 0x38]
049ccb93  MOV qword ptr [RCX + 0x38],RAX
049ccb97  ADD RCX,0x48
049ccb9b  MOV qword ptr [RSP + 0x18],RCX
049ccba0  LEA RSI,[RSP + 0x8]
049ccba5  MOV RDI,RBX
049ccba8  CALL 0x049ccc60
049ccbad  MOV RBX,qword ptr [RBX + 0x8]
049ccbb1  MOV R14,qword ptr [RSP + 0x10]
049ccbb6  NOP word ptr CS:[RAX + RAX*0x1]
049ccbc0  MOV R15,qword ptr [RSP + 0x18]
049ccbc5  CMP R14,R15
049ccbc8  JZ 0x049ccc06
049ccbca  LEA RAX,[R15 + -0x48]
049ccbce  MOV qword ptr [RSP + 0x18],RAX
049ccbd3  MOV RDI,qword ptr [R15 + -0x28]
049ccbd7  TEST RDI,RDI
049ccbda  JZ 0x049ccbec
049ccbdc  MOV qword ptr [R15 + -0x20],RDI
049ccbe0  MOV RSI,qword ptr [R15 + -0x18]
049ccbe4  SUB RSI,RDI
049ccbe7  CALL 0x0412a280
049ccbec  TEST byte ptr [R15 + -0x40],0x1
049ccbf1  JZ 0x049ccbc0
049ccbf3  MOV RSI,qword ptr [R15 + -0x40]
049ccbf7  MOV RDI,qword ptr [R15 + -0x30]
049ccbfb  AND RSI,-0x2
049ccbff  CALL 0x0412a280
049ccc04  JMP 0x049ccbc0
049ccc06  MOV RDI,qword ptr [RSP + 0x8]
049ccc0b  TEST RDI,RDI
049ccc0e  JZ 0x049ccc1d
049ccc10  MOV RSI,qword ptr [RSP + 0x20]
049ccc15  SUB RSI,RDI
049ccc18  CALL 0x0412a280
049ccc1d  MOV RAX,RBX
049ccc20  ADD RSP,0x30
049ccc24  POP RBX
049ccc25  POP R12
049ccc27  POP R13
049ccc29  POP R14
049ccc2b  POP R15
049ccc2d  RET
049ccc2e  CALL 0x04890760
049ccc33  CALL 0x049cce30
049ccc38  CALL 0x04882eb0
049ccc3d  MOV RBX,RAX
049ccc40  LEA RDI,[RSP + 0x8]
049ccc45  CALL 0x049ccda0
049ccc4a  MOV RDI,RBX
049ccc4d  CALL 0x0eee2d70
049ccc52  INT3
```
