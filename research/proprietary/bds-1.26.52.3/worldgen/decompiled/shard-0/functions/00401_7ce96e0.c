/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7de96e0 (ELF vaddr 0x7ce96e0)
 * Label: caller-of-callee
 * Body:  [[07de96e0, 07dea89c]]
 * Ghidra: FUN_07de96e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07de96e0(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  bool bVar14;
  undefined4 auStack_480 [2];
  undefined8 uStack_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined1 *puStack_450;
  undefined1 *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined4 uStack_430;
  undefined8 uStack_428;
  long *plStack_420;
  long lStack_418;
  long *plStack_410;
  undefined8 uStack_408;
  long *plStack_400;
  undefined1 *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  undefined4 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  int iStack_320;
  undefined4 uStack_31c;
  char cStack_318;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  int iStack_2d0;
  undefined4 uStack_2cc;
  undefined1 uStack_2c8;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  int iStack_290;
  undefined4 uStack_28c;
  undefined1 uStack_288;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
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
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined8 uStack_1dc;
  undefined8 uStack_1d4;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined8 uStack_1ac;
  undefined8 uStack_1a4;
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
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 uStack_168;
  undefined7 uStack_167;
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
  int iStack_138;
  undefined4 uStack_134;
  undefined1 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e0 [8];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  char cStack_b0;
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
  undefined8 uStack_38;
  
  lVar7 = param_1 + 0x18;
  lVar6 = func_0x07e8ff40(lVar7);
  if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
    bVar14 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar13 = lVar6 + 9;
    if (bVar14) {
      lVar13 = *(long *)(lVar6 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar14) {
      uVar12 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x07e90540(&uStack_348,param_1,lVar13,uVar12);
    if (cStack_318 == '\0') goto LAB_07de9786;
LAB_07de9746:
    lVar7 = func_0x07e923a0(lVar7);
    if (*(int *)(lVar7 + 0x60) == -0x2b3da790) goto LAB_07dea24f;
LAB_07dea28b:
    func_0x07e92b20(auStack_480,param_1,&UNK_012900a0,0x1d);
  }
  else {
    func_0x07e90540(&uStack_348,param_1,&UNK_01396f42,0x21);
    if (cStack_318 != '\0') goto LAB_07de9746;
LAB_07de9786:
    func_0x07e90df0(&lStack_418,&uStack_348,&UNK_012a7470,2);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef46ce8;
    if (plStack_400 != (long *)0x0) {
      lVar6 = *plStack_400;
      plStack_400 = plVar10;
      (**(code **)(lVar6 + 8))();
      plVar10 = plStack_400;
    }
    plStack_400 = plVar10;
    auStack_480[0] = (undefined4)uStack_408;
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_468 = 1;
    uStack_460 = 0;
    uStack_458 = &UNK_0490ce30;
    puStack_450 = &SUB_048b06d0;
    puStack_448 = &SUB_0490cb20;
    puStack_440 = &UNK_07e91300;
    puStack_438 = &UNK_07e91460;
    uStack_430 = 0;
    uStack_428 = 0;
    plStack_420 = (long *)0x0;
    func_0x048b05a0(plStack_410,auStack_480);
    plVar10 = plStack_420;
    if (plStack_420 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_420 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_420 + 0x10))(plStack_420);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07e91000(&lStack_418);
    uStack_128 = CONCAT44(uStack_33c,uStack_340);
    uStack_120 = CONCAT44(uStack_334,uStack_338);
    uStack_118 = uStack_330;
    uStack_114 = uStack_32c;
    uStack_110 = uStack_328;
    uStack_10c = uStack_324;
    lStack_308 = lVar7;
    lStack_300 = param_1;
    FUN_048b0bc0(&plStack_400);
    lVar7 = CONCAT44(uStack_344,uStack_348) + 0x18;
    uVar8 = func_0x07e8ff40(lVar7);
    if ((1 < iStack_320 - 1U) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_013fe48f),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar7 = func_0x048b0c90(lVar7,uVar8,uStack_31c,1);
    if (lVar7 == 0) {
      lStack_418 = 0;
      plStack_410 = (long *)0x0;
      func_0x048b0d20(&lStack_418);
      lVar7 = lStack_418;
    }
    *(undefined1 *)(*(long *)(lVar7 + 0x58) + 0xa8) = 1;
    uStack_d8 = (undefined4)uStack_128;
    uStack_d4 = uStack_128._4_4_;
    uStack_d0 = (undefined4)uStack_120;
    uStack_cc = uStack_120._4_4_;
    uStack_c8 = uStack_118;
    uStack_c4 = uStack_114;
    uStack_c0 = uStack_110;
    uStack_bc = uStack_10c;
    iStack_b8 = iStack_320;
    uStack_b4 = uStack_31c;
    cStack_b0 = cStack_318;
    uStack_1c0 = 0xffffffffffffffff;
    uStack_1b8 = 0;
    uStack_1b0 = 0xff;
    puStack_1c8 = &UNK_0f0edce8;
    uStack_1ac = 0x7fffffff8000;
    uStack_1a4 = 0;
    func_0x07dea960(&uStack_68,auStack_e0,&puStack_1c8);
    uStack_248 = uStack_38;
    uStack_258 = uStack_48;
    uStack_254 = uStack_44;
    uStack_250 = uStack_40;
    uStack_24c = uStack_3c;
    uStack_268 = uStack_58;
    uStack_264 = uStack_54;
    uStack_260 = uStack_50;
    uStack_25c = uStack_4c;
    uStack_278 = uStack_68;
    uStack_274 = uStack_64;
    uStack_270 = uStack_60;
    uStack_26c = uStack_5c;
    func_0x07e90df0(&lStack_418,&uStack_278,&UNK_011bda6d,10);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0c2800;
    if (plStack_400 != (long *)0x0) {
      lVar7 = *plStack_400;
      plStack_400 = plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = plStack_400;
    }
    plStack_400 = plVar10;
    auStack_480[0] = (undefined4)uStack_408;
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_468 = 1;
    uStack_460 = 0;
    uStack_458 = &UNK_072a5d20;
    puStack_450 = &SUB_048b06d0;
    puStack_448 = &UNK_0651ed40;
    puStack_440 = &UNK_07e91630;
    puStack_438 = &UNK_07e91790;
    uStack_430 = 0;
    uStack_428 = 0;
    plStack_420 = (long *)0x0;
    func_0x048b05a0(plStack_410,auStack_480);
    plVar10 = plStack_420;
    if (plStack_420 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_420 + 1;
      lVar7 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_420 + 0x10))(plStack_420);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07e91000(&lStack_418);
    uStack_168 = (undefined1)uStack_248;
    uStack_178 = uStack_258;
    uStack_174 = uStack_254;
    uStack_170 = uStack_250;
    uStack_16c = uStack_24c;
    uStack_188 = uStack_268;
    uStack_184 = uStack_264;
    uStack_180 = uStack_260;
    uStack_17c = uStack_25c;
    uStack_198 = uStack_278;
    uStack_194 = uStack_274;
    uStack_190 = uStack_270;
    uStack_18c = uStack_26c;
    FUN_048b0bc0(&plStack_400);
    uStack_238 = uStack_198;
    uStack_234 = uStack_194;
    uStack_230 = uStack_190;
    uStack_22c = uStack_18c;
    uStack_228 = uStack_188;
    uStack_224 = uStack_184;
    uStack_220 = uStack_180;
    uStack_21c = uStack_17c;
    uStack_218 = uStack_178;
    uStack_214 = uStack_174;
    uStack_210 = uStack_170;
    uStack_20c = uStack_16c;
    uStack_208 = CONCAT71(uStack_167,uStack_168);
    func_0x07e90df0(&lStack_418,&uStack_238,&UNK_013fe302,9);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f012080;
    if (plStack_400 != (long *)0x0) {
      lVar7 = *plStack_400;
      plStack_400 = plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = plStack_400;
    }
    plStack_400 = plVar10;
    auStack_480[0] = (undefined4)uStack_408;
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_468 = 1;
    uStack_460 = 0;
    uStack_458 = &UNK_05dd3ca0;
    puStack_450 = &SUB_048b06d0;
    puStack_448 = &UNK_05dd3990;
    puStack_440 = &UNK_07e91970;
    puStack_438 = &UNK_07e91ad0;
    uStack_430 = 0;
    uStack_428 = 0;
    plStack_420 = (long *)0x0;
    func_0x048b05a0(plStack_410,auStack_480);
    plVar10 = plStack_420;
    if (plStack_420 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_420 + 1;
      lVar7 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_420 + 0x10))(plStack_420);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07e91000(&lStack_418);
    uStack_78 = (undefined1)uStack_208;
    uStack_88 = uStack_218;
    uStack_84 = uStack_214;
    uStack_80 = uStack_210;
    uStack_7c = uStack_20c;
    uStack_98 = uStack_228;
    uStack_94 = uStack_224;
    uStack_90 = uStack_220;
    uStack_8c = uStack_21c;
    uStack_a8 = uStack_238;
    uStack_a4 = uStack_234;
    uStack_a0 = uStack_230;
    uStack_9c = uStack_22c;
    FUN_048b0bc0(&plStack_400);
    uStack_1f0 = 0xffffffffffffffff;
    uStack_1e8 = 0;
    uStack_1e0 = 0xff;
    puStack_1f8 = &UNK_0f0edce8;
    uStack_1dc = 0x7fff00000000;
    uStack_1d4 = 0;
    func_0x07dea960(&uStack_160,&uStack_a8,&puStack_1f8);
    lVar7 = CONCAT44(uStack_15c,uStack_160) + 0x18;
    uVar8 = func_0x07e8ff40(lVar7);
    if ((1 < iStack_138 - 1U) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_013fe48f),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar7 = func_0x048b0c90(lVar7,uVar8,uStack_134,1);
    if (lVar7 == 0) {
      lStack_418 = 0;
      plStack_410 = (long *)0x0;
      func_0x048b0d20(&lStack_418);
      lVar7 = lStack_418;
    }
    *(undefined1 *)(*(long *)(lVar7 + 0x58) + 0xa8) = 1;
    uStack_288 = uStack_130;
    uStack_298 = uStack_140;
    uStack_294 = uStack_13c;
    iStack_290 = iStack_138;
    uStack_28c = uStack_134;
    uStack_2a8 = uStack_150;
    uStack_2a4 = uStack_14c;
    uStack_2a0 = uStack_148;
    uStack_29c = uStack_144;
    uStack_2b8 = uStack_160;
    uStack_2b4 = uStack_15c;
    uStack_2b0 = uStack_158;
    uStack_2ac = uStack_154;
    func_0x07e90df0(&lStack_418,&uStack_2b8,&UNK_0147d7fd,0x10);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef46ce8;
    if (plStack_400 != (long *)0x0) {
      lVar7 = *plStack_400;
      plStack_400 = plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = plStack_400;
    }
    plStack_400 = plVar10;
    auStack_480[0] = (undefined4)uStack_408;
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_468 = 1;
    uStack_460 = 0;
    uStack_458 = &UNK_0490ce30;
    puStack_450 = &SUB_048b06d0;
    puStack_448 = &SUB_0490cb20;
    puStack_440 = &UNK_07e91cb0;
    puStack_438 = &UNK_07e91e10;
    uStack_430 = 0;
    uStack_428 = 0;
    plStack_420 = (long *)0x0;
    func_0x048b05a0(plStack_410,auStack_480);
    plVar10 = plStack_420;
    if (plStack_420 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_420 + 1;
      lVar7 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_420 + 0x10))(plStack_420);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07e91000(&lStack_418);
    uVar3 = uStack_288;
    uVar2 = uStack_28c;
    iVar5 = iStack_290;
    lVar6 = CONCAT44(uStack_2b4,uStack_2b8);
    uStack_108 = CONCAT44(uStack_2ac,uStack_2b0);
    uStack_100 = CONCAT44(uStack_2a4,uStack_2a8);
    uStack_f8 = uStack_2a0;
    uStack_f4 = uStack_29c;
    uStack_f0 = uStack_298;
    uStack_ec = uStack_294;
    FUN_048b0bc0(&plStack_400);
    lVar7 = lVar6 + 0x18;
    uVar8 = func_0x07e8ff40(lVar7);
    if ((1 < iVar5 - 1U) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013ad8e7,&UNK_0135d77d,199,&UNK_0119d818,&UNK_013fe48f),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar7 = func_0x048b0c90(lVar7,uVar8,uVar2,1);
    if (lVar7 == 0) {
      lStack_418 = 0;
      plStack_410 = (long *)0x0;
      func_0x048b0d20(&lStack_418);
      lVar7 = lStack_418;
    }
    *(undefined1 *)(*(long *)(lVar7 + 0x58) + 0xa8) = 1;
    plStack_2f0 = (long *)uStack_108;
    uStack_2e8 = (undefined4)uStack_100;
    uStack_2e4 = uStack_100._4_4_;
    uStack_2e0 = uStack_f8;
    uStack_2dc = uStack_f4;
    uStack_2d8 = uStack_f0;
    uStack_2d4 = uStack_ec;
    iStack_2d0 = iVar5;
    uStack_2cc = uVar2;
    uStack_2c8 = uVar3;
    lStack_2f8 = lVar6;
    func_0x07e90df0(&lStack_418,&lStack_2f8,&UNK_013fe103,0x10);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    param_1 = lStack_300;
    lVar7 = lStack_308;
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef44b00;
    if (plStack_400 != (long *)0x0) {
      lVar6 = *plStack_400;
      plStack_400 = plVar10;
      (**(code **)(lVar6 + 8))();
      plVar10 = plStack_400;
    }
    plStack_400 = plVar10;
    auStack_480[0] = (undefined4)uStack_408;
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_468 = 1;
    uStack_460 = 0;
    uStack_458 = &UNK_048b3f30;
    puStack_450 = &SUB_048b06d0;
    puStack_448 = &SUB_048b2190;
    puStack_440 = &UNK_07e91ff0;
    puStack_438 = &UNK_07e921c0;
    uStack_430 = 0;
    uStack_428 = 0;
    plStack_420 = (long *)0x0;
    func_0x048b05a0(plStack_410,auStack_480);
    plVar10 = plStack_420;
    if (plStack_420 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_420 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_420 + 0x10))(plStack_420);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x07e91000(&lStack_418);
    FUN_048b0bc0(&plStack_400);
    lVar7 = func_0x07e923a0(lVar7);
    if (*(int *)(lVar7 + 0x60) != -0x2b3da790) goto LAB_07dea28b;
