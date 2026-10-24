# FUN_0eeb81b0 (disassembly)

```
0eeb81b0  PUSH R15
0eeb81b2  PUSH R14
0eeb81b4  PUSH R12
0eeb81b6  PUSH RBX
0eeb81b7  PUSH RAX
0eeb81b8  MOV RBX,RDI
0eeb81bb  CMP byte ptr [RDI],0x1
0eeb81be  JNZ 0x0eeb8254
0eeb81c4  MOV RDI,qword ptr [RBX + 0x10]
0eeb81c8  TEST RDI,RDI
0eeb81cb  JZ 0x0eeb8254
0eeb81d1  CALL 0x0412c300
0eeb81d6  TEST RAX,RAX
0eeb81d9  JZ 0x0eeb8254
0eeb81db  MOV R14,RAX
0eeb81de  MOV RDI,qword ptr [RBX + 0x8]
0eeb81e2  TEST RDI,RDI
0eeb81e5  JZ 0x0eeb8242
0eeb81e7  ADD RDI,0x10
0eeb81eb  CALL 0x0eec09c0
0eeb81f0  MOV R15,qword ptr [RAX + 0x8]
0eeb81f4  CMP qword ptr [RAX],R15
0eeb81f7  JZ 0x0eeb8242
0eeb81f9  CMP qword ptr [R15 + -0x8],RBX
0eeb81fd  JNZ 0x0eeb8242
0eeb81ff  MOV RSI,qword ptr [R15 + -0x10]
0eeb8203  BT RSI,0x37
0eeb8208  JNC 0x0eeb8232
0eeb820a  MOV RCX,-0xff000000000001
0eeb8214  AND RSI,RCX
0eeb8217  ADD RSI,-0x8
0eeb821b  LEA RDI,[0xf5463b0]
0eeb8222  MOV RCX,qword ptr [0x0f5463b0]
0eeb8229  MOV R12,RAX
0eeb822c  CALL qword ptr [RCX + 0x28]
0eeb822f  MOV RAX,R12
0eeb8232  MOV qword ptr [R15 + -0x10],0x0
0eeb823a  ADD R15,-0x28
0eeb823e  MOV qword ptr [RAX + 0x8],R15
0eeb8242  MOV RAX,-0x1
0eeb8249  XADD.LOCK qword ptr [R14 + 0x8],RAX
0eeb824f  TEST RAX,RAX
0eeb8252  JZ 0x0eeb826d
0eeb8254  MOV RDI,qword ptr [RBX + 0x10]
0eeb8258  ADD RSP,0x8
0eeb825c  TEST RDI,RDI
0eeb825f  JZ 0x0eeb828b
0eeb8261  POP RBX
0eeb8262  POP R12
0eeb8264  POP R14
0eeb8266  POP R15
0eeb8268  JMP 0x0412c2d0
0eeb826d  MOV RAX,qword ptr [R14]
0eeb8270  MOV RDI,R14
0eeb8273  CALL qword ptr [RAX + 0x10]
0eeb8276  MOV RDI,R14
0eeb8279  CALL 0x0412c2d0
0eeb827e  MOV RDI,qword ptr [RBX + 0x10]
0eeb8282  ADD RSP,0x8
0eeb8286  TEST RDI,RDI
0eeb8289  JNZ 0x0eeb8261
0eeb828b  POP RBX
0eeb828c  POP R12
0eeb828e  POP R14
0eeb8290  POP R15
0eeb8292  RET
```
