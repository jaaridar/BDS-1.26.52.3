# FUN_04fd3eb0 (disassembly)

```
04fd3eb0  PUSH RBP
04fd3eb1  PUSH R15
04fd3eb3  PUSH R14
04fd3eb5  PUSH R13
04fd3eb7  PUSH R12
04fd3eb9  PUSH RBX
04fd3eba  PUSH RAX
04fd3ebb  MOV RBX,RSI
04fd3ebe  MOV R14,RDI
04fd3ec1  MOV R15,qword ptr [RDI]
04fd3ec4  MOV R13,qword ptr [RDI + 0x8]
04fd3ec8  MOV R12,R15
04fd3ecb  SUB R12,R13
04fd3ece  ADD R12,qword ptr [RSI + 0x8]
04fd3ed2  CMP R15,R13
04fd3ed5  JZ 0x04fd4017
04fd3edb  XOR EBP,EBP
04fd3edd  NOP dword ptr [RAX]
04fd3ee0  MOVUPS XMM0,xmmword ptr [R15 + RBP*0x1]
04fd3ee5  MOVUPS xmmword ptr [R12 + RBP*0x1],XMM0
04fd3eea  XORPS XMM0,XMM0
04fd3eed  MOVUPS xmmword ptr [R15 + RBP*0x1],XMM0
04fd3ef2  MOVUPS xmmword ptr [R12 + RBP*0x1 + 0x20],XMM0
04fd3ef8  MOVUPS xmmword ptr [R12 + RBP*0x1 + 0x10],XMM0
04fd3efe  MOV qword ptr [R12 + RBP*0x1 + 0x30],0x0
04fd3f07  MOV RAX,qword ptr [R15 + RBP*0x1 + 0x28]
04fd3f0c  MOV qword ptr [R12 + RBP*0x1 + 0x28],RAX
04fd3f11  MOVUPS XMM0,xmmword ptr [R15 + RBP*0x1 + 0x18]
04fd3f17  MOVUPS xmmword ptr [R12 + RBP*0x1 + 0x18],XMM0
04fd3f1d  MOV word ptr [R15 + RBP*0x1 + 0x18],0x0
04fd3f25  MOV RAX,qword ptr [R15 + RBP*0x1 + 0x10]
04fd3f2a  MOV qword ptr [R12 + RBP*0x1 + 0x10],RAX
04fd3f2f  LEA RSI,[R15 + RBP*0x1]
04fd3f33  ADD RSI,0x38
04fd3f37  LEA RDI,[R12 + RBP*0x1]
04fd3f3b  ADD RDI,0x38
04fd3f3f  CALL 0x04167a20
04fd3f44  MOVUPS XMM0,xmmword ptr [R15 + RBP*0x1 + 0x40]
04fd3f4a  MOVUPS xmmword ptr [R12 + RBP*0x1 + 0x40],XMM0
04fd3f50  MOVUPS XMM0,xmmword ptr [R15 + RBP*0x1 + 0x50]
04fd3f56  MOVUPS xmmword ptr [R12 + RBP*0x1 + 0x50],XMM0
04fd3f5c  MOVUPS XMM0,xmmword ptr [R15 + RBP*0x1 + 0x60]
04fd3f62  MOVUPS xmmword ptr [R12 + RBP*0x1 + 0x60],XMM0
04fd3f68  XORPS XMM1,XMM1
04fd3f6b  MOVUPS xmmword ptr [R15 + RBP*0x1 + 0x60],XMM1
04fd3f71  MOV RAX,qword ptr [R15 + RBP*0x1 + 0x70]
04fd3f76  MOV qword ptr [R12 + RBP*0x1 + 0x70],RAX
04fd3f7b  MOVUPS XMM0,xmmword ptr [R15 + RBP*0x1 + 0x78]
04fd3f81  MOVUPS xmmword ptr [R12 + RBP*0x1 + 0x78],XMM0
04fd3f87  MOVUPS xmmword ptr [R12 + RBP*0x1 + 0x88],XMM1
04fd3f90  MOV qword ptr [R12 + RBP*0x1 + 0x98],0x0
04fd3f9c  MOVUPS XMM0,xmmword ptr [R15 + RBP*0x1 + 0x88]
04fd3fa5  MOVUPS xmmword ptr [R12 + RBP*0x1 + 0x88],XMM0
04fd3fae  MOV RAX,qword ptr [R15 + RBP*0x1 + 0x98]
04fd3fb6  MOV qword ptr [R12 + RBP*0x1 + 0x98],RAX
04fd3fbe  MOVUPS xmmword ptr [R15 + RBP*0x1 + 0x88],XMM1
04fd3fc7  MOV qword ptr [R15 + RBP*0x1 + 0x98],0x0
04fd3fd3  MOVZX EAX,word ptr [R15 + RBP*0x1 + 0xa0]
04fd3fdc  MOV word ptr [R12 + RBP*0x1 + 0xa0],AX
04fd3fe5  LEA RAX,[R15 + RBP*0x1]
04fd3fe9  ADD RAX,0xa8
04fd3fef  ADD RBP,0xa8
04fd3ff6  CMP RAX,R13
04fd3ff9  JNZ 0x04fd3ee0
04fd3fff  NOP
04fd4000  MOV RDI,R15
04fd4003  CALL 0x04fcf220
04fd4008  ADD R15,0xa8
04fd400f  CMP R15,R13
04fd4012  JNZ 0x04fd4000
04fd4014  MOV R15,qword ptr [R14]
04fd4017  MOV qword ptr [RBX + 0x8],R12
04fd401b  MOV qword ptr [R14 + 0x8],R15
04fd401f  MOV RAX,qword ptr [RBX + 0x8]
04fd4023  MOV qword ptr [R14],RAX
04fd4026  MOV qword ptr [RBX + 0x8],R15
04fd402a  MOV RAX,qword ptr [R14 + 0x8]
04fd402e  MOV RCX,qword ptr [RBX + 0x10]
04fd4032  MOV qword ptr [R14 + 0x8],RCX
04fd4036  MOV qword ptr [RBX + 0x10],RAX
04fd403a  MOV RAX,qword ptr [R14 + 0x10]
04fd403e  MOV RCX,qword ptr [RBX + 0x18]
04fd4042  MOV qword ptr [R14 + 0x10],RCX
04fd4046  MOV qword ptr [RBX + 0x18],RAX
04fd404a  MOV RAX,qword ptr [RBX + 0x8]
04fd404e  MOV qword ptr [RBX],RAX
04fd4051  ADD RSP,0x8
04fd4055  POP RBX
04fd4056  POP R12
04fd4058  POP R13
04fd405a  POP R14
04fd405c  POP R15
04fd405e  POP RBP
04fd405f  RET
```
