/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa20b120 (ELF vaddr 0xa10b120)
 * Label: caller-of-callee
 * Body:  [[0a20b120, 0a20c542] [0a20c550, 0a20d0db] [0a20d0e0, 0a20d270] [0a20d280, 0a20d755] [0a20d760, 0a20d7c1] [0a20d7d0, 0a20e882] [0a20e890, 0a20f44b] [0a20f450, 0a20f5d8] [0a20f5e0, 0a20fa4d] [0a20fa50, 0a20fab5] [0a20fac0, 0a20fb21] [0a20fb30, 0a20fbe0] [0a20fbf0, 0a20fe51] [0a20fe60, 0a210077] [0a2105ef, 0a2105f8] [0a210970, 0a2109aa] [0a210a28, 0a210a66] [0a210b6b, 0a210b9f]]
 * Ghidra: FUN_0a20b120
 */


/* WARNING: Removing unreachable block (ram,0x0a20b5d8) */
/* WARNING: Removing unreachable block (ram,0x0a20d942) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffad9 : 0x0a20b5e0 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0a20b120(undefined8 param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  byte bVar5;
  long *plVar6;
  uint **ppuVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  ulong *puVar10;
  char cVar11;
  code *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  uint *puVar19;
  code *pcVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined7 *puVar23;
  ulong uVar24;
  byte *pbVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  bool bVar29;
  undefined1 auVar30 [16];
  undefined8 uStack_948;
  undefined8 uStack_940;
  uint *puStack_938;
  undefined1 uStack_930;
  uint uStack_928;
  undefined4 uStack_924;
  undefined1 uStack_920;
  undefined1 uStack_91f;
  undefined2 uStack_91e;
  undefined4 uStack_91c;
  long lStack_918;
  long lStack_908;
  long lStack_900;
  long lStack_8f8;
  byte bStack_8f0;
  undefined5 uStack_8ef;
  undefined2 uStack_8ea;
  undefined1 uStack_8e8;
  undefined2 uStack_8e7;
  undefined1 uStack_8e5;
  undefined1 uStack_8e4;
  undefined1 uStack_8e3;
  undefined1 uStack_8e2;
  undefined1 uStack_8e1;
  undefined7 *puStack_8e0;
  byte bStack_8d8;
  undefined7 uStack_8d7;
  undefined1 uStack_8d0;
  undefined1 uStack_8cf;
  undefined8 uStack_8c8;
  long *plStack_8c0;
  uint *puStack_8b8;
  undefined1 uStack_8b0;
  undefined8 uStack_8a8;
  long lStack_8a0;
  undefined8 *puStack_898;
  uint **ppuStack_890;
  uint **ppuStack_888;
  ulong uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 *puStack_868;
  undefined8 *puStack_860;
  undefined8 *puStack_858;
  long *plStack_850;
  long *plStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  uint *puStack_828;
  undefined1 uStack_820;
  long lStack_818;
  long lStack_810;
  long lStack_808;
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  undefined8 uStack_7f0;
  undefined4 uStack_7e8;
  uint uStack_7e4;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  code *pcStack_7d0;
  undefined1 auStack_7c8 [16];
  undefined *puStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined4 uStack_798;
  undefined4 uStack_794;
  code *pcStack_790;
  long *plStack_788;
  long lStack_780;
  undefined4 uStack_778;
  undefined4 uStack_774;
  undefined8 *puStack_770;
  code *pcStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  code *pcStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  code *pcStack_728;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined4 uStack_718;
  undefined4 uStack_714;
  undefined8 uStack_710;
  code *pcStack_708;
  undefined1 auStack_6f8 [24];
  code *apcStack_6e0 [2];
  undefined1 auStack_6d0 [24];
  code *pcStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined1 auStack_690 [16];
  undefined1 auStack_680 [8];
  code *pcStack_678;
  code *pcStack_668;
  undefined1 auStack_650 [16];
  undefined1 auStack_640 [8];
  code *pcStack_638;
  code *pcStack_628;
  undefined1 auStack_608 [8];
  undefined1 auStack_600 [16];
  code *pcStack_5f0;
  code *pcStack_5e8;
  undefined1 auStack_5b8 [24];
  code *pcStack_5a0;
  ulong *puStack_570;
  undefined8 uStack_568;
  long *plStack_560;
  code *pcStack_558;
  char cStack_550;
  undefined1 auStack_548 [8];
  long alStack_540 [2];
  char cStack_530;
  byte bStack_528;
  undefined7 uStack_527;
  undefined1 uStack_520;
  undefined2 uStack_51f;
  undefined1 uStack_51d;
  undefined1 uStack_51c;
  undefined1 uStack_51b;
  undefined1 uStack_51a;
  undefined1 uStack_519;
  undefined7 *puStack_518;
  char cStack_510;
  undefined1 uStack_508;
  undefined1 uStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  code *pcStack_4a8;
  undefined1 auStack_4a0 [16];
  undefined *puStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  code *pcStack_468;
  long *plStack_460;
  long lStack_458;
  undefined8 uStack_450;
  undefined8 *puStack_448;
  code *pcStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  code *pcStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3d8;
  undefined8 uStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  code *pcStack_380;
  code *pcStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 auStack_350 [24];
  code *pcStack_338;
  undefined1 auStack_310 [24];
  code *pcStack_2f8;
  undefined1 auStack_2c8 [24];
  code *pcStack_2b0;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined1 auStack_240 [16];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  
  lVar27 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar27 == 0) {
    func_0x048b0de0(&uStack_7f8,&uStack_178);
    uVar9 = uStack_7f0._4_4_;
    uVar13 = (undefined4)uStack_7f0;
    uRam000000000f54fd94 = uStack_7f4;
    _DAT_0f54fd90 = uStack_7f8;
    uStack_7f8 = 0;
    uStack_7f4 = 0;
    uStack_7f0._0_4_ = 0;
    uStack_7f0._4_4_ = 0;
    plVar17 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar13;
    uRam000000000f54fd9c = uVar9;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar6 = plVar17 + 1;
      lVar27 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar27 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        FUN_0412c2d0(plVar17);
      }
    }
    plVar17 = (long *)CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0);
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar6 = plVar17 + 1;
      lVar27 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar27 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        FUN_0412c2d0(plVar17);
      }
    }
    lVar27 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f642648 == '\0') && (iVar15 = func_0x04108328(&DAT_0f642648), iVar15 != 0)) {
    func_0x099ea550(0xf642630,lVar27);
    func_0x0410844d(&DAT_0f642648);
  }
  if ((DAT_0f642648 == '\0') && (iVar15 = func_0x04108328(&DAT_0f642648), iVar15 != 0)) {
    func_0x099ea550(0xf642630,lVar27);
    func_0x0410844d(&DAT_0f642648);
  }
  uStack_7f8 = 0xf642630;
  uStack_7f4 = 0;
  uStack_7f0._0_4_ = _DAT_0f642634;
  uStack_7e8 = 0;
  uStack_7e4 = 0;
  uStack_7e0 = CONCAT44(uStack_7e0._4_4_,0x80);
  uStack_7d8 = 0x90;
  pcStack_7d0 = (code *)&SUB_099ea370;
  auStack_7c8._0_8_ = 0;
  auStack_7c8._8_8_ = 0;
  puStack_7b8 = &UNK_099ea5c0;
  uStack_7b0 = 0;
  uStack_7a8._0_4_ = 0;
  uStack_7a8._4_4_ = 0;
  uStack_7a0 = 0;
  uStack_79c = 0;
  uStack_798 = 0;
  pcStack_790 = (code *)0x0;
  plStack_788 = (long *)0x0;
  lStack_780 = 0;
  func_0x048aee30(&uStack_178,lVar27,&uStack_7f8,0x736f3a9d);
  lVar27 = lStack_780;
  lStack_780 = 0;
  if (lVar27 != 0) {
    func_0x048ae940(lVar27);
    func_0x0412a280(lVar27,0x78);
  }
  plVar17 = plStack_788;
  if (plStack_788 != (long *)0x0) {
    LOCK();
    plVar6 = plStack_788 + 1;
    lVar27 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar27 == 0) {
      (**(code **)(*plStack_788 + 0x10))(plStack_788);
      FUN_0412c2d0(plVar17);
    }
  }
  if ((DAT_0f65abd0 == '\0') && (iVar15 = func_0x04108328(&DAT_0f65abd0), iVar15 != 0)) {
    func_0x0a267a00();
    func_0x0410844d(&DAT_0f65abd0);
  }
  uStack_7f8 = _DAT_0f65abbc;
  uStack_7f0._0_4_ = 0xa267930;
  uStack_7f0._4_4_ = 0;
  uStack_7e8 = 0xa2679f0;
  uStack_7e4 = 0;
  func_0x05da1460(&uStack_178);
  uStack_7f8 = CONCAT31((int3)_DAT_012ae357,0x26);
  uStack_7f4 = (undefined4)((ulong)_DAT_012ae357 >> 0x18);
  uStack_7f0._0_1_ = (undefined1)((ulong)_DAT_012ae357 >> 0x38);
  uStack_7f0._1_3_ = (undefined3)_UNK_012ae35f;
  uStack_7f0._4_4_ = (undefined4)((ulong)_UNK_012ae35f >> 0x18);
  uStack_7e8 = 0x73746e65;
  uStack_7e4 = uStack_7e4 & 0xffffff00;
  lStack_288 = 0;
  lStack_280 = 0;
  lStack_278 = 0;
  lStack_270 = 0;
  lStack_268 = 0;
  lStack_260 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  pcStack_248 = (code *)0x0;
  func_0x048b1dc0(auStack_240);
  func_0x048b1dc0(&uStack_230);
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  pcStack_1e0 = (code *)0x0;
  uStack_1d8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_200 = 0;
  lStack_1f8 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  if ((uStack_258 & 1) == 0) {
    if ((uStack_7f8 & 1) == 0) {
      pcStack_248 = (code *)CONCAT44(uStack_7e4,uStack_7e8);
      uStack_258 = CONCAT44(uStack_7f4,uStack_7f8);
      uStack_250 = CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0);
    }
    else {
      func_0x04885070(&uStack_258,CONCAT44(uStack_7e4,uStack_7e8),
                      CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0));
    }
  }
  else {
    bVar29 = (uStack_7f8 & 1) == 0;
    lVar27 = CONCAT44(uStack_7e4,uStack_7e8);
    if (bVar29) {
      lVar27 = (long)&uStack_7f8 + 1;
    }
    uVar22 = (ulong)((byte)uStack_7f8 >> 1);
    if (!bVar29) {
      uVar22 = CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0);
    }
    func_0x04885120(&uStack_258,lVar27,uVar22);
  }
  if ((uStack_7f8 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_7e4,uStack_7e8),
                    CONCAT44(uStack_7f4,uStack_7f8) & 0xfffffffffffffffe);
  }
  func_0x064e40a0(&lStack_288);
  bStack_8f0 = 0x1a;
  uStack_8ef = 0x656b636170;
  uStack_8ea = 0x5274;
  uStack_8e8 = 0x65;
  uStack_8e7 = 0x6563;
  uStack_8e5 = 0x69;
  uStack_8e4 = 0x76;
  uStack_8e3 = 0x65;
  uStack_8e2 = 0;
  puStack_570 = (ulong *)&bStack_8f0;
  uStack_3d0 = param_1;
  uStack_568 = param_1;
  plStack_560 = &lStack_288;
  pcStack_558 = (code *)&UNK_0a117e20;
  cStack_550 = '\x01';
  auStack_548[0] = 0;
  cStack_530 = '\0';
  uStack_508 = 0;
  uStack_4f0 = 0;
  puStack_518 = puStack_8e0;
  bStack_528 = 0x1a;
  uStack_527 = 0x5274656b636170;
  uStack_520 = 0x65;
  uStack_51f = 0x6563;
  uStack_51d = 0x69;
  uStack_51c = 0x76;
  uStack_51b = 0x65;
  uStack_51a = 0;
  uStack_519 = uStack_8e1;
  cStack_510 = '\x01';
  plStack_180 = (long *)func_0x0eee3280();
                    /* WARNING: Ignoring partial resolution of indirect */
  uStack_527._0_1_ = *(undefined1 *)(*plStack_180 + 0x1c0);
  lStack_818 = 0;
  lStack_810 = 0;
  lStack_808 = 0;
  if (pcStack_558 != (code *)0x0) {
    (*pcStack_558)(&uStack_7f8);
    func_0x066dff70(&lStack_818,CONCAT44(uStack_7f4,uStack_7f8),
                    CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0),
                    (CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0) -
                     CONCAT44(uStack_7f4,uStack_7f8) >> 4) * -0x5555555555555555);
    func_0x0d84fd50(uStack_568,&uStack_7f8);
    func_0x0651ffe0(&uStack_7f8);
  }
  bVar5 = bStack_528;
  if (cStack_550 == '\x01') {
    if (cStack_510 == '\0') goto LAB_0a21005f;
    if ((bStack_528 & 1) == 0) {
      uVar22 = (ulong)(bStack_528 >> 1);
    }
    else {
      uVar22 = CONCAT17(uStack_519,
                        CONCAT16(uStack_51a,
                                 CONCAT15(uStack_51b,
                                          CONCAT14(uStack_51c,
                                                   CONCAT13(uStack_51d,
                                                            CONCAT21(uStack_51f,uStack_520))))));
    }
    uVar24 = uVar22 + 0x11;
    if (uVar24 < 0xfffffffffffffff8) {
      if (uVar24 < 0x17) {
        uStack_7f4 = 0;
        uStack_7f0 = 0;
        uStack_7e8 = 0;
        uStack_7e4 = 0;
        uStack_7f8 = (uint)(byte)((char)uVar24 * '\x02');
        lVar16 = (long)&uStack_7f8 + 1;
        uVar24 = 0;
        if (uVar22 != 0) goto joined_r0x0a20b8f4;
      }
      else {
        lVar27 = 0x1a;
        if ((uVar24 | 7) != 0x17) {
          lVar27 = (uVar24 | 7) + 1;
        }
        lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar27);
        if (lVar16 == 0) {
          func_0x0eec74c0(lVar27,0);
        }
        uStack_7f8 = (uint)lVar27 | 1;
        uStack_7f4 = (undefined4)((ulong)lVar27 >> 0x20);
        uStack_7e8 = (undefined4)lVar16;
        uStack_7e4 = (uint)((ulong)lVar16 >> 0x20);
joined_r0x0a20b8f4:
        uStack_7f0 = uVar24;
        puVar23 = &uStack_527;
        if ((bVar5 & 1) != 0) {
          puVar23 = puStack_518;
        }
        func_0x0eee2ee0(lVar16,puVar23,uVar22);
      }
      *(undefined8 *)(lVar16 + uVar22) = _DAT_014b94d1;
      ((undefined8 *)(lVar16 + uVar22))[1] = _UNK_014b94d9;
      *(undefined2 *)(lVar16 + 0x10 + uVar22) = 0x6c;
      goto LAB_0a20b789;
    }
  }
  else {
    if (cStack_510 != '\0') {
      if ((bStack_528 & 1) == 0) {
        uStack_7e8 = SUB84(puStack_518,0);
        uStack_7e4 = (uint)((ulong)puStack_518 >> 0x20);
        uStack_7f0._0_4_ = CONCAT13(uStack_51d,CONCAT21(uStack_51f,uStack_520));
        uStack_7f8 = (uint)CONCAT71(uStack_527,bStack_528);
        uStack_7f4 = (undefined4)((uint7)uStack_527 >> 0x18);
        uStack_7f0._4_4_ =
             (undefined4)
             (CONCAT17(uStack_519,
                       CONCAT16(uStack_51a,
                                CONCAT15(uStack_51b,CONCAT14(uStack_51c,(undefined4)uStack_7f0))))
             >> 0x20);
      }
      else {
        func_0x0412e5e0(&uStack_7f8,puStack_518,
                        CONCAT17(uStack_519,
                                 CONCAT16(uStack_51a,
                                          CONCAT15(uStack_51b,
                                                   CONCAT14(uStack_51c,
                                                            CONCAT13(uStack_51d,
                                                                     CONCAT21(uStack_51f,uStack_520)
                                                                    ))))));
      }
LAB_0a20b789:
      uStack_4b8 = 0;
      uStack_4b0 = 0;
      lStack_4c8 = 0;
      lStack_4c0 = 0;
      lStack_4d8 = 0;
      lStack_4d0 = 0;
      lStack_4e8 = 0;
      lStack_4e0 = 0;
      pcStack_4a8 = (code *)0x0;
      func_0x048b1dc0(auStack_4a0);
      func_0x048b1dc0(&puStack_490);
      uStack_3f0 = 0;
      uStack_3e8 = 0;
      pcStack_400 = (code *)0x0;
      uStack_3f8 = 0;
      uStack_410 = 0;
      uStack_408 = 0;
      uStack_420 = 0;
      uStack_418 = 0;
      uStack_430 = 0;
      pcStack_428 = (code *)0x0;
      pcStack_440 = (code *)0x0;
      uStack_438 = 0;
      uStack_450 = (undefined8 *)0x0;
      puStack_448 = (undefined8 *)0x0;
      plStack_460 = (long *)0x0;
      lStack_458 = 0;
      uStack_470 = 0;
      pcStack_468 = (code *)0x0;
      uStack_480 = 0;
      uStack_478 = 0;
      if ((uStack_4b8 & 1) == 0) {
        if ((uStack_7f8 & 1) == 0) {
          pcStack_4a8 = (code *)CONCAT44(uStack_7e4,uStack_7e8);
          uStack_4b8 = CONCAT44(uStack_7f4,uStack_7f8);
          uStack_4b0 = CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0);
        }
        else {
          func_0x04885070(&uStack_4b8,CONCAT44(uStack_7e4,uStack_7e8),
                          CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0));
        }
      }
      else {
        bVar29 = (uStack_7f8 & 1) == 0;
        lVar27 = CONCAT44(uStack_7e4,uStack_7e8);
        if (bVar29) {
          lVar27 = (long)&uStack_7f8 + 1;
        }
        uVar22 = (ulong)((byte)uStack_7f8 >> 1);
        if (!bVar29) {
          uVar22 = CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0);
        }
        func_0x04885120(&uStack_4b8,lVar27,uVar22);
      }
      if ((uStack_7f8 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_7e4,uStack_7e8),
                        CONCAT44(uStack_7f4,uStack_7f8) & 0xfffffffffffffffe);
      }
      lStack_908 = 0;
      lStack_900 = 0;
      lStack_8f8 = 0;
      plStack_8c0 = &lStack_908;
      func_0x0652b220();
      func_0x066dff70(&lStack_4e8,lStack_908,lStack_900,
                      (lStack_900 - lStack_908 >> 4) * -0x5555555555555555);
      bStack_8d8 = 0x10;
      uStack_8d7 = 0x6361626c6c6163;
      uStack_8d0 = 0x6b;
      uStack_8cf = 0;
      func_0x0a267d80(&uStack_178,&bStack_8d8);
      puStack_8b8 = (uint *)0x736e6f6974706f0e;
      uStack_8b0 = 0;
      func_0x0a267e50(&pcStack_3c8,&puStack_8b8);
      ppuStack_888 = (uint **)0x0;
      uStack_870 = 0;
      uStack_838 = 0;
      uStack_830 = 0;
      plStack_848 = (long *)0x0;
      uStack_840 = 0;
      puStack_858 = (undefined8 *)0x0;
      plStack_850 = (long *)0x0;
      puStack_868 = (undefined8 *)0x0;
      puStack_860 = (undefined8 *)0x0;
      puStack_898 = (undefined8 *)0x0;
      ppuStack_890 = (uint **)0x0;
      uStack_880 = 0x6972637362757312;
      uStack_878 = 0x6562;
      func_0x06523ef0(&uStack_7f8,auStack_150);
      func_0x06523ef0(apcStack_6e0,&uStack_3a0);
      uStack_928 = 0;
      uStack_924 = 0;
      uStack_920 = 0;
      uStack_91f = 0;
      uStack_91e = 0;
      uStack_91c = 0;
      lStack_918 = 0;
      uStack_820 = 0;
      puStack_828 = &uStack_928;
      lStack_8a0 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x230);
      if (lStack_8a0 == 0) {
        func_0x0eec74c0(0x230,0);
      }
      uStack_928 = (uint)lStack_8a0;
      uStack_924 = (undefined4)((ulong)lStack_8a0 >> 0x20);
      uStack_920 = (undefined1)lStack_8a0;
      uStack_91f = (undefined1)((ulong)lStack_8a0 >> 8);
      uStack_91e = (undefined2)((ulong)lStack_8a0 >> 0x10);
      lStack_918 = lStack_8a0 + 0x230;
      uStack_940 = (uint *)&lStack_3d8;
      puStack_938 = (uint *)&lStack_8a0;
      uStack_930 = 0;
      uStack_948 = &uStack_928;
      uStack_91c = uStack_924;
      lStack_3d8 = lStack_8a0;
      func_0x06523ef0(lStack_8a0,&uStack_7f8);
      lStack_8a0 = lStack_8a0 + 0x118;
      func_0x06523ef0(lStack_8a0,apcStack_6e0);
      lVar27 = lStack_8a0 + 0x118;
      uStack_920 = (undefined1)lVar27;
      uStack_91f = (undefined1)((ulong)lVar27 >> 8);
      uStack_91e = (undefined2)((ulong)lVar27 >> 0x10);
      uStack_91c = (undefined4)((ulong)lVar27 >> 0x20);
      if (pcStack_5f0 != (code *)0x0) {
        (*pcStack_5f0)(auStack_608);
      }
      if (pcStack_638 != (code *)0x0) {
        (*pcStack_638)(auStack_650);
      }
      if (pcStack_678 != (code *)0x0) {
        (*pcStack_678)(auStack_690);
      }
      if (pcStack_6b8 != (code *)0x0) {
        (*pcStack_6b8)(auStack_6d0);
      }
      if (pcStack_708 != (code *)0x0) {
        (*pcStack_708)(&uStack_720);
      }
      if (pcStack_750 != (code *)0x0) {
        (*pcStack_750)(&pcStack_768);
      }
      if (pcStack_790 != (code *)0x0) {
        (*pcStack_790)(&uStack_7a8);
      }
      if (pcStack_7d0 != (code *)0x0) {
        (*pcStack_7d0)(&uStack_7e8);
      }
      plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
      if (plVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x60,0);
      }
      plVar17[1] = 0;
      plVar17[2] = 0;
      *plVar17 = (long)&UNK_0f20fdc0;
      uVar13 = func_0x0d858500(&uStack_928);
      plVar6 = plVar17 + 3;
      *(undefined1 *)(plVar17 + 4) = 2;
      *(undefined4 *)((long)plVar17 + 0x24) = uVar13;
      *(undefined4 *)(plVar17 + 5) = 0;
      plVar17[6] = 0;
      plVar17[7] = 0;
      plVar17[8] = 0;
      plVar17[3] = (long)&UNK_0f20fe10;
      *(uint *)(plVar17 + 9) = uStack_928;
      *(undefined4 *)((long)plVar17 + 0x4c) = uStack_924;
      *(uint *)(plVar17 + 10) = CONCAT22(uStack_91e,CONCAT11(uStack_91f,uStack_920));
      *(undefined4 *)((long)plVar17 + 0x54) = uStack_91c;
      plVar17[0xb] = lStack_918;
      uStack_928 = 0;
      uStack_924 = 0;
      uStack_920 = 0;
      uStack_91f = 0;
      uStack_91e = 0;
      uStack_91c = 0;
      lStack_918 = 0;
      uVar13 = func_0x0d858620(plVar6);
      plVar2 = plStack_848;
      *(undefined4 *)(plVar17 + 5) = uVar13;
      plStack_850 = plVar6;
      if (plStack_848 != (long *)0x0) {
        LOCK();
        plVar6 = plStack_848 + 1;
        lVar27 = *plVar6;
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (lVar27 == 0) {
          lVar27 = *plStack_848;
          plStack_848 = plVar17;
          (**(code **)(lVar27 + 0x10))(plVar2);
          FUN_0412c2d0(plVar2);
          plVar17 = plStack_848;
        }
      }
      plStack_848 = plVar17;
      func_0x0a26ae50();
      uStack_7e8 = (undefined4)uStack_168;
      uStack_7e4 = (uint)((ulong)uStack_168 >> 0x20);
      uStack_7f8 = (uint)uStack_178;
      uStack_7f4 = (undefined4)(uStack_178 >> 0x20);
      uStack_7f0._0_4_ = (undefined4)uStack_170;
      uStack_7f0._4_4_ = (undefined4)((ulong)uStack_170 >> 0x20);
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_7e0 = CONCAT44(uStack_15c,uStack_160);
      uStack_7d8 = CONCAT44(uStack_154,uStack_158);
      func_0x065281f0(&pcStack_7d0,auStack_150);
      uStack_6a8 = uStack_3b8;
      pcStack_6b8 = pcStack_3c8;
      uStack_6b0 = uStack_3c0;
      pcStack_3c8 = (code *)0x0;
      uStack_3c0 = 0;
      uStack_3b8 = 0;
      uStack_6a0 = (undefined4)uStack_3b0;
      uStack_69c = uStack_3b0._4_4_;
      uStack_698 = (undefined4)uStack_3a8;
      uStack_694 = uStack_3a8._4_4_;
      func_0x065281f0(auStack_690,&uStack_3a0);
      uStack_948 = (uint *)0x0;
      uStack_940 = (uint *)0x0;
      puStack_938 = (uint *)0x0;
      puStack_828 = (uint *)&uStack_948;
      uStack_820 = 0;
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x280);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x280,0);
      }
      puVar3 = puVar18 + 0x50;
      uStack_948 = (uint *)puVar18;
      uStack_940 = (uint *)puVar18;
      puStack_938 = (uint *)puVar3;
      if ((uStack_7f8 & 1) == 0) {
        puVar18[2] = CONCAT44(uStack_7e4,uStack_7e8);
        *puVar18 = CONCAT44(uStack_7f4,uStack_7f8);
        puVar18[1] = CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0);
      }
      else {
        func_0x0412e5e0(puVar18,CONCAT44(uStack_7e4,uStack_7e8),
                        CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0));
      }
      *(undefined4 *)(puVar18 + 3) = (undefined4)uStack_7e0;
      *(undefined4 *)((long)puVar18 + 0x1c) = uStack_7e0._4_4_;
      *(undefined4 *)(puVar18 + 4) = (undefined4)uStack_7d8;
      *(undefined4 *)((long)puVar18 + 0x24) = uStack_7d8._4_4_;
      func_0x06523ef0(puVar18 + 5,&pcStack_7d0);
      if (((ulong)pcStack_6b8 & 1) == 0) {
        puVar18[0x2a] = uStack_6a8;
        puVar18[0x28] = pcStack_6b8;
        puVar18[0x29] = uStack_6b0;
      }
      else {
        func_0x0412e5e0(puVar18 + 0x28,uStack_6a8,uStack_6b0);
      }
      *(undefined4 *)(puVar18 + 0x2b) = uStack_6a0;
      *(undefined4 *)((long)puVar18 + 0x15c) = uStack_69c;
      *(undefined4 *)(puVar18 + 0x2c) = uStack_698;
      *(undefined4 *)((long)puVar18 + 0x164) = uStack_694;
      func_0x06523ef0(puVar18 + 0x2d,auStack_690);
      uStack_940 = (uint *)puVar3;
      if (pcStack_5a0 != (code *)0x0) {
        (*pcStack_5a0)(auStack_5b8);
      }
      if (pcStack_5e8 != (code *)0x0) {
        (*pcStack_5e8)(auStack_600);
      }
      if (pcStack_628 != (code *)0x0) {
        (*pcStack_628)(auStack_640);
      }
      if (pcStack_668 != (code *)0x0) {
        (*pcStack_668)(auStack_680);
      }
      if (((ulong)pcStack_6b8 & 1) != 0) {
        func_0x0412a280(uStack_6a8,(ulong)pcStack_6b8 & 0xfffffffffffffffe);
      }
      if (apcStack_6e0[0] != (code *)0x0) {
        (*apcStack_6e0[0])(auStack_6f8);
      }
      if (pcStack_728 != (code *)0x0) {
        (*pcStack_728)(&uStack_740);
      }
      if (pcStack_768 != (code *)0x0) {
        (*pcStack_768)(&lStack_780);
      }
      if ((code *)CONCAT44(uStack_7a8._4_4_,(undefined4)uStack_7a8) != (code *)0x0) {
        (*(code *)CONCAT44(uStack_7a8._4_4_,(undefined4)uStack_7a8))(auStack_7c8 + 8);
      }
      if ((uStack_7f8 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_7e4,uStack_7e8),
                        CONCAT44(uStack_7f4,uStack_7f8) & 0xfffffffffffffffe);
      }
      uVar14 = (**(code **)(*plStack_850 + 0x20))();
      uVar24 = ((long)uStack_940 - (long)uStack_948 >> 6) * -0x3333333333333333;
      uVar22 = 0;
      if ((uVar14 != 0) && ((uint)uVar24 != 0)) {
        uVar26 = 0;
        uVar22 = 0;
        do {
          auVar30 = (**(code **)(*plStack_850 + 0x28))(plStack_850,uVar26);
          lVar16 = auVar30._8_8_;
          lVar27 = auVar30._0_8_;
          auVar30 = func_0x06527d70();
          if (auVar30._8_8_ == lVar16) {
            if (auVar30._0_8_ == 0) {
              lVar28 = func_0x048aead0(auVar30._8_8_);
              iVar15 = *(int *)(lVar28 + 8);
              if (lVar27 == 0) goto LAB_0a20c0c1;
LAB_0a20c0a2:
              if (iVar15 != *(int *)(lVar27 + 8)) goto LAB_0a20c0e0;
            }
            else {
              iVar15 = *(int *)(auVar30._0_8_ + 8);
              if (lVar27 != 0) goto LAB_0a20c0a2;
LAB_0a20c0c1:
              lVar28 = func_0x048aead0(lVar16);
              if (iVar15 != *(int *)(lVar28 + 8)) goto LAB_0a20c0e0;
            }
          }
          else {
LAB_0a20c0e0:
            auVar30 = func_0x06527e30();
            if (auVar30._8_8_ == lVar16) {
              if (auVar30._0_8_ == 0) {
                lVar28 = func_0x048aead0(auVar30._8_8_);
                iVar15 = *(int *)(lVar28 + 8);
              }
              else {
                iVar15 = *(int *)(auVar30._0_8_ + 8);
              }
              if (lVar27 == 0) {
                lVar28 = func_0x048aead0(lVar16);
                iVar4 = *(int *)(lVar28 + 8);
              }
              else {
                iVar4 = *(int *)(lVar27 + 8);
              }
              if (iVar15 == iVar4) goto LAB_0a20c2d5;
            }
            auVar30 = func_0x06527ef0();
            if (auVar30._8_8_ == lVar16) {
              if (auVar30._0_8_ == 0) {
                lVar28 = func_0x048aead0(auVar30._8_8_);
                iVar15 = *(int *)(lVar28 + 8);
              }
              else {
                iVar15 = *(int *)(auVar30._0_8_ + 8);
              }
              if (lVar27 == 0) {
                lVar28 = func_0x048aead0(lVar16);
                iVar4 = *(int *)(lVar28 + 8);
              }
              else {
                iVar4 = *(int *)(lVar27 + 8);
              }
              if (iVar15 == iVar4) goto LAB_0a20c2d5;
            }
            auVar30 = func_0x06527fb0();
            if (auVar30._8_8_ == lVar16) {
              if (auVar30._0_8_ == 0) {
                lVar28 = func_0x048aead0(auVar30._8_8_);
                iVar15 = *(int *)(lVar28 + 8);
              }
              else {
                iVar15 = *(int *)(auVar30._0_8_ + 8);
              }
              if (lVar27 == 0) {
                lVar28 = func_0x048aead0(lVar16);
                iVar4 = *(int *)(lVar28 + 8);
              }
              else {
                iVar4 = *(int *)(lVar27 + 8);
              }
              if (iVar15 == iVar4) goto LAB_0a20c2d5;
            }
            auVar30 = func_0x06528070();
            if (auVar30._8_8_ == lVar16) {
              if (auVar30._0_8_ == 0) {
                lVar28 = func_0x048aead0(auVar30._8_8_);
                iVar15 = *(int *)(lVar28 + 8);
              }
              else {
                iVar15 = *(int *)(auVar30._0_8_ + 8);
              }
              if (lVar27 == 0) {
                lVar28 = func_0x048aead0(lVar16);
                iVar4 = *(int *)(lVar28 + 8);
              }
              else {
                iVar4 = *(int *)(lVar27 + 8);
              }
              if (iVar15 == iVar4) goto LAB_0a20c2d5;
            }
            auVar30 = func_0x06528130();
            if (auVar30._8_8_ == lVar16) {
              if (auVar30._0_8_ == 0) {
                lVar28 = func_0x048aead0(auVar30._8_8_);
                iVar15 = *(int *)(lVar28 + 8);
              }
              else {
                iVar15 = *(int *)(auVar30._0_8_ + 8);
              }
              if (lVar27 == 0) {
                lVar28 = func_0x048aead0(lVar16);
                iVar4 = *(int *)(lVar28 + 8);
              }
              else {
                iVar4 = *(int *)(lVar27 + 8);
              }
              if (iVar15 == iVar4) goto LAB_0a20c2d5;
            }
            puVar18 = (undefined8 *)uStack_948;
            puVar3 = (undefined8 *)uStack_940;
            if (*(long *)((long)uStack_948 + (uVar22 * 0x28 + 4) * 8) != lVar16)
            goto joined_r0x0a20c4eb;
            if (*(long *)((long)uStack_948 + (uVar22 * 0x28 + 3) * 8) == 0) {
              lVar28 = func_0x048aead0();
              iVar15 = *(int *)(lVar28 + 8);
              if (lVar27 == 0) goto LAB_0a20c2be;
LAB_0a20c2a5:
              if (iVar15 != *(int *)(lVar27 + 8)) goto LAB_0a20c4db;
            }
            else {
              iVar15 = *(int *)(*(long *)((long)uStack_948 + (uVar22 * 0x28 + 3) * 8) + 8);
              if (lVar27 != 0) goto LAB_0a20c2a5;
LAB_0a20c2be:
              lVar27 = func_0x048aead0(lVar16);
              if (iVar15 != *(int *)(lVar27 + 8)) goto LAB_0a20c4db;
            }
            uVar22 = (ulong)((int)uVar22 + 1);
          }
LAB_0a20c2d5:
        } while (((uint)uVar22 < (uint)uVar24) && (uVar26 = uVar26 + 1, uVar26 < uVar14));
        uVar24 = ((long)uStack_940 - (long)uStack_948 >> 6) * -0x3333333333333333;
      }
      puVar18 = puStack_868;
      if (uVar24 == uVar22) {
        puVar3 = puStack_860;
        if (puStack_868 != (undefined8 *)0x0) {
          while (puVar18 != puVar3) {
            func_0x05fe8450(puVar3 + -0x28);
            puVar3 = puVar3 + -0x28;
          }
          puStack_860 = puVar18;
          func_0x0412a280(puStack_868,(long)puStack_858 - (long)puStack_868);
        }
        puStack_858 = (undefined8 *)puStack_938;
        if (uStack_450 < puStack_448) {
          *uStack_450 = 0;
          uStack_450[1] = 0;
          uStack_450[2] = 0;
          *uStack_450 = puStack_898;
          uStack_450[1] = ppuStack_890;
          uStack_450[2] = ppuStack_888;
          puStack_898 = (undefined8 *)0x0;
          ppuStack_890 = (uint **)0x0;
          ppuStack_888 = (uint **)0x0;
          uStack_450[5] = uStack_870;
          uStack_450[3] = uStack_880;
          uStack_450[4] = uStack_878;
          uStack_880 = 0;
          uStack_878 = 0;
          uStack_870 = 0;
          uStack_450[6] = 0;
          uStack_450[7] = 0;
          uStack_450[8] = 0;
          uStack_450[6] = uStack_948;
          uStack_450[7] = uStack_940;
          uStack_450[8] = puStack_938;
          puStack_868 = (undefined8 *)0x0;
          puStack_860 = (undefined8 *)0x0;
          puStack_858 = (undefined8 *)0x0;
          uStack_450[9] = plStack_850;
          uStack_450[10] = plStack_848;
          plStack_850 = (long *)0x0;
          plStack_848 = (undefined8 *)0x0;
          uStack_450[0xb] = 0;
          uStack_450[0xc] = 0;
          uStack_450[0xd] = 0;
          *(undefined4 *)(uStack_450 + 0xb) = (undefined4)uStack_840;
          *(undefined4 *)((long)uStack_450 + 0x5c) = uStack_840._4_4_;
          *(undefined4 *)(uStack_450 + 0xc) = (undefined4)uStack_838;
          *(undefined4 *)((long)uStack_450 + 100) = uStack_838._4_4_;
          uStack_450[0xd] = uStack_830;
          uStack_840 = 0;
          uStack_838 = 0;
          uStack_830 = 0;
          uStack_450 = uStack_450 + 0xe;
        }
        else {
          puStack_868 = (undefined8 *)uStack_948;
          puStack_860 = (undefined8 *)uStack_940;
          uStack_450 = (undefined8 *)func_0x0652ac80(&lStack_458,&puStack_898);
        }
        plVar17 = uStack_450 + -0xe;
        lVar27 = CONCAT44(uStack_924,uStack_928);
      }
      else {
LAB_0a20c4db:
        puVar18 = (undefined8 *)uStack_948;
        puVar3 = (undefined8 *)uStack_940;
        if (uStack_948 != (uint *)0x0) {
joined_r0x0a20c4eb:
          while (puVar8 = (undefined8 *)uStack_948, uStack_948 != (uint *)puVar3) {
            uStack_948 = (uint *)puVar18;
            func_0x05fe8450(puVar3 + -0x28);
            puVar18 = (undefined8 *)uStack_948;
            puVar3 = puVar3 + -0x28;
            uStack_948 = (uint *)puVar8;
          }
          uStack_940 = uStack_948;
          uStack_948 = (uint *)puVar18;
          func_0x0412a280(puVar18,(long)puStack_938 - (long)puVar18);
        }
        plVar17 = (long *)0xf6583a0;
        lVar27 = CONCAT44(uStack_924,uStack_928);
      }
      if (lVar27 != 0) {
        lVar28 = CONCAT44(uStack_91c,CONCAT22(uStack_91e,CONCAT11(uStack_91f,uStack_920)));
        lVar16 = lVar27;
        if (lVar27 != lVar28) {
          lVar16 = lVar28 + -0x40;
          do {
            if (*(code **)(lVar16 + 0x18) != (code *)0x0) {
              (**(code **)(lVar16 + 0x18))(lVar16);
            }
            if (*(code **)(lVar16 + -0x30) != (code *)0x0) {
              (**(code **)(lVar16 + -0x30))(lVar16 + -0x48);
            }
            if (*(code **)(lVar16 + -0x70) != (code *)0x0) {
              (**(code **)(lVar16 + -0x70))(lVar16 + -0x88);
            }
            if (*(code **)(lVar16 + -0xb0) != (code *)0x0) {
              (**(code **)(lVar16 + -0xb0))(lVar16 + -200);
            }
            lVar28 = lVar16 + -0xd8;
            lVar16 = lVar16 + -0x118;
          } while (lVar28 != lVar27);
          lVar16 = CONCAT44(uStack_924,uStack_928);
        }
        uStack_920 = (undefined1)lVar27;
        uStack_91f = (undefined1)((ulong)lVar27 >> 8);
        uStack_91e = (undefined2)((ulong)lVar27 >> 0x10);
        uStack_91c = (undefined4)((ulong)lVar27 >> 0x20);
        func_0x0412a280(lVar16,lStack_918 - lVar16);
      }
      func_0x05f93280(&puStack_898);
      if (plVar17 != &lStack_908) {
        func_0x066dff70(plVar17,lStack_908,lStack_900,
                        (lStack_900 - lStack_908 >> 4) * -0x5555555555555555);
      }
      if (pcStack_2b0 != (code *)0x0) {
        (*pcStack_2b0)(auStack_2c8);
      }
      if (pcStack_2f8 != (code *)0x0) {
        (*pcStack_2f8)(auStack_310);
      }
      if (pcStack_338 != (code *)0x0) {
        (*pcStack_338)(auStack_350);
      }
      if (pcStack_378 != (code *)0x0) {
        (*pcStack_378)(&puStack_390);
      }
      if (((ulong)pcStack_3c8 & 1) != 0) {
        func_0x0412a280(uStack_3b8,(ulong)pcStack_3c8 & 0xfffffffffffffffe);
      }
      if (((ulong)puStack_8b8 & 1) != 0) {
        func_0x0412a280(uStack_8a8,(ulong)puStack_8b8 & 0xfffffffffffffffe);
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
        func_0x0412a280(uStack_168,uStack_178 & 0xfffffffffffffffe);
      }
      if ((bStack_8d8 & 1) != 0) {
        func_0x0412a280(uStack_8c8,CONCAT71(uStack_8d7,bStack_8d8) & 0xfffffffffffffffe);
      }
      uStack_928 = 0x6c616310;
      uStack_924 = 0x6361626c;
      uStack_920 = 0x6b;
      uStack_91f = 0;
      func_0x0a267d80(&uStack_178,&uStack_928);
      uStack_3b8 = 0;
      uStack_3a0 = 0;
      uStack_368 = 0;
      uStack_360 = 0;
      pcStack_378 = (code *)0x0;
      uStack_370 = 0;
      puStack_388 = (undefined8 *)0x0;
      pcStack_380 = (code *)0x0;
      puStack_398 = (undefined8 *)0x0;
      puStack_390 = (undefined8 *)0x0;
      pcStack_3c8 = (code *)0x0;
      uStack_3c0 = 0;
      uStack_3b0 = 0x63736275736e7516;
      uStack_3a8 = 0x65626972;
      func_0x06523ef0(&uStack_7f8,auStack_150);
      uStack_948 = (uint *)0x0;
      uStack_940 = (uint *)0x0;
      puStack_938 = (uint *)0x0;
      bStack_8d8 = (byte)&uStack_948;
      uStack_8d7 = (undefined7)((ulong)&uStack_948 >> 8);
      uStack_8d0 = 0;
      puVar19 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x118);
      if (puVar19 == (uint *)0x0) {
        func_0x0eec74c0(0x118,0);
      }
      puStack_938 = puVar19 + 0x46;
      ppuStack_890 = &puStack_828;
      uStack_880 = uStack_880 & 0xffffffffffffff00;
      uStack_948 = puVar19;
      uStack_940 = puVar19;
      puStack_8b8 = puVar19;
      puStack_898 = &uStack_948;
      ppuStack_888 = &puStack_8b8;
      puStack_828 = puVar19;
      func_0x06523ef0(puVar19,&uStack_7f8);
      uStack_940 = puStack_8b8 + 0x46;
      if (pcStack_708 != (code *)0x0) {
        (*pcStack_708)(&uStack_720);
      }
      if (pcStack_750 != (code *)0x0) {
        (*pcStack_750)(&pcStack_768);
      }
      if (pcStack_790 != (code *)0x0) {
        (*pcStack_790)(&uStack_7a8);
      }
      if (pcStack_7d0 != (code *)0x0) {
        (*pcStack_7d0)(&uStack_7e8);
      }
      pcVar20 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
      if (pcVar20 == (code *)0x0) {
        func_0x0eec74c0(0x60,0);
      }
      *(undefined8 *)(pcVar20 + 8) = 0;
      *(undefined8 *)(pcVar20 + 0x10) = 0;
      *(undefined **)pcVar20 = &UNK_0f20feb0;
      uVar13 = func_0x0d858500(&uStack_948);
      pcVar1 = pcVar20 + 0x18;
      pcVar20[0x20] = (code)0x2;
      *(undefined4 *)(pcVar20 + 0x24) = uVar13;
      *(undefined4 *)(pcVar20 + 0x28) = 0;
      *(undefined8 *)(pcVar20 + 0x30) = 0;
      *(undefined8 *)(pcVar20 + 0x38) = 0;
      *(undefined8 *)(pcVar20 + 0x40) = 0;
      *(undefined **)(pcVar20 + 0x18) = &UNK_0f20ff00;
      *(uint *)(pcVar20 + 0x48) = (uint)uStack_948;
      *(undefined4 *)(pcVar20 + 0x4c) = uStack_948._4_4_;
      *(undefined4 *)(pcVar20 + 0x50) = (undefined4)uStack_940;
      *(undefined4 *)(pcVar20 + 0x54) = uStack_940._4_4_;
      *(uint **)(pcVar20 + 0x58) = puStack_938;
      uStack_948 = (uint *)0x0;
      uStack_940 = (uint *)0x0;
      puStack_938 = (uint *)0x0;
      uVar13 = func_0x0d858620(pcVar1);
      pcVar12 = pcStack_378;
      *(undefined4 *)(pcVar20 + 0x28) = uVar13;
      pcStack_380 = pcVar1;
      if (pcStack_378 != (code *)0x0) {
        LOCK();
        plVar17 = (long *)((long)pcStack_378 + 8);
        lVar27 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar27 == 0) {
          lVar27 = *(long *)pcStack_378;
          pcStack_378 = pcVar20;
          (**(code **)(lVar27 + 0x10))(pcVar12);
          FUN_0412c2d0(pcVar12);
          pcVar20 = pcStack_378;
        }
      }
      pcStack_378 = pcVar20;
      uStack_7e8 = (undefined4)uStack_168;
      uStack_7e4 = (uint)((ulong)uStack_168 >> 0x20);
      uStack_7f8 = (uint)uStack_178;
      uStack_7f4 = (undefined4)(uStack_178 >> 0x20);
      uStack_7f0._0_4_ = (undefined4)uStack_170;
      uStack_7f0._4_4_ = (undefined4)((ulong)uStack_170 >> 0x20);
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_7e0 = CONCAT44(uStack_15c,uStack_160);
      uStack_7d8 = CONCAT44(uStack_154,uStack_158);
      func_0x065281f0(&pcStack_7d0,auStack_150);
      puStack_898 = (undefined8 *)0x0;
      ppuStack_890 = (uint **)0x0;
      ppuStack_888 = (uint **)0x0;
      bStack_8d8 = (byte)&puStack_898;
      uStack_8d7 = (undefined7)((ulong)&puStack_898 >> 8);
      uStack_8d0 = 0;
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x140,0);
      }
      puVar3 = puVar18 + 0x28;
      puStack_898 = puVar18;
      ppuStack_888 = (uint **)puVar3;
      if ((uStack_7f8 & 1) == 0) {
        puVar18[2] = CONCAT44(uStack_7e4,uStack_7e8);
        *puVar18 = CONCAT44(uStack_7f4,uStack_7f8);
        puVar18[1] = CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0);
        ppuStack_890 = (uint **)puVar18;
      }
      else {
        ppuStack_890 = (uint **)puVar18;
        func_0x0412e5e0(puVar18,CONCAT44(uStack_7e4,uStack_7e8),
                        CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0));
      }
      *(undefined4 *)(puVar18 + 3) = (undefined4)uStack_7e0;
      *(undefined4 *)((long)puVar18 + 0x1c) = uStack_7e0._4_4_;
      *(undefined4 *)(puVar18 + 4) = (undefined4)uStack_7d8;
      *(undefined4 *)((long)puVar18 + 0x24) = uStack_7d8._4_4_;
      func_0x06523ef0(puVar18 + 5,&pcStack_7d0);
      ppuStack_890 = (uint **)puVar3;
      if (apcStack_6e0[0] != (code *)0x0) {
        (*apcStack_6e0[0])(auStack_6f8);
      }
      if (pcStack_728 != (code *)0x0) {
        (*pcStack_728)(&uStack_740);
      }
      if (pcStack_768 != (code *)0x0) {
        (*pcStack_768)(&lStack_780);
      }
      if ((code *)CONCAT44(uStack_7a8._4_4_,(undefined4)uStack_7a8) != (code *)0x0) {
        (*(code *)CONCAT44(uStack_7a8._4_4_,(undefined4)uStack_7a8))(auStack_7c8 + 8);
      }
      if ((uStack_7f8 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_7e4,uStack_7e8),
                        CONCAT44(uStack_7f4,uStack_7f8) & 0xfffffffffffffffe);
      }
      uVar14 = (**(code **)(*(long *)pcStack_380 + 0x20))();
      uVar24 = ((long)ppuStack_890 - (long)puStack_898 >> 6) * -0x3333333333333333;
      uVar22 = 0;
      if ((uVar14 != 0) && ((uint)uVar24 != 0)) {
        uVar26 = 0;
        uVar22 = 0;
        do {
          auVar30 = (**(code **)(*(long *)pcStack_380 + 0x28))(pcStack_380,uVar26);
          lVar16 = auVar30._8_8_;
          lVar27 = auVar30._0_8_;
          auVar30 = func_0x06527d70();
          if (auVar30._8_8_ == lVar16) {
            if (auVar30._0_8_ == 0) {
              lVar28 = func_0x048aead0(auVar30._8_8_);
              iVar15 = *(int *)(lVar28 + 8);
              if (lVar27 == 0) goto LAB_0a20cc41;
LAB_0a20cc22:
              if (iVar15 != *(int *)(lVar27 + 8)) goto LAB_0a20cc60;
            }
            else {
              iVar15 = *(int *)(auVar30._0_8_ + 8);
              if (lVar27 != 0) goto LAB_0a20cc22;
LAB_0a20cc41:
              lVar28 = func_0x048aead0(lVar16);
              if (iVar15 != *(int *)(lVar28 + 8)) goto LAB_0a20cc60;
            }
          }
          else {
LAB_0a20cc60:
            auVar30 = func_0x06527e30();
            if (auVar30._8_8_ == lVar16) {
              if (auVar30._0_8_ == 0) {
                lVar28 = func_0x048aead0(auVar30._8_8_);
                iVar15 = *(int *)(lVar28 + 8);
              }
              else {
                iVar15 = *(int *)(auVar30._0_8_ + 8);
              }
              if (lVar27 == 0) {
                lVar28 = func_0x048aead0(lVar16);
                iVar4 = *(int *)(lVar28 + 8);
              }
              else {
                iVar4 = *(int *)(lVar27 + 8);
              }
              if (iVar15 == iVar4) goto LAB_0a20ce58;
            }
            auVar30 = func_0x06527ef0();
            if (auVar30._8_8_ == lVar16) {
              if (auVar30._0_8_ == 0) {
                lVar28 = func_0x048aead0(auVar30._8_8_);
                iVar15 = *(int *)(lVar28 + 8);
              }
              else {
                iVar15 = *(int *)(auVar30._0_8_ + 8);
              }
              if (lVar27 == 0) {
                lVar28 = func_0x048aead0(lVar16);
                iVar4 = *(int *)(lVar28 + 8);
              }
              else {
                iVar4 = *(int *)(lVar27 + 8);
              }
              if (iVar15 == iVar4) goto LAB_0a20ce58;
            }
            auVar30 = func_0x06527fb0();
            if (auVar30._8_8_ == lVar16) {
              if (auVar30._0_8_ == 0) {
                lVar28 = func_0x048aead0(auVar30._8_8_);
                iVar15 = *(int *)(lVar28 + 8);
              }
              else {
                iVar15 = *(int *)(auVar30._0_8_ + 8);
              }
              if (lVar27 == 0) {
                lVar28 = func_0x048aead0(lVar16);
                iVar4 = *(int *)(lVar28 + 8);
              }
              else {
                iVar4 = *(int *)(lVar27 + 8);
              }
              if (iVar15 == iVar4) goto LAB_0a20ce58;
            }
            auVar30 = func_0x06528070();
            if (auVar30._8_8_ == lVar16) {
              if (auVar30._0_8_ == 0) {
                lVar28 = func_0x048aead0(auVar30._8_8_);
                iVar15 = *(int *)(lVar28 + 8);
              }
              else {
                iVar15 = *(int *)(auVar30._0_8_ + 8);
              }
              if (lVar27 == 0) {
                lVar28 = func_0x048aead0(lVar16);
                iVar4 = *(int *)(lVar28 + 8);
              }
              else {
                iVar4 = *(int *)(lVar27 + 8);
              }
              if (iVar15 == iVar4) goto LAB_0a20ce58;
            }
            auVar30 = func_0x06528130();
            if (auVar30._8_8_ == lVar16) {
              if (auVar30._0_8_ == 0) {
                lVar28 = func_0x048aead0(auVar30._8_8_);
                iVar15 = *(int *)(lVar28 + 8);
              }
              else {
                iVar15 = *(int *)(auVar30._0_8_ + 8);
              }
              if (lVar27 == 0) {
                lVar28 = func_0x048aead0(lVar16);
                iVar4 = *(int *)(lVar28 + 8);
              }
              else {
                iVar4 = *(int *)(lVar27 + 8);
              }
              if (iVar15 == iVar4) goto LAB_0a20ce58;
            }
            puVar18 = puStack_898;
            ppuVar7 = ppuStack_890;
            if (puStack_898[uVar22 * 0x28 + 4] != lVar16) goto joined_r0x0a20d070;
            if (puStack_898[uVar22 * 0x28 + 3] == 0) {
              lVar28 = func_0x048aead0();
              iVar15 = *(int *)(lVar28 + 8);
              if (lVar27 == 0) goto LAB_0a20ce41;
LAB_0a20ce28:
              if (iVar15 != *(int *)(lVar27 + 8)) goto LAB_0a20d05d;
            }
            else {
              iVar15 = *(int *)(puStack_898[uVar22 * 0x28 + 3] + 8);
              if (lVar27 != 0) goto LAB_0a20ce28;
LAB_0a20ce41:
              lVar27 = func_0x048aead0(lVar16);
              if (iVar15 != *(int *)(lVar27 + 8)) goto LAB_0a20d05d;
            }
            uVar22 = (ulong)((int)uVar22 + 1);
          }
LAB_0a20ce58:
        } while (((uint)uVar22 < (uint)uVar24) && (uVar26 = uVar26 + 1, uVar26 < uVar14));
        uVar24 = ((long)ppuStack_890 - (long)puStack_898 >> 6) * -0x3333333333333333;
      }
      puVar18 = puStack_398;
      if (uVar24 == uVar22) {
        puVar3 = puStack_390;
        if (puStack_398 != (undefined8 *)0x0) {
          while (puVar18 != puVar3) {
            func_0x05fe8450(puVar3 + -0x28);
            puVar3 = puVar3 + -0x28;
          }
          puStack_390 = puVar18;
          func_0x0412a280(puStack_398,(long)puStack_388 - (long)puStack_398);
        }
        puStack_388 = ppuStack_888;
        if (uStack_450 < puStack_448) {
          *uStack_450 = 0;
          uStack_450[1] = 0;
          uStack_450[2] = 0;
          *uStack_450 = pcStack_3c8;
          uStack_450[1] = uStack_3c0;
          uStack_450[2] = uStack_3b8;
          pcStack_3c8 = (code *)0x0;
          uStack_3c0 = 0;
          uStack_3b8 = 0;
          uStack_450[5] = uStack_3a0;
          uStack_450[3] = uStack_3b0;
          uStack_450[4] = uStack_3a8;
          uStack_3b0 = 0;
          uStack_3a8 = 0;
          uStack_3a0 = 0;
          uStack_450[6] = 0;
          uStack_450[7] = 0;
          uStack_450[8] = 0;
          uStack_450[6] = puStack_898;
          uStack_450[7] = ppuStack_890;
          uStack_450[8] = ppuStack_888;
          puStack_398 = (undefined8 *)0x0;
          puStack_390 = (undefined8 *)0x0;
          puStack_388 = (undefined8 *)0x0;
          uStack_450[9] = pcStack_380;
          uStack_450[10] = pcStack_378;
          pcStack_380 = (code *)0x0;
          pcStack_378 = (code *)0x0;
          uStack_450[0xb] = 0;
          uStack_450[0xc] = 0;
          uStack_450[0xd] = 0;
          uStack_450[0xb] = uStack_370;
          uStack_450[0xc] = uStack_368;
          uStack_450[0xd] = uStack_360;
          uStack_370 = 0;
          uStack_368 = 0;
          uStack_360 = 0;
          uStack_450 = uStack_450 + 0xe;
        }
        else {
          puStack_398 = puStack_898;
          puStack_390 = ppuStack_890;
          uStack_450 = (undefined8 *)func_0x0652ac80(&lStack_458,&pcStack_3c8);
        }
        plVar17 = uStack_450 + -0xe;
        lVar27 = (long)uStack_948;
      }
      else {
LAB_0a20d05d:
        puVar18 = puStack_898;
        ppuVar7 = ppuStack_890;
        if (puStack_898 != (undefined8 *)0x0) {
joined_r0x0a20d070:
          while (puVar3 = puStack_898, (uint **)puStack_898 != ppuVar7) {
            puStack_898 = puVar18;
            func_0x05fe8450(ppuVar7 + -0x28);
            puVar18 = puStack_898;
            ppuVar7 = ppuVar7 + -0x28;
            puStack_898 = puVar3;
          }
          ppuStack_890 = (uint **)puStack_898;
          puStack_898 = puVar18;
          func_0x0412a280(puVar18,(long)ppuStack_888 - (long)puVar18);
        }
        plVar17 = (long *)0xf6583a0;
        lVar27 = (long)uStack_948;
      }
      uStack_948 = (uint *)lVar27;
      if (lVar27 != 0) {
        if ((uint *)lVar27 != uStack_940) {
          lVar16 = (long)uStack_940 + -0x40;
          do {
            if (*(code **)(lVar16 + 0x18) != (code *)0x0) {
              (**(code **)(lVar16 + 0x18))(lVar16);
            }
            if (*(code **)(lVar16 + -0x30) != (code *)0x0) {
              (**(code **)(lVar16 + -0x30))(lVar16 + -0x48);
            }
            if (*(code **)(lVar16 + -0x70) != (code *)0x0) {
              (**(code **)(lVar16 + -0x70))(lVar16 + -0x88);
            }
            if (*(code **)(lVar16 + -0xb0) != (code *)0x0) {
              (**(code **)(lVar16 + -0xb0))(lVar16 + -200);
            }
            lVar28 = lVar16 + -0xd8;
            lVar16 = lVar16 + -0x118;
          } while (lVar28 != lVar27);
        }
        uStack_940 = (uint *)lVar27;
        func_0x0412a280(uStack_948,(long)puStack_938 - (long)uStack_948);
      }
      func_0x05f93280(&pcStack_3c8);
      if (plVar17 != &lStack_908) {
        func_0x066dff70(plVar17,lStack_908,lStack_900,
                        (lStack_900 - lStack_908 >> 4) * -0x5555555555555555);
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
        func_0x0412a280(uStack_168,uStack_178 & 0xfffffffffffffffe);
      }
      if ((uStack_928 & 1) != 0) {
        func_0x0412a280(lStack_918,CONCAT44(uStack_924,uStack_928) & 0xfffffffffffffffe);
      }
      uVar21 = uStack_568;
      auStack_4a0 = func_0x0a260100();
      lVar16 = lStack_4d0;
      lVar27 = lStack_4c8;
      if (lStack_4d0 != 0) {
        for (; lVar16 != lVar27; lVar27 = lVar27 + -0x30) {
          if ((*(byte *)(lVar27 + -0x20) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar27 + -0x10),
                            *(ulong *)(lVar27 + -0x20) & 0xfffffffffffffffe);
          }
        }
        lStack_4c8 = lVar16;
        func_0x0412a280(lStack_4d0,lStack_4c0 - lStack_4d0);
      }
      lVar28 = lStack_4d8;
      lVar16 = lStack_4e0;
      lVar27 = lStack_4e8;
      lStack_4e8 = 0;
      lStack_4e0 = 0;
      lStack_4d8 = 0;
      uStack_7f8 = (uint)lVar27;
      uStack_7f4 = (undefined4)((ulong)lVar27 >> 0x20);
      uStack_7f0._0_4_ = (undefined4)lVar16;
      uStack_7f0._4_4_ = (undefined4)((ulong)lVar16 >> 0x20);
      uStack_7e8 = (undefined4)lVar28;
      uStack_7e4 = (uint)((ulong)lVar28 >> 0x20);
      lStack_4d0 = 0;
      lStack_4c8 = 0;
      lStack_4c0 = 0;
      pcStack_7d0 = pcStack_4a8;
      uStack_7e0 = uStack_4b8;
      uStack_7d8 = uStack_4b0;
      uStack_4b8 = 0;
      uStack_4b0 = 0;
      pcStack_4a8 = (code *)0x0;
      puStack_7b8 = puStack_490;
      uStack_7b0 = uStack_488;
      uStack_7a8._0_4_ = (undefined4)uStack_480;
      uStack_7a8._4_4_ = (undefined4)((ulong)uStack_480 >> 0x20);
      uStack_7a0 = (undefined4)uStack_478;
      uStack_79c = (undefined4)((ulong)uStack_478 >> 0x20);
      uStack_798 = (undefined4)uStack_470;
      uStack_794 = (undefined4)((ulong)uStack_470 >> 0x20);
      uStack_480 = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      pcStack_790 = pcStack_468;
      plStack_788 = plStack_460;
      pcStack_468 = (code *)0x0;
      plStack_460 = (long *)0x0;
      lStack_780 = lStack_458;
      uStack_778 = (undefined4)uStack_450;
      uStack_774 = uStack_450._4_4_;
      puStack_770 = puStack_448;
      lStack_458 = 0;
      uStack_450 = (undefined8 *)0x0;
      puStack_448 = (undefined8 *)0x0;
      pcStack_768 = pcStack_440;
      uStack_760 = uStack_438;
      uStack_758 = uStack_430;
      pcStack_440 = (code *)0x0;
      uStack_438 = 0;
      uStack_430 = 0;
      pcStack_750 = pcStack_428;
      uStack_748 = uStack_420;
      uStack_740 = uStack_418;
      pcStack_428 = (code *)0x0;
      uStack_420 = 0;
      uStack_418 = 0;
      uStack_738 = uStack_410;
      uStack_730 = uStack_408;
      pcStack_728 = pcStack_400;
      uStack_410 = 0;
      uStack_408 = 0;
      pcStack_400 = (code *)0x0;
      uStack_720 = (undefined4)uStack_3f8;
      uStack_71c = uStack_3f8._4_4_;
      uStack_718 = (undefined4)uStack_3f0;
      uStack_714 = uStack_3f0._4_4_;
      uStack_710 = uStack_3e8;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      uStack_3e8 = 0;
      auStack_7c8 = auStack_4a0;
      func_0x0d84fd50(uVar21,&uStack_7f8);
      func_0x0651ffe0(&uStack_7f8);
      cVar11 = cStack_530;
      plVar17 = plStack_560;
      puVar10 = puStack_570;
      if (cStack_530 != '\0') {
        plStack_8c0 = (long *)auStack_548;
      }
      func_0x065af670(&uStack_7f8);
      if (&uStack_7e0 != puVar10) {
        bVar5 = (byte)*puVar10;
        if ((uStack_7e0 & 1) == 0) {
          if ((bVar5 & 1) == 0) {
            pcStack_7d0 = (code *)puVar10[2];
            uStack_7e0 = *puVar10;
            uStack_7d8 = puVar10[1];
          }
          else {
            func_0x04885070(&uStack_7e0,puVar10[2],puVar10[1]);
          }
        }
        else {
          bVar29 = (bVar5 & 1) != 0;
          pbVar25 = (byte *)((long)puVar10 + 1);
          if (bVar29) {
            pbVar25 = (byte *)puVar10[2];
          }
          uVar22 = (ulong)(bVar5 >> 1);
          if (bVar29) {
            uVar22 = puVar10[1];
          }
          func_0x04885120(&uStack_7e0,pbVar25,uVar22);
        }
      }
      auVar30 = func_0x0a26cb00();
      auStack_7c8 = auVar30;
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      puVar18[1] = 0;
      puVar18[2] = 0;
      *puVar18 = &UNK_0f20ff80;
      uStack_7a8 = (code *)(puVar18 + 3);
      *(undefined1 *)(puVar18 + 4) = 3;
      puVar18[5] = 0;
      puVar18[6] = 0;
      puVar18[7] = 0;
      puVar18[3] = &UNK_0f20ffd0;
      plVar6 = (long *)CONCAT44(uStack_79c,uStack_7a0);
      uStack_7a0 = SUB84(puVar18,0);
      uStack_79c = (undefined4)((ulong)puVar18 >> 0x20);
      if (plVar6 == (long *)0x0) {
LAB_0a20d608:
        uVar22 = plVar17[0x16];
        if (uVar22 < (ulong)plVar17[0x17]) goto LAB_0a20d618;
LAB_0a20d659:
        lVar27 = func_0x065b01f0(plVar17 + 0x15,&uStack_7f8);
      }
      else {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar27 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar27 != 0) goto LAB_0a20d608;
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0412c2d0(plVar6);
        uVar22 = plVar17[0x16];
        if ((ulong)plVar17[0x17] <= uVar22) goto LAB_0a20d659;
