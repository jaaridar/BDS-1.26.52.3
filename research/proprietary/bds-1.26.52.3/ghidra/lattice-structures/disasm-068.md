# FUN_04fbd7c0 (disassembly)

```
04fbd7c0  PUSH R15
04fbd7c2  PUSH R14
04fbd7c4  PUSH RBX
04fbd7c5  MOV R14,qword ptr [RDI]
04fbd7c8  TEST R14,R14
04fbd7cb  JZ 0x04fbd81b
04fbd7cd  MOV RBX,RDI
04fbd7d0  MOV R15,qword ptr [RDI + 0x8]
04fbd7d4  MOV RDI,R14
04fbd7d7  CMP R14,R15
04fbd7da  JNZ 0x04fbd7e9
04fbd7dc  JMP 0x04fbd806
04fbd7e0  ADD R15,-0x28
04fbd7e4  CMP R15,R14
04fbd7e7  JZ 0x04fbd803
04fbd7e9  TEST byte ptr [R15 + -0x20],0x1
04fbd7ee  JZ 0x04fbd7e0
04fbd7f0  MOV RSI,qword ptr [R15 + -0x20]
04fbd7f4  MOV RDI,qword ptr [R15 + -0x10]
04fbd7f8  AND RSI,-0x2
04fbd7fc  CALL 0x0412a280
04fbd801  JMP 0x04fbd7e0
04fbd803  MOV RDI,qword ptr [RBX]
04fbd806  MOV qword ptr [RBX + 0x8],R14
04fbd80a  MOV RSI,qword ptr [RBX + 0x10]
04fbd80e  SUB RSI,RDI
04fbd811  POP RBX
04fbd812  POP R14
04fbd814  POP R15
04fbd816  JMP 0x0412a280
04fbd81b  POP RBX
04fbd81c  POP R14
04fbd81e  POP R15
04fbd820  RET
```
