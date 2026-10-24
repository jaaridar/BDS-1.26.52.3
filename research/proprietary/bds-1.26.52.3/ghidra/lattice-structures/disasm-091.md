# FUN_0c44e610 (disassembly)

```
0c44e610  PUSH RBX
0c44e611  MOV RBX,RDI
0c44e614  LEA RAX,[0xf36e918]
0c44e61b  MOV qword ptr [RDI],RAX
0c44e61e  MOV RDI,qword ptr [RDI + 0x78]
0c44e622  MOV qword ptr [RBX + 0x78],0x0
0c44e62a  TEST RDI,RDI
0c44e62d  JZ 0x0c44e635
0c44e62f  MOV RAX,qword ptr [RDI]
0c44e632  CALL qword ptr [RAX + 0x8]
0c44e635  MOV RDI,qword ptr [RBX + 0x50]
0c44e639  TEST RDI,RDI
0c44e63c  JZ 0x0c44e64e
0c44e63e  MOV qword ptr [RBX + 0x58],RDI
0c44e642  MOV RSI,qword ptr [RBX + 0x60]
0c44e646  SUB RSI,RDI
0c44e649  CALL 0x0412a280
0c44e64e  MOV RDI,qword ptr [RBX + 0x30]
0c44e652  TEST RDI,RDI
0c44e655  JZ 0x0c44e667
0c44e657  MOV qword ptr [RBX + 0x38],RDI
0c44e65b  MOV RSI,qword ptr [RBX + 0x40]
0c44e65f  SUB RSI,RDI
0c44e662  CALL 0x0412a280
0c44e667  MOV RDI,qword ptr [RBX + 0x10]
0c44e66b  MOV qword ptr [RBX + 0x10],0x0
0c44e673  TEST RDI,RDI
0c44e676  JZ 0x0c44e67e
0c44e678  MOV RAX,qword ptr [RDI]
0c44e67b  CALL qword ptr [RAX + 0x8]
0c44e67e  MOV RAX,qword ptr [RBX + 0x8]
0c44e682  TEST RAX,RAX
0c44e685  JZ 0x0c44e6b3
0c44e687  DEC.LOCK dword ptr [RAX + 0xc]
0c44e68b  MOV ECX,dword ptr [RAX + 0xc]
0c44e68e  TEST ECX,ECX
0c44e690  JG 0x0c44e6ab
0c44e692  CMP qword ptr [RAX],0x0
0c44e696  JNZ 0x0c44e6ab
0c44e698  MOV RDI,qword ptr [RBX + 0x8]
0c44e69c  TEST RDI,RDI
0c44e69f  JZ 0x0c44e6ab
0c44e6a1  MOV ESI,0x10
0c44e6a6  CALL 0x0412a280
0c44e6ab  MOV qword ptr [RBX + 0x8],0x0
0c44e6b3  POP RBX
0c44e6b4  RET
```
