/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdce52b0 (ELF vaddr 0xdbe52b0)
 * Label: caller-of-callee
 * Body:  [[0dce52b0, 0dce5841] [0dce5850, 0dce595c] [0dce5960, 0dce5a8e]]
 * Ghidra: FUN_0dce52b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dce52b0(long param_1)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  bool bVar13;
  long lStack_1d8;
  undefined4 *puStack_1d0;
  undefined4 uStack_1c8;
  long *plStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  ulong uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined4 uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined2 uStack_118;
  undefined2 uStack_116;
  uint uStack_114;
  uint uStack_110;
  undefined1 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 auStack_100 [8];
  undefined8 uStack_e0;
  undefined4 auStack_d0 [2];
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  char cStack_28;
  
  func_0x0e135840();
  lVar6 = func_0x0cd0c670(param_1 + 0x18);
  if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
    bVar13 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar10 = lVar6 + 9;
    if (bVar13) {
      lVar10 = *(long *)(lVar6 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x0dd0dfe0(&uStack_58,param_1,lVar10,uVar11);
    uStack_108 = uStack_58;
    uStack_104 = uStack_54;
  }
  else {
    func_0x0dd0dfe0(&uStack_58,param_1,&UNK_0128528b,0x10);
    uStack_108 = uStack_58;
    uStack_104 = uStack_54;
  }
  if (cStack_28 != '\0') {
    return;
  }
  if ((DAT_0f700948 == '\0') && (iVar5 = func_0x04108328(&DAT_0f700948), iVar5 != 0)) {
    func_0x0cd0c600(0xf700930);
    func_0x0410844d(&DAT_0f700948);
  }
  uStack_e0 = 0x33c03f3400000001;
  lVar6 = CONCAT44(uStack_104,uStack_108) + 0x18;
  lStack_1d8 = func_0x0cd0c670(lVar6);
  puStack_1d0 = (undefined4 *)lVar6;
  FUN_0ed621a0(&lStack_1d8,uStack_e0._4_4_);
  puStack_1d0 = auStack_100;
  lStack_1d8 = CONCAT62(lStack_1d8._2_6_,1);
  uStack_1c8 = uStack_e0._4_4_;
  plStack_1c0 = (long *)0x0;
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  uStack_198 = 0x1e;
  uStack_197 = 0x69746365746564;
  uStack_190 = 0x6f;
  uStack_18f = 0x73656c75725f6e;
  uStack_188 = uStack_188 & 0xffffffffffffff00;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  lStack_168 = 0;
  lStack_160 = 0;
  lStack_158 = 0;
  uStack_150 = 0x3f600000;
  func_0x048afb10(&lStack_180,8);
  uStack_128 = 0;
  lStack_120 = 0;
  lStack_138 = 0;
  uStack_130 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  uStack_118 = 0xff00;
  uStack_114 = uStack_114 & 0xffffff00;
  uStack_110 = uStack_110 & 0xffffff00;
  uStack_10c = 0;
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar7 = (long)&UNK_0f406920;
  if (plStack_1c0 != (long *)0x0) {
    lVar6 = *plStack_1c0;
    plStack_1c0 = plVar7;
    (**(code **)(lVar6 + 8))();
    plVar7 = plStack_1c0;
  }
  plStack_1c0 = plVar7;
  auStack_d0[0] = uStack_1c8;
  plStack_c8 = (long *)0x0;
  uStack_c0 = (long *)((ulong)uStack_c0._4_4_ << 0x20);
  uStack_b8 = 1;
  uStack_b0 = 0;
  puStack_a8 = &UNK_0cdf7880;
  puStack_a0 = &SUB_048b06d0;
  puStack_98 = &UNK_0cdf67e0;
  puStack_90 = &UNK_0dd0e890;
  puStack_88 = &UNK_0dd0eaa0;
  uStack_80 = 0;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  func_0x048b05a0(puStack_1d0,auStack_d0);
  plVar7 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      FUN_0412c2d0(plVar7);
    }
  }
  puVar2 = puStack_1d0;
  if ((DAT_0f550a20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550a20), iVar5 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_d0[0] = _DAT_0f550a0c;
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar6 = lStack_1b8;
  plVar1 = plStack_1c0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&UNK_0ef439d0;
  plStack_c8 = plVar7 + 3;
  plStack_1c0 = (long *)0x0;
  lStack_1b8 = 0;
  plVar7[3] = (long)plVar1;
  plVar7[4] = lVar6;
  plVar7[7] = lStack_1a0;
  plVar7[5] = lStack_1b0;
  plVar7[6] = lStack_1a8;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  plVar7[10] = uStack_188;
  plVar7[8] = CONCAT71(uStack_197,uStack_198);
  plVar7[9] = CONCAT71(uStack_18f,uStack_190);
  uStack_198 = 0;
  uStack_197 = 0;
  uStack_190 = 0;
  uStack_18f = 0;
  uStack_188 = 0;
  plVar7[0xb] = lStack_180;
  plVar7[0xc] = lStack_178;
  plVar7[0xd] = lStack_170;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  plVar7[0xe] = lStack_168;
  plVar7[0xf] = lStack_160;
  plVar7[0x10] = lStack_158;
  lStack_168 = 0;
  lStack_160 = 0;
  lStack_158 = 0;
  *(undefined4 *)(plVar7 + 0x11) = uStack_150;
  plVar7[0x12] = lStack_148;
  plVar7[0x13] = lStack_140;
  plVar7[0x14] = lStack_138;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  plVar7[0x17] = lStack_120;
  *(undefined4 *)(plVar7 + 0x15) = (undefined4)uStack_130;
  *(undefined4 *)((long)plVar7 + 0xac) = uStack_130._4_4_;
  *(undefined4 *)(plVar7 + 0x16) = (undefined4)uStack_128;
  *(undefined4 *)((long)plVar7 + 0xb4) = uStack_128._4_4_;
  uStack_130 = 0;
  uStack_128 = 0;
  lStack_120 = 0;
  *(ulong *)((long)plVar7 + 0xc5) = CONCAT17(uStack_10c,CONCAT43(uStack_110,uStack_114._1_3_));
  plVar7[0x18] = CONCAT44(uStack_114,CONCAT22(uStack_116,uStack_118));
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  uStack_c0 = plVar7;
  FUN_048afd20(puVar2,auStack_d0);
  plVar7 = uStack_c0;
  if (uStack_c0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_c0 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*uStack_c0 + 0x10))(uStack_c0);
      FUN_0412c2d0(plVar7);
    }
  }
  plVar7 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      FUN_0412c2d0(plVar7);
    }
  }
  lVar6 = *(long *)(puVar2 + 4);
  iVar5 = puVar2[7];
  if (iVar5 == 2) {
    piVar12 = *(int **)(*(long *)(lVar6 + 0x78) + 0x60);
    iVar5 = *piVar12;
    while (iVar5 != puVar2[6]) {
      piVar12 = piVar12 + 0x16;
      iVar5 = *piVar12;
    }
    for (; *(long *)(piVar12 + 0xc) != *(long *)(puVar2 + 2); piVar12 = *(int **)(piVar12 + 0xe)) {
    }
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 0) {
        *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) | (int)lStack_1d8 << 0x10;
      }
      goto LAB_0dce585d;
    }
    piVar12 = *(int **)(*(long *)(lVar6 + 0x78) + 0x48);
    iVar5 = *piVar12;
    while (iVar5 != puVar2[6]) {
      piVar12 = piVar12 + 0x1a;
      iVar5 = *piVar12;
    }
  }
  piVar12[4] = piVar12[4] | (int)lStack_1d8 << 0x10;
