# FUN_0c44fd30 (disassembly)

```
0c44fd30  PUSH R15
0c44fd32  PUSH R14
0c44fd34  PUSH R12
0c44fd36  PUSH RBX
0c44fd37  SUB RSP,0x108
0c44fd3e  MOV RBX,RDI
0c44fd41  MOV R14,qword ptr [RSI]
0c44fd44  MOV qword ptr [RSI],0x0
0c44fd4b  MOV RDI,qword ptr [RDI + 0x10]
0c44fd4f  MOV qword ptr [RBX + 0x10],R14
0c44fd53  TEST RDI,RDI
0c44fd56  JZ 0x0c44fd62
0c44fd58  MOV RAX,qword ptr [RDI]
0c44fd5b  CALL qword ptr [RAX + 0x8]
0c44fd5e  MOV R14,qword ptr [RBX + 0x10]
0c44fd62  TEST R14,R14
0c44fd65  JZ 0x0c44fe66
0c44fd6b  LEA RAX,[0x1ce48c1]
0c44fd72  MOV qword ptr [RSP + 0x8],RAX
0c44fd77  MOV qword ptr [RSP + 0x10],0xb
0c44fd80  LEA RDI,[R14 + 0x8]
0c44fd84  LEA RSI,[RSP + 0x8]
0c44fd89  CALL 0x0d6c9880
0c44fd8e  ADD R14,0x10
0c44fd92  CMP RAX,R14
0c44fd95  JZ 0x0c44fe66
0c44fd9b  CMP dword ptr [RAX + 0x60],0xa
0c44fd9f  JNZ 0x0c44fe66
0c44fda5  ADD RAX,0x38
0c44fda9  LEA R14,[RSP + 0x8]
0c44fdae  MOV RDI,R14
0c44fdb1  MOV R15,RAX
0c44fdb4  CALL 0x0c44ed40
0c44fdb9  LEA R12,[0xf36e858]
0c44fdc0  MOV qword ptr [RSP + 0x8],R12
0c44fdc5  MOV RDI,R14
0c44fdc8  MOV RSI,R15
0c44fdcb  CALL 0x0c45ade0
0c44fdd0  MOV RAX,qword ptr [RSP + 0x10]
0c44fdd5  TEST RAX,RAX
0c44fdd8  JZ 0x0c44fe8f
0c44fdde  MOV RDI,qword ptr [RAX]
0c44fde1  TEST RDI,RDI
0c44fde4  JZ 0x0c44fe8f
0c44fdea  MOV RAX,qword ptr [RDI]
0c44fded  LEA RSI,[RSP + 0x8]
0c44fdf2  CALL qword ptr [RAX + 0x358]
0c44fdf8  MOV RAX,qword ptr [RSP + 0x20]
0c44fdfd  LEA RCX,[RSP + 0x28]
0c44fe02  MOVZX EDX,word ptr [RSP + 0x28]
0c44fe07  LEA RSI,[RAX + 0x128]
0c44fe0e  CMP EDX,0x7fff
0c44fe14  CMOVZ RSI,RCX
0c44fe18  TEST RAX,RAX
0c44fe1b  CMOVZ RSI,RCX
0c44fe1f  CMP word ptr [RSI],0x7fff
0c44fe24  JNZ 0x0c44fe2d
0c44fe26  MOV word ptr [RSP + 0x28],0x0
0c44fe2d  MOV RAX,qword ptr [RSP + 0x10]
0c44fe32  TEST RAX,RAX
0c44fe35  JZ 0x0c44fe8f
0c44fe37  CMP qword ptr [RAX],0x0
0c44fe3b  JZ 0x0c44fe8f
0c44fe3d  LEA RDI,[RSP + 0x88]
0c44fe45  CALL 0x0c44ed40
0c44fe4a  MOV qword ptr [RSP + 0x88],R12
0c44fe52  LEA RDI,[RSP + 0x88]
0c44fe5a  LEA RSI,[RSP + 0x8]
0c44fe5f  CALL 0x0c44f4e0
0c44fe64  JMP 0x0c44fea4
0c44fe66  MOV RDI,qword ptr [RBX + 0x78]
0c44fe6a  MOV qword ptr [RBX + 0x78],0x0
0c44fe72  TEST RDI,RDI
0c44fe75  JZ 0x0c450064
0c44fe7b  MOV RAX,qword ptr [RDI]
0c44fe7e  ADD RSP,0x108
0c44fe85  POP RBX
0c44fe86  POP R12
0c44fe88  POP R14
0c44fe8a  POP R15
0c44fe8c  JMP qword ptr [RAX + 0x8]
0c44fe8f  LEA RDI,[RSP + 0x88]
0c44fe97  CALL 0x0c44ed40
0c44fe9c  MOV qword ptr [RSP + 0x88],R12
0c44fea4  LEA R15,[0xf36e918]
0c44feab  MOV qword ptr [RSP + 0x8],R15
0c44feb0  MOV RDI,qword ptr [RSP + 0x80]
0c44feb8  MOV qword ptr [RSP + 0x80],0x0
0c44fec4  TEST RDI,RDI
0c44fec7  JZ 0x0c44fecf
0c44fec9  MOV RAX,qword ptr [RDI]
0c44fecc  CALL qword ptr [RAX + 0x8]
0c44fecf  MOV RDI,qword ptr [RSP + 0x58]
0c44fed4  TEST RDI,RDI
0c44fed7  JZ 0x0c44feeb
0c44fed9  MOV qword ptr [RSP + 0x60],RDI
0c44fede  MOV RSI,qword ptr [RSP + 0x68]
0c44fee3  SUB RSI,RDI
0c44fee6  CALL 0x0412a280
0c44feeb  MOV RDI,qword ptr [RSP + 0x38]
0c44fef0  TEST RDI,RDI
0c44fef3  JZ 0x0c44ff07
0c44fef5  MOV qword ptr [RSP + 0x40],RDI
0c44fefa  MOV RSI,qword ptr [RSP + 0x48]
0c44feff  SUB RSI,RDI
0c44ff02  CALL 0x0412a280
0c44ff07  MOV RDI,qword ptr [RSP + 0x18]
0c44ff0c  MOV qword ptr [RSP + 0x18],0x0
0c44ff15  TEST RDI,RDI
0c44ff18  JZ 0x0c44ff20
0c44ff1a  MOV RAX,qword ptr [RDI]
0c44ff1d  CALL qword ptr [RAX + 0x8]
0c44ff20  MOV RAX,qword ptr [RSP + 0x10]
0c44ff25  TEST RAX,RAX
0c44ff28  JZ 0x0c44ff4f
0c44ff2a  DEC.LOCK dword ptr [RAX + 0xc]
0c44ff2e  MOV ECX,dword ptr [RAX + 0xc]
0c44ff31  TEST ECX,ECX
0c44ff33  JG 0x0c44ff4f
0c44ff35  CMP qword ptr [RAX],0x0
0c44ff39  JNZ 0x0c44ff4f
0c44ff3b  MOV RDI,qword ptr [RSP + 0x10]
0c44ff40  TEST RDI,RDI
0c44ff43  JZ 0x0c44ff4f
0c44ff45  MOV ESI,0x10
0c44ff4a  CALL 0x0412a280
0c44ff4f  LEA RDI,[0xf5463b0]
0c44ff56  MOV RAX,qword ptr [0x0f5463b0]
0c44ff5d  MOV ESI,0x80
0c44ff62  CALL qword ptr [RAX + 0x10]
0c44ff65  MOV R14,RAX
0c44ff68  TEST RAX,RAX
0c44ff6b  JZ 0x0c450073
0c44ff71  MOV RDI,R14
0c44ff74  CALL 0x0c44ed40
0c44ff79  MOV qword ptr [R14],R12
0c44ff7c  LEA RSI,[RSP + 0x88]
0c44ff84  MOV RDI,R14
0c44ff87  CALL 0x0c44f4e0
0c44ff8c  MOV RDI,qword ptr [RBX + 0x78]
0c44ff90  MOV qword ptr [RBX + 0x78],R14
0c44ff94  TEST RDI,RDI
0c44ff97  JZ 0x0c44ff9f
0c44ff99  MOV RAX,qword ptr [RDI]
0c44ff9c  CALL qword ptr [RAX + 0x8]
0c44ff9f  MOV qword ptr [RSP + 0x88],R15
0c44ffa7  MOV RDI,qword ptr [RSP + 0x100]
0c44ffaf  MOV qword ptr [RSP + 0x100],0x0
0c44ffbb  TEST RDI,RDI
0c44ffbe  JZ 0x0c44ffc6
0c44ffc0  MOV RAX,qword ptr [RDI]
0c44ffc3  CALL qword ptr [RAX + 0x8]
0c44ffc6  MOV RDI,qword ptr [RSP + 0xd8]
0c44ffce  TEST RDI,RDI
0c44ffd1  JZ 0x0c44ffeb
0c44ffd3  MOV qword ptr [RSP + 0xe0],RDI
0c44ffdb  MOV RSI,qword ptr [RSP + 0xe8]
0c44ffe3  SUB RSI,RDI
0c44ffe6  CALL 0x0412a280
0c44ffeb  MOV RDI,qword ptr [RSP + 0xb8]
0c44fff3  TEST RDI,RDI
0c44fff6  JZ 0x0c450010
0c44fff8  MOV qword ptr [RSP + 0xc0],RDI
0c450000  MOV RSI,qword ptr [RSP + 0xc8]
0c450008  SUB RSI,RDI
0c45000b  CALL 0x0412a280
0c450010  MOV RDI,qword ptr [RSP + 0x98]
0c450018  MOV qword ptr [RSP + 0x98],0x0
0c450024  TEST RDI,RDI
0c450027  JZ 0x0c45002f
0c450029  MOV RAX,qword ptr [RDI]
0c45002c  CALL qword ptr [RAX + 0x8]
0c45002f  MOV RAX,qword ptr [RSP + 0x90]
0c450037  TEST RAX,RAX
0c45003a  JZ 0x0c450064
0c45003c  DEC.LOCK dword ptr [RAX + 0xc]
0c450040  MOV ECX,dword ptr [RAX + 0xc]
0c450043  TEST ECX,ECX
0c450045  JG 0x0c450064
0c450047  CMP qword ptr [RAX],0x0
0c45004b  JNZ 0x0c450064
0c45004d  MOV RDI,qword ptr [RSP + 0x90]
0c450055  TEST RDI,RDI
0c450058  JZ 0x0c450064
0c45005a  MOV ESI,0x10
0c45005f  CALL 0x0412a280
0c450064  ADD RSP,0x108
0c45006b  POP RBX
0c45006c  POP R12
0c45006e  POP R14
0c450070  POP R15
0c450072  RET
0c450073  MOV EDI,0x80
0c450078  XOR ESI,ESI
0c45007a  CALL 0x0eec74c0
0c45007f  JMP 0x0c44ff71
```
