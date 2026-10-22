/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd8ea3f0 (ELF vaddr 0xd7ea3f0)
 * Label: caller-of-callee
 * Body:  [[0d8ea3f0, 0d8eb051] [0d8eb060, 0d8ec5c1]]
 * Ghidra: FUN_0d8ea3f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d8ea3f0(long param_1)

{
  uint *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  undefined4 auStack_518 [2];
  long *plStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined *puStack_4f0;
  undefined1 *puStack_4e8;
  undefined1 *puStack_4e0;
  undefined *puStack_4d8;
  undefined *puStack_4d0;
  undefined4 uStack_4c8;
  undefined8 uStack_4c0;
  long *plStack_4b8;
  undefined *puStack_4b0;
  undefined4 *puStack_4a8;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined8 uStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  undefined4 uStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  undefined2 uStack_3f0;
  undefined2 uStack_3ee;
  uint uStack_3ec;
  uint uStack_3e8;
  undefined1 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined8 uStack_3b8;
  char cStack_3b0;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 uStack_378;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 uStack_338;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  char cStack_2f8;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 uStack_2b8;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
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
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
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
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
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
  undefined8 uStack_1b8;
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
  undefined7 uStack_177;
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
  undefined1 uStack_138;
  undefined7 uStack_137;
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
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
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
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
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
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined7 uStack_37;
  
  func_0x0eb7c440();
  if ((DAT_0f72d288 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72d288), iVar5 != 0)) {
    func_0x0d965120();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f72d208,0xf53dab8);
    func_0x0410844d(&DAT_0f72d288);
  }
  plVar7 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f72d208 + 4)) * 8);
  do {
    lVar9 = *plVar7;
    if (lVar9 == -1) goto LAB_0d8ea470;
    plVar7 = (long *)(*(long *)(param_1 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f72d208 + 4));
  if (plVar7 == *(long **)(param_1 + 0x38)) {
LAB_0d8ea470:
    puVar6 = &DAT_0f72d208;
    if (iRam000000000f72d268 != -0x2b3da790) goto LAB_0d8ea4dd;
LAB_0d8ea49b:
    lVar9 = *(long *)(puVar6 + 0x68);
    if (lVar9 == 0) goto LAB_0d8ea4dd;
    bVar13 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar12 = lVar9 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar9 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0d965770(&uStack_3e0,param_1,lVar12,uVar11);
  }
  else {
    puVar6 = (undefined *)plVar7[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_0d8ea49b;
LAB_0d8ea4dd:
    func_0x0d965770(&uStack_3e0,param_1,&UNK_0136fd7d,0x1c);
  }
  if (cStack_3b0 == '\0') {
    uStack_508._4_4_ = (uint)((ulong)uStack_508 >> 0x20);
    func_0x0d965d60(&puStack_4b0,CONCAT44(uStack_3dc,uStack_3e0) + 0x18);
    if (uStack_498._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_49c,uStack_4a0) + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_498) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      puVar3 = *(undefined4 **)(piVar10 + 0xc);
      while (puVar3 != puStack_4a8) {
        piVar10 = *(int **)(piVar10 + 0xe);
        puVar3 = *(undefined4 **)(piVar10 + 0xc);
      }
LAB_0d8ea56f:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_498._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_49c,uStack_4a0) + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_498) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_0d8ea56f;
      }
      if (uStack_498._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_49c,uStack_4a0) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
    }
    func_0x0d966320(&puStack_4b0,&uStack_3e0,&UNK_014ae949,4);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar7 = (long)&UNK_0f377238;
    if (uStack_498 != (long *)0x0) {
      lVar9 = *uStack_498;
      uStack_498 = plVar7;
      (**(code **)(lVar9 + 8))();
      plVar7 = uStack_498;
    }
    uStack_498 = plVar7;
    auStack_518[0] = uStack_4a0;
    plStack_510 = (long *)0x0;
    uStack_508 = (long *)((ulong)uStack_508._4_4_ << 0x20);
    uStack_500 = 1;
    uStack_4f8 = 0;
    puStack_4f0 = &UNK_0d9668d0;
    puStack_4e8 = &SUB_048b06d0;
    puStack_4e0 = &SUB_0c4e6f40;
    puStack_4d8 = &UNK_0d9668e0;
    puStack_4d0 = &UNK_0d966a40;
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    plStack_4b8 = (long *)0x0;
    func_0x048b05a0(puStack_4a8,auStack_518);
    plVar7 = plStack_4b8;
    if (plStack_4b8 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_4b8 + 1;
      lVar9 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_4b8 + 0x10))(plStack_4b8);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x0d9665d0(&puStack_4b0);
    uStack_378 = CONCAT71(uStack_378._1_7_,cStack_3b0);
    uStack_388 = uStack_3c0;
    uStack_384 = uStack_3bc;
    uStack_380 = (undefined4)uStack_3b8;
    uStack_37c = uStack_3b8._4_4_;
    uStack_398 = uStack_3d0;
    uStack_394 = uStack_3cc;
    uStack_390 = uStack_3c8;
    uStack_38c = uStack_3c4;
    uStack_3a8 = uStack_3e0;
    uStack_3a4 = uStack_3dc;
    uStack_3a0 = uStack_3d8;
    uStack_39c = uStack_3d4;
    func_0x048b0bc0(&uStack_498);
    uStack_368 = CONCAT44(uStack_3a4,uStack_3a8);
    uStack_360 = (long *)CONCAT44(uStack_39c,uStack_3a0);
    uStack_358 = uStack_398;
    uStack_354 = uStack_394;
    uStack_350 = uStack_390;
    uStack_34c = uStack_38c;
    uStack_348 = uStack_388;
    uStack_344 = uStack_384;
    uStack_340 = uStack_380;
    uStack_33c = uStack_37c;
    uStack_338 = uStack_378;
    func_0x0d965d60(&puStack_4b0,uStack_368 + 0x18);
    if (uStack_498._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_49c,uStack_4a0) + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_498) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      puVar3 = *(undefined4 **)(piVar10 + 0xc);
      while (puVar3 != puStack_4a8) {
        piVar10 = *(int **)(piVar10 + 0xe);
        puVar3 = *(undefined4 **)(piVar10 + 0xc);
      }
