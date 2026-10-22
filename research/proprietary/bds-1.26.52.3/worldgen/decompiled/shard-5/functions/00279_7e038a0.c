/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7f038a0 (ELF vaddr 0x7e038a0)
 * Label: caller-of-callee
 * Body:  [[07f038a0, 07f04f77] [07f04f80, 07f05b68]]
 * Ghidra: FUN_07f038a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07f038a0(long param_1)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  bool bVar21;
  undefined *puStack_388;
  long lStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined *puStack_360;
  undefined1 *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long *plStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined4 uStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  int iStack_270;
  undefined4 uStack_26c;
  char cStack_268;
  long lStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  long *aplStack_240 [2];
  byte bStack_230;
  undefined1 auStack_22f [7];
  ulong uStack_228;
  undefined1 *puStack_220;
  undefined *puStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 uStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  char cStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  char cStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  char cStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  func_0x07bed8a0();
  FUN_078f0560(param_1);
  if ((DAT_0f5c4148 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c4148), iVar10 != 0)) {
    func_0x080051d0();
    FUN_0410844d(&DAT_0f5c4148);
  }
  uVar19 = _DAT_0f5c4140;
  lVar15 = _DAT_0f5c4138;
  if ((DAT_0f5c41e0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c41e0), iVar10 != 0)) {
    func_0x08005310();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c4160,0xf53dab8);
    FUN_0410844d(&DAT_0f5c41e0);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c4160 + 4)) * 8);
  do {
    lVar17 = *plVar14;
    if (lVar17 == -1) goto LAB_07f03941;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5c4160 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_07f03941:
    puVar11 = &DAT_0f5c4160;
    iVar10 = iRam000000000f5c41c0;
  }
  else {
    puVar11 = (undefined *)plVar14[2];
    iVar10 = *(int *)(puVar11 + 0x60);
  }
  if ((iVar10 == -0x2b3da790) && (lVar17 = *(long *)(puVar11 + 0x68), lVar17 != 0)) {
    bVar21 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar15 = lVar17 + 9;
    if (bVar21) {
      lVar15 = *(long *)(lVar17 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar21) {
      uVar19 = *(ulong *)(lVar17 + 0x10);
    }
  }
  func_0x08007dd0(&lStack_d0,param_1,lVar15,uVar19);
  if (cStack_a0 != '\0') {
    return;
  }
  if ((DAT_0f5c0fb8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c0fb8), iVar10 != 0)) {
    func_0x07f4a530();
    FUN_0410844d(&DAT_0f5c0fb8);
  }
  uVar19 = _DAT_0f5c0fb0;
  lVar15 = _DAT_0f5c0fa8;
  if ((DAT_0f5c0f98 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c0f98), iVar10 != 0)) {
    func_0x07f46a30();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c0f18,0xf53dab8);
    FUN_0410844d(&DAT_0f5c0f98);
  }
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5c0f18 + 4)) * 8);
  do {
    lVar17 = *plVar14;
    if (lVar17 == -1) goto LAB_07f03a21;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5c0f18 + 4))
  ;
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_07f03a21:
    puVar11 = &DAT_0f5c0f18;
    iVar10 = iRam000000000f5c0f78;
  }
  else {
    puVar11 = (undefined *)plVar14[2];
    iVar10 = *(int *)(puVar11 + 0x60);
  }
  if ((iVar10 == -0x2b3da790) && (lVar17 = *(long *)(puVar11 + 0x68), lVar17 != 0)) {
    bVar21 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar15 = lVar17 + 9;
    if (bVar21) {
      lVar15 = *(long *)(lVar17 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar21) {
      uVar19 = *(ulong *)(lVar17 + 0x10);
    }
  }
  FUN_07f46df0(&uStack_300,param_1,lVar15,uVar19);
  uVar6 = uStack_2d0;
  uStack_2d0._0_5_ = (uint5)(uint)uStack_2d0;
  uVar7 = uStack_2d0;
  puStack_2c8 = (undefined1 *)((ulong)puStack_2c8 & 0xffffffffffffff00);
  uStack_2d0._0_1_ = (char)uVar6;
  bVar21 = (char)uStack_2d0 == '\0';
  uStack_2d0 = (undefined1 *)uVar7;
  if (bVar21) {
    func_0x07f4a5b0(&lStack_258,&UNK_013ddd96,4);
    uVar19 = (ulong)(bStack_230 >> 1);
    puVar4 = auStack_22f;
    if ((bStack_230 & 1) != 0) {
      uVar19 = uStack_228;
      puVar4 = puStack_220;
    }
    if (uVar19 == 0) {
      uStack_2d8._4_4_ = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar19 & 3);
      if (uVar19 < 4) {
        uStack_2d8._4_4_ = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uStack_2d8._4_4_ = 0x811c9dc5;
        uVar20 = 0;
        do {
          uStack_2d8._4_4_ =
               ((int)(char)puVar4[uVar20 + 3] ^
               ((int)(char)puVar4[uVar20 + 2] ^
               ((int)(char)puVar4[uVar20 + 1] ^
               ((int)(char)puVar4[uVar20] ^ uStack_2d8._4_4_) * 0x1000193) * 0x1000193) * 0x1000193)
               * 0x1000193;
          uVar20 = uVar20 + 4;
        } while ((uVar19 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar12 != 0) {
        uVar19 = 0;
        do {
          uStack_2d8._4_4_ = ((int)(char)puVar4[uVar19 + uVar20] ^ uStack_2d8._4_4_) * 0x1000193;
          uVar19 = uVar19 + 1;
        } while (uVar12 != uVar19);
      }
    }
    uStack_2d8._0_4_ = 2;
    uVar5 = (undefined4)uStack_2d8;
    uStack_2d8._0_4_ = 2;
    if ((DAT_0f5c0fb8 == '\0') &&
       (uStack_2d8._0_4_ = uVar5, iVar10 = func_0x04108328(&DAT_0f5c0fb8), iVar10 != 0)) {
      func_0x07f4a530();
      FUN_0410844d(&DAT_0f5c0fb8);
    }
    puStack_388 = (undefined *)CONCAT44(puStack_388._4_4_,uStack_2d8._4_4_);
    lStack_380 = 0;
    uStack_378 = CONCAT44(uStack_378._4_4_,3);
    uStack_370 = 1;
    uStack_368 = 0;
    puStack_360 = &UNK_07f4abc0;
    puStack_358 = &SUB_048b06d0;
    uStack_350 = &UNK_07f46970;
    uStack_348 = &UNK_07f4ac80;
    puStack_340 = &UNK_07f4ac90;
    uStack_338 = (long *)((ulong)uStack_338._4_4_ << 0x20);
    uStack_330 = 0;
    plStack_328 = (long *)0x0;
    func_0x048b05a0(&uStack_2f8,&puStack_388);
    plVar14 = plStack_328;
    if (plStack_328 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_328 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_328 + 0x10))(plStack_328);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_288 = (undefined4)uStack_2e8;
    uStack_284 = uStack_2e8._4_4_;
    uStack_280 = (undefined4)uStack_2e0;
    uStack_27c = uStack_2e0._4_4_;
    uStack_298 = (undefined4)uStack_2f8;
    uStack_294 = uStack_2f8._4_4_;
    uStack_290 = uStack_2f0;
    uStack_28c = uStack_2ec;
    func_0x07f4a950(&puStack_388,&uStack_298,&lStack_258);
    if (uStack_370._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)(uStack_378 + 0x78) + 0x60);
      iVar10 = *piVar13;
      while (iVar10 != (int)uStack_370) {
        piVar13 = piVar13 + 0x16;
        iVar10 = *piVar13;
      }
      lVar15 = *(long *)(piVar13 + 0xc);
      while (lVar15 != lStack_380) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar15 = *(long *)(piVar13 + 0xc);
      }
