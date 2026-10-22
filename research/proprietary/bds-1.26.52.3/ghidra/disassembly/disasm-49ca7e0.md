# 49ca7e0  XoroshiroRandom::vslot4

```asm
049ca7e0  MOV RCX,qword ptr [RDI + 0x8]
049ca7e4  MOV RDX,qword ptr [RDI + 0x10]
049ca7e8  LEA RAX,[RDX + RCX*0x1]
049ca7ec  ROL RAX,0x11
049ca7f0  ADD RAX,RCX
049ca7f3  XOR RDX,RCX
049ca7f6  ROL RCX,0x31
049ca7fa  MOV RSI,RDX
049ca7fd  SHL RSI,0x15
049ca801  XOR RSI,RCX
049ca804  XOR RSI,RDX
049ca807  MOV qword ptr [RDI + 0x8],RSI
049ca80b  ROL RDX,0x1c
049ca80f  MOV qword ptr [RDI + 0x10],RDX
049ca813  RET
```
