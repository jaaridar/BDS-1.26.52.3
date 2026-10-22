# 49cabe0  XoroshiroRandom::vslot17

```asm
049cabe0  MOVSS XMM1,dword ptr [0x011983f0]
049cabe8  UCOMISS XMM1,XMM0
049cabeb  JBE 0x049cac11
049cabed  MOV AL,0x1
049cabef  XORPS XMM1,XMM1
049cabf2  UCOMISS XMM1,XMM0
049cabf5  JNC 0x049cac10
049cabf7  PUSH RAX
049cabf8  MOV RAX,qword ptr [RDI]
049cabfb  MOVSS dword ptr [RSP + 0x4],XMM0
049cac01  CALL qword ptr [RAX + 0x30]
049cac04  UCOMISS XMM0,dword ptr [RSP + 0x4]
049cac09  SETNC AL
049cac0c  ADD RSP,0x8
049cac10  RET
049cac11  XOR EAX,EAX
049cac13  RET
```
