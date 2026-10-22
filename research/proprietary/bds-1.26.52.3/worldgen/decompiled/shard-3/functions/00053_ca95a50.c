/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb95a50 (ELF vaddr 0xca95a50)
 * Label: caller-of-callee
 * Body:  [[0cb95a50, 0cb95fc1] [0cb95fd0, 0cb97fa1] [0cb97fb0, 0cb992b1] [0cb992c0, 0cb9a5de] [0cb9a5e0, 0cb9b6b8]]
 * Ghidra: FUN_0cb95a50
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cb95a50(long param_1)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  undefined8 **ppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  long *plVar19;
  long lVar20;
  int *piVar21;
  undefined *puVar22;
  ulong uVar23;
  long lVar24;
  undefined1 uVar25;
  bool bVar26;
  byte bVar27;
  undefined4 uStack_460;
  undefined2 uStack_45c;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined1 *puStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined4 uStack_410;
  undefined8 uStack_408;
  long *plStack_400;
  undefined *puStack_3f8;
  undefined8 **ppuStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 *puStack_3d8;
  undefined1 *puStack_3d0;
  undefined *puStack_3c8;
  long lStack_3c0;
  undefined4 uStack_3b8;
  undefined1 uStack_3b4;
  undefined2 uStack_3b3;
  undefined1 uStack_3b1;
  undefined1 uStack_3b0;
  undefined6 uStack_3af;
  undefined1 uStack_3a9;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  undefined4 uStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_340;
  undefined2 uStack_338;
  undefined2 uStack_336;
  uint uStack_334;
  uint uStack_330;
  undefined1 uStack_32c;
  undefined *puStack_328;
  long *plStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  uint uStack_308;
  undefined4 uStack_304;
  undefined8 uStack_300;
  ulong uStack_2f8;
  byte bStack_2f0;
  undefined8 *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  uint uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 uStack_2b0;
  char cStack_2a8;
  undefined7 uStack_2a7;
  char cStack_2a0;
  undefined4 uStack_290;
  undefined2 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  int iStack_260;
  undefined4 uStack_25c;
  char cStack_258;
  uint7 uStack_257;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined *puStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  char cStack_148;
  undefined7 uStack_147;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  byte bStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  byte bStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  byte bStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  byte bStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  char cStack_48;
  undefined4 uStack_37;
  undefined3 uStack_33;
  
  func_0x0cb9bc00();
  lVar15 = func_0x0cbb5180(param_1 + 0x18);
  if ((*(int *)(lVar15 + 0x60) == -0x2b3da790) && (lVar15 = *(long *)(lVar15 + 0x68), lVar15 != 0))
  {
    bVar26 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar20 = lVar15 + 9;
    if (bVar26) {
      lVar20 = *(long *)(lVar15 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar26) {
      uVar23 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x0cbb6710(&puStack_2d8,param_1,lVar20,uVar23);
  }
  else {
    func_0x0cbb6710(&puStack_2d8,param_1,&UNK_013377bf,0x18);
  }
  if (cStack_2a8 == '\0') {
    uStack_450._4_4_ = (uint)((ulong)uStack_450 >> 0x20);
    uStack_3e8._4_4_ = (undefined4)((ulong)uStack_3e8 >> 0x20);
    if ((DAT_0f6fdc18 == '\0') && (iVar14 = func_0x04108328(&DAT_0f6fdc18), iVar14 != 0)) {
      func_0x0cbb5370(0xf6fdc00);
      func_0x0410844d(&DAT_0f6fdc18);
    }
    uStack_2b0 = 0x8861280800000001;
    puStack_3f8 = (undefined *)func_0x0cbb5180(puStack_2d8 + 0x18);
    ppuStack_3f0 = (undefined8 **)(puStack_2d8 + 0x18);
    func_0x0ed621a0(&puStack_3f8,uStack_2b0._4_4_);
    ppuStack_3f0 = &puStack_2d0;
    puStack_3f8 = (undefined *)((ulong)puStack_3f8 & 0xffffffffffff0000);
    uStack_3e8 = (long *)CONCAT44(uStack_3e8._4_4_,uStack_2b0._4_4_);
    uStack_3e0 = (long *)0x0;
    puStack_3d8 = (undefined1 *)0x0;
    puStack_3d0 = (undefined1 *)0x0;
    puStack_3c8 = (undefined *)0x0;
    lStack_3c0 = 0;
    uStack_3b8 = 0x6172740c;
    uStack_3b4 = 0x69;
    uStack_3b3 = 0x7374;
    uStack_3b1 = 0;
    lStack_3a0 = 0;
    lStack_398 = 0;
    lStack_390 = 0;
    lStack_388 = 0;
    lStack_380 = 0;
    lStack_378 = 0;
    uStack_370 = 0x3f600000;
    func_0x048afb10(&lStack_3a0,8);
    uStack_348 = 0;
    lStack_340 = 0;
    lStack_358 = 0;
    uStack_350 = 0;
    lStack_368 = 0;
    lStack_360 = 0;
    uStack_338 = 0xff00;
    uStack_334 = uStack_334 & 0xffffff00;
    uStack_330 = uStack_330 & 0xffffff00;
    uStack_32c = 0;
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f3f4658;
    if (uStack_3e0 != (long *)0x0) {
      lVar15 = *uStack_3e0;
      uStack_3e0 = puVar16;
      (**(code **)(lVar15 + 8))();
      puVar16 = uStack_3e0;
    }
    uStack_3e0 = puVar16;
    uStack_460 = (undefined4)uStack_3e8;
    uStack_458 = (long *)0x0;
    uStack_450 = (long *)((ulong)uStack_450._4_4_ << 0x20);
    uStack_448 = 1;
    uStack_440 = 0;
    uStack_438 = &UNK_0cbb7270;
    puStack_430 = &SUB_048b06d0;
    puStack_428 = &UNK_0cba20a0;
    puStack_420 = &UNK_0cbb7330;
    puStack_418 = &UNK_0cbb7610;
    uStack_410 = 0;
    uStack_408 = 0;
    plStack_400 = (long *)0x0;
    FUN_048b05a0(ppuStack_3f0,&uStack_460);
    plVar19 = plStack_400;
    if (plStack_400 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_400 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_400 + 0x10))(plStack_400);
        func_0x0412c2d0(plVar19);
      }
    }
    ppuVar4 = ppuStack_3f0;
    if ((DAT_0f550a20 == '\0') && (iVar14 = func_0x04108328(&DAT_0f550a20), iVar14 != 0)) {
      FUN_048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_460 = _DAT_0f550a0c;
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar19 == (long *)0x0) {
      FUN_0eec74c0(0xd0,0);
    }
    puVar10 = puStack_3d8;
    puVar16 = uStack_3e0;
    plVar19[1] = 0;
    plVar19[2] = 0;
    *plVar19 = (long)&UNK_0ef439d0;
    uStack_458 = plVar19 + 3;
    uStack_3e0 = (long *)0x0;
    puStack_3d8 = (undefined1 *)0x0;
    plVar19[3] = (long)puVar16;
    plVar19[4] = (long)puVar10;
    plVar19[7] = lStack_3c0;
    plVar19[5] = (long)puStack_3d0;
    plVar19[6] = (long)puStack_3c8;
    puStack_3d0 = (undefined1 *)0x0;
    puStack_3c8 = (undefined *)0x0;
    lStack_3c0 = 0;
    plVar19[10] = lStack_3a8;
    plVar19[8] = CONCAT17(uStack_3b1,CONCAT25(uStack_3b3,CONCAT14(uStack_3b4,uStack_3b8)));
    plVar19[9] = CONCAT17(uStack_3a9,CONCAT61(uStack_3af,uStack_3b0));
    uStack_3b8 = 0;
    uStack_3b4 = 0;
    uStack_3b3 = 0;
    uStack_3b1 = 0;
    uStack_3b0 = 0;
    uStack_3af = 0;
    uStack_3a9 = 0;
    lStack_3a8 = 0;
    plVar19[0xb] = lStack_3a0;
    plVar19[0xc] = lStack_398;
    plVar19[0xd] = lStack_390;
    lStack_3a0 = 0;
    lStack_398 = 0;
    lStack_390 = 0;
    plVar19[0xe] = lStack_388;
    plVar19[0xf] = lStack_380;
    plVar19[0x10] = lStack_378;
    lStack_388 = 0;
    lStack_380 = 0;
    lStack_378 = 0;
    *(undefined4 *)(plVar19 + 0x11) = uStack_370;
    plVar19[0x12] = lStack_368;
    plVar19[0x13] = lStack_360;
    plVar19[0x14] = lStack_358;
    lStack_368 = 0;
    lStack_360 = 0;
    lStack_358 = 0;
    plVar19[0x17] = lStack_340;
    *(undefined4 *)(plVar19 + 0x15) = (undefined4)uStack_350;
    *(undefined4 *)((long)plVar19 + 0xac) = uStack_350._4_4_;
    *(undefined4 *)(plVar19 + 0x16) = (undefined4)uStack_348;
    *(undefined4 *)((long)plVar19 + 0xb4) = uStack_348._4_4_;
    uStack_350 = 0;
    uStack_348 = 0;
    lStack_340 = 0;
    *(ulong *)((long)plVar19 + 0xc5) = CONCAT17(uStack_32c,CONCAT43(uStack_330,uStack_334._1_3_));
    plVar19[0x18] = CONCAT44(uStack_334,CONCAT22(uStack_336,uStack_338));
    puStack_328 = (undefined *)0x0;
    plStack_320 = (long *)0x0;
    uStack_450 = plVar19;
    func_0x048afd20(ppuVar4,&uStack_460);
    plVar19 = uStack_450;
    if (uStack_450 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_450 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_450 + 0x10))(uStack_450);
        func_0x0412c2d0(plVar19);
      }
    }
    plVar19 = plStack_320;
    if (plStack_320 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_320 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_320 + 0x10))(plStack_320);
        func_0x0412c2d0(plVar19);
      }
    }
    puVar16 = ppuVar4[2];
    iVar14 = *(int *)((long)ppuVar4 + 0x1c);
    if (iVar14 == 2) {
      piVar21 = *(int **)(puVar16[0xf] + 0x60);
      iVar14 = *piVar21;
      while (iVar14 != *(int *)(ppuVar4 + 3)) {
        piVar21 = piVar21 + 0x16;
        iVar14 = *piVar21;
      }
      for (; *(undefined8 **)(piVar21 + 0xc) != ppuVar4[1]; piVar21 = *(int **)(piVar21 + 0xe)) {
      }
LAB_0cb95fda:
      piVar21[4] = piVar21[4] | (int)puStack_3f8 << 0x10;
    }
    else {
      if (iVar14 == 1) {
        piVar21 = *(int **)(puVar16[0xf] + 0x48);
        iVar14 = *piVar21;
        while (iVar14 != *(int *)(ppuVar4 + 3)) {
          piVar21 = piVar21 + 0x1a;
          iVar14 = *piVar21;
        }
        goto LAB_0cb95fda;
      }
      if (iVar14 == 0) {
        *(uint *)(puVar16 + 3) = *(uint *)(puVar16 + 3) | (int)puStack_3f8 << 0x10;
      }
    }
    func_0x048b0bc0(&uStack_3e0);
  }
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar16 = 5;
  puStack_2e0 = puVar16;
  lStack_200 = func_0x0cb9bc00(param_1);
  uStack_90 = 0x1001400140001;
  uStack_180 = 0;
  uStack_188 = 0;
  uStack_b0 = 0x1001400140001;
  puStack_a8 = &UNK_01254d89;
  uStack_88 = 0;
  uStack_80 = 0;
  puStack_1b8 = &UNK_01254d89;
  puStack_a0 = &UNK_01254d89;
  bStack_98 = 1;
  cStack_2a0 = '\0';
  puStack_2d0 = (undefined8 *)0x0;
  uStack_2c8._0_4_ = 0;
  uStack_2c8._4_4_ = 0;
  uStack_2c0._0_4_ = 0;
  uStack_2c0._4_4_ = 0;
  uStack_2b8 = uStack_2b8 & 0xffffff00;
  puStack_2d8 = &UNK_0cba2040;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar17 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  uStack_2c0 = puVar17 + 1;
  *puVar17 = *puVar16;
  puStack_2d0 = puVar17;
  uStack_2c8 = uStack_2c0;
  func_0x0c24ba30(&uStack_2b8,&uStack_b0);
  if (DAT_0f6fbe80 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f6fbe80);
    if (iVar14 != 0) {
      func_0x0cbc3c40();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fbe00,0xf53dab8);
      func_0x0410844d(&DAT_0f6fbe80);
    }
  }
  lStack_200 = lStack_200 + 0x28;
  plVar19 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6fbe00 + 4)) * 8);
  do {
    lVar15 = *plVar19;
    if (lVar15 == -1) goto LAB_0cb96190;
    plVar19 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f6fbe00 + 4))
  ;
  if (plVar19 == *(long **)(param_1 + 0x38)) {
LAB_0cb96190:
    puVar18 = &DAT_0f6fbe00;
    if (iRam000000000f6fbe60 != -0x2b3da790) goto LAB_0cb961f8;
LAB_0cb961bb:
    lVar15 = *(long *)(puVar18 + 0x68);
    if (lVar15 == 0) goto LAB_0cb961f8;
    bVar26 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar20 = lVar15 + 9;
    if (bVar26) {
      lVar20 = *(long *)(lVar15 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar26) {
      uVar23 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x0cbc4060(&uStack_460,param_1,lVar20,uVar23);
  }
  else {
    puVar18 = (undefined *)plVar19[2];
    if (*(int *)(puVar18 + 0x60) == -0x2b3da790) goto LAB_0cb961bb;
LAB_0cb961f8:
    func_0x0cbc4060(&uStack_460,param_1,&UNK_012e8a76,0x1a);
  }
  if ((char)puStack_430 == '\0') {
    uStack_438 = (undefined *)0x1e1bc4d500000004;
    if (DAT_0f6fbea0 == '\0') {
      iVar14 = func_0x04108328(&DAT_0f6fbea0);
      if (iVar14 != 0) {
        func_0x0cbc3d50();
        func_0x0410844d(&DAT_0f6fbea0);
      }
    }
    puStack_3f8 = (undefined *)CONCAT44(puStack_3f8._4_4_,uStack_438._4_4_);
    ppuStack_3f0 = (undefined8 **)0x0;
    uStack_3e8 = (long *)((ulong)uStack_3e8 & 0xffffffff00000000);
    uStack_3e0 = (long *)0x1;
    puStack_3d8 = &SUB_048aead0;
    puStack_3d0 = &UNK_06063e30;
    puStack_3c8 = &UNK_0cbc4b70;
    lStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3af = 0;
    uStack_3a9 = 0;
    lStack_3a8 = 0;
    func_0x049057f0(&uStack_458,&puStack_3f8);
    func_0x048aea50(&puStack_3f8);
    uStack_278 = (undefined4)uStack_448;
    uStack_274 = uStack_448._4_4_;
    uStack_270 = (int)uStack_440;
    uStack_26c = uStack_440._4_4_;
    uStack_288 = (undefined4)uStack_458;
    uStack_284 = uStack_458._4_4_;
    uStack_280 = (undefined4)uStack_450;
    uStack_27c = uStack_450._4_4_;
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar16 = &UNK_0ef474e0;
    if (DAT_0f551bc8 == '\0') {
      iVar14 = func_0x04108328(&DAT_0f551bc8);
      if (iVar14 != 0) {
        FUN_04905be0(0xf551bb0);
        func_0x0410844d(&DAT_0f551bc8);
      }
    }
    puStack_3f8 = (undefined *)CONCAT44(puStack_3f8._4_4_,_DAT_0f551bb4);
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar19 == (long *)0x0) {
      FUN_0eec74c0(0x30,0);
    }
    plVar19[1] = 0;
    plVar19[2] = 0;
    *plVar19 = (long)&UNK_0ef46c48;
    ppuStack_3f0 = (undefined8 **)(plVar19 + 3);
    plVar19[3] = (long)puVar16;
    plVar19[4] = 0;
    *(undefined1 *)(plVar19 + 5) = 0xff;
    uStack_248 = 0;
    uStack_240 = (long *)0x0;
    uStack_3e8 = plVar19;
    func_0x048afd20(&uStack_288,&puStack_3f8);
    plVar19 = uStack_3e8;
    if (uStack_3e8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_3e8 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_3e8 + 0x10))(uStack_3e8);
        func_0x0412c2d0(plVar19);
      }
    }
    plVar19 = uStack_240;
    if (uStack_240 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_240 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_240 + 0x10))(uStack_240);
        func_0x0412c2d0(plVar19);
      }
    }
  }
  if (DAT_0f6fb6c8 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f6fb6c8);
    if (iVar14 != 0) {
      func_0x0cba6930();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fb648,0xf53dab8);
      func_0x0410844d(&DAT_0f6fb6c8);
    }
  }
  plVar19 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6fb648 + 4)) * 8);
  do {
    lVar15 = *plVar19;
    if (lVar15 == -1) goto LAB_0cb96460;
    plVar19 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f6fb648 + 4))
  ;
  if (plVar19 == *(long **)(param_1 + 0x38)) {
LAB_0cb96460:
    puVar18 = &DAT_0f6fb648;
    if (iRam000000000f6fb6a8 != -0x2b3da790) goto LAB_0cb964ce;
LAB_0cb9648b:
    lVar15 = *(long *)(puVar18 + 0x68);
    if (lVar15 == 0) goto LAB_0cb964ce;
    bVar26 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar20 = lVar15 + 9;
    if (bVar26) {
      lVar20 = *(long *)(lVar15 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar26) {
      uVar23 = *(ulong *)(lVar15 + 0x10);
    }
    FUN_0cbc4f00(&uStack_288,param_1,lVar20,uVar23);
  }
  else {
    puVar18 = (undefined *)plVar19[2];
    if (*(int *)(puVar18 + 0x60) == -0x2b3da790) goto LAB_0cb9648b;
LAB_0cb964ce:
    FUN_0cbc4f00(&uStack_288,param_1,&UNK_014dae37,0x19);
  }
  if (cStack_258 == '\0') {
    uStack_78 = uStack_288;
    uStack_74 = uStack_284;
    uStack_70 = uStack_280;
    uStack_6c = uStack_27c;
    uStack_68 = uStack_278;
    uStack_64 = uStack_274;
    uStack_60 = uStack_270;
    uStack_5c = uStack_26c;
    uStack_58 = uStack_268;
    uStack_54 = uStack_264;
    iStack_50 = iStack_260;
    uStack_4c = uStack_25c;
    cStack_48 = cStack_258;
    func_0x0cbc5ab0(&puStack_3f8,&uStack_78,&UNK_0129beb0,0xe,1);
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar19 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar19 = (long)&UNK_0f3f4db8;
    if (uStack_3e0 != (long *)0x0) {
      lVar15 = *uStack_3e0;
      uStack_3e0 = plVar19;
      (**(code **)(lVar15 + 8))();
      plVar19 = uStack_3e0;
    }
    uStack_3e0 = plVar19;
    uStack_460 = (undefined4)uStack_3e8;
    uStack_458 = (long *)0x0;
    uStack_450 = (long *)((ulong)uStack_450 & 0xffffffff00000000);
    uStack_448 = 1;
    uStack_440 = 0;
    uStack_438 = &UNK_0cbc6260;
    puStack_430 = &SUB_048b06d0;
    puStack_428 = &UNK_0cbc3b80;
    puStack_420 = &UNK_0cbc6320;
    puStack_418 = &UNK_0cbc6480;
    uStack_410 = 0;
    uStack_408 = 0;
    plStack_400 = (long *)0x0;
    FUN_048b05a0(ppuStack_3f0,&uStack_460);
    plVar19 = plStack_400;
    if (plStack_400 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_400 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_400 + 0x10))(plStack_400);
        func_0x0412c2d0(plVar19);
      }
    }
    func_0x0cbc5d70(&puStack_3f8);
    cStack_148 = cStack_48;
    uStack_158 = uStack_58;
    uStack_154 = uStack_54;
    iStack_150 = iStack_50;
    uStack_14c = uStack_4c;
    uStack_168 = uStack_68;
    uStack_164 = uStack_64;
    uStack_160 = uStack_60;
    uStack_15c = uStack_5c;
    uStack_178 = CONCAT44(uStack_74,uStack_78);
    uStack_170 = (long *)CONCAT44(uStack_6c,uStack_70);
    func_0x048b0bc0(&uStack_3e0);
    lStack_1f8 = uStack_178;
    plStack_1f0 = uStack_170;
    uStack_1e8 = CONCAT44(uStack_164,uStack_168);
    uStack_1e0 = uStack_160;
    uStack_1dc = uStack_15c;
    uStack_1d8 = uStack_158;
    uStack_1d4 = uStack_154;
    iStack_1d0 = iStack_150;
    uStack_1cc = uStack_14c;
    uStack_1c8 = CONCAT71(uStack_147,cStack_148);
    func_0x0cbc54f0(&puStack_3f8,uStack_178 + 0x18);
    if (uStack_3e0._4_4_ == 2) {
      piVar21 = *(int **)(uStack_3e8[0xf] + 0x60);
      iVar14 = *piVar21;
      while (iVar14 != (int)uStack_3e0) {
        piVar21 = piVar21 + 0x16;
        iVar14 = *piVar21;
      }
      ppuVar4 = *(undefined8 ***)(piVar21 + 0xc);
      while (ppuVar4 != ppuStack_3f0) {
        piVar21 = *(int **)(piVar21 + 0xe);
        ppuVar4 = *(undefined8 ***)(piVar21 + 0xc);
      }
LAB_0cb967aa:
      *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 4;
    }
    else {
      if (uStack_3e0._4_4_ == 1) {
        piVar21 = *(int **)(uStack_3e8[0xf] + 0x48);
        iVar14 = *piVar21;
        while (iVar14 != (int)uStack_3e0) {
          piVar21 = piVar21 + 0x1a;
          iVar14 = *piVar21;
        }
        goto LAB_0cb967aa;
      }
      if (uStack_3e0._4_4_ == 0) {
        *(uint *)(uStack_3e8 + 3) = *(uint *)(uStack_3e8 + 3) | 0x40000;
      }
    }
    func_0x0cbc5ab0(&puStack_3f8,&lStack_1f8,&UNK_0124f708,0x11,0x10);
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar19 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar19 = (long)&UNK_0f0126a0;
    if (uStack_3e0 != (long *)0x0) {
      lVar15 = *uStack_3e0;
      uStack_3e0 = plVar19;
      (**(code **)(lVar15 + 8))();
      plVar19 = uStack_3e0;
    }
    uStack_3e0 = plVar19;
    uStack_460 = (undefined4)uStack_3e8;
    uStack_458 = (long *)0x0;
    uStack_450 = (long *)((ulong)uStack_450 & 0xffffffff00000000);
    uStack_448 = 1;
    uStack_440 = 0;
    uStack_438 = &UNK_0cbc6900;
    puStack_430 = &SUB_048b06d0;
    puStack_428 = &UNK_05daea90;
    puStack_420 = &UNK_0cbc6910;
    puStack_418 = &UNK_0cbc6b00;
    uStack_410 = 0;
    uStack_408 = 0;
    plStack_400 = (long *)0x0;
    FUN_048b05a0(ppuStack_3f0,&uStack_460);
    plVar19 = plStack_400;
    if (plStack_400 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_400 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_400 + 0x10))(plStack_400);
        func_0x0412c2d0(plVar19);
      }
    }
    iVar14 = *(int *)((long)ppuStack_3f0 + 0x1c);
    if (iVar14 == 2) {
      piVar21 = *(int **)(ppuStack_3f0[2][0xf] + 0x60);
      iVar14 = *piVar21;
      while (iVar14 != *(int *)(ppuStack_3f0 + 3)) {
        piVar21 = piVar21 + 0x16;
        iVar14 = *piVar21;
      }
      puVar16 = *(undefined8 **)(piVar21 + 0xc);
      while (puVar16 != ppuStack_3f0[1]) {
        piVar21 = *(int **)(piVar21 + 0xe);
        puVar16 = *(undefined8 **)(piVar21 + 0xc);
      }
      *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 4;
    }
    else if (iVar14 == 1) {
      piVar21 = *(int **)(ppuStack_3f0[2][0xf] + 0x48);
      iVar14 = *piVar21;
      while (iVar14 != *(int *)(ppuStack_3f0 + 3)) {
        piVar21 = piVar21 + 0x1a;
        iVar14 = *piVar21;
      }
      *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 4;
    }
    else if (iVar14 == 0) {
      *(uint *)(ppuStack_3f0[2] + 3) = *(uint *)(ppuStack_3f0[2] + 3) | 0x40000;
    }
    func_0x0cbc5d70(&puStack_3f8);
    uVar7 = uStack_1cc;
    iVar14 = iStack_1d0;
    lVar15 = lStack_1f8;
    plStack_138 = plStack_1f0;
    uStack_130 = uStack_1e8;
    uStack_128 = CONCAT44(uStack_1dc,uStack_1e0);
    uStack_120 = uStack_1d8;
    uStack_11c = uStack_1d4;
    uVar25 = (undefined1)uStack_1c8;
    func_0x048b0bc0(&uStack_3e0);
    uStack_290 = 0;
    uStack_28c = 0;
    if (iVar14 == 4) {
      if (DAT_0f6fb6c8 == '\0') {
        iVar13 = func_0x04108328(&DAT_0f6fb6c8);
        if (iVar13 != 0) {
          func_0x0cba6930();
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fb648,0xf53dab8);
          func_0x0410844d(&DAT_0f6fb6c8);
        }
      }
      plVar19 = (long *)(*(long *)(lVar15 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f6fb648 + 4)) * 8);
      do {
        lVar20 = *plVar19;
        if (lVar20 == -1) goto LAB_0cb96ae1;
        plVar19 = (long *)(*(long *)(lVar15 + 0x30) + lVar20 * 0x18);
      } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar20 * 0x18) !=
               *(uint *)(_DAT_0f6fb648 + 4));
      if (plVar19 == *(long **)(lVar15 + 0x38)) {
LAB_0cb96ae1:
        puVar18 = &DAT_0f6fb648;
      }
      else {
        puVar18 = (undefined *)plVar19[2];
      }
      lStack_208 = CONCAT71(lStack_208._1_7_,uVar25);
      puVar18 = (undefined *)func_0x048b1040(lVar15 + 0x18,puVar18,uVar7,1);
      if (puVar18 == (undefined *)0x0) {
        puStack_3f8 = (undefined *)0x0;
        ppuStack_3f0 = (undefined8 **)0x0;
        func_0x048b10d0(&puStack_3f8);
        puVar22 = *(undefined **)(puStack_3f8 + 0x38);
        puVar18 = puStack_3f8;
        if (puVar22 == (undefined *)0x0) goto LAB_0cb96bcd;
LAB_0cb96be9:
        do {
          puVar18 = puVar22;
          puVar22 = *(undefined **)(puVar18 + 0x38);
          if (*(undefined **)(puVar18 + 0x38) == (undefined *)0x0) {
            puStack_3f8 = (undefined *)0x0;
            ppuStack_3f0 = (undefined8 **)0x0;
            func_0x048b10d0(&puStack_3f8);
            puVar22 = puStack_3f8;
          }
        } while (puVar22 != (undefined *)0x0);
      }
      else {
        puVar22 = *(undefined **)(puVar18 + 0x38);
        if (*(undefined **)(puVar18 + 0x38) != (undefined *)0x0) goto LAB_0cb96be9;
LAB_0cb96bcd:
        puStack_3f8 = (undefined *)0x0;
        ppuStack_3f0 = (undefined8 **)0x0;
        func_0x048b10d0(&puStack_3f8);
        puVar22 = puStack_3f8;
        if (puStack_3f8 != (undefined *)0x0) goto LAB_0cb96be9;
      }
      lVar20 = *(long *)(puVar18 + 0x48);
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar16 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x40,0);
      }
