/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa6078e0 (ELF vaddr 0xa5078e0)
 * Label: caller-of-callee
 * Body:  [[0a6078e0, 0a6086d7] [0a6086e0, 0a608749] [0a608750, 0a6087b0] [0a6087c0, 0a60883b] [0a608840, 0a608955] [0a608960, 0a608981] [0a608990, 0a608aba] [0a608ac0, 0a608b54] [0a608b60, 0a608b78] [0a608b80, 0a608c15] [0a608c20, 0a608c41] [0a608c50, 0a608db3] [0a608dc0, 0a608e50] [0a608e60, 0a609293] [0a6092a0, 0a6092d4] [0a6092e0, 0a6093b1] [0a6093c0, 0a609438] [0a609440, 0a6094f7] [0a609500, 0a609591] [0a6095a0, 0a609af8] [0a609b00, 0a609c83] [0a609c90, 0a609d81] [0a609d90, 0a609db2] [0a609dc0, 0a609e57] [0a609e60, 0a609f89] [0a609f90, 0a609ffd] [0a60a000, 0a60a098] [0a60a0a0, 0a60a0c8] [0a60a0d0, 0a60a211] [0a60a220, 0a60a280] [0a60a290, 0a60a2b8] [0a60a2c0, 0a60a54a] [0a60a550, 0a60a5a0] [0a60a5b0, 0a60a63a] [0a60a640, 0a60a6eb] [0a60a6f0, 0a60a706] [0a60a710, 0a60a773] [0a60a780, 0a60a7a5] [0a60a7b0, 0a60a7c2] [0a60a7d0, 0a60a997] [0a60a9a0, 0a60b700] [0a60b710, 0a60b940] [0a60b950, 0a60c1ab]]
 * Ghidra: FUN_0a6078e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0a6078e0(long *param_1,long param_2,ushort *param_3,undefined8 param_4)

{
  byte bVar1;
  int *piVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [8];
  ushort *puVar9;
  char cVar10;
  int iVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  undefined4 *puVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  undefined4 *puVar24;
  long lVar25;
  ulong uVar26;
  undefined4 *puVar27;
  ulong uVar28;
  undefined4 *puVar29;
  undefined1 *puVar30;
  uint *puVar31;
  long lVar32;
  uint uVar33;
  long *plVar34;
  long lVar35;
  int *piVar36;
  long *plVar37;
  bool bVar38;
  float fVar39;
  float fVar40;
  undefined1 auStack_4b8 [4];
  undefined2 uStack_4b4;
  undefined2 uStack_4b2;
  uint uStack_4b0;
  uint uStack_4ac;
  undefined8 uStack_4a8;
  ulong uStack_4a0;
  undefined1 auStack_498 [8];
  ulong uStack_490;
  undefined8 *puStack_488;
  long *plStack_480;
  uint uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 *puStack_460;
  undefined8 uStack_458;
  ulong uStack_450;
  long lStack_448;
  long lStack_440;
  undefined1 auStack_438 [8];
  long *plStack_430;
  long *plStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined1 *puStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 *puStack_3f8;
  undefined1 auStack_3f0 [16];
  undefined1 auStack_3e0 [16];
  undefined8 uStack_3d0;
  long *plStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined4 *puStack_2f0;
  undefined1 auStack_2e8 [8];
  long *plStack_2e0;
  long *plStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ushort *puStack_158;
  long *plStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 *puStack_100;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  
  lStack_440 = param_2;
  uStack_130 = param_4;
  if ((DAT_0f670c60 == '\0') && (iVar11 = func_0x04108328(&DAT_0f670c60), iVar11 != 0)) {
    _DAT_0f670c48 = (long *)0x0;
    _DAT_0f670c50 = 0;
    _DAT_0f670c38 = 0;
    _DAT_0f670c40 = 0;
    _DAT_0f670c58 = 0x3f800000;
    func_0x0eee2f40(&UNK_0a6072c0,&DAT_0f670c38,0xf53dab8);
    func_0x0410844d(&DAT_0f670c60);
  }
  puStack_158 = param_3;
  if (_DAT_0f670c50 != 0) goto LAB_0a608695;
  if ((DAT_0f6d72b8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6d72b8), iVar11 != 0)) {
    func_0x0ee25020(0xf6d7290,&UNK_01281248);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d7290,0xf53dab8);
    func_0x0410844d(&DAT_0f6d72b8);
  }
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar12 == (long *)0x0) goto LAB_0a60ba38;
LAB_0a60795c:
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0f232d58;
  plVar12[3] = (long)&UNK_0f232da8;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_310 = (long *)&DAT_0f670c38;
  uStack_308 = (undefined *)0x1;
  *puVar13 = 0;
  puVar13[1] = 0;
  uVar15 = (ulong)(DAT_0f6d7298 >> 1);
  uVar14 = 0xf6d7299;
  if ((DAT_0f6d7298 & 1) != 0) {
    uVar15 = _DAT_0f6d72a0;
    uVar14 = _DAT_0f6d72a8;
  }
  puVar13[2] = uVar14;
  puVar13[3] = uVar15;
  puVar13[4] = plVar12 + 3;
  puVar13[5] = plVar12;
  uStack_318 = puVar13;
  uVar14 = func_0x04883620(auStack_438);
  puVar13[1] = uVar14;
  uVar15 = func_0x0a664520(puVar13);
  if ((uVar15 & 1) == 0) {
    uStack_318 = (undefined8 *)0x0;
    plVar12 = (long *)puVar13[5];
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar22 = plVar12 + 1;
      lVar18 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
      }
    }
    thunk_FUN_0ee326a0(puVar13,0x30);
  }
  if ((DAT_0f6d7198 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6d7198), iVar11 != 0)) {
    func_0x0ee25020(0xf6d7170,&DAT_011fdfc9);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d7170,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7198);
  }
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f232f58;
  puVar13[4] = &UNK_0f233038;
  puVar13[10] = puVar13 + 6;
  puVar13[6] = &UNK_0f232fa8;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_310 = (long *)&DAT_0f670c38;
  uStack_308 = (undefined *)0x1;
  *puVar16 = 0;
  puVar16[1] = 0;
  uVar15 = (ulong)(DAT_0f6d7178 >> 1);
  uVar14 = 0xf6d7179;
  if ((DAT_0f6d7178 & 1) != 0) {
    uVar15 = _DAT_0f6d7180;
    uVar14 = _DAT_0f6d7188;
  }
  puVar16[2] = uVar14;
  puVar16[3] = uVar15;
  puVar16[4] = puVar13 + 4;
  puVar16[5] = puVar13;
  uStack_318 = puVar16;
  uVar14 = func_0x04883620(auStack_438);
  puVar16[1] = uVar14;
  uVar15 = func_0x0a664520(puVar16);
  if ((uVar15 & 1) == 0) {
    uStack_318 = (undefined8 *)0x0;
    plVar12 = (long *)puVar16[5];
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar22 = plVar12 + 1;
      lVar18 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
      }
    }
    thunk_FUN_0ee326a0(puVar16,0x30);
  }
  if ((DAT_0f6d7228 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6d7228), iVar11 != 0)) {
    func_0x0ee25020(0xf6d7200,&DAT_011fdfde);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d7200,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7228);
  }
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f2331f0;
  puVar13[4] = &UNK_0f2332c0;
  puVar13[10] = puVar13 + 6;
  puVar13[6] = &UNK_0f233240;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_310 = (long *)&DAT_0f670c38;
  uStack_308 = (undefined *)0x1;
  *puVar16 = 0;
  puVar16[1] = 0;
  uVar15 = (ulong)(DAT_0f6d7208 >> 1);
  uVar14 = 0xf6d7209;
  if ((DAT_0f6d7208 & 1) != 0) {
    uVar15 = _DAT_0f6d7210;
    uVar14 = _DAT_0f6d7218;
  }
  puVar16[2] = uVar14;
  puVar16[3] = uVar15;
  puVar16[4] = puVar13 + 4;
  puVar16[5] = puVar13;
  uStack_318 = puVar16;
  uVar14 = func_0x04883620(auStack_438);
  puVar16[1] = uVar14;
  uVar15 = func_0x0a664520(puVar16);
  if ((uVar15 & 1) == 0) {
    uStack_318 = (undefined8 *)0x0;
    plVar12 = (long *)puVar16[5];
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar22 = plVar12 + 1;
      lVar18 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
      }
    }
    thunk_FUN_0ee326a0(puVar16,0x30);
  }
  if ((DAT_0f6d7078 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6d7078), iVar11 != 0)) {
    func_0x0ee25020(0xf6d7050,&DAT_012e774f);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d7050,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7078);
  }
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0f233478;
  uStack_318 = plVar12 + 4;
  plVar12[4] = (long)&UNK_0f233548;
  plVar12[10] = (long)(plVar12 + 6);
  plVar12[6] = (long)&UNK_0f2334c8;
  uStack_310 = plVar12;
  func_0x0a66fe40(&DAT_0f6d7058,&uStack_318);
  plVar12 = uStack_310;
  if (uStack_310 != (long *)0x0) {
    LOCK();
    plVar22 = uStack_310 + 1;
    lVar18 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*uStack_310 + 0x10))(uStack_310);
      func_0x0412c2d0(plVar12);
    }
  }
  if ((DAT_0f6d7078 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6d7078), iVar11 != 0)) {
    func_0x0ee25020(0xf6d7050,&DAT_012e774f);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d7050,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7078);
  }
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0f233478;
  uStack_318 = plVar12 + 4;
  plVar12[4] = (long)&UNK_0f233548;
  plVar12[10] = (long)(plVar12 + 6);
  plVar12[6] = (long)&UNK_0f233700;
  uStack_310 = plVar12;
  func_0x0a66fe40(&DAT_0f6d7058,&uStack_318);
  plVar12 = uStack_310;
  if (uStack_310 != (long *)0x0) {
    LOCK();
    plVar22 = uStack_310 + 1;
    lVar18 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*uStack_310 + 0x10))(uStack_310);
      func_0x0412c2d0(plVar12);
    }
  }
  if ((DAT_0f670c88 == '\0') && (iVar11 = func_0x04108328(&DAT_0f670c88), iVar11 != 0)) {
    func_0x0eee2f40(&UNK_0412ed50,&DAT_0f544910,0xf53dab8);
    func_0x0410844d(&DAT_0f670c88);
  }
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f233780;
  puVar13[4] = &UNK_0f233850;
  puVar13[10] = puVar13 + 6;
  puVar13[6] = &UNK_0f2337d0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_310 = (long *)&DAT_0f670c38;
  uStack_308 = (undefined *)0x1;
  *puVar16 = 0;
  puVar16[1] = 0;
  uVar15 = (ulong)(DAT_0f544910 >> 1);
  uVar14 = 0xf544911;
  if ((DAT_0f544910 & 1) != 0) {
    uVar15 = _DAT_0f544918;
    uVar14 = _DAT_0f544920;
  }
  puVar16[2] = uVar14;
  puVar16[3] = uVar15;
  puVar16[4] = puVar13 + 4;
  puVar16[5] = puVar13;
  uStack_318 = puVar16;
  uVar14 = func_0x04883620(auStack_438);
  puVar16[1] = uVar14;
  uVar15 = func_0x0a664520(puVar16);
  if ((uVar15 & 1) == 0) {
    uStack_318 = (undefined8 *)0x0;
    plVar12 = (long *)puVar16[5];
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar22 = plVar12 + 1;
      lVar18 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
      }
    }
    thunk_FUN_0ee326a0(puVar16,0x30);
  }
  if ((DAT_0f6d7048 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6d7048), iVar11 != 0)) {
    func_0x0ee25020(0xf6d7020,&DAT_011fdfb3);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d7020,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7048);
  }
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  *puVar13 = &UNK_0f233a88;
  puVar13[6] = puVar13 + 2;
  puVar13[2] = &UNK_0f233a08;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_310 = (long *)&DAT_0f670c38;
  uStack_308 = (undefined *)0x0;
  *puVar16 = 0;
  puVar16[1] = 0;
  uVar15 = (ulong)(DAT_0f6d7028 >> 1);
  uVar14 = 0xf6d7029;
  if ((DAT_0f6d7028 & 1) != 0) {
    uVar15 = _DAT_0f6d7030;
    uVar14 = _DAT_0f6d7038;
  }
  puVar16[2] = uVar14;
  puVar16[3] = uVar15;
  puVar16[4] = puVar13;
  uStack_318 = puVar16;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar17[1] = 0;
  puVar17[2] = 0;
  *puVar17 = &UNK_0f233c40;
  puVar17[3] = puVar13;
  puVar16[5] = puVar17;
  uStack_308 = (undefined *)CONCAT71(uStack_308._1_7_,1);
  uVar14 = func_0x04883620(auStack_438,uVar14,uVar15);
  puVar16[1] = uVar14;
  uVar15 = func_0x0a664520(puVar16);
  if ((uVar15 & 1) == 0) {
    uStack_318 = (undefined8 *)0x0;
    plVar12 = (long *)puVar16[5];
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar22 = plVar12 + 1;
      lVar18 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
      }
    }
    thunk_FUN_0ee326a0(puVar16,0x30);
  }
  if ((DAT_0f670c80 == '\0') && (iVar11 = func_0x04108328(&DAT_0f670c80), iVar11 != 0)) {
    func_0x0eee2f40(&UNK_0412ed50,&DAT_0f5448f8,0xf53dab8);
    func_0x0410844d(&DAT_0f670c80);
  }
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  *puVar13 = &UNK_0f233d10;
  puVar13[6] = puVar13 + 2;
  puVar13[2] = &UNK_0f233c90;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_310 = (long *)&DAT_0f670c38;
  uStack_308 = (undefined *)0x0;
  *puVar16 = 0;
  puVar16[1] = 0;
  uVar15 = (ulong)(DAT_0f5448f8 >> 1);
  uVar14 = 0xf5448f9;
  if ((DAT_0f5448f8 & 1) != 0) {
    uVar15 = _DAT_0f544900;
    uVar14 = _DAT_0f544908;
  }
  puVar16[2] = uVar14;
  puVar16[3] = uVar15;
  puVar16[4] = puVar13;
  uStack_318 = puVar16;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar17[1] = 0;
  puVar17[2] = 0;
  *puVar17 = &UNK_0f233ec8;
  puVar17[3] = puVar13;
  puVar16[5] = puVar17;
  uStack_308 = (undefined *)CONCAT71(uStack_308._1_7_,1);
  uVar14 = func_0x04883620(auStack_438,uVar14,uVar15);
  puVar16[1] = uVar14;
  uVar15 = func_0x0a664520(puVar16);
  if ((uVar15 & 1) == 0) {
    uStack_318 = (undefined8 *)0x0;
    plVar12 = (long *)puVar16[5];
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar22 = plVar12 + 1;
      lVar18 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
      }
    }
    thunk_FUN_0ee326a0(puVar16,0x30);
  }
  if ((DAT_0f670c30 == '\0') && (iVar11 = func_0x04108328(&DAT_0f670c30), iVar11 != 0)) {
    func_0x04160690(&DAT_0f670c18,&UNK_012e33ce);
    func_0x0eee2f40(&UNK_0412ed50,&DAT_0f670c18,0xf53dab8);
    func_0x0410844d(&DAT_0f670c30);
  }
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  *puVar13 = &UNK_0f233f98;
  puVar13[6] = puVar13 + 2;
  puVar13[2] = &UNK_0f233f18;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_310 = (long *)&DAT_0f670c38;
  uStack_308 = (undefined *)0x0;
  *puVar16 = 0;
  puVar16[1] = 0;
  uVar15 = (ulong)(DAT_0f670c18 >> 1);
  uVar14 = 0xf670c19;
  if ((DAT_0f670c18 & 1) != 0) {
    uVar15 = _DAT_0f670c20;
    uVar14 = _DAT_0f670c28;
  }
  puVar16[2] = uVar14;
  puVar16[3] = uVar15;
  puVar16[4] = puVar13;
  uStack_318 = puVar16;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar17[1] = 0;
  puVar17[2] = 0;
  *puVar17 = &UNK_0f234150;
  puVar17[3] = puVar13;
  puVar16[5] = puVar17;
  uStack_308 = (undefined *)CONCAT71(uStack_308._1_7_,1);
  uVar14 = func_0x04883620(auStack_438,uVar14,uVar15);
  puVar16[1] = uVar14;
  uVar15 = func_0x0a664520(puVar16);
  if ((uVar15 & 1) == 0) {
    uStack_318 = (undefined8 *)0x0;
    plVar12 = (long *)puVar16[5];
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar22 = plVar12 + 1;
      lVar18 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
      }
    }
    thunk_FUN_0ee326a0(puVar16,0x30);
  }
  if ((DAT_0f6d71f8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6d71f8), iVar11 != 0)) {
    func_0x0ee25020(0xf6d71d0,&DAT_013865a3);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d71d0,0xf53dab8);
    func_0x0410844d(&DAT_0f6d71f8);
  }
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f2341a0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_310 = (long *)&DAT_0f670c38;
  uStack_308 = (undefined *)0x0;
  *puVar16 = 0;
  puVar16[1] = 0;
  uVar15 = (ulong)(DAT_0f6d71d8 >> 1);
  uVar14 = 0xf6d71d9;
  if ((DAT_0f6d71d8 & 1) != 0) {
    uVar15 = _DAT_0f6d71e0;
    uVar14 = _DAT_0f6d71e8;
  }
  puVar16[2] = uVar14;
  puVar16[3] = uVar15;
  puVar16[4] = puVar13;
  uStack_318 = puVar16;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar17[1] = 0;
  puVar17[2] = 0;
  *puVar17 = &UNK_0f234340;
  puVar17[3] = puVar13;
  puVar16[5] = puVar17;
  uStack_308 = (undefined *)CONCAT71(uStack_308._1_7_,1);
  uVar14 = func_0x04883620(auStack_438,uVar14,uVar15);
  puVar16[1] = uVar14;
  uVar15 = func_0x0a664520(puVar16);
  if ((uVar15 & 1) == 0) {
    uStack_318 = (undefined8 *)0x0;
    plVar12 = (long *)puVar16[5];
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar22 = plVar12 + 1;
      lVar18 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
      }
    }
    thunk_FUN_0ee326a0(puVar16,0x30);
  }
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  *puVar13 = &UNK_0f234410;
  puVar13[6] = puVar13 + 2;
  puVar13[2] = &UNK_0f234390;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_310 = (long *)&DAT_0f670c38;
  uStack_308 = (undefined *)0x0;
  *plVar12 = 0;
  plVar12[1] = 0;
  plVar12[2] = (long)&UNK_01abb0d9;
  plVar12[3] = 0xe;
  plVar12[4] = (long)puVar13;
  uStack_318 = plVar12;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0f2345c8;
  puVar16[3] = puVar13;
  plVar12[5] = (long)puVar16;
  uStack_308 = (undefined *)CONCAT71(uStack_308._1_7_,1);
  plVar12[1] = 0x2036aa37afb3e2b6;
  uVar15 = func_0x0a664520(plVar12);
  param_3 = puStack_158;
  if ((uVar15 & 1) == 0) {
    uStack_318 = (long *)0x0;
    plVar22 = (long *)plVar12[5];
    if (plVar22 != (long *)0x0) {
      LOCK();
      plVar21 = plVar22 + 1;
      lVar18 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        func_0x0412c2d0(plVar22);
      }
    }
    thunk_FUN_0ee326a0(plVar12,0x30);
  }
