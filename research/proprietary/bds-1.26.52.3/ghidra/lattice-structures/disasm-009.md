# FUN_04fbbda0 (disassembly)

```
04fbbb00  MOV RSI,qword ptr [RSP + 0x20]
04fbbb05  MOV RDI,qword ptr [RSP + 0x30]
04fbbb0a  AND RSI,-0x2
04fbbb0e  CALL 0x0412a280
04fbbb13  MOV RDI,R15
04fbbb16  CALL 0x04862ba0
04fbbb1b  MOV RSI,qword ptr [R14 + 0x10]
04fbbb1f  LEA R12,[RSP + 0x70]
04fbbb24  MOV RDI,R12
04fbbb27  CALL 0x048655b0
04fbbb2c  MOV RDI,R15
04fbbb2f  MOV RSI,R12
04fbbb32  CALL 0x04862c80
04fbbb37  MOV EBX,EAX
04fbbb39  MOV RDI,R12
04fbbb3c  CALL 0x04862b40
04fbbb41  TEST BL,BL
04fbbb43  JNZ 0x04fbbdcd
04fbbb49  MOV RDI,R15
04fbbb4c  CALL 0x04862ca0
04fbbb51  MOV R12,RAX
04fbbb54  MOV RDI,RAX
04fbbb57  CALL 0x0eee2e90
04fbbb5c  CMP RAX,-0x8
04fbbb60  JNC 0x04fbbf52
04fbbb66  MOV RBP,RAX
04fbbb69  CMP RAX,0x17
04fbbb6d  JNC 0x04fbbb90
04fbbb6f  LEA EAX,[RBP*0x2]
04fbbb76  MOV byte ptr [RSP + 0x20],AL
04fbbb7a  LEA R13,[RSP + 0x21]
04fbbb7f  TEST RBP,RBP
04fbbb82  JNZ 0x04fbbbdb
04fbbb84  JMP 0x04fbbbe9
04fbbb90  MOV RAX,RBP
04fbbb93  OR RAX,0x7
04fbbb97  LEA RBX,[RAX + 0x1]
04fbbb9b  CMP RAX,0x17
04fbbb9f  MOV EAX,0x1a
04fbbba4  CMOVZ RBX,RAX
04fbbba8  MOV RAX,qword ptr [0x0f5463b0]
04fbbbaf  LEA RDI,[0xf5463b0]
04fbbbb6  MOV RSI,RBX
04fbbbb9  CALL qword ptr [RAX + 0x10]
04fbbbbc  MOV R13,RAX
04fbbbbf  TEST RAX,RAX
04fbbbc2  JZ 0x04fbbdbe
04fbbbc8  MOV qword ptr [RSP + 0x30],R13
04fbbbcd  OR RBX,0x1
04fbbbd1  MOV qword ptr [RSP + 0x20],RBX
04fbbbd6  MOV qword ptr [RSP + 0x28],RBP
04fbbbdb  MOV RDI,R13
04fbbbde  MOV RSI,R12
04fbbbe1  MOV RDX,RBP
04fbbbe4  CALL 0x0eee2ee0
04fbbbe9  MOV byte ptr [R13 + RBP*0x1],0x0
04fbbbef  MOVZX EAX,byte ptr [RSP + 0x20]
04fbbbf4  MOV ECX,EAX
04fbbbf6  SHR ECX,0x1
04fbbbf8  TEST AL,0x1
04fbbbfa  MOV RAX,qword ptr [RSP + 0x30]
04fbbbff  LEA RDX,[RSP + 0x21]
04fbbc04  CMOVZ RAX,RDX
04fbbc08  CMOVNZ RCX,qword ptr [RSP + 0x28]
04fbbc0e  MOV qword ptr [RSP + 0x70],RAX
04fbbc13  MOV qword ptr [RSP + 0x78],RCX
04fbbc18  MOV byte ptr [RSP + 0x80],0x1
04fbbc20  MOV qword ptr [RSP + 0x68],0x0
04fbbc29  MOV RAX,qword ptr [RSP + 0x80]
04fbbc31  MOV qword ptr [RSP + 0x10],RAX
04fbbc36  MOVUPS XMM0,xmmword ptr [RSP + 0x70]
04fbbc3b  MOVUPS xmmword ptr [RSP],XMM0
04fbbc3f  LEA RDI,[RSP + 0xa0]
04fbbc47  LEA RSI,[RSP + 0x68]
04fbbc4c  CALL 0x0eeb79f0
04fbbc51  MOV RSI,qword ptr [RSP + 0x68]
04fbbc56  BT RSI,0x37
04fbbc5b  JNC 0x04fbbc7f
04fbbc5d  MOV RAX,-0xff000000000001
04fbbc67  AND RSI,RAX
04fbbc6a  ADD RSI,-0x8
04fbbc6e  MOV RAX,qword ptr [0x0f5463b0]
04fbbc75  LEA RDI,[0xf5463b0]
04fbbc7c  CALL qword ptr [RAX + 0x28]
04fbbc7f  MOV RDI,R15
04fbbc82  CALL 0x04862b80
04fbbc87  MOV RDI,qword ptr [RSP + 0x40]
04fbbc8c  MOV RSI,R14
04fbbc8f  LEA RDX,[RSP + 0x20]
04fbbc94  MOV RCX,RAX
04fbbc97  MOV R8D,dword ptr [RSP + 0x4c]
04fbbc9c  CALL 0x04fbd340
04fbbca1  MOV RBX,RAX
04fbbca4  TEST RAX,RAX
04fbbca7  JZ 0x04fbbd00
04fbbca9  MOV EBP,dword ptr [R14 + 0x8]
04fbbcad  MOV RDI,R15
04fbbcb0  CALL 0x04862b80
04fbbcb5  MOV R9,qword ptr [RBX]
04fbbcb8  MOV RDI,RBX
04fbbcbb  MOV ESI,EBP
04fbbcbd  MOV RDX,RAX
04fbbcc0  MOV RCX,qword ptr [RSP + 0x88]
04fbbcc8  MOV R8D,dword ptr [RSP + 0x4c]
04fbbccd  CALL qword ptr [R9 + 0x18]
04fbbcd1  AND AL,byte ptr [RSP + 0x1c]
04fbbcd5  MOV dword ptr [RSP + 0x1c],EAX
04fbbcd9  LEA RDI,[RSP + 0xa0]
04fbbce1  CALL 0x0eeb81b0
04fbbce6  TEST byte ptr [RSP + 0x20],0x1
04fbbceb  JZ 0x04fbbb13
04fbbcf1  JMP 0x04fbbb00
04fbbd00  CMP byte ptr [RSP + 0x3c],0x0
04fbbd05  JZ 0x04fbbd30
04fbbd07  MOV R12,qword ptr [RSP + 0x58]
04fbbd0c  CMP R12,qword ptr [RSP + 0x60]
04fbbd11  JNC 0x04fbbd55
04fbbd13  TEST byte ptr [RSP + 0x20],0x1
04fbbd18  JNZ 0x04fbbd86
04fbbd1a  MOV RAX,qword ptr [RSP + 0x30]
04fbbd1f  MOV qword ptr [R12 + 0x10],RAX
04fbbd24  MOVUPS XMM0,xmmword ptr [RSP + 0x20]
04fbbd29  MOVUPS xmmword ptr [R12],XMM0
04fbbd2e  JMP 0x04fbbd98
04fbbd30  MOV dword ptr [RSP + 0x1c],0x0
04fbbd38  LEA RDI,[RSP + 0xa0]
04fbbd40  CALL 0x0eeb81b0
04fbbd45  TEST byte ptr [RSP + 0x20],0x1
04fbbd4a  JNZ 0x04fbbb00
04fbbd50  JMP 0x04fbbb13
04fbbd55  LEA RDI,[RSP + 0x50]
04fbbd5a  LEA RSI,[RSP + 0x20]
04fbbd5f  CALL 0x04909a40
04fbbd64  MOV qword ptr [RSP + 0x58],RAX
04fbbd69  LEA RDI,[RSP + 0xa0]
04fbbd71  CALL 0x0eeb81b0
04fbbd76  TEST byte ptr [RSP + 0x20],0x1
04fbbd7b  JZ 0x04fbbb13
04fbbd81  JMP 0x04fbbb00
04fbbd86  MOV RDX,qword ptr [RSP + 0x28]
04fbbd8b  MOV RSI,qword ptr [RSP + 0x30]
04fbbd90  MOV RDI,R12
04fbbd93  CALL 0x0412e5e0
04fbbd98  ADD R12,0x18
04fbbda0  POP RAX
04fbbda1  LEA RDI,[RSP + 0xa0]
04fbbda9  CALL 0x0eeb81b0
04fbbdae  TEST byte ptr [RSP + 0x20],0x1
04fbbdb3  JZ 0x04fbbb13
04fbbdb9  JMP 0x04fbbb00
04fbbdbe  MOV RDI,RBX
04fbbdc1  XOR ESI,ESI
04fbbdc3  CALL 0x0eec74c0
04fbbdc8  JMP 0x04fbbbc8
04fbbdcd  LEA RDI,[RSP + 0x90]
04fbbdd5  CALL 0x04862b40
04fbbdda  CMP byte ptr [RSP + 0x3c],0x0
04fbbddf  JZ 0x04fbbe1f
04fbbde1  MOV RBX,qword ptr [RSP + 0x50]
04fbbde6  MOV R13,qword ptr [RSP + 0x58]
04fbbdeb  CMP R13,RBX
04fbbdee  JZ 0x04fbbe1f
04fbbdf0  MOV R15,qword ptr [R14 + 0x10]
04fbbdf4  LEA R12,[RSP + 0xb8]
04fbbdfc  NOP dword ptr [RAX]
04fbbe00  MOV RDI,R12
04fbbe03  MOV RSI,R15
04fbbe06  MOV RDX,RBX
04fbbe09  CALL 0x048650e0
04fbbe0e  MOV RDI,R12
04fbbe11  CALL 0x04863610
04fbbe16  ADD RBX,0x18
04fbbe1a  CMP RBX,R13
04fbbe1d  JNZ 0x04fbbe00
04fbbe1f  MOV RDI,qword ptr [R14 + 0x10]
04fbbe23  CALL 0x048641f0
04fbbe28  MOV EAX,EAX
04fbbe2a  MOV RCX,qword ptr [RSP + 0x40]
04fbbe2f  CMP qword ptr [RCX + 0x90],RAX
04fbbe36  JBE 0x04fbbe82
04fbbe38  MOV EBX,dword ptr [R14 + 0x8]
04fbbe3c  MOV RDI,qword ptr [R14 + 0x10]
04fbbe40  CALL 0x048641f0
04fbbe45  MOV dword ptr [RSP + 0x70],EAX
04fbbe49  MOV RAX,qword ptr [RSP + 0x40]
04fbbe4e  MOV EAX,dword ptr [RAX + 0x90]
04fbbe54  MOV dword ptr [RSP + 0x20],EAX
04fbbe58  LEA RCX,[0x11ec510]
04fbbe5f  LEA R8,[RSP + 0x70]
04fbbe64  LEA R9,[RSP + 0x20]
04fbbe69  MOV EDI,0x1
04fbbe6e  MOV ESI,0x3
04fbbe73  MOV EDX,EBX
04fbbe75  CALL 0x04b0a9a0
04fbbe7a  MOV dword ptr [RSP + 0x1c],0x0
04fbbe82  MOV RDI,qword ptr [R14 + 0x10]
04fbbe86  CALL 0x048641f0
04fbbe8b  MOV EAX,EAX
04fbbe8d  MOV RCX,qword ptr [RSP + 0x40]
04fbbe92  CMP qword ptr [RCX + 0x98],RAX
04fbbe99  JNC 0x04fbbee5
04fbbe9b  MOV EBX,dword ptr [R14 + 0x8]
04fbbe9f  MOV RDI,qword ptr [R14 + 0x10]
04fbbea3  CALL 0x048641f0
04fbbea8  MOV dword ptr [RSP + 0x70],EAX
04fbbeac  MOV RAX,qword ptr [RSP + 0x40]
04fbbeb1  MOV EAX,dword ptr [RAX + 0x98]
04fbbeb7  MOV dword ptr [RSP + 0x20],EAX
04fbbebb  LEA RCX,[0x145eaee]
04fbbec2  LEA R8,[RSP + 0x70]
04fbbec7  LEA R9,[RSP + 0x20]
04fbbecc  MOV EDI,0x1
04fbbed1  MOV ESI,0x3
04fbbed6  MOV EDX,EBX
04fbbed8  CALL 0x04b0ab40
04fbbedd  MOV dword ptr [RSP + 0x1c],0x0
04fbbee5  MOV RBX,qword ptr [RSP + 0x50]
04fbbeea  TEST RBX,RBX
04fbbeed  JZ 0x04fbbf3a
04fbbeef  MOV R14,qword ptr [RSP + 0x58]
04fbbef4  MOV RDI,RBX
04fbbef7  CMP RBX,R14
04fbbefa  JNZ 0x04fbbf09
04fbbefc  JMP 0x04fbbf28
04fbbf00  ADD R14,-0x18
04fbbf04  CMP R14,RBX
04fbbf07  JZ 0x04fbbf23
04fbbf09  TEST byte ptr [R14 + -0x18],0x1
04fbbf0e  JZ 0x04fbbf00
04fbbf10  MOV RSI,qword ptr [R14 + -0x18]
04fbbf14  MOV RDI,qword ptr [R14 + -0x8]
04fbbf18  AND RSI,-0x2
04fbbf1c  CALL 0x0412a280
04fbbf21  JMP 0x04fbbf00
04fbbf23  MOV RDI,qword ptr [RSP + 0x50]
04fbbf28  MOV qword ptr [RSP + 0x58],RBX
04fbbf2d  MOV RSI,qword ptr [RSP + 0x60]
04fbbf32  SUB RSI,RDI
04fbbf35  CALL 0x0412a280
04fbbf3a  MOV EAX,dword ptr [RSP + 0x1c]
04fbbf3e  AND AL,0x1
04fbbf40  ADD RSP,0xc8
04fbbf47  POP RBX
04fbbf48  POP R12
04fbbf4a  POP R13
04fbbf4c  POP R14
04fbbf4e  POP R15
04fbbf50  POP RBP
04fbbf51  RET
04fbbf52  CALL 0x04882e30
04fbbf57  JMP 0x04fbbf6d
04fbbf6d  MOV RBX,RAX
04fbbf70  LEA RDI,[RSP + 0x50]
04fbbf75  CALL 0x04886070
04fbbf7a  MOV RDI,RBX
04fbbf7d  CALL 0x0eee2d70
04fbbf82  MOV RDI,RAX
04fbbf85  CALL 0x04882e20
04fbbf8a  JMP 0x04fbbfae
04fbbfae  MOV RBX,RAX
04fbbfb1  JMP 0x04fbbfdd
04fbbfdd  LEA RDI,[RSP + 0x90]
04fbbfe5  CALL 0x04862b40
04fbbfea  LEA RDI,[RSP + 0x50]
04fbbfef  CALL 0x04886070
04fbbff4  MOV RDI,RBX
04fbbff7  CALL 0x0eee2d70
04fbbffc  INT3
```
