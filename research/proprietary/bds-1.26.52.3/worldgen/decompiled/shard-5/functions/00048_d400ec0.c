/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd500ec0 (ELF vaddr 0xd400ec0)
 * Label: caller-of-callee
 * Body:  [[0d500ec0, 0d501f5c] [0d501f60, 0d501f93] [0d501fa0, 0d502003] [0d502010, 0d502029] [0d502030, 0d502524] [0d502530, 0d502564] [0d502570, 0d5025d9] [0d5025e0, 0d5025f8] [0d502600, 0d502a35] [0d502a40, 0d502ff2] [0d503000, 0d503b58] [0d503b6e, 0d503b9a] [0d503e15, 0d503e7e]]
 * Ghidra: FUN_0d500ec0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d500ec0(long param_1,long param_2,undefined **param_3,ulong *param_4,undefined **param_5,
                 long *param_6,long *param_7,undefined1 param_8)

{
  undefined **ppuVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  byte bVar7;
  undefined1 auVar8 [8];
  char cVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  undefined **ppuVar19;
  undefined8 *******pppppppuVar20;
  undefined **ppuVar21;
  byte *pbVar22;
  ulong uVar23;
  undefined **ppuVar24;
  ulong uVar25;
  byte *pbVar26;
  undefined **ppuVar27;
  long *plVar28;
  undefined8 *******pppppppuVar29;
  undefined **ppuVar30;
  byte *pbVar31;
  long *plVar32;
  bool bVar33;
  float fVar34;
  float fVar35;
  byte *pbStack_680;
  undefined **ppuStack_678;
  byte *pbStack_670;
  undefined1 auStack_668 [8];
  undefined8 uStack_660;
  undefined8 uStack_658;
  byte *pbStack_650;
  long *plStack_648;
  ulong uStack_640;
  ulong uStack_638;
  undefined8 auStack_630 [2];
  undefined *puStack_620;
  code *pcStack_618;
  undefined4 uStack_610;
  undefined1 uStack_60c;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined4 uStack_5c0;
  undefined1 uStack_5bc;
  undefined *puStack_568;
  char cStack_560;
  undefined *puStack_558;
  undefined *puStack_550;
  byte bStack_548;
  undefined1 uStack_547;
  undefined6 uStack_546;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined *puStack_518;
  byte bStack_510;
  undefined1 auStack_508 [72];
  ulong uStack_4c0;
  undefined4 uStack_4b8;
  double dStack_4b0;
  undefined4 uStack_4a8;
  undefined8 uStack_4a0;
  undefined4 uStack_498;
  uint uStack_494;
  ulong uStack_490;
  undefined8 *******pppppppuStack_488;
  undefined4 uStack_480;
  undefined8 uStack_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined8 uStack_468;
  long lStack_460;
  undefined **ppuStack_458;
  undefined8 *puStack_450;
  ulong uStack_448;
  undefined8 uStack_440;
  ulong uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  uint5 uStack_420;
  undefined3 uStack_41b;
  undefined4 uStack_418;
  byte bStack_414;
  undefined4 uStack_410;
  undefined4 uStack_408;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined4 uStack_3f0;
  undefined **ppuStack_3e8;
  char cStack_3e0;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined8 uStack_3c8;
  undefined **ppuStack_3c0;
  byte *pbStack_3b8;
  long *plStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined1 uStack_390;
  undefined *puStack_388;
  undefined4 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  undefined1 auStack_308 [8];
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  byte bStack_2bc;
  long *plStack_2b8;
  long lStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  long lStack_290;
  undefined **ppuStack_288;
  undefined8 *puStack_280;
  ulong uStack_278;
  float afStack_270 [6];
  code *pcStack_258;
  undefined1 auStack_248 [80];
  long lStack_1f8;
  undefined **ppuStack_1f0;
  undefined8 *puStack_1e8;
  ulong uStack_1e0;
  float fStack_1d8;
  undefined4 uStack_1d4;
  ulong uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  byte bStack_1ac;
  undefined1 auStack_1a0 [24];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_110;
  ulong uStack_108;
  byte bStack_100;
  undefined7 uStack_ff;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [96];
  uint uStack_88;
  undefined1 auStack_80 [80];
  
  ppuVar21 = (undefined **)((long)param_3 + 1);
  bVar33 = (*(byte *)param_3 & 1) == 0;
  auStack_668 = (undefined1  [8])param_3[2];
  if (bVar33) {
    auStack_668 = (undefined1  [8])ppuVar21;
  }
  uStack_660 = (undefined **)(ulong)(*(byte *)param_3 >> 1);
  if (!bVar33) {
    uStack_660 = (undefined **)param_3[1];
  }
  uStack_658 = (undefined **)CONCAT71(uStack_658._1_7_,1);
  uStack_4c0 = 0;
  func_0x0eeb79f0(auStack_1a0,&uStack_4c0);
  if ((uStack_4c0 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_4c0 & 0xff00ffffffffffff) - 8);
  }
  uStack_318 = param_4[2];
  uStack_328 = *param_4;
  uStack_320 = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  func_0x0d686f30(auStack_138,&UNK_013a3d94,0x17,param_2 + 0xd8,&uStack_328);
  if ((uStack_328 & 1) != 0) {
    func_0x0412a280(uStack_318,uStack_328 & 0xfffffffffffffffe);
  }
  uStack_348 = 0;
  uStack_340 = 0;
  uStack_338 = 0;
  func_0x0d6afff0(&uStack_4c0,param_2,auStack_138,&uStack_348,1);
  if ((((~uStack_4a0._6_1_ | bStack_414) & 1) == 0) && (*(long *)(param_2 + 0x50) != 0)) {
    lVar11 = func_0x0417cc60();
    plVar17 = *(long **)(param_2 + 0x50);
    if (plVar17 != (long *)0x0) {
      pppppppuVar20 = pppppppuStack_488;
      if (uStack_468._4_1_ == '\x02') {
        pppppppuVar20 = &pppppppuStack_488;
      }
      pppppppuVar29 = (undefined8 *******)0x0;
      if ((int)uStack_468 == 0x1d19f737) {
        pppppppuVar29 = pppppppuVar20;
      }
      (**(code **)(*plVar17 + 0x30))(plVar17,pppppppuVar29,&lStack_460);
      lVar12 = func_0x0417cc60();
      dStack_4b0 = (double)(lVar12 - lVar11) / _DAT_014f0138;
      uStack_4a8 = CONCAT31(uStack_4a8._1_3_,(byte)uStack_4a8 & ~bStack_414 & uStack_4a0._6_1_);
      goto LAB_0d5010e5;
    }
    func_0x04891200();
LAB_0d503b3b:
    func_0x04931450();
LAB_0d503b40:
    func_0x04882ee0();
LAB_0d503b45:
    FUN_04882eb0();
LAB_0d503b4a:
    func_0x04882ee0();
LAB_0d503b4f:
    uVar13 = func_0x04882e30();
    if ((*pbStack_680 & 1) != 0) {
      func_0x0412a280(param_3[5],(ulong)param_3[3] & 0xfffffffffffffffe);
    }
    func_0x0d5119b0(auStack_2a8);
    func_0x0d506c50(auStack_668);
    if (((ulong)auStack_308 & 1) != 0) {
      func_0x0412a280(ppuStack_2f8,(ulong)auStack_308 & 0xfffffffffffffffe);
    }
    func_0x0d506de0(&uStack_4c0);
    func_0x05ebba90(lStack_2b0);
    func_0x05d59d60(auStack_138);
    func_0x0eeb81b0(auStack_1a0);
    func_0x0eee2d70(uVar13);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_0d5010e5:
  uVar13 = _uStack_420;
  uVar16 = uStack_438;
  uVar14 = uStack_448;
  puVar5 = puStack_450;
  ppuVar30 = ppuStack_458;
  lVar11 = lStack_460;
  if (((~uStack_4a0._6_1_ | bStack_414) & 1) == 0) {
    func_0x05ebb920(auStack_668,&uStack_4c0);
    func_0x05ebb920(param_1,auStack_668);
    func_0x05d85c50(&uStack_608);
    if (pcStack_618 != (code *)0x0) {
      (*pcStack_618)(auStack_630);
    }
    if ((uStack_638 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_638 & 0xff00ffffffffffff) - 8);
    }
    uStack_638 = 0;
    if ((uStack_640 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_640 & 0xff00ffffffffffff) - 8);
    }
    uStack_640 = 0;
  }
  else {
    lStack_460 = 0;
    ppuStack_458 = (undefined **)0x0;
    puStack_450 = (undefined8 *)0x0;
    fStack_1d8 = (float)uStack_440;
    uStack_1d4 = uStack_440._4_4_;
    uStack_448 = 0;
    uStack_440 = 0;
    uStack_438 = 0;
    uStack_1c8 = (undefined4)uStack_430;
    uStack_1c4 = uStack_430._4_4_;
    uStack_1c0 = (undefined4)uStack_428;
    uStack_1bc = uStack_428._4_4_;
    uStack_430 = 0;
    uStack_428 = 0;
    _uStack_420 = 0;
    bStack_2bc = bStack_414;
    uStack_2c0 = uStack_418;
    lStack_1f8 = lVar11;
    ppuStack_1f0 = ppuVar30;
    puStack_1e8 = puVar5;
    auStack_308 = (undefined1  [8])0x0;
    ppuStack_300 = (undefined **)0x0;
    ppuStack_2f8 = (undefined **)0x0;
    uStack_1e0 = uVar14;
    uStack_1d0 = uVar16;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    uStack_1b8 = uVar13;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uStack_1b0 = uStack_418;
    bStack_1ac = bStack_414;
    auStack_668 = (undefined1  [8])0x0;
    uStack_660 = (undefined **)0x0;
    uStack_658 = (undefined **)0x0;
    pbStack_650._0_1_ = 1;
    plStack_648 = (long *)0x0;
    uStack_640 = 0;
    uStack_638 = 0;
    puStack_620 = &UNK_0488e0b0;
    uStack_610 = 0x48b5725f;
    pcStack_618 = (code *)0x0;
    uStack_60c = 0;
    auStack_630[0] = 0;
    uStack_5d8 = 0;
    uStack_5d0 = 0;
    uStack_5e8 = 0;
    uStack_5e0 = 0;
    uStack_5f8 = 0;
    uStack_5f0 = 0;
    uStack_608 = 0;
    uStack_600 = 0;
    uStack_5c8 = 0;
    uStack_5c0 = 0xfefffffc;
    uStack_5bc = 0;
    func_0x0c4a4310(&uStack_608,&lStack_1f8);
    pbStack_650 = (byte *)((ulong)pbStack_650._1_7_ << 8);
    func_0x05ebb920(auStack_2a8,auStack_668);
    func_0x05d85c50(&uStack_608);
    if (pcStack_618 != (code *)0x0) {
      (*pcStack_618)(auStack_630);
    }
    if ((uStack_638 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_638 & 0xff00ffffffffffff) - 8);
    }
    uStack_638 = 0;
    if ((uStack_640 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_640 & 0xff00ffffffffffff) - 8);
    }
    uStack_640 = 0;
    func_0x05d85c50(&lStack_1f8);
    func_0x05ebb920(auStack_668,auStack_2a8);
    func_0x05ebb920(param_1,auStack_668);
    func_0x05d85c50(&uStack_608);
    if (pcStack_618 != (code *)0x0) {
      (*pcStack_618)(auStack_630);
    }
    if ((uStack_638 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_638 & 0xff00ffffffffffff) - 8);
    }
    uStack_638 = 0;
    if ((uStack_640 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_640 & 0xff00ffffffffffff) - 8);
    }
    uStack_640 = 0;
    func_0x05d85c50(auStack_248);
    if (pcStack_258 != (code *)0x0) {
      (*pcStack_258)(afStack_270);
    }
    if ((uStack_278 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_278 & 0xff00ffffffffffff) - 8);
    }
    uStack_278 = 0;
    if (((ulong)puStack_280 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_280 & 0xff00ffffffffffff) - 8);
    }
    puStack_280 = (undefined8 *)0x0;
    func_0x05d85c50(auStack_308);
  }
  func_0x05d85c50(&lStack_460);
  if ((code *)CONCAT44(uStack_46c,uStack_470) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_46c,uStack_470))(&pppppppuStack_488);
  }
  if ((uStack_490 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_490 & 0xff00ffffffffffff) - 8);
  }
  uStack_490 = 0;
  if ((uStack_494 & 0x800000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,(CONCAT44(uStack_494,uStack_498) & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_338 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_338 & 0xff00ffffffffffff) - 8);
  }
  uStack_338 = 0;
  if ((uStack_340 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_340 & 0xff00ffffffffffff) - 8);
  }
  if ((*(char *)(param_1 + 0x26) != '\x01') || ((*(byte *)(param_1 + 0xac) & 1) != 0)) {
    uStack_188 = 0xffffffff;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    func_0x0d5ceda0(param_1 + 0x60,0xe,&uStack_188);
    func_0x05f43a40(&uStack_188);
    goto LAB_0d502e77;
  }
  if (*(char *)(param_1 + 0x5c) == '\x02') {
    pbVar26 = (byte *)(param_1 + 0x38);
  }
  else {
    pbVar26 = *(byte **)(param_1 + 0x38);
  }
  pbVar31 = (byte *)0x0;
  if (*(int *)(param_1 + 0x58) == 0x1d19f737) {
    pbVar31 = pbVar26;
  }
  uStack_4c0 = 0;
  uStack_4b8 = 0;
  dStack_4b0 = 0.0;
  uStack_4a8 = 0;
  uStack_4a0 = 1;
  uStack_498 = 1;
  uStack_494 = uStack_494 & 0xffffff00;
  uStack_490._0_5_ = (uint5)(uint)uStack_490;
  pppppppuStack_488 = (undefined8 *******)0x0;
  uStack_480 = 0;
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_468 = 1;
  lStack_460 = CONCAT35(lStack_460._5_3_,1);
  ppuStack_458._0_5_ = (uint5)(uint)ppuStack_458;
  puStack_450 = (undefined8 *)0x0;
  uStack_448 = uStack_448 & 0xffffffff00000000;
  uStack_440 = 0;
  uStack_438 = uStack_438 & 0xffffffff00000000;
  uStack_430 = 1;
  uStack_428 = CONCAT35(uStack_428._5_3_,1);
  uStack_420 = (uint5)(uint)uStack_420;
  uStack_418 = 0;
  uStack_410 = 0x42c80000;
  uStack_408 = 1;
  uStack_400 = 0;
  uStack_3f8 = 0;
  uStack_3f0 = 1;
  ppuStack_3e8 = (undefined **)((ulong)ppuStack_3e8 & 0xffffffffffffff00);
  cStack_3e0 = '\0';
  ppuStack_3d8 = (undefined **)0xffffffffffffffff;
  ppuStack_3a0 = (undefined **)0x0;
  ppuStack_398 = (undefined **)0x0;
  plStack_3b0 = (long *)0x0;
  ppuStack_3a8 = (undefined **)0x0;
  ppuStack_3c0 = (undefined **)0x0;
  pbStack_3b8 = (byte *)0x0;
  ppuStack_3d0 = (undefined **)0x0;
  uStack_3c8 = (undefined **)0x0;
  uStack_390 = 0;
  uStack_380 = 0;
  uStack_378 = 0;
  uStack_370 = 0;
  uStack_368 = 0;
  uStack_360 = 0;
  uStack_358 = 0;
  uStack_350 = 0;
  puStack_388 = &UNK_0ef516f8;
  lStack_2b0 = param_1;
  uVar13 = (**(code **)(*param_6 + 0x38))(param_6);
  auStack_668 = (undefined1  [8])0x0;
  if ((*pbVar31 & 1) == 0) {
    pbStack_650 = *(byte **)(pbVar31 + 0x10);
    uStack_660 = *(undefined ***)pbVar31;
    uStack_658 = *(undefined ***)(pbVar31 + 8);
  }
  else {
    func_0x0412e5e0(&uStack_660,*(undefined8 *)(pbVar31 + 0x10),*(undefined8 *)(pbVar31 + 8));
  }
  plStack_648 = (long *)0x0;
  if (((ulong)uStack_660 & 1) == 0) {
    if ((byte)uStack_660 >> 1 != 0) goto LAB_0d5018bf;
LAB_0d5019b2:
    auStack_668 = (undefined1  [8])0x0;
  }
  else {
    if (uStack_658 == (undefined **)0x0) goto LAB_0d5019b2;
LAB_0d5018bf:
    if (((ulong)uStack_660 & 1) == 0) {
      pbVar26 = (byte *)((long)&uStack_660 + 1);
      if (pbVar26 != (byte *)0x0) goto LAB_0d5018da;
LAB_0d5019e1:
      auStack_668 = (undefined1  [8])(undefined **)0x0;
    }
    else {
      pbVar26 = pbStack_650;
      if (pbStack_650 == (byte *)0x0) goto LAB_0d5019e1;
LAB_0d5018da:
      if (*pbVar26 == 0) {
        auStack_668 = (undefined1  [8])0x0;
      }
      else {
        ppuVar30 = (undefined **)0xcbf29ce484222325;
        uVar14 = func_0x0eee2e90(pbVar26);
        auStack_668 = (undefined1  [8])ppuVar30;
        if (uVar14 != 0) {
          uVar16 = (ulong)((uint)uVar14 & 7);
          if (7 < uVar14) {
            uVar14 = uVar14 & 0xfffffffffffffff8;
            do {
              ppuVar30 = (undefined **)
                         (((((((((long)ppuVar30 * 0x100000001b3 ^ (ulong)*pbVar26) * 0x100000001b3 ^
                               (ulong)pbVar26[1]) * 0x100000001b3 ^ (ulong)pbVar26[2]) *
                              0x100000001b3 ^ (ulong)pbVar26[3]) * 0x100000001b3 ^ (ulong)pbVar26[4]
                            ) * 0x100000001b3 ^ (ulong)pbVar26[5]) * 0x100000001b3 ^
                          (ulong)pbVar26[6]) * 0x100000001b3 ^ (ulong)pbVar26[7]);
              pbVar26 = pbVar26 + 8;
              uVar14 = uVar14 - 8;
            } while (uVar14 != 0);
          }
          auStack_668 = (undefined1  [8])ppuVar30;
          if (uVar16 != 0) {
            uVar14 = 0;
            do {
              ppuVar30 = (undefined **)((long)ppuVar30 * 0x100000001b3 ^ (ulong)pbVar26[uVar14]);
              uVar14 = uVar14 + 1;
              auStack_668 = (undefined1  [8])ppuVar30;
            } while (uVar16 != uVar14);
          }
        }
      }
    }
  }
  if (((ulong)uStack_3c8 & 1) != 0) {
    func_0x0412a280(pbStack_3b8,(ulong)uStack_3c8 & 0xfffffffffffffffe);
  }
  pbStack_3b8 = pbStack_650;
  uStack_3c8 = uStack_660;
  ppuStack_3c0 = uStack_658;
  plStack_3b0 = (long *)0x0;
  ppuStack_3d0 = (undefined **)auStack_668;
  func_0x0d3a0d80(auStack_668,uVar13,pbVar31 + 0x18);
  if ((byte)uStack_660 == '\x01') {
    ppuStack_298 = uStack_658;
    auStack_2a8 = auStack_668;
    ppuStack_2a0 = uStack_660;
  }
  else {
    func_0x0d39feb0(auStack_2a8,uVar13,pbVar31 + 0x18);
  }
  if (cStack_3e0 == '\x01') {
    cStack_3e0 = '\0';
    if ((char)ppuStack_2a0 == '\x01') goto LAB_0d501ae2;
LAB_0d501ab3:
    ppuStack_3d8 = (undefined **)0xffffffffffffffff;
    if (&ppuStack_3a8 != (undefined ***)(pbVar31 + 0xf8)) goto LAB_0d501b24;
  }
  else {
    if ((char)ppuStack_2a0 != '\x01') goto LAB_0d501ab3;
LAB_0d501ae2:
    cStack_3e0 = (char)ppuStack_2a0;
    ppuStack_3e8 = (undefined **)auStack_2a8;
    ppuStack_3d8 = ppuStack_298;
    if (&ppuStack_3a8 != (undefined ***)(pbVar31 + 0xf8)) {
LAB_0d501b24:
      bVar2 = pbVar31[0xf8];
      if (((ulong)ppuStack_3a8 & 1) == 0) {
        if ((bVar2 & 1) == 0) {
          ppuStack_398 = *(undefined ***)(pbVar31 + 0x108);
          ppuStack_3a8 = *(undefined ***)(pbVar31 + 0xf8);
          ppuStack_3a0 = *(undefined ***)(pbVar31 + 0x100);
        }
        else {
          func_0x04885070(&ppuStack_3a8,*(undefined8 *)(pbVar31 + 0x108),
                          *(undefined8 *)(pbVar31 + 0x100));
        }
      }
      else {
        bVar33 = (bVar2 & 1) != 0;
        pbVar26 = pbVar31 + 0xf9;
        if (bVar33) {
          pbVar26 = *(byte **)(pbVar31 + 0x108);
        }
        uVar14 = (ulong)(bVar2 >> 1);
        if (bVar33) {
          uVar14 = *(ulong *)(pbVar31 + 0x100);
        }
        func_0x04885120(&ppuStack_3a8,pbVar26,uVar14);
      }
    }
  }
  cVar9 = func_0x0d3a14e0(uVar13,pbVar31 + 0xf8);
  if (cVar9 == '\0') {
    if ((*pbVar31 & 1) == 0) {
      pbVar26 = pbVar31 + 1;
      if ((pbVar31[0xf8] & 1) == 0) goto LAB_0d501bab;
LAB_0d501bc2:
      pbVar22 = *(byte **)(pbVar31 + 0x108);
    }
    else {
      pbVar26 = *(byte **)(pbVar31 + 0x10);
      if ((pbVar31[0xf8] & 1) != 0) goto LAB_0d501bc2;
LAB_0d501bab:
      pbVar22 = pbVar31 + 0xf9;
    }
    func_0x0d506ac0(&UNK_012cf887,pbVar26,pbVar22);
  }
  if (pbVar31[0xf0] == 1) {
    pbStack_650 = pbVar31 + 0x30;
    auStack_668 = (undefined1  [8])&puStack_388;
    uStack_660 = &puStack_388;
    uStack_658 = &puStack_388;
    if ((ulong)*(uint *)(pbVar31 + 0xe8) == 0xffffffff) goto LAB_0d503b3b;
    auStack_2a8 = (undefined1  [8])auStack_668;
    cVar9 = (**(code **)(&UNK_0f3957b0 + (ulong)*(uint *)(pbVar31 + 0xe8) * 8))(auStack_2a8);
    if (cVar9 == '\0') {
      func_0x09a0a6e0(1,3,0,&UNK_011c9e5c);
    }
  }
  if (pbVar31[0x348] == 1) {
    func_0x0c91fc20(&uStack_4c0,pbVar31 + 0x110,(int)*(short *)((long)param_5 + 0x1c),0xe);
  }
  ppuVar30 = uStack_3c8;
  uStack_390 = param_8;
  pbVar26 = (byte *)((long)&uStack_3c8 + 1);
  if (((ulong)uStack_3c8 & 1) != 0) {
    pbVar26 = pbStack_3b8;
  }
  puVar15 = (undefined *)func_0x0eee2e90(pbVar26);
  bVar2 = *(byte *)param_3;
  if ((bVar2 & 1) != 0) {
    if (puVar15 == param_3[1]) goto LAB_0d501cd0;
LAB_0d501cf7:
    ppuVar19 = ppuStack_3c0;
    if (((ulong)ppuVar30 & 1) == 0) {
      ppuVar19 = (undefined **)((ulong)ppuVar30 >> 1 & 0x7f);
    }
    ppuVar30 = (undefined **)((long)ppuVar19 + 1);
    ppuVar27 = (undefined **)0x1;
    do {
      ppuVar24 = ppuVar27;
      if ((long)ppuVar24 - (long)ppuVar19 == 1) goto LAB_0d501d46;
      ppuVar27 = (undefined **)((long)ppuVar24 + 1);
      ppuVar1 = (undefined **)((long)ppuVar30 + -1);
      pbVar31 = pbVar26 + -2 + (long)ppuVar30;
      ppuVar30 = ppuVar1;
    } while (*pbVar31 != 0x3a);
    if (ppuVar1 < (undefined **)0x2) {
LAB_0d501d46:
      func_0x0d506940(pbVar26);
      goto LAB_0d501d56;
    }
    if (ppuVar1 <= ppuVar19) {
      if ((undefined **)((long)ppuVar24 + -1) < ppuVar27) {
        ppuVar27 = (undefined **)((long)ppuVar24 + -1);
      }
      if ((undefined **)0xfffffffffffffff7 < ppuVar27) goto LAB_0d503b4f;
      ppuVar30 = (undefined **)(auStack_668 + 1);
      if (ppuVar27 < (undefined **)0x17) {
        auStack_668[0] = (char)ppuVar27 * '\x02';
        if (ppuVar27 != (undefined **)0x0) goto LAB_0d50212c;
      }
      else {
        uVar14 = 0x1a;
        if (((ulong)ppuVar27 | 7) != 0x17) {
          uVar14 = ((ulong)ppuVar27 | 7) + 1;
        }
        ppuVar30 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar14);
        if (ppuVar30 == (undefined **)0x0) {
          func_0x0eec74c0(uVar14,0);
        }
        auStack_668 = (undefined1  [8])(uVar14 | 1);
        uStack_660 = ppuVar27;
        uStack_658 = ppuVar30;
LAB_0d50212c:
        func_0x0eee2ee0(ppuVar30,pbVar26 + (long)ppuVar1,ppuVar27);
      }
      *(byte *)((long)ppuVar30 + (long)ppuVar27) = 0;
      ppuVar30 = uStack_658;
      bVar2 = *(byte *)param_3;
      if ((bVar2 & 1) == 0) {
        ppuVar19 = (undefined **)(ulong)(bVar2 >> 1);
      }
      else {
        ppuVar19 = (undefined **)param_3[1];
      }
      bVar7 = auStack_668[0];
      uVar14 = (ulong)auStack_668 & 1;
      if (((ulong)auStack_668 & 1) == 0) {
        if (ppuVar19 != (undefined **)(ulong)(auStack_668[0] >> 1)) goto LAB_0d502176;
LAB_0d50218c:
        if ((bVar2 & 1) != 0) {
          ppuVar21 = (undefined **)param_3[2];
        }
        ppuVar19 = uStack_658;
        if (((ulong)auStack_668 & 1) == 0) {
          ppuVar19 = (undefined **)(auStack_668 + 1);
        }
        iVar10 = func_0x0eee3000(ppuVar21,ppuVar19);
        if (iVar10 != 0) goto LAB_0d5021af;
      }
      else {
        if (ppuVar19 == uStack_660) goto LAB_0d50218c;
LAB_0d502176:
        if ((bVar2 & 1) != 0) {
          ppuVar21 = (undefined **)param_3[2];
        }
LAB_0d5021af:
        if (uVar14 == 0) {
          ppuVar30 = (undefined **)(auStack_668 + 1);
        }
        func_0x0d506ac0(&UNK_014712ed,ppuVar30,ppuVar21);
        bVar7 = auStack_668[0];
      }
      if ((bVar7 & 1) != 0) {
        func_0x0412a280(uStack_658,(ulong)auStack_668 & 0xfffffffffffffffe);
      }
      goto LAB_0d501d56;
    }
    goto LAB_0d503b4a;
  }
  if (puVar15 != (undefined *)(ulong)(bVar2 >> 1)) goto LAB_0d501cf7;