LAB_0a608695:
  if (_DAT_0f670c48 != (long *)0x0) {
    lStack_140 = (long)param_3 + 9;
    plStack_150 = param_1 + 2;
    lStack_148 = lStack_440 + 0x70;
    plVar22 = _DAT_0f670c48;
    do {
      (**(code **)(*(long *)plVar22[4] + 0x18))(&puStack_330);
      puStack_138 = puStack_328;
      if (puStack_330 != puStack_328) {
        uStack_478 = 0;
        puVar13 = puStack_330;
        plStack_480 = plVar22;
LAB_0a608789:
        puVar29 = (undefined4 *)*puVar13;
        puVar20 = (undefined4 *)puVar13[1];
        puVar16 = puVar13;
        if (puVar29 != puVar20) {
          lVar18 = 0;
          do {
            if (*(short *)(puVar29 + 2) == 0) {
              if ((*(byte *)(puVar29 + 4) & 1) == 0) {
                if (*(byte *)(puVar29 + 4) >> 1 != 0) goto LAB_0a6087fa;
                puVar16 = (undefined8 *)0x0;
              }
              else {
                if (*(long *)(puVar29 + 6) != 0) goto LAB_0a6087fa;
                puVar16 = (undefined8 *)0x0;
              }
            }
            else {
LAB_0a6087fa:
              if (lVar18 == 0) {
                plVar12 = (long *)plVar22[3];
                if ((long *)0xfffffffffffffff7 < plVar12) {
                  func_0x04882e30();
                  goto LAB_0a60b9e6;
                }
                lVar18 = plVar22[2];
                if (plVar12 < (long *)0x17) {
                  uStack_318 = (long *)CONCAT71(uStack_318._1_7_,(char)plVar12 * '\x02');
                  lVar25 = (long)&uStack_318 + 1;
                  if (plVar12 != (long *)0x0) goto LAB_0a6088b5;
                }
                else {
                  uVar15 = ((ulong)plVar12 | 7) + 1;
                  if (((ulong)plVar12 | 7) == 0x17) {
                    uVar15 = 0x1a;
                  }
                  lVar25 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
                  if (lVar25 == 0) {
                    func_0x0eec74c0(uVar15,0);
                  }
                  uStack_318 = (long *)(uVar15 | 1);
                  plVar22 = plStack_480;
                  uStack_310 = plVar12;
                  uStack_308 = (undefined *)lVar25;
LAB_0a6088b5:
                  func_0x0eee2ee0(lVar25,lVar18,plVar12);
                }
                *(undefined1 *)(lVar25 + (long)plVar12) = 0;
                lVar18 = func_0x08e93510(uStack_130,puVar13 + 3,&uStack_318);
                if (((ulong)uStack_318 & 1) != 0) {
                  thunk_FUN_0ee326a0(uStack_308,(ulong)uStack_318 & 0xfffffffffffffffe);
                }
              }
              puVar24 = *(undefined4 **)(lVar18 + 8);
              if (puVar24 < *(undefined4 **)(lVar18 + 0x10)) {
                *puVar24 = *puVar29;
                *(undefined2 *)(puVar24 + 3) = *(undefined2 *)(puVar29 + 3);
                puVar24[2] = puVar29[2];
                if ((*(byte *)(puVar29 + 4) & 1) == 0) {
                  *(undefined8 *)(puVar24 + 8) = *(undefined8 *)(puVar29 + 8);
                  uVar4 = puVar29[5];
                  uVar5 = puVar29[6];
                  uVar6 = puVar29[7];
                  puVar24[4] = puVar29[4];
                  puVar24[5] = uVar4;
                  puVar24[6] = uVar5;
                  puVar24[7] = uVar6;
                }
                else {
                  FUN_0412e5e0(puVar24 + 4,*(undefined8 *)(puVar29 + 8),*(undefined8 *)(puVar29 + 6)
                              );
                }
                puVar16 = (undefined8 *)(ulong)(uint)puVar29[10];
                puVar24[10] = puVar29[10];
                *(undefined4 **)(lVar18 + 8) = puVar24 + 0xc;
                puVar17 = (undefined8 *)(puVar24 + 0xc);
              }
              else {
                puVar16 = (undefined8 *)func_0x08dba070(lVar18,puVar29);
                puVar17 = puVar16;
              }
              *(undefined8 **)(lVar18 + 8) = puVar17;
            }
            puVar29 = puVar29 + 0xc;
          } while (puVar29 != puVar20);
        }
        uVar33 = uStack_478 & 1;
        uStack_478 = (uint)CONCAT71((int7)((ulong)puVar16 >> 8),1);
        if (uVar33 == 0) {
          lVar18 = plVar22[2];
          lVar25 = plVar22[3];
          plVar12 = (long *)plVar22[5];
          uStack_478 = (uint)plVar22[4];
          uStack_474 = *(undefined4 *)((long)plVar22 + 0x24);
          uStack_470 = (undefined4)plVar22[5];
          uStack_46c = *(undefined4 *)((long)plVar22 + 0x2c);
          if (plVar12 != (long *)0x0) {
            LOCK();
            plVar12[1] = plVar12[1] + 1;
            UNLOCK();
          }
          uVar19 = func_0x04883620(&uStack_318,lVar18,lVar25);
          uVar15 = param_1[1];
          if (uVar15 != 0) {
            uVar26 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
            uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
            uVar26 = ((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            if (uVar26 >> 0x38 < 2) {
              uVar28 = uVar15 - 1 & uVar19;
            }
            else {
              uVar28 = uVar19;
              if (uVar15 <= uVar19) {
                if ((uVar19 | uVar15) >> 0x20 == 0) {
                  uVar28 = (uVar19 & 0xffffffff) % (uVar15 & 0xffffffff);
                }
                else {
                  uVar28 = uVar19 % uVar15;
                }
              }
            }
            plVar22 = *(long **)(*param_1 + uVar28 * 8);
            if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
              if ((byte)(uVar26 >> 0x38) < 2) {
                do {
                  if (plVar22[1] == uVar19) {
                    if ((plVar22[3] == lVar25) &&
                       (iVar11 = func_0x0eee3000(plVar22[2],lVar18,lVar25), iVar11 == 0))
                    goto LAB_0a608afb;
                  }
                  else if ((plVar22[1] & uVar15 - 1) != uVar28) break;
                  plVar22 = (long *)*plVar22;
                } while (plVar22 != (long *)0x0);
              }
              else {
                do {
                  uVar26 = plVar22[1];
                  if (uVar26 == uVar19) {
                    if ((plVar22[3] == lVar25) &&
                       (iVar11 = func_0x0eee3000(plVar22[2],lVar18,lVar25), iVar11 == 0))
                    goto LAB_0a608afb;
                  }
                  else {
                    if (uVar15 <= uVar26) {
                      if ((uVar26 | uVar15) >> 0x20 == 0) {
                        uVar26 = (uVar26 & 0xffffffff) % (uVar15 & 0xffffffff);
                      }
                      else {
                        uVar26 = uVar26 % uVar15;
                      }
                    }
                    if (uVar26 != uVar28) break;
                  }
                  plVar22 = (long *)*plVar22;
                } while (plVar22 != (long *)0x0);
              }
            }
          }
          puVar9 = puStack_158;
          plVar22 = plStack_480;
          piVar2 = (int *)puVar13[1];
          for (piVar36 = (int *)*puVar13; piVar36 != piVar2; piVar36 = piVar36 + 0xc) {
            iVar11 = *piVar36;
            if (iVar11 == 2) {
              if (((byte)puVar9[4] & 1) == 0) {
                if ((byte)((byte)puVar9[4] >> 1) == 0) goto LAB_0a608cbe;
              }
              else if (*(long *)(puVar9 + 8) == 0) goto LAB_0a608cbe;
            }
            else {
              if (iVar11 != 1) {
                if (((iVar11 == 0) && (cVar10 = func_0x0d822d70(puVar9,piVar36 + 2), cVar10 == '\0')
                    ) && ((*(char *)((long)piVar36 + 0x2a) != '\x01' ||
                          (*puVar9 < *(ushort *)(piVar36 + 10))))) goto LAB_0a608cbe;
                goto LAB_0a608bd0;
              }
              bVar1 = (byte)puVar9[4];
              if ((bVar1 & 1) == 0) {
                uVar15 = (ulong)(bVar1 >> 1);
                uVar19 = (ulong)*(byte *)(piVar36 + 4);
                if ((*(byte *)(piVar36 + 4) & 1) == 0) goto LAB_0a608c37;
LAB_0a608c78:
                if (uVar15 != *(ulong *)(piVar36 + 6)) goto LAB_0a608bd0;
              }
              else {
                uVar15 = *(ulong *)(puVar9 + 8);
                uVar19 = (ulong)*(byte *)(piVar36 + 4);
                if ((*(byte *)(piVar36 + 4) & 1) != 0) goto LAB_0a608c78;
LAB_0a608c37:
                if (uVar15 != uVar19 >> 1) goto LAB_0a608bd0;
              }
              lVar35 = lStack_140;
              if ((bVar1 & 1) != 0) {
                lVar35 = *(long *)(puVar9 + 0xc);
              }
              if ((uVar19 & 1) == 0) {
                iVar11 = func_0x0eee3000(lVar35,(long)piVar36 + 0x11);
              }
              else {
                iVar11 = func_0x0eee3000(lVar35,*(undefined8 *)(piVar36 + 8));
              }
              if (iVar11 == 0) {
LAB_0a608cbe:
                puVar20 = (undefined4 *)func_0x04883620(&uStack_318,lVar18,lVar25);
                puVar29 = (undefined4 *)param_1[1];
                if (puVar29 == (undefined4 *)0x0) goto LAB_0a608e7e;
                uVar15 = (long)puVar29 - ((ulong)puVar29 >> 1 & 0x5555555555555555);
                uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
                uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
                if (uVar15 >> 0x38 < 2) {
                  puVar24 = (undefined4 *)((long)puVar29 - 1U & (ulong)puVar20);
                }
                else {
                  puVar24 = puVar20;
                  if (puVar29 <= puVar20) {
                    if (((ulong)puVar20 | (ulong)puVar29) >> 0x20 == 0) {
                      puVar24 = (undefined4 *)
                                (((ulong)puVar20 & 0xffffffff) % ((ulong)puVar29 & 0xffffffff));
                    }
                    else {
                      puVar24 = (undefined4 *)((ulong)puVar20 % (ulong)puVar29);
                    }
                  }
                }
                plVar22 = *(long **)(*param_1 + (long)puVar24 * 8);
                uStack_168 = puVar24;
                if ((plVar22 == (long *)0x0) || (plVar22 = (long *)*plVar22, plVar22 == (long *)0x0)
                   ) goto LAB_0a608e7e;
                if (1 < (byte)(uVar15 >> 0x38)) goto LAB_0a608e22;
                goto LAB_0a608dd8;
              }
            }
LAB_0a608bd0:
          }
          uStack_478 = 0;
          if (plVar12 == (long *)0x0) goto LAB_0a6091a0;
          goto LAB_0a60917a;
        }
        goto LAB_0a6091a0;
      }
LAB_0a60a9a8:
      puVar13 = puStack_330;
      if (puStack_330 != (undefined8 *)0x0) {
        while (puVar13 != puStack_328) {
          func_0x0651ffe0(puStack_328 + -0x1e);
          puStack_328 = puStack_328 + -0x1e;
        }
        puStack_328 = puVar13;
        thunk_FUN_0ee326a0(puStack_330,lStack_320 - (long)puStack_330);
      }
      plVar22 = (long *)*plVar22;
    } while (plVar22 != (long *)0x0);
  }
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar13 == (undefined8 *)0x0) {
LAB_0a60b9eb:
    func_0x0eec74c0(0x20,0);
  }
  uVar14 = _UNK_011deaf0;
  auStack_498 = (undefined1  [8])0x21;
  uStack_490 = 0x1b;
  *(ulong *)((long)puVar13 + 0xb) = CONCAT35(_UNK_011deaed,_DAT_011deae8);
  *(undefined8 *)((long)puVar13 + 0x13) = uVar14;
  uVar14 = CONCAT53(_DAT_011deae8,_UNK_011deae5);
  *puVar13 = _DAT_011deadd;
  puVar13[1] = uVar14;
  *(undefined1 *)((long)puVar13 + 0x1b) = 0;
  uStack_408 = (undefined *)0x0;
  uStack_400 = (long *)0x0;
  uStack_418 = (long *)0x0;
  puStack_410 = (undefined1 *)0x0;
  plStack_428 = (long *)0x0;
  uStack_420 = (long *)0x0;
  auStack_438 = (undefined1  [8])0x0;
  plStack_430 = (long *)0x0;
  puStack_3f8 = (undefined8 *)0x0;
  puStack_488 = puVar13;
  func_0x048b1dc0(auStack_3f0);
  func_0x048b1dc0(auStack_3e0);
  uStack_340 = 0;
  uStack_338 = 0;
  uStack_350 = 0;
  uStack_348 = 0;
  uStack_360 = 0;
  uStack_358 = 0;
  uStack_370 = 0;
  uStack_368 = 0;
  uStack_380 = 0;
  uStack_378 = 0;
  uStack_390 = 0;
  uStack_388 = 0;
  uStack_3a0 = 0;
  uStack_398 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  uStack_3d0 = 0;
  plStack_3c8 = (long *)0x0;
  if (((ulong)uStack_408 & 1) == 0) {
    if (((ulong)auStack_498 & 1) == 0) {
      puStack_3f8 = puStack_488;
      uStack_408 = (undefined *)auStack_498;
      uStack_400 = (long *)uStack_490;
    }
    else {
      func_0x04885070(&uStack_408,puStack_488,uStack_490);
    }
  }
  else {
    uVar15 = (ulong)auStack_498 >> 1 & 0x7f;
    puVar13 = (undefined8 *)(auStack_498 + 1);
    if (((ulong)auStack_498 & 1) != 0) {
      uVar15 = uStack_490;
      puVar13 = puStack_488;
    }
    func_0x04885120(&uStack_408,puVar13,uVar15);
  }
  if (_DAT_0f54fd90 == (long *)0x0) {
    func_0x048b0de0(&uStack_318,auStack_4b8);
    plVar22 = uStack_310;
    _DAT_0f54fd90 = uStack_318;
    plVar12 = _DAT_0f54fd98;
    uStack_318 = (long *)0x0;
    uStack_310 = (long *)0x0;
    if (_DAT_0f54fd98 != (long *)0x0) {
      LOCK();
      plVar21 = _DAT_0f54fd98 + 1;
      lVar18 = *plVar21;
      _DAT_0f54fd98 = plVar22;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      plVar22 = _DAT_0f54fd98;
      if (lVar18 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
        plVar22 = _DAT_0f54fd98;
      }
    }
    _DAT_0f54fd98 = plVar22;
    plVar12 = uStack_310;
    if (uStack_310 != (long *)0x0) {
      LOCK();
      plVar22 = uStack_310 + 1;
      lVar18 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*uStack_310 + 0x10))(uStack_310);
        func_0x0412c2d0(plVar12);
      }
    }
  }
  plVar12 = _DAT_0f54fd90;
  if ((DAT_0f674588 == '\0') && (iVar11 = func_0x04108328(&DAT_0f674588), iVar11 != 0)) {
    func_0x0a68b9c0();
    func_0x0410844d(&DAT_0f674588);
  }
  if ((DAT_0f674588 == '\0') && (iVar11 = func_0x04108328(&DAT_0f674588), iVar11 != 0)) {
    func_0x0a68b9c0();
    func_0x0410844d(&DAT_0f674588);
  }
  uStack_318 = (long *)&DAT_0f674570;
  uStack_310 = (long *)CONCAT44(uStack_310._4_4_,_DAT_0f674574);
  uStack_308 = (undefined *)0x0;
  uStack_300 = CONCAT44(uStack_300._4_4_,0x80);
  uStack_2f8 = 0x90;
  puStack_2f0 = (undefined4 *)&UNK_0a68bb90;
  auStack_2e8 = (undefined1  [8])0x0;
  plStack_2e0 = (long *)0x0;
  plStack_2d8 = (long *)&UNK_0a68bd50;
  uStack_2d0 = 0;
  uStack_2c8._0_4_ = 0;
  uStack_2c8._4_4_ = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  plStack_2a8 = (long *)0x0;
  lStack_2a0 = 0;
  FUN_048aee30(auStack_4b8,plVar12,&uStack_318,0xd105b4e5);
  lVar18 = lStack_2a0;
  lStack_2a0 = 0;
  if (lVar18 != 0) {
    func_0x048ae940(lVar18);
    thunk_FUN_0ee326a0(lVar18,0x78);
  }
  plVar12 = plStack_2a8;
  if (plStack_2a8 != (long *)0x0) {
    LOCK();
    plVar22 = plStack_2a8 + 1;
    lVar18 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_2a8 + 0x10))(plStack_2a8);
      func_0x0412c2d0(plVar12);
    }
  }
  if ((DAT_0f642200 == '\0') && (iVar11 = func_0x04108328(&DAT_0f642200), iVar11 != 0)) {
    func_0x099efc30(0xf6421e8);
    func_0x0410844d(&DAT_0f642200);
  }
  uStack_318._0_4_ = _DAT_0f6421ec;
  uStack_310 = (long *)&SUB_099efa50;
  uStack_308 = &UNK_0a6920d0;
  func_0x05da1460(auStack_4b8);
  if (_DAT_0f54fd90 == (long *)0x0) {
    func_0x048b0de0(&uStack_318,auStack_4b8);
    plVar22 = uStack_310;
    uVar5 = uStack_318._4_4_;
    uVar4 = (undefined4)uStack_318;
    plVar12 = _DAT_0f54fd98;
    uStack_318._0_4_ = 0;
    uStack_318._4_4_ = 0;
    uStack_310 = (long *)0x0;
    _DAT_0f54fd90 = (long *)CONCAT44(uVar5,uVar4);
    if (_DAT_0f54fd98 != (long *)0x0) {
      LOCK();
      plVar21 = _DAT_0f54fd98 + 1;
      lVar18 = *plVar21;
      _DAT_0f54fd98 = plVar22;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      plVar22 = _DAT_0f54fd98;
      if (lVar18 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
        plVar22 = _DAT_0f54fd98;
      }
    }
    _DAT_0f54fd98 = plVar22;
    plVar12 = uStack_310;
    if (uStack_310 != (long *)0x0) {
      LOCK();
      plVar22 = uStack_310 + 1;
      lVar18 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*uStack_310 + 0x10))(uStack_310);
        func_0x0412c2d0(plVar12);
      }
    }
  }
  plVar12 = _DAT_0f54fd90;
  if ((DAT_0f6747b0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6747b0), iVar11 != 0)) {
    func_0x0a68d240();
    func_0x0410844d(&DAT_0f6747b0);
  }
  if ((DAT_0f6747b0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6747b0), iVar11 != 0)) {
    func_0x0a68d240();
    func_0x0410844d(&DAT_0f6747b0);
  }
  uStack_318 = (long *)&DAT_0f674798;
  uStack_310 = (long *)CONCAT44(uStack_310._4_4_,_DAT_0f67479c);
  uStack_308 = (undefined *)0x0;
  uStack_300 = CONCAT44(uStack_300._4_4_,0x280);
  uStack_2f8 = 0x20;
  puStack_2f0 = (undefined4 *)&UNK_0a68d2c0;
  auStack_2e8 = (undefined1  [8])0x0;
  plStack_2e0 = (long *)0x0;
  plStack_2d8 = (long *)&UNK_0a68d4a0;
  uStack_2d0 = 1;
  uStack_2c8._0_4_ = 0x65b1ed0;
  uStack_2c8._4_4_ = 0;
  uStack_2c0 = 0xa68d530;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  plStack_2a8 = (long *)0x0;
  lStack_2a0 = 0;
  FUN_048aee30(auStack_4b8,plVar12,&uStack_318,0x936b4768);
  lVar18 = lStack_2a0;
  lStack_2a0 = 0;
  if (lVar18 != 0) {
    func_0x048ae940(lVar18);
    thunk_FUN_0ee326a0(lVar18,0x78);
  }
  plVar12 = plStack_2a8;
  if (plStack_2a8 != (long *)0x0) {
    LOCK();
    plVar22 = plStack_2a8 + 1;
    lVar18 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_2a8 + 0x10))(plStack_2a8);
      func_0x0412c2d0(plVar12);
    }
  }
  if ((DAT_0f6784f0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6784f0), iVar11 != 0)) {
    func_0x0a63af90(0xf6784d8);
    func_0x0410844d(&DAT_0f6784f0);
  }
  func_0x065ac270(auStack_4b8,_DAT_0f6784dc,&UNK_0a6920e0);
  if (_DAT_0f54fd90 == (long *)0x0) {
    func_0x048b0de0(&uStack_318,auStack_4b8);
    plVar22 = uStack_310;
    _DAT_0f54fd90 = uStack_318;
    plVar12 = _DAT_0f54fd98;
    uStack_318 = (long *)0x0;
    uStack_310 = (long *)0x0;
    if (_DAT_0f54fd98 != (long *)0x0) {
      LOCK();
      plVar21 = _DAT_0f54fd98 + 1;
      lVar18 = *plVar21;
      _DAT_0f54fd98 = plVar22;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      plVar22 = _DAT_0f54fd98;
      if (lVar18 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
        plVar22 = _DAT_0f54fd98;
      }
    }
    _DAT_0f54fd98 = plVar22;
    plVar12 = uStack_310;
    if (uStack_310 != (long *)0x0) {
      LOCK();
      plVar22 = uStack_310 + 1;
      lVar18 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*uStack_310 + 0x10))(uStack_310);
        func_0x0412c2d0(plVar12);
      }
    }
  }
  plVar12 = _DAT_0f54fd90;
  if ((DAT_0f6746f8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6746f8), iVar11 != 0)) {
    func_0x0a68c7e0();
    func_0x0410844d(&DAT_0f6746f8);
  }
  if ((DAT_0f6746f8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6746f8), iVar11 != 0)) {
    func_0x0a68c7e0();
    func_0x0410844d(&DAT_0f6746f8);
  }
  uStack_318 = (long *)&DAT_0f6746e0;
  uStack_310 = (long *)CONCAT44(uStack_310._4_4_,_DAT_0f6746e4);
  uStack_308 = (undefined *)0x0;
  uStack_300 = CONCAT44(uStack_300._4_4_,0x280);
  uStack_2f8 = 0x20;
  puStack_2f0 = (undefined4 *)&UNK_0a68c860;
  auStack_2e8 = (undefined1  [8])&UNK_0a68ca50;
  plStack_2e0 = (long *)0x0;
  plStack_2d8 = (long *)&UNK_0a68caf0;
  uStack_2d0 = 1;
  uStack_2c8._0_4_ = 0x65bd0c0;
  uStack_2c8._4_4_ = 0;
  uStack_2c0 = 0xa68cb80;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  plStack_2a8 = (long *)0x0;
  lStack_2a0 = 0;
  FUN_048aee30(auStack_4b8,plVar12,&uStack_318,0x1169ebfd);
  lVar18 = lStack_2a0;
  lStack_2a0 = 0;
  if (lVar18 != 0) {
    func_0x048ae940(lVar18);
    thunk_FUN_0ee326a0(lVar18,0x78);
  }
  plVar12 = plStack_2a8;
  if (plStack_2a8 != (long *)0x0) {
    LOCK();
    plVar22 = plStack_2a8 + 1;
    lVar18 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_2a8 + 0x10))(plStack_2a8);
      func_0x0412c2d0(plVar12);
    }
  }
  if ((DAT_0f671a00 == '\0') && (iVar11 = func_0x04108328(&DAT_0f671a00), iVar11 != 0)) {
    func_0x0a63c180();
    func_0x0410844d(&DAT_0f671a00);
  }
  func_0x065ac270(auStack_4b8,_DAT_0f6719ec,&UNK_0a6921d0);
  if (_DAT_0f54fd90 == (long *)0x0) {
    func_0x048b0de0(&uStack_318,auStack_4b8);
    plVar22 = uStack_310;
    _DAT_0f54fd90 = uStack_318;
    plVar12 = _DAT_0f54fd98;
    uStack_318 = (long *)0x0;
    uStack_310 = (long *)0x0;
    if (_DAT_0f54fd98 != (long *)0x0) {
      LOCK();
      plVar21 = _DAT_0f54fd98 + 1;
      lVar18 = *plVar21;
      _DAT_0f54fd98 = plVar22;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      plVar22 = _DAT_0f54fd98;
      if (lVar18 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
        plVar22 = _DAT_0f54fd98;
      }
    }
    _DAT_0f54fd98 = plVar22;
    plVar12 = uStack_310;
    if (uStack_310 != (long *)0x0) {
      LOCK();
      plVar22 = uStack_310 + 1;
      lVar18 = *plVar22;
      *plVar22 = *plVar22 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*uStack_310 + 0x10))(uStack_310);
        func_0x0412c2d0(plVar12);
      }
    }
  }
  plVar12 = _DAT_0f54fd90;
  if ((DAT_0f674640 == '\0') && (iVar11 = func_0x04108328(&DAT_0f674640), iVar11 != 0)) {
    func_0x0a68c020();
    func_0x0410844d(&DAT_0f674640);
  }
  if ((DAT_0f674640 == '\0') && (iVar11 = func_0x04108328(&DAT_0f674640), iVar11 != 0)) {
    func_0x0a68c020();
    func_0x0410844d(&DAT_0f674640);
  }
  uStack_318 = (long *)&DAT_0f674628;
  uStack_310 = (long *)CONCAT44(uStack_310._4_4_,_DAT_0f67462c);
  uStack_308 = (undefined *)0x0;
  uStack_300 = CONCAT44(uStack_300._4_4_,0x280);
  uStack_2f8 = 0x10;
  puStack_2f0 = (undefined4 *)&UNK_0a68c0a0;
  auStack_2e8 = (undefined1  [8])&UNK_0a68c290;
  plStack_2e0 = (long *)0x0;
  plStack_2d8 = (long *)&UNK_0a68c2e0;
  uStack_2d0 = 1;
  uStack_2c8._0_4_ = 0x65bc1f0;
  uStack_2c8._4_4_ = 0;
  uStack_2c0 = 0xa68c390;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  plStack_2a8 = (long *)0x0;
  lStack_2a0 = 0;
  FUN_048aee30(auStack_4b8,plVar12,&uStack_318,0xfc2000bd);
  lVar18 = lStack_2a0;
  lStack_2a0 = 0;
  if (lVar18 != 0) {
    func_0x048ae940(lVar18);
    thunk_FUN_0ee326a0(lVar18,0x78);
  }
  plVar12 = plStack_2a8;
  if (plStack_2a8 != (long *)0x0) {
    LOCK();
    plVar22 = plStack_2a8 + 1;
    lVar18 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_2a8 + 0x10))(plStack_2a8);
      func_0x0412c2d0(plVar12);
    }
  }
  if ((DAT_0f671b70 == '\0') && (iVar11 = func_0x04108328(&DAT_0f671b70), iVar11 != 0)) {
    func_0x0a63cf80();
    func_0x0410844d(&DAT_0f671b70);
  }
  func_0x065ac270(auStack_4b8,_DAT_0f671b5c,&UNK_0a6922a0);
  auStack_3e0 = func_0x099ef990();
  uStack_4a8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (uStack_4a8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar14 = _UNK_011a553d;
  auStack_4b8 = (undefined1  [4])0x21;
  uStack_4b4 = 0;
  uStack_4b2 = 0;
  uStack_4b0 = 0x19;
  uStack_4ac = 0;
  *(ulong *)((long)uStack_4a8 + 9) = CONCAT17(UNK_011a553c,CONCAT43(_UNK_011a5538,_DAT_011a5535));
  *(undefined8 *)((long)uStack_4a8 + 0x11) = uVar14;
  uVar6 = _UNK_011a5538;
  uVar5 = _UNK_011a5534;
  uVar4 = _UNK_011a5530;
  *uStack_4a8 = _DAT_011a552c;
  uStack_4a8[1] = uVar4;
  uStack_4a8[2] = uVar5;
  uStack_4a8[3] = uVar6;
  *(undefined1 *)((long)uStack_4a8 + 0x19) = 0;
  func_0x065af670(&uStack_318);
  if ((uStack_300 & 1) == 0) {
    if (((uint)auStack_4b8 & 1) == 0) {
      puStack_2f0 = uStack_4a8;
      uStack_300 = CONCAT44(CONCAT22(uStack_4b2,uStack_4b4),auStack_4b8);
      uStack_2f8 = CONCAT44(uStack_4ac,uStack_4b0);
    }
    else {
      func_0x04885070(&uStack_300,uStack_4a8,CONCAT44(uStack_4ac,uStack_4b0));
    }
  }
  else {
    bVar38 = ((uint)auStack_4b8 & 1) != 0;
    puVar29 = (undefined4 *)(auStack_4b8 + 1);
    if (bVar38) {
      puVar29 = uStack_4a8;
    }
    uVar15 = (ulong)(auStack_4b8[0] >> 1);
    if (bVar38) {
      uVar15 = CONCAT44(uStack_4ac,uStack_4b0);
    }
    func_0x04885120(&uStack_300,puVar29,uVar15);
  }
  _auStack_2e8 = func_0x08de4090();
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f234c68;
  uStack_2c8 = puVar13 + 3;
  *(undefined1 *)(puVar13 + 4) = 1;
  puVar13[5] = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[3] = &UNK_0f234cb8;
  plVar12 = (long *)CONCAT44(uStack_2bc,uStack_2c0);
  uStack_2c0 = SUB84(puVar13,0);
  uStack_2bc = (undefined4)((ulong)puVar13 >> 0x20);
  if (plVar12 == (long *)0x0) {
LAB_0a60b518:
    if (uStack_380 <= uStack_388) {
LAB_0a60b567:
      lVar18 = func_0x065b01f0(&uStack_390,&uStack_318);
      goto LAB_0a60b57f;
    }
  }
  else {
    LOCK();
    plVar22 = plVar12 + 1;
    lVar18 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar18 != 0) goto LAB_0a60b518;
    (**(code **)(*plVar12 + 0x10))(plVar12);
    func_0x0412c2d0(plVar12);
    if (uStack_380 <= uStack_388) goto LAB_0a60b567;
  }
  uVar15 = uStack_388;
  func_0x065b0410(uStack_388,&uStack_318);
  lVar18 = uVar15 + 0x1b0;
