# 49ea7d0  cereal::internal::TypeSchema<SharedTypes::v1_21_20::JigsawStructure::Processors::Type>::vslot9

```asm
049ea7d0  PUSH R15
049ea7d2  PUSH R14
049ea7d4  PUSH RBX
049ea7d5  MOV R15,qword ptr [RSI]
049ea7d8  TEST R15,R15
049ea7db  JZ 0x049ea81c
049ea7dd  MOV RBX,RSI
049ea7e0  MOV R14,qword ptr [RSI + 0x8]
049ea7e4  MOV RDI,R15
049ea7e7  CMP R15,R14
049ea7ea  JZ 0x049ea807
049ea7ec  NOP dword ptr [RAX]
049ea7f0  ADD R14,-0x128
049ea7f7  MOV RDI,R14
049ea7fa  CALL 0x049ea4f0
049ea7ff  CMP R14,R15
049ea802  JNZ 0x049ea7f0
049ea804  MOV RDI,qword ptr [RBX]
049ea807  MOV qword ptr [RBX + 0x8],R15
049ea80b  MOV RSI,qword ptr [RBX + 0x10]
049ea80f  SUB RSI,RDI
049ea812  POP RBX
049ea813  POP R14
049ea815  POP R15
049ea817  JMP 0x0412a280
049ea81c  POP RBX
049ea81d  POP R14
049ea81f  POP R15
049ea821  RET
```
