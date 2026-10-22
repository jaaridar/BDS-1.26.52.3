# 48afd20

```asm
048afd20  PUSH RBX
048afd21  MOV EAX,dword ptr [RDI + 0x1c]
048afd24  CMP EAX,0x2
048afd27  JZ 0x048afdae
048afd2d  CMP EAX,0x1
048afd30  JZ 0x048afd64
048afd32  TEST EAX,EAX
048afd34  JNZ 0x048afe29
048afd3a  MOV RAX,qword ptr [RDI + 0x10]
048afd3e  MOV ECX,dword ptr [RSI]
048afd40  MOV dword ptr [RAX + 0x60],ECX
048afd43  MOVUPS XMM0,xmmword ptr [RSI + 0x8]
048afd47  XORPS XMM1,XMM1
048afd4a  MOVUPS xmmword ptr [RSI + 0x8],XMM1
048afd4e  MOV RBX,qword ptr [RAX + 0x70]
048afd52  MOVUPS xmmword ptr [RAX + 0x68],XMM0
048afd56  TEST RBX,RBX
048afd59  JNZ 0x048afe17
048afd5f  JMP 0x048afe29
048afd64  MOV RAX,qword ptr [RDI + 0x10]
048afd68  MOV RAX,qword ptr [RAX + 0x78]
048afd6c  MOV ECX,dword ptr [RDI + 0x18]
048afd6f  MOV RAX,qword ptr [RAX + 0x48]
048afd73  CMP dword ptr [RAX],ECX
048afd75  JZ 0x048afd8f
048afd77  ADD RAX,0x68
048afd7b  NOP dword ptr [RAX + RAX*0x1]
048afd80  MOV RDX,RAX
048afd83  ADD RAX,0x68
048afd87  CMP dword ptr [RDX],ECX
048afd89  JNZ 0x048afd80
048afd8b  ADD RAX,-0x68
048afd8f  MOV ECX,dword ptr [RSI]
048afd91  MOV dword ptr [RAX + 0x50],ECX
048afd94  MOVUPS XMM0,xmmword ptr [RSI + 0x8]
048afd98  XORPS XMM1,XMM1
048afd9b  MOVUPS xmmword ptr [RSI + 0x8],XMM1
048afd9f  MOV RBX,qword ptr [RAX + 0x60]
048afda3  MOVUPS xmmword ptr [RAX + 0x58],XMM0
048afda7  TEST RBX,RBX
048afdaa  JNZ 0x048afe17
048afdac  JMP 0x048afe29
048afdae  MOV RAX,qword ptr [RDI + 0x10]
048afdb2  MOV RAX,qword ptr [RAX + 0x78]
048afdb6  MOV ECX,dword ptr [RDI + 0x18]
048afdb9  MOV RAX,qword ptr [RAX + 0x60]
048afdbd  CMP dword ptr [RAX],ECX
048afdbf  JZ 0x048afddf
048afdc1  ADD RAX,0x58
048afdc5  NOP dword ptr CS:[RAX + RAX*0x1]
048afdd0  MOV RDX,RAX
048afdd3  ADD RAX,0x58
048afdd7  CMP dword ptr [RDX],ECX
048afdd9  JNZ 0x048afdd0
048afddb  ADD RAX,-0x58
048afddf  MOV RCX,qword ptr [RDI + 0x8]
048afde3  CMP qword ptr [RAX + 0x30],RCX
048afde7  JZ 0x048afdfa
048afde9  NOP dword ptr [RAX]
048afdf0  MOV RAX,qword ptr [RAX + 0x38]
048afdf4  CMP qword ptr [RAX + 0x30],RCX
048afdf8  JNZ 0x048afdf0
048afdfa  MOV ECX,dword ptr [RSI]
048afdfc  MOV dword ptr [RAX + 0x40],ECX
048afdff  MOVUPS XMM0,xmmword ptr [RSI + 0x8]
048afe03  XORPS XMM1,XMM1
048afe06  MOVUPS xmmword ptr [RSI + 0x8],XMM1
048afe0a  MOV RBX,qword ptr [RAX + 0x50]
048afe0e  MOVUPS xmmword ptr [RAX + 0x48],XMM0
048afe12  TEST RBX,RBX
048afe15  JZ 0x048afe29
048afe17  MOV RAX,-0x1
048afe1e  XADD.LOCK qword ptr [RBX + 0x8],RAX
048afe24  TEST RAX,RAX
048afe27  JZ 0x048afe2b
048afe29  POP RBX
048afe2a  RET
048afe2b  MOV RAX,qword ptr [RBX]
048afe2e  MOV RDI,RBX
048afe31  CALL qword ptr [RAX + 0x10]
048afe34  MOV RDI,RBX
048afe37  POP RBX
048afe38  JMP 0x0412c2d0
```
