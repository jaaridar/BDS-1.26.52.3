# FUN_05ab3aa0 (disassembly)

```
05ab3aa0  PUSH RBX
05ab3aa1  MOV RBX,qword ptr [RDI + 0x8]
05ab3aa5  TEST RBX,RBX
05ab3aa8  JZ 0x05ab3abc
05ab3aaa  MOV RAX,-0x1
05ab3ab1  XADD.LOCK qword ptr [RBX + 0x8],RAX
05ab3ab7  TEST RAX,RAX
05ab3aba  JZ 0x05ab3abe
05ab3abc  POP RBX
05ab3abd  RET
05ab3abe  MOV RAX,qword ptr [RBX]
05ab3ac1  MOV RDI,RBX
05ab3ac4  CALL qword ptr [RAX + 0x10]
05ab3ac7  MOV RDI,RBX
05ab3aca  POP RBX
05ab3acb  JMP 0x0412c2d0
```
