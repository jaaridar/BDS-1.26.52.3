# FUN_0ee4a030 (disassembly)

```
0ee4a030  MOV EAX,dword ptr [RDI + 0x9cc]
0ee4a036  CMP EAX,0x271
0ee4a03b  JL 0x0ee4a09c
0ee4a03d  MOV dword ptr [RDI + 0xc],0x1571
0ee4a044  MOV dword ptr [RDI + 0x9cc],0x1
0ee4a04e  MOV EAX,0x1
0ee4a053  NOP dword ptr CS:[RAX + RAX*0x1]
0ee4a060  CDQE
0ee4a062  MOV ECX,dword ptr [RDI + RAX*0x4 + 0x8]
0ee4a066  MOV EDX,ECX
0ee4a068  SHR EDX,0x1e
0ee4a06b  XOR EDX,ECX
0ee4a06d  IMUL ECX,EDX,0x6c078965
0ee4a073  ADD ECX,EAX
0ee4a075  MOV dword ptr [RDI + RAX*0x4 + 0xc],ECX
0ee4a079  MOV ECX,dword ptr [RDI + 0x9cc]
0ee4a07f  LEA EAX,[RCX + 0x1]
0ee4a082  MOV dword ptr [RDI + 0x9cc],EAX
0ee4a088  CMP ECX,0x26f
0ee4a08e  JL 0x0ee4a060
0ee4a090  MOV dword ptr [RDI + 0x9d0],0x270
0ee4a09a  JMP 0x0ee4a0a7
0ee4a09c  CMP EAX,0x270
0ee4a0a1  JNZ 0x0ee4a150
0ee4a0a7  MOV dword ptr [RDI + 0x9cc],0x0
0ee4a0b1  XOR EAX,EAX
0ee4a0b3  CDQE
0ee4a0b5  MOV ECX,0x80000000
0ee4a0ba  AND ECX,dword ptr [RDI + RAX*0x4 + 0xc]
0ee4a0be  MOV EDX,dword ptr [RDI + RAX*0x4 + 0x10]
0ee4a0c2  MOV ESI,EDX
0ee4a0c4  AND ESI,0x7ffffffe
0ee4a0ca  OR ESI,ECX
0ee4a0cc  SHR ESI,0x1
0ee4a0ce  AND EDX,0x1
0ee4a0d1  LEA RCX,[0x14f0860]
0ee4a0d8  MOV ECX,dword ptr [RCX + RDX*0x4]
0ee4a0db  XOR ECX,dword ptr [RDI + RAX*0x4 + 0x640]
0ee4a0e2  XOR ECX,ESI
0ee4a0e4  MOV dword ptr [RDI + RAX*0x4 + 0xc],ECX
0ee4a0e8  MOVSXD RAX,dword ptr [RDI + 0x9d0]
0ee4a0ef  CMP RAX,0x26f
0ee4a0f5  JG 0x0ee4a114
0ee4a0f7  MOV ECX,dword ptr [RDI + RAX*0x4 + 0x8]
0ee4a0fb  MOV EDX,ECX
0ee4a0fd  SHR EDX,0x1e
0ee4a100  XOR EDX,ECX
0ee4a102  IMUL ECX,EDX,0x6c078965
0ee4a108  ADD ECX,EAX
0ee4a10a  MOV dword ptr [RDI + RAX*0x4 + 0xc],ECX
0ee4a10e  INC dword ptr [RDI + 0x9d0]
0ee4a114  MOVSXD RAX,dword ptr [RDI + 0x9cc]
0ee4a11b  LEA ECX,[RAX + 0x1]
0ee4a11e  MOV dword ptr [RDI + 0x9cc],ECX
0ee4a124  MOV EAX,dword ptr [RDI + RAX*0x4 + 0xc]
0ee4a128  MOV ECX,EAX
0ee4a12a  SHR ECX,0xb
0ee4a12d  XOR ECX,EAX
0ee4a12f  MOV EAX,ECX
0ee4a131  SHL EAX,0x7
0ee4a134  AND EAX,0x9d2c5680
0ee4a139  XOR EAX,ECX
0ee4a13b  MOV ECX,EAX
0ee4a13d  SHL ECX,0xf
0ee4a140  AND ECX,0xefc60000
0ee4a146  XOR ECX,EAX
0ee4a148  MOV EAX,ECX
0ee4a14a  SHR EAX,0x12
0ee4a14d  XOR EAX,ECX
0ee4a14f  RET
0ee4a150  CMP EAX,0xe3
0ee4a155  JL 0x0ee4a0b3
0ee4a15b  CMP EAX,0x26e
0ee4a160  JA 0x0ee4a1a0
0ee4a162  MOV ECX,0x80000000
0ee4a167  AND ECX,dword ptr [RDI + RAX*0x4 + 0xc]
0ee4a16b  MOV EDX,dword ptr [RDI + RAX*0x4 + 0x10]
0ee4a16f  MOV ESI,EDX
0ee4a171  AND ESI,0x7ffffffe
0ee4a177  OR ESI,ECX
0ee4a179  MOV ECX,EAX
0ee4a17b  ADD ECX,0xffffff1d
0ee4a181  SHR ESI,0x1
0ee4a183  AND EDX,0x1
0ee4a186  LEA R8,[0x14f0860]
0ee4a18d  MOV EDX,dword ptr [R8 + RDX*0x4]
0ee4a191  XOR EDX,dword ptr [RDI + RCX*0x4 + 0xc]
0ee4a195  XOR EDX,ESI
0ee4a197  MOV dword ptr [RDI + RAX*0x4 + 0xc],EDX
0ee4a19b  JMP 0x0ee4a114
0ee4a1a0  MOV EAX,0x80000000
0ee4a1a5  AND EAX,dword ptr [RDI + 0x9c8]
0ee4a1ab  MOV ECX,dword ptr [RDI + 0xc]
0ee4a1ae  MOV EDX,ECX
0ee4a1b0  AND EDX,0x7ffffffe
0ee4a1b6  OR EDX,EAX
0ee4a1b8  SHR EDX,0x1
0ee4a1ba  AND ECX,0x1
0ee4a1bd  LEA RAX,[0x14f0860]
0ee4a1c4  MOV EAX,dword ptr [RAX + RCX*0x4]
0ee4a1c7  XOR EAX,dword ptr [RDI + 0x63c]
0ee4a1cd  XOR EAX,EDX
0ee4a1cf  MOV dword ptr [RDI + 0x9c8],EAX
0ee4a1d5  JMP 0x0ee4a114
```
