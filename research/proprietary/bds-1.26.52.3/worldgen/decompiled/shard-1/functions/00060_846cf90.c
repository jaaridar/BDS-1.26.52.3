/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x856cf90 (ELF vaddr 0x846cf90)
 * Label: caller-of-callee
 * Body:  [[0856cf90, 0856d948] [0856d950, 0856eb91] [0856eba0, 0856f09e] [0856f0a0, 0856f5b4]]
 * Ghidra: FUN_0856cf90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0856cf90(long *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  int *piVar11;
  undefined *puVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  bool bVar20;
  long *plStack_500;
  undefined *puStack_4f8;
  long *plStack_4f0;
  long *plStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined *puStack_4d0;
  undefined1 *puStack_4c8;
  undefined1 *puStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  long *plStack_4a8;
  long lStack_4a0;
  long *plStack_498;
  undefined8 uStack_490;
  long lStack_488;
  long lStack_480;
  long *plStack_470;
  undefined *puStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long *plStack_450;
  long lStack_448;
  undefined *puStack_440;
  undefined1 *puStack_438;
  undefined8 uStack_430;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  uint uStack_41c;
  long *plStack_418;
  long lStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  undefined4 uStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
  undefined2 uStack_3a8;
  undefined2 uStack_3a6;
  uint uStack_3a4;
  uint uStack_3a0;
  undefined1 uStack_39c;
  long *plStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 uStack_358;
  char cStack_350;
  long *plStack_348;
  undefined8 uStack_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  uint uStack_318;
  undefined4 uStack_314;
  char cStack_310;
  long *plStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  uint uStack_2e0;
  undefined4 uStack_2dc;
  char cStack_2d8;
  long *plStack_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  uint uStack_2a8;
  undefined4 uStack_2a4;
  char cStack_2a0;
  undefined *puStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined1 uStack_280;
  undefined1 auStack_278 [8];
  undefined *puStack_270;
  undefined1 *puStack_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined8 uStack_250;
  long *plStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 uStack_1e8;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  char cStack_1a8;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  uint uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  char cStack_e8;
  undefined7 uStack_e7;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
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
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  func_0x079ec060();
  func_0x07cb2d80(param_1);
  func_0x07820f40(param_1);
  if (DAT_0f5d6098 == '\0') goto LAB_0856f335;
  do {
    plVar7 = (long *)(param_1[3] +
                     (ulong)((int)((ulong)(param_1[4] - param_1[3]) >> 3) - 1U &
                            *(uint *)(_DAT_0f5d6018 + 4)) * 8);
    do {
      lVar15 = *plVar7;
      if (lVar15 == -1) goto LAB_0856d020;
      plVar7 = (long *)(param_1[6] + lVar15 * 0x18);
    } while (*(uint *)(param_1[6] + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5d6018 + 4));
    if (plVar7 == (long *)param_1[7]) {
LAB_0856d020:
      puVar6 = &DAT_0f5d6018;
      if (iRam000000000f5d6078 != -0x2b3da790) goto LAB_0856d08d;
LAB_0856d04b:
      lVar15 = *(long *)(puVar6 + 0x68);
      if (lVar15 == 0) goto LAB_0856d08d;
      bVar20 = (*(byte *)(lVar15 + 8) & 1) != 0;
      lVar8 = lVar15 + 9;
      if (bVar20) {
        lVar8 = *(long *)(lVar15 + 0x18);
      }
      uVar14 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
      if (bVar20) {
        uVar14 = *(ulong *)(lVar15 + 0x10);
      }
      func_0x085ca7a0(&plStack_380,param_1,lVar8,uVar14);
    }
    else {
      puVar6 = (undefined *)plVar7[2];
      if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_0856d04b;
LAB_0856d08d:
      func_0x085ca7a0(&plStack_380,param_1,&UNK_01310eb4,0x13);
    }
    if (cStack_350 != '\0') goto LAB_0856e494;
    func_0x085cb340(&puStack_468,&plStack_380,&UNK_012441e1,9);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar7 = (long)&UNK_0ef46ce8;
    if (plStack_450 != (long *)0x0) {
      lVar15 = *plStack_450;
      plStack_450 = plVar7;
      (**(code **)(lVar15 + 8))();
      plVar7 = plStack_450;
    }
    plStack_450 = plVar7;
    puStack_4f8 = (undefined *)CONCAT44(puStack_4f8._4_4_,(undefined4)uStack_458);
    plStack_4f0 = (long *)0x0;
    plStack_4e8 = (long *)((ulong)plStack_4e8 & 0xffffffff00000000);
    uStack_4e0 = 1;
    uStack_4d8 = 0;
    puStack_4d0 = &UNK_0490ce30;
    puStack_4c8 = &SUB_048b06d0;
    puStack_4c0 = &SUB_0490cb20;
    uStack_4b8 = &UNK_085cb8f0;
    uStack_4b0 = &UNK_085cba50;
    plStack_4a8 = (long *)((ulong)plStack_4a8 & 0xffffffff00000000);
    lStack_4a0 = 0;
    plStack_498 = (long *)0x0;
    func_0x048b05a0(uStack_460,&puStack_4f8);
    plVar7 = plStack_498;
    if (plStack_498 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_498 + 1;
      lVar15 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_498 + 0x10))(plStack_498);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x085cb5f0(&puStack_468);
    cVar3 = cStack_350;
    plVar7 = plStack_380;
    uStack_98 = uStack_378;
    uStack_90 = uStack_370;
    uStack_88 = uStack_368;
    uStack_84 = uStack_364;
    uStack_80 = uStack_360;
    uStack_7c = uStack_35c;
    uVar1 = (uint)uStack_358;
    uVar2 = uStack_358._4_4_;
    plStack_348 = param_1;
    func_0x048b0bc0(&plStack_450);
    if ((DAT_0f5d6098 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d6098), iVar5 != 0)) {
      func_0x085ca0a0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d6018,0xf53dab8);
      func_0x0410844d(&DAT_0f5d6098);
    }
    plVar10 = (long *)(plVar7[3] +
                      (ulong)((int)((ulong)(plVar7[4] - plVar7[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5d6018 + 4)) * 8);
    do {
      lVar15 = *plVar10;
      if (lVar15 == -1) goto LAB_0856d2a0;
      plVar10 = (long *)(plVar7[6] + lVar15 * 0x18);
    } while (*(uint *)(plVar7[6] + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5d6018 + 4));
    if (plVar10 == (long *)plVar7[7]) {
LAB_0856d2a0:
      puVar6 = &DAT_0f5d6018;
    }
    else {
      puVar6 = (undefined *)plVar10[2];
    }
    if ((1 < uVar1 - 1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_013cb3e6),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar6 = (undefined *)func_0x048b0c90(plVar7 + 3,puVar6,uVar2,1);
    if (puVar6 == (undefined *)0x0) {
      puStack_468 = (undefined *)0x0;
      uStack_460 = (long *)0x0;
      func_0x048b0d20(&puStack_468);
      puVar6 = puStack_468;
    }
    *(undefined1 *)(*(long *)(puVar6 + 0x58) + 0xa8) = 1;
    plStack_308 = plVar7;
    uStack_300 = (undefined4)uStack_98;
    uStack_2fc = uStack_98._4_4_;
    uStack_2f8 = (undefined4)uStack_90;
    uStack_2f4 = uStack_90._4_4_;
    uStack_2f0 = uStack_88;
    uStack_2ec = uStack_84;
    uStack_2e8 = uStack_80;
    uStack_2e4 = uStack_7c;
    uStack_2e0 = uVar1;
    uStack_2dc = uVar2;
    cStack_2d8 = cVar3;
    func_0x085cb340(&puStack_468,&plStack_308,&UNK_0144dfdb,0xc);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar7 = (long)&UNK_0ef46ce8;
    if (plStack_450 != (long *)0x0) {
      lVar15 = *plStack_450;
      plStack_450 = plVar7;
      (**(code **)(lVar15 + 8))();
      plVar7 = plStack_450;
    }
    plStack_450 = plVar7;
    puStack_4f8 = (undefined *)CONCAT44(puStack_4f8._4_4_,(undefined4)uStack_458);
    plStack_4f0 = (long *)0x0;
    plStack_4e8 = (long *)((ulong)plStack_4e8 & 0xffffffff00000000);
    uStack_4e0 = 1;
    uStack_4d8 = 0;
    puStack_4d0 = &UNK_0490ce30;
    puStack_4c8 = &SUB_048b06d0;
    puStack_4c0 = &SUB_0490cb20;
    uStack_4b8 = &UNK_085cbd70;
    uStack_4b0 = &UNK_085cbed0;
    plStack_4a8 = (long *)((ulong)plStack_4a8 & 0xffffffff00000000);
    lStack_4a0 = 0;
    plStack_498 = (long *)0x0;
    func_0x048b05a0(uStack_460,&puStack_4f8);
    plVar7 = plStack_498;
    if (plStack_498 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_498 + 1;
      lVar15 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_498 + 0x10))(plStack_498);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x085cb5f0(&puStack_468);
    cVar3 = cStack_2d8;
    uVar2 = uStack_2dc;
    uVar1 = uStack_2e0;
    plVar7 = plStack_308;
    uStack_78 = uStack_300;
    uStack_74 = uStack_2fc;
    uStack_70 = uStack_2f8;
    uStack_6c = uStack_2f4;
    uStack_68 = uStack_2f0;
    uStack_64 = uStack_2ec;
    uStack_60 = uStack_2e8;
    uStack_5c = uStack_2e4;
    func_0x048b0bc0(&plStack_450);
    if ((DAT_0f5d6098 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d6098), iVar5 != 0)) {
      func_0x085ca0a0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d6018,0xf53dab8);
      func_0x0410844d(&DAT_0f5d6098);
    }
    plVar10 = (long *)(plVar7[3] +
                      (ulong)((int)((ulong)(plVar7[4] - plVar7[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5d6018 + 4)) * 8);
    do {
      lVar15 = *plVar10;
      if (lVar15 == -1) goto LAB_0856d560;
      plVar10 = (long *)(plVar7[6] + lVar15 * 0x18);
    } while (*(uint *)(plVar7[6] + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5d6018 + 4));
    if (plVar10 == (long *)plVar7[7]) {
LAB_0856d560:
      puVar6 = &DAT_0f5d6018;
    }
    else {
      puVar6 = (undefined *)plVar10[2];
    }
    if ((1 < uVar1 - 1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_013cb3e6),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar6 = (undefined *)func_0x048b0c90(plVar7 + 3,puVar6,uVar2,1);
    if (puVar6 == (undefined *)0x0) {
      puStack_468 = (undefined *)0x0;
      uStack_460 = (long *)0x0;
      func_0x048b0d20(&puStack_468);
      puVar6 = puStack_468;
    }
    *(undefined1 *)(*(long *)(puVar6 + 0x58) + 0xa8) = 1;
    plStack_2d0 = plVar7;
    uStack_2c8 = uStack_78;
    uStack_2c4 = uStack_74;
    uStack_2c0 = uStack_70;
    uStack_2bc = uStack_6c;
    uStack_2b8 = uStack_68;
    uStack_2b4 = uStack_64;
    uStack_2b0 = uStack_60;
    uStack_2ac = uStack_5c;
    uStack_2a8 = uVar1;
    uStack_2a4 = uVar2;
    cStack_2a0 = cVar3;
    func_0x085cb340(&puStack_468,&plStack_2d0,&UNK_013ca4fb,0xe);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar7 = (long)&UNK_0f0eef60;
    if (plStack_450 != (long *)0x0) {
      lVar15 = *plStack_450;
      plStack_450 = plVar7;
      (**(code **)(lVar15 + 8))();
      plVar7 = plStack_450;
    }
    plStack_450 = plVar7;
    puStack_4f8 = (undefined *)CONCAT44(puStack_4f8._4_4_,(undefined4)uStack_458);
    plStack_4f0 = (long *)0x0;
    plStack_4e8 = (long *)((ulong)plStack_4e8 & 0xffffffff00000000);
    uStack_4e0 = 1;
    uStack_4d8 = 0;
    puStack_4d0 = &UNK_07af1f30;
    puStack_4c8 = &SUB_048b06d0;
    puStack_4c0 = &SUB_07aedbe0;
    uStack_4b8 = &UNK_085cc0b0;
    uStack_4b0 = &UNK_085cc210;
    plStack_4a8 = (long *)((ulong)plStack_4a8 & 0xffffffff00000000);
    lStack_4a0 = 0;
    plStack_498 = (long *)0x0;
    func_0x048b05a0(uStack_460,&puStack_4f8);
    plVar7 = plStack_498;
    if (plStack_498 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_498 + 1;
      lVar15 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_498 + 0x10))(plStack_498);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x085cb5f0(&puStack_468);
    cVar3 = cStack_2a0;
    uVar2 = uStack_2a4;
    uVar1 = uStack_2a8;
    plVar7 = plStack_2d0;
    uStack_58 = uStack_2c8;
    uStack_54 = uStack_2c4;
    uStack_50 = uStack_2c0;
    uStack_4c = uStack_2bc;
    uStack_48 = uStack_2b8;
    uStack_44 = uStack_2b4;
    uStack_40 = uStack_2b0;
    uStack_3c = uStack_2ac;
    plVar10 = (long *)(ulong)uStack_2a8;
    func_0x048b0bc0(&plStack_450);
    if ((DAT_0f5d6098 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d6098), iVar5 != 0)) {
      func_0x085ca0a0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d6018,0xf53dab8);
      func_0x0410844d(&DAT_0f5d6098);
    }
    plVar13 = (long *)(plVar7[3] +
                      (ulong)((int)((ulong)(plVar7[4] - plVar7[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f5d6018 + 4)) * 8);
    do {
      lVar15 = *plVar13;
      if (lVar15 == -1) goto LAB_0856d820;
      plVar13 = (long *)(plVar7[6] + lVar15 * 0x18);
    } while (*(uint *)(plVar7[6] + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5d6018 + 4));
    if (plVar13 == (long *)plVar7[7]) {
LAB_0856d820:
      puVar6 = &DAT_0f5d6018;
    }
    else {
      puVar6 = (undefined *)plVar13[2];
    }
    if ((1 < uVar1 - 1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_013cb3e6),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar6 = (undefined *)func_0x048b0c90(plVar7 + 3,puVar6,uVar2,1);
    if (puVar6 == (undefined *)0x0) {
      puStack_468 = (undefined *)0x0;
      uStack_460 = (long *)0x0;
      func_0x048b0d20(&puStack_468);
      puVar6 = puStack_468;
    }
    *(undefined1 *)(*(long *)(puVar6 + 0x58) + 0xa8) = 5;
    uStack_340 = plVar7;
    uStack_338 = uStack_58;
    uStack_334 = uStack_54;
    uStack_330 = uStack_50;
    uStack_32c = uStack_4c;
    uStack_328 = uStack_48;
    uStack_324 = uStack_44;
    uStack_320 = uStack_40;
    uStack_31c = uStack_3c;
    uStack_318 = uVar1;
    uStack_314 = uVar2;
    cStack_310 = cVar3;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    plVar13 = plVar7 + 7;
    lVar15 = 0;
    plVar16 = plVar7;
LAB_0856d965:
    while( true ) {
      lVar8 = lVar15;
      lVar15 = (long)*(int *)(&UNK_018d8810 + lVar8);
      if (plVar7 < plVar13) goto LAB_0856d950;
      param_1 = (long *)((long)plVar7 - (long)plVar16);
      uVar14 = ((long)param_1 >> 3) + 1;
      if (0x1fffffffffffffff < uVar14) break;
      uVar18 = (long)plVar13 - (long)plVar16;
      uVar17 = (long)uVar18 >> 2;
      if ((ulong)((long)uVar18 >> 2) <= uVar14) {
        uVar17 = uVar14;
      }
      if (0x7ffffffffffffff7 < uVar18) {
        uVar17 = 0x1fffffffffffffff;
      }
      plStack_470 = param_1;
      plStack_390 = plVar13;
      lStack_388 = lVar15;
      if (0x1fffffffffffffff < uVar17) goto LAB_0856f323;
      lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17 * 8);
      if (lVar15 == 0) {
        func_0x0eec74c0(uVar17 * 8,0);
      }
      plVar13 = (long *)(lVar15 + uVar17 * 8);
      *(long *)(lVar15 + (long)plStack_470) = lStack_388;
      plVar7 = (long *)((long)plStack_470 + lVar15 + 8);
      plVar19 = (long *)((long)plStack_470 + ((long)param_1 >> 3) * -8 + lVar15);
      memcpy(plVar19,plVar16);
      if (plVar16 != (long *)0x0) {
        func_0x0412a280(plVar16,uVar18);
      }
      lVar15 = lVar8 + 4;
      plVar10 = plVar16;
      plVar16 = plVar19;
      if (lVar8 + 4 == 0x1c) goto LAB_0856da6b;
    }
    func_0x0774b760();
LAB_0856f323:
    func_0x04882eb0();
LAB_0856f335:
    iVar5 = func_0x04108328(&DAT_0f5d6098);
    if (iVar5 != 0) {
      func_0x085ca0a0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d6018,0xf53dab8);
      func_0x0410844d(&DAT_0f5d6098);
    }
  } while( true );
