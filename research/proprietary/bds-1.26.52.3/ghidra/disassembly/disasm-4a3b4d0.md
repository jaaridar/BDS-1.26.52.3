# 4a3b4d0  BiomeSource3d::vslot8

```asm
04a3b4d0  MOV RCX,qword ptr [RDI + 0x10]
04a3b4d4  MOV RAX,qword ptr [RDI + 0x18]
04a3b4d8  CMP RCX,RAX
04a3b4db  JZ 0x04a3b4fb
04a3b4dd  NOP dword ptr [RAX]
04a3b4e0  MOV RDX,qword ptr [RCX]
04a3b4e3  CMP word ptr [RDX + 0x168],SI
04a3b4ea  JZ 0x04a3b4fb
04a3b4ec  ADD RCX,0xe0
04a3b4f3  CMP RCX,RAX
04a3b4f6  JNZ 0x04a3b4e0
04a3b4f8  MOV RCX,RAX
04a3b4fb  CMP RCX,RAX
04a3b4fe  SETNZ AL
04a3b501  RET
```
