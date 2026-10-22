/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7225930 (ELF vaddr 0x7125930)
 * Label: caller-of-callee
 * Body:  [[07225930, 07225baa] [07225bb0, 07225bee] [07225bf0, 07226819] [07226820, 07227b61] [07227b70, 07227d71] [07227d80, 07227edd] [07227ee0, 0722811b] [07228120, 072282ac] [07228854, 07228862] [072288a4, 072288e9]]
 * Ghidra: FUN_07225930
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07225930(long param_1,long param_2,long param_3,long param_4,long *param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined2 uVar14;
  byte bVar15;
  undefined1 uVar16;
  byte *pbVar17;
  char cVar18;
  int iVar19;
  byte *pbVar20;
  long *plVar21;
  long *plVar22;
  undefined4 *puVar23;
  long lVar24;
  byte **ppbVar25;
  long *plVar26;
  undefined8 *puVar27;
  char *pcVar28;
  undefined8 *puVar29;
  long lVar30;
  long **pplVar31;
  long lVar32;
  undefined8 uVar33;
  long *plVar34;
  ulong uVar35;
  ulong uVar36;
  long *plStack_468;
  ulong uStack_460;
  ulong uStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long *plStack_438;
  long lStack_430;
  long lStack_428;
  undefined2 uStack_420;
  byte *pbStack_418;
  ulong uStack_410;
  ulong uStack_408;
  byte ***pppbStack_400;
  byte **ppbStack_3f8;
  ulong uStack_3f0;
  undefined2 uStack_3e8;
  long *plStack_3e0;
  byte bStack_3d8;
  undefined4 uStack_3d7;
  undefined4 uStack_3d3;
  undefined4 uStack_3cf;
  undefined1 uStack_3cb;
  undefined2 uStack_3ca;
  undefined1 uStack_3c8;
  undefined2 uStack_3c7;
  undefined1 uStack_3c5;
  undefined2 uStack_3c4;
  undefined1 uStack_3c2;
  undefined1 uStack_3c1;
  byte ***pppbStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined2 uStack_3a8;
  long *plStack_398;
  long *plStack_390;
  undefined1 auStack_388 [8];
  ulong uStack_380;
  ulong uStack_378;
  long *plStack_370;
  long *plStack_368;
  ulong uStack_360;
  undefined8 uStack_358;
  long lStack_350;
  long *plStack_348;
  long lStack_340;
  long *plStack_338;
  long lStack_330;
  undefined1 auStack_328 [5];
  undefined4 uStack_323;
  undefined4 uStack_31f;
  undefined1 uStack_31b;
  ushort uStack_31a;
  undefined1 uStack_318;
  undefined5 uStack_317;
  byte bStack_312;
  undefined1 uStack_311;
  byte ***pppbStack_310;
  byte **ppbStack_308;
  ulong uStack_300;
  undefined2 auStack_2f8 [16];
  long *plStack_2d8;
  long alStack_2c8 [4];
  long *plStack_2a8;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long *plStack_280;
  long lStack_278;
  long *plStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long *plStack_248;
  long lStack_240;
  long lStack_238;
  undefined2 uStack_230;
  byte *pbStack_228;
  byte *pbStack_220;
  undefined4 *puStack_218;
  byte ***pppbStack_210;
  byte **ppbStack_208;
  ulong uStack_200;
  undefined2 auStack_1f8 [16];
  long *plStack_1d8;
  long alStack_1c8 [4];
  long *plStack_1a8;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_178;
  long *plStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long *plStack_150;
  long lStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  int iStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lStack_260 = param_1 + 0x68;
  lStack_330 = param_3;
  lStack_160 = param_2;
  func_0x0412d680();
  if (*(long *)(param_1 + 0x30) != 0) {
    puVar27 = *(undefined8 **)(param_1 + 0x28);
    while (puVar27 != (undefined8 *)0x0) {
      puVar29 = (undefined8 *)*puVar27;
      func_0x0723e450(puVar27 + 7);
      if ((*(byte *)(puVar27 + 3) & 1) != 0) {
        func_0x0412a280(puVar27[5],puVar27[3] & 0xfffffffffffffffe);
      }
      func_0x0412a280(puVar27,0x130);
      puVar27 = puVar29;
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x0eee2dd0(*(undefined8 *)(param_1 + 0x18),0,*(long *)(param_1 + 0x20) << 3);
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    puVar27 = *(undefined8 **)(param_1 + 0x50);
    while (puVar27 != (undefined8 *)0x0) {
      puVar29 = (undefined8 *)*puVar27;
      func_0x0723eca0(puVar27 + 10);
      if ((*(byte *)(puVar27 + 7) & 1) != 0) {
        func_0x0412a280(puVar27[9],puVar27[7] & 0xfffffffffffffffe);
      }
      if ((*(byte *)(puVar27 + 3) & 1) != 0) {
        func_0x0412a280(puVar27[5],puVar27[3] & 0xfffffffffffffffe);
      }
      func_0x0412a280(puVar27,0x100);
      puVar27 = puVar29;
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    if (*(long *)(param_1 + 0x48) != 0) {
      func_0x0eee2dd0(*(undefined8 *)(param_1 + 0x40),0,*(long *)(param_1 + 0x48) << 3);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  lVar24 = lStack_260;
  pthread_mutex_unlock(lStack_260);
  func_0x0412d680(lVar24);
  lStack_290 = *(long *)(param_4 + 0x98);
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  iStack_a8 = 0;
  uStack_80 = 0x3f800000;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  lVar24 = *param_5;
  plVar22 = (long *)param_5[1];
  if (plVar22 != (long *)0x0) {
    LOCK();
    plVar22[1] = plVar22[1] + 1;
    UNLOCK();
  }
  lVar30 = param_5[2];
  auStack_328[0] = 0;
  auStack_328._1_4_ = 0;
  uStack_323 = 0;
  uStack_31f = 0;
  uStack_31b = 0;
  uStack_31a = 0;
  uStack_318 = 0;
  uStack_317 = 0;
  bStack_312 = 0;
  uStack_311 = 0;
  pppbStack_310 = &ppbStack_308;
  ppbStack_308 = (byte **)0x0;
  uStack_300 = 0;
  plStack_2d8 = (long *)0x0;
  plStack_2a8 = (long *)0x0;
  lStack_158 = lVar24;
  plStack_150 = plVar22;
  lStack_148 = lVar30;
  func_0x05d54750(auStack_388,&UNK_0f0863e8);
  func_0x0d6b2930(&pbStack_418,&DAT_0f5a60b8,auStack_388);
  if (plVar22 == (long *)0x0) {
    plStack_438 = (long *)0x0;
  }
  else {
    LOCK();
    plVar22[1] = plVar22[1] + 1;
    UNLOCK();
    LOCK();
    plVar22[1] = plVar22[1] + 1;
    UNLOCK();
    plStack_438 = plVar22;
  }
  plStack_3e0 = &lStack_440;
  lStack_448 = CONCAT62(lStack_448._2_6_,0xffff);
  lStack_428 = 0;
  uStack_420 = 0x100;
  lStack_440 = lVar24;
  lStack_430 = lVar30;
  lStack_350 = lVar24;
  plStack_348 = plVar22;
  lStack_340 = lVar30;
  plStack_338 = param_5;
  pbVar20 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa8);
  if (pbVar20 == (byte *)0x0) {
    func_0x0eec74c0(0xa8,0);
  }
  plStack_368 = _DAT_0f5a60b8;
  plStack_398 = _DAT_0f5a60b8;
  uVar36 = _DAT_0f5a60c0;
  lStack_450 = lVar24;
  plStack_390 = (long *)lVar30;
  lStack_298 = param_1;
  if ((_DAT_0f5a60c0 >> 0x37 & 1) != 0) {
    uVar36 = _DAT_0f5a60c0 & 0xff00ffffffffffff;
    lVar30 = *(long *)(uVar36 - 8);
    lVar24 = lVar30 + 9;
    plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
    if (lVar24 != 0 && plVar21 == (long *)0x0) {
      func_0x0eec74c0(lVar24,8);
    }
    *plVar21 = lVar30;
    func_0x0eee2f00(plVar21 + 1,uVar36,lVar30);
    *(undefined1 *)((long)plVar21 + lVar30 + 8) = 0;
    uVar36 = (ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_358 = 0;
  uStack_458 = _DAT_0f5a60c8;
  if ((_DAT_0f5a60c8 & 0x80000000000000) != 0) {
    uVar35 = _DAT_0f5a60c8 & 0xff00ffffffffffff;
    lVar30 = *(long *)(uVar35 - 8);
    lVar24 = lVar30 + 9;
    uStack_360 = uVar36;
    plStack_268 = plVar22;
    plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
    if (lVar24 != 0 && plVar22 == (long *)0x0) {
      func_0x0eec74c0(lVar24,8);
    }
    *plVar22 = lVar30;
    func_0x0eee2f00(plVar22 + 1,uVar35,lVar30);
    *(undefined1 *)((long)plVar22 + lVar30 + 8) = 0;
    uStack_458 = (ulong)(plVar22 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    plVar22 = plStack_268;
  }
  plStack_468 = plStack_398;
  plVar21 = plStack_3e0;
  uVar14 = uStack_3e8;
  uStack_3a8 = uStack_3e8;
  lStack_258 = CONCAT62(lStack_258._2_6_,0xffff);
  lStack_250 = lStack_450;
  plStack_248 = plVar22;
  *plStack_3e0 = 0;
  plVar21[1] = 0;
  uStack_200 = uStack_3f0;
  ppbStack_208 = ppbStack_3f8;
  puStack_218 = (undefined4 *)uStack_408;
  pbStack_220 = (byte *)uStack_410;
  lStack_240 = (long)plStack_390;
  lStack_430 = 0;
  lStack_238 = lStack_428;
  uStack_230 = uStack_420;
  uStack_360 = 0;
  uStack_358 = 0;
  bStack_3d8 = (byte)pbStack_418;
  uStack_3d7 = (undefined4)((ulong)pbStack_418 >> 8);
  uStack_3d3._0_3_ = (uint3)((ulong)pbStack_418 >> 0x28);
  uStack_410 = 0;
  pbStack_228 = pbStack_418;
  uStack_3d3 = (uint)(uint3)uStack_3d3;
  uStack_3cf = 0;
  uStack_3cb = 0;
  uStack_3ca = 0;
  uStack_3c8 = 0;
  uStack_3c7 = 0;
  uStack_3c5 = 0;
  uStack_3c4 = 0;
  uStack_3c2 = 0;
  uStack_3c1 = 0;
  uStack_408 = 0;
  pppbStack_3c0 = pppbStack_400;
  pppbStack_210 = pppbStack_400;
  uStack_3b8 = 0;
  ppbStack_3f8 = (byte **)0x0;
  uStack_3f0 = 0;
  uStack_3b0 = 0;
  auStack_1f8[0] = uVar14;
  uStack_460 = uVar36;
  func_0x0d6a8a30(pbVar20,lStack_330,&plStack_468,&pbStack_228);
  if ((uStack_200 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_200 & 0xff00ffffffffffff) - 8);
  }
  uStack_200 = 0;
  if (((ulong)ppbStack_208 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppbStack_208 & 0xff00ffffffffffff) - 8);
  }
  ppbStack_208 = (byte **)0x0;
  if (((ulong)puStack_218 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_218 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_218 = (undefined4 *)0x0;
  if (((ulong)pbStack_220 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)pbStack_220 & 0xff00ffffffffffff) - 8)
    ;
  }
  pbStack_220 = (byte *)0x0;
  if ((uStack_458 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_458 & 0xff00ffffffffffff) - 8);
  }
  uStack_458 = 0;
  if ((uStack_460 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_460 & 0xff00ffffffffffff) - 8);
  }
  *(undefined **)pbVar20 = &UNK_0f0c18e0;
  pbVar20[0x70] = 0xff;
  pbVar20[0x71] = 0xff;
  *(long *)(pbVar20 + 0x78) = lStack_450;
  *(long **)(pbVar20 + 0x80) = plVar22;
  *(long **)(pbVar20 + 0x88) = plStack_390;
  *(long *)(pbVar20 + 0x90) = lStack_428;
  *(undefined2 *)(pbVar20 + 0x98) = uStack_420;
  pbVar20[0xa0] = 0xfc;
  pbVar20[0xa1] = 0xff;
  pbVar20[0xa2] = 1;
  plVar21 = (long *)CONCAT35((undefined3)uStack_323,CONCAT41(auStack_328._1_4_,auStack_328[0]));
  plVar26 = (long *)CONCAT26(uStack_31a,CONCAT15(uStack_31b,CONCAT41(uStack_31f,uStack_323._3_1_)));
  pbStack_228 = pbVar20;
  while ((plVar21 != plVar26 &&
         (cVar18 = func_0x04fa7a10(*plVar21 + 0x20,pbStack_228 + 0x38), cVar18 != '\0'))) {
    plVar21 = plVar21 + 1;
  }
  func_0x0d6af860(auStack_328,plVar21,&pbStack_228);
  pbVar20 = pbStack_228;
  pbStack_228 = (byte *)0x0;
  if (pbVar20 != (byte *)0x0) {
    (**(code **)(*(long *)pbVar20 + 8))();
  }
  plVar21 = plStack_438;
  lStack_440 = 0;
  plStack_438 = (long *)0x0;
  if (plVar21 == (long *)0x0) {
    lStack_430 = 0;
  }
  else {
    LOCK();
    plVar26 = plVar21 + 1;
    lVar24 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      func_0x0412c2d0(plVar21);
    }
    plVar21 = plStack_438;
    lStack_430 = 0;
    if (plStack_438 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_438 + 1;
      lVar24 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_438 + 0x10))(plStack_438);
        func_0x0412c2d0(plVar21);
      }
    }
  }
  plVar21 = plStack_348;
  lStack_350 = 0;
  plStack_348 = (long *)0x0;
  if (plVar21 == (long *)0x0) {
    lStack_340 = 0;
  }
  else {
    LOCK();
    plVar26 = plVar21 + 1;
    lVar24 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      func_0x0412c2d0(plVar21);
    }
    plVar21 = plStack_348;
    lStack_340 = 0;
    if (plStack_348 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_348 + 1;
      lVar24 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_348 + 0x10))(plStack_348);
        func_0x0412c2d0(plVar21);
      }
    }
  }
  if ((uStack_3f0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_3f0 & 0xff00ffffffffffff) - 8);
  }
  uStack_3f0 = 0;
  if (((ulong)ppbStack_3f8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppbStack_3f8 & 0xff00ffffffffffff) - 8);
  }
  ppbStack_3f8 = (byte **)0x0;
  if ((uStack_408 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_408 & 0xff00ffffffffffff) - 8);
  }
  uStack_408 = 0;
  if ((uStack_410 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_410 & 0xff00ffffffffffff) - 8);
  }
  uStack_410 = 0;
  if ((uStack_378 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_378 & 0xff00ffffffffffff) - 8);
  }
  uStack_378 = 0;
  if ((uStack_380 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_380 & 0xff00ffffffffffff) - 8);
  }
  lStack_158 = 0;
  plStack_150 = (long *)0x0;
  if (plVar22 == (long *)0x0) {
    lStack_148 = 0;
    lVar24 = *(long *)(lStack_290 + 0x10);
    if (lVar24 != *(long *)(lStack_290 + 8)) goto LAB_07226545;
  }
  else {
    LOCK();
    plVar21 = plVar22 + 1;
    lVar24 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      func_0x0412c2d0(plVar22);
    }
    plVar22 = plStack_150;
    lStack_148 = 0;
    if (plStack_150 != (long *)0x0) {
      LOCK();
      plVar21 = plStack_150 + 1;
      lVar24 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_150 + 0x10))(plStack_150);
        func_0x0412c2d0(plVar22);
      }
    }
    lVar24 = *(long *)(lStack_290 + 0x10);
    if (*(long *)(lStack_290 + 0x10) != *(long *)(lStack_290 + 8)) {
LAB_07226545:
      do {
        pbStack_418 = (byte *)((ulong)pbStack_418 & 0xffffffffffffff00);
        bStack_3d8 = 0x2a;
        uStack_3d7 = _DAT_01568f10;
        uStack_3d3 = _UNK_01568f14;
        uStack_3cf = _UNK_01568f18;
        uStack_3cb = (undefined1)_UNK_01568f1c;
        uStack_3ca = 0x6574;
        uStack_3c8 = 0x67;
        uStack_3c7 = 0x726f;
        uStack_3c5 = 0x69;
        uStack_3c4 = 0x7365;
        uStack_3c2 = 0;
        plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
        if (plVar22 == (long *)0x0) {
          func_0x0eec74c0(0x40,0);
        }
        lVar30 = lVar24 + -0x110;
        *plVar22 = (long)&UNK_0f0c1c88;
        plVar22[1] = lStack_298;
        plVar22[2] = lStack_160;
        plVar22[3] = (long)auStack_328;
        plVar22[4] = lVar30;
        plVar22[5] = (long)&uStack_198;
        plVar22[6] = (long)&uStack_138;
        plVar22[7] = (long)&pbStack_418;
        uVar33 = *(undefined8 *)(lVar24 + -0x28);
        ppbVar25 = (byte **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
        if (ppbVar25 == (byte **)0x0) {
          func_0x0eec74c0(0x40,0);
        }
        *ppbVar25 = &UNK_0f0c1c88;
        uVar2 = *(undefined4 *)((long)plVar22 + 0xc);
        lVar32 = plVar22[2];
        uVar3 = *(undefined4 *)((long)plVar22 + 0x14);
        lVar8 = plVar22[3];
        uVar4 = *(undefined4 *)((long)plVar22 + 0x1c);
        lVar9 = plVar22[4];
        uVar5 = *(undefined4 *)((long)plVar22 + 0x24);
        lVar10 = plVar22[5];
        uVar6 = *(undefined4 *)((long)plVar22 + 0x2c);
        lVar11 = plVar22[6];
        uVar7 = *(undefined4 *)((long)plVar22 + 0x34);
        *(int *)(ppbVar25 + 1) = (int)plVar22[1];
        *(undefined4 *)((long)ppbVar25 + 0xc) = uVar2;
        *(int *)(ppbVar25 + 2) = (int)lVar32;
        *(undefined4 *)((long)ppbVar25 + 0x14) = uVar3;
        *(int *)(ppbVar25 + 3) = (int)lVar8;
        *(undefined4 *)((long)ppbVar25 + 0x1c) = uVar4;
        *(int *)(ppbVar25 + 4) = (int)lVar9;
        *(undefined4 *)((long)ppbVar25 + 0x24) = uVar5;
        *(int *)(ppbVar25 + 5) = (int)lVar10;
        *(undefined4 *)((long)ppbVar25 + 0x2c) = uVar6;
        *(int *)(ppbVar25 + 6) = (int)lVar11;
        *(undefined4 *)((long)ppbVar25 + 0x34) = uVar7;
        ppbVar25[7] = (byte *)plVar22[7];
        ppbStack_208 = ppbVar25;
        func_0x0d62a6f0(uVar33,&bStack_3d8,&pbStack_228,*(undefined4 *)(lVar24 + -8),0);
        if (ppbStack_208 == &pbStack_228) {
          lVar32 = 0x20;
LAB_07226695:
          (**(code **)(*ppbStack_208 + lVar32))();
        }
        else {
          lVar32 = 0x28;
          if (ppbStack_208 != (byte **)0x0) goto LAB_07226695;
        }
        (**(code **)(*plVar22 + 0x28))(plVar22);
        if ((bStack_3d8 & 1) != 0) {
          func_0x0412a280(CONCAT17(uStack_3c1,
                                   CONCAT16(uStack_3c2,
                                            CONCAT24(uStack_3c4,
                                                     CONCAT13(uStack_3c5,
                                                              CONCAT21(uStack_3c7,uStack_3c8))))),
                          CONCAT35((uint3)uStack_3d3,CONCAT41(uStack_3d7,bStack_3d8)) &
                          0xfffffffffffffffe);
        }
        if ((char)pbStack_418 == '\x01') {
          uVar33 = **(undefined8 **)(**(long **)(lVar24 + -0x28) + 8);
          if ((DAT_0f5ea4a0 == '\0') && (iVar19 = func_0x04108328(&DAT_0f5ea4a0), iVar19 != 0)) {
            func_0x08b670e0(&DAT_0f5ea138);
            func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
            FUN_0410844d(&DAT_0f5ea4a0);
          }
          func_0x0d5f7010(&pbStack_228,uVar33,&DAT_0f5ea138);
          func_0x0646d5a0(&uStack_a0,&pbStack_228,&pbStack_228);
          if (((ulong)pbStack_228 & 1) != 0) {
            func_0x0412a280(puStack_218,(ulong)pbStack_228 & 0xfffffffffffffffe);
          }
        }
        lVar24 = lVar30;
      } while (lVar30 != *(long *)(lStack_290 + 8));
    }
  }
  plVar22 = plStack_338;
  if (0 < iStack_a8) {
    lVar24 = *(long *)(lStack_298 + 0x90);
    puVar23 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
    if (puVar23 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x1a,0);
    }
    uVar4 = _UNK_013298ba;
    uVar3 = _UNK_013298b6;
    uVar2 = _UNK_013298b2;
    pbStack_228 = (byte *)0x1b;
    pbStack_220 = (byte *)0x17;
    *puVar23 = _DAT_013298ae;
    puVar23[1] = uVar2;
    puVar23[2] = uVar3;
    puVar23[3] = uVar4;
    *(undefined8 *)((long)puVar23 + 0xf) = 0x79726f6765746143;
    *(undefined1 *)((long)puVar23 + 0x17) = 0;
    puStack_218 = puVar23;
    (**(code **)(*(long *)(lVar24 + 0x40) + 0x10))(lVar24 + 0x40,&pbStack_228,&uStack_138);
    if (((ulong)pbStack_228 & 1) != 0) {
      func_0x0412a280(puStack_218,(ulong)pbStack_228 & 0xfffffffffffffffe);
    }
  }
  if (plStack_2a8 == alStack_2c8) {
    lVar24 = 0x20;
LAB_072267b1:
    (**(code **)(*plStack_2a8 + lVar24))();
  }
  else {
    lVar24 = 0x28;
    if (plStack_2a8 != (long *)0x0) goto LAB_072267b1;
  }
  if (plStack_2d8 == (long *)auStack_2f8) {
    lVar24 = 0x20;
LAB_072267e5:
    (**(code **)(*plStack_2d8 + lVar24))();
  }
  else {
    lVar24 = 0x28;
    if (plStack_2d8 != (long *)0x0) goto LAB_072267e5;
  }
  func_0x04908570(&pppbStack_310,ppbStack_308);
  uVar3 = uStack_323;
  uVar2 = auStack_328._1_4_;
  uVar16 = auStack_328[0];
  lVar24 = CONCAT35((undefined3)uStack_323,CONCAT41(auStack_328._1_4_,auStack_328[0]));
  if (lVar24 != 0) {
    lVar30 = CONCAT26(uStack_31a,CONCAT15(uStack_31b,CONCAT41(uStack_31f,uStack_323._3_1_)));
    if (lVar24 != lVar30) {
      do {
        plVar21 = *(long **)(lVar30 + -8);
        *(undefined8 *)(lVar30 + -8) = 0;
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 8))();
        }
        lVar30 = lVar30 + -8;
      } while (lVar30 != lVar24);
      lVar24 = CONCAT35((undefined3)uStack_323,CONCAT41(auStack_328._1_4_,auStack_328[0]));
    }
    uStack_323 = CONCAT13(uVar16,(undefined3)uStack_323);
    uStack_31f = uVar2;
    uStack_31b = (undefined1)uVar3;
    uStack_31a = (ushort)((uint)uVar3 >> 8);
    func_0x0412a280(lVar24,CONCAT17(uStack_311,CONCAT16(bStack_312,CONCAT51(uStack_317,uStack_318)))
                           - lVar24);
  }
  func_0x05f43b50(&uStack_138);
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  iStack_a8 = 0;
  uStack_80 = 0x3f800000;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  lVar24 = *plVar22;
  plVar21 = (long *)plVar22[1];
  if (plVar21 != (long *)0x0) {
    LOCK();
    plVar21[1] = plVar21[1] + 1;
    UNLOCK();
  }
  lVar30 = plVar22[2];
  pbStack_228 = (byte *)0x0;
  pbStack_220 = (byte *)0x0;
  puStack_218 = (undefined4 *)0x0;
  pppbStack_210 = &ppbStack_208;
  ppbStack_208 = (byte **)0x0;
  uStack_200 = 0;
  plStack_1d8 = (long *)0x0;
  plStack_1a8 = (long *)0x0;
  lStack_288 = lVar24;
  plStack_280 = plVar21;
  lStack_278 = lVar30;
  func_0x05d54750(auStack_388,&UNK_0f0863e8);
  func_0x0d6b2930(&pbStack_418,&DAT_0f5a60f0,auStack_388);
  if (plVar21 == (long *)0x0) {
    plStack_438 = (long *)0x0;
  }
  else {
    LOCK();
    plVar21[1] = plVar21[1] + 1;
    UNLOCK();
    LOCK();
    plVar21[1] = plVar21[1] + 1;
    UNLOCK();
    plStack_438 = plVar21;
  }
  lStack_448 = CONCAT62(lStack_448._2_6_,0xffff);
  lStack_428 = 0;
  uStack_420 = 0x100;
  lStack_440 = lVar24;
  lStack_430 = lVar30;
  plStack_3e0 = (long *)lVar30;
  plStack_390 = plVar21;
  lStack_350 = lVar24;
  plStack_348 = plVar21;
  lStack_340 = lVar30;
  plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa8);
  if (plVar22 == (long *)0x0) {
    func_0x0eec74c0(0xa8,0);
  }
  plVar21 = _DAT_0f5a60f0;
  plStack_368 = _DAT_0f5a60f0;
  uVar36 = _DAT_0f5a60f8;
  lStack_450 = lVar24;
  plStack_398 = &lStack_440;
  if ((_DAT_0f5a60f8 & 0x80000000000000) != 0) {
    uVar36 = _DAT_0f5a60f8 & 0xff00ffffffffffff;
    lVar30 = *(long *)(uVar36 - 8);
    lVar24 = lVar30 + 9;
    plVar26 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
    if (lVar24 != 0 && plVar26 == (long *)0x0) {
      func_0x0eec74c0(lVar24,8);
    }
    *plVar26 = lVar30;
    func_0x0eee2f00(plVar26 + 1,uVar36,lVar30);
    *(undefined1 *)((long)plVar26 + lVar30 + 8) = 0;
    uVar36 = (ulong)(plVar26 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_358 = 0;
  uVar35 = _DAT_0f5a6100;
  if ((_DAT_0f5a6100 & 0x80000000000000) != 0) {
    plStack_338 = plVar21;
    uVar35 = _DAT_0f5a6100 & 0xff00ffffffffffff;
    lVar30 = *(long *)(uVar35 - 8);
    lVar24 = lVar30 + 9;
    uStack_360 = uVar36;
    plVar26 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
    if (lVar24 != 0 && plVar26 == (long *)0x0) {
      func_0x0eec74c0(lVar24,8);
    }
    *plVar26 = lVar30;
    func_0x0eee2f00(plVar26 + 1,uVar35,lVar30);
    *(undefined1 *)((long)plVar26 + lVar30 + 8) = 0;
    plVar21 = plStack_338;
    uVar35 = (ulong)(plVar26 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  plVar26 = plStack_398;
  uVar14 = uStack_3e8;
  uStack_3a8 = uStack_3e8;
  lStack_258 = CONCAT62(lStack_258._2_6_,0xffff);
  lStack_250 = lStack_450;
  plStack_248 = plStack_390;
  *plStack_398 = 0;
  plVar26[1] = 0;
  uStack_300 = uStack_3f0;
  ppbStack_308 = ppbStack_3f8;
  uVar13 = uStack_408;
  uVar12 = uStack_410;
  lStack_240 = (long)plStack_3e0;
  lStack_430 = 0;
  lStack_238 = lStack_428;
  uStack_230 = uStack_420;
  uStack_360 = 0;
  uStack_358 = 0;
  bStack_3d8 = (byte)pbStack_418;
  uStack_3d7 = (undefined4)((ulong)pbStack_418 >> 8);
  uStack_3d3._0_3_ = (uint3)((ulong)pbStack_418 >> 0x28);
  uStack_410 = 0;
  uStack_323._3_1_ = (undefined1)uVar12;
  uStack_323 = CONCAT13(uStack_323._3_1_,(uint3)uStack_3d3);
  uStack_31f = (undefined4)(uVar12 >> 8);
  uStack_31b = (undefined1)(uVar12 >> 0x28);
  uStack_31a = (ushort)(uVar12 >> 0x30);
  uStack_3d3 = (uint)(uint3)uStack_3d3;
  uStack_3cf = 0;
  uStack_3cb = 0;
  uStack_3ca = 0;
  uStack_3c8 = 0;
  uStack_3c7 = 0;
  uStack_3c5 = 0;
  uStack_3c4 = 0;
  uStack_3c2 = 0;
  uStack_3c1 = 0;
  uStack_408 = 0;
  pppbStack_3c0 = pppbStack_400;
  uStack_318 = (undefined1)uVar13;
  uStack_317 = (undefined5)(uVar13 >> 8);
  bStack_312 = (byte)(uVar13 >> 0x30);
  uStack_311 = (undefined1)(uVar13 >> 0x38);
  pppbStack_310 = pppbStack_400;
  uStack_3b8 = 0;
  ppbStack_3f8 = (byte **)0x0;
  uStack_3f0 = 0;
  uStack_3b0 = 0;
  auStack_2f8[0] = uVar14;
  plStack_468 = plVar21;
  uStack_460 = uVar36;
  uStack_458 = uVar35;
  auStack_328[0] = bStack_3d8;
  auStack_328._1_4_ = uStack_3d7;
  func_0x0d6a8a30(plVar22,lStack_330,&plStack_468,auStack_328);
  if ((uStack_300 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_300 & 0xff00ffffffffffff) - 8);
  }
  plVar21 = plStack_390;
  lVar24 = lStack_450;
  uStack_300 = 0;
  if (((ulong)ppbStack_308 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppbStack_308 & 0xff00ffffffffffff) - 8);
  }
  ppbStack_308 = (byte **)0x0;
  if ((bStack_312 & 0x80) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,
               (CONCAT17(uStack_311,CONCAT16(bStack_312,CONCAT51(uStack_317,uStack_318))) &
               0xff00ffffffffffff) - 8);
  }
  uStack_318 = 0;
  uStack_317 = 0;
  bStack_312 = 0;
  uStack_311 = 0;
  if ((uStack_31a & 0x80) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,
               (CONCAT26(uStack_31a,CONCAT15(uStack_31b,CONCAT41(uStack_31f,uStack_323._3_1_))) &
               0xff00ffffffffffff) - 8);
  }
  uStack_323 = uStack_323 & 0xffffff;
  uStack_31f = 0;
  uStack_31b = 0;
  uStack_31a = 0;
  if ((uStack_458 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_458 & 0xff00ffffffffffff) - 8);
  }
  uStack_458 = 0;
  if ((uStack_460 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_460 & 0xff00ffffffffffff) - 8);
  }
  pbVar17 = pbStack_220;
  *plVar22 = (long)&UNK_0f0c1998;
  *(undefined2 *)(plVar22 + 0xe) = 0xffff;
  plVar22[0xf] = lVar24;
  plVar22[0x10] = (long)plVar21;
  plVar22[0x11] = (long)plStack_3e0;
  plVar22[0x12] = lStack_428;
  *(undefined2 *)(plVar22 + 0x13) = uStack_420;
  *(undefined2 *)(plVar22 + 0x14) = 0xfffc;
  *(undefined1 *)((long)plVar22 + 0xa2) = 1;
  plStack_370 = plVar22;
  pbVar20 = pbStack_228;
  while ((pbVar20 != pbVar17 &&
         (cVar18 = func_0x04fa7a10(*(long *)pbVar20 + 0x20,plStack_370 + 7), cVar18 != '\0'))) {
    pbVar20 = pbVar20 + 8;
  }
  func_0x0d6af860(&pbStack_228,pbVar20,&plStack_370);
  plVar22 = plStack_370;
  plStack_370 = (long *)0x0;
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 8))();
  }
  plVar22 = plStack_438;
  lStack_440 = 0;
  plStack_438 = (long *)0x0;
  if (plVar22 == (long *)0x0) {
    lStack_430 = 0;
  }
  else {
    LOCK();
    plVar21 = plVar22 + 1;
    lVar24 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      func_0x0412c2d0(plVar22);
    }
    plVar22 = plStack_438;
    lStack_430 = 0;
    if (plStack_438 != (long *)0x0) {
      LOCK();
      plVar21 = plStack_438 + 1;
      lVar24 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_438 + 0x10))(plStack_438);
        func_0x0412c2d0(plVar22);
      }
    }
  }
  plVar22 = plStack_348;
  lStack_350 = 0;
  plStack_348 = (long *)0x0;
  if (plVar22 == (long *)0x0) {
    lStack_340 = 0;
  }
  else {
    LOCK();
    plVar21 = plVar22 + 1;
    lVar24 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      func_0x0412c2d0(plVar22);
    }
    plVar22 = plStack_348;
    lStack_340 = 0;
    if (plStack_348 != (long *)0x0) {
      LOCK();
      plVar21 = plStack_348 + 1;
      lVar24 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_348 + 0x10))(plStack_348);
        func_0x0412c2d0(plVar22);
      }
    }
  }
  if ((uStack_3f0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_3f0 & 0xff00ffffffffffff) - 8);
  }
  uStack_3f0 = 0;
  if (((ulong)ppbStack_3f8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppbStack_3f8 & 0xff00ffffffffffff) - 8);
  }
  ppbStack_3f8 = (byte **)0x0;
  if ((uStack_408 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_408 & 0xff00ffffffffffff) - 8);
  }
  uStack_408 = 0;
  if ((uStack_410 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_410 & 0xff00ffffffffffff) - 8);
  }
  uStack_410 = 0;
  if ((uStack_378 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_378 & 0xff00ffffffffffff) - 8);
  }
  uStack_378 = 0;
  if ((uStack_380 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_380 & 0xff00ffffffffffff) - 8);
  }
  func_0x05d54750(auStack_388,&UNK_0f0863e8);
  func_0x0d6b2930(&pbStack_418,&DAT_0f5a6128,auStack_388);
  lStack_178 = lStack_288;
  plStack_170 = plStack_280;
  lStack_450 = lStack_288;
  plStack_3e0 = plStack_280;
  if (plStack_280 == (long *)0x0) {
    plStack_438 = (long *)0x0;
  }
  else {
    LOCK();
    plStack_280[1] = plStack_280[1] + 1;
    UNLOCK();
    plStack_438 = plStack_280;
    LOCK();
    plStack_280[1] = plStack_280[1] + 1;
    UNLOCK();
  }
  lStack_440 = lStack_288;
  lStack_168 = lStack_278;
  lStack_448 = CONCAT62(lStack_448._2_6_,0xffff);
  plStack_398 = (long *)lStack_278;
  lStack_430 = lStack_278;
  lStack_428 = 0;
  uStack_420 = 0x100;
  plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa8);
  if (plVar22 == (long *)0x0) {
    func_0x0eec74c0(0xa8,0);
  }
  plVar21 = _DAT_0f5a6128;
  plStack_368 = _DAT_0f5a6128;
  uVar36 = _DAT_0f5a6130;
  plStack_338 = &lStack_440;
  if ((_DAT_0f5a6130 & 0x80000000000000) != 0) {
    uVar36 = _DAT_0f5a6130 & 0xff00ffffffffffff;
    lVar30 = *(long *)(uVar36 - 8);
    lVar24 = lVar30 + 9;
    plVar26 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
    if (lVar24 != 0 && plVar26 == (long *)0x0) {
      func_0x0eec74c0(lVar24,8);
    }
    *plVar26 = lVar30;
    func_0x0eee2f00(plVar26 + 1,uVar36,lVar30);
    *(undefined1 *)((long)plVar26 + lVar30 + 8) = 0;
    uVar36 = (ulong)(plVar26 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_358 = 0;
  uVar35 = _DAT_0f5a6138;
  if ((_DAT_0f5a6138 & 0x80000000000000) != 0) {
    plStack_268 = plVar21;
    uVar35 = _DAT_0f5a6138 & 0xff00ffffffffffff;
    lVar30 = *(long *)(uVar35 - 8);
    lVar24 = lVar30 + 9;
    uStack_360 = uVar36;
    plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
    if (lVar24 != 0 && plVar21 == (long *)0x0) {
      func_0x0eec74c0(lVar24,8);
    }
    *plVar21 = lVar30;
    func_0x0eee2f00(plVar21 + 1,uVar35,lVar30);
    *(undefined1 *)((long)plVar21 + lVar30 + 8) = 0;
    uVar35 = (ulong)(plVar21 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    plVar21 = plStack_268;
  }
  plVar26 = plStack_338;
  uStack_3a8 = uStack_3e8;
  lStack_258 = CONCAT62(lStack_258._2_6_,0xffff);
  lStack_250 = lStack_450;
  plStack_248 = plStack_3e0;
  *plStack_338 = 0;
  plVar26[1] = 0;
  uStack_300 = uStack_3f0;
  ppbStack_308 = ppbStack_3f8;
  uVar13 = uStack_408;
  uVar12 = uStack_410;
  lStack_240 = (long)plStack_398;
  lStack_430 = 0;
  lStack_238 = lStack_428;
  uStack_230 = uStack_420;
  uStack_360 = 0;
  uStack_358 = 0;
  bStack_3d8 = (byte)pbStack_418;
  uStack_3d7 = (undefined4)((ulong)pbStack_418 >> 8);
  uStack_3d3._0_3_ = (uint3)((ulong)pbStack_418 >> 0x28);
  uStack_410 = 0;
  uStack_323._3_1_ = (undefined1)uVar12;
  uStack_323 = CONCAT13(uStack_323._3_1_,(uint3)uStack_3d3);
  uStack_31f = (undefined4)(uVar12 >> 8);
  uStack_31b = (undefined1)(uVar12 >> 0x28);
  uStack_31a = (ushort)(uVar12 >> 0x30);
  uStack_3d3 = (uint)(uint3)uStack_3d3;
  uStack_3cf = 0;
  uStack_3cb = 0;
  uStack_3ca = 0;
  uStack_3c8 = 0;
  uStack_3c7 = 0;
  uStack_3c5 = 0;
  uStack_3c4 = 0;
  uStack_3c2 = 0;
  uStack_3c1 = 0;
  uStack_408 = 0;
  pppbStack_3c0 = pppbStack_400;
  uStack_318 = (undefined1)uVar13;
  uStack_317 = (undefined5)(uVar13 >> 8);
  bStack_312 = (byte)(uVar13 >> 0x30);
  uStack_311 = (undefined1)(uVar13 >> 0x38);
  pppbStack_310 = pppbStack_400;
  uStack_3b8 = 0;
  ppbStack_3f8 = (byte **)0x0;
  uStack_3f0 = 0;
  uStack_3b0 = 0;
  auStack_2f8[0] = uStack_3e8;
  plStack_468 = plVar21;
  uStack_460 = uVar36;
  uStack_458 = uVar35;
  auStack_328[0] = bStack_3d8;
  auStack_328._1_4_ = uStack_3d7;
  func_0x0d6a8a30(plVar22,lStack_330,&plStack_468,auStack_328);
  plVar21 = plStack_390;
  if ((uStack_300 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_300 & 0xff00ffffffffffff) - 8);
  }
  uStack_300 = 0;
  if (((ulong)ppbStack_308 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppbStack_308 & 0xff00ffffffffffff) - 8);
  }
  ppbStack_308 = (byte **)0x0;
  if ((bStack_312 & 0x80) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,
               (CONCAT17(uStack_311,CONCAT16(bStack_312,CONCAT51(uStack_317,uStack_318))) &
               0xff00ffffffffffff) - 8);
  }
  uStack_318 = 0;
  uStack_317 = 0;
  bStack_312 = 0;
  uStack_311 = 0;
  if ((uStack_31a & 0x80) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,
               (CONCAT26(uStack_31a,CONCAT15(uStack_31b,CONCAT41(uStack_31f,uStack_323._3_1_))) &
               0xff00ffffffffffff) - 8);
  }
  uStack_323 = uStack_323 & 0xffffff;
  uStack_31f = 0;
  uStack_31b = 0;
  uStack_31a = 0;
  if ((uStack_458 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_458 & 0xff00ffffffffffff) - 8);
  }
  uStack_458 = 0;
  if ((uStack_460 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_460 & 0xff00ffffffffffff) - 8);
  }
  pbVar17 = pbStack_220;
  *plVar22 = (long)&UNK_0f0c1a50;
  *(undefined2 *)(plVar22 + 0xe) = 0xffff;
  plVar22[0xf] = lStack_450;
  plVar22[0x10] = (long)plStack_3e0;
  plVar22[0x11] = (long)plStack_398;
  plVar22[0x12] = lStack_428;
  *(undefined2 *)(plVar22 + 0x13) = uStack_420;
  *(undefined2 *)(plVar22 + 0x14) = 0xfffc;
  *(undefined1 *)((long)plVar22 + 0xa2) = 1;
  plStack_468 = plVar22;
  pbVar20 = pbStack_228;
  while ((pbVar20 != pbVar17 &&
         (cVar18 = func_0x04fa7a10(*(long *)pbVar20 + 0x20,plStack_468 + 7), cVar18 != '\0'))) {
    pbVar20 = pbVar20 + 8;
  }
  func_0x0d6af860(&pbStack_228,pbVar20,&plStack_468);
  plVar22 = plStack_468;
  plStack_468 = (long *)0x0;
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 8))();
  }
  plVar22 = plStack_438;
  lStack_440 = 0;
  plStack_438 = (long *)0x0;
  if (plVar22 == (long *)0x0) {
    lStack_430 = 0;
  }
  else {
    LOCK();
    plVar26 = plVar22 + 1;
    lVar24 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      func_0x0412c2d0(plVar22);
    }
    plVar22 = plStack_438;
    lStack_430 = 0;
    if (plStack_438 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_438 + 1;
      lVar24 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_438 + 0x10))(plStack_438);
        func_0x0412c2d0(plVar22);
      }
    }
  }
  plVar22 = plStack_170;
  lStack_178 = 0;
  plStack_170 = (long *)0x0;
  if (plVar22 == (long *)0x0) {
    lStack_168 = 0;
  }
  else {
    LOCK();
    plVar26 = plVar22 + 1;
    lVar24 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      func_0x0412c2d0(plVar22);
    }
    plVar22 = plStack_170;
    lStack_168 = 0;
    if (plStack_170 != (long *)0x0) {
      LOCK();
      plVar26 = plStack_170 + 1;
      lVar24 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_170 + 0x10))(plStack_170);
        func_0x0412c2d0(plVar22);
      }
    }
  }
  if ((uStack_3f0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_3f0 & 0xff00ffffffffffff) - 8);
  }
  uStack_3f0 = 0;
  if (((ulong)ppbStack_3f8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)ppbStack_3f8 & 0xff00ffffffffffff) - 8);
  }
  ppbStack_3f8 = (byte **)0x0;
  if ((uStack_408 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_408 & 0xff00ffffffffffff) - 8);
  }
  uStack_408 = 0;
  if ((uStack_410 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_410 & 0xff00ffffffffffff) - 8);
  }
  uStack_410 = 0;
  if ((uStack_378 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_378 & 0xff00ffffffffffff) - 8);
  }
  uStack_378 = 0;
  if ((uStack_380 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_380 & 0xff00ffffffffffff) - 8);
  }
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x1a0,0);
  }
  func_0x0d6b23d0(puVar27,&DAT_0f5a60f0,&DAT_0f5a6128);
  puVar27[8] = 0;
  puVar27[9] = 0;
  puVar27[10] = 0;
  pcVar28 = *(char **)(lStack_330 + 8);
  lVar24 = *(long *)(lStack_330 + 0x10);
  if (lVar24 == 0) {
    puVar27[8] = pcVar28;
    puVar27[9] = 0;
  }
  else {
    LOCK();
    *(long *)(lVar24 + 8) = *(long *)(lVar24 + 8) + 1;
    UNLOCK();
    plVar22 = (long *)puVar27[9];
    puVar27[8] = pcVar28;
    puVar27[9] = lVar24;
    if (plVar22 != (long *)0x0) {
      LOCK();
      plVar26 = plVar22 + 1;
      lVar24 = *plVar26;
      *plVar26 = *plVar26 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        func_0x0412c2d0(plVar22);
      }
      pcVar28 = (char *)puVar27[8];
    }
  }
  if ((pcVar28 == (char *)0x0) || (puVar27[10] = lStack_330, *pcVar28 == '\0')) {
    uVar33 = func_0x04890760();
    func_0x041084d6(&DAT_0f5ea4a0);
    func_0x072257a0(&pbStack_228);
    func_0x05f43b50(&uStack_138);
    if ((uStack_198 & 1) != 0) {
      func_0x0412a280(uStack_188,uStack_198 & 0xfffffffffffffffe);
    }
    pthread_mutex_unlock(lStack_260);
    func_0x0eee2d70(uVar33);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar27[0xe] = 0;
  puVar27[0xf] = 0;
  puVar27[0xc] = 0;
  puVar27[0xd] = 0;
  *(undefined4 *)(puVar27 + 0x10) = 0x3f800000;
  *(undefined1 *)(puVar27 + 0x12) = 0;
  *(undefined1 *)(puVar27 + 0x24) = 0;
  *puVar27 = &UNK_0f0c1b08;
  puVar27[0x2a] = 0;
  puVar27[0x30] = 0;
  puVar27[0x32] = 0;
  puVar29 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar29 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar33 = _UNK_013298a5;
  *(ulong *)((long)puVar29 + 0xb) = CONCAT35(_UNK_013298a2,_DAT_0132989d);
  *(undefined8 *)((long)puVar29 + 0x13) = uVar33;
  uVar33 = CONCAT53(_DAT_0132989d,_UNK_0132989a);
  *puVar29 = _DAT_01329892;
  puVar29[1] = uVar33;
  *(undefined1 *)((long)puVar29 + 0x1b) = 0;
  bStack_3d8 = 0;
  uStack_3d7 = 0;
  uStack_3d3 = 0;
  uStack_3cf = 0;
  uStack_3cb = 0;
  uStack_3ca = 0;
  uStack_3c8 = 0;
  uStack_3c7 = 0;
  uStack_3c5 = 0;
  uStack_3c4 = 0;
  uStack_3c2 = 0;
  uStack_3c1 = 0;
  uStack_410 = uStack_410 & 0xffffffffffffff00;
  pbStack_418 = &bStack_3d8;
  lVar24 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (lVar24 == 0) {
    func_0x0eec74c0(0x30,0);
  }
  bStack_3d8 = (byte)lVar24;
  uStack_3d7 = (undefined4)((ulong)lVar24 >> 8);
  uStack_3d3._0_3_ = (uint3)((ulong)lVar24 >> 0x28);
  uStack_3d3 = CONCAT13(bStack_3d8,(uint3)uStack_3d3);
  uStack_3cb = (undefined1)((ulong)lVar24 >> 0x28);
  uStack_3ca = (undefined2)((ulong)lVar24 >> 0x30);
  lVar30 = lVar24 + 0x30;
  uStack_3c8 = (undefined1)lVar30;
  uStack_3c7 = (undefined2)((ulong)lVar30 >> 8);
  uStack_3c5 = (undefined1)((ulong)lVar30 >> 0x18);
  uStack_3c4 = (undefined2)((ulong)lVar30 >> 0x20);
  uStack_3c2 = (undefined1)((ulong)lVar30 >> 0x30);
  uStack_3c1 = (undefined1)((ulong)lVar30 >> 0x38);
  auStack_328[0] = (byte)&bStack_3d8;
  auStack_328._1_4_ = (undefined4)((ulong)&bStack_3d8 >> 8);
  uStack_323._0_3_ = (undefined3)((ulong)&bStack_3d8 >> 0x28);
  uStack_323._3_1_ = SUB81(&lStack_448,0);
  uStack_31f = (undefined4)((ulong)&lStack_448 >> 8);
  uStack_31b = (undefined1)((ulong)&lStack_448 >> 0x28);
  uStack_31a = (ushort)((ulong)&lStack_448 >> 0x30);
  uStack_318 = SUB81(&lStack_258,0);
  uStack_317 = (undefined5)((ulong)&lStack_258 >> 8);
  bStack_312 = (byte)((ulong)&lStack_258 >> 0x30);
  uStack_311 = (undefined1)((ulong)&lStack_258 >> 0x38);
  pppbStack_310 = (byte ***)((ulong)pppbStack_310 & 0xffffffffffffff00);
  lStack_448 = lVar24;
  uStack_3cf = uStack_3d7;
  lStack_258 = lVar24;
  func_0x0412e5e0(lVar24,puVar29,0x1b);
  *(undefined8 *)(lStack_258 + 0x18) = 0x6973756c6378651c;
  *(undefined8 *)(lStack_258 + 0x20) = 0x7473696c5f6e6f;
  lVar24 = lStack_258 + 0x30;
  uStack_3d3._3_1_ = (undefined1)lVar24;
  uStack_3cf = (undefined4)((ulong)lVar24 >> 8);
  uStack_3cb = (undefined1)((ulong)lVar24 >> 0x28);
  uStack_3ca = (undefined2)((ulong)lVar24 >> 0x30);
  plStack_2a8 = (long *)((ulong)plStack_2a8 & 0xffffffff00000000);
  func_0x0d6ad9e0(puVar27 + 0xc,CONCAT35((uint3)uStack_3d3,CONCAT41(uStack_3d7,bStack_3d8)),lVar24,
                  auStack_328);
  if (((ulong)plStack_2a8 & 0xffffffff) != 0xffffffff) {
    (**(code **)(&UNK_0f47df80 + ((ulong)plStack_2a8 & 0xffffffff) * 8))(&pbStack_418,auStack_328);
  }
  uVar3 = uStack_3d3;
  uVar2 = uStack_3d7;
  bVar15 = bStack_3d8;
  lVar24 = CONCAT35((uint3)uStack_3d3,CONCAT41(uStack_3d7,bStack_3d8));
  if (lVar24 != 0) {
    lVar30 = CONCAT26(uStack_3ca,CONCAT15(uStack_3cb,CONCAT41(uStack_3cf,uStack_3d3._3_1_)));
    if (lVar24 != lVar30) {
      do {
        if ((*(byte *)(lVar30 + -0x18) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar30 + -8),
                          *(ulong *)(lVar30 + -0x18) & 0xfffffffffffffffe);
        }
        lVar30 = lVar30 + -0x18;
      } while (lVar30 != lVar24);
      lVar24 = CONCAT35((uint3)uStack_3d3,CONCAT41(uStack_3d7,bStack_3d8));
    }
    uStack_3d3 = CONCAT13(bVar15,(uint3)uStack_3d3);
    uStack_3cf = uVar2;
    uStack_3cb = (undefined1)uVar3;
    uStack_3ca = (undefined2)((uint)uVar3 >> 8);
    func_0x0412a280(lVar24,CONCAT17(uStack_3c1,
                                    CONCAT16(uStack_3c2,
                                             CONCAT24(uStack_3c4,
                                                      CONCAT13(uStack_3c5,
                                                               CONCAT21(uStack_3c7,uStack_3c8))))) -
                           lVar24);
  }
  lVar24 = 0x20;
  func_0x0412a280(puVar29,0x20);
  plVar26 = (long *)&UNK_0f0c1bf8;
  auStack_328[0] = 0xf8;
  auStack_328._1_4_ = 0xf0c1b;
  uStack_323 = uStack_323 & 0xff000000;
  plVar34 = puVar27 + 0x26;
  plVar22 = (long *)puVar27[0x2a];
  puVar27[0x2a] = 0;
  ppbStack_308 = (byte **)auStack_328;
  if ((plVar22 == plVar34) || (lVar24 = 0x28, plVar22 != (long *)0x0)) {
    (**(code **)(*plVar22 + lVar24))();
    if (ppbStack_308 == (byte **)0x0) {
      puVar27[0x2a] = 0;
    }
    else {
      if (ppbStack_308 == (byte **)auStack_328) {
        plVar26 = (long *)*ppbStack_308;
        goto LAB_07227c53;
      }
      puVar27[0x2a] = ppbStack_308;
      ppbStack_308 = (byte **)0x0;
    }
  }
  else {
LAB_07227c53:
    puVar27[0x2a] = plVar34;
    (*(code *)plVar26[3])(ppbStack_308,plVar34);
    if (ppbStack_308 == (byte **)auStack_328) {
      lVar24 = 0x20;
    }
    else {
      lVar24 = 0x28;
      if (ppbStack_308 == (byte **)0x0) goto LAB_07227c90;
    }
    (**(code **)((long)*ppbStack_308 + lVar24))();
  }
