# 42e3b70

```asm
042e3b70  PUSH RBP
042e3b71  PUSH RBX
042e3b72  PUSH RAX
042e3b73  MOV RBX,RDI
042e3b76  MOV byte ptr [RDI + 0x1],SIL
042e3b7a  ADD RDI,0x58
042e3b7e  MOV RCX,qword ptr [RBX + 0x58]
042e3b82  MOV RDX,qword ptr [RBX + 0x60]
042e3b86  MOV RAX,qword ptr [RCX + 0x8]
042e3b8a  MOV RCX,qword ptr [RCX + 0x10]
042e3b8e  MOVZX EBP,byte ptr [RCX + RDX*0x1 + 0x1]
042e3b93  AND BPL,0x80
042e3b97  OR BPL,SIL
042e3b9a  SUB RAX,RDX
042e3b9d  MOV RSI,RAX
042e3ba0  CALL 0x0447bd90
042e3ba5  MOV RAX,qword ptr [RBX + 0x58]
042e3ba9  MOV RCX,qword ptr [RBX + 0x60]
042e3bad  MOV RAX,qword ptr [RAX + 0x10]
042e3bb1  MOV byte ptr [RAX + RCX*0x1 + 0x1],BPL
042e3bb6  ADD RSP,0x8
042e3bba  POP RBX
042e3bbb  POP RBP
042e3bbc  RET
```