LAB_07f03cef:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_370._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)(uStack_378 + 0x78) + 0x48);
        iVar10 = *piVar13;
        while (iVar10 != (int)uStack_370) {
          piVar13 = piVar13 + 0x1a;
          iVar10 = *piVar13;
        }
        goto LAB_07f03cef;
      }
      if (uStack_370._4_4_ == 0) {
        *(uint *)(uStack_378 + 0x18) = *(uint *)(uStack_378 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_2c8 == '\0') {
      func_0x07f4ace0(&puStack_388,&uStack_300);
    }
    iVar10 = uStack_2d0._4_4_;
    lVar15 = CONCAT44(uStack_2fc,uStack_300);
    if ((DAT_0f5c0f98 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5c0f98), iVar9 != 0)) {
      func_0x07f46a30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c0f18,0xf53dab8);
      FUN_0410844d(&DAT_0f5c0f98);
    }
    lVar17 = (long)&uStack_2d8 + 4;
    plVar14 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c0f18 + 4)) * 8);
    do {
      lVar2 = *plVar14;
      if (lVar2 == -1) goto LAB_07f03d80;
      plVar14 = (long *)(*(long *)(lVar15 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5c0f18 + 4))
    ;
    if (plVar14 == *(long **)(lVar15 + 0x38)) {
LAB_07f03d80:
      puVar11 = &DAT_0f5c0f18;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    piVar3 = *(int **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (piVar13 = *(int **)(*(long *)(puVar11 + 0x68) + 0x20);
        (piVar13 != piVar3 && (*piVar13 != iVar10)); piVar13 = piVar13 + 0xe) {
    }
    if ((piVar13 == piVar3) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0141872f),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_388 = (undefined *)((ulong)puStack_388 & 0xffffffffffffff00);
    func_0x05d9c620(piVar13 + 2,lVar17,lVar17,&puStack_388);
    func_0x048b0bc0(&lStack_258);
    func_0x07f4a5b0(&lStack_258,&UNK_011a2ef4,0x12);
    uVar19 = (ulong)(bStack_230 >> 1);
    puVar4 = auStack_22f;
    if ((bStack_230 & 1) != 0) {
      uVar19 = uStack_228;
      puVar4 = puStack_220;
    }
    if (uVar19 == 0) {
      uStack_2d8._4_4_ = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar19 & 3);
      if (uVar19 < 4) {
        uStack_2d8._4_4_ = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uStack_2d8._4_4_ = 0x811c9dc5;
        uVar20 = 0;
        do {
          uStack_2d8._4_4_ =
               ((int)(char)puVar4[uVar20 + 3] ^
               ((int)(char)puVar4[uVar20 + 2] ^
               ((int)(char)puVar4[uVar20 + 1] ^
               ((int)(char)puVar4[uVar20] ^ uStack_2d8._4_4_) * 0x1000193) * 0x1000193) * 0x1000193)
               * 0x1000193;
          uVar20 = uVar20 + 4;
        } while ((uVar19 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar12 != 0) {
        uVar19 = 0;
        do {
          uStack_2d8._4_4_ = ((int)(char)puVar4[uVar19 + uVar20] ^ uStack_2d8._4_4_) * 0x1000193;
          uVar19 = uVar19 + 1;
        } while (uVar12 != uVar19);
      }
    }
    uStack_2d8._0_4_ = 2;
    if ((DAT_0f5c0fb8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c0fb8), iVar10 != 0)) {
      func_0x07f4a530();
      FUN_0410844d(&DAT_0f5c0fb8);
    }
    puStack_388 = (undefined *)CONCAT44(puStack_388._4_4_,uStack_2d8._4_4_);
    lStack_380 = 0;
    uStack_378 = CONCAT44(uStack_378._4_4_,3);
    uStack_370 = 1;
    uStack_368 = 0;
    puStack_360 = &UNK_07f4abc0;
    puStack_358 = &SUB_048b06d0;
    uStack_350 = &UNK_07f46970;
    uStack_348 = &UNK_07f4aea0;
    puStack_340 = &UNK_07f4aeb0;
    uStack_338 = (long *)((ulong)uStack_338 & 0xffffffff00000000);
    uStack_330 = 0;
    plStack_328 = (long *)0x0;
    func_0x048b05a0(&uStack_2f8,&puStack_388);
    plVar14 = plStack_328;
    if (plStack_328 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_328 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_328 + 0x10))(plStack_328);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_288 = (undefined4)uStack_2e8;
    uStack_284 = uStack_2e8._4_4_;
    uStack_280 = (undefined4)uStack_2e0;
    uStack_27c = uStack_2e0._4_4_;
    uStack_298 = (undefined4)uStack_2f8;
    uStack_294 = uStack_2f8._4_4_;
    uStack_290 = uStack_2f0;
    uStack_28c = uStack_2ec;
    func_0x07f4a950(&puStack_388,&uStack_298,&lStack_258);
    if (uStack_370._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)(uStack_378 + 0x78) + 0x60);
      iVar10 = *piVar13;
      while (iVar10 != (int)uStack_370) {
        piVar13 = piVar13 + 0x16;
        iVar10 = *piVar13;
      }
      lVar15 = *(long *)(piVar13 + 0xc);
      while (lVar15 != lStack_380) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar15 = *(long *)(piVar13 + 0xc);
      }
