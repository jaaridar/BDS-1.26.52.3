# FUN_04fc0b90 (disassembly)

```
04fc0b90  PUSH R14
04fc0b92  PUSH RBX
04fc0b93  PUSH RAX
04fc0b94  MOV RBX,RDI
04fc0b97  MOV R14,qword ptr [RDI + 0x8]
04fc0b9b  MOV RAX,qword ptr [RDI + 0x10]
04fc0b9f  CMP R14,RAX
04fc0ba2  JNZ 0x04fc0bc8
04fc0ba4  MOV RDI,qword ptr [RBX]
04fc0ba7  TEST RDI,RDI
04fc0baa  JZ 0x04fc0bed
04fc0bac  MOV RSI,qword ptr [RBX + 0x18]
04fc0bb0  SUB RSI,RDI
04fc0bb3  ADD RSP,0x8
04fc0bb7  POP RBX
04fc0bb8  POP R14
04fc0bba  JMP 0x0412a280
04fc0bc0  MOV RAX,RCX
04fc0bc3  CMP R14,RCX
04fc0bc6  JZ 0x04fc0ba4
04fc0bc8  LEA RCX,[RAX + -0x28]
04fc0bcc  MOV qword ptr [RBX + 0x10],RCX
04fc0bd0  TEST byte ptr [RAX + -0x20],0x1
04fc0bd4  JZ 0x04fc0bc0
04fc0bd6  MOV RSI,qword ptr [RAX + -0x20]
04fc0bda  MOV RDI,qword ptr [RAX + -0x10]
04fc0bde  AND RSI,-0x2
04fc0be2  CALL 0x0412a280
04fc0be7  MOV RCX,qword ptr [RBX + 0x10]
04fc0beb  JMP 0x04fc0bc0
04fc0bed  ADD RSP,0x8
04fc0bf1  POP RBX
04fc0bf2  POP R14
04fc0bf4  RET
```
