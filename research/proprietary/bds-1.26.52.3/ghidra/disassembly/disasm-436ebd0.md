# 436ebd0

```asm
0436ebd0  PUSH R15
0436ebd2  PUSH R14
0436ebd4  PUSH R12
0436ebd6  PUSH RBX
0436ebd7  PUSH RAX
0436ebd8  MOV RBX,RDI
0436ebdb  CMP qword ptr [RDI + 0x60],0x0
0436ebe0  JZ 0x0436ec0d
0436ebe2  LEA R15,[RBX + 0x50]
0436ebe6  MOV RAX,qword ptr [RBX + 0x50]
0436ebea  MOV R14,qword ptr [RBX + 0x58]
0436ebee  MOV RAX,qword ptr [RAX + 0x8]
0436ebf2  MOV RCX,qword ptr [R14]
0436ebf5  MOV qword ptr [RCX + 0x8],RAX
0436ebf9  MOV qword ptr [RAX],RCX
0436ebfc  MOV qword ptr [RBX + 0x60],0x0
0436ec04  CMP R14,R15
0436ec07  JNZ 0x0436ecc9
0436ec0d  CMP byte ptr [RBX + 0x138],0x1
0436ec14  JNZ 0x0436ec26
0436ec16  LEA RDI,[RBX + 0x68]
0436ec1a  CALL 0x04311f00
0436ec1f  MOV byte ptr [RBX + 0x138],0x0
0436ec26  CMP qword ptr [RBX + 0x150],0x0
0436ec2e  JZ 0x0436ec86
0436ec30  LEA R14,[RBX + 0x140]
0436ec37  MOV RAX,qword ptr [RBX + 0x140]
0436ec3e  MOV RDI,qword ptr [RBX + 0x148]
0436ec45  MOV RAX,qword ptr [RAX + 0x8]
0436ec49  MOV RCX,qword ptr [RDI]
0436ec4c  MOV qword ptr [RCX + 0x8],RAX
0436ec50  MOV qword ptr [RAX],RCX
0436ec53  MOV qword ptr [RBX + 0x150],0x0
0436ec5e  CMP RDI,R14
0436ec61  JZ 0x0436ec86
0436ec63  NOP dword ptr CS:[RAX + RAX*0x1]
0436ec70  MOV R15,qword ptr [RDI + 0x8]
0436ec74  MOV ESI,0x18
0436ec79  CALL 0x0412a280
0436ec7e  MOV RDI,R15
0436ec81  CMP R15,R14
0436ec84  JNZ 0x0436ec70
0436ec86  MOV dword ptr [RBX + 0x158],0x0
0436ec90  MOV byte ptr [RBX + 0x178],0x0
0436ec97  ADD RSP,0x8
0436ec9b  POP RBX
0436ec9c  POP R12
0436ec9e  POP R14
0436eca0  POP R15
0436eca2  RET
0436ecb0  MOV ESI,0x18
0436ecb5  MOV RDI,R14
0436ecb8  CALL 0x0412a280
0436ecbd  MOV R14,R12
0436ecc0  CMP R12,R15
0436ecc3  JZ 0x0436ec0d
0436ecc9  MOV R12,qword ptr [R14 + 0x8]
0436eccd  MOV RDI,qword ptr [R14 + 0x10]
0436ecd1  MOV qword ptr [R14 + 0x10],0x0
0436ecd9  TEST RDI,RDI
0436ecdc  JZ 0x0436ecb0
0436ecde  MOV RAX,qword ptr [RDI]
0436ece1  CALL qword ptr [RAX + 0x8]
0436ece4  JMP 0x0436ecb0
```
