# FUN_0eeb79f0 (disassembly)

```
04136a20  JMP 0x0eee2d80
0eeb79f0  PUSH RBP
0eeb79f1  PUSH R15
0eeb79f3  PUSH R14
0eeb79f5  PUSH R13
0eeb79f7  PUSH R12
0eeb79f9  PUSH RBX
0eeb79fa  SUB RSP,0x98
0eeb7a01  MOV R12,RSI
0eeb7a04  MOV R13,RDI
0eeb7a07  MOV byte ptr [RDI],0x0
0eeb7a0a  XORPS XMM0,XMM0
0eeb7a0d  MOVUPS xmmword ptr [RDI + 0x8],XMM0
0eeb7a11  LEA RDI,[0xf552e80]
0eeb7a18  CALL 0x0412d550
0eeb7a1d  INC.LOCK qword ptr [0x0f552f50]
0eeb7a25  LEA R15,[0xf552e80]
0eeb7a2c  MOV RDI,R15
0eeb7a2f  CALL 0x0412d610
0eeb7a34  MOV RAX,qword ptr [0x0f552f60]
0eeb7a3b  TEST RAX,RAX
0eeb7a3e  JZ 0x0eeb7b14
0eeb7a44  MOVZX ECX,byte ptr [RAX]
0eeb7a47  CMP CL,0x1
0eeb7a4a  JNZ 0x0eeb7b14
0eeb7a50  MOV R14,qword ptr [0x0f552f68]
0eeb7a57  TEST R14,R14
0eeb7a5a  JZ 0x0eeb7a64
0eeb7a5c  INC.LOCK qword ptr [R14 + 0x8]
0eeb7a61  MOVZX ECX,byte ptr [RAX]
0eeb7a64  MOV RDX,qword ptr [0x0f552f70]
0eeb7a6b  MOV qword ptr [RSP + 0x40],R15
0eeb7a70  MOV byte ptr [RSP + 0x48],0x1
0eeb7a75  MOV qword ptr [RSP + 0x50],RAX
0eeb7a7a  MOV qword ptr [RSP + 0x58],R14
0eeb7a7f  MOV qword ptr [RSP + 0x60],RDX
0eeb7a84  TEST CL,0x1
0eeb7a87  JZ 0x0eeb7fcf
0eeb7a8d  TEST byte ptr [RDX + 0x18],0x1
0eeb7a91  JZ 0x0eeb7fcf
0eeb7a97  MOV RAX,qword ptr [RDX + 0x60]
0eeb7a9b  MOV RBP,qword ptr [RDX + 0x68]
0eeb7a9f  TEST RBP,RBP
0eeb7aa2  JZ 0x0eeb7aa9
0eeb7aa4  INC.LOCK qword ptr [RBP + 0x8]
0eeb7aa9  TEST RAX,RAX
0eeb7aac  JZ 0x0eeb7fa1
0eeb7ab2  MOV byte ptr [R13],0x1
0eeb7ab7  MOV qword ptr [RSP + 0x28],RAX
0eeb7abc  LEA RDI,[RAX + 0x10]
0eeb7ac0  CALL 0x0eec09c0
0eeb7ac5  MOV qword ptr [RSP + 0x18],RAX
0eeb7aca  LEA RBX,[RSP + 0xd0]
0eeb7ad2  MOV R14,qword ptr [RSP + 0x18]
0eeb7ad7  MOV R15,qword ptr [R14 + 0x8]
0eeb7adb  MOV RCX,qword ptr [R14 + 0x10]
0eeb7adf  CMP R15,RCX
0eeb7ae2  JNC 0x0eeb7b62
0eeb7ae4  MOV RAX,qword ptr [RBX + 0x10]
0eeb7ae8  MOV qword ptr [R15 + 0x10],RAX
0eeb7aec  MOVUPS XMM0,xmmword ptr [RBX]
0eeb7aef  MOVUPS xmmword ptr [R15],XMM0
0eeb7af3  MOV qword ptr [R15 + 0x18],0x0
0eeb7afb  MOV R12,qword ptr [R12]
0eeb7aff  BT R12,0x37
0eeb7b04  JC 0x0eeb7c10
0eeb7b0a  MOV RAX,qword ptr [RSP + 0x28]
0eeb7b0f  JMP 0x0eeb7cb5
0eeb7b14  MOV qword ptr [RSP + 0x40],0x0
0eeb7b1d  MOV byte ptr [RSP + 0x48],0x0
0eeb7b22  LEA RDI,[0xf552e80]
0eeb7b29  CALL 0x0eee02f0
0eeb7b2e  CMP byte ptr [RSP + 0x48],0x1
0eeb7b33  JNZ 0x0eeb7b50
0eeb7b35  MOV RDI,qword ptr [RSP + 0x40]
0eeb7b3a  ADD RSP,0x98
0eeb7b41  POP RBX
0eeb7b42  POP R12
0eeb7b44  POP R13
0eeb7b46  POP R14
0eeb7b48  POP R15
0eeb7b4a  POP RBP
0eeb7b4b  JMP 0x0eee02f0
0eeb7b50  ADD RSP,0x98
0eeb7b57  POP RBX
0eeb7b58  POP R12
0eeb7b5a  POP R13
0eeb7b5c  POP R14
0eeb7b5e  POP R15
0eeb7b60  POP RBP
0eeb7b61  RET
0eeb7b62  MOV RAX,0x666666666666666
0eeb7b6c  MOV RDX,qword ptr [R14]
0eeb7b6f  SUB R15,RDX
0eeb7b72  MOV qword ptr [RSP + 0x20],R15
0eeb7b77  SAR R15,0x3
0eeb7b7b  MOV RSI,-0x3333333333333333
0eeb7b85  IMUL R15,RSI
0eeb7b89  INC R15
0eeb7b8c  CMP R15,RAX
0eeb7b8f  JA 0x0eeb806d
0eeb7b95  SUB RCX,RDX
0eeb7b98  SAR RCX,0x3
0eeb7b9c  IMUL RCX,RSI
0eeb7ba0  LEA RDX,[RCX + RCX*0x1]
0eeb7ba4  CMP RDX,R15
0eeb7ba7  CMOVA R15,RDX
0eeb7bab  MOV RDX,0x333333333333333
0eeb7bb5  CMP RCX,RDX
0eeb7bb8  CMOVNC R15,RAX
0eeb7bbc  MOV qword ptr [RSP + 0x90],R14
0eeb7bc4  TEST R15,R15
0eeb7bc7  JZ 0x0eeb7cca
0eeb7bcd  CMP R15,RAX
0eeb7bd0  JA 0x0eeb8072
0eeb7bd6  LEA RAX,[R15*0x8]
0eeb7bde  LEA R14,[RAX + RAX*0x4]
0eeb7be2  LEA RDI,[0xf5463b0]
0eeb7be9  MOV RAX,qword ptr [0x0f5463b0]
0eeb7bf0  MOV RSI,R14
0eeb7bf3  CALL qword ptr [RAX + 0x10]
0eeb7bf6  TEST RAX,RAX
0eeb7bf9  JNZ 0x0eeb7ccc
0eeb7bff  MOV RDI,R14
0eeb7c02  XOR ESI,ESI
0eeb7c04  CALL 0x0eec74c0
0eeb7c09  XOR EAX,EAX
0eeb7c0b  JMP 0x0eeb7ccc
0eeb7c10  MOV RBX,R15
0eeb7c13  MOV qword ptr [RSP + 0x10],RBP
0eeb7c18  MOV qword ptr [RSP + 0x8],R13
0eeb7c1d  MOV RAX,-0xff000000000001
0eeb7c27  AND R12,RAX
0eeb7c2a  MOV R13,qword ptr [R12 + -0x8]
0eeb7c2f  LEA R15,[R13 + 0x9]
0eeb7c33  LEA RDI,[0xf5463b0]
0eeb7c3a  MOV RAX,qword ptr [0x0f5463b0]
0eeb7c41  MOV EDX,0x8
0eeb7c46  MOV RSI,R15
0eeb7c49  CALL qword ptr [RAX + 0x20]
0eeb7c4c  MOV R14,RAX
0eeb7c4f  TEST RAX,RAX
0eeb7c52  SETNZ AL
0eeb7c55  TEST R15,R15
0eeb7c58  SETZ CL
0eeb7c5b  OR CL,AL
0eeb7c5d  JZ 0x0eeb8049
0eeb7c63  MOV RBP,0x80000000000000
0eeb7c6d  MOV qword ptr [R14],R13
0eeb7c70  MOV R15,R14
0eeb7c73  ADD R15,0x8
0eeb7c77  MOV RDI,R15
0eeb7c7a  MOV RSI,R12
0eeb7c7d  MOV RDX,R13
0eeb7c80  CALL 0x0eee2f00
0eeb7c85  MOV byte ptr [R14 + R13*0x1 + 0x8],0x0
0eeb7c8b  MOV RAX,-0xff000000000001
0eeb7c95  AND R15,RAX
0eeb7c98  OR R15,RBP
0eeb7c9b  MOV R12,R15
0eeb7c9e  MOV R13,qword ptr [RSP + 0x8]
0eeb7ca3  MOV RBP,qword ptr [RSP + 0x10]
0eeb7ca8  MOV RAX,qword ptr [RSP + 0x28]
0eeb7cad  MOV R14,qword ptr [RSP + 0x18]
0eeb7cb2  MOV R15,RBX
0eeb7cb5  MOV qword ptr [R15 + 0x18],R12
0eeb7cb9  MOV qword ptr [R15 + 0x20],R13
0eeb7cbd  ADD R15,0x28
0eeb7cc1  MOV qword ptr [R14 + 0x8],R15
0eeb7cc5  JMP 0x0eeb7f7d
0eeb7cca  XOR EAX,EAX
0eeb7ccc  MOV qword ptr [RSP + 0x10],RBP
0eeb7cd1  MOV qword ptr [RSP + 0x8],R13
0eeb7cd6  MOV RDI,-0xff000000000001
0eeb7ce0  MOV R8,0x80000000000000
0eeb7cea  MOV qword ptr [RSP + 0x70],RAX
0eeb7cef  MOV RDX,qword ptr [RSP + 0x20]
0eeb7cf4  LEA RBP,[RAX + RDX*0x1]
0eeb7cf8  MOV qword ptr [RSP + 0x80],RBP
0eeb7d00  MOV qword ptr [RSP + 0x78],RBP
0eeb7d05  LEA RCX,[R15 + R15*0x4]
0eeb7d09  LEA RCX,[RAX + RCX*0x8]
0eeb7d0d  MOV qword ptr [RSP + 0x68],RCX
0eeb7d12  MOV qword ptr [RSP + 0x88],RCX
0eeb7d1a  MOV RCX,qword ptr [RBX + 0x10]
0eeb7d1e  MOV qword ptr [RAX + RDX*0x1 + 0x10],RCX
0eeb7d23  MOVUPS XMM0,xmmword ptr [RBX]
0eeb7d26  MOVUPS xmmword ptr [RAX + RDX*0x1],XMM0
0eeb7d2a  MOV qword ptr [RAX + RDX*0x1 + 0x18],0x0
0eeb7d33  MOV R12,qword ptr [R12]
0eeb7d37  BT R12,0x37
0eeb7d3c  JNC 0x0eeb7db5
0eeb7d3e  AND R12,RDI
0eeb7d41  MOV R13,qword ptr [R12 + -0x8]
0eeb7d46  LEA R15,[R13 + 0x9]
0eeb7d4a  LEA RDI,[0xf5463b0]
0eeb7d51  MOV RAX,qword ptr [0x0f5463b0]
0eeb7d58  MOV EDX,0x8
0eeb7d5d  MOV RSI,R15
0eeb7d60  CALL qword ptr [RAX + 0x20]
0eeb7d63  MOV R14,RAX
0eeb7d66  TEST RAX,RAX
0eeb7d69  SETNZ AL
0eeb7d6c  TEST R15,R15
0eeb7d6f  SETZ CL
0eeb7d72  OR CL,AL
0eeb7d74  JZ 0x0eeb805b
0eeb7d7a  MOV qword ptr [R14],R13
0eeb7d7d  MOV R15,R14
0eeb7d80  ADD R15,0x8
0eeb7d84  MOV RDI,R15
0eeb7d87  MOV RSI,R12
0eeb7d8a  MOV RDX,R13
0eeb7d8d  CALL 0x0eee2f00
0eeb7d92  MOV byte ptr [R14 + R13*0x1 + 0x8],0x0
0eeb7d98  MOV RDI,-0xff000000000001
0eeb7da2  AND R15,RDI
0eeb7da5  MOV R8,0x80000000000000
0eeb7daf  OR R15,R8
0eeb7db2  MOV R12,R15
0eeb7db5  MOV qword ptr [RBP + 0x18],R12
0eeb7db9  MOV RAX,qword ptr [RSP + 0x8]
0eeb7dbe  MOV qword ptr [RBP + 0x20],RAX
0eeb7dc2  LEA R15,[RBP + 0x28]
0eeb7dc6  MOV qword ptr [RSP + 0x80],R15
0eeb7dce  MOV R14,qword ptr [RSP + 0x18]
0eeb7dd3  MOV R12,qword ptr [R14]
0eeb7dd6  MOV R9,qword ptr [R14 + 0x8]
0eeb7dda  MOV RAX,R12
0eeb7ddd  SUB RAX,R9
0eeb7de0  LEA RDX,[RBP + RAX*0x1]
0eeb7de5  JZ 0x0eeb7f4a
0eeb7deb  MOV qword ptr [RSP + 0x20],R15
0eeb7df0  XOR EBX,EBX
0eeb7df2  MOV qword ptr [RSP + 0x30],RDX
0eeb7df7  MOV qword ptr [RSP + 0x38],R9
0eeb7dfc  JMP 0x0eeb7e64
0eeb7e00  MOV qword ptr [R15],R14
0eeb7e03  MOV R13,R15
0eeb7e06  ADD R13,0x8
0eeb7e0a  MOV RDI,R13
0eeb7e0d  MOV RSI,RBP
0eeb7e10  MOV RDX,R14
0eeb7e13  CALL 0x0eee2f00
0eeb7e18  MOV byte ptr [R15 + R14*0x1 + 0x8],0x0
0eeb7e1e  MOV RDI,-0xff000000000001
0eeb7e28  AND R13,RDI
0eeb7e2b  MOV R8,0x80000000000000
0eeb7e35  OR R13,R8
0eeb7e38  MOV RBP,R13
0eeb7e3b  MOV RDX,qword ptr [RSP + 0x30]
0eeb7e40  MOV R9,qword ptr [RSP + 0x38]
0eeb7e45  LEA RAX,[R12 + RBX*0x1]
0eeb7e49  MOV qword ptr [RDX + RBX*0x1 + 0x18],RBP
0eeb7e4e  MOV RCX,qword ptr [RAX + 0x20]
0eeb7e52  MOV qword ptr [RDX + RBX*0x1 + 0x20],RCX
0eeb7e57  ADD RBX,0x28
0eeb7e5b  ADD RAX,0x28
0eeb7e5f  CMP RAX,R9
0eeb7e62  JZ 0x0eeb7ed7
0eeb7e64  MOV RAX,qword ptr [R12 + RBX*0x1 + 0x10]
0eeb7e69  MOV qword ptr [RDX + RBX*0x1 + 0x10],RAX
0eeb7e6e  MOVUPS XMM0,xmmword ptr [R12 + RBX*0x1]
0eeb7e73  MOVUPS xmmword ptr [RDX + RBX*0x1],XMM0
0eeb7e77  MOV qword ptr [RDX + RBX*0x1 + 0x18],0x0
0eeb7e80  MOV RBP,qword ptr [R12 + RBX*0x1 + 0x18]
0eeb7e85  TEST RBP,R8
0eeb7e88  JZ 0x0eeb7e45
0eeb7e8a  AND RBP,RDI
0eeb7e8d  MOV R14,qword ptr [RBP + -0x8]
0eeb7e91  LEA R13,[R14 + 0x9]
0eeb7e95  MOV RAX,qword ptr [0x0f5463b0]
0eeb7e9c  MOV EDX,0x8
0eeb7ea1  LEA RDI,[0xf5463b0]
0eeb7ea8  MOV RSI,R13
0eeb7eab  CALL qword ptr [RAX + 0x20]
0eeb7eae  MOV R15,RAX
0eeb7eb1  TEST RAX,RAX
0eeb7eb4  SETNZ AL
0eeb7eb7  TEST R13,R13
0eeb7eba  SETZ CL
0eeb7ebd  OR CL,AL
0eeb7ebf  JNZ 0x0eeb7e00
0eeb7ec5  MOV ESI,0x8
0eeb7eca  MOV RDI,R13
0eeb7ecd  CALL 0x0eec74c0
0eeb7ed2  JMP 0x0eeb7e00
0eeb7ed7  LEA R14,[0xf5463b0]
0eeb7ede  MOV R13,qword ptr [RSP + 0x8]
0eeb7ee3  MOV RBP,qword ptr [RSP + 0x10]
0eeb7ee8  MOV R15,qword ptr [RSP + 0x20]
0eeb7eed  JMP 0x0eeb7f02
0eeb7ef0  MOV qword ptr [R12 + 0x18],0x0
0eeb7ef9  ADD R12,0x28
0eeb7efd  CMP R12,R9
0eeb7f00  JZ 0x0eeb7f3b
0eeb7f02  MOV RSI,qword ptr [R12 + 0x18]
0eeb7f07  TEST RSI,R8
0eeb7f0a  JZ 0x0eeb7ef0
0eeb7f0c  AND RSI,RDI
0eeb7f0f  ADD RSI,-0x8
0eeb7f13  MOV RAX,qword ptr [0x0f5463b0]
0eeb7f1a  MOV RDI,R14
0eeb7f1d  CALL qword ptr [RAX + 0x28]
0eeb7f20  MOV R9,qword ptr [RSP + 0x38]
0eeb7f25  MOV R8,0x80000000000000
0eeb7f2f  MOV RDI,-0xff000000000001
0eeb7f39  JMP 0x0eeb7ef0
0eeb7f3b  MOV R14,qword ptr [RSP + 0x18]
0eeb7f40  MOV R12,qword ptr [R14]
0eeb7f43  MOV RDX,qword ptr [RSP + 0x30]
0eeb7f48  JMP 0x0eeb7f54
0eeb7f4a  MOV R13,qword ptr [RSP + 0x8]
0eeb7f4f  MOV RBP,qword ptr [RSP + 0x10]
0eeb7f54  MOV qword ptr [R14],RDX
0eeb7f57  MOV qword ptr [R14 + 0x8],R15
0eeb7f5b  MOV RSI,qword ptr [R14 + 0x10]
0eeb7f5f  MOV RAX,qword ptr [RSP + 0x68]
0eeb7f64  MOV qword ptr [R14 + 0x10],RAX
0eeb7f68  TEST R12,R12
0eeb7f6b  JZ 0x0eeb7f78
0eeb7f6d  SUB RSI,R12
0eeb7f70  MOV RDI,R12
0eeb7f73  CALL 0x0412a280
0eeb7f78  MOV RAX,qword ptr [RSP + 0x28]
0eeb7f7d  MOV qword ptr [R14 + 0x8],R15
0eeb7f81  TEST RBP,RBP
0eeb7f84  JZ 0x0eeb7f8b
0eeb7f86  INC.LOCK qword ptr [RBP + 0x10]
0eeb7f8b  MOV qword ptr [R13 + 0x8],RAX
0eeb7f8f  MOV RDI,qword ptr [R13 + 0x10]
0eeb7f93  MOV qword ptr [R13 + 0x10],RBP
0eeb7f97  TEST RDI,RDI
0eeb7f9a  JZ 0x0eeb7fa1
0eeb7f9c  CALL 0x0412c2d0
0eeb7fa1  TEST RBP,RBP
0eeb7fa4  JZ 0x0eeb7fca
0eeb7fa6  MOV RAX,-0x1
0eeb7fad  XADD.LOCK qword ptr [RBP + 0x8],RAX
0eeb7fb3  TEST RAX,RAX
0eeb7fb6  JNZ 0x0eeb7fca
0eeb7fb8  MOV RAX,qword ptr [RBP]
0eeb7fbc  MOV RDI,RBP
0eeb7fbf  CALL qword ptr [RAX + 0x10]
0eeb7fc2  MOV RDI,RBP
0eeb7fc5  CALL 0x0412c2d0
0eeb7fca  MOV R14,qword ptr [RSP + 0x58]
0eeb7fcf  LEA RAX,[RSP + 0x50]
0eeb7fd4  XORPS XMM0,XMM0
0eeb7fd7  MOVUPS xmmword ptr [RAX],XMM0
0eeb7fda  TEST R14,R14
0eeb7fdd  JZ 0x0eeb7b2e
0eeb7fe3  MOV RAX,-0x1
0eeb7fea  XADD.LOCK qword ptr [R14 + 0x8],RAX
0eeb7ff0  TEST RAX,RAX
0eeb7ff3  JNZ 0x0eeb8006
0eeb7ff5  MOV RAX,qword ptr [R14]
0eeb7ff8  MOV RDI,R14
0eeb7ffb  CALL qword ptr [RAX + 0x10]
0eeb7ffe  MOV RDI,R14
0eeb8001  CALL 0x0412c2d0
0eeb8006  MOV RBX,qword ptr [RSP + 0x58]
0eeb800b  MOV qword ptr [RSP + 0x60],0x0
0eeb8014  TEST RBX,RBX
0eeb8017  JZ 0x0eeb7b2e
0eeb801d  MOV RAX,-0x1
0eeb8024  XADD.LOCK qword ptr [RBX + 0x8],RAX
0eeb802a  TEST RAX,RAX
0eeb802d  JNZ 0x0eeb7b2e
0eeb8033  MOV RAX,qword ptr [RBX]
0eeb8036  MOV RDI,RBX
0eeb8039  CALL qword ptr [RAX + 0x10]
0eeb803c  MOV RDI,RBX
0eeb803f  CALL 0x0412c2d0
0eeb8044  JMP 0x0eeb7b2e
0eeb8049  MOV ESI,0x8
0eeb804e  MOV RDI,R15
0eeb8051  CALL 0x0eec74c0
0eeb8056  JMP 0x0eeb7c63
0eeb805b  MOV ESI,0x8
0eeb8060  MOV RDI,R15
0eeb8063  CALL 0x0eec74c0
0eeb8068  JMP 0x0eeb7d7a
0eeb806d  CALL 0x0eebe8b0
0eeb8072  CALL 0x04882eb0
0eeb8077  MOV R12,RAX
0eeb807a  JMP 0x0eeb80cb
0eeb80cb  LEA RDI,[RSP + 0x70]
0eeb80d0  CALL 0x0eebe810
0eeb80d5  MOV RDI,qword ptr [RSP + 0x10]
0eeb80da  CALL 0x0eeb6180
0eeb80df  LEA RDI,[RSP + 0x40]
0eeb80e4  CALL 0x049d0d20
0eeb80e9  MOV RAX,qword ptr [RSP + 0x8]
0eeb80ee  MOV RDI,qword ptr [RAX + 0x10]
0eeb80f2  TEST RDI,RDI
0eeb80f5  JZ 0x0eeb80fc
0eeb80f7  CALL 0x0412c2d0
0eeb80fc  MOV RDI,R12
0eeb80ff  CALL 0x0eee2d70
0eeb8104  MOV RDI,RAX
0eeb8107  CALL 0x04882e20
0eeb810c  MOV RDI,RAX
0eeb810f  CALL 0x04882e20
0eeb8114  INT3
0eee02f0  PUSH R14
0eee02f2  PUSH RBX
0eee02f3  PUSH RAX
0eee02f4  MOV RAX,-0x1
0eee02fb  XADD.LOCK qword ptr [RDI + 0xd0],RAX
0eee0304  MOV RCX,-0x7fffffffffffffff
0eee030e  CMP RAX,RCX
0eee0311  JNZ 0x0eee0362
0eee0313  MOV RBX,RDI
0eee0316  CALL 0x0412d450
0eee031b  MOV RAX,0x7fffffffffffffff
0eee0325  AND.LOCK qword ptr [RBX + 0xd0],RAX
0eee032d  MOV RDI,RBX
0eee0330  CALL 0x0412d520
0eee0335  MOV R14,qword ptr [RBX + 0xc0]
0eee033c  MOV RDI,R14
0eee033f  CALL 0x0412d680
0eee0344  ADD RBX,0x90
0eee034b  MOV RDI,R14
0eee034e  CALL 0x0412d6b0
0eee0353  MOV RDI,RBX
0eee0356  ADD RSP,0x8
0eee035a  POP RBX
0eee035b  POP R14
0eee035d  JMP 0x04136a20
0eee0362  ADD RSP,0x8
0eee0366  POP RBX
0eee0367  POP R14
0eee0369  RET
0eee2d80  JMP qword ptr [0x0f546458]
```
