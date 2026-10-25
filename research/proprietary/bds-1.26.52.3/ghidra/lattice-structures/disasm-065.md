# FUN_04fbd8b0 (disassembly)

```
04fbd8b0  PUSH R15
04fbd8b2  PUSH R14
04fbd8b4  PUSH R12
04fbd8b6  PUSH RBX
04fbd8b7  SUB RSP,0x38
04fbd8bb  MOV qword ptr [RSP + 0x8],RCX
04fbd8c0  MOV qword ptr [RSP + 0x10],RCX
04fbd8c5  MOV qword ptr [RSP + 0x18],RDI
04fbd8ca  LEA RAX,[RSP + 0x10]
04fbd8cf  MOV qword ptr [RSP + 0x20],RAX
04fbd8d4  LEA RAX,[RSP + 0x8]
04fbd8d9  MOV qword ptr [RSP + 0x28],RAX
04fbd8de  MOV byte ptr [RSP + 0x30],0x0
04fbd8e3  CMP RSI,RDX
04fbd8e6  JZ 0x04fbd983
04fbd8ec  MOV R15,RCX
04fbd8ef  MOV RBX,RDX
04fbd8f2  MOV R14,RSI
04fbd8f5  MOV R12,RSI
04fbd8f8  JMP 0x04fbd934
04fbd900  LEA RAX,[R12 + 0x8]
04fbd905  MOV RCX,qword ptr [RAX + 0x10]
04fbd909  MOV qword ptr [RDI + 0x10],RCX
04fbd90d  MOVUPS XMM0,xmmword ptr [RAX]
04fbd910  MOVUPS xmmword ptr [RDI],XMM0
04fbd913  MOV RAX,R15
04fbd916  MOV RCX,qword ptr [R12 + 0x20]
04fbd91b  MOV qword ptr [R15 + 0x20],RCX
04fbd91f  ADD R12,0x28
04fbd923  ADD RAX,0x28
04fbd927  MOV qword ptr [RSP + 0x8],RAX
04fbd92c  MOV R15,RAX
04fbd92f  CMP R12,RBX
04fbd932  JZ 0x04fbd969
04fbd934  MOV RAX,qword ptr [R12]
04fbd938  MOV qword ptr [R15],RAX
04fbd93b  LEA RDI,[R15 + 0x8]
04fbd93f  TEST byte ptr [R12 + 0x8],0x1
04fbd945  JZ 0x04fbd900
04fbd947  MOV RDX,qword ptr [R12 + 0x10]
04fbd94c  MOV RSI,qword ptr [R12 + 0x18]
04fbd951  CALL 0x0412e5e0
04fbd956  MOV RAX,qword ptr [RSP + 0x8]
04fbd95b  JMP 0x04fbd916
04fbd960  ADD R14,0x28
04fbd964  CMP R14,RBX
04fbd967  JZ 0x04fbd983
04fbd969  TEST byte ptr [R14 + 0x8],0x1
04fbd96e  JZ 0x04fbd960
04fbd970  MOV RSI,qword ptr [R14 + 0x8]
04fbd974  MOV RDI,qword ptr [R14 + 0x18]
04fbd978  AND RSI,-0x2
04fbd97c  CALL 0x0412a280
04fbd981  JMP 0x04fbd960
04fbd983  ADD RSP,0x38
04fbd987  POP RBX
04fbd988  POP R12
04fbd98a  POP R14
04fbd98c  POP R15
04fbd98e  RET
```