LAB_07227c90:
  bStack_3d8 = (byte)puVar27;
  uStack_3d7 = (undefined4)((ulong)puVar27 >> 8);
  uStack_3d3._0_3_ = (uint3)((ulong)puVar27 >> 0x28);
  func_0x0d6afb30(&pbStack_228,&bStack_3d8);
  plVar22 = (long *)CONCAT35((uint3)uStack_3d3,CONCAT41(uStack_3d7,bStack_3d8));
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 8))();
  }
  lStack_288 = 0;
  plStack_280 = (long *)0x0;
  if (plVar21 == (long *)0x0) {
    lStack_278 = 0;
    lVar24 = *(long *)(lStack_290 + 0x10);
    if (lVar24 != *(long *)(lStack_290 + 8)) goto LAB_07227d95;
  }
  else {
    LOCK();
    plVar22 = plVar21 + 1;
    lVar24 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      func_0x0412c2d0(plVar21);
    }
    plVar22 = plStack_280;
    lStack_278 = 0;
    if (plStack_280 != (long *)0x0) {
      LOCK();
      plVar21 = plStack_280 + 1;
      lVar24 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_280 + 0x10))(plStack_280);
        func_0x0412c2d0(plVar22);
      }
    }
    lVar24 = *(long *)(lStack_290 + 0x10);
    if (lVar24 != *(long *)(lStack_290 + 8)) {
LAB_07227d95:
      do {
        pbStack_418 = (byte *)((ulong)pbStack_418 & 0xffffffffffffff00);
        bStack_3d8 = 0x24;
        uStack_3d7 = _DAT_01568f48;
        uStack_3d3 = _UNK_01568f4c;
        uStack_3cf = _UNK_01568f50;
        uStack_3cb = (undefined1)_UNK_01568f54;
        uStack_3ca = (undefined2)((uint)_UNK_01568f54 >> 8);
        uStack_3c8 = (undefined1)((uint)_UNK_01568f54 >> 0x18);
        uStack_3c7 = 0x7374;
        uStack_3c5 = 0;
        plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
        if (plVar22 == (long *)0x0) {
          func_0x0eec74c0(0x40,0);
        }
        lVar30 = lVar24 + -0x110;
        *plVar22 = (long)&UNK_0f0c1d08;
        plVar22[1] = lStack_298;
        plVar22[2] = lStack_160;
        plVar22[3] = (long)&pbStack_228;
        plVar22[4] = lVar30;
        plVar22[5] = (long)&uStack_198;
        plVar22[6] = (long)&uStack_138;
        plVar22[7] = (long)&pbStack_418;
        uVar33 = *(undefined8 *)(lVar24 + -0x28);
        pplVar31 = (long **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
        if (pplVar31 == (long **)0x0) {
          func_0x0eec74c0(0x40,0);
        }
        *pplVar31 = (long *)&UNK_0f0c1d08;
        uVar2 = *(undefined4 *)((long)plVar22 + 0xc);
        lVar32 = plVar22[2];
        uVar3 = *(undefined4 *)((long)plVar22 + 0x14);
        lVar8 = plVar22[3];
        uVar4 = *(undefined4 *)((long)plVar22 + 0x1c);
        lVar9 = plVar22[4];
        uVar5 = *(undefined4 *)((long)plVar22 + 0x24);
        lVar10 = plVar22[5];
        uVar6 = *(undefined4 *)((long)plVar22 + 0x2c);
        lVar11 = plVar22[6];
        uVar7 = *(undefined4 *)((long)plVar22 + 0x34);
        *(int *)(pplVar31 + 1) = (int)plVar22[1];
        *(undefined4 *)((long)pplVar31 + 0xc) = uVar2;
        *(int *)(pplVar31 + 2) = (int)lVar32;
        *(undefined4 *)((long)pplVar31 + 0x14) = uVar3;
        *(int *)(pplVar31 + 3) = (int)lVar8;
        *(undefined4 *)((long)pplVar31 + 0x1c) = uVar4;
        *(int *)(pplVar31 + 4) = (int)lVar9;
        *(undefined4 *)((long)pplVar31 + 0x24) = uVar5;
        *(int *)(pplVar31 + 5) = (int)lVar10;
        *(undefined4 *)((long)pplVar31 + 0x2c) = uVar6;
        *(int *)(pplVar31 + 6) = (int)lVar11;
        *(undefined4 *)((long)pplVar31 + 0x34) = uVar7;
        pplVar31[7] = (long *)plVar22[7];
        ppbStack_308 = (byte **)pplVar31;
        func_0x0d62a6f0(uVar33,&bStack_3d8,auStack_328,*(undefined4 *)(lVar24 + -8),0);
        if (ppbStack_308 == (byte **)auStack_328) {
          lVar32 = 0x20;
LAB_07227ee5:
          (**(code **)((long)*ppbStack_308 + lVar32))();
        }
        else {
          lVar32 = 0x28;
          if (ppbStack_308 != (byte **)0x0) goto LAB_07227ee5;
        }
        (**(code **)(*plVar22 + 0x28))(plVar22);
        if ((bStack_3d8 & 1) != 0) {
          func_0x0412a280(CONCAT17(uStack_3c1,
                                   CONCAT16(uStack_3c2,
                                            CONCAT24(uStack_3c4,
                                                     CONCAT13(uStack_3c5,
                                                              CONCAT21(uStack_3c7,uStack_3c8))))),
                          CONCAT35((uint3)uStack_3d3,CONCAT41(uStack_3d7,bStack_3d8)) &
                          0xfffffffffffffffe);
        }
        if ((char)pbStack_418 == '\x01') {
          uVar33 = **(undefined8 **)(**(long **)(lVar24 + -0x28) + 8);
          if ((DAT_0f5ea4a0 == '\0') && (iVar19 = func_0x04108328(&DAT_0f5ea4a0), iVar19 != 0)) {
            func_0x08b670e0(&DAT_0f5ea138);
            func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
            FUN_0410844d(&DAT_0f5ea4a0);
          }
          func_0x0d5f7010(auStack_328,uVar33,&DAT_0f5ea138);
          func_0x0646d5a0(&uStack_a0,auStack_328,auStack_328);
          if ((auStack_328[0] & 1) != 0) {
            func_0x0412a280(CONCAT17(uStack_311,CONCAT16(bStack_312,CONCAT51(uStack_317,uStack_318))
                                    ),
                            CONCAT35((undefined3)uStack_323,
                                     CONCAT41(auStack_328._1_4_,auStack_328[0])) &
                            0xfffffffffffffffe);
          }
        }
        lVar24 = lVar30;
      } while (lVar30 != *(long *)(lStack_290 + 8));
    }
  }
  if (0 < iStack_a8) {
    auStack_328[0] = 0x2a;
    auStack_328._1_4_ = _DAT_013e3024;
    uStack_323 = _UNK_013e3028;
    uStack_31f = _UNK_013e302c;
    uStack_31b = (undefined1)_UNK_013e3030;
    uStack_31a = 0x7473;
    uStack_318 = 0x50;
    uStack_317 = 0x7465736572;
    bStack_312 = 0;
    (**(code **)(*(long *)(*(long *)(lStack_298 + 0x90) + 0x40) + 0x10))
              (*(long *)(lStack_298 + 0x90) + 0x40,auStack_328,&uStack_138);
    if ((auStack_328[0] & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_311,CONCAT16(bStack_312,CONCAT51(uStack_317,uStack_318))),
                      CONCAT35((undefined3)uStack_323,CONCAT41(auStack_328._1_4_,auStack_328[0])) &
                      0xfffffffffffffffe);
    }
  }
  if (plStack_1a8 == alStack_1c8) {
    lVar24 = 0x20;
LAB_072280b3:
    (**(code **)(*plStack_1a8 + lVar24))();
  }
  else {
    lVar24 = 0x28;
    if (plStack_1a8 != (long *)0x0) goto LAB_072280b3;
  }
  if (plStack_1d8 == (long *)auStack_1f8) {
    lVar24 = 0x20;
  }
  else {
    lVar24 = 0x28;
    if (plStack_1d8 == (long *)0x0) goto LAB_072280ed;
  }
  (**(code **)(*plStack_1d8 + lVar24))();
