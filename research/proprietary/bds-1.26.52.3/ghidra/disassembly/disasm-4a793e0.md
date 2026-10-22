# 4a793e0  std::__1::__function::__func<?, BiomeJsonDocumentGlue::registerComponent<SharedTypes::v1_21_100::FrozenNoiseBasedBiomeJsonComponent, ?, ?, ?, ?, ?, ..., long double, ?, ?::int::short::long double::?::?::short::long double::double::?::int::?::unsigned long::long double::?::?::unsigned long::?::?::?::long double::?::unsigned short::?::long::?::long double>::void::void, ?, long, void>::?::S_::allocator<S8, ?>::?::S_::shared_ptr<?, ?, ?, ?, int, ?, unsigned long, long double, ?, ?, unsigned long, ?, ?, ?, long double, ?, unsigned short, ?, long, ?, long double>::void::vslot6

```asm
04a793e0  PUSH R14
04a793e2  PUSH RBX
04a793e3  PUSH RAX
04a793e4  MOV RBX,RDI
04a793e7  MOV RAX,qword ptr [0x0f5463b0]
04a793ee  LEA RDI,[0xf5463b0]
04a793f5  MOV ESI,0x20
04a793fa  CALL qword ptr [RAX + 0x10]
04a793fd  TEST RAX,RAX
04a79400  JZ 0x04a79437
04a79402  XORPS XMM0,XMM0
04a79405  MOVUPS xmmword ptr [RAX + 0x8],XMM0
04a79409  LEA RCX,[0xef53a58]
04a79410  MOV qword ptr [RAX],RCX
04a79413  MOV RCX,RAX
04a79416  ADD RCX,0x18
04a7941a  LEA RDX,[0xefa5608]
04a79421  MOV qword ptr [RAX + 0x18],RDX
04a79425  MOV qword ptr [RBX],RCX
04a79428  MOV qword ptr [RBX + 0x8],RAX
04a7942c  MOV RAX,RBX
04a7942f  ADD RSP,0x8
04a79433  POP RBX
04a79434  POP R14
04a79436  RET
04a79437  MOV EDI,0x20
04a7943c  XOR ESI,ESI
04a7943e  MOV R14,RAX
04a79441  CALL 0x0eec74c0
04a79446  MOV RAX,R14
04a79449  JMP 0x04a79402
```
