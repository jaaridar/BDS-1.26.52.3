/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdce70d0 (ELF vaddr 0xdbe70d0)
 * Label: string:Tint method logic varies, but often refers to the "rain" and
 * Body:  [[0dce70d0, 0dce94a6] [0dce94b0, 0dce997d]]
 * Ghidra: FUN_0dce70d0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dce70d0(long param_1)

{
  uint *puVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined7 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  bool bVar15;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined1 *puStack_678;
  long *plStack_670;
  long *plStack_668;
  undefined1 *puStack_660;
  long *plStack_658;
  undefined *puStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  long *plStack_638;
  long *plStack_630;
  undefined7 *puStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined *puStack_608;
  long lStack_600;
  undefined *puStack_5f8;
  long lStack_5f0;
  undefined *puStack_5e8;
  long lStack_5e0;
  long *plStack_5d8;
  long lStack_5d0;
  undefined *puStack_5c8;
  undefined8 uStack_5c0;
  undefined *puStack_5b8;
  long lStack_5b0;
  undefined *puStack_5a8;
  undefined *puStack_598;
  undefined *puStack_588;
  undefined *puStack_578;
  undefined4 uStack_554;
  undefined4 uStack_54e;
  undefined2 uStack_54a;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined4 uStack_538;
  undefined4 uStack_534;
  int iStack_530;
  int iStack_52c;
  int iStack_528;
  int iStack_524;
  int iStack_520;
  undefined4 uStack_51c;
  undefined8 uStack_518;
  byte bStack_510;
  undefined4 uStack_50f;
  undefined4 uStack_50b;
  undefined4 uStack_507;
  undefined4 uStack_503;
  undefined2 uStack_4ff;
  undefined1 uStack_4fd;
  undefined4 uStack_4fc;
  byte bStack_4f8;
  undefined7 uStack_4f7;
  ulong uStack_4f0;
  undefined7 *puStack_4e8;
  byte bStack_4e0;
  undefined7 uStack_4df;
  ulong uStack_4d8;
  undefined7 *puStack_4d0;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  int iStack_4a8;
  int iStack_4a4;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long *plStack_490;
  byte bStack_488;
  undefined7 uStack_487;
  undefined8 uStack_478;
  byte bStack_470;
  undefined7 uStack_46f;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  int iStack_438;
  int iStack_434;
  int iStack_430;
  undefined4 uStack_42c;
  undefined8 uStack_428;
  uint uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  int iStack_3f8;
  int iStack_3f4;
  int iStack_3f0;
  undefined4 uStack_3ec;
  undefined1 uStack_3e8;
  undefined7 uStack_3e7;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  int iStack_3c0;
  int iStack_3bc;
  int iStack_3b8;
  undefined4 uStack_3b4;
  char cStack_3b0;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  int iStack_388;
  int iStack_384;
  int iStack_380;
  undefined4 uStack_37c;
  undefined1 uStack_378;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  int iStack_348;
  int iStack_344;
  int iStack_340;
  undefined4 uStack_33c;
  char cStack_338;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  int iStack_308;
  int iStack_304;
  int iStack_300;
  undefined4 uStack_2fc;
  undefined8 uStack_2f8;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  int iStack_2c8;
  int iStack_2c4;
  int iStack_2c0;
  undefined4 uStack_2bc;
  undefined1 uStack_2b8;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  int iStack_288;
  int iStack_284;
  int iStack_280;
  undefined4 uStack_27c;
  undefined8 uStack_278;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  int iStack_248;
  int iStack_244;
  int iStack_240;
  undefined4 uStack_23c;
  undefined8 uStack_238;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  int iStack_208;
  int iStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined *puStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined1 uStack_1d0;
  undefined1 auStack_1c8 [8];
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long *plStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  char cStack_138;
  undefined7 uStack_137;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined7 uStack_37;
  
  func_0x0de98e90();
  func_0x0cdb4850(param_1);
  if ((DAT_0f73b438 == '\0') && (iVar2 = FUN_04108328(&DAT_0f73b438), iVar2 != 0)) {
    func_0x0dd19ad0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f73b3b8,0xf53dab8);
    func_0x0410844d(&DAT_0f73b438);
  }
  plStack_630 = (long *)(param_1 + 0x18);
  plVar4 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f73b3b8 + 4)) * 8);
  do {
    lVar5 = *plVar4;
    if (lVar5 == -1) goto LAB_0dce7160;
    plVar4 = (long *)(*(long *)(param_1 + 0x30) + lVar5 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar5 * 0x18) != *(uint *)(_DAT_0f73b3b8 + 4));
  if (plVar4 == *(long **)(param_1 + 0x38)) {
LAB_0dce7160:
    puVar3 = &DAT_0f73b3b8;
    if (iRam000000000f73b418 != -0x2b3da790) goto LAB_0dce71cd;
LAB_0dce718b:
    lVar5 = *(long *)(puVar3 + 0x68);
    if (lVar5 == 0) goto LAB_0dce71cd;
    bVar15 = (*(byte *)(lVar5 + 8) & 1) != 0;
    lVar12 = lVar5 + 9;
    if (bVar15) {
      lVar12 = *(long *)(lVar5 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar5 + 8) >> 1);
    if (bVar15) {
      uVar13 = *(ulong *)(lVar5 + 0x10);
    }
    func_0x0dd1a010(&uStack_3e0,param_1,lVar12,uVar13);
    iStack_340 = iStack_3b8;
    uStack_33c = uStack_3b4;
  }
  else {
    puVar3 = (undefined *)plVar4[2];
    if (*(int *)(puVar3 + 0x60) == -0x2b3da790) goto LAB_0dce718b;
LAB_0dce71cd:
    func_0x0dd1a010(&uStack_3e0,param_1,&UNK_01472529,0x11);
    iStack_340 = iStack_3b8;
    uStack_33c = uStack_3b4;
  }
  if (cStack_3b0 == '\0') {
    uStack_648._4_4_ = (uint)(uStack_648 >> 0x20);
    uStack_688._4_4_ = (uint)((ulong)uStack_688 >> 0x20);
    uStack_698._4_4_ = (undefined4)((ulong)uStack_698 >> 0x20);
    uStack_368 = uStack_3e0;
    uStack_364 = uStack_3dc;
    uStack_360 = uStack_3d8;
    uStack_35c = uStack_3d4;
    uStack_358 = uStack_3d0;
    uStack_354 = uStack_3cc;
    uStack_350 = uStack_3c8;
    uStack_34c = uStack_3c4;
    iStack_348 = iStack_3c0;
    iStack_344 = iStack_3bc;
    cStack_338 = cStack_3b0;
    func_0x0dd1a600(&puStack_628,CONCAT44(uStack_3dc,uStack_3e0) + 0x18);
    if (uStack_610._4_4_ == 2) {
      piVar7 = *(int **)(*(long *)(uStack_618 + 0x78) + 0x60);
      iVar2 = *piVar7;
      while (iVar2 != (int)uStack_610) {
        piVar7 = piVar7 + 0x16;
        iVar2 = *piVar7;
      }
      uVar13 = *(ulong *)(piVar7 + 0xc);
      while (uVar13 != uStack_620) {
        piVar7 = *(int **)(piVar7 + 0xe);
        uVar13 = *(ulong *)(piVar7 + 0xc);
      }
LAB_0dce72af:
      *(byte *)((long)piVar7 + 0x12) = *(byte *)((long)piVar7 + 0x12) | 4;
    }
    else {
      if (uStack_610._4_4_ == 1) {
        piVar7 = *(int **)(*(long *)(uStack_618 + 0x78) + 0x48);
        iVar2 = *piVar7;
        while (iVar2 != (int)uStack_610) {
          piVar7 = piVar7 + 0x1a;
          iVar2 = *piVar7;
        }
        goto LAB_0dce72af;
      }
      if (uStack_610._4_4_ == 0) {
        *(uint *)(uStack_618 + 0x18) = *(uint *)(uStack_618 + 0x18) | 0x40000;
      }
    }
    func_0x0dd1abc0(&puStack_628,&uStack_368,&UNK_0137f4f8,7);
    plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar4 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar4 = (long)&UNK_0f406b78;
    if (uStack_610 != (long *)0x0) {
      lVar5 = *uStack_610;
      uStack_610 = plVar4;
      (**(code **)(lVar5 + 8))();
      plVar4 = uStack_610;
    }
    uStack_610 = plVar4;
    uStack_698 = (undefined *)CONCAT44(uStack_698._4_4_,(undefined4)uStack_618);
    uStack_690 = (long *)0x0;
    uStack_688 = (long *)((ulong)uStack_688._4_4_ << 0x20);
    uStack_680 = 1;
    puStack_678 = (undefined1 *)0x0;
    plStack_670 = (long *)&UNK_0ce08c10;
    plStack_668 = (long *)&SUB_048b06d0;
    puStack_660 = &SUB_0ce04b20;
    plStack_658 = (long *)&UNK_0dd1b170;
    puStack_650 = &UNK_0dd1b330;
    uStack_648 = (ulong)uStack_648._4_4_ << 0x20;
    uStack_640 = 0;
    plStack_638 = (long *)0x0;
    func_0x048b05a0(uStack_620,&uStack_698);
    plVar4 = plStack_638;
    if (plStack_638 != (long *)0x0) {
      LOCK();
      plVar9 = plStack_638 + 1;
      lVar5 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plStack_638 + 0x10))(plStack_638);
        FUN_0412c2d0(plVar4);
      }
    }
    func_0x0dd1ae70(&puStack_628);
    cStack_138 = cStack_338;
    iStack_148 = iStack_348;
    iStack_144 = iStack_344;
    iStack_140 = iStack_340;
    uStack_13c = uStack_33c;
    uStack_158 = uStack_358;
    uStack_154 = uStack_354;
    uStack_150 = uStack_350;
    uStack_14c = uStack_34c;
    uStack_168 = uStack_368;
    uStack_164 = uStack_364;
    uStack_160 = uStack_360;
    uStack_15c = uStack_35c;
    func_0x048b0bc0(&uStack_610);
    uStack_328 = uStack_168;
    uStack_324 = uStack_164;
    uStack_320 = uStack_160;
    uStack_31c = uStack_15c;
    uStack_318 = uStack_158;
    uStack_314 = uStack_154;
    uStack_310 = uStack_150;
    uStack_30c = uStack_14c;
    iStack_308 = iStack_148;
    iStack_304 = iStack_144;
    iStack_300 = iStack_140;
    uStack_2fc = uStack_13c;
    uStack_2f8 = CONCAT71(uStack_137,cStack_138);
    func_0x0dd1a600(&puStack_628,CONCAT44(uStack_164,uStack_168) + 0x18);
    if (uStack_610._4_4_ == 2) {
      piVar7 = *(int **)(*(long *)(uStack_618 + 0x78) + 0x60);
      iVar2 = *piVar7;
      while (iVar2 != (int)uStack_610) {
        piVar7 = piVar7 + 0x16;
        iVar2 = *piVar7;
      }
      uVar13 = *(ulong *)(piVar7 + 0xc);
      while (uVar13 != uStack_620) {
        piVar7 = *(int **)(piVar7 + 0xe);
        uVar13 = *(ulong *)(piVar7 + 0xc);
      }
LAB_0dce752f:
      *(byte *)((long)piVar7 + 0x12) = *(byte *)((long)piVar7 + 0x12) | 4;
    }
    else {
      if (uStack_610._4_4_ == 1) {
        piVar7 = *(int **)(*(long *)(uStack_618 + 0x78) + 0x48);
        iVar2 = *piVar7;
        while (iVar2 != (int)uStack_610) {
          piVar7 = piVar7 + 0x1a;
          iVar2 = *piVar7;
        }
        goto LAB_0dce752f;
      }
      if (uStack_610._4_4_ == 0) {
        *(uint *)(uStack_618 + 0x18) = *(uint *)(uStack_618 + 0x18) | 0x40000;
      }
    }
    func_0x0dd1abc0(&puStack_628,&uStack_328,&UNK_0143f3ca,0x11);
    plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar4 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar4 = (long)&UNK_0f0126a0;
    if (uStack_610 != (long *)0x0) {
      lVar5 = *uStack_610;
      uStack_610 = plVar4;
      (**(code **)(lVar5 + 8))();
      plVar4 = uStack_610;
    }
    uStack_610 = plVar4;
    uStack_698 = (undefined *)CONCAT44(uStack_698._4_4_,(undefined4)uStack_618);
    uStack_690 = (long *)0x0;
    uStack_688 = (long *)((ulong)uStack_688 & 0xffffffff00000000);
    uStack_680 = 1;
    puStack_678 = (undefined1 *)0x0;
    plStack_670 = (long *)&UNK_05daeda0;
    plStack_668 = (long *)&SUB_048b06d0;
    puStack_660 = &SUB_05daea90;
    plStack_658 = (long *)&UNK_0dd1b500;
    puStack_650 = &UNK_0dd1b660;
    uStack_648 = uStack_648 & 0xffffffff00000000;
    uStack_640 = 0;
    plStack_638 = (long *)0x0;
    func_0x048b05a0(uStack_620,&uStack_698);
    plVar4 = plStack_638;
    if (plStack_638 != (long *)0x0) {
      LOCK();
      plVar9 = plStack_638 + 1;
      lVar5 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plStack_638 + 0x10))(plStack_638);
        FUN_0412c2d0(plVar4);
      }
    }
    func_0x0dd1ae70(&puStack_628);
    uStack_378 = (undefined1)uStack_2f8;
    iStack_388 = iStack_308;
    iStack_384 = iStack_304;
    iStack_380 = iStack_300;
    uStack_37c = uStack_2fc;
    uStack_398 = uStack_318;
    uStack_394 = uStack_314;
    uStack_390 = uStack_310;
    uStack_38c = uStack_30c;
    uStack_3a8 = uStack_328;
    uStack_3a4 = uStack_324;
    uStack_3a0 = uStack_320;
    uStack_39c = uStack_31c;
    func_0x048b0bc0(&uStack_610);
    if (iStack_380 == 4) {
      lVar5 = func_0x0dd1b990(&uStack_3a8);
      lVar5 = *(long *)(lVar5 + 0x48);
      puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar6 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
LAB_0dce771f:
      puVar6[1] = 0xffffffffffffffff;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0xff;
      *puVar6 = &UNK_0f0edc68;
      uVar10 = _DAT_014f0528;
      puVar6[4] = 0;
      puVar6[5] = uVar10;
      puVar6[6] = 0;
      *(undefined2 *)(puVar6 + 7) = 0;
      *(undefined4 *)((long)puVar6 + 0x3a) = uStack_54e;
      *(undefined2 *)((long)puVar6 + 0x3e) = uStack_54a;
      plVar4 = *(long **)(lVar5 + 8);
      *(undefined8 **)(lVar5 + 8) = puVar6;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x28))();
      }
    }
    else if (iStack_380 == 1) {
      lVar5 = func_0x0dd1b840(&uStack_3a8);
      lVar5 = *(long *)(lVar5 + 0x58);
      puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar6 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      goto LAB_0dce771f;
    }
    uStack_2b8 = uStack_378;
    iStack_2c8 = iStack_388;
    iStack_2c4 = iStack_384;
    iStack_2c0 = iStack_380;
    uStack_2bc = uStack_37c;
    uStack_2d8 = uStack_398;
    uStack_2d4 = uStack_394;
    uStack_2d0 = uStack_390;
    uStack_2cc = uStack_38c;
    uStack_2e8 = uStack_3a8;
    uStack_2e4 = uStack_3a4;
    uStack_2e0 = uStack_3a0;
    uStack_2dc = uStack_39c;
    func_0x0dd1a600(&puStack_628,CONCAT44(uStack_3a4,uStack_3a8) + 0x18);
    if (uStack_610._4_4_ == 2) {
      piVar7 = *(int **)(*(long *)(uStack_618 + 0x78) + 0x60);
      iVar2 = *piVar7;
      while (iVar2 != (int)uStack_610) {
        piVar7 = piVar7 + 0x16;
        iVar2 = *piVar7;
      }
      uVar13 = *(ulong *)(piVar7 + 0xc);
      while (uVar13 != uStack_620) {
        piVar7 = *(int **)(piVar7 + 0xe);
        uVar13 = *(ulong *)(piVar7 + 0xc);
      }
LAB_0dce788f:
      *(byte *)((long)piVar7 + 0x12) = *(byte *)((long)piVar7 + 0x12) | 4;
    }
    else {
      if (uStack_610._4_4_ == 1) {
        piVar7 = *(int **)(*(long *)(uStack_618 + 0x78) + 0x48);
        iVar2 = *piVar7;
        while (iVar2 != (int)uStack_610) {
          piVar7 = piVar7 + 0x1a;
          iVar2 = *piVar7;
        }
        goto LAB_0dce788f;
      }
      if (uStack_610._4_4_ == 0) {
        *(uint *)(uStack_618 + 0x18) = *(uint *)(uStack_618 + 0x18) | 0x40000;
      }
    }
    func_0x0dd1abc0(&puStack_628,&uStack_2e8,&UNK_0131cb3e,0xd);
    plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar4 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar4 = (long)&UNK_0f49fa90;
    if (uStack_610 != (long *)0x0) {
      lVar5 = *uStack_610;
      uStack_610 = plVar4;
      (**(code **)(lVar5 + 8))();
      plVar4 = uStack_610;
    }
    uStack_610 = plVar4;
    uStack_698 = (undefined *)CONCAT44(uStack_698._4_4_,(undefined4)uStack_618);
    uStack_690 = (long *)0x0;
    uStack_688 = (long *)((ulong)uStack_688 & 0xffffffff00000000);
    uStack_680 = 1;
    puStack_678 = (undefined1 *)0x0;
    plStack_670 = (long *)&UNK_0dd1f010;
    plStack_668 = (long *)&SUB_048b06d0;
    puStack_660 = &SUB_0dd1ea20;
    plStack_658 = (long *)&UNK_0dd1f020;
    puStack_650 = &UNK_0dd1f180;
    uStack_648 = uStack_648 & 0xffffffff00000000;
    uStack_640 = 0;
    plStack_638 = (long *)0x0;
    func_0x048b05a0(uStack_620,&uStack_698);
    plVar4 = plStack_638;
    if (plStack_638 != (long *)0x0) {
      LOCK();
      plVar9 = plStack_638 + 1;
      lVar5 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plStack_638 + 0x10))(plStack_638);
        FUN_0412c2d0(plVar4);
      }
    }
    func_0x0dd1ae70(&puStack_628);
    uStack_f8 = uStack_2b8;
    iStack_108 = iStack_2c8;
    iStack_104 = iStack_2c4;
    iStack_100 = iStack_2c0;
    uStack_fc = uStack_2bc;
    uStack_118 = uStack_2d8;
    uStack_114 = uStack_2d4;
    uStack_110 = uStack_2d0;
    uStack_10c = uStack_2cc;
    uStack_128 = uStack_2e8;
    uStack_124 = uStack_2e4;
    uStack_120 = uStack_2e0;
    uStack_11c = uStack_2dc;
    func_0x048b0bc0(&uStack_610);
    puStack_628 = (undefined7 *)&UNK_0130871a;
    uStack_618 = &UNK_01268a45;
    puStack_608 = &UNK_0148b2d8;
    puStack_5f8 = &UNK_0128283c;
    puStack_5e8 = &UNK_014bfc17;
    plStack_5d8 = (long *)&UNK_0128283c;
    puStack_5c8 = &UNK_01233db6;
    puStack_5b8 = &UNK_0148b2d8;
    puStack_5a8 = &UNK_011e3d13;
    puStack_598 = &UNK_0128283c;
    puStack_588 = &UNK_011ffc51;
    puStack_578 = &UNK_014bfc17;
    FUN_0470d9a0(&bStack_4e0,&UNK_0140caa5,0x2f8,0xcccccccccccc,&puStack_628);
    puStack_628 = &uStack_4df;
    uStack_620 = (ulong)(bStack_4e0 >> 1);
    if ((bStack_4e0 & 1) != 0) {
      uStack_620 = uStack_4d8;
      puStack_628 = puStack_4d0;
    }
    FUN_0470d9a0(&bStack_470,&UNK_0129dddf,0x4a,0xd,&puStack_628);
    uStack_2a8 = uStack_128;
    uStack_2a4 = uStack_124;
    uStack_2a0 = uStack_120;
    uStack_29c = uStack_11c;
    uStack_298 = uStack_118;
    uStack_294 = uStack_114;
    uStack_290 = uStack_110;
    uStack_28c = uStack_10c;
    iStack_288 = iStack_108;
    iStack_284 = iStack_104;
    iStack_280 = iStack_100;
    uStack_27c = uStack_fc;
    uStack_278 = CONCAT71(uStack_f7,uStack_f8);
    func_0x0dd1a600(&puStack_628,CONCAT44(uStack_124,uStack_128) + 0x18);
    if (uStack_610._4_4_ == 2) {
      piVar7 = *(int **)(*(long *)(uStack_618 + 0x78) + 0x60);
      iVar2 = *piVar7;
      while (iVar2 != (int)uStack_610) {
        piVar7 = piVar7 + 0x16;
        iVar2 = *piVar7;
      }
      uVar13 = *(ulong *)(piVar7 + 0xc);
      while (uVar13 != uStack_620) {
        piVar7 = *(int **)(piVar7 + 0xe);
        uVar13 = *(ulong *)(piVar7 + 0xc);
      }
LAB_0dce7c1f:
      *(byte *)((long)piVar7 + 0x12) = *(byte *)((long)piVar7 + 0x12) | 4;
    }
    else {
      if (uStack_610._4_4_ == 1) {
        piVar7 = *(int **)(*(long *)(uStack_618 + 0x78) + 0x48);
        iVar2 = *piVar7;
        while (iVar2 != (int)uStack_610) {
          piVar7 = piVar7 + 0x1a;
          iVar2 = *piVar7;
        }
        goto LAB_0dce7c1f;
      }
      if (uStack_610._4_4_ == 0) {
        *(uint *)(uStack_618 + 0x18) = *(uint *)(uStack_618 + 0x18) | 0x40000;
      }
    }
    func_0x0dd1abc0(&puStack_628,&uStack_2a8,&UNK_01268a39,0xb);
    plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar4 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar4 = (long)&UNK_0f49fcc0;
    if (uStack_610 != (long *)0x0) {
      lVar5 = *uStack_610;
      uStack_610 = plVar4;
      (**(code **)(lVar5 + 8))();
      plVar4 = uStack_610;
    }
    uStack_610 = plVar4;
    uStack_698 = (undefined *)CONCAT44(uStack_698._4_4_,(undefined4)uStack_618);
    uStack_690 = (long *)0x0;
    uStack_688 = (long *)((ulong)uStack_688 & 0xffffffff00000000);
    uStack_680 = 1;
    puStack_678 = (undefined1 *)0x0;
    plStack_670 = (long *)&UNK_0dd147e0;
    plStack_668 = (long *)&SUB_048b06d0;
    puStack_660 = &UNK_0dd141f0;
    plStack_658 = (long *)&UNK_0dd1f5f0;
    puStack_650 = &UNK_0dd1f750;
    uStack_648 = uStack_648 & 0xffffffff00000000;
    uStack_640 = 0;
    plStack_638 = (long *)0x0;
    func_0x048b05a0(uStack_620,&uStack_698);
    plVar4 = plStack_638;
    if (plStack_638 != (long *)0x0) {
      LOCK();
      plVar9 = plStack_638 + 1;
      lVar5 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plStack_638 + 0x10))(plStack_638);
        FUN_0412c2d0(plVar4);
      }
    }
    func_0x0dd1ae70(&puStack_628);
    uStack_b8 = (undefined1)uStack_278;
    iStack_c8 = iStack_288;
    iStack_c4 = iStack_284;
    iStack_c0 = iStack_280;
    uStack_bc = uStack_27c;
    uStack_d8 = uStack_298;
    uStack_d4 = uStack_294;
    uStack_d0 = uStack_290;
    uStack_cc = uStack_28c;
    uStack_e8 = uStack_2a8;
    uStack_e4 = uStack_2a4;
    uStack_e0 = uStack_2a0;
    uStack_dc = uStack_29c;
    func_0x048b0bc0(&uStack_610);
    puStack_628 = (undefined7 *)&UNK_013c28d2;
    uStack_618 = &UNK_013d7623;
    puStack_608 = &UNK_0131d5bd;
    puStack_5f8 = &UNK_012e9aec;
    puStack_5e8 = &UNK_013bdce6;
    plStack_5d8 = (long *)&UNK_01272580;
    puStack_5c8 = &UNK_0135c5cd;
    FUN_0470d9a0(&bStack_4f8,&UNK_013f2e9e,0xca,&UNK_0ccccccc,&puStack_628);
    puStack_628 = &uStack_4f7;
    uStack_620 = (ulong)(bStack_4f8 >> 1);
    if ((bStack_4f8 & 1) != 0) {
      uStack_620 = uStack_4f0;
      puStack_628 = puStack_4e8;
    }
    FUN_0470d9a0(&bStack_488,&UNK_01425d4c,0x20,0xd,&puStack_628);
    uStack_268 = uStack_e8;
    uStack_264 = uStack_e4;
    uStack_260 = uStack_e0;
    uStack_25c = uStack_dc;
    uStack_258 = uStack_d8;
    uStack_254 = uStack_d4;
    uStack_250 = uStack_d0;
    uStack_24c = uStack_cc;
    iStack_248 = iStack_c8;
    iStack_244 = iStack_c4;
    iStack_240 = iStack_c0;
    uStack_23c = uStack_bc;
    uStack_238 = CONCAT71(uStack_b7,uStack_b8);
    func_0x0dd1a600(&puStack_628,CONCAT44(uStack_e4,uStack_e8) + 0x18);
    if (uStack_610._4_4_ == 2) {
      piVar7 = *(int **)(*(long *)(uStack_618 + 0x78) + 0x60);
      iVar2 = *piVar7;
      while (iVar2 != (int)uStack_610) {
        piVar7 = piVar7 + 0x16;
        iVar2 = *piVar7;
      }
      uVar13 = *(ulong *)(piVar7 + 0xc);
      while (uVar13 != uStack_620) {
        piVar7 = *(int **)(piVar7 + 0xe);
        uVar13 = *(ulong *)(piVar7 + 0xc);
      }
LAB_0dce7f6f:
      *(byte *)((long)piVar7 + 0x12) = *(byte *)((long)piVar7 + 0x12) | 4;
    }
    else {
      if (uStack_610._4_4_ == 1) {
        piVar7 = *(int **)(*(long *)(uStack_618 + 0x78) + 0x48);
        iVar2 = *piVar7;
        while (iVar2 != (int)uStack_610) {
          piVar7 = piVar7 + 0x1a;
          iVar2 = *piVar7;
        }
        goto LAB_0dce7f6f;
      }
      if (uStack_610._4_4_ == 0) {
        *(uint *)(uStack_618 + 0x18) = *(uint *)(uStack_618 + 0x18) | 0x40000;
      }
    }
    func_0x0dd1abc0(&puStack_628,&uStack_268,&UNK_01301798,0xc);
    plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar4 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar4 = (long)&UNK_0ef46ef8;
    if (uStack_610 != (long *)0x0) {
      lVar5 = *uStack_610;
      uStack_610 = plVar4;
      (**(code **)(lVar5 + 8))();
      plVar4 = uStack_610;
    }
    uStack_610 = plVar4;
    uStack_698 = (undefined *)CONCAT44(uStack_698._4_4_,(undefined4)uStack_618);
    uStack_690 = (long *)0x0;
    uStack_688 = (long *)((ulong)uStack_688 & 0xffffffff00000000);
    uStack_680 = 1;
    puStack_678 = (undefined1 *)0x0;
    plStack_670 = (long *)&UNK_04906f70;
    plStack_668 = (long *)&SUB_048b06d0;
    puStack_660 = &SUB_04906c50;
    plStack_658 = (long *)&UNK_0dd1f930;
    puStack_650 = &UNK_0dd1fa90;
    uStack_648 = uStack_648 & 0xffffffff00000000;
    uStack_640 = 0;
    plStack_638 = (long *)0x0;
    func_0x048b05a0(uStack_620,&uStack_698);
    plVar4 = plStack_638;
    if (plStack_638 != (long *)0x0) {
      LOCK();
      plVar9 = plStack_638 + 1;
      lVar5 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plStack_638 + 0x10))(plStack_638);
        FUN_0412c2d0(plVar4);
      }
    }
    func_0x0dd1ae70(&puStack_628);
    uStack_78 = (undefined1)uStack_238;
    iStack_88 = iStack_248;
    iStack_84 = iStack_244;
    iStack_80 = iStack_240;
    uStack_7c = uStack_23c;
    uStack_98 = uStack_258;
    uStack_94 = uStack_254;
    uStack_90 = uStack_250;
    uStack_8c = uStack_24c;
    uStack_a8 = uStack_268;
    uStack_a4 = uStack_264;
    uStack_a0 = uStack_260;
    uStack_9c = uStack_25c;
    func_0x048b0bc0(&uStack_610);
    uStack_228 = uStack_a8;
    uStack_224 = uStack_a4;
    uStack_220 = uStack_a0;
    uStack_21c = uStack_9c;
    uStack_218 = uStack_98;
    uStack_214 = uStack_94;
    uStack_210 = uStack_90;
    uStack_20c = uStack_8c;
    iStack_208 = iStack_88;
    iStack_204 = iStack_84;
    iStack_200 = iStack_80;
    uStack_1fc = uStack_7c;
    uStack_1f8 = CONCAT71(uStack_77,uStack_78);
    func_0x0dd1a600(&puStack_628,CONCAT44(uStack_a4,uStack_a8) + 0x18);
    if (uStack_610._4_4_ == 2) {
      piVar7 = *(int **)(*(long *)(uStack_618 + 0x78) + 0x60);
      iVar2 = *piVar7;
      while (iVar2 != (int)uStack_610) {
        piVar7 = piVar7 + 0x16;
        iVar2 = *piVar7;
      }
      uVar13 = *(ulong *)(piVar7 + 0xc);
      while (uVar13 != uStack_620) {
        piVar7 = *(int **)(piVar7 + 0xe);
        uVar13 = *(ulong *)(piVar7 + 0xc);
      }
LAB_0dce81df:
      *(byte *)((long)piVar7 + 0x12) = *(byte *)((long)piVar7 + 0x12) | 4;
    }
    else {
      if (uStack_610._4_4_ == 1) {
        piVar7 = *(int **)(*(long *)(uStack_618 + 0x78) + 0x48);
        iVar2 = *piVar7;
        while (iVar2 != (int)uStack_610) {
          piVar7 = piVar7 + 0x1a;
          iVar2 = *piVar7;
        }
        goto LAB_0dce81df;
      }
      if (uStack_610._4_4_ == 0) {
        *(uint *)(uStack_618 + 0x18) = *(uint *)(uStack_618 + 0x18) | 0x40000;
      }
    }
    func_0x0dd1abc0(&puStack_628,&uStack_228,&UNK_01387ed2,9);
    plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar4 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar4 = (long)&UNK_0ef46ef8;
    if (uStack_610 != (long *)0x0) {
      lVar5 = *uStack_610;
      uStack_610 = plVar4;
      (**(code **)(lVar5 + 8))();
      plVar4 = uStack_610;
    }
    uStack_610 = plVar4;
    uStack_698 = (undefined *)CONCAT44(uStack_698._4_4_,(undefined4)uStack_618);
    uStack_690 = (long *)0x0;
    uStack_688 = (long *)((ulong)uStack_688 & 0xffffffff00000000);
    uStack_680 = 1;
    puStack_678 = (undefined1 *)0x0;
    plStack_670 = (long *)&UNK_04906f70;
    plStack_668 = (long *)&SUB_048b06d0;
    puStack_660 = &SUB_04906c50;
    plStack_658 = (long *)&UNK_0dd1fc70;
    puStack_650 = &UNK_0dd1fdd0;
    uStack_648 = uStack_648 & 0xffffffff00000000;
    uStack_640 = 0;
    plStack_638 = (long *)0x0;
    func_0x048b05a0(uStack_620,&uStack_698);
    plVar4 = plStack_638;
    if (plStack_638 != (long *)0x0) {
      LOCK();
      plVar9 = plStack_638 + 1;
      lVar5 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plStack_638 + 0x10))(plStack_638);
        FUN_0412c2d0(plVar4);
      }
    }
    func_0x0dd1ae70(&puStack_628);
    uStack_38 = (undefined1)uStack_1f8;
    iStack_48 = iStack_208;
    iStack_44 = iStack_204;
    iStack_40 = iStack_200;
    uStack_3c = uStack_1fc;
    uStack_58 = uStack_218;
    uStack_54 = uStack_214;
    uStack_50 = uStack_210;
    uStack_4c = uStack_20c;
    uStack_68 = uStack_228;
    uStack_64 = uStack_224;
    uStack_60 = uStack_220;
    uStack_5c = uStack_21c;
    func_0x048b0bc0(&uStack_610);
    uStack_458 = CONCAT44(uStack_64,uStack_68);
    uStack_450 = (long *)CONCAT44(uStack_5c,uStack_60);
    uStack_448 = uStack_58;
    uStack_444 = uStack_54;
    uStack_440 = uStack_50;
    uStack_43c = uStack_4c;
    iStack_438 = iStack_48;
    iStack_434 = iStack_44;
    iStack_430 = iStack_40;
    uStack_42c = uStack_3c;
    uStack_428 = CONCAT71(uStack_37,uStack_38);
    func_0x0dd1a600(&puStack_628,uStack_458 + 0x18);
    if (uStack_610._4_4_ == 2) {
      piVar7 = *(int **)(*(long *)(uStack_618 + 0x78) + 0x60);
      iVar2 = *piVar7;
      while (iVar2 != (int)uStack_610) {
        piVar7 = piVar7 + 0x16;
        iVar2 = *piVar7;
      }
      uVar13 = *(ulong *)(piVar7 + 0xc);
      while (uVar13 != uStack_620) {
        piVar7 = *(int **)(piVar7 + 0xe);
        uVar13 = *(ulong *)(piVar7 + 0xc);
      }
LAB_0dce843f:
      *(byte *)((long)piVar7 + 0x12) = *(byte *)((long)piVar7 + 0x12) | 4;
    }
    else {
      if (uStack_610._4_4_ == 1) {
        piVar7 = *(int **)(*(long *)(uStack_618 + 0x78) + 0x48);
        iVar2 = *piVar7;
        while (iVar2 != (int)uStack_610) {
          piVar7 = piVar7 + 0x1a;
          iVar2 = *piVar7;
        }
        goto LAB_0dce843f;
      }
      if (uStack_610._4_4_ == 0) {
        *(uint *)(uStack_618 + 0x18) = *(uint *)(uStack_618 + 0x18) | 0x40000;
      }
    }
    func_0x0dd1abc0(&puStack_628,&uStack_458,&UNK_014578fc,0x11);
    plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar4 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar4 = (long)&UNK_0ef46ef8;
    if (uStack_610 != (long *)0x0) {
      lVar5 = *uStack_610;
      uStack_610 = plVar4;
      (**(code **)(lVar5 + 8))();
      plVar4 = uStack_610;
    }
    uStack_610 = plVar4;
    uStack_698 = (undefined *)CONCAT44(uStack_698._4_4_,(undefined4)uStack_618);
    uStack_690 = (long *)0x0;
    uStack_688 = (long *)((ulong)uStack_688 & 0xffffffff00000000);
    uStack_680 = 1;
    puStack_678 = (undefined1 *)0x0;
    plStack_670 = (long *)&UNK_04906f70;
    plStack_668 = (long *)&SUB_048b06d0;
    puStack_660 = &SUB_04906c50;
    plStack_658 = (long *)&UNK_0dd1ffb0;
    puStack_650 = &UNK_0dd20110;
    uStack_648 = uStack_648 & 0xffffffff00000000;
    uStack_640 = 0;
    plStack_638 = (long *)0x0;
    func_0x048b05a0(uStack_620,&uStack_698);
    plVar4 = plStack_638;
    if (plStack_638 != (long *)0x0) {
      LOCK();
      plVar9 = plStack_638 + 1;
      lVar5 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plStack_638 + 0x10))(plStack_638);
        FUN_0412c2d0(plVar4);
      }
    }
    func_0x0dd1ae70(&puStack_628);
    uStack_3e8 = (undefined1)uStack_428;
    iStack_3f8 = iStack_438;
    iStack_3f4 = iStack_434;
    iStack_3f0 = iStack_430;
    uStack_3ec = uStack_42c;
    uStack_408 = uStack_448;
    uStack_404 = uStack_444;
    uStack_400 = uStack_440;
    uStack_3fc = uStack_43c;
    uStack_418 = (uint)uStack_458;
    uStack_414 = uStack_458._4_4_;
    uStack_410 = (undefined4)uStack_450;
    uStack_40c = uStack_450._4_4_;
    func_0x048b0bc0(&uStack_610);
    uStack_548 = CONCAT44(uStack_414,uStack_418);
    uStack_540 = CONCAT44(uStack_40c,uStack_410);
    uStack_538 = uStack_408;
    uStack_534 = uStack_404;
    iStack_530 = uStack_400;
    iStack_52c = uStack_3fc;
    iStack_528 = iStack_3f8;
    iStack_524 = iStack_3f4;
    iStack_520 = iStack_3f0;
    uStack_51c = uStack_3ec;
    uStack_518 = CONCAT71(uStack_3e7,uStack_3e8);
    func_0x0dd1a600(&puStack_628,uStack_548 + 0x18);
    if (uStack_610._4_4_ == 2) {
      piVar7 = *(int **)(*(long *)(uStack_618 + 0x78) + 0x60);
      iVar2 = *piVar7;
      while (iVar2 != (int)uStack_610) {
        piVar7 = piVar7 + 0x16;
        iVar2 = *piVar7;
      }
      uVar13 = *(ulong *)(piVar7 + 0xc);
      while (uVar13 != uStack_620) {
        piVar7 = *(int **)(piVar7 + 0xe);
        uVar13 = *(ulong *)(piVar7 + 0xc);
      }
LAB_0dce869f:
      *(byte *)((long)piVar7 + 0x12) = *(byte *)((long)piVar7 + 0x12) | 4;
    }
    else {
      if (uStack_610._4_4_ == 1) {
        piVar7 = *(int **)(*(long *)(uStack_618 + 0x78) + 0x48);
        iVar2 = *piVar7;
        while (iVar2 != (int)uStack_610) {
          piVar7 = piVar7 + 0x1a;
          iVar2 = *piVar7;
        }
        goto LAB_0dce869f;
      }
      if (uStack_610._4_4_ == 0) {
        *(uint *)(uStack_618 + 0x18) = *(uint *)(uStack_618 + 0x18) | 0x40000;
      }
    }
    func_0x0dd1abc0(&puStack_628,&uStack_548,&UNK_012eacfd,9);
    plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar4 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar4 = (long)&UNK_0ef46ef8;
    if (uStack_610 != (long *)0x0) {
      lVar5 = *uStack_610;
      uStack_610 = plVar4;
      (**(code **)(lVar5 + 8))();
      plVar4 = uStack_610;
    }
    uStack_610 = plVar4;
    uStack_698 = (undefined *)CONCAT44(uStack_698._4_4_,(undefined4)uStack_618);
    uStack_690 = (long *)0x0;
    uStack_688 = (long *)((ulong)uStack_688 & 0xffffffff00000000);
    uStack_680 = 1;
    puStack_678 = (undefined1 *)0x0;
    plStack_670 = (long *)&UNK_04906f70;
    plStack_668 = (long *)&SUB_048b06d0;
    puStack_660 = &SUB_04906c50;
    plStack_658 = (long *)&UNK_0dd202f0;
    puStack_650 = &UNK_0dd20450;
    uStack_648 = uStack_648 & 0xffffffff00000000;
    uStack_640 = 0;
    plStack_638 = (long *)0x0;
    func_0x048b05a0(uStack_620,&uStack_698);
    plVar4 = plStack_638;
    if (plStack_638 != (long *)0x0) {
      LOCK();
      plVar9 = plStack_638 + 1;
      lVar5 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plStack_638 + 0x10))(plStack_638);
        FUN_0412c2d0(plVar4);
      }
    }
    func_0x0dd1ae70(&puStack_628);
    uStack_498 = CONCAT71(uStack_498._1_7_,(undefined1)uStack_518);
    iStack_4a8 = iStack_528;
    iStack_4a4 = iStack_524;
    uStack_4a0 = CONCAT44(uStack_51c,iStack_520);
    uStack_4b8 = uStack_538;
    uStack_4b4 = uStack_534;
    uStack_4b0 = iStack_530;
    uStack_4ac = iStack_52c;
    uStack_4c8 = (undefined4)uStack_548;
    uStack_4c4 = uStack_548._4_4_;
    uStack_4c0 = (undefined4)uStack_540;
    uStack_4bc = uStack_540._4_4_;
    func_0x048b0bc0(&uStack_610);
    if ((int)uStack_4a0 == 1) {
      lVar5 = func_0x0dd1b840(&uStack_4c8);
      *(undefined1 *)(*(long *)(lVar5 + 0x58) + 0xa9) = 2;
    }
    else {
      lVar5 = func_0x0dd1b990(&uStack_4c8);
      *(undefined1 *)(*(long *)(lVar5 + 0x48) + 0x10) = 2;
      if ((*(byte *)(lVar5 + 0x12) & 2) != 0) {
        lVar5 = CONCAT44(uStack_4c4,uStack_4c8);
        if ((DAT_0f73b438 == '\0') && (iVar2 = FUN_04108328(&DAT_0f73b438), iVar2 != 0)) {
          func_0x0dd19ad0();
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f73b3b8,0xf53dab8);
          func_0x0410844d(&DAT_0f73b438);
        }
        plVar4 = (long *)(*(long *)(lVar5 + 0x18) +
                         (ulong)((int)((ulong)(*(long *)(lVar5 + 0x20) - *(long *)(lVar5 + 0x18)) >>
                                      3) - 1U & *(uint *)(_DAT_0f73b3b8 + 4)) * 8);
        do {
          lVar12 = *plVar4;
          if (lVar12 == -1) goto LAB_0dce88a0;
          plVar4 = (long *)(*(long *)(lVar5 + 0x30) + lVar12 * 0x18);
        } while (*(uint *)(*(long *)(lVar5 + 0x30) + 8 + lVar12 * 0x18) !=
                 *(uint *)(_DAT_0f73b3b8 + 4));
        if (plVar4 == *(long **)(lVar5 + 0x38)) {
LAB_0dce88a0:
          puVar3 = &DAT_0f73b3b8;
        }
        else {
          puVar3 = (undefined *)plVar4[2];
        }
        puVar8 = (undefined7 *)func_0x048b1040(lVar5 + 0x18,puVar3,0xbf75c8f8,1);
        if (puVar8 == (undefined7 *)0x0) {
          puStack_628 = (undefined7 *)0x0;
          uStack_620 = 0;
          func_0x048b10d0(&puStack_628);
          puVar8 = puStack_628;
        }
        *(undefined1 *)(*(long *)(puVar8 + 9) + 8) = 2;
      }
    }
    if ((bStack_488 & 1) != 0) {
      FUN_0412a280(uStack_478,CONCAT71(uStack_487,bStack_488) & 0xfffffffffffffffe);
    }
    if ((bStack_4f8 & 1) != 0) {
      FUN_0412a280(puStack_4e8,CONCAT71(uStack_4f7,bStack_4f8) & 0xfffffffffffffffe);
    }
    if ((bStack_470 & 1) != 0) {
      FUN_0412a280(uStack_460,CONCAT71(uStack_46f,bStack_470) & 0xfffffffffffffffe);
    }
    if ((bStack_4e0 & 1) != 0) {
      FUN_0412a280(puStack_4d0,CONCAT71(uStack_4df,bStack_4e0) & 0xfffffffffffffffe);
    }
  }
  lVar5 = func_0x0cd0fa70(plStack_630);
  if ((*(int *)(lVar5 + 0x60) == -0x2b3da790) && (lVar5 = *(long *)(lVar5 + 0x68), lVar5 != 0)) {
    bVar15 = (*(byte *)(lVar5 + 8) & 1) != 0;
    lVar12 = lVar5 + 9;
    if (bVar15) {
      lVar12 = *(long *)(lVar5 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar5 + 8) >> 1);
    if (bVar15) {
      uVar13 = *(ulong *)(lVar5 + 0x10);
    }
    func_0x0dd20630(&uStack_3e0,param_1,lVar12,uVar13);
  }
  else {
    func_0x0dd20630(&uStack_3e0,param_1,&UNK_0128529c,0x1c);
  }
  if (cStack_3b0 != '\0') {
    return;
  }
  uStack_620 = 0xffffffffffffffff;
  uStack_618 = (undefined *)0x0;
  uVar13 = (ulong)uStack_610 >> 8;
  uStack_610 = (long *)CONCAT71((int7)uVar13,0xff);
  puStack_628 = (undefined7 *)&UNK_0f4e3c70;
  func_0x041679a0(&puStack_608);
  lStack_600 = func_0x041681f0(&puStack_608,0xf547a30);
  puStack_5f8 = (undefined *)func_0x041681f0(&puStack_608,0xf547770);
  lStack_5f0 = 0;
  puStack_5e8 = (undefined *)0x0;
  lStack_5e0 = 0;
  plStack_5d8 = (long *)0x0;
  lStack_5d0 = 0;
  puStack_5c8 = (undefined *)0x0;
  uStack_5c0 = 0;
  puStack_5b8 = (undefined *)0x0;
  lStack_5b0 = 0;
  bStack_510 = 0x24;
  uStack_50f = _DAT_013d8f81;
  uStack_50b = _UNK_013d8f85;
  uStack_507 = _UNK_013d8f89;
  uStack_503 = _UNK_013d8f8d;
  uStack_4ff = 0x242b;
  uStack_4fd = 0;
  func_0x0ed60210(&puStack_628,&bStack_510,0);
  if ((bStack_510 & 1) != 0) {
    FUN_0412a280(CONCAT44(uStack_4fc,CONCAT13(uStack_4fd,CONCAT21(uStack_4ff,uStack_503._3_1_))),
                 CONCAT35((undefined3)uStack_50b,CONCAT41(uStack_50f,bStack_510)) &
                 0xfffffffffffffffe);
  }
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  plVar4[1] = -1;
  plVar4[2] = 0;
  *(undefined1 *)(plVar4 + 3) = 0xff;
  *plVar4 = (long)&UNK_0f49b738;
  uStack_698 = (undefined *)0x40;
  FUN_0470d9a0(&uStack_418,&UNK_01387edc,0xfc,4,&uStack_698);
  iStack_4a8 = iStack_3c0;
  iStack_4a4 = iStack_3bc;
  uStack_4c8 = uStack_3e0;
  uStack_4c4 = uStack_3dc;
  uStack_4c0 = uStack_3d8;
  uStack_4bc = uStack_3d4;
  uStack_4b8 = uStack_3d0;
  uStack_4b4 = uStack_3cc;
  uStack_4b0 = uStack_3c8;
  uStack_4ac = uStack_3c4;
  uStack_4a0 = 0x1e1bc4d500000004;
  if ((DAT_0f703ae0 == '\0') && (iVar2 = FUN_04108328(&DAT_0f703ae0), iVar2 != 0)) {
    func_0x0cd0df20(0xf703ac8);
    func_0x0410844d(&DAT_0f703ae0);
  }
  uStack_698 = (undefined *)CONCAT44(uStack_698._4_4_,uStack_4a0._4_4_);
  uStack_690 = (long *)0x0;
  uStack_688 = (long *)((ulong)uStack_688 & 0xffffffff00000000);
  uStack_680 = 1;
  puStack_678 = &SUB_048aead0;
  plStack_670 = (long *)&UNK_0dd20f00;
  plStack_668 = (long *)&UNK_0dd20fc0;
  puStack_660 = (undefined1 *)0x0;
  plStack_658 = (long *)((ulong)plStack_658 & 0xffffffff00000000);
  puStack_650 = (undefined *)0x0;
  uStack_648 = 0;
  func_0x049057f0(&uStack_4c0,&uStack_698);
  func_0x048aea50(&uStack_698);
  uStack_538 = uStack_4b0;
  uStack_534 = uStack_4ac;
  iStack_530 = iStack_4a8;
  iStack_52c = iStack_4a4;
  uStack_548 = CONCAT44(uStack_4bc,uStack_4c0);
  uStack_540 = CONCAT44(uStack_4b4,uStack_4b8);
  puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar6 = &UNK_0f49bec0;
  if ((DAT_0f551bc8 == '\0') && (iVar2 = FUN_04108328(&DAT_0f551bc8), iVar2 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  uStack_698 = (undefined *)CONCAT44(uStack_698._4_4_,_DAT_0f551bb4);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef46c48;
  uStack_690 = plVar9 + 3;
  plVar9[3] = (long)puVar6;
  plVar9[4] = 0;
  *(undefined1 *)(plVar9 + 5) = 0xff;
  uStack_458 = 0;
  uStack_450 = (long *)0x0;
  uStack_688 = plVar9;
  func_0x048afd20(&uStack_548,&uStack_698);
  plVar9 = uStack_688;
  if (uStack_688 != (long *)0x0) {
    LOCK();
    plVar11 = uStack_688 + 1;
    lVar5 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*uStack_688 + 0x10))(uStack_688);
      FUN_0412c2d0(plVar9);
    }
  }
  plVar9 = uStack_450;
  if (uStack_450 != (long *)0x0) {
    LOCK();
    plVar11 = uStack_450 + 1;
    lVar5 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*uStack_450 + 0x10))(uStack_450);
      FUN_0412c2d0(plVar9);
    }
  }
  if ((DAT_0f703ae0 == '\0') && (iVar2 = FUN_04108328(&DAT_0f703ae0), iVar2 != 0)) {
    func_0x0cd0df20(0xf703ac8);
    func_0x0410844d(&DAT_0f703ae0);
  }
  if (iStack_4a4 == 2) {
    piVar7 = *(int **)(*(long *)(CONCAT44(uStack_4ac,uStack_4b0) + 0x78) + 0x60);
    iVar2 = *piVar7;
    while (iVar2 != iStack_4a8) {
      piVar7 = piVar7 + 0x16;
      iVar2 = *piVar7;
    }
    lVar5 = *(long *)(piVar7 + 0xc);
    while (lVar5 != CONCAT44(uStack_4b4,uStack_4b8)) {
      piVar7 = *(int **)(piVar7 + 0xe);
      lVar5 = *(long *)(piVar7 + 0xc);
    }
LAB_0dce8e6f:
    *(byte *)((long)piVar7 + 0x12) = *(byte *)((long)piVar7 + 0x12) | 2;
  }
  else {
    if (iStack_4a4 == 1) {
      piVar7 = *(int **)(*(long *)(CONCAT44(uStack_4ac,uStack_4b0) + 0x78) + 0x48);
      iVar2 = *piVar7;
      while (iVar2 != iStack_4a8) {
        piVar7 = piVar7 + 0x1a;
        iVar2 = *piVar7;
      }
      goto LAB_0dce8e6f;
    }
    if (iStack_4a4 == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_4ac,uStack_4b0) + 0x18);
      *puVar1 = *puVar1 | 0x20000;
    }
  }
  if ((DAT_0f703ae0 == '\0') && (iVar2 = FUN_04108328(&DAT_0f703ae0), iVar2 != 0)) {
    func_0x0cd0df20(0xf703ac8);
    func_0x0410844d(&DAT_0f703ae0);
  }
  uStack_698 = (undefined *)CONCAT44(uStack_698._4_4_,0xbf75c8f8);
  uStack_690 = (long *)0x0;
  uStack_688 = (long *)CONCAT44(uStack_688._4_4_,1);
  uStack_680 = 0;
  puStack_678 = &UNK_0dd21450;
  plStack_670 = (long *)&SUB_048b06d0;
  plStack_668 = (long *)&UNK_0dd261c0;
  puStack_660 = (undefined1 *)0x0;
  plStack_658 = (long *)((ulong)plStack_658 & 0xffffffff00000000);
  puStack_650 = (undefined *)0x0;
  uStack_648 = 0;
  func_0x049057f0(&uStack_4c0,&uStack_698);
  func_0x048aea50(&uStack_698);
  uStack_538 = uStack_4b0;
  uStack_534 = uStack_4ac;
  iStack_530 = iStack_4a8;
  iStack_52c = iStack_4a4;
  uStack_548 = CONCAT44(uStack_4bc,uStack_4c0);
  uStack_540 = CONCAT44(uStack_4b4,uStack_4b8);
  puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar6 = &UNK_0f49bec0;
  if ((DAT_0f551cb0 == '\0') && (iVar2 = FUN_04108328(&DAT_0f551cb0), iVar2 != 0)) {
    func_0x04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  uStack_698 = (undefined *)CONCAT44(uStack_698._4_4_,_DAT_0f551c9c);
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef46c98;
  uStack_690 = plVar9 + 3;
  plVar9[3] = (long)puVar6;
  *(undefined1 *)(plVar9 + 4) = 0xff;
  uStack_458 = 0;
  uStack_450 = (long *)0x0;
  uStack_688 = plVar9;
  func_0x048afd20(&uStack_548,&uStack_698);
  plVar9 = uStack_688;
  if (uStack_688 != (long *)0x0) {
    LOCK();
    plVar11 = uStack_688 + 1;
    lVar5 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*uStack_688 + 0x10))(uStack_688);
      FUN_0412c2d0(plVar9);
    }
  }
  plVar9 = uStack_450;
  if (uStack_450 != (long *)0x0) {
    LOCK();
    plVar11 = uStack_450 + 1;
    lVar5 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*uStack_450 + 0x10))(uStack_450);
      FUN_0412c2d0(plVar9);
    }
  }
  lVar5 = CONCAT44(uStack_4c4,uStack_4c8);
  iVar2 = (int)uStack_4a0;
  uStack_554 = uStack_4a0._4_4_;
  uStack_1e0 = (undefined4)uStack_620;
  uStack_1dc = uStack_620._4_4_;
  uStack_1d8 = (undefined4)uStack_618;
  uStack_1d4 = uStack_618._4_4_;
  uStack_1d0 = (undefined1)uStack_610;
  puStack_1e8 = &UNK_0f4e3c70;
  plStack_630 = plVar4;
  func_0x04167a20(auStack_1c8,&puStack_608);
  lStack_1c0 = lStack_600;
  lStack_1b8 = (long)puStack_5f8;
  lStack_1b0 = lStack_5f0;
  lStack_1a8 = (long)puStack_5e8;
  lStack_1a0 = lStack_5e0;
  plStack_198 = plStack_5d8;
  lStack_5e0 = 0;
  plStack_5d8 = (long *)0x0;
  lStack_190 = lStack_5d0;
  lStack_178 = (long)puStack_5b8;
  lStack_170 = lStack_5b0;
  uStack_188 = (ulong)puStack_5c8;
  uStack_180 = uStack_5c0;
  puStack_5c8 = (undefined *)0x0;
  uStack_5c0 = 0;
  puStack_5b8 = (undefined *)0x0;
  uStack_690 = (long *)0xffffffffffffffff;
  uStack_688 = (long *)0x0;
  uStack_680 = CONCAT71(uStack_680._1_7_,0xff);
  uStack_698 = &UNK_0f4e3d70;
  puStack_678 = (undefined1 *)0x0;
  plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (plVar4 == (long *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&UNK_0f0fb8c0;
  *(undefined4 *)(plVar4 + 4) = uStack_1e0;
  *(undefined4 *)((long)plVar4 + 0x24) = uStack_1dc;
  *(undefined4 *)(plVar4 + 5) = uStack_1d8;
  *(undefined4 *)((long)plVar4 + 0x2c) = uStack_1d4;
  *(undefined1 *)(plVar4 + 6) = uStack_1d0;
  plVar4[3] = (long)&UNK_0f4e3c70;
  func_0x04167a20(plVar4 + 7,auStack_1c8);
  plVar4[8] = lStack_1c0;
  plVar4[9] = lStack_1b8;
  plVar4[10] = lStack_1b0;
  plVar4[0xb] = lStack_1a8;
  plVar4[0xc] = lStack_1a0;
  plVar4[0xd] = (long)plStack_198;
  lStack_1a0 = 0;
  plStack_198 = (long *)0x0;
  plVar4[0xe] = lStack_190;
  plVar4[0x11] = lStack_178;
  *(undefined4 *)(plVar4 + 0xf) = (undefined4)uStack_188;
  *(undefined4 *)((long)plVar4 + 0x7c) = uStack_188._4_4_;
  *(undefined4 *)(plVar4 + 0x10) = (undefined4)uStack_180;
  *(undefined4 *)((long)plVar4 + 0x84) = uStack_180._4_4_;
  uStack_188 = 0;
  uStack_180 = 0;
  lStack_178 = 0;
  plVar4[0x12] = lStack_170;
  plStack_670 = plVar4 + 3;
  plStack_668 = plVar4;
  plStack_490 = plVar4 + 3;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0f49c0e8;
  plVar9[4] = -1;
  plVar9[5] = 0;
  *(undefined1 *)(plVar9 + 6) = 0xff;
  plVar9[3] = (long)&UNK_0f49b6b8;
  plVar9[7] = 0;
  plVar9[8] = (long)plStack_630;
  uStack_690 = (long *)0x40;
  puStack_660 = (undefined1 *)0x0;
  plStack_658 = (long *)0x0;
  plStack_670 = (long *)0x0;
  plStack_668 = (long *)0x0;
  if (iVar2 == 4) {
    lVar5 = lVar5 + 0x18;
    plStack_630 = plVar9 + 3;
    uVar10 = func_0x0cd0fa70(lVar5);
    lVar5 = func_0x048b1040(lVar5,uVar10,uStack_554,1);
    if (lVar5 == 0) {
      uStack_548 = 0;
      uStack_540 = 0;
      func_0x048b10d0(&uStack_548);
      lVar12 = *(long *)(uStack_548 + 0x38);
      lVar5 = uStack_548;
      if (lVar12 == 0) goto LAB_0dce9478;
LAB_0dce949d:
      do {
        lVar5 = lVar12;
        lVar12 = *(long *)(lVar5 + 0x38);
        if (*(long *)(lVar5 + 0x38) == 0) {
          uStack_548 = 0;
          uStack_540 = 0;
          func_0x048b10d0(&uStack_548);
          lVar12 = uStack_548;
        }
      } while (lVar12 != 0);
    }
    else {
      lVar12 = *(long *)(lVar5 + 0x38);
      if (*(long *)(lVar5 + 0x38) != 0) goto LAB_0dce949d;
LAB_0dce9478:
      uStack_548 = 0;
      uStack_540 = 0;
      func_0x048b10d0(&uStack_548);
      lVar12 = uStack_548;
      if (uStack_548 != 0) goto LAB_0dce949d;
    }
    lVar5 = *(long *)(lVar5 + 0x48);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x48,0);
    }
  }
  else {
    if (iVar2 != 1) {
      plVar14 = plVar4 + 1;
      plVar11 = plVar9 + 1;
      LOCK();
      lVar5 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_0412c2d0(plVar9);
      }
      LOCK();
      lVar5 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_0412c2d0(plVar4);
      }
      goto LAB_0dce9552;
    }
    lVar5 = lVar5 + 0x18;
    plStack_630 = plVar9 + 3;
    uVar10 = func_0x0cd0fa70(lVar5);
    lVar5 = func_0x048b0c90(lVar5,uVar10,uStack_554,1);
    if (lVar5 == 0) {
      uStack_548 = 0;
      uStack_540 = 0;
      func_0x048b0d20(&uStack_548);
      lVar5 = uStack_548;
    }
    lVar5 = *(long *)(lVar5 + 0x58);
    puVar6 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x48,0);
    }
  }
  *(undefined1 *)(puVar6 + 3) = (undefined1)uStack_680;
  *(undefined4 *)(puVar6 + 1) = (undefined4)uStack_690;
  *(undefined4 *)((long)puVar6 + 0xc) = uStack_690._4_4_;
  *(undefined4 *)(puVar6 + 2) = (undefined4)uStack_688;
  *(uint *)((long)puVar6 + 0x14) = uStack_688._4_4_;
  *puVar6 = &UNK_0f4e3d70;
  puVar6[4] = 0;
  puVar6[5] = plStack_490;
  puVar6[6] = plVar4;
  puVar6[7] = plStack_630;
  puVar6[8] = plVar9;
  plVar4 = *(long **)(lVar5 + 8);
  *(undefined8 **)(lVar5 + 8) = puVar6;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x28))();
  }