LAB_0856d950:
  *plVar7 = lVar15;
  plVar7 = plVar7 + 1;
  lVar15 = lVar8 + 4;
  plVar19 = plVar16;
  if (lVar8 + 4 != 0x1c) goto LAB_0856d965;
LAB_0856da6b:
  plVar16 = (long *)(lVar8 + 4);
  lVar15 = (long)plVar7 - (long)plVar19;
  plStack_390 = plVar13;
  if (lVar15 == 0) {
    plVar7 = (long *)0x0;
    lVar8 = 0;
    if (uStack_318 != 4) goto LAB_0856dac7;
LAB_0856db24:
    lVar15 = func_0x085cc3f0(&uStack_340);
    lVar15 = *(long *)(lVar15 + 0x48);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
LAB_0856db5d:
    puVar9[1] = 0xffffffffffffffff;
    puVar9[2] = 0;
    *(undefined1 *)(puVar9 + 3) = 0xff;
    *puVar9 = &UNK_0f4e3aa0;
    puVar9[4] = lVar8;
    puVar9[5] = plVar7;
    puVar9[6] = plVar7;
    plVar7 = *(long **)(lVar15 + 8);
    *(undefined8 **)(lVar15 + 8) = puVar9;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x28))();
    }
    plVar7 = (long *)0x0;
    lVar8 = 0;
  }
  else {
    if (lVar15 < 0) {
      func_0x0774b760();
      plStack_500 = plVar19;
      goto LAB_0856f52d;
    }
    lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar15);
    if (lVar8 == 0) {
      func_0x0eec74c0(lVar15,0);
    }
    plVar7 = (long *)(lVar8 + lVar15);
    memcpy(lVar8,plVar19,lVar15);
    if (uStack_318 == 4) goto LAB_0856db24;
