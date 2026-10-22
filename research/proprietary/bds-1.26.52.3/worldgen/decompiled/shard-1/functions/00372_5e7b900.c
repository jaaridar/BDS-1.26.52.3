/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5f7b900 (ELF vaddr 0x5e7b900)
 * Label: caller-of-callee
 * Body:  [[05f7b900, 05f7d6e0] [05f7d6f0, 05f7f151]]
 * Ghidra: FUN_05f7b900
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05f7b900(long param_1)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  undefined1 auVar12 [8];
  undefined8 uVar13;
  uint uVar14;
  char cVar15;
  int iVar16;
  undefined *puVar17;
  undefined *puVar18;
  long *plVar19;
  int *piVar20;
  long lVar21;
  int *piVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined1 *puVar25;
  ulong uVar26;
  ulong uVar27;
  uint *puVar28;
  bool bVar29;
  long *plStack_498;
  long lStack_490;
  ulong uStack_488;
  undefined8 uStack_480;
  undefined8 *puStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined8 uStack_448;
  long lStack_440;
  long *plStack_438;
  long lStack_430;
  undefined4 uStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  undefined4 uStack_3f0;
  uint uStack_3ec;
  undefined5 uStack_3e8;
  long *plStack_3d8;
  long *plStack_3d0;
  undefined1 auStack_3c8 [8];
  undefined8 uStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  ulong uStack_388;
  long lStack_380;
  long *plStack_378;
  long lStack_370;
  undefined4 uStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_338;
  undefined4 uStack_330;
  uint uStack_32c;
  uint uStack_328;
  undefined1 uStack_324;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  int iStack_2f0;
  int iStack_2ec;
  int iStack_2e8;
  int iStack_2e4;
  undefined4 uStack_2e0;
  uint uStack_2dc;
  undefined4 uStack_2d8;
  uint uStack_2d4;
  uint uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  int iStack_2b0;
  int iStack_2ac;
  int iStack_2a8;
  int iStack_2a4;
  undefined4 uStack_2a0;
  uint uStack_29c;
  undefined4 uStack_298;
  uint uStack_294;
  uint uStack_290;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  int iStack_258;
  int iStack_254;
  undefined4 uStack_250;
  uint uStack_24c;
  undefined4 uStack_248;
  uint uStack_244;
  uint uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  int iStack_218;
  int iStack_214;
  undefined4 uStack_210;
  uint uStack_20c;
  undefined4 uStack_208;
  uint uStack_204;
  uint uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined4 uStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int iStack_190;
  int iStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined1 uStack_178;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined1 uStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined1 uStack_f8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined1 uStack_b8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined1 uStack_78;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 uStack_38;
  
  if ((DAT_0f563098 == '\0') && (iVar16 = func_0x04108328(&DAT_0f563098), iVar16 != 0)) {
    func_0x060398e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f563018,0xf53dab8);
    func_0x0410844d(&DAT_0f563098);
  }
  lStack_1b0 = param_1 + 0x18;
  plVar19 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f563018 + 4)) * 8);
  do {
    lVar21 = *plVar19;
    if (lVar21 == -1) goto LAB_05f7b980;
    plVar19 = (long *)(*(long *)(param_1 + 0x30) + lVar21 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f563018 + 4))
  ;
  if (plVar19 == *(long **)(param_1 + 0x38)) {
LAB_05f7b980:
    puVar17 = &DAT_0f563018;
    if (iRam000000000f563078 != -0x2b3da790) goto LAB_05f7b9d8;
LAB_05f7b9ab:
    lVar21 = *(long *)(puVar17 + 0x68);
    if (lVar21 == 0) goto LAB_05f7b9d8;
    bVar29 = (*(byte *)(lVar21 + 8) & 1) != 0;
    puVar17 = (undefined *)(lVar21 + 9);
    if (bVar29) {
      puVar17 = *(undefined **)(lVar21 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar21 + 8) >> 1);
    if (bVar29) {
      uVar24 = *(ulong *)(lVar21 + 0x10);
    }
  }
  else {
    puVar17 = (undefined *)plVar19[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_05f7b9ab;
LAB_05f7b9d8:
    puVar17 = &UNK_013ad59d;
    uVar24 = 0x1a;
  }
  func_0x06039d20(&uStack_238,param_1,puVar17,uVar24);
  uStack_204 = uStack_204 & 0xffffff00;
  uStack_200 = uStack_200 & 0xffffff00;
  func_0x0603d5a0(&plStack_3d8,&UNK_0119b420,5);
  uVar24 = (ulong)uStack_3b0 >> 1 & 0x7f;
  puVar17 = (undefined *)((long)&uStack_3b0 + 1);
  puVar18 = puVar17;
  if (((ulong)uStack_3b0 & 1) != 0) {
    uVar24 = (ulong)uStack_3a8;
    puVar18 = puStack_3a0;
  }
  if (uVar24 == 0) {
    uStack_20c = 0x811c9dc5;
  }
  else {
    uVar27 = (ulong)((uint)uVar24 & 3);
    if (uVar24 < 4) {
      uStack_20c = 0x811c9dc5;
      uVar26 = 0;
    }
    else {
      uStack_20c = 0x811c9dc5;
      uVar26 = 0;
      do {
        uStack_20c = ((int)*(char *)((long)puVar18 + 3 + uVar26) ^
                     ((int)*(char *)((long)puVar18 + 2 + uVar26) ^
                     ((int)*(char *)((long)puVar18 + 1 + uVar26) ^
                     ((int)*(char *)((long)puVar18 + uVar26) ^ uStack_20c) * 0x1000193) * 0x1000193)
                     * 0x1000193) * 0x1000193;
        uVar26 = uVar26 + 4;
      } while ((uVar24 & 0xfffffffffffffffc) != uVar26);
    }
    if (uVar27 != 0) {
      uVar24 = 0;
      do {
        uStack_20c = ((int)*(char *)((long)puVar18 + uVar26 + uVar24) ^ uStack_20c) * 0x1000193;
        uVar24 = uVar24 + 1;
      } while (uVar27 != uVar24);
    }
  }
  uStack_210 = 2;
  lStack_280 = param_1;
  if ((DAT_0f5630b8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f5630b8), iVar16 != 0)) {
    func_0x060399f0();
    func_0x0410844d(&DAT_0f5630b8);
  }
  plStack_498 = (long *)CONCAT44(plStack_498._4_4_,uStack_20c);
  lStack_490 = 0;
  uStack_488 = CONCAT44(uStack_488._4_4_,3);
  uStack_480 = 1;
  puStack_478 = (undefined8 *)0x0;
  uStack_470 = &UNK_0603db60;
  puStack_468 = &SUB_048b06d0;
  puStack_460 = &UNK_06039820;
  puStack_458 = &UNK_0603dc20;
  puStack_450 = &UNK_0603dc30;
  uStack_448 = (ulong)uStack_448._4_4_ << 0x20;
  lStack_440 = 0;
  plStack_438 = (long *)0x0;
  func_0x048b05a0(&uStack_230,&plStack_498);
  plVar19 = plStack_438;
  if (plStack_438 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_438 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_438 + 0x10))(plStack_438);
      func_0x0412c2d0(plVar19);
    }
  }
  uStack_2f8 = uStack_220;
  uStack_2f4 = uStack_21c;
  iStack_2f0 = iStack_218;
  iStack_2ec = iStack_214;
  func_0x0603d8f0(&plStack_498,&uStack_308,&plStack_3d8);
  if (uStack_480._4_4_ == 2) {
    piVar22 = *(int **)(*(long *)(uStack_488 + 0x78) + 0x60);
    iVar16 = *piVar22;
    while (iVar16 != (int)uStack_480) {
      piVar22 = piVar22 + 0x16;
      iVar16 = *piVar22;
    }
    lVar21 = *(long *)(piVar22 + 0xc);
    while (lVar21 != lStack_490) {
      piVar22 = *(int **)(piVar22 + 0xe);
      lVar21 = *(long *)(piVar22 + 0xc);
    }
LAB_05f7bcba:
    *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
  }
  else {
    if (uStack_480._4_4_ == 1) {
      piVar22 = *(int **)(*(long *)(uStack_488 + 0x78) + 0x48);
      iVar16 = *piVar22;
      while (iVar16 != (int)uStack_480) {
        piVar22 = piVar22 + 0x1a;
        iVar16 = *piVar22;
      }
      goto LAB_05f7bcba;
    }
    if (uStack_480._4_4_ == 0) {
      *(uint *)(uStack_488 + 0x18) = *(uint *)(uStack_488 + 0x18) | 0x90000;
    }
  }
  if ((char)uStack_200 == '\0') {
    func_0x0603dc80(&plStack_498,&uStack_238);
  }
  uVar14 = uStack_204;
  lVar21 = CONCAT44(uStack_234,uStack_238);
  if ((DAT_0f563098 == '\0') && (iVar16 = func_0x04108328(&DAT_0f563098), iVar16 != 0)) {
    func_0x060398e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f563018,0xf53dab8);
    func_0x0410844d(&DAT_0f563098);
  }
  plVar19 = (long *)(*(long *)(lVar21 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar21 + 0x20) - *(long *)(lVar21 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f563018 + 4)) * 8);
  do {
    lVar9 = *plVar19;
    if (lVar9 == -1) goto LAB_05f7bd50;
    plVar19 = (long *)(*(long *)(lVar21 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(lVar21 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f563018 + 4));
  if (plVar19 == *(long **)(lVar21 + 0x38)) {
LAB_05f7bd50:
    puVar18 = &DAT_0f563018;
  }
  else {
    puVar18 = (undefined *)plVar19[2];
  }
  puVar10 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x28);
  for (puVar28 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x20);
      (puVar28 != puVar10 && (*puVar28 != uVar14)); puVar28 = puVar28 + 0xe) {
  }
  if ((puVar28 == puVar10) &&
     (cVar15 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012f29cf),
     cVar15 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  plStack_498 = (long *)((ulong)plStack_498 & 0xffffffffffffff00);
  func_0x05d9c620(puVar28 + 2,&uStack_20c,&uStack_20c,&plStack_498);
  uStack_1f8 = uStack_238;
  uStack_1f4 = uStack_234;
  uStack_1f0 = uStack_230;
  uStack_1ec = uStack_22c;
  uStack_1e8 = uStack_228;
  uStack_1e4 = uStack_224;
  uStack_1e0 = uStack_220;
  uStack_1dc = uStack_21c;
  iStack_1d8 = iStack_218;
  iStack_1d4 = iStack_214;
  uStack_1d0 = uStack_210;
  uStack_1cc = uStack_20c;
  uStack_1c8 = uStack_208;
  uStack_1c4 = uStack_204;
  uStack_1c0 = uStack_200;
  func_0x048b0bc0(&plStack_3d8);
  func_0x0603d5a0(&plStack_3d8,&UNK_011d17b5,5);
  uVar24 = (ulong)uStack_3b0 >> 1 & 0x7f;
  puVar18 = puVar17;
  if (((ulong)uStack_3b0 & 1) != 0) {
    uVar24 = (ulong)uStack_3a8;
    puVar18 = puStack_3a0;
  }
  if (uVar24 == 0) {
    uStack_1cc = 0x811c9dc5;
  }
  else {
    uVar27 = (ulong)((uint)uVar24 & 3);
    if (uVar24 < 4) {
      uStack_1cc = 0x811c9dc5;
      uVar26 = 0;
    }
    else {
      uStack_1cc = 0x811c9dc5;
      uVar26 = 0;
      do {
        uStack_1cc = ((int)*(char *)((long)puVar18 + 3 + uVar26) ^
                     ((int)*(char *)((long)puVar18 + 2 + uVar26) ^
                     ((int)*(char *)((long)puVar18 + 1 + uVar26) ^
                     ((int)*(char *)((long)puVar18 + uVar26) ^ uStack_1cc) * 0x1000193) * 0x1000193)
                     * 0x1000193) * 0x1000193;
        uVar26 = uVar26 + 4;
      } while ((uVar24 & 0xfffffffffffffffc) != uVar26);
    }
    if (uVar27 != 0) {
      uVar24 = 0;
      do {
        uStack_1cc = ((int)*(char *)((long)puVar18 + uVar26 + uVar24) ^ uStack_1cc) * 0x1000193;
        uVar24 = uVar24 + 1;
      } while (uVar27 != uVar24);
    }
  }
  uStack_1d0 = 2;
  if ((DAT_0f5630b8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f5630b8), iVar16 != 0)) {
    func_0x060399f0();
    func_0x0410844d(&DAT_0f5630b8);
  }
  plStack_498 = (long *)CONCAT44(plStack_498._4_4_,uStack_1cc);
  lStack_490 = 0;
  uStack_488 = CONCAT44(uStack_488._4_4_,3);
  uStack_480 = 1;
  puStack_478 = (undefined8 *)0x0;
  uStack_470 = &UNK_0603db60;
  puStack_468 = &SUB_048b06d0;
  puStack_460 = &UNK_06039820;
  puStack_458 = &UNK_0603de40;
  puStack_450 = &UNK_0603de50;
  uStack_448 = uStack_448 & 0xffffffff00000000;
  lStack_440 = 0;
  plStack_438 = (long *)0x0;
  func_0x048b05a0(&uStack_1f0,&plStack_498);
  plVar19 = plStack_438;
  if (plStack_438 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_438 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_438 + 0x10))(plStack_438);
      func_0x0412c2d0(plVar19);
    }
  }
  uStack_2f8 = uStack_1e0;
  uStack_2f4 = uStack_1dc;
  iStack_2f0 = iStack_1d8;
  iStack_2ec = iStack_1d4;
  uStack_308 = CONCAT44(uStack_1ec,uStack_1f0);
  uStack_300 = CONCAT44(uStack_1e4,uStack_1e8);
  func_0x0603d8f0(&plStack_498,&uStack_308,&plStack_3d8);
  if (uStack_480._4_4_ == 2) {
    piVar22 = *(int **)(*(long *)(uStack_488 + 0x78) + 0x60);
    iVar16 = *piVar22;
    while (iVar16 != (int)uStack_480) {
      piVar22 = piVar22 + 0x16;
      iVar16 = *piVar22;
    }
    lVar21 = *(long *)(piVar22 + 0xc);
    while (lVar21 != lStack_490) {
      piVar22 = *(int **)(piVar22 + 0xe);
      lVar21 = *(long *)(piVar22 + 0xc);
    }
LAB_05f7c0ca:
    *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
  }
  else {
    if (uStack_480._4_4_ == 1) {
      piVar22 = *(int **)(*(long *)(uStack_488 + 0x78) + 0x48);
      iVar16 = *piVar22;
      while (iVar16 != (int)uStack_480) {
        piVar22 = piVar22 + 0x1a;
        iVar16 = *piVar22;
      }
      goto LAB_05f7c0ca;
    }
    if (uStack_480._4_4_ == 0) {
      *(uint *)(uStack_488 + 0x18) = *(uint *)(uStack_488 + 0x18) | 0x90000;
    }
  }
  if ((char)uStack_1c0 == '\0') {
    func_0x0603dc80(&plStack_498,&uStack_1f8);
  }
  uVar14 = uStack_1c4;
  lVar21 = CONCAT44(uStack_1f4,uStack_1f8);
  if ((DAT_0f563098 == '\0') && (iVar16 = func_0x04108328(&DAT_0f563098), iVar16 != 0)) {
    func_0x060398e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f563018,0xf53dab8);
    func_0x0410844d(&DAT_0f563098);
  }
  plVar19 = (long *)(*(long *)(lVar21 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar21 + 0x20) - *(long *)(lVar21 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f563018 + 4)) * 8);
  do {
    lVar9 = *plVar19;
    if (lVar9 == -1) goto LAB_05f7c160;
    plVar19 = (long *)(*(long *)(lVar21 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(lVar21 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f563018 + 4));
  if (plVar19 == *(long **)(lVar21 + 0x38)) {
LAB_05f7c160:
    puVar18 = &DAT_0f563018;
  }
  else {
    puVar18 = (undefined *)plVar19[2];
  }
  puVar10 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x28);
  for (puVar28 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x20);
      (puVar28 != puVar10 && (*puVar28 != uVar14)); puVar28 = puVar28 + 0xe) {
  }
  if ((puVar28 == puVar10) &&
     (cVar15 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012f29cf),
     cVar15 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  plStack_498 = (long *)((ulong)plStack_498 & 0xffffffffffffff00);
  func_0x05d9c620(puVar28 + 2,&uStack_1cc,&uStack_1cc,&plStack_498);
  uStack_278 = CONCAT44(uStack_1f4,uStack_1f8);
  uStack_270 = (long *)CONCAT44(uStack_1ec,uStack_1f0);
  uStack_268 = uStack_1e8;
  uStack_264 = uStack_1e4;
  uStack_260 = uStack_1e0;
  uStack_25c = uStack_1dc;
  iStack_258 = iStack_1d8;
  iStack_254 = iStack_1d4;
  uStack_250 = uStack_1d0;
  uStack_24c = uStack_1cc;
  uStack_248 = uStack_1c8;
  uStack_244 = uStack_1c4;
  uStack_240 = uStack_1c0;
  func_0x048b0bc0(&plStack_3d8);
  func_0x0603d5a0(&plStack_3d8,&UNK_0138e58f,5);
  uVar24 = (ulong)uStack_3b0 >> 1 & 0x7f;
  puVar18 = puVar17;
  if (((ulong)uStack_3b0 & 1) != 0) {
    uVar24 = (ulong)uStack_3a8;
    puVar18 = puStack_3a0;
  }
  if (uVar24 == 0) {
    uStack_24c = 0x811c9dc5;
  }
  else {
    uVar27 = (ulong)((uint)uVar24 & 3);
    if (uVar24 < 4) {
      uStack_24c = 0x811c9dc5;
      uVar26 = 0;
    }
    else {
      uStack_24c = 0x811c9dc5;
      uVar26 = 0;
      do {
        uStack_24c = ((int)*(char *)((long)puVar18 + 3 + uVar26) ^
                     ((int)*(char *)((long)puVar18 + 2 + uVar26) ^
                     ((int)*(char *)((long)puVar18 + 1 + uVar26) ^
                     ((int)*(char *)((long)puVar18 + uVar26) ^ uStack_24c) * 0x1000193) * 0x1000193)
                     * 0x1000193) * 0x1000193;
        uVar26 = uVar26 + 4;
      } while ((uVar24 & 0xfffffffffffffffc) != uVar26);
    }
    if (uVar27 != 0) {
      uVar24 = 0;
      do {
        uStack_24c = ((int)*(char *)((long)puVar18 + uVar26 + uVar24) ^ uStack_24c) * 0x1000193;
        uVar24 = uVar24 + 1;
      } while (uVar27 != uVar24);
    }
  }
  uStack_250 = 2;
  if ((DAT_0f5630b8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f5630b8), iVar16 != 0)) {
    func_0x060399f0();
    func_0x0410844d(&DAT_0f5630b8);
  }
  plStack_498 = (long *)CONCAT44(plStack_498._4_4_,uStack_24c);
  lStack_490 = 0;
  uStack_488 = CONCAT44(uStack_488._4_4_,3);
  uStack_480 = 1;
  puStack_478 = (undefined8 *)0x0;
  uStack_470 = &UNK_0603db60;
  puStack_468 = &SUB_048b06d0;
  puStack_460 = &UNK_06039820;
  puStack_458 = &UNK_0603dea0;
  puStack_450 = &UNK_0603deb0;
  uStack_448 = uStack_448 & 0xffffffff00000000;
  lStack_440 = 0;
  plStack_438 = (long *)0x0;
  func_0x048b05a0(&uStack_270,&plStack_498);
  plVar19 = plStack_438;
  if (plStack_438 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_438 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_438 + 0x10))(plStack_438);
      func_0x0412c2d0(plVar19);
    }
  }
  uStack_2f8 = uStack_260;
  uStack_2f4 = uStack_25c;
  iStack_2f0 = iStack_258;
  iStack_2ec = iStack_254;
  uStack_308 = (long)uStack_270;
  uStack_300 = CONCAT44(uStack_264,uStack_268);
  func_0x0603d8f0(&plStack_498,&uStack_308,&plStack_3d8);
  if (uStack_480._4_4_ == 2) {
    piVar22 = *(int **)(*(long *)(uStack_488 + 0x78) + 0x60);
    iVar16 = *piVar22;
    while (iVar16 != (int)uStack_480) {
      piVar22 = piVar22 + 0x16;
      iVar16 = *piVar22;
    }
    lVar21 = *(long *)(piVar22 + 0xc);
    while (lVar21 != lStack_490) {
      piVar22 = *(int **)(piVar22 + 0xe);
      lVar21 = *(long *)(piVar22 + 0xc);
    }
LAB_05f7c4da:
    *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
  }
  else {
    if (uStack_480._4_4_ == 1) {
      piVar22 = *(int **)(*(long *)(uStack_488 + 0x78) + 0x48);
      iVar16 = *piVar22;
      while (iVar16 != (int)uStack_480) {
        piVar22 = piVar22 + 0x1a;
        iVar16 = *piVar22;
      }
      goto LAB_05f7c4da;
    }
    if (uStack_480._4_4_ == 0) {
      *(uint *)(uStack_488 + 0x18) = *(uint *)(uStack_488 + 0x18) | 0x90000;
    }
  }
  if ((char)uStack_240 == '\0') {
    func_0x0603dc80(&plStack_498,&uStack_278);
  }
  uVar14 = uStack_244;
  lVar21 = uStack_278;
  if ((DAT_0f563098 == '\0') && (iVar16 = func_0x04108328(&DAT_0f563098), iVar16 != 0)) {
    func_0x060398e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f563018,0xf53dab8);
    func_0x0410844d(&DAT_0f563098);
  }
  plVar19 = (long *)(*(long *)(lVar21 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar21 + 0x20) - *(long *)(lVar21 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f563018 + 4)) * 8);
  do {
    lVar9 = *plVar19;
    if (lVar9 == -1) goto LAB_05f7c570;
    plVar19 = (long *)(*(long *)(lVar21 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(lVar21 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f563018 + 4));
  if (plVar19 == *(long **)(lVar21 + 0x38)) {
LAB_05f7c570:
    puVar18 = &DAT_0f563018;
  }
  else {
    puVar18 = (undefined *)plVar19[2];
  }
  puVar10 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x28);
  for (puVar28 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x20);
      (puVar28 != puVar10 && (*puVar28 != uVar14)); puVar28 = puVar28 + 0xe) {
  }
  if ((puVar28 == puVar10) &&
     (cVar15 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012f29cf),
     cVar15 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  plStack_498 = (long *)((ulong)plStack_498 & 0xffffffffffffff00);
  func_0x05d9c620(puVar28 + 2,&uStack_24c,&uStack_24c,&plStack_498);
  lStack_2c8 = uStack_278;
  uStack_2c0 = (long)uStack_270;
  uStack_2b8 = uStack_268;
  uStack_2b4 = uStack_264;
  iStack_2b0 = uStack_260;
  iStack_2ac = uStack_25c;
  iStack_2a8 = iStack_258;
  iStack_2a4 = iStack_254;
  uStack_2a0 = uStack_250;
  uStack_29c = uStack_24c;
  uStack_298 = uStack_248;
  uStack_294 = uStack_244;
  uStack_290 = uStack_240;
  func_0x048b0bc0(&plStack_3d8);
  func_0x0603d5a0(&plStack_3d8,&UNK_012d5030,7);
  uVar24 = (ulong)uStack_3b0 >> 1 & 0x7f;
  puVar18 = puVar17;
  if (((ulong)uStack_3b0 & 1) != 0) {
    uVar24 = (ulong)uStack_3a8;
    puVar18 = puStack_3a0;
  }
  if (uVar24 == 0) {
    uStack_29c = 0x811c9dc5;
  }
  else {
    uVar27 = (ulong)((uint)uVar24 & 3);
    if (uVar24 < 4) {
      uStack_29c = 0x811c9dc5;
      uVar26 = 0;
    }
    else {
      uStack_29c = 0x811c9dc5;
      uVar26 = 0;
      do {
        uStack_29c = ((int)*(char *)((long)puVar18 + 3 + uVar26) ^
                     ((int)*(char *)((long)puVar18 + 2 + uVar26) ^
                     ((int)*(char *)((long)puVar18 + 1 + uVar26) ^
                     ((int)*(char *)((long)puVar18 + uVar26) ^ uStack_29c) * 0x1000193) * 0x1000193)
                     * 0x1000193) * 0x1000193;
        uVar26 = uVar26 + 4;
      } while ((uVar24 & 0xfffffffffffffffc) != uVar26);
    }
    if (uVar27 != 0) {
      uVar24 = 0;
      do {
        uStack_29c = ((int)*(char *)((long)puVar18 + uVar26 + uVar24) ^ uStack_29c) * 0x1000193;
        uVar24 = uVar24 + 1;
      } while (uVar27 != uVar24);
    }
  }
  uStack_2a0 = 2;
  if ((DAT_0f5630b8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f5630b8), iVar16 != 0)) {
    func_0x060399f0();
    func_0x0410844d(&DAT_0f5630b8);
  }
  plStack_498 = (long *)CONCAT44(plStack_498._4_4_,uStack_29c);
  lStack_490 = 0;
  uStack_488 = CONCAT44(uStack_488._4_4_,3);
  uStack_480 = 1;
  puStack_478 = (undefined8 *)0x0;
  uStack_470 = &UNK_0603db60;
  puStack_468 = &SUB_048b06d0;
  puStack_460 = &UNK_06039820;
  puStack_458 = &UNK_0603df00;
  puStack_450 = &UNK_0603df10;
  uStack_448 = uStack_448 & 0xffffffff00000000;
  lStack_440 = 0;
  plStack_438 = (long *)0x0;
  func_0x048b05a0(&uStack_2c0,&plStack_498);
  plVar19 = plStack_438;
  if (plStack_438 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_438 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_438 + 0x10))(plStack_438);
      func_0x0412c2d0(plVar19);
    }
  }
  uStack_2f8 = iStack_2b0;
  uStack_2f4 = iStack_2ac;
  iStack_2f0 = iStack_2a8;
  iStack_2ec = iStack_2a4;
  uStack_308 = uStack_2c0;
  uStack_300 = CONCAT44(uStack_2b4,uStack_2b8);
  func_0x0603d8f0(&plStack_498,&uStack_308,&plStack_3d8);
  if (uStack_480._4_4_ == 2) {
    piVar22 = *(int **)(*(long *)(uStack_488 + 0x78) + 0x60);
    iVar16 = *piVar22;
    while (iVar16 != (int)uStack_480) {
      piVar22 = piVar22 + 0x16;
      iVar16 = *piVar22;
    }
    lVar21 = *(long *)(piVar22 + 0xc);
    while (lVar21 != lStack_490) {
      piVar22 = *(int **)(piVar22 + 0xe);
      lVar21 = *(long *)(piVar22 + 0xc);
    }
LAB_05f7c8ea:
    *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
  }
  else {
    if (uStack_480._4_4_ == 1) {
      piVar22 = *(int **)(*(long *)(uStack_488 + 0x78) + 0x48);
      iVar16 = *piVar22;
      while (iVar16 != (int)uStack_480) {
        piVar22 = piVar22 + 0x1a;
        iVar16 = *piVar22;
      }
      goto LAB_05f7c8ea;
    }
    if (uStack_480._4_4_ == 0) {
      *(uint *)(uStack_488 + 0x18) = *(uint *)(uStack_488 + 0x18) | 0x90000;
    }
  }
  if ((char)uStack_290 == '\0') {
    func_0x0603dc80(&plStack_498,&lStack_2c8);
  }
  uVar14 = uStack_294;
  lVar21 = lStack_2c8;
  if ((DAT_0f563098 == '\0') && (iVar16 = func_0x04108328(&DAT_0f563098), iVar16 != 0)) {
    func_0x060398e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f563018,0xf53dab8);
    func_0x0410844d(&DAT_0f563098);
  }
  plVar19 = (long *)(*(long *)(lVar21 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar21 + 0x20) - *(long *)(lVar21 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f563018 + 4)) * 8);
  do {
    lVar9 = *plVar19;
    if (lVar9 == -1) goto LAB_05f7c980;
    plVar19 = (long *)(*(long *)(lVar21 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(lVar21 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f563018 + 4));
  if (plVar19 == *(long **)(lVar21 + 0x38)) {
LAB_05f7c980:
    puVar18 = &DAT_0f563018;
  }
  else {
    puVar18 = (undefined *)plVar19[2];
  }
  puVar10 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x28);
  for (puVar28 = *(uint **)(*(long *)(puVar18 + 0x68) + 0x20);
      (puVar28 != puVar10 && (*puVar28 != uVar14)); puVar28 = puVar28 + 0xe) {
  }
  if ((puVar28 == puVar10) &&
     (cVar15 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012f29cf),
     cVar15 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  plStack_498 = (long *)((ulong)plStack_498 & 0xffffffffffffff00);
  func_0x05d9c620(puVar28 + 2,&uStack_29c,&uStack_29c,&plStack_498);
  uStack_308 = lStack_2c8;
  uStack_300 = uStack_2c0;
  uStack_2f8 = uStack_2b8;
  uStack_2f4 = uStack_2b4;
  iStack_2f0 = iStack_2b0;
  iStack_2ec = iStack_2ac;
  iStack_2e8 = iStack_2a8;
  iStack_2e4 = iStack_2a4;
  uStack_2e0 = uStack_2a0;
  uStack_2dc = uStack_29c;
  uStack_2d8 = uStack_298;
  uStack_2d4 = uStack_294;
  uStack_2d0 = uStack_290;
  func_0x048b0bc0(&plStack_3d8);
  func_0x0603d5a0(&plStack_3d8,&UNK_0119a4f0,4);
  uVar24 = (ulong)((byte)uStack_3b0 >> 1);
  if (((byte)uStack_3b0 & 1) != 0) {
    uVar24 = (ulong)uStack_3a8;
    puVar17 = puStack_3a0;
  }
  if (uVar24 == 0) {
    uStack_2dc = 0x811c9dc5;
  }
  else {
    uVar27 = (ulong)((uint)uVar24 & 3);
    if (uVar24 < 4) {
      uStack_2dc = 0x811c9dc5;
      uVar26 = 0;
    }
    else {
      uStack_2dc = 0x811c9dc5;
      uVar26 = 0;
      do {
        uStack_2dc = ((int)*(char *)((long)puVar17 + 3 + uVar26) ^
                     ((int)*(char *)((long)puVar17 + 2 + uVar26) ^
                     ((int)*(char *)((long)puVar17 + 1 + uVar26) ^
                     ((int)*(char *)((long)puVar17 + uVar26) ^ uStack_2dc) * 0x1000193) * 0x1000193)
                     * 0x1000193) * 0x1000193;
        uVar26 = uVar26 + 4;
      } while ((uVar24 & 0xfffffffffffffffc) != uVar26);
    }
    if (uVar27 != 0) {
      uVar24 = 0;
      do {
        uStack_2dc = ((int)*(char *)((long)puVar17 + uVar26 + uVar24) ^ uStack_2dc) * 0x1000193;
        uVar24 = uVar24 + 1;
      } while (uVar27 != uVar24);
    }
  }
  uStack_2e0 = 2;
  if ((DAT_0f5630b8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f5630b8), iVar16 != 0)) {
    func_0x060399f0();
    func_0x0410844d(&DAT_0f5630b8);
  }
  plStack_498 = (long *)CONCAT44(plStack_498._4_4_,uStack_2dc);
  lStack_490 = 0;
  uStack_488 = CONCAT44(uStack_488._4_4_,3);
  uStack_480 = 1;
  puStack_478 = (undefined8 *)0x0;
  uStack_470 = &UNK_0603db60;
  puStack_468 = &SUB_048b06d0;
  puStack_460 = &UNK_06039820;
  puStack_458 = &UNK_0603df60;
  puStack_450 = &UNK_0603df70;
  uStack_448 = uStack_448 & 0xffffffff00000000;
  lStack_440 = 0;
  plStack_438 = (long *)0x0;
  func_0x048b05a0(&uStack_300,&plStack_498);
  lVar21 = lStack_280;
  plVar19 = plStack_438;
  if (plStack_438 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_438 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_438 + 0x10))(plStack_438);
      func_0x0412c2d0(plVar19);
    }
  }
  uStack_198 = iStack_2f0;
  uStack_194 = iStack_2ec;
  iStack_190 = iStack_2e8;
  iStack_18c = iStack_2e4;
  uStack_1a8 = (undefined4)uStack_300;
  uStack_1a4 = uStack_300._4_4_;
  uStack_1a0 = uStack_2f8;
  uStack_19c = uStack_2f4;
  func_0x0603d8f0(&plStack_498,&uStack_1a8,&plStack_3d8);
  if (uStack_480._4_4_ == 2) {
    piVar22 = *(int **)(*(long *)(uStack_488 + 0x78) + 0x60);
    iVar16 = *piVar22;
    while (iVar16 != (int)uStack_480) {
      piVar22 = piVar22 + 0x16;
      iVar16 = *piVar22;
    }
    lVar9 = *(long *)(piVar22 + 0xc);
    while (lVar9 != lStack_490) {
      piVar22 = *(int **)(piVar22 + 0xe);
      lVar9 = *(long *)(piVar22 + 0xc);
    }
LAB_05f7ccfa:
    *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
  }
  else {
    if (uStack_480._4_4_ == 1) {
      piVar22 = *(int **)(*(long *)(uStack_488 + 0x78) + 0x48);
      iVar16 = *piVar22;
      while (iVar16 != (int)uStack_480) {
        piVar22 = piVar22 + 0x1a;
        iVar16 = *piVar22;
      }
      goto LAB_05f7ccfa;
    }
    if (uStack_480._4_4_ == 0) {
      *(uint *)(uStack_488 + 0x18) = *(uint *)(uStack_488 + 0x18) | 0x90000;
    }
  }
  if ((char)uStack_2d0 == '\0') {
    func_0x0603dc80(&plStack_498,&uStack_308);
  }
  uVar14 = uStack_2d4;
  lVar9 = uStack_308;
  if ((DAT_0f563098 == '\0') && (iVar16 = func_0x04108328(&DAT_0f563098), iVar16 != 0)) {
    func_0x060398e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f563018,0xf53dab8);
    func_0x0410844d(&DAT_0f563098);
  }
  plVar19 = (long *)(*(long *)(lVar9 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar9 + 0x20) - *(long *)(lVar9 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f563018 + 4)) * 8);
  do {
    lVar11 = *plVar19;
    if (lVar11 == -1) goto LAB_05f7cd90;
    plVar19 = (long *)(*(long *)(lVar9 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(lVar9 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f563018 + 4));
  if (plVar19 == *(long **)(lVar9 + 0x38)) {
LAB_05f7cd90:
    puVar17 = &DAT_0f563018;
  }
  else {
    puVar17 = (undefined *)plVar19[2];
  }
  puVar10 = *(uint **)(*(long *)(puVar17 + 0x68) + 0x28);
  for (puVar28 = *(uint **)(*(long *)(puVar17 + 0x68) + 0x20);
      (puVar28 != puVar10 && (*puVar28 != uVar14)); puVar28 = puVar28 + 0xe) {
  }
  if ((puVar28 == puVar10) &&
     (cVar15 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012f29cf),
     cVar15 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  plStack_498 = (long *)((ulong)plStack_498 & 0xffffffffffffff00);
  func_0x05d9c620(puVar28 + 2,&uStack_2dc,&uStack_2dc,&plStack_498);
  func_0x048b0bc0(&plStack_3d8);
  if ((DAT_0f563150 == '\0') && (iVar16 = func_0x04108328(&DAT_0f563150), iVar16 != 0)) {
    func_0x0603e080();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5630d0,0xf53dab8);
    func_0x0410844d(&DAT_0f563150);
  }
  plVar19 = (long *)(*(long *)(lVar21 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar21 + 0x20) - *(long *)(lVar21 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5630d0 + 4)) * 8);
  do {
    lVar9 = *plVar19;
    if (lVar9 == -1) goto LAB_05f7ce90;
    plVar19 = (long *)(*(long *)(lVar21 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(lVar21 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5630d0 + 4));
  if (plVar19 == *(long **)(lVar21 + 0x38)) {
LAB_05f7ce90:
    puVar17 = &DAT_0f5630d0;
    if (iRam000000000f563130 != -0x2b3da790) goto LAB_05f7cee8;
LAB_05f7cebb:
    lVar9 = *(long *)(puVar17 + 0x68);
    if (lVar9 == 0) goto LAB_05f7cee8;
    bVar29 = (*(byte *)(lVar9 + 8) & 1) != 0;
    puVar17 = (undefined *)(lVar9 + 9);
    if (bVar29) {
      puVar17 = *(undefined **)(lVar9 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar29) {
      uVar24 = *(ulong *)(lVar9 + 0x10);
    }
  }
  else {
    puVar17 = (undefined *)plVar19[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_05f7cebb;
LAB_05f7cee8:
    puVar17 = &UNK_014963fb;
    uVar24 = 0x1d;
  }
  func_0x0603e4c0(&uStack_308,lVar21,puVar17,uVar24);
  uStack_2d4 = uStack_2d4 & 0xffffff00;
  uStack_2d0 = uStack_2d0 & 0xffffff00;
  plVar19 = (long *)__ctype_tolower_loc();
  lVar21 = *plVar19;
  uStack_1b8 = (ulong)*(uint *)(lVar21 + 0x1a8);
  bVar2 = *(byte *)(lVar21 + 0x184);
  iVar16 = *(int *)(lVar21 + 0x1d8);
  bVar3 = *(byte *)(lVar21 + 0x1cc);
  bVar4 = *(byte *)(lVar21 + 0x18c);
  bVar5 = *(byte *)(lVar21 + 0x1c8);
  uVar6 = *(undefined1 *)(lVar21 + 0x1a4);
  uVar7 = *(undefined1 *)(lVar21 + 0x1c0);
  uVar8 = *(undefined1 *)(lVar21 + 0x1d0);
  plStack_378 = (long *)0x0;
  lStack_370 = 0;
  uStack_388 = 0;
  lStack_380 = 0;
  puStack_398 = (undefined *)0x0;
  puStack_390 = (undefined *)0x0;
  uStack_3a8 = (undefined1 *)0x0;
  puStack_3a0 = (undefined *)0x0;
  puStack_3b8 = (undefined8 *)0x0;
  uStack_3b0 = (undefined *)0x0;
  auStack_3c8 = (undefined1  [8])0x0;
  uStack_3c0 = (long *)0x0;
  plStack_3d8 = (long *)0x0;
  plStack_3d0 = (long *)0x0;
  uStack_368 = 0x3f600000;
  func_0x048afb10(&puStack_398,8);
  uStack_340 = 0;
  lStack_338 = 0;
  lStack_350 = 0;
  uStack_348 = 0;
  lStack_360 = 0;
  lStack_358 = 0;
  uStack_330 = CONCAT22(uStack_330._2_2_,0xff00);
  uStack_32c = uStack_32c & 0xffffff00;
  uStack_328 = uStack_328 & 0xffffff00;
  uStack_324 = 0;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0f018bb0;
  if (plStack_3d8 != (long *)0x0) {
    lVar21 = *plStack_3d8;
    plStack_3d8 = plVar19;
    (**(code **)(lVar21 + 8))();
    plVar19 = plStack_3d8;
  }
  plStack_3d8 = plVar19;
  if (((ulong)uStack_3b0 & 1) != 0) {
    func_0x0412a280(puStack_3a0,(ulong)uStack_3b0 & 0xfffffffffffffffe);
  }
  uVar13 = uStack_3a8;
  lStack_490 = (long)plStack_3d0;
  plStack_498 = plStack_3d8;
  uStack_3b0 = (undefined *)
               ((ulong)(((uint)uStack_1b8 & 0xff) << 8) |
                (ulong)bVar2 << 0x10 |
                (ulong)(uint)(iVar16 << 0x18) |
                (ulong)bVar2 << 0x20 |
                (ulong)bVar3 << 0x28 | (ulong)bVar4 << 0x30 | (ulong)bVar5 << 0x38 | 0x14);
  uStack_3a8._4_4_ = SUB84(uVar13,4);
  uStack_3a8._0_4_ = (uint)CONCAT12(uVar8,CONCAT11(uVar7,uVar6));
  if (((ulong)auStack_3c8 & 1) == 0) {
    auStack_3c8[0] = 0x14;
    puVar23 = (undefined8 *)(auStack_3c8 + 1);
  }
  else {
    uStack_3c0 = (long *)0xa;
    puVar23 = puStack_3b8;
  }
  *puVar23 = 0x697263736176616a;
  *(undefined2 *)(puVar23 + 1) = 0x7470;
  *(undefined1 *)((long)puVar23 + 10) = 0;
  plStack_3d8 = (long *)0x0;
  plStack_3d0 = (long *)0x0;
  puStack_478 = puStack_3b8;
  uStack_488 = (ulong)auStack_3c8;
  uStack_480 = (long)uStack_3c0;
  auStack_3c8 = (undefined1  [8])0x0;
  uStack_3c0 = (long *)0x0;
  puStack_3b8 = (undefined8 *)0x0;
  puStack_460 = puStack_3a0;
  uStack_470 = uStack_3b0;
  puStack_468 = uStack_3a8;
  uStack_3b0 = (undefined *)0x0;
  uStack_3a8 = (undefined1 *)0x0;
  puStack_3a0 = (undefined *)0x0;
  puStack_458 = puStack_398;
  puStack_450 = puStack_390;
  uStack_448 = uStack_388;
  puStack_398 = (undefined *)0x0;
  puStack_390 = (undefined *)0x0;
  uStack_388 = 0;
  lStack_440 = lStack_380;
  plStack_438 = plStack_378;
  lStack_430 = lStack_370;
  lStack_380 = 0;
  plStack_378 = (long *)0x0;
  lStack_370 = 0;
  uStack_428 = uStack_368;
  lStack_420 = lStack_360;
  lStack_418 = lStack_358;
  lStack_410 = lStack_350;
  lStack_360 = 0;
  lStack_358 = 0;
  lStack_350 = 0;
  lStack_3f8 = lStack_338;
  uStack_3f0 = uStack_330;
  uStack_408 = uStack_348;
  uStack_400 = uStack_340;
  uStack_348 = 0;
  uStack_340 = 0;
  lStack_338 = 0;
  uStack_3e8 = CONCAT14(uStack_324,uStack_328);
  uStack_3ec = uStack_32c;
  func_0x048b0bc0();
  puVar25 = (undefined1 *)((ulong)uStack_470 >> 1 & 0x7f);
  puVar17 = (undefined *)((long)&uStack_470 + 1);
  if (((ulong)uStack_470 & 1) != 0) {
    puVar25 = puStack_468;
    puVar17 = puStack_460;
  }
  if (puVar25 == (undefined1 *)0x0) {
    uStack_2dc = 0x811c9dc5;
  }
  else {
    uVar24 = (ulong)((uint)puVar25 & 3);
    if (puVar25 < 4) {
      uStack_2dc = 0x811c9dc5;
      uVar27 = 0;
    }
    else {
      uStack_2dc = 0x811c9dc5;
      uVar27 = 0;
      do {
        uStack_2dc = ((int)*(char *)((long)puVar17 + 3 + uVar27) ^
                     ((int)*(char *)((long)puVar17 + 2 + uVar27) ^
                     ((int)*(char *)((long)puVar17 + 1 + uVar27) ^
                     ((int)*(char *)((long)puVar17 + uVar27) ^ uStack_2dc) * 0x1000193) * 0x1000193)
                     * 0x1000193) * 0x1000193;
        uVar27 = uVar27 + 4;
      } while (((ulong)puVar25 & 0xfffffffffffffffc) != uVar27);
    }
    if (uVar24 != 0) {
      uVar26 = 0;
      do {
        uStack_2dc = ((int)*(char *)((long)puVar17 + uVar27 + uVar26) ^ uStack_2dc) * 0x1000193;
        uVar26 = uVar26 + 1;
      } while (uVar24 != uVar26);
    }
  }
  uStack_2e0 = 2;
  if ((DAT_0f563170 == '\0') && (iVar16 = func_0x04108328(&DAT_0f563170), iVar16 != 0)) {
    func_0x0603e190();
    func_0x0410844d(&DAT_0f563170);
  }
  plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,uStack_2dc);
  plStack_3d0 = (long *)0x0;
  auStack_3c8._0_4_ = 3;
  uStack_3c0 = (long *)0x1;
  puStack_3b8 = (undefined8 *)0x0;
  uStack_3b0 = &UNK_06041d40;
  uStack_3a8 = &SUB_048b06d0;
  puStack_3a0 = &UNK_0603dfc0;
  puStack_398 = &UNK_06041e00;
  puStack_390 = &UNK_06041e10;
  uStack_388 = uStack_388 & 0xffffffff00000000;
  lStack_380 = 0;
  plStack_378 = (long *)0x0;
  func_0x048b05a0(&uStack_300,&plStack_3d8);
  plVar19 = plStack_378;
  if (plStack_378 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_378 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_378 + 0x10))(plStack_378);
      func_0x0412c2d0(plVar19);
    }
  }
  uStack_2b8 = iStack_2f0;
  uStack_2b4 = iStack_2ec;
  iStack_2b0 = iStack_2e8;
  iStack_2ac = iStack_2e4;
  lStack_2c8 = uStack_300;
  uStack_2c0 = CONCAT44(uStack_2f4,uStack_2f8);
  if ((DAT_0f550a20 == '\0') && (iVar16 = func_0x04108328(&DAT_0f550a20), iVar16 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,_DAT_0f550a0c);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar21 = lStack_490;
  plVar1 = plStack_498;
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0ef439d0;
  plStack_3d0 = plVar19 + 3;
  plStack_498 = (long *)0x0;
  lStack_490 = 0;
  plVar19[3] = (long)plVar1;
  plVar19[4] = lVar21;
  plVar19[7] = (long)puStack_478;
  plVar19[5] = uStack_488;
  plVar19[6] = uStack_480;
  uStack_488 = 0;
  uStack_480 = 0;
  puStack_478 = (undefined8 *)0x0;
  plVar19[10] = (long)puStack_460;
  plVar19[8] = (long)uStack_470;
  plVar19[9] = (long)puStack_468;
  uStack_470 = (undefined *)0x0;
  puStack_468 = (undefined1 *)0x0;
  puStack_460 = (undefined *)0x0;
  plVar19[0xb] = (long)puStack_458;
  plVar19[0xc] = (long)puStack_450;
  plVar19[0xd] = uStack_448;
  puStack_458 = (undefined *)0x0;
  puStack_450 = (undefined *)0x0;
  uStack_448 = 0;
  plVar19[0xe] = lStack_440;
  plVar19[0xf] = (long)plStack_438;
  plVar19[0x10] = lStack_430;
  lStack_440 = 0;
  plStack_438 = (long *)0x0;
  lStack_430 = 0;
  *(undefined4 *)(plVar19 + 0x11) = uStack_428;
  plVar19[0x12] = lStack_420;
  plVar19[0x13] = lStack_418;
  plVar19[0x14] = lStack_410;
  lStack_420 = 0;
  lStack_418 = 0;
  lStack_410 = 0;
  plVar19[0x17] = lStack_3f8;
  *(undefined4 *)(plVar19 + 0x15) = (undefined4)uStack_408;
  *(undefined4 *)((long)plVar19 + 0xac) = uStack_408._4_4_;
  *(undefined4 *)(plVar19 + 0x16) = (undefined4)uStack_400;
  *(undefined4 *)((long)plVar19 + 0xb4) = uStack_400._4_4_;
  uStack_408 = 0;
  uStack_400 = 0;
  lStack_3f8 = 0;
  *(ulong *)((long)plVar19 + 0xc5) = CONCAT53(uStack_3e8,uStack_3ec._1_3_);
  plVar19[0x18] = CONCAT44(uStack_3ec,uStack_3f0);
  uStack_278 = 0;
  uStack_270 = (long *)0x0;
  auStack_3c8 = (undefined1  [8])plVar19;
  func_0x048afd20(&lStack_2c8,&plStack_3d8);
  auVar12 = auStack_3c8;
  if (auStack_3c8 != (undefined1  [8])0x0) {
    LOCK();
    plVar19 = (long *)((long)auStack_3c8 + 8);
    lVar21 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*(long *)auStack_3c8 + 0x10))(auStack_3c8);
      func_0x0412c2d0(auVar12);
    }
  }
  plVar19 = uStack_270;
  if (uStack_270 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_270 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*uStack_270 + 0x10))(uStack_270);
      func_0x0412c2d0(plVar19);
    }
  }
  lVar9 = uStack_308;
  lVar21 = CONCAT44(uStack_2b4,uStack_2b8);
  if (iStack_2ac == 2) {
    piVar22 = *(int **)(*(long *)(lVar21 + 0x78) + 0x60);
    iVar16 = *piVar22;
    while (iVar16 != iStack_2b0) {
      piVar22 = piVar22 + 0x16;
      iVar16 = *piVar22;
    }
    for (; *(long *)(piVar22 + 0xc) != uStack_2c0; piVar22 = *(int **)(piVar22 + 0xe)) {
    }
LAB_05f7d6fa:
    *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 9;
  }
  else {
    if (iStack_2ac == 1) {
      piVar22 = *(int **)(*(long *)(lVar21 + 0x78) + 0x48);
      iVar16 = *piVar22;
      while (iVar16 != iStack_2b0) {
        piVar22 = piVar22 + 0x1a;
        iVar16 = *piVar22;
      }
      goto LAB_05f7d6fa;
    }
    if (iStack_2ac == 0) {
      *(byte *)(lVar21 + 0x1a) = *(byte *)(lVar21 + 0x1a) | 9;
    }
  }
  if ((char)uStack_2d0 == '\0') {
    uStack_2d4 = 0xbb8863ad;
    uStack_2d0 = CONCAT31(uStack_2d0._1_3_,1);
    plStack_3d8 = (long *)CONCAT44(plStack_3d8._4_4_,0xbb8863ad);
    if ((DAT_0f563150 == '\0') && (iVar16 = func_0x04108328(&DAT_0f563150), iVar16 != 0)) {
      func_0x0603e080();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5630d0,0xf53dab8);
      func_0x0410844d(&DAT_0f563150);
    }
    plVar19 = (long *)(*(long *)(lVar9 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar9 + 0x20) - *(long *)(lVar9 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f5630d0 + 4)) * 8);
    do {
      lVar21 = *plVar19;
      if (lVar21 == -1) goto LAB_05f7d790;
      plVar19 = (long *)(*(long *)(lVar9 + 0x30) + lVar21 * 0x18);
    } while (*(uint *)(*(long *)(lVar9 + 0x30) + 8 + lVar21 * 0x18) != *(uint *)(_DAT_0f5630d0 + 4))
    ;
    if (plVar19 == *(long **)(lVar9 + 0x38)) {
LAB_05f7d790:
      puVar17 = &DAT_0f5630d0;
    }
    else {
      puVar17 = (undefined *)plVar19[2];
    }
    lVar21 = *(long *)(puVar17 + 0x68);
    piVar20 = *(int **)(lVar21 + 0x28);
    for (piVar22 = *(int **)(lVar21 + 0x20); (piVar22 != piVar20 && (*piVar22 != -0x44779c53));
        piVar22 = piVar22 + 0xe) {
    }
    if (piVar22 == piVar20) {
      if (piVar20 < *(int **)(lVar21 + 0x30)) {
        *piVar20 = -0x44779c53;
        piVar20[2] = 0;
        piVar20[3] = 0;
        piVar20[4] = 0;
        piVar20[5] = 0;
        piVar20[6] = 0;
        piVar20[7] = 0;
        piVar20[8] = 0;
        piVar20[9] = 0;
        piVar20[10] = 0x3f800000;
        *(undefined1 *)(piVar20 + 0xc) = 0;
        *(undefined1 *)(piVar20 + 0xd) = 0;
        piVar20 = piVar20 + 0xe;
      }
      else {
        piVar20 = (int *)func_0x05d9c2b0(lVar21 + 0x20,&plStack_3d8);
      }
      *(int **)(lVar21 + 0x28) = piVar20;
    }
    else if ((*(long *)(piVar22 + 8) != 0) &&
            (cVar15 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_0130ba4a)
            , cVar15 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar14 = uStack_2d4;
  lVar21 = uStack_308;
  if ((DAT_0f563150 == '\0') && (iVar16 = func_0x04108328(&DAT_0f563150), iVar16 != 0)) {
    func_0x0603e080();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5630d0,0xf53dab8);
    func_0x0410844d(&DAT_0f563150);
  }
  plVar19 = (long *)(*(long *)(lVar21 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar21 + 0x20) - *(long *)(lVar21 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5630d0 + 4)) * 8);
  do {
    lVar9 = *plVar19;
    if (lVar9 == -1) goto LAB_05f7d8d0;
    plVar19 = (long *)(*(long *)(lVar21 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(lVar21 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f5630d0 + 4));
  if (plVar19 == *(long **)(lVar21 + 0x38)) {
LAB_05f7d8d0:
    puVar17 = &DAT_0f5630d0;
  }
  else {
    puVar17 = (undefined *)plVar19[2];
  }
  puVar10 = *(uint **)(*(long *)(puVar17 + 0x68) + 0x28);
  for (puVar28 = *(uint **)(*(long *)(puVar17 + 0x68) + 0x20);
      (puVar28 != puVar10 && (*puVar28 != uVar14)); puVar28 = puVar28 + 0xe) {
  }
  if ((puVar28 == puVar10) &&
     (cVar15 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01448e34),
     cVar15 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  plStack_3d8 = (long *)((ulong)plStack_3d8 & 0xffffffffffffff00);
  func_0x05d9c620(puVar28 + 2,&uStack_2dc,&uStack_2dc,&plStack_3d8);
  func_0x048b0bc0(&plStack_498);
  lVar21 = func_0x06041e60(lStack_1b0);
  if ((*(int *)(lVar21 + 0x60) == -0x2b3da790) && (lVar21 = *(long *)(lVar21 + 0x68), lVar21 != 0))
  {
    bVar29 = (*(byte *)(lVar21 + 8) & 1) != 0;
    puVar17 = (undefined *)(lVar21 + 9);
    if (bVar29) {
      puVar17 = *(undefined **)(lVar21 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar21 + 8) >> 1);
    if (bVar29) {
      uVar24 = *(ulong *)(lVar21 + 0x10);
    }
  }
  else {
    puVar17 = &UNK_01479ea0;
    uVar24 = 0x15;
  }
  func_0x06045700(&uStack_68,lStack_280,puVar17,uVar24);
  func_0x06045c40(&plStack_3d8,CONCAT44(uStack_64,uStack_68) + 0x18);
  if (uStack_3c0._4_4_ == 2) {
    piVar22 = *(int **)(*(long *)((long)auStack_3c8 + 0x78) + 0x60);
    iVar16 = *piVar22;
    while (iVar16 != (int)uStack_3c0) {
      piVar22 = piVar22 + 0x16;
      iVar16 = *piVar22;
    }
    plVar19 = *(long **)(piVar22 + 0xc);
    while (plVar19 != plStack_3d0) {
      piVar22 = *(int **)(piVar22 + 0xe);
      plVar19 = *(long **)(piVar22 + 0xc);
    }
LAB_05f7da9a:
    *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 4;
  }
  else {
    if (uStack_3c0._4_4_ == 1) {
      piVar22 = *(int **)(*(long *)((long)auStack_3c8 + 0x78) + 0x48);
      iVar16 = *piVar22;
      while (iVar16 != (int)uStack_3c0) {
        piVar22 = piVar22 + 0x1a;
        iVar16 = *piVar22;
      }
      goto LAB_05f7da9a;
    }
    if (uStack_3c0._4_4_ == 0) {
      *(uint *)((long)auStack_3c8 + 0x18) = *(uint *)((long)auStack_3c8 + 0x18) | 0x40000;
    }
  }
  func_0x06046000(&plStack_3d8,&uStack_68,&UNK_0147831a,9,0x10);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0f01ae00;
  if (uStack_3c0 != (long *)0x0) {
    lVar21 = *uStack_3c0;
    uStack_3c0 = plVar19;
    (**(code **)(lVar21 + 8))();
    plVar19 = uStack_3c0;
  }
  uStack_3c0 = plVar19;
  plStack_498 = (long *)CONCAT44(plStack_498._4_4_,auStack_3c8._0_4_);
  lStack_490 = 0;
  uStack_488 = uStack_488 & 0xffffffff00000000;
  uStack_480 = 1;
  puStack_478 = (undefined8 *)0x0;
  uStack_470 = &UNK_06046510;
  puStack_468 = &SUB_048b06d0;
  puStack_460 = &UNK_0602fbb0;
  puStack_458 = &UNK_06046520;
  puStack_450 = &UNK_06046680;
  uStack_448 = uStack_448 & 0xffffffff00000000;
  lStack_440 = 0;
  plStack_438 = (long *)0x0;
  func_0x048b05a0(plStack_3d0,&plStack_498);
  plVar19 = plStack_438;
  if (plStack_438 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_438 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_438 + 0x10))(plStack_438);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x06046210(&plStack_3d8);
  uStack_138 = uStack_38;
  uStack_148 = uStack_48;
  uStack_144 = uStack_44;
  uStack_140 = uStack_40;
  uStack_13c = uStack_3c;
  uStack_158 = uStack_58;
  uStack_154 = uStack_54;
  uStack_150 = uStack_50;
  uStack_14c = uStack_4c;
  uStack_168 = uStack_68;
  uStack_164 = uStack_64;
  uStack_160 = uStack_60;
  uStack_15c = uStack_5c;
  func_0x048b0bc0(&uStack_3c0);
  func_0x06045c40(&plStack_3d8,CONCAT44(uStack_164,uStack_168) + 0x18);
  if (uStack_3c0._4_4_ == 2) {
    piVar22 = *(int **)(*(long *)((long)auStack_3c8 + 0x78) + 0x60);
    iVar16 = *piVar22;
    while (iVar16 != (int)uStack_3c0) {
      piVar22 = piVar22 + 0x16;
      iVar16 = *piVar22;
    }
    plVar19 = *(long **)(piVar22 + 0xc);
    while (plVar19 != plStack_3d0) {
      piVar22 = *(int **)(piVar22 + 0xe);
      plVar19 = *(long **)(piVar22 + 0xc);
    }
LAB_05f7dcda:
    *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 4;
  }
  else {
    if (uStack_3c0._4_4_ == 1) {
      piVar22 = *(int **)(*(long *)((long)auStack_3c8 + 0x78) + 0x48);
      iVar16 = *piVar22;
      while (iVar16 != (int)uStack_3c0) {
        piVar22 = piVar22 + 0x1a;
        iVar16 = *piVar22;
      }
      goto LAB_05f7dcda;
    }
    if (uStack_3c0._4_4_ == 0) {
      *(uint *)((long)auStack_3c8 + 0x18) = *(uint *)((long)auStack_3c8 + 0x18) | 0x40000;
    }
  }
  func_0x06046000(&plStack_3d8,&uStack_168,&UNK_0123df40,8,0x10);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0f018bb0;
  if (uStack_3c0 != (long *)0x0) {
    lVar21 = *uStack_3c0;
    uStack_3c0 = plVar19;
    (**(code **)(lVar21 + 8))();
    plVar19 = uStack_3c0;
  }
  uStack_3c0 = plVar19;
  plStack_498 = (long *)CONCAT44(plStack_498._4_4_,auStack_3c8._0_4_);
  lStack_490 = 0;
  uStack_488 = uStack_488 & 0xffffffff00000000;
  uStack_480 = 1;
  puStack_478 = (undefined8 *)0x0;
  uStack_470 = &UNK_06041d40;
  puStack_468 = &SUB_048b06d0;
  puStack_460 = &UNK_0603dfc0;
  puStack_458 = &UNK_06046af0;
  puStack_450 = &UNK_06046c50;
  uStack_448 = uStack_448 & 0xffffffff00000000;
  lStack_440 = 0;
  plStack_438 = (long *)0x0;
  func_0x048b05a0(plStack_3d0,&plStack_498);
  plVar19 = plStack_438;
  if (plStack_438 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_438 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_438 + 0x10))(plStack_438);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x06046210(&plStack_3d8);
  uStack_f8 = uStack_138;
  uStack_108 = uStack_148;
  uStack_104 = uStack_144;
  uStack_100 = uStack_140;
  uStack_fc = uStack_13c;
  uStack_118 = uStack_158;
  uStack_114 = uStack_154;
  uStack_110 = uStack_150;
  uStack_10c = uStack_14c;
  uStack_128 = uStack_168;
  uStack_124 = uStack_164;
  uStack_120 = uStack_160;
  uStack_11c = uStack_15c;
  func_0x048b0bc0(&uStack_3c0);
  func_0x06045c40(&plStack_3d8,CONCAT44(uStack_124,uStack_128) + 0x18);
  if (uStack_3c0._4_4_ == 2) {
    piVar22 = *(int **)(*(long *)((long)auStack_3c8 + 0x78) + 0x60);
    iVar16 = *piVar22;
    while (iVar16 != (int)uStack_3c0) {
      piVar22 = piVar22 + 0x16;
      iVar16 = *piVar22;
    }
    plVar19 = *(long **)(piVar22 + 0xc);
    while (plVar19 != plStack_3d0) {
      piVar22 = *(int **)(piVar22 + 0xe);
      plVar19 = *(long **)(piVar22 + 0xc);
    }
LAB_05f7df1a:
    *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 4;
  }
  else {
    if (uStack_3c0._4_4_ == 1) {
      piVar22 = *(int **)(*(long *)((long)auStack_3c8 + 0x78) + 0x48);
      iVar16 = *piVar22;
      while (iVar16 != (int)uStack_3c0) {
        piVar22 = piVar22 + 0x1a;
        iVar16 = *piVar22;
      }
      goto LAB_05f7df1a;
    }
    if (uStack_3c0._4_4_ == 0) {
      *(uint *)((long)auStack_3c8 + 0x18) = *(uint *)((long)auStack_3c8 + 0x18) | 0x40000;
    }
  }
  func_0x06046000(&plStack_3d8,&uStack_128,&UNK_0120767b,5,0x10);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0f018ad0;
  if (uStack_3c0 != (long *)0x0) {
    lVar21 = *uStack_3c0;
    uStack_3c0 = plVar19;
    (**(code **)(lVar21 + 8))();
    plVar19 = uStack_3c0;
  }
  uStack_3c0 = plVar19;
  plStack_498 = (long *)CONCAT44(plStack_498._4_4_,auStack_3c8._0_4_);
  lStack_490 = 0;
  uStack_488 = uStack_488 & 0xffffffff00000000;
  uStack_480 = 1;
  puStack_478 = (undefined8 *)0x0;
  uStack_470 = &UNK_0603db60;
  puStack_468 = &SUB_048b06d0;
  puStack_460 = &UNK_06039820;
  puStack_458 = &UNK_060470c0;
  puStack_450 = &UNK_06047220;
  uStack_448 = uStack_448 & 0xffffffff00000000;
  lStack_440 = 0;
  plStack_438 = (long *)0x0;
  func_0x048b05a0(plStack_3d0,&plStack_498);
  plVar19 = plStack_438;
  if (plStack_438 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_438 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_438 + 0x10))(plStack_438);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x06046210(&plStack_3d8);
  uStack_b8 = uStack_f8;
  uStack_c8 = uStack_108;
  uStack_c4 = uStack_104;
  uStack_c0 = uStack_100;
  uStack_bc = uStack_fc;
  uStack_d8 = uStack_118;
  uStack_d4 = uStack_114;
  uStack_d0 = uStack_110;
  uStack_cc = uStack_10c;
  uStack_e8 = uStack_128;
  uStack_e4 = uStack_124;
  uStack_e0 = uStack_120;
  uStack_dc = uStack_11c;
  func_0x048b0bc0(&uStack_3c0);
  func_0x06045c40(&plStack_3d8,CONCAT44(uStack_e4,uStack_e8) + 0x18);
  if (uStack_3c0._4_4_ == 2) {
    piVar22 = *(int **)(*(long *)((long)auStack_3c8 + 0x78) + 0x60);
    iVar16 = *piVar22;
    while (iVar16 != (int)uStack_3c0) {
      piVar22 = piVar22 + 0x16;
      iVar16 = *piVar22;
    }
    plVar19 = *(long **)(piVar22 + 0xc);
    while (plVar19 != plStack_3d0) {
      piVar22 = *(int **)(piVar22 + 0xe);
      plVar19 = *(long **)(piVar22 + 0xc);
    }
  }
  else {
    if (uStack_3c0._4_4_ != 1) {
      if (uStack_3c0._4_4_ == 0) {
        *(uint *)((long)auStack_3c8 + 0x18) = *(uint *)((long)auStack_3c8 + 0x18) | 0x40000;
      }
      goto LAB_05f7e15e;
    }
    piVar22 = *(int **)(*(long *)((long)auStack_3c8 + 0x78) + 0x48);
    iVar16 = *piVar22;
    while (iVar16 != (int)uStack_3c0) {
      piVar22 = piVar22 + 0x1a;
      iVar16 = *piVar22;
    }
  }
  *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 4;
