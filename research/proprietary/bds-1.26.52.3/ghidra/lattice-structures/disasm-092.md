# FUN_0eeb6180 (disassembly)

```
0eeb6180  TEST RDI,RDI
0eeb6183  JZ 0x0eeb6197
0eeb6185  MOV RAX,-0x1
0eeb618c  XADD.LOCK qword ptr [RDI + 0x8],RAX
0eeb6192  TEST RAX,RAX
0eeb6195  JZ 0x0eeb6198
0eeb6197  RET
0eeb6198  PUSH RBX
0eeb6199  MOV RAX,qword ptr [RDI]
0eeb619c  MOV RBX,RDI
0eeb619f  CALL qword ptr [RAX + 0x10]
0eeb61a2  MOV RDI,RBX
0eeb61a5  POP RBX
0eeb61a6  JMP 0x0412c2d0
```
