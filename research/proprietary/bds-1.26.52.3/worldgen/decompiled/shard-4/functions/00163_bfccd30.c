/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc0ccd30 (ELF vaddr 0xbfccd30)
 * Label: caller-of-callee
 * Body:  [[0c0ccd30, 0c0cddc8] [0c0cddd0, 0c0cde12] [0c0cde20, 0c0d0a11]]
 * Ghidra: FUN_0c0ccd30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c0ccd30(long param_1,undefined8 param_2,ulong *param_3)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  int *piVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  undefined8 *puVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  long *plStack_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  long *plStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 *puStack_370;
  undefined1 *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined4 uStack_350;
  undefined1 auStack_348 [16];
  long lStack_338;
  long *plStack_330;
  long *plStack_328;
  undefined8 uStack_320;
  code *pcStack_318;
  undefined1 *puStack_310;
  undefined1 *puStack_308;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_268 [8];
  long *plStack_260;
  long *plStack_258;
  code *pcStack_250;
  code *pcStack_248;
  undefined4 uStack_240;
  uint uStack_23c;
  char cStack_238;
  long lStack_228;
  long *plStack_220;
  long *plStack_218;
  code *pcStack_210;
  code *pcStack_208;
  undefined1 *puStack_200;
  undefined8 uStack_1f8;
  long lStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  code *pcStack_1d0;
  code *pcStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1a8;
  ulong uStack_1a0;
  long *plStack_198;
  char cStack_190;
  ulong uStack_188;
  ulong uStack_180;
  long *plStack_178;
  char cStack_170;
  long lStack_168;
  long *plStack_160;
  long *plStack_158;
  code *pcStack_150;
  code *pcStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long *plStack_120;
  long *plStack_118;
  code *pcStack_110;
  code *pcStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  code *pcStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  ulong auStack_58 [2];
  undefined *puStack_48;
  code *pcStack_40;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  uStack_1a8 = uStack_1a8 & 0xffffffffffffff00;
  cStack_190 = '\0';
  if ((char)param_3[3] == '\x01') {
    uStack_1a8 = *param_3;
    uStack_1a0 = 0;
    uVar18 = param_3[1];
    if ((uVar18 & 0x80000000000000) != 0) {
      lVar13 = *(long *)((uVar18 & 0xff00ffffffffffff) - 8);
      lVar12 = lVar13 + 9;
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
      if (lVar12 != 0 && plVar8 == (long *)0x0) {
        func_0x0eec74c0(lVar12,8);
      }
      *plVar8 = lVar13;
      func_0x0eee2f00(plVar8 + 1,uVar18 & 0xff00ffffffffffff,lVar13);
      *(undefined1 *)((long)plVar8 + lVar13 + 8) = 0;
      uVar18 = (ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    plStack_198 = (long *)0x0;
    plVar8 = (long *)param_3[2];
    uStack_1a0 = uVar18;
    if (((ulong)plVar8 & 0x80000000000000) != 0) {
      lVar13 = *(long *)(((ulong)plVar8 & 0xff00ffffffffffff) - 8);
      lVar12 = lVar13 + 9;
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
      if (lVar12 != 0 && plVar9 == (long *)0x0) {
        func_0x0eec74c0(lVar12,8);
      }
      *plVar9 = lVar13;
      func_0x0eee2f00(plVar9 + 1,(ulong)plVar8 & 0xff00ffffffffffff,lVar13);
      *(undefined1 *)((long)plVar9 + lVar13 + 8) = 0;
      plVar8 = (long *)((ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    cStack_190 = '\x01';
    plStack_198 = plVar8;
  }
  if ((DAT_0f6d64c0 == '\0') && (iVar6 = FUN_04108328(&DAT_0f6d64c0), iVar6 != 0)) {
    func_0x0c126ae0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f6d6440,0xf53dab8);
    func_0x0410844d(&DAT_0f6d64c0);
  }
  lStack_130 = param_1 + 0x18;
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f6d6440 + 4)) * 8);
  do {
    lVar12 = *plVar8;
    if (lVar12 == -1) goto LAB_0c0ccf40;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f6d6440 + 4))
  ;
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_0c0ccf40:
    puVar10 = &DAT_0f6d6440;
    if (iRam000000000f6d64a0 != -0x2b3da790) goto LAB_0c0ccfad;
LAB_0c0ccf6b:
    lVar12 = *(long *)(puVar10 + 0x68);
    if (lVar12 == 0) goto LAB_0c0ccfad;
    bVar20 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar13 = lVar12 + 9;
    if (bVar20) {
      lVar13 = *(long *)(lVar12 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar20) {
      uVar18 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x0c1270e0(auStack_268,param_1,lVar13,uVar18);
  }
  else {
    puVar10 = (undefined *)plVar8[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0c0ccf6b;
LAB_0c0ccfad:
    func_0x0c1270e0(auStack_268,param_1,0,0);
  }
  if (cStack_238 == '\0') {
    func_0x0c127c80(&lStack_338,auStack_268,&UNK_014ae949,4,1);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f0eb460;
    if (uStack_320 != (long *)0x0) {
      lVar12 = *uStack_320;
      uStack_320 = plVar8;
      (**(code **)(lVar12 + 8))();
      plVar8 = uStack_320;
    }
    uStack_320 = plVar8;
    uStack_3a0 = plStack_328._0_4_;
    plStack_398 = (long *)0x0;
    uStack_390 = 0;
    plStack_388 = (long *)0x1;
    uStack_380 = (code *)0x0;
    uStack_378 = &UNK_07912090;
    puStack_370 = &SUB_048b06d0;
    puStack_368 = &SUB_07911dc0;
    puStack_360 = &UNK_0c128240;
    puStack_358 = &UNK_0c128400;
    uStack_350 = 0;
    auStack_348 = ZEXT816(0);
    func_0x048b05a0(plStack_330,&uStack_3a0);
    uVar4 = auStack_348._8_8_;
    if ((long *)auStack_348._8_8_ != (long *)0x0) {
      LOCK();
      plVar8 = (long *)(auStack_348._8_8_ + 8);
      lVar12 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_348._8_8_ + 0x10))(auStack_348._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c127f40(&lStack_338);
    puStack_f8 = (undefined1 *)CONCAT71(puStack_f8._1_7_,cStack_238);
    puStack_100 = (undefined1 *)CONCAT44(uStack_23c,uStack_240);
    pcStack_108 = pcStack_248;
    plStack_118 = plStack_258;
    pcStack_110 = pcStack_250;
    lStack_128 = (long)auStack_268;
    plStack_120 = plStack_260;
    func_0x048b0bc0(&uStack_320);
    lStack_e8 = lStack_128;
    plStack_e0 = plStack_120;
    plStack_d8 = plStack_118;
    pcStack_d0 = pcStack_110;
    pcStack_c8 = pcStack_108;
    puStack_c0 = puStack_100;
    uStack_b8 = puStack_f8;
    func_0x0c1276d0(&lStack_338,lStack_128 + 0x18);
    if (uStack_320._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)plStack_328 + 0x78) + 0x60);
      iVar6 = *piVar15;
      while (iVar6 != (int)uStack_320) {
        piVar15 = piVar15 + 0x16;
        iVar6 = *piVar15;
      }
      lVar12 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar12 != plStack_330) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar12 = *(long *)(piVar15 + 0xc);
      }
LAB_0c0cd1ff:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_320._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)plStack_328 + 0x78) + 0x48);
        iVar6 = *piVar15;
        while (iVar6 != (int)uStack_320) {
          piVar15 = piVar15 + 0x1a;
          iVar6 = *piVar15;
        }
        goto LAB_0c0cd1ff;
      }
      if (uStack_320._4_4_ == 0) {
        *(uint *)((long)plStack_328 + 0x18) = *(uint *)((long)plStack_328 + 0x18) | 0x40000;
      }
    }
    func_0x0c127c80(&lStack_338,&lStack_e8,&UNK_01232585,0xb,0x10);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef46ef8;
    if (uStack_320 != (long *)0x0) {
      lVar12 = *uStack_320;
      uStack_320 = plVar8;
      (**(code **)(lVar12 + 8))();
      plVar8 = uStack_320;
    }
    uStack_320 = plVar8;
    uStack_3a0 = plStack_328._0_4_;
    plStack_398 = (long *)0x0;
    uStack_390 = 0;
    plStack_388 = (long *)0x1;
    uStack_380 = (code *)0x0;
    uStack_378 = &UNK_04906f70;
    puStack_370 = &SUB_048b06d0;
    puStack_368 = &SUB_04906c50;
    puStack_360 = &UNK_0c1285d0;
    puStack_358 = &UNK_0c128730;
    uStack_350 = 0;
    auStack_348 = ZEXT816(0);
    func_0x048b05a0(plStack_330,&uStack_3a0);
    uVar4 = auStack_348._8_8_;
    if ((long *)auStack_348._8_8_ != (long *)0x0) {
      LOCK();
      plVar8 = (long *)(auStack_348._8_8_ + 8);
      lVar12 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_348._8_8_ + 0x10))(auStack_348._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c127f40(&lStack_338);
    uStack_78 = CONCAT71(uStack_78._1_7_,(undefined1)uStack_b8);
    pcStack_88 = pcStack_c8;
    puStack_80 = puStack_c0;
    plStack_98 = plStack_d8;
    pcStack_90 = pcStack_d0;
    lStack_a8 = lStack_e8;
    plStack_a0 = plStack_e0;
    func_0x048b0bc0(&uStack_320);
    lStack_228 = lStack_a8;
    plStack_220 = plStack_a0;
    plStack_218 = plStack_98;
    pcStack_210 = pcStack_90;
    pcStack_208 = pcStack_88;
    puStack_200 = puStack_80;
    uStack_1f8 = uStack_78;
    func_0x0c1276d0(&lStack_338,lStack_a8 + 0x18);
    if (uStack_320._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)plStack_328 + 0x78) + 0x60);
      iVar6 = *piVar15;
      while (iVar6 != (int)uStack_320) {
        piVar15 = piVar15 + 0x16;
        iVar6 = *piVar15;
      }
      lVar12 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar12 != plStack_330) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar12 = *(long *)(piVar15 + 0xc);
      }
