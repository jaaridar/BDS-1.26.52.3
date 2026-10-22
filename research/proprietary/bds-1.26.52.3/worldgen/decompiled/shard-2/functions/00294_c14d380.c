/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc24d380 (ELF vaddr 0xc14d380)
 * Label: caller-of-callee
 * Body:  [[0c24d380, 0c24e31b] [0c24e320, 0c24e361] [0c24e370, 0c25026a]]
 * Ghidra: FUN_0c24d380
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c24d380(undefined8 param_1,undefined1 *param_2,ulong *param_3,long param_4,long *param_5)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  byte *pbVar15;
  code *pcVar16;
  undefined8 *puVar17;
  int *piVar18;
  byte *pbVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *puVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uStack_3a8;
  ulong uStack_3a0;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined8 uStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined1 *puStack_378;
  undefined1 *puStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined4 uStack_358;
  undefined1 auStack_350 [16];
  undefined8 *puStack_340;
  undefined1 auStack_338 [8];
  ulong uStack_330;
  ulong uStack_328;
  code *pcStack_320;
  code *pcStack_318;
  undefined4 uStack_310;
  uint uStack_30c;
  char cStack_308;
  undefined1 auStack_2f8 [16];
  undefined1 auStack_2e8 [12];
  int iStack_2dc;
  code *pcStack_2d8;
  undefined *puStack_2d0;
  undefined1 *puStack_2c8;
  undefined1 uStack_2c0;
  undefined1 uStack_2b8;
  undefined1 uStack_2a0;
  undefined1 auStack_298 [16];
  undefined8 uStack_288;
  undefined1 auStack_278 [32];
  undefined8 uStack_258;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  char cStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  char cStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  char cStack_1c8;
  ulong *puStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  char cStack_1a0;
  long lStack_198;
  ulong uStack_190;
  ulong uStack_188;
  code *pcStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  char cStack_168;
  long lStack_158;
  ulong uStack_150;
  ulong uStack_148;
  code *pcStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  ulong auStack_100 [2];
  undefined *puStack_f0;
  code *pcStack_e8;
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  long *plStack_c8;
  long alStack_c0 [2];
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 *puStack_78;
  long lStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  
  uStack_d8 = param_1;
  puStack_d0 = param_2;
  plStack_c8 = param_5;
  func_0x0d677c30(alStack_c0);
  uStack_1b8 = uStack_1b8 & 0xffffffffffffff00;
  cStack_1a0 = '\0';
  puStack_1c0 = param_3;
  if ((char)param_3[3] == '\x01') {
    uStack_1b8 = *param_3;
    uStack_1b0 = 0;
    uVar21 = param_3[1];
    if ((uVar21 & 0x80000000000000) != 0) {
      lVar20 = *(long *)((uVar21 & 0xff00ffffffffffff) - 8);
      lVar14 = lVar20 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar14,8);
      }
      *plVar13 = lVar20;
      func_0x0eee2f00(plVar13 + 1,uVar21 & 0xff00ffffffffffff,lVar20);
      *(undefined1 *)((long)plVar13 + lVar20 + 8) = 0;
      uVar21 = (ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_1a8 = 0;
    uVar22 = puStack_1c0[2];
    uStack_1b0 = uVar21;
    if ((uVar22 & 0x80000000000000) != 0) {
      lVar20 = *(long *)((uVar22 & 0xff00ffffffffffff) - 8);
      lVar14 = lVar20 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar14,8);
      }
      *plVar13 = lVar20;
      func_0x0eee2f00(plVar13 + 1,uVar22 & 0xff00ffffffffffff,lVar20);
      *(undefined1 *)((long)plVar13 + lVar20 + 8) = 0;
      uVar22 = (ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    cStack_1a0 = '\x01';
    cStack_208 = 0;
    uStack_220 = uStack_1b8;
    uStack_218 = 0;
    uStack_1a8 = uVar22;
    if ((uVar21 & 0x80000000000000) != 0) {
      lVar20 = *(long *)((uVar21 & 0xff00ffffffffffff) - 8);
      lVar14 = lVar20 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar14,8);
      }
      *plVar13 = lVar20;
      func_0x0eee2f00(plVar13 + 1,uVar21 & 0xff00ffffffffffff,lVar20);
      *(undefined1 *)((long)plVar13 + lVar20 + 8) = 0;
      uVar21 = (ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_218 = uVar21;
    if ((uVar22 & 0x80000000000000) != 0) {
      uStack_210 = 0;
      lVar20 = *(long *)((uVar22 & 0xff00ffffffffffff) - 8);
      lVar14 = lVar20 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar14,8);
      }
      *plVar13 = lVar20;
      func_0x0eee2f00(plVar13 + 1,uVar22 & 0xff00ffffffffffff,lVar20);
      *(undefined1 *)((long)plVar13 + lVar20 + 8) = 0;
      uVar22 = (ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    cStack_208 = '\x01';
    uStack_210 = uVar22;
  }
  else {
    uStack_220 = uStack_220 & 0xffffffffffffff00;
    cStack_208 = '\0';
  }
  func_0x0eb67b50(param_4);
  func_0x0eb67b50(param_4);
  if ((DAT_0f6dad68 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6dad68), iVar9 != 0)) {
    func_0x0c33e9f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6dace8,0xf53dab8);
    func_0x0410844d(&DAT_0f6dad68);
  }
  plVar13 = (long *)(*(long *)(param_4 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_4 + 0x20) - *(long *)(param_4 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6dace8 + 4)) * 8);
  do {
    lVar14 = *plVar13;
    if (lVar14 == -1) goto LAB_0c24d770;
    plVar13 = (long *)(*(long *)(param_4 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_4 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f6dace8 + 4))
  ;
  if (plVar13 == *(long **)(param_4 + 0x38)) {
LAB_0c24d770:
    puVar11 = &DAT_0f6dace8;
    if (iRam000000000f6dad48 != -0x2b3da790) goto LAB_0c24d7da;
LAB_0c24d79b:
    lVar14 = *(long *)(puVar11 + 0x68);
    if (lVar14 == 0) goto LAB_0c24d7da;
    bVar24 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar20 = lVar14 + 9;
    if (bVar24) {
      lVar20 = *(long *)(lVar14 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar24) {
      uVar21 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x0c341570(auStack_338,param_4,lVar20,uVar21);
  }
  else {
    puVar11 = (undefined *)plVar13[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0c24d79b;
LAB_0c24d7da:
    func_0x0c341570(auStack_338,param_4,0,0);
  }
  if (cStack_308 == '\0') {
    func_0x0c341b60(auStack_2f8,(long)auStack_338 + 0x18);
    if (iStack_2dc == 2) {
      piVar18 = *(int **)(*(long *)(auStack_2e8._0_8_ + 0x78) + 0x60);
      iVar9 = *piVar18;
      while (iVar9 != auStack_2e8._8_4_) {
        piVar18 = piVar18 + 0x16;
        iVar9 = *piVar18;
      }
      lVar14 = *(long *)(piVar18 + 0xc);
      while (lVar14 != auStack_2f8._8_8_) {
        piVar18 = *(int **)(piVar18 + 0xe);
        lVar14 = *(long *)(piVar18 + 0xc);
      }
LAB_0c24d86f:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (iStack_2dc == 1) {
        piVar18 = *(int **)(*(long *)(auStack_2e8._0_8_ + 0x78) + 0x48);
        iVar9 = *piVar18;
        while (iVar9 != auStack_2e8._8_4_) {
          piVar18 = piVar18 + 0x1a;
          iVar9 = *piVar18;
        }
        goto LAB_0c24d86f;
      }
      if (iStack_2dc == 0) {
        *(uint *)(auStack_2e8._0_8_ + 0x18) = *(uint *)(auStack_2e8._0_8_ + 0x18) | 0x40000;
      }
    }
    func_0x0c342150(auStack_2f8,auStack_338,&UNK_0129a922,6,0x10);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f360d68;
    plVar13 = stack0xfffffffffffffd20;
    stack0xfffffffffffffd20 = puVar12;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    uStack_3a8._0_4_ = auStack_2e8._0_4_;
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 1;
    pcStack_388 = (code *)0x0;
    uStack_380 = &UNK_0c33beb0;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &SUB_0c33bb90;
    puStack_368 = &UNK_0c3426e0;
    puStack_360 = &UNK_0c3428d0;
    uStack_358 = 0;
    auStack_350 = ZEXT816(0);
    func_0x048b05a0(auStack_2f8._8_8_,&uStack_3a8);
    uVar6 = auStack_350._8_8_;
    if ((long *)auStack_350._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_350._8_8_ + 8);
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_350._8_8_ + 0x10))(auStack_350._8_8_);
        FUN_0412c2d0(uVar6);
      }
    }
    func_0x0c3423e0(auStack_2f8);
    uStack_128 = CONCAT71(uStack_128._1_7_,cStack_308);
    puStack_130 = (undefined *)CONCAT44(uStack_30c,uStack_310);
    pcStack_138 = pcStack_318;
    uStack_148 = uStack_328;
    pcStack_140 = pcStack_320;
    lStack_158 = (long)auStack_338;
    uStack_150 = uStack_330;
    func_0x048b0bc0(auStack_2e8 + 8);
    func_0x0c342150(auStack_2f8,&lStack_158,&UNK_01ccbfc0,5,1);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f361118;
    plVar13 = stack0xfffffffffffffd20;
    stack0xfffffffffffffd20 = puVar12;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    uStack_3a8._0_4_ = auStack_2e8._0_4_;
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 1;
    pcStack_388 = (code *)0x0;
    uStack_380 = &UNK_0c343480;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &SUB_0c343150;
    puStack_368 = &UNK_0c343490;
    puStack_360 = &UNK_0c343690;
    uStack_358 = 0;
    auStack_350 = ZEXT816(0);
    func_0x048b05a0(auStack_2f8._8_8_,&uStack_3a8);
    uVar6 = auStack_350._8_8_;
    if ((long *)auStack_350._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_350._8_8_ + 8);
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_350._8_8_ + 0x10))(auStack_350._8_8_);
        FUN_0412c2d0(uVar6);
      }
    }
    func_0x0c3423e0(auStack_2f8);
    cStack_168 = (char)uStack_128;
    pcStack_178 = pcStack_138;
    puStack_170 = puStack_130;
    uStack_188 = uStack_148;
    pcStack_180 = pcStack_140;
    lStack_198 = lStack_158;
    uStack_190 = uStack_150;
    func_0x048b0bc0(auStack_2e8 + 8);
    func_0x0c342150(auStack_2f8,&lStack_198,&UNK_0128b951,5,1);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ce8;
    plVar13 = stack0xfffffffffffffd20;
    stack0xfffffffffffffd20 = puVar12;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    uStack_3a8._0_4_ = auStack_2e8._0_4_;
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 1;
    pcStack_388 = (code *)0x0;
    uStack_380 = &UNK_0490ce30;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &SUB_0490cb20;
    puStack_368 = &UNK_0c343c30;
    puStack_360 = &UNK_0c343d90;
    uStack_358 = 0;
    auStack_350 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_2f8._8_8_,&uStack_3a8);
    uVar6 = auStack_350._8_8_;
    if ((long *)auStack_350._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_350._8_8_ + 8);
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_350._8_8_ + 0x10))(auStack_350._8_8_);
        FUN_0412c2d0(uVar6);
      }
    }
    func_0x0c3423e0(auStack_2f8);
    func_0x048b0bc0(auStack_2e8 + 8);
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  uVar6 = _UNK_014d99da;
  *(ulong *)((long)puVar12 + 0x3e) = CONCAT62(_UNK_014d99d4,_DAT_014d99d2);
  *(undefined8 *)((long)puVar12 + 0x46) = uVar6;
  uVar6 = CONCAT26(_DAT_014d99d2,_UNK_014d99cc);
  puVar12[6] = _DAT_014d99c4;
  puVar12[7] = uVar6;
  uVar6 = _UNK_014d99bc;
  puVar12[4] = _DAT_014d99b4;
  puVar12[5] = uVar6;
  uVar6 = _UNK_014d99ac;
  puVar12[2] = _DAT_014d99a4;
  puVar12[3] = uVar6;
  uVar6 = _UNK_014d999c;
  *puVar12 = _DAT_014d9994;
  puVar12[1] = uVar6;
  *(undefined1 *)((long)puVar12 + 0x4e) = 0;
  uStack_200 = uStack_200 & 0xffffffffffffff00;
  cStack_1e8 = '\0';
  if (cStack_208 == '\x01') {
    uStack_200 = uStack_220;
    uStack_1f8 = 0;
    uVar21 = uStack_218;
    puStack_340 = puVar12;
    if ((uStack_218 & 0x80000000000000) != 0) {
      uVar21 = uStack_218 & 0xff00ffffffffffff;
      lVar20 = *(long *)(uVar21 - 8);
      lVar14 = lVar20 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar14,8);
      }
      *plVar13 = lVar20;
      func_0x0eee2f00(plVar13 + 1,uVar21,lVar20);
      *(undefined1 *)((long)plVar13 + lVar20 + 8) = 0;
      uVar21 = (ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_1f0 = 0;
    uVar22 = uStack_210;
    uStack_1f8 = uVar21;
    if ((uStack_210 & 0x80000000000000) != 0) {
      uVar21 = uStack_210 & 0xff00ffffffffffff;
      lVar20 = *(long *)(uVar21 - 8);
      lVar14 = lVar20 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar14,8);
      }
      *plVar13 = lVar20;
      func_0x0eee2f00(plVar13 + 1,uVar21,lVar20);
      *(undefined1 *)((long)plVar13 + lVar20 + 8) = 0;
      uVar22 = (ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    cStack_1e8 = '\x01';
    puVar12 = puStack_340;
    uStack_1f0 = uVar22;
  }
  lVar14 = func_0x0c068ba0(param_4 + 0x18);
  if ((*(int *)(lVar14 + 0x60) == -0x2b3da790) && (lVar14 = *(long *)(lVar14 + 0x68), lVar14 != 0))
  {
    bVar24 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar20 = lVar14 + 9;
    if (bVar24) {
      lVar20 = *(long *)(lVar14 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar24) {
      uVar21 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x0c069d90(auStack_338,param_4,lVar20,uVar21,1);
  }
  else {
    func_0x0c069d90(auStack_338,param_4,0,0,1);
  }
  if (cStack_308 == '\0') {
    if ((DAT_0f6d7138 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6d7138), iVar9 != 0)) {
      puStack_340 = puVar12;
      func_0x0ee25020(0xf6d7110,&DAT_011d37e2);
      func_0x0eee2f40(&UNK_048c16a0,0xf6d7110,0xf53dab8);
      func_0x0410844d(&DAT_0f6d7138);
      puVar12 = puStack_340;
    }
    uVar21 = (ulong)(DAT_0f6d7118 >> 1);
    lVar14 = 0xf6d7119;
    if ((DAT_0f6d7118 & 1) != 0) {
      uVar21 = _DAT_0f6d7120;
      lVar14 = _DAT_0f6d7128;
    }
    func_0x0c06a780(auStack_2f8,auStack_338,lVar14,uVar21,0);
    puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar17 = &UNK_0f35f178;
    plVar13 = stack0xfffffffffffffd20;
    stack0xfffffffffffffd20 = puVar17;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    uStack_3a8._0_4_ = auStack_2e8._0_4_;
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 1;
    pcStack_388 = (code *)0x0;
    uStack_380 = &UNK_0c339b90;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &UNK_0c339800;
    puStack_368 = &UNK_0c339c50;
    puStack_360 = &UNK_0c339ec0;
    uStack_358 = 0;
    auStack_350 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_2f8._8_8_,&uStack_3a8);
    uVar6 = auStack_350._8_8_;
    if ((long *)auStack_350._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_350._8_8_ + 8);
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_350._8_8_ + 0x10))(auStack_350._8_8_);
        FUN_0412c2d0(uVar6);
      }
    }
    iVar9 = *(int *)(auStack_2f8._8_8_ + 0x1c);
    if (iVar9 == 2) {
      piVar18 = *(int **)(*(long *)(*(long *)(auStack_2f8._8_8_ + 0x10) + 0x78) + 0x60);
      iVar9 = *piVar18;
      while (iVar9 != *(int *)(auStack_2f8._8_8_ + 0x18)) {
        piVar18 = piVar18 + 0x16;
        iVar9 = *piVar18;
      }
      lVar14 = *(long *)(piVar18 + 0xc);
      while (lVar14 != *(long *)(auStack_2f8._8_8_ + 8)) {
        piVar18 = *(int **)(piVar18 + 0xe);
        lVar14 = *(long *)(piVar18 + 0xc);
      }
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else if (iVar9 == 1) {
      piVar18 = *(int **)(*(long *)(*(long *)(auStack_2f8._8_8_ + 0x10) + 0x78) + 0x48);
      iVar9 = *piVar18;
      while (iVar9 != *(int *)(auStack_2f8._8_8_ + 0x18)) {
        piVar18 = piVar18 + 0x1a;
        iVar9 = *piVar18;
      }
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else if (iVar9 == 0) {
      puVar1 = (uint *)(*(long *)(auStack_2f8._8_8_ + 0x10) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
    func_0x0c06aa10(auStack_2f8);
    func_0x048b0bc0(auStack_2e8 + 8);
  }
  if ((DAT_0f6d7138 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6d7138), iVar9 != 0)) {
    puStack_340 = puVar12;
    func_0x0ee25020(0xf6d7110,&DAT_011d37e2);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d7110,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7138);
    puVar12 = puStack_340;
  }
  uVar21 = (ulong)(DAT_0f6d7118 >> 1);
  lVar14 = 0xf6d7119;
  if ((DAT_0f6d7118 & 1) != 0) {
    uVar21 = _DAT_0f6d7120;
    lVar14 = _DAT_0f6d7128;
  }
  if ((DAT_0f6d8778 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6d8778), iVar9 != 0)) {
    func_0x0c2630f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d86f8,0xf53dab8);
    func_0x0410844d(&DAT_0f6d8778);
  }
  plVar13 = (long *)(*(long *)(param_4 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_4 + 0x20) - *(long *)(param_4 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6d86f8 + 4)) * 8);
  do {
    lVar20 = *plVar13;
    if (lVar20 == -1) goto LAB_0c24e221;
    plVar13 = (long *)(*(long *)(param_4 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_4 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f6d86f8 + 4))
  ;
  if (plVar13 == *(long **)(param_4 + 0x38)) {
LAB_0c24e221:
    puVar11 = &DAT_0f6d86f8;
    iVar9 = iRam000000000f6d8758;
  }
  else {
    puVar11 = (undefined *)plVar13[2];
    iVar9 = *(int *)(puVar11 + 0x60);
  }
  if ((iVar9 == -0x2b3da790) && (lVar20 = *(long *)(puVar11 + 0x68), lVar20 != 0)) {
    bVar24 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar14 = lVar20 + 9;
    if (bVar24) {
      lVar14 = *(long *)(lVar20 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar24) {
      uVar21 = *(ulong *)(lVar20 + 0x10);
    }
  }
  func_0x0c33a310(&uStack_3a8,param_4,lVar14,uVar21);
  lVar14 = CONCAT44(uStack_3a8._4_4_,(undefined4)uStack_3a8);
  if ((DAT_0f6d8778 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6d8778), iVar9 != 0)) {
    func_0x0c2630f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d86f8,0xf53dab8);
    func_0x0410844d(&DAT_0f6d8778);
  }
  plVar13 = (long *)(*(long *)(lVar14 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f6d86f8 + 4)) * 8);
  do {
    lVar20 = *plVar13;
    if (lVar20 == -1) goto LAB_0c24e2e0;
    plVar13 = (long *)(*(long *)(lVar14 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f6d86f8 + 4));
  if (plVar13 == *(long **)(lVar14 + 0x38)) {
LAB_0c24e2e0:
    puVar11 = &DAT_0f6d86f8;
  }
  else {
    puVar11 = (undefined *)plVar13[2];
  }
  pbVar4 = *(byte **)(CONCAT44(uStack_3a8._4_4_,(undefined4)uStack_3a8) + 0x58);
  for (pbVar15 = *(byte **)(CONCAT44(uStack_3a8._4_4_,(undefined4)uStack_3a8) + 0x50);
      pbVar15 != pbVar4; pbVar15 = pbVar15 + 0x38) {
    bVar2 = *pbVar15;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0c24e37a;
    }
    else if (*(long *)(pbVar15 + 8) == 0x1a) {
LAB_0c24e37a:
      if ((bVar2 & 1) == 0) {
        pbVar19 = pbVar15 + 1;
      }
      else {
        pbVar19 = *(byte **)(pbVar15 + 0x10);
      }
      auVar25[0] = -(*pbVar19 == DAT_014eaba0);
      auVar25[1] = -(pbVar19[1] == DAT_014eaba0._1_1_);
      auVar25[2] = -(pbVar19[2] == DAT_014eaba0._2_1_);
      auVar25[3] = -(pbVar19[3] == DAT_014eaba0._3_1_);
      auVar25[4] = -(pbVar19[4] == DAT_014eaba0._4_1_);
      auVar25[5] = -(pbVar19[5] == DAT_014eaba0._5_1_);
      auVar25[6] = -(pbVar19[6] == DAT_014eaba0._6_1_);
      auVar25[7] = -(pbVar19[7] == DAT_014eaba0._7_1_);
      auVar25[8] = -(pbVar19[8] == DAT_014eaba0._8_1_);
      auVar25[9] = -(pbVar19[9] == DAT_014eaba0._9_1_);
      auVar25[10] = -(pbVar19[10] == DAT_014eaba0._10_1_);
      auVar25[0xb] = -(pbVar19[0xb] == DAT_014eaba0._11_1_);
      auVar25[0xc] = -(pbVar19[0xc] == DAT_014eaba0._12_1_);
      auVar25[0xd] = -(pbVar19[0xd] == DAT_014eaba0._13_1_);
      auVar25[0xe] = -(pbVar19[0xe] == DAT_014eaba0._14_1_);
      auVar25[0xf] = -(pbVar19[0xf] == DAT_014eaba0._15_1_);
      auVar26[0] = -(pbVar19[10] == DAT_014e4ff0);
      auVar26[1] = -(pbVar19[0xb] == DAT_014e4ff0._1_1_);
      auVar26[2] = -(pbVar19[0xc] == DAT_014e4ff0._2_1_);
      auVar26[3] = -(pbVar19[0xd] == DAT_014e4ff0._3_1_);
      auVar26[4] = -(pbVar19[0xe] == DAT_014e4ff0._4_1_);
      auVar26[5] = -(pbVar19[0xf] == DAT_014e4ff0._5_1_);
      auVar26[6] = -(pbVar19[0x10] == DAT_014e4ff0._6_1_);
      auVar26[7] = -(pbVar19[0x11] == DAT_014e4ff0._7_1_);
      auVar26[8] = -(pbVar19[0x12] == DAT_014e4ff0._8_1_);
      auVar26[9] = -(pbVar19[0x13] == DAT_014e4ff0._9_1_);
      auVar26[10] = -(pbVar19[0x14] == DAT_014e4ff0._10_1_);
      auVar26[0xb] = -(pbVar19[0x15] == DAT_014e4ff0._11_1_);
      auVar26[0xc] = -(pbVar19[0x16] == DAT_014e4ff0._12_1_);
      auVar26[0xd] = -(pbVar19[0x17] == DAT_014e4ff0._13_1_);
      auVar26[0xe] = -(pbVar19[0x18] == DAT_014e4ff0._14_1_);
      auVar26[0xf] = -(pbVar19[0x19] == DAT_014e4ff0._15_1_);
      auVar26 = auVar26 & auVar25;
      if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar15 == pbVar4) {
LAB_0c24e3aa:
    if ((int)uStack_380 == 0) {
      if (((puVar11 == (undefined *)0x0) || (*(int *)(puVar11 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar11 + 0x68) == 0)) goto LAB_0c24e436;
      lVar14 = *(long *)(puVar11 + 0x68) + 0x38;
    }
    else {
      uVar8 = uStack_380._4_4_;
      if (puVar11 == (undefined *)0x0) {
        puVar11 = (undefined *)func_0x048aead0(lVar14 + 0x18);
      }
      auStack_338 = (undefined1  [8])func_0x048b0c90(lVar14 + 0x18,puVar11,uVar8,1);
      if (auStack_338 == (undefined1  [8])0x0) {
        _auStack_338 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_338);
        if (auStack_338 == (undefined1  [8])0x0) goto LAB_0c24e436;
      }
      if ((*(int *)((long)auStack_338 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_338 + 0x58) != 0)) {
        lVar14 = *(long *)((long)auStack_338 + 0x58) + 0x40;
      }
      else {
LAB_0c24e436:
        lVar14 = 0;
      }
    }
    puStack_f0 = &UNK_0488e0b0;
    uStack_e0 = 0x48b5725f;
    pcStack_e8 = (code *)0x0;
    uStack_dc = 0;
    auStack_100[0] = 0;
    _auStack_338 = (undefined1  [16])0x0;
    pcStack_320 = (code *)&UNK_0488e0b0;
    pcStack_318 = (code *)0x0;
    uStack_310 = 0x48b5725f;
    uStack_30c = uStack_30c & 0xffffff00;
    puStack_108 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_108 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar6 = _UNK_013bbadf;
    uStack_118 = 0x21;
    uStack_110 = 0x1a;
    *(ulong *)((long)puStack_108 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_108 + 0x12) = uVar6;
    uVar6 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_108 = _DAT_013bbacd;
    puStack_108[1] = uVar6;
    *(undefined1 *)((long)puStack_108 + 0x1a) = 0;
    lVar14 = FUN_048b5060(lVar14,&uStack_118);
    *(undefined8 *)(lVar14 + 0x20) = 0;
    if ((undefined1 *)(lVar14 + 0x20) == auStack_338) {
      pcVar16 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar14 + 0x40) != (code *)0x0) {
        puVar23 = (ulong *)(lVar14 + 0x28);
        (**(code **)(lVar14 + 0x40))(puVar23);
        if ((char)uStack_30c != '\0') {
          if ((char)uStack_30c == '\x02') {
            (*pcStack_320)(5,&uStack_330,puVar23);
          }
          else {
            uVar21 = uStack_330;
            uStack_330 = 0;
            *puVar23 = uVar21;
          }
        }
      }
      *(code **)(lVar14 + 0x38) = pcStack_320;
      *(code **)(lVar14 + 0x40) = pcStack_318;
      *(undefined4 *)(lVar14 + 0x48) = uStack_310;
      *(char *)(lVar14 + 0x4c) = (char)uStack_30c;
      pcVar16 = pcStack_318;
    }
    if ((uStack_118 & 1) != 0) {
      func_0x0412a280(puStack_108,uStack_118 & 0xfffffffffffffffe);
      pcVar16 = pcStack_318;
    }
    if (pcVar16 != (code *)0x0) {
      (*pcVar16)(&uStack_330);
    }
    if (pcStack_e8 != (code *)0x0) {
      (*pcStack_e8)(auStack_100);
    }
  }
  else {
    iVar9 = *(int *)(pbVar15 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550ad8), iVar10 != 0)) {
      FUN_0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar9 == _DAT_0f550ac4) goto LAB_0c24e3aa;
  }
  puStack_2c8 = puStack_378;
  auStack_2f8._0_8_ = CONCAT44(uStack_3a8._4_4_,(undefined4)uStack_3a8);
  auStack_2e8._4_4_ = uStack_394;
  auStack_2e8._0_4_ = uStack_398;
  pcStack_2d8 = pcStack_388;
  puStack_2d0 = uStack_380;
  stack0xfffffffffffffd20 = (long *)uStack_390;
  auStack_2f8._8_8_ = uStack_3a0;
  auVar7[0xf] = 0;
  auVar7._0_15_ = stack0xfffffffffffffcc9;
  _auStack_338 = auVar7 << 8;
  pcStack_320 = (code *)((ulong)pcStack_320 & 0xffffffffffffff00);
  if (cStack_1e8 == '\x01') {
    uStack_330 = 0;
    auStack_338 = (undefined1  [8])uStack_200;
    auVar25 = _auStack_338;
    uStack_330 = uStack_1f8;
    if ((uStack_1f8 & 0x80000000000000) != 0) {
      uVar21 = uStack_1f8 & 0xff00ffffffffffff;
      lVar20 = *(long *)(uVar21 - 8);
      lVar14 = lVar20 + 9;
      _auStack_338 = auVar25;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar14,8);
      }
      *plVar13 = lVar20;
      func_0x0eee2f00(plVar13 + 1,uVar21,lVar20);
      *(undefined1 *)((long)plVar13 + lVar20 + 8) = 0;
      uStack_330 = (ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_328 = 0;
    uVar21 = uStack_1f0;
    if ((uStack_1f0 & 0x80000000000000) != 0) {
      uVar21 = uStack_1f0 & 0xff00ffffffffffff;
      lVar20 = *(long *)(uVar21 - 8);
      lVar14 = lVar20 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar14,8);
      }
      *plVar13 = lVar20;
      func_0x0eee2f00(plVar13 + 1,uVar21,lVar20);
      *(undefined1 *)((long)plVar13 + lVar20 + 8) = 0;
      uVar21 = (ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    pcStack_320 = (code *)CONCAT71(pcStack_320._1_7_,1);
    uStack_328 = uVar21;
  }
  func_0x0412e5e0(auStack_100,puVar12,0x4e);
  lStack_a8 = auStack_2f8._0_8_;
  uStack_a0 = auStack_2f8._8_8_;
  uStack_98 = auStack_2e8._0_8_;
  uStack_90 = (ulong)stack0xfffffffffffffd20;
  pcStack_88 = pcStack_2d8;
  puStack_80 = puStack_2d0;
  puStack_78 = puStack_2c8;
  if ((auStack_100[0] & 1) != 0) {
    func_0x0412a280(puStack_f0,auStack_100[0] & 0xfffffffffffffffe);
  }
  if ((char)pcStack_320 == '\x01') {
    if ((uStack_328 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_328 & 0xff00ffffffffffff) - 8);
    }
    uStack_328 = 0;
    if ((uStack_330 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_330 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0c33a900(auStack_2f8,lStack_a8 + 0x18);
  if (iStack_2dc == 2) {
    piVar18 = *(int **)(*(long *)(auStack_2e8._0_8_ + 0x78) + 0x60);
    iVar9 = *piVar18;
    while (iVar9 != auStack_2e8._8_4_) {
      piVar18 = piVar18 + 0x16;
      iVar9 = *piVar18;
    }
    uVar21 = *(ulong *)(piVar18 + 0xc);
    while (uVar21 != auStack_2f8._8_8_) {
      piVar18 = *(int **)(piVar18 + 0xe);
      uVar21 = *(ulong *)(piVar18 + 0xc);
    }
LAB_0c24e93f:
    *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
  }
  else {
    if (iStack_2dc == 1) {
      piVar18 = *(int **)(*(long *)(auStack_2e8._0_8_ + 0x78) + 0x48);
      iVar9 = *piVar18;
      while (iVar9 != auStack_2e8._8_4_) {
        piVar18 = piVar18 + 0x1a;
        iVar9 = *piVar18;
      }
      goto LAB_0c24e93f;
    }
    if (iStack_2dc == 0) {
      *(uint *)(auStack_2e8._0_8_ + 0x18) = *(uint *)(auStack_2e8._0_8_ + 0x18) | 0x40000;
    }
  }
  func_0x0c33aee0(auStack_2f8,&lStack_a8,&UNK_0129a922,6);
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar17 = &UNK_0f360d68;
  plVar13 = stack0xfffffffffffffd20;
  stack0xfffffffffffffd20 = puVar17;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  uStack_3a8._0_4_ = auStack_2e8._0_4_;
  uStack_3a0 = 0;
  uStack_398 = 0;
  uStack_390 = 1;
  pcStack_388 = (code *)0x0;
  uStack_380 = &UNK_0c33beb0;
  puStack_378 = &SUB_048b06d0;
  puStack_370 = &SUB_0c33bb90;
  puStack_368 = &UNK_0c33bec0;
  puStack_360 = &UNK_0c33c0b0;
  uStack_358 = 0;
  auStack_350 = ZEXT816(0);
  func_0x048b05a0(auStack_2f8._8_8_,&uStack_3a8);
  uVar6 = auStack_350._8_8_;
  if ((long *)auStack_350._8_8_ != (long *)0x0) {
    LOCK();
    plVar13 = (long *)(auStack_350._8_8_ + 8);
    lVar14 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*(long *)auStack_350._8_8_ + 0x10))(auStack_350._8_8_);
      FUN_0412c2d0(uVar6);
    }
  }
  func_0x0c33b190(auStack_2f8);
  uStack_38 = puStack_78._0_1_;
  pcStack_48 = pcStack_88;
  puStack_40 = puStack_80;
  uStack_58 = uStack_98;
  uStack_50 = uStack_90;
  lStack_68 = lStack_a8;
  uStack_60 = uStack_a0;
  func_0x048b0bc0(auStack_2e8 + 8);
  lStack_158 = lStack_68;
  uStack_150 = uStack_60;
  uStack_148 = uStack_58;
  pcStack_140 = (code *)uStack_50;
  pcStack_138 = pcStack_48;
  puStack_130 = puStack_40;
  uStack_128 = CONCAT71(uStack_37,uStack_38);
  func_0x0c33a900(auStack_2f8,lStack_68 + 0x18);
  if (iStack_2dc == 2) {
    piVar18 = *(int **)(*(long *)(auStack_2e8._0_8_ + 0x78) + 0x60);
    iVar9 = *piVar18;
    while (iVar9 != auStack_2e8._8_4_) {
      piVar18 = piVar18 + 0x16;
      iVar9 = *piVar18;
    }
    uVar21 = *(ulong *)(piVar18 + 0xc);
    while (uVar21 != auStack_2f8._8_8_) {
      piVar18 = *(int **)(piVar18 + 0xe);
      uVar21 = *(ulong *)(piVar18 + 0xc);
    }
LAB_0c24ebdf:
    *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
  }
  else {
    if (iStack_2dc == 1) {
      piVar18 = *(int **)(*(long *)(auStack_2e8._0_8_ + 0x78) + 0x48);
      iVar9 = *piVar18;
      while (iVar9 != auStack_2e8._8_4_) {
        piVar18 = piVar18 + 0x1a;
        iVar9 = *piVar18;
      }
      goto LAB_0c24ebdf;
    }
    if (iStack_2dc == 0) {
      *(uint *)(auStack_2e8._0_8_ + 0x18) = *(uint *)(auStack_2e8._0_8_ + 0x18) | 0x40000;
    }
  }
  func_0x0c33aee0(auStack_2f8,&lStack_158,&UNK_014a4994,0xe);
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar17 = &UNK_0ef46ef8;
  plVar13 = stack0xfffffffffffffd20;
  stack0xfffffffffffffd20 = puVar17;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  uStack_3a8._0_4_ = auStack_2e8._0_4_;
  uStack_3a0 = 0;
  uStack_398 = 0;
  uStack_390 = 1;
  pcStack_388 = (code *)0x0;
  uStack_380 = &UNK_04906f70;
  puStack_378 = &SUB_048b06d0;
  puStack_370 = &UNK_04906c50;
  puStack_368 = &UNK_0c33c650;
  puStack_360 = &UNK_0c33c7b0;
  uStack_358 = 0;
  auStack_350 = ZEXT816(0);
  func_0x048b05a0(auStack_2f8._8_8_,&uStack_3a8);
  uVar6 = auStack_350._8_8_;
  if ((long *)auStack_350._8_8_ != (long *)0x0) {
    LOCK();
    plVar13 = (long *)(auStack_350._8_8_ + 8);
    lVar14 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*(long *)auStack_350._8_8_ + 0x10))(auStack_350._8_8_);
      FUN_0412c2d0(uVar6);
    }
  }
  func_0x0c33b190(auStack_2f8);
  cStack_168 = (char)uStack_128;
  pcStack_178 = pcStack_138;
  puStack_170 = puStack_130;
  uStack_188 = uStack_148;
  pcStack_180 = pcStack_140;
  lStack_198 = lStack_158;
  uStack_190 = uStack_150;
  func_0x048b0bc0(auStack_2e8 + 8);
  func_0x0c33a900(auStack_2f8,lStack_198 + 0x18);
  if (iStack_2dc == 2) {
    piVar18 = *(int **)(*(long *)(auStack_2e8._0_8_ + 0x78) + 0x60);
    iVar9 = *piVar18;
    while (iVar9 != auStack_2e8._8_4_) {
      piVar18 = piVar18 + 0x16;
      iVar9 = *piVar18;
    }
    uVar21 = *(ulong *)(piVar18 + 0xc);
    while (uVar21 != auStack_2f8._8_8_) {
      piVar18 = *(int **)(piVar18 + 0xe);
      uVar21 = *(ulong *)(piVar18 + 0xc);
    }
LAB_0c24ee3f:
    *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
  }
  else {
    if (iStack_2dc == 1) {
      piVar18 = *(int **)(*(long *)(auStack_2e8._0_8_ + 0x78) + 0x48);
      iVar9 = *piVar18;
      while (iVar9 != auStack_2e8._8_4_) {
        piVar18 = piVar18 + 0x1a;
        iVar9 = *piVar18;
      }
      goto LAB_0c24ee3f;
    }
    if (iStack_2dc == 0) {
      *(uint *)(auStack_2e8._0_8_ + 0x18) = *(uint *)(auStack_2e8._0_8_ + 0x18) | 0x40000;
    }
  }
  func_0x0c33aee0(auStack_2f8,&lStack_198,&UNK_01350e25,0xe);
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar17 = &UNK_0f35f2b0;
  plVar13 = stack0xfffffffffffffd20;
  stack0xfffffffffffffd20 = puVar17;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  uStack_3a8._0_4_ = auStack_2e8._0_4_;
  uStack_3a0 = 0;
  uStack_398 = 0;
  uStack_390 = 1;
  pcStack_388 = (code *)0x0;
  uStack_380 = &UNK_0c340d30;
  puStack_378 = &SUB_048b06d0;
  puStack_370 = &UNK_0c33f670;
  puStack_368 = &UNK_0c340df0;
  puStack_360 = &UNK_0c3410f0;
  uStack_358 = 0;
  auStack_350 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_2f8._8_8_,&uStack_3a8);
  uVar6 = auStack_350._8_8_;
  if ((long *)auStack_350._8_8_ != (long *)0x0) {
    LOCK();
    plVar13 = (long *)(auStack_350._8_8_ + 8);
    lVar14 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*(long *)auStack_350._8_8_ + 0x10))(auStack_350._8_8_);
      FUN_0412c2d0(uVar6);
    }
  }
  func_0x0c33b190(auStack_2f8);
  func_0x048b0bc0(auStack_2e8 + 8);
  if (cStack_1e8 == '\x01') {
    if ((uStack_1f0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1f0 & 0xff00ffffffffffff) - 8);
    }
    uStack_1f0 = 0;
    if ((uStack_1f8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1f8 & 0xff00ffffffffffff) - 8);
    }
  }
  func_0x0412a280(puVar12,0x50);
  if (cStack_208 == '\x01') {
    if ((uStack_210 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_210 & 0xff00ffffffffffff) - 8);
    }
    uStack_210 = 0;
    if ((uStack_218 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_218 & 0xff00ffffffffffff) - 8);
    }
    uStack_218 = 0;
  }
  func_0x0c6ec470(param_4);
  if ((DAT_0f6da940 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6da940), iVar9 != 0)) {
    func_0x0c330a00();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6da8c0,0xf53dab8);
    func_0x0410844d(&DAT_0f6da940);
  }
  plVar13 = (long *)(*(long *)(param_4 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_4 + 0x20) - *(long *)(param_4 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6da8c0 + 4)) * 8);
  do {
    lVar14 = *plVar13;
    if (lVar14 == -1) goto LAB_0c24f110;
    plVar13 = (long *)(*(long *)(param_4 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_4 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f6da8c0 + 4))
  ;
  if (plVar13 == *(long **)(param_4 + 0x38)) {
LAB_0c24f110:
    puVar11 = &DAT_0f6da8c0;
    if (iRam000000000f6da920 != -0x2b3da790) goto LAB_0c24f17a;
LAB_0c24f13b:
    lVar14 = *(long *)(puVar11 + 0x68);
    if (lVar14 == 0) goto LAB_0c24f17a;
    bVar24 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar20 = lVar14 + 9;
    if (bVar24) {
      lVar20 = *(long *)(lVar14 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar24) {
      uVar21 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x0c331000(auStack_338,param_4,lVar20,uVar21);
  }
  else {
    puVar11 = (undefined *)plVar13[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0c24f13b;
LAB_0c24f17a:
    func_0x0c331000(auStack_338,param_4,&UNK_01350e25,0xe);
  }
  if (cStack_308 == '\0') {
    func_0x0c331c30(auStack_2f8,auStack_338,&UNK_01ccbfc0);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f353258;
    plVar13 = stack0xfffffffffffffd20;
    stack0xfffffffffffffd20 = puVar12;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    uStack_3a8._0_4_ = auStack_2e8._0_4_;
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 1;
    pcStack_388 = (code *)0x0;
    uStack_380 = &UNK_0c332190;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &SUB_08f20100;
    puStack_368 = &UNK_0c3321a0;
    puStack_360 = &UNK_0c332340;
    uStack_358 = 0;
    auStack_350 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_2f8._8_8_,&uStack_3a8);
    uVar6 = auStack_350._8_8_;
    if ((long *)auStack_350._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_350._8_8_ + 8);
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_350._8_8_ + 0x10))(auStack_350._8_8_);
        FUN_0412c2d0(uVar6);
      }
    }
    func_0x0c331e90(auStack_2f8);
    cStack_168 = cStack_308;
    puStack_170 = (undefined *)CONCAT44(uStack_30c,uStack_310);
    pcStack_178 = pcStack_318;
    uStack_188 = uStack_328;
    pcStack_180 = pcStack_320;
    lStack_198 = (long)auStack_338;
    uStack_190 = uStack_330;
    func_0x048b0bc0(auStack_2e8 + 8);
    func_0x0c331c30(auStack_2f8,&lStack_198,&UNK_0128b951);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ce8;
    plVar13 = stack0xfffffffffffffd20;
    stack0xfffffffffffffd20 = puVar12;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    uStack_3a8._0_4_ = auStack_2e8._0_4_;
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 1;
    pcStack_388 = (code *)0x0;
    uStack_380 = &UNK_0490ce30;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &SUB_0490cb20;
    puStack_368 = &UNK_0c3327b0;
    puStack_360 = &UNK_0c332910;
    uStack_358 = 0;
    auStack_350 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_2f8._8_8_,&uStack_3a8);
    uVar6 = auStack_350._8_8_;
    if ((long *)auStack_350._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_350._8_8_ + 8);
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_350._8_8_ + 0x10))(auStack_350._8_8_);
        FUN_0412c2d0(uVar6);
      }
    }
    func_0x0c331e90(auStack_2f8);
    func_0x048b0bc0(auStack_2e8 + 8);
  }
  if ((DAT_0f6da9f8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6da9f8), iVar9 != 0)) {
    func_0x0c332bb0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6da978,0xf53dab8);
    func_0x0410844d(&DAT_0f6da9f8);
  }
  plVar13 = (long *)(*(long *)(param_4 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_4 + 0x20) - *(long *)(param_4 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6da978 + 4)) * 8);
  do {
    lVar14 = *plVar13;
    if (lVar14 == -1) goto LAB_0c24f4a0;
    plVar13 = (long *)(*(long *)(param_4 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_4 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f6da978 + 4))
  ;
  if (plVar13 == *(long **)(param_4 + 0x38)) {
LAB_0c24f4a0:
    puVar11 = &DAT_0f6da978;
    if (iRam000000000f6da9d8 != -0x2b3da790) goto LAB_0c24f613;
LAB_0c24f4d2:
    lVar14 = *(long *)(puVar11 + 0x68);
    if (lVar14 == 0) goto LAB_0c24f613;
    bVar24 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar20 = lVar14 + 9;
    if (bVar24) {
      lVar20 = *(long *)(lVar14 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar24) {
      uVar21 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x0c333630(auStack_338,param_4,lVar20,uVar21);
  }
  else {
    puVar11 = (undefined *)plVar13[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0c24f4d2;
LAB_0c24f613:
    func_0x0c333630(auStack_338,param_4,0,0);
  }
  puVar23 = puStack_1c0;
  plVar13 = plStack_c8;
  if (cStack_308 == '\0') {
    func_0x0c333c20(auStack_2f8,(long)auStack_338 + 0x18);
    if (iStack_2dc == 2) {
      piVar18 = *(int **)(*(long *)(auStack_2e8._0_8_ + 0x78) + 0x60);
      iVar9 = *piVar18;
      while (iVar9 != auStack_2e8._8_4_) {
        piVar18 = piVar18 + 0x16;
        iVar9 = *piVar18;
      }
      uVar21 = *(ulong *)(piVar18 + 0xc);
      while (uVar21 != auStack_2f8._8_8_) {
        piVar18 = *(int **)(piVar18 + 0xe);
        uVar21 = *(ulong *)(piVar18 + 0xc);
      }
LAB_0c24f9df:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (iStack_2dc == 1) {
        piVar18 = *(int **)(*(long *)(auStack_2e8._0_8_ + 0x78) + 0x48);
        iVar9 = *piVar18;
        while (iVar9 != auStack_2e8._8_4_) {
          piVar18 = piVar18 + 0x1a;
          iVar9 = *piVar18;
        }
        goto LAB_0c24f9df;
      }
      if (iStack_2dc == 0) {
        *(uint *)(auStack_2e8._0_8_ + 0x18) = *(uint *)(auStack_2e8._0_8_ + 0x18) | 0x40000;
      }
    }
    func_0x0c3341e0(auStack_2f8,auStack_338,&UNK_014a4994);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ef8;
    plVar13 = stack0xfffffffffffffd20;
    stack0xfffffffffffffd20 = puVar12;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    uStack_3a8._0_4_ = auStack_2e8._0_4_;
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 1;
    pcStack_388 = (code *)0x0;
    uStack_380 = &UNK_04906f70;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &UNK_04906c50;
    puStack_368 = &UNK_0c3347b0;
    puStack_360 = &UNK_0c334910;
    uStack_358 = 0;
    auStack_350 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_2f8._8_8_,&uStack_3a8);
    uVar6 = auStack_350._8_8_;
    if ((long *)auStack_350._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_350._8_8_ + 8);
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_350._8_8_ + 0x10))(auStack_350._8_8_);
        FUN_0412c2d0(uVar6);
      }
    }
    func_0x0c3344b0(auStack_2f8);
    cStack_168 = cStack_308;
    puStack_170 = (undefined *)CONCAT44(uStack_30c,uStack_310);
    pcStack_178 = pcStack_318;
    uStack_188 = uStack_328;
    pcStack_180 = pcStack_320;
    lStack_198 = (long)auStack_338;
    uStack_190 = uStack_330;
    func_0x048b0bc0(auStack_2e8 + 8);
    func_0x0c333c20(auStack_2f8,lStack_198 + 0x18);
    if (iStack_2dc == 2) {
      piVar18 = *(int **)(*(long *)(auStack_2e8._0_8_ + 0x78) + 0x60);
      iVar9 = *piVar18;
      while (iVar9 != auStack_2e8._8_4_) {
        piVar18 = piVar18 + 0x16;
        iVar9 = *piVar18;
      }
      uVar21 = *(ulong *)(piVar18 + 0xc);
      while (uVar21 != auStack_2f8._8_8_) {
        piVar18 = *(int **)(piVar18 + 0xe);
        uVar21 = *(ulong *)(piVar18 + 0xc);
      }
LAB_0c24fc2f:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (iStack_2dc == 1) {
        piVar18 = *(int **)(*(long *)(auStack_2e8._0_8_ + 0x78) + 0x48);
        iVar9 = *piVar18;
        while (iVar9 != auStack_2e8._8_4_) {
          piVar18 = piVar18 + 0x1a;
          iVar9 = *piVar18;
        }
        goto LAB_0c24fc2f;
      }
      if (iStack_2dc == 0) {
        *(uint *)(auStack_2e8._0_8_ + 0x18) = *(uint *)(auStack_2e8._0_8_ + 0x18) | 0x40000;
      }
    }
    func_0x0c3341e0(auStack_2f8,&lStack_198,&UNK_01350e25);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f35eff8;
    plVar13 = stack0xfffffffffffffd20;
    stack0xfffffffffffffd20 = puVar12;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    uStack_3a8._0_4_ = auStack_2e8._0_4_;
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 1;
    pcStack_388 = (code *)0x0;
    uStack_380 = &UNK_0c338280;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &UNK_0c336eb0;
    puStack_368 = &UNK_0c338340;
    puStack_360 = &UNK_0c338660;
    uStack_358 = 0;
    auStack_350 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_2f8._8_8_,&uStack_3a8);
    uVar6 = auStack_350._8_8_;
    if ((long *)auStack_350._8_8_ != (long *)0x0) {
      LOCK();
      plVar13 = (long *)(auStack_350._8_8_ + 8);
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)auStack_350._8_8_ + 0x10))(auStack_350._8_8_);
        FUN_0412c2d0(uVar6);
      }
    }
    func_0x0c3344b0(auStack_2f8);
    func_0x048b0bc0(auStack_2e8 + 8);
    puVar23 = puStack_1c0;
    plVar13 = plStack_c8;
  }
  puStack_1c0 = puVar23;
  plStack_c8 = plVar13;
  if (cStack_1a0 == '\x01') {
    if ((uStack_1a8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1a8 & 0xff00ffffffffffff) - 8);
    }
    uStack_1a8 = 0;
    if ((uStack_1b0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1b0 & 0xff00ffffffffffff) - 8);
    }
    uStack_1b0 = 0;
  }
  if (alStack_c0[0] != 0) {
    func_0x0412a280(alStack_c0[0],lStack_b0 - alStack_c0[0]);
  }
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2a0 = 0;
  uStack_258 = 0;
  _auStack_2e8 = (undefined1  [16])0x0;
  pcStack_2d8 = (code *)((ulong)pcStack_2d8 & 0xffffffffffffff00);
  auStack_298 = (undefined1  [16])0x0;
  uStack_288 = 0;
  auStack_2f8 = ZEXT816(0xc2504d0);
  if (auStack_2f8 + 8 != puStack_d0) {
    func_0x0c24b8c0();
  }
  func_0x0c24ba30(&pcStack_2d8,puVar23);
  plVar5 = (long *)plVar13[4];
  if (plVar5 == (long *)0x0) {
    pcStack_388 = (code *)0x0;
  }
  else if (plVar5 == plVar13) {
    pcStack_388 = (code *)&uStack_3a8;
    (**(code **)(*plVar5 + 0x18))(plVar5,&uStack_3a8);
  }
  else {
    pcStack_388 = (code *)(**(code **)(*plVar5 + 0x10))();
  }
  func_0x0c24be50(&uStack_3a8,auStack_278);
  if (pcStack_388 == (code *)&uStack_3a8) {
    lVar14 = 0x20;
  }
  else {
    lVar14 = 0x28;
    if (pcStack_388 == (code *)0x0) {
      cVar3 = (char)puVar23[3];
      goto joined_r0x0c24f75d;
    }
  }
  (**(code **)(*(long *)pcStack_388 + lVar14))();
  cVar3 = (char)puVar23[3];
