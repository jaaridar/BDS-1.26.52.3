/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe725380 (ELF vaddr 0xe625380)
 * Label: caller-of-callee
 * Body:  [[0e725380, 0e725a01] [0e725a10, 0e725d56] [0e725d60, 0e7268d1] [0e7268e0, 0e726afc] [0e726b00, 0e726cb5] [0e726cc0, 0e726cf1] [0e726d00, 0e7277aa]]
 * Ghidra: FUN_0e725380
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e725380(long param_1)

{
  long *plVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  code *pcVar14;
  undefined *puVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *pbVar21;
  long lVar22;
  bool bVar23;
  undefined8 uStack_380;
  long *plStack_378;
  undefined8 uStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  undefined *puStack_358;
  undefined1 *puStack_350;
  undefined1 *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined4 uStack_330;
  undefined8 uStack_328;
  long *plStack_320;
  undefined *puStack_318;
  undefined8 *puStack_310;
  undefined4 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined1 uStack_2d8;
  undefined4 uStack_2d7;
  undefined2 uStack_2d3;
  undefined1 uStack_2d1;
  undefined1 uStack_2d0;
  undefined2 uStack_2cf;
  undefined1 uStack_2cd;
  undefined4 uStack_2cc;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined4 uStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined2 uStack_258;
  undefined2 uStack_256;
  uint uStack_254;
  uint uStack_250;
  undefined1 uStack_24c;
  undefined4 uStack_240;
  undefined3 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  char cStack_208;
  ulong uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  char cStack_1a8;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined *puStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 uStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
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
  undefined *puStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  func_0x0d8a0ff0();
  func_0x0d8a4910(param_1);
  if ((DAT_0f75ef00 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75ef00), iVar9 != 0)) {
    func_0x0e752730();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75ee80,0xf53dab8);
    func_0x0410844d(&DAT_0f75ef00);
  }
  uStack_200 = param_1 + 0x18;
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75ee80 + 4)) * 8);
  do {
    lVar16 = *plVar13;
    if (lVar16 == -1) goto LAB_0e725410;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f75ee80 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e725410:
    puVar11 = &DAT_0f75ee80;
    if (iRam000000000f75eee0 != -0x2b3da790) goto LAB_0e72547d;
LAB_0e72543b:
    lVar16 = *(long *)(puVar11 + 0x68);
    if (lVar16 == 0) goto LAB_0e72547d;
    bVar23 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar22 = lVar16 + 9;
    if (bVar23) {
      lVar22 = *(long *)(lVar16 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar23) {
      uVar17 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0e752db0(&uStack_238,param_1,lVar22,uVar17);
  }
  else {
    puVar11 = (undefined *)plVar13[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0e72543b;
LAB_0e72547d:
    func_0x0e752db0(&uStack_238,param_1,&UNK_013e2a2b,0xb);
  }
  if (cStack_208 == '\0') {
    uStack_370._4_4_ = (uint)((ulong)uStack_370 >> 0x20);
    uStack_380._4_4_ = (undefined4)((ulong)uStack_380 >> 0x20);
    if ((DAT_0f75ef20 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75ef20), iVar9 != 0)) {
      func_0x0e752840();
      func_0x0410844d(&DAT_0f75ef20);
    }
    uStack_210 = 0x28a5a83e00000001;
    lVar16 = CONCAT44(uStack_234,uStack_238);
    if ((DAT_0f75ef00 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75ef00), iVar9 != 0)) {
      func_0x0e752730();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75ee80,0xf53dab8);
      func_0x0410844d(&DAT_0f75ef00);
    }
    puStack_310 = (undefined8 *)(lVar16 + 0x18);
    plVar13 = (long *)(*(long *)(lVar16 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f75ee80 + 4)) * 8);
    do {
      lVar22 = *plVar13;
      if (lVar22 == -1) goto LAB_0e725540;
      plVar13 = (long *)(*(long *)(lVar16 + 0x30) + lVar22 * 0x18);
    } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar22 * 0x18) != *(uint *)(_DAT_0f75ee80 + 4)
            );
    if (plVar13 == *(long **)(lVar16 + 0x38)) {
LAB_0e725540:
      puStack_318 = &DAT_0f75ee80;
    }
    else {
      puStack_318 = (undefined *)plVar13[2];
    }
    func_0x0ed621a0(&puStack_318,uStack_210._4_4_);
    puStack_318 = (undefined *)CONCAT62(puStack_318._2_6_,1);
    uStack_308 = uStack_210._4_4_;
    uStack_300 = (code *)0x0;
    uStack_2f8 = (code *)0x0;
    uStack_2f0 = 0;
    lStack_2e8 = 0;
    lStack_2e0 = 0;
    uStack_2d8 = 0x14;
    uStack_2d7 = 0x6e656469;
    uStack_2d3 = 0x6974;
    uStack_2d1 = 0x66;
    uStack_2d0 = 0x69;
    uStack_2cf = 0x7265;
    uStack_2cd = 0;
    lStack_2c0 = 0;
    lStack_2b8 = 0;
    lStack_2b0 = 0;
    lStack_2a8 = 0;
    lStack_2a0 = 0;
    lStack_298 = 0;
    uStack_290 = 0x3f600000;
    puStack_310 = (undefined8 *)&uStack_230;
    func_0x048afb10(&lStack_2c0,8);
    uStack_268 = 0;
    lStack_260 = 0;
    lStack_278 = 0;
    uStack_270 = 0;
    lStack_288 = 0;
    lStack_280 = 0;
    uStack_258 = 0xff00;
    uStack_254 = uStack_254 & 0xffffff00;
    uStack_250 = uStack_250 & 0xffffff00;
    uStack_24c = 0;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f012348;
    if (uStack_300 != (code *)0x0) {
      lVar16 = *(long *)uStack_300;
      uStack_300 = (code *)puVar12;
      (**(code **)(lVar16 + 8))();
      puVar12 = (undefined8 *)uStack_300;
    }
    uStack_300 = (code *)puVar12;
    uStack_380 = CONCAT44(uStack_380._4_4_,uStack_308);
    plStack_378 = (long *)0x0;
    uStack_370 = (long *)((ulong)uStack_370._4_4_ << 0x20);
    pcStack_368 = (code *)0x1;
    uStack_360 = 0;
    puStack_358 = &UNK_05ea71a0;
    puStack_350 = &SUB_048b06d0;
    puStack_348 = &SUB_05e9fca0;
    puStack_340 = &UNK_0e753910;
    puStack_338 = &UNK_0e753b20;
    uStack_330 = 0;
    uStack_328 = 0;
    plStack_320 = (long *)0x0;
    func_0x048b05a0(puStack_310,&uStack_380);
    plVar13 = plStack_320;
    if (plStack_320 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_320 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_320 + 0x10))(plStack_320);
        func_0x0412c2d0(plVar13);
      }
    }
    puVar12 = puStack_310;
    if ((DAT_0f550a20 == '\0') && (iVar9 = func_0x04108328(&DAT_0f550a20), iVar9 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_380 = CONCAT44(uStack_380._4_4_,_DAT_0f550a0c);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar16 = (long)uStack_2f8;
    puVar8 = (undefined8 *)uStack_300;
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = (long)&UNK_0ef439d0;
    plStack_378 = plVar13 + 3;
    uStack_300 = (code *)0x0;
    uStack_2f8 = (code *)0x0;
    plVar13[3] = (long)puVar8;
    plVar13[4] = lVar16;
    plVar13[7] = lStack_2e0;
    plVar13[5] = uStack_2f0;
    plVar13[6] = lStack_2e8;
    uStack_2f0 = 0;
    lStack_2e8 = 0;
    lStack_2e0 = 0;
    plVar13[10] = lStack_2c8;
    plVar13[8] = CONCAT17(uStack_2d1,CONCAT25(uStack_2d3,CONCAT41(uStack_2d7,uStack_2d8)));
    plVar13[9] = CONCAT44(uStack_2cc,CONCAT13(uStack_2cd,CONCAT21(uStack_2cf,uStack_2d0)));
    uStack_2d8 = 0;
    uStack_2d7 = 0;
    uStack_2d3 = 0;
    uStack_2d1 = 0;
    uStack_2d0 = 0;
    uStack_2cf = 0;
    uStack_2cd = 0;
    uStack_2cc = 0;
    lStack_2c8 = 0;
    plVar13[0xb] = lStack_2c0;
    plVar13[0xc] = lStack_2b8;
    plVar13[0xd] = lStack_2b0;
    lStack_2c0 = 0;
    lStack_2b8 = 0;
    lStack_2b0 = 0;
    plVar13[0xe] = lStack_2a8;
    plVar13[0xf] = lStack_2a0;
    plVar13[0x10] = lStack_298;
    lStack_2a8 = 0;
    lStack_2a0 = 0;
    lStack_298 = 0;
    *(undefined4 *)(plVar13 + 0x11) = uStack_290;
    plVar13[0x12] = lStack_288;
    plVar13[0x13] = lStack_280;
    plVar13[0x14] = lStack_278;
    lStack_288 = 0;
    lStack_280 = 0;
    lStack_278 = 0;
    plVar13[0x17] = lStack_260;
    *(undefined4 *)(plVar13 + 0x15) = (undefined4)uStack_270;
    *(undefined4 *)((long)plVar13 + 0xac) = uStack_270._4_4_;
    *(undefined4 *)(plVar13 + 0x16) = (undefined4)uStack_268;
    *(undefined4 *)((long)plVar13 + 0xb4) = uStack_268._4_4_;
    uStack_270 = 0;
    uStack_268 = 0;
    lStack_260 = 0;
    *(ulong *)((long)plVar13 + 0xc5) = CONCAT17(uStack_24c,CONCAT43(uStack_250,uStack_254._1_3_));
    plVar13[0x18] = CONCAT44(uStack_254,CONCAT22(uStack_256,uStack_258));
    uStack_1d8 = 0;
    uStack_1d0 = (long *)0x0;
    uStack_370 = plVar13;
    func_0x048afd20(puVar12,&uStack_380);
    plVar13 = uStack_370;
    if (uStack_370 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_370 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_370 + 0x10))(uStack_370);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = uStack_1d0;
    if (uStack_1d0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_1d0 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_1d0 + 0x10))(uStack_1d0);
        func_0x0412c2d0(plVar13);
      }
    }
    lVar16 = puVar12[2];
    iVar9 = *(int *)((long)puVar12 + 0x1c);
    if (iVar9 == 2) {
      piVar18 = *(int **)(*(long *)(lVar16 + 0x78) + 0x60);
      iVar9 = *piVar18;
      while (iVar9 != *(int *)(puVar12 + 3)) {
        piVar18 = piVar18 + 0x16;
        iVar9 = *piVar18;
      }
      for (; *(long *)(piVar18 + 0xc) != puVar12[1]; piVar18 = *(int **)(piVar18 + 0xe)) {
      }
LAB_0e725a1a:
      piVar18[4] = piVar18[4] | (int)puStack_318 << 0x10;
    }
    else {
      if (iVar9 == 1) {
        piVar18 = *(int **)(*(long *)(lVar16 + 0x78) + 0x48);
        iVar9 = *piVar18;
        while (iVar9 != *(int *)(puVar12 + 3)) {
          piVar18 = piVar18 + 0x1a;
          iVar9 = *piVar18;
        }
        goto LAB_0e725a1a;
      }
      if (iVar9 == 0) {
        *(uint *)(lVar16 + 0x18) = *(uint *)(lVar16 + 0x18) | (int)puStack_318 << 0x10;
      }
    }
    lVar16 = CONCAT44(uStack_234,uStack_238);
    iVar9 = (int)uStack_210;
    uStack_198 = uStack_210._4_4_;
    func_0x048b0bc0(&uStack_300);
    func_0x0d928ca0(&puStack_b0);
    uStack_180 = 0xffffffffffffffff;
    uStack_178 = 0;
    uStack_170 = 0xff;
    puStack_188 = &UNK_0f48a648;
    uStack_160 = uStack_a8;
    uStack_15c = uStack_a4;
    uStack_158 = uStack_a0;
    uStack_154 = uStack_9c;
    uStack_150 = uStack_98;
    puStack_168 = &UNK_0f4e3c70;
    func_0x04167a20(auStack_148,auStack_90);
    uStack_140 = uStack_88;
    uStack_138 = uStack_80;
    uStack_130 = uStack_78;
    uStack_128 = uStack_70;
    uStack_120 = uStack_68;
    plStack_118 = plStack_60;
    uStack_68 = 0;
    plStack_60 = (long *)0x0;
    uStack_110 = uStack_58;
    uStack_108 = uStack_50;
    uStack_100 = uStack_48;
    uStack_f8 = uStack_40;
    uStack_f0 = uStack_38;
    uStack_ec = uStack_34;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    if (iVar9 == 4) {
      if ((DAT_0f75ef00 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75ef00), iVar9 != 0)) {
        func_0x0e752730();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f75ee80,0xf53dab8);
        func_0x0410844d(&DAT_0f75ef00);
      }
      plVar13 = (long *)(*(long *)(lVar16 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f75ee80 + 4)) * 8);
      do {
        lVar22 = *plVar13;
        if (lVar22 == -1) goto LAB_0e725c58;
        plVar13 = (long *)(*(long *)(lVar16 + 0x30) + lVar22 * 0x18);
      } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar22 * 0x18) !=
               *(uint *)(_DAT_0f75ee80 + 4));
      if (plVar13 == *(long **)(lVar16 + 0x38)) {
LAB_0e725c58:
        puVar11 = &DAT_0f75ee80;
      }
      else {
        puVar11 = (undefined *)plVar13[2];
      }
      puVar11 = (undefined *)func_0x048b1040(lVar16 + 0x18,puVar11,uStack_198,1);
      if (puVar11 == (undefined *)0x0) {
        puStack_318 = (undefined *)0x0;
        puStack_310 = (undefined8 *)0x0;
        FUN_048b10d0(&puStack_318);
        puVar15 = *(undefined **)(puStack_318 + 0x38);
        puVar11 = puStack_318;
        if (puVar15 == (undefined *)0x0) goto LAB_0e725d34;
LAB_0e725d50:
        do {
          puVar11 = puVar15;
          puVar15 = *(undefined **)(puVar11 + 0x38);
          if (*(undefined **)(puVar11 + 0x38) == (undefined *)0x0) {
            puStack_318 = (undefined *)0x0;
            puStack_310 = (undefined8 *)0x0;
            FUN_048b10d0(&puStack_318);
            puVar15 = puStack_318;
          }
        } while (puVar15 != (undefined *)0x0);
      }
      else {
        puVar15 = *(undefined **)(puVar11 + 0x38);
        if (*(undefined **)(puVar11 + 0x38) != (undefined *)0x0) goto LAB_0e725d50;
LAB_0e725d34:
        puStack_318 = (undefined *)0x0;
        puStack_310 = (undefined8 *)0x0;
        FUN_048b10d0(&puStack_318);
        puVar15 = puStack_318;
        if (puStack_318 != (undefined *)0x0) goto LAB_0e725d50;
      }
      lVar16 = *(long *)(puVar11 + 0x48);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0xa0,0);
      }
