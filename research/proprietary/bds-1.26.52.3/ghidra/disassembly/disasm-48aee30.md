# 48aee30

```asm
048aee30  PUSH R15
048aee32  PUSH R14
048aee34  PUSH R12
048aee36  PUSH RBX
048aee37  SUB RSP,0x18
048aee3b  MOV R15,RDX
048aee3e  MOV R14,RSI
048aee41  MOV RBX,RDI
048aee44  MOV dword ptr [RSP + 0xc],ECX
048aee48  MOV qword ptr [RDI],RSI
048aee4b  XORPS XMM0,XMM0
048aee4e  MOVUPS xmmword ptr [RDI + 0x8],XMM0
048aee52  MOV qword ptr [RDI + 0x18],0x0
048aee5a  MOV RAX,qword ptr [RSI]
048aee5d  MOV RDX,qword ptr [RSI + 0x8]
048aee61  SUB RDX,RAX
048aee64  SHR RDX,0x3
048aee68  DEC EDX
048aee6a  AND EDX,ECX
048aee6c  LEA RAX,[RAX + RDX*0x8]
048aee70  MOV RDX,qword ptr [RSI + 0x18]
048aee74  NOP word ptr CS:[RAX + RAX*0x1]
048aee80  MOV RAX,qword ptr [RAX]
048aee83  CMP RAX,-0x1
048aee87  JZ 0x048af02d
048aee8d  LEA RSI,[RAX + RAX*0x2]
048aee91  LEA RAX,[RDX + RSI*0x8]
048aee95  CMP dword ptr [RDX + RSI*0x8 + 0x8],ECX
048aee99  JNZ 0x048aee80
048aee9b  MOV RCX,qword ptr [R14 + 0x20]
048aee9f  CMP RAX,RCX
048aeea2  JNZ 0x048af03d
048aeea8  MOV RAX,qword ptr [0x0f5463b0]
048aeeaf  LEA RDI,[0xf5463b0]
048aeeb6  MOV ESI,0x80
048aeebb  CALL qword ptr [RAX + 0x10]
048aeebe  TEST RAX,RAX
048aeec1  JZ 0x048af051
048aeec7  MOVUPS XMM0,xmmword ptr [R15 + 0x50]
048aeecc  MOVUPS xmmword ptr [RAX + 0x50],XMM0
048aeed0  MOVUPS XMM0,xmmword ptr [R15 + 0x40]
048aeed5  MOVUPS xmmword ptr [RAX + 0x40],XMM0
048aeed9  MOVUPS XMM0,xmmword ptr [R15]
048aeedd  MOVUPS XMM1,xmmword ptr [R15 + 0x10]
048aeee2  MOVUPS XMM2,xmmword ptr [R15 + 0x20]
048aeee7  MOVUPS XMM3,xmmword ptr [R15 + 0x30]
048aeeec  MOVUPS xmmword ptr [RAX + 0x30],XMM3
048aeef0  MOVUPS xmmword ptr [RAX + 0x20],XMM2
048aeef4  MOVUPS xmmword ptr [RAX + 0x10],XMM1
048aeef8  MOVUPS xmmword ptr [RAX],XMM0
048aeefb  MOV ECX,dword ptr [R15 + 0x60]
048aeeff  MOV dword ptr [RAX + 0x60],ECX
048aef02  MOVUPS XMM0,xmmword ptr [R15 + 0x68]
048aef07  MOVUPS xmmword ptr [RAX + 0x68],XMM0
048aef0b  XORPS XMM0,XMM0
048aef0e  MOVUPS xmmword ptr [R15 + 0x68],XMM0
048aef13  MOV RCX,qword ptr [R15 + 0x78]
048aef17  MOV qword ptr [R15 + 0x78],0x0
048aef1f  MOV qword ptr [RAX + 0x78],RCX
048aef23  MOV qword ptr [RSP + 0x10],RAX
048aef28  LEA RSI,[RSP + 0xc]
048aef2d  LEA RDX,[RSP + 0x10]
048aef32  MOV RDI,R14
048aef35  CALL 0x048af130
048aef3a  MOV R15,qword ptr [RAX + 0x10]
048aef3e  MOV qword ptr [RBX + 0x10],R15
048aef42  MOV R14,qword ptr [RSP + 0x10]
048aef47  MOV qword ptr [RSP + 0x10],0x0
048aef50  TEST R14,R14
048aef53  JZ 0x048aefb8
048aef55  MOV R15,qword ptr [R14 + 0x78]
048aef59  MOV qword ptr [R14 + 0x78],0x0
048aef61  TEST R15,R15
048aef64  JZ 0x048aef7b
048aef66  MOV RDI,R15
048aef69  CALL 0x048ae940
048aef6e  MOV ESI,0x78
048aef73  MOV RDI,R15
048aef76  CALL 0x0412a280
048aef7b  MOV R15,qword ptr [R14 + 0x70]
048aef7f  TEST R15,R15
048aef82  JZ 0x048aefa7
048aef84  MOV RAX,-0x1
048aef8b  XADD.LOCK qword ptr [R15 + 0x8],RAX
048aef91  TEST RAX,RAX
048aef94  JNZ 0x048aefa7
048aef96  MOV RAX,qword ptr [R15]
048aef99  MOV RDI,R15
048aef9c  CALL qword ptr [RAX + 0x10]
048aef9f  MOV RDI,R15
048aefa2  CALL 0x0412c2d0
048aefa7  MOV ESI,0x80
048aefac  MOV RDI,R14
048aefaf  CALL 0x0412a280
048aefb4  MOV R15,qword ptr [RBX + 0x10]
048aefb8  MOV RAX,qword ptr [0x0f5463b0]
048aefbf  LEA RDI,[0xf5463b0]
048aefc6  MOV ESI,0x78
048aefcb  CALL qword ptr [RAX + 0x10]
048aefce  TEST RAX,RAX
048aefd1  JZ 0x048af068
048aefd7  XORPS XMM0,XMM0
048aefda  MOVUPS xmmword ptr [RAX + 0x60],XMM0
048aefde  MOVUPS xmmword ptr [RAX + 0x50],XMM0
048aefe2  MOVUPS xmmword ptr [RAX + 0x40],XMM0
048aefe6  MOVUPS xmmword ptr [RAX + 0x30],XMM0
048aefea  MOVUPS xmmword ptr [RAX + 0x20],XMM0
048aefee  MOVUPS xmmword ptr [RAX + 0x10],XMM0
048aeff2  MOVUPS xmmword ptr [RAX],XMM0
048aeff5  MOV qword ptr [RAX + 0x70],0x0
048aeffd  MOV R14,qword ptr [R15 + 0x78]
048af001  MOV qword ptr [R15 + 0x78],RAX
048af005  TEST R14,R14
048af008  JZ 0x048af023
048af00a  MOV RDI,R14
048af00d  CALL 0x048ae940
048af012  MOV ESI,0x78
048af017  MOV RDI,R14
048af01a  CALL 0x0412a280
048af01f  MOV R15,qword ptr [RBX + 0x10]
048af023  MOV EAX,dword ptr [RSP + 0xc]
048af027  MOV dword ptr [R15 + 0x8],EAX
048af02b  JMP 0x048af045
048af02d  MOV RCX,qword ptr [R14 + 0x20]
048af031  MOV RAX,RCX
048af034  CMP RAX,RCX
048af037  JZ 0x048aeea8
048af03d  MOV RAX,qword ptr [RAX + 0x10]
048af041  MOV qword ptr [RBX + 0x10],RAX
048af045  ADD RSP,0x18
048af049  POP RBX
048af04a  POP R12
048af04c  POP R14
048af04e  POP R15
048af050  RET
048af051  MOV EDI,0x80
048af056  XOR ESI,ESI
048af058  MOV R12,RAX
048af05b  CALL 0x0eec74c0
048af060  MOV RAX,R12
048af063  JMP 0x048aeec7
048af068  MOV EDI,0x78
048af06d  XOR ESI,ESI
048af06f  MOV R14,RAX
048af072  CALL 0x0eec74c0
048af077  MOV RAX,R14
048af07a  JMP 0x048aefd7
```