LAB_0dce585d:
  iVar5 = (int)uStack_e0;
  uVar3 = uStack_e0._4_4_;
  func_0x048b0bc0(&plStack_1c0);
  if (iVar5 == 4) {
    lVar6 = CONCAT44(uStack_104,uStack_108) + 0x18;
    uVar8 = func_0x0cd0c670(lVar6);
    lVar6 = func_0x048b1040(lVar6,uVar8,uVar3,1);
    if (lVar6 == 0) {
      lStack_1d8 = 0;
      puStack_1d0 = (undefined4 *)0x0;
      func_0x048b10d0(&lStack_1d8);
      lVar10 = *(long *)(lStack_1d8 + 0x38);
      lVar6 = lStack_1d8;
    }
    else {
      lVar10 = *(long *)(lVar6 + 0x38);
    }
    if (lVar10 != 0) goto LAB_0dce5965;
    lStack_1d8 = 0;
    puStack_1d0 = (undefined4 *)0x0;
    func_0x048b10d0(&lStack_1d8);
    lVar4 = lStack_1d8;
    while (lVar10 = lVar4, lVar10 != 0) {
LAB_0dce5965:
      lVar6 = lVar10;
      lVar4 = *(long *)(lVar10 + 0x38);
      if (*(long *)(lVar10 + 0x38) == 0) {
        lStack_1d8 = 0;
        puStack_1d0 = (undefined4 *)0x0;
        func_0x048b10d0(&lStack_1d8);
        lVar4 = lStack_1d8;
      }
    }
    lVar6 = *(long *)(lVar6 + 0x48);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  else {
    if (iVar5 != 1) {
      return;
    }
    lVar6 = CONCAT44(uStack_104,uStack_108) + 0x18;
    uVar8 = func_0x0cd0c670(lVar6);
    lVar6 = func_0x048b0c90(lVar6,uVar8,uVar3,1);
    if (lVar6 == 0) {
      lStack_1d8 = 0;
      puStack_1d0 = (undefined4 *)0x0;
      func_0x048b0d20(&lStack_1d8);
      lVar6 = lStack_1d8;
    }
    lVar6 = *(long *)(lVar6 + 0x58);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  puVar9[1] = 1;
  puVar9[2] = 0;
  *(undefined1 *)(puVar9 + 3) = 0xff;
  *puVar9 = &UNK_0f4e3cf0;
  puVar9[4] = 1;
  puVar9[5] = 0;
  puVar9[6] = 0;
  *(undefined1 *)(puVar9 + 7) = 0;
  plVar7 = *(long **)(lVar6 + 8);
  *(undefined8 **)(lVar6 + 8) = puVar9;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x28))();
  }
  return;
}


