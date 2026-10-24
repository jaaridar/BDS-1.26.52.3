# FUN_09db9c20 (disassembly)

```
09db9c20  PUSH RBP
09db9c21  PUSH R15
09db9c23  PUSH R14
09db9c25  PUSH R13
09db9c27  PUSH R12
09db9c29  PUSH RBX
09db9c2a  SUB RSP,0x168
09db9c31  MOV RBP,RDX
09db9c34  MOV R14,RSI
09db9c37  MOV RBX,RDI
09db9c3a  XORPS XMM0,XMM0
09db9c3d  MOVAPS xmmword ptr [RSP + 0x80],XMM0
09db9c45  MOVAPS xmmword ptr [RSP + 0x70],XMM0
09db9c4a  MOV qword ptr [RSP + 0x90],0x0
09db9c56  MOV byte ptr [RSP + 0x10],0x0
09db9c5b  MOV byte ptr [RSP + 0x38],0x0
09db9c60  MOV RAX,qword ptr [RSI + 0x18]
09db9c64  LEA RCX,[RSI + 0x20]
09db9c68  MOVZX EDX,word ptr [RSI + 0x20]
09db9c6c  LEA RSI,[RAX + 0x128]
09db9c73  CMP EDX,0x7fff
09db9c79  CMOVZ RSI,RCX
09db9c7d  TEST RAX,RAX
09db9c80  CMOVZ RSI,RCX
09db9c84  MOVZX R12D,word ptr [RSI]
09db9c88  MOVSX EDI,R12W
09db9c8c  CALL 0x0c9fccb0
09db9c91  TEST RAX,RAX
09db9c94  JZ 0x09db9cc4
09db9c96  LEA RCX,[RAX + 0x20]
09db9c9a  LEA RDX,[RSP + 0x70]
09db9c9f  CMP RDX,RCX
09db9ca2  JZ 0x09db9d16
09db9ca4  LEA RCX,[RAX + 0x28]
09db9ca8  LEA RDI,[RSP + 0x78]
09db9cad  TEST byte ptr [RCX],0x1
09db9cb0  JNZ 0x09db9d1a
09db9cb2  MOV RDX,qword ptr [RCX + 0x10]
09db9cb6  MOV qword ptr [RDI + 0x10],RDX
09db9cba  MOVUPS XMM0,xmmword ptr [RCX]
09db9cbd  MOVUPS xmmword ptr [RDI],XMM0
09db9cc0  XOR ECX,ECX
09db9cc2  JMP 0x09db9d32
09db9cc4  XOR EDX,EDX
09db9cc6  MOV R13D,0x0
09db9ccc  CMP R12W,0x3
09db9cd1  JC 0x09db9e75
09db9cd7  XORPS XMM0,XMM0
09db9cda  MOVAPS xmmword ptr [RSP + 0x40],XMM0
09db9cdf  MOV qword ptr [RSP + 0x50],0x0
09db9ce8  CMP dword ptr [RBP],0x0
09db9cec  JZ 0x09dba3b1
09db9cf2  LEA RSI,[0x1261a3a]
09db9cf9  LEA RCX,[RSP + 0x40]
09db9cfe  MOV EDX,0x1d
09db9d03  MOV RDI,RBP
09db9d06  MOV R8D,0x1
09db9d0c  CALL 0x09e22e10
09db9d11  JMP 0x09dba3b1
09db9d16  XOR ECX,ECX
09db9d18  JMP 0x09db9d32
09db9d1a  MOV RDX,qword ptr [RAX + 0x30]
09db9d1e  MOV RSI,qword ptr [RAX + 0x38]
09db9d22  MOV R15,RAX
09db9d25  CALL 0x04885070
09db9d2a  MOV RAX,R15
09db9d2d  MOVZX ECX,byte ptr [RSP + 0x38]
09db9d32  MOV RDX,qword ptr [RAX + 0x20]
09db9d36  MOV qword ptr [RSP + 0x70],RDX
09db9d3b  MOV qword ptr [RSP + 0x90],0x0
09db9d47  MOVZX R13D,byte ptr [RAX + 0x4]
09db9d4c  LEA R15,[RAX + 0x50]
09db9d50  CMP CL,byte ptr [RAX + 0x78]
09db9d53  JNZ 0x09db9da6
09db9d55  MOV EDX,0x2
09db9d5a  TEST CL,0x1
09db9d5d  JZ 0x09db9e75
09db9d63  LEA RCX,[RSP + 0x10]
09db9d68  CMP RCX,R15
09db9d6b  JZ 0x09db9e64
09db9d71  LEA RCX,[RAX + 0x58]
09db9d75  LEA RDI,[RSP + 0x18]
09db9d7a  MOVZX R8D,byte ptr [RCX]
09db9d7e  TEST byte ptr [RSP + 0x18],0x1
09db9d83  JNZ 0x09db9e0a
09db9d89  TEST R8B,0x1
09db9d8d  JNZ 0x09db9e52
09db9d93  MOV RAX,qword ptr [RCX + 0x10]
09db9d97  MOV qword ptr [RDI + 0x10],RAX
09db9d9b  MOVUPS XMM0,xmmword ptr [RCX]
09db9d9e  MOVUPS xmmword ptr [RDI],XMM0
09db9da1  JMP 0x09db9e64
09db9da6  TEST CL,0x1
09db9da9  JZ 0x09db9dc9
09db9dab  TEST byte ptr [RSP + 0x18],0x1
09db9db0  JZ 0x09db9dc5
09db9db2  MOV RSI,qword ptr [RSP + 0x18]
09db9db7  MOV RDI,qword ptr [RSP + 0x28]
09db9dbc  AND RSI,-0x2
09db9dc0  CALL 0x0412a280
09db9dc5  XOR EAX,EAX
09db9dc7  JMP 0x09db9e47
09db9dc9  LEA RCX,[RSP + 0x10]
09db9dce  XORPS XMM0,XMM0
09db9dd1  MOVAPS xmmword ptr [RSP + 0x20],XMM0
09db9dd6  MOVAPS xmmword ptr [RSP + 0x10],XMM0
09db9ddb  MOV qword ptr [RSP + 0x30],0x0
09db9de4  CMP RCX,R15
09db9de7  JZ 0x09db9e3d
09db9de9  LEA RDI,[RSP + 0x18]
09db9dee  MOV RCX,RAX
09db9df1  ADD RCX,0x58
09db9df5  TEST byte ptr [RCX],0x1
09db9df8  JNZ 0x09db9e30
09db9dfa  MOV RAX,qword ptr [RCX + 0x10]
09db9dfe  MOV qword ptr [RDI + 0x10],RAX
09db9e02  MOVUPS XMM0,xmmword ptr [RCX]
09db9e05  MOVUPS xmmword ptr [RDI],XMM0
09db9e08  JMP 0x09db9e3d
09db9e0a  MOV RSI,RAX
09db9e0d  ADD RSI,0x59
09db9e11  MOV EDX,R8D
09db9e14  SHR EDX,0x1
09db9e16  TEST R8B,0x1
09db9e1a  CMOVNZ RSI,qword ptr [RAX + 0x68]
09db9e1f  CMOVNZ RDX,qword ptr [RAX + 0x60]
09db9e24  CALL 0x04885120
09db9e29  MOV EDX,0x2
09db9e2e  JMP 0x09db9e64
09db9e30  MOV RDX,qword ptr [RAX + 0x60]
09db9e34  MOV RSI,qword ptr [RAX + 0x68]
09db9e38  CALL 0x04885070
09db9e3d  MOV RAX,qword ptr [R15]
09db9e40  MOV qword ptr [RSP + 0x10],RAX
09db9e45  MOV AL,0x1
09db9e47  MOV byte ptr [RSP + 0x38],AL
09db9e4b  MOV EDX,0x2
09db9e50  JMP 0x09db9e75
09db9e52  MOV RDX,qword ptr [RAX + 0x60]
09db9e56  MOV RSI,qword ptr [RAX + 0x68]
09db9e5a  CALL 0x04885070
09db9e5f  MOV EDX,0x2
09db9e64  MOV RAX,qword ptr [R15]
09db9e67  MOV qword ptr [RSP + 0x10],RAX
09db9e6c  MOV qword ptr [RSP + 0x30],0x0
09db9e75  MOV dword ptr [RSP + 0xdc],EDX
09db9e7c  MOV word ptr [RSP + 0xe],R12W
09db9e82  MOV RDI,qword ptr [RBX + 0x1c8]
09db9e89  CALL 0x0412c300
09db9e8e  MOV R15,qword ptr [RBX + 0x1c0]
09db9e95  MOV RCX,-0x1
09db9e9c  XADD.LOCK qword ptr [RAX + 0x8],RCX
09db9ea2  TEST RCX,RCX
09db9ea5  JNZ 0x09db9ebb
09db9ea7  MOV RCX,qword ptr [RAX]
09db9eaa  MOV RDI,RAX
09db9ead  MOV R12,RAX
09db9eb0  CALL qword ptr [RCX + 0x10]
09db9eb3  MOV RDI,R12
09db9eb6  CALL 0x0412c2d0
09db9ebb  MOV RAX,qword ptr [R15]
09db9ebe  MOV RDI,R15
09db9ec1  CALL qword ptr [RAX + 0x68]
09db9ec4  MOV R12,RAX
09db9ec7  MOV RAX,qword ptr [RAX]
09db9eca  MOV RDI,R12
09db9ecd  CALL qword ptr [RAX + 0x150]
09db9ed3  MOV qword ptr [RSP + 0x60],0x0
09db9edc  MOV dword ptr [RSP + 0x68],0x0
09db9ee4  MOVZX ECX,byte ptr [RSP + 0x78]
09db9ee9  TEST CL,0x1
09db9eec  MOV qword ptr [RSP + 0x108],R14
09db9ef4  JZ 0x09db9fa2
09db9efa  MOV RCX,qword ptr [RSP + 0x80]
09db9f02  MOV qword ptr [RSP + 0x138],RAX
09db9f0a  TEST RCX,RCX
09db9f0d  JZ 0x09db9fb5
09db9f13  MOV R14D,R13D
09db9f16  MOV R13,RBP
09db9f19  MOV RDI,qword ptr [RBX + 0x1c8]
09db9f20  CALL 0x0412c300
09db9f25  MOV RBP,qword ptr [RBX + 0x1c0]
09db9f2c  MOV RCX,-0x1
09db9f33  XADD.LOCK qword ptr [RAX + 0x8],RCX
09db9f39  TEST RCX,RCX
09db9f3c  JZ 0x09dba01b
09db9f42  MOV R15,qword ptr [RBP + 0x1b0]
09db9f49  TEST R15,R15
09db9f4c  JZ 0x09dba03f
09db9f52  LEA RDI,[RSP + 0xe8]
09db9f5a  XORPS XMM0,XMM0
09db9f5d  MOVAPS xmmword ptr [RSP + 0xf0],XMM0
09db9f65  MOVAPS xmmword ptr [RSP + 0xe0],XMM0
09db9f6d  MOV qword ptr [RSP + 0x100],0x0
09db9f79  TEST byte ptr [RSP + 0x78],0x1
09db9f7e  MOV RBP,R13
09db9f81  JNZ 0x09dba07f
09db9f87  LEA RAX,[RSP + 0x78]
09db9f8c  MOV RCX,qword ptr [RAX + 0x10]
09db9f90  MOV qword ptr [RDI + 0x10],RCX
09db9f94  MOVUPS XMM0,xmmword ptr [RAX]
09db9f97  MOVUPS xmmword ptr [RDI],XMM0
09db9f9a  MOV R13D,R14D
09db9f9d  JMP 0x09dba097
09db9fa2  SHR ECX,0x1
09db9fa4  MOV qword ptr [RSP + 0x138],RAX
09db9fac  TEST RCX,RCX
09db9faf  JNZ 0x09db9f13
09db9fb5  MOV R15,qword ptr [RBX + 0x208]
09db9fbc  MOVSS XMM0,dword ptr [R15 + 0x8]
09db9fc2  CALL 0x0eee4390
09db9fc7  CVTTSS2SI EBP,XMM0
09db9fcb  MOVSD XMM0,qword ptr [R15]
09db9fd0  MOVAPS xmmword ptr [RSP + 0x110],XMM0
09db9fd8  CALL 0x0eee4390
09db9fdd  MOVAPS xmmword ptr [RSP + 0x120],XMM0
09db9fe5  MOVAPS XMM0,xmmword ptr [RSP + 0x110]
09db9fed  SHUFPS XMM0,XMM0,0x55
09db9ff1  CALL 0x0eee4390
09db9ff6  MOVAPS XMM1,xmmword ptr [RSP + 0x120]
09db9ffe  UNPCKLPS XMM1,XMM0
09dba001  CVTTPS2DQ XMM0,XMM1
09dba005  MOVLPS qword ptr [RSP + 0x60],XMM0
09dba00a  MOV dword ptr [RSP + 0x68],EBP
09dba00e  MOV R14,qword ptr [RSP + 0x108]
09dba016  JMP 0x09dba21b
09dba01b  MOV RCX,qword ptr [RAX]
09dba01e  MOV RDI,RAX
09dba021  MOV R15,RAX
09dba024  CALL qword ptr [RCX + 0x10]
09dba027  MOV RDI,R15
09dba02a  CALL 0x0412c2d0
09dba02f  MOV R15,qword ptr [RBP + 0x1b0]
09dba036  TEST R15,R15
09dba039  JNZ 0x09db9f52
09dba03f  XORPS XMM0,XMM0
09dba042  MOVAPS xmmword ptr [RSP + 0x40],XMM0
09dba047  MOV qword ptr [RSP + 0x50],0x0
09dba050  CMP dword ptr [R13],0x0
09dba055  JZ 0x09dba3b1
09dba05b  LEA RSI,[0x12add25]
09dba062  LEA RCX,[RSP + 0x40]
09dba067  MOV EDX,0x21
09dba06c  MOV RDI,R13
09dba06f  MOV R8D,0x1
09dba075  CALL 0x09e22e10
09dba07a  JMP 0x09dba3b1
09dba07f  MOV RDX,qword ptr [RSP + 0x80]
09dba087  MOV RSI,qword ptr [RSP + 0x88]
09dba08f  CALL 0x04885070
09dba094  MOV R13D,R14D
09dba097  MOV RAX,qword ptr [RSP + 0x70]
09dba09c  MOV qword ptr [RSP + 0xe0],RAX
09dba0a4  MOV RAX,qword ptr [RBX + 0x208]
09dba0ab  MOVSS XMM0,dword ptr [RAX + 0x8]
09dba0b0  MOVSS dword ptr [RSP + 0x120],XMM0
09dba0b9  MOVSD XMM0,qword ptr [RAX]
09dba0bd  MOVAPS xmmword ptr [RSP + 0x140],XMM0
09dba0c5  CALL 0x0eee4390
09dba0ca  MOVAPS xmmword ptr [RSP + 0x110],XMM0
09dba0d2  MOVAPS XMM0,xmmword ptr [RSP + 0x140]
09dba0da  SHUFPS XMM0,XMM0,0x55
09dba0de  CALL 0x0eee4390
09dba0e3  MOVAPS XMM1,xmmword ptr [RSP + 0x110]
09dba0eb  UNPCKLPS XMM1,XMM0
09dba0ee  CVTTPS2DQ XMM0,XMM1
09dba0f2  MOVLPS qword ptr [RSP + 0x40],XMM0
09dba0f7  MOVSS XMM0,dword ptr [RSP + 0x120]
09dba100  CALL 0x0eee4390
09dba105  CVTTSS2SI EAX,XMM0
09dba109  MOV dword ptr [RSP + 0x48],EAX
09dba10d  MOV byte ptr [RSP + 0xa0],0x0
09dba115  MOV byte ptr [RSP + 0xc8],0x0
09dba11d  CMP byte ptr [RSP + 0x38],0x1
09dba122  MOV R14,qword ptr [RSP + 0x108]
09dba12a  JNZ 0x09dba193
09dba12c  LEA RDI,[RSP + 0xa8]
09dba134  XORPS XMM0,XMM0
09dba137  MOVAPS xmmword ptr [RSP + 0xb0],XMM0
09dba13f  MOVAPS xmmword ptr [RSP + 0xa0],XMM0
09dba147  MOV qword ptr [RSP + 0xc0],0x0
09dba153  TEST byte ptr [RSP + 0x18],0x1
09dba158  JNZ 0x09dba16f
09dba15a  LEA RAX,[RSP + 0x18]
09dba15f  MOV RCX,qword ptr [RAX + 0x10]
09dba163  MOV qword ptr [RDI + 0x10],RCX
09dba167  MOVUPS XMM0,xmmword ptr [RAX]
09dba16a  MOVUPS xmmword ptr [RDI],XMM0
09dba16d  JMP 0x09dba17e
09dba16f  MOV RDX,qword ptr [RSP + 0x20]
09dba174  MOV RSI,qword ptr [RSP + 0x28]
09dba179  CALL 0x04885070
09dba17e  MOV RAX,qword ptr [RSP + 0x10]
09dba183  MOV qword ptr [RSP + 0xa0],RAX
09dba18b  MOV byte ptr [RSP + 0xc8],0x1
09dba193  MOV RAX,qword ptr [R15]
09dba196  LEA RSI,[RSP + 0xe0]
09dba19e  LEA RDX,[RSP + 0x40]
09dba1a3  LEA RCX,[RSP + 0x60]
09dba1a8  LEA R9,[RSP + 0xa0]
09dba1b0  MOV RDI,R15
09dba1b3  MOV R8D,0x1
09dba1b9  CALL qword ptr [RAX + 0x160]
09dba1bf  MOV R15D,EAX
09dba1c2  CMP byte ptr [RSP + 0xc8],0x1
09dba1ca  JNZ 0x09dba1ef
09dba1cc  TEST byte ptr [RSP + 0xa8],0x1
09dba1d4  JZ 0x09dba1ef
09dba1d6  MOV RSI,qword ptr [RSP + 0xa8]
09dba1de  MOV RDI,qword ptr [RSP + 0xb8]
09dba1e6  AND RSI,-0x2
09dba1ea  CALL 0x0412a280
09dba1ef  TEST byte ptr [RSP + 0xe8],0x1
09dba1f7  JZ 0x09dba212
09dba1f9  MOV RSI,qword ptr [RSP + 0xe8]
09dba201  MOV RDI,qword ptr [RSP + 0xf8]
09dba209  AND RSI,-0x2
09dba20d  CALL 0x0412a280
09dba212  TEST R15B,R15B
09dba215  JZ 0x09dba37b
09dba21b  MOV qword ptr [RSP + 0x40],-0x1
09dba224  MOV RAX,qword ptr [R12]
09dba228  MOV RDI,R12
09dba22b  CALL qword ptr [RAX + 0x98]
09dba231  MOV RDI,qword ptr [RSP + 0x138]
09dba239  MOV R9,qword ptr [RDI]
09dba23c  LEA RSI,[RSP + 0x40]
09dba241  LEA RDX,[RSP + 0x60]
09dba246  MOV ECX,EAX
09dba248  MOV R8D,dword ptr [RSP + 0xdc]
09dba250  CALL qword ptr [R9 + 0x898]
09dba257  MOV R15,RAX
09dba25a  CMP word ptr [RSP + 0xe],0x2
09dba260  JC 0x09dba26a
09dba262  MOV RDI,R14
09dba265  CALL 0x0c4fac60
09dba26a  MOV RDI,R14
09dba26d  MOV RSI,R15
09dba270  CALL 0x0c467270
09dba275  MOVZX EAX,byte ptr [RSP + 0x78]
09dba27a  TEST AL,0x1
09dba27c  JZ 0x09dba290
09dba27e  MOV RAX,qword ptr [RSP + 0x80]
09dba286  TEST RAX,RAX
09dba289  JNZ 0x09dba29b
09dba28b  JMP 0x09dba369
09dba290  SHR EAX,0x1
09dba292  TEST RAX,RAX
09dba295  JZ 0x09dba369
09dba29b  MOV dword ptr [RSP + 0x40],0x1
09dba2a3  MOV qword ptr [RSP + 0x48],-0x1
09dba2ac  MOV RAX,qword ptr [RSP + 0x60]
09dba2b1  MOV qword ptr [RSP + 0x50],RAX
09dba2b6  MOV EAX,dword ptr [RSP + 0x68]
09dba2ba  MOV dword ptr [RSP + 0x58],EAX
09dba2be  MOVSX R8D,R13B
09dba2c2  LEA RDI,[RSP + 0x158]
09dba2ca  LEA RDX,[RSP + 0x40]
09dba2cf  MOV RSI,R15
09dba2d2  MOV RCX,R12
09dba2d5  CALL 0x0d292640
09dba2da  MOV R14,qword ptr [RSP + 0x160]
09dba2e2  TEST R14,R14
09dba2e5  JZ 0x09dba30a
09dba2e7  MOV RAX,-0x1
09dba2ee  XADD.LOCK qword ptr [R14 + 0x8],RAX
09dba2f4  TEST RAX,RAX
09dba2f7  JNZ 0x09dba30a
09dba2f9  MOV RAX,qword ptr [R14]
09dba2fc  MOV RDI,R14
09dba2ff  CALL qword ptr [RAX + 0x10]
09dba302  MOV RDI,R14
09dba305  CALL 0x0412c2d0
09dba30a  CMP byte ptr [R15 + 0x78],0x0
09dba30f  JNZ 0x09dba318
09dba311  MOV word ptr [R15 + 0x79],0x101
09dba318  MOV byte ptr [R15 + 0x78],0x1
09dba31d  MOV byte ptr [R15 + 0x19],0x1
09dba322  MOV RDI,qword ptr [RBX + 0x1c8]
09dba329  CALL 0x0412c300
09dba32e  MOV RDI,qword ptr [RBX + 0x1c0]
09dba335  MOV RCX,-0x1
09dba33c  XADD.LOCK qword ptr [RAX + 0x8],RCX
09dba342  TEST RCX,RCX
09dba345  JNZ 0x09dba361
09dba347  MOV RCX,qword ptr [RAX]
09dba34a  MOV R14,RDI
09dba34d  MOV RDI,RAX
09dba350  MOV RBX,RAX
09dba353  CALL qword ptr [RCX + 0x10]
09dba356  MOV RDI,RBX
09dba359  CALL 0x0412c2d0
09dba35e  MOV RDI,R14
09dba361  MOV RSI,R15
09dba364  CALL 0x0c46a3d0
09dba369  MOV word ptr [R15 + 0x79],0x101
09dba370  MOV BL,0x1
09dba372  CMP byte ptr [RSP + 0x38],0x1
09dba377  JZ 0x09dba3ba
09dba379  JMP 0x09dba3d4
09dba37b  XORPS XMM0,XMM0
09dba37e  MOVAPS xmmword ptr [RSP + 0x40],XMM0
09dba383  MOV qword ptr [RSP + 0x50],0x0
09dba38c  CMP dword ptr [RBP],0x0
09dba390  JZ 0x09dba3b1
09dba392  LEA RSI,[0x12add25]
09dba399  LEA RCX,[RSP + 0x40]
09dba39e  MOV EDX,0x21
09dba3a3  MOV RDI,RBP
09dba3a6  MOV R8D,0x1
09dba3ac  CALL 0x09e22e10
09dba3b1  XOR EBX,EBX
09dba3b3  CMP byte ptr [RSP + 0x38],0x1
09dba3b8  JNZ 0x09dba3d4
09dba3ba  TEST byte ptr [RSP + 0x18],0x1
09dba3bf  JZ 0x09dba3d4
09dba3c1  MOV RSI,qword ptr [RSP + 0x18]
09dba3c6  MOV RDI,qword ptr [RSP + 0x28]
09dba3cb  AND RSI,-0x2
09dba3cf  CALL 0x0412a280
09dba3d4  TEST byte ptr [RSP + 0x78],0x1
09dba3d9  JZ 0x09dba3f1
09dba3db  MOV RSI,qword ptr [RSP + 0x78]
09dba3e0  MOV RDI,qword ptr [RSP + 0x88]
09dba3e8  AND RSI,-0x2
09dba3ec  CALL 0x0412a280
09dba3f1  MOV EAX,EBX
09dba3f3  ADD RSP,0x168
09dba3fa  POP RBX
09dba3fb  POP R12
09dba3fd  POP R13
09dba3ff  POP R14
09dba401  POP R15
09dba403  POP RBP
09dba404  RET
```
