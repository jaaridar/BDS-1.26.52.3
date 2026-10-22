/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcd9c640 (ELF vaddr 0xcc9c640)
 * Label: caller-of-callee
 * Body:  [[0cd9c640, 0cd9d034]]
 * Ghidra: FUN_0cd9c640
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cd9c640(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  ulong uStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined8 uStack_390;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  undefined1 *puStack_368;
  undefined1 *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined4 uStack_348;
  undefined8 uStack_340;
  long *plStack_338;
  uint uStack_328;
  undefined4 uStack_324;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined4 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 uStack_230;
  long lStack_228;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  long lStack_1e8;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined2 uStack_1a0;
  undefined4 uStack_19e;
  undefined2 uStack_19a;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined2 uStack_160;
  undefined4 uStack_15e;
  undefined2 uStack_15a;
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
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  char cStack_f0;
  uint7 uStack_ef;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 uStack_b8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  undefined1 auStack_68 [56];
  
  lVar3 = func_0x0cde4390(param_1 + 0x18);
  if ((*(int *)(lVar3 + 0x60) == -0x2b3da790) && (lVar3 = *(long *)(lVar3 + 0x68), lVar3 != 0)) {
    bVar9 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar8 = lVar3 + 9;
    if (bVar9) {
      lVar8 = *(long *)(lVar3 + 0x18);
    }
    uVar7 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar9) {
      uVar7 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x0cde48b0(&uStack_120,param_1,lVar8,uVar7);
    uStack_258 = uStack_120;
    uStack_254 = uStack_11c;
    uStack_250 = uStack_118;
    uStack_24c = uStack_114;
    uStack_248 = uStack_110;
    uStack_244 = uStack_10c;
    uStack_240 = uStack_108;
    uStack_23c = uStack_104;
    uStack_238 = uStack_100;
    uStack_234 = uStack_fc;
  }
  else {
    func_0x0cde48b0(&uStack_120,param_1,&UNK_013f0a86,0xf);
    uStack_258 = uStack_120;
    uStack_254 = uStack_11c;
    uStack_250 = uStack_118;
    uStack_24c = uStack_114;
    uStack_248 = uStack_110;
    uStack_244 = uStack_10c;
    uStack_240 = uStack_108;
    uStack_23c = uStack_104;
    uStack_238 = uStack_100;
    uStack_234 = uStack_fc;
  }
  if (cStack_f0 != '\0') {
    return;
  }
  lStack_228 = (ulong)uStack_ef << 8;
  uStack_230 = 0x1e1bc4d500000004;
  if ((DAT_0f706970 == '\0') && (iVar2 = func_0x04108328(&DAT_0f706970), iVar2 != 0)) {
    func_0x0cde4580(0xf706958);
    func_0x0410844d(&DAT_0f706970);
  }
  uStack_328 = uStack_230._4_4_;
  plStack_320 = (long *)0x0;
  uStack_318 = (long *)((ulong)uStack_318._4_4_ << 0x20);
  uStack_310 = (long *)0x1;
  puStack_308 = &SUB_048aead0;
  puStack_300 = &UNK_04906f70;
  puStack_2f8 = &UNK_0cde51c0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  func_0x049057f0(&uStack_250,&uStack_328);
  func_0x048aea50(&uStack_328);
  uStack_388 = uStack_240;
  uStack_384 = uStack_23c;
  uStack_398 = uStack_250;
  uStack_394 = uStack_24c;
  puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar4 = &UNK_0ef46ef8;
  if ((DAT_0f551bc8 == '\0') && (iVar2 = func_0x04108328(&DAT_0f551bc8), iVar2 != 0)) {
    FUN_04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  uStack_328 = _DAT_0f551bb4;
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar5 == (long *)0x0) {
    FUN_0eec74c0(0x30,0);
  }
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&UNK_0ef46c48;
  plStack_320 = plVar5 + 3;
  plVar5[3] = (long)puVar4;
  plVar5[4] = 0;
  *(undefined1 *)(plVar5 + 5) = 0xff;
  uStack_3b8 = 0;
  plStack_3b0 = (long *)0x0;
  uStack_318 = plVar5;
  func_0x048afd20(&uStack_398,&uStack_328);
  plVar5 = uStack_318;
  if (uStack_318 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_318 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*uStack_318 + 0x10))(uStack_318);
      func_0x0412c2d0(plVar5);
    }
  }
  plVar5 = plStack_3b0;
  if (plStack_3b0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_3b0 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
      func_0x0412c2d0(plVar5);
    }
  }
  uStack_218 = uStack_258;
  uStack_214 = uStack_254;
  uStack_210 = uStack_250;
  uStack_20c = uStack_24c;
  uStack_208 = uStack_248;
  uStack_204 = uStack_244;
  uStack_200 = uStack_240;
  uStack_1fc = uStack_23c;
  uStack_1f8 = uStack_238;
  uStack_1f4 = uStack_234;
  uStack_1f0 = (undefined4)uStack_230;
  uStack_1ec = uStack_230._4_4_;
  lStack_1e8 = lStack_228;
  func_0x0cde4df0(&uStack_328,CONCAT44(uStack_254,uStack_258) + 0x18);
  if (uStack_310._4_4_ == 2) {
    piVar6 = *(int **)(uStack_318[0xf] + 0x60);
    iVar2 = *piVar6;
    while (iVar2 != (int)uStack_310) {
      piVar6 = piVar6 + 0x16;
      iVar2 = *piVar6;
    }
    plVar5 = *(long **)(piVar6 + 0xc);
    while (plVar5 != plStack_320) {
      piVar6 = *(int **)(piVar6 + 0xe);
      plVar5 = *(long **)(piVar6 + 0xc);
    }
LAB_0cd9c9bf:
    *(byte *)((long)piVar6 + 0x12) = *(byte *)((long)piVar6 + 0x12) | 4;
  }
  else {
    if (uStack_310._4_4_ == 1) {
      piVar6 = *(int **)(uStack_318[0xf] + 0x48);
      iVar2 = *piVar6;
      while (iVar2 != (int)uStack_310) {
        piVar6 = piVar6 + 0x1a;
        iVar2 = *piVar6;
      }
      goto LAB_0cd9c9bf;
    }
    if (uStack_310._4_4_ == 0) {
      *(uint *)(uStack_318 + 3) = *(uint *)(uStack_318 + 3) | 0x40000;
    }
  }
  func_0x0cde53c0(&uStack_328,&uStack_218,&UNK_0148b2c2,0x15);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar5 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar5 = (long)&UNK_0ef46ce8;
  if (uStack_310 != (long *)0x0) {
    lVar3 = *uStack_310;
    uStack_310 = plVar5;
    (**(code **)(lVar3 + 8))();
    plVar5 = uStack_310;
  }
  uStack_310 = plVar5;
  uStack_398 = (undefined4)uStack_318;
  uStack_390 = 0;
  uStack_388 = 0;
  uStack_380 = 1;
  uStack_378 = 0;
  puStack_370 = &UNK_0490ce30;
  puStack_368 = &SUB_048b06d0;
  puStack_360 = &SUB_0490cb20;
  puStack_358 = &UNK_0cde5910;
  puStack_350 = &UNK_0cde5a70;
  uStack_348 = 0;
  uStack_340 = 0;
  plStack_338 = (long *)0x0;
  FUN_048b05a0(plStack_320,&uStack_398);
  plVar5 = plStack_338;
  if (plStack_338 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_338 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_338 + 0x10))(plStack_338);
      func_0x0412c2d0(plVar5);
    }
  }
  func_0x0cde5610(&uStack_328);
  uStack_b8 = (undefined1)lStack_1e8;
  uStack_c8 = uStack_1f8;
  uStack_c4 = uStack_1f4;
  uStack_c0 = uStack_1f0;
  uStack_bc = uStack_1ec;
  uStack_d8 = uStack_208;
  uStack_d4 = uStack_204;
  uStack_d0 = uStack_200;
  uStack_cc = uStack_1fc;
  uStack_e8 = uStack_218;
  uStack_e4 = uStack_214;
  uStack_e0 = uStack_210;
  uStack_dc = uStack_20c;
  func_0x048b0bc0(&uStack_310);
  uStack_15e = 0;
  uStack_15a = 0;
  uStack_190 = 0xffffffffffffffff;
  uStack_188 = 0;
  uStack_180 = 0xff;
  puStack_198 = &UNK_0f0edc68;
  uStack_178 = 0;
  uStack_170 = _DAT_014f0238;
  uStack_168 = 0;
  uStack_160 = 0;
  func_0x0cd9d0b0(&uStack_158,&uStack_e8,&puStack_198);
  uStack_328 = 5;
  func_0x0470d9a0(&uStack_3b8,&UNK_011ff9be,0x273,2,&uStack_328);
  func_0x0cde4df0(&uStack_328,CONCAT44(uStack_154,uStack_158) + 0x18);
  if (uStack_310._4_4_ == 2) {
    piVar6 = *(int **)(uStack_318[0xf] + 0x60);
    iVar2 = *piVar6;
    while (iVar2 != (int)uStack_310) {
      piVar6 = piVar6 + 0x16;
      iVar2 = *piVar6;
    }
    plVar5 = *(long **)(piVar6 + 0xc);
    while (plVar5 != plStack_320) {
      piVar6 = *(int **)(piVar6 + 0xe);
      plVar5 = *(long **)(piVar6 + 0xc);
    }
  }
  else {
    if (uStack_310._4_4_ != 1) {
      if (uStack_310._4_4_ == 0) {
        *(uint *)(uStack_318 + 3) = *(uint *)(uStack_318 + 3) | 0x40000;
      }
      goto LAB_0cd9ccd3;
    }
    piVar6 = *(int **)(uStack_318[0xf] + 0x48);
    iVar2 = *piVar6;
    while (iVar2 != (int)uStack_310) {
      piVar6 = piVar6 + 0x1a;
      iVar2 = *piVar6;
    }
  }
  *(byte *)((long)piVar6 + 0x12) = *(byte *)((long)piVar6 + 0x12) | 4;
