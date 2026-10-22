/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x80684d0 (ELF vaddr 0x7f684d0)
 * Label: caller-of-callee
 * Body:  [[080684d0, 08068fd6] [08068fe0, 08069226]]
 * Ghidra: FUN_080684d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080684d0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  bool bVar13;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined *puStack_358;
  undefined1 *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined *puStack_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined1 uStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  int iStack_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  long lStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  undefined1 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  long *aplStack_1f0 [23];
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  char cStack_108;
  undefined7 uStack_107;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  char cStack_c8;
  undefined4 auStack_c0 [2];
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  func_0x07820f40();
  if ((DAT_0f5c6ef0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5c6ef0), iVar5 != 0)) {
    func_0x080e5ca0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c6e70,0xf53dab8);
    func_0x0410844d(&DAT_0f5c6ef0);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5c6e70 + 4)) * 8);
  do {
    lVar2 = *plVar8;
    if (lVar2 == -1) goto LAB_08068550;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5c6e70 + 4));
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_08068550:
    puVar7 = &DAT_0f5c6e70;
    if (iRam000000000f5c6ed0 != -0x2b3da790) goto LAB_080685bd;
LAB_0806857b:
    lVar2 = *(long *)(puVar7 + 0x68);
    if (lVar2 == 0) goto LAB_080685bd;
    bVar13 = (*(byte *)(lVar2 + 8) & 1) != 0;
    lVar9 = lVar2 + 9;
    if (bVar13) {
      lVar9 = *(long *)(lVar2 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar2 + 8) >> 1);
    if (bVar13) {
      uVar12 = *(ulong *)(lVar2 + 0x10);
    }
    func_0x080e7a00(&uStack_f8,param_1,lVar9,uVar12);
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0806857b;
LAB_080685bd:
    func_0x080e7a00(&uStack_f8,param_1,&UNK_011be0c5,0x29);
  }
  if (cStack_c8 != '\0') {
    return;
  }
  func_0x080e8570(&lStack_208,&uStack_f8,&UNK_012407df,6);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0ef42d08;
  if (aplStack_1f0[0] != (long *)0x0) {
    lVar2 = *aplStack_1f0[0];
    aplStack_1f0[0] = plVar8;
    (**(code **)(lVar2 + 8))();
    plVar8 = aplStack_1f0[0];
  }
  aplStack_1f0[0] = plVar8;
  uStack_380 = (undefined *)CONCAT44(uStack_380._4_4_,uStack_1f8);
  uStack_378 = 0;
  uStack_370 = (ulong)uStack_370._4_4_ << 0x20;
  uStack_368 = 1;
  uStack_360 = 0;
  puStack_358 = &UNK_048b06c0;
  puStack_350 = &SUB_048b06d0;
  uStack_348 = &SUB_048b02c0;
  uStack_340 = &UNK_080e8b20;
  puStack_338 = &UNK_080e8c80;
  uStack_330 = (long *)((ulong)uStack_330._4_4_ << 0x20);
  uStack_328 = 0;
  plStack_320 = (long *)0x0;
  FUN_048b05a0(uStack_200,&uStack_380);
  plVar8 = plStack_320;
  if (plStack_320 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_320 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_320 + 0x10))(plStack_320);
      func_0x0412c2d0(plVar8);
    }
  }
  func_0x080e8820(&lStack_208);
  cStack_108 = cStack_c8;
  uStack_118 = uStack_d8;
  uStack_114 = uStack_d4;
  iStack_110 = iStack_d0;
  uStack_10c = uStack_cc;
  uStack_128 = uStack_e8;
  uStack_124 = uStack_e4;
  uStack_120 = uStack_e0;
  uStack_11c = uStack_dc;
  uStack_138 = uStack_f8;
  uStack_134 = uStack_f4;
  uStack_130 = uStack_f0;
  uStack_12c = uStack_ec;
  func_0x048b0bc0(aplStack_1f0);
  uStack_278 = uStack_138;
  uStack_274 = uStack_134;
  uStack_270 = uStack_130;
  uStack_26c = uStack_12c;
  uStack_268 = uStack_128;
  uStack_264 = uStack_124;
  uStack_260 = uStack_120;
  uStack_25c = uStack_11c;
  uStack_258 = uStack_118;
  uStack_254 = uStack_114;
  iStack_250 = iStack_110;
  uStack_24c = uStack_10c;
  uStack_248 = CONCAT71(uStack_107,cStack_108);
  func_0x080e8570(&lStack_208,&uStack_278,&UNK_011be0ef,0xf);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0ef44b00;
  if (aplStack_1f0[0] != (long *)0x0) {
    lVar2 = *aplStack_1f0[0];
    aplStack_1f0[0] = plVar8;
    (**(code **)(lVar2 + 8))();
    plVar8 = aplStack_1f0[0];
  }
  aplStack_1f0[0] = plVar8;
  uStack_380 = (undefined *)CONCAT44(uStack_380._4_4_,uStack_1f8);
  uStack_378 = 0;
  uStack_370 = uStack_370 & 0xffffffff00000000;
  uStack_368 = 1;
  uStack_360 = 0;
  puStack_358 = &UNK_048b3f30;
  puStack_350 = &SUB_048b06d0;
  uStack_348 = &SUB_048b2190;
  uStack_340 = &UNK_080e8e50;
  puStack_338 = &UNK_080e9020;
  uStack_330 = (long *)((ulong)uStack_330 & 0xffffffff00000000);
  uStack_328 = 0;
  plStack_320 = (long *)0x0;
  FUN_048b05a0(uStack_200,&uStack_380);
  plVar8 = plStack_320;
  if (plStack_320 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_320 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_320 + 0x10))(plStack_320);
      func_0x0412c2d0(plVar8);
    }
  }
  func_0x080e8820(&lStack_208);
  uVar3 = uStack_24c;
  iVar5 = iStack_250;
  lVar2 = CONCAT44(uStack_274,uStack_278);
  uStack_58 = CONCAT44(uStack_26c,uStack_270);
  uStack_50 = CONCAT44(uStack_264,uStack_268);
  uStack_48 = uStack_260;
  uStack_44 = uStack_25c;
  uStack_40 = uStack_258;
  uStack_3c = uStack_254;
  uVar4 = (undefined1)uStack_248;
  func_0x048b0bc0(aplStack_1f0);
  uStack_360 = 0;
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_328 = 0;
  plStack_320 = (long *)0x0;
  puStack_338 = (undefined *)0x0;
  uStack_330 = (long *)0x0;
  uStack_348 = (undefined1 *)0x0;
  uStack_340 = (undefined *)0x0;
  puStack_358 = (undefined *)0x0;
  puStack_350 = (undefined1 *)0x0;
  uStack_308 = 0;
  uStack_378 = 0xffffffffffffffff;
  uStack_370 = 0;
  uStack_368 = 0xff;
  uStack_380 = &UNK_0f4e3c70;
  func_0x041679a0(&uStack_360);
  puStack_358 = (undefined *)func_0x041681f0(&uStack_360,0xf547a30);
  puStack_350 = (undefined1 *)func_0x041681f0(&uStack_360,0xf547770);
  uStack_348 = (undefined1 *)0x0;
  uStack_340 = (undefined *)0x0;
  puStack_338 = (undefined *)0x0;
  uStack_330 = (long *)0x0;
  uStack_328 = 0;
  plStack_320 = (long *)0x0;
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_308 = 0;
  uStack_378 = 0x80;
  uStack_2f0 = 0x80;
  uStack_2ec = 0;
  uStack_2e8 = (undefined4)uStack_370;
  uStack_2e4 = uStack_370._4_4_;
  uStack_2e0 = (undefined1)uStack_368;
  puStack_2f8 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_2d8,&uStack_360);
  uStack_2d0 = puStack_358;
  uStack_2c8 = puStack_350;
  uStack_2c0 = (undefined4)uStack_348;
  uStack_2bc = uStack_348._4_4_;
  uStack_2b8 = (undefined4)uStack_340;
  uStack_2b4 = uStack_340._4_4_;
  uStack_2b0 = puStack_338;
  plStack_2a8 = uStack_330;
  if (uStack_330 != (long *)0x0) {
    LOCK();
    uStack_330[1] = uStack_330[1] + 1;
    UNLOCK();
  }
  uStack_2a0 = uStack_328;
  if (((ulong)plStack_320 & 1) == 0) {
    uStack_288 = uStack_310;
    uStack_298 = (ulong)plStack_320;
    uStack_290 = uStack_318;
  }
  else {
    func_0x0412e5e0(&uStack_298,uStack_310,uStack_318);
  }
  uStack_280 = uStack_308;
  if (iVar5 == 4) {
    if ((DAT_0f5c6ef0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5c6ef0), iVar6 != 0)) {
      func_0x080e5ca0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c6e70,0xf53dab8);
      func_0x0410844d(&DAT_0f5c6ef0);
    }
    plVar8 = (long *)(*(long *)(lVar2 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3)
                             - 1U & *(uint *)(_DAT_0f5c6e70 + 4)) * 8);
    do {
      lVar9 = *plVar8;
      if (lVar9 == -1) goto LAB_08068b78;
      plVar8 = (long *)(*(long *)(lVar2 + 0x30) + lVar9 * 0x18);
    } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5c6e70 + 4));
    if (plVar8 == *(long **)(lVar2 + 0x38)) {
LAB_08068b78:
      puVar7 = &DAT_0f5c6e70;
    }
    else {
      puVar7 = (undefined *)plVar8[2];
    }
    lVar9 = func_0x048b1040(lVar2 + 0x18,puVar7,uVar3,1);
    if (lVar9 == 0) {
      lStack_208 = 0;
      uStack_200 = 0;
      func_0x048b10d0(&lStack_208);
      lVar11 = *(long *)(lStack_208 + 0x38);
      lVar9 = lStack_208;
      if (lVar11 == 0) goto LAB_08068fa8;
LAB_08068fcd:
      do {
        lVar9 = lVar11;
        lVar11 = *(long *)(lVar9 + 0x38);
        if (*(long *)(lVar9 + 0x38) == 0) {
          lStack_208 = 0;
          uStack_200 = 0;
          func_0x048b10d0(&lStack_208);
          lVar11 = lStack_208;
        }
      } while (lVar11 != 0);
    }
    else {
      lVar11 = *(long *)(lVar9 + 0x38);
      if (*(long *)(lVar9 + 0x38) != 0) goto LAB_08068fcd;
LAB_08068fa8:
      lStack_208 = 0;
      uStack_200 = 0;
      func_0x048b10d0(&lStack_208);
      lVar11 = lStack_208;
      if (lStack_208 != 0) goto LAB_08068fcd;
    }
    lVar9 = *(long *)(lVar9 + 0x48);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x80,0);
    }
    *(undefined1 *)(puVar10 + 3) = uStack_2e0;
    *(undefined4 *)(puVar10 + 1) = uStack_2f0;
    *(undefined4 *)((long)puVar10 + 0xc) = uStack_2ec;
    *(undefined4 *)(puVar10 + 2) = uStack_2e8;
    *(undefined4 *)((long)puVar10 + 0x14) = uStack_2e4;
    *puVar10 = &UNK_0f4e3c70;
    func_0x04167a20(puVar10 + 4,auStack_2d8);
    puVar10[5] = uStack_2d0;
    puVar10[6] = uStack_2c8;
    puVar10[7] = CONCAT44(uStack_2bc,uStack_2c0);
    puVar10[8] = CONCAT44(uStack_2b4,uStack_2b8);
    puVar10[9] = uStack_2b0;
    puVar10[10] = plStack_2a8;
    puVar10[0xb] = uStack_2a0;
    puVar10[0xe] = uStack_288;
    *(undefined4 *)(puVar10 + 0xc) = (undefined4)uStack_298;
    *(undefined4 *)((long)puVar10 + 100) = uStack_298._4_4_;
    *(undefined4 *)(puVar10 + 0xd) = (undefined4)uStack_290;
    *(undefined4 *)((long)puVar10 + 0x6c) = uStack_290._4_4_;
    puVar10[0xf] = uStack_280;
    plVar8 = *(long **)(lVar9 + 8);
    *(undefined8 **)(lVar9 + 8) = puVar10;
  }
  else {
    if (iVar5 != 1) goto LAB_08068cac;
    if ((DAT_0f5c6ef0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f5c6ef0), iVar6 != 0)) {
      func_0x080e5ca0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c6e70,0xf53dab8);
      func_0x0410844d(&DAT_0f5c6ef0);
    }
    plVar8 = (long *)(*(long *)(lVar2 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) >> 3)
                             - 1U & *(uint *)(_DAT_0f5c6e70 + 4)) * 8);
    do {
      lVar9 = *plVar8;
      if (lVar9 == -1) goto LAB_08068b08;
      plVar8 = (long *)(*(long *)(lVar2 + 0x30) + lVar9 * 0x18);
    } while (*(uint *)(*(long *)(lVar2 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5c6e70 + 4));
    if (plVar8 == *(long **)(lVar2 + 0x38)) {
LAB_08068b08:
      puVar7 = &DAT_0f5c6e70;
    }
    else {
      puVar7 = (undefined *)plVar8[2];
    }
    lVar9 = func_0x048b0c90(lVar2 + 0x18,puVar7,uVar3,1);
    if (lVar9 == 0) {
      lStack_208 = 0;
      uStack_200 = 0;
      FUN_048b0d20(&lStack_208);
      lVar9 = lStack_208;
    }
    lVar9 = *(long *)(lVar9 + 0x58);
    puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x80,0);
    }
    *(undefined1 *)(puVar10 + 3) = uStack_2e0;
    *(undefined4 *)(puVar10 + 1) = uStack_2f0;
    *(undefined4 *)((long)puVar10 + 0xc) = uStack_2ec;
    *(undefined4 *)(puVar10 + 2) = uStack_2e8;
    *(undefined4 *)((long)puVar10 + 0x14) = uStack_2e4;
    *puVar10 = &UNK_0f4e3c70;
    func_0x04167a20(puVar10 + 4,auStack_2d8);
    puVar10[5] = uStack_2d0;
    puVar10[6] = uStack_2c8;
    puVar10[7] = CONCAT44(uStack_2bc,uStack_2c0);
    puVar10[8] = CONCAT44(uStack_2b4,uStack_2b8);
    puVar10[9] = uStack_2b0;
    puVar10[10] = plStack_2a8;
    puVar10[0xb] = uStack_2a0;
    puVar10[0xe] = uStack_288;
    *(undefined4 *)(puVar10 + 0xc) = (undefined4)uStack_298;
    *(undefined4 *)((long)puVar10 + 100) = uStack_298._4_4_;
    *(undefined4 *)(puVar10 + 0xd) = (undefined4)uStack_290;
    *(undefined4 *)((long)puVar10 + 0x6c) = uStack_290._4_4_;
    puVar10[0xf] = uStack_280;
    plVar8 = *(long **)(lVar9 + 8);
    *(undefined8 **)(lVar9 + 8) = puVar10;
  }
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_298 = 0;
  plStack_2a8 = (long *)0x0;
  uStack_2b0 = 0;
  if (plVar8 != (long *)0x0) {
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_298 = 0;
    plStack_2a8 = (long *)0x0;
    uStack_2b0 = 0;
    (**(code **)(*plVar8 + 0x28))();
  }
