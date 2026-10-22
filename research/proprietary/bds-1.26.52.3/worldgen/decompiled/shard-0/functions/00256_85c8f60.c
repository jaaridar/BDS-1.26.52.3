/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x86c8f60 (ELF vaddr 0x85c8f60)
 * Label: caller-of-callee
 * Body:  [[086c8f60, 086c95c1] [086c95d0, 086cbc4f]]
 * Ghidra: FUN_086c8f60
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_086c8f60(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  long *plVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  bool bVar20;
  uint auStack_3a8 [2];
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined *puStack_380;
  undefined1 *puStack_378;
  undefined1 *puStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined4 uStack_358;
  undefined8 uStack_350;
  long *plStack_348;
  char cStack_339;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 uStack_310;
  char cStack_308;
  uint uStack_304;
  char cStack_300;
  undefined *puStack_2f8;
  undefined4 *puStack_2f0;
  uint uStack_2e8;
  long *plStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  long lStack_2c0;
  undefined1 uStack_2b8;
  undefined4 uStack_2b7;
  undefined4 uStack_2b3;
  undefined4 uStack_2af;
  undefined4 uStack_2ab;
  undefined2 uStack_2a7;
  undefined5 uStack_2a5;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  undefined4 uStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined2 uStack_238;
  undefined2 uStack_236;
  uint uStack_234;
  uint uStack_230;
  undefined1 uStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  char cStack_1f8;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  char cStack_1b8;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  char cStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
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
  undefined4 uStack_fc;
  undefined8 uStack_f8;
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
  undefined4 uStack_bc;
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
  undefined4 uStack_7c;
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
  undefined4 uStack_3c;
  char cStack_38;
  undefined7 uStack_37;
  
  func_0x07be4c70();
  if ((DAT_0f5dce18 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5dce18), iVar9 != 0)) {
    func_0x0878a960();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dcd98,0xf53dab8);
    func_0x0410844d(&DAT_0f5dce18);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5dcd98 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_086c8fe0;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5dcd98 + 4));
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_086c8fe0:
    puVar11 = &DAT_0f5dcd98;
    if (iRam000000000f5dcdf8 != -0x2b3da790) goto LAB_086c904a;
LAB_086c900b:
    lVar3 = *(long *)(puVar11 + 0x68);
    if (lVar3 == 0) goto LAB_086c904a;
    bVar20 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar16 = lVar3 + 9;
    if (bVar20) {
      lVar16 = *(long *)(lVar3 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar20) {
      uVar17 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x0878ad70(&uStack_338,param_1,lVar16,uVar17);
  }
  else {
    puVar11 = (undefined *)plVar12[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_086c900b;
LAB_086c904a:
    func_0x0878ad70(&uStack_338,param_1,&UNK_0129232f,0x13);
  }
  if (cStack_308 == '\0') {
    uStack_398._4_4_ = (uint)((ulong)uStack_398 >> 0x20);
    if ((DAT_0f5dce38 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5dce38), iVar9 != 0)) {
      func_0x0878aa70();
      func_0x0410844d(&DAT_0f5dce38);
    }
    uStack_310 = 0xa14371e900000001;
    lVar3 = CONCAT44(uStack_334,uStack_338);
    if ((DAT_0f5dce18 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5dce18), iVar9 != 0)) {
      func_0x0878a960();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dcd98,0xf53dab8);
      func_0x0410844d(&DAT_0f5dce18);
    }
    puStack_2f0 = (undefined4 *)(lVar3 + 0x18);
    plVar12 = (long *)(*(long *)(lVar3 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f5dcd98 + 4)) * 8);
    do {
      lVar16 = *plVar12;
      if (lVar16 == -1) goto LAB_086c9100;
      plVar12 = (long *)(*(long *)(lVar3 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5dcd98 + 4))
    ;
    if (plVar12 == *(long **)(lVar3 + 0x38)) {
LAB_086c9100:
      puStack_2f8 = &DAT_0f5dcd98;
    }
    else {
      puStack_2f8 = (undefined *)plVar12[2];
    }
    func_0x0ed621a0(&puStack_2f8,uStack_310._4_4_);
    puStack_2f8 = (undefined *)CONCAT62(puStack_2f8._2_6_,1);
    uStack_2e8 = uStack_310._4_4_;
    plStack_2e0 = (long *)0x0;
    lStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    lStack_2c0 = 0;
    uStack_2b8 = 0x22;
    uStack_2b7 = _DAT_012c1bb1;
    uStack_2b3 = _UNK_012c1bb5;
    uStack_2af = _UNK_012c1bb9;
    uStack_2ab = _UNK_012c1bbd;
    uStack_2a7 = 0x44;
    lStack_2a0 = 0;
    lStack_298 = 0;
    lStack_290 = 0;
    lStack_288 = 0;
    lStack_280 = 0;
    lStack_278 = 0;
    uStack_270 = 0x3f600000;
    puStack_2f0 = &uStack_330;
    func_0x048afb10(&lStack_2a0,8);
    uStack_248 = 0;
    lStack_240 = 0;
    lStack_258 = 0;
    uStack_250 = 0;
    lStack_268 = 0;
    lStack_260 = 0;
    uStack_238 = 0xff00;
    uStack_234 = uStack_234 & 0xffffff00;
    uStack_230 = uStack_230 & 0xffffff00;
    uStack_22c = 0;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0f0e9460;
    if (plStack_2e0 != (long *)0x0) {
      lVar3 = *plStack_2e0;
      plStack_2e0 = plVar12;
      (**(code **)(lVar3 + 8))();
      plVar12 = plStack_2e0;
    }
    plStack_2e0 = plVar12;
    auStack_3a8[0] = uStack_2e8;
    plStack_3a0 = (long *)0x0;
    uStack_398 = (long *)((ulong)uStack_398._4_4_ << 0x20);
    uStack_390 = 1;
    uStack_388 = 0;
    puStack_380 = &UNK_0777bd00;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &SUB_0777ba20;
    puStack_368 = &UNK_0878b880;
    puStack_360 = &UNK_0878b9e0;
    uStack_358 = 0;
    uStack_350 = 0;
    plStack_348 = (long *)0x0;
    func_0x048b05a0(puStack_2f0,auStack_3a8);
    plVar12 = plStack_348;
    if (plStack_348 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_348 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_348 + 0x10))(plStack_348);
        func_0x0412c2d0(plVar12);
      }
    }
    puVar7 = puStack_2f0;
    if ((DAT_0f550a20 == '\0') && (iVar9 = func_0x04108328(&DAT_0f550a20), iVar9 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_3a8[0] = _DAT_0f550a0c;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar3 = lStack_2d8;
    plVar1 = plStack_2e0;
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = (long)&UNK_0ef439d0;
    plStack_3a0 = plVar12 + 3;
    plStack_2e0 = (long *)0x0;
    lStack_2d8 = 0;
    plVar12[3] = (long)plVar1;
    plVar12[4] = lVar3;
    plVar12[7] = lStack_2c0;
    plVar12[5] = uStack_2d0;
    plVar12[6] = uStack_2c8;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    lStack_2c0 = 0;
    plVar12[10] = CONCAT53(uStack_2a5,CONCAT21(uStack_2a7,uStack_2ab._3_1_));
    plVar12[8] = CONCAT35((undefined3)uStack_2b3,CONCAT41(uStack_2b7,uStack_2b8));
    plVar12[9] = CONCAT35((undefined3)uStack_2ab,CONCAT41(uStack_2af,uStack_2b3._3_1_));
    uStack_2b8 = 0;
    uStack_2b7 = 0;
    uStack_2b3 = 0;
    uStack_2af = 0;
    uStack_2ab = 0;
    uStack_2a7 = 0;
    uStack_2a5 = 0;
    plVar12[0xb] = lStack_2a0;
    plVar12[0xc] = lStack_298;
    plVar12[0xd] = lStack_290;
    lStack_2a0 = 0;
    lStack_298 = 0;
    lStack_290 = 0;
    plVar12[0xe] = lStack_288;
    plVar12[0xf] = lStack_280;
    plVar12[0x10] = lStack_278;
    lStack_288 = 0;
    lStack_280 = 0;
    lStack_278 = 0;
    *(undefined4 *)(plVar12 + 0x11) = uStack_270;
    plVar12[0x12] = lStack_268;
    plVar12[0x13] = lStack_260;
    plVar12[0x14] = lStack_258;
    lStack_268 = 0;
    lStack_260 = 0;
    lStack_258 = 0;
    plVar12[0x17] = lStack_240;
    *(undefined4 *)(plVar12 + 0x15) = (undefined4)uStack_250;
    *(undefined4 *)((long)plVar12 + 0xac) = uStack_250._4_4_;
    *(undefined4 *)(plVar12 + 0x16) = (undefined4)uStack_248;
    *(undefined4 *)((long)plVar12 + 0xb4) = uStack_248._4_4_;
    uStack_250 = 0;
    uStack_248 = 0;
    lStack_240 = 0;
    *(ulong *)((long)plVar12 + 0xc5) = CONCAT17(uStack_22c,CONCAT43(uStack_230,uStack_234._1_3_));
    plVar12[0x18] = CONCAT44(uStack_234,CONCAT22(uStack_236,uStack_238));
    uStack_228 = 0;
    uStack_220 = (long *)0x0;
    uStack_398 = plVar12;
    func_0x048afd20(puVar7,auStack_3a8);
    plVar12 = uStack_398;
    if (uStack_398 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_398 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*uStack_398 + 0x10))(uStack_398);
        func_0x0412c2d0(plVar12);
      }
    }
    plVar12 = uStack_220;
    if (uStack_220 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_220 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*uStack_220 + 0x10))(uStack_220);
        func_0x0412c2d0(plVar12);
      }
    }
    lVar3 = *(long *)(puVar7 + 4);
    iVar9 = puVar7[7];
    if (iVar9 == 2) {
      piVar14 = *(int **)(*(long *)(lVar3 + 0x78) + 0x60);
      iVar9 = *piVar14;
      while (iVar9 != puVar7[6]) {
        piVar14 = piVar14 + 0x16;
        iVar9 = *piVar14;
      }
      for (; *(long *)(piVar14 + 0xc) != *(long *)(puVar7 + 2); piVar14 = *(int **)(piVar14 + 0xe))
      {
      }
LAB_086c95da:
      piVar14[4] = piVar14[4] | (int)puStack_2f8 << 0x10;
    }
    else {
      if (iVar9 == 1) {
        piVar14 = *(int **)(*(long *)(lVar3 + 0x78) + 0x48);
        iVar9 = *piVar14;
        while (iVar9 != puVar7[6]) {
          piVar14 = piVar14 + 0x1a;
          iVar9 = *piVar14;
        }
        goto LAB_086c95da;
      }
      if (iVar9 == 0) {
        *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) | (int)puStack_2f8 << 0x10;
      }
    }
    FUN_048b0bc0(&plStack_2e0);
  }
  func_0x07bed8a0(param_1);
  if ((DAT_0f5dcd60 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5dcd60), iVar9 != 0)) {
    func_0x08786370();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dcce0,0xf53dab8);
    func_0x0410844d(&DAT_0f5dcd60);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5dcce0 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_086c9650;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5dcce0 + 4));
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_086c9650:
    puVar11 = &DAT_0f5dcce0;
    if (iRam000000000f5dcd40 != -0x2b3da790) goto LAB_086c96a5;
