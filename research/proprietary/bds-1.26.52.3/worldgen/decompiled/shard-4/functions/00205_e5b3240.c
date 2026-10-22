/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe6b3240 (ELF vaddr 0xe5b3240)
 * Label: caller-of-callee
 * Body:  [[0e6b3240, 0e6b3b70] [0e6b3b80, 0e6b5323] [0e6b7430, 0e6b7796]]
 * Ghidra: FUN_0e6b3240
 */


/* WARNING: Possible PIC construction at 0x0e6b3482: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e6b3240(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  uint *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [8];
  undefined8 uVar9;
  byte *pbVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  code *pcVar15;
  code *pcVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 *******pppppppuVar20;
  ulong unaff_RBX;
  undefined8 ******ppppppuVar21;
  byte bVar22;
  uint uVar23;
  undefined8 unaff_RBP;
  long lVar24;
  undefined8 ******ppppppuVar25;
  byte *pbVar26;
  undefined *puVar27;
  long *unaff_R12;
  undefined8 unaff_R13;
  long *unaff_R14;
  long *unaff_R15;
  bool bVar28;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  code *pcStack_198;
  code *pcStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined *puStack_170;
  char cStack_168;
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
  uint *puStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 *******pppppppuStack_e8;
  ulong uStack_e0;
  code *pcStack_d0;
  int iStack_c8;
  char cStack_c4;
  long lStack_c0;
  long lStack_b0;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  code *pcStack_88;
  long *plStack_80;
  undefined8 ******ppppppuStack_78;
  long lStack_70;
  long lStack_68;
  uint uStack_60;
  long *plStack_58;
  ulong uStack_50;
  undefined1 auStack_40 [16];
  
  pcVar15 = (code *)param_3[7];
  plStack_f0 = param_5;
  if (pcVar15 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      uVar13 = 0;
    }
    else {
      uStack_1b0 = 0xe6b3292;
      (*(code *)param_3[3])(param_3);
      uVar13 = CONCAT71((int7)(unaff_RBX >> 8),(undefined *)param_3[7] == &UNK_0e6b2090);
    }
    param_3[2] = (long)&UNK_0e6b2170;
    *(undefined4 *)(param_3 + 4) = 0x518027de;
    param_3[3] = (long)&UNK_0e6b2360;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1b0 = 0xe6b32e2;
    lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
    if (lVar6 == 0) {
      uStack_1b0 = 0xe6b514e;
      func_0x0eec74c0(0x50,0);
    }
    *(undefined4 *)(lVar6 + 0x48) = 0;
    *param_3 = lVar6;
    pcVar15 = (code *)&UNK_0e6b2090;
    param_3[7] = (long)&UNK_0e6b2090;
    if ((char)uVar13 == '\0') {
      param_3[6] = 0;
    }
    else {
      lVar6 = param_3[6];
      param_3[6] = lVar6;
      if (lVar6 != 0) goto LAB_0e6b3343;
    }
LAB_0e6b332d:
    uVar13 = param_3[5];
    uStack_1b0 = 0xe6b333b;
    (*pcVar15)(0,param_3,0);
    lVar6 = param_3[6];
    if (lVar6 != 0) goto LAB_0e6b3343;
    uStack_1b0 = 0xe6b3378;
    lVar6 = func_0x048aead0(uVar13);
    bVar22 = *(byte *)(lVar6 + 0x1a);
  }
  else {
    lVar6 = param_3[6];
    uVar13 = unaff_RBX;
    if (lVar6 == 0) goto LAB_0e6b332d;
LAB_0e6b3343:
    bVar22 = *(byte *)(lVar6 + 0x1a);
  }
  if ((bVar22 & 1) == 0) goto SUB_0e6b7430;
  unaff_R14 = param_3 + 6;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_1a8 = (long *)0x0;
    uStack_1a0 = 0;
    uStack_1b0 = 0xe6b34ab;
    func_0x048b1dc0(&uStack_1a8);
    plVar3 = uStack_1a8;
    uVar13 = uStack_1a0;
    unaff_R14 = &uStack_1a8;
joined_r0x0e6b34b6:
    if (plVar3 == (long *)0x0) {
      uStack_1b0 = 0xe6b34c4;
      plVar3 = (long *)func_0x048aead0(uVar13);
    }
  }
  else {
    plVar3 = (long *)*unaff_R14;
    if (plVar3 == (long *)0x0) {
      uVar13 = param_3[5];
      uStack_1b0 = 0xe6b33a2;
      (*(code *)param_3[7])(0,param_3,0);
      plVar3 = (long *)*unaff_R14;
      goto joined_r0x0e6b34b6;
    }
  }
  puStack_a0 = (undefined8 *)plVar3[0xd];
  uStack_1b0 = 0xe6b33c3;
  bVar22 = (**(code **)(*param_2 + 0x18))(param_2);
  plVar3 = plStack_f0;
  if ((bVar22 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1b0;
    uStack_1b0 = 0xe6b3487;
    unaff_RBX = uVar13;
    unaff_R12 = param_3;
    unaff_R13 = param_4;
    unaff_R15 = param_2;
SUB_0e6b7430:
    plVar17 = plStack_f0;
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(long **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(long **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
    *(long **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(ulong *)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar1 = *(char *)((long)param_3 + 0x24);
    plVar3 = (long *)*param_3;
    plVar12 = plVar3;
    if (cVar1 == '\x02') {
      plVar12 = param_3;
    }
    if (plVar12 == (long *)0x0 || (int)param_3[4] != 0x518027de) {
      lVar6 = param_3[5];
      lVar24 = param_3[6];
      if (lVar24 == 0) {
        pcVar15 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe6b748f;
        (*pcVar15)(0,param_3,0);
        lVar24 = param_3[6];
        cVar1 = *(char *)((long)param_3 + 0x24);
        plVar3 = (long *)*param_3;
      }
      if (cVar1 == '\x02') {
        plVar3 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe6b74b1;
      plVar12 = (long *)func_0x0488e200(lVar6,lVar24,0x518027de,plVar3);
    }
    lVar6 = *plVar17;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe6b74c1;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x40),lVar6);
    bVar22 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar22 | 1;
    pcVar15 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe6b74de;
    uVar13 = (*pcVar15)(param_2);
    *(byte *)((long)param_2 + 9) = bVar22;
    if ((uVar13 >> 0x20 & 1) == 0) {
      lVar6 = param_3[5];
      uVar7 = (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) = uVar7;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6b751e;
      cVar1 = func_0x0e6b77c0(param_2,lVar6,plVar12,param_4,plVar17,6);
      if (cVar1 != '\0') {
        return;
      }
      lVar6 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar7;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6b754c;
      cVar1 = func_0x0e6b79d0(param_2,lVar6,plVar12,param_4,plVar17,6);
      if (cVar1 != '\0') {
        return;
      }
      lVar6 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar7;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6b757a;
      cVar1 = func_0x0e6b7bf0(param_2,lVar6,plVar12,param_4,plVar17,6);
      if (cVar1 != '\0') {
        return;
      }
      lVar6 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar7;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6b75a8;
      cVar1 = func_0x0e6b7e10(param_2,lVar6,plVar12,param_4,plVar17,6);
      if (cVar1 != '\0') {
        return;
      }
      lVar6 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x60) = uVar7;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6b75d6;
      cVar1 = func_0x0e6b8030(param_2,lVar6,plVar12,param_4,plVar17,6);
      if (cVar1 != '\0') {
        return;
      }
      lVar6 = param_3[5];
      uVar13 = 6;
      *(ulong *)((long)register0x00000020 + -0x60) = uVar7;
    }
    else {
      if (5 < (uint)uVar13) {
        lVar6 = *plVar17;
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe6b7764;
        func_0x0ed5ffe0(lVar6,8,(undefined1 *)((long)register0x00000020 + -0x48));
        if ((*(ulong *)((long)register0x00000020 + -0x48) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar15 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0xe6b7788;
        (*pcVar15)(&DAT_0f5463b0,
                   (*(ulong *)((long)register0x00000020 + -0x48) & 0xff00ffffffffffff) - 8);
        return;
      }
      lVar6 = param_3[5];
      *(ulong *)((long)register0x00000020 + -0x50) =
           (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(ulong *)((long)register0x00000020 + -0x60) =
           (ulong)*(uint *)((long)register0x00000020 + -0x38);
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x40);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6b7641;
      cVar1 = func_0x0e6b77c0(param_2,lVar6,plVar12,param_4,plVar17,uVar13 & 0xff);
      if (cVar1 != '\0') {
        return;
      }
      lVar6 = param_3[5];
      uVar13 = uVar13 & 0xff;
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6b7672;
      cVar1 = func_0x0e6b79d0(param_2,lVar6,plVar12,param_4,plVar17,uVar13);
      if (cVar1 != '\0') {
        return;
      }
      lVar6 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6b769f;
      cVar1 = func_0x0e6b7bf0(param_2,lVar6,plVar12,param_4,plVar17,uVar13);
      if (cVar1 != '\0') {
        return;
      }
      lVar6 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6b76cc;
      cVar1 = func_0x0e6b7e10(param_2,lVar6,plVar12,param_4,plVar17,uVar13);
      if (cVar1 != '\0') {
        return;
      }
      lVar6 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6b76f9;
      cVar1 = func_0x0e6b8030(param_2,lVar6,plVar12,param_4,plVar17,uVar13);
      if (cVar1 != '\0') {
        return;
      }
      lVar6 = param_3[5];
      *(undefined8 *)((long)register0x00000020 + -0x60) =
           *(undefined8 *)((long)register0x00000020 + -0x50);
    }
    *(undefined8 *)((long)register0x00000020 + -0x68) =
         *(undefined8 *)((long)register0x00000020 + -0x58);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0xe6b7726;
    func_0x0e6b8260(param_2,lVar6,plVar12,param_4,plVar17,uVar13);
    return;
  }
  if (bVar22 != 1) {
    uStack_1a8 = (long *)0x120000012f2525;
    uStack_1b0 = 0xe6b34fc;
    func_0x0ed5ffe0(*plStack_f0,8,&uStack_1a8);
    if (((ulong)uStack_1a8 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1b0 = 0xe6b351f;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_1a8 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1b0 = 0xe6b3405;
  uStack_f8 = param_4;
  plStack_80 = param_2;
  func_0x0ed6d600(&lStack_68,*plStack_f0);
  puStack_100 = (uint *)param_3[5];
  lVar6 = *plVar3;
  ppppppuStack_78 = (undefined8 ******)((long)puStack_a0 + 9);
  bVar28 = (*(byte *)(puStack_a0 + 1) & 1) == 0;
  ppppppuVar21 = (undefined8 ******)puStack_a0[3];
  if (bVar28) {
    ppppppuVar21 = ppppppuStack_78;
  }
  uVar13 = (ulong)(*(byte *)(puStack_a0 + 1) >> 1);
  if (!bVar28) {
    uVar13 = puStack_a0[2];
  }
  if (ppppppuVar21 == (undefined8 ******)0x0) {
    puStack_158 = (undefined *)((ulong)((uint)uVar13 & 0x7f) << 0x30);
  }
  else if (uVar13 < 0x80) {
    puStack_158 = (undefined *)(uVar13 << 0x30 | (ulong)ppppppuVar21 & 0xff00ffffffffffff);
  }
  else {
    lVar24 = uVar13 + 9;
    uStack_1b0 = 0xe6b3560;
    lStack_70 = lVar6;
    puVar5 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
    if (puVar5 == (ulong *)0x0 && lVar24 != 0) {
      uStack_1b0 = 0xe6b5163;
      func_0x0eec74c0(lVar24,8);
    }
    *puVar5 = uVar13;
    uStack_1b0 = 0xe6b358a;
    func_0x0eee2f00(puVar5 + 1,ppppppuVar21,uVar13);
    *(undefined1 *)((long)puVar5 + uVar13 + 8) = 0;
    puStack_158 = (undefined *)((ulong)(puVar5 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    lVar6 = lStack_70;
  }
  ppppppuVar21 = ppppppuStack_78;
  uStack_1b0 = 0xe6b35ce;
  puVar4 = (uint *)func_0x0ed6d180(lVar6,&puStack_158,0);
  plVar3 = plStack_80;
  if (((ulong)puStack_158 & 0x80000000000000) != 0) {
    uStack_1b0 = 0xe6b360f;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_158 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_158 = (undefined *)0x0;
  bVar28 = (*(byte *)(puStack_a0 + 1) & 1) == 0;
  ppppppuVar25 = (undefined8 ******)puStack_a0[3];
  if (bVar28) {
    ppppppuVar25 = ppppppuVar21;
  }
  uVar13 = (ulong)(*(byte *)(puStack_a0 + 1) >> 1);
  if (!bVar28) {
    uVar13 = puStack_a0[2];
  }
  uStack_1b0 = 0xe6b3643;
  cVar1 = (**(code **)(*plVar3 + 0xb8))(plVar3,ppppppuVar25,uVar13);
  if (cVar1 == '\0') {
    uStack_1b0 = 0xe6b375b;
    _auStack_148 = (*(code *)*puStack_a0)(puStack_100);
    uStack_1b0 = 0xe6b377a;
    func_0x0ed8bc80(&uStack_1a8,auStack_148,*(undefined1 *)(lVar6 + 0x2aa));
    uVar13 = (ulong)uStack_1a8 >> 1 & 0x7f;
    pcVar15 = (code *)((long)&uStack_1a8 + 1);
    if (((ulong)uStack_1a8 & 1) != 0) {
      uVar13 = uStack_1a0;
      pcVar15 = pcStack_198;
    }
    pppppppuStack_e8 = (undefined8 *******)0x0;
    if (pcVar15 == (code *)0x0) {
      pppppppuStack_e8 = (undefined8 *******)((ulong)((uint)uVar13 & 0x7f) << 0x30);
    }
    else {
      lVar24 = uVar13 + 9;
      uStack_1b0 = 0xe6b37d4;
      puStack_100 = puVar4;
      puVar5 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
      if (lVar24 != 0 && puVar5 == (ulong *)0x0) {
        uStack_1b0 = 0xe6b5175;
        func_0x0eec74c0(lVar24,8);
      }
      *puVar5 = uVar13;
      uStack_1b0 = 0xe6b3804;
      func_0x0eee2f00(puVar5 + 1,pcVar15,uVar13);
      *(undefined1 *)((long)puVar5 + uVar13 + 8) = 0;
      pppppppuStack_e8 =
           (undefined8 *******)((ulong)(puVar5 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      puVar4 = puStack_100;
    }
    plVar3 = plStack_80;
    uStack_1b0 = 0xe6b39aa;
    func_0x0ed5ffe0(lVar6,8,&pppppppuStack_e8);
    ppppppuVar21 = ppppppuStack_78;
    if (((ulong)pppppppuStack_e8 & 0x80000000000000) != 0) {
      uStack_1b0 = 0xe6b39eb;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_e8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_e8 = (undefined8 *******)0x0;
    if (((ulong)uStack_1a8 & 1) != 0) {
      uStack_1b0 = 0xe6b3a0f;
      func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
    }
    uStack_98 = (long *)0x0;
    uStack_90 = 0;
    pcStack_88 = (code *)0x0;
  }
  else {
    uStack_1b0 = 0xe6b3661;
    (**(code **)(*plVar3 + 0x80))(auStack_148,plVar3,0x40);
    cStack_168 = cStack_108;
    if (cStack_108 == '\0') {
      uStack_1a8 = (long *)auStack_148;
      uStack_1a0 = (ulong)plStack_140;
      pcStack_198 = pcStack_138;
      pcStack_190 = pcStack_130;
      uStack_188 = lStack_128;
      lStack_180 = lStack_120;
      lStack_178 = lStack_118;
      puStack_170 = puStack_110;
      pppppppuStack_e8 = (undefined8 *******)puStack_a0[3];
      uStack_e0 = puStack_a0[2];
      if ((*(byte *)(puStack_a0 + 1) & 1) == 0) {
        pppppppuStack_e8 = (undefined8 *******)ppppppuVar21;
        uStack_e0 = (ulong)(*(byte *)(puStack_a0 + 1) >> 1);
      }
      uStack_1b0 = 0xe6b38c5;
      lStack_70 = lVar6;
      func_0x0470d9a0(auStack_148,&UNK_01377405,0x15,0xd,&pppppppuStack_e8);
      plVar3 = (long *)((ulong)auStack_148 >> 1 & 0x7f);
      pcVar15 = (code *)(auStack_148 + 1);
      if (((ulong)auStack_148 & 1) != 0) {
        plVar3 = plStack_140;
        pcVar15 = pcStack_138;
      }
      pppppppuStack_e8 = (undefined8 *******)0x0;
      if (pcVar15 == (code *)0x0) {
        pppppppuStack_e8 = (undefined8 *******)((ulong)((uint)plVar3 & 0x7f) << 0x30);
      }
      else {
        lVar6 = (long)plVar3 + 9;
        uStack_1b0 = 0xe6b391d;
        puStack_100 = puVar4;
        puVar5 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar6,8);
        if (lVar6 != 0 && puVar5 == (ulong *)0x0) {
          uStack_1b0 = 0xe6b5187;
          func_0x0eec74c0(lVar6,8);
        }
        *puVar5 = (ulong)plVar3;
        uStack_1b0 = 0xe6b394d;
        func_0x0eee2f00(puVar5 + 1,pcVar15,plVar3);
        *(undefined1 *)((long)puVar5 + (long)plVar3 + 8U) = 0;
        pppppppuStack_e8 =
             (undefined8 *******)((ulong)(puVar5 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        puVar4 = puStack_100;
      }
      plVar3 = plStack_80;
      uStack_1b0 = 0xe6b3a7c;
      func_0x0ed5ffe0(lStack_70,8,&pppppppuStack_e8);
      if (((ulong)pppppppuStack_e8 & 0x80000000000000) != 0) {
        uStack_1b0 = 0xe6b3ab5;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_e8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_e8 = (undefined8 *******)0x0;
      if (((ulong)auStack_148 & 1) != 0) {
        uStack_1b0 = 0xe6b3adb;
        func_0x0412a280(pcStack_138,(ulong)auStack_148 & 0xfffffffffffffffe);
      }
      uStack_98 = (long *)0x0;
      uStack_90 = 0;
      pcStack_88 = (code *)0x0;
    }
    else {
      pcStack_198 = pcStack_138;
      uStack_1a8 = (long *)auStack_148;
      uStack_1a0 = (ulong)plStack_140;
      plVar17 = (long *)(ulong)(byte)(auStack_148[0] >> 1);
      pcVar15 = (code *)((long)&uStack_1a8 + 1);
      if (((ulong)auStack_148 & 1) != 0) {
        plVar17 = plStack_140;
        pcVar15 = pcStack_138;
      }
      bVar22 = auStack_148[0];
      if (plVar17 != (long *)0x0) {
        uStack_1b0 = 0xe6b36ad;
        plVar12 = (long *)func_0x0eee3290();
        pcVar16 = pcVar15;
        for (uVar13 = (ulong)plVar17 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar16 = *(code *)(*plVar12 + (ulong)(byte)*pcVar16 * 4);
          pcVar16 = pcVar16 + 1;
        }
        if (3 < plVar17) {
          do {
            *pcVar16 = *(code *)(*plVar12 + (ulong)(byte)*pcVar16 * 4);
            pcVar16[1] = *(code *)(*plVar12 + (ulong)(byte)pcVar16[1] * 4);
            pcVar16[2] = *(code *)(*plVar12 + (ulong)(byte)pcVar16[2] * 4);
            pcVar16[3] = *(code *)(*plVar12 + (ulong)(byte)pcVar16[3] * 4);
            pcVar16 = pcVar16 + 4;
          } while (pcVar16 != pcVar15 + (long)plVar17);
        }
        bVar22 = (byte)uStack_1a8;
      }
      if ((bVar22 & 1) == 0) {
        pcStack_88 = pcStack_198;
        uStack_98 = uStack_1a8;
        uStack_90 = uStack_1a0;
      }
      else {
        uStack_1b0 = 0xe6b3a42;
        func_0x0412e5e0(&uStack_98,pcStack_198,uStack_1a0);
      }
    }
    lVar6 = lStack_180;
    if (cStack_168 == '\x01') {
      ppppppuVar21 = ppppppuStack_78;
      if (((ulong)uStack_1a8 & 1) != 0) {
        uVar13 = (ulong)uStack_1a8 & 0xfffffffffffffffe;
LAB_0e6b3bbc:
        uStack_1b0 = 0xe6b3bc1;
        func_0x0412a280(pcStack_198,uVar13);
        ppppppuVar21 = ppppppuStack_78;
      }
    }
    else {
      if (lStack_180 != 0) {
        while (lVar6 != lStack_178) {
          uStack_1b0 = 0xe6b3b3c;
          FUN_048b3e80(lStack_178 + -0x40);
          lStack_178 = lStack_178 + -0x40;
        }
        lStack_178 = lVar6;
        uStack_1b0 = 0xe6b3b58;
        func_0x0412a280(lStack_180,(long)puStack_170 - lStack_180);
      }
      pcVar16 = pcStack_198;
      ppppppuVar21 = ppppppuStack_78;
      pcVar15 = pcStack_190;
      if (pcStack_198 != (code *)0x0) {
        for (; pcVar16 != pcVar15; pcVar15 = pcVar15 + -0x50) {
          if ((pcVar15[-8] == (code)0x1) && (((byte)pcVar15[-0x30] & 1) != 0)) {
            uStack_1b0 = 0xe6b3ba8;
            func_0x0412a280(*(undefined8 *)(pcVar15 + -0x20),
                            *(ulong *)(pcVar15 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_190 = pcVar16;
        uVar13 = uStack_188 - (long)pcStack_198;
        goto LAB_0e6b3bbc;
      }
    }
  }
  uStack_1b0 = 0xe6b3bd5;
  (**(code **)(*plVar3 + 0xd0))(plVar3);
  lVar6 = *(long *)(puVar4 + 2);
  uVar23 = *(uint *)(lVar6 + 0x1c + (ulong)*puVar4 * 0x20);
  *puVar4 = uVar23;
  if (puVar4[0x48] == 0) {
    uVar14 = puVar4[4];
LAB_0e6b3c17:
    lVar24 = lVar6 + (ulong)uVar14 * 0x20;
    uVar13 = (ulong)*(uint *)(lVar6 + -0x10 + (ulong)uVar14 * 0x20);
    if (uVar13 != 0xffffffff) {
      uStack_1b0 = 0xe6b3c40;
      (**(code **)(&UNK_0f4e40d0 + uVar13 * 8))(&uStack_1a8,lVar24 + -0x18);
      uVar14 = puVar4[4];
    }
    *(undefined4 *)(lVar24 + -0x10) = 0xffffffff;
    puVar4[4] = uVar14 - 1;
    ppppppuVar21 = ppppppuStack_78;
  }
  else if ((*(uint *)(*(long *)(puVar4 + 0x46) + 0x18 + (ulong)(puVar4[0x48] - 1) * 0x30) != uVar23)
          && (uVar14 = puVar4[4], uVar23 == uVar14 - 1)) goto LAB_0e6b3c17;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1b0 = 0xe6b3c86;
    auStack_40 = (*(code *)*puStack_a0)();
    uVar9 = auStack_40._8_8_;
    lVar6 = auStack_40._0_8_;
    uVar13 = (ulong)uStack_98 >> 1 & 0x7f;
    pcVar15 = (code *)((long)&uStack_98 + 1);
    if (((ulong)uStack_98 & 1) != 0) {
      uVar13 = uStack_90;
      pcVar15 = pcStack_88;
    }
    if (uVar13 == 0) {
      uVar23 = 0x811c9dc5;
    }
    else {
      uVar7 = (ulong)((uint)uVar13 & 3);
      if (uVar13 < 4) {
        uVar23 = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uVar23 = 0x811c9dc5;
        uVar19 = 0;
        do {
          uVar23 = ((int)(char)pcVar15[uVar19 + 3] ^
                   ((int)(char)pcVar15[uVar19 + 2] ^
                   ((int)(char)pcVar15[uVar19 + 1] ^
                   ((int)(char)pcVar15[uVar19] ^ uVar23) * 0x1000193) * 0x1000193) * 0x1000193) *
                   0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar13 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar7 != 0) {
        uVar13 = 0;
        do {
          uVar23 = ((int)(char)pcVar15[uVar13 + uVar19] ^ uVar23) * 0x1000193;
          uVar13 = uVar13 + 1;
        } while (uVar7 != uVar13);
      }
    }
    if (lVar6 == 0) {
      uStack_1b0 = 0xe6b3d81;
      lVar6 = func_0x048aead0(uVar9);
    }
    uStack_1b0 = 0xe6b3d93;
    plStack_58 = (long *)FUN_048b0c90(uVar9,lVar6,uVar23,1);
    if (plStack_58 == (long *)0x0) {
      uStack_1a8 = (long *)0x0;
      uStack_1a0 = 0;
      uStack_1b0 = 0xe6b3dc1;
      func_0x048b0d20(&uStack_1a8);
      plStack_58 = uStack_1a8;
      uStack_50 = uStack_1a0;
      if (uStack_1a8 == (long *)0x0) {
        lVar6 = *plStack_f0;
        uStack_1b0 = 0xe6b443e;
        func_0x0ed8bc80(&uStack_1a8,auStack_40,*(undefined1 *)(lVar6 + 0x2aa));
        uStack_1b0 = 0xe6b4452;
        uVar9 = func_0x0412f8c0(&uStack_1a8,&UNK_01479aea,10);
        uVar13 = (ulong)uStack_98 >> 1 & 0x7f;
        pcVar15 = (code *)((long)&uStack_98 + 1);
        if (((ulong)uStack_98 & 1) != 0) {
          uVar13 = uStack_90;
          pcVar15 = pcStack_88;
        }
        uStack_1b0 = 0xe6b447e;
        uVar9 = func_0x0412f8c0(uVar9,pcVar15,uVar13);
        uStack_1b0 = 0xe6b4492;
        pbVar10 = (byte *)func_0x0412f8c0(uVar9,&UNK_0125506d,1);
        bVar28 = (*pbVar10 & 1) != 0;
        pbVar26 = pbVar10 + 1;
        if (bVar28) {
          pbVar26 = *(byte **)(pbVar10 + 0x10);
        }
        uVar13 = (ulong)(*pbVar10 >> 1);
        if (bVar28) {
          uVar13 = *(ulong *)(pbVar10 + 8);
        }
        auStack_148 = (undefined1  [8])0x0;
        uStack_1b0 = 0xe6b44c4;
        func_0x0ee387f0(auStack_148,pbVar26,uVar13,1);
        uStack_1b0 = 0xe6b44d6;
        func_0x0ed5ffe0(lVar6,8,auStack_148);
        uStack_1b0 = 0xe6b44e0;
        func_0x0ee386e0(auStack_148);
        if (((ulong)uStack_1a8 & 1) != 0) {
          uStack_1b0 = 0xe6b44fc;
          func_0x0412a280(pcStack_198,(ulong)uStack_1a8 & 0xfffffffffffffffe);
        }
        goto LAB_0e6b50cb;
      }
    }
    else {
      uStack_50 = auStack_40._8_8_;
    }
    lStack_178 = 0;
    puStack_170 = (undefined *)0x0;
    uStack_188 = 0;
    lStack_180 = 0;
    pcStack_198 = (code *)0x0;
    pcStack_190 = (code *)0x0;
    uStack_1a8 = (long *)0x0;
    uStack_1a0 = 0;
    uStack_1b0 = 0xe6b3df6;
    func_0x05d84ba0(&uStack_1a8);
    uStack_1b0 = 0xe6b3e0e;
    func_0x05d9a920(&pppppppuStack_e8,&plStack_58,&uStack_1a8);
    if (pcStack_190 != (code *)0x0) {
      uStack_1b0 = 0xe6b3e1d;
      (*pcStack_190)(&uStack_1a8);
    }
    bVar28 = (*(byte *)(puStack_a0 + 1) & 1) != 0;
    if (bVar28) {
      ppppppuVar21 = (undefined8 ******)puStack_a0[3];
    }
    uVar13 = (ulong)(*(byte *)(puStack_a0 + 1) >> 1);
    if (bVar28) {
      uVar13 = puStack_a0[2];
    }
    if (uVar13 == 0) {
      uVar23 = 0x811c9dc5;
    }
    else {
      uVar7 = (ulong)((uint)uVar13 & 3);
      if (uVar13 < 4) {
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
        } while ((uVar13 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar7 != 0) {
        uVar13 = 0;
        do {
          uVar23 = ((int)*(char *)((long)ppppppuVar21 + uVar13 + uVar19) ^ uVar23) * 0x1000193;
          uVar13 = uVar13 + 1;
        } while (uVar7 != uVar13);
      }
    }
    cVar1 = *(char *)((long)param_3 + 0x24);
    plVar17 = (long *)*param_3;
    plVar12 = plVar17;
    if (cVar1 == '\x02') {
      plVar12 = param_3;
    }
    if (plVar12 == (long *)0x0 || (int)param_3[4] != 0x518027de) {
      lVar6 = param_3[5];
      lVar24 = param_3[6];
      if (lVar24 == 0) {
        uStack_1b0 = 0xe6b3f1e;
        (*(code *)param_3[7])(0,param_3,0);
        lVar24 = param_3[6];
        cVar1 = *(char *)((long)param_3 + 0x24);
        plVar17 = (long *)*param_3;
      }
      if (cVar1 == '\x02') {
        plVar17 = param_3;
      }
      uStack_1b0 = 0xe6b3f40;
      plVar12 = (long *)func_0x0488e200(lVar6,lVar24,0x518027de,plVar17);
    }
    plVar17 = (long *)param_3[5];
    if (DAT_0f755818 == '\0') {
      uStack_1b0 = 0xe6b5198;
      iVar2 = FUN_04108328(&DAT_0f755818);
      if (iVar2 != 0) {
        uStack_1b0 = 0xe6b51a5;
        func_0x0e542e30();
        uStack_1b0 = 0xe6b51bf;
        __cxa_atexit(&UNK_048ae800,&DAT_0f755798,0xf53dab8);
        uStack_1b0 = 0xe6b51cb;
        func_0x0410844d(&DAT_0f755818);
      }
    }
    plVar18 = (long *)(*plVar17 +
                      (ulong)((int)((ulong)(plVar17[1] - *plVar17) >> 3) - 1U &
                             *(uint *)(_DAT_0f755798 + 4)) * 8);
    do {
      lVar6 = *plVar18;
      if (lVar6 == -1) {
        plVar11 = (long *)plVar17[4];
        plVar18 = plVar11;
        goto LAB_0e6b3fa4;
      }
      plVar18 = (long *)(plVar17[3] + lVar6 * 0x18);
    } while (*(uint *)(plVar17[3] + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f755798 + 4));
    plVar11 = (long *)plVar17[4];
LAB_0e6b3fa4:
    if (plVar18 == plVar11) {
      puVar27 = &DAT_0f755798;
    }
    else {
      puVar27 = (undefined *)plVar18[2];
    }
    uStack_1b0 = 0xe6b3fc5;
    auVar8 = (undefined1  [8])FUN_048b0c90(plVar17,puVar27,uVar23,1);
    plStack_150 = plVar17;
    if (auVar8 == (undefined1  [8])0x0) {
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1b0 = 0xe6b3fdc;
      func_0x048b0d20(auStack_148);
      auVar8 = auStack_148;
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
    uStack_1b0 = 0xe6b4017;
    puStack_158 = (undefined *)auVar8;
    func_0x05d84ba0(auStack_148);
    uStack_1b0 = 0xe6b4029;
    func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
    if ((lStack_180 == lStack_c0) && ((lStack_b0 != 0) == (puStack_170 != (undefined *)0x0))) {
      if ((cStack_c4 == '\0') || ((int)uStack_188 != iStack_c8)) {
        bVar28 = cStack_c4 == '\0' && uStack_188._4_1_ == '\0';
      }
      else {
        pppppppuVar20 = pppppppuStack_e8;
        if (cStack_c4 == '\x02') {
          pppppppuVar20 = &pppppppuStack_e8;
        }
        uStack_1b0 = 0xe6b4a59;
        lVar6 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar20);
        bVar28 = lVar6 != 0;
      }
    }
    else {
      bVar28 = false;
    }
    if (pcStack_190 != (code *)0x0) {
      uStack_1b0 = 0xe6b4067;
      (*pcStack_190)(&uStack_1a8);
    }
    if (pcStack_130 != (code *)0x0) {
      uStack_1b0 = 0xe6b4078;
      (*pcStack_130)(auStack_148);
    }
    if (bVar28) {
      lVar6 = param_3[5];
      if ((ulong)*(uint *)(plVar12 + 9) != 0xffffffff) {
        uStack_1b0 = 0xe6b40a6;
        (**(code **)(&UNK_0f4bd880 + (ulong)*(uint *)(plVar12 + 9) * 8))(auStack_148,plVar12);
      }
      *(undefined4 *)(plVar12 + 9) = 0;
      pcStack_198 = (code *)&UNK_0e5430e0;
      pcStack_190 = (code *)0x0;
      uStack_188 = CONCAT35(uStack_188._5_3_,0x3655e2ced);
      lStack_178 = 0;
      puStack_170 = &UNK_0e543000;
      lStack_128 = plStack_f0[4];
      auStack_148 = (undefined1  [8])*plStack_f0;
      plStack_140 = (long *)plStack_f0[1];
      pcStack_138 = (code *)plStack_f0[2];
      pcStack_130 = (code *)plStack_f0[3];
      plVar17 = (long *)plStack_f0[2];
      lStack_180 = lVar6;
      if (plVar17 == (long *)0x0) {
        pcStack_138 = (code *)0x0;
        uStack_1a8 = plVar12;
      }
      else {
        uStack_1b0 = 0xe6b4128;
        uStack_1a8 = plVar12;
        pcStack_138 = (code *)(**(code **)(*plVar17 + 0x30))(plVar17,0);
      }
      puStack_158 = &UNK_0f4c6538;
      uStack_1b0 = 0xe6b4404;
      func_0x0ed75bc0(&puStack_158,plVar3,&uStack_1a8,uStack_f8,auStack_148);
      if (pcStack_190 != (code *)0x0) {
        uStack_1b0 = 0xe6b4417;
        (*pcStack_190)(&uStack_1a8);
      }
    }
    else {
      plVar17 = (long *)param_3[5];
      if (DAT_0f7558d0 == '\0') {
        uStack_1b0 = 0xe6b51dc;
        iVar2 = FUN_04108328(&DAT_0f7558d0);
        if (iVar2 != 0) {
          uStack_1b0 = 0xe6b51e9;
          func_0x0e543e40();
          uStack_1b0 = 0xe6b5203;
          __cxa_atexit(&UNK_048ae800,&DAT_0f755850,0xf53dab8);
          uStack_1b0 = 0xe6b520f;
          func_0x0410844d(&DAT_0f7558d0);
        }
      }
      plVar18 = (long *)(*plVar17 +
                        (ulong)((int)((ulong)(plVar17[1] - *plVar17) >> 3) - 1U &
                               *(uint *)(_DAT_0f755850 + 4)) * 8);
      do {
        lVar6 = *plVar18;
        if (lVar6 == -1) {
          plVar11 = (long *)plVar17[4];
          plVar18 = plVar11;
          goto LAB_0e6b4194;
        }
        plVar18 = (long *)(plVar17[3] + lVar6 * 0x18);
      } while (*(uint *)(plVar17[3] + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f755850 + 4));
      plVar11 = (long *)plVar17[4];
LAB_0e6b4194:
      if (plVar18 == plVar11) {
        puVar27 = &DAT_0f755850;
      }
      else {
        puVar27 = (undefined *)plVar18[2];
      }
      uStack_1b0 = 0xe6b41f1;
      auVar8 = (undefined1  [8])FUN_048b0c90(plVar17,puVar27,uVar23,1);
      if (auVar8 == (undefined1  [8])0x0) {
        auStack_148 = (undefined1  [8])0x0;
        plStack_140 = (long *)0x0;
        uStack_1b0 = 0xe6b4208;
        func_0x048b0d20(auStack_148);
        auVar8 = auStack_148;
        plVar17 = plStack_140;
      }
      lStack_118 = 0;
      puStack_110 = (undefined *)0x0;
      lStack_128 = 0;
      lStack_120 = 0;
      pcStack_138 = (code *)0x0;
      pcStack_130 = (code *)0x0;
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1b0 = 0xe6b4243;
      puStack_158 = (undefined *)auVar8;
      plStack_150 = plVar17;
      func_0x05d84ba0(auStack_148);
      uStack_1b0 = 0xe6b4255;
      func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
      if ((lStack_180 == lStack_c0) && ((lStack_b0 != 0) == (puStack_170 != (undefined *)0x0))) {
        if ((cStack_c4 == '\0') || ((int)uStack_188 != iStack_c8)) {
          bVar28 = cStack_c4 == '\0' && uStack_188._4_1_ == '\0';
        }
        else {
          pppppppuVar20 = pppppppuStack_e8;
          if (cStack_c4 == '\x02') {
            pppppppuVar20 = &pppppppuStack_e8;
          }
          uStack_1b0 = 0xe6b4d17;
          lVar6 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar20);
          bVar28 = lVar6 != 0;
        }
      }
      else {
        bVar28 = false;
      }
      if (pcStack_190 != (code *)0x0) {
        uStack_1b0 = 0xe6b4293;
        (*pcStack_190)(&uStack_1a8);
      }
      if (pcStack_130 != (code *)0x0) {
        uStack_1b0 = 0xe6b42a4;
        (*pcStack_130)(auStack_148);
      }
      if (bVar28) {
        lVar6 = param_3[5];
        if ((ulong)*(uint *)(plVar12 + 9) != 0xffffffff) {
          uStack_1b0 = 0xe6b42d2;
          (**(code **)(&UNK_0f4bd880 + (ulong)*(uint *)(plVar12 + 9) * 8))(auStack_148,plVar12);
        }
        *plVar12 = 0;
        plVar12[1] = 0;
        plVar12[2] = 0;
        *(undefined4 *)(plVar12 + 9) = 1;
        pcStack_198 = (code *)&UNK_0e544140;
        pcStack_190 = (code *)0x0;
        uStack_188 = CONCAT35(uStack_188._5_3_,0x301bc7cf3);
        lStack_178 = 0;
        puStack_170 = &UNK_0e544060;
        lStack_128 = plStack_f0[4];
        auStack_148 = (undefined1  [8])*plStack_f0;
        plStack_140 = (long *)plStack_f0[1];
        pcStack_138 = (code *)plStack_f0[2];
        pcStack_130 = (code *)plStack_f0[3];
        plVar17 = (long *)plStack_f0[2];
        lStack_180 = lVar6;
        if (plVar17 == (long *)0x0) {
          pcStack_138 = (code *)0x0;
          uStack_1a8 = plVar12;
        }
        else {
          uStack_1b0 = 0xe6b4367;
          uStack_1a8 = plVar12;
          pcStack_138 = (code *)(**(code **)(*plVar17 + 0x30))(plVar17,1);
        }
        puStack_158 = &UNK_0f4c65b8;
        uStack_1b0 = 0xe6b477f;
        func_0x0ed75bc0(&puStack_158,plVar3,&uStack_1a8,uStack_f8,auStack_148);
        if (pcStack_190 != (code *)0x0) {
          uStack_1b0 = 0xe6b4792;
          (*pcStack_190)(&uStack_1a8);
        }
      }
      else {
        plVar17 = (long *)param_3[5];
        if (DAT_0f755988 == '\0') {
          uStack_1b0 = 0xe6b5220;
          iVar2 = FUN_04108328(&DAT_0f755988);
          if (iVar2 != 0) {
            uStack_1b0 = 0xe6b522d;
            func_0x0e545760();
            uStack_1b0 = 0xe6b5247;
            __cxa_atexit(&UNK_048ae800,&DAT_0f755908,0xf53dab8);
            uStack_1b0 = 0xe6b5253;
            func_0x0410844d(&DAT_0f755988);
          }
        }
        plVar18 = (long *)(*plVar17 +
                          (ulong)((int)((ulong)(plVar17[1] - *plVar17) >> 3) - 1U &
                                 *(uint *)(_DAT_0f755908 + 4)) * 8);
        do {
          lVar6 = *plVar18;
          if (lVar6 == -1) {
            plVar11 = (long *)plVar17[4];
            plVar18 = plVar11;
            goto LAB_0e6b4515;
          }
          plVar18 = (long *)(plVar17[3] + lVar6 * 0x18);
        } while (*(uint *)(plVar17[3] + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f755908 + 4));
        plVar11 = (long *)plVar17[4];
LAB_0e6b4515:
        if (plVar18 == plVar11) {
          puVar27 = &DAT_0f755908;
        }
        else {
          puVar27 = (undefined *)plVar18[2];
        }
        uStack_1b0 = 0xe6b4572;
        auVar8 = (undefined1  [8])FUN_048b0c90(plVar17,puVar27,uVar23,1);
        if (auVar8 == (undefined1  [8])0x0) {
          auStack_148 = (undefined1  [8])0x0;
          plStack_140 = (long *)0x0;
          uStack_1b0 = 0xe6b4589;
          func_0x048b0d20(auStack_148);
          auVar8 = auStack_148;
          plVar17 = plStack_140;
        }
        lStack_118 = 0;
        puStack_110 = (undefined *)0x0;
        lStack_128 = 0;
        lStack_120 = 0;
        pcStack_138 = (code *)0x0;
        pcStack_130 = (code *)0x0;
        auStack_148 = (undefined1  [8])0x0;
        plStack_140 = (long *)0x0;
        uStack_1b0 = 0xe6b45c4;
        puStack_158 = (undefined *)auVar8;
        plStack_150 = plVar17;
        func_0x05d84ba0(auStack_148);
        uStack_1b0 = 0xe6b45d6;
        func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
        if ((lStack_180 == lStack_c0) && ((lStack_b0 != 0) == (puStack_170 != (undefined *)0x0))) {
          if ((cStack_c4 == '\0') || ((int)uStack_188 != iStack_c8)) {
            bVar28 = cStack_c4 == '\0' && uStack_188._4_1_ == '\0';
          }
          else {
            pppppppuVar20 = pppppppuStack_e8;
            if (cStack_c4 == '\x02') {
              pppppppuVar20 = &pppppppuStack_e8;
            }
            uStack_1b0 = 0xe6b5011;
            lVar6 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar20);
            bVar28 = lVar6 != 0;
          }
        }
        else {
          bVar28 = false;
        }
        if (pcStack_190 != (code *)0x0) {
          uStack_1b0 = 0xe6b4614;
          (*pcStack_190)(&uStack_1a8);
        }
        if (pcStack_130 != (code *)0x0) {
          uStack_1b0 = 0xe6b4625;
          (*pcStack_130)(auStack_148);
        }
        if (bVar28) {
          lVar6 = param_3[5];
          if ((ulong)*(uint *)(plVar12 + 9) != 0xffffffff) {
            uStack_1b0 = 0xe6b4653;
            (**(code **)(&UNK_0f4bd880 + (ulong)*(uint *)(plVar12 + 9) * 8))(auStack_148,plVar12);
          }
          plVar12[2] = 0;
          plVar12[3] = 0;
          *plVar12 = 0;
          plVar12[1] = 0;
          *(undefined4 *)(plVar12 + 3) = 0x3f800000;
          *(undefined4 *)(plVar12 + 9) = 2;
          pcStack_198 = (code *)&UNK_0e545a60;
          pcStack_190 = (code *)0x0;
          uStack_188 = CONCAT35(uStack_188._5_3_,0x362a7a5d0);
          lStack_178 = 0;
          puStack_170 = &UNK_0e545980;
          lStack_128 = plStack_f0[4];
          auStack_148 = (undefined1  [8])*plStack_f0;
          plStack_140 = (long *)plStack_f0[1];
          pcStack_138 = (code *)plStack_f0[2];
          pcStack_130 = (code *)plStack_f0[3];
          plVar17 = (long *)plStack_f0[2];
          lStack_180 = lVar6;
          if (plVar17 == (long *)0x0) {
            pcStack_138 = (code *)0x0;
            uStack_1a8 = plVar12;
          }
          else {
            uStack_1b0 = 0xe6b46ed;
            uStack_1a8 = plVar12;
            pcStack_138 = (code *)(**(code **)(*plVar17 + 0x30))(plVar17,2);
          }
          puStack_158 = &UNK_0f4c6638;
          uStack_1b0 = 0xe6b4a10;
          func_0x0ed75bc0(&puStack_158,plVar3,&uStack_1a8,uStack_f8,auStack_148);
          if (pcStack_190 != (code *)0x0) {
            uStack_1b0 = 0xe6b4a23;
            (*pcStack_190)(&uStack_1a8);
          }
        }
        else {
          plVar17 = (long *)param_3[5];
          if (DAT_0f755a40 == '\0') {
            uStack_1b0 = 0xe6b5264;
            iVar2 = FUN_04108328(&DAT_0f755a40);
            if (iVar2 != 0) {
              uStack_1b0 = 0xe6b5271;
              func_0x0e547740();
              uStack_1b0 = 0xe6b528b;
              __cxa_atexit(&UNK_048ae800,&DAT_0f7559c0,0xf53dab8);
              uStack_1b0 = 0xe6b5297;
              func_0x0410844d(&DAT_0f755a40);
            }
          }
          plVar18 = (long *)(*plVar17 +
                            (ulong)((int)((ulong)(plVar17[1] - *plVar17) >> 3) - 1U &
                                   *(uint *)(_DAT_0f7559c0 + 4)) * 8);
          do {
            lVar6 = *plVar18;
            if (lVar6 == -1) {
              plVar11 = (long *)plVar17[4];
              plVar18 = plVar11;
              goto LAB_0e6b47ab;
            }
            plVar18 = (long *)(plVar17[3] + lVar6 * 0x18);
          } while (*(uint *)(plVar17[3] + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f7559c0 + 4));
          plVar11 = (long *)plVar17[4];
LAB_0e6b47ab:
          if (plVar18 == plVar11) {
            puVar27 = &DAT_0f7559c0;
          }
          else {
            puVar27 = (undefined *)plVar18[2];
          }
          uStack_1b0 = 0xe6b4808;
          auVar8 = (undefined1  [8])FUN_048b0c90(plVar17,puVar27,uVar23,1);
          if (auVar8 == (undefined1  [8])0x0) {
            auStack_148 = (undefined1  [8])0x0;
            plStack_140 = (long *)0x0;
            uStack_1b0 = 0xe6b481f;
            func_0x048b0d20(auStack_148);
            auVar8 = auStack_148;
            plVar17 = plStack_140;
          }
          lStack_118 = 0;
          puStack_110 = (undefined *)0x0;
          lStack_128 = 0;
          lStack_120 = 0;
          pcStack_138 = (code *)0x0;
          pcStack_130 = (code *)0x0;
          auStack_148 = (undefined1  [8])0x0;
          plStack_140 = (long *)0x0;
          uStack_1b0 = 0xe6b485a;
          puStack_158 = (undefined *)auVar8;
          plStack_150 = plVar17;
          func_0x05d84ba0(auStack_148);
          uStack_1b0 = 0xe6b486c;
          func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
          if ((lStack_180 == lStack_c0) && ((lStack_b0 != 0) == (puStack_170 != (undefined *)0x0)))
          {
            if ((cStack_c4 == '\0') || ((int)uStack_188 != iStack_c8)) {
              bVar28 = cStack_c4 == '\0' && uStack_188._4_1_ == '\0';
            }
            else {
              pppppppuVar20 = pppppppuStack_e8;
              if (cStack_c4 == '\x02') {
                pppppppuVar20 = &pppppppuStack_e8;
              }
              uStack_1b0 = 0xe6b5115;
              lVar6 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar20);
              bVar28 = lVar6 != 0;
            }
          }
          else {
            bVar28 = false;
          }
          if (pcStack_190 != (code *)0x0) {
            uStack_1b0 = 0xe6b48aa;
            (*pcStack_190)(&uStack_1a8);
          }
          if (pcStack_130 != (code *)0x0) {
            uStack_1b0 = 0xe6b48bb;
            (*pcStack_130)(auStack_148);
          }
          if (bVar28) {
            lVar6 = param_3[5];
            if ((ulong)*(uint *)(plVar12 + 9) != 0xffffffff) {
              uStack_1b0 = 0xe6b48e9;
              (**(code **)(&UNK_0f4bd880 + (ulong)*(uint *)(plVar12 + 9) * 8))(auStack_148,plVar12);
            }
            *plVar12 = 0;
            plVar12[1] = 0;
            plVar12[2] = 0;
            *(undefined4 *)(plVar12 + 9) = 3;
            pcStack_198 = (code *)&UNK_0e547a40;
            pcStack_190 = (code *)0x0;
            uStack_188 = CONCAT35(uStack_188._5_3_,0x3254183f4);
            lStack_178 = 0;
            puStack_170 = &UNK_0e547960;
            lStack_128 = plStack_f0[4];
            auStack_148 = (undefined1  [8])*plStack_f0;
            plStack_140 = (long *)plStack_f0[1];
            pcStack_138 = (code *)plStack_f0[2];
            pcStack_130 = (code *)plStack_f0[3];
            plVar17 = (long *)plStack_f0[2];
            lStack_180 = lVar6;
            if (plVar17 == (long *)0x0) {
              pcStack_138 = (code *)0x0;
              uStack_1a8 = plVar12;
            }
            else {
              uStack_1b0 = 0xe6b497e;
              uStack_1a8 = plVar12;
              pcStack_138 = (code *)(**(code **)(*plVar17 + 0x30))(plVar17,3);
            }
            puStack_158 = &UNK_0f4c66b8;
            uStack_1b0 = 0xe6b4cce;
            func_0x0ed75bc0(&puStack_158,plVar3,&uStack_1a8,uStack_f8,auStack_148);
            if (pcStack_190 != (code *)0x0) {
              uStack_1b0 = 0xe6b4ce1;
              (*pcStack_190)(&uStack_1a8);
            }
          }
          else {
            plVar17 = (long *)param_3[5];
            if (DAT_0f755af8 == '\0') {
              uStack_1b0 = 0xe6b52a8;
              iVar2 = FUN_04108328(&DAT_0f755af8);
              if (iVar2 != 0) {
                uStack_1b0 = 0xe6b52b5;
                func_0x0e549060();
                uStack_1b0 = 0xe6b52cf;
                __cxa_atexit(&UNK_048ae800,&DAT_0f755a78,0xf53dab8);
                uStack_1b0 = 0xe6b52db;
                func_0x0410844d(&DAT_0f755af8);
              }
            }
            plVar18 = (long *)(*plVar17 +
                              (ulong)((int)((ulong)(plVar17[1] - *plVar17) >> 3) - 1U &
                                     *(uint *)(_DAT_0f755a78 + 4)) * 8);
            do {
              lVar6 = *plVar18;
              if (lVar6 == -1) {
                plVar11 = (long *)plVar17[4];
                plVar18 = plVar11;
                goto LAB_0e6b4a3c;
              }
              plVar18 = (long *)(plVar17[3] + lVar6 * 0x18);
            } while (*(uint *)(plVar17[3] + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f755a78 + 4));
            plVar11 = (long *)plVar17[4];
LAB_0e6b4a3c:
            if (plVar18 == plVar11) {
              puVar27 = &DAT_0f755a78;
            }
            else {
              puVar27 = (undefined *)plVar18[2];
            }
            uStack_1b0 = 0xe6b4ab7;
            auVar8 = (undefined1  [8])FUN_048b0c90(plVar17,puVar27,uVar23,1);
            if (auVar8 == (undefined1  [8])0x0) {
              auStack_148 = (undefined1  [8])0x0;
              plStack_140 = (long *)0x0;
              uStack_1b0 = 0xe6b4ace;
              func_0x048b0d20(auStack_148);
              auVar8 = auStack_148;
              plVar17 = plStack_140;
            }
            lStack_118 = 0;
            puStack_110 = (undefined *)0x0;
            lStack_128 = 0;
            lStack_120 = 0;
            pcStack_138 = (code *)0x0;
            pcStack_130 = (code *)0x0;
            auStack_148 = (undefined1  [8])0x0;
            plStack_140 = (long *)0x0;
            uStack_1b0 = 0xe6b4b09;
            puStack_158 = (undefined *)auVar8;
            plStack_150 = plVar17;
            func_0x05d84ba0(auStack_148);
            uStack_1b0 = 0xe6b4b1b;
            func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
            if ((lStack_180 == lStack_c0) && ((lStack_b0 != 0) == (puStack_170 != (undefined *)0x0))
               ) {
              if ((cStack_c4 == '\0') || ((int)uStack_188 != iStack_c8)) {
                bVar28 = cStack_c4 == '\0' && uStack_188._4_1_ == '\0';
              }
              else {
                pppppppuVar20 = pppppppuStack_e8;
                if (cStack_c4 == '\x02') {
                  pppppppuVar20 = &pppppppuStack_e8;
                }
                uStack_1b0 = 0xe6b5133;
                lVar6 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar20);
                bVar28 = lVar6 != 0;
              }
            }
            else {
              bVar28 = false;
            }
            if (pcStack_190 != (code *)0x0) {
              uStack_1b0 = 0xe6b4b59;
              (*pcStack_190)(&uStack_1a8);
            }
            if (pcStack_130 != (code *)0x0) {
              uStack_1b0 = 0xe6b4b6a;
              (*pcStack_130)(auStack_148);
            }
            if (bVar28) {
              lVar6 = param_3[5];
              if ((ulong)*(uint *)(plVar12 + 9) != 0xffffffff) {
                uStack_1b0 = 0xe6b4b98;
                (**(code **)(&UNK_0f4bd880 + (ulong)*(uint *)(plVar12 + 9) * 8))
                          (auStack_148,plVar12);
              }
              plVar12[6] = 0;
              plVar12[7] = 0;
              plVar12[4] = 0;
              plVar12[5] = 0;
              plVar12[2] = 0;
              plVar12[3] = 0;
              *plVar12 = 0;
              plVar12[1] = 0;
              *(undefined4 *)(plVar12 + 7) = 0x3f800000;
              *(undefined4 *)(plVar12 + 9) = 4;
              pcStack_198 = (code *)&UNK_0e549370;
              pcStack_190 = (code *)0x0;
              uStack_188 = CONCAT35(uStack_188._5_3_,0x387a07050);
              lStack_178 = 0;
              puStack_170 = &UNK_0e549290;
              lStack_128 = plStack_f0[4];
              auStack_148 = (undefined1  [8])*plStack_f0;
              plStack_140 = (long *)plStack_f0[1];
              pcStack_138 = (code *)plStack_f0[2];
              pcStack_130 = (code *)plStack_f0[3];
              plVar17 = (long *)plStack_f0[2];
              lStack_180 = lVar6;
              if (plVar17 == (long *)0x0) {
                pcStack_138 = (code *)0x0;
                uStack_1a8 = plVar12;
              }
              else {
                uStack_1b0 = 0xe6b4c3c;
                uStack_1a8 = plVar12;
                pcStack_138 = (code *)(**(code **)(*plVar17 + 0x30))(plVar17,4);
              }
              puStack_158 = &UNK_0f4c6738;
              uStack_1b0 = 0xe6b4fda;
              func_0x0ed75bc0(&puStack_158,plVar3,&uStack_1a8,uStack_f8,auStack_148);
              if (pcStack_190 != (code *)0x0) {
                uStack_1b0 = 0xe6b4fed;
                (*pcStack_190)(&uStack_1a8);
              }
            }
            else {
              plVar17 = (long *)param_3[5];
              if (DAT_0f755bb0 == '\0') {
                uStack_1b0 = 0xe6b52ec;
                iVar2 = FUN_04108328(&DAT_0f755bb0);
                if (iVar2 != 0) {
                  uStack_1b0 = 0xe6b52f9;
                  func_0x0e54ab20();
                  uStack_1b0 = 0xe6b5313;
                  __cxa_atexit(&UNK_048ae800,&DAT_0f755b30,0xf53dab8);
                  uStack_1b0 = 0xe6b531f;
                  func_0x0410844d(&DAT_0f755bb0);
                }
              }
              plVar18 = (long *)(*plVar17 +
                                (ulong)((int)((ulong)(plVar17[1] - *plVar17) >> 3) - 1U &
                                       *(uint *)(_DAT_0f755b30 + 4)) * 8);
              do {
                lVar6 = *plVar18;
                if (lVar6 == -1) {
                  plVar11 = (long *)plVar17[4];
                  plVar18 = plVar11;
                  goto LAB_0e6b4cfa;
                }
                plVar18 = (long *)(plVar17[3] + lVar6 * 0x18);
              } while (*(uint *)(plVar17[3] + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f755b30 + 4));
              plVar11 = (long *)plVar17[4];
LAB_0e6b4cfa:
              if (plVar18 == plVar11) {
                puVar27 = &DAT_0f755b30;
              }
              else {
                puVar27 = (undefined *)plVar18[2];
              }
              uStack_1b0 = 0xe6b4d75;
              auVar8 = (undefined1  [8])FUN_048b0c90(plVar17,puVar27,uVar23,1);
              if (auVar8 == (undefined1  [8])0x0) {
                auStack_148 = (undefined1  [8])0x0;
                plStack_140 = (long *)0x0;
                uStack_1b0 = 0xe6b4d8c;
                func_0x048b0d20(auStack_148);
                auVar8 = auStack_148;
                plVar17 = plStack_140;
              }
              lStack_118 = 0;
              puStack_110 = (undefined *)0x0;
              lStack_128 = 0;
              lStack_120 = 0;
              pcStack_138 = (code *)0x0;
              pcStack_130 = (code *)0x0;
              auStack_148 = (undefined1  [8])0x0;
              plStack_140 = (long *)0x0;
              uStack_1b0 = 0xe6b4dc7;
              puStack_158 = (undefined *)auVar8;
              plStack_150 = plVar17;
              func_0x05d84ba0(auStack_148);
              uStack_1b0 = 0xe6b4dd9;
              func_0x05d9a920(&uStack_1a8,&puStack_158,auStack_148);
              if ((lStack_180 == lStack_c0) &&
                 ((lStack_b0 != 0) == (puStack_170 != (undefined *)0x0))) {
                if ((cStack_c4 == '\0') || ((int)uStack_188 != iStack_c8)) {
                  bVar28 = cStack_c4 == '\0' && uStack_188._4_1_ == '\0';
                }
                else {
                  pppppppuVar20 = &pppppppuStack_e8;
                  if (cStack_c4 != '\x02') {
                    pppppppuVar20 = pppppppuStack_e8;
                  }
                  uStack_1b0 = 0xe6b5062;
                  lVar6 = (*pcStack_198)(3,&uStack_1a8,pppppppuVar20);
                  bVar28 = lVar6 != 0;
                  plVar3 = plStack_80;
                }
              }
              else {
                bVar28 = false;
              }
              if (pcStack_190 != (code *)0x0) {
                uStack_1b0 = 0xe6b4e16;
                (*pcStack_190)(&uStack_1a8);
              }
              if (pcStack_130 != (code *)0x0) {
                uStack_1b0 = 0xe6b4e27;
                (*pcStack_130)(auStack_148);
              }
              if (bVar28) {
                lVar6 = param_3[5];
                if ((ulong)*(uint *)(plVar12 + 9) != 0xffffffff) {
                  uStack_1b0 = 0xe6b4e54;
                  (**(code **)(&UNK_0f4bd880 + (ulong)*(uint *)(plVar12 + 9) * 8))
                            (auStack_148,plVar12);
                }
                plVar12[6] = 0;
                plVar12[7] = 0;
                plVar12[4] = 0;
                plVar12[5] = 0;
                plVar12[2] = 0;
                plVar12[3] = 0;
                *plVar12 = 0;
                plVar12[1] = 0;
                plVar12[8] = 0;
                *(undefined4 *)(plVar12 + 7) = 0x3f800000;
                *(undefined4 *)(plVar12 + 8) = 0x3f800000;
                *(undefined4 *)(plVar12 + 9) = 5;
                pcStack_198 = (code *)&UNK_0e54ae40;
                pcStack_190 = (code *)0x0;
                uStack_188 = CONCAT35(uStack_188._5_3_,0x34a1b5689);
                lStack_178 = 0;
                puStack_170 = &UNK_0e54ad60;
                lStack_128 = plStack_f0[4];
                auStack_148 = (undefined1  [8])*plStack_f0;
                plStack_140 = (long *)plStack_f0[1];
                pcStack_138 = (code *)plStack_f0[2];
                pcStack_130 = (code *)plStack_f0[3];
                plVar17 = (long *)plStack_f0[2];
                lStack_180 = lVar6;
                if (plVar17 == (long *)0x0) {
                  pcStack_138 = (code *)0x0;
                  uStack_1a8 = plVar12;
                }
                else {
                  uStack_1b0 = 0xe6b4f08;
                  uStack_1a8 = plVar12;
                  pcStack_138 = (code *)(**(code **)(*plVar17 + 0x30))(plVar17,5);
                }
                puStack_158 = &UNK_0f4c67b8;
                uStack_1b0 = 0xe6b50a5;
                func_0x0ed75bc0(&puStack_158,plVar3,&uStack_1a8,uStack_f8,auStack_148);
                if (pcStack_190 != (code *)0x0) {
                  uStack_1b0 = 0xe6b50b4;
                  (*pcStack_190)(&uStack_1a8);
                }
              }
              else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
                      (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
                uStack_1a8 = (long *)0x2300000149614c;
                uStack_1b0 = 0xe6b4f72;
                func_0x0ed5ffe0(*plStack_f0,8,&uStack_1a8);
                if (((ulong)uStack_1a8 & 0x80000000000000) != 0) {
                  uStack_1b0 = 0xe6b4f9d;
                  (**(code **)(_DAT_0f5463b0 + 0x28))
                            (&DAT_0f5463b0,((ulong)uStack_1a8 & 0xff00ffffffffffff) - 8);
                }
                uStack_1a8 = (long *)0x0;
              }
            }
          }
        }
      }
    }
    if (pcStack_d0 != (code *)0x0) {
      uStack_1b0 = 0xe6b50cb;
      (*pcStack_d0)(&pppppppuStack_e8);
    }
  }
LAB_0e6b50cb:
  if (((ulong)uStack_98 & 1) != 0) {
    uStack_1b0 = 0xe6b50f2;
    func_0x0412a280(pcStack_88,(ulong)uStack_98 & 0xfffffffffffffffe);
  }
  return;
}


