# 49ea260  cereal::internal::TypeSchema<SharedTypes::v1_21_20::JigsawStructureTemplatePool::_GLOBAL__N_1::ElementType>::vslot17

```asm
049ea260  PUSH RBX
049ea261  MOV RBX,RSI
049ea264  TEST byte ptr [RSI + 0x18],0x1
049ea268  JZ 0x049ea27b
049ea26a  MOV RSI,qword ptr [RBX + 0x18]
049ea26e  MOV RDI,qword ptr [RBX + 0x28]
049ea272  AND RSI,-0x2
049ea276  CALL 0x0412a280
049ea27b  TEST byte ptr [RBX],0x1
049ea27e  JNZ 0x049ea282
049ea280  POP RBX
049ea281  RET
049ea282  MOV RSI,qword ptr [RBX]
049ea285  MOV RDI,qword ptr [RBX + 0x10]
049ea289  AND RSI,-0x2
049ea28d  POP RBX
049ea28e  JMP 0x0412a280
```