LAB_0a60b57f:
  uStack_388 = lVar18;
  func_0x0652dc20(&uStack_318);
  uStack_318._0_6_ = CONCAT24(_DAT_0f642344,_DAT_0f642340);
  if ((_DAT_0f642348 & 1) == 0) {
    uStack_300 = _DAT_0f642358;
    uStack_310 = (long *)CONCAT44(uRam000000000f64234c,_DAT_0f642348);
    uStack_308 = (undefined *)CONCAT44(uRam000000000f642354,_DAT_0f642350);
  }
  else {
    FUN_0412e5e0(&uStack_310,_DAT_0f642358,CONCAT44(uRam000000000f642354,_DAT_0f642350));
  }
  func_0x0730fa70(lVar18 + -0x1b0,&uStack_318,0);
  if (((ulong)uStack_310 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_300,(ulong)uStack_310 & 0xfffffffffffffffe);
  }
  if (((uint)auStack_4b8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_4a8,
                       CONCAT26(uStack_4b2,CONCAT24(uStack_4b4,auStack_4b8)) & 0xfffffffffffffffe);
  }
  auStack_4b8 = (undefined1  [4])_DAT_0f642340;
  uStack_4b4 = _DAT_0f642344;
  if ((_DAT_0f642348 & 1) == 0) {
    uStack_4a0 = _DAT_0f642358;
    uStack_4b0 = _DAT_0f642348;
    uStack_4ac = uRam000000000f64234c;
    uStack_4a8 = (undefined4 *)CONCAT44(uRam000000000f642354,_DAT_0f642350);
  }
  else {
    FUN_0412e5e0(&uStack_4b0,_DAT_0f642358,CONCAT44(uRam000000000f642354,_DAT_0f642350));
  }
  func_0x0730fa70(auStack_438,auStack_4b8,0);
  if ((uStack_4b0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_4a0,CONCAT44(uStack_4ac,uStack_4b0) & 0xfffffffffffffffe);
  }
  auStack_3f0 = func_0x0a68d6f0();
  lVar25 = (long)uStack_420;
  lVar18 = (long)uStack_418;
  if (uStack_420 != (long *)0x0) {
    for (; lVar25 != lVar18; lVar18 = lVar18 + -0x30) {
      if ((*(byte *)(lVar18 + -0x20) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(lVar18 + -0x10),
                           *(ulong *)(lVar18 + -0x20) & 0xfffffffffffffffe);
      }
    }
    uStack_418 = (long *)lVar25;
    thunk_FUN_0ee326a0(uStack_420,(long)puStack_410 - (long)uStack_420);
  }
  uStack_118 = plStack_428;
  uStack_120 = (undefined4 **)plStack_430;
  uStack_128 = auStack_438;
  auStack_438 = (undefined1  [8])0x0;
  plStack_430 = (long *)0x0;
  plStack_428 = (long *)0x0;
  uStack_420 = (long *)0x0;
  uStack_418 = (long *)0x0;
  puStack_410 = (undefined1 *)0x0;
  puStack_100 = puStack_3f8;
  uStack_110 = (ulong)uStack_408;
  uStack_108 = (ulong)uStack_400;
  uStack_408 = (undefined *)0x0;
  uStack_400 = (long *)0x0;
  puStack_3f8 = (undefined8 *)0x0;
  uStack_d8 = uStack_3d0;
  uStack_d0 = plStack_3c8;
  uStack_c8 = uStack_3c0;
  uStack_3d0 = 0;
  plStack_3c8 = (long *)0x0;
  uStack_3c0 = 0;
  uStack_c0 = uStack_3b8;
  uStack_b8 = uStack_3b0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_b0 = (undefined4)uStack_3a8;
  uStack_ac = uStack_3a8._4_4_;
  uStack_a8 = (undefined4)uStack_3a0;
  uStack_a4 = uStack_3a0._4_4_;
  uStack_a0 = uStack_398;
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  uStack_398 = 0;
  uStack_98 = uStack_390;
  lStack_90 = uStack_388;
  uStack_88 = uStack_380;
  uStack_390 = 0;
  uStack_388 = 0;
  uStack_380 = 0;
  uStack_80 = uStack_378;
  uStack_78 = uStack_370;
  uStack_70 = uStack_368;
  uStack_378 = 0;
  uStack_370 = 0;
  uStack_368 = 0;
  uStack_68 = uStack_360;
  uStack_60 = uStack_358;
  uStack_58 = uStack_350;
  uStack_360 = 0;
  uStack_358 = 0;
  uStack_350 = 0;
  uStack_50 = (undefined4)uStack_348;
  uStack_4c = uStack_348._4_4_;
  uStack_48 = (undefined4)uStack_340;
  uStack_44 = uStack_340._4_4_;
  uStack_40 = uStack_338;
  uStack_348 = 0;
  uStack_340 = 0;
  uStack_338 = 0;
  auStack_f8 = auStack_3f0;
  auStack_e8 = auStack_3e0;
  func_0x0651ffe0(&uStack_420);
  auVar8 = auStack_438;
  plVar12 = plStack_430;
  if (auStack_438 != (undefined1  [8])0x0) {
    for (; auVar8 != (undefined1  [8])plVar12; plVar12 = (long *)((long)plVar12 + -0x30)) {
      if ((*(byte *)((long)plVar12 + -0x20) & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)((long)plVar12 + -0x10),
                           *(ulong *)((long)plVar12 + -0x20) & 0xfffffffffffffffe);
      }
    }
    plStack_430 = (long *)auVar8;
    thunk_FUN_0ee326a0(auStack_438,(long)plStack_428 - (long)auStack_438);
  }
  if (((ulong)auStack_498 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_488,(ulong)auStack_498 & 0xfffffffffffffffe);
  }
  func_0x0d84fd50(lStack_440,&uStack_128);
  func_0x0651ffe0(&uStack_128);
  return;
