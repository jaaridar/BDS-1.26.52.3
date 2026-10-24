# FUN_048abaf0 (disassembly)

```
048abaf0  PUSH R14
048abaf2  PUSH RBX
048abaf3  PUSH RAX
048abaf4  MOV RBX,RDI
048abaf7  MOV R14,qword ptr [RDI + 0x8]
048abafb  MOV RAX,qword ptr [RDI + 0x10]
048abaff  CMP R14,RAX
048abb02  JNZ 0x048abb28
048abb04  MOV RDI,qword ptr [RBX]
048abb07  TEST RDI,RDI
048abb0a  JZ 0x048abb4d
048abb0c  MOV RSI,qword ptr [RBX + 0x18]
048abb10  SUB RSI,RDI
048abb13  ADD RSP,0x8
048abb17  POP RBX
048abb18  POP R14
048abb1a  JMP 0x0412a280
048abb20  MOV RAX,RCX
048abb23  CMP R14,RCX
048abb26  JZ 0x048abb04
048abb28  LEA RCX,[RAX + -0x18]
048abb2c  MOV qword ptr [RBX + 0x10],RCX
048abb30  TEST byte ptr [RAX + -0x18],0x1
048abb34  JZ 0x048abb20
048abb36  MOV RSI,qword ptr [RAX + -0x18]
048abb3a  MOV RDI,qword ptr [RAX + -0x8]
048abb3e  AND RSI,-0x2
048abb42  CALL 0x0412a280
048abb47  MOV RCX,qword ptr [RBX + 0x10]
048abb4b  JMP 0x048abb20
048abb4d  ADD RSP,0x8
048abb51  POP RBX
048abb52  POP R14
048abb54  RET
```
