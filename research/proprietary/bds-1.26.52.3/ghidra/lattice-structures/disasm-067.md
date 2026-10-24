# FUN_04fbd840 (disassembly)

```
04fbd840  PUSH R14
04fbd842  PUSH RBX
04fbd843  PUSH RAX
04fbd844  MOV RBX,RDI
04fbd847  MOV R14,qword ptr [RDI + 0x8]
04fbd84b  MOV RAX,qword ptr [RDI + 0x10]
04fbd84f  CMP R14,RAX
04fbd852  JNZ 0x04fbd878
04fbd854  MOV RDI,qword ptr [RBX]
04fbd857  TEST RDI,RDI
04fbd85a  JZ 0x04fbd89d
04fbd85c  MOV RSI,qword ptr [RBX + 0x18]
04fbd860  SUB RSI,RDI
04fbd863  ADD RSP,0x8
04fbd867  POP RBX
04fbd868  POP R14
04fbd86a  JMP 0x0412a280
04fbd870  MOV RAX,RCX
04fbd873  CMP R14,RCX
04fbd876  JZ 0x04fbd854
04fbd878  LEA RCX,[RAX + -0x28]
04fbd87c  MOV qword ptr [RBX + 0x10],RCX
04fbd880  TEST byte ptr [RAX + -0x20],0x1
04fbd884  JZ 0x04fbd870
04fbd886  MOV RSI,qword ptr [RAX + -0x20]
04fbd88a  MOV RDI,qword ptr [RAX + -0x10]
04fbd88e  AND RSI,-0x2
04fbd892  CALL 0x0412a280
04fbd897  MOV RCX,qword ptr [RBX + 0x10]
04fbd89b  JMP 0x04fbd870
04fbd89d  ADD RSP,0x8
04fbd8a1  POP RBX
04fbd8a2  POP R14
04fbd8a4  RET
```