LAB_0d8ea7df:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_498._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_49c,uStack_4a0) + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_498) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_0d8ea7df;
      }
      if (uStack_498._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_49c,uStack_4a0) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
    }
    func_0x0d966320(&puStack_4b0,&uStack_368,&UNK_0140bbb3,10);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar7 = (long)&UNK_0ef46ce8;
    if (uStack_498 != (long *)0x0) {
      lVar9 = *uStack_498;
      uStack_498 = plVar7;
      (**(code **)(lVar9 + 8))();
      plVar7 = uStack_498;
    }
    uStack_498 = plVar7;
    auStack_518[0] = uStack_4a0;
    plStack_510 = (long *)0x0;
    uStack_508 = (long *)((ulong)uStack_508 & 0xffffffff00000000);
    uStack_500 = 1;
    uStack_4f8 = 0;
    puStack_4f0 = &UNK_0490ce30;
    puStack_4e8 = &SUB_048b06d0;
    puStack_4e0 = &SUB_0490cb20;
    puStack_4d8 = &UNK_0d966ce0;
    puStack_4d0 = &UNK_0d966e40;
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    plStack_4b8 = (long *)0x0;
    func_0x048b05a0(puStack_4a8,auStack_518);
    plVar7 = plStack_4b8;
    if (plStack_4b8 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_4b8 + 1;
      lVar9 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_4b8 + 0x10))(plStack_4b8);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x0d9665d0(&puStack_4b0);
    func_0x048b0bc0(&uStack_498);
  }
  if ((DAT_0f72d340 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72d340), iVar5 != 0)) {
    func_0x0d9670e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f72d2c0,0xf53dab8);
    func_0x0410844d(&DAT_0f72d340);
  }
  plVar7 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f72d2c0 + 4)) * 8);
  do {
    lVar9 = *plVar7;
    if (lVar9 == -1) goto LAB_0d8ea960;
    plVar7 = (long *)(*(long *)(param_1 + 0x30) + lVar9 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f72d2c0 + 4));
  if (plVar7 == *(long **)(param_1 + 0x38)) {
LAB_0d8ea960:
    puVar6 = &DAT_0f72d2c0;
    if (iRam000000000f72d320 != -0x2b3da790) goto LAB_0d8ea9e2;
LAB_0d8ea98b:
    lVar9 = *(long *)(puVar6 + 0x68);
    if (lVar9 == 0) goto LAB_0d8ea9e2;
    bVar13 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar12 = lVar9 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar9 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0d967720(&uStack_3e0,param_1,lVar12,uVar11);
    if (cStack_3b0 != '\0') goto LAB_0d8ea9c8;
LAB_0d8eaa08:
    func_0x0d967d10(&puStack_4b0,CONCAT44(uStack_3dc,uStack_3e0) + 0x18);
    if (uStack_498._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_49c,uStack_4a0) + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_498) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      puVar3 = *(undefined4 **)(piVar10 + 0xc);
      while (puVar3 != puStack_4a8) {
        piVar10 = *(int **)(piVar10 + 0xe);
        puVar3 = *(undefined4 **)(piVar10 + 0xc);
      }