LAB_08068cac:
  uStack_228 = uStack_48;
  uStack_224 = uStack_44;
  uStack_220 = uStack_40;
  uStack_21c = uStack_3c;
  uStack_238 = (undefined4)uStack_58;
  uStack_234 = uStack_58._4_4_;
  uStack_230 = (undefined4)uStack_50;
  uStack_22c = uStack_50._4_4_;
  iStack_218 = iVar5;
  uStack_214 = uVar3;
  uStack_210 = uVar4;
  lStack_240 = lVar2;
  func_0x080e8570(&lStack_208,&lStack_240,&UNK_0137be20,0x10);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f1076b0;
  if (aplStack_1f0[0] != (long *)0x0) {
    lVar2 = *aplStack_1f0[0];
    aplStack_1f0[0] = plVar8;
    (**(code **)(lVar2 + 8))();
    plVar8 = aplStack_1f0[0];
  }
  aplStack_1f0[0] = plVar8;
  auStack_c0[0] = uStack_1f8;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 1;
  uStack_a0 = 0;
  puStack_98 = &UNK_080ebb20;
  puStack_90 = &SUB_048b06d0;
  puStack_88 = &UNK_080eab60;
  puStack_80 = &UNK_080ebb30;
  puStack_78 = &UNK_080ebd70;
  uStack_70 = 0;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  FUN_048b05a0(uStack_200,auStack_c0);
  plVar8 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      func_0x0412c2d0(plVar8);
    }
  }
  func_0x080e8820(&lStack_208);
  func_0x048b0bc0(aplStack_1f0);
  puStack_2f8 = &UNK_0f4e3c70;
  if ((uStack_298 & 1) != 0) {
    func_0x0412a280(uStack_288,uStack_298 & 0xfffffffffffffffe);
  }
  plVar8 = plStack_2a8;
  if (plStack_2a8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_2a8 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_2a8 + 0x10))(plStack_2a8);
      func_0x0412c2d0(plVar8);
    }
  }
  func_0x04167a40(auStack_2d8);
  uStack_380 = &UNK_0f4e3c70;
  if (((ulong)plStack_320 & 1) != 0) {
    func_0x0412a280(uStack_310,(ulong)plStack_320 & 0xfffffffffffffffe);
  }
  plVar8 = uStack_330;
  if (uStack_330 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_330 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*uStack_330 + 0x10))(uStack_330);
      func_0x0412c2d0(plVar8);
    }
  }
  func_0x04167a40(&uStack_360);
  return;
}


