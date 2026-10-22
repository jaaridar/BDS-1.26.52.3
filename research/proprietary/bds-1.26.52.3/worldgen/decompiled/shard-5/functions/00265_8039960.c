/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8139960 (ELF vaddr 0x8039960)
 * Label: caller-of-callee
 * Body:  [[08139960, 08139fd1] [08139fe0, 0813a1ce] [0813a1d0, 0813a44e]]
 * Ghidra: FUN_08139960
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08139960(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int iVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  bool bVar15;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined4 uStack_198;
  long *plStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 *puStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined4 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  uint uStack_e4;
  uint uStack_e0;
  undefined1 uStack_dc;
  long lStack_d8;
  undefined1 auStack_d0 [32];
  undefined8 uStack_b0;
  char cStack_a8;
  undefined4 auStack_a0 [2];
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  
  func_0x0813b390();
  if ((DAT_0f5c95c0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c95c0), iVar7 != 0)) {
    func_0x081cbaf0();
    FUN_0410844d(&DAT_0f5c95c0);
  }
  uVar12 = _DAT_0f5c95b8;
  lVar13 = _DAT_0f5c95b0;
  if ((DAT_0f5c9658 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c9658), iVar7 != 0)) {
    func_0x081ccba0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c95d8,0xf53dab8);
    FUN_0410844d(&DAT_0f5c9658);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5c95d8 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_081399f1;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5c95d8 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_081399f1:
    puVar8 = &DAT_0f5c95d8;
    iVar7 = iRam000000000f5c9638;
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    iVar7 = *(int *)(puVar8 + 0x60);
  }
  if ((iVar7 == -0x2b3da790) && (lVar2 = *(long *)(puVar8 + 0x68), lVar2 != 0)) {
    bVar15 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar13 = lVar2 + 9;
    if (bVar15) {
      lVar13 = *(long *)(lVar2 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar15) {
      uVar12 = *(ulong *)(lVar2 + 0x10);
    }
  }
  func_0x081f6260(&lStack_d8,param_1,lVar13,uVar12);
  if (cStack_a8 != '\0') {
    return;
  }
  if ((DAT_0f5c95c0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c95c0), iVar7 != 0)) {
    func_0x081cbaf0();
    FUN_0410844d(&DAT_0f5c95c0);
  }
  lVar13 = lStack_d8;
  uStack_b0 = 0x8636baf800000001;
  if ((DAT_0f5c9658 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c9658), iVar7 != 0)) {
    func_0x081ccba0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c95d8,0xf53dab8);
    FUN_0410844d(&DAT_0f5c9658);
  }
  puStack_1a0 = (undefined1 *)(lVar13 + 0x18);
  plVar9 = (long *)(*(long *)(lVar13 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >> 3)
                           - 1U & *(uint *)(_DAT_0f5c95d8 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_08139af0;
    plVar9 = (long *)(*(long *)(lVar13 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5c95d8 + 4));
  if (plVar9 == *(long **)(lVar13 + 0x38)) {
LAB_08139af0:
    puStack_1a8 = &DAT_0f5c95d8;
  }
  else {
    puStack_1a8 = (undefined *)plVar9[2];
  }
  func_0x0ed621a0(&puStack_1a8,uStack_b0._4_4_);
  puStack_1a8 = (undefined *)CONCAT62(puStack_1a8._2_6_,1);
  uStack_198 = uStack_b0._4_4_;
  plStack_190 = (long *)0x0;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  puStack_1a0 = auStack_d0;
  puStack_158 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puStack_158 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  uVar3 = _UNK_013104a2;
  lStack_168 = 0x49;
  lStack_160 = 0x43;
  puStack_158[6] = _DAT_0131049a;
  puStack_158[7] = uVar3;
  uVar3 = _UNK_01310492;
  puStack_158[4] = _DAT_0131048a;
  puStack_158[5] = uVar3;
  uVar3 = _UNK_01310482;
  puStack_158[2] = _DAT_0131047a;
  puStack_158[3] = uVar3;
  uVar3 = _UNK_01310472;
  *puStack_158 = _DAT_0131046a;
  puStack_158[1] = uVar3;
  *(undefined4 *)((long)puStack_158 + 0x3f) = 0x29646576;
  *(undefined1 *)((long)puStack_158 + 0x43) = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  uStack_120 = 0x3f600000;
  FUN_048afb10(&lStack_150,8);
  uStack_f8 = 0;
  lStack_f0 = 0;
  lStack_108 = 0;
  uStack_100 = 0;
  lStack_118 = 0;
  lStack_110 = 0;
  uStack_e8 = 0xff00;
  uStack_e4 = uStack_e4 & 0xffffff00;
  uStack_e0 = uStack_e0 & 0xffffff00;
  uStack_dc = 0;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0f10cfd8;
  if (plStack_190 != (long *)0x0) {
    lVar13 = *plStack_190;
    plStack_190 = plVar9;
    (**(code **)(lVar13 + 8))();
    plVar9 = plStack_190;
  }
  plStack_190 = plVar9;
  auStack_a0[0] = uStack_198;
  plStack_98 = (long *)0x0;
  uStack_90 = (long *)((ulong)uStack_90._4_4_ << 0x20);
  uStack_88 = 1;
  uStack_80 = 0;
  puStack_78 = &UNK_081fa6f0;
  puStack_70 = &SUB_048b06d0;
  puStack_68 = &UNK_081f8ce0;
  puStack_60 = &UNK_081fa7b0;
  puStack_58 = &UNK_081fa9f0;
  uStack_50 = 0;
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  func_0x048b05a0(puStack_1a0,auStack_a0);
  plVar9 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      func_0x0412c2d0(plVar9);
    }
  }
  puVar4 = puStack_1a0;
  if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
    func_0x048b0af0(0xf550a08);
    FUN_0410844d(&DAT_0f550a20);
  }
  auStack_a0[0] = _DAT_0f550a0c;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar13 = lStack_188;
  plVar1 = plStack_190;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef439d0;
  plStack_98 = plVar9 + 3;
  plStack_190 = (long *)0x0;
  lStack_188 = 0;
  plVar9[3] = (long)plVar1;
  plVar9[4] = lVar13;
  plVar9[7] = lStack_170;
  plVar9[5] = lStack_180;
  plVar9[6] = lStack_178;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  plVar9[10] = (long)puStack_158;
  plVar9[8] = lStack_168;
  plVar9[9] = lStack_160;
  lStack_168 = 0;
  lStack_160 = 0;
  puStack_158 = (undefined8 *)0x0;
  plVar9[0xb] = lStack_150;
  plVar9[0xc] = lStack_148;
  plVar9[0xd] = lStack_140;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  plVar9[0xe] = lStack_138;
  plVar9[0xf] = lStack_130;
  plVar9[0x10] = lStack_128;
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  *(undefined4 *)(plVar9 + 0x11) = uStack_120;
  plVar9[0x12] = lStack_118;
  plVar9[0x13] = lStack_110;
  plVar9[0x14] = lStack_108;
  lStack_118 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  plVar9[0x17] = lStack_f0;
  *(undefined4 *)(plVar9 + 0x15) = (undefined4)uStack_100;
  *(undefined4 *)((long)plVar9 + 0xac) = uStack_100._4_4_;
  *(undefined4 *)(plVar9 + 0x16) = (undefined4)uStack_f8;
  *(undefined4 *)((long)plVar9 + 0xb4) = uStack_f8._4_4_;
  uStack_100 = 0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  *(ulong *)((long)plVar9 + 0xc5) = CONCAT17(uStack_dc,CONCAT43(uStack_e0,uStack_e4._1_3_));
  plVar9[0x18] = CONCAT44(uStack_e4,CONCAT22(uStack_e6,uStack_e8));
  uStack_38 = 0;
  plStack_30 = (long *)0x0;
  uStack_90 = plVar9;
  func_0x048afd20(puVar4,auStack_a0);
  plVar9 = uStack_90;
  if (uStack_90 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_90 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*uStack_90 + 0x10))(uStack_90);
      func_0x0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_30;
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      func_0x0412c2d0(plVar9);
    }
  }
  lVar13 = *(long *)(puVar4 + 0x10);
  iVar7 = *(int *)(puVar4 + 0x1c);
  if (iVar7 == 2) {
    piVar14 = *(int **)(*(long *)(lVar13 + 0x78) + 0x60);
    iVar7 = *piVar14;
    while (iVar7 != *(int *)(puVar4 + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar7 = *piVar14;
    }
    for (; *(long *)(piVar14 + 0xc) != *(long *)(puVar4 + 8); piVar14 = *(int **)(piVar14 + 0xe)) {
    }
  }
  else {
    if (iVar7 != 1) {
      if (iVar7 == 0) {
        *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) | (int)puStack_1a8 << 0x10;
      }
      goto LAB_08139fed;
    }
    piVar14 = *(int **)(*(long *)(lVar13 + 0x78) + 0x48);
    iVar7 = *piVar14;
    while (iVar7 != *(int *)(puVar4 + 0x18)) {
      piVar14 = piVar14 + 0x1a;
      iVar7 = *piVar14;
    }
  }
  piVar14[4] = piVar14[4] | (int)puStack_1a8 << 0x10;
