/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x50d0e40 (ELF vaddr 0x4fd0e40)
 * Label: caller-of-seed
 * Body:  [[050d0e40, 050d1e94] [050d1ea0, 050d21b3] [050d21c0, 050d23a5]]
 * Ghidra: FUN_050d0e40
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_050d0e40(undefined8 *param_1,long *****param_2,undefined *param_3,undefined **param_4,
                 long ****param_5)

{
  long ***ppplVar1;
  long ****pppplVar2;
  undefined **ppuVar3;
  long **pplVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char cVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long ****pppplVar16;
  undefined **ppuVar17;
  long lVar18;
  long ***ppplVar19;
  long *plVar20;
  long lVar21;
  long *****ppppplVar22;
  bool bVar23;
  long ****pppplStack_568;
  long ****pppplStack_560;
  long ****pppplStack_558;
  long lStack_550;
  long ****pppplStack_548;
  long ****pppplStack_540;
  long ****pppplStack_538;
  undefined8 uStack_528;
  undefined8 uStack_520;
  long ***ppplStack_518;
  long ***ppplStack_510;
  undefined *puStack_508;
  char *pcStack_500;
  long *plStack_4f8;
  undefined8 uStack_4f0;
  char *pcStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  char *pcStack_4c8;
  long *plStack_4c0;
  undefined8 uStack_4b8;
  char *pcStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined1 *puStack_488;
  undefined1 uStack_480;
  long ***ppplStack_478;
  long ***ppplStack_470;
  long ***ppplStack_468;
  long ****pppplStack_460;
  char *pcStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 auStack_430 [8];
  ulong uStack_428;
  ulong uStack_420;
  long ****pppplStack_410;
  undefined **ppuStack_400;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined4 uStack_3e8;
  uint uStack_3c8;
  undefined *puStack_3c0;
  undefined **ppuStack_3b8;
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  uint uStack_388;
  long lStack_380;
  undefined ***pppuStack_378;
  undefined *puStack_370;
  undefined8 uStack_368;
  undefined4 uStack_360;
  uint uStack_340;
  char *pcStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined1 auStack_310 [8];
  ulong uStack_308;
  ulong uStack_300;
  long ****pppplStack_2f0;
  undefined *puStack_2e8;
  undefined **ppuStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined **ppuStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  long ***ppplStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppppplVar22 = &pppplStack_568;
  pcStack_458 = (char *)*param_1;
  plStack_450 = (long *)param_1[1];
  if (plStack_450 != (long *)0x0) {
    LOCK();
    plStack_450[1] = plStack_450[1] + 1;
    UNLOCK();
  }
  uStack_448 = param_1[2];
  if (pcStack_458 == (char *)0x0) goto LAB_050d237f;
  if (*pcStack_458 == '\0') goto LAB_050d237f;
  uStack_440 = param_3 + 0x110;
  uStack_438 = (undefined1 *)param_2;
  func_0x0d88e390(auStack_430,param_4);
  pcStack_500 = (char *)*param_1;
  plStack_4f8 = (long *)param_1[1];
  if (plStack_4f8 != (long *)0x0) {
    LOCK();
    plStack_4f8[1] = plStack_4f8[1] + 1;
    UNLOCK();
  }
  uStack_4f0 = param_1[2];
  pppplStack_410 = param_5;
  if (pcStack_500 == (char *)0x0) goto LAB_050d237f;
  if (*pcStack_500 == '\0') goto LAB_050d237f;
  func_0x0d33d570(param_3,&pcStack_500,param_2);
  plVar20 = plStack_4f8;
  pcStack_500 = (char *)0x0;
  plStack_4f8 = (long *)0x0;
  if (plVar20 == (long *)0x0) {
    uStack_4f0 = 0;
  }
  else {
    LOCK();
    plVar6 = plVar20 + 1;
    lVar18 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
    plVar20 = plStack_4f8;
    uStack_4f0 = 0;
    if (plStack_4f8 != (long *)0x0) {
      LOCK();
      plVar6 = plStack_4f8 + 1;
      lVar18 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_4f8 + 0x10))(plStack_4f8);
        func_0x0412c2d0(plVar20);
      }
    }
  }
  pcStack_338 = pcStack_458;
  plStack_330 = plStack_450;
  if (plStack_450 != (long *)0x0) {
    LOCK();
    plStack_450[1] = plStack_450[1] + 1;
    UNLOCK();
  }
  uStack_328 = uStack_448;
  uStack_320 = (undefined4)uStack_440;
  uStack_31c = uStack_440._4_4_;
  uStack_318 = (undefined4)uStack_438;
  uStack_314 = uStack_438._4_4_;
  func_0x0d88e390(auStack_310,auStack_430);
  pppplStack_2f0 = pppplStack_410;
  pppuStack_378 = (undefined ***)0x0;
  puStack_370 = (undefined *)0x0;
  puStack_2e8 = &UNK_013df34a;
  ppuStack_2e0 = (undefined **)0x5;
  puStack_3c0 = &UNK_013df34a;
  ppuStack_3b8 = (undefined **)0x5;
  uStack_528 = (long ***)((ulong)uStack_528 & 0xffffffffffffff00);
  param_5 = (long ****)&uStack_528;
  FUN_0d33dd60(&ppuStack_400,&pcStack_338,&puStack_2e8,&puStack_3c0,param_5,&pppuStack_378);
  func_0x0d3301c0(param_3,&ppuStack_400);
  ppuVar17 = ppuStack_400;
  ppuStack_400 = (undefined **)0x0;
  if (ppuVar17 != (undefined **)0x0) {
    if (((ulong)ppuVar17[6] & 1) != 0) {
      func_0x0412a280(ppuVar17[8],(ulong)ppuVar17[6] & 0xfffffffffffffffe);
    }
    puVar5 = ppuVar17[3];
    if (puVar5 != (undefined *)0x0) {
      ppuVar17[4] = puVar5;
      func_0x0412a280(puVar5,(long)ppuVar17[5] - (long)puVar5);
    }
    if (((ulong)*ppuVar17 & 1) != 0) {
      func_0x0412a280(ppuVar17[2],(ulong)*ppuVar17 & 0xfffffffffffffffe);
    }
    func_0x0412a280(ppuVar17,0x48);
  }
  if ((uStack_300 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_300 & 0xff00ffffffffffff) - 8);
  }
  uStack_300 = 0;
  if ((uStack_308 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_308 & 0xff00ffffffffffff) - 8);
  }
  plVar20 = plStack_330;
  uStack_308 = 0;
  pcStack_338 = (char *)0x0;
  plStack_330 = (long *)0x0;
  if (plVar20 == (long *)0x0) {
    uStack_328 = 0;
  }
  else {
    LOCK();
    plVar6 = plVar20 + 1;
    lVar18 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
    plVar20 = plStack_330;
    uStack_328 = 0;
    if (plStack_330 != (long *)0x0) {
      LOCK();
      plVar6 = plStack_330 + 1;
      lVar18 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_330 + 0x10))(plStack_330);
        func_0x0412c2d0(plVar20);
      }
    }
  }
  pcStack_4a8 = (char *)*param_1;
  plVar20 = (long *)param_1[1];
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar20[1] = plVar20[1] + 1;
    UNLOCK();
  }
  uStack_498 = param_1[2];
  plStack_4a0 = plVar20;
  if (pcStack_4a8 == (char *)0x0) goto LAB_050d237f;
  if (*pcStack_4a8 == '\0') goto LAB_050d237f;
  func_0x050d2920(&pcStack_4a8,param_2,param_3);
  pcStack_4a8 = (char *)0x0;
  plStack_4a0 = (long *)0x0;
  if (plVar20 == (long *)0x0) {
    uStack_498 = 0;
  }
  else {
    LOCK();
    plVar6 = plVar20 + 1;
    lVar18 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
    plVar20 = plStack_4a0;
    uStack_498 = 0;
    if (plStack_4a0 != (long *)0x0) {
      LOCK();
      plVar6 = plStack_4a0 + 1;
      lVar18 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_4a0 + 0x10))(plStack_4a0);
        func_0x0412c2d0(plVar20);
      }
    }
  }
  if (((DAT_0f5a27d8 == '\0') && (*(char *)(param_4 + 3) == '\0')) &&
     (((DAT_0f5a27c6 & 1) == 0 ||
      ((*(char *)((long)param_4 + 7) != '\0' ||
       (cVar10 = FUN_04fa7a10(param_4,0xf5a27c0), cVar10 == '\0')))))) {
    pcStack_4c8 = (char *)*param_1;
    plVar20 = (long *)param_1[1];
    if (plVar20 != (long *)0x0) {
      LOCK();
      plVar20[1] = plVar20[1] + 1;
      UNLOCK();
    }
    uStack_4b8 = param_1[2];
    plStack_4c0 = plVar20;
    if (pcStack_4c8 == (char *)0x0) goto LAB_050d237f;
    if (*pcStack_4c8 == '\0') goto LAB_050d237f;
    func_0x05132880(&pcStack_4c8,param_3);
    pcStack_4c8 = (char *)0x0;
    plStack_4c0 = (long *)0x0;
    if (plVar20 == (long *)0x0) {
      uStack_4b8 = 0;
    }
    else {
      LOCK();
      plVar6 = plVar20 + 1;
      lVar18 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
      }
      plVar20 = plStack_4c0;
      uStack_4b8 = 0;
      if (plStack_4c0 != (long *)0x0) {
        LOCK();
        plVar6 = plStack_4c0 + 1;
        lVar18 = *plVar6;
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (lVar18 == 0) {
          (**(code **)(*plStack_4c0 + 0x10))(plStack_4c0);
          func_0x0412c2d0(plVar20);
        }
      }
    }
  }
  if (((DAT_0f5a28b8 == '\0') && (*(char *)(param_4 + 3) == '\0')) &&
     (((DAT_0f5a28a6 & 1) == 0 ||
      ((*(char *)((long)param_4 + 7) != '\0' ||
       (cVar10 = FUN_04fa7a10(param_4,0xf5a28a0), cVar10 == '\0')))))) {
    pcStack_4e8 = (char *)*param_1;
    plVar20 = (long *)param_1[1];
    if (plVar20 != (long *)0x0) {
      LOCK();
      plVar20[1] = plVar20[1] + 1;
      UNLOCK();
    }
    uStack_4d8 = param_1[2];
    plStack_4e0 = plVar20;
    if (pcStack_4e8 == (char *)0x0) goto LAB_050d237f;
    if (*pcStack_4e8 == '\0') goto LAB_050d237f;
    func_0x0514ea80(&pcStack_4e8,param_2,param_3);
    pcStack_4e8 = (char *)0x0;
    plStack_4e0 = (long *)0x0;
    if (plVar20 == (long *)0x0) {
      uStack_4d8 = 0;
    }
    else {
      LOCK();
      plVar6 = plVar20 + 1;
      lVar18 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
      }
      plVar20 = plStack_4e0;
      uStack_4d8 = 0;
      if (plStack_4e0 != (long *)0x0) {
        LOCK();
        plVar6 = plStack_4e0 + 1;
        lVar18 = *plVar6;
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (lVar18 == 0) {
          (**(code **)(*plStack_4e0 + 0x10))(plStack_4e0);
          func_0x0412c2d0(plVar20);
        }
      }
    }
  }
  if (((DAT_0f5a2d88 != '\0') || (*(char *)(param_4 + 3) != '\0')) ||
     (((DAT_0f5a2d76 & 1) != 0 &&
      ((*(char *)((long)param_4 + 7) == '\0' &&
       (cVar10 = FUN_04fa7a10(param_4,0xf5a2d70), cVar10 != '\0')))))) goto LAB_050d226c;
  lVar11 = FUN_0cc41df0(0xf6ff9e0,0xf71a968,1);
  lVar12 = FUN_0cc41df0(0xf6ff9e0,0xf71aaa8,1);
  lVar18 = *(long *)(lVar12 + 0x68);
  lVar13 = *(long *)(lVar18 + 0x1b0);
  puStack_508 = param_3;
  if (lVar13 == 0) {
LAB_050d13c7:
    for (plVar20 = *(long **)(lVar18 + 0x350); plVar20 != *(long **)(lVar18 + 0x358);
        plVar20 = plVar20 + 2) {
      plVar6 = (long *)*plVar20;
      if (*(ulong *)(plVar6[1] + 8) == _DAT_0f6fc990) {
        lVar13 = (**(code **)(*plVar6 + 8))(plVar6,lVar18,*(ushort *)(lVar12 + 0x128),1);
        if (lVar13 != 0) goto LAB_050d16b9;
        break;
      }
    }
    if ((*(byte *)(lVar18 + 0x135) & 8) == 0) {
LAB_050d16b6:
      lVar13 = lVar12;
    }
    else {
      lVar13 = *(long *)(lVar18 + 0x200);
    }
  }
  else {
    lVar14 = lVar18 + 0x1b0;
    do {
      bVar23 = *(ulong *)(lVar13 + 0x20) < _DAT_0f6fc990;
      if (!bVar23) {
        lVar14 = lVar13;
      }
      lVar13 = *(long *)(lVar13 + (ulong)bVar23 * 8);
    } while (lVar13 != 0);
    if ((lVar14 == lVar18 + 0x1b0) || (_DAT_0f6fc990 < *(ulong *)(lVar14 + 0x20)))
    goto LAB_050d13c7;
    if (*(uint *)(lVar14 + 0x28) < 2) goto LAB_050d16b6;
    uVar15 = (ulong)(1 << (((char)*(undefined4 *)(lVar14 + 0x30) -
                           (char)*(undefined4 *)(lVar14 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                    ~*(uint *)(lVar14 + 0x34) & (uint)*(ushort *)(lVar12 + 0x128));
    if (((ulong)(*(long *)(lVar18 + 0x1f0) - *(long *)(lVar18 + 0x1e8) >> 3) <= uVar15) ||
       (lVar13 = *(long *)(*(long *)(lVar18 + 0x1e8) + uVar15 * 8), lVar13 == 0)) goto LAB_050d16b6;
  }
LAB_050d16b9:
  lVar14 = FUN_0cc41df0(0xf6ff9e0,0xf71ab48,1);
  lVar18 = *(long *)(lVar14 + 0x68);
  lVar12 = *(long *)(lVar18 + 0x1b0);
  if (lVar12 == 0) {
LAB_050d1723:
    for (plVar20 = *(long **)(lVar18 + 0x350); plVar20 != *(long **)(lVar18 + 0x358);
        plVar20 = plVar20 + 2) {
      plVar6 = (long *)*plVar20;
      if (*(ulong *)(plVar6[1] + 8) == _DAT_0f6fc990) {
        lStack_550 = (**(code **)(*plVar6 + 8))(plVar6,lVar18,*(ushort *)(lVar14 + 0x128),1);
        if (lStack_550 != 0) goto LAB_050d17db;
        break;
      }
    }
    if ((*(byte *)(lVar18 + 0x135) & 8) != 0) {
      lVar14 = *(long *)(lVar18 + 0x200);
    }
LAB_050d17d6:
    lStack_550 = lVar14;
  }
  else {
    lVar21 = lVar18 + 0x1b0;
    do {
      bVar23 = *(ulong *)(lVar12 + 0x20) < _DAT_0f6fc990;
      if (!bVar23) {
        lVar21 = lVar12;
      }
      lVar12 = *(long *)(lVar12 + (ulong)bVar23 * 8);
    } while (lVar12 != 0);
    if ((lVar21 == lVar18 + 0x1b0) || (_DAT_0f6fc990 < *(ulong *)(lVar21 + 0x20)))
    goto LAB_050d1723;
    if (*(uint *)(lVar21 + 0x28) < 2) goto LAB_050d17d6;
    uVar15 = (ulong)(1 << (((char)*(undefined4 *)(lVar21 + 0x30) -
                           (char)*(undefined4 *)(lVar21 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                    ~*(uint *)(lVar21 + 0x34) & (uint)*(ushort *)(lVar14 + 0x128));
    if (((ulong)(*(long *)(lVar18 + 0x1f0) - *(long *)(lVar18 + 0x1e8) >> 3) <= uVar15) ||
       (lStack_550 = *(long *)(*(long *)(lVar18 + 0x1e8) + uVar15 * 8), lStack_550 == 0))
    goto LAB_050d17d6;
  }
LAB_050d17db:
  lVar14 = FUN_0cc41df0(0xf6ff9e0,0xf71aa08,1);
  lVar18 = *(long *)(lVar14 + 0x68);
  lVar12 = *(long *)(lVar18 + 0x1b0);
  if (lVar12 == 0) {
LAB_050d1843:
    for (plVar20 = *(long **)(lVar18 + 0x350); plVar20 != *(long **)(lVar18 + 0x358);
        plVar20 = plVar20 + 2) {
      plVar6 = (long *)*plVar20;
      if (*(ulong *)(plVar6[1] + 8) == _DAT_0f6fc990) {
        lStack_380 = (**(code **)(*plVar6 + 8))(plVar6,lVar18,*(ushort *)(lVar14 + 0x128),1);
        if (lStack_380 != 0) goto LAB_050d18e9;
        break;
      }
    }
    if ((*(byte *)(lVar18 + 0x135) & 8) != 0) {
      lStack_380 = *(long *)(lVar18 + 0x200);
      goto LAB_050d18e9;
    }
  }
  else {
    lVar21 = lVar18 + 0x1b0;
    do {
      bVar23 = *(ulong *)(lVar12 + 0x20) < _DAT_0f6fc990;
      if (!bVar23) {
        lVar21 = lVar12;
      }
      lVar12 = *(long *)(lVar12 + (ulong)bVar23 * 8);
    } while (lVar12 != 0);
    if ((lVar21 == lVar18 + 0x1b0) || (_DAT_0f6fc990 < *(ulong *)(lVar21 + 0x20)))
    goto LAB_050d1843;
    if (1 < *(uint *)(lVar21 + 0x28)) {
      uVar15 = (ulong)(1 << (((char)*(undefined4 *)(lVar21 + 0x30) -
                             (char)*(undefined4 *)(lVar21 + 0x2c)) + 1U & 0x1f) & 0xffffU |
                      ~*(uint *)(lVar21 + 0x34) & (uint)*(ushort *)(lVar14 + 0x128));
      if ((uVar15 < (ulong)(*(long *)(lVar18 + 0x1f0) - *(long *)(lVar18 + 0x1e8) >> 3)) &&
         (lStack_380 = *(long *)(*(long *)(lVar18 + 0x1e8) + uVar15 * 8), lStack_380 != 0))
      goto LAB_050d18e9;
    }
  }
  lStack_380 = lVar14;
LAB_050d18e9:
  uStack_3b0 = *(undefined8 *)(lVar11 + 0x68);
  puStack_3c0 = &UNK_0f45f578;
  ppuStack_3b8 = (undefined **)&UNK_0f45f608;
  uStack_3a8 = 0x3dcccccd;
  uStack_388 = 2;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  ppuStack_2c8 = (undefined **)0x0;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_290 = 0;
  uStack_288 = 0;
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_270 = 0;
  lStack_238 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_248 = 0;
  uStack_240 = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  puStack_2e8 = &UNK_0f45f578;
  pppuStack_378 = &ppuStack_2e0;
  ppuStack_2e0 = (undefined **)&UNK_0f45f5a8;
  puStack_2a8 = &UNK_0f45f578;
  puStack_2a0 = &UNK_0f45f5a8;
  puStack_268 = &UNK_0f45f548;
  puStack_260 = &UNK_0f45f6f8;
  puStack_230 = &UNK_0f45f6c8;
  puStack_228 = &UNK_0f45f758;
  func_0x0d2c4b40(&pppuStack_378,pppuStack_378,&ppuStack_3b8);
  uStack_368 = *(undefined8 *)(lVar11 + 0x68);
  pppuStack_378 = (undefined ***)&UNK_0f45f578;
  puStack_370 = &UNK_0f45f608;
  uStack_360 = 0x3eaaaaab;
  uStack_340 = 2;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  lStack_150 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  puStack_200 = &UNK_0f45f578;
  ppuStack_400 = &puStack_1f8;
  puStack_1f8 = &UNK_0f45f5a8;
  puStack_1c0 = &UNK_0f45f578;
  puStack_1b8 = &UNK_0f45f5a8;
  puStack_180 = &UNK_0f45f548;
  puStack_178 = &UNK_0f45f6f8;
  puStack_148 = &UNK_0f45f6c8;
  puStack_140 = &UNK_0f45f758;
  lStack_238 = lVar13;
  func_0x0d2c4b40(&ppuStack_400,ppuStack_400,&puStack_370);
  lStack_150 = lStack_550;
  param_4 = &puStack_118;
  uStack_3f0 = *(undefined8 *)(lVar11 + 0x68);
  ppuStack_400 = (undefined **)&UNK_0f45f578;
  puStack_3f8 = &UNK_0f45f608;
  uStack_3e8 = 0x3f000000;
  uStack_3c8 = 2;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  lStack_68 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_118 = &UNK_0f45f578;
  pppplStack_568 = &ppplStack_110;
  ppplStack_110 = (long ***)&UNK_0f45f5a8;
  puStack_d8 = &UNK_0f45f578;
  puStack_d0 = &UNK_0f45f5a8;
  puStack_98 = &UNK_0f45f548;
  puStack_90 = &UNK_0f45f6f8;
  puStack_60 = &UNK_0f45f6c8;
  puStack_58 = &UNK_0f45f758;
  func_0x0d2c4b40(&pppplStack_568,pppplStack_568,&puStack_3f8);
  lStack_68 = lStack_380;
  pppplStack_548 = (long ****)0x0;
  pppplStack_540 = (long ****)0x0;
  pppplStack_538 = (long ****)0x0;
  pppplStack_568 = (long ****)&pppplStack_548;
  pppplStack_560 = (long ****)((ulong)pppplStack_560 & 0xffffffffffffff00);
  param_5 = (long ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x2b8);
  param_2 = &pppplStack_568;
  if (param_5 == (long ****)0x0) goto LAB_050d2384;
  do {
    pppplStack_548 = param_5;
    pppplStack_540 = param_5;
    pppplStack_538 = param_5 + 0x57;
    func_0x0525e680(param_5,&puStack_2e8);
    func_0x0525e680(param_5 + 0x1d,&puStack_200);
    func_0x0525e680(param_5 + 0x3a,param_4);
    pppplStack_540 = param_5 + 0x57;
    func_0x0d2bf880(&ppplStack_468,&pppplStack_548);
    uStack_528 = ppplStack_468;
    uStack_520 = pppplStack_460;
    if (pppplStack_460 != (long ****)0x0) {
      LOCK();
      pppplStack_460[1] = (long ***)((long)pppplStack_460[1] + 1);
      UNLOCK();
    }
    param_2 = ppppplVar22;
    if (ppplStack_468 != (long ***)0x0) {
      param_5 = &ppplStack_518;
      func_0x0d2bfb60(&ppplStack_478,0xf70b788);
      ppplVar19 = ppplStack_478;
      ppplStack_518 = ppplStack_478;
      ppplStack_510 = ppplStack_470;
      if (ppplStack_470 != (long ***)0x0) {
        LOCK();
        ppplStack_470[1] = (long **)((long)ppplStack_470[1] + 1);
        UNLOCK();
      }
      if (ppplStack_478 != (long ***)0x0) {
        pppplStack_568 = (long ****)0x0;
        pppplStack_560 = (long ****)0x0;
        pppplStack_558 = (long ****)0x0;
        uStack_480 = 0;
        puStack_488 = (undefined1 *)ppppplVar22;
        pppplVar16 = (long ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (pppplVar16 == (long ****)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        pppplStack_560 = pppplVar16 + 4;
        *(undefined4 *)pppplVar16 = (undefined4)uStack_528;
        *(undefined4 *)((long)pppplVar16 + 4) = uStack_528._4_4_;
        *(undefined4 *)(pppplVar16 + 1) = (undefined4)uStack_520;
        *(undefined4 *)((long)pppplVar16 + 0xc) = uStack_520._4_4_;
        if (uStack_520 != (long ****)0x0) {
          LOCK();
          uStack_520[1] = (long ***)((long)uStack_520[1] + 1);
          UNLOCK();
          ppplVar19 = ppplStack_518;
        }
        param_2 = (long *****)(puStack_508 + 0x28);
        pppplVar16[2] = ppplVar19;
        pppplVar16[3] = ppplStack_510;
        if (ppplStack_510 != (long ***)0x0) {
          LOCK();
          ppplStack_510[1] = (long **)((long)ppplStack_510[1] + 1);
          UNLOCK();
        }
        pppplStack_568 = pppplVar16;
        pppplStack_558 = pppplStack_560;
        func_0x0d382c20(param_2,&UNK_012bd93f,0x30,&pppplStack_568);
        pppplVar2 = pppplStack_568;
        pppplVar16 = pppplStack_560;
        if (pppplStack_568 != (long ****)0x0) {
          for (; pppplVar2 != pppplVar16; pppplVar16 = pppplVar16 + -2) {
            ppplVar19 = pppplVar16[-1];
            if (ppplVar19 != (long ***)0x0) {
              LOCK();
              ppplVar1 = ppplVar19 + 1;
              pplVar4 = *ppplVar1;
              *ppplVar1 = (long **)((long)*ppplVar1 + -1);
              UNLOCK();
              if (pplVar4 == (long **)0x0) {
                (*(code *)(*ppplVar19)[2])(ppplVar19);
                func_0x0412c2d0(ppplVar19);
              }
            }
          }
          pppplStack_560 = pppplVar2;
          func_0x0412a280(pppplStack_568,(long)pppplStack_558 - (long)pppplStack_568);
        }
        ppplVar19 = ppplStack_510;
        if (ppplStack_510 != (long ***)0x0) {
          LOCK();
          ppplVar1 = ppplStack_510 + 1;
          pplVar4 = *ppplVar1;
          *ppplVar1 = (long **)((long)*ppplVar1 + -1);
          UNLOCK();
          if (pplVar4 == (long **)0x0) {
            (*(code *)(*ppplStack_510)[2])(ppplStack_510);
            func_0x0412c2d0(ppplVar19);
          }
        }
        pppplVar16 = uStack_520;
        if (uStack_520 != (long ****)0x0) {
          LOCK();
          pppplVar2 = uStack_520 + 1;
          ppplVar19 = *pppplVar2;
          *pppplVar2 = (long ***)((long)*pppplVar2 + -1);
          UNLOCK();
          if (ppplVar19 == (long ***)0x0) {
            (*(code *)(*uStack_520)[2])(uStack_520);
            func_0x0412c2d0(pppplVar16);
          }
        }
        ppplVar19 = ppplStack_470;
        if (ppplStack_470 != (long ***)0x0) {
          LOCK();
          ppplVar1 = ppplStack_470 + 1;
          pplVar4 = *ppplVar1;
          *ppplVar1 = (long **)((long)*ppplVar1 + -1);
          UNLOCK();
          if (pplVar4 == (long **)0x0) {
            (*(code *)(*ppplStack_470)[2])(ppplStack_470);
            func_0x0412c2d0(ppplVar19);
          }
        }
        param_5 = pppplStack_460;
        if (pppplStack_460 != (long ****)0x0) {
          LOCK();
          pppplVar16 = pppplStack_460 + 1;
          ppplVar19 = *pppplVar16;
          *pppplVar16 = (long ***)((long)*pppplVar16 + -1);
          UNLOCK();
          if (ppplVar19 == (long ***)0x0) {
            (*(code *)(*pppplStack_460)[2])(pppplStack_460);
            func_0x0412c2d0(param_5);
          }
        }
        pppplVar16 = pppplStack_548;
        pppplVar2 = pppplStack_540;
        if (pppplStack_548 != (long ****)0x0) {
          while (param_5 = pppplVar2, pppplVar16 != param_5) {
            func_0x05192430(param_5 + -0x1d);
            pppplVar2 = param_5 + -0x1d;
          }
          pppplStack_540 = pppplVar16;
          func_0x0412a280(pppplStack_548,(long)pppplStack_538 - (long)pppplStack_548);
        }
        func_0x05192430(param_4);
        func_0x05192430(&puStack_200);
        func_0x05192430(&puStack_2e8);
        ppuStack_400 = (undefined **)&UNK_0f45f578;
        if ((ulong)uStack_3c8 != 0xffffffff) {
          (**(code **)(&UNK_0ef9cd08 + (ulong)uStack_3c8 * 8))(&puStack_488,&puStack_3f8);
        }
        puVar5 = puStack_508;
        uStack_3c8 = 0xffffffff;
        pppuStack_378 = (undefined ***)&UNK_0f45f578;
        if ((ulong)uStack_340 != 0xffffffff) {
          (**(code **)(&UNK_0ef9cd08 + (ulong)uStack_340 * 8))(&puStack_488,&puStack_370);
        }
        uStack_340 = 0xffffffff;
        puStack_3c0 = &UNK_0f45f578;
        if ((ulong)uStack_388 != 0xffffffff) {
          (**(code **)(&UNK_0ef9cd08 + (ulong)uStack_388 * 8))(&puStack_488,&ppuStack_3b8);
        }
        func_0x0d3836f0(&puStack_2e8,param_2,&UNK_012bd93f,0x30);
        ppuVar17 = ppuStack_2e0;
        puStack_3c0 = puStack_2e8;
        ppuStack_3b8 = ppuStack_2e0;
        if (ppuStack_2e0 != (undefined **)0x0) {
          LOCK();
          ppuStack_2e0[1] = ppuStack_2e0[1] + 1;
          UNLOCK();
        }
        param_4 = ppuStack_2e0;
        if (puStack_2e8 != (undefined *)0x0) break;
      }
    }
LAB_050d237f:
    func_0x04890760();
LAB_050d2384:
    ppppplVar22 = param_2;
    func_0x0eec74c0(0x2b8,0);
  } while( true );
  func_0x05192590(&pcStack_458,puVar5,&puStack_3c0);
  if (ppuVar17 != (undefined **)0x0) {
    LOCK();
    ppuVar3 = ppuVar17 + 1;
    puVar5 = *ppuVar3;
    *ppuVar3 = *ppuVar3 + -1;
    UNLOCK();
    if (puVar5 == (undefined *)0x0) {
      (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
      func_0x0412c2d0(ppuVar17);
    }
  }
  ppuVar17 = ppuStack_2e0;
  puVar7 = _DAT_0f71fa40;
  puVar8 = _DAT_0f71fa48;
  if (((char)uStack_2d8 == '\x01') && (ppuStack_2e0 != (undefined **)0x0)) {
    LOCK();
    ppuVar3 = ppuStack_2e0 + 1;
    puVar5 = *ppuVar3;
    *ppuVar3 = *ppuVar3 + -1;
    UNLOCK();
    puVar7 = _DAT_0f71fa40;
    puVar8 = _DAT_0f71fa48;
    if (puVar5 == (undefined *)0x0) {
      (**(code **)(*ppuStack_2e0 + 0x10))(ppuStack_2e0);
      func_0x0412c2d0(ppuVar17);
      puVar7 = _DAT_0f71fa40;
      puVar8 = _DAT_0f71fa48;
    }
  }
  for (; puVar9 = _DAT_0f71fa48, bVar23 = puVar7 != _DAT_0f71fa48, _DAT_0f71fa48 = puVar8, bVar23;
      puVar7 = puVar7 + 2) {
    plVar20 = (long *)*puVar7;
    ppuVar17 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (ppuVar17 == (undefined **)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *ppuVar17 = &UNK_0f4610d0;
    ppuVar17[1] = puStack_508;
    ppuVar17[2] = &UNK_013df34a;
    ppuVar17[3] = (undefined *)0x5;
    ppuVar17[4] = (undefined *)&pcStack_458;
    ppuStack_2c8 = ppuVar17;
    (**(code **)(*plVar20 + 8))(plVar20,&puStack_2e8);
    if (ppuStack_2c8 == &puStack_2e8) {
      lVar18 = 0x20;
LAB_050d21c5:
      (**(code **)(*ppuStack_2c8 + lVar18))();
    }
    else {
      lVar18 = 0x28;
      if (ppuStack_2c8 != (undefined **)0x0) goto LAB_050d21c5;
    }
    puVar8 = _DAT_0f71fa48;
    _DAT_0f71fa48 = puVar9;
  }
LAB_050d226c:
  if ((uStack_420 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_420 & 0xff00ffffffffffff) - 8);
  }
  uStack_420 = 0;
  if ((uStack_428 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_428 & 0xff00ffffffffffff) - 8);
  }
  plVar20 = plStack_450;
  uStack_428 = 0;
  pcStack_458 = (char *)0x0;
  plStack_450 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar6 = plVar20 + 1;
    lVar18 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
    plVar20 = plStack_450;
    uStack_448 = 0;
    if (plStack_450 != (long *)0x0) {
      LOCK();
      plVar6 = plStack_450 + 1;
      lVar18 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plStack_450 + 0x10))(plStack_450);
        func_0x0412c2d0(plVar20);
      }
    }
  }
  return;
}


