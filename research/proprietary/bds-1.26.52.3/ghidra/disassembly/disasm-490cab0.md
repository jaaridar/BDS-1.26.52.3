# 490cab0

```asm
0490cab0  MOVZX EAX,byte ptr [0x0f551df0]
0490cab7  TEST AL,AL
0490cab9  JZ 0x0490cade
0490cabb  MOV EAX,dword ptr [0x0f551de8]
0490cac1  MOV dword ptr [RDI],EAX
0490cac3  MOV dword ptr [RDI + 0x4],0x95e97e5e
0490caca  LEA RAX,[0x14ad86c]
0490cad1  MOV qword ptr [RDI + 0x8],RAX
0490cad5  MOV qword ptr [RDI + 0x10],0x3
0490cadd  RET
0490cade  PUSH RBX
0490cadf  LEA RAX,[0xf551df0]
0490cae6  MOV RBX,RDI
0490cae9  MOV RDI,RAX
0490caec  CALL 0x04108328
0490caf1  MOV RDI,RBX
0490caf4  TEST EAX,EAX
0490caf6  JZ 0x0490cb1c
0490caf8  MOV EAX,dword ptr [0x0f550af0]
0490cafe  LEA ECX,[RAX + 0x1]
0490cb01  MOV dword ptr [0x0f550af0],ECX
0490cb07  MOV dword ptr [0x0f551de8],EAX
0490cb0d  LEA RDI,[0xf551df0]
0490cb14  CALL 0x0410844d
0490cb19  MOV RDI,RBX
0490cb1c  POP RBX
0490cb1d  JMP 0x0490cabb
```