LAB_07f040bf:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_370._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)(uStack_378 + 0x78) + 0x48);
        iVar10 = *piVar13;
        while (iVar10 != (int)uStack_370) {
          piVar13 = piVar13 + 0x1a;
          iVar10 = *piVar13;
        }
        goto LAB_07f040bf;
      }
      if (uStack_370._4_4_ == 0) {
        *(uint *)(uStack_378 + 0x18) = *(uint *)(uStack_378 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_2c8 == '\0') {
      func_0x07f4ace0(&puStack_388,&uStack_300);
    }
    iVar10 = uStack_2d0._4_4_;
    lVar15 = CONCAT44(uStack_2fc,uStack_300);
    if ((DAT_0f5c0f98 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5c0f98), iVar9 != 0)) {
      func_0x07f46a30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c0f18,0xf53dab8);
      FUN_0410844d(&DAT_0f5c0f98);
    }
    plVar14 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c0f18 + 4)) * 8);
    do {
      lVar2 = *plVar14;
      if (lVar2 == -1) goto LAB_07f04150;
      plVar14 = (long *)(*(long *)(lVar15 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5c0f18 + 4))
    ;
    if (plVar14 == *(long **)(lVar15 + 0x38)) {
LAB_07f04150:
      puVar11 = &DAT_0f5c0f18;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    piVar3 = *(int **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (piVar13 = *(int **)(*(long *)(puVar11 + 0x68) + 0x20);
        (piVar13 != piVar3 && (*piVar13 != iVar10)); piVar13 = piVar13 + 0xe) {
    }
    if ((piVar13 == piVar3) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0141872f),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_388 = (undefined *)((ulong)puStack_388 & 0xffffffffffffff00);
    func_0x05d9c620(piVar13 + 2,lVar17,lVar17,&puStack_388);
    func_0x048b0bc0(&lStack_258);
    func_0x07f4a5b0(&lStack_258,&UNK_013b20f8,0x12);
    uVar19 = (ulong)(bStack_230 >> 1);
    puVar4 = auStack_22f;
    if ((bStack_230 & 1) != 0) {
      uVar19 = uStack_228;
      puVar4 = puStack_220;
    }
    if (uVar19 == 0) {
      uStack_2d8._4_4_ = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar19 & 3);
      if (uVar19 < 4) {
        uStack_2d8._4_4_ = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uStack_2d8._4_4_ = 0x811c9dc5;
        uVar20 = 0;
        do {
          uStack_2d8._4_4_ =
               ((int)(char)puVar4[uVar20 + 3] ^
               ((int)(char)puVar4[uVar20 + 2] ^
               ((int)(char)puVar4[uVar20 + 1] ^
               ((int)(char)puVar4[uVar20] ^ uStack_2d8._4_4_) * 0x1000193) * 0x1000193) * 0x1000193)
               * 0x1000193;
          uVar20 = uVar20 + 4;
        } while ((uVar19 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar12 != 0) {
        uVar19 = 0;
        do {
          uStack_2d8._4_4_ = ((int)(char)puVar4[uVar19 + uVar20] ^ uStack_2d8._4_4_) * 0x1000193;
          uVar19 = uVar19 + 1;
        } while (uVar12 != uVar19);
      }
    }
    uStack_2d8._0_4_ = 2;
    if ((DAT_0f5c0fb8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c0fb8), iVar10 != 0)) {
      func_0x07f4a530();
      FUN_0410844d(&DAT_0f5c0fb8);
    }
    puStack_388 = (undefined *)CONCAT44(puStack_388._4_4_,uStack_2d8._4_4_);
    lStack_380 = 0;
    uStack_378 = CONCAT44(uStack_378._4_4_,3);
    uStack_370 = 1;
    uStack_368 = 0;
    puStack_360 = &UNK_07f4abc0;
    puStack_358 = &SUB_048b06d0;
    uStack_350 = &UNK_07f46970;
    uStack_348 = &UNK_07f4af00;
    puStack_340 = &UNK_07f4af10;
    uStack_338 = (long *)((ulong)uStack_338 & 0xffffffff00000000);
    uStack_330 = 0;
    plStack_328 = (long *)0x0;
    func_0x048b05a0(&uStack_2f8,&puStack_388);
    plVar14 = plStack_328;
    if (plStack_328 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_328 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_328 + 0x10))(plStack_328);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_288 = (undefined4)uStack_2e8;
    uStack_284 = uStack_2e8._4_4_;
    uStack_280 = (undefined4)uStack_2e0;
    uStack_27c = uStack_2e0._4_4_;
    uStack_298 = (undefined4)uStack_2f8;
    uStack_294 = uStack_2f8._4_4_;
    uStack_290 = uStack_2f0;
    uStack_28c = uStack_2ec;
    func_0x07f4a950(&puStack_388,&uStack_298,&lStack_258);
    if (uStack_370._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)(uStack_378 + 0x78) + 0x60);
      iVar10 = *piVar13;
      while (iVar10 != (int)uStack_370) {
        piVar13 = piVar13 + 0x16;
        iVar10 = *piVar13;
      }
      lVar15 = *(long *)(piVar13 + 0xc);
      while (lVar15 != lStack_380) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar15 = *(long *)(piVar13 + 0xc);
      }
