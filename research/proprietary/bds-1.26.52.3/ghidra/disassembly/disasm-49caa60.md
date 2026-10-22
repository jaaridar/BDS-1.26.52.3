# 49caa60  XoroshiroRandom::vslot9

```asm
049caa60  TEST ESI,ESI
049caa62  JZ 0x049caade
049caa64  MOV RCX,qword ptr [RDI + 0x8]
049caa68  MOV RAX,qword ptr [RDI + 0x10]
049caa6c  CMP ESI,0x1
049caa6f  JZ 0x049caab5
049caa71  MOV EDX,ESI
049caa73  AND EDX,0xfffffffe
049caa76  NOP word ptr CS:[RAX + RAX*0x1]
049caa80  XOR RAX,RCX
049caa83  ROL RCX,0x31
049caa87  MOV R8,RAX
049caa8a  SHL R8,0x15
049caa8e  XOR R8,RCX
049caa91  XOR R8,RAX
049caa94  ROL RAX,0x1c
049caa98  XOR RAX,R8
049caa9b  ROL R8,0x31
049caa9f  MOV RCX,RAX
049caaa2  SHL RCX,0x15
049caaa6  XOR RCX,R8
049caaa9  XOR RCX,RAX
049caaac  ROL RAX,0x1c
049caab0  ADD EDX,-0x2
049caab3  JNZ 0x049caa80
049caab5  TEST SIL,0x1
049caab9  JZ 0x049caad6
049caabb  XOR RAX,RCX
049caabe  ROL RCX,0x31
049caac2  MOV RDX,RAX
049caac5  SHL RDX,0x15
049caac9  XOR RDX,RCX
049caacc  XOR RDX,RAX
049caacf  ROL RAX,0x1c
049caad3  MOV RCX,RDX
049caad6  MOV qword ptr [RDI + 0x8],RCX
049caada  MOV qword ptr [RDI + 0x10],RAX
049caade  RET
```
