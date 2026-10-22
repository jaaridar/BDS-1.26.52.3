# 412ed50

```asm
0412ed50  TEST byte ptr [RDI],0x1
0412ed53  JNZ 0x0412ed56
0412ed55  RET
0412ed56  MOV RSI,qword ptr [RDI]
0412ed59  MOV RDI,qword ptr [RDI + 0x10]
0412ed5d  AND RSI,-0x2
0412ed61  JMP 0x0412a280
```
