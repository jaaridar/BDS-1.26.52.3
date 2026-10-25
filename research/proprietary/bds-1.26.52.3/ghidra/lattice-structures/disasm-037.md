# FUN_0eee07b0 (disassembly)

```
0eee07b0  PUSH RBP
0eee07b1  PUSH R15
0eee07b3  PUSH R14
0eee07b5  PUSH R13
0eee07b7  PUSH R12
0eee07b9  PUSH RBX
0eee07ba  SUB RSP,0x48
0eee07be  MOV R14,RSI
0eee07c1  MOV RBX,RDI
0eee07c4  MOV qword ptr [RDI],RSI
0eee07c7  XORPS XMM0,XMM0
0eee07ca  MOVUPS xmmword ptr [RDI + 0x8],XMM0
0eee07ce  MOV qword ptr [RDI + 0x18],0x0
0eee07d6  MOV RAX,qword ptr [0x0f5463b0]
0eee07dd  LEA RDI,[0xf5463b0]
0eee07e4  MOV ESI,0x2000
0eee07e9  CALL qword ptr [RAX + 0x10]
0eee07ec  TEST RAX,RAX
0eee07ef  JZ 0x0eee0aa7
0eee07f5  MOV qword ptr [RBX + 0x8],RAX
0eee07f9  MOV R15,RAX
0eee07fc  ADD R15,0x2000
0eee0803  MOV qword ptr [RBX + 0x18],R15
0eee0807  MOV EDX,0x2000
0eee080c  MOV RDI,RAX
0eee080f  XOR ESI,ESI
0eee0811  CALL 0x0eee2dd0
0eee0816  MOV qword ptr [RBX + 0x10],R15
0eee081a  MOV RBP,qword ptr [R14]
0eee081d  MOV RDI,RBP
0eee0820  CALL 0x0412d680
0eee0825  MOV R14,qword ptr [RBP + 0x40]
0eee0829  MOV RDI,qword ptr [RBP + 0x48]
0eee082d  MOV RAX,RDI
0eee0830  MOV R15,R14
0eee0833  SUB RAX,R14
0eee0836  JZ 0x0eee0878
0eee0838  MOV RCX,RAX
0eee083b  SAR RCX,0x3
0eee083f  MOV R15,R14
0eee0842  NOP word ptr CS:[RAX + RAX*0x1]
0eee0850  MOV RDX,RCX
0eee0853  SHR RDX,0x1
0eee0856  MOV RSI,RDX
0eee0859  NOT RSI
0eee085c  ADD RSI,RCX
0eee085f  CMP qword ptr [R15 + RDX*0x8],RBX
0eee0863  LEA RCX,[R15 + RDX*0x8 + 0x8]
0eee0868  CMOVNC RSI,RDX
0eee086c  CMOVC R15,RCX
0eee0870  MOV RCX,RSI
0eee0873  TEST RSI,RSI
0eee0876  JNZ 0x0eee0850
0eee0878  CMP R15,RDI
0eee087b  JZ 0x0eee08ce
0eee087d  CMP RBX,qword ptr [R15]
0eee0880  JNC 0x0eee0a45
0eee0886  MOV RCX,qword ptr [RBP + 0x50]
0eee088a  CMP RDI,RCX
0eee088d  JNC 0x0eee08e7
0eee088f  MOV RAX,R15
0eee0892  ADD RAX,0x8
0eee0896  LEA RDX,[RDI + -0x8]
0eee089a  MOV RCX,RDI
0eee089d  CMP RDX,RDI
0eee08a0  JNC 0x0eee08ac
0eee08a2  LEA RCX,[RDI + 0x8]
0eee08a6  MOV RDX,qword ptr [RDX]
0eee08a9  MOV qword ptr [RDI],RDX
0eee08ac  MOV qword ptr [RBP + 0x48],RCX
0eee08b0  CMP RDI,RAX
0eee08b3  JZ 0x0eee08c6
0eee08b5  MOV RDX,RDI
0eee08b8  SUB RDX,RAX
0eee08bb  SUB RDI,RDX
0eee08be  MOV RSI,R15
0eee08c1  CALL 0x0eee2ee0
0eee08c6  MOV qword ptr [R15],RBX
0eee08c9  JMP 0x0eee0a45
0eee08ce  MOV RCX,qword ptr [RBP + 0x50]
0eee08d2  CMP RDI,RCX
0eee08d5  JNC 0x0eee08e7
0eee08d7  MOV qword ptr [RDI],RBX
0eee08da  ADD RDI,0x8
0eee08de  MOV qword ptr [RBP + 0x48],RDI
0eee08e2  JMP 0x0eee0a45
0eee08e7  MOV R8,R15
0eee08ea  SUB R8,R14
0eee08ed  SAR RAX,0x3
0eee08f1  INC RAX
0eee08f4  MOV RDX,RAX
0eee08f7  SHR RDX,0x3d
0eee08fb  MOV qword ptr [RSP + 0x10],RBP
0eee0900  JNZ 0x0eee0ae3
0eee0906  SUB RCX,R14
0eee0909  MOV R13,RCX
0eee090c  SAR R13,0x2
0eee0910  CMP R13,RAX
0eee0913  CMOVBE R13,RAX
0eee0917  LEA RDX,[RBP + 0x40]
0eee091b  MOV RAX,0x1fffffffffffffff
0eee0925  MOV RSI,0x7ffffffffffffff8
0eee092f  CMP RCX,RSI
0eee0932  CMOVNC R13,RAX
0eee0936  MOV qword ptr [RSP + 0x40],RDX
0eee093b  TEST R13,R13
0eee093e  MOV qword ptr [RSP + 0x18],RDI
0eee0943  JZ 0x0eee097e
0eee0945  MOV qword ptr [RSP + 0x8],R8
0eee094a  CMP R13,RAX
0eee094d  JA 0x0eee0ae8
0eee0953  SHL R13,0x3
0eee0957  LEA RDI,[0xf5463b0]
0eee095e  MOV RAX,qword ptr [0x0f5463b0]
0eee0965  MOV RSI,R13
0eee0968  CALL qword ptr [RAX + 0x10]
0eee096b  MOV R8,qword ptr [RSP + 0x8]
0eee0970  TEST RAX,RAX
0eee0973  JZ 0x0eee0abe
0eee0979  MOV R12,RAX
0eee097c  JMP 0x0eee0984
0eee097e  XOR R13D,R13D
0eee0981  XOR R12D,R12D
0eee0984  MOV qword ptr [RSP + 0x20],R12
0eee0989  LEA RBP,[R12 + R8*0x1]
0eee098d  MOV qword ptr [RSP + 0x30],RBP
0eee0992  MOV qword ptr [RSP + 0x28],RBP
0eee0997  MOV qword ptr [RSP + 0x8],R12
0eee099c  LEA RAX,[R12 + R13*0x1]
0eee09a0  MOV RCX,RAX
0eee09a3  MOV qword ptr [RSP + 0x38],RAX
0eee09a8  CMP R8,R13
0eee09ab  JNZ 0x0eee09dd
0eee09ad  CMP R15,R14
0eee09b0  MOV R12,qword ptr [RSP + 0x18]
0eee09b5  JZ 0x0eee0a5b
0eee09bb  SAR R8,0x3
0eee09bf  LEA RAX,[R8 + 0x1]
0eee09c3  SHR RAX,0x3f
0eee09c7  ADD RAX,R8
0eee09ca  INC RAX
0eee09cd  SHL RAX,0x2
0eee09d1  AND RAX,-0x8
0eee09d5  SUB RBP,RAX
0eee09d8  MOV R13,RCX
0eee09db  JMP 0x0eee09e5
0eee09dd  MOV R13,RCX
0eee09e0  MOV R12,qword ptr [RSP + 0x18]
0eee09e5  MOV qword ptr [RBP],RBX
0eee09e9  LEA RDI,[RBP + 0x8]
0eee09ed  SUB R12,R15
0eee09f0  MOV RSI,R15
0eee09f3  MOV RDX,R12
0eee09f6  CALL 0x0eee2f00
0eee09fb  LEA RBX,[R12 + RBP*0x1]
0eee09ff  ADD RBX,0x8
0eee0a03  MOV R14,qword ptr [RSP + 0x10]
0eee0a08  MOV qword ptr [R14 + 0x48],R15
0eee0a0c  MOV RSI,qword ptr [R14 + 0x40]
0eee0a10  SUB R15,RSI
0eee0a13  SUB RBP,R15
0eee0a16  MOV RDI,RBP
0eee0a19  MOV RDX,R15
0eee0a1c  CALL 0x0eee2f00
0eee0a21  MOV RDI,qword ptr [R14 + 0x40]
0eee0a25  MOV RSI,qword ptr [R14 + 0x50]
0eee0a29  MOV qword ptr [R14 + 0x40],RBP
0eee0a2d  MOV RBP,R14
0eee0a30  MOV qword ptr [R14 + 0x48],RBX
0eee0a34  MOV qword ptr [R14 + 0x50],R13
0eee0a38  TEST RDI,RDI
0eee0a3b  JZ 0x0eee0a45
0eee0a3d  SUB RSI,RDI
0eee0a40  CALL 0x0412a280
0eee0a45  MOV RDI,RBP
0eee0a48  ADD RSP,0x48
0eee0a4c  POP RBX
0eee0a4d  POP R12
0eee0a4f  POP R13
0eee0a51  POP R14
0eee0a53  POP R15
0eee0a55  POP RBP
0eee0a56  JMP 0x0412d6b0
0eee0a5b  MOV R14,R8
0eee0a5e  LEA RDI,[0xf5463b0]
0eee0a65  MOV RAX,qword ptr [0x0f5463b0]
0eee0a6c  MOV ESI,0x8
0eee0a71  CALL qword ptr [RAX + 0x10]
0eee0a74  MOV RBP,RAX
0eee0a77  TEST RAX,RAX
0eee0a7a  JZ 0x0eee0ad5
0eee0a7c  MOV R13,RBP
0eee0a7f  ADD R13,0x8
0eee0a83  MOV RDI,qword ptr [RSP + 0x8]
0eee0a88  TEST RDI,RDI
0eee0a8b  JZ 0x0eee09e5
0eee0a91  MOV RSI,R14
0eee0a94  CALL 0x0412a280
0eee0a99  MOV RAX,qword ptr [RSP + 0x10]
0eee0a9e  MOV R12,qword ptr [RAX + 0x48]
0eee0aa2  JMP 0x0eee09e5
0eee0aa7  MOV EDI,0x2000
0eee0aac  XOR ESI,ESI
0eee0aae  MOV R15,RAX
0eee0ab1  CALL 0x0eec74c0
0eee0ab6  MOV RAX,R15
0eee0ab9  JMP 0x0eee07f5
0eee0abe  XOR R12D,R12D
0eee0ac1  MOV RDI,R13
0eee0ac4  XOR ESI,ESI
0eee0ac6  CALL 0x0eec74c0
0eee0acb  MOV R8,qword ptr [RSP + 0x8]
0eee0ad0  JMP 0x0eee0984
0eee0ad5  MOV EDI,0x8
0eee0ada  XOR ESI,ESI
0eee0adc  CALL 0x0eec74c0
0eee0ae1  JMP 0x0eee0a7c
0eee0ae3  CALL 0x0eee2980
0eee0ae8  CALL 0x04882eb0
0eee0aed  MOV R15,RAX
0eee0af0  LEA RDI,[RSP + 0x20]
0eee0af5  CALL 0x0eee2940
0eee0afa  JMP 0x0eee0aff
0eee0aff  MOV RDI,qword ptr [RSP + 0x10]
0eee0b04  CALL 0x0412d6b0
0eee0b09  JMP 0x0eee0b0e
0eee0b0e  LEA RAX,[RBX + 0x8]
0eee0b12  MOV RDI,qword ptr [RAX]
0eee0b15  TEST RDI,RDI
0eee0b18  JZ 0x0eee0b2a
0eee0b1a  MOV qword ptr [RBX + 0x10],RDI
0eee0b1e  MOV RSI,qword ptr [RBX + 0x18]
0eee0b22  SUB RSI,RDI
0eee0b25  CALL 0x0412a280
0eee0b2a  MOV RDI,R15
0eee0b2d  CALL 0x0eee2d70
0eee0b32  INT3
0eee2d60  JMP qword ptr [0x0f546448]
```
