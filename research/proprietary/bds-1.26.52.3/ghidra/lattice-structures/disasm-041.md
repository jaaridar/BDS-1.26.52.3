# FUN_0eee1580 (disassembly)

```
0eee1580  PUSH R15
0eee1582  PUSH R14
0eee1584  PUSH RBX
0eee1585  MOV RBX,RSI
0eee1588  MOVZX EAX,byte ptr [0x0f7ba228]
0eee158f  TEST AL,AL
0eee1591  JZ 0x0eee15a3
0eee1593  MOV EDI,dword ptr [RDI]
0eee1595  CALL 0x0eee14b0
0eee159a  MOV qword ptr [RAX],RBX
0eee159d  POP RBX
0eee159e  POP R14
0eee15a0  POP R15
0eee15a2  RET
0eee15a3  LEA RAX,[0xf7ba228]
0eee15aa  MOV R15,RDI
0eee15ad  MOV RDI,RAX
0eee15b0  CALL 0x04108328
0eee15b5  MOV RDI,R15
0eee15b8  TEST EAX,EAX
0eee15ba  JZ 0x0eee1593
0eee15bc  XORPS XMM0,XMM0
0eee15bf  MOVUPS xmmword ptr [0x0f7ba200],XMM0
0eee15c6  MOVUPS xmmword ptr [0x0f7ba1f0],XMM0
0eee15cd  MOVUPS xmmword ptr [0x0f7ba1e0],XMM0
0eee15d4  MOVUPS xmmword ptr [0x0f7ba1d0],XMM0
0eee15db  LEA RDI,[0xf5463b0]
0eee15e2  MOV RAX,qword ptr [0x0f5463b0]
0eee15e9  MOV ESI,0x80
0eee15ee  CALL qword ptr [RAX + 0x10]
0eee15f1  MOV R14,RAX
0eee15f4  TEST RAX,RAX
0eee15f7  JZ 0x0eee168a
0eee15fd  MOV qword ptr [0x0f7ba1f8],R14
0eee1604  LEA RSI,[0xf7ba1d0]
0eee160b  MOV RAX,R14
0eee160e  SUB RAX,-0x80
0eee1612  MOV qword ptr [0x0f7ba208],RAX
0eee1619  XORPS XMM0,XMM0
0eee161c  MOVUPS xmmword ptr [R14 + 0x70],XMM0
0eee1621  MOVUPS xmmword ptr [R14 + 0x60],XMM0
0eee1626  MOVUPS xmmword ptr [R14 + 0x50],XMM0
0eee162b  MOVUPS xmmword ptr [R14 + 0x40],XMM0
0eee1630  MOVUPS xmmword ptr [R14 + 0x30],XMM0
0eee1635  MOVUPS xmmword ptr [R14 + 0x20],XMM0
0eee163a  MOVUPS xmmword ptr [R14 + 0x10],XMM0
0eee163f  MOVUPS xmmword ptr [R14],XMM0
0eee1643  MOV qword ptr [0x0f7ba200],RAX
0eee164a  MOVUPS xmmword ptr [0x0f7ba210],XMM0
0eee1651  MOV qword ptr [0x0f7ba220],0x0
0eee165c  MOV qword ptr [0x0f7ba230],RSI
0eee1663  LEA RDI,[0xeee1c80]
0eee166a  LEA RDX,[0xf53dab8]
0eee1671  CALL 0x0eee2f40
0eee1676  LEA RDI,[0xf7ba228]
0eee167d  CALL 0x0410844d
0eee1682  MOV RDI,R15
0eee1685  JMP 0x0eee1593
0eee168a  MOV EDI,0x80
0eee168f  XOR ESI,ESI
0eee1691  CALL 0x0eec74c0
0eee1696  JMP 0x0eee15fd
```
