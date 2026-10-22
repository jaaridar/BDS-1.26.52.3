/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xaee3640 (ELF vaddr 0xade3640)
 * Label: caller-of-callee
 * Body:  [[0aee3640, 0aee4ae2] [0aee4af0, 0aee56db] [0aee56e0, 0aee58b3] [0aee58c0, 0aee5b25] [0aee5b30, 0aee5d0d]]
 * Ghidra: FUN_0aee3640
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0aee3640(byte *param_1,undefined8 param_2,long *param_3,code *param_4)

{
  ulong *puVar1;
  int iVar2;
  byte bVar3;
  undefined1 auVar4 [8];
  undefined1 auVar5 [8];
  long *plVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  long *plVar13;
  ulong *puVar14;
  long lVar15;
  code *pcVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  undefined8 *puVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 auStack_798 [8];
  undefined8 uStack_790;
  undefined8 uStack_788;
  uint uStack_780;
  undefined4 uStack_77c;
  uint uStack_76c;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 *puStack_758;
  long *plStack_748;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  uint uStack_738;
  undefined4 uStack_734;
  ulong uStack_730;
  byte bStack_728;
  undefined7 uStack_727;
  undefined1 uStack_720;
  undefined1 uStack_71f;
  undefined6 uStack_71e;
  undefined4 uStack_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined1 auStack_708 [8];
  undefined8 uStack_700;
  ulong *puStack_6f8;
  ulong uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  ulong *puStack_6d8;
  ulong *puStack_6d0;
  ulong *puStack_6c8;
  long *plStack_6c0;
  long *plStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  byte bStack_690;
  undefined7 uStack_68f;
  undefined1 uStack_688;
  undefined1 uStack_687;
  undefined8 uStack_680;
  undefined8 *puStack_678;
  undefined1 uStack_670;
  undefined7 uStack_66f;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined1 auStack_658 [8];
  undefined8 uStack_650;
  code *pcStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  code *pcStack_630;
  undefined1 auStack_628 [16];
  undefined *puStack_618;
  ulong uStack_610;
  code *pcStack_608;
  undefined *puStack_600;
  undefined8 uStack_5f8;
  code *pcStack_5f0;
  long *plStack_5e8;
  long lStack_5e0;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined8 *puStack_5d0;
  code *pcStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  code *pcStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  code *pcStack_588;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined8 uStack_570;
  code *pcStack_568;
  undefined1 auStack_558 [24];
  code *apcStack_540 [2];
  undefined1 auStack_530 [24];
  code *pcStack_518;
  ulong uStack_510;
  ulong uStack_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined1 auStack_4f0 [16];
  undefined1 auStack_4e0 [8];
  code *pcStack_4d8;
  code *pcStack_4c8;
  undefined1 auStack_4b0 [16];
  undefined1 auStack_4a0 [8];
  code *pcStack_498;
  code *pcStack_488;
  undefined1 auStack_468 [8];
  undefined1 auStack_460 [16];
  code *pcStack_450;
  code *pcStack_448;
  undefined1 auStack_418 [24];
  code *pcStack_400;
  long lStack_3d8;
  long lStack_3d0;
  code *pcStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  ulong uStack_3a8;
  long *plStack_3a0;
  code *pcStack_398;
  undefined1 auStack_390 [16];
  undefined8 uStack_380;
  undefined8 uStack_378;
  code *pcStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  undefined8 uStack_340;
  undefined8 *puStack_338;
  code *pcStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  ulong *puStack_298;
  ulong *puStack_290;
  ulong *puStack_288;
  long *plStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined1 auStack_250 [24];
  code *pcStack_238;
  undefined1 auStack_210 [24];
  code *pcStack_1f8;
  undefined1 auStack_1c8 [24];
  code *pcStack_1b0;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  ulong uStack_178;
  undefined *puStack_170;
  code *pcStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [24];
  code *pcStack_128;
  undefined1 auStack_100 [24];
  code *pcStack_e8;
  undefined1 auStack_c0 [24];
  code *pcStack_a8;
  undefined1 auStack_78 [24];
  code *pcStack_60;
  
  if (param_4 != (code *)0x0) {
    (*param_4)(auStack_658);
    func_0x0d84fd50(param_2,auStack_658);
    func_0x0651ffe0(auStack_658);
  }
  func_0x0aedd5e0(auStack_658);
  if ((DAT_0f6a9118 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6a9118), iVar12 != 0)) {
    func_0x0aee6580();
    FUN_0410844d(&DAT_0f6a9118);
  }
  uStack_178 = CONCAT44(uStack_178._4_4_,_DAT_0f6a9104);
  puStack_170 = &UNK_0aee64b0;
  pcStack_168 = (code *)&UNK_0aee6570;
  plStack_748 = param_3;
  func_0x05da1460(auStack_658);
  bVar3 = *param_1;
  puVar21 = (undefined8 *)(ulong)bVar3;
  if ((bVar3 & 1) == 0) {
    uVar17 = (ulong)(bVar3 >> 1);
  }
  else {
    uVar17 = *(ulong *)(param_1 + 8);
  }
  plVar13 = (long *)(uVar17 + 0x10);
  uStack_188 = param_2;
  if (plVar13 < (long *)0xfffffffffffffff8) {
    if (plVar13 < (long *)0x17) {
      uStack_650 = (long *)0x0;
      pcStack_648 = (code *)0x0;
      auStack_658._1_7_ = 0;
      auStack_658[0] = (char)plVar13 * '\x02';
      pcVar16 = (code *)(auStack_658 + 1);
      if (uVar17 != 0) {
        if ((bVar3 & 1) == 0) goto LAB_0aee37bd;
LAB_0aee375c:
        param_1 = *(byte **)(param_1 + 0x10);
        goto LAB_0aee37c0;
      }
    }
    else {
      uVar19 = 0x1a;
      if (((ulong)plVar13 | 7) != 0x17) {
        uVar19 = ((ulong)plVar13 | 7) + 1;
      }
      pcVar16 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19);
      if (pcVar16 == (code *)0x0) {
        func_0x0eec74c0(uVar19,0);
      }
      auStack_658 = (undefined1  [8])(uVar19 | 1);
      uStack_650 = plVar13;
      pcStack_648 = pcVar16;
      if ((bVar3 & 1) != 0) goto LAB_0aee375c;
LAB_0aee37bd:
      param_1 = param_1 + 1;
LAB_0aee37c0:
      func_0x0eee2ee0(pcVar16,param_1,uVar17);
    }
    *(undefined8 *)(pcVar16 + uVar17) = _DAT_0147b3d0;
    *(undefined8 *)(pcVar16 + uVar17 + 8) = _UNK_0147b3d8;
    pcVar16[uVar17 + 0x10] = (code)0x0;
    uStack_3a8 = 0;
    plStack_3a0 = (long *)0x0;
    lStack_3b8 = 0;
    lStack_3b0 = 0;
    pcStack_3c8 = (code *)0x0;
    lStack_3c0 = 0;
    lStack_3d8 = 0;
    lStack_3d0 = 0;
    pcStack_398 = (code *)0x0;
    func_0x048b1dc0(auStack_390);
    func_0x048b1dc0(&uStack_380);
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    uStack_320 = 0;
    uStack_318 = 0;
    pcStack_330 = (code *)0x0;
    uStack_328 = 0;
    uStack_340 = (undefined8 *)0x0;
    puStack_338 = (undefined8 *)0x0;
    uStack_350 = 0;
    lStack_348 = 0;
    uStack_360 = 0;
    uStack_358 = 0;
    pcStack_370 = (code *)0x0;
    uStack_368 = 0;
    if ((uStack_3a8 & 1) == 0) {
      if (((ulong)auStack_658 & 1) == 0) {
        pcStack_398 = pcStack_648;
        uStack_3a8 = (ulong)auStack_658;
        plStack_3a0 = uStack_650;
      }
      else {
        func_0x04885070(&uStack_3a8,pcStack_648,uStack_650);
      }
    }
    else {
      plVar13 = (long *)((ulong)auStack_658 >> 1 & 0x7f);
      pcVar16 = (code *)(auStack_658 + 1);
      if (((ulong)auStack_658 & 1) != 0) {
        plVar13 = uStack_650;
        pcVar16 = pcStack_648;
      }
      func_0x04885120(&uStack_3a8,pcVar16,plVar13);
    }
    if (((ulong)auStack_658 & 1) != 0) {
      func_0x0412a280(pcStack_648,(ulong)auStack_658 & 0xfffffffffffffffe);
    }
    bStack_690 = 0x10;
    uStack_68f = 0x6361626c6c6163;
    uStack_688 = 0x6b;
    uStack_687 = 0;
    func_0x0aee6240(&uStack_178,&bStack_690);
    uStack_740 = 0x74706f0e;
    uStack_73c = 0x736e6f69;
    uStack_738 = uStack_738 & 0xffffff00;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    func_0x048b1dc0(&uStack_2b0);
    puVar21 = &uStack_2a0;
    func_0x0652b590(puVar21);
    if ((uStack_2c8 & 1) == 0) {
      if ((uStack_740 & 1) == 0) {
        uStack_2b8 = uStack_730;
        uStack_2c8 = CONCAT44(uStack_73c,uStack_740);
        uStack_2c0 = CONCAT44(uStack_734,uStack_738);
      }
      else {
        func_0x04885070(&uStack_2c8,uStack_730,CONCAT44(uStack_734,uStack_738));
      }
    }
    else {
      bVar25 = (uStack_740 & 1) != 0;
      uVar17 = (long)&uStack_740 + 1;
      if (bVar25) {
        uVar17 = uStack_730;
      }
      uVar19 = (ulong)((byte)uStack_740 >> 1);
      if (bVar25) {
        uVar19 = CONCAT44(uStack_734,uStack_738);
      }
      func_0x04885120(&uStack_2c8,uVar17,uVar19);
    }
    param_1 = (byte *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    if (param_1 == (byte *)0x0) {
      func_0x048b0de0(auStack_658,auStack_708);
      _DAT_0f54fd90 = auStack_658._0_4_;
      uRam000000000f54fd94 = auStack_658._4_4_;
      uVar10 = (undefined4)uStack_650;
      uVar7 = uStack_650._4_4_;
      auStack_658 = (undefined1  [8])0x0;
      uStack_650 = (long *)0x0;
      plVar13 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
      _DAT_0f54fd98 = uVar10;
      uRam000000000f54fd9c = uVar7;
      if (plVar13 != (long *)0x0) {
        LOCK();
        plVar22 = plVar13 + 1;
        lVar15 = *plVar22;
        *plVar22 = *plVar22 + -1;
        UNLOCK();
        if (lVar15 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          func_0x0412c2d0(plVar13);
        }
      }
      plVar13 = uStack_650;
      if (uStack_650 != (long *)0x0) {
        LOCK();
        plVar22 = uStack_650 + 1;
        lVar15 = *plVar22;
        *plVar22 = *plVar22 + -1;
        UNLOCK();
        if (lVar15 == 0) {
          (**(code **)(*uStack_650 + 0x10))(uStack_650);
          func_0x0412c2d0(plVar13);
        }
      }
      param_1 = (byte *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    }
    if (DAT_0f6a92f0 != '\0') goto LAB_0aee3acf;
  }
  else {
    func_0x04882e30();
  }
  iVar12 = func_0x04108328(&DAT_0f6a92f0);
  if (iVar12 != 0) {
    func_0x0aeea0e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6a9270,0xf53dab8);
    FUN_0410844d(&DAT_0f6a92f0);
  }