LAB_0c0cd47f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_320._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)plStack_328 + 0x78) + 0x48);
        iVar6 = *piVar15;
        while (iVar6 != (int)uStack_320) {
          piVar15 = piVar15 + 0x1a;
          iVar6 = *piVar15;
        }
        goto LAB_0c0cd47f;
      }
      if (uStack_320._4_4_ == 0) {
        *(uint *)((long)plStack_328 + 0x18) = *(uint *)((long)plStack_328 + 0x18) | 0x40000;
      }
    }
    func_0x0c127c80(&lStack_338,&lStack_228,&UNK_012ccc33,0x10,0x10);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef46ef8;
    if (uStack_320 != (long *)0x0) {
      lVar12 = *uStack_320;
      uStack_320 = plVar8;
      (**(code **)(lVar12 + 8))();
      plVar8 = uStack_320;
    }
    uStack_320 = plVar8;
    uStack_3a0 = plStack_328._0_4_;
    plStack_398 = (long *)0x0;
    uStack_390 = 0;
    plStack_388 = (long *)0x1;
    uStack_380 = (code *)0x0;
    uStack_378 = &UNK_04906f70;
    puStack_370 = &SUB_048b06d0;
    puStack_368 = &SUB_04906c50;
    puStack_360 = &UNK_0c128910;
    puStack_358 = &UNK_0c128a70;
    uStack_350 = 0;
    auStack_348 = ZEXT816(0);
    func_0x048b05a0(plStack_330,&uStack_3a0);
    uVar4 = auStack_348._8_8_;
    if ((long *)auStack_348._8_8_ != (long *)0x0) {
      LOCK();
      plVar8 = (long *)(auStack_348._8_8_ + 8);
      lVar12 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_348._8_8_ + 0x10))(auStack_348._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c127f40(&lStack_338);
    uStack_1b8 = CONCAT71(uStack_1b8._1_7_,(undefined1)uStack_1f8);
    pcStack_1c8 = pcStack_208;
    puStack_1c0 = puStack_200;
    plStack_1d8 = plStack_218;
    pcStack_1d0 = pcStack_210;
    lStack_1e8 = lStack_228;
    plStack_1e0 = plStack_220;
    func_0x048b0bc0(&uStack_320);
    lStack_168 = lStack_1e8;
    plStack_160 = plStack_1e0;
    plStack_158 = plStack_1d8;
    pcStack_150 = pcStack_1d0;
    pcStack_148 = pcStack_1c8;
    puStack_140 = puStack_1c0;
    uStack_138 = uStack_1b8;
    func_0x0c1276d0(&lStack_338,lStack_1e8 + 0x18);
    if (uStack_320._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)plStack_328 + 0x78) + 0x60);
      iVar6 = *piVar15;
      while (iVar6 != (int)uStack_320) {
        piVar15 = piVar15 + 0x16;
        iVar6 = *piVar15;
      }
      lVar12 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar12 != plStack_330) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar12 = *(long *)(piVar15 + 0xc);
      }
