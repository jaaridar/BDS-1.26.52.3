/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x815fe20 (ELF vaddr 0x805fe20)
 * Label: caller-of-callee
 * Body:  [[0815fe20, 08160451] [08160460, 0816066c] [08160670, 08160a46]]
 * Ghidra: FUN_0815fe20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0815fe20(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  bool bVar18;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined4 uStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined1 uStack_178;
  undefined4 uStack_177;
  undefined4 uStack_173;
  undefined4 uStack_16f;
  undefined4 uStack_16b;
  undefined4 uStack_167;
  undefined1 uStack_163;
  undefined2 uStack_162;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined4 uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  uint uStack_f4;
  uint uStack_f0;
  undefined1 uStack_ec;
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
  
  if ((DAT_0f5caec8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5caec8), iVar9 != 0)) {
    func_0x0821c2d0();
    func_0x0410844d(&DAT_0f5caec8);
  }
  uVar15 = _DAT_0f5caec0;
  lVar16 = _DAT_0f5caeb8;
  if ((DAT_0f5caf60 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5caf60), iVar9 != 0)) {
    func_0x0821c410();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5caee0,0xf53dab8);
    func_0x0410844d(&DAT_0f5caf60);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5caee0 + 4)) * 8);
  do {
    lVar2 = *plVar12;
    if (lVar2 == -1) goto LAB_0815feb1;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5caee0 + 4));
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_0815feb1:
    puVar11 = &DAT_0f5caee0;
    iVar9 = iRam000000000f5caf40;
  }
  else {
    puVar11 = (undefined *)plVar12[2];
    iVar9 = *(int *)(puVar11 + 0x60);
  }
  if ((iVar9 == -0x2b3da790) && (lVar2 = *(long *)(puVar11 + 0x68), lVar2 != 0)) {
    bVar18 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar16 = lVar2 + 9;
    if (bVar18) {
      lVar16 = *(long *)(lVar2 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar18) {
      uVar15 = *(ulong *)(lVar2 + 0x10);
    }
  }
  func_0x0821e5f0(&lStack_e8,param_1,lVar16,uVar15);
  if (cStack_b8 != '\0') {
    return;
  }
  if ((DAT_0f5caec8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5caec8), iVar9 != 0)) {
    func_0x0821c2d0();
    func_0x0410844d(&DAT_0f5caec8);
  }
  lVar16 = lStack_e8;
  uStack_c0 = 0xae25389000000001;
  if ((DAT_0f5caf60 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5caf60), iVar9 != 0)) {
    func_0x0821c410();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5caee0,0xf53dab8);
    func_0x0410844d(&DAT_0f5caf60);
  }
  puStack_1b0 = (undefined1 *)(lVar16 + 0x18);
  plVar12 = (long *)(*(long *)(lVar16 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5caee0 + 4)) * 8);
  do {
    lVar2 = *plVar12;
    if (lVar2 == -1) goto LAB_0815ffb0;
    plVar12 = (long *)(*(long *)(lVar16 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5caee0 + 4));
  if (plVar12 == *(long **)(lVar16 + 0x38)) {
LAB_0815ffb0:
    puStack_1b8 = &DAT_0f5caee0;
  }
  else {
    puStack_1b8 = (undefined *)plVar12[2];
  }
  FUN_0ed621a0(&puStack_1b8,uStack_c0._4_4_);
  puStack_1b8 = (undefined *)CONCAT62(puStack_1b8._2_6_,1);
  uStack_1a8 = uStack_c0._4_4_;
  plStack_1a0 = (long *)0x0;
  lStack_198 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  uStack_178 = 0x28;
  uStack_177 = _DAT_0144d542;
  uStack_173 = _UNK_0144d546;
  uStack_16f = _UNK_0144d54a;
  uStack_16b = _UNK_0144d54e;
  uStack_167 = 0x6e6f6973;
  uStack_163 = 0;
  lStack_160 = 0;
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  uStack_130 = 0x3f600000;
  puStack_1b0 = auStack_e0;
  func_0x048afb10(&lStack_160,8);
  uStack_108 = 0;
  lStack_100 = 0;
  lStack_118 = 0;
  uStack_110 = 0;
  lStack_128 = 0;
  lStack_120 = 0;
  uStack_f8 = 0xff00;
  uStack_f4 = uStack_f4 & 0xffffff00;
  uStack_f0 = uStack_f0 & 0xffffff00;
  uStack_ec = 0;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0ef46ce8;
  if (plStack_1a0 != (long *)0x0) {
    lVar16 = *plStack_1a0;
    plStack_1a0 = plVar12;
    (**(code **)(lVar16 + 8))();
    plVar12 = plStack_1a0;
  }
  plStack_1a0 = plVar12;
  auStack_b0[0] = uStack_1a8;
  plStack_a8 = (long *)0x0;
  uStack_a0 = (long *)((ulong)uStack_a0._4_4_ << 0x20);
  uStack_98 = 1;
  uStack_90 = 0;
  puStack_88 = &UNK_0490ce30;
  puStack_80 = &SUB_048b06d0;
  puStack_78 = &SUB_0490cb20;
  puStack_70 = &UNK_0821f100;
  puStack_68 = &UNK_0821f260;
  uStack_60 = 0;
  uStack_58 = 0;
  plStack_50 = (long *)0x0;
  func_0x048b05a0(puStack_1b0,auStack_b0);
  plVar12 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      FUN_0412c2d0(plVar12);
    }
  }
  puVar6 = puStack_1b0;
  if ((DAT_0f550a20 == '\0') && (iVar9 = func_0x04108328(&DAT_0f550a20), iVar9 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_b0[0] = _DAT_0f550a0c;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar16 = lStack_198;
  plVar1 = plStack_1a0;
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0ef439d0;
  plStack_a8 = plVar12 + 3;
  plStack_1a0 = (long *)0x0;
  lStack_198 = 0;
  plVar12[3] = (long)plVar1;
  plVar12[4] = lVar16;
  plVar12[7] = lStack_180;
  plVar12[5] = lStack_190;
  plVar12[6] = lStack_188;
  lStack_190 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  plVar12[10] = CONCAT26(uStack_162,CONCAT15(uStack_163,CONCAT41(uStack_167,uStack_16b._3_1_)));
  plVar12[8] = CONCAT35((undefined3)uStack_173,CONCAT41(uStack_177,uStack_178));
  plVar12[9] = CONCAT35((undefined3)uStack_16b,CONCAT41(uStack_16f,uStack_173._3_1_));
  uStack_178 = 0;
  uStack_177 = 0;
  uStack_173 = 0;
  uStack_16f = 0;
  uStack_16b = 0;
  uStack_167 = 0;
  uStack_163 = 0;
  uStack_162 = 0;
  plVar12[0xb] = lStack_160;
  plVar12[0xc] = lStack_158;
  plVar12[0xd] = lStack_150;
  lStack_160 = 0;
  lStack_158 = 0;
  lStack_150 = 0;
  plVar12[0xe] = lStack_148;
  plVar12[0xf] = lStack_140;
  plVar12[0x10] = lStack_138;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  *(undefined4 *)(plVar12 + 0x11) = uStack_130;
  plVar12[0x12] = lStack_128;
  plVar12[0x13] = lStack_120;
  plVar12[0x14] = lStack_118;
  lStack_128 = 0;
  lStack_120 = 0;
  lStack_118 = 0;
  plVar12[0x17] = lStack_100;
  *(undefined4 *)(plVar12 + 0x15) = (undefined4)uStack_110;
  *(undefined4 *)((long)plVar12 + 0xac) = uStack_110._4_4_;
  *(undefined4 *)(plVar12 + 0x16) = (undefined4)uStack_108;
  *(undefined4 *)((long)plVar12 + 0xb4) = uStack_108._4_4_;
  uStack_110 = 0;
  uStack_108 = 0;
  lStack_100 = 0;
  *(ulong *)((long)plVar12 + 0xc5) = CONCAT17(uStack_ec,CONCAT43(uStack_f0,uStack_f4._1_3_));
  plVar12[0x18] = CONCAT44(uStack_f4,CONCAT22(uStack_f6,uStack_f8));
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  uStack_a0 = plVar12;
  FUN_048afd20(puVar6,auStack_b0);
  plVar12 = uStack_a0;
  if (uStack_a0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_a0 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*uStack_a0 + 0x10))(uStack_a0);
      FUN_0412c2d0(plVar12);
    }
  }
  plVar12 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      FUN_0412c2d0(plVar12);
    }
  }
  lVar16 = *(long *)(puVar6 + 0x10);
  iVar9 = *(int *)(puVar6 + 0x1c);
  if (iVar9 == 2) {
    piVar17 = *(int **)(*(long *)(lVar16 + 0x78) + 0x60);
    iVar9 = *piVar17;
    while (iVar9 != *(int *)(puVar6 + 0x18)) {
      piVar17 = piVar17 + 0x16;
      iVar9 = *piVar17;
    }
    for (; *(long *)(piVar17 + 0xc) != *(long *)(puVar6 + 8); piVar17 = *(int **)(piVar17 + 0xe)) {
    }
LAB_0816046a:
    piVar17[4] = piVar17[4] | (int)puStack_1b8 << 0x10;
  }
  else {
    if (iVar9 == 1) {
      piVar17 = *(int **)(*(long *)(lVar16 + 0x78) + 0x48);
      iVar9 = *piVar17;
      while (iVar9 != *(int *)(puVar6 + 0x18)) {
        piVar17 = piVar17 + 0x1a;
        iVar9 = *piVar17;
      }
      goto LAB_0816046a;
    }
    if (iVar9 == 0) {
      *(uint *)(lVar16 + 0x18) = *(uint *)(lVar16 + 0x18) | (int)puStack_1b8 << 0x10;
    }
  }
  iVar9 = (int)uStack_c0;
  uVar7 = uStack_c0._4_4_;
  func_0x048b0bc0(&plStack_1a0);
  if (iVar9 == 4) {
    if ((DAT_0f5caf60 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5caf60), iVar10 != 0)) {
      func_0x0821c410();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5caee0,0xf53dab8);
      func_0x0410844d(&DAT_0f5caf60);
    }
    plVar12 = (long *)(*(long *)(lStack_e8 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lStack_e8 + 0x20) -
                                           *(long *)(lStack_e8 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f5caee0 + 4)) * 8);
    do {
      lVar16 = *plVar12;
      if (lVar16 == -1) goto LAB_08160578;
      plVar12 = (long *)(*(long *)(lStack_e8 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lStack_e8 + 0x30) + 8 + lVar16 * 0x18) !=
             *(uint *)(_DAT_0f5caee0 + 4));
    if (plVar12 == *(long **)(lStack_e8 + 0x38)) {
LAB_08160578:
      puVar11 = &DAT_0f5caee0;
    }
    else {
      puVar11 = (undefined *)plVar12[2];
    }
    puVar11 = (undefined *)func_0x048b1040(lStack_e8 + 0x18,puVar11,uVar7,1);
    if (puVar11 == (undefined *)0x0) {
      puStack_1b8 = (undefined *)0x0;
      puStack_1b0 = (undefined1 *)0x0;
      func_0x048b10d0(&puStack_1b8);
      puVar14 = *(undefined **)(puStack_1b8 + 0x38);
      puVar11 = puStack_1b8;
      if (puVar14 == (undefined *)0x0) goto LAB_0816064a;
LAB_08160666:
      do {
        puVar11 = puVar14;
        puVar14 = *(undefined **)(puVar11 + 0x38);
        if (*(undefined **)(puVar11 + 0x38) == (undefined *)0x0) {
          puStack_1b8 = (undefined *)0x0;
          puStack_1b0 = (undefined1 *)0x0;
          func_0x048b10d0(&puStack_1b8);
          puVar14 = puStack_1b8;
        }
      } while (puVar14 != (undefined *)0x0);
    }
    else {
      puVar14 = *(undefined **)(puVar11 + 0x38);
      if (*(undefined **)(puVar11 + 0x38) != (undefined *)0x0) goto LAB_08160666;
LAB_0816064a:
      puStack_1b8 = (undefined *)0x0;
      puStack_1b0 = (undefined1 *)0x0;
      func_0x048b10d0(&puStack_1b8);
      puVar14 = puStack_1b8;
      if (puStack_1b8 != (undefined *)0x0) goto LAB_08160666;
    }
    lVar16 = *(long *)(puVar11 + 0x48);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  else {
    if (iVar9 != 1) goto LAB_0816071d;
    if ((DAT_0f5caf60 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5caf60), iVar10 != 0)) {
      func_0x0821c410();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5caee0,0xf53dab8);
      func_0x0410844d(&DAT_0f5caf60);
    }
    plVar12 = (long *)(*(long *)(lStack_e8 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lStack_e8 + 0x20) -
                                           *(long *)(lStack_e8 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f5caee0 + 4)) * 8);
    do {
      lVar16 = *plVar12;
      if (lVar16 == -1) goto LAB_08160508;
      plVar12 = (long *)(*(long *)(lStack_e8 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lStack_e8 + 0x30) + 8 + lVar16 * 0x18) !=
             *(uint *)(_DAT_0f5caee0 + 4));
    if (plVar12 == *(long **)(lStack_e8 + 0x38)) {
LAB_08160508:
      puVar11 = &DAT_0f5caee0;
    }
    else {
      puVar11 = (undefined *)plVar12[2];
    }
    puVar11 = (undefined *)func_0x048b0c90(lStack_e8 + 0x18,puVar11,uVar7,1);
    if (puVar11 == (undefined *)0x0) {
      puStack_1b8 = (undefined *)0x0;
      puStack_1b0 = (undefined1 *)0x0;
      func_0x048b0d20(&puStack_1b8);
      puVar11 = puStack_1b8;
    }
    lVar16 = *(long *)(puVar11 + 0x58);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  puVar13[1] = 0xffffffffffffffff;
  puVar13[2] = 0;
  *(undefined1 *)(puVar13 + 3) = 0xff;
  *puVar13 = &UNK_0f0edc68;
  uVar5 = _UNK_014e78cc;
  uVar4 = _UNK_014e78c8;
  uVar3 = _UNK_014e78c4;
  *(undefined4 *)(puVar13 + 4) = _DAT_014e78c0;
  *(undefined4 *)((long)puVar13 + 0x24) = uVar3;
  *(undefined4 *)(puVar13 + 5) = uVar4;
  *(undefined4 *)((long)puVar13 + 0x2c) = uVar5;
  puVar13[6] = 0;
  *(undefined2 *)(puVar13 + 7) = 0;
  *(undefined4 *)((long)puVar13 + 0x3a) = 0;
  *(undefined2 *)((long)puVar13 + 0x3e) = 0;
  plVar12 = *(long **)(lVar16 + 8);
  *(undefined8 **)(lVar16 + 8) = puVar13;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x28))();
  }
