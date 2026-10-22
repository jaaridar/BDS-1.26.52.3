/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8e8e880 (ELF vaddr 0x8d8e880)
 * Label: caller-of-callee
 * Body:  [[08e8e880, 08e8f728] [08e8f730, 08e8f970] [08e8f980, 08e8ffb7] [08e8ffc0, 08e90213] [08e90220, 08e903b8] [08e903c0, 08e90610] [08e90620, 08e906bb] [08e906c0, 08e90733] [08e90740, 08e907a0] [08e907b0, 08e90835] [08e90840, 08e90853] [08e90860, 08e90988] [08e90990, 08e90b95] [08e90ba0, 08e90bb8] [08e90bc0, 08e90c5d] [08e90c60, 08e90c87] [08e90c90, 08e90e07] [08e90e10, 08e90ea8] [08e90eb0, 08e91353] [08e91360, 08e91394] [08e913a0, 08e91476] [08e91480, 08e914f1] [08e91500, 08e91641] [08e91650, 08e91be8] [08e91bf0, 08e91d79] [08e91d80, 08e91e5a] [08e91e60, 08e91e82] [08e91e90, 08e91f27] [08e91f30, 08e92061] [08e92070, 08e920d4] [08e920e0, 08e92174] [08e92180, 08e9219d] [08e921a0, 08e921cb] [08e921d0, 08e9231a] [08e92320, 08e92383] [08e92390, 08e923ba] [08e923c0, 08e924a6] [08e924b0, 08e92546] [08e92550, 08e92565] [08e92570, 08e92576] [08e92580, 08e925e9] [08e925f0, 08e92611] [08e92620, 08e92633] [08e92640, 08e928a1] [08e928b0, 08e928fe] [08e92900, 08e92a31] [08e92a40, 08e92d9e]]
 * Ghidra: FUN_08e8e880
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08e8e880(long param_1,uint *param_2,undefined8 param_3,long *param_4)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint **ppuVar7;
  undefined *puVar8;
  undefined2 uVar9;
  undefined1 auVar10 [8];
  undefined1 auVar11 [4];
  undefined4 uVar12;
  char cVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined *puVar21;
  long *plVar22;
  uint *puVar23;
  uint *puVar24;
  ulong uVar25;
  long *plVar26;
  uint *puVar27;
  uint uVar28;
  int *piVar29;
  uint *puVar30;
  long lVar31;
  uint *puVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  long lVar37;
  uint *puVar38;
  bool bVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  ulong uStack_4d0;
  uint *puStack_4c8;
  undefined4 uStack_4c0;
  undefined2 uStack_4bc;
  undefined2 uStack_4ba;
  uint uStack_4b8;
  uint uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  ulong uStack_4a8;
  uint *puStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long *plStack_480;
  undefined8 uStack_478;
  uint *puStack_470;
  uint *puStack_468;
  undefined1 auStack_460 [8];
  undefined8 uStack_458;
  undefined *puStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 auStack_430 [16];
  undefined1 auStack_420 [16];
  undefined8 uStack_410;
  long *plStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long lStack_368;
  uint *puStack_360;
  uint uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  uint *puStack_348;
  uint uStack_340;
  undefined2 uStack_33c;
  undefined2 uStack_33a;
  undefined8 uStack_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  ulong uStack_328;
  undefined8 uStack_320;
  ulong uStack_318;
  undefined *puStack_310;
  undefined1 auStack_308 [4];
  undefined2 uStack_304;
  undefined2 uStack_302;
  uint uStack_300;
  undefined4 uStack_2fc;
  undefined8 uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  undefined1 *puStack_2e0;
  undefined1 auStack_2d8 [8];
  uint *puStack_2d0;
  uint *puStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 uStack_2a0;
  long *plStack_298;
  long lStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long *plStack_158;
  long *plStack_150;
  uint uStack_148;
  undefined1 uStack_144;
  undefined1 uStack_143;
  undefined2 uStack_142;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined1 uStack_137;
  undefined2 uStack_136;
  undefined4 uStack_134;
  undefined *puStack_130;
  uint *puStack_128;
  undefined8 *puStack_120;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  long lStack_50;
  long lStack_48;
  uint *puStack_40;
  undefined8 uStack_38;
  
  plStack_150 = param_4;
  uStack_38 = param_3;
  func_0x08e80040(auStack_308);
  lStack_368 = param_1;
  func_0x0d84fd50(param_1,auStack_308);
  func_0x0651ffe0(auStack_308);
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar15 == (undefined8 *)0x0) goto LAB_08e92aad;
LAB_08e8e8f6:
  uVar16 = _UNK_0122ab12;
  auStack_308 = (undefined1  [4])0x21;
  uStack_304 = 0;
  uStack_302 = 0;
  uStack_300 = 0x1b;
  uStack_2fc = 0;
  *(ulong *)((long)puVar15 + 0xb) = CONCAT35(_UNK_0122ab0f,_DAT_0122ab0a);
  *(undefined8 *)((long)puVar15 + 0x13) = uVar16;
  uVar16 = CONCAT53(_DAT_0122ab0a,_UNK_0122ab07);
  *puVar15 = _DAT_0122aaff;
  puVar15[1] = uVar16;
  *(undefined1 *)((long)puVar15 + 0x1b) = 0;
  uStack_448 = (undefined *)0x0;
  uStack_440 = (uint *)0x0;
  uStack_458 = (uint *)0x0;
  puStack_450 = (undefined *)0x0;
  puStack_468 = (uint *)0x0;
  auStack_460 = (undefined1  [8])0x0;
  uStack_478 = (uint *)0x0;
  puStack_470 = (uint *)0x0;
  uStack_438 = (undefined8 *)0x0;
  uStack_2f8 = (uint *)puVar15;
  func_0x048b1dc0(auStack_430);
  func_0x048b1dc0(auStack_420);
  uStack_380 = 0;
  uStack_378 = 0;
  uStack_390 = 0;
  uStack_388 = 0;
  uStack_3a0 = 0;
  uStack_398 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  puStack_3c0 = (undefined8 *)0x0;
  uStack_3b8 = 0;
  uStack_3d0 = 0;
  puStack_3c8 = (undefined8 *)0x0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  uStack_410 = 0;
  plStack_408 = (long *)0x0;
  if (((ulong)uStack_448 & 1) == 0) {
    if (((uint)auStack_308 & 1) == 0) {
      uStack_438 = (undefined8 *)uStack_2f8;
      uStack_448 = (undefined *)CONCAT44(CONCAT22(uStack_302,uStack_304),auStack_308);
      uStack_440 = (uint *)CONCAT44(uStack_2fc,uStack_300);
    }
    else {
      func_0x04885070(&uStack_448,uStack_2f8,CONCAT44(uStack_2fc,uStack_300));
    }
  }
  else {
    bVar39 = ((uint)auStack_308 & 1) != 0;
    puVar15 = (undefined8 *)(auStack_308 + 1);
    if (bVar39) {
      puVar15 = (undefined8 *)uStack_2f8;
    }
    uVar36 = (ulong)(auStack_308[0] >> 1);
    if (bVar39) {
      uVar36 = CONCAT44(uStack_2fc,uStack_300);
    }
    func_0x04885120(&uStack_448,puVar15,uVar36);
  }
  if (((uint)auStack_308 & 1) != 0) {
    func_0x0412a280(uStack_2f8,
                    CONCAT26(uStack_302,CONCAT24(uStack_304,auStack_308)) & 0xfffffffffffffffe);
  }
  if (_DAT_0f54fd90 == (uint *)0x0) {
    func_0x048b0de0(auStack_308,&uStack_4c0);
    uVar12 = uStack_2fc;
    uVar28 = uStack_300;
    auVar11 = auStack_308;
    plVar22 = _DAT_0f54fd98;
    uVar6 = CONCAT22(uStack_302,uStack_304);
    auStack_308 = (undefined1  [4])0x0;
    uStack_304 = 0;
    uStack_302 = 0;
    uStack_300 = 0;
    uStack_2fc = 0;
    _DAT_0f54fd90 = (uint *)CONCAT44(uVar6,auVar11);
    _DAT_0f54fd98 = (long *)CONCAT44(uVar12,uVar28);
    if (plVar22 != (long *)0x0) {
      LOCK();
      plVar20 = plVar22 + 1;
      lVar37 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar37 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        FUN_0412c2d0(plVar22);
      }
    }
    plVar22 = (long *)CONCAT44(uStack_2fc,uStack_300);
    if (plVar22 != (long *)0x0) {
      LOCK();
      plVar20 = plVar22 + 1;
      lVar37 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar37 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        FUN_0412c2d0(plVar22);
      }
    }
  }
  puVar32 = _DAT_0f54fd90;
  if (DAT_0f601f50 == '\0') goto LAB_08e92b0b;