LAB_0c0cd6ef:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_320._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)plStack_328 + 0x78) + 0x48);
        iVar6 = *piVar15;
        while (iVar6 != (int)uStack_320) {
          piVar15 = piVar15 + 0x1a;
          iVar6 = *piVar15;
        }
        goto LAB_0c0cd6ef;
      }
      if (uStack_320._4_4_ == 0) {
        *(uint *)((long)plStack_328 + 0x18) = *(uint *)((long)plStack_328 + 0x18) | 0x40000;
      }
    }
    func_0x0c127c80(&lStack_338,&lStack_168,&UNK_013d515c,0xf,0x10);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef46ef8;
    if (uStack_320 != (long *)0x0) {
      lVar12 = *uStack_320;
      uStack_320 = plVar8;
      (**(code **)(lVar12 + 8))();
      plVar8 = uStack_320;
    }
    uStack_320 = plVar8;
    uStack_3a0 = plStack_328._0_4_;
    plStack_398 = (long *)0x0;
    uStack_390 = 0;
    plStack_388 = (long *)0x1;
    uStack_380 = (code *)0x0;
    uStack_378 = &UNK_04906f70;
    puStack_370 = &SUB_048b06d0;
    puStack_368 = &SUB_04906c50;
    puStack_360 = &UNK_0c128c50;
    puStack_358 = &UNK_0c128db0;
    uStack_350 = 0;
    auStack_348 = ZEXT816(0);
    func_0x048b05a0(plStack_330,&uStack_3a0);
    uVar4 = auStack_348._8_8_;
    if ((long *)auStack_348._8_8_ != (long *)0x0) {
      LOCK();
      plVar8 = (long *)(auStack_348._8_8_ + 8);
      lVar12 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_348._8_8_ + 0x10))(auStack_348._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c127f40(&lStack_338);
    func_0x048b0bc0(&uStack_320);
  }
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x68,0);
  }
  uVar4 = _UNK_01386342;
  puVar11[10] = _DAT_0138633a;
  puVar11[0xb] = uVar4;
  uVar4 = _UNK_01386332;
  puVar11[8] = _DAT_0138632a;
  puVar11[9] = uVar4;
  uVar4 = _UNK_01386322;
  puVar11[6] = _DAT_0138631a;
  puVar11[7] = uVar4;
  uVar4 = _UNK_01386312;
  puVar11[4] = _DAT_0138630a;
  puVar11[5] = uVar4;
  uVar4 = _UNK_01386302;
  puVar11[2] = _DAT_013862fa;
  puVar11[3] = uVar4;
  uVar4 = _UNK_013862f2;
  *puVar11 = _DAT_013862ea;
  puVar11[1] = uVar4;
  *(undefined8 *)((long)puVar11 + 0x5f) = 0x2e796c7265706f72;
  *(undefined1 *)((long)puVar11 + 0x67) = 0;
  uStack_188 = uStack_188 & 0xffffffffffffff00;
  cStack_170 = '\0';
  if (cStack_190 == '\x01') {
    uStack_188 = uStack_1a8;
    uStack_180 = 0;
    uVar18 = uStack_1a0;
    if ((uStack_1a0 & 0x80000000000000) != 0) {
      uVar18 = uStack_1a0 & 0xff00ffffffffffff;
      lVar13 = *(long *)(uVar18 - 8);
      lVar12 = lVar13 + 9;
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
      if (lVar12 != 0 && plVar8 == (long *)0x0) {
        func_0x0eec74c0(lVar12,8);
      }
      *plVar8 = lVar13;
      func_0x0eee2f00(plVar8 + 1,uVar18,lVar13);
      *(undefined1 *)((long)plVar8 + lVar13 + 8) = 0;
      uVar18 = (ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    plStack_178 = (long *)0x0;
    plVar8 = plStack_198;
    uStack_180 = uVar18;
    if (((ulong)plStack_198 & 0x80000000000000) != 0) {
      uVar18 = (ulong)plStack_198 & 0xff00ffffffffffff;
      lVar13 = *(long *)(uVar18 - 8);
      lVar12 = lVar13 + 9;
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
      if (lVar12 != 0 && plVar8 == (long *)0x0) {
        func_0x0eec74c0(lVar12,8);
      }
      *plVar8 = lVar13;
      func_0x0eee2f00(plVar8 + 1,uVar18,lVar13);
      *(undefined1 *)((long)plVar8 + lVar13 + 8) = 0;
      plVar8 = (long *)((ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    cStack_170 = '\x01';
    plStack_178 = plVar8;
  }
  lVar12 = func_0x0c068ba0(lStack_130);
  if ((*(int *)(lVar12 + 0x60) == -0x2b3da790) && (lVar12 = *(long *)(lVar12 + 0x68), lVar12 != 0))
  {
    bVar20 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar13 = lVar12 + 9;
    if (bVar20) {
      lVar13 = *(long *)(lVar12 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar20) {
      uVar18 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x0c069d90(auStack_268,param_1,lVar13,uVar18,1);
  }
  else {
    func_0x0c069d90(auStack_268,param_1,0,0,1);
  }
  if (cStack_238 == '\0') {
    if ((DAT_0f6d5010 == '\0') && (iVar6 = FUN_04108328(&DAT_0f6d5010), iVar6 != 0)) {
      func_0x0ee25020(0xf6d4fe8,&DAT_0136ad12);
      __cxa_atexit(&UNK_048c16a0,0xf6d4fe8,0xf53dab8);
      func_0x0410844d(&DAT_0f6d5010);
    }
    uVar18 = (ulong)(DAT_0f6d4ff0 >> 1);
    lVar12 = 0xf6d4ff1;
    if ((DAT_0f6d4ff0 & 1) != 0) {
      uVar18 = _DAT_0f6d4ff8;
      lVar12 = _DAT_0f6d5000;
    }
    func_0x0c06a780(&lStack_338,auStack_268,lVar12,uVar18,0);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f3525a8;
    if (uStack_320 != (long *)0x0) {
      lVar12 = *uStack_320;
      uStack_320 = plVar8;
      (**(code **)(lVar12 + 8))();
      plVar8 = uStack_320;
    }
    uStack_320 = plVar8;
    uStack_3a0 = plStack_328._0_4_;
    plStack_398 = (long *)0x0;
    uStack_390 = 0;
    plStack_388 = (long *)0x1;
    uStack_380 = (code *)0x0;
    uStack_378 = &UNK_0c12b070;
    puStack_370 = &SUB_048b06d0;
    puStack_368 = &UNK_0c12ad90;
    puStack_360 = &UNK_0c12b130;
    puStack_358 = &UNK_0c12b3a0;
    uStack_350 = 0;
    auStack_348 = (undefined1  [16])0x0;
    func_0x048b05a0(plStack_330,&uStack_3a0);
    uVar4 = auStack_348._8_8_;
    if ((long *)auStack_348._8_8_ != (long *)0x0) {
      LOCK();
      plVar8 = (long *)(auStack_348._8_8_ + 8);
      lVar12 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_348._8_8_ + 0x10))(auStack_348._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    iVar6 = *(int *)((long)plStack_330 + 0x1c);
    if (iVar6 == 2) {
      piVar15 = *(int **)(*(long *)(*(long *)((long)plStack_330 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar15;
      while (iVar6 != *(int *)((long)plStack_330 + 0x18)) {
        piVar15 = piVar15 + 0x16;
        iVar6 = *piVar15;
      }
      lVar12 = *(long *)(piVar15 + 0xc);
      while (lVar12 != *(long *)((long)plStack_330 + 8)) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar12 = *(long *)(piVar15 + 0xc);
      }
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar15 = *(int **)(*(long *)(*(long *)((long)plStack_330 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar15;
      while (iVar6 != *(int *)((long)plStack_330 + 0x18)) {
        piVar15 = piVar15 + 0x1a;
        iVar6 = *piVar15;
      }
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      puVar1 = (uint *)(*(long *)((long)plStack_330 + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0c06aa10(&lStack_338);
    func_0x048b0bc0(&uStack_320);
  }
  if ((DAT_0f6d5010 == '\0') && (iVar6 = FUN_04108328(&DAT_0f6d5010), iVar6 != 0)) {
    func_0x0ee25020(0xf6d4fe8,&DAT_0136ad12);
    __cxa_atexit(&UNK_048c16a0,0xf6d4fe8,0xf53dab8);
    func_0x0410844d(&DAT_0f6d5010);
  }
  uVar18 = (ulong)(DAT_0f6d4ff0 >> 1);
  lVar12 = 0xf6d4ff1;
  if ((DAT_0f6d4ff0 & 1) != 0) {
    uVar18 = _DAT_0f6d4ff8;
    lVar12 = _DAT_0f6d5000;
  }
  lVar13 = func_0x0c12a620(lStack_130);
  if ((*(int *)(lVar13 + 0x60) == -0x2b3da790) && (lVar13 = *(long *)(lVar13 + 0x68), lVar13 != 0))
  {
    bVar20 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar12 = lVar13 + 9;
    if (bVar20) {
      lVar12 = *(long *)(lVar13 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar20) {
      uVar18 = *(ulong *)(lVar13 + 0x10);
    }
  }
  func_0x0c12b7f0(&uStack_3a0,param_1,lVar12,uVar18);
  lVar13 = CONCAT44(uStack_39c,uStack_3a0) + 0x18;
  lVar12 = func_0x0c12a620(lVar13);
  pbVar3 = *(byte **)(CONCAT44(uStack_39c,uStack_3a0) + 0x58);
  for (pbVar16 = *(byte **)(CONCAT44(uStack_39c,uStack_3a0) + 0x50); pbVar16 != pbVar3;
      pbVar16 = pbVar16 + 0x38) {
    bVar2 = *pbVar16;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0c0cde2a;
    }
    else if (*(long *)(pbVar16 + 8) == 0x1a) {
LAB_0c0cde2a:
      if ((bVar2 & 1) == 0) {
        pbVar17 = pbVar16 + 1;
      }
      else {
        pbVar17 = *(byte **)(pbVar16 + 0x10);
      }
      auVar21[0] = -(*pbVar17 == DAT_014eaba0);
      auVar21[1] = -(pbVar17[1] == DAT_014eaba0._1_1_);
      auVar21[2] = -(pbVar17[2] == DAT_014eaba0._2_1_);
      auVar21[3] = -(pbVar17[3] == DAT_014eaba0._3_1_);
      auVar21[4] = -(pbVar17[4] == DAT_014eaba0._4_1_);
      auVar21[5] = -(pbVar17[5] == DAT_014eaba0._5_1_);
      auVar21[6] = -(pbVar17[6] == DAT_014eaba0._6_1_);
      auVar21[7] = -(pbVar17[7] == DAT_014eaba0._7_1_);
      auVar21[8] = -(pbVar17[8] == DAT_014eaba0._8_1_);
      auVar21[9] = -(pbVar17[9] == DAT_014eaba0._9_1_);
      auVar21[10] = -(pbVar17[10] == DAT_014eaba0._10_1_);
      auVar21[0xb] = -(pbVar17[0xb] == DAT_014eaba0._11_1_);
      auVar21[0xc] = -(pbVar17[0xc] == DAT_014eaba0._12_1_);
      auVar21[0xd] = -(pbVar17[0xd] == DAT_014eaba0._13_1_);
      auVar21[0xe] = -(pbVar17[0xe] == DAT_014eaba0._14_1_);
      auVar21[0xf] = -(pbVar17[0xf] == DAT_014eaba0._15_1_);
      auVar22[0] = -(pbVar17[10] == DAT_014e4ff0);
      auVar22[1] = -(pbVar17[0xb] == DAT_014e4ff0._1_1_);
      auVar22[2] = -(pbVar17[0xc] == DAT_014e4ff0._2_1_);
      auVar22[3] = -(pbVar17[0xd] == DAT_014e4ff0._3_1_);
      auVar22[4] = -(pbVar17[0xe] == DAT_014e4ff0._4_1_);
      auVar22[5] = -(pbVar17[0xf] == DAT_014e4ff0._5_1_);
      auVar22[6] = -(pbVar17[0x10] == DAT_014e4ff0._6_1_);
      auVar22[7] = -(pbVar17[0x11] == DAT_014e4ff0._7_1_);
      auVar22[8] = -(pbVar17[0x12] == DAT_014e4ff0._8_1_);
      auVar22[9] = -(pbVar17[0x13] == DAT_014e4ff0._9_1_);
      auVar22[10] = -(pbVar17[0x14] == DAT_014e4ff0._10_1_);
      auVar22[0xb] = -(pbVar17[0x15] == DAT_014e4ff0._11_1_);
      auVar22[0xc] = -(pbVar17[0x16] == DAT_014e4ff0._12_1_);
      auVar22[0xd] = -(pbVar17[0x17] == DAT_014e4ff0._13_1_);
      auVar22[0xe] = -(pbVar17[0x18] == DAT_014e4ff0._14_1_);
      auVar22[0xf] = -(pbVar17[0x19] == DAT_014e4ff0._15_1_);
      auVar22 = auVar22 & auVar21;
      if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar16 == pbVar3) {
LAB_0c0cde59:
    if ((int)uStack_378 == 0) {
      if ((*(int *)(lVar12 + 0x60) != -0x2b3da790) || (*(long *)(lVar12 + 0x68) == 0))
      goto LAB_0c0cded0;
      lVar12 = *(long *)(lVar12 + 0x68) + 0x38;
    }
    else {
      auStack_268 = (undefined1  [8])FUN_048b0c90(lVar13,lVar12,uStack_378._4_4_,1);
      if (auStack_268 == (undefined1  [8])0x0) {
        _auStack_268 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_268);
        if (auStack_268 == (undefined1  [8])0x0) goto LAB_0c0cded0;
      }
      if ((*(int *)((long)auStack_268 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_268 + 0x58) != 0)) {
        lVar12 = *(long *)((long)auStack_268 + 0x58) + 0x40;
      }
      else {
LAB_0c0cded0:
        lVar12 = 0;
      }
    }
    puStack_48 = &UNK_0488e0b0;
    uStack_38 = 0x48b5725f;
    pcStack_40 = (code *)0x0;
    uStack_34 = 0;
    auStack_58[0] = 0;
    _auStack_268 = (undefined1  [16])0x0;
    pcStack_250 = (code *)&UNK_0488e0b0;
    pcStack_248 = (code *)0x0;
    uStack_240 = 0x48b5725f;
    uStack_23c = uStack_23c & 0xffffff00;
    puStack_60 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_60 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar4 = _UNK_013bbadf;
    uStack_70 = 0x21;
    uStack_68 = 0x1a;
    *(ulong *)((long)puStack_60 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_60 + 0x12) = uVar4;
    uVar4 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_60 = _DAT_013bbacd;
    puStack_60[1] = uVar4;
    *(undefined1 *)((long)puStack_60 + 0x1a) = 0;
    lVar12 = func_0x048b5060(lVar12,&uStack_70);
    *(undefined8 *)(lVar12 + 0x20) = 0;
    if ((undefined1 *)(lVar12 + 0x20) == auStack_268) {
      pcVar14 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar12 + 0x40) != (code *)0x0) {
        puVar19 = (undefined8 *)(lVar12 + 0x28);
        (**(code **)(lVar12 + 0x40))(puVar19);
        if ((char)uStack_23c != '\0') {
          if ((char)uStack_23c == '\x02') {
            (*pcStack_250)(5,&plStack_260,puVar19);
          }
          else {
            plVar8 = plStack_260;
            plStack_260 = (long *)0x0;
            *puVar19 = plVar8;
          }
        }
      }
      *(code **)(lVar12 + 0x38) = pcStack_250;
      *(code **)(lVar12 + 0x40) = pcStack_248;
      *(undefined4 *)(lVar12 + 0x48) = uStack_240;
      *(char *)(lVar12 + 0x4c) = (char)uStack_23c;
      pcVar14 = pcStack_248;
    }
    if ((uStack_70 & 1) != 0) {
      func_0x0412a280(puStack_60,uStack_70 & 0xfffffffffffffffe);
      pcVar14 = pcStack_248;
    }
    if (pcVar14 != (code *)0x0) {
      (*pcVar14)(&plStack_260);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(auStack_58);
    }
  }
  else {
    iVar6 = *(int *)(pbVar16 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar7 = FUN_04108328(&DAT_0f550ad8), iVar7 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar6 == _DAT_0f550ac4) goto LAB_0c0cde59;
  }
  puStack_308 = puStack_370;
  lStack_338 = CONCAT44(uStack_39c,uStack_3a0);
  plStack_328 = (long *)CONCAT44(uStack_38c,uStack_390);
  pcStack_318 = uStack_380;
  puStack_310 = uStack_378;
  uStack_320 = plStack_388;
  plStack_330 = plStack_398;
  auVar5[0xf] = 0;
  auVar5._0_15_ = stack0xfffffffffffffd99;
  _auStack_268 = auVar5 << 8;
  pcStack_250 = (code *)((ulong)pcStack_250 & 0xffffffffffffff00);
  if (cStack_170 == '\x01') {
    plStack_260 = (long *)0x0;
    auStack_268 = (undefined1  [8])uStack_188;
    auVar21 = _auStack_268;
    plStack_260 = (long *)uStack_180;
    if ((uStack_180 & 0x80000000000000) != 0) {
      uVar18 = uStack_180 & 0xff00ffffffffffff;
      lVar13 = *(long *)(uVar18 - 8);
      lVar12 = lVar13 + 9;
      _auStack_268 = auVar21;
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
      if (lVar12 != 0 && plVar8 == (long *)0x0) {
        func_0x0eec74c0(lVar12,8);
      }
      *plVar8 = lVar13;
      func_0x0eee2f00(plVar8 + 1,uVar18,lVar13);
      *(undefined1 *)((long)plVar8 + lVar13 + 8) = 0;
      plStack_260 = (long *)((ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    plStack_258 = (long *)0x0;
    plVar8 = plStack_178;
    if (((ulong)plStack_178 & 0x80000000000000) != 0) {
      uVar18 = (ulong)plStack_178 & 0xff00ffffffffffff;
      lVar13 = *(long *)(uVar18 - 8);
      lVar12 = lVar13 + 9;
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar12,8);
      if (lVar12 != 0 && plVar8 == (long *)0x0) {
        func_0x0eec74c0(lVar12,8);
      }
      *plVar8 = lVar13;
      func_0x0eee2f00(plVar8 + 1,uVar18,lVar13);
      *(undefined1 *)((long)plVar8 + lVar13 + 8) = 0;
      plVar8 = (long *)((ulong)(plVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000);
    }
    pcStack_250 = (code *)CONCAT71(pcStack_250._1_7_,1);
    plStack_258 = plVar8;
  }
  func_0x0412e5e0(auStack_58,puVar11,0x67);
  lStack_128 = lStack_338;
  plStack_120 = plStack_330;
  plStack_118 = plStack_328;
  pcStack_110 = (code *)uStack_320;
  pcStack_108 = pcStack_318;
  puStack_100 = puStack_310;
  puStack_f8 = puStack_308;
  if ((auStack_58[0] & 1) != 0) {
    func_0x0412a280(puStack_48,auStack_58[0] & 0xfffffffffffffffe);
  }
  if ((char)pcStack_250 == '\x01') {
    if (((ulong)plStack_258 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)plStack_258 & 0xff00ffffffffffff) - 8);
    }
    plStack_258 = (long *)0x0;
    if (((ulong)plStack_260 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)plStack_260 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0c12bd30(&lStack_338,lStack_128 + 0x18);
  if (uStack_320._4_4_ == 2) {
    piVar15 = *(int **)(plStack_328[0xf] + 0x60);
    iVar6 = *piVar15;
    while (iVar6 != (int)uStack_320) {
      piVar15 = piVar15 + 0x16;
      iVar6 = *piVar15;
    }
    plVar8 = *(long **)(piVar15 + 0xc);
    while (plVar8 != plStack_330) {
      piVar15 = *(int **)(piVar15 + 0xe);
      plVar8 = *(long **)(piVar15 + 0xc);
    }
LAB_0c0ce3ef:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_320._4_4_ == 1) {
      piVar15 = *(int **)(plStack_328[0xf] + 0x48);
      iVar6 = *piVar15;
      while (iVar6 != (int)uStack_320) {
        piVar15 = piVar15 + 0x1a;
        iVar6 = *piVar15;
      }
      goto LAB_0c0ce3ef;
    }
    if (uStack_320._4_4_ == 0) {
      *(uint *)(plStack_328 + 3) = *(uint *)(plStack_328 + 3) | 0x40000;
    }
  }
  func_0x0c12c0f0(&lStack_338,&lStack_128,&UNK_013d516c,10);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f3526e0;
  if (uStack_320 != (long *)0x0) {
    lVar12 = *uStack_320;
    uStack_320 = plVar8;
    (**(code **)(lVar12 + 8))();
    plVar8 = uStack_320;
  }
  uStack_320 = plVar8;
  uStack_3a0 = plStack_328._0_4_;
  plStack_398 = (long *)0x0;
  uStack_390 = 0;
  plStack_388 = (long *)0x1;
  uStack_380 = (code *)0x0;
  uStack_378 = &UNK_0c12fc50;
  puStack_370 = &SUB_048b06d0;
  puStack_368 = &UNK_0c12e780;
  puStack_360 = &UNK_0c12fd10;
  puStack_358 = &UNK_0c12ff20;
  uStack_350 = 0;
  auStack_348 = ZEXT816(0);
  func_0x048b05a0(plStack_330,&uStack_3a0);
  uVar4 = auStack_348._8_8_;
  if ((long *)auStack_348._8_8_ != (long *)0x0) {
    LOCK();
    plVar8 = (long *)(auStack_348._8_8_ + 8);
    lVar12 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*(long *)auStack_348._8_8_ + 0x10))(auStack_348._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c12c350(&lStack_338);
  uStack_b8 = CONCAT71(uStack_b8._1_7_,puStack_f8._0_1_);
  pcStack_c8 = pcStack_108;
  puStack_c0 = puStack_100;
  plStack_d8 = plStack_118;
  pcStack_d0 = pcStack_110;
  lStack_e8 = lStack_128;
  plStack_e0 = plStack_120;
  func_0x048b0bc0(&uStack_320);
  lStack_a8 = lStack_e8;
  plStack_a0 = plStack_e0;
  plStack_98 = plStack_d8;
  pcStack_90 = pcStack_d0;
  pcStack_88 = pcStack_c8;
  puStack_80 = puStack_c0;
  uStack_78 = uStack_b8;
  func_0x0c12bd30(&lStack_338,lStack_e8 + 0x18);
  if (uStack_320._4_4_ == 2) {
    piVar15 = *(int **)(plStack_328[0xf] + 0x60);
    iVar6 = *piVar15;
    while (iVar6 != (int)uStack_320) {
      piVar15 = piVar15 + 0x16;
      iVar6 = *piVar15;
    }
    plVar8 = *(long **)(piVar15 + 0xc);
    while (plVar8 != plStack_330) {
      piVar15 = *(int **)(piVar15 + 0xe);
      plVar8 = *(long **)(piVar15 + 0xc);
    }
LAB_0c0ce66f:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_320._4_4_ == 1) {
      piVar15 = *(int **)(plStack_328[0xf] + 0x48);
      iVar6 = *piVar15;
      while (iVar6 != (int)uStack_320) {
        piVar15 = piVar15 + 0x1a;
        iVar6 = *piVar15;
      }
      goto LAB_0c0ce66f;
    }
    if (uStack_320._4_4_ == 0) {
      *(uint *)(plStack_328 + 3) = *(uint *)(plStack_328 + 3) | 0x40000;
    }
  }
  func_0x0c12c0f0(&lStack_338,&lStack_a8,&UNK_01422394,0x11);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f0126a0;
  if (uStack_320 != (long *)0x0) {
    lVar12 = *uStack_320;
    uStack_320 = plVar8;
    (**(code **)(lVar12 + 8))();
    plVar8 = uStack_320;
  }
  uStack_320 = plVar8;
  uStack_3a0 = plStack_328._0_4_;
  plStack_398 = (long *)0x0;
  uStack_390 = 0;
  plStack_388 = (long *)0x1;
  uStack_380 = (code *)0x0;
  uStack_378 = &UNK_05daeda0;
  puStack_370 = &SUB_048b06d0;
  puStack_368 = &SUB_05daea90;
  puStack_360 = &UNK_0c1303a0;
  puStack_358 = &UNK_0c130500;
  uStack_350 = 0;
  auStack_348 = ZEXT816(0);
  func_0x048b05a0(plStack_330,&uStack_3a0);
  uVar4 = auStack_348._8_8_;
  if ((long *)auStack_348._8_8_ != (long *)0x0) {
    LOCK();
    plVar8 = (long *)(auStack_348._8_8_ + 8);
    lVar12 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*(long *)auStack_348._8_8_ + 0x10))(auStack_348._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c12c350(&lStack_338);
  uStack_1f8 = CONCAT71(uStack_1f8._1_7_,(undefined1)uStack_78);
  pcStack_208 = pcStack_88;
  puStack_200 = puStack_80;
  plStack_218 = plStack_98;
  pcStack_210 = pcStack_90;
  lStack_228 = lStack_a8;
  plStack_220 = plStack_a0;
  func_0x048b0bc0(&uStack_320);
  lStack_1e8 = lStack_228;
  plStack_1e0 = plStack_220;
  plStack_1d8 = plStack_218;
  pcStack_1d0 = pcStack_210;
  pcStack_1c8 = pcStack_208;
  puStack_1c0 = puStack_200;
  uStack_1b8 = uStack_1f8;
  func_0x0c12bd30(&lStack_338,lStack_228 + 0x18);
  if (uStack_320._4_4_ == 2) {
    piVar15 = *(int **)(plStack_328[0xf] + 0x60);
    iVar6 = *piVar15;
    while (iVar6 != (int)uStack_320) {
      piVar15 = piVar15 + 0x16;
      iVar6 = *piVar15;
    }
    plVar8 = *(long **)(piVar15 + 0xc);
    while (plVar8 != plStack_330) {
      piVar15 = *(int **)(piVar15 + 0xe);
      plVar8 = *(long **)(piVar15 + 0xc);
    }
LAB_0c0ce8ef:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_320._4_4_ == 1) {
      piVar15 = *(int **)(plStack_328[0xf] + 0x48);
      iVar6 = *piVar15;
      while (iVar6 != (int)uStack_320) {
        piVar15 = piVar15 + 0x1a;
        iVar6 = *piVar15;
      }
      goto LAB_0c0ce8ef;
    }
    if (uStack_320._4_4_ == 0) {
      *(uint *)(plStack_328 + 3) = *(uint *)(plStack_328 + 3) | 0x40000;
    }
  }
  func_0x0c12c0f0(&lStack_338,&lStack_1e8,&UNK_011adb5a,0x1c);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0ef46ef8;
  if (uStack_320 != (long *)0x0) {
    lVar12 = *uStack_320;
    uStack_320 = plVar8;
    (**(code **)(lVar12 + 8))();
    plVar8 = uStack_320;
  }
  uStack_320 = plVar8;
  uStack_3a0 = plStack_328._0_4_;
  plStack_398 = (long *)0x0;
  uStack_390 = 0;
  plStack_388 = (long *)0x1;
  uStack_380 = (code *)0x0;
  uStack_378 = &UNK_04906f70;
  puStack_370 = &SUB_048b06d0;
  puStack_368 = &SUB_04906c50;
  puStack_360 = &UNK_0c1306e0;
  puStack_358 = &UNK_0c130840;
  uStack_350 = 0;
  auStack_348 = ZEXT816(0);
  func_0x048b05a0(plStack_330,&uStack_3a0);
  uVar4 = auStack_348._8_8_;
  if ((long *)auStack_348._8_8_ != (long *)0x0) {
    LOCK();
    plVar8 = (long *)(auStack_348._8_8_ + 8);
    lVar12 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*(long *)auStack_348._8_8_ + 0x10))(auStack_348._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c12c350(&lStack_338);
  uStack_138 = CONCAT71(uStack_138._1_7_,(undefined1)uStack_1b8);
  pcStack_148 = pcStack_1c8;
  puStack_140 = puStack_1c0;
  plStack_158 = plStack_1d8;
  pcStack_150 = pcStack_1d0;
  lStack_168 = lStack_1e8;
  plStack_160 = plStack_1e0;
  func_0x048b0bc0(&uStack_320);
  func_0x0c12bd30(&lStack_338,lStack_168 + 0x18);
  if (uStack_320._4_4_ == 2) {
    piVar15 = *(int **)(plStack_328[0xf] + 0x60);
    iVar6 = *piVar15;
    while (iVar6 != (int)uStack_320) {
      piVar15 = piVar15 + 0x16;
      iVar6 = *piVar15;
    }
    plVar8 = *(long **)(piVar15 + 0xc);
    while (plVar8 != plStack_330) {
      piVar15 = *(int **)(piVar15 + 0xe);
      plVar8 = *(long **)(piVar15 + 0xc);
    }
LAB_0c0ceb2f:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_320._4_4_ == 1) {
      piVar15 = *(int **)(plStack_328[0xf] + 0x48);
      iVar6 = *piVar15;
      while (iVar6 != (int)uStack_320) {
        piVar15 = piVar15 + 0x1a;
        iVar6 = *piVar15;
      }
      goto LAB_0c0ceb2f;
    }
    if (uStack_320._4_4_ == 0) {
      *(uint *)(plStack_328 + 3) = *(uint *)(plStack_328 + 3) | 0x40000;
    }
  }
  func_0x0c12c0f0(&lStack_338,&lStack_168,&UNK_011c9214,0xe);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0ef46ef8;
  if (uStack_320 != (long *)0x0) {
    lVar12 = *uStack_320;
    uStack_320 = plVar8;
    (**(code **)(lVar12 + 8))();
    plVar8 = uStack_320;
  }
  uStack_320 = plVar8;
  uStack_3a0 = plStack_328._0_4_;
  plStack_398 = (long *)0x0;
  uStack_390 = 0;
  plStack_388 = (long *)0x1;
  uStack_380 = (code *)0x0;
  uStack_378 = &UNK_04906f70;
  puStack_370 = &SUB_048b06d0;
  puStack_368 = &SUB_04906c50;
  puStack_360 = &UNK_0c130a20;
  puStack_358 = &UNK_0c130b80;
  uStack_350 = 0;
  auStack_348 = ZEXT816(0);
  func_0x048b05a0(plStack_330,&uStack_3a0);
  uVar4 = auStack_348._8_8_;
  if ((long *)auStack_348._8_8_ != (long *)0x0) {
    LOCK();
    plVar8 = (long *)(auStack_348._8_8_ + 8);
    lVar12 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*(long *)auStack_348._8_8_ + 0x10))(auStack_348._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c12c350(&lStack_338);
  func_0x048b0bc0(&uStack_320);
  if (cStack_170 == '\x01') {
    if (((ulong)plStack_178 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)plStack_178 & 0xff00ffffffffffff) - 8);
    }
    plStack_178 = (long *)0x0;
    if ((uStack_180 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_180 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0412a280(puVar11,0x68);
  if (cStack_190 == '\x01') {
    if (((ulong)plStack_198 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)plStack_198 & 0xff00ffffffffffff) - 8);
    }
    plStack_198 = (long *)0x0;
    if ((uStack_1a0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1a0 & 0xff00ffffffffffff) - 8);
    }
    uStack_1a0 = 0;
  }
  if ((DAT_0f6d60c8 == '\0') && (iVar6 = FUN_04108328(&DAT_0f6d60c8), iVar6 != 0)) {
    func_0x0c11cac0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f6d6048,0xf53dab8);
    func_0x0410844d(&DAT_0f6d60c8);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f6d6048 + 4)) * 8);
  do {
    lVar12 = *plVar8;
    if (lVar12 == -1) goto LAB_0c0cede0;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f6d6048 + 4))
  ;
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_0c0cede0:
    puVar10 = &DAT_0f6d6048;
    if (iRam000000000f6d60a8 != -0x2b3da790) goto LAB_0c0cee47;
LAB_0c0cee0b:
    lVar12 = *(long *)(puVar10 + 0x68);
    if (lVar12 == 0) goto LAB_0c0cee47;
    bVar20 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar13 = lVar12 + 9;
    if (bVar20) {
      lVar13 = *(long *)(lVar12 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar20) {
      uVar18 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x0c11cee0(&uStack_3a0,param_1,lVar13,uVar18);
  }
  else {
    puVar10 = (undefined *)plVar8[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0c0cee0b;
LAB_0c0cee47:
    func_0x0c11cee0(&uStack_3a0,param_1,&UNK_012fff4b,0x12);
  }
  if ((char)puStack_370 == '\0') {
    uStack_378 = (undefined *)0x1e1bc4d500000004;
    if ((DAT_0f6d60e8 == '\0') && (iVar6 = FUN_04108328(&DAT_0f6d60e8), iVar6 != 0)) {
      func_0x0c11cbd0();
      func_0x0410844d(&DAT_0f6d60e8);
    }
    lStack_338 = CONCAT44(lStack_338._4_4_,uStack_378._4_4_);
    plStack_330 = (long *)0x0;
    plStack_328 = (long *)((ulong)plStack_328 & 0xffffffff00000000);
    uStack_320 = (long *)0x1;
    pcStack_318 = (code *)&SUB_048aead0;
    puStack_310 = &UNK_05daeda0;
    puStack_308 = &UNK_0c11d9f0;
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    FUN_049057f0(&plStack_398,&lStack_338);
    func_0x048aea50(&lStack_338);
    plStack_260._4_4_ = uStack_38c;
    plStack_260._0_4_ = uStack_390;
    plStack_258 = plStack_388;
    pcStack_250 = uStack_380;
    auStack_268 = (undefined1  [8])plStack_398;
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar11 = &UNK_0f0126a0;
    if ((DAT_0f551bc8 == '\0') && (iVar6 = FUN_04108328(&DAT_0f551bc8), iVar6 != 0)) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    lStack_338 = CONCAT44(lStack_338._4_4_,_DAT_0f551bb4);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&UNK_0ef46c48;
    plStack_330 = plVar8 + 3;
    plVar8[3] = (long)puVar11;
    plVar8[4] = 0;
    *(undefined1 *)(plVar8 + 5) = 0xff;
    lStack_168 = 0;
    plStack_160 = (long *)0x0;
    plStack_328 = plVar8;
    func_0x048afd20(auStack_268,&lStack_338);
    plVar8 = plStack_328;
    if (plStack_328 != (long *)0x0) {
      LOCK();
      plVar9 = plStack_328 + 1;
      lVar12 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_328 + 0x10))(plStack_328);
        func_0x0412c2d0(plVar8);
      }
    }
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar9 = plStack_160 + 1;
      lVar12 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
    if ((DAT_0f6d60e8 == '\0') && (iVar6 = FUN_04108328(&DAT_0f6d60e8), iVar6 != 0)) {
      func_0x0c11cbd0();
      func_0x0410844d(&DAT_0f6d60e8);
    }
    if (uStack_380._4_4_ == 2) {
      piVar15 = *(int **)(plStack_388[0xf] + 0x60);
      iVar6 = *piVar15;
      while (iVar6 != (int)uStack_380) {
        piVar15 = piVar15 + 0x16;
        iVar6 = *piVar15;
      }
      lVar12 = *(long *)(piVar15 + 0xc);
      while (lVar12 != CONCAT44(uStack_38c,uStack_390)) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar12 = *(long *)(piVar15 + 0xc);
      }
LAB_0c0cf10f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 2;
    }
    else {
      if (uStack_380._4_4_ == 1) {
        piVar15 = *(int **)(plStack_388[0xf] + 0x48);
        iVar6 = *piVar15;
        while (iVar6 != (int)uStack_380) {
          piVar15 = piVar15 + 0x1a;
          iVar6 = *piVar15;
        }
        goto LAB_0c0cf10f;
      }
      if (uStack_380._4_4_ == 0) {
        *(uint *)(plStack_388 + 3) = *(uint *)(plStack_388 + 3) | 0x20000;
      }
    }
    if ((DAT_0f6d60e8 == '\0') && (iVar6 = FUN_04108328(&DAT_0f6d60e8), iVar6 != 0)) {
      func_0x0c11cbd0();
      func_0x0410844d(&DAT_0f6d60e8);
    }
    lStack_338 = CONCAT44(lStack_338._4_4_,0xbf75c8f8);
    plStack_330 = (long *)0x0;
    plStack_328 = (long *)CONCAT44(plStack_328._4_4_,1);
    uStack_320 = (long *)0x0;
    pcStack_318 = (code *)&SUB_05daea90;
    puStack_310 = &SUB_048b06d0;
    puStack_308 = &UNK_0c11dbe0;
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    FUN_049057f0(&plStack_398,&lStack_338);
    func_0x048aea50(&lStack_338);
    plStack_260._4_4_ = uStack_38c;
    plStack_260._0_4_ = uStack_390;
    plStack_258 = plStack_388;
    pcStack_250 = uStack_380;
    auStack_268 = (undefined1  [8])plStack_398;
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar11 = &UNK_0f0126a0;
    if ((DAT_0f551cb0 == '\0') && (iVar6 = FUN_04108328(&DAT_0f551cb0), iVar6 != 0)) {
      FUN_04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    lStack_338 = CONCAT44(lStack_338._4_4_,_DAT_0f551c9c);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&UNK_0ef46c98;
    plStack_330 = plVar8 + 3;
    plVar8[3] = (long)puVar11;
    *(undefined1 *)(plVar8 + 4) = 0xff;
    lStack_168 = 0;
    plStack_160 = (long *)0x0;
    plStack_328 = plVar8;
    func_0x048afd20(auStack_268,&lStack_338);
    plVar8 = plStack_328;
    if (plStack_328 != (long *)0x0) {
      LOCK();
      plVar9 = plStack_328 + 1;
      lVar12 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_328 + 0x10))(plStack_328);
        func_0x0412c2d0(plVar8);
      }
    }
    plVar8 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      LOCK();
      plVar9 = plStack_160 + 1;
      lVar12 = *plVar9;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        func_0x0412c2d0(plVar8);
      }
    }
  }
  if ((DAT_0f6d6180 == '\0') && (iVar6 = FUN_04108328(&DAT_0f6d6180), iVar6 != 0)) {
    func_0x0c11ddc0();
    __cxa_atexit(&UNK_048ae800,&DAT_0f6d6100,0xf53dab8);
    func_0x0410844d(&DAT_0f6d6180);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f6d6100 + 4)) * 8);
  do {
    lVar12 = *plVar8;
    if (lVar12 == -1) goto LAB_0c0cf340;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f6d6100 + 4))
  ;
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_0c0cf340:
    puVar10 = &DAT_0f6d6100;
    if (iRam000000000f6d6160 != -0x2b3da790) goto LAB_0c0cf3ad;
