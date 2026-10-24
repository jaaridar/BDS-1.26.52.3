# FUN_09cbbb50 (disassembly)

```
09cbbb50  PUSH R15
09cbbb52  PUSH R14
09cbbb54  PUSH R13
09cbbb56  PUSH R12
09cbbb58  PUSH RBX
09cbbb59  SUB RSP,0x20
09cbbb5d  MOV R15,RSI
09cbbb60  MOV RBX,RDI
09cbbb63  XORPS XMM0,XMM0
09cbbb66  MOVUPS xmmword ptr [RDI],XMM0
09cbbb69  MOV qword ptr [RDI + 0x10],0x0
09cbbb71  MOV qword ptr [RSP + 0x10],RDI
09cbbb76  MOV byte ptr [RSP + 0x18],0x0
09cbbb7b  LEA RDI,[0xf5463b0]
09cbbb82  MOV RAX,qword ptr [0x0f5463b0]
09cbbb89  MOV ESI,0x98
09cbbb8e  CALL qword ptr [RAX + 0x10]
09cbbb91  MOV R14,RAX
09cbbb94  TEST RAX,RAX
09cbbb97  JZ 0x09cbbc2f
09cbbb9d  MOV qword ptr [RBX],R14
09cbbba0  MOV qword ptr [RBX + 0x8],R14
09cbbba4  LEA R13,[R14 + 0x98]
09cbbbab  MOV qword ptr [RBX + 0x10],R13
09cbbbaf  MOV RDI,R14
09cbbbb2  MOV RSI,R15
09cbbbb5  CALL 0x0c4510a0
09cbbbba  LEA RAX,[0xf371da8]
09cbbbc1  MOV qword ptr [R14],RAX
09cbbbc4  MOV dword ptr [R14 + 0x80],0x0
09cbbbcf  MOV dword ptr [R14 + 0x90],0x0
09cbbbda  MOV EAX,dword ptr [R15 + 0x90]
09cbbbe1  MOV ECX,0xffffffff
09cbbbe6  CMP RAX,RCX
09cbbbe9  JZ 0x09cbbc12
09cbbbeb  MOV R12,R14
09cbbbee  SUB R12,-0x80
09cbbbf2  SUB R15,-0x80
09cbbbf6  MOV qword ptr [RSP + 0x8],R12
09cbbbfb  LEA RCX,[0xf38c5a0]
09cbbc02  LEA RDI,[RSP + 0x8]
09cbbc07  MOV RSI,R12
09cbbc0a  MOV RDX,R15
09cbbc0d  CALL qword ptr [RCX + RAX*0x8]
09cbbc10  JMP 0x09cbbc1d
09cbbc12  MOV dword ptr [R14 + 0x90],0xffffffff
09cbbc1d  MOV qword ptr [RBX + 0x8],R13
09cbbc21  ADD RSP,0x20
09cbbc25  POP RBX
09cbbc26  POP R12
09cbbc28  POP R13
09cbbc2a  POP R14
09cbbc2c  POP R15
09cbbc2e  RET
09cbbc2f  MOV EDI,0x98
09cbbc34  XOR ESI,ESI
09cbbc36  CALL 0x0eec74c0
09cbbc3b  JMP 0x09cbbb9d
```