LAB_08139fed:
  iVar7 = (int)uStack_b0;
  uVar5 = uStack_b0._4_4_;
  func_0x048b0bc0(&plStack_190);
  if (iVar7 == 4) {
    if ((DAT_0f5c9658 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c9658), iVar7 != 0)) {
      func_0x081ccba0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c95d8,0xf53dab8);
      FUN_0410844d(&DAT_0f5c9658);
    }
    plVar9 = (long *)(*(long *)(lStack_d8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lStack_d8 + 0x20) - *(long *)(lStack_d8 + 0x18)
                                          ) >> 3) - 1U & *(uint *)(_DAT_0f5c95d8 + 4)) * 8);
    do {
      lVar13 = *plVar9;
      if (lVar13 == -1) goto LAB_0813a0e8;
      plVar9 = (long *)(*(long *)(lStack_d8 + 0x30) + lVar13 * 0x18);
    } while (*(uint *)(*(long *)(lStack_d8 + 0x30) + 8 + lVar13 * 0x18) !=
             *(uint *)(_DAT_0f5c95d8 + 4));
    if (plVar9 == *(long **)(lStack_d8 + 0x38)) {
LAB_0813a0e8:
      puVar8 = &DAT_0f5c95d8;
    }
    else {
      puVar8 = (undefined *)plVar9[2];
    }
    puVar8 = (undefined *)FUN_048b1040(lStack_d8 + 0x18,puVar8,uVar5,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_1a8 = (undefined *)0x0;
      puStack_1a0 = (undefined1 *)0x0;
      func_0x048b10d0(&puStack_1a8);
      puVar11 = *(undefined **)(puStack_1a8 + 0x38);
      puVar8 = puStack_1a8;
    }
    else {
      puVar11 = *(undefined **)(puVar8 + 0x38);
    }
    if (puVar11 != (undefined *)0x0) goto LAB_0813a1d5;
    puStack_1a8 = (undefined *)0x0;
    puStack_1a0 = (undefined1 *)0x0;
    func_0x048b10d0(&puStack_1a8);
    puVar6 = puStack_1a8;
    while (puVar11 = puVar6, puVar11 != (undefined *)0x0) {
LAB_0813a1d5:
      puVar8 = puVar11;
      puVar6 = *(undefined **)(puVar11 + 0x38);
      if (*(undefined **)(puVar11 + 0x38) == (undefined *)0x0) {
        puStack_1a8 = (undefined *)0x0;
        puStack_1a0 = (undefined1 *)0x0;
        func_0x048b10d0(&puStack_1a8);
        puVar6 = puStack_1a8;
      }
    }
    lVar13 = *(long *)(puVar8 + 0x48);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  else {
    if (iVar7 != 1) {
      return;
    }
    if ((DAT_0f5c9658 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c9658), iVar7 != 0)) {
      func_0x081ccba0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c95d8,0xf53dab8);
      FUN_0410844d(&DAT_0f5c9658);
    }
    plVar9 = (long *)(*(long *)(lStack_d8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lStack_d8 + 0x20) - *(long *)(lStack_d8 + 0x18)
                                          ) >> 3) - 1U & *(uint *)(_DAT_0f5c95d8 + 4)) * 8);
    do {
      lVar13 = *plVar9;
      if (lVar13 == -1) goto LAB_0813a078;
      plVar9 = (long *)(*(long *)(lStack_d8 + 0x30) + lVar13 * 0x18);
    } while (*(uint *)(*(long *)(lStack_d8 + 0x30) + 8 + lVar13 * 0x18) !=
             *(uint *)(_DAT_0f5c95d8 + 4));
    if (plVar9 == *(long **)(lStack_d8 + 0x38)) {
LAB_0813a078:
      puVar8 = &DAT_0f5c95d8;
    }
    else {
      puVar8 = (undefined *)plVar9[2];
    }
    puVar8 = (undefined *)func_0x048b0c90(lStack_d8 + 0x18,puVar8,uVar5,1);
    if (puVar8 == (undefined *)0x0) {
      puStack_1a8 = (undefined *)0x0;
      puStack_1a0 = (undefined1 *)0x0;
      func_0x048b0d20(&puStack_1a8);
      puVar8 = puStack_1a8;
    }
    lVar13 = *(long *)(puVar8 + 0x58);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar10 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  puVar10[1] = 0x100000;
  puVar10[2] = 0;
  *(undefined1 *)(puVar10 + 3) = 0xff;
  *puVar10 = &UNK_0f4e3cf0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  *(undefined8 *)((long)puVar10 + 0x29) = 0;
  *(undefined8 *)((long)puVar10 + 0x31) = 0;
  plVar9 = *(long **)(lVar13 + 8);
  *(undefined8 **)(lVar13 + 8) = puVar10;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x28))();
  }
  return;
}



/* ---- referenced strings ----
 * 0x131046a  Array of primitive shapes (can be a mix of new, updated or removed)
 * 0x131047a  ve shapes (can be a mix of new, updated or removed)
 * 0x131048a  e a mix of new, updated or removed)
 * 0x131049a  updated or removed)
 */
