/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe991790 (ELF vaddr 0xe891790)
 * Label: caller-of-callee
 * Body:  [[0e991790, 0e9943f2] [0e994400, 0e994ba6]]
 * Ghidra: FUN_0e991790
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e991790(long param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined4 uVar13;
  bool bVar14;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined4 uStack_378;
  undefined4 uStack_374;
  long lStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined1 *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined4 uStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  char cStack_108;
  byte bStack_100;
  undefined6 uStack_ff;
  undefined1 uStack_f9;
  undefined1 uStack_f8;
  undefined6 uStack_f7;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
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
  int iStack_c0;
  undefined4 uStack_bc;
  char cStack_b8;
  undefined8 uStack_a8;
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
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  char cStack_38;
  
  if ((DAT_0f76c280 == '\0') && (iVar3 = func_0x04108328(&DAT_0f76c280), iVar3 != 0)) {
    func_0x0eae9750();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f76c200,0xf53dab8);
    FUN_0410844d(&DAT_0f76c280);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f76c200 + 4)) * 8);
  do {
    lVar8 = *plVar6;
    if (lVar8 == -1) goto LAB_0e991800;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f76c200 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_0e991800:
    puVar5 = &DAT_0f76c200;
    if (iRam000000000f76c260 != -0x2b3da790) goto LAB_0e99186d;
LAB_0e99182b:
    lVar8 = *(long *)(puVar5 + 0x68);
    if (lVar8 == 0) goto LAB_0e99186d;
    bVar14 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar10 = lVar8 + 9;
    if (bVar14) {
      lVar10 = *(long *)(lVar8 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar14) {
      uVar11 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x0eaee4c0(&uStack_1b8,param_1,lVar10,uVar11);
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    if (*(int *)(puVar5 + 0x60) == -0x2b3da790) goto LAB_0e99182b;
LAB_0e99186d:
    func_0x0eaee4c0(&uStack_1b8,param_1,&UNK_0137271c,0x15);
  }
  if ((char)puStack_188 == '\0') {
    uStack_338._4_4_ = (uint)((ulong)uStack_338 >> 0x20);
    uStack_388._4_4_ = (undefined4)((ulong)uStack_388 >> 0x20);
    func_0x0eaef0a0(&uStack_308,&uStack_1b8,&UNK_0142a5c6,4,1);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f012348;
    if (uStack_2f0 != (long *)0x0) {
      lVar8 = *uStack_2f0;
      uStack_2f0 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = uStack_2f0;
    }
    uStack_2f0 = plVar6;
    uStack_388 = (undefined *)CONCAT44(uStack_388._4_4_,(undefined4)uStack_2f8);
    uStack_380 = (undefined *)0x0;
    uStack_378 = 0;
    lStack_370 = 1;
    uStack_368 = 0;
    uStack_360 = &UNK_05ea71a0;
    puStack_358 = &SUB_048b06d0;
    puStack_350 = &SUB_05e9fca0;
    puStack_348 = &UNK_0eaef660;
    puStack_340 = &UNK_0eaef870;
    uStack_338 = (long *)((ulong)uStack_338._4_4_ << 0x20);
    uStack_330 = 0;
    uStack_328 = (long *)0x0;
    func_0x048b05a0(plStack_300,&uStack_388);
    plVar6 = uStack_328;
    if (uStack_328 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_328 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_328 + 0x10))(uStack_328);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x0eaef360(&uStack_308);
    cStack_b8 = (char)puStack_188;
    uStack_c8 = (undefined4)uStack_198;
    uStack_c4 = uStack_198._4_4_;
    iStack_c0 = (int)uStack_190;
    uStack_bc = uStack_190._4_4_;
    uStack_d8 = (undefined4)uStack_1a8;
    uStack_d4 = uStack_1a8._4_4_;
    uStack_d0 = (undefined4)uStack_1a0;
    uStack_cc = uStack_1a0._4_4_;
    uStack_e8 = (undefined4)uStack_1b8;
    uStack_e4 = uStack_1b8._4_4_;
    uStack_e0 = (undefined4)uStack_1b0;
    uStack_dc = uStack_1b0._4_4_;
    func_0x048b0bc0(&uStack_2f0);
    func_0x0eaef0a0(&uStack_308,&uStack_e8,&UNK_012a2145,5,1);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f4ceca0;
    if (uStack_2f0 != (long *)0x0) {
      lVar8 = *uStack_2f0;
      uStack_2f0 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = uStack_2f0;
    }
    uStack_2f0 = plVar6;
    uStack_388 = (undefined *)CONCAT44(uStack_388._4_4_,(undefined4)uStack_2f8);
    uStack_380 = (undefined *)0x0;
    uStack_378 = 0;
    lStack_370 = 1;
    uStack_368 = 0;
    uStack_360 = &UNK_0e8508f0;
    puStack_358 = &SUB_048b06d0;
    puStack_350 = &UNK_0e84ee60;
    puStack_348 = &UNK_0eaefa50;
    puStack_340 = &UNK_0eaefc90;
    uStack_338 = (long *)((ulong)uStack_338 & 0xffffffff00000000);
    uStack_330 = 0;
    uStack_328 = (long *)0x0;
    func_0x048b05a0(plStack_300,&uStack_388);
    plVar6 = uStack_328;
    if (uStack_328 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_328 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_328 + 0x10))(uStack_328);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x0eaef360(&uStack_308);
    cStack_108 = cStack_b8;
    uStack_118 = uStack_c8;
    uStack_114 = uStack_c4;
    iStack_110 = iStack_c0;
    uStack_10c = uStack_bc;
    uStack_128 = uStack_d8;
    uStack_124 = uStack_d4;
    uStack_120 = uStack_d0;
    uStack_11c = uStack_cc;
    uStack_138 = uStack_e8;
    uStack_134 = uStack_e4;
    uStack_130 = uStack_e0;
    uStack_12c = uStack_dc;
    func_0x048b0bc0(&uStack_2f0);
    func_0x0eaef0a0(&uStack_308,&uStack_138,&UNK_011f880f,5,1);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f2cccf0;
    if (uStack_2f0 != (long *)0x0) {
      lVar8 = *uStack_2f0;
      uStack_2f0 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = uStack_2f0;
    }
    uStack_2f0 = plVar6;
    uStack_388 = (undefined *)CONCAT44(uStack_388._4_4_,(undefined4)uStack_2f8);
    uStack_380 = (undefined *)0x0;
    uStack_378 = 0;
    lStack_370 = 1;
    uStack_368 = 0;
    uStack_360 = &UNK_0d9d7be0;
    puStack_358 = &SUB_048b06d0;
    puStack_350 = &SUB_0b68b830;
    puStack_348 = &UNK_0eaefe70;
    puStack_340 = &UNK_0eaf00b0;
    uStack_338 = (long *)((ulong)uStack_338 & 0xffffffff00000000);
    uStack_330 = 0;
    uStack_328 = (long *)0x0;
    func_0x048b05a0(plStack_300,&uStack_388);
    plVar6 = uStack_328;
    if (uStack_328 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_328 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_328 + 0x10))(uStack_328);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x0eaef360(&uStack_308);
    puStack_1f8 = (undefined1 *)CONCAT71(puStack_1f8._1_7_,cStack_108);
    uStack_208 = CONCAT44(uStack_114,uStack_118);
    uStack_200 = (undefined *)CONCAT44(uStack_10c,iStack_110);
    uStack_218 = uStack_128;
    uStack_214 = uStack_124;
    uStack_210 = CONCAT44(uStack_11c,uStack_120);
    uStack_228 = CONCAT44(uStack_134,uStack_138);
    uStack_220 = (long *)CONCAT44(uStack_12c,uStack_130);
    func_0x048b0bc0(&uStack_2f0);
    func_0x0eaeeab0(&uStack_308,uStack_228 + 0x18);
    if (uStack_2f0._4_4_ == 2) {
      piVar9 = *(int **)(uStack_2f8[0xf] + 0x60);
      iVar3 = *piVar9;
      while (iVar3 != (int)uStack_2f0) {
        piVar9 = piVar9 + 0x16;
        iVar3 = *piVar9;
      }
      plVar6 = *(long **)(piVar9 + 0xc);
      while (plVar6 != plStack_300) {
        piVar9 = *(int **)(piVar9 + 0xe);
        plVar6 = *(long **)(piVar9 + 0xc);
      }
LAB_0e991d7f:
      *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 4;
    }
    else {
      if (uStack_2f0._4_4_ == 1) {
        piVar9 = *(int **)(uStack_2f8[0xf] + 0x48);
        iVar3 = *piVar9;
        while (iVar3 != (int)uStack_2f0) {
          piVar9 = piVar9 + 0x1a;
          iVar3 = *piVar9;
        }
        goto LAB_0e991d7f;
      }
      if (uStack_2f0._4_4_ == 0) {
        *(uint *)(uStack_2f8 + 3) = *(uint *)(uStack_2f8 + 3) | 0x40000;
      }
    }
    func_0x0eaef0a0(&uStack_308,&uStack_228,&UNK_01474867,0x10,0x10);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f2cccf0;
    if (uStack_2f0 != (long *)0x0) {
      lVar8 = *uStack_2f0;
      uStack_2f0 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = uStack_2f0;
    }
    uStack_2f0 = plVar6;
    uStack_388 = (undefined *)CONCAT44(uStack_388._4_4_,(undefined4)uStack_2f8);
    uStack_380 = (undefined *)0x0;
    uStack_378 = 0;
    lStack_370 = 1;
    uStack_368 = 0;
    uStack_360 = &UNK_0d9d7be0;
    puStack_358 = &SUB_048b06d0;
    puStack_350 = &SUB_0b68b830;
    puStack_348 = &UNK_0eaf0290;
    puStack_340 = &UNK_0eaf04d0;
    uStack_338 = (long *)((ulong)uStack_338 & 0xffffffff00000000);
    uStack_330 = 0;
    uStack_328 = (long *)0x0;
    func_0x048b05a0(plStack_300,&uStack_388);
    plVar6 = uStack_328;
    if (uStack_328 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_328 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_328 + 0x10))(uStack_328);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x0eaef360(&uStack_308);
    func_0x048b0bc0(&uStack_2f0);
  }
  if ((DAT_0f76c3f0 == '\0') && (iVar3 = func_0x04108328(&DAT_0f76c3f0), iVar3 != 0)) {
    func_0x0eaf0770();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f76c370,0xf53dab8);
    FUN_0410844d(&DAT_0f76c3f0);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f76c370 + 4)) * 8);
  do {
    lVar8 = *plVar6;
    if (lVar8 == -1) goto LAB_0e991f10;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f76c370 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_0e991f10:
    puVar5 = &DAT_0f76c370;
    if (iRam000000000f76c3d0 != -0x2b3da790) goto LAB_0e991f7d;
LAB_0e991f3b:
    lVar8 = *(long *)(puVar5 + 0x68);
    if (lVar8 == 0) goto LAB_0e991f7d;
    bVar14 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar10 = lVar8 + 9;
    if (bVar14) {
      lVar10 = *(long *)(lVar8 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar14) {
      uVar11 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x0eaf0c40(&uStack_1b8,param_1,lVar10,uVar11);
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    if (*(int *)(puVar5 + 0x60) == -0x2b3da790) goto LAB_0e991f3b;
LAB_0e991f7d:
    func_0x0eaf0c40(&uStack_1b8,param_1,&UNK_013c1044,0x26);
  }
  if ((char)puStack_188 == '\0') {
    func_0x0eaf17a0(&uStack_308,&uStack_1b8,&UNK_0138e8dd,5);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f0122d0;
    if (uStack_2f0 != (long *)0x0) {
      lVar8 = *uStack_2f0;
      uStack_2f0 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = uStack_2f0;
    }
    uStack_2f0 = plVar6;
    uStack_388 = (undefined *)CONCAT44(uStack_388._4_4_,(undefined4)uStack_2f8);
    uStack_380 = (undefined *)0x0;
    uStack_378 = 0;
    lStack_370 = 1;
    uStack_368 = 0;
    uStack_360 = &UNK_05de9430;
    puStack_358 = &SUB_048b06d0;
    puStack_350 = &UNK_05de9110;
    puStack_348 = &UNK_0eaf1d50;
    puStack_340 = &UNK_0eaf1ec0;
    uStack_338 = (long *)((ulong)uStack_338 & 0xffffffff00000000);
    uStack_330 = 0;
    uStack_328 = (long *)0x0;
    func_0x048b05a0(plStack_300,&uStack_388);
    plVar6 = uStack_328;
    if (uStack_328 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_328 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_328 + 0x10))(uStack_328);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x0eaf1a50(&uStack_308);
    cStack_38 = (char)puStack_188;
    uStack_48 = (undefined4)uStack_198;
    uStack_44 = uStack_198._4_4_;
    iStack_40 = (int)uStack_190;
    uStack_3c = uStack_190._4_4_;
    uStack_58 = (undefined4)uStack_1a8;
    uStack_54 = uStack_1a8._4_4_;
    uStack_50 = (undefined4)uStack_1a0;
    uStack_4c = uStack_1a0._4_4_;
    uStack_68 = uStack_1b8;
    uStack_60 = uStack_1b0;
    func_0x048b0bc0(&uStack_2f0);
    func_0x0eaf17a0(&uStack_308,&uStack_68,&UNK_0126d045,10);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f0122d0;
    if (uStack_2f0 != (long *)0x0) {
      lVar8 = *uStack_2f0;
      uStack_2f0 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = uStack_2f0;
    }
    uStack_2f0 = plVar6;
    uStack_388 = (undefined *)CONCAT44(uStack_388._4_4_,(undefined4)uStack_2f8);
    uStack_380 = (undefined *)0x0;
    uStack_378 = 0;
    lStack_370 = 1;
    uStack_368 = 0;
    uStack_360 = &UNK_05de9430;
    puStack_358 = &SUB_048b06d0;
    puStack_350 = &UNK_05de9110;
    puStack_348 = &UNK_0eaf2090;
    puStack_340 = &UNK_0eaf2200;
    uStack_338 = (long *)((ulong)uStack_338 & 0xffffffff00000000);
    uStack_330 = 0;
    uStack_328 = (long *)0x0;
    func_0x048b05a0(plStack_300,&uStack_388);
    plVar6 = uStack_328;
    if (uStack_328 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_328 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_328 + 0x10))(uStack_328);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x0eaf1a50(&uStack_308);
    cStack_78 = cStack_38;
    uStack_88 = uStack_48;
    uStack_84 = uStack_44;
    iStack_80 = iStack_40;
    uStack_7c = uStack_3c;
    uStack_98 = uStack_58;
    uStack_94 = uStack_54;
    uStack_90 = uStack_50;
    uStack_8c = uStack_4c;
    uStack_a8 = uStack_68;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    func_0x048b0bc0(&uStack_2f0);
    func_0x0eaf17a0(&uStack_308,&uStack_a8,&UNK_012ed43b,0xb);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f0122d0;
    if (uStack_2f0 != (long *)0x0) {
      lVar8 = *uStack_2f0;
      uStack_2f0 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = uStack_2f0;
    }
    uStack_2f0 = plVar6;
    uStack_388 = (undefined *)CONCAT44(uStack_388._4_4_,(undefined4)uStack_2f8);
    uStack_380 = (undefined *)0x0;
    uStack_378 = 0;
    lStack_370 = 1;
    uStack_368 = 0;
    uStack_360 = &UNK_05de9430;
    puStack_358 = &SUB_048b06d0;
    puStack_350 = &UNK_05de9110;
    puStack_348 = &UNK_0eaf23e0;
    puStack_340 = &UNK_0eaf2550;
    uStack_338 = (long *)((ulong)uStack_338 & 0xffffffff00000000);
    uStack_330 = 0;
    uStack_328 = (long *)0x0;
    func_0x048b05a0(plStack_300,&uStack_388);
    plVar6 = uStack_328;
    if (uStack_328 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_328 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_328 + 0x10))(uStack_328);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x0eaf1a50(&uStack_308);
    cStack_b8 = cStack_78;
    uStack_c8 = uStack_88;
    uStack_c4 = uStack_84;
    iStack_c0 = iStack_80;
    uStack_bc = uStack_7c;
    uStack_d8 = uStack_98;
    uStack_d4 = uStack_94;
    uStack_d0 = uStack_90;
    uStack_cc = uStack_8c;
    uStack_e8 = (undefined4)uStack_a8;
    uStack_e4 = uStack_a8._4_4_;
    uStack_e0 = uStack_a0;
    uStack_dc = uStack_9c;
    func_0x048b0bc0(&uStack_2f0);
    func_0x0eaf17a0(&uStack_308,&uStack_e8,&UNK_0137615e,5);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f0122d0;
    if (uStack_2f0 != (long *)0x0) {
      lVar8 = *uStack_2f0;
      uStack_2f0 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = uStack_2f0;
    }
    uStack_2f0 = plVar6;
    uStack_388 = (undefined *)CONCAT44(uStack_388._4_4_,(undefined4)uStack_2f8);
    uStack_380 = (undefined *)0x0;
    uStack_378 = 0;
    lStack_370 = 1;
    uStack_368 = 0;
    uStack_360 = &UNK_05de9430;
    puStack_358 = &SUB_048b06d0;
    puStack_350 = &UNK_05de9110;
    puStack_348 = &UNK_0eaf2730;
    puStack_340 = &UNK_0eaf28a0;
    uStack_338 = (long *)((ulong)uStack_338 & 0xffffffff00000000);
    uStack_330 = 0;
    uStack_328 = (long *)0x0;
    func_0x048b05a0(plStack_300,&uStack_388);
    plVar6 = uStack_328;
    if (uStack_328 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_328 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_328 + 0x10))(uStack_328);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x0eaf1a50(&uStack_308);
    cStack_108 = cStack_b8;
    uStack_118 = uStack_c8;
    uStack_114 = uStack_c4;
    iStack_110 = iStack_c0;
    uStack_10c = uStack_bc;
    uStack_128 = uStack_d8;
    uStack_124 = uStack_d4;
    uStack_120 = uStack_d0;
    uStack_11c = uStack_cc;
    uStack_138 = uStack_e8;
    uStack_134 = uStack_e4;
    uStack_130 = uStack_e0;
    uStack_12c = uStack_dc;
    func_0x048b0bc0(&uStack_2f0);
    func_0x0eaf17a0(&uStack_308,&uStack_138,&UNK_01474878,10);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f0122d0;
    if (uStack_2f0 != (long *)0x0) {
      lVar8 = *uStack_2f0;
      uStack_2f0 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = uStack_2f0;
    }
    uStack_2f0 = plVar6;
    uStack_388 = (undefined *)CONCAT44(uStack_388._4_4_,(undefined4)uStack_2f8);
    uStack_380 = (undefined *)0x0;
    uStack_378 = 0;
    lStack_370 = 1;
    uStack_368 = 0;
    uStack_360 = &UNK_05de9430;
    puStack_358 = &SUB_048b06d0;
    puStack_350 = &UNK_05de9110;
    puStack_348 = &UNK_0eaf2a80;
    puStack_340 = &UNK_0eaf2bf0;
    uStack_338 = (long *)((ulong)uStack_338 & 0xffffffff00000000);
    uStack_330 = 0;
    uStack_328 = (long *)0x0;
    func_0x048b05a0(plStack_300,&uStack_388);
    plVar6 = uStack_328;
    if (uStack_328 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_328 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_328 + 0x10))(uStack_328);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x0eaf1a50(&uStack_308);
    puStack_1f8 = (undefined1 *)CONCAT71(puStack_1f8._1_7_,cStack_108);
    uStack_208 = CONCAT44(uStack_114,uStack_118);
    uStack_200 = (undefined *)CONCAT44(uStack_10c,iStack_110);
    uStack_218 = uStack_128;
    uStack_214 = uStack_124;
    uStack_210 = CONCAT44(uStack_11c,uStack_120);
    uStack_228 = CONCAT44(uStack_134,uStack_138);
    uStack_220 = (long *)CONCAT44(uStack_12c,uStack_130);
    func_0x048b0bc0(&uStack_2f0);
    func_0x0eaf17a0(&uStack_308,&uStack_228,&UNK_01321206,0xb);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f0122d0;
    if (uStack_2f0 != (long *)0x0) {
      lVar8 = *uStack_2f0;
      uStack_2f0 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = uStack_2f0;
    }
    uStack_2f0 = plVar6;
    uStack_388 = (undefined *)CONCAT44(uStack_388._4_4_,(undefined4)uStack_2f8);
    uStack_380 = (undefined *)0x0;
    uStack_378 = 0;
    lStack_370 = 1;
    uStack_368 = 0;
    uStack_360 = &UNK_05de9430;
    puStack_358 = &SUB_048b06d0;
    puStack_350 = &UNK_05de9110;
    puStack_348 = &UNK_0eaf2dd0;
    puStack_340 = &UNK_0eaf2f40;
    uStack_338 = (long *)((ulong)uStack_338 & 0xffffffff00000000);
    uStack_330 = 0;
    uStack_328 = (long *)0x0;
    func_0x048b05a0(plStack_300,&uStack_388);
    plVar6 = uStack_328;
    if (uStack_328 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_328 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_328 + 0x10))(uStack_328);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x0eaf1a50(&uStack_308);
    func_0x048b0bc0(&uStack_2f0);
  }
  if ((DAT_0f76c4a8 == '\0') && (iVar3 = func_0x04108328(&DAT_0f76c4a8), iVar3 != 0)) {
    func_0x0eaf31e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f76c428,0xf53dab8);
    FUN_0410844d(&DAT_0f76c4a8);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f76c428 + 4)) * 8);
  do {
    lVar8 = *plVar6;
    if (lVar8 == -1) goto LAB_0e992820;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f76c428 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_0e992820:
    puVar5 = &DAT_0f76c428;
    if (iRam000000000f76c488 != -0x2b3da790) goto LAB_0e992887;
LAB_0e99284b:
    lVar8 = *(long *)(puVar5 + 0x68);
    if (lVar8 == 0) goto LAB_0e992887;
    bVar14 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar10 = lVar8 + 9;
    if (bVar14) {
      lVar10 = *(long *)(lVar8 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar14) {
      uVar11 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x0eaf3620(&uStack_388,param_1,lVar10,uVar11);
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    if (*(int *)(puVar5 + 0x60) == -0x2b3da790) goto LAB_0e99284b;
LAB_0e992887:
    func_0x0eaf3620(&uStack_388,param_1,&UNK_014dfc35,0x20);
  }
  if ((char)puStack_358 == '\0') {
    uStack_2f8._4_4_ = (uint)((ulong)uStack_2f8 >> 0x20);
    uStack_308._4_4_ = (undefined4)((ulong)uStack_308 >> 0x20);
    uStack_360 = (undefined *)0x1e1bc4d500000004;
    if ((DAT_0f76c4c8 == '\0') && (iVar3 = func_0x04108328(&DAT_0f76c4c8), iVar3 != 0)) {
      func_0x0eaf32f0();
      FUN_0410844d(&DAT_0f76c4c8);
    }
    uStack_308 = CONCAT44(uStack_308._4_4_,uStack_360._4_4_);
    plStack_300 = (long *)0x0;
    uStack_2f8 = (long *)((ulong)uStack_2f8._4_4_ << 0x20);
    uStack_2f0 = (long *)0x1;
    puStack_2e8 = &SUB_048aead0;
    puStack_2e0 = &UNK_0eaf4130;
    puStack_2d8 = &UNK_0eaf41f0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    func_0x049057f0(&uStack_380,&uStack_308);
    func_0x048aea50(&uStack_308);
    uStack_1a8 = lStack_370;
    uStack_1a0 = uStack_368;
    uStack_1b8 = uStack_380;
    uStack_1b0 = (undefined *)CONCAT44(uStack_374,uStack_378);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar7 = &UNK_0f4d87b0;
    if ((DAT_0f551bc8 == '\0') && (iVar3 = func_0x04108328(&DAT_0f551bc8), iVar3 != 0)) {
      func_0x04905be0(0xf551bb0);
      FUN_0410844d(&DAT_0f551bc8);
    }
    uStack_308 = CONCAT44(uStack_308._4_4_,_DAT_0f551bb4);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&UNK_0ef46c48;
    plStack_300 = plVar6 + 3;
    plVar6[3] = (long)puVar7;
    plVar6[4] = 0;
    *(undefined1 *)(plVar6 + 5) = 0xff;
    uStack_228 = 0;
    uStack_220 = (long *)0x0;
    uStack_2f8 = plVar6;
    func_0x048afd20(&uStack_1b8,&uStack_308);
    plVar6 = uStack_2f8;
    if (uStack_2f8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_2f8 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_2f8 + 0x10))(uStack_2f8);
        func_0x0412c2d0(plVar6);
      }
    }
    plVar6 = uStack_220;
    if (uStack_220 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_220 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_220 + 0x10))(uStack_220);
        func_0x0412c2d0(plVar6);
      }
    }
    if ((DAT_0f76c4c8 == '\0') && (iVar3 = func_0x04108328(&DAT_0f76c4c8), iVar3 != 0)) {
      func_0x0eaf32f0();
      FUN_0410844d(&DAT_0f76c4c8);
    }
    if (uStack_368._4_4_ == 2) {
      piVar9 = *(int **)(*(long *)(lStack_370 + 0x78) + 0x60);
      iVar3 = *piVar9;
      while (iVar3 != (int)uStack_368) {
        piVar9 = piVar9 + 0x16;
        iVar3 = *piVar9;
      }
      lVar8 = *(long *)(piVar9 + 0xc);
      while (lVar8 != CONCAT44(uStack_374,uStack_378)) {
        piVar9 = *(int **)(piVar9 + 0xe);
        lVar8 = *(long *)(piVar9 + 0xc);
      }
LAB_0e992b6f:
      *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 2;
    }
    else {
      if (uStack_368._4_4_ == 1) {
        piVar9 = *(int **)(*(long *)(lStack_370 + 0x78) + 0x48);
        iVar3 = *piVar9;
        while (iVar3 != (int)uStack_368) {
          piVar9 = piVar9 + 0x1a;
          iVar3 = *piVar9;
        }
        goto LAB_0e992b6f;
      }
      if (uStack_368._4_4_ == 0) {
        *(uint *)(lStack_370 + 0x18) = *(uint *)(lStack_370 + 0x18) | 0x20000;
      }
    }
    if ((DAT_0f76c4c8 == '\0') && (iVar3 = func_0x04108328(&DAT_0f76c4c8), iVar3 != 0)) {
      func_0x0eaf32f0();
      FUN_0410844d(&DAT_0f76c4c8);
    }
    uStack_308 = CONCAT44(uStack_308._4_4_,0xbf75c8f8);
    plStack_300 = (long *)0x0;
    uStack_2f8 = (long *)CONCAT44(uStack_2f8._4_4_,1);
    uStack_2f0 = (long *)0x0;
    puStack_2e8 = &UNK_0eaf06b0;
    puStack_2e0 = &SUB_048b06d0;
    puStack_2d8 = &UNK_0eaf4790;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    func_0x049057f0(&uStack_380,&uStack_308);
    func_0x048aea50(&uStack_308);
    uStack_1a8 = lStack_370;
    uStack_1a0 = uStack_368;
    uStack_1b8 = uStack_380;
    uStack_1b0 = (undefined *)CONCAT44(uStack_374,uStack_378);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar7 = &UNK_0f4d87b0;
    if ((DAT_0f551cb0 == '\0') && (iVar3 = func_0x04108328(&DAT_0f551cb0), iVar3 != 0)) {
      func_0x04905d10(0xf551c98);
      FUN_0410844d(&DAT_0f551cb0);
    }
    uStack_308 = CONCAT44(uStack_308._4_4_,_DAT_0f551c9c);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&UNK_0ef46c98;
    plStack_300 = plVar6 + 3;
    plVar6[3] = (long)puVar7;
    *(undefined1 *)(plVar6 + 4) = 0xff;
    uStack_228 = 0;
    uStack_220 = (long *)0x0;
    uStack_2f8 = plVar6;
    func_0x048afd20(&uStack_1b8,&uStack_308);
    plVar6 = uStack_2f8;
    if (uStack_2f8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_2f8 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_2f8 + 0x10))(uStack_2f8);
        func_0x0412c2d0(plVar6);
      }
    }
    plVar6 = uStack_220;
    if (uStack_220 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_220 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_220 + 0x10))(uStack_220);
        func_0x0412c2d0(plVar6);
      }
    }
  }
  if ((DAT_0f76c560 == '\0') && (iVar3 = func_0x04108328(&DAT_0f76c560), iVar3 != 0)) {
    func_0x0eaf4c40();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f76c4e0,0xf53dab8);
    FUN_0410844d(&DAT_0f76c560);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f76c4e0 + 4)) * 8);
  do {
    lVar8 = *plVar6;
    if (lVar8 == -1) goto LAB_0e992da0;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f76c4e0 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_0e992da0:
    puVar5 = &DAT_0f76c4e0;
    if (iRam000000000f76c540 != -0x2b3da790) goto LAB_0e992e07;
LAB_0e992dcb:
    lVar8 = *(long *)(puVar5 + 0x68);
    if (lVar8 == 0) goto LAB_0e992e07;
    bVar14 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar10 = lVar8 + 9;
    if (bVar14) {
      lVar10 = *(long *)(lVar8 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar14) {
      uVar11 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x0eaf52f0(&uStack_388,param_1,lVar10,uVar11);
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    if (*(int *)(puVar5 + 0x60) == -0x2b3da790) goto LAB_0e992dcb;
LAB_0e992e07:
    func_0x0eaf52f0(&uStack_388,param_1,&UNK_01357299,0x24);
  }
  if ((char)puStack_358 == '\0') {
    uStack_360 = (undefined *)0x1e1bc4d500000004;
    if ((DAT_0f76c580 == '\0') && (iVar3 = func_0x04108328(&DAT_0f76c580), iVar3 != 0)) {
      func_0x0eaf4d50();
      FUN_0410844d(&DAT_0f76c580);
    }
    uStack_308 = CONCAT44(uStack_308._4_4_,uStack_360._4_4_);
    plStack_300 = (long *)0x0;
    uStack_2f8 = (long *)((ulong)uStack_2f8 & 0xffffffff00000000);
    uStack_2f0 = (long *)0x1;
    puStack_2e8 = &SUB_048aead0;
    puStack_2e0 = &UNK_0eaf72b0;
    puStack_2d8 = &UNK_0eaf7370;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    func_0x049057f0(&uStack_380,&uStack_308);
    func_0x048aea50(&uStack_308);
    uStack_1a8 = lStack_370;
    uStack_1a0 = uStack_368;
    uStack_1b8 = uStack_380;
    uStack_1b0 = (undefined *)CONCAT44(uStack_374,uStack_378);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar7 = &UNK_0f4d88c8;
    if ((DAT_0f551bc8 == '\0') && (iVar3 = func_0x04108328(&DAT_0f551bc8), iVar3 != 0)) {
      func_0x04905be0(0xf551bb0);
      FUN_0410844d(&DAT_0f551bc8);
    }
    uStack_308 = CONCAT44(uStack_308._4_4_,_DAT_0f551bb4);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&UNK_0ef46c48;
    plStack_300 = plVar6 + 3;
    plVar6[3] = (long)puVar7;
    plVar6[4] = 0;
    *(undefined1 *)(plVar6 + 5) = 0xff;
    uStack_228 = 0;
    uStack_220 = (long *)0x0;
    uStack_2f8 = plVar6;
    func_0x048afd20(&uStack_1b8,&uStack_308);
    plVar6 = uStack_2f8;
    if (uStack_2f8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_2f8 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_2f8 + 0x10))(uStack_2f8);
        func_0x0412c2d0(plVar6);
      }
    }
    plVar6 = uStack_220;
    if (uStack_220 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_220 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_220 + 0x10))(uStack_220);
        func_0x0412c2d0(plVar6);
      }
    }
    if ((DAT_0f76c580 == '\0') && (iVar3 = func_0x04108328(&DAT_0f76c580), iVar3 != 0)) {
      func_0x0eaf4d50();
      FUN_0410844d(&DAT_0f76c580);
    }
    if (uStack_368._4_4_ == 2) {
      piVar9 = *(int **)(*(long *)(lStack_370 + 0x78) + 0x60);
      iVar3 = *piVar9;
      while (iVar3 != (int)uStack_368) {
        piVar9 = piVar9 + 0x16;
        iVar3 = *piVar9;
      }
      lVar8 = *(long *)(piVar9 + 0xc);
      while (lVar8 != CONCAT44(uStack_374,uStack_378)) {
        piVar9 = *(int **)(piVar9 + 0xe);
        lVar8 = *(long *)(piVar9 + 0xc);
      }
LAB_0e9930df:
      *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 2;
    }
    else {
      if (uStack_368._4_4_ == 1) {
        piVar9 = *(int **)(*(long *)(lStack_370 + 0x78) + 0x48);
        iVar3 = *piVar9;
        while (iVar3 != (int)uStack_368) {
          piVar9 = piVar9 + 0x1a;
          iVar3 = *piVar9;
        }
        goto LAB_0e9930df;
      }
      if (uStack_368._4_4_ == 0) {
        *(uint *)(lStack_370 + 0x18) = *(uint *)(lStack_370 + 0x18) | 0x20000;
      }
    }
    if ((DAT_0f76c580 == '\0') && (iVar3 = func_0x04108328(&DAT_0f76c580), iVar3 != 0)) {
      func_0x0eaf4d50();
      FUN_0410844d(&DAT_0f76c580);
    }
    uStack_308 = CONCAT44(uStack_308._4_4_,0xbf75c8f8);
    plStack_300 = (long *)0x0;
    uStack_2f8 = (long *)CONCAT44(uStack_2f8._4_4_,1);
    uStack_2f0 = (long *)0x0;
    puStack_2e8 = &UNK_0eaf78b0;
    puStack_2e0 = &SUB_048b06d0;
    puStack_2d8 = &UNK_0eafa270;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    func_0x049057f0(&uStack_380,&uStack_308);
    func_0x048aea50(&uStack_308);
    uStack_1a8 = lStack_370;
    uStack_1a0 = uStack_368;
    uStack_1b8 = uStack_380;
    uStack_1b0 = (undefined *)CONCAT44(uStack_374,uStack_378);
    puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar7 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar7 = &UNK_0f4d88c8;
    if ((DAT_0f551cb0 == '\0') && (iVar3 = func_0x04108328(&DAT_0f551cb0), iVar3 != 0)) {
      func_0x04905d10(0xf551c98);
      FUN_0410844d(&DAT_0f551cb0);
    }
    uStack_308 = CONCAT44(uStack_308._4_4_,_DAT_0f551c9c);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&UNK_0ef46c98;
    plStack_300 = plVar6 + 3;
    plVar6[3] = (long)puVar7;
    *(undefined1 *)(plVar6 + 4) = 0xff;
    uStack_228 = 0;
    uStack_220 = (long *)0x0;
    uStack_2f8 = plVar6;
    func_0x048afd20(&uStack_1b8,&uStack_308);
    plVar6 = uStack_2f8;
    if (uStack_2f8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_2f8 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_2f8 + 0x10))(uStack_2f8);
        func_0x0412c2d0(plVar6);
      }
    }
    plVar6 = uStack_220;
    if (uStack_220 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_220 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_220 + 0x10))(uStack_220);
        func_0x0412c2d0(plVar6);
      }
    }
  }
  if ((DAT_0f76c338 == '\0') && (iVar3 = func_0x04108328(&DAT_0f76c338), iVar3 != 0)) {
    func_0x0eae9e20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f76c2b8,0xf53dab8);
    FUN_0410844d(&DAT_0f76c338);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f76c2b8 + 4)) * 8);
  do {
    lVar8 = *plVar6;
    if (lVar8 == -1) goto LAB_0e993310;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f76c2b8 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_0e993310:
    puVar5 = &DAT_0f76c2b8;
    if (iRam000000000f76c318 != -0x2b3da790) goto LAB_0e99337d;
LAB_0e99333b:
    lVar8 = *(long *)(puVar5 + 0x68);
    if (lVar8 == 0) goto LAB_0e99337d;
    bVar14 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar10 = lVar8 + 9;
    if (bVar14) {
      lVar10 = *(long *)(lVar8 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar14) {
      uVar11 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x0eafd9f0(&uStack_138,param_1,lVar10,uVar11);
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    if (*(int *)(puVar5 + 0x60) == -0x2b3da790) goto LAB_0e99333b;
LAB_0e99337d:
    func_0x0eafd9f0(&uStack_138,param_1,&UNK_0126d050,0x1b);
  }
  if (cStack_108 == '\0') {
    func_0x0eafe560(&uStack_308,&uStack_138,&UNK_0142a5c6,4);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0ef44b00;
    if (uStack_2f0 != (long *)0x0) {
      lVar8 = *uStack_2f0;
      uStack_2f0 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = uStack_2f0;
    }
    uStack_2f0 = plVar6;
    uStack_388 = (undefined *)CONCAT44(uStack_388._4_4_,(undefined4)uStack_2f8);
    uStack_380 = (undefined *)0x0;
    uStack_378 = 0;
    lStack_370 = 1;
    uStack_368 = 0;
    uStack_360 = &UNK_048b3f30;
    puStack_358 = &SUB_048b06d0;
    puStack_350 = &SUB_048b2190;
    puStack_348 = &UNK_0eafeae0;
    puStack_340 = &UNK_0eafecb0;
    uStack_338 = (long *)((ulong)uStack_338 & 0xffffffff00000000);
    uStack_330 = 0;
    uStack_328 = (long *)0x0;
    func_0x048b05a0(plStack_300,&uStack_388);
    plVar6 = uStack_328;
    if (uStack_328 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_328 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_328 + 0x10))(uStack_328);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x0eafe7e0(&uStack_308);
    cVar2 = cStack_108;
    uVar13 = uStack_10c;
    iVar3 = iStack_110;
    puVar5 = (undefined *)CONCAT44(uStack_134,uStack_138);
    uStack_68 = (undefined *)CONCAT44(uStack_12c,uStack_130);
    uStack_60 = (undefined *)CONCAT44(uStack_124,uStack_128);
    uStack_58 = uStack_120;
    uStack_54 = uStack_11c;
    uStack_50 = uStack_118;
    uStack_4c = uStack_114;
    func_0x048b0bc0(&uStack_2f0);
    uStack_198 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    plStack_158 = (long *)0x0;
    puStack_170 = (undefined *)0x0;
    plStack_168 = (long *)0x0;
    puStack_180 = (undefined *)0x0;
    puStack_178 = (undefined *)0x0;
    uStack_190 = (undefined *)0x0;
    puStack_188 = (undefined1 *)0x0;
    uStack_140 = 0;
    uStack_1b0 = (undefined *)0xffffffffffffffff;
    uStack_1a8 = 0;
    uStack_1a0 = 0xff;
    uStack_1b8 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_198);
    uStack_190 = (undefined *)func_0x041681f0(&uStack_198,0xf547a30);
    puStack_188 = (undefined1 *)func_0x041681f0(&uStack_198,0xf547770);
    puStack_180 = (undefined *)0x0;
    puStack_178 = (undefined *)0x0;
    puStack_170 = (undefined *)0x0;
    plStack_168 = (long *)0x0;
    uStack_160 = 0;
    plStack_158 = (long *)0x0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    bStack_100 = 0x1c;
    uStack_ff = 0x65697a65625e;
    uStack_f9 = 0x72;
    uStack_f8 = 0x5f;
    uStack_f7 = 0x246e69616863;
    uStack_f1 = 0;
    func_0x0ed60210(&uStack_1b8,&bStack_100,0);
    lStack_370 = CONCAT71(lStack_370._1_7_,(undefined1)uStack_1a0);
    uStack_380 = uStack_1b0;
    uStack_378 = (undefined4)uStack_1a8;
    uStack_374 = uStack_1a8._4_4_;
    uStack_388 = &UNK_0f4e3c70;
    func_0x04167a20(&uStack_368,&uStack_198);
    uStack_360 = uStack_190;
    puStack_358 = puStack_188;
    puStack_350 = puStack_180;
    puStack_348 = puStack_178;
    puStack_340 = puStack_170;
    uStack_338 = plStack_168;
    if (plStack_168 != (long *)0x0) {
      LOCK();
      plStack_168[1] = plStack_168[1] + 1;
      UNLOCK();
    }
    uStack_330 = uStack_160;
    if (((ulong)plStack_158 & 1) == 0) {
      uStack_318 = uStack_148;
      uStack_328 = plStack_158;
      uStack_320 = uStack_150;
    }
    else {
      func_0x0412e5e0(&uStack_328,uStack_148,uStack_150);
    }
    uStack_310 = uStack_140;
    if (iVar3 == 4) {
      if ((DAT_0f76c338 == '\0') && (iVar4 = func_0x04108328(&DAT_0f76c338), iVar4 != 0)) {
        func_0x0eae9e20();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f76c2b8,0xf53dab8);
        FUN_0410844d(&DAT_0f76c338);
      }
      plVar6 = (long *)(*(long *)(puVar5 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(puVar5 + 0x20) - *(long *)(puVar5 + 0x18)) >>
                                    3) - 1U & *(uint *)(_DAT_0f76c2b8 + 4)) * 8);
      do {
        lVar8 = *plVar6;
        if (lVar8 == -1) goto LAB_0e993808;
        plVar6 = (long *)(*(long *)(puVar5 + 0x30) + lVar8 * 0x18);
      } while (*(uint *)(*(long *)(puVar5 + 0x30) + 8 + lVar8 * 0x18) !=
               *(uint *)(_DAT_0f76c2b8 + 4));
      if (plVar6 == *(long **)(puVar5 + 0x38)) {
LAB_0e993808:
        puVar12 = &DAT_0f76c2b8;
      }
      else {
        puVar12 = (undefined *)plVar6[2];
      }
      uStack_22c = uVar13;
      lVar8 = FUN_048b1040(puVar5 + 0x18,puVar12,uVar13,1);
      if (lVar8 == 0) {
        uStack_308 = 0;
        plStack_300 = (long *)0x0;
        func_0x048b10d0(&uStack_308);
        lVar10 = *(long *)(uStack_308 + 0x38);
        lVar8 = uStack_308;
        if (lVar10 == 0) goto LAB_0e9943c4;
LAB_0e9943e9:
        do {
          lVar8 = lVar10;
          lVar10 = *(long *)(lVar8 + 0x38);
          if (*(long *)(lVar8 + 0x38) == 0) {
            uStack_308 = 0;
            plStack_300 = (long *)0x0;
            func_0x048b10d0(&uStack_308);
            lVar10 = uStack_308;
          }
        } while (lVar10 != 0);
      }
      else {
        lVar10 = *(long *)(lVar8 + 0x38);
        if (*(long *)(lVar8 + 0x38) != 0) goto LAB_0e9943e9;
LAB_0e9943c4:
        uStack_308 = 0;
        plStack_300 = (long *)0x0;
        func_0x048b10d0(&uStack_308);
        lVar10 = uStack_308;
        if (uStack_308 != 0) goto LAB_0e9943e9;
      }
      lStack_70 = *(long *)(lVar8 + 0x48);
      puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar7 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      *(undefined1 *)(puVar7 + 3) = (undefined1)lStack_370;
      *(undefined4 *)(puVar7 + 1) = (undefined4)uStack_380;
      *(undefined4 *)((long)puVar7 + 0xc) = uStack_380._4_4_;
      *(undefined4 *)(puVar7 + 2) = uStack_378;
      *(undefined4 *)((long)puVar7 + 0x14) = uStack_374;
      *puVar7 = &UNK_0f4e3c70;
      func_0x04167a20(puVar7 + 4,&uStack_368);
      puVar7[5] = uStack_360;
      puVar7[6] = puStack_358;
      puVar7[7] = puStack_350;
      puVar7[8] = puStack_348;
      puVar7[9] = puStack_340;
      puVar7[10] = uStack_338;
      puVar7[0xb] = uStack_330;
      puVar7[0xe] = uStack_318;
      *(undefined4 *)(puVar7 + 0xc) = (undefined4)uStack_328;
      *(undefined4 *)((long)puVar7 + 100) = uStack_328._4_4_;
      *(undefined4 *)(puVar7 + 0xd) = (undefined4)uStack_320;
      *(undefined4 *)((long)puVar7 + 0x6c) = uStack_320._4_4_;
      puVar7[0xf] = uStack_310;
      plVar6 = *(long **)(lStack_70 + 8);
      *(undefined8 **)(lStack_70 + 8) = puVar7;
      uVar13 = uStack_22c;