LAB_0cb96c3e:
      puVar16[1] = 0xffffffffffffffff;
      puVar16[2] = 0;
      *(undefined1 *)(puVar16 + 3) = 0xff;
      *puVar16 = &UNK_0f0edc68;
      uVar6 = _DAT_014f09b8;
      puVar16[4] = 0;
      puVar16[5] = uVar6;
      puVar16[6] = 0;
      *(undefined2 *)(puVar16 + 7) = 0;
      *(undefined4 *)((long)puVar16 + 0x3a) = uStack_290;
      *(undefined2 *)((long)puVar16 + 0x3e) = uStack_28c;
      plVar19 = *(long **)(lVar20 + 8);
      *(undefined8 **)(lVar20 + 8) = puVar16;
      uVar25 = (undefined1)lStack_208;
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x28))();
      }
    }
    else if (iVar14 == 1) {
      if (DAT_0f6fb6c8 == '\0') {
        iVar13 = func_0x04108328(&DAT_0f6fb6c8);
        if (iVar13 != 0) {
          func_0x0cba6930();
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fb648,0xf53dab8);
          func_0x0410844d(&DAT_0f6fb6c8);
        }
      }
      plVar19 = (long *)(*(long *)(lVar15 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f6fb648 + 4)) * 8);
      do {
        lVar20 = *plVar19;
        if (lVar20 == -1) goto LAB_0cb96a61;
        plVar19 = (long *)(*(long *)(lVar15 + 0x30) + lVar20 * 0x18);
      } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar20 * 0x18) !=
               *(uint *)(_DAT_0f6fb648 + 4));
      if (plVar19 == *(long **)(lVar15 + 0x38)) {
LAB_0cb96a61:
        puVar18 = &DAT_0f6fb648;
      }
      else {
        puVar18 = (undefined *)plVar19[2];
      }
      lStack_208 = CONCAT71(lStack_208._1_7_,uVar25);
      puVar18 = (undefined *)func_0x048b0c90(lVar15 + 0x18,puVar18,uVar7,1);
      if (puVar18 == (undefined *)0x0) {
        puStack_3f8 = (undefined *)0x0;
        ppuStack_3f0 = (undefined8 **)0x0;
        FUN_048b0d20(&puStack_3f8);
        puVar18 = puStack_3f8;
      }
      lVar20 = *(long *)(puVar18 + 0x58);
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar16 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x40,0);
      }
      goto LAB_0cb96c3e;
    }
    uStack_230 = (undefined4)uStack_128;
    uStack_22c = uStack_128._4_4_;
    uStack_228 = uStack_120;
    uStack_224 = uStack_11c;
    uStack_240 = plStack_138;
    uStack_238 = (undefined4)uStack_130;
    uStack_234 = uStack_130._4_4_;
    uStack_248 = lVar15;
    uStack_220 = CONCAT44(uVar7,iVar14);
    uStack_218._0_5_ = CONCAT41(uStack_37,uVar25);
    uStack_218 = CONCAT44(CONCAT31(uStack_33,uStack_37._3_1_),(undefined4)uStack_218);
    func_0x0cbc54f0(&puStack_3f8,lVar15 + 0x18);
    if (uStack_3e0._4_4_ == 2) {
      piVar21 = *(int **)(uStack_3e8[0xf] + 0x60);
      iVar14 = *piVar21;
      while (iVar14 != (int)uStack_3e0) {
        piVar21 = piVar21 + 0x16;
        iVar14 = *piVar21;
      }
      ppuVar4 = *(undefined8 ***)(piVar21 + 0xc);
      while (ppuVar4 != ppuStack_3f0) {
        piVar21 = *(int **)(piVar21 + 0xe);
        ppuVar4 = *(undefined8 ***)(piVar21 + 0xc);
      }
LAB_0cb96dea:
      *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 4;
    }
    else {
      if (uStack_3e0._4_4_ == 1) {
        piVar21 = *(int **)(uStack_3e8[0xf] + 0x48);
        iVar14 = *piVar21;
        while (iVar14 != (int)uStack_3e0) {
          piVar21 = piVar21 + 0x1a;
          iVar14 = *piVar21;
        }
        goto LAB_0cb96dea;
      }
      if (uStack_3e0._4_4_ == 0) {
        *(uint *)(uStack_3e8 + 3) = *(uint *)(uStack_3e8 + 3) | 0x40000;
      }
    }
    func_0x0cbc5ab0(&puStack_3f8,&uStack_248,&UNK_0136e59c,0x15,0x10);
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar19 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar19 = (long)&UNK_0f3f5028;
    if (uStack_3e0 != (long *)0x0) {
      lVar15 = *uStack_3e0;
      uStack_3e0 = plVar19;
      (**(code **)(lVar15 + 8))();
      plVar19 = uStack_3e0;
    }
    uStack_3e0 = plVar19;
    uStack_460 = (undefined4)uStack_3e8;
    uStack_458 = (long *)0x0;
    uStack_450 = (long *)((ulong)uStack_450 & 0xffffffff00000000);
    uStack_448 = 1;
    uStack_440 = 0;
    uStack_438 = &UNK_0cbc9cc0;
    puStack_430 = &SUB_048b06d0;
    puStack_428 = &UNK_0cbc85f0;
    puStack_420 = &UNK_0cbc9cd0;
    puStack_418 = &UNK_0cbc9eb0;
    uStack_410 = 0;
    uStack_408 = 0;
    plStack_400 = (long *)0x0;
    FUN_048b05a0(ppuStack_3f0,&uStack_460);
    plVar19 = plStack_400;
    if (plStack_400 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_400 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_400 + 0x10))(plStack_400);
        func_0x0412c2d0(plVar19);
      }
    }
    func_0x0cbc5d70(&puStack_3f8);
    func_0x048b0bc0(&uStack_3e0);
  }
  func_0x0cba1f10(&uStack_288,param_1);
  puStack_310 = uStack_2c0;
  puStack_318 = uStack_2c8;
  if (cStack_258 == '\0') {
    if (DAT_0f6fdbd8 == '\0') {
      iVar14 = func_0x04108328(&DAT_0f6fdbd8);
      if (iVar14 != 0) {
        func_0x04160690(&DAT_0f6fdbc0,&UNK_0148ae9b);
        func_0x0eee2f40(&SUB_0412ed50,&DAT_0f6fdbc0,0xf53dab8);
        func_0x0410844d(&DAT_0f6fdbd8);
      }
    }
    uVar23 = (ulong)(DAT_0f6fdbc0 >> 1);
    uVar6 = 0xf6fdbc1;
    if ((DAT_0f6fdbc0 & 1) != 0) {
      uVar23 = _DAT_0f6fdbc8;
      uVar6 = _DAT_0f6fdbd0;
    }
    func_0x0cba4ba0(&puStack_3f8,&uStack_288,uVar6,uVar23);
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar19 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar19 = (long)&UNK_0f3f2d08;
    if (uStack_3e0 != (long *)0x0) {
      lVar15 = *uStack_3e0;
      uStack_3e0 = plVar19;
      (**(code **)(lVar15 + 8))();
      plVar19 = uStack_3e0;
    }
    uStack_3e0 = plVar19;
    uStack_460 = (undefined4)uStack_3e8;
    uStack_458 = (long *)0x0;
    uStack_450 = (long *)((ulong)uStack_450 & 0xffffffff00000000);
    uStack_448 = 1;
    uStack_440 = 0;
    uStack_438 = &UNK_0cba7350;
    puStack_430 = &SUB_048b06d0;
    puStack_428 = &UNK_0cba6fc0;
    puStack_420 = &UNK_0cba7410;
    puStack_418 = &UNK_0cba7690;
    uStack_410 = 0;
    uStack_408 = 0;
    plStack_400 = (long *)0x0;
    FUN_048b05a0(ppuStack_3f0,&uStack_460);
    plVar19 = plStack_400;
    if (plStack_400 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_400 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_400 + 0x10))(plStack_400);
        func_0x0412c2d0(plVar19);
      }
    }
    iVar14 = *(int *)((long)ppuStack_3f0 + 0x1c);
    if (iVar14 == 2) {
      piVar21 = *(int **)(ppuStack_3f0[2][0xf] + 0x60);
      iVar14 = *piVar21;
      while (iVar14 != *(int *)(ppuStack_3f0 + 3)) {
        piVar21 = piVar21 + 0x16;
        iVar14 = *piVar21;
      }
      puVar16 = *(undefined8 **)(piVar21 + 0xc);
      while (puVar16 != ppuStack_3f0[1]) {
        piVar21 = *(int **)(piVar21 + 0xe);
        puVar16 = *(undefined8 **)(piVar21 + 0xc);
      }
      *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 4;
    }
    else if (iVar14 == 1) {
      piVar21 = *(int **)(ppuStack_3f0[2][0xf] + 0x48);
      iVar14 = *piVar21;
      while (iVar14 != *(int *)(ppuStack_3f0 + 3)) {
        piVar21 = piVar21 + 0x1a;
        iVar14 = *piVar21;
      }
      *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 4;
    }
    else if (iVar14 == 0) {
      *(uint *)(ppuStack_3f0[2] + 3) = *(uint *)(ppuStack_3f0[2] + 3) | 0x40000;
    }
    func_0x0cba4ee0(&puStack_3f8);
    func_0x048b0bc0(&uStack_3e0);
    puStack_310 = uStack_2c0;
    puStack_318 = uStack_2c8;
  }
  puStack_328 = puStack_2d8;
  plStack_320 = puStack_2d0;
  uStack_308 = uStack_308 & 0xffffff00;
  bStack_2f0 = cStack_2a0 == '\x01';
  if ((bool)bStack_2f0) {
    uStack_308 = uStack_2b8;
    uStack_304 = uStack_2b4;
    uStack_300 = uStack_2b0;
    uStack_2b0 = 0;
    uStack_2f8 = CONCAT71(uStack_2a7,cStack_2a8);
  }
  uStack_2c0 = puStack_310;
  uStack_2c8 = puStack_318;
  if (DAT_0f6fdbd8 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f6fdbd8);
    if (iVar14 != 0) {
      func_0x04160690(&DAT_0f6fdbc0,&UNK_0148ae9b);
      func_0x0eee2f40(&SUB_0412ed50,&DAT_0f6fdbc0,0xf53dab8);
      func_0x0410844d(&DAT_0f6fdbd8);
    }
  }
  lVar20 = func_0x0cbb7a90(lStack_200,&DAT_0f6fdbc0);
  *(undefined **)(lVar20 + 0x28) = puStack_328;
  lVar15 = *(long *)(lVar20 + 0x30);
  if (lVar15 != 0) {
    *(long *)(lVar20 + 0x38) = lVar15;
    func_0x0412a280(lVar15,*(long *)(lVar20 + 0x40) - lVar15);
    *(undefined8 *)(lVar20 + 0x30) = 0;
    *(undefined8 *)(lVar20 + 0x38) = 0;
    *(undefined8 *)(lVar20 + 0x40) = 0;
  }
  puVar16 = puStack_2e0;
  bVar27 = bStack_2f0;
  *(long **)(lVar20 + 0x30) = plStack_320;
  *(undefined8 **)(lVar20 + 0x38) = puStack_318;
  *(undefined8 **)(lVar20 + 0x40) = puStack_310;
  plStack_320 = (long *)0x0;
  puStack_318 = (undefined8 *)0x0;
  puStack_310 = (undefined8 *)0x0;
  cVar2 = *(char *)(lVar20 + 0x60);
  if (cVar2 == bStack_2f0) {
    if (cVar2 != '\0') {
      uVar23 = *(ulong *)(lVar20 + 0x50);
      uVar5 = *(ulong *)(lVar20 + 0x58);
      *(uint *)(lVar20 + 0x48) = uStack_308;
      *(undefined4 *)(lVar20 + 0x4c) = uStack_304;
      *(undefined4 *)(lVar20 + 0x50) = (undefined4)uStack_300;
      *(undefined4 *)(lVar20 + 0x54) = uStack_300._4_4_;
      *(ulong *)(lVar20 + 0x58) = uStack_2f8;
      uStack_300 = uVar23;
      uStack_2f8 = uVar5;
    }
  }
  else if (cVar2 == '\0') {
    *(uint *)(lVar20 + 0x48) = uStack_308;
    *(undefined4 *)(lVar20 + 0x4c) = uStack_304;
    *(undefined4 *)(lVar20 + 0x50) = (undefined4)uStack_300;
    *(undefined4 *)(lVar20 + 0x54) = uStack_300._4_4_;
    uStack_300 = 0;
    *(ulong *)(lVar20 + 0x58) = uStack_2f8;
    uStack_2f8 = 0;
    *(undefined1 *)(lVar20 + 0x60) = 1;
  }
  else {
    if ((*(ulong *)(lVar20 + 0x58) & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(*(ulong *)(lVar20 + 0x58) & 0xff00ffffffffffff) - 8);
    }
    *(undefined8 *)(lVar20 + 0x58) = 0;
    if ((*(ulong *)(lVar20 + 0x50) & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(*(ulong *)(lVar20 + 0x50) & 0xff00ffffffffffff) - 8);
    }
    *(undefined8 *)(lVar20 + 0x50) = 0;
    *(undefined1 *)(lVar20 + 0x60) = 0;
  }
  if (bVar27 != '\0') {
    if ((uStack_2f8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2f8 & 0xff00ffffffffffff) - 8);
    }
    uStack_2f8 = 0;
    if ((uStack_300 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_300 & 0xff00ffffffffffff) - 8);
    }
    uStack_300 = 0;
  }
  if ((bStack_98 & 1) != 0) {
    if (((ulong)puStack_a0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_a0 & 0xff00ffffffffffff) - 8);
    }
    puStack_a0 = (undefined *)0x0;
    if (((ulong)puStack_a8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_a8 & 0xff00ffffffffffff) - 8);
    }
    puStack_a8 = (undefined *)0x0;
  }
  if ((uStack_80 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_80 & 0xff00ffffffffffff) - 8);
  }
  uStack_80 = 0;
  if ((uStack_88 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_88 & 0xff00ffffffffffff) - 8);
  }
  uStack_88 = 0;
  if ((uStack_188 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_188 & 0xff00ffffffffffff) - 8);
  }
  uStack_188 = 0;
  if ((uStack_180 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_180 & 0xff00ffffffffffff) - 8);
  }
  uStack_180 = 0;
  lStack_1f8 = 0x1001400140001;
  uStack_190 = 0;
  uStack_198 = 0;
  uStack_d0 = 0x1001400140001;
  puStack_c8 = puStack_1b8;
  plStack_1f0 = (long *)0x0;
  uStack_1e8 = 0;
  puStack_c0 = puStack_1b8;
  bStack_b8 = 1;
  cStack_2a0 = '\0';
  puStack_2d0 = (undefined8 *)0x0;
  uStack_2c8._0_4_ = 0;
  uStack_2c8._4_4_ = 0;
  uStack_2c0._0_4_ = 0;
  uStack_2c0._4_4_ = 0;
  uStack_2b8 = uStack_2b8 & 0xffffff00;
  puStack_2d8 = &UNK_0cba7ae0;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar17 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  uStack_2c0 = puVar17 + 1;
  *puVar17 = *puVar16;
  puStack_2d0 = puVar17;
  uStack_2c8 = uStack_2c0;
  func_0x0c24ba30(&uStack_2b8,&uStack_d0);
  if (DAT_0f6fbff0 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f6fbff0);
    if (iVar14 != 0) {
      func_0x0cbcaa90();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fbf70,0xf53dab8);
      func_0x0410844d(&DAT_0f6fbff0);
    }
  }
  plVar19 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6fbf70 + 4)) * 8);
  do {
    lVar15 = *plVar19;
    if (lVar15 == -1) goto LAB_0cb976b0;
    plVar19 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f6fbf70 + 4))
  ;
  if (plVar19 == *(long **)(param_1 + 0x38)) {
LAB_0cb976b0:
    puVar18 = &DAT_0f6fbf70;
    if (iRam000000000f6fbfd0 != -0x2b3da790) goto LAB_0cb97718;
LAB_0cb976db:
    lVar15 = *(long *)(puVar18 + 0x68);
    if (lVar15 == 0) goto LAB_0cb97718;
    bVar26 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar20 = lVar15 + 9;
    if (bVar26) {
      lVar20 = *(long *)(lVar15 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar26) {
      uVar23 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x0cbcaeb0(&uStack_460,param_1,lVar20,uVar23);
  }
  else {
    puVar18 = (undefined *)plVar19[2];
    if (*(int *)(puVar18 + 0x60) == -0x2b3da790) goto LAB_0cb976db;
LAB_0cb97718:
    func_0x0cbcaeb0(&uStack_460,param_1,&UNK_012823fc,0x19);
  }
  if ((char)puStack_430 == '\0') {
    uStack_438 = (undefined *)0x1e1bc4d500000004;
    if (DAT_0f6fc010 == '\0') {
      iVar14 = func_0x04108328(&DAT_0f6fc010);
      if (iVar14 != 0) {
        func_0x0cbcaba0();
        func_0x0410844d(&DAT_0f6fc010);
      }
    }
    puStack_3f8 = (undefined *)CONCAT44(puStack_3f8._4_4_,uStack_438._4_4_);
    ppuStack_3f0 = (undefined8 **)0x0;
    uStack_3e8 = (long *)((ulong)uStack_3e8 & 0xffffffff00000000);
    uStack_3e0 = (long *)0x1;
    puStack_3d8 = &SUB_048aead0;
    puStack_3d0 = &UNK_06063e30;
    puStack_3c8 = &UNK_0cbcb9c0;
    lStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3af = 0;
    uStack_3a9 = 0;
    lStack_3a8 = 0;
    func_0x049057f0(&uStack_458,&puStack_3f8);
    func_0x048aea50(&puStack_3f8);
    uStack_278 = (undefined4)uStack_448;
    uStack_274 = uStack_448._4_4_;
    uStack_270 = (int)uStack_440;
    uStack_26c = uStack_440._4_4_;
    uStack_288 = (undefined4)uStack_458;
    uStack_284 = uStack_458._4_4_;
    uStack_280 = (undefined4)uStack_450;
    uStack_27c = uStack_450._4_4_;
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar16 = &UNK_0ef474e0;
    if (DAT_0f551bc8 == '\0') {
      iVar14 = func_0x04108328(&DAT_0f551bc8);
      if (iVar14 != 0) {
        FUN_04905be0(0xf551bb0);
        func_0x0410844d(&DAT_0f551bc8);
      }
    }
    puStack_3f8 = (undefined *)CONCAT44(puStack_3f8._4_4_,_DAT_0f551bb4);
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar19 == (long *)0x0) {
      FUN_0eec74c0(0x30,0);
    }
    plVar19[1] = 0;
    plVar19[2] = 0;
    *plVar19 = (long)&UNK_0ef46c48;
    ppuStack_3f0 = (undefined8 **)(plVar19 + 3);
    plVar19[3] = (long)puVar16;
    plVar19[4] = 0;
    *(undefined1 *)(plVar19 + 5) = 0xff;
    uStack_248 = 0;
    uStack_240 = (long *)0x0;
    uStack_3e8 = plVar19;
    func_0x048afd20(&uStack_288,&puStack_3f8);
    plVar19 = uStack_3e8;
    if (uStack_3e8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_3e8 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_3e8 + 0x10))(uStack_3e8);
        func_0x0412c2d0(plVar19);
      }
    }
    plVar19 = uStack_240;
    if (uStack_240 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_240 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_240 + 0x10))(uStack_240);
        func_0x0412c2d0(plVar19);
      }
    }
  }
  if (DAT_0f6fb838 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f6fb838);
    if (iVar14 != 0) {
      func_0x0cba88c0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fb7b8,0xf53dab8);
      func_0x0410844d(&DAT_0f6fb838);
    }
  }
  plVar19 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6fb7b8 + 4)) * 8);
  do {
    lVar15 = *plVar19;
    if (lVar15 == -1) goto LAB_0cb97980;
    plVar19 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f6fb7b8 + 4))
  ;
  if (plVar19 == *(long **)(param_1 + 0x38)) {
LAB_0cb97980:
    puVar18 = &DAT_0f6fb7b8;
    if (iRam000000000f6fb818 != -0x2b3da790) goto LAB_0cb979ee;
LAB_0cb979ab:
    lVar15 = *(long *)(puVar18 + 0x68);
    if (lVar15 == 0) goto LAB_0cb979ee;
    bVar26 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar20 = lVar15 + 9;
    if (bVar26) {
      lVar20 = *(long *)(lVar15 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar26) {
      uVar23 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x0cbcbce0(&uStack_288,param_1,lVar20,uVar23);
  }
  else {
    puVar18 = (undefined *)plVar19[2];
    if (*(int *)(puVar18 + 0x60) == -0x2b3da790) goto LAB_0cb979ab;
LAB_0cb979ee:
    func_0x0cbcbce0(&uStack_288,param_1,&UNK_012ce152,0x18);
  }
  if (cStack_258 == '\0') {
    uStack_218 = (ulong)uStack_257 << 8;
    uStack_248 = CONCAT44(uStack_284,uStack_288);
    uStack_240 = (long *)CONCAT44(uStack_27c,uStack_280);
    uStack_238 = uStack_278;
    uStack_234 = uStack_274;
    uStack_230 = uStack_270;
    uStack_22c = uStack_26c;
    uStack_228 = uStack_268;
    uStack_224 = uStack_264;
    if (DAT_0f6fb7a0 == '\0') {
      iVar14 = func_0x04108328(&DAT_0f6fb7a0);
      if (iVar14 != 0) {
        func_0x0cba8780();
        func_0x0410844d(&DAT_0f6fb7a0);
      }
    }
    lVar15 = uStack_248;
    uStack_220 = 0x92685bf500000001;
    if (DAT_0f6fb838 == '\0') {
      iVar14 = func_0x04108328(&DAT_0f6fb838);
      if (iVar14 != 0) {
        func_0x0cba88c0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fb7b8,0xf53dab8);
        func_0x0410844d(&DAT_0f6fb838);
      }
    }
    ppuStack_3f0 = (undefined8 **)(lVar15 + 0x18);
    plVar19 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f6fb7b8 + 4)) * 8);
    do {
      lVar20 = *plVar19;
      if (lVar20 == -1) goto LAB_0cb97af1;
      plVar19 = (long *)(*(long *)(lVar15 + 0x30) + lVar20 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f6fb7b8 + 4)
            );
    if (plVar19 == *(long **)(lVar15 + 0x38)) {
LAB_0cb97af1:
      puStack_3f8 = &DAT_0f6fb7b8;
    }
    else {
      puStack_3f8 = (undefined *)plVar19[2];
    }
    func_0x0ed621a0(&puStack_3f8,uStack_220._4_4_);
    puStack_3f8 = (undefined *)CONCAT62(puStack_3f8._2_6_,1);
    uStack_3e8 = (long *)CONCAT44(uStack_3e8._4_4_,uStack_220._4_4_);
    uStack_3e0 = (long *)0x0;
    puStack_3d8 = (undefined1 *)0x0;
    puStack_3d0 = (undefined1 *)0x0;
    puStack_3c8 = (undefined *)0x0;
    lStack_3c0 = 0;
    uStack_3b8 = 0x616e651c;
    uStack_3b4 = 0x62;
    uStack_3b3 = 0x656c;
    uStack_3b1 = 100;
    uStack_3b0 = 0x5f;
    uStack_3af = 0x736574617473;
    uStack_3a9 = 0;
    lStack_3a0 = 0;
    lStack_398 = 0;
    lStack_390 = 0;
    lStack_388 = 0;
    lStack_380 = 0;
    lStack_378 = 0;
    uStack_370 = 0x3f600000;
    ppuStack_3f0 = (undefined8 **)&uStack_240;
    func_0x048afb10(&lStack_3a0,8);
    uStack_348 = 0;
    lStack_340 = 0;
    lStack_358 = 0;
    uStack_350 = 0;
    lStack_368 = 0;
    lStack_360 = 0;
    uStack_338 = 0xff00;
    uStack_334 = uStack_334 & 0xffffff00;
    uStack_330 = uStack_330 & 0xffffff00;
    uStack_32c = 0;
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f3f4fb0;
    if (uStack_3e0 != (long *)0x0) {
      lVar15 = *uStack_3e0;
      uStack_3e0 = puVar16;
      (**(code **)(lVar15 + 8))();
      puVar16 = uStack_3e0;
    }
    uStack_3e0 = puVar16;
    uStack_460 = (undefined4)uStack_3e8;
    uStack_458 = (long *)0x0;
    uStack_450 = (long *)((ulong)uStack_450 & 0xffffffff00000000);
    uStack_448 = 1;
    uStack_440 = 0;
    uStack_438 = &UNK_0cbcc9f0;
    puStack_430 = &SUB_048b06d0;
    puStack_428 = &UNK_0cbca9d0;
    puStack_420 = &UNK_0cbccab0;
    puStack_418 = &UNK_0cbccc10;
    uStack_410 = 0;
    uStack_408 = 0;
    plStack_400 = (long *)0x0;
    FUN_048b05a0(ppuStack_3f0,&uStack_460);
    plVar19 = plStack_400;
    if (plStack_400 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_400 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_400 + 0x10))(plStack_400);
        func_0x0412c2d0(plVar19);
      }
    }
    ppuVar4 = ppuStack_3f0;
    if (DAT_0f550a20 == '\0') {
      iVar14 = func_0x04108328(&DAT_0f550a20);
      if (iVar14 != 0) {
        FUN_048b0af0(0xf550a08);
        func_0x0410844d(&DAT_0f550a20);
      }
    }
    uStack_460 = _DAT_0f550a0c;
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar19 == (long *)0x0) {
      FUN_0eec74c0(0xd0,0);
    }
    puVar10 = puStack_3d8;
    puVar16 = uStack_3e0;
    plVar19[1] = 0;
    plVar19[2] = 0;
    *plVar19 = (long)&UNK_0ef439d0;
    uStack_458 = plVar19 + 3;
    uStack_3e0 = (long *)0x0;
    puStack_3d8 = (undefined1 *)0x0;
    plVar19[3] = (long)puVar16;
    plVar19[4] = (long)puVar10;
    plVar19[7] = lStack_3c0;
    plVar19[5] = (long)puStack_3d0;
    plVar19[6] = (long)puStack_3c8;
    puStack_3d0 = (undefined1 *)0x0;
    puStack_3c8 = (undefined *)0x0;
    lStack_3c0 = 0;
    plVar19[10] = lStack_3a8;
    plVar19[8] = CONCAT17(uStack_3b1,CONCAT25(uStack_3b3,CONCAT14(uStack_3b4,uStack_3b8)));
    plVar19[9] = CONCAT17(uStack_3a9,CONCAT61(uStack_3af,uStack_3b0));
    uStack_3b8 = 0;
    uStack_3b4 = 0;
    uStack_3b3 = 0;
    uStack_3b1 = 0;
    uStack_3b0 = 0;
    uStack_3af = 0;
    uStack_3a9 = 0;
    lStack_3a8 = 0;
    plVar19[0xb] = lStack_3a0;
    plVar19[0xc] = lStack_398;
    plVar19[0xd] = lStack_390;
    lStack_3a0 = 0;
    lStack_398 = 0;
    lStack_390 = 0;
    plVar19[0xe] = lStack_388;
    plVar19[0xf] = lStack_380;
    plVar19[0x10] = lStack_378;
    lStack_388 = 0;
    lStack_380 = 0;
    lStack_378 = 0;
    *(undefined4 *)(plVar19 + 0x11) = uStack_370;
    plVar19[0x12] = lStack_368;
    plVar19[0x13] = lStack_360;
    plVar19[0x14] = lStack_358;
    lStack_368 = 0;
    lStack_360 = 0;
    lStack_358 = 0;
    plVar19[0x17] = lStack_340;
    *(undefined4 *)(plVar19 + 0x15) = (undefined4)uStack_350;
    *(undefined4 *)((long)plVar19 + 0xac) = uStack_350._4_4_;
    *(undefined4 *)(plVar19 + 0x16) = (undefined4)uStack_348;
    *(undefined4 *)((long)plVar19 + 0xb4) = uStack_348._4_4_;
    uStack_350 = 0;
    uStack_348 = 0;
    lStack_340 = 0;
    *(ulong *)((long)plVar19 + 0xc5) = CONCAT17(uStack_32c,CONCAT43(uStack_330,uStack_334._1_3_));
    plVar19[0x18] = CONCAT44(uStack_334,CONCAT22(uStack_336,uStack_338));
    uStack_178 = 0;
    uStack_170 = (long *)0x0;
    uStack_450 = plVar19;
    func_0x048afd20(ppuVar4,&uStack_460);
    plVar19 = uStack_450;
    if (uStack_450 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_450 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_450 + 0x10))(uStack_450);
        func_0x0412c2d0(plVar19);
      }
    }
    plVar19 = uStack_170;
    if (uStack_170 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_170 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_170 + 0x10))(uStack_170);
        func_0x0412c2d0(plVar19);
      }
    }
    puVar16 = ppuVar4[2];
    iVar14 = *(int *)((long)ppuVar4 + 0x1c);
    if (iVar14 == 2) {
      piVar21 = *(int **)(puVar16[0xf] + 0x60);
      iVar14 = *piVar21;
      while (iVar14 != *(int *)(ppuVar4 + 3)) {
        piVar21 = piVar21 + 0x16;
        iVar14 = *piVar21;
      }
      for (; *(undefined8 **)(piVar21 + 0xc) != ppuVar4[1]; piVar21 = *(int **)(piVar21 + 0xe)) {
      }
LAB_0cb97fba:
      piVar21[4] = piVar21[4] | (int)puStack_3f8 << 0x10;
    }
    else {
      if (iVar14 == 1) {
        piVar21 = *(int **)(puVar16[0xf] + 0x48);
        iVar14 = *piVar21;
        while (iVar14 != *(int *)(ppuVar4 + 3)) {
          piVar21 = piVar21 + 0x1a;
          iVar14 = *piVar21;
        }
        goto LAB_0cb97fba;
      }
      if (iVar14 == 0) {
        *(uint *)(puVar16 + 3) = *(uint *)(puVar16 + 3) | (int)puStack_3f8 << 0x10;
      }
    }
    func_0x048b0bc0(&uStack_3e0);
  }
  func_0x0cba1f10(&uStack_288,param_1);
  puVar16 = uStack_2c0;
  puVar17 = uStack_2c8;
  if (cStack_258 == '\0') {
    if (DAT_0f6fdbf8 == '\0') {
      iVar14 = func_0x04108328(&DAT_0f6fdbf8);
      if (iVar14 != 0) {
        func_0x04160690(&DAT_0f6fdbe0,&UNK_013525f8);
        func_0x0eee2f40(&SUB_0412ed50,&DAT_0f6fdbe0,0xf53dab8);
        func_0x0410844d(&DAT_0f6fdbf8);
      }
    }
    uVar23 = (ulong)(DAT_0f6fdbe0 >> 1);
    uVar6 = 0xf6fdbe1;
    if ((DAT_0f6fdbe0 & 1) != 0) {
      uVar23 = _DAT_0f6fdbe8;
      uVar6 = _DAT_0f6fdbf0;
    }
    func_0x0cba4ba0(&puStack_3f8,&uStack_288,uVar6,uVar23);
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar19 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar19 = (long)&UNK_0f3f2e48;
    if (uStack_3e0 != (long *)0x0) {
      lVar15 = *uStack_3e0;
      uStack_3e0 = plVar19;
      (**(code **)(lVar15 + 8))();
      plVar19 = uStack_3e0;
    }
    uStack_3e0 = plVar19;
    uStack_460 = (undefined4)uStack_3e8;
    uStack_458 = (long *)0x0;
    uStack_450 = (long *)((ulong)uStack_450 & 0xffffffff00000000);
    uStack_448 = 1;
    uStack_440 = 0;
    uStack_438 = &UNK_0cba9290;
    puStack_430 = &SUB_048b06d0;
    puStack_428 = &UNK_0cba8f00;
    puStack_420 = &UNK_0cba9350;
    puStack_418 = &UNK_0cba95d0;
    uStack_410 = 0;
    uStack_408 = 0;
    plStack_400 = (long *)0x0;
    FUN_048b05a0(ppuStack_3f0,&uStack_460);
    plVar19 = plStack_400;
    if (plStack_400 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_400 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_400 + 0x10))(plStack_400);
        func_0x0412c2d0(plVar19);
      }
    }
    iVar14 = *(int *)((long)ppuStack_3f0 + 0x1c);
    if (iVar14 == 2) {
      piVar21 = *(int **)(ppuStack_3f0[2][0xf] + 0x60);
      iVar14 = *piVar21;
      while (iVar14 != *(int *)(ppuStack_3f0 + 3)) {
        piVar21 = piVar21 + 0x16;
        iVar14 = *piVar21;
      }
      puVar16 = *(undefined8 **)(piVar21 + 0xc);
      while (puVar16 != ppuStack_3f0[1]) {
        piVar21 = *(int **)(piVar21 + 0xe);
        puVar16 = *(undefined8 **)(piVar21 + 0xc);
      }
      *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 4;
    }
    else if (iVar14 == 1) {
      piVar21 = *(int **)(ppuStack_3f0[2][0xf] + 0x48);
      iVar14 = *piVar21;
      while (iVar14 != *(int *)(ppuStack_3f0 + 3)) {
        piVar21 = piVar21 + 0x1a;
        iVar14 = *piVar21;
      }
      *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 4;
    }
    else if (iVar14 == 0) {
      *(uint *)(ppuStack_3f0[2] + 3) = *(uint *)(ppuStack_3f0[2] + 3) | 0x40000;
    }
    func_0x0cba4ee0(&puStack_3f8);
    func_0x048b0bc0(&uStack_3e0);
    puVar16 = uStack_2c0;
    puVar17 = uStack_2c8;
  }
  puStack_318 = puVar17;
  puStack_310 = puVar16;
  puStack_328 = puStack_2d8;
  plStack_320 = puStack_2d0;
  uStack_308 = uStack_308 & 0xffffff00;
  bStack_2f0 = cStack_2a0 == '\x01';
  if ((bool)bStack_2f0) {
    uStack_308 = uStack_2b8;
    uStack_304 = uStack_2b4;
    uStack_300 = uStack_2b0;
    uStack_2b0 = 0;
    uStack_2f8 = CONCAT71(uStack_2a7,cStack_2a8);
  }
  uStack_2c0 = puStack_310;
  uStack_2c8 = puStack_318;
  if (DAT_0f6fdbf8 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f6fdbf8);
    if (iVar14 != 0) {
      func_0x04160690(&DAT_0f6fdbe0,&UNK_013525f8);
      func_0x0eee2f40(&SUB_0412ed50,&DAT_0f6fdbe0,0xf53dab8);
      func_0x0410844d(&DAT_0f6fdbf8);
    }
  }
  lVar20 = func_0x0cbb7a90(lStack_200,&DAT_0f6fdbe0);
  *(undefined **)(lVar20 + 0x28) = puStack_328;
  lVar15 = *(long *)(lVar20 + 0x30);
  if (lVar15 != 0) {
    *(long *)(lVar20 + 0x38) = lVar15;
    func_0x0412a280(lVar15,*(long *)(lVar20 + 0x40) - lVar15);
    *(undefined8 *)(lVar20 + 0x30) = 0;
    *(undefined8 *)(lVar20 + 0x38) = 0;
    *(undefined8 *)(lVar20 + 0x40) = 0;
  }
  puVar16 = puStack_2e0;
  bVar27 = bStack_2f0;
  *(long **)(lVar20 + 0x30) = plStack_320;
  *(undefined8 **)(lVar20 + 0x38) = puStack_318;
  *(undefined8 **)(lVar20 + 0x40) = puStack_310;
  plStack_320 = (long *)0x0;
  puStack_318 = (undefined8 *)0x0;
  puStack_310 = (undefined8 *)0x0;
  cVar2 = *(char *)(lVar20 + 0x60);
  if (cVar2 == bStack_2f0) {
    if (cVar2 != '\0') {
      uVar23 = *(ulong *)(lVar20 + 0x50);
      uVar5 = *(ulong *)(lVar20 + 0x58);
      *(uint *)(lVar20 + 0x48) = uStack_308;
      *(undefined4 *)(lVar20 + 0x4c) = uStack_304;
      *(undefined4 *)(lVar20 + 0x50) = (undefined4)uStack_300;
      *(undefined4 *)(lVar20 + 0x54) = uStack_300._4_4_;
      *(ulong *)(lVar20 + 0x58) = uStack_2f8;
      uStack_300 = uVar23;
      uStack_2f8 = uVar5;
    }
  }
  else if (cVar2 == '\0') {
    *(uint *)(lVar20 + 0x48) = uStack_308;
    *(undefined4 *)(lVar20 + 0x4c) = uStack_304;
    *(undefined4 *)(lVar20 + 0x50) = (undefined4)uStack_300;
    *(undefined4 *)(lVar20 + 0x54) = uStack_300._4_4_;
    uStack_300 = 0;
    *(ulong *)(lVar20 + 0x58) = uStack_2f8;
    uStack_2f8 = 0;
    *(undefined1 *)(lVar20 + 0x60) = 1;
  }
  else {
    if ((*(ulong *)(lVar20 + 0x58) & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(*(ulong *)(lVar20 + 0x58) & 0xff00ffffffffffff) - 8);
    }
    *(undefined8 *)(lVar20 + 0x58) = 0;
    if ((*(ulong *)(lVar20 + 0x50) & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(*(ulong *)(lVar20 + 0x50) & 0xff00ffffffffffff) - 8);
    }
    *(undefined8 *)(lVar20 + 0x50) = 0;
    *(undefined1 *)(lVar20 + 0x60) = 0;
  }
  if (bVar27 != '\0') {
    if ((uStack_2f8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2f8 & 0xff00ffffffffffff) - 8);
    }
    uStack_2f8 = 0;
    if ((uStack_300 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_300 & 0xff00ffffffffffff) - 8);
    }
    uStack_300 = 0;
  }
  if ((bStack_b8 & 1) != 0) {
    if (((ulong)puStack_c0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_c0 & 0xff00ffffffffffff) - 8);
    }
    puStack_c0 = (undefined *)0x0;
    if (((ulong)puStack_c8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_c8 & 0xff00ffffffffffff) - 8);
    }
    puStack_c8 = (undefined *)0x0;
  }
  if ((uStack_1e8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1e8 & 0xff00ffffffffffff) - 8);
  }
  uStack_1e8 = 0;
  if (((ulong)plStack_1f0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)plStack_1f0 & 0xff00ffffffffffff) - 8)
    ;
  }
  plStack_1f0 = (long *)0x0;
  if ((uStack_198 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_198 & 0xff00ffffffffffff) - 8);
  }
  uStack_198 = 0;
  if ((uStack_190 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_190 & 0xff00ffffffffffff) - 8);
  }
  uStack_190 = 0;
  lStack_1f8 = 0x10000001a0001;
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  uStack_f0 = 0x10000001a0001;
  puStack_e8 = puStack_1b8;
  plStack_1f0 = (long *)0x0;
  uStack_1e8 = 0;
  puStack_e0 = puStack_1b8;
  bStack_d8 = 1;
  cStack_2a0 = '\0';
  puStack_2d0 = (undefined8 *)0x0;
  uStack_2c8._0_4_ = 0;
  uStack_2c8._4_4_ = 0;
  uStack_2c0._0_4_ = 0;
  uStack_2c0._4_4_ = 0;
  uStack_2b8 = uStack_2b8 & 0xffffff00;
  puStack_2d8 = &UNK_0cba9a20;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar17 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  uStack_2c0 = puVar17 + 1;
  *puVar17 = *puVar16;
  puStack_2d0 = puVar17;
  uStack_2c8 = uStack_2c0;
  func_0x0c24ba30(&uStack_2b8,&uStack_f0);
  if (DAT_0f6fbd10 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f6fbd10);
    if (iVar14 != 0) {
      func_0x0cbbc6f0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fbc90,0xf53dab8);
      func_0x0410844d(&DAT_0f6fbd10);
    }
  }
  plVar19 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6fbc90 + 4)) * 8);
  do {
    lVar15 = *plVar19;
    if (lVar15 == -1) goto LAB_0cb98750;
    plVar19 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f6fbc90 + 4))
  ;
  if (plVar19 == *(long **)(param_1 + 0x38)) {
LAB_0cb98750:
    puVar18 = &DAT_0f6fbc90;
    if (iRam000000000f6fbcf0 != -0x2b3da790) goto LAB_0cb987b8;
LAB_0cb9877b:
    lVar15 = *(long *)(puVar18 + 0x68);
    if (lVar15 == 0) goto LAB_0cb987b8;
    bVar26 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar20 = lVar15 + 9;
    if (bVar26) {
      lVar20 = *(long *)(lVar15 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar26) {
      uVar23 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x0cbbcb10(&uStack_460,param_1,lVar20,uVar23);
  }
  else {
    puVar18 = (undefined *)plVar19[2];
    if (*(int *)(puVar18 + 0x60) == -0x2b3da790) goto LAB_0cb9877b;
LAB_0cb987b8:
    func_0x0cbbcb10(&uStack_460,param_1,&UNK_014a5535,0x24);
  }
  if ((char)puStack_430 == '\0') {
    uStack_438 = (undefined *)0x1e1bc4d500000004;
    if (DAT_0f6fbd30 == '\0') {
      iVar14 = func_0x04108328(&DAT_0f6fbd30);
      if (iVar14 != 0) {
        func_0x0cbbc800();
        func_0x0410844d(&DAT_0f6fbd30);
      }
    }
    puStack_3f8 = (undefined *)CONCAT44(puStack_3f8._4_4_,uStack_438._4_4_);
    ppuStack_3f0 = (undefined8 **)0x0;
    uStack_3e8 = (long *)((ulong)uStack_3e8 & 0xffffffff00000000);
    uStack_3e0 = (long *)0x1;
    puStack_3d8 = &SUB_048aead0;
    puStack_3d0 = &UNK_06063e30;
    puStack_3c8 = &UNK_0cbbd620;
    lStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3af = 0;
    uStack_3a9 = 0;
    lStack_3a8 = 0;
    func_0x049057f0(&uStack_458,&puStack_3f8);
    func_0x048aea50(&puStack_3f8);
    uStack_278 = (undefined4)uStack_448;
    uStack_274 = uStack_448._4_4_;
    uStack_270 = (int)uStack_440;
    uStack_26c = uStack_440._4_4_;
    uStack_288 = (undefined4)uStack_458;
    uStack_284 = uStack_458._4_4_;
    uStack_280 = (undefined4)uStack_450;
    uStack_27c = uStack_450._4_4_;
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar16 = &UNK_0ef474e0;
    if (DAT_0f551bc8 == '\0') {
      iVar14 = func_0x04108328(&DAT_0f551bc8);
      if (iVar14 != 0) {
        FUN_04905be0(0xf551bb0);
        func_0x0410844d(&DAT_0f551bc8);
      }
    }
    puStack_3f8 = (undefined *)CONCAT44(puStack_3f8._4_4_,_DAT_0f551bb4);
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar19 == (long *)0x0) {
      FUN_0eec74c0(0x30,0);
    }
    plVar19[1] = 0;
    plVar19[2] = 0;
    *plVar19 = (long)&UNK_0ef46c48;
    ppuStack_3f0 = (undefined8 **)(plVar19 + 3);
    plVar19[3] = (long)puVar16;
    plVar19[4] = 0;
    *(undefined1 *)(plVar19 + 5) = 0xff;
    uStack_248 = 0;
    uStack_240 = (long *)0x0;
    uStack_3e8 = plVar19;
    func_0x048afd20(&uStack_288,&puStack_3f8);
    plVar19 = uStack_3e8;
    if (uStack_3e8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_3e8 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_3e8 + 0x10))(uStack_3e8);
        func_0x0412c2d0(plVar19);
      }
    }
    plVar19 = uStack_240;
    if (uStack_240 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_240 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_240 + 0x10))(uStack_240);
        func_0x0412c2d0(plVar19);
      }
    }
    if (DAT_0f6fbd30 == '\0') {
      iVar14 = func_0x04108328(&DAT_0f6fbd30);
      if (iVar14 != 0) {
        func_0x0cbbc800();
        func_0x0410844d(&DAT_0f6fbd30);
      }
    }
    if (uStack_440._4_4_ == 2) {
      piVar21 = *(int **)(*(long *)(uStack_448 + 0x78) + 0x60);
      iVar14 = *piVar21;
      while (iVar14 != (int)uStack_440) {
        piVar21 = piVar21 + 0x16;
        iVar14 = *piVar21;
      }
      plVar19 = *(long **)(piVar21 + 0xc);
      while (plVar19 != uStack_450) {
        piVar21 = *(int **)(piVar21 + 0xe);
        plVar19 = *(long **)(piVar21 + 0xc);
      }
LAB_0cb98a6a:
      *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 2;
    }
    else {
      if (uStack_440._4_4_ == 1) {
        piVar21 = *(int **)(*(long *)(uStack_448 + 0x78) + 0x48);
        iVar14 = *piVar21;
        while (iVar14 != (int)uStack_440) {
          piVar21 = piVar21 + 0x1a;
          iVar14 = *piVar21;
        }
        goto LAB_0cb98a6a;
      }
      if (uStack_440._4_4_ == 0) {
        *(uint *)(uStack_448 + 0x18) = *(uint *)(uStack_448 + 0x18) | 0x20000;
      }
    }
    if (DAT_0f6fbd30 == '\0') {
      iVar14 = func_0x04108328(&DAT_0f6fbd30);
      if (iVar14 != 0) {
        func_0x0cbbc800();
        func_0x0410844d(&DAT_0f6fbd30);
      }
    }
    puStack_3f8 = (undefined *)CONCAT44(puStack_3f8._4_4_,0xbf75c8f8);
    ppuStack_3f0 = (undefined8 **)0x0;
    uStack_3e8 = (long *)CONCAT44(uStack_3e8._4_4_,1);
    uStack_3e0 = (long *)0x0;
    puStack_3d8 = &UNK_0490fc00;
    puStack_3d0 = &SUB_048b06d0;
    puStack_3c8 = &UNK_0cbbd8f0;
    lStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3af = 0;
    uStack_3a9 = 0;
    lStack_3a8 = 0;
    func_0x049057f0(&uStack_458,&puStack_3f8);
    func_0x048aea50(&puStack_3f8);
    uStack_278 = (undefined4)uStack_448;
    uStack_274 = uStack_448._4_4_;
    uStack_270 = (int)uStack_440;
    uStack_26c = uStack_440._4_4_;
    uStack_288 = (undefined4)uStack_458;
    uStack_284 = uStack_458._4_4_;
    uStack_280 = (undefined4)uStack_450;
    uStack_27c = uStack_450._4_4_;
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar16 = &UNK_0ef474e0;
    if (DAT_0f551cb0 == '\0') {
      iVar14 = func_0x04108328(&DAT_0f551cb0);
      if (iVar14 != 0) {
        func_0x04905d10(0xf551c98);
        func_0x0410844d(&DAT_0f551cb0);
      }
    }
    puStack_3f8 = (undefined *)CONCAT44(puStack_3f8._4_4_,_DAT_0f551c9c);
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar19 == (long *)0x0) {
      FUN_0eec74c0(0x28,0);
    }
    plVar19[1] = 0;
    plVar19[2] = 0;
    *plVar19 = (long)&UNK_0ef46c98;
    ppuStack_3f0 = (undefined8 **)(plVar19 + 3);
    plVar19[3] = (long)puVar16;
    *(undefined1 *)(plVar19 + 4) = 0xff;
    uStack_248 = 0;
    uStack_240 = (long *)0x0;
    uStack_3e8 = plVar19;
    func_0x048afd20(&uStack_288,&puStack_3f8);
    plVar19 = uStack_3e8;
    if (uStack_3e8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_3e8 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_3e8 + 0x10))(uStack_3e8);
        func_0x0412c2d0(plVar19);
      }
    }
    plVar19 = uStack_240;
    if (uStack_240 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_240 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_240 + 0x10))(uStack_240);
        func_0x0412c2d0(plVar19);
      }
    }
  }
  if (DAT_0f6fb9a8 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f6fb9a8);
    if (iVar14 != 0) {
      func_0x0cbaa890();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fb928,0xf53dab8);
      func_0x0410844d(&DAT_0f6fb9a8);
    }
  }
  plVar19 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6fb928 + 4)) * 8);
  do {
    lVar15 = *plVar19;
    if (lVar15 == -1) goto LAB_0cb98c90;
    plVar19 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f6fb928 + 4))
  ;
  if (plVar19 == *(long **)(param_1 + 0x38)) {
LAB_0cb98c90:
    puVar18 = &DAT_0f6fb928;
    if (iRam000000000f6fb988 != -0x2b3da790) goto LAB_0cb98cfe;
LAB_0cb98cbb:
    lVar15 = *(long *)(puVar18 + 0x68);
    if (lVar15 == 0) goto LAB_0cb98cfe;
    bVar26 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar20 = lVar15 + 9;
    if (bVar26) {
      lVar20 = *(long *)(lVar15 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar26) {
      uVar23 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x0cbbdb30(&uStack_288,param_1,lVar20,uVar23);
  }
  else {
    puVar18 = (undefined *)plVar19[2];
    if (*(int *)(puVar18 + 0x60) == -0x2b3da790) goto LAB_0cb98cbb;
LAB_0cb98cfe:
    func_0x0cbbdb30(&uStack_288,param_1,&UNK_0148ae02,0x10);
  }
  if (cStack_258 == '\0') {
    uStack_218 = (ulong)uStack_257 << 8;
    uStack_248 = CONCAT44(uStack_284,uStack_288);
    uStack_240 = (long *)CONCAT44(uStack_27c,uStack_280);
    uStack_238 = uStack_278;
    uStack_234 = uStack_274;
    uStack_230 = uStack_270;
    uStack_22c = uStack_26c;
    uStack_228 = uStack_268;
    uStack_224 = uStack_264;
    if (DAT_0f6fb910 == '\0') {
      iVar14 = func_0x04108328(&DAT_0f6fb910);
      if (iVar14 != 0) {
        func_0x0cbaa750();
        func_0x0410844d(&DAT_0f6fb910);
      }
    }
    lVar15 = uStack_248;
    uStack_220 = 0x92685bf500000001;
    if (DAT_0f6fb9a8 == '\0') {
      iVar14 = func_0x04108328(&DAT_0f6fb9a8);
      if (iVar14 != 0) {
        func_0x0cbaa890();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fb928,0xf53dab8);
        func_0x0410844d(&DAT_0f6fb9a8);
      }
    }
    ppuStack_3f0 = (undefined8 **)(lVar15 + 0x18);
    plVar19 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f6fb928 + 4)) * 8);
    do {
      lVar20 = *plVar19;
      if (lVar20 == -1) goto LAB_0cb98e01;
      plVar19 = (long *)(*(long *)(lVar15 + 0x30) + lVar20 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f6fb928 + 4)
            );
    if (plVar19 == *(long **)(lVar15 + 0x38)) {
LAB_0cb98e01:
      puStack_3f8 = &DAT_0f6fb928;
    }
    else {
      puStack_3f8 = (undefined *)plVar19[2];
    }
    func_0x0ed621a0(&puStack_3f8,uStack_220._4_4_);
    puStack_3f8 = (undefined *)CONCAT62(puStack_3f8._2_6_,1);
    uStack_3e8 = (long *)CONCAT44(uStack_3e8._4_4_,uStack_220._4_4_);
    uStack_3e0 = (long *)0x0;
    puStack_3d8 = (undefined1 *)0x0;
    puStack_3d0 = (undefined1 *)0x0;
    puStack_3c8 = (undefined *)0x0;
    lStack_3c0 = 0;
    uStack_3b8 = 0x616e651c;
    uStack_3b4 = 0x62;
    uStack_3b3 = 0x656c;
    uStack_3b1 = 100;
    uStack_3b0 = 0x5f;
    uStack_3af = 0x736574617473;
    uStack_3a9 = 0;
    lStack_3a0 = 0;
    lStack_398 = 0;
    lStack_390 = 0;
    lStack_388 = 0;
    lStack_380 = 0;
    lStack_378 = 0;
    uStack_370 = 0x3f600000;
    ppuStack_3f0 = (undefined8 **)&uStack_240;
    func_0x048afb10(&lStack_3a0,8);
    uStack_348 = 0;
    lStack_340 = 0;
    lStack_358 = 0;
    uStack_350 = 0;
    lStack_368 = 0;
    lStack_360 = 0;
    uStack_338 = 0xff00;
    uStack_334 = uStack_334 & 0xffffff00;
    uStack_330 = uStack_330 & 0xffffff00;
    uStack_32c = 0;
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f3f4840;
    if (uStack_3e0 != (long *)0x0) {
      lVar15 = *uStack_3e0;
      uStack_3e0 = puVar16;
      (**(code **)(lVar15 + 8))();
      puVar16 = uStack_3e0;
    }
    uStack_3e0 = puVar16;
    uStack_460 = (undefined4)uStack_3e8;
    uStack_458 = (long *)0x0;
    uStack_450 = (long *)((ulong)uStack_450 & 0xffffffff00000000);
    uStack_448 = 1;
    uStack_440 = 0;
    uStack_438 = &UNK_0cbbe890;
    puStack_430 = &SUB_048b06d0;
    puStack_428 = &UNK_0cbbc630;
    puStack_420 = &UNK_0cbbe950;
    puStack_418 = &UNK_0cbbeab0;
    uStack_410 = 0;
    uStack_408 = 0;
    plStack_400 = (long *)0x0;
    FUN_048b05a0(ppuStack_3f0,&uStack_460);
    plVar19 = plStack_400;
    if (plStack_400 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_400 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_400 + 0x10))(plStack_400);
        func_0x0412c2d0(plVar19);
      }
    }
    ppuVar4 = ppuStack_3f0;
    if (DAT_0f550a20 == '\0') {
      iVar14 = func_0x04108328(&DAT_0f550a20);
      if (iVar14 != 0) {
        FUN_048b0af0(0xf550a08);
        func_0x0410844d(&DAT_0f550a20);
      }
    }
    uStack_460 = _DAT_0f550a0c;
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar19 == (long *)0x0) {
      FUN_0eec74c0(0xd0,0);
    }
    puVar10 = puStack_3d8;
    puVar16 = uStack_3e0;
    plVar19[1] = 0;
    plVar19[2] = 0;
    *plVar19 = (long)&UNK_0ef439d0;
    uStack_458 = plVar19 + 3;
    uStack_3e0 = (long *)0x0;
    puStack_3d8 = (undefined1 *)0x0;
    plVar19[3] = (long)puVar16;
    plVar19[4] = (long)puVar10;
    plVar19[7] = lStack_3c0;
    plVar19[5] = (long)puStack_3d0;
    plVar19[6] = (long)puStack_3c8;
    puStack_3d0 = (undefined1 *)0x0;
    puStack_3c8 = (undefined *)0x0;
    lStack_3c0 = 0;
    plVar19[10] = lStack_3a8;
    plVar19[8] = CONCAT17(uStack_3b1,CONCAT25(uStack_3b3,CONCAT14(uStack_3b4,uStack_3b8)));
    plVar19[9] = CONCAT17(uStack_3a9,CONCAT61(uStack_3af,uStack_3b0));
    uStack_3b8 = 0;
    uStack_3b4 = 0;
    uStack_3b3 = 0;
    uStack_3b1 = 0;
    uStack_3b0 = 0;
    uStack_3af = 0;
    uStack_3a9 = 0;
    lStack_3a8 = 0;
    plVar19[0xb] = lStack_3a0;
    plVar19[0xc] = lStack_398;
    plVar19[0xd] = lStack_390;
    lStack_3a0 = 0;
    lStack_398 = 0;
    lStack_390 = 0;
    plVar19[0xe] = lStack_388;
    plVar19[0xf] = lStack_380;
    plVar19[0x10] = lStack_378;
    lStack_388 = 0;
    lStack_380 = 0;
    lStack_378 = 0;
    *(undefined4 *)(plVar19 + 0x11) = uStack_370;
    plVar19[0x12] = lStack_368;
    plVar19[0x13] = lStack_360;
    plVar19[0x14] = lStack_358;
    lStack_368 = 0;
    lStack_360 = 0;
    lStack_358 = 0;
    plVar19[0x17] = lStack_340;
    *(undefined4 *)(plVar19 + 0x15) = (undefined4)uStack_350;
    *(undefined4 *)((long)plVar19 + 0xac) = uStack_350._4_4_;
    *(undefined4 *)(plVar19 + 0x16) = (undefined4)uStack_348;
    *(undefined4 *)((long)plVar19 + 0xb4) = uStack_348._4_4_;
    uStack_350 = 0;
    uStack_348 = 0;
    lStack_340 = 0;
    *(ulong *)((long)plVar19 + 0xc5) = CONCAT17(uStack_32c,CONCAT43(uStack_330,uStack_334._1_3_));
    plVar19[0x18] = CONCAT44(uStack_334,CONCAT22(uStack_336,uStack_338));
    uStack_178 = 0;
    uStack_170 = (long *)0x0;
    uStack_450 = plVar19;
    func_0x048afd20(ppuVar4,&uStack_460);
    plVar19 = uStack_450;
    if (uStack_450 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_450 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_450 + 0x10))(uStack_450);
        func_0x0412c2d0(plVar19);
      }
    }
    plVar19 = uStack_170;
    if (uStack_170 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_170 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_170 + 0x10))(uStack_170);
        func_0x0412c2d0(plVar19);
      }
    }
    puVar16 = ppuVar4[2];
    iVar14 = *(int *)((long)ppuVar4 + 0x1c);
    if (iVar14 == 2) {
      piVar21 = *(int **)(puVar16[0xf] + 0x60);
      iVar14 = *piVar21;
      while (iVar14 != *(int *)(ppuVar4 + 3)) {
        piVar21 = piVar21 + 0x16;
        iVar14 = *piVar21;
      }
      for (; *(undefined8 **)(piVar21 + 0xc) != ppuVar4[1]; piVar21 = *(int **)(piVar21 + 0xe)) {
      }
LAB_0cb992ca:
      piVar21[4] = piVar21[4] | (int)puStack_3f8 << 0x10;
    }
    else {
      if (iVar14 == 1) {
        piVar21 = *(int **)(puVar16[0xf] + 0x48);
        iVar14 = *piVar21;
        while (iVar14 != *(int *)(ppuVar4 + 3)) {
          piVar21 = piVar21 + 0x1a;
          iVar14 = *piVar21;
        }
        goto LAB_0cb992ca;
      }
      if (iVar14 == 0) {
        *(uint *)(puVar16 + 3) = *(uint *)(puVar16 + 3) | (int)puStack_3f8 << 0x10;
      }
    }
    func_0x048b0bc0(&uStack_3e0);
  }
  func_0x0cba1f10(&uStack_288,param_1);
  puVar16 = uStack_2c0;
  puVar17 = uStack_2c8;
  if (cStack_258 == '\0') {
    func_0x0cba4ba0(&puStack_3f8,&uStack_288,&UNK_01d48489,0x14);
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar19 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar19 = (long)&UNK_0f3f2f88;
    if (uStack_3e0 != (long *)0x0) {
      lVar15 = *uStack_3e0;
      uStack_3e0 = plVar19;
      (**(code **)(lVar15 + 8))();
      plVar19 = uStack_3e0;
    }
    uStack_3e0 = plVar19;
    uStack_460 = (undefined4)uStack_3e8;
    uStack_458 = (long *)0x0;
    uStack_450 = (long *)((ulong)uStack_450 & 0xffffffff00000000);
    uStack_448 = 1;
    uStack_440 = 0;
    uStack_438 = &UNK_0cbab2b0;
    puStack_430 = &SUB_048b06d0;
    puStack_428 = &UNK_0cbaaf20;
    puStack_420 = &UNK_0cbab370;
    puStack_418 = &UNK_0cbab570;
    uStack_410 = 0;
    uStack_408 = 0;
    plStack_400 = (long *)0x0;
    FUN_048b05a0(ppuStack_3f0,&uStack_460);
    plVar19 = plStack_400;
    if (plStack_400 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_400 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_400 + 0x10))(plStack_400);
        func_0x0412c2d0(plVar19);
      }
    }
    iVar14 = *(int *)((long)ppuStack_3f0 + 0x1c);
    if (iVar14 == 2) {
      piVar21 = *(int **)(ppuStack_3f0[2][0xf] + 0x60);
      iVar14 = *piVar21;
      while (iVar14 != *(int *)(ppuStack_3f0 + 3)) {
        piVar21 = piVar21 + 0x16;
        iVar14 = *piVar21;
      }
      puVar16 = *(undefined8 **)(piVar21 + 0xc);
      while (puVar16 != ppuStack_3f0[1]) {
        piVar21 = *(int **)(piVar21 + 0xe);
        puVar16 = *(undefined8 **)(piVar21 + 0xc);
      }
      *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 4;
    }
    else if (iVar14 == 1) {
      piVar21 = *(int **)(ppuStack_3f0[2][0xf] + 0x48);
      iVar14 = *piVar21;
      while (iVar14 != *(int *)(ppuStack_3f0 + 3)) {
        piVar21 = piVar21 + 0x1a;
        iVar14 = *piVar21;
      }
      *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 4;
    }
    else if (iVar14 == 0) {
      *(uint *)(ppuStack_3f0[2] + 3) = *(uint *)(ppuStack_3f0[2] + 3) | 0x40000;
    }
    func_0x0cba4ee0(&puStack_3f8);
    func_0x048b0bc0(&uStack_3e0);
    puVar16 = uStack_2c0;
    puVar17 = uStack_2c8;
  }
  puVar12 = puStack_2d0;
  puVar18 = puStack_2d8;
  puStack_328 = puStack_2d8;
  plStack_320 = puStack_2d0;
  uStack_308 = uStack_308 & 0xffffff00;
  bVar27 = cStack_2a0 == '\x01';
  if ((bool)bVar27) {
    uStack_308 = uStack_2b8;
    uStack_304 = uStack_2b4;
    uStack_300 = uStack_2b0;
    uStack_2b0 = 0;
    uStack_2f8 = CONCAT71(uStack_2a7,cStack_2a8);
  }
  puStack_318 = puVar17;
  puStack_310 = puVar16;
  bStack_2f0 = bVar27;
  lStack_208 = param_1;
  uStack_2c0 = puVar16;
  uStack_2c8 = puVar17;
  lVar20 = func_0x0cbb7a90(lStack_200,&UNK_01d48488);
  *(undefined **)(lVar20 + 0x28) = puVar18;
  lVar15 = *(long *)(lVar20 + 0x30);
  if (lVar15 != 0) {
    *(long *)(lVar20 + 0x38) = lVar15;
    func_0x0412a280(lVar15,*(long *)(lVar20 + 0x40) - lVar15);
    *(undefined8 *)(lVar20 + 0x30) = 0;
    *(undefined8 *)(lVar20 + 0x38) = 0;
    *(undefined8 *)(lVar20 + 0x40) = 0;
    bVar27 = bStack_2f0;
  }
  lVar15 = lStack_208;
  puVar11 = puStack_2e0;
  *(undefined8 **)(lVar20 + 0x30) = puVar12;
  *(undefined8 **)(lVar20 + 0x38) = puVar17;
  *(undefined8 **)(lVar20 + 0x40) = puVar16;
  plStack_320 = (long *)0x0;
  puStack_318 = (undefined8 *)0x0;
  puStack_310 = (undefined8 *)0x0;
  bVar3 = *(byte *)(lVar20 + 0x60);
  if (bVar3 == bVar27) {
    if (bVar3 != 0) {
      uVar23 = *(ulong *)(lVar20 + 0x50);
      uVar5 = *(ulong *)(lVar20 + 0x58);
      *(uint *)(lVar20 + 0x48) = uStack_308;
      *(undefined4 *)(lVar20 + 0x4c) = uStack_304;
      *(undefined4 *)(lVar20 + 0x50) = (undefined4)uStack_300;
      *(undefined4 *)(lVar20 + 0x54) = uStack_300._4_4_;
      *(ulong *)(lVar20 + 0x58) = uStack_2f8;
      uStack_300 = uVar23;
      uStack_2f8 = uVar5;
    }
  }
  else if (bVar3 == 0) {
    *(uint *)(lVar20 + 0x48) = uStack_308;
    *(undefined4 *)(lVar20 + 0x4c) = uStack_304;
    *(undefined4 *)(lVar20 + 0x50) = (undefined4)uStack_300;
    *(undefined4 *)(lVar20 + 0x54) = uStack_300._4_4_;
    uStack_300 = 0;
    *(ulong *)(lVar20 + 0x58) = uStack_2f8;
    uStack_2f8 = 0;
    *(undefined1 *)(lVar20 + 0x60) = 1;
  }
  else {
    if ((*(ulong *)(lVar20 + 0x58) & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(*(ulong *)(lVar20 + 0x58) & 0xff00ffffffffffff) - 8);
    }
    *(undefined8 *)(lVar20 + 0x58) = 0;
    if ((*(ulong *)(lVar20 + 0x50) & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(*(ulong *)(lVar20 + 0x50) & 0xff00ffffffffffff) - 8);
    }
    *(undefined8 *)(lVar20 + 0x50) = 0;
    *(undefined1 *)(lVar20 + 0x60) = 0;
  }
  if ((bVar27 & 1) != 0) {
    if ((uStack_2f8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2f8 & 0xff00ffffffffffff) - 8);
    }
    uStack_2f8 = 0;
    if ((uStack_300 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_300 & 0xff00ffffffffffff) - 8);
    }
    uStack_300 = 0;
  }
  if ((bStack_d8 & 1) != 0) {
    if (((ulong)puStack_e0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_e0 & 0xff00ffffffffffff) - 8);
    }
    puStack_e0 = (undefined *)0x0;
    if (((ulong)puStack_e8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_e8 & 0xff00ffffffffffff) - 8);
    }
    puStack_e8 = (undefined *)0x0;
  }
  if ((uStack_1e8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1e8 & 0xff00ffffffffffff) - 8);
  }
  uStack_1e8 = 0;
  if (((ulong)plStack_1f0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)plStack_1f0 & 0xff00ffffffffffff) - 8)
    ;
  }
  plStack_1f0 = (long *)0x0;
  if ((uStack_1a8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1a8 & 0xff00ffffffffffff) - 8);
  }
  uStack_1a8 = 0;
  if ((uStack_1a0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1a0 & 0xff00ffffffffffff) - 8);
  }
  uStack_1a0 = 0;
  plStack_138 = (long *)0x10028001a0001;
  uStack_118 = 0;
  uStack_1b0 = 0;
  uStack_110 = 0x10028001a0001;
  puStack_108 = puStack_1b8;
  uStack_130 = 0;
  uStack_128 = 0;
  puStack_100 = puStack_1b8;
  bStack_f8 = 1;
  cStack_2a0 = '\0';
  puStack_2d0 = (undefined8 *)0x0;
  uStack_2c8._0_4_ = 0;
  uStack_2c8._4_4_ = 0;
  uStack_2c0._0_4_ = 0;
  uStack_2c0._4_4_ = 0;
  uStack_2b8 = uStack_2b8 & 0xffffff00;
  puStack_2d8 = &UNK_0cbab940;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  uStack_2c0 = puVar16 + 1;
  *puVar16 = *puVar11;
  puStack_2d0 = puVar16;
  uStack_2c8 = uStack_2c0;
  func_0x0c24ba30(&uStack_2b8,&uStack_110);
  if (DAT_0f6fbdc8 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f6fbdc8);
    if (iVar14 != 0) {
      func_0x0cbc0230();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fbd48,0xf53dab8);
      func_0x0410844d(&DAT_0f6fbdc8);
    }
  }
  plVar19 = (long *)(*(long *)(lVar15 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f6fbd48 + 4)) * 8);
  do {
    lVar20 = *plVar19;
    if (lVar20 == -1) goto LAB_0cb99a60;
    plVar19 = (long *)(*(long *)(lVar15 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f6fbd48 + 4));
  if (plVar19 == *(long **)(lVar15 + 0x38)) {
LAB_0cb99a60:
    puVar18 = &DAT_0f6fbd48;
    if (iRam000000000f6fbda8 != -0x2b3da790) goto LAB_0cb99ac8;
LAB_0cb99a8b:
    lVar20 = *(long *)(puVar18 + 0x68);
    if (lVar20 == 0) goto LAB_0cb99ac8;
    bVar26 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar24 = lVar20 + 9;
    if (bVar26) {
      lVar24 = *(long *)(lVar20 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar26) {
      uVar23 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0cbc0650(&uStack_460,lVar15,lVar24,uVar23);
  }
  else {
    puVar18 = (undefined *)plVar19[2];
    if (*(int *)(puVar18 + 0x60) == -0x2b3da790) goto LAB_0cb99a8b;
LAB_0cb99ac8:
    func_0x0cbc0650(&uStack_460,lVar15,&UNK_01409d6c,0x12);
  }
  if ((char)puStack_430 == '\0') {
    uStack_438 = (undefined *)0x1e1bc4d500000004;
    if (DAT_0f6fbde8 == '\0') {
      iVar14 = func_0x04108328(&DAT_0f6fbde8);
      if (iVar14 != 0) {
        func_0x0cbc0340();
        func_0x0410844d(&DAT_0f6fbde8);
      }
    }
    puStack_3f8 = (undefined *)CONCAT44(puStack_3f8._4_4_,uStack_438._4_4_);
    ppuStack_3f0 = (undefined8 **)0x0;
    uStack_3e8 = (long *)((ulong)uStack_3e8 & 0xffffffff00000000);
    uStack_3e0 = (long *)0x1;
    puStack_3d8 = &SUB_048aead0;
    puStack_3d0 = &UNK_06063e30;
    puStack_3c8 = &UNK_0cbc1160;
    lStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3af = 0;
    uStack_3a9 = 0;
    lStack_3a8 = 0;
    func_0x049057f0(&uStack_458,&puStack_3f8);
    func_0x048aea50(&puStack_3f8);
    uStack_278 = (undefined4)uStack_448;
    uStack_274 = uStack_448._4_4_;
    uStack_270 = (int)uStack_440;
    uStack_26c = uStack_440._4_4_;
    uStack_288 = (undefined4)uStack_458;
    uStack_284 = uStack_458._4_4_;
    uStack_280 = (undefined4)uStack_450;
    uStack_27c = uStack_450._4_4_;
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar16 = &UNK_0ef474e0;
    if (DAT_0f551bc8 == '\0') {
      iVar14 = func_0x04108328(&DAT_0f551bc8);
      if (iVar14 != 0) {
        FUN_04905be0(0xf551bb0);
        func_0x0410844d(&DAT_0f551bc8);
      }
    }
    puStack_3f8 = (undefined *)CONCAT44(puStack_3f8._4_4_,_DAT_0f551bb4);
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar19 == (long *)0x0) {
      FUN_0eec74c0(0x30,0);
    }
    plVar19[1] = 0;
    plVar19[2] = 0;
    *plVar19 = (long)&UNK_0ef46c48;
    ppuStack_3f0 = (undefined8 **)(plVar19 + 3);
    plVar19[3] = (long)puVar16;
    plVar19[4] = 0;
    *(undefined1 *)(plVar19 + 5) = 0xff;
    uStack_248 = 0;
    uStack_240 = (long *)0x0;
    uStack_3e8 = plVar19;
    func_0x048afd20(&uStack_288,&puStack_3f8);
    plVar19 = uStack_3e8;
    if (uStack_3e8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_3e8 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*uStack_3e8 + 0x10))(uStack_3e8);
        func_0x0412c2d0(plVar19);
      }
    }
    plVar19 = uStack_240;
    if (uStack_240 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_240 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*uStack_240 + 0x10))(uStack_240);
        func_0x0412c2d0(plVar19);
      }
    }
  }
  if (DAT_0f6fbb18 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f6fbb18);
    if (iVar14 != 0) {
      func_0x0cbac730();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fba98,0xf53dab8);
      func_0x0410844d(&DAT_0f6fbb18);
    }
  }
  plVar19 = (long *)(*(long *)(lVar15 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f6fba98 + 4)) * 8);
  do {
    lVar20 = *plVar19;
    if (lVar20 == -1) goto LAB_0cb99d30;
    plVar19 = (long *)(*(long *)(lVar15 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f6fba98 + 4));
  if (plVar19 == *(long **)(lVar15 + 0x38)) {
LAB_0cb99d30:
    puVar18 = &DAT_0f6fba98;
    if (iRam000000000f6fbaf8 != -0x2b3da790) goto LAB_0cb99d9e;
LAB_0cb99d5b:
    lVar20 = *(long *)(puVar18 + 0x68);
    if (lVar20 == 0) goto LAB_0cb99d9e;
    bVar26 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar24 = lVar20 + 9;
    if (bVar26) {
      lVar24 = *(long *)(lVar20 + 0x18);
    }
    uVar23 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar26) {
      uVar23 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0cbc1420(&uStack_288,lVar15,lVar24,uVar23);
    uStack_58 = uStack_268;
    uStack_54 = uStack_264;
    iStack_50 = iStack_260;
    uStack_4c = uStack_25c;
  }
  else {
    puVar18 = (undefined *)plVar19[2];
    if (*(int *)(puVar18 + 0x60) == -0x2b3da790) goto LAB_0cb99d5b;
LAB_0cb99d9e:
    func_0x0cbc1420(&uStack_288,lVar15,&UNK_0129bebf,0x11);
    uStack_58 = uStack_268;
    uStack_54 = uStack_264;
    iStack_50 = iStack_260;
    uStack_4c = uStack_25c;
  }
  if (cStack_258 != '\0') goto LAB_0cb9a697;
  uStack_78 = uStack_288;
  uStack_74 = uStack_284;
  uStack_70 = uStack_280;
  uStack_6c = uStack_27c;
  uStack_68 = uStack_278;
  uStack_64 = uStack_274;
  uStack_60 = uStack_270;
  uStack_5c = uStack_26c;
  cStack_48 = cStack_258;
  func_0x0cbc1f80(&puStack_3f8,&uStack_78,&UNK_0129beb0,0xe,1);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0f3f4bd0;
  if (uStack_3e0 != (long *)0x0) {
    lVar20 = *uStack_3e0;
    uStack_3e0 = plVar19;
    (**(code **)(lVar20 + 8))();
    plVar19 = uStack_3e0;
  }
  uStack_3e0 = plVar19;
  uStack_460 = (undefined4)uStack_3e8;
  uStack_458 = (long *)0x0;
  uStack_450 = (long *)((ulong)uStack_450 & 0xffffffff00000000);
  uStack_448 = 1;
  uStack_440 = 0;
  uStack_438 = &UNK_0cbc2730;
  puStack_430 = &SUB_048b06d0;
  puStack_428 = &UNK_0cbc0170;
  puStack_420 = &UNK_0cbc27f0;
  puStack_418 = &UNK_0cbc2950;
  uStack_410 = 0;
  uStack_408 = 0;
  plStack_400 = (long *)0x0;
  FUN_048b05a0(ppuStack_3f0,&uStack_460);
  plVar19 = plStack_400;
  if (plStack_400 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_400 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_400 + 0x10))(plStack_400);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x0cbc2240(&puStack_3f8);
  cStack_148 = cStack_48;
  uStack_158 = uStack_58;
  uStack_154 = uStack_54;
  iStack_150 = iStack_50;
  uStack_14c = uStack_4c;
  uStack_168 = uStack_68;
  uStack_164 = uStack_64;
  uStack_160 = uStack_60;
  uStack_15c = uStack_5c;
  uStack_178 = CONCAT44(uStack_74,uStack_78);
  uStack_170 = (long *)CONCAT44(uStack_6c,uStack_70);
  func_0x048b0bc0(&uStack_3e0);
  lStack_1f8 = uStack_178;
  plStack_1f0 = uStack_170;
  uStack_1e8 = CONCAT44(uStack_164,uStack_168);
  uStack_1e0 = uStack_160;
  uStack_1dc = uStack_15c;
  uStack_1d8 = uStack_158;
  uStack_1d4 = uStack_154;
  iStack_1d0 = iStack_150;
  uStack_1cc = uStack_14c;
  uStack_1c8 = CONCAT71(uStack_147,cStack_148);
  func_0x0cbc1f80(&puStack_3f8,&lStack_1f8,&UNK_0142e575,9,1);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0ef44b00;
  if (uStack_3e0 != (long *)0x0) {
    lVar20 = *uStack_3e0;
    uStack_3e0 = plVar19;
    (**(code **)(lVar20 + 8))();
    plVar19 = uStack_3e0;
  }
  uStack_3e0 = plVar19;
  uStack_460 = (undefined4)uStack_3e8;
  uStack_458 = (long *)0x0;
  uStack_450 = (long *)((ulong)uStack_450 & 0xffffffff00000000);
  uStack_448 = 1;
  uStack_440 = 0;
  uStack_438 = &UNK_04905970;
  puStack_430 = &SUB_048b06d0;
  puStack_428 = &SUB_048b2190;
  puStack_420 = &UNK_0cbc2dd0;
  puStack_418 = &UNK_0cbc31e0;
  uStack_410 = 0;
  uStack_408 = 0;
  plStack_400 = (long *)0x0;
  FUN_048b05a0(ppuStack_3f0,&uStack_460);
  plVar19 = plStack_400;
  if (plStack_400 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_400 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_400 + 0x10))(plStack_400);
      func_0x0412c2d0(plVar19);
    }
  }
  iVar14 = *(int *)((long)ppuStack_3f0 + 0x1c);
  if (iVar14 == 2) {
    piVar21 = *(int **)(ppuStack_3f0[2][0xf] + 0x60);
    iVar14 = *piVar21;
    while (iVar14 != *(int *)(ppuStack_3f0 + 3)) {
      piVar21 = piVar21 + 0x16;
      iVar14 = *piVar21;
    }
    puVar16 = *(undefined8 **)(piVar21 + 0xc);
    while (puVar16 != ppuStack_3f0[1]) {
      piVar21 = *(int **)(piVar21 + 0xe);
      puVar16 = *(undefined8 **)(piVar21 + 0xc);
    }
    *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 4;
  }
  else if (iVar14 == 1) {
    piVar21 = *(int **)(ppuStack_3f0[2][0xf] + 0x48);
    iVar14 = *piVar21;
    while (iVar14 != *(int *)(ppuStack_3f0 + 3)) {
      piVar21 = piVar21 + 0x1a;
      iVar14 = *piVar21;
    }
    *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 4;
  }
  else if (iVar14 == 0) {
    *(uint *)(ppuStack_3f0[2] + 3) = *(uint *)(ppuStack_3f0[2] + 3) | 0x40000;
  }
  func_0x0cbc2240(&puStack_3f8);
  uStack_218 = CONCAT71(uStack_218._1_7_,(undefined1)uStack_1c8);
  uStack_228 = uStack_1d8;
  uStack_224 = uStack_1d4;
  uStack_220 = CONCAT44(uStack_1cc,iStack_1d0);
  uStack_238 = (undefined4)uStack_1e8;
  uStack_234 = uStack_1e8._4_4_;
  uStack_230 = uStack_1e0;
  uStack_22c = uStack_1dc;
  uStack_248 = lStack_1f8;
  uStack_240 = plStack_1f0;
  func_0x048b0bc0(&uStack_3e0);
  func_0x0cbc1a10(&puStack_3f8,uStack_248 + 0x18);
  if (uStack_3e0._4_4_ == 2) {
    piVar21 = *(int **)(uStack_3e8[0xf] + 0x60);
    iVar14 = *piVar21;
    while (iVar14 != (int)uStack_3e0) {
      piVar21 = piVar21 + 0x16;
      iVar14 = *piVar21;
    }
    ppuVar4 = *(undefined8 ***)(piVar21 + 0xc);
    while (ppuVar4 != ppuStack_3f0) {
      piVar21 = *(int **)(piVar21 + 0xe);
      ppuVar4 = *(undefined8 ***)(piVar21 + 0xc);
    }
LAB_0cb9a29a:
    *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 4;
  }
  else {
    if (uStack_3e0._4_4_ == 1) {
      piVar21 = *(int **)(uStack_3e8[0xf] + 0x48);
      iVar14 = *piVar21;
      while (iVar14 != (int)uStack_3e0) {
        piVar21 = piVar21 + 0x1a;
        iVar14 = *piVar21;
      }
      goto LAB_0cb9a29a;
    }
    if (uStack_3e0._4_4_ == 0) {
      *(uint *)(uStack_3e8 + 3) = *(uint *)(uStack_3e8 + 3) | 0x40000;
    }
  }
  func_0x0cbc1f80(&puStack_3f8,&uStack_248,&UNK_0143f0ce,5,0x10);
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar19 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar19 = (long)&UNK_0f012438;
  if (uStack_3e0 != (long *)0x0) {
    lVar20 = *uStack_3e0;
    uStack_3e0 = plVar19;
    (**(code **)(lVar20 + 8))();
    plVar19 = uStack_3e0;
  }
  uStack_3e0 = plVar19;
  uStack_460 = (undefined4)uStack_3e8;
  uStack_458 = (long *)0x0;
  uStack_450 = (long *)((ulong)uStack_450 & 0xffffffff00000000);
  uStack_448 = 1;
  uStack_440 = 0;
  uStack_438 = &UNK_05fc5e00;
  puStack_430 = &SUB_048b06d0;
  puStack_428 = &UNK_05dcda00;
  puStack_420 = &UNK_0cbc35a0;
  puStack_418 = &UNK_0cbc3700;
  uStack_410 = 0;
  uStack_408 = 0;
  plStack_400 = (long *)0x0;
  FUN_048b05a0(ppuStack_3f0,&uStack_460);
  plVar19 = plStack_400;
  if (plStack_400 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_400 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_400 + 0x10))(plStack_400);
      func_0x0412c2d0(plVar19);
    }
  }
  func_0x0cbc2240(&puStack_3f8);
  lVar20 = uStack_248;
  iVar14 = (int)uStack_220;
  uVar7 = uStack_220._4_4_;
  func_0x048b0bc0(&uStack_3e0);
  uStack_460 = 0;
  uStack_45c = 0;
  if (iVar14 == 4) {
    if (DAT_0f6fbb18 == '\0') {
      iVar14 = func_0x04108328(&DAT_0f6fbb18);
      if (iVar14 != 0) {
        func_0x0cbac730();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fba98,0xf53dab8);
        func_0x0410844d(&DAT_0f6fbb18);
      }
    }
    plVar19 = (long *)(*(long *)(lVar20 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar20 + 0x20) - *(long *)(lVar20 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f6fba98 + 4)) * 8);
    do {
      lVar24 = *plVar19;
      if (lVar24 == -1) goto LAB_0cb9a4e8;
      plVar19 = (long *)(*(long *)(lVar20 + 0x30) + lVar24 * 0x18);
    } while (*(uint *)(*(long *)(lVar20 + 0x30) + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f6fba98 + 4)
            );
    if (plVar19 == *(long **)(lVar20 + 0x38)) {
LAB_0cb9a4e8:
      puVar18 = &DAT_0f6fba98;
    }
    else {
      puVar18 = (undefined *)plVar19[2];
    }
    puVar18 = (undefined *)func_0x048b1040(lVar20 + 0x18,puVar18,uVar7,1);
    if (puVar18 == (undefined *)0x0) {
      puStack_3f8 = (undefined *)0x0;
      ppuStack_3f0 = (undefined8 **)0x0;
      func_0x048b10d0(&puStack_3f8);
      puVar22 = *(undefined **)(puStack_3f8 + 0x38);
      puVar18 = puStack_3f8;
      if (puVar22 == (undefined *)0x0) goto LAB_0cb9a5bc;
LAB_0cb9a5d8:
      do {
        puVar18 = puVar22;
        puVar22 = *(undefined **)(puVar18 + 0x38);
        if (*(undefined **)(puVar18 + 0x38) == (undefined *)0x0) {
          puStack_3f8 = (undefined *)0x0;
          ppuStack_3f0 = (undefined8 **)0x0;
          func_0x048b10d0(&puStack_3f8);
          puVar22 = puStack_3f8;
        }
      } while (puVar22 != (undefined *)0x0);
    }
    else {
      puVar22 = *(undefined **)(puVar18 + 0x38);
      if (*(undefined **)(puVar18 + 0x38) != (undefined *)0x0) goto LAB_0cb9a5d8;
LAB_0cb9a5bc:
      puStack_3f8 = (undefined *)0x0;
      ppuStack_3f0 = (undefined8 **)0x0;
      func_0x048b10d0(&puStack_3f8);
      puVar22 = puStack_3f8;
      if (puStack_3f8 != (undefined *)0x0) goto LAB_0cb9a5d8;
    }
    lVar20 = *(long *)(puVar18 + 0x48);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar16 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x40,0);
    }
  }
  else {
    if (iVar14 != 1) goto LAB_0cb9a697;
    if (DAT_0f6fbb18 == '\0') {
      iVar14 = func_0x04108328(&DAT_0f6fbb18);
      if (iVar14 != 0) {
        func_0x0cbac730();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fba98,0xf53dab8);
        func_0x0410844d(&DAT_0f6fbb18);
      }
    }
    plVar19 = (long *)(*(long *)(lVar20 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar20 + 0x20) - *(long *)(lVar20 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f6fba98 + 4)) * 8);
    do {
      lVar24 = *plVar19;
      if (lVar24 == -1) goto LAB_0cb9a468;
      plVar19 = (long *)(*(long *)(lVar20 + 0x30) + lVar24 * 0x18);
    } while (*(uint *)(*(long *)(lVar20 + 0x30) + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f6fba98 + 4)
            );
    if (plVar19 == *(long **)(lVar20 + 0x38)) {
LAB_0cb9a468:
      puVar18 = &DAT_0f6fba98;
    }
    else {
      puVar18 = (undefined *)plVar19[2];
    }
    puVar18 = (undefined *)func_0x048b0c90(lVar20 + 0x18,puVar18,uVar7,1);
    if (puVar18 == (undefined *)0x0) {
      puStack_3f8 = (undefined *)0x0;
      ppuStack_3f0 = (undefined8 **)0x0;
      FUN_048b0d20(&puStack_3f8);
      puVar18 = puStack_3f8;
    }
    lVar20 = *(long *)(puVar18 + 0x58);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar16 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x40,0);
    }
  }
  puVar16[1] = 0xffffffffffffffff;
  puVar16[2] = 0;
  *(undefined1 *)(puVar16 + 3) = 0xff;
  *puVar16 = &UNK_0f0edc68;
  uVar9 = _UNK_014e658c;
  uVar8 = _UNK_014e6588;
  uVar7 = _UNK_014e6584;
  *(undefined4 *)(puVar16 + 4) = _DAT_014e6580;
  *(undefined4 *)((long)puVar16 + 0x24) = uVar7;
  *(undefined4 *)(puVar16 + 5) = uVar8;
  *(undefined4 *)((long)puVar16 + 0x2c) = uVar9;
  puVar16[6] = 0;
  *(undefined2 *)(puVar16 + 7) = 0;
  *(undefined4 *)((long)puVar16 + 0x3a) = uStack_460;
  *(undefined2 *)((long)puVar16 + 0x3e) = uStack_45c;
  plVar19 = *(long **)(lVar20 + 8);
  *(undefined8 **)(lVar20 + 8) = puVar16;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x28))();
  }