LAB_0856dac7:
    if (uStack_318 == 1) {
      lVar15 = func_0x085cbc20(&uStack_340);
      lVar15 = *(long *)(lVar15 + 0x58);
      puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar9 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
      goto LAB_0856db5d;
    }
  }
  cStack_1a8 = cStack_310;
  uStack_1b8 = uStack_320;
  uStack_1b4 = uStack_31c;
  uStack_1b0 = uStack_318;
  uStack_1ac = uStack_314;
  uStack_1c8 = uStack_330;
  uStack_1c4 = uStack_32c;
  uStack_1c0 = uStack_328;
  uStack_1bc = uStack_324;
  uStack_1d8 = (undefined4)uStack_340;
  uStack_1d4 = uStack_340._4_4_;
  uStack_1d0 = uStack_338;
  uStack_1cc = uStack_334;
  func_0x085cb340(&puStack_468,&uStack_1d8,&UNK_0130ff5e,0xe);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar10 = (long)&UNK_0f00b118;
  if (plStack_450 != (long *)0x0) {
    lVar15 = *plStack_450;
    plStack_450 = plVar10;
    (**(code **)(lVar15 + 8))();
    plVar10 = plStack_450;
  }
  plStack_450 = plVar10;
  puStack_4f8 = (undefined *)CONCAT44(puStack_4f8._4_4_,(undefined4)uStack_458);
  plStack_4f0 = (long *)0x0;
  plStack_4e8 = (long *)((ulong)plStack_4e8 & 0xffffffff00000000);
  uStack_4e0 = 1;
  uStack_4d8 = 0;
  puStack_4d0 = &UNK_06151e60;
  puStack_4c8 = &SUB_048b06d0;
  puStack_4c0 = &SUB_05dee420;
  uStack_4b8 = &UNK_085cc570;
  uStack_4b0 = &UNK_085cc6d0;
  plStack_4a8 = (long *)((ulong)plStack_4a8 & 0xffffffff00000000);
  lStack_4a0 = 0;
  plStack_498 = (long *)0x0;
  func_0x048b05a0(uStack_460,&puStack_4f8);
  plVar10 = plStack_498;
  if (plStack_498 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_498 + 1;
    lVar15 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_498 + 0x10))(plStack_498);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x085cb5f0(&puStack_468);
  cStack_e8 = cStack_1a8;
  uStack_f8 = uStack_1b8;
  uStack_f4 = uStack_1b4;
  uStack_f0 = uStack_1b0;
  uStack_ec = uStack_1ac;
  uStack_108 = uStack_1c8;
  uStack_104 = uStack_1c4;
  uStack_100 = uStack_1c0;
  uStack_fc = uStack_1bc;
  uStack_118 = uStack_1d8;
  uStack_114 = uStack_1d4;
  uStack_110 = uStack_1d0;
  uStack_10c = uStack_1cc;
  func_0x048b0bc0(&plStack_450);
  uStack_198 = uStack_118;
  uStack_194 = uStack_114;
  uStack_190 = uStack_110;
  uStack_18c = uStack_10c;
  uStack_188 = uStack_108;
  uStack_184 = uStack_104;
  uStack_180 = uStack_100;
  uStack_17c = uStack_fc;
  uStack_178 = uStack_f8;
  uStack_174 = uStack_f4;
  uStack_170 = uStack_f0;
  uStack_16c = uStack_ec;
  uStack_168 = CONCAT71(uStack_e7,cStack_e8);
  func_0x085cb340(&puStack_468,&uStack_198,&UNK_01229a95,7);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar10 = (long)&UNK_0ef42d08;
  if (plStack_450 != (long *)0x0) {
    lVar15 = *plStack_450;
    plStack_450 = plVar10;
    (**(code **)(lVar15 + 8))();
    plVar10 = plStack_450;
  }
  plStack_450 = plVar10;
  puStack_4f8 = (undefined *)CONCAT44(puStack_4f8._4_4_,(undefined4)uStack_458);
  plStack_4f0 = (long *)0x0;
  plStack_4e8 = (long *)((ulong)plStack_4e8 & 0xffffffff00000000);
  uStack_4e0 = 1;
  uStack_4d8 = 0;
  puStack_4d0 = &UNK_048b06c0;
  puStack_4c8 = &SUB_048b06d0;
  puStack_4c0 = &SUB_048b02c0;
  uStack_4b8 = &UNK_085cc8b0;
  uStack_4b0 = &UNK_085cca10;
  plStack_4a8 = (long *)((ulong)plStack_4a8 & 0xffffffff00000000);
  lStack_4a0 = 0;
  plStack_498 = (long *)0x0;
  func_0x048b05a0(uStack_460,&puStack_4f8);
  plVar10 = plStack_498;
  if (plStack_498 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_498 + 1;
    lVar15 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_498 + 0x10))(plStack_498);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x085cb5f0(&puStack_468);
  uStack_a8 = (undefined1)uStack_168;
  uStack_b8 = uStack_178;
  uStack_b4 = uStack_174;
  uStack_b0 = uStack_170;
  uStack_ac = uStack_16c;
  uStack_c8 = uStack_188;
  uStack_c4 = uStack_184;
  uStack_c0 = uStack_180;
  uStack_bc = uStack_17c;
  uStack_d8 = uStack_198;
  uStack_d4 = uStack_194;
  uStack_d0 = uStack_190;
  uStack_cc = uStack_18c;
  func_0x048b0bc0(&plStack_450);
  uStack_158 = uStack_d8;
  uStack_154 = uStack_d4;
  uStack_150 = uStack_d0;
  uStack_14c = uStack_cc;
  uStack_148 = uStack_c8;
  uStack_144 = uStack_c4;
  uStack_140 = uStack_c0;
  uStack_13c = uStack_bc;
  uStack_138 = uStack_b8;
  uStack_134 = uStack_b4;
  uStack_130 = uStack_b0;
  uStack_12c = uStack_ac;
  uStack_128 = CONCAT71(uStack_a7,uStack_a8);
  func_0x085cb340(&puStack_468,&uStack_158,&UNK_01419b34,0xd);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar10 = (long)&UNK_0ef44b00;
  if (plStack_450 != (long *)0x0) {
    lVar15 = *plStack_450;
    plStack_450 = plVar10;
    (**(code **)(lVar15 + 8))();
    plVar10 = plStack_450;
  }
  plStack_450 = plVar10;
  puStack_4f8 = (undefined *)CONCAT44(puStack_4f8._4_4_,(undefined4)uStack_458);
  plStack_4f0 = (long *)0x0;
  plStack_4e8 = (long *)((ulong)plStack_4e8 & 0xffffffff00000000);
  uStack_4e0 = 1;
  uStack_4d8 = 0;
  puStack_4d0 = &UNK_048b3f30;
  puStack_4c8 = &SUB_048b06d0;
  puStack_4c0 = &SUB_048b2190;
  uStack_4b8 = &UNK_085ccbf0;
  uStack_4b0 = &UNK_085ccdc0;
  plStack_4a8 = (long *)((ulong)plStack_4a8 & 0xffffffff00000000);
  lStack_4a0 = 0;
  plStack_498 = (long *)0x0;
  func_0x048b05a0(uStack_460,&puStack_4f8);
  plVar10 = plStack_498;
  if (plStack_498 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_498 + 1;
    lVar15 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_498 + 0x10))(plStack_498);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x085cb5f0(&puStack_468);
  uStack_1e8 = (undefined1)uStack_128;
  uStack_1f8 = uStack_138;
  uStack_1f4 = uStack_134;
  uStack_1f0 = uStack_130;
  uStack_1ec = uStack_12c;
  uStack_208 = uStack_148;
  uStack_204 = uStack_144;
  uStack_200 = uStack_140;
  uStack_1fc = uStack_13c;
  uStack_218 = CONCAT44(uStack_154,uStack_158);
  uStack_210 = (long *)CONCAT44(uStack_14c,uStack_150);
  plStack_470 = plVar7;
  func_0x048b0bc0(&plStack_450);
  uStack_4d8 = 0;
  uStack_490 = 0;
  lStack_488 = 0;
  lStack_4a0 = 0;
  plStack_498 = (long *)0x0;
  uStack_4b0 = (undefined *)0x0;
  plStack_4a8 = (long *)0x0;
  puStack_4c0 = (undefined1 *)0x0;
  uStack_4b8 = (undefined *)0x0;
  puStack_4d0 = (undefined *)0x0;
  puStack_4c8 = (undefined1 *)0x0;
  lStack_480 = 0;
  plStack_4f0 = (long *)0xffffffffffffffff;
  plStack_4e8 = (long *)0x0;
  uStack_4e0 = 0xff;
  puStack_4f8 = &UNK_0f4e3c70;
  func_0x041679a0(&uStack_4d8);
  puStack_4d0 = (undefined *)func_0x041681f0(&uStack_4d8,0xf547a30);
  puStack_4c8 = (undefined1 *)func_0x041681f0(&uStack_4d8,0xf547770);
  puStack_4c0 = (undefined1 *)0x0;
  uStack_4b8 = (undefined *)0x0;
  uStack_4b0 = (undefined *)0x0;
  plStack_4a8 = (long *)0x0;
  lStack_4a0 = 0;
  plStack_498 = (long *)0x0;
  uStack_490 = 0;
  lStack_488 = 0;
  lStack_480 = 0;
  plStack_4f0 = (long *)0x100;
  uStack_460 = (long *)0x100;
  uStack_458 = plStack_4e8;
  plStack_450 = (long *)CONCAT71(plStack_450._1_7_,(undefined1)uStack_4e0);
  puStack_468 = &UNK_0f4e3c70;
  func_0x04167a20(&lStack_448,&uStack_4d8);
  puStack_440 = puStack_4d0;
  puStack_438 = puStack_4c8;
  uStack_430 = puStack_4c0;
  uStack_428 = (undefined4)uStack_4b8;
  uStack_424 = uStack_4b8._4_4_;
  uStack_420 = (undefined4)uStack_4b0;
  uStack_41c = uStack_4b0._4_4_;
  plStack_418 = plStack_4a8;
  if (plStack_4a8 != (long *)0x0) {
    LOCK();
    plStack_4a8[1] = plStack_4a8[1] + 1;
    UNLOCK();
  }
  lStack_410 = lStack_4a0;
  if (((ulong)plStack_498 & 1) == 0) {
    lStack_3f8 = lStack_488;
    uStack_408 = plStack_498;
    uStack_400 = uStack_490;
  }
  else {
    func_0x0412e5e0(&uStack_408,lStack_488,uStack_490);
  }
  lStack_3f0 = lStack_480;
  if (uStack_1f0 == 4) {
    lStack_388 = lVar8;
    lVar15 = func_0x085cc3f0(&uStack_218);
    lVar15 = *(long *)(lVar15 + 0x48);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
  }
  else {
    if (uStack_1f0 != 1) goto LAB_0856e398;
    lStack_388 = lVar8;
    lVar15 = func_0x085cbc20(&uStack_218);
    lVar15 = *(long *)(lVar15 + 0x58);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
  }
  *(undefined1 *)(puVar9 + 3) = plStack_450._0_1_;
  *(undefined4 *)(puVar9 + 1) = (undefined4)uStack_460;
  *(undefined4 *)((long)puVar9 + 0xc) = uStack_460._4_4_;
  *(undefined4 *)(puVar9 + 2) = (undefined4)uStack_458;
  *(undefined4 *)((long)puVar9 + 0x14) = uStack_458._4_4_;
  *puVar9 = &UNK_0f4e3c70;
  func_0x04167a20(puVar9 + 4,&lStack_448);
  lVar8 = lStack_388;
  puVar9[5] = puStack_440;
  puVar9[6] = puStack_438;
  puVar9[7] = uStack_430;
  puVar9[8] = CONCAT44(uStack_424,uStack_428);
  puVar9[9] = CONCAT44(uStack_41c,uStack_420);
  puVar9[10] = plStack_418;
  uStack_420 = 0;
  uStack_41c = 0;
  plStack_418 = (long *)0x0;
  puVar9[0xb] = lStack_410;
  puVar9[0xe] = lStack_3f8;
  *(undefined4 *)(puVar9 + 0xc) = (undefined4)uStack_408;
  *(undefined4 *)((long)puVar9 + 100) = uStack_408._4_4_;
  *(undefined4 *)(puVar9 + 0xd) = (undefined4)uStack_400;
  *(undefined4 *)((long)puVar9 + 0x6c) = uStack_400._4_4_;
  uStack_408 = (long *)0x0;
  uStack_400 = 0;
  lStack_3f8 = 0;
  puVar9[0xf] = lStack_3f0;
  plVar7 = *(long **)(lVar15 + 8);
  *(undefined8 **)(lVar15 + 8) = puVar9;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x28))();
  }