joined_r0x0e994511:
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_328 = (long *)0x0;
      uStack_338 = (long *)0x0;
      puStack_340 = (undefined *)0x0;
      uStack_22c = uVar13;
      if (plVar6 != (long *)0x0) {
        uStack_318 = 0;
        uStack_320 = 0;
        uStack_328 = (long *)0x0;
        uStack_338 = (long *)0x0;
        puStack_340 = (undefined *)0x0;
        (**(code **)(*plVar6 + 0x28))();
      }
    }
    else if (iVar3 == 1) {
      if ((DAT_0f76c338 == '\0') && (iVar4 = func_0x04108328(&DAT_0f76c338), iVar4 != 0)) {
        func_0x0eae9e20();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f76c2b8,0xf53dab8);
        FUN_0410844d(&DAT_0f76c338);
      }
      plVar6 = (long *)(*(long *)(puVar5 + 0x18) +
                       (ulong)((int)((ulong)(*(long *)(puVar5 + 0x20) - *(long *)(puVar5 + 0x18)) >>
                                    3) - 1U & *(uint *)(_DAT_0f76c2b8 + 4)) * 8);
      do {
        lVar8 = *plVar6;
        if (lVar8 == -1) goto LAB_0e993788;
        plVar6 = (long *)(*(long *)(puVar5 + 0x30) + lVar8 * 0x18);
      } while (*(uint *)(*(long *)(puVar5 + 0x30) + 8 + lVar8 * 0x18) !=
               *(uint *)(_DAT_0f76c2b8 + 4));
      if (plVar6 == *(long **)(puVar5 + 0x38)) {
LAB_0e993788:
        puVar12 = &DAT_0f76c2b8;
      }
      else {
        puVar12 = (undefined *)plVar6[2];
      }
      uStack_22c = uVar13;
      lVar8 = func_0x048b0c90(puVar5 + 0x18,puVar12,uVar13,1);
      if (lVar8 == 0) {
        uStack_308 = 0;
        plStack_300 = (long *)0x0;
        func_0x048b0d20(&uStack_308);
        lVar8 = uStack_308;
      }
      lVar8 = *(long *)(lVar8 + 0x58);
      puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar7 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      *(undefined1 *)(puVar7 + 3) = (undefined1)lStack_370;
      *(undefined4 *)(puVar7 + 1) = (undefined4)uStack_380;
      *(undefined4 *)((long)puVar7 + 0xc) = uStack_380._4_4_;
      *(undefined4 *)(puVar7 + 2) = uStack_378;
      *(undefined4 *)((long)puVar7 + 0x14) = uStack_374;
      *puVar7 = &UNK_0f4e3c70;
      func_0x04167a20(puVar7 + 4,&uStack_368);
      puVar7[5] = uStack_360;
      puVar7[6] = puStack_358;
      puVar7[7] = puStack_350;
      puVar7[8] = puStack_348;
      puVar7[9] = puStack_340;
      puVar7[10] = uStack_338;
      puVar7[0xb] = uStack_330;
      puVar7[0xe] = uStack_318;
      *(undefined4 *)(puVar7 + 0xc) = (undefined4)uStack_328;
      *(undefined4 *)((long)puVar7 + 100) = uStack_328._4_4_;
      *(undefined4 *)(puVar7 + 0xd) = (undefined4)uStack_320;
      *(undefined4 *)((long)puVar7 + 0x6c) = uStack_320._4_4_;
      puVar7[0xf] = uStack_310;
      plVar6 = *(long **)(lVar8 + 8);
      *(undefined8 **)(lVar8 + 8) = puVar7;
      uVar13 = uStack_22c;
      goto joined_r0x0e994511;
    }
    uStack_a0 = (undefined4)uStack_68;
    uStack_9c = uStack_68._4_4_;
    uStack_98 = (undefined4)uStack_60;
    uStack_94 = uStack_60._4_4_;
    uStack_90 = uStack_58;
    uStack_8c = uStack_54;
    uStack_88 = uStack_50;
    uStack_84 = uStack_4c;
    iStack_80 = iVar3;
    cStack_78 = cVar2;
    uStack_a8 = puVar5;
    uStack_7c = uVar13;
    func_0x0eafe560(&uStack_308,&uStack_a8,&UNK_012a2145,5);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f4d8aa0;
    if (uStack_2f0 != (long *)0x0) {
      lVar8 = *uStack_2f0;
      uStack_2f0 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = uStack_2f0;
    }
    uStack_2f0 = plVar6;
    uStack_228 = CONCAT44(uStack_228._4_4_,(undefined4)uStack_2f8);
    uStack_220 = (long *)0x0;
    uStack_218 = 0;
    uStack_210 = 1;
    uStack_208 = 0;
    uStack_200 = &UNK_0eaff0c0;
    puStack_1f8 = &SUB_048b06d0;
    puStack_1f0 = &UNK_0eaf4b80;
    puStack_1e8 = &UNK_0eaff180;
    puStack_1e0 = &UNK_0eaff3c0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    plStack_1c8 = (long *)0x0;
    func_0x048b05a0(plStack_300,&uStack_228);
    plVar6 = plStack_1c8;
    if (plStack_1c8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1c8 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x0eafe7e0(&uStack_308);
    cStack_b8 = cStack_78;
    uStack_c8 = uStack_88;
    uStack_c4 = uStack_84;
    iStack_c0 = iStack_80;
    uStack_bc = uStack_7c;
    uStack_d8 = uStack_98;
    uStack_d4 = uStack_94;
    uStack_d0 = uStack_90;
    uStack_cc = uStack_8c;
    uStack_e8 = (undefined4)uStack_a8;
    uStack_e4 = uStack_a8._4_4_;
    uStack_e0 = uStack_a0;
    uStack_dc = uStack_9c;
    func_0x048b0bc0(&uStack_2f0);
    func_0x0eafe560(&uStack_308,&uStack_e8,&UNK_011f880f,5);
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar6 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar6 = (long)&UNK_0f2cccf0;
    if (uStack_2f0 != (long *)0x0) {
      lVar8 = *uStack_2f0;
      uStack_2f0 = plVar6;
      (**(code **)(lVar8 + 8))();
      plVar6 = uStack_2f0;
    }
    uStack_2f0 = plVar6;
    uStack_228 = CONCAT44(uStack_228._4_4_,(undefined4)uStack_2f8);
    uStack_220 = (long *)0x0;
    uStack_218 = 0;
    uStack_210 = 1;
    uStack_208 = 0;
    uStack_200 = &UNK_0d9d7be0;
    puStack_1f8 = &SUB_048b06d0;
    puStack_1f0 = &SUB_0b68b830;
    puStack_1e8 = &UNK_0eaff840;
    puStack_1e0 = &UNK_0eaffa80;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    plStack_1c8 = (long *)0x0;
    func_0x048b05a0(plStack_300,&uStack_228);
    plVar6 = plStack_1c8;
    if (plStack_1c8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_1c8 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x0eafe7e0(&uStack_308);
    func_0x048b0bc0(&uStack_2f0);
    uStack_388 = &UNK_0f4e3c70;
    if (((ulong)uStack_328 & 1) != 0) {
      func_0x0412a280(uStack_318,(ulong)uStack_328 & 0xfffffffffffffffe);
    }
    plVar6 = uStack_338;
    if (uStack_338 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_338 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*uStack_338 + 0x10))(uStack_338);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x04167a40(&uStack_368);
    if ((bStack_100 & 1) == 0) {
      if (((ulong)plStack_158 & 1) == 0) goto LAB_0e993d57;
LAB_0e993d98:
      uStack_1b8 = &UNK_0f4e3c70;
      func_0x0412a280(uStack_148,(ulong)plStack_158 & 0xfffffffffffffffe);
      plVar6 = plStack_168;
    }
    else {
      func_0x0412a280(uStack_f0,
                      CONCAT17(uStack_f9,CONCAT61(uStack_ff,bStack_100)) & 0xfffffffffffffffe);
      if (((ulong)plStack_158 & 1) != 0) goto LAB_0e993d98;
LAB_0e993d57:
      uStack_1b8 = &UNK_0f4e3c70;
      plVar6 = plStack_168;
    }
    plStack_168 = plVar6;
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x0412c2d0(plVar6);
      }
    }
    func_0x04167a40(&uStack_198);
  }
  if ((DAT_0f76c110 == '\0') && (iVar3 = func_0x04108328(&DAT_0f76c110), iVar3 != 0)) {
    func_0x0eae6770();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f76c090,0xf53dab8);
    FUN_0410844d(&DAT_0f76c110);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f76c090 + 4)) * 8);
  do {
    lVar8 = *plVar6;
    if (lVar8 == -1) goto LAB_0e993e50;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f76c090 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_0e993e50:
    puVar5 = &DAT_0f76c090;
    if (iRam000000000f76c0f0 != -0x2b3da790) goto LAB_0e993eb7;
LAB_0e993e7b:
    lVar8 = *(long *)(puVar5 + 0x68);
    if (lVar8 == 0) goto LAB_0e993eb7;
    bVar14 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar10 = lVar8 + 9;
    if (bVar14) {
      lVar10 = *(long *)(lVar8 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar14) {
      uVar11 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x0eae7530(&uStack_388,param_1,lVar10,uVar11);
  }
  else {
    puVar5 = (undefined *)plVar6[2];
    if (*(int *)(puVar5 + 0x60) == -0x2b3da790) goto LAB_0e993e7b;
LAB_0e993eb7:
    func_0x0eae7530(&uStack_388,param_1,&UNK_014c497e,0xe);
  }
  if ((char)puStack_358 != '\0') {
    return;
  }
  uStack_360 = (undefined *)0x1e1bc4d500000004;
  if ((DAT_0f76c130 == '\0') && (iVar3 = func_0x04108328(&DAT_0f76c130), iVar3 != 0)) {
    func_0x0eae6880();
    FUN_0410844d(&DAT_0f76c130);
  }
  uStack_308 = CONCAT44(uStack_308._4_4_,uStack_360._4_4_);
  plStack_300 = (long *)0x0;
  uStack_2f8 = (long *)((ulong)uStack_2f8 & 0xffffffff00000000);
  uStack_2f0 = (long *)0x1;
  puStack_2e8 = &SUB_048aead0;
  puStack_2e0 = &UNK_0eae80a0;
  puStack_2d8 = &UNK_0eae8160;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  func_0x049057f0(&uStack_380,&uStack_308);
  func_0x048aea50(&uStack_308);
  uStack_1a8 = lStack_370;
  uStack_1a0 = uStack_368;
  uStack_1b8 = uStack_380;
  uStack_1b0 = (undefined *)CONCAT44(uStack_374,uStack_378);
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar7 = &UNK_0f4d84c0;
  if ((DAT_0f551bc8 == '\0') && (iVar3 = func_0x04108328(&DAT_0f551bc8), iVar3 != 0)) {
    func_0x04905be0(0xf551bb0);
    FUN_0410844d(&DAT_0f551bc8);
  }
  uStack_308 = CONCAT44(uStack_308._4_4_,_DAT_0f551bb4);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef46c48;
  plStack_300 = plVar6 + 3;
  plVar6[3] = (long)puVar7;
  plVar6[4] = 0;
  *(undefined1 *)(plVar6 + 5) = 0xff;
  uStack_228 = 0;
  uStack_220 = (long *)0x0;
  uStack_2f8 = plVar6;
  func_0x048afd20(&uStack_1b8,&uStack_308);
  plVar6 = uStack_2f8;
  if (uStack_2f8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_2f8 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*uStack_2f8 + 0x10))(uStack_2f8);
      func_0x0412c2d0(plVar6);
    }
  }
  plVar6 = uStack_220;
  if (uStack_220 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_220 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*uStack_220 + 0x10))(uStack_220);
      func_0x0412c2d0(plVar6);
    }
  }
  if ((DAT_0f76c130 == '\0') && (iVar3 = func_0x04108328(&DAT_0f76c130), iVar3 != 0)) {
    func_0x0eae6880();
    FUN_0410844d(&DAT_0f76c130);
  }
  if (uStack_368._4_4_ == 2) {
    piVar9 = *(int **)(*(long *)(lStack_370 + 0x78) + 0x60);
    iVar3 = *piVar9;
    while (iVar3 != (int)uStack_368) {
      piVar9 = piVar9 + 0x16;
      iVar3 = *piVar9;
    }
    lVar8 = *(long *)(piVar9 + 0xc);
    while (lVar8 != CONCAT44(uStack_374,uStack_378)) {
      piVar9 = *(int **)(piVar9 + 0xe);
      lVar8 = *(long *)(piVar9 + 0xc);
    }
  }
  else {
    if (uStack_368._4_4_ != 1) {
      if (uStack_368._4_4_ == 0) {
        *(uint *)(lStack_370 + 0x18) = *(uint *)(lStack_370 + 0x18) | 0x20000;
      }
      goto LAB_0e994133;
    }
    piVar9 = *(int **)(*(long *)(lStack_370 + 0x78) + 0x48);
    iVar3 = *piVar9;
    while (iVar3 != (int)uStack_368) {
      piVar9 = piVar9 + 0x1a;
      iVar3 = *piVar9;
    }
  }
  *(byte *)((long)piVar9 + 0x12) = *(byte *)((long)piVar9 + 0x12) | 2;
