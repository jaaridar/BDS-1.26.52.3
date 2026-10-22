/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7ccf220 (ELF vaddr 0x7bcf220)
 * Label: caller-of-callee
 * Body:  [[07ccf220, 07ccf821] [07ccf830, 07ccf93c] [07ccf940, 07ccfa89]]
 * Ghidra: FUN_07ccf220
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07ccf220(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  bool bVar14;
  long lStack_1a8;
  undefined1 *puStack_1a0;
  undefined4 uStack_198;
  long *plStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  ulong uStack_160;
  long lStack_158;
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
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  
  func_0x07cc4b80();
  if ((DAT_0f5bd6d8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5bd6d8), iVar6 != 0)) {
    func_0x07d9da50(0xf5bd6c0);
    func_0x0410844d(&DAT_0f5bd6d8);
  }
  uVar2 = _DAT_0f5bd6d0;
  uVar10 = _DAT_0f5bd6c8;
  lVar7 = func_0x07d9cc10(param_1 + 0x18);
  if ((*(int *)(lVar7 + 0x60) == -0x2b3da790) && (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0)) {
    bVar14 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar12 = lVar7 + 9;
    if (bVar14) {
      lVar12 = *(long *)(lVar7 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar14) {
      uVar13 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x07d9d180(&lStack_d8,param_1,lVar12,uVar13);
  }
  else {
    func_0x07d9d180(&lStack_d8,param_1,uVar10,uVar2);
  }
  if (cStack_a8 != '\0') {
    return;
  }
  if ((DAT_0f5bd6d8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5bd6d8), iVar6 != 0)) {
    func_0x07d9da50(0xf5bd6c0);
    func_0x0410844d(&DAT_0f5bd6d8);
  }
  uStack_b0 = 0xe65fb50400000001;
  lVar7 = lStack_d8 + 0x18;
  lStack_1a8 = func_0x07d9cc10(lVar7);
  puStack_1a0 = (undefined1 *)lVar7;
  FUN_0ed621a0(&lStack_1a8,uStack_b0._4_4_);
  puStack_1a0 = auStack_d0;
  lStack_1a8 = CONCAT62(lStack_1a8._2_6_,1);
  uStack_198 = uStack_b0._4_4_;
  plStack_190 = (long *)0x0;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  lStack_168 = 0x736e6f697463410e;
  uStack_160 = uStack_160 & 0xffffffffffffff00;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  uStack_120 = 0x3f600000;
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
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f0f7470;
  if (plStack_190 != (long *)0x0) {
    lVar7 = *plStack_190;
    plStack_190 = plVar8;
    (**(code **)(lVar7 + 8))();
    plVar8 = plStack_190;
  }
  plStack_190 = plVar8;
  auStack_a0[0] = 0xe65fb504;
  plStack_98 = (long *)0x0;
  uStack_90 = (long *)((ulong)uStack_90._4_4_ << 0x20);
  uStack_88 = 2;
  uStack_80 = 1;
  puStack_78 = &UNK_07da0e40;
  puStack_70 = &UNK_07d98660;
  puStack_68 = &UNK_07d9fc20;
  puStack_60 = &UNK_07da0e60;
  puStack_58 = &UNK_07da10d0;
  uStack_50 = 0;
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  func_0x048b05a0(puStack_1a0,auStack_a0);
  plVar8 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      FUN_0412c2d0(plVar8);
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
    lVar7 = *(long *)(piVar9 + 0xc);
    while (lVar7 != *(long *)(puStack_1a0 + 8)) {
      piVar9 = *(int **)(piVar9 + 0xe);
      lVar7 = *(long *)(piVar9 + 0xc);
    }
LAB_07ccf53f:
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
      goto LAB_07ccf53f;
    }
    if (iVar6 == 0) {
      *(uint *)(*(long *)(puStack_1a0 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_1a0 + 0x10) + 0x18) | 0x40000;
    }
  }
  if ((DAT_0f550a20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550a20), iVar6 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_a0[0] = _DAT_0f550a0c;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar7 = lStack_188;
  plVar1 = plStack_190;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef439d0;
  plStack_98 = plVar8 + 3;
  plStack_190 = (long *)0x0;
  lStack_188 = 0;
  plVar8[3] = (long)plVar1;
  plVar8[4] = lVar7;
  plVar8[7] = lStack_170;
  plVar8[5] = lStack_180;
  plVar8[6] = lStack_178;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  plVar8[10] = lStack_158;
  plVar8[8] = lStack_168;
  plVar8[9] = uStack_160;
  lStack_168 = 0;
  uStack_160 = 0;
  lStack_158 = 0;
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
  FUN_048afd20(puVar3,auStack_a0);
  plVar8 = uStack_90;
  if (uStack_90 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_90 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*uStack_90 + 0x10))(uStack_90);
      FUN_0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_30;
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      FUN_0412c2d0(plVar8);
    }
  }
  lVar7 = *(long *)(puVar3 + 0x10);
  iVar6 = *(int *)(puVar3 + 0x1c);
  if (iVar6 == 2) {
    piVar9 = *(int **)(*(long *)(lVar7 + 0x78) + 0x60);
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
        *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) | (int)lStack_1a8 << 0x10;
      }
      goto LAB_07ccf83d;
    }
    piVar9 = *(int **)(*(long *)(lVar7 + 0x78) + 0x48);
    iVar6 = *piVar9;
    while (iVar6 != *(int *)(puVar3 + 0x18)) {
      piVar9 = piVar9 + 0x1a;
      iVar6 = *piVar9;
    }
  }
  piVar9[4] = piVar9[4] | (int)lStack_1a8 << 0x10;
