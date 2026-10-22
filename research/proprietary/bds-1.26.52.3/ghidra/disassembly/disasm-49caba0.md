# 49caba0  XoroshiroRandom::vslot16

```asm
049caba0  MOVSS XMM1,dword ptr [0x0f54fd80]
049caba8  UCOMISS XMM1,XMM0
049cabab  JBE 0x049cabd6
049cabad  MOV AL,0x1
049cabaf  MOVSS XMM1,dword ptr [0x011987c8]
049cabb7  UCOMISS XMM1,XMM0
049cabba  JNC 0x049cabd5
049cabbc  PUSH RAX
049cabbd  MOV RAX,qword ptr [RDI]
049cabc0  MOVSS dword ptr [RSP + 0x4],XMM0
049cabc6  CALL qword ptr [RAX + 0x30]
049cabc9  UCOMISS XMM0,dword ptr [RSP + 0x4]
049cabce  SETA AL
049cabd1  ADD RSP,0x8
049cabd5  RET
049cabd6  XOR EAX,EAX
049cabd8  RET
```
