# 49cac20  EditorCustomBiomeSource::vslot0

```asm
049cac20  PUSH R14
049cac22  PUSH RBX
049cac23  PUSH RAX
049cac24  MOV RBX,RDI
049cac27  LEA RAX,[0xef48cf0]
049cac2e  MOV qword ptr [RDI],RAX
049cac31  ADD RDI,0x410
049cac38  CALL 0x0edf9c90
049cac3d  MOV RDI,qword ptr [RBX + 0x3f0]
049cac44  CALL 0x049db5d0
049cac49  CMP byte ptr [RBX + 0x3d0],0x1
049cac50  JNZ 0x049cac5b
049cac52  LEA RDI,[RBX + 0x78]
049cac56  CALL 0x0495d8f0
049cac5b  MOV R14,qword ptr [RBX + 0x70]
049cac5f  MOV qword ptr [RBX + 0x70],0x0
049cac67  TEST R14,R14
049cac6a  JZ 0x049cac81
049cac6c  MOV RDI,R14
049cac6f  CALL 0x049db610
049cac74  MOV ESI,0xd0
049cac79  MOV RDI,R14
049cac7c  CALL 0x0412a280
049cac81  MOV RDI,qword ptr [RBX + 0x50]
049cac85  TEST RDI,RDI
049cac88  JZ 0x049cac97
049cac8a  MOV RSI,qword ptr [RBX + 0x60]
049cac8e  SHL RSI,0x3
049cac92  CALL 0x0412a280
049cac97  MOV RDI,qword ptr [RBX + 0x38]
049cac9b  TEST RDI,RDI
049cac9e  JZ 0x049cacad
049caca0  MOV RSI,qword ptr [RBX + 0x48]
049caca4  SHL RSI,0x3
049caca8  CALL 0x0412a280
049cacad  MOV RSI,qword ptr [RBX + 0x28]
049cacb1  BT RSI,0x37
049cacb6  JNC 0x049cacda
049cacb8  MOV RAX,-0xff000000000001
049cacc2  AND RSI,RAX
049cacc5  ADD RSI,-0x8
049cacc9  LEA RDI,[0xf5463b0]
049cacd0  MOV RAX,qword ptr [0x0f5463b0]
049cacd7  CALL qword ptr [RAX + 0x28]
049cacda  MOV RAX,0x80000000000000
049cace4  MOV qword ptr [RBX + 0x28],0x0
049cacec  MOV RSI,qword ptr [RBX + 0x20]
049cacf0  TEST RSI,RAX
049cacf3  JZ 0x049cad17
049cacf5  MOV RAX,-0xff000000000001
049cacff  AND RSI,RAX
049cad02  ADD RSI,-0x8
049cad06  LEA RDI,[0xf5463b0]
049cad0d  MOV RAX,qword ptr [0x0f5463b0]
049cad14  CALL qword ptr [RAX + 0x28]
049cad17  MOV qword ptr [RBX + 0x20],0x0
049cad1f  MOV RDI,qword ptr [RBX + 0x10]
049cad23  MOV qword ptr [RBX + 0x10],0x0
049cad2b  TEST RDI,RDI
049cad2e  JZ 0x049cad36
049cad30  MOV RAX,qword ptr [RDI]
049cad33  CALL qword ptr [RAX + 0x8]
049cad36  MOV RDI,qword ptr [RBX + 0x8]
049cad3a  MOV qword ptr [RBX + 0x8],0x0
049cad42  TEST RDI,RDI
049cad45  JZ 0x049cad54
049cad47  MOV RAX,qword ptr [RDI]
049cad4a  ADD RSP,0x8
049cad4e  POP RBX
049cad4f  POP R14
049cad51  JMP qword ptr [RAX + 0x8]
049cad54  ADD RSP,0x8
049cad58  POP RBX
049cad59  POP R14
049cad5b  RET
```