LAB_0d8eaa7f:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_498._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_49c,uStack_4a0) + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_498) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_0d8eaa7f;
      }
      if (uStack_498._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_49c,uStack_4a0) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
    }
    if ((DAT_0f72d360 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72d360), iVar5 != 0)) {
      func_0x0d9671f0();
      func_0x0410844d(&DAT_0f72d360);
    }
    uStack_3b8 = 0x9f3833e600000001;
    lVar9 = CONCAT44(uStack_3dc,uStack_3e0);
    if ((DAT_0f72d340 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72d340), iVar5 != 0)) {
      func_0x0d9670e0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f72d2c0,0xf53dab8);
      func_0x0410844d(&DAT_0f72d340);
    }
    puStack_4a8 = (undefined4 *)(lVar9 + 0x18);
    plVar7 = (long *)(*(long *)(lVar9 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar9 + 0x20) - *(long *)(lVar9 + 0x18)) >> 3)
                             - 1U & *(uint *)(_DAT_0f72d2c0 + 4)) * 8);
    do {
      lVar12 = *plVar7;
      if (lVar12 == -1) goto LAB_0d8eab10;
      plVar7 = (long *)(*(long *)(lVar9 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(lVar9 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f72d2c0 + 4))
    ;
    if (plVar7 == *(long **)(lVar9 + 0x38)) {
LAB_0d8eab10:
      puStack_4b0 = &DAT_0f72d2c0;
    }
    else {
      puStack_4b0 = (undefined *)plVar7[2];
    }
    func_0x0ed621a0(&puStack_4b0,uStack_3b8._4_4_);
    puStack_4b0 = (undefined *)CONCAT62(puStack_4b0._2_6_,0x10);
    uStack_4a0 = uStack_3b8._4_4_;
    uStack_498 = (long *)0x0;
    lStack_490 = 0;
    lStack_488 = 0;
    lStack_480 = 0;
    lStack_478 = 0;
    lStack_470 = CONCAT26(lStack_470._6_2_,0x6d65746908);
    lStack_458 = 0;
    lStack_450 = 0;
    lStack_448 = 0;
    lStack_440 = 0;
    lStack_438 = 0;
    lStack_430 = 0;
    uStack_428 = 0x3f600000;
    puStack_4a8 = &uStack_3d8;
    func_0x048afb10(&lStack_458,8);
    uStack_400 = 0;
    lStack_3f8 = 0;
    lStack_410 = 0;
    uStack_408 = 0;
    lStack_420 = 0;
    lStack_418 = 0;
    uStack_3f0 = 0xff00;
    uStack_3ec = uStack_3ec & 0xffffff00;
    uStack_3e8 = uStack_3e8 & 0xffffff00;
    uStack_3e4 = 0;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f377238;
    if (uStack_498 != (long *)0x0) {
      lVar9 = *uStack_498;
      uStack_498 = puVar8;
      (**(code **)(lVar9 + 8))();
      puVar8 = uStack_498;
    }
    uStack_498 = puVar8;
    auStack_518[0] = uStack_4a0;
    plStack_510 = (long *)0x0;
    uStack_508 = (long *)((ulong)uStack_508 & 0xffffffff00000000);
    uStack_500 = 1;
    uStack_4f8 = 0;
    puStack_4f0 = &UNK_0d9668d0;
    puStack_4e8 = &SUB_048b06d0;
    puStack_4e0 = &SUB_0c4e6f40;
    puStack_4d8 = &UNK_0d9682d0;
    puStack_4d0 = &UNK_0d968430;
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    plStack_4b8 = (long *)0x0;
    func_0x048b05a0(puStack_4a8,auStack_518);
    plVar7 = plStack_4b8;
    if (plStack_4b8 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_4b8 + 1;
      lVar9 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plStack_4b8 + 0x10))(plStack_4b8);
        func_0x0412c2d0(plVar7);
      }
    }
    puVar3 = puStack_4a8;
    if ((DAT_0f550a20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550a20), iVar5 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_518[0] = _DAT_0f550a0c;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar9 = lStack_490;
    puVar8 = uStack_498;
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&UNK_0ef439d0;
    plStack_510 = plVar7 + 3;
    uStack_498 = (long *)0x0;
    lStack_490 = 0;
    plVar7[3] = (long)puVar8;
    plVar7[4] = lVar9;
    plVar7[7] = lStack_478;
    plVar7[5] = lStack_488;
    plVar7[6] = lStack_480;
    lStack_488 = 0;
    lStack_480 = 0;
    lStack_478 = 0;
    plVar7[10] = lStack_460;
    plVar7[8] = lStack_470;
    plVar7[9] = lStack_468;
    lStack_470 = 0;
    lStack_468 = 0;
    lStack_460 = 0;
    plVar7[0xb] = lStack_458;
    plVar7[0xc] = lStack_450;
    plVar7[0xd] = lStack_448;
    lStack_458 = 0;
    lStack_450 = 0;
    lStack_448 = 0;
    plVar7[0xe] = lStack_440;
    plVar7[0xf] = lStack_438;
    plVar7[0x10] = lStack_430;
    lStack_440 = 0;
    lStack_438 = 0;
    lStack_430 = 0;
    *(undefined4 *)(plVar7 + 0x11) = uStack_428;
    plVar7[0x12] = lStack_420;
    plVar7[0x13] = lStack_418;
    plVar7[0x14] = lStack_410;
    lStack_420 = 0;
    lStack_418 = 0;
    lStack_410 = 0;
    plVar7[0x17] = lStack_3f8;
    *(undefined4 *)(plVar7 + 0x15) = (undefined4)uStack_408;
    *(undefined4 *)((long)plVar7 + 0xac) = uStack_408._4_4_;
    *(undefined4 *)(plVar7 + 0x16) = (undefined4)uStack_400;
    *(undefined4 *)((long)plVar7 + 0xb4) = uStack_400._4_4_;
    uStack_408 = 0;
    uStack_400 = 0;
    lStack_3f8 = 0;
    *(ulong *)((long)plVar7 + 0xc5) = CONCAT17(uStack_3e4,CONCAT43(uStack_3e8,uStack_3ec._1_3_));
    plVar7[0x18] = CONCAT44(uStack_3ec,CONCAT22(uStack_3ee,uStack_3f0));
    uStack_368 = 0;
    uStack_360 = (long *)0x0;
    uStack_508 = plVar7;
    func_0x048afd20(puVar3,auStack_518);
    plVar7 = uStack_508;
    if (uStack_508 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_508 + 1;
      lVar9 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*uStack_508 + 0x10))(uStack_508);
        func_0x0412c2d0(plVar7);
      }
    }
    plVar7 = uStack_360;
    if (uStack_360 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_360 + 1;
      lVar9 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*uStack_360 + 0x10))(uStack_360);
        func_0x0412c2d0(plVar7);
      }
    }
    lVar9 = *(long *)(puVar3 + 4);
    iVar5 = puVar3[7];
    if (iVar5 == 2) {
      piVar10 = *(int **)(*(long *)(lVar9 + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != puVar3[6]) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      for (; *(long *)(piVar10 + 0xc) != *(long *)(puVar3 + 2); piVar10 = *(int **)(piVar10 + 0xe))
      {
      }
LAB_0d8eb06a:
      piVar10[4] = piVar10[4] | (int)puStack_4b0 << 0x10;
    }
    else {
      if (iVar5 == 1) {
        piVar10 = *(int **)(*(long *)(lVar9 + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != puVar3[6]) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_0d8eb06a;
      }
      if (iVar5 == 0) {
        *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) | (int)puStack_4b0 << 0x10;
      }
    }
    func_0x048b0bc0(&uStack_498);
    lVar9 = func_0x0d968600(param_1 + 0x18);
    if (*(int *)(lVar9 + 0x60) != -0x2b3da790) goto LAB_0d8eb0c5;
LAB_0d8eb083:
    lVar9 = *(long *)(lVar9 + 0x68);
    if (lVar9 == 0) goto LAB_0d8eb0c5;
    bVar13 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar12 = lVar9 + 9;
    if (bVar13) {
      lVar12 = *(long *)(lVar9 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar13) {
      uVar11 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0d96a330(&uStack_3e0,param_1,lVar12,uVar11);
    uStack_328 = uStack_3e0;
    uStack_324 = uStack_3dc;
    uStack_320 = uStack_3d8;
    uStack_31c = uStack_3d4;
    uStack_318 = uStack_3d0;
    uStack_314 = uStack_3cc;
    uStack_310 = uStack_3c8;
    uStack_30c = uStack_3c4;
    uStack_308 = uStack_3c0;
    uStack_304 = uStack_3bc;
    uVar4 = uStack_3b8;
    cStack_2f8 = cStack_3b0;
  }
  else {
    puVar6 = (undefined *)plVar7[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_0d8ea98b;
LAB_0d8ea9e2:
    func_0x0d967720(&uStack_3e0,param_1,&UNK_0136fd9a,0x1e);
    if (cStack_3b0 == '\0') goto LAB_0d8eaa08;
LAB_0d8ea9c8:
    lVar9 = func_0x0d968600(param_1 + 0x18);
    if (*(int *)(lVar9 + 0x60) == -0x2b3da790) goto LAB_0d8eb083;
LAB_0d8eb0c5:
    func_0x0d96a330(&uStack_3e0,param_1,&DAT_012abac8,0x13);
    uStack_328 = uStack_3e0;
    uStack_324 = uStack_3dc;
    uStack_320 = uStack_3d8;
    uStack_31c = uStack_3d4;
    uStack_318 = uStack_3d0;
    uStack_314 = uStack_3cc;
    uStack_310 = uStack_3c8;
    uStack_30c = uStack_3c4;
    uStack_308 = uStack_3c0;
    uStack_304 = uStack_3bc;
    uVar4 = uStack_3b8;
    cStack_2f8 = cStack_3b0;
  }
  if (cStack_2f8 != '\0') {
    return;
  }
  uStack_3b8._0_4_ = (undefined4)uVar4;
  uStack_3b8._4_4_ = (undefined4)((ulong)uVar4 >> 0x20);
  uStack_300 = (undefined4)uStack_3b8;
  uStack_2fc = uStack_3b8._4_4_;
  uStack_3b8 = uVar4;
  func_0x0d96a870(&puStack_4b0,CONCAT44(uStack_324,uStack_328) + 0x18);
  if (uStack_498._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_49c,uStack_4a0) + 0x78) + 0x60);
    iVar5 = *piVar10;
    while (iVar5 != (int)uStack_498) {
      piVar10 = piVar10 + 0x16;
      iVar5 = *piVar10;
    }
    puVar3 = *(undefined4 **)(piVar10 + 0xc);
    while (puVar3 != puStack_4a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      puVar3 = *(undefined4 **)(piVar10 + 0xc);
    }
LAB_0d8eb19f:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else {
    if (uStack_498._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_49c,uStack_4a0) + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_498) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      goto LAB_0d8eb19f;
    }
    if (uStack_498._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_49c,uStack_4a0) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0d96ac80(&puStack_4b0,&uStack_328,&UNK_013d8665,10);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar7 = (long)&UNK_0ef46ce8;
  if (uStack_498 != (long *)0x0) {
    lVar9 = *uStack_498;
    uStack_498 = plVar7;
    (**(code **)(lVar9 + 8))();
    plVar7 = uStack_498;
  }
  uStack_498 = plVar7;
  auStack_518[0] = uStack_4a0;
  plStack_510 = (long *)0x0;
  uStack_508 = (long *)((ulong)uStack_508 & 0xffffffff00000000);
  uStack_500 = 1;
  uStack_4f8 = 0;
  puStack_4f0 = &UNK_0490ce30;
  puStack_4e8 = &SUB_048b06d0;
  puStack_4e0 = &SUB_0490cb20;
  puStack_4d8 = &UNK_0d96b170;
  puStack_4d0 = &UNK_0d96b2d0;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  plStack_4b8 = (long *)0x0;
  func_0x048b05a0(puStack_4a8,auStack_518);
  plVar7 = plStack_4b8;
  if (plStack_4b8 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_4b8 + 1;
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_4b8 + 0x10))(plStack_4b8);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x0d96ae70(&puStack_4b0);
  cStack_178 = cStack_2f8;
  uStack_188 = uStack_308;
  uStack_184 = uStack_304;
  uStack_180 = uStack_300;
  uStack_17c = uStack_2fc;
  uStack_198 = uStack_318;
  uStack_194 = uStack_314;
  uStack_190 = uStack_310;
  uStack_18c = uStack_30c;
  uStack_1a8 = uStack_328;
  uStack_1a4 = uStack_324;
  uStack_1a0 = uStack_320;
  uStack_19c = uStack_31c;
  func_0x048b0bc0(&uStack_498);
  uStack_2e8 = uStack_1a8;
  uStack_2e4 = uStack_1a4;
  uStack_2e0 = uStack_1a0;
  uStack_2dc = uStack_19c;
  uStack_2d8 = uStack_198;
  uStack_2d4 = uStack_194;
  uStack_2d0 = uStack_190;
  uStack_2cc = uStack_18c;
  uStack_2c8 = uStack_188;
  uStack_2c4 = uStack_184;
  uStack_2c0 = uStack_180;
  uStack_2bc = uStack_17c;
  uStack_2b8 = CONCAT71(uStack_177,cStack_178);
  func_0x0d96a870(&puStack_4b0,CONCAT44(uStack_1a4,uStack_1a8) + 0x18);
  if (uStack_498._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_49c,uStack_4a0) + 0x78) + 0x60);
    iVar5 = *piVar10;
    while (iVar5 != (int)uStack_498) {
      piVar10 = piVar10 + 0x16;
      iVar5 = *piVar10;
    }
    puVar3 = *(undefined4 **)(piVar10 + 0xc);
    while (puVar3 != puStack_4a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      puVar3 = *(undefined4 **)(piVar10 + 0xc);
    }
