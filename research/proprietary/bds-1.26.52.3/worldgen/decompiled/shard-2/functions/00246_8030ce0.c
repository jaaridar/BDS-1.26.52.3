/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8130ce0 (ELF vaddr 0x8030ce0)
 * Label: caller-of-callee
 * Body:  [[08130ce0, 081314d0] [081314e0, 08131ece]]
 * Ghidra: FUN_08130ce0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08130ce0(long param_1)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  long *plVar11;
  int *piVar12;
  undefined4 *puVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  undefined1 *puVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  bool bVar21;
  long *plStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined4 *puStack_248;
  undefined *puStack_240;
  undefined1 *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  ulong uStack_218;
  long lStack_210;
  long *plStack_208;
  long lStack_200;
  undefined4 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  undefined1 uStack_1b4;
  long lStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  uint uStack_16c;
  char cStack_168;
  uint uStack_164;
  char cStack_160;
  long *plStack_158;
  long lStack_150;
  ulong uStack_148;
  long *plStack_140;
  undefined4 *puStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  ulong uStack_108;
  long lStack_100;
  long *plStack_f8;
  long lStack_f0;
  undefined4 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined5 uStack_a8;
  long lStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  uint uStack_6c;
  char cStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  
  if ((DAT_0f5c82a8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c82a8), iVar8 != 0)) {
    func_0x0818bf90();
    func_0x0410844d(&DAT_0f5c82a8);
  }
  uVar14 = _DAT_0f5c82a0;
  lVar16 = _DAT_0f5c8298;
  if ((DAT_0f5c8288 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8288), iVar8 != 0)) {
    func_0x08188350();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c8208,0xf53dab8);
    func_0x0410844d(&DAT_0f5c8288);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c8208 + 4)) * 8);
  do {
    lVar5 = *plVar11;
    if (lVar5 == -1) goto LAB_08130d71;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar5 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar5 * 0x18) != *(uint *)(_DAT_0f5c8208 + 4));
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_08130d71:
    puVar10 = &DAT_0f5c8208;
    iVar8 = iRam000000000f5c8268;
  }
  else {
    puVar10 = (undefined *)plVar11[2];
    iVar8 = *(int *)(puVar10 + 0x60);
  }
  if ((iVar8 == -0x2b3da790) && (lVar5 = *(long *)(puVar10 + 0x68), lVar5 != 0)) {
    bVar21 = (*(byte *)(lVar5 + 8) & 1) != 0;
    lVar16 = lVar5 + 9;
    if (bVar21) {
      lVar16 = *(long *)(lVar5 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar5 + 8) >> 1);
    if (bVar21) {
      uVar14 = *(ulong *)(lVar5 + 0x10);
    }
  }
  func_0x08188710(&lStack_198,param_1,lVar16,uVar14);
  uStack_164 = uStack_164 & 0xffffff00;
  cStack_160 = '\0';
  if (cStack_168 != '\0') goto LAB_08131750;
  plVar11 = (long *)func_0x0eee3290();
  lVar16 = *plVar11;
  uVar4 = *(uint *)(lVar16 + 0x144);
  iVar8 = *(int *)(lVar16 + 0x194);
  uStack_60 = (ulong)*(uint *)(lVar16 + 0x1d4);
  bVar2 = *(byte *)(lVar16 + 0x1c8);
  bVar3 = *(byte *)(lVar16 + 0x1e4);
  plStack_208 = (long *)0x0;
  lStack_200 = 0;
  uStack_218 = 0;
  lStack_210 = 0;
  puStack_228 = (undefined *)0x0;
  puStack_220 = (undefined *)0x0;
  puStack_238 = (undefined1 *)0x0;
  puStack_230 = (undefined *)0x0;
  puStack_248 = (undefined4 *)0x0;
  puStack_240 = (undefined *)0x0;
  uStack_258 = (long *)0x0;
  plStack_250 = (long *)0x0;
  plStack_268 = (long *)0x0;
  plStack_260 = (long *)0x0;
  uStack_1f8 = 0x3f600000;
  func_0x048afb10(&puStack_228,8);
  uStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1e0 = 0;
  uStack_1d8 = 0;
  lStack_1f0 = 0;
  lStack_1e8 = 0;
  uStack_1c0 = CONCAT22(uStack_1c0._2_2_,0xff00);
  uStack_1bc = uStack_1bc & 0xffffff00;
  uStack_1b8 = uStack_1b8 & 0xffffff00;
  uStack_1b4 = 0;
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f10a520;
  if (plStack_268 != (long *)0x0) {
    lVar16 = *plStack_268;
    plStack_268 = plVar11;
    (**(code **)(lVar16 + 8))();
    plVar11 = plStack_268;
  }
  plStack_268 = plVar11;
  if (((ulong)puStack_240 & 1) != 0) {
    func_0x0412a280(puStack_230,(ulong)puStack_240 & 0xfffffffffffffffe);
  }
  plVar1 = plStack_260;
  plVar11 = plStack_268;
  puStack_240 = (undefined *)
                (((uStack_60 & 0xff) << 0x10 |
                 (ulong)(uint)(iVar8 << 0x18) | (ulong)bVar2 << 0x20 | (ulong)bVar3 << 0x28) +
                 (ulong)((uVar4 & 0xff) << 8) + 10);
  if (((ulong)uStack_258 & 1) == 0) {
    uStack_258 = (long *)CONCAT71(uStack_258._1_7_,10);
    puVar13 = (undefined4 *)((long)&uStack_258 + 1);
  }
  else {
    plStack_250 = (long *)0x5;
    puVar13 = puStack_248;
  }
  *puVar13 = 0x72657551;
  *(undefined2 *)(puVar13 + 1) = 0x79;
  plStack_268 = (long *)0x0;
  plStack_260 = (long *)0x0;
  plStack_158 = plVar11;
  lStack_150 = (long)plVar1;
  puStack_138 = puStack_248;
  uStack_148 = (ulong)uStack_258;
  plStack_140 = plStack_250;
  uStack_258 = (long *)0x0;
  plStack_250 = (long *)0x0;
  puStack_248 = (undefined4 *)0x0;
  puStack_120 = puStack_230;
  uStack_130 = puStack_240;
  puStack_128 = puStack_238;
  puStack_240 = (undefined *)0x0;
  puStack_238 = (undefined1 *)0x0;
  puStack_230 = (undefined *)0x0;
  puStack_118 = puStack_228;
  puStack_110 = puStack_220;
  uStack_108 = uStack_218;
  puStack_228 = (undefined *)0x0;
  puStack_220 = (undefined *)0x0;
  uStack_218 = 0;
  lStack_100 = lStack_210;
  plStack_f8 = plStack_208;
  lStack_f0 = lStack_200;
  lStack_210 = 0;
  plStack_208 = (long *)0x0;
  lStack_200 = 0;
  uStack_e8 = uStack_1f8;
  lStack_e0 = lStack_1f0;
  lStack_d8 = lStack_1e8;
  lStack_d0 = lStack_1e0;
  lStack_1f0 = 0;
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  lStack_b8 = lStack_1c8;
  uStack_b0 = uStack_1c0;
  uStack_c8 = uStack_1d8;
  uStack_c0 = uStack_1d0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  lStack_1c8 = 0;
  uStack_a8 = CONCAT14(uStack_1b4,uStack_1b8);
  uStack_ac = uStack_1bc;
  func_0x048b0bc0();
  puVar17 = (undefined1 *)((ulong)uStack_130 >> 1 & 0x7f);
  puVar10 = (undefined *)((long)&uStack_130 + 1);
  if (((ulong)uStack_130 & 1) != 0) {
    puVar17 = puStack_128;
    puVar10 = puStack_120;
  }
  if (puVar17 == (undefined1 *)0x0) {
    uStack_16c = 0x811c9dc5;
  }
  else {
    uVar14 = (ulong)((uint)puVar17 & 3);
    if (puVar17 < 4) {
      uStack_16c = 0x811c9dc5;
      uVar19 = 0;
    }
    else {
      uStack_16c = 0x811c9dc5;
      uVar19 = 0;
      do {
        uStack_16c = ((int)*(char *)((long)puVar10 + 3 + uVar19) ^
                     ((int)*(char *)((long)puVar10 + 2 + uVar19) ^
                     ((int)*(char *)((long)puVar10 + 1 + uVar19) ^
                     ((int)*(char *)((long)puVar10 + uVar19) ^ uStack_16c) * 0x1000193) * 0x1000193)
                     * 0x1000193) * 0x1000193;
        uVar19 = uVar19 + 4;
      } while (((ulong)puVar17 & 0xfffffffffffffffc) != uVar19);
    }
    if (uVar14 != 0) {
      uVar18 = 0;
      do {
        uStack_16c = ((int)*(char *)((long)puVar10 + uVar19 + uVar18) ^ uStack_16c) * 0x1000193;
        uVar18 = uVar18 + 1;
      } while (uVar14 != uVar18);
    }
  }
  iStack_170 = 2;
  if ((DAT_0f5c82a8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c82a8), iVar8 != 0)) {
    func_0x0818bf90();
    func_0x0410844d(&DAT_0f5c82a8);
  }
  plStack_268 = (long *)CONCAT44(plStack_268._4_4_,uStack_16c);
  plStack_260 = (long *)0x0;
  uStack_258 = (long *)CONCAT44(uStack_258._4_4_,3);
  plStack_250 = (long *)0x1;
  puStack_248 = (undefined4 *)0x0;
  puStack_240 = &UNK_0818c010;
  puStack_238 = &SUB_048b06d0;
  puStack_230 = &UNK_08188290;
  puStack_228 = &UNK_0818c0d0;
  puStack_220 = &UNK_0818c0e0;
  uStack_218 = uStack_218 & 0xffffffff00000000;
  lStack_210 = 0;
  plStack_208 = (long *)0x0;
  func_0x048b05a0(&uStack_190,&plStack_268);
  plVar11 = plStack_208;
  if (plStack_208 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_208 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_208 + 0x10))(plStack_208);
      FUN_0412c2d0(plVar11);
    }
  }
  uStack_88 = uStack_180;
  uStack_84 = uStack_17c;
  iStack_80 = iStack_178;
  iStack_7c = iStack_174;
  uStack_90 = uStack_188;
  uStack_8c = uStack_184;
  if ((DAT_0f550a20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550a20), iVar8 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  plStack_268 = (long *)CONCAT44(plStack_268._4_4_,_DAT_0f550a0c);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar16 = lStack_150;
  plVar1 = plStack_158;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0ef439d0;
  plStack_260 = plVar11 + 3;
  plStack_158 = (long *)0x0;
  lStack_150 = 0;
  plVar11[3] = (long)plVar1;
  plVar11[4] = lVar16;
  plVar11[7] = (long)puStack_138;
  plVar11[5] = uStack_148;
  plVar11[6] = (long)plStack_140;
  uStack_148 = 0;
  plStack_140 = (long *)0x0;
  puStack_138 = (undefined4 *)0x0;
  plVar11[10] = (long)puStack_120;
  plVar11[8] = (long)uStack_130;
  plVar11[9] = (long)puStack_128;
  uStack_130 = (undefined *)0x0;
  puStack_128 = (undefined1 *)0x0;
  puStack_120 = (undefined *)0x0;
  plVar11[0xb] = (long)puStack_118;
  plVar11[0xc] = (long)puStack_110;
  plVar11[0xd] = uStack_108;
  puStack_118 = (undefined *)0x0;
  puStack_110 = (undefined *)0x0;
  uStack_108 = 0;
  plVar11[0xe] = lStack_100;
  plVar11[0xf] = (long)plStack_f8;
  plVar11[0x10] = lStack_f0;
  lStack_100 = 0;
  plStack_f8 = (long *)0x0;
  lStack_f0 = 0;
  *(undefined4 *)(plVar11 + 0x11) = uStack_e8;
  plVar11[0x12] = lStack_e0;
  plVar11[0x13] = lStack_d8;
  plVar11[0x14] = lStack_d0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  lStack_d0 = 0;
  plVar11[0x17] = lStack_b8;
  *(undefined4 *)(plVar11 + 0x15) = (undefined4)uStack_c8;
  *(undefined4 *)((long)plVar11 + 0xac) = uStack_c8._4_4_;
  *(undefined4 *)(plVar11 + 0x16) = (undefined4)uStack_c0;
  *(undefined4 *)((long)plVar11 + 0xb4) = uStack_c0._4_4_;
  uStack_c8 = 0;
  uStack_c0 = 0;
  lStack_b8 = 0;
  *(ulong *)((long)plVar11 + 0xc5) = CONCAT53(uStack_a8,uStack_ac._1_3_);
  plVar11[0x18] = CONCAT44(uStack_ac,uStack_b0);
  uStack_58 = 0;
  uStack_50 = (long *)0x0;
  uStack_258 = plVar11;
  FUN_048afd20(&lStack_98,&plStack_268);
  plVar11 = uStack_258;
  if (uStack_258 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_258 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*uStack_258 + 0x10))(uStack_258);
      FUN_0412c2d0(plVar11);
    }
  }
  plVar11 = uStack_50;
  if (uStack_50 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_50 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*uStack_50 + 0x10))(uStack_50);
      FUN_0412c2d0(plVar11);
    }
  }
  lVar5 = lStack_198;
  lVar16 = CONCAT44(uStack_84,uStack_88);
  if (iStack_7c == 2) {
    piVar15 = *(int **)(*(long *)(lVar16 + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != iStack_80) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    for (; *(long *)(piVar15 + 0xc) != CONCAT44(uStack_8c,uStack_90);
        piVar15 = *(int **)(piVar15 + 0xe)) {
    }
LAB_081314ea:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
  }
  else {
    if (iStack_7c == 1) {
      piVar15 = *(int **)(*(long *)(lVar16 + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != iStack_80) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_081314ea;
    }
    if (iStack_7c == 0) {
      *(byte *)(lVar16 + 0x1a) = *(byte *)(lVar16 + 0x1a) | 9;
    }
  }
  if (cStack_160 == '\0') {
    uStack_164 = 0xbb8863ad;
    cStack_160 = '\x01';
    plStack_268 = (long *)CONCAT44(plStack_268._4_4_,0xbb8863ad);
    if ((DAT_0f5c8288 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8288), iVar8 != 0)) {
      func_0x08188350();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c8208,0xf53dab8);
      func_0x0410844d(&DAT_0f5c8288);
    }
    plVar11 = (long *)(*(long *)(lVar5 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar5 + 0x20) - *(long *)(lVar5 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f5c8208 + 4)) * 8);
    do {
      lVar16 = *plVar11;
      if (lVar16 == -1) goto LAB_08131580;
      plVar11 = (long *)(*(long *)(lVar5 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lVar5 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5c8208 + 4))
    ;
    if (plVar11 == *(long **)(lVar5 + 0x38)) {
LAB_08131580:
      puVar10 = &DAT_0f5c8208;
    }
    else {
      puVar10 = (undefined *)plVar11[2];
    }
    lVar16 = *(long *)(puVar10 + 0x68);
    piVar12 = *(int **)(lVar16 + 0x28);
    for (piVar15 = *(int **)(lVar16 + 0x20); (piVar15 != piVar12 && (*piVar15 != -0x44779c53));
        piVar15 = piVar15 + 0xe) {
    }
    if (piVar15 == piVar12) {
      if (piVar12 < *(int **)(lVar16 + 0x30)) {
        *piVar12 = -0x44779c53;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        piVar12[8] = 0;
        piVar12[9] = 0;
        piVar12[10] = 0x3f800000;
        *(undefined1 *)(piVar12 + 0xc) = 0;
        *(undefined1 *)(piVar12 + 0xd) = 0;
        piVar12 = piVar12 + 0xe;
      }
      else {
        piVar12 = (int *)func_0x05d9c2b0(lVar16 + 0x20,&plStack_268);
      }
      *(int **)(lVar16 + 0x28) = piVar12;
    }
    else if ((*(long *)(piVar15 + 8) != 0) &&
            (cVar7 = FUN_0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01397935),
            cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar4 = uStack_164;
  lVar16 = lStack_198;
  if ((DAT_0f5c8288 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c8288), iVar8 != 0)) {
    func_0x08188350();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c8208,0xf53dab8);
    func_0x0410844d(&DAT_0f5c8288);
  }
  plVar11 = (long *)(*(long *)(lVar16 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5c8208 + 4)) * 8);
  do {
    lVar5 = *plVar11;
    if (lVar5 == -1) goto LAB_081316b0;
    plVar11 = (long *)(*(long *)(lVar16 + 0x30) + lVar5 * 0x18);
  } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar5 * 0x18) != *(uint *)(_DAT_0f5c8208 + 4));
  if (plVar11 == *(long **)(lVar16 + 0x38)) {
LAB_081316b0:
    puVar10 = &DAT_0f5c8208;
  }
  else {
    puVar10 = (undefined *)plVar11[2];
  }
  puVar6 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x28);
  for (puVar20 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x20);
      (puVar20 != puVar6 && (*puVar20 != uVar4)); puVar20 = puVar20 + 0xe) {
  }
  if ((puVar20 == puVar6) &&
     (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0137c14b),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  plStack_268 = (long *)((ulong)plStack_268 & 0xffffffffffffff00);
  func_0x05d9c620(puVar20 + 2,&uStack_16c,&uStack_16c,&plStack_268);
  func_0x048b0bc0(&plStack_158);
LAB_08131750:
  func_0x07deb5d0(param_1);
  if ((DAT_0f5c92b0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c92b0), iVar8 != 0)) {
    func_0x081c2720();
    func_0x0410844d(&DAT_0f5c92b0);
  }
  uVar14 = _DAT_0f5c92a8;
  lVar16 = _DAT_0f5c92a0;
  if ((DAT_0f5c9348 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5c9348), iVar8 != 0)) {
    func_0x081c2860();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c92c8,0xf53dab8);
    func_0x0410844d(&DAT_0f5c9348);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c92c8 + 4)) * 8);
  do {
    lVar5 = *plVar11;
    if (lVar5 == -1) goto LAB_081317d1;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar5 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar5 * 0x18) != *(uint *)(_DAT_0f5c92c8 + 4));
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_081317d1:
    puVar10 = &DAT_0f5c92c8;
    iVar8 = iRam000000000f5c9328;
  }
  else {
    puVar10 = (undefined *)plVar11[2];
    iVar8 = *(int *)(puVar10 + 0x60);
  }
  if ((iVar8 == -0x2b3da790) && (lVar5 = *(long *)(puVar10 + 0x68), lVar5 != 0)) {
    bVar21 = (*(byte *)(lVar5 + 8) & 1) != 0;
    lVar16 = lVar5 + 9;
    if (bVar21) {
      lVar16 = *(long *)(lVar5 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar5 + 8) >> 1);
    if (bVar21) {
      uVar14 = *(ulong *)(lVar5 + 0x10);
    }
  }
  FUN_081c4be0(&lStack_198,param_1,lVar16,uVar14);
  if (cStack_168 == '\0') {
    func_0x081c5740(&plStack_268,&lStack_198,&UNK_011d6fc6,6);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f10a520;
    if (plStack_250 != (long *)0x0) {
      lVar16 = *plStack_250;
      plStack_250 = plVar11;
      (**(code **)(lVar16 + 8))();
      plVar11 = plStack_250;
    }
    plStack_250 = plVar11;
    plStack_158 = (long *)CONCAT44(plStack_158._4_4_,(undefined4)uStack_258);
    lStack_150 = 0;
    uStack_148 = uStack_148 & 0xffffffff00000000;
    plStack_140 = (long *)0x1;
    puStack_138 = (undefined4 *)0x0;
    uStack_130 = &UNK_0818c010;
    puStack_128 = &SUB_048b06d0;
    puStack_120 = &UNK_08188290;
    puStack_118 = &UNK_081c5cd0;
    puStack_110 = &UNK_081c5e30;
    uStack_108 = uStack_108 & 0xffffffff00000000;
    lStack_100 = 0;
    plStack_f8 = (long *)0x0;
    func_0x048b05a0(plStack_260,&plStack_158);
    plVar11 = plStack_f8;
    if (plStack_f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_f8 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        FUN_0412c2d0(plVar11);
      }
    }
    func_0x081c59d0(&plStack_268);
    uVar4 = uStack_16c;
    iVar8 = iStack_170;
    uStack_58 = CONCAT44(uStack_18c,uStack_190);
    uStack_50 = (long *)CONCAT44(uStack_184,uStack_188);
    uStack_48 = uStack_180;
    uStack_44 = uStack_17c;
    iStack_40 = iStack_178;
    iStack_3c = iStack_174;
    func_0x048b0bc0(&plStack_250);
    if ((DAT_0f5c9348 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5c9348), iVar9 != 0)) {
      func_0x081c2860();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c92c8,0xf53dab8);
      func_0x0410844d(&DAT_0f5c9348);
    }
    plVar11 = (long *)(*(long *)(lStack_198 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lStack_198 + 0x20) -
                                           *(long *)(lStack_198 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f5c92c8 + 4)) * 8);
    do {
      lVar16 = *plVar11;
      if (lVar16 == -1) goto LAB_08131a30;
      plVar11 = (long *)(*(long *)(lStack_198 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lStack_198 + 0x30) + 8 + lVar16 * 0x18) !=
             *(uint *)(_DAT_0f5c92c8 + 4));
    if (plVar11 == *(long **)(lStack_198 + 0x38)) {
LAB_08131a30:
      puVar10 = &DAT_0f5c92c8;
    }
    else {
      puVar10 = (undefined *)plVar11[2];
    }
    if ((1 < iVar8 - 1U) &&
       (cVar7 = FUN_0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012a999d),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plVar11 = (long *)func_0x048b0c90(lStack_198 + 0x18,puVar10,uVar4,1);
    if (plVar11 == (long *)0x0) {
      plStack_268 = (long *)0x0;
      plStack_260 = (long *)0x0;
      func_0x048b0d20(&plStack_268);
      plVar11 = plStack_268;
    }
    *(undefined1 *)(plVar11[0xb] + 0xa8) = 4;
    lStack_98 = lStack_198;
    uStack_90 = (undefined4)uStack_58;
    uStack_8c = uStack_58._4_4_;
    uStack_88 = (undefined4)uStack_50;
    uStack_84 = uStack_50._4_4_;
    iStack_80 = uStack_48;
    iStack_7c = uStack_44;
    iStack_78 = iStack_40;
    iStack_74 = iStack_3c;
    iStack_70 = iVar8;
    uStack_6c = uVar4;
    cStack_68 = cStack_168;
    func_0x081c5740(&plStack_268,&lStack_98,&UNK_012a7470,2);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f10bdf0;
    if (plStack_250 != (long *)0x0) {
      lVar16 = *plStack_250;
      plStack_250 = plVar11;
      (**(code **)(lVar16 + 8))();
      plVar11 = plStack_250;
    }
    plStack_250 = plVar11;
    plStack_158 = (long *)CONCAT44(plStack_158._4_4_,(undefined4)uStack_258);
    lStack_150 = 0;
    uStack_148 = uStack_148 & 0xffffffff00000000;
    plStack_140 = (long *)0x1;
    puStack_138 = (undefined4 *)0x0;
    uStack_130 = &UNK_081c64c0;
    puStack_128 = &SUB_048b06d0;
    puStack_120 = &SUB_07e9c930;
    puStack_118 = &UNK_081c64d0;
    puStack_110 = &UNK_081c6630;
    uStack_108 = uStack_108 & 0xffffffff00000000;
    lStack_100 = 0;
    plStack_f8 = (long *)0x0;
    func_0x048b05a0(plStack_260,&plStack_158);
    plVar11 = plStack_f8;
    if (plStack_f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_f8 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        FUN_0412c2d0(plVar11);
      }
    }
    func_0x081c59d0(&plStack_268);
    func_0x048b0bc0(&plStack_250);
  }
  return;
}


