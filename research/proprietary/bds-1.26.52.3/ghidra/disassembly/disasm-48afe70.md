# 48afe70

```asm
048afe70  MOVZX EAX,byte ptr [0x0f550a00]
048afe77  TEST AL,AL
048afe79  JZ 0x048afe9e
048afe7b  MOV EAX,dword ptr [0x0f5509f8]
048afe81  MOV dword ptr [RDI],EAX
048afe83  MOV dword ptr [RDI + 0x4],0xd4c25870
048afe8a  LEA RAX,[0x13c48c4]
048afe91  MOV qword ptr [RDI + 0x8],RAX
048afe95  MOV qword ptr [RDI + 0x10],0x2d
048afe9d  RET
048afe9e  PUSH RBX
048afe9f  LEA RAX,[0xf550a00]
048afea6  MOV RBX,RDI
048afea9  MOV RDI,RAX
048afeac  CALL 0x04108328
048afeb1  MOV RDI,RBX
048afeb4  TEST EAX,EAX
048afeb6  JZ 0x048afedc
048afeb8  MOV EAX,dword ptr [0x0f550af0]
048afebe  LEA ECX,[RAX + 0x1]
048afec1  MOV dword ptr [0x0f550af0],ECX
048afec7  MOV dword ptr [0x0f5509f8],EAX
048afecd  LEA RDI,[0xf550a00]
048afed4  CALL 0x0410844d
048afed9  MOV RDI,RBX
048afedc  POP RBX
048afedd  JMP 0x048afe7b
```
