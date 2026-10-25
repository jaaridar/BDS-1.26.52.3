# FUN_04fbc500 (disassembly)

```
04fbc190  LEA RDI,[RSP + 0xa8]
04fbc198  CALL 0x04862ba0
04fbc19d  MOV RAX,qword ptr [RSP + 0x60]
04fbc1a2  MOV RSI,qword ptr [RAX + 0x10]
04fbc1a6  LEA R14,[RSP + 0x68]
04fbc1ab  MOV RDI,R14
04fbc1ae  CALL 0x048655b0
04fbc1b3  LEA RDI,[RSP + 0xa8]
04fbc1bb  MOV RSI,R14
04fbc1be  CALL 0x04862c80
04fbc1c3  MOV EBX,EAX
04fbc1c5  MOV RDI,R14
04fbc1c8  CALL 0x04862b40
04fbc1cd  TEST BL,BL
04fbc1cf  JNZ 0x04fbc583
04fbc1d5  LEA RDI,[RSP + 0xa8]
04fbc1dd  CALL 0x04862ca0
04fbc1e2  MOV R15,RAX
04fbc1e5  MOV RDI,RAX
04fbc1e8  CALL 0x0eee2e90
04fbc1ed  CMP RAX,-0x8
04fbc1f1  JNC 0x04fbcbf0
04fbc1f7  MOV R12,RAX
04fbc1fa  CMP RAX,0x17
04fbc1fe  JNC 0x04fbc220
04fbc200  LEA EAX,[R12 + R12*0x1]
04fbc204  MOV byte ptr [RSP + 0x40],AL
04fbc208  LEA R14,[RSP + 0x41]
04fbc20d  TEST R12,R12
04fbc210  JNZ 0x04fbc26b
04fbc212  JMP 0x04fbc279
04fbc220  MOV RAX,R12
04fbc223  OR RAX,0x7
04fbc227  LEA R13,[RAX + 0x1]
04fbc22b  CMP RAX,0x17
04fbc22f  MOV EAX,0x1a
04fbc234  CMOVZ R13,RAX
04fbc238  MOV RAX,qword ptr [0x0f5463b0]
04fbc23f  LEA RDI,[0xf5463b0]
04fbc246  MOV RSI,R13
04fbc249  CALL qword ptr [RAX + 0x10]
04fbc24c  MOV R14,RAX
04fbc24f  TEST RAX,RAX
04fbc252  JZ 0x04fbc574
04fbc258  MOV qword ptr [RSP + 0x50],R14
04fbc25d  OR R13,0x1
04fbc261  MOV qword ptr [RSP + 0x40],R13
04fbc266  MOV qword ptr [RSP + 0x48],R12
04fbc26b  MOV RDI,R14
04fbc26e  MOV RSI,R15
04fbc271  MOV RDX,R12
04fbc274  CALL 0x0eee2ee0
04fbc279  MOV byte ptr [R14 + R12*0x1],0x0
04fbc27e  MOVZX EAX,byte ptr [RSP + 0x40]
04fbc283  MOV ECX,EAX
04fbc285  SHR ECX,0x1
04fbc287  TEST AL,0x1
04fbc289  MOV RAX,qword ptr [RSP + 0x50]
04fbc28e  LEA RDX,[RSP + 0x41]
04fbc293  CMOVZ RAX,RDX
04fbc297  CMOVNZ RCX,qword ptr [RSP + 0x48]
04fbc29d  MOV qword ptr [RSP + 0x68],RAX
04fbc2a2  MOV qword ptr [RSP + 0x70],RCX
04fbc2a7  MOV byte ptr [RSP + 0x78],0x1
04fbc2ac  MOV qword ptr [RSP + 0xb8],0x0
04fbc2b8  MOV RAX,qword ptr [RSP + 0x78]
04fbc2bd  MOV qword ptr [RSP + 0x10],RAX
04fbc2c2  MOVUPS XMM0,xmmword ptr [RSP + 0x68]
04fbc2c7  MOVUPS xmmword ptr [RSP],XMM0
04fbc2cb  LEA RDI,[RSP + 0xc0]
04fbc2d3  LEA RSI,[RSP + 0xb8]
04fbc2db  CALL 0x0eeb79f0
04fbc2e0  MOV RSI,qword ptr [RSP + 0xb8]
04fbc2e8  MOV RAX,0x80000000000000
04fbc2f2  TEST RSI,RAX
04fbc2f5  JZ 0x04fbc319
04fbc2f7  MOV RAX,-0xff000000000001
04fbc301  AND RSI,RAX
04fbc304  ADD RSI,-0x8
04fbc308  MOV RAX,qword ptr [0x0f5463b0]
04fbc30f  LEA RDI,[0xf5463b0]
04fbc316  CALL qword ptr [RAX + 0x28]
04fbc319  LEA RDI,[RSP + 0xa8]
04fbc321  CALL 0x04862b80
04fbc326  MOV RDI,qword ptr [RSP + 0x58]
04fbc32b  MOV RSI,qword ptr [RSP + 0x60]
04fbc330  LEA RDX,[RSP + 0x40]
04fbc335  MOV RCX,RAX
04fbc338  XOR R8D,R8D
04fbc33b  CALL 0x04fbd340
04fbc340  MOV R13,RAX
04fbc343  LEA RDI,[RSP + 0xa8]
04fbc34b  CALL 0x04862b80
04fbc350  MOV qword ptr [RSP + 0x90],RAX
04fbc358  MOV RBP,qword ptr [RSP + 0x28]
04fbc35d  MOV RAX,qword ptr [RSP + 0x30]
04fbc362  CMP RBP,RAX
04fbc365  JNC 0x04fbc390
04fbc367  MOV qword ptr [RBP],R13
04fbc36b  LEA RDI,[RBP + 0x8]
04fbc36f  TEST byte ptr [RSP + 0x40],0x1
04fbc374  JNZ 0x04fbc440
04fbc37a  MOV RAX,qword ptr [RSP + 0x50]
04fbc37f  MOV qword ptr [RDI + 0x10],RAX
04fbc383  MOVUPS XMM0,xmmword ptr [RSP + 0x40]
04fbc388  MOVUPS xmmword ptr [RDI],XMM0
04fbc38b  JMP 0x04fbc44f
04fbc390  MOV R12,qword ptr [RSP + 0x20]
04fbc395  MOV R15,RBP
04fbc398  SUB R15,R12
04fbc39b  MOV R14,R15
04fbc39e  SAR R14,0x3
04fbc3a2  MOV RCX,-0x3333333333333333
04fbc3ac  IMUL R14,RCX
04fbc3b0  INC R14
04fbc3b3  MOV RDX,0x666666666666666
04fbc3bd  CMP R14,RDX
04fbc3c0  JA 0x04fbcbf5
04fbc3c6  SUB RAX,R12
04fbc3c9  SAR RAX,0x3
04fbc3cd  IMUL RAX,RCX
04fbc3d1  LEA RCX,[RAX + RAX*0x1]
04fbc3d5  CMP RCX,R14
04fbc3d8  CMOVA R14,RCX
04fbc3dc  MOV RCX,0x333333333333333
04fbc3e6  CMP RAX,RCX
04fbc3e9  CMOVNC R14,RDX
04fbc3ed  LEA RAX,[RSP + 0x20]
04fbc3f2  MOV qword ptr [RSP + 0x88],RAX
04fbc3fa  TEST R14,R14
04fbc3fd  JZ 0x04fbc464
04fbc3ff  CMP R14,RDX
04fbc402  JA 0x04fbcbfa
04fbc408  LEA RAX,[R14*0x8]
04fbc410  LEA RBX,[RAX + RAX*0x4]
04fbc414  MOV RAX,qword ptr [0x0f5463b0]
04fbc41b  LEA RDI,[0xf5463b0]
04fbc422  MOV RSI,RBX
04fbc425  CALL qword ptr [RAX + 0x10]
04fbc428  TEST RAX,RAX
04fbc42b  JNZ 0x04fbc466
04fbc42d  MOV RDI,RBX
04fbc430  XOR ESI,ESI
04fbc432  CALL 0x0eec74c0
04fbc437  XOR EAX,EAX
04fbc439  JMP 0x04fbc466
04fbc440  MOV RDX,qword ptr [RSP + 0x48]
04fbc445  MOV RSI,qword ptr [RSP + 0x50]
04fbc44a  CALL 0x0412e5e0
04fbc44f  MOV RAX,qword ptr [RSP + 0x90]
04fbc457  MOV qword ptr [RBP + 0x20],RAX
04fbc45b  ADD RBP,0x28
04fbc45f  JMP 0x04fbc53f
04fbc464  XOR EAX,EAX
04fbc466  MOV qword ptr [RSP + 0x68],RAX
04fbc46b  LEA RBX,[RAX + R15*0x1]
04fbc46f  MOV qword ptr [RSP + 0x78],RBX
04fbc474  MOV qword ptr [RSP + 0x70],RBX
04fbc479  LEA RCX,[R14 + R14*0x4]
04fbc47d  LEA RCX,[RAX + RCX*0x8]
04fbc481  MOV qword ptr [RSP + 0x80],RCX
04fbc489  MOV qword ptr [RAX + R15*0x1],R13
04fbc48d  LEA RDI,[RAX + R15*0x1]
04fbc491  ADD RDI,0x8
04fbc495  TEST byte ptr [RSP + 0x40],0x1
04fbc49a  JNZ 0x04fbc4c0
04fbc49c  MOV RAX,qword ptr [RSP + 0x50]
04fbc4a1  MOV qword ptr [RDI + 0x10],RAX
04fbc4a5  MOVUPS XMM0,xmmword ptr [RSP + 0x40]
04fbc4aa  MOVUPS xmmword ptr [RDI],XMM0
04fbc4ad  MOV R14,RBX
04fbc4b0  MOV RAX,RBX
04fbc4b3  JMP 0x04fbc4e9
04fbc4c0  MOV RDX,qword ptr [RSP + 0x48]
04fbc4c5  MOV RSI,qword ptr [RSP + 0x50]
04fbc4ca  CALL 0x0412e5e0
04fbc4cf  MOV R14,qword ptr [RSP + 0x70]
04fbc4d4  MOV RAX,qword ptr [RSP + 0x78]
04fbc4d9  MOV R12,qword ptr [RSP + 0x20]
04fbc4de  MOV RBP,qword ptr [RSP + 0x28]
04fbc4e3  MOV R15,RBP
04fbc4e6  SUB R15,R12
04fbc4e9  SUB R14,R15
04fbc4ec  MOV RCX,qword ptr [RSP + 0x90]
04fbc4f4  MOV qword ptr [RBX + 0x20],RCX
04fbc4f8  ADD RAX,0x28
04fbc500  JS 0x04fbc54a
04fbc502  LEA EDI,[RSP + 0x20]
04fbc506  MOV RSI,R12
04fbc509  MOV RDX,RBP
04fbc50c  MOV RCX,R14
04fbc50f  CALL 0x04fbd8b0
04fbc514  MOV RDI,qword ptr [RSP + 0x20]
04fbc519  MOV RSI,qword ptr [RSP + 0x30]
04fbc51e  MOV qword ptr [RSP + 0x20],R14
04fbc523  MOVUPS XMM0,xmmword ptr [RSP + 0x78]
04fbc528  MOV RBP,qword ptr [RSP + 0x78]
04fbc52d  MOVUPS xmmword ptr [RSP + 0x28],XMM0
04fbc532  TEST RDI,RDI
04fbc535  JZ 0x04fbc53f
04fbc537  SUB RSI,RDI
04fbc53a  CALL 0x0412a280
04fbc53f  MOV qword ptr [RSP + 0x28],RBP
04fbc54a  ADD byte ptr [RAX],AL
04fbc54c  CALL 0x0eeb81b0
04fbc551  TEST byte ptr [RSP + 0x40],0x1
04fbc556  JZ 0x04fbc190
04fbc55c  MOV RSI,qword ptr [RSP + 0x40]
04fbc561  MOV RDI,qword ptr [RSP + 0x50]
04fbc566  AND RSI,-0x2
04fbc56a  CALL 0x0412a280
04fbc56f  JMP 0x04fbc190
04fbc574  MOV RDI,R13
04fbc577  XOR ESI,ESI
04fbc579  CALL 0x0eec74c0
04fbc57e  JMP 0x04fbc258
04fbc583  LEA RDI,[RSP + 0xa8]
04fbc58b  CALL 0x04862b40
04fbc590  MOV RAX,qword ptr [RSP + 0x58]
04fbc595  MOV RBX,qword ptr [RAX + 0xb8]
04fbc59c  MOV RAX,qword ptr [RAX + 0xc0]
04fbc5a3  MOV qword ptr [RSP + 0xd8],RAX
04fbc5ab  CMP RBX,RAX
04fbc5ae  JZ 0x04fbcb72
04fbc5b4  MOV RAX,qword ptr FS:[0x0]
04fbc5c0  MOV qword ptr [RSP + 0x98],RAX
04fbc5c8  LEA RCX,[RAX + -0x28]
04fbc5cf  MOV qword ptr [RSP + 0xe8],RCX
04fbc5d7  LEA R15,[RAX + -0x20]
04fbc5de  MOV qword ptr [RSP + 0x58],R15
04fbc5e3  JMP 0x04fbc60d
04fbc5f0  MOV RBX,qword ptr [RSP + 0xe0]
04fbc5f8  ADD RBX,0xa8
04fbc5ff  CMP RBX,qword ptr [RSP + 0xd8]
04fbc607  JZ 0x04fbcb72
04fbc60d  MOV R13,qword ptr [RBX + 0x88]
04fbc614  MOV qword ptr [RSP + 0xe0],RBX
04fbc61c  MOV RAX,qword ptr [RBX + 0x90]
04fbc623  MOV qword ptr [RSP + 0xf0],RAX
04fbc62b  CMP R13,RAX
04fbc62e  JZ 0x04fbc5f0
04fbc630  MOV RAX,qword ptr [RSP + 0x20]
04fbc635  CMP RAX,qword ptr [RSP + 0x28]
04fbc63a  JNZ 0x04fbc64e
04fbc63c  JMP 0x04fbc5f0
04fbc640  ADD R13,0x38
04fbc644  CMP R13,qword ptr [RSP + 0xf0]
04fbc64c  JZ 0x04fbc5f0
04fbc64e  MOV RBP,qword ptr [RSP + 0x20]
04fbc653  MOV RCX,qword ptr [RSP + 0x28]
04fbc658  CMP RBP,RCX
04fbc65b  MOV qword ptr [RSP + 0x90],RCX
04fbc663  JNZ 0x04fbc681
04fbc665  JMP 0x04fbc640
04fbc670  MOV RCX,qword ptr [RSP + 0x90]
04fbc678  ADD RBP,0x28
04fbc67c  CMP RBP,RCX
04fbc67f  JZ 0x04fbc640
04fbc681  MOV RAX,qword ptr [R13 + 0x28]
04fbc685  CMP RAX,qword ptr [RBP]
04fbc689  JNZ 0x04fbc678
04fbc68b  MOVZX EAX,byte ptr [RBP + 0x8]
04fbc68f  LEA R14,[RBP + 0x9]
04fbc693  MOV R15D,EAX
04fbc696  SHR R15D,0x1
04fbc699  TEST AL,0x1
04fbc69b  CMOVNZ R14,qword ptr [RBP + 0x18]
04fbc6a0  CMOVNZ R15,qword ptr [RBP + 0x10]
04fbc6a5  MOV qword ptr [RSP + 0xc0],0x0
04fbc6b1  TEST R14,R14
04fbc6b4  JZ 0x04fbc725
04fbc6b6  LEA RBX,[R15 + 0x9]
04fbc6ba  MOV RAX,qword ptr [0x0f5463b0]
04fbc6c1  MOV EDX,0x8
04fbc6c6  LEA RDI,[0xf5463b0]
04fbc6cd  MOV RSI,RBX
04fbc6d0  CALL qword ptr [RAX + 0x20]
04fbc6d3  MOV R12,RAX
04fbc6d6  TEST RAX,RAX
04fbc6d9  SETNZ AL
04fbc6dc  TEST RBX,RBX
04fbc6df  SETZ CL
04fbc6e2  OR CL,AL
04fbc6e4  JZ 0x04fbc869
04fbc6ea  MOV qword ptr [R12],R15
04fbc6ee  MOV RBX,R12
04fbc6f1  ADD RBX,0x8
04fbc6f5  MOV RDI,RBX
04fbc6f8  MOV RSI,R14
04fbc6fb  MOV RDX,R15
04fbc6fe  CALL 0x0eee2f00
04fbc703  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
04fbc709  MOV RAX,-0xff000000000001
04fbc713  AND RBX,RAX
04fbc716  MOV RAX,0x80000000000000
04fbc720  OR RBX,RAX
04fbc723  JMP 0x04fbc730
04fbc725  AND R15D,0x7f
04fbc729  SHL R15,0x30
04fbc72d  MOV RBX,R15
04fbc730  MOV qword ptr [RSP + 0xc0],RBX
04fbc738  MOV byte ptr [RSP + 0x68],0x0
04fbc73d  MOV byte ptr [RSP + 0x78],0x0
04fbc742  MOV RAX,qword ptr [RSP + 0x78]
04fbc747  MOV qword ptr [RSP + 0x10],RAX
04fbc74c  MOVUPS XMM0,xmmword ptr [RSP + 0x68]
04fbc751  MOVUPS xmmword ptr [RSP],XMM0
04fbc755  LEA RDI,[RSP + 0x40]
04fbc75a  LEA RSI,[RSP + 0xc0]
04fbc762  CALL 0x0eeb79f0
04fbc767  MOV R15,qword ptr [RSP + 0x58]
04fbc76c  MOV RSI,qword ptr [RSP + 0xc0]
04fbc774  MOV RAX,0x80000000000000
04fbc77e  TEST RSI,RAX
04fbc781  JZ 0x04fbc7a5
04fbc783  MOV RAX,-0xff000000000001
04fbc78d  AND RSI,RAX
04fbc790  ADD RSI,-0x8
04fbc794  MOV RAX,qword ptr [0x0f5463b0]
04fbc79b  LEA RDI,[0xf5463b0]
04fbc7a2  CALL qword ptr [RAX + 0x28]
04fbc7a5  LEA RDX,[RBP + 0x8]
04fbc7a9  MOV RDI,qword ptr [RBP]
04fbc7ad  MOV RCX,qword ptr [RBP + 0x20]
04fbc7b1  MOV RAX,qword ptr [RDI]
04fbc7b4  MOV RSI,qword ptr [RSP + 0x60]
04fbc7b9  XOR R8D,R8D
04fbc7bc  CALL qword ptr [RAX + 0x20]
04fbc7bf  CMP byte ptr [RSP + 0x40],0x1
04fbc7c4  JNZ 0x04fbc9e0
04fbc7ca  MOV RDI,qword ptr [RSP + 0x50]
04fbc7cf  TEST RDI,RDI
04fbc7d2  JZ 0x04fbc670
04fbc7d8  CALL 0x0412c300
04fbc7dd  TEST RAX,RAX
04fbc7e0  JZ 0x04fbc9e0
04fbc7e6  MOV R12,RAX
04fbc7e9  MOV RBX,qword ptr [RSP + 0x48]
04fbc7ee  TEST RBX,RBX
04fbc7f1  JZ 0x04fbc9c0
04fbc7f7  MOVZX EAX,byte ptr [0x0f7ba228]
04fbc7fe  TEST AL,AL
04fbc800  JZ 0x04fbca82
04fbc806  MOV qword ptr [RSP + 0xa0],RBX
04fbc80e  ADD RBX,0x78
04fbc812  MOV R14D,dword ptr [RBX]
04fbc815  MOV RAX,qword ptr [RSP + 0x98]
04fbc81d  CMP byte ptr [RAX + -0x8],0x0
04fbc824  JZ 0x04fbc87b
04fbc826  MOV RCX,qword ptr [RSP + 0xe8]
04fbc82e  MOV RAX,qword ptr [RCX + 0x8]
04fbc832  MOV RCX,qword ptr [RCX + 0x10]
04fbc836  SUB RCX,RAX
04fbc839  SAR RCX,0x3
04fbc83d  CMP RCX,R14
04fbc840  JBE 0x04fbc8cc
04fbc846  MOV R14,qword ptr [RAX + R14*0x8]
04fbc84a  TEST R14,R14
04fbc84d  JZ 0x04fbc900
04fbc853  ADD R14,0x10
04fbc857  MOV RBX,qword ptr [R14 + 0x8]
04fbc85b  CMP qword ptr [R14],RBX
04fbc85e  JNZ 0x04fbc9b5
04fbc864  JMP 0x04fbc9c0
04fbc869  MOV ESI,0x8
04fbc86e  MOV RDI,RBX
04fbc871  CALL 0x0eec74c0
04fbc876  JMP 0x04fbc6ea
04fbc87b  MOV RAX,qword ptr [RSP + 0x98]
04fbc883  LEA RDI,[RAX + -0x28]
04fbc88a  LEA RSI,[0xf7ba230]
04fbc891  CALL 0x0eee07b0
04fbc896  MOV R15,qword ptr [RSP + 0x98]
04fbc89e  LEA RSI,[R15 + -0x28]
04fbc8a5  LEA RDI,[0xeee0b40]
04fbc8ac  LEA RDX,[0xf53dab8]
04fbc8b3  CALL 0x0417d010
04fbc8b8  MOV RAX,R15
04fbc8bb  MOV R15,qword ptr [RSP + 0x58]
04fbc8c0  MOV byte ptr [RAX + -0x8],0x1
04fbc8c7  JMP 0x04fbc826
04fbc8cc  LEA RDI,[0xf7ba1d0]
04fbc8d3  CALL 0x0412d680
04fbc8d8  LEA ESI,[R14 + 0x1]
04fbc8dc  MOV RDI,R15
04fbc8df  CALL 0x0eee1060
04fbc8e4  LEA RDI,[0xf7ba1d0]
04fbc8eb  CALL 0x0412d6b0
04fbc8f0  MOV RAX,qword ptr [R15]
04fbc8f3  MOV R14,qword ptr [RAX + R14*0x8]
04fbc8f7  TEST R14,R14
04fbc8fa  JNZ 0x04fbc853
04fbc900  MOV RAX,qword ptr [0x0f5463b0]
04fbc907  MOV ESI,0x40
04fbc90c  LEA RDI,[0xf5463b0]
04fbc913  CALL qword ptr [RAX + 0x10]
04fbc916  MOV R15,RAX
04fbc919  TEST RAX,RAX
04fbc91c  JZ 0x04fbca71
04fbc922  MOV qword ptr [R15],R15
04fbc925  MOV qword ptr [R15 + 0x8],R15
04fbc929  MOV R14,R15
04fbc92c  ADD R14,0x10
04fbc930  XORPS XMM0,XMM0
04fbc933  MOVUPS xmmword ptr [R15 + 0x10],XMM0
04fbc938  MOVUPS xmmword ptr [R15 + 0x20],XMM0
04fbc93d  MOVUPS xmmword ptr [R15 + 0x30],XMM0
04fbc942  MOV qword ptr [RSP + 0x68],R14
04fbc947  MOV RAX,qword ptr [RSP + 0xa0]
04fbc94f  MOV RDI,qword ptr [RAX + 0x30]
04fbc953  TEST RDI,RDI
04fbc956  JZ 0x04fbcbeb
04fbc95c  MOV RAX,qword ptr [RDI]
04fbc95f  LEA RSI,[RSP + 0x68]
04fbc964  CALL qword ptr [RAX + 0x30]
04fbc967  MOV RDI,RBX
04fbc96a  MOV RSI,R15
04fbc96d  CALL 0x0eee1580
04fbc972  MOV RAX,qword ptr [RSP + 0xa0]
04fbc97a  LEA RBX,[RAX + 0x50]
04fbc97e  MOV RDI,RBX
04fbc981  CALL 0x0412d680
04fbc986  MOV RDX,qword ptr [RSP + 0xa0]
04fbc98e  LEA RAX,[RDX + 0x40]
04fbc992  MOV RCX,qword ptr [RDX + 0x48]
04fbc996  MOV qword ptr [R15 + 0x8],RCX
04fbc99a  MOV qword ptr [R15],RAX
04fbc99d  MOV qword ptr [RCX],R15
04fbc9a0  MOV qword ptr [RDX + 0x48],R15
04fbc9a4  MOV RDI,RBX
04fbc9a7  CALL 0x0412d6b0
04fbc9ac  MOV RBX,qword ptr [R14 + 0x8]
04fbc9b0  CMP qword ptr [R14],RBX
04fbc9b3  JZ 0x04fbc9c0
04fbc9b5  LEA RAX,[RSP + 0x40]
04fbc9ba  CMP qword ptr [RBX + -0x8],RAX
04fbc9be  JZ 0x04fbc9f8
04fbc9c0  MOV RAX,-0x1
04fbc9c7  XADD.LOCK qword ptr [R12 + 0x8],RAX
04fbc9ce  TEST RAX,RAX
04fbc9d1  JZ 0x04fbca50
04fbc9d3  NOP dword ptr CS:[RAX + RAX*0x1]
04fbc9e0  MOV RDI,qword ptr [RSP + 0x50]
04fbc9e5  TEST RDI,RDI
04fbc9e8  JZ 0x04fbc670
04fbc9ee  CALL 0x0412c2d0
04fbc9f3  JMP 0x04fbc670
04fbc9f8  MOV RSI,qword ptr [RBX + -0x10]
04fbc9fc  MOV RAX,0x80000000000000
04fbca06  TEST RSI,RAX
04fbca09  JZ 0x04fbca2d
04fbca0b  MOV RAX,-0xff000000000001
04fbca15  AND RSI,RAX
04fbca18  ADD RSI,-0x8
04fbca1c  MOV RAX,qword ptr [0x0f5463b0]
04fbca23  LEA RDI,[0xf5463b0]
04fbca2a  CALL qword ptr [RAX + 0x28]
04fbca2d  MOV qword ptr [RBX + -0x10],0x0
04fbca35  ADD RBX,-0x28
04fbca39  MOV qword ptr [R14 + 0x8],RBX
04fbca3d  MOV RAX,-0x1
04fbca44  XADD.LOCK qword ptr [R12 + 0x8],RAX
04fbca4b  TEST RAX,RAX
04fbca4e  JNZ 0x04fbc9e0
04fbca50  MOV RAX,qword ptr [R12]
04fbca54  MOV RDI,R12
04fbca57  CALL qword ptr [RAX + 0x10]
04fbca5a  MOV RDI,R12
04fbca5d  CALL 0x0412c2d0
04fbca62  MOV RDI,qword ptr [RSP + 0x50]
04fbca67  TEST RDI,RDI
04fbca6a  JNZ 0x04fbc9ee
04fbca6c  JMP 0x04fbc670
04fbca71  MOV EDI,0x40
04fbca76  XOR ESI,ESI
04fbca78  CALL 0x0eec74c0
04fbca7d  JMP 0x04fbc922
04fbca82  LEA RDI,[0xf7ba228]
04fbca89  CALL 0x04108328
04fbca8e  TEST EAX,EAX
04fbca90  JZ 0x04fbc806
04fbca96  XORPS XMM0,XMM0
04fbca99  MOVUPS xmmword ptr [0x0f7ba200],XMM0
04fbcaa0  MOVUPS xmmword ptr [0x0f7ba1f0],XMM0
04fbcaa7  MOVUPS xmmword ptr [0x0f7ba1e0],XMM0
04fbcaae  MOVUPS xmmword ptr [0x0f7ba1d0],XMM0
04fbcab5  MOV RAX,qword ptr [0x0f5463b0]
04fbcabc  MOV ESI,0x80
04fbcac1  LEA RDI,[0xf5463b0]
04fbcac8  CALL qword ptr [RAX + 0x10]
04fbcacb  MOV R14,RAX
04fbcace  TEST RAX,RAX
04fbcad1  JZ 0x04fbcb61
04fbcad7  MOV qword ptr [0x0f7ba1f8],R14
04fbcade  MOV RAX,R14
04fbcae1  SUB RAX,-0x80
04fbcae5  MOV qword ptr [0x0f7ba208],RAX
04fbcaec  XORPS XMM0,XMM0
04fbcaef  MOVUPS xmmword ptr [R14 + 0x70],XMM0
04fbcaf4  MOVUPS xmmword ptr [R14 + 0x60],XMM0
04fbcaf9  MOVUPS xmmword ptr [R14 + 0x50],XMM0
04fbcafe  MOVUPS xmmword ptr [R14 + 0x40],XMM0
04fbcb03  MOVUPS xmmword ptr [R14 + 0x30],XMM0
04fbcb08  MOVUPS xmmword ptr [R14 + 0x20],XMM0
04fbcb0d  MOVUPS xmmword ptr [R14 + 0x10],XMM0
04fbcb12  MOVUPS xmmword ptr [R14],XMM0
04fbcb16  MOV qword ptr [0x0f7ba200],RAX
04fbcb1d  MOVUPS xmmword ptr [0x0f7ba210],XMM0
04fbcb24  MOV qword ptr [0x0f7ba220],0x0
04fbcb2f  LEA RSI,[0xf7ba1d0]
04fbcb36  MOV qword ptr [0x0f7ba230],RSI
04fbcb3d  LEA RDI,[0xeee1c80]
04fbcb44  LEA RDX,[0xf53dab8]
04fbcb4b  CALL 0x0eee2f40
04fbcb50  LEA RDI,[0xf7ba228]
04fbcb57  CALL 0x0410844d
04fbcb5c  JMP 0x04fbc806
04fbcb61  MOV EDI,0x80
04fbcb66  XOR ESI,ESI
04fbcb68  CALL 0x0eec74c0
04fbcb6d  JMP 0x04fbcad7
04fbcb72  MOV RBX,qword ptr [RSP + 0x20]
04fbcb77  TEST RBX,RBX
04fbcb7a  JZ 0x04fbcbca
04fbcb7c  MOV R14,qword ptr [RSP + 0x28]
04fbcb81  MOV RDI,RBX
04fbcb84  CMP RBX,R14
04fbcb87  JNZ 0x04fbcb99
04fbcb89  JMP 0x04fbcbb8
04fbcb90  ADD R14,-0x28
04fbcb94  CMP R14,RBX
04fbcb97  JZ 0x04fbcbb3
04fbcb99  TEST byte ptr [R14 + -0x20],0x1
04fbcb9e  JZ 0x04fbcb90
04fbcba0  MOV RSI,qword ptr [R14 + -0x20]
04fbcba4  MOV RDI,qword ptr [R14 + -0x10]
04fbcba8  AND RSI,-0x2
04fbcbac  CALL 0x0412a280
04fbcbb1  JMP 0x04fbcb90
04fbcbb3  MOV RDI,qword ptr [RSP + 0x20]
04fbcbb8  MOV qword ptr [RSP + 0x28],RBX
04fbcbbd  MOV RSI,qword ptr [RSP + 0x30]
04fbcbc2  SUB RSI,RDI
04fbcbc5  CALL 0x0412a280
04fbcbca  ADD RSP,0xf8
04fbcbd1  POP RBX
04fbcbd2  POP R12
04fbcbd4  POP R13
04fbcbd6  POP R14
04fbcbd8  POP R15
04fbcbda  POP RBP
04fbcbdb  RET
04fbcbeb  CALL 0x04891200
04fbcbf0  CALL 0x04882e30
04fbcbf5  CALL 0x04fbd830
04fbcbfa  CALL 0x04882eb0
04fbcbff  MOV RBX,RAX
04fbcc02  LEA RDI,[0xf7ba228]
04fbcc09  CALL 0x041084d6
04fbcc0e  MOV RDI,RBX
04fbcc11  CALL 0x04882e20
04fbcc16  MOV RBX,RAX
04fbcc19  LEA RDI,[0xf7ba1d0]
04fbcc20  CALL 0x0412d6b0
04fbcc25  MOV RDI,RBX
04fbcc28  CALL 0x04882e20
04fbcc2d  MOV RDI,RAX
04fbcc30  CALL 0x04882e20
04fbcc35  MOV RBX,RAX
04fbcc38  LEA RDI,[RSP + 0x68]
04fbcc3d  CALL 0x04fbd840
04fbcc42  LEA RDI,[RSP + 0x20]
04fbcc47  CALL 0x04fbd7c0
04fbcc4c  MOV RDI,RBX
04fbcc4f  CALL 0x0eee2d70
04fbcc54  JMP 0x04fbcd18
04fbcd18  MOV RBX,RAX
04fbcd1b  LEA RDI,[RSP + 0x20]
04fbcd20  CALL 0x04fbd7c0
04fbcd25  MOV RDI,RBX
04fbcd28  CALL 0x0eee2d70
04fbcd2d  MOV RBX,RAX
04fbcd30  LEA RDI,[RSP + 0xc0]
04fbcd38  CALL 0x0ee386e0
04fbcd3d  LEA RDI,[RSP + 0x20]
04fbcd42  CALL 0x04fbd7c0
04fbcd47  MOV RDI,RBX
04fbcd4a  CALL 0x0eee2d70
04fbcd4f  MOV RBX,RAX
04fbcd52  LEA RDI,[RSP + 0x40]
04fbcd57  CALL 0x0eeb81b0
04fbcd5c  LEA RDI,[RSP + 0x20]
04fbcd61  CALL 0x04fbd7c0
04fbcd66  MOV RDI,RBX
04fbcd69  CALL 0x0eee2d70
04fbcd6e  INT3
```
