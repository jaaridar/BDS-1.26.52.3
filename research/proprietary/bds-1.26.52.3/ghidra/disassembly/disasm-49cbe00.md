# 49cbe00  VanillaServerGameplayEventListener::vslot15

```asm
049cbe00  SUB RSP,0x18
049cbe04  MOV qword ptr [RSP],RDI
049cbe08  MOV RAX,RSP
049cbe0b  MOV qword ptr [RSP + 0x8],RAX
049cbe10  MOV EAX,dword ptr [RSI + 0x38]
049cbe13  MOV ECX,0xffffffff
049cbe18  CMP RAX,RCX
049cbe1b  JZ 0x049cbe3b
049cbe1d  LEA RCX,[RSP + 0x8]
049cbe22  MOV qword ptr [RSP + 0x10],RCX
049cbe27  LEA RCX,[0xef4d398]
049cbe2e  LEA RDI,[RSP + 0x10]
049cbe33  CALL qword ptr [RCX + RAX*0x8]
049cbe36  ADD RSP,0x18
049cbe3a  RET
049cbe3b  CALL 0x04931450
```
