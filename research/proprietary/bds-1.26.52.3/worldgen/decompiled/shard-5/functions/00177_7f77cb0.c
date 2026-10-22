/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8077cb0 (ELF vaddr 0x7f77cb0)
 * Label: caller-of-callee
 * Body:  [[08077cb0, 080782e1] [080782f0, 08078b32]]
 * Ghidra: FUN_08077cb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08077cb0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  ulong uVar14;
  int *piVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  bool bVar19;
  undefined8 *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined4 uStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined1 uStack_188;
  undefined4 uStack_187;
  undefined4 uStack_183;
  undefined4 uStack_17f;
  undefined4 uStack_17b;
  undefined2 uStack_177;
  undefined5 uStack_175;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined4 uStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined2 uStack_108;
  undefined2 uStack_106;
  uint uStack_104;
  uint uStack_100;
  undefined1 uStack_fc;
  ulong uStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [32];
  undefined8 uStack_c0;
  char cStack_b8;
  undefined4 auStack_b0 [2];
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  
  func_0x079ea3d0();
  if ((DAT_0f5c76a0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5c76a0), iVar6 != 0)) {
    func_0x080fea10();
    FUN_0410844d(&DAT_0f5c76a0);
  }
  uVar14 = _DAT_0f5c7698;
  lVar17 = _DAT_0f5c7690;
  if ((DAT_0f5c7738 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5c7738), iVar6 != 0)) {
    func_0x080feb50();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c76b8,0xf53dab8);
    FUN_0410844d(&DAT_0f5c7738);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5c76b8 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_08077d41;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5c76b8 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_08077d41:
    puVar8 = &DAT_0f5c76b8;
    iVar6 = iRam000000000f5c7718;
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    iVar6 = *(int *)(puVar8 + 0x60);
  }
  if ((iVar6 == -0x2b3da790) && (lVar2 = *(long *)(puVar8 + 0x68), lVar2 != 0)) {
    bVar19 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar17 = lVar2 + 9;
    if (bVar19) {
      lVar17 = *(long *)(lVar2 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar19) {
      uVar14 = *(ulong *)(lVar2 + 0x10);
    }
  }
  FUN_08100cb0(&lStack_e8,param_1,lVar17,uVar14);
  if (cStack_b8 != '\0') {
    return;
  }
  if ((DAT_0f5c76a0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5c76a0), iVar6 != 0)) {
    func_0x080fea10();
    FUN_0410844d(&DAT_0f5c76a0);
  }
  lVar17 = lStack_e8;
  uStack_c0 = 0xaa453e000000001;
  if ((DAT_0f5c7738 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5c7738), iVar6 != 0)) {
    func_0x080feb50();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c76b8,0xf53dab8);
    FUN_0410844d(&DAT_0f5c7738);
  }
  puStack_1c0 = (undefined1 *)(lVar17 + 0x18);
  plVar9 = (long *)(*(long *)(lVar17 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >> 3)
                           - 1U & *(uint *)(_DAT_0f5c76b8 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_08077e40;
    plVar9 = (long *)(*(long *)(lVar17 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5c76b8 + 4));
  if (plVar9 == *(long **)(lVar17 + 0x38)) {
LAB_08077e40:
    puStack_1c8 = &DAT_0f5c76b8;
  }
  else {
    puStack_1c8 = (undefined *)plVar9[2];
  }
  func_0x0ed621a0(&puStack_1c8,uStack_c0._4_4_);
  puStack_1c8 = (undefined *)CONCAT62(puStack_1c8._2_6_,1);
  uStack_1b8 = uStack_c0._4_4_;
  plStack_1b0 = (long *)0x0;
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  lStack_198 = 0;
  lStack_190 = 0;
  uStack_188 = 0x22;
  uStack_187 = _DAT_014b36b4;
  uStack_183 = _UNK_014b36b8;
  uStack_17f = _UNK_014b36bc;
  uStack_17b = _UNK_014b36c0;
  uStack_177 = 0x65;
  lStack_170 = 0;
  lStack_168 = 0;
  lStack_160 = 0;
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  uStack_140 = 0x3f600000;
  puStack_1c0 = auStack_e0;
  FUN_048afb10(&lStack_170,8);
  uStack_118 = 0;
  lStack_110 = 0;
  lStack_128 = 0;
  uStack_120 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  uStack_108 = 0xff00;
  uStack_104 = uStack_104 & 0xffffff00;
  uStack_100 = uStack_100 & 0xffffff00;
  uStack_fc = 0;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0f0e93b8;
  if (plStack_1b0 != (long *)0x0) {
    lVar17 = *plStack_1b0;
    plStack_1b0 = plVar9;
    (**(code **)(lVar17 + 8))();
    plVar9 = plStack_1b0;
  }
  plStack_1b0 = plVar9;
  auStack_b0[0] = uStack_1b8;
  plStack_a8 = (long *)0x0;
  uStack_a0 = (long *)((ulong)uStack_a0._4_4_ << 0x20);
  uStack_98 = 1;
  uStack_90 = 0;
  puStack_88 = &UNK_06bdfa80;
  puStack_80 = &SUB_048b06d0;
  puStack_78 = &SUB_06bdf6b0;
  puStack_70 = &UNK_081017c0;
  puStack_68 = &UNK_08101920;
  uStack_60 = 0;
  uStack_58 = 0;
  plStack_50 = (long *)0x0;
  func_0x048b05a0(puStack_1c0,auStack_b0);
  plVar9 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      func_0x0412c2d0(plVar9);
    }
  }
  puVar3 = puStack_1c0;
  if ((DAT_0f550a20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550a20), iVar6 != 0)) {
    func_0x048b0af0(0xf550a08);
    FUN_0410844d(&DAT_0f550a20);
  }
  auStack_b0[0] = _DAT_0f550a0c;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar17 = lStack_1a8;
  plVar1 = plStack_1b0;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef439d0;
  plStack_a8 = plVar9 + 3;
  plStack_1b0 = (long *)0x0;
  lStack_1a8 = 0;
  plVar9[3] = (long)plVar1;
  plVar9[4] = lVar17;
  plVar9[7] = lStack_190;
  plVar9[5] = lStack_1a0;
  plVar9[6] = lStack_198;
  lStack_1a0 = 0;
  lStack_198 = 0;
  lStack_190 = 0;
  plVar9[10] = CONCAT53(uStack_175,CONCAT21(uStack_177,uStack_17b._3_1_));
  plVar9[8] = CONCAT35((undefined3)uStack_183,CONCAT41(uStack_187,uStack_188));
  plVar9[9] = CONCAT35((undefined3)uStack_17b,CONCAT41(uStack_17f,uStack_183._3_1_));
  uStack_188 = 0;
  uStack_187 = 0;
  uStack_183 = 0;
  uStack_17f = 0;
  uStack_17b = 0;
  uStack_177 = 0;
  uStack_175 = 0;
  plVar9[0xb] = lStack_170;
  plVar9[0xc] = lStack_168;
  plVar9[0xd] = lStack_160;
  lStack_170 = 0;
  lStack_168 = 0;
  lStack_160 = 0;
  plVar9[0xe] = lStack_158;
  plVar9[0xf] = lStack_150;
  plVar9[0x10] = lStack_148;
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  *(undefined4 *)(plVar9 + 0x11) = uStack_140;
  plVar9[0x12] = lStack_138;
  plVar9[0x13] = lStack_130;
  plVar9[0x14] = lStack_128;
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  plVar9[0x17] = lStack_110;
  *(undefined4 *)(plVar9 + 0x15) = (undefined4)uStack_120;
  *(undefined4 *)((long)plVar9 + 0xac) = uStack_120._4_4_;
  *(undefined4 *)(plVar9 + 0x16) = (undefined4)uStack_118;
  *(undefined4 *)((long)plVar9 + 0xb4) = uStack_118._4_4_;
  uStack_120 = 0;
  uStack_118 = 0;
  lStack_110 = 0;
  *(ulong *)((long)plVar9 + 0xc5) = CONCAT17(uStack_fc,CONCAT43(uStack_100,uStack_104._1_3_));
  plVar9[0x18] = CONCAT44(uStack_104,CONCAT22(uStack_106,uStack_108));
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  uStack_a0 = plVar9;
  func_0x048afd20(puVar3,auStack_b0);
  plVar9 = uStack_a0;
  if (uStack_a0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_a0 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*uStack_a0 + 0x10))(uStack_a0);
      func_0x0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar17 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      func_0x0412c2d0(plVar9);
    }
  }
  lVar17 = *(long *)(puVar3 + 0x10);
  iVar6 = *(int *)(puVar3 + 0x1c);
  if (iVar6 == 2) {
    piVar15 = *(int **)(*(long *)(lVar17 + 0x78) + 0x60);
    iVar6 = *piVar15;
    while (iVar6 != *(int *)(puVar3 + 0x18)) {
      piVar15 = piVar15 + 0x16;
      iVar6 = *piVar15;
    }
    for (; *(long *)(piVar15 + 0xc) != *(long *)(puVar3 + 8); piVar15 = *(int **)(piVar15 + 0xe)) {
    }
LAB_080782fa:
    piVar15[4] = piVar15[4] | (int)puStack_1c8 << 0x10;
  }
  else {
    if (iVar6 == 1) {
      piVar15 = *(int **)(*(long *)(lVar17 + 0x78) + 0x48);
      iVar6 = *piVar15;
      while (iVar6 != *(int *)(puVar3 + 0x18)) {
        piVar15 = piVar15 + 0x1a;
        iVar6 = *piVar15;
      }
      goto LAB_080782fa;
    }
    if (iVar6 == 0) {
      *(uint *)(lVar17 + 0x18) = *(uint *)(lVar17 + 0x18) | (int)puStack_1c8 << 0x10;
    }
  }
  iVar6 = (int)uStack_c0;
  uVar4 = uStack_c0._4_4_;
  func_0x048b0bc0(&plStack_1b0);
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  *puVar10 = 0;
  puVar10[1] = 1;
  puVar10[2] = 2;
  puVar10[3] = 5;
  puVar12 = puVar10 + 6;
  puVar10[4] = 6;
  puVar11 = puVar10 + 5;
  if (puVar11 < puVar12) {
    puVar10[5] = 0;
    lVar17 = 0x30;
    puVar18 = puVar10;
    puStack_1d0 = puVar12;
LAB_080783a9:
    if (lVar17 < 0) {
      func_0x0774b760();
LAB_08078a97:
      func_0x0774b760();
      goto LAB_08078a9c;
    }
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar17);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(lVar17,0);
    }
    puVar10 = (undefined8 *)((long)puVar11 + lVar17);
    func_0x0eee2f00(puVar11,puVar18,lVar17);
