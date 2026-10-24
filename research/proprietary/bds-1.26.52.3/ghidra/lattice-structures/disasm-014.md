# FUN_0c8fa2a0 (disassembly)

```
0c8fa23f  MOV qword ptr [R13],RSI
0c8fa243  ADD R13,0x8
0c8fa247  MOV RBP,R13
0c8fa24a  MOV R13,qword ptr [RSP + 0x20]
0c8fa24f  MOV RAX,qword ptr [RSP + 0x40]
0c8fa254  MOV qword ptr [RAX + 0x30],RBP
0c8fa258  MOV RBP,RAX
0c8fa25b  INC R14
0c8fa25e  MOV RAX,qword ptr [RBX + 0x40]
0c8fa262  MOV RCX,qword ptr [RBX + 0x48]
0c8fa266  SUB RCX,RAX
0c8fa269  SHR RCX,0x3
0c8fa26d  MOVSXD RCX,ECX
0c8fa270  CMP R14,RCX
0c8fa273  JGE 0x0c8fa3d8
0c8fa279  MOV R15,qword ptr [RAX + R14*0x8]
0c8fa27d  TEST R15,R15
0c8fa280  JZ 0x0c8fa25b
0c8fa282  MOV RAX,qword ptr [R15]
0c8fa285  MOV RDI,R15
0c8fa288  CALL qword ptr [RAX + 0x30]
0c8fa28b  CMP AL,0xa
0c8fa28d  JNZ 0x0c8fa25b
0c8fa28f  MOV qword ptr [RSP],R12
0c8fa293  MOV qword ptr [RSP + 0x8],0x4
0c8fa29c  LEA RDI,[R15 + 0x8]
0c8fa2a0  MOV RSI,RSP
0c8fa2a3  CALL 0x0d6c97a0
0c8fa2a8  ADD R15,0x10
0c8fa2ac  CMP RAX,R15
0c8fa2af  JZ 0x0c8fa2c0
0c8fa2b1  CMP dword ptr [RAX + 0x60],0x4
0c8fa2b5  JNZ 0x0c8fa2c0
0c8fa2b7  MOV RSI,qword ptr [RAX + 0x40]
0c8fa2bb  JMP 0x0c8fa2c2
0c8fa2c0  XOR ESI,ESI
0c8fa2c2  MOV RCX,0x1fffffffffffffff
0c8fa2cc  MOV R13,qword ptr [RBP + 0x30]
0c8fa2d0  MOV R15,qword ptr [RBP + 0x38]
0c8fa2d4  CMP R13,R15
0c8fa2d7  JC 0x0c8fa23f
0c8fa2dd  MOV RDX,qword ptr [RBP + 0x28]
0c8fa2e1  SUB R13,RDX
0c8fa2e4  MOV R12,R13
0c8fa2e7  SAR R12,0x3
0c8fa2eb  LEA RAX,[R12 + 0x1]
0c8fa2f0  CMP RAX,RCX
0c8fa2f3  JA 0x0c8fa543
0c8fa2f9  MOV qword ptr [RSP + 0x30],RSI
0c8fa2fe  MOV qword ptr [RSP + 0x38],RDX
0c8fa303  SUB R15,RDX
0c8fa306  MOV RBP,R15
0c8fa309  SAR RBP,0x2
0c8fa30d  CMP RBP,RAX
0c8fa310  CMOVBE RBP,RAX
0c8fa314  MOV RAX,0x7ffffffffffffff8
0c8fa31e  CMP R15,RAX
0c8fa321  CMOVNC RBP,RCX
0c8fa325  CMP RBP,RCX
0c8fa328  JA 0x0c8fa53e
0c8fa32e  LEA RBX,[RBP*0x8]
0c8fa336  MOV RAX,qword ptr [0x0f5463b0]
0c8fa33d  LEA RDI,[0xf5463b0]
0c8fa344  MOV RSI,RBX
0c8fa347  CALL qword ptr [RAX + 0x10]
0c8fa34a  TEST RAX,RAX
0c8fa34d  JZ 0x0c8fa3c3
0c8fa34f  LEA RBX,[RAX + R13*0x1]
0c8fa353  LEA RCX,[RAX + RBP*0x8]
0c8fa357  MOV qword ptr [RSP + 0x28],RCX
0c8fa35c  MOV RCX,qword ptr [RSP + 0x30]
0c8fa361  MOV qword ptr [RAX + R13*0x1],RCX
0c8fa365  LEA RBP,[RAX + R13*0x1]
0c8fa369  ADD RBP,0x8
0c8fa36d  SHL R12,0x3
0c8fa371  SUB RBX,R12
0c8fa374  MOV RDI,RBX
0c8fa377  MOV R12,qword ptr [RSP + 0x38]
0c8fa37c  MOV RSI,R12
0c8fa37f  MOV RDX,R13
0c8fa382  CALL 0x0eee2f00
0c8fa387  MOV RAX,qword ptr [RSP + 0x40]
0c8fa38c  MOV qword ptr [RAX + 0x28],RBX
0c8fa390  MOV qword ptr [RAX + 0x30],RBP
0c8fa394  MOV RCX,qword ptr [RSP + 0x28]
0c8fa399  MOV qword ptr [RAX + 0x38],RCX
0c8fa39d  TEST R12,R12
0c8fa3a0  JZ 0x0c8fa3ad
0c8fa3a2  MOV RDI,R12
0c8fa3a5  MOV RSI,R15
0c8fa3a8  CALL 0x0412a280
0c8fa3ad  MOV R13,qword ptr [RSP + 0x20]
0c8fa3b2  MOV RBX,qword ptr [RSP + 0x18]
0c8fa3b7  LEA R12,[0x1377950]
0c8fa3be  JMP 0x0c8fa24f
0c8fa3c3  MOV RDI,RBX
0c8fa3c6  XOR ESI,ESI
0c8fa3c8  MOV RBX,RAX
0c8fa3cb  CALL 0x0eec74c0
0c8fa3d0  MOV RAX,RBX
0c8fa3d3  JMP 0x0c8fa34f
0c8fa3d8  LEA RAX,[0x1d38651]
0c8fa3df  MOV qword ptr [RSP],RAX
0c8fa3e3  MOV qword ptr [RSP + 0x8],0x12
0c8fa3ec  MOV RSI,RSP
0c8fa3ef  MOV RDI,R13
0c8fa3f2  CALL 0x0d6c97a0
0c8fa3f7  MOV RBX,qword ptr [RSP + 0x48]
0c8fa3fc  CMP RAX,RBX
0c8fa3ff  JZ 0x0c8fa40c
0c8fa401  CMP dword ptr [RAX + 0x60],0x3
0c8fa405  JNZ 0x0c8fa40c
0c8fa407  MOV EAX,dword ptr [RAX + 0x40]
0c8fa40a  JMP 0x0c8fa40e
0c8fa40c  XOR EAX,EAX
0c8fa40e  MOV dword ptr [RBP + 0x50],EAX
0c8fa411  LEA RAX,[0x1d38669]
0c8fa418  MOV qword ptr [RSP],RAX
0c8fa41c  MOV qword ptr [RSP + 0x8],0x12
0c8fa425  MOV RSI,RSP
0c8fa428  MOV RDI,R13
0c8fa42b  CALL 0x0d6c97a0
0c8fa430  CMP RAX,RBX
0c8fa433  JZ 0x0c8fa441
0c8fa435  CMP dword ptr [RAX + 0x60],0x4
0c8fa439  JNZ 0x0c8fa441
0c8fa43b  MOV RAX,qword ptr [RAX + 0x40]
0c8fa43f  JMP 0x0c8fa443
0c8fa441  XOR EAX,EAX
0c8fa443  MOV qword ptr [RBP + 0x48],RAX
0c8fa447  LEA RAX,[0x1d38681]
0c8fa44e  MOV qword ptr [RSP],RAX
0c8fa452  MOV qword ptr [RSP + 0x8],0xf
0c8fa45b  MOV RSI,RSP
0c8fa45e  MOV RDI,R13
0c8fa461  CALL 0x0d6c97a0
0c8fa466  CMP RAX,RBX
0c8fa469  JZ 0x0c8fa477
0c8fa46b  CMP dword ptr [RAX + 0x60],0x4
0c8fa46f  JNZ 0x0c8fa477
0c8fa471  MOV RAX,qword ptr [RAX + 0x40]
0c8fa475  JMP 0x0c8fa479
0c8fa477  XOR EAX,EAX
0c8fa479  MOV qword ptr [RBP + 0x40],RAX
0c8fa47d  LEA RAX,[0x1d38699]
0c8fa484  MOV qword ptr [RSP],RAX
0c8fa488  MOV qword ptr [RSP + 0x8],0x13
0c8fa491  MOV RSI,RSP
0c8fa494  MOV RDI,R13
0c8fa497  CALL 0x0d6c97a0
0c8fa49c  CMP RAX,RBX
0c8fa49f  JZ 0x0c8fa4b4
0c8fa4a1  MOV RDX,RAX
0c8fa4a4  ADD RDX,0x38
0c8fa4a8  XOR ECX,ECX
0c8fa4aa  CMP dword ptr [RAX + 0x60],0x8
0c8fa4ae  CMOVZ RCX,RDX
0c8fa4b2  JMP 0x0c8fa4b6
0c8fa4b4  XOR ECX,ECX
0c8fa4b6  LEA RAX,[RCX + 0x8]
0c8fa4ba  TEST RCX,RCX
0c8fa4bd  LEA RCX,[0x1e79d90]
0c8fa4c4  CMOVZ RAX,RCX
0c8fa4c8  LEA RDI,[RBP + 0x60]
0c8fa4cc  CMP RDI,RAX
0c8fa4cf  JZ 0x0c8fa517
0c8fa4d1  MOVZX ECX,byte ptr [RAX]
0c8fa4d4  TEST byte ptr [RDI],0x1
0c8fa4d7  JNZ 0x0c8fa4ee
0c8fa4d9  TEST CL,0x1
0c8fa4dc  JNZ 0x0c8fa50a
0c8fa4de  MOV RCX,qword ptr [RAX + 0x10]
0c8fa4e2  MOV qword ptr [RDI + 0x10],RCX
0c8fa4e6  MOVUPS XMM0,xmmword ptr [RAX]
0c8fa4e9  MOVUPS xmmword ptr [RDI],XMM0
0c8fa4ec  JMP 0x0c8fa517
0c8fa4ee  LEA RSI,[RAX + 0x1]
0c8fa4f2  MOV EDX,ECX
0c8fa4f4  SHR EDX,0x1
0c8fa4f6  TEST CL,0x1
0c8fa4f9  CMOVNZ RSI,qword ptr [RAX + 0x10]
0c8fa4fe  CMOVNZ RDX,qword ptr [RAX + 0x8]
0c8fa503  CALL 0x04885120
0c8fa508  JMP 0x0c8fa517
0c8fa50a  MOV RDX,qword ptr [RAX + 0x8]
0c8fa50e  MOV RSI,qword ptr [RAX + 0x10]
0c8fa512  CALL 0x04885070
0c8fa517  MOV byte ptr [RBP + 0x138],0x1
0c8fa51e  ADD RSP,0x58
0c8fa522  POP RBX
0c8fa523  POP R12
0c8fa525  POP R13
0c8fa527  POP R14
0c8fa529  POP R15
0c8fa52b  POP RBP
0c8fa52c  RET
0c8fa53e  CALL 0x04882eb0
0c8fa543  CALL 0x04aa1db0
0c8fa548  CALL 0x04931450
0c8fa54d  MOV RBX,RAX
0c8fa550  MOV ESI,0xd8
0c8fa555  MOV RDI,R12
0c8fa558  CALL 0x0412a280
0c8fa55d  MOV RDI,RBX
0c8fa560  CALL 0x0eee2d70
0c8fa565  INT3
```