LAB_08e8eb25:
  if (DAT_0f601f50 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f601f50);
    if (iVar14 != 0) {
      func_0x08ee32e0(0xf601f38,puVar32);
      func_0x0410844d(&DAT_0f601f50);
    }
  }
  auStack_308 = (undefined1  [4])0xf601f38;
  uStack_304 = 0;
  uStack_302 = 0;
  uStack_300 = _DAT_0f601f3c;
  uStack_2f8 = (uint *)0x0;
  uStack_2f0 = CONCAT44(uStack_2f0._4_4_,0x80);
  uStack_2e8 = 0x70;
  puStack_2e0 = &SUB_08ee3200;
  auStack_2d8 = (undefined1  [8])0x0;
  puStack_2d0 = (uint *)0x0;
  puStack_2c8 = (uint *)&UNK_08ee3350;
  puStack_2c0 = (undefined *)0x0;
  uStack_2b8._0_4_ = 0;
  uStack_2b8._4_4_ = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  plStack_298 = (long *)0x0;
  lStack_290 = 0;
  func_0x048aee30(&uStack_4c0,puVar32,auStack_308,&UNK_0d3eb07b);
  lVar37 = lStack_290;
  lStack_290 = 0;
  if (lVar37 != 0) {
    func_0x048ae940(lVar37);
    func_0x0412a280(lVar37,0x78);
  }
  plVar22 = plStack_298;
  if (plStack_298 != (long *)0x0) {
    LOCK();
    plVar20 = plStack_298 + 1;
    lVar37 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar37 == 0) {
      (**(code **)(*plStack_298 + 0x10))(plStack_298);
      FUN_0412c2d0(plVar22);
    }
  }
  if (DAT_0f603ae8 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f603ae8);
    if (iVar14 != 0) {
      func_0x08edbc00(0xf603ad0);
      func_0x0410844d(&DAT_0f603ae8);
    }
  }
  auStack_308 = (undefined1  [4])_DAT_0f603ad4;
  uStack_300 = 0x8edbb10;
  uStack_2fc = 0;
  uStack_2f8 = (uint *)&UNK_08ee3490;
  func_0x05da1460(&uStack_4c0);
  if (_DAT_0f54fd90 == (uint *)0x0) {
    func_0x048b0de0(auStack_308,&uStack_4c0);
    uVar12 = uStack_2fc;
    uVar28 = uStack_300;
    auVar11 = auStack_308;
    plVar22 = _DAT_0f54fd98;
    uVar6 = CONCAT22(uStack_302,uStack_304);
    auStack_308 = (undefined1  [4])0x0;
    uStack_304 = 0;
    uStack_302 = 0;
    uStack_300 = 0;
    uStack_2fc = 0;
    _DAT_0f54fd90 = (uint *)CONCAT44(uVar6,auVar11);
    _DAT_0f54fd98 = (long *)CONCAT44(uVar12,uVar28);
    if (plVar22 != (long *)0x0) {
      LOCK();
      plVar20 = plVar22 + 1;
      lVar37 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar37 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        FUN_0412c2d0(plVar22);
      }
    }
    plVar22 = (long *)CONCAT44(uStack_2fc,uStack_300);
    if (plVar22 != (long *)0x0) {
      LOCK();
      plVar20 = plVar22 + 1;
      lVar37 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar37 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        FUN_0412c2d0(plVar22);
      }
    }
  }
  puVar32 = _DAT_0f54fd90;
  if (DAT_0f602008 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f602008);
    if (iVar14 != 0) {
      func_0x08ee36a0(0xf601ff0,puVar32);
      func_0x0410844d(&DAT_0f602008);
    }
  }
  if (DAT_0f602008 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f602008);
    if (iVar14 != 0) {
      func_0x08ee36a0(0xf601ff0,puVar32);
      func_0x0410844d(&DAT_0f602008);
    }
  }
  auStack_308 = (undefined1  [4])0xf601ff0;
  uStack_304 = 0;
  uStack_302 = 0;
  uStack_300 = _DAT_0f601ff4;
  uStack_2f8 = (uint *)0x0;
  uStack_2f0 = CONCAT44(uStack_2f0._4_4_,0x280);
  uStack_2e8 = 0x20;
  puStack_2e0 = &UNK_08ee35c0;
  auStack_2d8 = (undefined1  [8])0x0;
  puStack_2d0 = (uint *)0x0;
  puStack_2c8 = (uint *)&UNK_08ee3710;
  puStack_2c0 = (undefined *)0x1;
  uStack_2b8._0_4_ = 0x65b1ed0;
  uStack_2b8._4_4_ = 0;
  uStack_2b0 = 0x8ee3dc0;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  plStack_298 = (long *)0x0;
  lStack_290 = 0;
  func_0x048aee30(&uStack_4c0,puVar32,auStack_308,0x3170bd64);
  lVar37 = lStack_290;
  lStack_290 = 0;
  if (lVar37 != 0) {
    func_0x048ae940(lVar37);
    func_0x0412a280(lVar37,0x78);
  }
  plVar22 = plStack_298;
  if (plStack_298 != (long *)0x0) {
    LOCK();
    plVar20 = plStack_298 + 1;
    lVar37 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar37 == 0) {
      (**(code **)(*plStack_298 + 0x10))(plStack_298);
      FUN_0412c2d0(plVar22);
    }
  }
  if (DAT_0f603ba0 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f603ba0);
    if (iVar14 != 0) {
      func_0x08edc8d0(0xf603b88);
      func_0x0410844d(&DAT_0f603ba0);
    }
  }
  func_0x065ac270(&uStack_4c0,_DAT_0f603b8c,&UNK_08ee3dd0);
  if (_DAT_0f54fd90 == (uint *)0x0) {
    func_0x048b0de0(auStack_308,&uStack_4c0);
    uVar12 = uStack_2fc;
    uVar28 = uStack_300;
    auVar11 = auStack_308;
    plVar22 = _DAT_0f54fd98;
    uVar6 = CONCAT22(uStack_302,uStack_304);
    auStack_308 = (undefined1  [4])0x0;
    uStack_304 = 0;
    uStack_302 = 0;
    uStack_300 = 0;
    uStack_2fc = 0;
    _DAT_0f54fd90 = (uint *)CONCAT44(uVar6,auVar11);
    _DAT_0f54fd98 = (long *)CONCAT44(uVar12,uVar28);
    if (plVar22 != (long *)0x0) {
      LOCK();
      plVar20 = plVar22 + 1;
      lVar37 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar37 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        FUN_0412c2d0(plVar22);
      }
    }
    plVar22 = (long *)CONCAT44(uStack_2fc,uStack_300);
    if (plVar22 != (long *)0x0) {
      LOCK();
      plVar20 = plVar22 + 1;
      lVar37 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar37 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        FUN_0412c2d0(plVar22);
      }
    }
  }
  puVar32 = _DAT_0f54fd90;
  if (DAT_0f6020c0 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f6020c0);
    if (iVar14 != 0) {
      func_0x08ee40d0(0xf6020a8,puVar32);
      func_0x0410844d(&DAT_0f6020c0);
    }
  }
  if (DAT_0f6020c0 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f6020c0);
    if (iVar14 != 0) {
      func_0x08ee40d0(0xf6020a8,puVar32);
      func_0x0410844d(&DAT_0f6020c0);
    }
  }
  auStack_308 = (undefined1  [4])0xf6020a8;
  uStack_304 = 0;
  uStack_302 = 0;
  uStack_300 = _DAT_0f6020ac;
  uStack_2f8 = (uint *)0x0;
  uStack_2f0 = CONCAT44(uStack_2f0._4_4_,0x280);
  uStack_2e8 = 0x20;
  puStack_2e0 = &UNK_08ee3ff0;
  auStack_2d8 = (undefined1  [8])&UNK_08ee4140;
  puStack_2d0 = (uint *)0x0;
  puStack_2c8 = (uint *)&UNK_08ee44b0;
  puStack_2c0 = (undefined *)0x1;
  uStack_2b8._0_4_ = 0x65bd0c0;
  uStack_2b8._4_4_ = 0;
  uStack_2b0 = 0x8ee4540;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  plStack_298 = (long *)0x0;
  lStack_290 = 0;
  func_0x048aee30(&uStack_4c0,puVar32,auStack_308,0x1852205b);
  lVar37 = lStack_290;
  lStack_290 = 0;
  if (lVar37 != 0) {
    func_0x048ae940(lVar37);
    func_0x0412a280(lVar37,0x78);
  }
  plVar22 = plStack_298;
  if (plStack_298 != (long *)0x0) {
    LOCK();
    plVar20 = plStack_298 + 1;
    lVar37 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar37 == 0) {
      (**(code **)(*plStack_298 + 0x10))(plStack_298);
      FUN_0412c2d0(plVar22);
    }
  }
  if (DAT_0f603c58 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f603c58);
    if (iVar14 != 0) {
      func_0x08edd960(0xf603c40);
      func_0x0410844d(&DAT_0f603c58);
    }
  }
  func_0x065ac270(&uStack_4c0,_DAT_0f603c44,&UNK_08ee4550);
  if (_DAT_0f54fd90 == (uint *)0x0) {
    func_0x048b0de0(auStack_308,&uStack_4c0);
    uVar12 = uStack_2fc;
    uVar28 = uStack_300;
    auVar11 = auStack_308;
    plVar22 = _DAT_0f54fd98;
    uVar6 = CONCAT22(uStack_302,uStack_304);
    auStack_308 = (undefined1  [4])0x0;
    uStack_304 = 0;
    uStack_302 = 0;
    uStack_300 = 0;
    uStack_2fc = 0;
    _DAT_0f54fd90 = (uint *)CONCAT44(uVar6,auVar11);
    _DAT_0f54fd98 = (long *)CONCAT44(uVar12,uVar28);
    if (plVar22 != (long *)0x0) {
      LOCK();
      plVar20 = plVar22 + 1;
      lVar37 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar37 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        FUN_0412c2d0(plVar22);
      }
    }
    plVar22 = (long *)CONCAT44(uStack_2fc,uStack_300);
    if (plVar22 != (long *)0x0) {
      LOCK();
      plVar20 = plVar22 + 1;
      lVar37 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar37 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        FUN_0412c2d0(plVar22);
      }
    }
  }
  puVar32 = _DAT_0f54fd90;
  if (DAT_0f602178 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f602178);
    if (iVar14 != 0) {
      func_0x08ee4830(0xf602160,puVar32);
      func_0x0410844d(&DAT_0f602178);
    }
  }
  if (DAT_0f602178 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f602178);
    if (iVar14 != 0) {
      func_0x08ee4830(0xf602160,puVar32);
      func_0x0410844d(&DAT_0f602178);
    }
  }
  auStack_308 = (undefined1  [4])0xf602160;
  uStack_304 = 0;
  uStack_302 = 0;
  uStack_300 = _DAT_0f602164;
  uStack_2f8 = (uint *)0x0;
  uStack_2f0 = CONCAT44(uStack_2f0._4_4_,0x280);
  uStack_2e8 = 0x10;
  puStack_2e0 = &UNK_08ee4750;
  auStack_2d8 = (undefined1  [8])&UNK_08ee48a0;
  puStack_2d0 = (uint *)0x0;
  puStack_2c8 = (uint *)&UNK_08ee4a70;
  puStack_2c0 = (undefined *)0x1;
  uStack_2b8._0_4_ = 0x65bc1f0;
  uStack_2b8._4_4_ = 0;
  uStack_2b0 = 0x8ee4b20;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  plStack_298 = (long *)0x0;
  lStack_290 = 0;
  func_0x048aee30(&uStack_4c0,puVar32,auStack_308,0xac965f1b);
  lVar37 = lStack_290;
  lStack_290 = 0;
  if (lVar37 != 0) {
    func_0x048ae940(lVar37);
    func_0x0412a280(lVar37,0x78);
  }
  plVar22 = plStack_298;
  if (plStack_298 != (long *)0x0) {
    LOCK();
    plVar20 = plStack_298 + 1;
    lVar37 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar37 == 0) {
      (**(code **)(*plStack_298 + 0x10))(plStack_298);
      FUN_0412c2d0(plVar22);
    }
  }
  if (DAT_0f603d10 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f603d10);
    if (iVar14 != 0) {
      func_0x08ede550(0xf603cf8);
      func_0x0410844d(&DAT_0f603d10);
    }
  }
  func_0x065ac270(&uStack_4c0,_DAT_0f603cfc,&UNK_08ee4b30);
  auStack_420 = func_0x08edea60();
  uStack_4e8 = (uint *)0x6e72755478616d0e;
  uStack_4e0 = uStack_4e0 & 0xffffffffffffff00;
  func_0x065af670(auStack_308);
  puVar21 = (undefined *)((long)&uStack_4e8 + 1);
  if ((uStack_2f0 & 1) == 0) {
    if (((ulong)uStack_4e8 & 1) == 0) {
      puStack_2e0 = uStack_4d8;
      uStack_2f0 = (ulong)uStack_4e8;
      uStack_2e8 = uStack_4e0;
    }
    else {
      func_0x04885070(&uStack_2f0,uStack_4d8,uStack_4e0);
    }
  }
  else {
    uVar36 = (ulong)uStack_4e8 >> 1 & 0x7f;
    puVar8 = puVar21;
    if (((ulong)uStack_4e8 & 1) != 0) {
      uVar36 = uStack_4e0;
      puVar8 = uStack_4d8;
    }
    func_0x04885120(&uStack_2f0,puVar8,uVar36);
  }
  _auStack_2d8 = func_0x08edece0();
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f1630d0;
  uStack_2b8 = (uint *)(puVar15 + 3);
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f163120;
  plVar22 = (long *)CONCAT44(uStack_2ac,uStack_2b0);
  uStack_2b0 = SUB84(puVar15,0);
  uStack_2ac = (undefined4)((ulong)puVar15 >> 0x20);
  if (plVar22 == (long *)0x0) {
LAB_08e8f417:
    if (puStack_3c8 < puStack_3c0) goto LAB_08e8f429;
LAB_08e8f465:
    puVar15 = (undefined8 *)func_0x065b01f0(&uStack_3d0,auStack_308);
  }
  else {
    LOCK();
    plVar20 = plVar22 + 1;
    lVar37 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar37 != 0) goto LAB_08e8f417;
    (**(code **)(*plVar22 + 0x10))(plVar22);
    FUN_0412c2d0(plVar22);
    if (puStack_3c0 <= puStack_3c8) goto LAB_08e8f465;
LAB_08e8f429:
    puVar15 = puStack_3c8;
    func_0x065b0410(puStack_3c8,auStack_308);
    puVar15 = puVar15 + 0x36;
  }
  puStack_3c8 = puVar15;
  func_0x0652dc20(auStack_308);
  auStack_308 = (undefined1  [4])_DAT_0f642300;
  uStack_304 = _DAT_0f642304;
  if ((_DAT_0f642308 & 1) == 0) {
    uStack_2f0 = _DAT_0f642318;
    uStack_300 = _DAT_0f642308;
    uStack_2fc = uRam000000000f64230c;
    uStack_2f8 = (uint *)CONCAT44(uRam000000000f642314,_DAT_0f642310);
  }
  else {
    func_0x0412e5e0(&uStack_300,_DAT_0f642318,CONCAT44(uRam000000000f642314,_DAT_0f642310));
  }
  uVar16 = func_0x0730fa70(puVar15 + -0x36,auStack_308,0x10001);
  uStack_4bc = _DAT_0f6426ec;
  uStack_4c0 = _DAT_0f6426e8;
  if ((_DAT_0f6426f0 & 1) == 0) {
    uStack_4a8 = _DAT_0f642700;
    uStack_4b8 = _DAT_0f6426f0;
    uStack_4b4 = uRam000000000f6426f4;
    uStack_4b0 = _DAT_0f6426f8;
    uStack_4ac = uRam000000000f6426fc;
  }
  else {
    func_0x0412e5e0(&uStack_4b8,_DAT_0f642700,CONCAT44(uRam000000000f6426fc,_DAT_0f6426f8));
  }
  func_0x0730fa70(uVar16,&uStack_4c0,0);
  if ((uStack_4b8 & 1) != 0) {
    func_0x0412a280(uStack_4a8,CONCAT44(uStack_4b4,uStack_4b8) & 0xfffffffffffffffe);
  }
  if ((uStack_300 & 1) != 0) {
    func_0x0412a280(uStack_2f0,CONCAT44(uStack_2fc,uStack_300) & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_4e8 & 1) != 0) {
    func_0x0412a280(uStack_4d8,(ulong)uStack_4e8 & 0xfffffffffffffffe);
  }
  uStack_4e8._0_6_ = CONCAT24(_DAT_0f642304,_DAT_0f642300);
  if ((_DAT_0f642308 & 1) == 0) {
    uStack_4d0 = _DAT_0f642318;
    uStack_4e0 = CONCAT44(uRam000000000f64230c,_DAT_0f642308);
    uStack_4d8 = (undefined *)CONCAT44(uRam000000000f642314,_DAT_0f642310);
  }
  else {
    func_0x0412e5e0(&uStack_4e0,_DAT_0f642318,CONCAT44(uRam000000000f642314,_DAT_0f642310));
  }
  uVar16 = func_0x0730fa70(&uStack_478,&uStack_4e8,0x10001);
  uStack_33c = _DAT_0f6426ec;
  uStack_340 = _DAT_0f6426e8;
  if ((_DAT_0f6426f0 & 1) == 0) {
    uStack_328 = _DAT_0f642700;
    uStack_338 = (uint *)CONCAT44(uRam000000000f6426f4,_DAT_0f6426f0);
    uStack_330 = _DAT_0f6426f8;
    uStack_32c = uRam000000000f6426fc;
  }
  else {
    func_0x0412e5e0(&uStack_338,_DAT_0f642700,CONCAT44(uRam000000000f6426fc,_DAT_0f6426f8));
  }
  func_0x0730fa70(uVar16,&uStack_340,0);
  if (((ulong)uStack_338 & 1) != 0) {
    func_0x0412a280(uStack_328,(ulong)uStack_338 & 0xfffffffffffffffe);
  }
  puStack_360 = param_2;
  if ((uStack_4e0 & 1) != 0) {
    func_0x0412a280(uStack_4d0,uStack_4e0 & 0xfffffffffffffffe);
  }
  auStack_430 = func_0x08ee5000();
  auVar10 = auStack_460;
  puVar32 = uStack_458;
  if (auStack_460 != (undefined1  [8])0x0) {
    for (; auVar10 != (undefined1  [8])puVar32; puVar32 = puVar32 + -0xc) {
      if ((puVar32[-8] & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(puVar32 + -4),*(ulong *)(puVar32 + -8) & 0xfffffffffffffffe)
        ;
      }
    }
    uStack_458 = (uint *)auVar10;
    func_0x0412a280(auStack_460,(long)puStack_450 - (long)auStack_460);
  }
  puVar27 = puStack_468;
  puVar24 = puStack_470;
  puVar32 = uStack_478;
  uStack_478 = (uint *)0x0;
  puStack_470 = (uint *)0x0;
  puStack_468 = (uint *)0x0;
  uStack_148 = (uint)puVar32;
  uStack_144 = (undefined1)((ulong)puVar32 >> 0x20);
  uStack_143 = (undefined1)((ulong)puVar32 >> 0x28);
  uStack_142 = (undefined2)((ulong)puVar32 >> 0x30);
  uStack_140._0_4_ = (uint)puVar24;
  uStack_140._4_4_ = (undefined4)((ulong)puVar24 >> 0x20);
  uStack_138 = SUB81(puVar27,0);
  uStack_137 = (undefined1)((ulong)puVar27 >> 8);
  uStack_136 = (undefined2)((ulong)puVar27 >> 0x10);
  uStack_134 = (undefined4)((ulong)puVar27 >> 0x20);
  auStack_460 = (undefined1  [8])0x0;
  uStack_458 = (uint *)0x0;
  puStack_450 = (undefined *)0x0;
  puStack_120 = uStack_438;
  puStack_130 = uStack_448;
  puStack_128 = uStack_440;
  uStack_448 = (undefined *)0x0;
  uStack_440 = (uint *)0x0;
  uStack_438 = (undefined8 *)0x0;
  uStack_f8 = uStack_410;
  plStack_f0 = plStack_408;
  uStack_e8 = uStack_400;
  uStack_410 = 0;
  plStack_408 = (long *)0x0;
  uStack_400 = 0;
  uStack_e0 = uStack_3f8;
  uStack_d8 = uStack_3f0;
  uStack_3f8 = 0;
  uStack_3f0 = 0;
  uStack_d0 = uStack_3e8;
  uStack_c8 = uStack_3e0;
  uStack_c0 = uStack_3d8;
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_b8 = uStack_3d0;
  puStack_b0 = puStack_3c8;
  puStack_a8 = puStack_3c0;
  uStack_3d0 = 0;
  puStack_3c8 = (undefined8 *)0x0;
  puStack_3c0 = (undefined8 *)0x0;
  uStack_a0 = uStack_3b8;
  uStack_98 = uStack_3b0;
  uStack_90 = uStack_3a8;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  uStack_88 = uStack_3a0;
  uStack_80 = uStack_398;
  uStack_78 = uStack_390;
  uStack_3a0 = 0;
  uStack_398 = 0;
  uStack_390 = 0;
  uStack_70 = (undefined4)uStack_388;
  uStack_6c = uStack_388._4_4_;
  uStack_68 = (undefined4)uStack_380;
  uStack_64 = uStack_380._4_4_;
  uStack_60 = uStack_378;
  uStack_388 = 0;
  uStack_380 = 0;
  uStack_378 = 0;
  auStack_118 = auStack_430;
  auStack_108 = auStack_420;
  func_0x0651ffe0();
  lVar37 = (long)uStack_478;
  puVar32 = puStack_470;
  if (uStack_478 != (uint *)0x0) {
    for (; (uint *)lVar37 != puVar32; puVar32 = (uint *)((long)puVar32 + -0x30)) {
      if ((*(byte *)((long)puVar32 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)((long)puVar32 + -0x10),
                        *(ulong *)((long)puVar32 + -0x20) & 0xfffffffffffffffe);
      }
    }
    puStack_470 = (uint *)lVar37;
    func_0x0412a280(uStack_478,(long)puStack_468 - (long)uStack_478);
  }
  lVar37 = lStack_368;
  func_0x0d84fd50(lStack_368,&uStack_148);
  func_0x0651ffe0(&uStack_148);
  func_0x08e84080(auStack_308);
  func_0x0d84fd50(lVar37,auStack_308);
  func_0x0651ffe0(auStack_308);
  auStack_308 = (undefined1  [4])0x746e451e;
  uStack_304 = 0x7469;
  uStack_302 = 0x4379;
  uStack_300 = 0x6f706d6f;
  uStack_2fc = 0x746e656e;
  uStack_2f8 = (uint *)((ulong)uStack_2f8 & 0xffffffffffffff00);
  func_0x08e8a0e0(&uStack_478,auStack_308);
  if (((uint)auStack_308 & 1) != 0) {
    func_0x0412a280(uStack_2f8,
                    CONCAT26(uStack_302,CONCAT24(uStack_304,auStack_308)) & 0xfffffffffffffffe);
  }
  func_0x08e8a1e0(&uStack_478);
  uStack_4e8 = (uint *)0x797469746e650c;
  func_0x065af670(auStack_308);
  if ((uStack_2f0 & 1) == 0) {
    if (((ulong)uStack_4e8 & 1) == 0) {
      puStack_2e0 = uStack_4d8;
      uStack_2f0 = (ulong)uStack_4e8;
      uStack_2e8 = uStack_4e0;
    }
    else {
      func_0x04885070(&uStack_2f0,uStack_4d8,uStack_4e0);
    }
  }
  else {
    uVar36 = (ulong)uStack_4e8 >> 1 & 0x7f;
    puVar8 = puVar21;
    if (((ulong)uStack_4e8 & 1) != 0) {
      uVar36 = uStack_4e0;
      puVar8 = uStack_4d8;
    }
    func_0x04885120(&uStack_2f0,puVar8,uVar36);
  }
  auVar42 = func_0x08eeac20();
  _auStack_2d8 = auVar42;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f163de0;
  uStack_2b8 = (uint *)(puVar15 + 3);
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f163e30;
  plVar22 = (long *)CONCAT44(uStack_2ac,uStack_2b0);
  uStack_2b0 = SUB84(puVar15,0);
  uStack_2ac = (undefined4)((ulong)puVar15 >> 0x20);
  if (plVar22 == (long *)0x0) {
LAB_08e8fba3:
    if (puStack_3c8 < puStack_3c0) goto LAB_08e8fbb5;
LAB_08e8fbf1:
    uVar36 = func_0x065b01f0(&uStack_3d0,auStack_308);
  }
  else {
    LOCK();
    plVar20 = plVar22 + 1;
    lVar37 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar37 != 0) goto LAB_08e8fba3;
    (**(code **)(*plVar22 + 0x10))(plVar22);
    FUN_0412c2d0(plVar22);
    if (puStack_3c0 <= puStack_3c8) goto LAB_08e8fbf1;
