# FUN_09cbbc90 (disassembly)

```
09cbbc90  PUSH RBP
09cbbc91  PUSH R15
09cbbc93  PUSH R14
09cbbc95  PUSH R13
09cbbc97  PUSH R12
09cbbc99  PUSH RBX
09cbbc9a  SUB RSP,0xf8
09cbbca1  MOV RBX,RSI
09cbbca4  CMP EDX,0x4
09cbbca7  JZ 0x09cbbe1d
09cbbcad  MOV R12,RDI
09cbbcb0  CMP EDX,0x3
09cbbcb3  JZ 0x09cbbdbe
09cbbcb9  CMP EDX,0x1
09cbbcbc  JNZ 0x09cbbe5b
09cbbcc2  MOV R14,RDX
09cbbcc5  MOV ESI,dword ptr [R12 + 0x108]
09cbbccd  LEA RDI,[RSP + 0x30]
09cbbcd2  CALL 0x09e20be0
09cbbcd7  MOV RSI,R14
09cbbcda  SHR RSI,0x20
09cbbcde  MOV word ptr [RSP + 0x50],0x3002
09cbbce5  MOV byte ptr [RSP + 0x52],0x0
09cbbcea  MOV dword ptr [RSP + 0x68],0x0
09cbbcf2  LEA R14,[RSP + 0x70]
09cbbcf7  DEC ESI
09cbbcf9  MOV RDI,R14
09cbbcfc  CALL 0x09e20be0
09cbbd01  XORPS XMM0,XMM0
09cbbd04  MOVAPS xmmword ptr [RSP + 0x10],XMM0
09cbbd09  MOV qword ptr [RSP + 0x20],0x0
09cbbd12  LEA R12,[RSP + 0x10]
09cbbd17  MOV qword ptr [RSP + 0xc0],R12
09cbbd1f  MOV byte ptr [RSP + 0xc8],0x0
09cbbd27  LEA RDI,[0xf5463b0]
09cbbd2e  MOV RAX,qword ptr [0x0f5463b0]
09cbbd35  MOV ESI,0x60
09cbbd3a  CALL qword ptr [RAX + 0x10]
09cbbd3d  MOV R15,RAX
09cbbd40  TEST RAX,RAX
09cbbd43  JZ 0x09cbc3a2
09cbbd49  MOV qword ptr [RSP + 0x10],R15
09cbbd4e  MOV qword ptr [RSP + 0x18],R15
09cbbd53  MOV RAX,R15
09cbbd56  ADD RAX,0x60
09cbbd5a  MOV qword ptr [RSP + 0x20],RAX
09cbbd5f  MOV qword ptr [RSP + 0x8],R15
09cbbd64  MOV qword ptr [RSP + 0xb8],R15
09cbbd6c  MOV qword ptr [RSP + 0xd0],R12
09cbbd74  LEA RAX,[RSP + 0xb8]
09cbbd7c  MOV qword ptr [RSP + 0xd8],RAX
09cbbd84  LEA RAX,[RSP + 0x8]
09cbbd89  MOV qword ptr [RSP + 0xe0],RAX
09cbbd91  MOV byte ptr [RSP + 0xe8],0x0
09cbbd99  TEST byte ptr [RSP + 0x30],0x1
09cbbd9e  JNZ 0x09cbbf53
09cbbda4  MOV RAX,qword ptr [RSP + 0x40]
09cbbda9  MOV qword ptr [R15 + 0x10],RAX
09cbbdad  MOVUPS XMM0,xmmword ptr [RSP + 0x30]
09cbbdb2  MOVUPS xmmword ptr [R15],XMM0
09cbbdb6  MOV R13,R15
09cbbdb9  JMP 0x09cbbf6a
09cbbdbe  MOVSXD RAX,dword ptr [R12 + 0x104]
09cbbdc6  CMP RAX,-0x1
09cbbdca  MOV qword ptr [RSP + 0xf0],RCX
09cbbdd2  JZ 0x09cbc384
09cbbdd8  LEA RCX,[0xf37af30]
09cbbddf  MOV R14,qword ptr [RCX + RAX*0x8]
09cbbde3  MOV RDI,R14
09cbbde6  CALL 0x0eee2e90
09cbbdeb  CMP RAX,-0x8
09cbbdef  JNC 0x09cbc39d
09cbbdf5  MOV R15,RAX
09cbbdf8  CMP RAX,0x17
09cbbdfc  JNC 0x09cbbe99
09cbbe02  LEA EAX,[R15 + R15*0x1]
09cbbe06  MOV byte ptr [RSP + 0x30],AL
09cbbe0a  LEA R13,[RSP + 0x31]
09cbbe0f  TEST R15,R15
09cbbe12  JNZ 0x09cbbee4
09cbbe18  JMP 0x09cbbef2
09cbbe1d  XORPS XMM0,XMM0
09cbbe20  MOVAPS xmmword ptr [RSP + 0x30],XMM0
09cbbe25  MOV qword ptr [RSP + 0x40],0x0
09cbbe2e  CMP dword ptr [RBX],0x0
09cbbe31  JZ 0x09cbc339
09cbbe37  LEA RSI,[0x11ec01f]
09cbbe3e  LEA RCX,[RSP + 0x30]
09cbbe43  MOV EDX,0x1a
09cbbe48  MOV RDI,RBX
09cbbe4b  MOV R8D,0x1
09cbbe51  CALL 0x09e22e10
09cbbe56  JMP 0x09cbc339
09cbbe5b  XORPS XMM0,XMM0
09cbbe5e  MOVAPS xmmword ptr [RSP + 0x30],XMM0
09cbbe63  MOV qword ptr [RSP + 0x40],0x0
09cbbe6c  CMP dword ptr [RBX],0x0
09cbbe6f  JZ 0x09cbc339
09cbbe75  LEA RSI,[0x11ec01f]
09cbbe7c  LEA RCX,[RSP + 0x30]
09cbbe81  MOV EDX,0x1a
09cbbe86  MOV RDI,RBX
09cbbe89  MOV R8D,0x1
09cbbe8f  CALL 0x09e22e10
09cbbe94  JMP 0x09cbc339
09cbbe99  MOV RAX,R15
09cbbe9c  OR RAX,0x7
09cbbea0  LEA RCX,[RAX + 0x1]
09cbbea4  CMP RAX,0x17
09cbbea8  MOV EBP,0x1a
09cbbead  CMOVNZ RBP,RCX
09cbbeb1  LEA RDI,[0xf5463b0]
09cbbeb8  MOV RAX,qword ptr [0x0f5463b0]
09cbbebf  MOV RSI,RBP
09cbbec2  CALL qword ptr [RAX + 0x10]
09cbbec5  MOV R13,RAX
09cbbec8  TEST RAX,RAX
09cbbecb  JZ 0x09cbc3c4
09cbbed1  MOV qword ptr [RSP + 0x40],R13
09cbbed6  OR RBP,0x1
09cbbeda  MOV qword ptr [RSP + 0x30],RBP
09cbbedf  MOV qword ptr [RSP + 0x38],R15
09cbbee4  MOV RDI,R13
09cbbee7  MOV RSI,R14
09cbbeea  MOV RDX,R15
09cbbeed  CALL 0x0eee2ee0
09cbbef2  MOV byte ptr [R13 + R15*0x1],0x0
09cbbef8  MOV dword ptr [RSP + 0x48],0x0
09cbbf00  LEA R13,[RSP + 0x50]
09cbbf05  MOV ESI,dword ptr [R12 + 0x108]
09cbbf0d  MOV R14,R13
09cbbf10  MOV RDI,R13
09cbbf13  CALL 0x09e20be0
09cbbf18  LEA RDI,[RSP + 0x70]
09cbbf1d  MOV ESI,dword ptr [R12 + 0x118]
09cbbf25  MOV R14,RDI
09cbbf28  CALL 0x09e20be0
09cbbf2d  LEA R14,[RSP + 0x90]
09cbbf35  MOV RAX,qword ptr [RSP + 0xf0]
09cbbf3d  TEST byte ptr [RAX],0x1
09cbbf40  JNZ 0x09cbbfa1
09cbbf42  MOV RCX,qword ptr [RAX + 0x10]
09cbbf46  MOV qword ptr [R14 + 0x10],RCX
09cbbf4a  MOVUPS XMM0,xmmword ptr [RAX]
09cbbf4d  MOVUPS xmmword ptr [R14],XMM0
09cbbf51  JMP 0x09cbbfb1
09cbbf53  MOV RDX,qword ptr [RSP + 0x38]
09cbbf58  MOV RSI,qword ptr [RSP + 0x40]
09cbbf5d  MOV RDI,R15
09cbbf60  CALL 0x0412e5e0
09cbbf65  MOV R13,qword ptr [RSP + 0x8]
09cbbf6a  MOV EAX,dword ptr [RSP + 0x48]
09cbbf6e  MOV dword ptr [R15 + 0x18],EAX
09cbbf72  LEA R12,[R13 + 0x20]
09cbbf76  MOV qword ptr [RSP + 0x8],R12
09cbbf7b  TEST byte ptr [RSP + 0x50],0x1
09cbbf80  JNZ 0x09cbc07b
09cbbf86  LEA RAX,[RSP + 0x50]
09cbbf8b  MOV RCX,qword ptr [RAX + 0x10]
09cbbf8f  MOV qword ptr [R12 + 0x10],RCX
09cbbf94  MOVUPS XMM0,xmmword ptr [RAX]
09cbbf97  MOVUPS xmmword ptr [R12],XMM0
09cbbf9c  JMP 0x09cbc092
09cbbfa1  MOV RDX,qword ptr [RAX + 0x8]
09cbbfa5  MOV RSI,qword ptr [RAX + 0x10]
09cbbfa9  MOV RDI,R14
09cbbfac  CALL 0x0412e5e0
09cbbfb1  MOV dword ptr [RSP + 0xa8],0x0
09cbbfbc  XORPS XMM0,XMM0
09cbbfbf  MOVAPS xmmword ptr [RSP + 0x10],XMM0
09cbbfc4  MOV qword ptr [RSP + 0x20],0x0
09cbbfcd  LEA RBP,[RSP + 0x10]
09cbbfd2  MOV qword ptr [RSP + 0xc0],RBP
09cbbfda  MOV byte ptr [RSP + 0xc8],0x0
09cbbfe2  LEA RDI,[0xf5463b0]
09cbbfe9  MOV RAX,qword ptr [0x0f5463b0]
09cbbff0  MOV ESI,0x80
09cbbff5  CALL qword ptr [RAX + 0x10]
09cbbff8  MOV R12,RAX
09cbbffb  TEST RAX,RAX
09cbbffe  JZ 0x09cbc3b3
09cbc004  MOV qword ptr [RSP + 0x10],R12
09cbc009  MOV qword ptr [RSP + 0x18],R12
09cbc00e  MOV RAX,R12
09cbc011  SUB RAX,-0x80
09cbc015  MOV qword ptr [RSP + 0x20],RAX
09cbc01a  MOV qword ptr [RSP + 0x8],R12
09cbc01f  MOV qword ptr [RSP + 0xb8],R12
09cbc027  MOV qword ptr [RSP + 0xd0],RBP
09cbc02f  LEA RAX,[RSP + 0xb8]
09cbc037  MOV qword ptr [RSP + 0xd8],RAX
09cbc03f  LEA RAX,[RSP + 0x8]
09cbc044  MOV qword ptr [RSP + 0xe0],RAX
09cbc04c  MOV byte ptr [RSP + 0xe8],0x0
09cbc054  TEST byte ptr [RSP + 0x30],0x1
09cbc059  JNZ 0x09cbc157
09cbc05f  MOV RAX,qword ptr [RSP + 0x40]
09cbc064  MOV qword ptr [R12 + 0x10],RAX
09cbc069  MOVUPS XMM0,xmmword ptr [RSP + 0x30]
09cbc06e  MOVUPS xmmword ptr [R12],XMM0
09cbc073  MOV R15,R12
09cbc076  JMP 0x09cbc16e
09cbc07b  MOV RDX,qword ptr [RSP + 0x58]
09cbc080  MOV RSI,qword ptr [RSP + 0x60]
09cbc085  MOV RDI,R12
09cbc088  CALL 0x0412e5e0
09cbc08d  MOV R12,qword ptr [RSP + 0x8]
09cbc092  MOV EAX,dword ptr [RSP + 0x68]
09cbc096  MOV dword ptr [R13 + 0x38],EAX
09cbc09a  LEA RDI,[R12 + 0x20]
09cbc09f  MOV qword ptr [RSP + 0x8],RDI
09cbc0a4  TEST byte ptr [RSP + 0x70],0x1
09cbc0a9  JNZ 0x09cbc0bc
09cbc0ab  MOV RAX,qword ptr [R14 + 0x10]
09cbc0af  MOV qword ptr [RDI + 0x10],RAX
09cbc0b3  MOVUPS XMM0,xmmword ptr [R14]
09cbc0b7  MOVUPS xmmword ptr [RDI],XMM0
09cbc0ba  JMP 0x09cbc0d3
09cbc0bc  MOV RDX,qword ptr [RSP + 0x78]
09cbc0c1  MOV RSI,qword ptr [RSP + 0x80]
09cbc0c9  CALL 0x0412e5e0
09cbc0ce  MOV RDI,qword ptr [RSP + 0x8]
09cbc0d3  MOV EAX,dword ptr [RSP + 0x88]
09cbc0da  MOV dword ptr [R12 + 0x38],EAX
09cbc0df  ADD RDI,0x20
09cbc0e3  MOV qword ptr [RSP + 0x18],RDI
09cbc0e8  CMP dword ptr [RBX],0x0
09cbc0eb  JZ 0x09cbc10c
09cbc0ed  LEA RSI,[0x12c8066]
09cbc0f4  LEA RCX,[RSP + 0x10]
09cbc0f9  MOV EDX,0x22
09cbc0fe  MOV RDI,RBX
09cbc101  MOV R8D,0x1
09cbc107  CALL 0x09e22e10
09cbc10c  MOV RBX,qword ptr [RSP + 0x10]
09cbc111  TEST RBX,RBX
09cbc114  JZ 0x09cbc311
09cbc11a  MOV R14,qword ptr [RSP + 0x18]
09cbc11f  MOV RDI,RBX
09cbc122  CMP RBX,R14
09cbc125  JNZ 0x09cbc13d
09cbc127  JMP 0x09cbc2c8
09cbc130  ADD R14,-0x20
09cbc134  CMP R14,RBX
09cbc137  JZ 0x09cbc2c3
09cbc13d  TEST byte ptr [R14 + -0x20],0x1
09cbc142  JZ 0x09cbc130
09cbc144  MOV RSI,qword ptr [R14 + -0x20]
09cbc148  MOV RDI,qword ptr [R14 + -0x10]
09cbc14c  AND RSI,-0x2
09cbc150  CALL 0x0412a280
09cbc155  JMP 0x09cbc130
09cbc157  MOV RDX,qword ptr [RSP + 0x38]
09cbc15c  MOV RSI,qword ptr [RSP + 0x40]
09cbc161  MOV RDI,R12
09cbc164  CALL 0x0412e5e0
09cbc169  MOV R15,qword ptr [RSP + 0x8]
09cbc16e  MOV EAX,dword ptr [RSP + 0x48]
09cbc172  MOV dword ptr [R12 + 0x18],EAX
09cbc177  LEA RBP,[R15 + 0x20]
09cbc17b  MOV qword ptr [RSP + 0x8],RBP
09cbc180  TEST byte ptr [RSP + 0x50],0x1
09cbc185  JNZ 0x09cbc19a
09cbc187  MOV RAX,qword ptr [R13 + 0x10]
09cbc18b  MOV qword ptr [RBP + 0x10],RAX
09cbc18f  MOVUPS XMM0,xmmword ptr [R13]
09cbc194  MOVUPS xmmword ptr [RBP],XMM0
09cbc198  JMP 0x09cbc1b1
09cbc19a  MOV RDX,qword ptr [RSP + 0x58]
09cbc19f  MOV RSI,qword ptr [RSP + 0x60]
09cbc1a4  MOV RDI,RBP
09cbc1a7  CALL 0x0412e5e0
09cbc1ac  MOV RBP,qword ptr [RSP + 0x8]
09cbc1b1  MOV EAX,dword ptr [RSP + 0x68]
09cbc1b5  MOV dword ptr [R15 + 0x38],EAX
09cbc1b9  LEA R13,[RBP + 0x20]
09cbc1bd  MOV qword ptr [RSP + 0x8],R13
09cbc1c2  TEST byte ptr [RSP + 0x70],0x1
09cbc1c7  JNZ 0x09cbc1e0
09cbc1c9  LEA RCX,[RSP + 0x70]
09cbc1ce  MOV RAX,qword ptr [RCX + 0x10]
09cbc1d2  MOV qword ptr [R13 + 0x10],RAX
09cbc1d6  MOVUPS XMM0,xmmword ptr [RCX]
09cbc1d9  MOVUPS xmmword ptr [R13],XMM0
09cbc1de  JMP 0x09cbc1fa
09cbc1e0  MOV RDX,qword ptr [RSP + 0x78]
09cbc1e5  MOV RSI,qword ptr [RSP + 0x80]
09cbc1ed  MOV RDI,R13
09cbc1f0  CALL 0x0412e5e0
09cbc1f5  MOV R13,qword ptr [RSP + 0x8]
09cbc1fa  MOV EAX,dword ptr [RSP + 0x88]
09cbc201  MOV dword ptr [RBP + 0x38],EAX
09cbc204  LEA RDI,[R13 + 0x20]
09cbc208  MOV qword ptr [RSP + 0x8],RDI
09cbc20d  TEST byte ptr [RSP + 0x90],0x1
09cbc215  JNZ 0x09cbc228
09cbc217  MOV RAX,qword ptr [R14 + 0x10]
09cbc21b  MOV qword ptr [RDI + 0x10],RAX
09cbc21f  MOVUPS XMM0,xmmword ptr [R14]
09cbc223  MOVUPS xmmword ptr [RDI],XMM0
09cbc226  JMP 0x09cbc242
09cbc228  MOV RDX,qword ptr [RSP + 0x98]
09cbc230  MOV RSI,qword ptr [RSP + 0xa0]
09cbc238  CALL 0x0412e5e0
09cbc23d  MOV RDI,qword ptr [RSP + 0x8]
09cbc242  MOV EAX,dword ptr [RSP + 0xa8]
09cbc249  MOV dword ptr [R13 + 0x38],EAX
09cbc24d  ADD RDI,0x20
09cbc251  MOV qword ptr [RSP + 0x18],RDI
09cbc256  CMP dword ptr [RBX],0x0
09cbc259  JZ 0x09cbc27a
09cbc25b  LEA RSI,[0x11ddaa8]
09cbc262  LEA RCX,[RSP + 0x10]
09cbc267  MOV EDX,0x1b
09cbc26c  MOV RDI,RBX
09cbc26f  MOV R8D,0x1
09cbc275  CALL 0x09e22e10
09cbc27a  MOV RBX,qword ptr [RSP + 0x10]
09cbc27f  TEST RBX,RBX
09cbc282  JZ 0x09cbc2ee
09cbc284  MOV R14,qword ptr [RSP + 0x18]
09cbc289  MOV RDI,RBX
09cbc28c  CMP RBX,R14
09cbc28f  JNZ 0x09cbc2a9
09cbc291  JMP 0x09cbc2dc
09cbc2a0  ADD R14,-0x20
09cbc2a4  CMP R14,RBX
09cbc2a7  JZ 0x09cbc2d7
09cbc2a9  TEST byte ptr [R14 + -0x20],0x1
09cbc2ae  JZ 0x09cbc2a0
09cbc2b0  MOV RSI,qword ptr [R14 + -0x20]
09cbc2b4  MOV RDI,qword ptr [R14 + -0x10]
09cbc2b8  AND RSI,-0x2
09cbc2bc  CALL 0x0412a280
09cbc2c1  JMP 0x09cbc2a0
09cbc2c3  MOV RDI,qword ptr [RSP + 0x10]
09cbc2c8  MOV qword ptr [RSP + 0x18],RBX
09cbc2cd  MOV RSI,qword ptr [RSP + 0x20]
09cbc2d2  SUB RSI,RDI
09cbc2d5  JMP 0x09cbc30c
09cbc2d7  MOV RDI,qword ptr [RSP + 0x10]
09cbc2dc  MOV qword ptr [RSP + 0x18],RBX
09cbc2e1  MOV RSI,qword ptr [RSP + 0x20]
09cbc2e6  SUB RSI,RDI
09cbc2e9  CALL 0x0412a280
09cbc2ee  TEST byte ptr [RSP + 0x90],0x1
09cbc2f6  JZ 0x09cbc311
09cbc2f8  MOV RSI,qword ptr [RSP + 0x90]
09cbc300  MOV RDI,qword ptr [RSP + 0xa0]
09cbc308  AND RSI,-0x2
09cbc30c  CALL 0x0412a280
09cbc311  TEST byte ptr [RSP + 0x70],0x1
09cbc316  JNZ 0x09cbc34b
09cbc318  TEST byte ptr [RSP + 0x50],0x1
09cbc31d  JNZ 0x09cbc368
09cbc31f  TEST byte ptr [RSP + 0x30],0x1
09cbc324  JZ 0x09cbc339
09cbc326  MOV RSI,qword ptr [RSP + 0x30]
09cbc32b  MOV RDI,qword ptr [RSP + 0x40]
09cbc330  AND RSI,-0x2
09cbc334  CALL 0x0412a280
09cbc339  ADD RSP,0xf8
09cbc340  POP RBX
09cbc341  POP R12
09cbc343  POP R13
09cbc345  POP R14
09cbc347  POP R15
09cbc349  POP RBP
09cbc34a  RET
09cbc34b  MOV RSI,qword ptr [RSP + 0x70]
09cbc350  MOV RDI,qword ptr [RSP + 0x80]
09cbc358  AND RSI,-0x2
09cbc35c  CALL 0x0412a280
09cbc361  TEST byte ptr [RSP + 0x50],0x1
09cbc366  JZ 0x09cbc31f
09cbc368  MOV RSI,qword ptr [RSP + 0x50]
09cbc36d  MOV RDI,qword ptr [RSP + 0x60]
09cbc372  AND RSI,-0x2
09cbc376  CALL 0x0412a280
09cbc37b  TEST byte ptr [RSP + 0x30],0x1
09cbc380  JNZ 0x09cbc326
09cbc382  JMP 0x09cbc339
09cbc384  LEA R14,[0x13c28d2]
09cbc38b  MOV RDI,R14
09cbc38e  CALL 0x0eee2e90
09cbc393  CMP RAX,-0x8
09cbc397  JC 0x09cbbdf5
09cbc39d  CALL 0x04882e30
09cbc3a2  MOV EDI,0x60
09cbc3a7  XOR ESI,ESI
09cbc3a9  CALL 0x0eec74c0
09cbc3ae  JMP 0x09cbbd49
09cbc3b3  MOV EDI,0x80
09cbc3b8  XOR ESI,ESI
09cbc3ba  CALL 0x0eec74c0
09cbc3bf  JMP 0x09cbc004
09cbc3c4  MOV RDI,RBP
09cbc3c7  XOR ESI,ESI
09cbc3c9  CALL 0x0eec74c0
09cbc3ce  JMP 0x09cbbed1
```