LAB_086c967b:
    lVar3 = *(long *)(puVar11 + 0x68);
    if (lVar3 == 0) goto LAB_086c96a5;
    bVar20 = (*(byte *)(lVar3 + 8) & 1) != 0;
    puVar11 = (undefined *)(lVar3 + 9);
    if (bVar20) {
      puVar11 = *(undefined **)(lVar3 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar20) {
      uVar17 = *(ulong *)(lVar3 + 0x10);
    }
  }
  else {
    puVar11 = (undefined *)plVar12[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_086c967b;
LAB_086c96a5:
    puVar11 = &UNK_0129231e;
    uVar17 = 0x10;
  }
  func_0x087867b0(&uStack_338,param_1,puVar11,uVar17);
  uStack_304 = uStack_304 & 0xffffff00;
  cStack_300 = '\0';
  if (cStack_308 != '\0') goto LAB_086ca1e0;
  func_0x08789ef0(&puStack_2f8,&UNK_012da89a,6);
  uVar17 = uStack_2d0 >> 1 & 0x7f;
  lVar3 = (long)&uStack_2d0 + 1;
  lVar16 = lVar3;
  if ((uStack_2d0 & 1) != 0) {
    uVar17 = uStack_2c8;
    lVar16 = lStack_2c0;
  }
  if (uVar17 == 0) {
    uStack_310._4_4_ = 0x811c9dc5;
  }
  else {
    uVar13 = (ulong)((uint)uVar17 & 3);
    if (uVar17 < 4) {
      uStack_310._4_4_ = 0x811c9dc5;
      uVar18 = 0;
    }
    else {
      uStack_310._4_4_ = 0x811c9dc5;
      uVar18 = 0;
      do {
        uStack_310._4_4_ =
             ((int)*(char *)(lVar16 + 3 + uVar18) ^
             ((int)*(char *)(lVar16 + 2 + uVar18) ^
             ((int)*(char *)(lVar16 + 1 + uVar18) ^
             ((int)*(char *)(lVar16 + uVar18) ^ uStack_310._4_4_) * 0x1000193) * 0x1000193) *
             0x1000193) * 0x1000193;
        uVar18 = uVar18 + 4;
      } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
    }
    if (uVar13 != 0) {
      uVar17 = 0;
      do {
        uStack_310._4_4_ = ((int)*(char *)(lVar16 + uVar18 + uVar17) ^ uStack_310._4_4_) * 0x1000193
        ;
        uVar17 = uVar17 + 1;
      } while (uVar13 != uVar17);
    }
  }
  uStack_310._0_4_ = 2;
  uVar6 = (int)uStack_310;
  uStack_310._0_4_ = 2;
  if ((DAT_0f5dcd80 == '\0') &&
     (uStack_310._0_4_ = uVar6, iVar9 = func_0x04108328(&DAT_0f5dcd80), iVar9 != 0)) {
    func_0x08786480();
    func_0x0410844d(&DAT_0f5dcd80);
  }
  auStack_3a8[0] = uStack_310._4_4_;
  plStack_3a0 = (long *)0x0;
  uStack_398 = (long *)CONCAT44(uStack_398._4_4_,3);
  uStack_390 = 1;
  uStack_388 = 0;
  puStack_380 = &UNK_0878a500;
  puStack_378 = &SUB_048b06d0;
  puStack_370 = &UNK_087862b0;
  puStack_368 = &UNK_0878a5c0;
  puStack_360 = &UNK_0878a5d0;
  uStack_358 = 0;
  uStack_350 = 0;
  plStack_348 = (long *)0x0;
  func_0x048b05a0(&uStack_330,auStack_3a8);
  plVar12 = plStack_348;
  if (plStack_348 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_348 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_348 + 0x10))(plStack_348);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_218 = uStack_320;
  uStack_214 = uStack_31c;
  uStack_210 = uStack_318;
  uStack_20c = uStack_314;
  func_0x0878a290(auStack_3a8,&uStack_228,&puStack_2f8);
  if (uStack_390._4_4_ == 2) {
    piVar14 = *(int **)(*(long *)((long)uStack_398 + 0x78) + 0x60);
    iVar9 = *piVar14;
    while (iVar9 != (int)uStack_390) {
      piVar14 = piVar14 + 0x16;
      iVar9 = *piVar14;
    }
    lVar16 = *(long *)(piVar14 + 0xc);
    while ((long *)lVar16 != plStack_3a0) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar16 = *(long *)(piVar14 + 0xc);
    }