LAB_0a608afb:
  uStack_478 = 0;
  plVar22 = plStack_480;
  goto joined_r0x0a608b10;
LAB_0a608e22:
  do {
    puVar27 = (undefined4 *)plVar22[1];
    if (puVar27 == puVar20) {
      if ((plVar22[3] == lVar25) &&
         (plVar21 = (long *)func_0x0eee3000(plVar22[2],lVar18,lVar25), puVar24 = uStack_168,
         (int)plVar21 == 0)) goto LAB_0a60916a;
    }
    else {
      if (puVar29 <= puVar27) {
        if (((ulong)puVar27 | (ulong)puVar29) >> 0x20 == 0) {
          puVar27 = (undefined4 *)(((ulong)puVar27 & 0xffffffff) % ((ulong)puVar29 & 0xffffffff));
        }
        else {
          puVar27 = (undefined4 *)((ulong)puVar27 % (ulong)puVar29);
        }
      }
      if (puVar27 != puVar24) break;
    }
    plVar22 = (long *)*plVar22;
  } while (plVar22 != (long *)0x0);
  goto LAB_0a608e7e;
LAB_0a608dd8:
  do {
    if ((undefined4 *)plVar22[1] == puVar20) {
      if ((plVar22[3] == lVar25) &&
         (uVar14 = func_0x0eee3000(plVar22[2],lVar18,lVar25), puVar24 = uStack_168, (int)uVar14 == 0
         )) {
        uStack_478 = (uint)CONCAT71((int7)((ulong)uVar14 >> 8),1);
        plVar22 = plStack_480;
        goto joined_r0x0a608b10;
      }
    }
    else if ((undefined4 *)((ulong)plVar22[1] & (long)puVar29 - 1U) != puVar24) break;
    plVar22 = (long *)*plVar22;
  } while (plVar22 != (long *)0x0);
