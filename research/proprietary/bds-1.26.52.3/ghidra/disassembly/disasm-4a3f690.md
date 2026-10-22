# 4a3f690  ReplacementBiomeSource<?, ?, long, ?, char, ?, ?*, short>::vslot5

```asm
04a3f690  PUSH RBX
04a3f691  SUB RSP,0x10
04a3f695  MOV RBX,RDI
04a3f698  XORPS XMM0,XMM0
04a3f69b  MOVAPS xmmword ptr [RSP],XMM0
04a3f69f  MOV byte ptr [RSP + 0xc],0x1
04a3f6a4  MOV RAX,qword ptr [RSI]
04a3f6a7  MOV R8,RSP
04a3f6aa  CALL qword ptr [RAX + 0x30]
04a3f6ad  MOV RAX,RBX
04a3f6b0  ADD RSP,0x10
04a3f6b4  POP RBX
04a3f6b5  RET
```
