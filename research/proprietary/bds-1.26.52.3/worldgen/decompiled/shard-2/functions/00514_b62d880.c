/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb72d880 (ELF vaddr 0xb62d880)
 * Label: caller-of-callee
 * Body:  [[0b72d880, 0b72e930] [0b72e940, 0b72eb00]]
 * Ghidra: FUN_0b72d880
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b72d880(long param_1,byte *param_2)

{
  byte *pbVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long **pplVar14;
  undefined8 *puVar15;
  long **unaff_R12;
  long **pplVar16;
  long lVar17;
  long *plVar18;
  bool bVar19;
  long *plStack_548;
  long **pplStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  long lStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_510;
  ulong uStack_508;
  long *plStack_4f8;
  long **pplStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  long lStack_4d8;
  undefined8 uStack_4d0;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined3 uStack_4ac;
  undefined8 uStack_4a8;
  undefined4 uStack_4a0;
  long *plStack_498;
  long *plStack_490;
  undefined1 auStack_488 [8];
  ulong uStack_480;
  long **pplStack_478;
  long *plStack_468;
  long **pplStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  long lStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_430;
  char cStack_428;
  long *plStack_418;
  long lStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  byte bStack_3c8;
  long *plStack_3b8;
  long **pplStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_380;
  char cStack_378;
  long *plStack_368;
  long **pplStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_330;
  char cStack_328;
  long *plStack_318;
  long **pplStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  char cStack_2d8;
  long **pplStack_2d0;
  long lStack_2c8;
  long **pplStack_2c0;
  undefined8 uStack_2b8;
  int iStack_2b0;
  undefined8 uStack_2a8;
  byte bStack_2a0;
  undefined8 auStack_298 [2];
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  byte bStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 uStack_260;
  long *plStack_258;
  ulong uStack_250;
  long *plStack_248;
  ulong uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  byte bStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  long **pplStack_1e0;
  ulong uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  long lStack_1a0;
  undefined4 uStack_198;
  undefined8 uStack_194;
  int iStack_18c;
  
  bStack_2a0 = *param_2;
  auStack_298[0] = 0;
  uStack_288 = *(undefined4 *)(param_2 + 0x18);
  uStack_284 = *(undefined4 *)(param_2 + 0x1c);
  uStack_280 = *(undefined4 *)(param_2 + 0x20);
  uStack_27c = *(undefined4 *)(param_2 + 0x24);
  uStack_278 = *(undefined4 *)(param_2 + 0x28);
  bStack_274 = param_2[0x2c];
  if (bStack_274 != 0) {
    pbVar1 = param_2 + 8;
    if (bStack_274 == 2) {
      (**(code **)(param_2 + 0x18))(5,pbVar1,auStack_298);
    }
    else {
      auStack_298[0] = *(undefined8 *)pbVar1;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
    }
  }
  uStack_270 = *(undefined4 *)(param_2 + 0x30);
  uStack_26c = *(undefined4 *)(param_2 + 0x34);
  uStack_268 = *(undefined4 *)(param_2 + 0x38);
  uStack_264 = *(undefined4 *)(param_2 + 0x3c);
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  uStack_260 = *(undefined8 *)(param_2 + 0x40);
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  if ((bStack_2a0 & 1) != 0) goto LAB_0b72e9a4;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_0b72e9a4;
  pplStack_2c0 = (long **)func_0x0412c300();
  if (pplStack_2c0 == (long **)0x0) goto LAB_0b72e9a4;
  lStack_2c8 = *(long *)(param_1 + 0x18);
  if (lStack_2c8 == 0) goto LAB_0b72e98e;
  unaff_R12 = *(long ***)(lStack_2c8 + 0x20);
  puVar15 = *(undefined8 **)(param_1 + 0x28);
  if (DAT_0f7b8fb8 == '\0') goto LAB_0b72ea6b;
  do {
    func_0x05d64270(&puStack_1d0,&UNK_012cbd66,7);
    lStack_410 = 0;
    plVar2 = (long *)(param_1 + 0x81);
    bVar19 = (*(byte *)(param_1 + 0x80) & 1) == 0;
    plStack_248 = *(long **)(param_1 + 0x90);
    if (bVar19) {
      plStack_248 = plVar2;
    }
    uStack_240 = (ulong)(*(byte *)(param_1 + 0x80) >> 1);
    if (!bVar19) {
      uStack_240 = *(ulong *)(param_1 + 0x88);
    }
    (**(code **)(_DAT_0f7b8f98 + 0x30))(&plStack_4f8,&DAT_0f7b8f98,&plStack_248,&lStack_410);
    cStack_2d8 = (char)uStack_4b8;
    if ((char)uStack_4b8 == '\0') {
      plStack_318 = plStack_4f8;
      pplStack_310 = pplStack_4f0;
      uStack_308._0_4_ = SUB84(uStack_4e8,0);
      uStack_308._4_4_ = uStack_4e8._4_4_;
      uStack_300._0_4_ = SUB84(uStack_4e0,0);
      uStack_300._4_4_ = uStack_4e0._4_4_;
      lStack_2f8 = lStack_4d8;
      uStack_2f0._0_4_ = (undefined4)uStack_4d0;
      uStack_2f0._4_4_ = uStack_4d0._4_4_;
      uStack_2e8._0_4_ = uStack_4c8;
      uStack_2e8._4_4_ = uStack_4c4;
      lStack_2e0 = CONCAT44(uStack_4bc,uStack_4c0);
      func_0x0b72ee00(&plStack_318);
      lStack_510 = lStack_2e0;
      uVar10 = uStack_2e8._4_4_;
      uVar9 = (undefined4)uStack_2e8;
      uVar8 = uStack_2f0._4_4_;
      uVar7 = (undefined4)uStack_2f0;
      lStack_528 = lStack_2f8;
      uVar6 = uStack_300._4_4_;
      uVar5 = (undefined4)uStack_300;
      uVar4 = uStack_308._4_4_;
      uVar3 = (undefined4)uStack_308;
      plStack_4f8 = plStack_318;
      pplStack_4f0 = pplStack_310;
      uStack_308 = (long **)0x0;
      uStack_300 = (long **)0x0;
      lStack_2f8 = 0;
      uStack_2f0 = 0;
      uStack_2e8 = 0;
      lStack_2e0 = 0;
      uStack_4e8 = (long **)0x0;
      uStack_4e0 = (long **)0x0;
      lStack_4d8 = 0;
      uStack_4d0 = 0;
      uStack_4c8 = 0;
      uStack_4c4 = 0;
      uStack_4c0 = 0;
      uStack_4bc = 0;
      uStack_508 = uStack_508 & 0xffffffffffffff00;
      plStack_548 = plStack_318;
      pplStack_540 = pplStack_310;
      uStack_538 = (long **)CONCAT44(uVar4,uVar3);
      uStack_530 = (long **)CONCAT44(uVar6,uVar5);
      uStack_520 = CONCAT44(uVar8,uVar7);
      uStack_518 = CONCAT44(uVar10,uVar9);
      func_0x048e6d60(&plStack_4f8);
    }
    else if (lStack_410 == 0) {
      uStack_518 = 0;
      lStack_510 = 0;
      lStack_528 = 0;
      uStack_520 = 0;
      uStack_538 = (long **)0x0;
      uStack_530 = (long **)0x0;
      plStack_548 = (long *)0x0;
      pplStack_540 = (long **)0x0;
      uStack_508 = 1;
    }
    else {
      plStack_498 = (long *)0x0;
      plStack_490 = (long *)0x0;
      plVar18 = *(long **)(param_1 + 0x90);
      pplVar16 = *(long ***)(param_1 + 0x88);
      if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
        plVar18 = plVar2;
        pplVar16 = (long **)(ulong)(*(byte *)(param_1 + 0x80) >> 1);
      }
      pplStack_2d0 = unaff_R12;
      if ((DAT_0f7b8fb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f7b8fb8), iVar11 != 0)) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
      }
      plStack_468 = plVar18;
      pplStack_460 = pplVar16;
      (**(code **)(_DAT_0f7b8f98 + 0x10))
                (&plStack_4f8,&DAT_0f7b8f98,&plStack_468,&plStack_498,0x121,0);
      cStack_328 = (char)uStack_4b8;
      if ((char)uStack_4b8 == '\0') {
        plStack_368 = plStack_4f8;
        pplStack_360 = pplStack_4f0;
        uStack_358._0_4_ = SUB84(uStack_4e8,0);
        uStack_358._4_4_ = uStack_4e8._4_4_;
        uStack_350._0_4_ = SUB84(uStack_4e0,0);
        uStack_350._4_4_ = uStack_4e0._4_4_;
        lStack_348 = lStack_4d8;
        uStack_340._0_4_ = (undefined4)uStack_4d0;
        uStack_340._4_4_ = uStack_4d0._4_4_;
        uStack_338._0_4_ = uStack_4c8;
        uStack_338._4_4_ = uStack_4c4;
        lStack_330 = CONCAT44(uStack_4bc,uStack_4c0);
        func_0x0b72eec0(&plStack_368);
        lStack_510 = lStack_330;
        uVar10 = uStack_338._4_4_;
        uVar9 = (undefined4)uStack_338;
        uVar8 = uStack_340._4_4_;
        uVar7 = (undefined4)uStack_340;
        lStack_528 = lStack_348;
        uVar6 = uStack_350._4_4_;
        uVar5 = (undefined4)uStack_350;
        uVar4 = uStack_358._4_4_;
        uVar3 = (undefined4)uStack_358;
        plStack_468 = plStack_368;
        pplStack_460 = pplStack_360;
        uStack_358 = (long **)0x0;
        uStack_350 = (long **)0x0;
        lStack_348 = 0;
        uStack_340 = 0;
        uStack_338 = 0;
        lStack_330 = 0;
        uStack_458 = (long **)0x0;
        uStack_450 = (long **)0x0;
        lStack_448 = 0;
        uStack_440 = 0;
        uStack_438 = 0;
        lStack_430 = 0;
        uStack_508 = uStack_508 & 0xffffffffffffff00;
        plStack_548 = plStack_368;
        pplStack_540 = pplStack_360;
        uStack_538 = (long **)CONCAT44(uVar4,uVar3);
        uStack_530 = (long **)CONCAT44(uVar6,uVar5);
        uStack_520 = CONCAT44(uVar8,uVar7);
        uStack_518 = CONCAT44(uVar10,uVar9);
        func_0x048e6d60(&plStack_468);
      }
      else {
        auStack_488 = (undefined1  [8])0x0;
        uStack_480 = 0;
        pplStack_478 = (long **)0x0;
        if (lStack_410 == 0) {
          auStack_488[0] = 0;
        }
        else {
          func_0x0412ffc0(auStack_488,lStack_410,0);
        }
        uStack_2a8 = 0;
        bVar19 = (auStack_488[0] & 1) == 0;
        pplVar16 = (long **)(auStack_488 + 1);
        pplVar14 = pplStack_478;
        if (bVar19) {
          pplVar14 = pplVar16;
        }
        uVar13 = (ulong)(auStack_488[0] >> 1);
        if (!bVar19) {
          uVar13 = uStack_480;
        }
        func_0x0ee768f0(&plStack_4f8,plStack_498,pplVar14,uVar13,&uStack_2a8);
        cStack_428 = (char)uStack_4b8;
        if ((char)uStack_4b8 == '\0') {
          plStack_468 = plStack_4f8;
          pplStack_460 = pplStack_4f0;
          uStack_458._0_4_ = SUB84(uStack_4e8,0);
          uStack_458._4_4_ = uStack_4e8._4_4_;
          uStack_450._0_4_ = SUB84(uStack_4e0,0);
          uStack_450._4_4_ = uStack_4e0._4_4_;
          lStack_448 = lStack_4d8;
          uStack_440._0_4_ = (undefined4)uStack_4d0;
          uStack_440._4_4_ = uStack_4d0._4_4_;
          uStack_438._0_4_ = uStack_4c8;
          uStack_438._4_4_ = uStack_4c4;
          lStack_430 = CONCAT44(uStack_4bc,uStack_4c0);
          func_0x0b72f020(&plStack_468);
          lStack_510 = lStack_430;
          uVar10 = uStack_438._4_4_;
          uVar9 = (undefined4)uStack_438;
          uVar8 = uStack_440._4_4_;
          uVar7 = (undefined4)uStack_440;
          lStack_528 = lStack_448;
          uVar6 = uStack_450._4_4_;
          uVar5 = (undefined4)uStack_450;
          uVar4 = uStack_458._4_4_;
          uVar3 = (undefined4)uStack_458;
          plStack_3b8 = plStack_468;
          pplStack_3b0 = pplStack_460;
          uStack_458 = (long **)0x0;
          uStack_450 = (long **)0x0;
          lStack_448 = 0;
          uStack_440 = 0;
          uStack_438 = 0;
          lStack_430 = 0;
          uStack_3a8 = (long **)0x0;
          uStack_3a0 = (long **)0x0;
          lStack_398 = 0;
          uStack_390 = 0;
          uStack_388 = 0;
          lStack_380 = 0;
          uStack_508 = uStack_508 & 0xffffffffffffff00;
          plStack_548 = plStack_468;
          pplStack_540 = pplStack_460;
          uStack_538 = (long **)CONCAT44(uVar4,uVar3);
          uStack_530 = (long **)CONCAT44(uVar6,uVar5);
          uStack_520 = CONCAT44(uVar8,uVar7);
          uStack_518 = CONCAT44(uVar10,uVar9);
          func_0x048e6d60(&plStack_3b8);
        }
        else {
          func_0x0ee56810(&plStack_4f8,&plStack_498);
          cStack_378 = (char)uStack_4b8;
          if ((char)uStack_4b8 == '\0') {
            plStack_3b8 = plStack_4f8;
            pplStack_3b0 = pplStack_4f0;
            uStack_3a8._0_4_ = SUB84(uStack_4e8,0);
            uStack_3a8._4_4_ = uStack_4e8._4_4_;
            uStack_3a0._0_4_ = SUB84(uStack_4e0,0);
            uStack_3a0._4_4_ = uStack_4e0._4_4_;
            lStack_398 = lStack_4d8;
            uStack_390._0_4_ = (undefined4)uStack_4d0;
            uStack_390._4_4_ = uStack_4d0._4_4_;
            uStack_388._0_4_ = uStack_4c8;
            uStack_388._4_4_ = uStack_4c4;
            lStack_380 = CONCAT44(uStack_4bc,uStack_4c0);
            func_0x0b72f180(&plStack_3b8);
            lStack_510 = lStack_380;
            uVar10 = uStack_388._4_4_;
            uVar9 = (undefined4)uStack_388;
            uVar8 = uStack_390._4_4_;
            uVar7 = (undefined4)uStack_390;
            lStack_528 = lStack_398;
            uVar6 = uStack_3a0._4_4_;
            uVar5 = (undefined4)uStack_3a0;
            uVar4 = uStack_3a8._4_4_;
            uVar3 = (undefined4)uStack_3a8;
            uStack_408 = plStack_3b8;
            uStack_400 = pplStack_3b0;
            uStack_3a8 = (long **)0x0;
            uStack_3a0 = (long **)0x0;
            lStack_398 = 0;
            uStack_390 = 0;
            uStack_388 = 0;
            lStack_380 = 0;
            uStack_3f8 = (long **)0x0;
            uStack_3f0 = (long **)0x0;
            lStack_3e8 = 0;
            uStack_3e0 = 0;
            uStack_3d8 = 0;
            lStack_3d0 = 0;
            uStack_508 = uStack_508 & 0xffffffffffffff00;
            plStack_548 = plStack_3b8;
            pplStack_540 = pplStack_3b0;
            uStack_538 = (long **)CONCAT44(uVar4,uVar3);
            uStack_530 = (long **)CONCAT44(uVar6,uVar5);
            uStack_520 = CONCAT44(uVar8,uVar7);
            uStack_518 = CONCAT44(uVar10,uVar9);
            func_0x048e6d60(&uStack_408);
          }
          else {
            uStack_1d8 = (ulong)auStack_488 >> 1 & 0x7f;
            if (((ulong)auStack_488 & 1) != 0) {
              uStack_1d8 = uStack_480;
              pplVar16 = pplStack_478;
            }
            puStack_1f0 = &UNK_0ef9fd98;
            uStack_1e8 = 0;
            pplStack_1e0 = pplVar16;
            func_0x0d6c71b0(&plStack_4f8,&puStack_1f0);
            plStack_418 = plStack_4f8;
            func_0x05d64840(&puStack_1d0);
            uStack_2b8 = CONCAT44((int)(float)(int)((ulong)uStack_194 >> 0x20),
                                  (int)(float)(int)uStack_194);
            iStack_2b0 = (int)(float)iStack_18c;
            uStack_4e8 = _DAT_01da19f8;
            plStack_4f8 = _DAT_01da19e8;
            pplStack_4f0 = _UNK_01da19f0;
            uStack_4e0 = (long **)CONCAT26((short)((ulong)uStack_4e0 >> 0x30),0x10000000000);
            lStack_4d8 = -1;
            uStack_4ac = 0;
            uStack_4a0 = 0;
            uStack_4a8 = _DAT_014e72a0;
            uStack_4d0 = lStack_1a0;
            uStack_4c8 = uStack_198;
            uStack_4c4 = 0;
            uStack_4c0 = 0;
            uStack_4bc = 0;
            uStack_4b8 = 0;
            uStack_4b4 = 0;
            uStack_4b0 = 0;
            func_0x0d35b450(&puStack_1d0,pplStack_2d0,puVar15,&uStack_2b8,&plStack_4f8,0,1);
            bVar19 = (*(byte *)(param_1 + 0x80) & 1) != 0;
            plStack_258 = plVar2;
            if (bVar19) {
              plStack_258 = *(long **)(param_1 + 0x90);
            }
            uStack_250 = (ulong)(*(byte *)(param_1 + 0x80) >> 1);
            if (bVar19) {
              uStack_250 = *(ulong *)(param_1 + 0x88);
            }
            (**(code **)(_DAT_0f7b8f98 + 0x20))(&uStack_238,&DAT_0f7b8f98,&plStack_258);
            bStack_3c8 = bStack_1f8;
            if (bStack_1f8 == 0) {
              uStack_408 = (long *)CONCAT44(uStack_234,uStack_238);
              uStack_400 = (long **)CONCAT44(uStack_22c,uStack_230);
              uStack_3f8._0_4_ = (undefined4)uStack_228;
              uStack_3f8._4_4_ = uStack_228._4_4_;
              uStack_3f0._0_4_ = (undefined4)uStack_220;
              uStack_3f0._4_4_ = uStack_220._4_4_;
              lStack_3e8 = lStack_218;
              uStack_3e0._0_4_ = (undefined4)uStack_210;
              uStack_3e0._4_4_ = uStack_210._4_4_;
              uStack_3d8._0_4_ = (undefined4)uStack_208;
              uStack_3d8._4_4_ = uStack_208._4_4_;
              lStack_3d0 = lStack_200;
              func_0x0b72f240(&uStack_408);
              lStack_510 = lStack_3d0;
              uVar10 = uStack_3d8._4_4_;
              uVar9 = (undefined4)uStack_3d8;
              uVar8 = uStack_3e0._4_4_;
              uVar7 = (undefined4)uStack_3e0;
              lStack_528 = lStack_3e8;
              uVar6 = uStack_3f0._4_4_;
              uVar5 = (undefined4)uStack_3f0;
              uVar4 = uStack_3f8._4_4_;
              uVar3 = (undefined4)uStack_3f8;
              uStack_238 = (undefined4)uStack_408;
              uStack_234 = uStack_408._4_4_;
              uStack_230 = (undefined4)uStack_400;
              uStack_22c = uStack_400._4_4_;
              uStack_3f8 = (long **)0x0;
              uStack_3f0 = (long **)0x0;
              lStack_3e8 = 0;
              uStack_3e0 = 0;
              uStack_3d8 = 0;
              lStack_3d0 = 0;
              uStack_228 = 0;
              uStack_220 = 0;
              lStack_218 = 0;
              uStack_210 = 0;
              uStack_208 = 0;
              lStack_200 = 0;
              uStack_508 = uStack_508 & 0xffffffffffffff00;
              plStack_548 = uStack_408;
              pplStack_540 = uStack_400;
              uStack_538 = (long **)CONCAT44(uVar4,uVar3);
              uStack_530 = (long **)CONCAT44(uVar6,uVar5);
              uStack_520 = CONCAT44(uVar8,uVar7);
              uStack_518 = CONCAT44(uVar10,uVar9);
              func_0x048e6d60(&uStack_238);
            }
            else {
              plStack_548 = (long *)0x0;
              pplStack_540 = (long **)0x0;
              uStack_538 = (long **)0x0;
              uStack_530 = (long **)0x0;
              lStack_528 = 0;
              uStack_520 = 0;
              uStack_518 = 0;
              lStack_510 = 0;
              uStack_508 = 1;
            }
            lVar12 = uStack_3e0;
            if ((bStack_3c8 & 1) == 0) {
              lVar17 = uStack_3d8;
              if (uStack_3e0 != 0) {
                while (lVar12 != lVar17) {
                  func_0x048b3e80(lVar17 + -0x40);
                  lVar17 = lVar17 + -0x40;
                }
                uStack_3d8 = lVar12;
                func_0x0412a280(uStack_3e0,lStack_3d0 - uStack_3e0);
              }
              pplVar16 = uStack_3f8;
              pplVar14 = uStack_3f0;
              if (uStack_3f8 != (long **)0x0) {
                for (; pplVar16 != pplVar14; pplVar14 = pplVar14 + -10) {
                  if ((*(char *)(pplVar14 + -1) == '\x01') && (((ulong)pplVar14[-6] & 1) != 0)) {
                    func_0x0412a280(pplVar14[-4],(ulong)pplVar14[-6] & 0xfffffffffffffffe);
                  }
                }
                uStack_3f0 = pplVar16;
                func_0x0412a280(uStack_3f8,lStack_3e8 - (long)uStack_3f8);
              }
            }
            if (((ulong)plStack_4f8 & 1) != 0) {
              func_0x0412a280(uStack_4e8,(ulong)plStack_4f8 & 0xfffffffffffffffe);
            }
            (**(code **)(*plStack_418 + 8))();
          }
          lVar12 = uStack_390;
          if (cStack_378 == '\0') {
            lVar17 = uStack_388;
            if (uStack_390 != 0) {
              while (lVar12 != lVar17) {
                func_0x048b3e80(lVar17 + -0x40);
                lVar17 = lVar17 + -0x40;
              }
              uStack_388 = lVar12;
              func_0x0412a280(uStack_390,lStack_380 - uStack_390);
            }
            pplVar16 = uStack_3a8;
            pplVar14 = uStack_3a0;
            if (uStack_3a8 != (long **)0x0) {
              for (; pplVar16 != pplVar14; pplVar14 = pplVar14 + -10) {
                if ((*(char *)(pplVar14 + -1) == '\x01') && (((ulong)pplVar14[-6] & 1) != 0)) {
                  func_0x0412a280(pplVar14[-4],(ulong)pplVar14[-6] & 0xfffffffffffffffe);
                }
              }
              uStack_3a0 = pplVar16;
              func_0x0412a280(uStack_3a8,lStack_398 - (long)uStack_3a8);
            }
          }
        }
        lVar12 = uStack_440;
        if (cStack_428 == '\0') {
          lVar17 = uStack_438;
          if (uStack_440 != 0) {
            while (lVar12 != lVar17) {
              func_0x048b3e80(lVar17 + -0x40);
              lVar17 = lVar17 + -0x40;
            }
            uStack_438 = lVar12;
            func_0x0412a280(uStack_440,lStack_430 - uStack_440);
          }
          pplVar16 = uStack_458;
          pplVar14 = uStack_450;
          if (uStack_458 != (long **)0x0) {
            for (; pplVar16 != pplVar14; pplVar14 = pplVar14 + -10) {
              if ((*(char *)(pplVar14 + -1) == '\x01') && (((ulong)pplVar14[-6] & 1) != 0)) {
                func_0x0412a280(pplVar14[-4],(ulong)pplVar14[-6] & 0xfffffffffffffffe);
              }
            }
            uStack_450 = pplVar16;
            func_0x0412a280(uStack_458,lStack_448 - (long)uStack_458);
          }
        }
        if (((ulong)auStack_488 & 1) != 0) {
          func_0x0412a280(pplStack_478,(ulong)auStack_488 & 0xfffffffffffffffe);
        }
      }
      lVar12 = uStack_340;
      unaff_R12 = pplVar16;
      if (cStack_328 == '\0') {
        lVar17 = uStack_338;
        if (uStack_340 != 0) {
          while (lVar12 != lVar17) {
            func_0x048b3e80(lVar17 + -0x40);
            lVar17 = lVar17 + -0x40;
          }
          uStack_338 = lVar12;
          func_0x0412a280(uStack_340,lStack_330 - uStack_340);
        }
        unaff_R12 = uStack_358;
        pplVar16 = uStack_350;
        if (uStack_358 != (long **)0x0) {
          for (; unaff_R12 != pplVar16; pplVar16 = pplVar16 + -10) {
            if ((*(char *)(pplVar16 + -1) == '\x01') && (((ulong)pplVar16[-6] & 1) != 0)) {
              func_0x0412a280(pplVar16[-4],(ulong)pplVar16[-6] & 0xfffffffffffffffe);
            }
          }
          uStack_350 = unaff_R12;
          func_0x0412a280(uStack_358,lStack_348 - (long)uStack_358);
        }
      }
      if (plStack_498 != (long *)0x0) {
        func_0x0ee56810(&plStack_4f8,&plStack_498);
        lVar12 = uStack_4d0;
        if ((char)uStack_4b8 == '\0') {
          if (uStack_4d0 != 0) {
            lVar17 = CONCAT44(uStack_4c4,uStack_4c8);
            while (lVar12 != lVar17) {
              lVar17 = lVar17 + -0x40;
              func_0x048b3e80(lVar17);
            }
            uStack_4c8 = (undefined4)lVar12;
            uStack_4c4 = (undefined4)((ulong)lVar12 >> 0x20);
            func_0x0412a280(uStack_4d0,CONCAT44(uStack_4bc,uStack_4c0) - uStack_4d0);
          }
          unaff_R12 = uStack_4e8;
          pplVar16 = uStack_4e0;
          if (uStack_4e8 != (long **)0x0) {
            for (; unaff_R12 != pplVar16; pplVar16 = pplVar16 + -10) {
              if ((*(char *)(pplVar16 + -1) == '\x01') && (((ulong)pplVar16[-6] & 1) != 0)) {
                func_0x0412a280(pplVar16[-4],(ulong)pplVar16[-6] & 0xfffffffffffffffe);
              }
            }
            uStack_4e0 = unaff_R12;
            func_0x0412a280(uStack_4e8,lStack_4d8 - (long)uStack_4e8);
          }
        }
      }
      plVar2 = plStack_490;
      plStack_490 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = plStack_498;
      plStack_498 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    lVar12 = uStack_2f0;
    if (cStack_2d8 == '\0') {
      lVar17 = uStack_2e8;
      if (uStack_2f0 != 0) {
        while (lVar12 != lVar17) {
          func_0x048b3e80(lVar17 + -0x40);
          lVar17 = lVar17 + -0x40;
        }
        uStack_2e8 = lVar12;
        func_0x0412a280(uStack_2f0,lStack_2e0 - uStack_2f0);
      }
      unaff_R12 = uStack_308;
      pplVar16 = uStack_300;
      if (uStack_308 != (long **)0x0) {
        for (; unaff_R12 != pplVar16; pplVar16 = pplVar16 + -10) {
          if ((*(char *)(pplVar16 + -1) == '\x01') && (((ulong)pplVar16[-6] & 1) != 0)) {
            func_0x0412a280(pplVar16[-4],(ulong)pplVar16[-6] & 0xfffffffffffffffe);
          }
        }
        uStack_300 = unaff_R12;
        func_0x0412a280(uStack_308,lStack_2f8 - (long)uStack_308);
      }
    }
    func_0x05d645d0(&puStack_1d0);
    puStack_1d0 = (undefined *)0x91c2da14ad92ec68;
    puStack_1c8 = &UNK_0140f690;
    uStack_1c0 = 1;
    uStack_1b8 = 0x673;
    if ((byte)uStack_508 == 0) {
      unaff_R12 = &plStack_4f8;
      func_0x0eedea30(unaff_R12);
      func_0x0eedeb80(0x100000008,0x2d,&plStack_548,unaff_R12,&puStack_1d0);
      if (((ulong)plStack_4f8 & 1) != 0) {
        func_0x0412a280(uStack_4e8,(ulong)plStack_4f8 & 0xfffffffffffffffe);
      }
    }
    lVar12 = uStack_520;
    if (((byte)uStack_508 & 1) == 0) {
      lVar17 = uStack_518;
      if (uStack_520 != 0) {
        while (lVar12 != lVar17) {
          func_0x048b3e80(lVar17 + -0x40);
          lVar17 = lVar17 + -0x40;
        }
        uStack_518 = lVar12;
        func_0x0412a280(uStack_520,lStack_510 - uStack_520);
      }
      unaff_R12 = uStack_538;
      pplVar16 = uStack_530;
      if (uStack_538 != (long **)0x0) {
        for (; unaff_R12 != pplVar16; pplVar16 = pplVar16 + -10) {
          if ((*(char *)(pplVar16 + -1) == '\x01') && (((ulong)pplVar16[-6] & 1) != 0)) {
            func_0x0412a280(pplVar16[-4],(ulong)pplVar16[-6] & 0xfffffffffffffffe);
          }
        }
        uStack_530 = unaff_R12;
        func_0x0412a280(uStack_538,lStack_528 - (long)uStack_538);
      }
    }
    if (pplStack_2c0 == (long **)0x0) {
LAB_0b72e9a4:
      plVar2 = *(long **)(param_1 + 0x30);
      lVar12 = *plVar2;
    }
    else {
LAB_0b72e98e:
      pplVar14 = pplStack_2c0;
      LOCK();
      pplVar16 = pplStack_2c0 + 1;
      plVar2 = *pplVar16;
      *pplVar16 = (long *)((long)*pplVar16 + -1);
      UNLOCK();
      if (plVar2 != (long *)0x0) goto LAB_0b72e9a4;
      (*(code *)(*pplStack_2c0)[2])(pplStack_2c0);
      FUN_0412c2d0(pplVar14);
      plVar2 = *(long **)(param_1 + 0x30);
      lVar12 = *plVar2;
      unaff_R12 = pplVar14;
    }
    if ((lVar12 != 0) && (*plVar2 = lVar12 + -1, lVar12 + -1 != 0)) goto LAB_0b72ea1a;
    puVar15 = auStack_298;
    lVar12 = *(long *)(param_1 + 0x40);
    if (*(char *)(lVar12 + 8) != '\0') goto LAB_0b72ea1a;
    plVar2 = *(long **)(param_1 + 0x70);
    if (plVar2 != (long *)0x0) {
      uVar13 = (ulong)puStack_1d0 >> 8;
      puStack_1d0 = (undefined *)CONCAT71((int7)uVar13,1);
      (**(code **)(*plVar2 + 0x30))(plVar2,&puStack_1d0);
      lVar12 = *(long *)(param_1 + 0x40);
    }
    *(undefined1 *)(lVar12 + 8) = 1;
    puStack_1d0 = &UNK_012664f6;
    puStack_1c8 = (undefined *)0x18;
    plVar2 = *(long **)(lVar12 + 0x30);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&puStack_1d0);
LAB_0b72ea1a:
      if ((code *)CONCAT44(uStack_27c,uStack_280) != (code *)0x0) {
        (*(code *)CONCAT44(uStack_27c,uStack_280))(auStack_298);
      }
      return;
    }
    func_0x04891200();
LAB_0b72ea6b:
    iVar11 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar11 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
  } while( true );
}