LAB_0d8eb40f:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else {
    if (uStack_498._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_49c,uStack_4a0) + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_498) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      goto LAB_0d8eb40f;
    }
    if (uStack_498._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_49c,uStack_4a0) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0d96ac80(&puStack_4b0,&uStack_2e8,&UNK_0136fdb9,10);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar7 = (long)&UNK_0ef46ce8;
  if (uStack_498 != (long *)0x0) {
    lVar9 = *uStack_498;
    uStack_498 = plVar7;
    (**(code **)(lVar9 + 8))();
    plVar7 = uStack_498;
  }
  uStack_498 = plVar7;
  auStack_518[0] = uStack_4a0;
  plStack_510 = (long *)0x0;
  uStack_508 = (long *)((ulong)uStack_508 & 0xffffffff00000000);
  uStack_500 = 1;
  uStack_4f8 = 0;
  puStack_4f0 = &UNK_0490ce30;
  puStack_4e8 = &SUB_048b06d0;
  puStack_4e0 = &SUB_0490cb20;
  puStack_4d8 = &UNK_0d96b4a0;
  puStack_4d0 = &UNK_0d96b600;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  plStack_4b8 = (long *)0x0;
  func_0x048b05a0(puStack_4a8,auStack_518);
  plVar7 = plStack_4b8;
  if (plStack_4b8 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_4b8 + 1;
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_4b8 + 0x10))(plStack_4b8);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x0d96ae70(&puStack_4b0);
  uStack_138 = (undefined1)uStack_2b8;
  uStack_148 = uStack_2c8;
  uStack_144 = uStack_2c4;
  uStack_140 = uStack_2c0;
  uStack_13c = uStack_2bc;
  uStack_158 = uStack_2d8;
  uStack_154 = uStack_2d4;
  uStack_150 = uStack_2d0;
  uStack_14c = uStack_2cc;
  uStack_168 = uStack_2e8;
  uStack_164 = uStack_2e4;
  uStack_160 = uStack_2e0;
  uStack_15c = uStack_2dc;
  func_0x048b0bc0(&uStack_498);
  uStack_2a8 = uStack_168;
  uStack_2a4 = uStack_164;
  uStack_2a0 = uStack_160;
  uStack_29c = uStack_15c;
  uStack_298 = uStack_158;
  uStack_294 = uStack_154;
  uStack_290 = uStack_150;
  uStack_28c = uStack_14c;
  uStack_288 = uStack_148;
  uStack_284 = uStack_144;
  uStack_280 = uStack_140;
  uStack_27c = uStack_13c;
  uStack_278 = CONCAT71(uStack_137,uStack_138);
  func_0x0d96a870(&puStack_4b0,CONCAT44(uStack_164,uStack_168) + 0x18);
  if (uStack_498._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_49c,uStack_4a0) + 0x78) + 0x60);
    iVar5 = *piVar10;
    while (iVar5 != (int)uStack_498) {
      piVar10 = piVar10 + 0x16;
      iVar5 = *piVar10;
    }
    puVar3 = *(undefined4 **)(piVar10 + 0xc);
    while (puVar3 != puStack_4a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      puVar3 = *(undefined4 **)(piVar10 + 0xc);
    }