LAB_07f0448f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_370._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)(uStack_378 + 0x78) + 0x48);
        iVar10 = *piVar13;
        while (iVar10 != (int)uStack_370) {
          piVar13 = piVar13 + 0x1a;
          iVar10 = *piVar13;
        }
        goto LAB_07f0448f;
      }
      if (uStack_370._4_4_ == 0) {
        *(uint *)(uStack_378 + 0x18) = *(uint *)(uStack_378 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_2c8 == '\0') {
      func_0x07f4ace0(&puStack_388,&uStack_300);
    }
    iVar10 = uStack_2d0._4_4_;
    lVar15 = CONCAT44(uStack_2fc,uStack_300);
    if ((DAT_0f5c0f98 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5c0f98), iVar9 != 0)) {
      func_0x07f46a30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c0f18,0xf53dab8);
      FUN_0410844d(&DAT_0f5c0f98);
    }
    plVar14 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c0f18 + 4)) * 8);
    do {
      lVar2 = *plVar14;
      if (lVar2 == -1) goto LAB_07f04520;
      plVar14 = (long *)(*(long *)(lVar15 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5c0f18 + 4))
    ;
    if (plVar14 == *(long **)(lVar15 + 0x38)) {
LAB_07f04520:
      puVar11 = &DAT_0f5c0f18;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    piVar3 = *(int **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (piVar13 = *(int **)(*(long *)(puVar11 + 0x68) + 0x20);
        (piVar13 != piVar3 && (*piVar13 != iVar10)); piVar13 = piVar13 + 0xe) {
    }
    if ((piVar13 == piVar3) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0141872f),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_388 = (undefined *)((ulong)puStack_388 & 0xffffffffffffff00);
    func_0x05d9c620(piVar13 + 2,lVar17,lVar17,&puStack_388);
    func_0x048b0bc0(&lStack_258);
    func_0x07f4a5b0(&lStack_258,&UNK_01290917,0x13);
    uVar19 = (ulong)(bStack_230 >> 1);
    puVar4 = auStack_22f;
    if ((bStack_230 & 1) != 0) {
      uVar19 = uStack_228;
      puVar4 = puStack_220;
    }
    if (uVar19 == 0) {
      uVar18 = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar19 & 3);
      if (uVar19 < 4) {
        uVar18 = 0x811c9dc5;
        uVar20 = 0;
      }
      else {
        uVar18 = 0x811c9dc5;
        uVar20 = 0;
        do {
          uVar18 = ((int)(char)puVar4[uVar20 + 3] ^
                   ((int)(char)puVar4[uVar20 + 2] ^
                   ((int)(char)puVar4[uVar20 + 1] ^ ((int)(char)puVar4[uVar20] ^ uVar18) * 0x1000193
                   ) * 0x1000193) * 0x1000193) * 0x1000193;
          uVar20 = uVar20 + 4;
        } while ((uVar19 & 0xfffffffffffffffc) != uVar20);
      }
      if (uVar12 != 0) {
        uVar19 = 0;
        do {
          uVar18 = ((int)(char)puVar4[uVar19 + uVar20] ^ uVar18) * 0x1000193;
          uVar19 = uVar19 + 1;
        } while (uVar12 != uVar19);
      }
    }
    uStack_2d8 = (undefined *)CONCAT44(uVar18,2);
    if ((DAT_0f5c0fb8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c0fb8), iVar10 != 0)) {
      func_0x07f4a530();
      FUN_0410844d(&DAT_0f5c0fb8);
    }
    puStack_388 = (undefined *)CONCAT44(puStack_388._4_4_,uStack_2d8._4_4_);
    lStack_380 = 0;
    uStack_378 = CONCAT44(uStack_378._4_4_,3);
    uStack_370 = 1;
    uStack_368 = 0;
    puStack_360 = &UNK_07f4abc0;
    puStack_358 = &SUB_048b06d0;
    uStack_350 = &UNK_07f46970;
    uStack_348 = &UNK_07f4af60;
    puStack_340 = &UNK_07f4af70;
    uStack_338 = (long *)((ulong)uStack_338 & 0xffffffff00000000);
    uStack_330 = 0;
    plStack_328 = (long *)0x0;
    func_0x048b05a0(&uStack_2f8,&puStack_388);
    plVar14 = plStack_328;
    if (plStack_328 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_328 + 1;
      lVar15 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_328 + 0x10))(plStack_328);
        func_0x0412c2d0(plVar14);
      }
    }
    uStack_288 = (undefined4)uStack_2e8;
    uStack_284 = uStack_2e8._4_4_;
    uStack_280 = (undefined4)uStack_2e0;
    uStack_27c = uStack_2e0._4_4_;
    uStack_298 = (undefined4)uStack_2f8;
    uStack_294 = uStack_2f8._4_4_;
    uStack_290 = uStack_2f0;
    uStack_28c = uStack_2ec;
    func_0x07f4a950(&puStack_388,&uStack_298,&lStack_258);
    if (uStack_370._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)(uStack_378 + 0x78) + 0x60);
      iVar10 = *piVar13;
      while (iVar10 != (int)uStack_370) {
        piVar13 = piVar13 + 0x16;
        iVar10 = *piVar13;
      }
      lVar15 = *(long *)(piVar13 + 0xc);
      while (lVar15 != lStack_380) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar15 = *(long *)(piVar13 + 0xc);
      }
