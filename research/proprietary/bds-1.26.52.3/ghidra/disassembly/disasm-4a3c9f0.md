# 4a3c9f0  ScriptDebuggerMessages::NetworkPayload<S_::CommandMessage>::vslot7

```asm
04a3c9f0  PUSH RBP
04a3c9f1  PUSH R15
04a3c9f3  PUSH R14
04a3c9f5  PUSH R13
04a3c9f7  PUSH R12
04a3c9f9  PUSH RBX
04a3c9fa  SUB RSP,0x198
04a3ca01  MOV R13,qword ptr [RSI]
04a3ca04  MOV RAX,qword ptr [RSI + 0x8]
04a3ca08  MOV qword ptr [RSP + 0xd0],RAX
04a3ca10  CMP R13,RAX
04a3ca13  JZ 0x04a3cec0
04a3ca19  MOV qword ptr [RSP + 0xc8],RDI
04a3ca21  XORPS XMM0,XMM0
04a3ca24  MOVAPS xmmword ptr [RSP],XMM0
04a3ca28  MOV qword ptr [RSP + 0x10],0x0
04a3ca31  JMP 0x04a3caee
04a3ca40  MOVUPS XMM0,xmmword ptr [RSP + 0x80]
04a3ca48  MOVUPS xmmword ptr [RAX + 0x60],XMM0
04a3ca4c  MOVUPS XMM0,xmmword ptr [RSP + 0x70]
04a3ca51  MOVUPS xmmword ptr [RAX + 0x50],XMM0
04a3ca55  MOVUPS XMM0,xmmword ptr [RSP + 0x60]
04a3ca5a  MOVUPS xmmword ptr [RAX + 0x40],XMM0
04a3ca5e  MOVUPS XMM0,xmmword ptr [RSP + 0x20]
04a3ca63  MOVUPS XMM1,xmmword ptr [RSP + 0x30]
04a3ca68  MOVUPS XMM2,xmmword ptr [RSP + 0x40]
04a3ca6d  MOVUPS XMM3,xmmword ptr [RSP + 0x50]
04a3ca72  MOVUPS xmmword ptr [RAX + 0x30],XMM3
04a3ca76  MOVUPS xmmword ptr [RAX + 0x20],XMM2
04a3ca7a  MOVUPS xmmword ptr [RAX + 0x10],XMM1
04a3ca7e  MOVUPS xmmword ptr [RAX],XMM0
04a3ca81  MOVUPS xmmword ptr [RAX + 0x70],XMM4
04a3ca85  MOV qword ptr [RAX + 0x80],0x0
04a3ca90  MOVUPS XMM0,xmmword ptr [RSP + 0x90]
04a3ca98  MOVUPS xmmword ptr [RAX + 0x70],XMM0
04a3ca9c  MOV RCX,qword ptr [RSP + 0xa0]
04a3caa4  MOV qword ptr [RAX + 0x80],RCX
04a3caab  MOVUPS xmmword ptr [R8],XMM4
04a3caaf  MOV qword ptr [R8 + 0x10],0x0
04a3cab7  MOV RCX,qword ptr [R8 + 0x28]
04a3cabb  MOV qword ptr [RAX + 0x98],RCX
04a3cac2  MOVUPS XMM0,xmmword ptr [R8 + 0x18]
04a3cac7  MOVUPS xmmword ptr [RAX + 0x88],XMM0
04a3cace  ADD RAX,0xa0
04a3cad4  MOV qword ptr [RSP + 0x8],RAX
04a3cad9  ADD R13,0xe0
04a3cae0  CMP R13,qword ptr [RSP + 0xd0]
04a3cae8  JZ 0x04a3ccd9
04a3caee  MOV RAX,qword ptr [R13]
04a3caf2  MOV qword ptr [RSP + 0xd8],RAX
04a3cafa  MOV R14,qword ptr [R13 + 0x70]
04a3cafe  MOV RBP,qword ptr [R13 + 0x78]
04a3cb02  MOV R10,qword ptr [R13 + 0x80]
04a3cb09  MOV R15,qword ptr [R13 + 0x88]
04a3cb10  MOV RSI,qword ptr [R13 + 0x90]
04a3cb17  MOV qword ptr [RSP + 0xe0],RSI
04a3cb1f  MOV R11,qword ptr [R13 + 0x98]
04a3cb26  MOV RDX,qword ptr [R13 + 0xa0]
04a3cb2d  MOV R9,qword ptr [R13 + 0xa8]
04a3cb34  MOV RCX,qword ptr [R13 + 0xb0]
04a3cb3b  MOV RDI,qword ptr [R13 + 0xb8]
04a3cb42  MOV RAX,qword ptr [R13 + 0xc0]
04a3cb49  MOV qword ptr [RSP + 0xe8],RAX
04a3cb51  MOV RBX,qword ptr [R13 + 0xc8]
04a3cb58  MOV R8,qword ptr [R13 + 0xd0]
04a3cb5f  MOV R12,qword ptr [R13 + 0xd8]
04a3cb66  MOV qword ptr [RSP + 0x20],R14
04a3cb6b  MOV qword ptr [RSP + 0x28],RBP
04a3cb70  MOV qword ptr [RSP + 0x30],R10
04a3cb75  MOV qword ptr [RSP + 0x38],R15
04a3cb7a  MOV qword ptr [RSP + 0x40],RSI
04a3cb7f  MOV qword ptr [RSP + 0x48],R11
04a3cb84  MOV qword ptr [RSP + 0x50],RDX
04a3cb89  MOV RSI,RDX
04a3cb8c  MOV qword ptr [RSP + 0x58],R9
04a3cb91  MOV qword ptr [RSP + 0x60],RCX
04a3cb96  MOV RDX,RCX
04a3cb99  MOV qword ptr [RSP + 0x68],RDI
04a3cb9e  MOV qword ptr [RSP + 0x70],RAX
04a3cba3  MOV qword ptr [RSP + 0x78],RBX
04a3cba8  MOV qword ptr [RSP + 0x80],R8
04a3cbb0  MOV RAX,R8
04a3cbb3  LEA R8,[RSP + 0x90]
04a3cbbb  MOV qword ptr [RSP + 0x88],R12
04a3cbc3  XORPS XMM4,XMM4
04a3cbc6  MOVUPS xmmword ptr [R8],XMM4
04a3cbca  MOV qword ptr [R8 + 0x10],0x0
04a3cbd2  MOV RCX,qword ptr [RSP + 0xd8]
04a3cbda  MOV qword ptr [RSP + 0xa8],RCX
04a3cbe2  ADD RBP,R14
04a3cbe5  MOV RCX,RBP
04a3cbe8  SHR RCX,0x3f
04a3cbec  ADD RCX,RBP
04a3cbef  ADD R15,R10
04a3cbf2  MOV R14,R15
04a3cbf5  SHR R14,0x3f
04a3cbf9  ADD R14,R15
04a3cbfc  SAR RCX,0x1
04a3cbff  SAR R14,0x1
04a3cc02  ADD R14,RCX
04a3cc05  ADD R11,qword ptr [RSP + 0xe0]
04a3cc0d  MOV RCX,R11
04a3cc10  SHR RCX,0x3f
04a3cc14  ADD RCX,R11
04a3cc17  ADD R9,RSI
04a3cc1a  MOV R10,R9
04a3cc1d  SHR R10,0x3f
04a3cc21  ADD R10,R9
04a3cc24  SAR RCX,0x1
04a3cc27  SAR R10,0x1
04a3cc2a  ADD R10,RCX
04a3cc2d  ADD R10,R14
04a3cc30  ADD RDI,RDX
04a3cc33  MOV RCX,RDI
04a3cc36  SHR RCX,0x3f
04a3cc3a  ADD RCX,RDI
04a3cc3d  ADD RBX,qword ptr [RSP + 0xe8]
04a3cc45  MOV RSI,RBX
04a3cc48  SHR RSI,0x3f
04a3cc4c  ADD RSI,RBX
04a3cc4f  SAR RCX,0x1
04a3cc52  SAR RSI,0x1
04a3cc55  ADD RSI,RCX
04a3cc58  ADD R12,RAX
04a3cc5b  MOV RCX,R12
04a3cc5e  SHR RCX,0x3f
04a3cc62  ADD RCX,R12
04a3cc65  SAR RCX,0x1
04a3cc68  ADD RCX,RSI
04a3cc6b  ADD RCX,R10
04a3cc6e  MOV byte ptr [RSP + 0xb0],0x1
04a3cc76  MOV qword ptr [RSP + 0xb8],RCX
04a3cc7e  MOV RAX,qword ptr [RSP + 0x8]
04a3cc83  CMP RAX,qword ptr [RSP + 0x10]
04a3cc88  JC 0x04a3ca40
04a3cc8e  MOV RBX,R8
04a3cc91  MOV RDI,RSP
04a3cc94  LEA RSI,[RSP + 0x20]
04a3cc99  CALL 0x04a670b0
04a3cc9e  MOV RSI,qword ptr [RSP + 0x90]
04a3cca6  MOV qword ptr [RSP + 0x8],RAX
04a3ccab  TEST RSI,RSI
04a3ccae  JZ 0x04a3cad9
04a3ccb4  MOV RDI,RBX
04a3ccb7  CALL 0x04a67380
04a3ccbc  MOV RDI,qword ptr [RSP + 0x90]
04a3ccc4  MOV RSI,qword ptr [RSP + 0xa0]
04a3cccc  SUB RSI,RDI
04a3cccf  CALL 0x0412a280
04a3ccd4  JMP 0x04a3cad9
04a3ccd9  LEA RDI,[RSP + 0x20]
04a3ccde  MOV RSI,RSP
04a3cce1  CALL 0x04a3bf90
04a3cce6  MOVZX EAX,byte ptr [RSP + 0xc0]
04a3ccee  TEST AL,AL
04a3ccf0  MOV R15,qword ptr [RSP + 0xc8]
04a3ccf8  JZ 0x04a3cecf
04a3ccfe  MOVUPS XMM0,xmmword ptr [RSP + 0x80]
04a3cd06  MOVAPS xmmword ptr [RSP + 0x150],XMM0
04a3cd0e  MOVUPS XMM0,xmmword ptr [RSP + 0x70]
04a3cd13  MOVAPS xmmword ptr [RSP + 0x140],XMM0
04a3cd1b  MOVUPS XMM0,xmmword ptr [RSP + 0x60]
04a3cd20  MOVAPS xmmword ptr [RSP + 0x130],XMM0
04a3cd28  MOVUPS XMM0,xmmword ptr [RSP + 0x20]
04a3cd2d  MOVUPS XMM1,xmmword ptr [RSP + 0x30]
04a3cd32  MOVUPS XMM2,xmmword ptr [RSP + 0x40]
04a3cd37  MOVUPS XMM3,xmmword ptr [RSP + 0x50]
04a3cd3c  MOVAPS xmmword ptr [RSP + 0x120],XMM3
04a3cd44  MOVAPS xmmword ptr [RSP + 0x110],XMM2
04a3cd4c  MOVAPS xmmword ptr [RSP + 0x100],XMM1
04a3cd54  MOVAPS xmmword ptr [RSP + 0xf0],XMM0
04a3cd5c  LEA R14,[RSP + 0x160]
04a3cd64  XORPS XMM0,XMM0
04a3cd67  MOVAPS xmmword ptr [RSP + 0x160],XMM0
04a3cd6f  MOV qword ptr [RSP + 0x170],0x0
04a3cd7b  MOV RSI,qword ptr [RSP + 0x90]
04a3cd83  MOV RDX,qword ptr [RSP + 0x98]
04a3cd8b  MOV RCX,RDX
04a3cd8e  SUB RCX,RSI
04a3cd91  SAR RCX,0x5
04a3cd95  MOV RBX,-0x3333333333333333
04a3cd9f  IMUL RCX,RBX
04a3cda3  MOV RDI,R14
04a3cda6  CALL 0x04a62b30
04a3cdab  MOV RAX,qword ptr [RSP + 0xb8]
04a3cdb3  MOV qword ptr [RSP + 0x188],RAX
04a3cdbb  MOVUPS XMM0,xmmword ptr [RSP + 0xa8]
04a3cdc3  MOVUPS xmmword ptr [RSP + 0x178],XMM0
04a3cdcb  MOVAPS XMM0,xmmword ptr [RSP + 0x150]
04a3cdd3  MOVUPS xmmword ptr [R15 + 0x60],XMM0
04a3cdd8  MOVAPS XMM0,xmmword ptr [RSP + 0x140]
04a3cde0  MOVUPS xmmword ptr [R15 + 0x50],XMM0
04a3cde5  MOVAPS XMM0,xmmword ptr [RSP + 0x130]
04a3cded  MOVUPS xmmword ptr [R15 + 0x40],XMM0
04a3cdf2  MOVAPS XMM0,xmmword ptr [RSP + 0xf0]
04a3cdfa  MOVAPS XMM1,xmmword ptr [RSP + 0x100]
04a3ce02  MOVAPS XMM2,xmmword ptr [RSP + 0x110]
04a3ce0a  MOVAPS XMM3,xmmword ptr [RSP + 0x120]
04a3ce12  MOVUPS xmmword ptr [R15 + 0x30],XMM3
04a3ce17  MOVUPS xmmword ptr [R15 + 0x20],XMM2
04a3ce1c  MOVUPS xmmword ptr [R15 + 0x10],XMM1
04a3ce21  MOVUPS xmmword ptr [R15],XMM0
04a3ce25  LEA RDI,[R15 + 0x70]
04a3ce29  XORPS XMM0,XMM0
04a3ce2c  MOVUPS xmmword ptr [R15 + 0x70],XMM0
04a3ce31  MOV qword ptr [R15 + 0x80],0x0
04a3ce3c  MOV RSI,qword ptr [RSP + 0x160]
04a3ce44  MOV RDX,qword ptr [RSP + 0x168]
04a3ce4c  MOV RCX,RDX
04a3ce4f  SUB RCX,RSI
04a3ce52  SAR RCX,0x5
04a3ce56  IMUL RCX,RBX
04a3ce5a  CALL 0x04a62b30
04a3ce5f  LEA RAX,[RSP + 0x178]
04a3ce67  MOV RCX,qword ptr [RAX + 0x10]
04a3ce6b  MOV qword ptr [R15 + 0x98],RCX
04a3ce72  MOVUPS XMM0,xmmword ptr [RAX]
04a3ce75  MOVUPS xmmword ptr [R15 + 0x88],XMM0
04a3ce7d  MOV byte ptr [R15 + 0xa0],0x1
04a3ce85  MOV RSI,qword ptr [RSP + 0x160]
04a3ce8d  TEST RSI,RSI
04a3ce90  JZ 0x04a3ceb2
04a3ce92  MOV RDI,R14
04a3ce95  CALL 0x04a67380
04a3ce9a  MOV RDI,qword ptr [RSP + 0x160]
04a3cea2  MOV RSI,qword ptr [RSP + 0x170]
04a3ceaa  SUB RSI,RDI
04a3cead  CALL 0x0412a280
04a3ceb2  MOVZX EAX,byte ptr [RSP + 0xc0]
04a3ceba  TEST AL,0x1
04a3cebc  JNZ 0x04a3cedf
04a3cebe  JMP 0x04a3cf11
04a3cec0  MOV byte ptr [RDI],0x0
04a3cec3  MOV byte ptr [RDI + 0xa0],0x0
04a3ceca  MOV R15,RDI
04a3cecd  JMP 0x04a3cf33
04a3cecf  MOV byte ptr [R15],0x0
04a3ced3  MOV byte ptr [R15 + 0xa0],0x0
04a3cedb  TEST AL,0x1
04a3cedd  JZ 0x04a3cf11
04a3cedf  MOV RSI,qword ptr [RSP + 0x90]
04a3cee7  TEST RSI,RSI
04a3ceea  JZ 0x04a3cf11
04a3ceec  LEA RDI,[RSP + 0x90]
04a3cef4  CALL 0x04a67380
04a3cef9  MOV RDI,qword ptr [RSP + 0x90]
04a3cf01  MOV RSI,qword ptr [RSP + 0xa0]
04a3cf09  SUB RSI,RDI
04a3cf0c  CALL 0x0412a280
04a3cf11  MOV RSI,qword ptr [RSP]
04a3cf15  TEST RSI,RSI
04a3cf18  JZ 0x04a3cf33
04a3cf1a  MOV RDI,RSP
04a3cf1d  CALL 0x04a67380
04a3cf22  MOV RDI,qword ptr [RSP]
04a3cf26  MOV RSI,qword ptr [RSP + 0x10]
04a3cf2b  SUB RSI,RDI
04a3cf2e  CALL 0x0412a280
04a3cf33  MOV RAX,R15
04a3cf36  ADD RSP,0x198
04a3cf3d  POP RBX
04a3cf3e  POP R12
04a3cf40  POP R13
04a3cf42  POP R14
04a3cf44  POP R15
04a3cf46  POP RBP
04a3cf47  RET
```