joined_r0x0c24f75d:
  uStack_1e0 = uStack_1e0 & 0xffffffffffffff00;
  cStack_1c8 = '\0';
  if (cVar3 == '\x01') {
    cStack_1c8 = 0;
    uStack_1e0 = *puVar23;
    uStack_1d8 = 0;
    uVar21 = puVar23[1];
    if ((uVar21 & 0x80000000000000) != 0) {
      lVar20 = *(long *)((uVar21 & 0xff00ffffffffffff) - 8);
      lVar14 = lVar20 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar14,8);
      }
      *plVar13 = lVar20;
      func_0x0eee2f00(plVar13 + 1,uVar21 & 0xff00ffffffffffff,lVar20);
      *(undefined1 *)((long)plVar13 + lVar20 + 8) = 0;
      uVar21 = (ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      puVar23 = puStack_1c0;
    }
    uStack_1d0 = 0;
    uVar22 = puVar23[2];
    uStack_1d8 = uVar21;
    if ((uVar22 & 0x80000000000000) != 0) {
      lVar20 = *(long *)((uVar22 & 0xff00ffffffffffff) - 8);
      lVar14 = lVar20 + 9;
      plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar14,8);
      if (lVar14 != 0 && plVar13 == (long *)0x0) {
        func_0x0eec74c0(lVar14,8);
      }
      *plVar13 = lVar20;
      func_0x0eee2f00(plVar13 + 1,uVar22 & 0xff00ffffffffffff,lVar20);
      *(undefined1 *)((long)plVar13 + lVar20 + 8) = 0;
      uVar22 = (ulong)(plVar13 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    cStack_1c8 = '\x01';
    uStack_1d0 = uVar22;
  }
  func_0x0c4025b0(param_4,uStack_d8,auStack_2f8,&uStack_1e0);
  if (cStack_1c8 == '\x01') {
    if ((uStack_1d0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1d0 & 0xff00ffffffffffff) - 8);
    }
    uStack_1d0 = 0;
    if ((uStack_1d8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1d8 & 0xff00ffffffffffff) - 8);
    }
    uStack_1d8 = 0;
  }
  func_0x0a738f50(auStack_2f8);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14d9994  Digger item component specifies how quickly this item can dig specific blocks.
 * 0x14d99a4  onent specifies how quickly this item can dig specific blocks.
 * 0x14d99b4  how quickly this item can dig specific blocks.
 * 0x14d99c4   item can dig specific blocks.
 * 0x14d99d2  specific blocks.
 * 0x14eaba0  [cereal:document
 */