LAB_07f0484f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (uStack_370._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)(uStack_378 + 0x78) + 0x48);
        iVar10 = *piVar13;
        while (iVar10 != (int)uStack_370) {
          piVar13 = piVar13 + 0x1a;
          iVar10 = *piVar13;
        }
        goto LAB_07f0484f;
      }
      if (uStack_370._4_4_ == 0) {
        *(uint *)(uStack_378 + 0x18) = *(uint *)(uStack_378 + 0x18) | 0x90000;
      }
    }
    if ((char)puStack_2c8 == '\0') {
      func_0x07f4ace0(&puStack_388,&uStack_300);
    }
    iVar10 = uStack_2d0._4_4_;
    lVar15 = CONCAT44(uStack_2fc,uStack_300);
    if ((DAT_0f5c0f98 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5c0f98), iVar9 != 0)) {
      func_0x07f46a30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c0f18,0xf53dab8);
      FUN_0410844d(&DAT_0f5c0f98);
    }
    plVar14 = (long *)(*(long *)(lVar15 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f5c0f18 + 4)) * 8);
    do {
      lVar2 = *plVar14;
      if (lVar2 == -1) goto LAB_07f048e0;
      plVar14 = (long *)(*(long *)(lVar15 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5c0f18 + 4))
    ;
    if (plVar14 == *(long **)(lVar15 + 0x38)) {
LAB_07f048e0:
      puVar11 = &DAT_0f5c0f18;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    piVar3 = *(int **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (piVar13 = *(int **)(*(long *)(puVar11 + 0x68) + 0x20);
        (piVar13 != piVar3 && (*piVar13 != iVar10)); piVar13 = piVar13 + 0xe) {
    }
    if ((piVar13 == piVar3) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0141872f),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_388 = (undefined *)((ulong)puStack_388 & 0xffffffffffffff00);
    func_0x05d9c620(piVar13 + 2,lVar17,lVar17,&puStack_388);
    func_0x048b0bc0(&lStack_258);
  }
  func_0x080089b0(&lStack_258,&lStack_d0,&UNK_0147ce14,0xe);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0ef44b00;
  if (aplStack_240[0] != (long *)0x0) {
    lVar15 = *aplStack_240[0];
    aplStack_240[0] = plVar14;
    (**(code **)(lVar15 + 8))();
    plVar14 = aplStack_240[0];
  }
  aplStack_240[0] = plVar14;
  puStack_388 = (undefined *)CONCAT44(puStack_388._4_4_,uStack_248);
  lStack_380 = 0;
  uStack_378 = uStack_378 & 0xffffffff00000000;
  uStack_370 = 1;
  uStack_368 = 0;
  puStack_360 = &UNK_048b3f30;
  puStack_358 = &SUB_048b06d0;
  uStack_350 = &SUB_048b2190;
  uStack_348 = &UNK_08008f60;
  puStack_340 = &UNK_08009120;
  uStack_338 = (long *)((ulong)uStack_338 & 0xffffffff00000000);
  uStack_330 = 0;
  plStack_328 = (long *)0x0;
  func_0x048b05a0(uStack_250,&puStack_388);
  plVar14 = plStack_328;
  if (plStack_328 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_328 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_328 + 0x10))(plStack_328);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x08008c60(&lStack_258);
  uStack_58 = uStack_c8;
  uStack_50 = uStack_c0;
  uStack_48 = uStack_b8;
  uStack_44 = uStack_b4;
  uStack_40 = uStack_b0;
  uStack_3c = uStack_ac;
  uStack_304 = uStack_a4;
  func_0x048b0bc0(aplStack_240);
  uStack_368 = 0;
  uStack_320 = 0;
  uStack_318 = 0;
  uStack_330 = 0;
  plStack_328 = (long *)0x0;
  puStack_340 = (undefined *)0x0;
  uStack_338 = (long *)0x0;
  uStack_350 = (undefined *)0x0;
  uStack_348 = (undefined *)0x0;
  puStack_360 = (undefined *)0x0;
  puStack_358 = (undefined1 *)0x0;
  uStack_310 = 0;
  lStack_380 = 0xffffffffffffffff;
  uStack_378 = 0;
  uStack_370 = 0xff;
  puStack_388 = &UNK_0f4e3c70;
  func_0x041679a0(&uStack_368);
  puStack_360 = (undefined *)func_0x041681f0(&uStack_368,0xf547a30);
  puStack_358 = (undefined1 *)func_0x041681f0(&uStack_368,0xf547770);
  uStack_350 = (undefined *)0x0;
  uStack_348 = (undefined *)0x0;
  puStack_340 = (undefined *)0x0;
  uStack_338 = (long *)0x0;
  uStack_330 = 0;
  plStack_328 = (long *)0x0;
  uStack_320 = 0;
  uStack_318 = 0;
  uStack_310 = 0;
  lStack_380 = 0x100;
  uStack_180 = 0x100;
  uStack_17c = 0;
  uStack_178 = (undefined4)uStack_378;
  uStack_174 = uStack_378._4_4_;
  uStack_170 = (undefined1)uStack_370;
  puStack_188 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_168,&uStack_368);
  uStack_160 = puStack_360;
  uStack_158 = puStack_358;
  uStack_150 = (undefined4)uStack_350;
  uStack_14c = uStack_350._4_4_;
  uStack_148 = (undefined4)uStack_348;
  uStack_144 = uStack_348._4_4_;
  uStack_140 = puStack_340;
  plStack_138 = uStack_338;
  if (uStack_338 != (long *)0x0) {
    LOCK();
    uStack_338[1] = uStack_338[1] + 1;
    UNLOCK();
  }
  uStack_130 = uStack_330;
  if (((ulong)plStack_328 & 1) == 0) {
    uStack_118 = uStack_318;
    uStack_128 = (ulong)plStack_328;
    uStack_120 = uStack_320;
  }
  else {
    func_0x0412e5e0(&uStack_128,uStack_318,uStack_320);
  }
  uStack_110 = uStack_310;
  if (iStack_a8 == 4) {
    if ((DAT_0f5c41e0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c41e0), iVar10 != 0)) {
      func_0x08005310();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c4160,0xf53dab8);
      FUN_0410844d(&DAT_0f5c41e0);
    }
    plVar14 = (long *)(*(long *)(lStack_d0 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lStack_d0 + 0x20) -
                                           *(long *)(lStack_d0 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f5c4160 + 4)) * 8);
    do {
      lVar15 = *plVar14;
      if (lVar15 == -1) goto LAB_07f04d68;
      plVar14 = (long *)(*(long *)(lStack_d0 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(lStack_d0 + 0x30) + 8 + lVar15 * 0x18) !=
             *(uint *)(_DAT_0f5c4160 + 4));
    if (plVar14 == *(long **)(lStack_d0 + 0x38)) {
LAB_07f04d68:
      puVar11 = &DAT_0f5c4160;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    lVar15 = FUN_048b1040(lStack_d0 + 0x18,puVar11,uStack_304,1);
    if (lVar15 == 0) {
      lStack_258 = 0;
      uStack_250 = 0;
      func_0x048b10d0(&lStack_258);
      lVar17 = *(long *)(lStack_258 + 0x38);
      lVar15 = lStack_258;
      if (lVar17 == 0) goto LAB_07f04f49;
LAB_07f04f6e:
      do {
        lVar15 = lVar17;
        lVar17 = *(long *)(lVar15 + 0x38);
        if (*(long *)(lVar15 + 0x38) == 0) {
          lStack_258 = 0;
          uStack_250 = 0;
          func_0x048b10d0(&lStack_258);
          lVar17 = lStack_258;
        }
      } while (lVar17 != 0);
    }
    else {
      lVar17 = *(long *)(lVar15 + 0x38);
      if (*(long *)(lVar15 + 0x38) != 0) goto LAB_07f04f6e;
LAB_07f04f49:
      lStack_258 = 0;
      uStack_250 = 0;
      func_0x048b10d0(&lStack_258);
      lVar17 = lStack_258;
      if (lStack_258 != 0) goto LAB_07f04f6e;
    }
    lVar15 = *(long *)(lVar15 + 0x48);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    *(undefined1 *)(puVar16 + 3) = uStack_170;
    *(undefined4 *)(puVar16 + 1) = uStack_180;
    *(undefined4 *)((long)puVar16 + 0xc) = uStack_17c;
    *(undefined4 *)(puVar16 + 2) = uStack_178;
    *(undefined4 *)((long)puVar16 + 0x14) = uStack_174;
    *puVar16 = &UNK_0f4e3c70;
    func_0x04167a20(puVar16 + 4,auStack_168);
    puVar16[5] = uStack_160;
    puVar16[6] = uStack_158;
    puVar16[7] = CONCAT44(uStack_14c,uStack_150);
    puVar16[8] = CONCAT44(uStack_144,uStack_148);
    puVar16[9] = uStack_140;
    puVar16[10] = plStack_138;
    puVar16[0xb] = uStack_130;
    puVar16[0xe] = uStack_118;
    *(undefined4 *)(puVar16 + 0xc) = (undefined4)uStack_128;
    *(undefined4 *)((long)puVar16 + 100) = uStack_128._4_4_;
    *(undefined4 *)(puVar16 + 0xd) = (undefined4)uStack_120;
    *(undefined4 *)((long)puVar16 + 0x6c) = uStack_120._4_4_;
    puVar16[0xf] = uStack_110;
    plVar14 = *(long **)(lVar15 + 8);
    *(undefined8 **)(lVar15 + 8) = puVar16;
  }
  else {
    if (iStack_a8 != 1) goto LAB_07f050ab;
    if ((DAT_0f5c41e0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5c41e0), iVar10 != 0)) {
      func_0x08005310();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c4160,0xf53dab8);
      FUN_0410844d(&DAT_0f5c41e0);
    }
    plVar14 = (long *)(*(long *)(lStack_d0 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lStack_d0 + 0x20) -
                                           *(long *)(lStack_d0 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f5c4160 + 4)) * 8);
    do {
      lVar15 = *plVar14;
      if (lVar15 == -1) goto LAB_07f04cf8;
      plVar14 = (long *)(*(long *)(lStack_d0 + 0x30) + lVar15 * 0x18);
    } while (*(uint *)(*(long *)(lStack_d0 + 0x30) + 8 + lVar15 * 0x18) !=
             *(uint *)(_DAT_0f5c4160 + 4));
    if (plVar14 == *(long **)(lStack_d0 + 0x38)) {
LAB_07f04cf8:
      puVar11 = &DAT_0f5c4160;
    }
    else {
      puVar11 = (undefined *)plVar14[2];
    }
    lVar15 = func_0x048b0c90(lStack_d0 + 0x18,puVar11,uStack_304,1);
    if (lVar15 == 0) {
      lStack_258 = 0;
      uStack_250 = 0;
      func_0x048b0d20(&lStack_258);
      lVar15 = lStack_258;
    }
    lVar15 = *(long *)(lVar15 + 0x58);
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    *(undefined1 *)(puVar16 + 3) = uStack_170;
    *(undefined4 *)(puVar16 + 1) = uStack_180;
    *(undefined4 *)((long)puVar16 + 0xc) = uStack_17c;
    *(undefined4 *)(puVar16 + 2) = uStack_178;
    *(undefined4 *)((long)puVar16 + 0x14) = uStack_174;
    *puVar16 = &UNK_0f4e3c70;
    func_0x04167a20(puVar16 + 4,auStack_168);
    puVar16[5] = uStack_160;
    puVar16[6] = uStack_158;
    puVar16[7] = CONCAT44(uStack_14c,uStack_150);
    puVar16[8] = CONCAT44(uStack_144,uStack_148);
    puVar16[9] = uStack_140;
    puVar16[10] = plStack_138;
    puVar16[0xb] = uStack_130;
    puVar16[0xe] = uStack_118;
    *(undefined4 *)(puVar16 + 0xc) = (undefined4)uStack_128;
    *(undefined4 *)((long)puVar16 + 100) = uStack_128._4_4_;
    *(undefined4 *)(puVar16 + 0xd) = (undefined4)uStack_120;
    *(undefined4 *)((long)puVar16 + 0x6c) = uStack_120._4_4_;
    puVar16[0xf] = uStack_110;
    plVar14 = *(long **)(lVar15 + 8);
    *(undefined8 **)(lVar15 + 8) = puVar16;
  }
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  plStack_138 = (long *)0x0;
  uStack_140 = 0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x28))();
  }