joined_r0x08078576:
    if (iVar6 != 4) {
      if (iVar6 != 1) goto LAB_0807878c;
      if (DAT_0f5c7738 == '\0') goto LAB_08078aab;
      goto LAB_08078404;
    }
    if ((DAT_0f5c7738 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c7738), iVar7 != 0)) {
      func_0x080feb50();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c76b8,0xf53dab8);
      FUN_0410844d(&DAT_0f5c7738);
    }
    plVar9 = (long *)(*(long *)(lStack_e8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lStack_e8 + 0x20) - *(long *)(lStack_e8 + 0x18)
                                          ) >> 3) - 1U & *(uint *)(_DAT_0f5c76b8 + 4)) * 8);
    do {
      lVar17 = *plVar9;
      if (lVar17 == -1) goto LAB_080785ed;
      plVar9 = (long *)(*(long *)(lStack_e8 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(lStack_e8 + 0x30) + 8 + lVar17 * 0x18) !=
             *(uint *)(_DAT_0f5c76b8 + 4));
    if (plVar9 == *(long **)(lStack_e8 + 0x38)) {
LAB_080785ed:
      puVar8 = &DAT_0f5c76b8;
    }
    else {
      puVar8 = (undefined *)plVar9[2];
    }
    puVar8 = (undefined *)FUN_048b1040(lStack_e8 + 0x18,puVar8,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_1c8 = (undefined *)0x0;
      puStack_1c0 = (undefined1 *)0x0;
      func_0x048b10d0(&puStack_1c8);
      puVar13 = *(undefined **)(puStack_1c8 + 0x38);
      puVar8 = puStack_1c8;
      if (puVar13 == (undefined *)0x0) goto LAB_080786cd;
LAB_080786e9:
      do {
        puVar8 = puVar13;
        puVar13 = *(undefined **)(puVar8 + 0x38);
        if (*(undefined **)(puVar8 + 0x38) == (undefined *)0x0) {
          puStack_1c8 = (undefined *)0x0;
          puStack_1c0 = (undefined1 *)0x0;
          func_0x048b10d0(&puStack_1c8);
          puVar13 = puStack_1c8;
        }
      } while (puVar13 != (undefined *)0x0);
    }
    else {
      puVar13 = *(undefined **)(puVar8 + 0x38);
      if (*(undefined **)(puVar8 + 0x38) != (undefined *)0x0) goto LAB_080786e9;
LAB_080786cd:
      puStack_1c8 = (undefined *)0x0;
      puStack_1c0 = (undefined1 *)0x0;
      func_0x048b10d0(&puStack_1c8);
      puVar13 = puStack_1c8;
      if (puStack_1c8 != (undefined *)0x0) goto LAB_080786e9;
    }
    lVar17 = *(long *)(puVar8 + 0x48);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
  }
  else {
    puVar11 = (undefined8 *)((long)puVar11 - (long)puVar10);
    puVar18 = (undefined8 *)((long)puVar11 >> 3);
    uVar14 = (long)puVar18 + 1;
    if (uVar14 >> 0x3d != 0) goto LAB_08078a97;
    uStack_f0 = (long)puVar12 - (long)puVar10;
    uVar16 = (long)uStack_f0 >> 2;
    if ((ulong)((long)uStack_f0 >> 2) <= uVar14) {
      uVar16 = uVar14;
    }
    if (0x7ffffffffffffff7 < uStack_f0) {
      uVar16 = 0x1fffffffffffffff;
    }
    puStack_1d0 = puVar12;
    if (uVar16 < 0x2000000000000000) {
      lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 8);
      if (lVar17 == 0) {
        func_0x0eec74c0(uVar16 * 8,0);
      }
      *(undefined8 *)(lVar17 + (long)puVar11) = 0;
      puVar18 = (undefined8 *)((long)puVar11 + (long)puVar18 * -8 + lVar17);
      func_0x0eee2f00(puVar18,puVar10,puVar11);
      puStack_1d0 = (undefined8 *)(uVar16 * 8 + lVar17);
      func_0x0412a280(puVar10,uStack_f0);
      lVar17 = (long)puVar11 + ((lVar17 + 8) - (long)puVar18);
      if (lVar17 != 0) goto LAB_080783a9;
      puVar10 = (undefined8 *)0x0;
      puVar11 = (undefined8 *)0x0;
      goto joined_r0x08078576;
    }