LAB_0d8eb66f:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else {
    if (uStack_498._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_49c,uStack_4a0) + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_498) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      goto LAB_0d8eb66f;
    }
    if (uStack_498._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_49c,uStack_4a0) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0d96ac80(&puStack_4b0,&uStack_2a8,&UNK_012fe288,9);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar7 = (long)&UNK_0ef44b00;
  if (uStack_498 != (long *)0x0) {
    lVar9 = *uStack_498;
    uStack_498 = plVar7;
    (**(code **)(lVar9 + 8))();
    plVar7 = uStack_498;
  }
  uStack_498 = plVar7;
  auStack_518[0] = uStack_4a0;
  plStack_510 = (long *)0x0;
  uStack_508 = (long *)((ulong)uStack_508 & 0xffffffff00000000);
  uStack_500 = 1;
  uStack_4f8 = 0;
  puStack_4f0 = &UNK_048b3f30;
  puStack_4e8 = &SUB_048b06d0;
  puStack_4e0 = &SUB_048b2190;
  puStack_4d8 = &UNK_0d96b7e0;
  puStack_4d0 = &UNK_0d96b9b0;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  plStack_4b8 = (long *)0x0;
  func_0x048b05a0(puStack_4a8,auStack_518);
  plVar7 = plStack_4b8;
  if (plStack_4b8 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_4b8 + 1;
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_4b8 + 0x10))(plStack_4b8);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x0d96ae70(&puStack_4b0);
  uStack_f8 = (undefined1)uStack_278;
  uStack_108 = uStack_288;
  uStack_104 = uStack_284;
  uStack_100 = uStack_280;
  uStack_fc = uStack_27c;
  uStack_118 = uStack_298;
  uStack_114 = uStack_294;
  uStack_110 = uStack_290;
  uStack_10c = uStack_28c;
  uStack_128 = uStack_2a8;
  uStack_124 = uStack_2a4;
  uStack_120 = uStack_2a0;
  uStack_11c = uStack_29c;
  func_0x048b0bc0(&uStack_498);
  uStack_268 = uStack_128;
  uStack_264 = uStack_124;
  uStack_260 = uStack_120;
  uStack_25c = uStack_11c;
  uStack_258 = uStack_118;
  uStack_254 = uStack_114;
  uStack_250 = uStack_110;
  uStack_24c = uStack_10c;
  uStack_248 = uStack_108;
  uStack_244 = uStack_104;
  uStack_240 = uStack_100;
  uStack_23c = uStack_fc;
  uStack_238 = CONCAT71(uStack_f7,uStack_f8);
  func_0x0d96a870(&puStack_4b0,CONCAT44(uStack_124,uStack_128) + 0x18);
  if (uStack_498._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_49c,uStack_4a0) + 0x78) + 0x60);
    iVar5 = *piVar10;
    while (iVar5 != (int)uStack_498) {
      piVar10 = piVar10 + 0x16;
      iVar5 = *piVar10;
    }
    puVar3 = *(undefined4 **)(piVar10 + 0xc);
    while (puVar3 != puStack_4a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      puVar3 = *(undefined4 **)(piVar10 + 0xc);
    }
