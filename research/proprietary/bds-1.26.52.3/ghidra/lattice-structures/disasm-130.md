# FUN_0eee14b0 (disassembly)

```
0eee14b0  PUSH R15
0eee14b2  PUSH R14
0eee14b4  PUSH RBX
0eee14b5  MOV EBX,EDI
0eee14b7  MOV RAX,qword ptr FS:[0x0]
0eee14c3  MOV R14,RAX
0eee14c6  CMP byte ptr [RAX + -0x8],0x0
0eee14cd  JZ 0x0eee14f9
0eee14cf  MOV RAX,R14
0eee14d2  MOV R15D,EBX
0eee14d5  MOV RDX,qword ptr [R14 + -0x18]
0eee14dc  MOV RCX,qword ptr [R14 + -0x20]
0eee14e3  SUB RDX,RCX
0eee14e6  SAR RDX,0x3
0eee14ea  CMP RDX,R15
0eee14ed  JBE 0x0eee152f
0eee14ef  LEA RAX,[RCX + R15*0x8]
0eee14f3  POP RBX
0eee14f4  POP R14
0eee14f6  POP R15
0eee14f8  RET
0eee14f9  LEA R15,[R14 + -0x28]
0eee1500  LEA RSI,[0xf7ba230]
0eee1507  MOV RDI,R15
0eee150a  CALL 0x0eee07b0
0eee150f  LEA RDI,[0xeee0b40]
0eee1516  LEA RDX,[0xf53dab8]
0eee151d  MOV RSI,R15
0eee1520  CALL 0x0417d010
0eee1525  MOV byte ptr [R14 + -0x8],0x1
0eee152d  JMP 0x0eee14cf
0eee152f  LEA R14,[RAX + -0x20]
0eee1536  LEA RDI,[0xf7ba1d0]
0eee153d  CALL 0x0412d680
0eee1542  INC EBX
0eee1544  MOV RDI,R14
0eee1547  MOV RSI,RBX
0eee154a  CALL 0x0eee1060
0eee154f  LEA RDI,[0xf7ba1d0]
0eee1556  CALL 0x0412d6b0
0eee155b  MOV RCX,qword ptr [R14]
0eee155e  JMP 0x0eee14ef
```