LAB_08078a9c:
    FUN_04882eb0();
    puVar10 = puStack_1d0;
LAB_08078aab:
    iVar7 = func_0x04108328(&DAT_0f5c7738);
    if (iVar7 != 0) {
      func_0x080feb50();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c76b8,0xf53dab8);
      FUN_0410844d(&DAT_0f5c7738);
    }
LAB_08078404:
    plVar9 = (long *)(*(long *)(lStack_e8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lStack_e8 + 0x20) - *(long *)(lStack_e8 + 0x18)
                                          ) >> 3) - 1U & *(uint *)(_DAT_0f5c76b8 + 4)) * 8);
    do {
      lVar17 = *plVar9;
      if (lVar17 == -1) goto LAB_0807846d;
      plVar9 = (long *)(*(long *)(lStack_e8 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(lStack_e8 + 0x30) + 8 + lVar17 * 0x18) !=
             *(uint *)(_DAT_0f5c76b8 + 4));
    if (plVar9 == *(long **)(lStack_e8 + 0x38)) {
LAB_0807846d:
      puVar8 = &DAT_0f5c76b8;
    }
    else {
      puVar8 = (undefined *)plVar9[2];
    }
    puVar8 = (undefined *)func_0x048b0c90(lStack_e8 + 0x18,puVar8,uVar4,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_1c8 = (undefined *)0x0;
      puStack_1c0 = (undefined1 *)0x0;
      func_0x048b0d20(&puStack_1c8);
      puVar8 = puStack_1c8;
    }
    lVar17 = *(long *)(puVar8 + 0x58);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
  }
  puVar12[1] = 0xffffffffffffffff;
  puVar12[2] = 0;
  *(undefined1 *)(puVar12 + 3) = 0xff;
  *puVar12 = &UNK_0f4e3aa0;
  puVar12[4] = puVar11;
  puVar12[5] = puVar10;
  puVar12[6] = puVar10;
  plVar9 = *(long **)(lVar17 + 8);
  *(undefined8 **)(lVar17 + 8) = puVar12;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x28))();
  }
  puVar10 = (undefined8 *)0x0;
  puVar11 = (undefined8 *)0x0;