LAB_0dce9552:
  plVar4 = plStack_658;
  uStack_698 = &UNK_0f4e3d70;
  if (plStack_658 != (long *)0x0) {
    LOCK();
    plVar9 = plStack_658 + 1;
    lVar5 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_658 + 0x10))(plStack_658);
      FUN_0412c2d0(plVar4);
    }
  }
  plVar4 = plStack_668;
  if (plStack_668 != (long *)0x0) {
    LOCK();
    plVar9 = plStack_668 + 1;
    lVar5 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_668 + 0x10))(plStack_668);
      FUN_0412c2d0(plVar4);
    }
  }
  puStack_1e8 = &UNK_0f4e3c70;
  if ((uStack_188 & 1) != 0) {
    FUN_0412a280(lStack_178,uStack_188 & 0xfffffffffffffffe);
  }
  plVar4 = plStack_198;
  if (plStack_198 != (long *)0x0) {
    LOCK();
    plVar9 = plStack_198 + 1;
    lVar5 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      FUN_0412c2d0(plVar4);
    }
  }
  func_0x04167a40(auStack_1c8);
  if ((uStack_418 & 1) != 0) {
    FUN_0412a280(CONCAT44(uStack_404,uStack_408),
                 CONCAT44(uStack_414,uStack_418) & 0xfffffffffffffffe);
  }
  if (((ulong)puStack_5c8 & 1) == 0) {
    puStack_628 = (undefined7 *)&UNK_0f4e3c70;
    plVar4 = plStack_5d8;
  }
  else {
    puStack_628 = (undefined7 *)&UNK_0f4e3c70;
    FUN_0412a280(puStack_5b8,(ulong)puStack_5c8 & 0xfffffffffffffffe);
    plVar4 = plStack_5d8;
  }
  plStack_5d8 = plVar4;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    lVar5 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0412c2d0(plVar4);
    }
  }
  func_0x04167a40(&puStack_608);
  return;
}



/* ---- referenced strings ----
 * 0x13d8f81  ^[a-zA-Z0-9_.:*]+$
 */
