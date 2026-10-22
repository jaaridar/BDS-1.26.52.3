/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8860130 (ELF vaddr 0x8760130)
 * Label: caller-of-callee
 * Body:  [[08860130, 0886192d]]
 * Ghidra: FUN_08860130
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08860130(long param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  bool bVar14;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined *puStack_608;
  undefined1 *puStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined4 auStack_5b0 [2];
  undefined8 uStack_5a8;
  undefined4 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined *puStack_588;
  undefined1 *puStack_580;
  undefined1 *puStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined4 uStack_560;
  undefined8 uStack_558;
  long *plStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined *puStack_520;
  undefined1 *puStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  undefined4 uStack_4b8;
  long *aplStack_4b0 [23];
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  int iStack_3d0;
  undefined4 uStack_3cc;
  undefined8 uStack_3c8;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  int iStack_390;
  undefined4 uStack_38c;
  undefined8 uStack_388;
  undefined8 uStack_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  int iStack_350;
  undefined4 uStack_34c;
  undefined1 uStack_348;
  long lStack_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  int iStack_318;
  undefined4 uStack_314;
  undefined1 uStack_310;
  undefined *puStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined1 uStack_2f0;
  undefined1 auStack_2e8 [8];
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 uStack_2b0;
  uint uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  int iStack_260;
  undefined4 uStack_25c;
  char cStack_258;
  undefined7 uStack_257;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  int iStack_220;
  undefined4 uStack_21c;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  char cStack_1e0;
  undefined *puStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 uStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  uint uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
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
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined1 uStack_e8;
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
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 uStack_a8;
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
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 uStack_70;
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
  int iStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  
  func_0x07be4b40();
  func_0x078748b0(param_1);
  func_0x07870b20(param_1);
  func_0x078730e0(param_1);
  if ((DAT_0f5e4b10 == '\0') && (iVar6 = FUN_04108328(&DAT_0f5e4b10), iVar6 != 0)) {
    func_0x0898ec30();
    __cxa_atexit(&UNK_048ae800,&DAT_0f5e4a90,0xf53dab8);
    func_0x0410844d(&DAT_0f5e4b10);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f5e4a90 + 4)) * 8);
  do {
    lVar12 = *plVar9;
    if (lVar12 == -1) goto LAB_088601c0;
    plVar9 = (long *)(*(long *)(param_1 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f5e4a90 + 4))
  ;
  if (plVar9 == *(long **)(param_1 + 0x38)) {
LAB_088601c0:
    puVar8 = &DAT_0f5e4a90;
    iVar6 = iRam000000000f5e4af0;
  }
  else {
    puVar8 = (undefined *)plVar9[2];
    iVar6 = *(int *)(puVar8 + 0x60);
  }
  if ((iVar6 == -0x2b3da790) && (lVar12 = *(long *)(puVar8 + 0x68), lVar12 != 0)) {
    bVar14 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar10 = lVar12 + 9;
    if (bVar14) {
      lVar10 = *(long *)(lVar12 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar14) {
      uVar13 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x08990820(&uStack_210,param_1,lVar10,uVar13);
  }
  else {
    func_0x08990820(&uStack_210,param_1,&UNK_013cba82,0x16);
  }
  if (cStack_1e0 == '\0') {
    func_0x08991390(&lStack_4c8,&uStack_210,&UNK_014645f7,0xf);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0e95d0;
    if (aplStack_4b0[0] != (long *)0x0) {
      lVar12 = *aplStack_4b0[0];
      aplStack_4b0[0] = plVar9;
      (**(code **)(lVar12 + 8))();
      plVar9 = aplStack_4b0[0];
    }
    aplStack_4b0[0] = plVar9;
    uStack_630 = (undefined *)CONCAT44(uStack_630._4_4_,uStack_4b8);
    uStack_628 = 0;
    uStack_620 = (ulong)uStack_620._4_4_ << 0x20;
    uStack_618 = 1;
    uStack_610 = 0;
    puStack_608 = &UNK_077e7de0;
    puStack_600 = &SUB_048b06d0;
    uStack_5f8 = &SUB_077e7b00;
    uStack_5f0 = &UNK_08991940;
    uStack_5e8 = &UNK_08991aa0;
    uStack_5e0 = (long *)((ulong)uStack_5e0._4_4_ << 0x20);
    uStack_5d8 = 0;
    uStack_5d0 = (long *)0x0;
    func_0x048b05a0(lStack_4c0,&uStack_630);
    plVar9 = uStack_5d0;
    if (uStack_5d0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_5d0 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*uStack_5d0 + 0x10))(uStack_5d0);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x08991640(&lStack_4c8);
    cStack_258 = cStack_1e0;
    uStack_268 = uStack_1f0;
    uStack_264 = uStack_1ec;
    iStack_260 = iStack_1e8;
    uStack_25c = uStack_1e4;
    uStack_278 = uStack_200;
    uStack_274 = uStack_1fc;
    uStack_270 = uStack_1f8;
    uStack_26c = uStack_1f4;
    uStack_288 = uStack_210;
    uStack_284 = uStack_20c;
    uStack_280 = uStack_208;
    uStack_27c = uStack_204;
    func_0x048b0bc0(aplStack_4b0);
    uStack_3f8 = uStack_288;
    uStack_3f4 = uStack_284;
    uStack_3f0 = uStack_280;
    uStack_3ec = uStack_27c;
    uStack_3e8 = uStack_278;
    uStack_3e4 = uStack_274;
    uStack_3e0 = uStack_270;
    uStack_3dc = uStack_26c;
    uStack_3d8 = uStack_268;
    uStack_3d4 = uStack_264;
    iStack_3d0 = iStack_260;
    uStack_3cc = uStack_25c;
    uStack_3c8 = CONCAT71(uStack_257,cStack_258);
    func_0x08991390(&lStack_4c8,&uStack_3f8,&UNK_014196aa,10);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0eaae8;
    if (aplStack_4b0[0] != (long *)0x0) {
      lVar12 = *aplStack_4b0[0];
      aplStack_4b0[0] = plVar9;
      (**(code **)(lVar12 + 8))();
      plVar9 = aplStack_4b0[0];
    }
    aplStack_4b0[0] = plVar9;
    uStack_630 = (undefined *)CONCAT44(uStack_630._4_4_,uStack_4b8);
    uStack_628 = 0;
    uStack_620 = uStack_620 & 0xffffffff00000000;
    uStack_618 = 1;
    uStack_610 = 0;
    puStack_608 = &UNK_078d09a0;
    puStack_600 = &SUB_048b06d0;
    uStack_5f8 = &SUB_078cc650;
    uStack_5f0 = &UNK_08991c70;
    uStack_5e8 = &UNK_08991dd0;
    uStack_5e0 = (long *)((ulong)uStack_5e0 & 0xffffffff00000000);
    uStack_5d8 = 0;
    uStack_5d0 = (long *)0x0;
    func_0x048b05a0(lStack_4c0,&uStack_630);
    plVar9 = uStack_5d0;
    if (uStack_5d0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_5d0 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*uStack_5d0 + 0x10))(uStack_5d0);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x08991640(&lStack_4c8);
    uVar3 = uStack_3cc;
    iVar6 = iStack_3d0;
    lVar12 = CONCAT44(uStack_3f4,uStack_3f8);
    uStack_158 = CONCAT44(uStack_3ec,uStack_3f0);
    uStack_150 = CONCAT44(uStack_3e4,uStack_3e8);
    uStack_148 = uStack_3e0;
    uStack_144 = uStack_3dc;
    uStack_140 = uStack_3d8;
    uStack_13c = uStack_3d4;
    uVar4 = (undefined1)uStack_3c8;
    func_0x048b0bc0(aplStack_4b0);
    if ((DAT_0f5e4b10 == '\0') && (iVar7 = FUN_04108328(&DAT_0f5e4b10), iVar7 != 0)) {
      func_0x0898ec30();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5e4a90,0xf53dab8);
      func_0x0410844d(&DAT_0f5e4b10);
    }
    plVar9 = (long *)(*(long *)(lVar12 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5e4a90 + 4)) * 8);
    do {
      lVar10 = *plVar9;
      if (lVar10 == -1) goto LAB_088605f1;
      plVar9 = (long *)(*(long *)(lVar12 + 0x30) + lVar10 * 0x18);
    } while (*(uint *)(*(long *)(lVar12 + 0x30) + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f5e4a90 + 4)
            );
    if (plVar9 == *(long **)(lVar12 + 0x38)) {
LAB_088605f1:
      puVar8 = &DAT_0f5e4a90;
    }
    else {
      puVar8 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01292936),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar10 = FUN_048b0c90(lVar12 + 0x18,puVar8,uVar3,1);
    if (lVar10 == 0) {
      lStack_4c8 = 0;
      lStack_4c0 = 0;
      func_0x048b0d20(&lStack_4c8);
      lVar10 = lStack_4c8;
    }
    *(undefined1 *)(*(long *)(lVar10 + 0x58) + 0xa8) = 5;
    uStack_370 = (undefined4)uStack_158;
    uStack_36c = uStack_158._4_4_;
    uStack_368 = (undefined4)uStack_150;
    uStack_364 = uStack_150._4_4_;
    uStack_360 = uStack_148;
    uStack_35c = uStack_144;
    uStack_358 = uStack_140;
    uStack_354 = uStack_13c;
    iStack_350 = iVar6;
    uStack_34c = uVar3;
    uStack_348 = uVar4;
    uStack_378 = lVar12;
    func_0x08991390(&lStack_4c8,&uStack_378,&UNK_012f0cac,4);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef44b00;
    if (aplStack_4b0[0] != (long *)0x0) {
      lVar12 = *aplStack_4b0[0];
      aplStack_4b0[0] = plVar9;
      (**(code **)(lVar12 + 8))();
      plVar9 = aplStack_4b0[0];
    }
    aplStack_4b0[0] = plVar9;
    uStack_630 = (undefined *)CONCAT44(uStack_630._4_4_,uStack_4b8);
    uStack_628 = 0;
    uStack_620 = uStack_620 & 0xffffffff00000000;
    uStack_618 = 1;
    uStack_610 = 0;
    puStack_608 = &UNK_0796ff00;
    puStack_600 = &SUB_048b06d0;
    uStack_5f8 = &SUB_048b2190;
    uStack_5f0 = &UNK_08992240;
    uStack_5e8 = &UNK_08992290;
    uStack_5e0 = (long *)((ulong)uStack_5e0 & 0xffffffff00000000);
    uStack_5d8 = 0;
    uStack_5d0 = (long *)0x0;
    func_0x048b05a0(lStack_4c0,&uStack_630);
    plVar9 = uStack_5d0;
    if (uStack_5d0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_5d0 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*uStack_5d0 + 0x10))(uStack_5d0);
        func_0x0412c2d0(plVar9);
      }
    }
    iVar6 = *(int *)(lStack_4c0 + 0x1c);
    if (iVar6 == 2) {
      piVar11 = *(int **)(*(long *)(*(long *)(lStack_4c0 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != *(int *)(lStack_4c0 + 0x18)) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar12 = *(long *)(piVar11 + 0xc);
      while (lVar12 != *(long *)(lStack_4c0 + 8)) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar12 = *(long *)(piVar11 + 0xc);
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar11 = *(int **)(*(long *)(*(long *)(lStack_4c0 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar11;
      while (iVar6 != *(int *)(lStack_4c0 + 0x18)) {
        piVar11 = piVar11 + 0x1a;
        iVar6 = *piVar11;
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      puVar2 = (uint *)(*(long *)(lStack_4c0 + 0x10) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
    func_0x08991640(&lStack_4c8);
    uStack_e8 = uStack_348;
    uStack_f8 = uStack_358;
    uStack_f4 = uStack_354;
    iStack_f0 = iStack_350;
    uStack_ec = uStack_34c;
    uStack_108 = uStack_368;
    uStack_104 = uStack_364;
    uStack_100 = uStack_360;
    uStack_fc = uStack_35c;
    uStack_118 = (undefined4)uStack_378;
    uStack_114 = uStack_378._4_4_;
    uStack_110 = uStack_370;
    uStack_10c = uStack_36c;
    func_0x048b0bc0(aplStack_4b0);
    uStack_610 = 0;
    uStack_5c8 = 0;
    uStack_5c0 = 0;
    uStack_5d8 = 0;
    uStack_5d0 = (long *)0x0;
    uStack_5e8 = (undefined *)0x0;
    uStack_5e0 = (long *)0x0;
    uStack_5f8 = (undefined1 *)0x0;
    uStack_5f0 = (undefined *)0x0;
    puStack_608 = (undefined *)0x0;
    puStack_600 = (undefined1 *)0x0;
    uStack_5b8 = 0;
    uStack_628 = 0xffffffffffffffff;
    uStack_620 = 0;
    uStack_618 = 0xff;
    uStack_630 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_610);
    puStack_608 = (undefined *)FUN_041681f0(&uStack_610,0xf547a30);
    puStack_600 = (undefined1 *)FUN_041681f0(&uStack_610,0xf547770);
    uStack_5f8 = (undefined1 *)0x0;
    uStack_5f0 = (undefined *)0x0;
    uStack_5e8 = (undefined *)0x0;
    uStack_5e0 = (long *)0x0;
    uStack_5d8 = 0;
    uStack_5d0 = (long *)0x0;
    uStack_5c8 = 0;
    uStack_5c0 = 0;
    uStack_5b8 = 0;
    uStack_628 = 0x100;
    uStack_300 = 0x100;
    uStack_2fc = 0;
    uStack_2f8 = (undefined4)uStack_620;
    uStack_2f4 = uStack_620._4_4_;
    uStack_2f0 = (undefined1)uStack_618;
    puStack_308 = &UNK_0f4e3c70;
    FUN_04167a20(auStack_2e8,&uStack_610);
    uStack_2e0 = puStack_608;
    uStack_2d8 = puStack_600;
    uStack_2d0 = (undefined4)uStack_5f8;
    uStack_2cc = uStack_5f8._4_4_;
    uStack_2c8 = (undefined4)uStack_5f0;
    uStack_2c4 = uStack_5f0._4_4_;
    uStack_2c0 = (undefined4)uStack_5e8;
    uStack_2bc = uStack_5e8._4_4_;
    uStack_2b8 = (undefined4)uStack_5e0;
    uStack_2b4 = uStack_5e0._4_4_;
    if (uStack_5e0 != (long *)0x0) {
      LOCK();
      uStack_5e0[1] = uStack_5e0[1] + 1;
      UNLOCK();
    }
    uStack_2b0 = uStack_5d8;
    if (((ulong)uStack_5d0 & 1) == 0) {
      uStack_298 = uStack_5c0;
      uStack_2a8 = (uint)uStack_5d0;
      uStack_2a4 = uStack_5d0._4_4_;
      uStack_2a0 = (undefined4)uStack_5c8;
      uStack_29c = uStack_5c8._4_4_;
    }
    else {
      func_0x0412e5e0(&uStack_2a8,uStack_5c0,uStack_5c8);
    }
    uStack_290 = uStack_5b8;
    func_0x08862a30(&uStack_a0,&uStack_118,&puStack_308);
    func_0x08991390(&lStack_4c8,&uStack_a0,&UNK_014b4874,0xc);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0ef44b00;
    if (aplStack_4b0[0] != (long *)0x0) {
      lVar12 = *aplStack_4b0[0];
      aplStack_4b0[0] = plVar9;
      (**(code **)(lVar12 + 8))();
      plVar9 = aplStack_4b0[0];
    }
    aplStack_4b0[0] = plVar9;
    uStack_548 = (undefined *)CONCAT44(uStack_548._4_4_,uStack_4b8);
    uStack_540 = 0;
    uStack_538 = (ulong)uStack_538._4_4_ << 0x20;
    uStack_530 = 1;
    uStack_528 = 0;
    puStack_520 = &UNK_0796ff00;
    puStack_518 = &SUB_048b06d0;
    uStack_510 = &SUB_048b2190;
    uStack_508 = &UNK_089926b0;
    uStack_500 = &UNK_08992700;
    uStack_4f8 = (long *)((ulong)uStack_4f8._4_4_ << 0x20);
    uStack_4f0 = 0;
    uStack_4e8 = (long *)0x0;
    func_0x048b05a0(lStack_4c0,&uStack_548);
    plVar9 = uStack_4e8;
    if (uStack_4e8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_4e8 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*uStack_4e8 + 0x10))(uStack_4e8);
        func_0x0412c2d0(plVar9);
      }
    }
    iVar6 = *(int *)(lStack_4c0 + 0x1c);
    if (iVar6 == 2) {
      piVar11 = *(int **)(*(long *)(*(long *)(lStack_4c0 + 0x10) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != *(int *)(lStack_4c0 + 0x18)) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar12 = *(long *)(piVar11 + 0xc);
      while (lVar12 != *(long *)(lStack_4c0 + 8)) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar12 = *(long *)(piVar11 + 0xc);
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else if (iVar6 == 1) {
      piVar11 = *(int **)(*(long *)(*(long *)(lStack_4c0 + 0x10) + 0x78) + 0x48);
      iVar6 = *piVar11;
      while (iVar6 != *(int *)(lStack_4c0 + 0x18)) {
        piVar11 = piVar11 + 0x1a;
        iVar6 = *piVar11;
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else if (iVar6 == 0) {
      puVar2 = (uint *)(*(long *)(lStack_4c0 + 0x10) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
    func_0x08991640(&lStack_4c8);
    uStack_a8 = uStack_70;
    uStack_b8 = uStack_80;
    uStack_b4 = uStack_7c;
    uStack_b0 = uStack_78;
    uStack_ac = uStack_74;
    uStack_c8 = uStack_90;
    uStack_c4 = uStack_8c;
    uStack_c0 = uStack_88;
    uStack_bc = uStack_84;
    uStack_d8 = uStack_a0;
    uStack_d4 = uStack_9c;
    uStack_d0 = uStack_98;
    uStack_cc = uStack_94;
    func_0x048b0bc0(aplStack_4b0);
    uStack_528 = 0;
    uStack_4e0 = 0;
    uStack_4d8 = 0;
    uStack_4f0 = 0;
    uStack_4e8 = (long *)0x0;
    uStack_500 = (undefined *)0x0;
    uStack_4f8 = (long *)0x0;
    uStack_510 = (undefined1 *)0x0;
    uStack_508 = (undefined *)0x0;
    puStack_520 = (undefined *)0x0;
    puStack_518 = (undefined1 *)0x0;
    uStack_4d0 = 0;
    uStack_540 = 0xffffffffffffffff;
    uStack_538 = 0;
    uStack_530 = 0xff;
    uStack_548 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_528);
    puStack_520 = (undefined *)FUN_041681f0(&uStack_528,0xf547a30);
    puStack_518 = (undefined1 *)FUN_041681f0(&uStack_528,0xf547770);
    uStack_510 = (undefined1 *)0x0;
    uStack_508 = (undefined *)0x0;
    uStack_500 = (undefined *)0x0;
    uStack_4f8 = (long *)0x0;
    uStack_4f0 = 0;
    uStack_4e8 = (long *)0x0;
    uStack_4e0 = 0;
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uStack_540 = 0x100;
    uStack_1d0 = 0x100;
    uStack_1cc = 0;
    uStack_1c8 = (undefined4)uStack_538;
    uStack_1c4 = uStack_538._4_4_;
    uStack_1c0 = (undefined1)uStack_530;
    puStack_1d8 = &UNK_0f4e3c70;
    FUN_04167a20(auStack_1b8,&uStack_528);
    uStack_1b0 = puStack_520;
    uStack_1a8 = puStack_518;
    uStack_1a0 = (undefined4)uStack_510;
    uStack_19c = uStack_510._4_4_;
    uStack_198 = (undefined4)uStack_508;
    uStack_194 = uStack_508._4_4_;
    uStack_190 = (undefined4)uStack_500;
    uStack_18c = uStack_500._4_4_;
    uStack_188 = (undefined4)uStack_4f8;
    uStack_184 = uStack_4f8._4_4_;
    if (uStack_4f8 != (long *)0x0) {
      LOCK();
      uStack_4f8[1] = uStack_4f8[1] + 1;
      UNLOCK();
    }
    uStack_180 = uStack_4f0;
    if (((ulong)uStack_4e8 & 1) == 0) {
      uStack_168 = uStack_4d8;
      uStack_178 = (uint)uStack_4e8;
      uStack_174 = uStack_4e8._4_4_;
      uStack_170 = (undefined4)uStack_4e0;
      uStack_16c = uStack_4e0._4_4_;
    }
    else {
      func_0x0412e5e0(&uStack_178,uStack_4d8,uStack_4e0);
    }
    uStack_160 = uStack_4d0;
    func_0x08862a30(&uStack_68,&uStack_d8,&puStack_1d8);
    func_0x08991390(&lStack_4c8,&uStack_68,&UNK_012f7eb7,0xe);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0126a0;
    if (aplStack_4b0[0] != (long *)0x0) {
      lVar12 = *aplStack_4b0[0];
      aplStack_4b0[0] = plVar9;
      (**(code **)(lVar12 + 8))();
      plVar9 = aplStack_4b0[0];
    }
    aplStack_4b0[0] = plVar9;
    auStack_5b0[0] = uStack_4b8;
    uStack_5a8 = 0;
    uStack_5a0 = 0;
    uStack_598 = 1;
    uStack_590 = 0;
    puStack_588 = &UNK_05daeda0;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_05daea90;
    puStack_570 = &UNK_089927b0;
    puStack_568 = &UNK_08992910;
    uStack_560 = 0;
    uStack_558 = 0;
    plStack_550 = (long *)0x0;
    func_0x048b05a0(lStack_4c0,auStack_5b0);
    plVar9 = plStack_550;
    if (plStack_550 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_550 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_550 + 0x10))(plStack_550);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x08991640(&lStack_4c8);
    uStack_218 = uStack_38;
    uStack_228 = uStack_48;
    uStack_224 = uStack_44;
    iStack_220 = iStack_40;
    uStack_21c = uStack_3c;
    uStack_238 = uStack_58;
    uStack_234 = uStack_54;
    uStack_230 = uStack_50;
    uStack_22c = uStack_4c;
    uStack_248 = uStack_68;
    uStack_244 = uStack_64;
    uStack_240 = uStack_60;
    uStack_23c = uStack_5c;
    func_0x048b0bc0(aplStack_4b0);
    uStack_3b8 = uStack_248;
    uStack_3b4 = uStack_244;
    uStack_3b0 = uStack_240;
    uStack_3ac = uStack_23c;
    uStack_3a8 = uStack_238;
    uStack_3a4 = uStack_234;
    uStack_3a0 = uStack_230;
    uStack_39c = uStack_22c;
    uStack_398 = uStack_228;
    uStack_394 = uStack_224;
    iStack_390 = iStack_220;
    uStack_38c = uStack_21c;
    uStack_388 = CONCAT71(uStack_217,uStack_218);
    func_0x08991390(&lStack_4c8,&uStack_3b8,&UNK_0128b4e6,5);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0ea928;
    if (aplStack_4b0[0] != (long *)0x0) {
      lVar12 = *aplStack_4b0[0];
      aplStack_4b0[0] = plVar9;
      (**(code **)(lVar12 + 8))();
      plVar9 = aplStack_4b0[0];
    }
    aplStack_4b0[0] = plVar9;
    auStack_5b0[0] = uStack_4b8;
    uStack_5a8 = 0;
    uStack_5a0 = 0;
    uStack_598 = 1;
    uStack_590 = 0;
    puStack_588 = &UNK_078c7d00;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_078c39b0;
    puStack_570 = &UNK_08992af0;
    puStack_568 = &UNK_08992c50;
    uStack_560 = 0;
    uStack_558 = 0;
    plStack_550 = (long *)0x0;
    func_0x048b05a0(lStack_4c0,auStack_5b0);
    plVar9 = plStack_550;
    if (plStack_550 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_550 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_550 + 0x10))(plStack_550);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x08991640(&lStack_4c8);
    uVar3 = uStack_38c;
    iVar6 = iStack_390;
    lVar12 = CONCAT44(uStack_3b4,uStack_3b8);
    uStack_138 = CONCAT44(uStack_3ac,uStack_3b0);
    uStack_130 = CONCAT44(uStack_3a4,uStack_3a8);
    uStack_128 = uStack_3a0;
    uStack_124 = uStack_39c;
    uStack_120 = uStack_398;
    uStack_11c = uStack_394;
    uVar4 = (undefined1)uStack_388;
    func_0x048b0bc0(aplStack_4b0);
    if ((DAT_0f5e4b10 == '\0') && (iVar7 = FUN_04108328(&DAT_0f5e4b10), iVar7 != 0)) {
      func_0x0898ec30();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5e4a90,0xf53dab8);
      func_0x0410844d(&DAT_0f5e4b10);
    }
    plVar9 = (long *)(*(long *)(lVar12 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5e4a90 + 4)) * 8);
    do {
      lVar10 = *plVar9;
      if (lVar10 == -1) goto LAB_08861281;
      plVar9 = (long *)(*(long *)(lVar12 + 0x30) + lVar10 * 0x18);
    } while (*(uint *)(*(long *)(lVar12 + 0x30) + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f5e4a90 + 4)
            );
    if (plVar9 == *(long **)(lVar12 + 0x38)) {
LAB_08861281:
      puVar8 = &DAT_0f5e4a90;
    }
    else {
      puVar8 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01292936),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar10 = FUN_048b0c90(lVar12 + 0x18,puVar8,uVar3,1);
    if (lVar10 == 0) {
      lStack_4c8 = 0;
      lStack_4c0 = 0;
      func_0x048b0d20(&lStack_4c8);
      lVar10 = lStack_4c8;
    }
    *(undefined1 *)(*(long *)(lVar10 + 0x58) + 0xa8) = 5;
    uStack_338 = (undefined4)uStack_138;
    uStack_334 = uStack_138._4_4_;
    uStack_330 = (undefined4)uStack_130;
    uStack_32c = uStack_130._4_4_;
    uStack_328 = uStack_128;
    uStack_324 = uStack_124;
    uStack_320 = uStack_120;
    uStack_31c = uStack_11c;
    iStack_318 = iVar6;
    uStack_314 = uVar3;
    uStack_310 = uVar4;
    lStack_340 = lVar12;
    func_0x08991390(&lStack_4c8,&lStack_340,&UNK_0120ebc5,7);
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar9 = (long)&UNK_0f0eaa08;
    if (aplStack_4b0[0] != (long *)0x0) {
      lVar12 = *aplStack_4b0[0];
      aplStack_4b0[0] = plVar9;
      (**(code **)(lVar12 + 8))();
      plVar9 = aplStack_4b0[0];
    }
    aplStack_4b0[0] = plVar9;
    auStack_5b0[0] = uStack_4b8;
    uStack_5a8 = 0;
    uStack_5a0 = 0;
    uStack_598 = 1;
    uStack_590 = 0;
    puStack_588 = &UNK_078cc3e0;
    puStack_580 = &SUB_048b06d0;
    puStack_578 = &SUB_078c8090;
    puStack_570 = &UNK_089930c0;
    puStack_568 = &UNK_08993220;
    uStack_560 = 0;
    uStack_558 = 0;
    plStack_550 = (long *)0x0;
    func_0x048b05a0(lStack_4c0,auStack_5b0);
    plVar9 = plStack_550;
    if (plStack_550 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_550 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_550 + 0x10))(plStack_550);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x08991640(&lStack_4c8);
    uVar3 = uStack_314;
    iVar6 = iStack_318;
    lVar12 = lStack_340;
    func_0x048b0bc0(aplStack_4b0);
    if ((DAT_0f5e4b10 == '\0') && (iVar7 = FUN_04108328(&DAT_0f5e4b10), iVar7 != 0)) {
      func_0x0898ec30();
      __cxa_atexit(&UNK_048ae800,&DAT_0f5e4a90,0xf53dab8);
      func_0x0410844d(&DAT_0f5e4b10);
    }
    plVar9 = (long *)(*(long *)(lVar12 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18)) >> 3
                                  ) - 1U & *(uint *)(_DAT_0f5e4a90 + 4)) * 8);
    do {
      lVar10 = *plVar9;
      if (lVar10 == -1) goto LAB_08861550;
      plVar9 = (long *)(*(long *)(lVar12 + 0x30) + lVar10 * 0x18);
    } while (*(uint *)(*(long *)(lVar12 + 0x30) + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f5e4a90 + 4)
            );
    if (plVar9 == *(long **)(lVar12 + 0x38)) {
LAB_08861550:
      puVar8 = &DAT_0f5e4a90;
    }
    else {
      puVar8 = (undefined *)plVar9[2];
    }
    if ((1 < iVar6 - 1U) &&
       (cVar5 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_01292936),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar12 = FUN_048b0c90(lVar12 + 0x18,puVar8,uVar3,1);
    if (lVar12 == 0) {
      lStack_4c8 = 0;
      lStack_4c0 = 0;
      func_0x048b0d20(&lStack_4c8);
      lVar12 = lStack_4c8;
    }
    *(undefined1 *)(*(long *)(lVar12 + 0x58) + 0xa8) = 5;
    puStack_1d8 = &UNK_0f4e3c70;
    if ((uStack_178 & 1) != 0) {
      func_0x0412a280(uStack_168,CONCAT44(uStack_174,uStack_178) & 0xfffffffffffffffe);
    }
    plVar9 = (long *)CONCAT44(uStack_184,uStack_188);
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(auStack_1b8);
    uStack_548 = &UNK_0f4e3c70;
    if (((ulong)uStack_4e8 & 1) != 0) {
      func_0x0412a280(uStack_4d8,(ulong)uStack_4e8 & 0xfffffffffffffffe);
    }
    plVar9 = uStack_4f8;
    if (uStack_4f8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_4f8 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*uStack_4f8 + 0x10))(uStack_4f8);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&uStack_528);
    puStack_308 = &UNK_0f4e3c70;
    if ((uStack_2a8 & 1) != 0) {
      func_0x0412a280(uStack_298,CONCAT44(uStack_2a4,uStack_2a8) & 0xfffffffffffffffe);
    }
    plVar9 = (long *)CONCAT44(uStack_2b4,uStack_2b8);
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(auStack_2e8);
    uStack_630 = &UNK_0f4e3c70;
    if (((ulong)uStack_5d0 & 1) != 0) {
      func_0x0412a280(uStack_5c0,(ulong)uStack_5d0 & 0xfffffffffffffffe);
    }
    plVar9 = uStack_5e0;
    if (uStack_5e0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_5e0 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*uStack_5e0 + 0x10))(uStack_5e0);
        func_0x0412c2d0(plVar9);
      }
    }
    func_0x04167a40(&uStack_610);
  }
  return;
}