LAB_05f7e15e:
  func_0x06046000(&plStack_3d8,&uStack_e8,&UNK_013c6088,7,0x10);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0ef44b00;
  if (uStack_3c0 != (long *)0x0) {
    lVar21 = *uStack_3c0;
    uStack_3c0 = plVar19;
    (**(code **)(lVar21 + 8))();
    plVar19 = uStack_3c0;
  }
  uStack_3c0 = plVar19;
  plStack_498 = (long *)CONCAT44(plStack_498._4_4_,auStack_3c8._0_4_);
  lStack_490 = 0;
  uStack_488 = uStack_488 & 0xffffffff00000000;
  uStack_480 = 1;
  puStack_478 = (undefined8 *)0x0;
  uStack_470 = &UNK_048b3f30;
  puStack_468 = &SUB_048b06d0;
  puStack_460 = &SUB_048b2190;
  puStack_458 = &UNK_06047690;
  puStack_450 = &UNK_06047860;
  uStack_448 = uStack_448 & 0xffffffff00000000;
  lStack_440 = 0;
  plStack_438 = (long *)0x0;
  func_0x048b05a0(plStack_3d0,&plStack_498);
  plVar19 = plStack_438;
  if (plStack_438 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_438 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_438 + 0x10))(plStack_438);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x06046210(&plStack_3d8);
  uStack_78 = uStack_b8;
  uStack_88 = uStack_c8;
  uStack_84 = uStack_c4;
  uStack_80 = uStack_c0;
  uStack_7c = uStack_bc;
  uStack_98 = uStack_d8;
  uStack_94 = uStack_d4;
  uStack_90 = uStack_d0;
  uStack_8c = uStack_cc;
  uStack_a8 = uStack_e8;
  uStack_a4 = uStack_e4;
  uStack_a0 = uStack_e0;
  uStack_9c = uStack_dc;
  func_0x048b0bc0(&uStack_3c0);
  func_0x06046000(&plStack_3d8,&uStack_a8,&UNK_0123d5a9,4,0);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0f018c78;
  if (uStack_3c0 != (long *)0x0) {
    lVar21 = *uStack_3c0;
    uStack_3c0 = plVar19;
    (**(code **)(lVar21 + 8))();
    plVar19 = uStack_3c0;
  }
  uStack_3c0 = plVar19;
  plStack_498 = (long *)CONCAT44(plStack_498._4_4_,auStack_3c8._0_4_);
  lStack_490 = 0;
  uStack_488 = uStack_488 & 0xffffffff00000000;
  uStack_480 = 1;
  puStack_478 = (undefined8 *)0x0;
  uStack_470 = &UNK_0604d7a0;
  puStack_468 = &SUB_048b06d0;
  puStack_460 = &UNK_0604d460;
  puStack_458 = &UNK_0604d7b0;
  puStack_450 = &UNK_0604da10;
  uStack_448 = uStack_448 & 0xffffffff00000000;
  lStack_440 = 0;
  plStack_438 = (long *)0x0;
  func_0x048b05a0(plStack_3d0,&plStack_498);
  plVar19 = plStack_438;
  if (plStack_438 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_438 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_438 + 0x10))(plStack_438);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x06046210(&plStack_3d8);
  uStack_178 = uStack_78;
  uStack_188 = uStack_88;
  uStack_184 = uStack_84;
  uStack_180 = uStack_80;
  uStack_17c = uStack_7c;
  uStack_198 = uStack_98;
  uStack_194 = uStack_94;
  iStack_190 = uStack_90;
  iStack_18c = uStack_8c;
  uStack_1a8 = uStack_a8;
  uStack_1a4 = uStack_a4;
  uStack_1a0 = uStack_a0;
  uStack_19c = uStack_9c;
  func_0x048b0bc0(&uStack_3c0);
  func_0x06046000(&plStack_3d8,&uStack_1a8,&UNK_012d53ae,9,0);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0f018e08;
  if (uStack_3c0 != (long *)0x0) {
    lVar21 = *uStack_3c0;
    uStack_3c0 = plVar19;
    (**(code **)(lVar21 + 8))();
    plVar19 = uStack_3c0;
  }
  uStack_3c0 = plVar19;
  plStack_498 = (long *)CONCAT44(plStack_498._4_4_,auStack_3c8._0_4_);
  lStack_490 = 0;
  uStack_488 = uStack_488 & 0xffffffff00000000;
  uStack_480 = 1;
  puStack_478 = (undefined8 *)0x0;
  uStack_470 = &UNK_06052270;
  puStack_468 = &SUB_048b06d0;
  puStack_460 = &UNK_06051ea0;
  puStack_458 = &UNK_06052330;
  puStack_450 = &UNK_06052580;
  uStack_448 = uStack_448 & 0xffffffff00000000;
  lStack_440 = 0;
  plStack_438 = (long *)0x0;
  func_0x048b05a0(plStack_3d0,&plStack_498);
  plVar19 = plStack_438;
  if (plStack_438 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_438 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_438 + 0x10))(plStack_438);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x06046210(&plStack_3d8);
  uStack_208 = CONCAT31(uStack_208._1_3_,uStack_178);
  iStack_218 = uStack_188;
  iStack_214 = uStack_184;
  uStack_210 = uStack_180;
  uStack_20c = uStack_17c;
  uStack_228 = uStack_198;
  uStack_224 = uStack_194;
  uStack_220 = iStack_190;
  uStack_21c = iStack_18c;
  uStack_238 = uStack_1a8;
  uStack_234 = uStack_1a4;
  uStack_230 = uStack_1a0;
  uStack_22c = uStack_19c;
  func_0x048b0bc0(&uStack_3c0);
  func_0x06046000(&plStack_3d8,&uStack_238,&UNK_012be988,10,0);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0f019000;
  if (uStack_3c0 != (long *)0x0) {
    lVar21 = *uStack_3c0;
    uStack_3c0 = plVar19;
    (**(code **)(lVar21 + 8))();
    plVar19 = uStack_3c0;
  }
  uStack_3c0 = plVar19;
  plStack_498 = (long *)CONCAT44(plStack_498._4_4_,auStack_3c8._0_4_);
  lStack_490 = 0;
  uStack_488 = uStack_488 & 0xffffffff00000000;
  uStack_480 = 1;
  puStack_478 = (undefined8 *)0x0;
  uStack_470 = &UNK_06053ca0;
  puStack_468 = &SUB_048b06d0;
  puStack_460 = &UNK_060538d0;
  puStack_458 = &UNK_06053d60;
  puStack_450 = &UNK_06054030;
  uStack_448 = uStack_448 & 0xffffffff00000000;
  lStack_440 = 0;
  plStack_438 = (long *)0x0;
  func_0x048b05a0(plStack_3d0,&plStack_498);
  plVar19 = plStack_438;
  if (plStack_438 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_438 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_438 + 0x10))(plStack_438);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x06046210(&plStack_3d8);
  uStack_1c8 = CONCAT31(uStack_1c8._1_3_,(undefined1)uStack_208);
  iStack_1d8 = iStack_218;
  iStack_1d4 = iStack_214;
  uStack_1d0 = uStack_210;
  uStack_1cc = uStack_20c;
  uStack_1e8 = uStack_228;
  uStack_1e4 = uStack_224;
  uStack_1e0 = uStack_220;
  uStack_1dc = uStack_21c;
  uStack_1f8 = uStack_238;
  uStack_1f4 = uStack_234;
  uStack_1f0 = uStack_230;
  uStack_1ec = uStack_22c;
  func_0x048b0bc0(&uStack_3c0);
  func_0x06046000(&plStack_3d8,&uStack_1f8,&UNK_014af27a,0xb,0);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0f0190f0;
  if (uStack_3c0 != (long *)0x0) {
    lVar21 = *uStack_3c0;
    uStack_3c0 = plVar19;
    (**(code **)(lVar21 + 8))();
    plVar19 = uStack_3c0;
  }
  uStack_3c0 = plVar19;
  plStack_498 = (long *)CONCAT44(plStack_498._4_4_,auStack_3c8._0_4_);
  lStack_490 = 0;
  uStack_488 = uStack_488 & 0xffffffff00000000;
  uStack_480 = 1;
  puStack_478 = (undefined8 *)0x0;
  uStack_470 = &UNK_06058bb0;
  puStack_468 = &SUB_048b06d0;
  puStack_460 = &UNK_060587e0;
  puStack_458 = &UNK_06058c70;
  puStack_450 = &UNK_06058f50;
  uStack_448 = uStack_448 & 0xffffffff00000000;
  lStack_440 = 0;
  plStack_438 = (long *)0x0;
  func_0x048b05a0(plStack_3d0,&plStack_498);
  plVar19 = plStack_438;
  if (plStack_438 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_438 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_438 + 0x10))(plStack_438);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x06046210(&plStack_3d8);
  uStack_248 = CONCAT31(uStack_248._1_3_,(undefined1)uStack_1c8);
  iStack_258 = iStack_1d8;
  iStack_254 = iStack_1d4;
  uStack_250 = uStack_1d0;
  uStack_24c = uStack_1cc;
  uStack_268 = uStack_1e8;
  uStack_264 = uStack_1e4;
  uStack_260 = uStack_1e0;
  uStack_25c = uStack_1dc;
  uStack_278 = CONCAT44(uStack_1f4,uStack_1f8);
  uStack_270 = (long *)CONCAT44(uStack_1ec,uStack_1f0);
  func_0x048b0bc0(&uStack_3c0);
  func_0x06046000(&plStack_3d8,&uStack_278,&UNK_011edd94,10,0);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0f0192e8;
  if (uStack_3c0 != (long *)0x0) {
    lVar21 = *uStack_3c0;
    uStack_3c0 = plVar19;
    (**(code **)(lVar21 + 8))();
    plVar19 = uStack_3c0;
  }
  uStack_3c0 = plVar19;
  plStack_498 = (long *)CONCAT44(plStack_498._4_4_,auStack_3c8._0_4_);
  lStack_490 = 0;
  uStack_488 = uStack_488 & 0xffffffff00000000;
  uStack_480 = 1;
  puStack_478 = (undefined8 *)0x0;
  uStack_470 = &UNK_0605a520;
  puStack_468 = &SUB_048b06d0;
  puStack_460 = &UNK_0605a150;
  puStack_458 = &UNK_0605a5e0;
  puStack_450 = &UNK_0605a7f0;
  uStack_448 = uStack_448 & 0xffffffff00000000;
  lStack_440 = 0;
  plStack_438 = (long *)0x0;
  func_0x048b05a0(plStack_3d0,&plStack_498);
  plVar19 = plStack_438;
  if (plStack_438 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_438 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_438 + 0x10))(plStack_438);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x06046210(&plStack_3d8);
  uStack_298 = CONCAT31(uStack_298._1_3_,(undefined1)uStack_248);
  iStack_2a8 = iStack_258;
  iStack_2a4 = iStack_254;
  uStack_2a0 = uStack_250;
  uStack_29c = uStack_24c;
  uStack_2b8 = uStack_268;
  uStack_2b4 = uStack_264;
  iStack_2b0 = uStack_260;
  iStack_2ac = uStack_25c;
  lStack_2c8 = uStack_278;
  uStack_2c0 = (long)uStack_270;
  func_0x048b0bc0(&uStack_3c0);
  func_0x06046000(&plStack_3d8,&lStack_2c8,&UNK_012bcddc,4,0);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0f0193d8;
  if (uStack_3c0 != (long *)0x0) {
    lVar21 = *uStack_3c0;
    uStack_3c0 = plVar19;
    (**(code **)(lVar21 + 8))();
    plVar19 = uStack_3c0;
  }
  uStack_3c0 = plVar19;
  plStack_498 = (long *)CONCAT44(plStack_498._4_4_,auStack_3c8._0_4_);
  lStack_490 = 0;
  uStack_488 = uStack_488 & 0xffffffff00000000;
  uStack_480 = 1;
  puStack_478 = (undefined8 *)0x0;
  uStack_470 = &UNK_0605be00;
  puStack_468 = &SUB_048b06d0;
  puStack_460 = &UNK_0605ba30;
  puStack_458 = &UNK_0605bec0;
  puStack_450 = &UNK_0605c100;
  uStack_448 = uStack_448 & 0xffffffff00000000;
  lStack_440 = 0;
  plStack_438 = (long *)0x0;
  func_0x048b05a0(plStack_3d0,&plStack_498);
  plVar19 = plStack_438;
  if (plStack_438 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_438 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_438 + 0x10))(plStack_438);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x06046210(&plStack_3d8);
  uStack_2d8 = CONCAT31(uStack_2d8._1_3_,(undefined1)uStack_298);
  iStack_2e8 = iStack_2a8;
  iStack_2e4 = iStack_2a4;
  uStack_2e0 = uStack_2a0;
  uStack_2dc = uStack_29c;
  uStack_2f8 = uStack_2b8;
  uStack_2f4 = uStack_2b4;
  iStack_2f0 = iStack_2b0;
  iStack_2ec = iStack_2ac;
  uStack_308 = lStack_2c8;
  uStack_300 = uStack_2c0;
  func_0x048b0bc0(&uStack_3c0);
  func_0x06046000(&plStack_3d8,&uStack_308,&UNK_013c6090,3,0);
  puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar23 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar23 = &UNK_0f0194c8;
  if (uStack_3c0 != (long *)0x0) {
    lVar21 = *uStack_3c0;
    uStack_3c0 = puVar23;
    (**(code **)(lVar21 + 8))();
    puVar23 = uStack_3c0;
  }
  uStack_3c0 = puVar23;
  plStack_498 = (long *)CONCAT44(plStack_498._4_4_,auStack_3c8._0_4_);
  lStack_490 = 0;
  uStack_488 = uStack_488 & 0xffffffff00000000;
  uStack_480 = 1;
  puStack_478 = (undefined8 *)0x0;
  uStack_470 = &UNK_0605d760;
  puStack_468 = &SUB_048b06d0;
  puStack_460 = &UNK_0605d390;
  puStack_458 = &UNK_0605d820;
  puStack_450 = &UNK_0605db10;
  uStack_448 = uStack_448 & 0xffffffff00000000;
  lStack_440 = 0;
  plStack_438 = (long *)0x0;
  func_0x048b05a0(plStack_3d0,&plStack_498);
  plVar19 = plStack_438;
  if (plStack_438 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_438 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_438 + 0x10))(plStack_438);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x06046210(&plStack_3d8);
  func_0x048b0bc0(&uStack_3c0);
  return;
}


