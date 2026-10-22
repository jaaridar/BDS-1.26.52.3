# 49ca8b0  XoroshiroRandom::vslot7

```asm
049ca8b0  MOV RAX,qword ptr [RDI + 0x8]
049ca8b4  MOV RCX,qword ptr [RDI + 0x10]
049ca8b8  LEA RDX,[RCX + RAX*0x1]
049ca8bc  ROL RDX,0x11
049ca8c0  ADD RDX,RAX
049ca8c3  XOR RCX,RAX
049ca8c6  ROL RAX,0x31
049ca8ca  MOV RSI,RCX
049ca8cd  SHL RSI,0x15
049ca8d1  XOR RSI,RAX
049ca8d4  XOR RSI,RCX
049ca8d7  ROL RCX,0x1c
049ca8db  MOV qword ptr [RDI + 0x8],RSI
049ca8df  SHR RDX,0xb
049ca8e3  CVTSI2SD XMM0,RDX
049ca8e8  MOV qword ptr [RDI + 0x10],RCX
049ca8ec  MULSD XMM0,qword ptr [0x014f04b8]
049ca8f4  RET
```