LAB_07dea24f:
    lVar7 = *(long *)(lVar7 + 0x68);
    if (lVar7 == 0) goto LAB_07dea28b;
    bVar14 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar6 = lVar7 + 9;
    if (bVar14) {
      lVar6 = *(long *)(lVar7 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar14) {
      uVar12 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x07e92b20(auStack_480,param_1,lVar6,uVar12);
  }
  if ((char)puStack_450 != '\0') {
    return;
  }
  uStack_458 = (undefined *)0x1e1bc4d500000004;
  if ((DAT_0f5bed30 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5bed30), iVar5 != 0)) {
    func_0x07e92590(0xf5bed18);
    func_0x0410844d(&DAT_0f5bed30);
  }
  lStack_418 = CONCAT44(lStack_418._4_4_,uStack_458._4_4_);
  plStack_410 = (long *)0x0;
  uStack_408 = (long *)((ulong)uStack_408._4_4_ << 0x20);
  plStack_400 = (long *)0x1;
  puStack_3f8 = &SUB_048aead0;
  puStack_3f0 = &UNK_07e933d0;
  puStack_3e8 = &UNK_07e933e0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  func_0x049057f0(&uStack_478,&lStack_418);
  func_0x048aea50(&lStack_418);
  uStack_338 = (undefined4)uStack_468;
  uStack_334 = uStack_468._4_4_;
  uStack_330 = (int)uStack_460;
  uStack_32c = uStack_460._4_4_;
  uStack_348 = (undefined4)uStack_478;
  uStack_344 = uStack_478._4_4_;
  uStack_340 = uStack_470;
  uStack_33c = uStack_46c;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0f0faa48;
  if ((DAT_0f551bc8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f551bc8), iVar5 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  lStack_418 = CONCAT44(lStack_418._4_4_,_DAT_0f551bb4);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef46c48;
  plStack_410 = plVar10 + 3;
  plVar10[3] = (long)puVar9;
  plVar10[4] = 0;
  *(undefined1 *)(plVar10 + 5) = 0xff;
  lStack_2f8 = 0;
  plStack_2f0 = (long *)0x0;
  uStack_408 = plVar10;
  func_0x048afd20(&uStack_348,&lStack_418);
  plVar10 = uStack_408;
  if (uStack_408 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_408 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*uStack_408 + 0x10))(uStack_408);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = plStack_2f0;
  if (plStack_2f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_2f0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_2f0 + 0x10))(plStack_2f0);
      func_0x0412c2d0(plVar10);
    }
  }
  if ((DAT_0f5bed30 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5bed30), iVar5 != 0)) {
    func_0x07e92590(0xf5bed18);
    func_0x0410844d(&DAT_0f5bed30);
  }
  if (uStack_460._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(uStack_468 + 0x78) + 0x60);
    iVar5 = *piVar11;
    while (iVar5 != (int)uStack_460) {
      piVar11 = piVar11 + 0x16;
      iVar5 = *piVar11;
    }
    lVar7 = *(long *)(piVar11 + 0xc);
    while (lVar7 != CONCAT44(uStack_46c,uStack_470)) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar7 = *(long *)(piVar11 + 0xc);
    }
  }
  else {
    if (uStack_460._4_4_ != 1) {
      if (uStack_460._4_4_ == 0) {
        *(uint *)(uStack_468 + 0x18) = *(uint *)(uStack_468 + 0x18) | 0x20000;
      }
      goto LAB_07dea4f3;
    }
    piVar11 = *(int **)(*(long *)(uStack_468 + 0x78) + 0x48);
    iVar5 = *piVar11;
    while (iVar5 != (int)uStack_460) {
      piVar11 = piVar11 + 0x1a;
      iVar5 = *piVar11;
    }
  }
  *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 2;