LAB_0a20d618:
        func_0x065b0410(uVar22,&uStack_7f8);
        lVar27 = uVar22 + 0x1b0;
        plVar17[0x16] = lVar27;
      }
      plVar17[0x16] = lVar27;
      func_0x0652dc20(&uStack_7f8);
      if ((long *)(lVar27 + -0x1b0) != plStack_8c0) {
        plVar17 = &lStack_900;
        if (cVar11 != '\0') {
          plVar17 = alStack_540;
        }
        func_0x066dff70((long *)(lVar27 + -0x1b0),*plStack_8c0,*plVar17,
                        (*plVar17 - *plStack_8c0 >> 4) * -0x5555555555555555);
      }
      lVar16 = lStack_908;
      lVar27 = lStack_900;
      if (lStack_908 != 0) {
        for (; lVar16 != lVar27; lVar27 = lVar27 + -0x30) {
          if ((*(byte *)(lVar27 + -0x20) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar27 + -0x10),
                            *(ulong *)(lVar27 + -0x20) & 0xfffffffffffffffe);
          }
        }
        lStack_900 = lVar16;
        func_0x0412a280(lStack_908,lStack_8f8 - lStack_908);
      }
      func_0x0651ffe0(&lStack_4d0);
      lVar16 = lStack_4e8;
      lVar27 = lStack_4e0;
      if (lStack_4e8 != 0) {
        for (; lVar16 != lVar27; lVar27 = lVar27 + -0x30) {
          if ((*(byte *)(lVar27 + -0x20) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar27 + -0x10),
                            *(ulong *)(lVar27 + -0x20) & 0xfffffffffffffffe);
          }
        }
        lStack_4e0 = lVar16;
        func_0x0412a280(lStack_4e8,lStack_4d8 - lStack_4e8);
      }
      lVar16 = lStack_818;
      lVar27 = lStack_810;
      if (lStack_818 != 0) {
        for (; lVar16 != lVar27; lVar27 = lVar27 + -0x30) {
          if ((*(byte *)(lVar27 + -0x20) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar27 + -0x10),
                            *(ulong *)(lVar27 + -0x20) & 0xfffffffffffffffe);
          }
        }
        lStack_810 = lVar16;
        func_0x0412a280(lStack_818,lStack_808 - lStack_818);
      }
      func_0x0a210ba0(&puStack_570);
      if ((bStack_8f0 & 1) != 0) {
        func_0x0412a280(puStack_8e0,
                        CONCAT26(uStack_8ea,CONCAT51(uStack_8ef,bStack_8f0)) & 0xfffffffffffffffe);
      }
      bStack_8f0 = 0x14;
      uStack_8ef = 0x656b636170;
      uStack_8ea = 0x5374;
      uStack_8e8 = 0x65;
      uStack_8e7 = 0x646e;
      uStack_8e5 = 0;
      puStack_570 = (ulong *)&bStack_8f0;
      uStack_568 = uStack_3d0;
      plStack_560 = &lStack_288;
      pcStack_558 = (code *)&UNK_0a1192a0;
      cStack_550 = '\x01';
      auStack_548[0] = 0;
      cStack_530 = '\0';
      uStack_508 = 0;
      uStack_4f0 = 0;
      puStack_518 = puStack_8e0;
      bStack_528 = 0x14;
      uStack_527 = 0x5374656b636170;
      uStack_520 = 0x65;
      uStack_51f = 0x646e;
      uStack_51d = 0;
      uStack_51c = uStack_8e4;
      uStack_51b = uStack_8e3;
      uStack_51a = uStack_8e2;
      uStack_519 = uStack_8e1;
      cStack_510 = '\x01';
      lVar27 = (long)&uStack_7f8 + 1;
                    /* WARNING: Ignoring partial resolution of indirect */
      uStack_527._0_1_ = *(undefined1 *)(*plStack_180 + 0x1c0);
      lStack_818 = 0;
      lStack_810 = 0;
      lStack_808 = 0;
      (*(code *)&UNK_0a1192a0)(&uStack_7f8);
      func_0x066dff70(&lStack_818,CONCAT44(uStack_7f4,uStack_7f8),
                      CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0),
                      (CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0) -
                       CONCAT44(uStack_7f4,uStack_7f8) >> 4) * -0x5555555555555555);
      func_0x0d84fd50(uStack_568,&uStack_7f8);
      func_0x0651ffe0(&uStack_7f8);
      bVar5 = bStack_528;
      if (cStack_550 == '\x01') {
        if (cStack_510 == '\0') goto LAB_0a210064;
        if ((bStack_528 & 1) == 0) {
          uVar22 = (ulong)(bStack_528 >> 1);
        }
        else {
          uVar22 = CONCAT17(uStack_519,
                            CONCAT16(uStack_51a,
                                     CONCAT15(uStack_51b,
                                              CONCAT14(uStack_51c,
                                                       CONCAT13(uStack_51d,
                                                                CONCAT21(uStack_51f,uStack_520))))))
          ;
        }
        uVar24 = uVar22 + 0x11;
        if (0xfffffffffffffff7 < uVar24) goto LAB_0a21006e;
        if (uVar24 < 0x17) {
          uStack_7f4 = 0;
          uStack_7f0 = 0;
          uStack_7e8 = 0;
          uStack_7e4 = 0;
          uStack_7f8 = (uint)(byte)((char)uVar24 * '\x02');
          uVar24 = 0;
          if (uVar22 != 0) goto joined_r0x0a20dc46;
        }
        else {
          lVar16 = 0x1a;
          if ((uVar24 | 7) != 0x17) {
            lVar16 = (uVar24 | 7) + 1;
          }
          lVar27 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar16);
          if (lVar27 == 0) {
            func_0x0eec74c0(lVar16,0);
          }
          uStack_7f8 = (uint)lVar16 | 1;
          uStack_7f4 = (undefined4)((ulong)lVar16 >> 0x20);
          uStack_7e8 = (undefined4)lVar27;
          uStack_7e4 = (uint)((ulong)lVar27 >> 0x20);
joined_r0x0a20dc46:
          uStack_7f0 = uVar24;
          puVar23 = &uStack_527;
          if ((bVar5 & 1) != 0) {
            puVar23 = puStack_518;
          }
          func_0x0eee2ee0(lVar27,puVar23,uVar22);
        }
        *(undefined8 *)(lVar27 + uVar22) = _DAT_014b94d1;
        ((undefined8 *)(lVar27 + uVar22))[1] = _UNK_014b94d9;
        *(undefined2 *)(lVar27 + 0x10 + uVar22) = 0x6c;
      }
      else {
        if (cStack_510 == '\0') goto LAB_0a210064;
        if ((bStack_528 & 1) == 0) {
          uStack_7e8 = SUB84(puStack_518,0);
          uStack_7e4 = (uint)((ulong)puStack_518 >> 0x20);
          uStack_7f0._0_4_ = CONCAT13(uStack_51d,CONCAT21(uStack_51f,uStack_520));
          uStack_7f8 = (uint)CONCAT71(uStack_527,bStack_528);
          uStack_7f4 = (undefined4)((uint7)uStack_527 >> 0x18);
          uStack_7f0._4_4_ =
               (undefined4)
               (CONCAT17(uStack_519,
                         CONCAT16(uStack_51a,
                                  CONCAT15(uStack_51b,CONCAT14(uStack_51c,(undefined4)uStack_7f0))))
               >> 0x20);
        }
        else {
          func_0x0412e5e0(&uStack_7f8,puStack_518,
                          CONCAT17(uStack_519,
                                   CONCAT16(uStack_51a,
                                            CONCAT15(uStack_51b,
                                                     CONCAT14(uStack_51c,
                                                              CONCAT13(uStack_51d,
                                                                       CONCAT21(uStack_51f,
                                                                                uStack_520)))))));
        }
      }
      uStack_4b8 = 0;
      uStack_4b0 = 0;
      lStack_4c8 = 0;
      lStack_4c0 = 0;
      lStack_4d8 = 0;
      lStack_4d0 = 0;
      lStack_4e8 = 0;
      lStack_4e0 = 0;
      pcStack_4a8 = (code *)0x0;
      func_0x048b1dc0(auStack_4a0);
      func_0x048b1dc0(&puStack_490);
      uStack_3f0 = 0;
      uStack_3e8 = 0;
      pcStack_400 = (code *)0x0;
      uStack_3f8 = 0;
      uStack_410 = 0;
      uStack_408 = 0;
      uStack_420 = 0;
      uStack_418 = 0;
      uStack_430 = 0;
      pcStack_428 = (code *)0x0;
      pcStack_440 = (code *)0x0;
      uStack_438 = 0;
      uStack_450 = (undefined8 *)0x0;
      puStack_448 = (undefined8 *)0x0;
      plStack_460 = (long *)0x0;
      lStack_458 = 0;
      uStack_470 = 0;
      pcStack_468 = (code *)0x0;
      uStack_480 = 0;
      uStack_478 = 0;
      if ((uStack_4b8 & 1) == 0) {
        if ((uStack_7f8 & 1) == 0) {
          pcStack_4a8 = (code *)CONCAT44(uStack_7e4,uStack_7e8);
          uStack_4b8 = CONCAT44(uStack_7f4,uStack_7f8);
          uStack_4b0 = CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0);
        }
        else {
          func_0x04885070(&uStack_4b8,CONCAT44(uStack_7e4,uStack_7e8),
                          CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0));
        }
      }
      else {
        bVar29 = (uStack_7f8 & 1) != 0;
        lVar27 = (long)&uStack_7f8 + 1;
        if (bVar29) {
          lVar27 = CONCAT44(uStack_7e4,uStack_7e8);
        }
        uVar22 = (ulong)((byte)uStack_7f8 >> 1);
        if (bVar29) {
          uVar22 = CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0);
        }
        func_0x04885120(&uStack_4b8,lVar27,uVar22);
      }
      if ((uStack_7f8 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_7e4,uStack_7e8),
                        CONCAT44(uStack_7f4,uStack_7f8) & 0xfffffffffffffffe);
      }
      lStack_908 = 0;
      lStack_900 = 0;
      lStack_8f8 = 0;
      plStack_8c0 = &lStack_908;
      func_0x0652b220();
      func_0x066dff70(&lStack_4e8,lStack_908,lStack_900,
                      (lStack_900 - lStack_908 >> 4) * -0x5555555555555555);
      bStack_8d8 = 0x10;
      uStack_8d7 = 0x6361626c6c6163;
      uStack_8d0 = 0x6b;
      uStack_8cf = 0;
      func_0x0a26d1b0(&uStack_178,&bStack_8d8);
      puStack_8b8 = (uint *)0x736e6f6974706f0e;
      uStack_8b0 = 0;
      func_0x0a267e50(&pcStack_3c8,&puStack_8b8);
      ppuStack_888 = (uint **)0x0;
      uStack_870 = 0;
      uStack_838 = 0;
      uStack_830 = 0;
      plStack_848 = (long *)0x0;
      uStack_840 = 0;
      puStack_858 = (undefined8 *)0x0;
      plStack_850 = (long *)0x0;
      puStack_868 = (undefined8 *)0x0;
      puStack_860 = (undefined8 *)0x0;
      puStack_898 = (undefined8 *)0x0;
      ppuStack_890 = (uint **)0x0;
      uStack_880 = 0x6972637362757312;
      uStack_878 = 0x6562;
      func_0x06523ef0(&uStack_7f8,auStack_150);
      func_0x06523ef0(apcStack_6e0,&uStack_3a0);
      uStack_928 = 0;
      uStack_924 = 0;
      uStack_920 = 0;
      uStack_91f = 0;
      uStack_91e = 0;
      uStack_91c = 0;
      lStack_918 = 0;
      puStack_828 = &uStack_928;
      uStack_820 = 0;
      lVar27 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x230);
      if (lVar27 == 0) {
        func_0x0eec74c0(0x230,0);
      }
      uStack_928 = (uint)lVar27;
      uStack_924 = (undefined4)((ulong)lVar27 >> 0x20);
      uStack_920 = (undefined1)lVar27;
      uStack_91f = (undefined1)((ulong)lVar27 >> 8);
      uStack_91e = (undefined2)((ulong)lVar27 >> 0x10);
      lStack_918 = lVar27 + 0x230;
      uStack_948 = &uStack_928;
      uStack_940 = (uint *)&lStack_3d8;
      puStack_938 = (uint *)&lStack_8a0;
      uStack_930 = 0;
      uStack_91c = uStack_924;
      lStack_8a0 = lVar27;
      lStack_3d8 = lVar27;
      func_0x06523ef0(lVar27,&uStack_7f8);
      lStack_8a0 = lStack_8a0 + 0x118;
      func_0x06523ef0(lStack_8a0,apcStack_6e0);
      lVar27 = lStack_8a0 + 0x118;
      uStack_920 = (undefined1)lVar27;
      uStack_91f = (undefined1)((ulong)lVar27 >> 8);
      uStack_91e = (undefined2)((ulong)lVar27 >> 0x10);
      uStack_91c = (undefined4)((ulong)lVar27 >> 0x20);
      if (pcStack_5f0 != (code *)0x0) {
        (*pcStack_5f0)(auStack_608);
      }
      if (pcStack_638 != (code *)0x0) {
        (*pcStack_638)(auStack_650);
      }
      if (pcStack_678 != (code *)0x0) {
        (*pcStack_678)(auStack_690);
      }
      if (pcStack_6b8 != (code *)0x0) {
        (*pcStack_6b8)(auStack_6d0);
      }
      if (pcStack_708 != (code *)0x0) {
        (*pcStack_708)(&uStack_720);
      }
      if (pcStack_750 != (code *)0x0) {
        (*pcStack_750)(&pcStack_768);
      }
      if (pcStack_790 != (code *)0x0) {
        (*pcStack_790)(&uStack_7a8);
      }
      if (pcStack_7d0 != (code *)0x0) {
        (*pcStack_7d0)(&uStack_7e8);
      }
      plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
      if (plVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x60,0);
      }
      plVar17[1] = 0;
      plVar17[2] = 0;
      *plVar17 = (long)&UNK_0f210030;
      uVar13 = func_0x0d858500(&uStack_928);
      plVar6 = plVar17 + 3;
      *(undefined1 *)(plVar17 + 4) = 2;
      *(undefined4 *)((long)plVar17 + 0x24) = uVar13;
      *(undefined4 *)(plVar17 + 5) = 0;
      plVar17[6] = 0;
      plVar17[7] = 0;
      plVar17[8] = 0;
      plVar17[3] = (long)&UNK_0f210080;
      *(uint *)(plVar17 + 9) = uStack_928;
      *(undefined4 *)((long)plVar17 + 0x4c) = uStack_924;
      *(uint *)(plVar17 + 10) = CONCAT22(uStack_91e,CONCAT11(uStack_91f,uStack_920));
      *(undefined4 *)((long)plVar17 + 0x54) = uStack_91c;
      plVar17[0xb] = lStack_918;
      uStack_928 = 0;
      uStack_924 = 0;
      uStack_920 = 0;
      uStack_91f = 0;
      uStack_91e = 0;
      uStack_91c = 0;
      lStack_918 = 0;
      uVar13 = func_0x0d858620(plVar6);
      plVar2 = plStack_848;
      *(undefined4 *)(plVar17 + 5) = uVar13;
      plStack_850 = plVar6;
      if (plStack_848 != (long *)0x0) {
        LOCK();
        plVar6 = plStack_848 + 1;
        lVar27 = *plVar6;
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (lVar27 == 0) {
          lVar27 = *plStack_848;
          plStack_848 = plVar17;
          (**(code **)(lVar27 + 0x10))(plVar2);
          FUN_0412c2d0(plVar2);
          plVar17 = plStack_848;
        }
      }
      plStack_848 = plVar17;
      func_0x0a26ae50();
      uStack_7e8 = (undefined4)uStack_168;
      uStack_7e4 = (uint)((ulong)uStack_168 >> 0x20);
      uStack_7f8 = (uint)uStack_178;
      uStack_7f4 = (undefined4)(uStack_178 >> 0x20);
      uStack_7f0._0_4_ = (undefined4)uStack_170;
      uStack_7f0._4_4_ = (undefined4)((ulong)uStack_170 >> 0x20);
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_7e0 = CONCAT44(uStack_15c,uStack_160);
      uStack_7d8 = CONCAT44(uStack_154,uStack_158);
      func_0x065281f0(&pcStack_7d0,auStack_150);
      uStack_6a8 = uStack_3b8;
      pcStack_6b8 = pcStack_3c8;
      uStack_6b0 = uStack_3c0;
      pcStack_3c8 = (code *)0x0;
      uStack_3c0 = 0;
      uStack_3b8 = 0;
      uStack_6a0 = (undefined4)uStack_3b0;
      uStack_69c = uStack_3b0._4_4_;
      uStack_698 = (undefined4)uStack_3a8;
      uStack_694 = uStack_3a8._4_4_;
      func_0x065281f0(auStack_690,&uStack_3a0);
      uStack_948 = (uint *)0x0;
      uStack_940 = (uint *)0x0;
      puStack_938 = (uint *)0x0;
      puStack_828 = (uint *)&uStack_948;
      uStack_820 = 0;
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x280);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x280,0);
      }
      puVar3 = puVar18 + 0x50;
      uStack_948 = (uint *)puVar18;
      uStack_940 = (uint *)puVar18;
      puStack_938 = (uint *)puVar3;
      if ((uStack_7f8 & 1) == 0) {
        puVar18[2] = CONCAT44(uStack_7e4,uStack_7e8);
        *puVar18 = CONCAT44(uStack_7f4,uStack_7f8);
        puVar18[1] = CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0);
      }
      else {
        func_0x0412e5e0(puVar18,CONCAT44(uStack_7e4,uStack_7e8),
                        CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0));
      }
      *(undefined4 *)(puVar18 + 3) = (undefined4)uStack_7e0;
      *(undefined4 *)((long)puVar18 + 0x1c) = uStack_7e0._4_4_;
      *(undefined4 *)(puVar18 + 4) = (undefined4)uStack_7d8;
      *(undefined4 *)((long)puVar18 + 0x24) = uStack_7d8._4_4_;
      func_0x06523ef0(puVar18 + 5,&pcStack_7d0);
      if (((ulong)pcStack_6b8 & 1) == 0) {
        puVar18[0x2a] = uStack_6a8;
        puVar18[0x28] = pcStack_6b8;
        puVar18[0x29] = uStack_6b0;
      }
      else {
        func_0x0412e5e0(puVar18 + 0x28,uStack_6a8,uStack_6b0);
      }
      *(undefined4 *)(puVar18 + 0x2b) = uStack_6a0;
      *(undefined4 *)((long)puVar18 + 0x15c) = uStack_69c;
      *(undefined4 *)(puVar18 + 0x2c) = uStack_698;
      *(undefined4 *)((long)puVar18 + 0x164) = uStack_694;
      func_0x06523ef0(puVar18 + 0x2d,auStack_690);
      uStack_940 = (uint *)puVar3;
      if (pcStack_5a0 != (code *)0x0) {
        (*pcStack_5a0)(auStack_5b8);
      }
      if (pcStack_5e8 != (code *)0x0) {
        (*pcStack_5e8)(auStack_600);
      }
      if (pcStack_628 != (code *)0x0) {
        (*pcStack_628)(auStack_640);
      }
      if (pcStack_668 != (code *)0x0) {
        (*pcStack_668)(auStack_680);
      }
      if (((ulong)pcStack_6b8 & 1) != 0) {
        func_0x0412a280(uStack_6a8,(ulong)pcStack_6b8 & 0xfffffffffffffffe);
      }
      if (apcStack_6e0[0] != (code *)0x0) {
        (*apcStack_6e0[0])(auStack_6f8);
      }
      if (pcStack_728 != (code *)0x0) {
        (*pcStack_728)(&uStack_740);
      }
      if (pcStack_768 != (code *)0x0) {
        (*pcStack_768)(&lStack_780);
      }
      if (uStack_7a8 != (code *)0x0) {
        (*uStack_7a8)(auStack_7c8 + 8);
      }
      if ((uStack_7f8 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_7e4,uStack_7e8),
                        CONCAT44(uStack_7f4,uStack_7f8) & 0xfffffffffffffffe);
      }
      uVar14 = (**(code **)(*plStack_850 + 0x20))();
      uVar24 = ((long)uStack_940 - (long)uStack_948 >> 6) * -0x3333333333333333;
      uVar22 = 0;
      if ((uVar14 != 0) && ((uint)uVar24 != 0)) {
        uVar26 = 0;
        uVar22 = 0;
        do {
          auVar30 = (**(code **)(*plStack_850 + 0x28))(plStack_850,uVar26);
          lVar16 = auVar30._8_8_;
          lVar27 = auVar30._0_8_;
          auVar30 = func_0x06527d70();
          if (auVar30._8_8_ == lVar16) {
            if (auVar30._0_8_ == 0) {
              lVar28 = func_0x048aead0(auVar30._8_8_);
              iVar15 = *(int *)(lVar28 + 8);
              if (lVar27 == 0) goto LAB_0a20e400;
LAB_0a20e3e1:
              if (iVar15 != *(int *)(lVar27 + 8)) goto LAB_0a20e420;
            }
            else {
              iVar15 = *(int *)(auVar30._0_8_ + 8);
              if (lVar27 != 0) goto LAB_0a20e3e1;
LAB_0a20e400:
              lVar28 = func_0x048aead0(lVar16);
              if (iVar15 != *(int *)(lVar28 + 8)) goto LAB_0a20e420;
            }
          }
          else {
LAB_0a20e420:
            auVar30 = func_0x06527e30();
            if (auVar30._8_8_ == lVar16) {
              if (auVar30._0_8_ == 0) {
                lVar28 = func_0x048aead0(auVar30._8_8_);
                iVar15 = *(int *)(lVar28 + 8);
              }
              else {
                iVar15 = *(int *)(auVar30._0_8_ + 8);
              }
              if (lVar27 == 0) {
                lVar28 = func_0x048aead0(lVar16);
                iVar4 = *(int *)(lVar28 + 8);
              }
              else {
                iVar4 = *(int *)(lVar27 + 8);
              }
              if (iVar15 == iVar4) goto LAB_0a20e617;
            }
            auVar30 = func_0x06527ef0();
            if (auVar30._8_8_ == lVar16) {
              if (auVar30._0_8_ == 0) {
                lVar28 = func_0x048aead0(auVar30._8_8_);
                iVar15 = *(int *)(lVar28 + 8);
              }
              else {
                iVar15 = *(int *)(auVar30._0_8_ + 8);
              }
              if (lVar27 == 0) {
                lVar28 = func_0x048aead0(lVar16);
                iVar4 = *(int *)(lVar28 + 8);
              }
              else {
                iVar4 = *(int *)(lVar27 + 8);
              }
              if (iVar15 == iVar4) goto LAB_0a20e617;
            }
            auVar30 = func_0x06527fb0();
            if (auVar30._8_8_ == lVar16) {
              if (auVar30._0_8_ == 0) {
                lVar28 = func_0x048aead0(auVar30._8_8_);
                iVar15 = *(int *)(lVar28 + 8);
              }
              else {
                iVar15 = *(int *)(auVar30._0_8_ + 8);
              }
              if (lVar27 == 0) {
                lVar28 = func_0x048aead0(lVar16);
                iVar4 = *(int *)(lVar28 + 8);
              }
              else {
                iVar4 = *(int *)(lVar27 + 8);
              }
              if (iVar15 == iVar4) goto LAB_0a20e617;
            }
            auVar30 = func_0x06528070();
            if (auVar30._8_8_ == lVar16) {
              if (auVar30._0_8_ == 0) {
                lVar28 = func_0x048aead0(auVar30._8_8_);
                iVar15 = *(int *)(lVar28 + 8);
              }
              else {
                iVar15 = *(int *)(auVar30._0_8_ + 8);
              }
              if (lVar27 == 0) {
                lVar28 = func_0x048aead0(lVar16);
                iVar4 = *(int *)(lVar28 + 8);
              }
              else {
                iVar4 = *(int *)(lVar27 + 8);
              }
              if (iVar15 == iVar4) goto LAB_0a20e617;
            }
            auVar30 = func_0x06528130();
            if (auVar30._8_8_ == lVar16) {
              if (auVar30._0_8_ == 0) {
                lVar28 = func_0x048aead0(auVar30._8_8_);
                iVar15 = *(int *)(lVar28 + 8);
              }
              else {
                iVar15 = *(int *)(auVar30._0_8_ + 8);
              }
              if (lVar27 == 0) {
                lVar28 = func_0x048aead0(lVar16);
                iVar4 = *(int *)(lVar28 + 8);
              }
              else {
                iVar4 = *(int *)(lVar27 + 8);
              }
              if (iVar15 == iVar4) goto LAB_0a20e617;
            }
            puVar18 = (undefined8 *)uStack_948;
            puVar3 = (undefined8 *)uStack_940;
            if (*(long *)((long)uStack_948 + (uVar22 * 0x28 + 4) * 8) != lVar16)
            goto joined_r0x0a20e821;
            if (*(long *)((long)uStack_948 + (uVar22 * 0x28 + 3) * 8) == 0) {
              lVar28 = func_0x048aead0();
              iVar15 = *(int *)(lVar28 + 8);
              if (lVar27 == 0) goto LAB_0a20e5ff;
LAB_0a20e5e6:
              if (iVar15 != *(int *)(lVar27 + 8)) goto LAB_0a20e811;
            }
            else {
              iVar15 = *(int *)(*(long *)((long)uStack_948 + (uVar22 * 0x28 + 3) * 8) + 8);
              if (lVar27 != 0) goto LAB_0a20e5e6;
LAB_0a20e5ff:
              lVar27 = func_0x048aead0(lVar16);
              if (iVar15 != *(int *)(lVar27 + 8)) goto LAB_0a20e811;
            }
            uVar22 = (ulong)((int)uVar22 + 1);
          }
LAB_0a20e617:
        } while (((uint)uVar22 < (uint)uVar24) && (uVar26 = uVar26 + 1, uVar26 < uVar14));
        uVar24 = ((long)uStack_940 - (long)uStack_948 >> 6) * -0x3333333333333333;
      }
      puVar18 = puStack_868;
      if (uVar24 == uVar22) {
        puVar3 = puStack_860;
        if (puStack_868 != (undefined8 *)0x0) {
          while (puVar18 != puVar3) {
            func_0x05fe8450(puVar3 + -0x28);
            puVar3 = puVar3 + -0x28;
          }
          puStack_860 = puVar18;
          func_0x0412a280(puStack_868,(long)puStack_858 - (long)puStack_868);
        }
        puStack_858 = (undefined8 *)puStack_938;
        if (uStack_450 < puStack_448) {
          *uStack_450 = 0;
          uStack_450[1] = 0;
          uStack_450[2] = 0;
          *uStack_450 = puStack_898;
          uStack_450[1] = ppuStack_890;
          uStack_450[2] = ppuStack_888;
          puStack_898 = (undefined8 *)0x0;
          ppuStack_890 = (uint **)0x0;
          ppuStack_888 = (uint **)0x0;
          uStack_450[5] = uStack_870;
          uStack_450[3] = uStack_880;
          uStack_450[4] = uStack_878;
          uStack_880 = 0;
          uStack_878 = 0;
          uStack_870 = 0;
          uStack_450[6] = 0;
          uStack_450[7] = 0;
          uStack_450[8] = 0;
          uStack_450[6] = uStack_948;
          uStack_450[7] = uStack_940;
          uStack_450[8] = puStack_938;
          puStack_868 = (undefined8 *)0x0;
          puStack_860 = (undefined8 *)0x0;
          puStack_858 = (undefined8 *)0x0;
          uStack_450[9] = plStack_850;
          uStack_450[10] = plStack_848;
          plStack_850 = (long *)0x0;
          plStack_848 = (undefined8 *)0x0;
          uStack_450[0xb] = 0;
          uStack_450[0xc] = 0;
          uStack_450[0xd] = 0;
          *(undefined4 *)(uStack_450 + 0xb) = (undefined4)uStack_840;
          *(undefined4 *)((long)uStack_450 + 0x5c) = uStack_840._4_4_;
          *(undefined4 *)(uStack_450 + 0xc) = (undefined4)uStack_838;
          *(undefined4 *)((long)uStack_450 + 100) = uStack_838._4_4_;
          uStack_450[0xd] = uStack_830;
          uStack_840 = 0;
          uStack_838 = 0;
          uStack_830 = 0;
          uStack_450 = uStack_450 + 0xe;
        }
        else {
          puStack_868 = (undefined8 *)uStack_948;
          puStack_860 = (undefined8 *)uStack_940;
          uStack_450 = (undefined8 *)func_0x0652ac80(&lStack_458,&puStack_898);
        }
        plVar17 = uStack_450 + -0xe;
        lVar27 = CONCAT44(uStack_924,uStack_928);
      }
      else {
LAB_0a20e811:
        puVar18 = (undefined8 *)uStack_948;
        puVar3 = (undefined8 *)uStack_940;
        if (uStack_948 != (uint *)0x0) {
joined_r0x0a20e821:
          while (puVar8 = (undefined8 *)uStack_948, uStack_948 != (uint *)puVar3) {
            uStack_948 = (uint *)puVar18;
            func_0x05fe8450(puVar3 + -0x28);
            puVar18 = (undefined8 *)uStack_948;
            puVar3 = puVar3 + -0x28;
            uStack_948 = (uint *)puVar8;
          }
          uStack_940 = uStack_948;
          uStack_948 = (uint *)puVar18;
          func_0x0412a280(puVar18,(long)puStack_938 - (long)puVar18);
        }
        plVar17 = (long *)0xf658418;
        lVar27 = CONCAT44(uStack_924,uStack_928);
      }
      if (lVar27 != 0) {
        lVar28 = CONCAT44(uStack_91c,CONCAT22(uStack_91e,CONCAT11(uStack_91f,uStack_920)));
        lVar16 = lVar27;
        if (lVar27 != lVar28) {
          lVar16 = lVar28 + -0x40;
          do {
            if (*(code **)(lVar16 + 0x18) != (code *)0x0) {
              (**(code **)(lVar16 + 0x18))(lVar16);
            }
            if (*(code **)(lVar16 + -0x30) != (code *)0x0) {
              (**(code **)(lVar16 + -0x30))(lVar16 + -0x48);
            }
            if (*(code **)(lVar16 + -0x70) != (code *)0x0) {
              (**(code **)(lVar16 + -0x70))(lVar16 + -0x88);
            }
            if (*(code **)(lVar16 + -0xb0) != (code *)0x0) {
              (**(code **)(lVar16 + -0xb0))(lVar16 + -200);
            }
            lVar28 = lVar16 + -0xd8;
            lVar16 = lVar16 + -0x118;
          } while (lVar28 != lVar27);
          lVar16 = CONCAT44(uStack_924,uStack_928);
        }
        uStack_920 = (undefined1)lVar27;
        uStack_91f = (undefined1)((ulong)lVar27 >> 8);
        uStack_91e = (undefined2)((ulong)lVar27 >> 0x10);
        uStack_91c = (undefined4)((ulong)lVar27 >> 0x20);
        func_0x0412a280(lVar16,lStack_918 - lVar16);
      }
      func_0x05f93280(&puStack_898);
      if (plVar17 != &lStack_908) {
        func_0x066dff70(plVar17,lStack_908,lStack_900,
                        (lStack_900 - lStack_908 >> 4) * -0x5555555555555555);
      }
      if (pcStack_2b0 != (code *)0x0) {
        (*pcStack_2b0)(auStack_2c8);
      }
      if (pcStack_2f8 != (code *)0x0) {
        (*pcStack_2f8)(auStack_310);
      }
      if (pcStack_338 != (code *)0x0) {
        (*pcStack_338)(auStack_350);
      }
      if (pcStack_378 != (code *)0x0) {
        (*pcStack_378)(&puStack_390);
      }
      if (((ulong)pcStack_3c8 & 1) != 0) {
        func_0x0412a280(uStack_3b8,(ulong)pcStack_3c8 & 0xfffffffffffffffe);
      }
      if (((ulong)puStack_8b8 & 1) != 0) {
        func_0x0412a280(uStack_8a8,(ulong)puStack_8b8 & 0xfffffffffffffffe);
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
        func_0x0412a280(uStack_168,uStack_178 & 0xfffffffffffffffe);
      }
      if ((bStack_8d8 & 1) != 0) {
        func_0x0412a280(uStack_8c8,CONCAT71(uStack_8d7,bStack_8d8) & 0xfffffffffffffffe);
      }
      uStack_928 = 0x6c616310;
      uStack_924 = 0x6361626c;
      uStack_920 = 0x6b;
      uStack_91f = 0;
      func_0x0a26d1b0(&uStack_178,&uStack_928);
      uStack_3b8 = 0;
      uStack_3a0 = 0;
      uStack_368 = 0;
      uStack_360 = 0;
      pcStack_378 = (code *)0x0;
      uStack_370 = 0;
      puStack_388 = (undefined8 *)0x0;
      pcStack_380 = (code *)0x0;
      puStack_398 = (undefined8 *)0x0;
      puStack_390 = (undefined8 *)0x0;
      pcStack_3c8 = (code *)0x0;
      uStack_3c0 = 0;
      uStack_3b0 = 0x63736275736e7516;
      uStack_3a8 = 0x65626972;
      func_0x06523ef0(&uStack_7f8,auStack_150);
      uStack_948 = (uint *)0x0;
      uStack_940 = (uint *)0x0;
      puStack_938 = (uint *)0x0;
      bStack_8d8 = (byte)&uStack_948;
      uStack_8d7 = (undefined7)((ulong)&uStack_948 >> 8);
      uStack_8d0 = 0;
      puVar19 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x118);
      if (puVar19 == (uint *)0x0) {
        func_0x0eec74c0(0x118,0);
      }
      puStack_938 = puVar19 + 0x46;
      puStack_898 = &uStack_948;
      ppuStack_890 = &puStack_828;
      ppuStack_888 = &puStack_8b8;
      uStack_880 = uStack_880 & 0xffffffffffffff00;
      uStack_948 = puVar19;
      uStack_940 = puVar19;
      puStack_8b8 = puVar19;
      puStack_828 = puVar19;
      func_0x06523ef0(puVar19,&uStack_7f8);
      uStack_940 = puStack_8b8 + 0x46;
      if (pcStack_708 != (code *)0x0) {
        (*pcStack_708)(&uStack_720);
      }
      if (pcStack_750 != (code *)0x0) {
        (*pcStack_750)(&pcStack_768);
      }
      if (pcStack_790 != (code *)0x0) {
        (*pcStack_790)(&uStack_7a8);
      }
      if (pcStack_7d0 != (code *)0x0) {
        (*pcStack_7d0)(&uStack_7e8);
      }
      pcVar20 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
      if (pcVar20 == (code *)0x0) {
        func_0x0eec74c0(0x60,0);
      }
      *(undefined8 *)((long)pcVar20 + 8) = 0;
      *(undefined8 *)((long)pcVar20 + 0x10) = 0;
      *(undefined **)pcVar20 = &UNK_0f210120;
      uVar13 = func_0x0d858500(&uStack_948);
      plVar17 = (long *)((long)pcVar20 + 0x18);
      *(undefined1 *)((long)pcVar20 + 0x20) = 2;
      *(undefined4 *)((long)pcVar20 + 0x24) = uVar13;
      *(undefined4 *)((long)pcVar20 + 0x28) = 0;
      *(undefined8 *)((long)pcVar20 + 0x30) = 0;
      *(undefined8 *)((long)pcVar20 + 0x38) = 0;
      *(undefined8 *)((long)pcVar20 + 0x40) = 0;
      *(undefined **)((long)pcVar20 + 0x18) = &UNK_0f210170;
      *(uint *)((long)pcVar20 + 0x48) = (uint)uStack_948;
      *(undefined4 *)((long)pcVar20 + 0x4c) = uStack_948._4_4_;
      *(undefined4 *)((long)pcVar20 + 0x50) = (undefined4)uStack_940;
      *(undefined4 *)((long)pcVar20 + 0x54) = uStack_940._4_4_;
      *(uint **)((long)pcVar20 + 0x58) = puStack_938;
      uStack_948 = (uint *)0x0;
      uStack_940 = (uint *)0x0;
      puStack_938 = (uint *)0x0;
      uVar13 = func_0x0d858620(plVar17);
      pcVar1 = pcStack_378;
      *(undefined4 *)((long)pcVar20 + 0x28) = uVar13;
      pcStack_380 = (code *)plVar17;
      if (pcStack_378 != (code *)0x0) {
        LOCK();
        plVar17 = (long *)((long)pcStack_378 + 8);
        lVar27 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar27 == 0) {
          lVar27 = *(long *)pcStack_378;
          pcStack_378 = pcVar20;
          (**(code **)(lVar27 + 0x10))(pcVar1);
          FUN_0412c2d0(pcVar1);
          pcVar20 = pcStack_378;
        }
      }
      pcStack_378 = pcVar20;
      uStack_7e8 = (undefined4)uStack_168;
      uStack_7e4 = (uint)((ulong)uStack_168 >> 0x20);
      uStack_7f8 = (uint)uStack_178;
      uStack_7f4 = (undefined4)(uStack_178 >> 0x20);
      uStack_7f0._0_4_ = (undefined4)uStack_170;
      uStack_7f0._4_4_ = (undefined4)((ulong)uStack_170 >> 0x20);
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_7e0 = CONCAT44(uStack_15c,uStack_160);
      uStack_7d8 = CONCAT44(uStack_154,uStack_158);
      func_0x065281f0(&pcStack_7d0,auStack_150);
      puStack_898 = (undefined8 *)0x0;
      ppuStack_890 = (uint **)0x0;
      ppuStack_888 = (uint **)0x0;
      bStack_8d8 = (byte)&puStack_898;
      uStack_8d7 = (undefined7)((ulong)&puStack_898 >> 8);
      uStack_8d0 = 0;
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x140,0);
      }
      puVar3 = puVar18 + 0x28;
      puStack_898 = puVar18;
      ppuStack_888 = (uint **)puVar3;
      if ((uStack_7f8 & 1) == 0) {
        puVar18[2] = CONCAT44(uStack_7e4,uStack_7e8);
        *puVar18 = CONCAT44(uStack_7f4,uStack_7f8);
        puVar18[1] = CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0);
        ppuStack_890 = (uint **)puVar18;
      }
      else {
        ppuStack_890 = (uint **)puVar18;
        func_0x0412e5e0(puVar18,CONCAT44(uStack_7e4,uStack_7e8),
                        CONCAT44(uStack_7f0._4_4_,(undefined4)uStack_7f0));
      }
      *(undefined4 *)(puVar18 + 3) = (undefined4)uStack_7e0;
      *(undefined4 *)((long)puVar18 + 0x1c) = uStack_7e0._4_4_;
      *(undefined4 *)(puVar18 + 4) = (undefined4)uStack_7d8;
      *(undefined4 *)((long)puVar18 + 0x24) = uStack_7d8._4_4_;
      func_0x06523ef0(puVar18 + 5,&pcStack_7d0);
      ppuStack_890 = (uint **)puVar3;
      if (apcStack_6e0[0] != (code *)0x0) {
        (*apcStack_6e0[0])(auStack_6f8);
      }
      if (pcStack_728 != (code *)0x0) {
        (*pcStack_728)(&uStack_740);
      }
      if (pcStack_768 != (code *)0x0) {
        (*pcStack_768)(&lStack_780);
      }
      if (uStack_7a8 != (code *)0x0) {
        (*uStack_7a8)(auStack_7c8 + 8);
      }
      if ((uStack_7f8 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_7e4,uStack_7e8),
                        CONCAT44(uStack_7f4,uStack_7f8) & 0xfffffffffffffffe);
      }
      uVar14 = (**(code **)(*(long *)pcStack_380 + 0x20))();
      uVar24 = ((long)ppuStack_890 - (long)puStack_898 >> 6) * -0x3333333333333333;
      uVar22 = 0;
      if ((uVar14 != 0) && ((uint)uVar24 != 0)) {
        uVar26 = 0;
        uVar22 = 0;
        do {
          auVar30 = (**(code **)(*(long *)pcStack_380 + 0x28))(pcStack_380,uVar26);
          lVar16 = auVar30._8_8_;
          lVar27 = auVar30._0_8_;
          auVar30 = func_0x06527d70();
          if (auVar30._8_8_ == lVar16) {
            if (auVar30._0_8_ == 0) {
              lVar28 = func_0x048aead0(auVar30._8_8_);
              iVar15 = *(int *)(lVar28 + 8);
              if (lVar27 == 0) goto LAB_0a20efa0;
LAB_0a20ef81:
              if (iVar15 != *(int *)(lVar27 + 8)) goto LAB_0a20efc0;
            }
            else {
              iVar15 = *(int *)(auVar30._0_8_ + 8);
              if (lVar27 != 0) goto LAB_0a20ef81;
LAB_0a20efa0:
              lVar28 = func_0x048aead0(lVar16);
              if (iVar15 != *(int *)(lVar28 + 8)) goto LAB_0a20efc0;
            }
          }
          else {
LAB_0a20efc0:
            auVar30 = func_0x06527e30();
            if (auVar30._8_8_ == lVar16) {
              if (auVar30._0_8_ == 0) {
                lVar28 = func_0x048aead0(auVar30._8_8_);
                iVar15 = *(int *)(lVar28 + 8);
              }
              else {
                iVar15 = *(int *)(auVar30._0_8_ + 8);
              }
              if (lVar27 == 0) {
                lVar28 = func_0x048aead0(lVar16);
                iVar4 = *(int *)(lVar28 + 8);
              }
              else {
                iVar4 = *(int *)(lVar27 + 8);
              }
              if (iVar15 == iVar4) goto LAB_0a20f1bc;
            }
            auVar30 = func_0x06527ef0();
            if (auVar30._8_8_ == lVar16) {
              if (auVar30._0_8_ == 0) {
                lVar28 = func_0x048aead0(auVar30._8_8_);
                iVar15 = *(int *)(lVar28 + 8);
              }
              else {
                iVar15 = *(int *)(auVar30._0_8_ + 8);
              }
              if (lVar27 == 0) {
                lVar28 = func_0x048aead0(lVar16);
                iVar4 = *(int *)(lVar28 + 8);
              }
              else {
                iVar4 = *(int *)(lVar27 + 8);
              }
              if (iVar15 == iVar4) goto LAB_0a20f1bc;
            }
            auVar30 = func_0x06527fb0();
            if (auVar30._8_8_ == lVar16) {
              if (auVar30._0_8_ == 0) {
                lVar28 = func_0x048aead0(auVar30._8_8_);
                iVar15 = *(int *)(lVar28 + 8);
              }
              else {
                iVar15 = *(int *)(auVar30._0_8_ + 8);
              }
              if (lVar27 == 0) {
                lVar28 = func_0x048aead0(lVar16);
                iVar4 = *(int *)(lVar28 + 8);
              }
              else {
                iVar4 = *(int *)(lVar27 + 8);
              }
              if (iVar15 == iVar4) goto LAB_0a20f1bc;
            }
            auVar30 = func_0x06528070();
            if (auVar30._8_8_ == lVar16) {
              if (auVar30._0_8_ == 0) {
                lVar28 = func_0x048aead0(auVar30._8_8_);
                iVar15 = *(int *)(lVar28 + 8);
              }
              else {
                iVar15 = *(int *)(auVar30._0_8_ + 8);
              }
              if (lVar27 == 0) {
                lVar28 = func_0x048aead0(lVar16);
                iVar4 = *(int *)(lVar28 + 8);
              }
              else {
                iVar4 = *(int *)(lVar27 + 8);
              }
              if (iVar15 == iVar4) goto LAB_0a20f1bc;
            }
            auVar30 = func_0x06528130();
            if (auVar30._8_8_ == lVar16) {
              if (auVar30._0_8_ == 0) {
                lVar28 = func_0x048aead0(auVar30._8_8_);
                iVar15 = *(int *)(lVar28 + 8);
              }
              else {
                iVar15 = *(int *)(auVar30._0_8_ + 8);
              }
              if (lVar27 == 0) {
                lVar28 = func_0x048aead0(lVar16);
                iVar4 = *(int *)(lVar28 + 8);
              }
              else {
                iVar4 = *(int *)(lVar27 + 8);
              }
              if (iVar15 == iVar4) goto LAB_0a20f1bc;
            }
            puVar18 = puStack_898;
            ppuVar7 = ppuStack_890;
            if (puStack_898[uVar22 * 0x28 + 4] != lVar16) goto joined_r0x0a20f3ee;
            if (puStack_898[uVar22 * 0x28 + 3] == 0) {
              lVar28 = func_0x048aead0();
              iVar15 = *(int *)(lVar28 + 8);
              if (lVar27 == 0) goto LAB_0a20f1a3;
LAB_0a20f189:
              if (iVar15 != *(int *)(lVar27 + 8)) goto LAB_0a20f3db;
            }
            else {
              iVar15 = *(int *)(puStack_898[uVar22 * 0x28 + 3] + 8);
              if (lVar27 != 0) goto LAB_0a20f189;
LAB_0a20f1a3:
              lVar27 = func_0x048aead0(lVar16);
              if (iVar15 != *(int *)(lVar27 + 8)) goto LAB_0a20f3db;
            }
            uVar22 = (ulong)((int)uVar22 + 1);
          }
LAB_0a20f1bc:
        } while (((uint)uVar22 < (uint)uVar24) && (uVar26 = uVar26 + 1, uVar26 < uVar14));
        uVar24 = ((long)ppuStack_890 - (long)puStack_898 >> 6) * -0x3333333333333333;
      }
      puVar18 = puStack_398;
      if (uVar24 == uVar22) {
        puVar3 = puStack_390;
        if (puStack_398 != (undefined8 *)0x0) {
          while (puVar18 != puVar3) {
            func_0x05fe8450(puVar3 + -0x28);
            puVar3 = puVar3 + -0x28;
          }
          puStack_390 = puVar18;
          func_0x0412a280(puStack_398,(long)puStack_388 - (long)puStack_398);
        }
        puStack_388 = ppuStack_888;
        if (uStack_450 < puStack_448) {
          *uStack_450 = 0;
          uStack_450[1] = 0;
          uStack_450[2] = 0;
          *uStack_450 = pcStack_3c8;
          uStack_450[1] = uStack_3c0;
          uStack_450[2] = uStack_3b8;
          pcStack_3c8 = (code *)0x0;
          uStack_3c0 = 0;
          uStack_3b8 = 0;
          uStack_450[5] = uStack_3a0;
          uStack_450[3] = uStack_3b0;
          uStack_450[4] = uStack_3a8;
          uStack_3b0 = 0;
          uStack_3a8 = 0;
          uStack_3a0 = 0;
          uStack_450[6] = 0;
          uStack_450[7] = 0;
          uStack_450[8] = 0;
          uStack_450[6] = puStack_898;
          uStack_450[7] = ppuStack_890;
          uStack_450[8] = ppuStack_888;
          puStack_398 = (undefined8 *)0x0;
          puStack_390 = (undefined8 *)0x0;
          puStack_388 = (undefined8 *)0x0;
          uStack_450[9] = pcStack_380;
          uStack_450[10] = pcStack_378;
          pcStack_380 = (code *)0x0;
          pcStack_378 = (code *)0x0;
          uStack_450[0xb] = 0;
          uStack_450[0xc] = 0;
          uStack_450[0xd] = 0;
          uStack_450[0xb] = uStack_370;
          uStack_450[0xc] = uStack_368;
          uStack_450[0xd] = uStack_360;
          uStack_370 = 0;
          uStack_368 = 0;
          uStack_360 = 0;
          uStack_450 = uStack_450 + 0xe;
        }
        else {
          puStack_398 = puStack_898;
          puStack_390 = ppuStack_890;
          uStack_450 = (undefined8 *)func_0x0652ac80(&lStack_458,&pcStack_3c8);
        }
        plVar17 = uStack_450 + -0xe;
        lVar27 = (long)uStack_948;
      }
      else {
LAB_0a20f3db:
        puVar18 = puStack_898;
        ppuVar7 = ppuStack_890;
        if (puStack_898 != (undefined8 *)0x0) {
joined_r0x0a20f3ee:
          while (puVar3 = puStack_898, (uint **)puStack_898 != ppuVar7) {
            puStack_898 = puVar18;
            func_0x05fe8450(ppuVar7 + -0x28);
            puVar18 = puStack_898;
            ppuVar7 = ppuVar7 + -0x28;
            puStack_898 = puVar3;
          }
          ppuStack_890 = (uint **)puStack_898;
          puStack_898 = puVar18;
          func_0x0412a280(puVar18,(long)ppuStack_888 - (long)puVar18);
        }
        plVar17 = (long *)0xf658418;
        lVar27 = (long)uStack_948;
      }
      uStack_948 = (uint *)lVar27;
      if (lVar27 != 0) {
        if ((uint *)lVar27 != uStack_940) {
          lVar16 = (long)uStack_940 + -0x40;
          do {
            if (*(code **)(lVar16 + 0x18) != (code *)0x0) {
              (**(code **)(lVar16 + 0x18))(lVar16);
            }
            if (*(code **)(lVar16 + -0x30) != (code *)0x0) {
              (**(code **)(lVar16 + -0x30))(lVar16 + -0x48);
            }
            if (*(code **)(lVar16 + -0x70) != (code *)0x0) {
              (**(code **)(lVar16 + -0x70))(lVar16 + -0x88);
            }
            if (*(code **)(lVar16 + -0xb0) != (code *)0x0) {
              (**(code **)(lVar16 + -0xb0))(lVar16 + -200);
            }
            lVar28 = lVar16 + -0xd8;
            lVar16 = lVar16 + -0x118;
          } while (lVar28 != lVar27);
        }
        uStack_940 = (uint *)lVar27;
        func_0x0412a280(uStack_948,(long)puStack_938 - (long)uStack_948);
      }
      func_0x05f93280(&pcStack_3c8);
      if (plVar17 != &lStack_908) {
        func_0x066dff70(plVar17,lStack_908,lStack_900,
                        (lStack_900 - lStack_908 >> 4) * -0x5555555555555555);
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
        func_0x0412a280(uStack_168,uStack_178 & 0xfffffffffffffffe);
      }
      if ((uStack_928 & 1) != 0) {
        func_0x0412a280(lStack_918,CONCAT44(uStack_924,uStack_928) & 0xfffffffffffffffe);
      }
      uVar21 = uStack_568;
      auVar30 = func_0x0a266ad0();
      lVar16 = lStack_4d0;
      auStack_4a0 = auVar30;
      lVar27 = lStack_4c8;
      if (lStack_4d0 != 0) {
        for (; lVar16 != lVar27; lVar27 = lVar27 + -0x30) {
          if ((*(byte *)(lVar27 + -0x20) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar27 + -0x10),
                            *(ulong *)(lVar27 + -0x20) & 0xfffffffffffffffe);
          }
        }
        lStack_4c8 = lVar16;
        func_0x0412a280(lStack_4d0,lStack_4c0 - lStack_4d0);
      }
      lVar28 = lStack_4d8;
      lVar16 = lStack_4e0;
      lVar27 = lStack_4e8;
      lStack_4e8 = 0;
      lStack_4e0 = 0;
      lStack_4d8 = 0;
      uStack_7f8 = (uint)lVar27;
      uStack_7f4 = (undefined4)((ulong)lVar27 >> 0x20);
      uStack_7f0._0_4_ = (undefined4)lVar16;
      uStack_7f0._4_4_ = (undefined4)((ulong)lVar16 >> 0x20);
      uStack_7e8 = (undefined4)lVar28;
      uStack_7e4 = (uint)((ulong)lVar28 >> 0x20);
      lStack_4d0 = 0;
      lStack_4c8 = 0;
      lStack_4c0 = 0;
      pcStack_7d0 = pcStack_4a8;
      uStack_7e0 = uStack_4b8;
      uStack_7d8 = uStack_4b0;
      uStack_4b8 = 0;
      uStack_4b0 = 0;
      pcStack_4a8 = (code *)0x0;
      puStack_7b8 = puStack_490;
      uStack_7b0 = uStack_488;
      uStack_7a8._0_4_ = (undefined4)uStack_480;
      uStack_7a8._4_4_ = (undefined4)((ulong)uStack_480 >> 0x20);
      uStack_7a0 = (undefined4)uStack_478;
      uStack_79c = (undefined4)((ulong)uStack_478 >> 0x20);
      uStack_798 = (undefined4)uStack_470;
      uStack_794 = (undefined4)((ulong)uStack_470 >> 0x20);
      uStack_480 = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      pcStack_790 = pcStack_468;
      plStack_788 = plStack_460;
      pcStack_468 = (code *)0x0;
      plStack_460 = (long *)0x0;
      lStack_780 = lStack_458;
      uStack_778 = (undefined4)uStack_450;
      uStack_774 = uStack_450._4_4_;
      puStack_770 = puStack_448;
      lStack_458 = 0;
      uStack_450 = (undefined8 *)0x0;
      puStack_448 = (undefined8 *)0x0;
      pcStack_768 = pcStack_440;
      uStack_760 = uStack_438;
      uStack_758 = uStack_430;
      pcStack_440 = (code *)0x0;
      uStack_438 = 0;
      uStack_430 = 0;
      pcStack_750 = pcStack_428;
      uStack_748 = uStack_420;
      uStack_740 = uStack_418;
      pcStack_428 = (code *)0x0;
      uStack_420 = 0;
      uStack_418 = 0;
      uStack_738 = uStack_410;
      uStack_730 = uStack_408;
      pcStack_728 = pcStack_400;
      uStack_410 = 0;
      uStack_408 = 0;
      pcStack_400 = (code *)0x0;
      uStack_720 = (undefined4)uStack_3f8;
      uStack_71c = uStack_3f8._4_4_;
      uStack_718 = (undefined4)uStack_3f0;
      uStack_714 = uStack_3f0._4_4_;
      uStack_710 = uStack_3e8;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      uStack_3e8 = 0;
      auStack_7c8 = auStack_4a0;
      func_0x0d84fd50(uVar21,&uStack_7f8);
      func_0x0651ffe0(&uStack_7f8);
      cVar11 = cStack_530;
      plVar17 = plStack_560;
      puVar10 = puStack_570;
      if (cStack_530 != '\0') {
        plStack_8c0 = (long *)auStack_548;
      }
      func_0x065af670(&uStack_7f8);
      if (&uStack_7e0 != puVar10) {
        bVar5 = (byte)*puVar10;
        if ((uStack_7e0 & 1) == 0) {
          if ((bVar5 & 1) == 0) {
            pcStack_7d0 = (code *)puVar10[2];
            uStack_7e0 = *puVar10;
            uStack_7d8 = puVar10[1];
          }
          else {
            func_0x04885070(&uStack_7e0,puVar10[2],puVar10[1]);
          }
        }
        else {
          bVar29 = (bVar5 & 1) != 0;
          pbVar25 = (byte *)((long)puVar10 + 1);
          if (bVar29) {
            pbVar25 = (byte *)puVar10[2];
          }
          uVar22 = (ulong)(bVar5 >> 1);
          if (bVar29) {
            uVar22 = puVar10[1];
          }
          func_0x04885120(&uStack_7e0,pbVar25,uVar22);
        }
      }
      auVar30 = func_0x0a270140();
      auStack_7c8 = auVar30;
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      puVar18[1] = 0;
      puVar18[2] = 0;
      *puVar18 = &UNK_0f2101f0;
      uStack_7a8 = (code *)(puVar18 + 3);
      *(undefined1 *)(puVar18 + 4) = 3;
      puVar18[5] = 0;
      puVar18[6] = 0;
      puVar18[7] = 0;
      puVar18[3] = &UNK_0f210240;
      plVar6 = (long *)CONCAT44(uStack_79c,uStack_7a0);
      uStack_7a0 = SUB84(puVar18,0);
      uStack_79c = (undefined4)((ulong)puVar18 >> 0x20);
      if (plVar6 == (long *)0x0) {
LAB_0a20f966:
        uVar22 = plVar17[0x16];
        if ((ulong)plVar17[0x17] <= uVar22) {
LAB_0a20f9b7:
          lVar27 = func_0x065b01f0(plVar17 + 0x15,&uStack_7f8);
          goto LAB_0a20f9ce;
        }
      }
      else {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar27 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar27 != 0) goto LAB_0a20f966;
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0412c2d0(plVar6);
        uVar22 = plVar17[0x16];
        if ((ulong)plVar17[0x17] <= uVar22) goto LAB_0a20f9b7;
      }
      func_0x065b0410(uVar22,&uStack_7f8);
      lVar27 = uVar22 + 0x1b0;
      plVar17[0x16] = lVar27;
