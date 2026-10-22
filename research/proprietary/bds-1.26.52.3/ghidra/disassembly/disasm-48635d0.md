# 48635d0

```asm
048635d0  MOV byte ptr [RDI + 0x8],0x0
048635d4  MOVZX EAX,byte ptr [RSI + 0x8]
048635d8  MOV byte ptr [RDI + 0x8],AL
048635db  MOV byte ptr [RSI + 0x8],0x0
048635df  MOV RAX,qword ptr [RDI]
048635e2  MOV RCX,qword ptr [RSI]
048635e5  MOV qword ptr [RDI],RCX
048635e8  MOV qword ptr [RSI],RAX
048635eb  RET
```