LAB_0e725dae:
      *(undefined1 *)(puVar12 + 3) = uStack_170;
      puVar12[1] = uStack_180;
      puVar12[2] = uStack_178;
      *puVar12 = &UNK_0f48a648;
      *(undefined4 *)(puVar12 + 5) = uStack_160;
      *(undefined4 *)((long)puVar12 + 0x2c) = uStack_15c;
      *(undefined4 *)(puVar12 + 6) = uStack_158;
      *(undefined4 *)((long)puVar12 + 0x34) = uStack_154;
      *(undefined1 *)(puVar12 + 7) = uStack_150;
      puVar12[4] = &UNK_0f4e3c70;
      func_0x04167a20(puVar12 + 8,auStack_148);
      puVar12[9] = uStack_140;
      puVar12[10] = uStack_138;
      puVar12[0xb] = uStack_130;
      puVar12[0xc] = uStack_128;
      puVar12[0xd] = uStack_120;
      puVar12[0xe] = plStack_118;
      uStack_120 = 0;
      plStack_118 = (long *)0x0;
      puVar12[0xf] = uStack_110;
      puVar12[0x12] = uStack_f8;
      *(undefined4 *)(puVar12 + 0x10) = (undefined4)uStack_108;
      *(undefined4 *)((long)puVar12 + 0x84) = uStack_108._4_4_;
      *(undefined4 *)(puVar12 + 0x11) = (undefined4)uStack_100;
      *(undefined4 *)((long)puVar12 + 0x8c) = uStack_100._4_4_;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      puVar12[0x13] = CONCAT44(uStack_ec,uStack_f0);
      plVar13 = *(long **)(lVar16 + 8);
      *(undefined8 **)(lVar16 + 8) = puVar12;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x28))();
      }
    }
    else if (iVar9 == 1) {
      if ((DAT_0f75ef00 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75ef00), iVar9 != 0)) {
        func_0x0e752730();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f75ee80,0xf53dab8);
        func_0x0410844d(&DAT_0f75ef00);
      }
      plVar13 = (long *)(*(long *)(lVar16 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f75ee80 + 4)) * 8);
      do {
        lVar22 = *plVar13;
        if (lVar22 == -1) goto LAB_0e725bd8;
        plVar13 = (long *)(*(long *)(lVar16 + 0x30) + lVar22 * 0x18);
      } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar22 * 0x18) !=
               *(uint *)(_DAT_0f75ee80 + 4));
      if (plVar13 == *(long **)(lVar16 + 0x38)) {
LAB_0e725bd8:
        puVar11 = &DAT_0f75ee80;
      }
      else {
        puVar11 = (undefined *)plVar13[2];
      }
      puVar11 = (undefined *)func_0x048b0c90(lVar16 + 0x18,puVar11,uStack_198,1);
      if (puVar11 == (undefined *)0x0) {
        puStack_318 = (undefined *)0x0;
        puStack_310 = (undefined8 *)0x0;
        func_0x048b0d20(&puStack_318);
        puVar11 = puStack_318;
      }
      lVar16 = *(long *)(puVar11 + 0x58);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0xa0,0);
      }
      goto LAB_0e725dae;
    }
    puStack_188 = &UNK_0f48a648;
    puStack_168 = &UNK_0f4e3c70;
    if ((uStack_108 & 1) != 0) {
      func_0x0412a280(uStack_f8,uStack_108 & 0xfffffffffffffffe);
    }
    plVar13 = plStack_118;
    if (plStack_118 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_118 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_118 + 0x10))(plStack_118);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x04167a40(auStack_148);
    puStack_b0 = &UNK_0f4e3c70;
    if ((uStack_50 & 1) != 0) {
      func_0x0412a280(uStack_40,uStack_50 & 0xfffffffffffffffe);
    }
    plVar13 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x04167a40(auStack_90);
  }
  if ((DAT_0f75efb8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75efb8), iVar9 != 0)) {
    func_0x0e753db0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75ef38,0xf53dab8);
    func_0x0410844d(&DAT_0f75efb8);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75ef38 + 4)) * 8);
  do {
    lVar16 = *plVar13;
    if (lVar16 == -1) goto LAB_0e725fc0;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f75ef38 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e725fc0:
    puVar11 = &DAT_0f75ef38;
    if (iRam000000000f75ef98 != -0x2b3da790) goto LAB_0e72602d;
LAB_0e725feb:
    lVar16 = *(long *)(puVar11 + 0x68);
    if (lVar16 == 0) goto LAB_0e72602d;
    bVar23 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar22 = lVar16 + 9;
    if (bVar23) {
      lVar22 = *(long *)(lVar16 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar23) {
      uVar17 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0e7542c0(&uStack_238,param_1,lVar22,uVar17);
  }
  else {
    puVar11 = (undefined *)plVar13[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0e725feb;
LAB_0e72602d:
    func_0x0e7542c0(&uStack_238,param_1,&UNK_014af463,3);
  }
  if (cStack_208 == '\0') {
    func_0x0e754e20(&puStack_318,&uStack_238,&UNK_011e9523);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar13 = (long)&UNK_0f0124a8;
    if (uStack_300 != (code *)0x0) {
      lVar16 = *(long *)uStack_300;
      uStack_300 = (code *)plVar13;
      (**(code **)(lVar16 + 8))();
      plVar13 = (long *)uStack_300;
    }
    uStack_300 = (code *)plVar13;
    uStack_380 = CONCAT44(uStack_380._4_4_,uStack_308);
    plStack_378 = (long *)0x0;
    uStack_370 = (long *)((ulong)uStack_370 & 0xffffffff00000000);
    pcStack_368 = (code *)0x1;
    uStack_360 = 0;
    puStack_358 = &UNK_05da29c0;
    puStack_350 = &SUB_048b06d0;
    puStack_348 = &SUB_05da26d0;
    puStack_340 = &UNK_0e755360;
    puStack_338 = &UNK_0e7554d0;
    uStack_330 = 0;
    uStack_328 = 0;
    plStack_320 = (long *)0x0;
    func_0x048b05a0(puStack_310,&uStack_380);
    plVar13 = plStack_320;
    if (plStack_320 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_320 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_320 + 0x10))(plStack_320);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e755060(&puStack_318);
    func_0x048b0bc0(&uStack_300);
    func_0x0e754e20(&puStack_318,&uStack_238,&UNK_012ba56c);
    pcVar14 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar14 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar14 = &UNK_0f0124a8;
    if (uStack_300 != (code *)0x0) {
      lVar16 = *(long *)uStack_300;
      uStack_300 = pcVar14;
      (**(code **)(lVar16 + 8))();
      pcVar14 = uStack_300;
    }
    uStack_300 = pcVar14;
    uStack_380 = CONCAT44(uStack_380._4_4_,uStack_308);
    plStack_378 = (long *)0x0;
    uStack_370 = (long *)((ulong)uStack_370 & 0xffffffff00000000);
    pcStack_368 = (code *)0x1;
    uStack_360 = 0;
    puStack_358 = &UNK_05da29c0;
    puStack_350 = &SUB_048b06d0;
    puStack_348 = &SUB_05da26d0;
    puStack_340 = &UNK_0e7556a0;
    puStack_338 = &UNK_0e755810;
    uStack_330 = 0;
    uStack_328 = 0;
    plStack_320 = (long *)0x0;
    func_0x048b05a0(puStack_310,&uStack_380);
    plVar13 = plStack_320;
    if (plStack_320 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_320 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_320 + 0x10))(plStack_320);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e755060(&puStack_318);
    func_0x048b0bc0(&uStack_300);
  }
  if ((DAT_0f75f070 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75f070), iVar9 != 0)) {
    func_0x0e755ab0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75eff0,0xf53dab8);
    func_0x0410844d(&DAT_0f75f070);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75eff0 + 4)) * 8);
  do {
    lVar16 = *plVar13;
    if (lVar16 == -1) goto LAB_0e7262f0;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar16 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar16 * 0x18) != *(uint *)(_DAT_0f75eff0 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e7262f0:
    puVar11 = &DAT_0f75eff0;
    if (iRam000000000f75f050 != -0x2b3da790) goto LAB_0e72635d;
LAB_0e72631b:
    lVar16 = *(long *)(puVar11 + 0x68);
    if (lVar16 == 0) goto LAB_0e72635d;
    bVar23 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar22 = lVar16 + 9;
    if (bVar23) {
      lVar22 = *(long *)(lVar16 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar23) {
      uVar17 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0e756150(&uStack_238,param_1,lVar22,uVar17);
  }
  else {
    puVar11 = (undefined *)plVar13[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0e72631b;
LAB_0e72635d:
    func_0x0e756150(&uStack_238,param_1,&UNK_0138be9b,5);
  }
  if (cStack_208 == '\0') {
    if ((DAT_0f75f090 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75f090), iVar9 != 0)) {
      func_0x0e755bc0();
      func_0x0410844d(&DAT_0f75f090);
    }
    uStack_210 = 0x514c98f200000001;
    lVar16 = CONCAT44(uStack_234,uStack_238);
    if ((DAT_0f75f070 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75f070), iVar9 != 0)) {
      func_0x0e755ab0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75eff0,0xf53dab8);
      func_0x0410844d(&DAT_0f75f070);
    }
    puStack_310 = (undefined8 *)(lVar16 + 0x18);
    plVar13 = (long *)(*(long *)(lVar16 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f75eff0 + 4)) * 8);
    do {
      lVar22 = *plVar13;
      if (lVar22 == -1) goto LAB_0e726420;
      plVar13 = (long *)(*(long *)(lVar16 + 0x30) + lVar22 * 0x18);
    } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar22 * 0x18) != *(uint *)(_DAT_0f75eff0 + 4)
            );
    if (plVar13 == *(long **)(lVar16 + 0x38)) {
LAB_0e726420:
      puStack_318 = &DAT_0f75eff0;
    }
    else {
      puStack_318 = (undefined *)plVar13[2];
    }
    func_0x0ed621a0(&puStack_318,uStack_210._4_4_);
    puStack_318 = (undefined *)CONCAT62(puStack_318._2_6_,1);
    uStack_308 = uStack_210._4_4_;
    uStack_300 = (code *)0x0;
    uStack_2f8 = (code *)0x0;
    uStack_2f0 = 0;
    lStack_2e8 = 0;
    lStack_2e0 = 0;
    uStack_2d8 = 10;
    uStack_2d7 = 0x65786f62;
    uStack_2d3 = 0x73;
    lStack_2c0 = 0;
    lStack_2b8 = 0;
    lStack_2b0 = 0;
    lStack_2a8 = 0;
    lStack_2a0 = 0;
    lStack_298 = 0;
    uStack_290 = 0x3f600000;
    puStack_310 = (undefined8 *)&uStack_230;
    func_0x048afb10(&lStack_2c0,8);
    uStack_268 = 0;
    lStack_260 = 0;
    lStack_278 = 0;
    uStack_270 = 0;
    lStack_288 = 0;
    lStack_280 = 0;
    uStack_258 = 0xff00;
    uStack_254 = uStack_254 & 0xffffff00;
    uStack_250 = uStack_250 & 0xffffff00;
    uStack_24c = 0;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f4c8e50;
    if (uStack_300 != (code *)0x0) {
      lVar16 = *(long *)uStack_300;
      uStack_300 = (code *)puVar12;
      (**(code **)(lVar16 + 8))();
      puVar12 = (undefined8 *)uStack_300;
    }
    uStack_300 = (code *)puVar12;
    uStack_380 = CONCAT44(uStack_380._4_4_,uStack_308);
    plStack_378 = (long *)0x0;
    uStack_370 = (long *)((ulong)uStack_370 & 0xffffffff00000000);
    pcStack_368 = (code *)0x1;
    uStack_360 = 0;
    puStack_358 = &UNK_0e759d40;
    puStack_350 = &SUB_048b06d0;
    puStack_348 = &UNK_0e758af0;
    puStack_340 = &UNK_0e759e00;
    puStack_338 = &UNK_0e75a010;
    uStack_330 = 0;
    uStack_328 = 0;
    plStack_320 = (long *)0x0;
    func_0x048b05a0(puStack_310,&uStack_380);
    plVar13 = plStack_320;
    if (plStack_320 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_320 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_320 + 0x10))(plStack_320);
        func_0x0412c2d0(plVar13);
      }
    }
    puVar12 = puStack_310;
    if ((DAT_0f550a20 == '\0') && (iVar9 = func_0x04108328(&DAT_0f550a20), iVar9 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_380 = CONCAT44(uStack_380._4_4_,_DAT_0f550a0c);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar16 = (long)uStack_2f8;
    puVar8 = (undefined8 *)uStack_300;
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = (long)&UNK_0ef439d0;
    plStack_378 = plVar13 + 3;
    uStack_300 = (code *)0x0;
    uStack_2f8 = (code *)0x0;
    plVar13[3] = (long)puVar8;
    plVar13[4] = lVar16;
    plVar13[7] = lStack_2e0;
    plVar13[5] = uStack_2f0;
    plVar13[6] = lStack_2e8;
    uStack_2f0 = 0;
    lStack_2e8 = 0;
    lStack_2e0 = 0;
    plVar13[10] = lStack_2c8;
    plVar13[8] = CONCAT17(uStack_2d1,CONCAT25(uStack_2d3,CONCAT41(uStack_2d7,uStack_2d8)));
    plVar13[9] = CONCAT44(uStack_2cc,CONCAT13(uStack_2cd,CONCAT21(uStack_2cf,uStack_2d0)));
    uStack_2d8 = 0;
    uStack_2d7 = 0;
    uStack_2d3 = 0;
    uStack_2d1 = 0;
    uStack_2d0 = 0;
    uStack_2cf = 0;
    uStack_2cd = 0;
    uStack_2cc = 0;
    lStack_2c8 = 0;
    plVar13[0xb] = lStack_2c0;
    plVar13[0xc] = lStack_2b8;
    plVar13[0xd] = lStack_2b0;
    lStack_2c0 = 0;
    lStack_2b8 = 0;
    lStack_2b0 = 0;
    plVar13[0xe] = lStack_2a8;
    plVar13[0xf] = lStack_2a0;
    plVar13[0x10] = lStack_298;
    lStack_2a8 = 0;
    lStack_2a0 = 0;
    lStack_298 = 0;
    *(undefined4 *)(plVar13 + 0x11) = uStack_290;
    plVar13[0x12] = lStack_288;
    plVar13[0x13] = lStack_280;
    plVar13[0x14] = lStack_278;
    lStack_288 = 0;
    lStack_280 = 0;
    lStack_278 = 0;
    plVar13[0x17] = lStack_260;
    *(undefined4 *)(plVar13 + 0x15) = (undefined4)uStack_270;
    *(undefined4 *)((long)plVar13 + 0xac) = uStack_270._4_4_;
    *(undefined4 *)(plVar13 + 0x16) = (undefined4)uStack_268;
    *(undefined4 *)((long)plVar13 + 0xb4) = uStack_268._4_4_;
    uStack_270 = 0;
    uStack_268 = 0;
    lStack_260 = 0;
    *(ulong *)((long)plVar13 + 0xc5) = CONCAT17(uStack_24c,CONCAT43(uStack_250,uStack_254._1_3_));
    plVar13[0x18] = CONCAT44(uStack_254,CONCAT22(uStack_256,uStack_258));
    uStack_1d8 = 0;
    uStack_1d0 = (long *)0x0;
    uStack_370 = plVar13;
    func_0x048afd20(puVar12,&uStack_380);
    plVar13 = uStack_370;
    if (uStack_370 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_370 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_370 + 0x10))(uStack_370);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = uStack_1d0;
    if (uStack_1d0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_1d0 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*uStack_1d0 + 0x10))(uStack_1d0);
        func_0x0412c2d0(plVar13);
      }
    }
    lVar16 = puVar12[2];
    iVar9 = *(int *)((long)puVar12 + 0x1c);
    if (iVar9 == 2) {
      piVar18 = *(int **)(*(long *)(lVar16 + 0x78) + 0x60);
      iVar9 = *piVar18;
      while (iVar9 != *(int *)(puVar12 + 3)) {
        piVar18 = piVar18 + 0x16;
        iVar9 = *piVar18;
      }
      for (; *(long *)(piVar18 + 0xc) != puVar12[1]; piVar18 = *(int **)(piVar18 + 0xe)) {
      }
LAB_0e7268ea:
      piVar18[4] = piVar18[4] | (int)puStack_318 << 0x10;
    }
    else {
      if (iVar9 == 1) {
        piVar18 = *(int **)(*(long *)(lVar16 + 0x78) + 0x48);
        iVar9 = *piVar18;
        while (iVar9 != *(int *)(puVar12 + 3)) {
          piVar18 = piVar18 + 0x1a;
          iVar9 = *piVar18;
        }
        goto LAB_0e7268ea;
      }
      if (iVar9 == 0) {
        *(uint *)(lVar16 + 0x18) = *(uint *)(lVar16 + 0x18) | (int)puStack_318 << 0x10;
      }
    }
    lVar16 = CONCAT44(uStack_234,uStack_238);
    iVar9 = (int)uStack_210;
    uVar4 = uStack_210._4_4_;
    func_0x048b0bc0(&uStack_300);
    if (iVar9 == 4) {
      if ((DAT_0f75f070 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75f070), iVar9 != 0)) {
        func_0x0e755ab0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f75eff0,0xf53dab8);
        func_0x0410844d(&DAT_0f75f070);
      }
      plVar13 = (long *)(*(long *)(lVar16 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f75eff0 + 4)) * 8);
      do {
        lVar22 = *plVar13;
        if (lVar22 == -1) goto LAB_0e726a08;
        plVar13 = (long *)(*(long *)(lVar16 + 0x30) + lVar22 * 0x18);
      } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar22 * 0x18) !=
               *(uint *)(_DAT_0f75eff0 + 4));
      if (plVar13 == *(long **)(lVar16 + 0x38)) {
LAB_0e726a08:
        puVar11 = &DAT_0f75eff0;
      }
      else {
        puVar11 = (undefined *)plVar13[2];
      }
      puVar11 = (undefined *)func_0x048b1040(lVar16 + 0x18,puVar11,uVar4,1);
      if (puVar11 == (undefined *)0x0) {
        puStack_318 = (undefined *)0x0;
        puStack_310 = (undefined8 *)0x0;
        FUN_048b10d0(&puStack_318);
        puVar15 = *(undefined **)(puStack_318 + 0x38);
        puVar11 = puStack_318;
        if (puVar15 == (undefined *)0x0) goto LAB_0e726ada;
LAB_0e726af6:
        do {
          puVar11 = puVar15;
          puVar15 = *(undefined **)(puVar11 + 0x38);
          if (*(undefined **)(puVar11 + 0x38) == (undefined *)0x0) {
            puStack_318 = (undefined *)0x0;
            puStack_310 = (undefined8 *)0x0;
            FUN_048b10d0(&puStack_318);
            puVar15 = puStack_318;
          }
        } while (puVar15 != (undefined *)0x0);
      }
      else {
        puVar15 = *(undefined **)(puVar11 + 0x38);
        if (*(undefined **)(puVar11 + 0x38) != (undefined *)0x0) goto LAB_0e726af6;
LAB_0e726ada:
        puStack_318 = (undefined *)0x0;
        puStack_310 = (undefined8 *)0x0;
        FUN_048b10d0(&puStack_318);
        puVar15 = puStack_318;
        if (puStack_318 != (undefined *)0x0) goto LAB_0e726af6;
      }
      lVar16 = *(long *)(puVar11 + 0x48);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    else {
      if (iVar9 != 1) goto LAB_0e726b95;
      if ((DAT_0f75f070 == '\0') && (iVar9 = func_0x04108328(&DAT_0f75f070), iVar9 != 0)) {
        func_0x0e755ab0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f75eff0,0xf53dab8);
        func_0x0410844d(&DAT_0f75f070);
      }
      plVar13 = (long *)(*(long *)(lVar16 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar16 + 0x20) - *(long *)(lVar16 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f75eff0 + 4)) * 8);
      do {
        lVar22 = *plVar13;
        if (lVar22 == -1) goto LAB_0e726988;
        plVar13 = (long *)(*(long *)(lVar16 + 0x30) + lVar22 * 0x18);
      } while (*(uint *)(*(long *)(lVar16 + 0x30) + 8 + lVar22 * 0x18) !=
               *(uint *)(_DAT_0f75eff0 + 4));
      if (plVar13 == *(long **)(lVar16 + 0x38)) {
LAB_0e726988:
        puVar11 = &DAT_0f75eff0;
      }
      else {
        puVar11 = (undefined *)plVar13[2];
      }
      puVar11 = (undefined *)func_0x048b0c90(lVar16 + 0x18,puVar11,uVar4,1);
      if (puVar11 == (undefined *)0x0) {
        puStack_318 = (undefined *)0x0;
        puStack_310 = (undefined8 *)0x0;
        func_0x048b0d20(&puStack_318);
        puVar11 = puStack_318;
      }
      lVar16 = *(long *)(puVar11 + 0x58);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    puVar12[1] = 0x20;
    puVar12[2] = 0;
    *(undefined1 *)(puVar12 + 3) = 0xff;
    *puVar12 = &UNK_0f4e3cf0;
    puVar12[4] = 1;
    puVar12[5] = 0;
    puVar12[6] = 0;
    *(undefined1 *)(puVar12 + 7) = 0;
    plVar13 = *(long **)(lVar16 + 8);
    *(undefined8 **)(lVar16 + 8) = puVar12;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x28))();
    }
  }
