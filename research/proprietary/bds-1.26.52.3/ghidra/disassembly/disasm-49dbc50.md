# 49dbc50

```asm
049dbc50  PUSH RBP
049dbc51  PUSH R15
049dbc53  PUSH R14
049dbc55  PUSH R13
049dbc57  PUSH R12
049dbc59  PUSH RBX
049dbc5a  SUB RSP,0x18
049dbc5e  MOV RBX,qword ptr [RDI]
049dbc61  MOV RBP,qword ptr [RDI + 0x8]
049dbc65  MOV R12,RBP
049dbc68  SUB R12,RBX
049dbc6b  MOV R14,R12
049dbc6e  SAR R14,0x4
049dbc72  LEA RAX,[R14 + 0x1]
049dbc76  MOV RCX,RAX
049dbc79  SHR RCX,0x3c
049dbc7d  JNZ 0x049dbdd5
049dbc83  MOV RCX,0xfffffffffffffff
049dbc8d  MOV qword ptr [RSP],RDI
049dbc91  MOV RDI,qword ptr [RDI + 0x10]
049dbc95  SUB RDI,RBX
049dbc98  MOV R15,RDI
049dbc9b  SAR R15,0x3
049dbc9f  CMP R15,RAX
049dbca2  CMOVBE R15,RAX
049dbca6  MOV RAX,0x7ffffffffffffff0
049dbcb0  CMP RDI,RAX
049dbcb3  CMOVNC R15,RCX
049dbcb7  CMP R15,RCX
049dbcba  JA 0x049dbdda
049dbcc0  MOV qword ptr [RSP + 0x8],RSI
049dbcc5  MOV qword ptr [RSP + 0x10],RDX
049dbcca  SHL R15,0x4
049dbcce  MOV RAX,qword ptr [0x0f5463b0]
049dbcd5  LEA RDI,[0xf5463b0]
049dbcdc  MOV RSI,R15
049dbcdf  CALL qword ptr [RAX + 0x10]
049dbce2  TEST RAX,RAX
049dbce5  JZ 0x049dbdc0
049dbceb  LEA R13,[RAX + R12*0x1]
049dbcef  ADD R15,RAX
049dbcf2  MOV RCX,qword ptr [RSP + 0x8]
049dbcf7  MOVZX ECX,word ptr [RCX]
049dbcfa  MOV word ptr [RAX + R12*0x1],CX
049dbcff  MOV RDX,qword ptr [RSP + 0x10]
049dbd04  MOV RCX,qword ptr [RDX]
049dbd07  MOV qword ptr [RDX],0x0
049dbd0e  MOV qword ptr [RAX + R12*0x1 + 0x8],RCX
049dbd13  ADD R12,RAX
049dbd16  ADD R12,0x10
049dbd1a  SHL R14,0x4
049dbd1e  SUB R13,R14
049dbd21  CMP RBX,RBP
049dbd24  JZ 0x049dbd8b
049dbd26  XOR EAX,EAX
049dbd28  NOP dword ptr [RAX + RAX*0x1]
049dbd30  MOVZX ECX,word ptr [RBX + RAX*0x1]
049dbd34  MOV word ptr [R13 + RAX*0x1],CX
049dbd3a  MOV RCX,qword ptr [RBX + RAX*0x1 + 0x8]
049dbd3f  MOV qword ptr [RBX + RAX*0x1 + 0x8],0x0
049dbd48  MOV qword ptr [R13 + RAX*0x1 + 0x8],RCX
049dbd4d  LEA RCX,[RBX + RAX*0x1]
049dbd51  ADD RCX,0x10
049dbd55  ADD RAX,0x10
049dbd59  CMP RCX,RBP
049dbd5c  JNZ 0x049dbd30
049dbd5e  JMP 0x049dbd69
049dbd60  ADD RBX,0x10
049dbd64  CMP RBX,RBP
049dbd67  JZ 0x049dbd82
049dbd69  MOV RDI,qword ptr [RBX + 0x8]
049dbd6d  MOV qword ptr [RBX + 0x8],0x0
049dbd75  TEST RDI,RDI
049dbd78  JZ 0x049dbd60
049dbd7a  MOV RAX,qword ptr [RDI]
049dbd7d  CALL qword ptr [RAX + 0x8]
049dbd80  JMP 0x049dbd60
049dbd82  MOV RAX,qword ptr [RSP]
049dbd86  MOV RBX,qword ptr [RAX]
049dbd89  JMP 0x049dbd8f
049dbd8b  MOV RAX,qword ptr [RSP]
049dbd8f  MOV qword ptr [RAX],R13
049dbd92  MOV qword ptr [RAX + 0x8],R12
049dbd96  MOV RSI,qword ptr [RAX + 0x10]
049dbd9a  MOV qword ptr [RAX + 0x10],R15
049dbd9e  TEST RBX,RBX
049dbda1  JZ 0x049dbdae
049dbda3  SUB RSI,RBX
049dbda6  MOV RDI,RBX
049dbda9  CALL 0x0412a280
049dbdae  MOV RAX,R12
049dbdb1  ADD RSP,0x18
049dbdb5  POP RBX
049dbdb6  POP R12
049dbdb8  POP R13
049dbdba  POP R14
049dbdbc  POP R15
049dbdbe  POP RBP
049dbdbf  RET
049dbdc0  MOV RDI,R15
049dbdc3  XOR ESI,ESI
049dbdc5  MOV R13,RAX
049dbdc8  CALL 0x0eec74c0
049dbdcd  MOV RAX,R13
049dbdd0  JMP 0x049dbceb
049dbdd5  CALL 0x049cff50
049dbdda  CALL 0x04882eb0
049dbddf  INT3
```
