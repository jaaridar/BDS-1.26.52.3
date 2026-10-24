# FUN_0eeb61d0 (disassembly)

```
0eeb61d0  SUB RSP,0xd8
0eeb61d7  MOV qword ptr [RSP + 0x48],R9
0eeb61dc  TEST AL,AL
0eeb61de  JNZ 0x0eeb61f3
0eeb61e0  MOV qword ptr [RSP + 0x40],R8
0eeb61e5  CMP byte ptr [RDI + 0x18],0x1
0eeb61e9  JZ 0x0eeb6235
0eeb61eb  ADD RSP,0xd8
0eeb61f2  RET
0eeb61f3  MOVAPS xmmword ptr [RSP + 0x50],XMM0
0eeb61f8  MOVAPS xmmword ptr [RSP + 0x60],XMM1
0eeb61fd  MOVAPS xmmword ptr [RSP + 0x70],XMM2
0eeb6202  MOVAPS xmmword ptr [RSP + 0x80],XMM3
0eeb620a  MOVAPS xmmword ptr [RSP + 0x90],XMM4
0eeb6212  MOVAPS xmmword ptr [RSP + 0xa0],XMM5
0eeb621a  MOVAPS xmmword ptr [RSP + 0xb0],XMM6
0eeb6222  MOVAPS xmmword ptr [RSP + 0xc0],XMM7
0eeb622a  MOV qword ptr [RSP + 0x40],R8
0eeb622f  CMP byte ptr [RDI + 0x18],0x1
0eeb6233  JNZ 0x0eeb61eb
0eeb6235  MOV R10D,EDX
0eeb6238  LEA RAX,[RSP + 0x20]
0eeb623d  MOV qword ptr [RSP + 0x10],RAX
0eeb6242  LEA RAX,[RSP + 0xe0]
0eeb624a  MOV qword ptr [RSP + 0x8],RAX
0eeb624f  MOV RAX,0x3000000020
0eeb6259  MOV qword ptr [RSP],RAX
0eeb625d  MOVZX ESI,SIL
0eeb6261  MOV R8,RSP
0eeb6264  MOV EDX,ECX
0eeb6266  MOV ECX,R10D
0eeb6269  CALL 0x0eeb6280
0eeb626e  ADD RSP,0xd8
0eeb6275  RET
```
