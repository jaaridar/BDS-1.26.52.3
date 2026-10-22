# 4a41bf0  ReplacementBiomeSource<?, ?*, short, ?, double>::vslot5

```asm
04a41bf0  PUSH RBX
04a41bf1  SUB RSP,0x10
04a41bf5  MOV RBX,RDI
04a41bf8  XORPS XMM0,XMM0
04a41bfb  MOVAPS xmmword ptr [RSP],XMM0
04a41bff  MOV byte ptr [RSP + 0xc],0x1
04a41c04  MOV RAX,qword ptr [RSI]
04a41c07  MOV R8,RSP
04a41c0a  CALL qword ptr [RAX + 0x30]
04a41c0d  MOV RAX,RBX
04a41c10  ADD RSP,0x10
04a41c14  POP RBX
04a41c15  RET
```
