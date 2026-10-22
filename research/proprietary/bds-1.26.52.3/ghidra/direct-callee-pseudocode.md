# Recovered direct callees of world-generation entry points

> Mechanically generated pseudocode from the proprietary BDS binary. This is not original source and is not MIT-licensed OpenBDS code.

The bounded call graph starts at named world-generation virtual methods, follows direct calls to the nearby `0x05200000..0x052fffff` text region for at most 3 levels, and does not resolve indirect calls.

## `052be680` — depth 1 from OverworldGenerator__loadChunk (root OverworldGenerator__loadChunk)

- Ghidra name: `FUN_052be680`
- Body: `[[052be680, 052be760]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_052be680(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plStack_30;
  
  lVar3 = func_0x0eee1380(param_1 + 0x68);
  if (lVar3 == 0) {
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa2220);
    if (plVar5 == (long *)0x0) {
      func_0x0eec74c0(0xa2220,0);
    }
    *plVar5 = (long)plVar5;
    plVar5[1] = (long)plVar5;
    plVar4 = plVar5 + 2;
    func_0x0eee2dd0(plVar4,0,0xa2210);
    plVar1 = *(long **)(param_1 + 0x20);
    plStack_30 = plVar4;
    if (plVar1 == (long *)0x0) {
      plVar5 = (long *)func_0x04891200();
      return plVar5;
    }
    (**(code **)(*plVar1 + 0x30))(plVar1,&plStack_30);
    func_0x0eee1580(param_1 + 0x68,plVar5);
    func_0x0412d680(param_1 + 0x40);
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    plVar5[1] = (long)puVar2;
    *plVar5 = param_1 + 0x30;
    *puVar2 = plVar5;
    *(long **)(param_1 + 0x38) = plVar5;
    func_0x0412d6b0(param_1 + 0x40);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x10);
  }
  return plVar4;
}


```

### Assembly

```asm
052be680  PUSH R15
052be682  PUSH R14
052be684  PUSH R13
052be686  PUSH R12
052be688  PUSH RBX
052be689  SUB RSP,0x10
052be68d  MOV RBX,RDI
052be690  LEA R14,[RDI + 0x68]
052be694  MOV RDI,R14
052be697  CALL 0x0eee1380
052be69c  TEST RAX,RAX
052be69f  JZ 0x052be6aa
052be6a1  ADD RAX,0x10
052be6a5  JMP 0x052be736
052be6aa  MOV RAX,qword ptr [0x0f5463b0]
052be6b1  LEA RDI,[0xf5463b0]
052be6b8  MOV ESI,0xa2220
052be6bd  CALL qword ptr [RAX + 0x10]
052be6c0  MOV R15,RAX
052be6c3  TEST RAX,RAX
052be6c6  JZ 0x052be744
052be6c8  MOV qword ptr [R15],R15
052be6cb  MOV qword ptr [R15 + 0x8],R15
052be6cf  ADD RAX,0x10
052be6d3  MOV EDX,0xa2210
052be6d8  MOV RDI,RAX
052be6db  XOR ESI,ESI
052be6dd  MOV R13,RAX
052be6e0  CALL 0x0eee2dd0
052be6e5  MOV qword ptr [RSP + 0x8],R13
052be6ea  MOV RDI,qword ptr [RBX + 0x20]
052be6ee  TEST RDI,RDI
052be6f1  JZ 0x052be75b
052be6f3  MOV RAX,qword ptr [RDI]
052be6f6  LEA RSI,[RSP + 0x8]
052be6fb  CALL qword ptr [RAX + 0x30]
052be6fe  MOV RDI,R14
052be701  MOV RSI,R15
052be704  CALL 0x0eee1580
052be709  LEA R14,[RBX + 0x40]
052be70d  MOV RDI,R14
052be710  CALL 0x0412d680
052be715  LEA RAX,[RBX + 0x30]
052be719  MOV RCX,qword ptr [RBX + 0x38]
052be71d  MOV qword ptr [R15 + 0x8],RCX
052be721  MOV qword ptr [R15],RAX
052be724  MOV qword ptr [RCX],R15
052be727  MOV qword ptr [RBX + 0x38],R15
052be72b  MOV RDI,R14
052be72e  CALL 0x0412d6b0
052be733  MOV RAX,R13
052be736  ADD RSP,0x10
052be73a  POP RBX
052be73b  POP R12
052be73d  POP R13
052be73f  POP R14
052be741  POP R15
052be743  RET
052be744  MOV EDI,0xa2220
052be749  XOR ESI,ESI
052be74b  MOV R12,RAX
052be74e  CALL 0x0eec74c0
052be753  MOV RAX,R12
052be756  JMP 0x052be6c8
052be75b  CALL 0x04891200
052be760  RET
```

## `052a3830` — depth 1 from OverworldGenerator__loadChunk (root OverworldGenerator__loadChunk)

- Ghidra name: `FUN_052a3830`
- Body: `[[052a3830, 052a38f8]]`

### Pseudocode

```c

void FUN_052a3830(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plStack_10;
  
  plStack_10 = param_1;
  FUN_052a3910(param_1 + 0x12,&plStack_10);
  FUN_052a39f0(param_1 + 0x24);
  func_0x04136a00(param_1 + 0x1d);
  func_0x04136a00(param_1 + 0x17);
  plVar2 = (long *)param_1[0x10];
  if (plVar2 == param_1 + 0xc) {
    lVar1 = 0x20;
LAB_052a38c1:
    (**(code **)(*plVar2 + lVar1))();
    plVar2 = (long *)param_1[10];
    if (plVar2 != param_1 + 6) goto LAB_052a3899;
LAB_052a38d4:
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (plVar2 != (long *)0x0) goto LAB_052a38c1;
    plVar2 = (long *)param_1[10];
    if (plVar2 == param_1 + 6) goto LAB_052a38d4;
LAB_052a3899:
    lVar1 = 0x28;
    if (plVar2 == (long *)0x0) {
      plVar2 = (long *)param_1[4];
      goto joined_r0x052a38e6;
    }
  }
  (**(code **)(*plVar2 + lVar1))();
  plVar2 = (long *)param_1[4];
joined_r0x052a38e6:
  if (plVar2 == param_1) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (plVar2 == (long *)0x0) {
      return;
    }
  }
  (**(code **)(*plVar2 + lVar1))();
  return;
}


```

### Assembly

```asm
052a3830  PUSH RBX
052a3831  SUB RSP,0x10
052a3835  MOV RBX,RDI
052a3838  ADD RDI,0x90
052a383f  MOV qword ptr [RSP + 0x8],RBX
052a3844  LEA RSI,[RSP + 0x8]
052a3849  CALL 0x052a3910
052a384e  LEA RDI,[RBX + 0x120]
052a3855  CALL 0x052a39f0
052a385a  LEA RDI,[RBX + 0xe8]
052a3861  CALL 0x04136a00
052a3866  LEA RDI,[RBX + 0xb8]
052a386d  CALL 0x04136a00
052a3872  LEA RAX,[RBX + 0x60]
052a3876  MOV RDI,qword ptr [RBX + 0x80]
052a387d  CMP RDI,RAX
052a3880  JZ 0x052a38bc
052a3882  MOV EAX,0x28
052a3887  TEST RDI,RDI
052a388a  JNZ 0x052a38c1
052a388c  LEA RAX,[RBX + 0x30]
052a3890  MOV RDI,qword ptr [RBX + 0x50]
052a3894  CMP RDI,RAX
052a3897  JZ 0x052a38d4
052a3899  MOV EAX,0x28
052a389e  TEST RDI,RDI
052a38a1  JNZ 0x052a38d9
052a38a3  MOV RDI,qword ptr [RBX + 0x20]
052a38a7  CMP RDI,RBX
052a38aa  JZ 0x052a38e8
052a38ac  MOV EAX,0x28
052a38b1  TEST RDI,RDI
052a38b4  JNZ 0x052a38ed
052a38b6  ADD RSP,0x10
052a38ba  POP RBX
052a38bb  RET
052a38bc  MOV EAX,0x20
052a38c1  MOV RCX,qword ptr [RDI]
052a38c4  CALL qword ptr [RCX + RAX*0x1]
052a38c7  LEA RAX,[RBX + 0x30]
052a38cb  MOV RDI,qword ptr [RBX + 0x50]
052a38cf  CMP RDI,RAX
052a38d2  JNZ 0x052a3899
052a38d4  MOV EAX,0x20
052a38d9  MOV RCX,qword ptr [RDI]
052a38dc  CALL qword ptr [RCX + RAX*0x1]
052a38df  MOV RDI,qword ptr [RBX + 0x20]
052a38e3  CMP RDI,RBX
052a38e6  JNZ 0x052a38ac
052a38e8  MOV EAX,0x20
052a38ed  MOV RCX,qword ptr [RDI]
052a38f0  CALL qword ptr [RCX + RAX*0x1]
052a38f3  ADD RSP,0x10
052a38f7  POP RBX
052a38f8  RET
```

## `052ce620` — depth 1 from OverworldGenerator__structurePostProcessChunk (root OverworldGenerator__structurePostProcessChunk)

- Ghidra name: `FUN_052ce620`
- Body: `[[052ce620, 052ce79d] [052ce7be, 052ce80e]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_052ce620(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  *(undefined2 *)(param_1 + 1) = 0x101;
  param_1[2] = _DAT_0f6b3a90;
  param_1[3] = 0;
  *param_1 = &UNK_0efa00a8;
  pbVar1 = (byte *)(param_1 + 5);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (param_1 + 4 != param_2) {
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      param_1[7] = param_2[3];
      uVar5 = *(undefined4 *)((long)param_2 + 0xc);
      uVar6 = *(undefined4 *)(param_2 + 2);
      uVar7 = *(undefined4 *)((long)param_2 + 0x14);
      *(undefined4 *)pbVar1 = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((long)param_1 + 0x2c) = uVar5;
      *(undefined4 *)(param_1 + 6) = uVar6;
      *(undefined4 *)((long)param_1 + 0x34) = uVar7;
    }
    else {
      func_0x04885070(pbVar1,param_2[3],param_2[2]);
    }
  }
  param_1[4] = *param_2;
  pbVar2 = (byte *)(param_1 + 10);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (param_1 + 9 != param_3) {
    if ((*(byte *)(param_3 + 1) & 1) == 0) {
      param_1[0xc] = param_3[3];
      uVar9 = param_3[2];
      *(undefined8 *)pbVar2 = param_3[1];
      param_1[0xb] = uVar9;
    }
    else {
      func_0x04885070(pbVar2,param_3[3],param_3[2]);
    }
  }
  param_1[9] = *param_3;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  lVar4 = *param_4;
  lVar11 = param_4[1] - lVar4;
  if (lVar11 != 0) {
    if (lVar11 < 0) {
      uVar9 = func_0x04fa52a0();
      if ((*pbVar2 & 1) == 0) goto LAB_052ce7be;
      do {
        func_0x0412a280(param_1[0xc],param_1[10] & 0xfffffffffffffffe);
        bVar3 = *pbVar1;
        while( true ) {
          if ((bVar3 & 1) != 0) {
            func_0x0412a280(param_1[7],param_1[5] & 0xfffffffffffffffe);
          }
          uVar10 = uVar9;
          func_0x0eee2d70();
          param_1[0xf] = uVar10;
          func_0x0412a280();
          if ((*pbVar2 & 1) != 0) break;
LAB_052ce7be:
          bVar3 = *pbVar1;
        }
      } while( true );
    }
    lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar11);
    if (lVar8 == 0) {
      func_0x0eec74c0(lVar11,0);
    }
    param_1[0xe] = lVar8;
    param_1[0xf] = lVar8;
    param_1[0x10] = lVar8 + lVar11;
    func_0x0eee2f00(lVar8,lVar4,lVar11);
    param_1[0xf] = lVar8 + lVar11;
  }
  return;
}


```

### Assembly

```asm
052ce620  PUSH RBP
052ce621  PUSH R15
052ce623  PUSH R14
052ce625  PUSH R13
052ce627  PUSH R12
052ce629  PUSH RBX
052ce62a  PUSH RAX
052ce62b  MOV R12,RCX
052ce62e  MOV R13,RDX
052ce631  MOV RBX,RDI
052ce634  MOV word ptr [RDI + 0x8],0x101
052ce63a  MOV RAX,qword ptr [0x0f6b3a90]
052ce641  MOV qword ptr [RDI + 0x10],RAX
052ce645  MOV qword ptr [RDI + 0x18],0x0
052ce64d  LEA RAX,[0xefa00a8]
052ce654  MOV qword ptr [RDI],RAX
052ce657  LEA RAX,[RDI + 0x20]
052ce65b  LEA R14,[RDI + 0x28]
052ce65f  XORPS XMM1,XMM1
052ce662  MOVUPS xmmword ptr [RDI + 0x20],XMM1
052ce666  MOVUPS xmmword ptr [RDI + 0x30],XMM1
052ce66a  MOV qword ptr [RDI + 0x40],0x0
052ce672  CMP RAX,RSI
052ce675  JZ 0x052ce6ad
052ce677  LEA RAX,[RSI + 0x8]
052ce67b  TEST byte ptr [RAX],0x1
052ce67e  JNZ 0x052ce691
052ce680  MOV RCX,qword ptr [RAX + 0x10]
052ce684  MOV qword ptr [R14 + 0x10],RCX
052ce688  MOVUPS XMM0,xmmword ptr [RAX]
052ce68b  MOVUPS xmmword ptr [R14],XMM0
052ce68f  JMP 0x052ce6ad
052ce691  MOV RDX,qword ptr [RSI + 0x10]
052ce695  MOV RAX,qword ptr [RSI + 0x18]
052ce699  MOV RDI,R14
052ce69c  MOV R15,RSI
052ce69f  MOV RSI,RAX
052ce6a2  CALL 0x04885070
052ce6a7  XORPS XMM1,XMM1
052ce6aa  MOV RSI,R15
052ce6ad  MOV RAX,qword ptr [RSI]
052ce6b0  MOV qword ptr [RBX + 0x20],RAX
052ce6b4  LEA RAX,[RBX + 0x48]
052ce6b8  LEA R15,[RBX + 0x50]
052ce6bc  MOVUPS xmmword ptr [RBX + 0x48],XMM1
052ce6c0  MOVUPS xmmword ptr [RBX + 0x58],XMM1
052ce6c4  MOV qword ptr [RBX + 0x68],0x0
052ce6cc  CMP RAX,R13
052ce6cf  JZ 0x052ce6fb
052ce6d1  LEA RAX,[R13 + 0x8]
052ce6d5  TEST byte ptr [RAX],0x1
052ce6d8  JNZ 0x052ce6eb
052ce6da  MOV RCX,qword ptr [RAX + 0x10]
052ce6de  MOV qword ptr [R15 + 0x10],RCX
052ce6e2  MOVUPS XMM0,xmmword ptr [RAX]
052ce6e5  MOVUPS xmmword ptr [R15],XMM0
052ce6e9  JMP 0x052ce6fb
052ce6eb  MOV RDX,qword ptr [R13 + 0x10]
052ce6ef  MOV RSI,qword ptr [R13 + 0x18]
052ce6f3  MOV RDI,R15
052ce6f6  CALL 0x04885070
052ce6fb  MOV RAX,qword ptr [R13]
052ce6ff  MOV qword ptr [RBX + 0x48],RAX
052ce703  XORPS XMM0,XMM0
052ce706  MOVUPS xmmword ptr [RBX + 0x70],XMM0
052ce70a  MOV qword ptr [RBX + 0x80],0x0
052ce715  MOV R13,qword ptr [R12]
052ce719  MOV R12,qword ptr [R12 + 0x8]
052ce71e  SUB R12,R13
052ce721  JZ 0x052ce773
052ce723  LEA RAX,[RBX + 0x70]
052ce727  MOV qword ptr [RSP],RAX
052ce72b  TEST R12,R12
052ce72e  JS 0x052ce78e
052ce730  LEA RDI,[0xf5463b0]
052ce737  MOV RAX,qword ptr [0x0f5463b0]
052ce73e  MOV RSI,R12
052ce741  CALL qword ptr [RAX + 0x10]
052ce744  MOV RBP,RAX
052ce747  TEST RAX,RAX
052ce74a  JZ 0x052ce782
052ce74c  MOV qword ptr [RBX + 0x70],RBP
052ce750  MOV qword ptr [RBX + 0x78],RBP
052ce754  MOV R14,RBP
052ce757  ADD R14,R12
052ce75a  MOV qword ptr [RBX + 0x80],R14
052ce761  MOV RDI,RBP
052ce764  MOV RSI,R13
052ce767  MOV RDX,R12
052ce76a  CALL 0x0eee2f00
052ce76f  MOV qword ptr [RBX + 0x78],R14
052ce773  ADD RSP,0x8
052ce777  POP RBX
052ce778  POP R12
052ce77a  POP R13
052ce77c  POP R14
052ce77e  POP R15
052ce780  POP RBP
052ce781  RET
052ce782  MOV RDI,R12
052ce785  XOR ESI,ESI
052ce787  CALL 0x0eec74c0
052ce78c  JMP 0x052ce74c
052ce78e  CALL 0x04fa52a0
052ce793  MOV R12,RAX
052ce796  TEST byte ptr [R15],0x1
052ce79a  JZ 0x052ce7be
052ce79c  JMP 0x052ce7f6
052ce7be  TEST byte ptr [R14],0x1
052ce7c2  JZ 0x052ce7d5
052ce7c4  MOV RSI,qword ptr [RBX + 0x28]
052ce7c8  MOV RDI,qword ptr [RBX + 0x38]
052ce7cc  AND RSI,-0x2
052ce7d0  CALL 0x0412a280
052ce7d5  MOV RDI,R12
052ce7d8  CALL 0x0eee2d70
052ce7dd  MOV qword ptr [RBX + 0x78],RDI
052ce7e1  MOV RSI,qword ptr [RBX + 0x80]
052ce7e8  SUB RSI,RDI
052ce7eb  CALL 0x0412a280
052ce7f0  TEST byte ptr [R15],0x1
052ce7f4  JZ 0x052ce7be
052ce7f6  MOV RSI,qword ptr [RBX + 0x50]
052ce7fa  MOV RDI,qword ptr [RBX + 0x60]
052ce7fe  AND RSI,-0x2
052ce802  CALL 0x0412a280
052ce807  TEST byte ptr [R14],0x1
052ce80b  JNZ 0x052ce7c4
052ce80d  JMP 0x052ce7d5
```

## `052ce810` — depth 1 from OverworldGenerator__structurePostProcessChunk (root OverworldGenerator__structurePostProcessChunk)

- Ghidra name: `FUN_052ce810`
- Body: `[[052ce810, 052ce95a] [052ce960, 052ceb5a] [052ceb60, 052cebbe] [052cebc0, 052cec3b] [052cec40, 052ced4d] [052ced50, 052cef42] [052cef50, 052cef60] [052cef70, 052cf341] [052cf350, 052d081e]]`

### Pseudocode

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_052ce810(long param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  code *pcVar1;
  char cVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined4 *puVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uStack_950;
  int iStack_948;
  long *plStack_940;
  undefined8 uStack_938;
  ulong uStack_930;
  ulong uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  ulong uStack_910;
  ulong uStack_908;
  undefined8 *puStack_900;
  ulong uStack_8f8;
  long lStack_8f0;
  ulong uStack_8e8;
  undefined4 uStack_8dc;
  undefined4 uStack_8d8;
  int iStack_8d4;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  ulong uStack_8b8;
  ulong uStack_8b0;
  long lStack_8a8;
  ulong uStack_8a0;
  ulong uStack_898;
  long lStack_890;
  ulong uStack_888;
  ulong uStack_880;
  ulong uStack_878;
  ulong uStack_870;
  ulong uStack_868;
  undefined8 *puStack_860;
  ulong uStack_858;
  long lStack_850;
  ulong uStack_848;
  int iStack_83c;
  undefined8 uStack_838;
  undefined8 uStack_830;
  uint auStack_828 [33];
  undefined1 auStack_7a2 [1906];
  
  iVar19 = *(int *)((long)param_3 + 4);
  lStack_8f0 = param_1;
  sVar3 = (**(code **)(*param_2 + 0x110))(param_2);
  if (sVar3 + 4 < iVar19) {
    iVar19 = *(int *)(param_3 + 1);
    uStack_830._0_4_ = (int)*param_3 + -8;
    uStack_830._4_4_ = (int)((ulong)*param_3 >> 0x20);
    iVar20 = uStack_830._4_4_;
    auStack_828[0] = iVar19 - 8U;
    sVar3 = (**(code **)(*param_2 + 0x110))(param_2);
    uVar11 = iVar19 - 8U;
    if (sVar3 < iVar20) {
      do {
        lVar4 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_830);
        iVar20 = uStack_830._4_4_;
        uVar11 = auStack_828[0];
        if ((*(long *)(*(long *)(lVar4 + 0x68) + 200) != _DAT_0f6eaec0) || (uStack_830._4_4_ < 1))
        break;
        iVar19 = uStack_830._4_4_ + -1;
        uStack_830._4_4_ = iVar19;
        sVar3 = (**(code **)(*param_2 + 0x110))(param_2);
        iVar20 = uStack_830._4_4_;
        uVar11 = auStack_828[0];
      } while (sVar3 < iVar19);
    }
    uStack_830 = CONCAT44(iVar20 + -4,(int)uStack_830);
    uStack_888 = uStack_830;
    func_0x0eee2dd0(&uStack_830,0,0x800);
    iVar19 = (**(code **)(*param_4 + 0x18))(param_4,4);
    if (-4 < iVar19) {
      iVar20 = iVar19 + 3;
      if (iVar19 + 3 < 1) {
        iVar20 = 0;
      }
      iVar19 = 0;
      do {
        fVar23 = (float)(**(code **)(*param_4 + 0x30))(param_4);
        plStack_940._0_4_ = fVar23 * _DAT_011985dc + _DAT_01198af0;
        fVar23 = (float)(**(code **)(*param_4 + 0x30))(param_4);
        uStack_8e8._0_4_ = fVar23 * _DAT_011987f8 + _DAT_01198724;
        fVar23 = (float)(**(code **)(*param_4 + 0x30))(param_4);
        uStack_908 = CONCAT44(uStack_908._4_4_,fVar23 * _DAT_011985dc + _DAT_01198af0);
        fVar23 = (float)(**(code **)(*param_4 + 0x30))(param_4);
        fVar24 = _DAT_01198634 - plStack_940._0_4_;
        plStack_940._0_4_ = plStack_940._0_4_ * _DAT_011986e0;
        puStack_900 = (undefined8 *)
                      CONCAT44(puStack_900._4_4_,
                               (fVar24 + _DAT_01198458) * fVar23 + _DAT_011983f0 + plStack_940._0_4_
                              );
        fVar23 = (float)(**(code **)(*param_4 + 0x30))(param_4);
        fVar24 = _DAT_01198494 - (float)uStack_8e8;
        uStack_8e8._0_4_ = (float)uStack_8e8 * _DAT_011986e0;
        uStack_8c0 = CONCAT44(uStack_8c0._4_4_,
                              (fVar24 + _DAT_01198360) * fVar23 + _DAT_01198724 + (float)uStack_8e8)
        ;
        fVar23 = (float)(**(code **)(*param_4 + 0x30))(param_4);
        fVar24 = (_DAT_011983f0 - (float)uStack_8c0) / (float)uStack_8e8;
        fVar25 = (_DAT_01198724 - (float)uStack_8c0) / (float)uStack_8e8;
        fVar29 = (_DAT_01198af0 - (float)uStack_8c0) / (float)uStack_8e8;
        fVar26 = (_DAT_011987f8 - (float)uStack_8c0) / (float)uStack_8e8;
        fVar27 = (_DAT_01198988 - (float)uStack_8c0) / (float)uStack_8e8;
        fVar28 = (_DAT_011985dc - (float)uStack_8c0) / (float)uStack_8e8;
        fVar24 = fVar24 * fVar24;
        uStack_8e8 = CONCAT44(uStack_8e8._4_4_,fVar24);
        lVar4 = 1;
        puVar13 = auStack_7a2;
        do {
          fVar30 = ((float)(int)lVar4 - puStack_900._0_4_) / plStack_940._0_4_;
          fVar30 = fVar30 * fVar30;
          lVar15 = 0;
          do {
            fVar31 = ((float)((int)lVar15 + 1) -
                     (((_DAT_01198634 - (float)uStack_908) + _DAT_01198458) * fVar23 + _DAT_011983f0
                     + (float)uStack_908 * _DAT_011986e0)) / ((float)uStack_908 * _DAT_011986e0);
            fVar31 = fVar31 * fVar31;
            if (fVar31 + fVar30 + fVar24 < _DAT_011983f0) {
              puVar13[lVar15 * 8 + -5] = 1;
            }
            if (fVar31 + fVar30 + fVar25 * fVar25 < _DAT_011983f0) {
              puVar13[lVar15 * 8 + -4] = 1;
            }
            if (fVar31 + fVar30 + fVar29 * fVar29 < _DAT_011983f0) {
              puVar13[lVar15 * 8 + -3] = 1;
            }
            if (fVar31 + fVar30 + fVar26 * fVar26 < _DAT_011983f0) {
              puVar13[lVar15 * 8 + -2] = 1;
            }
            if (fVar31 + fVar30 + fVar27 * fVar27 < _DAT_011983f0) {
              puVar13[lVar15 * 8 + -1] = 1;
            }
            if (fVar31 + fVar30 + fVar28 * fVar28 < _DAT_011983f0) {
              puVar13[lVar15 * 8] = 1;
            }
            lVar15 = lVar15 + 1;
          } while (lVar15 != 0xe);
          lVar4 = lVar4 + 1;
          puVar13 = puVar13 + 0x80;
        } while (lVar4 != 0xf);
        bVar22 = iVar19 != iVar20;
        iVar19 = iVar19 + 1;
      } while (bVar22);
    }
    plStack_940 = param_2;
    uStack_910 = func_0x0cc41df0(0xf6ff9e0,lStack_8f0 + 0x20,1);
    uStack_8e8 = uStack_888 >> 0x20;
    uStack_848 = uStack_888 & 0xffffffff00000000;
    lVar4 = 0;
    uStack_8c8 = (ulong)uVar11;
    do {
      uStack_8b8 = lVar4 << 7;
      uStack_8f8 = lVar4 * 0x10 + 0x10;
      uStack_908 = (ulong)(uint)((int)uStack_888 + (int)lVar4);
      uStack_8d0 = lVar4 * 0x10 + 0x1ffffff0;
      uStack_898 = uStack_908 | uStack_848;
      lVar15 = 0;
      do {
        plVar9 = plStack_940;
        uVar10 = uStack_8b8 + lVar15 * 8;
        uVar21 = uStack_8f8 + lVar15;
        lStack_8a8 = uVar21 * 8;
        uVar11 = ((int)uStack_8d0 + (int)lVar15) * 8;
        uStack_8c0 = (ulong)uVar11;
        lVar5 = uStack_8b8 + lVar15 * 8;
        lStack_890 = lVar5 + 8;
        puStack_900 = (undefined8 *)(uStack_8c8 + lVar15);
        uVar12 = (int)uVar10 - 8U & 0xfffffff8;
        uStack_8b0 = (ulong)uVar12;
        if (*(char *)((long)auStack_828 + (uVar10 - 8)) == '\0') {
          if (lVar4 == 0xf) {
LAB_052cee08:
            if (0x7ff < uVar11) goto LAB_052d0819;
            if (*(char *)((long)auStack_828 + (uStack_8c0 - 8)) == '\0') {
LAB_052cee2b:
              if (lVar15 == 0xf) {
LAB_052cee55:
                if (0x7ff < uVar12) goto LAB_052d0819;
                if (*(char *)((long)auStack_828 + (uStack_8b0 - 8)) == '\0') {
LAB_052cee78:
                  if (*(char *)((long)auStack_828 + (uVar10 - 7)) != '\x01') goto LAB_052cef59;
                }
              }
              else {
                if (0x7f7 < uVar10) goto LAB_052d0819;
                if (*(char *)((long)auStack_828 + lVar5) == '\0') {
                  if (lVar15 != 0) goto LAB_052cee55;
                  goto LAB_052cee78;
                }
              }
            }
          }
          else {
            if (0xff < uVar21) goto LAB_052d0819;
            if ((char)auStack_828[uVar21 * 2 + -2] == '\0') {
              if (lVar4 != 0) goto LAB_052cee08;
              goto LAB_052cee2b;
            }
          }
          uStack_938 = uStack_898;
          uStack_930 = CONCAT44(uStack_930._4_4_,(int)puStack_900);
          lVar5 = (**(code **)(*plStack_940 + 0x60))(plStack_940,&uStack_938);
          lVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,&uStack_938);
          if ((*(char *)(lVar5 + 5) == '\0') &&
             (*(long *)(lVar6 + 0x68) != *(long *)(uStack_910 + 0x68))) goto LAB_052cf1db;
          puVar8 = *(undefined8 **)(lStack_8f0 + 0x70);
          puVar14 = *(undefined8 **)(lStack_8f0 + 0x78);
          if (((long)puVar14 - (long)puVar8 == -8) ||
             (puVar8 == (undefined8 *)0x0 && puVar14 != (undefined8 *)0x0)) goto LAB_052d0819;
          if (puVar14 == puVar8) {
LAB_052cef50:
            if (puVar8 != puVar14) goto LAB_052cf1db;
          }
          else {
            do {
              if (*(long *)(*(long *)(lVar6 + 0x68) + 200) == *(long *)*puVar8) goto LAB_052cef50;
              puVar8 = puVar8 + 1;
            } while (puVar8 != puVar14);
          }
        }
LAB_052cef59:
        uVar21 = 1;
        do {
          uVar7 = uVar21 | uVar10;
          if (*(char *)((long)auStack_828 + (uVar7 - 8)) == '\0') {
            if (lVar4 == 0xf) {
LAB_052cefc7:
              if (0x7ff < uStack_8c0 + uVar21) goto LAB_052d0819;
              if (*(char *)((long)auStack_828 + ((uStack_8c0 + uVar21) - 8)) == '\0') {
LAB_052cefed:
                if (lVar15 == 0xf) {
LAB_052cf01a:
                  if (0x7ff < uStack_8b0 + uVar21) goto LAB_052d0819;
                  if (*(char *)((long)auStack_828 + ((uStack_8b0 + uVar21) - 8)) == '\0') {
LAB_052cf03c:
                    if (uVar21 != 7) {
                      if (uVar7 == 0x7ff) goto LAB_052d0819;
                      if (*(char *)((long)auStack_828 + (uVar7 - 7)) != '\0') goto LAB_052cf070;
                    }
                    if (*(char *)((long)&uStack_838 + uVar7 + 7) != '\x01') goto LAB_052cef79;
                  }
                }
                else {
                  if (0x7ff < lStack_890 + uVar21) goto LAB_052d0819;
                  if (*(char *)((long)auStack_828 + ((lStack_890 + uVar21) - 8)) == '\0') {
                    if (lVar15 != 0) goto LAB_052cf01a;
                    goto LAB_052cf03c;
                  }
                }
              }
            }
            else {
              if (0x7ff < lStack_8a8 + uVar21) goto LAB_052d0819;
              if (*(char *)((long)auStack_828 + ((lStack_8a8 + uVar21) - 8)) == '\0') {
                if (lVar4 != 0) goto LAB_052cefc7;
                goto LAB_052cefed;
              }
            }
LAB_052cf070:
            uStack_938 = ((ulong)(uint)((int)uStack_8e8 + (int)uVar21) << 0x20) + uStack_908;
            uStack_930 = CONCAT44(uStack_930._4_4_,(int)puStack_900);
            lVar5 = (**(code **)(*plStack_940 + 0x60))(plStack_940,&uStack_938);
            if ((3 < uVar21) && (*(char *)(lVar5 + 2) != '\0')) goto LAB_052cf1db;
            lVar6 = (**(code **)(*plStack_940 + 0x10))(plStack_940,&uStack_938);
            if ((uVar21 < 4) &&
               ((*(char *)(lVar5 + 5) == '\0' &&
                (*(long *)(lVar6 + 0x68) != *(long *)(uStack_910 + 0x68))))) goto LAB_052cf1db;
            puVar8 = *(undefined8 **)(lStack_8f0 + 0x70);
            puVar14 = *(undefined8 **)(lStack_8f0 + 0x78);
            if (((long)puVar14 - (long)puVar8 == -8) ||
               (puVar14 != (undefined8 *)0x0 && puVar8 == (undefined8 *)0x0)) goto LAB_052d0819;
            if (puVar14 == puVar8) {
LAB_052cef70:
              if (puVar8 != puVar14) goto LAB_052cf1db;
            }
            else {
              do {
                if (*(long *)(*(long *)(lVar6 + 0x68) + 200) == *(long *)*puVar8) goto LAB_052cef70;
                puVar8 = puVar8 + 1;
              } while (puVar8 != puVar14);
            }
          }
LAB_052cef79:
          uVar21 = uVar21 + 1;
        } while (uVar21 != 8);
        lVar15 = lVar15 + 1;
      } while (lVar15 != 0x10);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x10);
    plVar9 = (long *)func_0x0cc446c0(0xf6ff9e0);
    uStack_908 = *(ulong *)(*plVar9 + 0x200);
    iVar19 = (int)uStack_8e8;
    uStack_8b8 = CONCAT44(uStack_8b8._4_4_,iVar19 + 1);
    uStack_8d0 = CONCAT44(uStack_8d0._4_4_,iVar19 + 2);
    uStack_8c0 = CONCAT44(uStack_8c0._4_4_,iVar19 + 3);
    lStack_8a8 = CONCAT44(lStack_8a8._4_4_,iVar19 + 4);
    uStack_8b0 = CONCAT44(uStack_8b0._4_4_,iVar19 + 5);
    lStack_890 = CONCAT44(lStack_890._4_4_,iVar19 + 6);
    uStack_8f8 = CONCAT44(uStack_8f8._4_4_,iVar19 + 7);
    lVar4 = (long)&uStack_830 + 7;
    lVar15 = 0;
    do {
      puStack_900 = (undefined8 *)CONCAT44(puStack_900._4_4_,(int)lVar15 + (int)uStack_888);
      lVar5 = 0;
      uStack_898 = lVar15;
      do {
        iVar19 = (int)lVar5;
        if (*(char *)(lVar4 + -7 + lVar5 * 8) == '\0') {
          cVar2 = *(char *)(lVar4 + -6 + lVar5 * 8);
joined_r0x052cf3b8:
          if (cVar2 != '\x01') goto LAB_052cf295;
LAB_052cf480:
          uStack_950 = CONCAT44((undefined4)uStack_8b8,(int)puStack_900);
          iStack_948 = (int)uStack_8c8 + iVar19;
          puVar8 = *(undefined8 **)(lStack_8f0 + 0x18);
          if (puVar8 == (undefined8 *)0x0) {
            uStack_928 = 0;
            uStack_920 = 0;
            uStack_938 = 0;
            uStack_930 = 0;
            uStack_918 = 1;
            (**(code **)(*plStack_940 + 0xf8))(plStack_940,&uStack_950,uStack_910,3,0,&uStack_938);
            cVar2 = *(char *)(lVar4 + -5 + lVar5 * 8);
            goto joined_r0x052cf29b;
          }
          uVar10 = (**(code **)(*(long *)*puVar8 + 0x28))((long *)*puVar8,&uStack_950);
          lVar15 = func_0x0b5d6180(puVar8[1],&uStack_950);
          if (lVar15 == 0) {
            uStack_938 = CONCAT44(uStack_938._4_4_,3);
            uStack_928 = uStack_910;
            uStack_930 = uVar10;
            func_0x0b5d6330(puVar8[1],&uStack_950,&uStack_950,&uStack_938);
            cVar2 = *(char *)(lVar4 + -5 + lVar5 * 8);
            goto joined_r0x052cf29b;
          }
          *(undefined4 *)(lVar15 + 0x20) = 3;
          *(ulong *)(lVar15 + 0x30) = uStack_910;
          if (*(char *)(lVar4 + -5 + lVar5 * 8) != '\x01') goto LAB_052cf2a1;
LAB_052cf580:
          uStack_950 = CONCAT44((undefined4)uStack_8d0,(int)puStack_900);
          iStack_948 = (int)uStack_8c8 + iVar19;
          puVar8 = *(undefined8 **)(lStack_8f0 + 0x18);
          if (puVar8 == (undefined8 *)0x0) {
            uStack_928 = 0;
            uStack_920 = 0;
            uStack_938 = 0;
            uStack_930 = 0;
            uStack_918 = 1;
            (**(code **)(*plStack_940 + 0xf8))(plStack_940,&uStack_950,uStack_910,3,0,&uStack_938);
            cVar2 = *(char *)(lVar4 + -4 + lVar5 * 8);
            goto joined_r0x052cf635;
          }
          uVar10 = (**(code **)(*(long *)*puVar8 + 0x28))((long *)*puVar8,&uStack_950);
          lVar15 = func_0x0b5d6180(puVar8[1],&uStack_950);
          if (lVar15 == 0) {
            uStack_938 = CONCAT44(uStack_938._4_4_,3);
            uStack_928 = uStack_910;
            uStack_930 = uVar10;
            func_0x0b5d6330(puVar8[1],&uStack_950,&uStack_950,&uStack_938);
            cVar2 = *(char *)(lVar4 + -4 + lVar5 * 8);
            goto joined_r0x052cf635;
          }
          *(undefined4 *)(lVar15 + 0x20) = 3;
          *(ulong *)(lVar15 + 0x30) = uStack_910;
          if (*(char *)(lVar4 + -4 + lVar5 * 8) != '\x01') goto LAB_052cf2ad;
LAB_052cf680:
          uStack_950 = CONCAT44((float)uStack_8c0,(int)puStack_900);
          iStack_948 = (int)uStack_8c8 + iVar19;
          puVar8 = *(undefined8 **)(lStack_8f0 + 0x18);
          if (puVar8 == (undefined8 *)0x0) {
            uStack_928 = 0;
            uStack_920 = 0;
            uStack_938 = 0;
            uStack_930 = 0;
            uStack_918 = 1;
            (**(code **)(*plStack_940 + 0xf8))(plStack_940,&uStack_950,uStack_910,3,0,&uStack_938);
            cVar2 = *(char *)(lVar4 + -3 + lVar5 * 8);
            goto joined_r0x052cf2b3;
          }
          uVar10 = (**(code **)(*(long *)*puVar8 + 0x28))((long *)*puVar8,&uStack_950);
          lVar15 = func_0x0b5d6180(puVar8[1],&uStack_950);
          if (lVar15 == 0) {
            uStack_938 = CONCAT44(uStack_938._4_4_,3);
            uStack_928 = uStack_910;
            uStack_930 = uVar10;
            func_0x0b5d6330(puVar8[1],&uStack_950,&uStack_950,&uStack_938);
            cVar2 = *(char *)(lVar4 + -3 + lVar5 * 8);
            goto joined_r0x052cf2b3;
          }
          *(undefined4 *)(lVar15 + 0x20) = 3;
          *(ulong *)(lVar15 + 0x30) = uStack_910;
          if (*(char *)(lVar4 + -3 + lVar5 * 8) == '\x01') goto LAB_052cf780;
LAB_052cf2b9:
          cVar2 = *(char *)(lVar4 + -2 + lVar5 * 8);
joined_r0x052cf835:
          if (cVar2 != '\x01') goto LAB_052cf2c5;
LAB_052cf880:
          uStack_950 = CONCAT44((undefined4)uStack_8b0,(int)puStack_900);
          iStack_948 = (int)uStack_8c8 + iVar19;
          puVar8 = *(undefined8 **)(lStack_8f0 + 0x18);
          if (puVar8 == (undefined8 *)0x0) {
            uStack_928 = 0;
            uStack_920 = 0;
            uStack_938 = 0;
            uStack_930 = 0;
            uStack_918 = 1;
            (**(code **)(*plStack_940 + 0xf8))(plStack_940,&uStack_950,uStack_908,3,0,&uStack_938);
            cVar2 = *(char *)(lVar4 + -1 + lVar5 * 8);
            goto joined_r0x052cf2cb;
          }
          uVar10 = (**(code **)(*(long *)*puVar8 + 0x28))((long *)*puVar8,&uStack_950);
          lVar15 = func_0x0b5d6180(puVar8[1],&uStack_950);
          if (lVar15 == 0) {
            uStack_938 = CONCAT44(uStack_938._4_4_,3);
            uStack_928 = uStack_908;
            uStack_930 = uVar10;
            func_0x0b5d6330(puVar8[1],&uStack_950,&uStack_950,&uStack_938);
            cVar2 = *(char *)(lVar4 + -1 + lVar5 * 8);
            goto joined_r0x052cf2cb;
          }
          *(undefined4 *)(lVar15 + 0x20) = 3;
          *(ulong *)(lVar15 + 0x30) = uStack_908;
          if (*(char *)(lVar4 + -1 + lVar5 * 8) != '\x01') goto LAB_052cf2d1;
LAB_052cf980:
          uStack_950 = CONCAT44((undefined4)lStack_890,(int)puStack_900);
          iStack_948 = (int)uStack_8c8 + iVar19;
          puVar8 = *(undefined8 **)(lStack_8f0 + 0x18);
          if (puVar8 == (undefined8 *)0x0) {
            uStack_928 = 0;
            uStack_920 = 0;
            uStack_938 = 0;
            uStack_930 = 0;
            uStack_918 = 1;
            (**(code **)(*plStack_940 + 0xf8))(plStack_940,&uStack_950,uStack_908,3,0,&uStack_938);
            cVar2 = *(char *)(lVar4 + lVar5 * 8);
          }
          else {
            uVar10 = (**(code **)(*(long *)*puVar8 + 0x28))((long *)*puVar8,&uStack_950);
            lVar15 = func_0x0b5d6180(puVar8[1],&uStack_950);
            if (lVar15 == 0) {
              uStack_938 = CONCAT44(uStack_938._4_4_,3);
              uStack_928 = uStack_908;
              uStack_930 = uVar10;
              func_0x0b5d6330(puVar8[1],&uStack_950,&uStack_950,&uStack_938);
              cVar2 = *(char *)(lVar4 + lVar5 * 8);
            }
            else {
              *(undefined4 *)(lVar15 + 0x20) = 3;
              *(ulong *)(lVar15 + 0x30) = uStack_908;
              cVar2 = *(char *)(lVar4 + lVar5 * 8);
            }
          }
        }
        else {
          uStack_950 = CONCAT44((int)uStack_8e8,(int)puStack_900);
          iStack_948 = (int)uStack_8c8 + iVar19;
          puVar8 = *(undefined8 **)(lStack_8f0 + 0x18);
          if (puVar8 == (undefined8 *)0x0) {
            uStack_928 = 0;
            uStack_920 = 0;
            uStack_938 = 0;
            uStack_930 = 0;
            uStack_918 = 1;
            (**(code **)(*plStack_940 + 0xf8))(plStack_940,&uStack_950,uStack_910,3,0,&uStack_938);
            cVar2 = *(char *)(lVar4 + -6 + lVar5 * 8);
            goto joined_r0x052cf3b8;
          }
          uVar10 = (**(code **)(*(long *)*puVar8 + 0x28))((long *)*puVar8,&uStack_950);
          lVar15 = func_0x0b5d6180(puVar8[1],&uStack_950);
          if (lVar15 != 0) {
            *(undefined4 *)(lVar15 + 0x20) = 3;
            *(ulong *)(lVar15 + 0x30) = uStack_910;
            cVar2 = *(char *)(lVar4 + -6 + lVar5 * 8);
            goto joined_r0x052cf3b8;
          }
          uStack_938 = CONCAT44(uStack_938._4_4_,3);
          uStack_928 = uStack_910;
          uStack_930 = uVar10;
          func_0x0b5d6330(puVar8[1],&uStack_950,&uStack_950,&uStack_938);
          if (*(char *)(lVar4 + -6 + lVar5 * 8) == '\x01') goto LAB_052cf480;
LAB_052cf295:
          cVar2 = *(char *)(lVar4 + -5 + lVar5 * 8);
joined_r0x052cf29b:
          if (cVar2 == '\x01') goto LAB_052cf580;
LAB_052cf2a1:
          cVar2 = *(char *)(lVar4 + -4 + lVar5 * 8);
joined_r0x052cf635:
          if (cVar2 == '\x01') goto LAB_052cf680;
LAB_052cf2ad:
          cVar2 = *(char *)(lVar4 + -3 + lVar5 * 8);
joined_r0x052cf2b3:
          if (cVar2 != '\x01') goto LAB_052cf2b9;
LAB_052cf780:
          uStack_950 = CONCAT44((undefined4)lStack_8a8,(int)puStack_900);
          iStack_948 = (int)uStack_8c8 + iVar19;
          puVar8 = *(undefined8 **)(lStack_8f0 + 0x18);
          if (puVar8 == (undefined8 *)0x0) {
            uStack_928 = 0;
            uStack_920 = 0;
            uStack_938 = 0;
            uStack_930 = 0;
            uStack_918 = 1;
            (**(code **)(*plStack_940 + 0xf8))(plStack_940,&uStack_950,uStack_908,3,0,&uStack_938);
            cVar2 = *(char *)(lVar4 + -2 + lVar5 * 8);
            goto joined_r0x052cf835;
          }
          uVar10 = (**(code **)(*(long *)*puVar8 + 0x28))((long *)*puVar8,&uStack_950);
          lVar15 = func_0x0b5d6180(puVar8[1],&uStack_950);
          if (lVar15 == 0) {
            uStack_938 = CONCAT44(uStack_938._4_4_,3);
            uStack_928 = uStack_908;
            uStack_930 = uVar10;
            func_0x0b5d6330(puVar8[1],&uStack_950,&uStack_950,&uStack_938);
            cVar2 = *(char *)(lVar4 + -2 + lVar5 * 8);
            goto joined_r0x052cf835;
          }
          *(undefined4 *)(lVar15 + 0x20) = 3;
          *(ulong *)(lVar15 + 0x30) = uStack_908;
          if (*(char *)(lVar4 + -2 + lVar5 * 8) == '\x01') goto LAB_052cf880;
LAB_052cf2c5:
          cVar2 = *(char *)(lVar4 + -1 + lVar5 * 8);
joined_r0x052cf2cb:
          if (cVar2 == '\x01') goto LAB_052cf980;
LAB_052cf2d1:
          cVar2 = *(char *)(lVar4 + lVar5 * 8);
        }
        if (cVar2 == '\x01') {
          uStack_950 = CONCAT44((undefined4)uStack_8f8,(int)puStack_900);
          iStack_948 = (int)uStack_8c8 + iVar19;
          puVar8 = *(undefined8 **)(lStack_8f0 + 0x18);
          if (puVar8 == (undefined8 *)0x0) {
            uStack_928 = 0;
            uStack_920 = 0;
            uStack_938 = 0;
            uStack_930 = 0;
            uStack_918 = 1;
            (**(code **)(*plStack_940 + 0xf8))(plStack_940,&uStack_950,uStack_908,3,0,&uStack_938);
          }
          else {
            uVar10 = (**(code **)(*(long *)*puVar8 + 0x28))((long *)*puVar8,&uStack_950);
            lVar15 = func_0x0b5d6180(puVar8[1],&uStack_950);
            if (lVar15 == 0) {
              uStack_938 = CONCAT44(uStack_938._4_4_,3);
              uStack_928 = uStack_908;
              uStack_930 = uVar10;
              func_0x0b5d6330(puVar8[1],&uStack_950,&uStack_950,&uStack_938);
            }
            else {
              *(undefined4 *)(lVar15 + 0x20) = 3;
              *(ulong *)(lVar15 + 0x30) = uStack_908;
            }
          }
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x10);
      lVar15 = uStack_898 + 1;
      lVar4 = lVar4 + 0x80;
    } while (lVar15 != 0x10);
    uStack_8f8 = func_0x0cc41df0(0xf6ff9e0,0xf718af0,1);
    uStack_858 = uStack_848 + 0x300000000;
    puStack_860 = (undefined8 *)(uStack_848 + 0x400000000);
    uStack_868 = uStack_848 + 0x500000000;
    uStack_870 = uStack_848 + 0x600000000;
    uStack_878 = uStack_848 + 0x700000000;
    lVar4 = 0;
    do {
      puStack_900 = (undefined8 *)(lVar4 << 7);
      uStack_8d0 = lVar4 + uStack_888;
      uStack_880 = uStack_8d0 & 0xffffffff;
      uStack_898 = uStack_880 | uStack_858;
      uStack_908 = uStack_880 | (ulong)puStack_860;
      uStack_910 = uStack_880 | uStack_868;
      uStack_8b8 = uStack_880 | uStack_870;
      uStack_880 = uStack_880 | uStack_878;
      lVar15 = 0;
      lStack_850 = lVar4;
      do {
        puVar8 = puStack_900;
        puVar16 = (undefined4 *)(uStack_8c8 + lVar15);
        iVar19 = (int)puVar16;
        if (*(char *)((long)puStack_900 + (long)(auStack_828 + lVar15 * 2 + -1)) != '\0') {
          uStack_950 = uStack_898;
          iStack_948 = iVar19;
          lVar4 = (**(code **)(*plStack_940 + 0x10))(plStack_940,&uStack_950);
          if (((long)_DAT_0f713ce8 - (long)_DAT_0f713ce0 == -8) ||
             (_DAT_0f713ce8 != (undefined8 *)0x0 && _DAT_0f713ce0 == (undefined8 *)0x0))
          goto LAB_052d0819;
          puVar14 = _DAT_0f713ce0;
          if (_DAT_0f713ce8 == _DAT_0f713ce0) {
LAB_052cfcb6:
            if (puVar14 != _DAT_0f713ce8) {
              uStack_938 = uStack_908;
              uStack_930 = CONCAT44(uStack_930._4_4_,iVar19);
              cVar2 = func_0x0c9d58e0(plStack_940,&uStack_938);
              if (cVar2 != '\0') {
                uStack_8dc = (undefined4)uStack_8d0;
                uStack_8d8 = (float)uStack_8c0;
                puVar14 = *(undefined8 **)(lStack_8f0 + 0x18);
                if (puVar14 == (undefined8 *)0x0) {
                  uStack_928 = 0;
                  uStack_920 = 0;
                  uStack_938 = 0;
                  uStack_930 = 0;
                  uStack_918 = 1;
                  iStack_8d4 = iVar19;
                  (**(code **)(*plStack_940 + 0xf8))
                            (plStack_940,&uStack_8dc,uStack_8f8,3,0,&uStack_938);
                }
                else {
                  iStack_8d4 = iVar19;
                  uStack_8a0 = (**(code **)(*(long *)*puVar14 + 0x28))((long *)*puVar14,&uStack_8dc)
                  ;
                  lVar4 = func_0x0b5d6180(puVar14[1],&uStack_8dc);
                  if (lVar4 == 0) {
                    uStack_938 = CONCAT44(uStack_938._4_4_,3);
                    uStack_930 = uStack_8a0;
                    uStack_928 = uStack_8f8;
                    func_0x0b5d6330(puVar14[1],&uStack_8dc,&uStack_8dc,&uStack_938);
                  }
                  else {
                    *(undefined4 *)(lVar4 + 0x20) = 3;
                    *(ulong *)(lVar4 + 0x30) = uStack_8f8;
                  }
                }
              }
            }
          }
          else {
            do {
              if (*(long *)(*(long *)(lVar4 + 0x68) + 200) == *(long *)*puVar14) goto LAB_052cfcb6;
              puVar14 = puVar14 + 1;
            } while (puVar14 != _DAT_0f713ce8);
          }
        }
        if (*(char *)((long)puVar8 + (long)auStack_828 + lVar15 * 8 + -3) == '\x01') {
          uStack_950 = uStack_908;
          iStack_948 = iVar19;
          lVar4 = (**(code **)(*plStack_940 + 0x10))(plStack_940,&uStack_950);
          if (((long)_DAT_0f713ce8 - (long)_DAT_0f713ce0 == -8) ||
             (_DAT_0f713ce0 == (undefined8 *)0x0 && _DAT_0f713ce8 != (undefined8 *)0x0))
          goto LAB_052d0819;
          puVar14 = _DAT_0f713ce0;
          if (_DAT_0f713ce8 == _DAT_0f713ce0) {
LAB_052cfe66:
            if (puVar14 != _DAT_0f713ce8) {
              uStack_938 = uStack_910;
              uStack_930 = CONCAT44(uStack_930._4_4_,iVar19);
              cVar2 = func_0x0c9d58e0(plStack_940,&uStack_938);
              if (cVar2 != '\0') {
                uStack_8dc = (undefined4)uStack_8d0;
                uStack_8d8 = (undefined4)lStack_8a8;
                puVar14 = *(undefined8 **)(lStack_8f0 + 0x18);
                if (puVar14 == (undefined8 *)0x0) {
                  uStack_928 = 0;
                  uStack_920 = 0;
                  uStack_938 = 0;
                  uStack_930 = 0;
                  uStack_918 = 1;
                  iStack_8d4 = iVar19;
                  (**(code **)(*plStack_940 + 0xf8))
                            (plStack_940,&uStack_8dc,uStack_8f8,3,0,&uStack_938);
                }
                else {
                  iStack_8d4 = iVar19;
                  uStack_8a0 = (**(code **)(*(long *)*puVar14 + 0x28))((long *)*puVar14,&uStack_8dc)
                  ;
                  lVar4 = func_0x0b5d6180(puVar14[1],&uStack_8dc);
                  if (lVar4 == 0) {
                    uStack_938 = CONCAT44(uStack_938._4_4_,3);
                    uStack_930 = uStack_8a0;
                    uStack_928 = uStack_8f8;
                    func_0x0b5d6330(puVar14[1],&uStack_8dc,&uStack_8dc,&uStack_938);
                  }
                  else {
                    *(undefined4 *)(lVar4 + 0x20) = 3;
                    *(ulong *)(lVar4 + 0x30) = uStack_8f8;
                  }
                }
              }
            }
          }
          else {
            do {
              if (*(long *)(*(long *)(lVar4 + 0x68) + 200) == *(long *)*puVar14) goto LAB_052cfe66;
              puVar14 = puVar14 + 1;
            } while (puVar14 != _DAT_0f713ce8);
          }
        }
        if (*(char *)((long)puVar8 + (long)auStack_828 + lVar15 * 8 + -2) == '\x01') {
          uStack_950 = uStack_910;
          iStack_948 = iVar19;
          lVar4 = (**(code **)(*plStack_940 + 0x10))(plStack_940,&uStack_950);
          if (((long)_DAT_0f713ce8 - (long)_DAT_0f713ce0 == -8) ||
             (_DAT_0f713ce0 == (undefined8 *)0x0 && _DAT_0f713ce8 != (undefined8 *)0x0))
          goto LAB_052d0819;
          puVar14 = _DAT_0f713ce0;
          if (_DAT_0f713ce8 == _DAT_0f713ce0) {
LAB_052d0016:
            if (puVar14 != _DAT_0f713ce8) {
              uStack_938 = uStack_8b8;
              uStack_930 = CONCAT44(uStack_930._4_4_,iVar19);
              cVar2 = func_0x0c9d58e0(plStack_940,&uStack_938);
              if (cVar2 != '\0') {
                uStack_8dc = (undefined4)uStack_8d0;
                uStack_8d8 = (undefined4)uStack_8b0;
                puVar14 = *(undefined8 **)(lStack_8f0 + 0x18);
                if (puVar14 == (undefined8 *)0x0) {
                  uStack_928 = 0;
                  uStack_920 = 0;
                  uStack_938 = 0;
                  uStack_930 = 0;
                  uStack_918 = 1;
                  iStack_8d4 = iVar19;
                  (**(code **)(*plStack_940 + 0xf8))
                            (plStack_940,&uStack_8dc,uStack_8f8,3,0,&uStack_938);
                }
                else {
                  iStack_8d4 = iVar19;
                  uStack_8a0 = (**(code **)(*(long *)*puVar14 + 0x28))((long *)*puVar14,&uStack_8dc)
                  ;
                  lVar4 = func_0x0b5d6180(puVar14[1],&uStack_8dc);
                  if (lVar4 == 0) {
                    uStack_938 = CONCAT44(uStack_938._4_4_,3);
                    uStack_930 = uStack_8a0;
                    uStack_928 = uStack_8f8;
                    func_0x0b5d6330(puVar14[1],&uStack_8dc,&uStack_8dc,&uStack_938);
                  }
                  else {
                    *(undefined4 *)(lVar4 + 0x20) = 3;
                    *(ulong *)(lVar4 + 0x30) = uStack_8f8;
                  }
                }
              }
            }
          }
          else {
            do {
              if (*(long *)(*(long *)(lVar4 + 0x68) + 200) == *(long *)*puVar14) goto LAB_052d0016;
              puVar14 = puVar14 + 1;
            } while (puVar14 != _DAT_0f713ce8);
          }
        }
        if (*(char *)((long)puVar8 + (long)auStack_828 + lVar15 * 8 + -1) == '\x01') {
          uStack_950 = uStack_8b8;
          iStack_948 = iVar19;
          lVar4 = (**(code **)(*plStack_940 + 0x10))(plStack_940,&uStack_950);
          if (((long)_DAT_0f713ce8 - (long)_DAT_0f713ce0 == -8) ||
             (_DAT_0f713ce0 == (undefined8 *)0x0 && _DAT_0f713ce8 != (undefined8 *)0x0))
          goto LAB_052d0819;
          puVar8 = _DAT_0f713ce0;
          if (_DAT_0f713ce8 == _DAT_0f713ce0) {
LAB_052d01d6:
            if (puVar8 != _DAT_0f713ce8) {
              uStack_938 = uStack_880;
              uStack_930 = CONCAT44(uStack_930._4_4_,iVar19);
              cVar2 = func_0x0c9d58e0(plStack_940,&uStack_938);
              if (cVar2 != '\0') {
                uStack_8dc = (undefined4)uStack_8d0;
                uStack_8d8 = (undefined4)lStack_890;
                puVar8 = *(undefined8 **)(lStack_8f0 + 0x18);
                if (puVar8 == (undefined8 *)0x0) {
                  uStack_928 = 0;
                  uStack_920 = 0;
                  uStack_938 = 0;
                  uStack_930 = 0;
                  uStack_918 = 1;
                  iStack_8d4 = iVar19;
                  (**(code **)(*plStack_940 + 0xf8))
                            (plStack_940,&uStack_8dc,uStack_8f8,3,0,&uStack_938);
                }
                else {
                  puVar16 = &uStack_8dc;
                  iStack_8d4 = iVar19;
                  uVar10 = (**(code **)(*(long *)*puVar8 + 0x28))((long *)*puVar8,puVar16);
                  lVar4 = func_0x0b5d6180(puVar8[1],puVar16);
                  if (lVar4 == 0) {
                    uStack_938 = CONCAT44(uStack_938._4_4_,3);
                    uStack_928 = uStack_8f8;
                    uStack_930 = uVar10;
                    func_0x0b5d6330(puVar8[1],puVar16,puVar16,&uStack_938);
                  }
                  else {
                    *(undefined4 *)(lVar4 + 0x20) = 3;
                    *(ulong *)(lVar4 + 0x30) = uStack_8f8;
                  }
                }
              }
            }
          }
          else {
            do {
              if (*(long *)(*(long *)(lVar4 + 0x68) + 200) == *(long *)*puVar8) goto LAB_052d01d6;
              puVar8 = puVar8 + 1;
            } while (puVar8 != _DAT_0f713ce8);
          }
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 != 0x10);
      lVar4 = lStack_850 + 1;
    } while (lVar4 != 0x10);
    uStack_880 = func_0x0cc41df0(0xf6ff9e0,lStack_8f0 + 0x48,1);
    cVar2 = func_0x0ee24c30(*(long *)(uStack_880 + 0x68) + 200,&DAT_0f6eaec0);
    uVar10 = CONCAT71((int7)((ulong)puVar16 >> 8),1);
    if (cVar2 != '\0') {
      uStack_838 = (uStack_8e8 << 0x20) + 0x100000000;
      uVar11 = 0x1fffffff;
      uStack_870 = 0x1ffffff0;
      uStack_8e8 = 0;
      uStack_898 = uStack_888 & 0xffffffff;
      uVar21 = 0;
      puStack_900 = &uStack_830;
      do {
        iStack_83c = (int)uStack_898;
        uStack_898 = uStack_898 + uStack_838;
        uStack_8c0 = (ulong)(uint)((int)uStack_870 * 8);
        lStack_8a8 = (long)auStack_828 + (uStack_8c0 - 7);
        uStack_8c0 = uStack_8c0 + 1;
        uStack_8f8 = uVar21 << 7;
        uStack_858 = uVar21 * 0x10 + 0x10;
        lStack_850 = uVar21 * 0x10 + 0x1ffffff0;
        uStack_8a0 = (uint)((int)uStack_888 + (int)uVar21) | uStack_848;
        uStack_868 = CONCAT44(uStack_868._4_4_,uVar11);
        uStack_910 = 0;
        uStack_8b0 = uVar21;
        uStack_878 = uStack_8e8;
        puStack_860 = puStack_900;
        do {
          plVar9 = plStack_940;
          uStack_8d0 = (ulong)uVar11;
          uVar7 = uStack_8f8 + uStack_910 * 8;
          uStack_908 = uStack_8c8 + uStack_910;
          if (*(char *)((long)auStack_828 + (uVar7 - 8)) == '\0') {
            if (uVar21 == 0xf) {
LAB_052d04db:
              uVar11 = ((int)lStack_850 + (int)uStack_910) * 8;
              if (0x7ff < uVar11) goto LAB_052d0819;
              if (*(char *)((long)auStack_828 + ((ulong)uVar11 - 8)) == '\0') {
LAB_052d0503:
                if (uStack_910 == 0xf) {
LAB_052d0529:
                  uVar11 = (int)uVar7 - 8U & 0xfffffff8;
                  if (0x7ff < uVar11) goto LAB_052d0819;
                  if (*(char *)((long)auStack_828 + ((ulong)uVar11 - 8)) == '\0') {
LAB_052d0549:
                    if (*(char *)((long)auStack_828 + (uVar7 - 7)) != '\x01') goto LAB_052d05fa;
                  }
                }
                else {
                  if (0x7f7 < uVar7) {
LAB_052d0819:
                    func_0x04890760();
                    pcVar1 = (code *)swi(3);
                    uVar10 = (*pcVar1)();
                    return uVar10;
                  }
                  if (*(char *)((long)auStack_828 + uVar7) == '\0') {
                    if (uStack_910 != 0) goto LAB_052d0529;
                    goto LAB_052d0549;
                  }
                }
              }
            }
            else {
              if (0xff < uStack_858 + uStack_910) goto LAB_052d0819;
              if ((char)auStack_828[(uStack_858 + uStack_910) * 2 + -2] == '\0') {
                if (uVar21 != 0) goto LAB_052d04db;
                goto LAB_052d0503;
              }
            }
            uStack_938 = uStack_8a0;
            uStack_930 = CONCAT44(uStack_930._4_4_,(int)uStack_908);
            lVar4 = (**(code **)(*plStack_940 + 0x60))(plStack_940,&uStack_938);
            if (*(char *)(lVar4 + 5) == '\x01') {
              iStack_948 = (int)uStack_930;
              uStack_950 = uStack_938;
              lVar4 = (**(code **)(*plVar9 + 0x10))(plVar9,&uStack_938);
              (**(code **)(**(long **)(lVar4 + 0x68) + 600))
                        (*(long **)(lVar4 + 0x68),plVar9,&uStack_938,&uStack_950);
              if ((int)uStack_950 == (int)uStack_938) {
                if ((uStack_950._4_4_ == uStack_938._4_4_) && (iStack_948 == (int)uStack_930)) {
                  func_0x0d3df990(lStack_8f0,plVar9,&uStack_938,uStack_880);
                }
              }
            }
          }
LAB_052d05fa:
          uVar7 = (ulong)(uint)((int)uStack_8d0 * 8);
          uStack_8b8 = (long)auStack_828 + (uVar7 - 7);
          lStack_890 = uVar7 + 1;
          puVar8 = puStack_900;
          uVar7 = uStack_898;
          uVar17 = 0;
          do {
            uVar18 = uVar17 + 1;
            if (*(char *)((long)puVar8 + uVar17 + 1) == '\0') {
              if (uVar21 == 0xf) {
LAB_052d0699:
                if (0x7ff < uStack_8c0 + uVar17) goto LAB_052d0819;
                if (*(char *)(lStack_8a8 + uVar17) == '\0') {
LAB_052d06c3:
                  if (uStack_910 == 0xf) {
LAB_052d06f3:
                    if (0x7ff < lStack_890 + uVar17) goto LAB_052d0819;
                    if (*(char *)(uStack_8b8 + uVar17) == '\0') {
LAB_052d0719:
                      if (uVar17 != 6) {
                        if (uStack_8e8 + uVar17 == 0x7fe) goto LAB_052d0819;
                        if (*(char *)((long)puVar8 + uVar17 + 2) != '\0') goto LAB_052d0748;
                      }
                      if (*(char *)((long)puVar8 + uVar17) != '\x01') goto LAB_052d0641;
                    }
                  }
                  else {
                    if (0x7ff < uStack_8e8 + uVar17 + 9) goto LAB_052d0819;
                    if (*(char *)((long)puVar8 + uVar17 + 9) == '\0') {
                      if (uStack_910 != 0) goto LAB_052d06f3;
                      goto LAB_052d0719;
                    }
                  }
                }
              }
              else {
                if (0x7ff < uStack_8e8 + uVar17 + 0x81) goto LAB_052d0819;
                if (*(char *)((long)puVar8 + uVar17 + 0x81) == '\0') {
                  if (uVar21 != 0) goto LAB_052d0699;
                  goto LAB_052d06c3;
                }
              }
LAB_052d0748:
              if ((uVar18 < 4) ||
                 (iVar19 = (**(code **)(*param_4 + 0x18))(param_4,2), puVar8 = puStack_900,
                 iVar19 != 0)) {
                uStack_930 = CONCAT44(uStack_930._4_4_,(int)uStack_908);
                uStack_938 = uVar7;
                lVar4 = (**(code **)(*plStack_940 + 0x60))(plStack_940,&uStack_938);
                plVar9 = plStack_940;
                puVar8 = puStack_900;
                if (*(char *)(lVar4 + 5) == '\x01') {
                  iStack_948 = (int)uStack_930;
                  uStack_950 = uStack_938;
                  lVar4 = (**(code **)(*plStack_940 + 0x10))(plStack_940,&uStack_938);
                  (**(code **)(**(long **)(lVar4 + 0x68) + 600))
                            (*(long **)(lVar4 + 0x68),plVar9,&uStack_938,&uStack_950);
                  puVar8 = puStack_900;
                  uVar21 = uStack_8b0;
                  if ((int)uStack_950 == (int)uStack_938) {
                    if ((uStack_950._4_4_ == uStack_938._4_4_) && (iStack_948 == (int)uStack_930)) {
                      func_0x0d3df990(lStack_8f0,plStack_940,&uStack_938,uStack_880);
                      puVar8 = puStack_900;
                      uVar21 = uStack_8b0;
                    }
                  }
                }
              }
            }
LAB_052d0641:
            uVar7 = uVar7 + 0x100000000;
            uVar17 = uVar18;
          } while (uVar18 != 7);
          uStack_910 = uStack_910 + 1;
          uVar11 = (int)uStack_8d0 + 1;
          puStack_900 = puVar8 + 1;
          uStack_8e8 = uStack_8e8 + 8;
          lStack_8a8 = lStack_8a8 + 8;
          uStack_8c0 = uStack_8c0 + 8;
        } while (uStack_910 != 0x10);
        uVar21 = uVar21 + 1;
        uStack_898 = (ulong)(iStack_83c + 1);
        uVar11 = (int)uStack_868 + 0x10;
        puStack_900 = puStack_860 + 0x10;
        uStack_8e8 = uStack_878 + 0x80;
        uStack_870 = (ulong)((int)uStack_870 + 0x10);
      } while (uVar21 != 0x10);
    }
  }
  else {
LAB_052cf1db:
    uVar10 = 0;
  }
  return uVar10 & 0xffffffff;
}


```

### Assembly

```asm
052ce810  PUSH RBP
052ce811  PUSH R15
052ce813  PUSH R14
052ce815  PUSH R13
052ce817  PUSH R12
052ce819  PUSH RBX
052ce81a  SUB RSP,0x928
052ce821  MOV RBX,RCX
052ce824  MOV R12,RDX
052ce827  MOV R13,RSI
052ce82a  MOV qword ptr [RSP + 0x68],RDI
052ce82f  MOV EBP,dword ptr [RDX + 0x4]
052ce832  MOV RAX,qword ptr [RSI]
052ce835  MOV RDI,RSI
052ce838  CALL qword ptr [RAX + 0x110]
052ce83e  CWDE
052ce83f  ADD EAX,0x4
052ce842  CMP EBP,EAX
052ce844  JLE 0x052cf1db
052ce84a  MOV R15,qword ptr [R12]
052ce84e  MOV R14D,dword ptr [R12 + 0x8]
052ce853  MOV qword ptr [RSP + 0x128],R15
052ce85b  LEA EAX,[R15 + -0x8]
052ce85f  MOV dword ptr [RSP + 0x128],EAX
052ce866  ADD R14D,-0x8
052ce86a  MOV dword ptr [RSP + 0x130],R14D
052ce872  SHR R15,0x20
052ce876  MOV RAX,qword ptr [R13]
052ce87a  MOV RDI,R13
052ce87d  CALL qword ptr [RAX + 0x110]
052ce883  CWDE
052ce884  CMP R15D,EAX
052ce887  JLE 0x052ce8fc
052ce889  LEA R12,[RSP + 0x128]
052ce891  NOP dword ptr CS:[RAX + RAX*0x1]
052ce8a0  MOV RAX,qword ptr [R13]
052ce8a4  MOV RDI,R13
052ce8a7  MOV RSI,R12
052ce8aa  CALL qword ptr [RAX + 0x10]
052ce8ad  MOV RAX,qword ptr [RAX + 0x68]
052ce8b1  MOV RAX,qword ptr [RAX + 0xc8]
052ce8b8  MOV R15D,dword ptr [RSP + 0x12c]
052ce8c0  CMP RAX,qword ptr [0x0f6eaec0]
052ce8c7  JNZ 0x052ce8f4
052ce8c9  TEST R15D,R15D
052ce8cc  JLE 0x052ce8f4
052ce8ce  DEC R15D
052ce8d1  MOV dword ptr [RSP + 0x12c],R15D
052ce8d9  MOV RAX,qword ptr [R13]
052ce8dd  MOV RDI,R13
052ce8e0  CALL qword ptr [RAX + 0x110]
052ce8e6  CWDE
052ce8e7  CMP R15D,EAX
052ce8ea  JG 0x052ce8a0
052ce8ec  MOV R15D,dword ptr [RSP + 0x12c]
052ce8f4  MOV R14D,dword ptr [RSP + 0x130]
052ce8fc  ADD R15D,-0x4
052ce900  MOV dword ptr [RSP + 0x12c],R15D
052ce908  MOV RAX,qword ptr [RSP + 0x128]
052ce910  MOV qword ptr [RSP + 0xd0],RAX
052ce918  LEA RDI,[RSP + 0x128]
052ce920  XOR R15D,R15D
052ce923  MOV EDX,0x800
052ce928  XOR ESI,ESI
052ce92a  CALL 0x0eee2dd0
052ce92f  MOV RAX,qword ptr [RBX]
052ce932  MOV RDI,RBX
052ce935  MOV ESI,0x4
052ce93a  CALL qword ptr [RAX + 0x18]
052ce93d  CMP EAX,-0x3
052ce940  JL 0x052cecad
052ce946  MOV EBP,EAX
052ce948  ADD EBP,0x3
052ce94b  TEST EBP,EBP
052ce94d  CMOVLE EBP,R15D
052ce951  LEA R12,[RSP + 0x1b6]
052ce959  JMP 0x052ce970
052ce960  LEA EAX,[R15 + 0x1]
052ce964  CMP R15D,EBP
052ce967  MOV R15D,EAX
052ce96a  JZ 0x052cecad
052ce970  MOV RAX,qword ptr [RBX]
052ce973  MOV RDI,RBX
052ce976  CALL qword ptr [RAX + 0x30]
052ce979  MOVAPS XMM1,XMM0
052ce97c  MOVSS XMM0,dword ptr [0x011985dc]
052ce984  MULSS XMM1,XMM0
052ce988  MOVSS XMM0,dword ptr [0x01198af0]
052ce990  ADDSS XMM1,XMM0
052ce994  MOVSS dword ptr [RSP + 0x18],XMM1
052ce99a  MOV RAX,qword ptr [RBX]
052ce99d  MOV RDI,RBX
052ce9a0  CALL qword ptr [RAX + 0x30]
052ce9a3  MOVAPS XMM1,XMM0
052ce9a6  MOVSS XMM0,dword ptr [0x011987f8]
052ce9ae  MULSS XMM1,XMM0
052ce9b2  MOVSS XMM0,dword ptr [0x01198724]
052ce9ba  ADDSS XMM1,XMM0
052ce9be  MOVSS dword ptr [RSP + 0x70],XMM1
052ce9c4  MOV RAX,qword ptr [RBX]
052ce9c7  MOV RDI,RBX
052ce9ca  CALL qword ptr [RAX + 0x30]
052ce9cd  MULSS XMM0,dword ptr [0x011985dc]
052ce9d5  ADDSS XMM0,dword ptr [0x01198af0]
052ce9dd  MOVSS dword ptr [RSP + 0x50],XMM0
052ce9e3  MOV RAX,qword ptr [RBX]
052ce9e6  MOV RDI,RBX
052ce9e9  CALL qword ptr [RAX + 0x30]
052ce9ec  MOVSS XMM2,dword ptr [0x01198634]
052ce9f4  MOVSS XMM3,dword ptr [RSP + 0x18]
052ce9fa  SUBSS XMM2,XMM3
052ce9fe  MOVSS XMM1,dword ptr [0x01198458]
052cea06  ADDSS XMM2,XMM1
052cea0a  MULSS XMM2,XMM0
052cea0e  ADDSS XMM2,dword ptr [0x011983f0]
052cea16  MOVSS XMM0,dword ptr [0x011986e0]
052cea1e  MULSS XMM3,XMM0
052cea22  MOVSS dword ptr [RSP + 0x18],XMM3
052cea28  ADDSS XMM2,XMM3
052cea2c  MOVSS dword ptr [RSP + 0x58],XMM2
052cea32  MOV RAX,qword ptr [RBX]
052cea35  MOV RDI,RBX
052cea38  CALL qword ptr [RAX + 0x30]
052cea3b  MOVSS XMM2,dword ptr [0x01198494]
052cea43  MOVSS XMM1,dword ptr [RSP + 0x70]
052cea49  SUBSS XMM2,XMM1
052cea4d  ADDSS XMM2,dword ptr [0x01198360]
052cea55  MULSS XMM2,XMM0
052cea59  ADDSS XMM2,dword ptr [0x01198724]
052cea61  MULSS XMM1,dword ptr [0x011986e0]
052cea69  MOVSS dword ptr [RSP + 0x70],XMM1
052cea6f  ADDSS XMM2,XMM1
052cea73  MOVSS dword ptr [RSP + 0x98],XMM2
052cea7c  MOV RAX,qword ptr [RBX]
052cea7f  MOV RDI,RBX
052cea82  CALL qword ptr [RAX + 0x30]
052cea85  MOVSS XMM15,dword ptr [0x011983f0]
052cea8e  MOVSS XMM1,dword ptr [0x01198634]
052cea96  MOVSS XMM8,dword ptr [RSP + 0x50]
052cea9d  SUBSS XMM1,XMM8
052ceaa2  ADDSS XMM1,dword ptr [0x01198458]
052ceaaa  MULSS XMM1,XMM0
052ceaae  MOVAPS XMM2,XMM15
052ceab2  MOVSS XMM0,dword ptr [RSP + 0x98]
052ceabb  SUBSS XMM2,XMM0
052ceabf  MOVSS XMM3,dword ptr [0x01198724]
052ceac7  SUBSS XMM3,XMM0
052ceacb  MOVSS XMM7,dword ptr [0x01198af0]
052cead3  SUBSS XMM7,XMM0
052cead7  MOVSS XMM4,dword ptr [0x011987f8]
052ceadf  SUBSS XMM4,XMM0
052ceae3  MOVSS XMM5,dword ptr [0x01198988]
052ceaeb  SUBSS XMM5,XMM0
052ceaef  MOVSS XMM6,dword ptr [0x011985dc]
052ceaf7  SUBSS XMM6,XMM0
052ceafb  MOVSS XMM0,dword ptr [RSP + 0x70]
052ceb01  DIVSS XMM2,XMM0
052ceb05  DIVSS XMM3,XMM0
052ceb09  DIVSS XMM7,XMM0
052ceb0d  DIVSS XMM4,XMM0
052ceb11  DIVSS XMM5,XMM0
052ceb15  DIVSS XMM6,XMM0
052ceb19  ADDSS XMM1,XMM15
052ceb1e  MULSS XMM8,dword ptr [0x011986e0]
052ceb27  MOVAPS XMM0,XMM8
052ceb2b  ADDSS XMM1,XMM8
052ceb30  MULSS XMM2,XMM2
052ceb34  MOVSS dword ptr [RSP + 0x70],XMM2
052ceb3a  MULSS XMM3,XMM3
052ceb3e  MULSS XMM7,XMM7
052ceb42  MOVAPS XMM2,XMM7
052ceb45  MULSS XMM4,XMM4
052ceb49  MULSS XMM5,XMM5
052ceb4d  MULSS XMM6,XMM6
052ceb51  MOV EAX,0x1
052ceb56  MOV RCX,R12
052ceb59  JMP 0x052ceb71
052ceb60  INC RAX
052ceb63  SUB RCX,-0x80
052ceb67  CMP RAX,0xf
052ceb6b  JZ 0x052ce960
052ceb71  XORPS XMM7,XMM7
052ceb74  CVTSI2SS XMM7,EAX
052ceb78  SUBSS XMM7,dword ptr [RSP + 0x58]
052ceb7e  DIVSS XMM7,dword ptr [RSP + 0x18]
052ceb84  MULSS XMM7,XMM7
052ceb88  MOVAPS XMM8,XMM7
052ceb8c  ADDSS XMM8,dword ptr [RSP + 0x70]
052ceb93  MOVAPS XMM9,XMM7
052ceb97  ADDSS XMM9,XMM3
052ceb9c  MOVAPS XMM10,XMM7
052ceba0  ADDSS XMM10,XMM2
052ceba5  MOVAPS XMM11,XMM7
052ceba9  ADDSS XMM11,XMM4
052cebae  MOVAPS XMM12,XMM7
052cebb2  ADDSS XMM12,XMM5
052cebb7  ADDSS XMM7,XMM6
052cebbb  XOR EDX,EDX
052cebbd  JMP 0x052cebc9
052cebc0  INC RDX
052cebc3  CMP RDX,0xe
052cebc7  JZ 0x052ceb60
052cebc9  LEA ESI,[RDX + 0x1]
052cebcc  XORPS XMM13,XMM13
052cebd0  CVTSI2SS XMM13,ESI
052cebd5  SUBSS XMM13,XMM1
052cebda  DIVSS XMM13,XMM0
052cebdf  MULSS XMM13,XMM13
052cebe4  MOVAPS XMM14,XMM13
052cebe8  ADDSS XMM14,XMM8
052cebed  UCOMISS XMM15,XMM14
052cebf1  JA 0x052cec40
052cebf3  MOVAPS XMM14,XMM13
052cebf7  ADDSS XMM14,XMM9
052cebfc  UCOMISS XMM15,XMM14
052cec00  JA 0x052cec54
052cec02  MOVAPS XMM14,XMM13
052cec06  ADDSS XMM14,XMM10
052cec0b  UCOMISS XMM15,XMM14
052cec0f  JA 0x052cec68
052cec11  MOVAPS XMM14,XMM13
052cec15  ADDSS XMM14,XMM11
052cec1a  UCOMISS XMM15,XMM14
052cec1e  JA 0x052cec7c
052cec20  MOVAPS XMM14,XMM13
052cec24  ADDSS XMM14,XMM12
052cec29  UCOMISS XMM15,XMM14
052cec2d  JA 0x052cec90
052cec2f  ADDSS XMM13,XMM7
052cec34  UCOMISS XMM15,XMM13
052cec38  JBE 0x052cebc0
052cec3a  JMP 0x052ceca4
052cec40  MOV byte ptr [RCX + RDX*0x8 + -0x5],0x1
052cec45  MOVAPS XMM14,XMM13
052cec49  ADDSS XMM14,XMM9
052cec4e  UCOMISS XMM15,XMM14
052cec52  JBE 0x052cec02
052cec54  MOV byte ptr [RCX + RDX*0x8 + -0x4],0x1
052cec59  MOVAPS XMM14,XMM13
052cec5d  ADDSS XMM14,XMM10
052cec62  UCOMISS XMM15,XMM14
052cec66  JBE 0x052cec11
052cec68  MOV byte ptr [RCX + RDX*0x8 + -0x3],0x1
052cec6d  MOVAPS XMM14,XMM13
052cec71  ADDSS XMM14,XMM11
052cec76  UCOMISS XMM15,XMM14
052cec7a  JBE 0x052cec20
052cec7c  MOV byte ptr [RCX + RDX*0x8 + -0x2],0x1
052cec81  MOVAPS XMM14,XMM13
052cec85  ADDSS XMM14,XMM12
052cec8a  UCOMISS XMM15,XMM14
052cec8e  JBE 0x052cec2f
052cec90  MOV byte ptr [RCX + RDX*0x8 + -0x1],0x1
052cec95  ADDSS XMM13,XMM7
052cec9a  UCOMISS XMM15,XMM13
052cec9e  JBE 0x052cebc0
052ceca4  MOV byte ptr [RCX + RDX*0x8],0x1
052ceca8  JMP 0x052cebc0
052cecad  MOV qword ptr [RSP + 0x18],R13
052cecb2  MOV RAX,qword ptr [RSP + 0x68]
052cecb7  LEA RSI,[RAX + 0x20]
052cecbb  LEA RDI,[0xf6ff9e0]
052cecc2  MOV EDX,0x1
052cecc7  CALL 0x0cc41df0
052ceccc  MOV qword ptr [RSP + 0x48],RAX
052cecd1  MOV RCX,qword ptr [RSP + 0xd0]
052cecd9  MOV RAX,RCX
052cecdc  SHR RAX,0x20
052cece0  MOV qword ptr [RSP + 0x70],RAX
052cece5  MOV EAX,R14D
052cece8  MOV qword ptr [RSP + 0x90],RAX
052cecf0  MOV RAX,-0x100000000
052cecfa  AND RAX,RCX
052cecfd  XOR R13D,R13D
052ced00  MOV qword ptr [RSP + 0x110],RAX
052ced08  MOV RDX,R13
052ced0b  SHL RDX,0x7
052ced0f  MOV RSI,R13
052ced12  SHL RSI,0x4
052ced16  LEA RDI,[RSI + 0x10]
052ced1a  ADD ECX,R13D
052ced1d  ADD RSI,0x1ffffff0
052ced24  MOV qword ptr [RSP + 0x50],RCX
052ced29  OR RCX,RAX
052ced2c  MOV qword ptr [RSP + 0xc0],RCX
052ced34  XOR R14D,R14D
052ced37  MOV qword ptr [RSP + 0xa0],RDX
052ced3f  MOV qword ptr [RSP + 0x88],RSI
052ced47  MOV qword ptr [RSP + 0x60],RDI
052ced4c  JMP 0x052ced72
052ced50  INC R14
052ced53  CMP R14,0x10
052ced57  MOV RDX,qword ptr [RSP + 0xa0]
052ced5f  MOV RSI,qword ptr [RSP + 0x88]
052ced67  MOV RDI,qword ptr [RSP + 0x60]
052ced6c  JZ 0x052cf14a
052ced72  LEA R12,[RDX + R14*0x8]
052ced76  LEA RAX,[RDI + R14*0x1]
052ced7a  LEA RCX,[RAX*0x8]
052ced82  MOV qword ptr [RSP + 0xb0],RCX
052ced8a  LEA ECX,[RSI + R14*0x1]
052ced8e  SHL ECX,0x3
052ced91  MOV qword ptr [RSP + 0x98],RCX
052ced99  LEA RCX,[RDX + R14*0x8]
052ced9d  ADD RCX,0x8
052ceda1  MOV qword ptr [RSP + 0xc8],RCX
052ceda9  MOV RCX,qword ptr [RSP + 0x90]
052cedb1  ADD RCX,R14
052cedb4  MOV qword ptr [RSP + 0x58],RCX
052cedb9  MOV ECX,0xfffffff8
052cedbe  ADD ECX,R12D
052cedc1  AND ECX,0xfffffff8
052cedc4  MOV qword ptr [RSP + 0xa8],RCX
052cedcc  CMP byte ptr [RSP + R12*0x1 + 0x128],0x0
052cedd5  JNZ 0x052cef59
052ceddb  CMP R13,0xf
052ceddf  JZ 0x052cee08
052cede1  CMP RAX,0xff
052cede7  JA 0x052d0819
052ceded  MOV RAX,qword ptr [RSP + 0xb0]
052cedf5  CMP byte ptr [RSP + RAX*0x1 + 0x128],0x0
052cedfd  JNZ 0x052cee90
052cee03  TEST R13,R13
052cee06  JZ 0x052cee2b
052cee08  CMP dword ptr [RSP + 0x98],0x7ff
052cee13  JA 0x052d0819
052cee19  MOV RAX,qword ptr [RSP + 0x98]
052cee21  CMP byte ptr [RSP + RAX*0x1 + 0x128],0x0
052cee29  JNZ 0x052cee90
052cee2b  CMP R14,0xf
052cee2f  JZ 0x052cee55
052cee31  CMP R12,0x7f7
052cee38  JA 0x052d0819
052cee3e  MOV RAX,qword ptr [RSP + 0xc8]
052cee46  CMP byte ptr [RSP + RAX*0x1 + 0x128],0x0
052cee4e  JNZ 0x052cee90
052cee50  TEST R14,R14
052cee53  JZ 0x052cee78
052cee55  CMP dword ptr [RSP + 0xa8],0x7ff
052cee60  JA 0x052d0819
052cee66  MOV RAX,qword ptr [RSP + 0xa8]
052cee6e  CMP byte ptr [RSP + RAX*0x1 + 0x128],0x0
052cee76  JNZ 0x052cee90
052cee78  CMP byte ptr [RSP + R12*0x1 + 0x129],0x1
052cee81  JNZ 0x052cef59
052cee87  NOP word ptr [RAX + RAX*0x1]
052cee90  MOV RAX,qword ptr [RSP + 0xc0]
052cee98  MOV qword ptr [RSP + 0x20],RAX
052cee9d  MOV RAX,qword ptr [RSP + 0x58]
052ceea2  MOV dword ptr [RSP + 0x28],EAX
052ceea6  MOV R15,qword ptr [RSP + 0x18]
052ceeab  MOV RAX,qword ptr [R15]
052ceeae  MOV RDI,R15
052ceeb1  LEA RSI,[RSP + 0x20]
052ceeb6  CALL qword ptr [RAX + 0x60]
052ceeb9  MOV RBP,RAX
052ceebc  MOV RAX,qword ptr [R15]
052ceebf  MOV RDI,R15
052ceec2  LEA RSI,[RSP + 0x20]
052ceec7  CALL qword ptr [RAX + 0x10]
052ceeca  MOV RDX,qword ptr [RAX + 0x68]
052ceece  CMP byte ptr [RBP + 0x5],0x0
052ceed2  JNZ 0x052ceee3
052ceed4  MOV RAX,qword ptr [RSP + 0x48]
052ceed9  CMP RDX,qword ptr [RAX + 0x68]
052ceedd  JNZ 0x052cf1db
052ceee3  MOV RCX,qword ptr [RSP + 0x68]
052ceee8  MOV RAX,qword ptr [RCX + 0x70]
052ceeec  MOV RCX,qword ptr [RCX + 0x78]
052ceef0  MOV RSI,RCX
052ceef3  SUB RSI,RAX
052ceef6  CMP RSI,-0x8
052ceefa  JZ 0x052d0819
052cef00  TEST RAX,RAX
052cef03  SETZ SIL
052cef07  TEST RCX,RCX
052cef0a  SETNZ DIL
052cef0e  TEST SIL,DIL
052cef11  JNZ 0x052d0819
052cef17  CMP RCX,RAX
052cef1a  JZ 0x052cef50
052cef1c  MOV RDX,qword ptr [RDX + 0xc8]
052cef23  NOP dword ptr CS:[RAX + RAX*0x1]
052cef30  MOV RSI,qword ptr [RAX]
052cef33  CMP RDX,qword ptr [RSI]
052cef36  JZ 0x052cef50
052cef38  ADD RAX,0x8
052cef3c  CMP RAX,RCX
052cef3f  JNZ 0x052cef30
052cef41  JMP 0x052cef59
052cef50  CMP RAX,RCX
052cef53  JNZ 0x052cf1db
052cef59  MOV R15D,0x1
052cef5f  JMP 0x052cef86
052cef70  CMP RAX,RCX
052cef73  JNZ 0x052cf1db
052cef79  INC R15
052cef7c  CMP R15,0x8
052cef80  JZ 0x052ced50
052cef86  MOV RAX,R15
052cef89  OR RAX,R12
052cef8c  CMP byte ptr [RSP + RAX*0x1 + 0x128],0x0
052cef94  JNZ 0x052cef79
052cef96  CMP R13,0xf
052cef9a  JZ 0x052cefc7
052cef9c  MOV RCX,qword ptr [RSP + 0xb0]
052cefa4  ADD RCX,R15
052cefa7  CMP RCX,0x800
052cefae  JNC 0x052d0819
052cefb4  CMP byte ptr [RSP + RCX*0x1 + 0x128],0x0
052cefbc  JNZ 0x052cf070
052cefc2  TEST R13,R13
052cefc5  JZ 0x052cefed
052cefc7  MOV RCX,qword ptr [RSP + 0x98]
052cefcf  ADD RCX,R15
052cefd2  CMP RCX,0x800
052cefd9  JNC 0x052d0819
052cefdf  CMP byte ptr [RSP + RCX*0x1 + 0x128],0x0
052cefe7  JNZ 0x052cf070
052cefed  CMP R14,0xf
052ceff1  JZ 0x052cf01a
052ceff3  MOV RCX,qword ptr [RSP + 0xc8]
052ceffb  ADD RCX,R15
052ceffe  CMP RCX,0x800
052cf005  JNC 0x052d0819
052cf00b  CMP byte ptr [RSP + RCX*0x1 + 0x128],0x0
052cf013  JNZ 0x052cf070
052cf015  TEST R14,R14
052cf018  JZ 0x052cf03c
052cf01a  MOV RCX,qword ptr [RSP + 0xa8]
052cf022  ADD RCX,R15
052cf025  CMP RCX,0x800
052cf02c  JNC 0x052d0819
052cf032  CMP byte ptr [RSP + RCX*0x1 + 0x128],0x0
052cf03a  JNZ 0x052cf070
052cf03c  CMP R15,0x7
052cf040  JZ 0x052cf058
052cf042  CMP RAX,0x7ff
052cf048  JZ 0x052d0819
052cf04e  CMP byte ptr [RSP + RAX*0x1 + 0x129],0x0
052cf056  JNZ 0x052cf070
052cf058  CMP byte ptr [RSP + RAX*0x1 + 0x127],0x1
052cf060  JNZ 0x052cef79
052cf066  NOP word ptr CS:[RAX + RAX*0x1]
052cf070  MOV RAX,qword ptr [RSP + 0x70]
052cf075  ADD EAX,R15D
052cf078  SHL RAX,0x20
052cf07c  ADD RAX,qword ptr [RSP + 0x50]
052cf081  MOV qword ptr [RSP + 0x20],RAX
052cf086  MOV RAX,qword ptr [RSP + 0x58]
052cf08b  MOV dword ptr [RSP + 0x28],EAX
052cf08f  MOV RDI,qword ptr [RSP + 0x18]
052cf094  MOV RAX,qword ptr [RDI]
052cf097  LEA RSI,[RSP + 0x20]
052cf09c  CALL qword ptr [RAX + 0x60]
052cf09f  MOV RBP,RAX
052cf0a2  CMP R15,0x4
052cf0a6  JC 0x052cf0b2
052cf0a8  CMP byte ptr [RBP + 0x2],0x0
052cf0ac  JNZ 0x052cf1db
052cf0b2  MOV RDI,qword ptr [RSP + 0x18]
052cf0b7  MOV RAX,qword ptr [RDI]
052cf0ba  LEA RSI,[RSP + 0x20]
052cf0bf  CALL qword ptr [RAX + 0x10]
052cf0c2  MOV RDX,qword ptr [RAX + 0x68]
052cf0c6  CMP R15,0x3
052cf0ca  JA 0x052cf0e1
052cf0cc  CMP byte ptr [RBP + 0x5],0x0
052cf0d0  JNZ 0x052cf0e1
052cf0d2  MOV RAX,qword ptr [RSP + 0x48]
052cf0d7  CMP RDX,qword ptr [RAX + 0x68]
052cf0db  JNZ 0x052cf1db
052cf0e1  MOV RCX,qword ptr [RSP + 0x68]
052cf0e6  MOV RAX,qword ptr [RCX + 0x70]
052cf0ea  MOV RCX,qword ptr [RCX + 0x78]
052cf0ee  MOV RSI,RCX
052cf0f1  SUB RSI,RAX
052cf0f4  CMP RSI,-0x8
052cf0f8  JZ 0x052d0819
052cf0fe  TEST RAX,RAX
052cf101  SETNZ SIL
052cf105  TEST RCX,RCX
052cf108  SETZ DIL
052cf10c  OR DIL,SIL
052cf10f  JZ 0x052d0819
052cf115  CMP RCX,RAX
052cf118  JZ 0x052cef70
052cf11e  MOV RDX,qword ptr [RDX + 0xc8]
052cf125  NOP dword ptr CS:[RAX + RAX*0x1]
052cf130  MOV RSI,qword ptr [RAX]
052cf133  CMP RDX,qword ptr [RSI]
052cf136  JZ 0x052cef70
052cf13c  ADD RAX,0x8
052cf140  CMP RAX,RCX
052cf143  JNZ 0x052cf130
052cf145  JMP 0x052cef79
052cf14a  INC R13
052cf14d  CMP R13,0x10
052cf151  MOV RCX,qword ptr [RSP + 0xd0]
052cf159  MOV RAX,qword ptr [RSP + 0x110]
052cf161  JNZ 0x052ced08
052cf167  LEA RDI,[0xf6ff9e0]
052cf16e  CALL 0x0cc446c0
052cf173  MOV RAX,qword ptr [RAX]
052cf176  MOV RAX,qword ptr [RAX + 0x200]
052cf17d  MOV qword ptr [RSP + 0x50],RAX
052cf182  MOV RAX,qword ptr [RSP + 0x70]
052cf187  LEA ECX,[RAX + 0x1]
052cf18a  MOV dword ptr [RSP + 0xa0],ECX
052cf191  LEA ECX,[RAX + 0x2]
052cf194  MOV dword ptr [RSP + 0x88],ECX
052cf19b  LEA ECX,[RAX + 0x3]
052cf19e  MOV dword ptr [RSP + 0x98],ECX
052cf1a5  LEA ECX,[RAX + 0x4]
052cf1a8  MOV dword ptr [RSP + 0xb0],ECX
052cf1af  LEA ECX,[RAX + 0x5]
052cf1b2  MOV dword ptr [RSP + 0xa8],ECX
052cf1b9  LEA ECX,[RAX + 0x6]
052cf1bc  MOV dword ptr [RSP + 0xc8],ECX
052cf1c3  ADD EAX,0x7
052cf1c6  MOV dword ptr [RSP + 0x60],EAX
052cf1ca  LEA R12,[RSP + 0x12f]
052cf1d2  XOR EAX,EAX
052cf1d4  LEA RBP,[RSP + 0x8]
052cf1d9  JMP 0x052cf20a
052cf1db  XOR EBP,EBP
052cf1dd  MOV EAX,EBP
052cf1df  ADD RSP,0x928
052cf1e6  POP RBX
052cf1e7  POP R12
052cf1e9  POP R13
052cf1eb  POP R14
052cf1ed  POP R15
052cf1ef  POP RBP
052cf1f0  RET
052cf1f1  MOV RAX,qword ptr [RSP + 0xc0]
052cf1f9  INC RAX
052cf1fc  SUB R12,-0x80
052cf200  CMP RAX,0x10
052cf204  JZ 0x052cfa79
052cf20a  MOV qword ptr [RSP + 0xc0],RAX
052cf212  MOV RCX,qword ptr [RSP + 0xd0]
052cf21a  ADD EAX,ECX
052cf21c  MOV dword ptr [RSP + 0x58],EAX
052cf220  XOR R13D,R13D
052cf223  JMP 0x052cf27d
052cf225  XORPS XMM0,XMM0
052cf228  MOVAPS xmmword ptr [RSP + 0x30],XMM0
052cf22d  MOVAPS xmmword ptr [RSP + 0x20],XMM0
052cf232  MOV qword ptr [RSP + 0x40],0x0
052cf23b  MOV byte ptr [RSP + 0x40],0x1
052cf240  MOV RDI,qword ptr [RSP + 0x18]
052cf245  MOV RAX,qword ptr [RDI]
052cf248  MOV RSI,RBP
052cf24b  MOV RDX,qword ptr [RSP + 0x50]
052cf250  MOV ECX,0x3
052cf255  XOR R8D,R8D
052cf258  LEA R9,[RSP + 0x20]
052cf25d  CALL qword ptr [RAX + 0xf8]
052cf263  NOP dword ptr CS:[RAX + RAX*0x1]
052cf270  INC R13
052cf273  CMP R13,0x10
052cf277  JZ 0x052cf1f1
052cf27d  CMP byte ptr [R12 + R13*0x8 + -0x7],0x0
052cf283  JNZ 0x052cf350
052cf289  CMP byte ptr [R12 + R13*0x8 + -0x6],0x1
052cf28f  JZ 0x052cf480
052cf295  CMP byte ptr [R12 + R13*0x8 + -0x5],0x1
052cf29b  JZ 0x052cf580
052cf2a1  CMP byte ptr [R12 + R13*0x8 + -0x4],0x1
052cf2a7  JZ 0x052cf680
052cf2ad  CMP byte ptr [R12 + R13*0x8 + -0x3],0x1
052cf2b3  JZ 0x052cf780
052cf2b9  CMP byte ptr [R12 + R13*0x8 + -0x2],0x1
052cf2bf  JZ 0x052cf880
052cf2c5  CMP byte ptr [R12 + R13*0x8 + -0x1],0x1
052cf2cb  JZ 0x052cf980
052cf2d1  CMP byte ptr [R12 + R13*0x8],0x1
052cf2d6  JNZ 0x052cf270
052cf2d8  MOV EAX,dword ptr [RSP + 0x58]
052cf2dc  MOV dword ptr [RSP + 0x8],EAX
052cf2e0  MOV EAX,dword ptr [RSP + 0x60]
052cf2e4  MOV dword ptr [RSP + 0xc],EAX
052cf2e8  MOV RAX,qword ptr [RSP + 0x90]
052cf2f0  ADD EAX,R13D
052cf2f3  MOV dword ptr [RSP + 0x10],EAX
052cf2f7  MOV RAX,qword ptr [RSP + 0x68]
052cf2fc  MOV R14,qword ptr [RAX + 0x18]
052cf300  TEST R14,R14
052cf303  JZ 0x052cf225
052cf309  MOV RDI,qword ptr [R14]
052cf30c  MOV RAX,qword ptr [RDI]
052cf30f  MOV RSI,RBP
052cf312  CALL qword ptr [RAX + 0x28]
052cf315  MOV R15,RAX
052cf318  MOV RDI,qword ptr [R14 + 0x8]
052cf31c  MOV RSI,RBP
052cf31f  CALL 0x0b5d6180
052cf324  TEST RAX,RAX
052cf327  JZ 0x052cf40f
052cf32d  MOV dword ptr [RAX + 0x20],0x3
052cf334  MOV RCX,qword ptr [RSP + 0x50]
052cf339  MOV qword ptr [RAX + 0x30],RCX
052cf33d  JMP 0x052cf270
052cf350  MOV EAX,dword ptr [RSP + 0x58]
052cf354  MOV dword ptr [RSP + 0x8],EAX
052cf358  MOV RAX,qword ptr [RSP + 0x70]
052cf35d  MOV dword ptr [RSP + 0xc],EAX
052cf361  MOV RAX,qword ptr [RSP + 0x90]
052cf369  ADD EAX,R13D
052cf36c  MOV dword ptr [RSP + 0x10],EAX
052cf370  MOV RAX,qword ptr [RSP + 0x68]
052cf375  MOV R14,qword ptr [RAX + 0x18]
052cf379  TEST R14,R14
052cf37c  JZ 0x052cf3c3
052cf37e  MOV RDI,qword ptr [R14]
052cf381  MOV RAX,qword ptr [RDI]
052cf384  MOV RSI,RBP
052cf387  CALL qword ptr [RAX + 0x28]
052cf38a  MOV R15,RAX
052cf38d  MOV RDI,qword ptr [R14 + 0x8]
052cf391  MOV RSI,RBP
052cf394  CALL 0x0b5d6180
052cf399  TEST RAX,RAX
052cf39c  JZ 0x052cf43f
052cf3a2  MOV dword ptr [RAX + 0x20],0x3
052cf3a9  MOV RCX,qword ptr [RSP + 0x48]
052cf3ae  MOV qword ptr [RAX + 0x30],RCX
052cf3b2  CMP byte ptr [R12 + R13*0x8 + -0x6],0x1
052cf3b8  JNZ 0x052cf295
052cf3be  JMP 0x052cf480
052cf3c3  XORPS XMM0,XMM0
052cf3c6  MOVAPS xmmword ptr [RSP + 0x30],XMM0
052cf3cb  MOVAPS xmmword ptr [RSP + 0x20],XMM0
052cf3d0  MOV qword ptr [RSP + 0x40],0x0
052cf3d9  MOV byte ptr [RSP + 0x40],0x1
052cf3de  MOV RDI,qword ptr [RSP + 0x18]
052cf3e3  MOV RAX,qword ptr [RDI]
052cf3e6  MOV RSI,RBP
052cf3e9  MOV RDX,qword ptr [RSP + 0x48]
052cf3ee  MOV ECX,0x3
052cf3f3  XOR R8D,R8D
052cf3f6  LEA R9,[RSP + 0x20]
052cf3fb  CALL qword ptr [RAX + 0xf8]
052cf401  CMP byte ptr [R12 + R13*0x8 + -0x6],0x1
052cf407  JNZ 0x052cf295
052cf40d  JMP 0x052cf480
052cf40f  MOV RDI,qword ptr [R14 + 0x8]
052cf413  MOV dword ptr [RSP + 0x20],0x3
052cf41b  MOV qword ptr [RSP + 0x28],R15
052cf420  MOV RAX,qword ptr [RSP + 0x50]
052cf425  MOV qword ptr [RSP + 0x30],RAX
052cf42a  MOV RSI,RBP
052cf42d  MOV RDX,RBP
052cf430  LEA RCX,[RSP + 0x20]
052cf435  CALL 0x0b5d6330
052cf43a  JMP 0x052cf270
052cf43f  MOV RDI,qword ptr [R14 + 0x8]
052cf443  MOV dword ptr [RSP + 0x20],0x3
052cf44b  MOV qword ptr [RSP + 0x28],R15
052cf450  MOV RAX,qword ptr [RSP + 0x48]
052cf455  MOV qword ptr [RSP + 0x30],RAX
052cf45a  MOV RSI,RBP
052cf45d  MOV RDX,RBP
052cf460  LEA RCX,[RSP + 0x20]
052cf465  CALL 0x0b5d6330
052cf46a  CMP byte ptr [R12 + R13*0x8 + -0x6],0x1
052cf470  JNZ 0x052cf295
052cf476  NOP word ptr CS:[RAX + RAX*0x1]
052cf480  MOV EAX,dword ptr [RSP + 0x58]
052cf484  MOV dword ptr [RSP + 0x8],EAX
052cf488  MOV EAX,dword ptr [RSP + 0xa0]
052cf48f  MOV dword ptr [RSP + 0xc],EAX
052cf493  MOV RAX,qword ptr [RSP + 0x90]
052cf49b  ADD EAX,R13D
052cf49e  MOV dword ptr [RSP + 0x10],EAX
052cf4a2  MOV RAX,qword ptr [RSP + 0x68]
052cf4a7  MOV R14,qword ptr [RAX + 0x18]
052cf4ab  TEST R14,R14
052cf4ae  JZ 0x052cf4f1
052cf4b0  MOV RDI,qword ptr [R14]
052cf4b3  MOV RAX,qword ptr [RDI]
052cf4b6  MOV RSI,RBP
052cf4b9  CALL qword ptr [RAX + 0x28]
052cf4bc  MOV R15,RAX
052cf4bf  MOV RDI,qword ptr [R14 + 0x8]
052cf4c3  MOV RSI,RBP
052cf4c6  CALL 0x0b5d6180
052cf4cb  TEST RAX,RAX
052cf4ce  JZ 0x052cf53d
052cf4d0  MOV dword ptr [RAX + 0x20],0x3
052cf4d7  MOV RCX,qword ptr [RSP + 0x48]
052cf4dc  MOV qword ptr [RAX + 0x30],RCX
052cf4e0  CMP byte ptr [R12 + R13*0x8 + -0x5],0x1
052cf4e6  JNZ 0x052cf2a1
052cf4ec  JMP 0x052cf580
052cf4f1  XORPS XMM0,XMM0
052cf4f4  MOVAPS xmmword ptr [RSP + 0x30],XMM0
052cf4f9  MOVAPS xmmword ptr [RSP + 0x20],XMM0
052cf4fe  MOV qword ptr [RSP + 0x40],0x0
052cf507  MOV byte ptr [RSP + 0x40],0x1
052cf50c  MOV RDI,qword ptr [RSP + 0x18]
052cf511  MOV RAX,qword ptr [RDI]
052cf514  MOV RSI,RBP
052cf517  MOV RDX,qword ptr [RSP + 0x48]
052cf51c  MOV ECX,0x3
052cf521  XOR R8D,R8D
052cf524  LEA R9,[RSP + 0x20]
052cf529  CALL qword ptr [RAX + 0xf8]
052cf52f  CMP byte ptr [R12 + R13*0x8 + -0x5],0x1
052cf535  JNZ 0x052cf2a1
052cf53b  JMP 0x052cf580
052cf53d  MOV RDI,qword ptr [R14 + 0x8]
052cf541  MOV dword ptr [RSP + 0x20],0x3
052cf549  MOV qword ptr [RSP + 0x28],R15
052cf54e  MOV RAX,qword ptr [RSP + 0x48]
052cf553  MOV qword ptr [RSP + 0x30],RAX
052cf558  MOV RSI,RBP
052cf55b  MOV RDX,RBP
052cf55e  LEA RCX,[RSP + 0x20]
052cf563  CALL 0x0b5d6330
052cf568  CMP byte ptr [R12 + R13*0x8 + -0x5],0x1
052cf56e  JNZ 0x052cf2a1
052cf574  NOP word ptr CS:[RAX + RAX*0x1]
052cf580  MOV EAX,dword ptr [RSP + 0x58]
052cf584  MOV dword ptr [RSP + 0x8],EAX
052cf588  MOV EAX,dword ptr [RSP + 0x88]
052cf58f  MOV dword ptr [RSP + 0xc],EAX
052cf593  MOV RAX,qword ptr [RSP + 0x90]
052cf59b  ADD EAX,R13D
052cf59e  MOV dword ptr [RSP + 0x10],EAX
052cf5a2  MOV RAX,qword ptr [RSP + 0x68]
052cf5a7  MOV R14,qword ptr [RAX + 0x18]
052cf5ab  TEST R14,R14
052cf5ae  JZ 0x052cf5f1
052cf5b0  MOV RDI,qword ptr [R14]
052cf5b3  MOV RAX,qword ptr [RDI]
052cf5b6  MOV RSI,RBP
052cf5b9  CALL qword ptr [RAX + 0x28]
052cf5bc  MOV R15,RAX
052cf5bf  MOV RDI,qword ptr [R14 + 0x8]
052cf5c3  MOV RSI,RBP
052cf5c6  CALL 0x0b5d6180
052cf5cb  TEST RAX,RAX
052cf5ce  JZ 0x052cf63d
052cf5d0  MOV dword ptr [RAX + 0x20],0x3
052cf5d7  MOV RCX,qword ptr [RSP + 0x48]
052cf5dc  MOV qword ptr [RAX + 0x30],RCX
052cf5e0  CMP byte ptr [R12 + R13*0x8 + -0x4],0x1
052cf5e6  JNZ 0x052cf2ad
052cf5ec  JMP 0x052cf680
052cf5f1  XORPS XMM0,XMM0
052cf5f4  MOVAPS xmmword ptr [RSP + 0x30],XMM0
052cf5f9  MOVAPS xmmword ptr [RSP + 0x20],XMM0
052cf5fe  MOV qword ptr [RSP + 0x40],0x0
052cf607  MOV byte ptr [RSP + 0x40],0x1
052cf60c  MOV RDI,qword ptr [RSP + 0x18]
052cf611  MOV RAX,qword ptr [RDI]
052cf614  MOV RSI,RBP
052cf617  MOV RDX,qword ptr [RSP + 0x48]
052cf61c  MOV ECX,0x3
052cf621  XOR R8D,R8D
052cf624  LEA R9,[RSP + 0x20]
052cf629  CALL qword ptr [RAX + 0xf8]
052cf62f  CMP byte ptr [R12 + R13*0x8 + -0x4],0x1
052cf635  JNZ 0x052cf2ad
052cf63b  JMP 0x052cf680
052cf63d  MOV RDI,qword ptr [R14 + 0x8]
052cf641  MOV dword ptr [RSP + 0x20],0x3
052cf649  MOV qword ptr [RSP + 0x28],R15
052cf64e  MOV RAX,qword ptr [RSP + 0x48]
052cf653  MOV qword ptr [RSP + 0x30],RAX
052cf658  MOV RSI,RBP
052cf65b  MOV RDX,RBP
052cf65e  LEA RCX,[RSP + 0x20]
052cf663  CALL 0x0b5d6330
052cf668  CMP byte ptr [R12 + R13*0x8 + -0x4],0x1
052cf66e  JNZ 0x052cf2ad
052cf674  NOP word ptr CS:[RAX + RAX*0x1]
052cf680  MOV EAX,dword ptr [RSP + 0x58]
052cf684  MOV dword ptr [RSP + 0x8],EAX
052cf688  MOV EAX,dword ptr [RSP + 0x98]
052cf68f  MOV dword ptr [RSP + 0xc],EAX
052cf693  MOV RAX,qword ptr [RSP + 0x90]
052cf69b  ADD EAX,R13D
052cf69e  MOV dword ptr [RSP + 0x10],EAX
052cf6a2  MOV RAX,qword ptr [RSP + 0x68]
052cf6a7  MOV R14,qword ptr [RAX + 0x18]
052cf6ab  TEST R14,R14
052cf6ae  JZ 0x052cf6f1
052cf6b0  MOV RDI,qword ptr [R14]
052cf6b3  MOV RAX,qword ptr [RDI]
052cf6b6  MOV RSI,RBP
052cf6b9  CALL qword ptr [RAX + 0x28]
052cf6bc  MOV R15,RAX
052cf6bf  MOV RDI,qword ptr [R14 + 0x8]
052cf6c3  MOV RSI,RBP
052cf6c6  CALL 0x0b5d6180
052cf6cb  TEST RAX,RAX
052cf6ce  JZ 0x052cf73d
052cf6d0  MOV dword ptr [RAX + 0x20],0x3
052cf6d7  MOV RCX,qword ptr [RSP + 0x48]
052cf6dc  MOV qword ptr [RAX + 0x30],RCX
052cf6e0  CMP byte ptr [R12 + R13*0x8 + -0x3],0x1
052cf6e6  JNZ 0x052cf2b9
052cf6ec  JMP 0x052cf780
052cf6f1  XORPS XMM0,XMM0
052cf6f4  MOVAPS xmmword ptr [RSP + 0x30],XMM0
052cf6f9  MOVAPS xmmword ptr [RSP + 0x20],XMM0
052cf6fe  MOV qword ptr [RSP + 0x40],0x0
052cf707  MOV byte ptr [RSP + 0x40],0x1
052cf70c  MOV RDI,qword ptr [RSP + 0x18]
052cf711  MOV RAX,qword ptr [RDI]
052cf714  MOV RSI,RBP
052cf717  MOV RDX,qword ptr [RSP + 0x48]
052cf71c  MOV ECX,0x3
052cf721  XOR R8D,R8D
052cf724  LEA R9,[RSP + 0x20]
052cf729  CALL qword ptr [RAX + 0xf8]
052cf72f  CMP byte ptr [R12 + R13*0x8 + -0x3],0x1
052cf735  JNZ 0x052cf2b9
052cf73b  JMP 0x052cf780
052cf73d  MOV RDI,qword ptr [R14 + 0x8]
052cf741  MOV dword ptr [RSP + 0x20],0x3
052cf749  MOV qword ptr [RSP + 0x28],R15
052cf74e  MOV RAX,qword ptr [RSP + 0x48]
052cf753  MOV qword ptr [RSP + 0x30],RAX
052cf758  MOV RSI,RBP
052cf75b  MOV RDX,RBP
052cf75e  LEA RCX,[RSP + 0x20]
052cf763  CALL 0x0b5d6330
052cf768  CMP byte ptr [R12 + R13*0x8 + -0x3],0x1
052cf76e  JNZ 0x052cf2b9
052cf774  NOP word ptr CS:[RAX + RAX*0x1]
052cf780  MOV EAX,dword ptr [RSP + 0x58]
052cf784  MOV dword ptr [RSP + 0x8],EAX
052cf788  MOV EAX,dword ptr [RSP + 0xb0]
052cf78f  MOV dword ptr [RSP + 0xc],EAX
052cf793  MOV RAX,qword ptr [RSP + 0x90]
052cf79b  ADD EAX,R13D
052cf79e  MOV dword ptr [RSP + 0x10],EAX
052cf7a2  MOV RAX,qword ptr [RSP + 0x68]
052cf7a7  MOV R14,qword ptr [RAX + 0x18]
052cf7ab  TEST R14,R14
052cf7ae  JZ 0x052cf7f1
052cf7b0  MOV RDI,qword ptr [R14]
052cf7b3  MOV RAX,qword ptr [RDI]
052cf7b6  MOV RSI,RBP
052cf7b9  CALL qword ptr [RAX + 0x28]
052cf7bc  MOV R15,RAX
052cf7bf  MOV RDI,qword ptr [R14 + 0x8]
052cf7c3  MOV RSI,RBP
052cf7c6  CALL 0x0b5d6180
052cf7cb  TEST RAX,RAX
052cf7ce  JZ 0x052cf83d
052cf7d0  MOV dword ptr [RAX + 0x20],0x3
052cf7d7  MOV RCX,qword ptr [RSP + 0x50]
052cf7dc  MOV qword ptr [RAX + 0x30],RCX
052cf7e0  CMP byte ptr [R12 + R13*0x8 + -0x2],0x1
052cf7e6  JNZ 0x052cf2c5
052cf7ec  JMP 0x052cf880
052cf7f1  XORPS XMM0,XMM0
052cf7f4  MOVAPS xmmword ptr [RSP + 0x30],XMM0
052cf7f9  MOVAPS xmmword ptr [RSP + 0x20],XMM0
052cf7fe  MOV qword ptr [RSP + 0x40],0x0
052cf807  MOV byte ptr [RSP + 0x40],0x1
052cf80c  MOV RDI,qword ptr [RSP + 0x18]
052cf811  MOV RAX,qword ptr [RDI]
052cf814  MOV RSI,RBP
052cf817  MOV RDX,qword ptr [RSP + 0x50]
052cf81c  MOV ECX,0x3
052cf821  XOR R8D,R8D
052cf824  LEA R9,[RSP + 0x20]
052cf829  CALL qword ptr [RAX + 0xf8]
052cf82f  CMP byte ptr [R12 + R13*0x8 + -0x2],0x1
052cf835  JNZ 0x052cf2c5
052cf83b  JMP 0x052cf880
052cf83d  MOV RDI,qword ptr [R14 + 0x8]
052cf841  MOV dword ptr [RSP + 0x20],0x3
052cf849  MOV qword ptr [RSP + 0x28],R15
052cf84e  MOV RAX,qword ptr [RSP + 0x50]
052cf853  MOV qword ptr [RSP + 0x30],RAX
052cf858  MOV RSI,RBP
052cf85b  MOV RDX,RBP
052cf85e  LEA RCX,[RSP + 0x20]
052cf863  CALL 0x0b5d6330
052cf868  CMP byte ptr [R12 + R13*0x8 + -0x2],0x1
052cf86e  JNZ 0x052cf2c5
052cf874  NOP word ptr CS:[RAX + RAX*0x1]
052cf880  MOV EAX,dword ptr [RSP + 0x58]
052cf884  MOV dword ptr [RSP + 0x8],EAX
052cf888  MOV EAX,dword ptr [RSP + 0xa8]
052cf88f  MOV dword ptr [RSP + 0xc],EAX
052cf893  MOV RAX,qword ptr [RSP + 0x90]
052cf89b  ADD EAX,R13D
052cf89e  MOV dword ptr [RSP + 0x10],EAX
052cf8a2  MOV RAX,qword ptr [RSP + 0x68]
052cf8a7  MOV R14,qword ptr [RAX + 0x18]
052cf8ab  TEST R14,R14
052cf8ae  JZ 0x052cf8f1
052cf8b0  MOV RDI,qword ptr [R14]
052cf8b3  MOV RAX,qword ptr [RDI]
052cf8b6  MOV RSI,RBP
052cf8b9  CALL qword ptr [RAX + 0x28]
052cf8bc  MOV R15,RAX
052cf8bf  MOV RDI,qword ptr [R14 + 0x8]
052cf8c3  MOV RSI,RBP
052cf8c6  CALL 0x0b5d6180
052cf8cb  TEST RAX,RAX
052cf8ce  JZ 0x052cf93d
052cf8d0  MOV dword ptr [RAX + 0x20],0x3
052cf8d7  MOV RCX,qword ptr [RSP + 0x50]
052cf8dc  MOV qword ptr [RAX + 0x30],RCX
052cf8e0  CMP byte ptr [R12 + R13*0x8 + -0x1],0x1
052cf8e6  JNZ 0x052cf2d1
052cf8ec  JMP 0x052cf980
052cf8f1  XORPS XMM0,XMM0
052cf8f4  MOVAPS xmmword ptr [RSP + 0x30],XMM0
052cf8f9  MOVAPS xmmword ptr [RSP + 0x20],XMM0
052cf8fe  MOV qword ptr [RSP + 0x40],0x0
052cf907  MOV byte ptr [RSP + 0x40],0x1
052cf90c  MOV RDI,qword ptr [RSP + 0x18]
052cf911  MOV RAX,qword ptr [RDI]
052cf914  MOV RSI,RBP
052cf917  MOV RDX,qword ptr [RSP + 0x50]
052cf91c  MOV ECX,0x3
052cf921  XOR R8D,R8D
052cf924  LEA R9,[RSP + 0x20]
052cf929  CALL qword ptr [RAX + 0xf8]
052cf92f  CMP byte ptr [R12 + R13*0x8 + -0x1],0x1
052cf935  JNZ 0x052cf2d1
052cf93b  JMP 0x052cf980
052cf93d  MOV RDI,qword ptr [R14 + 0x8]
052cf941  MOV dword ptr [RSP + 0x20],0x3
052cf949  MOV qword ptr [RSP + 0x28],R15
052cf94e  MOV RAX,qword ptr [RSP + 0x50]
052cf953  MOV qword ptr [RSP + 0x30],RAX
052cf958  MOV RSI,RBP
052cf95b  MOV RDX,RBP
052cf95e  LEA RCX,[RSP + 0x20]
052cf963  CALL 0x0b5d6330
052cf968  CMP byte ptr [R12 + R13*0x8 + -0x1],0x1
052cf96e  JNZ 0x052cf2d1
052cf974  NOP word ptr CS:[RAX + RAX*0x1]
052cf980  MOV EAX,dword ptr [RSP + 0x58]
052cf984  MOV dword ptr [RSP + 0x8],EAX
052cf988  MOV EAX,dword ptr [RSP + 0xc8]
052cf98f  MOV dword ptr [RSP + 0xc],EAX
052cf993  MOV RAX,qword ptr [RSP + 0x90]
052cf99b  ADD EAX,R13D
052cf99e  MOV dword ptr [RSP + 0x10],EAX
052cf9a2  MOV RAX,qword ptr [RSP + 0x68]
052cf9a7  MOV R14,qword ptr [RAX + 0x18]
052cf9ab  TEST R14,R14
052cf9ae  JZ 0x052cf9f0
052cf9b0  MOV RDI,qword ptr [R14]
052cf9b3  MOV RAX,qword ptr [RDI]
052cf9b6  MOV RSI,RBP
052cf9b9  CALL qword ptr [RAX + 0x28]
052cf9bc  MOV R15,RAX
052cf9bf  MOV RDI,qword ptr [R14 + 0x8]
052cf9c3  MOV RSI,RBP
052cf9c6  CALL 0x0b5d6180
052cf9cb  TEST RAX,RAX
052cf9ce  JZ 0x052cfa3e
052cf9d0  MOV dword ptr [RAX + 0x20],0x3
052cf9d7  MOV RCX,qword ptr [RSP + 0x50]
052cf9dc  MOV qword ptr [RAX + 0x30],RCX
052cf9e0  CMP byte ptr [R12 + R13*0x8],0x1
052cf9e5  JNZ 0x052cf270
052cf9eb  JMP 0x052cf2d8
052cf9f0  XORPS XMM0,XMM0
052cf9f3  MOVAPS xmmword ptr [RSP + 0x30],XMM0
052cf9f8  MOVAPS xmmword ptr [RSP + 0x20],XMM0
052cf9fd  MOV qword ptr [RSP + 0x40],0x0
052cfa06  MOV byte ptr [RSP + 0x40],0x1
052cfa0b  MOV RDI,qword ptr [RSP + 0x18]
052cfa10  MOV RAX,qword ptr [RDI]
052cfa13  MOV RSI,RBP
052cfa16  MOV RDX,qword ptr [RSP + 0x50]
052cfa1b  MOV ECX,0x3
052cfa20  XOR R8D,R8D
052cfa23  LEA R9,[RSP + 0x20]
052cfa28  CALL qword ptr [RAX + 0xf8]
052cfa2e  CMP byte ptr [R12 + R13*0x8],0x1
052cfa33  JNZ 0x052cf270
052cfa39  JMP 0x052cf2d8
052cfa3e  MOV RDI,qword ptr [R14 + 0x8]
052cfa42  MOV dword ptr [RSP + 0x20],0x3
052cfa4a  MOV qword ptr [RSP + 0x28],R15
052cfa4f  MOV RAX,qword ptr [RSP + 0x50]
052cfa54  MOV qword ptr [RSP + 0x30],RAX
052cfa59  MOV RSI,RBP
052cfa5c  MOV RDX,RBP
052cfa5f  LEA RCX,[RSP + 0x20]
052cfa64  CALL 0x0b5d6330
052cfa69  CMP byte ptr [R12 + R13*0x8],0x1
052cfa6e  JNZ 0x052cf270
052cfa74  JMP 0x052cf2d8
052cfa79  LEA RDI,[0xf6ff9e0]
052cfa80  LEA RSI,[0xf718af0]
052cfa87  MOV EDX,0x1
052cfa8c  CALL 0x0cc41df0
052cfa91  MOV qword ptr [RSP + 0x60],RAX
052cfa96  MOV RCX,0x300000000
052cfaa0  MOV RAX,qword ptr [RSP + 0x110]
052cfaa8  ADD RCX,RAX
052cfaab  MOV qword ptr [RSP + 0x100],RCX
052cfab3  MOV RCX,0x400000000
052cfabd  ADD RCX,RAX
052cfac0  MOV qword ptr [RSP + 0xf8],RCX
052cfac8  MOV RCX,0x500000000
052cfad2  ADD RCX,RAX
052cfad5  MOV qword ptr [RSP + 0xf0],RCX
052cfadd  MOV RCX,0x600000000
052cfae7  ADD RCX,RAX
052cfaea  MOV qword ptr [RSP + 0xe8],RCX
052cfaf2  MOV RCX,0x700000000
052cfafc  ADD RCX,RAX
052cfaff  MOV qword ptr [RSP + 0xe0],RCX
052cfb07  XOR EAX,EAX
052cfb09  LEA R14,[RSP + 0x8]
052cfb0e  LEA R15,[RSP + 0x20]
052cfb13  JMP 0x052cfb2a
052cfb15  MOV RAX,qword ptr [RSP + 0x108]
052cfb1d  INC RAX
052cfb20  CMP RAX,0x10
052cfb24  JZ 0x052d02a0
052cfb2a  MOV RCX,RAX
052cfb2d  SHL RCX,0x7
052cfb31  MOV qword ptr [RSP + 0x58],RCX
052cfb36  MOV qword ptr [RSP + 0x108],RAX
052cfb3e  MOV RCX,qword ptr [RSP + 0xd0]
052cfb46  ADD RAX,RCX
052cfb49  MOV qword ptr [RSP + 0x88],RAX
052cfb51  MOV EAX,EAX
052cfb53  MOV RCX,RAX
052cfb56  OR RCX,qword ptr [RSP + 0x100]
052cfb5e  MOV qword ptr [RSP + 0xc0],RCX
052cfb66  MOV RCX,RAX
052cfb69  OR RCX,qword ptr [RSP + 0xf8]
052cfb71  MOV qword ptr [RSP + 0x50],RCX
052cfb76  MOV RCX,RAX
052cfb79  OR RCX,qword ptr [RSP + 0xf0]
052cfb81  MOV qword ptr [RSP + 0x48],RCX
052cfb86  MOV RCX,RAX
052cfb89  OR RCX,qword ptr [RSP + 0xe8]
052cfb91  MOV qword ptr [RSP + 0xa0],RCX
052cfb99  OR RAX,qword ptr [RSP + 0xe0]
052cfba1  MOV qword ptr [RSP + 0xd8],RAX
052cfba9  XOR R13D,R13D
052cfbac  JMP 0x052cfc0d
052cfbae  XORPS XMM0,XMM0
052cfbb1  MOVAPS xmmword ptr [RSP + 0x30],XMM0
052cfbb6  MOVAPS xmmword ptr [RSP + 0x20],XMM0
052cfbbb  MOV qword ptr [RSP + 0x40],0x0
052cfbc4  MOV byte ptr [RSP + 0x40],0x1
052cfbc9  MOV RDI,qword ptr [RSP + 0x18]
052cfbce  MOV RAX,qword ptr [RDI]
052cfbd1  LEA RSI,[RSP + 0x7c]
052cfbd6  MOV RDX,qword ptr [RSP + 0x60]
052cfbdb  MOV ECX,0x3
052cfbe0  XOR R8D,R8D
052cfbe3  MOV R9,R15
052cfbe6  CALL qword ptr [RAX + 0xf8]
052cfbec  LEA R14,[RSP + 0x8]
052cfbf1  NOP dword ptr CS:[RAX + RAX*0x1]
052cfc00  INC R13
052cfc03  CMP R13,0x10
052cfc07  JZ 0x052cfb15
052cfc0d  MOV RAX,qword ptr [RSP + 0x58]
052cfc12  LEA R12,[RAX + R13*0x8]
052cfc16  MOV RAX,qword ptr [RSP + 0x90]
052cfc1e  LEA RBP,[RAX + R13*0x1]
052cfc22  CMP byte ptr [RSP + R12*0x1 + 0x12c],0x0
052cfc2b  JZ 0x052cfde0
052cfc31  MOV RAX,qword ptr [RSP + 0xc0]
052cfc39  MOV qword ptr [RSP + 0x8],RAX
052cfc3e  MOV dword ptr [RSP + 0x10],EBP
052cfc42  MOV RDI,qword ptr [RSP + 0x18]
052cfc47  MOV RAX,qword ptr [RDI]
052cfc4a  MOV RSI,R14
052cfc4d  CALL qword ptr [RAX + 0x10]
052cfc50  MOV RCX,qword ptr [0x0f713ce0]
052cfc57  MOV RDX,qword ptr [0x0f713ce8]
052cfc5e  MOV RSI,RDX
052cfc61  SUB RSI,RCX
052cfc64  CMP RSI,-0x8
052cfc68  JZ 0x052d0819
052cfc6e  TEST RCX,RCX
052cfc71  SETNZ SIL
052cfc75  TEST RDX,RDX
052cfc78  SETZ DIL
052cfc7c  OR DIL,SIL
052cfc7f  JZ 0x052d0819
052cfc85  CMP RDX,RCX
052cfc88  JZ 0x052cfcb6
052cfc8a  MOV RAX,qword ptr [RAX + 0x68]
052cfc8e  MOV RAX,qword ptr [RAX + 0xc8]
052cfc95  NOP dword ptr CS:[RAX + RAX*0x1]
052cfca0  MOV RSI,qword ptr [RCX]
052cfca3  CMP RAX,qword ptr [RSI]
052cfca6  JZ 0x052cfcb6
052cfca8  ADD RCX,0x8
052cfcac  CMP RCX,RDX
052cfcaf  JNZ 0x052cfca0
052cfcb1  JMP 0x052cfde0
052cfcb6  CMP RCX,RDX
052cfcb9  JZ 0x052cfde0
052cfcbf  MOV RAX,qword ptr [RSP + 0x50]
052cfcc4  MOV qword ptr [RSP + 0x20],RAX
052cfcc9  MOV dword ptr [RSP + 0x28],EBP
052cfccd  MOV RDI,qword ptr [RSP + 0x18]
052cfcd2  MOV RSI,R15
052cfcd5  CALL 0x0c9d58e0
052cfcda  TEST AL,AL
052cfcdc  JZ 0x052cfde0
052cfce2  MOV RAX,qword ptr [RSP + 0x88]
052cfcea  MOV dword ptr [RSP + 0x7c],EAX
052cfcee  MOV EAX,dword ptr [RSP + 0x98]
052cfcf5  MOV dword ptr [RSP + 0x80],EAX
052cfcfc  MOV dword ptr [RSP + 0x84],EBP
052cfd03  MOV RAX,qword ptr [RSP + 0x68]
052cfd08  MOV R14,qword ptr [RAX + 0x18]
052cfd0c  TEST R14,R14
052cfd0f  JZ 0x052cfd5a
052cfd11  MOV RDI,qword ptr [R14]
052cfd14  MOV RAX,qword ptr [RDI]
052cfd17  LEA R15,[RSP + 0x7c]
052cfd1c  MOV RSI,R15
052cfd1f  CALL qword ptr [RAX + 0x28]
052cfd22  MOV qword ptr [RSP + 0xb8],RAX
052cfd2a  MOV RDI,qword ptr [R14 + 0x8]
052cfd2e  MOV RSI,R15
052cfd31  CALL 0x0b5d6180
052cfd36  TEST RAX,RAX
052cfd39  JZ 0x052cfd9a
052cfd3b  MOV dword ptr [RAX + 0x20],0x3
052cfd42  MOV RCX,qword ptr [RSP + 0x60]
052cfd47  MOV qword ptr [RAX + 0x30],RCX
052cfd4b  LEA R14,[RSP + 0x8]
052cfd50  LEA R15,[RSP + 0x20]
052cfd55  JMP 0x052cfde0
052cfd5a  XORPS XMM0,XMM0
052cfd5d  MOVAPS xmmword ptr [RSP + 0x30],XMM0
052cfd62  MOVAPS xmmword ptr [RSP + 0x20],XMM0
052cfd67  MOV qword ptr [RSP + 0x40],0x0
052cfd70  MOV byte ptr [RSP + 0x40],0x1
052cfd75  MOV RDI,qword ptr [RSP + 0x18]
052cfd7a  MOV RAX,qword ptr [RDI]
052cfd7d  LEA RSI,[RSP + 0x7c]
052cfd82  MOV RDX,qword ptr [RSP + 0x60]
052cfd87  MOV ECX,0x3
052cfd8c  XOR R8D,R8D
052cfd8f  MOV R9,R15
052cfd92  CALL qword ptr [RAX + 0xf8]
052cfd98  JMP 0x052cfdd0
052cfd9a  MOV RDI,qword ptr [R14 + 0x8]
052cfd9e  MOV dword ptr [RSP + 0x20],0x3
052cfda6  MOV RAX,qword ptr [RSP + 0xb8]
052cfdae  MOV qword ptr [RSP + 0x28],RAX
052cfdb3  MOV RAX,qword ptr [RSP + 0x60]
052cfdb8  MOV qword ptr [RSP + 0x30],RAX
052cfdbd  MOV RSI,R15
052cfdc0  MOV RDX,R15
052cfdc3  LEA R15,[RSP + 0x20]
052cfdc8  MOV RCX,R15
052cfdcb  CALL 0x0b5d6330
052cfdd0  LEA R14,[RSP + 0x8]
052cfdd5  NOP dword ptr CS:[RAX + RAX*0x1]
052cfde0  CMP byte ptr [RSP + R12*0x1 + 0x12d],0x1
052cfde9  JNZ 0x052cff90
052cfdef  MOV RAX,qword ptr [RSP + 0x50]
052cfdf4  MOV qword ptr [RSP + 0x8],RAX
052cfdf9  MOV dword ptr [RSP + 0x10],EBP
052cfdfd  MOV RDI,qword ptr [RSP + 0x18]
052cfe02  MOV RAX,qword ptr [RDI]
052cfe05  MOV RSI,R14
052cfe08  CALL qword ptr [RAX + 0x10]
052cfe0b  MOV RCX,qword ptr [0x0f713ce0]
052cfe12  MOV RDX,qword ptr [0x0f713ce8]
052cfe19  MOV RSI,RDX
052cfe1c  SUB RSI,RCX
052cfe1f  CMP RSI,-0x8
052cfe23  JZ 0x052d0819
052cfe29  TEST RCX,RCX
052cfe2c  SETZ SIL
052cfe30  TEST RDX,RDX
052cfe33  SETNZ DIL
052cfe37  TEST SIL,DIL
052cfe3a  JNZ 0x052d0819
052cfe40  CMP RDX,RCX
052cfe43  JZ 0x052cfe66
052cfe45  MOV RAX,qword ptr [RAX + 0x68]
052cfe49  MOV RAX,qword ptr [RAX + 0xc8]
052cfe50  MOV RSI,qword ptr [RCX]
052cfe53  CMP RAX,qword ptr [RSI]
052cfe56  JZ 0x052cfe66
052cfe58  ADD RCX,0x8
052cfe5c  CMP RCX,RDX
052cfe5f  JNZ 0x052cfe50
052cfe61  JMP 0x052cff90
052cfe66  CMP RCX,RDX
052cfe69  JZ 0x052cff90
052cfe6f  MOV RAX,qword ptr [RSP + 0x48]
052cfe74  MOV qword ptr [RSP + 0x20],RAX
052cfe79  MOV dword ptr [RSP + 0x28],EBP
052cfe7d  MOV RDI,qword ptr [RSP + 0x18]
052cfe82  MOV RSI,R15
052cfe85  CALL 0x0c9d58e0
052cfe8a  TEST AL,AL
052cfe8c  JZ 0x052cff90
052cfe92  MOV RAX,qword ptr [RSP + 0x88]
052cfe9a  MOV dword ptr [RSP + 0x7c],EAX
052cfe9e  MOV EAX,dword ptr [RSP + 0xb0]
052cfea5  MOV dword ptr [RSP + 0x80],EAX
052cfeac  MOV dword ptr [RSP + 0x84],EBP
052cfeb3  MOV RAX,qword ptr [RSP + 0x68]
052cfeb8  MOV R14,qword ptr [RAX + 0x18]
052cfebc  TEST R14,R14
052cfebf  JZ 0x052cff0a
052cfec1  MOV RDI,qword ptr [R14]
052cfec4  MOV RAX,qword ptr [RDI]
052cfec7  LEA R15,[RSP + 0x7c]
052cfecc  MOV RSI,R15
052cfecf  CALL qword ptr [RAX + 0x28]
052cfed2  MOV qword ptr [RSP + 0xb8],RAX
052cfeda  MOV RDI,qword ptr [R14 + 0x8]
052cfede  MOV RSI,R15
052cfee1  CALL 0x0b5d6180
052cfee6  TEST RAX,RAX
052cfee9  JZ 0x052cff4a
052cfeeb  MOV dword ptr [RAX + 0x20],0x3
052cfef2  MOV RCX,qword ptr [RSP + 0x60]
052cfef7  MOV qword ptr [RAX + 0x30],RCX
052cfefb  LEA R14,[RSP + 0x8]
052cff00  LEA R15,[RSP + 0x20]
052cff05  JMP 0x052cff90
052cff0a  XORPS XMM0,XMM0
052cff0d  MOVAPS xmmword ptr [RSP + 0x30],XMM0
052cff12  MOVAPS xmmword ptr [RSP + 0x20],XMM0
052cff17  MOV qword ptr [RSP + 0x40],0x0
052cff20  MOV byte ptr [RSP + 0x40],0x1
052cff25  MOV RDI,qword ptr [RSP + 0x18]
052cff2a  MOV RAX,qword ptr [RDI]
052cff2d  LEA RSI,[RSP + 0x7c]
052cff32  MOV RDX,qword ptr [RSP + 0x60]
052cff37  MOV ECX,0x3
052cff3c  XOR R8D,R8D
052cff3f  MOV R9,R15
052cff42  CALL qword ptr [RAX + 0xf8]
052cff48  JMP 0x052cff80
052cff4a  MOV RDI,qword ptr [R14 + 0x8]
052cff4e  MOV dword ptr [RSP + 0x20],0x3
052cff56  MOV RAX,qword ptr [RSP + 0xb8]
052cff5e  MOV qword ptr [RSP + 0x28],RAX
052cff63  MOV RAX,qword ptr [RSP + 0x60]
052cff68  MOV qword ptr [RSP + 0x30],RAX
052cff6d  MOV RSI,R15
052cff70  MOV RDX,R15
052cff73  LEA R15,[RSP + 0x20]
052cff78  MOV RCX,R15
052cff7b  CALL 0x0b5d6330
052cff80  LEA R14,[RSP + 0x8]
052cff85  NOP dword ptr CS:[RAX + RAX*0x1]
052cff90  CMP byte ptr [RSP + R12*0x1 + 0x12e],0x1
052cff99  JNZ 0x052d0140
052cff9f  MOV RAX,qword ptr [RSP + 0x48]
052cffa4  MOV qword ptr [RSP + 0x8],RAX
052cffa9  MOV dword ptr [RSP + 0x10],EBP
052cffad  MOV RDI,qword ptr [RSP + 0x18]
052cffb2  MOV RAX,qword ptr [RDI]
052cffb5  MOV RSI,R14
052cffb8  CALL qword ptr [RAX + 0x10]
052cffbb  MOV RCX,qword ptr [0x0f713ce0]
052cffc2  MOV RDX,qword ptr [0x0f713ce8]
052cffc9  MOV RSI,RDX
052cffcc  SUB RSI,RCX
052cffcf  CMP RSI,-0x8
052cffd3  JZ 0x052d0819
052cffd9  TEST RCX,RCX
052cffdc  SETZ SIL
052cffe0  TEST RDX,RDX
052cffe3  SETNZ DIL
052cffe7  TEST SIL,DIL
052cffea  JNZ 0x052d0819
052cfff0  CMP RDX,RCX
052cfff3  JZ 0x052d0016
052cfff5  MOV RAX,qword ptr [RAX + 0x68]
052cfff9  MOV RAX,qword ptr [RAX + 0xc8]
052d0000  MOV RSI,qword ptr [RCX]
052d0003  CMP RAX,qword ptr [RSI]
052d0006  JZ 0x052d0016
052d0008  ADD RCX,0x8
052d000c  CMP RCX,RDX
052d000f  JNZ 0x052d0000
052d0011  JMP 0x052d0140
052d0016  CMP RCX,RDX
052d0019  JZ 0x052d0140
052d001f  MOV RAX,qword ptr [RSP + 0xa0]
052d0027  MOV qword ptr [RSP + 0x20],RAX
052d002c  MOV dword ptr [RSP + 0x28],EBP
052d0030  MOV RDI,qword ptr [RSP + 0x18]
052d0035  MOV RSI,R15
052d0038  CALL 0x0c9d58e0
052d003d  TEST AL,AL
052d003f  JZ 0x052d0140
052d0045  MOV RAX,qword ptr [RSP + 0x88]
052d004d  MOV dword ptr [RSP + 0x7c],EAX
052d0051  MOV EAX,dword ptr [RSP + 0xa8]
052d0058  MOV dword ptr [RSP + 0x80],EAX
052d005f  MOV dword ptr [RSP + 0x84],EBP
052d0066  MOV RAX,qword ptr [RSP + 0x68]
052d006b  MOV R14,qword ptr [RAX + 0x18]
052d006f  TEST R14,R14
052d0072  JZ 0x052d00bd
052d0074  MOV RDI,qword ptr [R14]
052d0077  MOV RAX,qword ptr [RDI]
052d007a  LEA R15,[RSP + 0x7c]
052d007f  MOV RSI,R15
052d0082  CALL qword ptr [RAX + 0x28]
052d0085  MOV qword ptr [RSP + 0xb8],RAX
052d008d  MOV RDI,qword ptr [R14 + 0x8]
052d0091  MOV RSI,R15
052d0094  CALL 0x0b5d6180
052d0099  TEST RAX,RAX
052d009c  JZ 0x052d00fd
052d009e  MOV dword ptr [RAX + 0x20],0x3
052d00a5  MOV RCX,qword ptr [RSP + 0x60]
052d00aa  MOV qword ptr [RAX + 0x30],RCX
052d00ae  LEA R14,[RSP + 0x8]
052d00b3  LEA R15,[RSP + 0x20]
052d00b8  JMP 0x052d0140
052d00bd  XORPS XMM0,XMM0
052d00c0  MOVAPS xmmword ptr [RSP + 0x30],XMM0
052d00c5  MOVAPS xmmword ptr [RSP + 0x20],XMM0
052d00ca  MOV qword ptr [RSP + 0x40],0x0
052d00d3  MOV byte ptr [RSP + 0x40],0x1
052d00d8  MOV RDI,qword ptr [RSP + 0x18]
052d00dd  MOV RAX,qword ptr [RDI]
052d00e0  LEA RSI,[RSP + 0x7c]
052d00e5  MOV RDX,qword ptr [RSP + 0x60]
052d00ea  MOV ECX,0x3
052d00ef  XOR R8D,R8D
052d00f2  MOV R9,R15
052d00f5  CALL qword ptr [RAX + 0xf8]
052d00fb  JMP 0x052d0133
052d00fd  MOV RDI,qword ptr [R14 + 0x8]
052d0101  MOV dword ptr [RSP + 0x20],0x3
052d0109  MOV RAX,qword ptr [RSP + 0xb8]
052d0111  MOV qword ptr [RSP + 0x28],RAX
052d0116  MOV RAX,qword ptr [RSP + 0x60]
052d011b  MOV qword ptr [RSP + 0x30],RAX
052d0120  MOV RSI,R15
052d0123  MOV RDX,R15
052d0126  LEA R15,[RSP + 0x20]
052d012b  MOV RCX,R15
052d012e  CALL 0x0b5d6330
052d0133  LEA R14,[RSP + 0x8]
052d0138  NOP dword ptr [RAX + RAX*0x1]
052d0140  CMP byte ptr [RSP + R12*0x1 + 0x12f],0x1
052d0149  JNZ 0x052cfc00
052d014f  MOV RAX,qword ptr [RSP + 0xa0]
052d0157  MOV qword ptr [RSP + 0x8],RAX
052d015c  MOV dword ptr [RSP + 0x10],EBP
052d0160  MOV RDI,qword ptr [RSP + 0x18]
052d0165  MOV RAX,qword ptr [RDI]
052d0168  MOV RSI,R14
052d016b  CALL qword ptr [RAX + 0x10]
052d016e  MOV RCX,qword ptr [0x0f713ce0]
052d0175  MOV RDX,qword ptr [0x0f713ce8]
052d017c  MOV RSI,RDX
052d017f  SUB RSI,RCX
052d0182  CMP RSI,-0x8
052d0186  JZ 0x052d0819
052d018c  TEST RCX,RCX
052d018f  SETZ SIL
052d0193  TEST RDX,RDX
052d0196  SETNZ DIL
052d019a  TEST SIL,DIL
052d019d  JNZ 0x052d0819
052d01a3  CMP RDX,RCX
052d01a6  JZ 0x052d01d6
052d01a8  MOV RAX,qword ptr [RAX + 0x68]
052d01ac  MOV RAX,qword ptr [RAX + 0xc8]
052d01b3  NOP dword ptr CS:[RAX + RAX*0x1]
052d01c0  MOV RSI,qword ptr [RCX]
052d01c3  CMP RAX,qword ptr [RSI]
052d01c6  JZ 0x052d01d6
052d01c8  ADD RCX,0x8
052d01cc  CMP RCX,RDX
052d01cf  JNZ 0x052d01c0
052d01d1  JMP 0x052cfc00
052d01d6  CMP RCX,RDX
052d01d9  JZ 0x052cfc00
052d01df  MOV RAX,qword ptr [RSP + 0xd8]
052d01e7  MOV qword ptr [RSP + 0x20],RAX
052d01ec  MOV dword ptr [RSP + 0x28],EBP
052d01f0  MOV RDI,qword ptr [RSP + 0x18]
052d01f5  MOV RSI,R15
052d01f8  CALL 0x0c9d58e0
052d01fd  TEST AL,AL
052d01ff  JZ 0x052cfc00
052d0205  MOV RAX,qword ptr [RSP + 0x88]
052d020d  MOV dword ptr [RSP + 0x7c],EAX
052d0211  MOV EAX,dword ptr [RSP + 0xc8]
052d0218  MOV dword ptr [RSP + 0x80],EAX
052d021f  MOV dword ptr [RSP + 0x84],EBP
052d0226  MOV RAX,qword ptr [RSP + 0x68]
052d022b  MOV R14,qword ptr [RAX + 0x18]
052d022f  TEST R14,R14
052d0232  JZ 0x052cfbae
052d0238  MOV RDI,qword ptr [R14]
052d023b  MOV RAX,qword ptr [RDI]
052d023e  LEA RBP,[RSP + 0x7c]
052d0243  MOV RSI,RBP
052d0246  CALL qword ptr [RAX + 0x28]
052d0249  MOV R12,RAX
052d024c  MOV RDI,qword ptr [R14 + 0x8]
052d0250  MOV RSI,RBP
052d0253  CALL 0x0b5d6180
052d0258  TEST RAX,RAX
052d025b  JZ 0x052d0272
052d025d  MOV dword ptr [RAX + 0x20],0x3
052d0264  MOV RCX,qword ptr [RSP + 0x60]
052d0269  MOV qword ptr [RAX + 0x30],RCX
052d026d  JMP 0x052cfbec
052d0272  MOV RDI,qword ptr [R14 + 0x8]
052d0276  MOV dword ptr [RSP + 0x20],0x3
052d027e  MOV qword ptr [RSP + 0x28],R12
052d0283  MOV RAX,qword ptr [RSP + 0x60]
052d0288  MOV qword ptr [RSP + 0x30],RAX
052d028d  MOV RSI,RBP
052d0290  MOV RDX,RBP
052d0293  MOV RCX,R15
052d0296  CALL 0x0b5d6330
052d029b  JMP 0x052cfbec
052d02a0  MOV RAX,qword ptr [RSP + 0x68]
052d02a5  LEA RSI,[RAX + 0x48]
052d02a9  LEA RDI,[0xf6ff9e0]
052d02b0  MOV EDX,0x1
052d02b5  CALL 0x0cc41df0
052d02ba  MOV EDI,0xc8
052d02bf  MOV qword ptr [RSP + 0xd8],RAX
052d02c7  ADD RDI,qword ptr [RAX + 0x68]
052d02cb  LEA RSI,[0xf6eaec0]
052d02d2  CALL 0x0ee24c30
052d02d7  MOV BPL,0x1
052d02da  TEST AL,AL
052d02dc  JZ 0x052cf1dd
052d02e2  MOV RCX,qword ptr [RSP + 0x70]
052d02e7  SHL RCX,0x20
052d02eb  MOV EAX,0xfffffff8
052d02f0  ADD RAX,RCX
052d02f3  ADD RAX,0x8
052d02f7  MOV qword ptr [RSP + 0x120],RAX
052d02ff  MOV ESI,0x1fffffff
052d0304  MOV EDX,0x1ffffff0
052d0309  XOR EDI,EDI
052d030b  LEA R14,[RSP + 0x20]
052d0310  MOV RCX,qword ptr [RSP + 0xd0]
052d0318  MOV R8D,ECX
052d031b  XOR R15D,R15D
052d031e  LEA RAX,[RSP + 0x128]
052d0326  JMP 0x052d0375
052d0328  INC R15
052d032b  MOV R8D,dword ptr [RSP + 0x11c]
052d0333  INC R8D
052d0336  MOV ESI,dword ptr [RSP + 0xf0]
052d033d  ADD ESI,0x10
052d0340  MOV RAX,qword ptr [RSP + 0xf8]
052d0348  SUB RAX,-0x80
052d034c  MOV RDI,qword ptr [RSP + 0xe0]
052d0354  SUB RDI,-0x80
052d0358  MOV RDX,qword ptr [RSP + 0xe8]
052d0360  ADD EDX,0x10
052d0363  CMP R15,0x10
052d0367  MOV RCX,qword ptr [RSP + 0xd0]
052d036f  JZ 0x052cf1dd
052d0375  MOV dword ptr [RSP + 0x11c],R8D
052d037d  MOV R8D,R8D
052d0380  ADD R8,qword ptr [RSP + 0x120]
052d0388  MOV qword ptr [RSP + 0xc0],R8
052d0390  MOV qword ptr [RSP + 0xe8],RDX
052d0398  LEA R8D,[RDX*0x8]
052d03a0  LEA RDX,[RSP + 0x129]
052d03a8  ADD RDX,R8
052d03ab  MOV qword ptr [RSP + 0xb0],RDX
052d03b3  INC R8
052d03b6  MOV qword ptr [RSP + 0x98],R8
052d03be  MOV RDX,R15
052d03c1  SHL RDX,0x7
052d03c5  MOV qword ptr [RSP + 0x60],RDX
052d03ca  MOV RDX,R15
052d03cd  SHL RDX,0x4
052d03d1  LEA R8,[RDX + 0x10]
052d03d5  MOV qword ptr [RSP + 0x100],R8
052d03dd  ADD ECX,R15D
052d03e0  ADD RDX,0x1ffffff0
052d03e7  MOV qword ptr [RSP + 0x108],RDX
052d03ef  OR RCX,qword ptr [RSP + 0x110]
052d03f7  MOV qword ptr [RSP + 0xb8],RCX
052d03ff  MOV qword ptr [RSP + 0xe0],RDI
052d0407  MOV qword ptr [RSP + 0x70],RDI
052d040c  MOV qword ptr [RSP + 0xf8],RAX
052d0414  MOV RDX,RAX
052d0417  MOV dword ptr [RSP + 0xf0],ESI
052d041e  MOV EAX,ESI
052d0420  MOV qword ptr [RSP + 0x88],RAX
052d0428  XOR ESI,ESI
052d042a  MOV qword ptr [RSP + 0xa8],R15
052d0432  JMP 0x052d0474
052d0434  MOV RSI,qword ptr [RSP + 0x48]
052d0439  INC RSI
052d043c  MOV RAX,qword ptr [RSP + 0x88]
052d0444  INC EAX
052d0446  MOV qword ptr [RSP + 0x88],RAX
052d044e  ADD RDX,0x8
052d0452  ADD qword ptr [RSP + 0x70],0x8
052d0458  ADD qword ptr [RSP + 0xb0],0x8
052d0461  ADD qword ptr [RSP + 0x98],0x8
052d046a  CMP RSI,0x10
052d046e  JZ 0x052d0328
052d0474  MOV RAX,qword ptr [RSP + 0x60]
052d0479  LEA RAX,[RAX + RSI*0x8]
052d047d  MOV RCX,qword ptr [RSP + 0x90]
052d0485  ADD RCX,RSI
052d0488  MOV qword ptr [RSP + 0x50],RCX
052d048d  CMP byte ptr [RSP + RAX*0x1 + 0x128],0x0
052d0495  MOV qword ptr [RSP + 0x58],RDX
052d049a  MOV qword ptr [RSP + 0x48],RSI
052d049f  JNZ 0x052d05fa
052d04a5  CMP R15,0xf
052d04a9  JZ 0x052d04db
052d04ab  MOV RCX,qword ptr [RSP + 0x100]
052d04b3  ADD RCX,RSI
052d04b6  CMP RCX,0xff
052d04bd  JA 0x052d0819
052d04c3  CMP byte ptr [RSP + RCX*0x8 + 0x128],0x0
052d04cb  MOV RSI,qword ptr [RSP + 0x48]
052d04d0  JNZ 0x052d0557
052d04d6  TEST R15,R15
052d04d9  JZ 0x052d0503
052d04db  MOV RCX,qword ptr [RSP + 0x108]
052d04e3  ADD ECX,ESI
052d04e5  SHL ECX,0x3
052d04e8  CMP ECX,0x7ff
052d04ee  JA 0x052d0819
052d04f4  CMP byte ptr [RSP + RCX*0x1 + 0x128],0x0
052d04fc  MOV RSI,qword ptr [RSP + 0x48]
052d0501  JNZ 0x052d0557
052d0503  CMP RSI,0xf
052d0507  JZ 0x052d0529
052d0509  CMP RAX,0x7f7
052d050f  JA 0x052d0819
052d0515  CMP byte ptr [RSP + RAX*0x1 + 0x130],0x0
052d051d  MOV RCX,qword ptr [RSP + 0x48]
052d0522  JNZ 0x052d0557
052d0524  TEST RCX,RCX
052d0527  JZ 0x052d0549
052d0529  MOV ECX,0xfffffff8
052d052e  ADD ECX,EAX
052d0530  AND ECX,0xfffffff8
052d0533  CMP ECX,0x7ff
052d0539  JA 0x052d0819
052d053f  CMP byte ptr [RSP + RCX*0x1 + 0x128],0x0
052d0547  JNZ 0x052d0557
052d0549  CMP byte ptr [RSP + RAX*0x1 + 0x129],0x1
052d0551  JNZ 0x052d05fa
052d0557  MOV R12,qword ptr [RSP + 0x18]
052d055c  MOV RAX,qword ptr [R12]
052d0560  MOV RAX,qword ptr [RAX + 0x60]
052d0564  MOV RCX,qword ptr [RSP + 0xb8]
052d056c  MOV qword ptr [RSP + 0x20],RCX
052d0571  MOV RCX,qword ptr [RSP + 0x50]
052d0576  MOV dword ptr [RSP + 0x28],ECX
052d057a  MOV RDI,R12
052d057d  MOV RSI,R14
052d0580  CALL RAX
052d0582  CMP byte ptr [RAX + 0x5],0x1
052d0586  JNZ 0x052d05f5
052d0588  MOV EAX,dword ptr [RSP + 0x28]
052d058c  MOV dword ptr [RSP + 0x10],EAX
052d0590  MOV RAX,qword ptr [RSP + 0x20]
052d0595  MOV qword ptr [RSP + 0x8],RAX
052d059a  MOV RAX,qword ptr [R12]
052d059e  MOV RDI,R12
052d05a1  MOV RSI,R14
052d05a4  CALL qword ptr [RAX + 0x10]
052d05a7  MOV RDI,qword ptr [RAX + 0x68]
052d05ab  MOV RAX,qword ptr [RDI]
052d05ae  MOV RSI,R12
052d05b1  MOV RDX,R14
052d05b4  LEA RCX,[RSP + 0x8]
052d05b9  CALL qword ptr [RAX + 0x258]
052d05bf  MOV EAX,dword ptr [RSP + 0x8]
052d05c3  CMP EAX,dword ptr [RSP + 0x20]
052d05c7  JNZ 0x052d05f5
052d05c9  MOV EAX,dword ptr [RSP + 0xc]
052d05cd  CMP EAX,dword ptr [RSP + 0x24]
052d05d1  JNZ 0x052d05f5
052d05d3  MOV EAX,dword ptr [RSP + 0x10]
052d05d7  CMP EAX,dword ptr [RSP + 0x28]
052d05db  JNZ 0x052d05f5
052d05dd  MOV RDI,qword ptr [RSP + 0x68]
052d05e2  MOV RSI,R12
052d05e5  MOV RDX,R14
052d05e8  MOV RCX,qword ptr [RSP + 0xd8]
052d05f0  CALL 0x0d3df990
052d05f5  MOV RDX,qword ptr [RSP + 0x58]
052d05fa  MOV RAX,qword ptr [RSP + 0x88]
052d0602  LEA ECX,[RAX*0x8]
052d0609  LEA RAX,[RSP + 0x129]
052d0611  ADD RAX,RCX
052d0614  MOV qword ptr [RSP + 0xa0],RAX
052d061c  INC RCX
052d061f  MOV qword ptr [RSP + 0xc8],RCX
052d0627  MOV R12,qword ptr [RSP + 0xc0]
052d062f  XOR R13D,R13D
052d0632  JMP 0x052d0657
052d0634  MOV R15,qword ptr [RSP + 0xa8]
052d063c  MOV RDX,qword ptr [RSP + 0x58]
052d0641  MOV EAX,0xfffffff8
052d0646  ADD R12,RAX
052d0649  ADD R12,0x8
052d064d  CMP R13,0x7
052d0651  JZ 0x052d0434
052d0657  MOV RAX,R13
052d065a  INC R13
052d065d  CMP byte ptr [RDX + RAX*0x1 + 0x1],0x0
052d0662  JNZ 0x052d0641
052d0664  CMP R15,0xf
052d0668  JZ 0x052d0699
052d066a  MOV RCX,qword ptr [RSP + 0x70]
052d066f  ADD RCX,RAX
052d0672  ADD RCX,0x81
052d0679  CMP RCX,0x800
052d0680  JNC 0x052d0819
052d0686  CMP byte ptr [RDX + RAX*0x1 + 0x81],0x0
052d068e  JNZ 0x052d0748
052d0694  TEST R15,R15
052d0697  JZ 0x052d06c3
052d0699  MOV RCX,qword ptr [RSP + 0x98]
052d06a1  ADD RCX,RAX
052d06a4  CMP RCX,0x800
052d06ab  JNC 0x052d0819
052d06b1  MOV RCX,qword ptr [RSP + 0xb0]
052d06b9  CMP byte ptr [RCX + RAX*0x1],0x0
052d06bd  JNZ 0x052d0748
052d06c3  CMP qword ptr [RSP + 0x48],0xf
052d06c9  JZ 0x052d06f3
052d06cb  MOV RCX,qword ptr [RSP + 0x70]
052d06d0  ADD RCX,RAX
052d06d3  ADD RCX,0x9
052d06d7  CMP RCX,0x800
052d06de  JNC 0x052d0819
052d06e4  CMP byte ptr [RDX + RAX*0x1 + 0x9],0x0
052d06e9  JNZ 0x052d0748
052d06eb  CMP qword ptr [RSP + 0x48],0x0
052d06f1  JZ 0x052d0719
052d06f3  MOV RCX,qword ptr [RSP + 0xc8]
052d06fb  ADD RCX,RAX
052d06fe  CMP RCX,0x800
052d0705  JNC 0x052d0819
052d070b  MOV RCX,qword ptr [RSP + 0xa0]
052d0713  CMP byte ptr [RCX + RAX*0x1],0x0
052d0717  JNZ 0x052d0748
052d0719  CMP RAX,0x6
052d071d  JZ 0x052d073e
052d071f  MOV RCX,qword ptr [RSP + 0x70]
052d0724  ADD RCX,RAX
052d0727  ADD RCX,-0x7fe
052d072e  TEST RCX,RCX
052d0731  JZ 0x052d0819
052d0737  CMP byte ptr [RDX + RAX*0x1 + 0x2],0x0
052d073c  JNZ 0x052d0748
052d073e  CMP byte ptr [RDX + RAX*0x1],0x1
052d0742  JNZ 0x052d0641
052d0748  CMP R13,0x4
052d074c  JC 0x052d0769
052d074e  MOV RAX,qword ptr [RBX]
052d0751  MOV RDI,RBX
052d0754  MOV ESI,0x2
052d0759  CALL qword ptr [RAX + 0x18]
052d075c  MOV RDX,qword ptr [RSP + 0x58]
052d0761  TEST EAX,EAX
052d0763  JZ 0x052d0641
052d0769  MOV qword ptr [RSP + 0x20],R12
052d076e  MOV RAX,qword ptr [RSP + 0x50]
052d0773  MOV dword ptr [RSP + 0x28],EAX
052d0777  MOV RDI,qword ptr [RSP + 0x18]
052d077c  MOV RAX,qword ptr [RDI]
052d077f  MOV RSI,R14
052d0782  CALL qword ptr [RAX + 0x60]
052d0785  CMP byte ptr [RAX + 0x5],0x1
052d0789  JNZ 0x052d063c
052d078f  MOV EAX,dword ptr [RSP + 0x28]
052d0793  MOV dword ptr [RSP + 0x10],EAX
052d0797  MOV RAX,qword ptr [RSP + 0x20]
052d079c  MOV qword ptr [RSP + 0x8],RAX
052d07a1  MOV R15,R14
052d07a4  MOV R14,qword ptr [RSP + 0x18]
052d07a9  MOV RAX,qword ptr [R14]
052d07ac  MOV RDI,R14
052d07af  MOV RSI,R15
052d07b2  CALL qword ptr [RAX + 0x10]
052d07b5  MOV RDI,qword ptr [RAX + 0x68]
052d07b9  MOV RAX,qword ptr [RDI]
052d07bc  MOV RSI,R14
052d07bf  MOV R14,R15
052d07c2  MOV RDX,R15
052d07c5  LEA RCX,[RSP + 0x8]
052d07ca  CALL qword ptr [RAX + 0x258]
052d07d0  MOV EAX,dword ptr [RSP + 0x8]
052d07d4  CMP EAX,dword ptr [RSP + 0x20]
052d07d8  JNZ 0x052d0634
052d07de  MOV EAX,dword ptr [RSP + 0xc]
052d07e2  CMP EAX,dword ptr [RSP + 0x24]
052d07e6  JNZ 0x052d0634
052d07ec  MOV EAX,dword ptr [RSP + 0x10]
052d07f0  CMP EAX,dword ptr [RSP + 0x28]
052d07f4  JNZ 0x052d0634
052d07fa  MOV RDI,qword ptr [RSP + 0x68]
052d07ff  MOV RSI,qword ptr [RSP + 0x18]
052d0804  MOV RDX,R14
052d0807  MOV RCX,qword ptr [RSP + 0xd8]
052d080f  CALL 0x0d3df990
052d0814  JMP 0x052d0634
052d0819  CALL 0x04890760
052d081e  INT3
```

## `052d8680` — depth 1 from OverworldGenerator__structurePostProcessChunk (root OverworldGenerator__structurePostProcessChunk)

- Ghidra name: `FUN_052d8680`
- Body: `[[052d8680, 052d8772] [052d8780, 052d87b2] [052d87c0, 052d9164] [052d9170, 052d92ab] [052d92b0, 052d92f5] [052d9300, 052d9527]]`

### Pseudocode

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_052d8680(long param_1,long *param_2,int *param_3,long *param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  char cVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined *puVar18;
  int iVar19;
  char cVar20;
  int iVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  ulong uVar26;
  bool bVar27;
  bool bVar28;
  undefined8 uStack_188;
  int iStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  int iStack_144;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  long lStack_108;
  undefined4 *puStack_100;
  undefined4 *puStack_f8;
  int iStack_ec;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  int *piStack_c8;
  ulong uStack_c0;
  byte bStack_b8;
  undefined7 uStack_b7;
  undefined8 uStack_a8;
  byte bStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_90;
  byte bStack_88;
  undefined7 uStack_87;
  undefined8 uStack_78;
  byte bStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_60;
  byte bStack_50;
  undefined7 uStack_4f;
  undefined8 uStack_40;
  
  lStack_108 = param_1;
  uVar8 = (**(code **)(*param_4 + 0x18))(param_4,2);
  plStack_128 = param_4;
  uVar9 = (**(code **)(*param_4 + 0x18))(param_4,2);
  puStack_f8 = (undefined4 *)func_0x0cc41df0(0xf6ff9e0,0xf71bea0,1);
  puStack_100 = (undefined4 *)func_0x0cc41df0(0xf6ff9e0,0xf71c0a8,1);
  iVar24 = (*param_3 - uVar8) + -3;
  puVar18 = (undefined *)0x0;
  if (iVar24 <= (int)(*param_3 + uVar8 + 3)) {
    iStack_144 = 0;
    uStack_110 = (ulong)(uVar8 + 2);
    uStack_118 = (ulong)(uVar9 + 2);
    uStack_130 = (ulong)(uVar8 + 3);
    iVar21 = uVar9 + 3;
    iVar10 = param_3[1];
    iVar12 = param_3[2];
    iVar23 = -4 - uVar9;
    uStack_120 = CONCAT44(uStack_120._4_4_,iVar23);
    uStack_140 = (ulong)uVar8;
    uStack_138 = (ulong)uVar9;
    do {
      iVar25 = iVar10 + -1;
      iVar19 = iVar12;
      do {
        if ((iVar19 - (int)uStack_138) + -3 <= iVar19 + iVar21) {
          iVar19 = iVar19 + iVar23;
          do {
            iVar19 = iVar19 + 1;
            uStack_178 = CONCAT44(iVar25,iVar24);
            uStack_170 = CONCAT44(uStack_170._4_4_,iVar19);
            lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
            iVar10 = param_3[1];
            if (((iVar25 == iVar10 + -1) && (*(char *)(lVar13 + 5) != '\x01')) ||
               ((iVar25 == iVar10 + 4 && (*(char *)(lVar13 + 5) != '\x01')))) goto LAB_052d893a;
            if ((((iVar24 == *param_3 + (int)uStack_130 ||
                   iVar24 == (*param_3 - (int)uStack_140) + -3) ||
                 (iVar19 == (param_3[2] - (int)uStack_138) + -3 || iVar19 == param_3[2] + iVar21))
                && (iVar25 == iVar10)) &&
               (lVar13 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_178),
               *(long *)(*(long *)(lVar13 + 0x68) + 200) == _DAT_0f6eaec0)) {
              uStack_188 = CONCAT44(uStack_178._4_4_ + 1,(undefined4)uStack_178);
              iStack_180 = (int)uStack_170;
              lVar13 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_188);
              iStack_144 = iStack_144 +
                           (uint)(*(long *)(*(long *)(lVar13 + 0x68) + 200) == _DAT_0f6eaec0);
            }
            iVar12 = param_3[2];
          } while (iVar19 < iVar12 + iVar21);
          iVar10 = param_3[1];
          iVar19 = iVar12;
          iVar23 = (int)uStack_120;
        }
        bVar27 = iVar25 < iVar10 + 4;
        iVar25 = iVar25 + 1;
      } while (bVar27);
      iVar25 = *param_3;
      bVar27 = iVar24 < (int)uStack_130 + iVar25;
      iVar24 = iVar24 + 1;
    } while (bVar27);
    if (iStack_144 - 1U < 5) {
      iStack_144 = (iVar25 - (int)uStack_140) + -3;
      iStack_ec = iVar25 + (int)uStack_140 + 4;
      if (iStack_144 != iStack_ec) {
        uStack_c0 = (ulong)(-(int)uStack_138 - 4);
        uVar26 = uStack_140;
        piStack_c8 = param_3;
        do {
          iVar24 = iVar10 + 3;
          do {
            iVar23 = iVar12 + iVar21;
            if ((iVar12 - (int)uStack_138) + -3 <= iVar23) {
              iVar10 = (int)uStack_c0 + iVar12;
              do {
                iVar10 = iVar10 + 1;
                uStack_188 = CONCAT44(iVar24,iStack_144);
                iStack_180 = iVar10;
                if (((iStack_144 == (*param_3 - (int)uVar26) + -3) ||
                    (iVar10 == (iVar12 - (int)uStack_138) + -3)) ||
                   (((iVar24 == param_3[1] + -1 ||
                     ((iVar10 == iVar23 || (iStack_144 == *param_3 + (int)uStack_130)))) ||
                    (iVar24 == param_3[1] + 4)))) {
                  sVar7 = (**(code **)(*param_2 + 0x110))(param_2);
                  if (sVar7 <= iVar24) {
                    uStack_178 = CONCAT44(uStack_188._4_4_ + -1,(int)uStack_188);
                    uStack_170 = CONCAT44(uStack_170._4_4_,iStack_180);
                    lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
                    if (*(char *)(lVar13 + 5) == '\0') goto LAB_052d9170;
                  }
                  lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_188);
                  if (*(char *)(lVar13 + 5) == '\x01') {
                    if ((iVar24 == param_3[1] + -1) &&
                       (iVar12 = (**(code **)(*plStack_128 + 0x18))(plStack_128,4), iVar12 != 0)) {
                      puVar2 = *(undefined8 **)(lStack_108 + 0x18);
                      if (puVar2 == (undefined8 *)0x0) {
                        lVar13 = *param_2;
                        puVar17 = puStack_100;
LAB_052d93eb:
                        uStack_158 = 1;
                        uStack_160 = 0;
                        puStack_168 = (undefined4 *)0x0;
                        uStack_170 = 0;
                        uStack_178 = 0;
                        (**(code **)(lVar13 + 0xf8))(param_2,&uStack_188,puVar17,3,0,&uStack_178);
                        uVar26 = uStack_140;
                      }
                      else {
                        uStack_120 = (**(code **)(*(long *)*puVar2 + 0x28))
                                               ((long *)*puVar2,&uStack_188);
                        lVar13 = func_0x0b5d6180(puVar2[1],&uStack_188);
                        if (lVar13 == 0) {
                          uStack_178 = CONCAT44(uStack_178._4_4_,3);
                          uStack_170 = uStack_120;
                          puStack_168 = puStack_100;
                          func_0x0b5d6330(puVar2[1],&uStack_188,&uStack_188,&uStack_178);
                          uVar26 = uStack_140;
                        }
                        else {
                          *(undefined4 *)(lVar13 + 0x20) = 3;
                          *(undefined4 **)(lVar13 + 0x30) = puStack_100;
                          uVar26 = uStack_140;
                        }
                      }
                    }
                    else {
                      puVar2 = *(undefined8 **)(lStack_108 + 0x18);
                      if (puVar2 == (undefined8 *)0x0) {
                        lVar13 = *param_2;
                        puVar17 = puStack_f8;
                        goto LAB_052d93eb;
                      }
                      uStack_120 = (**(code **)(*(long *)*puVar2 + 0x28))
                                             ((long *)*puVar2,&uStack_188);
                      lVar13 = func_0x0b5d6180(puVar2[1],&uStack_188);
                      if (lVar13 == 0) {
                        uStack_178 = CONCAT44(uStack_178._4_4_,3);
                        uStack_170 = uStack_120;
                        puStack_168 = puStack_f8;
                        func_0x0b5d6330(puVar2[1],&uStack_188,&uStack_188,&uStack_178);
                        uVar26 = uStack_140;
                        param_3 = piStack_c8;
                      }
                      else {
                        *(undefined4 *)(lVar13 + 0x20) = 3;
                        *(undefined4 **)(lVar13 + 0x30) = puStack_f8;
                        uVar26 = uStack_140;
                        param_3 = piStack_c8;
                      }
                    }
                  }
                }
                else {
LAB_052d9170:
                  puStack_168 = (undefined4 *)0x0;
                  uStack_160 = 0;
                  uStack_178 = 0;
                  uStack_170 = 0;
                  uStack_158 = 1;
                  (**(code **)(*param_2 + 0x108))(param_2,&uStack_188,&uStack_178);
                }
                iVar12 = param_3[2];
                iVar23 = iVar12 + iVar21;
              } while (iVar10 < iVar23);
              iVar10 = param_3[1];
            }
            bVar27 = iVar10 <= iVar24;
            iVar24 = iVar24 + -1;
          } while (bVar27);
          iStack_144 = iStack_144 + 1;
        } while (iStack_144 != iStack_ec);
      }
      uStack_140 = CONCAT44(uStack_140._4_4_,(int)uStack_118 * 2 + 1);
      iVar24 = (int)uStack_110 * 2 + 1;
      uStack_130 = CONCAT44(uStack_130._4_4_,iVar24);
      uVar14 = CONCAT71((uint7)(uint3)((uint)iVar24 >> 8),1);
      do {
        plVar5 = plStack_128;
        uStack_138 = CONCAT44(uStack_138._4_4_,(int)uVar14);
        iVar24 = (**(code **)(*plStack_128 + 0x18))(plStack_128,uStack_140 & 0xffffffff);
        iVar24 = iVar24 - (int)uStack_118;
        iVar10 = (**(code **)(*plVar5 + 0x18))(plVar5,uStack_130 & 0xffffffff);
        iVar10 = iVar10 - (int)uStack_110;
        iStack_180 = param_3[2] + iVar24;
        uStack_188 = CONCAT44(param_3[1],*param_3 + iVar10);
        lVar13 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_188);
        if (*(long *)(*(long *)(lVar13 + 0x68) + 200) == _DAT_0f6eaec0) {
          uStack_178 = CONCAT44(uStack_188._4_4_,(int)uStack_188 + -1);
          uStack_170._0_4_ = iStack_180;
          lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
          bVar1 = *(byte *)(lVar13 + 5);
          uStack_178 = CONCAT44(uStack_188._4_4_,(int)uStack_188 + 1);
          uStack_170._0_4_ = iStack_180;
          lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
          uVar8 = bVar1 + 1;
          if (*(char *)(lVar13 + 5) == '\0') {
            uVar8 = (uint)bVar1;
          }
          uStack_170._0_4_ = iStack_180 + -1;
          uStack_178 = uStack_188;
          lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
          bVar1 = *(byte *)(lVar13 + 5);
          uStack_178 = uStack_188;
          uStack_170 = CONCAT44(uStack_170._4_4_,iStack_180 + 1);
          lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
          if ((uint)*(byte *)(lVar13 + 5) + (uint)bVar1 + uVar8 != 1) goto LAB_052d8a93;
LAB_052d8cf1:
          if (iVar24 < 1) {
            if (-1 < iVar24) goto LAB_052d8d35;
            uStack_178 = uStack_188;
            uStack_170 = CONCAT44(uStack_170._4_4_,iStack_180 + -1);
            lVar13 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_178);
            bVar27 = true;
            if (*(long *)(*(long *)(lVar13 + 0x68) + 200) != _DAT_0f6eaec0) {
              cVar20 = '\0';
              goto LAB_052d8e4c;
            }
LAB_052d8d37:
            if (iVar10 < 1) {
              if (-1 < iVar10) goto LAB_052d8d85;
              uStack_178 = CONCAT44(uStack_188._4_4_,(int)uStack_188 + -1);
              uStack_170 = CONCAT44(uStack_170._4_4_,iStack_180);
              lVar13 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_178);
              bVar28 = *(long *)(*(long *)(lVar13 + 0x68) + 200) != _DAT_0f6eaec0;
              cVar20 = (0 < iVar24) * '\x02';
              if (bVar28) {
                cVar20 = '\x03';
              }
              cVar6 = '\x03';
              if ((bVar27 || 0 < iVar24) || bVar28) goto LAB_052d8e4c;
LAB_052d8e3e:
              cVar20 = cVar6;
              if (0 < iVar10) {
                cVar20 = '\x01';
              }
            }
            else {
              uStack_178 = CONCAT44(uStack_188._4_4_,(int)uStack_188 + 1);
              uStack_170 = CONCAT44(uStack_170._4_4_,iStack_180);
              lVar13 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_178);
              cVar20 = '\x01';
              if (*(long *)(*(long *)(lVar13 + 0x68) + 200) == _DAT_0f6eaec0) {
LAB_052d8d85:
                cVar6 = '\x02';
                if (!bVar27 && 0 >= iVar24) goto LAB_052d8e3e;
                cVar20 = (0 < iVar24) * '\x02';
              }
            }
          }
          else {
            uStack_178 = uStack_188;
            uStack_170 = CONCAT44(uStack_170._4_4_,iStack_180 + 1);
            lVar13 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_178);
            cVar20 = '\x02';
            if (*(long *)(*(long *)(lVar13 + 0x68) + 200) == _DAT_0f6eaec0) {
LAB_052d8d35:
              bVar27 = false;
              goto LAB_052d8d37;
            }
          }
LAB_052d8e4c:
          lVar15 = func_0x0cc41df0(0xf6ff9e0,0xf714f88,1);
          lVar13 = *(long *)(lVar15 + 0x68);
          lVar16 = *(long *)(lVar13 + 0x1b0);
          if (lVar16 == 0) {
LAB_052d8ec7:
            lVar16 = func_0x0c6cd0e0(lVar13);
            if ((lVar16 == 0) && (lVar16 = lVar15, (*(byte *)(lVar13 + 0x135) & 8) != 0)) {
              lVar16 = *(long *)(lVar13 + 0x200);
            }
          }
          else {
            lVar22 = lVar13 + 0x1b0;
            do {
              bVar27 = *(ulong *)(lVar16 + 0x20) < _DAT_0f6ff540;
              if (!bVar27) {
                lVar22 = lVar16;
              }
              lVar16 = *(long *)(lVar16 + (ulong)bVar27 * 8);
            } while (lVar16 != 0);
            if ((lVar22 == lVar13 + 0x1b0) || (_DAT_0f6ff540 < *(ulong *)(lVar22 + 0x20)))
            goto LAB_052d8ec7;
            lVar16 = func_0x0cb8a630(lVar22 + 0x28,*(undefined2 *)(lVar15 + 0x128),cVar20,
                                     lVar13 + 0x1e8);
            if (lVar16 == 0) {
              lVar16 = lVar15;
            }
          }
          func_0x0d3df990(lStack_108,param_2,&uStack_188,lVar16);
          lVar13 = func_0x0c9d4450(param_2,&uStack_188);
          if (lVar13 != 0) {
            puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
            if (puVar17 == (undefined4 *)0x0) {
              func_0x0eec74c0(0x28,0);
            }
            uVar14 = _UNK_012086cd;
            uStack_178 = 0x29;
            uStack_170 = 0x26;
            *(undefined8 *)(puVar17 + 4) = _DAT_012086c5;
            *(undefined8 *)(puVar17 + 6) = uVar14;
            uVar4 = _UNK_012086c1;
            uVar3 = _UNK_012086bd;
            uVar11 = _UNK_012086b9;
            *puVar17 = _DAT_012086b5;
            puVar17[1] = uVar11;
            puVar17[2] = uVar3;
            puVar17[3] = uVar4;
            *(undefined8 *)((long)puVar17 + 0x1e) = 0x6e6f736a2e6e6f65;
            *(undefined1 *)((long)puVar17 + 0x26) = 0;
            puStack_168 = puVar17;
            uVar11 = (**(code **)(*plStack_128 + 0x10))();
            func_0x0cf20110(lVar13,&uStack_178,uVar11);
            if ((uStack_178 & 1) != 0) {
              func_0x0412a280(puStack_168,uStack_178 & 0xfffffffffffffffe);
            }
          }
        }
        else {
LAB_052d8a93:
          plVar5 = plStack_128;
          iVar24 = (**(code **)(*plStack_128 + 0x18))(plStack_128,uStack_140 & 0xffffffff);
          iVar24 = iVar24 - (int)uStack_118;
          iVar10 = (**(code **)(*plVar5 + 0x18))(plVar5,uStack_130 & 0xffffffff);
          iVar10 = iVar10 - (int)uStack_110;
          iStack_180 = param_3[2] + iVar24;
          uStack_188 = CONCAT44(param_3[1],*param_3 + iVar10);
          lVar13 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_188);
          if (*(long *)(*(long *)(lVar13 + 0x68) + 200) == _DAT_0f6eaec0) {
            uStack_178 = CONCAT44(uStack_188._4_4_,(int)uStack_188 + -1);
            uStack_170._0_4_ = iStack_180;
            lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
            bVar1 = *(byte *)(lVar13 + 5);
            uStack_178 = CONCAT44(uStack_188._4_4_,(int)uStack_188 + 1);
            uStack_170._0_4_ = iStack_180;
            lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
            uVar8 = bVar1 + 1;
            if (*(char *)(lVar13 + 5) == '\0') {
              uVar8 = (uint)bVar1;
            }
            uStack_170._0_4_ = iStack_180 + -1;
            uStack_178 = uStack_188;
            lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
            bVar1 = *(byte *)(lVar13 + 5);
            uStack_178 = uStack_188;
            uStack_170 = CONCAT44(uStack_170._4_4_,iStack_180 + 1);
            lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
            if ((uint)*(byte *)(lVar13 + 5) + (uint)bVar1 + uVar8 == 1) goto LAB_052d8cf1;
          }
          plVar5 = plStack_128;
          iVar24 = (**(code **)(*plStack_128 + 0x18))(plStack_128,uStack_140 & 0xffffffff);
          iVar24 = iVar24 - (int)uStack_118;
          iVar10 = (**(code **)(*plVar5 + 0x18))(plVar5,uStack_130 & 0xffffffff);
          iVar10 = iVar10 - (int)uStack_110;
          iStack_180 = param_3[2] + iVar24;
          uStack_188 = CONCAT44(param_3[1],*param_3 + iVar10);
          lVar13 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_188);
          if (*(long *)(*(long *)(lVar13 + 0x68) + 200) == _DAT_0f6eaec0) {
            uStack_178 = CONCAT44(uStack_188._4_4_,(int)uStack_188 + -1);
            uStack_170._0_4_ = iStack_180;
            lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
            bVar1 = *(byte *)(lVar13 + 5);
            uStack_178 = CONCAT44(uStack_188._4_4_,(int)uStack_188 + 1);
            uStack_170._0_4_ = iStack_180;
            lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
            uVar8 = bVar1 + 1;
            if (*(char *)(lVar13 + 5) == '\0') {
              uVar8 = (uint)bVar1;
            }
            uStack_170._0_4_ = iStack_180 + -1;
            uStack_178 = uStack_188;
            lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
            bVar1 = *(byte *)(lVar13 + 5);
            uStack_178 = uStack_188;
            uStack_170 = CONCAT44(uStack_170._4_4_,iStack_180 + 1);
            lVar13 = (**(code **)(*param_2 + 0x60))(param_2,&uStack_178);
            if ((uint)*(byte *)(lVar13 + 5) + (uint)bVar1 + uVar8 == 1) goto LAB_052d8cf1;
          }
        }
        uVar14 = 0;
      } while ((uStack_138 & 1) != 0);
      uVar14 = func_0x0cc41df0(0xf6ff9e0,0xf710430,1);
      func_0x0d3df990(lStack_108,param_2,param_3,uVar14);
      lVar13 = func_0x0c9d4450(param_2,param_3);
      puVar18 = (undefined *)CONCAT71((int7)((ulong)uVar14 >> 8),1);
      if (lVar13 != 0) {
        uVar14 = *(undefined8 *)(lVar13 + 0xd8);
        uVar8 = (**(code **)(*plStack_128 + 0x18))(plStack_128,4);
        uVar11 = 0x130c;
        if (uVar8 < 4) {
          puVar18 = &UNK_014e2250;
          uVar11 = *(undefined4 *)(&UNK_014e2250 + (ulong)uVar8 * 4);
        }
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        func_0x0b04d0a0(&bStack_b8,uVar11,&uStack_e8);
        func_0x0c9c5280(uVar14,&bStack_b8);
        if ((bStack_50 & 1) != 0) {
          func_0x0412a280(uStack_40,CONCAT71(uStack_4f,bStack_50) & 0xfffffffffffffffe);
        }
        if ((bStack_70 & 1) != 0) {
          func_0x0412a280(uStack_60,CONCAT71(uStack_6f,bStack_70) & 0xfffffffffffffffe);
        }
        if ((bStack_88 & 1) != 0) {
          func_0x0412a280(uStack_78,CONCAT71(uStack_87,bStack_88) & 0xfffffffffffffffe);
        }
        if ((bStack_a0 & 1) != 0) {
          func_0x0412a280(uStack_90,CONCAT71(uStack_9f,bStack_a0) & 0xfffffffffffffffe);
        }
        if ((bStack_b8 & 1) != 0) {
          func_0x0412a280(uStack_a8,CONCAT71(uStack_b7,bStack_b8) & 0xfffffffffffffffe);
        }
        if ((uStack_e8 & 1) == 0) {
          puVar18 = (undefined *)CONCAT71((int7)((ulong)puVar18 >> 8),1);
        }
        else {
          func_0x0412a280(uStack_d8,uStack_e8 & 0xfffffffffffffffe);
          puVar18 = (undefined *)CONCAT71((int7)((ulong)puVar18 >> 8),1);
        }
      }
    }
    else {
LAB_052d893a:
      puVar18 = (undefined *)0x0;
    }
  }
  return (ulong)puVar18 & 0xffffffff;
}


```

### Assembly

```asm
052d8680  PUSH RBP
052d8681  PUSH R15
052d8683  PUSH R14
052d8685  PUSH R13
052d8687  PUSH R12
052d8689  PUSH RBX
052d868a  SUB RSP,0x158
052d8691  MOV RBX,RCX
052d8694  MOV R14,RDX
052d8697  MOV R15,RSI
052d869a  MOV qword ptr [RSP + 0x80],RDI
052d86a2  MOV RAX,qword ptr [RCX]
052d86a5  MOV RDI,RCX
052d86a8  MOV ESI,0x2
052d86ad  CALL qword ptr [RAX + 0x18]
052d86b0  MOV R13D,EAX
052d86b3  MOV RAX,qword ptr [RBX]
052d86b6  MOV qword ptr [RSP + 0x60],RBX
052d86bb  MOV RDI,RBX
052d86be  MOV ESI,0x2
052d86c3  CALL qword ptr [RAX + 0x18]
052d86c6  MOV EBP,EAX
052d86c8  LEA RBX,[0xf6ff9e0]
052d86cf  LEA RSI,[0xf71bea0]
052d86d6  MOV RDI,RBX
052d86d9  MOV EDX,0x1
052d86de  CALL 0x0cc41df0
052d86e3  MOV qword ptr [RSP + 0x90],RAX
052d86eb  LEA RSI,[0xf71c0a8]
052d86f2  MOV RDI,RBX
052d86f5  MOV EDX,0x1
052d86fa  CALL 0x0cc41df0
052d86ff  MOV qword ptr [RSP + 0x88],RAX
052d8707  MOV R12D,dword ptr [R14]
052d870a  LEA EAX,[R12 + R13*0x1]
052d870e  ADD EAX,0x3
052d8711  SUB R12D,R13D
052d8714  ADD R12D,-0x3
052d8718  XOR ECX,ECX
052d871a  CMP R12D,EAX
052d871d  JG 0x052d893c
052d8723  MOV dword ptr [RSP + 0x44],0x0
052d872b  LEA EAX,[R13 + 0x2]
052d872f  MOV qword ptr [RSP + 0x78],RAX
052d8734  LEA EAX,[RBP + 0x2]
052d8737  MOV qword ptr [RSP + 0x70],RAX
052d873c  MOV qword ptr [RSP + 0x48],R13
052d8741  LEA EAX,[R13 + 0x3]
052d8745  MOV qword ptr [RSP + 0x58],RAX
052d874a  MOV RDX,RBP
052d874d  ADD EBP,0x3
052d8750  MOV ECX,dword ptr [R14 + 0x4]
052d8754  MOV EAX,dword ptr [R14 + 0x8]
052d8758  MOV R8D,0xfffffffc
052d875e  MOV qword ptr [RSP + 0x50],RDX
052d8763  SUB R8D,EDX
052d8766  MOV dword ptr [RSP + 0x68],R8D
052d876b  LEA R13D,[RCX + -0x1]
052d876f  MOV EBX,EAX
052d8771  JMP 0x052d879e
052d8780  MOV ECX,dword ptr [R14 + 0x4]
052d8784  MOV EBX,EAX
052d8786  MOV R8D,dword ptr [RSP + 0x68]
052d878b  LEA EDX,[R13 + 0x1]
052d878f  LEA ESI,[RCX + 0x4]
052d8792  CMP R13D,ESI
052d8795  MOV R13D,EDX
052d8798  JGE 0x052d88ca
052d879e  MOV EDX,EBX
052d87a0  SUB EDX,dword ptr [RSP + 0x50]
052d87a4  ADD EDX,-0x3
052d87a7  LEA ESI,[RBX + RBP*0x1]
052d87aa  CMP EDX,ESI
052d87ac  JG 0x052d878b
052d87ae  ADD EBX,R8D
052d87b1  JMP 0x052d87cb
052d87c0  MOV EAX,dword ptr [R14 + 0x8]
052d87c4  LEA ECX,[RAX + RBP*0x1]
052d87c7  CMP EBX,ECX
052d87c9  JGE 0x052d8780
052d87cb  INC EBX
052d87cd  MOV dword ptr [RSP + 0x10],R12D
052d87d2  MOV dword ptr [RSP + 0x14],R13D
052d87d7  MOV dword ptr [RSP + 0x18],EBX
052d87db  MOV RAX,qword ptr [R15]
052d87de  MOV RDI,R15
052d87e1  LEA RSI,[RSP + 0x10]
052d87e6  CALL qword ptr [RAX + 0x60]
052d87e9  MOV ECX,dword ptr [R14 + 0x4]
052d87ed  LEA EDX,[RCX + -0x1]
052d87f0  CMP R13D,EDX
052d87f3  JNZ 0x052d87ff
052d87f5  CMP byte ptr [RAX + 0x5],0x1
052d87f9  JNZ 0x052d893a
052d87ff  LEA EDX,[RCX + 0x4]
052d8802  CMP R13D,EDX
052d8805  JNZ 0x052d8811
052d8807  CMP byte ptr [RAX + 0x5],0x1
052d880b  JNZ 0x052d893a
052d8811  MOV EAX,dword ptr [R14]
052d8814  MOV EDX,EAX
052d8816  SUB EDX,dword ptr [RSP + 0x48]
052d881a  ADD EDX,-0x3
052d881d  CMP R12D,EDX
052d8820  SETZ DL
052d8823  ADD EAX,dword ptr [RSP + 0x58]
052d8827  CMP R12D,EAX
052d882a  SETZ AL
052d882d  OR AL,DL
052d882f  JNZ 0x052d8852
052d8831  MOV EAX,dword ptr [R14 + 0x8]
052d8835  MOV EDX,EAX
052d8837  SUB EDX,dword ptr [RSP + 0x50]
052d883b  ADD EDX,-0x3
052d883e  CMP EBX,EDX
052d8840  SETNZ DL
052d8843  ADD EAX,EBP
052d8845  CMP EBX,EAX
052d8847  SETNZ AL
052d884a  TEST DL,AL
052d884c  JNZ 0x052d87c0
052d8852  CMP R13D,ECX
052d8855  JNZ 0x052d87c0
052d885b  MOV RAX,qword ptr [R15]
052d885e  MOV RDI,R15
052d8861  LEA RSI,[RSP + 0x10]
052d8866  CALL qword ptr [RAX + 0x10]
052d8869  MOV RAX,qword ptr [RAX + 0x68]
052d886d  MOV RAX,qword ptr [RAX + 0xc8]
052d8874  CMP RAX,qword ptr [0x0f6eaec0]
052d887b  JNZ 0x052d87c0
052d8881  MOV EAX,dword ptr [RSP + 0x10]
052d8885  MOV ECX,dword ptr [RSP + 0x14]
052d8889  INC ECX
052d888b  MOV EDX,dword ptr [RSP + 0x18]
052d888f  SHL RCX,0x20
052d8893  OR RCX,RAX
052d8896  MOV qword ptr [RSP],RCX
052d889a  MOV dword ptr [RSP + 0x8],EDX
052d889e  MOV RAX,qword ptr [R15]
052d88a1  MOV RDI,R15
052d88a4  MOV RSI,RSP
052d88a7  CALL qword ptr [RAX + 0x10]
052d88aa  MOV RAX,qword ptr [RAX + 0x68]
052d88ae  MOV RAX,qword ptr [RAX + 0xc8]
052d88b5  XOR ECX,ECX
052d88b7  CMP RAX,qword ptr [0x0f6eaec0]
052d88be  SETZ CL
052d88c1  ADD dword ptr [RSP + 0x44],ECX
052d88c5  JMP 0x052d87c0
052d88ca  MOV EDX,dword ptr [R14]
052d88cd  LEA ESI,[R12 + 0x1]
052d88d2  MOV RDI,qword ptr [RSP + 0x58]
052d88d7  ADD EDI,EDX
052d88d9  CMP R12D,EDI
052d88dc  MOV R12D,ESI
052d88df  JL 0x052d876b
052d88e5  MOV ESI,dword ptr [RSP + 0x44]
052d88e9  DEC ESI
052d88eb  CMP ESI,0x4
052d88ee  JA 0x052d893a
052d88f0  MOV ESI,EDX
052d88f2  MOV R13,qword ptr [RSP + 0x48]
052d88f7  SUB ESI,R13D
052d88fa  ADD ESI,-0x3
052d88fd  ADD EDX,R13D
052d8900  ADD EDX,0x4
052d8903  MOV dword ptr [RSP + 0x44],ESI
052d8907  MOV dword ptr [RSP + 0x9c],EDX
052d890e  CMP ESI,EDX
052d8910  JNZ 0x052d9103
052d8916  MOV RAX,qword ptr [RSP + 0x70]
052d891b  LEA EAX,[0x1 + RAX*0x2]
052d8922  MOV dword ptr [RSP + 0x48],EAX
052d8926  MOV RAX,qword ptr [RSP + 0x78]
052d892b  LEA EAX,[0x1 + RAX*0x2]
052d8932  MOV dword ptr [RSP + 0x58],EAX
052d8936  MOV AL,0x1
052d8938  JMP 0x052d8960
052d893a  XOR ECX,ECX
052d893c  MOV EAX,ECX
052d893e  ADD RSP,0x158
052d8945  POP RBX
052d8946  POP R12
052d8948  POP R13
052d894a  POP R14
052d894c  POP R15
052d894e  POP RBP
052d894f  RET
052d8950  TEST byte ptr [RSP + 0x50],0x1
052d8955  MOV EAX,0x0
052d895a  JZ 0x052d8ffb
052d8960  MOV dword ptr [RSP + 0x50],EAX
052d8964  MOV RBX,qword ptr [RSP + 0x60]
052d8969  MOV RAX,qword ptr [RBX]
052d896c  MOV RDI,RBX
052d896f  MOV ESI,dword ptr [RSP + 0x48]
052d8973  CALL qword ptr [RAX + 0x18]
052d8976  MOV R13D,EAX
052d8979  SUB R13D,dword ptr [RSP + 0x70]
052d897e  MOV RAX,qword ptr [RBX]
052d8981  MOV RDI,RBX
052d8984  MOV ESI,dword ptr [RSP + 0x58]
052d8988  CALL qword ptr [RAX + 0x18]
052d898b  MOV R12D,EAX
052d898e  SUB R12D,dword ptr [RSP + 0x78]
052d8993  MOV EAX,dword ptr [R14]
052d8996  ADD EAX,R12D
052d8999  MOV ECX,dword ptr [R14 + 0x8]
052d899d  ADD ECX,R13D
052d89a0  MOV EDX,dword ptr [R14 + 0x4]
052d89a4  SHL RDX,0x20
052d89a8  OR RAX,RDX
052d89ab  MOV qword ptr [RSP],RAX
052d89af  MOV dword ptr [RSP + 0x8],ECX
052d89b3  MOV RAX,qword ptr [R15]
052d89b6  MOV RDI,R15
052d89b9  MOV RSI,RSP
052d89bc  CALL qword ptr [RAX + 0x10]
052d89bf  MOV RAX,qword ptr [RAX + 0x68]
052d89c3  MOV RAX,qword ptr [RAX + 0xc8]
052d89ca  CMP RAX,qword ptr [0x0f6eaec0]
052d89d1  JNZ 0x052d8a93
052d89d7  MOV EAX,dword ptr [RSP]
052d89da  MOV ECX,dword ptr [RSP + 0x4]
052d89de  DEC EAX
052d89e0  MOV EDX,dword ptr [RSP + 0x8]
052d89e4  SHL RCX,0x20
052d89e8  OR RAX,RCX
052d89eb  MOV qword ptr [RSP + 0x10],RAX
052d89f0  MOV dword ptr [RSP + 0x18],EDX
052d89f4  MOV RAX,qword ptr [R15]
052d89f7  MOV RDI,R15
052d89fa  LEA RBX,[RSP + 0x10]
052d89ff  MOV RSI,RBX
052d8a02  CALL qword ptr [RAX + 0x60]
052d8a05  MOVZX EBP,byte ptr [RAX + 0x5]
052d8a09  MOV EAX,dword ptr [RSP]
052d8a0c  MOV ECX,dword ptr [RSP + 0x4]
052d8a10  INC EAX
052d8a12  MOV EDX,dword ptr [RSP + 0x8]
052d8a16  SHL RCX,0x20
052d8a1a  OR RAX,RCX
052d8a1d  MOV qword ptr [RSP + 0x10],RAX
052d8a22  MOV dword ptr [RSP + 0x18],EDX
052d8a26  MOV RAX,qword ptr [R15]
052d8a29  MOV RDI,R15
052d8a2c  MOV RSI,RBX
052d8a2f  CALL qword ptr [RAX + 0x60]
052d8a32  LEA EBX,[RBP + 0x1]
052d8a35  CMP byte ptr [RAX + 0x5],0x0
052d8a39  CMOVZ EBX,EBP
052d8a3c  MOV RAX,qword ptr [RSP]
052d8a40  MOV ECX,dword ptr [RSP + 0x8]
052d8a44  DEC ECX
052d8a46  MOV qword ptr [RSP + 0x10],RAX
052d8a4b  MOV dword ptr [RSP + 0x18],ECX
052d8a4f  MOV RAX,qword ptr [R15]
052d8a52  MOV RDI,R15
052d8a55  LEA RSI,[RSP + 0x10]
052d8a5a  CALL qword ptr [RAX + 0x60]
052d8a5d  MOVZX EBP,byte ptr [RAX + 0x5]
052d8a61  MOV RAX,qword ptr [RSP]
052d8a65  MOV ECX,dword ptr [RSP + 0x8]
052d8a69  INC ECX
052d8a6b  MOV qword ptr [RSP + 0x10],RAX
052d8a70  MOV dword ptr [RSP + 0x18],ECX
052d8a74  MOV RAX,qword ptr [R15]
052d8a77  MOV RDI,R15
052d8a7a  LEA RSI,[RSP + 0x10]
052d8a7f  CALL qword ptr [RAX + 0x60]
052d8a82  MOVZX EAX,byte ptr [RAX + 0x5]
052d8a86  ADD EAX,EBP
052d8a88  ADD EAX,EBX
052d8a8a  CMP EAX,0x1
052d8a8d  JZ 0x052d8cf1
052d8a93  MOV RBX,qword ptr [RSP + 0x60]
052d8a98  MOV RAX,qword ptr [RBX]
052d8a9b  MOV RDI,RBX
052d8a9e  MOV ESI,dword ptr [RSP + 0x48]
052d8aa2  CALL qword ptr [RAX + 0x18]
052d8aa5  MOV R13D,EAX
052d8aa8  SUB R13D,dword ptr [RSP + 0x70]
052d8aad  MOV RAX,qword ptr [RBX]
052d8ab0  MOV RDI,RBX
052d8ab3  MOV ESI,dword ptr [RSP + 0x58]
052d8ab7  CALL qword ptr [RAX + 0x18]
052d8aba  MOV R12D,EAX
052d8abd  SUB R12D,dword ptr [RSP + 0x78]
052d8ac2  MOV EAX,dword ptr [R14]
052d8ac5  ADD EAX,R12D
052d8ac8  MOV ECX,dword ptr [R14 + 0x8]
052d8acc  ADD ECX,R13D
052d8acf  MOV EDX,dword ptr [R14 + 0x4]
052d8ad3  SHL RDX,0x20
052d8ad7  OR RAX,RDX
052d8ada  MOV qword ptr [RSP],RAX
052d8ade  MOV dword ptr [RSP + 0x8],ECX
052d8ae2  MOV RAX,qword ptr [R15]
052d8ae5  MOV RDI,R15
052d8ae8  MOV RSI,RSP
052d8aeb  CALL qword ptr [RAX + 0x10]
052d8aee  MOV RAX,qword ptr [RAX + 0x68]
052d8af2  MOV RAX,qword ptr [RAX + 0xc8]
052d8af9  CMP RAX,qword ptr [0x0f6eaec0]
052d8b00  JNZ 0x052d8bc2
052d8b06  MOV EAX,dword ptr [RSP]
052d8b09  MOV ECX,dword ptr [RSP + 0x4]
052d8b0d  DEC EAX
052d8b0f  MOV EDX,dword ptr [RSP + 0x8]
052d8b13  SHL RCX,0x20
052d8b17  OR RAX,RCX
052d8b1a  MOV qword ptr [RSP + 0x10],RAX
052d8b1f  MOV dword ptr [RSP + 0x18],EDX
052d8b23  MOV RAX,qword ptr [R15]
052d8b26  MOV RDI,R15
052d8b29  LEA RBX,[RSP + 0x10]
052d8b2e  MOV RSI,RBX
052d8b31  CALL qword ptr [RAX + 0x60]
052d8b34  MOVZX EBP,byte ptr [RAX + 0x5]
052d8b38  MOV EAX,dword ptr [RSP]
052d8b3b  MOV ECX,dword ptr [RSP + 0x4]
052d8b3f  INC EAX
052d8b41  MOV EDX,dword ptr [RSP + 0x8]
052d8b45  SHL RCX,0x20
052d8b49  OR RAX,RCX
052d8b4c  MOV qword ptr [RSP + 0x10],RAX
052d8b51  MOV dword ptr [RSP + 0x18],EDX
052d8b55  MOV RAX,qword ptr [R15]
052d8b58  MOV RDI,R15
052d8b5b  MOV RSI,RBX
052d8b5e  CALL qword ptr [RAX + 0x60]
052d8b61  LEA EBX,[RBP + 0x1]
052d8b64  CMP byte ptr [RAX + 0x5],0x0
052d8b68  CMOVZ EBX,EBP
052d8b6b  MOV RAX,qword ptr [RSP]
052d8b6f  MOV ECX,dword ptr [RSP + 0x8]
052d8b73  DEC ECX
052d8b75  MOV qword ptr [RSP + 0x10],RAX
052d8b7a  MOV dword ptr [RSP + 0x18],ECX
052d8b7e  MOV RAX,qword ptr [R15]
052d8b81  MOV RDI,R15
052d8b84  LEA RSI,[RSP + 0x10]
052d8b89  CALL qword ptr [RAX + 0x60]
052d8b8c  MOVZX EBP,byte ptr [RAX + 0x5]
052d8b90  MOV RAX,qword ptr [RSP]
052d8b94  MOV ECX,dword ptr [RSP + 0x8]
052d8b98  INC ECX
052d8b9a  MOV qword ptr [RSP + 0x10],RAX
052d8b9f  MOV dword ptr [RSP + 0x18],ECX
052d8ba3  MOV RAX,qword ptr [R15]
052d8ba6  MOV RDI,R15
052d8ba9  LEA RSI,[RSP + 0x10]
052d8bae  CALL qword ptr [RAX + 0x60]
052d8bb1  MOVZX EAX,byte ptr [RAX + 0x5]
052d8bb5  ADD EAX,EBP
052d8bb7  ADD EAX,EBX
052d8bb9  CMP EAX,0x1
052d8bbc  JZ 0x052d8cf1
052d8bc2  MOV RBX,qword ptr [RSP + 0x60]
052d8bc7  MOV RAX,qword ptr [RBX]
052d8bca  MOV RDI,RBX
052d8bcd  MOV ESI,dword ptr [RSP + 0x48]
052d8bd1  CALL qword ptr [RAX + 0x18]
052d8bd4  MOV R13D,EAX
052d8bd7  SUB R13D,dword ptr [RSP + 0x70]
052d8bdc  MOV RAX,qword ptr [RBX]
052d8bdf  MOV RDI,RBX
052d8be2  MOV ESI,dword ptr [RSP + 0x58]
052d8be6  CALL qword ptr [RAX + 0x18]
052d8be9  MOV R12D,EAX
052d8bec  SUB R12D,dword ptr [RSP + 0x78]
052d8bf1  MOV EAX,dword ptr [R14]
052d8bf4  ADD EAX,R12D
052d8bf7  MOV ECX,dword ptr [R14 + 0x8]
052d8bfb  ADD ECX,R13D
052d8bfe  MOV EDX,dword ptr [R14 + 0x4]
052d8c02  SHL RDX,0x20
052d8c06  OR RAX,RDX
052d8c09  MOV qword ptr [RSP],RAX
052d8c0d  MOV dword ptr [RSP + 0x8],ECX
052d8c11  MOV RAX,qword ptr [R15]
052d8c14  MOV RDI,R15
052d8c17  MOV RSI,RSP
052d8c1a  CALL qword ptr [RAX + 0x10]
052d8c1d  MOV RAX,qword ptr [RAX + 0x68]
052d8c21  MOV RAX,qword ptr [RAX + 0xc8]
052d8c28  CMP RAX,qword ptr [0x0f6eaec0]
052d8c2f  JNZ 0x052d8950
052d8c35  MOV EAX,dword ptr [RSP]
052d8c38  MOV ECX,dword ptr [RSP + 0x4]
052d8c3c  DEC EAX
052d8c3e  MOV EDX,dword ptr [RSP + 0x8]
052d8c42  SHL RCX,0x20
052d8c46  OR RAX,RCX
052d8c49  MOV qword ptr [RSP + 0x10],RAX
052d8c4e  MOV dword ptr [RSP + 0x18],EDX
052d8c52  MOV RAX,qword ptr [R15]
052d8c55  MOV RDI,R15
052d8c58  LEA RBX,[RSP + 0x10]
052d8c5d  MOV RSI,RBX
052d8c60  CALL qword ptr [RAX + 0x60]
052d8c63  MOVZX EBP,byte ptr [RAX + 0x5]
052d8c67  MOV EAX,dword ptr [RSP]
052d8c6a  MOV ECX,dword ptr [RSP + 0x4]
052d8c6e  INC EAX
052d8c70  MOV EDX,dword ptr [RSP + 0x8]
052d8c74  SHL RCX,0x20
052d8c78  OR RAX,RCX
052d8c7b  MOV qword ptr [RSP + 0x10],RAX
052d8c80  MOV dword ptr [RSP + 0x18],EDX
052d8c84  MOV RAX,qword ptr [R15]
052d8c87  MOV RDI,R15
052d8c8a  MOV RSI,RBX
052d8c8d  CALL qword ptr [RAX + 0x60]
052d8c90  LEA EBX,[RBP + 0x1]
052d8c93  CMP byte ptr [RAX + 0x5],0x0
052d8c97  CMOVZ EBX,EBP
052d8c9a  MOV RAX,qword ptr [RSP]
052d8c9e  MOV ECX,dword ptr [RSP + 0x8]
052d8ca2  DEC ECX
052d8ca4  MOV qword ptr [RSP + 0x10],RAX
052d8ca9  MOV dword ptr [RSP + 0x18],ECX
052d8cad  MOV RAX,qword ptr [R15]
052d8cb0  MOV RDI,R15
052d8cb3  LEA RSI,[RSP + 0x10]
052d8cb8  CALL qword ptr [RAX + 0x60]
052d8cbb  MOVZX EBP,byte ptr [RAX + 0x5]
052d8cbf  MOV RAX,qword ptr [RSP]
052d8cc3  MOV ECX,dword ptr [RSP + 0x8]
052d8cc7  INC ECX
052d8cc9  MOV qword ptr [RSP + 0x10],RAX
052d8cce  MOV dword ptr [RSP + 0x18],ECX
052d8cd2  MOV RAX,qword ptr [R15]
052d8cd5  MOV RDI,R15
052d8cd8  LEA RSI,[RSP + 0x10]
052d8cdd  CALL qword ptr [RAX + 0x60]
052d8ce0  MOVZX EAX,byte ptr [RAX + 0x5]
052d8ce4  ADD EAX,EBP
052d8ce6  ADD EAX,EBX
052d8ce8  CMP EAX,0x1
052d8ceb  JNZ 0x052d8950
052d8cf1  TEST R13D,R13D
052d8cf4  JLE 0x052d8d33
052d8cf6  MOV RAX,qword ptr [RSP]
052d8cfa  MOV ECX,dword ptr [RSP + 0x8]
052d8cfe  INC ECX
052d8d00  MOV qword ptr [RSP + 0x10],RAX
052d8d05  MOV dword ptr [RSP + 0x18],ECX
052d8d09  MOV RAX,qword ptr [R15]
052d8d0c  MOV RDI,R15
052d8d0f  LEA RSI,[RSP + 0x10]
052d8d14  CALL qword ptr [RAX + 0x10]
052d8d17  MOV RAX,qword ptr [RAX + 0x68]
052d8d1b  MOV RAX,qword ptr [RAX + 0xc8]
052d8d22  MOV BPL,0x2
052d8d25  CMP RAX,qword ptr [0x0f6eaec0]
052d8d2c  JZ 0x052d8d35
052d8d2e  JMP 0x052d8e4c
052d8d33  JS 0x052d8d9f
052d8d35  XOR EBX,EBX
052d8d37  TEST R12D,R12D
052d8d3a  JLE 0x052d8d83
052d8d3c  MOV EAX,dword ptr [RSP]
052d8d3f  MOV ECX,dword ptr [RSP + 0x4]
052d8d43  INC EAX
052d8d45  MOV EDX,dword ptr [RSP + 0x8]
052d8d49  SHL RCX,0x20
052d8d4d  OR RAX,RCX
052d8d50  MOV qword ptr [RSP + 0x10],RAX
052d8d55  MOV dword ptr [RSP + 0x18],EDX
052d8d59  MOV RAX,qword ptr [R15]
052d8d5c  MOV RDI,R15
052d8d5f  LEA RSI,[RSP + 0x10]
052d8d64  CALL qword ptr [RAX + 0x10]
052d8d67  MOV RAX,qword ptr [RAX + 0x68]
052d8d6b  MOV RAX,qword ptr [RAX + 0xc8]
052d8d72  MOV BPL,0x1
052d8d75  CMP RAX,qword ptr [0x0f6eaec0]
052d8d7c  JZ 0x052d8d85
052d8d7e  JMP 0x052d8e4c
052d8d83  JS 0x052d8dde
052d8d85  TEST R13D,R13D
052d8d88  SETG BPL
052d8d8c  OR BL,BPL
052d8d8f  MOV AL,0x2
052d8d91  JZ 0x052d8e3e
052d8d97  ADD BPL,BPL
052d8d9a  JMP 0x052d8e4c
052d8d9f  MOV RAX,qword ptr [RSP]
052d8da3  MOV ECX,dword ptr [RSP + 0x8]
052d8da7  DEC ECX
052d8da9  MOV qword ptr [RSP + 0x10],RAX
052d8dae  MOV dword ptr [RSP + 0x18],ECX
052d8db2  MOV RAX,qword ptr [R15]
052d8db5  MOV RDI,R15
052d8db8  LEA RSI,[RSP + 0x10]
052d8dbd  CALL qword ptr [RAX + 0x10]
052d8dc0  MOV RAX,qword ptr [RAX + 0x68]
052d8dc4  MOV RAX,qword ptr [RAX + 0xc8]
052d8dcb  MOV BL,0x1
052d8dcd  CMP RAX,qword ptr [0x0f6eaec0]
052d8dd4  JZ 0x052d8d37
052d8dda  XOR EBP,EBP
052d8ddc  JMP 0x052d8e4c
052d8dde  TEST R13D,R13D
052d8de1  SETG R13B
052d8de5  MOV EAX,dword ptr [RSP]
052d8de8  MOV ECX,dword ptr [RSP + 0x4]
052d8dec  DEC EAX
052d8dee  MOV EDX,dword ptr [RSP + 0x8]
052d8df2  SHL RCX,0x20
052d8df6  OR RAX,RCX
052d8df9  MOV qword ptr [RSP + 0x10],RAX
052d8dfe  MOV dword ptr [RSP + 0x18],EDX
052d8e02  MOV RAX,qword ptr [R15]
052d8e05  MOV RDI,R15
052d8e08  LEA RSI,[RSP + 0x10]
052d8e0d  CALL qword ptr [RAX + 0x10]
052d8e10  MOV RAX,qword ptr [RAX + 0x68]
052d8e14  MOV RAX,qword ptr [RAX + 0xc8]
052d8e1b  CMP RAX,qword ptr [0x0f6eaec0]
052d8e22  LEA EAX,[R13 + R13*0x1]
052d8e27  MOVZX EBP,AL
052d8e2a  MOV EAX,0x3
052d8e2f  CMOVNZ EBP,EAX
052d8e32  SETNZ AL
052d8e35  OR BL,R13B
052d8e38  OR BL,AL
052d8e3a  MOV AL,0x3
052d8e3c  JNZ 0x052d8e4c
052d8e3e  TEST R12D,R12D
052d8e41  MOVZX EBP,AL
052d8e44  MOV EAX,0x1
052d8e49  CMOVG EBP,EAX
052d8e4c  LEA RDI,[0xf6ff9e0]
052d8e53  LEA RSI,[0xf714f88]
052d8e5a  MOV EDX,0x1
052d8e5f  CALL 0x0cc41df0
052d8e64  MOV RBX,RAX
052d8e67  MOV R12,qword ptr [RAX + 0x68]
052d8e6b  MOV RSI,qword ptr [0x0f6ff540]
052d8e72  MOV RAX,qword ptr [R12 + 0x1b0]
052d8e7a  MOVZX EDX,BPL
052d8e7e  MOVZX ECX,word ptr [RBX + 0x128]
052d8e85  TEST RAX,RAX
052d8e88  JZ 0x052d8ec7
052d8e8a  LEA R8,[R12 + 0x1b0]
052d8e92  MOV RDI,R8
052d8e95  NOP dword ptr CS:[RAX + RAX*0x1]
052d8ea0  XOR R9D,R9D
052d8ea3  CMP qword ptr [RAX + 0x20],RSI
052d8ea7  SETC R9B
052d8eab  CMOVNC RDI,RAX
052d8eaf  MOV RAX,qword ptr [RAX + R9*0x8]
052d8eb3  TEST RAX,RAX
052d8eb6  JNZ 0x052d8ea0
052d8eb8  CMP RDI,R8
052d8ebb  JZ 0x052d8ec7
052d8ebd  CMP RSI,qword ptr [RDI + 0x20]
052d8ec1  JNC 0x052d8fc1
052d8ec7  MOV RDI,R12
052d8eca  CALL 0x0c6cd0e0
052d8ecf  TEST RAX,RAX
052d8ed2  JZ 0x052d8fa5
052d8ed8  MOV RBX,RAX
052d8edb  MOV RDI,qword ptr [RSP + 0x80]
052d8ee3  MOV RSI,R15
052d8ee6  MOV R12,RSP
052d8ee9  MOV RDX,R12
052d8eec  MOV RCX,RBX
052d8eef  CALL 0x0d3df990
052d8ef4  MOV RDI,R15
052d8ef7  MOV RSI,R12
052d8efa  CALL 0x0c9d4450
052d8eff  TEST RAX,RAX
052d8f02  JZ 0x052d8950
052d8f08  MOV RBX,RAX
052d8f0b  MOV RAX,qword ptr [0x0f5463b0]
052d8f12  MOV ESI,0x28
052d8f17  LEA RDI,[0xf5463b0]
052d8f1e  CALL qword ptr [RAX + 0x10]
052d8f21  TEST RAX,RAX
052d8f24  JZ 0x052d8fe4
052d8f2a  MOV qword ptr [RSP + 0x20],RAX
052d8f2f  MOV qword ptr [RSP + 0x10],0x29
052d8f38  MOV qword ptr [RSP + 0x18],0x26
052d8f41  MOVUPS XMM0,xmmword ptr [0x012086c5]
052d8f48  MOVUPS xmmword ptr [RAX + 0x10],XMM0
052d8f4c  MOVUPS XMM0,xmmword ptr [0x012086b5]
052d8f53  MOVUPS xmmword ptr [RAX],XMM0
052d8f56  MOV RCX,0x6e6f736a2e6e6f65
052d8f60  MOV qword ptr [RAX + 0x1e],RCX
052d8f64  MOV byte ptr [RAX + 0x26],0x0
052d8f68  MOV RDI,qword ptr [RSP + 0x60]
052d8f6d  MOV RAX,qword ptr [RDI]
052d8f70  CALL qword ptr [RAX + 0x10]
052d8f73  MOV RDI,RBX
052d8f76  LEA RSI,[RSP + 0x10]
052d8f7b  MOV EDX,EAX
052d8f7d  CALL 0x0cf20110
052d8f82  TEST byte ptr [RSP + 0x10],0x1
052d8f87  JZ 0x052d8950
052d8f8d  MOV RSI,qword ptr [RSP + 0x10]
052d8f92  MOV RDI,qword ptr [RSP + 0x20]
052d8f97  AND RSI,-0x2
052d8f9b  CALL 0x0412a280
052d8fa0  JMP 0x052d8950
052d8fa5  TEST byte ptr [R12 + 0x135],0x8
052d8fae  JZ 0x052d8edb
052d8fb4  MOV RBX,qword ptr [R12 + 0x200]
052d8fbc  JMP 0x052d8edb
052d8fc1  ADD RDI,0x28
052d8fc5  ADD R12,0x1e8
052d8fcc  MOV ESI,ECX
052d8fce  MOV RCX,R12
052d8fd1  CALL 0x0cb8a630
052d8fd6  TEST RAX,RAX
052d8fd9  JNZ 0x052d8ed8
052d8fdf  JMP 0x052d8edb
052d8fe4  MOV EDI,0x28
052d8fe9  XOR ESI,ESI
052d8feb  MOV R12,RAX
052d8fee  CALL 0x0eec74c0
052d8ff3  MOV RAX,R12
052d8ff6  JMP 0x052d8f2a
052d8ffb  LEA RDI,[0xf6ff9e0]
052d9002  LEA RSI,[0xf710430]
052d9009  MOV EDX,0x1
052d900e  CALL 0x0cc41df0
052d9013  MOV RDI,qword ptr [RSP + 0x80]
052d901b  MOV RSI,R15
052d901e  MOV RDX,R14
052d9021  MOV RCX,RAX
052d9024  CALL 0x0d3df990
052d9029  MOV RDI,R15
052d902c  MOV RSI,R14
052d902f  CALL 0x0c9d4450
052d9034  MOV CL,0x1
052d9036  TEST RAX,RAX
052d9039  JZ 0x052d893c
052d903f  MOV RBX,qword ptr [RAX + 0xd8]
052d9046  MOV RDI,qword ptr [RSP + 0x60]
052d904b  MOV RAX,qword ptr [RDI]
052d904e  MOV ESI,0x4
052d9053  CALL qword ptr [RAX + 0x18]
052d9056  MOV ESI,0x130c
052d905b  CMP EAX,0x3
052d905e  JA 0x052d906c
052d9060  MOV EAX,EAX
052d9062  LEA RCX,[0x14e2250]
052d9069  MOV ESI,dword ptr [RCX + RAX*0x4]
052d906c  XORPS XMM0,XMM0
052d906f  MOVAPS xmmword ptr [RSP + 0xa0],XMM0
052d9077  MOV qword ptr [RSP + 0xb0],0x0
052d9083  LEA RDI,[RSP + 0xd0]
052d908b  LEA RDX,[RSP + 0xa0]
052d9093  CALL 0x0b04d0a0
052d9098  LEA RSI,[RSP + 0xd0]
052d90a0  MOV RDI,RBX
052d90a3  CALL 0x0c9c5280
052d90a8  TEST byte ptr [RSP + 0x138],0x1
052d90b0  JNZ 0x052d9445
052d90b6  TEST byte ptr [RSP + 0x118],0x1
052d90be  JNZ 0x052d946c
052d90c4  TEST byte ptr [RSP + 0x100],0x1
052d90cc  JNZ 0x052d9493
052d90d2  TEST byte ptr [RSP + 0xe8],0x1
052d90da  JNZ 0x052d94ba
052d90e0  TEST byte ptr [RSP + 0xd0],0x1
052d90e8  JNZ 0x052d94e1
052d90ee  TEST byte ptr [RSP + 0xa0],0x1
052d90f6  JNZ 0x052d9508
052d90fc  MOV CL,0x1
052d90fe  JMP 0x052d893c
052d9103  MOV EDX,0xfffffffc
052d9108  SUB EDX,dword ptr [RSP + 0x50]
052d910c  MOV qword ptr [RSP + 0xc8],RDX
052d9114  MOV qword ptr [RSP + 0xc0],R14
052d911c  JMP 0x052d9135
052d911e  MOV EDX,dword ptr [RSP + 0x44]
052d9122  INC EDX
052d9124  MOV dword ptr [RSP + 0x44],EDX
052d9128  CMP EDX,dword ptr [RSP + 0x9c]
052d912f  JZ 0x052d8916
052d9135  LEA EBX,[RCX + 0x3]
052d9138  JMP 0x052d9147
052d913a  MOV ECX,dword ptr [R14 + 0x4]
052d913e  LEA EDX,[RBX + -0x1]
052d9141  CMP EBX,ECX
052d9143  MOV EBX,EDX
052d9145  JL 0x052d911e
052d9147  MOV ESI,EAX
052d9149  SUB ESI,dword ptr [RSP + 0x50]
052d914d  ADD ESI,-0x3
052d9150  LEA EDX,[RAX + RBP*0x1]
052d9153  CMP ESI,EDX
052d9155  JG 0x052d913e
052d9157  MOV RCX,qword ptr [RSP + 0xc8]
052d915f  LEA R12D,[RCX + RAX*0x1]
052d9163  JMP 0x052d91ab
052d9170  XORPS XMM0,XMM0
052d9173  MOVAPS xmmword ptr [RSP + 0x20],XMM0
052d9178  MOVAPS xmmword ptr [RSP + 0x10],XMM0
052d917d  MOV qword ptr [RSP + 0x30],0x0
052d9186  MOV byte ptr [RSP + 0x30],0x1
052d918b  MOV RAX,qword ptr [R15]
052d918e  MOV RDI,R15
052d9191  MOV RSI,RSP
052d9194  LEA RDX,[RSP + 0x10]
052d9199  CALL qword ptr [RAX + 0x108]
052d919f  MOV EAX,dword ptr [R14 + 0x8]
052d91a3  LEA EDX,[RAX + RBP*0x1]
052d91a6  CMP R12D,EDX
052d91a9  JGE 0x052d913a
052d91ab  INC R12D
052d91ae  MOV EDI,dword ptr [RSP + 0x44]
052d91b2  MOV dword ptr [RSP],EDI
052d91b5  MOV dword ptr [RSP + 0x4],EBX
052d91b9  MOV dword ptr [RSP + 0x8],R12D
052d91be  MOV ECX,dword ptr [R14]
052d91c1  MOV ESI,ECX
052d91c3  SUB ESI,R13D
052d91c6  ADD ESI,-0x3
052d91c9  CMP EDI,ESI
052d91cb  JNZ 0x052d92b0
052d91d1  MOV RAX,qword ptr [R15]
052d91d4  MOV RDI,R15
052d91d7  CALL qword ptr [RAX + 0x110]
052d91dd  CWDE
052d91de  CMP EBX,EAX
052d91e0  JL 0x052d9217
052d91e2  MOV EAX,dword ptr [RSP]
052d91e5  MOV ECX,dword ptr [RSP + 0x4]
052d91e9  DEC ECX
052d91eb  MOV EDX,dword ptr [RSP + 0x8]
052d91ef  SHL RCX,0x20
052d91f3  OR RCX,RAX
052d91f6  MOV qword ptr [RSP + 0x10],RCX
052d91fb  MOV dword ptr [RSP + 0x18],EDX
052d91ff  MOV RAX,qword ptr [R15]
052d9202  MOV RDI,R15
052d9205  LEA RSI,[RSP + 0x10]
052d920a  CALL qword ptr [RAX + 0x60]
052d920d  CMP byte ptr [RAX + 0x5],0x0
052d9211  JZ 0x052d9170
052d9217  MOV RAX,qword ptr [R15]
052d921a  MOV RDI,R15
052d921d  MOV RSI,RSP
052d9220  CALL qword ptr [RAX + 0x60]
052d9223  CMP byte ptr [RAX + 0x5],0x1
052d9227  JNZ 0x052d919f
052d922d  MOV EAX,dword ptr [R14 + 0x4]
052d9231  DEC EAX
052d9233  CMP EBX,EAX
052d9235  JNZ 0x052d9300
052d923b  MOV RDI,qword ptr [RSP + 0x60]
052d9240  MOV RAX,qword ptr [RDI]
052d9243  MOV ESI,0x4
052d9248  CALL qword ptr [RAX + 0x18]
052d924b  TEST EAX,EAX
052d924d  JZ 0x052d9300
052d9253  MOV RAX,qword ptr [RSP + 0x80]
052d925b  MOV R13,qword ptr [RAX + 0x18]
052d925f  TEST R13,R13
052d9262  JZ 0x052d93bf
052d9268  MOV RDI,qword ptr [R13]
052d926c  MOV RAX,qword ptr [RDI]
052d926f  MOV RSI,RSP
052d9272  CALL qword ptr [RAX + 0x28]
052d9275  MOV qword ptr [RSP + 0x68],RAX
052d927a  MOV RDI,qword ptr [R13 + 0x8]
052d927e  MOV RSI,RSP
052d9281  CALL 0x0b5d6180
052d9286  TEST RAX,RAX
052d9289  JZ 0x052d9408
052d928f  MOV dword ptr [RAX + 0x20],0x3
052d9296  MOV RCX,qword ptr [RSP + 0x88]
052d929e  MOV qword ptr [RAX + 0x30],RCX
052d92a2  MOV R13,qword ptr [RSP + 0x48]
052d92a7  JMP 0x052d919f
052d92b0  SUB EAX,dword ptr [RSP + 0x50]
052d92b4  ADD EAX,-0x3
052d92b7  CMP R12D,EAX
052d92ba  JZ 0x052d91d1
052d92c0  MOV EAX,dword ptr [R14 + 0x4]
052d92c4  LEA ESI,[RAX + -0x1]
052d92c7  CMP EBX,ESI
052d92c9  JZ 0x052d91d1
052d92cf  CMP R12D,EDX
052d92d2  JZ 0x052d91d1
052d92d8  ADD ECX,dword ptr [RSP + 0x58]
052d92dc  CMP dword ptr [RSP + 0x44],ECX
052d92e0  JZ 0x052d91d1
052d92e6  ADD EAX,0x4
052d92e9  CMP EBX,EAX
052d92eb  JNZ 0x052d9170
052d92f1  JMP 0x052d91d1
052d9300  MOV RAX,qword ptr [RSP + 0x80]
052d9308  MOV R13,qword ptr [RAX + 0x18]
052d930c  TEST R13,R13
052d930f  JZ 0x052d934c
052d9311  MOV RDI,qword ptr [R13]
052d9315  MOV RAX,qword ptr [RDI]
052d9318  MOV R14,RSP
052d931b  MOV RSI,R14
052d931e  CALL qword ptr [RAX + 0x28]
052d9321  MOV qword ptr [RSP + 0x68],RAX
052d9326  MOV RDI,qword ptr [R13 + 0x8]
052d932a  MOV RSI,R14
052d932d  CALL 0x0b5d6180
052d9332  TEST RAX,RAX
052d9335  JZ 0x052d937a
052d9337  MOV dword ptr [RAX + 0x20],0x3
052d933e  MOV RCX,qword ptr [RSP + 0x90]
052d9346  MOV qword ptr [RAX + 0x30],RCX
052d934a  JMP 0x052d93ad
052d934c  XORPS XMM0,XMM0
052d934f  MOVAPS xmmword ptr [RSP + 0x20],XMM0
052d9354  MOVAPS xmmword ptr [RSP + 0x10],XMM0
052d9359  MOV qword ptr [RSP + 0x30],0x0
052d9362  MOV byte ptr [RSP + 0x30],0x1
052d9367  MOV RAX,qword ptr [R15]
052d936a  MOV RDI,R15
052d936d  MOV RSI,RSP
052d9370  MOV RDX,qword ptr [RSP + 0x90]
052d9378  JMP 0x052d93eb
052d937a  MOV RDI,qword ptr [R13 + 0x8]
052d937e  MOV dword ptr [RSP + 0x10],0x3
052d9386  MOV RAX,qword ptr [RSP + 0x68]
052d938b  MOV qword ptr [RSP + 0x18],RAX
052d9390  MOV RAX,qword ptr [RSP + 0x90]
052d9398  MOV qword ptr [RSP + 0x20],RAX
052d939d  MOV RSI,R14
052d93a0  MOV RDX,R14
052d93a3  LEA RCX,[RSP + 0x10]
052d93a8  CALL 0x0b5d6330
052d93ad  MOV R13,qword ptr [RSP + 0x48]
052d93b2  MOV R14,qword ptr [RSP + 0xc0]
052d93ba  JMP 0x052d919f
052d93bf  XORPS XMM0,XMM0
052d93c2  MOVAPS xmmword ptr [RSP + 0x20],XMM0
052d93c7  MOVAPS xmmword ptr [RSP + 0x10],XMM0
052d93cc  MOV qword ptr [RSP + 0x30],0x0
052d93d5  MOV byte ptr [RSP + 0x30],0x1
052d93da  MOV RAX,qword ptr [R15]
052d93dd  MOV RDI,R15
052d93e0  MOV RSI,RSP
052d93e3  MOV RDX,qword ptr [RSP + 0x88]
052d93eb  MOV ECX,0x3
052d93f0  XOR R8D,R8D
052d93f3  LEA R9,[RSP + 0x10]
052d93f8  CALL qword ptr [RAX + 0xf8]
052d93fe  MOV R13,qword ptr [RSP + 0x48]
052d9403  JMP 0x052d919f
052d9408  MOV RDI,qword ptr [R13 + 0x8]
052d940c  MOV dword ptr [RSP + 0x10],0x3
052d9414  MOV RAX,qword ptr [RSP + 0x68]
052d9419  MOV qword ptr [RSP + 0x18],RAX
052d941e  MOV RAX,qword ptr [RSP + 0x88]
052d9426  MOV qword ptr [RSP + 0x20],RAX
052d942b  MOV RDX,RSP
052d942e  MOV RSI,RDX
052d9431  LEA RCX,[RSP + 0x10]
052d9436  CALL 0x0b5d6330
052d943b  MOV R13,qword ptr [RSP + 0x48]
052d9440  JMP 0x052d919f
052d9445  MOV RSI,qword ptr [RSP + 0x138]
052d944d  MOV RDI,qword ptr [RSP + 0x148]
052d9455  AND RSI,-0x2
052d9459  CALL 0x0412a280
052d945e  TEST byte ptr [RSP + 0x118],0x1
052d9466  JZ 0x052d90c4
052d946c  MOV RSI,qword ptr [RSP + 0x118]
052d9474  MOV RDI,qword ptr [RSP + 0x128]
052d947c  AND RSI,-0x2
052d9480  CALL 0x0412a280
052d9485  TEST byte ptr [RSP + 0x100],0x1
052d948d  JZ 0x052d90d2
052d9493  MOV RSI,qword ptr [RSP + 0x100]
052d949b  MOV RDI,qword ptr [RSP + 0x110]
052d94a3  AND RSI,-0x2
052d94a7  CALL 0x0412a280
052d94ac  TEST byte ptr [RSP + 0xe8],0x1
052d94b4  JZ 0x052d90e0
052d94ba  MOV RSI,qword ptr [RSP + 0xe8]
052d94c2  MOV RDI,qword ptr [RSP + 0xf8]
052d94ca  AND RSI,-0x2
052d94ce  CALL 0x0412a280
052d94d3  TEST byte ptr [RSP + 0xd0],0x1
052d94db  JZ 0x052d90ee
052d94e1  MOV RSI,qword ptr [RSP + 0xd0]
052d94e9  MOV RDI,qword ptr [RSP + 0xe0]
052d94f1  AND RSI,-0x2
052d94f5  CALL 0x0412a280
052d94fa  TEST byte ptr [RSP + 0xa0],0x1
052d9502  JZ 0x052d90fc
052d9508  MOV RSI,qword ptr [RSP + 0xa0]
052d9510  MOV RDI,qword ptr [RSP + 0xb0]
052d9518  AND RSI,-0x2
052d951c  CALL 0x0412a280
052d9521  MOV CL,0x1
052d9523  JMP 0x052d893c
```

## `0527c430` — depth 1 from OverworldGenerator__decorationPostProcessChunk (root OverworldGenerator__decorationPostProcessChunk)

- Ghidra name: `FUN_0527c430`
- Body: `[[0527c430, 0527c467]]`

### Pseudocode

```c

/* WARNING: Possible PIC construction at 0x0527c453: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0527c430(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 in_RAX;
  long *plVar3;
  undefined8 uStack_10;
  
  plVar3 = (long *)*param_1;
  *param_1 = 0;
  if (plVar3 == (long *)0x0) {
    return in_RAX;
  }
  plVar1 = (long *)*plVar3;
  if (plVar1 != (long *)0x0) {
    plVar3[1] = (long)plVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x527c458;
    plVar3 = plVar1;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (plVar3 != (long *)0x0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,plVar3);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


```

### Assembly

```asm
0527c430  PUSH RBX
0527c431  MOV RBX,qword ptr [RDI]
0527c434  MOV qword ptr [RDI],0x0
0527c43b  TEST RBX,RBX
0527c43e  JZ 0x0527c466
0527c440  MOV RDI,qword ptr [RBX]
0527c443  TEST RDI,RDI
0527c446  JZ 0x0527c458
0527c448  MOV qword ptr [RBX + 0x8],RDI
0527c44c  MOV RSI,qword ptr [RBX + 0x10]
0527c450  SUB RSI,RDI
0527c453  CALL 0x0412a280
0527c458  MOV ESI,0x18
0527c45d  MOV RDI,RBX
0527c460  POP RBX
0527c461  JMP 0x0412a280
0527c466  POP RBX
0527c467  RET
```

## `0527aaa0` — depth 1 from OverworldGenerator__decorationPostProcessChunk (root OverworldGenerator__decorationPostProcessChunk)

- Ghidra name: `FUN_0527aaa0`
- Body: `[[0527aaa0, 0527aad8]]`

### Pseudocode

```c

/* WARNING: Possible PIC construction at 0x0527aac4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0527aaa0(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 in_RAX;
  long lVar3;
  undefined8 uStack_10;
  
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 == 0) {
    return in_RAX;
  }
  lVar1 = *(long *)(lVar3 + 0x40);
  if (lVar1 != 0) {
    *(long *)(lVar3 + 0x48) = lVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x527aac9;
    lVar3 = lVar1;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar3 != 0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,lVar3);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


```

### Assembly

```asm
0527aaa0  PUSH RBX
0527aaa1  MOV RBX,qword ptr [RDI]
0527aaa4  MOV qword ptr [RDI],0x0
0527aaab  TEST RBX,RBX
0527aaae  JZ 0x0527aad7
0527aab0  MOV RDI,qword ptr [RBX + 0x40]
0527aab4  TEST RDI,RDI
0527aab7  JZ 0x0527aac9
0527aab9  MOV qword ptr [RBX + 0x48],RDI
0527aabd  MOV RSI,qword ptr [RBX + 0x50]
0527aac1  SUB RSI,RDI
0527aac4  CALL 0x0412a280
0527aac9  MOV ESI,0x68
0527aace  MOV RDI,RBX
0527aad1  POP RBX
0527aad2  JMP 0x0412a280
0527aad7  POP RBX
0527aad8  RET
```

## `05286c70` — depth 1 from OverworldGeneratorMultinoise__generateDensityCellsForChunk (root OverworldGeneratorMultinoise__generateDensityCellsForChunk)

- Ghidra name: `OverworldGeneratorMultinoise__createNoiseCache_static`
- Body: `[[05286c70, 052871ae] [052871b0, 05287517]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OverworldGeneratorMultinoise__createNoiseCache_static
               (uint *param_1,ulong param_2,long param_3,long *param_4,undefined8 param_5)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auVar5 [12];
  long *plVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  float fVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long *in_FS_OFFSET;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulong uStack_170;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  float fStack_120;
  uint uStack_11c;
  int iStack_118;
  float fStack_114;
  float fStack_110;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  float fStack_f4;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_d8 [16];
  uint *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined4 *puStack_50;
  undefined1 auStack_48 [16];
  
  uStack_a8 = param_5;
  plStack_98 = param_4;
  if (PTR__ZTHN11ChunkSource17gPerfIsClientSideE_0f53c8c0 != (undefined *)0x0) {
    func_0x0eee3820();
  }
  uStack_68 = *(undefined1 *)(*in_FS_OFFSET + -0xb67);
  uStack_78 = &UNK_011b8ea4;
  uStack_70 = &UNK_01412d7a;
  lStack_60 = func_0x0417cc60();
  puStack_80 = &UNK_0f3ef960;
  uVar10 = (int)(param_2 >> 0x1c) >> 2 & 0xfffffffc;
  uVar21 = (ulong)uVar10;
  uVar18 = (int)param_2 * 4 - 2;
  uVar19 = (ulong)uVar18;
  uVar10 = uVar10 - 2;
  uStack_170 = (ulong)uVar10;
  *(ulong *)param_1 = CONCAT44(uVar10,uVar18);
  param_1[2] = 8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa00);
  uVar20 = uVar19;
  if (uVar11 == 0) goto LAB_05287507;
  do {
    iVar14 = (int)param_2 * 4;
    puStack_c0 = param_1 + 4;
    *(ulong *)(param_1 + 4) = uVar11;
    lVar17 = uVar11 + 0xa00;
    *(long *)(param_1 + 8) = lVar17;
    auStack_d8._0_8_ = uVar11;
    func_0x0eee2dd0(uVar11,0,0xa00);
    *(long *)(param_1 + 6) = lVar17;
    iVar4 = (int)uVar21;
    iStack_10c = iVar4 + 5;
    iStack_118 = iVar14 + 5;
    lStack_88 = param_3 + 0x2b8;
    lStack_a0 = param_3 + 0x150;
    lStack_90 = param_3 + 0x38;
    uVar16 = (long)(iVar14 + -4) + 2;
    uStack_b0 = (ulong)(iVar4 - 3);
    uStack_b8 = (long)iVar4 - 2;
    uVar10 = 8;
LAB_05286e20:
    uVar18 = (uint)uVar16;
    fStack_114 = (float)(int)uVar18 * _DAT_011987f8 * _DAT_01198790;
    uVar11 = uStack_b0 & 0xffffffff;
    uVar21 = uStack_b8;
    while( true ) {
      uVar19 = uVar21 << 0x20 | uVar16 & 0xffffffff;
      uStack_58 = uVar19;
      FUN_052580c0(&uStack_108,param_3,&uStack_58);
      uStack_128 = uStack_100;
      uStack_124 = uStack_f8;
      fStack_120 = ((float)((uint)((float)(uStack_fc & _DAT_014e7ba0) + _DAT_0119852c) &
                           _DAT_014e7ba0) + _DAT_011988a8) * _DAT_01198930;
      uStack_11c = uStack_fc;
      puStack_50 = &uStack_128;
      param_2 = uVar20;
      if ((ulong)*(uint *)(param_3 + 0x330) == 0xffffffff) break;
      uStack_130 = &puStack_50;
      fVar22 = (float)(**(code **)(&UNK_0ef53670 + (ulong)*(uint *)(param_3 + 0x330) * 8))
                                (&uStack_130,lStack_88);
      fVar23 = 0.0;
      uVar15 = (uint)uVar21;
      if (0.0 < fVar22) {
        fVar23 = (float)func_0x0d3414e0(fStack_114,lStack_a0);
        fVar23 = (float)(~-(uint)(0.0 < fVar23) & (uint)(fVar22 * _DAT_011986e0) |
                        (uint)fVar22 & -(uint)(0.0 < fVar23)) * fVar23;
      }
      uVar8 = uStack_108;
      uStack_f0._4_4_ = fVar23;
      uStack_e8 = func_0x0d3414e0(param_3);
      uStack_e4 = func_0x0d3414e0(uVar8,lStack_90);
      fVar9 = uStack_f0._4_4_;
      fVar23 = (float)uStack_f0;
      fVar22 = fStack_f4;
      auVar7._4_4_ = (float)uStack_f0;
      auVar7._0_4_ = fStack_f4;
      auVar7._8_4_ = uStack_f0._4_4_;
      auVar7._12_4_ = uStack_e8;
      auVar5._4_8_ = extraout_XMM1_Qb;
      auVar5._0_4_ = (float)uStack_f0;
      auVar27._0_8_ = auVar5._0_8_ << 0x20;
      auVar27._8_4_ = uStack_f0._4_4_;
      auVar27._12_4_ = uStack_e8;
      auVar28._8_8_ = auVar7._8_8_;
      auVar28._0_8_ = auVar27._8_8_;
      if (plStack_98 == (long *)0x0) {
        uStack_130 = (undefined4 **)CONCAT44((int)(uVar15 * 4) >> 4,(int)(uVar18 * 4) >> 4);
        FUN_0525af30(&uStack_128,uStack_a8,&uStack_130);
        plVar6 = (long *)CONCAT44(uStack_124,uStack_128);
        if (plVar6 == (long *)0x0) {
          plVar6 = (long *)CONCAT44(uStack_11c,fStack_120);
        }
        else {
          lVar12 = ((long)(int)uVar18 - (long)(int)plVar6[3]) * 0x660 + *plVar6;
          lVar17 = ((long)(int)uVar15 - (long)*(int *)((long)plVar6 + 0x1c)) * 0x198;
          fVar24 = *(float *)(lVar17 + 4 + lVar12);
          if ((fVar24 != _DAT_011987f4) || (NAN(fVar24) || NAN(_DAT_011987f4))) {
            fVar25 = *(float *)(lVar12 + lVar17) / _DAT_011988e8;
            fVar26 = _DAT_011983f0;
            if (fVar25 <= _DAT_011983f0) {
              fVar26 = fVar25;
            }
            fVar26 = (float)(~-(uint)(fVar25 < 0.0) & (uint)fVar26);
            auStack_d8 = ZEXT416((uint)(fVar26 * _DAT_01198af0 * fVar26 -
                                       (fVar26 + fVar26) * fVar26 * fVar26));
            fVar24 = (float)(int)(short)(int)fVar24 + _DAT_011986e0;
            fVar26 = (float)func_0x0eee37e0();
            fVar26 = (float)func_0x0eee37e0(fVar26 + _DAT_01198494);
            fVar24 = (fVar26 * _DAT_01198af0 * fVar26 +
                     (fVar24 + _DAT_011987cc) * _DAT_01198c60 +
                     (fVar24 + _DAT_01198854) * _DAT_01198930 * fVar26) /
                     ((fVar26 * _DAT_01198930 + _DAT_01198c60) * _DAT_01198c54);
            fVar22 = fVar24 + (float)auStack_d8._0_4_ * (fVar22 - fVar24);
            fVar23 = _UNK_014e91b4 + (float)auStack_d8._0_4_ * (fVar23 + _DAT_01198b48);
            auVar28._0_4_ = fVar9 * (float)auStack_d8._0_4_ + _DAT_011983fc;
            param_2 = uVar16;
          }
          plVar6 = (long *)CONCAT44(uStack_11c,fStack_120);
        }
        if (plVar6 != (long *)0x0) {
          LOCK();
          plVar1 = plVar6 + 1;
          lVar17 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar17 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            func_0x0412c2d0(plVar6);
            param_2 = uVar16;
          }
        }
        uStack_f0._4_4_ = auVar28._0_4_;
        uVar20 = (ulong)*param_1;
        uStack_170 = (ulong)param_1[1];
        uVar10 = param_1[2];
        lVar17 = *(long *)(param_1 + 6);
        lVar12 = *(long *)(param_1 + 4);
      }
      else {
        lVar12 = ((ulong)(uVar18 & 3) - (long)(int)plStack_98[3]) * 0x660 + *plStack_98;
        lVar13 = ((ulong)(uVar15 & 3) - (long)*(int *)((long)plStack_98 + 0x1c)) * 0x198;
        fVar24 = *(float *)(lVar13 + 4 + lVar12);
        if ((fVar24 != _DAT_011987f4) || (NAN(fVar24) || NAN(_DAT_011987f4))) {
          fVar25 = *(float *)(lVar12 + lVar13) / _DAT_011988e8;
          fVar26 = _DAT_011983f0;
          if (fVar25 <= _DAT_011983f0) {
            fVar26 = fVar25;
          }
          fVar26 = (float)(~-(uint)(fVar25 < 0.0) & (uint)fVar26);
          auStack_48 = ZEXT416((uint)(fVar26 * _DAT_01198af0 * fVar26 -
                                     (fVar26 + fVar26) * fVar26 * fVar26));
          fStack_110 = (float)(int)(short)(int)fVar24 + _DAT_011986e0;
          fVar24 = (float)func_0x0eee37e0();
          fVar24 = (float)func_0x0eee37e0(fVar24 + _DAT_01198494);
          fStack_f4 = (fVar24 * _DAT_01198af0 * fVar24 +
                      (fStack_110 + _DAT_011987cc) * _DAT_01198c60 +
                      (fStack_110 + _DAT_01198854) * _DAT_01198930 * fVar24) /
                      ((fVar24 * _DAT_01198930 + _DAT_01198c60) * _DAT_01198c54);
          fStack_f4 = fStack_f4 + (float)auStack_48._0_4_ * (fVar22 - fStack_f4);
          uStack_f0._0_4_ = _UNK_014e91b4 + (float)auStack_48._0_4_ * (fVar23 + _DAT_01198b48);
          auVar28._0_4_ = fVar9 * (float)auStack_48._0_4_ + _DAT_011983fc;
        }
        uStack_f0._4_4_ = auVar28._0_4_;
        lVar12 = auStack_d8._0_8_;
        fVar22 = fStack_f4;
        fVar23 = (float)uStack_f0;
      }
      uVar19 = ((uVar16 - (long)(int)uVar20) * (long)(int)uVar10 - (long)(int)uStack_170) + uVar21;
      fStack_f4 = fVar22;
      uStack_f0._0_4_ = fVar23;
      if ((ulong)((lVar17 - lVar12 >> 3) * -0x3333333333333333) <= uVar19) {
        func_0x0d309550();
        uVar19 = uVar20;
        break;
      }
      *(ulong *)(lVar12 + 0x20 + uVar19 * 0x28) = CONCAT44(uStack_e4,uStack_e8);
      puVar3 = (undefined8 *)(lVar12 + 0x10 + uVar19 * 0x28);
      *puVar3 = CONCAT44(fVar22,uStack_f8);
      puVar3[1] = CONCAT44(uStack_f0._4_4_,fVar23);
      auStack_d8._0_8_ = lVar12;
      puVar2 = (undefined4 *)(lVar12 + uVar19 * 0x28);
      *puVar2 = uStack_108;
      puVar2[1] = uStack_104;
      puVar2[2] = uStack_100;
      puVar2[3] = uStack_fc;
      uVar15 = (int)uVar11 + 1;
      uVar11 = (ulong)uVar15;
      uVar21 = uVar21 + 1;
      if (iStack_10c <= (int)uVar15) goto code_r0x0528748f;
    }
    func_0x04931450();
    uVar11 = uStack_170;
    uStack_170 = uVar16 & 0xffffffff;
LAB_05287507:
    func_0x0eec74c0(0xa00);
    uVar20 = uVar19;
  } while( true );
code_r0x0528748f:
  uVar16 = uVar16 + 1;
  if (iStack_118 <= (int)uVar18) {
    puStack_80 = &UNK_0f3ef960;
    uStack_108 = (undefined4)uStack_78;
    uStack_104 = uStack_78._4_4_;
    uStack_100 = (undefined4)uStack_70;
    uStack_fc = uStack_70._4_4_;
    uStack_f8 = CONCAT31(uStack_f8._1_3_,uStack_68);
    uStack_f0 = func_0x0417cc60();
    uStack_f0 = uStack_f0 - lStack_60;
    func_0x0cad8200(&uStack_108);
    return;
  }
  goto LAB_05286e20;
}


```

### Assembly

```asm
05286c70  PUSH RBP
05286c71  PUSH R15
05286c73  PUSH R14
05286c75  PUSH R13
05286c77  PUSH R12
05286c79  PUSH RBX
05286c7a  SUB RSP,0x148
05286c81  MOV qword ptr [RSP + 0xd0],R8
05286c89  MOV qword ptr [RSP + 0xe0],RCX
05286c91  MOV qword ptr [RSP + 0x40],RDX
05286c96  MOV R14,RSI
05286c99  MOV qword ptr [RSP + 0x30],RDI
05286c9e  CMP qword ptr [0x0f53c8c0],0x0
05286ca6  JZ 0x05286cad
05286ca8  CALL 0x0eee3820
05286cad  MOV RAX,qword ptr FS:[0x0]
05286cb9  MOVZX EAX,byte ptr [RAX + -0xb67]
05286cc0  LEA RCX,[0x11b8ea4]
05286cc7  MOV qword ptr [RSP + 0x100],RCX
05286ccf  LEA RCX,[0x1412d7a]
05286cd6  MOV qword ptr [RSP + 0x108],RCX
05286cde  MOV byte ptr [RSP + 0x110],AL
05286ce5  CALL 0x0417cc60
05286cea  MOV qword ptr [RSP + 0x118],RAX
05286cf2  LEA RAX,[0xf3ef960]
05286cf9  MOV qword ptr [RSP + 0xf8],RAX
05286d01  MOV RAX,R14
05286d04  SHR RAX,0x1c
05286d08  SAR EAX,0x2
05286d0b  AND EAX,0xfffffffc
05286d0e  LEA R13D,[-0x2 + R14*0x4]
05286d16  MOV R15,RAX
05286d19  ADD EAX,-0x2
05286d1c  MOV qword ptr [RSP + 0x8],RAX
05286d21  SHL RAX,0x20
05286d25  ADD RAX,R13
05286d28  MOV RCX,qword ptr [RSP + 0x30]
05286d2d  MOV qword ptr [RCX],RAX
05286d30  MOV dword ptr [RCX + 0x8],0x8
05286d37  XORPS XMM0,XMM0
05286d3a  MOVUPS xmmword ptr [RCX + 0x10],XMM0
05286d3e  MOV qword ptr [RCX + 0x20],0x0
05286d46  LEA RDI,[0xf5463b0]
05286d4d  MOV RAX,qword ptr [0x0f5463b0]
05286d54  MOV ESI,0xa00
05286d59  CALL qword ptr [RAX + 0x10]
05286d5c  MOV RBP,RAX
05286d5f  TEST RAX,RAX
05286d62  JZ 0x05287507
05286d68  LEA EBX,[R14*0x4]
05286d70  MOV R14,qword ptr [RSP + 0x30]
05286d75  LEA RAX,[R14 + 0x10]
05286d79  MOV qword ptr [RSP + 0xb8],RAX
05286d81  MOV qword ptr [R14 + 0x10],RBP
05286d85  MOV R12,RBP
05286d88  ADD R12,0xa00
05286d8f  MOV qword ptr [R14 + 0x20],R12
05286d93  MOV EDX,0xa00
05286d98  MOV qword ptr [RSP + 0xa0],RBP
05286da0  MOV RDI,RBP
05286da3  XOR ESI,ESI
05286da5  CALL 0x0eee2dd0
05286daa  MOV qword ptr [R14 + 0x18],R12
05286dae  LEA EAX,[R15 + 0x5]
05286db2  MOV dword ptr [RSP + 0x6c],EAX
05286db6  LEA EAX,[RBX + 0x5]
05286db9  MOV dword ptr [RSP + 0x60],EAX
05286dbd  MOV RCX,qword ptr [RSP + 0x40]
05286dc2  LEA RAX,[RCX + 0x2b8]
05286dc9  MOV qword ptr [RSP + 0xf0],RAX
05286dd1  LEA RAX,[RCX + 0x150]
05286dd8  MOV qword ptr [RSP + 0xd8],RAX
05286de0  LEA RAX,[RCX + 0x38]
05286de4  MOV qword ptr [RSP + 0xe8],RAX
05286dec  ADD EBX,-0x4
05286def  MOVSXD R8,EBX
05286df2  ADD R8,0x2
05286df6  MOVSXD RAX,R15D
05286df9  ADD R15D,-0x3
05286dfd  MOV qword ptr [RSP + 0xc8],R15
05286e05  ADD RAX,-0x2
05286e09  MOV qword ptr [RSP + 0xc0],RAX
05286e11  MOV EDI,0x8
05286e16  MOV RBP,qword ptr [RSP + 0x8]
05286e1b  NOP dword ptr [RAX + RAX*0x1]
05286e20  MOV ECX,R8D
05286e23  MOV qword ptr [RSP + 0x8],RCX
05286e28  XORPS XMM0,XMM0
05286e2b  CVTSI2SS XMM0,ECX
05286e2f  MULSS XMM0,dword ptr [0x011987f8]
05286e37  MULSS XMM0,dword ptr [0x01198790]
05286e3f  MOVSS dword ptr [RSP + 0x64],XMM0
05286e45  MOV R15,qword ptr [RSP + 0xc0]
05286e4d  MOV RAX,qword ptr [RSP + 0xc8]
05286e55  MOV EBX,EAX
05286e57  MOV qword ptr [RSP + 0x38],R8
05286e5c  NOP dword ptr [RAX]
05286e60  MOV dword ptr [RSP + 0x4],EDI
05286e64  MOV R14,R13
05286e67  MOV R13,R15
05286e6a  SHL R13,0x20
05286e6e  OR R13,qword ptr [RSP + 0x8]
05286e73  MOV qword ptr [RSP + 0x120],R13
05286e7b  LEA RDI,[RSP + 0x70]
05286e80  MOV RSI,qword ptr [RSP + 0x40]
05286e85  LEA RDX,[RSP + 0x120]
05286e8d  CALL 0x052580c0
05286e92  MOVSS XMM0,dword ptr [RSP + 0x80]
05286e9b  MOVSS XMM1,dword ptr [RSP + 0x78]
05286ea1  MOVSS XMM2,dword ptr [RSP + 0x7c]
05286ea7  MOVSS dword ptr [RSP + 0x50],XMM1
05286ead  MOVSS dword ptr [RSP + 0x54],XMM0
05286eb3  MOVAPS XMM0,XMM2
05286eb6  MOVAPS XMM1,xmmword ptr [0x014e7ba0]
05286ebd  ANDPS XMM0,XMM1
05286ec0  ADDSS XMM0,dword ptr [0x0119852c]
05286ec8  ANDPS XMM0,XMM1
05286ecb  ADDSS XMM0,dword ptr [0x011988a8]
05286ed3  MULSS XMM0,dword ptr [0x01198930]
05286edb  MOVSS dword ptr [RSP + 0x58],XMM0
05286ee1  MOVSS dword ptr [RSP + 0x5c],XMM2
05286ee7  LEA RAX,[RSP + 0x50]
05286eec  MOV qword ptr [RSP + 0x128],RAX
05286ef4  MOV RAX,qword ptr [RSP + 0x40]
05286ef9  MOV EAX,dword ptr [RAX + 0x330]
05286eff  MOV ECX,0xffffffff
05286f04  CMP RAX,RCX
05286f07  JZ 0x05287502
05286f0d  LEA RCX,[RSP + 0x128]
05286f15  MOV qword ptr [RSP + 0x48],RCX
05286f1a  LEA RDI,[RSP + 0x48]
05286f1f  MOV RSI,qword ptr [RSP + 0xf0]
05286f27  LEA RCX,[0xef53670]
05286f2e  CALL qword ptr [RCX + RAX*0x8]
05286f31  MOVAPS XMM3,XMM0
05286f34  SHR R13,0x20
05286f38  XORPS XMM1,XMM1
05286f3b  UCOMISS XMM0,XMM1
05286f3e  JBE 0x05286f95
05286f40  XORPS XMM2,XMM2
05286f43  CVTSI2SS XMM2,R13D
05286f48  MULSS XMM2,dword ptr [0x011987f8]
05286f50  MULSS XMM2,dword ptr [0x01198790]
05286f58  MOV RDI,qword ptr [RSP + 0xd8]
05286f60  MOVSS XMM0,dword ptr [RSP + 0x64]
05286f66  MOVAPS xmmword ptr [RSP + 0x10],XMM3
05286f6b  CALL 0x0d3414e0
05286f70  MOVAPS XMM3,xmmword ptr [RSP + 0x10]
05286f75  MOVAPS XMM2,XMM3
05286f78  MULSS XMM2,dword ptr [0x011986e0]
05286f80  XORPS XMM1,XMM1
05286f83  CMPLTSS XMM1,XMM0
05286f88  ANDPS XMM3,XMM1
05286f8b  ANDNPS XMM1,XMM2
05286f8e  ORPS XMM1,XMM3
05286f91  MULSS XMM1,XMM0
05286f95  MOVSS dword ptr [RSP + 0x8c],XMM1
05286f9e  MOVSS XMM0,dword ptr [RSP + 0x70]
05286fa4  MOVSS XMM2,dword ptr [RSP + 0x74]
05286faa  XORPS XMM1,XMM1
05286fad  MOV RDI,qword ptr [RSP + 0x40]
05286fb2  MOVSS dword ptr [RSP + 0x10],XMM0
05286fb8  MOVSS dword ptr [RSP + 0x20],XMM2
05286fbe  CALL 0x0d3414e0
05286fc3  MOVSS dword ptr [RSP + 0x90],XMM0
05286fcc  XORPS XMM1,XMM1
05286fcf  MOV RDI,qword ptr [RSP + 0xe8]
05286fd7  MOVSS XMM0,dword ptr [RSP + 0x10]
05286fdd  MOVSS XMM2,dword ptr [RSP + 0x20]
05286fe3  CALL 0x0d3414e0
05286fe8  MOVSS dword ptr [RSP + 0x94],XMM0
05286ff1  MOVUPS XMM3,xmmword ptr [RSP + 0x84]
05286ff9  MOVAPS XMM1,XMM3
05286ffc  UNPCKHPD XMM1,XMM3
05287000  MOV RDX,qword ptr [RSP + 0xe0]
05287008  TEST RDX,RDX
0528700b  JZ 0x052871b0
05287011  MOV RAX,qword ptr [RSP + 0x8]
05287016  AND EAX,0x3
05287019  AND R13D,0x3
0528701d  MOVSXD RCX,dword ptr [RDX + 0x18]
05287021  SUB RAX,RCX
05287024  MOVSXD RCX,dword ptr [RDX + 0x1c]
05287028  SUB R13,RCX
0528702b  IMUL RAX,RAX,0x660
05287032  ADD RAX,qword ptr [RDX]
05287035  IMUL RCX,R13,0x198
0528703c  MOVSS XMM0,dword ptr [RCX + RAX*0x1 + 0x4]
05287042  UCOMISS XMM0,dword ptr [0x011987f4]
05287049  JNZ 0x05287051
0528704b  JNP 0x05287196
05287051  ADD RAX,RCX
05287054  MOVAPS xmmword ptr [RSP + 0x10],XMM1
05287059  MOVSS XMM1,dword ptr [RAX]
0528705d  DIVSS XMM1,dword ptr [0x011988e8]
05287065  MOVSS XMM2,dword ptr [0x011983f0]
0528706d  MINSS XMM2,XMM1
05287071  XORPS XMM4,XMM4
05287074  CMPLTSS XMM1,XMM4
05287079  ANDNPS XMM1,XMM2
0528707c  MOVAPS XMM4,XMM1
0528707f  MOVSS XMM2,dword ptr [0x01198af0]
05287087  MULSS XMM4,XMM2
0528708b  MOVAPS XMM2,XMM1
0528708e  ADDSS XMM2,XMM1
05287092  MULSS XMM2,XMM1
05287096  MULSS XMM2,XMM1
0528709a  MULSS XMM4,XMM1
0528709e  SUBSS XMM4,XMM2
052870a2  MOVAPS xmmword ptr [RSP + 0x130],XMM4
052870aa  CVTTSS2SI EAX,XMM0
052870ae  CWDE
052870af  XORPS XMM0,XMM0
052870b2  CVTSI2SS XMM0,EAX
052870b6  ADDSS XMM0,dword ptr [0x011986e0]
052870be  MOVSS dword ptr [RSP + 0x68],XMM0
052870c4  MOVSS XMM1,dword ptr [0x01198494]
052870cc  MOVAPS xmmword ptr [RSP + 0x20],XMM3
052870d1  CALL 0x0eee37e0
052870d6  MOVSS XMM1,dword ptr [0x01198494]
052870de  ADDSS XMM0,XMM1
052870e2  CALL 0x0eee37e0
052870e7  MOVSS XMM4,dword ptr [RSP + 0x68]
052870ed  MOVAPS XMM1,XMM4
052870f0  ADDSS XMM1,dword ptr [0x011987cc]
052870f8  ADDSS XMM4,dword ptr [0x01198854]
05287100  MOVSS XMM3,dword ptr [0x01198930]
05287108  MULSS XMM4,XMM3
0528710c  MULSS XMM4,XMM0
05287110  MOVAPS XMM5,XMM4
05287113  MOVSS XMM4,dword ptr [0x01198c60]
0528711b  MULSS XMM1,XMM4
0528711f  ADDSS XMM1,XMM5
05287123  MOVAPS XMM2,XMM0
05287126  MULSS XMM2,dword ptr [0x01198af0]
0528712e  MULSS XMM2,XMM0
05287132  ADDSS XMM2,XMM1
05287136  MOVAPS XMM1,xmmword ptr [RSP + 0x10]
0528713b  MULSS XMM0,XMM3
0528713f  ADDSS XMM0,XMM4
05287143  MULSS XMM0,dword ptr [0x01198c54]
0528714b  DIVSS XMM2,XMM0
0528714f  MOVAPS XMM3,xmmword ptr [RSP + 0x20]
05287154  MOVAPS XMM0,XMM3
05287157  SUBSS XMM0,XMM2
0528715b  SHUFPS XMM3,XMM3,0x55
0528715f  ADDSS XMM3,dword ptr [0x01198b48]
05287167  UNPCKLPS XMM0,XMM3
0528716a  MOVAPS XMM3,xmmword ptr [RSP + 0x130]
05287172  MULSS XMM1,XMM3
05287176  SHUFPS XMM3,XMM3,0x0
0528717a  MULPS XMM3,XMM0
0528717d  MOVAPS XMM4,XMM3
05287180  MOVAPS XMM3,xmmword ptr [0x014e91b0]
05287187  MOVSS XMM3,XMM2
0528718b  ADDPS XMM3,XMM4
0528718e  ADDSS XMM1,dword ptr [0x011983fc]
05287196  MOV R8,qword ptr [RSP + 0x38]
0528719b  MOV R13,R14
0528719e  MOV RSI,qword ptr [RSP + 0xa0]
052871a6  MOV EDI,dword ptr [RSP + 0x4]
052871aa  JMP 0x05287406
052871b0  MOVAPS xmmword ptr [RSP + 0x20],XMM3
052871b5  MOVAPS xmmword ptr [RSP + 0x10],XMM1
052871ba  LEA EAX,[R13*0x4]
052871c2  MOV RCX,qword ptr [RSP + 0x8]
052871c7  LEA ECX,[RCX*0x4]
052871ce  SAR ECX,0x4
052871d1  MOV dword ptr [RSP + 0x48],ECX
052871d5  SAR EAX,0x4
052871d8  MOV dword ptr [RSP + 0x4c],EAX
052871dc  LEA RDI,[RSP + 0x50]
052871e1  MOV RSI,qword ptr [RSP + 0xd0]
052871e9  LEA RDX,[RSP + 0x48]
052871ee  CALL 0x0525af30
052871f3  MOV RAX,qword ptr [RSP + 0x50]
052871f8  TEST RAX,RAX
052871fb  JZ 0x05287399
05287201  MOVSXD RCX,dword ptr [RAX + 0x18]
05287205  MOVSXD RDX,dword ptr [RSP + 0x8]
0528720a  SUB RDX,RCX
0528720d  MOVSXD RCX,dword ptr [RAX + 0x1c]
05287211  MOVSXD RSI,R13D
05287214  SUB RSI,RCX
05287217  IMUL RCX,RDX,0x660
0528721e  ADD RCX,qword ptr [RAX]
05287221  IMUL RAX,RSI,0x198
05287228  MOVSS XMM0,dword ptr [RAX + RCX*0x1 + 0x4]
0528722e  UCOMISS XMM0,dword ptr [0x011987f4]
05287235  MOV R8,qword ptr [RSP + 0x38]
0528723a  MOVAPS XMM1,xmmword ptr [RSP + 0x10]
0528723f  MOVAPS XMM3,xmmword ptr [RSP + 0x20]
05287244  JNZ 0x0528724c
05287246  JNP 0x0528738d
0528724c  ADD RCX,RAX
0528724f  MOVSS XMM1,dword ptr [RCX]
05287253  DIVSS XMM1,dword ptr [0x011988e8]
0528725b  MOVSS XMM2,dword ptr [0x011983f0]
05287263  MINSS XMM2,XMM1
05287267  XORPS XMM4,XMM4
0528726a  CMPLTSS XMM1,XMM4
0528726f  ANDNPS XMM1,XMM2
05287272  MOVAPS XMM4,XMM1
05287275  MOVSS XMM2,dword ptr [0x01198af0]
0528727d  MULSS XMM4,XMM2
05287281  MOVAPS XMM2,XMM1
05287284  ADDSS XMM2,XMM1
05287288  MULSS XMM2,XMM1
0528728c  MULSS XMM2,XMM1
05287290  MULSS XMM4,XMM1
05287294  SUBSS XMM4,XMM2
05287298  MOVAPS xmmword ptr [RSP + 0xa0],XMM4
052872a0  CVTTSS2SI EAX,XMM0
052872a4  CWDE
052872a5  XORPS XMM0,XMM0
052872a8  CVTSI2SS XMM0,EAX
052872ac  ADDSS XMM0,dword ptr [0x011986e0]
052872b4  MOVSS dword ptr [RSP + 0x4],XMM0
052872ba  MOVSS XMM1,dword ptr [0x01198494]
052872c2  MOV R14,R8
052872c5  CALL 0x0eee37e0
052872ca  MOVSS XMM1,dword ptr [0x01198494]
052872d2  ADDSS XMM0,XMM1
052872d6  CALL 0x0eee37e0
052872db  MOV R8,R14
052872de  MOVSS XMM4,dword ptr [RSP + 0x4]
052872e4  MOVAPS XMM1,XMM4
052872e7  ADDSS XMM1,dword ptr [0x011987cc]
052872ef  ADDSS XMM4,dword ptr [0x01198854]
052872f7  MOVSS XMM3,dword ptr [0x01198930]
052872ff  MULSS XMM4,XMM3
05287303  MULSS XMM4,XMM0
05287307  MOVAPS XMM5,XMM4
0528730a  MOVSS XMM4,dword ptr [0x01198c60]
05287312  MULSS XMM1,XMM4
05287316  ADDSS XMM1,XMM5
0528731a  MOVAPS XMM2,XMM0
0528731d  MULSS XMM2,dword ptr [0x01198af0]
05287325  MULSS XMM2,XMM0
05287329  ADDSS XMM2,XMM1
0528732d  MOVAPS XMM1,xmmword ptr [RSP + 0x10]
05287332  MULSS XMM0,XMM3
05287336  ADDSS XMM0,XMM4
0528733a  MULSS XMM0,dword ptr [0x01198c54]
05287342  DIVSS XMM2,XMM0
05287346  MOVAPS XMM3,xmmword ptr [RSP + 0x20]
0528734b  MOVAPS XMM0,XMM3
0528734e  SUBSS XMM0,XMM2
05287352  SHUFPS XMM3,XMM3,0x55
05287356  ADDSS XMM3,dword ptr [0x01198b48]
0528735e  UNPCKLPS XMM0,XMM3
05287361  MOVAPS XMM3,xmmword ptr [RSP + 0xa0]
05287369  MULSS XMM1,XMM3
0528736d  SHUFPS XMM3,XMM3,0x0
05287371  MULPS XMM3,XMM0
05287374  MOVAPS XMM4,XMM3
05287377  MOVAPS XMM3,xmmword ptr [0x014e91b0]
0528737e  MOVSS XMM3,XMM2
05287382  ADDPS XMM3,XMM4
05287385  ADDSS XMM1,dword ptr [0x011983fc]
0528738d  MOV RBP,qword ptr [RSP + 0x58]
05287392  TEST RBP,RBP
05287395  JNZ 0x052873b2
05287397  JMP 0x052873f0
05287399  MOV R8,qword ptr [RSP + 0x38]
0528739e  MOVAPS XMM1,xmmword ptr [RSP + 0x10]
052873a3  MOVAPS XMM3,xmmword ptr [RSP + 0x20]
052873a8  MOV RBP,qword ptr [RSP + 0x58]
052873ad  TEST RBP,RBP
052873b0  JZ 0x052873f0
052873b2  MOV RAX,-0x1
052873b9  XADD.LOCK qword ptr [RBP + 0x8],RAX
052873bf  TEST RAX,RAX
052873c2  JNZ 0x052873f0
052873c4  MOV RAX,qword ptr [RBP]
052873c8  MOV RDI,RBP
052873cb  MOVAPS xmmword ptr [RSP + 0x10],XMM1
052873d0  MOVAPS xmmword ptr [RSP + 0x20],XMM3
052873d5  MOV R14,R8
052873d8  CALL qword ptr [RAX + 0x10]
052873db  MOV RDI,RBP
052873de  CALL 0x0412c2d0
052873e3  MOV R8,R14
052873e6  MOVAPS XMM3,xmmword ptr [RSP + 0x20]
052873eb  MOVAPS XMM1,xmmword ptr [RSP + 0x10]
052873f0  MOV RAX,qword ptr [RSP + 0x30]
052873f5  MOV R13D,dword ptr [RAX]
052873f8  MOV EBP,dword ptr [RAX + 0x4]
052873fb  MOV EDI,dword ptr [RAX + 0x8]
052873fe  MOV R12,qword ptr [RAX + 0x18]
05287402  MOV RSI,qword ptr [RAX + 0x10]
05287406  MOVLPS qword ptr [RSP + 0x84],XMM3
0528740e  MOVSS dword ptr [RSP + 0x8c],XMM1
05287417  MOVSXD RCX,EDI
0528741a  MOVSXD RDX,R13D
0528741d  MOV RAX,R8
05287420  SUB RAX,RDX
05287423  IMUL RAX,RCX
05287427  MOVSXD RCX,EBP
0528742a  SUB RAX,RCX
0528742d  ADD RAX,R15
05287430  MOV RCX,R12
05287433  SUB RCX,RSI
05287436  SAR RCX,0x3
0528743a  MOV RDX,-0x3333333333333333
05287444  IMUL RCX,RDX
05287448  CMP RAX,RCX
0528744b  JNC 0x052874fd
05287451  LEA RAX,[RAX + RAX*0x4]
05287455  MOV RCX,qword ptr [RSP + 0x90]
0528745d  MOV qword ptr [RSI + RAX*0x8 + 0x20],RCX
05287462  MOVUPS XMM0,xmmword ptr [RSP + 0x70]
05287467  MOVUPS XMM1,xmmword ptr [RSP + 0x80]
0528746f  MOVUPS xmmword ptr [RSI + RAX*0x8 + 0x10],XMM1
05287474  MOV qword ptr [RSP + 0xa0],RSI
0528747c  MOVUPS xmmword ptr [RSI + RAX*0x8],XMM0
05287480  INC EBX
05287482  INC R15
05287485  CMP EBX,dword ptr [RSP + 0x6c]
05287489  JL 0x05286e60
0528748f  INC R8
05287492  MOV RAX,qword ptr [RSP + 0x8]
05287497  CMP EAX,dword ptr [RSP + 0x60]
0528749b  JL 0x05286e20
052874a1  LEA RAX,[0xf3ef960]
052874a8  MOV qword ptr [RSP + 0xf8],RAX
052874b0  MOVUPS XMM0,xmmword ptr [RSP + 0x100]
052874b8  MOVAPS xmmword ptr [RSP + 0x70],XMM0
052874bd  MOVZX EAX,byte ptr [RSP + 0x110]
052874c5  MOV byte ptr [RSP + 0x80],AL
052874cc  CALL 0x0417cc60
052874d1  SUB RAX,qword ptr [RSP + 0x118]
052874d9  MOV qword ptr [RSP + 0x88],RAX
052874e1  LEA RDI,[RSP + 0x70]
052874e6  CALL 0x0cad8200
052874eb  ADD RSP,0x148
052874f2  POP RBX
052874f3  POP R12
052874f5  POP R13
052874f7  POP R14
052874f9  POP R15
052874fb  POP RBP
052874fc  RET
052874fd  CALL 0x0d309550
05287502  CALL 0x04931450
05287507  MOV EDI,0xa00
0528750c  XOR ESI,ESI
0528750e  CALL 0x0eec74c0
05287513  JMP 0x05286d68
```

## `05268e90` — depth 1 from OverworldGeneratorMultinoise__generateDensityCellsForChunk (root OverworldGeneratorMultinoise__generateDensityCellsForChunk)

- Ghidra name: `FUN_05268e90`
- Body: `[[05268e90, 052690fd]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05268e90(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  *(undefined8 *)(param_1 + 0x3050) = 0;
  *(undefined8 *)(param_1 + 0x3058) = 0;
  *(undefined8 *)(param_1 + 0x3040) = 0;
  *(undefined8 *)(param_1 + 0x3048) = 0;
  *(undefined8 *)(param_1 + 0x3030) = 0;
  *(undefined8 *)(param_1 + 0x3038) = 0;
  *(undefined8 *)(param_1 + 0x3020) = 0;
  *(undefined8 *)(param_1 + 0x3028) = 0;
  *(undefined8 *)(param_1 + 0x3010) = 0;
  *(undefined8 *)(param_1 + 0x3018) = 0;
  *(undefined4 *)(param_1 + 0x3060) = 0;
  *(undefined8 *)(param_1 + 0x3068) = 0;
  *(undefined8 *)(param_1 + 0x3070) = 0;
  *(undefined8 *)(param_1 + 0x3078) = 0;
  *(undefined8 *)(param_1 + 0x3080) = 0;
  *(undefined8 *)(param_1 + 0x3088) = 0;
  *(undefined8 *)(param_1 + 0x3090) = 0;
  *(undefined8 *)(param_1 + 0x3098) = 0;
  *(undefined8 *)(param_1 + 0x30a0) = 0;
  *(undefined8 *)(param_1 + 0x30a8) = 0;
  *(undefined8 *)(param_1 + 0x30b0) = 0;
  *(undefined4 *)(param_1 + 0x30b8) = 0;
  *(undefined8 *)(param_1 + 0x30c0) = 0;
  *(undefined8 *)(param_1 + 0x30c8) = 0;
  *(undefined8 *)(param_1 + 0x30d0) = 0;
  *(undefined8 *)(param_1 + 0x30d8) = 0;
  *(undefined8 *)(param_1 + 0x30e0) = 0;
  *(undefined8 *)(param_1 + 0x30e8) = 0;
  *(undefined8 *)(param_1 + 0x30f0) = 0;
  *(undefined8 *)(param_1 + 0x30f8) = 0;
  *(undefined8 *)(param_1 + 0x3100) = 0;
  *(undefined8 *)(param_1 + 0x3108) = 0;
  *(undefined4 *)(param_1 + 0x3110) = 0;
  *(undefined8 *)(param_1 + 0x3118) = param_2;
  uVar3 = func_0x0cc41df0(0xf6ff9e0,0xf71a5f8,1);
  *(undefined8 *)(param_1 + 0x3120) = uVar3;
  uVar3 = func_0x0cc41df0(0xf6ff9e0,0xf71a8a0,1);
  *(undefined8 *)(param_1 + 0x3128) = uVar3;
  uVar3 = func_0x0cc41df0(0xf6ff9e0,0xf71c328,1);
  *(undefined8 *)(param_1 + 0x3130) = uVar3;
  *(undefined8 *)(param_1 + 0x3138) = 0x3200000000;
  uVar3 = func_0x0cc41df0(0xf6ff9e0,0xf71a670,1);
  *(undefined8 *)(param_1 + 0x3140) = uVar3;
  uVar3 = func_0x0cc41df0(0xf6ff9e0,0xf71a8f0,1);
  *(undefined8 *)(param_1 + 0x3148) = uVar3;
  uVar3 = func_0x0cc41df0(0xf6ff9e0,0xf71a490,1);
  *(undefined8 *)(param_1 + 0x3150) = uVar3;
  *(undefined8 *)(param_1 + 0x3158) = 0xfffffff8ffffffc4;
  uVar2 = _UNK_014ea7c8;
  uVar3 = _DAT_014ea7c0;
  lVar4 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x10 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x20 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x30 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x40 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x50 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x60 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x70 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    lVar4 = lVar4 + 0x20;
  } while (lVar4 != 0x400);
  *(undefined4 *)(param_1 + 0x1000) = 0x3f800000;
  lVar4 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + 0x1004 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x1014 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x1024 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x1034 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x1044 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x1054 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x1064 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x1074 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    lVar4 = lVar4 + 0x20;
  } while (lVar4 != 0x400);
  *(undefined4 *)(param_1 + 0x2004) = 0x3f800000;
  lVar4 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + 0x2008 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x2018 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x2028 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x2038 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x2048 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x2058 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x2068 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    puVar1 = (undefined8 *)(param_1 + 0x2078 + lVar4 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    lVar4 = lVar4 + 0x20;
  } while (lVar4 != 0x400);
  *(undefined4 *)(param_1 + 0x3008) = 0x3f800000;
  return;
}


```

### Assembly

```asm
05268e90  PUSH R14
05268e92  PUSH RBX
05268e93  PUSH RAX
05268e94  MOV RBX,RDI
05268e97  XORPS XMM0,XMM0
05268e9a  MOVUPS xmmword ptr [RDI + 0x3050],XMM0
05268ea1  MOVUPS xmmword ptr [RDI + 0x3040],XMM0
05268ea8  MOVUPS xmmword ptr [RDI + 0x3030],XMM0
05268eaf  MOVUPS xmmword ptr [RDI + 0x3020],XMM0
05268eb6  MOVUPS xmmword ptr [RDI + 0x3010],XMM0
05268ebd  MOV dword ptr [RDI + 0x3060],0x0
05268ec7  MOVUPS xmmword ptr [RDI + 0x3068],XMM0
05268ece  MOVUPS xmmword ptr [RDI + 0x3078],XMM0
05268ed5  MOVUPS xmmword ptr [RDI + 0x3088],XMM0
05268edc  MOVUPS xmmword ptr [RDI + 0x3098],XMM0
05268ee3  MOVUPS xmmword ptr [RDI + 0x30a8],XMM0
05268eea  MOV dword ptr [RDI + 0x30b8],0x0
05268ef4  MOVUPS xmmword ptr [RDI + 0x30c0],XMM0
05268efb  MOVUPS xmmword ptr [RDI + 0x30d0],XMM0
05268f02  MOVUPS xmmword ptr [RDI + 0x30e0],XMM0
05268f09  MOVUPS xmmword ptr [RDI + 0x30f0],XMM0
05268f10  MOVUPS xmmword ptr [RDI + 0x3100],XMM0
05268f17  MOV dword ptr [RDI + 0x3110],0x0
05268f21  MOV qword ptr [RDI + 0x3118],RSI
05268f28  LEA R14,[0xf6ff9e0]
05268f2f  LEA RSI,[0xf71a5f8]
05268f36  MOV RDI,R14
05268f39  MOV EDX,0x1
05268f3e  CALL 0x0cc41df0
05268f43  MOV qword ptr [RBX + 0x3120],RAX
05268f4a  LEA RSI,[0xf71a8a0]
05268f51  MOV RDI,R14
05268f54  MOV EDX,0x1
05268f59  CALL 0x0cc41df0
05268f5e  MOV qword ptr [RBX + 0x3128],RAX
05268f65  LEA RSI,[0xf71c328]
05268f6c  MOV RDI,R14
05268f6f  MOV EDX,0x1
05268f74  CALL 0x0cc41df0
05268f79  MOV qword ptr [RBX + 0x3130],RAX
05268f80  MOV RAX,0x3200000000
05268f8a  MOV qword ptr [RBX + 0x3138],RAX
05268f91  LEA RSI,[0xf71a670]
05268f98  MOV RDI,R14
05268f9b  MOV EDX,0x1
05268fa0  CALL 0x0cc41df0
05268fa5  MOV qword ptr [RBX + 0x3140],RAX
05268fac  LEA RSI,[0xf71a8f0]
05268fb3  MOV RDI,R14
05268fb6  MOV EDX,0x1
05268fbb  CALL 0x0cc41df0
05268fc0  MOV qword ptr [RBX + 0x3148],RAX
05268fc7  LEA RSI,[0xf71a490]
05268fce  MOV RDI,R14
05268fd1  MOV EDX,0x1
05268fd6  CALL 0x0cc41df0
05268fdb  MOV qword ptr [RBX + 0x3150],RAX
05268fe2  MOV RAX,-0x70000003c
05268fec  MOV qword ptr [RBX + 0x3158],RAX
05268ff3  XOR EAX,EAX
05268ff5  MOVAPS XMM0,xmmword ptr [0x014ea7c0]
05268ffc  NOP dword ptr [RAX]
05269000  MOVUPS xmmword ptr [RBX + RAX*0x4],XMM0
05269004  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x10],XMM0
05269009  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x20],XMM0
0526900e  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x30],XMM0
05269013  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x40],XMM0
05269018  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x50],XMM0
0526901d  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x60],XMM0
05269022  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x70],XMM0
05269027  ADD RAX,0x20
0526902b  CMP RAX,0x400
05269031  JNZ 0x05269000
05269033  MOV dword ptr [RBX + 0x1000],0x3f800000
0526903d  XOR EAX,EAX
0526903f  NOP
05269040  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x1004],XMM0
05269048  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x1014],XMM0
05269050  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x1024],XMM0
05269058  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x1034],XMM0
05269060  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x1044],XMM0
05269068  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x1054],XMM0
05269070  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x1064],XMM0
05269078  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x1074],XMM0
05269080  ADD RAX,0x20
05269084  CMP RAX,0x400
0526908a  JNZ 0x05269040
0526908c  MOV dword ptr [RBX + 0x2004],0x3f800000
05269096  XOR EAX,EAX
05269098  NOP dword ptr [RAX + RAX*0x1]
052690a0  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x2008],XMM0
052690a8  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x2018],XMM0
052690b0  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x2028],XMM0
052690b8  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x2038],XMM0
052690c0  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x2048],XMM0
052690c8  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x2058],XMM0
052690d0  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x2068],XMM0
052690d8  MOVUPS xmmword ptr [RBX + RAX*0x4 + 0x2078],XMM0
052690e0  ADD RAX,0x20
052690e4  CMP RAX,0x400
052690ea  JNZ 0x052690a0
052690ec  MOV dword ptr [RBX + 0x3008],0x3f800000
052690f6  ADD RSP,0x8
052690fa  POP RBX
052690fb  POP R14
052690fd  RET
```

## `05287930` — depth 1 from OverworldGeneratorMultinoise__generateDensityCellsForChunk (root OverworldGeneratorMultinoise__generateDensityCellsForChunk)

- Ghidra name: `OverworldGeneratorMultinoise___generateDensityCellsForChunk`
- Body: `[[05287930, 05287c2c] [05287c30, 05287cca] [05287cd0, 05287e2c] [05287e30, 05287eec] [05287ef0, 0528815e] [05288160, 05288407] [05288410, 05288459]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OverworldGeneratorMultinoise___generateDensityCellsForChunk
               (long param_1,long param_2,int param_3,int param_4,undefined8 param_5,long *param_6,
               long param_7)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 extraout_XMM0_Qb_00;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 in_stack_ffffffffffffce68 [16];
  undefined8 uStack_3168;
  float fStack_3160;
  float fStack_3158;
  float fStack_3154;
  int iStack_3150;
  int iStack_314c;
  undefined1 auStack_3148 [16];
  long lStack_3130;
  long *plStack_3128;
  int iStack_3120;
  int iStack_311c;
  long *plStack_3118;
  float fStack_3110;
  undefined4 uStack_310c;
  undefined1 auStack_3108 [16];
  undefined1 auStack_30f8 [16];
  ulong uStack_30e8;
  long lStack_30e0;
  long *plStack_30d8;
  long lStack_30d0;
  ulong uStack_30c8;
  undefined8 uStack_30c0;
  long lStack_30b8;
  long lStack_30b0;
  long lStack_30a8;
  long lStack_30a0;
  long lStack_3098;
  long lStack_3090;
  long lStack_3088;
  long lStack_3080;
  undefined1 *puStack_3078;
  long lStack_3070;
  undefined8 uStack_3068;
  undefined8 uStack_3058;
  undefined8 uStack_3040;
  float fStack_3038;
  undefined8 uStack_2038;
  float fStack_2030;
  undefined1 auStack_1034 [4100];
  undefined8 extraout_XMM0_Qb;
  
  plStack_3128 = param_6;
  lStack_30d0 = param_1;
  uStack_30c0 = param_5;
  func_0x0eee2dd0(param_1,0,0x1004);
  uStack_30e8 = (ulong)(uint)(param_3 << 2);
  uStack_30c8 = (ulong)(uint)(param_4 << 2);
  iVar2 = (int)*(short *)(*(long *)(param_2 + 0x28) + 0xa8);
  iVar6 = iVar2 >> 0x1f;
  iVar2 = iVar6 - iVar2;
  iVar3 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  fStack_3160 = (float)(param_4 << 2);
  uStack_3168 = CONCAT44((float)(iVar6 - (iVar3 >> 3)),(float)(param_3 << 2));
  func_0x0eee2dd0(auStack_1034,0,0x1004);
  lVar9 = (long)*(int *)(param_2 + 0x240);
  if (0 < lVar9) {
    lVar14 = *(long *)(param_2 + 0x248);
    auVar19 = ZEXT416((uint)_DAT_011983f0);
    do {
      fStack_2030 = auVar19._0_4_ * _DAT_014e8d20;
      uStack_2038 = CONCAT44(auVar19._0_4_ * _UNK_014e8d24,fStack_2030);
      in_stack_ffffffffffffce68 = auVar19;
      func_0x0d33ef10(lVar14,auStack_1034,&uStack_3168,5,0x29,5,&uStack_2038,1,1,1,auVar19);
      auVar19._4_12_ = in_stack_ffffffffffffce68._4_12_;
      auVar19._0_4_ = in_stack_ffffffffffffce68._0_4_ * _DAT_011986e0;
      lVar14 = lVar14 + 0x818;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  func_0x0eee2dd0(&uStack_2038,0,0x1004);
  lVar9 = (long)*(int *)(param_2 + 0x1f0);
  if (0 < lVar9) {
    lVar14 = *(long *)(param_2 + 0x1f8);
    fVar16 = _DAT_011983f0;
    do {
      in_stack_ffffffffffffce68._0_4_ = fVar16;
      fStack_3038 = fVar16 * _DAT_01198354;
      uStack_3040 = CONCAT44(fStack_3038,fStack_3038);
      func_0x0d33ef10(lVar14,&uStack_2038,&uStack_3168,5,0x29,5,&uStack_3040,1,1,1);
      fVar16 = in_stack_ffffffffffffce68._0_4_ * _DAT_011986e0;
      lVar14 = lVar14 + 0x818;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  func_0x0eee2dd0(&uStack_3040,0,0x1004);
  lVar9 = (long)*(int *)(param_2 + 0x218);
  if (0 < lVar9) {
    lVar14 = *(long *)(param_2 + 0x220);
    fVar16 = _DAT_011983f0;
    do {
      in_stack_ffffffffffffce68._0_4_ = fVar16;
      fStack_3110 = fVar16 * _DAT_01198354;
      plStack_3118 = (long *)CONCAT44(fStack_3110,fStack_3110);
      func_0x0d33ef10(lVar14,&uStack_3040,&uStack_3168,5,0x29,5,&plStack_3118,1,1,1);
      fVar16 = in_stack_ffffffffffffce68._0_4_ * _DAT_011986e0;
      lVar14 = lVar14 + 0x818;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  plStack_30d8 = plStack_3128 + 0x2e;
  lStack_30e0 = 0;
  lVar9 = 0;
  do {
    fStack_3158 = ((float)((uint)lStack_30e0 & 0xff) + (float)uStack_3168) * _DAT_011987f8;
    auStack_30f8 = ZEXT416((uint)fStack_3158);
    iVar3 = (int)uStack_30e8 + (uint)lStack_30e0;
    fStack_3158 = fStack_3158 * _DAT_0119858c;
    iStack_3150 = iVar3 * 4 >> 4;
    lStack_3130 = (long)iVar3;
    lStack_30a8 = 0;
    do {
      iVar3 = (int)uStack_30c8 + (uint)lStack_30a8;
      lStack_30a0 = (long)iVar3;
      fStack_3154 = ((float)((uint)lStack_30a8 & 0xff) + fStack_3160) * _DAT_011987f8 *
                    _DAT_0119858c;
      lStack_30b0 = (long)(int)lVar9;
      iStack_314c = iVar3 * 4 >> 4;
      lStack_3070 = lStack_30d0 + lStack_30b0 * 4;
      lStack_3088 = (long)plStack_30d8 + lStack_30b0 * 4;
      lStack_3090 = param_7 + lStack_30b0 * 4;
      puStack_3078 = auStack_1034 + lStack_30b0 * 4;
      lStack_3098 = (long)&uStack_3040 + lStack_30b0 * 4;
      lStack_3080 = (long)&uStack_2038 + lStack_30b0 * 4;
      iVar3 = -8;
      uVar10 = 0;
      lStack_30b8 = lVar9;
      do {
        fVar16 = (float)((uint)uVar10 & 0xff);
        auStack_3148._0_4_ = fVar16;
        auVar19 = ZEXT416((uint)((uStack_3168._4_4_ + fVar16) * _DAT_01198494));
        iVar6 = (int)*(short *)(*(long *)(param_2 + 0x28) + 0xa8);
        iVar12 = iVar6 >> 0x1f;
        iVar6 = iVar12 - iVar6;
        iVar2 = iVar6 + 7;
        if (-1 < iVar6) {
          iVar2 = iVar6;
        }
        auVar20._0_8_ = Cavifier__carve(*(undefined8 *)(param_2 + 0xc90),uVar10 & 0xffffffff);
        auVar20._8_8_ = extraout_XMM0_Qb;
        iVar8 = (int)*(short *)(*(long *)(param_2 + 0x28) + 0xaa);
        iVar4 = iVar8 >> 0x1f;
        iVar8 = iVar4 - iVar8;
        iVar6 = iVar8 + 7;
        if (-1 < iVar8) {
          iVar6 = iVar8;
        }
        iVar7 = (int)*(short *)(*(long *)(param_2 + 0x28) + 0xa8);
        iVar11 = iVar7 >> 0x1f;
        iVar7 = iVar11 - iVar7;
        iVar8 = iVar7 + 7;
        if (-1 < iVar7) {
          iVar8 = iVar7;
        }
        fVar16 = (float)((iVar4 - (iVar6 >> 3)) + ((iVar8 >> 3) - iVar11) + iVar3) * _DAT_011986e0;
        auVar21 = ZEXT416((uint)_DAT_01198aa4);
        if ((0.0 <= fVar16) && (auVar21 = auVar20, fVar16 <= _DAT_011983f0)) {
          auVar21._4_12_ = auVar20._4_12_;
          auVar21._0_4_ = ((float)auVar20._0_8_ + _DAT_01198400) * fVar16 + _DAT_01198aa4;
        }
        uVar15 = -(uint)(_DAT_011983f0 < (float)auStack_3148._0_4_ / _DAT_01198af0);
        auVar23._0_4_ =
             ~uVar15 & (uint)((auVar21._0_4_ + _DAT_01198c1c) *
                              ((float)auStack_3148._0_4_ / _DAT_01198af0) + _DAT_01198358);
        auVar23._4_4_ = auVar21._4_4_;
        auVar23._8_4_ = auVar21._8_4_;
        auVar23._12_4_ = auVar21._12_4_;
        auStack_3148 = ZEXT416(uVar15 & (uint)auVar21._0_4_) | auVar23;
        iStack_3120 = iStack_3150;
        iStack_311c = iStack_314c;
        FUN_0525af30(&plStack_3118,*(undefined8 *)(param_2 + 0xca8),&iStack_3120);
        if (plStack_3118 == (long *)0x0) {
LAB_05288150:
          if (CONCAT44(uStack_310c,fStack_3110) != 0) goto LAB_05288175;
LAB_0528818b:
          if (_DAT_01198730 <= (float)auStack_3148._0_4_) {
LAB_0528819d:
            fVar17 = (float)func_0x0d3414e0(*(undefined8 *)(param_7 + 0x3118));
            lVar9 = lStack_3090;
            fVar16 = _DAT_011983f0;
            if (fVar17 <= _DAT_011983f0) {
              fVar16 = fVar17;
            }
            *(uint *)(lStack_3090 + uVar10 * 4) =
                 -(uint)(fVar17 < _DAT_011985d4) & (uint)_DAT_011985d4 |
                 ~-(uint)(fVar17 < _DAT_011985d4) & (uint)fVar16;
            auStack_3108._4_12_ = auVar19._4_12_;
            auStack_3108._0_4_ = auVar19._0_4_ * _DAT_011987f8;
            fVar17 = (float)func_0x0d3414e0(*(long *)(param_7 + 0x3118) + 0x38);
            fVar16 = _DAT_011983f0;
            if (fVar17 <= _DAT_011983f0) {
              fVar16 = fVar17;
            }
            *(uint *)(lVar9 + 0x1004 + uVar10 * 4) =
                 -(uint)(fVar17 < _DAT_011985d4) & (uint)_DAT_011985d4 |
                 ~-(uint)(fVar17 < _DAT_011985d4) & (uint)fVar16;
            fVar17 = (float)func_0x0d3414e0(*(long *)(param_7 + 0x3118) + 0x70);
            plVar1 = plStack_3128;
            fVar16 = _DAT_011983f0;
            if (fVar17 <= _DAT_011983f0) {
              fVar16 = fVar17;
            }
            *(uint *)(lVar9 + 0x2008 + uVar10 * 4) =
                 -(uint)(fVar17 < _DAT_011985d4) & (uint)_DAT_011985d4 |
                 ~-(uint)(fVar17 < _DAT_011985d4) & (uint)fVar16;
            uStack_3058 = func_0x0d3414e0(*plStack_3128);
            auStack_3108._0_8_ = func_0x0d3414e0(*plVar1 + 0x38);
            auStack_3108._8_8_ = extraout_XMM0_Qb_00;
            uStack_3068 = func_0x0d3414e0(*plVar1 + 0x70);
            fVar18 = (float)func_0x0d3414e0(*plVar1 + 0xa8);
            fVar22 = _DAT_011985d4;
            fVar16 = _DAT_011983f0;
            fVar17 = _DAT_011983f0;
            if ((float)uStack_3058 <= _DAT_011983f0) {
              fVar17 = (float)uStack_3058;
            }
            *(uint *)(lStack_3088 + uVar10 * 4) =
                 -(uint)((float)uStack_3058 < _DAT_011985d4) & (uint)_DAT_011985d4 |
                 ~-(uint)((float)uStack_3058 < _DAT_011985d4) & (uint)fVar17;
            fVar17 = fVar16;
            if ((float)auStack_3108._0_4_ <= fVar16) {
              fVar17 = (float)auStack_3108._0_4_;
            }
            *(uint *)(lStack_3088 + 0x1004 + uVar10 * 4) =
                 -(uint)((float)auStack_3108._0_4_ < fVar22) & (uint)fVar22 |
                 ~-(uint)((float)auStack_3108._0_4_ < fVar22) & (uint)fVar17;
            fVar17 = fVar16;
            if ((float)uStack_3068 <= fVar16) {
              fVar17 = (float)uStack_3068;
            }
            *(uint *)(lStack_3088 + 0x2008 + uVar10 * 4) =
                 -(uint)((float)uStack_3068 < fVar22) & (uint)fVar22 |
                 ~-(uint)((float)uStack_3068 < fVar22) & (uint)fVar17;
            if (fVar18 <= fVar16) {
              fVar16 = fVar18;
            }
            *(uint *)(lStack_3088 + 0x300c + uVar10 * 4) =
                 -(uint)(fVar18 < fVar22) & (uint)fVar22 | ~-(uint)(fVar18 < fVar22) & (uint)fVar16;
          }
        }
        else {
          iVar4 = (int)(short)plStack_3118[4] >> 0x1f;
          iVar8 = iVar4 - (short)plStack_3118[4];
          iVar6 = iVar8 + 7;
          if (-1 < iVar8) {
            iVar6 = iVar8;
          }
          uVar15 = (iVar12 - (iVar2 >> 3)) + ((iVar6 >> 3) - iVar4) + (uint)uVar10;
          if (uVar15 < 0x29) {
            pfVar5 = (float *)((lStack_30a0 - *(int *)((long)plStack_3118 + 0x1c)) * 0x198 +
                              (lStack_3130 - (int)plStack_3118[3]) * 0x660 + *plStack_3118);
            fVar16 = pfVar5[(ulong)uVar15 + 2];
            if ((fVar16 == _DAT_011987f4) && (!NAN(fVar16) && !NAN(_DAT_011987f4)))
            goto LAB_05288150;
            fVar22 = *pfVar5 / _DAT_01198af0;
            fVar17 = _DAT_011983f0;
            if (fVar22 <= _DAT_011983f0) {
              fVar17 = fVar22;
            }
            auStack_3148._0_4_ =
                 ((float)auStack_3148._0_4_ - fVar16 * _DAT_0119834c) *
                 (float)(~-(uint)(fVar22 < _DAT_011983fc) & (uint)fVar17) + fVar16 * _DAT_0119834c;
          }
          if (CONCAT44(uStack_310c,fStack_3110) == 0) goto LAB_0528818b;
LAB_05288175:
          plVar13 = (long *)CONCAT44(uStack_310c,fStack_3110);
          LOCK();
          plVar1 = plVar13 + 1;
          lVar9 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar9 != 0) goto LAB_0528818b;
          (**(code **)(*plVar13 + 0x10))(plVar13);
          func_0x0412c2d0(plVar13);
          if (_DAT_01198730 <= (float)auStack_3148._0_4_) goto LAB_0528819d;
        }
        *(undefined4 *)(lStack_3070 + uVar10 * 4) = auStack_3148._0_4_;
        iVar3 = iVar3 + -1;
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 != 0x29);
      lStack_30a8 = lStack_30a8 + 1;
      lVar9 = lStack_30b0 + uVar10;
    } while (lStack_30a8 != 5);
    lStack_30e0 = lStack_30e0 + 1;
    lVar9 = (long)(int)lStack_30b8 + uVar10;
    if (lStack_30e0 == 5) {
      return;
    }
  } while( true );
}


```

### Assembly

```asm
05287930  PUSH RBP
05287931  PUSH R15
05287933  PUSH R14
05287935  PUSH R13
05287937  PUSH R12
05287939  PUSH RBX
0528793a  SUB RSP,0x3168
05287941  MOV qword ptr [RSP + 0x70],R9
05287946  MOV qword ptr [RSP + 0xd8],R8
0528794e  MOV EBX,ECX
05287950  MOV R14D,EDX
05287953  MOV R13,RSI
05287956  MOV EDX,0x1004
0528795b  MOV qword ptr [RSP + 0xc8],RDI
05287963  XOR ESI,ESI
05287965  CALL 0x0eee2dd0
0528796a  SHL R14D,0x2
0528796e  SHL EBX,0x2
05287971  MOV RAX,qword ptr [R13 + 0x28]
05287975  MOVSX EAX,word ptr [RAX + 0xa8]
0528797c  MOV ECX,EAX
0528797e  SAR ECX,0x1f
05287981  MOV EDX,ECX
05287983  SUB EDX,EAX
05287985  LEA EAX,[RDX + 0x7]
05287988  TEST EDX,EDX
0528798a  CMOVNS EAX,EDX
0528798d  MOV qword ptr [RSP + 0xd0],RBX
05287995  CVTSI2SS XMM0,EBX
05287999  SAR EAX,0x3
0528799c  SUB ECX,EAX
0528799e  MOVD XMM1,ECX
052879a2  MOV qword ptr [RSP + 0xb0],R14
052879aa  MOVD XMM2,R14D
052879af  PUNPCKLDQ XMM2,XMM1
052879b3  CVTDQ2PS XMM1,XMM2
052879b6  MOVLPS qword ptr [RSP + 0x30],XMM1
052879bb  MOVSS dword ptr [RSP + 0x38],XMM0
052879c1  LEA RDI,[RSP + 0x2164]
052879c9  MOV EDX,0x1004
052879ce  XOR ESI,ESI
052879d0  CALL 0x0eee2dd0
052879d5  MOVSXD RBX,dword ptr [R13 + 0x240]
052879dc  TEST RBX,RBX
052879df  JLE 0x05287a7c
052879e5  LEA R14,[RSP + 0x1160]
052879ed  MOV R15,qword ptr [R13 + 0x248]
052879f4  MOVSS XMM0,dword ptr [0x011983f0]
052879fc  LEA R12,[RSP + 0x2164]
05287a04  LEA RBP,[RSP + 0x30]
05287a09  NOP dword ptr [RAX]
05287a10  MOVAPS xmmword ptr [RSP],XMM0
05287a14  MOVAPS XMM0,xmmword ptr [RSP]
05287a18  SHUFPS XMM0,XMM0,0x0
05287a1c  MULPS XMM0,xmmword ptr [0x014e8d20]
05287a23  MOVLPS qword ptr [RSP + 0x1160],XMM0
05287a2b  MOVSS dword ptr [RSP + 0x1168],XMM0
05287a34  MOV RDI,R15
05287a37  MOV RSI,R12
05287a3a  MOV RDX,RBP
05287a3d  MOV ECX,0x5
05287a42  MOV R8D,0x29
05287a48  MOV R9D,0x5
05287a4e  MOVAPS XMM0,xmmword ptr [RSP]
05287a52  PUSH 0x1
05287a54  PUSH 0x1
05287a56  PUSH 0x1
05287a58  PUSH R14
05287a5a  CALL 0x0d33ef10
05287a5f  MOVAPS XMM0,xmmword ptr [RSP + 0x20]
05287a64  ADD RSP,0x20
05287a68  MULSS XMM0,dword ptr [0x011986e0]
05287a70  ADD R15,0x818
05287a77  DEC RBX
05287a7a  JNZ 0x05287a10
05287a7c  LEA RDI,[RSP + 0x1160]
05287a84  MOV EDX,0x1004
05287a89  XOR ESI,ESI
05287a8b  CALL 0x0eee2dd0
05287a90  MOVSXD RBX,dword ptr [R13 + 0x1f0]
05287a97  TEST RBX,RBX
05287a9a  JLE 0x05287b43
05287aa0  LEA R14,[RSP + 0x158]
05287aa8  MOV R15,qword ptr [R13 + 0x1f8]
05287aaf  MOVSS XMM0,dword ptr [0x011983f0]
05287ab7  LEA R12,[RSP + 0x1160]
05287abf  LEA RBP,[RSP + 0x30]
05287ac4  NOP word ptr CS:[RAX + RAX*0x1]
05287ad0  MOVSS dword ptr [RSP],XMM0
05287ad5  MOVSS XMM0,dword ptr [RSP]
05287ada  MULSS XMM0,dword ptr [0x01198354]
05287ae2  MOVAPS XMM1,XMM0
05287ae5  UNPCKLPS XMM1,XMM0
05287ae8  MOVLPS qword ptr [RSP + 0x158],XMM1
05287af0  MOVSS dword ptr [RSP + 0x160],XMM0
05287af9  MOV RDI,R15
05287afc  MOV RSI,R12
05287aff  MOV RDX,RBP
05287b02  MOV ECX,0x5
05287b07  MOV R8D,0x29
05287b0d  MOV R9D,0x5
05287b13  MOVSS XMM0,dword ptr [RSP]
05287b18  PUSH 0x1
05287b1a  PUSH 0x1
05287b1c  PUSH 0x1
05287b1e  PUSH R14
05287b20  CALL 0x0d33ef10
05287b25  MOVSS XMM0,dword ptr [RSP + 0x20]
05287b2b  ADD RSP,0x20
05287b2f  MULSS XMM0,dword ptr [0x011986e0]
05287b37  ADD R15,0x818
05287b3e  DEC RBX
05287b41  JNZ 0x05287ad0
05287b43  LEA RDI,[RSP + 0x158]
05287b4b  MOV EDX,0x1004
05287b50  XOR ESI,ESI
05287b52  CALL 0x0eee2dd0
05287b57  MOVSXD RBX,dword ptr [R13 + 0x218]
05287b5e  TEST RBX,RBX
05287b61  JLE 0x05287c03
05287b67  LEA R14,[RSP + 0x80]
05287b6f  MOV R15,qword ptr [R13 + 0x220]
05287b76  MOVSS XMM0,dword ptr [0x011983f0]
05287b7e  LEA R12,[RSP + 0x158]
05287b86  LEA RBP,[RSP + 0x30]
05287b8b  NOP dword ptr [RAX + RAX*0x1]
05287b90  MOVSS dword ptr [RSP],XMM0
05287b95  MOVSS XMM0,dword ptr [RSP]
05287b9a  MULSS XMM0,dword ptr [0x01198354]
05287ba2  MOVAPS XMM1,XMM0
05287ba5  UNPCKLPS XMM1,XMM0
05287ba8  MOVLPS qword ptr [RSP + 0x80],XMM1
05287bb0  MOVSS dword ptr [RSP + 0x88],XMM0
05287bb9  MOV RDI,R15
05287bbc  MOV RSI,R12
05287bbf  MOV RDX,RBP
05287bc2  MOV ECX,0x5
05287bc7  MOV R8D,0x29
05287bcd  MOV R9D,0x5
05287bd3  MOVSS XMM0,dword ptr [RSP]
05287bd8  PUSH 0x1
05287bda  PUSH 0x1
05287bdc  PUSH 0x1
05287bde  PUSH R14
05287be0  CALL 0x0d33ef10
05287be5  MOVSS XMM0,dword ptr [RSP + 0x20]
05287beb  ADD RSP,0x20
05287bef  MULSS XMM0,dword ptr [0x011986e0]
05287bf7  ADD R15,0x818
05287bfe  DEC RBX
05287c01  JNZ 0x05287b90
05287c03  MOV RAX,qword ptr [RSP + 0x70]
05287c08  ADD RAX,0x170
05287c0e  MOV qword ptr [RSP + 0xc0],RAX
05287c16  XOR ECX,ECX
05287c18  MOVSS XMM3,dword ptr [0x01198994]
05287c20  MOVSS XMM4,dword ptr [0x011983f0]
05287c28  XOR R8D,R8D
05287c2b  JMP 0x05287c50
05287c30  MOV RCX,qword ptr [RSP + 0xb8]
05287c38  INC RCX
05287c3b  MOVSXD R8,dword ptr [RSP + 0xe0]
05287c43  ADD R8,RBP
05287c46  CMP RCX,0x5
05287c4a  JZ 0x05288448
05287c50  MOVZX EAX,CL
05287c53  XORPS XMM1,XMM1
05287c56  CVTSI2SS XMM1,EAX
05287c5a  ADDSS XMM1,dword ptr [RSP + 0x30]
05287c60  MOVSS XMM0,dword ptr [0x011987f8]
05287c68  MULSS XMM1,XMM0
05287c6c  MOV RAX,qword ptr [RSP + 0xb0]
05287c74  MOV qword ptr [RSP + 0xb8],RCX
05287c7c  ADD EAX,ECX
05287c7e  LEA ECX,[RAX*0x4]
05287c85  MOVAPS XMM2,XMM1
05287c88  MULSS XMM2,dword ptr [0x0119858c]
05287c90  MOVSS dword ptr [RSP + 0x40],XMM2
05287c96  MOVAPS XMM2,XMM1
05287c99  MULSS XMM2,XMM0
05287c9d  MOVSS dword ptr [RSP + 0x24],XMM2
05287ca3  MOVAPS xmmword ptr [RSP + 0xa0],XMM1
05287cab  MULSS XMM1,dword ptr [0x01198410]
05287cb3  MOVSS dword ptr [RSP + 0x20],XMM1
05287cb9  SAR ECX,0x4
05287cbc  MOV dword ptr [RSP + 0x48],ECX
05287cc0  CDQE
05287cc2  MOV qword ptr [RSP + 0x68],RAX
05287cc7  XOR ECX,ECX
05287cc9  JMP 0x05287cf0
05287cd0  MOV RCX,qword ptr [RSP + 0xf0]
05287cd8  INC RCX
05287cdb  MOV R8,qword ptr [RSP + 0xe8]
05287ce3  ADD R8,RBP
05287ce6  CMP RCX,0x5
05287cea  JZ 0x05287c30
05287cf0  MOVZX EAX,CL
05287cf3  XORPS XMM1,XMM1
05287cf6  CVTSI2SS XMM1,EAX
05287cfa  ADDSS XMM1,dword ptr [RSP + 0x38]
05287d00  MOVSS XMM0,dword ptr [0x011987f8]
05287d08  MULSS XMM1,XMM0
05287d0c  MOV RAX,qword ptr [RSP + 0xd0]
05287d14  MOV qword ptr [RSP + 0xf0],RCX
05287d1c  ADD EAX,ECX
05287d1e  MOV RDI,qword ptr [RSP + 0xd8]
05287d26  MOVSXD RCX,dword ptr [RDI]
05287d29  MOV RDX,qword ptr [RSP + 0x68]
05287d2e  SUB RDX,RCX
05287d31  MOVSXD RCX,dword ptr [RDI + 0x4]
05287d35  MOVSXD R9,EAX
05287d38  MOV RAX,R9
05287d3b  MOVSXD RSI,dword ptr [RDI + 0x8]
05287d3f  IMUL RSI,RDX
05287d43  LEA RDX,[RSI + RSI*0x4]
05287d47  SHL RDX,0x3
05287d4b  ADD RDX,qword ptr [RDI + 0x10]
05287d4f  SUB RAX,RCX
05287d52  LEA RAX,[RAX + RAX*0x4]
05287d56  LEA R12,[RDX + RAX*0x8]
05287d5a  MOV qword ptr [RSP + 0xf8],R9
05287d62  LEA EAX,[R9*0x4]
05287d6a  MOVAPS XMM2,XMM1
05287d6d  MULSS XMM2,dword ptr [0x0119858c]
05287d75  MOVSS dword ptr [RSP + 0x44],XMM2
05287d7b  MOVAPS XMM2,XMM1
05287d7e  MULSS XMM2,XMM0
05287d82  MOVSS dword ptr [RSP + 0x2c],XMM2
05287d88  MOVSS dword ptr [RSP + 0x1c],XMM1
05287d8e  MULSS XMM1,dword ptr [0x01198410]
05287d96  MOVSS dword ptr [RSP + 0x28],XMM1
05287d9c  MOV qword ptr [RSP + 0xe0],R8
05287da4  MOVSXD RCX,R8D
05287da7  SAR EAX,0x4
05287daa  MOV dword ptr [RSP + 0x4c],EAX
05287dae  MOV RAX,qword ptr [RSP + 0xc8]
05287db6  LEA RAX,[RAX + RCX*0x4]
05287dba  MOV qword ptr [RSP + 0x128],RAX
05287dc2  MOV RAX,qword ptr [RSP + 0xc0]
05287dca  LEA RAX,[RAX + RCX*0x4]
05287dce  MOV qword ptr [RSP + 0x110],RAX
05287dd6  MOV RAX,qword ptr [RSP + 0x31a0]
05287dde  LEA RAX,[RAX + RCX*0x4]
05287de2  MOV qword ptr [RSP + 0x108],RAX
05287dea  LEA RAX,[RSP + RCX*0x4 + 0x2164]
05287df2  MOV qword ptr [RSP + 0x120],RAX
05287dfa  LEA RAX,[RSP + RCX*0x4 + 0x158]
05287e02  MOV qword ptr [RSP + 0x100],RAX
05287e0a  MOV qword ptr [RSP + 0xe8],RCX
05287e12  LEA RAX,[RSP + RCX*0x4]
05287e16  ADD RAX,0x1160
05287e1c  MOV qword ptr [RSP + 0x118],RAX
05287e24  MOV EBX,0xfffffff8
05287e29  XOR EBP,EBP
05287e2b  JMP 0x05287e50
05287e30  MOV RAX,qword ptr [RSP + 0x128]
05287e38  MOVAPS XMM0,xmmword ptr [RSP + 0x50]
05287e3d  MOVSS dword ptr [RAX + RBP*0x4],XMM0
05287e42  DEC EBX
05287e44  INC RBP
05287e47  CMP EBP,0x29
05287e4a  JZ 0x05287cd0
05287e50  MOVZX EAX,BPL
05287e54  XORPS XMM1,XMM1
05287e57  CVTSI2SS XMM1,EAX
05287e5b  MOVSS XMM0,dword ptr [RSP + 0x34]
05287e61  MOVSS dword ptr [RSP + 0x50],XMM1
05287e67  ADDSS XMM0,XMM1
05287e6b  MULSS XMM0,dword ptr [0x01198494]
05287e73  MOVAPS xmmword ptr [RSP],XMM0
05287e77  MOV RAX,qword ptr [R13 + 0x28]
05287e7b  MOVSX EAX,word ptr [RAX + 0xa8]
05287e82  MOV R14D,EAX
05287e85  SAR R14D,0x1f
05287e89  MOV ECX,R14D
05287e8c  SUB ECX,EAX
05287e8e  LEA R15D,[RCX + 0x7]
05287e92  TEST ECX,ECX
05287e94  CMOVNS R15D,ECX
05287e98  MOV RAX,qword ptr [RSP + 0x118]
05287ea0  MOVSS XMM0,dword ptr [RAX + RBP*0x4]
05287ea5  MULSS XMM0,XMM3
05287ea9  MOV RAX,qword ptr [RSP + 0x120]
05287eb1  MOVSS XMM1,dword ptr [RAX + RBP*0x4]
05287eb6  DIVSS XMM1,dword ptr [0x01198400]
05287ebe  ADDSS XMM1,XMM4
05287ec2  MULSS XMM1,dword ptr [0x011986e0]
05287eca  XORPS XMM2,XMM2
05287ecd  UCOMISS XMM2,XMM1
05287ed0  JA 0x05287efc
05287ed2  MOV RAX,qword ptr [RSP + 0x100]
05287eda  MOVSS XMM2,dword ptr [RAX + RBP*0x4]
05287edf  MULSS XMM2,XMM3
05287ee3  UCOMISS XMM1,XMM4
05287ee6  JBE 0x05287ef0
05287ee8  MOVAPS XMM0,XMM2
05287eeb  JMP 0x05287efc
05287ef0  SUBSS XMM2,XMM0
05287ef4  MULSS XMM2,XMM1
05287ef8  ADDSS XMM0,XMM2
05287efc  SAR R15D,0x3
05287f00  MOV EAX,R14D
05287f03  SUB EAX,R15D
05287f06  ADD EAX,EBP
05287f08  SHL EAX,0x3
05287f0b  XORPS XMM2,XMM2
05287f0e  CVTSI2SS XMM2,EAX
05287f12  MULSS XMM2,dword ptr [0x01198698]
05287f1a  ADDSS XMM2,XMM4
05287f1e  ADDSS XMM2,dword ptr [R12 + 0x14]
05287f25  ADDSS XMM2,dword ptr [R12 + 0x1c]
05287f2c  MULSS XMM2,dword ptr [R12 + 0x18]
05287f33  XOR EAX,EAX
05287f35  XORPS XMM1,XMM1
05287f38  UCOMISS XMM2,XMM1
05287f3b  SETA AL
05287f3e  LEA RCX,[0x14f0a50]
05287f45  MULSS XMM2,dword ptr [RCX + RAX*0x4]
05287f4a  ADDSS XMM2,XMM0
05287f4e  MOV RDI,qword ptr [R13 + 0xc90]
05287f55  MOVAPS XMM0,xmmword ptr [RSP]
05287f59  MOVAPS XMM1,xmmword ptr [RSP + 0xa0]
05287f61  MOVLHPS XMM0,XMM1
05287f64  SHUFPS XMM0,XMM1,0xe2
05287f68  MOVSS XMM1,dword ptr [RSP + 0x1c]
05287f6e  MOV ESI,EBP
05287f70  CALL 0x05259f00
05287f75  MOVSS XMM3,dword ptr [0x011983f0]
05287f7d  MOV RCX,qword ptr [R13 + 0x28]
05287f81  MOVSX EDX,word ptr [RCX + 0xaa]
05287f88  MOV EAX,EDX
05287f8a  SAR EAX,0x1f
05287f8d  MOV ESI,EAX
05287f8f  SUB ESI,EDX
05287f91  LEA EDX,[RSI + 0x7]
05287f94  TEST ESI,ESI
05287f96  CMOVNS EDX,ESI
05287f99  SAR EDX,0x3
05287f9c  MOVSX ECX,word ptr [RCX + 0xa8]
05287fa3  MOV ESI,ECX
05287fa5  SAR ESI,0x1f
05287fa8  SUB ESI,ECX
05287faa  SHR ECX,0x1f
05287fad  LEA EDI,[RSI + 0x7]
05287fb0  TEST ESI,ESI
05287fb2  CMOVNS EDI,ESI
05287fb5  SAR EDI,0x3
05287fb8  ADD EDI,ECX
05287fba  SUB EAX,EDX
05287fbc  ADD EAX,EDI
05287fbe  ADD EAX,EBX
05287fc0  XORPS XMM2,XMM2
05287fc3  CVTSI2SS XMM2,EAX
05287fc7  MULSS XMM2,dword ptr [0x011986e0]
05287fcf  XORPS XMM1,XMM1
05287fd2  UCOMISS XMM1,XMM2
05287fd5  MOVSS XMM1,dword ptr [0x01198aa4]
05287fdd  JA 0x05287ffb
05287fdf  UCOMISS XMM2,XMM3
05287fe2  JA 0x05287ff8
05287fe4  ADDSS XMM0,dword ptr [0x01198400]
05287fec  MULSS XMM0,XMM2
05287ff0  ADDSS XMM0,dword ptr [0x01198aa4]
05287ff8  MOVAPS XMM1,XMM0
05287ffb  MOVSS XMM2,dword ptr [RSP + 0x50]
05288001  DIVSS XMM2,dword ptr [0x01198af0]
05288009  MOVAPS XMM0,XMM1
0528800c  ADDSS XMM0,dword ptr [0x01198c1c]
05288014  MULSS XMM0,XMM2
05288018  ADDSS XMM0,dword ptr [0x01198358]
05288020  CMPLTSS XMM3,XMM2
05288025  MOVAPS XMM2,XMM3
05288028  ANDNPS XMM2,XMM0
0528802b  ANDPS XMM3,XMM1
0528802e  ORPS XMM3,XMM2
05288031  MOVAPS xmmword ptr [RSP + 0x50],XMM3
05288036  MOV RSI,qword ptr [R13 + 0xca8]
0528803d  MOV EAX,dword ptr [RSP + 0x48]
05288041  MOV dword ptr [RSP + 0x78],EAX
05288045  MOV EAX,dword ptr [RSP + 0x4c]
05288049  MOV dword ptr [RSP + 0x7c],EAX
0528804d  LEA RDI,[RSP + 0x80]
05288055  LEA RDX,[RSP + 0x78]
0528805a  CALL 0x0525af30
0528805f  MOV RAX,qword ptr [RSP + 0x80]
05288067  TEST RAX,RAX
0528806a  JZ 0x05288140
05288070  NEG R15D
05288073  MOVSX ECX,word ptr [RAX + 0x20]
05288077  MOV EDX,ECX
05288079  SAR EDX,0x1f
0528807c  SUB EDX,ECX
0528807e  SHR ECX,0x1f
05288081  LEA ESI,[RDX + 0x7]
05288084  TEST EDX,EDX
05288086  CMOVNS ESI,EDX
05288089  SAR ESI,0x3
0528808c  ADD ESI,ECX
0528808e  ADD R14D,R15D
05288091  ADD R14D,ESI
05288094  ADD R14,RBP
05288097  CMP R14D,0x28
0528809b  MOVSS XMM3,dword ptr [0x01198994]
052880a3  JA 0x05288160
052880a9  MOVSXD RCX,dword ptr [RAX + 0x18]
052880ad  MOV RDX,qword ptr [RSP + 0x68]
052880b2  SUB RDX,RCX
052880b5  MOVSXD RCX,dword ptr [RAX + 0x1c]
052880b9  MOV RSI,qword ptr [RSP + 0xf8]
052880c1  SUB RSI,RCX
052880c4  IMUL RCX,RDX,0x660
052880cb  ADD RCX,qword ptr [RAX]
052880ce  IMUL RAX,RSI,0x198
052880d5  ADD RAX,RCX
052880d8  MOV ECX,R14D
052880db  MOVSS XMM0,dword ptr [RAX + RCX*0x4 + 0x8]
052880e1  UCOMISS XMM0,dword ptr [0x011987f4]
052880e8  MOVSS XMM4,dword ptr [0x011983f0]
052880f0  JNZ 0x052880f4
052880f2  JNP 0x05288150
052880f4  MOVSS XMM1,dword ptr [RAX]
052880f8  DIVSS XMM1,dword ptr [0x01198af0]
05288100  MOVAPS XMM2,XMM4
05288103  MINSS XMM2,XMM1
05288107  CMPLTSS XMM1,dword ptr [0x011983fc]
05288110  ANDNPS XMM1,XMM2
05288113  MULSS XMM0,dword ptr [0x0119834c]
0528811b  MOVAPS XMM2,xmmword ptr [RSP + 0x50]
05288120  SUBSS XMM2,XMM0
05288124  MULSS XMM2,XMM1
05288128  ADDSS XMM2,XMM0
0528812c  MOVAPS xmmword ptr [RSP + 0x50],XMM2
05288131  MOV R14,qword ptr [RSP + 0x88]
05288139  TEST R14,R14
0528813c  JNZ 0x05288175
0528813e  JMP 0x0528818b
05288140  MOVSS XMM3,dword ptr [0x01198994]
05288148  MOVSS XMM4,dword ptr [0x011983f0]
05288150  MOV R14,qword ptr [RSP + 0x88]
05288158  TEST R14,R14
0528815b  JNZ 0x05288175
0528815d  JMP 0x0528818b
05288160  MOVSS XMM4,dword ptr [0x011983f0]
05288168  MOV R14,qword ptr [RSP + 0x88]
05288170  TEST R14,R14
05288173  JZ 0x0528818b
05288175  MOV RAX,-0x1
0528817c  XADD.LOCK qword ptr [R14 + 0x8],RAX
05288182  TEST RAX,RAX
05288185  JZ 0x05288410
0528818b  MOVAPS XMM0,xmmword ptr [RSP + 0x50]
05288190  UCOMISS XMM0,dword ptr [0x01198730]
05288197  JC 0x05287e30
0528819d  MOV R14,qword ptr [RSP + 0x31a0]
052881a5  MOV RDI,qword ptr [R14 + 0x3118]
052881ac  MOVAPS XMM1,xmmword ptr [RSP]
052881b0  MULSS XMM1,dword ptr [0x0119858c]
052881b8  MOVSS XMM0,dword ptr [RSP + 0x40]
052881be  MOVSS XMM2,dword ptr [RSP + 0x44]
052881c4  CALL 0x0d3414e0
052881c9  MOVSS XMM1,dword ptr [0x011983f0]
052881d1  MINSS XMM1,XMM0
052881d5  MOVSS XMM3,dword ptr [0x011985d4]
052881dd  CMPLTSS XMM0,XMM3
052881e2  MOVAPS XMM2,XMM0
052881e5  ANDNPS XMM2,XMM1
052881e8  ANDPS XMM0,XMM3
052881eb  ORPS XMM0,XMM2
052881ee  MOV R15,qword ptr [RSP + 0x108]
052881f6  MOVSS dword ptr [R15 + RBP*0x4],XMM0
052881fc  MOV RDI,qword ptr [R14 + 0x3118]
05288203  MOVAPS XMM1,xmmword ptr [RSP]
05288207  MULSS XMM1,dword ptr [0x011987f8]
0528820f  MOVAPS xmmword ptr [RSP + 0x90],XMM1
05288217  ADD RDI,0x38
0528821b  MOVSS XMM0,dword ptr [RSP + 0x24]
05288221  MOVSS XMM2,dword ptr [RSP + 0x2c]
05288227  CALL 0x0d3414e0
0528822c  MOVSS XMM1,dword ptr [0x011983f0]
05288234  MINSS XMM1,XMM0
05288238  MOVSS XMM3,dword ptr [0x011985d4]
05288240  CMPLTSS XMM0,XMM3
05288245  MOVAPS XMM2,XMM0
05288248  ANDNPS XMM2,XMM1
0528824b  ANDPS XMM0,XMM3
0528824e  ORPS XMM0,XMM2
05288251  MOVSS dword ptr [R15 + RBP*0x4 + 0x1004],XMM0
0528825b  MOV RDI,qword ptr [R14 + 0x3118]
05288262  ADD RDI,0x70
05288266  MOVSS XMM0,dword ptr [RSP + 0x24]
0528826c  MOVAPS XMM1,xmmword ptr [RSP + 0x90]
05288274  MOVSS XMM2,dword ptr [RSP + 0x2c]
0528827a  CALL 0x0d3414e0
0528827f  MOVSS XMM1,dword ptr [0x011983f0]
05288287  MINSS XMM1,XMM0
0528828b  MOVSS XMM3,dword ptr [0x011985d4]
05288293  CMPLTSS XMM0,XMM3
05288298  MOVAPS XMM2,XMM0
0528829b  ANDNPS XMM2,XMM1
0528829e  ANDPS XMM0,XMM3
052882a1  ORPS XMM0,XMM2
052882a4  MOVSS dword ptr [R15 + RBP*0x4 + 0x2008],XMM0
052882ae  MOV R14,qword ptr [RSP + 0x70]
052882b3  MOV RDI,qword ptr [R14]
052882b6  MOVAPS XMM0,xmmword ptr [RSP + 0xa0]
052882be  MOVAPS XMM1,xmmword ptr [RSP]
052882c2  MOVSS XMM2,dword ptr [RSP + 0x1c]
052882c8  CALL 0x0d3414e0
052882cd  MOVAPS xmmword ptr [RSP + 0x140],XMM0
052882d5  MOV RDI,qword ptr [R14]
052882d8  ADD RDI,0x38
052882dc  MOVAPS XMM0,xmmword ptr [RSP + 0xa0]
052882e4  MOVAPS XMM1,xmmword ptr [RSP]
052882e8  MOVSS XMM2,dword ptr [RSP + 0x1c]
052882ee  CALL 0x0d3414e0
052882f3  MOVAPS xmmword ptr [RSP + 0x90],XMM0
052882fb  MOVAPS XMM1,xmmword ptr [RSP]
052882ff  MULSS XMM1,dword ptr [0x01198410]
05288307  MOVAPS xmmword ptr [RSP],XMM1
0528830b  MOV RDI,qword ptr [R14]
0528830e  ADD RDI,0x70
05288312  MOVSS XMM0,dword ptr [RSP + 0x20]
05288318  MOVSS XMM2,dword ptr [RSP + 0x28]
0528831e  CALL 0x0d3414e0
05288323  MOVAPS xmmword ptr [RSP + 0x130],XMM0
0528832b  MOV RDI,qword ptr [R14]
0528832e  MOV EAX,0xa8
05288333  ADD RDI,RAX
05288336  MOVSS XMM0,dword ptr [RSP + 0x20]
0528833c  MOVAPS XMM1,xmmword ptr [RSP]
05288340  MOVSS XMM2,dword ptr [RSP + 0x28]
05288346  CALL 0x0d3414e0
0528834b  MOVSS XMM4,dword ptr [0x011983f0]
05288353  MOVSS XMM3,dword ptr [0x01198994]
0528835b  MOVAPS XMM1,XMM4
0528835e  MOVAPS XMM6,xmmword ptr [RSP + 0x140]
05288366  MINSS XMM1,XMM6
0528836a  MOVSS XMM5,dword ptr [0x011985d4]
05288372  CMPLTSS XMM6,XMM5
05288377  MOVAPS XMM2,XMM6
0528837a  ANDNPS XMM2,XMM1
0528837d  ANDPS XMM6,XMM5
05288380  ORPS XMM6,XMM2
05288383  MOV RAX,qword ptr [RSP + 0x110]
0528838b  MOVSS dword ptr [RAX + RBP*0x4],XMM6
05288390  MOVAPS XMM1,XMM4
05288393  MOVAPS XMM6,xmmword ptr [RSP + 0x90]
0528839b  MINSS XMM1,XMM6
0528839f  CMPLTSS XMM6,XMM5
052883a4  MOVAPS XMM2,XMM6
052883a7  ANDNPS XMM2,XMM1
052883aa  ANDPS XMM6,XMM5
052883ad  ORPS XMM6,XMM2
052883b0  MOVSS dword ptr [RAX + RBP*0x4 + 0x1004],XMM6
052883b9  MOVAPS XMM1,XMM4
052883bc  MOVAPS XMM6,xmmword ptr [RSP + 0x130]
052883c4  MINSS XMM1,XMM6
052883c8  CMPLTSS XMM6,XMM5
052883cd  MOVAPS XMM2,XMM6
052883d0  ANDNPS XMM2,XMM1
052883d3  ANDPS XMM6,XMM5
052883d6  ORPS XMM6,XMM2
052883d9  MOVSS dword ptr [RAX + RBP*0x4 + 0x2008],XMM6
052883e2  MOVAPS XMM1,XMM4
052883e5  MINSS XMM1,XMM0
052883e9  CMPLTSS XMM0,XMM5
052883ee  MOVAPS XMM2,XMM0
052883f1  ANDNPS XMM2,XMM1
052883f4  ANDPS XMM0,XMM5
052883f7  ORPS XMM0,XMM2
052883fa  MOVSS dword ptr [RAX + RBP*0x4 + 0x300c],XMM0
05288403  JMP 0x05287e30
05288410  MOV RAX,qword ptr [R14]
05288413  MOV RDI,R14
05288416  CALL qword ptr [RAX + 0x10]
05288419  MOV RDI,R14
0528841c  CALL 0x0412c2d0
05288421  MOVSS XMM4,dword ptr [0x011983f0]
05288429  MOVSS XMM3,dword ptr [0x01198994]
05288431  MOVAPS XMM0,xmmword ptr [RSP + 0x50]
05288436  UCOMISS XMM0,dword ptr [0x01198730]
0528843d  JC 0x05287e30
05288443  JMP 0x0528819d
05288448  ADD RSP,0x3168
0528844f  POP RBX
05288450  POP R12
05288452  POP R13
05288454  POP R14
05288456  POP R15
05288458  POP RBP
05288459  RET
```

## `052bd680` — depth 1 from OverworldGeneratorMultinoise___prepareHeights (root OverworldGeneratorMultinoise___prepareHeights)

- Ghidra name: `FUN_052bd680`
- Body: `[[052bd680, 052bdacb] [0eee2ee0, 0eee2ee5]]`

### Pseudocode

```c

/* WARNING: Possible PIC construction at 0x052bd7a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x052bd9db: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x052bd7ad) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_052bd680(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  
  lVar24 = *param_1;
  puVar17 = (undefined8 *)param_1[1];
  if (param_1[2] - (long)puVar17 >> 3 < (long)param_5) {
    uVar14 = ((long)puVar17 - lVar24 >> 3) + param_5;
    if (uVar14 >> 0x3d == 0) {
      uVar19 = param_1[2] - lVar24;
      uVar22 = (long)uVar19 >> 2;
      if (uVar22 <= uVar14) {
        uVar22 = uVar14;
      }
      if (0x7ffffffffffffff7 < uVar19) {
        uVar22 = 0x1fffffffffffffff;
      }
      if (uVar22 == 0) {
        lVar15 = 0;
      }
      else {
        if (0x1fffffffffffffff < uVar22) goto LAB_052bdac6;
        lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22 * 8);
        if (lVar15 == 0) {
          lVar15 = 0;
          func_0x0eec74c0(uVar22 * 8,0);
        }
      }
      lVar23 = (long)param_2 - lVar24;
      puVar18 = (undefined8 *)(lVar15 + uVar22 * 8);
      lVar15 = lVar15 + lVar23;
      func_0x0eee2f00(lVar15,param_3,param_5 * 8);
      lVar1 = lVar15 + param_5 * 8;
      func_0x0eee2f00(lVar1,param_2,(long)puVar17 - (long)param_2);
      param_1[1] = (long)param_2;
      lVar15 = lVar15 + (lVar23 >> 3) * -8;
      func_0x0eee2f00(lVar15,lVar24,lVar23);
      *param_1 = lVar15;
      param_1[1] = ((long)puVar17 - (long)param_2) + lVar1;
      param_1[2] = (long)puVar18;
      if (lVar24 == 0) {
        return puVar18;
      }
      if (lVar24 != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar24);
      }
      return puVar18;
    }
    FUN_052a3b00();
LAB_052bdac6:
    func_0x04882eb0();
    pcVar4 = (code *)swi(3);
    puVar17 = (undefined8 *)(*pcVar4)();
    return puVar17;
  }
  lVar24 = (long)puVar17 - (long)param_2;
  if (lVar24 >> 3 < (long)param_5) {
    lVar15 = param_4 - ((long)param_3 + lVar24);
    puVar18 = (undefined8 *)((long)param_3 + lVar24);
    puVar21 = puVar17;
    if (lVar15 != 0) goto SUB_0eee2ee0;
    param_1[1] = (long)puVar17;
    if (lVar24 >> 3 < 1) {
      return param_3;
    }
    puVar16 = param_2 + param_5;
    puVar18 = puVar17 + -param_5;
    if (puVar18 < puVar17) {
      puVar20 = (undefined8 *)((long)param_2 + (param_4 - (long)(param_3 + param_5)) + 8);
      if (puVar20 < puVar17) {
        puVar20 = puVar17;
      }
      uVar14 = (~param_4 + (long)puVar20 + (long)param_3 + param_5 * 8) - (long)param_2;
      if (3 < param_5 && 0x37 < uVar14) {
        uVar22 = (uVar14 >> 3) + 1;
        uVar19 = uVar22 & 0xfffffffffffffffc;
        puVar18 = puVar18 + uVar19;
        puVar21 = puVar17 + uVar19;
        lVar15 = (param_4 + 0x10) - (long)param_3;
        lVar1 = param_5 * -8 + ((param_4 + 0x10) - (long)param_3);
        uVar14 = 0;
        do {
          puVar3 = (undefined4 *)((long)param_2 + uVar14 * 8 + lVar1 + -0x10);
          uVar5 = puVar3[1];
          uVar6 = puVar3[2];
          uVar7 = puVar3[3];
          puVar2 = (undefined4 *)((long)param_2 + uVar14 * 8 + lVar1);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          uVar10 = puVar2[2];
          uVar11 = puVar2[3];
          puVar2 = (undefined4 *)((long)param_2 + uVar14 * 8 + lVar15 + -0x10);
          *puVar2 = *puVar3;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          puVar2 = (undefined4 *)((long)param_2 + uVar14 * 8 + lVar15);
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          puVar2[2] = uVar10;
          puVar2[3] = uVar11;
          uVar14 = uVar14 + 4;
        } while (uVar19 != uVar14);
        if (uVar22 == uVar19) goto LAB_052bda73;
      }
      do {
        *puVar21 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar21 = puVar21 + 1;
      } while (puVar18 < puVar17);
    }
LAB_052bda73:
    param_1[1] = (long)puVar21;
    if (puVar17 != puVar16) {
      puVar16 = (undefined8 *)func_0x0eee2ee0(puVar16,param_2);
    }
    lVar15 = lVar24;
    puVar18 = param_3;
    puVar21 = param_2;
    if (puVar17 == param_2) {
      return puVar16;
    }
    goto SUB_0eee2ee0;
  }
  puVar18 = puVar17 + -param_5;
  puVar21 = puVar17;
  if (puVar18 < puVar17) {
    puVar16 = puVar17 + (1 - param_5);
    if (puVar17 + (1 - param_5) < puVar17) {
      puVar16 = puVar17;
    }
    uVar14 = (long)puVar16 + ~(ulong)puVar17 + param_5 * 8;
    if (3 < param_5 && 0x37 < uVar14) {
      uVar14 = (uVar14 >> 3) + 1;
      uVar22 = uVar14 & 0xfffffffffffffffc;
      puVar18 = puVar18 + uVar22;
      puVar21 = puVar17 + uVar22;
      uVar19 = 0;
      do {
        puVar20 = puVar17 + (uVar19 - param_5);
        uVar5 = *(undefined4 *)((long)puVar20 + 4);
        uVar6 = *(undefined4 *)(puVar20 + 1);
        uVar7 = *(undefined4 *)((long)puVar20 + 0xc);
        uVar12 = puVar17[(uVar19 + 2) - param_5];
        uVar13 = (puVar17 + ((uVar19 + 2) - param_5))[1];
        puVar16 = puVar17 + uVar19;
        *(undefined4 *)puVar16 = *(undefined4 *)puVar20;
        *(undefined4 *)((long)puVar16 + 4) = uVar5;
        *(undefined4 *)(puVar16 + 1) = uVar6;
        *(undefined4 *)((long)puVar16 + 0xc) = uVar7;
        puVar17[uVar19 + 2] = uVar12;
        (puVar17 + uVar19 + 2)[1] = uVar13;
        uVar19 = uVar19 + 4;
      } while (uVar22 != uVar19);
      if (uVar14 == uVar22) goto LAB_052bd9c3;
    }
    do {
      *puVar21 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar21 = puVar21 + 1;
    } while (puVar18 < puVar17);
  }
LAB_052bd9c3:
  param_1[1] = (long)puVar21;
  lVar15 = param_5 * 8;
  puVar18 = param_3;
  puVar21 = param_2;
  if (puVar17 != param_2 + param_5) {
    lVar15 = (long)puVar17 - (long)(param_2 + param_5);
    puVar18 = param_2;
    puVar21 = (undefined8 *)((long)puVar17 - lVar15);
  }
SUB_0eee2ee0:
  puVar17 = (undefined8 *)(*(code *)PTR_memmove_0f546508)(puVar21,puVar18,lVar15);
  return puVar17;
}


```

### Assembly

```asm
052bd680  PUSH RBP
052bd681  PUSH R15
052bd683  PUSH R14
052bd685  PUSH R13
052bd687  PUSH R12
052bd689  PUSH RBX
052bd68a  SUB RSP,0x28
052bd68e  MOV qword ptr [RSP],RDX
052bd692  MOV RBP,RSI
052bd695  MOV R9,qword ptr [RDI]
052bd698  MOV R14,qword ptr [RDI + 0x8]
052bd69c  MOV RDX,qword ptr [RDI + 0x10]
052bd6a0  MOV RAX,RDX
052bd6a3  SUB RAX,R14
052bd6a6  SAR RAX,0x3
052bd6aa  CMP R8,RAX
052bd6ad  JLE 0x052bd767
052bd6b3  MOV RAX,R14
052bd6b6  SUB RAX,R9
052bd6b9  SAR RAX,0x3
052bd6bd  ADD RAX,R8
052bd6c0  MOV RCX,RAX
052bd6c3  SHR RCX,0x3d
052bd6c7  JNZ 0x052bdac1
052bd6cd  MOV RCX,0x1fffffffffffffff
052bd6d7  SUB RDX,R9
052bd6da  MOV RBX,RDX
052bd6dd  SAR RBX,0x2
052bd6e1  CMP RBX,RAX
052bd6e4  CMOVBE RBX,RAX
052bd6e8  MOV RAX,0x7ffffffffffffff8
052bd6f2  CMP RDX,RAX
052bd6f5  CMOVNC RBX,RCX
052bd6f9  TEST RBX,RBX
052bd6fc  MOV qword ptr [RSP + 0x20],RDI
052bd701  MOV qword ptr [RSP + 0x8],R9
052bd706  MOV qword ptr [RSP + 0x10],RDX
052bd70b  JZ 0x052bd8b3
052bd711  CMP RBX,RCX
052bd714  JA 0x052bdac6
052bd71a  MOV R12,R8
052bd71d  LEA R13,[RBX*0x8]
052bd725  MOV RAX,qword ptr [0x0f5463b0]
052bd72c  LEA RDI,[0xf5463b0]
052bd733  MOV RSI,R13
052bd736  CALL qword ptr [RAX + 0x10]
052bd739  MOV R15,RAX
052bd73c  TEST RAX,RAX
052bd73f  MOV R9,qword ptr [RSP + 0x8]
052bd744  MOV R8,R12
052bd747  JNZ 0x052bd8b6
052bd74d  XOR R15D,R15D
052bd750  MOV RDI,R13
052bd753  XOR ESI,ESI
052bd755  CALL 0x0eec74c0
052bd75a  MOV R8,R12
052bd75d  MOV R9,qword ptr [RSP + 0x8]
052bd762  JMP 0x052bd8b6
052bd767  MOV R15,R14
052bd76a  SUB R15,RBP
052bd76d  MOV R12,R15
052bd770  SAR R12,0x3
052bd774  CMP R8,R12
052bd777  JLE 0x052bd84a
052bd77d  MOV RAX,qword ptr [RSP]
052bd781  LEA RSI,[RAX + R15*0x1]
052bd785  MOV R13,RCX
052bd788  SUB R13,RSI
052bd78b  JZ 0x052bd7c2
052bd78d  MOV qword ptr [RSP + 0x20],RDI
052bd792  MOV RDI,R14
052bd795  MOV RDX,R13
052bd798  MOV qword ptr [RSP + 0x18],RBP
052bd79d  MOV RBX,R9
052bd7a0  MOV RBP,R8
052bd7a3  MOV qword ptr [RSP + 0x10],RCX
052bd7a8  CALL 0x0eee2ee0
052bd7ad  MOV RCX,qword ptr [RSP + 0x10]
052bd7b2  MOV R8,RBP
052bd7b5  MOV R9,RBX
052bd7b8  MOV RBP,qword ptr [RSP + 0x18]
052bd7bd  MOV RDI,qword ptr [RSP + 0x20]
052bd7c2  ADD R13,R14
052bd7c5  MOV qword ptr [RDI + 0x8],R13
052bd7c9  TEST R12,R12
052bd7cc  JLE 0x052bdab2
052bd7d2  LEA RAX,[R8*0x8]
052bd7da  ADD RAX,RBP
052bd7dd  LEA RSI,[R8*0x8]
052bd7e5  MOV RBX,R13
052bd7e8  SUB RBX,RSI
052bd7eb  MOV RDX,R13
052bd7ee  CMP RBX,R14
052bd7f1  JNC 0x052bda73
052bd7f7  MOV R11,RDI
052bd7fa  LEA RDX,[RCX + RBP*0x1]
052bd7fe  MOV R10,qword ptr [RSP]
052bd802  LEA RDI,[R10 + R8*0x8]
052bd806  SUB RDX,RDI
052bd809  ADD RDX,0x8
052bd80d  CMP R14,RDX
052bd810  CMOVA RDX,R14
052bd814  ADD RDX,R10
052bd817  LEA RDX,[RDX + R8*0x8]
052bd81b  MOV RDI,RCX
052bd81e  NOT RDI
052bd821  ADD RDI,RDX
052bd824  SUB RDI,RBP
052bd827  CMP RDI,0x38
052bd82b  SETC DL
052bd82e  CMP R8,0x4
052bd832  SETC R8B
052bd836  OR R8B,DL
052bd839  JZ 0x052bd9ef
052bd83f  MOV RDX,R13
052bd842  MOV RDI,R11
052bd845  JMP 0x052bda60
052bd84a  LEA RAX,[R8*0x8]
052bd852  ADD RAX,RBP
052bd855  LEA RBX,[R8*0x8]
052bd85d  MOV RCX,R14
052bd860  SUB RCX,RBX
052bd863  MOV RDX,R14
052bd866  CMP RCX,R14
052bd869  JNC 0x052bd9c3
052bd86f  MOV R10,RDI
052bd872  MOV RDX,R14
052bd875  SUB RDX,RBX
052bd878  ADD RDX,0x8
052bd87c  CMP R14,RDX
052bd87f  CMOVA RDX,R14
052bd883  LEA RDX,[RDX + R8*0x8]
052bd887  MOV RSI,R14
052bd88a  NOT RSI
052bd88d  ADD RSI,RDX
052bd890  CMP RSI,0x38
052bd894  SETC DL
052bd897  CMP R8,0x4
052bd89b  SETC DIL
052bd89f  OR DIL,DL
052bd8a2  JZ 0x052bd954
052bd8a8  MOV RDX,R14
052bd8ab  MOV RDI,R10
052bd8ae  JMP 0x052bd9b0
052bd8b3  XOR R15D,R15D
052bd8b6  MOV R12,RBP
052bd8b9  SUB R12,R9
052bd8bc  MOV R13,R12
052bd8bf  SAR R13,0x3
052bd8c3  LEA RAX,[R15 + RBX*0x8]
052bd8c7  MOV qword ptr [RSP + 0x18],RAX
052bd8cc  ADD R15,R12
052bd8cf  LEA RDX,[R8*0x8]
052bd8d7  MOV RDI,R15
052bd8da  MOV RSI,qword ptr [RSP]
052bd8de  MOV RBX,R8
052bd8e1  CALL 0x0eee2f00
052bd8e6  LEA RBX,[R15 + RBX*0x8]
052bd8ea  SUB R14,RBP
052bd8ed  MOV RDI,RBX
052bd8f0  MOV RSI,RBP
052bd8f3  MOV RDX,R14
052bd8f6  CALL 0x0eee2f00
052bd8fb  ADD R14,RBX
052bd8fe  MOV RBX,qword ptr [RSP + 0x20]
052bd903  MOV qword ptr [RBX + 0x8],RBP
052bd907  SHL R13,0x3
052bd90b  SUB R15,R13
052bd90e  MOV RDI,R15
052bd911  MOV RSI,qword ptr [RSP + 0x8]
052bd916  MOV RDX,R12
052bd919  CALL 0x0eee2f00
052bd91e  MOV RDI,qword ptr [RSP + 0x8]
052bd923  MOV qword ptr [RBX],R15
052bd926  MOV qword ptr [RBX + 0x8],R14
052bd92a  MOV RAX,qword ptr [RSP + 0x18]
052bd92f  MOV qword ptr [RBX + 0x10],RAX
052bd933  TEST RDI,RDI
052bd936  JZ 0x052bdab2
052bd93c  MOV RSI,qword ptr [RSP + 0x10]
052bd941  ADD RSP,0x28
052bd945  POP RBX
052bd946  POP R12
052bd948  POP R13
052bd94a  POP R14
052bd94c  POP R15
052bd94e  POP RBP
052bd94f  JMP 0x0412a280
052bd954  SHR RSI,0x3
052bd958  INC RSI
052bd95b  MOV RDI,RSI
052bd95e  AND RDI,-0x4
052bd962  LEA RCX,[RCX + RDI*0x8]
052bd966  LEA RDX,[R14 + RDI*0x8]
052bd96a  MOV R8,RBX
052bd96d  NEG R8
052bd970  ADD R8,R14
052bd973  ADD R8,0x10
052bd977  XOR R9D,R9D
052bd97a  NOP word ptr [RAX + RAX*0x1]
052bd980  MOVUPS XMM0,xmmword ptr [R8 + R9*0x8 + -0x10]
052bd986  MOVUPS XMM1,xmmword ptr [R8 + R9*0x8]
052bd98b  MOVUPS xmmword ptr [R14 + R9*0x8],XMM0
052bd990  MOVUPS xmmword ptr [R14 + R9*0x8 + 0x10],XMM1
052bd996  ADD R9,0x4
052bd99a  CMP RDI,R9
052bd99d  JNZ 0x052bd980
052bd99f  CMP RSI,RDI
052bd9a2  MOV RDI,R10
052bd9a5  JZ 0x052bd9c3
052bd9a7  NOP word ptr [RAX + RAX*0x1]
052bd9b0  MOV RSI,qword ptr [RCX]
052bd9b3  MOV qword ptr [RDX],RSI
052bd9b6  ADD RCX,0x8
052bd9ba  ADD RDX,0x8
052bd9be  CMP RCX,R14
052bd9c1  JC 0x052bd9b0
052bd9c3  MOV qword ptr [RDI + 0x8],RDX
052bd9c7  CMP R14,RAX
052bd9ca  JZ 0x052bd9e0
052bd9cc  MOV RDX,R14
052bd9cf  SUB RDX,RAX
052bd9d2  SUB R14,RDX
052bd9d5  MOV RDI,R14
052bd9d8  MOV RSI,RBP
052bd9db  CALL 0x0eee2ee0
052bd9e0  MOV RDI,RBP
052bd9e3  MOV RSI,qword ptr [RSP]
052bd9e7  MOV RDX,RBX
052bd9ea  JMP 0x052bda9f
052bd9ef  SHR RDI,0x3
052bd9f3  INC RDI
052bd9f6  MOV R8,RDI
052bd9f9  AND R8,-0x4
052bd9fd  LEA RBX,[RBX + R8*0x8]
052bda01  LEA RDX,[R8*0x8]
052bda09  ADD RDX,R13
052bda0c  MOV R12,R9
052bda0f  LEA R9,[RCX + RBP*0x1]
052bda13  ADD R9,0x10
052bda17  MOV R10,R9
052bda1a  MOV RCX,qword ptr [RSP]
052bda1e  SUB R10,RCX
052bda21  SUB R9,R12
052bda24  SUB R9,RCX
052bda27  SUB R9,RSI
052bda2a  ADD R9,R12
052bda2d  XOR ESI,ESI
052bda2f  NOP
052bda30  MOVUPS XMM0,xmmword ptr [R9 + RSI*0x8 + -0x10]
052bda36  MOVUPS XMM1,xmmword ptr [R9 + RSI*0x8]
052bda3b  MOVUPS xmmword ptr [R10 + RSI*0x8 + -0x10],XMM0
052bda41  MOVUPS xmmword ptr [R10 + RSI*0x8],XMM1
052bda46  ADD RSI,0x4
052bda4a  CMP R8,RSI
052bda4d  JNZ 0x052bda30
052bda4f  CMP RDI,R8
052bda52  MOV RDI,R11
052bda55  JZ 0x052bda73
052bda57  NOP word ptr [RAX + RAX*0x1]
052bda60  MOV RSI,qword ptr [RBX]
052bda63  MOV qword ptr [RDX],RSI
052bda66  ADD RBX,0x8
052bda6a  ADD RDX,0x8
052bda6e  CMP RBX,R14
052bda71  JC 0x052bda60
052bda73  MOV qword ptr [RDI + 0x8],RDX
052bda77  CMP R13,RAX
052bda7a  JZ 0x052bda90
052bda7c  MOV RDX,R13
052bda7f  SUB RDX,RAX
052bda82  SUB R13,RDX
052bda85  MOV RDI,R13
052bda88  MOV RSI,RBP
052bda8b  CALL 0x0eee2ee0
052bda90  CMP R14,RBP
052bda93  JZ 0x052bdab2
052bda95  MOV RDI,RBP
052bda98  MOV RSI,qword ptr [RSP]
052bda9c  MOV RDX,R15
052bda9f  ADD RSP,0x28
052bdaa3  POP RBX
052bdaa4  POP R12
052bdaa6  POP R13
052bdaa8  POP R14
052bdaaa  POP R15
052bdaac  POP RBP
052bdaad  JMP 0x0eee2ee0
052bdab2  ADD RSP,0x28
052bdab6  POP RBX
052bdab7  POP R12
052bdab9  POP R13
052bdabb  POP R14
052bdabd  POP R15
052bdabf  POP RBP
052bdac0  RET
052bdac1  CALL 0x052a3b00
052bdac6  CALL 0x04882eb0
052bdacb  INT3
0eee2ee0  JMP qword ptr [0x0f546508]
```

## `0525af30` — depth 1 from OverworldGeneratorMultinoise___prepareHeights (root OverworldGeneratorMultinoise___prepareHeights)

- Ghidra name: `FUN_0525af30`
- Body: `[[0525af30, 0525b065] [0525b070, 0525b0b3] [0525b0c0, 0525b242] [0525b250, 0525b27a] [0525b280, 0525b434] [0525b440, 0525b558] [0525b560, 0525b6e9] [0525b6f0, 0525b732] [0525b740, 0525b769] [0525b770, 0525b82b] [0525b830, 0525ba6e] [0525ba70, 0525bba3] [0525bbb0, 0525bc20] [0525bc30, 0525bc69] [0525bc70, 0525bd56] [0525bd60, 0525bdf1] [0525be00, 0525be52] [0525be60, 0525c019] [0525c020, 0525c15c] [0525c160, 0525c441] [0525c450, 0525c510] [0525c520, 0525c54d] [0525c550, 0525ca8c] [0525ca90, 0525cc48] [0525cc50, 0525cdac] [0525cdb0, 0525cdf8] [0525ce00, 0525d1e4] [0525d274, 0525d2aa]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0525af30(long *param_1,long *param_2,ulong *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  float fVar5;
  undefined1 auVar6 [16];
  char cVar7;
  short sVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  undefined8 *puVar28;
  long *plVar29;
  long *plVar30;
  undefined8 uVar31;
  uint uVar32;
  float *pfVar33;
  ulong uVar34;
  long lVar35;
  char cVar36;
  undefined2 uVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  ulong uVar43;
  long lVar44;
  ulong *puVar45;
  uint uVar46;
  ulong *puVar47;
  long lVar48;
  long lVar49;
  ulong *puVar50;
  long lVar51;
  int iVar52;
  long lVar53;
  int iVar54;
  long *plVar55;
  uint uVar56;
  uint uVar57;
  long lVar58;
  bool bVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  int iVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  int iVar69;
  long lVar70;
  ulong *puVar71;
  long lVar72;
  long *plVar73;
  bool bVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined1 auVar81 [16];
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  ulong *puStack_160;
  ulong *puStack_150;
  ulong *puStack_110;
  ulong *puStack_e8;
  long *plStack_e0;
  char cStack_d8;
  ulong uStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  float fStack_b4;
  ulong uStack_b0;
  ulong *puStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  long *plStack_78;
  ulong uStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  ulong uStack_48;
  long lStack_40;
  long lStack_38;
  
  if ((char)param_2[0x17] == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  plVar55 = param_2 + 5;
  func_0x0412d550();
  uVar34 = param_2[1];
  bVar59 = true;
  if (uVar34 != 0) {
    uVar24 = (long)(int)*param_3 + 0x9e3779b9;
    uVar24 = (uVar24 >> 2) + 0x9e3779b9 + uVar24 * 0x40 + (long)*(int *)((long)param_3 + 4) ^ uVar24
    ;
    uVar25 = uVar34 - (uVar34 >> 1 & 0x5555555555555555);
    uVar25 = (uVar25 >> 2 & 0x3333333333333333) + (uVar25 & 0x3333333333333333);
    uVar25 = ((uVar25 >> 4) + uVar25 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar25 >> 0x38 < 2) {
      uVar43 = uVar34 - 1 & uVar24;
    }
    else {
      uVar43 = uVar24;
      if (uVar34 <= uVar24) {
        uVar43 = uVar24 % uVar34;
      }
    }
    plVar73 = *(long **)(*param_2 + uVar43 * 8);
    if ((plVar73 != (long *)0x0) && (plVar73 = (long *)*plVar73, plVar73 != (long *)0x0)) {
      if ((byte)(uVar25 >> 0x38) < 2) {
        do {
          if (plVar73[1] == uVar24) {
            if (plVar73[2] == *param_3) goto LAB_0525b0e1;
          }
          else if ((plVar73[1] & uVar34 - 1) != uVar43) break;
          plVar73 = (long *)*plVar73;
        } while (plVar73 != (long *)0x0);
      }
      else {
        do {
          uVar25 = plVar73[1];
          if (uVar25 == uVar24) {
            if (plVar73[2] == *param_3) goto LAB_0525b0e1;
          }
          else {
            if (uVar34 <= uVar25) {
              if ((uVar25 | uVar34) >> 0x20 == 0) {
                if ((uVar25 & 0xffffffff) % (uVar34 & 0xffffffff) == uVar43) goto LAB_0525b076;
                break;
              }
              uVar25 = uVar25 % uVar34;
            }
            if (uVar25 != uVar43) break;
          }
LAB_0525b076:
          plVar73 = (long *)*plVar73;
        } while (plVar73 != (long *)0x0);
      }
    }
  }
LAB_0525b0fb:
  func_0x0412d610(plVar55);
  if (!bVar59) {
    return param_1;
  }
  if ((long *)param_2[0x18] == (long *)0x0) {
LAB_0525b3f1:
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    (**(code **)(*(long *)param_2[0x18] + 0x118))(&plStack_e0);
    plStack_78 = plStack_e0;
    if (plStack_e0 == (long *)0x0) goto LAB_0525b3f1;
    lVar26 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a00);
    if (lVar26 == 0) {
      func_0x0eec74c0(0x1a00,0);
    }
    func_0x0eee2dd0(lVar26 + 0xdc,0,0x5a4);
    FUN_0525eca0(lVar26);
    func_0x0eee2dd0(lVar26 + 0x75c,0,0x5a4);
    FUN_0525eca0(lVar26 + 0x680);
    func_0x0eee2dd0(lVar26 + 0xddc,0,0x5a4);
    FUN_0525eca0(lVar26 + 0xd00);
    func_0x0eee2dd0(lVar26 + 0x145c,0,0x5a4);
    FUN_0525eca0(lVar26 + 0x1380);
    puStack_160 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xe10);
    if (puStack_160 == (ulong *)0x0) {
      func_0x0eec74c0(0xe10,0);
    }
    puStack_110 = puStack_160 + 0x1c2;
    uVar38 = 0xfffffff9;
    puVar71 = puStack_160;
    plStack_c0 = param_2;
    do {
      iVar52 = (int)*param_3 + uVar38;
      iVar54 = uVar38 * uVar38;
      uVar38 = uVar38 + 1;
      puVar50 = (ulong *)0xfffffff9;
      do {
        puVar47 = puVar50;
        iVar69 = (int)puVar47;
        uVar56 = iVar69 + 1;
        if ((uint)(iVar69 * iVar69 + iVar54) < 0x41) {
          bVar59 = uVar56 < 3 && uVar38 < 3;
          puVar47 = (ulong *)CONCAT44(iVar69 + *(int *)((long)param_3 + 4),iVar52);
          if (puStack_110 <= puStack_160) {
            lVar70 = (long)puStack_160 - (long)puVar71;
            uVar34 = (lVar70 >> 4) + 1;
            puStack_150 = puVar71;
            if (uVar34 < 0x1000000000000000) {
              uVar25 = (long)puStack_110 - (long)puVar71;
              uVar24 = (long)uVar25 >> 3;
              if ((ulong)((long)uVar25 >> 3) <= uVar34) {
                uVar24 = uVar34;
              }
              if (0x7fffffffffffffef < uVar25) {
                uVar24 = 0xfffffffffffffff;
              }
              if (uVar24 < 0x1000000000000000) {
                lVar67 = uVar24 * 0x10;
                lVar27 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar67);
                if (lVar27 == 0) {
                  func_0x0eec74c0(lVar67,0);
                }
                *(ulong **)(lVar27 + lVar70) = puVar47;
                *(bool *)(lVar27 + 8 + lVar70) = bVar59;
                puVar47 = (ulong *)(lVar27 + lVar70 + (lVar70 >> 4) * -0x10);
                puVar50 = puVar47;
                for (puVar45 = puVar71; puVar45 != puStack_160; puVar45 = puVar45 + 2) {
                  uVar20 = *(undefined4 *)((long)puVar45 + 4);
                  uVar34 = puVar45[1];
                  uVar21 = *(undefined4 *)((long)puVar45 + 0xc);
                  *(int *)puVar50 = (int)*puVar45;
                  *(undefined4 *)((long)puVar50 + 4) = uVar20;
                  *(int *)(puVar50 + 1) = (int)uVar34;
                  *(undefined4 *)((long)puVar50 + 0xc) = uVar21;
                  puVar50 = puVar50 + 2;
                }
                puStack_110 = (ulong *)(lVar27 + lVar67);
                func_0x0412a280(puVar71,uVar25);
                puStack_160 = (ulong *)(lVar27 + lVar70 + 0x10);
                param_2 = plStack_c0;
                puVar71 = puVar47;
                goto LAB_0525b28b;
              }
              func_0x04882eb0();
            }
            FUN_0525f050();
            goto LAB_0525d1a4;
          }
          *puStack_160 = (ulong)puVar47;
          *(bool *)(puStack_160 + 1) = bVar59;
          puStack_160 = puStack_160 + 2;
        }
LAB_0525b28b:
        puVar50 = (ulong *)(ulong)uVar56;
      } while (uVar56 != 8);
    } while (uVar38 != 8);
    if (puVar71 == puStack_160) {
LAB_0525cacf:
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      lStack_a0 = lVar26 + 0xde;
      puStack_80 = (ulong *)(lVar26 + 0xb4);
      uVar34 = 0;
      plVar73 = (long *)0x0;
      do {
        puStack_150 = puVar71;
        if ((long *)plStack_78[0xc] == (long *)0x0) {
          func_0x04891200();
          goto LAB_0525d1cb;
        }
        puStack_a8 = puVar71 + uVar34 * 2;
        uStack_b0 = uVar34;
        (**(code **)(*(long *)plStack_78[0xc] + 0x30))(&plStack_98);
        plVar30 = plStack_90;
        if (plStack_90 != (long *)0x0) {
          uVar34 = puStack_a8[1];
          uStack_d0 = (ulong)(uint)((int)*puStack_a8 << 2);
          uVar38 = *(int *)((long)puStack_a8 + 4) * 4;
          plVar73 = (long *)(ulong)uVar38;
          uStack_70 = (ulong)(uint)((int)*param_3 << 2);
          uStack_48 = (ulong)(uint)(*(int *)((long)param_3 + 4) << 2);
          plStack_c8 = plStack_90 + 0x67;
          puVar50 = (ulong *)(plStack_90 + 0x37);
          plStack_58 = plStack_90 + 7;
          lVar27 = 0;
          puVar45 = puStack_80;
          plVar29 = param_1;
          lVar70 = lVar26;
          fVar76 = _DAT_011986e8;
          fVar78 = _DAT_011987f4;
          fVar82 = _DAT_011984a4;
          fVar83 = _DAT_01198634;
          fVar84 = _DAT_011983f0;
          fVar85 = _DAT_01198858;
          do {
            fVar86 = (float)((int)uStack_70 + (int)lVar27);
            lStack_40 = lVar26 + lVar27 * 0x680;
            lStack_50 = lVar27 * 0x680 + lStack_a0;
            lVar67 = 0;
            puStack_e8 = puVar45;
            fStack_b4 = fVar86;
            lStack_68 = lVar27;
            lStack_60 = lVar70;
            do {
              lStack_38 = lVar67 * 0x1a0;
              lVar27 = lStack_40 + lStack_38;
              pfVar33 = (float *)(lStack_40 + lStack_38);
              uVar32 = 0;
              uVar41 = 0;
              uVar56 = 0;
              fVar75 = fVar78;
              do {
                fVar77 = (float)(int)((int)uStack_d0 + uVar32) - fVar86;
                uVar24 = (ulong)(uVar32 + 7);
                uVar39 = -uVar32;
                uVar57 = 0;
                do {
                  if (uVar32 == 4) {
                    sVar8 = *(short *)((long)plVar30 + (ulong)(0xf - uVar57) * 2 + 0x12);
joined_r0x0525b91c:
                    if ((sVar8 != 0x7fff) &&
                       (fVar80 = (float)(int)(uVar57 + uVar38) -
                                 (float)((int)uStack_48 + (int)lVar67),
                       fVar80 = fVar80 * fVar80 + fVar77 * fVar77, fVar80 <= fVar82)) {
                      if ((fVar80 <= fVar83) && ((char)uVar34 != '\0')) {
                        uVar46 = uVar39;
                        if (uVar32 == 0) {
                          uVar46 = uVar57;
                        }
                        uVar25 = (ulong)(uVar46 + 3);
                        if (uVar57 == 4) {
                          uVar25 = uVar24;
                        }
                        if (uVar32 == 4) {
                          uVar25 = (ulong)(0xf - uVar57);
LAB_0525b80a:
                          plVar1 = plStack_c8 + uVar25 * 3;
                          if (*plVar1 != plVar1[1]) {
                            lVar61 = 0;
                            do {
                              lVar62 = *plVar1;
                              if (lVar62 != plVar1[1]) {
                                iVar69 = (int)(short)param_2[0x19] >> 0x1f;
                                iVar54 = iVar69 - (short)param_2[0x19];
                                iVar52 = iVar54 + 7;
                                if (-1 < iVar54) {
                                  iVar52 = iVar54;
                                }
                                plVar29 = (long *)(ulong)(uint)(iVar52 >> 3);
                                iVar54 = (int)plVar30[1] >> 0x1f;
                                iVar40 = iVar54 - (int)plVar30[1];
                                uVar46 = -iVar54;
                                iVar54 = iVar40 + 7;
                                if (-1 < iVar40) {
                                  iVar54 = iVar40;
                                }
                                uVar25 = (ulong)(int)((iVar69 - (iVar52 >> 3)) +
                                                      (iVar54 >> 3) + uVar46 + (int)lVar61);
                                puVar47 = (ulong *)(ulong)uVar46;
                                param_2 = plStack_c0;
                                if ((uVar25 < (ulong)(plVar1[1] - lVar62)) &&
                                   (cVar7 = *(char *)(lVar62 + uVar25), cVar7 != '\x7f')) {
                                  cVar36 = *(char *)((long)puStack_e8 + lVar61);
                                  if (*(char *)((long)puStack_e8 + lVar61) == '\x7f') {
                                    cVar36 = '\0';
                                  }
                                  *(char *)((long)puStack_e8 + lVar61) = cVar36 + cVar7;
                                  puVar47 = puStack_e8;
                                }
                              }
                              lVar61 = lVar61 + 1;
                            } while (lVar61 != 0x29);
                          }
                        }
                        else if (((uVar57 == 4) || (uVar32 == 0)) || (uVar57 == 0))
                        goto LAB_0525b80a;
                        *(undefined1 *)(lVar27 + 0x19e) = 1;
                      }
                      if (*(char *)(lVar27 + 0x19f) == '\0') {
                        if (fVar80 < fVar75) {
                          uVar56 = uVar32;
                          uVar41 = uVar57;
                        }
                        if (uVar32 != 4) {
                          uVar25 = uVar24;
                          if (uVar57 == 4) goto LAB_0525b945;
                          if (uVar32 == 0) {
                            uVar25 = (ulong)(uVar57 + 3);
                            goto LAB_0525b945;
                          }
                          uVar25 = (ulong)(3 - uVar32);
                          if (uVar57 == 0) goto LAB_0525b945;
LAB_0525cfb3:
                          uVar34 = func_0x04890760();
                          goto LAB_0525cfb8;
                        }
                        uVar25 = (ulong)(0xf - uVar57);
LAB_0525b945:
                        fVar79 = fVar80;
                        if (fVar75 <= fVar80) {
                          fVar79 = fVar75;
                        }
                        sVar8 = *(short *)((long)plVar30 + uVar25 * 2 + 0x12);
                        fVar75 = fVar79;
                        if (fVar80 <= fVar76) {
                          if (sVar8 == 0x7fff) goto LAB_0525cfb3;
                          pfVar33[1] = (float)(int)sVar8;
                          *(undefined1 *)((long)pfVar33 + 0x19f) = 1;
                          iVar69 = (int)(short)param_2[0x19] >> 0x1f;
                          iVar54 = iVar69 - (short)param_2[0x19];
                          iVar52 = iVar54 + 7;
                          if (-1 < iVar54) {
                            iVar52 = iVar54;
                          }
                          iVar40 = (int)plVar30[1] >> 0x1f;
                          iVar64 = iVar40 - (int)plVar30[1];
                          iVar54 = iVar64 + 7;
                          if (-1 < iVar64) {
                            iVar54 = iVar64;
                          }
                          fVar80 = fVar84;
                          if (((uVar32 == 4) || (uVar57 == 4)) || ((uVar32 == 0 || (uVar57 == 0))))
                          {
                            uVar46 = uVar39;
                            if (uVar32 == 0) {
                              uVar46 = uVar57;
                            }
                            uVar25 = (ulong)(uVar46 + 3);
                            if (uVar57 == 4) {
                              uVar25 = uVar24;
                            }
                            if (uVar32 == 4) {
                              uVar25 = (ulong)(0xf - uVar57);
                            }
                            uVar43 = puVar50[uVar25 * 3];
                            plVar29 = (long *)0x0;
                            puVar47 = puVar50;
                            if (plVar30[uVar25 * 3 + 0x38] - uVar43 != 0) {
                              plVar29 = (long *)((long)(plVar30[uVar25 * 3 + 0x38] - uVar43) >> 2);
                              iVar40 = ((iVar69 + (iVar54 >> 3)) - (iVar52 >> 3)) - iVar40;
                              lVar61 = 0x14;
                              while( true ) {
                                if ((long *)(long)iVar40 < plVar29) {
                                  fVar79 = *(float *)(uVar43 + (long)iVar40 * 4);
                                  if ((fVar79 != fVar78) || (NAN(fVar79) || NAN(fVar78))) {
                                    *(float *)(lVar70 + -4 + lVar61) = fVar79;
                                  }
                                }
                                if (lVar61 == 0xb4) break;
                                if ((long *)(long)(iVar40 + 1) < plVar29) {
                                  fVar79 = *(float *)(uVar43 + (long)(iVar40 + 1) * 4);
                                  if ((fVar79 != fVar78) || (NAN(fVar79) || NAN(fVar78))) {
                                    *(float *)(lVar70 + lVar61) = fVar79;
                                  }
                                }
                                lVar61 = lVar61 + 8;
                                iVar40 = iVar40 + 2;
                              }
                            }
                          }
                        }
                        else {
                          if (sVar8 == 0x7fff) goto LAB_0525cfb3;
                          fVar79 = fVar84 / (fVar80 * fVar80);
                          pfVar33[1] = (float)(int)sVar8 * fVar79 + pfVar33[1];
                          pfVar33[2] = pfVar33[2] + fVar79;
                          if ((fVar85 <= fVar80) || ((char)uVar34 == '\0')) goto LAB_0525b743;
                          iVar69 = (int)(short)param_2[0x19] >> 0x1f;
                          iVar54 = iVar69 - (short)param_2[0x19];
                          iVar52 = iVar54 + 7;
                          if (-1 < iVar54) {
                            iVar52 = iVar54;
                          }
                          iVar54 = (int)plVar30[1] >> 0x1f;
                          uVar42 = iVar54 - (int)plVar30[1];
                          uVar46 = uVar42 + 7;
                          if (-1 < (int)uVar42) {
                            uVar46 = uVar42;
                          }
                          plVar29 = (long *)(ulong)uVar46;
                          if ((((uVar32 == 4) || (uVar57 == 4)) || (uVar32 == 0)) || (uVar57 == 0))
                          {
                            uVar42 = uVar39;
                            if (uVar32 == 0) {
                              uVar42 = uVar57;
                            }
                            uVar25 = (ulong)(uVar42 + 3);
                            if (uVar57 == 4) {
                              uVar25 = uVar24;
                            }
                            if (uVar32 == 4) {
                              uVar25 = (ulong)(0xf - uVar57);
                            }
                            uVar43 = puVar50[uVar25 * 3];
                            lVar61 = plVar30[uVar25 * 3 + 0x38] - uVar43;
                            if (lVar61 != 0) {
                              uVar46 = ((int)uVar46 >> 3) - iVar54;
                              plVar29 = (long *)(ulong)uVar46;
                              lVar62 = 0;
                              do {
                                uVar25 = (ulong)(int)((iVar69 - (iVar52 >> 3)) + uVar46 +
                                                     (int)lVar62);
                                if (uVar25 < (ulong)(lVar61 >> 2)) {
                                  fVar80 = *(float *)(uVar43 + uVar25 * 4);
                                  if ((fVar80 != fVar78) || (NAN(fVar80) || NAN(fVar78))) {
                                    fVar5 = *(float *)(lVar70 + 0x10 + lVar62 * 4);
                                    uVar42 = -(uint)(fVar5 != fVar78);
                                    *(uint *)(lVar70 + 0x10 + lVar62 * 4) =
                                         ~uVar42 & (uint)(fVar80 * fVar79) |
                                         (uint)(fVar80 * fVar79 + fVar5) & uVar42;
                                  }
                                }
                                lVar62 = lVar62 + 1;
                              } while (lVar62 != 0x29);
                            }
                          }
                          fVar80 = fVar79 + *(float *)(lVar27 + 0xc);
                        }
                        *(float *)(lVar27 + 0xc) = fVar80;
                      }
                    }
                  }
                  else {
                    uVar25 = uVar24;
                    if (uVar57 == 4) {
LAB_0525b790:
                      sVar8 = *(short *)((long)plVar30 + uVar25 * 2 + 0x12);
                      goto joined_r0x0525b91c;
                    }
                    if (uVar32 == 0) {
                      sVar8 = *(short *)((long)plVar30 + (ulong)(uVar57 + 3) * 2 + 0x12);
                      goto joined_r0x0525b91c;
                    }
                    uVar25 = (ulong)(3 - uVar32);
                    if (uVar57 == 0) goto LAB_0525b790;
                  }
LAB_0525b743:
                  uVar57 = uVar57 + 1;
                } while (uVar57 != 5);
                uVar32 = uVar32 + 1;
              } while (uVar32 != 5);
              if (fVar75 < fVar78) {
                if (fVar75 < _DAT_011983fc) {
                  fVar75 = (float)func_0x0eee37f0();
                  fVar76 = _DAT_011986e8;
                  fVar78 = _DAT_011987f4;
                  fVar82 = _DAT_011984a4;
                  fVar83 = _DAT_01198634;
                  fVar84 = _DAT_011983f0;
                  fVar85 = _DAT_01198858;
                  fVar86 = fStack_b4;
                  if (fVar75 < *pfVar33) goto LAB_0525bcd5;
                }
                else {
                  fVar75 = SQRT(fVar75);
                  if (fVar75 < *pfVar33) {
LAB_0525bcd5:
                    if (uVar41 < 5 && uVar56 < 5) {
                      bVar59 = uVar41 == 4;
                      uVar32 = uVar41 + 3;
                      if (bVar59) {
                        uVar32 = uVar56 + 7;
                      }
                      bVar74 = uVar56 == 4;
                      if (bVar74) {
                        uVar32 = 0xf - uVar41;
                      }
                      if ((!bVar74 && !bVar59) && uVar56 != 0) {
                        uVar32 = 3 - uVar56;
                      }
                      if (uVar41 != 0 && ((!bVar74 && !bVar59) && uVar56 != 0)) goto LAB_0525b5f7;
                      lVar27 = 0;
                      do {
                        lVar61 = plStack_58[(ulong)uVar32 * 3];
                        lVar62 = (plStack_58 + (ulong)uVar32 * 3)[1];
                        uVar37 = 0xffff;
                        if (lVar61 != lVar62) {
                          iVar54 = (int)(short)param_2[0x19] >> 0x1f;
                          iVar69 = iVar54 - (short)param_2[0x19];
                          iVar52 = iVar69 + 3;
                          if (-1 < iVar69) {
                            iVar52 = iVar69;
                          }
                          iVar40 = (int)plVar30[1] >> 0x1f;
                          iVar64 = iVar40 - (int)plVar30[1];
                          iVar69 = iVar64 + 3;
                          if (-1 < iVar64) {
                            iVar69 = iVar64;
                          }
                          uVar56 = (iVar69 >> 2) - iVar40;
                          puVar47 = (ulong *)(ulong)uVar56;
                          uVar24 = (ulong)(int)((iVar54 - (iVar52 >> 2)) + uVar56 + (int)lVar27);
                          if (uVar24 < (ulong)(lVar62 - lVar61 >> 1)) {
                            uVar37 = *(undefined2 *)(lVar61 + uVar24 * 2);
                          }
                        }
                        *(undefined2 *)(lVar70 + 0xde + lVar27 * 2) = uVar37;
                        lVar27 = lVar27 + 1;
                      } while (lVar27 != 0x60);
                    }
                    else {
LAB_0525b5f7:
                      puVar4 = (undefined4 *)(lStack_50 + 0xb0 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                      puVar4 = (undefined4 *)(lStack_50 + 0xa0 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                      puVar4 = (undefined4 *)(lStack_50 + 0x90 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                      puVar4 = (undefined4 *)(lStack_50 + 0x80 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                      puVar4 = (undefined4 *)(lStack_50 + 0x70 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                      puVar4 = (undefined4 *)(lStack_50 + 0x60 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                      puVar4 = (undefined4 *)(lStack_50 + 0x50 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                      puVar4 = (undefined4 *)(lStack_50 + 0x40 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                      puVar4 = (undefined4 *)(lStack_50 + 0x30 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                      puVar4 = (undefined4 *)(lStack_50 + 0x20 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                      puVar4 = (undefined4 *)(lStack_50 + 0x10 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                      puVar4 = (undefined4 *)(lStack_50 + lStack_38);
                      *puVar4 = 0xffffffff;
                      puVar4[1] = 0xffffffff;
                      puVar4[2] = 0xffffffff;
                      puVar4[3] = 0xffffffff;
                    }
                    *pfVar33 = fVar75;
                  }
                }
              }
              lVar67 = lVar67 + 1;
              puStack_e8 = puStack_e8 + 0x34;
              lVar70 = lVar70 + 0x1a0;
            } while (lVar67 != 4);
            lVar27 = lStack_68 + 1;
            puVar45 = puVar45 + 0xd0;
            lVar70 = lStack_60 + 0x680;
          } while (lVar27 != 4);
          plVar73 = (long *)CONCAT71((uint7)(uint3)(uVar38 >> 8),1);
        }
        puVar47 = puStack_88;
        if ((char)plStack_98 == '\x01') {
          uVar34 = *puStack_a8;
          uVar24 = puStack_a8[1];
          *puStack_a8 = puStack_160[-2];
          *(char *)(puStack_a8 + 1) = (char)puStack_160[-1];
          puStack_160[-2] = uVar34;
          *(char *)(puStack_160 + -1) = (char)uVar24;
          puStack_160 = puStack_160 + -2;
          uVar34 = uStack_b0;
        }
        else {
          uVar34 = uStack_b0 + 1;
        }
        if ((ulong)((long)puStack_160 - (long)puVar71 >> 4) <= uVar34) {
          uVar34 = 0;
        }
        if (puStack_88 != (ulong *)0x0) {
          LOCK();
          puVar50 = puStack_88 + 1;
          uVar24 = *puVar50;
          *puVar50 = *puVar50 - 1;
          UNLOCK();
          if (uVar24 == 0) {
            (**(code **)(*puStack_88 + 0x10))(puStack_88);
            func_0x0412c2d0(puVar47);
          }
        }
      } while (puVar71 != puStack_160);
      puStack_160 = puVar71;
      if (((ulong)plVar73 & 1) == 0) goto LAB_0525cacf;
      lVar70 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1980);
      if (lVar70 == 0) {
LAB_0525d1a4:
        func_0x0eec74c0(0x1980,0);
      }
      lVar48 = 0;
      func_0x0eee2dd0(lVar70 + 0x194,0,0x4cc);
      FUN_0525f060(lVar70);
      func_0x0eee2dd0(lVar70 + 0x7f4,0,0x4cc);
      FUN_0525f060(lVar70 + 0x660);
      func_0x0eee2dd0(lVar70 + 0xe54,0,0x4cc);
      FUN_0525f060(lVar70 + 0xcc0);
      func_0x0eee2dd0(lVar70 + 0x14b4,0,0x4cc);
      FUN_0525f060(lVar70 + 0x1320);
      fVar84 = _UNK_014e223c;
      fVar83 = _UNK_014e2238;
      fVar82 = _UNK_014e2234;
      uVar20 = _DAT_014e2230;
      fVar78 = _DAT_011987f4;
      fVar76 = _DAT_011986e8;
      plStack_c8 = (long *)(lVar70 + 0xac);
      uStack_d0 = lVar26 + 0x67e;
      lVar61 = lVar70 + 0xb6;
      lVar62 = lVar26 + 0xe8;
      lVar68 = lVar70 + 0x16c;
      lVar65 = lVar26 + 0xb4;
      lVar27 = lVar26 + 0x18;
      lVar67 = lVar70 + 0x10;
      do {
        lVar44 = lVar48 * 0x660;
        lVar35 = lVar48 * 0x680;
        bVar59 = (ulong)(lVar70 + 8 + lVar44) < (ulong)(lVar26 + 0x594 + lVar35);
        bVar74 = lVar26 + lVar35 + 0x10U < (ulong)(lVar70 + 0x574 + lVar44);
        lVar49 = 0;
        lVar51 = lVar67;
        lVar58 = lVar61;
        lVar60 = lVar62;
        lVar63 = lVar68;
        lVar66 = lVar65;
        lVar72 = lVar27;
        do {
          lVar2 = lVar44 + lVar70 + lVar49 * 0x198;
          lVar3 = lVar35 + lVar26 + lVar49 * 0x1a0;
          *(undefined4 *)(lVar44 + lVar70 + lVar49 * 0x198) =
               *(undefined4 *)(lVar35 + lVar26 + lVar49 * 0x1a0);
          if ((ulong)(lStack_a0 + lVar35) < (ulong)(lVar70 + 0x634 + lVar44) &&
              plStack_c8 + lVar48 * 0xcc < (long *)(uStack_d0 + lVar35)) {
            lVar53 = 0;
            do {
              *(undefined2 *)(lVar58 + -10 + lVar53 * 2) =
                   *(undefined2 *)(lVar60 + -10 + lVar53 * 2);
              *(undefined2 *)(lVar58 + -8 + lVar53 * 2) = *(undefined2 *)(lVar60 + -8 + lVar53 * 2);
              *(undefined2 *)(lVar58 + -6 + lVar53 * 2) = *(undefined2 *)(lVar60 + -6 + lVar53 * 2);
              *(undefined2 *)(lVar58 + -4 + lVar53 * 2) = *(undefined2 *)(lVar60 + -4 + lVar53 * 2);
              *(undefined2 *)(lVar58 + -2 + lVar53 * 2) = *(undefined2 *)(lVar60 + -2 + lVar53 * 2);
              *(undefined2 *)(lVar58 + lVar53 * 2) = *(undefined2 *)(lVar60 + lVar53 * 2);
              lVar53 = lVar53 + 6;
            } while (lVar53 != 0x60);
            cVar7 = *(char *)(lVar3 + 0x19e);
          }
          else {
            uVar31 = *(undefined8 *)(lVar3 + 0xe6);
            uVar22 = *(undefined8 *)(lVar3 + 0xee);
            uVar23 = *(undefined8 *)(lVar3 + 0xf6);
            *(undefined8 *)(lVar2 + 0xac) = *(undefined8 *)(lVar3 + 0xde);
            *(undefined8 *)(lVar2 + 0xb4) = uVar31;
            *(undefined8 *)(lVar2 + 0xbc) = uVar22;
            *(undefined8 *)(lVar2 + 0xc4) = uVar23;
            uVar31 = *(undefined8 *)(lVar3 + 0x106);
            uVar22 = *(undefined8 *)(lVar3 + 0x10e);
            uVar23 = *(undefined8 *)(lVar3 + 0x116);
            *(undefined8 *)(lVar2 + 0xcc) = *(undefined8 *)(lVar3 + 0xfe);
            *(undefined8 *)(lVar2 + 0xd4) = uVar31;
            *(undefined8 *)(lVar2 + 0xdc) = uVar22;
            *(undefined8 *)(lVar2 + 0xe4) = uVar23;
            uVar31 = *(undefined8 *)(lVar3 + 0x126);
            uVar22 = *(undefined8 *)(lVar3 + 0x12e);
            uVar23 = *(undefined8 *)(lVar3 + 0x136);
            *(undefined8 *)(lVar2 + 0xec) = *(undefined8 *)(lVar3 + 0x11e);
            *(undefined8 *)(lVar2 + 0xf4) = uVar31;
            *(undefined8 *)(lVar2 + 0xfc) = uVar22;
            *(undefined8 *)(lVar2 + 0x104) = uVar23;
            uVar31 = *(undefined8 *)(lVar3 + 0x146);
            uVar22 = *(undefined8 *)(lVar3 + 0x14e);
            uVar23 = *(undefined8 *)(lVar3 + 0x156);
            *(undefined8 *)(lVar2 + 0x10c) = *(undefined8 *)(lVar3 + 0x13e);
            *(undefined8 *)(lVar2 + 0x114) = uVar31;
            *(undefined8 *)(lVar2 + 0x11c) = uVar22;
            *(undefined8 *)(lVar2 + 0x124) = uVar23;
            uVar31 = *(undefined8 *)(lVar3 + 0x166);
            uVar22 = *(undefined8 *)(lVar3 + 0x16e);
            uVar23 = *(undefined8 *)(lVar3 + 0x176);
            *(undefined8 *)(lVar2 + 300) = *(undefined8 *)(lVar3 + 0x15e);
            *(undefined8 *)(lVar2 + 0x134) = uVar31;
            *(undefined8 *)(lVar2 + 0x13c) = uVar22;
            *(undefined8 *)(lVar2 + 0x144) = uVar23;
            uVar31 = *(undefined8 *)(lVar3 + 0x186);
            uVar22 = *(undefined8 *)(lVar3 + 0x18e);
            uVar23 = *(undefined8 *)(lVar3 + 0x196);
            *(undefined8 *)(lVar2 + 0x14c) = *(undefined8 *)(lVar3 + 0x17e);
            *(undefined8 *)(lVar2 + 0x154) = uVar31;
            *(undefined8 *)(lVar2 + 0x15c) = uVar22;
            *(undefined8 *)(lVar2 + 0x164) = uVar23;
            cVar7 = *(char *)(lVar3 + 0x19e);
          }
          if (cVar7 == '\x01') {
            lVar53 = 0;
            do {
              cVar7 = *(char *)(lVar66 + lVar53);
              if (cVar7 != '\x7f') {
                if (cVar7 < '\x01') {
                  if (cVar7 < '\0') {
                    *(undefined1 *)(lVar63 + lVar53) = 0xff;
                  }
                  else {
                    *(undefined1 *)(lVar63 + lVar53) = 0;
                  }
                }
                else {
                  *(undefined1 *)(lVar63 + lVar53) = 1;
                }
              }
              lVar53 = lVar53 + 1;
            } while (lVar53 != 0x29);
          }
          if (*(char *)(lVar3 + 0x19f) == '\x01') {
            *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(lVar3 + 4);
            *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(lVar3 + 0x10);
            *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)(lVar3 + 0x14);
            *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar3 + 0x18);
            *(undefined4 *)(lVar2 + 0x14) = *(undefined4 *)(lVar3 + 0x1c);
            *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar3 + 0x20);
            *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(lVar3 + 0x24);
            *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar3 + 0x28);
            *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(lVar3 + 0x2c);
            *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(lVar3 + 0x30);
            *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(lVar3 + 0x34);
            *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(lVar3 + 0x38);
            *(undefined4 *)(lVar2 + 0x34) = *(undefined4 *)(lVar3 + 0x3c);
            *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(lVar3 + 0x40);
            *(undefined4 *)(lVar2 + 0x3c) = *(undefined4 *)(lVar3 + 0x44);
            *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(lVar3 + 0x48);
            *(undefined4 *)(lVar2 + 0x44) = *(undefined4 *)(lVar3 + 0x4c);
            *(undefined4 *)(lVar2 + 0x48) = *(undefined4 *)(lVar3 + 0x50);
            *(undefined4 *)(lVar2 + 0x4c) = *(undefined4 *)(lVar3 + 0x54);
            *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(lVar3 + 0x58);
            *(undefined4 *)(lVar2 + 0x54) = *(undefined4 *)(lVar3 + 0x5c);
            *(undefined4 *)(lVar2 + 0x58) = *(undefined4 *)(lVar3 + 0x60);
            *(undefined4 *)(lVar2 + 0x5c) = *(undefined4 *)(lVar3 + 100);
            *(undefined4 *)(lVar2 + 0x60) = *(undefined4 *)(lVar3 + 0x68);
            *(undefined4 *)(lVar2 + 100) = *(undefined4 *)(lVar3 + 0x6c);
            *(undefined4 *)(lVar2 + 0x68) = *(undefined4 *)(lVar3 + 0x70);
            *(undefined4 *)(lVar2 + 0x6c) = *(undefined4 *)(lVar3 + 0x74);
            *(undefined4 *)(lVar2 + 0x70) = *(undefined4 *)(lVar3 + 0x78);
            *(undefined4 *)(lVar2 + 0x74) = *(undefined4 *)(lVar3 + 0x7c);
            *(undefined4 *)(lVar2 + 0x78) = *(undefined4 *)(lVar3 + 0x80);
            *(undefined4 *)(lVar2 + 0x7c) = *(undefined4 *)(lVar3 + 0x84);
            *(undefined4 *)(lVar2 + 0x80) = *(undefined4 *)(lVar3 + 0x88);
            *(undefined4 *)(lVar2 + 0x84) = *(undefined4 *)(lVar3 + 0x8c);
            *(undefined4 *)(lVar2 + 0x88) = *(undefined4 *)(lVar3 + 0x90);
            *(undefined4 *)(lVar2 + 0x8c) = *(undefined4 *)(lVar3 + 0x94);
            *(undefined4 *)(lVar2 + 0x90) = *(undefined4 *)(lVar3 + 0x98);
            *(undefined4 *)(lVar2 + 0x94) = *(undefined4 *)(lVar3 + 0x9c);
            *(undefined4 *)(lVar2 + 0x98) = *(undefined4 *)(lVar3 + 0xa0);
            *(undefined4 *)(lVar2 + 0x9c) = *(undefined4 *)(lVar3 + 0xa4);
            *(undefined4 *)(lVar2 + 0xa0) = *(undefined4 *)(lVar3 + 0xa8);
            *(undefined4 *)(lVar2 + 0xa4) = *(undefined4 *)(lVar3 + 0xac);
            *(undefined4 *)(lVar2 + 0xa8) = *(undefined4 *)(lVar3 + 0xb0);
          }
          else {
            if (fVar76 < *(float *)(lVar3 + 8)) {
              *(float *)(lVar2 + 4) = *(float *)(lVar3 + 4) / *(float *)(lVar3 + 8);
            }
            fVar85 = *(float *)(lVar3 + 0xc);
            if (fVar76 < fVar85) {
              *(undefined4 *)(lVar2 + 8) = uVar20;
              *(float *)(lVar2 + 0xc) = fVar82;
              *(float *)(lVar2 + 0x10) = fVar83;
              *(float *)(lVar2 + 0x14) = fVar84;
              *(undefined4 *)(lVar2 + 0x18) = uVar20;
              *(float *)(lVar2 + 0x1c) = fVar82;
              *(float *)(lVar2 + 0x20) = fVar83;
              *(float *)(lVar2 + 0x24) = fVar84;
              *(undefined4 *)(lVar2 + 0x28) = uVar20;
              *(float *)(lVar2 + 0x2c) = fVar82;
              *(float *)(lVar2 + 0x30) = fVar83;
              *(float *)(lVar2 + 0x34) = fVar84;
              *(undefined4 *)(lVar2 + 0x38) = uVar20;
              *(float *)(lVar2 + 0x3c) = fVar82;
              *(float *)(lVar2 + 0x40) = fVar83;
              *(float *)(lVar2 + 0x44) = fVar84;
              *(undefined4 *)(lVar2 + 0x48) = uVar20;
              *(float *)(lVar2 + 0x4c) = fVar82;
              *(float *)(lVar2 + 0x50) = fVar83;
              *(float *)(lVar2 + 0x54) = fVar84;
              *(undefined4 *)(lVar2 + 0x58) = uVar20;
              *(float *)(lVar2 + 0x5c) = fVar82;
              *(float *)(lVar2 + 0x60) = fVar83;
              *(float *)(lVar2 + 100) = fVar84;
              *(undefined4 *)(lVar2 + 0x68) = uVar20;
              *(float *)(lVar2 + 0x6c) = fVar82;
              *(float *)(lVar2 + 0x70) = fVar83;
              *(float *)(lVar2 + 0x74) = fVar84;
              *(undefined4 *)(lVar2 + 0x78) = uVar20;
              *(float *)(lVar2 + 0x7c) = fVar82;
              *(float *)(lVar2 + 0x80) = fVar83;
              *(float *)(lVar2 + 0x84) = fVar84;
              *(undefined4 *)(lVar2 + 0x88) = uVar20;
              *(float *)(lVar2 + 0x8c) = fVar82;
              *(float *)(lVar2 + 0x90) = fVar83;
              *(float *)(lVar2 + 0x94) = fVar84;
              *(undefined4 *)(lVar2 + 0x98) = uVar20;
              *(float *)(lVar2 + 0x9c) = fVar82;
              *(float *)(lVar2 + 0xa0) = fVar83;
              *(float *)(lVar2 + 0xa4) = fVar84;
              *(undefined4 *)(lVar2 + 0xa8) = 0x7f7fffff;
              if (bVar74 && bVar59) {
                lVar53 = 0;
                fVar86 = *(float *)(lVar3 + 0x10);
                if ((fVar86 != fVar78) || (NAN(fVar86) || NAN(fVar78))) goto LAB_0525ca78;
              }
              else {
                auVar6 = *(undefined1 (*) [16])(lVar3 + 0x10);
                auVar81._4_4_ = fVar85;
                auVar81._0_4_ = fVar85;
                auVar81._8_4_ = fVar85;
                auVar81._12_4_ = fVar85;
                auVar81 = divps(auVar6,auVar81);
                if ((auVar6._0_4_ != fVar78) || (NAN(auVar6._0_4_) || NAN(fVar78))) {
                  *(int *)(lVar2 + 8) = auVar81._0_4_;
                }
                if (auVar6._4_4_ != fVar82) {
                  *(int *)(lVar2 + 0xc) = auVar81._4_4_;
                }
                if (auVar6._8_4_ != fVar83) {
                  *(int *)(lVar2 + 0x10) = auVar81._8_4_;
                }
                if (auVar6._12_4_ != fVar84) {
                  *(int *)(lVar2 + 0x14) = auVar81._12_4_;
                }
                auVar6 = *(undefined1 (*) [16])(lVar3 + 0x20);
                auVar11._4_4_ = fVar85;
                auVar11._0_4_ = fVar85;
                auVar11._8_4_ = fVar85;
                auVar11._12_4_ = fVar85;
                auVar81 = divps(auVar6,auVar11);
                if ((auVar6._0_4_ != fVar78) || (NAN(auVar6._0_4_) || NAN(fVar78))) {
                  *(int *)(lVar2 + 0x18) = auVar81._0_4_;
                }
                if (auVar6._4_4_ != fVar82) {
                  *(int *)(lVar2 + 0x1c) = auVar81._4_4_;
                }
                if (auVar6._8_4_ != fVar83) {
                  *(int *)(lVar2 + 0x20) = auVar81._8_4_;
                }
                if (auVar6._12_4_ != fVar84) {
                  *(int *)(lVar2 + 0x24) = auVar81._12_4_;
                }
                auVar6 = *(undefined1 (*) [16])(lVar3 + 0x30);
                auVar12._4_4_ = fVar85;
                auVar12._0_4_ = fVar85;
                auVar12._8_4_ = fVar85;
                auVar12._12_4_ = fVar85;
                auVar81 = divps(auVar6,auVar12);
                if ((auVar6._0_4_ != fVar78) || (NAN(auVar6._0_4_) || NAN(fVar78))) {
                  *(int *)(lVar2 + 0x28) = auVar81._0_4_;
                }
                if (auVar6._4_4_ != fVar82) {
                  *(int *)(lVar2 + 0x2c) = auVar81._4_4_;
                }
                if (auVar6._8_4_ != fVar83) {
                  *(int *)(lVar2 + 0x30) = auVar81._8_4_;
                }
                if (auVar6._12_4_ != fVar84) {
                  *(int *)(lVar2 + 0x34) = auVar81._12_4_;
                }
                auVar6 = *(undefined1 (*) [16])(lVar3 + 0x40);
                auVar13._4_4_ = fVar85;
                auVar13._0_4_ = fVar85;
                auVar13._8_4_ = fVar85;
                auVar13._12_4_ = fVar85;
                auVar81 = divps(auVar6,auVar13);
                if ((auVar6._0_4_ != fVar78) || (NAN(auVar6._0_4_) || NAN(fVar78))) {
                  *(int *)(lVar2 + 0x38) = auVar81._0_4_;
                }
                if (auVar6._4_4_ != fVar82) {
                  *(int *)(lVar2 + 0x3c) = auVar81._4_4_;
                }
                if (auVar6._8_4_ != fVar83) {
                  *(int *)(lVar2 + 0x40) = auVar81._8_4_;
                }
                if (auVar6._12_4_ != fVar84) {
                  *(int *)(lVar2 + 0x44) = auVar81._12_4_;
                }
                auVar6 = *(undefined1 (*) [16])(lVar3 + 0x50);
                auVar14._4_4_ = fVar85;
                auVar14._0_4_ = fVar85;
                auVar14._8_4_ = fVar85;
                auVar14._12_4_ = fVar85;
                auVar81 = divps(auVar6,auVar14);
                if ((auVar6._0_4_ != fVar78) || (NAN(auVar6._0_4_) || NAN(fVar78))) {
                  *(int *)(lVar2 + 0x48) = auVar81._0_4_;
                }
                if (auVar6._4_4_ != fVar82) {
                  *(int *)(lVar2 + 0x4c) = auVar81._4_4_;
                }
                if (auVar6._8_4_ != fVar83) {
                  *(int *)(lVar2 + 0x50) = auVar81._8_4_;
                }
                if (auVar6._12_4_ != fVar84) {
                  *(int *)(lVar2 + 0x54) = auVar81._12_4_;
                }
                auVar6 = *(undefined1 (*) [16])(lVar3 + 0x60);
                auVar15._4_4_ = fVar85;
                auVar15._0_4_ = fVar85;
                auVar15._8_4_ = fVar85;
                auVar15._12_4_ = fVar85;
                auVar81 = divps(auVar6,auVar15);
                if ((auVar6._0_4_ != fVar78) || (NAN(auVar6._0_4_) || NAN(fVar78))) {
                  *(int *)(lVar2 + 0x58) = auVar81._0_4_;
                }
                if (auVar6._4_4_ != fVar82) {
                  *(int *)(lVar2 + 0x5c) = auVar81._4_4_;
                }
                if (auVar6._8_4_ != fVar83) {
                  *(int *)(lVar2 + 0x60) = auVar81._8_4_;
                }
                if (auVar6._12_4_ != fVar84) {
                  *(int *)(lVar2 + 100) = auVar81._12_4_;
                }
                auVar6 = *(undefined1 (*) [16])(lVar3 + 0x70);
                auVar16._4_4_ = fVar85;
                auVar16._0_4_ = fVar85;
                auVar16._8_4_ = fVar85;
                auVar16._12_4_ = fVar85;
                auVar81 = divps(auVar6,auVar16);
                if ((auVar6._0_4_ != fVar78) || (NAN(auVar6._0_4_) || NAN(fVar78))) {
                  *(int *)(lVar2 + 0x68) = auVar81._0_4_;
                }
                if (auVar6._4_4_ != fVar82) {
                  *(int *)(lVar2 + 0x6c) = auVar81._4_4_;
                }
                if (auVar6._8_4_ != fVar83) {
                  *(int *)(lVar2 + 0x70) = auVar81._8_4_;
                }
                if (auVar6._12_4_ != fVar84) {
                  *(int *)(lVar2 + 0x74) = auVar81._12_4_;
                }
                auVar6 = *(undefined1 (*) [16])(lVar3 + 0x80);
                auVar17._4_4_ = fVar85;
                auVar17._0_4_ = fVar85;
                auVar17._8_4_ = fVar85;
                auVar17._12_4_ = fVar85;
                auVar81 = divps(auVar6,auVar17);
                if ((auVar6._0_4_ != fVar78) || (NAN(auVar6._0_4_) || NAN(fVar78))) {
                  *(int *)(lVar2 + 0x78) = auVar81._0_4_;
                }
                if (auVar6._4_4_ != fVar82) {
                  *(int *)(lVar2 + 0x7c) = auVar81._4_4_;
                }
                if (auVar6._8_4_ != fVar83) {
                  *(int *)(lVar2 + 0x80) = auVar81._8_4_;
                }
                if (auVar6._12_4_ != fVar84) {
                  *(int *)(lVar2 + 0x84) = auVar81._12_4_;
                }
                auVar6 = *(undefined1 (*) [16])(lVar3 + 0x90);
                auVar18._4_4_ = fVar85;
                auVar18._0_4_ = fVar85;
                auVar18._8_4_ = fVar85;
                auVar18._12_4_ = fVar85;
                auVar81 = divps(auVar6,auVar18);
                if ((auVar6._0_4_ != fVar78) || (NAN(auVar6._0_4_) || NAN(fVar78))) {
                  *(int *)(lVar2 + 0x88) = auVar81._0_4_;
                }
                if (auVar6._4_4_ != fVar82) {
                  *(int *)(lVar2 + 0x8c) = auVar81._4_4_;
                }
                if (auVar6._8_4_ != fVar83) {
                  *(int *)(lVar2 + 0x90) = auVar81._8_4_;
                }
                if (auVar6._12_4_ != fVar84) {
                  *(int *)(lVar2 + 0x94) = auVar81._12_4_;
                }
                auVar6 = *(undefined1 (*) [16])(lVar3 + 0xa0);
                auVar19._4_4_ = fVar85;
                auVar19._0_4_ = fVar85;
                auVar19._8_4_ = fVar85;
                auVar19._12_4_ = fVar85;
                auVar81 = divps(auVar6,auVar19);
                if ((auVar6._0_4_ != fVar78) || (NAN(auVar6._0_4_) || NAN(fVar78))) {
                  *(int *)(lVar2 + 0x98) = auVar81._0_4_;
                }
                if (auVar6._4_4_ != fVar82) {
                  *(int *)(lVar2 + 0x9c) = auVar81._4_4_;
                }
                if (auVar6._8_4_ != fVar83) {
                  *(int *)(lVar2 + 0xa0) = auVar81._8_4_;
                }
                lVar53 = 0x28;
                if (auVar6._12_4_ != fVar84) {
                  *(int *)(lVar2 + 0xa4) = auVar81._12_4_;
                }
                fVar86 = *(float *)(lVar3 + 0xb0);
                if ((fVar86 != fVar78) || (NAN(fVar86) || NAN(fVar78))) {
LAB_0525ca78:
                  *(float *)(lVar2 + 8 + lVar53 * 4) = fVar86 / fVar85;
                }
              }
              if (bVar74 && bVar59) {
                do {
                  fVar86 = *(float *)(lVar72 + -4 + lVar53 * 4);
                  if ((fVar86 != fVar78) || (NAN(fVar86) || NAN(fVar78))) {
                    *(float *)(lVar51 + -4 + lVar53 * 4) = fVar86 / fVar85;
                  }
                  fVar86 = *(float *)(lVar72 + lVar53 * 4);
                  if ((fVar86 != fVar78) || (NAN(fVar86) || NAN(fVar78))) {
                    *(float *)(lVar51 + lVar53 * 4) = fVar86 / fVar85;
                  }
                  lVar53 = lVar53 + 2;
                } while (lVar53 != 0x28);
              }
            }
          }
          lVar49 = lVar49 + 1;
          lVar58 = lVar58 + 0x198;
          lVar60 = lVar60 + 0x1a0;
          lVar63 = lVar63 + 0x198;
          lVar66 = lVar66 + 0x1a0;
          lVar72 = lVar72 + 0x1a0;
          lVar51 = lVar51 + 0x198;
        } while (lVar49 != 4);
        lVar48 = lVar48 + 1;
        lVar61 = lVar61 + 0x660;
        lVar62 = lVar62 + 0x680;
        lVar68 = lVar68 + 0x660;
        lVar65 = lVar65 + 0x680;
        lVar27 = lVar27 + 0x680;
        lVar67 = lVar67 + 0x660;
      } while (lVar48 != 4);
      puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar28 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      puVar28[1] = 0;
      puVar28[2] = 0;
      *puVar28 = &UNK_0ef9ce28;
      uVar34 = *param_3;
      lVar27 = plStack_c0[0x19];
      puVar28[3] = lVar70;
      puVar28[4] = lVar70 + 0x1980;
      puVar28[5] = lVar70 + 0x1980;
      puVar28[6] = CONCAT44((int)(uVar34 >> 0x1c) >> 2,(int)uVar34 << 2) & 0xfffffffcffffffff;
      *(short *)(puVar28 + 7) = (short)lVar27;
      *param_1 = (long)(puVar28 + 3);
      param_1[1] = (long)puVar28;
      puStack_160 = puStack_150;
      param_2 = plStack_c0;
      puVar71 = puStack_150;
    }
    func_0x0412a280(puVar71,(long)puStack_110 - (long)puStack_160);
    func_0x0412a280(lVar26,0x1a00);
    plVar30 = plStack_e0;
    plStack_e0 = (long *)0x0;
    if (plVar30 != (long *)0x0) {
      plVar73 = (long *)plVar30[0xc];
      if (plVar73 == plVar30 + 8) {
        lVar70 = 0x20;
LAB_0525cbd5:
        (**(code **)(*plVar73 + lVar70))();
      }
      else {
        lVar70 = 0x28;
        if (plVar73 != (long *)0x0) goto LAB_0525cbd5;
      }
      if ((char)plVar30[6] == '\x01') {
        plVar73 = plVar55;
        if ((long *)plVar30[4] == (long *)0x0) {
LAB_0525d1cb:
          uVar31 = func_0x04891200();
          func_0x0412a280(plVar73,0x1980);
          func_0x0412a280(puStack_150,(long)puStack_110 - (long)puStack_150);
          func_0x0412a280(lVar26,0x1a00);
          FUN_0525d2e0(&plStack_e0);
          func_0x0eee2d70(uVar31);
          pcVar10 = (code *)swi(3);
          plVar55 = (long *)(*pcVar10)();
          return plVar55;
        }
        (**(code **)(*(long *)plVar30[4] + 0x30))();
      }
      plVar73 = (long *)plVar30[4];
      if (plVar73 == plVar30) {
        lVar26 = 0x20;
LAB_0525cc0e:
        (**(code **)(*plVar73 + lVar26))();
      }
      else {
        lVar26 = 0x28;
        if (plVar73 != (long *)0x0) goto LAB_0525cc0e;
      }
      func_0x0412a280(plVar30,0x70);
    }
  }
  cStack_d8 = '\x01';
  plStack_e0 = plVar55;
  func_0x0412d450(plVar55);
  if ((ulong)param_2[3] < 10000) {
    puVar71 = (ulong *)param_2[1];
  }
  else {
    puVar28 = (undefined8 *)param_2[2];
    while (puVar28 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)*puVar28;
      plVar55 = (long *)puVar28[4];
      if (plVar55 != (long *)0x0) {
        LOCK();
        plVar73 = plVar55 + 1;
        lVar26 = *plVar73;
        *plVar73 = *plVar73 + -1;
        UNLOCK();
        if (lVar26 == 0) {
          (**(code **)(*plVar55 + 0x10))(plVar55);
          func_0x0412c2d0(plVar55);
        }
      }
      func_0x0412a280(puVar28);
      puVar28 = puVar9;
    }
    param_2[2] = 0;
    puVar71 = (ulong *)param_2[1];
    if (puVar71 != (ulong *)0x0) {
      func_0x0eee2dd0(*param_2,0,(long)puVar71 * 8);
    }
    param_2[3] = 0;
  }
  uVar34 = (long)(int)*param_3 + 0x9e3779b9;
  puVar47 = (ulong *)((long)*(int *)((long)param_3 + 4) + 0x9e3779b9 + uVar34 * 0x40 + (uVar34 >> 2)
                     ^ uVar34);
  puVar50 = param_3;
  if (puVar71 != (ulong *)0x0) {
    uVar34 = (long)puVar71 - ((ulong)puVar71 >> 1 & 0x5555555555555555);
    uVar34 = (uVar34 >> 2 & 0x3333333333333333) + (uVar34 & 0x3333333333333333);
    uVar34 = ((uVar34 >> 4) + uVar34 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar34 >> 0x38 < 2) {
      puVar50 = (ulong *)((long)puVar71 - 1U & (ulong)puVar47);
    }
    else {
      puVar50 = puVar47;
      if (puVar71 <= puVar47) {
        puVar50 = (ulong *)((ulong)puVar47 % (ulong)puVar71);
      }
    }
    plVar55 = *(long **)(*param_2 + (long)puVar50 * 8);
    if ((plVar55 != (long *)0x0) && (plVar55 = (long *)*plVar55, plVar55 != (long *)0x0)) {
      if ((byte)(uVar34 >> 0x38) < 2) {
        do {
          if ((ulong *)plVar55[1] == puVar47) {
            if (plVar55[2] == *param_3) goto LAB_0525d0d1;
          }
          else if ((ulong *)((ulong)plVar55[1] & (long)puVar71 - 1U) != puVar50) break;
          plVar55 = (long *)*plVar55;
        } while (plVar55 != (long *)0x0);
      }
      else {
        do {
          puVar45 = (ulong *)plVar55[1];
          if (puVar45 == puVar47) {
            if (plVar55[2] == *param_3) goto LAB_0525d0d1;
          }
          else {
            if (puVar71 <= puVar45) {
              if (((ulong)puVar45 | (ulong)puVar71) >> 0x20 == 0) {
                if ((ulong *)(((ulong)puVar45 & 0xffffffff) % ((ulong)puVar71 & 0xffffffff)) ==
                    puVar50) goto LAB_0525cdba;
                break;
              }
              puVar45 = (ulong *)((ulong)puVar45 % (ulong)puVar71);
            }
            if (puVar45 != puVar50) break;
          }
LAB_0525cdba:
          plVar55 = (long *)*plVar55;
        } while (plVar55 != (long *)0x0);
      }
    }
  }
  plVar29 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar29 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  puStack_88 = (ulong *)0x1;
  *plVar29 = 0;
  plVar29[1] = (long)puVar47;
  plVar29[2] = *param_3;
  lVar26 = param_1[1];
  lVar70 = param_1[1];
  plVar29[3] = *param_1;
  plVar29[4] = lVar70;
  if (lVar26 != 0) {
    LOCK();
    plVar55 = (long *)(lVar26 + 8);
    *plVar55 = *plVar55 + 1;
    UNLOCK();
  }
  plStack_98 = plVar29;
  plStack_90 = param_2;
  if ((long)puVar71 < 0) {
    fVar78 = (float)puVar71;
    fVar76 = *(float *)(param_2 + 4);
    if (puVar71 != (ulong *)0x0) goto LAB_0525cef4;
LAB_0525cf05:
    uVar34 = 1;
    if ((ulong *)0x2 < puVar71) {
      uVar34 = (ulong)(((ulong)puVar71 & (long)puVar71 - 1U) != 0);
    }
    plVar73 = (long *)(uVar34 | (long)puVar71 * 2);
    fVar76 = (float)func_0x0eee3ab0((float)(param_2[3] + 1) / fVar76);
    plVar55 = (long *)((long)(fVar76 - _DAT_01198778) & (long)fVar76 >> 0x3f | (long)fVar76);
    if (plVar55 < plVar73) {
      plVar55 = plVar73;
    }
    plVar30 = (long *)0x2;
    if ((plVar55 == (long *)0x1) || (plVar30 = plVar55, ((ulong)plVar55 & (long)plVar55 - 1U) == 0))
    {
      plVar73 = (long *)param_2[1];
      bVar59 = plVar30 < plVar73;
      if (plVar30 <= plVar73) goto LAB_0525cf97;
LAB_0525cf76:
      FUN_0525f970(param_2,plVar30);
      puVar50 = puVar47;
    }
    else {
      plVar30 = (long *)func_0x0412c3f0();
      plVar73 = (long *)param_2[1];
      bVar59 = plVar30 < plVar73;
      if (plVar73 < plVar30) goto LAB_0525cf76;
LAB_0525cf97:
      puVar50 = puVar47;
      if (bVar59) {
        uVar34 = param_2[3];
        if ((long)uVar34 < 0) {
LAB_0525cfb8:
          fVar76 = (float)uVar34;
        }
        else {
          fVar76 = (float)(long)uVar34;
        }
        fVar76 = (float)func_0x0eee3ab0(fVar76 / *(float *)(param_2 + 4));
        plVar55 = (long *)((long)(fVar76 - _DAT_01198778) & (long)fVar76 >> 0x3f | (long)fVar76);
        if ((plVar73 < (long *)0x3) ||
           (uVar34 = (long)plVar73 - ((ulong)plVar73 >> 1 & 0x5555555555555555),
           uVar34 = (uVar34 >> 2 & 0x3333333333333333) + (uVar34 & 0x3333333333333333),
           1 < (byte)(((uVar34 >> 4) + uVar34 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          plVar55 = (long *)func_0x0412c3f0(plVar55);
        }
        else if ((long *)0x1 < plVar55) {
          lVar26 = 0x3f;
          if ((long)plVar55 - 1U != 0) {
            for (; (long)plVar55 - 1U >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          plVar55 = (long *)(1L << (-((byte)lVar26 ^ 0x3f) & 0x3f));
        }
        if (plVar30 <= plVar55) {
          plVar30 = plVar55;
        }
        puVar50 = puVar47;
        if (plVar30 < plVar73) goto LAB_0525cf76;
      }
    }
    puVar71 = (ulong *)param_2[1];
    if (((ulong)puVar71 & (long)puVar71 - 1U) == 0) {
      puVar50 = (ulong *)((ulong)puVar50 & (long)puVar71 - 1U);
    }
    else if (puVar71 <= puVar50) {
      puVar50 = (ulong *)((ulong)puVar50 % (ulong)puVar71);
    }
  }
  else {
    fVar78 = (float)(long)puVar71;
    fVar76 = *(float *)(param_2 + 4);
    if (puVar71 == (ulong *)0x0) goto LAB_0525cf05;
LAB_0525cef4:
    if (fVar78 * fVar76 < (float)(param_2[3] + 1)) goto LAB_0525cf05;
  }
  lVar26 = *param_2;
  plVar55 = *(long **)(lVar26 + (long)puVar50 * 8);
  if (plVar55 == (long *)0x0) {
    *plVar29 = param_2[2];
    param_2[2] = (long)plVar29;
    *(long **)(lVar26 + (long)puVar50 * 8) = param_2 + 2;
    if (*plVar29 != 0) {
      puVar50 = *(ulong **)(*plVar29 + 8);
      if (((ulong)puVar71 & (long)puVar71 - 1U) == 0) {
        *(long **)(lVar26 + ((ulong)puVar50 & (long)puVar71 - 1U) * 8) = plVar29;
      }
      else {
        if (puVar71 <= puVar50) {
          if (((ulong)puVar50 | (ulong)puVar71) >> 0x20 == 0) {
            *(long **)(lVar26 + (((ulong)puVar50 & 0xffffffff) % ((ulong)puVar71 & 0xffffffff)) * 8)
                 = plVar29;
            goto LAB_0525d0cd;
          }
          puVar50 = (ulong *)((ulong)puVar50 % (ulong)puVar71);
        }
        *(long **)(lVar26 + (long)puVar50 * 8) = plVar29;
      }
    }
  }
  else {
    *plVar29 = *plVar55;
    *plVar55 = (long)plVar29;
  }
LAB_0525d0cd:
  param_2[3] = param_2[3] + 1;
LAB_0525d0d1:
  if (cStack_d8 == '\x01') {
    func_0x0412d520(plStack_e0);
  }
  return param_1;
LAB_0525b0e1:
  lVar26 = plVar73[4];
  uVar20 = *(undefined4 *)((long)plVar73 + 0x1c);
  lVar70 = plVar73[4];
  uVar21 = *(undefined4 *)((long)plVar73 + 0x24);
  *(int *)param_1 = (int)plVar73[3];
  *(undefined4 *)((long)param_1 + 4) = uVar20;
  *(int *)(param_1 + 1) = (int)lVar70;
  *(undefined4 *)((long)param_1 + 0xc) = uVar21;
  if (lVar26 != 0) {
    LOCK();
    plVar73 = (long *)(lVar26 + 8);
    *plVar73 = *plVar73 + 1;
    UNLOCK();
  }
  bVar59 = false;
  goto LAB_0525b0fb;
}


```

### Assembly

```asm
0525af30  PUSH RBP
0525af31  PUSH R15
0525af33  PUSH R14
0525af35  PUSH R13
0525af37  PUSH R12
0525af39  PUSH RBX
0525af3a  SUB RSP,0x148
0525af41  MOV R12,RDI
0525af44  CMP byte ptr [RSI + 0xb8],0x1
0525af4b  JNZ 0x0525af5a
0525af4d  XORPS XMM0,XMM0
0525af50  MOVUPS xmmword ptr [R12],XMM0
0525af55  JMP 0x0525d0ed
0525af5a  MOV R13,RDX
0525af5d  MOV RBP,RSI
0525af60  MOV R14D,0x9e3779b9
0525af66  LEA RDI,[RSI + 0x28]
0525af6a  MOV qword ptr [RSP + 0x58],RDI
0525af6f  CALL 0x0412d550
0525af74  MOV RDI,qword ptr [RBP + 0x8]
0525af78  MOV BL,0x1
0525af7a  TEST RDI,RDI
0525af7d  JZ 0x0525b018
0525af83  MOVSXD RAX,dword ptr [R13]
0525af87  ADD RAX,R14
0525af8a  MOVSXD RCX,dword ptr [R13 + 0x4]
0525af8e  MOV RDX,RAX
0525af91  SHL RDX,0x6
0525af95  ADD RDX,RCX
0525af98  MOV RCX,RAX
0525af9b  SHR RCX,0x2
0525af9f  ADD RCX,R14
0525afa2  ADD RCX,RDX
0525afa5  XOR RCX,RAX
0525afa8  MOV RAX,RDI
0525afab  SHR RAX,0x1
0525afae  MOV RDX,0x5555555555555555
0525afb8  AND RDX,RAX
0525afbb  MOV RAX,RDI
0525afbe  SUB RAX,RDX
0525afc1  MOV RDX,0x3333333333333333
0525afcb  MOV RSI,RAX
0525afce  AND RSI,RDX
0525afd1  SHR RAX,0x2
0525afd5  AND RAX,RDX
0525afd8  ADD RAX,RSI
0525afdb  MOV RDX,RAX
0525afde  SHR RDX,0x4
0525afe2  ADD RDX,RAX
0525afe5  MOV RAX,0xf0f0f0f0f0f0f0f
0525afef  AND RAX,RDX
0525aff2  MOV R10,0x101010101010101
0525affc  IMUL R10,RAX
0525b000  SHR R10,0x38
0525b004  CMP R10,0x1
0525b008  JA 0x0525b022
0525b00a  LEA RSI,[RDI + -0x1]
0525b00e  AND RSI,RCX
0525b011  MOV R14,qword ptr [RSP + 0x58]
0525b016  JMP 0x0525b03a
0525b018  MOV R14,qword ptr [RSP + 0x58]
0525b01d  JMP 0x0525b0fb
0525b022  MOV RSI,RCX
0525b025  CMP RCX,RDI
0525b028  MOV R14,qword ptr [RSP + 0x58]
0525b02d  JC 0x0525b03a
0525b02f  MOV RAX,RCX
0525b032  XOR EDX,EDX
0525b034  DIV RDI
0525b037  MOV RSI,RDX
0525b03a  MOV RAX,qword ptr [RBP]
0525b03e  MOV RAX,qword ptr [RAX + RSI*0x8]
0525b042  TEST RAX,RAX
0525b045  JZ 0x0525b0fb
0525b04b  MOV R8,qword ptr [RAX]
0525b04e  TEST R8,R8
0525b051  JZ 0x0525b0fb
0525b057  MOV R9,qword ptr [R13]
0525b05b  CMP R10D,0x2
0525b05f  JNC 0x0525b07e
0525b061  DEC RDI
0525b064  JMP 0x0525b0ce
0525b070  CMP qword ptr [R8 + 0x10],R9
0525b074  JZ 0x0525b0e1
0525b076  MOV R8,qword ptr [R8]
0525b079  TEST R8,R8
0525b07c  JZ 0x0525b0fb
0525b07e  MOV RAX,qword ptr [R8 + 0x8]
0525b082  CMP RAX,RCX
0525b085  JZ 0x0525b070
0525b087  CMP RAX,RDI
0525b08a  JC 0x0525b0a0
0525b08c  MOV RDX,RAX
0525b08f  OR RDX,RDI
0525b092  SHR RDX,0x20
0525b096  JZ 0x0525b0a7
0525b098  XOR EDX,EDX
0525b09a  DIV RDI
0525b09d  MOV RAX,RDX
0525b0a0  CMP RAX,RSI
0525b0a3  JZ 0x0525b076
0525b0a5  JMP 0x0525b0fb
0525b0a7  XOR EDX,EDX
0525b0a9  DIV EDI
0525b0ab  MOV EAX,EDX
0525b0ad  CMP RAX,RSI
0525b0b0  JZ 0x0525b076
0525b0b2  JMP 0x0525b0fb
0525b0c0  CMP qword ptr [R8 + 0x10],R9
0525b0c4  JZ 0x0525b0e1
0525b0c6  MOV R8,qword ptr [R8]
0525b0c9  TEST R8,R8
0525b0cc  JZ 0x0525b0fb
0525b0ce  MOV RAX,qword ptr [R8 + 0x8]
0525b0d2  CMP RAX,RCX
0525b0d5  JZ 0x0525b0c0
0525b0d7  AND RAX,RDI
0525b0da  CMP RAX,RSI
0525b0dd  JZ 0x0525b0c6
0525b0df  JMP 0x0525b0fb
0525b0e1  MOV RAX,qword ptr [R8 + 0x20]
0525b0e5  MOVUPS XMM0,xmmword ptr [R8 + 0x18]
0525b0ea  MOVUPS xmmword ptr [R12],XMM0
0525b0ef  TEST RAX,RAX
0525b0f2  JZ 0x0525b0f9
0525b0f4  INC.LOCK qword ptr [RAX + 0x8]
0525b0f9  XOR EBX,EBX
0525b0fb  MOV RDI,R14
0525b0fe  CALL 0x0412d610
0525b103  TEST BL,BL
0525b105  JZ 0x0525d0ed
0525b10b  MOV RSI,qword ptr [RBP + 0xc0]
0525b112  TEST RSI,RSI
0525b115  MOV qword ptr [RSP + 0x10],R12
0525b11a  MOV qword ptr [RSP + 0x60],R13
0525b11f  JZ 0x0525b3f1
0525b125  MOV RAX,qword ptr [RSI]
0525b128  LEA RDI,[RSP + 0x98]
0525b130  CALL qword ptr [RAX + 0x118]
0525b136  MOV RAX,qword ptr [RSP + 0x98]
0525b13e  MOV qword ptr [RSP + 0x100],RAX
0525b146  TEST RAX,RAX
0525b149  JZ 0x0525b3f1
0525b14f  LEA RDI,[0xf5463b0]
0525b156  MOV RAX,qword ptr [0x0f5463b0]
0525b15d  MOV ESI,0x1a00
0525b162  CALL qword ptr [RAX + 0x10]
0525b165  MOV R14,RAX
0525b168  TEST RAX,RAX
0525b16b  JZ 0x0525d178
0525b171  LEA RDI,[R14 + 0xdc]
0525b178  MOV EDX,0x5a4
0525b17d  XOR ESI,ESI
0525b17f  CALL 0x0eee2dd0
0525b184  MOV RDI,R14
0525b187  CALL 0x0525eca0
0525b18c  LEA RBX,[R14 + 0x680]
0525b193  LEA RDI,[R14 + 0x75c]
0525b19a  MOV EDX,0x5a4
0525b19f  XOR ESI,ESI
0525b1a1  CALL 0x0eee2dd0
0525b1a6  MOV RDI,RBX
0525b1a9  CALL 0x0525eca0
0525b1ae  LEA RBX,[R14 + 0xd00]
0525b1b5  LEA RDI,[R14 + 0xddc]
0525b1bc  MOV EDX,0x5a4
0525b1c1  XOR ESI,ESI
0525b1c3  CALL 0x0eee2dd0
0525b1c8  MOV RDI,RBX
0525b1cb  CALL 0x0525eca0
0525b1d0  LEA RBX,[R14 + 0x1380]
0525b1d7  MOV qword ptr [RSP + 0x40],R14
0525b1dc  LEA RDI,[R14 + 0x145c]
0525b1e3  MOV EDX,0x5a4
0525b1e8  XOR ESI,ESI
0525b1ea  CALL 0x0eee2dd0
0525b1ef  MOV RDI,RBX
0525b1f2  CALL 0x0525eca0
0525b1f7  LEA RDI,[0xf5463b0]
0525b1fe  MOV RAX,qword ptr [0x0f5463b0]
0525b205  MOV ESI,0xe10
0525b20a  CALL qword ptr [RAX + 0x10]
0525b20d  MOV R15,RAX
0525b210  TEST RAX,RAX
0525b213  JZ 0x0525d189
0525b219  MOV RCX,0xfffffffffffffff
0525b223  MOV RAX,R15
0525b226  ADD RAX,0xe10
0525b22c  MOV qword ptr [RSP + 0x68],RAX
0525b231  MOV EDX,0xfffffff9
0525b236  MOV R14,R15
0525b239  MOV qword ptr [RSP + 0xb8],RBP
0525b241  JMP 0x0525b259
0525b250  CMP EDX,0x8
0525b253  JZ 0x0525b3fe
0525b259  MOV ESI,dword ptr [R13]
0525b25d  ADD ESI,EDX
0525b25f  MOV EDI,EDX
0525b261  IMUL EDI,EDX
0525b264  INC EDX
0525b266  MOV R8D,0xfffffff9
0525b26c  MOV dword ptr [RSP + 0x38],EDX
0525b270  MOV qword ptr [RSP + 0x30],RSI
0525b275  MOV dword ptr [RSP + 0x50],EDI
0525b279  JMP 0x0525b291
0525b280  MOV qword ptr [R14],RBX
0525b283  MOV byte ptr [R14 + 0x8],R9B
0525b287  ADD R14,0x10
0525b28b  CMP R8D,0x8
0525b28f  JZ 0x0525b250
0525b291  MOV EBX,R8D
0525b294  MOV EAX,R8D
0525b297  IMUL EAX,R8D
0525b29b  ADD EAX,EDI
0525b29d  LEA R8D,[RBX + 0x1]
0525b2a1  CMP EAX,0x40
0525b2a4  JA 0x0525b28b
0525b2a6  CMP EDX,0x3
0525b2a9  SETC AL
0525b2ac  CMP R8D,0x3
0525b2b0  SETC R9B
0525b2b4  ADD EBX,dword ptr [R13 + 0x4]
0525b2b8  AND R9B,AL
0525b2bb  SHL RBX,0x20
0525b2bf  OR RBX,RSI
0525b2c2  CMP R14,qword ptr [RSP + 0x68]
0525b2c7  JC 0x0525b280
0525b2c9  MOV byte ptr [RSP + 0x8],R9B
0525b2ce  MOV qword ptr [RSP + 0x18],R14
0525b2d3  SUB R14,R15
0525b2d6  MOV RBP,R14
0525b2d9  SAR RBP,0x4
0525b2dd  LEA RAX,[RBP + 0x1]
0525b2e1  CMP RAX,RCX
0525b2e4  MOV qword ptr [RSP + 0x28],R15
0525b2e9  JA 0x0525d19f
0525b2ef  MOV dword ptr [RSP + 0x20],R8D
0525b2f4  MOV R13,qword ptr [RSP + 0x68]
0525b2f9  SUB R13,R15
0525b2fc  MOV R12,R13
0525b2ff  SAR R12,0x3
0525b303  CMP R12,RAX
0525b306  CMOVBE R12,RAX
0525b30a  MOV RAX,0x7ffffffffffffff0
0525b314  CMP R13,RAX
0525b317  CMOVNC R12,RCX
0525b31b  CMP R12,RCX
0525b31e  JA 0x0525d19a
0525b324  SHL R12,0x4
0525b328  MOV RAX,qword ptr [0x0f5463b0]
0525b32f  LEA RDI,[0xf5463b0]
0525b336  MOV RSI,R12
0525b339  CALL qword ptr [RAX + 0x10]
0525b33c  MOV R15,RAX
0525b33f  TEST RAX,RAX
0525b342  JZ 0x0525b3e2
0525b348  LEA RCX,[R15 + R14*0x1]
0525b34c  MOV qword ptr [R15 + R14*0x1],RBX
0525b350  MOVZX EAX,byte ptr [RSP + 0x8]
0525b355  MOV byte ptr [R15 + R14*0x1 + 0x8],AL
0525b35a  MOV R14,RCX
0525b35d  SHL RBP,0x4
0525b361  MOV RBX,RCX
0525b364  SUB RBX,RBP
0525b367  MOV RDX,qword ptr [RSP + 0x18]
0525b36c  CMP qword ptr [RSP + 0x28],RDX
0525b371  JZ 0x0525b393
0525b373  MOV RAX,qword ptr [RSP + 0x28]
0525b378  MOV RCX,RBX
0525b37b  NOP dword ptr [RAX + RAX*0x1]
0525b380  MOVUPS XMM0,xmmword ptr [RAX]
0525b383  MOVUPS xmmword ptr [RCX],XMM0
0525b386  ADD RAX,0x10
0525b38a  ADD RCX,0x10
0525b38e  CMP RAX,RDX
0525b391  JNZ 0x0525b380
0525b393  ADD R15,R12
0525b396  MOV RDI,qword ptr [RSP + 0x28]
0525b39b  MOV RSI,R13
0525b39e  CALL 0x0412a280
0525b3a3  ADD R14,0x10
0525b3a7  MOV qword ptr [RSP + 0x68],R15
0525b3ac  MOV R15,RBX
0525b3af  MOV R12,qword ptr [RSP + 0x10]
0525b3b4  MOV RBP,qword ptr [RSP + 0xb8]
0525b3bc  MOV R13,qword ptr [RSP + 0x60]
0525b3c1  MOV RCX,0xfffffffffffffff
0525b3cb  MOV EDX,dword ptr [RSP + 0x38]
0525b3cf  MOV RSI,qword ptr [RSP + 0x30]
0525b3d4  MOV EDI,dword ptr [RSP + 0x50]
0525b3d8  MOV R8D,dword ptr [RSP + 0x20]
0525b3dd  JMP 0x0525b28b
0525b3e2  MOV RDI,R12
0525b3e5  XOR ESI,ESI
0525b3e7  CALL 0x0eec74c0
0525b3ec  JMP 0x0525b348
0525b3f1  XORPS XMM0,XMM0
0525b3f4  MOVUPS xmmword ptr [R12],XMM0
0525b3f9  JMP 0x0525cc21
0525b3fe  MOV qword ptr [RSP + 0x18],R14
0525b403  CMP R15,R14
0525b406  JZ 0x0525cacf
0525b40c  MOV RAX,qword ptr [RSP + 0x40]
0525b411  LEA RCX,[RAX + 0xde]
0525b418  MOV qword ptr [RSP + 0xd8],RCX
0525b420  ADD RAX,0xb4
0525b426  MOV qword ptr [RSP + 0xf8],RAX
0525b42e  XOR ECX,ECX
0525b430  XOR R14D,R14D
0525b433  JMP 0x0525b44b
0525b440  CMP R15,qword ptr [RSP + 0x18]
0525b445  JZ 0x0525beda
0525b44b  MOV RAX,qword ptr [RSP + 0x100]
0525b453  MOV RSI,qword ptr [RAX + 0x60]
0525b457  TEST RSI,RSI
0525b45a  MOV qword ptr [RSP + 0x28],R15
0525b45f  JZ 0x0525d1c6
0525b465  MOV qword ptr [RSP + 0xc8],RCX
0525b46d  MOV RDX,RCX
0525b470  SHL RDX,0x4
0525b474  ADD RDX,R15
0525b477  MOV RAX,qword ptr [RSI]
0525b47a  LEA RDI,[RSP + 0xe0]
0525b482  MOV qword ptr [RSP + 0xd0],RDX
0525b48a  CALL qword ptr [RAX + 0x30]
0525b48d  MOV R15,qword ptr [RSP + 0xe8]
0525b495  TEST R15,R15
0525b498  MOVSS XMM7,dword ptr [0x011986e8]
0525b4a0  MOVSS XMM8,dword ptr [0x011987f4]
0525b4a9  MOVSS XMM9,dword ptr [0x011984a4]
0525b4b2  MOVSS XMM10,dword ptr [0x01198634]
0525b4bb  MOVSS XMM11,dword ptr [0x011983f0]
0525b4c4  MOVSS XMM12,dword ptr [0x01198858]
0525b4cd  JZ 0x0525be0d
0525b4d3  MOV RAX,qword ptr [RSP + 0xd0]
0525b4db  MOVZX ECX,byte ptr [RAX + 0x8]
0525b4df  MOV byte ptr [RSP + 0x38],CL
0525b4e3  MOV ECX,dword ptr [RAX]
0525b4e5  MOV R14D,dword ptr [RAX + 0x4]
0525b4e9  MOV EAX,dword ptr [R13]
0525b4ed  MOV EDX,dword ptr [R13 + 0x4]
0525b4f1  SHL ECX,0x2
0525b4f4  MOV qword ptr [RSP + 0xa8],RCX
0525b4fc  SHL R14D,0x2
0525b500  SHL EAX,0x2
0525b503  MOV qword ptr [RSP + 0x108],RAX
0525b50b  SHL EDX,0x2
0525b50e  MOV qword ptr [RSP + 0x130],RDX
0525b516  LEA RAX,[R15 + 0x338]
0525b51d  MOV qword ptr [RSP + 0xb0],RAX
0525b525  LEA RAX,[R15 + 0x1b8]
0525b52c  MOV qword ptr [RSP + 0x88],RAX
0525b534  LEA RAX,[R15 + 0x38]
0525b538  MOV qword ptr [RSP + 0x120],RAX
0525b540  MOV RCX,qword ptr [RSP + 0x40]
0525b545  MOV R13,RCX
0525b548  MOV RDX,qword ptr [RSP + 0xf8]
0525b550  XOR EAX,EAX
0525b552  MOV qword ptr [RSP + 0x50],R14
0525b557  JMP 0x0525b590
0525b560  MOV RAX,qword ptr [RSP + 0x110]
0525b568  INC RAX
0525b56b  ADD RDX,0x680
0525b572  MOV R13,qword ptr [RSP + 0x118]
0525b57a  ADD R13,0x680
0525b581  CMP RAX,0x4
0525b585  MOV RCX,qword ptr [RSP + 0x40]
0525b58a  JZ 0x0525be00
0525b590  IMUL RDI,RAX,0x680
0525b597  MOV RSI,RAX
0525b59a  MOV RAX,qword ptr [RSP + 0x108]
0525b5a2  MOV qword ptr [RSP + 0x110],RSI
0525b5aa  ADD EAX,ESI
0525b5ac  XORPS XMM13,XMM13
0525b5b0  CVTSI2SS XMM13,EAX
0525b5b5  LEA RAX,[RCX + RDI*0x1]
0525b5b9  MOV qword ptr [RSP + 0x138],RAX
0525b5c1  ADD RDI,qword ptr [RSP + 0xd8]
0525b5c9  MOV qword ptr [RSP + 0x128],RDI
0525b5d1  MOV qword ptr [RSP + 0x118],R13
0525b5d9  MOV qword ptr [RSP + 0x90],RDX
0525b5e1  XOR ECX,ECX
0525b5e3  MOV qword ptr [RSP + 0x70],RDX
0525b5e8  MOVSS dword ptr [RSP + 0xc4],XMM13
0525b5f2  JMP 0x0525b691
0525b5f7  PCMPEQD XMM1,XMM1
0525b5fb  MOV RAX,qword ptr [RSP + 0x128]
0525b603  MOV RCX,qword ptr [RSP + 0x140]
0525b60b  MOVDQU xmmword ptr [RAX + RCX*0x1 + 0xb0],XMM1
0525b614  MOVDQU xmmword ptr [RAX + RCX*0x1 + 0xa0],XMM1
0525b61d  MOVDQU xmmword ptr [RAX + RCX*0x1 + 0x90],XMM1
0525b626  MOVDQU xmmword ptr [RAX + RCX*0x1 + 0x80],XMM1
0525b62f  MOVDQU xmmword ptr [RAX + RCX*0x1 + 0x70],XMM1
0525b635  MOVDQU xmmword ptr [RAX + RCX*0x1 + 0x60],XMM1
0525b63b  MOVDQU xmmword ptr [RAX + RCX*0x1 + 0x50],XMM1
0525b641  MOVDQU xmmword ptr [RAX + RCX*0x1 + 0x40],XMM1
0525b647  MOVDQU xmmword ptr [RAX + RCX*0x1 + 0x30],XMM1
0525b64d  MOVDQU xmmword ptr [RAX + RCX*0x1 + 0x20],XMM1
0525b653  MOVDQU xmmword ptr [RAX + RCX*0x1 + 0x10],XMM1
0525b659  MOVDQU xmmword ptr [RAX + RCX*0x1],XMM1
0525b65e  MOV RAX,qword ptr [RSP + 0x48]
0525b663  MOVSS dword ptr [RAX],XMM0
0525b667  MOV RDX,qword ptr [RSP + 0x70]
0525b66c  MOV RCX,qword ptr [RSP + 0x78]
0525b671  INC RCX
0525b674  ADD qword ptr [RSP + 0x90],0x1a0
0525b680  ADD R13,0x1a0
0525b687  CMP RCX,0x4
0525b68b  JZ 0x0525b560
0525b691  MOV RAX,qword ptr [RSP + 0x130]
0525b699  ADD EAX,ECX
0525b69b  XORPS XMM1,XMM1
0525b69e  CVTSI2SS XMM1,EAX
0525b6a2  MOV qword ptr [RSP + 0x78],RCX
0525b6a7  IMUL RDX,RCX,0x1a0
0525b6ae  MOV RCX,qword ptr [RSP + 0x138]
0525b6b6  LEA RAX,[RCX + RDX*0x1]
0525b6ba  ADD RAX,0x19e
0525b6c0  MOV qword ptr [RSP + 0x140],RDX
0525b6c8  ADD RCX,RDX
0525b6cb  MOV qword ptr [RSP + 0x48],RCX
0525b6d0  XOR ECX,ECX
0525b6d2  MOVAPS XMM0,XMM8
0525b6d6  MOV qword ptr [RSP + 0x20],0x0
0525b6df  MOV qword ptr [RSP + 0x8],0x0
0525b6e8  JMP 0x0525b6fb
0525b6f0  INC ECX
0525b6f2  CMP ECX,0x5
0525b6f5  JZ 0x0525bc30
0525b6fb  MOV RDX,qword ptr [RSP + 0xa8]
0525b703  ADD EDX,ECX
0525b705  XORPS XMM2,XMM2
0525b708  CVTSI2SS XMM2,EDX
0525b70c  SUBSS XMM2,XMM13
0525b711  MOV EDX,0x3
0525b716  SUB EDX,ECX
0525b718  MOV dword ptr [RSP + 0x30],EDX
0525b71c  LEA ESI,[RCX + 0x7]
0525b71f  MOV EDX,ECX
0525b721  NEG EDX
0525b723  MOV dword ptr [RSP + 0x80],EDX
0525b72a  MULSS XMM2,XMM2
0525b72e  XOR R8D,R8D
0525b731  JMP 0x0525b74c
0525b740  MOVAPS XMM0,XMM3
0525b743  INC R8D
0525b746  CMP R8D,0x5
0525b74a  JZ 0x0525b6f0
0525b74c  MOVAPS XMM3,XMM0
0525b74f  CMP ECX,0x4
0525b752  JNZ 0x0525b770
0525b754  MOV EDI,0xf
0525b759  SUB EDI,R8D
0525b75c  MOV EDI,EDI
0525b75e  CMP word ptr [R15 + RDI*0x2 + 0x12],0x7fff
0525b766  JZ 0x0525b740
0525b768  JMP 0x0525b79c
0525b770  MOV EDI,ESI
0525b772  CMP R8D,0x4
0525b776  JZ 0x0525b790
0525b778  TEST ECX,ECX
0525b77a  JZ 0x0525b90e
0525b780  MOV EDI,dword ptr [RSP + 0x30]
0525b784  TEST R8D,R8D
0525b787  JNZ 0x0525b740
0525b789  NOP dword ptr [RAX]
0525b790  MOV EDI,EDI
0525b792  CMP word ptr [R15 + RDI*0x2 + 0x12],0x7fff
0525b79a  JZ 0x0525b740
0525b79c  LEA EDI,[R8 + R14*0x1]
0525b7a0  XORPS XMM4,XMM4
0525b7a3  CVTSI2SS XMM4,EDI
0525b7a7  SUBSS XMM4,XMM1
0525b7ab  MULSS XMM4,XMM4
0525b7af  ADDSS XMM4,XMM2
0525b7b3  UCOMISS XMM4,XMM9
0525b7b7  JA 0x0525b740
0525b7b9  UCOMISS XMM10,XMM4
0525b7bd  JC 0x0525b8dc
0525b7c3  CMP byte ptr [RSP + 0x38],0x0
0525b7c8  JZ 0x0525b8dc
0525b7ce  MOV R9D,0xf
0525b7d4  SUB R9D,R8D
0525b7d7  TEST ECX,ECX
0525b7d9  MOV EDI,dword ptr [RSP + 0x80]
0525b7e0  CMOVZ EDI,R8D
0525b7e4  ADD EDI,0x3
0525b7e7  CMP R8D,0x4
0525b7eb  CMOVZ EDI,ESI
0525b7ee  CMP ECX,0x4
0525b7f1  CMOVZ EDI,R9D
0525b7f5  JZ 0x0525b80a
0525b7f7  CMP R8D,0x4
0525b7fb  JZ 0x0525b80a
0525b7fd  TEST ECX,ECX
0525b7ff  JZ 0x0525b80a
0525b801  TEST R8D,R8D
0525b804  JNZ 0x0525b8d4
0525b80a  LEA RDI,[RDI + RDI*0x2]
0525b80e  MOV RDX,qword ptr [RSP + 0xb0]
0525b816  LEA R9,[RDX + RDI*0x8]
0525b81a  MOV RDI,qword ptr [R9]
0525b81d  CMP RDI,qword ptr [R9 + 0x8]
0525b821  JZ 0x0525b8d4
0525b827  XOR R10D,R10D
0525b82a  JMP 0x0525b83d
0525b830  INC R10
0525b833  CMP R10,0x29
0525b837  JZ 0x0525b8d4
0525b83d  MOV RDI,qword ptr [R9]
0525b840  MOV R11,qword ptr [R9 + 0x8]
0525b844  CMP RDI,R11
0525b847  JZ 0x0525b830
0525b849  MOVSX R12D,word ptr [RBP + 0xc8]
0525b851  MOV R14D,R12D
0525b854  SAR R14D,0x1f
0525b858  MOV EBX,R14D
0525b85b  SUB EBX,R12D
0525b85e  LEA R12D,[RBX + 0x7]
0525b862  TEST EBX,EBX
0525b864  CMOVNS R12D,EBX
0525b868  SAR R12D,0x3
0525b86c  MOV EBX,dword ptr [R15 + 0x8]
0525b870  MOV EDX,EBX
0525b872  SAR EDX,0x1f
0525b875  SUB EDX,EBX
0525b877  SHR EBX,0x1f
0525b87a  LEA EBP,[RDX + 0x7]
0525b87d  TEST EDX,EDX
0525b87f  CMOVNS EBP,EDX
0525b882  SAR EBP,0x3
0525b885  ADD EBP,EBX
0525b887  SUB R14D,R12D
0525b88a  ADD R14D,EBP
0525b88d  MOV RBP,qword ptr [RSP + 0xb8]
0525b895  ADD R14D,R10D
0525b898  MOVSXD R14,R14D
0525b89b  SUB R11,RDI
0525b89e  CMP R11,R14
0525b8a1  JBE 0x0525b830
0525b8a3  MOVZX EDI,byte ptr [RDI + R14*0x1]
0525b8a8  CMP DIL,0x7f
0525b8ac  JZ 0x0525b830
0525b8ae  MOV RBX,qword ptr [RSP + 0x90]
0525b8b6  MOVZX EDX,byte ptr [RBX + R10*0x1]
0525b8bb  CMP DL,0x7f
0525b8be  MOV R11D,0x0
0525b8c4  CMOVZ EDX,R11D
0525b8c8  ADD DL,DIL
0525b8cb  MOV byte ptr [RBX + R10*0x1],DL
0525b8cf  JMP 0x0525b830
0525b8d4  MOV byte ptr [RAX],0x1
0525b8d7  MOV R14,qword ptr [RSP + 0x50]
0525b8dc  CMP byte ptr [RAX + 0x1],0x0
0525b8e0  JNZ 0x0525b740
0525b8e6  UCOMISS XMM3,XMM4
0525b8e9  MOV RDX,qword ptr [RSP + 0x8]
0525b8ee  CMOVA EDX,ECX
0525b8f1  MOV qword ptr [RSP + 0x8],RDX
0525b8f6  MOV RDX,qword ptr [RSP + 0x20]
0525b8fb  CMOVA EDX,R8D
0525b8ff  CMP ECX,0x4
0525b902  JNZ 0x0525b927
0525b904  MOV EDI,0xf
0525b909  SUB EDI,R8D
0525b90c  JMP 0x0525b945
0525b90e  LEA EDI,[R8 + 0x3]
0525b912  MOV EDI,EDI
0525b914  CMP word ptr [R15 + RDI*0x2 + 0x12],0x7fff
0525b91c  JZ 0x0525b740
0525b922  JMP 0x0525b79c
0525b927  MOV EDI,ESI
0525b929  CMP R8D,0x4
0525b92d  JZ 0x0525b945
0525b92f  TEST ECX,ECX
0525b931  JZ 0x0525b941
0525b933  MOV EDI,dword ptr [RSP + 0x30]
0525b937  TEST R8D,R8D
0525b93a  JZ 0x0525b945
0525b93c  JMP 0x0525cfb0
0525b941  LEA EDI,[R8 + 0x3]
0525b945  MOV qword ptr [RSP + 0x20],RDX
0525b94a  MOVAPS XMM0,XMM4
0525b94d  MINSS XMM0,XMM3
0525b951  MOV EDX,EDI
0525b953  MOVZX EDI,word ptr [R15 + RDX*0x2 + 0x12]
0525b959  UCOMISS XMM7,XMM4
0525b95c  MOVZX R9D,DI
0525b960  JNC 0x0525bac1
0525b966  CMP R9D,0x7fff
0525b96d  JZ 0x0525cfb3
0525b973  UCOMISS XMM12,XMM4
0525b977  MULSS XMM4,XMM4
0525b97b  MOVAPS XMM3,XMM11
0525b97f  MOVSX EDX,DI
0525b982  XORPS XMM5,XMM5
0525b985  CVTSI2SS XMM5,EDX
0525b989  DIVSS XMM3,XMM4
0525b98d  MULSS XMM5,XMM3
0525b991  MOV RDX,qword ptr [RSP + 0x48]
0525b996  ADDSS XMM5,dword ptr [RDX + 0x4]
0525b99b  MOVSS dword ptr [RDX + 0x4],XMM5
0525b9a0  MOVSS XMM4,dword ptr [RDX + 0x8]
0525b9a5  ADDSS XMM4,XMM3
0525b9a9  MOVSS dword ptr [RDX + 0x8],XMM4
0525b9ae  JBE 0x0525b743
0525b9b4  CMP byte ptr [RSP + 0x38],0x0
0525b9b9  JZ 0x0525b743
0525b9bf  MOVSX EDX,word ptr [RBP + 0xc8]
0525b9c6  MOV R9D,EDX
0525b9c9  SAR R9D,0x1f
0525b9cd  MOV EDI,R9D
0525b9d0  SUB EDI,EDX
0525b9d2  LEA R10D,[RDI + 0x7]
0525b9d6  TEST EDI,EDI
0525b9d8  CMOVNS R10D,EDI
0525b9dc  MOV R14D,dword ptr [R15 + 0x8]
0525b9e0  MOV EDX,R14D
0525b9e3  SAR EDX,0x1f
0525b9e6  SUB EDX,R14D
0525b9e9  LEA R12D,[RDX + 0x7]
0525b9ed  TEST EDX,EDX
0525b9ef  CMOVNS R12D,EDX
0525b9f3  CMP ECX,0x4
0525b9f6  JZ 0x0525ba0b
0525b9f8  CMP R8D,0x4
0525b9fc  JZ 0x0525ba0b
0525b9fe  TEST ECX,ECX
0525ba00  JZ 0x0525ba0b
0525ba02  TEST R8D,R8D
0525ba05  JNZ 0x0525bc01
0525ba0b  MOV EDX,0xf
0525ba10  SUB EDX,R8D
0525ba13  TEST ECX,ECX
0525ba15  MOV EDI,dword ptr [RSP + 0x80]
0525ba1c  CMOVZ EDI,R8D
0525ba20  ADD EDI,0x3
0525ba23  CMP R8D,0x4
0525ba27  CMOVZ EDI,ESI
0525ba2a  CMP ECX,0x4
0525ba2d  CMOVZ EDI,EDX
0525ba30  LEA RDX,[RDI + RDI*0x2]
0525ba34  MOV R11,qword ptr [RSP + 0x88]
0525ba3c  MOV RDI,qword ptr [R11 + RDX*0x8]
0525ba40  MOV R11,qword ptr [R11 + RDX*0x8 + 0x8]
0525ba45  SUB R11,RDI
0525ba48  JZ 0x0525bc01
0525ba4e  SAR R10D,0x3
0525ba52  NEG R10D
0525ba55  SHR R14D,0x1f
0525ba59  SAR R12D,0x3
0525ba5d  ADD R12D,R14D
0525ba60  SAR R11,0x2
0525ba64  ADD R9D,R10D
0525ba67  ADD R9D,R12D
0525ba6a  XOR R10D,R10D
0525ba6d  JMP 0x0525ba7d
0525ba70  INC R10
0525ba73  CMP R10,0x29
0525ba77  JZ 0x0525bc01
0525ba7d  LEA EDX,[R9 + R10*0x1]
0525ba81  MOVSXD R14,EDX
0525ba84  CMP R11,R14
0525ba87  JBE 0x0525ba70
0525ba89  MOVSS XMM4,dword ptr [RDI + R14*0x4]
0525ba8f  UCOMISS XMM4,XMM8
0525ba93  JNZ 0x0525ba97
0525ba95  JNP 0x0525ba70
0525ba97  MOVSS XMM5,dword ptr [R13 + R10*0x4 + 0x10]
0525ba9e  MULSS XMM4,XMM3
0525baa2  MOVAPS XMM6,XMM4
0525baa5  ADDSS XMM6,XMM5
0525baa9  CMPNEQSS XMM5,XMM8
0525baaf  ANDPS XMM6,XMM5
0525bab2  ANDNPS XMM5,XMM4
0525bab5  ORPS XMM5,XMM6
0525bab8  MOVSS dword ptr [R13 + R10*0x4 + 0x10],XMM5
0525babf  JMP 0x0525ba70
0525bac1  CMP R9D,0x7fff
0525bac8  JZ 0x0525cfb3
0525bace  MOVSX EDX,DI
0525bad1  XORPS XMM3,XMM3
0525bad4  CVTSI2SS XMM3,EDX
0525bad8  MOV RDX,qword ptr [RSP + 0x48]
0525badd  MOVSS dword ptr [RDX + 0x4],XMM3
0525bae2  MOV byte ptr [RDX + 0x19f],0x1
0525bae9  MOVSX EDX,word ptr [RBP + 0xc8]
0525baf0  MOV R9D,EDX
0525baf3  SAR R9D,0x1f
0525baf7  MOV EDI,R9D
0525bafa  SUB EDI,EDX
0525bafc  LEA R10D,[RDI + 0x7]
0525bb00  TEST EDI,EDI
0525bb02  CMOVNS R10D,EDI
0525bb06  MOV EDI,dword ptr [R15 + 0x8]
0525bb0a  MOV EDX,EDI
0525bb0c  SAR EDX,0x1f
0525bb0f  SUB EDX,EDI
0525bb11  LEA R14D,[RDX + 0x7]
0525bb15  TEST EDX,EDX
0525bb17  CMOVNS R14D,EDX
0525bb1b  CMP ECX,0x4
0525bb1e  JZ 0x0525bb37
0525bb20  CMP R8D,0x4
0525bb24  JZ 0x0525bb37
0525bb26  TEST ECX,ECX
0525bb28  JZ 0x0525bb37
0525bb2a  MOVAPS XMM3,XMM11
0525bb2e  TEST R8D,R8D
0525bb31  JNZ 0x0525bc0f
0525bb37  MOV EDX,0xf
0525bb3c  SUB EDX,R8D
0525bb3f  TEST ECX,ECX
0525bb41  MOV R11D,dword ptr [RSP + 0x80]
0525bb49  CMOVZ R11D,R8D
0525bb4d  ADD R11D,0x3
0525bb51  CMP R8D,0x4
0525bb55  CMOVZ R11D,ESI
0525bb59  CMP ECX,0x4
0525bb5c  CMOVZ R11D,EDX
0525bb60  LEA RDX,[R11 + R11*0x2]
0525bb64  MOV RBX,qword ptr [RSP + 0x88]
0525bb6c  MOV R11,qword ptr [RBX + RDX*0x8]
0525bb70  MOV R12,qword ptr [RBX + RDX*0x8 + 0x8]
0525bb75  MOVAPS XMM3,XMM11
0525bb79  SUB R12,R11
0525bb7c  JZ 0x0525bc0f
0525bb82  SAR R10D,0x3
0525bb86  NEG R10D
0525bb89  SHR EDI,0x1f
0525bb8c  SAR R14D,0x3
0525bb90  SAR R12,0x2
0525bb94  ADD R9D,R14D
0525bb97  ADD R9D,R10D
0525bb9a  ADD R9D,EDI
0525bb9d  MOV EDI,0x14
0525bba2  JMP 0x0525bbb8
0525bbb0  ADD RDI,0x8
0525bbb4  ADD R9D,0x2
0525bbb8  MOVSXD R10,R9D
0525bbbb  CMP R12,R10
0525bbbe  JBE 0x0525bbd5
0525bbc0  MOVSS XMM3,dword ptr [R11 + R10*0x4]
0525bbc6  UCOMISS XMM3,XMM8
0525bbca  JNZ 0x0525bbce
0525bbcc  JNP 0x0525bbd5
0525bbce  MOVSS dword ptr [R13 + RDI*0x1 + -0x4],XMM3
0525bbd5  CMP RDI,0xb4
0525bbdc  JZ 0x0525bc0b
0525bbde  LEA EDX,[R9 + 0x1]
0525bbe2  MOVSXD R10,EDX
0525bbe5  CMP R12,R10
0525bbe8  JBE 0x0525bbb0
0525bbea  MOVSS XMM3,dword ptr [R11 + R10*0x4]
0525bbf0  UCOMISS XMM3,XMM8
0525bbf4  JNZ 0x0525bbf8
0525bbf6  JNP 0x0525bbb0
0525bbf8  MOVSS dword ptr [R13 + RDI*0x1],XMM3
0525bbff  JMP 0x0525bbb0
0525bc01  ADDSS XMM3,dword ptr [RAX + -0x192]
0525bc09  JMP 0x0525bc0f
0525bc0b  MOVAPS XMM3,XMM11
0525bc0f  MOVSS dword ptr [RAX + -0x192],XMM3
0525bc17  MOV R14,qword ptr [RSP + 0x50]
0525bc1c  JMP 0x0525b743
0525bc30  UCOMISS XMM8,XMM0
0525bc34  MOV RDX,qword ptr [RSP + 0x70]
0525bc39  MOV RCX,qword ptr [RSP + 0x78]
0525bc3e  MOV RSI,qword ptr [RSP + 0x8]
0525bc43  JBE 0x0525b671
0525bc49  UCOMISS XMM0,dword ptr [0x011983fc]
0525bc50  JC 0x0525bc70
0525bc52  SQRTSS XMM0,XMM0
0525bc56  MOV RAX,qword ptr [RSP + 0x48]
0525bc5b  MOVSS XMM1,dword ptr [RAX]
0525bc5f  UCOMISS XMM1,XMM0
0525bc62  JBE 0x0525b671
0525bc68  JMP 0x0525bcd5
0525bc70  CALL 0x0eee37f0
0525bc75  MOV RSI,qword ptr [RSP + 0x8]
0525bc7a  MOV RCX,qword ptr [RSP + 0x78]
0525bc7f  MOVSS XMM13,dword ptr [RSP + 0xc4]
0525bc89  MOV RDX,qword ptr [RSP + 0x70]
0525bc8e  MOVSS XMM12,dword ptr [0x01198858]
0525bc97  MOVSS XMM11,dword ptr [0x011983f0]
0525bca0  MOVSS XMM10,dword ptr [0x01198634]
0525bca9  MOVSS XMM9,dword ptr [0x011984a4]
0525bcb2  MOVSS XMM8,dword ptr [0x011987f4]
0525bcbb  MOVSS XMM7,dword ptr [0x011986e8]
0525bcc3  MOV RAX,qword ptr [RSP + 0x48]
0525bcc8  MOVSS XMM1,dword ptr [RAX]
0525bccc  UCOMISS XMM1,XMM0
0525bccf  JBE 0x0525b671
0525bcd5  CMP ESI,0x5
0525bcd8  SETNC AL
0525bcdb  MOV RDX,qword ptr [RSP + 0x20]
0525bce0  CMP EDX,0x5
0525bce3  SETNC CL
0525bce6  OR CL,AL
0525bce8  JNZ 0x0525b5f7
0525bcee  MOV ECX,0xf
0525bcf3  SUB ECX,EDX
0525bcf5  MOV R10,RDX
0525bcf8  LEA EDX,[RSI + 0x7]
0525bcfb  LEA EAX,[R10 + 0x3]
0525bcff  MOV R9,RSI
0525bd02  MOV ESI,0x3
0525bd07  SUB ESI,R9D
0525bd0a  TEST R10D,R10D
0525bd0d  SETZ DIL
0525bd11  TEST R9D,R9D
0525bd14  SETZ R8B
0525bd18  CMP R10D,0x4
0525bd1c  CMOVZ EAX,EDX
0525bd1f  SETZ DL
0525bd22  CMP R9D,0x4
0525bd26  CMOVZ EAX,ECX
0525bd29  SETZ CL
0525bd2c  OR CL,DL
0525bd2e  OR CL,R8B
0525bd31  OR DIL,CL
0525bd34  TEST CL,CL
0525bd36  CMOVZ EAX,ESI
0525bd39  CMP DIL,0x1
0525bd3d  JNZ 0x0525b5f7
0525bd43  LEA RAX,[RAX + RAX*0x2]
0525bd47  MOV RCX,qword ptr [RSP + 0x120]
0525bd4f  LEA RAX,[RCX + RAX*0x8]
0525bd53  XOR ECX,ECX
0525bd55  JMP 0x0525bd76
0525bd60  MOV word ptr [R13 + RCX*0x2 + 0xde],DX
0525bd69  INC RCX
0525bd6c  CMP RCX,0x60
0525bd70  JZ 0x0525b65e
0525bd76  MOV RSI,qword ptr [RAX]
0525bd79  MOV RDI,qword ptr [RAX + 0x8]
0525bd7d  MOV DX,0xffff
0525bd81  CMP RSI,RDI
0525bd84  JZ 0x0525bd60
0525bd86  MOVSX R9D,word ptr [RBP + 0xc8]
0525bd8e  MOV R8D,R9D
0525bd91  SAR R8D,0x1f
0525bd95  MOV R10D,R8D
0525bd98  SUB R10D,R9D
0525bd9b  LEA R9D,[R10 + 0x3]
0525bd9f  TEST R10D,R10D
0525bda2  CMOVNS R9D,R10D
0525bda6  SAR R9D,0x2
0525bdaa  MOV R10D,dword ptr [R15 + 0x8]
0525bdae  MOV R11D,R10D
0525bdb1  SAR R11D,0x1f
0525bdb5  SUB R11D,R10D
0525bdb8  SHR R10D,0x1f
0525bdbc  LEA EBX,[R11 + 0x3]
0525bdc0  TEST R11D,R11D
0525bdc3  CMOVNS EBX,R11D
0525bdc7  SAR EBX,0x2
0525bdca  ADD EBX,R10D
0525bdcd  SUB R8D,R9D
0525bdd0  ADD R8D,EBX
0525bdd3  ADD R8D,ECX
0525bdd6  MOVSXD R8,R8D
0525bdd9  SUB RDI,RSI
0525bddc  SAR RDI,0x1
0525bddf  CMP RDI,R8
0525bde2  JBE 0x0525bd60
0525bde8  MOVZX EDX,word ptr [RSI + R8*0x2]
0525bded  JMP 0x0525bd60
0525be00  MOV R14B,0x1
0525be03  MOV R12,qword ptr [RSP + 0x10]
0525be08  MOV R13,qword ptr [RSP + 0x60]
0525be0d  CMP byte ptr [RSP + 0xe0],0x1
0525be15  JNZ 0x0525be60
0525be17  MOV RDI,qword ptr [RSP + 0xd0]
0525be1f  MOV RAX,qword ptr [RDI]
0525be22  MOVZX ECX,byte ptr [RDI + 0x8]
0525be26  MOV RSI,qword ptr [RSP + 0x18]
0525be2b  MOV RDX,qword ptr [RSI + -0x10]
0525be2f  MOV qword ptr [RDI],RDX
0525be32  MOVZX EDX,byte ptr [RSI + -0x8]
0525be36  MOV byte ptr [RDI + 0x8],DL
0525be39  MOV qword ptr [RSI + -0x10],RAX
0525be3d  MOV byte ptr [RSI + -0x8],CL
0525be40  LEA RAX,[RSI + -0x10]
0525be44  MOV R15,qword ptr [RSP + 0x28]
0525be49  MOV RCX,qword ptr [RSP + 0xc8]
0525be51  JMP 0x0525be75
0525be60  MOV RCX,qword ptr [RSP + 0xc8]
0525be68  INC RCX
0525be6b  MOV R15,qword ptr [RSP + 0x28]
0525be70  MOV RAX,qword ptr [RSP + 0x18]
0525be75  MOV qword ptr [RSP + 0x18],RAX
0525be7a  SUB RAX,R15
0525be7d  SAR RAX,0x4
0525be81  CMP RCX,RAX
0525be84  MOV EAX,0x0
0525be89  CMOVNC RCX,RAX
0525be8d  MOV RBX,qword ptr [RSP + 0xf0]
0525be95  TEST RBX,RBX
0525be98  JZ 0x0525b440
0525be9e  MOV RAX,-0x1
0525bea5  XADD.LOCK qword ptr [RBX + 0x8],RAX
0525beab  TEST RAX,RAX
0525beae  JNZ 0x0525b440
0525beb4  MOV RAX,qword ptr [RBX]
0525beb7  MOV RDI,RBX
0525beba  MOV qword ptr [RSP + 0x8],R14
0525bebf  MOV R14,RCX
0525bec2  CALL qword ptr [RAX + 0x10]
0525bec5  MOV RDI,RBX
0525bec8  CALL 0x0412c2d0
0525becd  MOV RCX,R14
0525bed0  MOV R14,qword ptr [RSP + 0x8]
0525bed5  JMP 0x0525b440
0525beda  MOV qword ptr [RSP + 0x18],R15
0525bedf  TEST R14B,0x1
0525bee3  JZ 0x0525cacf
0525bee9  LEA RDI,[0xf5463b0]
0525bef0  MOV RAX,qword ptr [0x0f5463b0]
0525bef7  MOV ESI,0x1980
0525befc  CALL qword ptr [RAX + 0x10]
0525beff  MOV R14,RAX
0525bf02  TEST RAX,RAX
0525bf05  JZ 0x0525d1a4
0525bf0b  LEA RDI,[R14 + 0x194]
0525bf12  XOR EBX,EBX
0525bf14  MOV EDX,0x4cc
0525bf19  XOR ESI,ESI
0525bf1b  CALL 0x0eee2dd0
0525bf20  MOV RDI,R14
0525bf23  CALL 0x0525f060
0525bf28  LEA R15,[R14 + 0x660]
0525bf2f  LEA RDI,[R14 + 0x7f4]
0525bf36  MOV EDX,0x4cc
0525bf3b  XOR ESI,ESI
0525bf3d  CALL 0x0eee2dd0
0525bf42  MOV RDI,R15
0525bf45  CALL 0x0525f060
0525bf4a  LEA R15,[R14 + 0xcc0]
0525bf51  LEA RDI,[R14 + 0xe54]
0525bf58  MOV EDX,0x4cc
0525bf5d  XOR ESI,ESI
0525bf5f  CALL 0x0eee2dd0
0525bf64  MOV RDI,R15
0525bf67  CALL 0x0525f060
0525bf6c  LEA R15,[R14 + 0x1320]
0525bf73  LEA RDI,[R14 + 0x14b4]
0525bf7a  MOV EDX,0x4cc
0525bf7f  XOR ESI,ESI
0525bf81  CALL 0x0eee2dd0
0525bf86  MOV RDI,R15
0525bf89  CALL 0x0525f060
0525bf8e  LEA RAX,[R14 + 0xac]
0525bf95  MOV qword ptr [RSP + 0xb0],RAX
0525bf9d  LEA RAX,[R14 + 0x634]
0525bfa4  MOV qword ptr [RSP + 0x88],RAX
0525bfac  MOV RAX,qword ptr [RSP + 0x40]
0525bfb1  LEA RCX,[RAX + 0x67e]
0525bfb8  MOV qword ptr [RSP + 0xa8],RCX
0525bfc0  LEA RCX,[R14 + 0x574]
0525bfc7  MOV qword ptr [RSP + 0x78],RCX
0525bfcc  LEA RCX,[RAX + 0x594]
0525bfd3  MOV qword ptr [RSP + 0x70],RCX
0525bfd8  LEA R8,[R14 + 0xb6]
0525bfdf  LEA R9,[RAX + 0xe8]
0525bfe6  LEA R12,[R14 + 0x16c]
0525bfed  LEA R11,[RAX + 0xb4]
0525bff4  LEA R15,[RAX + 0x18]
0525bff8  LEA RBP,[R14 + 0x10]
0525bffc  MOVAPS XMM0,xmmword ptr [0x014e2230]
0525c003  MOVSS XMM1,dword ptr [0x011987f4]
0525c00b  MOVSS XMM7,dword ptr [0x011986e8]
0525c013  MOV qword ptr [RSP + 0x48],R14
0525c018  JMP 0x0525c085
0525c020  MOV RBX,qword ptr [RSP + 0x8]
0525c025  INC RBX
0525c028  MOV R8,qword ptr [RSP + 0x20]
0525c02d  ADD R8,0x660
0525c034  MOV R9,qword ptr [RSP + 0x38]
0525c039  ADD R9,0x680
0525c040  MOV R12,qword ptr [RSP + 0x30]
0525c045  ADD R12,0x660
0525c04c  MOV R11,qword ptr [RSP + 0x50]
0525c051  ADD R11,0x680
0525c058  MOV R15,qword ptr [RSP + 0x80]
0525c060  ADD R15,0x680
0525c067  MOV RBP,qword ptr [RSP + 0x90]
0525c06f  ADD RBP,0x660
0525c076  CMP RBX,0x4
0525c07a  MOV R14,qword ptr [RSP + 0x48]
0525c07f  JZ 0x0525cadc
0525c085  IMUL RDX,RBX,0x660
0525c08c  MOV RCX,qword ptr [RSP + 0xb0]
0525c094  LEA RSI,[RCX + RDX*0x1]
0525c098  MOV RCX,qword ptr [RSP + 0x88]
0525c0a0  LEA RAX,[RCX + RDX*0x1]
0525c0a4  MOV qword ptr [RSP + 0x38],RAX
0525c0a9  MOV qword ptr [RSP + 0x8],RBX
0525c0ae  IMUL RCX,RBX,0x680
0525c0b5  MOV RDI,qword ptr [RSP + 0xd8]
0525c0bd  ADD RDI,RCX
0525c0c0  MOV R13,R8
0525c0c3  MOV R8,qword ptr [RSP + 0xa8]
0525c0cb  LEA R8,[R8 + RCX*0x1]
0525c0cf  LEA RAX,[R14 + RDX*0x1 + 0x8]
0525c0d4  MOV qword ptr [RSP + 0x30],RAX
0525c0d9  MOV R10,qword ptr [RSP + 0x78]
0525c0de  LEA RAX,[R10 + RDX*0x1]
0525c0e2  MOV qword ptr [RSP + 0x20],RAX
0525c0e7  MOV RAX,qword ptr [RSP + 0x40]
0525c0ec  LEA R10,[RAX + RCX*0x1]
0525c0f0  ADD R10,0x10
0525c0f4  MOV RBX,qword ptr [RSP + 0x70]
0525c0f9  ADD RBX,RCX
0525c0fc  ADD RDX,R14
0525c0ff  ADD RCX,RAX
0525c102  CMP RSI,R8
0525c105  SETC R8B
0525c109  CMP RDI,qword ptr [RSP + 0x38]
0525c10e  SETC AL
0525c111  AND AL,R8B
0525c114  CMP qword ptr [RSP + 0x30],RBX
0525c119  SETNC SIL
0525c11d  CMP R10,qword ptr [RSP + 0x20]
0525c122  SETNC DIL
0525c126  OR DIL,SIL
0525c129  MOV qword ptr [RSP + 0x90],RBP
0525c131  MOV qword ptr [RSP + 0x80],R15
0525c139  MOV qword ptr [RSP + 0x50],R11
0525c13e  MOV qword ptr [RSP + 0x30],R12
0525c143  MOV R10,R12
0525c146  MOV R12D,EDI
0525c149  MOV qword ptr [RSP + 0x38],R9
0525c14e  MOV qword ptr [RSP + 0x20],R13
0525c153  MOV R8,R13
0525c156  XOR EBX,EBX
0525c158  JMP 0x0525c3b2
0525c160  MOVSS XMM2,dword ptr [RDI + 0x4]
0525c165  MOVSS dword ptr [R14 + 0x4],XMM2
0525c16b  MOVSS XMM2,dword ptr [RDI + 0x10]
0525c170  MOVSS dword ptr [R14 + 0x8],XMM2
0525c176  MOVSS XMM2,dword ptr [RDI + 0x14]
0525c17b  MOVSS dword ptr [R14 + 0xc],XMM2
0525c181  MOVSS XMM2,dword ptr [RDI + 0x18]
0525c186  MOVSS dword ptr [R14 + 0x10],XMM2
0525c18c  MOVSS XMM2,dword ptr [RDI + 0x1c]
0525c191  MOVSS dword ptr [R14 + 0x14],XMM2
0525c197  MOVSS XMM2,dword ptr [RDI + 0x20]
0525c19c  MOVSS dword ptr [R14 + 0x18],XMM2
0525c1a2  MOVSS XMM2,dword ptr [RDI + 0x24]
0525c1a7  MOVSS dword ptr [R14 + 0x1c],XMM2
0525c1ad  MOVSS XMM2,dword ptr [RDI + 0x28]
0525c1b2  MOVSS dword ptr [R14 + 0x20],XMM2
0525c1b8  MOVSS XMM2,dword ptr [RDI + 0x2c]
0525c1bd  MOVSS dword ptr [R14 + 0x24],XMM2
0525c1c3  MOVSS XMM2,dword ptr [RDI + 0x30]
0525c1c8  MOVSS dword ptr [R14 + 0x28],XMM2
0525c1ce  MOVSS XMM2,dword ptr [RDI + 0x34]
0525c1d3  MOVSS dword ptr [R14 + 0x2c],XMM2
0525c1d9  MOVSS XMM2,dword ptr [RDI + 0x38]
0525c1de  MOVSS dword ptr [R14 + 0x30],XMM2
0525c1e4  MOVSS XMM2,dword ptr [RDI + 0x3c]
0525c1e9  MOVSS dword ptr [R14 + 0x34],XMM2
0525c1ef  MOVSS XMM2,dword ptr [RDI + 0x40]
0525c1f4  MOVSS dword ptr [R14 + 0x38],XMM2
0525c1fa  MOVSS XMM2,dword ptr [RDI + 0x44]
0525c1ff  MOVSS dword ptr [R14 + 0x3c],XMM2
0525c205  MOVSS XMM2,dword ptr [RDI + 0x48]
0525c20a  MOVSS dword ptr [R14 + 0x40],XMM2
0525c210  MOVSS XMM2,dword ptr [RDI + 0x4c]
0525c215  MOVSS dword ptr [R14 + 0x44],XMM2
0525c21b  MOVSS XMM2,dword ptr [RDI + 0x50]
0525c220  MOVSS dword ptr [R14 + 0x48],XMM2
0525c226  MOVSS XMM2,dword ptr [RDI + 0x54]
0525c22b  MOVSS dword ptr [R14 + 0x4c],XMM2
0525c231  MOVSS XMM2,dword ptr [RDI + 0x58]
0525c236  MOVSS dword ptr [R14 + 0x50],XMM2
0525c23c  MOVSS XMM2,dword ptr [RDI + 0x5c]
0525c241  MOVSS dword ptr [R14 + 0x54],XMM2
0525c247  MOVSS XMM2,dword ptr [RDI + 0x60]
0525c24c  MOVSS dword ptr [R14 + 0x58],XMM2
0525c252  MOVSS XMM2,dword ptr [RDI + 0x64]
0525c257  MOVSS dword ptr [R14 + 0x5c],XMM2
0525c25d  MOVSS XMM2,dword ptr [RDI + 0x68]
0525c262  MOVSS dword ptr [R14 + 0x60],XMM2
0525c268  MOVSS XMM2,dword ptr [RDI + 0x6c]
0525c26d  MOVSS dword ptr [R14 + 0x64],XMM2
0525c273  MOVSS XMM2,dword ptr [RDI + 0x70]
0525c278  MOVSS dword ptr [R14 + 0x68],XMM2
0525c27e  MOVSS XMM2,dword ptr [RDI + 0x74]
0525c283  MOVSS dword ptr [R14 + 0x6c],XMM2
0525c289  MOVSS XMM2,dword ptr [RDI + 0x78]
0525c28e  MOVSS dword ptr [R14 + 0x70],XMM2
0525c294  MOVSS XMM2,dword ptr [RDI + 0x7c]
0525c299  MOVSS dword ptr [R14 + 0x74],XMM2
0525c29f  MOVSS XMM2,dword ptr [RDI + 0x80]
0525c2a7  MOVSS dword ptr [R14 + 0x78],XMM2
0525c2ad  MOVSS XMM2,dword ptr [RDI + 0x84]
0525c2b5  MOVSS dword ptr [R14 + 0x7c],XMM2
0525c2bb  MOVSS XMM2,dword ptr [RDI + 0x88]
0525c2c3  MOVSS dword ptr [R14 + 0x80],XMM2
0525c2cc  MOVSS XMM2,dword ptr [RDI + 0x8c]
0525c2d4  MOVSS dword ptr [R14 + 0x84],XMM2
0525c2dd  MOVSS XMM2,dword ptr [RDI + 0x90]
0525c2e5  MOVSS dword ptr [R14 + 0x88],XMM2
0525c2ee  MOVSS XMM2,dword ptr [RDI + 0x94]
0525c2f6  MOVSS dword ptr [R14 + 0x8c],XMM2
0525c2ff  MOVSS XMM2,dword ptr [RDI + 0x98]
0525c307  MOVSS dword ptr [R14 + 0x90],XMM2
0525c310  MOVSS XMM2,dword ptr [RDI + 0x9c]
0525c318  MOVSS dword ptr [R14 + 0x94],XMM2
0525c321  MOVSS XMM2,dword ptr [RDI + 0xa0]
0525c329  MOVSS dword ptr [R14 + 0x98],XMM2
0525c332  MOVSS XMM2,dword ptr [RDI + 0xa4]
0525c33a  MOVSS dword ptr [R14 + 0x9c],XMM2
0525c343  MOVSS XMM2,dword ptr [RDI + 0xa8]
0525c34b  MOVSS dword ptr [R14 + 0xa0],XMM2
0525c354  MOVSS XMM2,dword ptr [RDI + 0xac]
0525c35c  MOVSS dword ptr [R14 + 0xa4],XMM2
0525c365  MOVSS XMM2,dword ptr [RDI + 0xb0]
0525c36d  MOVSS dword ptr [R14 + 0xa8],XMM2
0525c376  MOV R13,qword ptr [RSP + 0x10]
0525c37b  INC RBX
0525c37e  ADD R8,0x198
0525c385  ADD R9,0x1a0
0525c38c  ADD R10,0x198
0525c393  ADD R11,0x1a0
0525c39a  ADD R15,0x1a0
0525c3a1  ADD RBP,0x198
0525c3a8  CMP RBX,0x4
0525c3ac  JZ 0x0525c020
0525c3b2  IMUL RSI,RBX,0x198
0525c3b9  LEA R14,[RDX + RSI*0x1]
0525c3bd  IMUL R13,RBX,0x1a0
0525c3c4  LEA RDI,[RCX + R13*0x1]
0525c3c8  MOVSS XMM2,dword ptr [RCX + R13*0x1]
0525c3ce  MOVSS dword ptr [RDX + RSI*0x1],XMM2
0525c3d3  TEST AL,AL
0525c3d5  JZ 0x0525c450
0525c3d7  XOR ESI,ESI
0525c3d9  NOP dword ptr [RAX]
0525c3e0  MOVZX R13D,word ptr [R9 + RSI*0x2 + -0xa]
0525c3e6  MOV word ptr [R8 + RSI*0x2 + -0xa],R13W
0525c3ec  MOVZX R13D,word ptr [R9 + RSI*0x2 + -0x8]
0525c3f2  MOV word ptr [R8 + RSI*0x2 + -0x8],R13W
0525c3f8  MOVZX R13D,word ptr [R9 + RSI*0x2 + -0x6]
0525c3fe  MOV word ptr [R8 + RSI*0x2 + -0x6],R13W
0525c404  MOVZX R13D,word ptr [R9 + RSI*0x2 + -0x4]
0525c40a  MOV word ptr [R8 + RSI*0x2 + -0x4],R13W
0525c410  MOVZX R13D,word ptr [R9 + RSI*0x2 + -0x2]
0525c416  MOV word ptr [R8 + RSI*0x2 + -0x2],R13W
0525c41c  MOVZX R13D,word ptr [R9 + RSI*0x2]
0525c421  MOV word ptr [R8 + RSI*0x2],R13W
0525c426  ADD RSI,0x6
0525c42a  CMP RSI,0x60
0525c42e  JNZ 0x0525c3e0
0525c430  CMP byte ptr [RDI + 0x19e],0x1
0525c437  JZ 0x0525c50d
0525c43d  JMP 0x0525c550
0525c450  MOVUPS XMM2,xmmword ptr [RDI + 0xde]
0525c457  MOVUPS XMM3,xmmword ptr [RDI + 0xee]
0525c45e  MOVUPS xmmword ptr [R14 + 0xac],XMM2
0525c466  MOVUPS xmmword ptr [R14 + 0xbc],XMM3
0525c46e  MOVUPS XMM2,xmmword ptr [RDI + 0xfe]
0525c475  MOVUPS XMM3,xmmword ptr [RDI + 0x10e]
0525c47c  MOVUPS xmmword ptr [R14 + 0xcc],XMM2
0525c484  MOVUPS xmmword ptr [R14 + 0xdc],XMM3
0525c48c  MOVUPS XMM2,xmmword ptr [RDI + 0x11e]
0525c493  MOVUPS XMM3,xmmword ptr [RDI + 0x12e]
0525c49a  MOVUPS xmmword ptr [R14 + 0xec],XMM2
0525c4a2  MOVUPS xmmword ptr [R14 + 0xfc],XMM3
0525c4aa  MOVUPS XMM2,xmmword ptr [RDI + 0x13e]
0525c4b1  MOVUPS XMM3,xmmword ptr [RDI + 0x14e]
0525c4b8  MOVUPS xmmword ptr [R14 + 0x10c],XMM2
0525c4c0  MOVUPS xmmword ptr [R14 + 0x11c],XMM3
0525c4c8  MOVUPS XMM2,xmmword ptr [RDI + 0x15e]
0525c4cf  MOVUPS XMM3,xmmword ptr [RDI + 0x16e]
0525c4d6  MOVUPS xmmword ptr [R14 + 0x12c],XMM2
0525c4de  MOVUPS xmmword ptr [R14 + 0x13c],XMM3
0525c4e6  MOVUPS XMM2,xmmword ptr [RDI + 0x17e]
0525c4ed  MOVUPS XMM3,xmmword ptr [RDI + 0x18e]
0525c4f4  MOVUPS xmmword ptr [R14 + 0x14c],XMM2
0525c4fc  MOVUPS xmmword ptr [R14 + 0x15c],XMM3
0525c504  CMP byte ptr [RDI + 0x19e],0x1
0525c50b  JNZ 0x0525c550
0525c50d  XOR ESI,ESI
0525c50f  JMP 0x0525c52e
0525c520  MOV byte ptr [R10 + RSI*0x1],0x1
0525c525  INC RSI
0525c528  CMP RSI,0x29
0525c52c  JZ 0x0525c550
0525c52e  MOVZX R13D,byte ptr [R11 + RSI*0x1]
0525c533  CMP R13B,0x7f
0525c537  JZ 0x0525c525
0525c539  TEST R13B,R13B
0525c53c  JG 0x0525c520
0525c53e  JS 0x0525c547
0525c540  MOV byte ptr [R10 + RSI*0x1],0x0
0525c545  JMP 0x0525c525
0525c547  MOV byte ptr [R10 + RSI*0x1],0xff
0525c54c  JMP 0x0525c525
0525c550  CMP byte ptr [RDI + 0x19f],0x1
0525c557  JZ 0x0525c160
0525c55d  MOVSS XMM2,dword ptr [RDI + 0x8]
0525c562  UCOMISS XMM2,XMM7
0525c565  MOV R13,qword ptr [RSP + 0x10]
0525c56a  JBE 0x0525c57b
0525c56c  MOVSS XMM3,dword ptr [RDI + 0x4]
0525c571  DIVSS XMM3,XMM2
0525c575  MOVSS dword ptr [R14 + 0x4],XMM3
0525c57b  MOVSS XMM2,dword ptr [RDI + 0xc]
0525c580  UCOMISS XMM2,XMM7
0525c583  JBE 0x0525c37b
0525c589  MOVUPS xmmword ptr [R14 + 0x8],XMM0
0525c58e  MOVUPS xmmword ptr [R14 + 0x18],XMM0
0525c593  MOVUPS xmmword ptr [R14 + 0x28],XMM0
0525c598  MOVUPS xmmword ptr [R14 + 0x38],XMM0
0525c59d  MOVUPS xmmword ptr [R14 + 0x48],XMM0
0525c5a2  MOVUPS xmmword ptr [R14 + 0x58],XMM0
0525c5a7  MOVUPS xmmword ptr [R14 + 0x68],XMM0
0525c5ac  MOVUPS xmmword ptr [R14 + 0x78],XMM0
0525c5b1  MOVUPS xmmword ptr [R14 + 0x88],XMM0
0525c5b9  MOVUPS xmmword ptr [R14 + 0x98],XMM0
0525c5c1  MOV dword ptr [R14 + 0xa8],0x7f7fffff
0525c5cc  TEST R12B,R12B
0525c5cf  JZ 0x0525ca69
0525c5d5  MOVAPS XMM3,XMM2
0525c5d8  SHUFPS XMM3,XMM2,0x0
0525c5dc  MOVUPS XMM5,xmmword ptr [RDI + 0x10]
0525c5e0  MOVAPS XMM4,XMM5
0525c5e3  DIVPS XMM4,XMM3
0525c5e6  UCOMISS XMM5,XMM1
0525c5e9  JNZ 0x0525c5ed
0525c5eb  JNP 0x0525c5f3
0525c5ed  MOVSS dword ptr [R14 + 0x8],XMM4
0525c5f3  MOVAPS XMM6,XMM5
0525c5f6  CMPNEQPS XMM6,XMM0
0525c5fa  PEXTRW ESI,XMM6,0x2
0525c5ff  TEST SIL,0x1
0525c603  JZ 0x0525c612
0525c605  MOVAPS XMM6,XMM4
0525c608  SHUFPS XMM6,XMM4,0x55
0525c60c  MOVSS dword ptr [R14 + 0xc],XMM6
0525c612  MOVAPS XMM6,XMM5
0525c615  CMPNEQPS XMM6,XMM0
0525c619  PEXTRW ESI,XMM6,0x4
0525c61e  TEST SIL,0x1
0525c622  JZ 0x0525c631
0525c624  MOVAPS XMM6,XMM4
0525c627  UNPCKHPD XMM6,XMM4
0525c62b  MOVSS dword ptr [R14 + 0x10],XMM6
0525c631  CMPNEQPS XMM5,XMM0
0525c635  PEXTRW ESI,XMM5,0x6
0525c63a  TEST SIL,0x1
0525c63e  JZ 0x0525c64a
0525c640  SHUFPS XMM4,XMM4,0xff
0525c644  MOVSS dword ptr [R14 + 0x14],XMM4
0525c64a  MOVUPS XMM5,xmmword ptr [RDI + 0x20]
0525c64e  MOVAPS XMM4,XMM5
0525c651  DIVPS XMM4,XMM3
0525c654  UCOMISS XMM5,XMM1
0525c657  JNZ 0x0525c65b
0525c659  JNP 0x0525c661
0525c65b  MOVSS dword ptr [R14 + 0x18],XMM4
0525c661  MOVAPS XMM6,XMM5
0525c664  CMPNEQPS XMM6,XMM0
0525c668  PEXTRW ESI,XMM6,0x2
0525c66d  TEST SIL,0x1
0525c671  JZ 0x0525c680
0525c673  MOVAPS XMM6,XMM4
0525c676  SHUFPS XMM6,XMM4,0x55
0525c67a  MOVSS dword ptr [R14 + 0x1c],XMM6
0525c680  MOVAPS XMM6,XMM5
0525c683  CMPNEQPS XMM6,XMM0
0525c687  PEXTRW ESI,XMM6,0x4
0525c68c  TEST SIL,0x1
0525c690  JZ 0x0525c69f
0525c692  MOVAPS XMM6,XMM4
0525c695  UNPCKHPD XMM6,XMM4
0525c699  MOVSS dword ptr [R14 + 0x20],XMM6
0525c69f  CMPNEQPS XMM5,XMM0
0525c6a3  PEXTRW ESI,XMM5,0x6
0525c6a8  TEST SIL,0x1
0525c6ac  JZ 0x0525c6b8
0525c6ae  SHUFPS XMM4,XMM4,0xff
0525c6b2  MOVSS dword ptr [R14 + 0x24],XMM4
0525c6b8  MOVUPS XMM5,xmmword ptr [RDI + 0x30]
0525c6bc  MOVAPS XMM4,XMM5
0525c6bf  DIVPS XMM4,XMM3
0525c6c2  UCOMISS XMM5,XMM1
0525c6c5  JNZ 0x0525c6c9
0525c6c7  JNP 0x0525c6cf
0525c6c9  MOVSS dword ptr [R14 + 0x28],XMM4
0525c6cf  MOVAPS XMM6,XMM5
0525c6d2  CMPNEQPS XMM6,XMM0
0525c6d6  PEXTRW ESI,XMM6,0x2
0525c6db  TEST SIL,0x1
0525c6df  JZ 0x0525c6ee
0525c6e1  MOVAPS XMM6,XMM4
0525c6e4  SHUFPS XMM6,XMM4,0x55
0525c6e8  MOVSS dword ptr [R14 + 0x2c],XMM6
0525c6ee  MOVAPS XMM6,XMM5
0525c6f1  CMPNEQPS XMM6,XMM0
0525c6f5  PEXTRW ESI,XMM6,0x4
0525c6fa  TEST SIL,0x1
0525c6fe  JZ 0x0525c70d
0525c700  MOVAPS XMM6,XMM4
0525c703  UNPCKHPD XMM6,XMM4
0525c707  MOVSS dword ptr [R14 + 0x30],XMM6
0525c70d  CMPNEQPS XMM5,XMM0
0525c711  PEXTRW ESI,XMM5,0x6
0525c716  TEST SIL,0x1
0525c71a  JZ 0x0525c726
0525c71c  SHUFPS XMM4,XMM4,0xff
0525c720  MOVSS dword ptr [R14 + 0x34],XMM4
0525c726  MOVUPS XMM5,xmmword ptr [RDI + 0x40]
0525c72a  MOVAPS XMM4,XMM5
0525c72d  DIVPS XMM4,XMM3
0525c730  UCOMISS XMM5,XMM1
0525c733  JNZ 0x0525c737
0525c735  JNP 0x0525c73d
0525c737  MOVSS dword ptr [R14 + 0x38],XMM4
0525c73d  MOVAPS XMM6,XMM5
0525c740  CMPNEQPS XMM6,XMM0
0525c744  PEXTRW ESI,XMM6,0x2
0525c749  TEST SIL,0x1
0525c74d  JZ 0x0525c75c
0525c74f  MOVAPS XMM6,XMM4
0525c752  SHUFPS XMM6,XMM4,0x55
0525c756  MOVSS dword ptr [R14 + 0x3c],XMM6
0525c75c  MOVAPS XMM6,XMM5
0525c75f  CMPNEQPS XMM6,XMM0
0525c763  PEXTRW ESI,XMM6,0x4
0525c768  TEST SIL,0x1
0525c76c  JZ 0x0525c77b
0525c76e  MOVAPS XMM6,XMM4
0525c771  UNPCKHPD XMM6,XMM4
0525c775  MOVSS dword ptr [R14 + 0x40],XMM6
0525c77b  CMPNEQPS XMM5,XMM0
0525c77f  PEXTRW ESI,XMM5,0x6
0525c784  TEST SIL,0x1
0525c788  JZ 0x0525c794
0525c78a  SHUFPS XMM4,XMM4,0xff
0525c78e  MOVSS dword ptr [R14 + 0x44],XMM4
0525c794  MOVUPS XMM5,xmmword ptr [RDI + 0x50]
0525c798  MOVAPS XMM4,XMM5
0525c79b  DIVPS XMM4,XMM3
0525c79e  UCOMISS XMM5,XMM1
0525c7a1  JNZ 0x0525c7a5
0525c7a3  JNP 0x0525c7ab
0525c7a5  MOVSS dword ptr [R14 + 0x48],XMM4
0525c7ab  MOVAPS XMM6,XMM5
0525c7ae  CMPNEQPS XMM6,XMM0
0525c7b2  PEXTRW ESI,XMM6,0x2
0525c7b7  TEST SIL,0x1
0525c7bb  JZ 0x0525c7ca
0525c7bd  MOVAPS XMM6,XMM4
0525c7c0  SHUFPS XMM6,XMM4,0x55
0525c7c4  MOVSS dword ptr [R14 + 0x4c],XMM6
0525c7ca  MOVAPS XMM6,XMM5
0525c7cd  CMPNEQPS XMM6,XMM0
0525c7d1  PEXTRW ESI,XMM6,0x4
0525c7d6  TEST SIL,0x1
0525c7da  JZ 0x0525c7e9
0525c7dc  MOVAPS XMM6,XMM4
0525c7df  UNPCKHPD XMM6,XMM4
0525c7e3  MOVSS dword ptr [R14 + 0x50],XMM6
0525c7e9  CMPNEQPS XMM5,XMM0
0525c7ed  PEXTRW ESI,XMM5,0x6
0525c7f2  TEST SIL,0x1
0525c7f6  JZ 0x0525c802
0525c7f8  SHUFPS XMM4,XMM4,0xff
0525c7fc  MOVSS dword ptr [R14 + 0x54],XMM4
0525c802  MOVUPS XMM5,xmmword ptr [RDI + 0x60]
0525c806  MOVAPS XMM4,XMM5
0525c809  DIVPS XMM4,XMM3
0525c80c  UCOMISS XMM5,XMM1
0525c80f  JNZ 0x0525c813
0525c811  JNP 0x0525c819
0525c813  MOVSS dword ptr [R14 + 0x58],XMM4
0525c819  MOVAPS XMM6,XMM5
0525c81c  CMPNEQPS XMM6,XMM0
0525c820  PEXTRW ESI,XMM6,0x2
0525c825  TEST SIL,0x1
0525c829  JZ 0x0525c838
0525c82b  MOVAPS XMM6,XMM4
0525c82e  SHUFPS XMM6,XMM4,0x55
0525c832  MOVSS dword ptr [R14 + 0x5c],XMM6
0525c838  MOVAPS XMM6,XMM5
0525c83b  CMPNEQPS XMM6,XMM0
0525c83f  PEXTRW ESI,XMM6,0x4
0525c844  TEST SIL,0x1
0525c848  JZ 0x0525c857
0525c84a  MOVAPS XMM6,XMM4
0525c84d  UNPCKHPD XMM6,XMM4
0525c851  MOVSS dword ptr [R14 + 0x60],XMM6
0525c857  CMPNEQPS XMM5,XMM0
0525c85b  PEXTRW ESI,XMM5,0x6
0525c860  TEST SIL,0x1
0525c864  JZ 0x0525c870
0525c866  SHUFPS XMM4,XMM4,0xff
0525c86a  MOVSS dword ptr [R14 + 0x64],XMM4
0525c870  MOVUPS XMM5,xmmword ptr [RDI + 0x70]
0525c874  MOVAPS XMM4,XMM5
0525c877  DIVPS XMM4,XMM3
0525c87a  UCOMISS XMM5,XMM1
0525c87d  JNZ 0x0525c881
0525c87f  JNP 0x0525c887
0525c881  MOVSS dword ptr [R14 + 0x68],XMM4
0525c887  MOVAPS XMM6,XMM5
0525c88a  CMPNEQPS XMM6,XMM0
0525c88e  PEXTRW ESI,XMM6,0x2
0525c893  TEST SIL,0x1
0525c897  JZ 0x0525c8a6
0525c899  MOVAPS XMM6,XMM4
0525c89c  SHUFPS XMM6,XMM4,0x55
0525c8a0  MOVSS dword ptr [R14 + 0x6c],XMM6
0525c8a6  MOVAPS XMM6,XMM5
0525c8a9  CMPNEQPS XMM6,XMM0
0525c8ad  PEXTRW ESI,XMM6,0x4
0525c8b2  TEST SIL,0x1
0525c8b6  JZ 0x0525c8c5
0525c8b8  MOVAPS XMM6,XMM4
0525c8bb  UNPCKHPD XMM6,XMM4
0525c8bf  MOVSS dword ptr [R14 + 0x70],XMM6
0525c8c5  CMPNEQPS XMM5,XMM0
0525c8c9  PEXTRW ESI,XMM5,0x6
0525c8ce  TEST SIL,0x1
0525c8d2  JZ 0x0525c8de
0525c8d4  SHUFPS XMM4,XMM4,0xff
0525c8d8  MOVSS dword ptr [R14 + 0x74],XMM4
0525c8de  MOVUPS XMM5,xmmword ptr [RDI + 0x80]
0525c8e5  MOVAPS XMM4,XMM5
0525c8e8  DIVPS XMM4,XMM3
0525c8eb  UCOMISS XMM5,XMM1
0525c8ee  JNZ 0x0525c8f2
0525c8f0  JNP 0x0525c8f8
0525c8f2  MOVSS dword ptr [R14 + 0x78],XMM4
0525c8f8  MOVAPS XMM6,XMM5
0525c8fb  CMPNEQPS XMM6,XMM0
0525c8ff  PEXTRW ESI,XMM6,0x2
0525c904  TEST SIL,0x1
0525c908  JZ 0x0525c917
0525c90a  MOVAPS XMM6,XMM4
0525c90d  SHUFPS XMM6,XMM4,0x55
0525c911  MOVSS dword ptr [R14 + 0x7c],XMM6
0525c917  MOVAPS XMM6,XMM5
0525c91a  CMPNEQPS XMM6,XMM0
0525c91e  PEXTRW ESI,XMM6,0x4
0525c923  TEST SIL,0x1
0525c927  JZ 0x0525c939
0525c929  MOVAPS XMM6,XMM4
0525c92c  UNPCKHPD XMM6,XMM4
0525c930  MOVSS dword ptr [R14 + 0x80],XMM6
0525c939  CMPNEQPS XMM5,XMM0
0525c93d  PEXTRW ESI,XMM5,0x6
0525c942  TEST SIL,0x1
0525c946  JZ 0x0525c955
0525c948  SHUFPS XMM4,XMM4,0xff
0525c94c  MOVSS dword ptr [R14 + 0x84],XMM4
0525c955  MOVUPS XMM5,xmmword ptr [RDI + 0x90]
0525c95c  MOVAPS XMM4,XMM5
0525c95f  DIVPS XMM4,XMM3
0525c962  UCOMISS XMM5,XMM1
0525c965  JNZ 0x0525c969
0525c967  JNP 0x0525c972
0525c969  MOVSS dword ptr [R14 + 0x88],XMM4
0525c972  MOVAPS XMM6,XMM5
0525c975  CMPNEQPS XMM6,XMM0
0525c979  PEXTRW ESI,XMM6,0x2
0525c97e  TEST SIL,0x1
0525c982  JZ 0x0525c994
0525c984  MOVAPS XMM6,XMM4
0525c987  SHUFPS XMM6,XMM4,0x55
0525c98b  MOVSS dword ptr [R14 + 0x8c],XMM6
0525c994  MOVAPS XMM6,XMM5
0525c997  CMPNEQPS XMM6,XMM0
0525c99b  PEXTRW ESI,XMM6,0x4
0525c9a0  TEST SIL,0x1
0525c9a4  JZ 0x0525c9b6
0525c9a6  MOVAPS XMM6,XMM4
0525c9a9  UNPCKHPD XMM6,XMM4
0525c9ad  MOVSS dword ptr [R14 + 0x90],XMM6
0525c9b6  CMPNEQPS XMM5,XMM0
0525c9ba  PEXTRW ESI,XMM5,0x6
0525c9bf  TEST SIL,0x1
0525c9c3  JZ 0x0525c9d2
0525c9c5  SHUFPS XMM4,XMM4,0xff
0525c9c9  MOVSS dword ptr [R14 + 0x94],XMM4
0525c9d2  MOVUPS XMM5,xmmword ptr [RDI + 0xa0]
0525c9d9  MOVAPS XMM4,XMM5
0525c9dc  DIVPS XMM4,XMM3
0525c9df  UCOMISS XMM5,XMM1
0525c9e2  JNZ 0x0525c9e6
0525c9e4  JNP 0x0525c9ef
0525c9e6  MOVSS dword ptr [R14 + 0x98],XMM4
0525c9ef  MOVAPS XMM3,XMM5
0525c9f2  CMPNEQPS XMM3,XMM0
0525c9f6  PEXTRW ESI,XMM3,0x2
0525c9fb  TEST SIL,0x1
0525c9ff  JZ 0x0525ca11
0525ca01  MOVAPS XMM3,XMM4
0525ca04  SHUFPS XMM3,XMM4,0x55
0525ca08  MOVSS dword ptr [R14 + 0x9c],XMM3
0525ca11  MOVAPS XMM3,XMM5
0525ca14  CMPNEQPS XMM3,XMM0
0525ca18  PEXTRW ESI,XMM3,0x4
0525ca1d  TEST SIL,0x1
0525ca21  JZ 0x0525ca33
0525ca23  MOVAPS XMM3,XMM4
0525ca26  UNPCKHPD XMM3,XMM4
0525ca2a  MOVSS dword ptr [R14 + 0xa0],XMM3
0525ca33  CMPNEQPS XMM5,XMM0
0525ca37  PEXTRW R13D,XMM5,0x6
0525ca3d  MOV ESI,0x28
0525ca42  TEST R13B,0x1
0525ca46  JZ 0x0525ca55
0525ca48  SHUFPS XMM4,XMM4,0xff
0525ca4c  MOVSS dword ptr [R14 + 0xa4],XMM4
0525ca55  MOV R13,qword ptr [RSP + 0x10]
0525ca5a  MOVSS XMM3,dword ptr [RDI + RSI*0x4 + 0x10]
0525ca60  UCOMISS XMM3,XMM1
0525ca63  JNZ 0x0525ca78
0525ca65  JP 0x0525ca78
0525ca67  JMP 0x0525ca83
0525ca69  XOR ESI,ESI
0525ca6b  MOVSS XMM3,dword ptr [RDI + RSI*0x4 + 0x10]
0525ca71  UCOMISS XMM3,XMM1
0525ca74  JNZ 0x0525ca78
0525ca76  JNP 0x0525ca83
0525ca78  DIVSS XMM3,XMM2
0525ca7c  MOVSS dword ptr [R14 + RSI*0x4 + 0x8],XMM3
0525ca83  TEST R12B,R12B
0525ca86  JZ 0x0525ca9e
0525ca88  JMP 0x0525c37b
0525ca90  ADD RSI,0x2
0525ca94  CMP RSI,0x28
0525ca98  JZ 0x0525c37b
0525ca9e  MOVSS XMM3,dword ptr [R15 + RSI*0x4 + -0x4]
0525caa5  UCOMISS XMM3,XMM1
0525caa8  JNZ 0x0525caac
0525caaa  JNP 0x0525cab6
0525caac  DIVSS XMM3,XMM2
0525cab0  MOVSS dword ptr [RBP + RSI*0x4 + -0x4],XMM3
0525cab6  MOVSS XMM3,dword ptr [R15 + RSI*0x4]
0525cabc  UCOMISS XMM3,XMM1
0525cabf  JNZ 0x0525cac3
0525cac1  JNP 0x0525ca90
0525cac3  DIVSS XMM3,XMM2
0525cac7  MOVSS dword ptr [RBP + RSI*0x4],XMM3
0525cacd  JMP 0x0525ca90
0525cacf  XORPS XMM0,XMM0
0525cad2  MOVUPS xmmword ptr [R12],XMM0
0525cad7  JMP 0x0525cb78
0525cadc  LEA RDI,[0xf5463b0]
0525cae3  MOV RAX,qword ptr [0x0f5463b0]
0525caea  MOV ESI,0x40
0525caef  CALL qword ptr [RAX + 0x10]
0525caf2  MOV R15,RAX
0525caf5  TEST RAX,RAX
0525caf8  JZ 0x0525d1b5
0525cafe  MOV RAX,R14
0525cb01  ADD RAX,0x1980
0525cb07  XORPS XMM0,XMM0
0525cb0a  MOVUPS xmmword ptr [R15 + 0x8],XMM0
0525cb0f  LEA RCX,[0xef9ce28]
0525cb16  MOV qword ptr [R15],RCX
0525cb19  MOV RCX,R15
0525cb1c  ADD RCX,0x18
0525cb20  MOV RDI,qword ptr [RSP + 0x60]
0525cb25  MOV RDX,qword ptr [RDI]
0525cb28  MOV RBP,qword ptr [RSP + 0xb8]
0525cb30  MOVZX ESI,word ptr [RBP + 0xc8]
0525cb37  MOV qword ptr [R15 + 0x18],R14
0525cb3b  MOV qword ptr [R15 + 0x20],RAX
0525cb3f  MOV qword ptr [R15 + 0x28],RAX
0525cb43  MOV RAX,RDX
0525cb46  SHR RAX,0x1c
0525cb4a  SHL EDX,0x2
0525cb4d  SAR EAX,0x2
0525cb50  AND EAX,0xfffffffc
0525cb53  SHL RAX,0x20
0525cb57  OR RDX,RAX
0525cb5a  MOV qword ptr [R15 + 0x30],RDX
0525cb5e  MOV word ptr [R15 + 0x38],SI
0525cb63  MOV qword ptr [R13],RCX
0525cb67  MOV qword ptr [R13 + 0x8],R15
0525cb6b  MOV R13,RDI
0525cb6e  MOV R15,qword ptr [RSP + 0x28]
0525cb73  MOV qword ptr [RSP + 0x18],R15
0525cb78  MOV R14,qword ptr [RSP + 0x58]
0525cb7d  MOV RSI,qword ptr [RSP + 0x68]
0525cb82  SUB RSI,qword ptr [RSP + 0x18]
0525cb87  MOV RDI,R15
0525cb8a  CALL 0x0412a280
0525cb8f  MOV ESI,0x1a00
0525cb94  MOV RDI,qword ptr [RSP + 0x40]
0525cb99  CALL 0x0412a280
0525cb9e  MOV RBX,qword ptr [RSP + 0x98]
0525cba6  MOV qword ptr [RSP + 0x98],0x0
0525cbb2  TEST RBX,RBX
0525cbb5  JZ 0x0525cc21
0525cbb7  LEA RAX,[RBX + 0x40]
0525cbbb  MOV RDI,qword ptr [RBX + 0x60]
0525cbbf  CMP RDI,RAX
0525cbc2  JZ 0x0525cbd0
0525cbc4  MOV EAX,0x28
0525cbc9  TEST RDI,RDI
0525cbcc  JNZ 0x0525cbd5
0525cbce  JMP 0x0525cbdb
0525cbd0  MOV EAX,0x20
0525cbd5  MOV RCX,qword ptr [RDI]
0525cbd8  CALL qword ptr [RCX + RAX*0x1]
0525cbdb  CMP byte ptr [RBX + 0x30],0x1
0525cbdf  JNZ 0x0525cbf4
0525cbe1  MOV RDI,qword ptr [RBX + 0x20]
0525cbe5  TEST RDI,RDI
0525cbe8  JZ 0x0525d1cb
0525cbee  MOV RAX,qword ptr [RDI]
0525cbf1  CALL qword ptr [RAX + 0x30]
0525cbf4  MOV RDI,qword ptr [RBX + 0x20]
0525cbf8  CMP RDI,RBX
0525cbfb  JZ 0x0525cc09
0525cbfd  MOV EAX,0x28
0525cc02  TEST RDI,RDI
0525cc05  JNZ 0x0525cc0e
0525cc07  JMP 0x0525cc14
0525cc09  MOV EAX,0x20
0525cc0e  MOV RCX,qword ptr [RDI]
0525cc11  CALL qword ptr [RCX + RAX*0x1]
0525cc14  MOV ESI,0x70
0525cc19  MOV RDI,RBX
0525cc1c  CALL 0x0412a280
0525cc21  MOV qword ptr [RSP + 0x98],R14
0525cc29  MOV byte ptr [RSP + 0xa0],0x1
0525cc31  MOV RDI,R14
0525cc34  CALL 0x0412d450
0525cc39  CMP qword ptr [RBP + 0x18],0x270f
0525cc41  JBE 0x0525cc99
0525cc43  MOV R14,qword ptr [RBP + 0x10]
0525cc47  JMP 0x0525cc5a
0525cc50  MOV ESI,0x28
0525cc55  CALL 0x0412a280
0525cc5a  TEST R14,R14
0525cc5d  JZ 0x0525cc9f
0525cc5f  MOV RDI,R14
0525cc62  MOV R14,qword ptr [R14]
0525cc65  MOV RBX,qword ptr [RDI + 0x20]
0525cc69  TEST RBX,RBX
0525cc6c  JZ 0x0525cc50
0525cc6e  MOV RAX,-0x1
0525cc75  XADD.LOCK qword ptr [RBX + 0x8],RAX
0525cc7b  TEST RAX,RAX
0525cc7e  JNZ 0x0525cc50
0525cc80  MOV RAX,qword ptr [RBX]
0525cc83  MOV R15,RDI
0525cc86  MOV RDI,RBX
0525cc89  CALL qword ptr [RAX + 0x10]
0525cc8c  MOV RDI,RBX
0525cc8f  CALL 0x0412c2d0
0525cc94  MOV RDI,R15
0525cc97  JMP 0x0525cc50
0525cc99  MOV R14,qword ptr [RBP + 0x8]
0525cc9d  JMP 0x0525cccb
0525cc9f  MOV qword ptr [RBP + 0x10],0x0
0525cca7  MOV R14,qword ptr [RBP + 0x8]
0525ccab  TEST R14,R14
0525ccae  JZ 0x0525ccc3
0525ccb0  MOV RDI,qword ptr [RBP]
0525ccb4  LEA RDX,[R14*0x8]
0525ccbc  XOR ESI,ESI
0525ccbe  CALL 0x0eee2dd0
0525ccc3  MOV qword ptr [RBP + 0x18],0x0
0525cccb  MOV ESI,0x9e3779b9
0525ccd0  MOVSXD RAX,dword ptr [R13]
0525ccd4  ADD RAX,RSI
0525ccd7  MOVSXD RBX,dword ptr [R13 + 0x4]
0525ccdb  MOV RCX,RAX
0525ccde  SHL RCX,0x6
0525cce2  MOV RDX,RAX
0525cce5  SHR RDX,0x2
0525cce9  ADD RBX,RSI
0525ccec  ADD RBX,RCX
0525ccef  ADD RBX,RDX
0525ccf2  XOR RBX,RAX
0525ccf5  TEST R14,R14
0525ccf8  JZ 0x0525cd65
0525ccfa  MOV RAX,R14
0525ccfd  SHR RAX,0x1
0525cd00  MOV RCX,0x5555555555555555
0525cd0a  AND RCX,RAX
0525cd0d  MOV RAX,R14
0525cd10  SUB RAX,RCX
0525cd13  MOV RCX,0x3333333333333333
0525cd1d  MOV RDX,RAX
0525cd20  AND RDX,RCX
0525cd23  SHR RAX,0x2
0525cd27  AND RAX,RCX
0525cd2a  ADD RAX,RDX
0525cd2d  MOV RCX,RAX
0525cd30  SHR RCX,0x4
0525cd34  ADD RCX,RAX
0525cd37  MOV RAX,0xf0f0f0f0f0f0f0f
0525cd41  AND RAX,RCX
0525cd44  MOV RDI,0x101010101010101
0525cd4e  IMUL RDI,RAX
0525cd52  SHR RDI,0x38
0525cd56  CMP RDI,0x1
0525cd5a  JA 0x0525cd6a
0525cd5c  LEA R13,[R14 + -0x1]
0525cd60  AND R13,RBX
0525cd63  JMP 0x0525cd7d
0525cd65  JMP 0x0525ce23
0525cd6a  MOV R13,RBX
0525cd6d  CMP RBX,R14
0525cd70  JC 0x0525cd7d
0525cd72  MOV RAX,RBX
0525cd75  XOR EDX,EDX
0525cd77  DIV R14
0525cd7a  MOV R13,RDX
0525cd7d  MOV RAX,qword ptr [RBP]
0525cd81  MOV RAX,qword ptr [RAX + R13*0x8]
0525cd85  TEST RAX,RAX
0525cd88  JZ 0x0525ce23
0525cd8e  MOV RCX,qword ptr [RAX]
0525cd91  TEST RCX,RCX
0525cd94  JZ 0x0525ce23
0525cd9a  MOV RAX,qword ptr [RSP + 0x60]
0525cd9f  MOV RSI,qword ptr [RAX]
0525cda2  CMP EDI,0x2
0525cda5  JNC 0x0525cdc2
0525cda7  LEA RAX,[R14 + -0x1]
0525cdab  JMP 0x0525ce12
0525cdb0  CMP qword ptr [RCX + 0x10],RSI
0525cdb4  JZ 0x0525d0d1
0525cdba  MOV RCX,qword ptr [RCX]
0525cdbd  TEST RCX,RCX
0525cdc0  JZ 0x0525ce23
0525cdc2  MOV RAX,qword ptr [RCX + 0x8]
0525cdc6  CMP RAX,RBX
0525cdc9  JZ 0x0525cdb0
0525cdcb  CMP RAX,R14
0525cdce  JC 0x0525cde4
0525cdd0  MOV RDX,RAX
0525cdd3  OR RDX,R14
0525cdd6  SHR RDX,0x20
0525cdda  JZ 0x0525cdeb
0525cddc  XOR EDX,EDX
0525cdde  DIV R14
0525cde1  MOV RAX,RDX
0525cde4  CMP RAX,R13
0525cde7  JZ 0x0525cdba
0525cde9  JMP 0x0525ce23
0525cdeb  XOR EDX,EDX
0525cded  DIV R14D
0525cdf0  MOV EAX,EDX
0525cdf2  CMP RAX,R13
0525cdf5  JZ 0x0525cdba
0525cdf7  JMP 0x0525ce23
0525ce00  CMP qword ptr [RCX + 0x10],RSI
0525ce04  JZ 0x0525d0d1
0525ce0a  MOV RCX,qword ptr [RCX]
0525ce0d  TEST RCX,RCX
0525ce10  JZ 0x0525ce23
0525ce12  MOV RDX,qword ptr [RCX + 0x8]
0525ce16  CMP RDX,RBX
0525ce19  JZ 0x0525ce00
0525ce1b  AND RDX,RAX
0525ce1e  CMP RDX,R13
0525ce21  JZ 0x0525ce0a
0525ce23  LEA RDI,[0xf5463b0]
0525ce2a  MOV RAX,qword ptr [0x0f5463b0]
0525ce31  MOV ESI,0x28
0525ce36  CALL qword ptr [RAX + 0x10]
0525ce39  MOV R12,RAX
0525ce3c  TEST RAX,RAX
0525ce3f  JZ 0x0525d167
0525ce45  MOV qword ptr [RSP + 0xe0],R12
0525ce4d  MOV qword ptr [RSP + 0xe8],RBP
0525ce55  MOV qword ptr [RSP + 0xf0],0x1
0525ce61  MOV qword ptr [R12],0x0
0525ce69  MOV qword ptr [R12 + 0x8],RBX
0525ce6e  MOV RAX,qword ptr [RSP + 0x60]
0525ce73  MOV RAX,qword ptr [RAX]
0525ce76  MOV qword ptr [R12 + 0x10],RAX
0525ce7b  MOV RCX,qword ptr [RSP + 0x10]
0525ce80  MOV RAX,qword ptr [RCX + 0x8]
0525ce84  MOVUPS XMM0,xmmword ptr [RCX]
0525ce87  MOVUPS xmmword ptr [R12 + 0x18],XMM0
0525ce8d  TEST RAX,RAX
0525ce90  JZ 0x0525ce97
0525ce92  INC.LOCK qword ptr [RAX + 0x8]
0525ce97  MOV RAX,qword ptr [RBP + 0x18]
0525ce9b  INC RAX
0525ce9e  JS 0x0525ceaa
0525cea0  XORPS XMM0,XMM0
0525cea3  CVTSI2SS XMM0,RAX
0525cea8  JMP 0x0525cec2
0525ceaa  MOV RCX,RAX
0525cead  SHR RCX,0x1
0525ceb0  AND EAX,0x1
0525ceb3  OR RAX,RCX
0525ceb6  XORPS XMM0,XMM0
0525ceb9  CVTSI2SS XMM0,RAX
0525cebe  ADDSS XMM0,XMM0
0525cec2  MOV RCX,R14
0525cec5  SHR RCX,0x1
0525cec8  MOV EAX,R14D
0525cecb  AND EAX,0x1
0525cece  OR RAX,RCX
0525ced1  TEST R14,R14
0525ced4  JS 0x0525cee4
0525ced6  CVTSI2SS XMM2,R14
0525cedb  MOVSS XMM1,dword ptr [RBP + 0x20]
0525cee0  JNZ 0x0525cef4
0525cee2  JMP 0x0525cf05
0525cee4  CVTSI2SS XMM2,RAX
0525cee9  ADDSS XMM2,XMM2
0525ceed  MOVSS XMM1,dword ptr [RBP + 0x20]
0525cef2  JZ 0x0525cf05
0525cef4  MULSS XMM2,XMM1
0525cef8  UCOMISS XMM0,XMM2
0525cefb  JA 0x0525cf05
0525cefd  MOV RBX,R13
0525cf00  JMP 0x0525d0b6
0525cf05  LEA RAX,[R14 + R14*0x1]
0525cf09  MOV R15D,0x1
0525cf0f  CMP R14,0x3
0525cf13  JC 0x0525cf23
0525cf15  LEA RCX,[R14 + -0x1]
0525cf19  XOR R15D,R15D
0525cf1c  TEST R14,RCX
0525cf1f  SETNZ R15B
0525cf23  OR R15,RAX
0525cf26  DIVSS XMM0,XMM1
0525cf2a  CALL 0x0eee3ab0
0525cf2f  CVTTSS2SI RAX,XMM0
0525cf34  MOV RCX,RAX
0525cf37  SAR RCX,0x3f
0525cf3b  SUBSS XMM0,dword ptr [0x01198778]
0525cf43  CVTTSS2SI RDI,XMM0
0525cf48  AND RDI,RCX
0525cf4b  OR RDI,RAX
0525cf4e  CMP R15,RDI
0525cf51  CMOVA RDI,R15
0525cf55  MOV R15D,0x2
0525cf5b  CMP RDI,0x1
0525cf5f  JZ 0x0525cf6d
0525cf61  LEA RAX,[RDI + -0x1]
0525cf65  TEST RDI,RAX
0525cf68  JNZ 0x0525cf86
0525cf6a  MOV R15,RDI
0525cf6d  MOV R14,qword ptr [RBP + 0x8]
0525cf71  CMP R15,R14
0525cf74  JBE 0x0525cf97
0525cf76  MOV RDI,RBP
0525cf79  MOV RSI,R15
0525cf7c  CALL 0x0525f970
0525cf81  JMP 0x0525d094
0525cf86  CALL 0x0412c3f0
0525cf8b  MOV R15,RAX
0525cf8e  MOV R14,qword ptr [RBP + 0x8]
0525cf92  CMP R15,R14
0525cf95  JA 0x0525cf76
0525cf97  JNC 0x0525d094
0525cf9d  MOV RAX,qword ptr [RBP + 0x18]
0525cfa1  TEST RAX,RAX
0525cfa4  JS 0x0525cfb8
0525cfa6  XORPS XMM0,XMM0
0525cfa9  CVTSI2SS XMM0,RAX
0525cfae  JMP 0x0525cfd0
0525cfb0  UCOMISS XMM7,XMM4
0525cfb3  CALL 0x04890760
0525cfb8  MOV RCX,RAX
0525cfbb  SHR RCX,0x1
0525cfbe  AND EAX,0x1
0525cfc1  OR RAX,RCX
0525cfc4  XORPS XMM0,XMM0
0525cfc7  CVTSI2SS XMM0,RAX
0525cfcc  ADDSS XMM0,XMM0
0525cfd0  DIVSS XMM0,dword ptr [RBP + 0x20]
0525cfd5  CALL 0x0eee3ab0
0525cfda  CVTTSS2SI RCX,XMM0
0525cfdf  MOV RDX,RCX
0525cfe2  SUBSS XMM0,dword ptr [0x01198778]
0525cfea  CVTTSS2SI RAX,XMM0
0525cfef  SAR RDX,0x3f
0525cff3  AND RAX,RDX
0525cff6  OR RAX,RCX
0525cff9  CMP R14,0x3
0525cffd  JC 0x0525d07c
0525cfff  MOV RCX,R14
0525d002  SHR RCX,0x1
0525d005  MOV RDX,0x5555555555555555
0525d00f  AND RDX,RCX
0525d012  MOV RCX,R14
0525d015  SUB RCX,RDX
0525d018  MOV RDX,0x3333333333333333
0525d022  MOV RSI,RCX
0525d025  SHR RSI,0x2
0525d029  AND RCX,RDX
0525d02c  AND RSI,RDX
0525d02f  ADD RSI,RCX
0525d032  MOV RCX,RSI
0525d035  SHR RCX,0x4
0525d039  ADD RCX,RSI
0525d03c  MOV RDX,0xf0f0f0f0f0f0f0f
0525d046  AND RDX,RCX
0525d049  MOV RCX,0x101010101010101
0525d053  IMUL RCX,RDX
0525d057  SHR RCX,0x38
0525d05b  CMP ECX,0x1
0525d05e  JA 0x0525d07c
0525d060  CMP RAX,0x2
0525d064  JC 0x0525d084
0525d066  DEC RAX
0525d069  BSR RCX,RAX
0525d06d  XOR ECX,0x3f
0525d070  NEG CL
0525d072  MOV EAX,0x1
0525d077  SHL RAX,CL
0525d07a  JMP 0x0525d084
0525d07c  MOV RDI,RAX
0525d07f  CALL 0x0412c3f0
0525d084  CMP R15,RAX
0525d087  CMOVBE R15,RAX
0525d08b  CMP R15,R14
0525d08e  JC 0x0525cf76
0525d094  MOV R14,qword ptr [RBP + 0x8]
0525d098  LEA RAX,[R14 + -0x1]
0525d09c  TEST R14,RAX
0525d09f  JNZ 0x0525d0a6
0525d0a1  AND RBX,RAX
0525d0a4  JMP 0x0525d0b6
0525d0a6  CMP RBX,R14
0525d0a9  JC 0x0525d0b6
0525d0ab  MOV RAX,RBX
0525d0ae  XOR EDX,EDX
0525d0b0  DIV R14
0525d0b3  MOV RBX,RDX
0525d0b6  MOV RCX,qword ptr [RBP]
0525d0ba  MOV RAX,qword ptr [RCX + RBX*0x8]
0525d0be  TEST RAX,RAX
0525d0c1  JZ 0x0525d102
0525d0c3  MOV RCX,qword ptr [RAX]
0525d0c6  MOV qword ptr [R12],RCX
0525d0ca  MOV qword ptr [RAX],R12
0525d0cd  INC qword ptr [RBP + 0x18]
0525d0d1  CMP byte ptr [RSP + 0xa0],0x1
0525d0d9  JNZ 0x0525d0e8
0525d0db  MOV RDI,qword ptr [RSP + 0x98]
0525d0e3  CALL 0x0412d520
0525d0e8  MOV R12,qword ptr [RSP + 0x10]
0525d0ed  MOV RAX,R12
0525d0f0  ADD RSP,0x148
0525d0f7  POP RBX
0525d0f8  POP R12
0525d0fa  POP R13
0525d0fc  POP R14
0525d0fe  POP R15
0525d100  POP RBP
0525d101  RET
0525d102  LEA RAX,[RBP + 0x10]
0525d106  MOV RDX,qword ptr [RBP + 0x10]
0525d10a  MOV qword ptr [R12],RDX
0525d10e  MOV qword ptr [RBP + 0x10],R12
0525d112  MOV qword ptr [RCX + RBX*0x8],RAX
0525d116  MOV RAX,qword ptr [R12]
0525d11a  TEST RAX,RAX
0525d11d  JZ 0x0525d0cd
0525d11f  MOV RAX,qword ptr [RAX + 0x8]
0525d123  LEA RDX,[R14 + -0x1]
0525d127  TEST R14,RDX
0525d12a  JNZ 0x0525d135
0525d12c  AND RAX,RDX
0525d12f  MOV qword ptr [RCX + RAX*0x8],R12
0525d133  JMP 0x0525d0cd
0525d135  CMP RAX,R14
0525d138  JC 0x0525d14e
0525d13a  MOV RDX,RAX
0525d13d  OR RDX,R14
0525d140  SHR RDX,0x20
0525d144  JZ 0x0525d157
0525d146  XOR EDX,EDX
0525d148  DIV R14
0525d14b  MOV RAX,RDX
0525d14e  MOV qword ptr [RCX + RAX*0x8],R12
0525d152  JMP 0x0525d0cd
0525d157  XOR EDX,EDX
0525d159  DIV R14D
0525d15c  MOV EAX,EDX
0525d15e  MOV qword ptr [RCX + RAX*0x8],R12
0525d162  JMP 0x0525d0cd
0525d167  MOV EDI,0x28
0525d16c  XOR ESI,ESI
0525d16e  CALL 0x0eec74c0
0525d173  JMP 0x0525ce45
0525d178  MOV EDI,0x1a00
0525d17d  XOR ESI,ESI
0525d17f  CALL 0x0eec74c0
0525d184  JMP 0x0525b171
0525d189  MOV EDI,0xe10
0525d18e  XOR ESI,ESI
0525d190  CALL 0x0eec74c0
0525d195  JMP 0x0525b219
0525d19a  CALL 0x04882eb0
0525d19f  CALL 0x0525f050
0525d1a4  MOV EDI,0x1980
0525d1a9  XOR ESI,ESI
0525d1ab  CALL 0x0eec74c0
0525d1b0  JMP 0x0525bf0b
0525d1b5  MOV EDI,0x40
0525d1ba  XOR ESI,ESI
0525d1bc  CALL 0x0eec74c0
0525d1c1  JMP 0x0525cafe
0525d1c6  CALL 0x04891200
0525d1cb  CALL 0x04891200
0525d1d0  MOV RDI,R14
0525d1d3  MOV R14,RAX
0525d1d6  MOV ESI,0x1980
0525d1db  CALL 0x0412a280
0525d1e0  JMP 0x0525d274
0525d274  MOV RDI,qword ptr [RSP + 0x28]
0525d279  MOV RSI,qword ptr [RSP + 0x68]
0525d27e  SUB RSI,RDI
0525d281  CALL 0x0412a280
0525d286  MOV ESI,0x1a00
0525d28b  MOV RDI,qword ptr [RSP + 0x40]
0525d290  CALL 0x0412a280
0525d295  LEA RDI,[RSP + 0x98]
0525d29d  CALL 0x0525d2e0
0525d2a2  MOV RDI,R14
0525d2a5  CALL 0x0eee2d70
0525d2aa  INT3
```

## `05258c60` — depth 1 from OverworldGeneratorMultinoise___prepareHeights (root OverworldGeneratorMultinoise___prepareHeights)

- Ghidra name: `Aquifer__computeSubstance`
- Body: `[[05258c60, 05258d89] [05258d90, 05258de1] [05258df0, 05258e42] [05258e50, 05258fe6] [05258ff0, 05259062] [05259070, 052590d8] [052590e0, 0525994d]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Aquifer__computeSubstance
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
               ulong *param_5)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  ulong uVar28;
  long lVar29;
  bool bVar30;
  char cVar31;
  int iVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  int iVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  float fVar40;
  float fVar41;
  float fVar42;
  int iStack_f8;
  undefined8 uStack_f0;
  uint uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  uint uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulong uStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  ulong uStack_88;
  ulong uStack_80;
  uint uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  char cStack_5c;
  ulong *puStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar39 = (undefined4)((ulong)param_3 >> 0x20);
  uVar11 = *(uint *)((long)param_5 + 4);
  if ((int)uVar11 < -0x36) {
    *(undefined8 *)((long)param_4 + 0x1c) = 0xffffffca;
    *(undefined1 *)((long)param_4 + 0x24) = 1;
    *(bool *)((long)param_4 + 0x25) = uVar11 == 0xffffffc9;
  }
  else {
    uVar23 = *param_5;
    uVar11 = (uint)param_5[1];
    uVar28 = uVar23 >> 0x20;
    iVar12 = (int)(uVar23 >> 0x20) + 1;
    iVar20 = (int)uVar23 + -5;
    iVar32 = iVar20 >> 0x1f;
    iVar20 = iVar32 - iVar20;
    iVar13 = iVar20 + 0xf;
    if (-1 < iVar20) {
      iVar13 = iVar20;
    }
    uStack_50 = (ulong)(uint)(iVar32 - (iVar13 >> 4));
    iVar20 = iVar12 >> 0x1f;
    iVar13 = (int)((ulong)((long)(iVar20 - iVar12) * -0x2aaaaaab) >> 0x20);
    uVar24 = (iVar20 - (iVar13 >> 0x1f)) + (iVar13 >> 1);
    uStack_48 = (ulong)uVar24;
    iVar12 = (int)(uVar11 - 5) >> 0x1f;
    iVar20 = iVar12 - (uVar11 - 5);
    iVar13 = iVar20 + 0xf;
    if (-1 < iVar20) {
      iVar13 = iVar20;
    }
    iVar12 = iVar12 - (iVar13 >> 4);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    lStack_e0 = (long)iVar12;
    uVar15 = 0xffffffffffffffff;
    uVar10 = CONCAT71((int7)(int3)((uint)iVar12 >> 8),1);
    uStack_88 = 0;
    iStack_f8 = 0;
    uStack_c8 = uStack_c8 & 0xffffffff00000000;
    lVar18 = 0;
    uVar34 = 0xffffffffffffffff;
    auStack_a8._0_8_ = 0xffffffffffffffff;
    do {
      uVar7 = (undefined4)uVar10;
      iVar13 = (int)(lVar18 + uStack_50);
      uStack_40 = (lVar18 + uStack_50 & 0xffffffff) * 0x2fc20f00000000;
      iStack_70 = iVar13 * 0x10;
      uVar16 = 0xffffffff;
      do {
        uStack_38 = uVar16;
        uVar8 = uVar24 + (int)uStack_38;
        uStack_b0 = (long)(CONCAT44(0,uVar8) << 0x20 ^ uStack_40) >> 0x20;
        auStack_98._0_8_ = CONCAT44(0,uVar8);
        lVar18 = 0;
        uVar16 = uVar15;
        bVar6 = true;
        do {
          bVar30 = bVar6;
          iVar12 = (int)(lVar18 + lStack_e0);
          lVar22 = (long)(int)(((iVar13 - (int)param_4[5]) * (int)param_4[7] +
                               (uVar8 - *(int *)((long)param_4 + 0x2c))) *
                               *(int *)((long)param_4 + 0x3c) + (iVar12 - (int)param_4[6]));
          puVar1 = (ulong *)(param_4[8] + lVar22 * 0x14);
          if (((*(int *)(param_4[8] + lVar22 * 0x14) == 0x7fffffff) &&
              (*(int *)((long)puVar1 + 4) == 0x7fffffff)) && ((int)puVar1[1] == 0x7fffffff)) {
            uVar23 = (lVar18 + lStack_e0) * 0x6ebfff5 ^ uStack_b0;
            uVar28 = (long)((uVar23 * 0x285b825 + 0xb) * uVar23) >> 0x10 ^
                     *(ulong *)(*param_4 + 0xe8);
            uVar23 = *(ulong *)(*param_4 + 0xf0);
            if (uVar28 == 0 && uVar23 == 0) {
              uVar23 = 0x6a09e667f3bcc909;
              uVar28 = 0x9e3779b97f4a7c15;
            }
            uVar17 = uVar23 ^ uVar28;
            uVar15 = uVar17 << 0x15 ^ (uVar28 << 0x31 | uVar28 >> 0xf) ^ uVar17;
            uVar17 = uVar17 << 0x1c | uVar17 >> 0x24;
            lVar18 = (ulong)(((int)(uVar28 + uVar23) * 0x20000 | (uint)(uVar28 + uVar23 >> 0x2f)) +
                            (int)uVar28) * 10;
            uVar11 = (uint)lVar18;
            while (iVar20 = (int)uVar15, uVar11 < 6) {
              lVar18 = uVar15 + uVar17;
              uVar17 = uVar17 ^ uVar15;
              uVar15 = uVar17 << 0x15 ^ (uVar15 << 0x31 | uVar15 >> 0xf) ^ uVar17;
              uVar17 = uVar17 << 0x1c | uVar17 >> 0x24;
              lVar18 = (ulong)(((int)lVar18 * 0x20000 | (uint)((ulong)lVar18 >> 0x2f)) + iVar20) *
                       10;
              uVar11 = (uint)lVar18;
            }
            uVar11 = ((int)(uVar15 + uVar17) * 0x20000 | (uint)(uVar15 + uVar17 >> 0x2f)) + iVar20;
            uVar17 = uVar17 ^ uVar15;
            uVar23 = uVar17 << 0x15 ^ (uVar15 << 0x31 | uVar15 >> 0xf) ^ uVar17;
            uVar28 = uVar17 << 0x1c | uVar17 >> 0x24;
            while( true ) {
              if (((ulong)uVar11 * 9 & 0xfffffffc) != 0) break;
              uVar11 = ((int)(uVar23 + uVar28) * 0x20000 | (uint)(uVar23 + uVar28 >> 0x2f)) +
                       (int)uVar23;
              uVar28 = uVar28 ^ uVar23;
              uVar23 = uVar28 << 0x15 ^ (uVar23 << 0x31 | uVar23 >> 0xf) ^ uVar28;
              uVar28 = uVar28 << 0x1c | uVar28 >> 0x24;
            }
            lVar22 = (ulong)(((int)(uVar23 + uVar28) * 0x20000 | (uint)(uVar23 + uVar28 >> 0x2f)) +
                            (int)uVar23) * 10;
            if ((uint)lVar22 < 6) {
              uVar28 = uVar28 ^ uVar23;
              uVar15 = uVar28 << 0x1c | uVar28 >> 0x24;
              uVar28 = uVar28 << 0x15 ^ (uVar23 << 0x31 | uVar23 >> 0xf) ^ uVar28;
              do {
                lVar22 = uVar15 + uVar28;
                iVar20 = (int)uVar28;
                uVar15 = uVar15 ^ uVar28;
                uVar28 = uVar15 << 0x15 ^ (uVar28 << 0x31 | uVar28 >> 0xf) ^ uVar15;
                uVar15 = uVar15 << 0x1c | uVar15 >> 0x24;
                lVar22 = (ulong)(((int)lVar22 * 0x20000 | (uint)((ulong)lVar22 >> 0x2f)) + iVar20) *
                         10;
              } while ((uint)lVar22 < 6);
            }
            uVar25 = (int)((ulong)lVar18 >> 0x20) + iStack_70;
            uVar17 = (ulong)uVar25;
            uVar11 = (int)((ulong)uVar11 * 9 >> 0x20) + uVar8 * 0xc;
            uVar35 = (ulong)uVar11;
            uVar14 = iVar12 << 4 | (uint)((ulong)lVar22 >> 0x20);
            *puVar1 = CONCAT44(uVar11,uVar25);
            *(uint *)(puVar1 + 1) = uVar14;
            uVar23 = (ulong)(uint)*param_5;
            uVar28 = (ulong)*(uint *)((long)param_5 + 4);
            uVar11 = (uint)param_5[1];
          }
          else {
            uVar17 = *puVar1;
            uVar35 = uVar17 >> 0x20;
            uVar14 = (uint)puVar1[1];
          }
          lVar22 = (long)(int)uVar17 - (long)(int)uVar23;
          lVar18 = (long)(int)uVar35 - (long)(int)uVar28;
          uVar33 = ((long)(int)uVar14 - (long)(int)uVar11) * ((long)(int)uVar14 - (long)(int)uVar11)
                   + lVar18 * lVar18 + lVar22 * lVar22;
          if (uVar16 < uVar33) {
            uVar15 = uVar16;
            if (uVar34 < uVar33) {
              if (uVar33 <= (ulong)auStack_a8._0_8_) {
                uStack_d8 = uVar17 & 0xffffffff | uVar35 << 0x20;
                auStack_a8._0_8_ = uVar33;
                uStack_d0 = uVar14;
              }
            }
            else {
              uStack_d0 = uStack_e8;
              uStack_d8 = uStack_f0;
              uStack_f0 = uVar17 & 0xffffffff | uVar35 << 0x20;
              auStack_a8._0_8_ = uVar34;
              uVar34 = uVar33;
              uStack_e8 = uVar14;
            }
          }
          else {
            uStack_d0 = uStack_e8;
            uStack_d8 = uStack_f0;
            uStack_f0 = uStack_80;
            uStack_e8 = uStack_78;
            uStack_80 = uVar17 & 0xffffffff | uVar35 << 0x20;
            uStack_c8 = CONCAT44(uStack_c8._4_4_,(int)uVar17);
            auStack_a8._0_8_ = uVar34;
            uVar15 = uVar33;
            uVar34 = uVar16;
            iStack_f8 = (int)uVar35;
            uStack_88 = (ulong)uVar14;
            uStack_78 = uVar14;
          }
          lVar18 = 1;
          uVar16 = uVar15;
          bVar6 = false;
        } while (bVar30);
        uVar8 = (int)uStack_38 + 1;
        uVar16 = (ulong)uVar8;
      } while (uVar8 != 2);
      lVar18 = 1;
      uStack_74._0_1_ = (char)uVar10;
      uVar10 = 0;
    } while ((char)uStack_74 != '\0');
    iVar12 = ((int)(float)uStack_c8 >> 0x1f) - (int)(float)uStack_c8;
    iVar13 = iVar12 + 0xf;
    if (-1 < iVar12) {
      iVar13 = iVar12;
    }
    iVar12 = (int)((ulong)((long)((iStack_f8 >> 0x1f) - iStack_f8) * -0x2aaaaaab) >> 0x20);
    iVar32 = (int)uStack_88 >> 0x1f;
    iVar21 = iVar32 - (int)uStack_88;
    iVar20 = iVar21 + 0xf;
    if (-1 < iVar21) {
      iVar20 = iVar21;
    }
    lVar18 = (long)((((((int)(float)uStack_c8 >> 0x1f) - (iVar13 >> 4)) - (int)param_4[5]) *
                     (int)param_4[7] +
                    ((((iVar12 >> 1) - (iVar12 >> 0x1f)) + (iStack_f8 >> 0x1f)) -
                    *(int *)((long)param_4 + 0x2c))) * *(int *)((long)param_4 + 0x3c) +
                   ((iVar32 - (iVar20 >> 4)) - (int)param_4[6]));
    puVar2 = (undefined8 *)(param_4[8] + lVar18 * 0x14);
    uVar11 = *(uint *)(param_4[8] + 0xc + lVar18 * 0x14);
    uStack_74 = uVar7;
    puStack_58 = param_5;
    if (uVar11 == 0x7fffffff) {
      Aquifer__computeFluid(&uStack_6c,param_4,&uStack_80);
      *puVar2 = CONCAT44(uStack_68,uStack_6c);
      puVar2[1] = CONCAT44(uStack_60,uStack_64);
      *(char *)(puVar2 + 2) = cStack_5c;
      uVar11 = *(uint *)((long)puVar2 + 0xc);
      cVar19 = cStack_5c;
    }
    else {
      cVar19 = *(char *)(puVar2 + 2);
    }
    auVar5 = auStack_98;
    auVar4 = auStack_a8;
    auStack_98._4_4_ = 0;
    auStack_98._0_4_ = uVar11;
    lVar18 = uVar15 - uVar34;
    if ((long)uVar15 < (long)uVar34) {
      lVar18 = uVar34 - uVar15;
    }
    fVar37 = (float)lVar18 * _DAT_011988f4 + _DAT_011983f0;
    *(bool *)((long)param_4 + 0x25) = _DAT_01198450 < fVar37;
    *(uint *)((long)param_4 + 0x1c) = uVar11;
    *(char *)((long)param_4 + 0x24) = cVar19;
    fVar41 = 0.0;
    if (_DAT_011985d4 < fVar37) {
      lStack_e0 = CONCAT71(lStack_e0._1_7_,cVar19);
      auStack_98._8_8_ = auVar5._8_8_;
      uStack_c8 = uVar15 - auStack_a8._0_8_;
      if ((long)uVar15 < (long)auStack_a8._0_8_) {
        uStack_c8 = auStack_a8._0_8_ - uVar15;
      }
      lVar18 = uVar34 - auStack_a8._0_8_;
      if ((long)uVar34 < (long)auStack_a8._0_8_) {
        lVar18 = auStack_a8._0_8_ - uVar34;
      }
      iVar12 = ((int)uStack_f0 >> 0x1f) - (int)uStack_f0;
      iVar13 = iVar12 + 0xf;
      if (-1 < iVar12) {
        iVar13 = iVar12;
      }
      iVar12 = (int)((ulong)((long)((uStack_f0._4_4_ >> 0x1f) - uStack_f0._4_4_) * -0x2aaaaaab) >>
                    0x20);
      iVar32 = ((int)uStack_e8 >> 0x1f) - uStack_e8;
      iVar20 = iVar32 + 0xf;
      if (-1 < iVar32) {
        iVar20 = iVar32;
      }
      iVar32 = (int)param_4[5];
      iVar21 = *(int *)((long)param_4 + 0x2c);
      iVar36 = (int)param_4[6];
      iVar27 = (int)param_4[7];
      iVar26 = *(int *)((long)param_4 + 0x3c);
      lVar29 = (long)((((((int)uStack_f0 >> 0x1f) - (iVar13 >> 4)) - iVar32) * iVar27 +
                      ((((iVar12 >> 1) - (iVar12 >> 0x1f)) + (uStack_f0._4_4_ >> 0x1f)) - iVar21)) *
                      iVar26 + ((((int)uStack_e8 >> 0x1f) - (iVar20 >> 4)) - iVar36));
      lVar22 = param_4[8];
      puVar3 = (undefined4 *)(lVar22 + lVar29 * 0x14);
      auStack_a8._0_4_ = *(uint *)(lVar22 + 0xc + lVar29 * 0x14);
      auStack_a8._4_4_ = 0;
      uStack_88 = CONCAT44(uStack_88._4_4_,fVar37);
      if (auStack_a8._0_4_ == 0x7fffffff) {
        auStack_a8 = auVar4;
        Aquifer__computeFluid(&uStack_6c,param_4,&uStack_f0);
        auVar4 = auStack_a8;
        *puVar3 = uStack_6c;
        puVar3[1] = uStack_68;
        puVar3[2] = uStack_64;
        puVar3[3] = uStack_60;
        *(char *)(puVar3 + 4) = cStack_5c;
        auStack_a8._4_4_ = 0;
        auStack_a8._0_4_ = puVar3[3];
        auStack_a8._8_8_ = auVar4._8_8_;
        iVar32 = (int)param_4[5];
        iVar21 = *(int *)((long)param_4 + 0x2c);
        iVar36 = (int)param_4[6];
        iVar27 = (int)param_4[7];
        iVar26 = *(int *)((long)param_4 + 0x3c);
        lVar22 = param_4[8];
        cVar19 = cStack_5c;
      }
      else {
        auStack_a8._8_8_ = auVar4._8_8_;
        cVar19 = *(char *)(puVar3 + 4);
      }
      iVar12 = ((int)uStack_d8 >> 0x1f) - (int)uStack_d8;
      iVar13 = iVar12 + 0xf;
      if (-1 < iVar12) {
        iVar13 = iVar12;
      }
      iVar12 = (int)((ulong)((long)((uStack_d8._4_4_ >> 0x1f) - uStack_d8._4_4_) * -0x2aaaaaab) >>
                    0x20);
      iVar9 = ((int)uStack_d0 >> 0x1f) - uStack_d0;
      iVar20 = iVar9 + 0xf;
      if (-1 < iVar9) {
        iVar20 = iVar9;
      }
      lVar29 = (long)(((((int)uStack_d0 >> 0x1f) - iVar36) - (iVar20 >> 4)) +
                     (((uStack_d8._4_4_ >> 0x1f) - iVar21) + ((iVar12 >> 1) - (iVar12 >> 0x1f)) +
                     ((((int)uStack_d8 >> 0x1f) - iVar32) - (iVar13 >> 4)) * iVar27) * iVar26);
      puVar2 = (undefined8 *)(lVar22 + lVar29 * 0x14);
      iVar13 = *(int *)(lVar22 + 0xc + lVar29 * 0x14);
      if (iVar13 == 0x7fffffff) {
        Aquifer__computeFluid(&uStack_6c,param_4,&uStack_d8);
        *puVar2 = CONCAT44(uStack_68,uStack_6c);
        puVar2[1] = CONCAT44(uStack_60,uStack_64);
        *(char *)(puVar2 + 2) = cStack_5c;
        iVar13 = *(int *)((long)puVar2 + 0xc);
        cVar31 = cStack_5c;
      }
      else {
        cVar31 = *(char *)(puVar2 + 2);
      }
      puVar1 = puStack_58;
      iVar12 = auStack_98._0_4_;
      fVar41 = (float)(long)uStack_c8;
      uVar23 = *puStack_58;
      iVar20 = (int)(uVar23 >> 0x20);
      iVar32 = auStack_a8._0_4_;
      fVar37 = _DAT_01198c14;
      if (((iVar20 < iVar12) && (iVar20 < iVar32)) && ((char)lStack_e0 != cVar19)) {
        uStack_c0 = 0;
        uStack_bc = 0;
        uStack_c8._0_4_ = _DAT_011983f0;
        uStack_c8._4_4_ = 0;
      }
      else {
        uStack_c8._0_4_ = 0.0;
        uStack_c0 = 0;
        uStack_bc = 0;
        uStack_c8._4_4_ = 0;
        if (iVar12 - iVar32 != 0) {
          iVar21 = iVar32 - iVar12;
          if (iVar32 < iVar12) {
            iVar21 = iVar12 - iVar32;
          }
          fVar38 = ((float)iVar20 + _DAT_011986e0) - (float)(iVar32 + iVar12) * _DAT_011986e0;
          fVar42 = (float)iVar21 * _DAT_011986e0 - (float)(_DAT_014e7ba0 & (uint)fVar38);
          if (fVar38 <= 0.0) {
            uStack_c8._0_4_ =
                 (fVar42 + _DAT_01198af0) /
                 *(float *)(&UNK_014f03a8 + (ulong)(0.0 < fVar42 + _DAT_01198af0) * 4);
          }
          else {
            uStack_c8._0_4_ = (fVar42 + 0.0) / *(float *)(&UNK_014f0310 + (ulong)(0.0 < fVar42) * 4)
            ;
          }
          uStack_c8._4_4_ = uVar39;
          uStack_c0 = in_XMM2_Dc;
          uStack_bc = in_XMM2_Dd;
          if ((float)(_DAT_014e7ba0 & (uint)(float)uStack_c8) <= _DAT_01198724) {
            uStack_b0 = CONCAT44(uStack_b0._4_4_,fVar41);
            fVar37 = (float)func_0x0d3414e0((float)(int)uVar23,*param_4);
            iVar12 = auStack_98._0_4_;
            uStack_c8._0_4_ = (float)uStack_c8 + fVar37;
            uVar23 = *puVar1;
            iVar20 = (int)(uVar23 >> 0x20);
            fVar41 = (float)uStack_b0;
          }
        }
      }
      fVar41 = fVar41 * _DAT_01198cf4;
      fVar42 = (float)lVar18 * _DAT_01198cf4;
      if (((iVar20 < iVar12) && (iVar20 < iVar13)) && ((char)lStack_e0 != cVar31)) {
        auStack_98._4_4_ = 0;
        auStack_98._8_4_ = 0;
        auStack_98._12_4_ = 0;
        auStack_98._0_4_ = _DAT_011983f0;
      }
      else {
        auStack_98._0_4_ = 0.0;
        auStack_98._4_4_ = 0;
        auStack_98._8_4_ = 0;
        auStack_98._12_4_ = 0;
        if (iVar12 - iVar13 != 0) {
          iVar21 = iVar13 - iVar12;
          if (iVar13 < iVar12) {
            iVar21 = iVar12 - iVar13;
          }
          fVar40 = ((float)iVar20 + _DAT_011986e0) - (float)(iVar12 + iVar13) * _DAT_011986e0;
          fVar38 = (float)iVar21 * _DAT_011986e0 - (float)(_DAT_014e7ba0 & (uint)fVar40);
          if (fVar40 <= 0.0) {
            auStack_98._0_4_ =
                 (fVar38 + _DAT_01198af0) /
                 *(float *)(&UNK_014f03a8 + (ulong)(0.0 < fVar38 + _DAT_01198af0) * 4);
          }
          else {
            auStack_98._0_4_ =
                 (fVar38 + 0.0) / *(float *)(&UNK_014f0310 + (ulong)(0.0 < fVar38) * 4);
          }
          auStack_98._12_4_ = 0;
          auStack_98._8_4_ = 0;
          auStack_98._4_4_ = 0;
          if ((float)(_DAT_014e7ba0 & auStack_98._0_4_) <= _DAT_01198724) {
            if ((fVar37 != _DAT_01198c14) || (NAN(fVar37) || NAN(_DAT_01198c14))) {
              auStack_98._0_4_ = (float)auStack_98._0_4_ + fVar37;
            }
            else {
              uStack_b0 = CONCAT44(uStack_b0._4_4_,fVar41);
              auStack_98 = ZEXT416((uint)auStack_98._0_4_);
              fVar37 = (float)func_0x0d3414e0((float)(int)uVar23,*param_4);
              auStack_98._0_4_ = (float)auStack_98._0_4_ + fVar37;
              uVar23 = *puVar1;
              iVar20 = (int)(uVar23 >> 0x20);
              fVar41 = (float)uStack_b0;
            }
          }
        }
      }
      fVar41 = _DAT_011983f0 - fVar41;
      fVar42 = _DAT_011983f0 - fVar42;
      if (((iVar32 <= iVar20) || (iVar13 <= iVar20)) ||
         (auStack_a8._0_4_ = _DAT_011983f0, cVar19 == cVar31)) {
        auStack_a8._0_4_ = 0.0;
        if (iVar32 - iVar13 != 0) {
          iVar12 = iVar13 - iVar32;
          if (iVar13 < iVar32) {
            iVar12 = iVar32 - iVar13;
          }
          fVar40 = ((float)iVar20 + _DAT_011986e0) - (float)(iVar13 + iVar32) * _DAT_011986e0;
          fVar38 = (float)iVar12 * _DAT_011986e0 - (float)(_DAT_014e7ba0 & (uint)fVar40);
          if (fVar40 <= 0.0) {
            auStack_a8._0_4_ =
                 (fVar38 + _DAT_01198af0) /
                 *(float *)(&UNK_014f03a8 + (ulong)(0.0 < fVar38 + _DAT_01198af0) * 4);
          }
          else {
            auStack_a8._0_4_ =
                 (fVar38 + 0.0) / *(float *)(&UNK_014f0310 + (ulong)(0.0 < fVar38) * 4);
          }
          if ((float)(_DAT_014e7ba0 & auStack_a8._0_4_) <= _DAT_01198724) {
            if ((fVar37 == _DAT_01198c14) && (!NAN(fVar37) && !NAN(_DAT_01198c14))) {
              auStack_a8 = ZEXT416((uint)auStack_a8._0_4_);
              lStack_e0 = CONCAT44(lStack_e0._4_4_,fVar42);
              fVar37 = (float)func_0x0d3414e0((float)(int)uVar23,*param_4);
              fVar42 = (float)lStack_e0;
            }
            auStack_a8._0_4_ = (float)auStack_a8._0_4_ + fVar37;
          }
        }
      }
      fVar37 = 0.0;
      if (0.0 <= (float)uStack_88) {
        fVar37 = (float)uStack_88;
      }
      fVar38 = 0.0;
      if (0.0 <= fVar41) {
        fVar38 = fVar41;
      }
      fVar41 = 0.0;
      if (0.0 <= fVar42) {
        fVar41 = fVar42;
      }
      fVar42 = fVar38 * (float)auStack_98._0_4_;
      if (fVar38 * (float)auStack_98._0_4_ <= fVar41 * (float)auStack_a8._0_4_) {
        fVar42 = fVar41 * (float)auStack_a8._0_4_;
      }
      if ((float)uStack_c8 <= fVar42) {
        uStack_c8._0_4_ = fVar42;
      }
      uStack_c8._0_4_ = (fVar37 + fVar37) * (float)uStack_c8;
      fVar41 = 0.0;
      if (0.0 <= (float)uStack_c8) {
        fVar41 = (float)uStack_c8;
      }
    }
    *(float *)(param_4 + 4) = fVar41;
  }
  return;
}


```

### Assembly

```asm
05258c60  PUSH RBP
05258c61  PUSH R15
05258c63  PUSH R14
05258c65  PUSH R13
05258c67  PUSH R12
05258c69  PUSH RBX
05258c6a  SUB RSP,0xc8
05258c71  MOV RBX,RDI
05258c74  MOV EAX,dword ptr [RSI + 0x4]
05258c77  CMP EAX,-0x37
05258c7a  JG 0x05258c92
05258c7c  MOV EAX,0xffffffca
05258c81  MOV qword ptr [RBX + 0x1c],RAX
05258c85  MOV byte ptr [RBX + 0x24],0x1
05258c89  SETZ byte ptr [RBX + 0x25]
05258c8d  JMP 0x0525993c
05258c92  MOV RCX,qword ptr [RSI]
05258c95  MOV qword ptr [RSP + 0xa0],RSI
05258c9d  MOV R8D,dword ptr [RSI + 0x8]
05258ca1  MOV R9,RCX
05258ca4  SHR R9,0x20
05258ca8  LEA EDX,[R9 + 0x1]
05258cac  LEA EAX,[R8 + -0x5]
05258cb0  LEA ESI,[RCX + -0x5]
05258cb3  MOV R10D,ESI
05258cb6  SAR R10D,0x1f
05258cba  MOV EDI,R10D
05258cbd  SUB EDI,ESI
05258cbf  LEA ESI,[RDI + 0xf]
05258cc2  TEST EDI,EDI
05258cc4  CMOVNS ESI,EDI
05258cc7  SAR ESI,0x4
05258cca  SUB R10D,ESI
05258ccd  MOV qword ptr [RSP + 0xa8],R10
05258cd5  MOV ESI,EDX
05258cd7  SAR ESI,0x1f
05258cda  MOV EDI,ESI
05258cdc  SUB EDI,EDX
05258cde  MOVSXD RDX,EDI
05258ce1  IMUL RDX,RDX,-0x2aaaaaab
05258ce8  MOV RDI,RDX
05258ceb  SHR RDI,0x3f
05258cef  SHR RDX,0x20
05258cf3  SAR EDX,0x1
05258cf5  ADD EDI,ESI
05258cf7  ADD EDI,EDX
05258cf9  MOV qword ptr [RSP + 0xb0],RDI
05258d01  MOV EDX,EAX
05258d03  SAR EDX,0x1f
05258d06  MOV ESI,EDX
05258d08  SUB ESI,EAX
05258d0a  LEA EAX,[RSI + 0xf]
05258d0d  TEST ESI,ESI
05258d0f  CMOVNS EAX,ESI
05258d12  SAR EAX,0x4
05258d15  SUB EDX,EAX
05258d17  MOV dword ptr [RSP + 0x80],0x0
05258d22  MOV qword ptr [RSP + 0x78],0x0
05258d2b  MOV dword ptr [RSP + 0x10],0x0
05258d33  MOV qword ptr [RSP + 0x8],0x0
05258d3c  MOV dword ptr [RSP + 0x28],0x0
05258d44  MOV qword ptr [RSP + 0x20],0x0
05258d4d  MOVSXD RAX,EDX
05258d50  MOV qword ptr [RSP + 0x18],RAX
05258d55  MOV RBP,-0x1
05258d5c  MOV AL,0x1
05258d5e  MOV qword ptr [RSP + 0x70],0x0
05258d67  MOV dword ptr [RSP],0x0
05258d6e  MOV dword ptr [RSP + 0x30],0x0
05258d76  XOR ESI,ESI
05258d78  MOV R12,-0x1
05258d7f  MOV qword ptr [RSP + 0x50],-0x1
05258d88  JMP 0x05258da8
05258d90  MOV ESI,0x1
05258d95  TEST byte ptr [RSP + 0x84],0x1
05258d9d  MOV EAX,0x0
05258da2  JZ 0x052591c6
05258da8  MOV dword ptr [RSP + 0x84],EAX
05258daf  ADD RSI,qword ptr [RSP + 0xa8]
05258db7  MOV EDX,ESI
05258db9  MOV RAX,0x2fc20f00000000
05258dc3  IMUL RDX,RAX
05258dc7  MOV qword ptr [RSP + 0xb8],RDX
05258dcf  MOV EAX,ESI
05258dd1  SHL EAX,0x4
05258dd4  MOV dword ptr [RSP + 0x88],EAX
05258ddb  MOV EDX,0xffffffff
05258de0  JMP 0x05258dff
05258df0  MOV RDX,qword ptr [RSP + 0xc0]
05258df8  INC EDX
05258dfa  CMP EDX,0x2
05258dfd  JZ 0x05258d90
05258dff  MOV RAX,qword ptr [RSP + 0xb0]
05258e07  MOV qword ptr [RSP + 0xc0],RDX
05258e0f  ADD EAX,EDX
05258e11  MOV RDX,RAX
05258e14  SHL RDX,0x20
05258e18  XOR RDX,qword ptr [RSP + 0xb8]
05258e20  SAR RDX,0x20
05258e24  MOV qword ptr [RSP + 0x48],RDX
05258e29  MOV qword ptr [RSP + 0x60],RAX
05258e2e  LEA EDX,[RAX*0x4]
05258e35  LEA EAX,[RDX + RDX*0x2]
05258e38  MOV dword ptr [RSP + 0x4],EAX
05258e3c  MOV R10B,0x1
05258e3f  XOR EDX,EDX
05258e41  JMP 0x05258ec0
05258e50  MOV ESI,dword ptr [RSP + 0x10]
05258e54  MOV dword ptr [RSP + 0x28],ESI
05258e58  MOV RSI,qword ptr [RSP + 0x8]
05258e5d  MOV qword ptr [RSP + 0x20],RSI
05258e62  MOV RSI,qword ptr [RSP + 0x78]
05258e67  MOV qword ptr [RSP + 0x8],RSI
05258e6c  MOV ESI,dword ptr [RSP + 0x80]
05258e73  MOV dword ptr [RSP + 0x10],ESI
05258e77  MOV RSI,R14
05258e7a  SHL RSI,0x20
05258e7e  MOV R13D,EDI
05258e81  OR R13,RSI
05258e84  MOV qword ptr [RSP + 0x78],R13
05258e89  MOV dword ptr [RSP + 0x80],EDX
05258e90  MOV qword ptr [RSP + 0x70],RDX
05258e95  MOV dword ptr [RSP],R14D
05258e99  MOV dword ptr [RSP + 0x30],EDI
05258e9d  MOV qword ptr [RSP + 0x50],R12
05258ea2  MOV R12,RBP
05258ea5  MOV RBP,R11
05258ea8  MOV RSI,R15
05258eab  MOV EDX,0x1
05258eb0  TEST R10B,0x1
05258eb4  MOV R10D,0x0
05258eba  JZ 0x05258df0
05258ec0  MOV RAX,RBP
05258ec3  ADD RDX,qword ptr [RSP + 0x18]
05258ec8  MOV R15,RSI
05258ecb  SUB ESI,dword ptr [RBX + 0x28]
05258ece  MOV RDI,qword ptr [RSP + 0x60]
05258ed3  SUB EDI,dword ptr [RBX + 0x2c]
05258ed6  MOV R11D,EDX
05258ed9  SUB R11D,dword ptr [RBX + 0x30]
05258edd  IMUL ESI,dword ptr [RBX + 0x38]
05258ee1  ADD ESI,EDI
05258ee3  IMUL ESI,dword ptr [RBX + 0x3c]
05258ee7  ADD ESI,R11D
05258eea  MOVSXD RSI,ESI
05258eed  MOV RDI,qword ptr [RBX + 0x40]
05258ef1  LEA RSI,[RSI + RSI*0x4]
05258ef5  LEA R11,[RDI + RSI*0x4]
05258ef9  CMP dword ptr [RDI + RSI*0x4],0x7fffffff
05258f00  JNZ 0x05258ff0
05258f06  CMP dword ptr [R11 + 0x4],0x7fffffff
05258f0e  JNZ 0x05258ff0
05258f14  CMP dword ptr [R11 + 0x8],0x7fffffff
05258f1c  JNZ 0x05258ff0
05258f22  MOV RCX,qword ptr [RBX]
05258f25  IMUL RSI,RDX,0x6ebfff5
05258f2c  XOR RSI,qword ptr [RSP + 0x48]
05258f31  IMUL RDI,RSI,0x285b825
05258f38  ADD RDI,0xb
05258f3c  IMUL RDI,RSI
05258f40  SAR RDI,0x10
05258f44  XOR RDI,qword ptr [RCX + 0xe8]
05258f4b  MOV RBP,qword ptr [RCX + 0xf0]
05258f52  MOV RCX,RDI
05258f55  OR RCX,RBP
05258f58  MOV RCX,0x6a09e667f3bcc909
05258f62  CMOVZ RBP,RCX
05258f66  MOV RCX,-0x61c8864680b583eb
05258f70  CMOVZ RDI,RCX
05258f74  LEA RCX,[RDI + RBP*0x1]
05258f78  ROL RCX,0x11
05258f7c  ADD ECX,EDI
05258f7e  XOR RBP,RDI
05258f81  ROL RDI,0x31
05258f85  MOV R8,RBP
05258f88  SHL R8,0x15
05258f8c  XOR R8,RDI
05258f8f  XOR R8,RBP
05258f92  ROL RBP,0x1c
05258f96  ADD RCX,RCX
05258f99  LEA RDI,[RCX + RCX*0x4]
05258f9d  CMP EDI,0x5
05258fa0  JA 0x052590a1
05258fa6  NOP word ptr CS:[RAX + RAX*0x1]
05258fb0  LEA RCX,[R8 + RBP*0x1]
05258fb4  ROL RCX,0x11
05258fb8  ADD ECX,R8D
05258fbb  XOR RBP,R8
05258fbe  ROL R8,0x31
05258fc2  MOV R14,RBP
05258fc5  SHL R14,0x15
05258fc9  XOR R14,R8
05258fcc  XOR R14,RBP
05258fcf  ROL RBP,0x1c
05258fd3  ADD RCX,RCX
05258fd6  LEA RDI,[RCX + RCX*0x4]
05258fda  MOV R8,R14
05258fdd  CMP EDI,0x6
05258fe0  JC 0x05258fb0
05258fe2  JMP 0x052590a4
05258ff0  MOV RDI,qword ptr [R11]
05258ff3  MOV R14,RDI
05258ff6  SHR R14,0x20
05258ffa  MOV EDX,dword ptr [R11 + 0x8]
05258ffe  MOVSXD RSI,EDI
05259001  MOVSXD R11,ECX
05259004  SUB RSI,R11
05259007  MOVSXD RBP,R14D
0525900a  MOVSXD R11,R9D
0525900d  SUB RBP,R11
05259010  MOVSXD R11,EDX
05259013  MOVSXD R13,R8D
05259016  SUB R11,R13
05259019  IMUL RSI,RSI
0525901d  IMUL RBP,RBP
05259021  ADD RBP,RSI
05259024  IMUL R11,R11
05259028  ADD R11,RBP
0525902b  MOV RBP,RAX
0525902e  CMP RAX,R11
05259031  JNC 0x05258e50
05259037  CMP R12,R11
0525903a  JNC 0x05259070
0525903c  CMP qword ptr [RSP + 0x50],R11
05259041  JC 0x05258ea8
05259047  SHL R14,0x20
0525904b  MOV ESI,EDI
0525904d  OR RSI,R14
05259050  MOV qword ptr [RSP + 0x20],RSI
05259055  MOV dword ptr [RSP + 0x28],EDX
05259059  MOV qword ptr [RSP + 0x50],R11
0525905e  JMP 0x05258ea8
05259070  MOV ESI,dword ptr [RSP + 0x10]
05259074  MOV dword ptr [RSP + 0x28],ESI
05259078  MOV RSI,qword ptr [RSP + 0x8]
0525907d  MOV qword ptr [RSP + 0x20],RSI
05259082  SHL R14,0x20
05259086  MOV ESI,EDI
05259088  OR RSI,R14
0525908b  MOV qword ptr [RSP + 0x8],RSI
05259090  MOV dword ptr [RSP + 0x10],EDX
05259094  MOV qword ptr [RSP + 0x50],R12
05259099  MOV R12,R11
0525909c  JMP 0x05258ea8
052590a1  MOV R14,R8
052590a4  LEA RCX,[R14 + RBP*0x1]
052590a8  ROL RCX,0x11
052590ac  ADD ECX,R14D
052590af  XOR RBP,R14
052590b2  ROL R14,0x31
052590b6  MOV R9,RBP
052590b9  SHL R9,0x15
052590bd  XOR R9,R14
052590c0  XOR R9,RBP
052590c3  ROL RBP,0x1c
052590c7  LEA R14,[RCX + RCX*0x8]
052590cb  TEST R14D,0xfffffffc
052590d2  JZ 0x052590e0
052590d4  MOV R8,R9
052590d7  JMP 0x05259113
052590e0  LEA RCX,[R9 + RBP*0x1]
052590e4  ROL RCX,0x11
052590e8  ADD ECX,R9D
052590eb  XOR RBP,R9
052590ee  ROL R9,0x31
052590f2  MOV R8,RBP
052590f5  SHL R8,0x15
052590f9  XOR R8,R9
052590fc  XOR R8,RBP
052590ff  ROL RBP,0x1c
05259103  LEA R14,[RCX + RCX*0x8]
05259107  MOV R9,R8
0525910a  TEST R14D,0xfffffffc
05259111  JZ 0x052590e0
05259113  LEA RCX,[R8 + RBP*0x1]
05259117  ROL RCX,0x11
0525911b  ADD ECX,R8D
0525911e  ADD RCX,RCX
05259121  LEA RSI,[RCX + RCX*0x4]
05259125  CMP ESI,0x5
05259128  JA 0x05259181
0525912a  XOR RBP,R8
0525912d  MOV R9,RBP
05259130  ROL R9,0x1c
05259134  ROL R8,0x31
05259138  MOV RCX,RBP
0525913b  SHL RCX,0x15
0525913f  XOR RCX,R8
05259142  XOR RCX,RBP
05259145  NOP dword ptr CS:[RAX + RAX*0x1]
05259150  LEA RSI,[R9 + RCX*0x1]
05259154  ROL RSI,0x11
05259158  ADD ESI,ECX
0525915a  XOR R9,RCX
0525915d  ROL RCX,0x31
05259161  MOV R8,R9
05259164  SHL R8,0x15
05259168  XOR R8,RCX
0525916b  XOR R8,R9
0525916e  ROL R9,0x1c
05259172  ADD RSI,RSI
05259175  LEA RSI,[RSI + RSI*0x4]
05259179  MOV RCX,R8
0525917c  CMP ESI,0x6
0525917f  JC 0x05259150
05259181  SHR RDI,0x20
05259185  SHR R14,0x20
05259189  SHR RSI,0x20
0525918d  ADD EDI,dword ptr [RSP + 0x88]
05259194  ADD R14D,dword ptr [RSP + 0x4]
05259199  SHL EDX,0x4
0525919c  OR EDX,ESI
0525919e  MOV RCX,R14
052591a1  SHL RCX,0x20
052591a5  ADD RCX,RDI
052591a8  MOV qword ptr [R11],RCX
052591ab  MOV dword ptr [R11 + 0x8],EDX
052591af  MOV RSI,qword ptr [RSP + 0xa0]
052591b7  MOV ECX,dword ptr [RSI]
052591b9  MOV R9D,dword ptr [RSI + 0x4]
052591bd  MOV R8D,dword ptr [RSI + 0x8]
052591c1  JMP 0x05258ffe
052591c6  MOV EDX,dword ptr [RSP + 0x30]
052591ca  MOV EAX,EDX
052591cc  SAR EAX,0x1f
052591cf  MOV ECX,EAX
052591d1  SUB ECX,EDX
052591d3  LEA EDX,[RCX + 0xf]
052591d6  TEST ECX,ECX
052591d8  CMOVNS EDX,ECX
052591db  SAR EDX,0x4
052591de  SUB EAX,EDX
052591e0  MOV ESI,dword ptr [RSP]
052591e3  MOV EDX,ESI
052591e5  SAR EDX,0x1f
052591e8  MOV ECX,EDX
052591ea  SUB ECX,ESI
052591ec  MOVSXD RCX,ECX
052591ef  IMUL RCX,RCX,-0x2aaaaaab
052591f6  MOV RSI,RCX
052591f9  SHR RSI,0x3f
052591fd  SAR RCX,0x21
05259201  ADD ECX,ESI
05259203  ADD ECX,EDX
05259205  MOV RDI,qword ptr [RSP + 0x70]
0525920a  MOV EDX,EDI
0525920c  SAR EDX,0x1f
0525920f  MOV ESI,EDX
05259211  SUB ESI,EDI
05259213  LEA EDI,[RSI + 0xf]
05259216  TEST ESI,ESI
05259218  CMOVNS EDI,ESI
0525921b  SAR EDI,0x4
0525921e  SUB EDX,EDI
05259220  SUB EAX,dword ptr [RBX + 0x28]
05259223  SUB ECX,dword ptr [RBX + 0x2c]
05259226  SUB EDX,dword ptr [RBX + 0x30]
05259229  IMUL EAX,dword ptr [RBX + 0x38]
0525922d  ADD EAX,ECX
0525922f  IMUL EAX,dword ptr [RBX + 0x3c]
05259233  ADD EAX,EDX
05259235  CDQE
05259237  MOV RCX,qword ptr [RBX + 0x40]
0525923b  LEA RAX,[RAX + RAX*0x4]
0525923f  LEA R14,[RCX + RAX*0x4]
05259243  MOV EDX,dword ptr [RCX + RAX*0x4 + 0xc]
05259247  CMP EDX,0x7fffffff
0525924d  JNZ 0x05259282
0525924f  LEA RDI,[RSP + 0x8c]
05259257  LEA RDX,[RSP + 0x78]
0525925c  MOV RSI,RBX
0525925f  CALL 0x05259950
05259264  MOVUPS XMM0,xmmword ptr [RSP + 0x8c]
0525926c  MOVUPS xmmword ptr [R14],XMM0
05259270  MOVZX ESI,byte ptr [RSP + 0x9c]
05259278  MOV byte ptr [R14 + 0x10],SIL
0525927c  MOV EDX,dword ptr [R14 + 0xc]
05259280  JMP 0x05259287
05259282  MOVZX ESI,byte ptr [R14 + 0x10]
05259287  MOV RAX,R12
0525928a  SUB RAX,RBP
0525928d  MOV RCX,RBP
05259290  SUB RCX,R12
05259293  CMOVL RCX,RAX
05259297  CVTSI2SS XMM1,RCX
0525929c  MULSS XMM1,dword ptr [0x011988f4]
052592a4  ADDSS XMM1,dword ptr [0x011983f0]
052592ac  UCOMISS XMM1,dword ptr [0x01198450]
052592b3  SETA byte ptr [RBX + 0x25]
052592b7  MOV dword ptr [RBX + 0x1c],EDX
052592ba  MOV byte ptr [RBX + 0x24],SIL
052592be  XORPS XMM0,XMM0
052592c1  UCOMISS XMM1,dword ptr [0x011985d4]
052592c8  JBE 0x05259937
052592ce  MOV byte ptr [RSP + 0x18],SIL
052592d3  MOV qword ptr [RSP + 0x60],RDX
052592d8  MOV RCX,qword ptr [RSP + 0x50]
052592dd  MOV RAX,RCX
052592e0  SUB RAX,RBP
052592e3  SUB RBP,RCX
052592e6  CMOVL RBP,RAX
052592ea  MOV RAX,RCX
052592ed  SUB RAX,R12
052592f0  SUB R12,RCX
052592f3  CMOVL R12,RAX
052592f7  MOV EAX,dword ptr [RSP + 0x8]
052592fb  MOV ECX,dword ptr [RSP + 0xc]
052592ff  MOV ESI,EAX
05259301  SAR ESI,0x1f
05259304  MOV EDX,ESI
05259306  SUB EDX,EAX
05259308  LEA EAX,[RDX + 0xf]
0525930b  TEST EDX,EDX
0525930d  CMOVNS EAX,EDX
05259310  SAR EAX,0x4
05259313  SUB ESI,EAX
05259315  MOV EAX,ECX
05259317  SAR EAX,0x1f
0525931a  MOV EDX,EAX
0525931c  SUB EDX,ECX
0525931e  MOVSXD RCX,EDX
05259321  IMUL RDI,RCX,-0x2aaaaaab
05259328  MOV RCX,RDI
0525932b  SHR RCX,0x3f
0525932f  SAR RDI,0x21
05259333  ADD EDI,ECX
05259335  ADD EDI,EAX
05259337  MOV EAX,dword ptr [RSP + 0x10]
0525933b  MOV R9D,EAX
0525933e  SAR R9D,0x1f
05259342  MOV ECX,R9D
05259345  SUB ECX,EAX
05259347  LEA EAX,[RCX + 0xf]
0525934a  TEST ECX,ECX
0525934c  CMOVNS EAX,ECX
0525934f  SAR EAX,0x4
05259352  SUB R9D,EAX
05259355  MOV EDX,dword ptr [RBX + 0x28]
05259358  MOV ECX,dword ptr [RBX + 0x2c]
0525935b  SUB ESI,EDX
0525935d  SUB EDI,ECX
0525935f  MOV R15D,dword ptr [RBX + 0x30]
05259363  SUB R9D,R15D
05259366  MOV R8D,dword ptr [RBX + 0x38]
0525936a  IMUL ESI,R8D
0525936e  ADD ESI,EDI
05259370  MOV EDI,dword ptr [RBX + 0x3c]
05259373  IMUL ESI,EDI
05259376  ADD ESI,R9D
05259379  MOVSXD R9,ESI
0525937c  MOV RSI,qword ptr [RBX + 0x40]
05259380  LEA R9,[R9 + R9*0x4]
05259384  LEA R14,[RSI + R9*0x4]
05259388  MOV EAX,dword ptr [RSI + R9*0x4 + 0xc]
0525938d  CMP EAX,0x7fffffff
05259392  MOVSS dword ptr [RSP + 0x70],XMM1
05259398  MOV qword ptr [RSP + 0x30],RBP
0525939d  JNZ 0x052593ef
0525939f  LEA RDI,[RSP + 0x8c]
052593a7  LEA RDX,[RSP + 0x8]
052593ac  MOV RSI,RBX
052593af  CALL 0x05259950
052593b4  MOVUPS XMM0,xmmword ptr [RSP + 0x8c]
052593bc  MOVUPS xmmword ptr [R14],XMM0
052593c0  MOVZX EAX,byte ptr [RSP + 0x9c]
052593c8  MOV byte ptr [RSP],AL
052593cb  MOV byte ptr [R14 + 0x10],AL
052593cf  MOV EAX,dword ptr [R14 + 0xc]
052593d3  MOV qword ptr [RSP + 0x50],RAX
052593d8  MOV EDX,dword ptr [RBX + 0x28]
052593db  MOV ECX,dword ptr [RBX + 0x2c]
052593de  MOV R15D,dword ptr [RBX + 0x30]
052593e2  MOV R8D,dword ptr [RBX + 0x38]
052593e6  MOV EDI,dword ptr [RBX + 0x3c]
052593e9  MOV RSI,qword ptr [RBX + 0x40]
052593ed  JMP 0x052593fc
052593ef  MOV qword ptr [RSP + 0x50],RAX
052593f4  MOVZX EAX,byte ptr [R14 + 0x10]
052593f9  MOV byte ptr [RSP],AL
052593fc  MOV R10D,dword ptr [RSP + 0x20]
05259401  MOV R14D,dword ptr [RSP + 0x24]
05259406  MOV R9D,R10D
05259409  SAR R9D,0x1f
0525940d  MOV R13D,R9D
05259410  SUB R13D,R10D
05259413  LEA R11D,[R13 + 0xf]
05259417  TEST R13D,R13D
0525941a  CMOVNS R11D,R13D
0525941e  SAR R11D,0x4
05259422  MOV R10D,R14D
05259425  SAR R10D,0x1f
05259429  MOV R13D,R10D
0525942c  SUB R13D,R14D
0525942f  MOVSXD R14,R13D
05259432  IMUL R14,R14,-0x2aaaaaab
05259439  MOV R13,R14
0525943c  SHR R13,0x3f
05259440  SAR R14,0x21
05259444  ADD R14D,R13D
05259447  MOV EBP,dword ptr [RSP + 0x28]
0525944b  MOV R13D,EBP
0525944e  SAR R13D,0x1f
05259452  MOV EAX,R13D
05259455  SUB EAX,EBP
05259457  LEA EBP,[RAX + 0xf]
0525945a  TEST EAX,EAX
0525945c  CMOVNS EBP,EAX
0525945f  SAR EBP,0x4
05259462  SUB R9D,EDX
05259465  SUB R9D,R11D
05259468  IMUL R9D,R8D
0525946c  SUB R10D,ECX
0525946f  ADD R10D,R14D
05259472  ADD R10D,R9D
05259475  IMUL R10D,EDI
05259479  SUB R13D,R15D
0525947c  SUB R13D,EBP
0525947f  ADD R13D,R10D
05259482  MOVSXD RAX,R13D
05259485  LEA RAX,[RAX + RAX*0x4]
05259489  LEA R14,[RSI + RAX*0x4]
0525948d  MOV R13D,dword ptr [RSI + RAX*0x4 + 0xc]
05259492  CMP R13D,0x7fffffff
05259499  JNZ 0x052594cf
0525949b  LEA RDI,[RSP + 0x8c]
052594a3  LEA RDX,[RSP + 0x20]
052594a8  MOV RSI,RBX
052594ab  CALL 0x05259950
052594b0  MOVUPS XMM0,xmmword ptr [RSP + 0x8c]
052594b8  MOVUPS xmmword ptr [R14],XMM0
052594bc  MOVZX R10D,byte ptr [RSP + 0x9c]
052594c5  MOV byte ptr [R14 + 0x10],R10B
052594c9  MOV R13D,dword ptr [R14 + 0xc]
052594cd  JMP 0x052594d4
052594cf  MOVZX R10D,byte ptr [R14 + 0x10]
052594d4  MOV R15,qword ptr [RSP + 0x30]
052594d9  MOV R8,qword ptr [RSP + 0x60]
052594de  MOVZX R9D,byte ptr [RSP + 0x18]
052594e4  CVTSI2SS XMM8,R15
052594e9  CVTSI2SS XMM9,R12
052594ee  MOVSS XMM10,dword ptr [0x01198cf4]
052594f7  MOVSS XMM6,dword ptr [0x011983f0]
052594ff  MOV R14,qword ptr [RSP + 0xa0]
05259507  MOV RCX,qword ptr [R14]
0525950a  MOV EAX,dword ptr [R14 + 0x8]
0525950e  MOV RDX,RCX
05259511  SHR RDX,0x20
05259515  MOVSS XMM0,dword ptr [0x01198c14]
0525951d  CMP R8D,EDX
05259520  MOV R15,qword ptr [RSP + 0x50]
05259525  MOVZX EBP,byte ptr [RSP]
05259529  JLE 0x0525953d
0525952b  CMP R15D,EDX
0525952e  JLE 0x0525953d
05259530  CMP R9B,BPL
05259533  JZ 0x0525953d
05259535  MOVAPS XMM7,XMM6
05259538  JMP 0x0525965f
0525953d  XORPS XMM7,XMM7
05259540  MOV ESI,R8D
05259543  SUB ESI,R15D
05259546  JZ 0x0525965f
0525954c  LEA EDI,[R15 + R8*0x1]
05259550  CVTSI2SS XMM3,EDI
05259554  MOV EDI,R15D
05259557  SUB EDI,R8D
0525955a  CMOVL EDI,ESI
0525955d  MOVSS XMM4,dword ptr [0x011986e0]
05259565  MULSS XMM3,XMM4
05259569  CVTSI2SS XMM1,EDX
0525956d  MOVAPS XMM5,XMM1
05259570  ADDSS XMM5,XMM4
05259574  CVTSI2SS XMM2,EDI
05259578  SUBSS XMM5,XMM3
0525957c  MULSS XMM2,XMM4
05259580  MOVAPS XMM3,xmmword ptr [0x014e7ba0]
05259587  ANDPS XMM3,XMM5
0525958a  SUBSS XMM2,XMM3
0525958e  XORPS XMM3,XMM3
05259591  UCOMISS XMM5,XMM3
05259594  JBE 0x052595b4
05259596  MOVAPS XMM7,XMM2
05259599  XOR ESI,ESI
0525959b  UCOMISS XMM2,XMM3
0525959e  SETA SIL
052595a2  ADDSS XMM7,XMM3
052595a6  LEA RDI,[0x14f0310]
052595ad  DIVSS XMM7,dword ptr [RDI + RSI*0x4]
052595b2  JMP 0x052595d4
052595b4  ADDSS XMM2,dword ptr [0x01198af0]
052595bc  XOR ESI,ESI
052595be  UCOMISS XMM2,XMM3
052595c1  SETA SIL
052595c5  LEA RDI,[0x14f03a8]
052595cc  DIVSS XMM2,dword ptr [RDI + RSI*0x4]
052595d1  MOVAPS XMM7,XMM2
052595d4  MOVAPS XMM2,xmmword ptr [0x014e7ba0]
052595db  ANDPS XMM2,XMM7
052595de  UCOMISS XMM2,dword ptr [0x01198724]
052595e5  JA 0x0525965f
052595e7  XORPS XMM0,XMM0
052595ea  CVTSI2SS XMM0,ECX
052595ee  MULSS XMM1,dword ptr [0x011986e0]
052595f6  MOV RDI,qword ptr [RBX]
052595f9  XORPS XMM2,XMM2
052595fc  CVTSI2SS XMM2,EAX
05259600  MOVAPS xmmword ptr [RSP + 0x30],XMM7
05259605  MOV R12D,R10D
05259608  MOVSS dword ptr [RSP + 0x48],XMM8
0525960f  MOVSS dword ptr [RSP + 0x4],XMM9
05259616  CALL 0x0d3414e0
0525961b  MOVSS XMM10,dword ptr [0x01198cf4]
05259624  MOVSS XMM9,dword ptr [RSP + 0x4]
0525962b  MOVSS XMM8,dword ptr [RSP + 0x48]
05259632  MOV R10D,R12D
05259635  MOVAPS XMM7,xmmword ptr [RSP + 0x30]
0525963a  MOVSS XMM6,dword ptr [0x011983f0]
05259642  MOVZX R9D,byte ptr [RSP + 0x18]
05259648  MOV R8,qword ptr [RSP + 0x60]
0525964d  ADDSS XMM7,XMM0
05259651  MOV RCX,qword ptr [R14]
05259654  MOV EAX,dword ptr [R14 + 0x8]
05259658  MOV RDX,RCX
0525965b  SHR RDX,0x20
0525965f  MULSS XMM8,XMM10
05259664  MULSS XMM9,XMM10
05259669  CMP R8D,EDX
0525966c  JLE 0x05259681
0525966e  CMP R13D,EDX
05259671  JLE 0x05259681
05259673  CMP R9B,R10B
05259676  JZ 0x05259681
05259678  MOVAPS XMM10,XMM6
0525967c  JMP 0x052597c1
05259681  XORPS XMM10,XMM10
05259685  MOV ESI,R8D
05259688  SUB ESI,R13D
0525968b  JZ 0x052597c1
05259691  MOV EDI,R13D
05259694  SUB EDI,R8D
05259697  CMOVL EDI,ESI
0525969a  ADD R8D,R13D
0525969d  XORPS XMM3,XMM3
052596a0  CVTSI2SS XMM3,R8D
052596a5  MOVSS XMM4,dword ptr [0x011986e0]
052596ad  MULSS XMM3,XMM4
052596b1  XORPS XMM1,XMM1
052596b4  CVTSI2SS XMM1,EDX
052596b8  MOVAPS XMM5,XMM1
052596bb  ADDSS XMM5,XMM4
052596bf  XORPS XMM2,XMM2
052596c2  CVTSI2SS XMM2,EDI
052596c6  SUBSS XMM5,XMM3
052596ca  MULSS XMM2,XMM4
052596ce  MOVAPS XMM3,xmmword ptr [0x014e7ba0]
052596d5  ANDPS XMM3,XMM5
052596d8  SUBSS XMM2,XMM3
052596dc  XORPS XMM3,XMM3
052596df  UCOMISS XMM5,XMM3
052596e2  JBE 0x05259705
052596e4  MOVAPS XMM10,XMM2
052596e8  XOR ESI,ESI
052596ea  UCOMISS XMM2,XMM3
052596ed  SETA SIL
052596f1  ADDSS XMM10,XMM3
052596f6  LEA RDI,[0x14f0310]
052596fd  DIVSS XMM10,dword ptr [RDI + RSI*0x4]
05259703  JMP 0x05259726
05259705  ADDSS XMM2,dword ptr [0x01198af0]
0525970d  XOR ESI,ESI
0525970f  UCOMISS XMM2,XMM3
05259712  SETA SIL
05259716  LEA RDI,[0x14f03a8]
0525971d  DIVSS XMM2,dword ptr [RDI + RSI*0x4]
05259722  MOVAPS XMM10,XMM2
05259726  MOVAPS XMM2,xmmword ptr [0x014e7ba0]
0525972d  ANDPS XMM2,XMM10
05259731  UCOMISS XMM2,dword ptr [0x01198724]
05259738  JA 0x052597c1
0525973e  UCOMISS XMM0,dword ptr [0x01198c14]
05259745  JNZ 0x052597bc
05259747  JP 0x052597bc
05259749  XORPS XMM0,XMM0
0525974c  CVTSI2SS XMM0,ECX
05259750  MULSS XMM1,dword ptr [0x011986e0]
05259758  MOV RDI,qword ptr [RBX]
0525975b  XORPS XMM2,XMM2
0525975e  CVTSI2SS XMM2,EAX
05259762  MOVAPS xmmword ptr [RSP + 0x30],XMM7
05259767  MOV R12D,R10D
0525976a  MOVSS dword ptr [RSP + 0x48],XMM8
05259771  MOVSS dword ptr [RSP + 0x4],XMM9
05259778  MOVAPS xmmword ptr [RSP + 0x60],XMM10
0525977e  CALL 0x0d3414e0
05259783  MOVAPS XMM10,xmmword ptr [RSP + 0x60]
05259789  MOVSS XMM9,dword ptr [RSP + 0x4]
05259790  MOVSS XMM8,dword ptr [RSP + 0x48]
05259797  MOV R10D,R12D
0525979a  MOVAPS XMM7,xmmword ptr [RSP + 0x30]
0525979f  MOVSS XMM6,dword ptr [0x011983f0]
052597a7  ADDSS XMM10,XMM0
052597ac  MOV RCX,qword ptr [R14]
052597af  MOV EAX,dword ptr [R14 + 0x8]
052597b3  MOV RDX,RCX
052597b6  SHR RDX,0x20
052597ba  JMP 0x052597c1
052597bc  ADDSS XMM10,XMM0
052597c1  MOVAPS XMM11,XMM6
052597c5  SUBSS XMM11,XMM8
052597ca  MOVAPS XMM8,XMM6
052597ce  SUBSS XMM8,XMM9
052597d3  CMP R15D,EDX
052597d6  JLE 0x052597e6
052597d8  CMP R13D,EDX
052597db  JLE 0x052597e6
052597dd  CMP BPL,R10B
052597e0  JNZ 0x052598fe
052597e6  XORPS XMM6,XMM6
052597e9  MOV ESI,R15D
052597ec  SUB ESI,R13D
052597ef  JZ 0x052598fe
052597f5  MOV EDI,R13D
052597f8  SUB EDI,R15D
052597fb  CMOVL EDI,ESI
052597fe  ADD R13D,R15D
05259801  XORPS XMM3,XMM3
05259804  CVTSI2SS XMM3,R13D
05259809  MOVSS XMM4,dword ptr [0x011986e0]
05259811  MULSS XMM3,XMM4
05259815  XORPS XMM1,XMM1
05259818  CVTSI2SS XMM1,EDX
0525981c  MOVAPS XMM5,XMM1
0525981f  ADDSS XMM5,XMM4
05259823  XORPS XMM2,XMM2
05259826  CVTSI2SS XMM2,EDI
0525982a  SUBSS XMM5,XMM3
0525982e  MULSS XMM2,XMM4
05259832  MOVAPS XMM3,xmmword ptr [0x014e7ba0]
05259839  ANDPS XMM3,XMM5
0525983c  SUBSS XMM2,XMM3
05259840  XORPS XMM3,XMM3
05259843  UCOMISS XMM5,XMM3
05259846  JBE 0x05259865
05259848  MOVAPS XMM6,XMM2
0525984b  XOR EDX,EDX
0525984d  UCOMISS XMM2,XMM3
05259850  SETA DL
05259853  ADDSS XMM6,XMM3
05259857  LEA RSI,[0x14f0310]
0525985e  DIVSS XMM6,dword ptr [RSI + RDX*0x4]
05259863  JMP 0x05259884
05259865  ADDSS XMM2,dword ptr [0x01198af0]
0525986d  XOR EDX,EDX
0525986f  UCOMISS XMM2,XMM3
05259872  SETA DL
05259875  LEA RSI,[0x14f03a8]
0525987c  DIVSS XMM2,dword ptr [RSI + RDX*0x4]
05259881  MOVAPS XMM6,XMM2
05259884  MOVAPS XMM2,xmmword ptr [0x014e7ba0]
0525988b  ANDPS XMM2,XMM6
0525988e  UCOMISS XMM2,dword ptr [0x01198724]
05259895  JA 0x052598fe
05259897  UCOMISS XMM0,dword ptr [0x01198c14]
0525989e  JNZ 0x052598fa
052598a0  JP 0x052598fa
052598a2  XORPS XMM0,XMM0
052598a5  CVTSI2SS XMM0,ECX
052598a9  MULSS XMM1,dword ptr [0x011986e0]
052598b1  MOV RDI,qword ptr [RBX]
052598b4  XORPS XMM2,XMM2
052598b7  CVTSI2SS XMM2,EAX
052598bb  MOVAPS xmmword ptr [RSP + 0x50],XMM6
052598c0  MOVAPS xmmword ptr [RSP + 0x30],XMM7
052598c5  MOVAPS xmmword ptr [RSP + 0x60],XMM10
052598cb  MOVSS dword ptr [RSP + 0x18],XMM8
052598d2  MOVSS dword ptr [RSP],XMM11
052598d8  CALL 0x0d3414e0
052598dd  MOVSS XMM11,dword ptr [RSP]
052598e3  MOVSS XMM8,dword ptr [RSP + 0x18]
052598ea  MOVAPS XMM10,xmmword ptr [RSP + 0x60]
052598f0  MOVAPS XMM7,xmmword ptr [RSP + 0x30]
052598f5  MOVAPS XMM6,xmmword ptr [RSP + 0x50]
052598fa  ADDSS XMM6,XMM0
052598fe  XORPS XMM0,XMM0
05259901  XORPS XMM1,XMM1
05259904  MAXSS XMM1,dword ptr [RSP + 0x70]
0525990a  XORPS XMM2,XMM2
0525990d  MAXSS XMM2,XMM11
05259912  MULSS XMM2,XMM10
05259917  XORPS XMM3,XMM3
0525991a  MAXSS XMM3,XMM8
0525991f  MULSS XMM3,XMM6
05259923  MAXSS XMM2,XMM3
05259927  MAXSS XMM7,XMM2
0525992b  ADDSS XMM1,XMM1
0525992f  MULSS XMM1,XMM7
05259933  MAXSS XMM0,XMM1
05259937  MOVSS dword ptr [RBX + 0x20],XMM0
0525993c  ADD RSP,0xc8
05259943  POP RBX
05259944  POP R12
05259946  POP R13
05259948  POP R14
0525994a  POP R15
0525994c  POP RBP
0525994d  RET
```

## `052586c0` — depth 1 from OverworldGeneratorMultinoise__getPreliminarySurfaceLevel (root OverworldGeneratorMultinoise__getPreliminarySurfaceLevel)

- Ghidra name: `FUN_052586c0`
- Body: `[[052586c0, 052588c6]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_052586c0(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  uint uStack_54;
  undefined4 **ppuStack_50;
  float fStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 *puStack_30;
  undefined8 uVar8;
  
  fVar2 = (float)(int)*param_2;
  fVar3 = (float)func_0x0d3414e0(fVar2,0,(float)(int)((ulong)*param_2 >> 0x20),param_1 + 0x118);
  fVar2 = fVar3 * _DAT_011987f8 + fVar2;
  fStack_48 = (float)(int)((ulong)*param_2 >> 0x20);
  fVar3 = (float)func_0x0d3414e0(fStack_48,(float)(int)*param_2,0,param_1 + 0x118);
  fStack_48 = _DAT_011987f8 * fVar3 + fStack_48;
  uVar4 = func_0x0d3414e0(fVar2,0,fStack_48,param_1 + 0x70);
  uVar5 = func_0x0d3414e0(fVar2,0,fStack_48,param_1 + 0xa8);
  uVar8 = func_0x0d3414e0(fVar2,0,fStack_48,param_1 + 0xe0);
  uVar6 = (uint)uVar8;
  uStack_44 = (uint)((ulong)uVar8 >> 0x20) & _UNK_014e7ba4 & _UNK_014e7ba4;
  uStack_40 = extraout_XMM0_Dc & _UNK_014e7ba8 & _UNK_014e7ba8;
  uStack_3c = extraout_XMM0_Dd & _UNK_014e7bac & _UNK_014e7bac;
  fStack_58 = ((float)((uint)((float)(uVar6 & _DAT_014e7ba0) + _DAT_0119852c) & _DAT_014e7ba0) +
              _DAT_011988a8) * _DAT_01198930;
  fStack_48 = fStack_58;
  if ((ulong)*(uint *)(param_1 + 0x200) != 0xffffffff) {
    uStack_60 = uVar4;
    uStack_5c = uVar5;
    uStack_54 = uVar6;
    ppuStack_50 = &puStack_30;
    puStack_30 = &uStack_60;
    fVar2 = (float)(**(code **)(&UNK_0ef53670 + (ulong)*(uint *)(param_1 + 0x200) * 8))
                             (&ppuStack_50,param_1 + 0x188);
    fVar3 = *(float *)(param_1 + 0x350);
    fStack_58 = fStack_48;
    if ((ulong)*(uint *)(param_1 + 0x298) != 0xffffffff) {
      uStack_60 = uVar4;
      uStack_5c = uVar5;
      uStack_54 = uVar6;
      ppuStack_50 = &puStack_30;
      puStack_30 = &uStack_60;
      fVar7 = (float)(**(code **)(&UNK_0ef53670 + (ulong)*(uint *)(param_1 + 0x298) * 8))
                               (&ppuStack_50,param_1 + 0x220);
      return CONCAT44(fVar7 * *(float *)(param_1 + 0x354),fVar2 + fVar3);
    }
  }
  uStack_60 = uVar4;
  uStack_5c = uVar5;
  fStack_58 = fStack_48;
  uStack_54 = uVar6;
  puStack_30 = &uStack_60;
  func_0x04931450();
  pcVar1 = (code *)swi(3);
  uVar8 = (*pcVar1)();
  return uVar8;
}


```

### Assembly

```asm
052586c0  PUSH R15
052586c2  PUSH R14
052586c4  PUSH R13
052586c6  PUSH R12
052586c8  PUSH RBX
052586c9  SUB RSP,0x60
052586cd  MOV R15,RSI
052586d0  MOV RAX,qword ptr [RSI]
052586d3  CVTSI2SS XMM0,EAX
052586d7  MOVSS dword ptr [RSP + 0x10],XMM0
052586dd  MOV RBX,RDI
052586e0  SHR RAX,0x20
052586e4  LEA R14,[RDI + 0x118]
052586eb  CVTSI2SS XMM2,EAX
052586ef  XORPS XMM1,XMM1
052586f2  MOV RDI,R14
052586f5  CALL 0x0d3414e0
052586fa  MULSS XMM0,dword ptr [0x011987f8]
05258702  ADDSS XMM0,dword ptr [RSP + 0x10]
05258708  MOVSS dword ptr [RSP + 0x10],XMM0
0525870e  MOV RAX,qword ptr [R15]
05258711  XORPS XMM1,XMM1
05258714  CVTSI2SS XMM1,EAX
05258718  SHR RAX,0x20
0525871c  XORPS XMM0,XMM0
0525871f  CVTSI2SS XMM0,EAX
05258723  MOVSS dword ptr [RSP + 0x40],XMM0
05258729  XORPS XMM2,XMM2
0525872c  MOV RDI,R14
0525872f  CALL 0x0d3414e0
05258734  MOVSS XMM1,dword ptr [0x011987f8]
0525873c  MULSS XMM1,XMM0
05258740  ADDSS XMM1,dword ptr [RSP + 0x40]
05258746  MOVAPS XMM2,XMM1
05258749  MOVSS dword ptr [RSP + 0x40],XMM1
0525874f  LEA RDI,[RBX + 0x70]
05258753  XORPS XMM1,XMM1
05258756  MOVSS XMM0,dword ptr [RSP + 0x10]
0525875c  CALL 0x0d3414e0
05258761  MOVSS dword ptr [RSP + 0xc],XMM0
05258767  LEA RDI,[RBX + 0xa8]
0525876e  XORPS XMM1,XMM1
05258771  MOVSS XMM0,dword ptr [RSP + 0x10]
05258777  MOVSS XMM2,dword ptr [RSP + 0x40]
0525877d  CALL 0x0d3414e0
05258782  MOVSS dword ptr [RSP + 0x8],XMM0
05258788  LEA RDI,[RBX + 0xe0]
0525878f  XORPS XMM1,XMM1
05258792  MOVSS XMM0,dword ptr [RSP + 0x10]
05258798  MOVSS XMM2,dword ptr [RSP + 0x40]
0525879e  CALL 0x0d3414e0
052587a3  MOVSS XMM1,dword ptr [RSP + 0xc]
052587a9  MOVSS dword ptr [RSP + 0x28],XMM1
052587af  MOVAPS XMM1,xmmword ptr [0x014e7ba0]
052587b6  MOVAPS XMM2,XMM0
052587b9  ANDPS XMM2,XMM1
052587bc  ADDSS XMM2,dword ptr [0x0119852c]
052587c4  ANDPS XMM2,XMM1
052587c7  ADDSS XMM2,dword ptr [0x011988a8]
052587cf  MULSS XMM2,dword ptr [0x01198930]
052587d7  MOVSS XMM1,dword ptr [RSP + 0x8]
052587dd  MOVSS dword ptr [RSP + 0x2c],XMM1
052587e3  MOVAPS xmmword ptr [RSP + 0x40],XMM2
052587e8  MOVSS dword ptr [RSP + 0x30],XMM2
052587ee  MOVAPS xmmword ptr [RSP + 0x10],XMM0
052587f3  MOVSS dword ptr [RSP + 0x34],XMM0
052587f9  LEA R14,[RSP + 0x28]
052587fe  MOV qword ptr [RSP + 0x58],R14
05258803  MOV EAX,dword ptr [RBX + 0x200]
05258809  MOV R12D,0xffffffff
0525880f  CMP RAX,R12
05258812  JZ 0x052588c1
05258818  LEA RSI,[RBX + 0x188]
0525881f  LEA R13,[RSP + 0x58]
05258824  MOV qword ptr [RSP + 0x38],R13
05258829  LEA R15,[0xef53670]
05258830  LEA RDI,[RSP + 0x38]
05258835  CALL qword ptr [R15 + RAX*0x8]
05258839  MOVSS XMM2,dword ptr [RBX + 0x350]
05258841  MOVSS XMM1,dword ptr [RSP + 0xc]
05258847  MOVSS dword ptr [RSP + 0x28],XMM1
0525884d  MOVSS XMM1,dword ptr [RSP + 0x8]
05258853  MOVSS dword ptr [RSP + 0x2c],XMM1
05258859  MOVAPS XMM1,xmmword ptr [RSP + 0x40]
0525885e  MOVSS dword ptr [RSP + 0x30],XMM1
05258864  MOVAPS XMM1,xmmword ptr [RSP + 0x10]
05258869  MOVSS dword ptr [RSP + 0x34],XMM1
0525886f  MOV qword ptr [RSP + 0x58],R14
05258874  MOV EAX,dword ptr [RBX + 0x298]
0525887a  CMP RAX,R12
0525887d  JZ 0x052588c1
0525887f  ADDSS XMM0,XMM2
05258883  MOVAPS xmmword ptr [RSP + 0x10],XMM0
05258888  LEA RSI,[RBX + 0x220]
0525888f  MOV qword ptr [RSP + 0x38],R13
05258894  LEA RDI,[RSP + 0x38]
05258899  CALL qword ptr [R15 + RAX*0x8]
0525889d  MULSS XMM0,dword ptr [RBX + 0x354]
052588a5  MOVAPS XMM2,xmmword ptr [RSP + 0x10]
052588aa  UNPCKLPS XMM2,XMM0
052588ad  XORPS XMM1,XMM1
052588b0  MOVAPS XMM0,XMM2
052588b3  ADD RSP,0x60
052588b7  POP RBX
052588b8  POP R12
052588ba  POP R13
052588bc  POP R14
052588be  POP R15
052588c0  RET
052588c1  CALL 0x04931450
052588c6  INT3
```

## `05286980` — depth 1 from OverworldGeneratorMultinoise__getPreliminarySurfaceLevel (root OverworldGeneratorMultinoise__getPreliminarySurfaceLevel)

- Ghidra name: `FUN_05286980`
- Body: `[[05286980, 05286a62]]`

### Pseudocode

```c

undefined8
FUN_05286980(undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4,
            undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  uint uStack_50;
  uint uStack_4c;
  long *plStack_48;
  int iStack_40;
  int iStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_10;
  
  uStack_28._4_4_ = (undefined4)((ulong)param_1 >> 0x20);
  uStack_28._0_4_ = (undefined4)param_1;
  uVar4 = (uint)((ulong)param_3 >> 0x20);
  uStack_38 = param_1;
  uStack_30 = param_2;
  uStack_10 = param_3;
  if (param_4 == 0) {
    iStack_40 = (int)((uint)param_3 * 4) >> 4;
    iStack_3c = (int)(uVar4 << 2) >> 4;
    FUN_0525af30(&uStack_50,param_5,&iStack_40);
    plVar3 = plStack_48;
    if (CONCAT44(uStack_4c,uStack_50) != 0) {
      uStack_28 = FUN_0525a640(CONCAT44(uStack_4c,uStack_50),&uStack_10,&uStack_38);
      plVar3 = plStack_48;
    }
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
        return uStack_28;
      }
    }
  }
  else {
    uStack_50 = (uint)param_3 & 3;
    uStack_4c = uVar4 & 3;
    uStack_28 = FUN_0525a640(param_4,&uStack_50,&uStack_38);
  }
  return uStack_28;
}


```

### Assembly

```asm
05286980  PUSH RBX
05286981  SUB RSP,0x50
05286985  MOV qword ptr [RSP + 0x48],RDI
0528698a  MOVLPS qword ptr [RSP + 0x20],XMM0
0528698f  MOVSS dword ptr [RSP + 0x28],XMM1
05286995  MOV RAX,RDI
05286998  SHR RAX,0x20
0528699c  TEST RSI,RSI
0528699f  JZ 0x052869ca
052869a1  AND EDI,0x3
052869a4  AND EAX,0x3
052869a7  MOV dword ptr [RSP + 0x8],EDI
052869ab  MOV dword ptr [RSP + 0xc],EAX
052869af  LEA RAX,[RSP + 0x8]
052869b4  LEA RDX,[RSP + 0x20]
052869b9  MOV RDI,RSI
052869bc  MOV RSI,RAX
052869bf  CALL 0x0525a640
052869c4  ADD RSP,0x50
052869c8  POP RBX
052869c9  RET
052869ca  MOVAPS xmmword ptr [RSP + 0x30],XMM0
052869cf  SHL EAX,0x2
052869d2  LEA ECX,[RDI*0x4]
052869d9  SAR ECX,0x4
052869dc  MOV dword ptr [RSP + 0x18],ECX
052869e0  SAR EAX,0x4
052869e3  MOV dword ptr [RSP + 0x1c],EAX
052869e7  LEA RDI,[RSP + 0x8]
052869ec  LEA RAX,[RSP + 0x18]
052869f1  MOV RSI,RDX
052869f4  MOV RDX,RAX
052869f7  CALL 0x0525af30
052869fc  MOV RDI,qword ptr [RSP + 0x8]
05286a01  TEST RDI,RDI
05286a04  JZ 0x05286a21
05286a06  LEA RSI,[RSP + 0x48]
05286a0b  LEA RDX,[RSP + 0x20]
05286a10  CALL 0x0525a640
05286a15  MOV RBX,qword ptr [RSP + 0x10]
05286a1a  TEST RBX,RBX
05286a1d  JNZ 0x05286a30
05286a1f  JMP 0x052869c4
05286a21  MOVAPS XMM0,xmmword ptr [RSP + 0x30]
05286a26  MOV RBX,qword ptr [RSP + 0x10]
05286a2b  TEST RBX,RBX
05286a2e  JZ 0x052869c4
05286a30  MOV RAX,-0x1
05286a37  XADD.LOCK qword ptr [RBX + 0x8],RAX
05286a3d  TEST RAX,RAX
05286a40  JNZ 0x052869c4
05286a42  MOV RAX,qword ptr [RBX]
05286a45  MOV RDI,RBX
05286a48  MOVAPS xmmword ptr [RSP + 0x30],XMM0
05286a4d  CALL qword ptr [RAX + 0x10]
05286a50  MOV RDI,RBX
05286a53  CALL 0x0412c2d0
05286a58  MOVAPS XMM0,xmmword ptr [RSP + 0x30]
05286a5d  ADD RSP,0x50
05286a61  POP RBX
05286a62  RET
```

## `052588d0` — depth 1 from OverworldGeneratorMultinoise__tryMakeAquifer (root OverworldGeneratorMultinoise__tryMakeAquifer)

- Ghidra name: `Aquifer__Aquifer`
- Body: `[[052588d0, 05258c51]]`

### Pseudocode

```c

/* WARNING: Possible PIC construction at 0x05258c44: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
Aquifer__Aquifer(undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,int param_6,int param_7,undefined4 param_8)

{
  code *pcVar1;
  ulong uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  int iVar23;
  undefined8 *puVar24;
  bool bVar25;
  undefined8 auStack_50 [2];
  long lStack_40;
  long lStack_38;
  
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  *(undefined4 *)(param_1 + 3) = param_8;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined2 *)((long)param_1 + 0x24) = 2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  auStack_50[0] = 0x5258933;
  uVar6 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f713f00,1);
  param_1[0xb] = uVar6;
  auStack_50[0] = 0x525894f;
  uVar6 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f713b90,1);
  param_1[0xc] = uVar6;
  iVar20 = *param_2;
  iVar11 = param_2[1];
  iVar10 = iVar20 >> 0x1b;
  iVar12 = iVar10 + iVar20 * -0x10;
  iVar15 = iVar12 + 0xf;
  if (-1 < iVar12) {
    iVar15 = iVar12;
  }
  iVar21 = (int)((ulong)((long)((param_6 >> 0x1f) - param_6) * -0x2aaaaaab) >> 0x20);
  iVar4 = iVar11 >> 0x1b;
  iVar18 = iVar4 + iVar11 * -0x10;
  iVar19 = iVar18 + 0xf;
  if (-1 < iVar18) {
    iVar19 = iVar18;
  }
  iVar15 = ~(iVar15 >> 4) + iVar10;
  iVar21 = (param_6 >> 0x1f) + ((iVar21 >> 1) - (iVar21 >> 0x1f)) + -1;
  iVar19 = ~(iVar19 >> 4) + iVar4;
  param_1[5] = CONCAT44(iVar21,iVar15);
  *(int *)(param_1 + 6) = iVar19;
  iVar20 = iVar20 * -0x10 + iVar10 + -0xf;
  if (-1 < iVar20) {
    iVar12 = iVar20;
  }
  iVar23 = (int)((ulong)((long)((param_7 >> 0x1f) - param_7) * -0x2aaaaaab) >> 0x20);
  iVar20 = iVar11 * -0x10 + iVar4 + -0xf;
  if (-1 < iVar20) {
    iVar18 = iVar20;
  }
  iVar11 = ((iVar10 - (iVar12 >> 4)) - iVar15) + 2;
  iVar15 = ((((param_7 >> 0x1f) - (iVar23 >> 0x1f)) + (iVar23 >> 1)) - iVar21) + 2;
  iVar20 = ((iVar4 - (iVar18 >> 4)) - iVar19) + 2;
  *(ulong *)((long)param_1 + 0x34) = CONCAT44(iVar15,iVar11);
  *(int *)((long)param_1 + 0x3c) = iVar20;
  uVar3 = _DAT_01de6238;
  uVar6 = _DAT_01de6230;
  uVar5 = iVar20 * iVar11 * iVar15;
  uVar22 = (ulong)(int)uVar5;
  lVar17 = param_1[8];
  puVar8 = (undefined8 *)param_1[9];
  lVar16 = (long)puVar8 - lVar17 >> 2;
  bVar25 = uVar22 < (ulong)(lVar16 * -0x3333333333333333);
  uVar14 = uVar22 + lVar16 * 0x3333333333333333;
  if (bVar25 || uVar14 == 0) {
    if (!bVar25) {
      return (undefined8 *)(ulong)uVar5;
    }
    puVar9 = (undefined8 *)(lVar17 + uVar22 * 0x14);
LAB_05258bfd:
    param_1[9] = puVar9;
    return puVar9;
  }
  lVar16 = param_1[10];
  if (uVar14 <= (ulong)((lVar16 - (long)puVar8 >> 2) * -0x3333333333333333)) {
    puVar9 = (undefined8 *)((long)puVar8 + uVar14 * 0x14);
    do {
      *(undefined4 *)(puVar8 + 1) = uVar3;
      *puVar8 = uVar6;
      *(undefined4 *)((long)puVar8 + 0xc) = 0x7fffffff;
      *(undefined1 *)(puVar8 + 2) = 0;
      puVar8 = (undefined8 *)((long)puVar8 + 0x14);
    } while (puVar8 != puVar9);
    goto LAB_05258bfd;
  }
  if ((int)uVar5 < 0) {
    auStack_50[0] = 0x5258c26;
    FUN_0525ec90();
  }
  else {
    lVar7 = lVar16 - lVar17 >> 2;
    uVar2 = lVar7 * -0x6666666666666666;
    if (uVar22 < uVar2) {
      uVar22 = uVar2;
    }
    if (0x666666666666665 < (ulong)(lVar7 * -0x3333333333333333)) {
      uVar22 = 0xccccccccccccccc;
    }
    lStack_38 = lVar16;
    if (uVar22 < 0xccccccccccccccd) {
      lStack_40 = uVar22 * 0x14;
      auStack_50[0] = 0x5258b12;
      lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (lVar16 == 0) {
        auStack_50[0] = 0x5258c1c;
        func_0x0eec74c0(lStack_40,0);
      }
      uVar3 = _DAT_01de6238;
      uVar6 = _DAT_01de6230;
      puVar24 = (undefined8 *)(((long)puVar8 - lVar17) + lVar16);
      puVar9 = (undefined8 *)((long)puVar24 + uVar14 * 0x14);
      puVar13 = puVar24;
      do {
        *(undefined4 *)(puVar13 + 1) = uVar3;
        *puVar13 = uVar6;
        *(undefined4 *)((long)puVar13 + 0xc) = 0x7fffffff;
        *(undefined1 *)(puVar13 + 2) = 0;
        puVar13 = (undefined8 *)((long)puVar13 + 0x14);
      } while (puVar13 != puVar9);
      lVar17 = param_1[8];
      lVar7 = (long)puVar24 - ((long)puVar8 - lVar17);
      auStack_50[0] = 0x5258b81;
      puVar8 = (undefined8 *)func_0x0eee2f00(lVar7,lVar17,(long)puVar8 - lVar17);
      param_1[8] = lVar7;
      param_1[9] = puVar9;
      param_1[10] = uVar22 * 0x14 + lVar16;
      if (lVar17 == 0) {
        return puVar8;
      }
      goto SUB_0412a280;
    }
  }
  auStack_50[0] = 0x5258c2b;
  puVar8 = (undefined8 *)func_0x04882eb0();
  lVar17 = param_1[8];
  if (lVar17 == 0) {
    auStack_50[0] = 0x5258c51;
    func_0x0eee2d70(puVar8);
    pcVar1 = (code *)swi(3);
    puVar8 = (undefined8 *)(*pcVar1)();
    return puVar8;
  }
  param_1[9] = lVar17;
  register0x00000020 = (BADSPACEBASE *)auStack_50;
  auStack_50[0] = 0x5258c49;
SUB_0412a280:
  *(undefined8 **)((long)register0x00000020 + -8) = puVar8;
  if (lVar17 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar17);
  }
  return *(undefined8 **)((long)register0x00000020 + -8);
}


```

### Assembly

```asm
052588d0  PUSH RBP
052588d1  PUSH R15
052588d3  PUSH R14
052588d5  PUSH R13
052588d7  PUSH R12
052588d9  PUSH RBX
052588da  SUB RSP,0x18
052588de  MOV EBP,R9D
052588e1  MOV R14,RSI
052588e4  MOV RBX,RDI
052588e7  MOV R15D,dword ptr [RSP + 0x50]
052588ec  MOV EAX,dword ptr [RSP + 0x58]
052588f0  MOV qword ptr [RDI],RDX
052588f3  MOV qword ptr [RDI + 0x8],RCX
052588f7  MOV qword ptr [RDI + 0x10],R8
052588fb  MOV dword ptr [RDI + 0x18],EAX
052588fe  MOV qword ptr [RDI + 0x1c],0x0
05258906  MOV word ptr [RDI + 0x24],0x2
0525890c  XORPS XMM0,XMM0
0525890f  MOVUPS xmmword ptr [RDI + 0x28],XMM0
05258913  MOVUPS xmmword ptr [RDI + 0x38],XMM0
05258917  MOVUPS xmmword ptr [RDI + 0x48],XMM0
0525891b  LEA RDI,[0xf6ff9e0]
05258922  LEA RSI,[0xf713f00]
05258929  MOV EDX,0x1
0525892e  CALL 0x0cc41df0
05258933  MOV qword ptr [RBX + 0x58],RAX
05258937  LEA RDI,[0xf6ff9e0]
0525893e  LEA RSI,[0xf713b90]
05258945  MOV EDX,0x1
0525894a  CALL 0x0cc41df0
0525894f  MOV qword ptr [RBX + 0x60],RAX
05258953  MOV ECX,dword ptr [R14]
05258956  MOV EAX,dword ptr [R14 + 0x4]
0525895a  MOV R10D,ECX
0525895d  SHL R10D,0x4
05258961  MOV EDI,EAX
05258963  SHL EDI,0x4
05258966  SAR ECX,0x1b
05258969  MOV EDX,ECX
0525896b  SUB EDX,R10D
0525896e  LEA ESI,[RDX + 0xf]
05258971  TEST EDX,EDX
05258973  CMOVNS ESI,EDX
05258976  SAR ESI,0x4
05258979  MOV R11D,EBP
0525897c  SAR R11D,0x1f
05258980  MOV R8D,R11D
05258983  SUB R8D,EBP
05258986  MOVSXD R8,R8D
05258989  IMUL R14,R8,-0x2aaaaaab
05258990  MOV R8,R14
05258993  SHR R8,0x3f
05258997  SHR R14,0x20
0525899b  SAR R14D,0x1
0525899e  ADD R14D,R8D
052589a1  SAR EAX,0x1b
052589a4  MOV R8D,EAX
052589a7  SUB R8D,EDI
052589aa  LEA R9D,[R8 + 0xf]
052589ae  TEST R8D,R8D
052589b1  CMOVNS R9D,R8D
052589b5  SAR R9D,0x4
052589b9  NOT ESI
052589bb  ADD ESI,ECX
052589bd  ADD R11D,R14D
052589c0  DEC R11D
052589c3  NOT R9D
052589c6  ADD R9D,EAX
052589c9  MOV R14,R11
052589cc  SHL R14,0x20
052589d0  ADD R14,RSI
052589d3  MOV qword ptr [RBX + 0x28],R14
052589d7  MOV dword ptr [RBX + 0x30],R9D
052589db  NEG R10D
052589de  ADD R10D,ECX
052589e1  ADD R10D,-0xf
052589e5  TEST R10D,R10D
052589e8  CMOVNS EDX,R10D
052589ec  SAR EDX,0x4
052589ef  MOV EBP,R15D
052589f2  SAR EBP,0x1f
052589f5  MOV R10D,EBP
052589f8  SUB R10D,R15D
052589fb  MOVSXD R10,R10D
052589fe  IMUL R14,R10,-0x2aaaaaab
05258a05  MOV R10,R14
05258a08  SHR R10,0x3f
05258a0c  SHR R14,0x20
05258a10  SAR R14D,0x1
05258a13  NEG EDI
05258a15  ADD EDI,EAX
05258a17  ADD EDI,-0xf
05258a1a  TEST EDI,EDI
05258a1c  CMOVNS R8D,EDI
05258a20  SAR R8D,0x4
05258a24  SUB ECX,EDX
05258a26  SUB ECX,ESI
05258a28  ADD ECX,0x2
05258a2b  ADD R10D,EBP
05258a2e  ADD R10D,R14D
05258a31  SUB R10D,R11D
05258a34  ADD R10D,0x2
05258a38  SUB EAX,R8D
05258a3b  SUB EAX,R9D
05258a3e  ADD EAX,0x2
05258a41  MOV RDX,R10
05258a44  SHL RDX,0x20
05258a48  ADD RDX,RCX
05258a4b  MOV qword ptr [RBX + 0x34],RDX
05258a4f  MOV dword ptr [RBX + 0x3c],EAX
05258a52  IMUL EAX,ECX
05258a55  IMUL EAX,R10D
05258a59  MOVSXD R12,EAX
05258a5c  MOV RCX,qword ptr [RBX + 0x40]
05258a60  MOV R14,qword ptr [RBX + 0x48]
05258a64  MOV R15,R14
05258a67  SUB R15,RCX
05258a6a  MOV RSI,R15
05258a6d  SAR RSI,0x2
05258a71  MOV RDX,-0x3333333333333333
05258a7b  IMUL RSI,RDX
05258a7f  MOV RBP,R12
05258a82  SUB RBP,RSI
05258a85  JBE 0x05258bb0
05258a8b  MOV RDI,qword ptr [RBX + 0x50]
05258a8f  MOV RSI,RDI
05258a92  SUB RSI,R14
05258a95  SAR RSI,0x2
05258a99  IMUL RSI,RDX
05258a9d  CMP RSI,RBP
05258aa0  JNC 0x05258bbc
05258aa6  TEST EAX,EAX
05258aa8  JS 0x05258c21
05258aae  MOV qword ptr [RSP + 0x10],RDI
05258ab3  MOV RAX,RDI
05258ab6  SUB RAX,RCX
05258ab9  SAR RAX,0x2
05258abd  IMUL RAX,RDX
05258ac1  LEA RCX,[RAX + RAX*0x1]
05258ac5  CMP RCX,R12
05258ac8  CMOVA R12,RCX
05258acc  MOV RCX,0x666666666666666
05258ad6  CMP RAX,RCX
05258ad9  MOV RAX,0xccccccccccccccc
05258ae3  CMOVNC R12,RAX
05258ae7  CMP R12,RAX
05258aea  JA 0x05258c26
05258af0  LEA RAX,[R12*0x4]
05258af8  LEA RSI,[RAX + RAX*0x4]
05258afc  LEA RDI,[0xf5463b0]
05258b03  MOV RAX,qword ptr [0x0f5463b0]
05258b0a  MOV qword ptr [RSP + 0x8],RSI
05258b0f  CALL qword ptr [RAX + 0x10]
05258b12  MOV R13,RAX
05258b15  TEST RAX,RAX
05258b18  JZ 0x05258c10
05258b1e  ADD R15,R13
05258b21  LEA RAX,[RBP*0x4]
05258b29  ADD RAX,RBP
05258b2c  LEA RBP,[R15 + RAX*0x4]
05258b30  MOV EAX,dword ptr [0x01de6238]
05258b36  MOV RCX,qword ptr [0x01de6230]
05258b3d  MOV RDX,R15
05258b40  MOV dword ptr [RDX + 0x8],EAX
05258b43  MOV qword ptr [RDX],RCX
05258b46  MOV dword ptr [RDX + 0xc],0x7fffffff
05258b4d  MOV byte ptr [RDX + 0x10],0x0
05258b51  ADD RDX,0x14
05258b55  CMP RDX,RBP
05258b58  JNZ 0x05258b40
05258b5a  LEA RAX,[R12 + R12*0x4]
05258b5e  LEA R12,[RAX*0x4]
05258b66  ADD R12,R13
05258b69  MOV R13,qword ptr [RBX + 0x40]
05258b6d  SUB R14,R13
05258b70  SUB R15,R14
05258b73  MOV RDI,R15
05258b76  MOV RSI,R13
05258b79  MOV RDX,R14
05258b7c  CALL 0x0eee2f00
05258b81  MOV qword ptr [RBX + 0x40],R15
05258b85  MOV qword ptr [RBX + 0x48],RBP
05258b89  MOV qword ptr [RBX + 0x50],R12
05258b8d  TEST R13,R13
05258b90  JZ 0x05258c01
05258b92  MOV RSI,qword ptr [RSP + 0x10]
05258b97  SUB RSI,R13
05258b9a  MOV RDI,R13
05258b9d  ADD RSP,0x18
05258ba1  POP RBX
05258ba2  POP R12
05258ba4  POP R13
05258ba6  POP R14
05258ba8  POP R15
05258baa  POP RBP
05258bab  JMP 0x0412a280
05258bb0  JNC 0x05258c01
05258bb2  LEA RAX,[R12 + R12*0x4]
05258bb6  LEA RAX,[RCX + RAX*0x4]
05258bba  JMP 0x05258bfd
05258bbc  LEA RAX,[RBP*0x4]
05258bc4  ADD RAX,RBP
05258bc7  LEA RAX,[R14 + RAX*0x4]
05258bcb  MOV ECX,dword ptr [0x01de6238]
05258bd1  MOV RDX,qword ptr [0x01de6230]
05258bd8  NOP dword ptr [RAX + RAX*0x1]
05258be0  MOV dword ptr [R14 + 0x8],ECX
05258be4  MOV qword ptr [R14],RDX
05258be7  MOV dword ptr [R14 + 0xc],0x7fffffff
05258bef  MOV byte ptr [R14 + 0x10],0x0
05258bf4  ADD R14,0x14
05258bf8  CMP R14,RAX
05258bfb  JNZ 0x05258be0
05258bfd  MOV qword ptr [RBX + 0x48],RAX
05258c01  ADD RSP,0x18
05258c05  POP RBX
05258c06  POP R12
05258c08  POP R13
05258c0a  POP R14
05258c0c  POP R15
05258c0e  POP RBP
05258c0f  RET
05258c10  MOV RDI,qword ptr [RSP + 0x8]
05258c15  XOR ESI,ESI
05258c17  CALL 0x0eec74c0
05258c1c  JMP 0x05258b1e
05258c21  CALL 0x0525ec90
05258c26  CALL 0x04882eb0
05258c2b  JMP 0x05258c2d
05258c2d  MOV R14,RAX
05258c30  MOV RDI,qword ptr [RBX + 0x40]
05258c34  TEST RDI,RDI
05258c37  JZ 0x05258c49
05258c39  MOV qword ptr [RBX + 0x48],RDI
05258c3d  MOV RSI,qword ptr [RBX + 0x50]
05258c41  SUB RSI,RDI
05258c44  CALL 0x0412a280
05258c49  MOV RDI,R14
05258c4c  CALL 0x0eee2d70
05258c51  INT3
```

## `052a3910` — depth 2 from FUN_052a3830 (root OverworldGenerator__loadChunk)

- Ghidra name: `FUN_052a3910`
- Body: `[[052a3910, 052a39c6]]`

### Pseudocode

```c

void FUN_052a3910(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  func_0x0412d450();
  plVar3 = *(long **)(*param_2 + 0x20);
  if (plVar3 != (long *)0x0) {
    uStack_38 = *(undefined4 *)(param_1 + 0xc0);
    uStack_34 = *(undefined4 *)(param_1 + 0xc4);
    uStack_30 = *(undefined4 *)(param_1 + 200);
    uStack_2c = *(undefined4 *)(param_1 + 0xcc);
    (**(code **)(*plVar3 + 0x30))(plVar3,&uStack_38);
  }
  lVar4 = *(long *)(param_1 + 0xc0);
  for (lVar5 = *(long *)(param_1 + 200); lVar4 != lVar5; lVar5 = lVar5 + -0x10) {
    plVar3 = *(long **)(lVar5 + -8);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        func_0x0412c2d0(plVar3);
      }
    }
  }
  *(long *)(param_1 + 200) = lVar4;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  func_0x0412d520(param_1);
  return;
}


```

### Assembly

```asm
052a3910  PUSH R15
052a3912  PUSH R14
052a3914  PUSH R13
052a3916  PUSH R12
052a3918  PUSH RBX
052a3919  SUB RSP,0x10
052a391d  MOV R14,RSI
052a3920  MOV RBX,RDI
052a3923  CALL 0x0412d450
052a3928  MOV RAX,qword ptr [R14]
052a392b  MOV RDI,qword ptr [RAX + 0x20]
052a392f  TEST RDI,RDI
052a3932  JZ 0x052a3948
052a3934  MOVUPS XMM0,xmmword ptr [RBX + 0xc0]
052a393b  MOVUPS xmmword ptr [RSP],XMM0
052a393f  MOV RAX,qword ptr [RDI]
052a3942  MOV RSI,RSP
052a3945  CALL qword ptr [RAX + 0x30]
052a3948  LEA R15,[RBX + 0x90]
052a394f  MOV R12,qword ptr [RBX + 0xc0]
052a3956  MOV R13,qword ptr [RBX + 0xc8]
052a395d  CMP R12,R13
052a3960  JNZ 0x052a3999
052a3962  MOV qword ptr [RBX + 0xc8],R12
052a3969  XORPS XMM0,XMM0
052a396c  MOVUPS xmmword ptr [R15 + 0x20],XMM0
052a3971  MOVUPS xmmword ptr [R15 + 0x10],XMM0
052a3976  MOVUPS xmmword ptr [R15],XMM0
052a397a  MOV RDI,RBX
052a397d  CALL 0x0412d520
052a3982  ADD RSP,0x10
052a3986  POP RBX
052a3987  POP R12
052a3989  POP R13
052a398b  POP R14
052a398d  POP R15
052a398f  RET
052a3990  ADD R13,-0x10
052a3994  CMP R13,R12
052a3997  JZ 0x052a3962
052a3999  MOV R14,qword ptr [R13 + -0x8]
052a399d  TEST R14,R14
052a39a0  JZ 0x052a3990
052a39a2  MOV RAX,-0x1
052a39a9  XADD.LOCK qword ptr [R14 + 0x8],RAX
052a39af  TEST RAX,RAX
052a39b2  JNZ 0x052a3990
052a39b4  MOV RAX,qword ptr [R14]
052a39b7  MOV RDI,R14
052a39ba  CALL qword ptr [RAX + 0x10]
052a39bd  MOV RDI,R14
052a39c0  CALL 0x0412c2d0
052a39c5  JMP 0x052a3990
```

## `052a39f0` — depth 2 from FUN_052a3830 (root OverworldGenerator__loadChunk)

- Ghidra name: `FUN_052a39f0`
- Body: `[[052a39f0, 052a3a11] [052a3a20, 052a3a82] [052a3a90, 052a3af2]]`

### Pseudocode

```c

/* WARNING: Possible PIC construction at 0x052a3a67: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_052a39f0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long in_RAX;
  long lVar5;
  long lVar6;
  undefined8 auStack_30 [2];
  
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 == 0) {
      return in_RAX;
    }
    lVar6 = *(long *)(param_1 + 0x38);
    lVar5 = lVar2;
    if (lVar2 != lVar6) {
      do {
        plVar3 = *(long **)(lVar6 + -8);
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          in_RAX = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (in_RAX == 0) {
            auStack_30[0] = 0x52a3abe;
            (**(code **)(*plVar3 + 0x10))(plVar3);
            auStack_30[0] = 0x52a3ac6;
            in_RAX = func_0x0412c2d0(plVar3);
          }
        }
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != lVar2);
      lVar5 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x38) = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x50);
    lVar5 = lVar2;
    if (lVar2 != lVar6) {
      do {
        plVar3 = *(long **)(lVar6 + -8);
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          in_RAX = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (in_RAX == 0) {
            auStack_30[0] = 0x52a3a4e;
            (**(code **)(*plVar3 + 0x10))(plVar3);
            auStack_30[0] = 0x52a3a56;
            in_RAX = func_0x0412c2d0(plVar3);
          }
        }
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != lVar2);
      lVar5 = *(long *)(param_1 + 0x48);
    }
    *(long *)(param_1 + 0x50) = lVar2;
    register0x00000020 = (BADSPACEBASE *)auStack_30;
    auStack_30[0] = 0x52a3a6c;
  }
  *(long *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar5 != 0) {
    pcVar4 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar4)(&DAT_0f5463b0,lVar5);
  }
  return *(long *)((long)register0x00000020 + -8);
}


```

### Assembly

```asm
052a39f0  PUSH R15
052a39f2  PUSH R14
052a39f4  PUSH R12
052a39f6  PUSH RBX
052a39f7  PUSH RAX
052a39f8  MOV RBX,RDI
052a39fb  MOV R15,qword ptr [RDI + 0x48]
052a39ff  TEST R15,R15
052a3a02  JZ 0x052a3a6c
052a3a04  MOV R12,qword ptr [RBX + 0x50]
052a3a08  MOV RDI,R15
052a3a0b  CMP R15,R12
052a3a0e  JNZ 0x052a3a29
052a3a10  JMP 0x052a3a5c
052a3a20  ADD R12,-0x10
052a3a24  CMP R12,R15
052a3a27  JZ 0x052a3a58
052a3a29  MOV R14,qword ptr [R12 + -0x8]
052a3a2e  TEST R14,R14
052a3a31  JZ 0x052a3a20
052a3a33  MOV RAX,-0x1
052a3a3a  XADD.LOCK qword ptr [R14 + 0x8],RAX
052a3a40  TEST RAX,RAX
052a3a43  JNZ 0x052a3a20
052a3a45  MOV RAX,qword ptr [R14]
052a3a48  MOV RDI,R14
052a3a4b  CALL qword ptr [RAX + 0x10]
052a3a4e  MOV RDI,R14
052a3a51  CALL 0x0412c2d0
052a3a56  JMP 0x052a3a20
052a3a58  MOV RDI,qword ptr [RBX + 0x48]
052a3a5c  MOV qword ptr [RBX + 0x50],R15
052a3a60  MOV RSI,qword ptr [RBX + 0x58]
052a3a64  SUB RSI,RDI
052a3a67  CALL 0x0412a280
052a3a6c  MOV R15,qword ptr [RBX + 0x30]
052a3a70  TEST R15,R15
052a3a73  JZ 0x052a3ae7
052a3a75  MOV R12,qword ptr [RBX + 0x38]
052a3a79  MOV RDI,R15
052a3a7c  CMP R15,R12
052a3a7f  JNZ 0x052a3a99
052a3a81  JMP 0x052a3acc
052a3a90  ADD R12,-0x10
052a3a94  CMP R12,R15
052a3a97  JZ 0x052a3ac8
052a3a99  MOV R14,qword ptr [R12 + -0x8]
052a3a9e  TEST R14,R14
052a3aa1  JZ 0x052a3a90
052a3aa3  MOV RAX,-0x1
052a3aaa  XADD.LOCK qword ptr [R14 + 0x8],RAX
052a3ab0  TEST RAX,RAX
052a3ab3  JNZ 0x052a3a90
052a3ab5  MOV RAX,qword ptr [R14]
052a3ab8  MOV RDI,R14
052a3abb  CALL qword ptr [RAX + 0x10]
052a3abe  MOV RDI,R14
052a3ac1  CALL 0x0412c2d0
052a3ac6  JMP 0x052a3a90
052a3ac8  MOV RDI,qword ptr [RBX + 0x30]
052a3acc  MOV qword ptr [RBX + 0x38],R15
052a3ad0  MOV RSI,qword ptr [RBX + 0x40]
052a3ad4  SUB RSI,RDI
052a3ad7  ADD RSP,0x8
052a3adb  POP RBX
052a3adc  POP R12
052a3ade  POP R14
052a3ae0  POP R15
052a3ae2  JMP 0x0412a280
052a3ae7  ADD RSP,0x8
052a3aeb  POP RBX
052a3aec  POP R12
052a3aee  POP R14
052a3af0  POP R15
052a3af2  RET
```

## `052580c0` — depth 2 from OverworldGeneratorMultinoise__createNoiseCache_static (root OverworldGeneratorMultinoise__generateDensityCellsForChunk)

- Ghidra name: `FUN_052580c0`
- Body: `[[052580c0, 052582e2]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_052580c0(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  uint uStack_84;
  undefined4 **ppuStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined8 uStack_68;
  float fStack_60;
  float fStack_5c;
  undefined4 *puStack_50;
  undefined1 auStack_48 [24];
  
  fStack_74 = (float)((ulong)param_1 >> 0x20);
  *(undefined4 *)((long)param_2 + 0x24) = 0;
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  fStack_78 = (float)(int)*param_4;
  uStack_68 = func_0x0d3414e0(fStack_78,0,(float)(int)((ulong)*param_4 >> 0x20),param_3 + 0x118);
  fVar3 = (float)(int)((ulong)*param_4 >> 0x20);
  auStack_48._0_16_ = ZEXT416((uint)fVar3);
  uVar5 = func_0x0d3414e0(fVar3,(float)(int)*param_4,0,param_3 + 0x118);
  uStack_68._0_4_ = (float)uStack_68 * _DAT_014e6d00 + fStack_78;
  fStack_78 = (float)uVar5 * _UNK_014e6d04 + (float)auStack_48._0_4_;
  fStack_60 = uStack_68._4_4_ * _UNK_014e6d08 + fStack_74;
  fStack_5c = (float)((ulong)uVar5 >> 0x20) * _UNK_014e6d0c + (float)auStack_48._4_4_;
  *param_2 = CONCAT44(fStack_78,(float)uStack_68);
  fStack_74 = fStack_78;
  fStack_70 = fStack_78;
  fStack_6c = fStack_78;
  uStack_68._4_4_ = fStack_78;
  uVar4 = func_0x0d3414e0((float)uStack_68,0,param_3 + 0x70);
  auStack_48._0_4_ = uVar4;
  *(undefined4 *)(param_2 + 1) = uVar4;
  uVar4 = func_0x0d3414e0((float)uStack_68,0,fStack_78,param_3 + 0xa8);
  *(undefined4 *)(param_2 + 2) = uVar4;
  uVar5 = func_0x0d3414e0((float)uStack_68,0,fStack_78,param_3 + 0xe0);
  uStack_68._4_4_ = (float)((ulong)uVar5 >> 0x20);
  uStack_84 = (uint)uVar5;
  *(uint *)((long)param_2 + 0xc) = uStack_84;
  uStack_90 = auStack_48._0_4_;
  fStack_74 = (float)((uint)uStack_68._4_4_ & _UNK_014e7ba4 & _UNK_014e7ba4);
  fStack_70 = (float)(extraout_XMM0_Dc & _UNK_014e7ba8 & _UNK_014e7ba8);
  fStack_6c = (float)(extraout_XMM0_Dd & _UNK_014e7bac & _UNK_014e7bac);
  fStack_88 = ((float)((uint)((float)(uStack_84 & _DAT_014e7ba0) + _DAT_0119852c) & _DAT_014e7ba0) +
              _DAT_011988a8) * _DAT_01198930;
  fStack_78 = fStack_88;
  if ((ulong)*(uint *)(param_3 + 0x200) != 0xffffffff) {
    uStack_8c = uVar4;
    ppuStack_80 = &puStack_50;
    uStack_68._0_4_ = (float)uStack_84;
    puStack_50 = &uStack_90;
    fVar3 = (float)(**(code **)(&UNK_0ef53670 + (ulong)*(uint *)(param_3 + 0x200) * 8))
                             (&ppuStack_80,param_3 + 0x188);
    uVar5 = CONCAT44(uStack_68._4_4_,(float)uStack_68);
    *(float *)((long)param_2 + 0x14) = fVar3 + *(float *)(param_3 + 0x350);
    uStack_90 = auStack_48._0_4_;
    fStack_88 = fStack_78;
    uStack_84 = (uint)(float)uStack_68;
    if ((ulong)*(uint *)(param_3 + 0x298) != 0xffffffff) {
      uStack_8c = uVar4;
      ppuStack_80 = &puStack_50;
      puStack_50 = &uStack_90;
      fVar3 = (float)(**(code **)(&UNK_0ef53670 + (ulong)*(uint *)(param_3 + 0x298) * 8))
                               (&ppuStack_80,param_3 + 0x220);
      *(float *)(param_2 + 3) = fVar3 * *(float *)(param_3 + 0x354);
      return param_2;
    }
  }
  uStack_68._0_4_ = (float)uVar5;
  uStack_8c = uVar4;
  fStack_88 = fStack_78;
  uStack_84 = (uint)(float)uStack_68;
  puStack_50 = &uStack_90;
  uStack_68 = uVar5;
  func_0x04931450();
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined8 *)(*pcVar1)();
  return puVar2;
}


```

### Assembly

```asm
052580c0  PUSH RBP
052580c1  PUSH R15
052580c3  PUSH R14
052580c5  PUSH R13
052580c7  PUSH R12
052580c9  PUSH RBX
052580ca  SUB RSP,0x68
052580ce  MOV R15,RDX
052580d1  MOV RBX,RDI
052580d4  MOV dword ptr [RDI + 0x24],0x0
052580db  MOV qword ptr [RDI + 0x1c],0x0
052580e3  MOV RAX,qword ptr [RDX]
052580e6  CVTSI2SS XMM0,EAX
052580ea  MOVAPS xmmword ptr [RSP + 0x20],XMM0
052580ef  MOV R14,RSI
052580f2  SHR RAX,0x20
052580f6  LEA R12,[RSI + 0x118]
052580fd  CVTSI2SS XMM2,EAX
05258101  XORPS XMM1,XMM1
05258104  MOV RDI,R12
05258107  CALL 0x0d3414e0
0525810c  MOVAPS xmmword ptr [RSP + 0x30],XMM0
05258111  MOV RAX,qword ptr [R15]
05258114  XORPS XMM1,XMM1
05258117  CVTSI2SS XMM1,EAX
0525811b  SHR RAX,0x20
0525811f  XORPS XMM0,XMM0
05258122  CVTSI2SS XMM0,EAX
05258126  MOVAPS xmmword ptr [RSP + 0x50],XMM0
0525812b  XORPS XMM2,XMM2
0525812e  MOV RDI,R12
05258131  CALL 0x0d3414e0
05258136  MOVAPS XMM1,xmmword ptr [RSP + 0x30]
0525813b  UNPCKLPS XMM1,XMM0
0525813e  MOVAPS XMM0,xmmword ptr [RSP + 0x20]
05258143  UNPCKLPS XMM0,xmmword ptr [RSP + 0x50]
05258148  MULPS XMM1,xmmword ptr [0x014e6d00]
0525814f  ADDPS XMM1,XMM0
05258152  MOVLPS qword ptr [RBX],XMM1
05258155  LEA RDI,[R14 + 0x70]
05258159  MOVAPS XMM2,XMM1
0525815c  MOVAPS XMM0,XMM1
0525815f  MOVAPS xmmword ptr [RSP + 0x30],XMM1
05258164  SHUFPS XMM2,XMM1,0x55
05258168  MOVAPS xmmword ptr [RSP + 0x20],XMM2
0525816d  XORPS XMM1,XMM1
05258170  CALL 0x0d3414e0
05258175  MOVSS dword ptr [RSP + 0x50],XMM0
0525817b  MOVSS dword ptr [RBX + 0x8],XMM0
05258180  LEA RDI,[R14 + 0xa8]
05258187  XORPS XMM1,XMM1
0525818a  MOVAPS XMM0,xmmword ptr [RSP + 0x30]
0525818f  MOVAPS XMM2,xmmword ptr [RSP + 0x20]
05258194  CALL 0x0d3414e0
05258199  MOVSS dword ptr [RSP + 0x4],XMM0
0525819f  MOVSS dword ptr [RBX + 0x10],XMM0
052581a4  LEA RDI,[R14 + 0xe0]
052581ab  XORPS XMM1,XMM1
052581ae  MOVAPS XMM0,xmmword ptr [RSP + 0x30]
052581b3  MOVAPS XMM2,xmmword ptr [RSP + 0x20]
052581b8  CALL 0x0d3414e0
052581bd  MOVSS dword ptr [RBX + 0xc],XMM0
052581c2  MOVSS XMM1,dword ptr [RSP + 0x50]
052581c8  MOVSS dword ptr [RSP + 0x8],XMM1
052581ce  MOVAPS XMM1,xmmword ptr [0x014e7ba0]
052581d5  MOVAPS XMM2,XMM0
052581d8  ANDPS XMM2,XMM1
052581db  ADDSS XMM2,dword ptr [0x0119852c]
052581e3  ANDPS XMM2,XMM1
052581e6  ADDSS XMM2,dword ptr [0x011988a8]
052581ee  MULSS XMM2,dword ptr [0x01198930]
052581f6  MOVSS XMM1,dword ptr [RSP + 0x4]
052581fc  MOVSS dword ptr [RSP + 0xc],XMM1
05258202  MOVAPS xmmword ptr [RSP + 0x20],XMM2
05258207  MOVSS dword ptr [RSP + 0x10],XMM2
0525820d  MOVAPS xmmword ptr [RSP + 0x30],XMM0
05258212  MOVSS dword ptr [RSP + 0x14],XMM0
05258218  LEA R15,[RSP + 0x8]
0525821d  MOV qword ptr [RSP + 0x48],R15
05258222  MOV EAX,dword ptr [R14 + 0x200]
05258229  MOV R12D,0xffffffff
0525822f  CMP RAX,R12
05258232  JZ 0x052582dd
05258238  LEA RSI,[R14 + 0x188]
0525823f  LEA RBP,[RSP + 0x48]
05258244  MOV qword ptr [RSP + 0x18],RBP
05258249  LEA R13,[0xef53670]
05258250  LEA RDI,[RSP + 0x18]
05258255  CALL qword ptr [R13 + RAX*0x8]
0525825a  ADDSS XMM0,dword ptr [R14 + 0x350]
05258263  MOVSS dword ptr [RBX + 0x14],XMM0
05258268  MOVSS XMM0,dword ptr [RSP + 0x50]
0525826e  MOVSS dword ptr [RSP + 0x8],XMM0
05258274  MOVSS XMM0,dword ptr [RSP + 0x4]
0525827a  MOVSS dword ptr [RSP + 0xc],XMM0
05258280  MOVAPS XMM0,xmmword ptr [RSP + 0x20]
05258285  MOVSS dword ptr [RSP + 0x10],XMM0
0525828b  MOVAPS XMM0,xmmword ptr [RSP + 0x30]
05258290  MOVSS dword ptr [RSP + 0x14],XMM0
05258296  MOV qword ptr [RSP + 0x48],R15
0525829b  MOV EAX,dword ptr [R14 + 0x298]
052582a2  CMP RAX,R12
052582a5  JZ 0x052582dd
052582a7  LEA RSI,[R14 + 0x220]
052582ae  MOV qword ptr [RSP + 0x18],RBP
052582b3  LEA RDI,[RSP + 0x18]
052582b8  CALL qword ptr [R13 + RAX*0x8]
052582bd  MULSS XMM0,dword ptr [R14 + 0x354]
052582c6  MOVSS dword ptr [RBX + 0x18],XMM0
052582cb  MOV RAX,RBX
052582ce  ADD RSP,0x68
052582d2  POP RBX
052582d3  POP R12
052582d5  POP R13
052582d7  POP R14
052582d9  POP R15
052582db  POP RBP
052582dc  RET
052582dd  CALL 0x04931450
052582e2  INT3
```

## `05259f00` — depth 2 from OverworldGeneratorMultinoise___generateDensityCellsForChunk (root OverworldGeneratorMultinoise__generateDensityCellsForChunk)

- Ghidra name: `Cavifier__carve`
- Body: `[[05259f00, 0525a61c]]`

### Pseudocode

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Cavifier__carve(undefined8 param_1,float param_2,float param_3,long *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar14;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fStack_68;
  undefined8 extraout_XMM0_Qb;
  
  fVar14 = (float)((ulong)param_1 >> 0x20);
  fVar7 = (float)param_1;
  if (_DAT_01198730 <= param_3) {
    func_0x0d3414e0(*param_4 + 0x2a0);
    func_0x0d3414e0(*param_4 + 0x268);
    func_0x0d3414e0(*param_4 + 0x1f8);
    func_0x0d3414e0(*param_4 + 0x230);
    func_0x0d3414e0(*param_4 + 0x188);
    func_0x0d3414e0(*param_4 + 0x1c0);
    auVar4._8_4_ = in_XMM0_Dc;
    auVar4._0_8_ = param_1;
    auVar4._12_4_ = in_XMM0_Dd;
    auVar9._4_12_ = auVar4._4_12_;
    auVar9._0_4_ = fVar7 * _DAT_01198aa0;
    auVar1._4_4_ = fVar14;
    auVar1._0_4_ = fVar14;
    auVar1._8_4_ = fVar14;
    auVar1._12_4_ = fVar14;
    fStack_68 = _DAT_011986e0;
    auVar15._4_12_ = auVar1._4_12_;
    auVar15._0_4_ = fVar14 * _DAT_011986e0;
    func_0x0d3414e0(auVar9._0_8_,auVar15._0_8_,*param_4 + 0x2d8);
    if (_DAT_01198928 <= param_3) {
      func_0x0d3414e0(*param_4 + 0x348);
      func_0x0d3414e0(*param_4 + 0x310);
      fVar8 = (float)func_0x0d3414e0(*param_4 + 0x118);
      if (((_DAT_01198b34 <= fVar8) && (fStack_68 = _DAT_01198aa0, _DAT_01198780 <= fVar8)) &&
         (fStack_68 = _DAT_011983f0, _DAT_011986e0 <= fVar8)) {
        fStack_68 = *(float *)(&UNK_014f09f0 + (ulong)(fVar8 < _DAT_01198aa0) * 4);
      }
      func_0x0d3414e0(*param_4 + 0x150);
      fStack_68 = _DAT_011983f0 / fStack_68;
      auVar5._8_4_ = in_XMM0_Dc;
      auVar5._0_8_ = param_1;
      auVar5._12_4_ = in_XMM0_Dd;
      auVar10._4_12_ = auVar5._4_12_;
      auVar10._0_4_ = fVar7 * fStack_68;
      auVar2._4_4_ = fVar14;
      auVar2._0_4_ = fVar14;
      auVar2._8_4_ = fVar14;
      auVar2._12_4_ = fVar14;
      auVar16._4_12_ = auVar2._4_12_;
      auVar16._0_4_ = fVar14 * fStack_68;
      func_0x0d3414e0(auVar10._0_8_,auVar16._0_8_,fStack_68 * param_2,*param_4 + 0xa8);
      func_0x0d3414e0(*param_4 + 0xe0);
      func_0x0d3414e0(*param_4 + 0x38);
      auVar11._0_8_ = func_0x0d3414e0(*param_4 + 0x70);
      auVar11._8_8_ = extraout_XMM0_Qb;
      auVar12._4_12_ = auVar11._4_12_;
      auVar12._0_4_ =
           ((float)auVar11._0_8_ + _DAT_011983f0) * _DAT_011986e0 * _DAT_01198638 + _DAT_011983fc;
      func_0x0eee37d0(auVar12._0_8_);
      auVar6._8_4_ = in_XMM0_Dc;
      auVar6._0_8_ = param_1;
      auVar6._12_4_ = in_XMM0_Dd;
      auVar13._4_12_ = auVar6._4_12_;
      auVar13._0_4_ = fVar7 * _DAT_011985a0;
      auVar3._4_4_ = fVar14;
      auVar3._0_4_ = fVar14;
      auVar3._8_4_ = fVar14;
      auVar3._12_4_ = fVar14;
      auVar17._4_12_ = auVar3._4_12_;
      auVar17._0_4_ = fVar14 * _DAT_01198aec;
      func_0x0d3414e0(auVar13._0_8_,auVar17._0_8_,param_2 * _DAT_011985a0,*param_4);
      return;
    }
  }
  return;
}


```

### Assembly

```asm
05259f00  PUSH RBX
05259f01  SUB RSP,0x90
05259f08  MOVAPS XMM3,XMM2
05259f0b  MOVAPS XMM2,XMM1
05259f0e  MOVSS XMM1,dword ptr [0x01198730]
05259f16  UCOMISS XMM1,XMM3
05259f19  JA 0x0525a20f
05259f1f  MOV RBX,RDI
05259f22  MOVSS dword ptr [RSP + 0x40],XMM3
05259f28  MOV EDI,0x2a0
05259f2d  ADD RDI,qword ptr [RBX]
05259f30  MOVAPS XMM1,XMM0
05259f33  SHUFPS XMM1,XMM0,0x55
05259f37  MOVAPS xmmword ptr [RSP + 0x10],XMM1
05259f3c  MOVAPS xmmword ptr [RSP + 0x20],XMM0
05259f41  MOVSS dword ptr [RSP + 0x4],XMM2
05259f47  CALL 0x0d3414e0
05259f4c  ADDSS XMM0,dword ptr [0x011983f0]
05259f54  MULSS XMM0,dword ptr [0x011986e0]
05259f5c  MULSS XMM0,dword ptr [0x01198a9c]
05259f64  XORPS XMM1,XMM1
05259f67  ADDSS XMM0,XMM1
05259f6b  MOVSS dword ptr [RSP + 0x8],XMM0
05259f71  MOV EDI,0x268
05259f76  ADD RDI,qword ptr [RBX]
05259f79  MOVAPS XMM0,xmmword ptr [RSP + 0x20]
05259f7e  MOVAPS XMM1,xmmword ptr [RSP + 0x10]
05259f83  MOVSS XMM2,dword ptr [RSP + 0x4]
05259f89  CALL 0x0d3414e0
05259f8e  ANDPS XMM0,xmmword ptr [0x014e7ba0]
05259f95  MOVSS XMM1,dword ptr [0x01198c0c]
05259f9d  SUBSS XMM1,XMM0
05259fa1  MOVSS dword ptr [RSP + 0x30],XMM1
05259fa7  MOV EDI,0x1f8
05259fac  ADD RDI,qword ptr [RBX]
05259faf  MOVAPS XMM0,xmmword ptr [RSP + 0x20]
05259fb4  ADDSS XMM0,XMM0
05259fb8  MOVSS XMM2,dword ptr [RSP + 0x4]
05259fbe  ADDSS XMM2,XMM2
05259fc2  MOVAPS xmmword ptr [RSP + 0x80],XMM0
05259fca  MOVAPS XMM1,xmmword ptr [RSP + 0x10]
05259fcf  MOVSS dword ptr [RSP + 0xc],XMM2
05259fd5  CALL 0x0d3414e0
05259fda  MOVSS XMM2,dword ptr [0x01198aa0]
05259fe2  MOVSS XMM1,dword ptr [0x01198780]
05259fea  UCOMISS XMM1,XMM0
05259fed  JA 0x0525a01d
05259fef  XORPS XMM1,XMM1
05259ff2  UCOMISS XMM1,XMM0
05259ff5  JBE 0x0525a001
05259ff7  MOVSS XMM2,dword ptr [0x011983f0]
05259fff  JMP 0x0525a01d
0525a001  MOVSS XMM1,dword ptr [0x011986e0]
0525a009  XOR EAX,EAX
0525a00b  UCOMISS XMM1,XMM0
0525a00e  SETA AL
0525a011  LEA RCX,[0x14f02b0]
0525a018  MOVSS XMM2,dword ptr [RCX + RAX*0x4]
0525a01d  MOVAPS xmmword ptr [RSP + 0x50],XMM2
0525a022  MOVSS XMM0,dword ptr [RSP + 0x8]
0525a028  MULSS XMM0,dword ptr [RSP + 0x30]
0525a02e  MOVSS dword ptr [RSP + 0x8],XMM0
0525a034  MOV EDI,0x230
0525a039  ADD RDI,qword ptr [RBX]
0525a03c  MOVAPS XMM0,xmmword ptr [RSP + 0x20]
0525a041  MOVAPS XMM1,xmmword ptr [RSP + 0x10]
0525a046  MOVSS XMM2,dword ptr [RSP + 0x4]
0525a04c  CALL 0x0d3414e0
0525a051  MOVSS XMM1,dword ptr [0x011983f0]
0525a059  ADDSS XMM0,XMM1
0525a05d  MOVSS XMM2,dword ptr [0x011986e0]
0525a065  MULSS XMM0,XMM2
0525a069  MULSS XMM0,dword ptr [0x0119893c]
0525a071  ADDSS XMM0,dword ptr [0x0119859c]
0525a079  MOVAPS xmmword ptr [RSP + 0x30],XMM0
0525a07e  MOV EDI,0x188
0525a083  ADD RDI,qword ptr [RBX]
0525a086  MOVAPS XMM2,XMM1
0525a089  DIVSS XMM2,dword ptr [RSP + 0x50]
0525a08f  MOVAPS XMM3,xmmword ptr [RSP + 0x20]
0525a094  MULSS XMM3,XMM2
0525a098  MOVSS dword ptr [RSP + 0x68],XMM3
0525a09e  MOVAPS XMM1,xmmword ptr [RSP + 0x10]
0525a0a3  MULSS XMM1,XMM2
0525a0a7  MOVSS dword ptr [RSP + 0x64],XMM1
0525a0ad  MULSS XMM2,dword ptr [RSP + 0x4]
0525a0b3  MOVSS dword ptr [RSP + 0x6c],XMM2
0525a0b9  MOVAPS XMM0,XMM3
0525a0bc  CALL 0x0d3414e0
0525a0c1  MOVAPS xmmword ptr [RSP + 0x70],XMM0
0525a0c6  MOV EDI,0x1c0
0525a0cb  ADD RDI,qword ptr [RBX]
0525a0ce  MOVSS XMM0,dword ptr [RSP + 0x68]
0525a0d4  MOVSS XMM1,dword ptr [RSP + 0x64]
0525a0da  MOVSS XMM2,dword ptr [RSP + 0x6c]
0525a0e0  CALL 0x0d3414e0
0525a0e5  MOVAPS XMM1,xmmword ptr [RSP + 0x50]
0525a0ea  SHUFPS XMM1,XMM1,0x0
0525a0ee  MOVAPS XMM3,xmmword ptr [RSP + 0x70]
0525a0f3  UNPCKLPS XMM3,XMM0
0525a0f6  MULPS XMM3,XMM1
0525a0f9  ANDPS XMM3,xmmword ptr [0x014e7ba0]
0525a100  MOVAPS XMM0,xmmword ptr [RSP + 0x30]
0525a105  SHUFPS XMM0,XMM0,0x0
0525a109  SUBPS XMM3,XMM0
0525a10c  MOVAPS XMM2,XMM3
0525a10f  SHUFPS XMM2,XMM3,0x55
0525a113  MAXSS XMM2,XMM3
0525a117  MOVSS XMM0,dword ptr [0x011983f0]
0525a11f  MINSS XMM0,XMM2
0525a123  MOVSS XMM3,dword ptr [0x011985d4]
0525a12b  CMPLTSS XMM2,XMM3
0525a130  MOVAPS XMM1,XMM2
0525a133  ANDNPS XMM1,XMM0
0525a136  ANDPS XMM2,XMM3
0525a139  ORPS XMM2,XMM1
0525a13c  MOVAPS xmmword ptr [RSP + 0x50],XMM2
0525a141  MOV EDI,0x2d8
0525a146  ADD RDI,qword ptr [RBX]
0525a149  MOVAPS XMM0,xmmword ptr [RSP + 0x20]
0525a14e  MOVSS XMM2,dword ptr [0x01198aa0]
0525a156  MULSS XMM0,XMM2
0525a15a  MOVAPS XMM1,xmmword ptr [RSP + 0x10]
0525a15f  MOVSS XMM3,dword ptr [0x011986e0]
0525a167  MOVAPS xmmword ptr [RSP + 0x30],XMM3
0525a16c  MOVSS XMM3,dword ptr [0x011986e0]
0525a174  MULSS XMM1,XMM3
0525a178  MULSS XMM2,dword ptr [RSP + 0x4]
0525a17e  CALL 0x0d3414e0
0525a183  ADDSS XMM0,dword ptr [0x011985e8]
0525a18b  MOVSS XMM1,dword ptr [0x01198400]
0525a193  ADDSS XMM1,dword ptr [RSP + 0x10]
0525a199  DIVSS XMM1,dword ptr [0x01198850]
0525a1a1  XORPS XMM2,XMM2
0525a1a4  UCOMISS XMM2,XMM1
0525a1a7  JBE 0x0525a1b9
0525a1a9  MOVSS XMM2,dword ptr [0x01198aec]
0525a1b1  MOVSS XMM3,dword ptr [RSP + 0x40]
0525a1b7  JMP 0x0525a1db
0525a1b9  UCOMISS XMM1,dword ptr [0x011983f0]
0525a1c0  MOVSS XMM3,dword ptr [RSP + 0x40]
0525a1c6  JA 0x0525a1db
0525a1c8  MULSS XMM1,dword ptr [0x01198b44]
0525a1d0  ADDSS XMM1,dword ptr [0x01198aec]
0525a1d8  MOVAPS XMM2,XMM1
0525a1db  ADDSS XMM0,XMM2
0525a1df  MOVAPS XMM1,xmmword ptr [RSP + 0x50]
0525a1e4  ADDSS XMM1,dword ptr [RSP + 0x8]
0525a1ea  MINSS XMM1,XMM0
0525a1ee  MOVSS XMM0,dword ptr [0x01198928]
0525a1f6  UCOMISS XMM0,XMM3
0525a1f9  JBE 0x0525a21b
0525a1fb  MULSS XMM1,dword ptr [RBX + 0xc]
0525a200  MULSS XMM1,dword ptr [0x01198988]
0525a208  MINSS XMM1,XMM3
0525a20c  MOVAPS XMM3,XMM1
0525a20f  MOVAPS XMM0,XMM3
0525a212  ADD RSP,0x90
0525a219  POP RBX
0525a21a  RET
0525a21b  MOVAPS xmmword ptr [RSP + 0x50],XMM1
0525a220  MOV EDI,0x348
0525a225  ADD RDI,qword ptr [RBX]
0525a228  MOVSS XMM1,dword ptr [0x01198734]
0525a230  MULSS XMM1,dword ptr [RSP + 0x10]
0525a236  MOVAPS XMM0,xmmword ptr [RSP + 0x20]
0525a23b  MOVSS XMM2,dword ptr [RSP + 0x4]
0525a241  CALL 0x0d3414e0
0525a246  MOVAPS XMM2,XMM0
0525a249  ADDSS XMM2,dword ptr [0x011984a0]
0525a251  MOVSS XMM0,dword ptr [0x011983f0]
0525a259  MINSS XMM0,XMM2
0525a25d  MOVSS XMM3,dword ptr [0x011985d4]
0525a265  CMPLTSS XMM2,XMM3
0525a26a  MOVAPS XMM1,XMM2
0525a26d  ANDNPS XMM1,XMM0
0525a270  ANDPS XMM2,XMM3
0525a273  MOVSS XMM3,dword ptr [RSP + 0x40]
0525a279  ORPS XMM2,XMM1
0525a27c  ADDSS XMM3,dword ptr [0x01198408]
0525a284  MULSS XMM3,dword ptr [0x01198a10]
0525a28c  XORPS XMM0,XMM0
0525a28f  UCOMISS XMM0,XMM3
0525a292  MOVSS XMM0,dword ptr [0x011986e0]
0525a29a  JA 0x0525a2bb
0525a29c  UCOMISS XMM3,dword ptr [0x011983f0]
0525a2a3  XORPS XMM0,XMM0
0525a2a6  JA 0x0525a2bb
0525a2a8  MULSS XMM3,dword ptr [0x01198780]
0525a2b0  ADDSS XMM3,dword ptr [0x011986e0]
0525a2b8  MOVAPS XMM0,XMM3
0525a2bb  ADDSS XMM2,XMM0
0525a2bf  MOVAPS xmmword ptr [RSP + 0x40],XMM2
0525a2c4  MOV EDI,0x310
0525a2c9  ADD RDI,qword ptr [RBX]
0525a2cc  MOVSS XMM1,dword ptr [0x01198494]
0525a2d4  MULSS XMM1,dword ptr [RSP + 0x10]
0525a2da  MOVAPS XMM0,xmmword ptr [RSP + 0x20]
0525a2df  MOVSS XMM2,dword ptr [RSP + 0x4]
0525a2e5  CALL 0x0d3414e0
0525a2ea  MULSS XMM0,XMM0
0525a2ee  MULSS XMM0,dword ptr [0x011987f8]
0525a2f6  MOVSS dword ptr [RSP + 0x70],XMM0
0525a2fc  MOV EDI,0x118
0525a301  ADD RDI,qword ptr [RBX]
0525a304  MOVAPS XMM0,xmmword ptr [RSP + 0x80]
0525a30c  MOVAPS XMM1,xmmword ptr [RSP + 0x10]
0525a311  MOVSS XMM2,dword ptr [RSP + 0xc]
0525a317  CALL 0x0d3414e0
0525a31c  MOVSS XMM1,dword ptr [0x01198b34]
0525a324  UCOMISS XMM1,XMM0
0525a327  JA 0x0525a37b
0525a329  MOVSS XMM1,dword ptr [0x01198780]
0525a331  UCOMISS XMM1,XMM0
0525a334  JBE 0x0525a340
0525a336  MOVSS XMM0,dword ptr [0x01198aa0]
0525a33e  JMP 0x0525a376
0525a340  MOVSS XMM1,dword ptr [0x011986e0]
0525a348  UCOMISS XMM1,XMM0
0525a34b  MOVSS XMM1,dword ptr [0x011983f0]
0525a353  MOVAPS xmmword ptr [RSP + 0x30],XMM1
0525a358  JA 0x0525a37b
0525a35a  MOVSS XMM1,dword ptr [0x01198aa0]
0525a362  XOR EAX,EAX
0525a364  UCOMISS XMM1,XMM0
0525a367  SETA AL
0525a36a  LEA RCX,[0x14f09f0]
0525a371  MOVSS XMM0,dword ptr [RCX + RAX*0x4]
0525a376  MOVAPS xmmword ptr [RSP + 0x30],XMM0
0525a37b  MOVAPS XMM0,xmmword ptr [RSP + 0x40]
0525a380  ADDSS XMM0,dword ptr [RSP + 0x70]
0525a386  MOVAPS xmmword ptr [RSP + 0x40],XMM0
0525a38b  MOV EDI,0x150
0525a390  ADD RDI,qword ptr [RBX]
0525a393  MOVAPS XMM0,xmmword ptr [RSP + 0x80]
0525a39b  MOVAPS XMM1,xmmword ptr [RSP + 0x10]
0525a3a0  MOVSS XMM2,dword ptr [RSP + 0xc]
0525a3a6  CALL 0x0d3414e0
0525a3ab  MOVSS dword ptr [RSP + 0x80],XMM0
0525a3b4  MOV EDI,0xa8
0525a3b9  ADD RDI,qword ptr [RBX]
0525a3bc  MOVSS XMM2,dword ptr [0x011983f0]
0525a3c4  DIVSS XMM2,dword ptr [RSP + 0x30]
0525a3ca  MOVAPS XMM0,xmmword ptr [RSP + 0x20]
0525a3cf  MULSS XMM0,XMM2
0525a3d3  MOVAPS XMM1,xmmword ptr [RSP + 0x10]
0525a3d8  MULSS XMM1,XMM2
0525a3dc  MULSS XMM2,dword ptr [RSP + 0x4]
0525a3e2  CALL 0x0d3414e0
0525a3e7  MOVSS dword ptr [RSP + 0xc],XMM0
0525a3ed  MOVSS XMM0,dword ptr [RBX + 0x8]
0525a3f2  MOVSS dword ptr [RSP + 0x70],XMM0
0525a3f8  MOV EDI,0xe0
0525a3fd  ADD RDI,qword ptr [RBX]
0525a400  XORPS XMM1,XMM1
0525a403  MOVAPS XMM0,xmmword ptr [RSP + 0x20]
0525a408  MOVSS XMM2,dword ptr [RSP + 0x4]
0525a40e  CALL 0x0d3414e0
0525a413  MOVSS XMM6,dword ptr [RSP + 0x70]
0525a419  MOVSS XMM1,dword ptr [0x01198808]
0525a421  ADDSS XMM1,XMM6
0525a425  ANDPS XMM1,xmmword ptr [0x014e7ba0]
0525a42c  MOVSS XMM2,dword ptr [0x011986e8]
0525a434  UCOMISS XMM2,XMM1
0525a437  JNC 0x0525a45d
0525a439  ADDSS XMM0,dword ptr [0x011983f0]
0525a441  MULSS XMM0,dword ptr [0x011986e0]
0525a449  MOVSS XMM1,dword ptr [0x01198494]
0525a451  SUBSS XMM1,XMM6
0525a455  MULSS XMM1,XMM0
0525a459  ADDSS XMM6,XMM1
0525a45d  MOVSS XMM5,dword ptr [0x011983f0]
0525a465  MOVSS XMM3,dword ptr [RSP + 0x80]
0525a46e  ADDSS XMM3,XMM5
0525a472  MULSS XMM3,dword ptr [0x011986e0]
0525a47a  MULSS XMM3,dword ptr [0x01198738]
0525a482  ADDSS XMM3,dword ptr [0x01198584]
0525a48a  MOVAPS XMM2,xmmword ptr [RSP + 0x30]
0525a48f  MULSS XMM2,dword ptr [RSP + 0xc]
0525a495  MOVAPS XMM0,xmmword ptr [0x014e7ba0]
0525a49c  ANDPS XMM2,XMM0
0525a49f  MOVSS XMM1,dword ptr [0x01198bdc]
0525a4a7  MULSS XMM1,XMM3
0525a4ab  ADDSS XMM1,XMM2
0525a4af  MOVSS XMM2,dword ptr [0x01198a54]
0525a4b7  MOVAPS XMM4,xmmword ptr [RSP + 0x10]
0525a4bc  MULSS XMM2,XMM4
0525a4c0  ADDSS XMM2,XMM6
0525a4c4  ANDPS XMM2,XMM0
0525a4c7  SUBSS XMM2,XMM3
0525a4cb  MOVAPS XMM0,XMM2
0525a4ce  MULSS XMM0,XMM2
0525a4d2  MULSS XMM0,XMM2
0525a4d6  MAXSS XMM0,XMM1
0525a4da  MOVAPS XMM1,XMM5
0525a4dd  MINSS XMM1,XMM0
0525a4e1  MOVSS XMM3,dword ptr [0x011985d4]
0525a4e9  CMPLTSS XMM0,XMM3
0525a4ee  MOVAPS XMM2,XMM0
0525a4f1  ANDNPS XMM2,XMM1
0525a4f4  ANDPS XMM0,XMM3
0525a4f7  ORPS XMM0,XMM2
0525a4fa  MOVSS XMM1,dword ptr [RSP + 0x8]
0525a500  ADDSS XMM1,XMM0
0525a504  MOVAPS XMM0,xmmword ptr [RSP + 0x50]
0525a509  MINSS XMM0,XMM1
0525a50d  MOVAPS XMM1,xmmword ptr [RSP + 0x40]
0525a512  MINSS XMM1,XMM0
0525a516  MOVAPS xmmword ptr [RSP + 0x40],XMM1
0525a51b  MOV RDI,qword ptr [RBX]
0525a51e  ADD RDI,0x38
0525a522  MOVAPS XMM0,xmmword ptr [RSP + 0x20]
0525a527  MOVAPS XMM1,XMM4
0525a52a  MOVSS XMM2,dword ptr [RSP + 0x4]
0525a530  CALL 0x0d3414e0
0525a535  ADDSS XMM0,dword ptr [0x011983f0]
0525a53d  MULSS XMM0,dword ptr [0x011986e0]
0525a545  ADDSS XMM0,XMM0
0525a549  XORPS XMM1,XMM1
0525a54c  ADDSS XMM0,XMM1
0525a550  MOVSS dword ptr [RSP + 0x8],XMM0
0525a556  MOV RDI,qword ptr [RBX]
0525a559  ADD RDI,0x70
0525a55d  MOVAPS XMM0,xmmword ptr [RSP + 0x20]
0525a562  MOVAPS XMM1,xmmword ptr [RSP + 0x10]
0525a567  MOVSS XMM2,dword ptr [RSP + 0x4]
0525a56d  CALL 0x0d3414e0
0525a572  ADDSS XMM0,dword ptr [0x011983f0]
0525a57a  MULSS XMM0,dword ptr [0x011986e0]
0525a582  MULSS XMM0,dword ptr [0x01198638]
0525a58a  ADDSS XMM0,dword ptr [0x011983fc]
0525a592  MOVSS XMM1,dword ptr [0x01198af0]
0525a59a  CALL 0x0eee37d0
0525a59f  MOVSS dword ptr [RSP + 0x50],XMM0
0525a5a5  MOV RDI,qword ptr [RBX]
0525a5a8  MOVSS XMM3,dword ptr [0x011985a0]
0525a5b0  MOVAPS XMM0,xmmword ptr [RSP + 0x20]
0525a5b5  MULSS XMM0,XMM3
0525a5b9  MOVAPS XMM1,xmmword ptr [RSP + 0x10]
0525a5be  MULSS XMM1,dword ptr [0x01198aec]
0525a5c6  MOVSS XMM2,dword ptr [RSP + 0x4]
0525a5cc  MULSS XMM2,XMM3
0525a5d0  CALL 0x0d3414e0
0525a5d5  ADDSS XMM0,XMM0
0525a5d9  SUBSS XMM0,dword ptr [RSP + 0x8]
0525a5df  MULSS XMM0,dword ptr [RSP + 0x50]
0525a5e5  MOVSS XMM1,dword ptr [0x01198b30]
0525a5ed  CMPLTSS XMM1,XMM0
0525a5f2  ANDPS XMM0,XMM1
0525a5f5  MOVSS XMM2,dword ptr [0x011988dc]
0525a5fd  ANDNPS XMM1,XMM2
0525a600  ORPS XMM1,XMM0
0525a603  MOVAPS XMM3,xmmword ptr [RSP + 0x40]
0525a608  MAXSS XMM3,XMM1
0525a60c  MULSS XMM3,dword ptr [RBX + 0xc]
0525a611  MOVAPS XMM0,XMM3
0525a614  ADD RSP,0x90
0525a61b  POP RBX
0525a61c  RET
```

## `052a3b00` — depth 2 from FUN_052bd680 (root OverworldGeneratorMultinoise___prepareHeights)

- Ghidra name: `FUN_052a3b00`
- Body: `[[052a3b00, 052a3b0d]]`

### Pseudocode

```c

void FUN_052a3b00(void)

{
  code *pcVar1;
  
  func_0x04882e40(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```

### Assembly

```asm
052a3b00  PUSH RAX
052a3b01  LEA RDI,[0x13f6512]
052a3b08  CALL 0x04882e40
052a3b0d  INT3
```

## `0525eca0` — depth 2 from FUN_0525af30 (root OverworldGeneratorMultinoise___prepareHeights)

- Ghidra name: `FUN_0525eca0`
- Body: `[[0525eca0, 0525f047]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0525eca0(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = 0x7f7fffff;
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  uVar4 = _UNK_014e2238;
  uVar3 = _DAT_014e2230;
  *(undefined8 *)(param_1 + 4) = _DAT_014e2230;
  *(undefined8 *)(param_1 + 6) = uVar4;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 10) = uVar4;
  *(undefined8 *)(param_1 + 0xc) = uVar3;
  *(undefined8 *)(param_1 + 0xe) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x12) = uVar4;
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  *(undefined8 *)(param_1 + 0x16) = uVar4;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x1a) = uVar4;
  *(undefined8 *)(param_1 + 0x1c) = uVar3;
  *(undefined8 *)(param_1 + 0x1e) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined8 *)(param_1 + 0x22) = uVar4;
  *(undefined8 *)(param_1 + 0x24) = uVar3;
  *(undefined8 *)(param_1 + 0x26) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x2a) = uVar4;
  param_1[0x2c] = 0x7f7fffff;
  uVar2 = _UNK_014e0d68;
  uVar1 = _DAT_014e0d60;
  *(undefined8 *)(param_1 + 0x2d) = _DAT_014e0d60;
  *(undefined8 *)(param_1 + 0x2f) = uVar2;
  *(undefined8 *)(param_1 + 0x31) = uVar1;
  *(undefined8 *)(param_1 + 0x33) = uVar2;
  *(undefined8 *)((long)param_1 + 0xcd) = uVar1;
  *(undefined8 *)((long)param_1 + 0xd5) = uVar2;
  *(undefined4 *)((long)param_1 + 0xde) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xe2) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xe6) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xea) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xee) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xf2) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xf6) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xfa) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xfe) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x102) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x106) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x10a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x10e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x112) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x116) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x11a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x11e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x122) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x126) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x12a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x12e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x132) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x136) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x13a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x13e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x142) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x146) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x14a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x14e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x152) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x156) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x15a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x15e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x162) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x166) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x16a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x16e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x172) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x176) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x17a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x17e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x182) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x186) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x18a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x18e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x192) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x196) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x19a) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x19e) = 0;
  param_1[0x68] = 0x7f7fffff;
  param_1[0x6b] = 0;
  *(undefined8 *)(param_1 + 0x69) = 0;
  *(undefined8 *)(param_1 + 0x6c) = uVar3;
  *(undefined8 *)(param_1 + 0x6e) = uVar4;
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  *(undefined8 *)(param_1 + 0x72) = uVar4;
  *(undefined8 *)(param_1 + 0x74) = uVar3;
  *(undefined8 *)(param_1 + 0x76) = uVar4;
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(undefined8 *)(param_1 + 0x7a) = uVar4;
  *(undefined8 *)(param_1 + 0x7c) = uVar3;
  *(undefined8 *)(param_1 + 0x7e) = uVar4;
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(undefined8 *)(param_1 + 0x82) = uVar4;
  *(undefined8 *)(param_1 + 0x84) = uVar3;
  *(undefined8 *)(param_1 + 0x86) = uVar4;
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x8a) = uVar4;
  *(undefined8 *)(param_1 + 0x8c) = uVar3;
  *(undefined8 *)(param_1 + 0x8e) = uVar4;
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  *(undefined8 *)(param_1 + 0x92) = uVar4;
  param_1[0x94] = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x95) = uVar1;
  *(undefined8 *)(param_1 + 0x97) = uVar2;
  *(undefined8 *)(param_1 + 0x99) = uVar1;
  *(undefined8 *)(param_1 + 0x9b) = uVar2;
  *(undefined8 *)((long)param_1 + 0x26d) = uVar1;
  *(undefined8 *)((long)param_1 + 0x275) = uVar2;
  *(undefined4 *)((long)param_1 + 0x32e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x332) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x336) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x33a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x31e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x322) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x326) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x32a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x30e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x312) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x316) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x31a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2fe) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x302) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x306) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x30a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2ee) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2f2) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2f6) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2fa) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2de) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2e2) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2e6) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2ea) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2ce) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2d2) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2d6) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2da) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2be) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2c2) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2c6) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2ca) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2ae) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2b2) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2b6) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2ba) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x29e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2a2) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2a6) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2aa) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x28e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x292) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x296) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x29a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x27e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x282) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x286) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x28a) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x33e) = 0;
  param_1[0xd0] = 0x7f7fffff;
  param_1[0xd3] = 0;
  *(undefined8 *)(param_1 + 0xd1) = 0;
  *(undefined8 *)(param_1 + 0xd4) = uVar3;
  *(undefined8 *)(param_1 + 0xd6) = uVar4;
  *(undefined8 *)(param_1 + 0xd8) = uVar3;
  *(undefined8 *)(param_1 + 0xda) = uVar4;
  *(undefined8 *)(param_1 + 0xdc) = uVar3;
  *(undefined8 *)(param_1 + 0xde) = uVar4;
  *(undefined8 *)(param_1 + 0xe0) = uVar3;
  *(undefined8 *)(param_1 + 0xe2) = uVar4;
  *(undefined8 *)(param_1 + 0xe4) = uVar3;
  *(undefined8 *)(param_1 + 0xe6) = uVar4;
  *(undefined8 *)(param_1 + 0xe8) = uVar3;
  *(undefined8 *)(param_1 + 0xea) = uVar4;
  *(undefined8 *)(param_1 + 0xec) = uVar3;
  *(undefined8 *)(param_1 + 0xee) = uVar4;
  *(undefined8 *)(param_1 + 0xf0) = uVar3;
  *(undefined8 *)(param_1 + 0xf2) = uVar4;
  *(undefined8 *)(param_1 + 0xf4) = uVar3;
  *(undefined8 *)(param_1 + 0xf6) = uVar4;
  *(undefined8 *)(param_1 + 0xf8) = uVar3;
  *(undefined8 *)(param_1 + 0xfa) = uVar4;
  param_1[0xfc] = 0x7f7fffff;
  *(undefined8 *)((long)param_1 + 0x40d) = uVar1;
  *(undefined8 *)((long)param_1 + 0x415) = uVar2;
  *(undefined8 *)(param_1 + 0x101) = uVar1;
  *(undefined8 *)(param_1 + 0x103) = uVar2;
  *(undefined8 *)(param_1 + 0xfd) = uVar1;
  *(undefined8 *)(param_1 + 0xff) = uVar2;
  *(undefined4 *)((long)param_1 + 0x4ce) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x4d2) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x4d6) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x4da) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x4be) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x4c2) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x4c6) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x4ca) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x4ae) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x4b2) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x4b6) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x4ba) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x49e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x4a2) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x4a6) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x4aa) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x48e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x492) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x496) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x49a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x47e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x482) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x486) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x48a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x46e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x472) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x476) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x47a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x45e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x462) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x466) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x46a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x44e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x452) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x456) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x45a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x43e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x442) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x446) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x44a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x42e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x432) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x436) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x43a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x41e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x422) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x426) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x42a) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x4de) = 0;
  param_1[0x138] = 0x7f7fffff;
  param_1[0x13b] = 0;
  *(undefined8 *)(param_1 + 0x139) = 0;
  *(undefined8 *)(param_1 + 0x13c) = uVar3;
  *(undefined8 *)(param_1 + 0x13e) = uVar4;
  *(undefined8 *)(param_1 + 0x140) = uVar3;
  *(undefined8 *)(param_1 + 0x142) = uVar4;
  *(undefined8 *)(param_1 + 0x144) = uVar3;
  *(undefined8 *)(param_1 + 0x146) = uVar4;
  *(undefined8 *)(param_1 + 0x148) = uVar3;
  *(undefined8 *)(param_1 + 0x14a) = uVar4;
  *(undefined8 *)(param_1 + 0x14c) = uVar3;
  *(undefined8 *)(param_1 + 0x14e) = uVar4;
  *(undefined8 *)(param_1 + 0x150) = uVar3;
  *(undefined8 *)(param_1 + 0x152) = uVar4;
  *(undefined8 *)(param_1 + 0x154) = uVar3;
  *(undefined8 *)(param_1 + 0x156) = uVar4;
  *(undefined8 *)(param_1 + 0x158) = uVar3;
  *(undefined8 *)(param_1 + 0x15a) = uVar4;
  *(undefined8 *)(param_1 + 0x15c) = uVar3;
  *(undefined8 *)(param_1 + 0x15e) = uVar4;
  *(undefined8 *)(param_1 + 0x160) = uVar3;
  *(undefined8 *)(param_1 + 0x162) = uVar4;
  param_1[0x164] = 0x7f7fffff;
  *(undefined8 *)((long)param_1 + 0x5ad) = uVar1;
  *(undefined8 *)((long)param_1 + 0x5b5) = uVar2;
  *(undefined8 *)(param_1 + 0x169) = uVar1;
  *(undefined8 *)(param_1 + 0x16b) = uVar2;
  *(undefined8 *)(param_1 + 0x165) = uVar1;
  *(undefined8 *)(param_1 + 0x167) = uVar2;
  *(undefined4 *)((long)param_1 + 0x66e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x672) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x676) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x67a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x65e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x662) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x666) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x66a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x64e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x652) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x656) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x65a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x63e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x642) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x646) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x64a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x62e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x632) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x636) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x63a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x61e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x622) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x626) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x62a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x60e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x612) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x616) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x61a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5fe) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x602) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x606) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x60a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5ee) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5f2) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5f6) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5fa) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5de) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5e2) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5e6) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5ea) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5ce) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5d2) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5d6) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5da) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5be) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5c2) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5c6) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5ca) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x67e) = 0;
  return;
}


```

### Assembly

```asm
0525eca0  MOV dword ptr [RDI],0x7f7fffff
0525eca6  MOV qword ptr [RDI + 0x4],0x0
0525ecae  MOV dword ptr [RDI + 0xc],0x0
0525ecb5  MOVAPS XMM0,xmmword ptr [0x014e2230]
0525ecbc  MOVUPS xmmword ptr [RDI + 0x10],XMM0
0525ecc0  MOVUPS xmmword ptr [RDI + 0x20],XMM0
0525ecc4  MOVUPS xmmword ptr [RDI + 0x30],XMM0
0525ecc8  MOVUPS xmmword ptr [RDI + 0x40],XMM0
0525eccc  MOVUPS xmmword ptr [RDI + 0x50],XMM0
0525ecd0  MOVUPS xmmword ptr [RDI + 0x60],XMM0
0525ecd4  MOVUPS xmmword ptr [RDI + 0x70],XMM0
0525ecd8  MOVUPS xmmword ptr [RDI + 0x80],XMM0
0525ecdf  MOVUPS xmmword ptr [RDI + 0x90],XMM0
0525ece6  MOVUPS xmmword ptr [RDI + 0xa0],XMM0
0525eced  MOV dword ptr [RDI + 0xb0],0x7f7fffff
0525ecf7  MOVAPS XMM2,xmmword ptr [0x014e0d60]
0525ecfe  MOVUPS xmmword ptr [RDI + 0xb4],XMM2
0525ed05  MOVUPS xmmword ptr [RDI + 0xc4],XMM2
0525ed0c  MOVUPS xmmword ptr [RDI + 0xcd],XMM2
0525ed13  PCMPEQD XMM1,XMM1
0525ed17  MOVDQU xmmword ptr [RDI + 0xde],XMM1
0525ed1f  MOVDQU xmmword ptr [RDI + 0xee],XMM1
0525ed27  MOVDQU xmmword ptr [RDI + 0xfe],XMM1
0525ed2f  MOVDQU xmmword ptr [RDI + 0x10e],XMM1
0525ed37  MOVDQU xmmword ptr [RDI + 0x11e],XMM1
0525ed3f  MOVDQU xmmword ptr [RDI + 0x12e],XMM1
0525ed47  MOVDQU xmmword ptr [RDI + 0x13e],XMM1
0525ed4f  MOVDQU xmmword ptr [RDI + 0x14e],XMM1
0525ed57  MOVDQU xmmword ptr [RDI + 0x15e],XMM1
0525ed5f  MOVDQU xmmword ptr [RDI + 0x16e],XMM1
0525ed67  MOVDQU xmmword ptr [RDI + 0x17e],XMM1
0525ed6f  MOVDQU xmmword ptr [RDI + 0x18e],XMM1
0525ed77  MOV word ptr [RDI + 0x19e],0x0
0525ed80  MOV dword ptr [RDI + 0x1a0],0x7f7fffff
0525ed8a  MOV dword ptr [RDI + 0x1ac],0x0
0525ed94  MOV qword ptr [RDI + 0x1a4],0x0
0525ed9f  MOVUPS xmmword ptr [RDI + 0x1b0],XMM0
0525eda6  MOVUPS xmmword ptr [RDI + 0x1c0],XMM0
0525edad  MOVUPS xmmword ptr [RDI + 0x1d0],XMM0
0525edb4  MOVUPS xmmword ptr [RDI + 0x1e0],XMM0
0525edbb  MOVUPS xmmword ptr [RDI + 0x1f0],XMM0
0525edc2  MOVUPS xmmword ptr [RDI + 0x200],XMM0
0525edc9  MOVUPS xmmword ptr [RDI + 0x210],XMM0
0525edd0  MOVUPS xmmword ptr [RDI + 0x220],XMM0
0525edd7  MOVUPS xmmword ptr [RDI + 0x230],XMM0
0525edde  MOVUPS xmmword ptr [RDI + 0x240],XMM0
0525ede5  MOV dword ptr [RDI + 0x250],0x7f7fffff
0525edef  MOVUPS xmmword ptr [RDI + 0x254],XMM2
0525edf6  MOVUPS xmmword ptr [RDI + 0x264],XMM2
0525edfd  MOVUPS xmmword ptr [RDI + 0x26d],XMM2
0525ee04  MOVDQU xmmword ptr [RDI + 0x32e],XMM1
0525ee0c  MOVDQU xmmword ptr [RDI + 0x31e],XMM1
0525ee14  MOVDQU xmmword ptr [RDI + 0x30e],XMM1
0525ee1c  MOVDQU xmmword ptr [RDI + 0x2fe],XMM1
0525ee24  MOVDQU xmmword ptr [RDI + 0x2ee],XMM1
0525ee2c  MOVDQU xmmword ptr [RDI + 0x2de],XMM1
0525ee34  MOVDQU xmmword ptr [RDI + 0x2ce],XMM1
0525ee3c  MOVDQU xmmword ptr [RDI + 0x2be],XMM1
0525ee44  MOVDQU xmmword ptr [RDI + 0x2ae],XMM1
0525ee4c  MOVDQU xmmword ptr [RDI + 0x29e],XMM1
0525ee54  MOVDQU xmmword ptr [RDI + 0x28e],XMM1
0525ee5c  MOVDQU xmmword ptr [RDI + 0x27e],XMM1
0525ee64  MOV word ptr [RDI + 0x33e],0x0
0525ee6d  MOV dword ptr [RDI + 0x340],0x7f7fffff
0525ee77  MOV dword ptr [RDI + 0x34c],0x0
0525ee81  MOV qword ptr [RDI + 0x344],0x0
0525ee8c  MOVUPS xmmword ptr [RDI + 0x350],XMM0
0525ee93  MOVUPS xmmword ptr [RDI + 0x360],XMM0
0525ee9a  MOVUPS xmmword ptr [RDI + 0x370],XMM0
0525eea1  MOVUPS xmmword ptr [RDI + 0x380],XMM0
0525eea8  MOVUPS xmmword ptr [RDI + 0x390],XMM0
0525eeaf  MOVUPS xmmword ptr [RDI + 0x3a0],XMM0
0525eeb6  MOVUPS xmmword ptr [RDI + 0x3b0],XMM0
0525eebd  MOVUPS xmmword ptr [RDI + 0x3c0],XMM0
0525eec4  MOVUPS xmmword ptr [RDI + 0x3d0],XMM0
0525eecb  MOVUPS xmmword ptr [RDI + 0x3e0],XMM0
0525eed2  MOV dword ptr [RDI + 0x3f0],0x7f7fffff
0525eedc  MOVUPS xmmword ptr [RDI + 0x40d],XMM2
0525eee3  MOVUPS xmmword ptr [RDI + 0x404],XMM2
0525eeea  MOVUPS xmmword ptr [RDI + 0x3f4],XMM2
0525eef1  MOVDQU xmmword ptr [RDI + 0x4ce],XMM1
0525eef9  MOVDQU xmmword ptr [RDI + 0x4be],XMM1
0525ef01  MOVDQU xmmword ptr [RDI + 0x4ae],XMM1
0525ef09  MOVDQU xmmword ptr [RDI + 0x49e],XMM1
0525ef11  MOVDQU xmmword ptr [RDI + 0x48e],XMM1
0525ef19  MOVDQU xmmword ptr [RDI + 0x47e],XMM1
0525ef21  MOVDQU xmmword ptr [RDI + 0x46e],XMM1
0525ef29  MOVDQU xmmword ptr [RDI + 0x45e],XMM1
0525ef31  MOVDQU xmmword ptr [RDI + 0x44e],XMM1
0525ef39  MOVDQU xmmword ptr [RDI + 0x43e],XMM1
0525ef41  MOVDQU xmmword ptr [RDI + 0x42e],XMM1
0525ef49  MOVDQU xmmword ptr [RDI + 0x41e],XMM1
0525ef51  MOV word ptr [RDI + 0x4de],0x0
0525ef5a  MOV dword ptr [RDI + 0x4e0],0x7f7fffff
0525ef64  MOV dword ptr [RDI + 0x4ec],0x0
0525ef6e  MOV qword ptr [RDI + 0x4e4],0x0
0525ef79  MOVUPS xmmword ptr [RDI + 0x4f0],XMM0
0525ef80  MOVUPS xmmword ptr [RDI + 0x500],XMM0
0525ef87  MOVUPS xmmword ptr [RDI + 0x510],XMM0
0525ef8e  MOVUPS xmmword ptr [RDI + 0x520],XMM0
0525ef95  MOVUPS xmmword ptr [RDI + 0x530],XMM0
0525ef9c  MOVUPS xmmword ptr [RDI + 0x540],XMM0
0525efa3  MOVUPS xmmword ptr [RDI + 0x550],XMM0
0525efaa  MOVUPS xmmword ptr [RDI + 0x560],XMM0
0525efb1  MOVUPS xmmword ptr [RDI + 0x570],XMM0
0525efb8  MOVUPS xmmword ptr [RDI + 0x580],XMM0
0525efbf  MOV dword ptr [RDI + 0x590],0x7f7fffff
0525efc9  MOVUPS xmmword ptr [RDI + 0x5ad],XMM2
0525efd0  MOVUPS xmmword ptr [RDI + 0x5a4],XMM2
0525efd7  MOVUPS xmmword ptr [RDI + 0x594],XMM2
0525efde  MOVDQU xmmword ptr [RDI + 0x66e],XMM1
0525efe6  MOVDQU xmmword ptr [RDI + 0x65e],XMM1
0525efee  MOVDQU xmmword ptr [RDI + 0x64e],XMM1
0525eff6  MOVDQU xmmword ptr [RDI + 0x63e],XMM1
0525effe  MOVDQU xmmword ptr [RDI + 0x62e],XMM1
0525f006  MOVDQU xmmword ptr [RDI + 0x61e],XMM1
0525f00e  MOVDQU xmmword ptr [RDI + 0x60e],XMM1
0525f016  MOVDQU xmmword ptr [RDI + 0x5fe],XMM1
0525f01e  MOVDQU xmmword ptr [RDI + 0x5ee],XMM1
0525f026  MOVDQU xmmword ptr [RDI + 0x5de],XMM1
0525f02e  MOVDQU xmmword ptr [RDI + 0x5ce],XMM1
0525f036  MOVDQU xmmword ptr [RDI + 0x5be],XMM1
0525f03e  MOV word ptr [RDI + 0x67e],0x0
0525f047  RET
```

## `0525f060` — depth 2 from FUN_0525af30 (root OverworldGeneratorMultinoise___prepareHeights)

- Ghidra name: `FUN_0525f060`
- Body: `[[0525f060, 0525f391]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0525f060(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = _UNK_014e2238;
  uVar2 = _DAT_014e2230;
  *param_1 = _DAT_014e2230;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  param_1[0x10] = uVar2;
  param_1[0x11] = uVar3;
  param_1[0x12] = uVar2;
  param_1[0x13] = uVar3;
  uVar1 = _DAT_014e1d80;
  param_1[0x14] = _DAT_014e1d80;
  *(undefined4 *)(param_1 + 0x15) = 0x7f7fffff;
  *(undefined4 *)((long)param_1 + 0xac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xb4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xbc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xc4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xcc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xdc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xe4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xf4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xfc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x104) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x10c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x114) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x11c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x124) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 300) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x134) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x13c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x144) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x14c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x154) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x15c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x164) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x185) = 0;
  *(undefined8 *)((long)param_1 + 0x18d) = 0;
  *(undefined8 *)((long)param_1 + 0x17c) = 0;
  *(undefined8 *)((long)param_1 + 0x184) = 0;
  *(undefined8 *)((long)param_1 + 0x16c) = 0;
  *(undefined8 *)((long)param_1 + 0x174) = 0;
  param_1[0x33] = uVar2;
  param_1[0x34] = uVar3;
  param_1[0x35] = uVar2;
  param_1[0x36] = uVar3;
  param_1[0x37] = uVar2;
  param_1[0x38] = uVar3;
  param_1[0x39] = uVar2;
  param_1[0x3a] = uVar3;
  param_1[0x3b] = uVar2;
  param_1[0x3c] = uVar3;
  param_1[0x3d] = uVar2;
  param_1[0x3e] = uVar3;
  param_1[0x3f] = uVar2;
  param_1[0x40] = uVar3;
  param_1[0x41] = uVar2;
  param_1[0x42] = uVar3;
  param_1[0x43] = uVar2;
  param_1[0x44] = uVar3;
  param_1[0x45] = uVar2;
  param_1[0x46] = uVar3;
  param_1[0x47] = uVar1;
  *(undefined4 *)(param_1 + 0x48) = 0x7f7fffff;
  *(undefined4 *)((long)param_1 + 0x244) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x49) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x24c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x254) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4b) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x25c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x264) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4d) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x26c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x274) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4f) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x27c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x284) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x51) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x28c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x52) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x294) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x53) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x29c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x55) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2b4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x57) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 700) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2c4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x59) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2d4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5b) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2dc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2e4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5d) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2ec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2f4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5f) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2fc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x31d) = 0;
  *(undefined8 *)((long)param_1 + 0x325) = 0;
  *(undefined8 *)((long)param_1 + 0x314) = 0;
  *(undefined8 *)((long)param_1 + 0x31c) = 0;
  *(undefined8 *)((long)param_1 + 0x304) = 0;
  *(undefined8 *)((long)param_1 + 0x30c) = 0;
  param_1[0x66] = uVar2;
  param_1[0x67] = uVar3;
  param_1[0x68] = uVar2;
  param_1[0x69] = uVar3;
  param_1[0x6a] = uVar2;
  param_1[0x6b] = uVar3;
  param_1[0x6c] = uVar2;
  param_1[0x6d] = uVar3;
  param_1[0x6e] = uVar2;
  param_1[0x6f] = uVar3;
  param_1[0x70] = uVar2;
  param_1[0x71] = uVar3;
  param_1[0x72] = uVar2;
  param_1[0x73] = uVar3;
  param_1[0x74] = uVar2;
  param_1[0x75] = uVar3;
  param_1[0x76] = uVar2;
  param_1[0x77] = uVar3;
  param_1[0x78] = uVar2;
  param_1[0x79] = uVar3;
  param_1[0x7a] = uVar1;
  *(undefined4 *)(param_1 + 0x7b) = 0x7f7fffff;
  *(undefined4 *)((long)param_1 + 0x3dc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x3e4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7d) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x3ec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x3f4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7f) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x3fc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x404) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x81) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x40c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x82) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x414) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x83) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x41c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x424) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x85) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x42c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x86) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x434) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x87) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x43c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x444) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x89) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x44c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x454) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8b) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x45c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x464) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8d) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x46c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x474) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8f) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x47c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x484) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x91) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x48c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x92) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x494) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x93) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x4b5) = 0;
  *(undefined8 *)((long)param_1 + 0x4bd) = 0;
  *(undefined8 *)((long)param_1 + 0x4ac) = 0;
  *(undefined8 *)((long)param_1 + 0x4b4) = 0;
  *(undefined8 *)((long)param_1 + 0x49c) = 0;
  *(undefined8 *)((long)param_1 + 0x4a4) = 0;
  param_1[0x99] = uVar2;
  param_1[0x9a] = uVar3;
  param_1[0x9b] = uVar2;
  param_1[0x9c] = uVar3;
  param_1[0x9d] = uVar2;
  param_1[0x9e] = uVar3;
  param_1[0x9f] = uVar2;
  param_1[0xa0] = uVar3;
  param_1[0xa1] = uVar2;
  param_1[0xa2] = uVar3;
  param_1[0xa3] = uVar2;
  param_1[0xa4] = uVar3;
  param_1[0xa5] = uVar2;
  param_1[0xa6] = uVar3;
  param_1[0xa7] = uVar2;
  param_1[0xa8] = uVar3;
  param_1[0xa9] = uVar2;
  param_1[0xaa] = uVar3;
  param_1[0xab] = uVar2;
  param_1[0xac] = uVar3;
  param_1[0xad] = uVar1;
  *(undefined4 *)(param_1 + 0xae) = 0x7f7fffff;
  *(undefined4 *)((long)param_1 + 0x624) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc5) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x62c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc6) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x614) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc3) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x61c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x604) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc1) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x60c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc2) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5f4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbf) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5fc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5e4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbd) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5ec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbe) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5d4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbb) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5dc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5c4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb9) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xba) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5b4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb7) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5bc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb5) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb6) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x594) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb3) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x59c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x584) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb1) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x58c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb2) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x574) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xaf) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x57c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x64d) = 0;
  *(undefined8 *)((long)param_1 + 0x655) = 0;
  *(undefined8 *)((long)param_1 + 0x644) = 0;
  *(undefined8 *)((long)param_1 + 0x64c) = 0;
  *(undefined8 *)((long)param_1 + 0x634) = 0;
  *(undefined8 *)((long)param_1 + 0x63c) = 0;
  return;
}


```

### Assembly

```asm
0525f060  MOVAPS XMM0,xmmword ptr [0x014e2230]
0525f067  MOVUPS xmmword ptr [RDI],XMM0
0525f06a  MOVUPS xmmword ptr [RDI + 0x10],XMM0
0525f06e  MOVUPS xmmword ptr [RDI + 0x20],XMM0
0525f072  MOVUPS xmmword ptr [RDI + 0x30],XMM0
0525f076  MOVUPS xmmword ptr [RDI + 0x40],XMM0
0525f07a  MOVUPS xmmword ptr [RDI + 0x50],XMM0
0525f07e  MOVUPS xmmword ptr [RDI + 0x60],XMM0
0525f082  MOVUPS xmmword ptr [RDI + 0x70],XMM0
0525f086  MOVUPS xmmword ptr [RDI + 0x80],XMM0
0525f08d  MOVUPS xmmword ptr [RDI + 0x90],XMM0
0525f094  MOVSD XMM2,qword ptr [0x014e1d80]
0525f09c  MOVSD qword ptr [RDI + 0xa0],XMM2
0525f0a4  MOV dword ptr [RDI + 0xa8],0x7f7fffff
0525f0ae  PCMPEQD XMM1,XMM1
0525f0b2  MOVDQU xmmword ptr [RDI + 0xac],XMM1
0525f0ba  MOVDQU xmmword ptr [RDI + 0xbc],XMM1
0525f0c2  MOVDQU xmmword ptr [RDI + 0xcc],XMM1
0525f0ca  MOVDQU xmmword ptr [RDI + 0xdc],XMM1
0525f0d2  MOVDQU xmmword ptr [RDI + 0xec],XMM1
0525f0da  MOVDQU xmmword ptr [RDI + 0xfc],XMM1
0525f0e2  MOVDQU xmmword ptr [RDI + 0x10c],XMM1
0525f0ea  MOVDQU xmmword ptr [RDI + 0x11c],XMM1
0525f0f2  MOVDQU xmmword ptr [RDI + 0x12c],XMM1
0525f0fa  MOVDQU xmmword ptr [RDI + 0x13c],XMM1
0525f102  MOVDQU xmmword ptr [RDI + 0x14c],XMM1
0525f10a  MOVDQU xmmword ptr [RDI + 0x15c],XMM1
0525f112  XORPS XMM3,XMM3
0525f115  MOVUPS xmmword ptr [RDI + 0x185],XMM3
0525f11c  MOVUPS xmmword ptr [RDI + 0x17c],XMM3
0525f123  MOVUPS xmmword ptr [RDI + 0x16c],XMM3
0525f12a  MOVUPS xmmword ptr [RDI + 0x198],XMM0
0525f131  MOVUPS xmmword ptr [RDI + 0x1a8],XMM0
0525f138  MOVUPS xmmword ptr [RDI + 0x1b8],XMM0
0525f13f  MOVUPS xmmword ptr [RDI + 0x1c8],XMM0
0525f146  MOVUPS xmmword ptr [RDI + 0x1d8],XMM0
0525f14d  MOVUPS xmmword ptr [RDI + 0x1e8],XMM0
0525f154  MOVUPS xmmword ptr [RDI + 0x1f8],XMM0
0525f15b  MOVUPS xmmword ptr [RDI + 0x208],XMM0
0525f162  MOVUPS xmmword ptr [RDI + 0x218],XMM0
0525f169  MOVUPS xmmword ptr [RDI + 0x228],XMM0
0525f170  MOVSD qword ptr [RDI + 0x238],XMM2
0525f178  MOV dword ptr [RDI + 0x240],0x7f7fffff
0525f182  MOVDQU xmmword ptr [RDI + 0x244],XMM1
0525f18a  MOVDQU xmmword ptr [RDI + 0x254],XMM1
0525f192  MOVDQU xmmword ptr [RDI + 0x264],XMM1
0525f19a  MOVDQU xmmword ptr [RDI + 0x274],XMM1
0525f1a2  MOVDQU xmmword ptr [RDI + 0x284],XMM1
0525f1aa  MOVDQU xmmword ptr [RDI + 0x294],XMM1
0525f1b2  MOVDQU xmmword ptr [RDI + 0x2a4],XMM1
0525f1ba  MOVDQU xmmword ptr [RDI + 0x2b4],XMM1
0525f1c2  MOVDQU xmmword ptr [RDI + 0x2c4],XMM1
0525f1ca  MOVDQU xmmword ptr [RDI + 0x2d4],XMM1
0525f1d2  MOVDQU xmmword ptr [RDI + 0x2e4],XMM1
0525f1da  MOVDQU xmmword ptr [RDI + 0x2f4],XMM1
0525f1e2  MOVUPS xmmword ptr [RDI + 0x31d],XMM3
0525f1e9  MOVUPS xmmword ptr [RDI + 0x314],XMM3
0525f1f0  MOVUPS xmmword ptr [RDI + 0x304],XMM3
0525f1f7  MOVUPS xmmword ptr [RDI + 0x330],XMM0
0525f1fe  MOVUPS xmmword ptr [RDI + 0x340],XMM0
0525f205  MOVUPS xmmword ptr [RDI + 0x350],XMM0
0525f20c  MOVUPS xmmword ptr [RDI + 0x360],XMM0
0525f213  MOVUPS xmmword ptr [RDI + 0x370],XMM0
0525f21a  MOVUPS xmmword ptr [RDI + 0x380],XMM0
0525f221  MOVUPS xmmword ptr [RDI + 0x390],XMM0
0525f228  MOVUPS xmmword ptr [RDI + 0x3a0],XMM0
0525f22f  MOVUPS xmmword ptr [RDI + 0x3b0],XMM0
0525f236  MOVUPS xmmword ptr [RDI + 0x3c0],XMM0
0525f23d  MOVSD qword ptr [RDI + 0x3d0],XMM2
0525f245  MOV dword ptr [RDI + 0x3d8],0x7f7fffff
0525f24f  MOVDQU xmmword ptr [RDI + 0x3dc],XMM1
0525f257  MOVDQU xmmword ptr [RDI + 0x3ec],XMM1
0525f25f  MOVDQU xmmword ptr [RDI + 0x3fc],XMM1
0525f267  MOVDQU xmmword ptr [RDI + 0x40c],XMM1
0525f26f  MOVDQU xmmword ptr [RDI + 0x41c],XMM1
0525f277  MOVDQU xmmword ptr [RDI + 0x42c],XMM1
0525f27f  MOVDQU xmmword ptr [RDI + 0x43c],XMM1
0525f287  MOVDQU xmmword ptr [RDI + 0x44c],XMM1
0525f28f  MOVDQU xmmword ptr [RDI + 0x45c],XMM1
0525f297  MOVDQU xmmword ptr [RDI + 0x46c],XMM1
0525f29f  MOVDQU xmmword ptr [RDI + 0x47c],XMM1
0525f2a7  MOVDQU xmmword ptr [RDI + 0x48c],XMM1
0525f2af  MOVUPS xmmword ptr [RDI + 0x4b5],XMM3
0525f2b6  MOVUPS xmmword ptr [RDI + 0x4ac],XMM3
0525f2bd  MOVUPS xmmword ptr [RDI + 0x49c],XMM3
0525f2c4  MOVUPS xmmword ptr [RDI + 0x4c8],XMM0
0525f2cb  MOVUPS xmmword ptr [RDI + 0x4d8],XMM0
0525f2d2  MOVUPS xmmword ptr [RDI + 0x4e8],XMM0
0525f2d9  MOVUPS xmmword ptr [RDI + 0x4f8],XMM0
0525f2e0  MOVUPS xmmword ptr [RDI + 0x508],XMM0
0525f2e7  MOVUPS xmmword ptr [RDI + 0x518],XMM0
0525f2ee  MOVUPS xmmword ptr [RDI + 0x528],XMM0
0525f2f5  MOVUPS xmmword ptr [RDI + 0x538],XMM0
0525f2fc  MOVUPS xmmword ptr [RDI + 0x548],XMM0
0525f303  MOVUPS xmmword ptr [RDI + 0x558],XMM0
0525f30a  MOVSD qword ptr [RDI + 0x568],XMM2
0525f312  MOV dword ptr [RDI + 0x570],0x7f7fffff
0525f31c  MOVDQU xmmword ptr [RDI + 0x624],XMM1
0525f324  MOVDQU xmmword ptr [RDI + 0x614],XMM1
0525f32c  MOVDQU xmmword ptr [RDI + 0x604],XMM1
0525f334  MOVDQU xmmword ptr [RDI + 0x5f4],XMM1
0525f33c  MOVDQU xmmword ptr [RDI + 0x5e4],XMM1
0525f344  MOVDQU xmmword ptr [RDI + 0x5d4],XMM1
0525f34c  MOVDQU xmmword ptr [RDI + 0x5c4],XMM1
0525f354  MOVDQU xmmword ptr [RDI + 0x5b4],XMM1
0525f35c  MOVDQU xmmword ptr [RDI + 0x5a4],XMM1
0525f364  MOVDQU xmmword ptr [RDI + 0x594],XMM1
0525f36c  MOVDQU xmmword ptr [RDI + 0x584],XMM1
0525f374  MOVDQU xmmword ptr [RDI + 0x574],XMM1
0525f37c  MOVUPS xmmword ptr [RDI + 0x64d],XMM3
0525f383  MOVUPS xmmword ptr [RDI + 0x644],XMM3
0525f38a  MOVUPS xmmword ptr [RDI + 0x634],XMM3
0525f391  RET
```

## `0525f970` — depth 2 from FUN_0525af30 (root OverworldGeneratorMultinoise___prepareHeights)

- Ghidra name: `FUN_0525f970`
- Body: `[[0525f970, 0525fa0e] [0525fa10, 0525fab2] [0525fac0, 0525fb4b]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0525f970(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  
  if (param_2 == 0) {
    lVar1 = *param_1;
    *param_1 = 0;
    if (lVar1 != 0) {
      func_0x0412a280(lVar1,param_1[1] << 3);
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x04882eb0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar1 = param_2 * 8;
    lVar4 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar1);
    if (lVar4 == 0) {
      func_0x0eec74c0(lVar1,0);
      lVar2 = *param_1;
      *param_1 = 0;
    }
    else {
      lVar2 = *param_1;
      *param_1 = lVar4;
    }
    if (lVar2 != 0) {
      func_0x0412a280(lVar2,param_1[1] << 3);
      lVar4 = *param_1;
    }
    param_1[1] = param_2;
    func_0x0eee2dd0(lVar4,0,lVar1);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      uVar5 = plVar7[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        *(long **)(lVar4 + (uVar5 & uVar6) * 8) = param_1 + 2;
        uVar5 = uVar5 & uVar6;
        while (plVar9 = plVar7, plVar7 = (long *)*plVar9, plVar7 != (long *)0x0) {
          uVar8 = plVar7[1] & uVar6;
          if (uVar8 != uVar5) {
            if (*(long *)(lVar4 + uVar8 * 8) == 0) {
              *(long **)(lVar4 + uVar8 * 8) = plVar9;
              uVar5 = uVar8;
            }
            else {
              *plVar9 = *plVar7;
              *plVar7 = **(undefined8 **)(lVar4 + uVar8 * 8);
              **(long **)(lVar4 + uVar8 * 8) = (long)plVar7;
              plVar7 = plVar9;
            }
          }
        }
      }
      else {
        if (param_2 <= uVar5) {
          if ((uVar5 | param_2) >> 0x20 == 0) {
            uVar5 = (uVar5 & 0xffffffff) % (param_2 & 0xffffffff);
          }
          else {
            uVar5 = uVar5 % param_2;
          }
        }
        *(long **)(lVar4 + uVar5 * 8) = param_1 + 2;
        plVar9 = (long *)*plVar7;
        while (plVar9 != (long *)0x0) {
          uVar6 = plVar9[1];
          if (param_2 <= uVar6) {
            if ((uVar6 | param_2) >> 0x20 == 0) {
              uVar6 = (uVar6 & 0xffffffff) % (param_2 & 0xffffffff);
            }
            else {
              uVar6 = uVar6 % param_2;
            }
          }
          if (uVar6 != uVar5) {
            if (*(long *)(lVar4 + uVar6 * 8) == 0) {
              *(long **)(lVar4 + uVar6 * 8) = plVar7;
              uVar5 = uVar6;
            }
            else {
              *plVar7 = *plVar9;
              *plVar9 = **(long **)(lVar4 + uVar6 * 8);
              **(undefined8 **)(lVar4 + uVar6 * 8) = plVar9;
              plVar9 = plVar7;
            }
          }
          plVar7 = plVar9;
          plVar9 = (long *)*plVar7;
        }
      }
    }
  }
  return;
}


```

### Assembly

```asm
0525f970  PUSH R15
0525f972  PUSH R14
0525f974  PUSH R12
0525f976  PUSH RBX
0525f977  PUSH RAX
0525f978  MOV R15,RDI
0525f97b  TEST RSI,RSI
0525f97e  JZ 0x0525fa53
0525f984  MOV R14,RSI
0525f987  MOV RAX,RSI
0525f98a  SHR RAX,0x3d
0525f98e  JNZ 0x0525fb46
0525f994  LEA R12,[R14*0x8]
0525f99c  MOV RAX,qword ptr [0x0f5463b0]
0525f9a3  LEA RDI,[0xf5463b0]
0525f9aa  MOV RSI,R12
0525f9ad  CALL qword ptr [RAX + 0x10]
0525f9b0  MOV RBX,RAX
0525f9b3  TEST RAX,RAX
0525f9b6  JZ 0x0525fb28
0525f9bc  MOV RDI,qword ptr [R15]
0525f9bf  MOV qword ptr [R15],RBX
0525f9c2  TEST RDI,RDI
0525f9c5  JZ 0x0525f9d7
0525f9c7  MOV RSI,qword ptr [R15 + 0x8]
0525f9cb  SHL RSI,0x3
0525f9cf  CALL 0x0412a280
0525f9d4  MOV RBX,qword ptr [R15]
0525f9d7  MOV qword ptr [R15 + 0x8],R14
0525f9db  MOV RDI,RBX
0525f9de  XOR ESI,ESI
0525f9e0  MOV RDX,R12
0525f9e3  CALL 0x0eee2dd0
0525f9e8  MOV RSI,qword ptr [R15 + 0x10]
0525f9ec  TEST RSI,RSI
0525f9ef  JZ 0x0525fa77
0525f9f5  ADD R15,0x10
0525f9f9  MOV RCX,qword ptr [RSI + 0x8]
0525f9fd  LEA RAX,[R14 + -0x1]
0525fa01  TEST R14,RAX
0525fa04  JNZ 0x0525fa83
0525fa06  AND RCX,RAX
0525fa09  MOV qword ptr [RBX + RCX*0x8],R15
0525fa0d  JMP 0x0525fa13
0525fa10  MOV RSI,RDX
0525fa13  MOV RDX,qword ptr [RSI]
0525fa16  TEST RDX,RDX
0525fa19  JZ 0x0525fa77
0525fa1b  MOV RDI,qword ptr [RDX + 0x8]
0525fa1f  AND RDI,RAX
0525fa22  CMP RDI,RCX
0525fa25  JZ 0x0525fa10
0525fa27  CMP qword ptr [RBX + RDI*0x8],0x0
0525fa2c  JZ 0x0525fa47
0525fa2e  MOV R8,qword ptr [RDX]
0525fa31  MOV qword ptr [RSI],R8
0525fa34  MOV R8,qword ptr [RBX + RDI*0x8]
0525fa38  MOV R8,qword ptr [R8]
0525fa3b  MOV qword ptr [RDX],R8
0525fa3e  MOV RDI,qword ptr [RBX + RDI*0x8]
0525fa42  MOV qword ptr [RDI],RDX
0525fa45  JMP 0x0525fa13
0525fa47  MOV qword ptr [RBX + RDI*0x8],RSI
0525fa4b  MOV RSI,RDX
0525fa4e  MOV RCX,RDI
0525fa51  JMP 0x0525fa13
0525fa53  MOV RDI,qword ptr [R15]
0525fa56  MOV qword ptr [R15],0x0
0525fa5d  TEST RDI,RDI
0525fa60  JZ 0x0525fa6f
0525fa62  MOV RSI,qword ptr [R15 + 0x8]
0525fa66  SHL RSI,0x3
0525fa6a  CALL 0x0412a280
0525fa6f  MOV qword ptr [R15 + 0x8],0x0
0525fa77  ADD RSP,0x8
0525fa7b  POP RBX
0525fa7c  POP R12
0525fa7e  POP R14
0525fa80  POP R15
0525fa82  RET
0525fa83  CMP RCX,R14
0525fa86  JC 0x0525faaa
0525fa88  MOV RAX,RCX
0525fa8b  OR RAX,R14
0525fa8e  SHR RAX,0x20
0525fa92  JZ 0x0525faa1
0525fa94  MOV RAX,RCX
0525fa97  XOR EDX,EDX
0525fa99  DIV R14
0525fa9c  MOV RCX,RDX
0525fa9f  JMP 0x0525faaa
0525faa1  MOV EAX,ECX
0525faa3  XOR EDX,EDX
0525faa5  DIV R14D
0525faa8  MOV ECX,EDX
0525faaa  MOV qword ptr [RBX + RCX*0x8],R15
0525faae  MOV RDI,qword ptr [RSI]
0525fab1  JMP 0x0525fae6
0525fac0  MOV RDX,qword ptr [RDI]
0525fac3  MOV qword ptr [RSI],RDX
0525fac6  MOV RDX,qword ptr [RBX + RAX*0x8]
0525faca  MOV RDX,qword ptr [RDX]
0525facd  MOV qword ptr [RDI],RDX
0525fad0  MOV RAX,qword ptr [RBX + RAX*0x8]
0525fad4  MOV qword ptr [RAX],RDI
0525fad7  MOV RDI,RSI
0525fada  MOV RAX,RCX
0525fadd  MOV RSI,RDI
0525fae0  MOV RDI,qword ptr [RDI]
0525fae3  MOV RCX,RAX
0525fae6  TEST RDI,RDI
0525fae9  JZ 0x0525fa77
0525faeb  MOV RAX,qword ptr [RDI + 0x8]
0525faef  CMP RAX,R14
0525faf2  JC 0x0525fb08
0525faf4  MOV RDX,RAX
0525faf7  OR RDX,R14
0525fafa  SHR RDX,0x20
0525fafe  JZ 0x0525fb1a
0525fb00  XOR EDX,EDX
0525fb02  DIV R14
0525fb05  MOV RAX,RDX
0525fb08  CMP RAX,RCX
0525fb0b  JZ 0x0525fada
0525fb0d  CMP qword ptr [RBX + RAX*0x8],0x0
0525fb12  JNZ 0x0525fac0
0525fb14  MOV qword ptr [RBX + RAX*0x8],RSI
0525fb18  JMP 0x0525fadd
0525fb1a  XOR EDX,EDX
0525fb1c  DIV R14D
0525fb1f  MOV EAX,EDX
0525fb21  CMP RAX,RCX
0525fb24  JZ 0x0525fada
0525fb26  JMP 0x0525fb0d
0525fb28  MOV RDI,R12
0525fb2b  XOR ESI,ESI
0525fb2d  CALL 0x0eec74c0
0525fb32  MOV RDI,qword ptr [R15]
0525fb35  MOV qword ptr [R15],RBX
0525fb38  TEST RDI,RDI
0525fb3b  JNZ 0x0525f9c7
0525fb41  JMP 0x0525f9d7
0525fb46  CALL 0x04882eb0
0525fb4b  INT3
```

## `0525f050` — depth 2 from FUN_0525af30 (root OverworldGeneratorMultinoise___prepareHeights)

- Ghidra name: `FUN_0525f050`
- Body: `[[0525f050, 0525f05d]]`

### Pseudocode

```c

void FUN_0525f050(void)

{
  code *pcVar1;
  
  func_0x04882e40(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```

### Assembly

```asm
0525f050  PUSH RAX
0525f051  LEA RDI,[0x13f6512]
0525f058  CALL 0x04882e40
0525f05d  INT3
```

## `0525d2e0` — depth 2 from FUN_0525af30 (root OverworldGeneratorMultinoise___prepareHeights)

- Ghidra name: `FUN_0525d2e0`
- Body: `[[0525d2e0, 0525d378]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0525d2e0(long *param_1)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  long in_RAX;
  long lVar5;
  undefined8 uVar6;
  
  plVar2 = (long *)*param_1;
  *param_1 = 0;
  if (plVar2 == (long *)0x0) {
    return in_RAX;
  }
  plVar3 = (long *)plVar2[0xc];
  if (plVar3 == plVar2 + 8) {
    lVar5 = 0x20;
LAB_0525d316:
    (**(code **)(*plVar3 + lVar5))();
    cVar1 = (char)plVar2[6];
  }
  else {
    lVar5 = 0x28;
    if (plVar3 != (long *)0x0) goto LAB_0525d316;
    cVar1 = (char)plVar2[6];
  }
  if (cVar1 == '\x01') {
    if ((long *)plVar2[4] == (long *)0x0) {
      uVar6 = func_0x04891200();
      func_0x04882e20(uVar6);
      pcVar4 = (code *)swi(3);
      lVar5 = (*pcVar4)();
      return lVar5;
    }
    (**(code **)(*(long *)plVar2[4] + 0x30))();
  }
  plVar3 = (long *)plVar2[4];
  if (plVar3 == plVar2) {
    lVar5 = 0x20;
  }
  else {
    lVar5 = 0x28;
    if (plVar3 == (long *)0x0) goto SUB_0412a280;
  }
  lVar5 = (**(code **)(*plVar3 + lVar5))();
SUB_0412a280:
  if (plVar2 != (long *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,plVar2);
  }
  return lVar5;
}


```

### Assembly

```asm
0525d2e0  PUSH RBX
0525d2e1  MOV RBX,qword ptr [RDI]
0525d2e4  MOV qword ptr [RDI],0x0
0525d2eb  TEST RBX,RBX
0525d2ee  JZ 0x0525d30f
0525d2f0  LEA RAX,[RBX + 0x40]
0525d2f4  MOV RDI,qword ptr [RBX + 0x60]
0525d2f8  CMP RDI,RAX
0525d2fb  JZ 0x0525d311
0525d2fd  MOV EAX,0x28
0525d302  TEST RDI,RDI
0525d305  JNZ 0x0525d316
0525d307  CMP byte ptr [RBX + 0x30],0x1
0525d30b  JZ 0x0525d322
0525d30d  JMP 0x0525d331
0525d30f  POP RBX
0525d310  RET
0525d311  MOV EAX,0x20
0525d316  MOV RCX,qword ptr [RDI]
0525d319  CALL qword ptr [RCX + RAX*0x1]
0525d31c  CMP byte ptr [RBX + 0x30],0x1
0525d320  JNZ 0x0525d331
0525d322  MOV RDI,qword ptr [RBX + 0x20]
0525d326  TEST RDI,RDI
0525d329  JZ 0x0525d36b
0525d32b  MOV RAX,qword ptr [RDI]
0525d32e  CALL qword ptr [RAX + 0x30]
0525d331  MOV RDI,qword ptr [RBX + 0x20]
0525d335  CMP RDI,RBX
0525d338  JZ 0x0525d352
0525d33a  MOV EAX,0x28
0525d33f  TEST RDI,RDI
0525d342  JNZ 0x0525d357
0525d344  MOV ESI,0x70
0525d349  MOV RDI,RBX
0525d34c  POP RBX
0525d34d  JMP 0x0412a280
0525d352  MOV EAX,0x20
0525d357  MOV RCX,qword ptr [RDI]
0525d35a  CALL qword ptr [RCX + RAX*0x1]
0525d35d  MOV ESI,0x70
0525d362  MOV RDI,RBX
0525d365  POP RBX
0525d366  JMP 0x0412a280
0525d36b  CALL 0x04891200
0525d370  MOV RDI,RAX
0525d373  CALL 0x04882e20
0525d378  INT3
```

## `05259950` — depth 2 from Aquifer__computeSubstance (root OverworldGeneratorMultinoise___prepareHeights)

- Ghidra name: `Aquifer__computeFluid`
- Body: `[[05259950, 0525999e] [052599a0, 05259eb3]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint Aquifer__computeFluid(undefined8 *param_1,long *param_2,int *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long *plVar18;
  short sVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  uint extraout_XMM0_Da;
  undefined4 uStack_50;
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  undefined4 *puStack_40;
  undefined4 **ppuStack_38;
  
  uVar11 = *(undefined8 *)param_3;
  iVar5 = param_3[2];
  iVar13 = (int)param_2[3];
  iVar10 = (int)((ulong)uVar11 >> 0x20);
  iVar12 = iVar10 + 4;
  bVar7 = false;
  lVar14 = 0;
  uVar6 = 0x7fff;
  do {
    uVar1 = *(ulong *)(&UNK_01641450 + lVar14);
    iVar15 = (int)uVar1;
    plVar18 = (long *)param_2[2];
    uVar4 = (**(code **)(*plVar18 + 0x10))
                      (plVar18,CONCAT44((int)(((uint)(uVar1 >> 0x1c) & 0xfffffff0) + param_3[2]) >>
                                        2,iVar15 * 0x10 + *param_3 >> 2));
    if ((uVar4 & 0x10000) == 0) {
      func_0x048a88b0();
      goto LAB_05259eab;
    }
    iVar8 = (int)(short)uVar4;
    bVar3 = uVar1 >> 0x20 == 0;
    bVar9 = bVar3 && iVar15 == 0;
    if ((bVar3 && iVar15 == 0) && (iVar8 + 8 < iVar10 + -0xc)) goto LAB_05259cf6;
    if ((!(bool)(~bVar9 & iVar12 <= iVar8)) && (iVar8 + 8 < (int)param_2[3])) {
      if (iVar8 < iVar12) goto LAB_05259cf6;
      bVar7 = (bool)(bVar7 | bVar9);
    }
    if ((short)uVar6 < (short)uVar4) {
      uVar4 = uVar6;
    }
    lVar14 = lVar14 + 8;
    uVar6 = uVar4;
  } while (lVar14 != 0x68);
  lVar14 = param_2[1];
  uVar2 = *(undefined8 *)param_3;
  iVar10 = param_3[2];
  fVar20 = (float)func_0x0d3414e0(lVar14 + 0x118);
  fVar20 = fVar20 * _DAT_011987f8 + (float)((int)uVar2 >> 2);
  func_0x0d3414e0((float)(iVar10 >> 2),lVar14 + 0x118);
  uVar21 = func_0x0d3414e0(fVar20,lVar14 + 0x70);
  fVar22 = (float)func_0x0d3414e0(fVar20,lVar14 + 0xa8);
  plVar18 = (long *)(lVar14 + 0xe0);
  uStack_44 = func_0x0d3414e0(fVar20);
  fStack_48 = ((float)((uint)((float)(uStack_44 & _DAT_014e7ba0) + _DAT_0119852c) & _DAT_014e7ba0) +
              _DAT_011988a8) * _DAT_01198930;
  puStack_40 = &uStack_50;
  uStack_50 = uVar21;
  fStack_4c = fVar22;
  if ((ulong)*(uint *)(lVar14 + 0x200) == 0xffffffff) {
LAB_05259eab:
    func_0x04931450();
    return *(uint *)((long)plVar18 + 0x1c);
  }
  ppuStack_38 = &puStack_40;
  fVar20 = (float)(**(code **)(&UNK_0ef53670 + (ulong)*(uint *)(lVar14 + 0x200) * 8))
                            (&ppuStack_38,lVar14 + 0x188);
  if ((_DAT_011983a4 <= fVar22) ||
     ((float)(int)(short)((ulong)uVar2 >> 0x20) * _DAT_01198698 + _DAT_011983f0 +
      fVar20 + *(float *)(lVar14 + 0x350) <= _DAT_011983f4)) {
    sVar19 = (short)uVar4;
    fVar20 = _DAT_011983f0;
    if ((bVar7) &&
       ((fVar22 = (float)((int)(short)(sVar19 + 8) - param_3[1]) * _DAT_01198af8,
        fVar20 = _DAT_011987b8, 0.0 <= fVar22 && (fVar20 = _DAT_011983f0, fVar22 <= _DAT_011983f0)))
       ) {
      fVar20 = (float)((uint)((_DAT_011983f0 - fVar22) + _DAT_011985d4) ^ _DAT_014e9ac0);
    }
    fVar23 = (float)func_0x0d3414e0((float)*param_3,(float)param_3[1] * _DAT_01198594,
                                    (float)param_3[2],*param_2 + 0x38);
    fVar22 = fVar23;
    if (fVar23 <= _DAT_011985d4) {
      fVar22 = _DAT_011985d4;
    }
    fVar22 = (float)(-(uint)(_DAT_011983f0 < fVar23) & (uint)_DAT_011983f0 |
                    ~-(uint)(_DAT_011983f0 < fVar23) & (uint)fVar22);
    if (_DAT_01198638 * fVar20 + _DAT_01198b44 < fVar22) {
LAB_05259cf6:
      uVar6 = 0;
      goto LAB_05259d0a;
    }
    if (fVar20 * _DAT_0119863c + _DAT_01198598 <= fVar22) {
      iVar5 = *param_3 >> 0x1f;
      iVar10 = iVar5 - *param_3;
      iVar13 = iVar10 + 0xf;
      if (-1 < iVar10) {
        iVar13 = iVar10;
      }
      iVar12 = param_3[1] >> 0x1f;
      iVar10 = (int)((ulong)((long)(iVar12 - param_3[1]) * -0x66666667) >> 0x20);
      iVar12 = ((iVar10 >> 4) - (iVar10 >> 0x1f)) + iVar12;
      iVar15 = param_3[2] >> 0x1f;
      iVar8 = iVar15 - param_3[2];
      iVar10 = iVar8 + 0xf;
      if (-1 < iVar8) {
        iVar10 = iVar8;
      }
      fVar20 = (float)func_0x0d3414e0((float)(iVar5 - (iVar13 >> 4)),(float)iVar12 / _DAT_01198a0c,
                                      (float)(iVar15 - (iVar10 >> 4)),*param_2 + 0xa8);
      fVar20 = (fVar20 * _DAT_01198400) / _DAT_01198af0;
      iVar5 = ((int)fVar20 - (uint)(fVar20 < (float)(int)fVar20)) * 3 + iVar12 * 0x28 + 0x14;
      iVar13 = (int)sVar19;
      if (iVar5 < sVar19) {
        iVar13 = iVar5;
      }
      if (iVar5 < -9) {
        iVar10 = *param_3 >> 0x1f;
        iVar12 = iVar10 - *param_3;
        iVar5 = iVar12 + 0x3f;
        if (-1 < iVar12) {
          iVar5 = iVar12;
        }
        iVar8 = param_3[1] >> 0x1f;
        iVar12 = (int)((ulong)((long)(iVar8 - param_3[1]) * -0x66666667) >> 0x20);
        iVar16 = param_3[2] >> 0x1f;
        iVar17 = iVar16 - param_3[2];
        iVar15 = iVar17 + 0x3f;
        if (-1 < iVar17) {
          iVar15 = iVar17;
        }
        func_0x0d3414e0((float)(iVar10 - (iVar5 >> 6)),
                        (float)(((iVar12 >> 4) - (iVar12 >> 0x1f)) + iVar8),
                        (float)(iVar16 - (iVar15 >> 6)),*param_2 + 0x70);
        uVar6 = (uint)(_DAT_01198aec < (float)(extraout_XMM0_Da & _DAT_014e7ba0));
      }
      else {
        uVar6 = 0;
      }
      uVar11 = *(undefined8 *)param_3;
      iVar5 = param_3[2];
      goto LAB_05259d0a;
    }
  }
  uVar11 = *(undefined8 *)param_3;
  iVar5 = param_3[2];
  iVar13 = -0x1000;
  uVar6 = 0;
LAB_05259d0a:
  *param_1 = uVar11;
  *(int *)(param_1 + 1) = iVar5;
  *(int *)((long)param_1 + 0xc) = iVar13;
  *(char *)(param_1 + 2) = (char)uVar6;
  return uVar6;
}


```

### Assembly

```asm
05259950  PUSH RBP
05259951  PUSH R15
05259953  PUSH R14
05259955  PUSH R13
05259957  PUSH R12
05259959  PUSH RBX
0525995a  SUB RSP,0x68
0525995e  MOV R14,RDX
05259961  MOV R8,RSI
05259964  MOV qword ptr [RSP + 0x18],RDI
05259969  MOV RBX,qword ptr [RDX]
0525996c  MOV EAX,dword ptr [RDX + 0x8]
0525996f  MOV dword ptr [RSP + 0x10],EAX
05259973  MOV EAX,dword ptr [RSI + 0x18]
05259976  MOV dword ptr [RSP + 0x14],EAX
0525997a  MOV qword ptr [RSP + 0x20],RBX
0525997f  SHR RBX,0x20
05259983  LEA EAX,[RBX + -0xc]
05259986  MOV dword ptr [RSP + 0x8],EAX
0525998a  ADD EBX,0x4
0525998d  MOV R13W,0x7fff
05259992  MOV qword ptr [RSP + 0x30],0x0
0525999b  XOR EBP,EBP
0525999d  JMP 0x052599bc
052599a0  MOV R8,R12
052599a3  CMP R13W,AX
052599a7  CMOVL EAX,R13D
052599ab  MOV R13D,EAX
052599ae  ADD RBP,0x8
052599b2  CMP RBP,0x68
052599b6  JZ 0x05259a66
052599bc  LEA RAX,[0x1641450]
052599c3  MOV R15,qword ptr [RBP + RAX*0x1]
052599c8  MOV ESI,R15D
052599cb  SHL ESI,0x4
052599ce  ADD ESI,dword ptr [R14]
052599d1  MOV RAX,R15
052599d4  SHR RAX,0x1c
052599d8  AND EAX,0xfffffff0
052599db  ADD EAX,dword ptr [R14 + 0x8]
052599df  MOV R12,R8
052599e2  MOV RDI,qword ptr [R8 + 0x10]
052599e6  SAR ESI,0x2
052599e9  SAR EAX,0x2
052599ec  SHL RAX,0x20
052599f0  OR RSI,RAX
052599f3  MOV RAX,qword ptr [RDI]
052599f6  CALL qword ptr [RAX + 0x10]
052599f9  TEST EAX,0x10000
052599fe  JZ 0x05259ea6
05259a04  MOVSX ECX,AX
05259a07  LEA ESI,[RCX + 0x8]
05259a0a  TEST R15D,R15D
05259a0d  SETZ DIL
05259a11  SHR R15,0x20
05259a15  SETZ DL
05259a18  AND DL,DIL
05259a1b  CMP DL,0x1
05259a1e  JNZ 0x05259a2a
05259a20  CMP dword ptr [RSP + 0x8],ESI
05259a24  JG 0x05259cf6
05259a2a  CMP EBX,ECX
05259a2c  SETLE DIL
05259a30  MOV R8D,EDX
05259a33  NOT R8B
05259a36  TEST R8B,DIL
05259a39  JNZ 0x052599a0
05259a3f  MOV R8,R12
05259a42  CMP ESI,dword ptr [R12 + 0x18]
05259a47  JGE 0x052599a3
05259a4d  CMP EBX,ECX
05259a4f  JG 0x05259cf6
05259a55  MOV RCX,qword ptr [RSP + 0x30]
05259a5a  OR CL,DL
05259a5c  MOV qword ptr [RSP + 0x30],RCX
05259a61  JMP 0x052599a3
05259a66  MOV RBX,qword ptr [R8 + 0x8]
05259a6a  MOV RBP,qword ptr [R14]
05259a6d  MOV EAX,dword ptr [R14 + 0x8]
05259a71  MOV ECX,EBP
05259a73  SAR ECX,0x2
05259a76  SAR EAX,0x2
05259a79  CVTSI2SS XMM0,ECX
05259a7d  MOVSS dword ptr [RSP + 0xc],XMM0
05259a83  LEA R15,[RBX + 0x118]
05259a8a  CVTSI2SS XMM2,EAX
05259a8e  MOVSS dword ptr [RSP + 0x4],XMM2
05259a94  XORPS XMM1,XMM1
05259a97  MOV RDI,R15
05259a9a  CALL 0x0d3414e0
05259a9f  MULSS XMM0,dword ptr [0x011987f8]
05259aa7  MOVSS XMM1,dword ptr [RSP + 0xc]
05259aad  ADDSS XMM0,XMM1
05259ab1  MOVSS dword ptr [RSP + 0x8],XMM0
05259ab7  XORPS XMM2,XMM2
05259aba  MOV RDI,R15
05259abd  MOVSS XMM0,dword ptr [RSP + 0x4]
05259ac3  CALL 0x0d3414e0
05259ac8  MOVSS XMM1,dword ptr [0x011987f8]
05259ad0  MULSS XMM1,XMM0
05259ad4  ADDSS XMM1,dword ptr [RSP + 0x4]
05259ada  MOVAPS XMM2,XMM1
05259add  MOVSS dword ptr [RSP + 0x4],XMM1
05259ae3  LEA RDI,[RBX + 0x70]
05259ae7  XORPS XMM1,XMM1
05259aea  MOVSS XMM0,dword ptr [RSP + 0x8]
05259af0  CALL 0x0d3414e0
05259af5  MOVSS dword ptr [RSP + 0x2c],XMM0
05259afb  LEA RDI,[RBX + 0xa8]
05259b02  XORPS XMM1,XMM1
05259b05  MOVSS XMM0,dword ptr [RSP + 0x8]
05259b0b  MOVSS XMM2,dword ptr [RSP + 0x4]
05259b11  CALL 0x0d3414e0
05259b16  MOVSS dword ptr [RSP + 0xc],XMM0
05259b1c  LEA RDI,[RBX + 0xe0]
05259b23  XORPS XMM1,XMM1
05259b26  MOVSS XMM0,dword ptr [RSP + 0x8]
05259b2c  MOVSS XMM2,dword ptr [RSP + 0x4]
05259b32  CALL 0x0d3414e0
05259b37  MOVSS XMM1,dword ptr [RSP + 0x2c]
05259b3d  MOVSS dword ptr [RSP + 0x48],XMM1
05259b43  MOVAPS XMM1,xmmword ptr [0x014e7ba0]
05259b4a  MOVAPS XMM2,XMM0
05259b4d  ANDPS XMM2,XMM1
05259b50  ADDSS XMM2,dword ptr [0x0119852c]
05259b58  ANDPS XMM2,XMM1
05259b5b  ADDSS XMM2,dword ptr [0x011988a8]
05259b63  MULSS XMM2,dword ptr [0x01198930]
05259b6b  MOVSS XMM1,dword ptr [RSP + 0xc]
05259b71  MOVSS dword ptr [RSP + 0x4c],XMM1
05259b77  MOVSS dword ptr [RSP + 0x50],XMM2
05259b7d  MOVSS dword ptr [RSP + 0x54],XMM0
05259b83  LEA RAX,[RSP + 0x48]
05259b88  MOV qword ptr [RSP + 0x58],RAX
05259b8d  MOV EAX,dword ptr [RBX + 0x200]
05259b93  MOV ECX,0xffffffff
05259b98  CMP RAX,RCX
05259b9b  JZ 0x05259eab
05259ba1  LEA RSI,[RBX + 0x188]
05259ba8  LEA RCX,[RSP + 0x58]
05259bad  MOV qword ptr [RSP + 0x60],RCX
05259bb2  LEA RCX,[0xef53670]
05259bb9  LEA RDI,[RSP + 0x60]
05259bbe  CALL qword ptr [RCX + RAX*0x8]
05259bc1  MOVSS XMM1,dword ptr [0x011983a4]
05259bc9  UCOMISS XMM1,dword ptr [RSP + 0xc]
05259bce  JBE 0x05259c1b
05259bd0  SHR RBP,0x20
05259bd4  ADDSS XMM0,dword ptr [RBX + 0x350]
05259bdc  MOVSX EAX,BP
05259bdf  XORPS XMM1,XMM1
05259be2  CVTSI2SS XMM1,EAX
05259be6  MULSS XMM1,dword ptr [0x01198698]
05259bee  ADDSS XMM1,dword ptr [0x011983f0]
05259bf6  ADDSS XMM1,XMM0
05259bfa  UCOMISS XMM1,dword ptr [0x011983f4]
05259c01  JBE 0x05259c1b
05259c03  MOV RDX,qword ptr [R14]
05259c06  MOV ESI,dword ptr [R14 + 0x8]
05259c0a  MOV EBX,0xfffff000
05259c0f  XOR EAX,EAX
05259c11  MOV RCX,qword ptr [RSP + 0x18]
05259c16  JMP 0x05259d0a
05259c1b  MOV EAX,dword ptr [R14 + 0x4]
05259c1f  MOVSS XMM1,dword ptr [0x011983f0]
05259c27  TEST byte ptr [RSP + 0x30],0x1
05259c2c  MOV RDX,R12
05259c2f  JZ 0x05259c83
05259c31  LEA ECX,[R13 + 0x8]
05259c35  MOVSX ECX,CX
05259c38  SUB ECX,EAX
05259c3a  XORPS XMM0,XMM0
05259c3d  CVTSI2SS XMM0,ECX
05259c41  MULSS XMM0,dword ptr [0x01198af8]
05259c49  XORPS XMM1,XMM1
05259c4c  UCOMISS XMM1,XMM0
05259c4f  JBE 0x05259c5b
05259c51  MOVSS XMM1,dword ptr [0x011987b8]
05259c59  JMP 0x05259c83
05259c5b  MOVSS XMM1,dword ptr [0x011983f0]
05259c63  UCOMISS XMM0,XMM1
05259c66  JA 0x05259c83
05259c68  MOVSS XMM1,dword ptr [0x011983f0]
05259c70  SUBSS XMM1,XMM0
05259c74  ADDSS XMM1,dword ptr [0x011985d4]
05259c7c  XORPS XMM1,xmmword ptr [0x014e9ac0]
05259c83  MOVAPS xmmword ptr [RSP + 0x30],XMM1
05259c88  XORPS XMM0,XMM0
05259c8b  CVTSI2SS XMM0,dword ptr [R14]
05259c90  XORPS XMM1,XMM1
05259c93  CVTSI2SS XMM1,EAX
05259c97  MOV RDI,qword ptr [RDX]
05259c9a  MULSS XMM1,dword ptr [0x01198594]
05259ca2  ADD RDI,0x38
05259ca6  XORPS XMM2,XMM2
05259ca9  CVTSI2SS XMM2,dword ptr [R14 + 0x8]
05259caf  CALL 0x0d3414e0
05259cb4  MOVSS XMM3,dword ptr [0x011983f0]
05259cbc  MOVAPS XMM1,XMM3
05259cbf  CMPLTSS XMM1,XMM0
05259cc4  MAXSS XMM0,dword ptr [0x011985d4]
05259ccc  MOVAPS XMM2,XMM1
05259ccf  ANDNPS XMM2,XMM0
05259cd2  ANDPS XMM1,XMM3
05259cd5  ORPS XMM1,XMM2
05259cd8  MOVAPS XMM2,xmmword ptr [RSP + 0x30]
05259cdd  MOVSS XMM0,dword ptr [0x01198638]
05259ce5  MULSS XMM0,XMM2
05259ce9  ADDSS XMM0,dword ptr [0x01198b44]
05259cf1  UCOMISS XMM1,XMM0
05259cf4  JBE 0x05259d25
05259cf6  XOR EAX,EAX
05259cf8  MOV RCX,qword ptr [RSP + 0x18]
05259cfd  MOV EBX,dword ptr [RSP + 0x14]
05259d01  MOV RDX,qword ptr [RSP + 0x20]
05259d06  MOV ESI,dword ptr [RSP + 0x10]
05259d0a  MOV qword ptr [RCX],RDX
05259d0d  MOV dword ptr [RCX + 0x8],ESI
05259d10  MOV dword ptr [RCX + 0xc],EBX
05259d13  MOV byte ptr [RCX + 0x10],AL
05259d16  ADD RSP,0x68
05259d1a  POP RBX
05259d1b  POP R12
05259d1d  POP R13
05259d1f  POP R14
05259d21  POP R15
05259d23  POP RBP
05259d24  RET
05259d25  MULSS XMM2,dword ptr [0x0119863c]
05259d2d  ADDSS XMM2,dword ptr [0x01198598]
05259d35  UCOMISS XMM2,XMM1
05259d38  JA 0x05259c03
05259d3e  MOV ECX,dword ptr [R14]
05259d41  MOV EAX,ECX
05259d43  SAR EAX,0x1f
05259d46  MOV EDX,EAX
05259d48  SUB EDX,ECX
05259d4a  LEA ECX,[RDX + 0xf]
05259d4d  TEST EDX,EDX
05259d4f  CMOVNS ECX,EDX
05259d52  MOV EDX,dword ptr [R14 + 0x4]
05259d56  SAR ECX,0x4
05259d59  SUB EAX,ECX
05259d5b  MOV ESI,EDX
05259d5d  SAR ESI,0x1f
05259d60  MOV ECX,ESI
05259d62  SUB ECX,EDX
05259d64  MOVSXD RCX,ECX
05259d67  IMUL RCX,RCX,-0x66666667
05259d6e  MOV RDX,RCX
05259d71  SHR RDX,0x3f
05259d75  SAR RCX,0x24
05259d79  ADD ECX,EDX
05259d7b  ADD ECX,ESI
05259d7d  MOV EDX,dword ptr [R14 + 0x8]
05259d81  MOV ESI,EDX
05259d83  SAR ESI,0x1f
05259d86  MOV EDI,ESI
05259d88  SUB EDI,EDX
05259d8a  LEA EDX,[RDI + 0xf]
05259d8d  TEST EDI,EDI
05259d8f  CMOVNS EDX,EDI
05259d92  SAR EDX,0x4
05259d95  SUB ESI,EDX
05259d97  XORPS XMM0,XMM0
05259d9a  CVTSI2SS XMM0,EAX
05259d9e  MOV EDI,0xa8
05259da3  XORPS XMM1,XMM1
05259da6  CVTSI2SS XMM1,ECX
05259daa  ADD RDI,qword ptr [R12]
05259dae  DIVSS XMM1,dword ptr [0x01198a0c]
05259db6  LEA EBX,[RCX + RCX*0x4]
05259db9  XORPS XMM2,XMM2
05259dbc  CVTSI2SS XMM2,ESI
05259dc0  CALL 0x0d3414e0
05259dc5  MULSS XMM0,dword ptr [0x01198400]
05259dcd  DIVSS XMM0,dword ptr [0x01198af0]
05259dd5  CVTTSS2SI EAX,XMM0
05259dd9  CVTTPS2DQ XMM1,XMM0
05259ddd  CVTDQ2PS XMM1,XMM1
05259de0  XOR ECX,ECX
05259de2  UCOMISS XMM1,XMM0
05259de5  SETA CL
05259de8  SUB EAX,ECX
05259dea  LEA EAX,[RAX + RAX*0x2]
05259ded  LEA EAX,[RAX + RBX*0x8]
05259df0  ADD EAX,0x14
05259df3  MOVSX EBX,R13W
05259df7  CMP EAX,EBX
05259df9  CMOVL EBX,EAX
05259dfc  CMP EAX,-0xa
05259dff  JG 0x05259e93
05259e05  MOV ECX,dword ptr [R14]
05259e08  MOV EAX,ECX
05259e0a  SAR EAX,0x1f
05259e0d  MOV EDX,EAX
05259e0f  SUB EDX,ECX
05259e11  LEA ECX,[RDX + 0x3f]
05259e14  TEST EDX,EDX
05259e16  CMOVNS ECX,EDX
05259e19  MOV EDX,dword ptr [R14 + 0x4]
05259e1d  SAR ECX,0x6
05259e20  SUB EAX,ECX
05259e22  MOV ECX,EDX
05259e24  SAR ECX,0x1f
05259e27  MOV ESI,ECX
05259e29  SUB ESI,EDX
05259e2b  MOVSXD RDX,ESI
05259e2e  IMUL RDX,RDX,-0x66666667
05259e35  MOV RSI,RDX
05259e38  SHR RSI,0x3f
05259e3c  SAR RDX,0x24
05259e40  ADD EDX,ESI
05259e42  ADD EDX,ECX
05259e44  MOV ECX,dword ptr [R14 + 0x8]
05259e48  MOV ESI,ECX
05259e4a  SAR ESI,0x1f
05259e4d  MOV EDI,ESI
05259e4f  SUB EDI,ECX
05259e51  LEA ECX,[RDI + 0x3f]
05259e54  TEST EDI,EDI
05259e56  CMOVNS ECX,EDI
05259e59  SAR ECX,0x6
05259e5c  SUB ESI,ECX
05259e5e  XORPS XMM0,XMM0
05259e61  CVTSI2SS XMM0,EAX
05259e65  MOV RDI,qword ptr [R12]
05259e69  XORPS XMM1,XMM1
05259e6c  CVTSI2SS XMM1,EDX
05259e70  ADD RDI,0x70
05259e74  XORPS XMM2,XMM2
05259e77  CVTSI2SS XMM2,ESI
05259e7b  CALL 0x0d3414e0
05259e80  ANDPS XMM0,xmmword ptr [0x014e7ba0]
05259e87  UCOMISS XMM0,dword ptr [0x01198aec]
05259e8e  SETA AL
05259e91  JMP 0x05259e95
05259e93  XOR EAX,EAX
05259e95  MOV RCX,qword ptr [RSP + 0x18]
05259e9a  MOV RDX,qword ptr [R14]
05259e9d  MOV ESI,dword ptr [R14 + 0x8]
05259ea1  JMP 0x05259d0a
05259ea6  CALL 0x048a88b0
05259eab  CALL 0x04931450
05259eb0  MOV EAX,dword ptr [RDI + 0x1c]
05259eb3  RET
```

## `0525a640` — depth 2 from FUN_05286980 (root OverworldGeneratorMultinoise__getPreliminarySurfaceLevel)

- Ghidra name: `FUN_0525a640`
- Body: `[[0525a640, 0525a7ca]]`

### Pseudocode

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0525a640(long *param_1,int *param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = ((long)*param_2 - (long)(int)param_1[3]) * 0x660 + *param_1;
  lVar2 = ((long)param_2[1] - (long)*(int *)((long)param_1 + 0x1c)) * 0x198;
  fVar3 = *(float *)(lVar2 + 4 + lVar1);
  if ((fVar3 == _DAT_011987f4) && (!NAN(fVar3) && !NAN(_DAT_011987f4))) {
    return *(undefined8 *)param_3;
  }
  fVar4 = *(float *)(lVar1 + lVar2) / _DAT_011988e8;
  fVar5 = _DAT_011983f0;
  if (fVar4 <= _DAT_011983f0) {
    fVar5 = fVar4;
  }
  fVar5 = (float)(~-(uint)(fVar4 < 0.0) & (uint)fVar5);
  fVar4 = fVar5 * _DAT_01198af0 * fVar5 - (fVar5 + fVar5) * fVar5 * fVar5;
  fVar3 = (float)(int)(short)(int)fVar3 + _DAT_011986e0;
  fVar5 = (float)func_0x0eee37e0(fVar3,_DAT_01198494);
  fVar5 = (float)func_0x0eee37e0(fVar5 + _DAT_01198494);
  fVar3 = (_DAT_01198af0 * fVar5 * fVar5 +
          (_DAT_011987cc + fVar3) * _DAT_01198c60 + (fVar3 + _DAT_01198854) * _DAT_01198930 * fVar5)
          / ((fVar5 * _DAT_01198930 + _DAT_01198c60) * _DAT_01198c54);
  return CONCAT44(_UNK_014e91b4 + fVar4 * (param_3[1] + _DAT_01198b48),
                  fVar3 + fVar4 * (*param_3 - fVar3));
}


```

### Assembly

```asm
0525a640  PUSH RBX
0525a641  SUB RSP,0x20
0525a645  MOV RBX,RDX
0525a648  MOVSXD RAX,dword ptr [RSI]
0525a64b  MOVSXD RCX,dword ptr [RDI + 0x18]
0525a64f  SUB RAX,RCX
0525a652  MOVSXD RCX,dword ptr [RSI + 0x4]
0525a656  MOVSXD RDX,dword ptr [RDI + 0x1c]
0525a65a  SUB RCX,RDX
0525a65d  IMUL RAX,RAX,0x660
0525a664  ADD RAX,qword ptr [RDI]
0525a667  IMUL RCX,RCX,0x198
0525a66e  MOVSS XMM0,dword ptr [RCX + RAX*0x1 + 0x4]
0525a674  UCOMISS XMM0,dword ptr [0x011987f4]
0525a67b  JNZ 0x0525a683
0525a67d  JNP 0x0525a7bc
0525a683  ADD RAX,RCX
0525a686  MOVSS XMM1,dword ptr [RAX]
0525a68a  DIVSS XMM1,dword ptr [0x011988e8]
0525a692  MOVSS XMM2,dword ptr [0x011983f0]
0525a69a  MINSS XMM2,XMM1
0525a69e  XORPS XMM3,XMM3
0525a6a1  CMPLTSS XMM1,XMM3
0525a6a6  ANDNPS XMM1,XMM2
0525a6a9  MOVSS XMM2,dword ptr [0x01198af0]
0525a6b1  MOVAPS XMM3,XMM1
0525a6b4  MULSS XMM3,XMM2
0525a6b8  MOVAPS XMM2,XMM1
0525a6bb  ADDSS XMM2,XMM1
0525a6bf  MULSS XMM2,XMM1
0525a6c3  MULSS XMM2,XMM1
0525a6c7  CVTTSS2SI EAX,XMM0
0525a6cb  CWDE
0525a6cc  XORPS XMM0,XMM0
0525a6cf  CVTSI2SS XMM0,EAX
0525a6d3  MULSS XMM3,XMM1
0525a6d7  SUBSS XMM3,XMM2
0525a6db  MOVAPS xmmword ptr [RSP + 0x10],XMM3
0525a6e0  ADDSS XMM0,dword ptr [0x011986e0]
0525a6e8  MOVSS dword ptr [RSP + 0xc],XMM0
0525a6ee  MOVSS XMM1,dword ptr [0x01198494]
0525a6f6  CALL 0x0eee37e0
0525a6fb  MOVSS XMM1,dword ptr [0x01198494]
0525a703  ADDSS XMM0,XMM1
0525a707  CALL 0x0eee37e0
0525a70c  MOVSS XMM1,dword ptr [0x011987cc]
0525a714  MOVSS XMM3,dword ptr [RSP + 0xc]
0525a71a  ADDSS XMM1,XMM3
0525a71e  ADDSS XMM3,dword ptr [0x01198854]
0525a726  MOVSS XMM2,dword ptr [0x01198930]
0525a72e  MULSS XMM3,XMM2
0525a732  MULSS XMM3,XMM0
0525a736  MOVAPS XMM4,XMM3
0525a739  MOVSS XMM3,dword ptr [0x01198c60]
0525a741  MULSS XMM1,XMM3
0525a745  ADDSS XMM1,XMM4
0525a749  MOVSS XMM4,dword ptr [0x01198af0]
0525a751  MULSS XMM4,XMM0
0525a755  MULSS XMM4,XMM0
0525a759  ADDSS XMM4,XMM1
0525a75d  MULSS XMM0,XMM2
0525a761  ADDSS XMM0,XMM3
0525a765  MULSS XMM0,dword ptr [0x01198c54]
0525a76d  DIVSS XMM4,XMM0
0525a771  MOVSS XMM0,dword ptr [RBX]
0525a775  MOVSS XMM1,dword ptr [RBX + 0x4]
0525a77a  SUBSS XMM0,XMM4
0525a77e  ADDSS XMM1,dword ptr [0x01198b48]
0525a786  UNPCKLPS XMM0,XMM1
0525a789  MOVAPS XMM2,xmmword ptr [RSP + 0x10]
0525a78e  MOVAPS XMM1,XMM2
0525a791  SHUFPS XMM1,XMM2,0x0
0525a795  MULPS XMM1,XMM0
0525a798  MOVAPS XMM0,xmmword ptr [0x014e91b0]
0525a79f  MOVSS XMM0,XMM4
0525a7a3  ADDPS XMM0,XMM1
0525a7a6  MOVAPS XMM1,XMM2
0525a7a9  MULSS XMM1,dword ptr [RBX + 0x8]
0525a7ae  ADDSS XMM1,dword ptr [0x011983fc]
0525a7b6  ADD RSP,0x20
0525a7ba  POP RBX
0525a7bb  RET
0525a7bc  MOVSD XMM0,qword ptr [RBX]
0525a7c0  MOVSS XMM1,dword ptr [RBX + 0x8]
0525a7c5  ADD RSP,0x20
0525a7c9  POP RBX
0525a7ca  RET
```

## `0525ec90` — depth 2 from Aquifer__Aquifer (root OverworldGeneratorMultinoise__tryMakeAquifer)

- Ghidra name: `FUN_0525ec90`
- Body: `[[0525ec90, 0525ec9d]]`

### Pseudocode

```c

void FUN_0525ec90(void)

{
  code *pcVar1;
  
  func_0x04882e40(&UNK_013f6512);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


```

### Assembly

```asm
0525ec90  PUSH RAX
0525ec91  LEA RDI,[0x13f6512]
0525ec98  CALL 0x04882e40
0525ec9d  INT3
```