LAB_07ccf83d:
  iVar6 = (int)uStack_b0;
  uVar4 = uStack_b0._4_4_;
  func_0x048b0bc0(&plStack_190);
  if (iVar6 == 4) {
    uVar10 = func_0x07d9cc10(lStack_d8 + 0x18);
    lVar7 = func_0x048b1040(lStack_d8 + 0x18,uVar10,uVar4,1);
    if (lVar7 == 0) {
      lStack_1a8 = 0;
      puStack_1a0 = (undefined1 *)0x0;
      func_0x048b10d0(&lStack_1a8);
      lVar12 = *(long *)(lStack_1a8 + 0x38);
      lVar7 = lStack_1a8;
    }
    else {
      lVar12 = *(long *)(lVar7 + 0x38);
    }
    if (lVar12 != 0) goto LAB_07ccf945;
    lStack_1a8 = 0;
    puStack_1a0 = (undefined1 *)0x0;
    func_0x048b10d0(&lStack_1a8);
    lVar5 = lStack_1a8;
    while (lVar12 = lVar5, lVar12 != 0) {
LAB_07ccf945:
      lVar7 = lVar12;
      lVar5 = *(long *)(lVar12 + 0x38);
      if (*(long *)(lVar12 + 0x38) == 0) {
        lStack_1a8 = 0;
        puStack_1a0 = (undefined1 *)0x0;
        func_0x048b10d0(&lStack_1a8);
        lVar5 = lStack_1a8;
      }
    }
    lVar7 = *(long *)(lVar7 + 0x48);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
  }
  else {
    if (iVar6 != 1) {
      return;
    }
    uVar10 = func_0x07d9cc10(lStack_d8 + 0x18);
    lVar7 = func_0x048b0c90(lStack_d8 + 0x18,uVar10,uVar4,1);
    if (lVar7 == 0) {
      lStack_1a8 = 0;
      puStack_1a0 = (undefined1 *)0x0;
      func_0x048b0d20(&lStack_1a8);
      lVar7 = lStack_1a8;
    }
    lVar7 = *(long *)(lVar7 + 0x58);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
  }
  puVar11[1] = 0xffffffffffffffff;
  puVar11[2] = 0;
  *(undefined1 *)(puVar11 + 3) = 0xff;
  *puVar11 = &UNK_0f0f4440;
  plVar8 = *(long **)(lVar7 + 8);
  *(undefined8 **)(lVar7 + 8) = puVar11;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x28))();
  }
  return;
}


