# 4a7efb0

```asm
04a7efb0  PUSH RBX
04a7efb1  MOV RBX,qword ptr [RDI + 0x8]
04a7efb5  TEST RBX,RBX
04a7efb8  JZ 0x04a7efcc
04a7efba  MOV RAX,-0x1
04a7efc1  XADD.LOCK qword ptr [RBX + 0x8],RAX
04a7efc7  TEST RAX,RAX
04a7efca  JZ 0x04a7efce
04a7efcc  POP RBX
04a7efcd  RET
04a7efce  MOV RAX,qword ptr [RBX]
04a7efd1  MOV RDI,RBX
04a7efd4  CALL qword ptr [RAX + 0x10]
04a7efd7  MOV RDI,RBX
04a7efda  POP RBX
04a7efdb  JMP 0x0412c2d0
```
