/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3bb0c0 (ELF vaddr 0xe2bb0c0)
 * Label: caller-of-callee
 * Body:  [[0e3bb0c0, 0e3bd661] [0e3bd670, 0e3be655] [0e3be660, 0e3bec24]]
 * Ghidra: FUN_0e3bb0c0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e3bb0c0(long param_1)

{
  long *plVar1;
  long **pplVar2;
  long ***ppplVar3;
  long ****pppplVar4;
  undefined8 uVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  undefined4 uVar18;
  bool bVar19;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  long ****pppplStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  undefined4 uStack_488;
  undefined8 uStack_480;
  long *plStack_478;
  undefined8 uStack_468;
  long ****pppplStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  code *pcStack_448;
  undefined *puStack_440;
  undefined1 *puStack_438;
  long lStack_430;
  undefined8 uStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
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
  undefined8 uStack_398;
  long ****pppplStack_390;
  long ****pppplStack_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined2 uStack_360;
  undefined4 uStack_35e;
  undefined2 uStack_35a;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  int iStack_330;
  undefined4 uStack_32c;
  char cStack_328;
  undefined4 uStack_31c;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined2 uStack_2e0;
  undefined4 uStack_2de;
  undefined2 uStack_2da;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  int iStack_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  undefined2 uStack_2a0;
  undefined4 uStack_29e;
  undefined2 uStack_29a;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  int iStack_270;
  undefined4 uStack_26c;
  char cStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  char cStack_228;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  char cStack_1e8;
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
  int iStack_1b0;
  undefined4 uStack_1ac;
  char cStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  char cStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  undefined1 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined1 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 uStack_c8;
  undefined4 uStack_c7;
  undefined4 uStack_c3;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined4 uStack_97;
  undefined4 uStack_93;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined4 uStack_3f;
  undefined4 uStack_3b;
  
  if ((DAT_0f750d90 == '\0') && (iVar8 = func_0x04108328(&DAT_0f750d90), iVar8 != 0)) {
    func_0x0e3f77f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f750d10,0xf53dab8);
    func_0x0410844d(&DAT_0f750d90);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f750d10 + 4)) * 8);
  do {
    lVar13 = *plVar11;
    if (lVar13 == -1) goto LAB_0e3bb140;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f750d10 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e3bb140:
    puVar10 = &DAT_0f750d10;
    if (iRam000000000f750d70 != -0x2b3da790) goto LAB_0e3bb1ad;
LAB_0e3bb16b:
    lVar13 = *(long *)(puVar10 + 0x68);
    if (lVar13 == 0) goto LAB_0e3bb1ad;
    bVar19 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar17 = lVar13 + 9;
    if (bVar19) {
      lVar17 = *(long *)(lVar13 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar19) {
      uVar16 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0e3f7ba0(&uStack_358,param_1,lVar17,uVar16);
  }
  else {
    puVar10 = (undefined *)plVar11[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e3bb16b;
LAB_0e3bb1ad:
    func_0x0e3f7ba0(&uStack_358,param_1,&UNK_0148f5fe,0xe);
  }
  if (cStack_328 == '\0') {
    uStack_428._4_4_ = (uint)(uStack_428 >> 0x20);
    uStack_468._4_4_ = (undefined4)((ulong)uStack_468 >> 0x20);
    uStack_4c8._4_4_ = (uint)((ulong)uStack_4c8 >> 0x20);
    func_0x0e3f8190(&uStack_468,CONCAT44(uStack_354,uStack_358) + 0x18);
    if (uStack_450._4_4_ == 2) {
      piVar14 = *(int **)(uStack_458[0xf] + 0x60);
      iVar8 = *piVar14;
      while (iVar8 != (int)uStack_450) {
        piVar14 = piVar14 + 0x16;
        iVar8 = *piVar14;
      }
      pppplVar4 = *(long *****)(piVar14 + 0xc);
      while (pppplVar4 != pppplStack_460) {
        piVar14 = *(int **)(piVar14 + 0xe);
        pppplVar4 = *(long *****)(piVar14 + 0xc);
      }
LAB_0e3bb24f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (uStack_450._4_4_ == 1) {
        piVar14 = *(int **)(uStack_458[0xf] + 0x48);
        iVar8 = *piVar14;
        while (iVar8 != (int)uStack_450) {
          piVar14 = piVar14 + 0x1a;
          iVar8 = *piVar14;
        }
        goto LAB_0e3bb24f;
      }
      if (uStack_450._4_4_ == 0) {
        *(uint *)(uStack_458 + 3) = *(uint *)(uStack_458 + 3) | 0x40000;
      }
    }
    func_0x0e3f8700(&uStack_468,&uStack_358,&UNK_011e9523);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f012080;
    if (uStack_450 != (long *)0x0) {
      lVar13 = *uStack_450;
      uStack_450 = plVar11;
      (**(code **)(lVar13 + 8))();
      plVar11 = uStack_450;
    }
    uStack_450 = plVar11;
    uStack_4d8 = (undefined4)uStack_458;
    pppplStack_4d0 = (long ****)0x0;
    uStack_4c8 = (long *)((ulong)uStack_4c8._4_4_ << 0x20);
    uStack_4c0 = (long *)0x1;
    uStack_4b8 = 0;
    uStack_4b0 = &UNK_05dd3ca0;
    puStack_4a8 = &SUB_048b06d0;
    puStack_4a0 = &UNK_05dd3990;
    puStack_498 = &UNK_0e3f8c40;
    puStack_490 = &UNK_0e3f8da0;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    func_0x048b05a0(pppplStack_460,&uStack_4d8);
    plVar11 = plStack_478;
    if (plStack_478 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_478 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_478 + 0x10))(plStack_478);
        func_0x0412c2d0(plVar11);
      }
    }
    func_0x0e3f8940(&uStack_468);
    cStack_1e8 = cStack_328;
    uStack_1f8 = uStack_338;
    uStack_1f4 = uStack_334;
    iStack_1f0 = iStack_330;
    uStack_1ec = uStack_32c;
    uStack_208 = uStack_348;
    uStack_204 = uStack_344;
    uStack_200 = uStack_340;
    uStack_1fc = uStack_33c;
    uStack_218 = uStack_358;
    uStack_214 = uStack_354;
    uStack_210 = uStack_350;
    uStack_20c = uStack_34c;
    func_0x048b0bc0(&uStack_450);
    uStack_2de = 0;
    uStack_2da = 0;
    uStack_310 = (long ***)0xffffffffffffffff;
    uStack_308 = (long ****)0x0;
    uStack_300 = CONCAT31(uStack_300._1_3_,0xff);
    puStack_318 = &UNK_0f0edc68;
    uStack_2f8 = _DAT_014e4bb0;
    uStack_2f4 = _UNK_014e4bb4;
    uStack_2f0 = CONCAT44(_UNK_014e4bbc,_UNK_014e4bb8);
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    func_0x0e3bace0(&uStack_298,&uStack_218,&puStack_318);
    func_0x0e3f8190(&uStack_468,CONCAT44(uStack_294,uStack_298) + 0x18);
    if (uStack_450._4_4_ == 2) {
      piVar14 = *(int **)(uStack_458[0xf] + 0x60);
      iVar8 = *piVar14;
      while (iVar8 != (int)uStack_450) {
        piVar14 = piVar14 + 0x16;
        iVar8 = *piVar14;
      }
      pppplVar4 = *(long *****)(piVar14 + 0xc);
      while (pppplVar4 != pppplStack_460) {
        piVar14 = *(int **)(piVar14 + 0xe);
        pppplVar4 = *(long *****)(piVar14 + 0xc);
      }
LAB_0e3bb52f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (uStack_450._4_4_ == 1) {
        piVar14 = *(int **)(uStack_458[0xf] + 0x48);
        iVar8 = *piVar14;
        while (iVar8 != (int)uStack_450) {
          piVar14 = piVar14 + 0x1a;
          iVar8 = *piVar14;
        }
        goto LAB_0e3bb52f;
      }
      if (uStack_450._4_4_ == 0) {
        *(uint *)(uStack_458 + 3) = *(uint *)(uStack_458 + 3) | 0x40000;
      }
    }
    func_0x0e3f8700(&uStack_468,&uStack_298,&UNK_012ba56c);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f012080;
    if (uStack_450 != (long *)0x0) {
      lVar13 = *uStack_450;
      uStack_450 = puVar12;
      (**(code **)(lVar13 + 8))();
      puVar12 = uStack_450;
    }
    uStack_450 = puVar12;
    uStack_4d8 = (undefined4)uStack_458;
    pppplStack_4d0 = (long ****)0x0;
    uStack_4c8 = (long *)((ulong)uStack_4c8 & 0xffffffff00000000);
    uStack_4c0 = (long *)0x1;
    uStack_4b8 = 0;
    uStack_4b0 = &UNK_05dd3ca0;
    puStack_4a8 = &SUB_048b06d0;
    puStack_4a0 = &UNK_05dd3990;
    puStack_498 = &UNK_0e3f8f70;
    puStack_490 = &UNK_0e3f90d0;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    func_0x048b05a0(pppplStack_460,&uStack_4d8);
    plVar11 = plStack_478;
    if (plStack_478 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_478 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_478 + 0x10))(plStack_478);
        func_0x0412c2d0(plVar11);
      }
    }
    func_0x0e3f8940(&uStack_468);
    cStack_1a8 = cStack_268;
    uStack_1b8 = uStack_278;
    uStack_1b4 = uStack_274;
    iStack_1b0 = iStack_270;
    uStack_1ac = uStack_26c;
    uStack_1c8 = uStack_288;
    uStack_1c4 = uStack_284;
    uStack_1c0 = uStack_280;
    uStack_1bc = uStack_27c;
    uStack_1d8 = uStack_298;
    uStack_1d4 = uStack_294;
    uStack_1d0 = uStack_290;
    uStack_1cc = uStack_28c;
    func_0x048b0bc0(&uStack_450);
    uStack_35e = 0;
    uStack_35a = 0;
    pppplStack_390 = (long ****)0xffffffffffffffff;
    pppplStack_388 = (long ****)0x0;
    uStack_380 = CONCAT31(uStack_380._1_3_,0xff);
    uStack_398 = &UNK_0f0edc68;
    uStack_378 = _DAT_014e4bb0;
    uStack_374 = _UNK_014e4bb4;
    uStack_370 = CONCAT44(_UNK_014e4bbc,_UNK_014e4bb8);
    uStack_368 = 0;
    uStack_360 = 0;
    func_0x0e3bace0(&uStack_4d8,&uStack_1d8,&uStack_398);
    uStack_4b0 = (undefined *)0x1e1bc4d500000004;
    if ((DAT_0f750b58 == '\0') && (iVar8 = func_0x04108328(&DAT_0f750b58), iVar8 != 0)) {
      func_0x0e3e3ef0();
      func_0x0410844d(&DAT_0f750b58);
    }
    uStack_468 = (undefined *)CONCAT44(uStack_468._4_4_,uStack_4b0._4_4_);
    pppplStack_460 = (long ****)0x0;
    uStack_458 = (long *)((ulong)uStack_458._4_4_ << 0x20);
    uStack_450 = (long *)0x1;
    pcStack_448 = FUN_048aead0;
    puStack_440 = &UNK_05dd3ca0;
    puStack_438 = &UNK_0e3f92b0;
    lStack_430 = 0;
    uStack_428 = (ulong)uStack_428._4_4_ << 0x20;
    lStack_420 = 0;
    lStack_418 = 0;
    func_0x049057f0(&pppplStack_4d0,&uStack_468);
    func_0x048aea50(&uStack_468);
    uStack_2c8 = uStack_4c0;
    uStack_2c0 = (undefined4)uStack_4b8;
    uStack_2bc = uStack_4b8._4_4_;
    uStack_2d8 = pppplStack_4d0;
    uStack_2d0 = (long ****)uStack_4c8;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f012080;
    if ((DAT_0f551bc8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f551bc8), iVar8 != 0)) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    uStack_468 = (undefined *)CONCAT44(uStack_468._4_4_,_DAT_0f551bb4);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&UNK_0ef46c48;
    pppplStack_460 = (long ****)(plVar11 + 3);
    plVar11[3] = (long)puVar12;
    plVar11[4] = 0;
    *(undefined1 *)(plVar11 + 5) = 0xff;
    uStack_258 = (undefined *)0x0;
    uStack_250 = (long ***)0x0;
    uStack_458 = plVar11;
    func_0x048afd20(&uStack_2d8,&uStack_468);
    plVar11 = uStack_458;
    if (uStack_458 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_458 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*uStack_458 + 0x10))(uStack_458);
        func_0x0412c2d0(plVar11);
      }
    }
    plVar11 = (long *)uStack_250;
    if (uStack_250 != (long ***)0x0) {
      LOCK();
      plVar1 = (long *)(uStack_250 + 1);
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)((long)*uStack_250 + 0x10))(uStack_250);
        func_0x0412c2d0(plVar11);
      }
    }
    uStack_468 = (undefined *)CONCAT44(uStack_4d4,uStack_4d8);
    pppplStack_460 = pppplStack_4d0;
    uStack_458 = uStack_4c8;
    uStack_450 = uStack_4c0;
    pcStack_448 = (code *)uStack_4b8;
    puStack_440 = uStack_4b0;
    puStack_438 = puStack_4a8;
    uStack_29e = 0;
    uStack_29a = 0;
    uStack_2d0 = (long ****)0xffffffffffffffff;
    uStack_2c8 = (long *)0x0;
    uStack_2c0 = CONCAT31(uStack_2c0._1_3_,0xff);
    uStack_2d8 = (long ****)&UNK_0f0edc68;
    uStack_2b8 = _DAT_014e4bb0;
    uStack_2b4 = _UNK_014e4bb4;
    iStack_2b0 = _UNK_014e4bb8;
    uStack_2ac = _UNK_014e4bbc;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    func_0x0e3bace0(&uStack_258,&uStack_468,&uStack_2d8);
  }
  func_0x0d8e82b0(param_1);
  func_0x0e4db7a0(param_1);
  lVar13 = func_0x06d00d00(param_1 + 0x18);
  if ((*(int *)(lVar13 + 0x60) == -0x2b3da790) && (lVar13 = *(long *)(lVar13 + 0x68), lVar13 != 0))
  {
    bVar19 = (*(byte *)(lVar13 + 8) & 1) != 0;
    puVar10 = (undefined *)(lVar13 + 9);
    if (bVar19) {
      puVar10 = *(undefined **)(lVar13 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar19) {
      uVar16 = *(ulong *)(lVar13 + 0x10);
    }
  }
  else {
    puVar10 = &UNK_0145a311;
    uVar16 = 0x10;
  }
  func_0x06d7e3a0(&uStack_468,param_1,puVar10,uVar16,0);
  if ((DAT_0f750e18 == '\0') && (iVar8 = func_0x04108328(&DAT_0f750e18), iVar8 != 0)) {
    func_0x0e3f9560();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f750d98,0xf53dab8);
    func_0x0410844d(&DAT_0f750e18);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f750d98 + 4)) * 8);
  do {
    lVar13 = *plVar11;
    if (lVar13 == -1) goto LAB_0e3bba90;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f750d98 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e3bba90:
    puVar10 = &DAT_0f750d98;
    if (iRam000000000f750df8 != -0x2b3da790) goto LAB_0e3bbafd;
LAB_0e3bbabb:
    lVar13 = *(long *)(puVar10 + 0x68);
    if (lVar13 == 0) goto LAB_0e3bbafd;
    bVar19 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar17 = lVar13 + 9;
    if (bVar19) {
      lVar17 = *(long *)(lVar13 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar19) {
      uVar16 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0e3f9f50(&uStack_358,param_1,lVar17,uVar16);
  }
  else {
    puVar10 = (undefined *)plVar11[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e3bbabb;
LAB_0e3bbafd:
    func_0x0e3f9f50(&uStack_358,param_1,&UNK_0133b74a,9);
  }
  if (cStack_328 == '\0') {
    func_0x0e3fa540(&uStack_468,CONCAT44(uStack_354,uStack_358) + 0x18);
    if (uStack_450._4_4_ == 2) {
      piVar14 = *(int **)(uStack_458[0xf] + 0x60);
      iVar8 = *piVar14;
      while (iVar8 != (int)uStack_450) {
        piVar14 = piVar14 + 0x16;
        iVar8 = *piVar14;
      }
      pppplVar4 = *(long *****)(piVar14 + 0xc);
      while (pppplVar4 != pppplStack_460) {
        piVar14 = *(int **)(piVar14 + 0xe);
        pppplVar4 = *(long *****)(piVar14 + 0xc);
      }
LAB_0e3bbbff:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (uStack_450._4_4_ == 1) {
        piVar14 = *(int **)(uStack_458[0xf] + 0x48);
        iVar8 = *piVar14;
        while (iVar8 != (int)uStack_450) {
          piVar14 = piVar14 + 0x1a;
          iVar8 = *piVar14;
        }
        goto LAB_0e3bbbff;
      }
      if (uStack_450._4_4_ == 0) {
        *(uint *)(uStack_458 + 3) = *(uint *)(uStack_458 + 3) | 0x40000;
      }
    }
    func_0x0e3faa80(&uStack_468,&uStack_358,&UNK_011b2eb7,0xc,0x10);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f087df0;
    if (uStack_450 != (long *)0x0) {
      lVar13 = *uStack_450;
      uStack_450 = plVar11;
      (**(code **)(lVar13 + 8))();
      plVar11 = uStack_450;
    }
    uStack_450 = plVar11;
    uStack_4d8 = (undefined4)uStack_458;
    pppplStack_4d0 = (long ****)0x0;
    uStack_4c8 = (long *)((ulong)uStack_4c8 & 0xffffffff00000000);
    uStack_4c0 = (long *)0x1;
    uStack_4b8 = 0;
    uStack_4b0 = &UNK_06d00fe0;
    puStack_4a8 = &SUB_048b06d0;
    puStack_4a0 = &SUB_06d00d00;
    puStack_498 = &UNK_0e3fb040;
    puStack_490 = &UNK_0e3fb1c0;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    func_0x048b05a0(pppplStack_460,&uStack_4d8);
    plVar11 = plStack_478;
    if (plStack_478 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_478 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_478 + 0x10))(plStack_478);
        func_0x0412c2d0(plVar11);
      }
    }
    func_0x0e3fad40(&uStack_468);
    lVar13 = CONCAT44(uStack_354,uStack_358);
    uStack_e8 = CONCAT44(uStack_34c,uStack_350);
    uStack_e0 = CONCAT44(uStack_344,uStack_348);
    uStack_d8 = CONCAT44(uStack_33c,uStack_340);
    uStack_c7 = CONCAT13((undefined1)uStack_32c,iStack_330._1_3_);
    uStack_c3 = CONCAT13(cStack_328,uStack_32c._1_3_);
    uStack_d0 = uStack_338;
    uStack_cc = uStack_334;
    uStack_c8 = (undefined1)iStack_330;
    func_0x048b0bc0(&uStack_450);
    if ((DAT_0f750e18 == '\0') && (iVar8 = func_0x04108328(&DAT_0f750e18), iVar8 != 0)) {
      func_0x0e3f9560();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f750d98,0xf53dab8);
      func_0x0410844d(&DAT_0f750e18);
    }
    plVar11 = (long *)(*(long *)(lVar13 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f750d98 + 4)) * 8);
    do {
      lVar17 = *plVar11;
      if (lVar17 == -1) goto LAB_0e3bbde0;
      plVar11 = (long *)(*(long *)(lVar13 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f750d98 + 4)
            );
    if (plVar11 == *(long **)(lVar13 + 0x38)) {
LAB_0e3bbde0:
      uStack_468 = &DAT_0f750d98;
    }
    else {
      uStack_468 = (undefined *)plVar11[2];
    }
    pppplStack_460 = (long ****)(lVar13 + 0x18);
    func_0x0ed624b0(&uStack_468,&UNK_011b2eb7,0xc);
    uStack_60 = uStack_e8;
    uStack_58 = uStack_e0;
    uStack_50 = (undefined4)uStack_d8;
    uStack_4c = uStack_d8._4_4_;
    uStack_48 = uStack_d0;
    uStack_44 = uStack_cc;
    uStack_40 = uStack_c8;
    uStack_3f = uStack_c7;
    uStack_3b = uStack_c3;
    lStack_68 = lVar13;
    func_0x0e3fa540(&uStack_468,lVar13 + 0x18);
    if (uStack_450._4_4_ == 2) {
      piVar14 = *(int **)(uStack_458[0xf] + 0x60);
      iVar8 = *piVar14;
      while (iVar8 != (int)uStack_450) {
        piVar14 = piVar14 + 0x16;
        iVar8 = *piVar14;
      }
      lVar13 = *(long *)(piVar14 + 0xc);
      while ((long ****)lVar13 != pppplStack_460) {
        piVar14 = *(int **)(piVar14 + 0xe);
        lVar13 = *(long *)(piVar14 + 0xc);
      }
LAB_0e3bbf3f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (uStack_450._4_4_ == 1) {
        piVar14 = *(int **)(uStack_458[0xf] + 0x48);
        iVar8 = *piVar14;
        while (iVar8 != (int)uStack_450) {
          piVar14 = piVar14 + 0x1a;
          iVar8 = *piVar14;
        }
        goto LAB_0e3bbf3f;
      }
      if (uStack_450._4_4_ == 0) {
        *(uint *)(uStack_458 + 3) = *(uint *)(uStack_458 + 3) | 0x40000;
      }
    }
    func_0x0e3faa80(&uStack_468,&lStack_68,&UNK_011e6eaa,0xb,0x10);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f087df0;
    if (uStack_450 != (long *)0x0) {
      lVar13 = *uStack_450;
      uStack_450 = plVar11;
      (**(code **)(lVar13 + 8))();
      plVar11 = uStack_450;
    }
    uStack_450 = plVar11;
    uStack_4d8 = (undefined4)uStack_458;
    pppplStack_4d0 = (long ****)0x0;
    uStack_4c8 = (long *)((ulong)uStack_4c8 & 0xffffffff00000000);
    uStack_4c0 = (long *)0x1;
    uStack_4b8 = 0;
    uStack_4b0 = &UNK_06d00fe0;
    puStack_4a8 = &SUB_048b06d0;
    puStack_4a0 = &SUB_06d00d00;
    puStack_498 = &UNK_0e3fb3a0;
    puStack_490 = &UNK_0e3fb520;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    func_0x048b05a0(pppplStack_460,&uStack_4d8);
    plVar11 = plStack_478;
    if (plStack_478 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_478 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_478 + 0x10))(plStack_478);
        func_0x0412c2d0(plVar11);
      }
    }
    func_0x0e3fad40(&uStack_468);
    uStack_b8 = (undefined4)uStack_60;
    uStack_b4 = uStack_60._4_4_;
    uStack_b0 = (undefined4)uStack_58;
    uStack_ac = uStack_58._4_4_;
    uStack_a8 = uStack_50;
    uStack_a4 = uStack_4c;
    uStack_a0 = uStack_48;
    uStack_9c = uStack_44;
    uStack_98 = uStack_40;
    uStack_97 = uStack_3f;
    uStack_93 = uStack_3b;
    func_0x048b0bc0(&uStack_450);
    if ((DAT_0f750e18 == '\0') && (iVar8 = func_0x04108328(&DAT_0f750e18), iVar8 != 0)) {
      func_0x0e3f9560();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f750d98,0xf53dab8);
      func_0x0410844d(&DAT_0f750e18);
    }
    plVar11 = (long *)(*(long *)(lStack_68 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lStack_68 + 0x20) -
                                           *(long *)(lStack_68 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f750d98 + 4)) * 8);
    do {
      lVar13 = *plVar11;
      if (lVar13 == -1) goto LAB_0e3bc100;
      plVar11 = (long *)(*(long *)(lStack_68 + 0x30) + lVar13 * 0x18);
    } while (*(uint *)(*(long *)(lStack_68 + 0x30) + 8 + lVar13 * 0x18) !=
             *(uint *)(_DAT_0f750d98 + 4));
    if (plVar11 == *(long **)(lStack_68 + 0x38)) {
LAB_0e3bc100:
      uStack_468 = &DAT_0f750d98;
    }
    else {
      uStack_468 = (undefined *)plVar11[2];
    }
    pppplStack_460 = (long ****)(lStack_68 + 0x18);
    func_0x0ed624b0(&uStack_468,&UNK_011e6eaa,0xb);
    lStack_1a0 = lStack_68;
    uStack_198 = CONCAT44(uStack_b4,uStack_b8);
    uStack_190 = CONCAT44(uStack_ac,uStack_b0);
    uStack_188 = uStack_a8;
    uStack_184 = uStack_a4;
    uStack_180 = uStack_a0;
    uStack_17c = uStack_9c;
    iStack_178 = CONCAT31((int3)uStack_97,uStack_98);
    uStack_174._1_3_ = (undefined3)uStack_93;
    uStack_174 = CONCAT31(uStack_174._1_3_,(char)((uint)uStack_97 >> 0x18));
    cStack_170 = (char)((uint)uStack_93 >> 0x18);
    func_0x0e3fa540(&uStack_468,(long ****)(lStack_68 + 0x18));
    if (uStack_450._4_4_ == 2) {
      piVar14 = *(int **)(uStack_458[0xf] + 0x60);
      iVar8 = *piVar14;
      while (iVar8 != (int)uStack_450) {
        piVar14 = piVar14 + 0x16;
        iVar8 = *piVar14;
      }
      pppplVar4 = *(long *****)(piVar14 + 0xc);
      while (pppplVar4 != pppplStack_460) {
        piVar14 = *(int **)(piVar14 + 0xe);
        pppplVar4 = *(long *****)(piVar14 + 0xc);
      }
LAB_0e3bc25f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (uStack_450._4_4_ == 1) {
        piVar14 = *(int **)(uStack_458[0xf] + 0x48);
        iVar8 = *piVar14;
        while (iVar8 != (int)uStack_450) {
          piVar14 = piVar14 + 0x1a;
          iVar8 = *piVar14;
        }
        goto LAB_0e3bc25f;
      }
      if (uStack_450._4_4_ == 0) {
        *(uint *)(uStack_458 + 3) = *(uint *)(uStack_458 + 3) | 0x40000;
      }
    }
    func_0x0e3faa80(&uStack_468,&lStack_1a0,&UNK_0146981e,8,0x10);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f4b9298;
    if (uStack_450 != (long *)0x0) {
      lVar13 = *uStack_450;
      uStack_450 = plVar11;
      (**(code **)(lVar13 + 8))();
      plVar11 = uStack_450;
    }
    uStack_450 = plVar11;
    uStack_4d8 = (undefined4)uStack_458;
    pppplStack_4d0 = (long ****)0x0;
    uStack_4c8 = (long *)((ulong)uStack_4c8 & 0xffffffff00000000);
    uStack_4c0 = (long *)0x1;
    uStack_4b8 = 0;
    uStack_4b0 = &UNK_0e3fb900;
    puStack_4a8 = &SUB_048b06d0;
    puStack_4a0 = &UNK_0e3f7730;
    puStack_498 = &UNK_0e3fb9c0;
    puStack_490 = &UNK_0e3fbb20;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    func_0x048b05a0(pppplStack_460,&uStack_4d8);
    plVar11 = plStack_478;
    if (plStack_478 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_478 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_478 + 0x10))(plStack_478);
        func_0x0412c2d0(plVar11);
      }
    }
    func_0x0e3fad40(&uStack_468);
    cVar7 = cStack_170;
    uVar18 = uStack_174;
    iVar8 = iStack_178;
    lVar13 = lStack_1a0;
    uStack_88 = (undefined4)uStack_198;
    uStack_84 = uStack_198._4_4_;
    uStack_80 = (undefined4)uStack_190;
    uStack_7c = uStack_190._4_4_;
    uStack_78 = uStack_188;
    uStack_74 = uStack_184;
    uStack_70 = uStack_180;
    uStack_6c = uStack_17c;
    func_0x048b0bc0(&uStack_450);
    if (iVar8 == 4) {
      if ((DAT_0f750e18 == '\0') && (iVar9 = func_0x04108328(&DAT_0f750e18), iVar9 != 0)) {
        func_0x0e3f9560();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f750d98,0xf53dab8);
        func_0x0410844d(&DAT_0f750e18);
      }
      plVar11 = (long *)(*(long *)(lVar13 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f750d98 + 4)) * 8);
      do {
        lVar17 = *plVar11;
        if (lVar17 == -1) goto LAB_0e3bc4dd;
        plVar11 = (long *)(*(long *)(lVar13 + 0x30) + lVar17 * 0x18);
      } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar17 * 0x18) !=
               *(uint *)(_DAT_0f750d98 + 4));
      if (plVar11 == *(long **)(lVar13 + 0x38)) {
LAB_0e3bc4dd:
        puVar10 = &DAT_0f750d98;
      }
      else {
        puVar10 = (undefined *)plVar11[2];
      }
      uStack_31c = uVar18;
      puVar10 = (undefined *)func_0x048b1040(lVar13 + 0x18,puVar10,uVar18,1);
      if (puVar10 == (undefined *)0x0) {
        uStack_468 = (undefined *)0x0;
        pppplStack_460 = (long ****)0x0;
        FUN_048b10d0(&uStack_468);
        puVar15 = *(undefined **)(uStack_468 + 0x38);
        puVar10 = uStack_468;
        if (puVar15 == (undefined *)0x0) goto LAB_0e3be627;
LAB_0e3be64c:
        do {
          puVar10 = puVar15;
          puVar15 = *(undefined **)(puVar10 + 0x38);
          if (*(undefined **)(puVar10 + 0x38) == (undefined *)0x0) {
            uStack_468 = (undefined *)0x0;
            pppplStack_460 = (long ****)0x0;
            FUN_048b10d0(&uStack_468);
            puVar15 = uStack_468;
          }
        } while (puVar15 != (undefined *)0x0);
      }
      else {
        puVar15 = *(undefined **)(puVar10 + 0x38);
        if (*(undefined **)(puVar10 + 0x38) != (undefined *)0x0) goto LAB_0e3be64c;
LAB_0e3be627:
        uStack_468 = (undefined *)0x0;
        pppplStack_460 = (long ****)0x0;
        FUN_048b10d0(&uStack_468);
        puVar15 = uStack_468;
        if (uStack_468 != (undefined *)0x0) goto LAB_0e3be64c;
      }
      lVar17 = *(long *)(puVar10 + 0x48);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0xb8,0);
      }
      puVar12[1] = 0xffffffffffffffff;
      puVar12[2] = 0;
      *(undefined1 *)(puVar12 + 3) = 0xff;
      *puVar12 = &UNK_0f4b8cf8;
      *(undefined1 *)(puVar12 + 4) = 0;
      *(undefined1 *)(puVar12 + 0xc) = 0;
      *(undefined1 *)(puVar12 + 0xd) = 0;
      *(undefined1 *)(puVar12 + 0x15) = 0;
      puVar12[0x16] = 0;
      plVar11 = *(long **)(lVar17 + 8);
      *(undefined8 **)(lVar17 + 8) = puVar12;
      uVar18 = uStack_31c;
