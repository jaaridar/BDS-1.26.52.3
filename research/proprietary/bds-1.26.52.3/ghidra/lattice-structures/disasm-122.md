# FUN_04b0ace0 (disassembly)

```
04b0ace0  PUSH RBP
04b0ace1  PUSH R15
04b0ace3  PUSH R14
04b0ace5  PUSH R13
04b0ace7  PUSH R12
04b0ace9  PUSH RBX
04b0acea  SUB RSP,0x28
04b0acee  MOV R12,R8
04b0acf1  MOV R14,RCX
04b0acf4  MOV EBP,EDX
04b0acf6  MOV R15D,ESI
04b0acf9  MOV R13D,EDI
04b0acfc  LEA RDI,[0xf552e80]
04b0ad03  CALL 0x0412d550
04b0ad08  INC.LOCK qword ptr [0x0f552f50]
04b0ad10  LEA RBX,[0xf552e80]
04b0ad17  MOV RDI,RBX
04b0ad1a  CALL 0x0412d610
04b0ad1f  MOV RAX,qword ptr [0x0f552f60]
04b0ad26  TEST RAX,RAX
04b0ad29  JZ 0x04b0ae17
04b0ad2f  MOVZX ECX,byte ptr [RAX]
04b0ad32  CMP CL,0x1
04b0ad35  JNZ 0x04b0ae17
04b0ad3b  MOV R8,R14
04b0ad3e  MOV R14,qword ptr [0x0f552f68]
04b0ad45  TEST R14,R14
04b0ad48  JZ 0x04b0ad52
04b0ad4a  INC.LOCK qword ptr [R14 + 0x8]
04b0ad4f  MOVZX ECX,byte ptr [RAX]
04b0ad52  MOV RDI,qword ptr [0x0f552f70]
04b0ad59  MOV qword ptr [RSP],RBX
04b0ad5d  MOV byte ptr [RSP + 0x8],0x1
04b0ad62  MOV qword ptr [RSP + 0x10],RAX
04b0ad67  MOV qword ptr [RSP + 0x18],R14
04b0ad6c  MOV qword ptr [RSP + 0x20],RDI
04b0ad71  TEST CL,0x1
04b0ad74  JZ 0x04b0ad90
04b0ad76  CMP byte ptr [RDI + 0x18],0x1
04b0ad7a  JNZ 0x04b0ad90
04b0ad7c  MOV R9,qword ptr [R12]
04b0ad80  MOVZX ESI,R13B
04b0ad84  MOV EDX,R15D
04b0ad87  MOV ECX,EBP
04b0ad89  XOR EAX,EAX
04b0ad8b  CALL 0x0eeb61d0
04b0ad90  LEA RAX,[RSP + 0x10]
04b0ad95  XORPS XMM0,XMM0
04b0ad98  MOVUPS xmmword ptr [RAX],XMM0
04b0ad9b  TEST R14,R14
04b0ad9e  JZ 0x04b0adf9
04b0ada0  MOV RAX,-0x1
04b0ada7  XADD.LOCK qword ptr [R14 + 0x8],RAX
04b0adad  TEST RAX,RAX
04b0adb0  JNZ 0x04b0adc3
04b0adb2  MOV RAX,qword ptr [R14]
04b0adb5  MOV RDI,R14
04b0adb8  CALL qword ptr [RAX + 0x10]
04b0adbb  MOV RDI,R14
04b0adbe  CALL 0x0412c2d0
04b0adc3  MOV RBX,qword ptr [RSP + 0x18]
04b0adc8  MOV qword ptr [RSP + 0x20],0x0
04b0add1  TEST RBX,RBX
04b0add4  JZ 0x04b0adf9
04b0add6  MOV RAX,-0x1
04b0addd  XADD.LOCK qword ptr [RBX + 0x8],RAX
04b0ade3  TEST RAX,RAX
04b0ade6  JNZ 0x04b0adf9
04b0ade8  MOV RAX,qword ptr [RBX]
04b0adeb  MOV RDI,RBX
04b0adee  CALL qword ptr [RAX + 0x10]
04b0adf1  MOV RDI,RBX
04b0adf4  CALL 0x0412c2d0
04b0adf9  CMP byte ptr [RSP + 0x8],0x1
04b0adfe  JNZ 0x04b0ae37
04b0ae00  MOV RDI,qword ptr [RSP]
04b0ae04  ADD RSP,0x28
04b0ae08  POP RBX
04b0ae09  POP R12
04b0ae0b  POP R13
04b0ae0d  POP R14
04b0ae0f  POP R15
04b0ae11  POP RBP
04b0ae12  JMP 0x0eee02f0
04b0ae17  MOV qword ptr [RSP],0x0
04b0ae1f  MOV byte ptr [RSP + 0x8],0x0
04b0ae24  LEA RDI,[0xf552e80]
04b0ae2b  CALL 0x0eee02f0
04b0ae30  CMP byte ptr [RSP + 0x8],0x1
04b0ae35  JZ 0x04b0ae00
04b0ae37  ADD RSP,0x28
04b0ae3b  POP RBX
04b0ae3c  POP R12
04b0ae3e  POP R13
04b0ae40  POP R14
04b0ae42  POP R15
04b0ae44  POP RBP
04b0ae45  RET
```
