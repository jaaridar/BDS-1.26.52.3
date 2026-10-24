# FUN_04fbd340 (disassembly)

```
04fbd340  PUSH RBP
04fbd341  PUSH R15
04fbd343  PUSH R14
04fbd345  PUSH R13
04fbd347  PUSH R12
04fbd349  PUSH RBX
04fbd34a  SUB RSP,0x108
04fbd351  MOV dword ptr [RSP + 0x4c],R8D
04fbd356  MOV R15,RCX
04fbd359  MOV R14,RDX
04fbd35c  MOV qword ptr [RSP + 0x40],RSI
04fbd361  MOV RAX,qword ptr [RDI + 0xc0]
04fbd368  MOV qword ptr [RSP + 0xd0],RDI
04fbd370  MOV RCX,qword ptr [RDI + 0xb8]
04fbd377  SUB RAX,RCX
04fbd37a  JZ 0x04fbd65a
04fbd380  SAR RAX,0x3
04fbd384  MOV RCX,-0x30c30c30c30c30c3
04fbd38e  IMUL RCX,RAX
04fbd392  MOV qword ptr [RSP + 0xc8],RCX
04fbd39a  LEA RAX,[R14 + 0x1]
04fbd39e  MOV qword ptr [RSP + 0x38],RAX
04fbd3a3  XOR R13D,R13D
04fbd3a6  JMP 0x04fbd3c1
04fbd3b0  INC R13
04fbd3b3  CMP R13,qword ptr [RSP + 0xc8]
04fbd3bb  JZ 0x04fbd65a
04fbd3c1  MOV RAX,qword ptr [RSP + 0xd0]
04fbd3c9  MOV RBX,qword ptr [RAX + 0xb8]
04fbd3d0  IMUL R12,R13,0xa8
04fbd3d7  LEA RCX,[RBX + R12*0x1]
04fbd3db  ADD RCX,0x38
04fbd3df  MOVZX EAX,byte ptr [R14]
04fbd3e3  MOV ESI,EAX
04fbd3e5  SHR ESI,0x1
04fbd3e7  TEST AL,0x1
04fbd3e9  MOV RDI,qword ptr [R14 + 0x10]
04fbd3ed  CMOVNZ RSI,qword ptr [R14 + 0x8]
04fbd3f2  CMOVZ RDI,qword ptr [RSP + 0x38]
04fbd3f8  ADD RSI,RDI
04fbd3fb  LEA RAX,[RSP + 0x80]
04fbd403  XORPS XMM0,XMM0
04fbd406  MOVUPS xmmword ptr [RAX],XMM0
04fbd409  MOV byte ptr [RAX + 0x10],0x0
04fbd40d  MOVUPS xmmword ptr [RAX + 0x18],XMM0
04fbd411  MOV byte ptr [RAX + 0x28],0x0
04fbd415  MOV byte ptr [RSP + 0xb0],0x0
04fbd41d  MOV qword ptr [RSP + 0xb8],0x0
04fbd429  MOVAPS xmmword ptr [RSP + 0x50],XMM0
04fbd42e  MOVAPS xmmword ptr [RSP + 0x60],XMM0
04fbd433  MOVUPS xmmword ptr [RSP + 0x69],XMM0
04fbd438  LEA RDX,[RSP + 0x50]
04fbd43d  XOR R8D,R8D
04fbd440  CALL 0x04af20a0
04fbd445  MOV EBP,EAX
04fbd447  MOV RDI,qword ptr [RSP + 0x50]
04fbd44c  TEST RDI,RDI
04fbd44f  JZ 0x04fbd463
04fbd451  MOV qword ptr [RSP + 0x58],RDI
04fbd456  MOV RSI,qword ptr [RSP + 0x60]
04fbd45b  SUB RSI,RDI
04fbd45e  CALL 0x0412a280
04fbd463  TEST BPL,BPL
04fbd466  JZ 0x04fbd3b0
04fbd46c  ADD RBX,R12
04fbd46f  MOV R12,qword ptr [RBX + 0x88]
04fbd476  MOV RBP,qword ptr [RBX + 0x90]
04fbd47d  CMP R12,RBP
04fbd480  JZ 0x04fbd4f9
04fbd482  NOP word ptr CS:[RAX + RAX*0x1]
04fbd490  MOV RDI,qword ptr [R12 + 0x28]
04fbd495  MOV RAX,qword ptr [RDI]
04fbd498  MOV RSI,R15
04fbd49b  CALL qword ptr [RAX + 0x10]
04fbd49e  TEST AL,AL
04fbd4a0  JNZ 0x04fbd4b0
04fbd4a2  ADD R12,0x38
04fbd4a6  CMP R12,RBP
04fbd4a9  JNZ 0x04fbd490
04fbd4ab  JMP 0x04fbd4f9
04fbd4b0  MOV RBP,qword ptr [R12 + 0x28]
04fbd4b5  TEST RBP,RBP
04fbd4b8  JZ 0x04fbd4f9
04fbd4ba  MOV RAX,qword ptr [RBP + 0x10]
04fbd4be  TEST RAX,RAX
04fbd4c1  JZ 0x04fbd4d5
04fbd4c3  LEA RDI,[RBP + 0x10]
04fbd4c7  MOV RSI,R15
04fbd4ca  CALL qword ptr [RAX + 0x10]
04fbd4cd  TEST AL,AL
04fbd4cf  JZ 0x04fbd3b0
04fbd4d5  MOV RAX,qword ptr [RSP + 0x40]
04fbd4da  MOV RAX,qword ptr [RAX + 0x40]
04fbd4de  MOV RDX,R13
04fbd4e1  MOV ESI,0x1
04fbd4e6  MOV ECX,R13D
04fbd4e9  SHL RSI,CL
04fbd4ec  SHR RDX,0x6
04fbd4f0  OR qword ptr [RAX + RDX*0x8],RSI
04fbd4f4  JMP 0x04fbd6e7
04fbd4f9  MOVZX EAX,byte ptr [R14]
04fbd4fd  MOV ECX,EAX
04fbd4ff  SHR ECX,0x1
04fbd501  TEST AL,0x1
04fbd503  MOV RAX,qword ptr [RSP + 0x38]
04fbd508  CMOVNZ RAX,qword ptr [R14 + 0x10]
04fbd50d  CMOVNZ RCX,qword ptr [R14 + 0x8]
04fbd512  MOV qword ptr [RSP + 0x50],RAX
04fbd517  MOV qword ptr [RSP + 0x58],RCX
04fbd51c  MOV byte ptr [RSP + 0x60],0x1
04fbd521  MOV qword ptr [RSP + 0x20],0x0
04fbd52a  MOV RAX,qword ptr [RSP + 0x60]
04fbd52f  MOV qword ptr [RSP + 0x10],RAX
04fbd534  MOVUPS XMM0,xmmword ptr [RSP + 0x50]
04fbd539  MOVUPS xmmword ptr [RSP],XMM0
04fbd53d  LEA RDI,[RSP + 0xf0]
04fbd545  LEA RSI,[RSP + 0x20]
04fbd54a  CALL 0x0eeb79f0
04fbd54f  MOV RSI,qword ptr [RSP + 0x20]
04fbd554  BT RSI,0x37
04fbd559  JNC 0x04fbd57d
04fbd55b  MOV RAX,-0xff000000000001
04fbd565  AND RSI,RAX
04fbd568  ADD RSI,-0x8
04fbd56c  LEA RDI,[0xf5463b0]
04fbd573  MOV RAX,qword ptr [0x0f5463b0]
04fbd57a  CALL qword ptr [RAX + 0x28]
04fbd57d  MOV RAX,qword ptr [RSP + 0x40]
04fbd582  MOV EDX,dword ptr [RAX + 0x8]
04fbd585  MOV RBP,qword ptr [RBX + 0x88]
04fbd58c  MOV RBX,qword ptr [RBX + 0x90]
04fbd593  XORPS XMM0,XMM0
04fbd596  MOVAPS xmmword ptr [RSP + 0x20],XMM0
04fbd59b  MOV qword ptr [RSP + 0x30],0x0
04fbd5a4  CMP RBP,RBX
04fbd5a7  JZ 0x04fbd688
04fbd5ad  MOV dword ptr [RSP + 0x38],EDX
04fbd5b1  LEA R14,[0x134024e]
04fbd5b8  LEA R15,[RSP + 0x50]
04fbd5bd  LEA R12,[RSP + 0xe0]
04fbd5c5  LEA R13,[RSP + 0x20]
04fbd5ca  JMP 0x04fbd5dd
04fbd5d0  ADD RBP,0x38
04fbd5d4  CMP RBP,RBX
04fbd5d7  JZ 0x04fbd67a
04fbd5dd  TEST byte ptr [RBP + 0x8],0x1
04fbd5e1  JZ 0x04fbd5f0
04fbd5e3  MOV RAX,qword ptr [RBP + 0x18]
04fbd5e7  JMP 0x04fbd5f4
04fbd5f0  LEA RAX,[RBP + 0x9]
04fbd5f4  MOV qword ptr [RSP + 0xe0],RAX
04fbd5fc  MOV EDX,0x5
04fbd601  MOV ECX,0xc
04fbd606  MOV RDI,R15
04fbd609  MOV RSI,R14
04fbd60c  MOV R8,R12
04fbd60f  CALL 0x0470d9a0
04fbd614  MOVZX EAX,byte ptr [RSP + 0x50]
04fbd619  MOV EDX,EAX
04fbd61b  SHR EDX,0x1
04fbd61d  TEST AL,0x1
04fbd61f  MOV RSI,qword ptr [RSP + 0x60]
04fbd624  LEA RAX,[RSP + 0x51]
04fbd629  CMOVZ RSI,RAX
04fbd62d  CMOVNZ RDX,qword ptr [RSP + 0x58]
04fbd633  MOV RDI,R13
04fbd636  CALL 0x0412f8c0
04fbd63b  TEST byte ptr [RSP + 0x50],0x1
04fbd640  JZ 0x04fbd5d0
04fbd642  MOV RSI,qword ptr [RSP + 0x50]
04fbd647  MOV RDI,qword ptr [RSP + 0x60]
04fbd64c  AND RSI,-0x2
04fbd650  CALL 0x0412a280
04fbd655  JMP 0x04fbd5d0
04fbd65a  CMP byte ptr [RSP + 0x4c],0x0
04fbd65f  JNZ 0x04fbd6e5
04fbd665  MOV RAX,qword ptr [RSP + 0x40]
04fbd66a  MOV ESI,dword ptr [RAX + 0x8]
04fbd66d  MOV RDI,R14
04fbd670  MOV RDX,R15
04fbd673  CALL 0x0b63c650
04fbd678  JMP 0x04fbd6e5
04fbd67a  TEST byte ptr [RSP + 0x20],0x1
04fbd67f  JZ 0x04fbd68f
04fbd681  MOV RAX,qword ptr [RSP + 0x30]
04fbd686  JMP 0x04fbd694
04fbd688  LEA RAX,[RSP + 0x21]
04fbd68d  JMP 0x04fbd698
04fbd68f  LEA RAX,[RSP + 0x21]
04fbd694  MOV EDX,dword ptr [RSP + 0x38]
04fbd698  MOV qword ptr [RSP + 0xd8],RAX
04fbd6a0  LEA RCX,[0x13c4ba9]
04fbd6a7  LEA R8,[RSP + 0xd8]
04fbd6af  MOV EDI,0x1
04fbd6b4  MOV ESI,0x3
04fbd6b9  CALL 0x04b0ace0
04fbd6be  TEST byte ptr [RSP + 0x20],0x1
04fbd6c3  JZ 0x04fbd6d8
04fbd6c5  MOV RSI,qword ptr [RSP + 0x20]
04fbd6ca  MOV RDI,qword ptr [RSP + 0x30]
04fbd6cf  AND RSI,-0x2
04fbd6d3  CALL 0x0412a280
04fbd6d8  LEA RDI,[RSP + 0xf0]
04fbd6e0  CALL 0x0eeb81b0
04fbd6e5  XOR EBP,EBP
04fbd6e7  MOV RAX,RBP
04fbd6ea  ADD RSP,0x108
04fbd6f1  POP RBX
04fbd6f2  POP R12
04fbd6f4  POP R13
04fbd6f6  POP R14
04fbd6f8  POP R15
04fbd6fa  POP RBP
04fbd6fb  RET
```
