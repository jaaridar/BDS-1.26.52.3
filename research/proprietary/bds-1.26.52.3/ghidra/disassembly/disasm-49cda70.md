# 49cda70

```asm
049cda70  PUSH RBP
049cda71  PUSH R15
049cda73  PUSH R14
049cda75  PUSH R13
049cda77  PUSH R12
049cda79  PUSH RBX
049cda7a  SUB RSP,0x38
049cda7e  MOV RBX,RCX
049cda81  MOV qword ptr [RSP],RCX
049cda85  MOV qword ptr [RSP + 0x8],RCX
049cda8a  MOV qword ptr [RSP + 0x18],RDI
049cda8f  LEA RAX,[RSP + 0x8]
049cda94  MOV qword ptr [RSP + 0x20],RAX
049cda99  MOV RAX,RSP
049cda9c  MOV qword ptr [RSP + 0x28],RAX
049cdaa1  MOV byte ptr [RSP + 0x30],0x0
049cdaa6  CMP RSI,RDX
049cdaa9  JZ 0x049cdb51
049cdaaf  MOV R14,RDX
049cdab2  MOV R15,RSI
049cdab5  MOV R13D,0xffffffff
049cdabb  MOV EBP,0x98
049cdac0  JMP 0x049cdafc
049cdad0  LEA RAX,[R15 + 0x80]
049cdad7  MOV RCX,qword ptr [RAX + 0x10]
049cdadb  MOV qword ptr [RDI + 0x10],RCX
049cdadf  MOVUPS XMM0,xmmword ptr [RAX]
049cdae2  MOVUPS xmmword ptr [RDI],XMM0
049cdae5  ADD R15,0x98
049cdaec  MOV RBX,qword ptr [RSP]
049cdaf0  ADD RBX,RBP
049cdaf3  MOV qword ptr [RSP],RBX
049cdaf7  CMP R15,R14
049cdafa  JZ 0x049cdb51
049cdafc  MOV byte ptr [RBX],0x0
049cdaff  MOV dword ptr [RBX + 0x78],0xffffffff
049cdb06  MOV R12D,dword ptr [R15 + 0x78]
049cdb0a  CMP R12,R13
049cdb0d  JZ 0x049cdb2b
049cdb0f  MOV qword ptr [RSP + 0x10],RBX
049cdb14  LEA RDI,[RSP + 0x10]
049cdb19  MOV RSI,R15
049cdb1c  LEA RAX,[0xef4a350]
049cdb23  CALL qword ptr [RAX + R12*0x8]
049cdb27  MOV dword ptr [RBX + 0x78],R12D
049cdb2b  LEA RDI,[RBX + 0x80]
049cdb32  TEST byte ptr [R15 + 0x80],0x1
049cdb3a  JZ 0x049cdad0
049cdb3c  MOV RDX,qword ptr [R15 + 0x88]
049cdb43  MOV RSI,qword ptr [R15 + 0x90]
049cdb4a  CALL 0x0412e5e0
049cdb4f  JMP 0x049cdae5
049cdb51  MOV RAX,RBX
049cdb54  ADD RSP,0x38
049cdb58  POP RBX
049cdb59  POP R12
049cdb5b  POP R13
049cdb5d  POP R14
049cdb5f  POP R15
049cdb61  POP RBP
049cdb62  RET
```
