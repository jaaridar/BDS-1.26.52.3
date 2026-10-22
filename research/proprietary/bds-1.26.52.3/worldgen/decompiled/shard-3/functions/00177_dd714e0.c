/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xde714e0 (ELF vaddr 0xdd714e0)
 * Label: caller-of-callee
 * Body:  [[0de714e0, 0de72ea1] [0de72eb0, 0de73398]]
 * Ghidra: FUN_0de714e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0de714e0(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  bool bVar12;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined4 uStack_388;
  undefined4 uStack_384;
  long lStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined1 *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined1 *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  long *plStack_168;
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
  int iStack_130;
  undefined4 uStack_12c;
  char cStack_128;
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
  int iStack_f0;
  undefined4 uStack_ec;
  char cStack_e8;
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
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 uStack_b0;
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
  int iStack_80;
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
  undefined1 uStack_38;
  
  if ((DAT_0f740210 == '\0') && (iVar3 = func_0x04108328(&DAT_0f740210), iVar3 != 0)) {
    func_0x0deee400();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f740190,0xf53dab8);
    func_0x0410844d(&DAT_0f740210);
  }
  plVar5 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f740190 + 4)) * 8);
  do {
    lVar6 = *plVar5;
    if (lVar6 == -1) goto LAB_0de71550;
    plVar5 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f740190 + 4));
  if (plVar5 == *(long **)(param_1 + 0x38)) {
LAB_0de71550:
    puVar4 = &DAT_0f740190;
    if (iRam000000000f7401f0 != -0x2b3da790) goto LAB_0de715bd;
LAB_0de7157b:
    lVar6 = *(long *)(puVar4 + 0x68);
    if (lVar6 == 0) goto LAB_0de715bd;
    bVar12 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar9 = lVar6 + 9;
    if (bVar12) {
      lVar9 = *(long *)(lVar6 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar12) {
      uVar10 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x0deeec10(&uStack_158,param_1,lVar9,uVar10);
  }
  else {
    puVar4 = (undefined *)plVar5[2];
    if (*(int *)(puVar4 + 0x60) == -0x2b3da790) goto LAB_0de7157b;
LAB_0de715bd:
    func_0x0deeec10(&uStack_158,param_1,&UNK_0133a11f,0x13);
  }
  if (cStack_128 == '\0') {
    uStack_1c8._4_4_ = (undefined4)((ulong)uStack_1c8 >> 0x20);
    uStack_348._4_4_ = (uint)((ulong)uStack_348 >> 0x20);
    uStack_398._4_4_ = (undefined4)((ulong)uStack_398 >> 0x20);
    func_0x0deef780(&uStack_318,&uStack_158,&UNK_014dc3d8,6);
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar5 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar5 = (long)&UNK_0ef44b00;
    if (uStack_300 != (long *)0x0) {
      lVar6 = *uStack_300;
      uStack_300 = plVar5;
      (**(code **)(lVar6 + 8))();
      plVar5 = uStack_300;
    }
    uStack_300 = plVar5;
    uStack_398 = (undefined *)CONCAT44(uStack_398._4_4_,(undefined4)uStack_308);
    uStack_390 = (long *)0x0;
    uStack_388 = 0;
    lStack_380 = 1;
    uStack_378 = 0;
    uStack_370 = &UNK_048b3f30;
    puStack_368 = &SUB_048b06d0;
    puStack_360 = &SUB_048b2190;
    puStack_358 = &UNK_0deefd00;
    puStack_350 = &UNK_0deefec0;
    uStack_348 = (long *)((ulong)uStack_348._4_4_ << 0x20);
    uStack_340 = 0;
    uStack_338 = (long *)0x0;
    FUN_048b05a0(plStack_310,&uStack_398);
    plVar5 = uStack_338;
    if (uStack_338 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_338 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*uStack_338 + 0x10))(uStack_338);
        func_0x0412c2d0(plVar5);
      }
    }
    func_0x0deefa00(&uStack_318);
    cStack_e8 = cStack_128;
    uStack_f8 = uStack_138;
    uStack_f4 = uStack_134;
    iStack_f0 = iStack_130;
    uStack_ec = uStack_12c;
    uStack_108 = uStack_148;
    uStack_104 = uStack_144;
    uStack_100 = uStack_140;
    uStack_fc = uStack_13c;
    uStack_118 = uStack_158;
    uStack_114 = uStack_154;
    uStack_110 = uStack_150;
    uStack_10c = uStack_14c;
    func_0x048b0bc0(&uStack_300);
    uStack_228 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1f0 = 0;
    plStack_1e8 = (long *)0x0;
    puStack_200 = (undefined *)0x0;
    plStack_1f8 = (long *)0x0;
    puStack_210 = (undefined *)0x0;
    puStack_208 = (undefined *)0x0;
    uStack_220 = (undefined *)0x0;
    uStack_218 = 0;
    uStack_1d0 = 0;
    uStack_240 = (long *)0xffffffffffffffff;
    uStack_238 = 0;
    uStack_230._0_1_ = 0xff;
    uStack_230._1_7_ = 0;
    uStack_248 = (long *)&UNK_0f4e3c70;
    func_0x041679a0(&uStack_228);
    uStack_220 = (undefined *)func_0x041681f0(&uStack_228,0xf547a30);
    uStack_218 = func_0x041681f0(&uStack_228,0xf547770);
    puStack_210 = (undefined *)0x0;
    puStack_208 = (undefined *)0x0;
    puStack_200 = (undefined *)0x0;
    plStack_1f8 = (long *)0x0;
    uStack_1f0 = 0;
    plStack_1e8 = (long *)0x0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 1;
    uStack_230 = CONCAT71(uStack_230._1_7_,4);
    uStack_390 = uStack_240;
    uStack_388 = (undefined4)uStack_238;
    uStack_384 = uStack_238._4_4_;
    lStack_380 = CONCAT71(lStack_380._1_7_,4);
    uStack_398 = &UNK_0f4e3c70;
    func_0x04167a20(&uStack_378,&uStack_228);
    uStack_370 = uStack_220;
    puStack_368 = (undefined1 *)uStack_218;
    puStack_360 = puStack_210;
    puStack_358 = puStack_208;
    puStack_350 = puStack_200;
    uStack_348 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plStack_1f8[1] = plStack_1f8[1] + 1;
      UNLOCK();
    }
    uStack_340 = uStack_1f0;
    if (((ulong)plStack_1e8 & 1) == 0) {
      uStack_328 = uStack_1d8;
      uStack_338 = plStack_1e8;
      uStack_330 = uStack_1e0;
    }
    else {
      func_0x0412e5e0(&uStack_338,uStack_1d8,uStack_1e0);
    }
    uStack_320 = uStack_1d0;
    if (iStack_f0 == 4) {
      lVar6 = func_0x0def01e0(&uStack_118);
      lVar6 = *(long *)(lVar6 + 0x48);
      puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar7 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x80,0);
      }