LAB_0856e398:
  puStack_468 = &UNK_0f4e3c70;
  if (((ulong)uStack_408 & 1) != 0) {
    func_0x0412a280(lStack_3f8,(ulong)uStack_408 & 0xfffffffffffffffe);
  }
  plVar7 = plStack_418;
  if (plStack_418 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_418 + 1;
    lVar15 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_418 + 0x10))(plStack_418);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x04167a40(&lStack_448);
  puStack_4f8 = &UNK_0f4e3c70;
  if (((ulong)plStack_498 & 1) != 0) {
    func_0x0412a280(lStack_488,(ulong)plStack_498 & 0xfffffffffffffffe);
  }
  plVar7 = plStack_4a8;
  if (plStack_4a8 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_4a8 + 1;
    lVar15 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x04167a40(&uStack_4d8);
  if (lVar8 != 0) {
    func_0x0412a280(lVar8,(long)plStack_470 - lVar8);
  }
  param_1 = plStack_348;
  if (plVar19 != (long *)0x0) {
    func_0x0412a280(plVar19,(long)plStack_390 - (long)plVar19);
  }
LAB_0856e494:
  if ((DAT_0f5d70a8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d70a8), iVar5 != 0)) {
    func_0x085f6740();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d7028,0xf53dab8);
    func_0x0410844d(&DAT_0f5d70a8);
  }
  plVar7 = (long *)(param_1[3] +
                   (ulong)((int)((ulong)(param_1[4] - param_1[3]) >> 3) - 1U &
                          *(uint *)(_DAT_0f5d7028 + 4)) * 8);
  do {
    lVar15 = *plVar7;
    if (lVar15 == -1) goto LAB_0856e4f0;
    plVar7 = (long *)(param_1[6] + lVar15 * 0x18);
  } while (*(uint *)(param_1[6] + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5d7028 + 4));
  if (plVar7 == (long *)param_1[7]) {
LAB_0856e4f0:
    puVar6 = &DAT_0f5d7028;
    if (iRam000000000f5d7088 != -0x2b3da790) goto LAB_0856e55d;
LAB_0856e51b:
    lVar15 = *(long *)(puVar6 + 0x68);
    if (lVar15 == 0) goto LAB_0856e55d;
    bVar20 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar8 = lVar15 + 9;
    if (bVar20) {
      lVar8 = *(long *)(lVar15 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar20) {
      uVar14 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x085f8c70(&plStack_380,param_1,lVar8,uVar14);
  }
  else {
    puVar6 = (undefined *)plVar7[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_0856e51b;
LAB_0856e55d:
    func_0x085f8c70(&plStack_380,param_1,&UNK_014b4590,0x1a);
  }
  if (cStack_350 != '\0') {
    return;
  }
  if ((DAT_0f5d7010 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d7010), iVar5 != 0)) {
    func_0x085f6070();
    func_0x0410844d(&DAT_0f5d7010);
  }
  plVar7 = plStack_380;
  uStack_358 = 0x9f9103c900000001;
  if ((DAT_0f5d70a8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d70a8), iVar5 != 0)) {
    func_0x085f6740();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d7028,0xf53dab8);
    func_0x0410844d(&DAT_0f5d70a8);
  }
  uStack_460 = plVar7 + 3;
  plVar10 = (long *)(plVar7[3] +
                    (ulong)((int)((ulong)(plVar7[4] - plVar7[3]) >> 3) - 1U &
                           *(uint *)(_DAT_0f5d7028 + 4)) * 8);
  do {
    lVar15 = *plVar10;
    if (lVar15 == -1) goto LAB_0856e620;
    plVar10 = (long *)(plVar7[6] + lVar15 * 0x18);
  } while (*(uint *)(plVar7[6] + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5d7028 + 4));
  if (plVar10 == (long *)plVar7[7]) {
LAB_0856e620:
    puStack_468 = &DAT_0f5d7028;
  }
  else {
    puStack_468 = (undefined *)plVar10[2];
  }
  func_0x0ed621a0(&puStack_468,uStack_358._4_4_);
  puStack_468 = (undefined *)CONCAT62(puStack_468._2_6_,1);
  uStack_458 = (long *)CONCAT44(uStack_458._4_4_,uStack_358._4_4_);
  plStack_450 = (long *)0x0;
  lStack_448 = 0;
  puStack_440 = (undefined *)0x0;
  puStack_438 = (undefined1 *)0x0;
  uStack_430 = (undefined1 *)0x0;
  uStack_428 = 0x66654416;
  uStack_424 = 0x74696e69;
  uStack_420 = 0x736e6f69;
  uStack_41c = uStack_41c & 0xffffff00;
  lStack_410 = 0;
  uStack_408 = (long *)0x0;
  uStack_400 = 0;
  lStack_3f8 = 0;
  lStack_3f0 = 0;
  lStack_3e8 = 0;
  uStack_3e0 = 0x3f600000;
  uStack_460 = &uStack_378;
  func_0x048afb10(&lStack_410,8);
  uStack_3b8 = 0;
  lStack_3b0 = 0;
  lStack_3c8 = 0;
  uStack_3c0 = 0;
  lStack_3d8 = 0;
  lStack_3d0 = 0;
  uStack_3a8 = 0xff00;
  uStack_3a4 = uStack_3a4 & 0xffffff00;
  uStack_3a0 = uStack_3a0 & 0xffffff00;
  uStack_39c = 0;
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar7 = (long)&UNK_0f121b48;
  if (plStack_450 != (long *)0x0) {
    lVar15 = *plStack_450;
    plStack_450 = plVar7;
    (**(code **)(lVar15 + 8))();
    plVar7 = plStack_450;
  }
  plStack_450 = plVar7;
  puStack_4f8 = (undefined *)CONCAT44(puStack_4f8._4_4_,(undefined4)uStack_458);
  plStack_4f0 = (long *)0x0;
  plStack_4e8 = (long *)((ulong)plStack_4e8 & 0xffffffff00000000);
  uStack_4e0 = 1;
  uStack_4d8 = 0;
  puStack_4d0 = &UNK_085fed40;
  puStack_4c8 = &SUB_048b06d0;
  puStack_4c0 = &UNK_085fd160;
  uStack_4b8 = &UNK_085fee00;
  uStack_4b0 = &UNK_085fefe0;
  plStack_4a8 = (long *)((ulong)plStack_4a8 & 0xffffffff00000000);
  lStack_4a0 = 0;
  plStack_498 = (long *)0x0;
  func_0x048b05a0(uStack_460,&puStack_4f8);
  plVar7 = plStack_498;
  if (plStack_498 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_498 + 1;
    lVar15 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_498 + 0x10))(plStack_498);
      func_0x0412c2d0(plVar7);
    }
  }
  puVar9 = uStack_460;
  iVar5 = *(int *)((long)uStack_460 + 0x1c);
  if (iVar5 == 2) {
    piVar11 = *(int **)(*(long *)(uStack_460[2] + 0x78) + 0x60);
    iVar5 = *piVar11;
    while (iVar5 != *(int *)(uStack_460 + 3)) {
      piVar11 = piVar11 + 0x16;
      iVar5 = *piVar11;
    }
    lVar15 = *(long *)(piVar11 + 0xc);
    while (lVar15 != uStack_460[1]) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar15 = *(long *)(piVar11 + 0xc);
    }