LAB_07dea4f3:
  if ((DAT_0f5bed30 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5bed30), iVar5 != 0)) {
    func_0x07e92590(0xf5bed18);
    func_0x0410844d(&DAT_0f5bed30);
  }
  lStack_418 = CONCAT44(lStack_418._4_4_,0xbf75c8f8);
  plStack_410 = (long *)0x0;
  uStack_408 = (long *)CONCAT44(uStack_408._4_4_,1);
  plStack_400 = (long *)0x0;
  puStack_3f8 = &SUB_07e8ff40;
  puStack_3f0 = &SUB_048b06d0;
  puStack_3e8 = &UNK_07e93860;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  func_0x049057f0(&uStack_478,&lStack_418);
  func_0x048aea50(&lStack_418);
  uStack_338 = (undefined4)uStack_468;
  uStack_334 = uStack_468._4_4_;
  uStack_330 = (int)uStack_460;
  uStack_32c = uStack_460._4_4_;
  uStack_348 = (undefined4)uStack_478;
  uStack_344 = uStack_478._4_4_;
  uStack_340 = uStack_470;
  uStack_33c = uStack_46c;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0f0faa48;
  if ((DAT_0f551cb0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f551cb0), iVar5 != 0)) {
    func_0x04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  lStack_418 = CONCAT44(lStack_418._4_4_,_DAT_0f551c9c);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef46c98;
  plStack_410 = plVar10 + 3;
  plVar10[3] = (long)puVar9;
  *(undefined1 *)(plVar10 + 4) = 0xff;
  lStack_2f8 = 0;
  plStack_2f0 = (long *)0x0;
  uStack_408 = plVar10;
  func_0x048afd20(&uStack_348,&lStack_418);
  plVar10 = uStack_408;
  if (uStack_408 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_408 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*uStack_408 + 0x10))(uStack_408);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = plStack_2f0;
  if (plStack_2f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_2f0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_2f0 + 0x10))(plStack_2f0);
      func_0x0412c2d0(plVar10);
    }
  }
  return;
}


