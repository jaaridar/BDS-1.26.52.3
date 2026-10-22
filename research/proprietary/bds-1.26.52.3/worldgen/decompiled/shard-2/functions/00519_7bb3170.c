/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7cb3170 (ELF vaddr 0x7bb3170)
 * Label: caller-of-callee
 * Body:  [[07cb3170, 07cb37b1] [07cb37c0, 07cb3e31] [07cb3e40, 07cb53a5]]
 * Ghidra: FUN_07cb3170
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07cb3170(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  bool bVar12;
  undefined4 auStack_3d8 [2];
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  undefined1 *puStack_3a8;
  undefined1 *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined4 uStack_388;
  undefined8 uStack_380;
  long *plStack_378;
  undefined *puStack_370;
  undefined4 *puStack_368;
  undefined4 uStack_360;
  long *plStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  undefined1 uStack_330;
  undefined4 uStack_32f;
  undefined4 uStack_32b;
  undefined4 uStack_327;
  undefined4 uStack_323;
  undefined2 uStack_31f;
  undefined5 uStack_31d;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined4 uStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined2 uStack_2b0;
  undefined2 uStack_2ae;
  uint uStack_2ac;
  uint uStack_2a8;
  undefined1 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 uStack_278;
  char cStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  char cStack_238;
  long lStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
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
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  char cStack_1b8;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  char cStack_178;
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
  undefined4 uStack_13c;
  char cStack_138;
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
  char cStack_f8;
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
  char cStack_b8;
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
  char cStack_78;
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
  
  if ((DAT_0f5b9ee8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5b9ee8), iVar4 != 0)) {
    func_0x07d01c30();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b9e68,0xf53dab8);
    func_0x0410844d(&DAT_0f5b9ee8);
  }
  lStack_230 = param_1 + 0x18;
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5b9e68 + 4)) * 8);
  do {
    lVar8 = *plVar6;
    if (lVar8 == -1) goto LAB_07cb31f0;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5b9e68 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_07cb31f0:
    puVar5 = &DAT_0f5b9e68;
    if (iRam000000000f5b9ec8 != -0x2b3da790) goto LAB_07cb325d;
LAB_07cb321b:
    lVar8 = *(long *)(puVar5 + 0x68);
    if (lVar8 == 0) goto LAB_07cb325d;
    bVar12 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar11 = lVar8 + 9;
    if (bVar12) {
      lVar11 = *(long *)(lVar8 + 0x18);
    }
    uVar9 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar12) {
      uVar9 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x07d02050(&uStack_2a0,param_1,lVar11,uVar9);
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    if (*(int *)(puVar5 + 0x60) == -0x2b3da790) goto LAB_07cb321b;
LAB_07cb325d:
    func_0x07d02050(&uStack_2a0,param_1,&UNK_013fe0a0,0x11);
  }
  if (cStack_270 == '\0') {
    uStack_3c8._4_4_ = (uint)((ulong)uStack_3c8 >> 0x20);
    if ((DAT_0f5b9f08 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5b9f08), iVar4 != 0)) {
      func_0x07d01d40();
      func_0x0410844d(&DAT_0f5b9f08);
    }
    uStack_278 = 0x9a5a1af900000001;
    lVar8 = CONCAT44(uStack_29c,uStack_2a0);
    if ((DAT_0f5b9ee8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5b9ee8), iVar4 != 0)) {
      func_0x07d01c30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b9e68,0xf53dab8);
      func_0x0410844d(&DAT_0f5b9ee8);
    }
    puStack_368 = (undefined4 *)(lVar8 + 0x18);
    plVar6 = (long *)(*(long *)(lVar8 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar8 + 0x20) - *(long *)(lVar8 + 0x18)) >> 3)
                             - 1U & *(uint *)(_DAT_0f5b9e68 + 4)) * 8);
    do {
      lVar11 = *plVar6;
      if (lVar11 == -1) goto LAB_07cb3310;
      plVar6 = (long *)(*(long *)(lVar8 + 0x30) + lVar11 * 0x18);
    } while (*(uint *)(*(long *)(lVar8 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f5b9e68 + 4))
    ;
    if (plVar6 == *(long **)(lVar8 + 0x38)) {
LAB_07cb3310:
      puStack_370 = &DAT_0f5b9e68;
    }
    else {
      puStack_370 = (undefined *)plVar6[2];
    }
    FUN_0ed621a0(&puStack_370,uStack_278._4_4_);
    puStack_370 = (undefined *)CONCAT62(puStack_370._2_6_,1);
    uStack_360 = uStack_278._4_4_;
    plStack_358 = (long *)0x0;
    lStack_350 = 0;
    lStack_348 = 0;
    lStack_340 = 0;
    lStack_338 = 0;
    uStack_330 = 0x22;
    uStack_32f = _DAT_0127797d;
    uStack_32b = _UNK_01277981;
    uStack_327 = _UNK_01277985;
    uStack_323 = _UNK_01277989;
    uStack_31f = 0x73;
    lStack_318 = 0;
    lStack_310 = 0;
    lStack_308 = 0;
    lStack_300 = 0;
    lStack_2f8 = 0;
    lStack_2f0 = 0;
    uStack_2e8 = 0x3f600000;
    puStack_368 = &uStack_298;
    func_0x048afb10(&lStack_318,8);
    uStack_2c0 = 0;
    lStack_2b8 = 0;
    lStack_2d0 = 0;
    uStack_2c8 = 0;
    lStack_2e0 = 0;
    lStack_2d8 = 0;
    uStack_2b0 = 0xff00;
    uStack_2ac = uStack_2ac & 0xffffff00;
    uStack_2a8 = uStack_2a8 & 0xffffff00;
    uStack_2a4 = 0;
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f0120f0;
    if (plStack_358 != (long *)0x0) {
      lVar8 = *plStack_358;
      plStack_358 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = plStack_358;
    }
    plStack_358 = plVar6;
    auStack_3d8[0] = uStack_360;
    plStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8._4_4_ << 0x20);
    uStack_3c0 = 1;
    uStack_3b8 = 0;
    puStack_3b0 = &UNK_05de4ce0;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_05de49c0;
    puStack_398 = &UNK_07d02b60;
    puStack_390 = &UNK_07d02cc0;
    uStack_388 = 0;
    uStack_380 = 0;
    plStack_378 = (long *)0x0;
    func_0x048b05a0(puStack_368,auStack_3d8);
    plVar6 = plStack_378;
    if (plStack_378 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_378 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_378 + 0x10))(plStack_378);
        FUN_0412c2d0(plVar6);
      }
    }
    puVar3 = puStack_368;
    if ((DAT_0f550a20 == '\0') && (iVar4 = func_0x04108328(&DAT_0f550a20), iVar4 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_3d8[0] = _DAT_0f550a0c;
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar8 = lStack_350;
    plVar1 = plStack_358;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&UNK_0ef439d0;
    plStack_3d0 = plVar6 + 3;
    plStack_358 = (long *)0x0;
    lStack_350 = 0;
    plVar6[3] = (long)plVar1;
    plVar6[4] = lVar8;
    plVar6[7] = lStack_338;
    plVar6[5] = lStack_348;
    plVar6[6] = lStack_340;
    lStack_348 = 0;
    lStack_340 = 0;
    lStack_338 = 0;
    plVar6[10] = CONCAT53(uStack_31d,CONCAT21(uStack_31f,uStack_323._3_1_));
    plVar6[8] = CONCAT35((undefined3)uStack_32b,CONCAT41(uStack_32f,uStack_330));
    plVar6[9] = CONCAT35((undefined3)uStack_323,CONCAT41(uStack_327,uStack_32b._3_1_));
    uStack_330 = 0;
    uStack_32f = 0;
    uStack_32b = 0;
    uStack_327 = 0;
    uStack_323 = 0;
    uStack_31f = 0;
    uStack_31d = 0;
    plVar6[0xb] = lStack_318;
    plVar6[0xc] = lStack_310;
    plVar6[0xd] = lStack_308;
    lStack_318 = 0;
    lStack_310 = 0;
    lStack_308 = 0;
    plVar6[0xe] = lStack_300;
    plVar6[0xf] = lStack_2f8;
    plVar6[0x10] = lStack_2f0;
    lStack_300 = 0;
    lStack_2f8 = 0;
    lStack_2f0 = 0;
    *(undefined4 *)(plVar6 + 0x11) = uStack_2e8;
    plVar6[0x12] = lStack_2e0;
    plVar6[0x13] = lStack_2d8;
    plVar6[0x14] = lStack_2d0;
    lStack_2e0 = 0;
    lStack_2d8 = 0;
    lStack_2d0 = 0;
    plVar6[0x17] = lStack_2b8;
    *(undefined4 *)(plVar6 + 0x15) = (undefined4)uStack_2c8;
    *(undefined4 *)((long)plVar6 + 0xac) = uStack_2c8._4_4_;
    *(undefined4 *)(plVar6 + 0x16) = (undefined4)uStack_2c0;
    *(undefined4 *)((long)plVar6 + 0xb4) = uStack_2c0._4_4_;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    lStack_2b8 = 0;
    *(ulong *)((long)plVar6 + 0xc5) = CONCAT17(uStack_2a4,CONCAT43(uStack_2a8,uStack_2ac._1_3_));
    plVar6[0x18] = CONCAT44(uStack_2ac,CONCAT22(uStack_2ae,uStack_2b0));
    uStack_268 = 0;
    uStack_260 = (long *)0x0;
    uStack_3c8 = plVar6;
    FUN_048afd20(puVar3,auStack_3d8);
    plVar6 = uStack_3c8;
    if (uStack_3c8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_3c8 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_3c8 + 0x10))(uStack_3c8);
        FUN_0412c2d0(plVar6);
      }
    }
    plVar6 = uStack_260;
    if (uStack_260 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_260 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_260 + 0x10))(uStack_260);
        FUN_0412c2d0(plVar6);
      }
    }
    lVar8 = *(long *)(puVar3 + 4);
    iVar4 = puVar3[7];
    if (iVar4 == 2) {
      piVar10 = *(int **)(*(long *)(lVar8 + 0x78) + 0x60);
      iVar4 = *piVar10;
      while (iVar4 != puVar3[6]) {
        piVar10 = piVar10 + 0x16;
        iVar4 = *piVar10;
      }
      for (; *(long *)(piVar10 + 0xc) != *(long *)(puVar3 + 2); piVar10 = *(int **)(piVar10 + 0xe))
      {
      }
LAB_07cb37ca:
      piVar10[4] = piVar10[4] | (int)puStack_370 << 0x10;
    }
    else {
      if (iVar4 == 1) {
        piVar10 = *(int **)(*(long *)(lVar8 + 0x78) + 0x48);
        iVar4 = *piVar10;
        while (iVar4 != puVar3[6]) {
          piVar10 = piVar10 + 0x1a;
          iVar4 = *piVar10;
        }
        goto LAB_07cb37ca;
      }
      if (iVar4 == 0) {
        *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) | (int)puStack_370 << 0x10;
      }
    }
    func_0x048b0bc0(&plStack_358);
  }
  if ((DAT_0f5b9fa0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5b9fa0), iVar4 != 0)) {
    func_0x07d02f50();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b9f20,0xf53dab8);
    func_0x0410844d(&DAT_0f5b9fa0);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5b9f20 + 4)) * 8);
  do {
    lVar8 = *plVar6;
    if (lVar8 == -1) goto LAB_07cb3830;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5b9f20 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_07cb3830:
    puVar5 = &DAT_0f5b9f20;
    if (iRam000000000f5b9f80 != -0x2b3da790) goto LAB_07cb389d;
LAB_07cb385b:
    lVar8 = *(long *)(puVar5 + 0x68);
    if (lVar8 == 0) goto LAB_07cb389d;
    bVar12 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar11 = lVar8 + 9;
    if (bVar12) {
      lVar11 = *(long *)(lVar8 + 0x18);
    }
    uVar9 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar12) {
      uVar9 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x07d03520(&uStack_2a0,param_1,lVar11,uVar9);
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    if (*(int *)(puVar5 + 0x60) == -0x2b3da790) goto LAB_07cb385b;
LAB_07cb389d:
    func_0x07d03520(&uStack_2a0,param_1,&UNK_012c2b72,0x1b);
  }
  if (cStack_270 != '\0') goto LAB_07cb3e52;
  if ((DAT_0f5b9fc0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5b9fc0), iVar4 != 0)) {
    func_0x07d03060();
    func_0x0410844d(&DAT_0f5b9fc0);
  }
  uStack_278 = 0xb1523ccb00000001;
  lVar8 = CONCAT44(uStack_29c,uStack_2a0);
  if ((DAT_0f5b9fa0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5b9fa0), iVar4 != 0)) {
    func_0x07d02f50();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b9f20,0xf53dab8);
    func_0x0410844d(&DAT_0f5b9fa0);
  }
  puStack_368 = (undefined4 *)(lVar8 + 0x18);
  plVar6 = (long *)(*(long *)(lVar8 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar8 + 0x20) - *(long *)(lVar8 + 0x18)) >> 3) -
                           1U & *(uint *)(_DAT_0f5b9f20 + 4)) * 8);
  do {
    lVar11 = *plVar6;
    if (lVar11 == -1) goto LAB_07cb3950;
    plVar6 = (long *)(*(long *)(lVar8 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(lVar8 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f5b9f20 + 4));
  if (plVar6 == *(long **)(lVar8 + 0x38)) {
LAB_07cb3950:
    puStack_370 = &DAT_0f5b9f20;
  }
  else {
    puStack_370 = (undefined *)plVar6[2];
  }
  FUN_0ed621a0(&puStack_370,uStack_278._4_4_);
  puStack_370 = (undefined *)CONCAT62(puStack_370._2_6_,1);
  uStack_360 = uStack_278._4_4_;
  plStack_358 = (long *)0x0;
  lStack_350 = 0;
  lStack_348 = 0;
  lStack_340 = 0;
  lStack_338 = 0;
  puStack_368 = &uStack_298;
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar2 = _UNK_0137b4ba;
  uStack_323._3_1_ = (byte)puVar7;
  uStack_31f = (undefined2)((ulong)puVar7 >> 8);
  uStack_31d = (undefined5)((ulong)puVar7 >> 0x18);
  uStack_330 = 0x21;
  uStack_32f = 0;
  uStack_32b = 0x19000000;
  uStack_327 = 0;
  uStack_323 = (uint)uStack_323._3_1_ << 0x18;
  *(ulong *)((long)puVar7 + 9) = CONCAT17(UNK_0137b4b9,_DAT_0137b4b2);
  *(undefined8 *)((long)puVar7 + 0x11) = uVar2;
  uVar2 = CONCAT71(_DAT_0137b4b2,UNK_0137b4b1);
  *puVar7 = _DAT_0137b4a9;
  puVar7[1] = uVar2;
  *(undefined1 *)((long)puVar7 + 0x19) = 0;
  lStack_2f8 = 0;
  lStack_2f0 = 0;
  lStack_308 = 0;
  lStack_300 = 0;
  lStack_318 = 0;
  lStack_310 = 0;
  uStack_2e8 = 0x3f600000;
  func_0x048afb10(&lStack_318,8);
  uStack_2c0 = 0;
  lStack_2b8 = 0;
  lStack_2d0 = 0;
  uStack_2c8 = 0;
  lStack_2e0 = 0;
  lStack_2d8 = 0;
  uStack_2b0 = 0xff00;
  uStack_2ac = uStack_2ac & 0xffffff00;
  uStack_2a8 = uStack_2a8 & 0xffffff00;
  uStack_2a4 = 0;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f0123c0;
  if (plStack_358 != (long *)0x0) {
    lVar8 = *plStack_358;
    plStack_358 = plVar6;
    (**(code **)(lVar8 + 8))();
    plVar6 = plStack_358;
  }
  plStack_358 = plVar6;
  auStack_3d8[0] = uStack_360;
  plStack_3d0 = (long *)0x0;
  uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
  uStack_3c0 = 1;
  uStack_3b8 = 0;
  puStack_3b0 = &UNK_05e08030;
  puStack_3a8 = &SUB_048b06d0;
  puStack_3a0 = &UNK_05e07cf0;
  puStack_398 = &UNK_07d04080;
  puStack_390 = &UNK_07d04230;
  uStack_388 = 0;
  uStack_380 = 0;
  plStack_378 = (long *)0x0;
  func_0x048b05a0(puStack_368,auStack_3d8);
  plVar6 = plStack_378;
  if (plStack_378 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_378 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_378 + 0x10))(plStack_378);
      FUN_0412c2d0(plVar6);
    }
  }
  puVar3 = puStack_368;
  if ((DAT_0f550a20 == '\0') && (iVar4 = func_0x04108328(&DAT_0f550a20), iVar4 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  auStack_3d8[0] = _DAT_0f550a0c;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar8 = lStack_350;
  plVar1 = plStack_358;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef439d0;
  plStack_3d0 = plVar6 + 3;
  plStack_358 = (long *)0x0;
  lStack_350 = 0;
  plVar6[3] = (long)plVar1;
  plVar6[4] = lVar8;
  plVar6[7] = lStack_338;
  plVar6[5] = lStack_348;
  plVar6[6] = lStack_340;
  lStack_348 = 0;
  lStack_340 = 0;
  lStack_338 = 0;
  plVar6[10] = CONCAT53(uStack_31d,CONCAT21(uStack_31f,uStack_323._3_1_));
  plVar6[8] = CONCAT35((undefined3)uStack_32b,CONCAT41(uStack_32f,uStack_330));
  plVar6[9] = CONCAT35((undefined3)uStack_323,CONCAT41(uStack_327,uStack_32b._3_1_));
  uStack_330 = 0;
  uStack_32f = 0;
  uStack_32b = 0;
  uStack_327 = 0;
  uStack_323 = 0;
  uStack_31f = 0;
  uStack_31d = 0;
  plVar6[0xb] = lStack_318;
  plVar6[0xc] = lStack_310;
  plVar6[0xd] = lStack_308;
  lStack_318 = 0;
  lStack_310 = 0;
  lStack_308 = 0;
  plVar6[0xe] = lStack_300;
  plVar6[0xf] = lStack_2f8;
  plVar6[0x10] = lStack_2f0;
  lStack_300 = 0;
  lStack_2f8 = 0;
  lStack_2f0 = 0;
  *(undefined4 *)(plVar6 + 0x11) = uStack_2e8;
  plVar6[0x12] = lStack_2e0;
  plVar6[0x13] = lStack_2d8;
  plVar6[0x14] = lStack_2d0;
  lStack_2e0 = 0;
  lStack_2d8 = 0;
  lStack_2d0 = 0;
  plVar6[0x17] = lStack_2b8;
  *(undefined4 *)(plVar6 + 0x15) = (undefined4)uStack_2c8;
  *(undefined4 *)((long)plVar6 + 0xac) = uStack_2c8._4_4_;
  *(undefined4 *)(plVar6 + 0x16) = (undefined4)uStack_2c0;
  *(undefined4 *)((long)plVar6 + 0xb4) = uStack_2c0._4_4_;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  lStack_2b8 = 0;
  *(ulong *)((long)plVar6 + 0xc5) = CONCAT17(uStack_2a4,CONCAT43(uStack_2a8,uStack_2ac._1_3_));
  plVar6[0x18] = CONCAT44(uStack_2ac,CONCAT22(uStack_2ae,uStack_2b0));
  uStack_268 = 0;
  uStack_260 = (long *)0x0;
  uStack_3c8 = plVar6;
  FUN_048afd20(puVar3,auStack_3d8);
  plVar6 = uStack_3c8;
  if (uStack_3c8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_3c8 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*uStack_3c8 + 0x10))(uStack_3c8);
      FUN_0412c2d0(plVar6);
    }
  }
  plVar6 = uStack_260;
  if (uStack_260 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_260 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*uStack_260 + 0x10))(uStack_260);
      FUN_0412c2d0(plVar6);
    }
  }
  lVar8 = *(long *)(puVar3 + 4);
  iVar4 = puVar3[7];
  if (iVar4 == 2) {
    piVar10 = *(int **)(*(long *)(lVar8 + 0x78) + 0x60);
    iVar4 = *piVar10;
    while (iVar4 != puVar3[6]) {
      piVar10 = piVar10 + 0x16;
      iVar4 = *piVar10;
    }
    for (; *(long *)(piVar10 + 0xc) != *(long *)(puVar3 + 2); piVar10 = *(int **)(piVar10 + 0xe)) {
    }
LAB_07cb3e4a:
    piVar10[4] = piVar10[4] | (int)puStack_370 << 0x10;
  }
  else {
    if (iVar4 == 1) {
      piVar10 = *(int **)(*(long *)(lVar8 + 0x78) + 0x48);
      iVar4 = *piVar10;
      while (iVar4 != puVar3[6]) {
        piVar10 = piVar10 + 0x1a;
        iVar4 = *piVar10;
      }
      goto LAB_07cb3e4a;
    }
    if (iVar4 == 0) {
      *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) | (int)puStack_370 << 0x10;
    }
  }
  func_0x048b0bc0(&plStack_358);