LAB_0e994133:
  if ((DAT_0f76c130 == '\0') && (iVar3 = func_0x04108328(&DAT_0f76c130), iVar3 != 0)) {
    func_0x0eae6880();
    FUN_0410844d(&DAT_0f76c130);
  }
  uStack_308 = CONCAT44(uStack_308._4_4_,0xbf75c8f8);
  plStack_300 = (long *)0x0;
  uStack_2f8 = (long *)CONCAT44(uStack_2f8._4_4_,1);
  uStack_2f0 = (long *)0x0;
  puStack_2e8 = &UNK_0eae8550;
  puStack_2e0 = &SUB_048b06d0;
  puStack_2d8 = &UNK_0eaea5b0;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  func_0x049057f0(&uStack_380,&uStack_308);
  func_0x048aea50(&uStack_308);
  uStack_1a8 = lStack_370;
  uStack_1a0 = uStack_368;
  uStack_1b8 = uStack_380;
  uStack_1b0 = (undefined *)CONCAT44(uStack_374,uStack_378);
  puVar7 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar7 = &UNK_0f4d84c0;
  if ((DAT_0f551cb0 == '\0') && (iVar3 = func_0x04108328(&DAT_0f551cb0), iVar3 != 0)) {
    func_0x04905d10(0xf551c98);
    FUN_0410844d(&DAT_0f551cb0);
  }
  uStack_308 = CONCAT44(uStack_308._4_4_,_DAT_0f551c9c);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef46c98;
  plStack_300 = plVar6 + 3;
  plVar6[3] = (long)puVar7;
  *(undefined1 *)(plVar6 + 4) = 0xff;
  uStack_228 = 0;
  uStack_220 = (long *)0x0;
  uStack_2f8 = plVar6;
  func_0x048afd20(&uStack_1b8,&uStack_308);
  plVar6 = uStack_2f8;
  if (uStack_2f8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_2f8 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*uStack_2f8 + 0x10))(uStack_2f8);
      func_0x0412c2d0(plVar6);
    }
  }
  plVar6 = uStack_220;
  if (uStack_220 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_220 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*uStack_220 + 0x10))(uStack_220);
      func_0x0412c2d0(plVar6);
    }
  }
  return;
}


