# 4a3ae00  BiomeSource3d::vslot5

```asm
04a3ae00  PUSH RBX
04a3ae01  SUB RSP,0x10
04a3ae05  MOV RBX,RDI
04a3ae08  XORPS XMM0,XMM0
04a3ae0b  MOVAPS xmmword ptr [RSP],XMM0
04a3ae0f  MOV byte ptr [RSP + 0xc],0x1
04a3ae14  MOV RAX,qword ptr [RSI]
04a3ae17  MOV R8,RSP
04a3ae1a  CALL qword ptr [RAX + 0x30]
04a3ae1d  MOV RAX,RBX
04a3ae20  ADD RSP,0x10
04a3ae24  POP RBX
04a3ae25  RET
```
