/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5f74160 (ELF vaddr 0x5e74160)
 * Label: caller-of-callee
 * Body:  [[05f74160, 05f74940] [05f74950, 05f74d0b]]
 * Ghidra: FUN_05f74160
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_05f74160(undefined4 *param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined4 *puVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  long *plVar22;
  int *piVar23;
  undefined *puVar24;
  byte *pbVar25;
  int *piVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  long *unaff_R14;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  byte *pbStack_1c8;
  int iStack_1c0;
  int iStack_1bc;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined1 *puStack_188;
  byte *pbStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  ulong uStack_168;
  long lStack_160;
  long *plStack_158;
  long lStack_150;
  undefined4 uStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined2 uStack_110;
  undefined2 uStack_10e;
  uint uStack_10c;
  uint uStack_108;
  undefined1 uStack_104;
  undefined4 *puStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  byte *pbStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined4 uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined5 uStack_40;
  undefined3 uStack_3b;
  undefined5 uStack_38;
  
  puStack_100 = param_1;
  if (param_4 < 0xfffffffffffffff8) {
    pbVar11 = (byte *)((long)&uStack_1d8 + 1);
    if (param_4 < 0x17) {
      uStack_1d8 = CONCAT71(uStack_1d8._1_7_,(char)param_4 * '\x02');
      pbVar25 = pbVar11;
      if (param_4 != 0) goto LAB_05f741f2;
    }
    else {
      uVar29 = 0x1a;
      if ((param_4 | 7) != 0x17) {
        uVar29 = (param_4 | 7) + 1;
      }
      pbVar25 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29);
      if (pbVar25 == (byte *)0x0) {
        func_0x0eec74c0(uVar29,0);
      }
      uStack_1d8 = uVar29 | 1;
      uStack_1d0 = param_4;
      pbStack_1c8 = pbVar25;
LAB_05f741f2:
      func_0x0eee2f00(pbVar25,param_3,param_4);
    }
    pbVar25[param_4] = 0;
    uVar29 = uStack_1d8 >> 1 & 0x7f;
    if ((uStack_1d8 & 1) != 0) {
      uVar29 = uStack_1d0;
      pbVar11 = pbStack_1c8;
    }
    if (uVar29 != 0) {
      plVar22 = (long *)func_0x0eee3290();
      pbVar25 = pbVar11;
      for (uVar28 = uVar29 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
        *pbVar25 = *(byte *)(*plVar22 + (ulong)*pbVar25 * 4);
        pbVar25 = pbVar25 + 1;
      }
      if (3 < uVar29) {
        do {
          *pbVar25 = *(byte *)(*plVar22 + (ulong)*pbVar25 * 4);
          pbVar25[1] = *(byte *)(*plVar22 + (ulong)pbVar25[1] * 4);
          pbVar25[2] = *(byte *)(*plVar22 + (ulong)pbVar25[2] * 4);
          pbVar25[3] = *(byte *)(*plVar22 + (ulong)pbVar25[3] * 4);
          pbVar25 = pbVar25 + 4;
        } while (pbVar25 != pbVar11 + uVar29);
      }
    }
    plStack_158 = (long *)0x0;
    lStack_150 = 0;
    uStack_168 = 0;
    lStack_160 = 0;
    puStack_178 = (undefined *)0x0;
    puStack_170 = (undefined *)0x0;
    puStack_188 = (undefined1 *)0x0;
    pbStack_180 = (byte *)0x0;
    lStack_198 = 0;
    puStack_190 = (undefined *)0x0;
    plStack_1a8 = (long *)0x0;
    lStack_1a0 = 0;
    plStack_1b8 = (long *)0x0;
    plStack_1b0 = (long *)0x0;
    uStack_148 = 0x3f600000;
    FUN_048afb10(&puStack_178,8);
    uStack_120 = 0;
    lStack_118 = 0;
    lStack_130 = 0;
    uStack_128 = 0;
    lStack_140 = 0;
    lStack_138 = 0;
    uStack_110 = 0xff00;
    uStack_10c = uStack_10c & 0xffffff00;
    uStack_108 = uStack_108 & 0xffffff00;
    uStack_104 = 0;
    plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar22 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar22 = (long)&UNK_0f017c80;
    if (plStack_1b8 != (long *)0x0) {
      lVar2 = *plStack_1b8;
      plStack_1b8 = plVar22;
      (**(code **)(lVar2 + 8))();
      plVar22 = plStack_1b8;
    }
    plStack_1b8 = plVar22;
    if (((ulong)puStack_190 & 1) != 0) {
      func_0x0412a280(pbStack_180,(ulong)puStack_190 & 0xfffffffffffffffe);
    }
    pbStack_180 = pbStack_1c8;
    puStack_190 = (undefined *)uStack_1d8;
    puStack_188 = (undefined1 *)uStack_1d0;
    uStack_1d8 = uStack_1d8 & 0xffffffffffff0000;
    func_0x0412f5e0(&plStack_1a8,param_3,param_4);
    lStack_e0 = (long)plStack_1b0;
    plStack_e8 = plStack_1b8;
    plStack_1b8 = (long *)0x0;
    plStack_1b0 = (long *)0x0;
    lStack_c8 = lStack_198;
    plStack_d8 = plStack_1a8;
    lStack_d0 = lStack_1a0;
    plStack_1a8 = (long *)0x0;
    lStack_1a0 = 0;
    lStack_198 = 0;
    pbStack_b0 = pbStack_180;
    uStack_c0 = (ulong)puStack_190;
    uStack_b8 = (ulong)puStack_188;
    puStack_190 = (undefined *)0x0;
    puStack_188 = (undefined1 *)0x0;
    pbStack_180 = (byte *)0x0;
    puStack_a8 = puStack_178;
    lStack_a0 = (long)puStack_170;
    lStack_98 = uStack_168;
    puStack_178 = (undefined *)0x0;
    puStack_170 = (undefined *)0x0;
    uStack_168 = 0;
    lStack_90 = lStack_160;
    lStack_88 = (long)plStack_158;
    lStack_80 = lStack_150;
    lStack_160 = 0;
    plStack_158 = (long *)0x0;
    lStack_150 = 0;
    uStack_78 = uStack_148;
    lStack_70 = lStack_140;
    lStack_68 = lStack_138;
    lStack_60 = lStack_130;
    lStack_140 = 0;
    lStack_138 = 0;
    lStack_130 = 0;
    lStack_48 = lStack_118;
    uStack_58 = uStack_128;
    uStack_50 = uStack_120;
    uStack_128 = 0;
    uStack_120 = 0;
    lStack_118 = 0;
    uStack_38 = CONCAT14(uStack_104,uStack_108);
    uStack_40 = (undefined5)CONCAT44(uStack_10c,CONCAT22(uStack_10e,uStack_110));
    uStack_3b = (undefined3)(uStack_10c >> 8);
    func_0x048b0bc0();
    if ((uStack_1d8 & 1) != 0) {
      func_0x0412a280(pbStack_1c8,uStack_1d8 & 0xfffffffffffffffe);
    }
    uVar29 = uStack_c0 >> 1 & 0x7f;
    pbVar11 = (byte *)((long)&uStack_c0 + 1);
    if ((uStack_c0 & 1) != 0) {
      uVar29 = uStack_b8;
      pbVar11 = pbStack_b0;
    }
    if (uVar29 == 0) {
      uVar27 = 0x811c9dc5;
    }
    else {
      uVar28 = (ulong)((uint)uVar29 & 3);
      if (uVar29 < 4) {
        uVar27 = 0x811c9dc5;
        uVar30 = 0;
      }
      else {
        uVar27 = 0x811c9dc5;
        uVar30 = 0;
        do {
          uVar27 = ((int)(char)pbVar11[uVar30 + 3] ^
                   ((int)(char)pbVar11[uVar30 + 2] ^
                   ((int)(char)pbVar11[uVar30 + 1] ^
                   ((int)(char)pbVar11[uVar30] ^ uVar27) * 0x1000193) * 0x1000193) * 0x1000193) *
                   0x1000193;
          uVar30 = uVar30 + 4;
        } while ((uVar29 & 0xfffffffffffffffc) != uVar30);
      }
      if (uVar28 != 0) {
        uVar29 = 0;
        do {
          uVar27 = ((int)(char)pbVar11[uVar29 + uVar30] ^ uVar27) * 0x1000193;
          uVar29 = uVar29 + 1;
        } while (uVar28 != uVar29);
      }
    }
    *(undefined4 *)(param_2 + 5) = 2;
    *(uint *)((long)param_2 + 0x2c) = uVar27;
    unaff_R14 = param_2;
    if (DAT_0f562080 == '\0') goto LAB_05f74c29;
  }
  else {
    func_0x04882e30();
LAB_05f74c29:
    iVar21 = func_0x04108328(&DAT_0f562080);
    if (iVar21 != 0) {
      func_0x05ffbaf0();
      FUN_0410844d(&DAT_0f562080);
    }
  }
  plStack_1b8 = (long *)CONCAT44(plStack_1b8._4_4_,*(undefined4 *)((long)unaff_R14 + 0x2c));
  plStack_1b0 = (long *)0x0;
  plStack_1a8 = (long *)CONCAT44(plStack_1a8._4_4_,3);
  lStack_1a0 = 1;
  lStack_198 = 0;
  puStack_190 = &UNK_05fff7d0;
  puStack_188 = &SUB_048b06d0;
  pbStack_180 = &UNK_05ffb920;
  puStack_178 = &UNK_05fff890;
  puStack_170 = &UNK_05fff8a0;
  uStack_168 = uStack_168 & 0xffffffff00000000;
  lStack_160 = 0;
  plStack_158 = (long *)0x0;
  func_0x048b05a0(unaff_R14 + 1,&plStack_1b8);
  plVar22 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_158 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      func_0x0412c2d0(plVar22);
    }
  }
  uStack_1d8 = unaff_R14[1];
  uStack_1d0 = unaff_R14[2];
  pbStack_1c8 = (byte *)unaff_R14[3];
  iStack_1c0 = (int)unaff_R14[4];
  iStack_1bc = *(int *)((long)unaff_R14 + 0x24);
  if ((DAT_0f550a20 == '\0') && (iVar21 = func_0x04108328(&DAT_0f550a20), iVar21 != 0)) {
    func_0x048b0af0(0xf550a08);
    FUN_0410844d(&DAT_0f550a20);
  }
  plStack_1b8 = (long *)CONCAT44(plStack_1b8._4_4_,_DAT_0f550a0c);
  plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar22 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar2 = lStack_e0;
  plVar1 = plStack_e8;
  plVar22[1] = 0;
  plVar22[2] = 0;
  *plVar22 = (long)&UNK_0ef439d0;
  plStack_1b0 = plVar22 + 3;
  plStack_e8 = (long *)0x0;
  lStack_e0 = 0;
  plVar22[3] = (long)plVar1;
  plVar22[4] = lVar2;
  plVar22[7] = lStack_c8;
  plVar22[5] = (long)plStack_d8;
  plVar22[6] = lStack_d0;
  plStack_d8 = (long *)0x0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  plVar22[10] = (long)pbStack_b0;
  plVar22[8] = uStack_c0;
  plVar22[9] = uStack_b8;
  uStack_c0 = 0;
  uStack_b8 = 0;
  pbStack_b0 = (byte *)0x0;
  plVar22[0xb] = (long)puStack_a8;
  plVar22[0xc] = lStack_a0;
  plVar22[0xd] = lStack_98;
  puStack_a8 = (undefined *)0x0;
  lStack_a0 = 0;
  lStack_98 = 0;
  plVar22[0xe] = lStack_90;
  plVar22[0xf] = lStack_88;
  plVar22[0x10] = lStack_80;
  lStack_90 = 0;
  lStack_88 = 0;
  lStack_80 = 0;
  *(undefined4 *)(plVar22 + 0x11) = uStack_78;
  plVar22[0x12] = lStack_70;
  plVar22[0x13] = lStack_68;
  plVar22[0x14] = lStack_60;
  lStack_70 = 0;
  lStack_68 = 0;
  lStack_60 = 0;
  plVar22[0x17] = lStack_48;
  *(undefined4 *)(plVar22 + 0x15) = (undefined4)uStack_58;
  *(undefined4 *)((long)plVar22 + 0xac) = uStack_58._4_4_;
  *(undefined4 *)(plVar22 + 0x16) = (undefined4)uStack_50;
  *(undefined4 *)((long)plVar22 + 0xb4) = uStack_50._4_4_;
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  *(ulong *)((long)plVar22 + 0xc5) = CONCAT53(uStack_38,uStack_3b);
  plVar22[0x18] = CONCAT35(uStack_3b,uStack_40);
  uStack_f8 = 0;
  plStack_f0 = (long *)0x0;
  plStack_1a8 = plVar22;
  func_0x048afd20(&uStack_1d8,&plStack_1b8);
  plVar22 = plStack_1a8;
  if (plStack_1a8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1a8 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
      func_0x0412c2d0(plVar22);
    }
  }
  plVar22 = plStack_f0;
  if (plStack_f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_f0 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      func_0x0412c2d0(plVar22);
    }
  }
  if (iStack_1bc == 2) {
    piVar26 = *(int **)(*(long *)((long)pbStack_1c8 + 0x78) + 0x60);
    iVar21 = *piVar26;
    while (iVar21 != iStack_1c0) {
      piVar26 = piVar26 + 0x16;
      iVar21 = *piVar26;
    }
    for (; *(long *)(piVar26 + 0xc) != uStack_1d0; piVar26 = *(int **)(piVar26 + 0xe)) {
    }
  }
  else {
    if (iStack_1bc != 1) {
      if (iStack_1bc == 0) {
        *(byte *)((long)pbStack_1c8 + 0x1a) = *(byte *)((long)pbStack_1c8 + 0x1a) | 9;
      }
      cVar19 = (char)unaff_R14[7];
      goto joined_r0x05f74969;
    }
    piVar26 = *(int **)(*(long *)((long)pbStack_1c8 + 0x78) + 0x48);
    iVar21 = *piVar26;
    while (iVar21 != iStack_1c0) {
      piVar26 = piVar26 + 0x1a;
      iVar21 = *piVar26;
    }
  }
  *(byte *)((long)piVar26 + 0x12) = *(byte *)((long)piVar26 + 0x12) | 9;
  cVar19 = (char)unaff_R14[7];
