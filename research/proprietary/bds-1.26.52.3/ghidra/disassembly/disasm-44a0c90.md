# 44a0c90  webrtc::RTCCertificateGenerator::vslot2

```asm
044a0c90  PUSH R15
044a0c92  PUSH R14
044a0c94  PUSH R13
044a0c96  PUSH R12
044a0c98  PUSH RBX
044a0c99  SUB RSP,0xa0
044a0ca0  MOV R15,RCX
044a0ca3  MOV R14,qword ptr [RDI + 0x10]
044a0ca7  MOV EAX,dword ptr [RSI + 0x8]
044a0caa  MOV dword ptr [RSP + 0x58],EAX
044a0cae  MOV RAX,qword ptr [RSI]
044a0cb1  MOV qword ptr [RSP + 0x50],RAX
044a0cb6  MOV RAX,qword ptr [RDX]
044a0cb9  MOV qword ptr [RSP + 0x60],RAX
044a0cbe  MOVZX EAX,byte ptr [RDX + 0x8]
044a0cc2  MOV byte ptr [RSP + 0x68],AL
044a0cc6  MOV RAX,qword ptr [RDI + 0x8]
044a0cca  MOV qword ptr [RSP + 0x70],RAX
044a0ccf  LEA RBX,[RSP + 0x80]
044a0cd7  XOR EDI,EDI
044a0cd9  MOV RSI,RCX
044a0cdc  MOV RDX,RBX
044a0cdf  CALL qword ptr [RCX + 0x10]
044a0ce2  MOVAPS XMM0,xmmword ptr [R15 + 0x10]
044a0ce7  MOV R12,qword ptr [R15 + 0x10]
044a0ceb  MOVAPS xmmword ptr [RSP + 0x90],XMM0
044a0cf3  LEA R13,[0xd58ef80]
044a0cfa  MOV qword ptr [R15 + 0x10],R13
044a0cfe  MOV qword ptr [R15 + 0x18],0x0
044a0d06  MOV EDI,0x50
044a0d0b  CALL 0x0ee32660
044a0d10  MOV R15,RAX
044a0d13  MOV RAX,qword ptr [RSP + 0x70]
044a0d18  MOV qword ptr [R15 + 0x20],RAX
044a0d1c  MOVAPS XMM0,xmmword ptr [RSP + 0x50]
044a0d21  MOVAPS XMM1,xmmword ptr [RSP + 0x60]
044a0d26  MOVAPS xmmword ptr [R15 + 0x10],XMM1
044a0d2b  MOVAPS xmmword ptr [R15],XMM0
044a0d2f  MOV RDX,R15
044a0d32  ADD RDX,0x30
044a0d36  XOR EDI,EDI
044a0d38  MOV RSI,RBX
044a0d3b  CALL R12
044a0d3e  MOVAPS XMM0,xmmword ptr [RSP + 0x90]
044a0d46  MOVAPS xmmword ptr [R15 + 0x40],XMM0
044a0d4b  MOV qword ptr [RSP + 0x90],R13
044a0d53  MOV qword ptr [RSP + 0x98],0x0
044a0d5f  MOV qword ptr [RSP + 0x30],R15
044a0d64  MOV qword ptr [RSP + 0x10],R15
044a0d69  LEA RAX,[0x44a1010]
044a0d70  MOV qword ptr [RSP + 0x20],RAX
044a0d75  LEA RAX,[0x44a0e40]
044a0d7c  MOV qword ptr [RSP + 0x28],RAX
044a0d81  MOV qword ptr [RSP + 0x40],R13
044a0d86  MOV qword ptr [RSP + 0x48],0x0
044a0d8f  MOV RAX,qword ptr [R14]
044a0d92  LEA RSI,[RSP + 0x10]
044a0d97  LEA RDX,[RSP + 0xf]
044a0d9c  LEA RCX,[RSP + 0xe]
044a0da1  MOV RDI,R14
044a0da4  CALL qword ptr [RAX + 0x8]
044a0da7  LEA RDX,[RSP + 0x10]
044a0dac  MOV EDI,0x1
044a0db1  MOV RSI,RDX
044a0db4  CALL qword ptr [RSP + 0x20]
044a0db8  LEA RDX,[RSP + 0x30]
044a0dbd  MOV EDI,0x1
044a0dc2  MOV RSI,RDX
044a0dc5  CALL qword ptr [RSP + 0x40]
044a0dc9  MOV EDI,0x1
044a0dce  MOV RSI,RBX
044a0dd1  MOV RDX,RBX
044a0dd4  CALL qword ptr [RSP + 0x90]
044a0ddb  ADD RSP,0xa0
044a0de2  POP RBX
044a0de3  POP R12
044a0de5  POP R13
044a0de7  POP R14
044a0de9  POP R15
044a0deb  RET
```
