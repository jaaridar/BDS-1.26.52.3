# FUN_04862b80 (disassembly)

```
04862b80  MOV RAX,qword ptr [RDI]
04862b83  CMP byte ptr [RDI + 0x8],0x1
04862b87  JNZ 0x04862b8d
04862b89  MOV RAX,qword ptr [RAX]
04862b8c  RET
04862b8d  ADD RAX,0x28
04862b91  RET
```
