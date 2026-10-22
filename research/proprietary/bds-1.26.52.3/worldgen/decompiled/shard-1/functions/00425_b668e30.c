/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb768e30 (ELF vaddr 0xb668e30)
 * Label: caller-of-callee
 * Body:  [[0b768e30, 0b76943e] [0b769440, 0b76987b] [0b769880, 0b76a3e1] [0b76a3f0, 0b76a810] [0b76a820, 0b76aa34] [0b76aa40, 0b76ac70] [0b76ac80, 0b76ad92]]
 * Ghidra: FUN_0b768e30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0b768e30(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  code *pcVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined8 uStack_528;
  undefined8 uStack_520;
  long *plStack_518;
  undefined1 uStack_510;
  uint uStack_508;
  undefined4 uStack_504;
  undefined1 uStack_500;
  undefined2 uStack_4ff;
  undefined1 uStack_4fd;
  undefined4 uStack_4fc;
  long lStack_4f8;
  undefined4 uStack_4f0;
  undefined1 uStack_4ec;
  undefined2 uStack_4eb;
  undefined1 uStack_4e9;
  undefined1 uStack_4e8;
  undefined2 uStack_4e7;
  undefined1 uStack_4e5;
  undefined4 uStack_4e4;
  long lStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  long *plStack_490;
  long *plStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  uint uStack_464;
  long lStack_460;
  uint *puStack_458;
  undefined1 uStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  long lStack_408;
  undefined1 auStack_400 [16];
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  long lStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  undefined8 uStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  long *plStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  code *pcStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c0 [24];
  code *pcStack_2a8;
  undefined1 auStack_280 [24];
  code *pcStack_268;
  undefined1 auStack_238 [24];
  code *pcStack_220;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 uStack_1e8;
  undefined2 uStack_1e7;
  undefined5 uStack_1e5;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined1 auStack_1c8 [16];
  long lStack_1b8;
  code *pcStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined1 auStack_180 [24];
  code *apcStack_168 [3];
  code *pcStack_150;
  undefined1 auStack_140 [24];
  code *pcStack_128;
  undefined1 auStack_120 [24];
  code *pcStack_108;
  undefined1 auStack_f8 [24];
  code *pcStack_e0;
  long *plStack_40;
  long lStack_38;
  
  uStack_1f8 = CONCAT31((int3)_DAT_013bacf5,0x22);
  uStack_1f4 = (undefined4)((ulong)_DAT_013bacf5 >> 0x18);
  uStack_1f0._0_1_ = (undefined1)((ulong)_DAT_013bacf5 >> 0x38);
  uStack_1f0._1_3_ = (undefined3)_UNK_013bacfd;
  uStack_1ec = (undefined4)((ulong)_UNK_013bacfd >> 0x18);
  uStack_1e8 = (undefined1)((ulong)_UNK_013bacfd >> 0x38);
  uStack_1e7 = 0x65;
  lStack_448 = 0;
  lStack_440 = 0;
  lStack_438 = 0;
  lStack_430 = 0;
  lStack_428 = 0;
  lStack_420 = 0;
  uStack_418 = 0;
  uStack_410 = 0;
  lStack_408 = 0;
  func_0x048b1dc0(auStack_400);
  func_0x048b1dc0(&uStack_3f0);
  uStack_350 = 0;
  lStack_348 = 0;
  lStack_360 = 0;
  uStack_358 = 0;
  lStack_370 = 0;
  lStack_368 = 0;
  lStack_380 = 0;
  lStack_378 = 0;
  uStack_390 = 0;
  lStack_388 = 0;
  lStack_3a0 = 0;
  uStack_398 = 0;
  puStack_3b0 = (undefined8 *)0x0;
  puStack_3a8 = (undefined8 *)0x0;
  lStack_3c0 = 0;
  lStack_3b8 = 0;
  lStack_3d0 = 0;
  lStack_3c8 = 0;
  lStack_3e0 = 0;
  lStack_3d8 = 0;
  if ((uStack_418 & 1) == 0) {
    lStack_408 = CONCAT53(uStack_1e5,CONCAT21(uStack_1e7,uStack_1e8));
    uStack_418 = CONCAT44(uStack_1f4,uStack_1f8);
    uStack_410 = CONCAT44(uStack_1ec,uStack_1f0);
  }
  else {
    func_0x04885120(&uStack_418,(long)&uStack_1f8 + 1,0x11);
    if ((uStack_1f8 & 1) != 0) {
      func_0x0412a280(CONCAT53(uStack_1e5,CONCAT21(uStack_1e7,uStack_1e8)),
                      CONCAT44(uStack_1f4,uStack_1f8) & 0xfffffffffffffffe);
    }
  }
  uStack_338 = CONCAT44(uStack_338._4_4_,0x646904);
  func_0x065af670(&uStack_1f8);
  if (((ulong)uStack_1e0 & 1) == 0) {
    if ((uStack_338 & 1) == 0) {
      pcStack_1d0 = pcStack_328;
      uStack_1e0 = (undefined *)uStack_338;
    }
    else {
      func_0x04885070(&uStack_1e0,pcStack_328,uStack_330);
    }
  }
  else {
    uVar17 = uStack_338 >> 1 & 0x7f;
    pcVar14 = (code *)((long)&uStack_338 + 1);
    if ((uStack_338 & 1) != 0) {
      uVar17 = uStack_330;
      pcVar14 = pcStack_328;
    }
    func_0x04885120(&uStack_1e0,pcVar14,uVar17);
  }
  auStack_1c8 = func_0x0d8543b0();
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar15 = uStack_1a0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = &UNK_0f2da908;
  pcStack_1a8 = (code *)(puVar13 + 3);
  *(undefined1 *)(puVar13 + 4) = 1;
  puVar13[5] = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[3] = &UNK_0f2da958;
  if (uStack_1a0 == (long *)0x0) {
LAB_0b7690a1:
    uStack_1a0 = puVar13;
    if (uStack_390 <= uStack_398) {
LAB_0b7690ef:
      uStack_398 = func_0x065b01f0(&lStack_3a0,&uStack_1f8);
      goto LAB_0b769107;
    }
  }
  else {
    LOCK();
    plVar16 = uStack_1a0 + 1;
    lVar20 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar20 != 0) goto LAB_0b7690a1;
    lVar20 = *uStack_1a0;
    uStack_1a0 = puVar13;
    (**(code **)(lVar20 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    if (uStack_390 <= uStack_398) goto LAB_0b7690ef;
  }
  uVar17 = uStack_398;
  func_0x065b0410(uStack_398,&uStack_1f8);
  uStack_398 = uVar17 + 0x1b0;
LAB_0b769107:
  lVar20 = uStack_398 + -0x1b0;
  func_0x0652dc20(&uStack_1f8);
  func_0x064e40a0(lVar20);
  if ((uStack_338 & 1) != 0) {
    func_0x0412a280(pcStack_328,uStack_338 & 0xfffffffffffffffe);
  }
  uStack_528 = (uint *)CONCAT35(uStack_528._5_3_,0x736f7006);
  func_0x065134a0(&uStack_1f8,&uStack_528);
  pcStack_328 = (code *)0x0;
  uStack_310 = 0;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  pcStack_2e8 = (code *)0x0;
  uStack_2e0 = 0;
  uStack_2f8 = 0;
  pcStack_2f0 = (code *)0x0;
  uStack_308 = 0;
  uStack_300 = 0;
  uStack_338 = 0;
  uStack_330 = 0;
  puStack_320 = (undefined *)0x6d6f694274656714;
  plStack_318 = (long *)0x744165;
  func_0x066bd9c0(&uStack_4d8,&uStack_1f8);
  pcVar14 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar14 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar14 + 8) = 0;
  *(undefined8 *)(pcVar14 + 0x10) = 0;
  *(undefined **)pcVar14 = &UNK_0f2da9b8;
  uVar10 = func_0x0d858500(&uStack_4d8);
  pcVar1 = pcVar14 + 0x18;
  pcVar14[0x20] = (code)0x1;
  *(undefined4 *)(pcVar14 + 0x24) = uVar10;
  *(undefined4 *)(pcVar14 + 0x28) = 0;
  *(undefined8 *)(pcVar14 + 0x30) = 0;
  *(undefined8 *)(pcVar14 + 0x38) = 0;
  *(undefined8 *)(pcVar14 + 0x40) = 0;
  *(undefined **)(pcVar14 + 0x18) = &UNK_0f2daa08;
  *(undefined4 *)(pcVar14 + 0x48) = (undefined4)uStack_4d8;
  *(undefined4 *)(pcVar14 + 0x4c) = uStack_4d8._4_4_;
  *(undefined4 *)(pcVar14 + 0x50) = (undefined4)uStack_4d0;
  *(undefined4 *)(pcVar14 + 0x54) = uStack_4d0._4_4_;
  *(long *)(pcVar14 + 0x58) = lStack_4c8;
  uStack_4d8 = 0;
  uStack_4d0 = 0;
  lStack_4c8 = 0;
  uVar10 = func_0x0d858620(pcVar1);
  pcVar6 = pcStack_2e8;
  *(undefined4 *)(pcVar14 + 0x28) = uVar10;
  pcStack_2f0 = pcVar1;
  if (pcStack_2e8 != (code *)0x0) {
    LOCK();
    plVar15 = (long *)((long)pcStack_2e8 + 8);
    lVar20 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      lVar20 = *(long *)pcStack_2e8;
      pcStack_2e8 = pcVar14;
      (**(code **)(lVar20 + 0x10))(pcVar6);
      func_0x0412c2d0(pcVar6);
      pcVar14 = pcStack_2e8;
    }
  }
  pcStack_2e8 = pcVar14;
  cVar9 = func_0x0694aec0(&uStack_338,&uStack_1f8);
  if (cVar9 == '\0') {
    puVar13 = (undefined8 *)0xf6b6d78;
    lVar20 = uStack_4d8;
  }
  else {
    if (puStack_3b0 < puStack_3a8) {
      *puStack_3b0 = 0;
      puStack_3b0[1] = 0;
      puStack_3b0[2] = 0;
      *puStack_3b0 = uStack_338;
      puStack_3b0[1] = uStack_330;
      puStack_3b0[2] = pcStack_328;
      uStack_338 = 0;
      uStack_330 = 0;
      pcStack_328 = (code *)0x0;
      puStack_3b0[5] = uStack_310;
      puStack_3b0[3] = puStack_320;
      puStack_3b0[4] = plStack_318;
      puStack_320 = (undefined *)0x0;
      plStack_318 = (long *)0x0;
      uStack_310 = 0;
      puStack_3b0[6] = 0;
      puStack_3b0[7] = 0;
      puStack_3b0[8] = 0;
      puStack_3b0[6] = uStack_308;
      puStack_3b0[7] = uStack_300;
      puStack_3b0[8] = uStack_2f8;
      uStack_308 = 0;
      uStack_300 = 0;
      uStack_2f8 = 0;
      puStack_3b0[9] = pcStack_2f0;
      puStack_3b0[10] = pcStack_2e8;
      pcStack_2f0 = (code *)0x0;
      pcStack_2e8 = (code *)0x0;
      puStack_3b0[0xb] = 0;
      puStack_3b0[0xc] = 0;
      puStack_3b0[0xd] = 0;
      *(undefined4 *)(puStack_3b0 + 0xb) = (undefined4)uStack_2e0;
      *(undefined4 *)((long)puStack_3b0 + 0x5c) = uStack_2e0._4_4_;
      *(undefined4 *)(puStack_3b0 + 0xc) = (undefined4)uStack_2d8;
      *(undefined4 *)((long)puStack_3b0 + 100) = uStack_2d8._4_4_;
      puStack_3b0[0xd] = uStack_2d0;
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      puStack_3b0 = puStack_3b0 + 0xe;
    }
    else {
      puStack_3b0 = (undefined8 *)func_0x0652ac80(&lStack_3b8,&uStack_338);
    }
    puVar13 = puStack_3b0 + -0xe;
    lVar20 = uStack_4d8;
  }
  uStack_4d8 = lVar20;
  if (lVar20 != 0) {
    if (lVar20 != uStack_4d0) {
      lVar18 = uStack_4d0 + -0x40;
      do {
        if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
          (**(code **)(lVar18 + 0x18))(lVar18);
        }
        if (*(code **)(lVar18 + -0x30) != (code *)0x0) {
          (**(code **)(lVar18 + -0x30))(lVar18 + -0x48);
        }
        if (*(code **)(lVar18 + -0x70) != (code *)0x0) {
          (**(code **)(lVar18 + -0x70))(lVar18 + -0x88);
        }
        if (*(code **)(lVar18 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar18 + -0xb0))(lVar18 + -200);
        }
        lVar21 = lVar18 + -0xd8;
        lVar18 = lVar18 + -0x118;
      } while (lVar21 != lVar20);
    }
    uStack_4d0 = lVar20;
    func_0x0412a280(uStack_4d8,lStack_4c8 - uStack_4d8);
  }
  func_0x05f93280(&uStack_338);
  func_0x064e40a0(puVar13);
  if (pcStack_e0 != (code *)0x0) {
    (*pcStack_e0)(auStack_f8);
  }
  if (pcStack_128 != (code *)0x0) {
    (*pcStack_128)(auStack_140);
  }
  if (apcStack_168[0] != (code *)0x0) {
    (*apcStack_168[0])(auStack_180);
  }
  if (pcStack_1a8 != (code *)0x0) {
    (*pcStack_1a8)(auStack_1c8 + 8);
  }
  if ((uStack_1f8 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_1e5,CONCAT21(uStack_1e7,uStack_1e8)),
                    CONCAT44(uStack_1f4,uStack_1f8) & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_528 & 1) != 0) {
    func_0x0412a280(plStack_518,(ulong)uStack_528 & 0xfffffffffffffffe);
  }
  uStack_1e8 = 0;
  uStack_1e7 = 0;
  uStack_1e5 = 0;
  uStack_198 = 0;
  pcStack_190 = (code *)0x0;
  pcStack_1a8 = (code *)0x0;
  uStack_1a0 = (long *)0x0;
  lStack_1b8 = 0;
  pcStack_1b0 = (code *)0x0;
  auStack_1c8._0_8_ = 0;
  auStack_1c8._8_8_ = 0;
  uStack_1d8 = (long *)0x0;
  pcStack_1d0 = (code *)0x0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1e0 = (undefined *)0x796f72747365640e;
  uStack_4d8 = 0;
  uStack_4d0 = 0;
  lStack_4c8 = 0;
  pcVar14 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar14 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar14 + 8) = 0;
  *(undefined8 *)(pcVar14 + 0x10) = 0;
  *(undefined **)pcVar14 = &UNK_0f2daa88;
  plStack_40 = param_1;
  uVar10 = func_0x0d858500(&uStack_4d8);
  pcVar1 = pcVar14 + 0x18;
  pcVar14[0x20] = (code)0x0;
  *(undefined4 *)(pcVar14 + 0x24) = uVar10;
  *(undefined4 *)(pcVar14 + 0x28) = 0;
  *(undefined8 *)(pcVar14 + 0x30) = 0;
  *(undefined8 *)(pcVar14 + 0x38) = 0;
  *(undefined8 *)(pcVar14 + 0x40) = 0;
  *(undefined **)(pcVar14 + 0x18) = &UNK_0f2daad8;
  *(undefined8 *)(pcVar14 + 0x48) = 0;
  *(undefined8 *)(pcVar14 + 0x50) = 0;
  *(undefined8 *)(pcVar14 + 0x58) = 0;
  uStack_4d8 = 0;
  uStack_4d0 = 0;
  lStack_4c8 = 0;
  uVar10 = func_0x0d858620(pcVar1);
  pcVar6 = pcStack_1a8;
  *(undefined4 *)(pcVar14 + 0x28) = uVar10;
  pcStack_1b0 = pcVar1;
  if (pcStack_1a8 != (code *)0x0) {
    LOCK();
    pcVar1 = pcStack_1a8 + 8;
    lVar20 = *(long *)pcVar1;
    *(long *)pcVar1 = *(long *)pcVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      lVar20 = *(long *)pcStack_1a8;
      pcStack_1a8 = pcVar14;
      (**(code **)(lVar20 + 0x10))(pcVar6);
      func_0x0412c2d0(pcVar6);
      pcVar14 = pcStack_1a8;
    }
  }
  pcStack_1a8 = pcVar14;
  uStack_338 = 0;
  uStack_330 = 0;
  pcStack_328 = (code *)0x0;
  (**(code **)(*(long *)pcStack_1b0 + 0x20))();
  uVar8 = auStack_1c8._0_8_;
  lVar20 = auStack_1c8._8_8_;
  if (auStack_1c8._0_8_ != 0) {
    while (uVar8 != lVar20) {
      func_0x05fe8450(lVar20 + -0x140);
      lVar20 = lVar20 + -0x140;
    }
    auStack_1c8._8_8_ = uVar8;
    func_0x0412a280(auStack_1c8._0_8_,lStack_1b8 - auStack_1c8._0_8_);
  }
  auStack_1c8._0_8_ = 0;
  auStack_1c8._8_8_ = 0;
  lStack_1b8 = 0;
  if (puStack_3b0 < puStack_3a8) {
    *puStack_3b0 = 0;
    puStack_3b0[1] = 0;
    puStack_3b0[2] = 0;
    *puStack_3b0 = CONCAT44(uStack_1f4,uStack_1f8);
    puStack_3b0[1] = CONCAT44(uStack_1ec,uStack_1f0);
    puStack_3b0[2] = CONCAT53(uStack_1e5,CONCAT21(uStack_1e7,uStack_1e8));
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1e7 = 0;
    uStack_1e5 = 0;
    puStack_3b0[5] = pcStack_1d0;
    puStack_3b0[3] = uStack_1e0;
    puStack_3b0[4] = uStack_1d8;
    uStack_1e0 = (undefined *)0x0;
    uStack_1d8 = (long *)0x0;
    pcStack_1d0 = (code *)0x0;
    puStack_3b0[6] = 0;
    puStack_3b0[7] = 0;
    puStack_3b0[8] = 0;
    puStack_3b0[6] = 0;
    puStack_3b0[7] = 0;
    puStack_3b0[8] = 0;
    auStack_1c8._0_8_ = 0;
    auStack_1c8._8_8_ = 0;
    lStack_1b8 = 0;
    puStack_3b0[9] = pcStack_1b0;
    puStack_3b0[10] = pcStack_1a8;
    pcStack_1b0 = (code *)0x0;
    pcStack_1a8 = (code *)0x0;
    puStack_3b0[0xb] = 0;
    puStack_3b0[0xc] = 0;
    puStack_3b0[0xd] = 0;
    *(undefined4 *)(puStack_3b0 + 0xb) = (undefined4)uStack_1a0;
    *(undefined4 *)((long)puStack_3b0 + 0x5c) = uStack_1a0._4_4_;
    *(undefined4 *)(puStack_3b0 + 0xc) = (undefined4)uStack_198;
    *(undefined4 *)((long)puStack_3b0 + 100) = uStack_198._4_4_;
    puStack_3b0[0xd] = pcStack_190;
    uStack_1a0 = (long *)0x0;
    uStack_198 = 0;
    pcStack_190 = (code *)0x0;
    puVar13 = puStack_3b0 + 0xe;
    lVar20 = uStack_4d8;
  }
  else {
    puVar13 = (undefined8 *)func_0x0652ac80(&lStack_3b8,&uStack_1f8);
    lVar20 = uStack_4d8;
  }
  uStack_4d8 = lVar20;
  puStack_3b0 = puVar13;
  if (lVar20 != 0) {
    if (lVar20 != uStack_4d0) {
      lVar18 = uStack_4d0 + -0x40;
      do {
        if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
          (**(code **)(lVar18 + 0x18))(lVar18);
        }
        if (*(code **)(lVar18 + -0x30) != (code *)0x0) {
          (**(code **)(lVar18 + -0x30))(lVar18 + -0x48);
        }
        if (*(code **)(lVar18 + -0x70) != (code *)0x0) {
          (**(code **)(lVar18 + -0x70))(lVar18 + -0x88);
        }
        if (*(code **)(lVar18 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar18 + -0xb0))(lVar18 + -200);
        }
        lVar21 = lVar18 + -0xd8;
        lVar18 = lVar18 + -0x118;
      } while (lVar21 != lVar20);
    }
    func_0x0412a280(uStack_4d8,lStack_4c8 - uStack_4d8);
  }
  func_0x05f93280(&uStack_1f8);
  func_0x064e40a0(puVar13 + -0xe);
  uStack_4f0 = 0x77656e12;
  uStack_4ec = 0x42;
  uStack_4eb = 0x6f69;
  uStack_4e9 = 0x6d;
  uStack_4e8 = 0x65;
  uStack_4e7 = 0x73;
  uStack_338 = 0;
  uStack_330 = 0;
  pcStack_328 = (code *)0x0;
  func_0x048b1dc0(&puStack_320);
  func_0x0652b590(&uStack_310);
  if ((uStack_338 & 1) == 0) {
    if ((uStack_4f0 & 1) == 0) {
      pcStack_328 = (code *)lStack_4e0;
      uStack_338 = CONCAT44(CONCAT13(uStack_4e9,CONCAT21(uStack_4eb,uStack_4ec)),uStack_4f0);
      uStack_330 = CONCAT44(uStack_4e4,CONCAT13(uStack_4e5,CONCAT21(uStack_4e7,uStack_4e8)));
    }
    else {
      func_0x04885070(&uStack_338,lStack_4e0,
                      CONCAT44(uStack_4e4,CONCAT13(uStack_4e5,CONCAT21(uStack_4e7,uStack_4e8))));
    }
  }
  else {
    bVar23 = (uStack_4f0 & 1) != 0;
    lVar20 = (long)&uStack_4f0 + 1;
    if (bVar23) {
      lVar20 = lStack_4e0;
    }
    uVar17 = (ulong)((byte)uStack_4f0 >> 1);
    if (bVar23) {
      uVar17 = CONCAT44(uStack_4e4,CONCAT13(uStack_4e5,CONCAT21(uStack_4e7,uStack_4e8)));
    }
    func_0x04885120(&uStack_338,lVar20,uVar17);
  }
  plVar15 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (plVar15 == (long *)0x0) {
    func_0x048b0de0(&uStack_1f8,&uStack_4d8);
    uVar7 = uStack_1ec;
    uVar10 = uStack_1f0;
    uRam000000000f54fd94 = uStack_1f4;
    _DAT_0f54fd90 = uStack_1f8;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    plVar15 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar10;
    uRam000000000f54fd9c = uVar7;
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar16 = plVar15 + 1;
      lVar20 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        func_0x0412c2d0(plVar15);
      }
    }
    plVar15 = (long *)CONCAT44(uStack_1ec,uStack_1f0);
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar16 = plVar15 + 1;
      lVar20 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        func_0x0412c2d0(plVar15);
      }
    }
    plVar15 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f6b8a00 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6b8a00), iVar12 != 0)) {
    func_0x0b80fd30();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6b8980,0xf53dab8);
    func_0x0410844d(&DAT_0f6b8a00);
  }
  plVar16 = (long *)(*plVar15 +
                    (ulong)((int)((ulong)(plVar15[1] - *plVar15) >> 3) - 1U &
                           *(uint *)(_DAT_0f6b8980 + 4)) * 8);
  do {
    lVar20 = *plVar16;
    if (lVar20 == -1) goto LAB_0b769ac0;
    plVar16 = (long *)(plVar15[3] + lVar20 * 0x18);
  } while (*(uint *)(plVar15[3] + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f6b8980 + 4));
  if (plVar16 == (long *)plVar15[4]) {
LAB_0b769ac0:
    puStack_320 = &DAT_0f6b8980;
  }
  else {
    puStack_320 = (undefined *)plVar16[2];
  }
  lStack_4c8 = 0;
  uStack_478 = 0;
  uStack_470 = 0;
  plStack_488 = (long *)0x0;
  uStack_480 = 0;
  puStack_498 = (undefined8 *)0x0;
  plStack_490 = (long *)0x0;
  puStack_4a8 = (undefined8 *)0x0;
  puStack_4a0 = (undefined8 *)0x0;
  uStack_4d8 = 0;
  uStack_4d0 = 0;
  uStack_4c0 = 0x75636c6163657222;
  uStack_4b8 = 0x6d6f69426574616c;
  uStack_4b0 = 0x7365;
  plStack_318 = plVar15;
  func_0x06523ef0(&uStack_1f8,&uStack_310);
  uStack_508 = 0;
  uStack_504 = 0;
  uStack_500 = 0;
  uStack_4ff = 0;
  uStack_4fd = 0;
  uStack_4fc = 0;
  lStack_4f8 = 0;
  uStack_450 = 0;
  puStack_458 = &uStack_508;
  lStack_460 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x118);
  if (lStack_460 == 0) {
    func_0x0eec74c0(0x118,0);
  }
  uStack_508 = (uint)lStack_460;
  uStack_504 = (undefined4)((ulong)lStack_460 >> 0x20);
  uStack_500 = (undefined1)lStack_460;
  uStack_4ff = (undefined2)((ulong)lStack_460 >> 8);
  uStack_4fd = (undefined1)((ulong)lStack_460 >> 0x18);
  lStack_4f8 = lStack_460 + 0x118;
  uStack_520 = &lStack_38;
  plStack_518 = &lStack_460;
  uStack_510 = 0;
  uStack_528 = &uStack_508;
  uStack_4fc = uStack_504;
  lStack_38 = lStack_460;
  func_0x06523ef0(lStack_460,&uStack_1f8);
  lVar20 = lStack_460 + 0x118;
  uStack_500 = (undefined1)lVar20;
  uStack_4ff = (undefined2)((ulong)lVar20 >> 8);
  uStack_4fd = (undefined1)((ulong)lVar20 >> 0x18);
  uStack_4fc = (undefined4)((ulong)lVar20 >> 0x20);
  if (pcStack_108 != (code *)0x0) {
    (*pcStack_108)(auStack_120);
  }
  if (pcStack_150 != (code *)0x0) {
    (*pcStack_150)(apcStack_168);
  }
  if (pcStack_190 != (code *)0x0) {
    (*pcStack_190)(&pcStack_1a8);
  }
  if (pcStack_1d0 != (code *)0x0) {
    (*pcStack_1d0)(&uStack_1e8);
  }
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (plVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f2dab58;
  uVar10 = func_0x0d858500(&uStack_508);
  plVar16 = plVar15 + 3;
  *(undefined1 *)(plVar15 + 4) = 0;
  *(undefined4 *)((long)plVar15 + 0x24) = uVar10;
  *(undefined4 *)(plVar15 + 5) = 0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[8] = 0;
  plVar15[3] = (long)&UNK_0f2daba8;
  *(uint *)(plVar15 + 9) = uStack_508;
  *(undefined4 *)((long)plVar15 + 0x4c) = uStack_504;
  *(uint *)(plVar15 + 10) = CONCAT13(uStack_4fd,CONCAT21(uStack_4ff,uStack_500));
  *(undefined4 *)((long)plVar15 + 0x54) = uStack_4fc;
  plVar15[0xb] = lStack_4f8;
  uStack_508 = 0;
  uStack_504 = 0;
  uStack_500 = 0;
  uStack_4ff = 0;
  uStack_4fd = 0;
  uStack_4fc = 0;
  lStack_4f8 = 0;
  uVar10 = func_0x0d858620(plVar16);
  plVar2 = plStack_488;
  *(undefined4 *)(plVar15 + 5) = uVar10;
  plStack_490 = plVar16;
  if (plStack_488 != (long *)0x0) {
    LOCK();
    plVar16 = plStack_488 + 1;
    lVar20 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      lVar20 = *plStack_488;
      plStack_488 = plVar15;
      (**(code **)(lVar20 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
      plVar15 = plStack_488;
    }
  }
  plStack_488 = plVar15;
  uStack_1e8 = SUB81(pcStack_328,0);
  uStack_1e7 = (undefined2)((ulong)pcStack_328 >> 8);
  uStack_1e5 = (undefined5)((ulong)pcStack_328 >> 0x18);
  uStack_1f8 = (uint)uStack_338;
  uStack_1f4 = (undefined4)(uStack_338 >> 0x20);
  uStack_1f0 = (undefined4)uStack_330;
  uStack_1ec = (undefined4)(uStack_330 >> 0x20);
  uStack_338 = 0;
  uStack_330 = 0;
  pcStack_328 = (code *)0x0;
  uStack_1e0 = puStack_320;
  uStack_1d8 = plStack_318;
  func_0x065281f0(&pcStack_1d0,&uStack_310);
  uStack_528 = (uint *)0x0;
  uStack_520 = (long *)0x0;
  plStack_518 = (long *)0x0;
  uStack_450 = 0;
  puStack_458 = (uint *)&uStack_528;
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x140,0);
  }
  puVar3 = puVar13 + 0x28;
  uStack_528 = (uint *)puVar13;
  plStack_518 = puVar3;
  if ((uStack_1f8 & 1) == 0) {
    puVar13[2] = CONCAT53(uStack_1e5,CONCAT21(uStack_1e7,uStack_1e8));
    *puVar13 = CONCAT44(uStack_1f4,uStack_1f8);
    puVar13[1] = CONCAT44(uStack_1ec,uStack_1f0);
    uStack_520 = puVar13;
  }
  else {
    uStack_520 = puVar13;
    func_0x0412e5e0(puVar13,CONCAT53(uStack_1e5,CONCAT21(uStack_1e7,uStack_1e8)),
                    CONCAT44(uStack_1ec,uStack_1f0));
  }
  *(undefined4 *)(puVar13 + 3) = (undefined4)uStack_1e0;
  *(undefined4 *)((long)puVar13 + 0x1c) = uStack_1e0._4_4_;
  *(undefined4 *)(puVar13 + 4) = (undefined4)uStack_1d8;
  *(undefined4 *)((long)puVar13 + 0x24) = uStack_1d8._4_4_;
  func_0x06523ef0(puVar13 + 5,&pcStack_1d0);
  uStack_520 = puVar3;
  if (pcStack_e0 != (code *)0x0) {
    (*pcStack_e0)(auStack_f8);
  }
  if (pcStack_128 != (code *)0x0) {
    (*pcStack_128)(auStack_140);
  }
  if (apcStack_168[0] != (code *)0x0) {
    (*apcStack_168[0])(auStack_180);
  }
  if (pcStack_1a8 != (code *)0x0) {
    (*pcStack_1a8)(auStack_1c8 + 8);
  }
  if ((uStack_1f8 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_1e5,CONCAT21(uStack_1e7,uStack_1e8)),
                    CONCAT44(uStack_1f4,uStack_1f8) & 0xfffffffffffffffe);
  }
  uVar11 = (**(code **)(*plStack_490 + 0x20))();
  uVar22 = ((long)uStack_520 - (long)uStack_528 >> 6) * -0x3333333333333333;
  uVar17 = 0;
  if ((uVar11 != 0) && ((uint)uVar22 != 0)) {
    uVar19 = 0;
    uVar17 = 0;
    uStack_464 = uVar11;
    do {
      auVar24 = (**(code **)(*plStack_490 + 0x28))(plStack_490,uVar19);
      lVar18 = auVar24._8_8_;
      lVar20 = auVar24._0_8_;
      auVar24 = func_0x06527d70();
      if (auVar24._8_8_ == lVar18) {
        if (auVar24._0_8_ == 0) {
          lVar21 = FUN_048aead0(auVar24._8_8_);
          iVar12 = *(int *)(lVar21 + 8);
          if (lVar20 == 0) goto LAB_0b769f7e;
LAB_0b769f61:
          if (iVar12 != *(int *)(lVar20 + 8)) goto LAB_0b769f90;
        }
        else {
          iVar12 = *(int *)(auVar24._0_8_ + 8);
          if (lVar20 != 0) goto LAB_0b769f61;
LAB_0b769f7e:
          lVar21 = FUN_048aead0(lVar18);
          if (iVar12 != *(int *)(lVar21 + 8)) goto LAB_0b769f90;
        }
      }
      else {
LAB_0b769f90:
        auVar24 = func_0x06527e30();
        if (auVar24._8_8_ == lVar18) {
          if (auVar24._0_8_ == 0) {
            lVar21 = FUN_048aead0(auVar24._8_8_);
            iVar12 = *(int *)(lVar21 + 8);
          }
          else {
            iVar12 = *(int *)(auVar24._0_8_ + 8);
          }
          if (lVar20 == 0) {
            lVar21 = FUN_048aead0(lVar18);
            iVar4 = *(int *)(lVar21 + 8);
          }
          else {
            iVar4 = *(int *)(lVar20 + 8);
          }
          if (iVar12 == iVar4) goto LAB_0b76a184;
        }
        auVar24 = func_0x06527ef0();
        if (auVar24._8_8_ == lVar18) {
          if (auVar24._0_8_ == 0) {
            lVar21 = FUN_048aead0(auVar24._8_8_);
            iVar12 = *(int *)(lVar21 + 8);
          }
          else {
            iVar12 = *(int *)(auVar24._0_8_ + 8);
          }
          if (lVar20 == 0) {
            lVar21 = FUN_048aead0(lVar18);
            iVar4 = *(int *)(lVar21 + 8);
          }
          else {
            iVar4 = *(int *)(lVar20 + 8);
          }
          if (iVar12 == iVar4) goto LAB_0b76a184;
        }
        auVar24 = func_0x06527fb0();
        if (auVar24._8_8_ == lVar18) {
          if (auVar24._0_8_ == 0) {
            lVar21 = FUN_048aead0(auVar24._8_8_);
            iVar12 = *(int *)(lVar21 + 8);
          }
          else {
            iVar12 = *(int *)(auVar24._0_8_ + 8);
          }
          if (lVar20 == 0) {
            lVar21 = FUN_048aead0(lVar18);
            iVar4 = *(int *)(lVar21 + 8);
          }
          else {
            iVar4 = *(int *)(lVar20 + 8);
          }
          if (iVar12 == iVar4) goto LAB_0b76a184;
        }
        auVar24 = func_0x06528070();
        if (auVar24._8_8_ == lVar18) {
          if (auVar24._0_8_ == 0) {
            lVar21 = FUN_048aead0(auVar24._8_8_);
            iVar12 = *(int *)(lVar21 + 8);
          }
          else {
            iVar12 = *(int *)(auVar24._0_8_ + 8);
          }
          if (lVar20 == 0) {
            lVar21 = FUN_048aead0(lVar18);
            iVar4 = *(int *)(lVar21 + 8);
          }
          else {
            iVar4 = *(int *)(lVar20 + 8);
          }
          if (iVar12 == iVar4) goto LAB_0b76a184;
        }
        auVar24 = func_0x06528130();
        if (auVar24._8_8_ == lVar18) {
          if (auVar24._0_8_ == 0) {
            lVar21 = FUN_048aead0(auVar24._8_8_);
            iVar12 = *(int *)(lVar21 + 8);
          }
          else {
            iVar12 = *(int *)(auVar24._0_8_ + 8);
          }
          if (lVar20 == 0) {
            lVar21 = FUN_048aead0(lVar18);
            iVar4 = *(int *)(lVar21 + 8);
          }
          else {
            iVar4 = *(int *)(lVar20 + 8);
          }
          if (iVar12 == iVar4) goto LAB_0b76a184;
        }
        puVar13 = (undefined8 *)uStack_528;
        puVar3 = uStack_520;
        if (*(long *)((long)uStack_528 + (uVar17 * 0x28 + 4) * 8) != lVar18)
        goto joined_r0x0b76a389;
        if (*(long *)((long)uStack_528 + (uVar17 * 0x28 + 3) * 8) == 0) {
          lVar21 = FUN_048aead0();
          iVar12 = *(int *)(lVar21 + 8);
          if (lVar20 == 0) goto LAB_0b76a16c;
LAB_0b76a153:
          if (iVar12 != *(int *)(lVar20 + 8)) goto LAB_0b76a379;
        }
        else {
          iVar12 = *(int *)(*(long *)((long)uStack_528 + (uVar17 * 0x28 + 3) * 8) + 8);
          if (lVar20 != 0) goto LAB_0b76a153;
LAB_0b76a16c:
          lVar20 = FUN_048aead0(lVar18);
          if (iVar12 != *(int *)(lVar20 + 8)) goto LAB_0b76a379;
        }
        uVar17 = (ulong)((int)uVar17 + 1);
      }
LAB_0b76a184:
    } while (((uint)uVar17 < (uint)uVar22) && (uVar19 = uVar19 + 1, uVar19 < uStack_464));
    uVar22 = ((long)uStack_520 - (long)uStack_528 >> 6) * -0x3333333333333333;
  }
  puVar13 = puStack_4a8;
  if (uVar22 == uVar17) {
    puVar3 = puStack_4a0;
    if (puStack_4a8 != (undefined8 *)0x0) {
      while (puVar13 != puVar3) {
        func_0x05fe8450(puVar3 + -0x28);
        puVar3 = puVar3 + -0x28;
      }
      puStack_4a0 = puVar13;
      func_0x0412a280(puStack_4a8,(long)puStack_498 - (long)puStack_4a8);
    }
    puStack_498 = plStack_518;
    if (puStack_3b0 < puStack_3a8) {
      *puStack_3b0 = 0;
      puStack_3b0[1] = 0;
      puStack_3b0[2] = 0;
      *puStack_3b0 = uStack_4d8;
      puStack_3b0[1] = uStack_4d0;
      puStack_3b0[2] = lStack_4c8;
      uStack_4d8 = 0;
      uStack_4d0 = 0;
      lStack_4c8 = 0;
      puStack_3b0[5] = uStack_4b0;
      puStack_3b0[3] = uStack_4c0;
      puStack_3b0[4] = uStack_4b8;
      uStack_4c0 = 0;
      uStack_4b8 = 0;
      uStack_4b0 = 0;
      puStack_3b0[6] = 0;
      puStack_3b0[7] = 0;
      puStack_3b0[8] = 0;
      puStack_3b0[6] = uStack_528;
      puStack_3b0[7] = uStack_520;
      puStack_3b0[8] = plStack_518;
      puStack_4a8 = (undefined8 *)0x0;
      puStack_4a0 = (undefined8 *)0x0;
      puStack_498 = (undefined8 *)0x0;
      puStack_3b0[9] = plStack_490;
      puStack_3b0[10] = plStack_488;
      plStack_490 = (long *)0x0;
      plStack_488 = (undefined8 *)0x0;
      puStack_3b0[0xb] = 0;
      puStack_3b0[0xc] = 0;
      puStack_3b0[0xd] = 0;
      *(undefined4 *)(puStack_3b0 + 0xb) = (undefined4)uStack_480;
      *(undefined4 *)((long)puStack_3b0 + 0x5c) = uStack_480._4_4_;
      *(undefined4 *)(puStack_3b0 + 0xc) = (undefined4)uStack_478;
      *(undefined4 *)((long)puStack_3b0 + 100) = uStack_478._4_4_;
      puStack_3b0[0xd] = uStack_470;
      uStack_480 = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      puStack_3b0 = puStack_3b0 + 0xe;
    }
    else {
      puStack_4a8 = (undefined8 *)uStack_528;
      puStack_4a0 = uStack_520;
      puStack_3b0 = (undefined8 *)func_0x0652ac80(&lStack_3b8,&uStack_4d8);
    }
    puVar13 = puStack_3b0 + -0xe;
    lVar20 = CONCAT44(uStack_504,uStack_508);
  }
  else {
LAB_0b76a379:
    puVar13 = (undefined8 *)uStack_528;
    puVar3 = uStack_520;
    if (uStack_528 != (uint *)0x0) {
joined_r0x0b76a389:
      while (puVar5 = (undefined8 *)uStack_528, uStack_528 != (uint *)puVar3) {
        uStack_528 = (uint *)puVar13;
        func_0x05fe8450(puVar3 + -0x28);
        puVar13 = (undefined8 *)uStack_528;
        puVar3 = puVar3 + -0x28;
        uStack_528 = (uint *)puVar5;
      }
      uStack_520 = (long *)uStack_528;
      uStack_528 = (uint *)puVar13;
      func_0x0412a280(puVar13,(long)plStack_518 - (long)puVar13);
    }
    puVar13 = (undefined8 *)0xf6b6d78;
    lVar20 = CONCAT44(uStack_504,uStack_508);
  }
  if (lVar20 != 0) {
    lVar21 = CONCAT44(uStack_4fc,CONCAT13(uStack_4fd,CONCAT21(uStack_4ff,uStack_500)));
    lVar18 = lVar20;
    if (lVar20 != lVar21) {
      lVar18 = lVar21 + -0x40;
      do {
        if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
          (**(code **)(lVar18 + 0x18))(lVar18);
        }
        if (*(code **)(lVar18 + -0x30) != (code *)0x0) {
          (**(code **)(lVar18 + -0x30))(lVar18 + -0x48);
        }
        if (*(code **)(lVar18 + -0x70) != (code *)0x0) {
          (**(code **)(lVar18 + -0x70))(lVar18 + -0x88);
        }
        if (*(code **)(lVar18 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar18 + -0xb0))(lVar18 + -200);
        }
        lVar21 = lVar18 + -0xd8;
        lVar18 = lVar18 + -0x118;
      } while (lVar21 != lVar20);
      lVar18 = CONCAT44(uStack_504,uStack_508);
    }
    uStack_500 = (undefined1)lVar20;
    uStack_4ff = (undefined2)((ulong)lVar20 >> 8);
    uStack_4fd = (undefined1)((ulong)lVar20 >> 0x18);
    uStack_4fc = (undefined4)((ulong)lVar20 >> 0x20);
    func_0x0412a280(lVar18,lStack_4f8 - lVar18);
  }
  func_0x05f93280(&uStack_4d8);
  func_0x064e40a0(puVar13);
  if (pcStack_220 != (code *)0x0) {
    (*pcStack_220)(auStack_238);
  }
  if (pcStack_268 != (code *)0x0) {
    (*pcStack_268)(auStack_280);
  }
  if (pcStack_2a8 != (code *)0x0) {
    (*pcStack_2a8)(auStack_2c0);
  }
  if (pcStack_2e8 != (code *)0x0) {
    (*pcStack_2e8)(&uStack_300);
  }
  if ((uStack_338 & 1) != 0) {
    func_0x0412a280(pcStack_328,uStack_338 & 0xfffffffffffffffe);
  }
  if ((uStack_4f0 & 1) != 0) {
    func_0x0412a280(lStack_4e0,
                    CONCAT17(uStack_4e9,CONCAT25(uStack_4eb,CONCAT14(uStack_4ec,uStack_4f0))) &
                    0xfffffffffffffffe);
  }
  uStack_508 = 0x6f696212;
  uStack_504 = 0x614e656d;
  uStack_500 = 0x6d;
  uStack_4ff = 0x65;
  func_0x064f17b0(&uStack_1f8,&uStack_508);
  uStack_4f0 = 0x6c6f630a;
  uStack_4ec = 0x6f;
  uStack_4eb = 0x72;
  func_0x0675a590(&uStack_338,&uStack_4f0);
  lStack_4c8 = 0;
  uStack_4b0 = 0;
  uStack_478 = 0;
  uStack_470 = 0;
  plStack_488 = (long *)0x0;
  uStack_480 = 0;
  puStack_498 = (undefined8 *)0x0;
  plStack_490 = (long *)0x0;
  puStack_4a8 = (undefined8 *)0x0;
  puStack_4a0 = (undefined8 *)0x0;
  uStack_4d8 = 0;
  uStack_4d0 = 0;
  uStack_4c0 = 0x4365746164707516;
  uStack_4b8 = 0x726f6c6f;
  func_0x0a573830(&uStack_528,&uStack_1f8,&uStack_338);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (plVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f2dac28;
  uVar10 = func_0x0d858500(&uStack_528);
  puVar13 = plVar15 + 3;
  *(undefined1 *)(plVar15 + 4) = 0;
  *(undefined4 *)((long)plVar15 + 0x24) = uVar10;
  *(undefined4 *)(plVar15 + 5) = 0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[8] = 0;
  plVar15[3] = (long)&UNK_0f2dac78;
  *(undefined4 *)(plVar15 + 9) = (undefined4)uStack_528;
  *(undefined4 *)((long)plVar15 + 0x4c) = uStack_528._4_4_;
  *(undefined4 *)(plVar15 + 10) = (undefined4)uStack_520;
  *(undefined4 *)((long)plVar15 + 0x54) = uStack_520._4_4_;
  plVar15[0xb] = (long)plStack_518;
  uStack_528 = (uint *)0x0;
  uStack_520 = (long *)0x0;
  plStack_518 = (long *)0x0;
  uVar10 = func_0x0d858620(puVar13);
  plVar16 = plStack_488;
  *(undefined4 *)(plVar15 + 5) = uVar10;
  plStack_490 = puVar13;
  if (plStack_488 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_488 + 1;
    lVar20 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      lVar20 = *plStack_488;
      plStack_488 = plVar15;
      (**(code **)(lVar20 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
      plVar15 = plStack_488;
    }
  }
  plStack_488 = plVar15;
  cVar9 = func_0x0a573a60(&uStack_4d8,&uStack_1f8,&uStack_338);
  plVar15 = plStack_40;
  if (cVar9 == '\0') {
    puVar13 = (undefined8 *)0xf6b6d78;
    lVar20 = (long)uStack_528;
  }
  else {
    if (puStack_3b0 < puStack_3a8) {
      *puStack_3b0 = 0;
      puStack_3b0[1] = 0;
      puStack_3b0[2] = 0;
      *puStack_3b0 = uStack_4d8;
      puStack_3b0[1] = uStack_4d0;
      puStack_3b0[2] = lStack_4c8;
      uStack_4d8 = 0;
      uStack_4d0 = 0;
      lStack_4c8 = 0;
      puStack_3b0[5] = uStack_4b0;
      puStack_3b0[3] = uStack_4c0;
      puStack_3b0[4] = uStack_4b8;
      uStack_4c0 = 0;
      uStack_4b8 = 0;
      uStack_4b0 = 0;
      puStack_3b0[6] = 0;
      puStack_3b0[7] = 0;
      puStack_3b0[8] = 0;
      puStack_3b0[6] = puStack_4a8;
      puStack_3b0[7] = puStack_4a0;
      puStack_3b0[8] = puStack_498;
      puStack_4a8 = (undefined8 *)0x0;
      puStack_4a0 = (undefined8 *)0x0;
      puStack_498 = (undefined8 *)0x0;
      puStack_3b0[9] = plStack_490;
      puStack_3b0[10] = plStack_488;
      plStack_490 = (undefined8 *)0x0;
      plStack_488 = (undefined8 *)0x0;
      puStack_3b0[0xb] = 0;
      puStack_3b0[0xc] = 0;
      puStack_3b0[0xd] = 0;
      puStack_3b0[0xb] = uStack_480;
      puStack_3b0[0xc] = uStack_478;
      puStack_3b0[0xd] = uStack_470;
      uStack_480 = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      puStack_3b0 = puStack_3b0 + 0xe;
    }
    else {
      puStack_3b0 = (undefined8 *)func_0x0652ac80(&lStack_3b8,&uStack_4d8);
    }
    puVar13 = puStack_3b0 + -0xe;
    lVar20 = (long)uStack_528;
  }
  uStack_528 = (uint *)lVar20;
  if (lVar20 != 0) {
    if ((long *)lVar20 != uStack_520) {
      lVar18 = (long)uStack_520 + -0x40;
      do {
        if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
          (**(code **)(lVar18 + 0x18))(lVar18);
        }
        if (*(code **)(lVar18 + -0x30) != (code *)0x0) {
          (**(code **)(lVar18 + -0x30))(lVar18 + -0x48);
        }
        if (*(code **)(lVar18 + -0x70) != (code *)0x0) {
          (**(code **)(lVar18 + -0x70))(lVar18 + -0x88);
        }
        if (*(code **)(lVar18 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar18 + -0xb0))(lVar18 + -200);
        }
        lVar21 = lVar18 + -0xd8;
        lVar18 = lVar18 + -0x118;
      } while (lVar21 != lVar20);
    }
    uStack_520 = (long *)lVar20;
    func_0x0412a280(uStack_528,(long)plStack_518 - (long)uStack_528);
  }
  func_0x05f93280(&uStack_4d8);
  func_0x064e40a0(puVar13);
  if (pcStack_220 != (code *)0x0) {
    (*pcStack_220)(auStack_238);
  }
  if (pcStack_268 != (code *)0x0) {
    (*pcStack_268)(auStack_280);
  }
  if (pcStack_2a8 != (code *)0x0) {
    (*pcStack_2a8)(auStack_2c0);
  }
  if (pcStack_2e8 != (code *)0x0) {
    (*pcStack_2e8)(&uStack_300);
  }
  if ((uStack_338 & 1) != 0) {
    func_0x0412a280(pcStack_328,uStack_338 & 0xfffffffffffffffe);
  }
  if ((uStack_4f0 & 1) != 0) {
    func_0x0412a280(lStack_4e0,
                    CONCAT17(uStack_4e9,CONCAT25(uStack_4eb,CONCAT14(uStack_4ec,uStack_4f0))) &
                    0xfffffffffffffffe);
  }
  if (pcStack_e0 != (code *)0x0) {
    (*pcStack_e0)(auStack_f8);
  }
  if (pcStack_128 != (code *)0x0) {
    (*pcStack_128)(auStack_140);
  }
  if (apcStack_168[0] != (code *)0x0) {
    (*apcStack_168[0])(auStack_180);
  }
  if (pcStack_1a8 != (code *)0x0) {
    (*pcStack_1a8)(auStack_1c8 + 8);
  }
  if ((uStack_1f8 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_1e5,CONCAT21(uStack_1e7,uStack_1e8)),
                    CONCAT44(uStack_1f4,uStack_1f8) & 0xfffffffffffffffe);
  }
  if ((uStack_508 & 1) != 0) {
    func_0x0412a280(lStack_4f8,CONCAT44(uStack_504,uStack_508) & 0xfffffffffffffffe);
  }
  func_0x064e40a0(&lStack_448);
  auStack_400 = func_0x0b813130();
  lVar18 = lStack_430;
  lVar20 = lStack_428;
  if (lStack_430 != 0) {
    for (; lVar18 != lVar20; lVar20 = lVar20 + -0x30) {
      if ((*(byte *)(lVar20 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar20 + -0x10),
                        *(ulong *)(lVar20 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_428 = lVar18;
    func_0x0412a280(lStack_430,lStack_420 - lStack_430);
  }
  lVar21 = lStack_438;
  lVar18 = lStack_440;
  lVar20 = lStack_448;
  lStack_448 = 0;
  lStack_440 = 0;
  lStack_438 = 0;
  *plVar15 = lVar20;
  plVar15[1] = lVar18;
  plVar15[2] = lVar21;
  lStack_430 = 0;
  lStack_428 = 0;
  lStack_420 = 0;
  plVar15[5] = lStack_408;
  plVar15[3] = uStack_418;
  plVar15[4] = uStack_410;
  uStack_418 = 0;
  uStack_410 = 0;
  lStack_408 = 0;
  *(undefined4 *)(plVar15 + 8) = uStack_3f0;
  *(undefined4 *)((long)plVar15 + 0x44) = uStack_3ec;
  *(undefined4 *)(plVar15 + 9) = uStack_3e8;
  *(undefined4 *)((long)plVar15 + 0x4c) = uStack_3e4;
  *(undefined1 (*) [16])(plVar15 + 6) = auStack_400;
  plVar15[10] = lStack_3e0;
  plVar15[0xb] = lStack_3d8;
  plVar15[0xc] = lStack_3d0;
  lStack_3e0 = 0;
  lStack_3d8 = 0;
  lStack_3d0 = 0;
  plVar15[0xd] = lStack_3c8;
  plVar15[0xe] = lStack_3c0;
  lStack_3c8 = 0;
  lStack_3c0 = 0;
  plVar15[0xf] = lStack_3b8;
  plVar15[0x10] = (long)puStack_3b0;
  plVar15[0x11] = (long)puStack_3a8;
  lStack_3b8 = 0;
  puStack_3b0 = (undefined8 *)0x0;
  puStack_3a8 = (undefined8 *)0x0;
  plVar15[0x12] = lStack_3a0;
  plVar15[0x13] = uStack_398;
  plVar15[0x14] = uStack_390;
  lStack_3a0 = 0;
  uStack_398 = 0;
  uStack_390 = 0;
  plVar15[0x15] = lStack_388;
  plVar15[0x16] = lStack_380;
  plVar15[0x17] = lStack_378;
  lStack_388 = 0;
  lStack_380 = 0;
  lStack_378 = 0;
  plVar15[0x18] = lStack_370;
  plVar15[0x19] = lStack_368;
  plVar15[0x1a] = lStack_360;
  lStack_370 = 0;
  lStack_368 = 0;
  lStack_360 = 0;
  *(undefined4 *)(plVar15 + 0x1b) = (undefined4)uStack_358;
  *(undefined4 *)((long)plVar15 + 0xdc) = uStack_358._4_4_;
  *(undefined4 *)(plVar15 + 0x1c) = (undefined4)uStack_350;
  *(undefined4 *)((long)plVar15 + 0xe4) = uStack_350._4_4_;
  plVar15[0x1d] = lStack_348;
  uStack_358 = 0;
  uStack_350 = 0;
  lStack_348 = 0;
  func_0x0651ffe0(&lStack_430);
  lVar18 = lStack_448;
  lVar20 = lStack_440;
  if (lStack_448 != 0) {
    for (; lVar18 != lVar20; lVar20 = lVar20 + -0x30) {
      if ((*(byte *)(lVar20 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar20 + -0x10),
                        *(ulong *)(lVar20 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_440 = lVar18;
    func_0x0412a280(lStack_448,lStack_438 - lStack_448);
  }
  return plVar15;
}



/* ---- referenced strings ----
 * 0x13bacf5  CustomBiomeSource
 */
