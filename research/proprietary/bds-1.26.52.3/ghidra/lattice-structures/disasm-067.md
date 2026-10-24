# FUN_04fd3da0 (disassembly)

```
04fd3da0  PUSH R15
04fd3da2  PUSH R14
04fd3da4  PUSH RBX
04fd3da5  SUB RSP,0x10
04fd3da9  MOV RBX,RDI
04fd3dac  XORPS XMM0,XMM0
04fd3daf  MOVUPS xmmword ptr [RDI + 0x90],XMM0
04fd3db6  MOVUPS xmmword ptr [RDI + 0x80],XMM0
04fd3dbd  MOVUPS xmmword ptr [RDI + 0x70],XMM0
04fd3dc1  MOVUPS xmmword ptr [RDI + 0x60],XMM0
04fd3dc5  MOVUPS xmmword ptr [RDI + 0x50],XMM0
04fd3dc9  MOVUPS xmmword ptr [RDI + 0x40],XMM0
04fd3dcd  MOVUPS xmmword ptr [RDI + 0x30],XMM0
04fd3dd1  MOVUPS xmmword ptr [RDI + 0x20],XMM0
04fd3dd5  MOVUPS xmmword ptr [RDI + 0x10],XMM0
04fd3dd9  MOVUPS xmmword ptr [RDI],XMM0
04fd3ddc  MOV qword ptr [RDI + 0xa0],0x0
04fd3de7  LEA RDX,[0x1254d89]
04fd3dee  LEA RSI,[RSP + 0xf]
04fd3df3  CALL 0x04aa75f0
04fd3df8  XORPS XMM0,XMM0
04fd3dfb  MOVUPS xmmword ptr [RBX + 0x20],XMM0
04fd3dff  MOVUPS xmmword ptr [RBX + 0x10],XMM0
04fd3e03  MOV qword ptr [RBX + 0x30],0x0
04fd3e0b  LEA R14,[RBX + 0x38]
04fd3e0f  MOV RDI,R14
04fd3e12  CALL 0x041679a0
04fd3e17  LEA RSI,[0xf547a30]
04fd3e1e  MOV RDI,R14
04fd3e21  CALL 0x041681f0
04fd3e26  MOV qword ptr [RBX + 0x40],RAX
04fd3e2a  LEA RSI,[0xf547770]
04fd3e31  MOV RDI,R14
04fd3e34  CALL 0x041681f0
04fd3e39  MOV qword ptr [RBX + 0x48],RAX
04fd3e3d  XORPS XMM0,XMM0
```
