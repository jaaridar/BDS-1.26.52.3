/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x807b6e0 (ELF vaddr 0x7f7b6e0)
 * Label: caller-of-callee
 * Body:  [[0807b6e0, 0807bdd1] [0807bde0, 0807c05b]]
 * Ghidra: FUN_0807b6e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0807b6e0(long param_1)

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
  int *piVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
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
  undefined2 uStack_15f;
  undefined1 uStack_15d;
  undefined4 uStack_15c;
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
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  
  func_0x079dc8c0();
  if ((DAT_0f5c78a8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5c78a8), iVar6 != 0)) {
    func_0x081022b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c7828,0xf53dab8);
    func_0x0410844d(&DAT_0f5c78a8);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5c7828 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_0807b760;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5c7828 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_0807b760:
    puVar8 = &DAT_0f5c7828;
    if (iRam000000000f5c7888 != -0x2b3da790) goto LAB_0807b7cd;
LAB_0807b78b:
    lVar2 = *(long *)(puVar8 + 0x68);
    if (lVar2 == 0) goto LAB_0807b7cd;
    bVar13 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar12 = lVar2 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar2 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x081046e0(&lStack_d8,param_1,lVar12,uVar11);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_0807b78b;
LAB_0807b7cd:
    func_0x081046e0(&lStack_d8,param_1,&UNK_012c373b,0x1a);
  }
  if (cStack_a8 != '\0') {
    return;
  }
  if ((DAT_0f5c7810 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5c7810), iVar6 != 0)) {
    func_0x08102170();
    func_0x0410844d(&DAT_0f5c7810);
  }
  lVar2 = lStack_d8;
  uStack_b0 = 0x8520a21000000001;
  if ((DAT_0f5c78a8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5c78a8), iVar6 != 0)) {
    func_0x081022b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c7828,0xf53dab8);
    func_0x0410844d(&DAT_0f5c78a8);
  }
  puStack_1a0 = (undefined1 *)(lVar2 + 0x18);
  plVar9 = (long *)(*(long *)(lVar2 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                           1U & *(uint *)(_DAT_0f5c7828 + 4)) * 8);
  do {
    lVar12 = *plVar9;
    if (lVar12 == -1) goto LAB_0807b890;
    plVar9 = (long *)(*(long *)(lVar2 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f5c7828 + 4));
  if (plVar9 == *(long **)(lVar2 + 0x38)) {
LAB_0807b890:
    puStack_1a8 = &DAT_0f5c7828;
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
  uStack_168 = 0x14;
  uStack_167 = 0x75636966666944;
  uStack_160 = 0x6c;
  uStack_15f = 0x7974;
  uStack_15d = 0;
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
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar9 = (long)&UNK_0f012080;
  if (plStack_190 != (long *)0x0) {
    lVar2 = *plStack_190;
    plStack_190 = plVar9;
    (**(code **)(lVar2 + 8))();
    plVar9 = plStack_190;
  }
  plStack_190 = plVar9;
  auStack_a0[0] = uStack_198;
  plStack_98 = (long *)0x0;
  uStack_90 = (long *)((ulong)uStack_90._4_4_ << 0x20);
  uStack_88 = 1;
  uStack_80 = 0;
  puStack_78 = &UNK_077d4a20;
  puStack_70 = &SUB_048b06d0;
  puStack_68 = &UNK_05dd3990;
  puStack_60 = &UNK_081051f0;
  puStack_58 = &UNK_08105350;
  uStack_50 = 0;
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  func_0x048b05a0(puStack_1a0,auStack_a0);
  plVar9 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      func_0x0412c2d0(plVar9);
    }
  }
  puVar3 = puStack_1a0;
  iVar6 = *(int *)(puStack_1a0 + 0x1c);
  if (iVar6 == 2) {
    piVar10 = *(int **)(*(long *)(*(long *)(puStack_1a0 + 0x10) + 0x78) + 0x60);
    iVar6 = *piVar10;
    while (iVar6 != *(int *)(puStack_1a0 + 0x18)) {
      piVar10 = piVar10 + 0x16;
      iVar6 = *piVar10;
    }
    lVar2 = *(long *)(piVar10 + 0xc);
    while (lVar2 != *(long *)(puStack_1a0 + 8)) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar2 = *(long *)(piVar10 + 0xc);
    }
