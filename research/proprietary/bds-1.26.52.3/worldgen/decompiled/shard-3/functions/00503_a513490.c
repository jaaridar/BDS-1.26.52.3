/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa613490 (ELF vaddr 0xa513490)
 * Label: caller-of-callee
 * Body:  [[0a613490, 0a61424e] [0a614250, 0a6146f4] [0a614700, 0a6153c2] [0a6153d0, 0a615893] [0a6158a0, 0a615d3a] [0a615d40, 0a616ad8] [0a616ae0, 0a616fd3] [0a616fe0, 0a617426] [0a617430, 0a6177fb] [0a617800, 0a617a17] [0a617a20, 0a617e9c]]
 * Ghidra: FUN_0a613490
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0a613490(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  code *pcVar12;
  long *plVar13;
  ulong *puVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  undefined8 in_R8;
  undefined8 in_R9;
  ulong uVar21;
  uint uVar22;
  ulong *puVar23;
  long lVar24;
  long lVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined *puVar29;
  byte bStack_6a8;
  undefined7 uStack_6a7;
  undefined8 uStack_6a0;
  ulong *puStack_698;
  uint uStack_690;
  undefined4 uStack_68c;
  undefined8 uStack_688;
  undefined8 uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong *puStack_658;
  ulong *puStack_650;
  ulong *puStack_648;
  long *plStack_640;
  long *plStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  ulong uStack_620;
  uint uStack_60c;
  undefined8 uStack_608;
  undefined8 uStack_600;
  long lStack_5f8;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined *puStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  code *pcStack_5c0;
  undefined1 auStack_5b8 [16];
  undefined *puStack_5a8;
  long *plStack_5a0;
  undefined8 uStack_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  code *pcStack_580;
  long *plStack_578;
  long alStack_570 [3];
  code *apcStack_558 [3];
  code *pcStack_540;
  undefined1 auStack_530 [24];
  code *pcStack_518;
  undefined1 auStack_510 [24];
  code *pcStack_4f8;
  undefined1 auStack_4e8 [24];
  code *pcStack_4d0;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_428;
  undefined1 auStack_420 [8];
  ulong uStack_418;
  undefined8 *puStack_410;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined1 uStack_3fc;
  undefined1 uStack_3fb;
  undefined2 uStack_3fa;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  code *pcStack_3d8;
  undefined *puStack_3d0;
  long *plStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  code *pcStack_3a0;
  code *pcStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  ulong uStack_380;
  undefined1 auStack_370 [24];
  code *pcStack_358;
  undefined1 auStack_330 [24];
  code *pcStack_318;
  undefined1 auStack_2e8 [24];
  code *pcStack_2d0;
  byte bStack_2a0;
  undefined7 uStack_29f;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined7 uStack_28f;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  ulong uStack_258;
  ulong uStack_250;
  undefined8 *puStack_248;
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  ulong *puStack_1f0;
  ulong *puStack_1e8;
  long lStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined4 uStack_178;
  undefined2 uStack_174;
  uint uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined2 uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
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
  long lStack_38;
  
  puStack_410 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_410 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar4 = _UNK_013b8154;
  auStack_420 = (undefined1  [8])0x21;
  uStack_418 = 0x18;
  *puStack_410 = _DAT_013b814c;
  puStack_410[1] = uVar4;
  puStack_410[2] = 0x746e656e6f706d6f;
  *(undefined1 *)(puStack_410 + 3) = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  lStack_268 = 0;
  lStack_260 = 0;
  lStack_278 = 0;
  lStack_270 = 0;
  lStack_288 = 0;
  lStack_280 = 0;
  puStack_248 = (undefined8 *)0x0;
  func_0x048b1dc0(auStack_240);
  func_0x048b1dc0(auStack_230);
  uStack_190 = 0;
  lStack_188 = 0;
  lStack_1a0 = 0;
  uStack_198 = 0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  uStack_1d0 = 0;
  lStack_1c8 = 0;
  lStack_1e0 = 0;
  uStack_1d8 = 0;
  puStack_1f0 = (ulong *)0x0;
  puStack_1e8 = (ulong *)0x0;
  lStack_200 = 0;
  lStack_1f8 = 0;
  lStack_210 = 0;
  lStack_208 = 0;
  lStack_220 = 0;
  lStack_218 = 0;
  if ((uStack_258 & 1) == 0) {
    if (((ulong)auStack_420 & 1) == 0) {
      puStack_248 = puStack_410;
      uStack_258 = (ulong)auStack_420;
      uStack_250 = uStack_418;
    }
    else {
      FUN_04885070(&uStack_258,puStack_410,uStack_418);
    }
  }
  else {
    uVar18 = (ulong)auStack_420 >> 1 & 0x7f;
    puVar16 = (undefined8 *)(auStack_420 + 1);
    if (((ulong)auStack_420 & 1) != 0) {
      uVar18 = uStack_418;
      puVar16 = puStack_410;
    }
    func_0x04885120(&uStack_258,puVar16,uVar18);
  }
  lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar24 == 0) {
    func_0x048b0de0(&uStack_5e8,&uStack_3e8);
    _DAT_0f54fd90 = (undefined4)uStack_5e8;
    uRam000000000f54fd94 = uStack_5e8._4_4_;
    uVar9 = (undefined4)uStack_5e0;
    uVar28 = uStack_5e0._4_4_;
    uStack_5e8 = (undefined *)0x0;
    uStack_5e0 = (long *)0x0;
    plVar13 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar9;
    uRam000000000f54fd9c = uVar28;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar17 = plVar13 + 1;
      lVar24 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = uStack_5e0;
    if (uStack_5e0 != (long *)0x0) {
      LOCK();
      plVar17 = uStack_5e0 + 1;
      lVar24 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*uStack_5e0 + 0x10))(uStack_5e0);
        func_0x0412c2d0(plVar13);
      }
    }
    lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f673448 == '\0') && (iVar11 = func_0x04108328(&DAT_0f673448), iVar11 != 0)) {
    func_0x0a6698f0();
    func_0x0410844d(&DAT_0f673448);
  }
  if ((DAT_0f673448 == '\0') && (iVar11 = func_0x04108328(&DAT_0f673448), iVar11 != 0)) {
    func_0x0a6698f0();
    func_0x0410844d(&DAT_0f673448);
  }
  uStack_5e8 = &DAT_0f673430;
  uStack_5e0 = (long *)CONCAT44(uStack_5e0._4_4_,_DAT_0f673434);
  puStack_5d8 = (undefined *)0x0;
  uStack_5d0 = (undefined *)CONCAT44(uStack_5d0._4_4_,0x80);
  uStack_5c8 = (long *)0xc0;
  pcStack_5c0 = (code *)&UNK_0a669a90;
  auStack_5b8._0_8_ = 0;
  auStack_5b8._8_8_ = 0;
  puStack_5a8 = &UNK_0a669c50;
  plStack_5a0 = (long *)0x0;
  uStack_598._0_4_ = 0;
  uStack_598._4_4_ = 0;
  uStack_590 = 0;
  uStack_58c = 0;
  uStack_588 = 0;
  pcStack_580 = (code *)0x0;
  plStack_578 = (long *)0x0;
  alStack_570[0] = 0;
  func_0x048aee30(&uStack_3e8,lVar24,&uStack_5e8,&UNK_0b997269);
  lVar24 = alStack_570[0];
  alStack_570[0] = 0;
  if (lVar24 != 0) {
    func_0x048ae940(lVar24);
    func_0x0412a280(lVar24,0x78);
  }
  plVar13 = plStack_578;
  if (plStack_578 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_578 + 1;
    lVar24 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plStack_578 + 0x10))(plStack_578);
      func_0x0412c2d0(plVar13);
    }
  }
  if ((DAT_0f642200 == '\0') && (iVar11 = func_0x04108328(&DAT_0f642200), iVar11 != 0)) {
    func_0x099efc30(0xf6421e8);
    func_0x0410844d(&DAT_0f642200);
  }
  uStack_5e8._0_4_ = _DAT_0f6421ec;
  uStack_5e0 = (long *)&SUB_099efa50;
  plVar13 = uStack_5e0;
  puStack_5d8 = &UNK_0a699750;
  puVar29 = &UNK_0a699750;
  uStack_5e0._0_4_ = 0x99efa50;
  uVar9 = _DAT_0f6421ec;
  uVar28 = (undefined4)uStack_5e0;
  uStack_5e0 = plVar13;
  func_0x05da1460(&uStack_3e8);
  lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar24 == 0) {
    func_0x048b0de0(&uStack_5e8,&uStack_3e8);
    uRam000000000f54fd94 = uStack_5e8._4_4_;
    _DAT_0f54fd90 = (undefined4)uStack_5e8;
    uVar5 = (undefined4)uStack_5e0;
    uVar6 = uStack_5e0._4_4_;
    uStack_5e8._0_4_ = 0;
    uStack_5e8._4_4_ = 0;
    uStack_5e0 = (long *)0x0;
    plVar13 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar5;
    uRam000000000f54fd9c = uVar6;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar17 = plVar13 + 1;
      lVar24 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = uStack_5e0;
    if (uStack_5e0 != (long *)0x0) {
      LOCK();
      plVar17 = uStack_5e0 + 1;
      lVar24 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*uStack_5e0 + 0x10))(uStack_5e0);
        func_0x0412c2d0(plVar13);
      }
    }
    lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f673670 == '\0') && (iVar11 = func_0x04108328(&DAT_0f673670), iVar11 != 0)) {
    func_0x0a66b140();
    func_0x0410844d(&DAT_0f673670);
  }
  if ((DAT_0f673670 == '\0') && (iVar11 = func_0x04108328(&DAT_0f673670), iVar11 != 0)) {
    func_0x0a66b140();
    func_0x0410844d(&DAT_0f673670);
  }
  uStack_5e8 = &DAT_0f673658;
  uStack_5e0 = (long *)CONCAT44(uStack_5e0._4_4_,_DAT_0f67365c);
  puStack_5d8 = (undefined *)0x0;
  uStack_5d0 = (undefined *)CONCAT44(uStack_5d0._4_4_,0x280);
  uStack_5c8 = (long *)0x20;
  pcStack_5c0 = (code *)&UNK_0a66b1c0;
  auStack_5b8._0_8_ = 0;
  auStack_5b8._8_8_ = 0;
  puStack_5a8 = &UNK_0a66b3a0;
  plStack_5a0 = (long *)0x1;
  uStack_598._0_4_ = 0x65b1ed0;
  uStack_598._4_4_ = 0;
  uStack_590 = 0xa66b430;
  uStack_58c = 0;
  uStack_588 = 0;
  pcStack_580 = (code *)0x0;
  plStack_578 = (long *)0x0;
  alStack_570[0] = 0;
  func_0x048aee30(&uStack_3e8,lVar24,&uStack_5e8,0xef2290be,in_R8,in_R9,uVar9,uVar28,puVar29);
  lVar24 = alStack_570[0];
  alStack_570[0] = 0;
  if (lVar24 != 0) {
    func_0x048ae940(lVar24);
    func_0x0412a280(lVar24,0x78);
  }
  plVar13 = plStack_578;
  if (plStack_578 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_578 + 1;
    lVar24 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plStack_578 + 0x10))(plStack_578);
      func_0x0412c2d0(plVar13);
    }
  }
  if ((DAT_0f6784f0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6784f0), iVar11 != 0)) {
    func_0x0a63af90(0xf6784d8);
    func_0x0410844d(&DAT_0f6784f0);
  }
  func_0x065ac270(&uStack_3e8,_DAT_0f6784dc,&UNK_0a699760);
  lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar24 == 0) {
    func_0x048b0de0(&uStack_5e8,&uStack_3e8);
    _DAT_0f54fd90 = (undefined4)uStack_5e8;
    uRam000000000f54fd94 = uStack_5e8._4_4_;
    uVar9 = (undefined4)uStack_5e0;
    uVar28 = uStack_5e0._4_4_;
    uStack_5e8 = (undefined *)0x0;
    uStack_5e0 = (long *)0x0;
    plVar13 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar9;
    uRam000000000f54fd9c = uVar28;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar17 = plVar13 + 1;
      lVar24 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = uStack_5e0;
    if (uStack_5e0 != (long *)0x0) {
      LOCK();
      plVar17 = uStack_5e0 + 1;
      lVar24 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*uStack_5e0 + 0x10))(uStack_5e0);
        func_0x0412c2d0(plVar13);
      }
    }
    lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f6735b8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6735b8), iVar11 != 0)) {
    func_0x0a66a6e0();
    func_0x0410844d(&DAT_0f6735b8);
  }
  if ((DAT_0f6735b8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6735b8), iVar11 != 0)) {
    func_0x0a66a6e0();
    func_0x0410844d(&DAT_0f6735b8);
  }
  uStack_5e8 = &DAT_0f6735a0;
  uStack_5e0 = (long *)CONCAT44(uStack_5e0._4_4_,_DAT_0f6735a4);
  puStack_5d8 = (undefined *)0x0;
  uStack_5d0 = (undefined *)CONCAT44(uStack_5d0._4_4_,0x280);
  uStack_5c8 = (long *)0x20;
  pcStack_5c0 = (code *)&UNK_0a66a760;
  auStack_5b8._0_8_ = &UNK_0a66a950;
  auStack_5b8._8_8_ = 0;
  puStack_5a8 = &UNK_0a66a9f0;
  plStack_5a0 = (long *)0x1;
  uStack_598._0_4_ = 0x65bd0c0;
  uStack_598._4_4_ = 0;
  uStack_590 = 0xa66aa80;
  uStack_58c = 0;
  uStack_588 = 0;
  pcStack_580 = (code *)0x0;
  plStack_578 = (long *)0x0;
  alStack_570[0] = 0;
  func_0x048aee30(&uStack_3e8,lVar24,&uStack_5e8,0x364b61a9);
  lVar24 = alStack_570[0];
  alStack_570[0] = 0;
  if (lVar24 != 0) {
    func_0x048ae940(lVar24);
    func_0x0412a280(lVar24,0x78);
  }
  plVar13 = plStack_578;
  if (plStack_578 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_578 + 1;
    lVar24 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plStack_578 + 0x10))(plStack_578);
      func_0x0412c2d0(plVar13);
    }
  }
  if ((DAT_0f671a00 == '\0') && (iVar11 = func_0x04108328(&DAT_0f671a00), iVar11 != 0)) {
    func_0x0a63c180();
    func_0x0410844d(&DAT_0f671a00);
  }
  func_0x065ac270(&uStack_3e8,_DAT_0f6719ec,&UNK_0a699850);
  lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar24 == 0) {
    func_0x048b0de0(&uStack_5e8,&uStack_3e8);
    _DAT_0f54fd90 = (undefined4)uStack_5e8;
    uRam000000000f54fd94 = uStack_5e8._4_4_;
    uVar9 = (undefined4)uStack_5e0;
    uVar28 = uStack_5e0._4_4_;
    uStack_5e8 = (undefined *)0x0;
    uStack_5e0 = (long *)0x0;
    plVar13 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar9;
    uRam000000000f54fd9c = uVar28;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar17 = plVar13 + 1;
      lVar24 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = uStack_5e0;
    if (uStack_5e0 != (long *)0x0) {
      LOCK();
      plVar17 = uStack_5e0 + 1;
      lVar24 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*uStack_5e0 + 0x10))(uStack_5e0);
        func_0x0412c2d0(plVar13);
      }
    }
    lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f673500 == '\0') && (iVar11 = func_0x04108328(&DAT_0f673500), iVar11 != 0)) {
    func_0x0a669f20();
    func_0x0410844d(&DAT_0f673500);
  }
  if ((DAT_0f673500 == '\0') && (iVar11 = func_0x04108328(&DAT_0f673500), iVar11 != 0)) {
    func_0x0a669f20();
    func_0x0410844d(&DAT_0f673500);
  }
  uStack_5e8 = &DAT_0f6734e8;
  uStack_5e0 = (long *)CONCAT44(uStack_5e0._4_4_,_DAT_0f6734ec);
  puStack_5d8 = (undefined *)0x0;
  uStack_5d0 = (undefined *)CONCAT44(uStack_5d0._4_4_,0x280);
  uStack_5c8 = (long *)0x10;
  pcStack_5c0 = (code *)&UNK_0a669fa0;
  auStack_5b8._0_8_ = &UNK_0a66a190;
  auStack_5b8._8_8_ = 0;
  puStack_5a8 = &UNK_0a66a1e0;
  plStack_5a0 = (long *)0x1;
  uStack_598._0_4_ = 0x65bc1f0;
  uStack_598._4_4_ = 0;
  uStack_590 = 0xa66a290;
  uStack_58c = 0;
  uStack_588 = 0;
  pcStack_580 = (code *)0x0;
  plStack_578 = (long *)0x0;
  alStack_570[0] = 0;
  func_0x048aee30(&uStack_3e8,lVar24,&uStack_5e8,0x1639da69);
  lVar24 = alStack_570[0];
  alStack_570[0] = 0;
  if (lVar24 != 0) {
    func_0x048ae940(lVar24);
    func_0x0412a280(lVar24,0x78);
  }
  plVar13 = plStack_578;
  if (plStack_578 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_578 + 1;
    lVar24 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plStack_578 + 0x10))(plStack_578);
      func_0x0412c2d0(plVar13);
    }
  }
  if ((DAT_0f671b70 == '\0') && (iVar11 = func_0x04108328(&DAT_0f671b70), iVar11 != 0)) {
    func_0x0a63cf80();
    func_0x0410844d(&DAT_0f671b70);
  }
  func_0x065ac270(&uStack_3e8,_DAT_0f671b5c,&UNK_0a699920);
  auStack_230 = func_0x099ef990();
  uStack_58 = _DAT_0f6423c0;
  uStack_54 = _DAT_0f6423c4;
  if ((_DAT_0f6423c8 & 1) == 0) {
    uStack_40 = _DAT_0f6423d8;
    uStack_50 = _DAT_0f6423c8;
    uStack_4c = uRam000000000f6423cc;
    uStack_48 = _DAT_0f6423d0;
    uStack_44 = uRam000000000f6423d4;
  }
  else {
    func_0x0412e5e0(&uStack_50,_DAT_0f6423d8,CONCAT44(uRam000000000f6423d4,_DAT_0f6423d0));
  }
  func_0x0730fa70(&lStack_288,&uStack_58,0);
  if ((uStack_50 & 1) != 0) {
    func_0x0412a280(uStack_40,CONCAT44(uStack_4c,uStack_50) & 0xfffffffffffffffe);
  }
  bStack_6a8 = 0x16;
  uStack_6a7 = 0x746e6168636e65;
  uStack_6a0._0_4_ = 0x746e656d;
  uStack_6a0._4_4_ = uStack_6a0._4_4_ & 0xffffff00;
  func_0x0a6187f0(&uStack_5e8,&bStack_6a8);
  pcStack_3d8 = (code *)0x0;
  uStack_388 = 0;
  uStack_380 = 0;
  pcStack_398 = (code *)0x0;
  uStack_390 = 0;
  uStack_3a8 = 0;
  pcStack_3a0 = (code *)0x0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3e8 = 0;
  uStack_3e0 = (long *)0x0;
  puStack_3d0 = (undefined *)0x456464416e616322;
  plStack_3c8 = (long *)0x656d746e6168636e;
  uStack_3c0 = 0x746e;
  func_0x0a69a050(&uStack_688,&uStack_5e8);
  pcVar12 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar12 == (code *)0x0) {
    FUN_0eec74c0(0x60,0);
  }
  *(undefined8 *)((long)pcVar12 + 8) = 0;
  *(undefined8 *)((long)pcVar12 + 0x10) = 0;
  *(undefined **)pcVar12 = &UNK_0f2354e8;
  uVar9 = func_0x0d858500(&uStack_688);
  puVar16 = (undefined8 *)((long)pcVar12 + 0x18);
  *(undefined1 *)((long)pcVar12 + 0x20) = 1;
  *(undefined4 *)((long)pcVar12 + 0x24) = uVar9;
  *(undefined4 *)((long)pcVar12 + 0x28) = 0;
  *(undefined8 *)((long)pcVar12 + 0x30) = 0;
  *(undefined8 *)((long)pcVar12 + 0x38) = 0;
  *(undefined8 *)((long)pcVar12 + 0x40) = 0;
  *(undefined **)((long)pcVar12 + 0x18) = &UNK_0f235538;
  *(undefined4 *)((long)pcVar12 + 0x48) = (undefined4)uStack_688;
  *(undefined4 *)((long)pcVar12 + 0x4c) = uStack_688._4_4_;
  *(undefined4 *)((long)pcVar12 + 0x50) = (undefined4)uStack_680;
  *(undefined4 *)((long)pcVar12 + 0x54) = uStack_680._4_4_;
  *(ulong *)((long)pcVar12 + 0x58) = uStack_678;
  uStack_688 = 0;
  uStack_680 = 0;
  uStack_678 = 0;
  uVar9 = func_0x0d858620(puVar16);
  pcVar1 = pcStack_398;
  *(undefined4 *)((long)pcVar12 + 0x28) = uVar9;
  pcStack_3a0 = (code *)puVar16;
  if (pcStack_398 != (code *)0x0) {
    LOCK();
    plVar13 = (long *)((long)pcStack_398 + 8);
    lVar24 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      lVar24 = *(long *)pcStack_398;
      pcStack_398 = pcVar12;
      (**(code **)(lVar24 + 0x10))(pcVar1);
      func_0x0412c2d0(pcVar1);
      pcVar12 = pcStack_398;
    }
  }
  pcStack_398 = pcVar12;
  cVar8 = func_0x0a69a1d0(&uStack_3e8,&uStack_5e8);
  if (cVar8 == '\0') {
    puVar14 = (ulong *)0xf671108;
    lVar24 = uStack_688;
  }
  else {
    if (puStack_1f0 < puStack_1e8) {
      *puStack_1f0 = 0;
      puStack_1f0[1] = 0;
      puStack_1f0[2] = 0;
      *puStack_1f0 = uStack_3e8;
      puStack_1f0[1] = (ulong)uStack_3e0;
      puStack_1f0[2] = (ulong)pcStack_3d8;
      uStack_3e8 = 0;
      uStack_3e0 = (long *)0x0;
      pcStack_3d8 = (code *)0x0;
      puStack_1f0[5] = uStack_3c0;
      puStack_1f0[3] = (ulong)puStack_3d0;
      puStack_1f0[4] = (ulong)plStack_3c8;
      puStack_3d0 = (undefined *)0x0;
      plStack_3c8 = (long *)0x0;
      uStack_3c0 = 0;
      puStack_1f0[6] = 0;
      puStack_1f0[7] = 0;
      puStack_1f0[8] = 0;
      puStack_1f0[6] = uStack_3b8;
      puStack_1f0[7] = uStack_3b0;
      puStack_1f0[8] = uStack_3a8;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      uStack_3a8 = 0;
      puStack_1f0[9] = (ulong)pcStack_3a0;
      puStack_1f0[10] = (ulong)pcStack_398;
      pcStack_3a0 = (code *)0x0;
      pcStack_398 = (code *)0x0;
      puStack_1f0[0xb] = 0;
      puStack_1f0[0xc] = 0;
      puStack_1f0[0xd] = 0;
      *(undefined4 *)(puStack_1f0 + 0xb) = (undefined4)uStack_390;
      *(undefined4 *)((long)puStack_1f0 + 0x5c) = uStack_390._4_4_;
      *(undefined4 *)(puStack_1f0 + 0xc) = (undefined4)uStack_388;
      *(undefined4 *)((long)puStack_1f0 + 100) = uStack_388._4_4_;
      puStack_1f0[0xd] = uStack_380;
      uStack_390 = 0;
      uStack_388 = 0;
      uStack_380 = 0;
      puStack_1f0 = puStack_1f0 + 0xe;
    }
    else {
      puStack_1f0 = (ulong *)func_0x0652ac80(&lStack_1f8,&uStack_3e8);
    }
    puVar14 = puStack_1f0 + -0xe;
    lVar24 = uStack_688;
  }
  uStack_688 = lVar24;
  if (lVar24 != 0) {
    if (lVar24 != uStack_680) {
      lVar15 = uStack_680 + -0x40;
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
        lVar25 = lVar15 + -0xd8;
        lVar15 = lVar15 + -0x118;
      } while (lVar25 != lVar24);
    }
    uStack_680 = lVar24;
    func_0x0412a280(uStack_688,uStack_678 - uStack_688);
  }
  func_0x05f93280(&uStack_3e8);
  uStack_78 = _DAT_0f6423c0;
  uStack_74 = _DAT_0f6423c4;
  if ((_DAT_0f6423c8 & 1) == 0) {
    uStack_60 = _DAT_0f6423d8;
    uStack_70 = _DAT_0f6423c8;
    uStack_6c = uRam000000000f6423cc;
    uStack_68 = _DAT_0f6423d0;
    uStack_64 = uRam000000000f6423d4;
  }
  else {
    func_0x0412e5e0(&uStack_70,_DAT_0f6423d8,CONCAT44(uRam000000000f6423d4,_DAT_0f6423d0));
  }
  func_0x0730fa70(puVar14,&uStack_78,0);
  if ((uStack_70 & 1) != 0) {
    func_0x0412a280(uStack_60,CONCAT44(uStack_6c,uStack_70) & 0xfffffffffffffffe);
  }
  if (pcStack_4d0 != (code *)0x0) {
    (*pcStack_4d0)(auStack_4e8);
  }
  if (pcStack_518 != (code *)0x0) {
    (*pcStack_518)(auStack_530);
  }
  if (apcStack_558[0] != (code *)0x0) {
    (*apcStack_558[0])(alStack_570);
  }
  if ((code *)CONCAT44(uStack_598._4_4_,(undefined4)uStack_598) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_598._4_4_,(undefined4)uStack_598))(auStack_5b8 + 8);
  }
  if (((ulong)uStack_5e8 & 1) != 0) {
    func_0x0412a280(puStack_5d8,(ulong)uStack_5e8 & 0xfffffffffffffffe);
  }
  if ((bStack_6a8 & 1) != 0) {
    func_0x0412a280(puStack_698,CONCAT71(uStack_6a7,bStack_6a8) & 0xfffffffffffffffe);
  }
  bStack_6a8 = 0x16;
  uStack_6a7 = 0x746e6168636e65;
  uStack_6a0._0_4_ = 0x746e656d;
  uStack_6a0._4_4_ = uStack_6a0._4_4_ & 0xffffff00;
  func_0x0a6187f0(&uStack_5e8,&bStack_6a8);
  pcStack_3d8 = (code *)0x0;
  uStack_3c0 = 0;
  uStack_388 = 0;
  uStack_380 = 0;
  pcStack_398 = (code *)0x0;
  uStack_390 = 0;
  uStack_3a8 = 0;
  pcStack_3a0 = (code *)0x0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3e8 = 0;
  uStack_3e0 = (long *)0x0;
  puStack_3d0 = (undefined *)0x68636e456464611c;
  plStack_3c8 = (long *)0x746e656d746e61;
  func_0x0a69a050(&uStack_688,&uStack_5e8);
  pcVar12 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar12 == (code *)0x0) {
    FUN_0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar12 + 8) = 0;
  *(undefined8 *)(pcVar12 + 0x10) = 0;
  *(undefined **)pcVar12 = &UNK_0f2355d0;
  uVar9 = func_0x0d858500(&uStack_688);
  pcVar1 = pcVar12 + 0x18;
  pcVar12[0x20] = (code)0x0;
  *(undefined4 *)(pcVar12 + 0x24) = uVar9;
  *(undefined4 *)(pcVar12 + 0x28) = 0;
  *(undefined8 *)(pcVar12 + 0x30) = 0;
  *(undefined8 *)(pcVar12 + 0x38) = 0;
  *(undefined8 *)(pcVar12 + 0x40) = 0;
  *(undefined **)(pcVar12 + 0x18) = &UNK_0f235620;
  *(undefined4 *)(pcVar12 + 0x48) = (undefined4)uStack_688;
  *(undefined4 *)(pcVar12 + 0x4c) = uStack_688._4_4_;
  *(undefined4 *)(pcVar12 + 0x50) = (undefined4)uStack_680;
  *(undefined4 *)(pcVar12 + 0x54) = uStack_680._4_4_;
  *(ulong *)(pcVar12 + 0x58) = uStack_678;
  uStack_688 = 0;
  uStack_680 = 0;
  uStack_678 = 0;
  uVar9 = func_0x0d858620(pcVar1);
  pcVar7 = pcStack_398;
  *(undefined4 *)(pcVar12 + 0x28) = uVar9;
  pcStack_3a0 = pcVar1;
  if (pcStack_398 != (code *)0x0) {
    LOCK();
    plVar13 = (long *)((long)pcStack_398 + 8);
    lVar24 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      lVar24 = *(long *)pcStack_398;
      pcStack_398 = pcVar12;
      (**(code **)(lVar24 + 0x10))(pcVar7);
      func_0x0412c2d0(pcVar7);
      pcVar12 = pcStack_398;
    }
  }
  pcStack_398 = pcVar12;
  cVar8 = func_0x0a69a1d0(&uStack_3e8,&uStack_5e8);
  if (cVar8 == '\0') {
    puVar14 = (ulong *)0xf671108;
    lVar24 = uStack_688;
  }
  else {
    if (puStack_1f0 < puStack_1e8) {
      *puStack_1f0 = 0;
      puStack_1f0[1] = 0;
      puStack_1f0[2] = 0;
      *puStack_1f0 = uStack_3e8;
      puStack_1f0[1] = (ulong)uStack_3e0;
      puStack_1f0[2] = (ulong)pcStack_3d8;
      uStack_3e8 = 0;
      uStack_3e0 = (long *)0x0;
      pcStack_3d8 = (code *)0x0;
      puStack_1f0[5] = uStack_3c0;
      puStack_1f0[3] = (ulong)puStack_3d0;
      puStack_1f0[4] = (ulong)plStack_3c8;
      puStack_3d0 = (undefined *)0x0;
      plStack_3c8 = (long *)0x0;
      uStack_3c0 = 0;
      puStack_1f0[6] = 0;
      puStack_1f0[7] = 0;
      puStack_1f0[8] = 0;
      puStack_1f0[6] = uStack_3b8;
      puStack_1f0[7] = uStack_3b0;
      puStack_1f0[8] = uStack_3a8;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      uStack_3a8 = 0;
      puStack_1f0[9] = (ulong)pcStack_3a0;
      puStack_1f0[10] = (ulong)pcStack_398;
      pcStack_3a0 = (code *)0x0;
      pcStack_398 = (code *)0x0;
      puStack_1f0[0xb] = 0;
      puStack_1f0[0xc] = 0;
      puStack_1f0[0xd] = 0;
      *(undefined4 *)(puStack_1f0 + 0xb) = (undefined4)uStack_390;
      *(undefined4 *)((long)puStack_1f0 + 0x5c) = uStack_390._4_4_;
      *(undefined4 *)(puStack_1f0 + 0xc) = (undefined4)uStack_388;
      *(undefined4 *)((long)puStack_1f0 + 100) = uStack_388._4_4_;
      puStack_1f0[0xd] = uStack_380;
      uStack_390 = 0;
      uStack_388 = 0;
      uStack_380 = 0;
      puStack_1f0 = puStack_1f0 + 0xe;
    }
    else {
      puStack_1f0 = (ulong *)func_0x0652ac80(&lStack_1f8,&uStack_3e8);
    }
    puVar14 = puStack_1f0 + -0xe;
    lVar24 = uStack_688;
  }
  uStack_688 = lVar24;
  if (lVar24 != 0) {
    if (lVar24 != uStack_680) {
      lVar15 = uStack_680 + -0x40;
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
        lVar25 = lVar15 + -0xd8;
        lVar15 = lVar15 + -0x118;
      } while (lVar25 != lVar24);
    }
    uStack_680 = lVar24;
    func_0x0412a280(uStack_688,uStack_678 - uStack_688);
  }
  func_0x05f93280(&uStack_3e8);
  uStack_98 = _DAT_0f6423c0;
  uStack_94 = _DAT_0f6423c4;
  if ((_DAT_0f6423c8 & 1) == 0) {
    uStack_80 = _DAT_0f6423d8;
    uStack_90 = _DAT_0f6423c8;
    uStack_8c = uRam000000000f6423cc;
    uStack_88 = _DAT_0f6423d0;
    uStack_84 = uRam000000000f6423d4;
  }
  else {
    func_0x0412e5e0(&uStack_90,_DAT_0f6423d8,CONCAT44(uRam000000000f6423d4,_DAT_0f6423d0));
  }
  func_0x0730fa70(puVar14,&uStack_98,0);
  if ((uStack_90 & 1) != 0) {
    func_0x0412a280(uStack_80,CONCAT44(uStack_8c,uStack_90) & 0xfffffffffffffffe);
  }
  if (pcStack_4d0 != (code *)0x0) {
    (*pcStack_4d0)(auStack_4e8);
  }
  if (pcStack_518 != (code *)0x0) {
    (*pcStack_518)(auStack_530);
  }
  if (apcStack_558[0] != (code *)0x0) {
    (*apcStack_558[0])(alStack_570);
  }
  if ((code *)CONCAT44(uStack_598._4_4_,(undefined4)uStack_598) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_598._4_4_,(undefined4)uStack_598))(auStack_5b8 + 8);
  }
  if (((ulong)uStack_5e8 & 1) != 0) {
    func_0x0412a280(puStack_5d8,(ulong)uStack_5e8 & 0xfffffffffffffffe);
  }
  if ((bStack_6a8 & 1) != 0) {
    func_0x0412a280(puStack_698,CONCAT71(uStack_6a7,bStack_6a8) & 0xfffffffffffffffe);
  }
  uStack_408 = 0x636e6518;
  uStack_404 = 0x746e6168;
  uStack_400 = 0x746e656d;
  uStack_3fc = 0x73;
  uStack_3fb = 0;
  uStack_3e8 = 0;
  uStack_3e0 = (long *)0x0;
  pcStack_3d8 = (code *)0x0;
  func_0x048b1dc0(&puStack_3d0);
  func_0x0652b590(&uStack_3c0);
  if ((uStack_3e8 & 1) == 0) {
    if ((uStack_408 & 1) == 0) {
      pcStack_3d8 = (code *)CONCAT44(uStack_3f4,uStack_3f8);
      uStack_3e8 = CONCAT44(uStack_404,uStack_408);
      uStack_3e0 = (long *)CONCAT44(CONCAT22(uStack_3fa,CONCAT11(uStack_3fb,uStack_3fc)),uStack_400)
      ;
    }
    else {
      FUN_04885070(&uStack_3e8,CONCAT44(uStack_3f4,uStack_3f8),
                   CONCAT26(uStack_3fa,CONCAT15(uStack_3fb,CONCAT14(uStack_3fc,uStack_400))));
    }
  }
  else {
    bVar26 = (uStack_408 & 1) != 0;
    lVar24 = (long)&uStack_408 + 1;
    if (bVar26) {
      lVar24 = CONCAT44(uStack_3f4,uStack_3f8);
    }
    uVar18 = (ulong)((byte)uStack_408 >> 1);
    if (bVar26) {
      uVar18 = CONCAT26(uStack_3fa,CONCAT15(uStack_3fb,CONCAT14(uStack_3fc,uStack_400)));
    }
    func_0x04885120(&uStack_3e8,lVar24,uVar18);
  }
  plVar13 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (plVar13 == (long *)0x0) {
    func_0x048b0de0(&uStack_5e8,&uStack_688);
    _DAT_0f54fd90 = (undefined4)uStack_5e8;
    uRam000000000f54fd94 = uStack_5e8._4_4_;
    uVar9 = (undefined4)uStack_5e0;
    uVar28 = uStack_5e0._4_4_;
    uStack_5e8 = (undefined *)0x0;
    uStack_5e0 = (long *)0x0;
    plVar13 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar9;
    uRam000000000f54fd9c = uVar28;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar17 = plVar13 + 1;
      lVar24 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = uStack_5e0;
    if (uStack_5e0 != (long *)0x0) {
      LOCK();
      plVar17 = uStack_5e0 + 1;
      lVar24 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*uStack_5e0 + 0x10))(uStack_5e0);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (DAT_0f674d20 == '\0') {
    iVar11 = func_0x04108328(&DAT_0f674d20);
    if (iVar11 != 0) {
      func_0x0a69dd70();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f674ca0,0xf53dab8);
      func_0x0410844d(&DAT_0f674d20);
    }
  }
  plVar17 = (long *)(*plVar13 +
                    (ulong)((int)((ulong)(plVar13[1] - *plVar13) >> 3) - 1U &
                           *(uint *)(_DAT_0f674ca0 + 4)) * 8);
  do {
    lVar24 = *plVar17;
    if (lVar24 == -1) goto LAB_0a614a80;
    plVar17 = (long *)(plVar13[3] + lVar24 * 0x18);
  } while (*(uint *)(plVar13[3] + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f674ca0 + 4));
  if (plVar17 == (long *)plVar13[4]) {
LAB_0a614a80:
    puStack_3d0 = &DAT_0f674ca0;
  }
  else {
    puStack_3d0 = (undefined *)plVar17[2];
  }
  uStack_678 = 0;
  uStack_660 = 0;
  uStack_628 = 0;
  uStack_620 = 0;
  plStack_638 = (long *)0x0;
  uStack_630 = 0;
  puStack_648 = (ulong *)0x0;
  plStack_640 = (long *)0x0;
  puStack_658 = (ulong *)0x0;
  puStack_650 = (ulong *)0x0;
  uStack_688 = 0;
  uStack_680 = 0;
  uStack_670 = 0x68636e456464611e;
  uStack_668 = 0x73746e656d746e61;
  plStack_3c8 = plVar13;
  func_0x06523ef0(&uStack_5e8,&uStack_3c0);
  uStack_608 = (byte *)0x0;
  uStack_600 = 0;
  lStack_5f8 = 0;
  uStack_430 = uStack_430 & 0xffffffffffffff00;
  uStack_438 = (byte *)&uStack_608;
  lStack_38 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x118);
  if (lStack_38 == 0) {
    FUN_0eec74c0(0x118,0);
  }
  lStack_5f8 = lStack_38 + 0x118;
  bStack_2a0 = (byte)lStack_38;
  uStack_29f = (undefined7)((ulong)lStack_38 >> 8);
  bStack_6a8 = (byte)&uStack_608;
  uStack_6a7 = (undefined7)((ulong)&uStack_608 >> 8);
  uStack_6a0 = (ulong *)&lStack_38;
  puStack_698 = (ulong *)&bStack_2a0;
  uStack_690 = uStack_690 & 0xffffff00;
  uStack_608 = (byte *)lStack_38;
  uStack_600 = lStack_38;
  func_0x06523ef0(lStack_38,&uStack_5e8);
  uStack_600 = CONCAT71(uStack_29f,bStack_2a0) + 0x118;
  if (pcStack_4f8 != (code *)0x0) {
    (*pcStack_4f8)(auStack_510);
  }
  if (pcStack_540 != (code *)0x0) {
    (*pcStack_540)(apcStack_558);
  }
  if (pcStack_580 != (code *)0x0) {
    (*pcStack_580)(&uStack_598);
  }
  if (pcStack_5c0 != (code *)0x0) {
    (*pcStack_5c0)(&puStack_5d8);
  }
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (plVar13 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x60,0);
  }
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f2356d8;
  plStack_180 = param_1;
  uVar9 = func_0x0d858500(&uStack_608);
  plVar17 = plVar13 + 3;
  *(undefined1 *)(plVar13 + 4) = 0;
  *(undefined4 *)((long)plVar13 + 0x24) = uVar9;
  *(undefined4 *)(plVar13 + 5) = 0;
  plVar13[6] = 0;
  plVar13[7] = 0;
  plVar13[8] = 0;
  plVar13[3] = (long)&UNK_0f235728;
  *(undefined4 *)(plVar13 + 9) = (undefined4)uStack_608;
  *(undefined4 *)((long)plVar13 + 0x4c) = uStack_608._4_4_;
  *(undefined4 *)(plVar13 + 10) = (undefined4)uStack_600;
  *(undefined4 *)((long)plVar13 + 0x54) = uStack_600._4_4_;
  plVar13[0xb] = lStack_5f8;
  uStack_608 = (byte *)0x0;
  uStack_600 = 0;
  lStack_5f8 = 0;
  uVar9 = func_0x0d858620(plVar17);
  plVar2 = plStack_638;
  *(undefined4 *)(plVar13 + 5) = uVar9;
  plStack_640 = plVar17;
  if (plStack_638 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_638 + 1;
    lVar24 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      lVar24 = *plStack_638;
      plStack_638 = plVar13;
      (**(code **)(lVar24 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
      plVar13 = plStack_638;
    }
  }
  plStack_638 = plVar13;
  puStack_5d8 = pcStack_3d8;
  uStack_5e8 = (undefined *)uStack_3e8;
  uStack_5e0 = uStack_3e0;
  uStack_3e8 = 0;
  uStack_3e0 = (long *)0x0;
  pcStack_3d8 = (code *)0x0;
  uStack_5d0 = puStack_3d0;
  uStack_5c8 = plStack_3c8;
  func_0x065281f0(&pcStack_5c0,&uStack_3c0);
  bStack_6a8 = 0;
  uStack_6a7 = 0;
  uStack_6a0._0_4_ = 0;
  uStack_6a0._4_4_ = 0;
  puStack_698 = (ulong *)0x0;
  uStack_430 = uStack_430 & 0xffffffffffffff00;
  uStack_438 = &bStack_6a8;
  puVar14 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
  if (puVar14 == (ulong *)0x0) {
    FUN_0eec74c0(0x140,0);
  }
  bStack_6a8 = (byte)puVar14;
  uStack_6a7 = (undefined7)((ulong)puVar14 >> 8);
  uStack_6a0._0_4_ = SUB84(puVar14,0);
  uStack_6a0._4_4_ = (uint)((ulong)puVar14 >> 0x20);
  puVar23 = puVar14 + 0x28;
  puStack_698 = puVar23;
  if (((ulong)uStack_5e8 & 1) == 0) {
    puVar14[2] = (ulong)puStack_5d8;
    *puVar14 = (ulong)uStack_5e8;
    puVar14[1] = (ulong)uStack_5e0;
  }
  else {
    func_0x0412e5e0(puVar14,puStack_5d8,uStack_5e0);
  }
  *(undefined4 *)(puVar14 + 3) = (undefined4)uStack_5d0;
  *(undefined4 *)((long)puVar14 + 0x1c) = uStack_5d0._4_4_;
  *(undefined4 *)(puVar14 + 4) = (undefined4)uStack_5c8;
  *(undefined4 *)((long)puVar14 + 0x24) = uStack_5c8._4_4_;
  func_0x06523ef0(puVar14 + 5,&pcStack_5c0);
  uStack_6a0 = puVar23;
  if (pcStack_4d0 != (code *)0x0) {
    (*pcStack_4d0)(auStack_4e8);
  }
  if (pcStack_518 != (code *)0x0) {
    (*pcStack_518)(auStack_530);
  }
  if (apcStack_558[0] != (code *)0x0) {
    (*apcStack_558[0])(alStack_570);
  }
  if ((code *)CONCAT44(uStack_598._4_4_,(undefined4)uStack_598) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_598._4_4_,(undefined4)uStack_598))(auStack_5b8 + 8);
  }
  if (((ulong)uStack_5e8 & 1) != 0) {
    func_0x0412a280(puStack_5d8,(ulong)uStack_5e8 & 0xfffffffffffffffe);
  }
  uVar10 = (**(code **)(*plStack_640 + 0x20))();
  puVar14 = (ulong *)CONCAT71(uStack_6a7,bStack_6a8);
  uVar21 = ((long)uStack_6a0 - (long)puVar14 >> 6) * -0x3333333333333333;
  uVar18 = 0;
  if ((uVar10 != 0) && ((uint)uVar21 != 0)) {
    uVar22 = 0;
    uVar18 = 0;
    uStack_60c = uVar10;
    do {
      auVar27 = (**(code **)(*plStack_640 + 0x28))(plStack_640,uVar22);
      uVar19 = auVar27._8_8_;
      lVar24 = auVar27._0_8_;
      auVar27 = func_0x06527d70();
      if (auVar27._8_8_ != uVar19) {
LAB_0a614f70:
        auVar27 = func_0x06527e30();
        if (auVar27._8_8_ == uVar19) {
          if (auVar27._0_8_ == 0) {
            lVar15 = func_0x048aead0(auVar27._8_8_);
            iVar11 = *(int *)(lVar15 + 8);
          }
          else {
            iVar11 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar24 == 0) {
            lVar15 = func_0x048aead0(uVar19);
            iVar3 = *(int *)(lVar15 + 8);
          }
          else {
            iVar3 = *(int *)(lVar24 + 8);
          }
          if (iVar11 == iVar3) goto LAB_0a615163;
        }
        auVar27 = func_0x06527ef0();
        if (auVar27._8_8_ == uVar19) {
          if (auVar27._0_8_ == 0) {
            lVar15 = func_0x048aead0(auVar27._8_8_);
            iVar11 = *(int *)(lVar15 + 8);
          }
          else {
            iVar11 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar24 == 0) {
            lVar15 = func_0x048aead0(uVar19);
            iVar3 = *(int *)(lVar15 + 8);
          }
          else {
            iVar3 = *(int *)(lVar24 + 8);
          }
          if (iVar11 == iVar3) goto LAB_0a615163;
        }
        auVar27 = func_0x06527fb0();
        if (auVar27._8_8_ == uVar19) {
          if (auVar27._0_8_ == 0) {
            lVar15 = func_0x048aead0(auVar27._8_8_);
            iVar11 = *(int *)(lVar15 + 8);
          }
          else {
            iVar11 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar24 == 0) {
            lVar15 = func_0x048aead0(uVar19);
            iVar3 = *(int *)(lVar15 + 8);
          }
          else {
            iVar3 = *(int *)(lVar24 + 8);
          }
          if (iVar11 == iVar3) goto LAB_0a615163;
        }
        auVar27 = func_0x06528070();
        if (auVar27._8_8_ == uVar19) {
          if (auVar27._0_8_ == 0) {
            lVar15 = func_0x048aead0(auVar27._8_8_);
            iVar11 = *(int *)(lVar15 + 8);
          }
          else {
            iVar11 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar24 == 0) {
            lVar15 = func_0x048aead0(uVar19);
            iVar3 = *(int *)(lVar15 + 8);
          }
          else {
            iVar3 = *(int *)(lVar24 + 8);
          }
          if (iVar11 == iVar3) goto LAB_0a615163;
        }
        auVar27 = func_0x06528130();
        puVar23 = uStack_6a0;
        if (auVar27._8_8_ == uVar19) {
          if (auVar27._0_8_ == 0) {
            lVar15 = func_0x048aead0(auVar27._8_8_);
            iVar11 = *(int *)(lVar15 + 8);
          }
          else {
            iVar11 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar24 == 0) {
            lVar15 = func_0x048aead0(uVar19);
            iVar3 = *(int *)(lVar15 + 8);
          }
          else {
            iVar3 = *(int *)(lVar24 + 8);
          }
          puVar23 = uStack_6a0;
          if (iVar11 == iVar3) goto LAB_0a615163;
        }
        puVar14 = (ulong *)CONCAT71(uStack_6a7,bStack_6a8);
        if (puVar14[uVar18 * 0x28 + 4] != uVar19) goto LAB_0a615349;
        uStack_6a0 = puVar23;
        if (puVar14[uVar18 * 0x28 + 3] == 0) {
          lVar15 = func_0x048aead0();
          iVar11 = *(int *)(lVar15 + 8);
          if (lVar24 != 0) goto LAB_0a615134;
LAB_0a61514c:
          lVar24 = func_0x048aead0(uVar19);
          if (iVar11 == *(int *)(lVar24 + 8)) {
LAB_0a615161:
            uVar18 = (ulong)((int)uVar18 + 1);
            goto LAB_0a615163;
          }
        }
        else {
          iVar11 = *(int *)(puVar14[uVar18 * 0x28 + 3] + 8);
          if (lVar24 == 0) goto LAB_0a61514c;
LAB_0a615134:
          if (iVar11 == *(int *)(lVar24 + 8)) goto LAB_0a615161;
        }
        puVar14 = (ulong *)CONCAT71(uStack_6a7,bStack_6a8);
        goto LAB_0a615344;
      }
      if (auVar27._0_8_ == 0) {
        lVar15 = func_0x048aead0(auVar27._8_8_);
        iVar11 = *(int *)(lVar15 + 8);
        if (lVar24 != 0) goto LAB_0a614f41;
LAB_0a614f5e:
        lVar15 = func_0x048aead0(uVar19);
        if (iVar11 != *(int *)(lVar15 + 8)) goto LAB_0a614f70;
      }
      else {
        iVar11 = *(int *)(auVar27._0_8_ + 8);
        if (lVar24 == 0) goto LAB_0a614f5e;
LAB_0a614f41:
        if (iVar11 != *(int *)(lVar24 + 8)) goto LAB_0a614f70;
      }
LAB_0a615163:
    } while (((uint)uVar18 < (uint)uVar21) && (uVar22 = uVar22 + 1, uVar22 < uStack_60c));
    puVar14 = (ulong *)CONCAT71(uStack_6a7,bStack_6a8);
    uVar21 = ((long)uStack_6a0 - (long)puVar14 >> 6) * -0x3333333333333333;
  }
  puVar23 = puStack_658;
  if (uVar21 == uVar18) {
    puVar20 = puStack_650;
    if (puStack_658 != (ulong *)0x0) {
      while (puVar23 != puVar20) {
        func_0x05fe8450(puVar20 + -0x28);
        puVar20 = puVar20 + -0x28;
      }
      puStack_650 = puVar23;
      func_0x0412a280(puStack_658,(long)puStack_648 - (long)puStack_658);
      puVar14 = (ulong *)CONCAT71(uStack_6a7,bStack_6a8);
    }
    puStack_648 = puStack_698;
    if (puStack_1f0 < puStack_1e8) {
      *puStack_1f0 = 0;
      puStack_1f0[1] = 0;
      puStack_1f0[2] = 0;
      *puStack_1f0 = uStack_688;
      puStack_1f0[1] = uStack_680;
      puStack_1f0[2] = uStack_678;
      uStack_688 = 0;
      uStack_680 = 0;
      uStack_678 = 0;
      puStack_1f0[5] = uStack_660;
      puStack_1f0[3] = uStack_670;
      puStack_1f0[4] = uStack_668;
      uStack_670 = 0;
      uStack_668 = 0;
      uStack_660 = 0;
      puStack_1f0[6] = 0;
      puStack_1f0[7] = 0;
      puStack_1f0[8] = 0;
      puStack_1f0[6] = (ulong)puVar14;
      puStack_1f0[7] = (ulong)uStack_6a0;
      puStack_1f0[8] = (ulong)puStack_698;
      puStack_658 = (ulong *)0x0;
      puStack_650 = (ulong *)0x0;
      puStack_648 = (ulong *)0x0;
      puStack_1f0[9] = (ulong)plStack_640;
      puStack_1f0[10] = (ulong)plStack_638;
      plStack_640 = (long *)0x0;
      plStack_638 = (undefined8 *)0x0;
      puStack_1f0[0xb] = 0;
      puStack_1f0[0xc] = 0;
      puStack_1f0[0xd] = 0;
      *(undefined4 *)(puStack_1f0 + 0xb) = (undefined4)uStack_630;
      *(undefined4 *)((long)puStack_1f0 + 0x5c) = uStack_630._4_4_;
      *(undefined4 *)(puStack_1f0 + 0xc) = (undefined4)uStack_628;
      *(undefined4 *)((long)puStack_1f0 + 100) = uStack_628._4_4_;
      puStack_1f0[0xd] = uStack_620;
      uStack_630 = 0;
      uStack_628 = 0;
      uStack_620 = 0;
      puStack_1f0 = puStack_1f0 + 0xe;
    }
    else {
      puStack_658 = puVar14;
      puStack_650 = uStack_6a0;
      puStack_1f0 = (ulong *)func_0x0652ac80(&lStack_1f8,&uStack_688);
    }
    puVar14 = puStack_1f0 + -0xe;
    lVar24 = (long)uStack_608;
  }
  else {
LAB_0a615344:
    puVar23 = uStack_6a0;
    if (puVar14 != (ulong *)0x0) {
LAB_0a615349:
      puVar20 = puVar14;
      uStack_6a0 = puVar23;
      if (puVar14 != puVar23) {
        do {
          puVar23 = puVar23 + -0x28;
          func_0x05fe8450(puVar23);
        } while (puVar23 != puVar14);
        puVar20 = (ulong *)CONCAT71(uStack_6a7,bStack_6a8);
      }
      uStack_6a0._0_4_ = SUB84(puVar14,0);
      uStack_6a0._4_4_ = (uint)((ulong)puVar14 >> 0x20);
      func_0x0412a280(puVar20,(long)puStack_698 - (long)puVar20);
    }
    puVar14 = (ulong *)0xf671108;
    lVar24 = (long)uStack_608;
  }
  uStack_608 = (byte *)lVar24;
  if (lVar24 != 0) {
    if (lVar24 != uStack_600) {
      lVar15 = uStack_600 + -0x40;
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
        lVar25 = lVar15 + -0xd8;
        lVar15 = lVar15 + -0x118;
      } while (lVar25 != lVar24);
    }
    uStack_600 = lVar24;
    func_0x0412a280(uStack_608,lStack_5f8 - (long)uStack_608);
  }
  func_0x05f93280(&uStack_688);
  uStack_b8 = _DAT_0f6423c0;
  uStack_b4 = _DAT_0f6423c4;
  if ((_DAT_0f6423c8 & 1) == 0) {
    uStack_a0 = _DAT_0f6423d8;
    uStack_b0 = _DAT_0f6423c8;
    uStack_ac = uRam000000000f6423cc;
    uStack_a8 = _DAT_0f6423d0;
    uStack_a4 = uRam000000000f6423d4;
  }
  else {
    func_0x0412e5e0(&uStack_b0,_DAT_0f6423d8,CONCAT44(uRam000000000f6423d4,_DAT_0f6423d0));
  }
  func_0x0730fa70(puVar14,&uStack_b8,0);
  if ((uStack_b0 & 1) != 0) {
    func_0x0412a280(uStack_a0,CONCAT44(uStack_ac,uStack_b0) & 0xfffffffffffffffe);
  }
  if (pcStack_2d0 != (code *)0x0) {
    (*pcStack_2d0)(auStack_2e8);
  }
  if (pcStack_318 != (code *)0x0) {
    (*pcStack_318)(auStack_330);
  }
  if (pcStack_358 != (code *)0x0) {
    (*pcStack_358)(auStack_370);
  }
  if (pcStack_398 != (code *)0x0) {
    (*pcStack_398)(&uStack_3b0);
  }
  if ((uStack_3e8 & 1) != 0) {
    func_0x0412a280(pcStack_3d8,uStack_3e8 & 0xfffffffffffffffe);
  }
  if ((uStack_408 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_3f4,uStack_3f8),
                    CONCAT44(uStack_404,uStack_408) & 0xfffffffffffffffe);
  }
  bStack_6a8 = 0x1e;
  uStack_6a7 = 0x746e6168636e65;
  uStack_6a0._0_4_ = 0x746e656d;
  uStack_6a0._4_4_ = 0x65707954;
  puStack_698 = (ulong *)((ulong)puStack_698 & 0xffffffffffffff00);
  func_0x0a618a80(&uStack_5e8,&bStack_6a8);
  pcStack_3d8 = (code *)0x0;
  uStack_388 = 0;
  uStack_380 = 0;
  pcStack_398 = (code *)0x0;
  uStack_390 = 0;
  uStack_3a8 = 0;
  pcStack_3a0 = (code *)0x0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3e8 = 0;
  uStack_3e0 = (long *)0x0;
  puStack_3d0 = (undefined *)0x4565766f6d657222;
  plStack_3c8 = (long *)0x656d746e6168636e;
  uStack_3c0 = 0x746e;
  func_0x0a6a2a60(&uStack_688,&uStack_5e8);
  pcVar12 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar12 == (code *)0x0) {
    FUN_0eec74c0(0x60,0);
  }
  *(undefined8 *)((long)pcVar12 + 8) = 0;
  *(undefined8 *)((long)pcVar12 + 0x10) = 0;
  *(undefined **)pcVar12 = &UNK_0f235808;
  uVar9 = func_0x0d858500(&uStack_688);
  puVar16 = (undefined8 *)((long)pcVar12 + 0x18);
  *(undefined1 *)((long)pcVar12 + 0x20) = 0;
  *(undefined4 *)((long)pcVar12 + 0x24) = uVar9;
  *(undefined4 *)((long)pcVar12 + 0x28) = 0;
  *(undefined8 *)((long)pcVar12 + 0x30) = 0;
  *(undefined8 *)((long)pcVar12 + 0x38) = 0;
  *(undefined8 *)((long)pcVar12 + 0x40) = 0;
  *(undefined **)((long)pcVar12 + 0x18) = &UNK_0f235858;
  *(undefined4 *)((long)pcVar12 + 0x48) = (undefined4)uStack_688;
  *(undefined4 *)((long)pcVar12 + 0x4c) = uStack_688._4_4_;
  *(undefined4 *)((long)pcVar12 + 0x50) = (undefined4)uStack_680;
  *(undefined4 *)((long)pcVar12 + 0x54) = uStack_680._4_4_;
  *(ulong *)((long)pcVar12 + 0x58) = uStack_678;
  uStack_688 = 0;
  uStack_680 = 0;
  uStack_678 = 0;
  uVar9 = func_0x0d858620(puVar16);
  pcVar1 = pcStack_398;
  *(undefined4 *)((long)pcVar12 + 0x28) = uVar9;
  pcStack_3a0 = (code *)puVar16;
  if (pcStack_398 != (code *)0x0) {
    LOCK();
    plVar13 = (long *)((long)pcStack_398 + 8);
    lVar24 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      lVar24 = *(long *)pcStack_398;
      pcStack_398 = pcVar12;
      (**(code **)(lVar24 + 0x10))(pcVar1);
      func_0x0412c2d0(pcVar1);
      pcVar12 = pcStack_398;
    }
  }
  pcStack_398 = pcVar12;
  cVar8 = func_0x0a6a2be0(&uStack_3e8,&uStack_5e8);
  if (cVar8 == '\0') {
    puVar14 = (ulong *)0xf671108;
    lVar24 = uStack_688;
  }
  else {
    if (puStack_1f0 < puStack_1e8) {
      *puStack_1f0 = 0;
      puStack_1f0[1] = 0;
      puStack_1f0[2] = 0;
      *puStack_1f0 = uStack_3e8;
      puStack_1f0[1] = (ulong)uStack_3e0;
      puStack_1f0[2] = (ulong)pcStack_3d8;
      uStack_3e8 = 0;
      uStack_3e0 = (long *)0x0;
      pcStack_3d8 = (code *)0x0;
      puStack_1f0[5] = uStack_3c0;
      puStack_1f0[3] = (ulong)puStack_3d0;
      puStack_1f0[4] = (ulong)plStack_3c8;
      puStack_3d0 = (undefined *)0x0;
      plStack_3c8 = (long *)0x0;
      uStack_3c0 = 0;
      puStack_1f0[6] = 0;
      puStack_1f0[7] = 0;
      puStack_1f0[8] = 0;
      puStack_1f0[6] = uStack_3b8;
      puStack_1f0[7] = uStack_3b0;
      puStack_1f0[8] = uStack_3a8;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      uStack_3a8 = 0;
      puStack_1f0[9] = (ulong)pcStack_3a0;
      puStack_1f0[10] = (ulong)pcStack_398;
      pcStack_3a0 = (code *)0x0;
      pcStack_398 = (code *)0x0;
      puStack_1f0[0xb] = 0;
      puStack_1f0[0xc] = 0;
      puStack_1f0[0xd] = 0;
      *(undefined4 *)(puStack_1f0 + 0xb) = (undefined4)uStack_390;
      *(undefined4 *)((long)puStack_1f0 + 0x5c) = uStack_390._4_4_;
      *(undefined4 *)(puStack_1f0 + 0xc) = (undefined4)uStack_388;
      *(undefined4 *)((long)puStack_1f0 + 100) = uStack_388._4_4_;
      puStack_1f0[0xd] = uStack_380;
      uStack_390 = 0;
      uStack_388 = 0;
      uStack_380 = 0;
      puStack_1f0 = puStack_1f0 + 0xe;
    }
    else {
      puStack_1f0 = (ulong *)func_0x0652ac80(&lStack_1f8,&uStack_3e8);
    }
    puVar14 = puStack_1f0 + -0xe;
    lVar24 = uStack_688;
  }
  uStack_688 = lVar24;
  if (lVar24 != 0) {
    if (lVar24 != uStack_680) {
      lVar15 = uStack_680 + -0x40;
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
        lVar25 = lVar15 + -0xd8;
        lVar15 = lVar15 + -0x118;
      } while (lVar25 != lVar24);
    }
    uStack_680 = lVar24;
    func_0x0412a280(uStack_688,uStack_678 - uStack_688);
  }
  func_0x05f93280(&uStack_3e8);
  uStack_d8 = _DAT_0f6423c0;
  uStack_d4 = _DAT_0f6423c4;
  if ((_DAT_0f6423c8 & 1) == 0) {
    uStack_c0 = _DAT_0f6423d8;
    uStack_d0 = _DAT_0f6423c8;
    uStack_cc = uRam000000000f6423cc;
    uStack_c8 = _DAT_0f6423d0;
    uStack_c4 = uRam000000000f6423d4;
  }
  else {
    func_0x0412e5e0(&uStack_d0,_DAT_0f6423d8,CONCAT44(uRam000000000f6423d4,_DAT_0f6423d0));
  }
  func_0x0730fa70(puVar14,&uStack_d8,0);
  if ((uStack_d0 & 1) != 0) {
    func_0x0412a280(uStack_c0,CONCAT44(uStack_cc,uStack_d0) & 0xfffffffffffffffe);
  }
  if (pcStack_4d0 != (code *)0x0) {
    (*pcStack_4d0)(auStack_4e8);
  }
  if (pcStack_518 != (code *)0x0) {
    (*pcStack_518)(auStack_530);
  }
  if (apcStack_558[0] != (code *)0x0) {
    (*apcStack_558[0])(alStack_570);
  }
  if ((code *)CONCAT44(uStack_598._4_4_,(undefined4)uStack_598) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_598._4_4_,(undefined4)uStack_598))(auStack_5b8 + 8);
  }
  if (((ulong)uStack_5e8 & 1) != 0) {
    func_0x0412a280(puStack_5d8,(ulong)uStack_5e8 & 0xfffffffffffffffe);
  }
  if ((bStack_6a8 & 1) != 0) {
    func_0x0412a280(puStack_698,CONCAT71(uStack_6a7,bStack_6a8) & 0xfffffffffffffffe);
  }
  bStack_6a8 = 0x1e;
  uStack_6a7 = 0x746e6168636e65;
  uStack_6a0._0_4_ = 0x746e656d;
  uStack_6a0._4_4_ = 0x65707954;
  puStack_698 = (ulong *)((ulong)puStack_698 & 0xffffffffffffff00);
  func_0x0a618a80(&uStack_5e8,&bStack_6a8);
  pcStack_3d8 = (code *)0x0;
  uStack_3c0 = 0;
  uStack_388 = 0;
  uStack_380 = 0;
  pcStack_398 = (code *)0x0;
  uStack_390 = 0;
  uStack_3a8 = 0;
  pcStack_3a0 = (code *)0x0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3e8 = 0;
  uStack_3e0 = (long *)0x0;
  puStack_3d0 = (undefined *)0x68636e457361681c;
  plStack_3c8 = (long *)0x746e656d746e61;
  func_0x0a6a2a60(&uStack_688,&uStack_5e8);
  pcVar12 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar12 == (code *)0x0) {
    FUN_0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar12 + 8) = 0;
  *(undefined8 *)(pcVar12 + 0x10) = 0;
  *(undefined **)pcVar12 = &UNK_0f235920;
  uVar9 = func_0x0d858500(&uStack_688);
  pcVar1 = pcVar12 + 0x18;
  pcVar12[0x20] = (code)0x1;
  *(undefined4 *)(pcVar12 + 0x24) = uVar9;
  *(undefined4 *)(pcVar12 + 0x28) = 0;
  *(undefined8 *)(pcVar12 + 0x30) = 0;
  *(undefined8 *)(pcVar12 + 0x38) = 0;
  *(undefined8 *)(pcVar12 + 0x40) = 0;
  *(undefined **)(pcVar12 + 0x18) = &UNK_0f235970;
  *(undefined4 *)(pcVar12 + 0x48) = (undefined4)uStack_688;
  *(undefined4 *)(pcVar12 + 0x4c) = uStack_688._4_4_;
  *(undefined4 *)(pcVar12 + 0x50) = (undefined4)uStack_680;
  *(undefined4 *)(pcVar12 + 0x54) = uStack_680._4_4_;
  *(ulong *)(pcVar12 + 0x58) = uStack_678;
  uStack_688 = 0;
  uStack_680 = 0;
  uStack_678 = 0;
  uVar9 = func_0x0d858620(pcVar1);
  pcVar7 = pcStack_398;
  *(undefined4 *)(pcVar12 + 0x28) = uVar9;
  pcStack_3a0 = pcVar1;
  if (pcStack_398 != (code *)0x0) {
    LOCK();
    plVar13 = (long *)((long)pcStack_398 + 8);
    lVar24 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      lVar24 = *(long *)pcStack_398;
      pcStack_398 = pcVar12;
      (**(code **)(lVar24 + 0x10))(pcVar7);
      func_0x0412c2d0(pcVar7);
      pcVar12 = pcStack_398;
    }
  }
  pcStack_398 = pcVar12;
  cVar8 = func_0x0a6a2be0(&uStack_3e8,&uStack_5e8);
  if (cVar8 == '\0') {
    puVar14 = (ulong *)0xf671108;
    lVar24 = uStack_688;
  }
  else {
    if (puStack_1f0 < puStack_1e8) {
      *puStack_1f0 = 0;
      puStack_1f0[1] = 0;
      puStack_1f0[2] = 0;
      *puStack_1f0 = uStack_3e8;
      puStack_1f0[1] = (ulong)uStack_3e0;
      puStack_1f0[2] = (ulong)pcStack_3d8;
      uStack_3e8 = 0;
      uStack_3e0 = (long *)0x0;
      pcStack_3d8 = (code *)0x0;
      puStack_1f0[5] = uStack_3c0;
      puStack_1f0[3] = (ulong)puStack_3d0;
      puStack_1f0[4] = (ulong)plStack_3c8;
      puStack_3d0 = (undefined *)0x0;
      plStack_3c8 = (long *)0x0;
      uStack_3c0 = 0;
      puStack_1f0[6] = 0;
      puStack_1f0[7] = 0;
      puStack_1f0[8] = 0;
      puStack_1f0[6] = uStack_3b8;
      puStack_1f0[7] = uStack_3b0;
      puStack_1f0[8] = uStack_3a8;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      uStack_3a8 = 0;
      puStack_1f0[9] = (ulong)pcStack_3a0;
      puStack_1f0[10] = (ulong)pcStack_398;
      pcStack_3a0 = (code *)0x0;
      pcStack_398 = (code *)0x0;
      puStack_1f0[0xb] = 0;
      puStack_1f0[0xc] = 0;
      puStack_1f0[0xd] = 0;
      *(undefined4 *)(puStack_1f0 + 0xb) = (undefined4)uStack_390;
      *(undefined4 *)((long)puStack_1f0 + 0x5c) = uStack_390._4_4_;
      *(undefined4 *)(puStack_1f0 + 0xc) = (undefined4)uStack_388;
      *(undefined4 *)((long)puStack_1f0 + 100) = uStack_388._4_4_;
      puStack_1f0[0xd] = uStack_380;
      uStack_390 = 0;
      uStack_388 = 0;
      uStack_380 = 0;
      puStack_1f0 = puStack_1f0 + 0xe;
    }
    else {
      puStack_1f0 = (ulong *)func_0x0652ac80(&lStack_1f8,&uStack_3e8);
    }
    puVar14 = puStack_1f0 + -0xe;
    lVar24 = uStack_688;
  }
  uStack_688 = lVar24;
  if (lVar24 != 0) {
    if (lVar24 != uStack_680) {
      lVar15 = uStack_680 + -0x40;
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
        lVar25 = lVar15 + -0xd8;
        lVar15 = lVar15 + -0x118;
      } while (lVar25 != lVar24);
    }
    uStack_680 = lVar24;
    func_0x0412a280(uStack_688,uStack_678 - uStack_688);
  }
  func_0x05f93280(&uStack_3e8);
  uStack_f8 = _DAT_0f6423c0;
  uStack_f4 = _DAT_0f6423c4;
  if ((_DAT_0f6423c8 & 1) == 0) {
    uStack_e0 = _DAT_0f6423d8;
    uStack_f0 = _DAT_0f6423c8;
    uStack_ec = uRam000000000f6423cc;
    uStack_e8 = _DAT_0f6423d0;
    uStack_e4 = uRam000000000f6423d4;
  }
  else {
    func_0x0412e5e0(&uStack_f0,_DAT_0f6423d8,CONCAT44(uRam000000000f6423d4,_DAT_0f6423d0));
  }
  func_0x0730fa70(puVar14,&uStack_f8,0);
  if ((uStack_f0 & 1) != 0) {
    func_0x0412a280(uStack_e0,CONCAT44(uStack_ec,uStack_f0) & 0xfffffffffffffffe);
  }
  if (pcStack_4d0 != (code *)0x0) {
    (*pcStack_4d0)(auStack_4e8);
  }
  if (pcStack_518 != (code *)0x0) {
    (*pcStack_518)(auStack_530);
  }
  if (apcStack_558[0] != (code *)0x0) {
    (*apcStack_558[0])(alStack_570);
  }
  if ((code *)CONCAT44(uStack_598._4_4_,(undefined4)uStack_598) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_598._4_4_,(undefined4)uStack_598))(auStack_5b8 + 8);
  }
  if (((ulong)uStack_5e8 & 1) != 0) {
    func_0x0412a280(puStack_5d8,(ulong)uStack_5e8 & 0xfffffffffffffffe);
  }
  if ((bStack_6a8 & 1) != 0) {
    func_0x0412a280(puStack_698,CONCAT71(uStack_6a7,bStack_6a8) & 0xfffffffffffffffe);
  }
  bStack_2a0 = 0x1e;
  uStack_29f = 0x746e6168636e65;
  uStack_298 = 0x6d;
  uStack_297 = 0x65707954746e65;
  uStack_290 = 0;
  func_0x0a618a80(&uStack_3e8,&bStack_2a0);
  uStack_678 = 0;
  uStack_660 = 0;
  uStack_628 = 0;
  uStack_620 = 0;
  plStack_638 = (long *)0x0;
  uStack_630 = 0;
  puStack_648 = (ulong *)0x0;
  plStack_640 = (long *)0x0;
  puStack_658 = (ulong *)0x0;
  puStack_650 = (ulong *)0x0;
  uStack_688 = 0;
  uStack_680 = 0;
  uStack_670 = 0x68636e457465671c;
  uStack_668 = 0x746e656d746e61;
  func_0x0a6a2a60(&uStack_438,&uStack_3e8);
  lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar24 == 0) {
    func_0x048b0de0(&uStack_5e8,&bStack_6a8);
    _DAT_0f54fd90 = (undefined4)uStack_5e8;
    uRam000000000f54fd94 = uStack_5e8._4_4_;
    uVar9 = (undefined4)uStack_5e0;
    uVar28 = uStack_5e0._4_4_;
    uStack_5e8 = (undefined *)0x0;
    uStack_5e0 = (long *)0x0;
    plVar13 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar9;
    uRam000000000f54fd9c = uVar28;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar17 = plVar13 + 1;
      lVar24 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = uStack_5e0;
    if (uStack_5e0 != (long *)0x0) {
      LOCK();
      plVar17 = uStack_5e0 + 1;
      lVar24 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*uStack_5e0 + 0x10))(uStack_5e0);
        func_0x0412c2d0(plVar13);
      }
    }
    lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (DAT_0f6750b0 == '\0') {
    iVar11 = func_0x04108328(&DAT_0f6750b0);
    if (iVar11 != 0) {
      func_0x0a6a7310();
      func_0x0410844d(&DAT_0f6750b0);
    }
  }
  if (DAT_0f6750b0 == '\0') {
    iVar11 = func_0x04108328(&DAT_0f6750b0);
    if (iVar11 != 0) {
      func_0x0a6a7310();
      func_0x0410844d(&DAT_0f6750b0);
    }
  }
  uStack_5e8 = &DAT_0f675098;
  uStack_5e0 = (long *)CONCAT44(uStack_5e0._4_4_,_DAT_0f67509c);
  puStack_5d8 = (undefined *)0x0;
  uStack_5d0 = (undefined *)CONCAT44(uStack_5d0._4_4_,0x80);
  uStack_5c8 = (long *)0x30;
  pcStack_5c0 = (code *)&UNK_0a6a7250;
  auStack_5b8._0_8_ = &UNK_0a6a7390;
  auStack_5b8._8_8_ = 0;
  puStack_5a8 = &UNK_0a6a7a20;
  plStack_5a0 = (long *)0x1;
  uStack_598._0_4_ = 0x48b5640;
  uStack_598._4_4_ = 0;
  uStack_590 = 0xa6a7ab0;
  uStack_58c = 0;
  uStack_588 = 0;
  pcStack_580 = (code *)0x0;
  plStack_578 = (long *)0x0;
  alStack_570[0] = 0;
  func_0x048aee30(&uStack_408,lVar24,&uStack_5e8,0x4ae49b80);
  lVar24 = alStack_570[0];
  alStack_570[0] = 0;
  if (lVar24 != 0) {
    func_0x048ae940(lVar24);
    func_0x0412a280(lVar24,0x78);
  }
  plVar13 = plStack_578;
  if (plStack_578 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_578 + 1;
    lVar24 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plStack_578 + 0x10))(plStack_578);
      func_0x0412c2d0(plVar13);
    }
  }
  if (DAT_0f675168 == '\0') {
    iVar11 = func_0x04108328(&DAT_0f675168);
    if (iVar11 != 0) {
      func_0x0a6a7e70();
      func_0x0410844d(&DAT_0f675168);
    }
  }
  uStack_5e8._0_4_ = _DAT_0f675154;
  uStack_5e0 = (long *)0x1;
  puStack_5d8 = &UNK_0a6a7ac0;
  uStack_5d0 = &UNK_0a6a7ad0;
  func_0x065abe60(&uStack_408);
  uStack_608 = (byte *)CONCAT44(uStack_404,uStack_408);
  uStack_600 = CONCAT26(uStack_3fa,CONCAT15(uStack_3fb,CONCAT14(uStack_3fc,uStack_400)));
  uStack_5f0 = uStack_3f0;
  uStack_5ec = uStack_3ec;
  uStack_5e8._0_4_ = 0xf55160ec;
  uStack_5e0 = (long *)0x0;
  puStack_5d8 = (undefined *)((ulong)puStack_5d8 & 0xffffffff00000000);
  uStack_5d0 = (undefined *)0x0;
  uStack_5c8 = (long *)&UNK_065b4120;
  pcStack_5c0 = (code *)&SUB_048b06d0;
  auStack_5b8._0_8_ = &UNK_0a6a7ef0;
  auStack_5b8._8_8_ = 0;
  puStack_5a8 = (undefined *)((ulong)puStack_5a8 & 0xffffffff00000000);
  plStack_5a0 = (long *)0x0;
  uStack_598._0_4_ = 0;
  uStack_598._4_4_ = 0;
  func_0x049057f0(&uStack_608,&uStack_5e8);
  func_0x048aea50(&uStack_5e8);
  uStack_690 = uStack_5f0;
  uStack_68c = uStack_5ec;
  bStack_6a8 = (byte)uStack_608;
  uStack_6a7 = (undefined7)((ulong)uStack_608 >> 8);
  uStack_6a0._0_4_ = (undefined4)uStack_600;
  uStack_6a0._4_4_ = (uint)(uStack_600 >> 0x20);
  uStack_5e8 = (undefined *)CONCAT44(uStack_5e8._4_4_,0xf55160ec);
  uStack_5e0 = (long *)0x0;
  puStack_5d8 = (undefined *)CONCAT44(puStack_5d8._4_4_,1);
  uStack_5d0 = (undefined *)0x0;
  uStack_5c8 = (long *)&UNK_065b4120;
  pcStack_5c0 = (code *)&SUB_048b06d0;
  auStack_5b8._0_8_ = &UNK_0a6a81a0;
  auStack_5b8._8_8_ = 0;
  puStack_5a8 = (undefined *)((ulong)puStack_5a8 & 0xffffffff00000000);
  plStack_5a0 = (long *)0x0;
  uStack_598._0_4_ = 0;
  uStack_598._4_4_ = 0;
  func_0x049057f0(&bStack_6a8,&uStack_5e8);
  func_0x048aea50(&uStack_5e8);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (plVar13 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x60,0);
  }
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f235a00;
  uVar9 = func_0x0d858500(&uStack_438);
  plVar17 = plVar13 + 3;
  *(undefined1 *)(plVar13 + 4) = 1;
  *(undefined4 *)((long)plVar13 + 0x24) = uVar9;
  *(undefined4 *)(plVar13 + 5) = 0;
  plVar13[6] = 0;
  plVar13[7] = 0;
  plVar13[8] = 0;
  plVar13[3] = (long)&UNK_0f235a50;
  *(undefined4 *)(plVar13 + 9) = (undefined4)uStack_438;
  *(undefined4 *)((long)plVar13 + 0x4c) = uStack_438._4_4_;
  *(undefined4 *)(plVar13 + 10) = (undefined4)uStack_430;
  *(undefined4 *)((long)plVar13 + 0x54) = uStack_430._4_4_;
  plVar13[0xb] = lStack_428;
  uStack_438 = (byte *)0x0;
  uStack_430 = 0;
  lStack_428 = 0;
  uVar9 = func_0x0d858620(plVar17);
  plVar2 = plStack_638;
  *(undefined4 *)(plVar13 + 5) = uVar9;
  plStack_640 = plVar17;
  if (plStack_638 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_638 + 1;
    lVar24 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      lVar24 = *plStack_638;
      plStack_638 = plVar13;
      (**(code **)(lVar24 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
      plVar13 = plStack_638;
    }
  }
  plStack_638 = plVar13;
  func_0x0a6a4920();
  puStack_5d8 = pcStack_3d8;
  uStack_5e8 = (undefined *)uStack_3e8;
  uStack_5e0 = uStack_3e0;
  uStack_3e8 = 0;
  uStack_3e0 = (long *)0x0;
  pcStack_3d8 = (code *)0x0;
  uStack_5d0 = puStack_3d0;
  uStack_5c8 = plStack_3c8;
  func_0x065281f0(&pcStack_5c0,&uStack_3c0);
  bStack_6a8 = 0;
  uStack_6a7 = 0;
  uStack_6a0._0_4_ = 0;
  uStack_6a0._4_4_ = 0;
  puStack_698 = (ulong *)0x0;
  uStack_600 = uStack_600 & 0xffffffffffffff00;
  uStack_608 = &bStack_6a8;
  puVar14 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
  if (puVar14 == (ulong *)0x0) {
    FUN_0eec74c0(0x140,0);
  }
  bStack_6a8 = (byte)puVar14;
  uStack_6a7 = (undefined7)((ulong)puVar14 >> 8);
  uStack_6a0._0_4_ = SUB84(puVar14,0);
  uStack_6a0._4_4_ = (uint)((ulong)puVar14 >> 0x20);
  puVar23 = puVar14 + 0x28;
  puStack_698 = puVar23;
  if (((ulong)uStack_5e8 & 1) == 0) {
    puVar14[2] = (ulong)puStack_5d8;
    *puVar14 = (ulong)uStack_5e8;
    puVar14[1] = (ulong)uStack_5e0;
  }
  else {
    func_0x0412e5e0(puVar14,puStack_5d8,uStack_5e0);
  }
  *(undefined4 *)(puVar14 + 3) = (undefined4)uStack_5d0;
  *(undefined4 *)((long)puVar14 + 0x1c) = uStack_5d0._4_4_;
  *(undefined4 *)(puVar14 + 4) = (undefined4)uStack_5c8;
  *(undefined4 *)((long)puVar14 + 0x24) = uStack_5c8._4_4_;
  func_0x06523ef0(puVar14 + 5,&pcStack_5c0);
  uStack_6a0 = puVar23;
  if (pcStack_4d0 != (code *)0x0) {
    (*pcStack_4d0)(auStack_4e8);
  }
  if (pcStack_518 != (code *)0x0) {
    (*pcStack_518)(auStack_530);
  }
  if (apcStack_558[0] != (code *)0x0) {
    (*apcStack_558[0])(alStack_570);
  }
  if ((code *)CONCAT44(uStack_598._4_4_,(undefined4)uStack_598) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_598._4_4_,(undefined4)uStack_598))(auStack_5b8 + 8);
  }
  if (((ulong)uStack_5e8 & 1) != 0) {
    func_0x0412a280(puStack_5d8,(ulong)uStack_5e8 & 0xfffffffffffffffe);
  }
  uVar10 = (**(code **)(*plStack_640 + 0x20))();
  puVar14 = (ulong *)CONCAT71(uStack_6a7,bStack_6a8);
  uVar21 = ((long)uStack_6a0 - (long)puVar14 >> 6) * -0x3333333333333333;
  uVar18 = 0;
  if ((uVar10 != 0) && ((uint)uVar21 != 0)) {
    uVar22 = 0;
    uVar18 = 0;
    uStack_60c = uVar10;
    do {
      auVar27 = (**(code **)(*plStack_640 + 0x28))(plStack_640,uVar22);
      uVar19 = auVar27._8_8_;
      lVar24 = auVar27._0_8_;
      auVar27 = func_0x06527d70();
      if (auVar27._8_8_ != uVar19) {
LAB_0a6166a0:
        auVar27 = func_0x06527e30();
        if (auVar27._8_8_ == uVar19) {
          if (auVar27._0_8_ == 0) {
            lVar15 = func_0x048aead0(auVar27._8_8_);
            iVar11 = *(int *)(lVar15 + 8);
          }
          else {
            iVar11 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar24 == 0) {
            lVar15 = func_0x048aead0(uVar19);
            iVar3 = *(int *)(lVar15 + 8);
          }
          else {
            iVar3 = *(int *)(lVar24 + 8);
          }
          if (iVar11 == iVar3) goto LAB_0a616893;
        }
        auVar27 = func_0x06527ef0();
        if (auVar27._8_8_ == uVar19) {
          if (auVar27._0_8_ == 0) {
            lVar15 = func_0x048aead0(auVar27._8_8_);
            iVar11 = *(int *)(lVar15 + 8);
          }
          else {
            iVar11 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar24 == 0) {
            lVar15 = func_0x048aead0(uVar19);
            iVar3 = *(int *)(lVar15 + 8);
          }
          else {
            iVar3 = *(int *)(lVar24 + 8);
          }
          if (iVar11 == iVar3) goto LAB_0a616893;
        }
        auVar27 = func_0x06527fb0();
        if (auVar27._8_8_ == uVar19) {
          if (auVar27._0_8_ == 0) {
            lVar15 = func_0x048aead0(auVar27._8_8_);
            iVar11 = *(int *)(lVar15 + 8);
          }
          else {
            iVar11 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar24 == 0) {
            lVar15 = func_0x048aead0(uVar19);
            iVar3 = *(int *)(lVar15 + 8);
          }
          else {
            iVar3 = *(int *)(lVar24 + 8);
          }
          if (iVar11 == iVar3) goto LAB_0a616893;
        }
        auVar27 = func_0x06528070();
        if (auVar27._8_8_ == uVar19) {
          if (auVar27._0_8_ == 0) {
            lVar15 = func_0x048aead0(auVar27._8_8_);
            iVar11 = *(int *)(lVar15 + 8);
          }
          else {
            iVar11 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar24 == 0) {
            lVar15 = func_0x048aead0(uVar19);
            iVar3 = *(int *)(lVar15 + 8);
          }
          else {
            iVar3 = *(int *)(lVar24 + 8);
          }
          if (iVar11 == iVar3) goto LAB_0a616893;
        }
        auVar27 = func_0x06528130();
        puVar23 = uStack_6a0;
        if (auVar27._8_8_ == uVar19) {
          if (auVar27._0_8_ == 0) {
            lVar15 = func_0x048aead0(auVar27._8_8_);
            iVar11 = *(int *)(lVar15 + 8);
          }
          else {
            iVar11 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar24 == 0) {
            lVar15 = func_0x048aead0(uVar19);
            iVar3 = *(int *)(lVar15 + 8);
          }
          else {
            iVar3 = *(int *)(lVar24 + 8);
          }
          puVar23 = uStack_6a0;
          if (iVar11 == iVar3) goto LAB_0a616893;
        }
        puVar14 = (ulong *)CONCAT71(uStack_6a7,bStack_6a8);
        if (puVar14[uVar18 * 0x28 + 4] != uVar19) goto LAB_0a616a65;
        uStack_6a0 = puVar23;
        if (puVar14[uVar18 * 0x28 + 3] == 0) {
          lVar15 = func_0x048aead0();
          iVar11 = *(int *)(lVar15 + 8);
          if (lVar24 != 0) goto LAB_0a616864;
LAB_0a61687c:
          lVar24 = func_0x048aead0(uVar19);
          if (iVar11 == *(int *)(lVar24 + 8)) {
LAB_0a616891:
            uVar18 = (ulong)((int)uVar18 + 1);
            goto LAB_0a616893;
          }
        }
        else {
          iVar11 = *(int *)(puVar14[uVar18 * 0x28 + 3] + 8);
          if (lVar24 == 0) goto LAB_0a61687c;
LAB_0a616864:
          if (iVar11 == *(int *)(lVar24 + 8)) goto LAB_0a616891;
        }
        puVar14 = (ulong *)CONCAT71(uStack_6a7,bStack_6a8);
        goto LAB_0a616a60;
      }
      if (auVar27._0_8_ == 0) {
        lVar15 = func_0x048aead0(auVar27._8_8_);
        iVar11 = *(int *)(lVar15 + 8);
        if (lVar24 != 0) goto LAB_0a616671;
LAB_0a61668e:
        lVar15 = func_0x048aead0(uVar19);
        if (iVar11 != *(int *)(lVar15 + 8)) goto LAB_0a6166a0;
      }
      else {
        iVar11 = *(int *)(auVar27._0_8_ + 8);
        if (lVar24 == 0) goto LAB_0a61668e;
LAB_0a616671:
        if (iVar11 != *(int *)(lVar24 + 8)) goto LAB_0a6166a0;
      }
LAB_0a616893:
    } while (((uint)uVar18 < (uint)uVar21) && (uVar22 = uVar22 + 1, uVar22 < uStack_60c));
    puVar14 = (ulong *)CONCAT71(uStack_6a7,bStack_6a8);
    uVar21 = ((long)uStack_6a0 - (long)puVar14 >> 6) * -0x3333333333333333;
  }
  puVar23 = puStack_658;
  if (uVar21 == uVar18) {
    puVar20 = puStack_650;
    if (puStack_658 != (ulong *)0x0) {
      while (puVar23 != puVar20) {
        func_0x05fe8450(puVar20 + -0x28);
        puVar20 = puVar20 + -0x28;
      }
      puStack_650 = puVar23;
      func_0x0412a280(puStack_658,(long)puStack_648 - (long)puStack_658);
      puVar14 = (ulong *)CONCAT71(uStack_6a7,bStack_6a8);
    }
    puStack_648 = puStack_698;
    if (puStack_1f0 < puStack_1e8) {
      *puStack_1f0 = 0;
      puStack_1f0[1] = 0;
      puStack_1f0[2] = 0;
      *puStack_1f0 = uStack_688;
      puStack_1f0[1] = uStack_680;
      puStack_1f0[2] = uStack_678;
      uStack_688 = 0;
      uStack_680 = 0;
      uStack_678 = 0;
      puStack_1f0[5] = uStack_660;
      puStack_1f0[3] = uStack_670;
      puStack_1f0[4] = uStack_668;
      uStack_670 = 0;
      uStack_668 = 0;
      uStack_660 = 0;
      puStack_1f0[6] = 0;
      puStack_1f0[7] = 0;
      puStack_1f0[8] = 0;
      puStack_1f0[6] = (ulong)puVar14;
      puStack_1f0[7] = (ulong)uStack_6a0;
      puStack_1f0[8] = (ulong)puStack_698;
      puStack_658 = (ulong *)0x0;
      puStack_650 = (ulong *)0x0;
      puStack_648 = (ulong *)0x0;
      puStack_1f0[9] = (ulong)plStack_640;
      puStack_1f0[10] = (ulong)plStack_638;
      plStack_640 = (long *)0x0;
      plStack_638 = (undefined8 *)0x0;
      puStack_1f0[0xb] = 0;
      puStack_1f0[0xc] = 0;
      puStack_1f0[0xd] = 0;
      puStack_1f0[0xb] = uStack_630;
      puStack_1f0[0xc] = uStack_628;
      puStack_1f0[0xd] = uStack_620;
      uStack_630 = 0;
      uStack_628 = 0;
      uStack_620 = 0;
      puStack_1f0 = puStack_1f0 + 0xe;
    }
    else {
      puStack_658 = puVar14;
      puStack_650 = uStack_6a0;
      puStack_1f0 = (ulong *)func_0x0652ac80(&lStack_1f8,&uStack_688);
    }
    puVar14 = puStack_1f0 + -0xe;
    lVar24 = (long)uStack_438;
  }
  else {
LAB_0a616a60:
    puVar23 = uStack_6a0;
    if (puVar14 != (ulong *)0x0) {
LAB_0a616a65:
      puVar20 = puVar14;
      uStack_6a0 = puVar23;
      if (puVar14 != puVar23) {
        do {
          puVar23 = puVar23 + -0x28;
          func_0x05fe8450(puVar23);
        } while (puVar23 != puVar14);
        puVar20 = (ulong *)CONCAT71(uStack_6a7,bStack_6a8);
      }
      uStack_6a0._0_4_ = SUB84(puVar14,0);
      uStack_6a0._4_4_ = (uint)((ulong)puVar14 >> 0x20);
      func_0x0412a280(puVar20,(long)puStack_698 - (long)puVar20);
    }
    puVar14 = (ulong *)0xf671108;
    lVar24 = (long)uStack_438;
  }
  uStack_438 = (byte *)lVar24;
  if (lVar24 != 0) {
    if (lVar24 != uStack_430) {
      lVar15 = uStack_430 + -0x40;
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
        lVar25 = lVar15 + -0xd8;
        lVar15 = lVar15 + -0x118;
      } while (lVar25 != lVar24);
    }
    uStack_430 = lVar24;
    func_0x0412a280(uStack_438,lStack_428 - (long)uStack_438);
  }
  func_0x05f93280(&uStack_688);
  uStack_118 = _DAT_0f6423c0;
  uStack_114 = _DAT_0f6423c4;
  if ((_DAT_0f6423c8 & 1) == 0) {
    uStack_100 = _DAT_0f6423d8;
    uStack_110 = _DAT_0f6423c8;
    uStack_10c = uRam000000000f6423cc;
    uStack_108 = _DAT_0f6423d0;
    uStack_104 = uRam000000000f6423d4;
  }
  else {
    func_0x0412e5e0(&uStack_110,_DAT_0f6423d8,CONCAT44(uRam000000000f6423d4,_DAT_0f6423d0));
  }
  func_0x0730fa70(puVar14,&uStack_118,0);
  if ((uStack_110 & 1) != 0) {
    func_0x0412a280(uStack_100,CONCAT44(uStack_10c,uStack_110) & 0xfffffffffffffffe);
  }
  if (pcStack_2d0 != (code *)0x0) {
    (*pcStack_2d0)(auStack_2e8);
  }
  if (pcStack_318 != (code *)0x0) {
    (*pcStack_318)(auStack_330);
  }
  if (pcStack_358 != (code *)0x0) {
    (*pcStack_358)(auStack_370);
  }
  if (pcStack_398 != (code *)0x0) {
    (*pcStack_398)(&uStack_3b0);
  }
  if ((uStack_3e8 & 1) != 0) {
    func_0x0412a280(pcStack_3d8,uStack_3e8 & 0xfffffffffffffffe);
  }
  if ((bStack_2a0 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_28f,uStack_290),
                    CONCAT71(uStack_29f,bStack_2a0) & 0xfffffffffffffffe);
  }
  puStack_5d8 = (undefined *)0x0;
  uStack_588 = 0;
  uStack_584 = 0;
  pcStack_580 = (code *)0x0;
  uStack_598._0_4_ = 0;
  uStack_598._4_4_ = 0;
  uStack_590 = 0;
  uStack_58c = 0;
  puStack_5a8 = (undefined *)0x0;
  plStack_5a0 = (long *)0x0;
  auStack_5b8._0_8_ = 0;
  auStack_5b8._8_8_ = 0;
  uStack_5e8 = (undefined *)0x0;
  uStack_5e0 = (long *)0x0;
  uStack_5d0 = (undefined *)0x4165766f6d65722a;
  uStack_5c8 = (long *)0x6e6168636e456c6c;
  pcStack_5c0 = (code *)0x73746e656d74;
  uStack_688 = 0;
  uStack_680 = 0;
  uStack_678 = 0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar16 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x60,0);
  }
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0f235af0;
  uVar9 = func_0x0d858500(&uStack_688);
  plVar13 = puVar16 + 3;
  *(undefined1 *)(puVar16 + 4) = 0;
  *(undefined4 *)((long)puVar16 + 0x24) = uVar9;
  *(undefined4 *)(puVar16 + 5) = 0;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[8] = 0;
  puVar16[3] = &UNK_0f235b40;
  puVar16[9] = 0;
  puVar16[10] = 0;
  puVar16[0xb] = 0;
  uStack_688 = 0;
  uStack_680 = 0;
  uStack_678 = 0;
  uVar9 = func_0x0d858620(plVar13);
  *(undefined4 *)(puVar16 + 5) = uVar9;
  plVar17 = (long *)CONCAT44(uStack_598._4_4_,(undefined4)uStack_598);
  uStack_598._0_4_ = SUB84(puVar16,0);
  uStack_598._4_4_ = (undefined4)((ulong)puVar16 >> 0x20);
  plStack_5a0 = plVar13;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar13 = plVar17 + 1;
    lVar24 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  uStack_3e8 = 0;
  uStack_3e0 = (long *)0x0;
  pcStack_3d8 = (code *)0x0;
  (**(code **)(*plStack_5a0 + 0x20))();
  uVar4 = auStack_5b8._0_8_;
  lVar24 = auStack_5b8._8_8_;
  if (auStack_5b8._0_8_ != 0) {
    while (uVar4 != lVar24) {
      func_0x05fe8450(lVar24 + -0x140);
      lVar24 = lVar24 + -0x140;
    }
    auStack_5b8._8_8_ = uVar4;
    func_0x0412a280(auStack_5b8._0_8_,(long)puStack_5a8 - auStack_5b8._0_8_);
  }
  auStack_5b8._0_8_ = 0;
  auStack_5b8._8_8_ = 0;
  puStack_5a8 = (undefined *)0x0;
  if (puStack_1f0 < puStack_1e8) {
    *puStack_1f0 = 0;
    puStack_1f0[1] = 0;
    puStack_1f0[2] = 0;
    *puStack_1f0 = (ulong)uStack_5e8;
    puStack_1f0[1] = (ulong)uStack_5e0;
    puStack_1f0[2] = (ulong)puStack_5d8;
    uStack_5e8 = (undefined *)0x0;
    uStack_5e0 = (long *)0x0;
    puStack_5d8 = (undefined *)0x0;
    puStack_1f0[5] = (ulong)pcStack_5c0;
    puStack_1f0[3] = (ulong)uStack_5d0;
    puStack_1f0[4] = (ulong)uStack_5c8;
    uStack_5d0 = (undefined *)0x0;
    uStack_5c8 = (long *)0x0;
    pcStack_5c0 = (code *)0x0;
    puStack_1f0[6] = 0;
    puStack_1f0[7] = 0;
    puStack_1f0[8] = 0;
    puStack_1f0[6] = 0;
    puStack_1f0[7] = 0;
    puStack_1f0[8] = 0;
    auStack_5b8._0_8_ = 0;
    auStack_5b8._8_8_ = 0;
    puStack_5a8 = (undefined *)0x0;
    puStack_1f0[9] = (ulong)plStack_5a0;
    puStack_1f0[10] = CONCAT44(uStack_598._4_4_,(undefined4)uStack_598);
    plStack_5a0 = (long *)0x0;
    uStack_598._0_4_ = 0;
    uStack_598._4_4_ = 0;
    puStack_1f0[0xb] = 0;
    puStack_1f0[0xc] = 0;
    puStack_1f0[0xd] = 0;
    puStack_1f0[0xb] = CONCAT44(uStack_58c,uStack_590);
    puStack_1f0[0xc] = CONCAT44(uStack_584,uStack_588);
    puStack_1f0[0xd] = (ulong)pcStack_580;
    uStack_590 = 0;
    uStack_58c = 0;
    uStack_588 = 0;
    uStack_584 = 0;
    pcStack_580 = (code *)0x0;
    puVar14 = puStack_1f0 + 0xe;
    lVar24 = uStack_688;
  }
  else {
    puVar14 = (ulong *)func_0x0652ac80(&lStack_1f8,&uStack_5e8);
    lVar24 = uStack_688;
  }
  uStack_688 = lVar24;
  puStack_1f0 = puVar14;
  if (lVar24 != 0) {
    if (lVar24 != uStack_680) {
      lVar15 = uStack_680 + -0x40;
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
        lVar25 = lVar15 + -0xd8;
        lVar15 = lVar15 + -0x118;
      } while (lVar25 != lVar24);
    }
    func_0x0412a280(uStack_688,uStack_678 - uStack_688);
  }
  func_0x05f93280(&uStack_5e8);
  uStack_138 = _DAT_0f6423c0;
  uStack_134 = _DAT_0f6423c4;
  if ((_DAT_0f6423c8 & 1) == 0) {
    uStack_120 = _DAT_0f6423d8;
    uStack_130 = _DAT_0f6423c8;
    uStack_12c = uRam000000000f6423cc;
    uStack_128 = _DAT_0f6423d0;
    uStack_124 = uRam000000000f6423d4;
  }
  else {
    func_0x0412e5e0(&uStack_130,_DAT_0f6423d8,CONCAT44(uRam000000000f6423d4,_DAT_0f6423d0));
  }
  func_0x0730fa70(puVar14 + -0xe,&uStack_138,0);
  if ((uStack_130 & 1) != 0) {
    func_0x0412a280(uStack_120,CONCAT44(uStack_12c,uStack_130) & 0xfffffffffffffffe);
  }
  puStack_5d8 = (undefined *)0x0;
  pcStack_5c0 = (code *)0x0;
  uStack_588 = 0;
  uStack_584 = 0;
  pcStack_580 = (code *)0x0;
  uStack_598._0_4_ = 0;
  uStack_598._4_4_ = 0;
  uStack_590 = 0;
  uStack_58c = 0;
  puStack_5a8 = (undefined *)0x0;
  plStack_5a0 = (long *)0x0;
  auStack_5b8._0_8_ = 0;
  auStack_5b8._8_8_ = 0;
  uStack_5e8 = (undefined *)0x0;
  uStack_5e0 = (long *)0x0;
  uStack_5d0 = (undefined *)0x68636e457465671e;
  uStack_5c8 = (long *)0x73746e656d746e61;
  uStack_688 = 0;
  uStack_680 = 0;
  uStack_678 = 0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar16 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x60,0);
  }
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0f235bc0;
  uVar9 = func_0x0d858500(&uStack_688);
  plVar13 = puVar16 + 3;
  *(undefined1 *)(puVar16 + 4) = 1;
  *(undefined4 *)((long)puVar16 + 0x24) = uVar9;
  *(undefined4 *)(puVar16 + 5) = 0;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[8] = 0;
  puVar16[3] = &UNK_0f235c10;
  puVar16[9] = 0;
  puVar16[10] = 0;
  puVar16[0xb] = 0;
  uStack_688 = 0;
  uStack_680 = 0;
  uStack_678 = 0;
  uVar9 = func_0x0d858620(plVar13);
  *(undefined4 *)(puVar16 + 5) = uVar9;
  plVar17 = (long *)CONCAT44(uStack_598._4_4_,(undefined4)uStack_598);
  uStack_598._0_4_ = SUB84(puVar16,0);
  uStack_598._4_4_ = (undefined4)((ulong)puVar16 >> 0x20);
  plStack_5a0 = plVar13;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar13 = plVar17 + 1;
    lVar24 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  uStack_3e8 = 0;
  uStack_3e0 = (long *)0x0;
  pcStack_3d8 = (code *)0x0;
  (**(code **)(*plStack_5a0 + 0x20))();
  uVar4 = auStack_5b8._0_8_;
  lVar24 = auStack_5b8._8_8_;
  if (auStack_5b8._0_8_ != 0) {
    while (uVar4 != lVar24) {
      func_0x05fe8450(lVar24 + -0x140);
      lVar24 = lVar24 + -0x140;
    }
    auStack_5b8._8_8_ = uVar4;
    func_0x0412a280(auStack_5b8._0_8_,(long)puStack_5a8 - auStack_5b8._0_8_);
  }
  auStack_5b8._0_8_ = 0;
  auStack_5b8._8_8_ = 0;
  puStack_5a8 = (undefined *)0x0;
  if (puStack_1f0 < puStack_1e8) {
    *puStack_1f0 = 0;
    puStack_1f0[1] = 0;
    puStack_1f0[2] = 0;
    *puStack_1f0 = (ulong)uStack_5e8;
    puStack_1f0[1] = (ulong)uStack_5e0;
    puStack_1f0[2] = (ulong)puStack_5d8;
    uStack_5e8 = (undefined *)0x0;
    uStack_5e0 = (long *)0x0;
    puStack_5d8 = (undefined *)0x0;
    puStack_1f0[5] = (ulong)pcStack_5c0;
    puStack_1f0[3] = (ulong)uStack_5d0;
    puStack_1f0[4] = (ulong)uStack_5c8;
    uStack_5d0 = (undefined *)0x0;
    uStack_5c8 = (long *)0x0;
    pcStack_5c0 = (code *)0x0;
    puStack_1f0[6] = 0;
    puStack_1f0[7] = 0;
    puStack_1f0[8] = 0;
    puStack_1f0[6] = 0;
    puStack_1f0[7] = 0;
    puStack_1f0[8] = 0;
    auStack_5b8._0_8_ = 0;
    auStack_5b8._8_8_ = 0;
    puStack_5a8 = (undefined *)0x0;
    puStack_1f0[9] = (ulong)plStack_5a0;
    puStack_1f0[10] = CONCAT44(uStack_598._4_4_,(undefined4)uStack_598);
    plStack_5a0 = (long *)0x0;
    uStack_598._0_4_ = 0;
    uStack_598._4_4_ = 0;
    puStack_1f0[0xb] = 0;
    puStack_1f0[0xc] = 0;
    puStack_1f0[0xd] = 0;
    puStack_1f0[0xb] = CONCAT44(uStack_58c,uStack_590);
    puStack_1f0[0xc] = CONCAT44(uStack_584,uStack_588);
    puStack_1f0[0xd] = (ulong)pcStack_580;
    uStack_590 = 0;
    uStack_58c = 0;
    uStack_588 = 0;
    uStack_584 = 0;
    pcStack_580 = (code *)0x0;
    puVar14 = puStack_1f0 + 0xe;
  }
  else {
    puVar14 = (ulong *)func_0x0652ac80(&lStack_1f8,&uStack_5e8);
  }
  plVar13 = plStack_180;
  lVar24 = uStack_688;
  puStack_1f0 = puVar14;
  if (uStack_688 != 0) {
    if (uStack_688 != uStack_680) {
      lVar15 = uStack_680 + -0x40;
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
        lVar25 = lVar15 + -0xd8;
        lVar15 = lVar15 + -0x118;
      } while (lVar25 != lVar24);
    }
    func_0x0412a280(uStack_688,uStack_678 - uStack_688);
  }
  func_0x05f93280(&uStack_5e8);
  uStack_158 = _DAT_0f6423c0;
  uStack_154 = _DAT_0f6423c4;
  if ((_DAT_0f6423c8 & 1) == 0) {
    uStack_140 = _DAT_0f6423d8;
    uStack_150 = _DAT_0f6423c8;
    uStack_14c = uRam000000000f6423cc;
    uStack_148 = _DAT_0f6423d0;
    uStack_144 = uRam000000000f6423d4;
  }
  else {
    func_0x0412e5e0(&uStack_150,_DAT_0f6423d8,CONCAT44(uRam000000000f6423d4,_DAT_0f6423d0));
  }
  func_0x0730fa70(puVar14 + -0xe,&uStack_158,0);
  if ((uStack_150 & 1) != 0) {
    func_0x0412a280(uStack_140,CONCAT44(uStack_14c,uStack_150) & 0xfffffffffffffffe);
  }
  uStack_3e8 = CONCAT17(uStack_3e8._7_1_,0x73746f6c730a);
  func_0x065af670(&uStack_5e8);
  if (((ulong)uStack_5d0 & 1) == 0) {
    if ((uStack_3e8 & 1) == 0) {
      pcStack_5c0 = pcStack_3d8;
      uStack_5d0 = (undefined *)uStack_3e8;
      uStack_5c8 = uStack_3e0;
    }
    else {
      FUN_04885070(&uStack_5d0,pcStack_3d8,uStack_3e0);
    }
  }
  else {
    uVar18 = uStack_3e8 >> 1 & 0x7f;
    pcVar12 = (code *)((long)&uStack_3e8 + 1);
    if ((uStack_3e8 & 1) != 0) {
      uVar18 = (ulong)uStack_3e0;
      pcVar12 = pcStack_3d8;
    }
    func_0x04885120(&uStack_5d0,pcVar12,uVar18);
  }
  auStack_5b8 = func_0x0a6ab9e0();
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar16 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x40,0);
  }
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0f235ca0;
  uStack_598 = puVar16 + 3;
  *(undefined1 *)(puVar16 + 4) = 1;
  puVar16[5] = 0;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[3] = &UNK_0f235cf0;
  plVar17 = (long *)CONCAT44(uStack_58c,uStack_590);
  uStack_590 = SUB84(puVar16,0);
  uStack_58c = (undefined4)((ulong)puVar16 >> 0x20);
  if (plVar17 == (long *)0x0) {
LAB_0a61768f:
    if (uStack_1d0 <= uStack_1d8) {
LAB_0a6176dd:
      lVar24 = func_0x065b01f0(&lStack_1e0,&uStack_5e8);
      goto LAB_0a6176f5;
    }
  }
  else {
    LOCK();
    plVar2 = plVar17 + 1;
    lVar24 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar24 != 0) goto LAB_0a61768f;
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
    if (uStack_1d0 <= uStack_1d8) goto LAB_0a6176dd;
  }
  uVar18 = uStack_1d8;
  func_0x065b0410(uStack_1d8,&uStack_5e8);
  lVar24 = uVar18 + 0x1b0;
