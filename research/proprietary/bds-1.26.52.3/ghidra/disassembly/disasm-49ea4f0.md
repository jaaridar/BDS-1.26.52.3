# 49ea4f0

```asm
049ea4f0  PUSH R14
049ea4f2  PUSH RBX
049ea4f3  PUSH RAX
049ea4f4  MOV RBX,RDI
049ea4f7  ADD RDI,0x100
049ea4fe  CALL 0x049ea5d0
049ea503  TEST byte ptr [RBX + 0xe8],0x1
049ea50a  JZ 0x049ea523
049ea50c  MOV RSI,qword ptr [RBX + 0xe8]
049ea513  MOV RDI,qword ptr [RBX + 0xf8]
049ea51a  AND RSI,-0x2
049ea51e  CALL 0x0412a280
049ea523  CMP byte ptr [RBX + 0xe0],0x1
049ea52a  JNZ 0x049ea55c
049ea52c  MOV EAX,dword ptr [RBX + 0xd8]
049ea532  MOV ECX,0xffffffff
049ea537  CMP RAX,RCX
049ea53a  JZ 0x049ea552
049ea53c  LEA RSI,[RBX + 0xc0]
049ea543  LEA RCX,[0xef4aae0]
049ea54a  LEA RDI,[RSP + 0x5]
049ea54f  CALL qword ptr [RCX + RAX*0x8]
049ea552  MOV dword ptr [RBX + 0xd8],0xffffffff
049ea55c  MOV EAX,dword ptr [RBX + 0x98]
049ea562  MOV R14D,0xffffffff
049ea568  CMP RAX,R14
049ea56b  JZ 0x049ea580
049ea56d  LEA RSI,[RBX + 0x50]
049ea571  LEA RCX,[0xef4aaf0]
049ea578  LEA RDI,[RSP + 0x6]
049ea57d  CALL qword ptr [RCX + RAX*0x8]
049ea580  MOV dword ptr [RBX + 0x98],0xffffffff
049ea58a  MOV EAX,dword ptr [RBX + 0x48]
049ea58d  CMP RAX,R14
049ea590  JZ 0x049ea5a4
049ea592  LEA RCX,[0xef4aaf0]
049ea599  LEA RDI,[RSP + 0x7]
049ea59e  MOV RSI,RBX
049ea5a1  CALL qword ptr [RCX + RAX*0x8]
049ea5a4  MOV dword ptr [RBX + 0x48],0xffffffff
049ea5ab  ADD RSP,0x8
049ea5af  POP RBX
049ea5b0  POP R14
049ea5b2  RET
```
