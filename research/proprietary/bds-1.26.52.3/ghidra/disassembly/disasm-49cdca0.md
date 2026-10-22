# 49cdca0

```asm
049cdca0  PUSH RBX
049cdca1  SUB RSP,0x10
049cdca5  MOV RBX,RDI
049cdca8  TEST byte ptr [RDI + 0x1b0],0x1
049cdcaf  JZ 0x049cdcc8
049cdcb1  MOV RSI,qword ptr [RBX + 0x1b0]
049cdcb8  MOV RDI,qword ptr [RBX + 0x1c0]
049cdcbf  AND RSI,-0x2
049cdcc3  CALL 0x0412a280
049cdcc8  MOV EAX,dword ptr [RBX + 0x1a8]
049cdcce  MOV ECX,0xffffffff
049cdcd3  CMP RAX,RCX
049cdcd6  JZ 0x049cdcee
049cdcd8  LEA RSI,[RBX + 0x130]
049cdcdf  LEA RCX,[0xef4a338]
049cdce6  LEA RDI,[RSP + 0xd]
049cdceb  CALL qword ptr [RCX + RAX*0x8]
049cdcee  MOV dword ptr [RBX + 0x1a8],0xffffffff
049cdcf8  TEST byte ptr [RBX + 0x118],0x1
049cdcff  JZ 0x049cdd18
049cdd01  MOV RSI,qword ptr [RBX + 0x118]
049cdd08  MOV RDI,qword ptr [RBX + 0x128]
049cdd0f  AND RSI,-0x2
049cdd13  CALL 0x0412a280
049cdd18  MOV EAX,dword ptr [RBX + 0x110]
049cdd1e  MOV ECX,0xffffffff
049cdd23  CMP RAX,RCX
049cdd26  JZ 0x049cdd3e
049cdd28  LEA RSI,[RBX + 0x98]
049cdd2f  LEA RCX,[0xef4a338]
049cdd36  LEA RDI,[RSP + 0xe]
049cdd3b  CALL qword ptr [RCX + RAX*0x8]
049cdd3e  MOV dword ptr [RBX + 0x110],0xffffffff
049cdd48  TEST byte ptr [RBX + 0x80],0x1
049cdd4f  JZ 0x049cdd68
049cdd51  MOV RSI,qword ptr [RBX + 0x80]
049cdd58  MOV RDI,qword ptr [RBX + 0x90]
049cdd5f  AND RSI,-0x2
049cdd63  CALL 0x0412a280
049cdd68  MOV EAX,dword ptr [RBX + 0x78]
049cdd6b  MOV ECX,0xffffffff
049cdd70  CMP RAX,RCX
049cdd73  JZ 0x049cdd87
049cdd75  LEA RCX,[0xef4a338]
049cdd7c  LEA RDI,[RSP + 0xf]
049cdd81  MOV RSI,RBX
049cdd84  CALL qword ptr [RCX + RAX*0x8]
049cdd87  MOV dword ptr [RBX + 0x78],0xffffffff
049cdd8e  ADD RSP,0x10
049cdd92  POP RBX
049cdd93  RET
```