joined_r0x05f74969:
  if (cVar19 == '\0') {
    *(undefined4 *)((long)unaff_R14 + 0x34) = 0xbb8863ad;
    *(undefined1 *)(unaff_R14 + 7) = 1;
    plStack_1b8 = (long *)CONCAT44(plStack_1b8._4_4_,0xbb8863ad);
    lVar2 = *unaff_R14;
    if ((DAT_0f562060 == '\0') && (iVar21 = func_0x04108328(&DAT_0f562060), iVar21 != 0)) {
      func_0x05ffb9e0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f561fe0,0xf53dab8);
      FUN_0410844d(&DAT_0f562060);
    }
    plVar22 = (long *)(*(long *)(lVar2 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f561fe0 + 4)) * 8);
    do {
      lVar3 = *plVar22;
      if (lVar3 == -1) goto LAB_05f749e0;
      plVar22 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
    } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f561fe0 + 4));
    if (plVar22 == *(long **)(lVar2 + 0x38)) {
LAB_05f749e0:
      puVar24 = &DAT_0f561fe0;
    }
    else {
      puVar24 = (undefined *)plVar22[2];
    }
    lVar2 = *(long *)(puVar24 + 0x68);
    piVar23 = *(int **)(lVar2 + 0x28);
    for (piVar26 = *(int **)(lVar2 + 0x20); (piVar26 != piVar23 && (*piVar26 != -0x44779c53));
        piVar26 = piVar26 + 0xe) {
    }
    if (piVar26 == piVar23) {
      if (piVar23 < *(int **)(lVar2 + 0x30)) {
        *piVar23 = -0x44779c53;
        piVar23[2] = 0;
        piVar23[3] = 0;
        piVar23[4] = 0;
        piVar23[5] = 0;
        piVar23[6] = 0;
        piVar23[7] = 0;
        piVar23[8] = 0;
        piVar23[9] = 0;
        piVar23[10] = 0x3f800000;
        *(undefined1 *)(piVar23 + 0xc) = 0;
        *(undefined1 *)(piVar23 + 0xd) = 0;
        piVar23 = piVar23 + 0xe;
      }
      else {
        piVar23 = (int *)func_0x05d9c2b0(lVar2 + 0x20,&plStack_1b8);
      }
      *(int **)(lVar2 + 0x28) = piVar23;
    }
    else if ((*(long *)(piVar26 + 8) != 0) &&
            (cVar19 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_012a56e7)
            , cVar19 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  iVar21 = *(int *)((long)unaff_R14 + 0x34);
  lVar2 = *unaff_R14;
  if ((DAT_0f562060 == '\0') && (iVar20 = func_0x04108328(&DAT_0f562060), iVar20 != 0)) {
    func_0x05ffb9e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f561fe0,0xf53dab8);
    FUN_0410844d(&DAT_0f562060);
  }
  plVar22 = (long *)(*(long *)(lVar2 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f561fe0 + 4)) * 8);
  do {
    lVar3 = *plVar22;
    if (lVar3 == -1) goto LAB_05f74b10;
    plVar22 = (long *)(*(long *)(lVar2 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f561fe0 + 4));
  if (plVar22 == *(long **)(lVar2 + 0x38)) {
LAB_05f74b10:
    puVar24 = &DAT_0f561fe0;
  }
  else {
    puVar24 = (undefined *)plVar22[2];
  }
  piVar23 = *(int **)(*(long *)(puVar24 + 0x68) + 0x28);
  for (piVar26 = *(int **)(*(long *)(puVar24 + 0x68) + 0x20);
      (piVar26 != piVar23 && (*piVar26 != iVar21)); piVar26 = piVar26 + 0xe) {
  }
  if ((piVar26 == piVar23) &&
     (cVar19 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0125917c),
     cVar19 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  plStack_1b8 = (long *)((ulong)plStack_1b8 & 0xffffffffffffff00);
  func_0x05d9c620(piVar26 + 2,(long)unaff_R14 + 0x2c,(long)unaff_R14 + 0x2c,&plStack_1b8);
  puVar18 = puStack_100;
  lVar2 = *unaff_R14;
  uVar4 = *(undefined4 *)((long)unaff_R14 + 4);
  lVar3 = unaff_R14[1];
  uVar5 = *(undefined4 *)((long)unaff_R14 + 0xc);
  lVar12 = unaff_R14[2];
  uVar6 = *(undefined4 *)((long)unaff_R14 + 0x14);
  lVar13 = unaff_R14[3];
  uVar7 = *(undefined4 *)((long)unaff_R14 + 0x1c);
  lVar14 = unaff_R14[4];
  uVar8 = *(undefined4 *)((long)unaff_R14 + 0x24);
  lVar15 = unaff_R14[5];
  uVar9 = *(undefined4 *)((long)unaff_R14 + 0x2c);
  lVar16 = unaff_R14[6];
  uVar10 = *(undefined4 *)((long)unaff_R14 + 0x34);
  lVar17 = unaff_R14[7];
  puStack_100[0xb] = *(undefined4 *)((long)unaff_R14 + 0x2c);
  puStack_100[0xc] = (int)lVar16;
  puStack_100[0xd] = uVar10;
  puStack_100[0xe] = (int)lVar17;
  puStack_100[8] = (int)lVar14;
  puStack_100[9] = uVar8;
  puStack_100[10] = (int)lVar15;
  puStack_100[0xb] = uVar9;
  puStack_100[4] = (int)lVar12;
  puStack_100[5] = uVar6;
  puStack_100[6] = (int)lVar13;
  puStack_100[7] = uVar7;
  *puStack_100 = (int)lVar2;
  puStack_100[1] = uVar4;
  puStack_100[2] = (int)lVar3;
  puStack_100[3] = uVar5;
  func_0x048b0bc0(&plStack_e8);
  return puVar18;
}


