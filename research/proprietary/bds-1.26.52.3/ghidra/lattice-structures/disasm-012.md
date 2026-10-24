# FUN_09cba670 (disassembly)

```
09cb9b16  MOV byte ptr [RSP + 0x60],0x1a
09cb9b1b  MOV RAX,0x7269612e6d657469
09cb9b25  MOV qword ptr [RSP + 0x61],RAX
09cb9b2a  MOV RAX,0x656d616e2e726961
09cb9b34  MOV qword ptr [RSP + 0x66],RAX
09cb9b39  MOV byte ptr [RSP + 0x6e],0x0
09cb9b3e  XORPS XMM0,XMM0
09cb9b41  MOVAPS xmmword ptr [RSP + 0x380],XMM0
09cb9b49  LEA RSI,[0xf5ea138]
09cb9b50  MOV RAX,qword ptr [0x0f5ea138]
09cb9b57  LEA RDI,[RSP + 0x138]
09cb9b5f  LEA RDX,[RSP + 0x60]
09cb9b64  LEA RCX,[RSP + 0x380]
09cb9b6c  CALL qword ptr [RAX + 0x90]
09cb9b72  MOV RBX,qword ptr [RSP + 0x388]
09cb9b7a  TEST RBX,RBX
09cb9b7d  JZ 0x09cb9ba2
09cb9b7f  MOV RAX,-0x1
09cb9b86  XADD.LOCK qword ptr [RBX + 0x8],RAX
09cb9b8c  TEST RAX,RAX
09cb9b8f  JNZ 0x09cb9ba2
09cb9b91  MOV RAX,qword ptr [RBX]
09cb9b94  MOV RDI,RBX
09cb9b97  CALL qword ptr [RAX + 0x10]
09cb9b9a  MOV RDI,RBX
09cb9b9d  CALL 0x0412c2d0
09cb9ba2  TEST byte ptr [RSP + 0x60],0x1
09cb9ba7  JZ 0x09cb9c4a
09cb9bad  MOV RSI,qword ptr [RSP + 0x60]
09cb9bb2  MOV RDI,qword ptr [RSP + 0x70]
09cb9bb7  AND RSI,-0x2
09cb9bbb  CALL 0x0412a280
09cb9bc0  JMP 0x09cb9c4a
09cb9c4a  XORPS XMM0,XMM0
09cb9c4d  MOVAPS xmmword ptr [RSP + 0x120],XMM0
09cb9c55  MOV qword ptr [RSP + 0x130],0x0
09cb9c61  MOV EAX,dword ptr [R12 + 0x20]
09cb9c66  CMP EAX,0x1
09cb9c69  JZ 0x09cb9c8e
09cb9c6b  TEST EAX,EAX
09cb9c6d  JNZ 0x09cbaad0
09cb9c73  MOVSXD RAX,dword ptr [R12 + 0x100]
09cb9c7b  CMP RAX,-0x1
09cb9c7f  JZ 0x09cb9cb0
09cb9c81  LEA RCX,[0xf3c5280]
09cb9c88  MOV RSI,qword ptr [RCX + RAX*0x8]
09cb9c8c  JMP 0x09cb9cb7
09cb9c8e  MOVSXD RAX,dword ptr [R12 + 0x104]
09cb9c96  CMP RAX,-0x1
09cb9c9a  JZ 0x09cb9eb7
09cb9ca0  LEA RCX,[0xf37af30]
09cb9ca7  MOV RSI,qword ptr [RCX + RAX*0x8]
09cb9cab  JMP 0x09cb9ebe
09cb9cb0  LEA RSI,[0x13c28d2]
09cb9cb7  LEA RDI,[RSP + 0x120]
09cb9cbf  CALL 0x04130630
09cb9cc4  CMP dword ptr [R12 + 0x100],0x0
09cb9ccd  JZ 0x09cb9f68
09cb9cd3  LEA RAX,[RSP + 0x150]
09cb9cdb  MOV qword ptr [RSP + 0x60],RAX
09cb9ce0  LEA RAX,[0xd89e8b0]
09cb9ce7  MOV qword ptr [RSP + 0x68],RAX
09cb9cec  LEA RSI,[0x12063a8]
09cb9cf3  LEA RDI,[RSP + 0x100]
09cb9cfb  LEA R8,[RSP + 0x60]
09cb9d00  MOV EDX,0x2
09cb9d05  MOV ECX,0xf
09cb9d0a  CALL 0x0470d9a0
09cb9d0f  TEST byte ptr [RSP + 0x100],0x1
09cb9d17  JNZ 0x09cb9d3a
09cb9d19  MOV RAX,qword ptr [RSP + 0x110]
09cb9d21  MOV qword ptr [RSP + 0x40],RAX
09cb9d26  MOVUPS XMM0,xmmword ptr [RSP + 0x100]
09cb9d2e  MOVAPS xmmword ptr [RSP + 0x30],XMM0
09cb9d33  MOV R15,qword ptr [RSP + 0x8]
09cb9d38  JMP 0x09cb9d59
09cb9d3a  MOV RDX,qword ptr [RSP + 0x108]
09cb9d42  MOV RSI,qword ptr [RSP + 0x110]
09cb9d4a  LEA RDI,[RSP + 0x30]
09cb9d4f  CALL 0x0412e5e0
09cb9d54  MOV R15,qword ptr [RSP + 0x8]
09cb9d59  MOV dword ptr [RSP + 0x48],0x0
09cb9d61  XORPS XMM0,XMM0
09cb9d64  MOVAPS xmmword ptr [RSP + 0x10],XMM0
09cb9d69  MOV qword ptr [RSP + 0x20],0x0
09cb9d72  LEA RBX,[RSP + 0x10]
09cb9d77  MOV qword ptr [RSP + 0x180],RBX
09cb9d7f  MOV byte ptr [RSP + 0x188],0x0
09cb9d87  LEA RDI,[0xf5463b0]
09cb9d8e  MOV RAX,qword ptr [0x0f5463b0]
09cb9d95  MOV ESI,0x20
09cb9d9a  CALL qword ptr [RAX + 0x10]
09cb9d9d  MOV R14,RAX
09cb9da0  TEST RAX,RAX
09cb9da3  JZ 0x09cbb482
09cb9da9  MOV qword ptr [RSP + 0x10],R14
09cb9dae  MOV qword ptr [RSP + 0x18],R14
09cb9db3  MOV RAX,R14
09cb9db6  ADD RAX,0x20
09cb9dba  MOV qword ptr [RSP + 0x20],RAX
09cb9dbf  MOV qword ptr [RSP + 0x1c8],R14
09cb9dc7  MOV qword ptr [RSP + 0x1d8],R14
09cb9dcf  MOV qword ptr [RSP + 0x60],RBX
09cb9dd4  LEA RAX,[RSP + 0x1d8]
09cb9ddc  MOV qword ptr [RSP + 0x68],RAX
09cb9de1  LEA RAX,[RSP + 0x1c8]
09cb9de9  MOV qword ptr [RSP + 0x70],RAX
09cb9dee  MOV byte ptr [RSP + 0x78],0x0
09cb9df3  TEST byte ptr [RSP + 0x30],0x1
09cb9df8  JNZ 0x09cb9e11
09cb9dfa  MOV RAX,qword ptr [RSP + 0x40]
09cb9dff  MOV qword ptr [R14 + 0x10],RAX
09cb9e03  MOVAPS XMM0,xmmword ptr [RSP + 0x30]
09cb9e08  MOVUPS xmmword ptr [R14],XMM0
09cb9e0c  MOV RAX,R14
09cb9e0f  JMP 0x09cb9e2b
09cb9e11  MOV RDX,qword ptr [RSP + 0x38]
09cb9e16  MOV RSI,qword ptr [RSP + 0x40]
09cb9e1b  MOV RDI,R14
09cb9e1e  CALL 0x0412e5e0
09cb9e23  MOV RAX,qword ptr [RSP + 0x1c8]
09cb9e2b  MOV ECX,dword ptr [RSP + 0x48]
09cb9e2f  MOV dword ptr [R14 + 0x18],ECX
09cb9e33  ADD RAX,0x20
09cb9e37  MOV qword ptr [RSP + 0x18],RAX
09cb9e3c  CMP dword ptr [R15],0x0
09cb9e40  JZ 0x09cb9e61
09cb9e42  LEA RSI,[0x1469691]
09cb9e49  LEA RCX,[RSP + 0x10]
09cb9e4e  MOV EDX,0x20
09cb9e53  MOV RDI,R15
09cb9e56  MOV R8D,0x1
09cb9e5c  CALL 0x09e22e10
09cb9e61  MOV RBX,qword ptr [RSP + 0x10]
09cb9e66  TEST RBX,RBX
09cb9e69  JZ 0x09cba085
09cb9e6f  MOV R14,qword ptr [RSP + 0x18]
09cb9e74  MOV RDI,RBX
09cb9e77  CMP RBX,R14
09cb9e7a  JNZ 0x09cb9e9d
09cb9e7c  JMP 0x09cba073
09cb9e90  ADD R14,-0x20
09cb9e94  CMP R14,RBX
09cb9e97  JZ 0x09cba06e
09cb9e9d  TEST byte ptr [R14 + -0x20],0x1
09cb9ea2  JZ 0x09cb9e90
09cb9ea4  MOV RSI,qword ptr [R14 + -0x20]
09cb9ea8  MOV RDI,qword ptr [R14 + -0x10]
09cb9eac  AND RSI,-0x2
09cb9eb0  CALL 0x0412a280
09cb9eb5  JMP 0x09cb9e90
09cb9eb7  LEA RSI,[0x13c28d2]
09cb9ebe  LEA RDI,[RSP + 0x120]
09cb9ec6  CALL 0x04130630
09cb9ecb  XORPS XMM0,XMM0
09cb9ece  MOVAPS xmmword ptr [RSP + 0x30],XMM0
09cb9ed3  MOV qword ptr [RSP + 0x40],0x0
09cb9edc  MOV RBX,qword ptr [RSP + 0x170]
09cb9ee4  MOV RAX,qword ptr [RBX + 0x8]
09cb9ee8  SUB RAX,qword ptr [RBX]
09cb9eeb  SHR RAX,0x3
09cb9eef  MOV R14D,0xffffffff
09cb9ef5  AND R14,RAX
09cb9ef8  JZ 0x09cb9f1a
09cb9efa  LEA RDI,[R14*0x8]
09cb9f02  CALL 0x0ee32660
09cb9f07  LEA RCX,[RAX + R14*0x8]
09cb9f0b  MOV qword ptr [RSP + 0x30],RAX
09cb9f10  MOV qword ptr [RSP + 0x38],RAX
09cb9f15  MOV qword ptr [RSP + 0x40],RCX
09cb9f1a  MOV R15,qword ptr [RSP + 0x178]
09cb9f22  TEST R15,R15
09cb9f25  JZ 0x09cb9f8f
09cb9f27  INC.LOCK qword ptr [R15 + 0x8]
09cb9f2c  MOV RAX,qword ptr [RBX]
09cb9f2f  MOV qword ptr [RSP + 0x10],RBX
09cb9f34  MOV qword ptr [RSP + 0x18],R15
09cb9f39  INC.LOCK qword ptr [R15 + 0x8]
09cb9f3e  MOV qword ptr [RSP + 0x20],RAX
09cb9f43  MOV RAX,-0x1
09cb9f4a  XADD.LOCK qword ptr [R15 + 0x8],RAX
09cb9f50  TEST RAX,RAX
09cb9f53  JNZ 0x09cb9fa5
09cb9f55  MOV RAX,qword ptr [R15]
09cb9f58  MOV RDI,R15
09cb9f5b  CALL qword ptr [RAX + 0x10]
09cb9f5e  MOV RDI,R15
09cb9f61  CALL 0x0412c2d0
09cb9f66  JMP 0x09cb9fa5
09cb9f68  MOV RAX,qword ptr [R13]
09cb9f6c  MOV RDI,R13
09cb9f6f  CALL qword ptr [RAX + 0xd8]
09cb9f75  TEST RAX,RAX
09cb9f78  JZ 0x09cbae09
09cb9f7e  MOV RCX,qword ptr [RAX]
09cb9f81  MOV RDI,RAX
09cb9f84  CALL qword ptr [RCX + 0x10]
09cb9f87  MOV R12,RAX
09cb9f8a  JMP 0x09cbae1a
09cb9f8f  MOV RAX,qword ptr [RBX]
09cb9f92  MOV qword ptr [RSP + 0x10],RBX
09cb9f97  MOV qword ptr [RSP + 0x18],0x0
09cb9fa0  MOV qword ptr [RSP + 0x20],RAX
09cb9fa5  MOV RAX,qword ptr [RSP + 0x170]
09cb9fad  MOV R15,qword ptr [RSP + 0x178]
09cb9fb5  TEST R15,R15
09cb9fb8  JZ 0x09cba005
09cb9fba  INC.LOCK qword ptr [R15 + 0x8]
09cb9fbf  MOV RCX,qword ptr [RAX + 0x8]
09cb9fc3  MOV qword ptr [RSP + 0x100],RAX
09cb9fcb  MOV qword ptr [RSP + 0x108],R15
09cb9fd3  INC.LOCK qword ptr [R15 + 0x8]
09cb9fd8  MOV qword ptr [RSP + 0x110],RCX
09cb9fe0  MOV RAX,-0x1
09cb9fe7  XADD.LOCK qword ptr [R15 + 0x8],RAX
09cb9fed  TEST RAX,RAX
09cb9ff0  JNZ 0x09cba025
09cb9ff2  MOV RAX,qword ptr [R15]
09cb9ff5  MOV RDI,R15
09cb9ff8  CALL qword ptr [RAX + 0x10]
09cb9ffb  MOV RDI,R15
09cb9ffe  CALL 0x0412c2d0
09cba003  JMP 0x09cba025
09cba005  MOV RCX,qword ptr [RAX + 0x8]
09cba009  MOV qword ptr [RSP + 0x100],RAX
09cba011  MOV qword ptr [RSP + 0x108],0x0
09cba01d  MOV qword ptr [RSP + 0x110],RCX
09cba025  LEA R13,[RSP + 0xe0]
09cba02d  MOV RCX,qword ptr [RSP + 0x10]
09cba032  MOV RAX,qword ptr [RSP + 0x20]
09cba037  CMP RCX,qword ptr [RSP + 0x100]
09cba03f  JNZ 0x09cba1a0
09cba045  CMP RAX,qword ptr [RSP + 0x110]
09cba04d  JNZ 0x09cba1a0
09cba053  MOV EBP,0x2
09cba058  MOV RBX,qword ptr [RSP + 0x108]
09cba060  TEST RBX,RBX
09cba063  JNZ 0x09cba8aa
09cba069  JMP 0x09cba8cd
09cba06e  MOV RDI,qword ptr [RSP + 0x10]
09cba073  MOV qword ptr [RSP + 0x18],RBX
09cba078  MOV RSI,qword ptr [RSP + 0x20]
09cba07d  SUB RSI,RDI
09cba080  CALL 0x0412a280
09cba085  TEST byte ptr [RSP + 0x30],0x1
09cba08a  JZ 0x09cba09f
09cba08c  MOV RSI,qword ptr [RSP + 0x30]
09cba091  MOV RDI,qword ptr [RSP + 0x40]
09cba096  AND RSI,-0x2
09cba09a  CALL 0x0412a280
09cba09f  TEST byte ptr [RSP + 0x100],0x1
09cba0a7  JZ 0x09cbad39
09cba0ad  MOV RSI,qword ptr [RSP + 0x100]
09cba0b5  MOV RDI,qword ptr [RSP + 0x110]
09cba0bd  JMP 0x09cbad30
09cba15f  LEA RAX,[0xf6e52b0]
09cba166  MOV qword ptr [RBX + 0x108],RAX
09cba16d  MOV qword ptr [0x0f6e52d0],R15
09cba174  JMP 0x09cba1fc
09cba179  MOV EDI,0x98
09cba17e  XOR ESI,ESI
09cba180  CALL 0x0eec74c0
09cba185  JMP 0x09cba489
09cba18a  MOV RDI,R12
09cba18d  XOR ESI,ESI
09cba18f  CALL 0x0eec74c0
09cba194  JMP 0x09cba7d6
09cba1a0  MOV RAX,qword ptr [RAX]
09cba1a3  MOV qword ptr [RSP + 0x1a0],RAX
09cba1ab  MOV RAX,qword ptr [RSP + 0x238]
09cba1b3  TEST RAX,RAX
09cba1b6  JZ 0x09cba294
09cba1bc  MOV RBX,qword ptr [RAX]
09cba1bf  TEST RBX,RBX
09cba1c2  JZ 0x09cba294
09cba1c8  MOV RAX,qword ptr [RBX + 0xe8]
09cba1cf  CMP RAX,qword ptr [0x0f6e52b0]
09cba1d6  JNZ 0x09cba289
09cba1dc  LEA R15,[RBX + 0xe8]
09cba1e3  LEA RAX,[0xf6e52b0]
09cba1ea  CMP qword ptr [RBX + 0x108],RAX
09cba1f1  JNZ 0x09cba21f
09cba1f3  CMP qword ptr [0x0f6e52d0],R15
09cba1fa  JNZ 0x09cba21f
09cba1fc  MOV RDI,qword ptr [RSP + 0x1a0]
09cba204  LEA RSI,[RSP + 0x230]
09cba20c  MOV RDX,qword ptr [RSP + 0x8]
09cba211  CALL 0x09db9c20
09cba216  TEST AL,AL
09cba218  JNZ 0x09cba294
09cba21a  JMP 0x09cbb24f
09cba21f  MOVZX EAX,byte ptr [RBX + 0xf0]
09cba226  TEST AL,0x1
09cba228  JZ 0x09cba233
09cba22a  MOV RDX,qword ptr [RBX + 0xf8]
09cba231  JMP 0x09cba237
09cba233  MOV EDX,EAX
09cba235  SHR EDX,0x1
09cba237  MOVZX ECX,byte ptr [0x0f6e52b8]
09cba23e  TEST CL,0x1
09cba241  JZ 0x09cba24c
09cba243  MOV RSI,qword ptr [0x0f6e52c0]
09cba24a  JMP 0x09cba250
09cba24c  MOV ESI,ECX
09cba24e  SHR ESI,0x1
09cba250  CMP RDX,RSI
09cba253  JNZ 0x09cba289
09cba255  TEST AL,0x1
09cba257  JZ 0x09cba262
09cba259  MOV RDI,qword ptr [RBX + 0x100]
09cba260  JMP 0x09cba269
09cba262  LEA RDI,[RBX + 0xf1]
09cba269  LEA RSI,[0xf6e52b9]
09cba270  TEST CL,0x1
09cba273  JZ 0x09cba27c
09cba275  MOV RSI,qword ptr [0x0f6e52c8]
09cba27c  CALL 0x0eee3000
09cba281  TEST EAX,EAX
09cba283  JZ 0x09cba15f
09cba289  MOV qword ptr [RBX + 0x108],0x0
09cba294  MOV EBX,dword ptr [R12 + 0x8]
09cba299  CMP EBX,0x12
09cba29c  SETGE AL
09cba29f  CMP dword ptr [R12 + 0x104],0xc
09cba2a8  MOV EBP,dword ptr [R12 + 0x108]
09cba2b0  SETZ CL
09cba2b3  AND CL,AL
09cba2b5  CMP CL,0x1
09cba2b8  JNZ 0x09cba3c1
09cba2be  MOV RAX,qword ptr [RSP + 0x1a0]
09cba2c6  MOV RCX,qword ptr [RAX + 0x10]
09cba2ca  MOV EAX,dword ptr [RAX + 0x18]
09cba2cd  MOV RDX,qword ptr [RCX + 0x38]
09cba2d1  MOV RSI,qword ptr [RCX + 0x40]
09cba2d5  SUB RSI,RDX
09cba2d8  SHR RSI,0x3
09cba2dc  MOV EDI,0xffffffff
09cba2e1  ADD ESI,EDI
09cba2e3  AND ESI,0x88f64e44
09cba2e9  LEA RDX,[RDX + RSI*0x8]
09cba2ed  MOV RSI,qword ptr [RCX + 0x50]
09cba2f1  NOP dword ptr CS:[RAX + RAX*0x1]
09cba300  MOV RDI,qword ptr [RDX]
09cba303  CMP RDI,-0x1
09cba307  JZ 0x09cba32b
09cba309  SHL RDI,0x5
09cba30d  LEA RDX,[RSI + RDI*0x1]
09cba311  CMP dword ptr [RSI + RDI*0x1 + 0x8],0x88f64e44
09cba319  JNZ 0x09cba300
09cba31b  MOV RSI,qword ptr [RCX + 0x58]
09cba31f  XOR ECX,ECX
09cba321  CMP RDX,RSI
09cba324  JNZ 0x09cba33d
09cba326  JMP 0x09cba3bf
09cba32b  MOV RSI,qword ptr [RCX + 0x58]
09cba32f  MOV RDX,RSI
09cba332  XOR ECX,ECX
09cba334  CMP RDX,RSI
09cba337  JZ 0x09cba3bf
09cba33d  MOV RDX,qword ptr [RDX + 0x10]
09cba341  TEST RDX,RDX
09cba344  JZ 0x09cba3bf
09cba346  MOV ESI,EAX
09cba348  AND ESI,0x3ffff
09cba34e  MOV EDI,ESI
09cba350  SHR EDI,0xb
09cba353  MOV R8,qword ptr [RDX + 0x8]
09cba357  MOV R9,qword ptr [RDX + 0x10]
09cba35b  SUB R9,R8
09cba35e  SAR R9,0x3
09cba362  CMP RDI,R9
09cba365  JNC 0x09cba3bf
09cba367  MOV RDI,qword ptr [R8 + RDI*0x8]
09cba36b  TEST RDI,RDI
09cba36e  JZ 0x09cba3bf
09cba370  AND ESI,0x7ff
09cba376  AND EAX,0xfffc0000
09cba37b  MOV ESI,dword ptr [RDI + RSI*0x4]
09cba37e  XOR EAX,ESI
09cba380  CMP EAX,0x3fffe
09cba385  JA 0x09cba3bf
09cba387  MOV RAX,qword ptr [RDX + 0x50]
09cba38b  MOV EDX,ESI
09cba38d  SHR EDX,0x4
09cba390  AND EDX,0x3ff8
09cba396  MOV RAX,qword ptr [RAX + RDX*0x1]
09cba39a  TEST RAX,RAX
09cba39d  JZ 0x09cba3bf
09cba39f  AND ESI,0x3ffff
09cba3a5  AND ESI,0x7f
09cba3a8  LEA RCX,[RSI + RSI*0x2]
09cba3ac  MOV RDX,qword ptr [RAX + RCX*0x8 + 0x8]
09cba3b1  SUB RDX,qword ptr [RAX + RCX*0x8]
09cba3b5  SHR RDX,0x3
09cba3b9  IMUL ECX,EDX,0x3e0f83e1
09cba3bf  ADD EBP,ECX
09cba3c1  LEA RDI,[RSP + 0x60]
09cba3c6  LEA RSI,[RSP + 0x2e0]
09cba3ce  CALL 0x0c4510a0
09cba3d3  LEA RAX,[0xf371da8]
09cba3da  MOV qword ptr [RSP + 0x60],RAX
09cba3df  MOV dword ptr [RSP + 0xe0],0x0
09cba3ea  MOV dword ptr [RSP + 0xf0],0x0
09cba3f5  MOV EAX,dword ptr [RSP + 0x370]
09cba3fc  MOV ECX,0xffffffff
09cba401  CMP RAX,RCX
09cba404  JZ 0x09cba42d
09cba406  MOV qword ptr [RSP + 0x1c8],R13
09cba40e  LEA RDI,[RSP + 0x1c8]
09cba416  MOV RSI,R13
09cba419  LEA RDX,[RSP + 0x360]
09cba421  LEA RCX,[0xf38c5a0]
09cba428  CALL qword ptr [RCX + RAX*0x8]
09cba42b  JMP 0x09cba438
09cba42d  MOV dword ptr [RSP + 0xf0],0xffffffff
09cba438  XORPS XMM0,XMM0
09cba43b  MOVAPS xmmword ptr [RSP + 0x180],XMM0
09cba443  MOV qword ptr [RSP + 0x190],0x0
09cba44f  LEA RAX,[RSP + 0x180]
09cba457  MOV qword ptr [RSP + 0x1c8],RAX
09cba45f  MOV byte ptr [RSP + 0x1d0],0x0
09cba467  MOV RAX,qword ptr [0x0f5463b0]
09cba46e  MOV ESI,0x98
09cba473  LEA RDI,[0xf5463b0]
09cba47a  CALL qword ptr [RAX + 0x10]
09cba47d  MOV R15,RAX
09cba480  TEST RAX,RAX
09cba483  JZ 0x09cba179
09cba489  MOV qword ptr [RSP + 0x180],R15
09cba491  MOV qword ptr [RSP + 0x188],R15
09cba499  LEA R14,[R15 + 0x98]
09cba4a0  MOV qword ptr [RSP + 0x190],R14
09cba4a8  MOV RDI,R15
09cba4ab  LEA RSI,[RSP + 0x60]
09cba4b0  CALL 0x0c4510a0
09cba4b5  LEA RAX,[0xf371da8]
09cba4bc  MOV qword ptr [R15],RAX
09cba4bf  MOV dword ptr [R15 + 0x80],0x0
09cba4ca  MOV dword ptr [R15 + 0x90],0x0
09cba4d5  MOV EAX,dword ptr [RSP + 0xf0]
09cba4dc  MOV ECX,0xffffffff
09cba4e1  CMP RAX,RCX
09cba4e4  JZ 0x09cba517
09cba4e6  MOV R12,R15
09cba4e9  SUB R12,-0x80
09cba4ed  MOV qword ptr [RSP + 0x1d8],R12
09cba4f5  LEA RDI,[RSP + 0x1d8]
09cba4fd  MOV RSI,R12
09cba500  MOV RDX,R13
09cba503  LEA RCX,[0xf38c5a0]
09cba50a  CALL qword ptr [RCX + RAX*0x8]
09cba50d  MOV R12,qword ptr [RSP + 0x160]
09cba515  JMP 0x09cba522
09cba517  MOV dword ptr [R15 + 0x90],0xffffffff
09cba522  MOV qword ptr [RSP + 0x188],R14
09cba52a  LEA RAX,[0xf371da8]
09cba531  MOV qword ptr [RSP + 0x60],RAX
09cba536  MOV EAX,dword ptr [RSP + 0xf0]
09cba53d  MOV ECX,0xffffffff
09cba542  CMP RAX,RCX
09cba545  MOV R14,qword ptr [RSP + 0x8]
09cba54a  JZ 0x09cba561
09cba54c  LEA RDI,[RSP + 0x1c8]
09cba554  MOV RSI,R13
09cba557  LEA RCX,[0xf1e08d8]
09cba55e  CALL qword ptr [RCX + RAX*0x8]
09cba561  MOV dword ptr [RSP + 0xf0],0xffffffff
09cba56c  LEA RAX,[0xf36e918]
09cba573  MOV qword ptr [RSP + 0x60],RAX
09cba578  MOV RDI,qword ptr [RSP + 0xd8]
09cba580  MOV qword ptr [RSP + 0xd8],0x0
09cba58c  TEST RDI,RDI
09cba58f  JZ 0x09cba597
09cba591  MOV RAX,qword ptr [RDI]
09cba594  CALL qword ptr [RAX + 0x8]
09cba597  MOV RDI,qword ptr [RSP + 0xb0]
09cba59f  TEST RDI,RDI
09cba5a2  JZ 0x09cba5bc
09cba5a4  MOV qword ptr [RSP + 0xb8],RDI
09cba5ac  MOV RSI,qword ptr [RSP + 0xc0]
09cba5b4  SUB RSI,RDI
09cba5b7  CALL 0x0412a280
09cba5bc  MOV RDI,qword ptr [RSP + 0x90]
09cba5c4  TEST RDI,RDI
09cba5c7  JZ 0x09cba5e1
09cba5c9  MOV qword ptr [RSP + 0x98],RDI
09cba5d1  MOV RSI,qword ptr [RSP + 0xa0]
09cba5d9  SUB RSI,RDI
09cba5dc  CALL 0x0412a280
09cba5e1  MOV RDI,qword ptr [RSP + 0x70]
09cba5e6  MOV qword ptr [RSP + 0x70],0x0
09cba5ef  TEST RDI,RDI
09cba5f2  JZ 0x09cba5fa
09cba5f4  MOV RAX,qword ptr [RDI]
09cba5f7  CALL qword ptr [RAX + 0x8]
09cba5fa  MOV RAX,qword ptr [RSP + 0x68]
09cba5ff  TEST RAX,RAX
09cba602  JZ 0x09cba630
09cba604  DEC.LOCK dword ptr [RAX + 0xc]
09cba608  MOV ECX,dword ptr [RAX + 0xc]
09cba60b  TEST ECX,ECX
09cba60d  JG 0x09cba630
09cba60f  CMP qword ptr [RAX],0x0
09cba613  JNZ 0x09cba630
09cba615  MOV RDI,qword ptr [RSP + 0x68]
09cba61a  TEST RDI,RDI
09cba61d  JZ 0x09cba630
09cba61f  MOV ESI,0x10
09cba624  CALL 0x0412a280
09cba629  NOP dword ptr [RAX]
09cba630  MOV EAX,dword ptr [R12 + 0x104]
09cba638  XOR ECX,ECX
09cba63a  CMP dword ptr [R12 + 0x120],0x1
09cba643  SETZ CL
09cba646  OR ECX,0x100
09cba64c  CMP EBX,0x12
09cba64f  MOV dword ptr [RSP + 0x60],EBP
09cba653  LEA RDX,[RSP + 0x180]
09cba65b  MOV qword ptr [RSP + 0x68],RDX
09cba660  MOV qword ptr [RSP + 0x70],0x0
09cba669  MOV word ptr [RSP + 0x78],CX
09cba670  MOV word ptr [RAX],FS
09cba673  ADD dword ptr [RAX],EAX
09cba675  ADD byte ptr [RAX + -0x77],CL
09cba678  MOV word ptr [RAX + RAX*0x4],FS
09cba67b  ADD byte ptr [RAX],AL
09cba67d  ADD byte ptr [RCX + 0x882484],CL
09cba683  ADD byte ptr [RAX],AL
09cba685  SETGE byte ptr [RSP + 0x8c]
09cba68d  LEA RDI,[RSP + 0x60]
09cba692  CALL 0x0b634790
09cba697  CMP EAX,0x5
09cba69a  JNZ 0x09cba6c7
09cba69c  MOV RBP,qword ptr [RSP + 0x38]
09cba6a1  MOV R15,qword ptr [RSP + 0x40]
09cba6a6  CMP RBP,R15
09cba6a9  JNC 0x09cba755
09cba6af  MOV RAX,qword ptr [RSP + 0x1a0]
09cba6b7  MOV qword ptr [RBP],RAX
09cba6bb  ADD RBP,0x8
09cba6bf  MOV RBX,RBP
09cba6c2  JMP 0x09cba83d
09cba6c7  MOV EBP,0x3
09cba6cc  MOV RDI,R12
09cba6cf  MOV RSI,R14
09cba6d2  MOV RDX,RAX
09cba6d5  LEA RCX,[RSP + 0x138]
09cba6dd  CALL 0x09cbbc90
09cba6e2  MOV R14,qword ptr [RSP + 0x180]
09cba6ea  TEST R14,R14
09cba6ed  JZ 0x09cba860
09cba6f3  MOV RBX,qword ptr [RSP + 0x188]
09cba6fb  MOV RDI,R14
09cba6fe  CMP R14,RBX
09cba701  JZ 0x09cba72f
09cba703  ADD RBX,-0x98
09cba70a  NOP word ptr [RAX + RAX*0x1]
09cba710  MOV RAX,qword ptr [RBX]
09cba713  MOV RDI,RBX
09cba716  CALL qword ptr [RAX]
09cba718  LEA RAX,[RBX + -0x98]
09cba71f  CMP RBX,R14
09cba722  MOV RBX,RAX
09cba725  JNZ 0x09cba710
09cba727  MOV RDI,qword ptr [RSP + 0x180]
09cba72f  MOV qword ptr [RSP + 0x188],R14
09cba737  MOV RSI,qword ptr [RSP + 0x190]
09cba73f  SUB RSI,RDI
09cba742  CALL 0x0412a280
09cba747  CMP EBP,0x3
09cba74a  JNZ 0x09cba865
09cba750  JMP 0x09cba869
09cba755  MOV RDX,qword ptr [RSP + 0x30]
09cba75a  SUB RBP,RDX
09cba75d  MOV R14,RBP
09cba760  SAR R14,0x3
09cba764  LEA RAX,[R14 + 0x1]
09cba768  MOV RCX,0x1fffffffffffffff
09cba772  CMP RAX,RCX
09cba775  JA 0x09cbb498
09cba77b  MOV qword ptr [RSP + 0x398],RDX
09cba783  SUB R15,RDX
09cba786  MOV R13,R15
09cba789  SAR R13,0x2
09cba78d  CMP R13,RAX
09cba790  CMOVBE R13,RAX
09cba794  MOV RAX,0x7ffffffffffffff8
09cba79e  CMP R15,RAX
09cba7a1  CMOVNC R13,RCX
09cba7a5  CMP R13,RCX
09cba7a8  JA 0x09cbb493
09cba7ae  LEA R12,[R13*0x8]
09cba7b6  MOV RAX,qword ptr [0x0f5463b0]
09cba7bd  LEA RDI,[0xf5463b0]
09cba7c4  MOV RSI,R12
09cba7c7  CALL qword ptr [RAX + 0x10]
09cba7ca  MOV RBX,RAX
09cba7cd  TEST RAX,RAX
09cba7d0  JZ 0x09cba18a
09cba7d6  LEA R12,[RBX + RBP*0x1]
09cba7da  LEA R13,[RBX + R13*0x8]
09cba7de  MOV RAX,qword ptr [RSP + 0x1a0]
09cba7e6  MOV qword ptr [RBX + RBP*0x1],RAX
09cba7ea  ADD RBX,RBP
09cba7ed  ADD RBX,0x8
09cba7f1  SHL R14,0x3
09cba7f5  SUB R12,R14
09cba7f8  MOV RDI,R12
09cba7fb  MOV R14,qword ptr [RSP + 0x398]
09cba803  MOV RSI,R14
09cba806  MOV RDX,RBP
09cba809  CALL 0x0eee2f00
09cba80e  MOV qword ptr [RSP + 0x30],R12
09cba813  MOV qword ptr [RSP + 0x38],RBX
09cba818  MOV qword ptr [RSP + 0x40],R13
09cba81d  TEST R14,R14
09cba820  JZ 0x09cba82d
09cba822  MOV RDI,R14
09cba825  MOV RSI,R15
09cba828  CALL 0x0412a280
09cba82d  MOV R12,qword ptr [RSP + 0x160]
09cba835  LEA R13,[RSP + 0xe0]
09cba83d  MOV qword ptr [RSP + 0x38],RBX
09cba842  XOR EBP,EBP
09cba844  MOV R14,qword ptr [RSP + 0x180]
09cba84c  TEST R14,R14
09cba84f  JNZ 0x09cba6f3
09cba855  NOP dword ptr CS:[RAX + RAX*0x1]
09cba860  CMP EBP,0x3
09cba863  JZ 0x09cba869
09cba865  TEST EBP,EBP
09cba867  JNZ 0x09cba89d
09cba869  MOV RCX,qword ptr [RSP + 0x10]
09cba86e  MOV RAX,qword ptr [RSP + 0x20]
09cba873  ADD RAX,0x8
09cba877  MOV qword ptr [RSP + 0x20],RAX
09cba87c  CMP RCX,qword ptr [RSP + 0x100]
09cba884  JNZ 0x09cba1a0
09cba88a  CMP RAX,qword ptr [RSP + 0x110]
09cba892  JNZ 0x09cba1a0
09cba898  MOV EBP,0x2
09cba89d  MOV RBX,qword ptr [RSP + 0x108]
09cba8a5  TEST RBX,RBX
09cba8a8  JZ 0x09cba8cd
09cba8aa  MOV RAX,-0x1
09cba8b1  XADD.LOCK qword ptr [RBX + 0x8],RAX
09cba8b7  TEST RAX,RAX
09cba8ba  JNZ 0x09cba8cd
09cba8bc  MOV RAX,qword ptr [RBX]
09cba8bf  MOV RDI,RBX
09cba8c2  CALL qword ptr [RAX + 0x10]
09cba8c5  MOV RDI,RBX
09cba8c8  CALL 0x0412c2d0
09cba8cd  MOV RBX,qword ptr [RSP + 0x18]
09cba8d2  TEST RBX,RBX
09cba8d5  JZ 0x09cba8fa
09cba8d7  MOV RAX,-0x1
09cba8de  XADD.LOCK qword ptr [RBX + 0x8],RAX
09cba8e4  TEST RAX,RAX
09cba8e7  JNZ 0x09cba8fa
09cba8e9  MOV RAX,qword ptr [RBX]
09cba8ec  MOV RDI,RBX
09cba8ef  CALL qword ptr [RAX + 0x10]
09cba8f2  MOV RDI,RBX
09cba8f5  CALL 0x0412c2d0
09cba8fa  MOV RDI,qword ptr [RSP + 0x30]
09cba8ff  CMP EBP,0x2
09cba902  JNZ 0x09cbaaac
09cba908  CMP RDI,qword ptr [RSP + 0x38]
09cba90d  JZ 0x09cba935
09cba90f  TEST byte ptr [RSP + 0x120],0x1
09cba917  JNZ 0x09cba94f
09cba919  MOV RAX,qword ptr [RSP + 0x130]
09cba921  MOV qword ptr [RSP + 0x70],RAX
09cba926  MOVAPS XMM0,xmmword ptr [RSP + 0x120]
09cba92e  MOVAPS xmmword ptr [RSP + 0x60],XMM0
09cba933  JMP 0x09cba969
09cba935  MOV BL,0x1
09cba937  JMP 0x09cbaab1
09cba94f  MOV RDX,qword ptr [RSP + 0x128]
09cba957  MOV RSI,qword ptr [RSP + 0x130]
09cba95f  LEA RDI,[RSP + 0x60]
09cba964  CALL 0x0412e5e0
09cba969  MOV dword ptr [RSP + 0x78],0x0
09cba971  LEA R15,[RSP + 0x80]
09cba979  MOV ESI,dword ptr [R12 + 0x108]
09cba981  MOV RDI,R15
09cba984  CALL 0x09e20be0
09cba989  LEA R15,[RSP + 0xa0]
09cba991  LEA RSI,[RSP + 0x30]
09cba996  MOV RDI,R15
09cba999  CALL 0x09e20de0
09cba99e  LEA R15,[RSP + 0xc0]
09cba9a6  MOV ESI,dword ptr [R12 + 0x118]
09cba9ae  MOV RDI,R15
09cba9b1  CALL 0x09e20be0
09cba9b6  TEST byte ptr [RSP + 0x138],0x1
09cba9be  JNZ 0x09cba9db
09cba9c0  MOV RAX,qword ptr [RSP + 0x148]
09cba9c8  MOV qword ptr [R13 + 0x10],RAX
09cba9cc  MOVUPS XMM0,xmmword ptr [RSP + 0x138]
09cba9d4  MOVUPS xmmword ptr [R13],XMM0
09cba9d9  JMP 0x09cba9f6
09cba9db  MOV RDX,qword ptr [RSP + 0x140]
09cba9e3  MOV RSI,qword ptr [RSP + 0x148]
09cba9eb  MOV R15,R13
09cba9ee  MOV RDI,R13
09cba9f1  CALL 0x0412e5e0
09cba9f6  MOV dword ptr [RSP + 0xf8],0x0
09cbaa01  LEA RDX,[RSP + 0x100]
09cbaa09  XORPS XMM0,XMM0
09cbaa0c  MOVAPS xmmword ptr [RSP + 0x10],XMM0
09cbaa11  MOV qword ptr [RSP + 0x20],0x0
09cbaa1a  LEA RDI,[RSP + 0x10]
09cbaa1f  LEA RSI,[RSP + 0x60]
09cbaa24  MOV ECX,0x5
09cbaa29  CALL 0x09ce36f0
09cbaa2e  LEA RSI,[0x12e1d50]
09cbaa35  LEA RCX,[RSP + 0x10]
09cbaa3a  MOV EDX,0x23
09cbaa3f  MOV RDI,qword ptr [RSP + 0x8]
09cbaa44  CALL 0x09e232e0
09cbaa49  LEA RDI,[RSP + 0x10]
09cbaa4e  CALL 0x048f03a0
09cbaa53  TEST byte ptr [RSP + 0xe0],0x1
09cbaa5b  JNZ 0x09cbad6b
09cbaa61  TEST byte ptr [RSP + 0xc0],0x1
09cbaa69  JNZ 0x09cbad92
09cbaa6f  TEST byte ptr [RSP + 0xa0],0x1
09cbaa77  JNZ 0x09cbadb9
09cbaa7d  TEST byte ptr [RSP + 0x80],0x1
09cbaa85  JNZ 0x09cbade0
09cbaa8b  TEST byte ptr [RSP + 0x60],0x1
09cbaa90  JZ 0x09cbaaa5
09cbaa92  MOV RSI,qword ptr [RSP + 0x60]
09cbaa97  MOV RDI,qword ptr [RSP + 0x70]
09cbaa9c  AND RSI,-0x2
09cbaaa0  CALL 0x0412a280
09cbaaa5  XOR EBP,EBP
09cbaaa7  MOV RDI,qword ptr [RSP + 0x30]
09cbaaac  TEST EBP,EBP
09cbaaae  SETZ BL
09cbaab1  TEST RDI,RDI
09cbaab4  JZ 0x09cbaac8
09cbaab6  MOV qword ptr [RSP + 0x38],RDI
09cbaabb  MOV RSI,qword ptr [RSP + 0x40]
09cbaac0  SUB RSI,RDI
09cbaac3  CALL 0x0412a280
09cbaac8  TEST BL,BL
09cbaaca  JZ 0x09cbad39
09cbaad0  CMP byte ptr [R12 + 0x138],0x1
09cbaad9  JNZ 0x09cbabb8
09cbaadf  MOV RBX,qword ptr [RSP + 0x2f0]
09cbaae7  TEST RBX,RBX
09cbaaea  JZ 0x09cbab81
09cbaaf0  LEA R14,[0x1ce4800]
09cbaaf7  MOV qword ptr [RSP + 0x60],R14
09cbaafc  MOV qword ptr [RSP + 0x68],0x13
09cbab05  LEA R15,[RBX + 0x8]
09cbab09  LEA RSI,[RSP + 0x60]
09cbab0e  MOV RDI,R15
09cbab11  CALL 0x0d6c97a0
09cbab16  ADD RBX,0x10
09cbab1a  CMP RAX,RBX
09cbab1d  JZ 0x09cbab81
09cbab1f  MOV ECX,dword ptr [RAX + 0x60]
09cbab22  MOV EDX,0xffffffff
09cbab27  CMP RCX,RDX
09cbab2a  JZ 0x09cbb4f0
09cbab30  ADD RAX,0x38
09cbab34  LEA RDX,[RSP + 0x10]
09cbab39  MOV qword ptr [RSP + 0x30],RDX
09cbab3e  LEA RDX,[0xf47e980]
09cbab45  LEA RDI,[RSP + 0x30]
09cbab4a  MOV RSI,RAX
09cbab4d  CALL qword ptr [RDX + RCX*0x8]
09cbab50  TEST RAX,RAX
09cbab53  JZ 0x09cbab81
09cbab55  MOV qword ptr [RSP + 0x60],R14
09cbab5a  MOV qword ptr [RSP + 0x68],0x13
09cbab63  LEA RSI,[RSP + 0x60]
09cbab68  MOV RDI,R15
09cbab6b  CALL 0x0d6c97a0
09cbab70  CMP RAX,RBX
09cbab73  JZ 0x09cbab81
09cbab75  CMP dword ptr [RAX + 0x60],0x1
09cbab79  JNZ 0x09cbab81
09cbab7b  CMP byte ptr [RAX + 0x40],0x0
09cbab7f  JNZ 0x09cbab92
09cbab81  LEA RDI,[RSP + 0x2e0]
09cbab89  CALL 0x0c450a10
09cbab8e  TEST AL,AL
09cbab90  JZ 0x09cbabb8
09cbab92  MOV RDI,qword ptr [RSP + 0x3a0]
09cbab9a  MOV RAX,qword ptr [RDI]
09cbab9d  CALL qword ptr [RAX + 0x38]
09cbaba0  MOV RCX,qword ptr [RAX]
09cbaba3  MOV RDI,RAX
09cbaba6  CALL qword ptr [RCX + 0x270]
09cbabac  MOV RCX,qword ptr [RAX]
09cbabaf  MOV RDI,RAX
09cbabb2  CALL qword ptr [RCX + 0x478]
09cbabb8  TEST byte ptr [RSP + 0x120],0x1
09cbabc0  JNZ 0x09cbabe4
09cbabc2  MOV RAX,qword ptr [RSP + 0x130]
09cbabca  MOV qword ptr [RSP + 0x210],RAX
09cbabd2  MOVAPS XMM0,xmmword ptr [RSP + 0x120]
09cbabda  MOVAPS xmmword ptr [RSP + 0x200],XMM0
09cbabe2  JMP 0x09cbac01
09cbabe4  MOV RDX,qword ptr [RSP + 0x128]
09cbabec  MOV RSI,qword ptr [RSP + 0x130]
09cbabf4  LEA RDI,[RSP + 0x200]
09cbabfc  CALL 0x0412e5e0
09cbac01  LEA RSI,[0x1330749]
09cbac08  LEA RDX,[RSP + 0x200]
09cbac10  MOV RBX,qword ptr [RSP + 0x8]
09cbac15  MOV RDI,RBX
09cbac18  CALL 0x048f0410
09cbac1d  TEST byte ptr [RSP + 0x200],0x1
09cbac25  JZ 0x09cbac40
09cbac27  MOV RSI,qword ptr [RSP + 0x200]
09cbac2f  MOV RDI,qword ptr [RSP + 0x210]
09cbac37  AND RSI,-0x2
09cbac3b  CALL 0x0412a280
09cbac40  MOV EDX,dword ptr [R12 + 0x108]
09cbac48  LEA RSI,[0x123ef74]
09cbac4f  MOV RDI,RBX
09cbac52  CALL 0x048f35b0
09cbac57  MOV EDX,dword ptr [R12 + 0x118]
09cbac5f  LEA RSI,[0x11d1a34]
09cbac66  MOV RDI,qword ptr [RSP + 0x8]
09cbac6b  CALL 0x048f35b0
09cbac70  MOV RAX,qword ptr [RSP + 0x248]
09cbac78  LEA RCX,[RSP + 0x250]
09cbac80  MOVZX EDX,word ptr [RSP + 0x250]
09cbac88  LEA RSI,[RAX + 0x128]
09cbac8f  CMP EDX,0x7fff
09cbac95  CMOVZ RSI,RCX
09cbac99  TEST RAX,RAX
09cbac9c  CMOVZ RSI,RCX
09cbaca0  MOVSX EDX,word ptr [RSI]
09cbaca3  LEA RSI,[0x1248199]
09cbacaa  MOV RDI,qword ptr [RSP + 0x8]
09cbacaf  CALL 0x048f35b0
09cbacb4  TEST byte ptr [RSP + 0x138],0x1
09cbacbc  JNZ 0x09cbace0
09cbacbe  MOV RAX,qword ptr [RSP + 0x148]
09cbacc6  MOV qword ptr [RSP + 0x1f0],RAX
09cbacce  MOVUPS XMM0,xmmword ptr [RSP + 0x138]
09cbacd6  MOVAPS xmmword ptr [RSP + 0x1e0],XMM0
09cbacde  JMP 0x09cbacfd
09cbace0  MOV RDX,qword ptr [RSP + 0x140]
09cbace8  MOV RSI,qword ptr [RSP + 0x148]
09cbacf0  LEA RDI,[RSP + 0x1e0]
09cbacf8  CALL 0x0412e5e0
09cbacfd  LEA RSI,[0x14cceb8]
09cbad04  LEA RDX,[RSP + 0x1e0]
09cbad0c  MOV RDI,qword ptr [RSP + 0x8]
09cbad11  CALL 0x048f0410
09cbad16  TEST byte ptr [RSP + 0x1e0],0x1
09cbad1e  JZ 0x09cbad39
09cbad20  MOV RSI,qword ptr [RSP + 0x1e0]
09cbad28  MOV RDI,qword ptr [RSP + 0x1f0]
09cbad30  AND RSI,-0x2
09cbad34  CALL 0x0412a280
09cbad39  TEST byte ptr [RSP + 0x120],0x1
09cbad41  JNZ 0x09cbaf81
09cbad47  TEST byte ptr [RSP + 0x138],0x1
09cbad4f  JNZ 0x09cbafa8
09cbad55  MOV RAX,qword ptr [RSP + 0x1b8]
09cbad5d  TEST RAX,RAX
09cbad60  JNZ 0x09cbafce
09cbad66  JMP 0x09cbaff6
09cbad6b  MOV RSI,qword ptr [RSP + 0xe0]
09cbad73  MOV RDI,qword ptr [RSP + 0xf0]
09cbad7b  AND RSI,-0x2
09cbad7f  CALL 0x0412a280
09cbad84  TEST byte ptr [RSP + 0xc0],0x1
09cbad8c  JZ 0x09cbaa6f
09cbad92  MOV RSI,qword ptr [RSP + 0xc0]
09cbad9a  MOV RDI,qword ptr [RSP + 0xd0]
09cbada2  AND RSI,-0x2
09cbada6  CALL 0x0412a280
09cbadab  TEST byte ptr [RSP + 0xa0],0x1
09cbadb3  JZ 0x09cbaa7d
09cbadb9  MOV RSI,qword ptr [RSP + 0xa0]
09cbadc1  MOV RDI,qword ptr [RSP + 0xb0]
09cbadc9  AND RSI,-0x2
09cbadcd  CALL 0x0412a280
09cbadd2  TEST byte ptr [RSP + 0x80],0x1
09cbadda  JZ 0x09cbaa8b
09cbade0  MOV RSI,qword ptr [RSP + 0x80]
09cbade8  MOV RDI,qword ptr [RSP + 0x90]
09cbadf0  AND RSI,-0x2
09cbadf4  CALL 0x0412a280
09cbadf9  TEST byte ptr [RSP + 0x60],0x1
09cbadfe  JNZ 0x09cbaa92
09cbae04  JMP 0x09cbaaa5
09cbae09  MOV RAX,qword ptr [R13 + 0x28]
09cbae0d  TEST RAX,RAX
09cbae10  JZ 0x09cb9cd3
09cbae16  MOV R12,qword ptr [RAX + 0x8]
09cbae1a  TEST R12,R12
09cbae1d  JZ 0x09cb9cd3
09cbae23  MOVZX EAX,byte ptr [R13 + 0x14]
09cbae28  CMP AL,0x17
09cbae2a  JZ 0x09cb9cd3
09cbae30  CMP AL,0x10
09cbae32  JNZ 0x09cbae46
09cbae34  MOV RAX,qword ptr [RSP + 0x160]
09cbae3c  CMP dword ptr [RAX + 0x8],0x1b
09cbae40  JGE 0x09cb9cd3
09cbae46  LEA RDI,[RSP + 0x60]
09cbae4b  LEA RSI,[RSP + 0x2e0]
09cbae53  CALL 0x0c451750
09cbae58  LEA R15,[RSP + 0x10]
09cbae5d  LEA RSI,[RSP + 0x60]
09cbae62  MOV RDI,R15
09cbae65  CALL 0x09cbbb50
09cbae6a  LEA RAX,[0xf371da8]
09cbae71  MOV qword ptr [RSP + 0x60],RAX
09cbae76  MOV EAX,dword ptr [RSP + 0xf0]
09cbae7d  MOV ECX,0xffffffff
09cbae82  CMP RAX,RCX
09cbae85  JZ 0x09cbae9e
09cbae87  LEA RSI,[RSP + 0xe0]
09cbae8f  LEA RCX,[0xf1e08d8]
09cbae96  LEA RDI,[RSP + 0x30]
09cbae9b  CALL qword ptr [RCX + RAX*0x8]
09cbae9e  MOV dword ptr [RSP + 0xf0],0xffffffff
09cbaea9  LEA R14,[RSP + 0x60]
09cbaeae  MOV RDI,R14
09cbaeb1  CALL 0x0c44e610
09cbaeb6  XOR EAX,EAX
09cbaeb8  MOV RCX,qword ptr [RSP + 0x160]
09cbaec0  CMP dword ptr [RCX + 0x120],0x1
09cbaec7  MOV ECX,dword ptr [RCX + 0x108]
09cbaecd  SETZ AL
09cbaed0  OR EAX,0x100
09cbaed5  MOV dword ptr [RSP + 0x30],ECX
09cbaed9  MOV qword ptr [RSP + 0x38],R15
09cbaede  MOV qword ptr [RSP + 0x40],0x0
09cbaee7  MOV word ptr [RSP + 0x48],AX
09cbaeec  MOV qword ptr [RSP + 0x50],R12
09cbaef1  LEA RDI,[RSP + 0x30]
09cbaef6  CALL 0x0b634640
09cbaefb  MOV RSI,qword ptr [RSP + 0x8]
09cbaf00  CMP EAX,0x5
09cbaf03  JNZ 0x09cbaf51
09cbaf05  CMP qword ptr [R13 + 0x28],0x0
09cbaf0a  JZ 0x09cbaf1c
09cbaf0c  MOV RAX,qword ptr [RBP]
09cbaf10  MOV RDI,RBP
09cbaf13  MOV RSI,R13
09cbaf16  CALL qword ptr [RAX + 0x208]
09cbaf1c  TEST byte ptr [RSP + 0x120],0x1
09cbaf24  JNZ 0x09cbb26a
09cbaf2a  MOV RAX,qword ptr [RSP + 0x130]
09cbaf32  MOV qword ptr [RSP + 0x70],RAX
09cbaf37  MOVAPS XMM0,xmmword ptr [RSP + 0x120]
09cbaf3f  MOVAPS xmmword ptr [RSP + 0x60],XMM0
09cbaf44  MOV R12,qword ptr [RSP + 0x160]
09cbaf4c  JMP 0x09cbb28c
09cbaf51  LEA RCX,[RSP + 0x138]
09cbaf59  MOV RDI,qword ptr [RSP + 0x160]
09cbaf61  MOV RDX,RAX
09cbaf64  CALL 0x09cbbc90
09cbaf69  LEA RDI,[RSP + 0x10]
09cbaf6e  CALL 0x049c8240
09cbaf73  TEST byte ptr [RSP + 0x120],0x1
09cbaf7b  JZ 0x09cbad47
09cbaf81  MOV RSI,qword ptr [RSP + 0x120]
09cbaf89  MOV RDI,qword ptr [RSP + 0x130]
09cbaf91  AND RSI,-0x2
09cbaf95  CALL 0x0412a280
09cbaf9a  TEST byte ptr [RSP + 0x138],0x1
09cbafa2  JZ 0x09cbad55
09cbafa8  MOV RSI,qword ptr [RSP + 0x138]
09cbafb0  MOV RDI,qword ptr [RSP + 0x148]
09cbafb8  AND RSI,-0x2
09cbafbc  CALL 0x0412a280
09cbafc1  MOV RAX,qword ptr [RSP + 0x1b8]
09cbafc9  TEST RAX,RAX
09cbafcc  JZ 0x09cbaff6
09cbafce  DEC.LOCK dword ptr [RAX + 0xc]
09cbafd2  MOV ECX,dword ptr [RAX + 0xc]
09cbafd5  TEST ECX,ECX
09cbafd7  JG 0x09cbaff6
09cbafd9  CMP qword ptr [RAX],0x0
09cbafdd  JNZ 0x09cbaff6
09cbafdf  MOV RDI,qword ptr [RSP + 0x1b8]
09cbafe7  TEST RDI,RDI
09cbafea  JZ 0x09cbaff6
09cbafec  MOV ESI,0x10
09cbaff1  CALL 0x0412a280
09cbaff6  LEA RAX,[0xf371da8]
09cbaffd  MOV qword ptr [RSP + 0x2e0],RAX
09cbb005  MOV EAX,dword ptr [RSP + 0x370]
09cbb00c  MOV ECX,0xffffffff
09cbb011  CMP RAX,RCX
09cbb014  JZ 0x09cbb02d
09cbb016  LEA RCX,[0xf1e08d8]
09cbb01d  LEA RDI,[RSP + 0x60]
09cbb022  LEA RSI,[RSP + 0x360]
09cbb02a  CALL qword ptr [RCX + RAX*0x8]
09cbb02d  MOV dword ptr [RSP + 0x370],0xffffffff
09cbb038  LEA RAX,[0xf36e918]
09cbb03f  MOV qword ptr [RSP + 0x2e0],RAX
09cbb047  MOV RDI,qword ptr [RSP + 0x358]
09cbb04f  MOV qword ptr [RSP + 0x358],0x0
09cbb05b  TEST RDI,RDI
09cbb05e  JZ 0x09cbb066
09cbb060  MOV RAX,qword ptr [RDI]
09cbb063  CALL qword ptr [RAX + 0x8]
09cbb066  MOV RDI,qword ptr [RSP + 0x330]
09cbb06e  TEST RDI,RDI
09cbb071  JZ 0x09cbb08b
09cbb073  MOV qword ptr [RSP + 0x338],RDI
09cbb07b  MOV RSI,qword ptr [RSP + 0x340]
09cbb083  SUB RSI,RDI
09cbb086  CALL 0x0412a280
09cbb08b  MOV RDI,qword ptr [RSP + 0x310]
09cbb093  TEST RDI,RDI
09cbb096  JZ 0x09cbb0b0
09cbb098  MOV qword ptr [RSP + 0x318],RDI
09cbb0a0  MOV RSI,qword ptr [RSP + 0x320]
09cbb0a8  SUB RSI,RDI
09cbb0ab  CALL 0x0412a280
09cbb0b0  MOV RDI,qword ptr [RSP + 0x2f0]
09cbb0b8  MOV qword ptr [RSP + 0x2f0],0x0
09cbb0c4  TEST RDI,RDI
09cbb0c7  JZ 0x09cbb0cf
09cbb0c9  MOV RAX,qword ptr [RDI]
09cbb0cc  CALL qword ptr [RAX + 0x8]
09cbb0cf  MOV RAX,qword ptr [RSP + 0x2e8]
09cbb0d7  TEST RAX,RAX
09cbb0da  JZ 0x09cbb104
09cbb0dc  DEC.LOCK dword ptr [RAX + 0xc]
09cbb0e0  MOV ECX,dword ptr [RAX + 0xc]
09cbb0e3  TEST ECX,ECX
09cbb0e5  JG 0x09cbb104
09cbb0e7  CMP qword ptr [RAX],0x0
09cbb0eb  JNZ 0x09cbb104
09cbb0ed  MOV RDI,qword ptr [RSP + 0x2e8]
09cbb0f5  TEST RDI,RDI
09cbb0f8  JZ 0x09cbb104
09cbb0fa  MOV ESI,0x10
09cbb0ff  CALL 0x0412a280
09cbb104  CMP byte ptr [RSP + 0x2b0],0x1
09cbb10c  JNZ 0x09cbb1de
09cbb112  LEA RAX,[0xf36e918]
09cbb119  MOV qword ptr [RSP + 0x230],RAX
09cbb121  MOV RDI,qword ptr [RSP + 0x2a8]
09cbb129  MOV qword ptr [RSP + 0x2a8],0x0
09cbb135  TEST RDI,RDI
09cbb138  JZ 0x09cbb140
09cbb13a  MOV RAX,qword ptr [RDI]
09cbb13d  CALL qword ptr [RAX + 0x8]
09cbb140  MOV RDI,qword ptr [RSP + 0x280]
09cbb148  TEST RDI,RDI
09cbb14b  JZ 0x09cbb165
09cbb14d  MOV qword ptr [RSP + 0x288],RDI
09cbb155  MOV RSI,qword ptr [RSP + 0x290]
09cbb15d  SUB RSI,RDI
09cbb160  CALL 0x0412a280
09cbb165  MOV RDI,qword ptr [RSP + 0x260]
09cbb16d  TEST RDI,RDI
09cbb170  JZ 0x09cbb18a
09cbb172  MOV qword ptr [RSP + 0x268],RDI
09cbb17a  MOV RSI,qword ptr [RSP + 0x270]
09cbb182  SUB RSI,RDI
09cbb185  CALL 0x0412a280
09cbb18a  MOV RDI,qword ptr [RSP + 0x240]
09cbb192  MOV qword ptr [RSP + 0x240],0x0
09cbb19e  TEST RDI,RDI
09cbb1a1  JZ 0x09cbb1a9
09cbb1a3  MOV RAX,qword ptr [RDI]
09cbb1a6  CALL qword ptr [RAX + 0x8]
09cbb1a9  MOV RAX,qword ptr [RSP + 0x238]
09cbb1b1  TEST RAX,RAX
09cbb1b4  JZ 0x09cbb1de
09cbb1b6  DEC.LOCK dword ptr [RAX + 0xc]
09cbb1ba  MOV ECX,dword ptr [RAX + 0xc]
09cbb1bd  TEST ECX,ECX
09cbb1bf  JG 0x09cbb1de
09cbb1c1  CMP qword ptr [RAX],0x0
09cbb1c5  JNZ 0x09cbb1de
09cbb1c7  MOV RDI,qword ptr [RSP + 0x238]
09cbb1cf  TEST RDI,RDI
09cbb1d2  JZ 0x09cbb1de
09cbb1d4  MOV ESI,0x10
09cbb1d9  CALL 0x0412a280
09cbb1de  MOV RBX,qword ptr [RSP + 0x1c0]
09cbb1e6  TEST RBX,RBX
09cbb1e9  JZ 0x09cbb20d
09cbb1eb  MOV RDI,qword ptr [RBX]
09cbb1ee  MOV qword ptr [RBX],0x0
09cbb1f5  TEST RDI,RDI
09cbb1f8  JZ 0x09cbb200
09cbb1fa  MOV RAX,qword ptr [RDI]
09cbb1fd  CALL qword ptr [RAX + 0x8]
09cbb200  MOV ESI,0x8
09cbb205  MOV RDI,RBX
09cbb208  CALL 0x0412a280
09cbb20d  MOV RBX,qword ptr [RSP + 0x178]
09cbb215  TEST RBX,RBX
09cbb218  JZ 0x09cbb23d
09cbb21a  MOV RAX,-0x1
09cbb221  XADD.LOCK qword ptr [RBX + 0x8],RAX
09cbb227  TEST RAX,RAX
09cbb22a  JNZ 0x09cbb23d
09cbb22c  MOV RAX,qword ptr [RBX]
09cbb22f  MOV RDI,RBX
09cbb232  CALL qword ptr [RAX + 0x10]
09cbb235  MOV RDI,RBX
09cbb238  CALL 0x0412c2d0
09cbb23d  ADD RSP,0x3a8
09cbb244  POP RBX
09cbb245  POP R12
09cbb247  POP R13
09cbb249  POP R14
09cbb24b  POP R15
09cbb24d  POP RBP
09cbb24e  RET
09cbb24f  MOV EBP,0x1
09cbb254  MOV RBX,qword ptr [RSP + 0x108]
09cbb25c  TEST RBX,RBX
09cbb25f  JNZ 0x09cba8aa
09cbb265  JMP 0x09cba8cd
09cbb26a  MOV RDX,qword ptr [RSP + 0x128]
09cbb272  MOV RSI,qword ptr [RSP + 0x130]
09cbb27a  LEA RDI,[RSP + 0x60]
09cbb27f  CALL 0x0412e5e0
09cbb284  MOV R12,qword ptr [RSP + 0x160]
09cbb28c  MOV dword ptr [RSP + 0x78],0x0
09cbb294  LEA R15,[RSP + 0x80]
09cbb29c  MOV ESI,dword ptr [R12 + 0x108]
09cbb2a4  MOV RDI,R15
09cbb2a7  CALL 0x09e20be0
09cbb2ac  LEA R15,[RSP + 0xa0]
09cbb2b4  MOV ESI,dword ptr [R12 + 0x118]
09cbb2bc  MOV RDI,R15
09cbb2bf  CALL 0x09e20be0
09cbb2c4  LEA R15,[RSP + 0xc0]
09cbb2cc  TEST byte ptr [RSP + 0x138],0x1
09cbb2d4  JNZ 0x09cbb2f0
09cbb2d6  MOV RAX,qword ptr [RSP + 0x148]
09cbb2de  MOV qword ptr [R15 + 0x10],RAX
09cbb2e2  MOVUPS XMM0,xmmword ptr [RSP + 0x138]
09cbb2ea  MOVUPS xmmword ptr [R15],XMM0
09cbb2ee  JMP 0x09cbb308
09cbb2f0  MOV RDX,qword ptr [RSP + 0x140]
09cbb2f8  MOV RSI,qword ptr [RSP + 0x148]
09cbb300  MOV RDI,R15
09cbb303  CALL 0x0412e5e0
09cbb308  MOV dword ptr [RSP + 0xd8],0x0
09cbb313  LEA RDX,[RSP + 0xe0]
09cbb31b  XORPS XMM0,XMM0
09cbb31e  MOVAPS xmmword ptr [RSP + 0x100],XMM0
09cbb326  MOV qword ptr [RSP + 0x110],0x0
09cbb332  LEA RDI,[RSP + 0x100]
09cbb33a  LEA RSI,[RSP + 0x60]
09cbb33f  MOV ECX,0x4
09cbb344  CALL 0x09ce36f0
09cbb349  LEA RSI,[0x12ada88]
09cbb350  LEA RCX,[RSP + 0x100]
09cbb358  MOV EDX,0x1c
09cbb35d  MOV RDI,qword ptr [RSP + 0x8]
09cbb362  CALL 0x09e232e0
09cbb367  LEA RDI,[RSP + 0x100]
09cbb36f  CALL 0x048f03a0
09cbb374  TEST byte ptr [RSP + 0xc0],0x1
09cbb37c  JNZ 0x09cbb3ca
09cbb37e  TEST byte ptr [RSP + 0xa0],0x1
09cbb386  JNZ 0x09cbb3ed
09cbb388  TEST byte ptr [RSP + 0x80],0x1
09cbb390  JNZ 0x09cbb410
09cbb392  TEST byte ptr [RSP + 0x60],0x1
09cbb397  JZ 0x09cbb3ac
09cbb399  MOV RSI,qword ptr [RSP + 0x60]
09cbb39e  MOV RDI,qword ptr [RSP + 0x70]
09cbb3a3  AND RSI,-0x2
09cbb3a7  CALL 0x0412a280
09cbb3ac  LEA RDI,[RSP + 0x10]
09cbb3b1  CALL 0x049c8240
09cbb3b6  CMP byte ptr [R12 + 0x138],0x1
09cbb3bf  JZ 0x09cbaadf
09cbb3c5  JMP 0x09cbabb8
09cbb3ca  MOV RSI,qword ptr [RSP + 0xc0]
09cbb3d2  MOV RDI,qword ptr [RSP + 0xd0]
09cbb3da  AND RSI,-0x2
09cbb3de  CALL 0x0412a280
09cbb3e3  TEST byte ptr [RSP + 0xa0],0x1
09cbb3eb  JZ 0x09cbb388
09cbb3ed  MOV RSI,qword ptr [RSP + 0xa0]
09cbb3f5  MOV RDI,qword ptr [RSP + 0xb0]
09cbb3fd  AND RSI,-0x2
09cbb401  CALL 0x0412a280
09cbb406  TEST byte ptr [RSP + 0x80],0x1
09cbb40e  JZ 0x09cbb392
09cbb410  MOV RSI,qword ptr [RSP + 0x80]
09cbb418  MOV RDI,qword ptr [RSP + 0x90]
09cbb420  AND RSI,-0x2
09cbb424  CALL 0x0412a280
09cbb429  TEST byte ptr [RSP + 0x60],0x1
09cbb42e  JNZ 0x09cbb399
09cbb434  JMP 0x09cbb3ac
09cbb482  MOV EDI,0x20
09cbb487  XOR ESI,ESI
09cbb489  CALL 0x0eec74c0
09cbb48e  JMP 0x09cb9da9
09cbb493  CALL 0x04882eb0
09cbb498  CALL 0x05ab4620
09cbb49d  LEA RDI,[0xf5ea4a0]
09cbb4a4  CALL 0x04108328
09cbb4a9  TEST EAX,EAX
09cbb4ab  JZ 0x09cb9b16
09cbb4b1  LEA RDI,[0xf5ea138]
09cbb4b8  CALL 0x08b670e0
09cbb4bd  LEA RDI,[0x8b673f0]
09cbb4c4  LEA RSI,[0xf5ea138]
09cbb4cb  LEA RDX,[0xf53dab8]
09cbb4d2  CALL 0x0eee2f40
09cbb4d7  LEA RDI,[0xf5ea4a0]
09cbb4de  CALL 0x0410844d
09cbb4e3  MOV R12,qword ptr [RSP + 0x160]
09cbb4eb  JMP 0x09cb9b16
09cbb4f0  CALL 0x04931450
09cbb4f5  MOV RBX,RAX
09cbb4f8  LEA RDI,[0xf5ea4a0]
09cbb4ff  CALL 0x041084d6
09cbb504  JMP 0x09cbbaec
09cbbaec  LEA RDI,[RSP + 0x1b8]
09cbbaf4  CALL 0x04963c80
09cbbaf9  LEA RDI,[RSP + 0x2e0]
09cbbb01  CALL 0x049c2320
09cbbb06  CMP byte ptr [RSP + 0x2b0],0x1
09cbbb0e  JNZ 0x09cbbb24
09cbbb10  LEA RDI,[RSP + 0x230]
09cbbb18  CALL 0x0c44e610
09cbbb1d  JMP 0x09cbbb24
09cbbb24  LEA RDI,[RSP + 0x1c0]
09cbbb2c  CALL 0x09c70160
09cbbb31  LEA RDI,[RSP + 0x170]
09cbbb39  CALL 0x05ab3aa0
09cbbb3e  MOV RDI,RBX
09cbbb41  CALL 0x0eee2d70
09cbbb46  INT3
```