LAB_0c0cf36b:
    lVar12 = *(long *)(puVar10 + 0x68);
    if (lVar12 == 0) goto LAB_0c0cf3ad;
    bVar20 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar13 = lVar12 + 9;
    if (bVar20) {
      lVar13 = *(long *)(lVar12 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar20) {
      uVar18 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x0c11e3c0(auStack_268,param_1,lVar13,uVar18);
  }
  else {
    puVar10 = (undefined *)plVar8[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0c0cf36b;
LAB_0c0cf3ad:
    func_0x0c11e3c0(auStack_268,param_1,0,0);
  }
  if (cStack_238 == '\0') {
    func_0x0c11ef60(&lStack_338,auStack_268,&UNK_014ae949,4,1);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f0eb460;
    if (uStack_320 != (long *)0x0) {
      lVar12 = *uStack_320;
      uStack_320 = plVar8;
      (**(code **)(lVar12 + 8))();
      plVar8 = uStack_320;
    }
    uStack_320 = plVar8;
    uStack_3a0 = plStack_328._0_4_;
    plStack_398 = (long *)0x0;
    uStack_390 = 0;
    plStack_388 = (long *)0x1;
    uStack_380 = (code *)0x0;
    uStack_378 = &UNK_07912090;
    puStack_370 = &SUB_048b06d0;
    puStack_368 = &SUB_07911dc0;
    puStack_360 = &UNK_0c11f520;
    puStack_358 = &UNK_0c11f6e0;
    uStack_350 = 0;
    auStack_348 = ZEXT816(0);
    func_0x048b05a0(plStack_330,&uStack_3a0);
    uVar4 = auStack_348._8_8_;
    if ((long *)auStack_348._8_8_ != (long *)0x0) {
      LOCK();
      plVar8 = (long *)(auStack_348._8_8_ + 8);
      lVar12 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_348._8_8_ + 0x10))(auStack_348._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c11f220(&lStack_338);
    uStack_1f8 = CONCAT71(uStack_1f8._1_7_,cStack_238);
    puStack_200 = (undefined1 *)CONCAT44(uStack_23c,uStack_240);
    pcStack_208 = pcStack_248;
    plStack_218 = plStack_258;
    pcStack_210 = pcStack_250;
    lStack_228 = (long)auStack_268;
    plStack_220 = plStack_260;
    func_0x048b0bc0(&uStack_320);
    func_0x0c11e9b0(&lStack_338,lStack_228 + 0x18);
    if (uStack_320._4_4_ == 2) {
      piVar15 = *(int **)(plStack_328[0xf] + 0x60);
      iVar6 = *piVar15;
      while (iVar6 != (int)uStack_320) {
        piVar15 = piVar15 + 0x16;
        iVar6 = *piVar15;
      }
      plVar8 = *(long **)(piVar15 + 0xc);
      while (plVar8 != plStack_330) {
        piVar15 = *(int **)(piVar15 + 0xe);
        plVar8 = *(long **)(piVar15 + 0xc);
      }
LAB_0c0cf5ff:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_320._4_4_ == 1) {
        piVar15 = *(int **)(plStack_328[0xf] + 0x48);
        iVar6 = *piVar15;
        while (iVar6 != (int)uStack_320) {
          piVar15 = piVar15 + 0x1a;
          iVar6 = *piVar15;
        }
        goto LAB_0c0cf5ff;
      }
      if (uStack_320._4_4_ == 0) {
        *(uint *)(plStack_328 + 3) = *(uint *)(plStack_328 + 3) | 0x40000;
      }
    }
    func_0x0c11ef60(&lStack_338,&lStack_228,&UNK_01232585,0xb,0x10);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef46ef8;
    if (uStack_320 != (long *)0x0) {
      lVar12 = *uStack_320;
      uStack_320 = plVar8;
      (**(code **)(lVar12 + 8))();
      plVar8 = uStack_320;
    }
    uStack_320 = plVar8;
    uStack_3a0 = plStack_328._0_4_;
    plStack_398 = (long *)0x0;
    uStack_390 = 0;
    plStack_388 = (long *)0x1;
    uStack_380 = (code *)0x0;
    uStack_378 = &UNK_04906f70;
    puStack_370 = &SUB_048b06d0;
    puStack_368 = &SUB_04906c50;
    puStack_360 = &UNK_0c11f8b0;
    puStack_358 = &UNK_0c11fa10;
    uStack_350 = 0;
    auStack_348 = ZEXT816(0);
    func_0x048b05a0(plStack_330,&uStack_3a0);
    uVar4 = auStack_348._8_8_;
    if ((long *)auStack_348._8_8_ != (long *)0x0) {
      LOCK();
      plVar8 = (long *)(auStack_348._8_8_ + 8);
      lVar12 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_348._8_8_ + 0x10))(auStack_348._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c11f220(&lStack_338);
    uStack_1b8 = CONCAT71(uStack_1b8._1_7_,(undefined1)uStack_1f8);
    pcStack_1c8 = pcStack_208;
    puStack_1c0 = puStack_200;
    plStack_1d8 = plStack_218;
    pcStack_1d0 = pcStack_210;
    lStack_1e8 = lStack_228;
    plStack_1e0 = plStack_220;
    func_0x048b0bc0(&uStack_320);
    func_0x0c11e9b0(&lStack_338,lStack_1e8 + 0x18);
    if (uStack_320._4_4_ == 2) {
      piVar15 = *(int **)(plStack_328[0xf] + 0x60);
      iVar6 = *piVar15;
      while (iVar6 != (int)uStack_320) {
        piVar15 = piVar15 + 0x16;
        iVar6 = *piVar15;
      }
      plVar8 = *(long **)(piVar15 + 0xc);
      while (plVar8 != plStack_330) {
        piVar15 = *(int **)(piVar15 + 0xe);
        plVar8 = *(long **)(piVar15 + 0xc);
      }
LAB_0c0cf82f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_320._4_4_ == 1) {
        piVar15 = *(int **)(plStack_328[0xf] + 0x48);
        iVar6 = *piVar15;
        while (iVar6 != (int)uStack_320) {
          piVar15 = piVar15 + 0x1a;
          iVar6 = *piVar15;
        }
        goto LAB_0c0cf82f;
      }
      if (uStack_320._4_4_ == 0) {
        *(uint *)(plStack_328 + 3) = *(uint *)(plStack_328 + 3) | 0x40000;
      }
    }
    func_0x0c11ef60(&lStack_338,&lStack_1e8,&UNK_012ccc33,0x10,0x10);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef46ef8;
    if (uStack_320 != (long *)0x0) {
      lVar12 = *uStack_320;
      uStack_320 = plVar8;
      (**(code **)(lVar12 + 8))();
      plVar8 = uStack_320;
    }
    uStack_320 = plVar8;
    uStack_3a0 = plStack_328._0_4_;
    plStack_398 = (long *)0x0;
    uStack_390 = 0;
    plStack_388 = (long *)0x1;
    uStack_380 = (code *)0x0;
    uStack_378 = &UNK_04906f70;
    puStack_370 = &SUB_048b06d0;
    puStack_368 = &SUB_04906c50;
    puStack_360 = &UNK_0c11fbf0;
    puStack_358 = &UNK_0c11fd50;
    uStack_350 = 0;
    auStack_348 = ZEXT816(0);
    func_0x048b05a0(plStack_330,&uStack_3a0);
    uVar4 = auStack_348._8_8_;
    if ((long *)auStack_348._8_8_ != (long *)0x0) {
      LOCK();
      plVar8 = (long *)(auStack_348._8_8_ + 8);
      lVar12 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_348._8_8_ + 0x10))(auStack_348._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c11f220(&lStack_338);
    uStack_138 = CONCAT71(uStack_138._1_7_,(undefined1)uStack_1b8);
    pcStack_148 = pcStack_1c8;
    puStack_140 = puStack_1c0;
    plStack_158 = plStack_1d8;
    pcStack_150 = pcStack_1d0;
    lStack_168 = lStack_1e8;
    plStack_160 = plStack_1e0;
    func_0x048b0bc0(&uStack_320);
    func_0x0c11e9b0(&lStack_338,lStack_168 + 0x18);
    if (uStack_320._4_4_ == 2) {
      piVar15 = *(int **)(plStack_328[0xf] + 0x60);
      iVar6 = *piVar15;
      while (iVar6 != (int)uStack_320) {
        piVar15 = piVar15 + 0x16;
        iVar6 = *piVar15;
      }
      plVar8 = *(long **)(piVar15 + 0xc);
      while (plVar8 != plStack_330) {
        piVar15 = *(int **)(piVar15 + 0xe);
        plVar8 = *(long **)(piVar15 + 0xc);
      }
LAB_0c0cfa5f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_320._4_4_ == 1) {
        piVar15 = *(int **)(plStack_328[0xf] + 0x48);
        iVar6 = *piVar15;
        while (iVar6 != (int)uStack_320) {
          piVar15 = piVar15 + 0x1a;
          iVar6 = *piVar15;
        }
        goto LAB_0c0cfa5f;
      }
      if (uStack_320._4_4_ == 0) {
        *(uint *)(plStack_328 + 3) = *(uint *)(plStack_328 + 3) | 0x40000;
      }
    }
    func_0x0c11ef60(&lStack_338,&lStack_168,&UNK_013d515c,0xf,0x10);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef46ef8;
    if (uStack_320 != (long *)0x0) {
      lVar12 = *uStack_320;
      uStack_320 = plVar8;
      (**(code **)(lVar12 + 8))();
      plVar8 = uStack_320;
    }
    uStack_320 = plVar8;
    uStack_3a0 = plStack_328._0_4_;
    plStack_398 = (long *)0x0;
    uStack_390 = 0;
    plStack_388 = (long *)0x1;
    uStack_380 = (code *)0x0;
    uStack_378 = &UNK_04906f70;
    puStack_370 = &SUB_048b06d0;
    puStack_368 = &SUB_04906c50;
    puStack_360 = &UNK_0c11ff30;
    puStack_358 = &UNK_0c120090;
    uStack_350 = 0;
    auStack_348 = ZEXT816(0);
    func_0x048b05a0(plStack_330,&uStack_3a0);
    uVar4 = auStack_348._8_8_;
    if ((long *)auStack_348._8_8_ != (long *)0x0) {
      LOCK();
      plVar8 = (long *)(auStack_348._8_8_ + 8);
      lVar12 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_348._8_8_ + 0x10))(auStack_348._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    func_0x0c11f220(&lStack_338);
    func_0x048b0bc0(&uStack_320);
  }
  if ((DAT_0f6d6238 == '\0') && (iVar6 = FUN_04108328(&DAT_0f6d6238), iVar6 != 0)) {
    func_0x0c120330();
    __cxa_atexit(&UNK_048ae800,&DAT_0f6d61b8,0xf53dab8);
    func_0x0410844d(&DAT_0f6d6238);
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f6d61b8 + 4)) * 8);
  do {
    lVar12 = *plVar8;
    if (lVar12 == -1) goto LAB_0c0cfbe0;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f6d61b8 + 4))
  ;
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_0c0cfbe0:
    puVar10 = &DAT_0f6d61b8;
    if (iRam000000000f6d6218 != -0x2b3da790) goto LAB_0c0cfc4d;