LAB_072280ed:
  func_0x04908570(&pppbStack_210,ppbStack_208);
  pbVar17 = pbStack_228;
  pbVar20 = pbStack_220;
  if (pbStack_228 != (byte *)0x0) {
    for (; pbVar17 != pbVar20; pbVar20 = pbVar20 + -8) {
      plVar22 = *(long **)(pbVar20 + -8);
      pbVar20[-8] = 0;
      pbVar20[-7] = 0;
      pbVar20[-6] = 0;
      pbVar20[-5] = 0;
      pbVar20[-4] = 0;
      pbVar20[-3] = 0;
      pbVar20[-2] = 0;
      pbVar20[-1] = 0;
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 8))();
      }
    }
    pbStack_220 = pbVar17;
    func_0x0412a280(pbStack_228,(long)puStack_218 - (long)pbStack_228);
  }
  func_0x05f43b50(&uStack_138);
  if ((uStack_198 & 1) != 0) {
    func_0x0412a280(uStack_188,uStack_198 & 0xfffffffffffffffe);
  }
  pthread_mutex_unlock(lStack_260);
  return;
}



/* ---- referenced strings ----
 * 0x1329892  minecraft:aim_assist_preset
 * 0x132989d  im_assist_preset
 * 0x13298ae  CameraAimAssistCategory
 * 0x13e3024  CameraAimAssistPreset
 * 0x1568f10  aim_assist/categories
 * 0x1568f48  aim_assist/presets
 */
