/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8db3080 (ELF vaddr 0x8cb3080)
 * Label: caller-of-callee
 * Body:  [[08db3080, 08db4602] [08db4610, 08db5503] [08db5510, 08db5a5c] [08db5a60, 08db6a1a] [08db6a20, 08db7215] [08db7220, 08db74a3] [08db74b0, 08db76ca] [08db76d0, 08db7b24]]
 * Ghidra: FUN_08db3080
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08db3080(long *param_1)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  ulong *puVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 in_R8;
  undefined8 in_R9;
  ulong *puVar19;
  ulong *puVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined *puVar27;
  ulong *puStack_888;
  ulong *puStack_880;
  undefined8 uStack_878;
  uint uStack_870;
  undefined4 uStack_86c;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined *puStack_858;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  uint uStack_830;
  undefined4 uStack_82c;
  byte bStack_820;
  undefined4 uStack_81f;
  undefined1 uStack_81b;
  undefined2 uStack_81a;
  undefined8 uStack_810;
  ulong uStack_808;
  uint uStack_7fc;
  ulong *puStack_7f8;
  ulong *puStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  ulong *puStack_7c8;
  ulong *puStack_7c0;
  ulong *puStack_7b8;
  long *plStack_7b0;
  long *plStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  ulong **ppuStack_788;
  undefined1 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  code *pcStack_768;
  uint uStack_760;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined *puStack_750;
  undefined *puStack_748;
  ulong uStack_740;
  undefined *puStack_738;
  code *pcStack_730;
  code *pcStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  long *plStack_708;
  long alStack_700 [3];
  code *pcStack_6e8;
  undefined1 auStack_6c0 [24];
  code *pcStack_6a8;
  undefined1 auStack_678 [24];
  code *pcStack_660;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined1 uStack_620;
  undefined2 uStack_61f;
  undefined1 uStack_61d;
  undefined4 uStack_61c;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined *puStack_608;
  uint uStack_600;
  undefined4 uStack_5fc;
  undefined8 uStack_5f8;
  code *pcStack_5f0;
  undefined1 auStack_5e8 [16];
  undefined *puStack_5d8;
  undefined *puStack_5d0;
  undefined8 uStack_5c8;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  code *pcStack_5b0;
  long *plStack_5a8;
  long alStack_5a0 [3];
  code *apcStack_588 [3];
  code *pcStack_570;
  undefined1 auStack_560 [24];
  code *pcStack_548;
  undefined1 auStack_540 [24];
  code *pcStack_528;
  undefined1 auStack_518 [24];
  code *apcStack_500 [2];
  undefined1 auStack_4f0 [24];
  code *pcStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined1 auStack_4b0 [16];
  undefined1 auStack_4a0 [8];
  code *pcStack_498;
  code *pcStack_488;
  undefined1 auStack_470 [16];
  undefined1 auStack_460 [8];
  code *pcStack_458;
  code *pcStack_448;
  undefined1 auStack_428 [8];
  undefined1 auStack_420 [16];
  code *pcStack_410;
  code *pcStack_408;
  undefined1 auStack_3d8 [24];
  code *pcStack_3c0;
  ulong uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  ulong uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  ulong uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  code *pcStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined *puStack_318;
  undefined1 auStack_310 [24];
  code *pcStack_2f8;
  undefined1 auStack_2d0 [24];
  code *pcStack_2b8;
  undefined1 auStack_288 [24];
  code *pcStack_270;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined4 uStack_138;
  undefined2 uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined2 uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined2 uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined2 uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined2 uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined2 uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined2 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  long *plStack_38;
  
  uStack_630 = CONCAT31((int3)_DAT_014b5a85,0x24);
  uStack_62c = (undefined4)((ulong)_DAT_014b5a85 >> 0x18);
  uStack_628._0_1_ = (undefined1)((ulong)_DAT_014b5a85 >> 0x38);
  uStack_628._1_3_ = (undefined3)_UNK_014b5a8d;
  uStack_624 = (undefined4)((ulong)_UNK_014b5a8d >> 0x18);
  uStack_620 = (undefined1)((ulong)_UNK_014b5a8d >> 0x38);
  uStack_61f = 0x746e;
  uStack_61d = 0;
  uStack_218 = 0;
  uStack_210 = 0;
  lStack_228 = 0;
  lStack_220 = 0;
  lStack_238 = 0;
  lStack_230 = 0;
  lStack_248 = 0;
  lStack_240 = 0;
  lStack_208 = 0;
  func_0x048b1dc0(auStack_200);
  func_0x048b1dc0(auStack_1f0);
  uStack_150 = 0;
  lStack_148 = 0;
  lStack_160 = 0;
  uStack_158 = 0;
  lStack_170 = 0;
  lStack_168 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  uStack_190 = 0;
  lStack_188 = 0;
  lStack_1a0 = 0;
  uStack_198 = 0;
  puStack_1b0 = (undefined8 *)0x0;
  puStack_1a8 = (undefined8 *)0x0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1e0 = 0;
  lStack_1d8 = 0;
  if ((uStack_218 & 1) == 0) {
    lStack_208 = CONCAT44(uStack_61c,CONCAT13(uStack_61d,CONCAT21(uStack_61f,uStack_620)));
    uStack_218 = CONCAT44(uStack_62c,uStack_630);
    uStack_210 = CONCAT44(uStack_624,uStack_628);
  }
  else {
    func_0x04885120(&uStack_218,(long)&uStack_630 + 1,0x12);
  }
  lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar23 == 0) {
    func_0x048b0de0(&uStack_618,&uStack_778);
    _DAT_0f54fd90 = (undefined4)uStack_618;
    uRam000000000f54fd94 = uStack_618._4_4_;
    uVar8 = (undefined4)uStack_610;
    uVar26 = uStack_610._4_4_;
    uStack_618 = (undefined *)0x0;
    uStack_610 = (long *)0x0;
    plVar11 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar8;
    uRam000000000f54fd9c = uVar26;
    if (plVar11 != (long *)0x0) {
      LOCK();
      plVar17 = plVar11 + 1;
      lVar23 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        func_0x0412c2d0(plVar11);
      }
    }
    plVar11 = uStack_610;
    if (uStack_610 != (long *)0x0) {
      LOCK();
      plVar17 = uStack_610 + 1;
      lVar23 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_610 + 0x10))(uStack_610);
        func_0x0412c2d0(plVar11);
      }
    }
    lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  plStack_38 = param_1;
  if ((DAT_0f5fafc8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5fafc8), iVar10 != 0)) {
    func_0x08e51c30();
    func_0x0410844d(&DAT_0f5fafc8);
  }
  if ((DAT_0f5fafc8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5fafc8), iVar10 != 0)) {
    func_0x08e51c30();
    func_0x0410844d(&DAT_0f5fafc8);
  }
  uStack_618 = &DAT_0f5fafb0;
  uStack_610 = (long *)CONCAT44(uStack_610._4_4_,_DAT_0f5fafb4);
  puStack_608 = (undefined *)0x0;
  uStack_600 = 0x80;
  uStack_5f8 = 0x58;
  pcStack_5f0 = (code *)&UNK_08e51b70;
  auStack_5e8._0_8_ = 0;
  auStack_5e8._8_8_ = 0;
  puStack_5d8 = &UNK_08e51cb0;
  puStack_5d0 = (undefined *)0x0;
  uStack_5c8._0_4_ = 0;
  uStack_5c8._4_4_ = 0;
  uStack_5c0 = 0;
  uStack_5bc = 0;
  uStack_5b8 = 0;
  pcStack_5b0 = (code *)0x0;
  plStack_5a8 = (long *)0x0;
  alStack_5a0[0] = 0;
  func_0x048aee30(&uStack_778,lVar23,&uStack_618,0x39285325);
  lVar23 = alStack_5a0[0];
  alStack_5a0[0] = 0;
  if (lVar23 != 0) {
    FUN_048ae940(lVar23);
    func_0x0412a280(lVar23,0x78);
  }
  plVar11 = plStack_5a8;
  if (plStack_5a8 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_5a8 + 1;
    lVar23 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_5a8 + 0x10))(plStack_5a8);
      func_0x0412c2d0(plVar11);
    }
  }
  if ((DAT_0f5f4888 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5f4888), iVar10 != 0)) {
    func_0x08d17420(0xf5f4870);
    func_0x0410844d(&DAT_0f5f4888);
  }
  uStack_618._0_4_ = _DAT_0f5f4874;
  uStack_610 = (long *)&SUB_08d17240;
  plVar11 = uStack_610;
  puStack_608 = &UNK_08e51fb0;
  puVar27 = &UNK_08e51fb0;
  uStack_610._0_4_ = 0x8d17240;
  uVar8 = _DAT_0f5f4874;
  uVar26 = (undefined4)uStack_610;
  uStack_610 = plVar11;
  func_0x05da1460(&uStack_778);
  lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar23 == 0) {
    func_0x048b0de0(&uStack_618,&uStack_778);
    uRam000000000f54fd94 = uStack_618._4_4_;
    _DAT_0f54fd90 = (undefined4)uStack_618;
    uVar5 = (undefined4)uStack_610;
    uVar6 = uStack_610._4_4_;
    uStack_618._0_4_ = 0;
    uStack_618._4_4_ = 0;
    uStack_610 = (long *)0x0;
    plVar11 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar5;
    uRam000000000f54fd9c = uVar6;
    if (plVar11 != (long *)0x0) {
      LOCK();
      plVar17 = plVar11 + 1;
      lVar23 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        func_0x0412c2d0(plVar11);
      }
    }
    plVar11 = uStack_610;
    if (uStack_610 != (long *)0x0) {
      LOCK();
      plVar17 = uStack_610 + 1;
      lVar23 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_610 + 0x10))(uStack_610);
        func_0x0412c2d0(plVar11);
      }
    }
    lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f5fb080 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5fb080), iVar10 != 0)) {
    func_0x08e521a0();
    func_0x0410844d(&DAT_0f5fb080);
  }
  if ((DAT_0f5fb080 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5fb080), iVar10 != 0)) {
    func_0x08e521a0();
    func_0x0410844d(&DAT_0f5fb080);
  }
  uStack_618 = &DAT_0f5fb068;
  uStack_610 = (long *)CONCAT44(uStack_610._4_4_,_DAT_0f5fb06c);
  puStack_608 = (undefined *)0x0;
  uStack_600 = 0x280;
  uStack_5f8 = 0x20;
  pcStack_5f0 = (code *)&UNK_08e520e0;
  auStack_5e8._0_8_ = 0;
  auStack_5e8._8_8_ = 0;
  puStack_5d8 = &UNK_08e52220;
  puStack_5d0 = (undefined *)0x1;
  uStack_5c8._0_4_ = 0x65b1ed0;
  uStack_5c8._4_4_ = 0;
  uStack_5c0 = 0x8e528b0;
  uStack_5bc = 0;
  uStack_5b8 = 0;
  pcStack_5b0 = (code *)0x0;
  plStack_5a8 = (long *)0x0;
  alStack_5a0[0] = 0;
  func_0x048aee30(&uStack_778,lVar23,&uStack_618,0xd404225e,in_R8,in_R9,uVar8,uVar26,puVar27);
  lVar23 = alStack_5a0[0];
  alStack_5a0[0] = 0;
  if (lVar23 != 0) {
    FUN_048ae940(lVar23);
    func_0x0412a280(lVar23,0x78);
  }
  plVar11 = plStack_5a8;
  if (plStack_5a8 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_5a8 + 1;
    lVar23 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_5a8 + 0x10))(plStack_5a8);
      func_0x0412c2d0(plVar11);
    }
  }
  if ((DAT_0f5f1218 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5f1218), iVar10 != 0)) {
    func_0x08d16ed0(0xf5f1200);
    func_0x0410844d(&DAT_0f5f1218);
  }
  func_0x065ac270(&uStack_778,_DAT_0f5f1204,&UNK_08e52970);
  lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar23 == 0) {
    func_0x048b0de0(&uStack_618,&uStack_778);
    _DAT_0f54fd90 = (undefined4)uStack_618;
    uRam000000000f54fd94 = uStack_618._4_4_;
    uVar8 = (undefined4)uStack_610;
    uVar26 = uStack_610._4_4_;
    uStack_618 = (undefined *)0x0;
    uStack_610 = (long *)0x0;
    plVar11 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar8;
    uRam000000000f54fd9c = uVar26;
    if (plVar11 != (long *)0x0) {
      LOCK();
      plVar17 = plVar11 + 1;
      lVar23 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        func_0x0412c2d0(plVar11);
      }
    }
    plVar11 = uStack_610;
    if (uStack_610 != (long *)0x0) {
      LOCK();
      plVar17 = uStack_610 + 1;
      lVar23 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_610 + 0x10))(uStack_610);
        func_0x0412c2d0(plVar11);
      }
    }
    lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f5fb138 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5fb138), iVar10 != 0)) {
    func_0x08e52c50();
    func_0x0410844d(&DAT_0f5fb138);
  }
  if ((DAT_0f5fb138 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5fb138), iVar10 != 0)) {
    func_0x08e52c50();
    func_0x0410844d(&DAT_0f5fb138);
  }
  uStack_618 = &DAT_0f5fb120;
  uStack_610 = (long *)CONCAT44(uStack_610._4_4_,_DAT_0f5fb124);
  puStack_608 = (undefined *)0x0;
  uStack_600 = 0x280;
  uStack_5f8 = 0x20;
  pcStack_5f0 = (code *)&UNK_08e52b90;
  auStack_5e8._0_8_ = &UNK_08e52cd0;
  auStack_5e8._8_8_ = 0;
  puStack_5d8 = &UNK_08e53100;
  puStack_5d0 = (undefined *)0x1;
  uStack_5c8._0_4_ = 0x65bd0c0;
  uStack_5c8._4_4_ = 0;
  uStack_5c0 = 0x8e53190;
  uStack_5bc = 0;
  uStack_5b8 = 0;
  pcStack_5b0 = (code *)0x0;
  plStack_5a8 = (long *)0x0;
  alStack_5a0[0] = 0;
  func_0x048aee30(&uStack_778,lVar23,&uStack_618,0xc6de2c6d);
  lVar23 = alStack_5a0[0];
  alStack_5a0[0] = 0;
  if (lVar23 != 0) {
    FUN_048ae940(lVar23);
    func_0x0412a280(lVar23,0x78);
  }
  plVar11 = plStack_5a8;
  if (plStack_5a8 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_5a8 + 1;
    lVar23 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_5a8 + 0x10))(plStack_5a8);
      func_0x0412c2d0(plVar11);
    }
  }
  if ((DAT_0f5f6ee0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5f6ee0), iVar10 != 0)) {
    func_0x08dbeb20();
    func_0x0410844d(&DAT_0f5f6ee0);
  }
  func_0x065ac270(&uStack_778,_DAT_0f5f6ecc,&UNK_08e53250);
  lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar23 == 0) {
    func_0x048b0de0(&uStack_618,&uStack_778);
    _DAT_0f54fd90 = (undefined4)uStack_618;
    uRam000000000f54fd94 = uStack_618._4_4_;
    uVar8 = (undefined4)uStack_610;
    uVar26 = uStack_610._4_4_;
    uStack_618 = (undefined *)0x0;
    uStack_610 = (long *)0x0;
    plVar11 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar8;
    uRam000000000f54fd9c = uVar26;
    if (plVar11 != (long *)0x0) {
      LOCK();
      plVar17 = plVar11 + 1;
      lVar23 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        func_0x0412c2d0(plVar11);
      }
    }
    plVar11 = uStack_610;
    if (uStack_610 != (long *)0x0) {
      LOCK();
      plVar17 = uStack_610 + 1;
      lVar23 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_610 + 0x10))(uStack_610);
        func_0x0412c2d0(plVar11);
      }
    }
    lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f5fb1f0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5fb1f0), iVar10 != 0)) {
    func_0x08e53510();
    func_0x0410844d(&DAT_0f5fb1f0);
  }
  if ((DAT_0f5fb1f0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5fb1f0), iVar10 != 0)) {
    func_0x08e53510();
    func_0x0410844d(&DAT_0f5fb1f0);
  }
  uStack_618 = &DAT_0f5fb1d8;
  uStack_610 = (long *)CONCAT44(uStack_610._4_4_,_DAT_0f5fb1dc);
  puStack_608 = (undefined *)0x0;
  uStack_600 = 0x280;
  uStack_5f8 = 0x10;
  pcStack_5f0 = (code *)&UNK_08e53450;
  auStack_5e8._0_8_ = &UNK_08e53590;
  auStack_5e8._8_8_ = 0;
  puStack_5d8 = &UNK_08e53820;
  puStack_5d0 = (undefined *)0x1;
  uStack_5c8._0_4_ = 0x65bc1f0;
  uStack_5c8._4_4_ = 0;
  uStack_5c0 = 0x8e538d0;
  uStack_5bc = 0;
  uStack_5b8 = 0;
  pcStack_5b0 = (code *)0x0;
  plStack_5a8 = (long *)0x0;
  alStack_5a0[0] = 0;
  func_0x048aee30(&uStack_778,lVar23,&uStack_618,0xd8d62f2d);
  lVar23 = alStack_5a0[0];
  alStack_5a0[0] = 0;
  if (lVar23 != 0) {
    FUN_048ae940(lVar23);
    func_0x0412a280(lVar23,0x78);
  }
  plVar11 = plStack_5a8;
  if (plStack_5a8 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_5a8 + 1;
    lVar23 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_5a8 + 0x10))(plStack_5a8);
      func_0x0412c2d0(plVar11);
    }
  }
  if ((DAT_0f5f6f98 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5f6f98), iVar10 != 0)) {
    func_0x08dbf9c0();
    func_0x0410844d(&DAT_0f5f6f98);
  }
  func_0x065ac270(&uStack_778,_DAT_0f5f6f84,&UNK_08e53990);
  auStack_1f0 = func_0x08dc07a0();
  uStack_868 = 0x6567617373656d0e;
  uStack_860 = uStack_860 & 0xffffffffffffff00;
  func_0x08db8570(&uStack_778,&uStack_868);
  bStack_820 = 8;
  uStack_81f = 0x65646973;
  uStack_81b = 0;
  func_0x08db8640(&uStack_388,&bStack_820);
  if (pcStack_338 != (code *)0x0) {
    (*pcStack_338)(&uStack_350);
  }
  puVar27 = puStack_318;
  pcStack_340 = (code *)&UNK_08e55090;
  pcStack_338 = (code *)0x0;
  uStack_330 = CONCAT35(uStack_330._5_3_,0x2d6179fe8);
  uStack_350 = (ulong)uStack_350._4_4_ << 0x20;
  puStack_318 = &UNK_08e55070;
  if (puVar27 != &UNK_08e55070) {
    uStack_320 = 0;
  }
  uStack_7e8 = 0;
  uStack_798 = 0;
  uStack_790 = 0;
  plStack_7a8 = (long *)0x0;
  uStack_7a0 = 0;
  puStack_7b8 = (ulong *)0x0;
  plStack_7b0 = (long *)0x0;
  puStack_7c8 = (ulong *)0x0;
  puStack_7c0 = (ulong *)0x0;
  uStack_7d8 = 0;
  uStack_7d0 = 0;
  puStack_7f8 = (ulong *)0x0;
  puStack_7f0 = (ulong *)0x0;
  uStack_7e0 = 0x747865547465730e;
  func_0x06523ef0(&uStack_618,&puStack_750);
  func_0x06523ef0(apcStack_500,&uStack_360);
  uStack_848 = (ulong *)0x0;
  uStack_840 = (ulong *)0x0;
  uStack_838 = 0;
  uStack_780 = 0;
  ppuStack_788 = (ulong **)&uStack_848;
  uStack_808 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x230);
  if (uStack_808 == 0) {
    func_0x0eec74c0(0x230,0);
  }
  uStack_838 = uStack_808 + 0x230;
  puStack_880 = &uStack_390;
  uStack_878 = &uStack_808;
  uStack_870 = uStack_870 & 0xffffff00;
  puStack_888 = &uStack_848;
  uStack_848 = (ulong *)uStack_808;
  uStack_840 = (ulong *)uStack_808;
  uStack_390 = uStack_808;
  func_0x06523ef0(uStack_808,&uStack_618);
  uStack_808 = uStack_808 + 0x118;
  func_0x06523ef0(uStack_808,apcStack_500);
  uStack_840 = (ulong *)(uStack_808 + 0x118);
  if (pcStack_410 != (code *)0x0) {
    (*pcStack_410)(auStack_428);
  }
  if (pcStack_458 != (code *)0x0) {
    (*pcStack_458)(auStack_470);
  }
  if (pcStack_498 != (code *)0x0) {
    (*pcStack_498)(auStack_4b0);
  }
  if (pcStack_4d8 != (code *)0x0) {
    (*pcStack_4d8)(auStack_4f0);
  }
  if (pcStack_528 != (code *)0x0) {
    (*pcStack_528)(auStack_540);
  }
  if (pcStack_570 != (code *)0x0) {
    (*pcStack_570)(apcStack_588);
  }
  if (pcStack_5b0 != (code *)0x0) {
    (*pcStack_5b0)(&uStack_5c8);
  }
  if (pcStack_5f0 != (code *)0x0) {
    (*pcStack_5f0)(&puStack_608);
  }
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (plVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0f15f6c0;
  uVar8 = func_0x0d858500(&uStack_848);
  plVar17 = plVar11 + 3;
  *(undefined1 *)(plVar11 + 4) = 0;
  *(undefined4 *)((long)plVar11 + 0x24) = uVar8;
  *(undefined4 *)(plVar11 + 5) = 0;
  plVar11[6] = 0;
  plVar11[7] = 0;
  plVar11[8] = 0;
  plVar11[3] = (long)&UNK_0f15f710;
  *(undefined4 *)(plVar11 + 9) = (undefined4)uStack_848;
  *(undefined4 *)((long)plVar11 + 0x4c) = uStack_848._4_4_;
  *(undefined4 *)(plVar11 + 10) = (undefined4)uStack_840;
  *(undefined4 *)((long)plVar11 + 0x54) = uStack_840._4_4_;
  plVar11[0xb] = uStack_838;
  uStack_848 = (ulong *)0x0;
  uStack_840 = (ulong *)0x0;
  uStack_838 = 0;
  uVar8 = func_0x0d858620(plVar17);
  plVar3 = plStack_7a8;
  *(undefined4 *)(plVar11 + 5) = uVar8;
  plStack_7b0 = plVar17;
  if (plStack_7a8 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_7a8 + 1;
    lVar23 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      lVar23 = *plStack_7a8;
      plStack_7a8 = plVar11;
      (**(code **)(lVar23 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
      plVar11 = plStack_7a8;
    }
  }
  plStack_7a8 = plVar11;
  func_0x08e56bb0();
  puStack_608 = pcStack_768;
  uStack_618 = uStack_778;
  uStack_610 = uStack_770;
  uStack_778 = (undefined *)0x0;
  uStack_770 = (long *)0x0;
  pcStack_768 = (code *)0x0;
  uStack_600 = uStack_760;
  uStack_5fc = uStack_75c;
  uStack_5f8 = CONCAT44(uStack_754,uStack_758);
  func_0x065281f0(&pcStack_5f0,&puStack_750);
  uStack_4c8 = uStack_378;
  pcStack_4d8 = uStack_388;
  uStack_4d0 = uStack_380;
  uStack_388 = (code *)0x0;
  uStack_380 = 0;
  uStack_378 = 0;
  uStack_4c0 = (undefined4)uStack_370;
  uStack_4bc = uStack_370._4_4_;
  uStack_4b8 = (undefined4)uStack_368;
  uStack_4b4 = uStack_368._4_4_;
  func_0x065281f0(auStack_4b0,&uStack_360);
  puStack_888 = (ulong *)0x0;
  puStack_880 = (ulong *)0x0;
  uStack_878 = (ulong *)0x0;
  ppuStack_788 = &puStack_888;
  uStack_780 = 0;
  puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x280);
  if (puVar12 == (ulong *)0x0) {
    func_0x0eec74c0(0x280,0);
  }
  puVar20 = puVar12 + 0x50;
  puStack_888 = puVar12;
  puStack_880 = puVar12;
  uStack_878 = puVar20;
  if (((ulong)uStack_618 & 1) == 0) {
    puVar12[2] = (ulong)puStack_608;
    *puVar12 = (ulong)uStack_618;
    puVar12[1] = (ulong)uStack_610;
  }
  else {
    func_0x0412e5e0(puVar12,puStack_608,uStack_610);
  }
  *(uint *)(puVar12 + 3) = uStack_600;
  *(undefined4 *)((long)puVar12 + 0x1c) = uStack_5fc;
  *(undefined4 *)(puVar12 + 4) = (undefined4)uStack_5f8;
  *(undefined4 *)((long)puVar12 + 0x24) = uStack_5f8._4_4_;
  func_0x06523ef0(puVar12 + 5,&pcStack_5f0);
  if (((ulong)pcStack_4d8 & 1) == 0) {
    puVar12[0x2a] = uStack_4c8;
    puVar12[0x28] = (ulong)pcStack_4d8;
    puVar12[0x29] = uStack_4d0;
  }
  else {
    func_0x0412e5e0(puVar12 + 0x28,uStack_4c8,uStack_4d0);
  }
  *(undefined4 *)(puVar12 + 0x2b) = uStack_4c0;
  *(undefined4 *)((long)puVar12 + 0x15c) = uStack_4bc;
  *(undefined4 *)(puVar12 + 0x2c) = uStack_4b8;
  *(undefined4 *)((long)puVar12 + 0x164) = uStack_4b4;
  func_0x06523ef0(puVar12 + 0x2d,auStack_4b0);
  puStack_880 = puVar20;
  if (pcStack_3c0 != (code *)0x0) {
    (*pcStack_3c0)(auStack_3d8);
  }
  if (pcStack_408 != (code *)0x0) {
    (*pcStack_408)(auStack_420);
  }
  if (pcStack_448 != (code *)0x0) {
    (*pcStack_448)(auStack_460);
  }
  if (pcStack_488 != (code *)0x0) {
    (*pcStack_488)(auStack_4a0);
  }
  if (((ulong)pcStack_4d8 & 1) != 0) {
    func_0x0412a280(uStack_4c8,(ulong)pcStack_4d8 & 0xfffffffffffffffe);
  }
  if (apcStack_500[0] != (code *)0x0) {
    (*apcStack_500[0])(auStack_518);
  }
  if (pcStack_548 != (code *)0x0) {
    (*pcStack_548)(auStack_560);
  }
  if (apcStack_588[0] != (code *)0x0) {
    (*apcStack_588[0])(alStack_5a0);
  }
  if ((code *)CONCAT44(uStack_5c8._4_4_,(undefined4)uStack_5c8) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_5c8._4_4_,(undefined4)uStack_5c8))(auStack_5e8 + 8);
  }
  if (((ulong)uStack_618 & 1) != 0) {
    func_0x0412a280(puStack_608,(ulong)uStack_618 & 0xfffffffffffffffe);
  }
  uVar9 = (**(code **)(*plStack_7b0 + 0x20))();
  uVar22 = ((long)puStack_880 - (long)puStack_888 >> 6) * -0x3333333333333333;
  uVar14 = 0;
  if ((uVar9 != 0) && ((uint)uVar22 != 0)) {
    uVar24 = 0;
    uVar14 = 0;
    uStack_7fc = uVar9;
    do {
      auVar25 = (**(code **)(*plStack_7b0 + 0x28))(plStack_7b0,uVar24);
      uVar18 = auVar25._8_8_;
      lVar23 = auVar25._0_8_;
      auVar25 = func_0x06527d70();
      if (auVar25._8_8_ == uVar18) {
        if (auVar25._0_8_ == 0) {
          lVar15 = FUN_048aead0(auVar25._8_8_);
          iVar10 = *(int *)(lVar15 + 8);
          if (lVar23 != 0) goto LAB_08db4171;
LAB_08db418e:
          lVar15 = FUN_048aead0(uVar18);
          if (iVar10 != *(int *)(lVar15 + 8)) goto LAB_08db41a0;
        }
        else {
          iVar10 = *(int *)(auVar25._0_8_ + 8);
          if (lVar23 == 0) goto LAB_08db418e;
LAB_08db4171:
          if (iVar10 != *(int *)(lVar23 + 8)) goto LAB_08db41a0;
        }
      }
      else {
LAB_08db41a0:
        auVar25 = func_0x06527e30();
        if (auVar25._8_8_ == uVar18) {
          if (auVar25._0_8_ == 0) {
            lVar15 = FUN_048aead0(auVar25._8_8_);
            iVar10 = *(int *)(lVar15 + 8);
          }
          else {
            iVar10 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar23 == 0) {
            lVar15 = FUN_048aead0(uVar18);
            iVar2 = *(int *)(lVar15 + 8);
          }
          else {
            iVar2 = *(int *)(lVar23 + 8);
          }
          if (iVar10 == iVar2) goto LAB_08db4395;
        }
        auVar25 = func_0x06527ef0();
        if (auVar25._8_8_ == uVar18) {
          if (auVar25._0_8_ == 0) {
            lVar15 = FUN_048aead0(auVar25._8_8_);
            iVar10 = *(int *)(lVar15 + 8);
          }
          else {
            iVar10 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar23 == 0) {
            lVar15 = FUN_048aead0(uVar18);
            iVar2 = *(int *)(lVar15 + 8);
          }
          else {
            iVar2 = *(int *)(lVar23 + 8);
          }
          if (iVar10 == iVar2) goto LAB_08db4395;
        }
        auVar25 = func_0x06527fb0();
        if (auVar25._8_8_ == uVar18) {
          if (auVar25._0_8_ == 0) {
            lVar15 = FUN_048aead0(auVar25._8_8_);
            iVar10 = *(int *)(lVar15 + 8);
          }
          else {
            iVar10 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar23 == 0) {
            lVar15 = FUN_048aead0(uVar18);
            iVar2 = *(int *)(lVar15 + 8);
          }
          else {
            iVar2 = *(int *)(lVar23 + 8);
          }
          if (iVar10 == iVar2) goto LAB_08db4395;
        }
        auVar25 = func_0x06528070();
        if (auVar25._8_8_ == uVar18) {
          if (auVar25._0_8_ == 0) {
            lVar15 = FUN_048aead0(auVar25._8_8_);
            iVar10 = *(int *)(lVar15 + 8);
          }
          else {
            iVar10 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar23 == 0) {
            lVar15 = FUN_048aead0(uVar18);
            iVar2 = *(int *)(lVar15 + 8);
          }
          else {
            iVar2 = *(int *)(lVar23 + 8);
          }
          if (iVar10 == iVar2) goto LAB_08db4395;
        }
        auVar25 = func_0x06528130();
        if (auVar25._8_8_ == uVar18) {
          if (auVar25._0_8_ == 0) {
            lVar15 = FUN_048aead0(auVar25._8_8_);
            iVar10 = *(int *)(lVar15 + 8);
          }
          else {
            iVar10 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar23 == 0) {
            lVar15 = FUN_048aead0(uVar18);
            iVar2 = *(int *)(lVar15 + 8);
          }
          else {
            iVar2 = *(int *)(lVar23 + 8);
          }
          if (iVar10 == iVar2) goto LAB_08db4395;
        }
        puVar12 = puStack_888;
        puVar20 = puStack_880;
        if (puStack_888[uVar14 * 0x28 + 4] != uVar18) goto joined_r0x08db45a1;
        if (puStack_888[uVar14 * 0x28 + 3] == 0) {
          lVar15 = FUN_048aead0();
          iVar10 = *(int *)(lVar15 + 8);
          if (lVar23 != 0) goto LAB_08db4364;
LAB_08db437d:
          lVar23 = FUN_048aead0(uVar18);
          if (iVar10 != *(int *)(lVar23 + 8)) goto LAB_08db4591;
        }
        else {
          iVar10 = *(int *)(puStack_888[uVar14 * 0x28 + 3] + 8);
          if (lVar23 == 0) goto LAB_08db437d;
LAB_08db4364:
          if (iVar10 != *(int *)(lVar23 + 8)) goto LAB_08db4591;
        }
        uVar14 = (ulong)((int)uVar14 + 1);
      }
LAB_08db4395:
    } while (((uint)uVar14 < (uint)uVar22) && (uVar24 = uVar24 + 1, uVar24 < uStack_7fc));
    uVar22 = ((long)puStack_880 - (long)puStack_888 >> 6) * -0x3333333333333333;
  }
  puVar12 = puStack_7c8;
  if (uVar22 == uVar14) {
    puVar20 = puStack_7c0;
    if (puStack_7c8 != (ulong *)0x0) {
      while (puVar12 != puVar20) {
        func_0x05fe8450(puVar20 + -0x28);
        puVar20 = puVar20 + -0x28;
      }
      puStack_7c0 = puVar12;
      func_0x0412a280(puStack_7c8,(long)puStack_7b8 - (long)puStack_7c8);
    }
    puStack_7b8 = uStack_878;
    if (puStack_1b0 < puStack_1a8) {
      *puStack_1b0 = 0;
      puStack_1b0[1] = 0;
      puStack_1b0[2] = 0;
      *puStack_1b0 = puStack_7f8;
      puStack_1b0[1] = puStack_7f0;
      puStack_1b0[2] = uStack_7e8;
      puStack_7f8 = (ulong *)0x0;
      puStack_7f0 = (ulong *)0x0;
      uStack_7e8 = 0;
      puStack_1b0[5] = uStack_7d0;
      puStack_1b0[3] = uStack_7e0;
      puStack_1b0[4] = uStack_7d8;
      uStack_7e0 = 0;
      uStack_7d8 = 0;
      uStack_7d0 = 0;
      puStack_1b0[6] = 0;
      puStack_1b0[7] = 0;
      puStack_1b0[8] = 0;
      puStack_1b0[6] = puStack_888;
      puStack_1b0[7] = puStack_880;
      puStack_1b0[8] = uStack_878;
      puStack_7c8 = (ulong *)0x0;
      puStack_7c0 = (ulong *)0x0;
      puStack_7b8 = (ulong *)0x0;
      puStack_1b0[9] = plStack_7b0;
      puStack_1b0[10] = plStack_7a8;
      plStack_7b0 = (long *)0x0;
      plStack_7a8 = (undefined8 *)0x0;
      puStack_1b0[0xb] = 0;
      puStack_1b0[0xc] = 0;
      puStack_1b0[0xd] = 0;
      *(undefined4 *)(puStack_1b0 + 0xb) = (undefined4)uStack_7a0;
      *(undefined4 *)((long)puStack_1b0 + 0x5c) = uStack_7a0._4_4_;
      *(undefined4 *)(puStack_1b0 + 0xc) = (undefined4)uStack_798;
      *(undefined4 *)((long)puStack_1b0 + 100) = uStack_798._4_4_;
      puStack_1b0[0xd] = uStack_790;
      uStack_7a0 = 0;
      uStack_798 = 0;
      uStack_790 = 0;
      puStack_1b0 = puStack_1b0 + 0xe;
    }
    else {
      puStack_7c8 = puStack_888;
      puStack_7c0 = puStack_880;
      puStack_1b0 = (undefined8 *)func_0x0652ac80(&lStack_1b8,&puStack_7f8);
    }
    puVar16 = puStack_1b0 + -0xe;
    puVar12 = uStack_848;
  }
  else {
LAB_08db4591:
    puVar12 = puStack_888;
    puVar20 = puStack_880;
    if (puStack_888 != (ulong *)0x0) {
joined_r0x08db45a1:
      while (puVar19 = puStack_888, puStack_888 != puVar20) {
        puStack_888 = puVar12;
        func_0x05fe8450(puVar20 + -0x28);
        puVar12 = puStack_888;
        puVar20 = puVar20 + -0x28;
        puStack_888 = puVar19;
      }
      puStack_880 = puStack_888;
      puStack_888 = puVar12;
      func_0x0412a280(puVar12,(long)uStack_878 - (long)puVar12);
    }
    puVar16 = (undefined8 *)0xf5f6d48;
    puVar12 = uStack_848;
  }
  uStack_848 = puVar12;
  if (puVar12 != (ulong *)0x0) {
    if (puVar12 != uStack_840) {
      puVar20 = uStack_840 + -8;
      do {
        if ((code *)puVar20[3] != (code *)0x0) {
          (*(code *)puVar20[3])(puVar20);
        }
        if ((code *)puVar20[-6] != (code *)0x0) {
          (*(code *)puVar20[-6])(puVar20 + -9);
        }
        if ((code *)puVar20[-0xe] != (code *)0x0) {
          (*(code *)puVar20[-0xe])(puVar20 + -0x11);
        }
        if ((code *)puVar20[-0x16] != (code *)0x0) {
          (*(code *)puVar20[-0x16])(puVar20 + -0x19);
        }
        puVar19 = puVar20 + -0x1b;
        puVar20 = puVar20 + -0x23;
      } while (puVar19 != puVar12);
    }
    uStack_840 = puVar12;
    func_0x0412a280(uStack_848,uStack_838 - (long)uStack_848);
  }
  func_0x05f93280(&puStack_7f8);
  uStack_58 = _DAT_0f642188;
  uStack_54 = _DAT_0f64218c;
  if ((_DAT_0f642190 & 1) == 0) {
    uStack_40 = _DAT_0f6421a0;
    uStack_50 = _DAT_0f642190;
    uStack_4c = uRam000000000f642194;
    uStack_48 = _DAT_0f642198;
    uStack_44 = uRam000000000f64219c;
  }
  else {
    func_0x0412e5e0(&uStack_50,_DAT_0f6421a0,CONCAT44(uRam000000000f64219c,_DAT_0f642198));
  }
  func_0x0730fa70(puVar16,&uStack_58,0);
  if ((uStack_50 & 1) != 0) {
    func_0x0412a280(uStack_40,CONCAT44(uStack_4c,uStack_50) & 0xfffffffffffffffe);
  }
  if (pcStack_270 != (code *)0x0) {
    (*pcStack_270)(auStack_288);
  }
  if (pcStack_2b8 != (code *)0x0) {
    (*pcStack_2b8)(auStack_2d0);
  }
  if (pcStack_2f8 != (code *)0x0) {
    (*pcStack_2f8)(auStack_310);
  }
  if (pcStack_338 != (code *)0x0) {
    (*pcStack_338)(&uStack_350);
  }
  if (((ulong)uStack_388 & 1) != 0) {
    func_0x0412a280(uStack_378,(ulong)uStack_388 & 0xfffffffffffffffe);
  }
  if ((bStack_820 & 1) != 0) {
    func_0x0412a280(uStack_810,
                    CONCAT26(uStack_81a,CONCAT15(uStack_81b,CONCAT41(uStack_81f,bStack_820))) &
                    0xfffffffffffffffe);
  }
  if (pcStack_660 != (code *)0x0) {
    (*pcStack_660)(auStack_678);
  }
  if (pcStack_6a8 != (code *)0x0) {
    (*pcStack_6a8)(auStack_6c0);
  }
  if (pcStack_6e8 != (code *)0x0) {
    (*pcStack_6e8)(alStack_700);
  }
  if (pcStack_728 != (code *)0x0) {
    (*pcStack_728)(&uStack_740);
  }
  if (((ulong)uStack_778 & 1) != 0) {
    func_0x0412a280(pcStack_768,(ulong)uStack_778 & 0xfffffffffffffffe);
  }
  if ((uStack_868 & 1) != 0) {
    func_0x0412a280(puStack_858,uStack_868 & 0xfffffffffffffffe);
  }
  puStack_7f8 = (ulong *)CONCAT26(puStack_7f8._6_2_,0x6564697308);
  func_0x08db8640(&uStack_618,&puStack_7f8);
  if ((code *)CONCAT44(uStack_5c8._4_4_,(undefined4)uStack_5c8) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_5c8._4_4_,(undefined4)uStack_5c8))(auStack_5e8 + 8);
  }
  plVar11 = plStack_5a8;
  puStack_5d0 = &UNK_08e55090;
  uStack_5c0 = 0xd6179fe8;
  uStack_5c8._0_4_ = 0;
  uStack_5c8._4_4_ = 0;
  uStack_5bc = CONCAT31(uStack_5bc._1_3_,2);
  auStack_5e8._8_8_ = auStack_5e8._8_8_ & 0xffffffff00000000;
  plStack_5a8 = (long *)&UNK_08e55070;
  if (plVar11 != (long *)&UNK_08e55070) {
    pcStack_5b0 = (code *)0x0;
  }
  pcStack_768 = (code *)0x0;
  uStack_718 = 0;
  uStack_710 = 0;
  pcStack_728 = (code *)0x0;
  uStack_720 = (undefined *)0x0;
  puStack_738 = (undefined *)0x0;
  pcStack_730 = (code *)0x0;
  puStack_748 = (undefined *)0x0;
  uStack_740 = 0;
  uStack_758 = 0;
  uStack_754 = 0;
  puStack_750 = (undefined *)0x0;
  uStack_778 = (undefined *)0x0;
  uStack_770 = (long *)0x0;
  uStack_760 = 0x7465670e;
  uStack_75c = 0x74786554;
  func_0x08e58590(&uStack_388,&uStack_618);
  func_0x066baa80();
  pcVar13 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar13 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)((long)pcVar13 + 8) = 0;
  *(undefined8 *)((long)pcVar13 + 0x10) = 0;
  *(undefined **)pcVar13 = &UNK_0f15f7d0;
  uVar8 = func_0x0d858500(&uStack_388);
  puVar16 = (undefined8 *)((long)pcVar13 + 0x18);
  *(undefined1 *)((long)pcVar13 + 0x20) = 1;
  *(undefined4 *)((long)pcVar13 + 0x24) = uVar8;
  *(undefined4 *)((long)pcVar13 + 0x28) = 0;
  *(undefined8 *)((long)pcVar13 + 0x30) = 0;
  *(undefined8 *)((long)pcVar13 + 0x38) = 0;
  *(undefined8 *)((long)pcVar13 + 0x40) = 0;
  *(undefined **)((long)pcVar13 + 0x18) = &UNK_0f15f820;
  *(undefined4 *)((long)pcVar13 + 0x48) = (undefined4)uStack_388;
  *(undefined4 *)((long)pcVar13 + 0x4c) = uStack_388._4_4_;
  *(undefined4 *)((long)pcVar13 + 0x50) = (undefined4)uStack_380;
  *(undefined4 *)((long)pcVar13 + 0x54) = uStack_380._4_4_;
  *(ulong *)((long)pcVar13 + 0x58) = uStack_378;
  uStack_388 = (code *)0x0;
  uStack_380 = 0;
  uStack_378 = 0;
  uVar8 = func_0x0d858620(puVar16);
  pcVar1 = pcStack_728;
  *(undefined4 *)((long)pcVar13 + 0x28) = uVar8;
  pcStack_730 = (code *)puVar16;
  if (pcStack_728 != (code *)0x0) {
    LOCK();
    plVar11 = (long *)((long)pcStack_728 + 8);
    lVar23 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      lVar23 = *(long *)pcStack_728;
      pcStack_728 = pcVar13;
      (**(code **)(lVar23 + 0x10))(pcVar1);
      func_0x0412c2d0(pcVar1);
      pcVar13 = pcStack_728;
    }
  }
  pcStack_728 = pcVar13;
  cVar7 = func_0x08e58710(&uStack_778,&uStack_618);
  if (cVar7 == '\0') {
    puVar16 = (undefined8 *)0xf5f6d48;
    lVar23 = (long)uStack_388;
  }
  else {
    if (puStack_1b0 < puStack_1a8) {
      *puStack_1b0 = 0;
      puStack_1b0[1] = 0;
      puStack_1b0[2] = 0;
      *puStack_1b0 = uStack_778;
      puStack_1b0[1] = uStack_770;
      puStack_1b0[2] = pcStack_768;
      uStack_778 = (undefined *)0x0;
      uStack_770 = (long *)0x0;
      pcStack_768 = (code *)0x0;
      puStack_1b0[5] = puStack_750;
      puStack_1b0[3] = CONCAT44(uStack_75c,uStack_760);
      puStack_1b0[4] = CONCAT44(uStack_754,uStack_758);
      uStack_760 = 0;
      uStack_75c = 0;
      uStack_758 = 0;
      uStack_754 = 0;
      puStack_750 = (undefined *)0x0;
      puStack_1b0[6] = 0;
      puStack_1b0[7] = 0;
      puStack_1b0[8] = 0;
      puStack_1b0[6] = puStack_748;
      puStack_1b0[7] = uStack_740;
      puStack_1b0[8] = puStack_738;
      puStack_748 = (undefined *)0x0;
      uStack_740 = 0;
      puStack_738 = (undefined *)0x0;
      puStack_1b0[9] = pcStack_730;
      puStack_1b0[10] = pcStack_728;
      pcStack_730 = (code *)0x0;
      pcStack_728 = (code *)0x0;
      puStack_1b0[0xb] = 0;
      puStack_1b0[0xc] = 0;
      puStack_1b0[0xd] = 0;
      *(undefined4 *)(puStack_1b0 + 0xb) = (undefined4)uStack_720;
      *(undefined4 *)((long)puStack_1b0 + 0x5c) = uStack_720._4_4_;
      *(undefined4 *)(puStack_1b0 + 0xc) = (undefined4)uStack_718;
      *(undefined4 *)((long)puStack_1b0 + 100) = uStack_718._4_4_;
      puStack_1b0[0xd] = uStack_710;
      uStack_720 = (undefined *)0x0;
      uStack_718 = 0;
      uStack_710 = 0;
      puStack_1b0 = puStack_1b0 + 0xe;
    }
    else {
      puStack_1b0 = (undefined8 *)func_0x0652ac80(&lStack_1b8,&uStack_778);
    }
    puVar16 = puStack_1b0 + -0xe;
    lVar23 = (long)uStack_388;
  }
  uStack_388 = (code *)lVar23;
  if (lVar23 != 0) {
    if (lVar23 != uStack_380) {
      lVar15 = uStack_380 + -0x40;
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
        lVar21 = lVar15 + -0xd8;
        lVar15 = lVar15 + -0x118;
      } while (lVar21 != lVar23);
    }
    uStack_380 = lVar23;
    func_0x0412a280(uStack_388,uStack_378 - (long)uStack_388);
  }
  func_0x05f93280(&uStack_778);
  uStack_78 = _DAT_0f642188;
  uStack_74 = _DAT_0f64218c;
  if ((_DAT_0f642190 & 1) == 0) {
    uStack_60 = _DAT_0f6421a0;
    uStack_70 = _DAT_0f642190;
    uStack_6c = uRam000000000f642194;
    uStack_68 = _DAT_0f642198;
    uStack_64 = uRam000000000f64219c;
  }
  else {
    func_0x0412e5e0(&uStack_70,_DAT_0f6421a0,CONCAT44(uRam000000000f64219c,_DAT_0f642198));
  }
  func_0x0730fa70(puVar16,&uStack_78,0);
  if ((uStack_70 & 1) != 0) {
    func_0x0412a280(uStack_60,CONCAT44(uStack_6c,uStack_70) & 0xfffffffffffffffe);
  }
  if (apcStack_500[0] != (code *)0x0) {
    (*apcStack_500[0])(auStack_518);
  }
  if (pcStack_548 != (code *)0x0) {
    (*pcStack_548)(auStack_560);
  }
  if (apcStack_588[0] != (code *)0x0) {
    (*apcStack_588[0])(alStack_5a0);
  }
  if ((code *)CONCAT44(uStack_5c8._4_4_,(undefined4)uStack_5c8) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_5c8._4_4_,(undefined4)uStack_5c8))(auStack_5e8 + 8);
  }
  if (((ulong)uStack_618 & 1) != 0) {
    func_0x0412a280(puStack_608,(ulong)uStack_618 & 0xfffffffffffffffe);
  }
  if (((ulong)puStack_7f8 & 1) != 0) {
    func_0x0412a280(uStack_7e8,(ulong)puStack_7f8 & 0xfffffffffffffffe);
  }
  bStack_820 = 8;
  uStack_81f = 0x65646973;
  uStack_81b = 0;
  func_0x08db8640(&uStack_618,&bStack_820);
  if ((code *)CONCAT44(uStack_5c8._4_4_,(undefined4)uStack_5c8) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_5c8._4_4_,(undefined4)uStack_5c8))(auStack_5e8 + 8);
  }
  plVar11 = plStack_5a8;
  puStack_5d0 = &UNK_08e55090;
  uStack_5c0 = 0xd6179fe8;
  uStack_5c8._0_4_ = 0;
  uStack_5c8._4_4_ = 0;
  uStack_5bc = CONCAT31(uStack_5bc._1_3_,2);
  auStack_5e8._8_8_ = auStack_5e8._8_8_ & 0xffffffff00000000;
  plStack_5a8 = (long *)&UNK_08e55070;
  if (plVar11 != (long *)&UNK_08e55070) {
    pcStack_5b0 = (code *)0x0;
  }
  uStack_378 = 0;
  uStack_360 = 0;
  uStack_328 = 0;
  uStack_320 = 0;
  pcStack_338 = (code *)0x0;
  uStack_330 = 0;
  uStack_348 = 0;
  pcStack_340 = (code *)0x0;
  uStack_358 = 0;
  uStack_350 = 0;
  uStack_388 = (code *)0x0;
  uStack_380 = 0;
  uStack_370 = 0x5477615274656714;
  uStack_368 = 0x747865;
  func_0x08e58590(&uStack_868,&uStack_618);
  lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar23 == 0) {
    func_0x048b0de0(&uStack_778,&puStack_7f8);
    _DAT_0f54fd90 = (uint)uStack_778;
    uRam000000000f54fd94 = uStack_778._4_4_;
    uVar8 = (undefined4)uStack_770;
    uVar26 = uStack_770._4_4_;
    uStack_778 = (undefined *)0x0;
    uStack_770 = (long *)0x0;
    plVar11 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar8;
    uRam000000000f54fd9c = uVar26;
    if (plVar11 != (long *)0x0) {
      LOCK();
      plVar17 = plVar11 + 1;
      lVar23 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        func_0x0412c2d0(plVar11);
      }
    }
    plVar11 = uStack_770;
    if (uStack_770 != (long *)0x0) {
      LOCK();
      plVar17 = uStack_770 + 1;
      lVar23 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_770 + 0x10))(uStack_770);
        func_0x0412c2d0(plVar11);
      }
    }
    lVar23 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (DAT_0f5fb2a8 == '\0') {
    iVar10 = func_0x04108328(&DAT_0f5fb2a8);
    if (iVar10 != 0) {
      func_0x08e59ff0();
      func_0x0410844d(&DAT_0f5fb2a8);
    }
  }
  if (DAT_0f5fb2a8 == '\0') {
    iVar10 = func_0x04108328(&DAT_0f5fb2a8);
    if (iVar10 != 0) {
      func_0x08e59ff0();
      func_0x0410844d(&DAT_0f5fb2a8);
    }
  }
  uStack_778 = &DAT_0f5fb290;
  uStack_770 = (long *)CONCAT44(uStack_770._4_4_,_DAT_0f5fb294);
  pcStack_768 = (code *)0x0;
  uStack_760 = 0x80;
  uStack_758 = 0x28;
  uStack_754 = 0;
  puStack_750 = &UNK_08e59f30;
  puStack_748 = &UNK_08e5a070;
  uStack_740 = 0;
  puStack_738 = &UNK_08e5b5c0;
  pcStack_730 = (code *)0x1;
  pcStack_728 = (code *)&SUB_048b5640;
  uStack_720 = &UNK_08e5b650;
  uStack_718 = uStack_718 & 0xffffffff00000000;
  uStack_710 = 0;
  plStack_708 = (long *)0x0;
  alStack_700[0] = 0;
  func_0x048aee30(&uStack_848,lVar23,&uStack_778,0xe9dc448f);
  lVar23 = alStack_700[0];
  alStack_700[0] = 0;
  if (lVar23 != 0) {
    FUN_048ae940(lVar23);
    func_0x0412a280(lVar23,0x78);
  }
  plVar11 = plStack_708;
  if (plStack_708 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_708 + 1;
    lVar23 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_708 + 0x10))(plStack_708);
      func_0x0412c2d0(plVar11);
    }
  }
  if (DAT_0f5fb360 == '\0') {
    iVar10 = func_0x04108328(&DAT_0f5fb360);
    if (iVar10 != 0) {
      func_0x08e5bbe0();
      func_0x0410844d(&DAT_0f5fb360);
    }
  }
  uStack_778._0_4_ = _DAT_0f5fb34c;
  uStack_770 = (long *)0x1;
  pcStack_768 = (code *)&UNK_08e5b660;
  uStack_760 = 0x8e5b670;
  uStack_75c = 0;
  func_0x065abe60(&uStack_848);
  uStack_878._0_4_ = (undefined4)uStack_838;
  uStack_878._4_4_ = uStack_838._4_4_;
  uStack_870 = uStack_830;
  uStack_86c = uStack_82c;
  puStack_888 = uStack_848;
  puStack_880 = uStack_840;
  uStack_778._0_4_ = 0xf55160ec;
  uStack_770 = (long *)0x0;
  pcStack_768 = (code *)((ulong)pcStack_768 & 0xffffffff00000000);
  uStack_760 = 0;
  uStack_75c = 0;
  uStack_758 = 0x65b4120;
  uStack_754 = 0;
  puStack_750 = &SUB_048b06d0;
  puStack_748 = &UNK_08e5bf00;
  uStack_740 = 0;
  puStack_738 = (undefined *)((ulong)puStack_738 & 0xffffffff00000000);
  pcStack_730 = (code *)0x0;
  pcStack_728 = (code *)0x0;
  func_0x049057f0(&puStack_888,&uStack_778);
  func_0x048aea50(&uStack_778);
  uStack_7e8 = CONCAT44(uStack_878._4_4_,(undefined4)uStack_878);
  uStack_7e0 = CONCAT44(uStack_86c,uStack_870);
  puStack_7f8 = puStack_888;
  puStack_7f0 = puStack_880;
  uStack_778 = (undefined *)CONCAT44(uStack_778._4_4_,0xf55160ec);
  uStack_770 = (long *)0x0;
  pcStack_768 = (code *)CONCAT44(pcStack_768._4_4_,1);
  uStack_760 = 0;
  uStack_75c = 0;
  uStack_758 = 0x65b4120;
  uStack_754 = 0;
  puStack_750 = &SUB_048b06d0;
  puStack_748 = &UNK_08e5c1b0;
  uStack_740 = 0;
  puStack_738 = (undefined *)((ulong)puStack_738 & 0xffffffff00000000);
  pcStack_730 = (code *)0x0;
  pcStack_728 = (code *)0x0;
  func_0x049057f0(&puStack_7f8,&uStack_778);
  func_0x048aea50(&uStack_778);
  pcVar13 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar13 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar13 + 8) = 0;
  *(undefined8 *)(pcVar13 + 0x10) = 0;
  *(undefined **)pcVar13 = &UNK_0f15f8a0;
  uVar8 = func_0x0d858500(&uStack_868);
  pcVar1 = pcVar13 + 0x18;
  pcVar13[0x20] = (code)0x1;
  *(undefined4 *)(pcVar13 + 0x24) = uVar8;
  *(undefined4 *)(pcVar13 + 0x28) = 0;
  *(undefined8 *)(pcVar13 + 0x30) = 0;
  *(undefined8 *)(pcVar13 + 0x38) = 0;
  *(undefined8 *)(pcVar13 + 0x40) = 0;
  *(undefined **)(pcVar13 + 0x18) = &UNK_0f15f8f0;
  *(undefined4 *)(pcVar13 + 0x48) = (undefined4)uStack_868;
  *(undefined4 *)(pcVar13 + 0x4c) = uStack_868._4_4_;
  *(undefined4 *)(pcVar13 + 0x50) = (undefined4)uStack_860;
  *(undefined4 *)(pcVar13 + 0x54) = uStack_860._4_4_;
  *(undefined **)(pcVar13 + 0x58) = puStack_858;
  uStack_868 = 0;
  uStack_860 = 0;
  puStack_858 = (undefined *)0x0;
  uVar8 = func_0x0d858620(pcVar1);
  pcVar4 = pcStack_338;
  *(undefined4 *)(pcVar13 + 0x28) = uVar8;
  pcStack_340 = pcVar1;
  if (pcStack_338 != (code *)0x0) {
    LOCK();
    plVar11 = (long *)((long)pcStack_338 + 8);
    lVar23 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      lVar23 = *(long *)pcStack_338;
      pcStack_338 = pcVar13;
      (**(code **)(lVar23 + 0x10))(pcVar4);
      func_0x0412c2d0(pcVar4);
      pcVar13 = pcStack_338;
    }
  }
  pcStack_338 = pcVar13;
  cVar7 = func_0x08e58710(&uStack_388,&uStack_618);
  if (cVar7 == '\0') {
    puVar16 = (undefined8 *)0xf5f6d48;
    uVar14 = uStack_868;
  }
  else {
    if (puStack_1b0 < puStack_1a8) {
      *puStack_1b0 = 0;
      puStack_1b0[1] = 0;
      puStack_1b0[2] = 0;
      *puStack_1b0 = uStack_388;
      puStack_1b0[1] = uStack_380;
      puStack_1b0[2] = uStack_378;
      uStack_388 = (code *)0x0;
      uStack_380 = 0;
      uStack_378 = 0;
      puStack_1b0[5] = uStack_360;
      puStack_1b0[3] = uStack_370;
      puStack_1b0[4] = uStack_368;
      uStack_370 = 0;
      uStack_368 = 0;
      uStack_360 = 0;
      puStack_1b0[6] = 0;
      puStack_1b0[7] = 0;
      puStack_1b0[8] = 0;
      puStack_1b0[6] = uStack_358;
      puStack_1b0[7] = uStack_350;
      puStack_1b0[8] = uStack_348;
      uStack_358 = 0;
      uStack_350 = 0;
      uStack_348 = 0;
      puStack_1b0[9] = pcStack_340;
      puStack_1b0[10] = pcStack_338;
      pcStack_340 = (code *)0x0;
      pcStack_338 = (code *)0x0;
      puStack_1b0[0xb] = 0;
      puStack_1b0[0xc] = 0;
      puStack_1b0[0xd] = 0;
      *(undefined4 *)(puStack_1b0 + 0xb) = (undefined4)uStack_330;
      *(undefined4 *)((long)puStack_1b0 + 0x5c) = uStack_330._4_4_;
      *(undefined4 *)(puStack_1b0 + 0xc) = (undefined4)uStack_328;
      *(undefined4 *)((long)puStack_1b0 + 100) = uStack_328._4_4_;
      puStack_1b0[0xd] = uStack_320;
      uStack_330 = 0;
      uStack_328 = 0;
      uStack_320 = 0;
      puStack_1b0 = puStack_1b0 + 0xe;
    }
    else {
      puStack_1b0 = (undefined8 *)func_0x0652ac80(&lStack_1b8,&uStack_388);
    }
    puVar16 = puStack_1b0 + -0xe;
    uVar14 = uStack_868;
  }
  uStack_868 = uVar14;
  if (uVar14 != 0) {
    if (uVar14 != uStack_860) {
      lVar23 = uStack_860 - 0x40;
      do {
        if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
          (**(code **)(lVar23 + 0x18))(lVar23);
        }
        if (*(code **)(lVar23 + -0x30) != (code *)0x0) {
          (**(code **)(lVar23 + -0x30))(lVar23 + -0x48);
        }
        if (*(code **)(lVar23 + -0x70) != (code *)0x0) {
          (**(code **)(lVar23 + -0x70))(lVar23 + -0x88);
        }
        if (*(code **)(lVar23 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar23 + -0xb0))(lVar23 + -200);
        }
        uVar22 = lVar23 - 0xd8;
        lVar23 = lVar23 + -0x118;
      } while (uVar22 != uVar14);
    }
    uStack_860 = uVar14;
    func_0x0412a280(uStack_868,(long)puStack_858 - uStack_868);
  }
  func_0x05f93280(&uStack_388);
  uStack_98 = _DAT_0f642188;
  uStack_94 = _DAT_0f64218c;
  if ((_DAT_0f642190 & 1) == 0) {
    uStack_80 = _DAT_0f6421a0;
    uStack_90 = _DAT_0f642190;
    uStack_8c = uRam000000000f642194;
    uStack_88 = _DAT_0f642198;
    uStack_84 = uRam000000000f64219c;
  }
  else {
    func_0x0412e5e0(&uStack_90,_DAT_0f6421a0,CONCAT44(uRam000000000f64219c,_DAT_0f642198));
  }
  func_0x0730fa70(puVar16,&uStack_98,0);
  if ((uStack_90 & 1) != 0) {
    func_0x0412a280(uStack_80,CONCAT44(uStack_8c,uStack_90) & 0xfffffffffffffffe);
  }
  if (apcStack_500[0] != (code *)0x0) {
    (*apcStack_500[0])(auStack_518);
  }
  if (pcStack_548 != (code *)0x0) {
    (*pcStack_548)(auStack_560);
  }
  if (apcStack_588[0] != (code *)0x0) {
    (*apcStack_588[0])(alStack_5a0);
  }
  if ((code *)CONCAT44(uStack_5c8._4_4_,(undefined4)uStack_5c8) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_5c8._4_4_,(undefined4)uStack_5c8))(auStack_5e8 + 8);
  }
  if (((ulong)uStack_618 & 1) != 0) {
    func_0x0412a280(puStack_608,(ulong)uStack_618 & 0xfffffffffffffffe);
  }
  if ((bStack_820 & 1) != 0) {
    func_0x0412a280(uStack_810,
                    CONCAT26(uStack_81a,CONCAT15(uStack_81b,CONCAT41(uStack_81f,bStack_820))) &
                    0xfffffffffffffffe);
  }
  puStack_7f8 = (ulong *)CONCAT26(puStack_7f8._6_2_,0x6564697308);
  func_0x08db8640(&uStack_618,&puStack_7f8);
  if ((code *)CONCAT44(uStack_5c8._4_4_,(undefined4)uStack_5c8) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_5c8._4_4_,(undefined4)uStack_5c8))(auStack_5e8 + 8);
  }
  plVar11 = plStack_5a8;
  puStack_5d0 = &UNK_08e55090;
  uStack_5c0 = 0xd6179fe8;
  uStack_5c8._0_4_ = 0;
  uStack_5c8._4_4_ = 0;
  uStack_5bc = CONCAT31(uStack_5bc._1_3_,2);
  auStack_5e8._8_8_ = auStack_5e8._8_8_ & 0xffffffff00000000;
  plStack_5a8 = (long *)&UNK_08e55070;
  if (plVar11 != (long *)&UNK_08e55070) {
    pcStack_5b0 = (code *)0x0;
  }
  pcStack_768 = (code *)0x0;
  puStack_750 = (undefined *)0x0;
  uStack_718 = 0;
  uStack_710 = 0;
  pcStack_728 = (code *)0x0;
  uStack_720 = (undefined *)0x0;
  puStack_738 = (undefined *)0x0;
  pcStack_730 = (code *)0x0;
  puStack_748 = (undefined *)0x0;
  uStack_740 = 0;
  uStack_778 = (undefined *)0x0;
  uStack_770 = (long *)0x0;
  uStack_760 = 0x7465671e;
  uStack_75c = 0x74786554;
  uStack_758 = 0x43657944;
  uStack_754 = 0x726f6c6f;
  func_0x08e58590(&uStack_388,&uStack_618);
  func_0x08e5d830();
  pcVar13 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar13 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar13 + 8) = 0;
  *(undefined8 *)(pcVar13 + 0x10) = 0;
  *(undefined **)pcVar13 = &UNK_0f15f970;
  uVar8 = func_0x0d858500(&uStack_388);
  pcVar1 = pcVar13 + 0x18;
  pcVar13[0x20] = (code)0x1;
  *(undefined4 *)(pcVar13 + 0x24) = uVar8;
  *(undefined4 *)(pcVar13 + 0x28) = 0;
  *(undefined8 *)(pcVar13 + 0x30) = 0;
  *(undefined8 *)(pcVar13 + 0x38) = 0;
  *(undefined8 *)(pcVar13 + 0x40) = 0;
  *(undefined **)(pcVar13 + 0x18) = &UNK_0f15f9c0;
  *(undefined4 *)(pcVar13 + 0x48) = (undefined4)uStack_388;
  *(undefined4 *)(pcVar13 + 0x4c) = uStack_388._4_4_;
  *(undefined4 *)(pcVar13 + 0x50) = (undefined4)uStack_380;
  *(undefined4 *)(pcVar13 + 0x54) = uStack_380._4_4_;
  *(ulong *)(pcVar13 + 0x58) = uStack_378;
  uStack_388 = (code *)0x0;
  uStack_380 = 0;
  uStack_378 = 0;
  uVar8 = func_0x0d858620(pcVar1);
  pcVar4 = pcStack_728;
  *(undefined4 *)(pcVar13 + 0x28) = uVar8;
  pcStack_730 = pcVar1;
  if (pcStack_728 != (code *)0x0) {
    LOCK();
    plVar11 = (long *)((long)pcStack_728 + 8);
    lVar23 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      lVar23 = *(long *)pcStack_728;
      pcStack_728 = pcVar13;
      (**(code **)(lVar23 + 0x10))(pcVar4);
      func_0x0412c2d0(pcVar4);
      pcVar13 = pcStack_728;
    }
  }
  pcStack_728 = pcVar13;
  cVar7 = func_0x08e58710(&uStack_778,&uStack_618);
  if (cVar7 == '\0') {
    puVar16 = (undefined8 *)0xf5f6d48;
    uVar14 = (ulong)uStack_388;
  }
  else {
    if (puStack_1b0 < puStack_1a8) {
      *puStack_1b0 = 0;
      puStack_1b0[1] = 0;
      puStack_1b0[2] = 0;
      *puStack_1b0 = uStack_778;
      puStack_1b0[1] = uStack_770;
      puStack_1b0[2] = pcStack_768;
      uStack_778 = (undefined *)0x0;
      uStack_770 = (long *)0x0;
      pcStack_768 = (code *)0x0;
      puStack_1b0[5] = puStack_750;
      puStack_1b0[3] = CONCAT44(uStack_75c,uStack_760);
      puStack_1b0[4] = CONCAT44(uStack_754,uStack_758);
      uStack_760 = 0;
      uStack_75c = 0;
      uStack_758 = 0;
      uStack_754 = 0;
      puStack_750 = (undefined *)0x0;
      puStack_1b0[6] = 0;
      puStack_1b0[7] = 0;
      puStack_1b0[8] = 0;
      puStack_1b0[6] = puStack_748;
      puStack_1b0[7] = uStack_740;
      puStack_1b0[8] = puStack_738;
      puStack_748 = (undefined *)0x0;
      uStack_740 = 0;
      puStack_738 = (undefined *)0x0;
      puStack_1b0[9] = pcStack_730;
      puStack_1b0[10] = pcStack_728;
      pcStack_730 = (code *)0x0;
      pcStack_728 = (code *)0x0;
      puStack_1b0[0xb] = 0;
      puStack_1b0[0xc] = 0;
      puStack_1b0[0xd] = 0;
      *(undefined4 *)(puStack_1b0 + 0xb) = (undefined4)uStack_720;
      *(undefined4 *)((long)puStack_1b0 + 0x5c) = uStack_720._4_4_;
      *(undefined4 *)(puStack_1b0 + 0xc) = (undefined4)uStack_718;
      *(undefined4 *)((long)puStack_1b0 + 100) = uStack_718._4_4_;
      puStack_1b0[0xd] = uStack_710;
      uStack_720 = (undefined *)0x0;
      uStack_718 = 0;
      uStack_710 = 0;
      puStack_1b0 = puStack_1b0 + 0xe;
    }
    else {
      puStack_1b0 = (undefined8 *)func_0x0652ac80(&lStack_1b8,&uStack_778);
    }
    puVar16 = puStack_1b0 + -0xe;
    uVar14 = (ulong)uStack_388;
  }
  uStack_388 = (code *)uVar14;
  if (uVar14 != 0) {
    if (uVar14 != uStack_380) {
      lVar23 = uStack_380 - 0x40;
      do {
        if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
          (**(code **)(lVar23 + 0x18))(lVar23);
        }
        if (*(code **)(lVar23 + -0x30) != (code *)0x0) {
          (**(code **)(lVar23 + -0x30))(lVar23 + -0x48);
        }
        if (*(code **)(lVar23 + -0x70) != (code *)0x0) {
          (**(code **)(lVar23 + -0x70))(lVar23 + -0x88);
        }
        if (*(code **)(lVar23 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar23 + -0xb0))(lVar23 + -200);
        }
        uVar22 = lVar23 - 0xd8;
        lVar23 = lVar23 + -0x118;
      } while (uVar22 != uVar14);
    }
    uStack_380 = uVar14;
    func_0x0412a280(uStack_388,uStack_378 - (long)uStack_388);
  }
  func_0x05f93280(&uStack_778);
  uStack_b8 = _DAT_0f642188;
  uStack_b4 = _DAT_0f64218c;
  if ((_DAT_0f642190 & 1) == 0) {
    uStack_a0 = _DAT_0f6421a0;
    uStack_b0 = _DAT_0f642190;
    uStack_ac = uRam000000000f642194;
    uStack_a8 = _DAT_0f642198;
    uStack_a4 = uRam000000000f64219c;
  }
  else {
    func_0x0412e5e0(&uStack_b0,_DAT_0f6421a0,CONCAT44(uRam000000000f64219c,_DAT_0f642198));
  }
  func_0x0730fa70(puVar16,&uStack_b8,0);
  if ((uStack_b0 & 1) != 0) {
    func_0x0412a280(uStack_a0,CONCAT44(uStack_ac,uStack_b0) & 0xfffffffffffffffe);
  }
  if (apcStack_500[0] != (code *)0x0) {
    (*apcStack_500[0])(auStack_518);
  }
  if (pcStack_548 != (code *)0x0) {
    (*pcStack_548)(auStack_560);
  }
  if (apcStack_588[0] != (code *)0x0) {
    (*apcStack_588[0])(alStack_5a0);
  }
  if ((code *)CONCAT44(uStack_5c8._4_4_,(undefined4)uStack_5c8) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_5c8._4_4_,(undefined4)uStack_5c8))(auStack_5e8 + 8);
  }
  if (((ulong)uStack_618 & 1) != 0) {
    func_0x0412a280(puStack_608,(ulong)uStack_618 & 0xfffffffffffffffe);
  }
  if (((ulong)puStack_7f8 & 1) != 0) {
    func_0x0412a280(uStack_7e8,(ulong)puStack_7f8 & 0xfffffffffffffffe);
  }
  uStack_868 = CONCAT17(uStack_868._7_1_,0x726f6c6f630a);
  uStack_778 = (undefined *)0x0;
  uStack_770 = (long *)0x0;
  pcStack_768 = (code *)0x0;
  func_0x048b1dc0(&uStack_760);
  func_0x0652b590(&puStack_750);
  if (((ulong)uStack_778 & 1) == 0) {
    if ((uStack_868 & 1) == 0) {
      pcStack_768 = (code *)puStack_858;
      uStack_778 = (undefined *)uStack_868;
      uStack_770 = (long *)uStack_860;
    }
    else {
      func_0x04885070(&uStack_778,puStack_858,uStack_860);
    }
  }
  else {
    uVar14 = uStack_868 >> 1 & 0x7f;
    puVar27 = (undefined *)((long)&uStack_868 + 1);
    if ((uStack_868 & 1) != 0) {
      uVar14 = uStack_860;
      puVar27 = puStack_858;
    }
    func_0x04885120(&uStack_778,puVar27,uVar14);
  }
  plVar11 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (plVar11 == (long *)0x0) {
    func_0x048b0de0(&uStack_618,&uStack_388);
    _DAT_0f54fd90 = (undefined4)uStack_618;
    uRam000000000f54fd94 = uStack_618._4_4_;
    uVar8 = (undefined4)uStack_610;
    uVar26 = uStack_610._4_4_;
    uStack_618 = (undefined *)0x0;
    uStack_610 = (long *)0x0;
    plVar11 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar8;
    uRam000000000f54fd9c = uVar26;
    if (plVar11 != (long *)0x0) {
      LOCK();
      plVar17 = plVar11 + 1;
      lVar23 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        func_0x0412c2d0(plVar11);
      }
    }
    plVar11 = uStack_610;
    if (uStack_610 != (long *)0x0) {
      LOCK();
      plVar17 = uStack_610 + 1;
      lVar23 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*uStack_610 + 0x10))(uStack_610);
        func_0x0412c2d0(plVar11);
      }
    }
    plVar11 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (DAT_0f5fb4e0 == '\0') {
    iVar10 = func_0x04108328(&DAT_0f5fb4e0);
    if (iVar10 != 0) {
      func_0x08e5dc50();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5fb460,0xf53dab8);
      func_0x0410844d(&DAT_0f5fb4e0);
    }
  }
  plVar17 = (long *)(*plVar11 +
                    (ulong)((int)((ulong)(plVar11[1] - *plVar11) >> 3) - 1U &
                           *(uint *)(_DAT_0f5fb460 + 4)) * 8);
  do {
    lVar23 = *plVar17;
    if (lVar23 == -1) goto LAB_08db5dc0;
    plVar17 = (long *)(plVar11[3] + lVar23 * 0x18);
  } while (*(uint *)(plVar11[3] + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f5fb460 + 4));
  if (plVar17 == (long *)plVar11[4]) {
LAB_08db5dc0:
    puVar27 = &DAT_0f5fb460;
  }
  else {
    puVar27 = (undefined *)plVar17[2];
  }
  uStack_760 = (uint)puVar27;
  uStack_75c = (undefined4)((ulong)puVar27 >> 0x20);
  uStack_758 = SUB84(plVar11,0);
  uStack_754 = (undefined4)((ulong)plVar11 >> 0x20);
  if (pcStack_728 != (code *)0x0) {
    (*pcStack_728)(&uStack_740);
  }
  plVar11 = plStack_708;
  pcStack_730 = (code *)&UNK_08e5e0c0;
  pcStack_728 = (code *)0x0;
  uStack_720 = (undefined *)CONCAT35(uStack_720._5_3_,0x27ca6998a);
  uStack_740 = uStack_740 & 0xffffffffffff0000;
  plStack_708 = (long *)&UNK_08e5df10;
  if (plVar11 != (long *)&UNK_08e5df10) {
    uStack_710 = 0;
  }
  bStack_820 = 8;
  uStack_81f = 0x65646973;
  uStack_81b = 0;
  func_0x08db8640(&uStack_388,&bStack_820);
  if (pcStack_338 != (code *)0x0) {
    (*pcStack_338)(&uStack_350);
  }
  puVar27 = puStack_318;
  pcStack_340 = (code *)&UNK_08e55090;
  pcStack_338 = (code *)0x0;
  uStack_330 = CONCAT35(uStack_330._5_3_,0x2d6179fe8);
  uStack_350 = uStack_350 & 0xffffffff00000000;
  puStack_318 = &UNK_08e55070;
  if (puVar27 != &UNK_08e55070) {
    uStack_320 = 0;
  }
  uStack_7e8 = 0;
  uStack_7d0 = 0;
  uStack_798 = 0;
  uStack_790 = 0;
  plStack_7a8 = (long *)0x0;
  uStack_7a0 = 0;
  puStack_7b8 = (ulong *)0x0;
  plStack_7b0 = (long *)0x0;
  puStack_7c8 = (ulong *)0x0;
  puStack_7c0 = (ulong *)0x0;
  puStack_7f8 = (ulong *)0x0;
  puStack_7f0 = (ulong *)0x0;
  uStack_7e0 = 0x747865547465731e;
  uStack_7d8 = 0x726f6c6f43657944;
  func_0x06523ef0(&uStack_618,&puStack_750);
  func_0x06523ef0(apcStack_500,&uStack_360);
  uStack_848 = (ulong *)0x0;
  uStack_840 = (ulong *)0x0;
  uStack_838 = 0;
  uStack_780 = 0;
  ppuStack_788 = (ulong **)&uStack_848;
  uVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x230);
  if (uVar14 == 0) {
    func_0x0eec74c0(0x230,0);
  }
  uStack_838 = uVar14 + 0x230;
  puStack_880 = &uStack_390;
  uStack_878 = &uStack_808;
  uStack_870 = uStack_870 & 0xffffff00;
  puStack_888 = &uStack_848;
  uStack_848 = (ulong *)uVar14;
  uStack_840 = (ulong *)uVar14;
  uStack_808 = uVar14;
  uStack_390 = uVar14;
  func_0x06523ef0(uVar14,&uStack_618);
  uStack_808 = uStack_808 + 0x118;
  func_0x06523ef0(uStack_808,apcStack_500);
  uStack_840 = (ulong *)(uStack_808 + 0x118);
  if (pcStack_410 != (code *)0x0) {
    (*pcStack_410)(auStack_428);
  }
  if (pcStack_458 != (code *)0x0) {
    (*pcStack_458)(auStack_470);
  }
  if (pcStack_498 != (code *)0x0) {
    (*pcStack_498)(auStack_4b0);
  }
  if (pcStack_4d8 != (code *)0x0) {
    (*pcStack_4d8)(auStack_4f0);
  }
  if (pcStack_528 != (code *)0x0) {
    (*pcStack_528)(auStack_540);
  }
  if (pcStack_570 != (code *)0x0) {
    (*pcStack_570)(apcStack_588);
  }
  if (pcStack_5b0 != (code *)0x0) {
    (*pcStack_5b0)(&uStack_5c8);
  }
  if (pcStack_5f0 != (code *)0x0) {
    (*pcStack_5f0)(&puStack_608);
  }
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (plVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0f15fa40;
  uVar8 = func_0x0d858500(&uStack_848);
  plVar17 = plVar11 + 3;
  *(undefined1 *)(plVar11 + 4) = 0;
  *(undefined4 *)((long)plVar11 + 0x24) = uVar8;
  *(undefined4 *)(plVar11 + 5) = 0;
  plVar11[6] = 0;
  plVar11[7] = 0;
  plVar11[8] = 0;
  plVar11[3] = (long)&UNK_0f15fa90;
  *(undefined4 *)(plVar11 + 9) = (undefined4)uStack_848;
  *(undefined4 *)((long)plVar11 + 0x4c) = uStack_848._4_4_;
  *(undefined4 *)(plVar11 + 10) = (undefined4)uStack_840;
  *(undefined4 *)((long)plVar11 + 0x54) = uStack_840._4_4_;
  plVar11[0xb] = uStack_838;
  uStack_848 = (ulong *)0x0;
  uStack_840 = (ulong *)0x0;
  uStack_838 = 0;
  uVar8 = func_0x0d858620(plVar17);
  plVar3 = plStack_7a8;
  *(undefined4 *)(plVar11 + 5) = uVar8;
  plStack_7b0 = plVar17;
  if (plStack_7a8 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_7a8 + 1;
    lVar23 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      lVar23 = *plStack_7a8;
      plStack_7a8 = plVar11;
      (**(code **)(lVar23 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
      plVar11 = plStack_7a8;
    }
  }
  plStack_7a8 = plVar11;
  func_0x08e5d830();
  puStack_608 = pcStack_768;
  uStack_618 = uStack_778;
  uStack_610 = uStack_770;
  uStack_778 = (undefined *)0x0;
  uStack_770 = (long *)0x0;
  pcStack_768 = (code *)0x0;
  uStack_600 = uStack_760;
  uStack_5fc = uStack_75c;
  uStack_5f8 = CONCAT44(uStack_754,uStack_758);
  func_0x065281f0(&pcStack_5f0,&puStack_750);
  uStack_4c8 = uStack_378;
  pcStack_4d8 = uStack_388;
  uStack_4d0 = uStack_380;
  uStack_388 = (code *)0x0;
  uStack_380 = 0;
  uStack_378 = 0;
  uStack_4c0 = (undefined4)uStack_370;
  uStack_4bc = uStack_370._4_4_;
  uStack_4b8 = (undefined4)uStack_368;
  uStack_4b4 = uStack_368._4_4_;
  func_0x065281f0(auStack_4b0,&uStack_360);
  puStack_888 = (ulong *)0x0;
  puStack_880 = (ulong *)0x0;
  uStack_878 = (ulong *)0x0;
  ppuStack_788 = &puStack_888;
  uStack_780 = 0;
  puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x280);
  if (puVar12 == (ulong *)0x0) {
    func_0x0eec74c0(0x280,0);
  }
  puVar20 = puVar12 + 0x50;
  puStack_888 = puVar12;
  puStack_880 = puVar12;
  uStack_878 = puVar20;
  if (((ulong)uStack_618 & 1) == 0) {
    puVar12[2] = (ulong)puStack_608;
    *puVar12 = (ulong)uStack_618;
    puVar12[1] = (ulong)uStack_610;
  }
  else {
    func_0x0412e5e0(puVar12,puStack_608,uStack_610);
  }
  *(uint *)(puVar12 + 3) = uStack_600;
  *(undefined4 *)((long)puVar12 + 0x1c) = uStack_5fc;
  *(undefined4 *)(puVar12 + 4) = (undefined4)uStack_5f8;
  *(undefined4 *)((long)puVar12 + 0x24) = uStack_5f8._4_4_;
  func_0x06523ef0(puVar12 + 5,&pcStack_5f0);
  if (((ulong)pcStack_4d8 & 1) == 0) {
    puVar12[0x2a] = uStack_4c8;
    puVar12[0x28] = (ulong)pcStack_4d8;
    puVar12[0x29] = uStack_4d0;
  }
  else {
    func_0x0412e5e0(puVar12 + 0x28,uStack_4c8,uStack_4d0);
  }
  *(undefined4 *)(puVar12 + 0x2b) = uStack_4c0;
  *(undefined4 *)((long)puVar12 + 0x15c) = uStack_4bc;
  *(undefined4 *)(puVar12 + 0x2c) = uStack_4b8;
  *(undefined4 *)((long)puVar12 + 0x164) = uStack_4b4;
  func_0x06523ef0(puVar12 + 0x2d,auStack_4b0);
  puStack_880 = puVar20;
  if (pcStack_3c0 != (code *)0x0) {
    (*pcStack_3c0)(auStack_3d8);
  }
  if (pcStack_408 != (code *)0x0) {
    (*pcStack_408)(auStack_420);
  }
  if (pcStack_448 != (code *)0x0) {
    (*pcStack_448)(auStack_460);
  }
  if (pcStack_488 != (code *)0x0) {
    (*pcStack_488)(auStack_4a0);
  }
  if (((ulong)pcStack_4d8 & 1) != 0) {
    func_0x0412a280(uStack_4c8,(ulong)pcStack_4d8 & 0xfffffffffffffffe);
  }
  if (apcStack_500[0] != (code *)0x0) {
    (*apcStack_500[0])(auStack_518);
  }
  if (pcStack_548 != (code *)0x0) {
    (*pcStack_548)(auStack_560);
  }
  if (apcStack_588[0] != (code *)0x0) {
    (*apcStack_588[0])(alStack_5a0);
  }
  if ((code *)CONCAT44(uStack_5c8._4_4_,(undefined4)uStack_5c8) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_5c8._4_4_,(undefined4)uStack_5c8))(auStack_5e8 + 8);
  }
  if (((ulong)uStack_618 & 1) != 0) {
    func_0x0412a280(puStack_608,(ulong)uStack_618 & 0xfffffffffffffffe);
  }
  uVar9 = (**(code **)(*plStack_7b0 + 0x20))();
  uVar22 = ((long)puStack_880 - (long)puStack_888 >> 6) * -0x3333333333333333;
  uVar14 = 0;
  if ((uVar9 != 0) && ((uint)uVar22 != 0)) {
    uVar24 = 0;
    uVar14 = 0;
    uStack_7fc = uVar9;
    do {
      auVar25 = (**(code **)(*plStack_7b0 + 0x28))(plStack_7b0,uVar24);
      uVar18 = auVar25._8_8_;
      lVar23 = auVar25._0_8_;
      auVar25 = func_0x06527d70();
      if (auVar25._8_8_ == uVar18) {
        if (auVar25._0_8_ == 0) {
          lVar15 = FUN_048aead0(auVar25._8_8_);
          iVar10 = *(int *)(lVar15 + 8);
          if (lVar23 != 0) goto LAB_08db6571;
LAB_08db658e:
          lVar15 = FUN_048aead0(uVar18);
          if (iVar10 != *(int *)(lVar15 + 8)) goto LAB_08db65a0;
        }
        else {
          iVar10 = *(int *)(auVar25._0_8_ + 8);
          if (lVar23 == 0) goto LAB_08db658e;
LAB_08db6571:
          if (iVar10 != *(int *)(lVar23 + 8)) goto LAB_08db65a0;
        }
      }
      else {
LAB_08db65a0:
        auVar25 = func_0x06527e30();
        if (auVar25._8_8_ == uVar18) {
          if (auVar25._0_8_ == 0) {
            lVar15 = FUN_048aead0(auVar25._8_8_);
            iVar10 = *(int *)(lVar15 + 8);
          }
          else {
            iVar10 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar23 == 0) {
            lVar15 = FUN_048aead0(uVar18);
            iVar2 = *(int *)(lVar15 + 8);
          }
          else {
            iVar2 = *(int *)(lVar23 + 8);
          }
          if (iVar10 == iVar2) goto LAB_08db6793;
        }
        auVar25 = func_0x06527ef0();
        if (auVar25._8_8_ == uVar18) {
          if (auVar25._0_8_ == 0) {
            lVar15 = FUN_048aead0(auVar25._8_8_);
            iVar10 = *(int *)(lVar15 + 8);
          }
          else {
            iVar10 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar23 == 0) {
            lVar15 = FUN_048aead0(uVar18);
            iVar2 = *(int *)(lVar15 + 8);
          }
          else {
            iVar2 = *(int *)(lVar23 + 8);
          }
          if (iVar10 == iVar2) goto LAB_08db6793;
        }
        auVar25 = func_0x06527fb0();
        if (auVar25._8_8_ == uVar18) {
          if (auVar25._0_8_ == 0) {
            lVar15 = FUN_048aead0(auVar25._8_8_);
            iVar10 = *(int *)(lVar15 + 8);
          }
          else {
            iVar10 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar23 == 0) {
            lVar15 = FUN_048aead0(uVar18);
            iVar2 = *(int *)(lVar15 + 8);
          }
          else {
            iVar2 = *(int *)(lVar23 + 8);
          }
          if (iVar10 == iVar2) goto LAB_08db6793;
        }
        auVar25 = func_0x06528070();
        if (auVar25._8_8_ == uVar18) {
          if (auVar25._0_8_ == 0) {
            lVar15 = FUN_048aead0(auVar25._8_8_);
            iVar10 = *(int *)(lVar15 + 8);
          }
          else {
            iVar10 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar23 == 0) {
            lVar15 = FUN_048aead0(uVar18);
            iVar2 = *(int *)(lVar15 + 8);
          }
          else {
            iVar2 = *(int *)(lVar23 + 8);
          }
          if (iVar10 == iVar2) goto LAB_08db6793;
        }
        auVar25 = func_0x06528130();
        if (auVar25._8_8_ == uVar18) {
          if (auVar25._0_8_ == 0) {
            lVar15 = FUN_048aead0(auVar25._8_8_);
            iVar10 = *(int *)(lVar15 + 8);
          }
          else {
            iVar10 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar23 == 0) {
            lVar15 = FUN_048aead0(uVar18);
            iVar2 = *(int *)(lVar15 + 8);
          }
          else {
            iVar2 = *(int *)(lVar23 + 8);
          }
          if (iVar10 == iVar2) goto LAB_08db6793;
        }
        puVar12 = puStack_888;
        puVar20 = puStack_880;
        if (puStack_888[uVar14 * 0x28 + 4] != uVar18) goto joined_r0x08db69b1;
        if (puStack_888[uVar14 * 0x28 + 3] == 0) {
          lVar15 = FUN_048aead0();
          iVar10 = *(int *)(lVar15 + 8);
          if (lVar23 != 0) goto LAB_08db6764;
LAB_08db677c:
          lVar23 = FUN_048aead0(uVar18);
          if (iVar10 != *(int *)(lVar23 + 8)) goto LAB_08db69a1;
        }
        else {
          iVar10 = *(int *)(puStack_888[uVar14 * 0x28 + 3] + 8);
          if (lVar23 == 0) goto LAB_08db677c;
LAB_08db6764:
          if (iVar10 != *(int *)(lVar23 + 8)) goto LAB_08db69a1;
        }
        uVar14 = (ulong)((int)uVar14 + 1);
      }
LAB_08db6793:
    } while (((uint)uVar14 < (uint)uVar22) && (uVar24 = uVar24 + 1, uVar24 < uStack_7fc));
    uVar22 = ((long)puStack_880 - (long)puStack_888 >> 6) * -0x3333333333333333;
  }
  puVar12 = puStack_7c8;
  if (uVar22 == uVar14) {
    puVar20 = puStack_7c0;
    if (puStack_7c8 != (ulong *)0x0) {
      while (puVar12 != puVar20) {
        func_0x05fe8450(puVar20 + -0x28);
        puVar20 = puVar20 + -0x28;
      }
      puStack_7c0 = puVar12;
      func_0x0412a280(puStack_7c8,(long)puStack_7b8 - (long)puStack_7c8);
    }
    puStack_7b8 = uStack_878;
    if (puStack_1b0 < puStack_1a8) {
      *puStack_1b0 = 0;
      puStack_1b0[1] = 0;
      puStack_1b0[2] = 0;
      *puStack_1b0 = puStack_7f8;
      puStack_1b0[1] = puStack_7f0;
      puStack_1b0[2] = uStack_7e8;
      puStack_7f8 = (ulong *)0x0;
      puStack_7f0 = (ulong *)0x0;
      uStack_7e8 = 0;
      puStack_1b0[5] = uStack_7d0;
      puStack_1b0[3] = uStack_7e0;
      puStack_1b0[4] = uStack_7d8;
      uStack_7e0 = 0;
      uStack_7d8 = 0;
      uStack_7d0 = 0;
      puStack_1b0[6] = 0;
      puStack_1b0[7] = 0;
      puStack_1b0[8] = 0;
      puStack_1b0[6] = puStack_888;
      puStack_1b0[7] = puStack_880;
      puStack_1b0[8] = uStack_878;
      puStack_7c8 = (ulong *)0x0;
      puStack_7c0 = (ulong *)0x0;
      puStack_7b8 = (ulong *)0x0;
      puStack_1b0[9] = plStack_7b0;
      puStack_1b0[10] = plStack_7a8;
      plStack_7b0 = (long *)0x0;
      plStack_7a8 = (undefined8 *)0x0;
      puStack_1b0[0xb] = 0;
      puStack_1b0[0xc] = 0;
      puStack_1b0[0xd] = 0;
      *(undefined4 *)(puStack_1b0 + 0xb) = (undefined4)uStack_7a0;
      *(undefined4 *)((long)puStack_1b0 + 0x5c) = uStack_7a0._4_4_;
      *(undefined4 *)(puStack_1b0 + 0xc) = (undefined4)uStack_798;
      *(undefined4 *)((long)puStack_1b0 + 100) = uStack_798._4_4_;
      puStack_1b0[0xd] = uStack_790;
      uStack_7a0 = 0;
      uStack_798 = 0;
      uStack_790 = 0;
      puStack_1b0 = puStack_1b0 + 0xe;
    }
    else {
      puStack_7c8 = puStack_888;
      puStack_7c0 = puStack_880;
      puStack_1b0 = (undefined8 *)func_0x0652ac80(&lStack_1b8,&puStack_7f8);
    }
    puVar16 = puStack_1b0 + -0xe;
    uVar14 = (ulong)uStack_848;
  }
  else {
LAB_08db69a1:
    puVar12 = puStack_888;
    puVar20 = puStack_880;
    if (puStack_888 != (ulong *)0x0) {
joined_r0x08db69b1:
      while (puVar19 = puStack_888, puStack_888 != puVar20) {
        puStack_888 = puVar12;
        func_0x05fe8450(puVar20 + -0x28);
        puVar12 = puStack_888;
        puVar20 = puVar20 + -0x28;
        puStack_888 = puVar19;
      }
      puStack_880 = puStack_888;
      puStack_888 = puVar12;
      func_0x0412a280(puVar12,(long)uStack_878 - (long)puVar12);
    }
    puVar16 = (undefined8 *)0xf5f6d48;
    uVar14 = (ulong)uStack_848;
  }
  uStack_848 = (ulong *)uVar14;
  if (uVar14 != 0) {
    if ((ulong *)uVar14 != uStack_840) {
      lVar23 = (long)uStack_840 - 0x40;
      do {
        if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
          (**(code **)(lVar23 + 0x18))(lVar23);
        }
        if (*(code **)(lVar23 + -0x30) != (code *)0x0) {
          (**(code **)(lVar23 + -0x30))(lVar23 + -0x48);
        }
        if (*(code **)(lVar23 + -0x70) != (code *)0x0) {
          (**(code **)(lVar23 + -0x70))(lVar23 + -0x88);
        }
        if (*(code **)(lVar23 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar23 + -0xb0))(lVar23 + -200);
        }
        uVar22 = lVar23 - 0xd8;
        lVar23 = lVar23 + -0x118;
      } while (uVar22 != uVar14);
    }
    uStack_840 = (ulong *)uVar14;
    func_0x0412a280(uStack_848,uStack_838 - (long)uStack_848);
  }
  func_0x05f93280(&puStack_7f8);
  uStack_d8 = _DAT_0f642188;
  uStack_d4 = _DAT_0f64218c;
  if ((_DAT_0f642190 & 1) == 0) {
    uStack_c0 = _DAT_0f6421a0;
    uStack_d0 = _DAT_0f642190;
    uStack_cc = uRam000000000f642194;
    uStack_c8 = _DAT_0f642198;
    uStack_c4 = uRam000000000f64219c;
  }
  else {
    func_0x0412e5e0(&uStack_d0,_DAT_0f6421a0,CONCAT44(uRam000000000f64219c,_DAT_0f642198));
  }
  func_0x0730fa70(puVar16,&uStack_d8,0);
  if ((uStack_d0 & 1) != 0) {
    func_0x0412a280(uStack_c0,CONCAT44(uStack_cc,uStack_d0) & 0xfffffffffffffffe);
  }
  if (pcStack_270 != (code *)0x0) {
    (*pcStack_270)(auStack_288);
  }
  if (pcStack_2b8 != (code *)0x0) {
    (*pcStack_2b8)(auStack_2d0);
  }
  if (pcStack_2f8 != (code *)0x0) {
    (*pcStack_2f8)(auStack_310);
  }
  if (pcStack_338 != (code *)0x0) {
    (*pcStack_338)(&uStack_350);
  }
  if (((ulong)uStack_388 & 1) != 0) {
    func_0x0412a280(uStack_378,(ulong)uStack_388 & 0xfffffffffffffffe);
  }
  if ((bStack_820 & 1) != 0) {
    func_0x0412a280(uStack_810,
                    CONCAT26(uStack_81a,CONCAT15(uStack_81b,CONCAT41(uStack_81f,bStack_820))) &
                    0xfffffffffffffffe);
  }
  if (pcStack_660 != (code *)0x0) {
    (*pcStack_660)(auStack_678);
  }
  if (pcStack_6a8 != (code *)0x0) {
    (*pcStack_6a8)(auStack_6c0);
  }
  if (pcStack_6e8 != (code *)0x0) {
    (*pcStack_6e8)(alStack_700);
  }
  if (pcStack_728 != (code *)0x0) {
    (*pcStack_728)(&uStack_740);
  }
  if (((ulong)uStack_778 & 1) != 0) {
    func_0x0412a280(pcStack_768,(ulong)uStack_778 & 0xfffffffffffffffe);
  }
  if ((uStack_868 & 1) != 0) {
    func_0x0412a280(puStack_858,uStack_868 & 0xfffffffffffffffe);
  }
  uStack_778 = (undefined *)0x646578615773690e;
  uStack_770 = (long *)((ulong)uStack_770 & 0xffffffffffffff00);
  func_0x065af670(&uStack_618);
  if ((uStack_600 & 1) == 0) {
    if (((ulong)uStack_778 & 1) == 0) {
      pcStack_5f0 = pcStack_768;
      uStack_600 = (uint)uStack_778;
      uStack_5fc = uStack_778._4_4_;
      uStack_5f8 = (ulong)uStack_770;
    }
    else {
      func_0x04885070(&uStack_600,pcStack_768,uStack_770);
    }
  }
  else {
    uVar14 = (ulong)uStack_778 >> 1 & 0x7f;
    pcVar13 = (code *)((long)&uStack_778 + 1);
    if (((ulong)uStack_778 & 1) != 0) {
      uVar14 = (ulong)uStack_770;
      pcVar13 = pcStack_768;
    }
    func_0x04885120(&uStack_600,pcVar13,uVar14);
  }
  auStack_5e8 = func_0x06690e50();
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0f15fb20;
  uStack_5c8 = (code *)(puVar16 + 3);
  *(undefined1 *)(puVar16 + 4) = 1;
  puVar16[5] = 0;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[3] = &UNK_0f15fb70;
  plVar11 = (long *)CONCAT44(uStack_5bc,uStack_5c0);
  uStack_5c0 = SUB84(puVar16,0);
  uStack_5bc = (undefined4)((ulong)puVar16 >> 0x20);
  if (plVar11 == (long *)0x0) {
LAB_08db6dd8:
    if (uStack_190 <= uStack_198) {
LAB_08db6e26:
      lVar23 = func_0x065b01f0(&lStack_1a0,&uStack_618);
      goto LAB_08db6e3e;
    }
  }
  else {
    LOCK();
    plVar17 = plVar11 + 1;
    lVar23 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar23 != 0) goto LAB_08db6dd8;
    (**(code **)(*plVar11 + 0x10))(plVar11);
    func_0x0412c2d0(plVar11);
    if (uStack_190 <= uStack_198) goto LAB_08db6e26;
  }
  uVar14 = uStack_198;
  func_0x065b0410(uStack_198,&uStack_618);
  lVar23 = uVar14 + 0x1b0;