LAB_0aee3acf:
  plVar13 = (long *)(*(long *)param_1 +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 8) - *(long *)param_1) >> 3) - 1U &
                           *(uint *)(_DAT_0f6a9270 + 4)) * 8);
  do {
    lVar15 = *plVar13;
    if (lVar15 == -1) goto LAB_0aee3b20;
    plVar13 = (long *)(*(long *)(param_1 + 0x18) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x18) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f6a9270 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x20)) {
LAB_0aee3b20:
    uStack_2b0 = &DAT_0f6a9270;
  }
  else {
    uStack_2b0 = (undefined *)plVar13[2];
  }
  auStack_658 = (undefined1  [8])((ulong)auStack_658 & 0xffffffffffffff00);
  uStack_610 = uStack_610 & 0xffffffffffffff00;
  uStack_2a8 = param_1;
  if (pcStack_278 != (code *)0x0) {
    (*pcStack_278)(&puStack_290);
  }
  plStack_280 = (long *)&UNK_0aeea4d0;
  pcStack_278 = (code *)&UNK_0aeea610;
  uStack_270 = CONCAT35(uStack_270._5_3_,0x15683e2c8);
  puStack_290 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puStack_290 == (ulong *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  puVar9 = puStack_258;
  *(undefined1 *)puStack_290 = 0;
  *(undefined1 *)(puStack_290 + 9) = 0;
  puStack_258 = &UNK_0aeea320;
  if (puVar9 != &UNK_0aeea320) {
    uStack_260 = 0;
  }
  puStack_6f8 = (ulong *)0x0;
  uStack_6e0 = 0;
  uStack_6a8 = 0;
  uStack_6a0 = 0;
  plStack_6b8 = (long *)0x0;
  uStack_6b0 = 0;
  puStack_6c8 = (ulong *)0x0;
  plStack_6c0 = (long *)0x0;
  puStack_6d8 = (ulong *)0x0;
  puStack_6d0 = (ulong *)0x0;
  auStack_708 = (undefined1  [8])0x0;
  uStack_700 = (undefined1  [8])0x0;
  uStack_6f0 = 0x6972637362757312;
  uStack_6e8 = 0x6562;
  func_0x06523ef0(auStack_658,auStack_150);
  func_0x06523ef0(apcStack_540,puVar21);
  uStack_768 = (undefined8 *)0x0;
  uStack_760 = (undefined8 *)0x0;
  puStack_758 = (undefined8 *)0x0;
  bStack_728 = (byte)&uStack_768;
  uStack_727 = (undefined7)((ulong)&uStack_768 >> 8);
  uStack_720 = 0;
  puStack_678 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x230);
  if (puStack_678 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x230,0);
  }
  puStack_758 = puStack_678 + 0x46;
  uStack_790 = (undefined1  [8])&puStack_180;
  uStack_788 = &puStack_678;
  uStack_780 = uStack_780 & 0xffffff00;
  auStack_798 = (undefined1  [8])&uStack_768;
  uStack_768 = puStack_678;
  uStack_760 = puStack_678;
  puStack_180 = puStack_678;
  func_0x06523ef0(puStack_678,auStack_658);
  puStack_678 = puStack_678 + 0x23;
  func_0x06523ef0(puStack_678,apcStack_540);
  uStack_760 = puStack_678 + 0x23;
  if (pcStack_450 != (code *)0x0) {
    (*pcStack_450)(auStack_468);
  }
  if (pcStack_498 != (code *)0x0) {
    (*pcStack_498)(auStack_4b0);
  }
  if (pcStack_4d8 != (code *)0x0) {
    (*pcStack_4d8)(auStack_4f0);
  }
  if (pcStack_518 != (code *)0x0) {
    (*pcStack_518)(auStack_530);
  }
  if (pcStack_568 != (code *)0x0) {
    (*pcStack_568)(&uStack_580);
  }
  if (pcStack_5b0 != (code *)0x0) {
    (*pcStack_5b0)(&pcStack_5c8);
  }
  if (pcStack_5f0 != (code *)0x0) {
    (*pcStack_5f0)(&pcStack_608);
  }
  if (pcStack_630 != (code *)0x0) {
    (*pcStack_630)(&pcStack_648);
  }
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (plVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f2785b8;
  uVar10 = func_0x0d858500(&uStack_768);
  plVar22 = plVar13 + 3;
  *(undefined1 *)(plVar13 + 4) = 2;
  *(undefined4 *)((long)plVar13 + 0x24) = uVar10;
  *(undefined4 *)(plVar13 + 5) = 0;
  plVar13[6] = 0;
  plVar13[7] = 0;
  plVar13[8] = 0;
  plVar13[3] = (long)&UNK_0f278608;
  *(undefined4 *)(plVar13 + 9) = (undefined4)uStack_768;
  *(undefined4 *)((long)plVar13 + 0x4c) = uStack_768._4_4_;
  *(undefined4 *)(plVar13 + 10) = (undefined4)uStack_760;
  *(undefined4 *)((long)plVar13 + 0x54) = uStack_760._4_4_;
  plVar13[0xb] = (long)puStack_758;
  uStack_768 = (undefined8 *)0x0;
  uStack_760 = (undefined8 *)0x0;
  puStack_758 = (undefined8 *)0x0;
  uVar10 = func_0x0d858620(plVar22);
  plVar6 = plStack_6b8;
  *(undefined4 *)(plVar13 + 5) = uVar10;
  plStack_6c0 = plVar22;
  if (plStack_6b8 != (long *)0x0) {
    LOCK();
    plVar22 = plStack_6b8 + 1;
    lVar15 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      lVar15 = *plStack_6b8;
      plStack_6b8 = plVar13;
      (**(code **)(lVar15 + 0x10))(plVar6);
      func_0x0412c2d0(plVar6);
      plVar13 = plStack_6b8;
    }
  }
  plStack_6b8 = plVar13;
  _auStack_658 = func_0x0aeea750();
  _auStack_798 = func_0x0ab12220();
  func_0x0d850780(auStack_658,auStack_798);
  lVar15 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar15 == 0) {
    func_0x048b0de0(auStack_658,auStack_798);
    _DAT_0f54fd90 = auStack_658._0_4_;
    uRam000000000f54fd94 = auStack_658._4_4_;
    uVar10 = (undefined4)uStack_650;
    uVar7 = uStack_650._4_4_;
    auStack_658 = (undefined1  [8])0x0;
    uStack_650 = (long *)0x0;
    plVar13 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar10;
    uRam000000000f54fd9c = uVar7;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar22 = plVar13 + 1;
      lVar15 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = uStack_650;
    if (uStack_650 != (long *)0x0) {
      LOCK();
      plVar22 = uStack_650 + 1;
      lVar15 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_650 + 0x10))(uStack_650);
        func_0x0412c2d0(plVar13);
      }
    }
    lVar15 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (DAT_0f6a9310 == '\0') {
    iVar12 = func_0x04108328(&DAT_0f6a9310);
    if (iVar12 != 0) {
      func_0x0aeea210();
      FUN_0410844d(&DAT_0f6a9310);
    }
  }
  if (DAT_0f6a9310 == '\0') {
    iVar12 = func_0x04108328(&DAT_0f6a9310);
    if (iVar12 != 0) {
      func_0x0aeea210();
      FUN_0410844d(&DAT_0f6a9310);
    }
  }
  auStack_658 = (undefined1  [8])&DAT_0f6a92f8;
  uStack_650 = (long *)CONCAT44(uStack_650._4_4_,_DAT_0f6a92fc);
  pcStack_648 = (code *)0x0;
  uStack_640 = (undefined *)CONCAT44(uStack_640._4_4_,0x80);
  uStack_638 = (long *)0x50;
  pcStack_630 = (code *)&UNK_0aeea020;
  auStack_628._0_8_ = &UNK_0aeea290;
  auStack_628._8_8_ = 0;
  puStack_618 = &UNK_0aeea6b0;
  uStack_610 = 1;
  pcStack_608 = (code *)&SUB_048b5640;
  puStack_600 = &UNK_0aeea740;
  uStack_5f8 = (ulong)uStack_5f8._4_4_ << 0x20;
  pcStack_5f0 = (code *)0x0;
  plStack_5e8 = (long *)0x0;
  lStack_5e0 = 0;
  func_0x048aee30(&puStack_678,lVar15,auStack_658,0x5683e2c8);
  lVar15 = lStack_5e0;
  lStack_5e0 = 0;
  if (lVar15 != 0) {
    func_0x048ae940(lVar15);
    func_0x0412a280(lVar15,0x78);
  }
  plVar13 = plStack_5e8;
  if (plStack_5e8 != (long *)0x0) {
    LOCK();
    plVar22 = plStack_5e8 + 1;
    lVar15 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_5e8 + 0x10))(plStack_5e8);
      func_0x0412c2d0(plVar13);
    }
  }
  if (DAT_0f6a9340 == '\0') {
    iVar12 = func_0x04108328(&DAT_0f6a9340);
    if (iVar12 != 0) {
      func_0x0aeeb060();
      FUN_0410844d(&DAT_0f6a9340);
    }
  }
  auStack_658._0_4_ = _DAT_0f6a932c;
  uStack_650 = (long *)0x1;
  pcStack_648 = (code *)&UNK_0aeea8c0;
  uStack_640 = &UNK_0aeea8d0;
  func_0x065abe60(&puStack_678);
  uStack_718 = uStack_668;
  uStack_714 = uStack_664;
  uStack_710 = uStack_660;
  uStack_70c = uStack_65c;
  bStack_728 = (byte)puStack_678;
  uStack_727 = (undefined7)((ulong)puStack_678 >> 8);
  uStack_720 = uStack_670;
  uStack_71f = (undefined1)uStack_66f;
  uStack_71e = (undefined6)((uint7)uStack_66f >> 8);
  auStack_658._0_4_ = 0xf55160ec;
  uStack_650 = (long *)0x0;
  pcStack_648 = (code *)((ulong)pcStack_648 & 0xffffffff00000000);
  uStack_640 = (undefined *)0x0;
  uStack_638 = (long *)&UNK_065b4120;
  pcStack_630 = (code *)&SUB_048b06d0;
  auStack_628._0_8_ = &UNK_0aeeb380;
  auStack_628._8_8_ = 0;
  puStack_618 = (undefined *)((ulong)puStack_618 & 0xffffffff00000000);
  uStack_610 = 0;
  pcStack_608 = (code *)0x0;
  func_0x049057f0(&bStack_728,auStack_658);
  func_0x048aea50(auStack_658);
  auStack_798 = (undefined1  [8])CONCAT71(uStack_727,bStack_728);
  uStack_790 = (undefined1  [8])CONCAT62(uStack_71e,CONCAT11(uStack_71f,uStack_720));
  uStack_788 = (undefined8 **)CONCAT44(uStack_714,uStack_718);
  uStack_780 = uStack_710;
  uStack_77c = uStack_70c;
  auStack_658._0_4_ = 0xf55160ec;
  uStack_650 = (long *)0x0;
  pcStack_648 = (code *)CONCAT44(pcStack_648._4_4_,1);
  uStack_640 = (undefined *)0x0;
  uStack_638 = (long *)&UNK_065b4120;
  pcStack_630 = (code *)&SUB_048b06d0;
  auStack_628._0_8_ = &UNK_0aeeb630;
  auStack_628._8_8_ = 0;
  puStack_618 = (undefined *)((ulong)puStack_618 & 0xffffffff00000000);
  uStack_610 = 0;
  pcStack_608 = (code *)0x0;
  func_0x049057f0(auStack_798,auStack_658);
  func_0x048aea50(auStack_658);
  pcStack_648 = pcStack_168;
  auStack_658 = (undefined1  [8])uStack_178;
  uStack_650 = (long *)puStack_170;
  uStack_178 = 0;
  puStack_170 = (undefined *)0x0;
  pcStack_168 = (code *)0x0;
  uStack_640 = (undefined *)CONCAT44(uStack_15c,uStack_160);
  uStack_638 = (long *)CONCAT44(uStack_154,uStack_158);
  func_0x065281f0(&pcStack_630,auStack_150);
  uStack_508 = uStack_2b8;
  pcStack_518 = (code *)uStack_2c8;
  uStack_510 = uStack_2c0;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_500 = (undefined4)uStack_2b0;
  uStack_4fc = uStack_2b0._4_4_;
  uStack_4f8 = (undefined4)uStack_2a8;
  uStack_4f4 = uStack_2a8._4_4_;
  func_0x065281f0(auStack_4f0,puVar21);
  auStack_798 = (undefined1  [8])0x0;
  uStack_790 = (undefined1  [8])0x0;
  uStack_788 = (undefined8 **)0x0;
  bStack_728 = (byte)auStack_798;
  uStack_727 = (undefined7)((ulong)auStack_798 >> 8);
  uStack_720 = 0;
  puVar14 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x280);
  if (puVar14 == (ulong *)0x0) {
    func_0x0eec74c0(0x280,0);
  }
  puVar1 = puVar14 + 0x50;
  auStack_798 = (undefined1  [8])puVar14;
  uStack_790 = (undefined1  [8])puVar14;
  uStack_788 = (undefined8 **)puVar1;
  if (((ulong)auStack_658 & 1) == 0) {
    puVar14[2] = (ulong)pcStack_648;
    *puVar14 = (ulong)auStack_658;
    puVar14[1] = (ulong)uStack_650;
  }
  else {
    func_0x0412e5e0(puVar14,pcStack_648,uStack_650);
  }
  *(undefined4 *)(puVar14 + 3) = (undefined4)uStack_640;
  *(undefined4 *)((long)puVar14 + 0x1c) = uStack_640._4_4_;
  *(undefined4 *)(puVar14 + 4) = (undefined4)uStack_638;
  *(undefined4 *)((long)puVar14 + 0x24) = uStack_638._4_4_;
  func_0x06523ef0(puVar14 + 5,&pcStack_630);
  if (((ulong)pcStack_518 & 1) == 0) {
    puVar14[0x2a] = uStack_508;
    puVar14[0x28] = (ulong)pcStack_518;
    puVar14[0x29] = uStack_510;
  }
  else {
    func_0x0412e5e0(puVar14 + 0x28,uStack_508,uStack_510);
  }
  *(undefined4 *)(puVar14 + 0x2b) = uStack_500;
  *(undefined4 *)((long)puVar14 + 0x15c) = uStack_4fc;
  *(undefined4 *)(puVar14 + 0x2c) = uStack_4f8;
  *(undefined4 *)((long)puVar14 + 0x164) = uStack_4f4;
  func_0x06523ef0(puVar14 + 0x2d,auStack_4f0);
  uStack_790 = (undefined1  [8])puVar1;
  if (pcStack_400 != (code *)0x0) {
    (*pcStack_400)(auStack_418);
  }
  if (pcStack_448 != (code *)0x0) {
    (*pcStack_448)(auStack_460);
  }
  if (pcStack_488 != (code *)0x0) {
    (*pcStack_488)(auStack_4a0);
  }
  if (pcStack_4c8 != (code *)0x0) {
    (*pcStack_4c8)(auStack_4e0);
  }
  if (((ulong)pcStack_518 & 1) != 0) {
    func_0x0412a280(uStack_508,(ulong)pcStack_518 & 0xfffffffffffffffe);
  }
  if (apcStack_540[0] != (code *)0x0) {
    (*apcStack_540[0])(auStack_558);
  }
  if (pcStack_588 != (code *)0x0) {
    (*pcStack_588)(&uStack_5a0);
  }
  if (pcStack_5c8 != (code *)0x0) {
    (*pcStack_5c8)(&lStack_5e0);
  }
  if (pcStack_608 != (code *)0x0) {
    (*pcStack_608)(auStack_628 + 8);
  }
  if (((ulong)auStack_658 & 1) != 0) {
    func_0x0412a280(pcStack_648,(ulong)auStack_658 & 0xfffffffffffffffe);
  }
  uVar11 = (**(code **)(*plStack_6c0 + 0x20))();
  uVar19 = ((long)uStack_790 - (long)auStack_798 >> 6) * -0x3333333333333333;
  uVar17 = 0;
  if ((uVar11 != 0) && ((uint)uVar19 != 0)) {
    uVar20 = 0;
    uVar17 = 0;
    uStack_76c = uVar11;
    do {
      auVar26 = (**(code **)(*plStack_6c0 + 0x28))(plStack_6c0,uVar20);
      uVar18 = auVar26._8_8_;
      lVar15 = auVar26._0_8_;
      auVar26 = func_0x06527d70();
      if (auVar26._8_8_ == uVar18) {
        if (auVar26._0_8_ == 0) {
          lVar24 = func_0x048aead0(auVar26._8_8_);
          iVar12 = *(int *)(lVar24 + 8);
          if (lVar15 != 0) goto LAB_0aee4651;
LAB_0aee4670:
          lVar24 = func_0x048aead0(uVar18);
          if (iVar12 != *(int *)(lVar24 + 8)) goto LAB_0aee4690;
        }
        else {
          iVar12 = *(int *)(auVar26._0_8_ + 8);
          if (lVar15 == 0) goto LAB_0aee4670;
LAB_0aee4651:
          if (iVar12 != *(int *)(lVar15 + 8)) goto LAB_0aee4690;
        }
      }
      else {
LAB_0aee4690:
        auVar26 = func_0x06527e30();
        if (auVar26._8_8_ == uVar18) {
          if (auVar26._0_8_ == 0) {
            lVar24 = func_0x048aead0(auVar26._8_8_);
            iVar12 = *(int *)(lVar24 + 8);
          }
          else {
            iVar12 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar15 == 0) {
            lVar24 = func_0x048aead0(uVar18);
            iVar2 = *(int *)(lVar24 + 8);
          }
          else {
            iVar2 = *(int *)(lVar15 + 8);
          }
          if (iVar12 == iVar2) goto LAB_0aee4889;
        }
        auVar26 = func_0x06527ef0();
        if (auVar26._8_8_ == uVar18) {
          if (auVar26._0_8_ == 0) {
            lVar24 = func_0x048aead0(auVar26._8_8_);
            iVar12 = *(int *)(lVar24 + 8);
          }
          else {
            iVar12 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar15 == 0) {
            lVar24 = func_0x048aead0(uVar18);
            iVar2 = *(int *)(lVar24 + 8);
          }
          else {
            iVar2 = *(int *)(lVar15 + 8);
          }
          if (iVar12 == iVar2) goto LAB_0aee4889;
        }
        auVar26 = func_0x06527fb0();
        if (auVar26._8_8_ == uVar18) {
          if (auVar26._0_8_ == 0) {
            lVar24 = func_0x048aead0(auVar26._8_8_);
            iVar12 = *(int *)(lVar24 + 8);
          }
          else {
            iVar12 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar15 == 0) {
            lVar24 = func_0x048aead0(uVar18);
            iVar2 = *(int *)(lVar24 + 8);
          }
          else {
            iVar2 = *(int *)(lVar15 + 8);
          }
          if (iVar12 == iVar2) goto LAB_0aee4889;
        }
        auVar26 = func_0x06528070();
        if (auVar26._8_8_ == uVar18) {
          if (auVar26._0_8_ == 0) {
            lVar24 = func_0x048aead0(auVar26._8_8_);
            iVar12 = *(int *)(lVar24 + 8);
          }
          else {
            iVar12 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar15 == 0) {
            lVar24 = func_0x048aead0(uVar18);
            iVar2 = *(int *)(lVar24 + 8);
          }
          else {
            iVar2 = *(int *)(lVar15 + 8);
          }
          if (iVar12 == iVar2) goto LAB_0aee4889;
        }
        auVar26 = func_0x06528130();
        if (auVar26._8_8_ == uVar18) {
          if (auVar26._0_8_ == 0) {
            lVar24 = func_0x048aead0(auVar26._8_8_);
            iVar12 = *(int *)(lVar24 + 8);
          }
          else {
            iVar12 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar15 == 0) {
            lVar24 = func_0x048aead0(uVar18);
            iVar2 = *(int *)(lVar24 + 8);
          }
          else {
            iVar2 = *(int *)(lVar15 + 8);
          }
          if (iVar12 == iVar2) goto LAB_0aee4889;
        }
        auVar4 = auStack_798;
        puVar14 = (ulong *)uStack_790;
        plVar13 = plStack_748;
        if (*(ulong *)((long)auStack_798 + (uVar17 * 0x28 + 4) * 8) != uVar18)
        goto joined_r0x0aee4a8e;
        if (*(ulong *)((long)auStack_798 + (uVar17 * 0x28 + 3) * 8) == 0) {
          lVar24 = func_0x048aead0();
          iVar12 = *(int *)(lVar24 + 8);
          if (lVar15 != 0) goto LAB_0aee4856;
LAB_0aee4870:
          lVar15 = func_0x048aead0(uVar18);
          if (iVar12 != *(int *)(lVar15 + 8)) goto LAB_0aee4a7e;
        }
        else {
          iVar12 = *(int *)(*(ulong *)((long)auStack_798 + (uVar17 * 0x28 + 3) * 8) + 8);
          if (lVar15 == 0) goto LAB_0aee4870;
LAB_0aee4856:
          if (iVar12 != *(int *)(lVar15 + 8)) goto LAB_0aee4a7e;
        }
        uVar17 = (ulong)((int)uVar17 + 1);
      }
LAB_0aee4889:
    } while (((uint)uVar17 < (uint)uVar19) && (uVar20 = uVar20 + 1, uVar20 < uStack_76c));
    uVar19 = ((long)uStack_790 - (long)auStack_798 >> 6) * -0x3333333333333333;
  }
  puVar14 = puStack_6d8;
  plVar22 = plStack_748;
  if (uVar19 == uVar17) {
    puVar1 = puStack_6d0;
    if (puStack_6d8 != (ulong *)0x0) {
      while (puVar14 != puVar1) {
        func_0x05fe8450(puVar1 + -0x28);
        puVar1 = puVar1 + -0x28;
      }
      puStack_6d0 = puVar14;
      func_0x0412a280(puStack_6d8,(long)puStack_6c8 - (long)puStack_6d8);
    }
    puStack_6c8 = (ulong *)uStack_788;
    if (uStack_340 < puStack_338) {
      *uStack_340 = 0;
      uStack_340[1] = 0;
      uStack_340[2] = 0;
      *uStack_340 = auStack_708;
      uStack_340[1] = uStack_700;
      uStack_340[2] = puStack_6f8;
      auStack_708 = (undefined1  [8])0x0;
      uStack_700 = (undefined1  [8])0x0;
      puStack_6f8 = (ulong *)0x0;
      uStack_340[5] = uStack_6e0;
      uStack_340[3] = uStack_6f0;
      uStack_340[4] = uStack_6e8;
      uStack_6f0 = 0;
      uStack_6e8 = 0;
      uStack_6e0 = 0;
      uStack_340[6] = 0;
      uStack_340[7] = 0;
      uStack_340[8] = 0;
      uStack_340[6] = auStack_798;
      uStack_340[7] = uStack_790;
      uStack_340[8] = uStack_788;
      puStack_6d8 = (ulong *)0x0;
      puStack_6d0 = (ulong *)0x0;
      puStack_6c8 = (ulong *)0x0;
      uStack_340[9] = plStack_6c0;
      uStack_340[10] = plStack_6b8;
      plStack_6c0 = (long *)0x0;
      plStack_6b8 = (undefined8 *)0x0;
      uStack_340[0xb] = 0;
      uStack_340[0xc] = 0;
      uStack_340[0xd] = 0;
      *(undefined4 *)(uStack_340 + 0xb) = (undefined4)uStack_6b0;
      *(undefined4 *)((long)uStack_340 + 0x5c) = uStack_6b0._4_4_;
      *(undefined4 *)(uStack_340 + 0xc) = (undefined4)uStack_6a8;
      *(undefined4 *)((long)uStack_340 + 100) = uStack_6a8._4_4_;
      uStack_340[0xd] = uStack_6a0;
      uStack_6b0 = 0;
      uStack_6a8 = 0;
      uStack_6a0 = 0;
      uStack_340 = uStack_340 + 0xe;
    }
    else {
      puStack_6d8 = (ulong *)auStack_798;
      puStack_6d0 = (ulong *)uStack_790;
      uStack_340 = (undefined8 *)func_0x0652ac80(&lStack_348,auStack_708);
    }
    plVar13 = uStack_340 + -0xe;
    lVar15 = (long)uStack_768;
  }
  else {
LAB_0aee4a7e:
    plVar22 = plStack_748;
    auVar4 = auStack_798;
    puVar14 = (ulong *)uStack_790;
    plVar13 = plStack_748;
    if (auStack_798 != (undefined1  [8])0x0) {
joined_r0x0aee4a8e:
      while (plVar22 = plStack_748, auVar5 = auStack_798, plStack_748 = plVar13,
            auStack_798 != (undefined1  [8])puVar14) {
        auStack_798 = auVar4;
        func_0x05fe8450(puVar14 + -0x28);
        auVar4 = auStack_798;
        puVar14 = puVar14 + -0x28;
        plVar13 = plStack_748;
        plStack_748 = plVar22;
        auStack_798 = auVar5;
      }
      uStack_790 = auStack_798;
      auStack_798 = auVar4;
      func_0x0412a280(auVar4,(long)uStack_788 - (long)auVar4);
    }
    plVar13 = (long *)0xf6a4980;
    lVar15 = (long)uStack_768;
  }
  uStack_768 = (undefined8 *)lVar15;
  if (lVar15 != 0) {
    if ((undefined8 *)lVar15 != uStack_760) {
      lVar24 = (long)uStack_760 + -0x40;
      do {
        if (*(code **)(lVar24 + 0x18) != (code *)0x0) {
          (**(code **)(lVar24 + 0x18))(lVar24);
        }
        if (*(code **)(lVar24 + -0x30) != (code *)0x0) {
          (**(code **)(lVar24 + -0x30))(lVar24 + -0x48);
        }
        if (*(code **)(lVar24 + -0x70) != (code *)0x0) {
          (**(code **)(lVar24 + -0x70))(lVar24 + -0x88);
        }
        if (*(code **)(lVar24 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar24 + -0xb0))(lVar24 + -200);
        }
        lVar23 = lVar24 + -0xd8;
        lVar24 = lVar24 + -0x118;
      } while (lVar23 != lVar15);
    }
    uStack_760 = (undefined8 *)lVar15;
    func_0x0412a280(uStack_768,(long)puStack_758 - (long)uStack_768);
  }
  func_0x05f93280(auStack_708);
  if (plVar13 != plVar22) {
    func_0x066dff70(plVar13,*plVar22,plVar22[1],(plVar22[1] - *plVar22 >> 4) * -0x5555555555555555);
  }
  if (pcStack_1b0 != (code *)0x0) {
    (*pcStack_1b0)(auStack_1c8);
  }
  if (pcStack_1f8 != (code *)0x0) {
    (*pcStack_1f8)(auStack_210);
  }
  if (pcStack_238 != (code *)0x0) {
    (*pcStack_238)(auStack_250);
  }
  if (pcStack_278 != (code *)0x0) {
    (*pcStack_278)(&puStack_290);
  }
  if ((uStack_2c8 & 1) != 0) {
    func_0x0412a280(uStack_2b8,uStack_2c8 & 0xfffffffffffffffe);
  }
  if ((uStack_740 & 1) != 0) {
    func_0x0412a280(uStack_730,CONCAT44(uStack_73c,uStack_740) & 0xfffffffffffffffe);
  }
  if (pcStack_60 != (code *)0x0) {
    (*pcStack_60)(auStack_78);
  }
  if (pcStack_a8 != (code *)0x0) {
    (*pcStack_a8)(auStack_c0);
  }
  if (pcStack_e8 != (code *)0x0) {
    (*pcStack_e8)(auStack_100);
  }
  if (pcStack_128 != (code *)0x0) {
    (*pcStack_128)(auStack_140);
  }
  if ((uStack_178 & 1) != 0) {
    func_0x0412a280(pcStack_168,uStack_178 & 0xfffffffffffffffe);
  }
  if ((bStack_690 & 1) != 0) {
    func_0x0412a280(uStack_680,CONCAT71(uStack_68f,bStack_690) & 0xfffffffffffffffe);
  }
  bStack_728 = 0x10;
  uStack_727 = 0x6361626c6c6163;
  uStack_720 = 0x6b;
  uStack_71f = 0;
  func_0x0aee6240(&uStack_178,&bStack_728);
  uStack_2b8 = 0;
  uStack_2a0 = 0;
  uStack_268 = 0;
  uStack_260 = 0;
  pcStack_278 = (code *)0x0;
  uStack_270 = 0;
  puStack_288 = (ulong *)0x0;
  plStack_280 = (long *)0x0;
  puStack_298 = (ulong *)0x0;
  puStack_290 = (ulong *)0x0;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  uStack_2b0 = (undefined *)0x63736275736e7516;
  uStack_2a8 = (byte *)0x65626972;
  func_0x06523ef0(auStack_658,auStack_150);
  auStack_798 = (undefined1  [8])0x0;
  uStack_790 = (undefined1  [8])0x0;
  uStack_788 = (undefined8 **)0x0;
  puStack_678 = (undefined8 *)auStack_798;
  uStack_670 = 0;
  lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x118);
  if (lVar15 == 0) {
    func_0x0eec74c0(0x118,0);
  }
  uStack_788 = (undefined8 **)(lVar15 + 0x118);
  bStack_690 = (byte)lVar15;
  uStack_68f = (undefined7)((ulong)lVar15 >> 8);
  auStack_708 = (undefined1  [8])auStack_798;
  uStack_700 = (undefined1  [8])&bStack_690;
  puStack_6f8 = &uStack_768;
  uStack_6f0 = uStack_6f0 & 0xffffffffffffff00;
  auStack_798 = (undefined1  [8])lVar15;
  uStack_790 = (undefined1  [8])lVar15;
  uStack_768 = (undefined8 *)lVar15;
  func_0x06523ef0(lVar15,auStack_658);
  uStack_790 = (undefined1  [8])((long)uStack_768 + 0x118);
  if (pcStack_568 != (code *)0x0) {
    (*pcStack_568)(&uStack_580);
  }
  if (pcStack_5b0 != (code *)0x0) {
    (*pcStack_5b0)(&pcStack_5c8);
  }
  if (pcStack_5f0 != (code *)0x0) {
    (*pcStack_5f0)(&pcStack_608);
  }
  if (pcStack_630 != (code *)0x0) {
    (*pcStack_630)(&pcStack_648);
  }
  pcVar16 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar16 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)((long)pcVar16 + 8) = 0;
  *(undefined8 *)((long)pcVar16 + 0x10) = 0;
  *(undefined **)pcVar16 = &UNK_0f2786a8;
  uVar10 = func_0x0d858500(auStack_798);
  plVar13 = (long *)((long)pcVar16 + 0x18);
  *(undefined1 *)((long)pcVar16 + 0x20) = 2;
  *(undefined4 *)((long)pcVar16 + 0x24) = uVar10;
  *(undefined4 *)((long)pcVar16 + 0x28) = 0;
  *(undefined8 *)((long)pcVar16 + 0x30) = 0;
  *(undefined8 *)((long)pcVar16 + 0x38) = 0;
  *(undefined8 *)((long)pcVar16 + 0x40) = 0;
  *(undefined **)((long)pcVar16 + 0x18) = &UNK_0f2786f8;
  *(undefined4 *)((long)pcVar16 + 0x48) = auStack_798._0_4_;
  *(undefined4 *)((long)pcVar16 + 0x4c) = auStack_798._4_4_;
  *(undefined4 *)((long)pcVar16 + 0x50) = (undefined4)uStack_790;
  *(undefined4 *)((long)pcVar16 + 0x54) = uStack_790._4_4_;
  *(undefined8 ***)((long)pcVar16 + 0x58) = uStack_788;
  auStack_798 = (undefined1  [8])0x0;
  uStack_790 = (undefined1  [8])0x0;
  uStack_788 = (undefined8 **)0x0;
  uVar10 = func_0x0d858620(plVar13);
  pcVar8 = pcStack_278;
  *(undefined4 *)((long)pcVar16 + 0x28) = uVar10;
  plStack_280 = plVar13;
  if (pcStack_278 != (code *)0x0) {
    LOCK();
    plVar13 = (long *)((long)pcStack_278 + 8);
    lVar15 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      lVar15 = *(long *)pcStack_278;
      pcStack_278 = pcVar16;
      (**(code **)(lVar15 + 0x10))(pcVar8);
      func_0x0412c2d0(pcVar8);
      pcVar16 = pcStack_278;
    }
  }
  pcStack_278 = pcVar16;
  _auStack_658 = func_0x0aeea750();
  _auStack_708 = func_0x0ab12220();
  func_0x0d850780(auStack_658,auStack_708);
  pcStack_648 = pcStack_168;
  auStack_658 = (undefined1  [8])uStack_178;
  uStack_650 = (long *)puStack_170;
  uStack_178 = 0;
  puStack_170 = (undefined *)0x0;
  pcStack_168 = (code *)0x0;
  uStack_640 = (undefined *)CONCAT44(uStack_15c,uStack_160);
  uStack_638 = (long *)CONCAT44(uStack_154,uStack_158);
  func_0x065281f0(&pcStack_630,auStack_150);
  auStack_708 = (undefined1  [8])0x0;
  uStack_700 = (undefined1  [8])0x0;
  puStack_6f8 = (ulong *)0x0;
  uStack_670 = 0;
  puStack_678 = (undefined8 *)auStack_708;
  puVar14 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
  if (puVar14 == (ulong *)0x0) {
    func_0x0eec74c0(0x140,0);
  }
  puVar1 = puVar14 + 0x28;
  auStack_708 = (undefined1  [8])puVar14;
  puStack_6f8 = puVar1;
  if (((ulong)auStack_658 & 1) == 0) {
    puVar14[2] = (ulong)pcStack_648;
    *puVar14 = (ulong)auStack_658;
    puVar14[1] = (ulong)uStack_650;
    uStack_700 = (undefined1  [8])puVar14;
  }
  else {
    uStack_700 = (undefined1  [8])puVar14;
    func_0x0412e5e0(puVar14,pcStack_648,uStack_650);
  }
  *(undefined4 *)(puVar14 + 3) = (undefined4)uStack_640;
  *(undefined4 *)((long)puVar14 + 0x1c) = uStack_640._4_4_;
  *(undefined4 *)(puVar14 + 4) = (undefined4)uStack_638;
  *(undefined4 *)((long)puVar14 + 0x24) = uStack_638._4_4_;
  func_0x06523ef0(puVar14 + 5,&pcStack_630);
  uStack_700 = (undefined1  [8])puVar1;
  if (apcStack_540[0] != (code *)0x0) {
    (*apcStack_540[0])(auStack_558);
  }
  if (pcStack_588 != (code *)0x0) {
    (*pcStack_588)(&uStack_5a0);
  }
  if (pcStack_5c8 != (code *)0x0) {
    (*pcStack_5c8)(&lStack_5e0);
  }
  if (pcStack_608 != (code *)0x0) {
    (*pcStack_608)(auStack_628 + 8);
  }
  if (((ulong)auStack_658 & 1) != 0) {
    func_0x0412a280(pcStack_648,(ulong)auStack_658 & 0xfffffffffffffffe);
  }
  uVar11 = (**(code **)(*plStack_280 + 0x20))();
  uVar19 = ((long)uStack_700 - (long)auStack_708 >> 6) * -0x3333333333333333;
  uVar17 = 0;
  if ((uVar11 != 0) && ((uint)uVar19 != 0)) {
    uVar20 = 0;
    uVar17 = 0;
    uStack_76c = uVar11;
    do {
      auVar26 = (**(code **)(*plStack_280 + 0x28))(plStack_280,uVar20);
      uVar18 = auVar26._8_8_;
      lVar15 = auVar26._0_8_;
      auVar26 = func_0x06527d70();
      if (auVar26._8_8_ == uVar18) {
        if (auVar26._0_8_ == 0) {
          lVar24 = func_0x048aead0(auVar26._8_8_);
          iVar12 = *(int *)(lVar24 + 8);
          if (lVar15 != 0) goto LAB_0aee5211;
LAB_0aee5230:
          lVar24 = func_0x048aead0(uVar18);
          if (iVar12 != *(int *)(lVar24 + 8)) goto LAB_0aee5250;
        }
        else {
          iVar12 = *(int *)(auVar26._0_8_ + 8);
          if (lVar15 == 0) goto LAB_0aee5230;
LAB_0aee5211:
          if (iVar12 != *(int *)(lVar15 + 8)) goto LAB_0aee5250;
        }
      }
      else {
LAB_0aee5250:
        auVar26 = func_0x06527e30();
        if (auVar26._8_8_ == uVar18) {
          if (auVar26._0_8_ == 0) {
            lVar24 = func_0x048aead0(auVar26._8_8_);
            iVar12 = *(int *)(lVar24 + 8);
          }
          else {
            iVar12 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar15 == 0) {
            lVar24 = func_0x048aead0(uVar18);
            iVar2 = *(int *)(lVar24 + 8);
          }
          else {
            iVar2 = *(int *)(lVar15 + 8);
          }
          if (iVar12 == iVar2) goto LAB_0aee544a;
        }
        auVar26 = func_0x06527ef0();
        if (auVar26._8_8_ == uVar18) {
          if (auVar26._0_8_ == 0) {
            lVar24 = func_0x048aead0(auVar26._8_8_);
            iVar12 = *(int *)(lVar24 + 8);
          }
          else {
            iVar12 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar15 == 0) {
            lVar24 = func_0x048aead0(uVar18);
            iVar2 = *(int *)(lVar24 + 8);
          }
          else {
            iVar2 = *(int *)(lVar15 + 8);
          }
          if (iVar12 == iVar2) goto LAB_0aee544a;
        }
        auVar26 = func_0x06527fb0();
        if (auVar26._8_8_ == uVar18) {
          if (auVar26._0_8_ == 0) {
            lVar24 = func_0x048aead0(auVar26._8_8_);
            iVar12 = *(int *)(lVar24 + 8);
          }
          else {
            iVar12 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar15 == 0) {
            lVar24 = func_0x048aead0(uVar18);
            iVar2 = *(int *)(lVar24 + 8);
          }
          else {
            iVar2 = *(int *)(lVar15 + 8);
          }
          if (iVar12 == iVar2) goto LAB_0aee544a;
        }
        auVar26 = func_0x06528070();
        if (auVar26._8_8_ == uVar18) {
          if (auVar26._0_8_ == 0) {
            lVar24 = func_0x048aead0(auVar26._8_8_);
            iVar12 = *(int *)(lVar24 + 8);
          }
          else {
            iVar12 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar15 == 0) {
            lVar24 = func_0x048aead0(uVar18);
            iVar2 = *(int *)(lVar24 + 8);
          }
          else {
            iVar2 = *(int *)(lVar15 + 8);
          }
          if (iVar12 == iVar2) goto LAB_0aee544a;
        }
        auVar26 = func_0x06528130();
        if (auVar26._8_8_ == uVar18) {
          if (auVar26._0_8_ == 0) {
            lVar24 = func_0x048aead0(auVar26._8_8_);
            iVar12 = *(int *)(lVar24 + 8);
          }
          else {
            iVar12 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar15 == 0) {
            lVar24 = func_0x048aead0(uVar18);
            iVar2 = *(int *)(lVar24 + 8);
          }
          else {
            iVar2 = *(int *)(lVar15 + 8);
          }
          if (iVar12 == iVar2) goto LAB_0aee544a;
        }
        auVar4 = auStack_708;
        puVar14 = (ulong *)uStack_700;
        plVar22 = plStack_748;
        if (*(ulong *)((long)auStack_708 + (uVar17 * 0x28 + 4) * 8) != uVar18)
        goto joined_r0x0aee5678;
        if (*(ulong *)((long)auStack_708 + (uVar17 * 0x28 + 3) * 8) == 0) {
          lVar24 = func_0x048aead0();
          iVar12 = *(int *)(lVar24 + 8);
          if (lVar15 != 0) goto LAB_0aee5419;
LAB_0aee5432:
          lVar15 = func_0x048aead0(uVar18);
          plVar22 = plStack_748;
          if (iVar12 != *(int *)(lVar15 + 8)) goto LAB_0aee5665;
        }
        else {
          iVar12 = *(int *)(*(ulong *)((long)auStack_708 + (uVar17 * 0x28 + 3) * 8) + 8);
          if (lVar15 == 0) goto LAB_0aee5432;
LAB_0aee5419:
          plVar22 = plStack_748;
          if (iVar12 != *(int *)(lVar15 + 8)) goto LAB_0aee5665;
        }
        uVar17 = (ulong)((int)uVar17 + 1);
      }
LAB_0aee544a:
    } while (((uint)uVar17 < (uint)uVar19) && (uVar20 = uVar20 + 1, uVar20 < uStack_76c));
    uVar19 = ((long)uStack_700 - (long)auStack_708 >> 6) * -0x3333333333333333;
    plVar22 = plStack_748;
  }
  puVar14 = puStack_298;
  if (uVar19 == uVar17) {
    puVar1 = puStack_290;
    if (puStack_298 != (ulong *)0x0) {
      while (puVar14 != puVar1) {
        func_0x05fe8450(puVar1 + -0x28);
        puVar1 = puVar1 + -0x28;
      }
      puStack_290 = puVar14;
      func_0x0412a280(puStack_298,(long)puStack_288 - (long)puStack_298);
    }
    puStack_288 = puStack_6f8;
    if (uStack_340 < puStack_338) {
      *uStack_340 = 0;
      uStack_340[1] = 0;
      uStack_340[2] = 0;
      *uStack_340 = uStack_2c8;
      uStack_340[1] = uStack_2c0;
      uStack_340[2] = uStack_2b8;
      uStack_2c8 = 0;
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      uStack_340[5] = uStack_2a0;
      uStack_340[3] = uStack_2b0;
      uStack_340[4] = uStack_2a8;
      uStack_2b0 = (undefined *)0x0;
      uStack_2a8 = (byte *)0x0;
      uStack_2a0 = 0;
      uStack_340[6] = 0;
      uStack_340[7] = 0;
      uStack_340[8] = 0;
      uStack_340[6] = auStack_708;
      uStack_340[7] = uStack_700;
      uStack_340[8] = puStack_6f8;
      puStack_298 = (ulong *)0x0;
      puStack_290 = (ulong *)0x0;
      puStack_288 = (ulong *)0x0;
      uStack_340[9] = plStack_280;
      uStack_340[10] = pcStack_278;
      plStack_280 = (long *)0x0;
      pcStack_278 = (code *)0x0;
      uStack_340[0xb] = 0;
      uStack_340[0xc] = 0;
      uStack_340[0xd] = 0;
      uStack_340[0xb] = uStack_270;
      uStack_340[0xc] = uStack_268;
      uStack_340[0xd] = uStack_260;
      uStack_270 = 0;
      uStack_268 = 0;
      uStack_260 = 0;
      uStack_340 = uStack_340 + 0xe;
    }
    else {
      puStack_298 = (ulong *)auStack_708;
      puStack_290 = (ulong *)uStack_700;
      uStack_340 = (undefined8 *)func_0x0652ac80(&lStack_348,&uStack_2c8);
    }
    plVar13 = uStack_340 + -0xe;
    auVar4 = auStack_798;
  }
  else {
LAB_0aee5665:
    auVar4 = auStack_708;
    puVar14 = (ulong *)uStack_700;
    if (auStack_708 != (undefined1  [8])0x0) {
joined_r0x0aee5678:
      while (auVar5 = auStack_708, auStack_708 != (undefined1  [8])puVar14) {
        auStack_708 = auVar4;
        func_0x05fe8450(puVar14 + -0x28);
        auVar4 = auStack_708;
        puVar14 = puVar14 + -0x28;
        auStack_708 = auVar5;
      }
      uStack_700 = auStack_708;
      auStack_708 = auVar4;
      func_0x0412a280(auVar4,(long)puStack_6f8 - (long)auVar4);
    }
    plVar13 = (long *)0xf6a4980;
    auVar4 = auStack_798;
  }
  auStack_798 = auVar4;
  if (auVar4 != (undefined1  [8])0x0) {
    if (auVar4 != uStack_790) {
      lVar15 = (long)uStack_790 + -0x40;
      do {
        if (*(code **)(lVar15 + 0x18) != (code *)0x0) {
          (**(code **)(lVar15 + 0x18))(lVar15);
        }
        if (*(code **)(lVar15 + -0x30) != (code *)0x0) {
          (**(code **)(lVar15 + -0x30))(lVar15 + -0x48);
        }
        if (*(code **)(lVar15 + -0x70) != (code *)0x0) {
          (**(code **)(lVar15 + -0x70))(lVar15 + -0x88);
        }
        if (*(code **)(lVar15 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar15 + -0xb0))(lVar15 + -200);
        }
        lVar24 = lVar15 + -0xd8;
        lVar15 = lVar15 + -0x118;
      } while ((undefined1  [8])lVar24 != auVar4);
    }
    uStack_790 = auVar4;
    func_0x0412a280(auStack_798,(long)uStack_788 - (long)auStack_798);
  }
  func_0x05f93280(&uStack_2c8);
  if (plVar13 != plVar22) {
    func_0x066dff70(plVar13,*plVar22,plVar22[1],(plVar22[1] - *plVar22 >> 4) * -0x5555555555555555);
  }
  if (pcStack_60 != (code *)0x0) {
    (*pcStack_60)(auStack_78);
  }
  if (pcStack_a8 != (code *)0x0) {
    (*pcStack_a8)(auStack_c0);
  }
  if (pcStack_e8 != (code *)0x0) {
    (*pcStack_e8)(auStack_100);
  }
  if (pcStack_128 != (code *)0x0) {
    (*pcStack_128)(auStack_140);
  }
  if ((uStack_178 & 1) != 0) {
    func_0x0412a280(pcStack_168,uStack_178 & 0xfffffffffffffffe);
  }
  if ((bStack_728 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_714,uStack_718),
                    CONCAT71(uStack_727,bStack_728) & 0xfffffffffffffffe);
  }
  if (&lStack_3d8 != plVar22) {
    func_0x066dff70(&lStack_3d8,*plVar22,plVar22[1],
                    (plVar22[1] - *plVar22 >> 4) * -0x5555555555555555);
  }
  auStack_390 = func_0x0ab12220();
  lVar24 = lStack_3c0;
  lVar15 = lStack_3b8;
  if (lStack_3c0 != 0) {
    for (; lVar24 != lVar15; lVar15 = lVar15 + -0x30) {
      if ((*(byte *)(lVar15 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar15 + -0x10),
                        *(ulong *)(lVar15 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_3b8 = lVar24;
    func_0x0412a280(lStack_3c0,lStack_3b0 - lStack_3c0);
  }
  pcStack_648 = pcStack_3c8;
  uStack_650 = (long *)lStack_3d0;
  auStack_658 = (undefined1  [8])lStack_3d8;
  lStack_3d8 = 0;
  lStack_3d0 = 0;
  pcStack_3c8 = (code *)0x0;
  lStack_3c0 = 0;
  lStack_3b8 = 0;
  lStack_3b0 = 0;
  pcStack_630 = pcStack_398;
  uStack_640 = (undefined *)uStack_3a8;
  uStack_638 = plStack_3a0;
  uStack_3a8 = 0;
  plStack_3a0 = (long *)0x0;
  pcStack_398 = (code *)0x0;
  puStack_618 = (undefined *)uStack_380;
  uStack_610 = uStack_378;
  pcStack_608 = pcStack_370;
  puStack_600 = (undefined *)uStack_368;
  uStack_5f8 = uStack_360;
  pcStack_370 = (code *)0x0;
  uStack_368 = 0;
  uStack_360 = 0;
  pcStack_5f0 = (code *)uStack_358;
  plStack_5e8 = (long *)uStack_350;
  uStack_358 = 0;
  uStack_350 = 0;
  lStack_5e0 = lStack_348;
  uStack_5d8 = (undefined4)uStack_340;
  uStack_5d4 = uStack_340._4_4_;
  puStack_5d0 = puStack_338;
  lStack_348 = 0;
  uStack_340 = (undefined8 *)0x0;
  puStack_338 = (undefined8 *)0x0;
  pcStack_5c8 = pcStack_330;
  uStack_5c0 = uStack_328;
  uStack_5b8 = uStack_320;
  pcStack_330 = (code *)0x0;
  uStack_328 = 0;
  uStack_320 = 0;
  pcStack_5b0 = (code *)uStack_318;
  uStack_5a8 = uStack_310;
  uStack_5a0 = uStack_308;
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_308 = 0;
  uStack_598 = uStack_300;
  uStack_590 = uStack_2f8;
  pcStack_588 = (code *)uStack_2f0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  uStack_580 = (undefined4)uStack_2e8;
  uStack_57c = uStack_2e8._4_4_;
  uStack_578 = (undefined4)uStack_2e0;
  uStack_574 = uStack_2e0._4_4_;
  uStack_570 = uStack_2d8;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  auStack_628 = auStack_390;
  func_0x0d84fd50(uStack_188,auStack_658);
  func_0x0651ffe0(auStack_658);
  func_0x0651ffe0(&lStack_3c0);
  lVar24 = lStack_3d8;
  lVar15 = lStack_3d0;
  if (lStack_3d8 != 0) {
    for (; lVar24 != lVar15; lVar15 = lVar15 + -0x30) {
      if ((*(byte *)(lVar15 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar15 + -0x10),
                        *(ulong *)(lVar15 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_3d0 = lVar24;
    func_0x0412a280(lStack_3d8,(long)pcStack_3c8 - lStack_3d8);
  }
  return;
}



/* ---- referenced strings ----
 * 0x147b3d0  AfterEventSignal
 */