LAB_07cb3e52:
  if ((DAT_0f5ba058 == '\0') && (iVar4 = func_0x04108328(&DAT_0f5ba058), iVar4 != 0)) {
    func_0x07d044c0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5b9fd8,0xf53dab8);
    func_0x0410844d(&DAT_0f5ba058);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5b9fd8 + 4)) * 8);
  do {
    lVar8 = *plVar6;
    if (lVar8 == -1) goto LAB_07cb3eb0;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f5b9fd8 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_07cb3eb0:
    puVar5 = &DAT_0f5b9fd8;
    iVar4 = iRam000000000f5ba038;
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    iVar4 = *(int *)(puVar5 + 0x60);
  }
  if ((iVar4 == -0x2b3da790) && (lVar8 = *(long *)(puVar5 + 0x68), lVar8 != 0)) {
    bVar12 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar11 = lVar8 + 9;
    if (bVar12) {
      lVar11 = *(long *)(lVar8 + 0x18);
    }
    uVar9 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar12) {
      uVar9 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x07d04b70(&uStack_2a0,param_1,lVar11,uVar9);
  }
  else {
    func_0x07d04b70(&uStack_2a0,param_1,&UNK_0130f918,0x14);
  }
  if (cStack_270 == '\0') {
    func_0x07d056d0(&puStack_370,&uStack_2a0,&UNK_012dce93,3);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0ef44b00;
    if (plStack_358 != (long *)0x0) {
      lVar8 = *plStack_358;
      plStack_358 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = plStack_358;
    }
    plStack_358 = plVar6;
    auStack_3d8[0] = uStack_360;
    plStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    uStack_3b8 = 0;
    puStack_3b0 = &UNK_048b3f30;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &SUB_048b2190;
    puStack_398 = &UNK_07d05c90;
    puStack_390 = &UNK_07d05e50;
    uStack_388 = 0;
    uStack_380 = 0;
    plStack_378 = (long *)0x0;
    func_0x048b05a0(puStack_368,auStack_3d8);
    plVar6 = plStack_378;
    if (plStack_378 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_378 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_378 + 0x10))(plStack_378);
        FUN_0412c2d0(plVar6);
      }
    }
    func_0x07d05990(&puStack_370);
    cStack_238 = cStack_270;
    uStack_248 = uStack_280;
    uStack_244 = uStack_27c;
    uStack_240 = (undefined4)uStack_278;
    uStack_23c = uStack_278._4_4_;
    uStack_258 = uStack_290;
    uStack_254 = uStack_28c;
    uStack_250 = uStack_288;
    uStack_24c = uStack_284;
    uStack_268 = CONCAT44(uStack_29c,uStack_2a0);
    uStack_260 = (long *)CONCAT44(uStack_294,uStack_298);
    func_0x048b0bc0(&plStack_358);
    func_0x07d056d0(&puStack_370,&uStack_268,&UNK_01241696,0xc);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0ef44b00;
    if (plStack_358 != (long *)0x0) {
      lVar8 = *plStack_358;
      plStack_358 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = plStack_358;
    }
    plStack_358 = plVar6;
    auStack_3d8[0] = uStack_360;
    plStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    uStack_3b8 = 0;
    puStack_3b0 = &UNK_048b3f30;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &SUB_048b2190;
    puStack_398 = &UNK_07d06020;
    puStack_390 = &UNK_07d061f0;
    uStack_388 = 0;
    uStack_380 = 0;
    plStack_378 = (long *)0x0;
    func_0x048b05a0(puStack_368,auStack_3d8);
    plVar6 = plStack_378;
    if (plStack_378 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_378 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_378 + 0x10))(plStack_378);
        FUN_0412c2d0(plVar6);
      }
    }
    func_0x07d05990(&puStack_370);
    func_0x048b0bc0(&plStack_358);
    lVar8 = func_0x07d063d0(lStack_230);
    iVar4 = *(int *)(lVar8 + 0x60);
  }
  else {
    lVar8 = func_0x07d063d0(lStack_230);
    iVar4 = *(int *)(lVar8 + 0x60);
  }
  if ((iVar4 == -0x2b3da790) && (lVar8 = *(long *)(lVar8 + 0x68), lVar8 != 0)) {
    bVar12 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar11 = lVar8 + 9;
    if (bVar12) {
      lVar11 = *(long *)(lVar8 + 0x18);
    }
    uVar9 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar12) {
      uVar9 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x07d079b0(&uStack_2a0,param_1,lVar11,uVar9);
  }
  else {
    func_0x07d079b0(&uStack_2a0,param_1,&UNK_011d8cb4,0x16);
  }
  if (cStack_270 == '\0') {
    func_0x07d082d0(&puStack_370,&uStack_2a0,&UNK_0128fb89,0x18);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0ef44b00;
    if (plStack_358 != (long *)0x0) {
      lVar8 = *plStack_358;
      plStack_358 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = plStack_358;
    }
    plStack_358 = plVar6;
    auStack_3d8[0] = uStack_360;
    plStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    uStack_3b8 = 0;
    puStack_3b0 = &UNK_048b3f30;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &SUB_048b2190;
    puStack_398 = &UNK_07d08830;
    puStack_390 = &UNK_07d089f0;
    uStack_388 = 0;
    uStack_380 = 0;
    plStack_378 = (long *)0x0;
    func_0x048b05a0(puStack_368,auStack_3d8);
    plVar6 = plStack_378;
    if (plStack_378 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_378 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_378 + 0x10))(plStack_378);
        FUN_0412c2d0(plVar6);
      }
    }
    func_0x07d08530(&puStack_370);
    cStack_1f8 = cStack_270;
    uStack_208 = uStack_280;
    uStack_204 = uStack_27c;
    uStack_200 = (undefined4)uStack_278;
    uStack_1fc = uStack_278._4_4_;
    uStack_218 = uStack_290;
    uStack_214 = uStack_28c;
    uStack_210 = uStack_288;
    uStack_20c = uStack_284;
    uStack_228 = uStack_2a0;
    uStack_224 = uStack_29c;
    uStack_220 = uStack_298;
    uStack_21c = uStack_294;
    func_0x048b0bc0(&plStack_358);
    func_0x07d082d0(&puStack_370,&uStack_228,&UNK_01431c66,0x12);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0ef44b00;
    if (plStack_358 != (long *)0x0) {
      lVar8 = *plStack_358;
      plStack_358 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = plStack_358;
    }
    plStack_358 = plVar6;
    auStack_3d8[0] = uStack_360;
    plStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    uStack_3b8 = 0;
    puStack_3b0 = &UNK_048b3f30;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &SUB_048b2190;
    puStack_398 = &UNK_07d08bc0;
    puStack_390 = &UNK_07d08d90;
    uStack_388 = 0;
    uStack_380 = 0;
    plStack_378 = (long *)0x0;
    func_0x048b05a0(puStack_368,auStack_3d8);
    plVar6 = plStack_378;
    if (plStack_378 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_378 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_378 + 0x10))(plStack_378);
        FUN_0412c2d0(plVar6);
      }
    }
    func_0x07d08530(&puStack_370);
    cStack_1b8 = cStack_1f8;
    uStack_1c8 = uStack_208;
    uStack_1c4 = uStack_204;
    uStack_1c0 = uStack_200;
    uStack_1bc = uStack_1fc;
    uStack_1d8 = uStack_218;
    uStack_1d4 = uStack_214;
    uStack_1d0 = uStack_210;
    uStack_1cc = uStack_20c;
    uStack_1e8 = uStack_228;
    uStack_1e4 = uStack_224;
    uStack_1e0 = uStack_220;
    uStack_1dc = uStack_21c;
    func_0x048b0bc0(&plStack_358);
    func_0x07d082d0(&puStack_370,&uStack_1e8,&UNK_01361f9d,0x17);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0ef46ef8;
    if (plStack_358 != (long *)0x0) {
      lVar8 = *plStack_358;
      plStack_358 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = plStack_358;
    }
    plStack_358 = plVar6;
    auStack_3d8[0] = uStack_360;
    plStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    uStack_3b8 = 0;
    puStack_3b0 = &UNK_04906f70;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_04906c50;
    puStack_398 = &UNK_07d08f70;
    puStack_390 = &UNK_07d090d0;
    uStack_388 = 0;
    uStack_380 = 0;
    plStack_378 = (long *)0x0;
    func_0x048b05a0(puStack_368,auStack_3d8);
    plVar6 = plStack_378;
    if (plStack_378 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_378 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_378 + 0x10))(plStack_378);
        FUN_0412c2d0(plVar6);
      }
    }
    func_0x07d08530(&puStack_370);
    cStack_178 = cStack_1b8;
    uStack_188 = uStack_1c8;
    uStack_184 = uStack_1c4;
    uStack_180 = uStack_1c0;
    uStack_17c = uStack_1bc;
    uStack_198 = uStack_1d8;
    uStack_194 = uStack_1d4;
    uStack_190 = uStack_1d0;
    uStack_18c = uStack_1cc;
    uStack_1a8 = uStack_1e8;
    uStack_1a4 = uStack_1e4;
    uStack_1a0 = uStack_1e0;
    uStack_19c = uStack_1dc;
    func_0x048b0bc0(&plStack_358);
    func_0x07d082d0(&puStack_370,&uStack_1a8,&UNK_011f26c1,0x18);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0ef46ef8;
    if (plStack_358 != (long *)0x0) {
      lVar8 = *plStack_358;
      plStack_358 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = plStack_358;
    }
    plStack_358 = plVar6;
    auStack_3d8[0] = uStack_360;
    plStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    uStack_3b8 = 0;
    puStack_3b0 = &UNK_04906f70;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_04906c50;
    puStack_398 = &UNK_07d092b0;
    puStack_390 = &UNK_07d09410;
    uStack_388 = 0;
    uStack_380 = 0;
    plStack_378 = (long *)0x0;
    func_0x048b05a0(puStack_368,auStack_3d8);
    plVar6 = plStack_378;
    if (plStack_378 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_378 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_378 + 0x10))(plStack_378);
        FUN_0412c2d0(plVar6);
      }
    }
    func_0x07d08530(&puStack_370);
    cStack_138 = cStack_178;
    uStack_148 = uStack_188;
    uStack_144 = uStack_184;
    uStack_140 = uStack_180;
    uStack_13c = uStack_17c;
    uStack_158 = uStack_198;
    uStack_154 = uStack_194;
    uStack_150 = uStack_190;
    uStack_14c = uStack_18c;
    uStack_168 = uStack_1a8;
    uStack_164 = uStack_1a4;
    uStack_160 = uStack_1a0;
    uStack_15c = uStack_19c;
    func_0x048b0bc0(&plStack_358);
    func_0x07d082d0(&puStack_370,&uStack_168,&UNK_0147d7d8,0x13);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0ef44b00;
    if (plStack_358 != (long *)0x0) {
      lVar8 = *plStack_358;
      plStack_358 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = plStack_358;
    }
    plStack_358 = plVar6;
    auStack_3d8[0] = uStack_360;
    plStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    uStack_3b8 = 0;
    puStack_3b0 = &UNK_048b3f30;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &SUB_048b2190;
    puStack_398 = &UNK_07d095f0;
    puStack_390 = &UNK_07d097c0;
    uStack_388 = 0;
    uStack_380 = 0;
    plStack_378 = (long *)0x0;
    func_0x048b05a0(puStack_368,auStack_3d8);
    plVar6 = plStack_378;
    if (plStack_378 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_378 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_378 + 0x10))(plStack_378);
        FUN_0412c2d0(plVar6);
      }
    }
    func_0x07d08530(&puStack_370);
    cStack_f8 = cStack_138;
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
    func_0x048b0bc0(&plStack_358);
    func_0x07d082d0(&puStack_370,&uStack_128,&UNK_012a8d2e,0x1f);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0ef44b00;
    if (plStack_358 != (long *)0x0) {
      lVar8 = *plStack_358;
      plStack_358 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = plStack_358;
    }
    plStack_358 = plVar6;
    auStack_3d8[0] = uStack_360;
    plStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    uStack_3b8 = 0;
    puStack_3b0 = &UNK_048b3f30;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &SUB_048b2190;
    puStack_398 = &UNK_07d099a0;
    puStack_390 = &UNK_07d09b70;
    uStack_388 = 0;
    uStack_380 = 0;
    plStack_378 = (long *)0x0;
    func_0x048b05a0(puStack_368,auStack_3d8);
    plVar6 = plStack_378;
    if (plStack_378 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_378 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_378 + 0x10))(plStack_378);
        FUN_0412c2d0(plVar6);
      }
    }
    func_0x07d08530(&puStack_370);
    cStack_b8 = cStack_f8;
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
    func_0x048b0bc0(&plStack_358);
    func_0x07d082d0(&puStack_370,&uStack_e8,&UNK_01417c97,0x12);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f0f4cc0;
    if (plStack_358 != (long *)0x0) {
      lVar8 = *plStack_358;
      plStack_358 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = plStack_358;
    }
    plStack_358 = plVar6;
    auStack_3d8[0] = uStack_360;
    plStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    uStack_3b8 = 0;
    puStack_3b0 = &UNK_07d0acb0;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d0a900;
    puStack_398 = &UNK_07d0ad70;
    puStack_390 = &UNK_07d0aee0;
    uStack_388 = 0;
    uStack_380 = 0;
    plStack_378 = (long *)0x0;
    func_0x048b05a0(puStack_368,auStack_3d8);
    plVar6 = plStack_378;
    if (plStack_378 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_378 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_378 + 0x10))(plStack_378);
        FUN_0412c2d0(plVar6);
      }
    }
    func_0x07d08530(&puStack_370);
    cStack_78 = cStack_b8;
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
    func_0x048b0bc0(&plStack_358);
    func_0x07d082d0(&puStack_370,&uStack_a8,&UNK_012f69a7,0xe);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f0f4db0;
    if (plStack_358 != (long *)0x0) {
      lVar8 = *plStack_358;
      plStack_358 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = plStack_358;
    }
    plStack_358 = plVar6;
    auStack_3d8[0] = uStack_360;
    plStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    uStack_3b8 = 0;
    puStack_3b0 = &UNK_07d0b590;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d02e90;
    puStack_398 = &UNK_07d0b650;
    puStack_390 = &UNK_07d0b910;
    uStack_388 = 0;
    uStack_380 = 0;
    plStack_378 = (long *)0x0;
    func_0x048b05a0(puStack_368,auStack_3d8);
    plVar6 = plStack_378;
    if (plStack_378 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_378 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_378 + 0x10))(plStack_378);
        FUN_0412c2d0(plVar6);
      }
    }
    func_0x07d08530(&puStack_370);
    cStack_38 = cStack_78;
    uStack_48 = uStack_88;
    uStack_44 = uStack_84;
    uStack_40 = uStack_80;
    uStack_3c = uStack_7c;
    uStack_58 = uStack_98;
    uStack_54 = uStack_94;
    uStack_50 = uStack_90;
    uStack_4c = uStack_8c;
    uStack_68 = uStack_a8;
    uStack_64 = uStack_a4;
    uStack_60 = uStack_a0;
    uStack_5c = uStack_9c;
    func_0x048b0bc0(&plStack_358);
    func_0x07d082d0(&puStack_370,&uStack_68,&UNK_0149a70f,0x19);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0ef46ef8;
    if (plStack_358 != (long *)0x0) {
      lVar8 = *plStack_358;
      plStack_358 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = plStack_358;
    }
    plStack_358 = plVar6;
    auStack_3d8[0] = uStack_360;
    plStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    uStack_3b8 = 0;
    puStack_3b0 = &UNK_079523d0;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_04906c50;
    puStack_398 = &UNK_07d0bd90;
    puStack_390 = &UNK_07d0bee0;
    uStack_388 = 0;
    uStack_380 = 0;
    plStack_378 = (long *)0x0;
    func_0x048b05a0(puStack_368,auStack_3d8);
    plVar6 = plStack_378;
    if (plStack_378 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_378 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_378 + 0x10))(plStack_378);
        FUN_0412c2d0(plVar6);
      }
    }
    iVar4 = puStack_368[7];
    if (iVar4 == 2) {
      piVar10 = *(int **)(*(long *)(*(long *)(puStack_368 + 4) + 0x78) + 0x60);
      iVar4 = *piVar10;
      while (iVar4 != puStack_368[6]) {
        piVar10 = piVar10 + 0x16;
        iVar4 = *piVar10;
      }
      lVar8 = *(long *)(piVar10 + 0xc);
      while (lVar8 != *(long *)(puStack_368 + 2)) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar8 = *(long *)(piVar10 + 0xc);
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar4 == 1) {
      piVar10 = *(int **)(*(long *)(*(long *)(puStack_368 + 4) + 0x78) + 0x48);
      iVar4 = *piVar10;
      while (iVar4 != puStack_368[6]) {
        piVar10 = piVar10 + 0x1a;
        iVar4 = *piVar10;
      }
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else if (iVar4 == 0) {
      *(uint *)(*(long *)(puStack_368 + 4) + 0x18) =
           *(uint *)(*(long *)(puStack_368 + 4) + 0x18) | 0x40000;
    }
    func_0x07d08530(&puStack_370);
    cStack_238 = cStack_38;
    uStack_248 = uStack_48;
    uStack_244 = uStack_44;
    uStack_240 = uStack_40;
    uStack_23c = uStack_3c;
    uStack_258 = uStack_58;
    uStack_254 = uStack_54;
    uStack_250 = uStack_50;
    uStack_24c = uStack_4c;
    uStack_268 = CONCAT44(uStack_64,uStack_68);
    uStack_260 = (long *)CONCAT44(uStack_5c,uStack_60);
    func_0x048b0bc0(&plStack_358);
    func_0x07d082d0(&puStack_370,&uStack_268,&UNK_0144cb14,0x16);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f0f4e28;
    if (plStack_358 != (long *)0x0) {
      lVar8 = *plStack_358;
      plStack_358 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = plStack_358;
    }
    plStack_358 = plVar6;
    auStack_3d8[0] = uStack_360;
    plStack_3d0 = (long *)0x0;
    uStack_3c8 = (long *)((ulong)uStack_3c8 & 0xffffffff00000000);
    uStack_3c0 = 1;
    uStack_3b8 = 0;
    puStack_3b0 = &UNK_07d0d1e0;
    puStack_3a8 = &SUB_048b06d0;
    puStack_3a0 = &UNK_07d0ce10;
    puStack_398 = &UNK_07d0d2a0;
    puStack_390 = &UNK_07d0d460;
    uStack_388 = 0;
    uStack_380 = 0;
    plStack_378 = (long *)0x0;
    func_0x048b05a0(puStack_368,auStack_3d8);
    plVar6 = plStack_378;
    if (plStack_378 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_378 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_378 + 0x10))(plStack_378);
        FUN_0412c2d0(plVar6);
      }
    }
    func_0x07d08530(&puStack_370);
    func_0x048b0bc0(&plStack_358);
  }
  return;
}



/* ---- referenced strings ----
 * 0x127797d  Can Modify Blocks
 * 0x137b4a9  Code Builder Override Uri
 * 0x137b4b2  der Override Uri
 */