LAB_0a6176f5:
  uStack_1d8 = lVar24;
  func_0x0652dc20(&uStack_5e8);
  uStack_178 = _DAT_0f6423c0;
  uStack_174 = _DAT_0f6423c4;
  if ((_DAT_0f6423c8 & 1) == 0) {
    uStack_160 = _DAT_0f6423d8;
    uStack_170 = _DAT_0f6423c8;
    uStack_16c = uRam000000000f6423cc;
    uStack_168 = _DAT_0f6423d0;
    uStack_164 = uRam000000000f6423d4;
  }
  else {
    func_0x0412e5e0(&uStack_170,_DAT_0f6423d8,CONCAT44(uRam000000000f6423d4,_DAT_0f6423d0));
  }
  func_0x0730fa70(lVar24 + -0x1b0,&uStack_178,0);
  if ((uStack_170 & 1) != 0) {
    func_0x0412a280(uStack_160,CONCAT44(uStack_16c,uStack_170) & 0xfffffffffffffffe);
  }
  if ((uStack_3e8 & 1) != 0) {
    func_0x0412a280(pcStack_3d8,uStack_3e8 & 0xfffffffffffffffe);
  }
  auStack_240 = func_0x0a66b5f0();
  lVar15 = lStack_270;
  lVar24 = lStack_268;
  if (lStack_270 != 0) {
    for (; lVar15 != lVar24; lVar24 = lVar24 + -0x30) {
      if ((*(byte *)(lVar24 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar24 + -0x10),
                        *(ulong *)(lVar24 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_268 = lVar15;
    func_0x0412a280(lStack_270,lStack_260 - lStack_270);
  }
  lVar25 = lStack_278;
  lVar15 = lStack_280;
  lVar24 = lStack_288;
  lStack_288 = 0;
  lStack_280 = 0;
  lStack_278 = 0;
  *plVar13 = lVar24;
  plVar13[1] = lVar15;
  plVar13[2] = lVar25;
  lStack_270 = 0;
  lStack_268 = 0;
  lStack_260 = 0;
  plVar13[5] = (long)puStack_248;
  plVar13[3] = uStack_258;
  plVar13[4] = uStack_250;
  uStack_258 = 0;
  uStack_250 = 0;
  puStack_248 = (undefined8 *)0x0;
  *(undefined4 *)(plVar13 + 8) = auStack_230._0_4_;
  *(undefined4 *)((long)plVar13 + 0x44) = auStack_230._4_4_;
  *(undefined4 *)(plVar13 + 9) = auStack_230._8_4_;
  *(undefined4 *)((long)plVar13 + 0x4c) = auStack_230._12_4_;
  *(undefined1 (*) [16])(plVar13 + 6) = auStack_240;
  plVar13[10] = lStack_220;
  plVar13[0xb] = lStack_218;
  plVar13[0xc] = lStack_210;
  lStack_220 = 0;
  lStack_218 = 0;
  lStack_210 = 0;
  plVar13[0xd] = lStack_208;
  plVar13[0xe] = lStack_200;
  lStack_208 = 0;
  lStack_200 = 0;
  plVar13[0xf] = lStack_1f8;
  plVar13[0x10] = (long)puStack_1f0;
  plVar13[0x11] = (long)puStack_1e8;
  lStack_1f8 = 0;
  puStack_1f0 = (ulong *)0x0;
  puStack_1e8 = (ulong *)0x0;
  plVar13[0x12] = lStack_1e0;
  plVar13[0x13] = uStack_1d8;
  plVar13[0x14] = uStack_1d0;
  lStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  plVar13[0x15] = lStack_1c8;
  plVar13[0x16] = lStack_1c0;
  plVar13[0x17] = lStack_1b8;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  lStack_1b8 = 0;
  plVar13[0x18] = lStack_1b0;
  plVar13[0x19] = lStack_1a8;
  plVar13[0x1a] = lStack_1a0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  lStack_1a0 = 0;
  *(undefined4 *)(plVar13 + 0x1b) = (undefined4)uStack_198;
  *(undefined4 *)((long)plVar13 + 0xdc) = uStack_198._4_4_;
  *(undefined4 *)(plVar13 + 0x1c) = (undefined4)uStack_190;
  *(undefined4 *)((long)plVar13 + 0xe4) = uStack_190._4_4_;
  plVar13[0x1d] = lStack_188;
  uStack_198 = 0;
  uStack_190 = 0;
  lStack_188 = 0;
  func_0x0651ffe0(&lStack_270);
  lVar15 = lStack_288;
  lVar24 = lStack_280;
  if (lStack_288 != 0) {
    for (; lVar15 != lVar24; lVar24 = lVar24 + -0x30) {
      if ((*(byte *)(lVar24 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar24 + -0x10),
                        *(ulong *)(lVar24 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_280 = lVar15;
    func_0x0412a280(lStack_288,lStack_278 - lStack_288);
  }
  if (((ulong)auStack_420 & 1) != 0) {
    func_0x0412a280(puStack_410,(ulong)auStack_420 & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x13b814c  ItemEnchantableComponent
 */
