# 49caae0  XoroshiroRandom::vslot11

```asm
049caae0  TEST EDX,EDX
049caae2  JLE 0x049caafc
049caae4  MOV AL,0x1
049caae6  CMP ESI,EDX
049caae8  JGE 0x049caafb
049caaea  PUSH RBX
049caaeb  MOV RAX,qword ptr [RDI]
049caaee  MOV EBX,ESI
049caaf0  MOV ESI,EDX
049caaf2  CALL qword ptr [RAX + 0x18]
049caaf5  CMP EBX,EAX
049caaf7  SETG AL
049caafa  POP RBX
049caafb  RET
049caafc  XOR EAX,EAX
049caafe  RET
```