LAB_0a608e7e:
  plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar22 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_308 = (undefined *)0x1;
  *plVar22 = 0;
  plVar22[1] = (long)puVar20;
  plVar22[2] = lVar18;
  plVar22[3] = lVar25;
  plVar22[4] = CONCAT44(uStack_474,uStack_478);
  plVar22[5] = CONCAT44(uStack_46c,uStack_470);
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar12[1] = plVar12[1] + 1;
    UNLOCK();
  }
  uStack_318 = plVar22;
  uStack_310 = param_1;
  if ((long)puVar29 < 0) {
    fVar40 = (float)puVar29;
    fVar39 = *(float *)(param_1 + 4);
    if (puVar29 != (undefined4 *)0x0) goto LAB_0a608f5b;
LAB_0a608f6c:
    uVar15 = 1;
    if ((undefined4 *)0x2 < puVar29) {
      uVar15 = (ulong)(((ulong)puVar29 & (long)puVar29 - 1U) != 0);
    }
    uVar15 = (long)puVar29 * 2 | uVar15;
    fVar39 = (float)ceilf((float)(param_1[3] + 1) / fVar39);
    uVar19 = (long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39;
    if (uVar19 < uVar15) {
      uVar19 = uVar15;
    }
    uVar15 = 2;
    if ((uVar19 == 1) || (uVar15 = uVar19, (uVar19 & uVar19 - 1) == 0)) {
      uVar19 = param_1[1];
      bVar38 = uVar15 < uVar19;
      if (uVar15 <= uVar19) goto LAB_0a609005;
LAB_0a608fdd:
      func_0x0a639410(param_1,uVar15);
    }
    else {
      uVar15 = func_0x0412c3f0();
      uVar19 = param_1[1];
      bVar38 = uVar15 < uVar19;
      if (uVar19 < uVar15) goto LAB_0a608fdd;
LAB_0a609005:
      if (bVar38) {
        fVar39 = (float)ceilf((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        uVar26 = (long)(fVar39 - _DAT_01198778) & (long)fVar39 >> 0x3f | (long)fVar39;
        if ((uVar19 < 3) ||
           (uVar28 = uVar19 - (uVar19 >> 1 & 0x5555555555555555),
           uVar28 = (uVar28 >> 2 & 0x3333333333333333) + (uVar28 & 0x3333333333333333),
           1 < (byte)(((uVar28 >> 4) + uVar28 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar26 = func_0x0412c3f0(uVar26);
        }
        else if (1 < uVar26) {
          lVar18 = 0x3f;
          if (uVar26 - 1 != 0) {
            for (; uVar26 - 1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar26 = 1L << (-((byte)lVar18 ^ 0x3f) & 0x3f);
        }
        if (uVar15 <= uVar26) {
          uVar15 = uVar26;
        }
        if (uVar15 < uVar19) goto LAB_0a608fdd;
      }
    }
    puVar29 = (undefined4 *)param_1[1];
    if (((ulong)puVar29 & (long)puVar29 - 1U) == 0) {
      puVar24 = (undefined4 *)((ulong)puVar20 & (long)puVar29 - 1U);
    }
    else {
      puVar24 = puVar20;
      if (puVar29 <= puVar20) {
        if (((ulong)puVar20 | (ulong)puVar29) >> 0x20 == 0) {
          puVar24 = (undefined4 *)(((ulong)puVar20 & 0xffffffff) % ((ulong)puVar29 & 0xffffffff));
        }
        else {
          puVar24 = (undefined4 *)((ulong)puVar20 % (ulong)puVar29);
        }
      }
    }
  }
  else {
    fVar40 = (float)(long)puVar29;
    fVar39 = *(float *)(param_1 + 4);
    if (puVar29 == (undefined4 *)0x0) goto LAB_0a608f6c;
LAB_0a608f5b:
    puVar24 = uStack_168;
    if (fVar40 * fVar39 < (float)(param_1[3] + 1)) goto LAB_0a608f6c;
  }
  lVar18 = *param_1;
  plVar21 = *(long **)(lVar18 + (long)puVar24 * 8);
  if (plVar21 == (long *)0x0) {
    *plVar22 = *plStack_150;
    *plStack_150 = (long)plVar22;
    *(long **)(lVar18 + (long)puVar24 * 8) = plStack_150;
    if (*plVar22 != 0) {
      puVar20 = *(undefined4 **)(*plVar22 + 8);
      if (((ulong)puVar29 & (long)puVar29 - 1U) == 0) {
        *(long **)(lVar18 + ((ulong)puVar20 & (long)puVar29 - 1U) * 8) = plVar22;
      }
      else {
        if (puVar29 <= puVar20) {
          if (((ulong)puVar20 | (ulong)puVar29) >> 0x20 == 0) {
            *(long **)(lVar18 + (((ulong)puVar20 & 0xffffffff) % ((ulong)puVar29 & 0xffffffff)) * 8)
                 = plVar22;
            goto LAB_0a609161;
          }
          puVar20 = (undefined4 *)((ulong)puVar20 % (ulong)puVar29);
        }
        *(long **)(lVar18 + (long)puVar20 * 8) = plVar22;
      }
    }
  }
  else {
    *plVar22 = *plVar21;
    *plVar21 = (long)plVar22;
  }
LAB_0a609161:
  param_1[3] = param_1[3] + 1;
  plVar21 = param_1;
LAB_0a60916a:
  uStack_478 = (uint)CONCAT71((int7)((ulong)plVar21 >> 8),1);
  plVar22 = plStack_480;
joined_r0x0a608b10:
  plStack_480 = plVar22;
  if (plVar12 != (long *)0x0) {
LAB_0a60917a:
    LOCK();
    plVar21 = plVar12 + 1;
    lVar18 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
  }
LAB_0a6091a0:
  auStack_438 = (undefined1  [8])0x0;
  plStack_430 = (long *)0x0;
  plStack_428 = (long *)0x0;
  uStack_318 = (long *)0x0;
  uStack_310 = (long *)0x0;
  uStack_308 = (undefined *)0x0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  puStack_2f0 = (undefined4 *)0x0;
  auStack_2e8 = (undefined1  [8])0x0;
  plStack_2e0 = (long *)0x0;
  plStack_2d8 = (long *)0x0;
  uStack_2d0 = 0;
  plVar12 = _DAT_0f54fd98;
  if (_DAT_0f54fd90 == (long *)0x0) {
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0x50,0);
    }
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = (long)&UNK_0ef44ab0;
    plVar21 = plVar12 + 3;
    plVar12[3] = 0;
    plVar12[4] = 0;
    plVar12[5] = 0;
    plVar12[6] = 0;
    plVar12[7] = 0;
    plVar12[8] = 0;
    plVar12[9] = 0;
    *(undefined4 *)(plVar12 + 9) = 0x3f600000;
    func_0x048af7e0(plVar21,8);
    lVar18 = plVar12[3];
    lVar25 = plVar12[4];
    if (lVar18 != lVar25) {
      func_0x0eee2dd0(lVar18,0xff,lVar25 - lVar18);
    }
    lVar35 = plVar12[6];
    if (plVar12[7] - lVar35 != 0) {
      uVar15 = (plVar12[7] - lVar35 >> 3) * -0x5555555555555555;
      uVar33 = (int)((ulong)(lVar25 - lVar18) >> 3) - 1;
      if (uVar15 < 2) {
        uVar15 = 1;
        uVar19 = 0;
      }
      else {
        puVar31 = (uint *)(lVar35 + 0x20);
        uVar19 = 0;
        do {
          uVar14 = *(undefined8 *)(lVar18 + (ulong)(puVar31[-6] & uVar33) * 8);
          *(ulong *)(lVar18 + (ulong)(puVar31[-6] & uVar33) * 8) = uVar19;
          *(undefined8 *)(puVar31 + -8) = uVar14;
          uVar14 = *(undefined8 *)(lVar18 + (ulong)(*puVar31 & uVar33) * 8);
          *(ulong *)(lVar18 + (ulong)(*puVar31 & uVar33) * 8) = uVar19 + 1;
          *(undefined8 *)(puVar31 + -2) = uVar14;
          uVar19 = uVar19 + 2;
          puVar31 = puVar31 + 0xc;
        } while (uVar19 != (uVar15 & 0xfffffffffffffffe));
      }
      if ((uVar15 & 1) != 0) {
        uVar15 = (ulong)(uVar33 & *(uint *)(lVar35 + 8 + uVar19 * 0x18));
        uVar14 = *(undefined8 *)(lVar18 + uVar15 * 8);
        *(ulong *)(lVar18 + uVar15 * 8) = uVar19;
        *(undefined8 *)(lVar35 + uVar19 * 0x18) = uVar14;
      }
    }
    plVar23 = _DAT_0f54fd98;
    _DAT_0f54fd90 = plVar21;
    if (_DAT_0f54fd98 == (long *)0x0) goto LAB_0a6091ef;
    LOCK();
    plVar21 = _DAT_0f54fd98 + 1;
    lVar18 = *plVar21;
    _DAT_0f54fd98 = plVar12;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      func_0x0412c2d0(plVar23);
    }
    uStack_2c8._0_4_ = SUB84(_DAT_0f54fd90,0);
    uStack_2c8._4_4_ = (undefined4)((ulong)_DAT_0f54fd90 >> 0x20);
    uStack_2c0 = 0;
    uStack_2bc = 0;
    plVar12 = _DAT_0f54fd98;
    if (_DAT_0f54fd90 == (long *)0x0) {
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
      if (plVar12 == (long *)0x0) {
        func_0x0eec74c0(0x50,0);
      }
      plVar12[1] = 0;
      plVar12[2] = 0;
      *plVar12 = (long)&UNK_0ef44ab0;
      plVar21 = plVar12 + 3;
      plVar12[3] = 0;
      plVar12[4] = 0;
      plVar12[5] = 0;
      plVar12[6] = 0;
      plVar12[7] = 0;
      plVar12[8] = 0;
      plVar12[9] = 0;
      *(undefined4 *)(plVar12 + 9) = 0x3f600000;
      func_0x048af640(plVar21,8);
      plVar23 = _DAT_0f54fd98;
      _DAT_0f54fd90 = plVar21;
      if (_DAT_0f54fd98 != (long *)0x0) {
        LOCK();
        plVar21 = _DAT_0f54fd98 + 1;
        lVar18 = *plVar21;
        _DAT_0f54fd98 = plVar12;
        *plVar21 = *plVar21 + -1;
        UNLOCK();
        plVar12 = _DAT_0f54fd98;
        if (lVar18 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
          func_0x0412c2d0(plVar23);
          plVar12 = _DAT_0f54fd98;
        }
      }
    }
  }
  else {
LAB_0a6091ef:
    _DAT_0f54fd98 = plVar12;
    uStack_2c8._0_4_ = SUB84(_DAT_0f54fd90,0);
    uStack_2c8._4_4_ = (undefined4)((ulong)_DAT_0f54fd90 >> 0x20);
    uStack_2c0 = 0;
    uStack_2bc = 0;
    plVar12 = _DAT_0f54fd98;
  }
  _DAT_0f54fd98 = plVar12;
  uStack_2b8 = SUB84(_DAT_0f54fd90,0);
  uStack_2b4 = (undefined4)((ulong)_DAT_0f54fd90 >> 0x20);
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_240 = 0;
  uStack_238 = 0;
  puStack_250 = (undefined8 *)0x0;
  puStack_248 = (undefined8 *)0x0;
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_270 = 0;
  uStack_268 = 0;
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_290 = 0;
  uStack_288 = 0;
  lStack_2a0 = 0;
  uStack_298 = 0;
  uStack_2b0 = 0;
  plStack_2a8 = (long *)0x0;
  if (((ulong)auStack_2e8 & 1) == 0) {
    if (((ulong)auStack_438 & 1) == 0) {
      plStack_2d8 = plStack_428;
      auStack_2e8 = auStack_438;
      plStack_2e0 = plStack_430;
    }
    else {
      func_0x04885070(auStack_2e8,plStack_428,plStack_430);
    }
  }
  else {
    plVar21 = (long *)((ulong)auStack_438 >> 1 & 0x7f);
    plVar12 = (long *)(auStack_438 + 1);
    if (((ulong)auStack_438 & 1) != 0) {
      plVar21 = plStack_430;
      plVar12 = plStack_428;
    }
    func_0x04885120(auStack_2e8,plVar12,plVar21);
  }
  if (((ulong)auStack_438 & 1) != 0) {
    thunk_FUN_0ee326a0(plStack_428,(ulong)auStack_438 & 0xfffffffffffffffe);
  }
  uVar15 = plVar22[3];
  if (0xfffffffffffffff7 < uVar15) {
LAB_0a60b9e6:
    puVar13 = (undefined8 *)func_0x04882e30();
    goto LAB_0a60b9eb;
  }
  lVar18 = plVar22[2];
  if (uVar15 < 0x17) {
    uStack_458 = (undefined4 *)CONCAT71(uStack_458._1_7_,(char)uVar15 * '\x02');
    lVar25 = (long)&uStack_458 + 1;
    if (uVar15 != 0) goto LAB_0a60949c;
  }
  else {
    uVar19 = (uVar15 | 7) + 1;
    if ((uVar15 | 7) == 0x17) {
      uVar19 = 0x1a;
    }
    lVar25 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19);
    if (lVar25 == 0) {
      func_0x0eec74c0(uVar19,0);
    }
    uStack_458 = (undefined4 *)(uVar19 | 1);
    uStack_450 = uVar15;
    lStack_448 = lVar25;
LAB_0a60949c:
    func_0x0eee2ee0(lVar25,lVar18,uVar15);
  }
  plVar12 = (long *)(auStack_3f0 + 8);
  *(undefined1 *)(lVar25 + uVar15) = 0;
  auStack_4b8 = (undefined1  [4])0x6d6f6316;
  uStack_4b4 = 0x6f70;
  uStack_4b2 = 0x656e;
  uStack_4b0 = 0x6449746e;
  uStack_4ac = uStack_4ac & 0xffffff00;
  if (((ulong)uStack_458 & 1) == 0) {
    puStack_488 = (undefined8 *)lStack_448;
    auStack_498 = (undefined1  [8])uStack_458;
    uStack_490 = uStack_450;
  }
  else {
    FUN_0412e5e0(auStack_498,lStack_448,uStack_450);
  }
  uStack_418 = (long *)0x0;
  puStack_410 = (undefined1 *)0x0;
  plStack_428 = (long *)0x0;
  uStack_420 = (long *)0x0;
  auStack_438 = (undefined1  [8])0x0;
  plStack_430 = (long *)0x0;
  uStack_408 = (undefined *)0x0;
  if (_DAT_0f54fd90 == (long *)0x0) {
    plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
    if (plVar22 == (long *)0x0) {
      func_0x0eec74c0(0x50,0);
    }
    plVar22[1] = 0;
    plVar22[2] = 0;
    *plVar22 = (long)&UNK_0ef44ab0;
    plVar21 = plVar22 + 3;
    plVar22[3] = 0;
    plVar22[4] = 0;
    plVar22[5] = 0;
    plVar22[6] = 0;
    plVar22[7] = 0;
    plVar22[8] = 0;
    plVar22[9] = 0;
    *(undefined4 *)(plVar22 + 9) = 0x3f600000;
    func_0x048af7e0(plVar21,8);
    lVar18 = plVar22[3];
    lVar25 = plVar22[4];
    if (lVar18 != lVar25) {
      func_0x0eee2dd0(lVar18,0xff,lVar25 - lVar18);
    }
    lVar35 = plVar22[6];
    if (plVar22[7] - lVar35 != 0) {
      uVar15 = (plVar22[7] - lVar35 >> 3) * -0x5555555555555555;
      uVar33 = (int)((ulong)(lVar25 - lVar18) >> 3) - 1;
      if (uVar15 < 2) {
        uVar15 = 1;
        uVar19 = 0;
      }
      else {
        puVar31 = (uint *)(lVar35 + 0x20);
        uVar19 = 0;
        do {
          uVar14 = *(undefined8 *)(lVar18 + (ulong)(puVar31[-6] & uVar33) * 8);
          *(ulong *)(lVar18 + (ulong)(puVar31[-6] & uVar33) * 8) = uVar19;
          *(undefined8 *)(puVar31 + -8) = uVar14;
          uVar14 = *(undefined8 *)(lVar18 + (ulong)(*puVar31 & uVar33) * 8);
          *(ulong *)(lVar18 + (ulong)(*puVar31 & uVar33) * 8) = uVar19 + 1;
          *(undefined8 *)(puVar31 + -2) = uVar14;
          uVar19 = uVar19 + 2;
          puVar31 = puVar31 + 0xc;
        } while (uVar19 != (uVar15 & 0xfffffffffffffffe));
      }
      if ((uVar15 & 1) != 0) {
        uVar15 = (ulong)(uVar33 & *(uint *)(lVar35 + 8 + uVar19 * 0x18));
        uVar14 = *(undefined8 *)(lVar18 + uVar15 * 8);
        *(ulong *)(lVar18 + uVar15 * 8) = uVar19;
        *(undefined8 *)(lVar35 + uVar19 * 0x18) = uVar14;
      }
    }
    plVar23 = _DAT_0f54fd98;
    _DAT_0f54fd90 = plVar21;
    if (_DAT_0f54fd98 != (long *)0x0) {
      LOCK();
      plVar21 = _DAT_0f54fd98 + 1;
      lVar18 = *plVar21;
      _DAT_0f54fd98 = plVar22;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      plVar22 = _DAT_0f54fd98;
      if (lVar18 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
        func_0x0412c2d0(plVar23);
        plVar22 = _DAT_0f54fd98;
      }
    }
    _DAT_0f54fd98 = plVar22;
    uStack_400 = _DAT_0f54fd90;
    puStack_3f8 = (undefined8 *)((ulong)puStack_3f8 & 0xffffffffffffff00);
    plStack_3c8 = (long *)0x0;
    if (((ulong)uStack_420 & 1) == 0) goto joined_r0x0a6098b1;
    bVar38 = ((uint)auStack_4b8 & 1) == 0;
    puVar30 = (undefined1 *)uStack_4a8;
    if (bVar38) {
      puVar30 = auStack_4b8 + 1;
    }
    uVar15 = (ulong)(auStack_4b8[0] >> 1);
    if (!bVar38) {
      uVar15 = CONCAT44(uStack_4ac,uStack_4b0);
    }
    func_0x04885120(&uStack_420,puVar30,uVar15);
  }
  else {
    puStack_3f8 = (undefined8 *)((ulong)puStack_3f8 & 0xffffffffffffff00);
joined_r0x0a6098b1:
    uStack_400 = _DAT_0f54fd90;
    if (((uint)auStack_4b8 & 1) == 0) {
      plStack_3c8 = (long *)0x0;
      uStack_420 = (long *)CONCAT44(CONCAT22(uStack_4b2,uStack_4b4),auStack_4b8);
      uStack_418 = (long *)CONCAT44(uStack_4ac,uStack_4b0);
      puStack_410 = (undefined1 *)uStack_4a8;
    }
    else {
      plStack_3c8 = (long *)0x0;
      func_0x04885070(&uStack_420,uStack_4a8,CONCAT44(uStack_4ac,uStack_4b0));
    }
  }
  plVar22 = _DAT_0f54fd98;
  if (_DAT_0f54fd90 == (long *)0x0) {
    plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
    if (plVar22 == (long *)0x0) {
      func_0x0eec74c0(0x50,0);
    }
    plVar22[1] = 0;
    plVar22[2] = 0;
    *plVar22 = (long)&UNK_0ef44ab0;
    plVar21 = plVar22 + 3;
    plVar22[3] = 0;
    plVar22[4] = 0;
    plVar22[5] = 0;
    plVar22[6] = 0;
    plVar22[7] = 0;
    plVar22[8] = 0;
    plVar22[9] = 0;
    *(undefined4 *)(plVar22 + 9) = 0x3f600000;
    func_0x048af7e0(plVar21,8);
    lVar18 = plVar22[3];
    lVar25 = plVar22[4];
    if (lVar18 != lVar25) {
      func_0x0eee2dd0(lVar18,0xff,lVar25 - lVar18);
    }
    lVar35 = plVar22[6];
    if (plVar22[7] - lVar35 != 0) {
      uVar15 = (plVar22[7] - lVar35 >> 3) * -0x5555555555555555;
      uVar33 = (int)((ulong)(lVar25 - lVar18) >> 3) - 1;
      if (uVar15 < 2) {
        uVar15 = 1;
        uVar19 = 0;
      }
      else {
        puVar31 = (uint *)(lVar35 + 0x20);
        uVar19 = 0;
        do {
          uVar14 = *(undefined8 *)(lVar18 + (ulong)(puVar31[-6] & uVar33) * 8);
          *(ulong *)(lVar18 + (ulong)(puVar31[-6] & uVar33) * 8) = uVar19;
          *(undefined8 *)(puVar31 + -8) = uVar14;
          uVar14 = *(undefined8 *)(lVar18 + (ulong)(*puVar31 & uVar33) * 8);
          *(ulong *)(lVar18 + (ulong)(*puVar31 & uVar33) * 8) = uVar19 + 1;
          *(undefined8 *)(puVar31 + -2) = uVar14;
          uVar19 = uVar19 + 2;
          puVar31 = puVar31 + 0xc;
        } while (uVar19 != (uVar15 & 0xfffffffffffffffe));
      }
      if ((uVar15 & 1) != 0) {
        uVar15 = (ulong)(uVar33 & *(uint *)(lVar35 + 8 + uVar19 * 0x18));
        uVar14 = *(undefined8 *)(lVar18 + uVar15 * 8);
        *(ulong *)(lVar18 + uVar15 * 8) = uVar19;
        *(undefined8 *)(lVar35 + uVar19 * 0x18) = uVar14;
      }
    }
    plVar23 = _DAT_0f54fd98;
    _DAT_0f54fd90 = plVar21;
    if (_DAT_0f54fd98 != (long *)0x0) {
      LOCK();
      plVar21 = _DAT_0f54fd98 + 1;
      lVar18 = *plVar21;
      _DAT_0f54fd98 = plVar22;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      plVar22 = _DAT_0f54fd98;
      if (lVar18 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
        func_0x0412c2d0(plVar23);
        plVar22 = _DAT_0f54fd98;
      }
    }
  }
  _DAT_0f54fd98 = plVar22;
  plVar22 = _DAT_0f54fd90;
  if ((DAT_0f550ba8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f550ba8), iVar11 != 0)) {
    func_0x048b2270(&DAT_0f550b28);
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f550b28,0xf53dab8);
    func_0x0410844d(&DAT_0f550ba8);
  }
  puVar16 = puStack_488;
  plVar23 = puVar13 + 0x15;
  plVar21 = (long *)(*plVar22 +
                    (ulong)((int)((ulong)(plVar22[1] - *plVar22) >> 3) - 1U &
                           *(uint *)(_DAT_0f550b28 + 4)) * 8);
  do {
    lVar18 = *plVar21;
    if (lVar18 == -1) {
      uStack_408 = &DAT_0f550b28;
      goto LAB_0a609b17;
    }
    plVar21 = (long *)(plVar22[3] + lVar18 * 0x18);
  } while (*(uint *)(plVar22[3] + 8 + lVar18 * 0x18) != *(uint *)(_DAT_0f550b28 + 4));
  uStack_408 = &DAT_0f550b28;
  if (plVar21 != (long *)plVar22[4]) {
    uStack_408 = (undefined *)plVar21[2];
  }
LAB_0a609b17:
  uStack_400 = plVar22;
  puStack_3f8 = (undefined8 *)CONCAT71(puStack_3f8._1_7_,1);
  uStack_168 = (undefined4 *)auStack_498;
  uStack_160 = uStack_490;
  auStack_498 = (undefined1  [8])0x0;
  uStack_490 = 0;
  puStack_488 = (undefined8 *)0x0;
  plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar22 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  plVar21 = plStack_3c8;
  *plVar22 = (long)&UNK_0f234618;
  *(undefined4 *)(plVar22 + 1) = (undefined4)uStack_168;
  *(undefined4 *)((long)plVar22 + 0xc) = uStack_168._4_4_;
  *(undefined4 *)(plVar22 + 2) = (undefined4)uStack_160;
  *(undefined4 *)((long)plVar22 + 0x14) = uStack_160._4_4_;
  plVar22[3] = (long)puVar16;
  plStack_3c8 = (long *)0x0;
  if (plVar21 == plVar12) {
    lVar18 = 0x20;
LAB_0a609c95:
    (**(code **)(*plVar21 + lVar18))();
    if (puStack_250 < puStack_248) goto LAB_0a609bdc;
LAB_0a609cb9:
    plStack_3c8 = plVar22;
    puVar16 = (undefined8 *)func_0x065ac6d0(&uStack_258,auStack_438);
    if (plStack_3c8 != plVar12) goto LAB_0a609d2b;
LAB_0a609ce6:
    lVar18 = 0x20;
    puStack_250 = puVar16;
LAB_0a609d3a:
    puVar16 = puStack_250;
    (**(code **)(*plStack_3c8 + lVar18))();
  }
  else {
    lVar18 = 0x28;
    if (plVar21 != (long *)0x0) goto LAB_0a609c95;
    if (puStack_248 <= puStack_250) goto LAB_0a609cb9;
LAB_0a609bdc:
    puVar16 = puStack_250;
    *puStack_250 = 0;
    puStack_250[1] = 0;
    puStack_250[2] = 0;
    *puStack_250 = auStack_438;
    puStack_250[1] = plStack_430;
    puStack_250[2] = plStack_428;
    auStack_438 = (undefined1  [8])0x0;
    plStack_430 = (long *)0x0;
    plStack_428 = (long *)0x0;
    puStack_250[5] = puStack_410;
    puStack_250[3] = uStack_420;
    puStack_250[4] = uStack_418;
    uStack_420 = (long *)0x0;
    uStack_418 = (long *)0x0;
    puStack_410 = (undefined1 *)0x0;
    *(undefined1 *)(puStack_250 + 8) = puStack_3f8._0_1_;
    *(undefined4 *)(puStack_250 + 6) = (undefined4)uStack_408;
    *(undefined4 *)((long)puStack_250 + 0x34) = uStack_408._4_4_;
    *(undefined4 *)(puStack_250 + 7) = (undefined4)uStack_400;
    *(undefined4 *)((long)puStack_250 + 0x3c) = uStack_400._4_4_;
    if (plVar22 == (long *)0x0) {
      puStack_250[0xe] = 0;
      plStack_3c8 = plVar22;
    }
    else if (plVar22 == plVar12) {
      puStack_250[0xe] = puStack_250 + 10;
      plStack_3c8 = plVar22;
      (**(code **)(*plVar22 + 0x18))();
    }
    else {
      puStack_250[0xe] = plVar22;
      plStack_3c8 = (long *)0x0;
    }
    puVar16 = puVar16 + 0x10;
    if (plStack_3c8 == plVar12) goto LAB_0a609ce6;
LAB_0a609d2b:
    lVar18 = 0x28;
    puStack_250 = puVar16;
    if (plStack_3c8 != (long *)0x0) goto LAB_0a609d3a;
  }
  if (((ulong)uStack_420 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_410,(ulong)uStack_420 & 0xfffffffffffffffe);
  }
  auVar8 = auStack_438;
  plVar12 = plStack_430;
  if (auStack_438 != (undefined1  [8])0x0) {
    for (; auVar8 != (undefined1  [8])plVar12; plVar12 = plVar12 + -6) {
      if ((*(byte *)(plVar12 + -4) & 1) != 0) {
        thunk_FUN_0ee326a0(plVar12[-2],plVar12[-4] & 0xfffffffffffffffe);
      }
    }
    plStack_430 = (long *)auVar8;
    thunk_FUN_0ee326a0(auStack_438,(long)plStack_428 - (long)auStack_438);
  }
  if (((ulong)auStack_498 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_488,(ulong)auStack_498 & 0xfffffffffffffffe);
  }
  if (((uint)auStack_4b8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_4a8,
                       CONCAT26(uStack_4b2,CONCAT24(uStack_4b4,auStack_4b8)) & 0xfffffffffffffffe);
  }
  uStack_128._0_6_ = CONCAT24(_DAT_0f6426ec,_DAT_0f6426e8);
  if ((_DAT_0f6426f0 & 1) == 0) {
    uStack_110 = _DAT_0f642700;
    uStack_120 = (undefined4 **)CONCAT44(uRam000000000f6426f4,_DAT_0f6426f0);
    uStack_118 = (long *)CONCAT44(uRam000000000f6426fc,_DAT_0f6426f8);
  }
  else {
    FUN_0412e5e0(&uStack_120,_DAT_0f642700,CONCAT44(uRam000000000f6426fc,_DAT_0f6426f8));
  }
  func_0x0730fa70(puVar16 + -0x10,&uStack_128,0);
  if (((ulong)uStack_120 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_110,(ulong)uStack_120 & 0xfffffffffffffffe);
  }
  plVar12 = (long *)puVar13[0x16];
  if (plVar12 < (long *)puVar13[0x17]) {
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar12[2] = 0;
    puVar29 = (undefined4 *)puVar16[-0x10];
    puVar20 = (undefined4 *)puVar16[-0xf];
    uStack_120 = (undefined4 **)((ulong)uStack_120 & 0xffffffffffffff00);
    lVar18 = (long)puVar20 - (long)puVar29;
    uStack_128 = (undefined1  [8])plVar12;
    if (lVar18 != 0) {
      if (0x555555555555555 < (ulong)((lVar18 >> 4) * -0x5555555555555555)) goto LAB_0a60ba29;
      puVar24 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar18);
      if (puVar24 == (undefined4 *)0x0) {
        func_0x0eec74c0(lVar18,0);
      }
      *plVar12 = (long)puVar24;
      plVar12[1] = (long)puVar24;
      plVar12[2] = lVar18 + (long)puVar24;
      auStack_4b8 = SUB84(puVar24,0);
      uStack_4b4 = (undefined2)((ulong)puVar24 >> 0x20);
      uStack_4b2 = (undefined2)((ulong)puVar24 >> 0x30);
      plStack_430 = (long *)auStack_498;
      plStack_428 = (long *)auStack_4b8;
      uStack_420 = (long *)((ulong)uStack_420 & 0xffffffffffffff00);
      auStack_498 = (undefined1  [8])puVar24;
      auStack_438 = (undefined1  [8])plVar12;
      do {
        *puVar24 = *puVar29;
        *(undefined2 *)(puVar24 + 3) = *(undefined2 *)(puVar29 + 3);
        puVar24[2] = puVar29[2];
        if ((*(byte *)(puVar29 + 4) & 1) == 0) {
          *(undefined8 *)(puVar24 + 8) = *(undefined8 *)(puVar29 + 8);
          uVar4 = puVar29[5];
          uVar5 = puVar29[6];
          uVar6 = puVar29[7];
          puVar24[4] = puVar29[4];
          puVar24[5] = uVar4;
          puVar24[6] = uVar5;
          puVar24[7] = uVar6;
          puVar27 = puVar24;
        }
        else {
          FUN_0412e5e0(puVar24 + 4,*(undefined8 *)(puVar29 + 8),*(undefined8 *)(puVar29 + 6));
          puVar27 = (undefined4 *)CONCAT26(uStack_4b2,CONCAT24(uStack_4b4,auStack_4b8));
        }
        puVar24[10] = puVar29[10];
        puVar29 = puVar29 + 0xc;
        puVar24 = puVar27 + 0xc;
        auStack_4b8 = SUB84(puVar24,0);
        uStack_4b4 = (undefined2)((ulong)puVar24 >> 0x20);
        uStack_4b2 = (undefined2)((ulong)puVar24 >> 0x30);
      } while (puVar29 != puVar20);
      plVar12[1] = (long)puVar24;
    }
    if ((*(byte *)(puVar16 + -0xd) & 1) == 0) {
      plVar12[5] = puVar16[-0xb];
      lVar18 = puVar16[-0xc];
      plVar12[3] = puVar16[-0xd];
      plVar12[4] = lVar18;
    }
    else {
      FUN_0412e5e0(plVar12 + 3,puVar16[-0xb],puVar16[-0xc]);
    }
    plVar22 = plStack_480;
    *(undefined1 *)(plVar12 + 8) = *(undefined1 *)(puVar16 + -8);
    uVar4 = *(undefined4 *)((long)puVar16 + -0x4c);
    uVar5 = *(undefined4 *)(puVar16 + -9);
    uVar6 = *(undefined4 *)((long)puVar16 + -0x44);
    *(undefined4 *)(plVar12 + 6) = *(undefined4 *)(puVar16 + -10);
    *(undefined4 *)((long)plVar12 + 0x34) = uVar4;
    *(undefined4 *)(plVar12 + 7) = uVar5;
    *(undefined4 *)((long)plVar12 + 0x3c) = uVar6;
    plVar21 = (long *)puVar16[-2];
    if (plVar21 == (long *)0x0) {
      plVar12[0xe] = 0;
    }
    else if (plVar21 == puVar16 + -6) {
      plVar12[0xe] = (long)(plVar12 + 10);
      (**(code **)(*(long *)puVar16[-2] + 0x18))();
    }
    else {
      lVar18 = (**(code **)(*plVar21 + 0x10))();
      plVar12[0xe] = lVar18;
    }
    puVar13[0x16] = plVar12 + 0x10;
    puVar13[0x16] = plVar12 + 0x10;
    goto joined_r0x0a60a845;
  }
  plVar12 = (long *)((long)plVar12 - *plVar23);
  uVar15 = ((long)plVar12 >> 7) + 1;
  if (0x1ffffffffffffff < uVar15) {
    func_0x065acad0();
LAB_0a60ba29:
    func_0x0652b440();
LAB_0a60ba2e:
    func_0x0652b440();
LAB_0a60ba33:
    func_0x04882eb0();
LAB_0a60ba38:
    func_0x0eec74c0(0x20,0);
    goto LAB_0a60795c;
  }
  uVar26 = (long)puVar13[0x17] - *plVar23;
  uVar19 = (long)uVar26 >> 6;
  if (uVar19 <= uVar15) {
    uVar19 = uVar15;
  }
  if (0x7fffffffffffff7f < uVar26) {
    uVar19 = 0x1ffffffffffffff;
  }
  uStack_418 = plVar23;
  if (uVar19 == 0) {
    plVar22 = (long *)0x0;
  }
  else {
    if (0x1ffffffffffffff < uVar19) goto LAB_0a60ba33;
    plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19 << 7);
    if (plVar22 == (long *)0x0) {
      func_0x0eec74c0(uVar19 << 7,0);
      plVar22 = (long *)0x0;
    }
  }
  plVar21 = (long *)((long)plVar22 + (long)plVar12);
  uStack_420 = plVar22 + uVar19 * 0x10;
  *(undefined8 *)((long)plVar22 + (long)plVar12) = 0;
  ((undefined8 *)((long)plVar22 + (long)plVar12))[1] = 0;
  *(undefined8 *)((long)(plVar22 + 2) + (long)plVar12) = 0;
  puVar29 = (undefined4 *)puVar16[-0x10];
  puVar20 = (undefined4 *)puVar16[-0xf];
  auStack_4b8 = SUB84(plVar21,0);
  uStack_4b4 = (undefined2)((ulong)plVar21 >> 0x20);
  uStack_4b2 = (undefined2)((ulong)plVar21 >> 0x30);
  uStack_4b0 = uStack_4b0 & 0xffffff00;
  lVar18 = (long)puVar20 - (long)puVar29;
  auStack_438 = (undefined1  [8])plVar22;
  plStack_430 = plVar21;
  plStack_428 = plVar21;
  if (lVar18 != 0) {
    if (0x555555555555555 < (ulong)((lVar18 >> 4) * -0x5555555555555555)) goto LAB_0a60ba2e;
    puVar24 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar18);
    if (puVar24 == (undefined4 *)0x0) {
      func_0x0eec74c0(lVar18,0);
    }
    *plVar21 = (long)puVar24;
    plVar21[1] = (long)puVar24;
    plVar21[2] = lVar18 + (long)puVar24;
    uStack_120 = &puStack_460;
    uStack_118 = (long *)auStack_498;
    uStack_110 = uStack_110 & 0xffffffffffffff00;
    puStack_460 = puVar24;
    uStack_128 = (undefined1  [8])plVar21;
    do {
      *puVar24 = *puVar29;
      *(undefined2 *)(puVar24 + 3) = *(undefined2 *)(puVar29 + 3);
      puVar24[2] = puVar29[2];
      auStack_498 = (undefined1  [8])puVar24;
      if ((*(byte *)(puVar29 + 4) & 1) == 0) {
        *(undefined8 *)(puVar24 + 8) = *(undefined8 *)(puVar29 + 8);
        uVar4 = puVar29[5];
        uVar5 = puVar29[6];
        uVar6 = puVar29[7];
        puVar24[4] = puVar29[4];
        puVar24[5] = uVar4;
        puVar24[6] = uVar5;
        puVar24[7] = uVar6;
      }
      else {
        FUN_0412e5e0(puVar24 + 4,*(undefined8 *)(puVar29 + 8),*(undefined8 *)(puVar29 + 6));
      }
      puVar24[10] = puVar29[10];
      puVar29 = puVar29 + 0xc;
      puVar24 = (undefined4 *)((long)auStack_498 + 0x30);
    } while (puVar29 != puVar20);
    plVar21[1] = (long)puVar24;
    auStack_498 = (undefined1  [8])puVar24;
  }
  if ((*(byte *)(puVar16 + -0xd) & 1) == 0) {
    plVar21[5] = puVar16[-0xb];
    lVar18 = puVar16[-0xc];
    plVar21[3] = puVar16[-0xd];
    plVar21[4] = lVar18;
  }
  else {
    FUN_0412e5e0(plVar21 + 3,puVar16[-0xb],puVar16[-0xc]);
  }
  *(undefined1 *)(plVar21 + 8) = *(undefined1 *)(puVar16 + -8);
  uVar4 = *(undefined4 *)((long)puVar16 + -0x4c);
  uVar5 = *(undefined4 *)(puVar16 + -9);
  uVar6 = *(undefined4 *)((long)puVar16 + -0x44);
  *(undefined4 *)(plVar21 + 6) = *(undefined4 *)(puVar16 + -10);
  *(undefined4 *)((long)plVar21 + 0x34) = uVar4;
  *(undefined4 *)(plVar21 + 7) = uVar5;
  *(undefined4 *)((long)plVar21 + 0x3c) = uVar6;
  plVar12 = (long *)puVar16[-2];
  if (plVar12 == (long *)0x0) {
    plVar21[0xe] = 0;
  }
  else if (plVar12 == puVar16 + -6) {
    plVar21[0xe] = (long)(plVar21 + 10);
    (**(code **)(*(long *)puVar16[-2] + 0x18))();
  }
  else {
    lVar18 = (**(code **)(*plVar12 + 0x10))();
    plVar21[0xe] = lVar18;
  }
  plVar21 = plStack_430;
  plStack_428 = plStack_428 + 0x10;
  plVar12 = (long *)puVar13[0x15];
  plVar22 = (long *)puVar13[0x16];
  lVar18 = (long)plVar22 - (long)plVar12;
  plVar34 = plStack_428;
  if (lVar18 != 0) {
    plVar37 = plStack_430 + (lVar18 >> 7) * -0x10 + 10;
    plVar34 = plVar12;
    do {
      plVar37[-10] = 0;
      plVar37[-9] = 0;
      plVar37[-8] = 0;
      lVar25 = plVar34[1];
      plVar37[-10] = *plVar34;
      plVar37[-9] = lVar25;
      plVar37[-8] = plVar34[2];
      *plVar34 = 0;
      plVar34[1] = 0;
      plVar34[2] = 0;
      plVar37[-5] = plVar34[5];
      lVar25 = plVar34[4];
      plVar37[-7] = plVar34[3];
      plVar37[-6] = lVar25;
      plVar34[3] = 0;
      plVar34[4] = 0;
      plVar34[5] = 0;
      *(char *)(plVar37 + -2) = (char)plVar34[8];
      uVar4 = *(undefined4 *)((long)plVar34 + 0x34);
      lVar25 = plVar34[7];
      uVar5 = *(undefined4 *)((long)plVar34 + 0x3c);
      *(int *)(plVar37 + -4) = (int)plVar34[6];
      *(undefined4 *)((long)plVar37 + -0x1c) = uVar4;
      *(int *)(plVar37 + -3) = (int)lVar25;
      *(undefined4 *)((long)plVar37 + -0x14) = uVar5;
      plVar3 = (long *)plVar34[0xe];
      if (plVar3 == (long *)0x0) {
        plVar37[4] = 0;
      }
      else if (plVar34 + 10 == plVar3) {
        plVar37[4] = (long)plVar37;
        (**(code **)(*(long *)plVar34[0xe] + 0x18))((long *)plVar34[0xe],plVar37);
      }
      else {
        plVar37[4] = (long)plVar3;
        plVar34[0xe] = 0;
      }
      plVar34 = plVar34 + 0x10;
      plVar37 = plVar37 + 0x10;
    } while (plVar34 != plVar22);
    do {
      plVar34 = (long *)plVar12[0xe];
      if (plVar34 == plVar12 + 10) {
        lVar25 = 0x20;
LAB_0a60a7b5:
        (**(code **)(*plVar34 + lVar25))();
        bVar1 = *(byte *)(plVar12 + 3);
      }
      else {
        lVar25 = 0x28;
        if (plVar34 != (long *)0x0) goto LAB_0a60a7b5;
        bVar1 = *(byte *)(plVar12 + 3);
      }
      if ((bVar1 & 1) != 0) {
        thunk_FUN_0ee326a0(plVar12[5],plVar12[3] & 0xfffffffffffffffe);
      }
      lVar25 = *plVar12;
      if (lVar25 != 0) {
        lVar35 = plVar12[1];
        lVar32 = lVar25;
        if (lVar25 != lVar35) {
          do {
            if ((*(byte *)(lVar35 + -0x20) & 1) != 0) {
              thunk_FUN_0ee326a0(*(undefined8 *)(lVar35 + -0x10),
                                 *(ulong *)(lVar35 + -0x20) & 0xfffffffffffffffe);
            }
            lVar35 = lVar35 + -0x30;
          } while (lVar35 != lVar25);
          lVar32 = *plVar12;
        }
        plVar12[1] = lVar25;
        thunk_FUN_0ee326a0(lVar32,plVar12[2] - lVar32);
      }
      plVar12 = plVar12 + 0x10;
    } while (plVar12 != plVar22);
    plVar12 = (long *)*plVar23;
    plVar34 = plStack_428;
  }
  plVar22 = plStack_480;
  puVar13[0x15] = (long)plVar21 - lVar18;
  puVar13[0x16] = plVar34;
  lVar18 = puVar13[0x17];
  puVar13[0x17] = uStack_420;
  plStack_430 = plVar12;
  plStack_428 = plVar12;
  if (plVar12 != (long *)0x0) {
    thunk_FUN_0ee326a0(plVar12,lVar18 - (long)plVar12);
  }
  puVar13[0x16] = plVar34;
