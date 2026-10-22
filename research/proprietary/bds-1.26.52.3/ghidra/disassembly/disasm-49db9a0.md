# 49db9a0

```asm
049db9a0  PUSH RBP
049db9a1  PUSH R14
049db9a3  PUSH RBX
049db9a4  SUB RSP,0x10
049db9a8  MOV RBX,RDI
049db9ab  MOVZX EAX,byte ptr [0x0f553e08]
049db9b2  TEST AL,AL
049db9b4  JZ 0x049dbab6
049db9ba  MOVZX EBP,word ptr [0x0f553e00]
049db9c1  MOV word ptr [RSP + 0x6],BP
049db9c6  MOV RAX,qword ptr [0x0f5463b0]
049db9cd  LEA RDI,[0xf5463b0]
049db9d4  MOV ESI,0x20
049db9d9  CALL qword ptr [RAX + 0x10]
049db9dc  MOV R14,RAX
049db9df  TEST RAX,RAX
049db9e2  JZ 0x049dbaa0
049db9e8  LEA RAX,[0xef4a7f8]
049db9ef  MOV qword ptr [R14],RAX
049db9f2  XORPS XMM0,XMM0
049db9f5  MOVUPS xmmword ptr [R14 + 0x8],XMM0
049db9fa  MOV qword ptr [R14 + 0x18],0x0
049dba02  MOV qword ptr [RSP + 0x8],R14
049dba07  MOV RDX,qword ptr [RBX]
049dba0a  MOV RCX,qword ptr [RBX + 0x8]
049dba0e  CMP RDX,RCX
049dba11  JZ 0x049dba2e
049dba13  NOP dword ptr CS:[RAX + RAX*0x1]
049dba20  CMP word ptr [RDX],BP
049dba23  JZ 0x049dba79
049dba25  ADD RDX,0x10
049dba29  CMP RDX,RCX
049dba2c  JNZ 0x049dba20
049dba2e  CMP RCX,qword ptr [RBX + 0x10]
049dba32  JNC 0x049dba45
049dba34  MOV word ptr [RCX],BP
049dba37  MOV qword ptr [RCX + 0x8],R14
049dba3b  ADD RCX,0x10
049dba3f  MOV qword ptr [RBX + 0x8],RCX
049dba43  JMP 0x049dba94
049dba45  LEA RSI,[RSP + 0x6]
049dba4a  LEA RDX,[RSP + 0x8]
049dba4f  MOV RDI,RBX
049dba52  CALL 0x049dbc50
049dba57  MOV RCX,qword ptr [RSP + 0x8]
049dba5c  MOV qword ptr [RBX + 0x8],RAX
049dba60  MOV qword ptr [RSP + 0x8],0x0
049dba69  TEST RCX,RCX
049dba6c  JZ 0x049dba94
049dba6e  MOV RAX,qword ptr [RCX]
049dba71  MOV RBX,R14
049dba74  MOV R14,RCX
049dba77  JMP 0x049dba8b
049dba79  MOV RBX,qword ptr [RDX + 0x8]
049dba7d  TEST RBX,RBX
049dba80  JZ 0x049dbab1
049dba82  MOV qword ptr [RSP + 0x8],0x0
049dba8b  MOV RDI,R14
049dba8e  CALL qword ptr [RAX + 0x8]
049dba91  MOV R14,RBX
049dba94  MOV RAX,R14
049dba97  ADD RSP,0x10
049dba9b  POP RBX
049dba9c  POP R14
049dba9e  POP RBP
049dba9f  RET
049dbaa0  MOV EDI,0x20
049dbaa5  XOR ESI,ESI
049dbaa7  CALL 0x0eec74c0
049dbaac  JMP 0x049db9e8
049dbab1  CALL 0x04890760
049dbab6  LEA RDI,[0xf553e08]
049dbabd  CALL 0x04108328
049dbac2  TEST EAX,EAX
049dbac4  JZ 0x049db9ba
049dbaca  MOV AX,0x1
049dbace  XADD.LOCK word ptr [0x0f556458],AX
049dbad7  MOV word ptr [0x0f553e00],AX
049dbade  LEA RDI,[0xf553e08]
049dbae5  CALL 0x0410844d
049dbaea  JMP 0x049db9ba
```
