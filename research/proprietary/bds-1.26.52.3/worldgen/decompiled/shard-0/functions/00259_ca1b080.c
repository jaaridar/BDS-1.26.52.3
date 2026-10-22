/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb1b080 (ELF vaddr 0xca1b080)
 * Label: caller-of-callee
 * Body:  [[0cb1b080, 0cb1b7c8] [0cb1b7d0, 0cb1c6ad] [0cb1c6b0, 0cb1d33a] [0cb1d340, 0cb1df4d]]
 * Ghidra: FUN_0cb1b080
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cb1b080(long param_1)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined *puVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined7 *puVar18;
  long lVar19;
  int *piVar20;
  undefined7 *puVar21;
  ulong uVar22;
  uint uVar23;
  undefined *puVar24;
  ulong uVar25;
  ulong uVar26;
  undefined1 *puVar27;
  bool bVar28;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined *puStack_3d0;
  undefined1 *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  ulong uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  ulong uStack_358;
  undefined *puStack_350;
  undefined1 *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  long *plStack_328;
  ulong uStack_320;
  long *plStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  byte bStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined2 uStack_2ef;
  uint5 uStack_2ed;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  undefined *puStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  int iStack_248;
  undefined4 uStack_244;
  char cStack_240;
  undefined4 uStack_23f;
  undefined3 uStack_23b;
  byte bStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined2 uStack_22f;
  undefined1 uStack_22d;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  char cStack_208;
  long lStack_168;
  ulong uStack_160;
  ulong uStack_158;
  byte bStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined2 uStack_147;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  char cStack_108;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long *plStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0d8a4080();
  func_0x0e20e9c0(param_1);
  func_0x0d908940(param_1);
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  uVar4 = _UNK_01409bdd;
  *(ulong *)((long)puVar13 + 0x6a) = CONCAT26(_UNK_01409bdb,_DAT_01409bd5);
  *(undefined8 *)((long)puVar13 + 0x72) = uVar4;
  uVar4 = CONCAT62(_DAT_01409bd5,_UNK_01409bd3);
  *(undefined8 *)(puVar13 + 0x18) = _DAT_01409bcb;
  *(undefined8 *)(puVar13 + 0x1a) = uVar4;
  uVar4 = _UNK_01409bc3;
  *(undefined8 *)(puVar13 + 0x14) = _DAT_01409bbb;
  *(undefined8 *)(puVar13 + 0x16) = uVar4;
  uVar4 = _UNK_01409bb3;
  *(undefined8 *)(puVar13 + 0x10) = _DAT_01409bab;
  *(undefined8 *)(puVar13 + 0x12) = uVar4;
  uVar4 = _UNK_01409ba3;
  *(undefined8 *)(puVar13 + 0xc) = _DAT_01409b9b;
  *(undefined8 *)(puVar13 + 0xe) = uVar4;
  uVar4 = _UNK_01409b93;
  *(undefined8 *)(puVar13 + 8) = _DAT_01409b8b;
  *(undefined8 *)(puVar13 + 10) = uVar4;
  uVar4 = _UNK_01409b83;
  *(undefined8 *)(puVar13 + 4) = _DAT_01409b7b;
  *(undefined8 *)(puVar13 + 6) = uVar4;
  uVar8 = _UNK_01409b77;
  uVar7 = _UNK_01409b73;
  uVar6 = _UNK_01409b6f;
  *puVar13 = _DAT_01409b6b;
  puVar13[1] = uVar6;
  puVar13[2] = uVar7;
  puVar13[3] = uVar8;
  *(undefined1 *)((long)puVar13 + 0x7a) = 0;
  func_0x0cb3f830(param_1);
  if ((DAT_0f6fa6b8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6fa6b8), iVar11 != 0)) {
    func_0x0cb414c0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fa638,0xf53dab8);
    func_0x0410844d(&DAT_0f6fa6b8);
  }
  lStack_b8 = param_1 + 0x18;
  plVar15 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6fa638 + 4)) * 8);
  do {
    lVar16 = *plVar15;
    if (lVar16 == -1) goto LAB_0cb1b1a0;
    plVar15 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f6fa638 + 4))
  ;
  if (plVar15 == *(long **)(param_1 + 0x38)) {
LAB_0cb1b1a0:
    puVar14 = &DAT_0f6fa638;
    if (iRam000000000f6fa698 != -0x2b3da790) goto LAB_0cb1b20d;
LAB_0cb1b1cb:
    lVar16 = *(long *)(puVar14 + 0x68);
    if (lVar16 == 0) goto LAB_0cb1b20d;
    bVar28 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar19 = lVar16 + 9;
    if (bVar28) {
      lVar19 = *(long *)(lVar16 + 0x18);
    }
    uVar25 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar28) {
      uVar25 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0cb421e0(&puStack_270,param_1,lVar19,uVar25);
  }
  else {
    puVar14 = (undefined *)plVar15[2];
    if (*(int *)(puVar14 + 0x60) == -0x2b3da790) goto LAB_0cb1b1cb;
LAB_0cb1b20d:
    func_0x0cb421e0(&puStack_270,param_1,0,0);
  }
  if (cStack_240 == '\0') {
    uStack_3a8._4_4_ = (uint)((ulong)uStack_3a8 >> 0x20);
    uStack_3e8._4_4_ = (uint)(uStack_3e8 >> 0x20);
    uStack_3f8._4_4_ = (undefined4)((ulong)uStack_3f8 >> 0x20);
    func_0x0cb42d40(&bStack_238,&puStack_270,&UNK_013762e9,10);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0ef44b00;
    if (uStack_220 != (long *)0x0) {
      lVar16 = *uStack_220;
      uStack_220 = plVar15;
      (**(code **)(lVar16 + 8))();
      plVar15 = uStack_220;
    }
    uStack_220 = plVar15;
    uStack_3f8 = (undefined *)CONCAT44(uStack_3f8._4_4_,uStack_228);
    uStack_3f0 = (undefined *)0x0;
    uStack_3e8 = (ulong)uStack_3e8._4_4_ << 0x20;
    uStack_3e0 = 1;
    uStack_3d8 = 0;
    puStack_3d0 = &UNK_048b3f30;
    puStack_3c8 = &SUB_048b06d0;
    puStack_3c0 = &SUB_048b2190;
    puStack_3b8 = &UNK_0cb432f0;
    puStack_3b0 = &UNK_0cb434b0;
    uStack_3a8 = (long *)((ulong)uStack_3a8._4_4_ << 0x20);
    uStack_3a0 = 0;
    uStack_398 = (long *)0x0;
    func_0x048b05a0(CONCAT44(uStack_22c,CONCAT13(uStack_22d,CONCAT21(uStack_22f,uStack_230))),
                    &uStack_3f8);
    plVar15 = uStack_398;
    if (uStack_398 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_398 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_398 + 0x10))(uStack_398);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x0cb42ff0(&bStack_238);
    cVar9 = cStack_240;
    uVar6 = uStack_244;
    iVar11 = iStack_248;
    puVar14 = puStack_270;
    uStack_f8 = CONCAT44(uStack_264,uStack_268);
    uStack_f0 = CONCAT44(uStack_25c,uStack_260);
    uStack_e8 = uStack_258;
    uStack_e4 = uStack_254;
    uStack_e0 = uStack_250;
    uStack_dc = uStack_24c;
    FUN_048b0bc0(&uStack_220);
    uStack_358 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    uStack_320 = 0;
    plStack_318 = (long *)0x0;
    puStack_330 = (undefined *)0x0;
    plStack_328 = (long *)0x0;
    puStack_340 = (undefined *)0x0;
    puStack_338 = (undefined *)0x0;
    puStack_350 = (undefined *)0x0;
    puStack_348 = (undefined1 *)0x0;
    uStack_300 = 0;
    uStack_370 = (undefined *)0xffffffffffffffff;
    uStack_368 = 0;
    uStack_360 = 0xff;
    puStack_378 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_358);
    puStack_350 = (undefined *)func_0x041681f0(&uStack_358,0xf547a30);
    puStack_348 = (undefined1 *)func_0x041681f0(&uStack_358,0xf547770);
    puStack_340 = (undefined *)0x0;
    puStack_338 = (undefined *)0x0;
    puStack_330 = (undefined *)0x0;
    plStack_328 = (long *)0x0;
    uStack_320 = 0;
    plStack_318 = (long *)0x0;
    uStack_310 = 0;
    uStack_308 = 0;
    uStack_300 = 0;
    bStack_2f8 = 0x12;
    uStack_2f7 = 0x775c3a2b775c5e;
    uStack_2f0 = 0x2b;
    uStack_2ef = 0x24;
    func_0x0ed60210(&puStack_378,&bStack_2f8,0);
    uStack_3e0 = CONCAT71(uStack_3e0._1_7_,(undefined1)uStack_360);
    uStack_3f0 = uStack_370;
    uStack_3e8 = uStack_368;
    uStack_3f8 = &UNK_0f4e3c70;
    func_0x04167a20(&uStack_3d8,&uStack_358);
    puStack_3d0 = puStack_350;
    puStack_3c8 = puStack_348;
    puStack_3c0 = puStack_340;
    puStack_3b8 = puStack_338;
    puStack_3b0 = puStack_330;
    uStack_3a8 = plStack_328;
    if (plStack_328 != (long *)0x0) {
      LOCK();
      plStack_328[1] = plStack_328[1] + 1;
      UNLOCK();
    }
    uStack_3a0 = uStack_320;
    if (((ulong)plStack_318 & 1) == 0) {
      uStack_388 = uStack_308;
      uStack_398 = plStack_318;
      uStack_390 = uStack_310;
    }
    else {
      FUN_0412e5e0(&uStack_398,uStack_308,uStack_310);
    }
    uStack_380 = uStack_300;
    if (iVar11 == 4) {
      if ((DAT_0f6fa6b8 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6fa6b8), iVar12 != 0)) {
        func_0x0cb414c0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fa638,0xf53dab8);
        func_0x0410844d(&DAT_0f6fa6b8);
      }
      plVar15 = (long *)(*(long *)(puVar14 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(puVar14 + 0x20) - *(long *)(puVar14 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f6fa638 + 4)) * 8);
      do {
        lVar16 = *plVar15;
        if (lVar16 == -1) goto LAB_0cb1b69d;
        plVar15 = (long *)(*(long *)(puVar14 + 0x30) + lVar16 * 0x18);
      } while (*(uint *)(*(long *)(puVar14 + 0x30) + 8 + lVar16 * 0x18) !=
               *(uint *)(_DAT_0f6fa638 + 4));
      if (plVar15 == *(long **)(puVar14 + 0x38)) {
LAB_0cb1b69d:
        puVar24 = &DAT_0f6fa638;
      }
      else {
        puVar24 = (undefined *)plVar15[2];
      }
      lVar16 = func_0x048b1040(puVar14 + 0x18,puVar24,uVar6,1);
      if (lVar16 == 0) {
        bStack_238 = 0;
        uStack_237 = 0;
        uStack_230 = 0;
        uStack_22f = 0;
        uStack_22d = 0;
        uStack_22c = 0;
        func_0x048b10d0(&bStack_238);
        lVar16 = CONCAT71(uStack_237,bStack_238);
        lVar19 = *(long *)(lVar16 + 0x38);
        if (lVar19 == 0) goto LAB_0cb1b79a;
LAB_0cb1b7bf:
        do {
          lVar16 = lVar19;
          lVar19 = *(long *)(lVar16 + 0x38);
          if (lVar19 == 0) {
            bStack_238 = 0;
            uStack_237 = 0;
            uStack_230 = 0;
            uStack_22f = 0;
            uStack_22d = 0;
            uStack_22c = 0;
            func_0x048b10d0(&bStack_238);
            lVar19 = CONCAT71(uStack_237,bStack_238);
          }
        } while (lVar19 != 0);
      }
      else {
        lVar19 = *(long *)(lVar16 + 0x38);
        if (lVar19 != 0) goto LAB_0cb1b7bf;
LAB_0cb1b79a:
        bStack_238 = 0;
        uStack_237 = 0;
        uStack_230 = 0;
        uStack_22f = 0;
        uStack_22d = 0;
        uStack_22c = 0;
        func_0x048b10d0(&bStack_238);
        lVar19 = CONCAT71(uStack_237,bStack_238);
        if (lVar19 != 0) goto LAB_0cb1b7bf;
      }
      lVar16 = *(long *)(lVar16 + 0x48);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
