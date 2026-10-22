# 4a3fa90  ReplacementBiomeSource<?, ?, long, ?, char, ?, ?*, short>::vslot7

```asm
04a3fa90  PUSH RBP
04a3fa91  PUSH R15
04a3fa93  PUSH R14
04a3fa95  PUSH R13
04a3fa97  PUSH R12
04a3fa99  PUSH RBX
04a3fa9a  SUB RSP,0x48
04a3fa9e  MOV qword ptr [RSP + 0x10],RSI
04a3faa3  MOV R13,qword ptr [RSP + 0x80]
04a3faab  TEST R13,R13
04a3faae  JZ 0x04a3fd31
04a3fab4  MOV R15,RDI
04a3fab7  MOV dword ptr [RSP + 0xc],ECX
04a3fabb  MOV qword ptr [RSP + 0x20],R8
04a3fac0  MOV RBX,qword ptr [RSP + 0x88]
04a3fac8  LEA RAX,[RBX + R13*0x2]
04a3facc  MOV qword ptr [RSP + 0x40],RAX
04a3fad1  MOV RAX,qword ptr [RDI + 0x38]
04a3fad5  MOV RCX,qword ptr [RDI + 0x40]
04a3fad9  MOV RSI,RCX
04a3fadc  SUB RSI,RAX
04a3fadf  JZ 0x04a3fbf7
04a3fae5  MOV qword ptr [RSP + 0x18],RAX
04a3faea  SAR RSI,0x1
04a3faed  MOV R8,RBX
04a3faf0  XOR EAX,EAX
04a3faf2  MOVZX R9D,word ptr [R8]
04a3faf6  MOV RDI,RSI
04a3faf9  MOV R11,RCX
04a3fafc  MOV R10,qword ptr [RSP + 0x18]
04a3fb01  MOV RBP,RSI
04a3fb04  JMP 0x04a3fb29
04a3fb10  ADD R12,0x2
04a3fb14  NOT RBP
04a3fb17  ADD RBP,RDI
04a3fb1a  MOV R10,R12
04a3fb1d  MOV RDI,RBP
04a3fb20  TEST RBP,RBP
04a3fb23  JZ 0x04a3fbf7
04a3fb29  SHR RBP,0x1
04a3fb2c  MOV R14,RDI
04a3fb2f  AND R14,-0x2
04a3fb33  LEA R12,[R10 + R14*0x1]
04a3fb37  MOVZX R14D,word ptr [R10 + R14*0x1]
04a3fb3c  CMP R14W,R9W
04a3fb40  JC 0x04a3fb10
04a3fb42  JBE 0x04a3fb54
04a3fb44  MOV R11,R12
04a3fb47  MOV RDI,RBP
04a3fb4a  TEST RBP,RBP
04a3fb4d  JNZ 0x04a3fb29
04a3fb4f  JMP 0x04a3fbf7
04a3fb54  CMP RDI,0x1
04a3fb58  JZ 0x04a3fb8d
04a3fb5a  SAR RDI,0x1
04a3fb5d  NOP dword ptr [RAX]
04a3fb60  MOV R14,RDI
04a3fb63  SHR R14,0x1
04a3fb66  MOV RBP,R14
04a3fb69  NOT RBP
04a3fb6c  ADD RBP,RDI
04a3fb6f  AND RDI,-0x2
04a3fb73  CMP word ptr [R10 + RDI*0x1],R9W
04a3fb78  LEA RDI,[R10 + RDI*0x1 + 0x2]
04a3fb7d  CMOVNC RBP,R14
04a3fb81  CMOVC R10,RDI
04a3fb85  MOV RDI,RBP
04a3fb88  TEST RBP,RBP
04a3fb8b  JNZ 0x04a3fb60
04a3fb8d  ADD R12,0x2
04a3fb91  MOV R14,R11
04a3fb94  SUB R14,R12
04a3fb97  JZ 0x04a3fbcd
04a3fb99  SAR R14,0x1
04a3fb9c  MOV R11,R12
04a3fb9f  NOP
04a3fba0  MOV RDI,R14
04a3fba3  SHR RDI,0x1
04a3fba6  MOV R12,RDI
04a3fba9  NOT R12
04a3fbac  ADD R12,R14
04a3fbaf  AND R14,-0x2
04a3fbb3  CMP R9W,word ptr [R11 + R14*0x1]
04a3fbb8  LEA R14,[R11 + R14*0x1 + 0x2]
04a3fbbd  CMOVNC R11,R14
04a3fbc1  CMOVC R12,RDI
04a3fbc5  MOV R14,R12
04a3fbc8  TEST R12,R12
04a3fbcb  JNZ 0x04a3fba0
04a3fbcd  CMP R10,R11
04a3fbd0  JZ 0x04a3fbf7
04a3fbd2  CMP R10,RCX
04a3fbd5  JZ 0x04a3fbf7
04a3fbd7  MOV RDI,qword ptr [RSP + 0x40]
04a3fbdc  CMP R8,RDI
04a3fbdf  JZ 0x04a3fdba
04a3fbe5  ADD R8,0x2
04a3fbe9  CMP R8,RDI
04a3fbec  JNZ 0x04a3faf2
04a3fbf2  JMP 0x04a3fd33
04a3fbf7  MOV RCX,qword ptr [RSP + 0x20]
04a3fbfc  MOV RSI,qword ptr [RSP + 0x10]
04a3fc01  LEA EDI,[RCX + RSI*0x1]
04a3fc04  SUB ESI,ECX
04a3fc06  MOV AL,0x1
04a3fc08  MOV qword ptr [RSP + 0x10],RSI
04a3fc0d  CMP ESI,EDI
04a3fc0f  JG 0x04a3fd33
04a3fc15  LEA ESI,[RCX + RDX*0x1]
04a3fc18  SUB EDX,ECX
04a3fc1a  MOVSX EDX,DX
04a3fc1d  MOVSX EBP,SI
04a3fc20  MOV dword ptr [RSP + 0x18],EDX
04a3fc24  CMP EDX,EBP
04a3fc26  JG 0x04a3fd33
04a3fc2c  MOV EAX,dword ptr [RSP + 0xc]
04a3fc30  MOV EDX,EAX
04a3fc32  SUB EDX,ECX
04a3fc34  ADD ECX,EAX
04a3fc36  MOV qword ptr [RSP + 0x20],RCX
04a3fc3b  TEST RBX,RBX
04a3fc3e  MOV dword ptr [RSP + 0xc],EDX
04a3fc42  JZ 0x04a3fd42
04a3fc48  ADD R13,R13
04a3fc4b  MOV dword ptr [RSP + 0x3c],EDI
04a3fc4f  MOV R12D,EDX
04a3fc52  JMP 0x04a3fc6f
04a3fc60  ADD R12D,0x4
04a3fc64  CMP R12D,dword ptr [RSP + 0x20]
04a3fc69  JG 0x04a3fd0f
04a3fc6f  MOV R14D,dword ptr [RSP + 0x18]
04a3fc74  JMP 0x04a3fc92
04a3fc80  CMP RAX,R13
04a3fc83  JZ 0x04a3fd31
04a3fc89  ADD R14D,0x4
04a3fc8d  CMP R14D,EBP
04a3fc90  JG 0x04a3fc60
04a3fc92  MOV RAX,qword ptr [RSP + 0x10]
04a3fc97  MOV dword ptr [RSP + 0x2c],EAX
04a3fc9b  MOV dword ptr [RSP + 0x30],R14D
04a3fca0  MOV dword ptr [RSP + 0x34],R12D
04a3fca5  MOV byte ptr [RSP + 0x38],0x1
04a3fcaa  MOV RAX,qword ptr [R15]
04a3fcad  MOV RDI,R15
04a3fcb0  LEA RSI,[RSP + 0x2c]
04a3fcb5  CALL qword ptr [RAX + 0x58]
04a3fcb8  TEST RAX,RAX
04a3fcbb  JZ 0x04a3fc89
04a3fcbd  MOVZX ECX,word ptr [RAX + 0x168]
04a3fcc4  XOR EAX,EAX
04a3fcc6  NOP word ptr CS:[RAX + RAX*0x1]
04a3fcd0  CMP word ptr [RBX + RAX*0x1],CX
04a3fcd4  JZ 0x04a3fcf0
04a3fcd6  ADD RAX,0x2
04a3fcda  CMP R13,RAX
04a3fcdd  JNZ 0x04a3fcd0
04a3fcdf  MOV RAX,qword ptr [RSP + 0x40]
04a3fce4  SUB RAX,RBX
04a3fce7  JNZ 0x04a3fcf8
04a3fce9  JMP 0x04a3fc80
04a3fcf0  ADD RAX,RBX
04a3fcf3  SUB RAX,RBX
04a3fcf6  JZ 0x04a3fc80
04a3fcf8  TEST RAX,RAX
04a3fcfb  JLE 0x04a3fdba
04a3fd01  CMP R13,RAX
04a3fd04  JGE 0x04a3fc80
04a3fd0a  JMP 0x04a3fdba
04a3fd0f  MOV RAX,qword ptr [RSP + 0x10]
04a3fd14  ADD EAX,0x4
04a3fd17  MOV qword ptr [RSP + 0x10],RAX
04a3fd1c  MOV EDI,dword ptr [RSP + 0x3c]
04a3fd20  CMP EAX,EDI
04a3fd22  MOV EDX,dword ptr [RSP + 0xc]
04a3fd26  JLE 0x04a3fc4f
04a3fd2c  JMP 0x04a3fdb3
04a3fd31  XOR EAX,EAX
04a3fd33  ADD RSP,0x48
04a3fd37  POP RBX
04a3fd38  POP R12
04a3fd3a  POP R13
04a3fd3c  POP R14
04a3fd3e  POP R15
04a3fd40  POP RBP
04a3fd41  RET
04a3fd42  LEA R12,[RSP + 0x2c]
04a3fd47  MOV R13D,EDI
04a3fd4a  MOV EBX,EDX
04a3fd4c  NOP dword ptr [RAX]
04a3fd50  MOV R14D,dword ptr [RSP + 0x18]
04a3fd55  NOP dword ptr CS:[RAX + RAX*0x1]
04a3fd60  MOV RAX,qword ptr [RSP + 0x10]
04a3fd65  MOV dword ptr [RSP + 0x2c],EAX
04a3fd69  MOV dword ptr [RSP + 0x30],R14D
04a3fd6e  MOV dword ptr [RSP + 0x34],EBX
04a3fd72  MOV byte ptr [RSP + 0x38],0x1
04a3fd77  MOV RAX,qword ptr [R15]
04a3fd7a  MOV RDI,R15
04a3fd7d  MOV RSI,R12
04a3fd80  CALL qword ptr [RAX + 0x58]
04a3fd83  TEST RAX,RAX
04a3fd86  JNZ 0x04a3fdba
04a3fd88  ADD R14D,0x4
04a3fd8c  CMP R14D,EBP
04a3fd8f  JLE 0x04a3fd60
04a3fd91  ADD EBX,0x4
04a3fd94  CMP EBX,dword ptr [RSP + 0x20]
04a3fd98  JLE 0x04a3fd50
04a3fd9a  MOV RAX,qword ptr [RSP + 0x10]
04a3fd9f  ADD EAX,0x4
04a3fda2  MOV qword ptr [RSP + 0x10],RAX
04a3fda7  MOV EDI,R13D
04a3fdaa  CMP EAX,R13D
04a3fdad  MOV EDX,dword ptr [RSP + 0xc]
04a3fdb1  JLE 0x04a3fd47
04a3fdb3  MOV AL,0x1
04a3fdb5  JMP 0x04a3fd33
04a3fdba  CALL 0x04890760
04a3fdbf  INT3
```
