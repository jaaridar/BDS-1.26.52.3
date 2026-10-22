/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7716140 (ELF vaddr 0x7616140)
 * Label: caller-of-callee
 * Body:  [[07716140, 07716ee1] [07716ef0, 07717129]]
 * Ghidra: FUN_07716140
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07716140(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  bool bVar10;
  undefined4 auStack_2d0 [2];
  long *plStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined1 *puStack_2a0;
  undefined1 *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined4 uStack_280;
  undefined8 uStack_278;
  long *plStack_270;
  undefined *puStack_268;
  undefined1 *puStack_260;
  undefined4 uStack_258;
  long *plStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  undefined1 uStack_228;
  undefined4 uStack_227;
  undefined4 uStack_223;
  undefined4 uStack_21f;
  undefined4 uStack_21b;
  undefined2 uStack_217;
  undefined1 uStack_215;
  undefined4 uStack_214;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined4 uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined2 uStack_1a8;
  undefined2 uStack_1a6;
  uint uStack_1a4;
  uint uStack_1a0;
  undefined1 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 uStack_168;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 uStack_128;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 uStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [32];
  undefined8 uStack_78;
  char cStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  
  if ((DAT_0f5acad8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5acad8), iVar4 != 0)) {
    func_0x077bf7e0();
    FUN_0410844d(&DAT_0f5acad8);
  }
  uVar7 = _DAT_0f5acad0;
  lVar8 = _DAT_0f5acac8;
  if ((DAT_0f5acb70 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5acb70), iVar4 != 0)) {
    func_0x077bf920();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5acaf0,0xf53dab8);
    FUN_0410844d(&DAT_0f5acb70);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5acaf0 + 4)) * 8);
  do {
    lVar2 = *plVar6;
    if (lVar2 == -1) goto LAB_077161d1;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5acaf0 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_077161d1:
    puVar5 = &DAT_0f5acaf0;
    iVar4 = iRam000000000f5acb50;
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
  func_0x077c1af0(&lStack_a0,param_1,lVar8,uVar7);
  if (cStack_70 != '\0') {
    return;
  }
  if ((DAT_0f5acd00 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5acd00), iVar4 != 0)) {
    func_0x077c35d0();
    FUN_0410844d(&DAT_0f5acd00);
  }
  uVar7 = _DAT_0f5accf8;
  lVar8 = _DAT_0f5accf0;
  if ((DAT_0f5acce0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5acce0), iVar4 != 0)) {
    func_0x077c26d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5acc60,0xf53dab8);
    FUN_0410844d(&DAT_0f5acce0);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5acc60 + 4)) * 8);
  do {
    lVar2 = *plVar6;
    if (lVar2 == -1) goto LAB_077162b1;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5acc60 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_077162b1:
    puVar5 = &DAT_0f5acc60;
    iVar4 = iRam000000000f5accc0;
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
  FUN_077c2ab0(&uStack_68,param_1,lVar8,uVar7);
  func_0x077c3650(&puStack_268,&uStack_68,&UNK_014b23ab,6);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0ef46ef8;
  if (plStack_250 != (long *)0x0) {
    lVar8 = *plStack_250;
    plStack_250 = plVar6;
    (**(code **)(lVar8 + 8))();
    plVar6 = plStack_250;
  }
  plStack_250 = plVar6;
  auStack_2d0[0] = uStack_258;
  plStack_2c8 = (long *)0x0;
  uStack_2c0 = (long *)((ulong)uStack_2c0._4_4_ << 0x20);
  uStack_2b8 = 1;
  uStack_2b0 = 0;
  puStack_2a8 = &UNK_04906f70;
  puStack_2a0 = &SUB_048b06d0;
  puStack_298 = &SUB_04906c50;
  puStack_290 = &UNK_077c3c00;
  puStack_288 = &UNK_077c3d60;
  uStack_280 = 0;
  uStack_278 = 0;
  plStack_270 = (long *)0x0;
  func_0x048b05a0(puStack_260,auStack_2d0);
  plVar6 = plStack_270;
  if (plStack_270 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_270 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_270 + 0x10))(plStack_270);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x077c3900(&puStack_268);
  uStack_168 = uStack_38;
  uStack_178 = uStack_48;
  uStack_174 = uStack_44;
  uStack_170 = uStack_40;
  uStack_16c = uStack_3c;
  uStack_188 = uStack_58;
  uStack_184 = uStack_54;
  uStack_180 = uStack_50;
  uStack_17c = uStack_4c;
  uStack_198 = uStack_68;
  uStack_194 = uStack_64;
  uStack_190 = uStack_60;
  uStack_18c = uStack_5c;
  func_0x048b0bc0(&plStack_250);
  func_0x077c3650(&puStack_268,&uStack_198,&UNK_0130ea1d,6);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0ef46ef8;
  if (plStack_250 != (long *)0x0) {
    lVar8 = *plStack_250;
    plStack_250 = plVar6;
    (**(code **)(lVar8 + 8))();
    plVar6 = plStack_250;
  }
  plStack_250 = plVar6;
  auStack_2d0[0] = uStack_258;
  plStack_2c8 = (long *)0x0;
  uStack_2c0 = (long *)((ulong)uStack_2c0 & 0xffffffff00000000);
  uStack_2b8 = 1;
  uStack_2b0 = 0;
  puStack_2a8 = &UNK_04906f70;
  puStack_2a0 = &SUB_048b06d0;
  puStack_298 = &SUB_04906c50;
  puStack_290 = &UNK_077c3f30;
  puStack_288 = &UNK_077c4090;
  uStack_280 = 0;
  uStack_278 = 0;
  plStack_270 = (long *)0x0;
  func_0x048b05a0(puStack_260,auStack_2d0);
  plVar6 = plStack_270;
  if (plStack_270 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_270 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_270 + 0x10))(plStack_270);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x077c3900(&puStack_268);
  uStack_128 = uStack_168;
  uStack_138 = uStack_178;
  uStack_134 = uStack_174;
  uStack_130 = uStack_170;
  uStack_12c = uStack_16c;
  uStack_148 = uStack_188;
  uStack_144 = uStack_184;
  uStack_140 = uStack_180;
  uStack_13c = uStack_17c;
  uStack_158 = uStack_198;
  uStack_154 = uStack_194;
  uStack_150 = uStack_190;
  uStack_14c = uStack_18c;
  func_0x048b0bc0(&plStack_250);
  func_0x077c3650(&puStack_268,&uStack_158,&UNK_01329ee3,0xf);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0ef46ef8;
  if (plStack_250 != (long *)0x0) {
    lVar8 = *plStack_250;
    plStack_250 = plVar6;
    (**(code **)(lVar8 + 8))();
    plVar6 = plStack_250;
  }
  plStack_250 = plVar6;
  auStack_2d0[0] = uStack_258;
  plStack_2c8 = (long *)0x0;
  uStack_2c0 = (long *)((ulong)uStack_2c0 & 0xffffffff00000000);
  uStack_2b8 = 1;
  uStack_2b0 = 0;
  puStack_2a8 = &UNK_04906f70;
  puStack_2a0 = &SUB_048b06d0;
  puStack_298 = &SUB_04906c50;
  puStack_290 = &UNK_077c4270;
  puStack_288 = &UNK_077c43d0;
  uStack_280 = 0;
  uStack_278 = 0;
  plStack_270 = (long *)0x0;
  func_0x048b05a0(puStack_260,auStack_2d0);
  plVar6 = plStack_270;
  if (plStack_270 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_270 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_270 + 0x10))(plStack_270);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x077c3900(&puStack_268);
  uStack_e8 = uStack_128;
  uStack_f8 = uStack_138;
  uStack_f4 = uStack_134;
  uStack_f0 = uStack_130;
  uStack_ec = uStack_12c;
  uStack_108 = uStack_148;
  uStack_104 = uStack_144;
  uStack_100 = uStack_140;
  uStack_fc = uStack_13c;
  uStack_118 = uStack_158;
  uStack_114 = uStack_154;
  uStack_110 = uStack_150;
  uStack_10c = uStack_14c;
  func_0x048b0bc0(&plStack_250);
  func_0x077c3650(&puStack_268,&uStack_118,&UNK_012c1ba2,0xe);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0ef46ef8;
  if (plStack_250 != (long *)0x0) {
    lVar8 = *plStack_250;
    plStack_250 = plVar6;
    (**(code **)(lVar8 + 8))();
    plVar6 = plStack_250;
  }
  plStack_250 = plVar6;
  auStack_2d0[0] = uStack_258;
  plStack_2c8 = (long *)0x0;
  uStack_2c0 = (long *)((ulong)uStack_2c0 & 0xffffffff00000000);
  uStack_2b8 = 1;
  uStack_2b0 = 0;
  puStack_2a8 = &UNK_04906f70;
  puStack_2a0 = &SUB_048b06d0;
  puStack_298 = &SUB_04906c50;
  puStack_290 = &UNK_077c45b0;
  puStack_288 = &UNK_077c4710;
  uStack_280 = 0;
  uStack_278 = 0;
  plStack_270 = (long *)0x0;
  func_0x048b05a0(puStack_260,auStack_2d0);
  plVar6 = plStack_270;
  if (plStack_270 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_270 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_270 + 0x10))(plStack_270);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x077c3900(&puStack_268);
  uStack_a8 = uStack_e8;
  uStack_b8 = uStack_f8;
  uStack_b4 = uStack_f4;
  uStack_b0 = uStack_f0;
  uStack_ac = uStack_ec;
  uStack_c8 = uStack_108;
  uStack_c4 = uStack_104;
  uStack_c0 = uStack_100;
  uStack_bc = uStack_fc;
  uStack_d8 = CONCAT44(uStack_114,uStack_118);
  uStack_d0 = (long *)CONCAT44(uStack_10c,uStack_110);
  func_0x048b0bc0(&plStack_250);
  func_0x077c3650(&puStack_268,&uStack_d8,&UNK_0144bb8c,9);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0ef46ef8;
  if (plStack_250 != (long *)0x0) {
    lVar8 = *plStack_250;
    plStack_250 = plVar6;
    (**(code **)(lVar8 + 8))();
    plVar6 = plStack_250;
  }
  plStack_250 = plVar6;
  auStack_2d0[0] = uStack_258;
  plStack_2c8 = (long *)0x0;
  uStack_2c0 = (long *)((ulong)uStack_2c0 & 0xffffffff00000000);
  uStack_2b8 = 1;
  uStack_2b0 = 0;
  puStack_2a8 = &UNK_04906f70;
  puStack_2a0 = &SUB_048b06d0;
  puStack_298 = &SUB_04906c50;
  puStack_290 = &UNK_077c48f0;
  puStack_288 = &UNK_077c4a50;
  uStack_280 = 0;
  uStack_278 = 0;
  plStack_270 = (long *)0x0;
  func_0x048b05a0(puStack_260,auStack_2d0);
  plVar6 = plStack_270;
  if (plStack_270 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_270 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_270 + 0x10))(plStack_270);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x077c3900(&puStack_268);
  func_0x048b0bc0(&plStack_250);
  if ((DAT_0f5acad8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5acad8), iVar4 != 0)) {
    func_0x077bf7e0();
    FUN_0410844d(&DAT_0f5acad8);
  }
  uStack_78 = 0xf1843c3c00000001;
  if ((DAT_0f5acb70 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5acb70), iVar4 != 0)) {
    func_0x077bf920();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5acaf0,0xf53dab8);
    FUN_0410844d(&DAT_0f5acb70);
  }
  puStack_260 = (undefined1 *)(lStack_a0 + 0x18);
  plVar6 = (long *)(*(long *)(lStack_a0 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lStack_a0 + 0x20) - *(long *)(lStack_a0 + 0x18))
                                >> 3) - 1U & *(uint *)(_DAT_0f5acaf0 + 4)) * 8);
  do {
    lVar8 = *plVar6;
    if (lVar8 == -1) goto LAB_07716a31;
    plVar6 = (long *)(*(long *)(lStack_a0 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(lStack_a0 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5acaf0 + 4)
          );
  if (plVar6 == *(long **)(lStack_a0 + 0x38)) {
LAB_07716a31:
    puStack_268 = &DAT_0f5acaf0;
  }
  else {
    puStack_268 = (undefined *)plVar6[2];
  }
  func_0x0ed621a0(&puStack_268,uStack_78._4_4_);
  puStack_268 = (undefined *)CONCAT62(puStack_268._2_6_,1);
  uStack_258 = uStack_78._4_4_;
  plStack_250 = (long *)0x0;
  lStack_248 = 0;
  lStack_240 = 0;
  lStack_238 = 0;
  lStack_230 = 0;
  uStack_228 = 0x24;
  uStack_227 = _DAT_011f1c25;
  uStack_223 = _UNK_011f1c29;
  uStack_21f = _UNK_011f1c2d;
  uStack_21b = _UNK_011f1c31;
  uStack_217 = 0x7367;
  uStack_215 = 0;
  lStack_210 = 0;
  lStack_208 = 0;
  lStack_200 = 0;
  lStack_1f8 = 0;
  lStack_1f0 = 0;
  lStack_1e8 = 0;
  uStack_1e0 = 0x3f600000;
  puStack_260 = auStack_98;
  FUN_048afb10(&lStack_210,8);
  uStack_1b8 = 0;
  lStack_1b0 = 0;
  lStack_1c8 = 0;
  uStack_1c0 = 0;
  lStack_1d8 = 0;
  lStack_1d0 = 0;
  uStack_1a8 = 0xff00;
  uStack_1a4 = uStack_1a4 & 0xffffff00;
  uStack_1a0 = uStack_1a0 & 0xffffff00;
  uStack_19c = 0;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f0e65f8;
  if (plStack_250 != (long *)0x0) {
    lVar8 = *plStack_250;
    plStack_250 = plVar6;
    (**(code **)(lVar8 + 8))();
    plVar6 = plStack_250;
  }
  plStack_250 = plVar6;
  auStack_2d0[0] = uStack_258;
  plStack_2c8 = (long *)0x0;
  uStack_2c0 = (long *)((ulong)uStack_2c0 & 0xffffffff00000000);
  uStack_2b8 = 1;
  uStack_2b0 = 0;
  puStack_2a8 = &UNK_077c4e20;
  puStack_2a0 = &SUB_048b06d0;
  puStack_298 = &UNK_077c2610;
  puStack_290 = &UNK_077c4ee0;
  puStack_288 = &UNK_077c5050;
  uStack_280 = 0;
  uStack_278 = 0;
  plStack_270 = (long *)0x0;
  func_0x048b05a0(puStack_260,auStack_2d0);
  plVar6 = plStack_270;
  if (plStack_270 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_270 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_270 + 0x10))(plStack_270);
      func_0x0412c2d0(plVar6);
    }
  }
  puVar3 = puStack_260;
  if ((DAT_0f550a20 == '\0') && (iVar4 = func_0x04108328(&DAT_0f550a20), iVar4 != 0)) {
    func_0x048b0af0(0xf550a08);
    FUN_0410844d(&DAT_0f550a20);
  }
  auStack_2d0[0] = _DAT_0f550a0c;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar8 = lStack_248;
  plVar1 = plStack_250;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef439d0;
  plStack_2c8 = plVar6 + 3;
  plStack_250 = (long *)0x0;
  lStack_248 = 0;
  plVar6[3] = (long)plVar1;
  plVar6[4] = lVar8;
  plVar6[7] = lStack_230;
  plVar6[5] = lStack_240;
  plVar6[6] = lStack_238;
  lStack_240 = 0;
  lStack_238 = 0;
  lStack_230 = 0;
  plVar6[10] = CONCAT44(uStack_214,CONCAT13(uStack_215,CONCAT21(uStack_217,uStack_21b._3_1_)));
  plVar6[8] = CONCAT35((undefined3)uStack_223,CONCAT41(uStack_227,uStack_228));
  plVar6[9] = CONCAT35((undefined3)uStack_21b,CONCAT41(uStack_21f,uStack_223._3_1_));
  uStack_228 = 0;
  uStack_227 = 0;
  uStack_223 = 0;
  uStack_21f = 0;
  uStack_21b = 0;
  uStack_217 = 0;
  uStack_215 = 0;
  uStack_214 = 0;
  plVar6[0xb] = lStack_210;
  plVar6[0xc] = lStack_208;
  plVar6[0xd] = lStack_200;
  lStack_210 = 0;
  lStack_208 = 0;
  lStack_200 = 0;
  plVar6[0xe] = lStack_1f8;
  plVar6[0xf] = lStack_1f0;
  plVar6[0x10] = lStack_1e8;
  lStack_1f8 = 0;
  lStack_1f0 = 0;
  lStack_1e8 = 0;
  *(undefined4 *)(plVar6 + 0x11) = uStack_1e0;
  plVar6[0x12] = lStack_1d8;
  plVar6[0x13] = lStack_1d0;
  plVar6[0x14] = lStack_1c8;
  lStack_1d8 = 0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  plVar6[0x17] = lStack_1b0;
  *(undefined4 *)(plVar6 + 0x15) = (undefined4)uStack_1c0;
  *(undefined4 *)((long)plVar6 + 0xac) = uStack_1c0._4_4_;
  *(undefined4 *)(plVar6 + 0x16) = (undefined4)uStack_1b8;
  *(undefined4 *)((long)plVar6 + 0xb4) = uStack_1b8._4_4_;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  lStack_1b0 = 0;
  *(ulong *)((long)plVar6 + 0xc5) = CONCAT17(uStack_19c,CONCAT43(uStack_1a0,uStack_1a4._1_3_));
  plVar6[0x18] = CONCAT44(uStack_1a4,CONCAT22(uStack_1a6,uStack_1a8));
  uStack_d8 = 0;
  uStack_d0 = (long *)0x0;
  uStack_2c0 = plVar6;
  func_0x048afd20(puVar3,auStack_2d0);
  plVar6 = uStack_2c0;
  if (uStack_2c0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_2c0 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*uStack_2c0 + 0x10))(uStack_2c0);
      func_0x0412c2d0(plVar6);
    }
  }
  plVar6 = uStack_d0;
  if (uStack_d0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_d0 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*uStack_d0 + 0x10))(uStack_d0);
      func_0x0412c2d0(plVar6);
    }
  }
  lVar8 = *(long *)(puVar3 + 0x10);
  iVar4 = *(int *)(puVar3 + 0x1c);
  if (iVar4 == 2) {
    piVar9 = *(int **)(*(long *)(lVar8 + 0x78) + 0x60);
    iVar4 = *piVar9;
    while (iVar4 != *(int *)(puVar3 + 0x18)) {
      piVar9 = piVar9 + 0x16;
      iVar4 = *piVar9;
    }
    for (; *(long *)(piVar9 + 0xc) != *(long *)(puVar3 + 8); piVar9 = *(int **)(piVar9 + 0xe)) {
    }
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 == 0) {
        *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) | (int)puStack_268 << 0x10;
      }
      goto LAB_07716efd;
    }
    piVar9 = *(int **)(*(long *)(lVar8 + 0x78) + 0x48);
    iVar4 = *piVar9;
    while (iVar4 != *(int *)(puVar3 + 0x18)) {
      piVar9 = piVar9 + 0x1a;
      iVar4 = *piVar9;
    }
  }
  piVar9[4] = piVar9[4] | (int)puStack_268 << 0x10;
LAB_07716efd:
  func_0x048b0bc0(&plStack_250);
  return;
}



/* ---- referenced strings ----
 * 0x11f1c25  Adventure Settings
 */