LAB_08e8fbb5:
    puVar15 = puStack_3c8;
    func_0x065b0410(puStack_3c8,auStack_308);
    uVar36 = (long)puVar15 + 0x1b0;
  }
  puStack_3c8 = (undefined8 *)uVar36;
  func_0x0652dc20(auStack_308);
  uStack_4c0 = _DAT_0f6423c0;
  uStack_4bc = _DAT_0f6423c4;
  if ((_DAT_0f6423c8 & 1) == 0) {
    uStack_4a8 = _DAT_0f6423d8;
    uStack_4b8 = _DAT_0f6423c8;
    uStack_4b4 = uRam000000000f6423cc;
    uStack_4b0 = _DAT_0f6423d0;
    uStack_4ac = uRam000000000f6423d4;
  }
  else {
    func_0x0412e5e0(&uStack_4b8,_DAT_0f6423d8,CONCAT44(uRam000000000f6423d4,_DAT_0f6423d0));
  }
  func_0x0730fa70(uVar36 - 0x1b0,&uStack_4c0,0x10002);
  if ((uStack_4b8 & 1) != 0) {
    func_0x0412a280(uStack_4a8,CONCAT44(uStack_4b4,uStack_4b8) & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_4e8 & 1) != 0) {
    func_0x0412a280(uStack_4d8,(ulong)uStack_4e8 & 0xfffffffffffffffe);
  }
  uStack_4e8 = (uint *)0x797469746e650c;
  func_0x065af670(auStack_308);
  if ((uStack_2f0 & 1) == 0) {
    if (((ulong)uStack_4e8 & 1) == 0) {
      puStack_2e0 = uStack_4d8;
      uStack_2f0 = (ulong)uStack_4e8;
      uStack_2e8 = uStack_4e0;
    }
    else {
      func_0x04885070(&uStack_2f0,uStack_4d8,uStack_4e0);
    }
  }
  else {
    uVar36 = (ulong)uStack_4e8 >> 1 & 0x7f;
    if (((ulong)uStack_4e8 & 1) != 0) {
      uVar36 = uStack_4e0;
      puVar21 = uStack_4d8;
    }
    func_0x04885120(&uStack_2f0,puVar21,uVar36);
  }
  auVar42 = func_0x08eeb0e0();
  _auStack_2d8 = auVar42;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f163ea0;
  uStack_2b8 = (uint *)(puVar15 + 3);
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f163ef0;
  plVar22 = (long *)CONCAT44(uStack_2ac,uStack_2b0);
  uStack_2b0 = SUB84(puVar15,0);
  uStack_2ac = (undefined4)((ulong)puVar15 >> 0x20);
  if (plVar22 == (long *)0x0) {
LAB_08e8fdd3:
    if (puStack_3c0 <= puStack_3c8) {
LAB_08e8fe21:
      lVar37 = func_0x065b01f0(&uStack_3d0,auStack_308);
      goto LAB_08e8fe39;
    }
  }
  else {
    LOCK();
    plVar20 = plVar22 + 1;
    lVar37 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar37 != 0) goto LAB_08e8fdd3;
    (**(code **)(*plVar22 + 0x10))(plVar22);
    FUN_0412c2d0(plVar22);
    if (puStack_3c0 <= puStack_3c8) goto LAB_08e8fe21;
  }
  puVar15 = puStack_3c8;
  func_0x065b0410(puStack_3c8,auStack_308);
  lVar37 = (long)puVar15 + 0x1b0;
LAB_08e8fe39:
  puStack_3c8 = (undefined8 *)lVar37;
  func_0x0652dc20(auStack_308);
  auStack_308 = (undefined1  [4])_DAT_0f642340;
  uStack_304 = _DAT_0f642344;
  if ((_DAT_0f642348 & 1) == 0) {
    uStack_2f0 = _DAT_0f642358;
    uStack_300 = _DAT_0f642348;
    uStack_2fc = uRam000000000f64234c;
    uStack_2f8 = (uint *)CONCAT44(uRam000000000f642354,_DAT_0f642350);
  }
  else {
    func_0x0412e5e0(&uStack_300,_DAT_0f642358,CONCAT44(uRam000000000f642354,_DAT_0f642350));
  }
  func_0x0730fa70(lVar37 + -0x1b0,auStack_308,0);
  if ((uStack_300 & 1) != 0) {
    func_0x0412a280(uStack_2f0,CONCAT44(uStack_2fc,uStack_300) & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_4e8 & 1) != 0) {
    func_0x0412a280(uStack_4d8,(ulong)uStack_4e8 & 0xfffffffffffffffe);
  }
  uStack_4e8._0_6_ = CONCAT24(_DAT_0f6426ec,_DAT_0f6426e8);
  if ((_DAT_0f6426f0 & 1) == 0) {
    uStack_4d0 = _DAT_0f642700;
    uStack_4e0 = CONCAT44(uRam000000000f6426f4,_DAT_0f6426f0);
    uStack_4d8 = (undefined *)CONCAT44(uRam000000000f6426fc,_DAT_0f6426f8);
  }
  else {
    func_0x0412e5e0(&uStack_4e0,_DAT_0f642700,CONCAT44(uRam000000000f6426fc,_DAT_0f6426f8));
  }
  func_0x0730fa70(&uStack_478,&uStack_4e8,0);
  if ((uStack_4e0 & 1) != 0) {
    func_0x0412a280(uStack_4d0,uStack_4e0 & 0xfffffffffffffffe);
  }
  auVar42 = func_0x08edea60();
  auVar10 = auStack_460;
  auStack_430 = auVar42;
  lVar37 = (long)uStack_458;
  if (auStack_460 != (undefined1  [8])0x0) {
    for (; auVar10 != (undefined1  [8])lVar37; lVar37 = lVar37 + -0x30) {
      if ((*(byte *)(lVar37 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar37 + -0x10),
                        *(ulong *)(lVar37 + -0x20) & 0xfffffffffffffffe);
      }
    }
    uStack_458 = (uint *)auVar10;
    func_0x0412a280(auStack_460,(long)puStack_450 - (long)auStack_460);
  }
  puVar24 = puStack_468;
  puVar32 = puStack_470;
  lVar37 = (long)uStack_478;
  uStack_478 = (uint *)0x0;
  puStack_470 = (uint *)0x0;
  puStack_468 = (uint *)0x0;
  uStack_148 = (uint)lVar37;
  uStack_144 = (undefined1)((ulong)lVar37 >> 0x20);
  uStack_143 = (undefined1)((ulong)lVar37 >> 0x28);
  uStack_142 = (undefined2)((ulong)lVar37 >> 0x30);
  uStack_140._0_4_ = (uint)puVar32;
  uStack_140._4_4_ = (undefined4)((ulong)puVar32 >> 0x20);
  uStack_138 = SUB81(puVar24,0);
  uStack_137 = (undefined1)((ulong)puVar24 >> 8);
  uStack_136 = (undefined2)((ulong)puVar24 >> 0x10);
  uStack_134 = (undefined4)((ulong)puVar24 >> 0x20);
  auStack_460 = (undefined1  [8])0x0;
  uStack_458 = (uint *)0x0;
  puStack_450 = (undefined *)0x0;
  puStack_120 = uStack_438;
  puStack_130 = uStack_448;
  puStack_128 = uStack_440;
  uStack_448 = (undefined *)0x0;
  uStack_440 = (uint *)0x0;
  uStack_438 = (undefined8 *)0x0;
  uStack_f8 = uStack_410;
  plStack_f0 = plStack_408;
  uStack_e8 = uStack_400;
  uStack_410 = 0;
  plStack_408 = (long *)0x0;
  uStack_400 = 0;
  uStack_e0 = uStack_3f8;
  uStack_d8 = uStack_3f0;
  uStack_3f8 = 0;
  uStack_3f0 = 0;
  uStack_d0 = uStack_3e8;
  uStack_c8 = uStack_3e0;
  uStack_c0 = uStack_3d8;
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_b8 = uStack_3d0;
  puStack_b0 = puStack_3c8;
  puStack_a8 = puStack_3c0;
  uStack_3d0 = 0;
  puStack_3c8 = (undefined8 *)0x0;
  puStack_3c0 = (undefined8 *)0x0;
  uStack_a0 = uStack_3b8;
  uStack_98 = uStack_3b0;
  uStack_90 = uStack_3a8;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  uStack_88 = uStack_3a0;
  uStack_80 = uStack_398;
  uStack_78 = uStack_390;
  uStack_3a0 = 0;
  uStack_398 = 0;
  uStack_390 = 0;
  uStack_70 = (undefined4)uStack_388;
  uStack_6c = uStack_388._4_4_;
  uStack_68 = (undefined4)uStack_380;
  uStack_64 = uStack_380._4_4_;
  uStack_60 = uStack_378;
  uStack_388 = 0;
  uStack_380 = 0;
  uStack_378 = 0;
  auStack_118 = auStack_430;
  auStack_108 = auStack_420;
  func_0x0651ffe0();
  lVar37 = (long)uStack_478;
  puVar32 = puStack_470;
  if (uStack_478 != (uint *)0x0) {
    for (; (uint *)lVar37 != puVar32; puVar32 = (uint *)((long)puVar32 + -0x30)) {
      if ((*(byte *)((long)puVar32 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)((long)puVar32 + -0x10),
                        *(ulong *)((long)puVar32 + -0x20) & 0xfffffffffffffffe);
      }
    }
    puStack_470 = (uint *)lVar37;
    func_0x0412a280(uStack_478,(long)puStack_468 - (long)uStack_478);
  }
  func_0x0d84fd50(lStack_368,&uStack_148);
  func_0x0651ffe0(&uStack_148);
  uStack_148 = CONCAT31((int3)_DAT_01293442,0x20);
  uStack_144 = (undefined1)((uint)_DAT_01293442 >> 0x18);
  uStack_143 = (undefined1)_UNK_01293446;
  uStack_142 = (undefined2)((uint)_UNK_01293446 >> 8);
  uStack_140._1_3_ = (undefined3)_UNK_0129344a;
  uStack_140._0_4_ = CONCAT31(uStack_140._1_3_,(char)((uint)_UNK_01293446 >> 0x18));
  uStack_140._5_3_ = (undefined3)_UNK_0129344e;
  uStack_140._4_4_ = CONCAT31(uStack_140._5_3_,(char)((uint)_UNK_0129344a >> 0x18));
  uStack_138 = (undefined1)((uint)_UNK_0129344e >> 0x18);
  uStack_137 = 0;
  func_0x08e8a0e0(auStack_308,&uStack_148);
  if ((uStack_148 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_134,CONCAT22(uStack_136,CONCAT11(uStack_137,uStack_138))),
                    CONCAT26(uStack_142,CONCAT15(uStack_143,CONCAT14(uStack_144,uStack_148))) &
                    0xfffffffffffffffe);
  }
  func_0x08e8a1e0(auStack_308);
  uStack_144 = (undefined1)_DAT_0f642304;
  uStack_143 = (undefined1)((ushort)_DAT_0f642304 >> 8);
  uStack_148 = _DAT_0f642300;
  if ((_DAT_0f642308 & 1) == 0) {
    puStack_130 = (undefined *)_DAT_0f642318;
    uStack_140._0_4_ = _DAT_0f642308;
    uStack_140._4_4_ = uRam000000000f64230c;
    uStack_138 = (undefined1)_DAT_0f642310;
    uStack_137 = (undefined1)((uint)_DAT_0f642310 >> 8);
    uStack_136 = (undefined2)((uint)_DAT_0f642310 >> 0x10);
    uStack_134 = uRam000000000f642314;
  }
  else {
    func_0x0412e5e0(&uStack_140,_DAT_0f642318,CONCAT44(uRam000000000f642314,_DAT_0f642310));
  }
  func_0x0730fa70(auStack_308,&uStack_148,0x10001);
  if (((uint)uStack_140 & 1) != 0) {
    func_0x0412a280(puStack_130,CONCAT44(uStack_140._4_4_,(uint)uStack_140) & 0xfffffffffffffffe);
  }
  auVar42 = func_0x08edea60();
  uVar17 = uStack_2f0;
  puStack_2c0 = auVar42._0_8_;
  uStack_2b8._0_4_ = auVar42._8_4_;
  uStack_2b8._4_4_ = auVar42._12_4_;
  auVar42 = _auStack_2d8;
  uVar36 = uStack_2e8;
  if (uStack_2f0 != 0) {
    for (; uVar17 != uVar36; uVar36 = uVar36 - 0x30) {
      if ((*(byte *)(uVar36 - 0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(uVar36 - 0x10),
                        *(ulong *)(uVar36 - 0x20) & 0xfffffffffffffffe);
      }
    }
    uStack_2e8 = uVar17;
    func_0x0412a280(uStack_2f0,(long)puStack_2e0 - uStack_2f0);
    auVar42 = _auStack_2d8;
  }
  puStack_468 = uStack_2f8;
  uStack_478 = (uint *)CONCAT26(uStack_302,CONCAT24(uStack_304,auStack_308));
  puStack_470 = (uint *)CONCAT44(uStack_2fc,uStack_300);
  auStack_308 = (undefined1  [4])0x0;
  uStack_304 = 0;
  uStack_302 = 0;
  uStack_300 = 0;
  uStack_2fc = 0;
  uStack_2f8 = (uint *)0x0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  puStack_2e0 = (undefined1 *)0x0;
  puStack_450 = (undefined *)puStack_2c8;
  auStack_2d8 = (undefined1  [8])0x0;
  puStack_2d0 = (uint *)0x0;
  puStack_2c8 = (uint *)0x0;
  uStack_440 = (uint *)CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_2b8);
  uStack_448 = puStack_2c0;
  uStack_438 = (undefined8 *)CONCAT44(uStack_2ac,uStack_2b0);
  auStack_430._4_4_ = uStack_2a4;
  auStack_430._0_4_ = uStack_2a8;
  auStack_430._8_8_ = uStack_2a0;
  auStack_420._0_8_ = plStack_298;
  auStack_420._8_8_ = lStack_290;
  uStack_2a0 = 0;
  plStack_298 = (long *)0x0;
  lStack_290 = 0;
  uStack_410 = uStack_288;
  plStack_408 = plStack_280;
  uStack_288 = 0;
  plStack_280 = (long *)0x0;
  uStack_400 = uStack_278;
  uStack_3f8 = uStack_270;
  uStack_3f0 = uStack_268;
  uStack_278 = 0;
  uStack_270 = 0;
  uStack_268 = 0;
  uStack_3e8 = uStack_260;
  uStack_3e0 = uStack_258;
  uStack_3d8 = uStack_250;
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_3d0 = uStack_248;
  puStack_3c8 = puStack_240;
  puStack_3c0 = puStack_238;
  uStack_248 = 0;
  puStack_240 = (undefined8 *)0x0;
  puStack_238 = (undefined8 *)0x0;
  uStack_3b8 = uStack_230;
  uStack_3b0 = uStack_228;
  uStack_3a8 = uStack_220;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  uStack_3a0 = uStack_218;
  uStack_398 = uStack_210;
  uStack_390 = uStack_208;
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  _auStack_460 = auVar42;
  func_0x0651ffe0(&uStack_2f0);
  auVar11 = auStack_308;
  puVar32 = puStack_360;
  lVar37 = CONCAT26(uStack_302,CONCAT24(uStack_304,auStack_308));
  if (lVar37 != 0) {
    lVar35 = CONCAT44(uStack_2fc,uStack_300);
    lVar31 = lVar37;
    if (lVar37 != lVar35) {
      do {
        if ((*(byte *)(lVar35 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar35 + -0x10),
                          *(ulong *)(lVar35 + -0x20) & 0xfffffffffffffffe);
        }
        lVar35 = lVar35 + -0x30;
      } while (lVar35 != lVar37);
      lVar31 = CONCAT26(uStack_302,CONCAT24(uStack_304,auStack_308));
    }
    uStack_300 = (uint)auVar11;
    uStack_2fc = (undefined4)((ulong)lVar37 >> 0x20);
    func_0x0412a280(lVar31,(long)uStack_2f8 - lVar31);
  }
  func_0x0d84fd50(lStack_368,&uStack_478);
  func_0x0651ffe0(&uStack_478);
  func_0x08e8b680();
  if (_DAT_0f5fce28 == (long *)0x0) {
    return;
  }
  lStack_48 = (long)puVar32 + 9;
  lStack_50 = lStack_368 + 0x70;
  plVar22 = _DAT_0f5fce28;
