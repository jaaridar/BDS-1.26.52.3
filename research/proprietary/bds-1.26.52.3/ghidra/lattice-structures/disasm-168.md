# FUN_09dbc310 (disassembly)

```
09dbc310  PUSH RBP
09dbc311  PUSH R15
09dbc313  PUSH R14
09dbc315  PUSH RBX
09dbc316  SUB RSP,0x78
09dbc31a  MOV RBX,RDI
09dbc31d  MOV RDI,qword ptr [RSI + 0x10]
09dbc321  MOV EAX,dword ptr [RSI + 0x18]
09dbc324  MOV RCX,qword ptr [RDI + 0x38]
09dbc328  MOV RDX,qword ptr [RDI + 0x40]
09dbc32c  SUB RDX,RCX
09dbc32f  SHR RDX,0x3
09dbc333  DEC EDX
09dbc335  AND EDX,0x4f6ba419
09dbc33b  LEA RCX,[RCX + RDX*0x8]
09dbc33f  MOV RDX,qword ptr [RDI + 0x50]
09dbc343  MOV R9,RCX
09dbc346  NOP word ptr CS:[RAX + RAX*0x1]
09dbc350  MOV R8,qword ptr [R9]
09dbc353  CMP R8,-0x1
09dbc357  JZ 0x09dbc372
09dbc359  SHL R8,0x5
09dbc35d  LEA R9,[RDX + R8*0x1]
09dbc361  CMP dword ptr [RDX + R8*0x1 + 0x8],0x4f6ba419
09dbc36a  JNZ 0x09dbc350
09dbc36c  MOV R8,qword ptr [RDI + 0x58]
09dbc370  JMP 0x09dbc379
09dbc372  MOV R8,qword ptr [RDI + 0x58]
09dbc376  MOV R9,R8
09dbc379  CMP R9,R8
09dbc37c  JZ 0x09dbc716
09dbc382  MOV R10,qword ptr [R9 + 0x10]
09dbc386  TEST R10,R10
09dbc389  JZ 0x09dbc716
09dbc38f  MOV EDI,EAX
09dbc391  AND EDI,0x3ffff
09dbc397  MOV R9D,EDI
09dbc39a  SHR R9D,0xb
09dbc39e  MOV R11,qword ptr [R10 + 0x8]
09dbc3a2  MOV R14,qword ptr [R10 + 0x10]
09dbc3a6  SUB R14,R11
09dbc3a9  SAR R14,0x3
09dbc3ad  CMP R9,R14
09dbc3b0  JNC 0x09dbc716
09dbc3b6  MOV R11,qword ptr [R11 + R9*0x8]
09dbc3ba  TEST R11,R11
09dbc3bd  JZ 0x09dbc716
09dbc3c3  AND EDI,0x7ff
09dbc3c9  MOV R14D,EDI
09dbc3cc  AND EAX,0xfffc0000
09dbc3d1  MOV R11D,dword ptr [R11 + R14*0x4]
09dbc3d5  MOV EBP,R11D
09dbc3d8  XOR EBP,EAX
09dbc3da  CMP EBP,0x3fffe
09dbc3e0  JA 0x09dbc716
09dbc3e6  MOV R10,qword ptr [R10 + 0x50]
09dbc3ea  MOV R14D,R11D
09dbc3ed  SHR R14D,0x4
09dbc3f1  AND R14D,0x3ff8
09dbc3f8  MOV R10,qword ptr [R10 + R14*0x1]
09dbc3fc  TEST R10,R10
09dbc3ff  JZ 0x09dbc716
09dbc405  AND R11D,0x3ffff
09dbc40c  AND R11D,0x7f
09dbc410  CMP byte ptr [R10 + R11*0x4],0x40
09dbc415  JNZ 0x09dbc490
09dbc417  MOV RAX,qword ptr [RSI + 0x398]
09dbc41e  TEST RAX,RAX
09dbc421  JZ 0x09dbc660
09dbc427  MOV RDI,qword ptr [RAX]
09dbc42a  TEST RDI,RDI
09dbc42d  JZ 0x09dbc660
09dbc433  LEA R14,[RSI + 0x390]
09dbc43a  MOV RAX,qword ptr [RDI]
09dbc43d  MOV R15,RSI
09dbc440  MOV RSI,R14
09dbc443  CALL qword ptr [RAX + 0x308]
09dbc449  MOV RCX,qword ptr [R15 + 0x398]
09dbc450  TEST AL,AL
09dbc452  JZ 0x09dbc640
09dbc458  TEST RCX,RCX
09dbc45b  JZ 0x09dbc660
09dbc461  MOV RSI,qword ptr [RCX]
09dbc464  TEST RSI,RSI
09dbc467  JZ 0x09dbc660
09dbc46d  MOV RAX,qword ptr [RSI]
09dbc470  LEA RDI,[RSP + 0x8]
09dbc475  MOV RDX,R14
09dbc478  CALL qword ptr [RAX + 0x300]
09dbc47e  JMP 0x09dbc671
09dbc490  MOV R10,qword ptr [RCX]
09dbc493  CMP R10,-0x1
09dbc497  JZ 0x09dbc4ae
09dbc499  SHL R10,0x5
09dbc49d  LEA RCX,[RDX + R10*0x1]
09dbc4a1  CMP dword ptr [RDX + R10*0x1 + 0x8],0x4f6ba419
09dbc4aa  JNZ 0x09dbc490
09dbc4ac  JMP 0x09dbc4b1
09dbc4ae  MOV RCX,R8
09dbc4b1  CMP RCX,R8
09dbc4b4  JZ 0x09dbc716
09dbc4ba  MOV RCX,qword ptr [RCX + 0x10]
09dbc4be  TEST RCX,RCX
09dbc4c1  JZ 0x09dbc716
09dbc4c7  MOV RDX,qword ptr [RCX + 0x8]
09dbc4cb  MOV R8,qword ptr [RCX + 0x10]
09dbc4cf  SUB R8,RDX
09dbc4d2  SAR R8,0x3
09dbc4d6  CMP R9,R8
09dbc4d9  JNC 0x09dbc716
09dbc4df  MOV RDX,qword ptr [RDX + R9*0x8]
09dbc4e3  TEST RDX,RDX
09dbc4e6  JZ 0x09dbc716
09dbc4ec  MOV EDX,dword ptr [RDX + RDI*0x4]
09dbc4ef  XOR EAX,EDX
09dbc4f1  CMP EAX,0x3fffe
09dbc4f6  JA 0x09dbc716
09dbc4fc  MOV RAX,qword ptr [RCX + 0x50]
09dbc500  MOV ECX,EDX
09dbc502  SHR ECX,0x4
09dbc505  AND ECX,0x3ff8
09dbc50b  MOV RAX,qword ptr [RAX + RCX*0x1]
09dbc50f  TEST RAX,RAX
09dbc512  JZ 0x09dbc716
09dbc518  AND EDX,0x3ffff
09dbc51e  AND EDX,0x7f
09dbc521  MOV EBP,dword ptr [RAX + RDX*0x4]
09dbc524  LEA R14,[RSP + 0x8]
09dbc529  MOV RDI,R14
09dbc52c  MOV R15,RSI
09dbc52f  CALL 0x0b3f3260
09dbc534  LEA RDX,[RSP + 0x20]
09dbc539  TEST byte ptr [RSP + 0x38],0x1
09dbc53e  CMOVZ RDX,R14
09dbc542  LEA RDI,[RSP + 0x40]
09dbc547  MOV ESI,EBP
09dbc549  MOV RCX,R15
09dbc54c  CALL 0x0bf49380
09dbc551  CMP byte ptr [RSP + 0x38],0x1
09dbc556  JNZ 0x09dbc572
09dbc558  TEST byte ptr [RSP + 0x20],0x1
09dbc55d  JZ 0x09dbc572
09dbc55f  MOV RSI,qword ptr [RSP + 0x20]
09dbc564  MOV RDI,qword ptr [RSP + 0x30]
09dbc569  AND RSI,-0x2
09dbc56d  CALL 0x0412a280
09dbc572  TEST byte ptr [RSP + 0x8],0x1
09dbc577  JZ 0x09dbc58c
09dbc579  MOV RSI,qword ptr [RSP + 0x8]
09dbc57e  MOV RDI,qword ptr [RSP + 0x18]
09dbc583  AND RSI,-0x2
09dbc587  CALL 0x0412a280
09dbc58c  CMP dword ptr [RSP + 0x58],0x0
09dbc591  JZ 0x09dbc5ad
09dbc593  TEST byte ptr [RSP + 0x40],0x1
09dbc598  JNZ 0x09dbc614
09dbc59a  MOV RAX,qword ptr [RSP + 0x50]
09dbc59f  MOV qword ptr [RBX + 0x10],RAX
09dbc5a3  MOVUPS XMM0,xmmword ptr [RSP + 0x40]
09dbc5a8  MOVUPS xmmword ptr [RBX],XMM0
09dbc5ab  JMP 0x09dbc626
09dbc5ad  MOVZX EAX,byte ptr [0x0f5ea4a0]
09dbc5b4  TEST AL,AL
09dbc5b6  JZ 0x09dbc71b
09dbc5bc  XORPS XMM0,XMM0
09dbc5bf  MOVAPS xmmword ptr [RSP + 0x60],XMM0
09dbc5c4  LEA RSI,[0xf5ea138]
09dbc5cb  MOV RAX,qword ptr [0x0f5ea138]
09dbc5d2  LEA RDX,[RSP + 0x40]
09dbc5d7  LEA RCX,[RSP + 0x60]
09dbc5dc  MOV RDI,RBX
09dbc5df  CALL qword ptr [RAX + 0x90]
09dbc5e5  MOV R14,qword ptr [RSP + 0x68]
09dbc5ea  TEST R14,R14
09dbc5ed  JZ 0x09dbc626
09dbc5ef  MOV RAX,-0x1
09dbc5f6  XADD.LOCK qword ptr [R14 + 0x8],RAX
09dbc5fc  TEST RAX,RAX
09dbc5ff  JNZ 0x09dbc626
09dbc601  MOV RAX,qword ptr [R14]
09dbc604  MOV RDI,R14
09dbc607  CALL qword ptr [RAX + 0x10]
09dbc60a  MOV RDI,R14
09dbc60d  CALL 0x0412c2d0
09dbc612  JMP 0x09dbc626
09dbc614  MOV RDX,qword ptr [RSP + 0x48]
09dbc619  MOV RSI,qword ptr [RSP + 0x50]
09dbc61e  MOV RDI,RBX
09dbc621  CALL 0x0412e5e0
09dbc626  TEST byte ptr [RSP + 0x40],0x1
09dbc62b  JZ 0x09dbc708
09dbc631  MOV RSI,qword ptr [RSP + 0x40]
09dbc636  MOV RDI,qword ptr [RSP + 0x50]
09dbc63b  JMP 0x09dbc6ff
09dbc640  TEST RCX,RCX
09dbc643  JZ 0x09dbc660
09dbc645  MOV RSI,qword ptr [RCX]
09dbc648  TEST RSI,RSI
09dbc64b  JZ 0x09dbc660
09dbc64d  MOV RAX,qword ptr [RSI]
09dbc650  LEA RDI,[RSP + 0x8]
09dbc655  MOV RDX,R14
09dbc658  CALL qword ptr [RAX + 0x2f0]
09dbc65e  JMP 0x09dbc671
09dbc660  LEA RSI,[0xf646430]
09dbc667  LEA RDI,[RSP + 0x8]
09dbc66c  CALL 0x09af1a50
09dbc671  MOVZX EAX,byte ptr [RSP + 0x38]
09dbc676  LEA RDX,[RSP + 0x20]
09dbc67b  TEST AL,0x1
09dbc67d  LEA RCX,[RSP + 0x8]
09dbc682  CMOVNZ RCX,RDX
09dbc686  TEST byte ptr [RCX],0x1
09dbc689  JNZ 0x09dbc69f
09dbc68b  MOV RDX,qword ptr [RCX + 0x10]
09dbc68f  MOV qword ptr [RBX + 0x10],RDX
09dbc693  MOVUPS XMM0,xmmword ptr [RCX]
09dbc696  MOVUPS xmmword ptr [RBX],XMM0
09dbc699  TEST AL,0x1
09dbc69b  JNZ 0x09dbc6d4
09dbc69d  JMP 0x09dbc6ee
09dbc69f  TEST AL,0x1
09dbc6a1  LEA RAX,[RSP + 0x30]
09dbc6a6  LEA RCX,[RSP + 0x18]
09dbc6ab  CMOVNZ RCX,RAX
09dbc6af  MOV RSI,qword ptr [RCX]
09dbc6b2  LEA RAX,[RSP + 0x28]
09dbc6b7  LEA RCX,[RSP + 0x10]
09dbc6bc  CMOVNZ RCX,RAX
09dbc6c0  MOV RDX,qword ptr [RCX]
09dbc6c3  MOV RDI,RBX
09dbc6c6  CALL 0x0412e5e0
09dbc6cb  MOVZX EAX,byte ptr [RSP + 0x38]
09dbc6d0  TEST AL,0x1
09dbc6d2  JZ 0x09dbc6ee
09dbc6d4  TEST byte ptr [RSP + 0x20],0x1
09dbc6d9  JZ 0x09dbc6ee
09dbc6db  MOV RSI,qword ptr [RSP + 0x20]
09dbc6e0  MOV RDI,qword ptr [RSP + 0x30]
09dbc6e5  AND RSI,-0x2
09dbc6e9  CALL 0x0412a280
09dbc6ee  TEST byte ptr [RSP + 0x8],0x1
09dbc6f3  JZ 0x09dbc708
09dbc6f5  MOV RSI,qword ptr [RSP + 0x8]
09dbc6fa  MOV RDI,qword ptr [RSP + 0x18]
09dbc6ff  AND RSI,-0x2
09dbc703  CALL 0x0412a280
09dbc708  MOV RAX,RBX
09dbc70b  ADD RSP,0x78
09dbc70f  POP RBX
09dbc710  POP R14
09dbc712  POP R15
09dbc714  POP RBP
09dbc715  RET
09dbc716  CALL 0x04890760
09dbc71b  LEA RDI,[0xf5ea4a0]
09dbc722  CALL 0x04108328
09dbc727  TEST EAX,EAX
09dbc729  JZ 0x09dbc5bc
09dbc72f  LEA RDI,[0xf5ea138]
09dbc736  CALL 0x08b670e0
09dbc73b  LEA RDI,[0x8b673f0]
09dbc742  LEA RSI,[0xf5ea138]
09dbc749  LEA RDX,[0xf53dab8]
09dbc750  CALL 0x0eee2f40
09dbc755  LEA RDI,[0xf5ea4a0]
09dbc75c  CALL 0x0410844d
09dbc761  JMP 0x09dbc5bc
```
