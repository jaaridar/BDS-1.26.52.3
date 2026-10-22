/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdcee6c0 (ELF vaddr 0xdbee6c0)
 * Label: caller-of-callee
 * Body:  [[0dcee6c0, 0dceed01] [0dceed10, 0dceedf4]]
 * Ghidra: FUN_0dcee6c0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dcee6c0(long param_1)

{
  long *plVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  bool bVar9;
  byte bStack_210;
  undefined7 uStack_20f;
  ulong uStack_208;
  undefined7 *puStack_200;
  undefined7 *puStack_1f8;
  undefined4 *puStack_1f0;
  undefined *puStack_1e8;
  long *plStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined4 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined2 uStack_138;
  undefined2 uStack_136;
  uint uStack_134;
  uint uStack_130;
  undefined1 uStack_12c;
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
  byte bStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char cStack_20;
  
  func_0x0dea0e40();
  lVar4 = func_0x0cd14470(param_1 + 0x18);
  if ((*(int *)(lVar4 + 0x60) == -0x2b3da790) && (lVar4 = *(long *)(lVar4 + 0x68), lVar4 != 0)) {
    bVar9 = (*(byte *)(lVar4 + 8) & 1) != 0;
    lVar7 = lVar4 + 9;
    if (bVar9) {
      lVar7 = *(long *)(lVar4 + 0x18);
    }
    uVar6 = (ulong)(*(byte *)(lVar4 + 8) >> 1);
    if (bVar9) {
      uVar6 = *(ulong *)(lVar4 + 0x10);
    }
    func_0x0dd4ef60(&uStack_50,param_1,lVar7,uVar6);
  }
  else {
    func_0x0dd4ef60(&uStack_50,param_1,&UNK_0131f064,7);
  }
  if (cStack_20 != '\0') {
    return;
  }
  puStack_1f8 = (undefined7 *)&UNK_013effba;
  puStack_1e8 = &UNK_011ff9a5;
  func_0x0470d9a0(&bStack_210,&UNK_011b1c53,0x54,0xcc,&puStack_1f8);
  puStack_1f8 = &uStack_20f;
  puStack_1f0 = (undefined4 *)(ulong)(bStack_210 >> 1);
  if ((bStack_210 & 1) != 0) {
    puStack_1f0 = (undefined4 *)uStack_208;
    puStack_1f8 = puStack_200;
  }
  func_0x0470d9a0(&bStack_a0,&UNK_0147253b,0x1a7,0xd,&puStack_1f8);
  uStack_88 = uStack_50;
  uStack_84 = uStack_4c;
  uStack_80 = uStack_48;
  uStack_7c = uStack_44;
  uStack_78 = uStack_40;
  uStack_74 = uStack_3c;
  uStack_70 = uStack_38;
  uStack_6c = uStack_34;
  uStack_68 = uStack_30;
  uStack_64 = uStack_2c;
  if ((DAT_0f7011e8 == '\0') && (iVar3 = func_0x04108328(&DAT_0f7011e8), iVar3 != 0)) {
    func_0x0cd14400(0xf7011d0);
    FUN_0410844d(&DAT_0f7011e8);
  }
  uStack_60 = 0x9dc3d92600000001;
  lVar4 = CONCAT44(uStack_84,uStack_88) + 0x18;
  puStack_1f8 = (undefined7 *)func_0x0cd14470(lVar4);
  puStack_1f0 = (undefined4 *)lVar4;
  func_0x0ed621a0(&puStack_1f8,uStack_60._4_4_);
  puStack_1f0 = &uStack_80;
  puStack_1f8 = (undefined7 *)CONCAT62(puStack_1f8._2_6_,1);
  puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,uStack_60._4_4_);
  plStack_1e0 = (long *)0x0;
  lStack_1d8 = 0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  uStack_1b8 = CONCAT17(uStack_1b8._7_1_,0x65706168730a);
  lStack_1a0 = 0;
  lStack_198 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  uStack_170 = 0x3f600000;
  FUN_048afb10(&lStack_1a0,8);
  uStack_148 = 0;
  lStack_140 = 0;
  lStack_158 = 0;
  uStack_150 = 0;
  lStack_168 = 0;
  lStack_160 = 0;
  uStack_138 = 0xff00;
  uStack_134 = uStack_134 & 0xffffff00;
  uStack_130 = uStack_130 & 0xffffff00;
  uStack_12c = 0;
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar5 = (long)&UNK_0f49fc50;
  if (plStack_1e0 != (long *)0x0) {
    lVar4 = *plStack_1e0;
    plStack_1e0 = plVar5;
    (**(code **)(lVar4 + 8))();
    plVar5 = plStack_1e0;
  }
  plStack_1e0 = plVar5;
  auStack_120[0] = puStack_1e8._0_4_;
  plStack_118 = (long *)0x0;
  uStack_110 = (long *)((ulong)uStack_110._4_4_ << 0x20);
  uStack_108 = 1;
  uStack_100 = 0;
  puStack_f8 = &UNK_0dd52cb0;
  puStack_f0 = &SUB_048b06d0;
  puStack_e8 = &SUB_0dd526c0;
  puStack_e0 = &UNK_0dd52cc0;
  puStack_d8 = &UNK_0dd52e20;
  uStack_d0 = 0;
  uStack_c8 = 0;
  plStack_c0 = (long *)0x0;
  func_0x048b05a0(puStack_1f0,auStack_120);
  plVar5 = plStack_c0;
  if (plStack_c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      func_0x0412c2d0(plVar5);
    }
  }
  puVar2 = puStack_1f0;
  if ((DAT_0f550a20 == '\0') && (iVar3 = func_0x04108328(&DAT_0f550a20), iVar3 != 0)) {
    func_0x048b0af0(0xf550a08);
    FUN_0410844d(&DAT_0f550a20);
  }
  auStack_120[0] = _DAT_0f550a0c;
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar4 = lStack_1d8;
  plVar1 = plStack_1e0;
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&UNK_0ef439d0;
  plStack_118 = plVar5 + 3;
  plStack_1e0 = (long *)0x0;
  lStack_1d8 = 0;
  plVar5[3] = (long)plVar1;
  plVar5[4] = lVar4;
  plVar5[7] = lStack_1c0;
  plVar5[5] = lStack_1d0;
  plVar5[6] = lStack_1c8;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  plVar5[10] = lStack_1a8;
  plVar5[8] = uStack_1b8;
  plVar5[9] = lStack_1b0;
  uStack_1b8 = 0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  plVar5[0xb] = lStack_1a0;
  plVar5[0xc] = lStack_198;
  plVar5[0xd] = lStack_190;
  lStack_1a0 = 0;
  lStack_198 = 0;
  lStack_190 = 0;
  plVar5[0xe] = lStack_188;
  plVar5[0xf] = lStack_180;
  plVar5[0x10] = lStack_178;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  *(undefined4 *)(plVar5 + 0x11) = uStack_170;
  plVar5[0x12] = lStack_168;
  plVar5[0x13] = lStack_160;
  plVar5[0x14] = lStack_158;
  lStack_168 = 0;
  lStack_160 = 0;
  lStack_158 = 0;
  plVar5[0x17] = lStack_140;
  *(undefined4 *)(plVar5 + 0x15) = (undefined4)uStack_150;
  *(undefined4 *)((long)plVar5 + 0xac) = uStack_150._4_4_;
  *(undefined4 *)(plVar5 + 0x16) = (undefined4)uStack_148;
  *(undefined4 *)((long)plVar5 + 0xb4) = uStack_148._4_4_;
  uStack_150 = 0;
  uStack_148 = 0;
  lStack_140 = 0;
  *(ulong *)((long)plVar5 + 0xc5) = CONCAT17(uStack_12c,CONCAT43(uStack_130,uStack_134._1_3_));
  plVar5[0x18] = CONCAT44(uStack_134,CONCAT22(uStack_136,uStack_138));
  uStack_b8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_110 = plVar5;
  func_0x048afd20(puVar2,auStack_120);
  plVar5 = uStack_110;
  if (uStack_110 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_110 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*uStack_110 + 0x10))(uStack_110);
      func_0x0412c2d0(plVar5);
    }
  }
  plVar5 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_b0 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      func_0x0412c2d0(plVar5);
    }
  }
  lVar4 = *(long *)(puVar2 + 4);
  iVar3 = puVar2[7];
  if (iVar3 == 2) {
    piVar8 = *(int **)(*(long *)(lVar4 + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != puVar2[6]) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    for (; *(long *)(piVar8 + 0xc) != *(long *)(puVar2 + 2); piVar8 = *(int **)(piVar8 + 0xe)) {
    }
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 == 0) {
        *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) | (int)puStack_1f8 << 0x10;
        func_0x048b0bc0(&plStack_1e0);
      }
      else {
        func_0x048b0bc0(&plStack_1e0);
      }
      goto joined_r0x0dceed2a;
    }
    piVar8 = *(int **)(*(long *)(lVar4 + 0x78) + 0x48);
    iVar3 = *piVar8;
    while (iVar3 != puVar2[6]) {
      piVar8 = piVar8 + 0x1a;
      iVar3 = *piVar8;
    }
  }
  piVar8[4] = piVar8[4] | (int)puStack_1f8 << 0x10;
  func_0x048b0bc0(&plStack_1e0);
joined_r0x0dceed2a:
  if ((bStack_a0 & 1) != 0) {
    func_0x0412a280(uStack_90,CONCAT71(uStack_9f,bStack_a0) & 0xfffffffffffffffe);
  }
  if ((bStack_210 & 1) != 0) {
    func_0x0412a280(puStack_200,CONCAT71(uStack_20f,bStack_210) & 0xfffffffffffffffe);
  }
  return;
}


