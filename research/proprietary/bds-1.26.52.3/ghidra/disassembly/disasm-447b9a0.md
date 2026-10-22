# 447b9a0

```asm
0447b9a0  MOV RAX,qword ptr [RSI]
0447b9a3  MOV qword ptr [RDI],RAX
0447b9a6  TEST RAX,RAX
0447b9a9  JZ 0x0447b9af
0447b9ab  INC.LOCK dword ptr [RAX + 0x18]
0447b9af  MOVUPS XMM0,xmmword ptr [RSI + 0x8]
0447b9b3  MOVUPS xmmword ptr [RDI + 0x8],XMM0
0447b9b7  RET
```
