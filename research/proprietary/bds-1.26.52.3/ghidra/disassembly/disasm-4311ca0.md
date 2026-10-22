# 4311ca0

```asm
04311ca0  PUSH R14
04311ca2  PUSH RBX
04311ca3  PUSH RAX
04311ca4  MOV R14,RSI
04311ca7  MOV RBX,RDI
04311caa  CALL 0x042e2fd0
04311caf  MOVUPS XMM0,xmmword ptr [R14 + 0x70]
04311cb4  MOVUPS XMM1,xmmword ptr [R14 + 0x80]
04311cbc  MOVUPS XMM2,xmmword ptr [R14 + 0x90]
04311cc4  MOVUPS XMM3,xmmword ptr [R14 + 0x9d]
04311ccc  MOVUPS xmmword ptr [RBX + 0x9d],XMM3
04311cd3  MOVUPS xmmword ptr [RBX + 0x90],XMM2
04311cda  MOVUPS xmmword ptr [RBX + 0x80],XMM1
04311ce1  MOVUPS xmmword ptr [RBX + 0x70],XMM0
04311ce5  MOV RAX,qword ptr [R14 + 0xb0]
04311cec  MOV qword ptr [RBX + 0xb0],RAX
04311cf3  TEST RAX,RAX
04311cf6  JZ 0x04311cfc
04311cf8  INC.LOCK dword ptr [RAX + 0x8]
04311cfc  MOVZX EAX,byte ptr [R14 + 0xc8]
04311d04  MOV byte ptr [RBX + 0xc8],AL
04311d0a  MOVUPS XMM0,xmmword ptr [R14 + 0xb8]
04311d12  MOVUPS xmmword ptr [RBX + 0xb8],XMM0
04311d19  ADD RSP,0x8
04311d1d  POP RBX
04311d1e  POP R14
04311d20  RET
```
