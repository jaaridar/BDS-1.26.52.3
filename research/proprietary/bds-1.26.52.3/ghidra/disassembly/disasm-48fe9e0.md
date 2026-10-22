# 48fe9e0  cereal::BasicRapidJSONSchemaWriter<rapidjson::PrettyWriter<S1::?::GenericStringBuffer<S1::?::UTF8<char>, S1::?::CrtAllocator>, S5, ?, S5, ?, S6, ?, unsigned int>>::vslot0

```asm
048fe9e0  PUSH RBX
048fe9e1  MOV RBX,RDI
048fe9e4  LEA RAX,[0xef473d8]
048fe9eb  MOV qword ptr [RDI],RAX
048fe9ee  MOV RDI,qword ptr [RDI + 0x80]
048fe9f5  CALL 0x0eee2e20
048fe9fa  MOV RDI,qword ptr [RBX + 0x78]
048fe9fe  TEST RDI,RDI
048fea01  JZ 0x048fea0d
048fea03  MOV ESI,0x1
048fea08  CALL 0x0412a280
048fea0d  MOV RDI,qword ptr [RBX + 0x38]
048fea11  CALL 0x0eee2e20
048fea16  MOV RDI,qword ptr [RBX + 0x30]
048fea1a  TEST RDI,RDI
048fea1d  JZ 0x048fea29
048fea1f  MOV ESI,0x1
048fea24  CALL 0x0412a280
048fea29  MOV RDI,qword ptr [RBX + 0x10]
048fea2d  TEST RDI,RDI
048fea30  JZ 0x048fea43
048fea32  MOV qword ptr [RBX + 0x18],RDI
048fea36  MOV RSI,qword ptr [RBX + 0x20]
048fea3a  SUB RSI,RDI
048fea3d  POP RBX
048fea3e  JMP 0x0412a280
048fea43  POP RBX
048fea44  RET
```
