# FUN_0c46a3d0 (disassembly)

```
0c46a3d0  PUSH RBP
0c46a3d1  PUSH R15
0c46a3d3  PUSH R14
0c46a3d5  PUSH R13
0c46a3d7  PUSH R12
0c46a3d9  PUSH RBX
0c46a3da  SUB RSP,0x58
0c46a3de  MOV RBX,RSI
0c46a3e1  MOV RAX,qword ptr [RDI]
0c46a3e4  MOV R15,qword ptr [RDI + 0xa0]
0c46a3eb  MOV qword ptr [RSP + 0x28],RDI
0c46a3f0  CALL qword ptr [RAX + 0x18]
0c46a3f3  CMP EAX,dword ptr [RBX + 0x28]
0c46a3f6  JNZ 0x0c46ae1a
0c46a3fc  MOV R12,qword ptr [RBX + 0x8]
0c46a400  MOV qword ptr [RSP + 0x10],0x0
0c46a409  LEA RDI,[0xf5463b0]
0c46a410  MOV RAX,qword ptr [0x0f5463b0]
0c46a417  MOV ESI,0x30
0c46a41c  CALL qword ptr [RAX + 0x10]
0c46a41f  MOV R13,RAX
0c46a422  TEST RAX,RAX
0c46a425  JZ 0x0c46ae2e
0c46a42b  MOV RCX,0x1000000000
0c46a435  XORPS XMM0,XMM0
0c46a438  MOVUPS xmmword ptr [R13 + 0x8],XMM0
0c46a43d  LEA RAX,[0xf371790]
0c46a444  MOV qword ptr [R13],RAX
0c46a448  MOV qword ptr [R13 + 0x18],0x0
0c46a450  MOV qword ptr [R13 + 0x20],R15
0c46a454  MOV qword ptr [R13 + 0x28],R12
0c46a458  MOV qword ptr [RSP + 0x18],R13
0c46a45d  XOR EAX,EAX
0c46a45f  MOV R14,RCX
0c46a462  XOR R15D,R15D
0c46a465  JMP 0x0c46a497
0c46a470  INC R15
0c46a473  MOV RCX,0x1000000000
0c46a47d  MOV R14,qword ptr [RSP + 0x48]
0c46a482  ADD R14,RCX
0c46a485  MOV RAX,qword ptr [RSP + 0x50]
0c46a48a  ADD RAX,RCX
0c46a48d  CMP R15,0x8
0c46a491  JZ 0x0c46aded
0c46a497  MOV qword ptr [RSP + 0x48],R14
0c46a49c  SHR R14,0x20
0c46a4a0  MOV qword ptr [RSP + 0x50],RAX
0c46a4a5  SHR RAX,0x20
0c46a4a9  SUB R14D,EAX
0c46a4ac  MOV R12,R15
0c46a4af  SHL R12,0x24
0c46a4b3  LEA R13,[R12 + RCX*0x1]
0c46a4b7  ADD RCX,R12
0c46a4ba  ADD RCX,0x10
0c46a4be  MOV EBP,R15D
0c46a4c1  SHL EBP,0xb
0c46a4c4  LEA RAX,[RBP*0x4]
0c46a4cc  ADD RAX,qword ptr [RBX + 0x30]
0c46a4d0  MOV EDX,R14D
0c46a4d3  TEST RAX,RAX
0c46a4d6  JZ 0x0c46ae29
0c46a4dc  CMP dword ptr [RAX],0x0
0c46a4df  JNZ 0x0c46a5f0
0c46a4e5  CMP dword ptr [RAX + 0x4],0x0
0c46a4e9  JNZ 0x0c46a5f0
0c46a4ef  CMP dword ptr [RAX + 0x8],0x0
0c46a4f3  JNZ 0x0c46a5f0
0c46a4f9  CMP dword ptr [RAX + 0xc],0x0
0c46a4fd  JNZ 0x0c46a5f0
0c46a503  CMP dword ptr [RAX + 0x10],0x0
0c46a507  JNZ 0x0c46a5f0
0c46a50d  CMP dword ptr [RAX + 0x14],0x0
0c46a511  JNZ 0x0c46a5f0
0c46a517  CMP dword ptr [RAX + 0x18],0x0
0c46a51b  JNZ 0x0c46a5f0
0c46a521  CMP dword ptr [RAX + 0x1c],0x0
0c46a525  JNZ 0x0c46a5f0
0c46a52b  CMP dword ptr [RAX + 0x20],0x0
0c46a52f  JNZ 0x0c46a5f0
0c46a535  CMP dword ptr [RAX + 0x24],0x0
0c46a539  JNZ 0x0c46a5f0
0c46a53f  CMP dword ptr [RAX + 0x28],0x0
0c46a543  JNZ 0x0c46a5f0
0c46a549  CMP dword ptr [RAX + 0x2c],0x0
0c46a54d  JNZ 0x0c46a5f0
0c46a553  CMP dword ptr [RAX + 0x30],0x0
0c46a557  JNZ 0x0c46a5f0
0c46a55d  CMP dword ptr [RAX + 0x34],0x0
0c46a561  JNZ 0x0c46a5f0
0c46a567  CMP dword ptr [RAX + 0x38],0x0
0c46a56b  JNZ 0x0c46a5f0
0c46a571  CMP dword ptr [RAX + 0x3c],0x0
0c46a575  JNZ 0x0c46a5f0
0c46a577  ADD RAX,0x200
0c46a57d  DEC EDX
0c46a57f  JNZ 0x0c46a4d3
0c46a585  MOV RAX,qword ptr [RSP + 0x18]
0c46a58a  MOVAPS XMM0,xmmword ptr [RSP + 0x10]
0c46a58f  MOVAPS xmmword ptr [RSP + 0x30],XMM0
0c46a594  TEST RAX,RAX
0c46a597  JZ 0x0c46a59e
0c46a599  INC.LOCK qword ptr [RAX + 0x8]
0c46a59e  MOV qword ptr [RSP + 0x8],RAX
0c46a5a3  MOV RDI,qword ptr [RSP + 0x28]
0c46a5a8  MOV RSI,RBX
0c46a5ab  MOV RDX,R12
0c46a5ae  LEA R8,[RSP + 0x30]
0c46a5b3  CALL 0x0c469a90
0c46a5b8  MOV RCX,qword ptr [RSP + 0x8]
0c46a5bd  TEST RCX,RCX
0c46a5c0  JZ 0x0c46a5f0
0c46a5c2  MOV RAX,-0x1
0c46a5c9  XADD.LOCK qword ptr [RCX + 0x8],RAX
0c46a5cf  TEST RAX,RAX
0c46a5d2  JNZ 0x0c46a5f0
0c46a5d4  MOV RAX,qword ptr [RCX]
0c46a5d7  MOV RDI,RCX
0c46a5da  CALL qword ptr [RAX + 0x10]
0c46a5dd  MOV RDI,qword ptr [RSP + 0x8]
0c46a5e2  CALL 0x0412c2d0
0c46a5e7  NOP word ptr [RAX + RAX*0x1]
0c46a5f0  MOV RDX,R12
0c46a5f3  OR RDX,0x10
0c46a5f7  MOV RCX,R13
0c46a5fa  OR RCX,0x20
0c46a5fe  MOV RAX,qword ptr [RBX + 0x30]
0c46a602  LEA RAX,[RAX + RBP*0x4]
0c46a606  ADD RAX,0x40
0c46a60a  MOV ESI,R14D
0c46a60d  CMP dword ptr [RAX],0x0
0c46a610  JNZ 0x0c46a720
0c46a616  CMP dword ptr [RAX + 0x4],0x0
0c46a61a  JNZ 0x0c46a720
0c46a620  CMP dword ptr [RAX + 0x8],0x0
0c46a624  JNZ 0x0c46a720
0c46a62a  CMP dword ptr [RAX + 0xc],0x0
0c46a62e  JNZ 0x0c46a720
0c46a634  CMP dword ptr [RAX + 0x10],0x0
0c46a638  JNZ 0x0c46a720
0c46a63e  CMP dword ptr [RAX + 0x14],0x0
0c46a642  JNZ 0x0c46a720
0c46a648  CMP dword ptr [RAX + 0x18],0x0
0c46a64c  JNZ 0x0c46a720
0c46a652  CMP dword ptr [RAX + 0x1c],0x0
0c46a656  JNZ 0x0c46a720
0c46a65c  CMP dword ptr [RAX + 0x20],0x0
0c46a660  JNZ 0x0c46a720
0c46a666  CMP dword ptr [RAX + 0x24],0x0
0c46a66a  JNZ 0x0c46a720
0c46a670  CMP dword ptr [RAX + 0x28],0x0
0c46a674  JNZ 0x0c46a720
0c46a67a  CMP dword ptr [RAX + 0x2c],0x0
0c46a67e  JNZ 0x0c46a720
0c46a684  CMP dword ptr [RAX + 0x30],0x0
0c46a688  JNZ 0x0c46a720
0c46a68e  CMP dword ptr [RAX + 0x34],0x0
0c46a692  JNZ 0x0c46a720
0c46a698  CMP dword ptr [RAX + 0x38],0x0
0c46a69c  JNZ 0x0c46a720
0c46a6a2  CMP dword ptr [RAX + 0x3c],0x0
0c46a6a6  JNZ 0x0c46a720
0c46a6a8  ADD RAX,0x200
0c46a6ae  DEC ESI
0c46a6b0  JNZ 0x0c46a60d
0c46a6b6  MOV RAX,qword ptr [RSP + 0x18]
0c46a6bb  MOVAPS XMM0,xmmword ptr [RSP + 0x10]
0c46a6c0  MOVAPS xmmword ptr [RSP + 0x30],XMM0
0c46a6c5  TEST RAX,RAX
0c46a6c8  JZ 0x0c46a6cf
0c46a6ca  INC.LOCK qword ptr [RAX + 0x8]
0c46a6cf  MOV qword ptr [RSP + 0x8],RAX
0c46a6d4  MOV RDI,qword ptr [RSP + 0x28]
0c46a6d9  MOV RSI,RBX
0c46a6dc  LEA R8,[RSP + 0x30]
0c46a6e1  CALL 0x0c469a90
0c46a6e6  MOV RCX,qword ptr [RSP + 0x8]
0c46a6eb  TEST RCX,RCX
0c46a6ee  JZ 0x0c46a720
0c46a6f0  MOV RAX,-0x1
0c46a6f7  XADD.LOCK qword ptr [RCX + 0x8],RAX
0c46a6fd  TEST RAX,RAX
0c46a700  JNZ 0x0c46a720
0c46a702  MOV RAX,qword ptr [RCX]
0c46a705  MOV RDI,RCX
0c46a708  CALL qword ptr [RAX + 0x10]
0c46a70b  MOV RDI,qword ptr [RSP + 0x8]
0c46a710  CALL 0x0412c2d0
0c46a715  NOP dword ptr CS:[RAX + RAX*0x1]
0c46a720  MOV RDX,R12
0c46a723  OR RDX,0x20
0c46a727  MOV RCX,R13
0c46a72a  OR RCX,0x30
0c46a72e  MOV RAX,qword ptr [RBX + 0x30]
0c46a732  LEA RAX,[RAX + RBP*0x4]
0c46a736  ADD RAX,0x80
0c46a73c  MOV ESI,R14D
0c46a73f  CMP dword ptr [RAX],0x0
0c46a742  JNZ 0x0c46a840
0c46a748  CMP dword ptr [RAX + 0x4],0x0
0c46a74c  JNZ 0x0c46a840
0c46a752  CMP dword ptr [RAX + 0x8],0x0
0c46a756  JNZ 0x0c46a840
0c46a75c  CMP dword ptr [RAX + 0xc],0x0
0c46a760  JNZ 0x0c46a840
0c46a766  CMP dword ptr [RAX + 0x10],0x0
0c46a76a  JNZ 0x0c46a840
0c46a770  CMP dword ptr [RAX + 0x14],0x0
0c46a774  JNZ 0x0c46a840
0c46a77a  CMP dword ptr [RAX + 0x18],0x0
0c46a77e  JNZ 0x0c46a840
0c46a784  CMP dword ptr [RAX + 0x1c],0x0
0c46a788  JNZ 0x0c46a840
0c46a78e  CMP dword ptr [RAX + 0x20],0x0
0c46a792  JNZ 0x0c46a840
0c46a798  CMP dword ptr [RAX + 0x24],0x0
0c46a79c  JNZ 0x0c46a840
0c46a7a2  CMP dword ptr [RAX + 0x28],0x0
0c46a7a6  JNZ 0x0c46a840
0c46a7ac  CMP dword ptr [RAX + 0x2c],0x0
0c46a7b0  JNZ 0x0c46a840
0c46a7b6  CMP dword ptr [RAX + 0x30],0x0
0c46a7ba  JNZ 0x0c46a840
0c46a7c0  CMP dword ptr [RAX + 0x34],0x0
0c46a7c4  JNZ 0x0c46a840
0c46a7c6  CMP dword ptr [RAX + 0x38],0x0
0c46a7ca  JNZ 0x0c46a840
0c46a7cc  CMP dword ptr [RAX + 0x3c],0x0
0c46a7d0  JNZ 0x0c46a840
0c46a7d2  ADD RAX,0x200
0c46a7d8  DEC ESI
0c46a7da  JNZ 0x0c46a73f
0c46a7e0  MOV RAX,qword ptr [RSP + 0x18]
0c46a7e5  MOVAPS XMM0,xmmword ptr [RSP + 0x10]
0c46a7ea  MOVAPS xmmword ptr [RSP + 0x30],XMM0
0c46a7ef  TEST RAX,RAX
0c46a7f2  JZ 0x0c46a7f9
0c46a7f4  INC.LOCK qword ptr [RAX + 0x8]
0c46a7f9  MOV qword ptr [RSP + 0x8],RAX
0c46a7fe  MOV RDI,qword ptr [RSP + 0x28]
0c46a803  MOV RSI,RBX
0c46a806  LEA R8,[RSP + 0x30]
0c46a80b  CALL 0x0c469a90
0c46a810  MOV RCX,qword ptr [RSP + 0x8]
0c46a815  TEST RCX,RCX
0c46a818  JZ 0x0c46a840
0c46a81a  MOV RAX,-0x1
0c46a821  XADD.LOCK qword ptr [RCX + 0x8],RAX
0c46a827  TEST RAX,RAX
0c46a82a  JNZ 0x0c46a840
0c46a82c  MOV RAX,qword ptr [RCX]
0c46a82f  MOV RDI,RCX
0c46a832  CALL qword ptr [RAX + 0x10]
0c46a835  MOV RDI,qword ptr [RSP + 0x8]
0c46a83a  CALL 0x0412c2d0
0c46a83f  NOP
0c46a840  MOV RDX,R12
0c46a843  OR RDX,0x30
0c46a847  MOV RCX,R13
0c46a84a  OR RCX,0x40
0c46a84e  MOV RAX,qword ptr [RBX + 0x30]
0c46a852  LEA RAX,[RAX + RBP*0x4]
0c46a856  ADD RAX,0xc0
0c46a85c  MOV ESI,R14D
0c46a85f  CMP dword ptr [RAX],0x0
0c46a862  JNZ 0x0c46a960
0c46a868  CMP dword ptr [RAX + 0x4],0x0
0c46a86c  JNZ 0x0c46a960
0c46a872  CMP dword ptr [RAX + 0x8],0x0
0c46a876  JNZ 0x0c46a960
0c46a87c  CMP dword ptr [RAX + 0xc],0x0
0c46a880  JNZ 0x0c46a960
0c46a886  CMP dword ptr [RAX + 0x10],0x0
0c46a88a  JNZ 0x0c46a960
0c46a890  CMP dword ptr [RAX + 0x14],0x0
0c46a894  JNZ 0x0c46a960
0c46a89a  CMP dword ptr [RAX + 0x18],0x0
0c46a89e  JNZ 0x0c46a960
0c46a8a4  CMP dword ptr [RAX + 0x1c],0x0
0c46a8a8  JNZ 0x0c46a960
0c46a8ae  CMP dword ptr [RAX + 0x20],0x0
0c46a8b2  JNZ 0x0c46a960
0c46a8b8  CMP dword ptr [RAX + 0x24],0x0
0c46a8bc  JNZ 0x0c46a960
0c46a8c2  CMP dword ptr [RAX + 0x28],0x0
0c46a8c6  JNZ 0x0c46a960
0c46a8cc  CMP dword ptr [RAX + 0x2c],0x0
0c46a8d0  JNZ 0x0c46a960
0c46a8d6  CMP dword ptr [RAX + 0x30],0x0
0c46a8da  JNZ 0x0c46a960
0c46a8e0  CMP dword ptr [RAX + 0x34],0x0
0c46a8e4  JNZ 0x0c46a960
0c46a8e6  CMP dword ptr [RAX + 0x38],0x0
0c46a8ea  JNZ 0x0c46a960
0c46a8ec  CMP dword ptr [RAX + 0x3c],0x0
0c46a8f0  JNZ 0x0c46a960
0c46a8f2  ADD RAX,0x200
0c46a8f8  DEC ESI
0c46a8fa  JNZ 0x0c46a85f
0c46a900  MOV RAX,qword ptr [RSP + 0x18]
0c46a905  MOVAPS XMM0,xmmword ptr [RSP + 0x10]
0c46a90a  MOVAPS xmmword ptr [RSP + 0x30],XMM0
0c46a90f  TEST RAX,RAX
0c46a912  JZ 0x0c46a919
0c46a914  INC.LOCK qword ptr [RAX + 0x8]
0c46a919  MOV qword ptr [RSP + 0x8],RAX
0c46a91e  MOV RDI,qword ptr [RSP + 0x28]
0c46a923  MOV RSI,RBX
0c46a926  LEA R8,[RSP + 0x30]
0c46a92b  CALL 0x0c469a90
0c46a930  MOV RCX,qword ptr [RSP + 0x8]
0c46a935  TEST RCX,RCX
0c46a938  JZ 0x0c46a960
0c46a93a  MOV RAX,-0x1
0c46a941  XADD.LOCK qword ptr [RCX + 0x8],RAX
0c46a947  TEST RAX,RAX
0c46a94a  JNZ 0x0c46a960
0c46a94c  MOV RAX,qword ptr [RCX]
0c46a94f  MOV RDI,RCX
0c46a952  CALL qword ptr [RAX + 0x10]
0c46a955  MOV RDI,qword ptr [RSP + 0x8]
0c46a95a  CALL 0x0412c2d0
0c46a95f  NOP
0c46a960  MOV RDX,R12
0c46a963  OR RDX,0x40
0c46a967  MOV RCX,R13
0c46a96a  OR RCX,0x50
0c46a96e  MOV RAX,qword ptr [RBX + 0x30]
0c46a972  LEA RAX,[RAX + RBP*0x4]
0c46a976  ADD RAX,0x100
0c46a97c  MOV ESI,R14D
0c46a97f  CMP dword ptr [RAX],0x0
0c46a982  JNZ 0x0c46aa80
0c46a988  CMP dword ptr [RAX + 0x4],0x0
0c46a98c  JNZ 0x0c46aa80
0c46a992  CMP dword ptr [RAX + 0x8],0x0
0c46a996  JNZ 0x0c46aa80
0c46a99c  CMP dword ptr [RAX + 0xc],0x0
0c46a9a0  JNZ 0x0c46aa80
0c46a9a6  CMP dword ptr [RAX + 0x10],0x0
0c46a9aa  JNZ 0x0c46aa80
0c46a9b0  CMP dword ptr [RAX + 0x14],0x0
0c46a9b4  JNZ 0x0c46aa80
0c46a9ba  CMP dword ptr [RAX + 0x18],0x0
0c46a9be  JNZ 0x0c46aa80
0c46a9c4  CMP dword ptr [RAX + 0x1c],0x0
0c46a9c8  JNZ 0x0c46aa80
0c46a9ce  CMP dword ptr [RAX + 0x20],0x0
0c46a9d2  JNZ 0x0c46aa80
0c46a9d8  CMP dword ptr [RAX + 0x24],0x0
0c46a9dc  JNZ 0x0c46aa80
0c46a9e2  CMP dword ptr [RAX + 0x28],0x0
0c46a9e6  JNZ 0x0c46aa80
0c46a9ec  CMP dword ptr [RAX + 0x2c],0x0
0c46a9f0  JNZ 0x0c46aa80
0c46a9f6  CMP dword ptr [RAX + 0x30],0x0
0c46a9fa  JNZ 0x0c46aa80
0c46aa00  CMP dword ptr [RAX + 0x34],0x0
0c46aa04  JNZ 0x0c46aa80
0c46aa06  CMP dword ptr [RAX + 0x38],0x0
0c46aa0a  JNZ 0x0c46aa80
0c46aa0c  CMP dword ptr [RAX + 0x3c],0x0
0c46aa10  JNZ 0x0c46aa80
0c46aa12  ADD RAX,0x200
0c46aa18  DEC ESI
0c46aa1a  JNZ 0x0c46a97f
0c46aa20  MOV RAX,qword ptr [RSP + 0x18]
0c46aa25  MOVAPS XMM0,xmmword ptr [RSP + 0x10]
0c46aa2a  MOVAPS xmmword ptr [RSP + 0x30],XMM0
0c46aa2f  TEST RAX,RAX
0c46aa32  JZ 0x0c46aa39
0c46aa34  INC.LOCK qword ptr [RAX + 0x8]
0c46aa39  MOV qword ptr [RSP + 0x8],RAX
0c46aa3e  MOV RDI,qword ptr [RSP + 0x28]
0c46aa43  MOV RSI,RBX
0c46aa46  LEA R8,[RSP + 0x30]
0c46aa4b  CALL 0x0c469a90
0c46aa50  MOV RCX,qword ptr [RSP + 0x8]
0c46aa55  TEST RCX,RCX
0c46aa58  JZ 0x0c46aa80
0c46aa5a  MOV RAX,-0x1
0c46aa61  XADD.LOCK qword ptr [RCX + 0x8],RAX
0c46aa67  TEST RAX,RAX
0c46aa6a  JNZ 0x0c46aa80
0c46aa6c  MOV RAX,qword ptr [RCX]
0c46aa6f  MOV RDI,RCX
0c46aa72  CALL qword ptr [RAX + 0x10]
0c46aa75  MOV RDI,qword ptr [RSP + 0x8]
0c46aa7a  CALL 0x0412c2d0
0c46aa7f  NOP
0c46aa80  MOV RDX,R12
0c46aa83  OR RDX,0x50
0c46aa87  MOV RCX,R13
0c46aa8a  OR RCX,0x60
0c46aa8e  MOV RAX,qword ptr [RBX + 0x30]
0c46aa92  LEA RAX,[RAX + RBP*0x4]
0c46aa96  ADD RAX,0x140
0c46aa9c  MOV ESI,R14D
0c46aa9f  CMP dword ptr [RAX],0x0
0c46aaa2  JNZ 0x0c46aba0
0c46aaa8  CMP dword ptr [RAX + 0x4],0x0
0c46aaac  JNZ 0x0c46aba0
0c46aab2  CMP dword ptr [RAX + 0x8],0x0
0c46aab6  JNZ 0x0c46aba0
0c46aabc  CMP dword ptr [RAX + 0xc],0x0
0c46aac0  JNZ 0x0c46aba0
0c46aac6  CMP dword ptr [RAX + 0x10],0x0
0c46aaca  JNZ 0x0c46aba0
0c46aad0  CMP dword ptr [RAX + 0x14],0x0
0c46aad4  JNZ 0x0c46aba0
0c46aada  CMP dword ptr [RAX + 0x18],0x0
0c46aade  JNZ 0x0c46aba0
0c46aae4  CMP dword ptr [RAX + 0x1c],0x0
0c46aae8  JNZ 0x0c46aba0
0c46aaee  CMP dword ptr [RAX + 0x20],0x0
0c46aaf2  JNZ 0x0c46aba0
0c46aaf8  CMP dword ptr [RAX + 0x24],0x0
0c46aafc  JNZ 0x0c46aba0
0c46ab02  CMP dword ptr [RAX + 0x28],0x0
0c46ab06  JNZ 0x0c46aba0
0c46ab0c  CMP dword ptr [RAX + 0x2c],0x0
0c46ab10  JNZ 0x0c46aba0
0c46ab16  CMP dword ptr [RAX + 0x30],0x0
0c46ab1a  JNZ 0x0c46aba0
0c46ab20  CMP dword ptr [RAX + 0x34],0x0
0c46ab24  JNZ 0x0c46aba0
0c46ab26  CMP dword ptr [RAX + 0x38],0x0
0c46ab2a  JNZ 0x0c46aba0
0c46ab2c  CMP dword ptr [RAX + 0x3c],0x0
0c46ab30  JNZ 0x0c46aba0
0c46ab32  ADD RAX,0x200
0c46ab38  DEC ESI
0c46ab3a  JNZ 0x0c46aa9f
0c46ab40  MOV RAX,qword ptr [RSP + 0x18]
0c46ab45  MOVAPS XMM0,xmmword ptr [RSP + 0x10]
0c46ab4a  MOVAPS xmmword ptr [RSP + 0x30],XMM0
0c46ab4f  TEST RAX,RAX
0c46ab52  JZ 0x0c46ab59
0c46ab54  INC.LOCK qword ptr [RAX + 0x8]
0c46ab59  MOV qword ptr [RSP + 0x8],RAX
0c46ab5e  MOV RDI,qword ptr [RSP + 0x28]
0c46ab63  MOV RSI,RBX
0c46ab66  LEA R8,[RSP + 0x30]
0c46ab6b  CALL 0x0c469a90
0c46ab70  MOV RCX,qword ptr [RSP + 0x8]
0c46ab75  TEST RCX,RCX
0c46ab78  JZ 0x0c46aba0
0c46ab7a  MOV RAX,-0x1
0c46ab81  XADD.LOCK qword ptr [RCX + 0x8],RAX
0c46ab87  TEST RAX,RAX
0c46ab8a  JNZ 0x0c46aba0
0c46ab8c  MOV RAX,qword ptr [RCX]
0c46ab8f  MOV RDI,RCX
0c46ab92  CALL qword ptr [RAX + 0x10]
0c46ab95  MOV RDI,qword ptr [RSP + 0x8]
0c46ab9a  CALL 0x0412c2d0
0c46ab9f  NOP
0c46aba0  MOV RDX,R12
0c46aba3  OR RDX,0x60
0c46aba7  MOV RCX,R13
0c46abaa  OR RCX,0x70
0c46abae  MOV RAX,qword ptr [RBX + 0x30]
0c46abb2  LEA RAX,[RAX + RBP*0x4]
0c46abb6  ADD RAX,0x180
0c46abbc  MOV ESI,R14D
0c46abbf  CMP dword ptr [RAX],0x0
0c46abc2  JNZ 0x0c46acc0
0c46abc8  CMP dword ptr [RAX + 0x4],0x0
0c46abcc  JNZ 0x0c46acc0
0c46abd2  CMP dword ptr [RAX + 0x8],0x0
0c46abd6  JNZ 0x0c46acc0
0c46abdc  CMP dword ptr [RAX + 0xc],0x0
0c46abe0  JNZ 0x0c46acc0
0c46abe6  CMP dword ptr [RAX + 0x10],0x0
0c46abea  JNZ 0x0c46acc0
0c46abf0  CMP dword ptr [RAX + 0x14],0x0
0c46abf4  JNZ 0x0c46acc0
0c46abfa  CMP dword ptr [RAX + 0x18],0x0
0c46abfe  JNZ 0x0c46acc0
0c46ac04  CMP dword ptr [RAX + 0x1c],0x0
0c46ac08  JNZ 0x0c46acc0
0c46ac0e  CMP dword ptr [RAX + 0x20],0x0
0c46ac12  JNZ 0x0c46acc0
0c46ac18  CMP dword ptr [RAX + 0x24],0x0
0c46ac1c  JNZ 0x0c46acc0
0c46ac22  CMP dword ptr [RAX + 0x28],0x0
0c46ac26  JNZ 0x0c46acc0
0c46ac2c  CMP dword ptr [RAX + 0x2c],0x0
0c46ac30  JNZ 0x0c46acc0
0c46ac36  CMP dword ptr [RAX + 0x30],0x0
0c46ac3a  JNZ 0x0c46acc0
0c46ac40  CMP dword ptr [RAX + 0x34],0x0
0c46ac44  JNZ 0x0c46acc0
0c46ac46  CMP dword ptr [RAX + 0x38],0x0
0c46ac4a  JNZ 0x0c46acc0
0c46ac4c  CMP dword ptr [RAX + 0x3c],0x0
0c46ac50  JNZ 0x0c46acc0
0c46ac52  ADD RAX,0x200
0c46ac58  DEC ESI
0c46ac5a  JNZ 0x0c46abbf
0c46ac60  MOV RAX,qword ptr [RSP + 0x18]
0c46ac65  MOVAPS XMM0,xmmword ptr [RSP + 0x10]
0c46ac6a  MOVAPS xmmword ptr [RSP + 0x30],XMM0
0c46ac6f  TEST RAX,RAX
0c46ac72  JZ 0x0c46ac79
0c46ac74  INC.LOCK qword ptr [RAX + 0x8]
0c46ac79  MOV qword ptr [RSP + 0x8],RAX
0c46ac7e  MOV RDI,qword ptr [RSP + 0x28]
0c46ac83  MOV RSI,RBX
0c46ac86  LEA R8,[RSP + 0x30]
0c46ac8b  CALL 0x0c469a90
0c46ac90  MOV RCX,qword ptr [RSP + 0x8]
0c46ac95  TEST RCX,RCX
0c46ac98  JZ 0x0c46acc0
0c46ac9a  MOV RAX,-0x1
0c46aca1  XADD.LOCK qword ptr [RCX + 0x8],RAX
0c46aca7  TEST RAX,RAX
0c46acaa  JNZ 0x0c46acc0
0c46acac  MOV RAX,qword ptr [RCX]
0c46acaf  MOV RDI,RCX
0c46acb2  CALL qword ptr [RAX + 0x10]
0c46acb5  MOV RDI,qword ptr [RSP + 0x8]
0c46acba  CALL 0x0412c2d0
0c46acbf  NOP
0c46acc0  OR R12,0x70
0c46acc4  OR R13,0x80
0c46accb  MOV RAX,qword ptr [RBX + 0x30]
0c46accf  LEA RAX,[RAX + RBP*0x4]
0c46acd3  ADD RAX,0x1c0
0c46acd9  CMP dword ptr [RAX],0x0
0c46acdc  JNZ 0x0c46a470
0c46ace2  CMP dword ptr [RAX + 0x4],0x0
0c46ace6  JNZ 0x0c46a470
0c46acec  CMP dword ptr [RAX + 0x8],0x0
0c46acf0  JNZ 0x0c46a470
0c46acf6  CMP dword ptr [RAX + 0xc],0x0
0c46acfa  JNZ 0x0c46a470
0c46ad00  CMP dword ptr [RAX + 0x10],0x0
0c46ad04  JNZ 0x0c46a470
0c46ad0a  CMP dword ptr [RAX + 0x14],0x0
0c46ad0e  JNZ 0x0c46a470
0c46ad14  CMP dword ptr [RAX + 0x18],0x0
0c46ad18  JNZ 0x0c46a470
0c46ad1e  CMP dword ptr [RAX + 0x1c],0x0
0c46ad22  JNZ 0x0c46a470
0c46ad28  CMP dword ptr [RAX + 0x20],0x0
0c46ad2c  JNZ 0x0c46a470
0c46ad32  CMP dword ptr [RAX + 0x24],0x0
0c46ad36  JNZ 0x0c46a470
0c46ad3c  CMP dword ptr [RAX + 0x28],0x0
0c46ad40  JNZ 0x0c46a470
0c46ad46  CMP dword ptr [RAX + 0x2c],0x0
0c46ad4a  JNZ 0x0c46a470
0c46ad50  CMP dword ptr [RAX + 0x30],0x0
0c46ad54  JNZ 0x0c46a470
0c46ad5a  CMP dword ptr [RAX + 0x34],0x0
0c46ad5e  JNZ 0x0c46a470
0c46ad64  CMP dword ptr [RAX + 0x38],0x0
0c46ad68  JNZ 0x0c46a470
0c46ad6e  CMP dword ptr [RAX + 0x3c],0x0
0c46ad72  JNZ 0x0c46a470
0c46ad78  ADD RAX,0x200
0c46ad7e  DEC R14D
0c46ad81  JNZ 0x0c46acd9
0c46ad87  MOV R14,qword ptr [RSP + 0x18]
0c46ad8c  MOVAPS XMM0,xmmword ptr [RSP + 0x10]
0c46ad91  MOVAPS xmmword ptr [RSP + 0x30],XMM0
0c46ad96  TEST R14,R14
0c46ad99  JZ 0x0c46ada0
0c46ad9b  INC.LOCK qword ptr [R14 + 0x8]
0c46ada0  MOV RDI,qword ptr [RSP + 0x28]
0c46ada5  MOV RSI,RBX
0c46ada8  MOV RDX,R12
0c46adab  MOV RCX,R13
0c46adae  LEA R8,[RSP + 0x30]
0c46adb3  CALL 0x0c469a90
0c46adb8  TEST R14,R14
0c46adbb  JZ 0x0c46a470
0c46adc1  MOV RAX,-0x1
0c46adc8  XADD.LOCK qword ptr [R14 + 0x8],RAX
0c46adce  TEST RAX,RAX
0c46add1  JNZ 0x0c46a470
0c46add7  MOV RAX,qword ptr [R14]
0c46adda  MOV RDI,R14
0c46addd  CALL qword ptr [RAX + 0x10]
0c46ade0  MOV RDI,R14
0c46ade3  CALL 0x0412c2d0
0c46ade8  JMP 0x0c46a470
0c46aded  MOV RBX,qword ptr [RSP + 0x18]
0c46adf2  TEST RBX,RBX
0c46adf5  JZ 0x0c46ae1a
0c46adf7  MOV RAX,-0x1
0c46adfe  XADD.LOCK qword ptr [RBX + 0x8],RAX
0c46ae04  TEST RAX,RAX
0c46ae07  JNZ 0x0c46ae1a
0c46ae09  MOV RAX,qword ptr [RBX]
0c46ae0c  MOV RDI,RBX
0c46ae0f  CALL qword ptr [RAX + 0x10]
0c46ae12  MOV RDI,RBX
0c46ae15  CALL 0x0412c2d0
0c46ae1a  ADD RSP,0x58
0c46ae1e  POP RBX
0c46ae1f  POP R12
0c46ae21  POP R13
0c46ae23  POP R14
0c46ae25  POP R15
0c46ae27  POP RBP
0c46ae28  RET
0c46ae29  CALL 0x04890760
0c46ae2e  MOV EDI,0x30
0c46ae33  XOR ESI,ESI
0c46ae35  CALL 0x0eec74c0
0c46ae3a  JMP 0x0c46a42b
```