LAB_0d8eb8df:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else {
    if (uStack_498._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_49c,uStack_4a0) + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_498) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      goto LAB_0d8eb8df;
    }
    if (uStack_498._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_49c,uStack_4a0) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0d96ac80(&puStack_4b0,&uStack_268,&UNK_014a2579,9);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar7 = (long)&UNK_0ef44b00;
  if (uStack_498 != (long *)0x0) {
    lVar9 = *uStack_498;
    uStack_498 = plVar7;
    (**(code **)(lVar9 + 8))();
    plVar7 = uStack_498;
  }
  uStack_498 = plVar7;
  auStack_518[0] = uStack_4a0;
  plStack_510 = (long *)0x0;
  uStack_508 = (long *)((ulong)uStack_508 & 0xffffffff00000000);
  uStack_500 = 1;
  uStack_4f8 = 0;
  puStack_4f0 = &UNK_048b3f30;
  puStack_4e8 = &SUB_048b06d0;
  puStack_4e0 = &SUB_048b2190;
  puStack_4d8 = &UNK_0d96bb90;
  puStack_4d0 = &UNK_0d96bd60;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  plStack_4b8 = (long *)0x0;
  func_0x048b05a0(puStack_4a8,auStack_518);
  plVar7 = plStack_4b8;
  if (plStack_4b8 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_4b8 + 1;
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_4b8 + 0x10))(plStack_4b8);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x0d96ae70(&puStack_4b0);
  uStack_b8 = (undefined1)uStack_238;
  uStack_c8 = uStack_248;
  uStack_c4 = uStack_244;
  uStack_c0 = uStack_240;
  uStack_bc = uStack_23c;
  uStack_d8 = uStack_258;
  uStack_d4 = uStack_254;
  uStack_d0 = uStack_250;
  uStack_cc = uStack_24c;
  uStack_e8 = uStack_268;
  uStack_e4 = uStack_264;
  uStack_e0 = uStack_260;
  uStack_dc = uStack_25c;
  func_0x048b0bc0(&uStack_498);
  uStack_228 = uStack_e8;
  uStack_224 = uStack_e4;
  uStack_220 = uStack_e0;
  uStack_21c = uStack_dc;
  uStack_218 = uStack_d8;
  uStack_214 = uStack_d4;
  uStack_210 = uStack_d0;
  uStack_20c = uStack_cc;
  uStack_208 = uStack_c8;
  uStack_204 = uStack_c4;
  uStack_200 = uStack_c0;
  uStack_1fc = uStack_bc;
  uStack_1f8 = CONCAT71(uStack_b7,uStack_b8);
  func_0x0d96a870(&puStack_4b0,CONCAT44(uStack_e4,uStack_e8) + 0x18);
  if (uStack_498._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_49c,uStack_4a0) + 0x78) + 0x60);
    iVar5 = *piVar10;
    while (iVar5 != (int)uStack_498) {
      piVar10 = piVar10 + 0x16;
      iVar5 = *piVar10;
    }
    puVar3 = *(undefined4 **)(piVar10 + 0xc);
    while (puVar3 != puStack_4a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      puVar3 = *(undefined4 **)(piVar10 + 0xc);
    }