LAB_08e906ec:
  (**(code **)(*(long *)plVar22[4] + 0x20))(&uStack_340);
  puVar24 = (uint *)CONCAT26(uStack_33a,CONCAT24(uStack_33c,uStack_340));
  puStack_40 = uStack_338;
  plStack_480 = plVar22;
  if (puVar24 != uStack_338) {
    uStack_358 = 0;
    puVar32 = uStack_338;
LAB_08e9077d:
    puVar27 = *(uint **)puVar24;
    param_2 = *(uint **)(puVar24 + 2);
    plVar22 = plStack_480;
    puStack_4c8 = puVar24;
    if (puVar27 != param_2) {
      uStack_498 = puVar24 + 6;
      lVar37 = 0;
      do {
        if ((ushort)puVar27[2] == 0) {
          if (((byte)puVar27[4] & 1) == 0) {
            if ((byte)((byte)puVar27[4] >> 1) != 0) goto LAB_08e907ed;
            puVar32 = (uint *)0x0;
          }
          else {
            if (*(long *)(puVar27 + 6) != 0) goto LAB_08e907ed;
            puVar32 = (uint *)0x0;
          }
        }
        else {
LAB_08e907ed:
          if (lVar37 == 0) {
            uVar36 = plVar22[3];
            if (0xfffffffffffffff7 < uVar36) {
              FUN_04882e30();
              goto LAB_08e92aa8;
            }
            lVar37 = plVar22[2];
            if (uVar36 < 0x17) {
              auStack_308[0] = (char)uVar36 * '\x02';
              puVar15 = (undefined8 *)(auStack_308 + 1);
              if (uVar36 != 0) goto LAB_08e908fe;
            }
            else {
              lVar35 = (uVar36 | 7) + 1;
              if ((uVar36 | 7) == 0x17) {
                lVar35 = 0x1a;
              }
              puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar35);
              if (puVar15 == (undefined8 *)0x0) {
                func_0x0eec74c0(lVar35,0);
              }
              auStack_308 = (undefined1  [4])((uint)lVar35 | 1);
              uStack_304 = (undefined2)((ulong)lVar35 >> 0x20);
              uStack_302 = (undefined2)((ulong)lVar35 >> 0x30);
              uStack_300 = (uint)uVar36;
              uStack_2fc = (undefined4)(uVar36 >> 0x20);
              plVar22 = plStack_480;
              uStack_2f8 = (uint *)puVar15;
LAB_08e908fe:
              func_0x0eee2ee0(puVar15,lVar37,uVar36);
            }
            *(undefined1 *)((long)puVar15 + uVar36) = 0;
            lVar37 = func_0x08e93510(uStack_38,uStack_498,auStack_308);
            if (((uint)auStack_308 & 1) != 0) {
              func_0x0412a280(uStack_2f8,
                              CONCAT26(uStack_302,CONCAT24(uStack_304,auStack_308)) &
                              0xfffffffffffffffe);
            }
            puVar23 = *(uint **)(lVar37 + 8);
            puVar24 = puStack_4c8;
            if (*(uint **)(lVar37 + 0x10) <= puVar23) goto LAB_08e90967;
LAB_08e90802:
            *puVar23 = *puVar27;
            *(ushort *)(puVar23 + 3) = (ushort)puVar27[3];
            puVar23[2] = puVar27[2];
            if ((puVar27[4] & 1) == 0) {
              *(undefined8 *)(puVar23 + 8) = *(undefined8 *)(puVar27 + 8);
              uVar28 = puVar27[5];
              uVar3 = puVar27[6];
              uVar4 = puVar27[7];
              puVar23[4] = puVar27[4];
              puVar23[5] = uVar28;
              puVar23[6] = uVar3;
              puVar23[7] = uVar4;
            }
            else {
              func_0x0412e5e0(puVar23 + 4,*(undefined8 *)(puVar27 + 8),*(undefined8 *)(puVar27 + 6))
              ;
            }
            puVar32 = (uint *)(ulong)puVar27[10];
            puVar23[10] = puVar27[10];
            *(uint **)(lVar37 + 8) = puVar23 + 0xc;
            puVar23 = puVar23 + 0xc;
          }
          else {
            puVar23 = *(uint **)(lVar37 + 8);
            if (puVar23 < *(uint **)(lVar37 + 0x10)) goto LAB_08e90802;
LAB_08e90967:
            puVar32 = (uint *)func_0x08dba070(lVar37,puVar27);
            puVar23 = puVar32;
          }
          *(uint **)(lVar37 + 8) = puVar23;
        }
        puVar27 = puVar27 + 0xc;
      } while (puVar27 != param_2);
    }
    uVar28 = uStack_358 & 1;
    uStack_358 = (uint)CONCAT71((int7)((ulong)puVar32 >> 8),1);
    if (uVar28 == 0) {
      lVar37 = plVar22[2];
      lVar35 = plVar22[3];
      uStack_498 = (uint *)plVar22[5];
      uStack_358 = (uint)plVar22[4];
      uStack_354 = *(undefined4 *)((long)plVar22 + 0x24);
      uStack_350 = (undefined4)plVar22[5];
      uStack_34c = *(undefined4 *)((long)plVar22 + 0x2c);
      if (uStack_498 != (uint *)0x0) {
        LOCK();
        *(long *)(uStack_498 + 2) = *(long *)(uStack_498 + 2) + 1;
        UNLOCK();
      }
      plVar22 = (long *)*plStack_150;
      uVar17 = func_0x04883620(auStack_308,lVar37,lVar35);
      uVar36 = plVar22[1];
      if (uVar36 != 0) {
        uVar25 = uVar36 - (uVar36 >> 1 & 0x5555555555555555);
        uVar25 = (uVar25 >> 2 & 0x3333333333333333) + (uVar25 & 0x3333333333333333);
        uVar25 = ((uVar25 >> 4) + uVar25 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar25 >> 0x38 < 2) {
          uVar34 = uVar36 - 1 & uVar17;
          plVar22 = *(long **)(*plVar22 + uVar34 * 8);
        }
        else if (uVar17 < uVar36) {
          plVar22 = *(long **)(*plVar22 + uVar17 * 8);
          uVar34 = uVar17;
        }
        else if ((uVar17 | uVar36) >> 0x20 == 0) {
          uVar34 = (uVar17 & 0xffffffff) % (uVar36 & 0xffffffff);
          plVar22 = *(long **)(*plVar22 + uVar34 * 8);
        }
        else {
          plVar22 = *(long **)(*plVar22 + (uVar17 % uVar36) * 8);
          uVar34 = uVar17 % uVar36;
        }
        if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
          if ((byte)(uVar25 >> 0x38) < 2) {
            do {
              if (plVar22[1] == uVar17) {
                if (plVar22[3] == lVar35) {
                  iVar14 = func_0x0eee3000(plVar22[2],lVar37,lVar35);
                  if (iVar14 == 0) goto LAB_08e90b2e;
                }
              }
              else if ((plVar22[1] & uVar36 - 1) != uVar34) break;
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
          else {
            do {
              uVar25 = plVar22[1];
              if (uVar25 == uVar17) {
                if (plVar22[3] == lVar35) {
                  iVar14 = func_0x0eee3000(plVar22[2],lVar37,lVar35);
                  if (iVar14 == 0) goto LAB_08e90b2e;
                }
              }
              else {
                if (uVar36 <= uVar25) {
                  if ((uVar25 | uVar36) >> 0x20 == 0) {
                    uVar25 = (uVar25 & 0xffffffff) % (uVar36 & 0xffffffff);
                  }
                  else {
                    uVar25 = uVar25 % uVar36;
                  }
                }
                if (uVar25 != uVar34) break;
              }
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
        }
      }
      puVar32 = uStack_498;
      piVar2 = *(int **)(puStack_4c8 + 2);
      puVar24 = puStack_4c8;
      plVar22 = plStack_480;
      for (piVar29 = *(int **)puStack_4c8; puStack_4c8 = puVar24, plStack_480 = plVar22,
          piVar29 != piVar2; piVar29 = piVar29 + 0xc) {
        iVar14 = *piVar29;
        if (iVar14 == 2) {
          if (((byte)puStack_360[2] & 1) == 0) {
            if ((byte)((byte)puStack_360[2] >> 1) == 0) goto LAB_08e90d0c;
          }
          else if (*(long *)(puStack_360 + 4) == 0) goto LAB_08e90d0c;
        }
        else {
          if (iVar14 != 1) {
            if (iVar14 == 0) {
              cVar13 = func_0x0d822d70(puStack_360,piVar29 + 2);
              if ((cVar13 == '\0') &&
                 ((*(char *)((long)piVar29 + 0x2a) != '\x01' ||
                  ((ushort)*puStack_360 < *(ushort *)(piVar29 + 10))))) goto LAB_08e90d0c;
            }
            goto LAB_08e90c10;
          }
          bVar1 = (byte)puStack_360[2];
          if ((bVar1 & 1) == 0) {
            uVar36 = (ulong)(bVar1 >> 1);
            uVar17 = (ulong)*(byte *)(piVar29 + 4);
            if ((*(byte *)(piVar29 + 4) & 1) != 0) goto LAB_08e90cbe;
LAB_08e90c7d:
            if (uVar36 != uVar17 >> 1) goto LAB_08e90c10;
          }
          else {
            uVar36 = *(ulong *)(puStack_360 + 4);
            uVar17 = (ulong)*(byte *)(piVar29 + 4);
            if ((*(byte *)(piVar29 + 4) & 1) == 0) goto LAB_08e90c7d;
LAB_08e90cbe:
            if (uVar36 != *(ulong *)(piVar29 + 6)) goto LAB_08e90c10;
          }
          lVar31 = lStack_48;
          if ((bVar1 & 1) != 0) {
            lVar31 = *(long *)(puStack_360 + 6);
          }
          if ((uVar17 & 1) == 0) {
            iVar14 = func_0x0eee3000(lVar31,(long)piVar29 + 0x11);
          }
          else {
            iVar14 = func_0x0eee3000(lVar31,*(undefined8 *)(piVar29 + 8));
          }
          if (iVar14 == 0) {
LAB_08e90d0c:
            puVar24 = (uint *)*plStack_150;
            plVar20 = (long *)func_0x04883620(auStack_308,lVar37,lVar35);
            plVar22 = *(long **)(puVar24 + 2);
            puStack_4a0 = puVar24;
            if (plVar22 == (long *)0x0) goto LAB_08e90ece;
            uVar36 = (long)plVar22 - ((ulong)plVar22 >> 1 & 0x5555555555555555);
            uVar36 = (uVar36 >> 2 & 0x3333333333333333) + (uVar36 & 0x3333333333333333);
            uVar36 = ((uVar36 >> 4) + uVar36 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            if (uVar36 >> 0x38 < 2) {
              plVar18 = (long *)((long)plVar22 - 1U & (ulong)plVar20);
            }
            else {
              plVar18 = plVar20;
              if (plVar22 <= plVar20) {
                if (((ulong)plVar20 | (ulong)plVar22) >> 0x20 == 0) {
                  plVar18 = (long *)(((ulong)plVar20 & 0xffffffff) % ((ulong)plVar22 & 0xffffffff));
                }
                else {
                  plVar18 = (long *)((ulong)plVar20 % (ulong)plVar22);
                }
              }
            }
            plVar19 = *(long **)(*(long *)puVar24 + (long)plVar18 * 8);
            puVar32 = uStack_498;
            plStack_158 = plVar18;
            if ((plVar19 == (long *)0x0) || (plVar19 = (long *)*plVar19, plVar19 == (long *)0x0))
            goto LAB_08e90ece;
            if (1 < (byte)(uVar36 >> 0x38)) goto LAB_08e90e7a;
            goto LAB_08e90e29;
          }
        }
LAB_08e90c10:
        puVar24 = puStack_4c8;
        plVar22 = plStack_480;
      }
      uStack_358 = 0;
      if (puVar32 == (uint *)0x0) goto LAB_08e91260;
      goto LAB_08e9123b;
    }
    goto LAB_08e91260;
  }
  goto LAB_08e92a48;
LAB_08e90b2e:
  uStack_358 = 0;
  puVar24 = puStack_4c8;
  puVar32 = uStack_498;
  plVar22 = plStack_480;
  goto joined_r0x08e90b4e;
LAB_08e90e7a:
  do {
    plVar26 = (long *)plVar19[1];
    if (plVar26 == plVar20) {
      if (plVar19[3] == lVar35) {
        uVar16 = func_0x0eee3000(plVar19[2],lVar37,lVar35);
        plVar18 = plStack_158;
        if ((int)uVar16 == 0) goto LAB_08e90e56;
      }
    }
    else {
      if (plVar22 <= plVar26) {
        if (((ulong)plVar26 | (ulong)plVar22) >> 0x20 == 0) {
          plVar26 = (long *)(((ulong)plVar26 & 0xffffffff) % ((ulong)plVar22 & 0xffffffff));
        }
        else {
          plVar26 = (long *)((ulong)plVar26 % (ulong)plVar22);
        }
      }
      puVar32 = uStack_498;
      if (plVar26 != plVar18) break;
    }
    plVar19 = (long *)*plVar19;
    puVar32 = uStack_498;
  } while (plVar19 != (long *)0x0);
  goto LAB_08e90ece;
  while (plVar19 = (long *)*plVar19, puVar32 = uStack_498, plVar19 != (long *)0x0) {
LAB_08e90e29:
    if ((long *)plVar19[1] == plVar20) {
      if (plVar19[3] == lVar35) {
        uVar16 = func_0x0eee3000(plVar19[2],lVar37,lVar35);
        plVar18 = plStack_158;
        if ((int)uVar16 == 0) goto LAB_08e90e56;
      }
    }
    else {
      puVar32 = uStack_498;
      if ((long *)((ulong)plVar19[1] & (long)plVar22 - 1U) != plVar18) break;
    }
  }
LAB_08e90ece:
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  puVar24 = puStack_4c8;
  auStack_308 = SUB84(plVar18,0);
  uStack_304 = (undefined2)((ulong)plVar18 >> 0x20);
  uStack_302 = (undefined2)((ulong)plVar18 >> 0x30);
  uStack_300 = (uint)puStack_4a0;
  uStack_2fc = (undefined4)((ulong)puStack_4a0 >> 0x20);
  uStack_2f8 = (uint *)0x1;
  *plVar18 = 0;
  plVar18[1] = (long)plVar20;
  plVar18[2] = lVar37;
  plVar18[3] = lVar35;
  plVar18[4] = CONCAT44(uStack_354,uStack_358);
  plVar18[5] = CONCAT44(uStack_34c,uStack_350);
  if (puVar32 != (uint *)0x0) {
    LOCK();
    *(long *)(puVar32 + 2) = *(long *)(puVar32 + 2) + 1;
    UNLOCK();
  }
  if ((long)plVar22 < 0) {
    fVar41 = (float)plVar22;
    fVar40 = (float)puStack_4a0[8];
    if (plVar22 != (long *)0x0) goto LAB_08e90fa3;
LAB_08e91002:
    uVar36 = 1;
    if ((long *)0x2 < plVar22) {
      uVar36 = (ulong)(((ulong)plVar22 & (long)plVar22 - 1U) != 0);
    }
    uVar36 = (long)plVar22 * 2 | uVar36;
    fVar40 = (float)func_0x0eee3ab0((float)(*(long *)(puStack_4a0 + 6) + 1) / fVar40);
    uVar17 = (long)(fVar40 - _DAT_01198778) & (long)fVar40 >> 0x3f | (long)fVar40;
    if (uVar17 < uVar36) {
      uVar17 = uVar36;
    }
    uVar36 = 2;
    if ((uVar17 == 1) || (uVar36 = uVar17, (uVar17 & uVar17 - 1) == 0)) {
      uVar17 = *(ulong *)(puStack_4a0 + 2);
      bVar39 = uVar36 < uVar17;
      if (uVar36 <= uVar17) goto LAB_08e9109c;
LAB_08e91074:
      func_0x08ebb7f0(puStack_4a0,uVar36);
    }
    else {
      uVar36 = func_0x0412c3f0();
      uVar17 = *(ulong *)(puStack_4a0 + 2);
      bVar39 = uVar36 < uVar17;
      if (uVar17 < uVar36) goto LAB_08e91074;
LAB_08e9109c:
      if (bVar39) {
        fVar40 = (float)func_0x0eee3ab0((float)*(ulong *)(puStack_4a0 + 6) / (float)puStack_4a0[8]);
        uVar25 = (long)(fVar40 - _DAT_01198778) & (long)fVar40 >> 0x3f | (long)fVar40;
        if ((uVar17 < 3) ||
           (uVar34 = uVar17 - (uVar17 >> 1 & 0x5555555555555555),
           uVar34 = (uVar34 >> 2 & 0x3333333333333333) + (uVar34 & 0x3333333333333333),
           1 < (byte)(((uVar34 >> 4) + uVar34 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar25 = func_0x0412c3f0(uVar25);
        }
        else if (1 < uVar25) {
          lVar37 = 0x3f;
          if (uVar25 - 1 != 0) {
            for (; uVar25 - 1 >> lVar37 == 0; lVar37 = lVar37 + -1) {
            }
          }
          uVar25 = 1L << (-((byte)lVar37 ^ 0x3f) & 0x3f);
        }
        if (uVar36 <= uVar25) {
          uVar36 = uVar25;
        }
        if (uVar36 < uVar17) goto LAB_08e91074;
      }
    }
    plVar22 = *(long **)(puStack_4a0 + 2);
    if (((ulong)plVar22 & (long)plVar22 - 1U) != 0) {
      if (plVar22 <= plVar20) {
        if (((ulong)plVar20 | (ulong)plVar22) >> 0x20 == 0) {
          plVar20 = (long *)(((ulong)plVar20 & 0xffffffff) % ((ulong)plVar22 & 0xffffffff));
          lVar37 = *(long *)puStack_4a0;
          plVar19 = *(long **)(lVar37 + (long)plVar20 * 8);
          goto joined_r0x08e9293b;
        }
        plVar20 = (long *)((ulong)plVar20 % (ulong)plVar22);
      }
      lVar37 = *(long *)puStack_4a0;
      plVar19 = *(long **)(lVar37 + (long)plVar20 * 8);
      goto joined_r0x08e91211;
    }
    plVar20 = (long *)((ulong)plVar20 & (long)plVar22 - 1U);
    lVar37 = *(long *)puStack_4a0;
    plVar19 = *(long **)(lVar37 + (long)plVar20 * 8);
joined_r0x08e9293b:
    if (plVar19 != (long *)0x0) goto LAB_08e91217;
LAB_08e90fc4:
    *plVar18 = *(long *)(puStack_4a0 + 4);
    *(long **)(puStack_4a0 + 4) = plVar18;
    *(uint **)(lVar37 + (long)plVar20 * 8) = puStack_4a0 + 4;
    plVar19 = (long *)0x0;
    if (*plVar18 != 0) {
      plVar19 = *(long **)(*plVar18 + 8);
      if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
        plVar19 = (long *)((ulong)plVar19 & (long)plVar22 - 1U);
        *(long **)(lVar37 + (long)plVar19 * 8) = plVar18;
      }
      else {
        if (plVar22 <= plVar19) {
          if (((ulong)plVar19 | (ulong)plVar22) >> 0x20 == 0) {
            plVar19 = (long *)(((ulong)plVar19 & 0xffffffff) % ((ulong)plVar22 & 0xffffffff));
            *(long **)(lVar37 + (long)plVar19 * 8) = plVar18;
            goto LAB_08e91221;
          }
          plVar19 = (long *)((ulong)plVar19 % (ulong)plVar22);
        }
        *(long **)(lVar37 + (long)plVar19 * 8) = plVar18;
      }
    }
  }
  else {
    fVar41 = (float)(long)plVar22;
    fVar40 = (float)puStack_4a0[8];
    if (plVar22 == (long *)0x0) goto LAB_08e91002;
LAB_08e90fa3:
    if (fVar41 * fVar40 < (float)(*(long *)(puStack_4a0 + 6) + 1)) goto LAB_08e91002;
    lVar37 = *(long *)puStack_4a0;
    plVar19 = *(long **)(lVar37 + (long)plStack_158 * 8);
    plVar20 = plStack_158;
joined_r0x08e91211:
    if (plVar19 == (long *)0x0) goto LAB_08e90fc4;
LAB_08e91217:
    *plVar18 = *plVar19;
    *plVar19 = (long)plVar18;
  }
LAB_08e91221:
  *(long *)(puStack_4a0 + 6) = *(long *)(puStack_4a0 + 6) + 1;
  uStack_358 = (uint)CONCAT71((int7)((ulong)plVar19 >> 8),1);
  plVar22 = plStack_480;
joined_r0x08e90b4e:
  plStack_480 = plVar22;
  if (puVar32 != (uint *)0x0) {
LAB_08e9123b:
    plVar22 = plStack_480;
    LOCK();
    puVar27 = puVar32 + 2;
    lVar37 = *(long *)puVar27;
    *(long *)puVar27 = *(long *)puVar27 + -1;
    UNLOCK();
    if (lVar37 == 0) {
      (**(code **)(*(long *)puVar32 + 0x10))(puVar32);
      FUN_0412c2d0(puVar32);
    }
  }
LAB_08e91260:
  uStack_478 = (uint *)0x0;
  puStack_470 = (uint *)0x0;
  puStack_468 = (uint *)0x0;
  auStack_308 = (undefined1  [4])0x0;
  uStack_304 = 0;
  uStack_302 = 0;
  uStack_300 = 0;
  uStack_2fc = 0;
  uStack_2f8 = (uint *)0x0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  puStack_2e0 = (undefined1 *)0x0;
  auStack_2d8 = (undefined1  [8])0x0;
  puStack_2d0 = (uint *)0x0;
  puStack_2c8 = (uint *)0x0;
  puStack_2c0 = (undefined *)0x0;
  if (_DAT_0f54fd90 == (uint *)0x0) {
    plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
    if (plVar20 == (long *)0x0) {
      func_0x0eec74c0(0x50,0);
    }
    plVar20[1] = 0;
    plVar20[2] = 0;
    *plVar20 = (long)&UNK_0ef44ab0;
    puVar32 = (uint *)(plVar20 + 3);
    plVar20[3] = 0;
    plVar20[4] = 0;
    plVar20[5] = 0;
    plVar20[6] = 0;
    plVar20[7] = 0;
    plVar20[8] = 0;
    plVar20[9] = 0;
    *(undefined4 *)(plVar20 + 9) = 0x3f600000;
    func_0x048af7e0(puVar32,8);
    lVar37 = plVar20[3];
    lVar35 = plVar20[4];
    if (lVar37 != lVar35) {
      func_0x0eee2dd0(lVar37,0xff,lVar35 - lVar37);
    }
    lVar31 = plVar20[6];
    if (plVar20[7] - lVar31 != 0) {
      uVar36 = (plVar20[7] - lVar31 >> 3) * -0x5555555555555555;
      uVar28 = (int)((ulong)(lVar35 - lVar37) >> 3) - 1;
      if (uVar36 < 2) {
        uVar36 = 1;
        uVar17 = 0;
      }
      else {
        puVar27 = (uint *)(lVar31 + 0x20);
        uVar17 = 0;
        do {
          uVar16 = *(undefined8 *)(lVar37 + (ulong)(puVar27[-6] & uVar28) * 8);
          *(ulong *)(lVar37 + (ulong)(puVar27[-6] & uVar28) * 8) = uVar17;
          *(undefined8 *)(puVar27 + -8) = uVar16;
          uVar16 = *(undefined8 *)(lVar37 + (ulong)(*puVar27 & uVar28) * 8);
          *(ulong *)(lVar37 + (ulong)(*puVar27 & uVar28) * 8) = uVar17 + 1;
          *(undefined8 *)(puVar27 + -2) = uVar16;
          uVar17 = uVar17 + 2;
          puVar27 = puVar27 + 0xc;
        } while (uVar17 != (uVar36 & 0xfffffffffffffffe));
      }
      if ((uVar36 & 1) != 0) {
        uVar36 = (ulong)(uVar28 & *(uint *)(lVar31 + 8 + uVar17 * 0x18));
        uVar16 = *(undefined8 *)(lVar37 + uVar36 * 8);
        *(ulong *)(lVar37 + uVar36 * 8) = uVar17;
        *(undefined8 *)(lVar31 + uVar17 * 0x18) = uVar16;
      }
    }
    plVar22 = _DAT_0f54fd98;
    _DAT_0f54fd90 = puVar32;
    if (_DAT_0f54fd98 == (long *)0x0) {
      uStack_2b0 = 0;
      uStack_2ac = 0;
      plVar22 = plStack_480;
    }
    else {
      LOCK();
      plVar18 = _DAT_0f54fd98 + 1;
      lVar37 = *plVar18;
      _DAT_0f54fd98 = plVar20;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar37 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        FUN_0412c2d0(plVar22);
      }
      uStack_2b0 = 0;
      uStack_2ac = 0;
      plVar22 = plStack_480;
      plVar20 = _DAT_0f54fd98;
      puVar32 = _DAT_0f54fd90;
      if (_DAT_0f54fd90 == (uint *)0x0) {
        uStack_2b8 = _DAT_0f54fd90;
        plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
        if (plVar20 == (long *)0x0) {
          func_0x0eec74c0(0x50,0);
        }
        plVar20[1] = 0;
        plVar20[2] = 0;
        *plVar20 = (long)&UNK_0ef44ab0;
        puVar32 = (uint *)(plVar20 + 3);
        plVar20[3] = 0;
        plVar20[4] = 0;
        plVar20[5] = 0;
        plVar20[6] = 0;
        plVar20[7] = 0;
        plVar20[8] = 0;
        plVar20[9] = 0;
        *(undefined4 *)(plVar20 + 9) = 0x3f600000;
        func_0x048af640(puVar32,8);
        plVar18 = _DAT_0f54fd98;
        plVar22 = plStack_480;
        _DAT_0f54fd90 = puVar32;
        puVar32 = uStack_2b8;
        if (_DAT_0f54fd98 != (long *)0x0) {
          LOCK();
          plVar19 = _DAT_0f54fd98 + 1;
          lVar37 = *plVar19;
          _DAT_0f54fd98 = plVar20;
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          plVar20 = _DAT_0f54fd98;
          if (lVar37 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            FUN_0412c2d0(plVar18);
            plVar22 = plStack_480;
            plVar20 = _DAT_0f54fd98;
            puVar32 = uStack_2b8;
          }
        }
      }
    }
  }
  else {
    uStack_2b0 = 0;
    uStack_2ac = 0;
    plVar20 = _DAT_0f54fd98;
    puVar32 = _DAT_0f54fd90;
  }
  _DAT_0f54fd98 = plVar20;
  param_2 = _DAT_0f54fd90;
  uStack_2a8 = SUB84(_DAT_0f54fd90,0);
  uStack_2a4 = (undefined4)((ulong)_DAT_0f54fd90 >> 0x20);
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  puStack_240 = (undefined8 *)0x0;
  puStack_238 = (undefined8 *)0x0;
  uStack_250 = 0;
  uStack_248 = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_270 = 0;
  uStack_268 = 0;
  plStack_280 = (long *)0x0;
  uStack_278 = 0;
  lStack_290 = 0;
  uStack_288 = 0;
  uStack_2a0 = 0;
  plStack_298 = (long *)0x0;
  uStack_2b8 = puVar32;
  if (((ulong)auStack_2d8 & 1) == 0) {
    if (((ulong)uStack_478 & 1) == 0) {
      puStack_2c8 = puStack_468;
      auStack_2d8 = (undefined1  [8])uStack_478;
      puStack_2d0 = puStack_470;
    }
    else {
      func_0x04885070(auStack_2d8,puStack_468,puStack_470);
    }
  }
  else {
    puVar27 = (uint *)((ulong)uStack_478 >> 1 & 0x7f);
    puVar32 = (uint *)((long)&uStack_478 + 1);
    if (((ulong)uStack_478 & 1) != 0) {
      puVar27 = puStack_470;
      puVar32 = puStack_468;
    }
    func_0x04885120(auStack_2d8,puVar32,puVar27);
  }
  if (((ulong)uStack_478 & 1) != 0) {
    func_0x0412a280(puStack_468,(ulong)uStack_478 & 0xfffffffffffffffe);
  }
  uVar36 = plVar22[3];
  if (0xfffffffffffffff7 < uVar36) goto LAB_08e92aa8;
  lVar37 = plVar22[2];
  if (uVar36 < 0x17) {
    uStack_320 = (uint *)CONCAT71(uStack_320._1_7_,(char)uVar36 * '\x02');
    puVar21 = (undefined *)((long)&uStack_320 + 1);
    if (uVar36 != 0) goto LAB_08e91554;
  }
  else {
    uVar17 = (uVar36 | 7) + 1;
    if ((uVar36 | 7) == 0x17) {
      uVar17 = 0x1a;
    }
    puVar21 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
    if (puVar21 == (undefined *)0x0) {
      func_0x0eec74c0(uVar17,0);
    }
    uStack_320 = (uint *)(uVar17 | 1);
    uStack_318 = uVar36;
    puStack_310 = puVar21;
LAB_08e91554:
    func_0x0eee2ee0(puVar21,lVar37,uVar36);
  }
  puVar21[uVar36] = 0;
  uStack_4c0 = 0x6d6f6316;
  uStack_4bc = 0x6f70;
  uStack_4ba = 0x656e;
  uStack_4b8 = 0x6449746e;
  uStack_4b4 = uStack_4b4 & 0xffffff00;
  if (((ulong)uStack_320 & 1) == 0) {
    uStack_4d8 = puStack_310;
    uStack_4e8 = uStack_320;
    uStack_4e0 = uStack_318;
  }
  else {
    func_0x0412e5e0(&uStack_4e8,puStack_310,uStack_318);
  }
  uStack_458 = (uint *)0x0;
  puStack_450 = (undefined *)0x0;
  puStack_468 = (uint *)0x0;
  auStack_460 = (undefined1  [8])0x0;
  uStack_478 = (uint *)0x0;
  puStack_470 = (uint *)0x0;
  uStack_448 = (undefined *)0x0;
  if (_DAT_0f54fd90 == (uint *)0x0) {
    plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
    if (plVar22 == (long *)0x0) {
      func_0x0eec74c0(0x50,0);
    }
    plVar22[1] = 0;
    plVar22[2] = 0;
    *plVar22 = (long)&UNK_0ef44ab0;
    puVar32 = (uint *)(plVar22 + 3);
    plVar22[3] = 0;
    plVar22[4] = 0;
    plVar22[5] = 0;
    plVar22[6] = 0;
    plVar22[7] = 0;
    plVar22[8] = 0;
    plVar22[9] = 0;
    *(undefined4 *)(plVar22 + 9) = 0x3f600000;
    func_0x048af7e0(puVar32,8);
    lVar37 = plVar22[3];
    lVar35 = plVar22[4];
    if (lVar37 != lVar35) {
      func_0x0eee2dd0(lVar37,0xff,lVar35 - lVar37);
    }
    lVar31 = plVar22[6];
    if (plVar22[7] - lVar31 != 0) {
      uVar36 = (plVar22[7] - lVar31 >> 3) * -0x5555555555555555;
      uVar28 = (int)((ulong)(lVar35 - lVar37) >> 3) - 1;
      if (uVar36 < 2) {
        uVar36 = 1;
        uVar17 = 0;
      }
      else {
        puVar27 = (uint *)(lVar31 + 0x20);
        uVar17 = 0;
        do {
          uVar16 = *(undefined8 *)(lVar37 + (ulong)(puVar27[-6] & uVar28) * 8);
          *(ulong *)(lVar37 + (ulong)(puVar27[-6] & uVar28) * 8) = uVar17;
          *(undefined8 *)(puVar27 + -8) = uVar16;
          uVar16 = *(undefined8 *)(lVar37 + (ulong)(*puVar27 & uVar28) * 8);
          *(ulong *)(lVar37 + (ulong)(*puVar27 & uVar28) * 8) = uVar17 + 1;
          *(undefined8 *)(puVar27 + -2) = uVar16;
          uVar17 = uVar17 + 2;
          puVar27 = puVar27 + 0xc;
        } while (uVar17 != (uVar36 & 0xfffffffffffffffe));
      }
      if ((uVar36 & 1) != 0) {
        uVar36 = (ulong)(uVar28 & *(uint *)(lVar31 + 8 + uVar17 * 0x18));
        uVar16 = *(undefined8 *)(lVar37 + uVar36 * 8);
        *(ulong *)(lVar37 + uVar36 * 8) = uVar17;
        *(undefined8 *)(lVar31 + uVar17 * 0x18) = uVar16;
      }
    }
    plVar20 = _DAT_0f54fd98;
    _DAT_0f54fd90 = puVar32;
    if (_DAT_0f54fd98 != (long *)0x0) {
      LOCK();
      plVar18 = _DAT_0f54fd98 + 1;
      lVar37 = *plVar18;
      _DAT_0f54fd98 = plVar22;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      plVar22 = _DAT_0f54fd98;
      if (lVar37 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        FUN_0412c2d0(plVar20);
        plVar22 = _DAT_0f54fd98;
      }
    }
    _DAT_0f54fd98 = plVar22;
    uStack_440 = _DAT_0f54fd90;
    uStack_438 = (undefined8 *)((ulong)uStack_438 & 0xffffffffffffff00);
    plStack_408 = (long *)0x0;
    if (((ulong)auStack_460 & 1) == 0) goto joined_r0x08e919a0;
    bVar39 = (uStack_4c0 & 1) == 0;
    lVar37 = CONCAT44(uStack_4ac,uStack_4b0);
    if (bVar39) {
      lVar37 = (long)&uStack_4c0 + 1;
    }
    uVar36 = (ulong)((byte)uStack_4c0 >> 1);
    if (!bVar39) {
      uVar36 = CONCAT44(uStack_4b4,uStack_4b8);
    }
    func_0x04885120(auStack_460,lVar37,uVar36);
  }
  else {
    uStack_438 = (undefined8 *)((ulong)uStack_438 & 0xffffffffffffff00);
joined_r0x08e919a0:
    uStack_440 = _DAT_0f54fd90;
    if ((uStack_4c0 & 1) == 0) {
      plStack_408 = (long *)0x0;
      puStack_450 = (undefined *)CONCAT44(uStack_4ac,uStack_4b0);
      auStack_460._6_2_ = uStack_4ba;
      auStack_460._4_2_ = uStack_4bc;
      auStack_460._0_4_ = uStack_4c0;
      uStack_458 = (uint *)CONCAT44(uStack_4b4,uStack_4b8);
    }
    else {
      plStack_408 = (long *)0x0;
      func_0x04885070(auStack_460,CONCAT44(uStack_4ac,uStack_4b0),CONCAT44(uStack_4b4,uStack_4b8));
    }
  }
  plVar22 = _DAT_0f54fd98;
  if (_DAT_0f54fd90 == (uint *)0x0) {
    plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
    if (plVar22 == (long *)0x0) {
      func_0x0eec74c0(0x50,0);
    }
    plVar22[1] = 0;
    plVar22[2] = 0;
    *plVar22 = (long)&UNK_0ef44ab0;
    puVar32 = (uint *)(plVar22 + 3);
    plVar22[3] = 0;
    plVar22[4] = 0;
    plVar22[5] = 0;
    plVar22[6] = 0;
    plVar22[7] = 0;
    plVar22[8] = 0;
    plVar22[9] = 0;
    *(undefined4 *)(plVar22 + 9) = 0x3f600000;
    func_0x048af7e0(puVar32,8);
    lVar37 = plVar22[3];
    lVar35 = plVar22[4];
    if (lVar37 != lVar35) {
      func_0x0eee2dd0(lVar37,0xff,lVar35 - lVar37);
    }
    lVar31 = plVar22[6];
    if (plVar22[7] - lVar31 != 0) {
      uVar36 = (plVar22[7] - lVar31 >> 3) * -0x5555555555555555;
      uVar28 = (int)((ulong)(lVar35 - lVar37) >> 3) - 1;
      if (uVar36 < 2) {
        uVar36 = 1;
        uVar17 = 0;
      }
      else {
        puVar27 = (uint *)(lVar31 + 0x20);
        uVar17 = 0;
        do {
          uVar16 = *(undefined8 *)(lVar37 + (ulong)(puVar27[-6] & uVar28) * 8);
          *(ulong *)(lVar37 + (ulong)(puVar27[-6] & uVar28) * 8) = uVar17;
          *(undefined8 *)(puVar27 + -8) = uVar16;
          uVar16 = *(undefined8 *)(lVar37 + (ulong)(*puVar27 & uVar28) * 8);
          *(ulong *)(lVar37 + (ulong)(*puVar27 & uVar28) * 8) = uVar17 + 1;
          *(undefined8 *)(puVar27 + -2) = uVar16;
          uVar17 = uVar17 + 2;
          puVar27 = puVar27 + 0xc;
        } while (uVar17 != (uVar36 & 0xfffffffffffffffe));
      }
      if ((uVar36 & 1) != 0) {
        uVar36 = (ulong)(uVar28 & *(uint *)(lVar31 + 8 + uVar17 * 0x18));
        uVar16 = *(undefined8 *)(lVar37 + uVar36 * 8);
        *(ulong *)(lVar37 + uVar36 * 8) = uVar17;
        *(undefined8 *)(lVar31 + uVar17 * 0x18) = uVar16;
      }
    }
    plVar20 = _DAT_0f54fd98;
    _DAT_0f54fd90 = puVar32;
    if (_DAT_0f54fd98 != (long *)0x0) {
      LOCK();
      plVar18 = _DAT_0f54fd98 + 1;
      lVar37 = *plVar18;
      _DAT_0f54fd98 = plVar22;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      plVar22 = _DAT_0f54fd98;
      if (lVar37 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        FUN_0412c2d0(plVar20);
        plVar22 = _DAT_0f54fd98;
      }
    }
  }
  _DAT_0f54fd98 = plVar22;
  puVar32 = _DAT_0f54fd90;
  if (DAT_0f550ba8 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f550ba8);
    if (iVar14 != 0) {
      func_0x048b2270(&DAT_0f550b28);
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f550b28,0xf53dab8);
      func_0x0410844d(&DAT_0f550ba8);
    }
  }
  puVar21 = uStack_4d8;
  puVar27 = puVar24 + 0x2a;
  plVar22 = (long *)(*(long *)puVar32 +
                    (ulong)((int)((ulong)(*(long *)(puVar32 + 2) - *(long *)puVar32) >> 3) - 1U &
                           *(uint *)(_DAT_0f550b28 + 4)) * 8);
  do {
    lVar37 = *plVar22;
    if (lVar37 == -1) {
      uStack_448 = &DAT_0f550b28;
      goto LAB_08e91c07;
    }
    plVar22 = (long *)(*(long *)(puVar32 + 6) + lVar37 * 0x18);
  } while (*(uint *)(*(long *)(puVar32 + 6) + 8 + lVar37 * 0x18) != *(uint *)(_DAT_0f550b28 + 4));
  uStack_448 = &DAT_0f550b28;
  if (plVar22 != *(long **)(puVar32 + 8)) {
    uStack_448 = (undefined *)plVar22[2];
  }
LAB_08e91c07:
  uStack_440 = puVar32;
  uStack_438 = (undefined8 *)CONCAT71(uStack_438._1_7_,1);
  uStack_498 = uStack_4e8;
  uStack_490 = uStack_4e0;
  uStack_4e8 = (uint *)0x0;
  uStack_4e0 = 0;
  uStack_4d8 = (undefined *)0x0;
  plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar22 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  plVar20 = plStack_408;
  *plVar22 = (long)&UNK_0f165970;
  *(undefined4 *)(plVar22 + 1) = (undefined4)uStack_498;
  *(undefined4 *)((long)plVar22 + 0xc) = uStack_498._4_4_;
  *(undefined4 *)(plVar22 + 2) = (undefined4)uStack_490;
  *(undefined4 *)((long)plVar22 + 0x14) = uStack_490._4_4_;
  plVar22[3] = (long)puVar21;
  plStack_408 = (long *)0x0;
  if (plVar20 == (long *)(auStack_430 + 8)) {
    lVar37 = 0x20;
LAB_08e91d85:
    (**(code **)(*plVar20 + lVar37))();
    if (puStack_240 < puStack_238) goto LAB_08e91ccf;
LAB_08e91da9:
    plStack_408 = plVar22;
    puVar15 = (undefined8 *)func_0x065ac6d0(&uStack_248,&uStack_478);
  }
  else {
    lVar37 = 0x28;
    if (plVar20 != (long *)0x0) goto LAB_08e91d85;
    if (puStack_238 <= puStack_240) goto LAB_08e91da9;
LAB_08e91ccf:
    puVar15 = puStack_240;
    *puStack_240 = 0;
    puStack_240[1] = 0;
    puStack_240[2] = 0;
    *puStack_240 = uStack_478;
    puStack_240[1] = puStack_470;
    puStack_240[2] = puStack_468;
    uStack_478 = (uint *)0x0;
    puStack_470 = (uint *)0x0;
    puStack_468 = (uint *)0x0;
    puStack_240[5] = puStack_450;
    puStack_240[3] = auStack_460;
    puStack_240[4] = uStack_458;
    auStack_460 = (undefined1  [8])0x0;
    uStack_458 = (uint *)0x0;
    puStack_450 = (undefined *)0x0;
    *(undefined1 *)(puStack_240 + 8) = (undefined1)uStack_438;
    *(undefined4 *)(puStack_240 + 6) = (undefined4)uStack_448;
    *(undefined4 *)((long)puStack_240 + 0x34) = uStack_448._4_4_;
    *(undefined4 *)(puStack_240 + 7) = (undefined4)uStack_440;
    *(undefined4 *)((long)puStack_240 + 0x3c) = uStack_440._4_4_;
    if (plVar22 == (long *)0x0) {
      puStack_240[0xe] = 0;
      plStack_408 = plVar22;
    }
    else if (plVar22 == (long *)(auStack_430 + 8)) {
      puStack_240[0xe] = puStack_240 + 10;
      plStack_408 = plVar22;
      (**(code **)(*plVar22 + 0x18))();
    }
    else {
      puStack_240[0xe] = plVar22;
      plStack_408 = (long *)0x0;
    }
    puVar15 = puVar15 + 0x10;
  }
  puStack_240 = puVar15;
  if (plStack_408 == (long *)(auStack_430 + 8)) {
    lVar37 = 0x20;
LAB_08e92185:
    (**(code **)(*plStack_408 + lVar37))();
  }
  else {
    lVar37 = 0x28;
    if (plStack_408 != (long *)0x0) goto LAB_08e92185;
  }
  if (((ulong)auStack_460 & 1) != 0) {
    func_0x0412a280(puStack_450,(ulong)auStack_460 & 0xfffffffffffffffe);
  }
  puVar23 = uStack_478;
  puVar32 = puStack_470;
  if (uStack_478 != (uint *)0x0) {
    for (; puVar23 != puVar32; puVar32 = puVar32 + -0xc) {
      if ((puVar32[-8] & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(puVar32 + -4),*(ulong *)(puVar32 + -8) & 0xfffffffffffffffe)
        ;
      }
    }
    puStack_470 = puVar23;
    func_0x0412a280(uStack_478,(long)puStack_468 - (long)uStack_478);
  }
  if (((ulong)uStack_4e8 & 1) != 0) {
    func_0x0412a280(uStack_4d8,(ulong)uStack_4e8 & 0xfffffffffffffffe);
  }
  if ((uStack_4c0 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_4ac,uStack_4b0),
                    CONCAT26(uStack_4ba,CONCAT24(uStack_4bc,uStack_4c0)) & 0xfffffffffffffffe);
  }
  uStack_148 = _DAT_0f6426e8;
  uStack_144 = (undefined1)_DAT_0f6426ec;
  uStack_143 = (undefined1)((ushort)_DAT_0f6426ec >> 8);
  if ((_DAT_0f6426f0 & 1) == 0) {
    puStack_130 = (undefined *)_DAT_0f642700;
    uStack_140 = (uint **)CONCAT44(uRam000000000f6426f4,_DAT_0f6426f0);
    uStack_138 = (undefined1)_DAT_0f6426f8;
    uStack_137 = (undefined1)((uint)_DAT_0f6426f8 >> 8);
    uStack_136 = (undefined2)((uint)_DAT_0f6426f8 >> 0x10);
    uStack_134 = uRam000000000f6426fc;
  }
  else {
    func_0x0412e5e0(&uStack_140,_DAT_0f642700,CONCAT44(uRam000000000f6426fc,_DAT_0f6426f8));
  }
  puVar32 = &uStack_148;
  func_0x0730fa70(puVar15 + -0x10,puVar32,0);
  ppuVar7 = uStack_140;
  if (((ulong)uStack_140 & 1) != 0) {
    puVar32 = (uint *)((ulong)uStack_140 & 0xfffffffffffffffe);
    func_0x0412a280(puStack_130);
    ppuVar7 = uStack_140;
  }
  uStack_140._4_4_ = (undefined4)((ulong)ppuVar7 >> 0x20);
  uStack_140._0_4_ = (uint)ppuVar7;
  param_2 = *(uint **)(puVar24 + 0x2c);
  puStack_4a0 = puVar27;
  if (param_2 < *(uint **)(puVar24 + 0x2e)) {
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    puVar24 = (uint *)puVar15[-0x10];
    puVar27 = (uint *)puVar15[-0xf];
    uStack_148 = (uint)param_2;
    uStack_144 = (undefined1)((ulong)param_2 >> 0x20);
    uStack_143 = (undefined1)((ulong)param_2 >> 0x28);
    uStack_142 = (undefined2)((ulong)param_2 >> 0x30);
    uStack_140._0_4_ = (uint)uStack_140 & 0xffffff00;
    lVar37 = (long)puVar27 - (long)puVar24;
    if (lVar37 != 0) {
      ppuVar7 = (uint **)((ulong)ppuVar7 & 0xffffffffffffff00);
      if (0x555555555555555 < (ulong)((lVar37 >> 4) * -0x5555555555555555)) goto LAB_08e92afc;
      puVar32 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (puVar32 == (uint *)0x0) {
        func_0x0eec74c0(lVar37,0);
      }
      *(uint **)param_2 = puVar32;
      *(uint **)(param_2 + 2) = puVar32;
      *(long *)(param_2 + 4) = lVar37 + (long)puVar32;
      uStack_4c0 = (uint)puVar32;
      uStack_4bc = (undefined2)((ulong)puVar32 >> 0x20);
      uStack_4ba = (undefined2)((ulong)puVar32 >> 0x30);
      puStack_470 = (uint *)&uStack_4e8;
      puStack_468 = &uStack_4c0;
      auStack_460 = (undefined1  [8])((ulong)auStack_460 & 0xffffffffffffff00);
      uStack_4e8 = puVar32;
      uStack_478 = param_2;
      do {
        *puVar32 = *puVar24;
        *(short *)(puVar32 + 3) = (short)puVar24[3];
        puVar32[2] = puVar24[2];
        if ((puVar24[4] & 1) == 0) {
          *(long *)(puVar32 + 8) = *(long *)(puVar24 + 8);
          uVar28 = puVar24[5];
          uVar3 = puVar24[6];
          uVar4 = puVar24[7];
          puVar32[4] = puVar24[4];
          puVar32[5] = uVar28;
          puVar32[6] = uVar3;
          puVar32[7] = uVar4;
          puVar23 = puVar32;
        }
        else {
          func_0x0412e5e0(puVar32 + 4,*(undefined8 *)(puVar24 + 8),*(undefined8 *)(puVar24 + 6));
          puVar23 = (uint *)CONCAT26(uStack_4ba,CONCAT24(uStack_4bc,uStack_4c0));
        }
        puVar32[10] = puVar24[10];
        puVar24 = puVar24 + 0xc;
        puVar32 = puVar23 + 0xc;
        uStack_4c0 = (uint)puVar32;
        uStack_4bc = (undefined2)((ulong)puVar32 >> 0x20);
        uStack_4ba = (undefined2)((ulong)puVar32 >> 0x30);
      } while (puVar24 != puVar27);
      *(uint **)(param_2 + 2) = puVar32;
    }
    puVar24 = puStack_4c8;
    if ((*(byte *)(puVar15 + -0xd) & 1) == 0) {
      *(undefined8 *)(param_2 + 10) = puVar15[-0xb];
      uVar16 = puVar15[-0xc];
      *(undefined8 *)(param_2 + 6) = puVar15[-0xd];
      *(undefined8 *)(param_2 + 8) = uVar16;
    }
    else {
      func_0x0412e5e0(param_2 + 6,puVar15[-0xb],puVar15[-0xc]);
    }
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(puVar15 + -8);
    uVar28 = *(uint *)((long)puVar15 + -0x4c);
    uVar3 = *(uint *)(puVar15 + -9);
    uVar4 = *(uint *)((long)puVar15 + -0x44);
    param_2[0xc] = *(uint *)(puVar15 + -10);
    param_2[0xd] = uVar28;
    param_2[0xe] = uVar3;
    param_2[0xf] = uVar4;
    plVar22 = (long *)puVar15[-2];
    if (plVar22 == (long *)0x0) {
      param_2[0x1c] = 0;
      param_2[0x1d] = 0;
    }
    else if (plVar22 == puVar15 + -6) {
      *(uint **)(param_2 + 0x1c) = param_2 + 0x14;
      (**(code **)(*(long *)puVar15[-2] + 0x18))();
    }
    else {
      uVar16 = (**(code **)(*plVar22 + 0x10))();
      *(undefined8 *)(param_2 + 0x1c) = uVar16;
    }
    param_2 = param_2 + 0x20;
    *(uint **)(puVar24 + 0x2c) = param_2;
    puVar32 = puStack_4a0;
LAB_08e9269f:
    *(uint **)(puVar24 + 0x2c) = param_2;
    if (((ulong)uStack_320 & 1) != 0) {
      func_0x0412a280(puStack_310);
    }
    puVar15 = *(undefined8 **)(lStack_368 + 0x78);
    if (puVar15 < *(undefined8 **)(lStack_368 + 0x80)) {
      *puVar15 = 0;
      puVar15[1] = 0;
      puVar15[2] = 0;
      uVar16 = *(undefined8 *)(puVar24 + 2);
      *puVar15 = *(undefined8 *)puVar24;
      puVar15[1] = uVar16;
      puVar15[2] = *(undefined8 *)(puVar24 + 4);
      puVar24[0] = 0;
      puVar24[1] = 0;
      puVar24[2] = 0;
      puVar24[3] = 0;
      puVar24[4] = 0;
      puVar24[5] = 0;
      puVar15[5] = *(undefined8 *)(puVar24 + 10);
      uVar16 = *(undefined8 *)(puVar24 + 8);
      puVar15[3] = *(undefined8 *)(puVar24 + 6);
      puVar15[4] = uVar16;
      puVar24[6] = 0;
      puVar24[7] = 0;
      puVar24[8] = 0;
      puVar24[9] = 0;
      puVar24[10] = 0;
      puVar24[0xb] = 0;
      uVar16 = *(undefined8 *)(puVar24 + 0xe);
      uVar28 = puVar24[0x10];
      uVar3 = puVar24[0x11];
      uVar4 = puVar24[0x12];
      uVar5 = puVar24[0x13];
      puVar15[6] = *(undefined8 *)(puVar24 + 0xc);
      puVar15[7] = uVar16;
      *(uint *)(puVar15 + 8) = uVar28;
      *(uint *)((long)puVar15 + 0x44) = uVar3;
      *(uint *)(puVar15 + 9) = uVar4;
      *(uint *)((long)puVar15 + 0x4c) = uVar5;
      puVar15[10] = 0;
      puVar15[0xb] = 0;
      puVar15[0xc] = 0;
      uVar16 = *(undefined8 *)(puVar24 + 0x16);
      puVar15[10] = *(undefined8 *)(puVar24 + 0x14);
      puVar15[0xb] = uVar16;
      puVar15[0xc] = *(undefined8 *)(puVar24 + 0x18);
      puVar24[0x14] = 0;
      puVar24[0x15] = 0;
      puVar24[0x16] = 0;
      puVar24[0x17] = 0;
      puVar24[0x18] = 0;
      puVar24[0x19] = 0;
      uVar16 = *(undefined8 *)(puVar24 + 0x1c);
      puVar15[0xd] = *(undefined8 *)(puVar24 + 0x1a);
      puVar15[0xe] = uVar16;
      puVar24[0x1a] = 0;
      puVar24[0x1b] = 0;
      puVar24[0x1c] = 0;
      puVar24[0x1d] = 0;
      puVar15[0xf] = 0;
      puVar15[0x10] = 0;
      puVar15[0x11] = 0;
      uVar16 = *(undefined8 *)(puVar24 + 0x20);
      puVar15[0xf] = *(undefined8 *)(puVar24 + 0x1e);
      puVar15[0x10] = uVar16;
      puVar15[0x11] = *(undefined8 *)(puVar24 + 0x22);
      puVar24[0x1e] = 0;
      puVar24[0x1f] = 0;
      puVar24[0x20] = 0;
      puVar24[0x21] = 0;
      puVar24[0x22] = 0;
      puVar24[0x23] = 0;
      puVar15[0x12] = 0;
      puVar15[0x13] = 0;
      puVar15[0x14] = 0;
      uVar16 = *(undefined8 *)(puVar24 + 0x26);
      puVar15[0x12] = *(undefined8 *)(puVar24 + 0x24);
      puVar15[0x13] = uVar16;
      puVar15[0x14] = *(undefined8 *)(puVar24 + 0x28);
      puVar24[0x24] = 0;
      puVar24[0x25] = 0;
      puVar24[0x26] = 0;
      puVar24[0x27] = 0;
      puVar24[0x28] = 0;
      puVar24[0x29] = 0;
      puVar15[0x15] = 0;
      puVar15[0x16] = 0;
      puVar15[0x17] = 0;
      uVar16 = *(undefined8 *)(puVar24 + 0x2c);
      puVar15[0x15] = *(undefined8 *)(puVar24 + 0x2a);
      puVar15[0x16] = uVar16;
      puVar15[0x17] = *(undefined8 *)(puVar24 + 0x2e);
      puVar32[0] = 0;
      puVar32[1] = 0;
      puVar32[2] = 0;
      puVar32[3] = 0;
      puVar32[4] = 0;
      puVar32[5] = 0;
      puVar15[0x18] = 0;
      puVar15[0x19] = 0;
      puVar15[0x1a] = 0;
      uVar16 = *(undefined8 *)(puVar24 + 0x32);
      puVar15[0x18] = *(undefined8 *)(puVar24 + 0x30);
      puVar15[0x19] = uVar16;
      puVar15[0x1a] = *(undefined8 *)(puVar24 + 0x34);
      puVar24[0x30] = 0;
      puVar24[0x31] = 0;
      puVar24[0x32] = 0;
      puVar24[0x33] = 0;
      puVar24[0x34] = 0;
      puVar24[0x35] = 0;
      puVar15[0x1b] = 0;
      puVar15[0x1c] = 0;
      puVar15[0x1d] = 0;
      uVar28 = puVar24[0x37];
      uVar3 = puVar24[0x38];
      uVar4 = puVar24[0x39];
      *(uint *)(puVar15 + 0x1b) = puVar24[0x36];
      *(uint *)((long)puVar15 + 0xdc) = uVar28;
      *(uint *)(puVar15 + 0x1c) = uVar3;
      *(uint *)((long)puVar15 + 0xe4) = uVar4;
      puVar15[0x1d] = *(undefined8 *)(puVar24 + 0x3a);
      puVar24[0x36] = 0;
      puVar24[0x37] = 0;
      puVar24[0x38] = 0;
      puVar24[0x39] = 0;
      puVar24[0x3a] = 0;
      puVar24[0x3b] = 0;
      puVar15 = puVar15 + 0x1e;
    }
    else {
      puVar15 = (undefined8 *)func_0x0d85e840(lStack_50);
    }
    *(undefined8 **)(lStack_368 + 0x78) = puVar15;
    puVar32 = (uint *)func_0x0651ffe0(&uStack_2f0);
    auVar11 = auStack_308;
    lVar37 = CONCAT26(uStack_302,CONCAT24(uStack_304,auStack_308));
    if (lVar37 != 0) {
      for (lVar35 = CONCAT44(uStack_2fc,uStack_300); lVar37 != lVar35; lVar35 = lVar35 + -0x30) {
        if ((*(byte *)(lVar35 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar35 + -0x10),
                          *(ulong *)(lVar35 + -0x20) & 0xfffffffffffffffe);
        }
      }
      uStack_300 = (uint)auVar11;
      uStack_2fc = (undefined4)((ulong)lVar37 >> 0x20);
      puVar32 = (uint *)func_0x0412a280();
    }
    puVar24 = puVar24 + 0x3c;
    if (puVar24 == puStack_40) goto LAB_08e92a40;
    goto LAB_08e9077d;
  }
  param_2 = (uint *)((long)param_2 - *(long *)puVar27);
  uVar36 = ((long)param_2 >> 7) + 1;
  puVar32 = (uint *)0x1ffffffffffffff;
  uStack_140 = ppuVar7;
  if (uVar36 < 0x200000000000000) {
    uVar25 = (long)*(uint **)(puVar24 + 0x2e) - *(long *)puVar27;
    uVar17 = (long)uVar25 >> 6;
    if (uVar17 <= uVar36) {
      uVar17 = uVar36;
    }
    if (0x7fffffffffffff7f < uVar25) {
      uVar17 = 0x1ffffffffffffff;
    }
    uStack_458 = puVar27;
    if (uVar17 == 0) {
      puVar24 = (uint *)0x0;
    }
    else {
      if (0x1ffffffffffffff < uVar17) goto LAB_08e92b06;
      puVar32 = (uint *)(uVar17 << 7);
      puVar24 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (puVar24 == (uint *)0x0) {
        puVar32 = (uint *)0x0;
        func_0x0eec74c0((uint *)(uVar17 << 7));
        puVar24 = (uint *)0x0;
      }
    }
    puVar27 = (uint *)((long)puVar24 + (long)param_2);
    auStack_460 = (undefined1  [8])(puVar24 + uVar17 * 0x20);
    *(undefined8 *)((long)puVar24 + (long)param_2) = 0;
    ((undefined8 *)((long)puVar24 + (long)param_2))[1] = 0;
    *(undefined8 *)((long)(puVar24 + 4) + (long)param_2) = 0;
    puVar23 = (uint *)puVar15[-0x10];
    puVar30 = (uint *)puVar15[-0xf];
    uStack_4c0 = (uint)puVar27;
    uVar28 = uStack_4c0;
    uStack_4bc = (undefined2)((ulong)puVar27 >> 0x20);
    uStack_4ba = (undefined2)((ulong)puVar27 >> 0x30);
    uVar9 = uStack_4ba;
    uStack_4b8 = uStack_4b8 & 0xffffff00;
    lVar37 = (long)puVar30 - (long)puVar23;
    uStack_478 = puVar24;
    puStack_470 = puVar27;
    puStack_468 = puVar27;
    if (lVar37 != 0) {
      if (0x555555555555555 < (ulong)((lVar37 >> 4) * -0x5555555555555555)) goto LAB_08e92b01;
      puVar32 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar37);
      if (puVar32 == (uint *)0x0) {
        func_0x0eec74c0(lVar37,0);
      }
      *(uint **)puVar27 = puVar32;
      *(uint **)(puVar27 + 2) = puVar32;
      *(long *)(puVar27 + 4) = lVar37 + (long)puVar32;
      uStack_144 = (undefined1)((ulong)puVar27 >> 0x20);
      uStack_143 = (undefined1)((ulong)puVar27 >> 0x28);
      uStack_140 = &puStack_348;
      uStack_138 = SUB81(&uStack_4e8,0);
      uStack_137 = (undefined1)((ulong)&uStack_4e8 >> 8);
      uStack_136 = (undefined2)((ulong)&uStack_4e8 >> 0x10);
      uStack_134 = (undefined4)((ulong)&uStack_4e8 >> 0x20);
      puStack_130 = (undefined *)((ulong)puStack_130 & 0xffffffffffffff00);
      puStack_348 = puVar32;
      uStack_148 = uVar28;
      uStack_142 = uVar9;
      do {
        *puVar32 = *puVar23;
        *(short *)(puVar32 + 3) = (short)puVar23[3];
        puVar32[2] = puVar23[2];
        uStack_4e8 = puVar32;
        if ((puVar23[4] & 1) == 0) {
          *(long *)(puVar32 + 8) = *(long *)(puVar23 + 8);
          uVar28 = puVar23[5];
          uVar3 = puVar23[6];
          uVar4 = puVar23[7];
          puVar32[4] = puVar23[4];
          puVar32[5] = uVar28;
          puVar32[6] = uVar3;
          puVar32[7] = uVar4;
        }
        else {
          func_0x0412e5e0(puVar32 + 4,*(undefined8 *)(puVar23 + 8),*(undefined8 *)(puVar23 + 6));
        }
        puVar32[10] = puVar23[10];
        puVar23 = puVar23 + 0xc;
        puVar32 = uStack_4e8 + 0xc;
      } while (puVar23 != puVar30);
      *(uint **)(puVar27 + 2) = puVar32;
      uStack_4e8 = puVar32;
    }
    if ((*(byte *)(puVar15 + -0xd) & 1) == 0) {
      *(undefined8 *)(puVar27 + 10) = puVar15[-0xb];
      uVar16 = puVar15[-0xc];
      *(undefined8 *)(puVar27 + 6) = puVar15[-0xd];
      *(undefined8 *)(puVar27 + 8) = uVar16;
    }
    else {
      func_0x0412e5e0(puVar27 + 6,puVar15[-0xb],puVar15[-0xc]);
    }
    puVar24 = puStack_4c8;
    *(undefined1 *)(puVar27 + 0x10) = *(undefined1 *)(puVar15 + -8);
    uVar28 = *(uint *)((long)puVar15 + -0x4c);
    uVar3 = *(uint *)(puVar15 + -9);
    uVar4 = *(uint *)((long)puVar15 + -0x44);
    puVar27[0xc] = *(uint *)(puVar15 + -10);
    puVar27[0xd] = uVar28;
    puVar27[0xe] = uVar3;
    puVar27[0xf] = uVar4;
    plVar22 = (long *)puVar15[-2];
    if (plVar22 == (long *)0x0) {
      puVar27[0x1c] = 0;
      puVar27[0x1d] = 0;
    }
    else if (plVar22 == puVar15 + -6) {
      *(uint **)(puVar27 + 0x1c) = puVar27 + 0x14;
      (**(code **)(*(long *)puVar15[-2] + 0x18))();
    }
    else {
      uVar16 = (**(code **)(*plVar22 + 0x10))();
      *(undefined8 *)(puVar27 + 0x1c) = uVar16;
    }
    puVar23 = puStack_470;
    param_2 = puStack_468 + 0x20;
    puVar27 = *(uint **)(puVar24 + 0x2a);
    puVar32 = *(uint **)(puVar24 + 0x2c);
    lVar37 = (long)puVar32 - (long)puVar27;
    if (lVar37 != 0) {
      puVar38 = puStack_470 + (lVar37 >> 7) * -0x20 + 0x14;
      puVar30 = puVar27;
      puStack_468 = param_2;
      do {
        puVar38[-0x14] = 0;
        puVar38[-0x13] = 0;
        puVar38[-0x12] = 0;
        puVar38[-0x11] = 0;
        puVar38[-0x10] = 0;
        puVar38[-0xf] = 0;
        uVar16 = *(undefined8 *)(puVar30 + 2);
        *(undefined8 *)(puVar38 + -0x14) = *(undefined8 *)puVar30;
        *(undefined8 *)(puVar38 + -0x12) = uVar16;
        *(undefined8 *)(puVar38 + -0x10) = *(undefined8 *)(puVar30 + 4);
        puVar30[0] = 0;
        puVar30[1] = 0;
        puVar30[2] = 0;
        puVar30[3] = 0;
        puVar30[4] = 0;
        puVar30[5] = 0;
        *(undefined8 *)(puVar38 + -10) = *(undefined8 *)(puVar30 + 10);
        uVar16 = *(undefined8 *)(puVar30 + 8);
        *(undefined8 *)(puVar38 + -0xe) = *(undefined8 *)(puVar30 + 6);
        *(undefined8 *)(puVar38 + -0xc) = uVar16;
        puVar30[6] = 0;
        puVar30[7] = 0;
        puVar30[8] = 0;
        puVar30[9] = 0;
        puVar30[10] = 0;
        puVar30[0xb] = 0;
        *(char *)(puVar38 + -4) = (char)puVar30[0x10];
        uVar28 = puVar30[0xd];
        uVar3 = puVar30[0xe];
        uVar4 = puVar30[0xf];
        puVar38[-8] = puVar30[0xc];
        puVar38[-7] = uVar28;
        puVar38[-6] = uVar3;
        puVar38[-5] = uVar4;
        puVar24 = *(uint **)(puVar30 + 0x1c);
        if (puVar24 == (uint *)0x0) {
          puVar38[8] = 0;
          puVar38[9] = 0;
        }
        else if (puVar30 + 0x14 == puVar24) {
          *(uint **)(puVar38 + 8) = puVar38;
          (**(code **)(**(long **)(puVar30 + 0x1c) + 0x18))(*(long **)(puVar30 + 0x1c),puVar38);
        }
        else {
          *(uint **)(puVar38 + 8) = puVar24;
          puVar30[0x1c] = 0;
          puVar30[0x1d] = 0;
        }
        puVar30 = puVar30 + 0x20;
        puVar38 = puVar38 + 0x20;
        puVar24 = puStack_4c8;
      } while (puVar30 != puVar32);
      do {
        puVar30 = *(uint **)(puVar27 + 0x1c);
        if (puVar30 == puVar27 + 0x14) {
          lVar35 = 0x20;
LAB_08e92625:
          (**(code **)(*(long *)puVar30 + lVar35))();
          bVar1 = (byte)puVar27[6];
        }
        else {
          lVar35 = 0x28;
          if (puVar30 != (uint *)0x0) goto LAB_08e92625;
          bVar1 = (byte)puVar27[6];
        }
        if ((bVar1 & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(puVar27 + 10),*(ulong *)(puVar27 + 6) & 0xfffffffffffffffe
                         );
        }
        lVar35 = *(long *)puVar27;
        if (lVar35 != 0) {
          lVar31 = *(long *)(puVar27 + 2);
          lVar33 = lVar35;
          if (lVar35 != lVar31) {
            do {
              if ((*(byte *)(lVar31 + -0x20) & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(lVar31 + -0x10),
                                *(ulong *)(lVar31 + -0x20) & 0xfffffffffffffffe);
              }
              lVar31 = lVar31 + -0x30;
            } while (lVar31 != lVar35);
            lVar33 = *(long *)puVar27;
          }
          *(long *)(puVar27 + 2) = lVar35;
          func_0x0412a280(lVar33,*(long *)(puVar27 + 4) - lVar33);
          puVar24 = puStack_4c8;
        }
        puVar27 = puVar27 + 0x20;
      } while (puVar27 != puVar32);
      puVar27 = *(uint **)puStack_4a0;
      param_2 = puStack_468;
    }
    puVar32 = puStack_4a0;
    *(long *)(puVar24 + 0x2a) = (long)puVar23 - lVar37;
    *(uint **)(puVar24 + 0x2c) = param_2;
    *(undefined1 (*) [8])(puVar24 + 0x2e) = auStack_460;
    puStack_470 = puVar27;
    puStack_468 = puVar27;
    if (puVar27 != (uint *)0x0) {
      func_0x0412a280(puVar27);
    }
    goto LAB_08e9269f;
  }
  func_0x065acad0();
  ppuVar7 = uStack_140;