LAB_0cb9a697:
  func_0x0cba1f10(&uStack_288,lVar15);
  puVar16 = uStack_2c0;
  puVar17 = uStack_2c8;
  if (cStack_258 == '\0') {
    func_0x0cba4ba0(&puStack_3f8,&uStack_288,&UNK_01d4a639,0x15);
    plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar19 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar19 = (long)&UNK_0f3f30c8;
    if (uStack_3e0 != (long *)0x0) {
      lVar15 = *uStack_3e0;
      uStack_3e0 = plVar19;
      (**(code **)(lVar15 + 8))();
      plVar19 = uStack_3e0;
    }
    uStack_3e0 = plVar19;
    uStack_460 = (undefined4)uStack_3e8;
    uStack_458 = (long *)0x0;
    uStack_450 = (long *)((ulong)uStack_450 & 0xffffffff00000000);
    uStack_448 = 1;
    uStack_440 = 0;
    uStack_438 = &UNK_0cbad100;
    puStack_430 = &SUB_048b06d0;
    puStack_428 = &UNK_0cbacd70;
    puStack_420 = &UNK_0cbad1c0;
    puStack_418 = &UNK_0cbad3c0;
    uStack_410 = 0;
    uStack_408 = 0;
    plStack_400 = (long *)0x0;
    FUN_048b05a0(ppuStack_3f0,&uStack_460);
    plVar19 = plStack_400;
    if (plStack_400 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_400 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_400 + 0x10))(plStack_400);
        func_0x0412c2d0(plVar19);
      }
    }
    iVar14 = *(int *)((long)ppuStack_3f0 + 0x1c);
    if (iVar14 == 2) {
      piVar21 = *(int **)(ppuStack_3f0[2][0xf] + 0x60);
      iVar14 = *piVar21;
      while (iVar14 != *(int *)(ppuStack_3f0 + 3)) {
        piVar21 = piVar21 + 0x16;
        iVar14 = *piVar21;
      }
      puVar16 = *(undefined8 **)(piVar21 + 0xc);
      while (puVar16 != ppuStack_3f0[1]) {
        piVar21 = *(int **)(piVar21 + 0xe);
        puVar16 = *(undefined8 **)(piVar21 + 0xc);
      }
      *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 4;
    }
    else if (iVar14 == 1) {
      piVar21 = *(int **)(ppuStack_3f0[2][0xf] + 0x48);
      iVar14 = *piVar21;
      while (iVar14 != *(int *)(ppuStack_3f0 + 3)) {
        piVar21 = piVar21 + 0x1a;
        iVar14 = *piVar21;
      }
      *(byte *)((long)piVar21 + 0x12) = *(byte *)((long)piVar21 + 0x12) | 4;
    }
    else if (iVar14 == 0) {
      *(uint *)(ppuStack_3f0[2] + 3) = *(uint *)(ppuStack_3f0[2] + 3) | 0x40000;
    }
    func_0x0cba4ee0(&puStack_3f8);
    func_0x048b0bc0(&uStack_3e0);
    puVar16 = uStack_2c0;
    puVar17 = uStack_2c8;
  }
  puVar12 = puStack_2d0;
  puVar18 = puStack_2d8;
  puStack_328 = puStack_2d8;
  plStack_320 = puStack_2d0;
  uStack_308 = uStack_308 & 0xffffff00;
  bVar27 = cStack_2a0 == '\x01';
  if ((bool)bVar27) {
    uStack_308 = uStack_2b8;
    uStack_304 = uStack_2b4;
    uStack_300 = uStack_2b0;
    uStack_2b0 = 0;
    uStack_2f8 = CONCAT71(uStack_2a7,cStack_2a8);
  }
  puStack_318 = puVar17;
  puStack_310 = puVar16;
  bStack_2f0 = bVar27;
  uStack_2c0 = puVar16;
  uStack_2c8 = puVar17;
  lVar20 = func_0x0cbb7a90(lStack_200,&UNK_01d4a638);
  *(undefined **)(lVar20 + 0x28) = puVar18;
  lVar15 = *(long *)(lVar20 + 0x30);
  if (lVar15 != 0) {
    *(long *)(lVar20 + 0x38) = lVar15;
    func_0x0412a280(lVar15,*(long *)(lVar20 + 0x40) - lVar15);
    *(undefined8 *)(lVar20 + 0x30) = 0;
    *(undefined8 *)(lVar20 + 0x38) = 0;
    *(undefined8 *)(lVar20 + 0x40) = 0;
    bVar27 = bStack_2f0;
  }
  puVar11 = puStack_2e0;
  *(undefined8 **)(lVar20 + 0x30) = puVar12;
  *(undefined8 **)(lVar20 + 0x38) = puVar17;
  *(undefined8 **)(lVar20 + 0x40) = puVar16;
  plStack_320 = (long *)0x0;
  puStack_318 = (undefined8 *)0x0;
  puStack_310 = (undefined8 *)0x0;
  bVar3 = *(byte *)(lVar20 + 0x60);
  if (bVar3 == bVar27) {
    if (bVar3 != 0) {
      uVar23 = *(ulong *)(lVar20 + 0x50);
      uVar5 = *(ulong *)(lVar20 + 0x58);
      *(uint *)(lVar20 + 0x48) = uStack_308;
      *(undefined4 *)(lVar20 + 0x4c) = uStack_304;
      *(undefined4 *)(lVar20 + 0x50) = (undefined4)uStack_300;
      *(undefined4 *)(lVar20 + 0x54) = uStack_300._4_4_;
      *(ulong *)(lVar20 + 0x58) = uStack_2f8;
      uStack_300 = uVar23;
      uStack_2f8 = uVar5;
    }
  }
  else if (bVar3 == 0) {
    *(uint *)(lVar20 + 0x48) = uStack_308;
    *(undefined4 *)(lVar20 + 0x4c) = uStack_304;
    *(undefined4 *)(lVar20 + 0x50) = (undefined4)uStack_300;
    *(undefined4 *)(lVar20 + 0x54) = uStack_300._4_4_;
    uStack_300 = 0;
    *(ulong *)(lVar20 + 0x58) = uStack_2f8;
    uStack_2f8 = 0;
    *(undefined1 *)(lVar20 + 0x60) = 1;
  }
  else {
    if ((*(ulong *)(lVar20 + 0x58) & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(*(ulong *)(lVar20 + 0x58) & 0xff00ffffffffffff) - 8);
    }
    *(undefined8 *)(lVar20 + 0x58) = 0;
    if ((*(ulong *)(lVar20 + 0x50) & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(*(ulong *)(lVar20 + 0x50) & 0xff00ffffffffffff) - 8);
    }
    *(undefined8 *)(lVar20 + 0x50) = 0;
    *(undefined1 *)(lVar20 + 0x60) = 0;
  }
  if ((bVar27 & 1) != 0) {
    if ((uStack_2f8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2f8 & 0xff00ffffffffffff) - 8);
    }
    uStack_2f8 = 0;
    if ((uStack_300 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_300 & 0xff00ffffffffffff) - 8);
    }
    uStack_300 = 0;
  }
  if ((bStack_f8 & 1) != 0) {
    if (((ulong)puStack_100 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_100 & 0xff00ffffffffffff) - 8);
    }
    puStack_100 = (undefined *)0x0;
    if (((ulong)puStack_108 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_108 & 0xff00ffffffffffff) - 8);
    }
    puStack_108 = (undefined *)0x0;
  }
  if ((uStack_128 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_128 & 0xff00ffffffffffff) - 8);
  }
  uStack_128 = 0;
  if ((uStack_130 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_130 & 0xff00ffffffffffff) - 8);
  }
  uStack_130 = 0;
  if ((uStack_1b0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1b0 & 0xff00ffffffffffff) - 8);
  }
  uStack_1b0 = 0;
  if ((uStack_118 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_118 & 0xff00ffffffffffff) - 8);
  }
  func_0x0412a280(puVar11,8);
  return;
}


