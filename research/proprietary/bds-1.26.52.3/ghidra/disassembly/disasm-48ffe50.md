# 48ffe50  cereal::BasicSaver::vslot0

```asm
048ffe50  PUSH RBP
048ffe51  PUSH R15
048ffe53  PUSH R14
048ffe55  PUSH R13
048ffe57  PUSH R12
048ffe59  PUSH RBX
048ffe5a  PUSH RAX
048ffe5b  MOV RBX,RDI
048ffe5e  LEA RAX,[0xef474c0]
048ffe65  MOV qword ptr [RDI],RAX
048ffe68  MOV R14,qword ptr [RDI + 0x128]
048ffe6f  MOV EAX,dword ptr [RDI + 0x130]
048ffe75  TEST RAX,RAX
048ffe78  JZ 0x048ffece
048ffe7a  SHL RAX,0x4
048ffe7e  LEA R12,[RAX + RAX*0x2]
048ffe82  ADD R14,0x8
048ffe86  MOV R13D,0xffffffff
048ffe8c  LEA RBP,[0xef452b0]
048ffe93  LEA R15,[RSP + 0x6]
048ffe98  JMP 0x048ffeb2
048ffea0  MOV dword ptr [R14 + 0x8],0xffffffff
048ffea8  ADD R14,0x30
048ffeac  ADD R12,-0x30
048ffeb0  JZ 0x048ffec7
048ffeb2  MOV EAX,dword ptr [R14 + 0x8]
048ffeb6  CMP RAX,R13
048ffeb9  JZ 0x048ffea0
048ffebb  MOV RDI,R15
048ffebe  MOV RSI,R14
048ffec1  CALL qword ptr [RBP + RAX*0x8]
048ffec5  JMP 0x048ffea0
048ffec7  MOV R14,qword ptr [RBX + 0x128]
048ffece  LEA RAX,[RBX + 0x138]
048ffed5  CMP RAX,R14
048ffed8  SETZ AL
048ffedb  TEST R14,R14
048ffede  SETZ CL
048ffee1  OR CL,AL
048ffee3  JNZ 0x048ffef9
048ffee5  LEA RDI,[0xf5463b0]
048ffeec  MOV RAX,qword ptr [0x0f5463b0]
048ffef3  MOV RSI,R14
048ffef6  CALL qword ptr [RAX + 0x18]
048ffef9  MOV R14,qword ptr [RBX + 0x18]
048ffefd  MOV R12D,dword ptr [RBX + 0x20]
048fff01  TEST R12,R12
048fff04  JZ 0x048fff5b
048fff06  SHL R12,0x5
048fff0a  ADD R14,0x8
048fff0e  MOV R13D,0xffffffff
048fff14  LEA RBP,[0xef452b0]
048fff1b  LEA R15,[RSP + 0x7]
048fff20  JMP 0x048fff42
048fff30  MOV dword ptr [R14 + 0x8],0xffffffff
048fff38  ADD R14,0x20
048fff3c  ADD R12,-0x20
048fff40  JZ 0x048fff57
048fff42  MOV EAX,dword ptr [R14 + 0x8]
048fff46  CMP RAX,R13
048fff49  JZ 0x048fff30
048fff4b  MOV RDI,R15
048fff4e  MOV RSI,R14
048fff51  CALL qword ptr [RBP + RAX*0x8]
048fff55  JMP 0x048fff30
048fff57  MOV R14,qword ptr [RBX + 0x18]
048fff5b  ADD RBX,0x28
048fff5f  CMP RBX,R14
048fff62  SETZ AL
048fff65  TEST R14,R14
048fff68  SETZ CL
048fff6b  OR CL,AL
048fff6d  JNZ 0x048fff83
048fff6f  LEA RDI,[0xf5463b0]
048fff76  MOV RAX,qword ptr [0x0f5463b0]
048fff7d  MOV RSI,R14
048fff80  CALL qword ptr [RAX + 0x18]
048fff83  ADD RSP,0x8
048fff87  POP RBX
048fff88  POP R12
048fff8a  POP R13
048fff8c  POP R14
048fff8e  POP R15
048fff90  POP RBP
048fff91  RET
```