LAB_08db6e3e:
  uStack_198 = lVar23;
  func_0x0652dc20(&uStack_618);
  uStack_f8 = _DAT_0f642188;
  uStack_f4 = _DAT_0f64218c;
  if ((_DAT_0f642190 & 1) == 0) {
    uStack_e0 = _DAT_0f6421a0;
    uStack_f0 = _DAT_0f642190;
    uStack_ec = uRam000000000f642194;
    uStack_e8 = _DAT_0f642198;
    uStack_e4 = uRam000000000f64219c;
  }
  else {
    func_0x0412e5e0(&uStack_f0,_DAT_0f6421a0,CONCAT44(uRam000000000f64219c,_DAT_0f642198));
  }
  func_0x0730fa70(lVar23 + -0x1b0,&uStack_f8,0);
  if ((uStack_f0 & 1) != 0) {
    func_0x0412a280(uStack_e0,CONCAT44(uStack_ec,uStack_f0) & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_778 & 1) != 0) {
    func_0x0412a280(pcStack_768,(ulong)uStack_778 & 0xfffffffffffffffe);
  }
  puStack_7f8 = (ulong *)CONCAT17(puStack_7f8._7_1_,0x64657861770a);
  func_0x064fd070(&uStack_618,&puStack_7f8);
  pcStack_768 = (code *)0x0;
  uStack_754 = 0;
  puStack_750 = (undefined *)0x0;
  uStack_718 = 0;
  uStack_710 = 0;
  pcStack_728 = (code *)0x0;
  uStack_720 = (undefined *)0x0;
  puStack_738 = (undefined *)0x0;
  pcStack_730 = (code *)0x0;
  puStack_748 = (undefined *)0x0;
  uStack_740 = 0;
  uStack_778 = (undefined *)0x0;
  uStack_770 = (long *)0x0;
  uStack_760 = 0x74657310;
  uStack_75c = 0x65786157;
  uStack_758 = 100;
  func_0x06c57d00(&uStack_388,&uStack_618);
  pcVar13 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar13 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)((long)pcVar13 + 8) = 0;
  *(undefined8 *)((long)pcVar13 + 0x10) = 0;
  *(undefined **)pcVar13 = &UNK_0f15fbd0;
  uVar8 = func_0x0d858500(&uStack_388);
  puVar16 = (undefined8 *)((long)pcVar13 + 0x18);
  *(undefined1 *)((long)pcVar13 + 0x20) = 0;
  *(undefined4 *)((long)pcVar13 + 0x24) = uVar8;
  *(undefined4 *)((long)pcVar13 + 0x28) = 0;
  *(undefined8 *)((long)pcVar13 + 0x30) = 0;
  *(undefined8 *)((long)pcVar13 + 0x38) = 0;
  *(undefined8 *)((long)pcVar13 + 0x40) = 0;
  *(undefined **)((long)pcVar13 + 0x18) = &UNK_0f15fc20;
  *(undefined4 *)((long)pcVar13 + 0x48) = (undefined4)uStack_388;
  *(undefined4 *)((long)pcVar13 + 0x4c) = uStack_388._4_4_;
  *(undefined4 *)((long)pcVar13 + 0x50) = (undefined4)uStack_380;
  *(undefined4 *)((long)pcVar13 + 0x54) = uStack_380._4_4_;
  *(ulong *)((long)pcVar13 + 0x58) = uStack_378;
  uStack_388 = (code *)0x0;
  uStack_380 = 0;
  uStack_378 = 0;
  uVar8 = func_0x0d858620(puVar16);
  pcVar1 = pcStack_728;
  *(undefined4 *)((long)pcVar13 + 0x28) = uVar8;
  pcStack_730 = (code *)puVar16;
  if (pcStack_728 != (code *)0x0) {
    LOCK();
    plVar11 = (long *)((long)pcStack_728 + 8);
    lVar23 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      lVar23 = *(long *)pcStack_728;
      pcStack_728 = pcVar13;
      (**(code **)(lVar23 + 0x10))(pcVar1);
      func_0x0412c2d0(pcVar1);
      pcVar13 = pcStack_728;
    }
  }
  pcStack_728 = pcVar13;
  cVar7 = func_0x06c57e80(&uStack_778,&uStack_618);
  if (cVar7 == '\0') {
    puVar16 = (undefined8 *)0xf5f6d48;
    lVar23 = (long)uStack_388;
  }
  else {
    if (puStack_1b0 < puStack_1a8) {
      *puStack_1b0 = 0;
      puStack_1b0[1] = 0;
      puStack_1b0[2] = 0;
      *puStack_1b0 = uStack_778;
      puStack_1b0[1] = uStack_770;
      puStack_1b0[2] = pcStack_768;
      uStack_778 = (undefined *)0x0;
      uStack_770 = (long *)0x0;
      pcStack_768 = (code *)0x0;
      puStack_1b0[5] = puStack_750;
      puStack_1b0[3] = CONCAT44(uStack_75c,uStack_760);
      puStack_1b0[4] = CONCAT44(uStack_754,uStack_758);
      uStack_760 = 0;
      uStack_75c = 0;
      uStack_758 = 0;
      uStack_754 = 0;
      puStack_750 = (undefined *)0x0;
      puStack_1b0[6] = 0;
      puStack_1b0[7] = 0;
      puStack_1b0[8] = 0;
      puStack_1b0[6] = puStack_748;
      puStack_1b0[7] = uStack_740;
      puStack_1b0[8] = puStack_738;
      puStack_748 = (undefined *)0x0;
      uStack_740 = 0;
      puStack_738 = (undefined *)0x0;
      puStack_1b0[9] = pcStack_730;
      puStack_1b0[10] = pcStack_728;
      pcStack_730 = (code *)0x0;
      pcStack_728 = (code *)0x0;
      puStack_1b0[0xb] = 0;
      puStack_1b0[0xc] = 0;
      puStack_1b0[0xd] = 0;
      puStack_1b0[0xb] = uStack_720;
      puStack_1b0[0xc] = uStack_718;
      puStack_1b0[0xd] = uStack_710;
      uStack_720 = (undefined *)0x0;
      uStack_718 = 0;
      uStack_710 = 0;
      puStack_1b0 = puStack_1b0 + 0xe;
    }
    else {
      puStack_1b0 = (undefined8 *)func_0x0652ac80(&lStack_1b8,&uStack_778);
    }
    puVar16 = puStack_1b0 + -0xe;
    lVar23 = (long)uStack_388;
  }
  uStack_388 = (code *)lVar23;
  if (lVar23 != 0) {
    if (lVar23 != uStack_380) {
      lVar15 = uStack_380 + -0x40;
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
        lVar21 = lVar15 + -0xd8;
        lVar15 = lVar15 + -0x118;
      } while (lVar21 != lVar23);
    }
    uStack_380 = lVar23;
    func_0x0412a280(uStack_388,uStack_378 - (long)uStack_388);
  }
  func_0x05f93280(&uStack_778);
  uStack_118 = _DAT_0f642188;
  uStack_114 = _DAT_0f64218c;
  if ((_DAT_0f642190 & 1) == 0) {
    uStack_100 = _DAT_0f6421a0;
    uStack_110 = _DAT_0f642190;
    uStack_10c = uRam000000000f642194;
    uStack_108 = _DAT_0f642198;
    uStack_104 = uRam000000000f64219c;
  }
  else {
    func_0x0412e5e0(&uStack_110,_DAT_0f6421a0,CONCAT44(uRam000000000f64219c,_DAT_0f642198));
  }
  func_0x0730fa70(puVar16,&uStack_118,0);
  if ((uStack_110 & 1) != 0) {
    func_0x0412a280(uStack_100,CONCAT44(uStack_10c,uStack_110) & 0xfffffffffffffffe);
  }
  if (apcStack_500[0] != (code *)0x0) {
    (*apcStack_500[0])(auStack_518);
  }
  if (pcStack_548 != (code *)0x0) {
    (*pcStack_548)(auStack_560);
  }
  if (apcStack_588[0] != (code *)0x0) {
    (*apcStack_588[0])(alStack_5a0);
  }
  if (uStack_5c8 != (code *)0x0) {
    (*uStack_5c8)(auStack_5e8 + 8);
  }
  if (((ulong)uStack_618 & 1) != 0) {
    func_0x0412a280(puStack_608,(ulong)uStack_618 & 0xfffffffffffffffe);
  }
  if (((ulong)puStack_7f8 & 1) != 0) {
    func_0x0412a280(uStack_7e8,(ulong)puStack_7f8 & 0xfffffffffffffffe);
  }
  uStack_138 = _DAT_0f642188;
  uStack_134 = _DAT_0f64218c;
  if ((_DAT_0f642190 & 1) == 0) {
    uStack_120 = _DAT_0f6421a0;
    uStack_130 = _DAT_0f642190;
    uStack_12c = uRam000000000f642194;
    uStack_128 = _DAT_0f642198;
    uStack_124 = uRam000000000f64219c;
  }
  else {
    func_0x0412e5e0(&uStack_130,_DAT_0f6421a0,CONCAT44(uRam000000000f64219c,_DAT_0f642198));
  }
  func_0x0730fa70(&lStack_248,&uStack_138,0);
  if ((uStack_130 & 1) != 0) {
    func_0x0412a280(uStack_120,CONCAT44(uStack_12c,uStack_130) & 0xfffffffffffffffe);
  }
  auStack_200 = func_0x08e56a40();
  lVar15 = lStack_230;
  lVar23 = lStack_228;
  if (lStack_230 != 0) {
    for (; lVar15 != lVar23; lVar23 = lVar23 + -0x30) {
      if ((*(byte *)(lVar23 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar23 + -0x10),
                        *(ulong *)(lVar23 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_228 = lVar15;
    func_0x0412a280(lStack_230,lStack_220 - lStack_230);
  }
  lVar21 = lStack_238;
  lVar15 = lStack_240;
  lVar23 = lStack_248;
  lStack_248 = 0;
  lStack_240 = 0;
  lStack_238 = 0;
  *plStack_38 = lVar23;
  plStack_38[1] = lVar15;
  plStack_38[2] = lVar21;
  lStack_230 = 0;
  lStack_228 = 0;
  lStack_220 = 0;
  plStack_38[5] = lStack_208;
  plStack_38[3] = uStack_218;
  plStack_38[4] = uStack_210;
  uStack_218 = 0;
  uStack_210 = 0;
  lStack_208 = 0;
  *(undefined4 *)(plStack_38 + 8) = auStack_1f0._0_4_;
  *(undefined4 *)((long)plStack_38 + 0x44) = auStack_1f0._4_4_;
  *(undefined4 *)(plStack_38 + 9) = auStack_1f0._8_4_;
  *(undefined4 *)((long)plStack_38 + 0x4c) = auStack_1f0._12_4_;
  *(undefined1 (*) [16])(plStack_38 + 6) = auStack_200;
  plStack_38[10] = lStack_1e0;
  plStack_38[0xb] = lStack_1d8;
  plStack_38[0xc] = lStack_1d0;
  lStack_1e0 = 0;
  lStack_1d8 = 0;
  lStack_1d0 = 0;
  plStack_38[0xd] = lStack_1c8;
  plStack_38[0xe] = lStack_1c0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  plStack_38[0xf] = lStack_1b8;
  plStack_38[0x10] = (long)puStack_1b0;
  plStack_38[0x11] = (long)puStack_1a8;
  lStack_1b8 = 0;
  puStack_1b0 = (undefined8 *)0x0;
  puStack_1a8 = (undefined8 *)0x0;
  plStack_38[0x12] = lStack_1a0;
  plStack_38[0x13] = uStack_198;
  plStack_38[0x14] = uStack_190;
  lStack_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  plStack_38[0x15] = lStack_188;
  plStack_38[0x16] = lStack_180;
  plStack_38[0x17] = lStack_178;
  lStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  plStack_38[0x18] = lStack_170;
  plStack_38[0x19] = lStack_168;
  plStack_38[0x1a] = lStack_160;
  lStack_170 = 0;
  lStack_168 = 0;
  lStack_160 = 0;
  *(undefined4 *)(plStack_38 + 0x1b) = (undefined4)uStack_158;
  *(undefined4 *)((long)plStack_38 + 0xdc) = uStack_158._4_4_;
  *(undefined4 *)(plStack_38 + 0x1c) = (undefined4)uStack_150;
  *(undefined4 *)((long)plStack_38 + 0xe4) = uStack_150._4_4_;
  plStack_38[0x1d] = lStack_148;
  uStack_158 = 0;
  uStack_150 = 0;
  lStack_148 = 0;
  func_0x0651ffe0(&lStack_230);
  lVar15 = lStack_248;
  lVar23 = lStack_240;
  if (lStack_248 != 0) {
    for (; lVar15 != lVar23; lVar23 = lVar23 + -0x30) {
      if ((*(byte *)(lVar23 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar23 + -0x10),
                        *(ulong *)(lVar23 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_240 = lVar15;
    func_0x0412a280(lStack_248,lStack_238 - lStack_248);
  }
  if ((uStack_630 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_61c,CONCAT13(uStack_61d,CONCAT21(uStack_61f,uStack_620))),
                    CONCAT44(uStack_62c,uStack_630) & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x14b5a85  BlockSignComponent
 */