LAB_0d501cd0:
  if (puVar15 == (undefined *)0xffffffffffffffff) goto LAB_0d503b40;
  ppuVar19 = ppuVar21;
  if ((bVar2 & 1) != 0) {
    ppuVar19 = (undefined **)param_3[2];
  }
  iVar10 = func_0x0eee3000(ppuVar19,pbVar26,puVar15);
  if (iVar10 != 0) goto LAB_0d501cf7;
LAB_0d501d56:
  if (((ulong)ppuStack_3a8 & 1) == 0) {
    ppuStack_2f8 = ppuStack_398;
    auStack_308 = (undefined1  [8])ppuStack_3a8;
    ppuStack_300 = ppuStack_3a0;
  }
  else {
    func_0x0412e5e0(auStack_308,ppuStack_398,ppuStack_3a0);
  }
  ppuVar19 = (undefined **)((ulong)auStack_308 >> 1 & 0x7f);
  ppuVar21 = (undefined **)(auStack_308 + 1);
  ppuVar30 = ppuVar21;
  if (((ulong)auStack_308 & 1) != 0) {
    ppuVar19 = ppuStack_300;
    ppuVar30 = ppuStack_2f8;
  }
  uVar16 = func_0x04883620(auStack_668,ppuVar30,ppuVar19);
  uVar14 = param_7[1];
  if (uVar14 != 0) {
    uVar23 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
    uVar23 = ((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar23 >> 0x38 < 2) {
      uVar25 = uVar14 - 1 & uVar16;
LAB_0d501e5c:
      plVar17 = *(long **)(*param_7 + uVar25 * 8);
    }
    else {
      uVar25 = uVar16;
      if (uVar16 < uVar14) goto LAB_0d501e5c;
      if ((uVar16 | uVar14) >> 0x20 == 0) {
        uVar25 = (uVar16 & 0xffffffff) % (uVar14 & 0xffffffff);
        plVar17 = *(long **)(*param_7 + uVar25 * 8);
      }
      else {
        uVar25 = uVar16 % uVar14;
        plVar17 = *(long **)(*param_7 + uVar25 * 8);
      }
    }
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      ppuVar19 = ppuStack_2f8;
      ppuVar30 = ppuStack_300;
      if (((ulong)auStack_308 & 1) == 0) {
        ppuVar19 = ppuVar21;
        ppuVar30 = (undefined **)((ulong)auStack_308 >> 1 & 0x7f);
      }
      ppuVar21 = ppuVar19;
      if ((byte)(uVar23 >> 0x38) < 2) {
        do {
          if (plVar17[1] == uVar16) {
            bVar2 = *(byte *)(plVar17 + 2);
            if ((bVar2 & 1) == 0) {
              ppuVar19 = (undefined **)(ulong)(bVar2 >> 1);
            }
            else {
              ppuVar19 = (undefined **)plVar17[3];
            }
            if (ppuVar19 == ppuVar30) {
              if ((bVar2 & 1) == 0) {
                lVar11 = (long)plVar17 + 0x11;
              }
              else {
                lVar11 = plVar17[4];
              }
              iVar10 = func_0x0eee3000(lVar11,ppuVar21,ppuVar30);
              if (iVar10 == 0) goto LAB_0d502056;
            }
          }
          else if ((plVar17[1] & uVar14 - 1) != uVar25) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar23 = plVar17[1];
          if (uVar23 == uVar16) {
            bVar2 = *(byte *)(plVar17 + 2);
            if ((bVar2 & 1) == 0) {
              ppuVar19 = (undefined **)(ulong)(bVar2 >> 1);
            }
            else {
              ppuVar19 = (undefined **)plVar17[3];
            }
            if (ppuVar19 == ppuVar30) {
              if ((bVar2 & 1) == 0) {
                lVar11 = (long)plVar17 + 0x11;
              }
              else {
                lVar11 = plVar17[4];
              }
              iVar10 = func_0x0eee3000(lVar11,ppuVar21,ppuVar30);
              if (iVar10 == 0) goto LAB_0d502056;
            }
          }
          else {
            if (uVar14 <= uVar23) {
              if ((uVar23 | uVar14) >> 0x20 == 0) {
                uVar23 = (uVar23 & 0xffffffff) % (uVar14 & 0xffffffff);
              }
              else {
                uVar23 = uVar23 % uVar14;
              }
            }
            if (uVar23 != uVar25) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  uStack_658 = (undefined **)0x0;
  pbStack_650 = (byte *)0x0;
  auStack_668 = (undefined1  [8])0x0;
  uStack_660 = (undefined **)0x0;
  plStack_648 = (long *)0x0;
  if (((ulong)uStack_3c8 & 1) == 0) {
    pbStack_650 = pbStack_3b8;
    uStack_660 = uStack_3c8;
    uStack_658 = ppuStack_3c0;
  }
  else {
    func_0x04885070(&uStack_660,pbStack_3b8,ppuStack_3c0);
  }
  auStack_668 = (undefined1  [8])ppuStack_3d0;
  func_0x0d510f60(&uStack_640,&uStack_4c0);
  puStack_1e8 = (undefined8 *)0x0;
  uStack_1e0 = 0;
  lStack_1f8 = 0;
  ppuStack_1f0 = (undefined **)0x0;
  fStack_1d8 = 1.0;
  func_0x0d511300(&lStack_1f8,auStack_668);
  if (((ulong)auStack_308 & 1) == 0) {
    ppuStack_298 = ppuStack_2f8;
    auStack_2a8 = auStack_308;
    ppuStack_2a0 = ppuStack_300;
  }
  else {
    func_0x0412e5e0(auStack_2a8,ppuStack_2f8,ppuStack_300);
  }
  puStack_280 = (undefined8 *)0x0;
  uStack_278 = 0;
  lStack_290 = 0;
  ppuStack_288 = (undefined **)0x0;
  afStack_270[0] = fStack_1d8;
  ppuVar30 = (undefined **)0x2;
  if (ppuStack_1f0 == (undefined **)0x1) {
LAB_0d50236b:
    func_0x0d511120(&lStack_290,ppuVar30);
    puVar5 = puStack_1e8;
  }
  else {
    if (((ulong)ppuStack_1f0 & (ulong)((long)ppuStack_1f0 - 1U)) != 0) {
      ppuVar30 = (undefined **)func_0x0412c3f0(ppuStack_1f0,2);
      bVar33 = ppuVar30 < ppuStack_288;
      ppuVar21 = ppuStack_288;
      if (ppuVar30 <= ppuStack_288) goto LAB_0d5024ed;
      goto LAB_0d50236b;
    }
    bVar33 = false;
    ppuVar30 = ppuStack_1f0;
    ppuVar21 = ppuStack_288;
    if (ppuStack_1f0 != (undefined **)0x0) goto LAB_0d50236b;
LAB_0d5024ed:
    ppuVar21 = ppuStack_288;
    puVar5 = puStack_1e8;
    if (bVar33) {
      fVar34 = (float)func_0x0eee3ab0((float)uStack_278 / afStack_270[0]);
      ppuVar19 = (undefined **)
                 ((long)(fVar34 - _DAT_01198778) & (long)fVar34 >> 0x3f | (long)fVar34);
      if ((ppuVar21 < (undefined **)0x3) ||
         (uVar14 = (long)ppuVar21 - ((ulong)ppuVar21 >> 1 & 0x5555555555555555),
         uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333),
         1 < (byte)(((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        ppuVar19 = (undefined **)func_0x0412c3f0(ppuVar19);
      }
      else if ((undefined **)0x1 < ppuVar19) {
        lVar11 = 0x3f;
        if ((byte *)((long)ppuVar19 + -1) != (byte *)0x0) {
          for (; (ulong)((long)ppuVar19 + -1) >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        ppuVar19 = (undefined **)(1L << (-((byte)lVar11 ^ 0x3f) & 0x3f));
      }
      if (ppuVar19 < ppuVar30) {
        ppuVar19 = ppuVar30;
      }
      ppuVar30 = ppuVar19;
      puVar5 = puStack_1e8;
      if (ppuVar19 < ppuVar21) goto LAB_0d50236b;
    }
  }
  for (; puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)*puVar5) {
    func_0x0d511300(&lStack_290,puVar5 + 2);
  }
  ppuVar19 = (undefined **)((ulong)auStack_2a8 >> 1 & 0x7f);
  ppuVar30 = (undefined **)(auStack_2a8 + 1);
  if (((ulong)auStack_2a8 & 1) != 0) {
    ppuVar19 = ppuStack_2a0;
    ppuVar30 = ppuStack_298;
  }
  param_3 = (undefined **)func_0x04883620(&uStack_348,ppuVar30,ppuVar19);
  ppuVar30 = (undefined **)param_7[1];
  if (ppuVar30 != (undefined **)0x0) {
    uVar14 = (long)ppuVar30 - ((ulong)ppuVar30 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
    uVar14 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar14 >> 0x38 < 2) {
      ppuVar21 = (undefined **)((ulong)((long)ppuVar30 - 1U) & (ulong)param_3);
      plVar17 = *(long **)(*param_7 + (long)ppuVar21 * 8);
    }
    else {
      ppuVar21 = param_3;
      if (ppuVar30 <= param_3) {
        if (((ulong)param_3 | (ulong)ppuVar30) >> 0x20 == 0) {
          ppuVar21 = (undefined **)(((ulong)param_3 & 0xffffffff) % ((ulong)ppuVar30 & 0xffffffff));
          plVar17 = *(long **)(*param_7 + (long)ppuVar21 * 8);
          goto joined_r0x0d502747;
        }
        ppuVar21 = (undefined **)((ulong)param_3 % (ulong)ppuVar30);
      }
      plVar17 = *(long **)(*param_7 + (long)ppuVar21 * 8);
    }
joined_r0x0d502747:
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      ppuVar19 = ppuStack_298;
      ppuVar27 = ppuStack_2a0;
      if (((ulong)auStack_2a8 & 1) == 0) {
        ppuVar19 = (undefined **)(auStack_2a8 + 1);
        ppuVar27 = (undefined **)((ulong)auStack_2a8 >> 1 & 0x7f);
      }
      if ((byte)(uVar14 >> 0x38) < 2) {
        do {
          if ((undefined **)plVar17[1] == param_3) {
            bVar2 = *(byte *)(plVar17 + 2);
            if ((bVar2 & 1) == 0) {
              ppuVar24 = (undefined **)(ulong)(bVar2 >> 1);
            }
            else {
              ppuVar24 = (undefined **)plVar17[3];
            }
            if (ppuVar24 == ppuVar27) {
              if ((bVar2 & 1) == 0) {
                lVar11 = (long)plVar17 + 0x11;
              }
              else {
                lVar11 = plVar17[4];
              }
              iVar10 = func_0x0eee3000(lVar11,ppuVar19,ppuVar27);
              lVar11 = lStack_290;
              puVar5 = puStack_280;
              if (iVar10 == 0) goto joined_r0x0d502c9d;
            }
          }
          else if ((undefined **)((ulong)plVar17[1] & (ulong)((long)ppuVar30 - 1U)) != ppuVar21)
          break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          ppuVar24 = (undefined **)plVar17[1];
          if (ppuVar24 == param_3) {
            bVar2 = *(byte *)(plVar17 + 2);
            if ((bVar2 & 1) == 0) {
              ppuVar24 = (undefined **)(ulong)(bVar2 >> 1);
            }
            else {
              ppuVar24 = (undefined **)plVar17[3];
            }
            if (ppuVar24 == ppuVar27) {
              if ((bVar2 & 1) == 0) {
                lVar11 = (long)plVar17 + 0x11;
              }
              else {
                lVar11 = plVar17[4];
              }
              iVar10 = func_0x0eee3000(lVar11,ppuVar19,ppuVar27);
              lVar11 = lStack_290;
              puVar5 = puStack_280;
              if (iVar10 == 0) goto joined_r0x0d502c9d;
            }
          }
          else {
            if (ppuVar30 <= ppuVar24) {
              if (((ulong)ppuVar24 | (ulong)ppuVar30) >> 0x20 == 0) {
                ppuVar24 = (undefined **)
                           (((ulong)ppuVar24 & 0xffffffff) % ((ulong)ppuVar30 & 0xffffffff));
              }
              else {
                ppuVar24 = (undefined **)((ulong)ppuVar24 % (ulong)ppuVar30);
              }
            }
            if (ppuVar24 != ppuVar21) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (plVar17 == (long *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  *plVar17 = 0;
  plVar17[1] = (long)param_3;
  if (((ulong)auStack_2a8 & 1) == 0) {
    plVar17[4] = (long)ppuStack_298;
    plVar17[2] = (long)auStack_2a8;
    plVar17[3] = (long)ppuStack_2a0;
  }
  else {
    func_0x0412e5e0(plVar17 + 2,ppuStack_298,ppuStack_2a0);
  }
  ppuVar19 = ppuStack_288;
  lVar11 = lStack_290;
  lStack_290 = 0;
  plVar17[5] = lVar11;
  plVar17[6] = (long)ppuStack_288;
  ppuStack_288 = (undefined **)0x0;
  plVar17[7] = (long)puStack_280;
  plVar17[8] = uStack_278;
  *(float *)(plVar17 + 9) = afStack_270[0];
  if (uStack_278 != 0) {
    ppuVar27 = (undefined **)puStack_280[1];
    if (((ulong)ppuVar19 & (long)ppuVar19 - 1U) == 0) {
      ppuVar27 = (undefined **)((ulong)ppuVar27 & (ulong)((long)ppuVar19 - 1U));
    }
    else if (ppuVar19 <= ppuVar27) {
      if (((ulong)ppuVar27 | (ulong)ppuVar19) >> 0x20 == 0) {
        ppuVar27 = (undefined **)(((ulong)ppuVar27 & 0xffffffff) % ((ulong)ppuVar19 & 0xffffffff));
      }
      else {
        ppuVar27 = (undefined **)((ulong)ppuVar27 % (ulong)ppuVar19);
      }
    }
    *(long **)(lVar11 + (long)ppuVar27 * 8) = plVar17 + 7;
    puStack_280 = (undefined8 *)0x0;
    uStack_278 = 0;
  }
  if ((long)ppuVar30 < 0) {
    fVar35 = (float)ppuVar30;
    fVar34 = *(float *)(param_7 + 4);
    if (ppuVar30 != (undefined **)0x0) goto LAB_0d5028c3;
LAB_0d50291e:
    uVar14 = 1;
    if ((undefined **)0x2 < ppuVar30) {
      uVar14 = (ulong)(((ulong)ppuVar30 & (ulong)((long)ppuVar30 - 1U)) != 0);
    }
    uVar14 = uVar14 | (long)ppuVar30 * 2;
    fVar34 = (float)func_0x0eee3ab0((float)(param_7[3] + 1) / fVar34);
    uVar16 = (long)(fVar34 - _DAT_01198778) & (long)fVar34 >> 0x3f | (long)fVar34;
    if (uVar16 < uVar14) {
      uVar16 = uVar14;
    }
    uVar14 = 2;
    if ((uVar16 == 1) || (uVar14 = uVar16, (uVar16 & uVar16 - 1) == 0)) {
      uVar16 = param_7[1];
      bVar33 = uVar14 < uVar16;
      if (uVar14 <= uVar16) goto LAB_0d502aa8;
LAB_0d502999:
      if (uVar14 >> 0x3d != 0) goto LAB_0d503b45;
      lVar11 = uVar14 * 8;
      lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar11);
      if (lVar12 == 0) {
        func_0x0eec74c0(lVar11,0);
      }
      lVar3 = *param_7;
      *param_7 = lVar12;
      if (lVar3 != 0) {
        func_0x0412a280(lVar3,param_7[1] << 3);
        lVar12 = *param_7;
      }
      param_7[1] = uVar14;
      func_0x0eee2dd0(lVar12,0,lVar11);
      plVar18 = (long *)param_7[2];
      if (plVar18 != (long *)0x0) {
        uVar23 = plVar18[1];
        uVar16 = uVar14 - 1;
        if ((uVar14 & uVar16) == 0) {
          *(long **)(lVar12 + (uVar23 & uVar16) * 8) = param_7 + 2;
          uVar14 = uVar23 & uVar16;
          while (plVar28 = plVar18, plVar18 = (long *)*plVar28, plVar18 != (long *)0x0) {
            uVar23 = plVar18[1] & uVar16;
            if (uVar23 != uVar14) {
              if (*(long *)(lVar12 + uVar23 * 8) == 0) {
                *(long **)(lVar12 + uVar23 * 8) = plVar28;
                uVar14 = uVar23;
              }
              else {
                *plVar28 = *plVar18;
                *plVar18 = **(undefined8 **)(lVar12 + uVar23 * 8);
                **(long **)(lVar12 + uVar23 * 8) = (long)plVar18;
                plVar18 = plVar28;
              }
            }
          }
        }
        else {
          if (uVar14 <= uVar23) {
            if ((uVar23 | uVar14) >> 0x20 == 0) {
              uVar23 = (uVar23 & 0xffffffff) % (uVar14 & 0xffffffff);
            }
            else {
              uVar23 = uVar23 % uVar14;
            }
          }
          *(long **)(lVar12 + uVar23 * 8) = param_7 + 2;
          plVar28 = (long *)*plVar18;
          while (plVar28 != (long *)0x0) {
            uVar16 = plVar28[1];
            if (uVar14 <= uVar16) {
              if ((uVar16 | uVar14) >> 0x20 == 0) {
                uVar16 = (uVar16 & 0xffffffff) % (uVar14 & 0xffffffff);
              }
              else {
                uVar16 = uVar16 % uVar14;
              }
            }
            if (uVar16 != uVar23) {
              if (*(long *)(lVar12 + uVar16 * 8) == 0) {
                *(long **)(lVar12 + uVar16 * 8) = plVar18;
                uVar23 = uVar16;
              }
              else {
                *plVar18 = *plVar28;
                *plVar28 = **(long **)(lVar12 + uVar16 * 8);
                **(undefined8 **)(lVar12 + uVar16 * 8) = plVar28;
                plVar28 = plVar18;
              }
            }
            plVar18 = plVar28;
            plVar28 = (long *)*plVar18;
          }
        }
      }
    }
    else {
      uVar14 = func_0x0412c3f0();
      uVar16 = param_7[1];
      bVar33 = uVar14 < uVar16;
      if (uVar16 < uVar14) goto LAB_0d502999;
LAB_0d502aa8:
      if (bVar33) {
        fVar34 = (float)func_0x0eee3ab0((float)(ulong)param_7[3] / *(float *)(param_7 + 4));
        uVar23 = (long)(fVar34 - _DAT_01198778) & (long)fVar34 >> 0x3f | (long)fVar34;
        if ((uVar16 < 3) ||
           (uVar25 = uVar16 - (uVar16 >> 1 & 0x5555555555555555),
           uVar25 = (uVar25 >> 2 & 0x3333333333333333) + (uVar25 & 0x3333333333333333),
           1 < (byte)(((uVar25 >> 4) + uVar25 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar23 = func_0x0412c3f0(uVar23);
        }
        else if (1 < uVar23) {
          lVar11 = 0x3f;
          if (uVar23 - 1 != 0) {
            for (; uVar23 - 1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          uVar23 = 1L << (-((byte)lVar11 ^ 0x3f) & 0x3f);
        }
        if (uVar23 < uVar14) {
          uVar23 = uVar14;
        }
        if (uVar23 < uVar16) {
          uVar14 = uVar23;
          if (uVar23 != 0) goto LAB_0d502999;
          lVar11 = *param_7;
          *param_7 = 0;
          if (lVar11 != 0) {
            func_0x0412a280(lVar11,param_7[1] << 3);
          }
          param_7[1] = 0;
        }
      }
    }
    ppuVar30 = (undefined **)param_7[1];
    if (((ulong)ppuVar30 & (long)ppuVar30 - 1U) != 0) {
      if (ppuVar30 <= param_3) {
        if (((ulong)param_3 | (ulong)ppuVar30) >> 0x20 == 0) {
          ppuVar21 = (undefined **)(((ulong)param_3 & 0xffffffff) % ((ulong)ppuVar30 & 0xffffffff));
          lVar11 = *param_7;
          plVar18 = *(long **)(lVar11 + (long)ppuVar21 * 8);
          goto joined_r0x0d502fc6;
        }
        param_3 = (undefined **)((ulong)param_3 % (ulong)ppuVar30);
      }
      lVar11 = *param_7;
      plVar18 = *(long **)(lVar11 + (long)param_3 * 8);
      ppuVar21 = param_3;
      goto joined_r0x0d502c7e;
    }
    ppuVar21 = (undefined **)((ulong)param_3 & (ulong)((long)ppuVar30 - 1U));
    lVar11 = *param_7;
    plVar18 = *(long **)(lVar11 + (long)ppuVar21 * 8);
joined_r0x0d502fc6:
    if (plVar18 != (long *)0x0) goto LAB_0d502c84;
LAB_0d5028e0:
    *plVar17 = param_7[2];
    param_7[2] = (long)plVar17;
    *(long **)(lVar11 + (long)ppuVar21 * 8) = param_7 + 2;
    if (*plVar17 != 0) {
      ppuVar21 = *(undefined ***)(*plVar17 + 8);
      if (((ulong)ppuVar30 & (long)ppuVar30 - 1U) == 0) {
        *(long **)(lVar11 + ((ulong)ppuVar21 & (ulong)((long)ppuVar30 - 1U)) * 8) = plVar17;
      }
      else {
        if (ppuVar30 <= ppuVar21) {
          if (((ulong)ppuVar21 | (ulong)ppuVar30) >> 0x20 == 0) {
            *(long **)(lVar11 + (((ulong)ppuVar21 & 0xffffffff) % ((ulong)ppuVar30 & 0xffffffff)) *
                                8) = plVar17;
            goto LAB_0d502c8e;
          }
          ppuVar21 = (undefined **)((ulong)ppuVar21 % (ulong)ppuVar30);
        }
        *(long **)(lVar11 + (long)ppuVar21 * 8) = plVar17;
      }
    }
  }
  else {
    fVar35 = (float)(long)ppuVar30;
    fVar34 = *(float *)(param_7 + 4);
    if (ppuVar30 == (undefined **)0x0) goto LAB_0d50291e;
LAB_0d5028c3:
    if (fVar35 * fVar34 < (float)(param_7[3] + 1)) goto LAB_0d50291e;
    lVar11 = *param_7;
    plVar18 = *(long **)(lVar11 + (long)ppuVar21 * 8);
joined_r0x0d502c7e:
    if (plVar18 == (long *)0x0) goto LAB_0d5028e0;
LAB_0d502c84:
    *plVar17 = *plVar18;
    *plVar18 = (long)plVar17;
  }
LAB_0d502c8e:
  param_7[3] = param_7[3] + 1;
  lVar11 = lStack_290;
  puVar5 = puStack_280;
joined_r0x0d502c9d:
  while (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar5;
    lStack_290 = lVar11;
    func_0x0d5119e0(puVar5 + 2);
    func_0x0412a280(puVar5,0x1b0);
    lVar11 = lStack_290;
    puVar5 = puVar4;
  }
  lStack_290 = 0;
  if (lVar11 != 0) {
    func_0x0412a280(lVar11,(long)ppuStack_288 << 3);
  }
  lVar11 = lStack_1f8;
  puVar5 = puStack_1e8;
  if (((ulong)auStack_2a8 & 1) != 0) {
    func_0x0412a280(ppuStack_298,(ulong)auStack_2a8 & 0xfffffffffffffffe);
    lVar11 = lStack_1f8;
    puVar5 = puStack_1e8;
  }
  while (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar5;
    lStack_1f8 = lVar11;
    func_0x0d5119e0(puVar5 + 2);
    func_0x0412a280(puVar5,0x1b0);
    lVar11 = lStack_1f8;
    puVar5 = puVar4;
  }
  lStack_1f8 = 0;
  if (lVar11 != 0) {
    func_0x0412a280(lVar11,(long)ppuStack_1f0 << 3);
  }
  func_0x049d2400(auStack_508);
  if ((uStack_528 & 1) != 0) {
    func_0x0412a280(puStack_518,uStack_528 & 0xfffffffffffffffe);
  }
  if ((bStack_548 & 1) != 0) {
    func_0x0412a280(puStack_538,
                    CONCAT62(uStack_546,CONCAT11(uStack_547,bStack_548)) & 0xfffffffffffffffe);
  }
  func_0x0535ca20(&uStack_640);
  if (((ulong)uStack_660 & 1) == 0) goto LAB_0d502de0;
  goto LAB_0d502dcd;
LAB_0d503ab5:
  plVar18[6] = (long)&ppuStack_3d0;
  plStack_3b0 = plVar28;
  goto LAB_0d502de0;
LAB_0d503ac7:
  plVar18[6] = (long)auStack_668;
  plStack_648 = plVar32;
  func_0x049d2400(auStack_508);
  goto joined_r0x0d503aeb;
LAB_0d502056:
  ppuVar30 = ppuStack_3d0;
  ppuVar21 = (undefined **)plVar17[6];
  if (ppuVar21 != (undefined **)0x0) {
    uVar14 = (long)ppuVar21 - ((ulong)ppuVar21 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
    uVar14 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar14 >> 0x38 < 2) {
      ppuVar19 = (undefined **)((ulong)((long)ppuVar21 - 1U) & (ulong)ppuStack_3d0);
    }
    else {
      ppuVar19 = ppuStack_3d0;
      if (ppuVar21 <= ppuStack_3d0) {
        if (((ulong)ppuStack_3d0 | (ulong)ppuVar21) >> 0x20 == 0) {
          ppuVar19 = (undefined **)
                     (((ulong)ppuStack_3d0 & 0xffffffff) % ((ulong)ppuVar21 & 0xffffffff));
        }
        else {
          ppuVar19 = (undefined **)((ulong)ppuStack_3d0 % (ulong)ppuVar21);
        }
      }
    }
    plVar18 = *(long **)(plVar17[5] + (long)ppuVar19 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if ((byte)(uVar14 >> 0x38) < 2) {
        do {
          if ((undefined **)plVar18[1] == ppuVar30) {
            if ((undefined **)plVar18[2] == ppuVar30) {
              plVar28 = plVar18 + 2;
              if (((undefined ***)plVar18[6] == &ppuStack_3d0) && (plStack_3b0 == plVar28))
              goto LAB_0d502de0;
              bVar2 = *(byte *)(plVar18 + 3);
              if ((bVar2 & 1) == 0) {
                ppuVar27 = (undefined **)(ulong)(bVar2 >> 1);
              }
              else {
                ppuVar27 = (undefined **)plVar18[4];
              }
              ppuVar24 = ppuStack_3c0;
              if (((ulong)uStack_3c8 & 1) == 0) {
                ppuVar24 = (undefined **)((ulong)uStack_3c8 >> 1 & 0x7f);
              }
              if (ppuVar27 == ppuVar24) {
                if ((bVar2 & 1) == 0) {
                  lVar11 = (long)plVar18 + 0x19;
                }
                else {
                  lVar11 = plVar18[5];
                }
                pbVar26 = (byte *)((long)&uStack_3c8 + 1);
                if (((ulong)uStack_3c8 & 1) != 0) {
                  pbVar26 = pbStack_3b8;
                }
                iVar10 = func_0x0eee3000(lVar11,pbVar26);
                if (iVar10 == 0) goto LAB_0d503ab5;
              }
            }
            plVar18[6] = 0;
          }
          else if ((undefined **)((ulong)plVar18[1] & (ulong)((long)ppuVar21 + -1)) != ppuVar19)
          break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          ppuVar27 = (undefined **)plVar18[1];
          if (ppuVar27 == ppuVar30) {
            if ((undefined **)plVar18[2] == ppuVar30) {
              plVar28 = plVar18 + 2;
              if (((undefined ***)plVar18[6] == &ppuStack_3d0) && (plStack_3b0 == plVar28))
              goto LAB_0d502de0;
              bVar2 = *(byte *)(plVar18 + 3);
              if ((bVar2 & 1) == 0) {
                ppuVar27 = (undefined **)(ulong)(bVar2 >> 1);
              }
              else {
                ppuVar27 = (undefined **)plVar18[4];
              }
              ppuVar24 = ppuStack_3c0;
              if (((ulong)uStack_3c8 & 1) == 0) {
                ppuVar24 = (undefined **)((ulong)uStack_3c8 >> 1 & 0x7f);
              }
              if (ppuVar27 == ppuVar24) {
                if ((bVar2 & 1) == 0) {
                  lVar11 = (long)plVar18 + 0x19;
                }
                else {
                  lVar11 = plVar18[5];
                }
                pbVar26 = (byte *)((long)&uStack_3c8 + 1);
                if (((ulong)uStack_3c8 & 1) != 0) {
                  pbVar26 = pbStack_3b8;
                }
                iVar10 = func_0x0eee3000(lVar11,pbVar26);
                if (iVar10 == 0) goto LAB_0d503ab5;
              }
            }
            plVar18[6] = 0;
          }
          else {
            if (ppuVar21 <= ppuVar27) {
              if (((ulong)ppuVar27 | (ulong)ppuVar21) >> 0x20 == 0) {
                ppuVar27 = (undefined **)
                           (((ulong)ppuVar27 & 0xffffffff) % ((ulong)ppuVar21 & 0xffffffff));
              }
              else {
                ppuVar27 = (undefined **)((ulong)ppuVar27 % (ulong)ppuVar21);
              }
            }
            if (ppuVar27 != ppuVar19) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  uStack_658 = (undefined **)0x0;
  pbStack_650 = (byte *)0x0;
  auStack_668 = (undefined1  [8])0x0;
  uStack_660 = (undefined **)0x0;
  plStack_648 = (long *)0x0;
  if (((ulong)uStack_3c8 & 1) == 0) {
    pbStack_650 = pbStack_3b8;
    uStack_660 = uStack_3c8;
    uStack_658 = ppuStack_3c0;
    auStack_668 = (undefined1  [8])ppuVar30;
  }
  else {
    func_0x04885070(&uStack_660,pbStack_3b8,ppuStack_3c0);
    auStack_668 = (undefined1  [8])ppuStack_3d0;
  }
  func_0x0d510f60(&uStack_640,&uStack_4c0);
  auVar8 = auStack_668;
  ppuVar21 = (undefined **)(plVar17 + 5);
  ppuVar30 = (undefined **)plVar17[6];
  ppuStack_678 = param_5;
  if (ppuVar30 != (undefined **)0x0) {
    uVar14 = (long)ppuVar30 - ((ulong)ppuVar30 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
    uVar14 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar14 >> 0x38 < 2) {
      ppuStack_678 = (undefined **)((ulong)((long)ppuVar30 - 1U) & (ulong)auStack_668);
    }
    else {
      ppuStack_678 = (undefined **)auStack_668;
      if (ppuVar30 <= (ulong)auStack_668) {
        if (((ulong)auStack_668 | (ulong)ppuVar30) >> 0x20 == 0) {
          ppuStack_678 = (undefined **)
                         (((ulong)auStack_668 & 0xffffffff) % ((ulong)ppuVar30 & 0xffffffff));
        }
        else {
          ppuStack_678 = (undefined **)((ulong)auStack_668 % (ulong)ppuVar30);
        }
      }
    }
    if ((*(long **)(*ppuVar21 + (long)ppuStack_678 * 8) != (long *)0x0) &&
       (plVar18 = (long *)**(long **)(*ppuVar21 + (long)ppuStack_678 * 8), plVar18 != (long *)0x0))
    {
      if (((ulong)uStack_660 & 1) == 0) {
        pbStack_670 = (byte *)((long)&uStack_660 + 1);
        ppuVar19 = (undefined **)((ulong)uStack_660 >> 1 & 0x7f);
      }
      else {
        pbStack_670 = pbStack_650;
        ppuVar19 = uStack_658;
      }
      plStack_2b8 = plStack_648;
      plVar28 = plStack_648;
      if ((byte)(uVar14 >> 0x38) < 2) {
        do {
          if ((undefined1  [8])plVar18[1] == auVar8) {
            if ((undefined1  [8])plVar18[2] == auVar8) {
              plVar32 = plVar18 + 2;
              if (plVar28 == plVar32 && (undefined1 *)plVar18[6] == auStack_668) goto LAB_0d5039d9;
              bVar2 = *(byte *)(plVar18 + 3);
              if ((bVar2 & 1) == 0) {
                ppuVar27 = (undefined **)(ulong)(bVar2 >> 1);
              }
              else {
                ppuVar27 = (undefined **)plVar18[4];
              }
              if (ppuVar27 == ppuVar19) {
                if ((bVar2 & 1) == 0) {
                  lVar11 = (long)plVar18 + 0x19;
                }
                else {
                  lVar11 = plVar18[5];
                }
                iVar10 = func_0x0eee3000(lVar11,pbStack_670,ppuVar19);
                plVar28 = plStack_2b8;
                if (iVar10 == 0) goto LAB_0d503ac7;
              }
            }
            plVar18[6] = 0;
          }
          else if ((undefined **)((ulong)plVar18[1] & (ulong)((long)ppuVar30 - 1U)) != ppuStack_678)
          break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          ppuVar27 = (undefined **)plVar18[1];
          if ((undefined1  [8])ppuVar27 == auVar8) {
            if ((undefined1  [8])plVar18[2] == auVar8) {
              plVar32 = plVar18 + 2;
              if (plVar28 == plVar32 && (undefined1 *)plVar18[6] == auStack_668) goto LAB_0d5039d9;
              bVar2 = *(byte *)(plVar18 + 3);
              if ((bVar2 & 1) == 0) {
                ppuVar27 = (undefined **)(ulong)(bVar2 >> 1);
              }
              else {
                ppuVar27 = (undefined **)plVar18[4];
              }
              if (ppuVar27 == ppuVar19) {
                if ((bVar2 & 1) == 0) {
                  lVar11 = (long)plVar18 + 0x19;
                }
                else {
                  lVar11 = plVar18[5];
                }
                iVar10 = func_0x0eee3000(lVar11,pbStack_670,ppuVar19);
                plVar28 = plStack_2b8;
                if (iVar10 == 0) goto LAB_0d503ac7;
              }
            }
            plVar18[6] = 0;
          }
          else {
            if (ppuVar30 <= ppuVar27) {
              if (((ulong)ppuVar27 | (ulong)ppuVar30) >> 0x20 == 0) {
                ppuVar27 = (undefined **)
                           (((ulong)ppuVar27 & 0xffffffff) % ((ulong)ppuVar30 & 0xffffffff));
              }
              else {
                ppuVar27 = (undefined **)((ulong)ppuVar27 % (ulong)ppuVar30);
              }
            }
            if (ppuVar27 != ppuStack_678) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  ppuVar19 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (ppuVar19 == (undefined **)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  ppuStack_298 = (undefined **)0x0;
  *ppuVar19 = (undefined *)0x0;
  ppuVar19[1] = (undefined *)auVar8;
  ppuVar19[2] = (undefined *)0x0;
  ppuVar19[3] = (undefined *)0x0;
  ppuVar19[4] = (undefined *)0x0;
  ppuVar19[5] = (undefined *)0x0;
  ppuVar19[6] = (undefined *)0x0;
  auStack_2a8 = (undefined1  [8])ppuVar19;
  ppuStack_2a0 = ppuVar21;
  if (ppuVar19 + 2 != (undefined **)auStack_668) {
    if (((ulong)uStack_660 & 1) == 0) {
      ppuVar19[5] = pbStack_650;
      *(undefined4 *)(ppuVar19 + 3) = (undefined4)uStack_660;
      *(undefined4 *)((long)ppuVar19 + 0x1c) = uStack_660._4_4_;
      *(undefined4 *)(ppuVar19 + 4) = (undefined4)uStack_658;
      *(undefined4 *)((long)ppuVar19 + 0x24) = uStack_658._4_4_;
    }
    else {
      func_0x04885070(ppuVar19 + 3,pbStack_650,uStack_658);
    }
  }
  ppuVar19[2] = (undefined *)auStack_668;
  func_0x0c85a6f0(ppuVar19 + 7,&uStack_640);
  *(byte *)(ppuVar19 + 0x22) = 0;
  *(byte *)(ppuVar19 + 0x23) = 0;
  ppuVar19[0x24] = (undefined *)0xffffffffffffffff;
  if (cStack_560 == '\x01') {
    *(byte *)(ppuVar19 + 0x23) = 1;
    ppuVar19[0x22] = puStack_568;
    ppuVar19[0x24] = puStack_558;
    cStack_560 = '\0';
  }
  puStack_558 = (undefined *)0xffffffffffffffff;
  ppuVar19[0x27] = (undefined *)0x0;
  ppuVar19[0x28] = (undefined *)0x0;
  ppuVar19[0x25] = (undefined *)0x0;
  ppuVar19[0x26] = (undefined *)0x0;
  ppuVar19[0x29] = (undefined *)0x0;
  ppuVar19[0x28] = puStack_538;
  ppuVar19[0x26] = (undefined *)CONCAT62(uStack_546,CONCAT11(uStack_547,bStack_548));
  ppuVar19[0x27] = puStack_540;
  bStack_548 = 0;
  uStack_547 = 0;
  ppuVar19[0x25] = puStack_550;
  ppuVar19[0x2c] = puStack_518;
  *(undefined4 *)(ppuVar19 + 0x2a) = (undefined4)uStack_528;
  *(undefined4 *)((long)ppuVar19 + 0x154) = uStack_528._4_4_;
  *(undefined4 *)(ppuVar19 + 0x2b) = (undefined4)uStack_520;
  *(undefined4 *)((long)ppuVar19 + 0x15c) = uStack_520._4_4_;
  uStack_528 = 0;
  uStack_520 = 0;
  puStack_518 = (undefined *)0x0;
  *(byte *)(ppuVar19 + 0x2d) = bStack_510;
  func_0x049d00c0(ppuVar19 + 0x2e,auStack_508);
  ppuVar19[0x2e] = &UNK_0ef516f8;
  ppuStack_298 = (undefined **)CONCAT71(ppuStack_298._1_7_,1);
  if ((ppuVar30 == (undefined **)0x0) ||
     ((float)ppuVar30 * *(float *)(plVar17 + 9) < (float)(plVar17[8] + 1))) {
    uVar14 = 1;
    if ((undefined **)0x2 < ppuVar30) {
      uVar14 = (ulong)(((ulong)ppuVar30 & (ulong)((long)ppuVar30 - 1U)) != 0);
    }
    uVar14 = uVar14 | (long)ppuVar30 * 2;
    fVar34 = (float)func_0x0eee3ab0((float)(plVar17[8] + 1) / *(float *)(plVar17 + 9));
    uVar16 = (long)(fVar34 - _DAT_01198778) & (long)fVar34 >> 0x3f | (long)fVar34;
    if (uVar16 < uVar14) {
      uVar16 = uVar14;
    }
    uVar14 = 2;
    if ((uVar16 != 1) && (uVar14 = uVar16, (uVar16 & uVar16 - 1) != 0)) {
      uVar14 = func_0x0412c3f0();
    }
    uVar16 = plVar17[6];
    if (uVar16 < uVar14) {
LAB_0d50387a:
      func_0x0d511120(ppuVar21,uVar14);
    }
    else if (uVar14 < uVar16) {
      fVar34 = (float)func_0x0eee3ab0((float)(ulong)plVar17[8] / *(float *)(plVar17 + 9));
      uVar23 = (long)(fVar34 - _DAT_01198778) & (long)fVar34 >> 0x3f | (long)fVar34;
      if ((uVar16 < 3) ||
         (uVar25 = uVar16 - (uVar16 >> 1 & 0x5555555555555555),
         uVar25 = (uVar25 >> 2 & 0x3333333333333333) + (uVar25 & 0x3333333333333333),
         1 < (byte)(((uVar25 >> 4) + uVar25 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        uVar23 = func_0x0412c3f0(uVar23);
      }
      else if (1 < uVar23) {
        lVar11 = 0x3f;
        if (uVar23 - 1 != 0) {
          for (; uVar23 - 1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar23 = 1L << (-((byte)lVar11 ^ 0x3f) & 0x3f);
      }
      if (uVar14 <= uVar23) {
        uVar14 = uVar23;
      }
      if (uVar14 < uVar16) goto LAB_0d50387a;
    }
    ppuVar30 = (undefined **)plVar17[6];
    if (((ulong)ppuVar30 & (long)ppuVar30 - 1U) == 0) {
      ppuStack_678 = (undefined **)((ulong)auVar8 & (ulong)((long)ppuVar30 - 1U));
    }
    else {
      ppuStack_678 = (undefined **)auVar8;
      if (ppuVar30 <= (ulong)auVar8) {
        if (((ulong)auVar8 | (ulong)ppuVar30) >> 0x20 == 0) {
          ppuStack_678 = (undefined **)
                         (((ulong)auVar8 & 0xffffffff) % ((ulong)ppuVar30 & 0xffffffff));
        }
        else {
          ppuStack_678 = (undefined **)((ulong)auVar8 % (ulong)ppuVar30);
        }
      }
    }
  }
  puVar15 = *ppuVar21;
  puVar5 = *(undefined8 **)(puVar15 + (long)ppuStack_678 * 8);
  if (puVar5 == (undefined8 *)0x0) {
    *ppuVar19 = (undefined *)plVar17[7];
    plVar17[7] = (long)ppuVar19;
    *(long **)(puVar15 + (long)ppuStack_678 * 8) = plVar17 + 7;
    if (*ppuVar19 != (undefined *)0x0) {
      ppuVar21 = *(undefined ***)(*ppuVar19 + 8);
      if (((ulong)ppuVar30 & (long)ppuVar30 - 1U) == 0) {
        *(undefined ***)(puVar15 + ((ulong)ppuVar21 & (ulong)((long)ppuVar30 - 1U)) * 8) = ppuVar19;
      }
      else {
        if (ppuVar30 <= ppuVar21) {
          if (((ulong)ppuVar21 | (ulong)ppuVar30) >> 0x20 == 0) {
            *(undefined ***)
             (puVar15 + (((ulong)ppuVar21 & 0xffffffff) % ((ulong)ppuVar30 & 0xffffffff)) * 8) =
                 ppuVar19;
            goto LAB_0d5039d5;
          }
          ppuVar21 = (undefined **)((ulong)ppuVar21 % (ulong)ppuVar30);
        }
        *(undefined ***)(puVar15 + (long)ppuVar21 * 8) = ppuVar19;
      }
    }
  }
  else {
    *ppuVar19 = (undefined *)*puVar5;
    *puVar5 = ppuVar19;
  }
LAB_0d5039d5:
  plVar17[8] = plVar17[8] + 1;
LAB_0d5039d9:
  func_0x049d2400(auStack_508);
joined_r0x0d503aeb:
  if ((uStack_528 & 1) != 0) {
    func_0x0412a280(puStack_518,uStack_528 & 0xfffffffffffffffe);
  }
  if ((bStack_548 & 1) != 0) {
    func_0x0412a280(puStack_538,
                    CONCAT62(uStack_546,CONCAT11(uStack_547,bStack_548)) & 0xfffffffffffffffe);
  }
  func_0x0535ca20(&uStack_640);
  if (((ulong)uStack_660 & 1) != 0) {
LAB_0d502dcd:
    func_0x0412a280(pbStack_650,(ulong)uStack_660 & 0xfffffffffffffffe);
  }
LAB_0d502de0:
  if (((ulong)auStack_308 & 1) != 0) {
    func_0x0412a280(ppuStack_2f8,(ulong)auStack_308 & 0xfffffffffffffffe);
  }
  func_0x049d2400(&puStack_388);
  if (((ulong)ppuStack_3a8 & 1) != 0) {
    func_0x0412a280(ppuStack_398,(ulong)ppuStack_3a8 & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_3c8 & 1) != 0) {
    func_0x0412a280(pbStack_3b8,(ulong)uStack_3c8 & 0xfffffffffffffffe);
  }
  func_0x0535ca20(&uStack_4c0);
LAB_0d502e77:
  func_0x05d85c50(auStack_80);
  if ((ulong)uStack_88 != 0xffffffff) {
    (**(code **)(&UNK_0f472ac8 + (ulong)uStack_88 * 8))(auStack_668,auStack_e8);
  }
  uStack_88 = 0xffffffff;
  if ((bStack_100 & 1) != 0) {
    func_0x0412a280(uStack_f0,CONCAT71(uStack_ff,bStack_100) & 0xfffffffffffffffe);
  }
  if ((uStack_108 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_108 & 0xff00ffffffffffff) - 8);
  }
  uStack_108 = 0;
  if ((uStack_110 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_110 & 0xff00ffffffffffff) - 8);
  }
  uStack_110 = 0;
  if ((uStack_120 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_120 & 0xff00ffffffffffff) - 8);
  }
  uStack_120 = 0;
  if ((uStack_128 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_128 & 0xff00ffffffffffff) - 8);
  }
  func_0x0eeb81b0(auStack_1a0);
  return;
}


