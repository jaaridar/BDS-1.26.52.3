/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5f162f0 (ELF vaddr 0x5e162f0)
 * Label: caller-of-callee
 * Body:  [[05f162f0, 05f16bea] [05f16bf0, 05f176e8] [05f18db0, 05f18f92]]
 * Ghidra: FUN_05f162f0
 */


/* WARNING: Possible PIC construction at 0x05f1651b: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05f162f0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  char cVar2;
  int iVar3;
  ulong *puVar4;
  uint *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auVar9 [8];
  undefined8 uVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  ulong uVar13;
  uint uVar14;
  code *pcVar15;
  code *pcVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *******pppppppuVar19;
  long *unaff_RBX;
  undefined8 ******ppppppuVar20;
  byte bVar21;
  uint uVar22;
  undefined8 unaff_RBP;
  undefined8 ******ppppppuVar23;
  ulong uVar24;
  undefined *puVar25;
  byte *pbVar26;
  ulong uVar27;
  undefined1 uVar28;
  undefined8 *unaff_R12;
  long *unaff_R13;
  undefined8 *unaff_R14;
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
  undefined *puStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  code *pcStack_d8;
  undefined8 uStack_c8;
  long *plStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 *******pppppppuStack_a8;
  ulong uStack_a0;
  code *pcStack_90;
  int iStack_88;
  char cStack_84;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  uint uStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  pcVar15 = (code *)param_3[7];
  if (pcVar15 == (code *)0x0) {
    if ((code *)param_3[3] == (code *)0x0) {
      bVar29 = false;
    }
    else {
      uStack_1a0 = 0x5f16340;
      (*(code *)param_3[3])(param_3);
      bVar29 = (undefined *)param_3[7] == &UNK_05f18fc0;
    }
    param_3[2] = &UNK_05f190a0;
    *(undefined4 *)(param_3 + 4) = 0xb6aea4e3;
    param_3[3] = &UNK_05f192b0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    uStack_1a0 = 0x5f16390;
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar7 == (undefined8 *)0x0) {
      uStack_1a0 = 0x5f17667;
      func_0x0eec74c0(0x28,0);
    }
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    *(undefined4 *)(puVar7 + 4) = 0;
    *param_3 = puVar7;
    pcVar15 = (code *)&UNK_05f18fc0;
    param_3[7] = &UNK_05f18fc0;
    if (bVar29) {
      lVar8 = param_3[6];
    }
    else {
      lVar8 = 0;
    }
    param_3[6] = lVar8;
    plVar18 = param_5;
    if (lVar8 == 0) goto LAB_05f163d9;
LAB_05f163ef:
    bVar21 = *(byte *)(lVar8 + 0x1a);
  }
  else {
    lVar8 = param_3[6];
    plVar18 = unaff_R15;
    if (lVar8 != 0) goto LAB_05f163ef;
LAB_05f163d9:
    plVar18 = (long *)param_3[5];
    uStack_1a0 = 0x5f163e7;
    (*pcVar15)(0,param_3,0);
    lVar8 = param_3[6];
    if (lVar8 != 0) goto LAB_05f163ef;
    uStack_1a0 = 0x5f1641f;
    lVar8 = func_0x048aead0(plVar18);
    bVar21 = *(byte *)(lVar8 + 0x1a);
  }
  if ((bVar21 & 1) == 0) goto SUB_05f18db0;
  if ((code *)param_3[7] == (code *)0x0) {
    uStack_198 = (undefined8 *)0x0;
    plStack_190 = (long *)0x0;
    uStack_1a0 = 0x5f16544;
    func_0x048b1dc0(&uStack_198);
    puVar7 = uStack_198;
    plVar18 = plStack_190;
joined_r0x05f1654f:
    if (puVar7 == (undefined8 *)0x0) {
      uStack_1a0 = 0x5f1655d;
      puVar7 = (undefined8 *)func_0x048aead0(plVar18);
    }
  }
  else {
    puVar7 = (undefined8 *)param_3[6];
    if (puVar7 == (undefined8 *)0x0) {
      plVar18 = (long *)param_3[5];
      uStack_1a0 = 0x5f16449;
      (*(code *)param_3[7])(0,param_3,0);
      puVar7 = (undefined8 *)param_3[6];
      goto joined_r0x05f1654f;
    }
  }
  unaff_R14 = (undefined8 *)puVar7[0xd];
  uStack_1a0 = 0x5f16463;
  bVar21 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((bVar21 & 2) != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_1a0;
    uStack_1a0 = 0x5f16520;
    unaff_RBX = param_5;
    unaff_RBP = param_4;
    unaff_R12 = param_3;
    unaff_R13 = param_2;
    unaff_R15 = plVar18;
SUB_05f18db0:
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(long **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(long **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(long **)((long)register0x00000020 + -0x30) = unaff_RBX;
    cVar2 = *(char *)((long)param_3 + 0x24);
    puVar7 = (undefined8 *)*param_3;
    puVar12 = puVar7;
    if (cVar2 == '\x02') {
      puVar12 = param_3;
    }
    if (puVar12 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x49515b1d) {
      uVar10 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        pcVar15 = (code *)param_3[7];
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x5f18e0f;
        (*pcVar15)(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar7 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar7 = param_3;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x5f18e31;
      puVar12 = (undefined8 *)func_0x0488e200(uVar10,lVar8,0xb6aea4e3,puVar7);
    }
    lVar8 = *param_5;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x5f18e41;
    func_0x0ed6d600((undefined1 *)((long)register0x00000020 + -0x48),lVar8);
    bVar21 = *(byte *)(param_2 + 1) | *(byte *)((long)param_2 + 9);
    *(byte *)((long)param_2 + 9) = bVar21 | 1;
    pcVar15 = *(code **)(*param_2 + 0x98);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x5f18e5e;
    uVar13 = (*pcVar15)(param_2);
    *(byte *)((long)param_2 + 9) = bVar21;
    if ((uVar13 >> 0x20 & 1) == 0) {
      uVar10 = param_3[5];
      uVar22 = *(uint *)((long)register0x00000020 + -0x40);
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar22;
      *(undefined8 *)((long)register0x00000020 + -0x58) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x5f18e95;
      cVar2 = func_0x05f198b0(param_2,uVar10,puVar12,param_4,param_5,2);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      uVar28 = 2;
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar22;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x58);
    }
    else {
      if ((uVar13 & 0xfffffffe) != 0) {
        lVar8 = *param_5;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x2d000001258dae;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x5f18f01;
        func_0x0ed5ffe0(lVar8,8,(undefined1 *)((long)register0x00000020 + -0x50));
        if ((*(ulong *)((long)register0x00000020 + -0x50) >> 0x37 & 1) == 0) {
          return;
        }
        pcVar15 = *(code **)(_DAT_0f5463b0 + 0x28);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x5f18f25;
        (*pcVar15)(&DAT_0f5463b0,
                   (*(ulong *)((long)register0x00000020 + -0x50) & 0xff00ffffffffffff) - 8);
        return;
      }
      uVar10 = param_3[5];
      uVar22 = *(uint *)((long)register0x00000020 + -0x40);
      *(ulong *)((long)register0x00000020 + -0x58) = uVar13;
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar22;
      *(undefined8 *)((long)register0x00000020 + -0x38) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x48);
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x5f18f56;
      cVar2 = func_0x05f198b0(param_2,uVar10,puVar12,param_4,param_5,uVar13 & 0xff);
      if (cVar2 != '\0') {
        return;
      }
      uVar10 = param_3[5];
      uVar28 = *(undefined1 *)((long)register0x00000020 + -0x58);
      *(ulong *)((long)register0x00000020 + -0x60) = (ulong)uVar22;
      *(undefined8 *)((long)register0x00000020 + -0x68) =
           *(undefined8 *)((long)register0x00000020 + -0x38);
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x5f18f84;
    func_0x05f19ac0(param_2,uVar10,puVar12,param_4,param_5,uVar28);
    return;
  }
  puStack_b0 = unaff_R14;
  if (bVar21 != 1) {
    uStack_198 = (undefined8 *)0x120000012f2525;
    uStack_1a0 = 0x5f1658d;
    func_0x0ed5ffe0(*param_5,8,&uStack_198);
    if (((ulong)uStack_198 >> 0x37 & 1) == 0) {
      return;
    }
    uStack_1a0 = 0x5f165b0;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
    return;
  }
  uStack_1a0 = 0x5f164a5;
  plStack_f0 = param_2;
  uStack_c8 = param_4;
  func_0x0ed6d600(&lStack_68,*param_5);
  uStack_48 = param_3[5];
  lStack_b8 = *param_5;
  ppppppuVar20 = (undefined8 ******)((long)puStack_b0 + 9);
  bVar29 = (*(byte *)(puStack_b0 + 1) & 1) == 0;
  ppppppuVar23 = (undefined8 ******)puStack_b0[3];
  if (bVar29) {
    ppppppuVar23 = ppppppuVar20;
  }
  uVar13 = (ulong)(*(byte *)(puStack_b0 + 1) >> 1);
  if (!bVar29) {
    uVar13 = puStack_b0[2];
  }
  plStack_c0 = param_5;
  if (ppppppuVar23 == (undefined8 ******)0x0) {
    puStack_100 = (undefined *)((ulong)((uint)uVar13 & 0x7f) << 0x30);
  }
  else if (uVar13 < 0x80) {
    puStack_100 = (undefined *)(uVar13 << 0x30 | (ulong)ppppppuVar23 & 0xff00ffffffffffff);
  }
  else {
    lVar8 = uVar13 + 9;
    puStack_150 = (uint *)CONCAT71(puStack_150._1_7_,lVar8 == 0);
    uStack_1a0 = 0x5f165e7;
    puVar4 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
    if (puVar4 == (ulong *)0x0 && (char)puStack_150 == '\0') {
      uStack_1a0 = 0x5f1767c;
      func_0x0eec74c0(lVar8,8);
    }
    *puVar4 = uVar13;
    uStack_1a0 = 0x5f16612;
    func_0x0eee2f00(puVar4 + 1,ppppppuVar23,uVar13);
    *(undefined1 *)((long)puVar4 + uVar13 + 8) = 0;
    puStack_100 = (undefined *)((ulong)(puVar4 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_1a0 = 0x5f16651;
  puVar5 = (uint *)func_0x0ed6d180(lStack_b8,&puStack_100,0);
  plVar18 = plStack_f0;
  if (((ulong)puStack_100 & 0x80000000000000) != 0) {
    uStack_1a0 = 0x5f1668b;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_100 & 0xff00ffffffffffff) - 8)
    ;
  }
  puVar7 = puStack_b0;
  puStack_100 = (undefined *)0x0;
  bVar29 = (*(byte *)(puStack_b0 + 1) & 1) == 0;
  ppppppuVar23 = (undefined8 ******)puStack_b0[3];
  if (bVar29) {
    ppppppuVar23 = ppppppuVar20;
  }
  uVar13 = (ulong)(*(byte *)(puStack_b0 + 1) >> 1);
  if (!bVar29) {
    uVar13 = puStack_b0[2];
  }
  uStack_1a0 = 0x5f166c4;
  cVar2 = (**(code **)(*plVar18 + 0xb8))(plVar18,ppppppuVar23,uVar13);
  if (cVar2 == '\0') {
    uStack_1a0 = 0x5f167e3;
    puStack_150 = puVar5;
    _auStack_148 = (*(code *)*puVar7)(uStack_48);
    uStack_1a0 = 0x5f16809;
    func_0x0ed8bc80(&uStack_198,auStack_148,*(undefined1 *)(lStack_b8 + 0x2aa));
    plVar17 = (long *)((ulong)uStack_198 >> 1 & 0x7f);
    pcVar15 = (code *)((long)&uStack_198 + 1);
    if (((ulong)uStack_198 & 1) != 0) {
      plVar17 = plStack_190;
      pcVar15 = pcStack_188;
    }
    pppppppuStack_a8 = (undefined8 *******)0x0;
    if (pcVar15 == (code *)0x0) {
      pppppppuStack_a8 = (undefined8 *******)((ulong)((uint)plVar17 & 0x7f) << 0x30);
    }
    else {
      lVar8 = (long)plVar17 + 9;
      uStack_1a0 = 0x5f16858;
      puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
      if (lVar8 != 0 && puVar7 == (undefined8 *)0x0) {
        uStack_1a0 = 0x5f1768e;
        func_0x0eec74c0(lVar8,8);
      }
      *puVar7 = plVar17;
      uStack_1a0 = 0x5f16888;
      func_0x0eee2f00(puVar7 + 1,pcVar15,plVar17);
      *(undefined1 *)((long)(puVar7 + 1) + (long)plVar17) = 0;
      pppppppuStack_a8 =
           (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      plVar18 = plStack_f0;
    }
    puVar5 = puStack_150;
    uStack_1a0 = 0x5f16a18;
    func_0x0ed5ffe0(lStack_b8,8,&pppppppuStack_a8);
    if (((ulong)pppppppuStack_a8 & 0x80000000000000) != 0) {
      uStack_1a0 = 0x5f16a51;
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pppppppuStack_a8 & 0xff00ffffffffffff) - 8);
    }
    pppppppuStack_a8 = (undefined8 *******)0x0;
    if (((ulong)uStack_198 & 1) != 0) {
      uStack_1a0 = 0x5f16a75;
      func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
    }
    uStack_e8 = (undefined8 *)0x0;
    plStack_e0 = (long *)0x0;
    pcStack_d8 = (code *)0x0;
  }
  else {
    uStack_1a0 = 0x5f166e3;
    (**(code **)(*plVar18 + 0x80))(auStack_148,plVar18,0x40);
    cStack_158 = cStack_108;
    if (cStack_108 == '\0') {
      uStack_198 = (undefined8 *)auStack_148;
      plStack_190 = plStack_140;
      pcStack_188 = pcStack_138;
      pcStack_180 = pcStack_130;
      uStack_178 = lStack_128;
      lStack_170 = lStack_120;
      lStack_168 = lStack_118;
      puStack_160 = puStack_110;
      pppppppuStack_a8 = (undefined8 *******)puVar7[3];
      uStack_a0 = puVar7[2];
      if ((*(byte *)(puVar7 + 1) & 1) == 0) {
        pppppppuStack_a8 = (undefined8 *******)ppppppuVar20;
        uStack_a0 = (ulong)(*(byte *)(puVar7 + 1) >> 1);
      }
      uStack_1a0 = 0x5f16939;
      puStack_150 = puVar5;
      func_0x0470d9a0(auStack_148,&UNK_01377405,0x15,0xd,&pppppppuStack_a8);
      plVar17 = (long *)((ulong)auStack_148 >> 1 & 0x7f);
      pcVar15 = (code *)(auStack_148 + 1);
      if (((ulong)auStack_148 & 1) != 0) {
        plVar17 = plStack_140;
        pcVar15 = pcStack_138;
      }
      pppppppuStack_a8 = (undefined8 *******)0x0;
      if (pcVar15 == (code *)0x0) {
        pppppppuStack_a8 = (undefined8 *******)((ulong)((uint)plVar17 & 0x7f) << 0x30);
      }
      else {
        lVar8 = (long)plVar17 + 9;
        uStack_1a0 = 0x5f16989;
        puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar8,8);
        if (lVar8 != 0 && puVar7 == (undefined8 *)0x0) {
          uStack_1a0 = 0x5f176a0;
          func_0x0eec74c0(lVar8,8);
        }
        *puVar7 = plVar17;
        uStack_1a0 = 0x5f169b9;
        func_0x0eee2f00(puVar7 + 1,pcVar15,plVar17);
        *(undefined1 *)((long)(puVar7 + 1) + (long)plVar17) = 0;
        pppppppuStack_a8 =
             (undefined8 *******)((ulong)(puVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000);
        plVar18 = plStack_f0;
      }
      puVar5 = puStack_150;
      uStack_1a0 = 0x5f16ae9;
      func_0x0ed5ffe0(lStack_b8,8,&pppppppuStack_a8);
      if (((ulong)pppppppuStack_a8 & 0x80000000000000) != 0) {
        uStack_1a0 = 0x5f16b22;
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pppppppuStack_a8 & 0xff00ffffffffffff) - 8);
      }
      pppppppuStack_a8 = (undefined8 *******)0x0;
      if (((ulong)auStack_148 & 1) != 0) {
        uStack_1a0 = 0x5f16b48;
        func_0x0412a280(pcStack_138,(ulong)auStack_148 & 0xfffffffffffffffe);
      }
      uStack_e8 = (undefined8 *)0x0;
      plStack_e0 = (long *)0x0;
      pcStack_d8 = (code *)0x0;
    }
    else {
      pcStack_188 = pcStack_138;
      uStack_198 = (undefined8 *)auStack_148;
      plStack_190 = plStack_140;
      plVar17 = (long *)(ulong)(byte)(auStack_148[0] >> 1);
      pcVar15 = (code *)((long)&uStack_198 + 1);
      if (((ulong)auStack_148 & 1) != 0) {
        plVar17 = plStack_140;
        pcVar15 = pcStack_138;
      }
      bVar21 = auStack_148[0];
      if (plVar17 != (long *)0x0) {
        uStack_1a0 = 0x5f1672f;
        plVar6 = (long *)func_0x0eee3290();
        pcVar16 = pcVar15;
        for (uVar13 = (ulong)plVar17 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar16 = *(code *)(*plVar6 + (ulong)(byte)*pcVar16 * 4);
          pcVar16 = pcVar16 + 1;
        }
        if ((long *)0x3 < plVar17) {
          do {
            *pcVar16 = *(code *)(*plVar6 + (ulong)(byte)*pcVar16 * 4);
            pcVar16[1] = *(code *)(*plVar6 + (ulong)(byte)pcVar16[1] * 4);
            pcVar16[2] = *(code *)(*plVar6 + (ulong)(byte)pcVar16[2] * 4);
            pcVar16[3] = *(code *)(*plVar6 + (ulong)(byte)pcVar16[3] * 4);
            pcVar16 = pcVar16 + 4;
          } while (pcVar16 != pcVar15 + (long)plVar17);
        }
        bVar21 = (byte)uStack_198;
      }
      if ((bVar21 & 1) == 0) {
        pcStack_d8 = pcStack_188;
        uStack_e8 = uStack_198;
        plStack_e0 = plStack_190;
      }
      else {
        uStack_1a0 = 0x5f16aa8;
        func_0x0412e5e0(&uStack_e8,pcStack_188,plStack_190);
      }
    }
    lVar8 = lStack_170;
    if (cStack_158 == '\x01') {
      if (((ulong)uStack_198 & 1) != 0) {
        uStack_1a0 = 0x5f16b82;
        func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
      }
    }
    else {
      if (lStack_170 != 0) {
        while (lVar8 != lStack_168) {
          uStack_1a0 = 0x5f16bac;
          func_0x048b3e80(lStack_168 + -0x40);
          lStack_168 = lStack_168 + -0x40;
        }
        lStack_168 = lVar8;
        uStack_1a0 = 0x5f16bc8;
        func_0x0412a280(lStack_170,(long)puStack_160 - lStack_170);
      }
      pcVar16 = pcStack_188;
      pcVar15 = pcStack_180;
      if (pcStack_188 != (code *)0x0) {
        for (; pcVar16 != pcVar15; pcVar15 = pcVar15 + -0x50) {
          if ((pcVar15[-8] == (code)0x1) && (((byte)pcVar15[-0x30] & 1) != 0)) {
            uStack_1a0 = 0x5f16c18;
            func_0x0412a280(*(undefined8 *)(pcVar15 + -0x20),
                            *(ulong *)(pcVar15 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pcStack_180 = pcVar16;
        uStack_1a0 = 0x5f16c31;
        func_0x0412a280(pcStack_188,uStack_178 - (long)pcStack_188);
      }
    }
  }
  uStack_1a0 = 0x5f16c48;
  (**(code **)(*plVar18 + 0xd0))(plVar18);
  lVar8 = *(long *)(puVar5 + 2);
  uVar22 = *(uint *)(lVar8 + 0x1c + (ulong)*puVar5 * 0x20);
  *puVar5 = uVar22;
  if (puVar5[0x48] == 0) {
    uVar14 = puVar5[4];
LAB_05f16c8a:
    lVar1 = lVar8 + (ulong)uVar14 * 0x20;
    uVar13 = (ulong)*(uint *)(lVar8 + -0x10 + (ulong)uVar14 * 0x20);
    if (uVar13 != 0xffffffff) {
      uStack_1a0 = 0x5f16cb3;
      (**(code **)(&UNK_0f4e40d0 + uVar13 * 8))(&uStack_198,lVar1 + -0x18);
      uVar14 = puVar5[4];
    }
    *(undefined4 *)(lVar1 + -0x10) = 0xffffffff;
    puVar5[4] = uVar14 - 1;
  }
  else if ((*(uint *)(*(long *)(puVar5 + 0x46) + 0x18 + (ulong)(puVar5[0x48] - 1) * 0x30) != uVar22)
          && (uVar14 = puVar5[4], uVar22 == uVar14 - 1)) goto LAB_05f16c8a;
  if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) || (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
    uStack_1a0 = 0x5f16cf2;
    auStack_40 = (*(code *)*puStack_b0)();
    uVar10 = auStack_40._8_8_;
    lVar8 = auStack_40._0_8_;
    plVar18 = (long *)((ulong)uStack_e8 >> 1 & 0x7f);
    pcVar15 = (code *)((long)&uStack_e8 + 1);
    if (((ulong)uStack_e8 & 1) != 0) {
      plVar18 = plStack_e0;
      pcVar15 = pcStack_d8;
    }
    if (plVar18 == (long *)0x0) {
      uVar22 = 0x811c9dc5;
    }
    else {
      uVar13 = (ulong)((uint)plVar18 & 3);
      if (plVar18 < (long *)0x4) {
        uVar22 = 0x811c9dc5;
        uVar27 = 0;
      }
      else {
        uVar22 = 0x811c9dc5;
        uVar27 = 0;
        do {
          uVar22 = ((int)(char)pcVar15[uVar27 + 3] ^
                   ((int)(char)pcVar15[uVar27 + 2] ^
                   ((int)(char)pcVar15[uVar27 + 1] ^
                   ((int)(char)pcVar15[uVar27] ^ uVar22) * 0x1000193) * 0x1000193) * 0x1000193) *
                   0x1000193;
          uVar27 = uVar27 + 4;
        } while (((ulong)plVar18 & 0xfffffffffffffffc) != uVar27);
      }
      if (uVar13 != 0) {
        uVar24 = 0;
        do {
          uVar22 = ((int)(char)pcVar15[uVar24 + uVar27] ^ uVar22) * 0x1000193;
          uVar24 = uVar24 + 1;
        } while (uVar13 != uVar24);
      }
    }
    if (lVar8 == 0) {
      uStack_1a0 = 0x5f16de1;
      lVar8 = func_0x048aead0(uVar10);
    }
    uStack_1a0 = 0x5f16df3;
    puStack_58 = (undefined8 *)func_0x048b0c90(uVar10,lVar8,uVar22,1);
    if (puStack_58 == (undefined8 *)0x0) {
      uStack_198 = (undefined8 *)0x0;
      plStack_190 = (long *)0x0;
      uStack_1a0 = 0x5f16e21;
      func_0x048b0d20(&uStack_198);
      puStack_58 = uStack_198;
      plStack_50 = plStack_190;
      if (uStack_198 == (undefined8 *)0x0) {
        lVar8 = *plStack_c0;
        uStack_1a0 = 0x5f17488;
        func_0x0ed8bc80(&uStack_198,auStack_40,*(undefined1 *)(lVar8 + 0x2aa));
        uStack_1a0 = 0x5f1749c;
        uVar10 = func_0x0412f8c0(&uStack_198,&UNK_01479aea,10);
        plVar18 = (long *)((ulong)uStack_e8 >> 1 & 0x7f);
        pcVar15 = (code *)((long)&uStack_e8 + 1);
        if (((ulong)uStack_e8 & 1) != 0) {
          plVar18 = plStack_e0;
          pcVar15 = pcStack_d8;
        }
        uStack_1a0 = 0x5f174c8;
        uVar10 = func_0x0412f8c0(uVar10,pcVar15,plVar18);
        uStack_1a0 = 0x5f174dc;
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
        uStack_1a0 = 0x5f1750e;
        func_0x0ee387f0(auStack_148,pbVar26,uVar13,1);
        uStack_1a0 = 0x5f17520;
        func_0x0ed5ffe0(lVar8,8,auStack_148);
        uStack_1a0 = 0x5f1752a;
        func_0x0ee386e0(auStack_148);
        if (((ulong)uStack_198 & 1) != 0) {
          uStack_1a0 = 0x5f17546;
          func_0x0412a280(pcStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
        }
        goto LAB_05f17603;
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
    uStack_198 = (undefined8 *)0x0;
    plStack_190 = (long *)0x0;
    uStack_1a0 = 0x5f16e56;
    func_0x05d84ba0(&uStack_198);
    uStack_1a0 = 0x5f16e6e;
    func_0x05d9a920(&pppppppuStack_a8,&puStack_58,&uStack_198);
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0x5f16e7d;
      (*pcStack_180)(&uStack_198);
    }
    bVar29 = (*(byte *)(puStack_b0 + 1) & 1) != 0;
    if (bVar29) {
      ppppppuVar20 = (undefined8 ******)puStack_b0[3];
    }
    uVar13 = (ulong)(*(byte *)(puStack_b0 + 1) >> 1);
    if (bVar29) {
      uVar13 = puStack_b0[2];
    }
    if (uVar13 == 0) {
      uVar22 = 0x811c9dc5;
    }
    else {
      uVar27 = (ulong)((uint)uVar13 & 3);
      if (uVar13 < 4) {
        uVar22 = 0x811c9dc5;
        uVar24 = 0;
      }
      else {
        uVar22 = 0x811c9dc5;
        uVar24 = 0;
        do {
          uVar22 = ((int)*(char *)((long)ppppppuVar20 + uVar24 + 3) ^
                   ((int)*(char *)((long)ppppppuVar20 + uVar24 + 2) ^
                   ((int)*(char *)((long)ppppppuVar20 + uVar24 + 1) ^
                   ((int)*(char *)((long)ppppppuVar20 + uVar24) ^ uVar22) * 0x1000193) * 0x1000193)
                   * 0x1000193) * 0x1000193;
          uVar24 = uVar24 + 4;
        } while ((uVar13 & 0xfffffffffffffffc) != uVar24);
      }
      if (uVar27 != 0) {
        uVar13 = 0;
        do {
          uVar22 = ((int)*(char *)((long)ppppppuVar20 + uVar13 + uVar24) ^ uVar22) * 0x1000193;
          uVar13 = uVar13 + 1;
        } while (uVar27 != uVar13);
      }
    }
    cVar2 = *(char *)((long)param_3 + 0x24);
    puVar7 = (undefined8 *)*param_3;
    puVar12 = puVar7;
    if (cVar2 == '\x02') {
      puVar12 = param_3;
    }
    if (puVar12 == (undefined8 *)0x0 || *(int *)(param_3 + 4) != -0x49515b1d) {
      uVar10 = param_3[5];
      lVar8 = param_3[6];
      if (lVar8 == 0) {
        uStack_1a0 = 0x5f16f80;
        (*(code *)param_3[7])(0,param_3,0);
        lVar8 = param_3[6];
        cVar2 = *(char *)((long)param_3 + 0x24);
        puVar7 = (undefined8 *)*param_3;
      }
      if (cVar2 == '\x02') {
        puVar7 = param_3;
      }
      uStack_1a0 = 0x5f16fa2;
      puVar12 = (undefined8 *)func_0x0488e200(uVar10,lVar8,0xb6aea4e3,puVar7);
    }
    plVar18 = (long *)param_3[5];
    if (DAT_0f55f688 == '\0') {
      uStack_1a0 = 0x5f176b1;
      iVar3 = func_0x04108328(&DAT_0f55f688);
      if (iVar3 != 0) {
        uStack_1a0 = 0x5f176be;
        func_0x05f18b80();
        uStack_1a0 = 0x5f176d8;
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f55f608,0xf53dab8);
        uStack_1a0 = 0x5f176e4;
        func_0x0410844d(&DAT_0f55f688);
      }
    }
    plVar17 = (long *)(*plVar18 +
                      (ulong)((int)((ulong)(plVar18[1] - *plVar18) >> 3) - 1U &
                             *(uint *)(_DAT_0f55f608 + 4)) * 8);
    do {
      lVar8 = *plVar17;
      if (lVar8 == -1) {
        plVar6 = (long *)plVar18[4];
        plVar17 = plVar6;
        goto LAB_05f17004;
      }
      plVar17 = (long *)(plVar18[3] + lVar8 * 0x18);
    } while (*(uint *)(plVar18[3] + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f55f608 + 4));
    plVar6 = (long *)plVar18[4];
LAB_05f17004:
    if (plVar17 == plVar6) {
      puVar25 = &DAT_0f55f608;
    }
    else {
      puVar25 = (undefined *)plVar17[2];
    }
    uStack_1a0 = 0x5f17026;
    auVar9 = (undefined1  [8])func_0x048b0c90(plVar18,puVar25,uVar22,1);
    plStack_f8 = plVar18;
    if (auVar9 == (undefined1  [8])0x0) {
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1a0 = 0x5f1703d;
      func_0x048b0d20(auStack_148);
      auVar9 = auStack_148;
      plStack_f8 = plStack_140;
    }
    lStack_118 = 0;
    puStack_110 = (undefined *)0x0;
    lStack_128 = 0;
    lStack_120 = 0;
    pcStack_138 = (code *)0x0;
    pcStack_130 = (code *)0x0;
    auStack_148 = (undefined1  [8])0x0;
    plStack_140 = (long *)0x0;
    uStack_1a0 = 0x5f1707b;
    puStack_100 = (undefined *)auVar9;
    func_0x05d84ba0(auStack_148);
    uStack_1a0 = 0x5f17090;
    func_0x05d9a920(&uStack_198,&puStack_100,auStack_148);
    if ((lStack_170 == lStack_80) && ((lStack_70 != 0) == (puStack_160 != (undefined *)0x0))) {
      if ((cStack_84 == '\0') || ((int)uStack_178 != iStack_88)) {
        bVar29 = cStack_84 == '\0' && uStack_178._4_1_ == '\0';
      }
      else {
        pppppppuVar19 = pppppppuStack_a8;
        if (cStack_84 == '\x02') {
          pppppppuVar19 = &pppppppuStack_a8;
        }
        uStack_1a0 = 0x5f1764d;
        lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar19);
        bVar29 = lVar8 != 0;
      }
    }
    else {
      bVar29 = false;
    }
    if (pcStack_180 != (code *)0x0) {
      uStack_1a0 = 0x5f170cd;
      (*pcStack_180)(&uStack_198);
    }
    if (pcStack_130 != (code *)0x0) {
      uStack_1a0 = 0x5f170de;
      (*pcStack_130)(auStack_148);
    }
    plVar18 = plStack_f0;
    if (bVar29) {
      lVar8 = param_3[5];
      if ((ulong)*(uint *)(puVar12 + 4) != 0xffffffff) {
        uStack_1a0 = 0x5f17112;
        (**(code **)(&UNK_0f0095f8 + (ulong)*(uint *)(puVar12 + 4) * 8))(auStack_148,puVar12);
      }
      puVar12[2] = 0;
      puVar12[3] = 0;
      *puVar12 = 0;
      puVar12[1] = 0;
      *(undefined4 *)(puVar12 + 4) = 0;
      pcStack_188 = (code *)&UNK_05f187d0;
      pcStack_180 = (code *)0x0;
      uStack_178 = CONCAT35(uStack_178._5_3_,0x3bf9a979d);
      lStack_168 = 0;
      puStack_160 = &UNK_05f186f0;
      lStack_128 = plStack_c0[4];
      auStack_148 = (undefined1  [8])*plStack_c0;
      plStack_140 = (long *)plStack_c0[1];
      pcStack_138 = (code *)plStack_c0[2];
      pcStack_130 = (code *)plStack_c0[3];
      plVar17 = (long *)plStack_c0[2];
      lStack_170 = lVar8;
      if (plVar17 == (long *)0x0) {
        pcStack_138 = (code *)0x0;
        uStack_198 = puVar12;
      }
      else {
        uStack_1a0 = 0x5f1719b;
        uStack_198 = puVar12;
        pcStack_138 = (code *)(**(code **)(*plVar17 + 0x30))(plVar17,0);
      }
      puStack_100 = &UNK_0f011230;
      uStack_1a0 = 0x5f1744e;
      func_0x0ed75bc0(&puStack_100,plVar18,&uStack_198,uStack_c8,auStack_148);
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0x5f17461;
        (*pcStack_180)(&uStack_198);
      }
    }
    else {
      plVar18 = (long *)param_3[5];
      uStack_1a0 = 0x5f171b5;
      uVar10 = func_0x048b2190(plVar18);
      uStack_1a0 = 0x5f171c8;
      auVar9 = (undefined1  [8])func_0x048b0c90(plVar18,uVar10,uVar22,1);
      if (auVar9 == (undefined1  [8])0x0) {
        auStack_148 = (undefined1  [8])0x0;
        plStack_140 = (long *)0x0;
        uStack_1a0 = 0x5f171df;
        func_0x048b0d20(auStack_148);
        auVar9 = auStack_148;
        plVar18 = plStack_140;
      }
      lStack_118 = 0;
      puStack_110 = (undefined *)0x0;
      lStack_128 = 0;
      lStack_120 = 0;
      pcStack_138 = (code *)0x0;
      pcStack_130 = (code *)0x0;
      auStack_148 = (undefined1  [8])0x0;
      plStack_140 = (long *)0x0;
      uStack_1a0 = 0x5f1721d;
      puStack_100 = (undefined *)auVar9;
      plStack_f8 = plVar18;
      func_0x05d84ba0(auStack_148);
      uStack_1a0 = 0x5f17232;
      func_0x05d9a920(&uStack_198,&puStack_100,auStack_148);
      plVar18 = plStack_f0;
      if ((lStack_170 == lStack_80) && ((lStack_70 != 0) == (puStack_160 != (undefined *)0x0))) {
        if ((cStack_84 == '\0') || ((int)uStack_178 != iStack_88)) {
          bVar29 = cStack_84 == '\0' && uStack_178._4_1_ == '\0';
        }
        else {
          pppppppuVar19 = &pppppppuStack_a8;
          if (cStack_84 != '\x02') {
            pppppppuVar19 = pppppppuStack_a8;
          }
          uStack_1a0 = 0x5f1759c;
          lVar8 = (*pcStack_188)(3,&uStack_198,pppppppuVar19);
          bVar29 = lVar8 != 0;
        }
      }
      else {
        bVar29 = false;
      }
      if (pcStack_180 != (code *)0x0) {
        uStack_1a0 = 0x5f17277;
        (*pcStack_180)(&uStack_198);
      }
      if (pcStack_130 != (code *)0x0) {
        uStack_1a0 = 0x5f17288;
        (*pcStack_130)(auStack_148);
      }
      if (bVar29) {
        lVar8 = param_3[5];
        if ((ulong)*(uint *)(puVar12 + 4) != 0xffffffff) {
          uStack_1a0 = 0x5f172b4;
          (**(code **)(&UNK_0f0095f8 + (ulong)*(uint *)(puVar12 + 4) * 8))(auStack_148,puVar12);
        }
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = 0;
        *(undefined4 *)(puVar12 + 4) = 1;
        pcStack_188 = (code *)&UNK_048b1ea0;
        pcStack_180 = (code *)0x0;
        uStack_178 = CONCAT35(uStack_178._5_3_,0x3a24c74b7);
        lStack_168 = 0;
        puStack_160 = &UNK_048b1e80;
        lStack_128 = plStack_c0[4];
        auStack_148 = (undefined1  [8])*plStack_c0;
        plStack_140 = (long *)plStack_c0[1];
        pcStack_138 = (code *)plStack_c0[2];
        pcStack_130 = (code *)plStack_c0[3];
        plVar17 = (long *)plStack_c0[2];
        lStack_170 = lVar8;
        if (plVar17 == (long *)0x0) {
          pcStack_138 = (code *)0x0;
          uStack_198 = puVar12;
        }
        else {
          uStack_1a0 = 0x5f17344;
          uStack_198 = puVar12;
          pcStack_138 = (code *)(**(code **)(*plVar17 + 0x30))(plVar17,1);
        }
        puStack_100 = &UNK_0ef44b00;
        uStack_1a0 = 0x5f175dd;
        func_0x0ed75bc0(&puStack_100,plVar18,&uStack_198,uStack_c8,auStack_148);
        if (pcStack_180 != (code *)0x0) {
          uStack_1a0 = 0x5f175ec;
          (*pcStack_180)(&uStack_198);
        }
      }
      else if ((*(uint *)(lStack_68 + 0x2b0) == 0xffffffff) ||
              (*(uint *)(lStack_68 + 0x2b0) < uStack_60)) {
        uStack_198 = (undefined8 *)0x2300000149614c;
        uStack_1a0 = 0x5f173a4;
        func_0x0ed5ffe0(*plStack_c0,8,&uStack_198);
        if (((ulong)uStack_198 & 0x80000000000000) != 0) {
          uStack_1a0 = 0x5f173cf;
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)uStack_198 & 0xff00ffffffffffff) - 8);
        }
        uStack_198 = (undefined8 *)0x0;
      }
    }
    if (pcStack_90 != (code *)0x0) {
      uStack_1a0 = 0x5f17603;
      (*pcStack_90)(&pppppppuStack_a8);
    }
  }
LAB_05f17603:
  if (((ulong)uStack_e8 & 1) != 0) {
    uStack_1a0 = 0x5f1762a;
    func_0x0412a280(pcStack_d8,(ulong)uStack_e8 & 0xfffffffffffffffe);
  }
  return;
}