LAB_0807878c:
  if ((DAT_0f5c7738 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c7738), iVar7 != 0)) {
    func_0x080feb50();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c76b8,0xf53dab8);
    FUN_0410844d(&DAT_0f5c7738);
  }
  plVar9 = (long *)(*(long *)(lStack_e8 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lStack_e8 + 0x20) - *(long *)(lStack_e8 + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f5c76b8 + 4)) * 8);
  do {
    lVar17 = *plVar9;
    if (lVar17 == -1) goto LAB_080787f5;
    plVar9 = (long *)(*(long *)(lStack_e8 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(lStack_e8 + 0x30) + 8 + lVar17 * 0x18) !=
           *(uint *)(_DAT_0f5c76b8 + 4));
  if (plVar9 == *(long **)(lStack_e8 + 0x38)) {
LAB_080787f5:
    puVar8 = &DAT_0f5c76b8;
  }
  else {
    puVar8 = (undefined *)plVar9[2];
  }
  if ((1 < iVar6 - 1U) &&
     (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_014656e9),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puVar8 = (undefined *)func_0x048b0c90(lStack_e8 + 0x18,puVar8,uVar4,1);
  if (puVar8 == (undefined *)0x0) {
    puStack_1c8 = (undefined *)0x0;
    puStack_1c0 = (undefined1 *)0x0;
    func_0x048b0d20(&puStack_1c8);
    puVar8 = puStack_1c8;
  }
  *(undefined1 *)(*(long *)(puVar8 + 0x58) + 0xa8) = 5;
  if (puVar11 != (undefined8 *)0x0) {
    func_0x0412a280(puVar11,(long)puVar10 - (long)puVar11);
  }
  func_0x0412a280(puVar18,(long)puStack_1d0 - (long)puVar18);
  return;
}



/* ---- referenced strings ----
 * 0x14b36b4  Default Game Type
 */
