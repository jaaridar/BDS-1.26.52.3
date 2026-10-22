/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x880bfa0 (ELF vaddr 0x870bfa0)
 * Label: caller-of-callee
 * Body:  [[0880bfa0, 0880c671] [0880c680, 0880c86e] [0880c870, 0880cacf]]
 * Ghidra: FUN_0880bfa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0880bfa0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  bool bVar14;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined4 uStack_198;
  long *plStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  ulong uStack_158;
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
  
  func_0x07cab540();
  if ((DAT_0f5e2e28 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5e2e28), iVar6 != 0)) {
    func_0x0893f360();
    func_0x0410844d(&DAT_0f5e2e28);
  }
  uVar12 = _DAT_0f5e2e20;
  lVar13 = _DAT_0f5e2e18;
  if ((DAT_0f5e2ec0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5e2ec0), iVar6 != 0)) {
    func_0x0893fb20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e2e40,0xf53dab8);
    func_0x0410844d(&DAT_0f5e2ec0);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5e2e40 + 4)) * 8);
  do {
    lVar2 = *plVar8;
    if (lVar2 == -1) goto LAB_0880c031;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5e2e40 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_0880c031:
    puVar7 = &DAT_0f5e2e40;
    iVar6 = iRam000000000f5e2ea0;
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    iVar6 = *(int *)(puVar7 + 0x60);
  }
  if ((iVar6 == -0x2b3da790) && (lVar2 = *(long *)(puVar7 + 0x68), lVar2 != 0)) {
    bVar14 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar13 = lVar2 + 9;
    if (bVar14) {
      lVar13 = *(long *)(lVar2 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar14) {
      uVar12 = *(ulong *)(lVar2 + 0x10);
    }
  }
  func_0x08941f20(&lStack_d8,param_1,lVar13,uVar12);
  if (cStack_a8 != '\0') {
    return;
  }
  if ((DAT_0f5e2e28 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5e2e28), iVar6 != 0)) {
    func_0x0893f360();
    func_0x0410844d(&DAT_0f5e2e28);
  }
  lVar13 = lStack_d8;
  uStack_b0 = 0x4298543600000001;
  if ((DAT_0f5e2ec0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5e2ec0), iVar6 != 0)) {
    func_0x0893fb20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e2e40,0xf53dab8);
    func_0x0410844d(&DAT_0f5e2ec0);
  }
  puStack_1a0 = (undefined1 *)(lVar13 + 0x18);
  plVar8 = (long *)(*(long *)(lVar13 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >> 3)
                           - 1U & *(uint *)(_DAT_0f5e2e40 + 4)) * 8);
  do {
    lVar2 = *plVar8;
    if (lVar2 == -1) goto LAB_0880c130;
    plVar8 = (long *)(*(long *)(lVar13 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5e2e40 + 4));
  if (plVar8 == *(long **)(lVar13 + 0x38)) {
LAB_0880c130:
    puStack_1a8 = &DAT_0f5e2e40;
  }
  else {
    puStack_1a8 = (undefined *)plVar8[2];
  }
  func_0x0ed621a0(&puStack_1a8,uStack_b0._4_4_);
  puStack_1a8 = (undefined *)CONCAT62(puStack_1a8._2_6_,1);
  uStack_198 = uStack_b0._4_4_;
  plStack_190 = (long *)0x0;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  uStack_168 = 0x1e;
  uStack_167 = 0x6669746e656449;
  uStack_160 = 0x69;
  uStack_15f = 0x7473694c207265;
  uStack_158 = uStack_158 & 0xffffffffffffff00;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  uStack_120 = 0x3f600000;
  puStack_1a0 = auStack_d0;
  func_0x048afb10(&lStack_150,8);
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
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f0f7d80;
  if (plStack_190 != (long *)0x0) {
    lVar13 = *plStack_190;
    plStack_190 = plVar8;
    (**(code **)(lVar13 + 8))();
    plVar8 = plStack_190;
  }
  plStack_190 = plVar8;
  auStack_a0[0] = uStack_198;
  plStack_98 = (long *)0x0;
  uStack_90 = (long *)((ulong)uStack_90._4_4_ << 0x20);
  uStack_88 = 1;
  uStack_80 = 0;
  puStack_78 = &UNK_077e83c0;
  puStack_70 = &SUB_048b06d0;
  puStack_68 = &UNK_077e83d0;
  puStack_60 = &UNK_08942a80;
  puStack_58 = &UNK_08942d20;
  uStack_50 = 0;
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  FUN_048b05a0(puStack_1a0,auStack_a0);
  plVar8 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      func_0x0412c2d0(plVar8);
    }
  }
  puVar3 = puStack_1a0;
  iVar6 = *(int *)(puStack_1a0 + 0x1c);
  if (iVar6 == 2) {
    piVar9 = *(int **)(*(long *)(*(long *)(puStack_1a0 + 0x10) + 0x78) + 0x60);
    iVar6 = *piVar9;
    while (iVar6 != *(int *)(puStack_1a0 + 0x18)) {
      piVar9 = piVar9 + 0x16;
      iVar6 = *piVar9;
    }
    lVar13 = *(long *)(piVar9 + 0xc);
    while (lVar13 != *(long *)(puStack_1a0 + 8)) {
      piVar9 = *(int **)(piVar9 + 0xe);
      lVar13 = *(long *)(piVar9 + 0xc);
    }
LAB_0880c38f:
    *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 4;
  }
  else {
    if (iVar6 == 1) {
      piVar9 = *(int **)(*(long *)(*(long *)(puStack_1a0 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar9;
      while (iVar6 != *(int *)(puStack_1a0 + 0x18)) {
        piVar9 = piVar9 + 0x1a;
        iVar6 = *piVar9;
      }
      goto LAB_0880c38f;
    }
    if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_1a0 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_1a0 + 0x10) + 0x18) | 0x40000;
    }
  }
  if ((DAT_0f550a20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550a20), iVar6 != 0)) {
    FUN_048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_a0[0] = _DAT_0f550a0c;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar8 == (long *)0x0) {
    FUN_0eec74c0(0xd0,0);
  }
  lVar13 = lStack_188;
  plVar1 = plStack_190;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef439d0;
  plStack_98 = plVar8 + 3;
  plStack_190 = (long *)0x0;
  lStack_188 = 0;
  plVar8[3] = (long)plVar1;
  plVar8[4] = lVar13;
  plVar8[7] = lStack_170;
  plVar8[5] = lStack_180;
  plVar8[6] = lStack_178;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  plVar8[10] = uStack_158;
  plVar8[8] = CONCAT71(uStack_167,uStack_168);
  plVar8[9] = CONCAT71(uStack_15f,uStack_160);
  uStack_168 = 0;
  uStack_167 = 0;
  uStack_160 = 0;
  uStack_15f = 0;
  uStack_158 = 0;
  plVar8[0xb] = lStack_150;
  plVar8[0xc] = lStack_148;
  plVar8[0xd] = lStack_140;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  plVar8[0xe] = lStack_138;
  plVar8[0xf] = lStack_130;
  plVar8[0x10] = lStack_128;
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  *(undefined4 *)(plVar8 + 0x11) = uStack_120;
  plVar8[0x12] = lStack_118;
  plVar8[0x13] = lStack_110;
  plVar8[0x14] = lStack_108;
  lStack_118 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  plVar8[0x17] = lStack_f0;
  *(undefined4 *)(plVar8 + 0x15) = (undefined4)uStack_100;
  *(undefined4 *)((long)plVar8 + 0xac) = uStack_100._4_4_;
  *(undefined4 *)(plVar8 + 0x16) = (undefined4)uStack_f8;
  *(undefined4 *)((long)plVar8 + 0xb4) = uStack_f8._4_4_;
  uStack_100 = 0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  *(ulong *)((long)plVar8 + 0xc5) = CONCAT17(uStack_dc,CONCAT43(uStack_e0,uStack_e4._1_3_));
  plVar8[0x18] = CONCAT44(uStack_e4,CONCAT22(uStack_e6,uStack_e8));
  uStack_38 = 0;
  plStack_30 = (long *)0x0;
  uStack_90 = plVar8;
  func_0x048afd20(puVar3,auStack_a0);
  plVar8 = uStack_90;
  if (uStack_90 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_90 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*uStack_90 + 0x10))(uStack_90);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_30;
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      func_0x0412c2d0(plVar8);
    }
  }
  lVar13 = *(long *)(puVar3 + 0x10);
  iVar6 = *(int *)(puVar3 + 0x1c);
  if (iVar6 == 2) {
    piVar9 = *(int **)(*(long *)(lVar13 + 0x78) + 0x60);
    iVar6 = *piVar9;
    while (iVar6 != *(int *)(puVar3 + 0x18)) {
      piVar9 = piVar9 + 0x16;
      iVar6 = *piVar9;
    }
    for (; *(long *)(piVar9 + 0xc) != *(long *)(puVar3 + 8); piVar9 = *(int **)(piVar9 + 0xe)) {
    }
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 == 0) {
        *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) | (int)puStack_1a8 << 0x10;
      }
      goto LAB_0880c68d;
    }
    piVar9 = *(int **)(*(long *)(lVar13 + 0x78) + 0x48);
    iVar6 = *piVar9;
    while (iVar6 != *(int *)(puVar3 + 0x18)) {
      piVar9 = piVar9 + 0x1a;
      iVar6 = *piVar9;
    }
  }
  piVar9[4] = piVar9[4] | (int)puStack_1a8 << 0x10;
