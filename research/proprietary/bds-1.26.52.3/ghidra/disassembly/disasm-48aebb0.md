# 48aebb0

```asm
048aebb0  PUSH RBX
048aebb1  MOV RAX,RDI
048aebb4  MOVZX ECX,byte ptr [0x0f550ad8]
048aebbb  TEST CL,CL
048aebbd  JZ 0x048aec27
048aebbf  MOVZX ECX,byte ptr [0x0f550ad8]
048aebc6  TEST CL,CL
048aebc8  JZ 0x048aec5f
048aebce  MOV ECX,dword ptr [0x0f550ac4]
048aebd4  LEA RDX,[0xf550ac0]
048aebdb  MOV qword ptr [RAX],RDX
048aebde  MOV dword ptr [RAX + 0x8],ECX
048aebe1  MOV qword ptr [RAX + 0x10],0x0
048aebe9  MOV dword ptr [RAX + 0x18],0x0
048aebf0  MOV qword ptr [RAX + 0x20],0x0
048aebf8  LEA RCX,[0x48aead0]
048aebff  MOV qword ptr [RAX + 0x28],RCX
048aec03  XORPS XMM0,XMM0
048aec06  MOVUPS xmmword ptr [RAX + 0x30],XMM0
048aec0a  MOVUPS xmmword ptr [RAX + 0x40],XMM0
048aec0e  MOVUPS xmmword ptr [RAX + 0x50],XMM0
048aec12  MOV dword ptr [RAX + 0x60],0x0
048aec19  MOVUPS xmmword ptr [RAX + 0x68],XMM0
048aec1d  MOV qword ptr [RAX + 0x78],0x0
048aec25  POP RBX
048aec26  RET
048aec27  LEA RDI,[0xf550ad8]
048aec2e  MOV RBX,RAX
048aec31  CALL 0x04108328
048aec36  MOV ECX,EAX
048aec38  MOV RAX,RBX
048aec3b  TEST ECX,ECX
048aec3d  JZ 0x048aebbf
048aec3f  LEA RDI,[0xf550ac0]
048aec46  CALL 0x0488e120
048aec4b  LEA RDI,[0xf550ad8]
048aec52  CALL 0x0410844d
048aec57  MOV RAX,RBX
048aec5a  JMP 0x048aebbf
048aec5f  LEA RDI,[0xf550ad8]
048aec66  MOV RBX,RAX
048aec69  CALL 0x04108328
048aec6e  MOV ECX,EAX
048aec70  MOV RAX,RBX
048aec73  TEST ECX,ECX
048aec75  JZ 0x048aebce
048aec7b  LEA RDI,[0xf550ac0]
048aec82  CALL 0x0488e120
048aec87  LEA RDI,[0xf550ad8]
048aec8e  CALL 0x0410844d
048aec93  MOV RAX,RBX
048aec96  JMP 0x048aebce
```