LAB_0e726b95:
  lVar16 = func_0x0d1a23c0(uStack_200);
  if ((*(int *)(lVar16 + 0x60) == -0x2b3da790) && (lVar16 = *(long *)(lVar16 + 0x68), lVar16 != 0))
  {
    bVar23 = (*(byte *)(lVar16 + 8) & 1) != 0;
    lVar22 = lVar16 + 9;
    if (bVar23) {
      lVar22 = *(long *)(lVar16 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar16 + 8) >> 1);
    if (bVar23) {
      uVar17 = *(ulong *)(lVar16 + 0x10);
    }
    func_0x0e75a480(&uStack_238,param_1,lVar22,uVar17);
  }
  else {
    func_0x0e75a480(&uStack_238,param_1,&UNK_011e852b,0xe);
  }
  if (cStack_208 != '\0') {
    return;
  }
  func_0x05d54750(&uStack_1f8,&UNK_0f457798);
  uVar17 = uStack_1f0;
  uStack_23c = 0x656c69;
  uStack_240 = 0x46657061;
  uStack_198 = uStack_1f8;
  uStack_194 = uStack_1f4;
  uStack_190 = (undefined4)uStack_1f0;
  uStack_18c = uStack_1f0._4_4_;
  uStack_1f0 = 0;
  uStack_200 = uStack_1e8;
  uStack_1e8 = 0;
  lVar22 = CONCAT44(uStack_234,uStack_238) + 0x18;
  lVar16 = func_0x0d1a23c0(lVar22);
  pbVar3 = *(byte **)(CONCAT44(uStack_234,uStack_238) + 0x58);
  for (pbVar20 = *(byte **)(CONCAT44(uStack_234,uStack_238) + 0x50); pbVar20 != pbVar3;
      pbVar20 = pbVar20 + 0x38) {
    bVar2 = *pbVar20;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x24) goto LAB_0e726d0a;
    }
    else if (*(long *)(pbVar20 + 8) == 0x24) {
LAB_0e726d0a:
      if ((bVar2 & 1) == 0) {
        pbVar21 = pbVar20 + 1;
      }
      else {
        pbVar21 = *(byte **)(pbVar20 + 0x10);
      }
      iVar9 = func_0x0eee3000(&DAT_014518a9,pbVar21,0x24);
      if (iVar9 == 0) break;
    }
  }
  if (pbVar20 != pbVar3) {
    iVar9 = *(int *)(pbVar20 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550768), iVar10 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    uVar19 = uStack_200;
    if (iVar9 != _DAT_0f550754) goto LAB_0e726ffa;
  }
  if ((int)uStack_210 == 0) {
    if ((*(int *)(lVar16 + 0x60) != -0x2b3da790) || (*(long *)(lVar16 + 0x68) == 0))
    goto LAB_0e726db5;
    lVar16 = *(long *)(lVar16 + 0x68) + 0x38;
  }
  else {
    puVar11 = (undefined *)func_0x048b0c90(lVar22,lVar16,uStack_210._4_4_,1);
    if (puVar11 == (undefined *)0x0) {
      puStack_318 = (undefined *)0x0;
      puStack_310 = (undefined8 *)0x0;
      func_0x048b0d20(&puStack_318);
      puVar11 = puStack_318;
      if (puStack_318 == (undefined *)0x0) goto LAB_0e726db5;
    }
    if ((*(int *)(puVar11 + 0x50) == -0x45dcb126) && (*(long *)(puVar11 + 0x58) != 0)) {
      lVar16 = *(long *)(puVar11 + 0x58) + 0x40;
    }
    else {
LAB_0e726db5:
      lVar16 = 0;
    }
  }
  uStack_380 = 0;
  uStack_370 = (long *)&UNK_048b4ab0;
  pcStack_368 = (code *)&UNK_048b49f0;
  uStack_360 = CONCAT35(uStack_360._5_3_,0x1d33bd9c5);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *puVar12 = 0x68536c65786f561c;
  *(undefined4 *)(puVar12 + 1) = uStack_240;
  *(uint *)((long)puVar12 + 0xb) = CONCAT31(uStack_23c,uStack_240._3_1_);
  *(undefined1 *)((long)puVar12 + 0xf) = 0;
  puVar12[2] = 0;
  uStack_23c = 0;
  uStack_240 = 0;
  *(undefined2 *)(puVar12 + 3) = 0x1302;
  *(undefined4 *)(puVar12 + 4) = uStack_198;
  *(undefined4 *)((long)puVar12 + 0x24) = uStack_194;
  *(undefined4 *)(puVar12 + 5) = uStack_190;
  *(undefined4 *)((long)puVar12 + 0x2c) = uStack_18c;
  puVar12[6] = uStack_200;
  puStack_318 = &UNK_048b46e0;
  uStack_300 = (code *)&UNK_048b4ab0;
  uStack_2f8 = (code *)&UNK_048b49f0;
  uStack_2f0 = CONCAT35(uStack_2f0._5_3_,0x1d33bd9c5);
  uStack_380 = 0;
  puStack_310 = puVar12;
  uStack_1c8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (uStack_1c8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar7 = _UNK_014518c1;
  uStack_1d8 = 0x29;
  uStack_1d0 = (long *)0x24;
  *(undefined8 *)(uStack_1c8 + 4) = _DAT_014518b9;
  *(undefined8 *)(uStack_1c8 + 6) = uVar7;
  uVar6 = _UNK_014518b5;
  uVar5 = _UNK_014518b1;
  uVar4 = _UNK_014518ad;
  *uStack_1c8 = _DAT_014518a9;
  uStack_1c8[1] = uVar4;
  uStack_1c8[2] = uVar5;
  uStack_1c8[3] = uVar6;
  uStack_1c8[8] = 0x5d797472;
  *(undefined1 *)(uStack_1c8 + 9) = 0;
  lVar16 = func_0x048b5060(lVar16,&uStack_1d8);
  *(undefined **)(lVar16 + 0x20) = &UNK_048b46e0;
  pcVar14 = (code *)&UNK_048b49f0;
  if ((undefined **)(lVar16 + 0x20) != &puStack_318) {
    puVar12 = (undefined8 *)(lVar16 + 0x28);
    if (*(code **)(lVar16 + 0x40) == (code *)0x0) {
LAB_0e726f71:
      puVar8 = puStack_310;
      puStack_310 = (undefined8 *)0x0;
      *puVar12 = puVar8;
    }
    else {
      (**(code **)(lVar16 + 0x40))(puVar12);
      if (uStack_2f0._4_1_ != '\0') {
        if (uStack_2f0._4_1_ != '\x02') goto LAB_0e726f71;
        (*uStack_300)(5,&puStack_310,puVar12);
      }
    }
    *(undefined4 *)(lVar16 + 0x38) = (undefined4)uStack_300;
    *(undefined4 *)(lVar16 + 0x3c) = uStack_300._4_4_;
    *(undefined4 *)(lVar16 + 0x40) = (undefined4)uStack_2f8;
    *(undefined4 *)(lVar16 + 0x44) = uStack_2f8._4_4_;
    *(undefined4 *)(lVar16 + 0x48) = (undefined4)uStack_2f0;
    *(char *)(lVar16 + 0x4c) = uStack_2f0._4_1_;
    pcVar14 = uStack_2f8;
  }
  if ((uStack_1d8 & 1) != 0) {
    func_0x0412a280(uStack_1c8,uStack_1d8 & 0xfffffffffffffffe);
    pcVar14 = uStack_2f8;
  }
  if (pcVar14 != (code *)0x0) {
    (*pcVar14)(&puStack_310);
  }
  if (pcStack_368 != (code *)0x0) {
    (*pcStack_368)(&uStack_380);
  }
  uVar17 = 0;
  uVar19 = 0;
LAB_0e726ffa:
  cStack_b8 = cStack_208;
  uStack_c8 = uStack_218;
  uStack_c4 = uStack_214;
  uStack_c0 = (int)uStack_210;
  uStack_bc = uStack_210._4_4_;
  uStack_d8 = uStack_228;
  uStack_d4 = uStack_224;
  uStack_d0 = uStack_220;
  uStack_cc = uStack_21c;
  uStack_e8 = uStack_238;
  uStack_e4 = uStack_234;
  uStack_e0 = uStack_230;
  uStack_dc = uStack_22c;
  func_0x0e75ad30(&puStack_318,&uStack_e8,&UNK_011ea907,0xb);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0f4c9040;
  if (uStack_300 != (code *)0x0) {
    lVar16 = *(long *)uStack_300;
    uStack_300 = (code *)plVar13;
    (**(code **)(lVar16 + 8))();
    plVar13 = (long *)uStack_300;
  }
  uStack_300 = (code *)plVar13;
  uStack_380 = CONCAT44(uStack_380._4_4_,uStack_308);
  plStack_378 = (long *)0x0;
  uStack_370 = (long *)((ulong)uStack_370 & 0xffffffff00000000);
  pcStack_368 = (code *)0x1;
  uStack_360 = 0;
  puStack_358 = &UNK_0e75b460;
  puStack_350 = &SUB_048b06d0;
  puStack_348 = &UNK_0e752670;
  puStack_340 = &UNK_0e75b520;
  puStack_338 = &UNK_0e75b730;
  uStack_330 = 0;
  uStack_328 = 0;
  plStack_320 = (long *)0x0;
  func_0x048b05a0(puStack_310,&uStack_380);
  plVar13 = plStack_320;
  if (plStack_320 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_320 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_320 + 0x10))(plStack_320);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0e75af20(&puStack_318);
  cStack_1a8 = cStack_b8;
  uStack_1b8 = uStack_c8;
  uStack_1b4 = uStack_c4;
  uStack_1b0 = uStack_c0;
  uStack_1ac = uStack_bc;
  uStack_1c8 = (undefined4 *)CONCAT44(uStack_d4,uStack_d8);
  uStack_1c0 = uStack_d0;
  uStack_1bc = uStack_cc;
  uStack_1d8 = CONCAT44(uStack_e4,uStack_e8);
  uStack_1d0 = (long *)CONCAT44(uStack_dc,uStack_e0);
  func_0x048b0bc0(&uStack_300);
  func_0x0e75ad30(&puStack_318,&uStack_1d8,&UNK_0147c3bf,5);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f4c90b8;
  if (uStack_300 != (code *)0x0) {
    lVar16 = *(long *)uStack_300;
    uStack_300 = (code *)puVar12;
    (**(code **)(lVar16 + 8))();
    puVar12 = (undefined8 *)uStack_300;
  }
  uStack_300 = (code *)puVar12;
  uStack_380 = CONCAT44(uStack_380._4_4_,uStack_308);
  plStack_378 = (long *)0x0;
  uStack_370 = (long *)((ulong)uStack_370 & 0xffffffff00000000);
  pcStack_368 = (code *)0x1;
  uStack_360 = 0;
  puStack_358 = &UNK_0e75bdd0;
  puStack_350 = &SUB_048b06d0;
  puStack_348 = &UNK_0e7559f0;
  puStack_340 = &UNK_0e75be90;
  puStack_338 = &UNK_0e75c0a0;
  uStack_330 = 0;
  uStack_328 = 0;
  plStack_320 = (long *)0x0;
  func_0x048b05a0(puStack_310,&uStack_380);
  plVar13 = plStack_320;
  if (plStack_320 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_320 + 1;
    lVar16 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar16 == 0) {
      (**(code **)(*plStack_320 + 0x10))(plStack_320);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0e75af20(&puStack_318);
  func_0x048b0bc0(&uStack_300);
  if ((uVar19 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar19 & 0xff00ffffffffffff) - 8);
  }
  if ((uVar17 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar17 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_1e8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1e8 & 0xff00ffffffffffff) - 8);
  }
  uStack_1e8 = 0;
  if ((uStack_1f0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1f0 & 0xff00ffffffffffff) - 8);
  }
  return;
}



/* ---- referenced strings ----
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 */
