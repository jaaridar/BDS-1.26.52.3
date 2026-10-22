# 48abb60

```asm
048abb60  PUSH RBP
048abb61  PUSH R15
048abb63  PUSH R14
048abb65  PUSH R13
048abb67  PUSH R12
048abb69  PUSH RBX
048abb6a  SUB RSP,0x28
048abb6e  MOV RBX,RSI
048abb71  MOV R14,RDI
048abb74  MOV R15,qword ptr [RDI + 0x8]
048abb78  MOV RCX,qword ptr [RDI + 0x10]
048abb7c  CMP R15,RCX
048abb7f  JNC 0x048abbad
048abb81  CMP RBX,R15
048abb84  JZ 0x048abc51
048abb8a  MOV qword ptr [RSP + 0x18],R14
048abb8f  TEST byte ptr [RDX],0x1
048abb92  JNZ 0x048abd1d
048abb98  MOV RAX,qword ptr [RDX + 0x10]
048abb9c  MOV qword ptr [RSP + 0x10],RAX
048abba1  MOVUPS XMM0,xmmword ptr [RDX]
048abba4  MOVAPS xmmword ptr [RSP],XMM0
048abba8  JMP 0x048abd34
048abbad  MOV R13,qword ptr [R14]
048abbb0  MOV RAX,0xaaaaaaaaaaaaaaa
048abbba  SUB R15,R13
048abbbd  SAR R15,0x3
048abbc1  MOV RSI,-0x5555555555555555
048abbcb  IMUL R15,RSI
048abbcf  INC R15
048abbd2  CMP R15,RAX
048abbd5  JA 0x048abe14
048abbdb  SUB RCX,R13
048abbde  SAR RCX,0x3
048abbe2  IMUL RCX,RSI
048abbe6  LEA RSI,[RCX + RCX*0x1]
048abbea  CMP RSI,R15
048abbed  CMOVA R15,RSI
048abbf1  MOV RSI,0x555555555555555
048abbfb  CMP RCX,RSI
048abbfe  CMOVNC R15,RAX
048abc02  MOV qword ptr [RSP + 0x20],R14
048abc07  TEST R15,R15
048abc0a  JZ 0x048abc6e
048abc0c  CMP R15,RAX
048abc0f  JA 0x048abe19
048abc15  MOV RBP,RDX
048abc18  LEA RAX,[R15*0x8]
048abc20  LEA R12,[RAX + RAX*0x2]
048abc24  MOV RAX,qword ptr [0x0f5463b0]
048abc2b  LEA RDI,[0xf5463b0]
048abc32  MOV RSI,R12
048abc35  CALL qword ptr [RAX + 0x10]
048abc38  TEST RAX,RAX
048abc3b  MOV RDX,RBP
048abc3e  JNZ 0x048abc70
048abc40  MOV RDI,R12
048abc43  XOR ESI,ESI
048abc45  CALL 0x0eec74c0
048abc4a  XOR EAX,EAX
048abc4c  MOV RDX,RBP
048abc4f  JMP 0x048abc70
048abc51  TEST byte ptr [RDX],0x1
048abc54  JNZ 0x048abde7
048abc5a  MOV RAX,qword ptr [RDX + 0x10]
048abc5e  MOV qword ptr [R15 + 0x10],RAX
048abc62  MOVUPS XMM0,xmmword ptr [RDX]
048abc65  MOVUPS xmmword ptr [R15],XMM0
048abc69  JMP 0x048abdfa
048abc6e  XOR EAX,EAX
048abc70  MOV RCX,RBX
048abc73  SUB RCX,R13
048abc76  MOV qword ptr [RSP],RAX
048abc7a  ADD RCX,RAX
048abc7d  MOV qword ptr [RSP + 0x10],RCX
048abc82  MOV qword ptr [RSP + 0x8],RCX
048abc87  LEA RCX,[R15 + R15*0x2]
048abc8b  LEA RAX,[RAX + RCX*0x8]
048abc8f  MOV qword ptr [RSP + 0x18],RAX
048abc94  MOV RDI,RSP
048abc97  MOV RSI,RDX
048abc9a  CALL 0x048abe40
048abc9f  MOV R12,qword ptr [RSP + 0x8]
048abca4  MOV RDI,qword ptr [RSP + 0x10]
048abca9  MOV RDX,qword ptr [R14 + 0x8]
048abcad  SUB RDX,RBX
048abcb0  MOV RSI,RBX
048abcb3  CALL 0x0eee2f00
048abcb8  MOV RAX,qword ptr [R14 + 0x8]
048abcbc  SUB RAX,RBX
048abcbf  ADD qword ptr [RSP + 0x10],RAX
048abcc4  MOV qword ptr [R14 + 0x8],RBX
048abcc8  MOV R15,qword ptr [RSP + 0x8]
048abccd  MOV RSI,qword ptr [R14]
048abcd0  SUB RBX,RSI
048abcd3  SUB R15,RBX
048abcd6  MOV RDI,R15
048abcd9  MOV RDX,RBX
048abcdc  CALL 0x0eee2f00
048abce1  MOV RDI,qword ptr [R14]
048abce4  MOV qword ptr [R14],R15
048abce7  MOV qword ptr [RSP + 0x8],RDI
048abcec  MOV RSI,qword ptr [R14 + 0x10]
048abcf0  MOVUPS XMM0,xmmword ptr [RSP + 0x10]
048abcf5  MOV qword ptr [RSP + 0x10],RDI
048abcfa  MOVUPS xmmword ptr [R14 + 0x8],XMM0
048abcff  MOV qword ptr [RSP + 0x18],RSI
048abd04  MOV qword ptr [RSP],RDI
048abd08  TEST RDI,RDI
048abd0b  JZ 0x048abd15
048abd0d  SUB RSI,RDI
048abd10  CALL 0x0412a280
048abd15  MOV RBX,R12
048abd18  JMP 0x048abe02
048abd1d  MOV RAX,qword ptr [RDX + 0x8]
048abd21  MOV RSI,qword ptr [RDX + 0x10]
048abd25  MOV RDI,RSP
048abd28  MOV RDX,RAX
048abd2b  CALL 0x0412e5e0
048abd30  MOV R15,qword ptr [R14 + 0x8]
048abd34  LEA RAX,[RBX + 0x18]
048abd38  LEA R12,[R15 + -0x18]
048abd3c  MOV RCX,R15
048abd3f  CMP R12,R15
048abd42  JNC 0x048abd6b
048abd44  LEA RCX,[R15 + 0x18]
048abd48  MOV RDX,qword ptr [R12 + 0x10]
048abd4d  MOV qword ptr [R15 + 0x10],RDX
048abd51  MOVUPS XMM0,xmmword ptr [R12]
048abd56  MOVUPS xmmword ptr [R15],XMM0
048abd5a  XORPS XMM0,XMM0
048abd5d  MOVUPS xmmword ptr [R12],XMM0
048abd62  MOV qword ptr [R12 + 0x10],0x0
048abd6b  MOV qword ptr [R14 + 0x8],RCX
048abd6f  CMP R15,RAX
048abd72  JZ 0x048abdc0
048abd74  ADD R15,-0x18
048abd78  JMP 0x048abda8
048abd80  LEA RAX,[R12 + -0x18]
048abd85  MOV RCX,qword ptr [RAX + 0x10]
048abd89  MOV qword ptr [R15 + 0x10],RCX
048abd8d  MOVUPS XMM0,xmmword ptr [RAX]
048abd90  MOVUPS xmmword ptr [R15],XMM0
048abd94  MOV word ptr [R12 + -0x18],0x0
048abd9c  ADD R15,-0x18
048abda0  MOV R12,RAX
048abda3  CMP RAX,RBX
048abda6  JZ 0x048abdc0
048abda8  TEST byte ptr [R15],0x1
048abdac  JZ 0x048abd80
048abdae  MOV RSI,qword ptr [R15]
048abdb1  MOV RDI,qword ptr [R15 + 0x10]
048abdb5  AND RSI,-0x2
048abdb9  CALL 0x0412a280
048abdbe  JMP 0x048abd80
048abdc0  TEST byte ptr [RBX],0x1
048abdc3  JZ 0x048abdd5
048abdc5  MOV RSI,qword ptr [RBX]
048abdc8  MOV RDI,qword ptr [RBX + 0x10]
048abdcc  AND RSI,-0x2
048abdd0  CALL 0x0412a280
048abdd5  MOV RAX,qword ptr [RSP + 0x10]
048abdda  MOV qword ptr [RBX + 0x10],RAX
048abdde  MOVAPS XMM0,xmmword ptr [RSP]
048abde2  MOVUPS xmmword ptr [RBX],XMM0
048abde5  JMP 0x048abe02
048abde7  MOV RAX,qword ptr [RDX + 0x8]
048abdeb  MOV RSI,qword ptr [RDX + 0x10]
048abdef  MOV RDI,R15
048abdf2  MOV RDX,RAX
048abdf5  CALL 0x0412e5e0
048abdfa  ADD R15,0x18
048abdfe  MOV qword ptr [R14 + 0x8],R15
048abe02  MOV RAX,RBX
048abe05  ADD RSP,0x28
048abe09  POP RBX
048abe0a  POP R12
048abe0c  POP R13
048abe0e  POP R14
048abe10  POP R15
048abe12  POP RBP
048abe13  RET
048abe14  CALL 0x0488efe0
048abe19  CALL 0x04882eb0
048abe1e  MOV qword ptr [R14 + 0x8],R15
048abe22  MOV RDI,RAX
048abe25  CALL 0x0eee2d70
048abe2a  MOV RBX,RAX
048abe2d  MOV RDI,RSP
048abe30  CALL 0x048abaf0
048abe35  MOV RDI,RBX
048abe38  CALL 0x0eee2d70
048abe3d  INT3
```
