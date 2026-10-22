/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8a830b0 (ELF vaddr 0x89830b0)
 * Label: caller-of-callee
 * Body:  [[08a830b0, 08a837b1] [08a837c0, 08a83cf1] [08a83d00, 08a83fa5]]
 * Ghidra: FUN_08a830b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08a830b0(long param_1)

{
  long *plVar1;
  long lVar2;
  long **pplVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  bool bVar10;
  undefined *puStack_1f0;
  long **pplStack_1e8;
  undefined4 uStack_1e0;
  long *plStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined1 uStack_1b0;
  undefined4 uStack_1af;
  undefined4 uStack_1ab;
  undefined4 uStack_1a7;
  undefined4 uStack_1a3;
  undefined4 uStack_19f;
  undefined1 uStack_19b;
  undefined2 uStack_19a;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined4 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined2 uStack_130;
  undefined2 uStack_12e;
  uint uStack_12c;
  uint uStack_128;
  undefined1 uStack_124;
  undefined4 auStack_120 [2];
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *aplStack_a0 [4];
  undefined8 uStack_80;
  long lStack_68;
  undefined1 auStack_60 [32];
  undefined8 uStack_40;
  char cStack_38;
  
  if ((DAT_0f5e9038 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5e9038), iVar4 != 0)) {
    func_0x08af5760();
    func_0x0410844d(&DAT_0f5e9038);
  }
  uVar7 = _DAT_0f5e9030;
  lVar8 = _DAT_0f5e9028;
  if ((DAT_0f5e90d0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5e90d0), iVar4 != 0)) {
    func_0x08af58a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e9050,0xf53dab8);
    func_0x0410844d(&DAT_0f5e90d0);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5e9050 + 4)) * 8);
  do {
    lVar2 = *plVar6;
    if (lVar2 == -1) goto LAB_08a83141;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5e9050 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_08a83141:
    puVar5 = &DAT_0f5e9050;
    iVar4 = iRam000000000f5e90b0;
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    iVar4 = *(int *)(puVar5 + 0x60);
  }
  if ((iVar4 == -0x2b3da790) && (lVar2 = *(long *)(puVar5 + 0x68), lVar2 != 0)) {
    bVar10 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar8 = lVar2 + 9;
    if (bVar10) {
      lVar8 = *(long *)(lVar2 + 0x18);
    }
    uVar7 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar10) {
      uVar7 = *(ulong *)(lVar2 + 0x10);
    }
  }
  func_0x08af7bd0(&lStack_68,param_1,lVar8,uVar7);
  if (cStack_38 != '\0') {
    return;
  }
  if ((DAT_0f5e9260 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5e9260), iVar4 != 0)) {
    func_0x08af9890();
    func_0x0410844d(&DAT_0f5e9260);
  }
  uVar7 = _DAT_0f5e9258;
  lVar8 = _DAT_0f5e9250;
  if ((DAT_0f5e9240 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5e9240), iVar4 != 0)) {
    func_0x08af87f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e91c0,0xf53dab8);
    func_0x0410844d(&DAT_0f5e9240);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5e91c0 + 4)) * 8);
  do {
    lVar2 = *plVar6;
    if (lVar2 == -1) goto LAB_08a83221;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5e91c0 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_08a83221:
    puVar5 = &DAT_0f5e91c0;
    iVar4 = iRam000000000f5e9220;
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    iVar4 = *(int *)(puVar5 + 0x60);
  }
  if ((iVar4 == -0x2b3da790) && (lVar2 = *(long *)(puVar5 + 0x68), lVar2 != 0)) {
    bVar10 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar8 = lVar2 + 9;
    if (bVar10) {
      lVar8 = *(long *)(lVar2 + 0x18);
    }
    uVar7 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar10) {
      uVar7 = *(ulong *)(lVar2 + 0x10);
    }
  }
  func_0x08af8d30(&lStack_a8,param_1,lVar8,uVar7);
  if ((DAT_0f5e9260 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5e9260), iVar4 != 0)) {
    func_0x08af9890();
    func_0x0410844d(&DAT_0f5e9260);
  }
  uStack_80 = 0x3f6737900000001;
  if ((DAT_0f5e9240 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5e9240), iVar4 != 0)) {
    func_0x08af87f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e91c0,0xf53dab8);
    func_0x0410844d(&DAT_0f5e9240);
  }
  pplStack_1e8 = (long **)(lStack_a8 + 0x18);
  plVar6 = (long *)(*(long *)(lStack_a8 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lStack_a8 + 0x20) - *(long *)(lStack_a8 + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f5e91c0 + 4)) * 8);
  do {
    lVar8 = *plVar6;
    if (lVar8 == -1) goto LAB_08a83310;
    plVar6 = (long *)(*(long *)(lStack_a8 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(lStack_a8 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5e91c0 + 4)
          );
  if (plVar6 == *(long **)(lStack_a8 + 0x38)) {
LAB_08a83310:
    puStack_1f0 = &DAT_0f5e91c0;
  }
  else {
    puStack_1f0 = (undefined *)plVar6[2];
  }
  FUN_0ed621a0(&puStack_1f0,uStack_80._4_4_);
  puStack_1f0 = (undefined *)CONCAT62(puStack_1f0._2_6_,1);
  uStack_1e0 = uStack_80._4_4_;
  plStack_1d8 = (long *)0x0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  uStack_1b0 = 0x28;
  uStack_1af = _DAT_011daeff;
  uStack_1ab = _UNK_011daf03;
  uStack_1a7 = _UNK_011daf07;
  uStack_1a3 = _UNK_011daf0b;
  uStack_19f = 0x49525520;
  uStack_19b = 0;
  lStack_198 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  uStack_168 = 0x3f600000;
  pplStack_1e8 = aplStack_a0;
  func_0x048afb10(&lStack_198,8);
  uStack_140 = 0;
  lStack_138 = 0;
  lStack_150 = 0;
  uStack_148 = 0;
  lStack_160 = 0;
  lStack_158 = 0;
  uStack_130 = 0xff00;
  uStack_12c = uStack_12c & 0xffffff00;
  uStack_128 = uStack_128 & 0xffffff00;
  uStack_124 = 0;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0ef44b00;
  if (plStack_1d8 != (long *)0x0) {
    lVar8 = *plStack_1d8;
    plStack_1d8 = plVar6;
    (**(code **)(lVar8 + 8))();
    plVar6 = plStack_1d8;
  }
  plStack_1d8 = plVar6;
  auStack_120[0] = uStack_1e0;
  plStack_118 = (long *)0x0;
  uStack_110 = (long *)((ulong)uStack_110._4_4_ << 0x20);
  uStack_108 = 1;
  uStack_100 = 0;
  puStack_f8 = &UNK_048b3f30;
  puStack_f0 = &SUB_048b06d0;
  puStack_e8 = &SUB_048b2190;
  puStack_e0 = &UNK_08af9910;
  puStack_d8 = &UNK_08af9ad0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  plStack_c0 = (long *)0x0;
  func_0x048b05a0(pplStack_1e8,auStack_120);
  plVar6 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      FUN_0412c2d0(plVar6);
    }
  }
  pplVar3 = pplStack_1e8;
  if ((DAT_0f550a20 == '\0') && (iVar4 = func_0x04108328(&DAT_0f550a20), iVar4 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_120[0] = _DAT_0f550a0c;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar8 = lStack_1d0;
  plVar1 = plStack_1d8;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef439d0;
  plStack_118 = plVar6 + 3;
  plStack_1d8 = (long *)0x0;
  lStack_1d0 = 0;
  plVar6[3] = (long)plVar1;
  plVar6[4] = lVar8;
  plVar6[7] = lStack_1b8;
  plVar6[5] = lStack_1c8;
  plVar6[6] = lStack_1c0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  plVar6[10] = CONCAT26(uStack_19a,CONCAT15(uStack_19b,CONCAT41(uStack_19f,uStack_1a3._3_1_)));
  plVar6[8] = CONCAT35((undefined3)uStack_1ab,CONCAT41(uStack_1af,uStack_1b0));
  plVar6[9] = CONCAT35((undefined3)uStack_1a3,CONCAT41(uStack_1a7,uStack_1ab._3_1_));
  uStack_1b0 = 0;
  uStack_1af = 0;
  uStack_1ab = 0;
  uStack_1a7 = 0;
  uStack_1a3 = 0;
  uStack_19f = 0;
  uStack_19b = 0;
  uStack_19a = 0;
  plVar6[0xb] = lStack_198;
  plVar6[0xc] = lStack_190;
  plVar6[0xd] = lStack_188;
  lStack_198 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  plVar6[0xe] = lStack_180;
  plVar6[0xf] = lStack_178;
  plVar6[0x10] = lStack_170;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  *(undefined4 *)(plVar6 + 0x11) = uStack_168;
  plVar6[0x12] = lStack_160;
  plVar6[0x13] = lStack_158;
  plVar6[0x14] = lStack_150;
  lStack_160 = 0;
  lStack_158 = 0;
  lStack_150 = 0;
  plVar6[0x17] = lStack_138;
  *(undefined4 *)(plVar6 + 0x15) = (undefined4)uStack_148;
  *(undefined4 *)((long)plVar6 + 0xac) = uStack_148._4_4_;
  *(undefined4 *)(plVar6 + 0x16) = (undefined4)uStack_140;
  *(undefined4 *)((long)plVar6 + 0xb4) = uStack_140._4_4_;
  uStack_148 = 0;
  uStack_140 = 0;
  lStack_138 = 0;
  *(ulong *)((long)plVar6 + 0xc5) = CONCAT17(uStack_124,CONCAT43(uStack_128,uStack_12c._1_3_));
  plVar6[0x18] = CONCAT44(uStack_12c,CONCAT22(uStack_12e,uStack_130));
  uStack_b8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_110 = plVar6;
  FUN_048afd20(pplVar3,auStack_120);
  plVar6 = uStack_110;
  if (uStack_110 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_110 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*uStack_110 + 0x10))(uStack_110);
      FUN_0412c2d0(plVar6);
    }
  }
  plVar6 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_b0 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      FUN_0412c2d0(plVar6);
    }
  }
  plVar6 = pplVar3[2];
  iVar4 = *(int *)((long)pplVar3 + 0x1c);
  if (iVar4 == 2) {
    piVar9 = *(int **)(plVar6[0xf] + 0x60);
    iVar4 = *piVar9;
    while (iVar4 != *(int *)(pplVar3 + 3)) {
      piVar9 = piVar9 + 0x16;
      iVar4 = *piVar9;
    }
    for (; *(long **)(piVar9 + 0xc) != pplVar3[1]; piVar9 = *(int **)(piVar9 + 0xe)) {
    }
LAB_08a837ca:
    piVar9[4] = piVar9[4] | (int)puStack_1f0 << 0x10;
  }
  else {
    if (iVar4 == 1) {
      piVar9 = *(int **)(plVar6[0xf] + 0x48);
      iVar4 = *piVar9;
      while (iVar4 != *(int *)(pplVar3 + 3)) {
        piVar9 = piVar9 + 0x1a;
        iVar4 = *piVar9;
      }
      goto LAB_08a837ca;
    }
    if (iVar4 == 0) {
      *(uint *)(plVar6 + 3) = *(uint *)(plVar6 + 3) | (int)puStack_1f0 << 0x10;
    }
  }
  func_0x048b0bc0(&plStack_1d8);
  if ((DAT_0f5e9038 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5e9038), iVar4 != 0)) {
    func_0x08af5760();
    func_0x0410844d(&DAT_0f5e9038);
  }
  uStack_40 = 0x4740cee600000001;
  if ((DAT_0f5e90d0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5e90d0), iVar4 != 0)) {
    func_0x08af58a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5e9050,0xf53dab8);
    func_0x0410844d(&DAT_0f5e90d0);
  }
  pplStack_1e8 = (long **)(lStack_68 + 0x18);
  plVar6 = (long *)(*(long *)(lStack_68 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lStack_68 + 0x20) - *(long *)(lStack_68 + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f5e9050 + 4)) * 8);
  do {
    lVar8 = *plVar6;
    if (lVar8 == -1) goto LAB_08a83860;
    plVar6 = (long *)(*(long *)(lStack_68 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(lStack_68 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5e9050 + 4)
          );
  if (plVar6 == *(long **)(lStack_68 + 0x38)) {
LAB_08a83860:
    puStack_1f0 = &DAT_0f5e9050;
  }
  else {
    puStack_1f0 = (undefined *)plVar6[2];
  }
  FUN_0ed621a0(&puStack_1f0,uStack_40._4_4_);
  puStack_1f0 = (undefined *)CONCAT62(puStack_1f0._2_6_,1);
  uStack_1e0 = uStack_40._4_4_;
  plStack_1d8 = (long *)0x0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  uStack_1b0 = 0x1e;
  uStack_1af = 0x20626557;
  uStack_1ab = 0x6b636f53;
  uStack_1a7 = 0x44207465;
  uStack_1a3 = 0x617461;
  lStack_198 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  uStack_168 = 0x3f600000;
  pplStack_1e8 = (long **)auStack_60;
  func_0x048afb10(&lStack_198,8);
  uStack_140 = 0;
  lStack_138 = 0;
  lStack_150 = 0;
  uStack_148 = 0;
  lStack_160 = 0;
  lStack_158 = 0;
  uStack_130 = 0xff00;
  uStack_12c = uStack_12c & 0xffffff00;
  uStack_128 = uStack_128 & 0xffffff00;
  uStack_124 = 0;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f13d818;
  if (plStack_1d8 != (long *)0x0) {
    lVar8 = *plStack_1d8;
    plStack_1d8 = plVar6;
    (**(code **)(lVar8 + 8))();
    plVar6 = plStack_1d8;
  }
  plStack_1d8 = plVar6;
  auStack_120[0] = uStack_1e0;
  plStack_118 = (long *)0x0;
  uStack_110 = (long *)((ulong)uStack_110 & 0xffffffff00000000);
  uStack_108 = 1;
  uStack_100 = 0;
  puStack_f8 = &UNK_08af9ed0;
  puStack_f0 = &SUB_048b06d0;
  puStack_e8 = &UNK_08af8730;
  puStack_e0 = &UNK_08af9f90;
  puStack_d8 = &UNK_08afa150;
  uStack_d0 = 0;
  uStack_c8 = 0;
  plStack_c0 = (long *)0x0;
  func_0x048b05a0(pplStack_1e8,auStack_120);
  plVar6 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      FUN_0412c2d0(plVar6);
    }
  }
  pplVar3 = pplStack_1e8;
  if ((DAT_0f550a20 == '\0') && (iVar4 = func_0x04108328(&DAT_0f550a20), iVar4 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_120[0] = _DAT_0f550a0c;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar8 = lStack_1d0;
  plVar1 = plStack_1d8;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef439d0;
  plStack_118 = plVar6 + 3;
  plStack_1d8 = (long *)0x0;
  lStack_1d0 = 0;
  plVar6[3] = (long)plVar1;
  plVar6[4] = lVar8;
  plVar6[7] = lStack_1b8;
  plVar6[5] = lStack_1c8;
  plVar6[6] = lStack_1c0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  plVar6[10] = CONCAT26(uStack_19a,CONCAT15(uStack_19b,CONCAT41(uStack_19f,uStack_1a3._3_1_)));
  plVar6[8] = CONCAT35((undefined3)uStack_1ab,CONCAT41(uStack_1af,uStack_1b0));
  plVar6[9] = CONCAT35((undefined3)uStack_1a3,CONCAT41(uStack_1a7,uStack_1ab._3_1_));
  uStack_1b0 = 0;
  uStack_1af = 0;
  uStack_1ab = 0;
  uStack_1a7 = 0;
  uStack_1a3 = 0;
  uStack_19f = 0;
  uStack_19b = 0;
  uStack_19a = 0;
  plVar6[0xb] = lStack_198;
  plVar6[0xc] = lStack_190;
  plVar6[0xd] = lStack_188;
  lStack_198 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  plVar6[0xe] = lStack_180;
  plVar6[0xf] = lStack_178;
  plVar6[0x10] = lStack_170;
  lStack_180 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  *(undefined4 *)(plVar6 + 0x11) = uStack_168;
  plVar6[0x12] = lStack_160;
  plVar6[0x13] = lStack_158;
  plVar6[0x14] = lStack_150;
  lStack_160 = 0;
  lStack_158 = 0;
  lStack_150 = 0;
  plVar6[0x17] = lStack_138;
  *(undefined4 *)(plVar6 + 0x15) = (undefined4)uStack_148;
  *(undefined4 *)((long)plVar6 + 0xac) = uStack_148._4_4_;
  *(undefined4 *)(plVar6 + 0x16) = (undefined4)uStack_140;
  *(undefined4 *)((long)plVar6 + 0xb4) = uStack_140._4_4_;
  uStack_148 = 0;
  uStack_140 = 0;
  lStack_138 = 0;
  *(ulong *)((long)plVar6 + 0xc5) = CONCAT17(uStack_124,CONCAT43(uStack_128,uStack_12c._1_3_));
  plVar6[0x18] = CONCAT44(uStack_12c,CONCAT22(uStack_12e,uStack_130));
  lStack_a8 = 0;
  aplStack_a0[0] = (long *)0x0;
  uStack_110 = plVar6;
  FUN_048afd20(pplVar3,auStack_120);
  plVar6 = uStack_110;
  if (uStack_110 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_110 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*uStack_110 + 0x10))(uStack_110);
      FUN_0412c2d0(plVar6);
    }
  }
  plVar6 = aplStack_a0[0];
  if (aplStack_a0[0] != (long *)0x0) {
    LOCK();
    plVar1 = aplStack_a0[0] + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*aplStack_a0[0] + 0x10))(aplStack_a0[0]);
      FUN_0412c2d0(plVar6);
    }
  }
  lVar8 = *(long *)((long)pplVar3 + 0x10);
  iVar4 = *(int *)((long)pplVar3 + 0x1c);
  if (iVar4 == 2) {
    piVar9 = *(int **)(*(long *)(lVar8 + 0x78) + 0x60);
    iVar4 = *piVar9;
    while (iVar4 != *(int *)((long)pplVar3 + 0x18)) {
      piVar9 = piVar9 + 0x16;
      iVar4 = *piVar9;
    }
    for (; *(long *)(piVar9 + 0xc) != *(long *)((long)pplVar3 + 8); piVar9 = *(int **)(piVar9 + 0xe)
        ) {
    }
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 == 0) {
        *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) | (int)puStack_1f0 << 0x10;
      }
      goto LAB_08a83d0d;
    }
    piVar9 = *(int **)(*(long *)(lVar8 + 0x78) + 0x48);
    iVar4 = *piVar9;
    while (iVar4 != *(int *)((long)pplVar3 + 0x18)) {
      piVar9 = piVar9 + 0x1a;
      iVar4 = *piVar9;
    }
  }
  piVar9[4] = piVar9[4] | (int)puStack_1f0 << 0x10;
LAB_08a83d0d:
  func_0x048b0bc0(&plStack_1d8);
  return;
}



/* ---- referenced strings ----
 * 0x11daeff  Websocket Server URI
 */
