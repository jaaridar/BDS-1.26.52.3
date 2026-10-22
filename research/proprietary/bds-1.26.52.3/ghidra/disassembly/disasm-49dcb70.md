# 49dcb70

```asm
049dcb70  PUSH RBP
049dcb71  PUSH R15
049dcb73  PUSH R14
049dcb75  PUSH R13
049dcb77  PUSH R12
049dcb79  PUSH RBX
049dcb7a  SUB RSP,0x28
049dcb7e  MOV qword ptr [RSP],RDX
049dcb82  MOV RAX,qword ptr [RDI + 0x8]
049dcb86  TEST RAX,RAX
049dcb89  MOV qword ptr [RSP + 0x8],RDI
049dcb8e  JZ 0x049dcc36
049dcb94  MOVZX ECX,byte ptr [RSI]
049dcb97  LEA R15,[RSI + 0x1]
049dcb9b  MOV R14D,ECX
049dcb9e  SHR R14D,0x1
049dcba1  TEST CL,0x1
049dcba4  CMOVNZ R15,qword ptr [RSI + 0x10]
049dcba9  CMOVNZ R14,qword ptr [RSI + 0x8]
049dcbae  JMP 0x049dcbc0
049dcbb0  MOV RAX,qword ptr [RBP]
049dcbb4  MOV R12,RBP
049dcbb7  TEST RAX,RAX
049dcbba  JZ 0x049dcc3d
049dcbc0  MOV RBP,RAX
049dcbc3  MOVZX EAX,byte ptr [RAX + 0x20]
049dcbc7  LEA R12,[RBP + 0x21]
049dcbcb  MOV EBX,EAX
049dcbcd  SHR EBX,0x1
049dcbcf  TEST AL,0x1
049dcbd1  CMOVNZ R12,qword ptr [RBP + 0x30]
049dcbd6  CMOVNZ RBX,qword ptr [RBP + 0x28]
049dcbdb  CMP RBX,R14
049dcbde  MOV R13,R14
049dcbe1  CMOVC R13,RBX
049dcbe5  MOV RDI,R15
049dcbe8  MOV RSI,R12
049dcbeb  MOV RDX,R13
049dcbee  CALL 0x0eee2ff0
049dcbf3  TEST EAX,EAX
049dcbf5  JZ 0x049dcc00
049dcbf7  JS 0x049dcbb0
049dcbf9  JMP 0x049dcc05
049dcc00  CMP R14,RBX
049dcc03  JC 0x049dcbb0
049dcc05  MOV RDI,R12
049dcc08  MOV RSI,R15
049dcc0b  MOV RDX,R13
049dcc0e  CALL 0x0eee2ff0
049dcc13  TEST EAX,EAX
049dcc15  JZ 0x049dcc1e
049dcc17  JS 0x049dcc27
049dcc19  JMP 0x049dccd5
049dcc1e  CMP RBX,R14
049dcc21  JNC 0x049dccd5
049dcc27  MOV RAX,qword ptr [RBP + 0x8]
049dcc2b  TEST RAX,RAX
049dcc2e  JNZ 0x049dcbc0
049dcc30  LEA R12,[RBP + 0x8]
049dcc34  JMP 0x049dcc3d
049dcc36  LEA R12,[RDI + 0x8]
049dcc3a  MOV RBP,R12
049dcc3d  MOV RAX,qword ptr [0x0f5463b0]
049dcc44  LEA RDI,[0xf5463b0]
049dcc4b  MOV ESI,0x38
049dcc50  CALL qword ptr [RAX + 0x10]
049dcc53  MOV R15,RAX
049dcc56  TEST RAX,RAX
049dcc59  JZ 0x049dccec
049dcc5f  MOV qword ptr [RSP + 0x10],R15
049dcc64  MOV RBX,qword ptr [RSP + 0x8]
049dcc69  MOV qword ptr [RSP + 0x18],RBX
049dcc6e  MOV qword ptr [RSP + 0x20],0x0
049dcc77  MOV RDI,R15
049dcc7a  ADD RDI,0x20
049dcc7e  MOV RCX,qword ptr [RSP]
049dcc82  TEST byte ptr [RCX],0x1
049dcc85  JNZ 0x049dcc97
049dcc87  MOV RAX,qword ptr [RCX + 0x10]
049dcc8b  MOV qword ptr [RDI + 0x10],RAX
049dcc8f  MOVUPS XMM0,xmmword ptr [RCX]
049dcc92  MOVUPS xmmword ptr [RDI],XMM0
049dcc95  JMP 0x049dcca4
049dcc97  MOV RDX,qword ptr [RCX + 0x8]
049dcc9b  MOV RSI,qword ptr [RCX + 0x10]
049dcc9f  CALL 0x0412e5e0
049dcca4  XORPS XMM0,XMM0
049dcca7  MOVUPS xmmword ptr [R15],XMM0
049dccab  MOV qword ptr [R15 + 0x10],RBP
049dccaf  MOV qword ptr [R12],R15
049dccb3  MOV RAX,qword ptr [RBX]
049dccb6  MOV RAX,qword ptr [RAX]
049dccb9  TEST RAX,RAX
049dccbc  JZ 0x049dccc1
049dccbe  MOV qword ptr [RBX],RAX
049dccc1  MOV RDI,qword ptr [RBX + 0x8]
049dccc5  MOV RSI,R15
049dccc8  CALL 0x048bed00
049dcccd  INC qword ptr [RBX + 0x10]
049dccd1  MOV DL,0x1
049dccd3  JMP 0x049dccda
049dccd5  XOR EDX,EDX
049dccd7  MOV R15,RBP
049dccda  MOV RAX,R15
049dccdd  ADD RSP,0x28
049dcce1  POP RBX
049dcce2  POP R12
049dcce4  POP R13
049dcce6  POP R14
049dcce8  POP R15
049dccea  POP RBP
049dcceb  RET
049dccec  MOV EDI,0x38
049dccf1  XOR ESI,ESI
049dccf3  CALL 0x0eec74c0
049dccf8  JMP 0x049dcc5f
```