LAB_0a20f9ce:
      plVar17[0x16] = lVar27;
      func_0x0652dc20(&uStack_7f8);
      if ((long *)(lVar27 + -0x1b0) != plStack_8c0) {
        plVar17 = &lStack_900;
        if (cVar11 != '\0') {
          plVar17 = alStack_540;
        }
        func_0x066dff70((long *)(lVar27 + -0x1b0),*plStack_8c0,*plVar17,
                        (*plVar17 - *plStack_8c0 >> 4) * -0x5555555555555555);
      }
      lVar16 = lStack_908;
      lVar27 = lStack_900;
      if (lStack_908 != 0) {
        for (; lVar16 != lVar27; lVar27 = lVar27 + -0x30) {
          if ((*(byte *)(lVar27 + -0x20) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar27 + -0x10),
                            *(ulong *)(lVar27 + -0x20) & 0xfffffffffffffffe);
          }
        }
        lStack_900 = lVar16;
        func_0x0412a280(lStack_908,lStack_8f8 - lStack_908);
      }
      func_0x0651ffe0(&lStack_4d0);
      lVar16 = lStack_4e8;
      lVar27 = lStack_4e0;
      if (lStack_4e8 != 0) {
        for (; lVar16 != lVar27; lVar27 = lVar27 + -0x30) {
          if ((*(byte *)(lVar27 + -0x20) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar27 + -0x10),
                            *(ulong *)(lVar27 + -0x20) & 0xfffffffffffffffe);
          }
        }
        lStack_4e0 = lVar16;
        func_0x0412a280(lStack_4e8,lStack_4d8 - lStack_4e8);
      }
      lVar16 = lStack_818;
      lVar27 = lStack_810;
      if (lStack_818 != 0) {
        for (; lVar16 != lVar27; lVar27 = lVar27 + -0x30) {
          if ((*(byte *)(lVar27 + -0x20) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar27 + -0x10),
                            *(ulong *)(lVar27 + -0x20) & 0xfffffffffffffffe);
          }
        }
        lStack_810 = lVar16;
        func_0x0412a280(lStack_818,lStack_808 - lStack_818);
      }
      func_0x0a210ca0(&puStack_570);
      if ((bStack_8f0 & 1) != 0) {
        func_0x0412a280(puStack_8e0,
                        CONCAT26(uStack_8ea,CONCAT51(uStack_8ef,bStack_8f0)) & 0xfffffffffffffffe);
      }
      auStack_240 = func_0x099ebd00();
      lVar16 = lStack_270;
      lVar27 = lStack_268;
      if (lStack_270 != 0) {
        for (; lVar16 != lVar27; lVar27 = lVar27 + -0x30) {
          if ((*(byte *)(lVar27 + -0x20) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar27 + -0x10),
                            *(ulong *)(lVar27 + -0x20) & 0xfffffffffffffffe);
          }
        }
        lStack_268 = lVar16;
        func_0x0412a280(lStack_270,lStack_260 - lStack_270);
      }
      lVar28 = lStack_278;
      lVar16 = lStack_280;
      lVar27 = lStack_288;
      lStack_288 = 0;
      lStack_280 = 0;
      lStack_278 = 0;
      uStack_7f8 = (uint)lVar27;
      uStack_7f4 = (undefined4)((ulong)lVar27 >> 0x20);
      uStack_7f0._0_4_ = (undefined4)lVar16;
      uStack_7f0._4_4_ = (undefined4)((ulong)lVar16 >> 0x20);
      uStack_7e8 = (undefined4)lVar28;
      uStack_7e4 = (uint)((ulong)lVar28 >> 0x20);
      lStack_270 = 0;
      lStack_268 = 0;
      lStack_260 = 0;
      pcStack_7d0 = pcStack_248;
      uStack_7e0 = uStack_258;
      uStack_7d8 = uStack_250;
      uStack_258 = 0;
      uStack_250 = 0;
      pcStack_248 = (code *)0x0;
      puStack_7b8 = (undefined *)uStack_230;
      uStack_7b0 = uStack_228;
      uStack_7a8._0_4_ = (undefined4)uStack_220;
      uStack_7a8._4_4_ = (undefined4)((ulong)uStack_220 >> 0x20);
      uStack_7a0 = (undefined4)uStack_218;
      uStack_79c = (undefined4)((ulong)uStack_218 >> 0x20);
      uStack_798 = (undefined4)uStack_210;
      uStack_794 = (undefined4)((ulong)uStack_210 >> 0x20);
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      pcStack_790 = (code *)uStack_208;
      plStack_788 = (long *)uStack_200;
      uStack_208 = 0;
      uStack_200 = 0;
      lStack_780 = lStack_1f8;
      uStack_778 = (undefined4)uStack_1f0;
      uStack_774 = uStack_1f0._4_4_;
      puStack_770 = (undefined8 *)uStack_1e8;
      lStack_1f8 = 0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      pcStack_768 = pcStack_1e0;
      uStack_760 = uStack_1d8;
      uStack_758 = uStack_1d0;
      pcStack_1e0 = (code *)0x0;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      pcStack_750 = (code *)uStack_1c8;
      uStack_748 = uStack_1c0;
      uStack_740 = uStack_1b8;
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_738 = uStack_1b0;
      uStack_730 = uStack_1a8;
      pcStack_728 = (code *)uStack_1a0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      uStack_720 = (undefined4)uStack_198;
      uStack_71c = uStack_198._4_4_;
      uStack_718 = (undefined4)uStack_190;
      uStack_714 = uStack_190._4_4_;
      uStack_710 = uStack_188;
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_188 = 0;
      auStack_7c8 = auStack_240;
      func_0x0d84fd50(uStack_3d0,&uStack_7f8);
      func_0x0651ffe0(&uStack_7f8);
      func_0x0651ffe0(&lStack_270);
      lVar16 = lStack_288;
      lVar27 = lStack_280;
      if (lStack_288 != 0) {
        for (; lVar16 != lVar27; lVar27 = lVar27 + -0x30) {
          if ((*(byte *)(lVar27 + -0x20) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar27 + -0x10),
                            *(ulong *)(lVar27 + -0x20) & 0xfffffffffffffffe);
          }
        }
        lStack_280 = lVar16;
        func_0x0412a280(lStack_288,lStack_278 - lStack_288);
      }
      return;
    }
LAB_0a21005f:
    func_0x048a88b0();
LAB_0a210064:
    func_0x048a88b0();
  }
  FUN_04882e30();
LAB_0a21006e:
  uVar21 = FUN_04882e30();
  func_0x06523ec0(&uStack_948);
  func_0x05f93280(&pcStack_3c8);
  func_0x0a26d280(&uStack_178);
  if ((uStack_928 & 1) != 0) {
    func_0x0412a280(lStack_918,CONCAT44(uStack_924,uStack_928) & 0xfffffffffffffffe);
  }
  func_0x06685e60(&lStack_908);
  func_0x0a26d310(&lStack_4e8);
  func_0x06685e60(&lStack_818);
  func_0x0a210ca0(&puStack_570);
  if ((bStack_8f0 & 1) != 0) {
    func_0x0412a280(puStack_8e0,
                    CONCAT26(uStack_8ea,CONCAT51(uStack_8ef,bStack_8f0)) & 0xfffffffffffffffe);
  }
  func_0x0a210da0(&lStack_288);
  func_0x0eee2d70(uVar21);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}



/* ---- referenced strings ----
 * 0x12ae357  NetworkBeforeEvents
 * 0x14b94d1  BeforeEventSignal
 */
