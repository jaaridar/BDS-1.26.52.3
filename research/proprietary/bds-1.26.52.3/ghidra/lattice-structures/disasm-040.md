# FUN_0eee1060 (disassembly)

```
0eee1060  MOV RCX,qword ptr [RDI]
0eee1063  MOV RDX,qword ptr [RDI + 0x8]
0eee1067  SUB RDX,RCX
0eee106a  SAR RDX,0x3
0eee106e  MOV RAX,RSI
0eee1071  SUB RAX,RDX
0eee1074  JBE 0x0eee107e
0eee1076  MOV RSI,RAX
0eee1079  JMP 0x0eee1b00
0eee107e  JNC 0x0eee1088
0eee1080  LEA RAX,[RCX + RSI*0x8]
0eee1084  MOV qword ptr [RDI + 0x8],RAX
0eee1088  RET
0eee1b00  PUSH RBP
0eee1b01  PUSH R15
0eee1b03  PUSH R14
0eee1b05  PUSH R13
0eee1b07  PUSH R12
0eee1b09  PUSH RBX
0eee1b0a  SUB RSP,0x18
0eee1b0e  MOV R12,RSI
0eee1b11  MOV RBX,RDI
0eee1b14  MOV R14,qword ptr [RDI + 0x8]
0eee1b18  MOV RDX,qword ptr [RDI + 0x10]
0eee1b1c  MOV RAX,RDX
0eee1b1f  SUB RAX,R14
0eee1b22  SAR RAX,0x3
0eee1b26  CMP RAX,RSI
0eee1b29  JNC 0x0eee1bc5
0eee1b2f  MOV RSI,qword ptr [RBX]
0eee1b32  SUB R14,RSI
0eee1b35  MOV R13,R14
0eee1b38  SAR R13,0x3
0eee1b3c  LEA RCX,[R12 + R13*0x1]
0eee1b40  MOV RAX,RCX
0eee1b43  SHR RAX,0x3d
0eee1b47  JNZ 0x0eee1c67
0eee1b4d  MOV RAX,0x1fffffffffffffff
0eee1b57  SUB RDX,RSI
0eee1b5a  MOV R15,RDX
0eee1b5d  SAR R15,0x2
0eee1b61  CMP R15,RCX
0eee1b64  CMOVBE R15,RCX
0eee1b68  MOV RCX,0x7ffffffffffffff8
0eee1b72  CMP RDX,RCX
0eee1b75  CMOVNC R15,RAX
0eee1b79  TEST R15,R15
0eee1b7c  MOV qword ptr [RSP + 0x8],RDX
0eee1b81  MOV qword ptr [RSP + 0x10],RSI
0eee1b86  JZ 0x0eee1be6
0eee1b88  CMP R15,RAX
0eee1b8b  JA 0x0eee1c6c
0eee1b91  LEA RSI,[R15*0x8]
0eee1b99  MOV RAX,qword ptr [0x0f5463b0]
0eee1ba0  LEA RDI,[0xf5463b0]
0eee1ba7  MOV qword ptr [RSP],RSI
0eee1bab  CALL qword ptr [RAX + 0x10]
0eee1bae  MOV RBP,RAX
0eee1bb1  TEST RAX,RAX
0eee1bb4  JNZ 0x0eee1be8
0eee1bb6  XOR EBP,EBP
0eee1bb8  MOV RDI,qword ptr [RSP]
0eee1bbc  XOR ESI,ESI
0eee1bbe  CALL 0x0eec74c0
0eee1bc3  JMP 0x0eee1be8
0eee1bc5  TEST R12,R12
0eee1bc8  JZ 0x0eee1be0
0eee1bca  LEA RDX,[R12*0x8]
0eee1bd2  MOV RDI,R14
0eee1bd5  XOR ESI,ESI
0eee1bd7  CALL 0x0eee2dd0
0eee1bdc  LEA R14,[R14 + R12*0x8]
0eee1be0  MOV qword ptr [RBX + 0x8],R14
0eee1be4  JMP 0x0eee1c58
0eee1be6  XOR EBP,EBP
0eee1be8  LEA R15,[R15*0x8]
0eee1bf0  ADD R15,RBP
0eee1bf3  ADD RBP,R14
0eee1bf6  LEA RDX,[R12*0x8]
0eee1bfe  MOV RDI,RBP
0eee1c01  XOR ESI,ESI
0eee1c03  CALL 0x0eee2dd0
0eee1c08  LEA R12,[R12*0x8]
0eee1c10  ADD R12,RBP
0eee1c13  SHL R13,0x3
0eee1c17  SUB RBP,R13
0eee1c1a  MOV RDI,RBP
0eee1c1d  MOV R13,qword ptr [RSP + 0x10]
0eee1c22  MOV RSI,R13
0eee1c25  MOV RDX,R14
0eee1c28  CALL 0x0eee2f00
0eee1c2d  MOV qword ptr [RBX],RBP
0eee1c30  MOV qword ptr [RBX + 0x8],R12
0eee1c34  MOV qword ptr [RBX + 0x10],R15
0eee1c38  TEST R13,R13
0eee1c3b  JZ 0x0eee1c58
0eee1c3d  MOV RDI,R13
0eee1c40  MOV RSI,qword ptr [RSP + 0x8]
0eee1c45  ADD RSP,0x18
0eee1c49  POP RBX
0eee1c4a  POP R12
0eee1c4c  POP R13
0eee1c4e  POP R14
0eee1c50  POP R15
0eee1c52  POP RBP
0eee1c53  JMP 0x0412a280
0eee1c58  ADD RSP,0x18
0eee1c5c  POP RBX
0eee1c5d  POP R12
0eee1c5f  POP R13
0eee1c61  POP R14
0eee1c63  POP R15
0eee1c65  POP RBP
0eee1c66  RET
0eee1c67  CALL 0x0eee1ae0
0eee1c6c  CALL 0x04882eb0
0eee1c71  INT3
```
