/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7f19420 (ELF vaddr 0x7e19420)
 * Label: caller-of-callee
 * Body:  [[07f19420, 07f19b01] [07f19b10, 07f19c6f]]
 * Ghidra: FUN_07f19420
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07f19420(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  undefined *puStack_1a0;
  undefined1 *puStack_198;
  undefined4 uStack_190;
  long *plStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 uStack_160;
  undefined5 uStack_15f;
  undefined2 uStack_15a;
  undefined1 uStack_158;
  undefined5 uStack_157;
  undefined1 uStack_152;
  undefined1 uStack_151;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined4 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined2 uStack_e0;
  undefined2 uStack_de;
  uint uStack_dc;
  uint uStack_d8;
  undefined1 uStack_d4;
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
  long lStack_50;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  char cStack_20;
  
  func_0x07cab540();
  if ((DAT_0f5c5018 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5c5018), iVar4 != 0)) {
    func_0x0802b610();
    FUN_0410844d(&DAT_0f5c5018);
  }
  uVar8 = _DAT_0f5c5010;
  lVar9 = _DAT_0f5c5008;
  if ((DAT_0f5c50b0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5c50b0), iVar4 != 0)) {
    func_0x0802b750();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c5030,0xf53dab8);
    FUN_0410844d(&DAT_0f5c50b0);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5c5030 + 4)) * 8);
  do {
    lVar2 = *plVar6;
    if (lVar2 == -1) goto LAB_07f194b1;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5c5030 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_07f194b1:
    puVar5 = &DAT_0f5c5030;
    iVar4 = iRam000000000f5c5090;
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    iVar4 = *(int *)(puVar5 + 0x60);
  }
  if ((iVar4 == -0x2b3da790) && (lVar2 = *(long *)(puVar5 + 0x68), lVar2 != 0)) {
    bVar10 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar9 = lVar2 + 9;
    if (bVar10) {
      lVar9 = *(long *)(lVar2 + 0x18);
    }
    uVar8 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar10) {
      uVar8 = *(ulong *)(lVar2 + 0x10);
    }
  }
  func_0x0802db70(&lStack_50,param_1,lVar9,uVar8);
  if (cStack_20 != '\0') {
    return;
  }
  if ((DAT_0f5c5018 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5c5018), iVar4 != 0)) {
    func_0x0802b610();
    FUN_0410844d(&DAT_0f5c5018);
  }
  uStack_28 = 0x1017b8e000000001;
  if ((DAT_0f5c50b0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5c50b0), iVar4 != 0)) {
    func_0x0802b750();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c5030,0xf53dab8);
    FUN_0410844d(&DAT_0f5c50b0);
  }
  puStack_198 = (undefined1 *)(lStack_50 + 0x18);
  plVar6 = (long *)(*(long *)(lStack_50 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lStack_50 + 0x20) - *(long *)(lStack_50 + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f5c5030 + 4)) * 8);
  do {
    lVar9 = *plVar6;
    if (lVar9 == -1) goto LAB_07f195b0;
    plVar6 = (long *)(*(long *)(lStack_50 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(lStack_50 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5c5030 + 4)
          );
  if (plVar6 == *(long **)(lStack_50 + 0x38)) {
LAB_07f195b0:
    puStack_1a0 = &DAT_0f5c5030;
  }
  else {
    puStack_1a0 = (undefined *)plVar6[2];
  }
  func_0x0ed621a0(&puStack_1a0,uStack_28._4_4_);
  puStack_1a0 = (undefined *)CONCAT62(puStack_1a0._2_6_,1);
  uStack_190 = uStack_28._4_4_;
  plStack_188 = (long *)0x0;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  lStack_168 = 0;
  uStack_160 = 0x1a;
  uStack_15f = 0x65706f7250;
  uStack_15a = 0x7472;
  uStack_158 = 0x79;
  uStack_157 = 0x6174614420;
  uStack_152 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  lStack_120 = 0;
  uStack_118 = 0x3f600000;
  puStack_198 = auStack_48;
  FUN_048afb10(&lStack_148,8);
  uStack_f0 = 0;
  lStack_e8 = 0;
  lStack_100 = 0;
  uStack_f8 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  uStack_e0 = 0xff00;
  uStack_dc = uStack_dc & 0xffffff00;
  uStack_d8 = uStack_d8 & 0xffffff00;
  uStack_d4 = 0;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f0f7d80;
  if (plStack_188 != (long *)0x0) {
    lVar9 = *plStack_188;
    plStack_188 = plVar6;
    (**(code **)(lVar9 + 8))();
    plVar6 = plStack_188;
  }
  plStack_188 = plVar6;
  auStack_d0[0] = uStack_190;
  plStack_c8 = (long *)0x0;
  uStack_c0 = (long *)((ulong)uStack_c0._4_4_ << 0x20);
  uStack_b8 = 1;
  uStack_b0 = 0;
  puStack_a8 = &UNK_077e83c0;
  puStack_a0 = &SUB_048b06d0;
  puStack_98 = &UNK_077e83d0;
  puStack_90 = &UNK_0802e6d0;
  puStack_88 = &UNK_0802e830;
  uStack_80 = 0;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  func_0x048b05a0(puStack_198,auStack_d0);
  plVar6 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      func_0x0412c2d0(plVar6);
    }
  }
  puVar3 = puStack_198;
  iVar4 = *(int *)(puStack_198 + 0x1c);
  if (iVar4 == 2) {
    piVar7 = *(int **)(*(long *)(*(long *)(puStack_198 + 0x10) + 0x78) + 0x60);
    iVar4 = *piVar7;
    while (iVar4 != *(int *)(puStack_198 + 0x18)) {
      piVar7 = piVar7 + 0x16;
      iVar4 = *piVar7;
    }
    lVar9 = *(long *)(piVar7 + 0xc);
    while (lVar9 != *(long *)(puStack_198 + 8)) {
      piVar7 = *(int **)(piVar7 + 0xe);
      lVar9 = *(long *)(piVar7 + 0xc);
    }
LAB_07f1981f:
    *(byte *)((long)piVar7 + 0x12) = *(byte *)((long)piVar7 + 0x12) | 4;
  }
  else {
    if (iVar4 == 1) {
      piVar7 = *(int **)(*(long *)(*(long *)(puStack_198 + 0x10) + 0x78) + 0x48);
      iVar4 = *piVar7;
      while (iVar4 != *(int *)(puStack_198 + 0x18)) {
        piVar7 = piVar7 + 0x1a;
        iVar4 = *piVar7;
      }
      goto LAB_07f1981f;
    }
    if (iVar4 == 0) {
      *(uint *)(*(long *)(puStack_198 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_198 + 0x10) + 0x18) | 0x40000;
    }
  }
  if ((DAT_0f550a20 == '\0') && (iVar4 = func_0x04108328(&DAT_0f550a20), iVar4 != 0)) {
    func_0x048b0af0(0xf550a08);
    FUN_0410844d(&DAT_0f550a20);
  }
  auStack_d0[0] = _DAT_0f550a0c;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar9 = lStack_180;
  plVar1 = plStack_188;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef439d0;
  plStack_c8 = plVar6 + 3;
  plStack_188 = (long *)0x0;
  lStack_180 = 0;
  plVar6[3] = (long)plVar1;
  plVar6[4] = lVar9;
  plVar6[7] = lStack_168;
  plVar6[5] = lStack_178;
  plVar6[6] = lStack_170;
  lStack_178 = 0;
  lStack_170 = 0;
  lStack_168 = 0;
  plVar6[10] = lStack_150;
  plVar6[8] = CONCAT26(uStack_15a,CONCAT51(uStack_15f,uStack_160));
  plVar6[9] = CONCAT17(uStack_151,CONCAT16(uStack_152,CONCAT51(uStack_157,uStack_158)));
  uStack_160 = 0;
  uStack_15f = 0;
  uStack_15a = 0;
  uStack_158 = 0;
  uStack_157 = 0;
  uStack_152 = 0;
  uStack_151 = 0;
  lStack_150 = 0;
  plVar6[0xb] = lStack_148;
  plVar6[0xc] = lStack_140;
  plVar6[0xd] = lStack_138;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  plVar6[0xe] = lStack_130;
  plVar6[0xf] = lStack_128;
  plVar6[0x10] = lStack_120;
  lStack_130 = 0;
  lStack_128 = 0;
  lStack_120 = 0;
  *(undefined4 *)(plVar6 + 0x11) = uStack_118;
  plVar6[0x12] = lStack_110;
  plVar6[0x13] = lStack_108;
  plVar6[0x14] = lStack_100;
  lStack_110 = 0;
  lStack_108 = 0;
  lStack_100 = 0;
  plVar6[0x17] = lStack_e8;
  *(undefined4 *)(plVar6 + 0x15) = (undefined4)uStack_f8;
  *(undefined4 *)((long)plVar6 + 0xac) = uStack_f8._4_4_;
  *(undefined4 *)(plVar6 + 0x16) = (undefined4)uStack_f0;
  *(undefined4 *)((long)plVar6 + 0xb4) = uStack_f0._4_4_;
  uStack_f8 = 0;
  uStack_f0 = 0;
  lStack_e8 = 0;
  *(ulong *)((long)plVar6 + 0xc5) = CONCAT17(uStack_d4,CONCAT43(uStack_d8,uStack_dc._1_3_));
  plVar6[0x18] = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  uStack_c0 = plVar6;
  func_0x048afd20(puVar3,auStack_d0);
  plVar6 = uStack_c0;
  if (uStack_c0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_c0 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_c0 + 0x10))(uStack_c0);
      func_0x0412c2d0(plVar6);
    }
  }
  plVar6 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      func_0x0412c2d0(plVar6);
    }
  }
  lVar9 = *(long *)(puVar3 + 0x10);
  iVar4 = *(int *)(puVar3 + 0x1c);
  if (iVar4 == 2) {
    piVar7 = *(int **)(*(long *)(lVar9 + 0x78) + 0x60);
    iVar4 = *piVar7;
    while (iVar4 != *(int *)(puVar3 + 0x18)) {
      piVar7 = piVar7 + 0x16;
      iVar4 = *piVar7;
    }
    for (; *(long *)(piVar7 + 0xc) != *(long *)(puVar3 + 8); piVar7 = *(int **)(piVar7 + 0xe)) {
    }
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 == 0) {
        *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) | (int)puStack_1a0 << 0x10;
      }
      goto LAB_07f19b1d;
    }
    piVar7 = *(int **)(*(long *)(lVar9 + 0x78) + 0x48);
    iVar4 = *piVar7;
    while (iVar4 != *(int *)(puVar3 + 0x18)) {
      piVar7 = piVar7 + 0x1a;
      iVar4 = *piVar7;
    }
  }
  piVar7[4] = piVar7[4] | (int)puStack_1a0 << 0x10;
LAB_07f19b1d:
  func_0x048b0bc0(&plStack_188);
  return;
}


