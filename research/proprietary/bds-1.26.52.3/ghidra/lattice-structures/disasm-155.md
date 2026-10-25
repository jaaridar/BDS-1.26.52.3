# FUN_0c4fac60 (disassembly)

```
0c4fac60  PUSH R14
0c4fac62  PUSH RBX
0c4fac63  SUB RSP,0x28
0c4fac67  MOV RBX,RDI
0c4fac6a  CMP qword ptr [RDI + 0x10],0x0
0c4fac6f  JNZ 0x0c4facd7
0c4fac71  MOV RAX,qword ptr [0x0f5463b0]
0c4fac78  LEA RDI,[0xf5463b0]
0c4fac7f  MOV ESI,0x20
0c4fac84  CALL qword ptr [RAX + 0x10]
0c4fac87  TEST RAX,RAX
0c4fac8a  JZ 0x0c4fad24
0c4fac90  LEA RCX,[0xf47e0b0]
0c4fac97  MOV qword ptr [RAX],RCX
0c4fac9a  MOV RCX,RAX
0c4fac9d  ADD RCX,0x10
0c4faca1  XORPS XMM0,XMM0
0c4faca4  MOVUPS xmmword ptr [RAX + 0x10],XMM0
0c4faca8  MOV qword ptr [RAX + 0x8],RCX
0c4facac  MOV qword ptr [RSP + 0x8],RAX
0c4facb1  LEA RSI,[RSP + 0x8]
0c4facb6  MOV RDI,RBX
0c4facb9  CALL 0x0c44fd30
0c4facbe  MOV RDI,qword ptr [RSP + 0x8]
0c4facc3  MOV qword ptr [RSP + 0x8],0x0
0c4faccc  TEST RDI,RDI
0c4faccf  JZ 0x0c4facd7
0c4facd1  MOV RAX,qword ptr [RDI]
0c4facd4  CALL qword ptr [RAX + 0x8]
0c4facd7  MOV RDI,qword ptr [RBX + 0x10]
0c4facdb  MOV RAX,qword ptr [0x01ce4920]
0c4face2  MOV qword ptr [RSP + 0x20],RAX
0c4face7  MOVUPS XMM0,xmmword ptr [0x01ce4910]
0c4facee  MOVAPS xmmword ptr [RSP + 0x10],XMM0
0c4facf3  LEA RSI,[RSP + 0x10]
0c4facf8  MOV EDX,0x1
0c4facfd  CALL 0x0d6bbef0
0c4fad02  TEST byte ptr [RSP + 0x10],0x1
0c4fad07  JZ 0x0c4fad1c
0c4fad09  MOV RSI,qword ptr [RSP + 0x10]
0c4fad0e  MOV RDI,qword ptr [RSP + 0x20]
0c4fad13  AND RSI,-0x2
0c4fad17  CALL 0x0412a280
0c4fad1c  ADD RSP,0x28
0c4fad20  POP RBX
0c4fad21  POP R14
0c4fad23  RET
0c4fad24  MOV EDI,0x20
0c4fad29  XOR ESI,ESI
0c4fad2b  MOV R14,RAX
0c4fad2e  CALL 0x0eec74c0
0c4fad33  MOV RAX,R14
0c4fad36  JMP 0x0c4fac90
```