joined_r0x0e3be70d:
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x28))();
      }
    }
    else if (iVar8 == 1) {
      if ((DAT_0f750e18 == '\0') && (iVar9 = func_0x04108328(&DAT_0f750e18), iVar9 != 0)) {
        func_0x0e3f9560();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f750d98,0xf53dab8);
        func_0x0410844d(&DAT_0f750e18);
      }
      plVar11 = (long *)(*(long *)(lVar13 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f750d98 + 4)) * 8);
      do {
        lVar17 = *plVar11;
        if (lVar17 == -1) goto LAB_0e3bc45d;
        plVar11 = (long *)(*(long *)(lVar13 + 0x30) + lVar17 * 0x18);
      } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar17 * 0x18) !=
               *(uint *)(_DAT_0f750d98 + 4));
      if (plVar11 == *(long **)(lVar13 + 0x38)) {
LAB_0e3bc45d:
        puVar10 = &DAT_0f750d98;
      }
      else {
        puVar10 = (undefined *)plVar11[2];
      }
      puVar10 = (undefined *)func_0x048b0c90(lVar13 + 0x18,puVar10,uVar18,1);
      if (puVar10 == (undefined *)0x0) {
        uStack_468 = (undefined *)0x0;
        pppplStack_460 = (long ****)0x0;
        func_0x048b0d20(&uStack_468);
        puVar10 = uStack_468;
      }
      lVar17 = *(long *)(puVar10 + 0x58);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0xb8,0);
      }
      puVar12[1] = 0xffffffffffffffff;
      puVar12[2] = 0;
      *(undefined1 *)(puVar12 + 3) = 0xff;
      *puVar12 = &UNK_0f4b8cf8;
      *(undefined1 *)(puVar12 + 4) = 0;
      *(undefined1 *)(puVar12 + 0xc) = 0;
      *(undefined1 *)(puVar12 + 0xd) = 0;
      *(undefined1 *)(puVar12 + 0x15) = 0;
      puVar12[0x16] = 0;
      plVar11 = *(long **)(lVar17 + 8);
      *(undefined8 **)(lVar17 + 8) = puVar12;
      goto joined_r0x0e3be70d;
    }
    uStack_258 = (undefined *)lVar13;
    uStack_250 = (long ***)CONCAT44(uStack_84,uStack_88);
    uStack_248 = uStack_80;
    uStack_244 = uStack_7c;
    uStack_240 = uStack_78;
    uStack_23c = uStack_74;
    uStack_238 = uStack_70;
    uStack_234 = uStack_6c;
    iStack_230 = iVar8;
    uStack_22c = uVar18;
    cStack_228 = cVar7;
    func_0x0e3faa80(&uStack_468,&uStack_258,&UNK_014ae949,4,1);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f490000;
    if (uStack_450 != (long *)0x0) {
      lVar13 = *uStack_450;
      uStack_450 = plVar11;
      (**(code **)(lVar13 + 8))();
      plVar11 = uStack_450;
    }
    uStack_450 = plVar11;
    uStack_4d8 = (undefined4)uStack_458;
    pppplStack_4d0 = (long ****)0x0;
    uStack_4c8 = (long *)((ulong)uStack_4c8 & 0xffffffff00000000);
    uStack_4c0 = (long *)0x1;
    uStack_4b8 = 0;
    uStack_4b0 = &UNK_0d9567f0;
    puStack_4a8 = &SUB_048b06d0;
    puStack_4a0 = &SUB_0d94b4c0;
    puStack_498 = &UNK_0e3fbcf0;
    puStack_490 = &UNK_0e3fbec0;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    func_0x048b05a0(pppplStack_460,&uStack_4d8);
    plVar11 = plStack_478;
    if (plStack_478 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_478 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_478 + 0x10))(plStack_478);
        func_0x0412c2d0(plVar11);
      }
    }
    func_0x0e3fad40(&uStack_468);
    cStack_1e8 = cStack_228;
    uStack_1f8 = uStack_238;
    uStack_1f4 = uStack_234;
    iStack_1f0 = iStack_230;
    uStack_1ec = uStack_22c;
    uStack_208 = uStack_248;
    uStack_204 = uStack_244;
    uStack_200 = uStack_240;
    uStack_1fc = uStack_23c;
    uStack_218 = (undefined4)uStack_258;
    uStack_214 = uStack_258._4_4_;
    uStack_210 = (undefined4)uStack_250;
    uStack_20c = uStack_250._4_4_;
    func_0x048b0bc0(&uStack_450);
    func_0x0e3faa80(&uStack_468,&uStack_218,&UNK_01380236,9,0);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f4e3bd0;
    if (uStack_450 != (long *)0x0) {
      lVar13 = *uStack_450;
      uStack_450 = plVar11;
      (**(code **)(lVar13 + 8))();
      plVar11 = uStack_450;
    }
    uStack_450 = plVar11;
    uStack_4d8 = (undefined4)uStack_458;
    pppplStack_4d0 = (long ****)0x0;
    uStack_4c8 = (long *)((ulong)uStack_4c8 & 0xffffffff00000000);
    uStack_4c0 = (long *)0x1;
    uStack_4b8 = 0;
    uStack_4b0 = &UNK_0e3fc0a0;
    puStack_4a8 = &SUB_048b06d0;
    puStack_4a0 = &UNK_0e3fc0b0;
    puStack_498 = &UNK_0e3fc190;
    puStack_490 = &UNK_0e3fc3d0;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    func_0x048b05a0(pppplStack_460,&uStack_4d8);
    plVar11 = plStack_478;
    if (plStack_478 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_478 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_478 + 0x10))(plStack_478);
        func_0x0412c2d0(plVar11);
      }
    }
    func_0x0e3fad40(&uStack_468);
    cStack_268 = cStack_1e8;
    uStack_278 = uStack_1f8;
    uStack_274 = uStack_1f4;
    iStack_270 = iStack_1f0;
    uStack_26c = uStack_1ec;
    uStack_288 = uStack_208;
    uStack_284 = uStack_204;
    uStack_280 = uStack_200;
    uStack_27c = uStack_1fc;
    uStack_298 = uStack_218;
    uStack_294 = uStack_214;
    uStack_290 = uStack_210;
    uStack_28c = uStack_20c;
    func_0x048b0bc0(&uStack_450);
    func_0x0e3fa540(&uStack_468,CONCAT44(uStack_294,uStack_298) + 0x18);
    if (uStack_450._4_4_ == 2) {
      piVar14 = *(int **)(uStack_458[0xf] + 0x60);
      iVar8 = *piVar14;
      while (iVar8 != (int)uStack_450) {
        piVar14 = piVar14 + 0x16;
        iVar8 = *piVar14;
      }
      pppplVar4 = *(long *****)(piVar14 + 0xc);
      while (pppplVar4 != pppplStack_460) {
        piVar14 = *(int **)(piVar14 + 0xe);
        pppplVar4 = *(long *****)(piVar14 + 0xc);
      }
LAB_0e3bc9bf:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (uStack_450._4_4_ == 1) {
        piVar14 = *(int **)(uStack_458[0xf] + 0x48);
        iVar8 = *piVar14;
        while (iVar8 != (int)uStack_450) {
          piVar14 = piVar14 + 0x1a;
          iVar8 = *piVar14;
        }
        goto LAB_0e3bc9bf;
      }
      if (uStack_450._4_4_ == 0) {
        *(uint *)(uStack_458 + 3) = *(uint *)(uStack_458 + 3) | 0x40000;
      }
    }
    func_0x0e3faa80(&uStack_468,&uStack_298,&UNK_01340d28,7,0x10);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f2ce5d8;
    if (uStack_450 != (long *)0x0) {
      lVar13 = *uStack_450;
      uStack_450 = plVar11;
      (**(code **)(lVar13 + 8))();
      plVar11 = uStack_450;
    }
    uStack_450 = plVar11;
    uStack_4d8 = (undefined4)uStack_458;
    pppplStack_4d0 = (long ****)0x0;
    uStack_4c8 = (long *)((ulong)uStack_4c8 & 0xffffffff00000000);
    uStack_4c0 = (long *)0x1;
    uStack_4b8 = 0;
    uStack_4b0 = &UNK_0da79540;
    puStack_4a8 = &SUB_048b06d0;
    puStack_4a0 = &SUB_0b6acf10;
    puStack_498 = &UNK_0e3fe8f0;
    puStack_490 = &UNK_0e3feb50;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    func_0x048b05a0(pppplStack_460,&uStack_4d8);
    plVar11 = plStack_478;
    if (plStack_478 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_478 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_478 + 0x10))(plStack_478);
        func_0x0412c2d0(plVar11);
      }
    }
    func_0x0e3fad40(&uStack_468);
    cStack_1a8 = cStack_268;
    uStack_1b8 = uStack_278;
    uStack_1b4 = uStack_274;
    iStack_1b0 = iStack_270;
    uStack_1ac = uStack_26c;
    uStack_1c8 = uStack_288;
    uStack_1c4 = uStack_284;
    uStack_1c0 = uStack_280;
    uStack_1bc = uStack_27c;
    uStack_1d8 = uStack_298;
    uStack_1d4 = uStack_294;
    uStack_1d0 = uStack_290;
    uStack_1cc = uStack_28c;
    func_0x048b0bc0(&uStack_450);
    func_0x0e3fa540(&uStack_468,CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
    if (uStack_450._4_4_ == 2) {
      piVar14 = *(int **)(uStack_458[0xf] + 0x60);
      iVar8 = *piVar14;
      while (iVar8 != (int)uStack_450) {
        piVar14 = piVar14 + 0x16;
        iVar8 = *piVar14;
      }
      pppplVar4 = *(long *****)(piVar14 + 0xc);
      while (pppplVar4 != pppplStack_460) {
        piVar14 = *(int **)(piVar14 + 0xe);
        pppplVar4 = *(long *****)(piVar14 + 0xc);
      }
LAB_0e3bcc1f:
      *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
    }
    else {
      if (uStack_450._4_4_ == 1) {
        piVar14 = *(int **)(uStack_458[0xf] + 0x48);
        iVar8 = *piVar14;
        while (iVar8 != (int)uStack_450) {
          piVar14 = piVar14 + 0x1a;
          iVar8 = *piVar14;
        }
        goto LAB_0e3bcc1f;
      }
      if (uStack_450._4_4_ == 0) {
        *(uint *)(uStack_458 + 3) = *(uint *)(uStack_458 + 3) | 0x40000;
      }
    }
    func_0x0e3faa80(&uStack_468,&uStack_1d8,&UNK_01268479,0x10,0x10);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f0126a0;
    if (uStack_450 != (long *)0x0) {
      lVar13 = *uStack_450;
      uStack_450 = plVar11;
      (**(code **)(lVar13 + 8))();
      plVar11 = uStack_450;
    }
    uStack_450 = plVar11;
    uStack_4d8 = (undefined4)uStack_458;
    pppplStack_4d0 = (long ****)0x0;
    uStack_4c8 = (long *)((ulong)uStack_4c8 & 0xffffffff00000000);
    uStack_4c0 = (long *)0x1;
    uStack_4b8 = 0;
    uStack_4b0 = &UNK_05daeda0;
    puStack_4a8 = &SUB_048b06d0;
    puStack_4a0 = &UNK_05daea90;
    puStack_498 = &UNK_0e3fed30;
    puStack_490 = &UNK_0e3feea0;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    func_0x048b05a0(pppplStack_460,&uStack_4d8);
    plVar11 = plStack_478;
    if (plStack_478 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_478 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_478 + 0x10))(plStack_478);
        func_0x0412c2d0(plVar11);
      }
    }
    func_0x0e3fad40(&uStack_468);
    func_0x048b0bc0(&uStack_450);
  }
  if ((DAT_0f750ed0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f750ed0), iVar8 != 0)) {
    func_0x0e3ff140();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f750e50,0xf53dab8);
    func_0x0410844d(&DAT_0f750ed0);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f750e50 + 4)) * 8);
  do {
    lVar13 = *plVar11;
    if (lVar13 == -1) goto LAB_0e3bcdc0;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f750e50 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e3bcdc0:
    puVar10 = &DAT_0f750e50;
    if (iRam000000000f750eb0 != -0x2b3da790) goto LAB_0e3bce2d;
LAB_0e3bcdeb:
    lVar13 = *(long *)(puVar10 + 0x68);
    if (lVar13 == 0) goto LAB_0e3bce2d;
    bVar19 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar17 = lVar13 + 9;
    if (bVar19) {
      lVar17 = *(long *)(lVar13 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar19) {
      uVar16 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0e3ff780(&puStack_318,param_1,lVar17,uVar16);
  }
  else {
    puVar10 = (undefined *)plVar11[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e3bcdeb;
LAB_0e3bce2d:
    func_0x0e3ff780(&puStack_318,param_1,&UNK_013716ff,0xd);
  }
  if ((char)uStack_2e8 == '\0') {
    uStack_2f0 = 0x1e1bc4d500000004;
    if ((DAT_0f750ef0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f750ef0), iVar8 != 0)) {
      func_0x0e3ff250();
      func_0x0410844d(&DAT_0f750ef0);
    }
    uStack_468 = (undefined *)CONCAT44(uStack_468._4_4_,uStack_2f0._4_4_);
    pppplStack_460 = (long ****)0x0;
    uStack_458 = (long *)((ulong)uStack_458 & 0xffffffff00000000);
    uStack_450 = (long *)0x1;
    pcStack_448 = FUN_048aead0;
    puStack_440 = &UNK_0e4002e0;
    puStack_438 = &UNK_0e4003a0;
    lStack_430 = 0;
    uStack_428 = uStack_428 & 0xffffffff00000000;
    lStack_420 = 0;
    lStack_418 = 0;
    func_0x049057f0(&uStack_310,&uStack_468);
    func_0x048aea50(&uStack_468);
    uStack_4c8 = (long *)CONCAT44(uStack_2fc,uStack_300);
    uStack_4c0 = (long *)CONCAT44(uStack_2f4,uStack_2f8);
    uStack_4d8 = (undefined4)uStack_310;
    uStack_4d4 = uStack_310._4_4_;
    pppplStack_4d0 = uStack_308;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f4b9400;
    if ((DAT_0f551bc8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f551bc8), iVar8 != 0)) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    uStack_468 = (undefined *)CONCAT44(uStack_468._4_4_,_DAT_0f551bb4);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&UNK_0ef46c48;
    pppplStack_460 = (long ****)(plVar11 + 3);
    plVar11[3] = (long)puVar12;
    plVar11[4] = 0;
    *(undefined1 *)(plVar11 + 5) = 0xff;
    uStack_398 = (undefined *)0x0;
    pppplStack_390 = (long ****)0x0;
    uStack_458 = plVar11;
    func_0x048afd20(&uStack_4d8,&uStack_468);
    plVar11 = uStack_458;
    if (uStack_458 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_458 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*uStack_458 + 0x10))(uStack_458);
        func_0x0412c2d0(plVar11);
      }
    }
    pppplVar4 = pppplStack_390;
    if (pppplStack_390 != (long ****)0x0) {
      LOCK();
      ppplVar3 = (long ***)(pppplStack_390 + 1);
      pplVar2 = *ppplVar3;
      *ppplVar3 = (long **)((long)*ppplVar3 + -1);
      UNLOCK();
      if (pplVar2 == (long **)0x0) {
        (*(code *)(*pppplStack_390)[2])(pppplStack_390);
        func_0x0412c2d0(pppplVar4);
      }
    }
    uStack_398 = puStack_318;
    pppplStack_390 = (long ****)uStack_310;
    pppplStack_388 = uStack_308;
    uStack_380 = uStack_300;
    uStack_37c = uStack_2fc;
    uStack_378 = uStack_2f8;
    uStack_374 = uStack_2f4;
    uStack_370 = uStack_2f0;
    uStack_368 = uStack_2e8;
    if ((DAT_0f750ef0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f750ef0), iVar8 != 0)) {
      func_0x0e3ff250();
      func_0x0410844d(&DAT_0f750ef0);
    }
    puVar10 = uStack_398;
    uStack_370 = 0x8f735a5600000001;
    if ((DAT_0f750ed0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f750ed0), iVar8 != 0)) {
      func_0x0e3ff140();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f750e50,0xf53dab8);
      func_0x0410844d(&DAT_0f750ed0);
    }
    pppplStack_460 = (long ****)(puVar10 + 0x18);
    plVar11 = (long *)(*(long *)(puVar10 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f750e50 + 4)) * 8);
    do {
      lVar13 = *plVar11;
      if (lVar13 == -1) goto LAB_0e3bd120;
      plVar11 = (long *)(*(long *)(puVar10 + 0x30) + lVar13 * 0x18);
    } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar13 * 0x18) !=
             *(uint *)(_DAT_0f750e50 + 4));
    if (plVar11 == *(long **)(puVar10 + 0x38)) {
LAB_0e3bd120:
      uStack_468 = &DAT_0f750e50;
    }
    else {
      uStack_468 = (undefined *)plVar11[2];
    }
    func_0x0ed621a0(&uStack_468,uStack_370._4_4_);
    uStack_468 = (undefined *)CONCAT62(uStack_468._2_6_,1);
    uStack_458 = (long *)CONCAT44(uStack_458._4_4_,uStack_370._4_4_);
    uStack_450 = (long *)0x0;
    pcStack_448 = (code *)0x0;
    puStack_440 = (undefined *)0x0;
    puStack_438 = (undefined1 *)0x0;
    lStack_430 = 0;
    uStack_428 = 0x6563696f68630c;
    lStack_410 = 0;
    lStack_408 = 0;
    lStack_400 = 0;
    lStack_3f8 = 0;
    lStack_3f0 = 0;
    lStack_3e8 = 0;
    uStack_3e0 = 0x3f600000;
    pppplStack_460 = (long ****)&pppplStack_390;
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
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f4b9478;
    if (uStack_450 != (long *)0x0) {
      lVar13 = *uStack_450;
      uStack_450 = puVar12;
      (**(code **)(lVar13 + 8))();
      puVar12 = uStack_450;
    }
    uStack_450 = puVar12;
    uStack_4d8 = (undefined4)uStack_458;
    pppplStack_4d0 = (long ****)0x0;
    uStack_4c8 = (long *)((ulong)uStack_4c8 & 0xffffffff00000000);
    uStack_4c0 = (long *)0x1;
    uStack_4b8 = 0;
    uStack_4b0 = &UNK_0e403cb0;
    puStack_4a8 = &SUB_048b06d0;
    puStack_4a0 = &UNK_0e402910;
    puStack_498 = &UNK_0e403d70;
    puStack_490 = &UNK_0e404080;
    uStack_488 = 0;
    uStack_480 = 0;
    plStack_478 = (long *)0x0;
    func_0x048b05a0(pppplStack_460,&uStack_4d8);
    plVar11 = plStack_478;
    if (plStack_478 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_478 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_478 + 0x10))(plStack_478);
        func_0x0412c2d0(plVar11);
      }
    }
    pppplVar4 = pppplStack_460;
    if ((DAT_0f550a20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550a20), iVar8 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_4d8 = _DAT_0f550a0c;
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    pcVar6 = pcStack_448;
    puVar12 = uStack_450;
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&UNK_0ef439d0;
    pppplStack_4d0 = (long ****)(plVar11 + 3);
    uStack_450 = (long *)0x0;
    pcStack_448 = (code *)0x0;
    plVar11[3] = (long)puVar12;
    plVar11[4] = (long)pcVar6;
    plVar11[7] = lStack_430;
    plVar11[5] = (long)puStack_440;
    plVar11[6] = (long)puStack_438;
    puStack_440 = (undefined *)0x0;
    puStack_438 = (undefined1 *)0x0;
    lStack_430 = 0;
    plVar11[10] = lStack_418;
    plVar11[8] = uStack_428;
    plVar11[9] = lStack_420;
    uStack_428 = 0;
    lStack_420 = 0;
    lStack_418 = 0;
    plVar11[0xb] = lStack_410;
    plVar11[0xc] = lStack_408;
    plVar11[0xd] = lStack_400;
    lStack_410 = 0;
    lStack_408 = 0;
    lStack_400 = 0;
    plVar11[0xe] = lStack_3f8;
    plVar11[0xf] = lStack_3f0;
    plVar11[0x10] = lStack_3e8;
    lStack_3f8 = 0;
    lStack_3f0 = 0;
    lStack_3e8 = 0;
    *(undefined4 *)(plVar11 + 0x11) = uStack_3e0;
    plVar11[0x12] = lStack_3d8;
    plVar11[0x13] = lStack_3d0;
    plVar11[0x14] = lStack_3c8;
    lStack_3d8 = 0;
    lStack_3d0 = 0;
    lStack_3c8 = 0;
    plVar11[0x17] = lStack_3b0;
    *(undefined4 *)(plVar11 + 0x15) = (undefined4)uStack_3c0;
    *(undefined4 *)((long)plVar11 + 0xac) = uStack_3c0._4_4_;
    *(undefined4 *)(plVar11 + 0x16) = (undefined4)uStack_3b8;
    *(undefined4 *)((long)plVar11 + 0xb4) = uStack_3b8._4_4_;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    lStack_3b0 = 0;
    *(ulong *)((long)plVar11 + 0xc5) = CONCAT17(uStack_39c,CONCAT43(uStack_3a0,uStack_3a4._1_3_));
    plVar11[0x18] = CONCAT44(uStack_3a4,CONCAT22(uStack_3a6,uStack_3a8));
    uStack_2d8 = (long ****)0x0;
    uStack_2d0 = (long ****)0x0;
    uStack_4c8 = plVar11;
    func_0x048afd20(pppplVar4,&uStack_4d8);
    plVar11 = uStack_4c8;
    if (uStack_4c8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_4c8 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*uStack_4c8 + 0x10))(uStack_4c8);
        func_0x0412c2d0(plVar11);
      }
    }
    plVar11 = (long *)uStack_2d0;
    if (uStack_2d0 != (long ****)0x0) {
      LOCK();
      plVar1 = (long *)(uStack_2d0 + 1);
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)((long)*uStack_2d0 + 0x10))(uStack_2d0);
        func_0x0412c2d0(plVar11);
      }
    }
    ppplVar3 = pppplVar4[2];
    iVar8 = *(int *)((long)pppplVar4 + 0x1c);
    if (iVar8 == 2) {
      plVar11 = ppplVar3[0xf][0xc];
      iVar8 = (int)*plVar11;
      while (iVar8 != *(int *)(pppplVar4 + 3)) {
        plVar11 = plVar11 + 0xb;
        iVar8 = (int)*plVar11;
      }
      for (; (long ***)plVar11[6] != pppplVar4[1]; plVar11 = (long *)plVar11[7]) {
      }
LAB_0e3bd67a:
      *(uint *)(plVar11 + 2) = *(uint *)(plVar11 + 2) | (int)uStack_468 << 0x10;
    }
    else {
      if (iVar8 == 1) {
        plVar11 = ppplVar3[0xf][9];
        iVar8 = (int)*plVar11;
        while (iVar8 != *(int *)(pppplVar4 + 3)) {
          plVar11 = plVar11 + 0xd;
          iVar8 = (int)*plVar11;
        }
        goto LAB_0e3bd67a;
      }
      if (iVar8 == 0) {
        *(uint *)(ppplVar3 + 3) = *(uint *)(ppplVar3 + 3) | (int)uStack_468 << 0x10;
      }
    }
    func_0x048b0bc0(&uStack_450);
  }
  if ((DAT_0f751158 == '\0') && (iVar8 = func_0x04108328(&DAT_0f751158), iVar8 != 0)) {
    func_0x0e4045b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7510d8,0xf53dab8);
    func_0x0410844d(&DAT_0f751158);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7510d8 + 4)) * 8);
  do {
    lVar13 = *plVar11;
    if (lVar13 == -1) goto LAB_0e3bd6e0;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f7510d8 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e3bd6e0:
    puVar10 = &DAT_0f7510d8;
    if (iRam000000000f751138 != -0x2b3da790) goto LAB_0e3bd74d;
LAB_0e3bd70b:
    lVar13 = *(long *)(puVar10 + 0x68);
    if (lVar13 == 0) goto LAB_0e3bd74d;
    bVar19 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar17 = lVar13 + 9;
    if (bVar19) {
      lVar17 = *(long *)(lVar13 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar19) {
      uVar16 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0e404cd0(&puStack_318,param_1,lVar17,uVar16);
  }
  else {
    puVar10 = (undefined *)plVar11[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e3bd70b;
LAB_0e3bd74d:
    func_0x0e404cd0(&puStack_318,param_1,&UNK_0142729f,5);
  }
  if ((char)uStack_2e8 != '\0') {
    return;
  }
  func_0x0e405890(&uStack_468,&puStack_318,&UNK_012e883d,5,1);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f4b95f0;
  if (uStack_450 != (long *)0x0) {
    lVar13 = *uStack_450;
    uStack_450 = plVar11;
    (**(code **)(lVar13 + 8))();
    plVar11 = uStack_450;
  }
  uStack_450 = plVar11;
  uStack_4d8 = (undefined4)uStack_458;
  pppplStack_4d0 = (long ****)0x0;
  uStack_4c8 = (long *)((ulong)uStack_4c8 & 0xffffffff00000000);
  uStack_4c0 = (long *)0x1;
  uStack_4b8 = 0;
  uStack_4b0 = &UNK_0e409510;
  puStack_4a8 = &SUB_048b06d0;
  puStack_4a0 = &UNK_0e407e20;
  puStack_498 = &UNK_0e4095d0;
  puStack_490 = &UNK_0e409790;
  uStack_488 = 0;
  uStack_480 = 0;
  plStack_478 = (long *)0x0;
  func_0x048b05a0(pppplStack_460,&uStack_4d8);
  plVar11 = plStack_478;
  if (plStack_478 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_478 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_478 + 0x10))(plStack_478);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x0e405b50(&uStack_468);
  cStack_228 = (char)uStack_2e8;
  uStack_238 = uStack_2f8;
  uStack_234 = uStack_2f4;
  iStack_230 = (undefined4)uStack_2f0;
  uStack_22c = uStack_2f0._4_4_;
  uStack_248 = (undefined4)uStack_308;
  uStack_244 = uStack_308._4_4_;
  uStack_240 = uStack_300;
  uStack_23c = uStack_2fc;
  uStack_258 = puStack_318;
  uStack_250 = uStack_310;
  func_0x048b0bc0(&uStack_450);
  uStack_120 = 0xffffffffffffffff;
  uStack_118 = 0;
  uStack_110 = 0xff;
  puStack_128 = &UNK_0f4e3cf0;
  uStack_108 = 1;
  uStack_100 = 0;
  plStack_f8 = (long *)0x0;
  uStack_f0 = 0;
  func_0x0e3bee10(&uStack_218,&uStack_258,&puStack_128);
  func_0x0e405890(&uStack_468,&uStack_218,&UNK_011ca5ee,5,1);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f4b95f0;
  if (uStack_450 != (long *)0x0) {
    lVar13 = *uStack_450;
    uStack_450 = plVar11;
    (**(code **)(lVar13 + 8))();
    plVar11 = uStack_450;
  }
  uStack_450 = plVar11;
  uStack_4d8 = (undefined4)uStack_458;
  pppplStack_4d0 = (long ****)0x0;
  uStack_4c8 = (long *)((ulong)uStack_4c8 & 0xffffffff00000000);
  uStack_4c0 = (long *)0x1;
  uStack_4b8 = 0;
  uStack_4b0 = &UNK_0e409510;
  puStack_4a8 = &SUB_048b06d0;
  puStack_4a0 = &UNK_0e407e20;
  puStack_498 = &UNK_0e409ed0;
  puStack_490 = &UNK_0e40a0a0;
  uStack_488 = 0;
  uStack_480 = 0;
  plStack_478 = (long *)0x0;
  func_0x048b05a0(pppplStack_460,&uStack_4d8);
  plVar11 = plStack_478;
  if (plStack_478 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_478 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_478 + 0x10))(plStack_478);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x0e405b50(&uStack_468);
  cStack_268 = cStack_1e8;
  uStack_278 = uStack_1f8;
  uStack_274 = uStack_1f4;
  iStack_270 = iStack_1f0;
  uStack_26c = uStack_1ec;
  uStack_288 = uStack_208;
  uStack_284 = uStack_204;
  uStack_280 = uStack_200;
  uStack_27c = uStack_1fc;
  uStack_298 = uStack_218;
  uStack_294 = uStack_214;
  uStack_290 = uStack_210;
  uStack_28c = uStack_20c;
  func_0x048b0bc0(&uStack_450);
  uStack_160 = 0xffffffffffffffff;
  uStack_158 = 0;
  uStack_150 = 0xff;
  puStack_168 = &UNK_0f4e3cf0;
  uStack_148 = 1;
  uStack_140 = 0;
  plStack_138 = (long *)0x0;
  uStack_130 = 0;
  func_0x0e3bee10(&uStack_1d8,&uStack_298,&puStack_168);
  func_0x0e4052c0(&uStack_468,CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
  if (uStack_450._4_4_ == 2) {
    piVar14 = *(int **)(uStack_458[0xf] + 0x60);
    iVar8 = *piVar14;
    while (iVar8 != (int)uStack_450) {
      piVar14 = piVar14 + 0x16;
      iVar8 = *piVar14;
    }
    pppplVar4 = *(long *****)(piVar14 + 0xc);
    while (pppplVar4 != pppplStack_460) {
      piVar14 = *(int **)(piVar14 + 0xe);
      pppplVar4 = *(long *****)(piVar14 + 0xc);
    }
LAB_0e3bdb9f:
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else {
    if (uStack_450._4_4_ == 1) {
      piVar14 = *(int **)(uStack_458[0xf] + 0x48);
      iVar8 = *piVar14;
      while (iVar8 != (int)uStack_450) {
        piVar14 = piVar14 + 0x1a;
        iVar8 = *piVar14;
      }
      goto LAB_0e3bdb9f;
    }
    if (uStack_450._4_4_ == 0) {
      *(uint *)(uStack_458 + 3) = *(uint *)(uStack_458 + 3) | 0x40000;
    }
  }
  func_0x0e405890(&uStack_468,&uStack_1d8,&UNK_0129bcbc,10,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f012080;
  if (uStack_450 != (long *)0x0) {
    lVar13 = *uStack_450;
    uStack_450 = plVar11;
    (**(code **)(lVar13 + 8))();
    plVar11 = uStack_450;
  }
  uStack_450 = plVar11;
  uStack_4d8 = (undefined4)uStack_458;
  pppplStack_4d0 = (long ****)0x0;
  uStack_4c8 = (long *)((ulong)uStack_4c8 & 0xffffffff00000000);
  uStack_4c0 = (long *)0x1;
  uStack_4b8 = 0;
  uStack_4b0 = &UNK_05dd3ca0;
  puStack_4a8 = &SUB_048b06d0;
  puStack_4a0 = &UNK_05dd3990;
  puStack_498 = &UNK_0e40a280;
  puStack_490 = &UNK_0e40a3e0;
  uStack_488 = 0;
  uStack_480 = 0;
  plStack_478 = (long *)0x0;
  func_0x048b05a0(pppplStack_460,&uStack_4d8);
  plVar11 = plStack_478;
  if (plStack_478 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_478 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_478 + 0x10))(plStack_478);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x0e405b50(&uStack_468);
  cStack_328 = cStack_1a8;
  uStack_338 = uStack_1b8;
  uStack_334 = uStack_1b4;
  iStack_330 = iStack_1b0;
  uStack_32c = uStack_1ac;
  uStack_348 = uStack_1c8;
  uStack_344 = uStack_1c4;
  uStack_340 = uStack_1c0;
  uStack_33c = uStack_1bc;
  uStack_358 = uStack_1d8;
  uStack_354 = uStack_1d4;
  uStack_350 = uStack_1d0;
  uStack_34c = uStack_1cc;
  func_0x048b0bc0(&uStack_450);
  func_0x0e4052c0(&uStack_468,CONCAT44(uStack_354,uStack_358) + 0x18);
  if (uStack_450._4_4_ == 2) {
    piVar14 = *(int **)(uStack_458[0xf] + 0x60);
    iVar8 = *piVar14;
    while (iVar8 != (int)uStack_450) {
      piVar14 = piVar14 + 0x16;
      iVar8 = *piVar14;
    }
    pppplVar4 = *(long *****)(piVar14 + 0xc);
    while (pppplVar4 != pppplStack_460) {
      piVar14 = *(int **)(piVar14 + 0xe);
      pppplVar4 = *(long *****)(piVar14 + 0xc);
    }
LAB_0e3bddff:
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else {
    if (uStack_450._4_4_ == 1) {
      piVar14 = *(int **)(uStack_458[0xf] + 0x48);
      iVar8 = *piVar14;
      while (iVar8 != (int)uStack_450) {
        piVar14 = piVar14 + 0x1a;
        iVar8 = *piVar14;
      }
      goto LAB_0e3bddff;
    }
    if (uStack_450._4_4_ == 0) {
      *(uint *)(uStack_458 + 3) = *(uint *)(uStack_458 + 3) | 0x40000;
    }
  }
  func_0x0e405890(&uStack_468,&uStack_358,&UNK_011ff36c,8,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef46ce8;
  if (uStack_450 != (long *)0x0) {
    lVar13 = *uStack_450;
    uStack_450 = plVar11;
    (**(code **)(lVar13 + 8))();
    plVar11 = uStack_450;
  }
  uStack_450 = plVar11;
  uStack_4d8 = (undefined4)uStack_458;
  pppplStack_4d0 = (long ****)0x0;
  uStack_4c8 = (long *)((ulong)uStack_4c8 & 0xffffffff00000000);
  uStack_4c0 = (long *)0x1;
  uStack_4b8 = 0;
  uStack_4b0 = &UNK_0490ce30;
  puStack_4a8 = &SUB_048b06d0;
  puStack_4a0 = &SUB_0490cb20;
  puStack_498 = &UNK_0e40a5c0;
  puStack_490 = &UNK_0e40a720;
  uStack_488 = 0;
  uStack_480 = 0;
  plStack_478 = (long *)0x0;
  func_0x048b05a0(pppplStack_460,&uStack_4d8);
  plVar11 = plStack_478;
  if (plStack_478 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_478 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_478 + 0x10))(plStack_478);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x0e405b50(&uStack_468);
  uStack_2a8 = CONCAT71(uStack_2a8._1_7_,cStack_328);
  uStack_2b8 = uStack_338;
  uStack_2b4 = uStack_334;
  iStack_2b0 = iStack_330;
  uStack_2ac = uStack_32c;
  uStack_2c8 = (long *)CONCAT44(uStack_344,uStack_348);
  uStack_2c0 = uStack_340;
  uStack_2bc = uStack_33c;
  uStack_2d8 = (long ****)CONCAT44(uStack_354,uStack_358);
  uStack_2d0 = (long ****)CONCAT44(uStack_34c,uStack_350);
  func_0x048b0bc0(&uStack_450);
  func_0x0e4052c0(&uStack_468,(long)uStack_2d8 + 0x18);
  if (uStack_450._4_4_ == 2) {
    piVar14 = *(int **)(uStack_458[0xf] + 0x60);
    iVar8 = *piVar14;
    while (iVar8 != (int)uStack_450) {
      piVar14 = piVar14 + 0x16;
      iVar8 = *piVar14;
    }
    pppplVar4 = *(long *****)(piVar14 + 0xc);
    while (pppplVar4 != pppplStack_460) {
      piVar14 = *(int **)(piVar14 + 0xe);
      pppplVar4 = *(long *****)(piVar14 + 0xc);
    }
LAB_0e3be05f:
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else {
    if (uStack_450._4_4_ == 1) {
      piVar14 = *(int **)(uStack_458[0xf] + 0x48);
      iVar8 = *piVar14;
      while (iVar8 != (int)uStack_450) {
        piVar14 = piVar14 + 0x1a;
        iVar8 = *piVar14;
      }
      goto LAB_0e3be05f;
    }
    if (uStack_450._4_4_ == 0) {
      *(uint *)(uStack_458 + 3) = *(uint *)(uStack_458 + 3) | 0x40000;
    }
  }
  func_0x0e405890(&uStack_468,&uStack_2d8,&UNK_0143ef83,10,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef46ef8;
  if (uStack_450 != (long *)0x0) {
    lVar13 = *uStack_450;
    uStack_450 = plVar11;
    (**(code **)(lVar13 + 8))();
    plVar11 = uStack_450;
  }
  uStack_450 = plVar11;
  uStack_4d8 = (undefined4)uStack_458;
  pppplStack_4d0 = (long ****)0x0;
  uStack_4c8 = (long *)((ulong)uStack_4c8 & 0xffffffff00000000);
  uStack_4c0 = (long *)0x1;
  uStack_4b8 = 0;
  uStack_4b0 = &UNK_04906f70;
  puStack_4a8 = &SUB_048b06d0;
  puStack_4a0 = &SUB_04906c50;
  puStack_498 = &UNK_0e40a900;
  puStack_490 = &UNK_0e40aa60;
  uStack_488 = 0;
  uStack_480 = 0;
  plStack_478 = (long *)0x0;
  func_0x048b05a0(pppplStack_460,&uStack_4d8);
  plVar11 = plStack_478;
  if (plStack_478 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_478 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_478 + 0x10))(plStack_478);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x0e405b50(&uStack_468);
  uStack_368 = CONCAT71(uStack_368._1_7_,(undefined1)uStack_2a8);
  uStack_378 = uStack_2b8;
  uStack_374 = uStack_2b4;
  uStack_370 = CONCAT44(uStack_2ac,iStack_2b0);
  pppplStack_388 = (long ****)uStack_2c8;
  uStack_380 = uStack_2c0;
  uStack_37c = uStack_2bc;
  uStack_398 = (undefined *)uStack_2d8;
  pppplStack_390 = uStack_2d0;
  func_0x048b0bc0(&uStack_450);
  func_0x0e4052c0(&uStack_468,(long)uStack_398 + 0x18);
  if (uStack_450._4_4_ == 2) {
    piVar14 = *(int **)(uStack_458[0xf] + 0x60);
    iVar8 = *piVar14;
    while (iVar8 != (int)uStack_450) {
      piVar14 = piVar14 + 0x16;
      iVar8 = *piVar14;
    }
    pppplVar4 = *(long *****)(piVar14 + 0xc);
    while (pppplVar4 != pppplStack_460) {
      piVar14 = *(int **)(piVar14 + 0xe);
      pppplVar4 = *(long *****)(piVar14 + 0xc);
    }
LAB_0e3be2bf:
    *(byte *)((long)piVar14 + 0x12) = *(byte *)((long)piVar14 + 0x12) | 4;
  }
  else {
    if (uStack_450._4_4_ == 1) {
      piVar14 = *(int **)(uStack_458[0xf] + 0x48);
      iVar8 = *piVar14;
      while (iVar8 != (int)uStack_450) {
        piVar14 = piVar14 + 0x1a;
        iVar8 = *piVar14;
      }
      goto LAB_0e3be2bf;
    }
    if (uStack_450._4_4_ == 0) {
      *(uint *)(uStack_458 + 3) = *(uint *)(uStack_458 + 3) | 0x40000;
    }
  }
  func_0x0e405890(&uStack_468,&uStack_398,&UNK_0123ca5a,6,0x10);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0ef46ce8;
  if (uStack_450 != (long *)0x0) {
    lVar13 = *uStack_450;
    uStack_450 = puVar12;
    (**(code **)(lVar13 + 8))();
    puVar12 = uStack_450;
  }
  uStack_450 = puVar12;
  uStack_4d8 = (undefined4)uStack_458;
  pppplStack_4d0 = (long ****)0x0;
  uStack_4c8 = (long *)((ulong)uStack_4c8 & 0xffffffff00000000);
  uStack_4c0 = (long *)0x1;
  uStack_4b8 = 0;
  uStack_4b0 = &UNK_0490ce30;
  puStack_4a8 = &SUB_048b06d0;
  puStack_4a0 = &SUB_0490cb20;
  puStack_498 = &UNK_0e40ac40;
  puStack_490 = &UNK_0e40ada0;
  uStack_488 = 0;
  uStack_480 = 0;
  plStack_478 = (long *)0x0;
  func_0x048b05a0(pppplStack_460,&uStack_4d8);
  plVar11 = plStack_478;
  if (plStack_478 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_478 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_478 + 0x10))(plStack_478);
      func_0x0412c2d0(plVar11);
    }
  }
  func_0x0e405b50(&uStack_468);
  puStack_4a8 = (undefined1 *)CONCAT71(puStack_4a8._1_7_,(undefined1)uStack_368);
  uStack_4b8 = CONCAT44(uStack_374,uStack_378);
  uStack_4b0 = (undefined *)uStack_370;
  uStack_4c8 = (long *)pppplStack_388;
  uStack_4c0 = (long *)CONCAT44(uStack_37c,uStack_380);
  uStack_4d8 = (undefined4)uStack_398;
  uStack_4d4 = uStack_398._4_4_;
  pppplStack_4d0 = pppplStack_390;
  func_0x048b0bc0(&uStack_450);
  if ((int)uStack_4b0 == 4) {
    lVar13 = func_0x0e409d50(&uStack_4d8);
    lVar13 = *(long *)(lVar13 + 0x48);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  else {
    if ((int)uStack_4b0 != 1) goto LAB_0e3be4da;
    lVar13 = func_0x0e409c00(&uStack_4d8);
    lVar13 = *(long *)(lVar13 + 0x58);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
  }
  puVar12[1] = 0xffffffffffffffff;
  puVar12[2] = 0;
  *(undefined1 *)(puVar12 + 3) = 0xff;
  *puVar12 = &UNK_0f0edc68;
  uVar5 = CONCAT44(_UNK_014e4bbc,_UNK_014e4bb8);
  puVar12[4] = CONCAT44(_UNK_014e4bb4,_DAT_014e4bb0);
  puVar12[5] = uVar5;
  puVar12[6] = 0;
  puVar12[7] = 0;
  plVar11 = *(long **)(lVar13 + 8);
  *(undefined8 **)(lVar13 + 8) = puVar12;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x28))();
  }
LAB_0e3be4da:
  plVar11 = plStack_138;
  puStack_168 = &UNK_0f4e3cf0;
  if (plStack_138 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_138 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      func_0x0412c2d0(plVar11);
    }
  }
  plVar11 = plStack_f8;
  puStack_128 = &UNK_0f4e3cf0;
  if (plStack_f8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_f8 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      func_0x0412c2d0(plVar11);
    }
  }
  return;
}