LAB_0880c68d:
  iVar6 = (int)uStack_b0;
  uVar4 = uStack_b0._4_4_;
  func_0x048b0bc0(&plStack_190);
  if (iVar6 == 4) {
    if ((DAT_0f5e2ec0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5e2ec0), iVar6 != 0)) {
      func_0x0893fb20();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e2e40,0xf53dab8);
      func_0x0410844d(&DAT_0f5e2ec0);
    }
    plVar8 = (long *)(*(long *)(lStack_d8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lStack_d8 + 0x20) - *(long *)(lStack_d8 + 0x18)
                                          ) >> 3) - 1U & *(uint *)(_DAT_0f5e2e40 + 4)) * 8);
    do {
      lVar13 = *plVar8;
      if (lVar13 == -1) goto LAB_0880c788;
      plVar8 = (long *)(*(long *)(lStack_d8 + 0x30) + lVar13 * 0x18);
    } while (*(uint *)(*(long *)(lStack_d8 + 0x30) + 8 + lVar13 * 0x18) !=
             *(uint *)(_DAT_0f5e2e40 + 4));
    if (plVar8 == *(long **)(lStack_d8 + 0x38)) {
LAB_0880c788:
      puVar7 = &DAT_0f5e2e40;
    }
    else {
      puVar7 = (undefined *)plVar8[2];
    }
    puVar7 = (undefined *)func_0x048b1040(lStack_d8 + 0x18,puVar7,uVar4,1);
    if (puVar7 == (undefined *)0x0) {
      puStack_1a8 = (undefined *)0x0;
      puStack_1a0 = (undefined1 *)0x0;
      func_0x048b10d0(&puStack_1a8);
      puVar11 = *(undefined **)(puStack_1a8 + 0x38);
      puVar7 = puStack_1a8;
    }
    else {
      puVar11 = *(undefined **)(puVar7 + 0x38);
    }
    if (puVar11 != (undefined *)0x0) goto LAB_0880c875;
    puStack_1a8 = (undefined *)0x0;
    puStack_1a0 = (undefined1 *)0x0;
    func_0x048b10d0(&puStack_1a8);
    puVar5 = puStack_1a8;
    while (puVar11 = puVar5, puVar11 != (undefined *)0x0) {
LAB_0880c875:
      puVar7 = puVar11;
      puVar5 = *(undefined **)(puVar11 + 0x38);
      if (*(undefined **)(puVar11 + 0x38) == (undefined *)0x0) {
        puStack_1a8 = (undefined *)0x0;
        puStack_1a0 = (undefined1 *)0x0;
        func_0x048b10d0(&puStack_1a8);
        puVar5 = puStack_1a8;
      }
    }
    lVar13 = *(long *)(puVar7 + 0x48);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
  }
  else {
    if (iVar6 != 1) {
      return;
    }
    if ((DAT_0f5e2ec0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5e2ec0), iVar6 != 0)) {
      func_0x0893fb20();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e2e40,0xf53dab8);
      func_0x0410844d(&DAT_0f5e2ec0);
    }
    plVar8 = (long *)(*(long *)(lStack_d8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lStack_d8 + 0x20) - *(long *)(lStack_d8 + 0x18)
                                          ) >> 3) - 1U & *(uint *)(_DAT_0f5e2e40 + 4)) * 8);
    do {
      lVar13 = *plVar8;
      if (lVar13 == -1) goto LAB_0880c718;
      plVar8 = (long *)(*(long *)(lStack_d8 + 0x30) + lVar13 * 0x18);
    } while (*(uint *)(*(long *)(lStack_d8 + 0x30) + 8 + lVar13 * 0x18) !=
             *(uint *)(_DAT_0f5e2e40 + 4));
    if (plVar8 == *(long **)(lStack_d8 + 0x38)) {
LAB_0880c718:
      puVar7 = &DAT_0f5e2e40;
    }
    else {
      puVar7 = (undefined *)plVar8[2];
    }
    puVar7 = (undefined *)func_0x048b0c90(lStack_d8 + 0x18,puVar7,uVar4,1);
    if (puVar7 == (undefined *)0x0) {
      puStack_1a8 = (undefined *)0x0;
      puStack_1a0 = (undefined1 *)0x0;
      FUN_048b0d20(&puStack_1a8);
      puVar7 = puStack_1a8;
    }
    lVar13 = *(long *)(puVar7 + 0x58);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
  }
  puVar10[1] = 0xffffffffffffffff;
  puVar10[2] = 0;
  *(undefined1 *)(puVar10 + 3) = 0xff;
  *puVar10 = &UNK_0f12f3b8;
  plVar8 = *(long **)(lVar13 + 8);
  *(undefined8 **)(lVar13 + 8) = puVar10;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x28))();
  }
  return;
}


