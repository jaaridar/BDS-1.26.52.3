# FUN_04fd3a62 (disassembly)

```
04fd3a62  CALL 0x0412a280
04fd3a67  TEST byte ptr [RSP + 0x20],0x1
04fd3a6c  JZ 0x04fd3a81
04fd3a6e  MOV RSI,qword ptr [RSP + 0x20]
04fd3a73  MOV RDI,qword ptr [RSP + 0x30]
04fd3a78  AND RSI,-0x2
04fd3a7c  CALL 0x0412a280
04fd3a81  ADD RSP,0x98
04fd3a88  POP RBX
04fd3a89  POP R14
04fd3a8b  RET
```