LAB_086c992f:
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
  }
  else {
    if (uStack_390._4_4_ == 1) {
      piVar14 = *(int **)(*(long *)((long)uStack_398 + 0x78) + 0x48);
      iVar9 = *piVar14;
      while (iVar9 != (int)uStack_390) {
        piVar14 = piVar14 + 0x1a;
        iVar9 = *piVar14;
      }
      goto LAB_086c992f;
    }
    if (uStack_390._4_4_ == 0) {
      *(uint *)((long)uStack_398 + 0x18) = *(uint *)((long)uStack_398 + 0x18) | 0x90000;
    }
  }
  if (cStack_300 == '\0') {
    func_0x0878a620(auStack_3a8,&uStack_338);
  }
  uVar15 = uStack_304;
  lVar16 = CONCAT44(uStack_334,uStack_338);
  if ((DAT_0f5dcd60 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5dcd60), iVar9 != 0)) {
    func_0x08786370();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dcce0,0xf53dab8);
    func_0x0410844d(&DAT_0f5dcd60);
  }
  lVar2 = (long)&uStack_310 + 4;
  plVar12 = (long *)(*(long *)(lVar16 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5dcce0 + 4)) * 8);
  do {
    lVar4 = *plVar12;
    if (lVar4 == -1) goto LAB_086c99c1;
    plVar12 = (long *)(*(long *)(lVar16 + 0x30) + lVar4 * 0x18);
  } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5dcce0 + 4));
  if (plVar12 == *(long **)(lVar16 + 0x38)) {
LAB_086c99c1:
    puVar11 = &DAT_0f5dcce0;
  }
  else {
    puVar11 = (undefined *)plVar12[2];
  }
  puVar5 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x28);
  for (puVar19 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x20);
      (puVar19 != puVar5 && (*puVar19 != uVar15)); puVar19 = puVar19 + 0xe) {
  }
  if ((puVar19 == puVar5) &&
     (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0132ca09),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_3a8[0] = auStack_3a8[0] & 0xffffff00;
  FUN_05d9c620(puVar19 + 2,lVar2,lVar2,auStack_3a8);
  FUN_048b0bc0(&puStack_2f8);
  func_0x08789ef0(&puStack_2f8,&UNK_012de2e4,9);
  uVar17 = uStack_2d0 >> 1 & 0x7f;
  lVar16 = lVar3;
  if ((uStack_2d0 & 1) != 0) {
    uVar17 = uStack_2c8;
    lVar16 = lStack_2c0;
  }
  if (uVar17 == 0) {
    uStack_310._4_4_ = 0x811c9dc5;
  }
  else {
    uVar13 = (ulong)((uint)uVar17 & 3);
    if (uVar17 < 4) {
      uStack_310._4_4_ = 0x811c9dc5;
      uVar18 = 0;
    }
    else {
      uStack_310._4_4_ = 0x811c9dc5;
      uVar18 = 0;
      do {
        uStack_310._4_4_ =
             ((int)*(char *)(lVar16 + 3 + uVar18) ^
             ((int)*(char *)(lVar16 + 2 + uVar18) ^
             ((int)*(char *)(lVar16 + 1 + uVar18) ^
             ((int)*(char *)(lVar16 + uVar18) ^ uStack_310._4_4_) * 0x1000193) * 0x1000193) *
             0x1000193) * 0x1000193;
        uVar18 = uVar18 + 4;
      } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
    }
    if (uVar13 != 0) {
      uVar17 = 0;
      do {
        uStack_310._4_4_ = ((int)*(char *)(lVar16 + uVar18 + uVar17) ^ uStack_310._4_4_) * 0x1000193
        ;
        uVar17 = uVar17 + 1;
      } while (uVar13 != uVar17);
    }
  }
  uStack_310._0_4_ = 2;
  if ((DAT_0f5dcd80 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5dcd80), iVar9 != 0)) {
    func_0x08786480();
    func_0x0410844d(&DAT_0f5dcd80);
  }
  auStack_3a8[0] = uStack_310._4_4_;
  plStack_3a0 = (long *)0x0;
  uStack_398 = (long *)CONCAT44(uStack_398._4_4_,3);
  uStack_390 = 1;
  uStack_388 = 0;
  puStack_380 = &UNK_0878a500;
  puStack_378 = &SUB_048b06d0;
  puStack_370 = &UNK_087862b0;
  puStack_368 = &UNK_0878a7e0;
  puStack_360 = &UNK_0878a7f0;
  uStack_358 = 0;
  uStack_350 = 0;
  plStack_348 = (long *)0x0;
  func_0x048b05a0(&uStack_330,auStack_3a8);
  plVar12 = plStack_348;
  if (plStack_348 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_348 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_348 + 0x10))(plStack_348);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_218 = uStack_320;
  uStack_214 = uStack_31c;
  uStack_210 = uStack_318;
  uStack_20c = uStack_314;
  func_0x0878a290(auStack_3a8,&uStack_228,&puStack_2f8);
  if (uStack_390._4_4_ == 2) {
    piVar14 = *(int **)(*(long *)((long)uStack_398 + 0x78) + 0x60);
    iVar9 = *piVar14;
    while (iVar9 != (int)uStack_390) {
      piVar14 = piVar14 + 0x16;
      iVar9 = *piVar14;
    }
    lVar16 = *(long *)(piVar14 + 0xc);
    while ((long *)lVar16 != plStack_3a0) {
      piVar14 = *(int **)(piVar14 + 0xe);
      lVar16 = *(long *)(piVar14 + 0xc);
    }
LAB_086c9cff:
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
  }
  else {
    if (uStack_390._4_4_ == 1) {
      piVar14 = *(int **)(*(long *)((long)uStack_398 + 0x78) + 0x48);
      iVar9 = *piVar14;
      while (iVar9 != (int)uStack_390) {
        piVar14 = piVar14 + 0x1a;
        iVar9 = *piVar14;
      }
      goto LAB_086c9cff;
    }
    if (uStack_390._4_4_ == 0) {
      *(uint *)((long)uStack_398 + 0x18) = *(uint *)((long)uStack_398 + 0x18) | 0x90000;
    }
  }
  if (cStack_300 == '\0') {
    func_0x0878a620(auStack_3a8,&uStack_338);
  }
  uVar15 = uStack_304;
  lVar16 = CONCAT44(uStack_334,uStack_338);
  if ((DAT_0f5dcd60 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5dcd60), iVar9 != 0)) {
    func_0x08786370();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dcce0,0xf53dab8);
    func_0x0410844d(&DAT_0f5dcd60);
  }
  plVar12 = (long *)(*(long *)(lVar16 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f5dcce0 + 4)) * 8);
  do {
    lVar4 = *plVar12;
    if (lVar4 == -1) goto LAB_086c9d91;
    plVar12 = (long *)(*(long *)(lVar16 + 0x30) + lVar4 * 0x18);
  } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f5dcce0 + 4));
  if (plVar12 == *(long **)(lVar16 + 0x38)) {
LAB_086c9d91:
    puVar11 = &DAT_0f5dcce0;
  }
  else {
    puVar11 = (undefined *)plVar12[2];
  }
  puVar5 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x28);
  for (puVar19 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x20);
      (puVar19 != puVar5 && (*puVar19 != uVar15)); puVar19 = puVar19 + 0xe) {
  }
  if ((puVar19 == puVar5) &&
     (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0132ca09),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_3a8[0] = auStack_3a8[0] & 0xffffff00;
  FUN_05d9c620(puVar19 + 2,lVar2,lVar2,auStack_3a8);
  FUN_048b0bc0(&puStack_2f8);
  func_0x08789ef0(&puStack_2f8,&UNK_0149c125,5);
  uVar17 = uStack_2d0 >> 1 & 0x7f;
  if ((uStack_2d0 & 1) != 0) {
    uVar17 = uStack_2c8;
    lVar3 = lStack_2c0;
  }
  if (uVar17 == 0) {
    uVar15 = 0x811c9dc5;
  }
  else {
    uVar13 = (ulong)((uint)uVar17 & 3);
    if (uVar17 < 4) {
      uVar15 = 0x811c9dc5;
      uVar18 = 0;
    }
    else {
      uVar15 = 0x811c9dc5;
      uVar18 = 0;
      do {
        uVar15 = ((int)*(char *)(lVar3 + 3 + uVar18) ^
                 ((int)*(char *)(lVar3 + 2 + uVar18) ^
                 ((int)*(char *)(lVar3 + 1 + uVar18) ^
                 ((int)*(char *)(lVar3 + uVar18) ^ uVar15) * 0x1000193) * 0x1000193) * 0x1000193) *
                 0x1000193;
        uVar18 = uVar18 + 4;
      } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
    }
    if (uVar13 != 0) {
      uVar17 = 0;
      do {
        uVar15 = ((int)*(char *)(lVar3 + uVar18 + uVar17) ^ uVar15) * 0x1000193;
        uVar17 = uVar17 + 1;
      } while (uVar13 != uVar17);
    }
  }
  uStack_310 = CONCAT44(uVar15,2);
  if ((DAT_0f5dcd80 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5dcd80), iVar9 != 0)) {
    func_0x08786480();
    func_0x0410844d(&DAT_0f5dcd80);
  }
  auStack_3a8[0] = uStack_310._4_4_;
  plStack_3a0 = (long *)0x0;
  uStack_398 = (long *)CONCAT44(uStack_398._4_4_,3);
  uStack_390 = 1;
  uStack_388 = 0;
  puStack_380 = &UNK_0878a500;
  puStack_378 = &SUB_048b06d0;
  puStack_370 = &UNK_087862b0;
  puStack_368 = &UNK_0878a840;
  puStack_360 = &UNK_0878a850;
  uStack_358 = 0;
  uStack_350 = 0;
  plStack_348 = (long *)0x0;
  func_0x048b05a0(&uStack_330,auStack_3a8);
  plVar12 = plStack_348;
  if (plStack_348 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_348 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_348 + 0x10))(plStack_348);
      func_0x0412c2d0(plVar12);
    }
  }
  uStack_218 = uStack_320;
  uStack_214 = uStack_31c;
  uStack_210 = uStack_318;
  uStack_20c = uStack_314;
  uStack_228 = CONCAT44(uStack_32c,uStack_330);
  uStack_220 = (long *)CONCAT44(uStack_324,uStack_328);
  func_0x0878a290(auStack_3a8,&uStack_228,&puStack_2f8);
  if (uStack_390._4_4_ == 2) {
    piVar14 = *(int **)(uStack_398[0xf] + 0x60);
    iVar9 = *piVar14;
    while (iVar9 != (int)uStack_390) {
      piVar14 = piVar14 + 0x16;
      iVar9 = *piVar14;
    }
    plVar12 = *(long **)(piVar14 + 0xc);
    while (plVar12 != plStack_3a0) {
      piVar14 = *(int **)(piVar14 + 0xe);
      plVar12 = *(long **)(piVar14 + 0xc);
    }
LAB_086ca0bf:
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 9;
  }
  else {
    if (uStack_390._4_4_ == 1) {
      piVar14 = *(int **)(uStack_398[0xf] + 0x48);
      iVar9 = *piVar14;
      while (iVar9 != (int)uStack_390) {
        piVar14 = piVar14 + 0x1a;
        iVar9 = *piVar14;
      }
      goto LAB_086ca0bf;
    }
    if (uStack_390._4_4_ == 0) {
      *(uint *)(uStack_398 + 3) = *(uint *)(uStack_398 + 3) | 0x90000;
    }
  }
  if (cStack_300 == '\0') {
    func_0x0878a620(auStack_3a8,&uStack_338);
  }
  uVar15 = uStack_304;
  lVar3 = CONCAT44(uStack_334,uStack_338);
  if ((DAT_0f5dcd60 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5dcd60), iVar9 != 0)) {
    func_0x08786370();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dcce0,0xf53dab8);
    func_0x0410844d(&DAT_0f5dcd60);
  }
  plVar12 = (long *)(*(long *)(lVar3 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5dcce0 + 4)) * 8);
  do {
    lVar16 = *plVar12;
    if (lVar16 == -1) goto LAB_086ca140;
    plVar12 = (long *)(*(long *)(lVar3 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5dcce0 + 4));
  if (plVar12 == *(long **)(lVar3 + 0x38)) {
LAB_086ca140:
    puVar11 = &DAT_0f5dcce0;
  }
  else {
    puVar11 = (undefined *)plVar12[2];
  }
  puVar5 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x28);
  for (puVar19 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x20);
      (puVar19 != puVar5 && (*puVar19 != uVar15)); puVar19 = puVar19 + 0xe) {
  }
  if ((puVar19 == puVar5) &&
     (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0132ca09),
     cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_3a8[0] = auStack_3a8[0] & 0xffffff00;
  FUN_05d9c620(puVar19 + 2,lVar2,lVar2,auStack_3a8);
  FUN_048b0bc0(&puStack_2f8);
LAB_086ca1e0:
  if ((DAT_0f5dced0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5dced0), iVar9 != 0)) {
    func_0x0878bc70();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dce50,0xf53dab8);
    func_0x0410844d(&DAT_0f5dced0);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5dce50 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_086ca240;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5dce50 + 4));
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_086ca240:
    puVar11 = &DAT_0f5dce50;
    iVar9 = iRam000000000f5dceb0;
  }
  else {
    puVar11 = (undefined *)plVar12[2];
    iVar9 = *(int *)(puVar11 + 0x60);
  }
  if ((iVar9 == -0x2b3da790) && (lVar3 = *(long *)(puVar11 + 0x68), lVar3 != 0)) {
    bVar20 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar16 = lVar3 + 9;
    if (bVar20) {
      lVar16 = *(long *)(lVar3 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar20) {
      uVar17 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x0878c0c0(&uStack_338,param_1,lVar16,uVar17);
  }
  else {
    func_0x0878c0c0(&uStack_338,param_1,&UNK_012de2ee,0x10);
  }
  if (cStack_308 == '\0') {
    func_0x0878cbe0(&puStack_2f8,&uStack_338,&UNK_012dba9e,0xe);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0f011f18;
    if (plStack_2e0 != (long *)0x0) {
      lVar3 = *plStack_2e0;
      plStack_2e0 = plVar12;
      (**(code **)(lVar3 + 8))();
      plVar12 = plStack_2e0;
    }
    plStack_2e0 = plVar12;
    auStack_3a8[0] = uStack_2e8;
    plStack_3a0 = (long *)0x0;
    uStack_398 = (long *)((ulong)uStack_398 & 0xffffffff00000000);
    uStack_390 = 1;
    uStack_388 = 0;
    puStack_380 = &UNK_05f27580;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &SUB_05f23890;
    puStack_368 = &UNK_0878d190;
    puStack_360 = &UNK_0878d300;
    uStack_358 = 0;
    uStack_350 = 0;
    plStack_348 = (long *)0x0;
    func_0x048b05a0(puStack_2f0,auStack_3a8);
    plVar12 = plStack_348;
    if (plStack_348 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_348 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_348 + 0x10))(plStack_348);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x0878ce90(&puStack_2f8);
    cStack_1b8 = cStack_308;
    uStack_1c8 = uStack_318;
    uStack_1c4 = uStack_314;
    iStack_1c0 = (int)uStack_310;
    uStack_1bc = uStack_310._4_4_;
    uStack_1d8 = uStack_328;
    uStack_1d4 = uStack_324;
    uStack_1d0 = uStack_320;
    uStack_1cc = uStack_31c;
    uStack_1e8 = uStack_338;
    uStack_1e4 = uStack_334;
    uStack_1e0 = uStack_330;
    uStack_1dc = uStack_32c;
    FUN_048b0bc0(&plStack_2e0);
    func_0x0878cbe0(&puStack_2f8,&uStack_1e8,&UNK_01398901,0x12);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0f012080;
    if (plStack_2e0 != (long *)0x0) {
      lVar3 = *plStack_2e0;
      plStack_2e0 = plVar12;
      (**(code **)(lVar3 + 8))();
      plVar12 = plStack_2e0;
    }
    plStack_2e0 = plVar12;
    auStack_3a8[0] = uStack_2e8;
    plStack_3a0 = (long *)0x0;
    uStack_398 = (long *)((ulong)uStack_398 & 0xffffffff00000000);
    uStack_390 = 1;
    uStack_388 = 0;
    puStack_380 = &UNK_077d4a20;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &UNK_05dd3990;
    puStack_368 = &UNK_0878d4d0;
    puStack_360 = &UNK_0878d630;
    uStack_358 = 0;
    uStack_350 = 0;
    plStack_348 = (long *)0x0;
    func_0x048b05a0(puStack_2f0,auStack_3a8);
    plVar12 = plStack_348;
    if (plStack_348 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_348 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_348 + 0x10))(plStack_348);
        func_0x0412c2d0(plVar12);
      }
    }
    iVar9 = puStack_2f0[7];
    if (iVar9 == 2) {
      piVar14 = *(int **)(*(long *)(*(long *)(puStack_2f0 + 4) + 0x78) + 0x60);
      iVar9 = *piVar14;
      while (iVar9 != puStack_2f0[6]) {
        piVar14 = piVar14 + 0x16;
        iVar9 = *piVar14;
      }
      lVar3 = *(long *)(piVar14 + 0xc);
      while (lVar3 != *(long *)(puStack_2f0 + 2)) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar3 = *(long *)(piVar14 + 0xc);
      }
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else if (iVar9 == 1) {
      piVar14 = *(int **)(*(long *)(*(long *)(puStack_2f0 + 4) + 0x78) + 0x48);
      iVar9 = *piVar14;
      while (iVar9 != puStack_2f0[6]) {
        piVar14 = piVar14 + 0x1a;
        iVar9 = *piVar14;
      }
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else if (iVar9 == 0) {
      *(uint *)(*(long *)(puStack_2f0 + 4) + 0x18) =
           *(uint *)(*(long *)(puStack_2f0 + 4) + 0x18) | 0x40000;
    }
    func_0x0878ce90(&puStack_2f8);
    uVar6 = uStack_1bc;
    iVar9 = iStack_1c0;
    lVar3 = CONCAT44(uStack_1e4,uStack_1e8);
    uStack_168 = CONCAT44(uStack_1dc,uStack_1e0);
    uStack_160 = CONCAT44(uStack_1d4,uStack_1d8);
    uStack_158 = uStack_1d0;
    uStack_154 = uStack_1cc;
    uStack_150 = uStack_1c8;
    uStack_14c = uStack_1c4;
    cStack_339 = cStack_1b8;
    FUN_048b0bc0(&plStack_2e0);
    if ((DAT_0f5dced0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5dced0), iVar10 != 0)) {
      func_0x0878bc70();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dce50,0xf53dab8);
      func_0x0410844d(&DAT_0f5dced0);
    }
    plVar12 = (long *)(*(long *)(lVar3 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18)) >> 3)
                              - 1U & *(uint *)(_DAT_0f5dce50 + 4)) * 8);
    do {
      lVar16 = *plVar12;
      if (lVar16 == -1) goto LAB_086ca720;
      plVar12 = (long *)(*(long *)(lVar3 + 0x30) + lVar16 * 0x18);
    } while (*(uint *)(*(long *)(lVar3 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f5dce50 + 4))
    ;
    if (plVar12 == *(long **)(lVar3 + 0x38)) {
LAB_086ca720:
      puVar11 = &DAT_0f5dce50;
    }
    else {
      puVar11 = (undefined *)plVar12[2];
    }
    if ((1 < iVar9 - 1U) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_011f42c8),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar11 = (undefined *)func_0x048b0c90(lVar3 + 0x18,puVar11,uVar6,1);
    if (puVar11 == (undefined *)0x0) {
      puStack_2f8 = (undefined *)0x0;
      puStack_2f0 = (undefined4 *)0x0;
      func_0x048b0d20(&puStack_2f8);
      puVar11 = puStack_2f8;
    }
    *(undefined1 *)(*(long *)(puVar11 + 0x58) + 0xa8) = 1;
    uStack_1a0 = (undefined4)uStack_168;
    uStack_19c = uStack_168._4_4_;
    uStack_198 = (undefined4)uStack_160;
    uStack_194 = uStack_160._4_4_;
    uStack_190 = uStack_158;
    uStack_18c = uStack_154;
    uStack_188 = uStack_150;
    uStack_184 = uStack_14c;
    iStack_180 = iVar9;
    uStack_17c = uVar6;
    cStack_178 = cStack_339;
    uStack_1a8 = lVar3;
    func_0x0878cbe0(&puStack_2f8,&uStack_1a8,&UNK_01229bd8,0xd);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef46ef8;
    if (plStack_2e0 != (long *)0x0) {
      lVar3 = *plStack_2e0;
      plStack_2e0 = plVar12;
      (**(code **)(lVar3 + 8))();
      plVar12 = plStack_2e0;
    }
    plStack_2e0 = plVar12;
    auStack_3a8[0] = uStack_2e8;
    plStack_3a0 = (long *)0x0;
    uStack_398 = (long *)((ulong)uStack_398 & 0xffffffff00000000);
    uStack_390 = 1;
    uStack_388 = 0;
    puStack_380 = &UNK_04906f70;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &SUB_04906c50;
    puStack_368 = &UNK_0878d740;
    puStack_360 = &UNK_0878d8a0;
    uStack_358 = 0;
    uStack_350 = 0;
    plStack_348 = (long *)0x0;
    func_0x048b05a0(puStack_2f0,auStack_3a8);
    plVar12 = plStack_348;
    if (plStack_348 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_348 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_348 + 0x10))(plStack_348);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x0878ce90(&puStack_2f8);
    cStack_1f8 = cStack_178;
    uStack_208 = uStack_188;
    uStack_204 = uStack_184;
    iStack_200 = iStack_180;
    uStack_1fc = uStack_17c;
    uStack_218 = uStack_198;
    uStack_214 = uStack_194;
    uStack_210 = uStack_190;
    uStack_20c = uStack_18c;
    uStack_228 = uStack_1a8;
    uStack_220 = (long *)CONCAT44(uStack_19c,uStack_1a0);
    FUN_048b0bc0(&plStack_2e0);
    func_0x0878cbe0(&puStack_2f8,&uStack_228,&UNK_01419dce,0xe);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef46ef8;
    if (plStack_2e0 != (long *)0x0) {
      lVar3 = *plStack_2e0;
      plStack_2e0 = plVar12;
      (**(code **)(lVar3 + 8))();
      plVar12 = plStack_2e0;
    }
    plStack_2e0 = plVar12;
    auStack_3a8[0] = uStack_2e8;
    plStack_3a0 = (long *)0x0;
    uStack_398 = (long *)((ulong)uStack_398 & 0xffffffff00000000);
    uStack_390 = 1;
    uStack_388 = 0;
    puStack_380 = &UNK_04906f70;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &SUB_04906c50;
    puStack_368 = &UNK_0878da80;
    puStack_360 = &UNK_0878dbe0;
    uStack_358 = 0;
    uStack_350 = 0;
    plStack_348 = (long *)0x0;
    func_0x048b05a0(puStack_2f0,auStack_3a8);
    plVar12 = plStack_348;
    if (plStack_348 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_348 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_348 + 0x10))(plStack_348);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x0878ce90(&puStack_2f8);
    FUN_048b0bc0(&plStack_2e0);
  }
  if ((DAT_0f5dcc20 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5dcc20), iVar9 != 0)) {
    func_0x08783bc0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dcba0,0xf53dab8);
    func_0x0410844d(&DAT_0f5dcc20);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5dcba0 + 4)) * 8);
  do {
    lVar3 = *plVar12;
    if (lVar3 == -1) goto LAB_086cab00;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar3 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar3 * 0x18) != *(uint *)(_DAT_0f5dcba0 + 4));
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_086cab00:
    puVar11 = &DAT_0f5dcba0;
    iVar9 = iRam000000000f5dcc00;
  }
  else {
    puVar11 = (undefined *)plVar12[2];
    iVar9 = *(int *)(puVar11 + 0x60);
  }
  if ((iVar9 == -0x2b3da790) && (lVar3 = *(long *)(puVar11 + 0x68), lVar3 != 0)) {
    bVar20 = (*(byte *)(lVar3 + 8) & 1) != 0;
    lVar16 = lVar3 + 9;
    if (bVar20) {
      lVar16 = *(long *)(lVar3 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar3 + 8) >> 1);
    if (bVar20) {
      uVar17 = *(ulong *)(lVar3 + 0x10);
    }
    func_0x0878ddc0(&uStack_338,param_1,lVar16,uVar17);
  }
  else {
    func_0x0878ddc0(&uStack_338,param_1,&UNK_01363bfc,0x1f);
  }
  if (cStack_308 == '\0') {
    func_0x0878e960(&puStack_2f8,&uStack_338,&UNK_012dc869,6);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0f12af50;
    if (plStack_2e0 != (long *)0x0) {
      lVar3 = *plStack_2e0;
      plStack_2e0 = plVar12;
      (**(code **)(lVar3 + 8))();
      plVar12 = plStack_2e0;
    }
    plStack_2e0 = plVar12;
    auStack_3a8[0] = uStack_2e8;
    plStack_3a0 = (long *)0x0;
    uStack_398 = (long *)((ulong)uStack_398 & 0xffffffff00000000);
    uStack_390 = 1;
    uStack_388 = 0;
    puStack_380 = &UNK_08792c40;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &UNK_08791a40;
    puStack_368 = &UNK_08792d00;
    puStack_360 = &UNK_08792e70;
    uStack_358 = 0;
    uStack_350 = 0;
    plStack_348 = (long *)0x0;
    func_0x048b05a0(puStack_2f0,auStack_3a8);
    plVar12 = plStack_348;
    if (plStack_348 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_348 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_348 + 0x10))(plStack_348);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x0878ec10(&puStack_2f8);
    cStack_38 = cStack_308;
    uStack_48 = uStack_318;
    uStack_44 = uStack_314;
    uStack_40 = (int)uStack_310;
    uStack_3c = uStack_310._4_4_;
    uStack_58 = uStack_328;
    uStack_54 = uStack_324;
    uStack_50 = uStack_320;
    uStack_4c = uStack_31c;
    uStack_68 = uStack_338;
    uStack_64 = uStack_334;
    uStack_60 = uStack_330;
    uStack_5c = uStack_32c;
    FUN_048b0bc0(&plStack_2e0);
    uStack_128 = uStack_68;
    uStack_124 = uStack_64;
    uStack_120 = uStack_60;
    uStack_11c = uStack_5c;
    uStack_118 = uStack_58;
    uStack_114 = uStack_54;
    uStack_110 = uStack_50;
    uStack_10c = uStack_4c;
    uStack_108 = uStack_48;
    uStack_104 = uStack_44;
    uStack_100 = uStack_40;
    uStack_fc = uStack_3c;
    uStack_f8 = CONCAT71(uStack_37,cStack_38);
    func_0x0878e960(&puStack_2f8,&uStack_128,&UNK_014b3477,7);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef44b00;
    if (plStack_2e0 != (long *)0x0) {
      lVar3 = *plStack_2e0;
      plStack_2e0 = plVar12;
      (**(code **)(lVar3 + 8))();
      plVar12 = plStack_2e0;
    }
    plStack_2e0 = plVar12;
    auStack_3a8[0] = uStack_2e8;
    plStack_3a0 = (long *)0x0;
    uStack_398 = (long *)((ulong)uStack_398 & 0xffffffff00000000);
    uStack_390 = 1;
    uStack_388 = 0;
    puStack_380 = &UNK_048b3f30;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &SUB_048b2190;
    puStack_368 = &UNK_087932e0;
    puStack_360 = &UNK_087934b0;
    uStack_358 = 0;
    uStack_350 = 0;
    plStack_348 = (long *)0x0;
    func_0x048b05a0(puStack_2f0,auStack_3a8);
    plVar12 = plStack_348;
    if (plStack_348 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_348 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_348 + 0x10))(plStack_348);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x0878ec10(&puStack_2f8);
    uStack_b8 = (undefined1)uStack_f8;
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
    FUN_048b0bc0(&plStack_2e0);
    func_0x0878e960(&puStack_2f8,&uStack_e8,&UNK_012c4728,0xb);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef44b00;
    if (plStack_2e0 != (long *)0x0) {
      lVar3 = *plStack_2e0;
      plStack_2e0 = plVar12;
      (**(code **)(lVar3 + 8))();
      plVar12 = plStack_2e0;
    }
    plStack_2e0 = plVar12;
    auStack_3a8[0] = uStack_2e8;
    plStack_3a0 = (long *)0x0;
    uStack_398 = (long *)((ulong)uStack_398 & 0xffffffff00000000);
    uStack_390 = 1;
    uStack_388 = 0;
    puStack_380 = &UNK_048b3f30;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &SUB_048b2190;
    puStack_368 = &UNK_08793690;
    puStack_360 = &UNK_08793860;
    uStack_358 = 0;
    uStack_350 = 0;
    plStack_348 = (long *)0x0;
    func_0x048b05a0(puStack_2f0,auStack_3a8);
    plVar12 = plStack_348;
    if (plStack_348 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_348 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_348 + 0x10))(plStack_348);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x0878ec10(&puStack_2f8);
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
    FUN_048b0bc0(&plStack_2e0);
    func_0x0878e960(&puStack_2f8,&uStack_a8,&UNK_012f0cac,4);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef44b00;
    if (plStack_2e0 != (long *)0x0) {
      lVar3 = *plStack_2e0;
      plStack_2e0 = plVar12;
      (**(code **)(lVar3 + 8))();
      plVar12 = plStack_2e0;
    }
    plStack_2e0 = plVar12;
    auStack_3a8[0] = uStack_2e8;
    plStack_3a0 = (long *)0x0;
    uStack_398 = (long *)((ulong)uStack_398 & 0xffffffff00000000);
    uStack_390 = 1;
    uStack_388 = 0;
    puStack_380 = &UNK_0796ff00;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &SUB_048b2190;
    puStack_368 = &UNK_08793a40;
    puStack_360 = &UNK_08793a90;
    uStack_358 = 0;
    uStack_350 = 0;
    plStack_348 = (long *)0x0;
    func_0x048b05a0(puStack_2f0,auStack_3a8);
    plVar12 = plStack_348;
    if (plStack_348 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_348 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_348 + 0x10))(plStack_348);
        func_0x0412c2d0(plVar12);
      }
    }
    iVar9 = puStack_2f0[7];
    if (iVar9 == 2) {
      piVar14 = *(int **)(*(long *)(*(long *)(puStack_2f0 + 4) + 0x78) + 0x60);
      iVar9 = *piVar14;
      while (iVar9 != puStack_2f0[6]) {
        piVar14 = piVar14 + 0x16;
        iVar9 = *piVar14;
      }
      lVar3 = *(long *)(piVar14 + 0xc);
      while (lVar3 != *(long *)(puStack_2f0 + 2)) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar3 = *(long *)(piVar14 + 0xc);
      }
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else if (iVar9 == 1) {
      piVar14 = *(int **)(*(long *)(*(long *)(puStack_2f0 + 4) + 0x78) + 0x48);
      iVar9 = *piVar14;
      while (iVar9 != puStack_2f0[6]) {
        piVar14 = piVar14 + 0x1a;
        iVar9 = *piVar14;
      }
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else if (iVar9 == 0) {
      *(uint *)(*(long *)(puStack_2f0 + 4) + 0x18) =
           *(uint *)(*(long *)(puStack_2f0 + 4) + 0x18) | 0x40000;
    }
    func_0x0878ec10(&puStack_2f8);
    uStack_138 = uStack_78;
    uStack_148 = uStack_88;
    uStack_144 = uStack_84;
    uStack_140 = uStack_80;
    uStack_13c = uStack_7c;
    uStack_158 = uStack_98;
    uStack_154 = uStack_94;
    uStack_150 = uStack_90;
    uStack_14c = uStack_8c;
    uStack_168 = CONCAT44(uStack_a4,uStack_a8);
    uStack_160 = CONCAT44(uStack_9c,uStack_a0);
    FUN_048b0bc0(&plStack_2e0);
    func_0x0878e960(&puStack_2f8,&uStack_168,&UNK_014b4874,0xc);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef44b00;
    if (plStack_2e0 != (long *)0x0) {
      lVar3 = *plStack_2e0;
      plStack_2e0 = plVar12;
      (**(code **)(lVar3 + 8))();
      plVar12 = plStack_2e0;
    }
    plStack_2e0 = plVar12;
    auStack_3a8[0] = uStack_2e8;
    plStack_3a0 = (long *)0x0;
    uStack_398 = (long *)((ulong)uStack_398 & 0xffffffff00000000);
    uStack_390 = 1;
    uStack_388 = 0;
    puStack_380 = &UNK_0796ff00;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &SUB_048b2190;
    puStack_368 = &UNK_08793ed0;
    puStack_360 = &UNK_08793f20;
    uStack_358 = 0;
    uStack_350 = 0;
    plStack_348 = (long *)0x0;
    func_0x048b05a0(puStack_2f0,auStack_3a8);
    plVar12 = plStack_348;
    if (plStack_348 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_348 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_348 + 0x10))(plStack_348);
        func_0x0412c2d0(plVar12);
      }
    }
    iVar9 = puStack_2f0[7];
    if (iVar9 == 2) {
      piVar14 = *(int **)(*(long *)(*(long *)(puStack_2f0 + 4) + 0x78) + 0x60);
      iVar9 = *piVar14;
      while (iVar9 != puStack_2f0[6]) {
        piVar14 = piVar14 + 0x16;
        iVar9 = *piVar14;
      }
      lVar3 = *(long *)(piVar14 + 0xc);
      while (lVar3 != *(long *)(puStack_2f0 + 2)) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar3 = *(long *)(piVar14 + 0xc);
      }
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else if (iVar9 == 1) {
      piVar14 = *(int **)(*(long *)(*(long *)(puStack_2f0 + 4) + 0x78) + 0x48);
      iVar9 = *piVar14;
      while (iVar9 != puStack_2f0[6]) {
        piVar14 = piVar14 + 0x1a;
        iVar9 = *piVar14;
      }
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else if (iVar9 == 0) {
      *(uint *)(*(long *)(puStack_2f0 + 4) + 0x18) =
           *(uint *)(*(long *)(puStack_2f0 + 4) + 0x18) | 0x40000;
    }
    func_0x0878ec10(&puStack_2f8);
    cStack_1b8 = uStack_138;
    uStack_1c8 = uStack_148;
    uStack_1c4 = uStack_144;
    iStack_1c0 = uStack_140;
    uStack_1bc = uStack_13c;
    uStack_1d8 = uStack_158;
    uStack_1d4 = uStack_154;
    uStack_1d0 = uStack_150;
    uStack_1cc = uStack_14c;
    uStack_1e8 = (undefined4)uStack_168;
    uStack_1e4 = uStack_168._4_4_;
    uStack_1e0 = (undefined4)uStack_160;
    uStack_1dc = uStack_160._4_4_;
    FUN_048b0bc0(&plStack_2e0);
    func_0x0878e960(&puStack_2f8,&uStack_1e8,&UNK_0120e8ca,0xc);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef46ef8;
    if (plStack_2e0 != (long *)0x0) {
      lVar3 = *plStack_2e0;
      plStack_2e0 = plVar12;
      (**(code **)(lVar3 + 8))();
      plVar12 = plStack_2e0;
    }
    plStack_2e0 = plVar12;
    auStack_3a8[0] = uStack_2e8;
    plStack_3a0 = (long *)0x0;
    uStack_398 = (long *)((ulong)uStack_398 & 0xffffffff00000000);
    uStack_390 = 1;
    uStack_388 = 0;
    puStack_380 = &UNK_04906f70;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &SUB_04906c50;
    puStack_368 = &UNK_08793ff0;
    puStack_360 = &UNK_08794150;
    uStack_358 = 0;
    uStack_350 = 0;
    plStack_348 = (long *)0x0;
    func_0x048b05a0(puStack_2f0,auStack_3a8);
    plVar12 = plStack_348;
    if (plStack_348 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_348 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_348 + 0x10))(plStack_348);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x0878ec10(&puStack_2f8);
    cStack_178 = cStack_1b8;
    uStack_188 = uStack_1c8;
    uStack_184 = uStack_1c4;
    iStack_180 = iStack_1c0;
    uStack_17c = uStack_1bc;
    uStack_198 = uStack_1d8;
    uStack_194 = uStack_1d4;
    uStack_190 = uStack_1d0;
    uStack_18c = uStack_1cc;
    uStack_1a8 = CONCAT44(uStack_1e4,uStack_1e8);
    uStack_1a0 = uStack_1e0;
    uStack_19c = uStack_1dc;
    FUN_048b0bc0(&plStack_2e0);
    func_0x0878e960(&puStack_2f8,&uStack_1a8,&UNK_013e59b8,10);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef46ce8;
    if (plStack_2e0 != (long *)0x0) {
      lVar3 = *plStack_2e0;
      plStack_2e0 = plVar12;
      (**(code **)(lVar3 + 8))();
      plVar12 = plStack_2e0;
    }
    plStack_2e0 = plVar12;
    auStack_3a8[0] = uStack_2e8;
    plStack_3a0 = (long *)0x0;
    uStack_398 = (long *)((ulong)uStack_398 & 0xffffffff00000000);
    uStack_390 = 1;
    uStack_388 = 0;
    puStack_380 = &UNK_0490ce30;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &SUB_0490cb20;
    puStack_368 = &UNK_08794330;
    puStack_360 = &UNK_08794490;
    uStack_358 = 0;
    uStack_350 = 0;
    plStack_348 = (long *)0x0;
    func_0x048b05a0(puStack_2f0,auStack_3a8);
    plVar12 = plStack_348;
    if (plStack_348 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_348 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_348 + 0x10))(plStack_348);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x0878ec10(&puStack_2f8);
    cStack_1f8 = cStack_178;
    uStack_208 = uStack_188;
    uStack_204 = uStack_184;
    iStack_200 = iStack_180;
    uStack_1fc = uStack_17c;
    uStack_218 = uStack_198;
    uStack_214 = uStack_194;
    uStack_210 = uStack_190;
    uStack_20c = uStack_18c;
    uStack_228 = uStack_1a8;
    uStack_220 = (long *)CONCAT44(uStack_19c,uStack_1a0);
    FUN_048b0bc0(&plStack_2e0);
    func_0x0878e960(&puStack_2f8,&uStack_228,&UNK_0120e8d7,0x15);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef46ef8;
    if (plStack_2e0 != (long *)0x0) {
      lVar3 = *plStack_2e0;
      plStack_2e0 = plVar12;
      (**(code **)(lVar3 + 8))();
      plVar12 = plStack_2e0;
    }
    plStack_2e0 = plVar12;
    auStack_3a8[0] = uStack_2e8;
    plStack_3a0 = (long *)0x0;
    uStack_398 = (long *)((ulong)uStack_398 & 0xffffffff00000000);
    uStack_390 = 1;
    uStack_388 = 0;
    puStack_380 = &UNK_04906f70;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &SUB_04906c50;
    puStack_368 = &UNK_08794670;
    puStack_360 = &UNK_087947d0;
    uStack_358 = 0;
    uStack_350 = 0;
    plStack_348 = (long *)0x0;
    func_0x048b05a0(puStack_2f0,auStack_3a8);
    plVar12 = plStack_348;
    if (plStack_348 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_348 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_348 + 0x10))(plStack_348);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x0878ec10(&puStack_2f8);
    FUN_048b0bc0(&plStack_2e0);
  }
  return;
}



/* ---- referenced strings ----
 * 0x12c1bb1  Target Runtime ID
 */
