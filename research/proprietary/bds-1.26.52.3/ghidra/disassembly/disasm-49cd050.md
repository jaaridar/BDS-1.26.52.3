# 49cd050

```asm
049cd050  PUSH R15
049cd052  PUSH R14
049cd054  PUSH R13
049cd056  PUSH R12
049cd058  PUSH RBX
049cd059  SUB RSP,0x10
049cd05d  MOV R14,RSI
049cd060  MOV RBX,RDI
049cd063  MOV byte ptr [RDI],0x0
049cd066  MOV dword ptr [RDI + 0x78],0xffffffff
049cd06d  MOV R15D,dword ptr [RSI + 0x78]
049cd071  MOV EAX,0xffffffff
049cd076  CMP R15,RAX
049cd079  JZ 0x049cd097
049cd07b  MOV qword ptr [RSP + 0x8],RBX
049cd080  LEA RAX,[0xef4a350]
049cd087  LEA RDI,[RSP + 0x8]
049cd08c  MOV RSI,R14
049cd08f  CALL qword ptr [RAX + R15*0x8]
049cd093  MOV dword ptr [RBX + 0x78],R15D
049cd097  LEA RDI,[RBX + 0x80]
049cd09e  TEST byte ptr [R14 + 0x80],0x1
049cd0a6  JNZ 0x049cd0bf
049cd0a8  LEA RAX,[R14 + 0x80]
049cd0af  MOV RCX,qword ptr [RAX + 0x10]
049cd0b3  MOV qword ptr [RDI + 0x10],RCX
049cd0b7  MOVUPS XMM0,xmmword ptr [RAX]
049cd0ba  MOVUPS xmmword ptr [RDI],XMM0
049cd0bd  JMP 0x049cd0d2
049cd0bf  MOV RDX,qword ptr [R14 + 0x88]
049cd0c6  MOV RSI,qword ptr [R14 + 0x90]
049cd0cd  CALL 0x0412e5e0
049cd0d2  LEA R15,[RBX + 0x98]
049cd0d9  MOV byte ptr [RBX + 0x98],0x0
049cd0e0  MOV dword ptr [RBX + 0x110],0xffffffff
049cd0ea  MOV R12D,dword ptr [R14 + 0x110]
049cd0f1  MOV EAX,0xffffffff
049cd0f6  CMP R12,RAX
049cd0f9  JZ 0x049cd11e
049cd0fb  LEA RSI,[R14 + 0x98]
049cd102  MOV qword ptr [RSP + 0x8],R15
049cd107  LEA RAX,[0xef4a350]
049cd10e  LEA RDI,[RSP + 0x8]
049cd113  CALL qword ptr [RAX + R12*0x8]
049cd117  MOV dword ptr [RBX + 0x110],R12D
049cd11e  LEA RDI,[RBX + 0x118]
049cd125  TEST byte ptr [R14 + 0x118],0x1
049cd12d  JNZ 0x049cd146
049cd12f  LEA RAX,[R14 + 0x118]
049cd136  MOV RCX,qword ptr [RAX + 0x10]
049cd13a  MOV qword ptr [RDI + 0x10],RCX
049cd13e  MOVUPS XMM0,xmmword ptr [RAX]
049cd141  MOVUPS xmmword ptr [RDI],XMM0
049cd144  JMP 0x049cd159
049cd146  MOV RDX,qword ptr [R14 + 0x120]
049cd14d  MOV RSI,qword ptr [R14 + 0x128]
049cd154  CALL 0x0412e5e0
049cd159  LEA R12,[RBX + 0x130]
049cd160  MOV byte ptr [RBX + 0x130],0x0
049cd167  MOV dword ptr [RBX + 0x1a8],0xffffffff
049cd171  MOV R13D,dword ptr [R14 + 0x1a8]
049cd178  MOV EAX,0xffffffff
049cd17d  CMP R13,RAX
049cd180  JZ 0x049cd1a5
049cd182  LEA RSI,[R14 + 0x130]
049cd189  MOV qword ptr [RSP + 0x8],R12
049cd18e  LEA RAX,[0xef4a350]
049cd195  LEA RDI,[RSP + 0x8]
049cd19a  CALL qword ptr [RAX + R13*0x8]
049cd19e  MOV dword ptr [RBX + 0x1a8],R13D
049cd1a5  LEA RDI,[RBX + 0x1b0]
049cd1ac  TEST byte ptr [R14 + 0x1b0],0x1
049cd1b4  JNZ 0x049cd1cd
049cd1b6  LEA RAX,[R14 + 0x1b0]
049cd1bd  MOV RCX,qword ptr [RAX + 0x10]
049cd1c1  MOV qword ptr [RDI + 0x10],RCX
049cd1c5  MOVUPS XMM0,xmmword ptr [RAX]
049cd1c8  MOVUPS xmmword ptr [RDI],XMM0
049cd1cb  JMP 0x049cd1e0
049cd1cd  MOV RDX,qword ptr [R14 + 0x1b8]
049cd1d4  MOV RSI,qword ptr [R14 + 0x1c0]
049cd1db  CALL 0x0412e5e0
049cd1e0  MOV RAX,qword ptr [R14 + 0x1c8]
049cd1e7  MOV qword ptr [RBX + 0x1c8],RAX
049cd1ee  ADD RSP,0x10
049cd1f2  POP RBX
049cd1f3  POP R12
049cd1f5  POP R13
049cd1f7  POP R14
049cd1f9  POP R15
049cd1fb  RET
```
