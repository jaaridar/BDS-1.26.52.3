# FUN_0c9fccb0 (disassembly)

```
0c9fccb0  PUSH RBX
0c9fccb1  MOV EBX,EDI
0c9fccb3  CALL 0x0c9fa6e0
0c9fccb8  CMP dword ptr [RAX],EBX
0c9fccba  JNZ 0x0c9fccc3
0c9fccbc  XOR EAX,EAX
0c9fccbe  JMP 0x0c9fce11
0c9fccc3  MOV EAX,0x80
0c9fccc8  CMP dword ptr [0x0f6ec758],EBX
0c9fccce  JZ 0x0c9fce11
0c9fccd4  MOV EAX,0x100
0c9fccd9  CMP dword ptr [0x0f6ec7d8],EBX
0c9fccdf  JZ 0x0c9fce11
0c9fcce5  MOV EAX,0x180
0c9fccea  CMP dword ptr [0x0f6ec858],EBX
0c9fccf0  JZ 0x0c9fce11
0c9fccf6  MOV EAX,0x200
0c9fccfb  CMP dword ptr [0x0f6ec8d8],EBX
0c9fcd01  JZ 0x0c9fce11
0c9fcd07  MOV EAX,0x280
0c9fcd0c  CMP dword ptr [0x0f6ec958],EBX
0c9fcd12  JZ 0x0c9fce11
0c9fcd18  MOV EAX,0x300
0c9fcd1d  CMP dword ptr [0x0f6ec9d8],EBX
0c9fcd23  JZ 0x0c9fce11
0c9fcd29  MOV EAX,0x380
0c9fcd2e  CMP dword ptr [0x0f6eca58],EBX
0c9fcd34  JZ 0x0c9fce11
0c9fcd3a  MOV EAX,0x400
0c9fcd3f  CMP dword ptr [0x0f6ecad8],EBX
0c9fcd45  JZ 0x0c9fce11
0c9fcd4b  MOV EAX,0x480
0c9fcd50  CMP dword ptr [0x0f6ecb58],EBX
0c9fcd56  JZ 0x0c9fce11
0c9fcd5c  MOV EAX,0x500
0c9fcd61  CMP dword ptr [0x0f6ecbd8],EBX
0c9fcd67  JZ 0x0c9fce11
0c9fcd6d  MOV EAX,0x580
0c9fcd72  CMP dword ptr [0x0f6ecc58],EBX
0c9fcd78  JZ 0x0c9fce11
0c9fcd7e  MOV EAX,0x600
0c9fcd83  CMP dword ptr [0x0f6eccd8],EBX
0c9fcd89  JZ 0x0c9fce11
0c9fcd8f  MOV EAX,0x680
0c9fcd94  CMP dword ptr [0x0f6ecd58],EBX
0c9fcd9a  JZ 0x0c9fce11
0c9fcd9c  MOV EAX,0x700
0c9fcda1  CMP dword ptr [0x0f6ecdd8],EBX
0c9fcda7  JZ 0x0c9fce11
0c9fcda9  MOV EAX,0x780
0c9fcdae  CMP dword ptr [0x0f6ece58],EBX
0c9fcdb4  JZ 0x0c9fce11
0c9fcdb6  MOV EAX,0x800
0c9fcdbb  CMP dword ptr [0x0f6eced8],EBX
0c9fcdc1  JZ 0x0c9fce11
0c9fcdc3  MOV EAX,0x880
0c9fcdc8  CMP dword ptr [0x0f6ecf58],EBX
0c9fcdce  JZ 0x0c9fce11
0c9fcdd0  MOV EAX,0x900
0c9fcdd5  CMP dword ptr [0x0f6ecfd8],EBX
0c9fcddb  JZ 0x0c9fce11
0c9fcddd  MOV EAX,0x980
0c9fcde2  CMP dword ptr [0x0f6ed058],EBX
0c9fcde8  JZ 0x0c9fce11
0c9fcdea  MOV EAX,0xa00
0c9fcdef  CMP dword ptr [0x0f6ed0d8],EBX
0c9fcdf5  JZ 0x0c9fce11
0c9fcdf7  MOV EAX,0xa80
0c9fcdfc  CMP dword ptr [0x0f6ed158],EBX
0c9fce02  JZ 0x0c9fce11
0c9fce04  MOV EAX,0xb00
0c9fce09  CMP dword ptr [0x0f6ed1d8],EBX
0c9fce0f  JNZ 0x0c9fce2d
0c9fce11  LEA RCX,[0xf6ec6d8]
0c9fce18  ADD RCX,RAX
0c9fce1b  LEA RDX,[0xf6ed258]
0c9fce22  XOR EAX,EAX
0c9fce24  CMP RCX,RDX
0c9fce27  CMOVNZ RAX,RCX
0c9fce2b  POP RBX
0c9fce2c  RET
0c9fce2d  LEA RCX,[0xf6ed258]
0c9fce34  JMP 0x0c9fce1b
```