LAB_0856e89f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else {
    if (iVar5 == 1) {
      piVar11 = *(int **)(*(long *)(uStack_460[2] + 0x78) + 0x48);
      iVar5 = *piVar11;
      while (iVar5 != *(int *)(uStack_460 + 3)) {
        piVar11 = piVar11 + 0x1a;
        iVar5 = *piVar11;
      }
      goto LAB_0856e89f;
    }
    if (iVar5 == 0) {
      *(uint *)(uStack_460[2] + 0x18) = *(uint *)(uStack_460[2] + 0x18) | 0x40000;
    }
  }
  if ((DAT_0f550a20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550a20), iVar5 != 0)) {
    func_0x048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  puStack_4f8 = (undefined *)CONCAT44(puStack_4f8._4_4_,_DAT_0f550a0c);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(0xd0,0);
  }
  lVar15 = lStack_448;
  plVar10 = plStack_450;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&UNK_0ef439d0;
  plStack_4f0 = plVar7 + 3;
  plStack_450 = (long *)0x0;
  lStack_448 = 0;
  plVar7[3] = (long)plVar10;
  plVar7[4] = lVar15;
  plVar7[7] = (long)uStack_430;
  plVar7[5] = (long)puStack_440;
  plVar7[6] = (long)puStack_438;
  puStack_440 = (undefined *)0x0;
  puStack_438 = (undefined1 *)0x0;
  uStack_430 = (undefined1 *)0x0;
  plVar7[10] = (long)plStack_418;
  plVar7[8] = CONCAT44(uStack_424,uStack_428);
  plVar7[9] = CONCAT44(uStack_41c,uStack_420);
  uStack_428 = 0;
  uStack_424 = 0;
  uStack_420 = 0;
  uStack_41c = 0;
  plStack_418 = (long *)0x0;
  plVar7[0xb] = lStack_410;
  plVar7[0xc] = (long)uStack_408;
  plVar7[0xd] = uStack_400;
  lStack_410 = 0;
  uStack_408 = (long *)0x0;
  uStack_400 = 0;
  plVar7[0xe] = lStack_3f8;
  plVar7[0xf] = lStack_3f0;
  plVar7[0x10] = lStack_3e8;
  lStack_3f8 = 0;
  lStack_3f0 = 0;
  lStack_3e8 = 0;
  *(undefined4 *)(plVar7 + 0x11) = uStack_3e0;
  plVar7[0x12] = lStack_3d8;
  plVar7[0x13] = lStack_3d0;
  plVar7[0x14] = lStack_3c8;
  lStack_3d8 = 0;
  lStack_3d0 = 0;
  lStack_3c8 = 0;
  plVar7[0x17] = lStack_3b0;
  *(undefined4 *)(plVar7 + 0x15) = (undefined4)uStack_3c0;
  *(undefined4 *)((long)plVar7 + 0xac) = uStack_3c0._4_4_;
  *(undefined4 *)(plVar7 + 0x16) = (undefined4)uStack_3b8;
  *(undefined4 *)((long)plVar7 + 0xb4) = uStack_3b8._4_4_;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  lStack_3b0 = 0;
  *(ulong *)((long)plVar7 + 0xc5) = CONCAT17(uStack_39c,CONCAT43(uStack_3a0,uStack_3a4._1_3_));
  plVar7[0x18] = CONCAT44(uStack_3a4,CONCAT22(uStack_3a6,uStack_3a8));
  uStack_218 = 0;
  uStack_210 = (long *)0x0;
  plStack_4e8 = plVar7;
  func_0x048afd20(puVar9,&puStack_4f8);
  plVar7 = plStack_4e8;
  if (plStack_4e8 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_4e8 + 1;
    lVar15 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_4e8 + 0x10))(plStack_4e8);
      func_0x0412c2d0(plVar7);
    }
  }
  plVar7 = uStack_210;
  if (uStack_210 != (long *)0x0) {
    LOCK();
    plVar10 = uStack_210 + 1;
    lVar15 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*uStack_210 + 0x10))(uStack_210);
      func_0x0412c2d0(plVar7);
    }
  }
  lVar15 = puVar9[2];
  iVar5 = *(int *)((long)puVar9 + 0x1c);
  if (iVar5 == 2) {
    piVar11 = *(int **)(*(long *)(lVar15 + 0x78) + 0x60);
    iVar5 = *piVar11;
    while (iVar5 != *(int *)(puVar9 + 3)) {
      piVar11 = piVar11 + 0x16;
      iVar5 = *piVar11;
    }
    for (; *(long *)(piVar11 + 0xc) != puVar9[1]; piVar11 = *(int **)(piVar11 + 0xe)) {
    }
LAB_0856ebaa:
    piVar11[4] = piVar11[4] | (int)puStack_468 << 0x10;
  }
  else {
    if (iVar5 == 1) {
      piVar11 = *(int **)(*(long *)(lVar15 + 0x78) + 0x48);
      iVar5 = *piVar11;
      while (iVar5 != *(int *)(puVar9 + 3)) {
        piVar11 = piVar11 + 0x1a;
        iVar5 = *piVar11;
      }
      goto LAB_0856ebaa;
    }
    if (iVar5 == 0) {
      *(uint *)(lVar15 + 0x18) = *(uint *)(lVar15 + 0x18) | (int)puStack_468 << 0x10;
    }
  }
  iVar5 = (uint)uStack_358;
  uVar1 = uStack_358._4_4_;
  plStack_500 = (long *)(ulong)uStack_358._4_4_;
  func_0x048b0bc0(&plStack_450);
  lStack_448 = 0;
  uStack_400 = 0;
  lStack_3f8 = 0;
  lStack_410 = 0;
  uStack_408 = (long *)0x0;
  uStack_420 = 0;
  uStack_41c = 0;
  plStack_418 = (long *)0x0;
  uStack_430 = (undefined1 *)0x0;
  uStack_428 = 0;
  uStack_424 = 0;
  puStack_440 = (undefined *)0x0;
  puStack_438 = (undefined1 *)0x0;
  lStack_3f0 = 0;
  uStack_460 = (long *)0xffffffffffffffff;
  uStack_458 = (long *)0x0;
  plStack_450 = (long *)0xff;
  puStack_468 = &UNK_0f4e3c70;
  plVar16 = &lStack_448;
  func_0x041679a0(plVar16);
  puStack_440 = (undefined *)func_0x041681f0(plVar16,0xf547a30);
  puStack_438 = (undefined1 *)func_0x041681f0(plVar16,0xf547770);
  uStack_430 = (undefined1 *)0x0;
  uStack_428 = 0;
  uStack_424 = 0;
  uStack_420 = 0;
  uStack_41c = 0;
  plStack_418 = (long *)0x0;
  lStack_410 = 0;
  uStack_408 = (long *)0x0;
  uStack_400 = 0;
  lStack_3f8 = 0;
  lStack_3f0 = 0;
  uStack_460 = (long *)0x100;
  uStack_290 = 0x100;
  uStack_28c = 0;
  uStack_288 = (undefined4)uStack_458;
  uStack_284 = uStack_458._4_4_;
  uStack_280 = plStack_450._0_1_;
  puStack_298 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_278,plVar16);
  puStack_270 = puStack_440;
  puStack_268 = puStack_438;
  uStack_260 = (undefined4)uStack_430;
  uStack_25c = uStack_430._4_4_;
  uStack_258 = uStack_428;
  uStack_254 = uStack_424;
  uStack_250 = CONCAT44(uStack_41c,uStack_420);
  plStack_248 = plStack_418;
  if (plStack_418 != (long *)0x0) {
    LOCK();
    plStack_418[1] = plStack_418[1] + 1;
    UNLOCK();
  }
  lStack_240 = lStack_410;
  if (((ulong)uStack_408 & 1) == 0) {
    lStack_228 = lStack_3f8;
    uStack_238 = uStack_408;
    uStack_230 = uStack_400;
  }
  else {
    func_0x0412e5e0(&uStack_238,lStack_3f8,uStack_400);
  }
  lStack_220 = lStack_3f0;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0f0fb8c0;
  plStack_470 = plVar19 + 3;
  *(undefined4 *)(plVar19 + 4) = uStack_290;
  *(undefined4 *)((long)plVar19 + 0x24) = uStack_28c;
  *(undefined4 *)(plVar19 + 5) = uStack_288;
  *(undefined4 *)((long)plVar19 + 0x2c) = uStack_284;
  *(undefined1 *)(plVar19 + 6) = uStack_280;
  plVar19[3] = (long)&UNK_0f4e3c70;
  func_0x04167a20(plVar19 + 7,auStack_278);
  plVar19[8] = (long)puStack_270;
  plVar19[9] = (long)puStack_268;
  plVar19[10] = CONCAT44(uStack_25c,uStack_260);
  plVar19[0xb] = CONCAT44(uStack_254,uStack_258);
  plVar19[0xc] = uStack_250;
  plVar19[0xd] = (long)plStack_248;
  uStack_250 = 0;
  plStack_248 = (long *)0x0;
  plVar19[0xe] = lStack_240;
  plVar19[0x11] = lStack_228;
  *(undefined4 *)(plVar19 + 0xf) = (undefined4)uStack_238;
  *(undefined4 *)((long)plVar19 + 0x7c) = uStack_238._4_4_;
  *(undefined4 *)(plVar19 + 0x10) = (undefined4)uStack_230;
  *(undefined4 *)((long)plVar19 + 0x84) = uStack_230._4_4_;
  uStack_238 = (long *)0x0;
  uStack_230 = 0;
  lStack_228 = 0;
  plVar19[0x12] = lStack_220;
  if (iVar5 == 4) {
    if ((DAT_0f5d70a8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5d70a8), iVar5 != 0)) {
      func_0x085f6740();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d7028,0xf53dab8);
      func_0x0410844d(&DAT_0f5d70a8);
    }
    plVar7 = (long *)(plStack_380[3] +
                     (ulong)((int)((ulong)(plStack_380[4] - plStack_380[3]) >> 3) - 1U &
                            *(uint *)(_DAT_0f5d7028 + 4)) * 8);
    do {
      lVar15 = *plVar7;
      if (lVar15 == -1) goto LAB_0856ef68;
      plVar7 = (long *)(plStack_380[6] + lVar15 * 0x18);
    } while (*(uint *)(plStack_380[6] + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5d7028 + 4));
    if (plVar7 == (long *)plStack_380[7]) {
LAB_0856ef68:
      puVar6 = &DAT_0f5d7028;
    }
    else {
      puVar6 = (undefined *)plVar7[2];
    }
    puVar6 = (undefined *)func_0x048b1040(plStack_380 + 3,puVar6,uVar1,1);
    if (puVar6 == (undefined *)0x0) {
      puStack_4f8 = (undefined *)0x0;
      plStack_4f0 = (long *)0x0;
      FUN_048b10d0(&puStack_4f8);
      puVar12 = *(undefined **)(puStack_4f8 + 0x38);
      puVar6 = puStack_4f8;
      if (puVar12 == (undefined *)0x0) goto LAB_0856f07c;
LAB_0856f098:
      do {
        puVar6 = puVar12;
        puVar12 = *(undefined **)(puVar6 + 0x38);
        if (*(undefined **)(puVar6 + 0x38) == (undefined *)0x0) {
          puStack_4f8 = (undefined *)0x0;
          plStack_4f0 = (long *)0x0;
          FUN_048b10d0(&puStack_4f8);
          puVar12 = puStack_4f8;
        }
      } while (puVar12 != (undefined *)0x0);
    }
    else {
      puVar12 = *(undefined **)(puVar6 + 0x38);
      if (*(undefined **)(puVar6 + 0x38) != (undefined *)0x0) goto LAB_0856f098;
LAB_0856f07c:
      puStack_4f8 = (undefined *)0x0;
      plStack_4f0 = (long *)0x0;
      FUN_048b10d0(&puStack_4f8);
      puVar12 = puStack_4f8;
      if (puStack_4f8 != (undefined *)0x0) goto LAB_0856f098;
    }
    lVar15 = *(long *)(puVar6 + 0x48);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x48,0);
    }
  }
  else {
    if (iVar5 != 1) {
      plVar7 = plVar19 + 1;
      LOCK();
      lVar15 = *plVar7;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        func_0x0412c2d0(plVar19);
      }
      goto LAB_0856f150;
    }
    plVar10 = plStack_380;
    if (DAT_0f5d70a8 == '\0') {
LAB_0856f52d:
      iVar5 = func_0x04108328(&DAT_0f5d70a8);
      if (iVar5 != 0) {
        func_0x085f6740();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f5d7028,0xf53dab8);
        func_0x0410844d(&DAT_0f5d70a8);
      }
    }
    plVar7 = (long *)(plVar10[3] +
                     (ulong)((int)((ulong)(plVar10[4] - plVar10[3]) >> 3) - 1U &
                            *(uint *)(_DAT_0f5d7028 + 4)) * 8);
    do {
      lVar15 = *plVar7;
      if (lVar15 == -1) goto LAB_0856eee8;
      plVar7 = (long *)(plVar10[6] + lVar15 * 0x18);
    } while (*(uint *)(plVar10[6] + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f5d7028 + 4));
    if (plVar7 == (long *)plVar10[7]) {
LAB_0856eee8:
      puVar6 = &DAT_0f5d7028;
    }
    else {
      puVar6 = (undefined *)plVar7[2];
    }
    puVar6 = (undefined *)func_0x048b0c90(plVar10 + 3,puVar6,(ulong)plStack_500 & 0xffffffff,1);
    if (puVar6 == (undefined *)0x0) {
      puStack_4f8 = (undefined *)0x0;
      plStack_4f0 = (long *)0x0;
      func_0x048b0d20(&puStack_4f8);
      puVar6 = puStack_4f8;
    }
    lVar15 = *(long *)(puVar6 + 0x58);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x48,0);
    }
  }
  puVar9[1] = 0xffffffffffffffff;
  puVar9[2] = 0;
  *(undefined1 *)(puVar9 + 3) = 0xff;
  *puVar9 = &UNK_0f4e3d70;
  puVar9[4] = 0;
  puVar9[5] = plStack_470;
  puVar9[6] = plVar19;
  puVar9[7] = 0;
  puVar9[8] = 0;
  plVar7 = *(long **)(lVar15 + 8);
  *(undefined8 **)(lVar15 + 8) = puVar9;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x28))();
  }
LAB_0856f150:
  puStack_298 = &UNK_0f4e3c70;
  if (((ulong)uStack_238 & 1) != 0) {
    func_0x0412a280(lStack_228,(ulong)uStack_238 & 0xfffffffffffffffe);
  }
  plVar7 = plStack_248;
  if (plStack_248 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_248 + 1;
    lVar15 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_248 + 0x10))(plStack_248);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x04167a40(auStack_278);
  puStack_468 = &UNK_0f4e3c70;
  if (((ulong)uStack_408 & 1) != 0) {
    func_0x0412a280(lStack_3f8,(ulong)uStack_408 & 0xfffffffffffffffe);
  }
  plVar7 = plStack_418;
  if (plStack_418 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_418 + 1;
    lVar15 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_418 + 0x10))(plStack_418);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x04167a40(plVar16);
  return;
}


