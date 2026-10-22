/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8082f80 (ELF vaddr 0x7f82f80)
 * Label: caller-of-callee
 * Body:  [[08082f80, 080835b1] [080835c0, 0808383b]]
 * Ghidra: FUN_08082f80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08082f80(long param_1)

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
  ulong uVar10;
  long lVar11;
  int *piVar12;
  bool bVar13;
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
  undefined1 *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  
  if ((DAT_0f5c7bb8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5c7bb8), iVar6 != 0)) {
    func_0x0810b180();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c7b38,0xf53dab8);
    FUN_0410844d(&DAT_0f5c7bb8);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5c7b38 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_08082ff0;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5c7b38 + 4));
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_08082ff0:
    puVar8 = &DAT_0f5c7b38;
    if (iRam000000000f5c7b98 != -0x2b3da790) goto LAB_0808305d;
LAB_0808301b:
    lVar2 = *(long *)(puVar8 + 0x68);
    if (lVar2 == 0) goto LAB_0808305d;
    bVar13 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar11 = lVar2 + 9;
    if (bVar13) {
      lVar11 = *(long *)(lVar2 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar13) {
      uVar10 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x0810d2e0(&lStack_d8,param_1,lVar11,uVar10);
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_0808301b;
LAB_0808305d:
    func_0x0810d2e0(&lStack_d8,param_1,&UNK_011be0ff,0x16);
  }
  if (cStack_a8 != '\0') {
    return;
  }
  if ((DAT_0f5c7b20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5c7b20), iVar6 != 0)) {
    func_0x0810b040();
    FUN_0410844d(&DAT_0f5c7b20);
  }
  lVar2 = lStack_d8;
  uStack_b0 = 0x986145af00000001;
  if ((DAT_0f5c7bb8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5c7bb8), iVar6 != 0)) {
    func_0x0810b180();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c7b38,0xf53dab8);
    FUN_0410844d(&DAT_0f5c7bb8);
  }
  puStack_1a0 = (undefined1 *)(lVar2 + 0x18);
  plVar9 = (long *)(*(long *)(lVar2 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3) -
                           1U & *(uint *)(_DAT_0f5c7b38 + 4)) * 8);
  do {
    lVar11 = *plVar9;
    if (lVar11 == -1) goto LAB_08083120;
    plVar9 = (long *)(*(long *)(lVar2 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f5c7b38 + 4));
  if (plVar9 == *(long **)(lVar2 + 0x38)) {
LAB_08083120:
    puStack_1a8 = &DAT_0f5c7b38;
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
  lStack_168 = 0x68746c6165480c;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  uStack_120 = 0x3f600000;
  puStack_1a0 = auStack_d0;
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
  *plVar9 = (long)&UNK_0ef46ce8;
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
  puStack_78 = &UNK_0490ce30;
  puStack_70 = &SUB_048b06d0;
  puStack_68 = &SUB_0490cb20;
  puStack_60 = &UNK_0810ddf0;
  puStack_58 = &UNK_0810df50;
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
  if ((DAT_0f550a20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550a20), iVar6 != 0)) {
    func_0x048b0af0(0xf550a08);
    FUN_0410844d(&DAT_0f550a20);
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
  plVar9[8] = lStack_168;
  plVar9[9] = lStack_160;
  lStack_168 = 0;
  lStack_160 = 0;
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
    piVar12 = *(int **)(*(long *)(lVar2 + 0x78) + 0x60);
    iVar6 = *piVar12;
    while (iVar6 != *(int *)(puVar3 + 0x18)) {
      piVar12 = piVar12 + 0x16;
      iVar6 = *piVar12;
    }
    for (; *(long *)(piVar12 + 0xc) != *(long *)(puVar3 + 8); piVar12 = *(int **)(piVar12 + 0xe)) {
    }
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 == 0) {
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | (int)puStack_1a8 << 0x10;
      }
      goto LAB_080835cd;
    }
    piVar12 = *(int **)(*(long *)(lVar2 + 0x78) + 0x48);
    iVar6 = *piVar12;
    while (iVar6 != *(int *)(puVar3 + 0x18)) {
      piVar12 = piVar12 + 0x1a;
      iVar6 = *piVar12;
    }
  }
  piVar12[4] = piVar12[4] | (int)puStack_1a8 << 0x10;
LAB_080835cd:
  iVar6 = (int)uStack_b0;
  uVar4 = uStack_b0._4_4_;
  func_0x048b0bc0(&plStack_190);
  if ((DAT_0f5c7bb8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f5c7bb8), iVar7 != 0)) {
    func_0x0810b180();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c7b38,0xf53dab8);
    FUN_0410844d(&DAT_0f5c7bb8);
  }
  plVar9 = (long *)(*(long *)(lStack_d8 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lStack_d8 + 0x20) - *(long *)(lStack_d8 + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f5c7b38 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_08083650;
    plVar9 = (long *)(*(long *)(lStack_d8 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lStack_d8 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5c7b38 + 4)
          );
  if (plVar9 == *(long **)(lStack_d8 + 0x38)) {
LAB_08083650:
    puVar8 = &DAT_0f5c7b38;
  }
  else {
    puVar8 = (undefined *)plVar9[2];
  }
  if ((1 < iVar6 - 1U) &&
     (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_0125d88a),
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


