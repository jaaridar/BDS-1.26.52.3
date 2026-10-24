# FUN_04b0a9a0 (disassembly)

```
04b0a9a0  PUSH RBP
04b0a9a1  PUSH R15
04b0a9a3  PUSH R14
04b0a9a5  PUSH R13
04b0a9a7  PUSH R12
04b0a9a9  PUSH RBX
04b0a9aa  SUB RSP,0x38
04b0a9ae  MOV R13,R9
04b0a9b1  MOV RBX,R8
04b0a9b4  MOV R14,RCX
04b0a9b7  MOV dword ptr [RSP + 0xc],EDX
04b0a9bb  MOV R15D,ESI
04b0a9be  MOV R12D,EDI
04b0a9c1  LEA RDI,[0xf552e80]
04b0a9c8  CALL 0x0412d550
04b0a9cd  INC.LOCK qword ptr [0x0f552f50]
04b0a9d5  LEA RBP,[0xf552e80]
04b0a9dc  MOV RDI,RBP
04b0a9df  CALL 0x0412d610
04b0a9e4  MOV RAX,qword ptr [0x0f552f60]
04b0a9eb  TEST RAX,RAX
04b0a9ee  JZ 0x04b0aae6
04b0a9f4  MOVZX ECX,byte ptr [RAX]
04b0a9f7  CMP CL,0x1
04b0a9fa  JNZ 0x04b0aae6
04b0aa00  MOV R8,R14
04b0aa03  MOV R14,qword ptr [0x0f552f68]
04b0aa0a  TEST R14,R14
04b0aa0d  JZ 0x04b0aa17
04b0aa0f  INC.LOCK qword ptr [R14 + 0x8]
04b0aa14  MOVZX ECX,byte ptr [RAX]
04b0aa17  MOV RDI,qword ptr [0x0f552f70]
04b0aa1e  MOV qword ptr [RSP + 0x10],RBP
04b0aa23  MOV byte ptr [RSP + 0x18],0x1
04b0aa28  MOV qword ptr [RSP + 0x20],RAX
04b0aa2d  MOV qword ptr [RSP + 0x28],R14
04b0aa32  MOV qword ptr [RSP + 0x30],RDI
04b0aa37  TEST CL,0x1
04b0aa3a  JZ 0x04b0aa5e
04b0aa3c  CMP byte ptr [RDI + 0x18],0x1
04b0aa40  JNZ 0x04b0aa5e
04b0aa42  MOV R9D,dword ptr [RBX]
04b0aa45  MOV EAX,dword ptr [R13]
04b0aa49  MOV dword ptr [RSP],EAX
04b0aa4c  MOVZX ESI,R12B
04b0aa50  MOV EDX,R15D
04b0aa53  MOV ECX,dword ptr [RSP + 0xc]
04b0aa57  XOR EAX,EAX
04b0aa59  CALL 0x0eeb61d0
04b0aa5e  LEA RAX,[RSP + 0x20]
04b0aa63  XORPS XMM0,XMM0
04b0aa66  MOVUPS xmmword ptr [RAX],XMM0
04b0aa69  TEST R14,R14
04b0aa6c  JZ 0x04b0aac7
04b0aa6e  MOV RAX,-0x1
04b0aa75  XADD.LOCK qword ptr [R14 + 0x8],RAX
04b0aa7b  TEST RAX,RAX
04b0aa7e  JNZ 0x04b0aa91
04b0aa80  MOV RAX,qword ptr [R14]
04b0aa83  MOV RDI,R14
04b0aa86  CALL qword ptr [RAX + 0x10]
04b0aa89  MOV RDI,R14
04b0aa8c  CALL 0x0412c2d0
04b0aa91  MOV RBX,qword ptr [RSP + 0x28]
04b0aa96  MOV qword ptr [RSP + 0x30],0x0
04b0aa9f  TEST RBX,RBX
04b0aaa2  JZ 0x04b0aac7
04b0aaa4  MOV RAX,-0x1
04b0aaab  XADD.LOCK qword ptr [RBX + 0x8],RAX
04b0aab1  TEST RAX,RAX
04b0aab4  JNZ 0x04b0aac7
04b0aab6  MOV RAX,qword ptr [RBX]
04b0aab9  MOV RDI,RBX
04b0aabc  CALL qword ptr [RAX + 0x10]
04b0aabf  MOV RDI,RBX
04b0aac2  CALL 0x0412c2d0
04b0aac7  CMP byte ptr [RSP + 0x18],0x1
04b0aacc  JNZ 0x04b0ab07
04b0aace  MOV RDI,qword ptr [RSP + 0x10]
04b0aad3  ADD RSP,0x38
04b0aad7  POP RBX
04b0aad8  POP R12
04b0aada  POP R13
04b0aadc  POP R14
04b0aade  POP R15
04b0aae0  POP RBP
04b0aae1  JMP 0x0eee02f0
04b0aae6  MOV qword ptr [RSP + 0x10],0x0
04b0aaef  MOV byte ptr [RSP + 0x18],0x0
04b0aaf4  LEA RDI,[0xf552e80]
04b0aafb  CALL 0x0eee02f0
04b0ab00  CMP byte ptr [RSP + 0x18],0x1
04b0ab05  JZ 0x04b0aace
04b0ab07  ADD RSP,0x38
04b0ab0b  POP RBX
04b0ab0c  POP R12
04b0ab0e  POP R13
04b0ab10  POP R14
04b0ab12  POP R15
04b0ab14  POP RBP
04b0ab15  RET
```
