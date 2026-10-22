# 4a3b510  BiomeSource3d::vslot9

```asm
04a3b510  MOV RCX,qword ptr [RDI + 0x10]
04a3b514  MOV RAX,qword ptr [RDI + 0x18]
04a3b518  CMP RCX,RAX
04a3b51b  JZ 0x04a3b53b
04a3b51d  NOP dword ptr [RAX]
04a3b520  MOV RDX,qword ptr [RCX]
04a3b523  CMP qword ptr [RDX + 0x190],RSI
04a3b52a  JZ 0x04a3b53b
04a3b52c  ADD RCX,0xe0
04a3b533  CMP RCX,RAX
04a3b536  JNZ 0x04a3b520
04a3b538  MOV RCX,RAX
04a3b53b  CMP RCX,RAX
04a3b53e  SETNZ AL
04a3b541  RET
```
