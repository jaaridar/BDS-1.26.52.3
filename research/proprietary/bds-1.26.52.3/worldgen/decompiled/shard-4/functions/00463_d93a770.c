/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xda3a770 (ELF vaddr 0xd93a770)
 * Label: caller-of-callee
 * Body:  [[0da3a770, 0da3b0aa] [0da3b0b0, 0da3c5cf] [0da3e2d0, 0da3e5d2]]
 * Ghidra: FUN_0da3a770
 */


/* WARNING: Possible PIC construction at 0x0da3a9b0: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0da3a770(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  uint *puVar5;
  long *plVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [8];
  undefined8 uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  ulong uVar14;
  uint uVar15;
  code *pcVar16;
  code *pcVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 *******pppppppuVar20;
  undefined8 unaff_RBX;
  undefined8 ******ppppppuVar21;
  byte bVar22;
  uint uVar23;
  undefined8 unaff_RBP;
  undefined8 ******ppppppuVar24;
  byte *pbVar25;
  undefined *puVar26;
  undefined8 *unaff_R12;
  long *unaff_R13;
  long *plVar27;
  undefined8 *unaff_R14;
  undefined8 *unaff_R15;
  bool bVar28;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  code *pcStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  undefined *puStack_180;
  char cStack_178;
  char cStack_161;
  long *plStack_160;
  undefined *puStack_158;
  long *plStack_150;
  undefined1 auStack_148 [8];
  long *plStack_140;
  code *pcStack_138;
  code *pcStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined *puStack_110;
  char cStack_108;
  uint *puStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  code *pcStack_c8;
  undefined8 *******pppppppuStack_b8;
  ulong uStack_b0;
  code *pcStack_a0;
  int iStack_98;
  char cStack_94;
  long lStack_90;
  long lStack_80;
  undefined8 *puStack_70;
  long lStack_68;
  uint uStack_60;
  undefined8 *puStack_58;
  ulong uStack_50;
  undefined1 auStack_40 [16];
  
  pcVar16 = (code *)param_3[7];
  plStack_f0 = param_5;
  if (pcVar16 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar28 = false;
    }
    else {
      uStack_1c0 = 0xda3a7c5;
      (*(code *)param_3[3])(param_3);
      bVar28 = (undefined *)param_3[7] == &UNK_0da39430;
    }
    param_3[2] = &UNK_0da39510;
    *(undefined4 *)(param_3 + 4) = 0xe88d009a;
    param_3[3] = &UNK_0da39e50;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1c0 = 0xda3a815;
    puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
    if (puVar4 == (undefined8 *)0x0) {
      uStack_1c0 = 0xda3c43e;
      func_0x0eec74c0(0x70,0);
    }
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 0xd) = 0;
    *param_3 = puVar4;
    pcVar16 = (code *)&UNK_0da39430;
    param_3[7] = &UNK_0da39430;
    if (bVar28) {
      lVar8 = param_3[6];
    }
    else {
      lVar8 = 0;
    }
    param_3[6] = lVar8;
    if (lVar8 == 0) goto LAB_0da3a85e;
LAB_0da3a874:
    bVar22 = *(byte *)(lVar8 + 0x1a);
  }
  else {
    lVar8 = param_3[6];
    if (lVar8 != 0) goto LAB_0da3a874;
LAB_0da3a85e:
    uVar11 = param_3[5];
    uStack_1c0 = 0xda3a86c;
    (*pcVar16)(0,param_3,0);
    lVar8 = param_3[6];
    if (lVar8 != 0) goto LAB_0da3a874;
    uStack_1c0 = 0xda3a8a9;
    lVar8 = func_0x048aead0(uVar11);
    bVar22 = *(byte *)(lVar8 + 0x1a);
  }
  if ((bVar22 & 1) == 0) goto SUB_0da3e2d0;
  unaff_R14 = param_3 + 6;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_1b8 = (undefined8 *)0x0;
    uStack_1b0 = 0;
    uStack_1c0 = 0xda3a9d9;
    func_0x048b1dc0(&uStack_1b8);
    puVar4 = uStack_1b8;
    uVar14 = uStack_1b0;
    unaff_R14 = &uStack_1b8;
joined_r0x0da3a9e4:
    if (puVar4 == (undefined8 *)0x0) {
      uStack_1c0 = 0xda3a9f2;
      puVar4 = (undefined8 *)func_0x048aead0(uVar14);
    }
  }
  else {
    puVar4 = (undefined8 *)*unaff_R14;
    if (puVar4 == (undefined8 *)0x0) {
      uVar14 = param_3[5];
      uStack_1c0 = 0xda3a8d3;
      (*(code *)param_3[7])(0,param_3,0);
      puVar4 = (undefined8 *)*unaff_R14;
      goto joined_r0x0da3a9e4;
    }
  }
  unaff_R15 = (undefined8 *)puVar4[0xd];
  uStack_1c0 = 0xda3a8ed;
  bVar22 = (**(code **)(*param_2 + 0x18))(param_2);
  plVar27 = plStack_f0;
  if ((bVar22 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1c0;
    uStack_1c0 = 0xda3a9b5;
    unaff_RBX = param_4;
    unaff_R12 = param_3;
    unaff_R13 = param_2;
SUB_0da3e2d0:
    plVar27 = plStack_f0;
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(long **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar2 = *(char *)((long)param_3 + 0x24);
    puVar4 = (undefined8 *)*param_3;
    puVar13 = puVar4;
    if (cVar2 == '\x02') {
      puVar13 = param_3;
    }
    if (puVar13 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x1772ff66) {
      uVar11 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        pcVar16 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xda3e32f;
        (*pcVar16)(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar4 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar4 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0xda3e351;
      puVar13 = (undefined8 *)func_0x0488e200(uVar11,lVar8,0xe88d009a,puVar4);
    }
    lVar8 = *plVar27;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xda3e361;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x40),lVar8);
    bVar22 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar22 | 1;
    pcVar16 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xda3e37e;
    uVar14 = (*pcVar16)(param_2);
    *(byte *)((long)param_2 + 9) = bVar22;
    if ((uVar14 >> 0x20 & 1) == 0) {
      uVar11 = param_3[5];
      uVar9 = (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) = uVar9;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xda3e3b9;
      cVar2 = func_0x0da3e600(param_2,uVar11,puVar13,param_4,plVar27,5);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar9;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xda3e3e6;
      cVar2 = func_0x0da3e810(param_2,uVar11,puVar13,param_4,plVar27,5);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar9;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xda3e413;
      cVar2 = func_0x0da3ea40(param_2,uVar11,puVar13,param_4,plVar27,5);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar9;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xda3e440;
      cVar2 = func_0x0da3ec60(param_2,uVar11,puVar13,param_4,plVar27,5);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      uVar14 = 5;
      *(ulong *)((long)register0x00000020 + -0x60) = uVar9;
    }
    else {
      if (4 < (uint)uVar14) {
        lVar8 = *plVar27;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xda3e5a0;
        func_0x0ed5ffe0(lVar8,8,(undefined1 *)((long)register0x00000020 + -0x48));
        if ((*(ulong *)((long)register0x00000020 + -0x48) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar16 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xda3e5c4;
        (*pcVar16)(&DAT_0f5463b0,
                   (*(ulong *)((long)register0x00000020 + -0x48) & 0xff00ffffffffffff) - 8);
        return;
      }
      uVar11 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x50) =
           (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) =
           (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xda3e4aa;
      cVar2 = func_0x0da3e600(param_2,uVar11,puVar13,param_4,plVar27,uVar14 & 0xff);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      uVar14 = uVar14 & 0xff;
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xda3e4db;
      cVar2 = func_0x0da3e810(param_2,uVar11,puVar13,param_4,plVar27,uVar14);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xda3e508;
      cVar2 = func_0x0da3ea40(param_2,uVar11,puVar13,param_4,plVar27,uVar14);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xda3e535;
      cVar2 = func_0x0da3ec60(param_2,uVar11,puVar13,param_4,plVar27,uVar14);
      if (cVar2 != '\0') {
        return;
      }
      uVar11 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
    }
    *(undefined8 *)((long)register0x00000020 + -0x68) =
         *(undefined8 *)((long)register0x00000020 + -0x58);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0xda3e562;
    func_0x0da3ee90(param_2,uVar11,puVar13,param_4,plVar27,uVar14);
    return;
  }
  if (bVar22 != 1) {
    uStack_1b8 = (undefined8 *)0x120000012f2525;
    uStack_1c0 = 0xda3aa2a;
    func_0x0ed5ffe0(*plStack_f0,8,&uStack_1b8);
    if (((ulong)uStack_1b8 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1c0 = 0xda3aa4d;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_1b8 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1c0 = 0xda3a92c;
  plStack_160 = param_2;
  uStack_e8 = param_4;
  func_0x0ed6d600(&lStack_68,*plStack_f0);
  puStack_f8 = (uint *)param_3[5];
  pppppppuStack_e0 = (undefined8 *******)*plVar27;
  ppppppuVar21 = (undefined8 ******)((long)unaff_R15 + 9);
  bVar28 = (*(byte *)(unaff_R15 + 1) & 1) == 0;
  ppppppuVar24 = (undefined8 ******)unaff_R15[3];
  if (bVar28) {
    ppppppuVar24 = ppppppuVar21;
  }
  uVar14 = (ulong)(*(byte *)(unaff_R15 + 1) >> 1);
  if (!bVar28) {
    uVar14 = unaff_R15[2];
  }
  puStack_70 = unaff_R15;
  if (ppppppuVar24 == (undefined8 ******)0x0) {
    puStack_158 = (undefined *)((ulong)((uint)uVar14 & 0x7f) << 0x30);
  }
  else if (uVar14 < 0x80) {
    puStack_158 = (undefined *)(uVar14 << 0x30 | (ulong)ppppppuVar24 & 0xff00ffffffffffff);
  }
  else {
    lVar8 = uVar14 + 9;
    cStack_161 = lVar8 == 0;
    uStack_1c0 = 0xda3aa8e;
    puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
    if (puVar7 == (ulong *)0x0 && cStack_161 == '\0') {
      uStack_1c0 = 0xda3c453;
      func_0x0eec74c0(lVar8,8);
    }
    *puVar7 = uVar14;
    uStack_1c0 = 0xda3aaba;
    func_0x0eee2f00(puVar7 + 1,ppppppuVar24,uVar14);
    *(undefined1 *)((long)puVar7 + uVar14 + 8) = 0;
    puStack_158 = (undefined *)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_1c0 = 0xda3aaf3;
  puVar5 = (uint *)func_0x0ed6d180(pppppppuStack_e0,&puStack_158,0);
  plVar27 = plStack_160;
  if (((ulong)puStack_158 & 0x80000000000000) != 0) {
    uStack_1c0 = 0xda3ab27;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_158 & 0xff00ffffffffffff) - 8)
    ;
  }
  puVar4 = puStack_70;
  puStack_158 = (undefined *)0x0;
  bVar28 = (*(byte *)(puStack_70 + 1) & 1) == 0;
  ppppppuVar24 = (undefined8 ******)puStack_70[3];
  if (bVar28) {
    ppppppuVar24 = ppppppuVar21;
  }
  uVar14 = (ulong)(*(byte *)(puStack_70 + 1) >> 1);
  if (!bVar28) {
    uVar14 = puStack_70[2];
  }
  uStack_1c0 = 0xda3ab5d;
  cVar2 = (**(code **)(*plVar27 + 0xb8))(plVar27,ppppppuVar24,uVar14);
  if (cVar2 == '\0') {
    uStack_1c0 = 0xda3ac7e;
    _auStack_148 = (*(code *)*puVar4)(puStack_f8);
    uStack_1c0 = 0xda3aca4;
    func_0x0ed8bc80(&uStack_1b8,auStack_148,*(undefined1 *)((long)pppppppuStack_e0 + 0x2aa));
    uVar14 = (ulong)uStack_1b8 >> 1 & 0x7f;
    pcVar16 = (code *)((long)&uStack_1b8 + 1);
    if (((ulong)uStack_1b8 & 1) != 0) {
      uVar14 = uStack_1b0;
      pcVar16 = pcStack_1a8;
    }
    pppppppuStack_b8 = (undefined8 *******)0x0;
    if (pcVar16 == (code *)0x0) {
      pppppppuStack_b8 = (undefined8 *******)((ulong)((uint)uVar14 & 0x7f) << 0x30);
    }
    else {
      lVar8 = uVar14 + 9;
      uStack_1c0 = 0xda3acfb;
      puStack_f8 = puVar5;
      puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
      if (lVar8 != 0 && puVar7 == (ulong *)0x0) {
        uStack_1c0 = 0xda3c465;
        func_0x0eec74c0(lVar8,8);
      }
      *puVar7 = uVar14;
      uStack_1c0 = 0xda3ad2b;
      func_0x0eee2f00(puVar7 + 1,pcVar16,uVar14);
      *(undefined1 *)((long)puVar7 + uVar14 + 8) = 0;
      pppppppuStack_b8 =
           (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      puVar5 = puStack_f8;
    }
    uStack_1c0 = 0xda3aecf;
    func_0x0ed5ffe0(pppppppuStack_e0,8,&pppppppuStack_b8);
    plVar27 = plStack_160;
    if (((ulong)pppppppuStack_b8 & 0x80000000000000) != 0) {
      uStack_1c0 = 0xda3af03;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_b8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_b8 = (undefined8 *******)0x0;
    if (((ulong)uStack_1b8 & 1) != 0) {
      uStack_1c0 = 0xda3af27;
      func_0x0412a280(pcStack_1a8,(ulong)uStack_1b8 & 0xfffffffffffffffe);
    }
    uStack_d8 = (undefined8 *)0x0;
    uStack_d0 = 0;
    pcStack_c8 = (code *)0x0;
  }
  else {
    uStack_1c0 = 0xda3ab7c;
    (**(code **)(*plVar27 + 0x80))(auStack_148,plVar27,0x40);
    cStack_178 = cStack_108;
    if (cStack_108 == '\0') {
      uStack_1b8 = (undefined8 *)auStack_148;
      uStack_1b0 = (ulong)plStack_140;
      pcStack_1a8 = pcStack_138;
      pcStack_1a0 = pcStack_130;
      uStack_198 = lStack_128;
      lStack_190 = lStack_120;
      lStack_188 = lStack_118;
      puStack_180 = puStack_110;
      pppppppuStack_b8 = (undefined8 *******)puVar4[3];
      uStack_b0 = puVar4[2];
      if ((*(byte *)(puVar4 + 1) & 1) == 0) {
        pppppppuStack_b8 = (undefined8 *******)ppppppuVar21;
        uStack_b0 = (ulong)(*(byte *)(puVar4 + 1) >> 1);
      }
      uStack_1c0 = 0xda3ade0;
      func_0x0470d9a0(auStack_148,&UNK_01377405,0x15,0xd,&pppppppuStack_b8);
      plVar27 = (long *)((ulong)auStack_148 >> 1 & 0x7f);
      pcVar16 = (code *)(auStack_148 + 1);
      if (((ulong)auStack_148 & 1) != 0) {
        plVar27 = plStack_140;
        pcVar16 = pcStack_138;
      }
      pppppppuStack_b8 = (undefined8 *******)0x0;
      if (pcVar16 == (code *)0x0) {
        pppppppuStack_b8 = (undefined8 *******)((ulong)((uint)plVar27 & 0x7f) << 0x30);
      }
      else {
        lVar8 = (long)plVar27 + 9;
        uStack_1c0 = 0xda3ae3b;
        puStack_f8 = puVar5;
        puVar7 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
        if (lVar8 != 0 && puVar7 == (ulong *)0x0) {
          uStack_1c0 = 0xda3c477;
          func_0x0eec74c0(lVar8,8);
        }
        *puVar7 = (ulong)plVar27;
        uStack_1c0 = 0xda3ae6b;
        func_0x0eee2f00(puVar7 + 1,pcVar16,plVar27);
        *(undefined1 *)((long)puVar7 + (long)plVar27 + 8U) = 0;
        pppppppuStack_b8 =
             (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        puVar5 = puStack_f8;
      }
      uStack_1c0 = 0xda3afa0;
      func_0x0ed5ffe0(pppppppuStack_e0,8,&pppppppuStack_b8);
      plVar27 = plStack_160;
      if (((ulong)pppppppuStack_b8 & 0x80000000000000) != 0) {
        uStack_1c0 = 0xda3afd4;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_b8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_b8 = (undefined8 *******)0x0;
      if (((ulong)auStack_148 & 1) != 0) {
        uStack_1c0 = 0xda3affd;
        func_0x0412a280(pcStack_138,(ulong)auStack_148 & 0xfffffffffffffffe);
      }
      uStack_d8 = (undefined8 *)0x0;
      uStack_d0 = 0;
      pcStack_c8 = (code *)0x0;
    }
    else {
      pcStack_1a8 = pcStack_138;
      uStack_1b8 = (undefined8 *)auStack_148;
      uStack_1b0 = (ulong)plStack_140;
      plVar18 = (long *)(ulong)(byte)(auStack_148[0] >> 1);
      pcVar16 = (code *)((long)&uStack_1b8 + 1);
      if (((ulong)auStack_148 & 1) != 0) {
        plVar18 = plStack_140;
        pcVar16 = pcStack_138;
      }
      bVar22 = auStack_148[0];
      if (plVar18 != (long *)0x0) {
        uStack_1c0 = 0xda3abcb;
        plVar6 = (long *)func_0x0eee3290();
        pcVar17 = pcVar16;
        for (uVar14 = (ulong)plVar18 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar17 = *(code *)(*plVar6 + (ulong)(byte)*pcVar17 * 4);
          pcVar17 = pcVar17 + 1;
        }
        if (3 < plVar18) {
          do {
            *pcVar17 = *(code *)(*plVar6 + (ulong)(byte)*pcVar17 * 4);
            pcVar17[1] = *(code *)(*plVar6 + (ulong)(byte)pcVar17[1] * 4);
            pcVar17[2] = *(code *)(*plVar6 + (ulong)(byte)pcVar17[2] * 4);
            pcVar17[3] = *(code *)(*plVar6 + (ulong)(byte)pcVar17[3] * 4);
            pcVar17 = pcVar17 + 4;
          } while (pcVar17 != pcVar16 + (long)plVar18);
        }
        bVar22 = (byte)uStack_1b8;
      }
      if ((bVar22 & 1) == 0) {
        pcStack_c8 = pcStack_1a8;
        uStack_d8 = uStack_1b8;
        uStack_d0 = uStack_1b0;
      }
      else {
        uStack_1c0 = 0xda3af5a;
        func_0x0412e5e0(&uStack_d8,pcStack_1a8,uStack_1b0);
      }
    }
    lVar8 = lStack_190;
    if (cStack_178 == '\x01') {
      if (((ulong)uStack_1b8 & 1) != 0) {
        uStack_1c0 = 0xda3b037;
        func_0x0412a280(pcStack_1a8,(ulong)uStack_1b8 & 0xfffffffffffffffe);
      }
    }
    else {
      if (lStack_190 != 0) {
        while (lVar8 != lStack_188) {
          uStack_1c0 = 0xda3b06c;
          FUN_048b3e80(lStack_188 + -0x40);
          lStack_188 = lStack_188 + -0x40;
        }
        lStack_188 = lVar8;
        uStack_1c0 = 0xda3b088;
        func_0x0412a280(lStack_190,(long)puStack_180 - lStack_190);
      }
      pcVar17 = pcStack_1a8;
      pcVar16 = pcStack_1a0;
      if (pcStack_1a8 != (code *)0x0) {
        for (; pcVar17 != pcVar16; pcVar16 = pcVar16 + -0x50) {
          if ((pcVar16[-8] == (code)0x1) && (((byte)pcVar16[-0x30] & 1) != 0)) {
            uStack_1c0 = 0xda3b0d8;
            func_0x0412a280(*(undefined8 *)(pcVar16 + -0x20),
                            *(ulong *)(pcVar16 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_1a0 = pcVar17;
        uStack_1c0 = 0xda3b0f1;
        func_0x0412a280(pcStack_1a8,uStack_198 - (long)pcStack_1a8);
      }
    }
  }
  uStack_1c0 = 0xda3b108;
  (**(code **)(*plVar27 + 0xd0))(plVar27);
  lVar8 = *(long *)(puVar5 + 2);
  uVar23 = *(uint *)(lVar8 + 0x1c + (ulong)*puVar5 * 0x20);
  *puVar5 = uVar23;
  if (puVar5[0x48] == 0) {
    uVar15 = puVar5[4];
LAB_0da3b14a:
    lVar1 = lVar8 + (ulong)uVar15 * 0x20;
    uVar14 = (ulong)*(uint *)(lVar8 + -0x10 + (ulong)uVar15 * 0x20);
    if (uVar14 != 0xffffffff) {
      uStack_1c0 = 0xda3b173;
      (**(code **)(&UNK_0f4e40d0 + uVar14 * 8))(&uStack_1b8,lVar1 + -0x18);
      uVar15 = puVar5[4];
    }
    *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
    puVar5[4] = uVar15 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar5 + 0x46) + 0x18 + (ulong)(puVar5[0x48] - 1) * 0x30) != uVar23)
          && (uVar15 = puVar5[4], uVar23 == uVar15 - 1)) goto LAB_0da3b14a;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1c0 = 0xda3b1b2;
    auStack_40 = (*(code *)*puStack_70)();
    uVar11 = auStack_40._8_8_;
    lVar8 = auStack_40._0_8_;
    uVar14 = (ulong)uStack_d8 >> 1 & 0x7f;
    pcVar16 = (code *)((long)&uStack_d8 + 1);
    if (((ulong)uStack_d8 & 1) != 0) {
      uVar14 = uStack_d0;
      pcVar16 = pcStack_c8;
    }
    if (uVar14 == 0) {
      uVar23 = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar14 & 3);
      if (uVar14 < 4) {
        uVar23 = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uVar23 = 0x811c9dc5;
        uVar19 = 0;
        do {
          uVar23 = ((int)(char)pcVar16[uVar19 + 3] ^
                   ((int)(char)pcVar16[uVar19 + 2] ^
                   ((int)(char)pcVar16[uVar19 + 1] ^
                   ((int)(char)pcVar16[uVar19] ^ uVar23) * 0x1000193) * 0x1000193) * 0x1000193) *
                   0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar14 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar9 != 0) {
        uVar14 = 0;
        do {
          uVar23 = ((int)(char)pcVar16[uVar14 + uVar19] ^ uVar23) * 0x1000193;
          uVar14 = uVar14 + 1;
        } while (uVar9 != uVar14);
      }
    }
    if (lVar8 == 0) {
      uStack_1c0 = 0xda3b2a1;
      lVar8 = func_0x048aead0(uVar11);
    }
    uStack_1c0 = 0xda3b2b3;
    puStack_58 = (undefined8 *)FUN_048b0c90(uVar11,lVar8,uVar23,1);
    if (puStack_58 == (undefined8 *)0x0) {
      uStack_1b8 = (undefined8 *)0x0;
      uStack_1b0 = 0;
      uStack_1c0 = 0xda3b2e1;
      func_0x048b0d20(&uStack_1b8);
      puStack_58 = uStack_1b8;
      uStack_50 = uStack_1b0;
      if (uStack_1b8 == (undefined8 *)0x0) {
        lVar8 = *plStack_f0;
        uStack_1c0 = 0xda3b9a3;
        func_0x0ed8bc80(&uStack_1b8,auStack_40,*(undefined1 *)(lVar8 + 0x2aa));
        uStack_1c0 = 0xda3b9b7;
        uVar11 = func_0x0412f8c0(&uStack_1b8,&UNK_01479aea,10);
        uVar14 = (ulong)uStack_d8 >> 1 & 0x7f;
        pcVar16 = (code *)((long)&uStack_d8 + 1);
        if (((ulong)uStack_d8 & 1) != 0) {
          uVar14 = uStack_d0;
          pcVar16 = pcStack_c8;
        }
        uStack_1c0 = 0xda3b9e3;
        uVar11 = func_0x0412f8c0(uVar11,pcVar16,uVar14);
        uStack_1c0 = 0xda3b9f7;
        pbVar12 = (byte *)func_0x0412f8c0(uVar11,&UNK_0125506d,1);
        bVar28 = (*pbVar12 & 1) != 0;
        pbVar25 = pbVar12 + 1;
        if (bVar28) {
          pbVar25 = *(byte **)(pbVar12 + 0x10);
        }
        uVar14 = (ulong)(*pbVar12 >> 1);
        if (bVar28) {
          uVar14 = *(ulong *)(pbVar12 + 8);
        }
        auStack_148 = (undefined1  [8])0x0;
        uStack_1c0 = 0xda3ba29;
        func_0x0ee387f0(auStack_148,pbVar25,uVar14,1);
        uStack_1c0 = 0xda3ba3b;
        func_0x0ed5ffe0(lVar8,8,auStack_148);
        uStack_1c0 = 0xda3ba45;
        func_0x0ee386e0(auStack_148);
        if (((ulong)uStack_1b8 & 1) != 0) {
          uStack_1c0 = 0xda3ba61;
          func_0x0412a280(pcStack_1a8,(ulong)uStack_1b8 & 0xfffffffffffffffe);
        }
        goto LAB_0da3c3bb;
      }
    }
    else {
      uStack_50 = auStack_40._8_8_;
    }
    lStack_188 = 0;
    puStack_180 = (undefined *)0x0;
    uStack_198 = 0;
    lStack_190 = 0;
    pcStack_1a8 = (code *)0x0;
    pcStack_1a0 = (code *)0x0;
    uStack_1b8 = (undefined8 *)0x0;
    uStack_1b0 = 0;
    uStack_1c0 = 0xda3b316;
    func_0x05d84ba0(&uStack_1b8);
    uStack_1c0 = 0xda3b331;
    func_0x05d9a920(&pppppppuStack_b8,&puStack_58,&uStack_1b8);
    if (pcStack_1a0 != (code *)0x0) {
      uStack_1c0 = 0xda3b340;
      (*pcStack_1a0)(&uStack_1b8);
    }
    bVar28 = (*(byte *)(puStack_70 + 1) & 1) != 0;
    if (bVar28) {
      ppppppuVar21 = (undefined8 ******)puStack_70[3];
    }
    uVar14 = (ulong)(*(byte *)(puStack_70 + 1) >> 1);
    if (bVar28) {
      uVar14 = puStack_70[2];
    }
    if (uVar14 == 0) {
      uVar23 = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar14 & 3);
      if (uVar14 < 4) {
        uVar23 = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uVar23 = 0x811c9dc5;
        uVar19 = 0;
        do {
          uVar23 = ((int)*(char *)((long)ppppppuVar21 + uVar19 + 3) ^
                   ((int)*(char *)((long)ppppppuVar21 + uVar19 + 2) ^
                   ((int)*(char *)((long)ppppppuVar21 + uVar19 + 1) ^
                   ((int)*(char *)((long)ppppppuVar21 + uVar19) ^ uVar23) * 0x1000193) * 0x1000193)
                   * 0x1000193) * 0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar14 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar9 != 0) {
        uVar14 = 0;
        do {
          uVar23 = ((int)*(char *)((long)ppppppuVar21 + uVar14 + uVar19) ^ uVar23) * 0x1000193;
          uVar14 = uVar14 + 1;
        } while (uVar9 != uVar14);
      }
    }
    cVar2 = *(char *)((long)param_3 + 0x24);
    puVar4 = (undefined8 *)*param_3;
    puVar13 = puVar4;
    if (cVar2 == '\x02') {
      puVar13 = param_3;
    }
    pppppppuStack_e0 = &pppppppuStack_b8;
    if (puVar13 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x1772ff66) {
      uVar11 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        uStack_1c0 = 0xda3b43e;
        (*(code *)param_3[7])(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar4 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar4 = param_3;
      }
      uStack_1c0 = 0xda3b460;
      puVar13 = (undefined8 *)func_0x0488e200(uVar11,lVar8,0xe88d009a,puVar4);
    }
    plVar27 = (long *)param_3[5];
    if (DAT_0f72ed90 == '\0') {
      uStack_1c0 = 0xda3c488;
      iVar3 = FUN_04108328(&DAT_0f72ed90);
      if (iVar3 != 0) {
        uStack_1c0 = 0xda3c495;
        func_0x0d9eda10();
        uStack_1c0 = 0xda3c4af;
        __cxa_atexit(&UNK_048ae800,&DAT_0f72ed10,0xf53dab8);
        uStack_1c0 = 0xda3c4bb;
        func_0x0410844d(&DAT_0f72ed90);
      }
    }
    plVar18 = (long *)(*plVar27 +
                      (ulong)((int)((ulong)(plVar27[1] - *plVar27) >> 3) - 1U &
                             *(uint *)(_DAT_0f72ed10 + 4)) * 8);
    do {
      lVar8 = *plVar18;
      if (lVar8 == -1) {
        plVar6 = (long *)plVar27[4];
        plVar18 = plVar6;
        goto LAB_0da3b4c4;
      }
      plVar18 = (long *)(plVar27[3] + lVar8 * 0x18);
    } while (*(uint *)(plVar27[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f72ed10 + 4));
    plVar6 = (long *)plVar27[4];
LAB_0da3b4c4:
    if (plVar18 == plVar6) {
      puVar26 = &DAT_0f72ed10;
    }
    else {
      puVar26 = (undefined *)plVar18[2];
    }
    uStack_1c0 = 0xda3b4e5;
    auVar10 = (undefined1  [8])FUN_048b0c90(plVar27,puVar26,uVar23,1);
    plStack_150 = plVar27;
    if (auVar10 == (undefined1  [8])0x0) {
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1c0 = 0xda3b4fc;
      func_0x048b0d20(auStack_148);
      auVar10 = auStack_148;
      plStack_150 = plStack_140;
    }
    lStack_118 = 0;
    puStack_110 = (undefined *)0x0;
    lStack_128 = 0;
    lStack_120 = 0;
    pcStack_138 = (code *)0x0;
    pcStack_130 = (code *)0x0;
    auStack_148 = (undefined1  [8])0x0;
    plStack_140 = (long *)0x0;
    uStack_1c0 = 0xda3b53a;
    puStack_158 = (undefined *)auVar10;
    func_0x05d84ba0(auStack_148);
    uStack_1c0 = 0xda3b54c;
    func_0x05d9a920(&uStack_1b8,&puStack_158,auStack_148);
    if ((lStack_190 == lStack_90) && ((lStack_80 != 0) == (puStack_180 != (undefined *)0x0))) {
      if ((cStack_94 == '\0') || ((int)uStack_198 != iStack_98)) {
        bVar28 = cStack_94 == '\0' && uStack_198._4_1_ == '\0';
      }
      else {
        pppppppuVar20 = pppppppuStack_b8;
        if (cStack_94 == '\x02') {
          pppppppuVar20 = &pppppppuStack_b8;
        }
        uStack_1c0 = 0xda3bfff;
        lVar8 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar20);
        bVar28 = lVar8 != 0;
      }
    }
    else {
      bVar28 = false;
    }
    if (pcStack_1a0 != (code *)0x0) {
      uStack_1c0 = 0xda3b58a;
      (*pcStack_1a0)(&uStack_1b8);
    }
    if (pcStack_130 != (code *)0x0) {
      uStack_1c0 = 0xda3b59e;
      (*pcStack_130)(auStack_148);
    }
    if (bVar28) {
      lVar8 = param_3[5];
      if ((ulong)*(uint *)(puVar13 + 0xd) != 0xffffffff) {
        uStack_1c0 = 0xda3b5cc;
        (**(code **)(&UNK_0f48eb10 + (ulong)*(uint *)(puVar13 + 0xd) * 8))(auStack_148,puVar13);
      }
      puVar13[2] = 0;
      puVar13[3] = 0;
      *puVar13 = 0;
      puVar13[1] = 0;
      *(undefined4 *)(puVar13 + 0xd) = 0;
      pcStack_1a8 = (code *)&UNK_0d9edd10;
      pcStack_1a0 = (code *)0x0;
      uStack_198 = CONCAT35(uStack_198._5_3_,0x34d265105);
      lStack_188 = 0;
      puStack_180 = &UNK_0d9edc30;
      lStack_128 = plStack_f0[4];
      auStack_148 = (undefined1  [8])*plStack_f0;
      plStack_140 = (long *)plStack_f0[1];
      pcStack_138 = (code *)plStack_f0[2];
      pcStack_130 = (code *)plStack_f0[3];
      plVar27 = (long *)plStack_f0[2];
      lStack_190 = lVar8;
      if (plVar27 == (long *)0x0) {
        pcStack_138 = (code *)0x0;
        uStack_1b8 = puVar13;
      }
      else {
        uStack_1c0 = 0xda3b65e;
        uStack_1b8 = puVar13;
        pcStack_138 = (code *)(**(code **)(*plVar27 + 0x30))(plVar27,0);
      }
      puStack_158 = &UNK_0f48f430;
      uStack_1c0 = 0xda3b969;
      func_0x0ed75bc0(&puStack_158,plStack_160,&uStack_1b8,uStack_e8,auStack_148);
      if (pcStack_1a0 != (code *)0x0) {
        uStack_1c0 = 0xda3b97c;
        (*pcStack_1a0)(&uStack_1b8);
      }
    }
    else {
      plVar27 = (long *)param_3[5];
      if (DAT_0f72ef00 == '\0') {
        uStack_1c0 = 0xda3c4cc;
        iVar3 = FUN_04108328(&DAT_0f72ef00);
        if (iVar3 != 0) {
          uStack_1c0 = 0xda3c4d9;
          func_0x0d9f3230();
          uStack_1c0 = 0xda3c4f3;
          __cxa_atexit(&UNK_048ae800,&DAT_0f72ee80,0xf53dab8);
          uStack_1c0 = 0xda3c4ff;
          func_0x0410844d(&DAT_0f72ef00);
        }
      }
      plVar18 = (long *)(*plVar27 +
                        (ulong)((int)((ulong)(plVar27[1] - *plVar27) >> 3) - 1U &
                               *(uint *)(_DAT_0f72ee80 + 4)) * 8);
      do {
        lVar8 = *plVar18;
        if (lVar8 == -1) {
          plVar6 = (long *)plVar27[4];
          plVar18 = plVar6;
          goto LAB_0da3b6d4;
        }
        plVar18 = (long *)(plVar27[3] + lVar8 * 0x18);
      } while (*(uint *)(plVar27[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f72ee80 + 4));
      plVar6 = (long *)plVar27[4];
LAB_0da3b6d4:
      if (plVar18 == plVar6) {
        puVar26 = &DAT_0f72ee80;
      }
      else {
        puVar26 = (undefined *)plVar18[2];
      }
      uStack_1c0 = 0xda3b731;
      auVar10 = (undefined1  [8])FUN_048b0c90(plVar27,puVar26,uVar23,1);
      if (auVar10 == (undefined1  [8])0x0) {
        auStack_148 = (undefined1  [8])0x0;
        plStack_140 = (long *)0x0;
        uStack_1c0 = 0xda3b748;
        func_0x048b0d20(auStack_148);
        auVar10 = auStack_148;
        plVar27 = plStack_140;
      }
      lStack_118 = 0;
      puStack_110 = (undefined *)0x0;
      lStack_128 = 0;
      lStack_120 = 0;
      pcStack_138 = (code *)0x0;
      pcStack_130 = (code *)0x0;
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1c0 = 0xda3b786;
      puStack_158 = (undefined *)auVar10;
      plStack_150 = plVar27;
      func_0x05d84ba0(auStack_148);
      uStack_1c0 = 0xda3b798;
      func_0x05d9a920(&uStack_1b8,&puStack_158,auStack_148);
      if ((lStack_190 == lStack_90) && ((lStack_80 != 0) == (puStack_180 != (undefined *)0x0))) {
        if ((cStack_94 == '\0') || ((int)uStack_198 != iStack_98)) {
          bVar28 = cStack_94 == '\0' && uStack_198._4_1_ == '\0';
        }
        else {
          pppppppuVar20 = pppppppuStack_b8;
          if (cStack_94 == '\x02') {
            pppppppuVar20 = &pppppppuStack_b8;
          }
          uStack_1c0 = 0xda3c2fc;
          lVar8 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar20);
          bVar28 = lVar8 != 0;
        }
      }
      else {
        bVar28 = false;
      }
      if (pcStack_1a0 != (code *)0x0) {
        uStack_1c0 = 0xda3b7d6;
        (*pcStack_1a0)(&uStack_1b8);
      }
      if (pcStack_130 != (code *)0x0) {
        uStack_1c0 = 0xda3b7ea;
        (*pcStack_130)(auStack_148);
      }
      if (bVar28) {
        lVar8 = param_3[5];
        if ((ulong)*(uint *)(puVar13 + 0xd) != 0xffffffff) {
          uStack_1c0 = 0xda3b818;
          (**(code **)(&UNK_0f48eb10 + (ulong)*(uint *)(puVar13 + 0xd) * 8))(auStack_148,puVar13);
        }
        puVar13[6] = 0;
        puVar13[7] = 0;
        puVar13[4] = 0;
        puVar13[5] = 0;
        puVar13[2] = 0;
        puVar13[3] = 0;
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[8] = (ulong)_DAT_011983f0;
        *(undefined4 *)(puVar13 + 0xd) = 1;
        pcStack_1a8 = (code *)&UNK_0d9f3540;
        pcStack_1a0 = (code *)0x0;
        uStack_198 = CONCAT35(uStack_198._5_3_,0x38564b96a);
        lStack_188 = 0;
        puStack_180 = &UNK_0d9f3460;
        lStack_128 = plStack_f0[4];
        auStack_148 = (undefined1  [8])*plStack_f0;
        plStack_140 = (long *)plStack_f0[1];
        pcStack_138 = (code *)plStack_f0[2];
        pcStack_130 = (code *)plStack_f0[3];
        plVar27 = (long *)plStack_f0[2];
        lStack_190 = lVar8;
        if (plVar27 == (long *)0x0) {
          pcStack_138 = (code *)0x0;
          uStack_1b8 = puVar13;
        }
        else {
          uStack_1c0 = 0xda3b8c4;
          uStack_1b8 = puVar13;
          pcStack_138 = (code *)(**(code **)(*plVar27 + 0x30))(plVar27,1);
        }
        puStack_158 = &UNK_0f48f4b0;
        uStack_1c0 = 0xda3bcf9;
        func_0x0ed75bc0(&puStack_158,plStack_160,&uStack_1b8,uStack_e8,auStack_148);
        if (pcStack_1a0 != (code *)0x0) {
          uStack_1c0 = 0xda3bd0c;
          (*pcStack_1a0)(&uStack_1b8);
        }
      }
      else {
        plVar27 = (long *)param_3[5];
        if (DAT_0f72efb8 == '\0') {
          uStack_1c0 = 0xda3c510;
          iVar3 = FUN_04108328(&DAT_0f72efb8);
          if (iVar3 != 0) {
            uStack_1c0 = 0xda3c51d;
            func_0x0d9f65f0();
            uStack_1c0 = 0xda3c537;
            __cxa_atexit(&UNK_048ae800,&DAT_0f72ef38,0xf53dab8);
            uStack_1c0 = 0xda3c543;
            func_0x0410844d(&DAT_0f72efb8);
          }
        }
        plVar18 = (long *)(*plVar27 +
                          (ulong)((int)((ulong)(plVar27[1] - *plVar27) >> 3) - 1U &
                                 *(uint *)(_DAT_0f72ef38 + 4)) * 8);
        do {
          lVar8 = *plVar18;
          if (lVar8 == -1) {
            plVar6 = (long *)plVar27[4];
            plVar18 = plVar6;
            goto LAB_0da3ba7a;
          }
          plVar18 = (long *)(plVar27[3] + lVar8 * 0x18);
        } while (*(uint *)(plVar27[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f72ef38 + 4));
        plVar6 = (long *)plVar27[4];
LAB_0da3ba7a:
        if (plVar18 == plVar6) {
          puVar26 = &DAT_0f72ef38;
        }
        else {
          puVar26 = (undefined *)plVar18[2];
        }
        uStack_1c0 = 0xda3bad7;
        auVar10 = (undefined1  [8])FUN_048b0c90(plVar27,puVar26,uVar23,1);
        if (auVar10 == (undefined1  [8])0x0) {
          auStack_148 = (undefined1  [8])0x0;
          plStack_140 = (long *)0x0;
          uStack_1c0 = 0xda3baee;
          func_0x048b0d20(auStack_148);
          auVar10 = auStack_148;
          plVar27 = plStack_140;
        }
        lStack_118 = 0;
        puStack_110 = (undefined *)0x0;
        lStack_128 = 0;
        lStack_120 = 0;
        pcStack_138 = (code *)0x0;
        pcStack_130 = (code *)0x0;
        auStack_148 = (undefined1  [8])0x0;
        plStack_140 = (long *)0x0;
        uStack_1c0 = 0xda3bb2c;
        puStack_158 = (undefined *)auVar10;
        plStack_150 = plVar27;
        func_0x05d84ba0(auStack_148);
        uStack_1c0 = 0xda3bb3e;
        func_0x05d9a920(&uStack_1b8,&puStack_158,auStack_148);
        if ((lStack_190 == lStack_90) && ((lStack_80 != 0) == (puStack_180 != (undefined *)0x0))) {
          if ((cStack_94 == '\0') || ((int)uStack_198 != iStack_98)) {
            bVar28 = cStack_94 == '\0' && uStack_198._4_1_ == '\0';
          }
          else {
            pppppppuVar20 = pppppppuStack_b8;
            if (cStack_94 == '\x02') {
              pppppppuVar20 = &pppppppuStack_b8;
            }
            uStack_1c0 = 0xda3c405;
            lVar8 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar20);
            bVar28 = lVar8 != 0;
          }
        }
        else {
          bVar28 = false;
        }
        if (pcStack_1a0 != (code *)0x0) {
          uStack_1c0 = 0xda3bb7c;
          (*pcStack_1a0)(&uStack_1b8);
        }
        if (pcStack_130 != (code *)0x0) {
          uStack_1c0 = 0xda3bb90;
          (*pcStack_130)(auStack_148);
        }
        if (bVar28) {
          lVar8 = param_3[5];
          if ((ulong)*(uint *)(puVar13 + 0xd) != 0xffffffff) {
            uStack_1c0 = 0xda3bbbe;
            (**(code **)(&UNK_0f48eb10 + (ulong)*(uint *)(puVar13 + 0xd) * 8))(auStack_148,puVar13);
          }
          puVar13[6] = 0;
          puVar13[7] = 0;
          puVar13[4] = 0;
          puVar13[5] = 0;
          puVar13[2] = 0;
          puVar13[3] = 0;
          *puVar13 = 0;
          puVar13[1] = 0;
          *(undefined4 *)(puVar13 + 0xd) = 2;
          pcStack_1a8 = (code *)&UNK_0d9f68f0;
          pcStack_1a0 = (code *)0x0;
          uStack_198 = CONCAT35(uStack_198._5_3_,0x3fc35c661);
          lStack_188 = 0;
          puStack_180 = &UNK_0d9f6810;
          lStack_128 = plStack_f0[4];
          auStack_148 = (undefined1  [8])*plStack_f0;
          plStack_140 = (long *)plStack_f0[1];
          pcStack_138 = (code *)plStack_f0[2];
          pcStack_130 = (code *)plStack_f0[3];
          plVar27 = (long *)plStack_f0[2];
          lStack_190 = lVar8;
          if (plVar27 == (long *)0x0) {
            pcStack_138 = (code *)0x0;
            uStack_1b8 = puVar13;
          }
          else {
            uStack_1c0 = 0xda3bc5d;
            uStack_1b8 = puVar13;
            pcStack_138 = (code *)(**(code **)(*plVar27 + 0x30))(plVar27,2);
          }
          puStack_158 = &UNK_0f48f530;
          uStack_1c0 = 0xda3bfb6;
          func_0x0ed75bc0(&puStack_158,plStack_160,&uStack_1b8,uStack_e8,auStack_148);
          if (pcStack_1a0 != (code *)0x0) {
            uStack_1c0 = 0xda3bfc9;
            (*pcStack_1a0)(&uStack_1b8);
          }
        }
        else {
          plVar27 = (long *)param_3[5];
          if (DAT_0f72f128 == '\0') {
            uStack_1c0 = 0xda3c554;
            iVar3 = FUN_04108328(&DAT_0f72f128);
            if (iVar3 != 0) {
              uStack_1c0 = 0xda3c561;
              func_0x0d9fad20();
              uStack_1c0 = 0xda3c57b;
              __cxa_atexit(&UNK_048ae800,&DAT_0f72f0a8,0xf53dab8);
              uStack_1c0 = 0xda3c587;
              func_0x0410844d(&DAT_0f72f128);
            }
          }
          plVar18 = (long *)(*plVar27 +
                            (ulong)((int)((ulong)(plVar27[1] - *plVar27) >> 3) - 1U &
                                   *(uint *)(_DAT_0f72f0a8 + 4)) * 8);
          do {
            lVar8 = *plVar18;
            if (lVar8 == -1) {
              plVar6 = (long *)plVar27[4];
              plVar18 = plVar6;
              goto LAB_0da3bd25;
            }
            plVar18 = (long *)(plVar27[3] + lVar8 * 0x18);
          } while (*(uint *)(plVar27[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f72f0a8 + 4));
          plVar6 = (long *)plVar27[4];
LAB_0da3bd25:
          if (plVar18 == plVar6) {
            puVar26 = &DAT_0f72f0a8;
          }
          else {
            puVar26 = (undefined *)plVar18[2];
          }
          uStack_1c0 = 0xda3bd82;
          auVar10 = (undefined1  [8])FUN_048b0c90(plVar27,puVar26,uVar23,1);
          if (auVar10 == (undefined1  [8])0x0) {
            auStack_148 = (undefined1  [8])0x0;
            plStack_140 = (long *)0x0;
            uStack_1c0 = 0xda3bd99;
            func_0x048b0d20(auStack_148);
            auVar10 = auStack_148;
            plVar27 = plStack_140;
          }
          lStack_118 = 0;
          puStack_110 = (undefined *)0x0;
          lStack_128 = 0;
          lStack_120 = 0;
          pcStack_138 = (code *)0x0;
          pcStack_130 = (code *)0x0;
          auStack_148 = (undefined1  [8])0x0;
          plStack_140 = (long *)0x0;
          uStack_1c0 = 0xda3bdd7;
          puStack_158 = (undefined *)auVar10;
          plStack_150 = plVar27;
          func_0x05d84ba0(auStack_148);
          uStack_1c0 = 0xda3bde9;
          func_0x05d9a920(&uStack_1b8,&puStack_158,auStack_148);
          if ((lStack_190 == lStack_90) && ((lStack_80 != 0) == (puStack_180 != (undefined *)0x0)))
          {
            if ((cStack_94 == '\0') || ((int)uStack_198 != iStack_98)) {
              bVar28 = cStack_94 == '\0' && uStack_198._4_1_ == '\0';
            }
            else {
              pppppppuVar20 = pppppppuStack_b8;
              if (cStack_94 == '\x02') {
                pppppppuVar20 = &pppppppuStack_b8;
              }
              uStack_1c0 = 0xda3c423;
              lVar8 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuVar20);
              bVar28 = lVar8 != 0;
            }
          }
          else {
            bVar28 = false;
          }
          if (pcStack_1a0 != (code *)0x0) {
            uStack_1c0 = 0xda3be27;
            (*pcStack_1a0)(&uStack_1b8);
          }
          if (pcStack_130 != (code *)0x0) {
            uStack_1c0 = 0xda3be3b;
            (*pcStack_130)(auStack_148);
          }
          if (bVar28) {
            lVar8 = param_3[5];
            if ((ulong)*(uint *)(puVar13 + 0xd) != 0xffffffff) {
              uStack_1c0 = 0xda3be69;
              (**(code **)(&UNK_0f48eb10 + (ulong)*(uint *)(puVar13 + 0xd) * 8))
                        (auStack_148,puVar13);
            }
            puVar13[10] = 0;
            puVar13[0xb] = 0;
            puVar13[8] = 0;
            puVar13[9] = 0;
            puVar13[6] = 0;
            puVar13[7] = 0;
            puVar13[4] = 0;
            puVar13[5] = 0;
            puVar13[2] = 0;
            puVar13[3] = 0;
            *puVar13 = 0;
            puVar13[1] = 0;
            puVar13[0xc] = 0;
            *(undefined4 *)(puVar13 + 0xd) = 3;
            pcStack_1a8 = (code *)&UNK_0d9fb030;
            pcStack_1a0 = (code *)0x0;
            uStack_198 = CONCAT35(uStack_198._5_3_,0x32201e022);
            lStack_188 = 0;
            puStack_180 = &UNK_0d9faf50;
            lStack_128 = plStack_f0[4];
            auStack_148 = (undefined1  [8])*plStack_f0;
            plStack_140 = (long *)plStack_f0[1];
            pcStack_138 = (code *)plStack_f0[2];
            pcStack_130 = (code *)plStack_f0[3];
            plVar27 = (long *)plStack_f0[2];
            lStack_190 = lVar8;
            if (plVar27 == (long *)0x0) {
              pcStack_138 = (code *)0x0;
              uStack_1b8 = puVar13;
            }
            else {
              uStack_1c0 = 0xda3bf1a;
              uStack_1b8 = puVar13;
              pcStack_138 = (code *)(**(code **)(*plVar27 + 0x30))(plVar27,3);
            }
            puStack_158 = &UNK_0f48f5b0;
            uStack_1c0 = 0xda3c2c5;
            func_0x0ed75bc0(&puStack_158,plStack_160,&uStack_1b8,uStack_e8,auStack_148);
            if (pcStack_1a0 != (code *)0x0) {
              uStack_1c0 = 0xda3c2d8;
              (*pcStack_1a0)(&uStack_1b8);
            }
          }
          else {
            plVar27 = (long *)param_3[5];
            if (DAT_0f72f3b0 == '\0') {
              uStack_1c0 = 0xda3c598;
              iVar3 = FUN_04108328(&DAT_0f72f3b0);
              if (iVar3 != 0) {
                uStack_1c0 = 0xda3c5a5;
                func_0x0da019b0();
                uStack_1c0 = 0xda3c5bf;
                __cxa_atexit(&UNK_048ae800,&DAT_0f72f330,0xf53dab8);
                uStack_1c0 = 0xda3c5cb;
                func_0x0410844d(&DAT_0f72f3b0);
              }
            }
            plVar18 = (long *)(*plVar27 +
                              (ulong)((int)((ulong)(plVar27[1] - *plVar27) >> 3) - 1U &
                                     *(uint *)(_DAT_0f72f330 + 4)) * 8);
            do {
              lVar8 = *plVar18;
              if (lVar8 == -1) {
                plVar6 = (long *)plVar27[4];
                plVar18 = plVar6;
                goto LAB_0da3bfe2;
              }
              plVar18 = (long *)(plVar27[3] + lVar8 * 0x18);
            } while (*(uint *)(plVar27[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f72f330 + 4));
            plVar6 = (long *)plVar27[4];
LAB_0da3bfe2:
            if (plVar18 == plVar6) {
              puVar26 = &DAT_0f72f330;
            }
            else {
              puVar26 = (undefined *)plVar18[2];
            }
            uStack_1c0 = 0xda3c05d;
            auVar10 = (undefined1  [8])FUN_048b0c90(plVar27,puVar26,uVar23,1);
            if (auVar10 == (undefined1  [8])0x0) {
              auStack_148 = (undefined1  [8])0x0;
              plStack_140 = (long *)0x0;
              uStack_1c0 = 0xda3c074;
              func_0x048b0d20(auStack_148);
              auVar10 = auStack_148;
              plVar27 = plStack_140;
            }
            lStack_118 = 0;
            puStack_110 = (undefined *)0x0;
            lStack_128 = 0;
            lStack_120 = 0;
            pcStack_138 = (code *)0x0;
            pcStack_130 = (code *)0x0;
            auStack_148 = (undefined1  [8])0x0;
            plStack_140 = (long *)0x0;
            uStack_1c0 = 0xda3c0b2;
            puStack_158 = (undefined *)auVar10;
            plStack_150 = plVar27;
            func_0x05d84ba0(auStack_148);
            uStack_1c0 = 0xda3c0c4;
            func_0x05d9a920(&uStack_1b8,&puStack_158,auStack_148);
            if ((lStack_190 == lStack_90) && ((lStack_80 != 0) == (puStack_180 != (undefined *)0x0))
               ) {
              if ((cStack_94 == '\0') || ((int)uStack_198 != iStack_98)) {
                bVar28 = cStack_94 == '\0' && uStack_198._4_1_ == '\0';
              }
              else {
                if (cStack_94 != '\x02') {
                  pppppppuStack_e0 = pppppppuStack_b8;
                }
                uStack_1c0 = 0xda3c355;
                lVar8 = (*pcStack_1a8)(3,&uStack_1b8,pppppppuStack_e0);
                bVar28 = lVar8 != 0;
              }
            }
            else {
              bVar28 = false;
            }
            if (pcStack_1a0 != (code *)0x0) {
              uStack_1c0 = 0xda3c101;
              (*pcStack_1a0)(&uStack_1b8);
            }
            if (pcStack_130 != (code *)0x0) {
              uStack_1c0 = 0xda3c115;
              (*pcStack_130)(auStack_148);
            }
            if (bVar28) {
              lVar8 = param_3[5];
              if ((ulong)*(uint *)(puVar13 + 0xd) != 0xffffffff) {
                uStack_1c0 = 0xda3c142;
                (**(code **)(&UNK_0f48eb10 + (ulong)*(uint *)(puVar13 + 0xd) * 8))
                          (auStack_148,puVar13);
              }
              puVar13[10] = 0;
              puVar13[0xb] = 0;
              puVar13[8] = 0;
              puVar13[9] = 0;
              puVar13[6] = 0;
              puVar13[7] = 0;
              puVar13[4] = 0;
              puVar13[5] = 0;
              puVar13[2] = 0;
              puVar13[3] = 0;
              *puVar13 = 0;
              puVar13[1] = 0;
              puVar13[0xc] = 0;
              *(undefined4 *)(puVar13 + 0xd) = 4;
              pcStack_1a8 = (code *)&UNK_0da01cc0;
              pcStack_1a0 = (code *)0x0;
              uStack_198 = CONCAT35(uStack_198._5_3_,0x344de16b4);
              lStack_188 = 0;
              puStack_180 = &UNK_0da01be0;
              lStack_128 = plStack_f0[4];
              auStack_148 = (undefined1  [8])*plStack_f0;
              plStack_140 = (long *)plStack_f0[1];
              pcStack_138 = (code *)plStack_f0[2];
              pcStack_130 = (code *)plStack_f0[3];
              plVar27 = (long *)plStack_f0[2];
              lStack_190 = lVar8;
              if (plVar27 == (long *)0x0) {
                pcStack_138 = (code *)0x0;
                uStack_1b8 = puVar13;
              }
              else {
                uStack_1c0 = 0xda3c1f3;
                uStack_1b8 = puVar13;
                pcStack_138 = (code *)(**(code **)(*plVar27 + 0x30))(plVar27,4);
              }
              puStack_158 = &UNK_0f48f630;
              uStack_1c0 = 0xda3c395;
              func_0x0ed75bc0(&puStack_158,plStack_160,&uStack_1b8,uStack_e8,auStack_148);
              if (pcStack_1a0 != (code *)0x0) {
                uStack_1c0 = 0xda3c3a4;
                (*pcStack_1a0)(&uStack_1b8);
              }
            }
            else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
                    (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
              uStack_1b8 = (undefined8 *)0x2300000149614c;
              uStack_1c0 = 0xda3c258;
              func_0x0ed5ffe0(*plStack_f0,8,&uStack_1b8);
              if (((ulong)uStack_1b8 & 0x80000000000000) != 0) {
                uStack_1c0 = 0xda3c283;
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,((ulong)uStack_1b8 & 0xff00ffffffffffff) - 8);
              }
              uStack_1b8 = (undefined8 *)0x0;
            }
          }
        }
      }
    }
    if (pcStack_a0 != (code *)0x0) {
      uStack_1c0 = 0xda3c3bb;
      (*pcStack_a0)(&pppppppuStack_b8);
    }
  }
LAB_0da3c3bb:
  if (((ulong)uStack_d8 & 1) != 0) {
    uStack_1c0 = 0xda3c3e2;
    func_0x0412a280(pcStack_c8,(ulong)uStack_d8 & 0xfffffffffffffffe);
  }
  return;
}