LAB_0c0cfc0b:
    lVar12 = *(long *)(puVar10 + 0x68);
    if (lVar12 == 0) goto LAB_0c0cfc4d;
    bVar20 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar13 = lVar12 + 9;
    if (bVar20) {
      lVar13 = *(long *)(lVar12 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar20) {
      uVar18 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x0c120760(auStack_268,param_1,lVar13,uVar18);
  }
  else {
    puVar10 = (undefined *)plVar8[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0c0cfc0b;
LAB_0c0cfc4d:
    func_0x0c120760(auStack_268,param_1,0,0);
  }
  if (cStack_238 != '\0') {
    return;
  }
  func_0x0c120d50(&lStack_338,(long)auStack_268 + 0x18);
  if (uStack_320._4_4_ == 2) {
    piVar15 = *(int **)(plStack_328[0xf] + 0x60);
    iVar6 = *piVar15;
    while (iVar6 != (int)uStack_320) {
      piVar15 = piVar15 + 0x16;
      iVar6 = *piVar15;
    }
    plVar8 = *(long **)(piVar15 + 0xc);
    while (plVar8 != plStack_330) {
      piVar15 = *(int **)(piVar15 + 0xe);
      plVar8 = *(long **)(piVar15 + 0xc);
    }
LAB_0c0cfcdf:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_320._4_4_ == 1) {
      piVar15 = *(int **)(plStack_328[0xf] + 0x48);
      iVar6 = *piVar15;
      while (iVar6 != (int)uStack_320) {
        piVar15 = piVar15 + 0x1a;
        iVar6 = *piVar15;
      }
      goto LAB_0c0cfcdf;
    }
    if (uStack_320._4_4_ == 0) {
      *(uint *)(plStack_328 + 3) = *(uint *)(plStack_328 + 3) | 0x40000;
    }
  }
  func_0x0c121320(&lStack_338,auStack_268,&UNK_013d516c,10);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f352340;
  if (uStack_320 != (long *)0x0) {
    lVar12 = *uStack_320;
    uStack_320 = plVar8;
    (**(code **)(lVar12 + 8))();
    plVar8 = uStack_320;
  }
  uStack_320 = plVar8;
  uStack_3a0 = plStack_328._0_4_;
  plStack_398 = (long *)0x0;
  uStack_390 = 0;
  plStack_388 = (long *)0x1;
  uStack_380 = (code *)0x0;
  uStack_378 = &UNK_0c1253c0;
  puStack_370 = &SUB_048b06d0;
  puStack_368 = &UNK_0c123ef0;
  puStack_360 = &UNK_0c125480;
  puStack_358 = &UNK_0c125690;
  uStack_350 = 0;
  auStack_348 = ZEXT816(0);
  func_0x048b05a0(plStack_330,&uStack_3a0);
  uVar4 = auStack_348._8_8_;
  if ((long *)auStack_348._8_8_ != (long *)0x0) {
    LOCK();
    plVar8 = (long *)(auStack_348._8_8_ + 8);
    lVar12 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*(long *)auStack_348._8_8_ + 0x10))(auStack_348._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c121630(&lStack_338);
  uStack_1f8 = CONCAT71(uStack_1f8._1_7_,cStack_238);
  puStack_200 = (undefined1 *)CONCAT44(uStack_23c,uStack_240);
  pcStack_208 = pcStack_248;
  plStack_218 = plStack_258;
  pcStack_210 = pcStack_250;
  lStack_228 = (long)auStack_268;
  plStack_220 = plStack_260;
  func_0x048b0bc0(&uStack_320);
  func_0x0c120d50(&lStack_338,lStack_228 + 0x18);
  if (uStack_320._4_4_ == 2) {
    piVar15 = *(int **)(plStack_328[0xf] + 0x60);
    iVar6 = *piVar15;
    while (iVar6 != (int)uStack_320) {
      piVar15 = piVar15 + 0x16;
      iVar6 = *piVar15;
    }
    plVar8 = *(long **)(piVar15 + 0xc);
    while (plVar8 != plStack_330) {
      piVar15 = *(int **)(piVar15 + 0xe);
      plVar8 = *(long **)(piVar15 + 0xc);
    }
LAB_0c0cff1f:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_320._4_4_ == 1) {
      piVar15 = *(int **)(plStack_328[0xf] + 0x48);
      iVar6 = *piVar15;
      while (iVar6 != (int)uStack_320) {
        piVar15 = piVar15 + 0x1a;
        iVar6 = *piVar15;
      }
      goto LAB_0c0cff1f;
    }
    if (uStack_320._4_4_ == 0) {
      *(uint *)(plStack_328 + 3) = *(uint *)(plStack_328 + 3) | 0x40000;
    }
  }
  func_0x0c121320(&lStack_338,&lStack_228,&UNK_01422394,0x11);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f3524c0;
  if (uStack_320 != (long *)0x0) {
    lVar12 = *uStack_320;
    uStack_320 = plVar8;
    (**(code **)(lVar12 + 8))();
    plVar8 = uStack_320;
  }
  uStack_320 = plVar8;
  uStack_3a0 = plStack_328._0_4_;
  plStack_398 = (long *)0x0;
  uStack_390 = 0;
  plStack_388 = (long *)0x1;
  uStack_380 = (code *)0x0;
  uStack_378 = &UNK_0c125d00;
  puStack_370 = &SUB_048b06d0;
  puStack_368 = &UNK_0c11ca00;
  puStack_360 = &UNK_0c125dc0;
  puStack_358 = &UNK_0c125f20;
  uStack_350 = 0;
  auStack_348 = ZEXT816(0);
  func_0x048b05a0(plStack_330,&uStack_3a0);
  uVar4 = auStack_348._8_8_;
  if ((long *)auStack_348._8_8_ != (long *)0x0) {
    LOCK();
    plVar8 = (long *)(auStack_348._8_8_ + 8);
    lVar12 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*(long *)auStack_348._8_8_ + 0x10))(auStack_348._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c121630(&lStack_338);
  uStack_1b8 = CONCAT71(uStack_1b8._1_7_,(undefined1)uStack_1f8);
  pcStack_1c8 = pcStack_208;
  puStack_1c0 = puStack_200;
  plStack_1d8 = plStack_218;
  pcStack_1d0 = pcStack_210;
  lStack_1e8 = lStack_228;
  plStack_1e0 = plStack_220;
  func_0x048b0bc0(&uStack_320);
  func_0x0c120d50(&lStack_338,lStack_1e8 + 0x18);
  if (uStack_320._4_4_ == 2) {
    piVar15 = *(int **)(plStack_328[0xf] + 0x60);
    iVar6 = *piVar15;
    while (iVar6 != (int)uStack_320) {
      piVar15 = piVar15 + 0x16;
      iVar6 = *piVar15;
    }
    plVar8 = *(long **)(piVar15 + 0xc);
    while (plVar8 != plStack_330) {
      piVar15 = *(int **)(piVar15 + 0xe);
      plVar8 = *(long **)(piVar15 + 0xc);
    }
LAB_0c0d01af:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_320._4_4_ == 1) {
      piVar15 = *(int **)(plStack_328[0xf] + 0x48);
      iVar6 = *piVar15;
      while (iVar6 != (int)uStack_320) {
        piVar15 = piVar15 + 0x1a;
        iVar6 = *piVar15;
      }
      goto LAB_0c0d01af;
    }
    if (uStack_320._4_4_ == 0) {
      *(uint *)(plStack_328 + 3) = *(uint *)(plStack_328 + 3) | 0x40000;
    }
  }
  func_0x0c121320(&lStack_338,&lStack_1e8,&UNK_011adb5a,0x1c);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0ef46ef8;
  if (uStack_320 != (long *)0x0) {
    lVar12 = *uStack_320;
    uStack_320 = plVar8;
    (**(code **)(lVar12 + 8))();
    plVar8 = uStack_320;
  }
  uStack_320 = plVar8;
  uStack_3a0 = plStack_328._0_4_;
  plStack_398 = (long *)0x0;
  uStack_390 = 0;
  plStack_388 = (long *)0x1;
  uStack_380 = (code *)0x0;
  uStack_378 = &UNK_04906f70;
  puStack_370 = &SUB_048b06d0;
  puStack_368 = &SUB_04906c50;
  puStack_360 = &UNK_0c1263a0;
  puStack_358 = &UNK_0c126500;
  uStack_350 = 0;
  auStack_348 = ZEXT816(0);
  func_0x048b05a0(plStack_330,&uStack_3a0);
  uVar4 = auStack_348._8_8_;
  if ((long *)auStack_348._8_8_ != (long *)0x0) {
    LOCK();
    plVar8 = (long *)(auStack_348._8_8_ + 8);
    lVar12 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*(long *)auStack_348._8_8_ + 0x10))(auStack_348._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c121630(&lStack_338);
  uStack_138 = CONCAT71(uStack_138._1_7_,(undefined1)uStack_1b8);
  pcStack_148 = pcStack_1c8;
  puStack_140 = puStack_1c0;
  plStack_158 = plStack_1d8;
  pcStack_150 = pcStack_1d0;
  lStack_168 = lStack_1e8;
  plStack_160 = plStack_1e0;
  func_0x048b0bc0(&uStack_320);
  func_0x0c120d50(&lStack_338,lStack_168 + 0x18);
  if (uStack_320._4_4_ == 2) {
    piVar15 = *(int **)(plStack_328[0xf] + 0x60);
    iVar6 = *piVar15;
    while (iVar6 != (int)uStack_320) {
      piVar15 = piVar15 + 0x16;
      iVar6 = *piVar15;
    }
    plVar8 = *(long **)(piVar15 + 0xc);
    while (plVar8 != plStack_330) {
      piVar15 = *(int **)(piVar15 + 0xe);
      plVar8 = *(long **)(piVar15 + 0xc);
    }
  }
  else {
    if (uStack_320._4_4_ != 1) {
      if (uStack_320._4_4_ == 0) {
        *(uint *)(plStack_328 + 3) = *(uint *)(plStack_328 + 3) | 0x40000;
      }
      goto LAB_0c0d03d3;
    }
    piVar15 = *(int **)(plStack_328[0xf] + 0x48);
    iVar6 = *piVar15;
    while (iVar6 != (int)uStack_320) {
      piVar15 = piVar15 + 0x1a;
      iVar6 = *piVar15;
    }
  }
  *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
LAB_0c0d03d3:
  func_0x0c121320(&lStack_338,&lStack_168,&UNK_011c9214,0xe);
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar11 = &UNK_0ef46ef8;
  if (uStack_320 != (long *)0x0) {
    lVar12 = *uStack_320;
    uStack_320 = puVar11;
    (**(code **)(lVar12 + 8))();
    puVar11 = uStack_320;
  }
  uStack_320 = puVar11;
  uStack_3a0 = plStack_328._0_4_;
  plStack_398 = (long *)0x0;
  uStack_390 = 0;
  plStack_388 = (long *)0x1;
  uStack_380 = (code *)0x0;
  uStack_378 = &UNK_04906f70;
  puStack_370 = &SUB_048b06d0;
  puStack_368 = &SUB_04906c50;
  puStack_360 = &UNK_0c1266e0;
  puStack_358 = &UNK_0c126840;
  uStack_350 = 0;
  auStack_348 = ZEXT816(0);
  func_0x048b05a0(plStack_330,&uStack_3a0);
  uVar4 = auStack_348._8_8_;
  if ((long *)auStack_348._8_8_ != (long *)0x0) {
    LOCK();
    plVar8 = (long *)(auStack_348._8_8_ + 8);
    lVar12 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*(long *)auStack_348._8_8_ + 0x10))(auStack_348._8_8_);
      func_0x0412c2d0(uVar4);
    }
  }
  func_0x0c121630(&lStack_338);
  func_0x048b0bc0(&uStack_320);
  return;
}



/* ---- referenced strings ----
 * 0x13862ea  Shooter Item Component. Must have the 'minecraft:use_duration' component in order to function pr
 * 0x13862fa  ponent. Must have the 'minecraft:use_duration' component in order to function properly.
 * 0x138630a  e the 'minecraft:use_duration' component in order to function properly.
 * 0x138631a  :use_duration' component in order to function properly.
 * 0x138632a  omponent in order to function properly.
 * 0x138633a  r to function properly.
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