LAB_0cd9ccd3:
  func_0x0cde53c0(&uStack_328,&uStack_158,&UNK_012b4f0c,0x17);
  puVar4 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar4 = &UNK_0ef46ce8;
  if (uStack_310 != (long *)0x0) {
    lVar3 = *uStack_310;
    uStack_310 = puVar4;
    (**(code **)(lVar3 + 8))();
    puVar4 = uStack_310;
  }
  uStack_310 = puVar4;
  uStack_398 = (undefined4)uStack_318;
  uStack_390 = 0;
  uStack_388 = 0;
  uStack_380 = 1;
  uStack_378 = 0;
  puStack_370 = &UNK_0490ce30;
  puStack_368 = &SUB_048b06d0;
  puStack_360 = &SUB_0490cb20;
  puStack_358 = &UNK_0cde5c50;
  puStack_350 = &UNK_0cde5db0;
  uStack_348 = 0;
  uStack_340 = 0;
  plStack_338 = (long *)0x0;
  FUN_048b05a0(plStack_320,&uStack_398);
  plVar5 = plStack_338;
  if (plStack_338 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_338 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_338 + 0x10))(plStack_338);
      func_0x0412c2d0(plVar5);
    }
  }
  func_0x0cde5610(&uStack_328);
  uStack_78 = uStack_128;
  uStack_88 = uStack_138;
  uStack_84 = uStack_134;
  uStack_80 = uStack_130;
  uStack_7c = uStack_12c;
  uStack_98 = uStack_148;
  uStack_94 = uStack_144;
  uStack_90 = uStack_140;
  uStack_8c = uStack_13c;
  uStack_a8 = uStack_158;
  uStack_a4 = uStack_154;
  uStack_a0 = uStack_150;
  uStack_9c = uStack_14c;
  func_0x048b0bc0(&uStack_310);
  uStack_19e = 0;
  uStack_19a = 0;
  uStack_1d0 = 0xffffffffffffffff;
  uStack_1c8 = 0;
  uStack_1c0 = 0xff;
  puStack_1d8 = &UNK_0f0edc68;
  uStack_1b8 = 0;
  uStack_1b0 = _DAT_014f0238;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  func_0x0cd9d0b0(auStack_68,&uStack_a8,&puStack_1d8);
  uStack_398 = 0x14;
  func_0x0470d9a0(&uStack_328,&UNK_01423e4f,0x197,2,&uStack_398);
  if ((uStack_328 & 1) != 0) {
    func_0x0412a280(uStack_318,CONCAT44(uStack_324,uStack_328) & 0xfffffffffffffffe);
  }
  if ((uStack_3b8 & 1) != 0) {
    func_0x0412a280(uStack_3a8,uStack_3b8 & 0xfffffffffffffffe);
  }
  return;
}


