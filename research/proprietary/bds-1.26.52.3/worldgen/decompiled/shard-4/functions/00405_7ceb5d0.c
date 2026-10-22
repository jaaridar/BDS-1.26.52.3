/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7deb5d0 (ELF vaddr 0x7ceb5d0)
 * Label: caller-of-callee
 * Body:  [[07deb5d0, 07debbb1] [07debbc0, 07debcfb]]
 * Ghidra: FUN_07deb5d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07deb5d0(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  bool bVar12;
  long lStack_1a8;
  undefined1 *puStack_1a0;
  undefined4 uStack_198;
  long *plStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
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
  
  lVar6 = func_0x07e9c930(param_1 + 0x18);
  if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
    bVar12 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar11 = lVar6 + 9;
    if (bVar12) {
      lVar11 = *(long *)(lVar6 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar12) {
      uVar10 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x07e9cdf0(&lStack_d8,param_1,lVar11,uVar10);
  }
  else {
    func_0x07e9cdf0(&lStack_d8,param_1,&UNK_0124295f,0x12);
  }
  if (cStack_a8 != '\0') {
    return;
  }
  if ((DAT_0f5bf010 == '\0') && (iVar5 = FUN_04108328(&DAT_0f5bf010), iVar5 != 0)) {
    func_0x07e9cb20(0xf5beff8);
    func_0x0410844d(&DAT_0f5bf010);
  }
  uStack_b0 = 0xd147f96a00000001;
  lVar6 = lStack_d8 + 0x18;
  lStack_1a8 = func_0x07e9c930(lVar6);
  puStack_1a0 = (undefined1 *)lVar6;
  func_0x0ed621a0(&lStack_1a8,uStack_b0._4_4_);
  puStack_1a0 = auStack_d0;
  lStack_1a8 = CONCAT62(lStack_1a8._2_6_,1);
  uStack_198 = uStack_b0._4_4_;
  plStack_190 = (long *)0x0;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  uStack_168 = CONCAT17(uStack_168._7_1_,0x65756c61560a);
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
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar7 = (long)&UNK_0ef46ce8;
  if (plStack_190 != (long *)0x0) {
    lVar6 = *plStack_190;
    plStack_190 = plVar7;
    (**(code **)(lVar6 + 8))();
    plVar7 = plStack_190;
  }
  plStack_190 = plVar7;
  auStack_a0[0] = uStack_198;
  plStack_98 = (long *)0x0;
  uStack_90 = (long *)((ulong)uStack_90._4_4_ << 0x20);
  uStack_88 = 1;
  uStack_80 = 0;
  puStack_78 = &UNK_0606fa40;
  puStack_70 = &SUB_048b06d0;
  puStack_68 = &SUB_0490cb20;
  puStack_60 = &UNK_07e9d6a0;
  puStack_58 = &UNK_07e9d800;
  uStack_50 = 0;
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  func_0x048b05a0(puStack_1a0,auStack_a0);
  plVar7 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      func_0x0412c2d0(plVar7);
    }
  }
  puVar2 = puStack_1a0;
  iVar5 = *(int *)(puStack_1a0 + 0x1c);
  if (iVar5 == 2) {
    piVar8 = *(int **)(*(long *)(*(long *)(puStack_1a0 + 0x10) + 0x78) + 0x60);
    iVar5 = *piVar8;
    while (iVar5 != *(int *)(puStack_1a0 + 0x18)) {
      piVar8 = piVar8 + 0x16;
      iVar5 = *piVar8;
    }
    lVar6 = *(long *)(piVar8 + 0xc);
    while (lVar6 != *(long *)(puStack_1a0 + 8)) {
      piVar8 = *(int **)(piVar8 + 0xe);
      lVar6 = *(long *)(piVar8 + 0xc);
    }
LAB_07deb8cf:
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else {
    if (iVar5 == 1) {
      piVar8 = *(int **)(*(long *)(*(long *)(puStack_1a0 + 0x10) + 0x78) + 0x48);
      iVar5 = *piVar8;
      while (iVar5 != *(int *)(puStack_1a0 + 0x18)) {
        piVar8 = piVar8 + 0x1a;
        iVar5 = *piVar8;
      }
      goto LAB_07deb8cf;
    }
    if (iVar5 == 0) {
      *(uint *)(*(long *)(puStack_1a0 + 0x10) + 0x18) =
           *(uint *)(*(long *)(puStack_1a0 + 0x10) + 0x18) | 0x40000;
    }
  }
  if ((DAT_0f550a20 == '\0') && (iVar5 = FUN_04108328(&DAT_0f550a20), iVar5 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_a0[0] = _DAT_0f550a0c;
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar6 = lStack_188;
  plVar1 = plStack_190;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&UNK_0ef439d0;
  plStack_98 = plVar7 + 3;
  plStack_190 = (long *)0x0;
  lStack_188 = 0;
  plVar7[3] = (long)plVar1;
  plVar7[4] = lVar6;
  plVar7[7] = lStack_170;
  plVar7[5] = lStack_180;
  plVar7[6] = lStack_178;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  plVar7[10] = lStack_158;
  plVar7[8] = uStack_168;
  plVar7[9] = lStack_160;
  uStack_168 = 0;
  lStack_160 = 0;
  lStack_158 = 0;
  plVar7[0xb] = lStack_150;
  plVar7[0xc] = lStack_148;
  plVar7[0xd] = lStack_140;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  plVar7[0xe] = lStack_138;
  plVar7[0xf] = lStack_130;
  plVar7[0x10] = lStack_128;
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  *(undefined4 *)(plVar7 + 0x11) = uStack_120;
  plVar7[0x12] = lStack_118;
  plVar7[0x13] = lStack_110;
  plVar7[0x14] = lStack_108;
  lStack_118 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  plVar7[0x17] = lStack_f0;
  *(undefined4 *)(plVar7 + 0x15) = (undefined4)uStack_100;
  *(undefined4 *)((long)plVar7 + 0xac) = uStack_100._4_4_;
  *(undefined4 *)(plVar7 + 0x16) = (undefined4)uStack_f8;
  *(undefined4 *)((long)plVar7 + 0xb4) = uStack_f8._4_4_;
  uStack_100 = 0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  *(ulong *)((long)plVar7 + 0xc5) = CONCAT17(uStack_dc,CONCAT43(uStack_e0,uStack_e4._1_3_));
  plVar7[0x18] = CONCAT44(uStack_e4,CONCAT22(uStack_e6,uStack_e8));
  uStack_38 = 0;
  plStack_30 = (long *)0x0;
  uStack_90 = plVar7;
  func_0x048afd20(puVar2,auStack_a0);
  plVar7 = uStack_90;
  if (uStack_90 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_90 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*uStack_90 + 0x10))(uStack_90);
      func_0x0412c2d0(plVar7);
    }
  }
  plVar7 = plStack_30;
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      func_0x0412c2d0(plVar7);
    }
  }
  lVar6 = *(long *)(puVar2 + 0x10);
  iVar5 = *(int *)(puVar2 + 0x1c);
  if (iVar5 == 2) {
    piVar8 = *(int **)(*(long *)(lVar6 + 0x78) + 0x60);
    iVar5 = *piVar8;
    while (iVar5 != *(int *)(puVar2 + 0x18)) {
      piVar8 = piVar8 + 0x16;
      iVar5 = *piVar8;
    }
    for (; *(long *)(piVar8 + 0xc) != *(long *)(puVar2 + 8); piVar8 = *(int **)(piVar8 + 0xe)) {
    }
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 0) {
        *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) | (int)lStack_1a8 << 0x10;
      }
      goto LAB_07debbcd;
    }
    piVar8 = *(int **)(*(long *)(lVar6 + 0x78) + 0x48);
    iVar5 = *piVar8;
    while (iVar5 != *(int *)(puVar2 + 0x18)) {
      piVar8 = piVar8 + 0x1a;
      iVar5 = *piVar8;
    }
  }
  piVar8[4] = piVar8[4] | (int)lStack_1a8 << 0x10;
LAB_07debbcd:
  iVar5 = (int)uStack_b0;
  uVar3 = uStack_b0._4_4_;
  func_0x048b0bc0(&plStack_190);
  uVar9 = func_0x07e9c930(lStack_d8 + 0x18);
  if ((1 < iVar5 - 1U) &&
     (cVar4 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_011a2cef),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lStack_1a8 = FUN_048b0c90(lStack_d8 + 0x18,uVar9,uVar3,1);
  if (lStack_1a8 == 0) {
    lStack_1a8 = 0;
    puStack_1a0 = (undefined1 *)0x0;
    func_0x048b0d20(&lStack_1a8);
  }
  *(undefined1 *)(*(long *)(lStack_1a8 + 0x58) + 0xa8) = 1;
  return;
}