LAB_0d8ebb3f:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else {
    if (uStack_498._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_49c,uStack_4a0) + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_498) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      goto LAB_0d8ebb3f;
    }
    if (uStack_498._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_49c,uStack_4a0) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0d96ac80(&puStack_4b0,&uStack_228,&UNK_0136081f,10);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar7 = (long)&UNK_0f48a6e8;
  if (uStack_498 != (long *)0x0) {
    lVar9 = *uStack_498;
    uStack_498 = plVar7;
    (**(code **)(lVar9 + 8))();
    plVar7 = uStack_498;
  }
  uStack_498 = plVar7;
  auStack_518[0] = uStack_4a0;
  plStack_510 = (long *)0x0;
  uStack_508 = (long *)((ulong)uStack_508 & 0xffffffff00000000);
  uStack_500 = 1;
  uStack_4f8 = 0;
  puStack_4f0 = &UNK_0d8d78d0;
  puStack_4e8 = &SUB_048b06d0;
  puStack_4e0 = &SUB_0d8d7560;
  puStack_4d8 = &UNK_0d96bf40;
  puStack_4d0 = &UNK_0d96c150;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  plStack_4b8 = (long *)0x0;
  func_0x048b05a0(puStack_4a8,auStack_518);
  plVar7 = plStack_4b8;
  if (plStack_4b8 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_4b8 + 1;
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_4b8 + 0x10))(plStack_4b8);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x0d96ae70(&puStack_4b0);
  uStack_78 = (undefined1)uStack_1f8;
  uStack_88 = uStack_208;
  uStack_84 = uStack_204;
  uStack_80 = uStack_200;
  uStack_7c = uStack_1fc;
  uStack_98 = uStack_218;
  uStack_94 = uStack_214;
  uStack_90 = uStack_210;
  uStack_8c = uStack_20c;
  uStack_a8 = uStack_228;
  uStack_a4 = uStack_224;
  uStack_a0 = uStack_220;
  uStack_9c = uStack_21c;
  func_0x048b0bc0(&uStack_498);
  uStack_1e8 = uStack_a8;
  uStack_1e4 = uStack_a4;
  uStack_1e0 = uStack_a0;
  uStack_1dc = uStack_9c;
  uStack_1d8 = uStack_98;
  uStack_1d4 = uStack_94;
  uStack_1d0 = uStack_90;
  uStack_1cc = uStack_8c;
  uStack_1c8 = uStack_88;
  uStack_1c4 = uStack_84;
  uStack_1c0 = uStack_80;
  uStack_1bc = uStack_7c;
  uStack_1b8 = CONCAT71(uStack_77,uStack_78);
  func_0x0d96a870(&puStack_4b0,CONCAT44(uStack_a4,uStack_a8) + 0x18);
  if (uStack_498._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_49c,uStack_4a0) + 0x78) + 0x60);
    iVar5 = *piVar10;
    while (iVar5 != (int)uStack_498) {
      piVar10 = piVar10 + 0x16;
      iVar5 = *piVar10;
    }
    puVar3 = *(undefined4 **)(piVar10 + 0xc);
    while (puVar3 != puStack_4a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      puVar3 = *(undefined4 **)(piVar10 + 0xc);
    }
LAB_0d8ebdaf:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else {
    if (uStack_498._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_49c,uStack_4a0) + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_498) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      goto LAB_0d8ebdaf;
    }
    if (uStack_498._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_49c,uStack_4a0) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0d96ac80(&puStack_4b0,&uStack_1e8,&UNK_013bebbb,0x12);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar7 = (long)&UNK_0ef46ce8;
  if (uStack_498 != (long *)0x0) {
    lVar9 = *uStack_498;
    uStack_498 = plVar7;
    (**(code **)(lVar9 + 8))();
    plVar7 = uStack_498;
  }
  uStack_498 = plVar7;
  auStack_518[0] = uStack_4a0;
  plStack_510 = (long *)0x0;
  uStack_508 = (long *)((ulong)uStack_508 & 0xffffffff00000000);
  uStack_500 = 1;
  uStack_4f8 = 0;
  puStack_4f0 = &UNK_0490ce30;
  puStack_4e8 = &SUB_048b06d0;
  puStack_4e0 = &SUB_0490cb20;
  puStack_4d8 = &UNK_0d96c330;
  puStack_4d0 = &UNK_0d96c490;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  plStack_4b8 = (long *)0x0;
  func_0x048b05a0(puStack_4a8,auStack_518);
  plVar7 = plStack_4b8;
  if (plStack_4b8 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_4b8 + 1;
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_4b8 + 0x10))(plStack_4b8);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x0d96ae70(&puStack_4b0);
  uStack_38 = (undefined1)uStack_1b8;
  uStack_48 = uStack_1c8;
  uStack_44 = uStack_1c4;
  uStack_40 = uStack_1c0;
  uStack_3c = uStack_1bc;
  uStack_58 = uStack_1d8;
  uStack_54 = uStack_1d4;
  uStack_50 = uStack_1d0;
  uStack_4c = uStack_1cc;
  uStack_68 = uStack_1e8;
  uStack_64 = uStack_1e4;
  uStack_60 = uStack_1e0;
  uStack_5c = uStack_1dc;
  func_0x048b0bc0(&uStack_498);
  uStack_3a8 = uStack_68;
  uStack_3a4 = uStack_64;
  uStack_3a0 = uStack_60;
  uStack_39c = uStack_5c;
  uStack_398 = uStack_58;
  uStack_394 = uStack_54;
  uStack_390 = uStack_50;
  uStack_38c = uStack_4c;
  uStack_388 = uStack_48;
  uStack_384 = uStack_44;
  uStack_380 = uStack_40;
  uStack_37c = uStack_3c;
  uStack_378 = CONCAT71(uStack_37,uStack_38);
  func_0x0d96a870(&puStack_4b0,CONCAT44(uStack_64,uStack_68) + 0x18);
  if (uStack_498._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_49c,uStack_4a0) + 0x78) + 0x60);
    iVar5 = *piVar10;
    while (iVar5 != (int)uStack_498) {
      piVar10 = piVar10 + 0x16;
      iVar5 = *piVar10;
    }
    puVar3 = *(undefined4 **)(piVar10 + 0xc);
    while (puVar3 != puStack_4a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      puVar3 = *(undefined4 **)(piVar10 + 0xc);
    }
