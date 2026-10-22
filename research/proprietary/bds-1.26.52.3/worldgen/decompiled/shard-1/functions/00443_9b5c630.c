/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9c5c630 (ELF vaddr 0x9b5c630)
 * Label: caller-of-callee
 * Body:  [[09c5c630, 09c5cf50] [09c5cf60, 09c5daa4] [09c5e550, 09c5e732]]
 * Ghidra: FUN_09c5c630
 */


/* WARNING: Possible PIC construction at 0x09c5c889: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09c5c630(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5)

{
  char cVar1;
  int iVar2;
  ulong *puVar3;
  uint *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined1 auVar9 [8];
  undefined8 uVar10;
  byte *pbVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  code *pcVar15;
  code *pcVar16;
  long *plVar17;
  undefined8 *******pppppppuVar18;
  long *unaff_RBX;
  undefined8 ******ppppppuVar19;
  byte bVar20;
  uint uVar21;
  undefined8 unaff_RBP;
  undefined8 ******ppppppuVar22;
  ulong uVar23;
  long lVar24;
  undefined *puVar25;
  byte *pbVar26;
  ulong uVar27;
  undefined1 uVar28;
  long *unaff_R12;
  long *unaff_R13;
  long *unaff_R14;
  long *unaff_R15;
  bool bVar29;
  undefined1 auStack_1f8 [88];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  code *pcStack_188;
  code *pcStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined *puStack_160;
  char cStack_158;
  uint *puStack_150;
  undefined1 auStack_148 [8];
  long *plStack_140;
  code *pcStack_138;
  code *pcStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined *puStack_110;
  char cStack_108;
  undefined *puStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long lStack_b0;
  undefined8 *******pppppppuStack_a8;
  ulong uStack_a0;
  code *pcStack_90;
  int iStack_88;
  char cStack_84;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  uint uStack_60;
  long *plStack_58;
  long *plStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  pcVar15 = (code *)param_3[7];
  if (pcVar15 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar29 = false;
    }
    else {
      uStack_1a0 = 0x9c5c680;
      (*(code *)param_3[3])(param_3);
      bVar29 = (undefined *)param_3[7] == &UNK_09c5e760;
    }
    param_3[2] = (long)&UNK_09c5e840;
    *(undefined4 *)(param_3 + 4) = 0xa49f4443;
    param_3[3] = (long)&UNK_09c5eac0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1a0 = 0x9c5c6d0;
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
    if (lVar7 == 0) {
      uStack_1a0 = 0x9c5da23;
      func_0x0eec74c0(0xa0,0);
    }
    *(undefined8 *)(lVar7 + 0x48) = 0;
    *(undefined8 *)(lVar7 + 0x50) = 0;
    *(undefined8 *)(lVar7 + 0x78) = 0;
    *(undefined8 *)(lVar7 + 0x80) = 0;
    *(undefined8 *)(lVar7 + 0x68) = 0;
    *(undefined8 *)(lVar7 + 0x70) = 0;
    *(undefined8 *)(lVar7 + 0x58) = 0;
    *(undefined8 *)(lVar7 + 0x60) = 0;
    *(undefined8 *)(lVar7 + 0x38) = 0;
    *(undefined8 *)(lVar7 + 0x40) = 0;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(undefined8 *)(lVar7 + 0x30) = 0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined8 *)(lVar7 + 0x20) = 0;
    *(undefined8 *)(lVar7 + 8) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(long *)(lVar7 + 0x50) = lVar7 + 0x58;
    *(undefined8 *)(lVar7 + 0x88) = 0;
    *(undefined8 *)(lVar7 + 0x90) = 0;
    *(undefined4 *)(lVar7 + 0x98) = 0;
    *param_3 = lVar7;
    pcVar15 = (code *)&UNK_09c5e760;
    param_3[7] = (long)&UNK_09c5e760;
    if (bVar29) {
      lVar7 = param_3[6];
    }
    else {
      lVar7 = 0;
    }
    param_3[6] = lVar7;
    plVar17 = param_5;
    if (lVar7 == 0) goto LAB_09c5c747;
LAB_09c5c75d:
    bVar20 = *(byte *)(lVar7 + 0x1a);
  }
  else {
    lVar7 = param_3[6];
    plVar17 = unaff_R15;
    if (lVar7 != 0) goto LAB_09c5c75d;
LAB_09c5c747:
    plVar17 = (long *)param_3[5];
    uStack_1a0 = 0x9c5c755;
    (*pcVar15)(0,param_3,0);
    lVar7 = param_3[6];
    if (lVar7 != 0) goto LAB_09c5c75d;
    uStack_1a0 = 0x9c5c78d;
    lVar7 = FUN_048aead0(plVar17);
    bVar20 = *(byte *)(lVar7 + 0x1a);
  }
  if ((bVar20 & 1) == 0) goto SUB_09c5e550;
  unaff_R14 = param_3 + 6;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_198 = (long *)0x0;
    plStack_190 = (long *)0x0;
    uStack_1a0 = 0x9c5c8b2;
    func_0x048b1dc0(&uStack_198);
    plVar12 = uStack_198;
    plVar17 = plStack_190;
    unaff_R14 = &uStack_198;
joined_r0x09c5c8bd:
    if (plVar12 == (long *)0x0) {
      uStack_1a0 = 0x9c5c8cb;
      plVar12 = (long *)FUN_048aead0(plVar17);
    }
  }
  else {
    plVar12 = (long *)*unaff_R14;
    if (plVar12 == (long *)0x0) {
      plVar17 = (long *)param_3[5];
      uStack_1a0 = 0x9c5c7b7;
      (*(code *)param_3[7])(0,param_3,0);
      plVar12 = (long *)*unaff_R14;
      goto joined_r0x09c5c8bd;
    }
  }
  puStack_e0 = (undefined8 *)plVar12[0xd];
  uStack_1a0 = 0x9c5c7d9;
  bVar20 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((bVar20 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1a0;
    uStack_1a0 = 0x9c5c88e;
    unaff_RBX = param_5;
    unaff_RBP = param_4;
    unaff_R12 = param_3;
    unaff_R13 = param_2;
    unaff_R15 = plVar17;
SUB_09c5e550:
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(long **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(long **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(long **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(long **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(long **)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar1 = *(char *)((long)param_3 + 0x24);
    plVar17 = (long *)*param_3;
    plVar12 = plVar17;
    if (cVar1 == '\x02') {
      plVar12 = param_3;
    }
    if (plVar12 == (long *)0x0 || (int)param_3[4] != -0x5b60bbbd) {
      lVar7 = param_3[5];
      lVar24 = param_3[6];
      if (lVar24 == 0) {
        pcVar15 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x9c5e5af;
        (*pcVar15)(0,param_3,0);
        lVar24 = param_3[6];
        cVar1 = *(char *)((long)param_3 + 0x24);
        plVar17 = (long *)*param_3;
      }
      if (cVar1 == '\x02') {
        plVar17 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x9c5e5d1;
      plVar12 = (long *)FUN_0488e200(lVar7,lVar24,0xa49f4443,plVar17);
    }
    lVar7 = *param_5;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x9c5e5e1;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x48),lVar7);
    bVar20 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar20 | 1;
    pcVar15 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x9c5e5fe;
    uVar13 = (*pcVar15)(param_2);
    *(byte *)((long)param_2 + 9) = bVar20;
    if ((uVar13 >> 0x20 & 1) == 0) {
      lVar7 = param_3[5];
      uVar21 = *(uint *)((long)register0x00000020 + -0x40);
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar21;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x9c5e635;
      cVar1 = func_0x09c5ef70(param_2,lVar7,plVar12,param_4,param_5,2);
      if (cVar1 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      uVar28 = 2;
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar21;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
    }
    else {
      if ((uVar13 & 0xfffffffe) != 0) {
        lVar7 = *param_5;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x9c5e6a1;
        func_0x0ed5ffe0(lVar7,8,(undefined1 *)((long)register0x00000020 + -0x50));
        if ((*(ulong *)((long)register0x00000020 + -0x50) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar15 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x9c5e6c5;
        (*pcVar15)(&DAT_0f5463b0,
                   (*(ulong *)((long)register0x00000020 + -0x50) & 0xff00ffffffffffff) - 8);
        return;
      }
      lVar7 = param_3[5];
      uVar21 = *(uint *)((long)register0x00000020 + -0x40);
      *(ulong *)((long)register0x00000020 + -0x58) = uVar13;
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar21;
      *(undefined8 *)((long)register0x00000020 + -0x38) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x9c5e6f6;
      cVar1 = func_0x09c5ef70(param_2,lVar7,plVar12,param_4,param_5,uVar13 & 0xff);
      if (cVar1 != '\0') {
        return;
      }
      lVar7 = param_3[5];
      uVar28 = *(undefined1 *)((long)register0x00000020 + -0x58);
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar21;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x38);
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x9c5e724;
    func_0x09c5f1c0(param_2,lVar7,plVar12,param_4,param_5,uVar28);
    return;
  }
  if (bVar20 != 1) {
    uStack_198 = (long *)0x120000012f2525;
    uStack_1a0 = 0x9c5c8fb;
    func_0x0ed5ffe0(*param_5,8,&uStack_198);
    if (((ulong)uStack_198 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1a0 = 0x9c5c91e;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1a0 = 0x9c5c813;
  plStack_e8 = param_2;
  uStack_c0 = param_4;
  func_0x0ed6d600(&lStack_68,*param_5);
  lStack_48 = param_3[5];
  lStack_b0 = *param_5;
  ppppppuVar19 = (undefined8 ******)((long)puStack_e0 + 9);
  bVar29 = (*(byte *)(puStack_e0 + 1) & 1) == 0;
  ppppppuVar22 = (undefined8 ******)puStack_e0[3];
  if (bVar29) {
    ppppppuVar22 = ppppppuVar19;
  }
  uVar13 = (ulong)(*(byte *)(puStack_e0 + 1) >> 1);
  if (!bVar29) {
    uVar13 = puStack_e0[2];
  }
  plStack_b8 = param_5;
  if (ppppppuVar22 == (undefined8 ******)0x0) {
    puStack_f8 = (undefined *)((ulong)((uint)uVar13 & 0x7f) << 0x30);
  }
  else if (uVar13 < 0x80) {
    puStack_f8 = (undefined *)(uVar13 << 0x30 | (ulong)ppppppuVar22 & 0xff00ffffffffffff);
  }
  else {
    lVar7 = uVar13 + 9;
    puStack_150 = (uint *)CONCAT71(puStack_150._1_7_,lVar7 == 0);
    uStack_1a0 = 0x9c5c955;
    puVar3 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
    if (puVar3 == (ulong *)0x0 && (char)puStack_150 == '\0') {
      uStack_1a0 = 0x9c5da38;
      func_0x0eec74c0(lVar7,8);
    }
    *puVar3 = uVar13;
    uStack_1a0 = 0x9c5c980;
    memcpy(puVar3 + 1,ppppppuVar22,uVar13);
    *(undefined1 *)((long)puVar3 + uVar13 + 8) = 0;
    puStack_f8 = (undefined *)((ulong)(puVar3 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_1a0 = 0x9c5c9bf;
  puVar4 = (uint *)func_0x0ed6d180(lStack_b0,&puStack_f8,0);
  plVar17 = plStack_e8;
  if (((ulong)puStack_f8 & 0x80000000000000) != 0) {
    uStack_1a0 = 0x9c5c9f9;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_f8 & 0xff00ffffffffffff) - 8);
  }
  puStack_f8 = (undefined *)0x0;
  bVar29 = (*(byte *)(puStack_e0 + 1) & 1) == 0;
  ppppppuVar22 = (undefined8 ******)puStack_e0[3];
  if (bVar29) {
    ppppppuVar22 = ppppppuVar19;
  }
  uVar13 = (ulong)(*(byte *)(puStack_e0 + 1) >> 1);
  if (!bVar29) {
    uVar13 = puStack_e0[2];
  }
  uStack_1a0 = 0x9c5ca31;
  cVar1 = (**(code **)(*plVar17 + 0xb8))(plVar17,ppppppuVar22,uVar13);
  if (cVar1 == '\0') {
    uStack_1a0 = 0x9c5cb50;
    puStack_150 = puVar4;
    _auStack_148 = (*(code *)*puStack_e0)(lStack_48);
    uStack_1a0 = 0x9c5cb76;
    func_0x0ed8bc80(&uStack_198,auStack_148,*(undefined1 *)(lStack_b0 + 0x2aa));
    plVar12 = (long *)((ulong)uStack_198 >> 1 & 0x7f);
    pcVar15 = (code *)((long)&uStack_198 + 1);
    if (((ulong)uStack_198 & 1) != 0) {
      plVar12 = plStack_190;
      pcVar15 = pcStack_188;
    }
    pppppppuStack_a8 = (undefined8 *******)0x0;
    if (pcVar15 == (code *)0x0) {
      pppppppuStack_a8 = (undefined8 *******)((ulong)((uint)plVar12 & 0x7f) << 0x30);
    }
    else {
      lVar7 = (long)plVar12 + 9;
      uStack_1a0 = 0x9c5cbc5;
      puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
      if (lVar7 != 0 && puVar6 == (undefined8 *)0x0) {
        uStack_1a0 = 0x9c5da4a;
        func_0x0eec74c0(lVar7,8);
      }
      *puVar6 = plVar12;
      uStack_1a0 = 0x9c5cbf5;
      memcpy(puVar6 + 1,pcVar15,plVar12);
      *(undefined1 *)((long)(puVar6 + 1) + (long)plVar12) = 0;
      pppppppuStack_a8 =
           (undefined8 *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      plVar17 = plStack_e8;
    }
    puVar4 = puStack_150;
    uStack_1a0 = 0x9c5cd8c;
    func_0x0ed5ffe0(lStack_b0,8,&pppppppuStack_a8);
    if (((ulong)pppppppuStack_a8 & 0x80000000000000) != 0) {
      uStack_1a0 = 0x9c5cdc5;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_a8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_a8 = (undefined8 *******)0x0;
    if (((ulong)uStack_198 & 1) != 0) {
      uStack_1a0 = 0x9c5cde9;
      func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
    }
    uStack_d8 = (long *)0x0;
    plStack_d0 = (long *)0x0;
    pcStack_c8 = (code *)0x0;
  }
  else {
    uStack_1a0 = 0x9c5ca50;
    (**(code **)(*plVar17 + 0x80))(auStack_148,plVar17,0x40);
    cStack_158 = cStack_108;
    if (cStack_108 == '\0') {
      uStack_198 = (long *)auStack_148;
      plStack_190 = plStack_140;
      pcStack_188 = pcStack_138;
      pcStack_180 = pcStack_130;
      uStack_178 = lStack_128;
      lStack_170 = lStack_120;
      lStack_168 = lStack_118;
      puStack_160 = puStack_110;
      pppppppuStack_a8 = (undefined8 *******)puStack_e0[3];
      uStack_a0 = puStack_e0[2];
      if ((*(byte *)(puStack_e0 + 1) & 1) == 0) {
        pppppppuStack_a8 = (undefined8 *******)ppppppuVar19;
        uStack_a0 = (ulong)(*(byte *)(puStack_e0 + 1) >> 1);
      }
      uStack_1a0 = 0x9c5ccad;
      puStack_150 = puVar4;
      func_0x0470d9a0(auStack_148,&UNK_01377405,0x15,0xd,&pppppppuStack_a8);
      plVar12 = (long *)((ulong)auStack_148 >> 1 & 0x7f);
      pcVar15 = (code *)(auStack_148 + 1);
      if (((ulong)auStack_148 & 1) != 0) {
        plVar12 = plStack_140;
        pcVar15 = pcStack_138;
      }
      pppppppuStack_a8 = (undefined8 *******)0x0;
      if (pcVar15 == (code *)0x0) {
        pppppppuStack_a8 = (undefined8 *******)((ulong)((uint)plVar12 & 0x7f) << 0x30);
      }
      else {
        lVar7 = (long)plVar12 + 9;
        uStack_1a0 = 0x9c5ccfd;
        puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar7,8);
        if (lVar7 != 0 && puVar6 == (undefined8 *)0x0) {
          uStack_1a0 = 0x9c5da5c;
          func_0x0eec74c0(lVar7,8);
        }
        *puVar6 = plVar12;
        uStack_1a0 = 0x9c5cd2d;
        memcpy(puVar6 + 1,pcVar15,plVar12);
        *(undefined1 *)((long)(puVar6 + 1) + (long)plVar12) = 0;
        pppppppuStack_a8 =
             (undefined8 *******)((ulong)(puVar6 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        plVar17 = plStack_e8;
      }
      puVar4 = puStack_150;
      uStack_1a0 = 0x9c5ce53;
      func_0x0ed5ffe0(lStack_b0,8,&pppppppuStack_a8);
      if (((ulong)pppppppuStack_a8 & 0x80000000000000) != 0) {
        uStack_1a0 = 0x9c5ce8c;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_a8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_a8 = (undefined8 *******)0x0;
      if (((ulong)auStack_148 & 1) != 0) {
        uStack_1a0 = 0x9c5ceb2;
        func_0x0412a280(pcStack_138,(ulong)auStack_148 & 0xfffffffffffffffe);
      }
      uStack_d8 = (long *)0x0;
      plStack_d0 = (long *)0x0;
      pcStack_c8 = (code *)0x0;
    }
    else {
      pcStack_188 = pcStack_138;
      uStack_198 = (long *)auStack_148;
      plStack_190 = plStack_140;
      plVar12 = (long *)(ulong)(byte)(auStack_148[0] >> 1);
      pcVar15 = (code *)((long)&uStack_198 + 1);
      if (((ulong)auStack_148 & 1) != 0) {
        plVar12 = plStack_140;
        pcVar15 = pcStack_138;
      }
      bVar20 = auStack_148[0];
      if (plVar12 != (long *)0x0) {
        uStack_1a0 = 0x9c5ca9c;
        plVar5 = (long *)__ctype_tolower_loc();
        pcVar16 = pcVar15;
        for (uVar13 = (ulong)plVar12 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar16 = *(code *)(*plVar5 + (ulong)(byte)*pcVar16 * 4);
          pcVar16 = pcVar16 + 1;
        }
        if ((long *)0x3 < plVar12) {
          do {
            *pcVar16 = *(code *)(*plVar5 + (ulong)(byte)*pcVar16 * 4);
            pcVar16[1] = *(code *)(*plVar5 + (ulong)(byte)pcVar16[1] * 4);
            pcVar16[2] = *(code *)(*plVar5 + (ulong)(byte)pcVar16[2] * 4);
            pcVar16[3] = *(code *)(*plVar5 + (ulong)(byte)pcVar16[3] * 4);
            pcVar16 = pcVar16 + 4;
          } while (pcVar16 != pcVar15 + (long)plVar12);
        }
        bVar20 = (byte)uStack_198;
      }
      if ((bVar20 & 1) == 0) {
        pcStack_c8 = pcStack_188;
        uStack_d8 = uStack_198;
        plStack_d0 = plStack_190;
      }
      else {
        uStack_1a0 = 0x9c5ce1c;
        func_0x0412e5e0(&uStack_d8,pcStack_188,plStack_190);
      }
    }
    lVar7 = lStack_170;
    if (cStack_158 == '\x01') {
      if (((ulong)uStack_198 & 1) != 0) {
        uVar13 = (ulong)uStack_198 & 0xfffffffffffffffe;
LAB_09c5cf9c:
        uStack_1a0 = 0x9c5cfa1;
        func_0x0412a280(pcStack_188,uVar13);
      }
    }
    else {
      if (lStack_170 != 0) {
        while (lVar7 != lStack_168) {
          uStack_1a0 = 0x9c5cf1c;
          func_0x048b3e80(lStack_168 + -0x40);
          lStack_168 = lStack_168 + -0x40;
        }
        lStack_168 = lVar7;
        uStack_1a0 = 0x9c5cf38;
        func_0x0412a280(lStack_170,(long)puStack_160 - lStack_170);
      }
      pcVar16 = pcStack_188;
      pcVar15 = pcStack_180;
      if (pcStack_188 != (code *)0x0) {
        for (; pcVar16 != pcVar15; pcVar15 = pcVar15 + -0x50) {
          if ((pcVar15[-8] == (code)0x1) && (((byte)pcVar15[-0x30] & 1) != 0)) {
            uStack_1a0 = 0x9c5cf88;
            func_0x0412a280(*(undefined8 *)(pcVar15 + -0x20),
                            *(ulong *)(pcVar15 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_180 = pcVar16;
        uVar13 = uStack_178 - (long)pcStack_188;
        goto LAB_09c5cf9c;
      }
    }
  }
  uStack_1a0 = 0x9c5cfae;
  (**(code **)(*plVar17 + 0xd0))(plVar17);
  lVar7 = *(long *)(puVar4 + 2);
  uVar21 = *(uint *)(lVar7 + 0x1c + (ulong)*puVar4 * 0x20);
  *puVar4 = uVar21;
  if (puVar4[0x48] == 0) {
    uVar14 = puVar4[4];
LAB_09c5cff0:
    lVar24 = lVar7 + (ulong)uVar14 * 0x20;
    uVar13 = (ulong)*(uint *)(lVar7 + -0x10 + (ulong)uVar14 * 0x20);
    if (uVar13 != 0xffffffff) {
      uStack_1a0 = 0x9c5d019;
      (**(code **)(&UNK_0f4e40d0 + uVar13 * 8))(&uStack_198,lVar24 + -0x18);
      uVar14 = puVar4[4];
    }
    *(undefined4 *)(lVar24 + -0x10) = 0xffffffff;
    puVar4[4] = uVar14 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar4 + 0x46) + 0x18 + (ulong)(puVar4[0x48] - 1) * 0x30) != uVar21)
          && (uVar14 = puVar4[4], uVar21 == uVar14 - 1)) goto LAB_09c5cff0;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1a0 = 0x9c5d058;
    auStack_40 = (*(code *)*puStack_e0)();
    uVar10 = auStack_40._8_8_;
    lVar7 = auStack_40._0_8_;
    plVar17 = (long *)((ulong)uStack_d8 >> 1 & 0x7f);
    pcVar15 = (code *)((long)&uStack_d8 + 1);
    if (((ulong)uStack_d8 & 1) != 0) {
      plVar17 = plStack_d0;
      pcVar15 = pcStack_c8;
    }
    if (plVar17 == (long *)0x0) {
      uVar21 = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)plVar17 & 3);
      if (plVar17 < (long *)0x4) {
        uVar21 = 0x811c9dc5;
        uVar27 = 0;
      }
      else {
        uVar21 = 0x811c9dc5;
        uVar27 = 0;
        do {
          uVar21 = ((int)(char)pcVar15[uVar27 + 3] ^
                   ((int)(char)pcVar15[uVar27 + 2] ^
                   ((int)(char)pcVar15[uVar27 + 1] ^
                   ((int)(char)pcVar15[uVar27] ^ uVar21) * 0x1000193) * 0x1000193) * 0x1000193) *
                   0x1000193;
          uVar27 = uVar27 + 4;
        } while (((ulong)plVar17 & 0xfffffffffffffffc) != uVar27);
      }
      if (uVar13 != 0) {
        uVar23 = 0;
        do {
          uVar21 = ((int)(char)pcVar15[uVar23 + uVar27] ^ uVar21) * 0x1000193;
          uVar23 = uVar23 + 1;
        } while (uVar13 != uVar23);
      }
    }
    if (lVar7 == 0) {
      uStack_1a0 = 0x9c5d151;
      lVar7 = FUN_048aead0(uVar10);
    }
    uStack_1a0 = 0x9c5d163;
    plStack_58 = (long *)func_0x048b0c90(uVar10,lVar7,uVar21,1);
    if (plStack_58 == (long *)0x0) {
      uStack_198 = (long *)0x0;
      plStack_190 = (long *)0x0;
      uStack_1a0 = 0x9c5d191;
      func_0x048b0d20(&uStack_198);
      plStack_58 = uStack_198;
      plStack_50 = plStack_190;
      if (uStack_198 == (long *)0x0) {
        lVar7 = *plStack_b8;
        uStack_1a0 = 0x9c5d849;
        func_0x0ed8bc80(&uStack_198,auStack_40,*(undefined1 *)(lVar7 + 0x2aa));
        uStack_1a0 = 0x9c5d85d;
        uVar10 = func_0x0412f8c0(&uStack_198,&UNK_01479aea,10);
        plVar17 = (long *)((ulong)uStack_d8 >> 1 & 0x7f);
        pcVar15 = (code *)((long)&uStack_d8 + 1);
        if (((ulong)uStack_d8 & 1) != 0) {
          plVar17 = plStack_d0;
          pcVar15 = pcStack_c8;
        }
        uStack_1a0 = 0x9c5d889;
        uVar10 = func_0x0412f8c0(uVar10,pcVar15,plVar17);
        uStack_1a0 = 0x9c5d89d;
        pbVar11 = (byte *)func_0x0412f8c0(uVar10,&UNK_0125506d,1);
        bVar29 = (*pbVar11 & 1) != 0;
        pbVar26 = pbVar11 + 1;
        if (bVar29) {
          pbVar26 = *(byte **)(pbVar11 + 0x10);
        }
        uVar13 = (ulong)(*pbVar11 >> 1);
        if (bVar29) {
          uVar13 = *(ulong *)(pbVar11 + 8);
        }
        auStack_148 = (undefined1  [8])0x0;
        uStack_1a0 = 0x9c5d8cf;
        func_0x0ee387f0(auStack_148,pbVar26,uVar13,1);
        uStack_1a0 = 0x9c5d8e1;
        func_0x0ed5ffe0(lVar7,8,auStack_148);
        uStack_1a0 = 0x9c5d8eb;
        func_0x0ee386e0(auStack_148);
        if (((ulong)uStack_198 & 1) != 0) {
          uStack_1a0 = 0x9c5d907;
          func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
        }
        goto LAB_09c5d9bf;
      }
    }
    else {
      plStack_50 = (long *)auStack_40._8_8_;
    }
    lStack_168 = 0;
    puStack_160 = (undefined *)0x0;
    uStack_178 = 0;
    lStack_170 = 0;
    pcStack_188 = (code *)0x0;
    pcStack_180 = (code *)0x0;
    uStack_198 = (long *)0x0;
    plStack_190 = (long *)0x0;
    uStack_1a0 = 0x9c5d1c6;
    func_0x05d84ba0(&uStack_198);
    uStack_1a0 = 0x9c5d1e1;
    func_0x05d9a920(&pppppppuStack_a8,&plStack_58,&uStack_198);
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0x9c5d1f0;
      (*pcStack_180)(&uStack_198);
    }
    bVar29 = (*(byte *)(puStack_e0 + 1) & 1) != 0;
    if (bVar29) {
      ppppppuVar19 = (undefined8 ******)puStack_e0[3];
    }
    uVar13 = (ulong)(*(byte *)(puStack_e0 + 1) >> 1);
    if (bVar29) {
      uVar13 = puStack_e0[2];
    }
    if (uVar13 == 0) {
      uVar21 = 0x811c9dc5;
    }
    else {
      uVar27 = (ulong)((uint)uVar13 & 3);
      if (uVar13 < 4) {
        uVar21 = 0x811c9dc5;
        uVar23 = 0;
      }
      else {
        uVar21 = 0x811c9dc5;
        uVar23 = 0;
        do {
          uVar21 = ((int)*(char *)((long)ppppppuVar19 + uVar23 + 3) ^
                   ((int)*(char *)((long)ppppppuVar19 + uVar23 + 2) ^
                   ((int)*(char *)((long)ppppppuVar19 + uVar23 + 1) ^
                   ((int)*(char *)((long)ppppppuVar19 + uVar23) ^ uVar21) * 0x1000193) * 0x1000193)
                   * 0x1000193) * 0x1000193;
          uVar23 = uVar23 + 4;
        } while ((uVar13 & 0xfffffffffffffffc) != uVar23);
      }
      if (uVar27 != 0) {
        uVar13 = 0;
        do {
          uVar21 = ((int)*(char *)((long)ppppppuVar19 + uVar13 + uVar23) ^ uVar21) * 0x1000193;
          uVar13 = uVar13 + 1;
        } while (uVar27 != uVar13);
      }
    }
    cVar1 = *(char *)((long)param_3 + 0x24);
    plVar17 = (long *)*param_3;
    plVar12 = plVar17;
    if (cVar1 == '\x02') {
      plVar12 = param_3;
    }
    if (plVar12 == (long *)0x0 || (int)param_3[4] != -0x5b60bbbd) {
      lVar7 = param_3[5];
      lVar24 = param_3[6];
      if (lVar24 == 0) {
        uStack_1a0 = 0x9c5d2f0;
        (*(code *)param_3[7])(0,param_3,0);
        lVar24 = param_3[6];
        cVar1 = *(char *)((long)param_3 + 0x24);
        plVar17 = (long *)*param_3;
      }
      if (cVar1 == '\x02') {
        plVar17 = param_3;
      }
      uStack_1a0 = 0x9c5d312;
      plVar12 = (long *)FUN_0488e200(lVar7,lVar24,0xa49f4443,plVar17);
    }
    plVar17 = (long *)param_3[5];
    if (DAT_0f648c48 == '\0') {
      uStack_1a0 = 0x9c5da6d;
      iVar2 = func_0x04108328(&DAT_0f648c48);
      if (iVar2 != 0) {
        uStack_1a0 = 0x9c5da7a;
        func_0x09c54910();
        uStack_1a0 = 0x9c5da94;
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f648bc8,0xf53dab8);
        uStack_1a0 = 0x9c5daa0;
        func_0x0410844d(&DAT_0f648c48);
      }
    }
    plVar5 = (long *)(*plVar17 +
                     (ulong)((int)((ulong)(plVar17[1] - *plVar17) >> 3) - 1U &
                            *(uint *)(_DAT_0f648bc8 + 4)) * 8);
    do {
      lVar7 = *plVar5;
      if (lVar7 == -1) {
        plVar8 = (long *)plVar17[4];
        plVar5 = plVar8;
        goto LAB_09c5d374;
      }
      plVar5 = (long *)(plVar17[3] + lVar7 * 0x18);
    } while (*(uint *)(plVar17[3] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f648bc8 + 4));
    plVar8 = (long *)plVar17[4];
LAB_09c5d374:
    if (plVar5 == plVar8) {
      puVar25 = &DAT_0f648bc8;
    }
    else {
      puVar25 = (undefined *)plVar5[2];
    }
    uStack_1a0 = 0x9c5d396;
    auVar9 = (undefined1  [8])func_0x048b0c90(plVar17,puVar25,uVar21,1);
    plStack_f0 = plVar17;
    if (auVar9 == (undefined1  [8])0x0) {
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1a0 = 0x9c5d3ad;
      func_0x048b0d20(auStack_148);
      auVar9 = auStack_148;
      plStack_f0 = plStack_140;
    }
    lStack_118 = 0;
    puStack_110 = (undefined *)0x0;
    lStack_128 = 0;
    lStack_120 = 0;
    pcStack_138 = (code *)0x0;
    pcStack_130 = (code *)0x0;
    auStack_148 = (undefined1  [8])0x0;
    plStack_140 = (long *)0x0;
    uStack_1a0 = 0x9c5d3eb;
    puStack_f8 = (undefined *)auVar9;
    func_0x05d84ba0(auStack_148);
    uStack_1a0 = 0x9c5d400;
    func_0x05d9a920(&uStack_198,&puStack_f8,auStack_148);
    if ((lStack_170 == lStack_80) && ((lStack_70 != 0) == (puStack_160 != (undefined *)0x0))) {
      if ((cStack_84 == '\0') || ((int)uStack_178 != iStack_88)) {
        bVar29 = cStack_84 == '\0' && uStack_178._4_1_ == '\0';
      }
      else {
        pppppppuVar18 = pppppppuStack_a8;
        if (cStack_84 == '\x02') {
          pppppppuVar18 = &pppppppuStack_a8;
        }
        uStack_1a0 = 0x9c5da09;
        lVar7 = (*pcStack_188)(3,&uStack_198,pppppppuVar18);
        bVar29 = lVar7 != 0;
      }
    }
    else {
      bVar29 = false;
    }
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0x9c5d43d;
      (*pcStack_180)(&uStack_198);
    }
    if (pcStack_130 != (code *)0x0) {
      uStack_1a0 = 0x9c5d44e;
      (*pcStack_130)(auStack_148);
    }
    plVar17 = plStack_e8;
    if (bVar29) {
      lVar7 = param_3[5];
      plVar5 = plVar12 + 1;
      if ((ulong)*(uint *)(plVar12 + 0x13) != 0xffffffff) {
        uStack_1a0 = 0x9c5d489;
        (**(code **)(&UNK_0f1db948 + (ulong)*(uint *)(plVar12 + 0x13) * 8))(auStack_148,plVar5);
      }
      plVar12[0xf] = 0;
      plVar12[0x10] = 0;
      plVar12[0xd] = 0;
      plVar12[0xe] = 0;
      plVar12[0xb] = 0;
      plVar12[0xc] = 0;
      plVar12[9] = 0;
      plVar12[10] = 0;
      plVar12[7] = 0;
      plVar12[8] = 0;
      plVar12[5] = 0;
      plVar12[6] = 0;
      plVar12[3] = 0;
      plVar12[4] = 0;
      *plVar5 = 0;
      plVar12[2] = 0;
      plVar12[10] = (long)(plVar12 + 0xb);
      plVar12[0x11] = 0;
      plVar12[0x12] = 0;
      *(undefined4 *)(plVar12 + 0x13) = 0;
      pcStack_188 = (code *)&UNK_09c54c40;
      pcStack_180 = (code *)0x0;
      uStack_178 = CONCAT35(uStack_178._5_3_,0x3e86edfcd);
      lStack_168 = 0;
      puStack_160 = &UNK_09c54b60;
      lStack_128 = plStack_b8[4];
      auStack_148 = (undefined1  [8])*plStack_b8;
      plStack_140 = (long *)plStack_b8[1];
      pcStack_138 = (code *)plStack_b8[2];
      pcStack_130 = (code *)plStack_b8[3];
      plVar12 = (long *)plStack_b8[2];
      uStack_198 = plVar5;
      lStack_170 = lVar7;
      if (plVar12 == (long *)0x0) {
        pcStack_138 = (code *)0x0;
      }
      else {
        uStack_1a0 = 0x9c5d543;
        pcStack_138 = (code *)(**(code **)(*plVar12 + 0x30))(plVar12,0);
      }
      puStack_f8 = &UNK_0f1de8d8;
      uStack_1a0 = 0x9c5d80f;
      func_0x0ed75bc0(&puStack_f8,plVar17,&uStack_198,uStack_c0,auStack_148);
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0x9c5d822;
        (*pcStack_180)(&uStack_198);
      }
    }
    else {
      plVar17 = (long *)param_3[5];
      uStack_1a0 = 0x9c5d55d;
      uVar10 = func_0x07cf8590(plVar17);
      uStack_1a0 = 0x9c5d570;
      auVar9 = (undefined1  [8])func_0x048b0c90(plVar17,uVar10,uVar21,1);
      if (auVar9 == (undefined1  [8])0x0) {
        auStack_148 = (undefined1  [8])0x0;
        plStack_140 = (long *)0x0;
        uStack_1a0 = 0x9c5d587;
        func_0x048b0d20(auStack_148);
        auVar9 = auStack_148;
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
      uStack_1a0 = 0x9c5d5c5;
      puStack_f8 = (undefined *)auVar9;
      plStack_f0 = plVar17;
      func_0x05d84ba0(auStack_148);
      uStack_1a0 = 0x9c5d5dd;
      func_0x05d9a920(&uStack_198,&puStack_f8,auStack_148);
      plVar17 = plStack_e8;
      if ((lStack_170 == lStack_80) && ((lStack_70 != 0) == (puStack_160 != (undefined *)0x0))) {
        if ((cStack_84 == '\0') || ((int)uStack_178 != iStack_88)) {
          bVar29 = cStack_84 == '\0' && uStack_178._4_1_ == '\0';
        }
        else {
          pppppppuVar18 = &pppppppuStack_a8;
          if (cStack_84 != '\x02') {
            pppppppuVar18 = pppppppuStack_a8;
          }
          uStack_1a0 = 0x9c5d958;
          lVar7 = (*pcStack_188)(3,&uStack_198,pppppppuVar18);
          bVar29 = lVar7 != 0;
        }
      }
      else {
        bVar29 = false;
      }
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0x9c5d622;
        (*pcStack_180)(&uStack_198);
      }
      if (pcStack_130 != (code *)0x0) {
        uStack_1a0 = 0x9c5d633;
        (*pcStack_130)(auStack_148);
      }
      if (bVar29) {
        lVar7 = param_3[5];
        plVar5 = plVar12 + 1;
        if ((ulong)*(uint *)(plVar12 + 0x13) != 0xffffffff) {
          uStack_1a0 = 0x9c5d666;
          (**(code **)(&UNK_0f1db948 + (ulong)*(uint *)(plVar12 + 0x13) * 8))(auStack_148,plVar5);
        }
        plVar12[5] = 0;
        plVar12[6] = 0;
        plVar12[3] = 0;
        plVar12[4] = 0;
        *plVar5 = 0;
        plVar12[2] = 0;
        *(undefined4 *)(plVar12 + 0x13) = 1;
        pcStack_188 = (code *)&UNK_07cf8cc0;
        pcStack_180 = (code *)0x0;
        uStack_178 = CONCAT35(uStack_178._5_3_,0x3621bc597);
        lStack_168 = 0;
        puStack_160 = &UNK_07cf8ca0;
        lStack_128 = plStack_b8[4];
        auStack_148 = (undefined1  [8])*plStack_b8;
        plStack_140 = (long *)plStack_b8[1];
        pcStack_138 = (code *)plStack_b8[2];
        pcStack_130 = (code *)plStack_b8[3];
        plVar12 = (long *)plStack_b8[2];
        uStack_198 = plVar5;
        lStack_170 = lVar7;
        if (plVar12 == (long *)0x0) {
          pcStack_138 = (code *)0x0;
        }
        else {
          uStack_1a0 = 0x9c5d6fb;
          pcStack_138 = (code *)(**(code **)(*plVar12 + 0x30))(plVar12,1);
        }
        puStack_f8 = &UNK_0f4e6600;
        uStack_1a0 = 0x9c5d999;
        func_0x0ed75bc0(&puStack_f8,plVar17,&uStack_198,uStack_c0,auStack_148);
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0x9c5d9a8;
          (*pcStack_180)(&uStack_198);
        }
      }
      else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
              (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
        uStack_198 = (long *)0x2300000149614c;
        uStack_1a0 = 0x9c5d765;
        func_0x0ed5ffe0(*plStack_b8,8,&uStack_198);
        if (((ulong)uStack_198 & 0x80000000000000) != 0) {
          uStack_1a0 = 0x9c5d790;
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
        }
        uStack_198 = (long *)0x0;
      }
    }
    if (pcStack_90 != (code *)0x0) {
      uStack_1a0 = 0x9c5d9bf;
      (*pcStack_90)(&pppppppuStack_a8);
    }
  }
LAB_09c5d9bf:
  if (((ulong)uStack_d8 & 1) != 0) {
    uStack_1a0 = 0x9c5d9e6;
    func_0x0412a280(pcStack_c8,(ulong)uStack_d8 & 0xfffffffffffffffe);
  }
  return;
}