LAB_0816071d:
  if ((DAT_0f5caf60 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5caf60), iVar10 != 0)) {
    func_0x0821c410();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5caee0,0xf53dab8);
    func_0x0410844d(&DAT_0f5caf60);
  }
  plVar12 = (long *)(*(long *)(lStack_e8 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lStack_e8 + 0x20) - *(long *)(lStack_e8 + 0x18))
                                 >> 3) - 1U & *(uint *)(_DAT_0f5caee0 + 4)) * 8);
  do {
    lVar16 = *plVar12;
    if (lVar16 == -1) goto LAB_08160780;
    plVar12 = (long *)(*(long *)(lStack_e8 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(lStack_e8 + 0x30) + 8 + lVar16 * 0x18) !=
           *(uint *)(_DAT_0f5caee0 + 4));
  if (plVar12 == *(long **)(lStack_e8 + 0x38)) {
LAB_08160780:
    puVar11 = &DAT_0f5caee0;
  }
  else {
    puVar11 = (undefined *)plVar12[2];
  }
  if ((1 < iVar9 - 1U) &&
     (cVar8 = FUN_0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0132b7b5),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puStack_1b8 = (undefined *)func_0x048b0c90(lStack_e8 + 0x18,puVar11,uVar7,1);
  if (puStack_1b8 == (undefined *)0x0) {
    puStack_1b8 = (undefined *)0x0;
    puStack_1b0 = (undefined1 *)0x0;
    func_0x048b0d20(&puStack_1b8);
  }
  *(undefined1 *)(*(long *)(puStack_1b8 + 0x58) + 0xa8) = 2;
  return;
}



/* ---- referenced strings ----
 * 0x144d542  ClientNetworkVersion
 */
