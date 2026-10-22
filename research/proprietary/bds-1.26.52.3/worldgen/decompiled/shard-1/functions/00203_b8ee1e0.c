/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb9ee1e0 (ELF vaddr 0xb8ee1e0)
 * Label: caller-of-callee
 * Body:  [[0b9ee1e0, 0b9ee731] [0b9ee740, 0b9ee9ec] [0b9ee9f0, 0b9eec4d]]
 * Ghidra: FUN_0b9ee1e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b9ee1e0(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  bool bVar12;
  undefined *puStack_238;
  undefined1 *puStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  long *plStack_1e8;
  long lStack_1e0;
  ulong uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined4 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined2 uStack_178;
  undefined2 uStack_176;
  uint uStack_174;
  uint uStack_170;
  undefined1 uStack_16c;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined1 *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined *puStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  long *plStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  char cStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  
  lVar5 = func_0x048b7e10(param_1 + 0x18);
  if ((*(int *)(lVar5 + 0x60) == -0x2b3da790) && (lVar5 = *(long *)(lVar5 + 0x68), lVar5 != 0)) {
    bVar12 = (*(byte *)(lVar5 + 8) & 1) != 0;
    lVar9 = lVar5 + 9;
    if (bVar12) {
      lVar9 = *(long *)(lVar5 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar5 + 8) >> 1);
    if (bVar12) {
      uVar10 = *(ulong *)(lVar5 + 0x10);
    }
    func_0x0ba66510(&lStack_80,param_1,lVar9,uVar10);
  }
  else {
    func_0x0ba66510(&lStack_80,param_1,&UNK_011ad002,0xe);
  }
  if (cStack_50 != '\0') {
    return;
  }
  if ((DAT_0f5503f8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5503f8), iVar4 != 0)) {
    func_0x048b7da0(0xf5503e0);
    func_0x0410844d(&DAT_0f5503f8);
  }
  uStack_58 = 0x75878d7b00000001;
  lVar5 = lStack_80 + 0x18;
  puStack_238 = (undefined *)func_0x048b7e10(lVar5);
  puStack_230 = (undefined1 *)lVar5;
  func_0x0ed621a0(&puStack_238,uStack_58._4_4_);
  puStack_230 = auStack_78;
  puStack_238 = (undefined *)((ulong)puStack_238 & 0xffffffffffff0000);
  uStack_228 = CONCAT44(uStack_228._4_4_,uStack_58._4_4_);
  plStack_220 = (long *)0x0;
  lStack_218 = 0;
  lStack_210 = 0;
  lStack_208 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0x6369721c;
  uStack_1f4 = 0x65725068;
  uStack_1f0 = 0x636e6573;
  uStack_1ec = 0x644965;
  lStack_1e0 = 0;
  uStack_1d8 = 0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  uStack_1b0 = 0x3f600000;
  func_0x048afb10(&lStack_1e0,8);
  uStack_188 = 0;
  lStack_180 = 0;
  lStack_198 = 0;
  uStack_190 = 0;
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  uStack_178 = 0xff00;
  uStack_174 = uStack_174 & 0xffffff00;
  uStack_170 = uStack_170 & 0xffffff00;
  uStack_16c = 0;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f0123c0;
  if (plStack_220 != (long *)0x0) {
    lVar5 = *plStack_220;
    plStack_220 = plVar6;
    (**(code **)(lVar5 + 8))();
    plVar6 = plStack_220;
  }
  plStack_220 = plVar6;
  uStack_168 = CONCAT44(uStack_168._4_4_,(undefined4)uStack_228);
  plStack_160 = (long *)0x0;
  uStack_158 = (long *)((ulong)uStack_158._4_4_ << 0x20);
  uStack_150 = 1;
  uStack_148 = 0;
  puStack_140 = &UNK_05e08030;
  puStack_138 = &SUB_048b06d0;
  puStack_130 = &UNK_05e07cf0;
  puStack_128 = &UNK_0ba66dc0;
  puStack_120 = &UNK_0ba66f70;
  uStack_118 = 0;
  uStack_110 = 0;
  plStack_108 = (long *)0x0;
  func_0x048b05a0(puStack_230,&uStack_168);
  plVar6 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_108 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      func_0x0412c2d0(plVar6);
    }
  }
  puVar2 = puStack_230;
  if ((DAT_0f550a20 == '\0') && (iVar4 = func_0x04108328(&DAT_0f550a20), iVar4 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  uStack_168 = CONCAT44(uStack_168._4_4_,_DAT_0f550a0c);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar5 = lStack_218;
  plVar1 = plStack_220;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef439d0;
  plStack_160 = plVar6 + 3;
  plStack_220 = (long *)0x0;
  lStack_218 = 0;
  plVar6[3] = (long)plVar1;
  plVar6[4] = lVar5;
  plVar6[7] = uStack_200;
  plVar6[5] = lStack_210;
  plVar6[6] = lStack_208;
  lStack_210 = 0;
  lStack_208 = 0;
  uStack_200 = 0;
  plVar6[10] = (long)plStack_1e8;
  plVar6[8] = CONCAT44(uStack_1f4,uStack_1f8);
  plVar6[9] = CONCAT44(uStack_1ec,uStack_1f0);
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  plStack_1e8 = (long *)0x0;
  plVar6[0xb] = lStack_1e0;
  plVar6[0xc] = uStack_1d8;
  plVar6[0xd] = lStack_1d0;
  lStack_1e0 = 0;
  uStack_1d8 = 0;
  lStack_1d0 = 0;
  plVar6[0xe] = lStack_1c8;
  plVar6[0xf] = lStack_1c0;
  plVar6[0x10] = lStack_1b8;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  *(undefined4 *)(plVar6 + 0x11) = uStack_1b0;
  plVar6[0x12] = lStack_1a8;
  plVar6[0x13] = lStack_1a0;
  plVar6[0x14] = lStack_198;
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  lStack_198 = 0;
  plVar6[0x17] = lStack_180;
  *(undefined4 *)(plVar6 + 0x15) = (undefined4)uStack_190;
  *(undefined4 *)((long)plVar6 + 0xac) = uStack_190._4_4_;
  *(undefined4 *)(plVar6 + 0x16) = (undefined4)uStack_188;
  *(undefined4 *)((long)plVar6 + 0xb4) = uStack_188._4_4_;
  uStack_190 = 0;
  uStack_188 = 0;
  lStack_180 = 0;
  *(ulong *)((long)plVar6 + 0xc5) = CONCAT17(uStack_16c,CONCAT43(uStack_170,uStack_174._1_3_));
  plVar6[0x18] = CONCAT44(uStack_174,CONCAT22(uStack_176,uStack_178));
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  uStack_158 = plVar6;
  func_0x048afd20(puVar2,&uStack_168);
  plVar6 = uStack_158;
  if (uStack_158 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_158 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*uStack_158 + 0x10))(uStack_158);
      func_0x0412c2d0(plVar6);
    }
  }
  plVar6 = plStack_40;
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      func_0x0412c2d0(plVar6);
    }
  }
  lVar5 = *(long *)(puVar2 + 0x10);
  iVar4 = *(int *)(puVar2 + 0x1c);
  if (iVar4 == 2) {
    piVar11 = *(int **)(*(long *)(lVar5 + 0x78) + 0x60);
    iVar4 = *piVar11;
    while (iVar4 != *(int *)(puVar2 + 0x18)) {
      piVar11 = piVar11 + 0x16;
      iVar4 = *piVar11;
    }
    for (; *(long *)(piVar11 + 0xc) != *(long *)(puVar2 + 8); piVar11 = *(int **)(piVar11 + 0xe)) {
    }
LAB_0b9ee74a:
    piVar11[4] = piVar11[4] | (int)puStack_238 << 0x10;
  }
  else {
    if (iVar4 == 1) {
      piVar11 = *(int **)(*(long *)(lVar5 + 0x78) + 0x48);
      iVar4 = *piVar11;
      while (iVar4 != *(int *)(puVar2 + 0x18)) {
        piVar11 = piVar11 + 0x1a;
        iVar4 = *piVar11;
      }
      goto LAB_0b9ee74a;
    }
    if (iVar4 == 0) {
      *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) | (int)puStack_238 << 0x10;
    }
  }
  iVar4 = (int)uStack_58;
  uVar3 = uStack_58._4_4_;
  func_0x048b0bc0(&plStack_220);
  lStack_218 = 0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  plStack_1e8 = (long *)0x0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  lStack_210 = 0;
  lStack_208 = 0;
  lStack_1c0 = 0;
  puStack_230 = (undefined1 *)0xffffffffffffffff;
  uStack_228 = 0;
  plStack_220 = (long *)0xff;
  puStack_238 = &UNK_0f4e3c70;
  func_0x041679a0(&lStack_218);
  lStack_210 = func_0x041681f0(&lStack_218,0xf547a30);
  lStack_208 = func_0x041681f0(&lStack_218,0xf547770);
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  plStack_1e8 = (long *)0x0;
  lStack_1e0 = 0;
  uStack_1d8 = 0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  puStack_230 = (undefined1 *)0x32;
  uStack_f8 = 0x32;
  uStack_f4 = 0;
  uStack_f0 = (undefined4)uStack_228;
  uStack_ec = uStack_228._4_4_;
  uStack_e8 = plStack_220._0_1_;
  puStack_100 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_e0,&lStack_218);
  uStack_d8 = lStack_210;
  uStack_d0 = lStack_208;
  uStack_c8 = (undefined4)uStack_200;
  uStack_c4 = uStack_200._4_4_;
  uStack_c0 = uStack_1f8;
  uStack_bc = uStack_1f4;
  uStack_b8 = CONCAT44(uStack_1ec,uStack_1f0);
  plStack_b0 = plStack_1e8;
  if (plStack_1e8 != (long *)0x0) {
    LOCK();
    plStack_1e8[1] = plStack_1e8[1] + 1;
    UNLOCK();
  }
  lStack_a8 = lStack_1e0;
  if ((uStack_1d8 & 1) == 0) {
    uStack_90 = lStack_1c8;
    uStack_a0 = uStack_1d8;
    uStack_98 = lStack_1d0;
  }
  else {
    func_0x0412e5e0(&uStack_a0,lStack_1c8,lStack_1d0);
  }
  uStack_88 = lStack_1c0;
  if (iVar4 == 4) {
    uVar7 = func_0x048b7e10(lStack_80 + 0x18);
    lVar5 = func_0x048b1040(lStack_80 + 0x18,uVar7,uVar3,1);
    if (lVar5 == 0) {
      uStack_168 = 0;
      plStack_160 = (long *)0x0;
      FUN_048b10d0(&uStack_168);
      lVar9 = *(long *)(uStack_168 + 0x38);
      lVar5 = uStack_168;
      if (lVar9 == 0) goto LAB_0b9ee9be;
LAB_0b9ee9e3:
      do {
        lVar5 = lVar9;
        lVar9 = *(long *)(lVar5 + 0x38);
        if (*(long *)(lVar5 + 0x38) == 0) {
          uStack_168 = 0;
          plStack_160 = (long *)0x0;
          FUN_048b10d0(&uStack_168);
          lVar9 = uStack_168;
        }
      } while (lVar9 != 0);
    }
    else {
      lVar9 = *(long *)(lVar5 + 0x38);
      if (*(long *)(lVar5 + 0x38) != 0) goto LAB_0b9ee9e3;
LAB_0b9ee9be:
      uStack_168 = 0;
      plStack_160 = (long *)0x0;
      FUN_048b10d0(&uStack_168);
      lVar9 = uStack_168;
      if (uStack_168 != 0) goto LAB_0b9ee9e3;
    }
    lVar5 = *(long *)(lVar5 + 0x48);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
  }
  else {
    if (iVar4 != 1) goto LAB_0b9eeae4;
    uVar7 = func_0x048b7e10(lStack_80 + 0x18);
    lVar5 = func_0x048b0c90(lStack_80 + 0x18,uVar7,uVar3,1);
    if (lVar5 == 0) {
      uStack_168 = 0;
      plStack_160 = (long *)0x0;
      func_0x048b0d20(&uStack_168);
      lVar5 = uStack_168;
    }
    lVar5 = *(long *)(lVar5 + 0x58);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
  }
  *(undefined1 *)(puVar8 + 3) = uStack_e8;
  *(undefined4 *)(puVar8 + 1) = uStack_f8;
  *(undefined4 *)((long)puVar8 + 0xc) = uStack_f4;
  *(undefined4 *)(puVar8 + 2) = uStack_f0;
  *(undefined4 *)((long)puVar8 + 0x14) = uStack_ec;
  *puVar8 = &UNK_0f4e3c70;
  func_0x04167a20(puVar8 + 4,auStack_e0);
  puVar8[5] = uStack_d8;
  puVar8[6] = uStack_d0;
  puVar8[7] = CONCAT44(uStack_c4,uStack_c8);
  puVar8[8] = CONCAT44(uStack_bc,uStack_c0);
  puVar8[9] = uStack_b8;
  puVar8[10] = plStack_b0;
  uStack_b8 = 0;
  plStack_b0 = (long *)0x0;
  puVar8[0xb] = lStack_a8;
  puVar8[0xe] = uStack_90;
  *(undefined4 *)(puVar8 + 0xc) = (undefined4)uStack_a0;
  *(undefined4 *)((long)puVar8 + 100) = uStack_a0._4_4_;
  *(undefined4 *)(puVar8 + 0xd) = (undefined4)uStack_98;
  *(undefined4 *)((long)puVar8 + 0x6c) = uStack_98._4_4_;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  puVar8[0xf] = uStack_88;
  plVar6 = *(long **)(lVar5 + 8);
  *(undefined8 **)(lVar5 + 8) = puVar8;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x28))();
  }
LAB_0b9eeae4:
  puStack_100 = &UNK_0f4e3c70;
  if ((uStack_a0 & 1) != 0) {
    func_0x0412a280(uStack_90,uStack_a0 & 0xfffffffffffffffe);
  }
  plVar6 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_b0 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x04167a40(auStack_e0);
  puStack_238 = &UNK_0f4e3c70;
  if ((uStack_1d8 & 1) != 0) {
    func_0x0412a280(lStack_1c8,uStack_1d8 & 0xfffffffffffffffe);
  }
  plVar6 = plStack_1e8;
  if (plStack_1e8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1e8 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x04167a40(&lStack_218);
  return;
}