LAB_0807baef:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else {
    if (iVar6 == 1) {
      piVar10 = *(int **)(*(long *)(*(long *)(puStack_1a0 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar10;
      while (iVar6 != *(int *)(puStack_1a0 + 0x18)) {
        piVar10 = piVar10 + 0x1a;
        iVar6 = *piVar10;
      }
      goto LAB_0807baef;
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
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar2 = lStack_188;
  plVar1 = plStack_190;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef439d0;
  plStack_98 = plVar9 + 3;
  plStack_190 = (long *)0x0;
  lStack_188 = 0;
  plVar9[3] = (long)plVar1;
  plVar9[4] = lVar2;
  plVar9[7] = lStack_170;
  plVar9[5] = lStack_180;
  plVar9[6] = lStack_178;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  plVar9[10] = lStack_158;
  plVar9[8] = CONCAT71(uStack_167,uStack_168);
  plVar9[9] = CONCAT44(uStack_15c,CONCAT13(uStack_15d,CONCAT21(uStack_15f,uStack_160)));
  uStack_168 = 0;
  uStack_167 = 0;
  uStack_160 = 0;
  uStack_15f = 0;
  uStack_15d = 0;
  uStack_15c = 0;
  lStack_158 = 0;
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
  func_0x048afd20(puVar3,auStack_a0);
  plVar9 = uStack_90;
  if (uStack_90 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_90 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*uStack_90 + 0x10))(uStack_90);
      func_0x0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_30;
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      func_0x0412c2d0(plVar9);
    }
  }
  lVar2 = *(long *)(puVar3 + 0x10);
  iVar6 = *(int *)(puVar3 + 0x1c);
  if (iVar6 == 2) {
    piVar10 = *(int **)(*(long *)(lVar2 + 0x78) + 0x60);
    iVar6 = *piVar10;
    while (iVar6 != *(int *)(puVar3 + 0x18)) {
      piVar10 = piVar10 + 0x16;
      iVar6 = *piVar10;
    }
    for (; *(long *)(piVar10 + 0xc) != *(long *)(puVar3 + 8); piVar10 = *(int **)(piVar10 + 0xe)) {
    }
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 == 0) {
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | (int)puStack_1a8 << 0x10;
      }
      goto LAB_0807bded;
    }
    piVar10 = *(int **)(*(long *)(lVar2 + 0x78) + 0x48);
    iVar6 = *piVar10;
    while (iVar6 != *(int *)(puVar3 + 0x18)) {
      piVar10 = piVar10 + 0x1a;
      iVar6 = *piVar10;
    }
  }
  piVar10[4] = piVar10[4] | (int)puStack_1a8 << 0x10;
LAB_0807bded:
  iVar6 = (int)uStack_b0;
  uVar4 = uStack_b0._4_4_;
  FUN_048b0bc0(&plStack_190);
  if ((DAT_0f5c78a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c78a8), iVar7 != 0)) {
    func_0x081022b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c7828,0xf53dab8);
    func_0x0410844d(&DAT_0f5c78a8);
  }
  plVar9 = (long *)(*(long *)(lStack_d8 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lStack_d8 + 0x20) - *(long *)(lStack_d8 + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f5c7828 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_0807be70;
    plVar9 = (long *)(*(long *)(lStack_d8 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lStack_d8 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5c7828 + 4)
          );
  if (plVar9 == *(long **)(lStack_d8 + 0x38)) {
LAB_0807be70:
    puVar8 = &DAT_0f5c7828;
  }
  else {
    puVar8 = (undefined *)plVar9[2];
  }
  if ((1 < iVar6 - 1U) &&
     (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_013103b0),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puStack_1a8 = (undefined *)func_0x048b0c90(lStack_d8 + 0x18,puVar8,uVar4,1);
  if (puStack_1a8 == (undefined *)0x0) {
    puStack_1a8 = (undefined *)0x0;
    puStack_1a0 = (undefined1 *)0x0;
    func_0x048b0d20(&puStack_1a8);
  }
  *(undefined1 *)(*(long *)(puStack_1a8 + 0x58) + 0xa8) = 1;
  return;
}


