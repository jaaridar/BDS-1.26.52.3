# FUN_0eec09c0 (disassembly)

```
0eec09c0  PUSH R15
0eec09c2  PUSH R14
0eec09c4  PUSH R12
0eec09c6  PUSH RBX
0eec09c7  PUSH RAX
0eec09c8  MOV RBX,RDI
0eec09cb  LEA R14,[RDI + 0x68]
0eec09cf  MOV RDI,R14
0eec09d2  CALL 0x0eee1380
0eec09d7  TEST RAX,RAX
0eec09da  JZ 0x0eec09e5
0eec09dc  ADD RAX,0x10
0eec09e0  JMP 0x0eec0a71
0eec09e5  MOV RAX,qword ptr [0x0f5463b0]
0eec09ec  LEA RDI,[0xf5463b0]
0eec09f3  MOV ESI,0x40
0eec09f8  CALL qword ptr [RAX + 0x10]
0eec09fb  MOV R15,RAX
0eec09fe  TEST RAX,RAX
0eec0a01  JZ 0x0eec0a7d
0eec0a03  MOV qword ptr [R15],R15
0eec0a06  MOV qword ptr [R15 + 0x8],R15
0eec0a0a  ADD RAX,0x10
0eec0a0e  XORPS XMM0,XMM0
0eec0a11  MOVUPS xmmword ptr [R15 + 0x10],XMM0
0eec0a16  MOVUPS xmmword ptr [R15 + 0x20],XMM0
0eec0a1b  MOVUPS xmmword ptr [R15 + 0x30],XMM0
0eec0a20  MOV qword ptr [RSP],RAX
0eec0a24  MOV RDI,qword ptr [RBX + 0x20]
0eec0a28  TEST RDI,RDI
0eec0a2b  JZ 0x0eec0a94
0eec0a2d  MOV R12,RAX
0eec0a30  MOV RAX,qword ptr [RDI]
0eec0a33  MOV RSI,RSP
0eec0a36  CALL qword ptr [RAX + 0x30]
0eec0a39  MOV RDI,R14
0eec0a3c  MOV RSI,R15
0eec0a3f  CALL 0x0eee1580
0eec0a44  LEA R14,[RBX + 0x40]
0eec0a48  MOV RDI,R14
0eec0a4b  CALL 0x0412d680
0eec0a50  LEA RAX,[RBX + 0x30]
0eec0a54  MOV RCX,qword ptr [RBX + 0x38]
0eec0a58  MOV qword ptr [R15 + 0x8],RCX
0eec0a5c  MOV qword ptr [R15],RAX
0eec0a5f  MOV qword ptr [RCX],R15
0eec0a62  MOV qword ptr [RBX + 0x38],R15
0eec0a66  MOV RDI,R14
0eec0a69  CALL 0x0412d6b0
0eec0a6e  MOV RAX,R12
0eec0a71  ADD RSP,0x8
0eec0a75  POP RBX
0eec0a76  POP R12
0eec0a78  POP R14
0eec0a7a  POP R15
0eec0a7c  RET
0eec0a7d  MOV EDI,0x40
0eec0a82  XOR ESI,ESI
0eec0a84  MOV R12,RAX
0eec0a87  CALL 0x0eec74c0
0eec0a8c  MOV RAX,R12
0eec0a8f  JMP 0x0eec0a03
0eec0a94  CALL 0x04891200
0eec0a99  INT3
```