LAB_0de71988:
      *(undefined1 *)(puVar7 + 3) = (undefined1)lStack_380;
      *(undefined4 *)(puVar7 + 1) = (undefined4)uStack_390;
      *(undefined4 *)((long)puVar7 + 0xc) = uStack_390._4_4_;
      *(undefined4 *)(puVar7 + 2) = uStack_388;
      *(undefined4 *)((long)puVar7 + 0x14) = uStack_384;
      *puVar7 = &UNK_0f4e3c70;
      func_0x04167a20(puVar7 + 4,&uStack_378);
      puVar7[5] = uStack_370;
      puVar7[6] = puStack_368;
      puVar7[7] = puStack_360;
      puVar7[8] = puStack_358;
      puVar7[9] = puStack_350;
      puVar7[10] = uStack_348;
      puStack_350 = (undefined *)0x0;
      uStack_348 = (long *)0x0;
      puVar7[0xb] = uStack_340;
      puVar7[0xe] = uStack_328;
      *(undefined4 *)(puVar7 + 0xc) = (undefined4)uStack_338;
      *(undefined4 *)((long)puVar7 + 100) = uStack_338._4_4_;
      *(undefined4 *)(puVar7 + 0xd) = (undefined4)uStack_330;
      *(undefined4 *)((long)puVar7 + 0x6c) = uStack_330._4_4_;
      uStack_338 = (long *)0x0;
      uStack_330 = 0;
      uStack_328 = 0;
      puVar7[0xf] = uStack_320;
      plVar5 = *(long **)(lVar6 + 8);
      *(undefined8 **)(lVar6 + 8) = puVar7;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x28))();
      }
    }
    else if (iStack_f0 == 1) {
      lVar6 = func_0x0def0090(&uStack_118);
      lVar6 = *(long *)(lVar6 + 0x58);
      puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar7 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x80,0);
      }
      goto LAB_0de71988;
    }
    cStack_78 = cStack_e8;
    uStack_88 = uStack_f8;
    uStack_84 = uStack_f4;
    iStack_80 = iStack_f0;
    uStack_7c = uStack_ec;
    uStack_98 = uStack_108;
    uStack_94 = uStack_104;
    uStack_90 = uStack_100;
    uStack_8c = uStack_fc;
    uStack_a8 = uStack_118;
    uStack_a4 = uStack_114;
    uStack_a0 = uStack_110;
    uStack_9c = uStack_10c;
    func_0x0de792b0(&uStack_e0,&uStack_a8);
    func_0x0deef780(&uStack_318,&uStack_e0,&UNK_0138e8dd,5);
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar5 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar5 = (long)&UNK_0f4a8a58;
    if (uStack_300 != (long *)0x0) {
      lVar6 = *uStack_300;
      uStack_300 = plVar5;
      (**(code **)(lVar6 + 8))();
      plVar5 = uStack_300;
    }
    uStack_300 = plVar5;
    uStack_1c8 = (undefined *)CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_308);
    plStack_1c0 = (long *)0x0;
    uStack_1b8 = 0;
    lStack_1b0 = 1;
    uStack_1a8 = 0;
    puStack_1a0 = &UNK_0def2b20;
    puStack_198 = &SUB_048b06d0;
    puStack_190 = &UNK_0def1b70;
    puStack_188 = &UNK_0def2b30;
    puStack_180 = &UNK_0def2d70;
    uStack_178 = 0;
    uStack_170 = 0;
    plStack_168 = (long *)0x0;
    FUN_048b05a0(plStack_310,&uStack_1c8);
    plVar5 = plStack_168;
    if (plStack_168 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_168 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_168 + 0x10))(plStack_168);
        func_0x0412c2d0(plVar5);
      }
    }
    func_0x0deefa00(&uStack_318);
    uStack_38 = uStack_b0;
    uStack_48 = uStack_c0;
    uStack_44 = uStack_bc;
    uStack_40 = uStack_b8;
    uStack_3c = uStack_b4;
    uStack_58 = uStack_d0;
    uStack_54 = uStack_cc;
    uStack_50 = uStack_c8;
    uStack_4c = uStack_c4;
    uStack_68 = uStack_e0;
    uStack_64 = uStack_dc;
    uStack_60 = uStack_d8;
    uStack_5c = uStack_d4;
    func_0x048b0bc0(&uStack_300);
    func_0x0de792b0(&uStack_318,&uStack_68);
    uStack_398 = &UNK_0f4e3c70;
    if (((ulong)uStack_338 & 1) != 0) {
      func_0x0412a280(uStack_328,(ulong)uStack_338 & 0xfffffffffffffffe);
    }
    plVar5 = uStack_348;
    if (uStack_348 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_348 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*uStack_348 + 0x10))(uStack_348);
        func_0x0412c2d0(plVar5);
      }
    }
    func_0x04167a40(&uStack_378);
    uStack_248 = (long *)&UNK_0f4e3c70;
    if (((ulong)plStack_1e8 & 1) != 0) {
      func_0x0412a280(uStack_1d8,(ulong)plStack_1e8 & 0xfffffffffffffffe);
    }
    plVar5 = plStack_1f8;
    if (plStack_1f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1f8 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
        func_0x0412c2d0(plVar5);
      }
    }
    func_0x04167a40(&uStack_228);
  }
  if ((DAT_0f73ffb8 == '\0') && (iVar3 = func_0x04108328(&DAT_0f73ffb8), iVar3 != 0)) {
    func_0x0dee9eb0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f73ff38,0xf53dab8);
    func_0x0410844d(&DAT_0f73ffb8);
  }
  plVar5 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f73ff38 + 4)) * 8);
  do {
    lVar6 = *plVar5;
    if (lVar6 == -1) goto LAB_0de71d50;
    plVar5 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f73ff38 + 4));
  if (plVar5 == *(long **)(param_1 + 0x38)) {
LAB_0de71d50:
    puVar4 = &DAT_0f73ff38;
    if (iRam000000000f73ff98 != -0x2b3da790) goto LAB_0de71db5;
LAB_0de71d7b:
    lVar6 = *(long *)(puVar4 + 0x68);
    if (lVar6 == 0) goto LAB_0de71db5;
    bVar12 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar9 = lVar6 + 9;
    if (bVar12) {
      lVar9 = *(long *)(lVar6 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar12) {
      uVar10 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x0def31f0(&uStack_398,param_1,lVar9,uVar10);
  }
  else {
    puVar4 = (undefined *)plVar5[2];
    if (*(int *)(puVar4 + 0x60) == -0x2b3da790) goto LAB_0de71d7b;
LAB_0de71db5:
    func_0x0def31f0(&uStack_398,param_1,&UNK_014a8424,0x18);
  }
  if ((char)puStack_368 == '\0') {
    uStack_308._4_4_ = (uint)((ulong)uStack_308 >> 0x20);
    uStack_318._4_4_ = (undefined4)((ulong)uStack_318 >> 0x20);
    uStack_370 = (undefined *)0x1e1bc4d500000004;
    if ((DAT_0f73ff20 == '\0') && (iVar3 = func_0x04108328(&DAT_0f73ff20), iVar3 != 0)) {
      func_0x0dee9d00();
      func_0x0410844d(&DAT_0f73ff20);
    }
    uStack_318 = CONCAT44(uStack_318._4_4_,uStack_370._4_4_);
    plStack_310 = (long *)0x0;
    uStack_308 = (long *)((ulong)uStack_308._4_4_ << 0x20);
    uStack_300 = (long *)0x2;
    puStack_2f8 = &SUB_048aead0;
    puStack_2f0 = &UNK_0def3da0;
    puStack_2e8 = &UNK_0def3dc0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    func_0x049057f0(&uStack_390,&uStack_318);
    func_0x048aea50(&uStack_318);
    uStack_238 = lStack_380;
    uStack_230 = uStack_378;
    uStack_248 = uStack_390;
    uStack_240 = (long *)CONCAT44(uStack_384,uStack_388);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar7 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar7 = &UNK_0f4a3f98;
    if ((DAT_0f551bc8 == '\0') && (iVar3 = func_0x04108328(&DAT_0f551bc8), iVar3 != 0)) {
      FUN_04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    uStack_318 = CONCAT44(uStack_318._4_4_,_DAT_0f551bb4);
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar5 == (long *)0x0) {
      FUN_0eec74c0(0x30,0);
    }
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&UNK_0ef46c48;
    plStack_310 = plVar5 + 3;
    plVar5[3] = (long)puVar7;
    plVar5[4] = 0;
    *(undefined1 *)(plVar5 + 5) = 0xff;
    uStack_1c8 = (undefined *)0x0;
    plStack_1c0 = (long *)0x0;
    uStack_308 = plVar5;
    func_0x048afd20(&uStack_248,&uStack_318);
    plVar5 = uStack_308;
    if (uStack_308 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_308 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*uStack_308 + 0x10))(uStack_308);
        func_0x0412c2d0(plVar5);
      }
    }
    plVar5 = plStack_1c0;
    if (plStack_1c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1c0 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
        func_0x0412c2d0(plVar5);
      }
    }
    if ((DAT_0f73ff20 == '\0') && (iVar3 = func_0x04108328(&DAT_0f73ff20), iVar3 != 0)) {
      func_0x0dee9d00();
      func_0x0410844d(&DAT_0f73ff20);
    }
    if (uStack_378._4_4_ == 2) {
      piVar8 = *(int **)(*(long *)(lStack_380 + 0x78) + 0x60);
      iVar3 = *piVar8;
      while (iVar3 != (int)uStack_378) {
        piVar8 = piVar8 + 0x16;
        iVar3 = *piVar8;
      }
      lVar6 = *(long *)(piVar8 + 0xc);
      while (lVar6 != CONCAT44(uStack_384,uStack_388)) {
        piVar8 = *(int **)(piVar8 + 0xe);
        lVar6 = *(long *)(piVar8 + 0xc);
      }
LAB_0de7202f:
      *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 2;
    }
    else {
      if (uStack_378._4_4_ == 1) {
        piVar8 = *(int **)(*(long *)(lStack_380 + 0x78) + 0x48);
        iVar3 = *piVar8;
        while (iVar3 != (int)uStack_378) {
          piVar8 = piVar8 + 0x1a;
          iVar3 = *piVar8;
        }
        goto LAB_0de7202f;
      }
      if (uStack_378._4_4_ == 0) {
        *(uint *)(lStack_380 + 0x18) = *(uint *)(lStack_380 + 0x18) | 0x20000;
      }
    }
    if ((DAT_0f73ff20 == '\0') && (iVar3 = func_0x04108328(&DAT_0f73ff20), iVar3 != 0)) {
      func_0x0dee9d00();
      func_0x0410844d(&DAT_0f73ff20);
    }
    uStack_318 = CONCAT44(uStack_318._4_4_,0xbf75c8f8);
    plStack_310 = (long *)0x0;
    uStack_308 = (long *)CONCAT44(uStack_308._4_4_,1);
    uStack_300 = (long *)0x0;
    puStack_2f8 = &UNK_0deee340;
    puStack_2f0 = &SUB_048b06d0;
    puStack_2e8 = &UNK_0def4a00;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    func_0x049057f0(&uStack_390,&uStack_318);
    func_0x048aea50(&uStack_318);
    uStack_238 = lStack_380;
    uStack_230 = uStack_378;
    uStack_248 = uStack_390;
    uStack_240 = (long *)CONCAT44(uStack_384,uStack_388);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar7 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar7 = &UNK_0f4a3f98;
    if ((DAT_0f551cb0 == '\0') && (iVar3 = func_0x04108328(&DAT_0f551cb0), iVar3 != 0)) {
      func_0x04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    uStack_318 = CONCAT44(uStack_318._4_4_,_DAT_0f551c9c);
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar5 == (long *)0x0) {
      FUN_0eec74c0(0x28,0);
    }
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&UNK_0ef46c98;
    plStack_310 = plVar5 + 3;
    plVar5[3] = (long)puVar7;
    *(undefined1 *)(plVar5 + 4) = 0xff;
    uStack_1c8 = (undefined *)0x0;
    plStack_1c0 = (long *)0x0;
    uStack_308 = plVar5;
    func_0x048afd20(&uStack_248,&uStack_318);
    plVar5 = uStack_308;
    if (uStack_308 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_308 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*uStack_308 + 0x10))(uStack_308);
        func_0x0412c2d0(plVar5);
      }
    }
    plVar5 = plStack_1c0;
    if (plStack_1c0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1c0 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
        func_0x0412c2d0(plVar5);
      }
    }
  }
  if ((DAT_0f73fed0 == '\0') && (iVar3 = func_0x04108328(&DAT_0f73fed0), iVar3 != 0)) {
    func_0x0dee6160();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f73fe50,0xf53dab8);
    func_0x0410844d(&DAT_0f73fed0);
  }
  plVar5 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f73fe50 + 4)) * 8);
  do {
    lVar6 = *plVar5;
    if (lVar6 == -1) goto LAB_0de72260;
    plVar5 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f73fe50 + 4));
  if (plVar5 == *(long **)(param_1 + 0x38)) {
LAB_0de72260:
    puVar4 = &DAT_0f73fe50;
    if (iRam000000000f73feb0 != -0x2b3da790) goto LAB_0de722cd;
LAB_0de7228b:
    lVar6 = *(long *)(puVar4 + 0x68);
    if (lVar6 == 0) goto LAB_0de722cd;
    bVar12 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar9 = lVar6 + 9;
    if (bVar12) {
      lVar9 = *(long *)(lVar6 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar12) {
      uVar10 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x0dee6a00(&uStack_248,param_1,lVar9,uVar10);
  }
  else {
    puVar4 = (undefined *)plVar5[2];
    if (*(int *)(puVar4 + 0x60) == -0x2b3da790) goto LAB_0de7228b;
LAB_0de722cd:
    func_0x0dee6a00(&uStack_248,param_1,&UNK_014c2f54,0x1c);
  }
  if ((char)uStack_218 == '\0') {
    func_0x0dee75b0(&uStack_318,&uStack_248,&UNK_01410553,5,0);
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar5 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar5 = (long)&UNK_0f0123c0;
    if (uStack_300 != (long *)0x0) {
      lVar6 = *uStack_300;
      uStack_300 = plVar5;
      (**(code **)(lVar6 + 8))();
      plVar5 = uStack_300;
    }
    uStack_300 = plVar5;
    uStack_398 = (undefined *)CONCAT44(uStack_398._4_4_,(undefined4)uStack_308);
    uStack_390 = (long *)0x0;
    uStack_388 = 0;
    lStack_380 = 1;
    uStack_378 = 0;
    uStack_370 = &UNK_05e08030;
    puStack_368 = &SUB_048b06d0;
    puStack_360 = &UNK_05e07cf0;
    puStack_358 = &UNK_0dee7b50;
    puStack_350 = &UNK_0dee7d00;
    uStack_348 = (long *)((ulong)uStack_348 & 0xffffffff00000000);
    uStack_340 = 0;
    uStack_338 = (long *)0x0;
    FUN_048b05a0(plStack_310,&uStack_398);
    plVar5 = uStack_338;
    if (uStack_338 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_338 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*uStack_338 + 0x10))(uStack_338);
        func_0x0412c2d0(plVar5);
      }
    }
    func_0x0dee7850(&uStack_318);
    cStack_128 = (char)uStack_218;
    uStack_138 = (undefined4)uStack_228;
    uStack_134 = uStack_228._4_4_;
    iStack_130 = (int)uStack_220;
    uStack_12c = uStack_220._4_4_;
    uStack_148 = (undefined4)uStack_238;
    uStack_144 = uStack_238._4_4_;
    uStack_140 = (undefined4)uStack_230;
    uStack_13c = uStack_230._4_4_;
    uStack_158 = (undefined4)uStack_248;
    uStack_154 = uStack_248._4_4_;
    uStack_150 = (undefined4)uStack_240;
    uStack_14c = uStack_240._4_4_;
    func_0x048b0bc0(&uStack_300);
    func_0x0de78ce0(&uStack_1c8,&uStack_158);
    func_0x0dee6ff0(&uStack_318,uStack_1c8 + 0x18);
    if (uStack_300._4_4_ == 2) {
      piVar8 = *(int **)(uStack_308[0xf] + 0x60);
      iVar3 = *piVar8;
      while (iVar3 != (int)uStack_300) {
        piVar8 = piVar8 + 0x16;
        iVar3 = *piVar8;
      }
      plVar5 = *(long **)(piVar8 + 0xc);
      while (plVar5 != plStack_310) {
        piVar8 = *(int **)(piVar8 + 0xe);
        plVar5 = *(long **)(piVar8 + 0xc);
      }
LAB_0de7254f:
      *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
    }
    else {
      if (uStack_300._4_4_ == 1) {
        piVar8 = *(int **)(uStack_308[0xf] + 0x48);
        iVar3 = *piVar8;
        while (iVar3 != (int)uStack_300) {
          piVar8 = piVar8 + 0x1a;
          iVar3 = *piVar8;
        }
        goto LAB_0de7254f;
      }
      if (uStack_300._4_4_ == 0) {
        *(uint *)(uStack_308 + 3) = *(uint *)(uStack_308 + 3) | 0x40000;
      }
    }
    func_0x0dee75b0(&uStack_318,&uStack_1c8,&UNK_011b1cd6,7,0x10);
    plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar5 == (long *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *plVar5 = (long)&UNK_0f4a3bc0;
    if (uStack_300 != (long *)0x0) {
      lVar6 = *uStack_300;
      uStack_300 = plVar5;
      (**(code **)(lVar6 + 8))();
      plVar5 = uStack_300;
    }
    uStack_300 = plVar5;
    uStack_398 = (undefined *)CONCAT44(uStack_398._4_4_,(undefined4)uStack_308);
    uStack_390 = (long *)0x0;
    uStack_388 = 0;
    lStack_380 = 1;
    uStack_378 = 0;
    uStack_370 = &UNK_0deec260;
    puStack_368 = &SUB_048b06d0;
    puStack_360 = &UNK_0deeaa90;
    puStack_358 = &UNK_0deec320;
    puStack_350 = &UNK_0deec600;
    uStack_348 = (long *)((ulong)uStack_348 & 0xffffffff00000000);
    uStack_340 = 0;
    uStack_338 = (long *)0x0;
    FUN_048b05a0(plStack_310,&uStack_398);
    plVar5 = uStack_338;
    if (uStack_338 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_338 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*uStack_338 + 0x10))(uStack_338);
        func_0x0412c2d0(plVar5);
      }
    }
    func_0x0dee7850(&uStack_318);
    puStack_368 = (undefined1 *)CONCAT71(puStack_368._1_7_,puStack_198._0_1_);
    uStack_378 = uStack_1a8;
    uStack_370 = puStack_1a0;
    uStack_388 = uStack_1b8;
    uStack_384 = uStack_1b4;
    lStack_380 = lStack_1b0;
    uStack_398 = uStack_1c8;
    uStack_390 = plStack_1c0;
    func_0x048b0bc0(&uStack_300);
    func_0x0de78ce0(&uStack_318,&uStack_398);
  }
  if ((DAT_0f73f7d0 == '\0') && (iVar3 = func_0x04108328(&DAT_0f73f7d0), iVar3 != 0)) {
    func_0x0decd270();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f73f750,0xf53dab8);
    func_0x0410844d(&DAT_0f73f7d0);
  }
  plVar5 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f73f750 + 4)) * 8);
  do {
    lVar6 = *plVar5;
    if (lVar6 == -1) goto LAB_0de72720;
    plVar5 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f73f750 + 4));
  if (plVar5 == *(long **)(param_1 + 0x38)) {
LAB_0de72720:
    puVar4 = &DAT_0f73f750;
    if (iRam000000000f73f7b0 != -0x2b3da790) goto LAB_0de7278b;
LAB_0de7274b:
    lVar6 = *(long *)(puVar4 + 0x68);
    if (lVar6 == 0) goto LAB_0de7278b;
    bVar12 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar9 = lVar6 + 9;
    if (bVar12) {
      lVar9 = *(long *)(lVar6 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar12) {
      uVar10 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x0deeca80(&uStack_398,param_1,lVar9,uVar10);
  }
  else {
    puVar4 = (undefined *)plVar5[2];
    if (*(int *)(puVar4 + 0x60) == -0x2b3da790) goto LAB_0de7274b;
LAB_0de7278b:
    func_0x0deeca80(&uStack_398,param_1,&UNK_01251b37,0x21);
  }
  if ((char)puStack_368 != '\0') {
    return;
  }
  uStack_370 = (undefined *)0x1e1bc4d500000004;
  if ((DAT_0f73f738 == '\0') && (iVar3 = func_0x04108328(&DAT_0f73f738), iVar3 != 0)) {
    func_0x0deccef0();
    func_0x0410844d(&DAT_0f73f738);
  }
  uStack_318 = CONCAT44(uStack_318._4_4_,uStack_370._4_4_);
  plStack_310 = (long *)0x0;
  uStack_308 = (long *)((ulong)uStack_308 & 0xffffffff00000000);
  uStack_300 = (long *)0x1;
  puStack_2f8 = &SUB_048aead0;
  puStack_2f0 = &UNK_0deed5f0;
  puStack_2e8 = &UNK_0deed6b0;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  func_0x049057f0(&uStack_390,&uStack_318);
  func_0x048aea50(&uStack_318);
  uStack_238 = lStack_380;
  uStack_230 = uStack_378;
  uStack_248 = uStack_390;
  uStack_240 = (long *)CONCAT44(uStack_384,uStack_388);
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar7 = &UNK_0f4a3db0;
  if ((DAT_0f551bc8 == '\0') && (iVar3 = func_0x04108328(&DAT_0f551bc8), iVar3 != 0)) {
    FUN_04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  uStack_318 = CONCAT44(uStack_318._4_4_,_DAT_0f551bb4);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar5 == (long *)0x0) {
    FUN_0eec74c0(0x30,0);
  }
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&UNK_0ef46c48;
  plStack_310 = plVar5 + 3;
  plVar5[3] = (long)puVar7;
  plVar5[4] = 0;
  *(undefined1 *)(plVar5 + 5) = 0xff;
  uStack_1c8 = (undefined *)0x0;
  plStack_1c0 = (long *)0x0;
  uStack_308 = plVar5;
  func_0x048afd20(&uStack_248,&uStack_318);
  plVar5 = uStack_308;
  if (uStack_308 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_308 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*uStack_308 + 0x10))(uStack_308);
      func_0x0412c2d0(plVar5);
    }
  }
  plVar5 = plStack_1c0;
  if (plStack_1c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1c0 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
      func_0x0412c2d0(plVar5);
    }
  }
  if ((DAT_0f73f738 == '\0') && (iVar3 = func_0x04108328(&DAT_0f73f738), iVar3 != 0)) {
    func_0x0deccef0();
    func_0x0410844d(&DAT_0f73f738);
  }
  if (uStack_378._4_4_ == 2) {
    piVar8 = *(int **)(*(long *)(lStack_380 + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != (int)uStack_378) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    lVar6 = *(long *)(piVar8 + 0xc);
    while (lVar6 != CONCAT44(uStack_384,uStack_388)) {
      piVar8 = *(int **)(piVar8 + 0xe);
      lVar6 = *(long *)(piVar8 + 0xc);
    }
LAB_0de72a7f:
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 2;
  }
  else {
    if (uStack_378._4_4_ == 1) {
      piVar8 = *(int **)(*(long *)(lStack_380 + 0x78) + 0x48);
      iVar3 = *piVar8;
      while (iVar3 != (int)uStack_378) {
        piVar8 = piVar8 + 0x1a;
        iVar3 = *piVar8;
      }
      goto LAB_0de72a7f;
    }
    if (uStack_378._4_4_ == 0) {
      *(uint *)(lStack_380 + 0x18) = *(uint *)(lStack_380 + 0x18) | 0x20000;
    }
  }
  if ((DAT_0f73f738 == '\0') && (iVar3 = func_0x04108328(&DAT_0f73f738), iVar3 != 0)) {
    func_0x0deccef0();
    func_0x0410844d(&DAT_0f73f738);
  }
  uStack_318 = CONCAT44(uStack_318._4_4_,0xbf75c8f8);
  plStack_310 = (long *)0x0;
  uStack_308 = (long *)CONCAT44(uStack_308._4_4_,1);
  uStack_300 = (long *)0x0;
  puStack_2f8 = &UNK_0dee60a0;
  puStack_2f0 = &SUB_048b06d0;
  puStack_2e8 = &UNK_0deeddf0;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  func_0x049057f0(&uStack_390,&uStack_318);
  func_0x048aea50(&uStack_318);
  uStack_238 = lStack_380;
  uStack_230 = uStack_378;
  uStack_248 = uStack_390;
  uStack_240 = (long *)CONCAT44(uStack_384,uStack_388);
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar7 = &UNK_0f4a3db0;
  if ((DAT_0f551cb0 == '\0') && (iVar3 = func_0x04108328(&DAT_0f551cb0), iVar3 != 0)) {
    func_0x04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  uStack_318 = CONCAT44(uStack_318._4_4_,_DAT_0f551c9c);
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar5 == (long *)0x0) {
    FUN_0eec74c0(0x28,0);
  }
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&UNK_0ef46c98;
  plStack_310 = plVar5 + 3;
  plVar5[3] = (long)puVar7;
  *(undefined1 *)(plVar5 + 4) = 0xff;
  uStack_1c8 = (undefined *)0x0;
  plStack_1c0 = (long *)0x0;
  uStack_308 = plVar5;
  func_0x048afd20(&uStack_248,&uStack_318);
  plVar5 = uStack_308;
  if (uStack_308 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_308 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*uStack_308 + 0x10))(uStack_308);
      func_0x0412c2d0(plVar5);
    }
  }
  plVar5 = plStack_1c0;
  if (plStack_1c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1c0 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
      func_0x0412c2d0(plVar5);
    }
  }
  puVar4 = uStack_398;
  uVar2 = uStack_370._4_4_;
  if ((int)uStack_370 != 4) {
    if ((int)uStack_370 != 1) {
      return;
    }
    if ((DAT_0f73f7d0 == '\0') && (iVar3 = func_0x04108328(&DAT_0f73f7d0), iVar3 != 0)) {
      func_0x0decd270();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f73f750,0xf53dab8);
      func_0x0410844d(&DAT_0f73f7d0);
    }
    plVar5 = (long *)(*(long *)(puVar4 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(puVar4 + 0x20) - *(long *)(puVar4 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f73f750 + 4)) * 8);
    do {
      lVar6 = *plVar5;
      if (lVar6 == -1) goto LAB_0de72cd9;
      plVar5 = (long *)(*(long *)(puVar4 + 0x30) + lVar6 * 0x18);
    } while (*(uint *)(*(long *)(puVar4 + 0x30) + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f73f750 + 4))
    ;
    if (plVar5 == *(long **)(puVar4 + 0x38)) {
LAB_0de72cd9:
      puVar11 = &DAT_0f73f750;
    }
    else {
      puVar11 = (undefined *)plVar5[2];
    }
    lVar6 = func_0x048b0c90(puVar4 + 0x18,puVar11,uVar2,1);
    if (lVar6 == 0) {
      uStack_318 = 0;
      plStack_310 = (long *)0x0;
      FUN_048b0d20(&uStack_318);
      lVar6 = uStack_318;
    }
    lVar6 = *(long *)(lVar6 + 0x58);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar7 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    goto LAB_0de72f04;
  }
  if ((DAT_0f73f7d0 == '\0') && (iVar3 = func_0x04108328(&DAT_0f73f7d0), iVar3 != 0)) {
    func_0x0decd270();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f73f750,0xf53dab8);
    func_0x0410844d(&DAT_0f73f7d0);
  }
  plVar5 = (long *)(*(long *)(puVar4 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(puVar4 + 0x20) - *(long *)(puVar4 + 0x18)) >> 3)
                           - 1U & *(uint *)(_DAT_0f73f750 + 4)) * 8);
  do {
    lVar6 = *plVar5;
    if (lVar6 == -1) goto LAB_0de72d49;
    plVar5 = (long *)(*(long *)(puVar4 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(puVar4 + 0x30) + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f73f750 + 4));
  if (plVar5 == *(long **)(puVar4 + 0x38)) {
LAB_0de72d49:
    puVar11 = &DAT_0f73f750;
  }
  else {
    puVar11 = (undefined *)plVar5[2];
  }
  lVar6 = func_0x048b1040(puVar4 + 0x18,puVar11,uVar2,1);
  if (lVar6 == 0) {
    uStack_318 = 0;
    plStack_310 = (long *)0x0;
    func_0x048b10d0(&uStack_318);
    lVar9 = *(long *)(uStack_318 + 0x38);
    lVar6 = uStack_318;
    if (lVar9 == 0) goto LAB_0de72e73;
LAB_0de72e98:
    do {
      lVar6 = lVar9;
      lVar9 = *(long *)(lVar6 + 0x38);
      if (*(long *)(lVar6 + 0x38) == 0) {
        uStack_318 = 0;
        plStack_310 = (long *)0x0;
        func_0x048b10d0(&uStack_318);
        lVar9 = uStack_318;
      }
    } while (lVar9 != 0);
  }
  else {
    lVar9 = *(long *)(lVar6 + 0x38);
    if (*(long *)(lVar6 + 0x38) != 0) goto LAB_0de72e98;
LAB_0de72e73:
    uStack_318 = 0;
    plStack_310 = (long *)0x0;
    func_0x048b10d0(&uStack_318);
    lVar9 = uStack_318;
    if (uStack_318 != 0) goto LAB_0de72e98;
  }
  lVar6 = *(long *)(lVar6 + 0x48);
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
LAB_0de72f04:
  puVar7[1] = 0xffffffffffffffff;
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 4;
  *puVar7 = &UNK_0f4a2ad0;
  plVar5 = *(long **)(lVar6 + 8);
  *(undefined8 **)(lVar6 + 8) = puVar7;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x28))();
  }
  return;
}


