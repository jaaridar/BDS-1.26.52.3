# FUN_04b0ab40 (disassembly)

```
04b0ab40  PUSH RBP
04b0ab41  PUSH R15
04b0ab43  PUSH R14
04b0ab45  PUSH R13
04b0ab47  PUSH R12
04b0ab49  PUSH RBX
04b0ab4a  SUB RSP,0x38
04b0ab4e  MOV R13,R9
04b0ab51  MOV RBX,R8
04b0ab54  MOV R14,RCX
04b0ab57  MOV dword ptr [RSP + 0xc],EDX
04b0ab5b  MOV R15D,ESI
04b0ab5e  MOV R12D,EDI
04b0ab61  LEA RDI,[0xf552e80]
04b0ab68  CALL 0x0412d550
04b0ab6d  INC.LOCK qword ptr [0x0f552f50]
04b0ab75  LEA RBP,[0xf552e80]
04b0ab7c  MOV RDI,RBP
04b0ab7f  CALL 0x0412d610
04b0ab84  MOV RAX,qword ptr [0x0f552f60]
04b0ab8b  TEST RAX,RAX
04b0ab8e  JZ 0x04b0ac86
04b0ab94  MOVZX ECX,byte ptr [RAX]
04b0ab97  CMP CL,0x1
04b0ab9a  JNZ 0x04b0ac86
04b0aba0  MOV R8,R14
04b0aba3  MOV R14,qword ptr [0x0f552f68]
04b0abaa  TEST R14,R14
04b0abad  JZ 0x04b0abb7
04b0abaf  INC.LOCK qword ptr [R14 + 0x8]
04b0abb4  MOVZX ECX,byte ptr [RAX]
04b0abb7  MOV RDI,qword ptr [0x0f552f70]
04b0abbe  MOV qword ptr [RSP + 0x10],RBP
04b0abc3  MOV byte ptr [RSP + 0x18],0x1
04b0abc8  MOV qword ptr [RSP + 0x20],RAX
04b0abcd  MOV qword ptr [RSP + 0x28],R14
04b0abd2  MOV qword ptr [RSP + 0x30],RDI
04b0abd7  TEST CL,0x1
04b0abda  JZ 0x04b0abfe
04b0abdc  CMP byte ptr [RDI + 0x18],0x1
04b0abe0  JNZ 0x04b0abfe
04b0abe2  MOV R9D,dword ptr [RBX]
04b0abe5  MOV EAX,dword ptr [R13]
04b0abe9  MOV dword ptr [RSP],EAX
04b0abec  MOVZX ESI,R12B
04b0abf0  MOV EDX,R15D
04b0abf3  MOV ECX,dword ptr [RSP + 0xc]
04b0abf7  XOR EAX,EAX
04b0abf9  CALL 0x0eeb61d0
04b0abfe  LEA RAX,[RSP + 0x20]
04b0ac03  XORPS XMM0,XMM0
04b0ac06  MOVUPS xmmword ptr [RAX],XMM0
04b0ac09  TEST R14,R14
04b0ac0c  JZ 0x04b0ac67
04b0ac0e  MOV RAX,-0x1
04b0ac15  XADD.LOCK qword ptr [R14 + 0x8],RAX
04b0ac1b  TEST RAX,RAX
04b0ac1e  JNZ 0x04b0ac31
04b0ac20  MOV RAX,qword ptr [R14]
04b0ac23  MOV RDI,R14
04b0ac26  CALL qword ptr [RAX + 0x10]
04b0ac29  MOV RDI,R14
04b0ac2c  CALL 0x0412c2d0
04b0ac31  MOV RBX,qword ptr [RSP + 0x28]
04b0ac36  MOV qword ptr [RSP + 0x30],0x0
04b0ac3f  TEST RBX,RBX
04b0ac42  JZ 0x04b0ac67
04b0ac44  MOV RAX,-0x1
04b0ac4b  XADD.LOCK qword ptr [RBX + 0x8],RAX
04b0ac51  TEST RAX,RAX
04b0ac54  JNZ 0x04b0ac67
04b0ac56  MOV RAX,qword ptr [RBX]
04b0ac59  MOV RDI,RBX
04b0ac5c  CALL qword ptr [RAX + 0x10]
04b0ac5f  MOV RDI,RBX
04b0ac62  CALL 0x0412c2d0
04b0ac67  CMP byte ptr [RSP + 0x18],0x1
04b0ac6c  JNZ 0x04b0aca7
04b0ac6e  MOV RDI,qword ptr [RSP + 0x10]
04b0ac73  ADD RSP,0x38
04b0ac77  POP RBX
04b0ac78  POP R12
04b0ac7a  POP R13
04b0ac7c  POP R14
04b0ac7e  POP R15
04b0ac80  POP RBP
04b0ac81  JMP 0x0eee02f0
04b0ac86  MOV qword ptr [RSP + 0x10],0x0
04b0ac8f  MOV byte ptr [RSP + 0x18],0x0
04b0ac94  LEA RDI,[0xf552e80]
04b0ac9b  CALL 0x0eee02f0
04b0aca0  CMP byte ptr [RSP + 0x18],0x1
04b0aca5  JZ 0x04b0ac6e
04b0aca7  ADD RSP,0x38
04b0acab  POP RBX
04b0acac  POP R12
04b0acae  POP R13
04b0acb0  POP R14
04b0acb2  POP R15
04b0acb4  POP RBP
04b0acb5  RET
```