LAB_0cb1b829:
      *(undefined1 *)(puVar17 + 3) = (undefined1)uStack_3e0;
      *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_3f0;
      *(undefined4 *)((long)puVar17 + 0xc) = uStack_3f0._4_4_;
      *(undefined4 *)(puVar17 + 2) = (undefined4)uStack_3e8;
      *(uint *)((long)puVar17 + 0x14) = uStack_3e8._4_4_;
      *puVar17 = &UNK_0f4e3c70;
      func_0x04167a20(puVar17 + 4,&uStack_3d8);
      puVar17[5] = puStack_3d0;
      puVar17[6] = puStack_3c8;
      puVar17[7] = puStack_3c0;
      puVar17[8] = puStack_3b8;
      puVar17[9] = puStack_3b0;
      puVar17[10] = uStack_3a8;
      puStack_3b0 = (undefined *)0x0;
      uStack_3a8 = (long *)0x0;
      puVar17[0xb] = uStack_3a0;
      puVar17[0xe] = uStack_388;
      *(undefined4 *)(puVar17 + 0xc) = (undefined4)uStack_398;
      *(undefined4 *)((long)puVar17 + 100) = uStack_398._4_4_;
      *(undefined4 *)(puVar17 + 0xd) = (undefined4)uStack_390;
      *(undefined4 *)((long)puVar17 + 0x6c) = uStack_390._4_4_;
      uStack_398 = (long *)0x0;
      uStack_390 = 0;
      uStack_388 = 0;
      puVar17[0xf] = uStack_380;
      plVar15 = *(long **)(lVar16 + 8);
      *(undefined8 **)(lVar16 + 8) = puVar17;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x28))();
      }
    }
    else if (iVar11 == 1) {
      if ((DAT_0f6fa6b8 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6fa6b8), iVar12 != 0)) {
        func_0x0cb414c0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fa638,0xf53dab8);
        func_0x0410844d(&DAT_0f6fa6b8);
      }
      plVar15 = (long *)(*(long *)(puVar14 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(puVar14 + 0x20) - *(long *)(puVar14 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f6fa638 + 4)) * 8);
      do {
        lVar16 = *plVar15;
        if (lVar16 == -1) goto LAB_0cb1b620;
        plVar15 = (long *)(*(long *)(puVar14 + 0x30) + lVar16 * 0x18);
      } while (*(uint *)(*(long *)(puVar14 + 0x30) + 8 + lVar16 * 0x18) !=
               *(uint *)(_DAT_0f6fa638 + 4));
      if (plVar15 == *(long **)(puVar14 + 0x38)) {
LAB_0cb1b620:
        puVar24 = &DAT_0f6fa638;
      }
      else {
        puVar24 = (undefined *)plVar15[2];
      }
      lVar16 = func_0x048b0c90(puVar14 + 0x18,puVar24,uVar6,1);
      if (lVar16 == 0) {
        bStack_238 = 0;
        uStack_237 = 0;
        uStack_230 = 0;
        uStack_22f = 0;
        uStack_22d = 0;
        uStack_22c = 0;
        func_0x048b0d20(&bStack_238);
        lVar16 = CONCAT71(uStack_237,bStack_238);
      }
      lVar16 = *(long *)(lVar16 + 0x58);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      goto LAB_0cb1b829;
    }
    uStack_120 = uStack_e8;
    uStack_11c = uStack_e4;
    uStack_118 = uStack_e0;
    uStack_114 = uStack_dc;
    uStack_130 = uStack_f8;
    uStack_128 = (undefined4)uStack_f0;
    uStack_124 = uStack_f0._4_4_;
    uStack_138 = puVar14;
    cStack_108 = cVar9;
    iStack_110 = iVar11;
    uStack_10c = uVar6;
    func_0x0cb42d40(&bStack_238,&uStack_138,&UNK_0142384c,7);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f3f1450;
    if (uStack_220 != (long *)0x0) {
      lVar16 = *uStack_220;
      uStack_220 = plVar15;
      (**(code **)(lVar16 + 8))();
      plVar15 = uStack_220;
    }
    uStack_220 = plVar15;
    uStack_2e0 = (undefined *)CONCAT44(uStack_2e0._4_4_,uStack_228);
    uStack_2d8 = (undefined *)0x0;
    uStack_2d0 = (ulong)uStack_2d0._4_4_ << 0x20;
    uStack_2c8 = 1;
    uStack_2c0 = 0;
    uStack_2b8 = &UNK_0cb46890;
    puStack_2b0 = &SUB_048b06d0;
    puStack_2a8 = &UNK_0cb45510;
    puStack_2a0 = &UNK_0cb46950;
    puStack_298 = &UNK_0cb46b50;
    uStack_290 = (long *)((ulong)uStack_290._4_4_ << 0x20);
    uStack_288 = 0;
    plStack_280 = (long *)0x0;
    func_0x048b05a0(CONCAT44(uStack_22c,CONCAT13(uStack_22d,CONCAT21(uStack_22f,uStack_230))),
                    &uStack_2e0);
    plVar15 = plStack_280;
    if (plStack_280 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_280 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_280 + 0x10))(plStack_280);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x0cb42ff0(&bStack_238);
    puVar14 = uStack_138;
    FUN_048b0bc0(&uStack_220);
    bStack_238 = 0x14;
    uStack_237 = 0x6669746e656469;
    uStack_230 = 0x69;
    uStack_22f = 0x7265;
    uStack_22d = 0;
    FUN_0412e5e0(&uStack_2e0,puVar13,0x7a);
    if ((DAT_0f6fa6b8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6fa6b8), iVar11 != 0)) {
      func_0x0cb414c0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fa638,0xf53dab8);
      func_0x0410844d(&DAT_0f6fa6b8);
    }
    bVar10 = bStack_238;
    plVar15 = (long *)(*(long *)(puVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar14 + 0x20) - *(long *)(puVar14 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f6fa638 + 4)) * 8);
    do {
      lVar16 = *plVar15;
      if (lVar16 == -1) goto LAB_0cb1bb51;
      plVar15 = (long *)(*(long *)(puVar14 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(puVar14 + 0x30) + 8 + lVar16 * 0x18) !=
             *(uint *)(_DAT_0f6fa638 + 4));
    if (plVar15 == *(long **)(puVar14 + 0x38)) {
LAB_0cb1bb51:
      puVar24 = &DAT_0f6fa638;
    }
    else {
      puVar24 = (undefined *)plVar15[2];
    }
    bVar28 = (bStack_238 & 1) != 0;
    puVar21 = (undefined7 *)CONCAT44(uStack_224,uStack_228);
    puVar18 = &uStack_237;
    if (bVar28) {
      puVar18 = puVar21;
    }
    uVar25 = (ulong)(bStack_238 >> 1);
    if (bVar28) {
      uVar25 = CONCAT44(uStack_22c,CONCAT13(uStack_22d,CONCAT21(uStack_22f,uStack_230)));
    }
    if (uVar25 == 0) {
      uVar23 = 0x811c9dc5;
    }
    else {
      uVar22 = (ulong)((uint)uVar25 & 3);
      if (uVar25 < 4) {
        uVar23 = 0x811c9dc5;
        uVar26 = 0;
      }
      else {
        uVar23 = 0x811c9dc5;
        uVar26 = 0;
        do {
          uVar23 = ((int)*(char *)((long)puVar18 + uVar26 + 3) ^
                   ((int)*(char *)((long)puVar18 + uVar26 + 2) ^
                   ((int)*(char *)((long)puVar18 + uVar26 + 1) ^
                   ((int)*(char *)((long)puVar18 + uVar26) ^ uVar23) * 0x1000193) * 0x1000193) *
                   0x1000193) * 0x1000193;
          uVar26 = uVar26 + 4;
        } while ((uVar25 & 0xfffffffffffffffc) != uVar26);
      }
      if (uVar22 != 0) {
        uVar25 = 0;
        do {
          uVar23 = ((int)*(char *)((long)puVar18 + uVar25 + uVar26) ^ uVar23) * 0x1000193;
          uVar25 = uVar25 + 1;
        } while (uVar22 != uVar25);
      }
    }
    lVar16 = func_0x048b0c90(puVar14 + 0x18,puVar24,uVar23,1);
    if (lVar16 == 0) {
      lStack_168 = 0;
      uStack_160 = 0;
      func_0x048b0d20(&lStack_168);
      lVar16 = *(long *)(lStack_168 + 0x58);
      bVar3 = *(byte *)(lVar16 + 0x90);
    }
    else {
      lVar16 = *(long *)(lVar16 + 0x58);
      bVar3 = *(byte *)(lVar16 + 0x90);
    }
    puVar5 = (undefined4 *)(lVar16 + 0x90);
    if ((bVar3 & 1) != 0) {
      thunk_FUN_0ee326a0(*(undefined8 *)(lVar16 + 0xa0),
                         *(ulong *)(lVar16 + 0x90) & 0xfffffffffffffffe);
    }
    *(ulong *)(puVar5 + 4) = uStack_2d0;
    *puVar5 = (undefined4)uStack_2e0;
    puVar5[1] = uStack_2e0._4_4_;
    puVar5[2] = (undefined4)uStack_2d8;
    puVar5[3] = uStack_2d8._4_4_;
    uStack_2e0 = (undefined *)((ulong)uStack_2e0 & 0xffffffffffff0000);
    if ((bVar10 & 1) != 0) {
      thunk_FUN_0ee326a0(puVar21,CONCAT71(uStack_237,bStack_238) & 0xfffffffffffffffe);
    }
    uStack_3f8 = &UNK_0f4e3c70;
    if (((ulong)uStack_398 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_388,(ulong)uStack_398 & 0xfffffffffffffffe);
    }
    plVar15 = uStack_3a8;
    if (uStack_3a8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_3a8 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_3a8 + 0x10))(uStack_3a8);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x04167a40(&uStack_3d8);
    if ((bStack_2f8 & 1) == 0) {
      if (((ulong)plStack_318 & 1) != 0) goto LAB_0cb1bd95;
LAB_0cb1bd54:
      puStack_378 = &UNK_0f4e3c70;
      plVar15 = plStack_328;
    }
    else {
      thunk_FUN_0ee326a0(uStack_2e8,CONCAT71(uStack_2f7,bStack_2f8) & 0xfffffffffffffffe);
      if (((ulong)plStack_318 & 1) == 0) goto LAB_0cb1bd54;
LAB_0cb1bd95:
      puStack_378 = &UNK_0f4e3c70;
      thunk_FUN_0ee326a0(uStack_308,(ulong)plStack_318 & 0xfffffffffffffffe);
      plVar15 = plStack_328;
    }
    plStack_328 = plVar15;
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar1 = plVar15 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x04167a40(&uStack_358);
  }
  thunk_FUN_0ee326a0(puVar13,0x80);
  func_0x0d8a24d0(param_1);
  if ((DAT_0f6fa940 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6fa940), iVar11 != 0)) {
    func_0x0cb471b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fa8c0,0xf53dab8);
    func_0x0410844d(&DAT_0f6fa940);
  }
  plVar15 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6fa8c0 + 4)) * 8);
  do {
    lVar16 = *plVar15;
    if (lVar16 == -1) goto LAB_0cb1be60;
    plVar15 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f6fa8c0 + 4))
  ;
  if (plVar15 == *(long **)(param_1 + 0x38)) {
LAB_0cb1be60:
    puVar14 = &DAT_0f6fa8c0;
    if (iRam000000000f6fa920 != -0x2b3da790) goto LAB_0cb1becd;
LAB_0cb1be8b:
    lVar16 = *(long *)(puVar14 + 0x68);
    if (lVar16 == 0) goto LAB_0cb1becd;
    bVar28 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar19 = lVar16 + 9;
    if (bVar28) {
      lVar19 = *(long *)(lVar16 + 0x18);
    }
    uVar25 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar28) {
      uVar25 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0cb47d20(&puStack_270,param_1,lVar19,uVar25);
  }
  else {
    puVar14 = (undefined *)plVar15[2];
    if (*(int *)(puVar14 + 0x60) == -0x2b3da790) goto LAB_0cb1be8b;
LAB_0cb1becd:
    func_0x0cb47d20(&puStack_270,param_1,0,0);
  }
  if (cStack_240 == '\0') {
    func_0x0cb48890(&bStack_238,&puStack_270,&UNK_013771cd,0xe);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f012628;
    if (uStack_220 != (long *)0x0) {
      lVar16 = *uStack_220;
      uStack_220 = plVar15;
      (**(code **)(lVar16 + 8))();
      plVar15 = uStack_220;
    }
    uStack_220 = plVar15;
    uStack_3f8 = (undefined *)CONCAT44(uStack_3f8._4_4_,uStack_228);
    uStack_3f0 = (undefined *)0x0;
    uStack_3e8 = uStack_3e8 & 0xffffffff00000000;
    uStack_3e0 = 1;
    uStack_3d8 = 0;
    puStack_3d0 = &UNK_05eadd90;
    puStack_3c8 = &SUB_048b06d0;
    puStack_3c0 = &SUB_05eada80;
    puStack_3b8 = &UNK_0cb48e40;
    puStack_3b0 = &UNK_0cb48fe0;
    uStack_3a8 = (long *)((ulong)uStack_3a8 & 0xffffffff00000000);
    uStack_3a0 = 0;
    uStack_398 = (long *)0x0;
    func_0x048b05a0(CONCAT44(uStack_22c,CONCAT13(uStack_22d,CONCAT21(uStack_22f,uStack_230))),
                    &uStack_3f8);
    plVar15 = uStack_398;
    if (uStack_398 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_398 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_398 + 0x10))(uStack_398);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x0cb48b40(&bStack_238);
    cVar9 = cStack_240;
    uVar6 = uStack_244;
    iVar11 = iStack_248;
    puVar14 = puStack_270;
    uStack_f8 = CONCAT44(uStack_264,uStack_268);
    uStack_f0 = CONCAT44(uStack_25c,uStack_260);
    uStack_e8 = uStack_258;
    uStack_e4 = uStack_254;
    uStack_e0 = uStack_250;
    uStack_dc = uStack_24c;
    FUN_048b0bc0(&uStack_220);
    uStack_2c0 = 0;
    puStack_298 = (undefined *)0x0;
    uStack_290 = (long *)0x0;
    puStack_2a8 = (undefined *)0x0;
    puStack_2a0 = (undefined *)0x0;
    uStack_2b8 = (undefined *)0x0;
    puStack_2b0 = (undefined1 *)0x0;
    uStack_288 = 0;
    uStack_2d8 = (undefined *)0xffffffffffffffff;
    uStack_2d0 = 0;
    uStack_2c8 = 0xff;
    uStack_2e0 = &UNK_0f488fc0;
    func_0x05d54750(&bStack_2f8,&UNK_0f3f15b8);
    func_0x05d54750(&lStack_168,&UNK_0f0863e8);
    func_0x0d88c510(&uStack_2e0,&bStack_2f8,&lStack_168);
    uStack_360 = CONCAT71(uStack_360._1_7_,(undefined1)uStack_2c8);
    uStack_370 = uStack_2d8;
    uStack_368 = uStack_2d0;
    puStack_378 = &UNK_0f488fc0;
    uStack_358 = uStack_358 & 0xffffffffffffff00;
    puStack_340 = (undefined *)((ulong)puStack_340 & 0xffffffffffffff00);
    if ((char)puStack_2a8 == '\x01') {
      uStack_358 = uStack_2c0;
      puStack_350 = (undefined *)0x0;
      puVar24 = uStack_2b8;
      if (((ulong)uStack_2b8 & 0x80000000000000) != 0) {
        uVar25 = (ulong)uStack_2b8 & 0xff00ffffffffffff;
        lVar19 = *(long *)(uVar25 - 8);
        lVar16 = lVar19 + 9;
        plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar16,8);
        if (lVar16 != 0 && plVar15 == (long *)0x0) {
          func_0x0eec74c0(lVar16,8);
        }
        *plVar15 = lVar19;
        func_0x0eee2f00(plVar15 + 1,uVar25,lVar19);
        *(undefined1 *)((long)plVar15 + lVar19 + 8) = 0;
        puVar24 = (undefined *)((ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      puStack_348 = (undefined1 *)0x0;
      puVar27 = puStack_2b0;
      puStack_350 = puVar24;
      if (((ulong)puStack_2b0 & 0x80000000000000) != 0) {
        uVar25 = (ulong)puStack_2b0 & 0xff00ffffffffffff;
        lVar19 = *(long *)(uVar25 - 8);
        lVar16 = lVar19 + 9;
        plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar16,8);
        if (lVar16 != 0 && plVar15 == (long *)0x0) {
          func_0x0eec74c0(lVar16,8);
        }
        *plVar15 = lVar19;
        func_0x0eee2f00(plVar15 + 1,uVar25,lVar19);
        *(undefined1 *)((long)plVar15 + lVar19 + 8) = 0;
        puVar27 = (undefined1 *)((ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      puStack_340 = (undefined *)CONCAT71(puStack_340._1_7_,1);
      puStack_348 = puVar27;
    }
    puStack_338 = (undefined *)((ulong)puStack_338 & 0xffffffffffffff00);
    uStack_320 = uStack_320 & 0xffffffffffffff00;
    if ((char)uStack_288 == '\x01') {
      puStack_338 = puStack_2a0;
      puStack_330 = (undefined *)0x0;
      puVar24 = puStack_298;
      if (((ulong)puStack_298 & 0x80000000000000) != 0) {
        uVar25 = (ulong)puStack_298 & 0xff00ffffffffffff;
        lVar19 = *(long *)(uVar25 - 8);
        lVar16 = lVar19 + 9;
        plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar16,8);
        if (lVar16 != 0 && plVar15 == (long *)0x0) {
          func_0x0eec74c0(lVar16,8);
        }
        *plVar15 = lVar19;
        func_0x0eee2f00(plVar15 + 1,uVar25,lVar19);
        *(undefined1 *)((long)plVar15 + lVar19 + 8) = 0;
        puVar24 = (undefined *)((ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      plStack_328 = (long *)0x0;
      plVar15 = uStack_290;
      puStack_330 = puVar24;
      if (((ulong)uStack_290 & 0x80000000000000) != 0) {
        uVar25 = (ulong)uStack_290 & 0xff00ffffffffffff;
        lVar19 = *(long *)(uVar25 - 8);
        lVar16 = lVar19 + 9;
        plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar16,8);
        if (lVar16 != 0 && plVar15 == (long *)0x0) {
          func_0x0eec74c0(lVar16,8);
        }
        *plVar15 = lVar19;
        func_0x0eee2f00(plVar15 + 1,uVar25,lVar19);
        *(undefined1 *)((long)plVar15 + lVar19 + 8) = 0;
        plVar15 = (long *)((ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      uStack_320 = CONCAT71(uStack_320._1_7_,1);
      plStack_328 = plVar15;
    }
    if (iVar11 == 4) {
      if ((DAT_0f6fa940 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6fa940), iVar12 != 0)) {
        func_0x0cb471b0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fa8c0,0xf53dab8);
        func_0x0410844d(&DAT_0f6fa940);
      }
      plVar15 = (long *)(*(long *)(puVar14 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(puVar14 + 0x20) - *(long *)(puVar14 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f6fa8c0 + 4)) * 8);
      do {
        lVar16 = *plVar15;
        if (lVar16 == -1) goto LAB_0cb1c58d;
        plVar15 = (long *)(*(long *)(puVar14 + 0x30) + lVar16 * 0x18);
      } while (*(uint *)(*(long *)(puVar14 + 0x30) + 8 + lVar16 * 0x18) !=
               *(uint *)(_DAT_0f6fa8c0 + 4));
      if (plVar15 == *(long **)(puVar14 + 0x38)) {
LAB_0cb1c58d:
        puVar24 = &DAT_0f6fa8c0;
      }
      else {
        puVar24 = (undefined *)plVar15[2];
      }
      lVar16 = func_0x048b1040(puVar14 + 0x18,puVar24,uVar6,1);
      if (lVar16 == 0) {
        bStack_238 = 0;
        uStack_237 = 0;
        uStack_230 = 0;
        uStack_22f = 0;
        uStack_22d = 0;
        uStack_22c = 0;
        func_0x048b10d0(&bStack_238);
        lVar16 = CONCAT71(uStack_237,bStack_238);
        lVar19 = *(long *)(lVar16 + 0x38);
        if (lVar19 == 0) goto LAB_0cb1c67f;
LAB_0cb1c6a4:
        do {
          lVar16 = lVar19;
          lVar19 = *(long *)(lVar16 + 0x38);
          if (lVar19 == 0) {
            bStack_238 = 0;
            uStack_237 = 0;
            uStack_230 = 0;
            uStack_22f = 0;
            uStack_22d = 0;
            uStack_22c = 0;
            func_0x048b10d0(&bStack_238);
            lVar19 = CONCAT71(uStack_237,bStack_238);
          }
        } while (lVar19 != 0);
      }
      else {
        lVar19 = *(long *)(lVar16 + 0x38);
        if (lVar19 != 0) goto LAB_0cb1c6a4;
LAB_0cb1c67f:
        bStack_238 = 0;
        uStack_237 = 0;
        uStack_230 = 0;
        uStack_22f = 0;
        uStack_22d = 0;
        uStack_22c = 0;
        func_0x048b10d0(&bStack_238);
        lVar19 = CONCAT71(uStack_237,bStack_238);
        if (lVar19 != 0) goto LAB_0cb1c6a4;
      }
      lVar16 = *(long *)(lVar16 + 0x48);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x60,0);
      }
LAB_0cb1c704:
      *(undefined1 *)(puVar17 + 3) = (undefined1)uStack_360;
      *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_370;
      *(undefined4 *)((long)puVar17 + 0xc) = uStack_370._4_4_;
      *(undefined4 *)(puVar17 + 2) = (undefined4)uStack_368;
      *(undefined4 *)((long)puVar17 + 0x14) = uStack_368._4_4_;
      *puVar17 = &UNK_0f488fc0;
      *(undefined1 *)(puVar17 + 4) = 0;
      *(undefined1 *)(puVar17 + 7) = 0;
      if ((char)puStack_340 == '\x01') {
        puVar17[4] = uStack_358;
        puVar17[5] = 0;
        puVar17[5] = puStack_350;
        puStack_350 = (undefined *)0x0;
        puVar17[6] = 0;
        puVar17[6] = puStack_348;
        puStack_348 = (undefined1 *)0x0;
        *(undefined1 *)(puVar17 + 7) = 1;
        *(undefined1 *)(puVar17 + 8) = 0;
        *(undefined1 *)(puVar17 + 0xb) = 0;
        if ((char)uStack_320 != '\x01') goto LAB_0cb1c74b;
LAB_0cb1d135:
        puVar17[8] = puStack_338;
        puVar17[9] = 0;
        puVar17[9] = puStack_330;
        puStack_330 = (undefined *)0x0;
        puVar17[10] = 0;
        puVar17[10] = plStack_328;
        plStack_328 = (long *)0x0;
        *(undefined1 *)(puVar17 + 0xb) = 1;
        plVar15 = *(long **)(lVar16 + 8);
        *(undefined8 **)(lVar16 + 8) = puVar17;
      }
      else {
        *(undefined1 *)(puVar17 + 8) = 0;
        *(undefined1 *)(puVar17 + 0xb) = 0;
        if ((char)uStack_320 == '\x01') goto LAB_0cb1d135;
LAB_0cb1c74b:
        plVar15 = *(long **)(lVar16 + 8);
        *(undefined8 **)(lVar16 + 8) = puVar17;
      }
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x28))();
      }
    }
    else if (iVar11 == 1) {
      if ((DAT_0f6fa940 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6fa940), iVar12 != 0)) {
        func_0x0cb471b0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fa8c0,0xf53dab8);
        func_0x0410844d(&DAT_0f6fa940);
      }
      plVar15 = (long *)(*(long *)(puVar14 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(puVar14 + 0x20) - *(long *)(puVar14 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f6fa8c0 + 4)) * 8);
      do {
        lVar16 = *plVar15;
        if (lVar16 == -1) goto LAB_0cb1c50d;
        plVar15 = (long *)(*(long *)(puVar14 + 0x30) + lVar16 * 0x18);
      } while (*(uint *)(*(long *)(puVar14 + 0x30) + 8 + lVar16 * 0x18) !=
               *(uint *)(_DAT_0f6fa8c0 + 4));
      if (plVar15 == *(long **)(puVar14 + 0x38)) {
LAB_0cb1c50d:
        puVar24 = &DAT_0f6fa8c0;
      }
      else {
        puVar24 = (undefined *)plVar15[2];
      }
      lVar16 = func_0x048b0c90(puVar14 + 0x18,puVar24,uVar6,1);
      if (lVar16 == 0) {
        bStack_238 = 0;
        uStack_237 = 0;
        uStack_230 = 0;
        uStack_22f = 0;
        uStack_22d = 0;
        uStack_22c = 0;
        func_0x048b0d20(&bStack_238);
        lVar16 = CONCAT71(uStack_237,bStack_238);
      }
      lVar16 = *(long *)(lVar16 + 0x58);
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x60,0);
      }
      goto LAB_0cb1c704;
    }
    uStack_120 = uStack_e8;
    uStack_11c = uStack_e4;
    uStack_118 = uStack_e0;
    uStack_114 = uStack_dc;
    uStack_130 = uStack_f8;
    uStack_128 = (undefined4)uStack_f0;
    uStack_124 = uStack_f0._4_4_;
    uStack_138 = puVar14;
    iStack_110 = iVar11;
    uStack_10c = uVar6;
    cStack_108 = cVar9;
    func_0x0cb48890(&bStack_238,&uStack_138,&UNK_01d467d0,0x15);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar15 = (long)&UNK_0f3f15f0;
    if (uStack_220 != (long *)0x0) {
      lVar16 = *uStack_220;
      uStack_220 = plVar15;
      (**(code **)(lVar16 + 8))();
      plVar15 = uStack_220;
    }
    uStack_220 = plVar15;
    uStack_3f8 = (undefined *)CONCAT44(uStack_3f8._4_4_,uStack_228);
    uStack_3f0 = (undefined *)0x0;
    uStack_3e8 = uStack_3e8 & 0xffffffff00000000;
    uStack_3e0 = 1;
    uStack_3d8 = 0;
    puStack_3d0 = &UNK_0cb493e0;
    puStack_3c8 = &SUB_048b06d0;
    puStack_3c0 = &UNK_0cb41400;
    puStack_3b8 = &UNK_0cb494a0;
    puStack_3b0 = &UNK_0cb49780;
    uStack_3a8 = (long *)((ulong)uStack_3a8 & 0xffffffff00000000);
    uStack_3a0 = 0;
    uStack_398 = (long *)0x0;
    func_0x048b05a0(CONCAT44(uStack_22c,CONCAT13(uStack_22d,CONCAT21(uStack_22f,uStack_230))),
                    &uStack_3f8);
    plVar15 = uStack_398;
    if (uStack_398 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_398 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_398 + 0x10))(uStack_398);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x0cb48b40(&bStack_238);
    FUN_048b0bc0(&uStack_220);
    puStack_378 = &UNK_0f488fc0;
    if ((char)uStack_320 == '\x01') {
      if (((ulong)plStack_328 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)plStack_328 & 0xff00ffffffffffff) - 8);
      }
      plStack_328 = (long *)0x0;
      if (((ulong)puStack_330 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)puStack_330 & 0xff00ffffffffffff) - 8);
      }
      puStack_330 = (undefined *)0x0;
    }
    if ((char)puStack_340 == '\x01') {
      if (((ulong)puStack_348 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)puStack_348 & 0xff00ffffffffffff) - 8);
      }
      puStack_348 = (undefined1 *)0x0;
      if (((ulong)puStack_350 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)puStack_350 & 0xff00ffffffffffff) - 8);
      }
      puStack_350 = (undefined *)0x0;
    }
    if ((uStack_158 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_158 & 0xff00ffffffffffff) - 8);
    }
    uStack_158 = 0;
    if ((uStack_160 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_160 & 0xff00ffffffffffff) - 8);
    }
    if ((uStack_2e8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e8 & 0xff00ffffffffffff) - 8);
    }
    uStack_2e8 = 0;
    if ((uStack_2ed & 0x80000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,
                 (CONCAT53(uStack_2ed,CONCAT21(uStack_2ef,uStack_2f0)) & 0xff00ffffffffffff) - 8);
    }
    uStack_2e0 = &UNK_0f488fc0;
    if ((char)uStack_288 == '\x01') {
      if (((ulong)uStack_290 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)uStack_290 & 0xff00ffffffffffff) - 8);
      }
      uStack_290 = (long *)0x0;
      if (((ulong)puStack_298 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)puStack_298 & 0xff00ffffffffffff) - 8);
      }
      puStack_298 = (undefined *)0x0;
    }
    if ((char)puStack_2a8 == '\x01') {
      if (((ulong)puStack_2b0 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)puStack_2b0 & 0xff00ffffffffffff) - 8);
      }
      puStack_2b0 = (undefined1 *)0x0;
      if (((ulong)uStack_2b8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)uStack_2b8 & 0xff00ffffffffffff) - 8);
      }
    }
  }
  puVar13 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  uVar4 = _UNK_01409bdd;
  *(ulong *)((long)puVar13 + 0x6a) = CONCAT26(_UNK_01409bdb,_DAT_01409bd5);
  *(undefined8 *)((long)puVar13 + 0x72) = uVar4;
  uVar4 = CONCAT62(_DAT_01409bd5,_UNK_01409bd3);
  *(undefined8 *)(puVar13 + 0x18) = _DAT_01409bcb;
  *(undefined8 *)(puVar13 + 0x1a) = uVar4;
  uVar4 = _UNK_01409bc3;
  *(undefined8 *)(puVar13 + 0x14) = _DAT_01409bbb;
  *(undefined8 *)(puVar13 + 0x16) = uVar4;
  uVar4 = _UNK_01409bb3;
  *(undefined8 *)(puVar13 + 0x10) = _DAT_01409bab;
  *(undefined8 *)(puVar13 + 0x12) = uVar4;
  uVar4 = _UNK_01409ba3;
  *(undefined8 *)(puVar13 + 0xc) = _DAT_01409b9b;
  *(undefined8 *)(puVar13 + 0xe) = uVar4;
  uVar4 = _UNK_01409b93;
  *(undefined8 *)(puVar13 + 8) = _DAT_01409b8b;
  *(undefined8 *)(puVar13 + 10) = uVar4;
  uVar4 = _UNK_01409b83;
  *(undefined8 *)(puVar13 + 4) = _DAT_01409b7b;
  *(undefined8 *)(puVar13 + 6) = uVar4;
  uVar8 = _UNK_01409b77;
  uVar7 = _UNK_01409b73;
  uVar6 = _UNK_01409b6f;
  *puVar13 = _DAT_01409b6b;
  puVar13[1] = uVar6;
  puVar13[2] = uVar7;
  puVar13[3] = uVar8;
  *(undefined1 *)((long)puVar13 + 0x7a) = 0;
  if ((DAT_0f6fa9f8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6fa9f8), iVar11 != 0)) {
    func_0x0cb4edb0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fa978,0xf53dab8);
    func_0x0410844d(&DAT_0f6fa9f8);
  }
  plVar15 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6fa978 + 4)) * 8);
  do {
    lVar16 = *plVar15;
    if (lVar16 == -1) goto LAB_0cb1cc50;
    plVar15 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f6fa978 + 4))
  ;
  if (plVar15 == *(long **)(param_1 + 0x38)) {
LAB_0cb1cc50:
    puVar14 = &DAT_0f6fa978;
    if (iRam000000000f6fa9d8 != -0x2b3da790) goto LAB_0cb1ccd7;
LAB_0cb1cc7b:
    lVar16 = *(long *)(puVar14 + 0x68);
    if (lVar16 == 0) goto LAB_0cb1ccd7;
    bVar28 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar19 = lVar16 + 9;
    if (bVar28) {
      lVar19 = *(long *)(lVar16 + 0x18);
    }
    uVar25 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar28) {
      uVar25 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0cb4f3b0(&uStack_2e0,param_1,lVar19,uVar25);
  }
  else {
    puVar14 = (undefined *)plVar15[2];
    if (*(int *)(puVar14 + 0x60) == -0x2b3da790) goto LAB_0cb1cc7b;
LAB_0cb1ccd7:
    func_0x0cb4f3b0(&uStack_2e0,param_1,0,0);
  }
  if ((char)puStack_2b0 != '\0') {
    lVar16 = func_0x07c92500(lStack_b8);
    iVar11 = *(int *)(lVar16 + 0x60);
    goto joined_r0x0cb1cccc;
  }
  func_0x0cb4ff50(&bStack_238,&uStack_2e0,&UNK_013762e9,10,1);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0ef44b00;
  if (uStack_220 != (long *)0x0) {
    lVar16 = *uStack_220;
    uStack_220 = plVar15;
    (**(code **)(lVar16 + 8))();
    plVar15 = uStack_220;
  }
  uStack_220 = plVar15;
  uStack_3f8 = (undefined *)CONCAT44(uStack_3f8._4_4_,uStack_228);
  uStack_3f0 = (undefined *)0x0;
  uStack_3e8 = uStack_3e8 & 0xffffffff00000000;
  uStack_3e0 = 1;
  uStack_3d8 = 0;
  puStack_3d0 = &UNK_048b3f30;
  puStack_3c8 = &SUB_048b06d0;
  puStack_3c0 = &SUB_048b2190;
  puStack_3b8 = &UNK_0cb50510;
  puStack_3b0 = &UNK_0cb506d0;
  uStack_3a8 = (long *)((ulong)uStack_3a8 & 0xffffffff00000000);
  uStack_3a0 = 0;
  uStack_398 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack_22c,CONCAT13(uStack_22d,CONCAT21(uStack_22f,uStack_230))),
                  &uStack_3f8);
  plVar15 = uStack_398;
  if (uStack_398 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_398 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*uStack_398 + 0x10))(uStack_398);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x0cb50210(&bStack_238);
  puVar14 = uStack_2e0;
  uStack_138 = uStack_2d8;
  uStack_130 = uStack_2d0;
  uStack_128 = (undefined4)uStack_2c8;
  uStack_124 = uStack_2c8._4_4_;
  uStack_120 = (undefined4)uStack_2c0;
  uStack_11c = uStack_2c0._4_4_;
  iVar11 = (int)uStack_2b8;
  uVar6 = uStack_2b8._4_4_;
  cVar9 = (char)puStack_2b0;
  FUN_048b0bc0(&uStack_220);
  uStack_3d8 = 0;
  uStack_390 = 0;
  uStack_388 = 0;
  uStack_3a0 = 0;
  uStack_398 = (long *)0x0;
  puStack_3b0 = (undefined *)0x0;
  uStack_3a8 = (long *)0x0;
  puStack_3c0 = (undefined *)0x0;
  puStack_3b8 = (undefined *)0x0;
  puStack_3d0 = (undefined *)0x0;
  puStack_3c8 = (undefined1 *)0x0;
  uStack_380 = 0;
  uStack_3f0 = (undefined *)0xffffffffffffffff;
  uStack_3e8 = 0;
  uStack_3e0 = 0xff;
  uStack_3f8 = &UNK_0f4e3c70;
  func_0x041679a0(&uStack_3d8);
  puStack_3d0 = (undefined *)func_0x041681f0(&uStack_3d8,0xf547a30);
  puStack_3c8 = (undefined1 *)func_0x041681f0(&uStack_3d8,0xf547770);
  puStack_3c0 = (undefined *)0x0;
  puStack_3b8 = (undefined *)0x0;
  puStack_3b0 = (undefined *)0x0;
  uStack_3a8 = (long *)0x0;
  uStack_3a0 = 0;
  uStack_398 = (long *)0x0;
  uStack_390 = 0;
  uStack_388 = 0;
  uStack_380 = 0;
  bStack_150 = 0x12;
  uStack_14f = 0x775c3a2b775c5e;
  uStack_148 = 0x2b;
  uStack_147 = 0x24;
  func_0x0ed60210(&uStack_3f8,&bStack_150,0);
  uStack_98 = (undefined1)uStack_3e0;
  uStack_a8 = (undefined4)uStack_3f0;
  uStack_a4 = uStack_3f0._4_4_;
  uStack_a0 = (undefined4)uStack_3e8;
  uStack_9c = uStack_3e8._4_4_;
  puStack_b0 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_90,&uStack_3d8);
  puStack_88 = puStack_3d0;
  puStack_80 = puStack_3c8;
  puStack_78 = puStack_3c0;
  puStack_70 = puStack_3b8;
  puStack_68 = puStack_3b0;
  plStack_60 = uStack_3a8;
  if (uStack_3a8 != (long *)0x0) {
    LOCK();
    uStack_3a8[1] = uStack_3a8[1] + 1;
    UNLOCK();
  }
  uStack_58 = uStack_3a0;
  if (((ulong)uStack_398 & 1) == 0) {
    uStack_40 = uStack_388;
    uStack_50 = uStack_398;
    uStack_48 = uStack_390;
  }
  else {
    FUN_0412e5e0(&uStack_50,uStack_388,uStack_390);
  }
  uStack_38 = uStack_380;
  if (iVar11 == 4) {
    if ((DAT_0f6fa9f8 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6fa9f8), iVar12 != 0)) {
      func_0x0cb4edb0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fa978,0xf53dab8);
      func_0x0410844d(&DAT_0f6fa9f8);
    }
    plVar15 = (long *)(*(long *)(puVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar14 + 0x20) - *(long *)(puVar14 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f6fa978 + 4)) * 8);
    do {
      lVar16 = *plVar15;
      if (lVar16 == -1) goto LAB_0cb1d20d;
      plVar15 = (long *)(*(long *)(puVar14 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(puVar14 + 0x30) + 8 + lVar16 * 0x18) !=
             *(uint *)(_DAT_0f6fa978 + 4));
    if (plVar15 == *(long **)(puVar14 + 0x38)) {
LAB_0cb1d20d:
      puVar24 = &DAT_0f6fa978;
    }
    else {
      puVar24 = (undefined *)plVar15[2];
    }
    lVar16 = func_0x048b1040(puVar14 + 0x18,puVar24,uVar6,1);
    if (lVar16 == 0) {
      bStack_238 = 0;
      uStack_237 = 0;
      uStack_230 = 0;
      uStack_22f = 0;
      uStack_22d = 0;
      uStack_22c = 0;
      func_0x048b10d0(&bStack_238);
      lVar16 = CONCAT71(uStack_237,bStack_238);
      lVar19 = *(long *)(lVar16 + 0x38);
      if (lVar19 == 0) goto LAB_0cb1d30c;
LAB_0cb1d331:
      do {
        lVar16 = lVar19;
        lVar19 = *(long *)(lVar16 + 0x38);
        if (lVar19 == 0) {
          bStack_238 = 0;
          uStack_237 = 0;
          uStack_230 = 0;
          uStack_22f = 0;
          uStack_22d = 0;
          uStack_22c = 0;
          func_0x048b10d0(&bStack_238);
          lVar19 = CONCAT71(uStack_237,bStack_238);
        }
      } while (lVar19 != 0);
    }
    else {
      lVar19 = *(long *)(lVar16 + 0x38);
      if (lVar19 != 0) goto LAB_0cb1d331;
LAB_0cb1d30c:
      bStack_238 = 0;
      uStack_237 = 0;
      uStack_230 = 0;
      uStack_22f = 0;
      uStack_22d = 0;
      uStack_22c = 0;
      func_0x048b10d0(&bStack_238);
      lVar19 = CONCAT71(uStack_237,bStack_238);
      if (lVar19 != 0) goto LAB_0cb1d331;
    }
    lVar16 = *(long *)(lVar16 + 0x48);
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
LAB_0cb1d39d:
    *(undefined1 *)(puVar17 + 3) = uStack_98;
    *(undefined4 *)(puVar17 + 1) = uStack_a8;
    *(undefined4 *)((long)puVar17 + 0xc) = uStack_a4;
    *(undefined4 *)(puVar17 + 2) = uStack_a0;
    *(undefined4 *)((long)puVar17 + 0x14) = uStack_9c;
    *puVar17 = &UNK_0f4e3c70;
    func_0x04167a20(puVar17 + 4,auStack_90);
    puVar17[5] = puStack_88;
    puVar17[6] = puStack_80;
    puVar17[7] = puStack_78;
    puVar17[8] = puStack_70;
    puVar17[9] = puStack_68;
    puVar17[10] = plStack_60;
    puStack_68 = (undefined *)0x0;
    plStack_60 = (long *)0x0;
    puVar17[0xb] = uStack_58;
    puVar17[0xe] = uStack_40;
    *(undefined4 *)(puVar17 + 0xc) = (undefined4)uStack_50;
    *(undefined4 *)((long)puVar17 + 100) = uStack_50._4_4_;
    *(undefined4 *)(puVar17 + 0xd) = (undefined4)uStack_48;
    *(undefined4 *)((long)puVar17 + 0x6c) = uStack_48._4_4_;
    uStack_50 = (long *)0x0;
    uStack_48 = 0;
    uStack_40 = 0;
    puVar17[0xf] = uStack_38;
    plVar15 = *(long **)(lVar16 + 8);
    *(undefined8 **)(lVar16 + 8) = puVar17;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x28))();
    }
  }
  else if (iVar11 == 1) {
    if ((DAT_0f6fa9f8 == '\0') && (iVar12 = func_0x04108328(&DAT_0f6fa9f8), iVar12 != 0)) {
      func_0x0cb4edb0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fa978,0xf53dab8);
      func_0x0410844d(&DAT_0f6fa9f8);
    }
    plVar15 = (long *)(*(long *)(puVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar14 + 0x20) - *(long *)(puVar14 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f6fa978 + 4)) * 8);
    do {
      lVar16 = *plVar15;
      if (lVar16 == -1) goto LAB_0cb1d0c0;
      plVar15 = (long *)(*(long *)(puVar14 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(puVar14 + 0x30) + 8 + lVar16 * 0x18) !=
             *(uint *)(_DAT_0f6fa978 + 4));
    if (plVar15 == *(long **)(puVar14 + 0x38)) {
LAB_0cb1d0c0:
      puVar24 = &DAT_0f6fa978;
    }
    else {
      puVar24 = (undefined *)plVar15[2];
    }
    lVar16 = func_0x048b0c90(puVar14 + 0x18,puVar24,uVar6,1);
    if (lVar16 == 0) {
      bStack_238 = 0;
      uStack_237 = 0;
      uStack_230 = 0;
      uStack_22f = 0;
      uStack_22d = 0;
      uStack_22c = 0;
      func_0x048b0d20(&bStack_238);
      lVar16 = CONCAT71(uStack_237,bStack_238);
    }
    lVar16 = *(long *)(lVar16 + 0x58);
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    goto LAB_0cb1d39d;
  }
  uStack_258 = uStack_128;
  uStack_254 = uStack_124;
  uStack_250 = uStack_120;
  uStack_24c = uStack_11c;
  uStack_268 = (undefined4)uStack_138;
  uStack_264 = uStack_138._4_4_;
  uStack_260 = (undefined4)uStack_130;
  uStack_25c = uStack_130._4_4_;
  puStack_270 = puVar14;
  cStack_240 = cVar9;
  uStack_23b = (undefined3)(uStack_f8 >> 0x20);
  iStack_248 = iVar11;
  uStack_244 = uVar6;
  uStack_23f = (undefined4)uStack_f8;
  func_0x0cb4f9a0(&bStack_238,puVar14 + 0x18);
  if (uStack_220._4_4_ == 2) {
    piVar20 = *(int **)(*(long *)(CONCAT44(uStack_224,uStack_228) + 0x78) + 0x60);
    iVar11 = *piVar20;
    while (iVar11 != (int)uStack_220) {
      piVar20 = piVar20 + 0x16;
      iVar11 = *piVar20;
    }
    lVar16 = *(long *)(piVar20 + 0xc);
    while (lVar16 != CONCAT44(uStack_22c,CONCAT13(uStack_22d,CONCAT21(uStack_22f,uStack_230)))) {
      piVar20 = *(int **)(piVar20 + 0xe);
      lVar16 = *(long *)(piVar20 + 0xc);
    }
LAB_0cb1d52f:
    *(byte *)((long)piVar20 + 0x12) = *(byte *)((long)piVar20 + 0x12) | 4;
  }
  else {
    if (uStack_220._4_4_ == 1) {
      piVar20 = *(int **)(*(long *)(CONCAT44(uStack_224,uStack_228) + 0x78) + 0x48);
      iVar11 = *piVar20;
      while (iVar11 != (int)uStack_220) {
        piVar20 = piVar20 + 0x1a;
        iVar11 = *piVar20;
      }
      goto LAB_0cb1d52f;
    }
    if (uStack_220._4_4_ == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_224,uStack_228) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0cb4ff50(&bStack_238,&puStack_270,&UNK_013fcef1,7,0x10);
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar15 = (long)&UNK_0f0f3860;
  if (uStack_220 != (long *)0x0) {
    lVar16 = *uStack_220;
    uStack_220 = plVar15;
    (**(code **)(lVar16 + 8))();
    plVar15 = uStack_220;
  }
  uStack_220 = plVar15;
  puStack_378 = (undefined *)CONCAT44(puStack_378._4_4_,uStack_228);
  uStack_370 = (undefined *)0x0;
  uStack_368 = uStack_368 & 0xffffffff00000000;
  uStack_360 = 1;
  uStack_358 = 0;
  puStack_350 = &UNK_07c74080;
  puStack_348 = &SUB_048b06d0;
  puStack_340 = &UNK_07c73040;
  puStack_338 = &UNK_0cb508a0;
  puStack_330 = &UNK_0cb50a90;
  plStack_328 = (long *)((ulong)plStack_328 & 0xffffffff00000000);
  uStack_320 = 0;
  plStack_318 = (long *)0x0;
  func_0x048b05a0(CONCAT44(uStack_22c,CONCAT13(uStack_22d,CONCAT21(uStack_22f,uStack_230))),
                  &puStack_378);
  plVar15 = plStack_318;
  if (plStack_318 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_318 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_318 + 0x10))(plStack_318);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x0cb50210(&bStack_238);
  puVar14 = puStack_270;
  FUN_048b0bc0(&uStack_220);
  bStack_238 = 0x14;
  uStack_237 = 0x6669746e656469;
  uStack_230 = 0x69;
  uStack_22f = 0x7265;
  uStack_22d = 0;
  FUN_0412e5e0(&uStack_d0,puVar13,0x7a);
  if ((DAT_0f6fa9f8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6fa9f8), iVar11 != 0)) {
    func_0x0cb4edb0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6fa978,0xf53dab8);
    func_0x0410844d(&DAT_0f6fa9f8);
  }
  bVar10 = bStack_238;
  plVar15 = (long *)(*(long *)(puVar14 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(puVar14 + 0x20) - *(long *)(puVar14 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6fa978 + 4)) * 8);
  do {
    lVar16 = *plVar15;
    if (lVar16 == -1) goto LAB_0cb1d751;
    plVar15 = (long *)(*(long *)(puVar14 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(puVar14 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f6fa978 + 4))
  ;
  if (plVar15 == *(long **)(puVar14 + 0x38)) {
LAB_0cb1d751:
    puVar24 = &DAT_0f6fa978;
  }
  else {
    puVar24 = (undefined *)plVar15[2];
  }
  bVar28 = (bStack_238 & 1) != 0;
  puVar21 = &uStack_237;
  if (bVar28) {
    puVar21 = (undefined7 *)CONCAT44(uStack_224,uStack_228);
  }
  uVar25 = (ulong)(bStack_238 >> 1);
  if (bVar28) {
    uVar25 = CONCAT44(uStack_22c,CONCAT13(uStack_22d,CONCAT21(uStack_22f,uStack_230)));
  }
  if (uVar25 == 0) {
    uVar23 = 0x811c9dc5;
  }
  else {
    uVar22 = (ulong)((uint)uVar25 & 3);
    if (uVar25 < 4) {
      uVar23 = 0x811c9dc5;
      uVar26 = 0;
    }
    else {
      uVar23 = 0x811c9dc5;
      uVar26 = 0;
      do {
        uVar23 = ((int)*(char *)((long)puVar21 + uVar26 + 3) ^
                 ((int)*(char *)((long)puVar21 + uVar26 + 2) ^
                 ((int)*(char *)((long)puVar21 + uVar26 + 1) ^
                 ((int)*(char *)((long)puVar21 + uVar26) ^ uVar23) * 0x1000193) * 0x1000193) *
                 0x1000193) * 0x1000193;
        uVar26 = uVar26 + 4;
      } while ((uVar25 & 0xfffffffffffffffc) != uVar26);
    }
    if (uVar22 != 0) {
      uVar25 = 0;
      do {
        uVar23 = ((int)*(char *)((long)puVar21 + uVar25 + uVar26) ^ uVar23) * 0x1000193;
        uVar25 = uVar25 + 1;
      } while (uVar22 != uVar25);
    }
  }
  lVar16 = func_0x048b0c90(puVar14 + 0x18,puVar24,uVar23,1);
  if (lVar16 == 0) {
    puStack_378 = (undefined *)0x0;
    uStack_370 = (undefined *)0x0;
    func_0x048b0d20(&puStack_378);
    lVar16 = *(long *)(puStack_378 + 0x58);
    bVar3 = *(byte *)(lVar16 + 0x90);
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x58);
    bVar3 = *(byte *)(lVar16 + 0x90);
  }
  puVar2 = (uint *)(lVar16 + 0x90);
  if ((bVar3 & 1) != 0) {
    thunk_FUN_0ee326a0(*(undefined8 *)(lVar16 + 0xa0),*(ulong *)(lVar16 + 0x90) & 0xfffffffffffffffe
                      );
  }
  *(undefined8 *)(puVar2 + 4) = uStack_c0;
  *puVar2 = uStack_d0;
  puVar2[1] = uStack_cc;
  puVar2[2] = uStack_c8;
  puVar2[3] = uStack_c4;
  uStack_d0 = uStack_d0 & 0xffff0000;
  if ((bVar10 & 1) == 0) {
    if (((ulong)uStack_50 & 1) != 0) goto LAB_0cb1d904;
LAB_0cb1d8c8:
    puStack_b0 = &UNK_0f4e3c70;
    plVar15 = plStack_60;
  }
  else {
    thunk_FUN_0ee326a0((undefined7 *)CONCAT44(uStack_224,uStack_228),
                       CONCAT71(uStack_237,bStack_238) & 0xfffffffffffffffe);
    if (((ulong)uStack_50 & 1) == 0) goto LAB_0cb1d8c8;
LAB_0cb1d904:
    puStack_b0 = &UNK_0f4e3c70;
    thunk_FUN_0ee326a0(uStack_40,(ulong)uStack_50 & 0xfffffffffffffffe);
    plVar15 = plStack_60;
  }
  plStack_60 = plVar15;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar1 = plVar15 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x04167a40(auStack_90);
  if ((bStack_150 & 1) == 0) {
    if (((ulong)uStack_398 & 1) != 0) goto LAB_0cb1d9b5;
LAB_0cb1d97a:
    uStack_3f8 = &UNK_0f4e3c70;
    plVar15 = uStack_3a8;
  }
  else {
    thunk_FUN_0ee326a0(uStack_140,CONCAT71(uStack_14f,bStack_150) & 0xfffffffffffffffe);
    if (((ulong)uStack_398 & 1) == 0) goto LAB_0cb1d97a;
LAB_0cb1d9b5:
    uStack_3f8 = &UNK_0f4e3c70;
    thunk_FUN_0ee326a0(uStack_388,(ulong)uStack_398 & 0xfffffffffffffffe);
    plVar15 = uStack_3a8;
  }
  uStack_3a8 = plVar15;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar1 = plVar15 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x04167a40(&uStack_3d8);
  lVar16 = func_0x07c92500(lStack_b8);
  iVar11 = *(int *)(lVar16 + 0x60);
joined_r0x0cb1cccc:
  if ((iVar11 == -0x2b3da790) && (lVar16 = *(long *)(lVar16 + 0x68), lVar16 != 0)) {
    bVar28 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar19 = lVar16 + 9;
    if (bVar28) {
      lVar19 = *(long *)(lVar16 + 0x18);
    }
    uVar25 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar28) {
      uVar25 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x07c93c60(&bStack_238,param_1,lVar19,uVar25,0);
  }
  else {
    func_0x07c93c60(&bStack_238,param_1,0,0,0);
  }
  if (cStack_208 == '\0') {
    func_0x07c94640(&uStack_3f8,&bStack_238,&UNK_013fcef1,7,1);
  }
  thunk_FUN_0ee326a0(puVar13,0x80);
  return;
}



/* ---- referenced strings ----
 * 0x1409b6b  Identifier requires a namespace and name separated by a ':' and each must have only alphanumeric
 * 0x1409b7b  res a namespace and name separated by a ':' and each must have only alphanumeric or underscore c
 * 0x1409b8b  and name separated by a ':' and each must have only alphanumeric or underscore characters.
 * 0x1409b9b  ed by a ':' and each must have only alphanumeric or underscore characters.
 * 0x1409bab  each must have only alphanumeric or underscore characters.
 * 0x1409bbb  nly alphanumeric or underscore characters.
 * 0x1409bcb   or underscore characters.
 * 0x1409bd5  core characters.
 */