LAB_07f050ab:
  uStack_108 = lStack_d0;
  uStack_100 = (undefined4)uStack_58;
  uStack_fc = uStack_58._4_4_;
  uStack_f8 = (undefined4)uStack_50;
  uStack_f4 = uStack_50._4_4_;
  uStack_f0 = uStack_48;
  uStack_ec = uStack_44;
  uStack_e8 = uStack_40;
  uStack_e4 = uStack_3c;
  iStack_e0 = iStack_a8;
  uStack_dc = uStack_304;
  cStack_d8 = cStack_a0;
  func_0x080089b0(&lStack_258,&uStack_108,&UNK_013625cc,0x12);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f011f18;
  if (aplStack_240[0] != (long *)0x0) {
    lVar15 = *aplStack_240[0];
    aplStack_240[0] = plVar14;
    (**(code **)(lVar15 + 8))();
    plVar14 = aplStack_240[0];
  }
  aplStack_240[0] = plVar14;
  uStack_300 = uStack_248;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  uStack_2e8 = 1;
  uStack_2e0 = 0;
  uStack_2d8 = &UNK_05f27580;
  uStack_2d0 = &SUB_048b06d0;
  puStack_2c8 = &SUB_05f23890;
  puStack_2c0 = &UNK_080092f0;
  puStack_2b8 = &UNK_08009460;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  plStack_2a0 = (long *)0x0;
  func_0x048b05a0(uStack_250,&uStack_300);
  plVar14 = plStack_2a0;
  if (plStack_2a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_2a0 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_2a0 + 0x10))(plStack_2a0);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x08008c60(&lStack_258);
  cStack_68 = cStack_d8;
  uStack_78 = uStack_e8;
  uStack_74 = uStack_e4;
  iStack_70 = iStack_e0;
  uStack_6c = uStack_dc;
  uStack_88 = uStack_f8;
  uStack_84 = uStack_f4;
  uStack_80 = uStack_f0;
  uStack_7c = uStack_ec;
  uStack_98 = (undefined4)uStack_108;
  uStack_94 = uStack_108._4_4_;
  uStack_90 = uStack_100;
  uStack_8c = uStack_fc;
  func_0x048b0bc0(aplStack_240);
  func_0x080089b0(&lStack_258,&uStack_98,&UNK_01395e51,0x12);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f0edb78;
  if (aplStack_240[0] != (long *)0x0) {
    lVar15 = *aplStack_240[0];
    aplStack_240[0] = plVar14;
    (**(code **)(lVar15 + 8))();
    plVar14 = aplStack_240[0];
  }
  aplStack_240[0] = plVar14;
  uStack_300 = uStack_248;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  uStack_2e8 = 1;
  uStack_2e0 = 0;
  uStack_2d8 = &UNK_0796aeb0;
  uStack_2d0 = &SUB_048b06d0;
  puStack_2c8 = &SUB_0796ab30;
  puStack_2c0 = &UNK_08009640;
  puStack_2b8 = &UNK_080098d0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  plStack_2a0 = (long *)0x0;
  func_0x048b05a0(uStack_250,&uStack_300);
  plVar14 = plStack_2a0;
  if (plStack_2a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_2a0 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_2a0 + 0x10))(plStack_2a0);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x08008c60(&lStack_258);
  cStack_268 = cStack_68;
  uStack_278 = uStack_78;
  uStack_274 = uStack_74;
  iStack_270 = iStack_70;
  uStack_26c = uStack_6c;
  uStack_288 = uStack_88;
  uStack_284 = uStack_84;
  uStack_280 = uStack_80;
  uStack_27c = uStack_7c;
  uStack_298 = uStack_98;
  uStack_294 = uStack_94;
  uStack_290 = uStack_90;
  uStack_28c = uStack_8c;
  func_0x048b0bc0(aplStack_240);
  func_0x080089b0(&lStack_258,&uStack_298,&UNK_011bdead,0x13);
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar14 = (long)&UNK_0f0fd158;
  if (aplStack_240[0] != (long *)0x0) {
    lVar15 = *aplStack_240[0];
    aplStack_240[0] = plVar14;
    (**(code **)(lVar15 + 8))();
    plVar14 = aplStack_240[0];
  }
  aplStack_240[0] = plVar14;
  uStack_300 = uStack_248;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  uStack_2e8 = 1;
  uStack_2e0 = 0;
  uStack_2d8 = &UNK_07f4abc0;
  uStack_2d0 = &SUB_048b06d0;
  puStack_2c8 = &UNK_07f46970;
  puStack_2c0 = &UNK_08009ab0;
  puStack_2b8 = &UNK_08009c10;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  plStack_2a0 = (long *)0x0;
  func_0x048b05a0(uStack_250,&uStack_300);
  plVar14 = plStack_2a0;
  if (plStack_2a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_2a0 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_2a0 + 0x10))(plStack_2a0);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x08008c60(&lStack_258);
  uVar5 = uStack_26c;
  iVar10 = iStack_270;
  lVar15 = CONCAT44(uStack_294,uStack_298);
  func_0x048b0bc0(aplStack_240);
  if ((DAT_0f5c41e0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5c41e0), iVar9 != 0)) {
    func_0x08005310();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c4160,0xf53dab8);
    FUN_0410844d(&DAT_0f5c41e0);
  }
  plVar14 = (long *)(*(long *)(lVar15 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5c4160 + 4)) * 8);
  do {
    lVar17 = *plVar14;
    if (lVar17 == -1) goto LAB_07f05600;
    plVar14 = (long *)(*(long *)(lVar15 + 0x30) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f5c4160 + 4));
  if (plVar14 == *(long **)(lVar15 + 0x38)) {
LAB_07f05600:
    puVar11 = &DAT_0f5c4160;
  }
  else {
    puVar11 = (undefined *)plVar14[2];
  }
  if ((1 < iVar10 - 1U) &&
     (cVar8 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_012a9555),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar15 = func_0x048b0c90(lVar15 + 0x18,puVar11,uVar5,1);
  if (lVar15 == 0) {
    lStack_258 = 0;
    uStack_250 = 0;
    func_0x048b0d20(&lStack_258);
    lVar15 = lStack_258;
  }
  *(undefined1 *)(*(long *)(lVar15 + 0x58) + 0xa8) = 4;
  puStack_188 = &UNK_0f4e3c70;
  if ((uStack_128 & 1) != 0) {
    func_0x0412a280(uStack_118,uStack_128 & 0xfffffffffffffffe);
  }
  plVar14 = plStack_138;
  if (plStack_138 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_138 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x04167a40(auStack_168);
  puStack_388 = &UNK_0f4e3c70;
  if (((ulong)plStack_328 & 1) != 0) {
    func_0x0412a280(uStack_318,(ulong)plStack_328 & 0xfffffffffffffffe);
  }
  plVar14 = uStack_338;
  if (uStack_338 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_338 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*uStack_338 + 0x10))(uStack_338);
      func_0x0412c2d0(plVar14);
    }
  }
  func_0x04167a40(&uStack_368);
  return;
}


