# 48bed00

```asm
048bed00  CMP RSI,RDI
048bed03  SETZ byte ptr [RSI + 0x18]
048bed07  JNZ 0x048bed18
048bed09  RET
048bed10  MOV RSI,RAX
048bed13  CMP RAX,RDI
048bed16  JZ 0x048bed09
048bed18  MOV RCX,qword ptr [RSI + 0x10]
048bed1c  CMP byte ptr [RCX + 0x18],0x0
048bed20  JNZ 0x048bed09
048bed22  MOV RAX,qword ptr [RCX + 0x10]
048bed26  MOV RDX,qword ptr [RAX]
048bed29  CMP RCX,RDX
048bed2c  JZ 0x048bed50
048bed2e  TEST RDX,RDX
048bed31  JZ 0x048bed72
048bed33  CMP byte ptr [RDX + 0x18],0x0
048bed37  JNZ 0x048bed72
048bed39  MOV byte ptr [RCX + 0x18],0x1
048bed3d  CMP RAX,RDI
048bed40  SETZ byte ptr [RAX + 0x18]
048bed44  MOV byte ptr [RDX + 0x18],0x1
048bed48  JMP 0x048bed10
048bed50  MOV R8,qword ptr [RAX + 0x8]
048bed54  TEST R8,R8
048bed57  JZ 0x048bed82
048bed59  CMP byte ptr [R8 + 0x18],0x0
048bed5e  JNZ 0x048bed82
048bed60  MOV byte ptr [RCX + 0x18],0x1
048bed64  CMP RAX,RDI
048bed67  SETZ byte ptr [RAX + 0x18]
048bed6b  MOV byte ptr [R8 + 0x18],0x1
048bed70  JMP 0x048bed10
048bed72  MOV RDX,qword ptr [RCX]
048bed75  CMP RSI,RDX
048bed78  JZ 0x048bedae
048bed7a  MOV RDX,RCX
048bed7d  JMP 0x048bee38
048bed82  CMP RSI,qword ptr [RCX]
048bed85  JZ 0x048bedd1
048bed87  MOV RSI,qword ptr [RCX + 0x8]
048bed8b  MOV RDX,qword ptr [RSI]
048bed8e  MOV qword ptr [RCX + 0x8],RDX
048bed92  TEST RDX,RDX
048bed95  JZ 0x048bedd6
048bed97  MOV qword ptr [RDX + 0x10],RCX
048bed9b  MOV RAX,qword ptr [RCX + 0x10]
048bed9f  CMP RCX,qword ptr [RAX]
048beda2  MOV qword ptr [RSI + 0x10],RAX
048beda6  JZ 0x048bedda
048beda8  MOV qword ptr [RAX + 0x8],RSI
048bedac  JMP 0x048beddd
048bedae  MOV RSI,qword ptr [RDX + 0x8]
048bedb2  MOV qword ptr [RCX],RSI
048bedb5  TEST RSI,RSI
048bedb8  JZ 0x048bedc2
048bedba  MOV qword ptr [RSI + 0x10],RCX
048bedbe  MOV RAX,qword ptr [RCX + 0x10]
048bedc2  MOV qword ptr [RDX + 0x10],RAX
048bedc6  CMP RCX,qword ptr [RAX]
048bedc9  JZ 0x048bee29
048bedcb  MOV qword ptr [RAX + 0x8],RDX
048bedcf  JMP 0x048bee2c
048bedd1  MOV RSI,RCX
048bedd4  JMP 0x048bedeb
048bedd6  MOV qword ptr [RSI + 0x10],RAX
048bedda  MOV qword ptr [RAX],RSI
048beddd  MOV qword ptr [RSI],RCX
048bede0  MOV qword ptr [RCX + 0x10],RSI
048bede4  MOV RAX,qword ptr [RSI + 0x10]
048bede8  MOV RDX,qword ptr [RAX]
048bedeb  MOV byte ptr [RSI + 0x18],0x1
048bedef  MOV byte ptr [RAX + 0x18],0x0
048bedf3  MOV RCX,qword ptr [RDX + 0x8]
048bedf7  MOV qword ptr [RAX],RCX
048bedfa  TEST RCX,RCX
048bedfd  JZ 0x048bee03
048bedff  MOV qword ptr [RCX + 0x10],RAX
048bee03  MOV RCX,qword ptr [RAX + 0x10]
048bee07  MOV qword ptr [RDX + 0x10],RCX
048bee0b  CMP RAX,qword ptr [RCX]
048bee0e  JZ 0x048bee1d
048bee10  MOV qword ptr [RCX + 0x8],RDX
048bee14  MOV qword ptr [RDX + 0x8],RAX
048bee18  MOV qword ptr [RAX + 0x10],RDX
048bee1c  RET
048bee1d  MOV qword ptr [RCX],RDX
048bee20  MOV qword ptr [RDX + 0x8],RAX
048bee24  MOV qword ptr [RAX + 0x10],RDX
048bee28  RET
048bee29  MOV qword ptr [RAX],RDX
048bee2c  MOV qword ptr [RDX + 0x8],RCX
048bee30  MOV qword ptr [RCX + 0x10],RDX
048bee34  MOV RAX,qword ptr [RDX + 0x10]
048bee38  MOV byte ptr [RDX + 0x18],0x1
048bee3c  MOV byte ptr [RAX + 0x18],0x0
048bee40  MOV RCX,qword ptr [RAX + 0x8]
048bee44  MOV RDX,qword ptr [RCX]
048bee47  MOV qword ptr [RAX + 0x8],RDX
048bee4b  TEST RDX,RDX
048bee4e  JZ 0x048bee54
048bee50  MOV qword ptr [RDX + 0x10],RAX
048bee54  MOV RDX,qword ptr [RAX + 0x10]
048bee58  MOV qword ptr [RCX + 0x10],RDX
048bee5c  CMP RAX,qword ptr [RDX]
048bee5f  JZ 0x048bee6d
048bee61  MOV qword ptr [RDX + 0x8],RCX
048bee65  MOV qword ptr [RCX],RAX
048bee68  MOV qword ptr [RAX + 0x10],RCX
048bee6c  RET
048bee6d  MOV qword ptr [RDX],RCX
048bee70  MOV qword ptr [RCX],RAX
048bee73  MOV qword ptr [RAX + 0x10],RCX
048bee77  RET
```
