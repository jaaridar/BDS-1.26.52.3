# FUN_0d22fb60 (disassembly)

```
0d22fb60  ADD RAX,R14
0d22fb63  MOV qword ptr [RSP + 0x48],RAX
0d22fb68  MOV dword ptr [RSP + 0x50],EBP
0d22fb6c  MOV RAX,qword ptr [RBX]
0d22fb6f  LEA RSI,[RSP + 0x48]
0d22fb74  MOV RDI,RBX
0d22fb77  CALL qword ptr [RAX + 0x10]
0d22fb7a  MOV RBX,qword ptr [RAX + 0x68]
0d22fb7e  MOV RAX,qword ptr [RBX + 0xc8]
0d22fb85  CMP RAX,qword ptr [0x0f713f00]
0d22fb8c  JNZ 0x0d22fcd4
0d22fb92  LEA R14,[RBX + 0xc8]
0d22fb99  MOV BPL,0x1
0d22fb9c  CMP qword ptr [RBX + 0xe8],R12
0d22fba3  JNZ 0x0d22fbb2
0d22fba5  CMP qword ptr [0x0f713f20],R14
0d22fbac  JZ 0x0d22fc40
0d22fbb2  MOVZX EAX,byte ptr [RBX + 0xd0]
0d22fbb9  TEST AL,0x1
0d22fbbb  JZ 0x0d22fc80
0d22fbc1  MOV RDX,qword ptr [RBX + 0xd8]
0d22fbc8  JMP 0x0d22fc84
0d22fc3e  XOR EBP,EBP
0d22fc40  MOV EAX,EBP
0d22fc42  ADD RSP,0x58
0d22fc46  POP RBX
0d22fc47  POP R12
0d22fc49  POP R13
0d22fc4b  POP R14
0d22fc4d  POP R15
0d22fc4f  POP RBP
0d22fc50  RET
0d22fc80  MOV EDX,EAX
0d22fc82  SHR EDX,0x1
0d22fc84  MOVZX ECX,byte ptr [0x0f713f08]
0d22fc8b  TEST CL,0x1
0d22fc8e  JZ 0x0d22fc99
0d22fc90  MOV RSI,qword ptr [0x0f713f10]
0d22fc97  JMP 0x0d22fc9d
0d22fc99  MOV ESI,ECX
0d22fc9b  SHR ESI,0x1
0d22fc9d  CMP RDX,RSI
0d22fca0  JNZ 0x0d22fcd4
0d22fca2  TEST AL,0x1
0d22fca4  JZ 0x0d22fcaf
0d22fca6  MOV RDI,qword ptr [RBX + 0xe0]
0d22fcad  JMP 0x0d22fcb6
0d22fcaf  LEA RDI,[RBX + 0xd1]
0d22fcb6  TEST CL,0x1
0d22fcb9  JZ 0x0d22fcc4
0d22fcbb  MOV RSI,qword ptr [0x0f713f18]
0d22fcc2  JMP 0x0d22fccb
0d22fcc4  LEA RSI,[0xf713f09]
0d22fccb  CALL 0x0eee3000
0d22fcd0  TEST EAX,EAX
0d22fcd2  JZ 0x0d22fce4
0d22fcd4  MOV qword ptr [RBX + 0xe8],0x0
0d22fcdf  JMP 0x0d22fc3e
0d22fce4  MOV qword ptr [RBX + 0xe8],R12
0d22fceb  MOV qword ptr [0x0f713f20],R14
0d22fcf2  JMP 0x0d22fc40
```