joined_r0x0a60a845:
  if (((ulong)uStack_458 & 1) != 0) {
    thunk_FUN_0ee326a0(lStack_448,(ulong)uStack_458 & 0xfffffffffffffffe);
  }
  puVar16 = *(undefined8 **)(lStack_440 + 0x78);
  if (puVar16 < *(undefined8 **)(lStack_440 + 0x80)) {
    *puVar16 = 0;
    puVar16[1] = 0;
    puVar16[2] = 0;
    uVar14 = puVar13[1];
    *puVar16 = *puVar13;
    puVar16[1] = uVar14;
    puVar16[2] = puVar13[2];
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[2] = 0;
    puVar16[5] = puVar13[5];
    uVar14 = puVar13[4];
    puVar16[3] = puVar13[3];
    puVar16[4] = uVar14;
    puVar13[3] = 0;
    puVar13[4] = 0;
    puVar13[5] = 0;
    uVar14 = puVar13[7];
    uVar4 = *(undefined4 *)(puVar13 + 8);
    uVar5 = *(undefined4 *)((long)puVar13 + 0x44);
    uVar6 = *(undefined4 *)(puVar13 + 9);
    uVar7 = *(undefined4 *)((long)puVar13 + 0x4c);
    puVar16[6] = puVar13[6];
    puVar16[7] = uVar14;
    *(undefined4 *)(puVar16 + 8) = uVar4;
    *(undefined4 *)((long)puVar16 + 0x44) = uVar5;
    *(undefined4 *)(puVar16 + 9) = uVar6;
    *(undefined4 *)((long)puVar16 + 0x4c) = uVar7;
    puVar16[10] = 0;
    puVar16[0xb] = 0;
    puVar16[0xc] = 0;
    uVar14 = puVar13[0xb];
    puVar16[10] = puVar13[10];
    puVar16[0xb] = uVar14;
    puVar16[0xc] = puVar13[0xc];
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    puVar13[0xc] = 0;
    uVar14 = puVar13[0xe];
    puVar16[0xd] = puVar13[0xd];
    puVar16[0xe] = uVar14;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar16[0xf] = 0;
    puVar16[0x10] = 0;
    puVar16[0x11] = 0;
    uVar14 = puVar13[0x10];
    puVar16[0xf] = puVar13[0xf];
    puVar16[0x10] = uVar14;
    puVar16[0x11] = puVar13[0x11];
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = 0;
    puVar16[0x12] = 0;
    puVar16[0x13] = 0;
    puVar16[0x14] = 0;
    uVar14 = puVar13[0x13];
    puVar16[0x12] = puVar13[0x12];
    puVar16[0x13] = uVar14;
    puVar16[0x14] = puVar13[0x14];
    puVar13[0x12] = 0;
    puVar13[0x13] = 0;
    puVar13[0x14] = 0;
    puVar16[0x15] = 0;
    puVar16[0x16] = 0;
    puVar16[0x17] = 0;
    uVar14 = puVar13[0x16];
    puVar16[0x15] = puVar13[0x15];
    puVar16[0x16] = uVar14;
    puVar16[0x17] = puVar13[0x17];
    *plVar23 = 0;
    puVar13[0x16] = 0;
    puVar13[0x17] = 0;
    puVar16[0x18] = 0;
    puVar16[0x19] = 0;
    puVar16[0x1a] = 0;
    uVar14 = puVar13[0x19];
    puVar16[0x18] = puVar13[0x18];
    puVar16[0x19] = uVar14;
    puVar16[0x1a] = puVar13[0x1a];
    puVar13[0x18] = 0;
    puVar13[0x19] = 0;
    puVar13[0x1a] = 0;
    puVar16[0x1b] = 0;
    puVar16[0x1c] = 0;
    puVar16[0x1d] = 0;
    uVar4 = *(undefined4 *)((long)puVar13 + 0xdc);
    uVar5 = *(undefined4 *)(puVar13 + 0x1c);
    uVar6 = *(undefined4 *)((long)puVar13 + 0xe4);
    *(undefined4 *)(puVar16 + 0x1b) = *(undefined4 *)(puVar13 + 0x1b);
    *(undefined4 *)((long)puVar16 + 0xdc) = uVar4;
    *(undefined4 *)(puVar16 + 0x1c) = uVar5;
    *(undefined4 *)((long)puVar16 + 0xe4) = uVar6;
    puVar16[0x1d] = puVar13[0x1d];
    puVar13[0x1b] = 0;
    puVar13[0x1c] = 0;
    puVar13[0x1d] = 0;
    puVar16 = puVar16 + 0x1e;
  }
  else {
    puVar16 = (undefined8 *)func_0x0d85e840(lStack_148,puVar13);
  }
  *(undefined8 **)(lStack_440 + 0x78) = puVar16;
  func_0x0651ffe0(&uStack_300);
  plVar21 = uStack_318;
  plVar12 = uStack_310;
  if (uStack_318 != (long *)0x0) {
    for (; plVar21 != plVar12; plVar12 = plVar12 + -6) {
      if ((*(byte *)(plVar12 + -4) & 1) != 0) {
        thunk_FUN_0ee326a0(plVar12[-2],plVar12[-4] & 0xfffffffffffffffe);
      }
    }
    uStack_310 = plVar21;
    thunk_FUN_0ee326a0(uStack_318,(long)uStack_308 - (long)uStack_318);
  }
  puVar13 = puVar13 + 0x1e;
  if (puVar13 == puStack_138) goto LAB_0a60a9a8;
  goto LAB_0a608789;
}



/* ---- referenced strings ----
 * 0x11a552c  customComponentParameters
 * 0x11a5535  ponentParameters
 * 0x11deadd  ItemCustomComponentInstance
 * 0x11deae8  omponentInstance
 * 0xf5448f8  &minecraft:inventory
 * 0xf544900  ft:inventory
 * 0xf544908  tory
 * 0xf544910   minecraft:potion
 * 0xf544918  ft:potion
 */