LAB_08e92afc:
  uStack_140 = ppuVar7;
  func_0x0652b440();
LAB_08e92b01:
  func_0x0652b440();
  ppuVar7 = uStack_140;
LAB_08e92b06:
  uStack_140 = ppuVar7;
  func_0x04882eb0();
LAB_08e92b0b:
  iVar14 = func_0x04108328(&DAT_0f601f50);
  if (iVar14 != 0) {
    func_0x08ee32e0(0xf601f38);
    func_0x0410844d(&DAT_0f601f50);
  }
  goto LAB_08e8eb25;
LAB_08e90e56:
  uStack_358 = (uint)CONCAT71((int7)((ulong)uVar16 >> 8),1);
  puVar24 = puStack_4c8;
  puVar32 = uStack_498;
  plVar22 = plStack_480;
  goto joined_r0x08e90b4e;
LAB_08e92aa8:
  puVar15 = (undefined8 *)FUN_04882e30();
LAB_08e92aad:
  func_0x0eec74c0(0x20,0);
  goto LAB_08e8e8f6;
LAB_08e92a40:
  puVar24 = (uint *)CONCAT26(uStack_33a,CONCAT24(uStack_33c,uStack_340));
LAB_08e92a48:
  if (puVar24 != (uint *)0x0) {
    puVar27 = uStack_338;
    puVar32 = puVar24;
    if (puVar24 != uStack_338) {
      do {
        puVar27 = puVar27 + -0x3c;
        func_0x0651ffe0(puVar27);
      } while (puVar27 != puVar24);
      puVar32 = (uint *)CONCAT26(uStack_33a,CONCAT24(uStack_33c,uStack_340));
    }
    uStack_338 = puVar24;
    func_0x0412a280(puVar32,CONCAT44(uStack_32c,uStack_330) - (long)puVar32);
  }
  plVar22 = (long *)*plStack_480;
  if (plVar22 == (long *)0x0) {
    return;
  }
  goto LAB_08e906ec;
}



/* ---- referenced strings ----
 * 0x122aaff  EntityBaseMovementComponent
 * 0x122ab0a  ovementComponent
 * 0x1293442  IEntityComponent
 */