LAB_0d8ec00f:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else {
    if (uStack_498._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_49c,uStack_4a0) + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_498) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      goto LAB_0d8ec00f;
    }
    if (uStack_498._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_49c,uStack_4a0) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0d96ac80(&puStack_4b0,&uStack_3a8,&UNK_0146caa2,10);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar7 = (long)&UNK_0f48b5e8;
  if (uStack_498 != (long *)0x0) {
    lVar9 = *uStack_498;
    uStack_498 = plVar7;
    (**(code **)(lVar9 + 8))();
    plVar7 = uStack_498;
  }
  uStack_498 = plVar7;
  auStack_518[0] = uStack_4a0;
  plStack_510 = (long *)0x0;
  uStack_508 = (long *)((ulong)uStack_508 & 0xffffffff00000000);
  uStack_500 = 1;
  uStack_4f8 = 0;
  puStack_4f0 = &UNK_0d96f990;
  puStack_4e8 = &SUB_048b06d0;
  puStack_4e0 = &UNK_0d96e4c0;
  puStack_4d8 = &UNK_0d96fa50;
  puStack_4d0 = &UNK_0d96fc50;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  plStack_4b8 = (long *)0x0;
  func_0x048b05a0(puStack_4a8,auStack_518);
  plVar7 = plStack_4b8;
  if (plStack_4b8 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_4b8 + 1;
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_4b8 + 0x10))(plStack_4b8);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x0d96ae70(&puStack_4b0);
  uStack_338 = CONCAT71(uStack_338._1_7_,(undefined1)uStack_378);
  uStack_348 = uStack_388;
  uStack_344 = uStack_384;
  uStack_340 = uStack_380;
  uStack_33c = uStack_37c;
  uStack_358 = uStack_398;
  uStack_354 = uStack_394;
  uStack_350 = uStack_390;
  uStack_34c = uStack_38c;
  uStack_368 = CONCAT44(uStack_3a4,uStack_3a8);
  uStack_360 = (long *)CONCAT44(uStack_39c,uStack_3a0);
  func_0x048b0bc0(&uStack_498);
  func_0x0d96a870(&puStack_4b0,uStack_368 + 0x18);
  if (uStack_498._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_49c,uStack_4a0) + 0x78) + 0x60);
    iVar5 = *piVar10;
    while (iVar5 != (int)uStack_498) {
      piVar10 = piVar10 + 0x16;
      iVar5 = *piVar10;
    }
    puVar3 = *(undefined4 **)(piVar10 + 0xc);
    while (puVar3 != puStack_4a8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      puVar3 = *(undefined4 **)(piVar10 + 0xc);
    }
  }
  else {
    if (uStack_498._4_4_ != 1) {
      if (uStack_498._4_4_ == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_49c,uStack_4a0) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
      goto LAB_0d8ec243;
    }
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_49c,uStack_4a0) + 0x78) + 0x48);
    iVar5 = *piVar10;
    while (iVar5 != (int)uStack_498) {
      piVar10 = piVar10 + 0x1a;
      iVar5 = *piVar10;
    }
  }
  *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
LAB_0d8ec243:
  func_0x0d96ac80(&puStack_4b0,&uStack_368,&UNK_01284377,0x11);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f48b768;
  if (uStack_498 != (long *)0x0) {
    lVar9 = *uStack_498;
    uStack_498 = puVar8;
    (**(code **)(lVar9 + 8))();
    puVar8 = uStack_498;
  }
  uStack_498 = puVar8;
  auStack_518[0] = uStack_4a0;
  plStack_510 = (long *)0x0;
  uStack_508 = (long *)((ulong)uStack_508 & 0xffffffff00000000);
  uStack_500 = 1;
  uStack_4f8 = 0;
  puStack_4f0 = &UNK_0d973520;
  puStack_4e8 = &SUB_048b06d0;
  puStack_4e0 = &UNK_0d9720e0;
  puStack_4d8 = &UNK_0d9735e0;
  puStack_4d0 = &UNK_0d9737d0;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  plStack_4b8 = (long *)0x0;
  func_0x048b05a0(puStack_4a8,auStack_518);
  plVar7 = plStack_4b8;
  if (plStack_4b8 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_4b8 + 1;
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_4b8 + 0x10))(plStack_4b8);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x0d96ae70(&puStack_4b0);
  func_0x048b0bc0(&uStack_498);
  return;
}


