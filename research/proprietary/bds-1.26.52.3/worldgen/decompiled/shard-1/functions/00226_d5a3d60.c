/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd6a3d60 (ELF vaddr 0xd5a3d60)
 * Label: caller-of-callee
 * Body:  [[0d6a3d60, 0d6a3d60]]
 * Ghidra: _INIT_1786
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1786(void)

{
  long *plVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined7 *puVar8;
  ulong uVar9;
  int *piVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  bool bVar16;
  uint auStack_410 [2];
  undefined8 uStack_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 *puStack_3e0;
  undefined1 *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined4 uStack_3c0;
  undefined8 uStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  code *pcStack_388;
  byte bStack_380;
  undefined7 uStack_37f;
  undefined1 uStack_378;
  undefined4 uStack_377;
  undefined1 uStack_373;
  undefined2 uStack_372;
  undefined7 *puStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined4 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined2 uStack_300;
  undefined1 uStack_2fc;
  undefined1 uStack_2f8;
  undefined1 uStack_2f4;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  uint uStack_2ac;
  undefined4 uStack_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
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
  undefined8 uStack_270;
  undefined4 uStack_268;
  uint uStack_264;
  uint uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  uint uStack_22c;
  undefined4 uStack_228;
  uint uStack_224;
  uint uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  undefined4 uStack_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  undefined4 uStack_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
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
  uint uStack_16c;
  undefined4 uStack_168;
  uint uStack_164;
  uint uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined4 uStack_128;
  uint uStack_124;
  uint uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  long lStack_d8;
  long *plStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  plRam000000000f721a68 = (long *)0x0;
  uRam000000000f721a70 = 0;
  uRam000000000f721a58 = 0;
  lRam000000000f721a60 = 0;
  lRam000000000f721a48 = 0;
  lRam000000000f721a50 = 0;
  uRam000000000f721a78 = 0x3f600000;
  func_0x048af640(0xf721a48,8);
  uRam000000000f721a90 = 0;
  uRam000000000f721a92 = 0;
  uRam000000000f721a80 = 0;
  uRam000000000f721a88 = 0;
  uRam000000000f721a8a = 0;
  puRam000000000f721a30 = &UNK_0f534768;
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &UNK_0ef44a60;
  puRam000000000f721a38 = puVar5 + 3;
  *(undefined1 *)(puVar5 + 3) = 1;
  puRam000000000f721a30 = &UNK_0ef471f0;
  puRam000000000f721a40 = puVar5;
  if ((cRam000000000f721e00 == '\0') && (iVar4 = func_0x04108328(0xf721e00), iVar4 != 0)) {
    func_0x0d69ec20();
    func_0x0eee2f40(&UNK_048ae800,0xf721d80,0xf53dab8);
    func_0x0410844d(0xf721e00);
  }
  plVar7 = (long *)(lRam000000000f721a48 +
                   (ulong)((int)((ulong)(lRam000000000f721a50 - lRam000000000f721a48) >> 3) - 1U &
                          *(uint *)(lRam000000000f721d80 + 4)) * 8);
  do {
    lVar6 = *plVar7;
    if (lVar6 == -1) goto code_r0x0d6a3e93;
    plVar7 = (long *)(lRam000000000f721a60 + lVar6 * 0x18);
  } while (*(uint *)(lRam000000000f721a60 + 8 + lVar6 * 0x18) != *(uint *)(lRam000000000f721d80 + 4)
          );
  if (plVar7 == plRam000000000f721a68) {
code_r0x0d6a3e93:
    lVar6 = 0xf721d80;
    if (iRam000000000f721de0 != -0x2b3da790) goto code_r0x0d6a3eff;
code_r0x0d6a3ec1:
    lVar6 = *(long *)(lVar6 + 0x68);
    if (lVar6 == 0) goto code_r0x0d6a3eff;
    bVar16 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar12 = lVar6 + 9;
    if (bVar16) {
      lVar12 = *(long *)(lVar6 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar16) {
      uVar13 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x0d69e580(&uStack_298,lVar12,uVar13);
  }
  else {
    lVar6 = plVar7[2];
    if (*(int *)(lVar6 + 0x60) == -0x2b3da790) goto code_r0x0d6a3ec1;
code_r0x0d6a3eff:
    func_0x0d69e580(&uStack_298,&UNK_01440310,0xf);
  }
  if ((char)uStack_268 == '\0') {
    func_0x0d69f360(&uStack_3a8,CONCAT44(uStack_294,uStack_298) + 0x18);
    if (uStack_390._4_4_ == 2) {
      piVar10 = *(int **)(uStack_398[0xf] + 0x60);
      iVar4 = *piVar10;
      while (iVar4 != (int)uStack_390) {
        piVar10 = piVar10 + 0x16;
        iVar4 = *piVar10;
      }
      plVar7 = *(long **)(piVar10 + 0xc);
      while (plVar7 != plStack_3a0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        plVar7 = *(long **)(piVar10 + 0xc);
      }
code_r0x0d6a3f9f:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_390._4_4_ == 1) {
        piVar10 = *(int **)(uStack_398[0xf] + 0x48);
        iVar4 = *piVar10;
        while (iVar4 != (int)uStack_390) {
          piVar10 = piVar10 + 0x1a;
          iVar4 = *piVar10;
        }
        goto code_r0x0d6a3f9f;
      }
      if (uStack_390._4_4_ == 0) {
        *(uint *)(uStack_398 + 3) = *(uint *)(uStack_398 + 3) | 0x40000;
      }
    }
    func_0x0d69f920(&uStack_3a8,&uStack_298,&UNK_013f1d79,5);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar7 = (long)&UNK_0f0c2800;
    if (uStack_390 != (long *)0x0) {
      lVar6 = *uStack_390;
      uStack_390 = plVar7;
      (**(code **)(lVar6 + 8))();
      plVar7 = uStack_390;
    }
    uStack_390 = plVar7;
    auStack_410[0] = (uint)uStack_398;
    uStack_408 = 0;
    uStack_400 = 0;
    uStack_3f8 = 1;
    uStack_3f0 = 0;
    uStack_3e8 = &UNK_072a5d20;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &UNK_0651ed40;
    puStack_3d0 = &UNK_0d69fed0;
    puStack_3c8 = &UNK_0d6a0030;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    plStack_3b0 = (long *)0x0;
    func_0x048b05a0(plStack_3a0,auStack_410);
    plVar7 = plStack_3b0;
    if (plStack_3b0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b0 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x0d69fbd0(&uStack_3a8);
    uStack_1e8 = CONCAT31(uStack_1e8._1_3_,(char)uStack_268);
    uStack_1f8 = uStack_278;
    uStack_1f4 = uStack_274;
    uStack_1f0 = (undefined4)uStack_270;
    uStack_1ec = uStack_270._4_4_;
    uStack_208 = uStack_288;
    uStack_204 = uStack_284;
    uStack_200 = uStack_280;
    uStack_1fc = uStack_27c;
    uStack_218 = CONCAT44(uStack_294,uStack_298);
    uStack_210 = (long *)CONCAT44(uStack_28c,uStack_290);
    func_0x048b0bc0(&uStack_390);
    func_0x0d69f360(&uStack_3a8,uStack_218 + 0x18);
    if (uStack_390._4_4_ == 2) {
      piVar10 = *(int **)(uStack_398[0xf] + 0x60);
      iVar4 = *piVar10;
      while (iVar4 != (int)uStack_390) {
        piVar10 = piVar10 + 0x16;
        iVar4 = *piVar10;
      }
      plVar7 = *(long **)(piVar10 + 0xc);
      while (plVar7 != plStack_3a0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        plVar7 = *(long **)(piVar10 + 0xc);
      }
code_r0x0d6a41df:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_390._4_4_ == 1) {
        piVar10 = *(int **)(uStack_398[0xf] + 0x48);
        iVar4 = *piVar10;
        while (iVar4 != (int)uStack_390) {
          piVar10 = piVar10 + 0x1a;
          iVar4 = *piVar10;
        }
        goto code_r0x0d6a41df;
      }
      if (uStack_390._4_4_ == 0) {
        *(uint *)(uStack_398 + 3) = *(uint *)(uStack_398 + 3) | 0x40000;
      }
    }
    func_0x0d69f920(&uStack_3a8,&uStack_218,&UNK_014a6bd0,5);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar7 = (long)&UNK_0f0c2800;
    if (uStack_390 != (long *)0x0) {
      lVar6 = *uStack_390;
      uStack_390 = plVar7;
      (**(code **)(lVar6 + 8))();
      plVar7 = uStack_390;
    }
    uStack_390 = plVar7;
    auStack_410[0] = (uint)uStack_398;
    uStack_408 = 0;
    uStack_400 = 0;
    uStack_3f8 = 1;
    uStack_3f0 = 0;
    uStack_3e8 = &UNK_072a5d20;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &UNK_0651ed40;
    puStack_3d0 = &UNK_0d6a0200;
    puStack_3c8 = &UNK_0d6a0360;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    plStack_3b0 = (long *)0x0;
    func_0x048b05a0(plStack_3a0,auStack_410);
    plVar7 = plStack_3b0;
    if (plStack_3b0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b0 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x0d69fbd0(&uStack_3a8);
    uStack_1a8 = CONCAT31(uStack_1a8._1_3_,(undefined1)uStack_1e8);
    uStack_1b8 = uStack_1f8;
    uStack_1b4 = uStack_1f4;
    uStack_1b0 = uStack_1f0;
    uStack_1ac = uStack_1ec;
    uStack_1c8 = uStack_208;
    uStack_1c4 = uStack_204;
    uStack_1c0 = uStack_200;
    uStack_1bc = uStack_1fc;
    lStack_1d8 = uStack_218;
    plStack_1d0 = uStack_210;
    func_0x048b0bc0(&uStack_390);
    func_0x0d69f360(&uStack_3a8,lStack_1d8 + 0x18);
    if (uStack_390._4_4_ == 2) {
      piVar10 = *(int **)(uStack_398[0xf] + 0x60);
      iVar4 = *piVar10;
      while (iVar4 != (int)uStack_390) {
        piVar10 = piVar10 + 0x16;
        iVar4 = *piVar10;
      }
      plVar7 = *(long **)(piVar10 + 0xc);
      while (plVar7 != plStack_3a0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        plVar7 = *(long **)(piVar10 + 0xc);
      }
code_r0x0d6a43ff:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_390._4_4_ == 1) {
        piVar10 = *(int **)(uStack_398[0xf] + 0x48);
        iVar4 = *piVar10;
        while (iVar4 != (int)uStack_390) {
          piVar10 = piVar10 + 0x1a;
          iVar4 = *piVar10;
        }
        goto code_r0x0d6a43ff;
      }
      if (uStack_390._4_4_ == 0) {
        *(uint *)(uStack_398 + 3) = *(uint *)(uStack_398 + 3) | 0x40000;
      }
    }
    func_0x0d69f920(&uStack_3a8,&lStack_1d8,&UNK_01283b83,5);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar7 = (long)&UNK_0f0c2800;
    if (uStack_390 != (long *)0x0) {
      lVar6 = *uStack_390;
      uStack_390 = plVar7;
      (**(code **)(lVar6 + 8))();
      plVar7 = uStack_390;
    }
    uStack_390 = plVar7;
    auStack_410[0] = (uint)uStack_398;
    uStack_408 = 0;
    uStack_400 = 0;
    uStack_3f8 = 1;
    uStack_3f0 = 0;
    uStack_3e8 = &UNK_072a5d20;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &UNK_0651ed40;
    puStack_3d0 = &UNK_0d6a0540;
    puStack_3c8 = &UNK_0d6a06a0;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    plStack_3b0 = (long *)0x0;
    func_0x048b05a0(plStack_3a0,auStack_410);
    plVar7 = plStack_3b0;
    if (plStack_3b0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b0 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x0d69fbd0(&uStack_3a8);
    uStack_228 = CONCAT31(uStack_228._1_3_,(undefined1)uStack_1a8);
    uStack_238 = uStack_1b8;
    uStack_234 = uStack_1b4;
    uStack_230 = uStack_1b0;
    uStack_22c = uStack_1ac;
    uStack_248 = uStack_1c8;
    uStack_244 = uStack_1c4;
    uStack_240 = uStack_1c0;
    uStack_23c = uStack_1bc;
    uStack_258 = lStack_1d8;
    uStack_250 = plStack_1d0;
    func_0x048b0bc0(&uStack_390);
    func_0x0d69f360(&uStack_3a8,uStack_258 + 0x18);
    if (uStack_390._4_4_ == 2) {
      piVar10 = *(int **)(uStack_398[0xf] + 0x60);
      iVar4 = *piVar10;
      while (iVar4 != (int)uStack_390) {
        piVar10 = piVar10 + 0x16;
        iVar4 = *piVar10;
      }
      plVar7 = *(long **)(piVar10 + 0xc);
      while (plVar7 != plStack_3a0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        plVar7 = *(long **)(piVar10 + 0xc);
      }
code_r0x0d6a461f:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_390._4_4_ == 1) {
        piVar10 = *(int **)(uStack_398[0xf] + 0x48);
        iVar4 = *piVar10;
        while (iVar4 != (int)uStack_390) {
          piVar10 = piVar10 + 0x1a;
          iVar4 = *piVar10;
        }
        goto code_r0x0d6a461f;
      }
      if (uStack_390._4_4_ == 0) {
        *(uint *)(uStack_398 + 3) = *(uint *)(uStack_398 + 3) | 0x40000;
      }
    }
    func_0x0d69f920(&uStack_3a8,&uStack_258,&UNK_01200bb3,10);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar7 = (long)&UNK_0ef44b00;
    if (uStack_390 != (long *)0x0) {
      lVar6 = *uStack_390;
      uStack_390 = plVar7;
      (**(code **)(lVar6 + 8))();
      plVar7 = uStack_390;
    }
    uStack_390 = plVar7;
    auStack_410[0] = (uint)uStack_398;
    uStack_408 = 0;
    uStack_400 = 0;
    uStack_3f8 = 1;
    uStack_3f0 = 0;
    uStack_3e8 = &UNK_048b3f30;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &SUB_048b2190;
    puStack_3d0 = &UNK_0d6a0880;
    puStack_3c8 = &UNK_0d6a0a50;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    plStack_3b0 = (long *)0x0;
    func_0x048b05a0(plStack_3a0,auStack_410);
    plVar7 = plStack_3b0;
    if (plStack_3b0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b0 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x0d69fbd0(&uStack_3a8);
    uStack_2a8 = CONCAT31(uStack_2a8._1_3_,(undefined1)uStack_228);
    uStack_2b8 = uStack_238;
    uStack_2b4 = uStack_234;
    uStack_2b0 = uStack_230;
    uStack_2ac = uStack_22c;
    uStack_2c8 = uStack_248;
    uStack_2c4 = uStack_244;
    uStack_2c0 = uStack_240;
    uStack_2bc = uStack_23c;
    uStack_2d8 = (long *)uStack_258;
    uStack_2d0 = uStack_250;
    func_0x048b0bc0(&uStack_390);
    func_0x0d69f360(&uStack_3a8,(long)uStack_2d8 + 0x18);
    if (uStack_390._4_4_ == 2) {
      piVar10 = *(int **)(uStack_398[0xf] + 0x60);
      iVar4 = *piVar10;
      while (iVar4 != (int)uStack_390) {
        piVar10 = piVar10 + 0x16;
        iVar4 = *piVar10;
      }
      plVar7 = *(long **)(piVar10 + 0xc);
      while (plVar7 != plStack_3a0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        plVar7 = *(long **)(piVar10 + 0xc);
      }
code_r0x0d6a485f:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_390._4_4_ == 1) {
        piVar10 = *(int **)(uStack_398[0xf] + 0x48);
        iVar4 = *piVar10;
        while (iVar4 != (int)uStack_390) {
          piVar10 = piVar10 + 0x1a;
          iVar4 = *piVar10;
        }
        goto code_r0x0d6a485f;
      }
      if (uStack_390._4_4_ == 0) {
        *(uint *)(uStack_398 + 3) = *(uint *)(uStack_398 + 3) | 0x40000;
      }
    }
    func_0x0d69f920(&uStack_3a8,&uStack_2d8,&UNK_01283b89,9);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar7 = (long)&UNK_0ef44b00;
    if (uStack_390 != (long *)0x0) {
      lVar6 = *uStack_390;
      uStack_390 = plVar7;
      (**(code **)(lVar6 + 8))();
      plVar7 = uStack_390;
    }
    uStack_390 = plVar7;
    auStack_410[0] = (uint)uStack_398;
    uStack_408 = 0;
    uStack_400 = 0;
    uStack_3f8 = 1;
    uStack_3f0 = 0;
    uStack_3e8 = &UNK_048b3f30;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &SUB_048b2190;
    puStack_3d0 = &UNK_0d6a0c30;
    puStack_3c8 = &UNK_0d6a0e00;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    plStack_3b0 = (long *)0x0;
    func_0x048b05a0(plStack_3a0,auStack_410);
    plVar7 = plStack_3b0;
    if (plStack_3b0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b0 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x0d69fbd0(&uStack_3a8);
    func_0x048b0bc0(&uStack_390);
  }
  if ((cRam000000000f721cc0 == '\0') && (iVar4 = func_0x04108328(0xf721cc0), iVar4 != 0)) {
    func_0x0d6951b0();
    func_0x0eee2f40(&UNK_048ae800,0xf721c40,0xf53dab8);
    func_0x0410844d(0xf721cc0);
  }
  plVar7 = (long *)(lRam000000000f721a48 +
                   (ulong)((int)((ulong)(lRam000000000f721a50 - lRam000000000f721a48) >> 3) - 1U &
                          *(uint *)(lRam000000000f721c40 + 4)) * 8);
  do {
    lVar6 = *plVar7;
    if (lVar6 == -1) goto code_r0x0d6a49e3;
    plVar7 = (long *)(lRam000000000f721a60 + lVar6 * 0x18);
  } while (*(uint *)(lRam000000000f721a60 + 8 + lVar6 * 0x18) != *(uint *)(lRam000000000f721c40 + 4)
          );
  if (plVar7 == plRam000000000f721a68) {
code_r0x0d6a49e3:
    lVar6 = 0xf721c40;
    if (iRam000000000f721ca0 != -0x2b3da790) goto code_r0x0d6a4a49;
code_r0x0d6a4a11:
    lVar6 = *(long *)(lVar6 + 0x68);
    if (lVar6 == 0) goto code_r0x0d6a4a49;
    bVar16 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar12 = lVar6 + 9;
    if (bVar16) {
      lVar12 = *(long *)(lVar6 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar16) {
      uVar13 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x0d6a0fe0(auStack_410,lVar12,uVar13);
  }
  else {
    lVar6 = plVar7[2];
    if (*(int *)(lVar6 + 0x60) == -0x2b3da790) goto code_r0x0d6a4a11;
code_r0x0d6a4a49:
    func_0x0d6a0fe0(auStack_410,&UNK_0129d1c0,0x16);
  }
  if ((char)puStack_3e0 == '\0') {
    uStack_368._4_4_ = (uint)(uStack_368 >> 0x20);
    uStack_398._4_4_ = (uint)((ulong)uStack_398 >> 0x20);
    uStack_3a8._4_4_ = (undefined4)((ulong)uStack_3a8 >> 0x20);
    uStack_3e8 = (undefined *)0x1e1bc4d500000004;
    if ((cRam000000000f721c28 == '\0') && (iVar4 = func_0x04108328(0xf721c28), iVar4 != 0)) {
      func_0x0d695070();
      func_0x0410844d(0xf721c28);
    }
    uStack_3a8 = (long *)CONCAT44(uStack_3a8._4_4_,uStack_3e8._4_4_);
    plStack_3a0 = (long *)0x0;
    uStack_398 = (long *)((ulong)uStack_398._4_4_ << 0x20);
    uStack_390 = (long *)0x1;
    pcStack_388 = FUN_048aead0;
    bStack_380 = 0x30;
    uStack_37f = 0xd6a1b;
    uStack_378 = 0xf0;
    uStack_377 = 0xd6a1b;
    uStack_373 = 0;
    uStack_372 = 0;
    puStack_370 = (undefined7 *)0x0;
    uStack_368 = (ulong)uStack_368._4_4_ << 0x20;
    uStack_360 = 0;
    uStack_358 = 0;
    func_0x049057f0(&uStack_408,&uStack_3a8);
    func_0x048aea50(&uStack_3a8);
    uStack_288 = (int)uStack_3f8;
    uStack_284 = uStack_3f8._4_4_;
    uStack_280 = (int)uStack_3f0;
    uStack_27c = uStack_3f0._4_4_;
    uStack_298 = (undefined4)uStack_408;
    uStack_294 = uStack_408._4_4_;
    uStack_290 = uStack_400;
    uStack_28c = uStack_3fc;
    puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar5 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar5 = &UNK_0f47dbe8;
    if ((DAT_0f551bc8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f551bc8), iVar4 != 0)) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    uStack_3a8 = (long *)CONCAT44(uStack_3a8._4_4_,_DAT_0f551bb4);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&UNK_0ef46c48;
    plStack_3a0 = plVar7 + 3;
    plVar7[3] = (long)puVar5;
    plVar7[4] = 0;
    *(undefined1 *)(plVar7 + 5) = 0xff;
    uStack_2d8 = (long *)0x0;
    uStack_2d0 = (long *)0x0;
    uStack_398 = plVar7;
    func_0x048afd20(&uStack_298,&uStack_3a8);
    plVar7 = uStack_398;
    if (uStack_398 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_398 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*uStack_398 + 0x10))(uStack_398);
        func_0x0412c2d0(plVar7);
      }
    }
    plVar7 = uStack_2d0;
    if (uStack_2d0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_2d0 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*uStack_2d0 + 0x10))(uStack_2d0);
        func_0x0412c2d0(plVar7);
      }
    }
    if ((cRam000000000f721c28 == '\0') && (iVar4 = func_0x04108328(0xf721c28), iVar4 != 0)) {
      func_0x0d695070();
      func_0x0410844d(0xf721c28);
    }
    if (uStack_3f0._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(uStack_3f8 + 0x78) + 0x60);
      iVar4 = *piVar10;
      while (iVar4 != (int)uStack_3f0) {
        piVar10 = piVar10 + 0x16;
        iVar4 = *piVar10;
      }
      lVar6 = *(long *)(piVar10 + 0xc);
      while (lVar6 != CONCAT44(uStack_3fc,uStack_400)) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar6 = *(long *)(piVar10 + 0xc);
      }
code_r0x0d6a4caf:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 2;
    }
    else {
      if (uStack_3f0._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(uStack_3f8 + 0x78) + 0x48);
        iVar4 = *piVar10;
        while (iVar4 != (int)uStack_3f0) {
          piVar10 = piVar10 + 0x1a;
          iVar4 = *piVar10;
        }
        goto code_r0x0d6a4caf;
      }
      if (uStack_3f0._4_4_ == 0) {
        *(uint *)(uStack_3f8 + 0x18) = *(uint *)(uStack_3f8 + 0x18) | 0x20000;
      }
    }
    if ((cRam000000000f721c28 == '\0') && (iVar4 = func_0x04108328(0xf721c28), iVar4 != 0)) {
      func_0x0d695070();
      func_0x0410844d(0xf721c28);
    }
    uStack_3a8 = (long *)CONCAT44(uStack_3a8._4_4_,0xbf75c8f8);
    plStack_3a0 = (long *)0x0;
    uStack_398 = (long *)CONCAT44(uStack_398._4_4_,1);
    uStack_390 = (long *)0x0;
    pcStack_388 = (code *)&UNK_0d69eb60;
    bStack_380 = 0xd0;
    uStack_37f = 0x48b06;
    uStack_378 = 0xd0;
    uStack_377 = 0xd6a22;
    uStack_373 = 0;
    uStack_372 = 0;
    puStack_370 = (undefined7 *)0x0;
    uStack_368 = uStack_368 & 0xffffffff00000000;
    uStack_360 = 0;
    uStack_358 = 0;
    func_0x049057f0(&uStack_408,&uStack_3a8);
    func_0x048aea50(&uStack_3a8);
    uStack_288 = (int)uStack_3f8;
    uStack_284 = uStack_3f8._4_4_;
    uStack_280 = (int)uStack_3f0;
    uStack_27c = uStack_3f0._4_4_;
    uStack_298 = (undefined4)uStack_408;
    uStack_294 = uStack_408._4_4_;
    uStack_290 = uStack_400;
    uStack_28c = uStack_3fc;
    puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar5 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar5 = &UNK_0f47dbe8;
    if ((DAT_0f551cb0 == '\0') && (iVar4 = func_0x04108328(&DAT_0f551cb0), iVar4 != 0)) {
      func_0x04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    uStack_3a8 = (long *)CONCAT44(uStack_3a8._4_4_,_DAT_0f551c9c);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&UNK_0ef46c98;
    plStack_3a0 = plVar7 + 3;
    plVar7[3] = (long)puVar5;
    *(undefined1 *)(plVar7 + 4) = 0xff;
    uStack_2d8 = (long *)0x0;
    uStack_2d0 = (long *)0x0;
    uStack_398 = plVar7;
    func_0x048afd20(&uStack_298,&uStack_3a8);
    plVar7 = uStack_398;
    if (uStack_398 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_398 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*uStack_398 + 0x10))(uStack_398);
        func_0x0412c2d0(plVar7);
      }
    }
    plVar7 = uStack_2d0;
    if (uStack_2d0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_2d0 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*uStack_2d0 + 0x10))(uStack_2d0);
        func_0x0412c2d0(plVar7);
      }
    }
  }
  if ((cRam000000000f721b20 == '\0') && (iVar4 = func_0x04108328(0xf721b20), iVar4 != 0)) {
    func_0x0d68e3a0();
    func_0x0eee2f40(&UNK_048ae800,0xf721aa0,0xf53dab8);
    func_0x0410844d(0xf721b20);
  }
  plVar7 = (long *)(lRam000000000f721a48 +
                   (ulong)((int)((ulong)(lRam000000000f721a50 - lRam000000000f721a48) >> 3) - 1U &
                          *(uint *)(lRam000000000f721aa0 + 4)) * 8);
  do {
    lVar6 = *plVar7;
    if (lVar6 == -1) goto code_r0x0d6a4ed3;
    plVar7 = (long *)(lRam000000000f721a60 + lVar6 * 0x18);
  } while (*(uint *)(lRam000000000f721a60 + 8 + lVar6 * 0x18) != *(uint *)(lRam000000000f721aa0 + 4)
          );
  if (plVar7 == plRam000000000f721a68) {
code_r0x0d6a4ed3:
    lVar6 = 0xf721aa0;
    if (iRam000000000f721b00 != -0x2b3da790) goto code_r0x0d6a4f2d;
code_r0x0d6a4f01:
    lVar6 = *(long *)(lVar6 + 0x68);
    if (lVar6 == 0) goto code_r0x0d6a4f2d;
    bVar16 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar12 = lVar6 + 9;
    if (bVar16) {
      lVar12 = *(long *)(lVar6 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar16) {
      uVar13 = *(ulong *)(lVar6 + 0x10);
    }
  }
  else {
    lVar6 = plVar7[2];
    if (*(int *)(lVar6 + 0x60) == -0x2b3da790) goto code_r0x0d6a4f01;
code_r0x0d6a4f2d:
    lVar12 = 0;
    uVar13 = 0;
  }
  func_0x0d68e7e0(&uStack_298,lVar12,uVar13);
  uStack_264 = uStack_264 & 0xffffff00;
  uStack_260 = uStack_260 & 0xffffff00;
  if ((char)uStack_268 == '\0') {
    func_0x0d691f10(&uStack_3a8,&UNK_01394f0f,0xf);
    bVar16 = (bStack_380 & 1) == 0;
    puVar8 = puStack_370;
    if (bVar16) {
      puVar8 = &uStack_37f;
    }
    uVar13 = (ulong)(bStack_380 >> 1);
    if (!bVar16) {
      uVar13 = CONCAT26(uStack_372,CONCAT15(uStack_373,CONCAT41(uStack_377,uStack_378)));
    }
    if (uVar13 == 0) {
      uVar11 = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar13 & 3);
      if (uVar13 < 4) {
        uVar11 = 0x811c9dc5;
        uVar14 = 0;
      }
      else {
        uVar11 = 0x811c9dc5;
        uVar14 = 0;
        do {
          uVar11 = ((int)*(char *)((long)puVar8 + uVar14 + 3) ^
                   ((int)*(char *)((long)puVar8 + uVar14 + 2) ^
                   ((int)*(char *)((long)puVar8 + uVar14 + 1) ^
                   ((int)*(char *)((long)puVar8 + uVar14) ^ uVar11) * 0x1000193) * 0x1000193) *
                   0x1000193) * 0x1000193;
          uVar14 = uVar14 + 4;
        } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
      }
      if (uVar9 != 0) {
        uVar13 = 0;
        do {
          uVar11 = ((int)*(char *)((long)puVar8 + uVar13 + uVar14) ^ uVar11) * 0x1000193;
          uVar13 = uVar13 + 1;
        } while (uVar9 != uVar13);
      }
    }
    uStack_270 = CONCAT44(uVar11,2);
    if ((cRam000000000f721b40 == '\0') && (iVar4 = func_0x04108328(0xf721b40), iVar4 != 0)) {
      func_0x0d68e4b0();
      func_0x0410844d(0xf721b40);
    }
    auStack_410[0] = uStack_270._4_4_;
    uStack_408 = 0;
    uStack_400 = 3;
    uStack_3f8 = 1;
    uStack_3f0 = 0;
    uStack_3e8 = &UNK_0d692560;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &UNK_0d68e2e0;
    puStack_3d0 = &UNK_0d692620;
    puStack_3c8 = &UNK_0d692630;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    plStack_3b0 = (long *)0x0;
    func_0x048b05a0(&uStack_290,auStack_410);
    plVar7 = plStack_3b0;
    if (plStack_3b0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b0 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
        func_0x0412c2d0(plVar7);
      }
    }
    uStack_2c8 = uStack_280;
    uStack_2c4 = uStack_27c;
    uStack_2c0 = uStack_278;
    uStack_2bc = uStack_274;
    uStack_2d8 = (long *)CONCAT44(uStack_28c,uStack_290);
    uStack_2d0 = (long *)CONCAT44(uStack_284,uStack_288);
    func_0x0d6922f0(auStack_410,&uStack_2d8,&uStack_3a8);
    if (uStack_3f8._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x60);
      iVar4 = *piVar10;
      while (iVar4 != (int)uStack_3f8) {
        piVar10 = piVar10 + 0x16;
        iVar4 = *piVar10;
      }
      lVar6 = *(long *)(piVar10 + 0xc);
      while (lVar6 != uStack_408) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar6 = *(long *)(piVar10 + 0xc);
      }
code_r0x0d6a525f:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_3f8._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x48);
        iVar4 = *piVar10;
        while (iVar4 != (int)uStack_3f8) {
          piVar10 = piVar10 + 0x1a;
          iVar4 = *piVar10;
        }
        goto code_r0x0d6a525f;
      }
      if (uStack_3f8._4_4_ == 0) {
        puVar15 = (uint *)(CONCAT44(uStack_3fc,uStack_400) + 0x18);
        *puVar15 = *puVar15 | 0x90000;
      }
    }
    if ((char)uStack_260 == '\0') {
      func_0x0d692680(auStack_410,&uStack_298);
    }
    uVar11 = uStack_264;
    lVar6 = CONCAT44(uStack_294,uStack_298);
    if ((cRam000000000f721b20 == '\0') && (iVar4 = func_0x04108328(0xf721b20), iVar4 != 0)) {
      func_0x0d68e3a0();
      func_0x0eee2f40(&UNK_048ae800,0xf721aa0,0xf53dab8);
      func_0x0410844d(0xf721b20);
    }
    plVar7 = (long *)(*(long *)(lVar6 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar6 + 0x20) - *(long *)(lVar6 + 0x18)) >> 3)
                             - 1U & *(uint *)(lRam000000000f721aa0 + 4)) * 8);
    do {
      lVar12 = *plVar7;
      if (lVar12 == -1) goto code_r0x0d6a52f0;
      plVar7 = (long *)(*(long *)(lVar6 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(lVar6 + 0x30) + 8 + lVar12 * 0x18) !=
             *(uint *)(lRam000000000f721aa0 + 4));
    if (plVar7 == *(long **)(lVar6 + 0x38)) {
code_r0x0d6a52f0:
      lVar6 = 0xf721aa0;
    }
    else {
      lVar6 = plVar7[2];
    }
    puVar2 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x28);
    for (puVar15 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x20);
        (puVar15 != puVar2 && (*puVar15 != uVar11)); puVar15 = puVar15 + 0xe) {
    }
    if ((puVar15 == puVar2) &&
       (cVar3 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012d00c7),
       cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_410[0] = auStack_410[0] & 0xffffff00;
    func_0x05d9c620(puVar15 + 2,(long)&uStack_270 + 4,(long)&uStack_270 + 4,auStack_410);
    uStack_198 = uStack_298;
    uStack_194 = uStack_294;
    uStack_190 = uStack_290;
    uStack_18c = uStack_28c;
    uStack_188 = uStack_288;
    uStack_184 = uStack_284;
    uStack_180 = uStack_280;
    uStack_17c = uStack_27c;
    uStack_178 = uStack_278;
    uStack_174 = uStack_274;
    uStack_170 = (undefined4)uStack_270;
    uStack_16c = uStack_270._4_4_;
    uStack_168 = uStack_268;
    uStack_164 = uStack_264;
    uStack_160 = uStack_260;
    func_0x048b0bc0(&uStack_3a8);
    func_0x0d691f10(&uStack_3a8,&UNK_013d81aa,0x17);
    bVar16 = (bStack_380 & 1) == 0;
    puVar8 = puStack_370;
    if (bVar16) {
      puVar8 = &uStack_37f;
    }
    uVar13 = (ulong)(bStack_380 >> 1);
    if (!bVar16) {
      uVar13 = CONCAT26(uStack_372,CONCAT15(uStack_373,CONCAT41(uStack_377,uStack_378)));
    }
    if (uVar13 == 0) {
      uStack_16c = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar13 & 3);
      if (uVar13 < 4) {
        uStack_16c = 0x811c9dc5;
        uVar14 = 0;
      }
      else {
        uStack_16c = 0x811c9dc5;
        uVar14 = 0;
        do {
          uStack_16c = ((int)*(char *)((long)puVar8 + uVar14 + 3) ^
                       ((int)*(char *)((long)puVar8 + uVar14 + 2) ^
                       ((int)*(char *)((long)puVar8 + uVar14 + 1) ^
                       ((int)*(char *)((long)puVar8 + uVar14) ^ uStack_16c) * 0x1000193) * 0x1000193
                       ) * 0x1000193) * 0x1000193;
          uVar14 = uVar14 + 4;
        } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
      }
      if (uVar9 != 0) {
        uVar13 = 0;
        do {
          uStack_16c = ((int)*(char *)((long)puVar8 + uVar13 + uVar14) ^ uStack_16c) * 0x1000193;
          uVar13 = uVar13 + 1;
        } while (uVar9 != uVar13);
      }
    }
    uStack_170 = 2;
    if ((cRam000000000f721b40 == '\0') && (iVar4 = func_0x04108328(0xf721b40), iVar4 != 0)) {
      func_0x0d68e4b0();
      func_0x0410844d(0xf721b40);
    }
    auStack_410[0] = uStack_16c;
    uStack_408 = 0;
    uStack_400 = 3;
    uStack_3f8 = 1;
    uStack_3f0 = 0;
    uStack_3e8 = &UNK_0d692560;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &UNK_0d68e2e0;
    puStack_3d0 = &UNK_0d692840;
    puStack_3c8 = &UNK_0d692850;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    plStack_3b0 = (long *)0x0;
    func_0x048b05a0(&uStack_190,auStack_410);
    plVar7 = plStack_3b0;
    if (plStack_3b0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b0 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
        func_0x0412c2d0(plVar7);
      }
    }
    uStack_2c8 = uStack_180;
    uStack_2c4 = uStack_17c;
    uStack_2c0 = uStack_178;
    uStack_2bc = uStack_174;
    uStack_2d8 = (long *)CONCAT44(uStack_18c,uStack_190);
    uStack_2d0 = (long *)CONCAT44(uStack_184,uStack_188);
    func_0x0d6922f0(auStack_410,&uStack_2d8,&uStack_3a8);
    if (uStack_3f8._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x60);
      iVar4 = *piVar10;
      while (iVar4 != (int)uStack_3f8) {
        piVar10 = piVar10 + 0x16;
        iVar4 = *piVar10;
      }
      lVar6 = *(long *)(piVar10 + 0xc);
      while (lVar6 != uStack_408) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar6 = *(long *)(piVar10 + 0xc);
      }
code_r0x0d6a566f:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_3f8._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x48);
        iVar4 = *piVar10;
        while (iVar4 != (int)uStack_3f8) {
          piVar10 = piVar10 + 0x1a;
          iVar4 = *piVar10;
        }
        goto code_r0x0d6a566f;
      }
      if (uStack_3f8._4_4_ == 0) {
        puVar15 = (uint *)(CONCAT44(uStack_3fc,uStack_400) + 0x18);
        *puVar15 = *puVar15 | 0x90000;
      }
    }
    if ((char)uStack_160 == '\0') {
      func_0x0d692680(auStack_410,&uStack_198);
    }
    uVar11 = uStack_164;
    lVar6 = CONCAT44(uStack_194,uStack_198);
    if ((cRam000000000f721b20 == '\0') && (iVar4 = func_0x04108328(0xf721b20), iVar4 != 0)) {
      func_0x0d68e3a0();
      func_0x0eee2f40(&UNK_048ae800,0xf721aa0,0xf53dab8);
      func_0x0410844d(0xf721b20);
    }
    plVar7 = (long *)(*(long *)(lVar6 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar6 + 0x20) - *(long *)(lVar6 + 0x18)) >> 3)
                             - 1U & *(uint *)(lRam000000000f721aa0 + 4)) * 8);
    do {
      lVar12 = *plVar7;
      if (lVar12 == -1) goto code_r0x0d6a5700;
      plVar7 = (long *)(*(long *)(lVar6 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(lVar6 + 0x30) + 8 + lVar12 * 0x18) !=
             *(uint *)(lRam000000000f721aa0 + 4));
    if (plVar7 == *(long **)(lVar6 + 0x38)) {
code_r0x0d6a5700:
      lVar6 = 0xf721aa0;
    }
    else {
      lVar6 = plVar7[2];
    }
    puVar2 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x28);
    for (puVar15 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x20);
        (puVar15 != puVar2 && (*puVar15 != uVar11)); puVar15 = puVar15 + 0xe) {
    }
    if ((puVar15 == puVar2) &&
       (cVar3 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012d00c7),
       cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_410[0] = auStack_410[0] & 0xffffff00;
    func_0x05d9c620(puVar15 + 2,&uStack_16c,&uStack_16c,auStack_410);
    lStack_158 = CONCAT44(uStack_194,uStack_198);
    plStack_150 = (long *)CONCAT44(uStack_18c,uStack_190);
    uStack_148 = uStack_188;
    uStack_144 = uStack_184;
    uStack_140 = uStack_180;
    uStack_13c = uStack_17c;
    uStack_138 = uStack_178;
    uStack_134 = uStack_174;
    uStack_130 = uStack_170;
    uStack_12c = uStack_16c;
    uStack_128 = uStack_168;
    uStack_124 = uStack_164;
    uStack_120 = uStack_160;
    func_0x048b0bc0(&uStack_3a8);
    func_0x0d691f10(&uStack_3a8,&UNK_0131d675,0x15);
    bVar16 = (bStack_380 & 1) == 0;
    puVar8 = puStack_370;
    if (bVar16) {
      puVar8 = &uStack_37f;
    }
    uVar13 = (ulong)(bStack_380 >> 1);
    if (!bVar16) {
      uVar13 = CONCAT26(uStack_372,CONCAT15(uStack_373,CONCAT41(uStack_377,uStack_378)));
    }
    if (uVar13 == 0) {
      uStack_12c = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar13 & 3);
      if (uVar13 < 4) {
        uStack_12c = 0x811c9dc5;
        uVar14 = 0;
      }
      else {
        uStack_12c = 0x811c9dc5;
        uVar14 = 0;
        do {
          uStack_12c = ((int)*(char *)((long)puVar8 + uVar14 + 3) ^
                       ((int)*(char *)((long)puVar8 + uVar14 + 2) ^
                       ((int)*(char *)((long)puVar8 + uVar14 + 1) ^
                       ((int)*(char *)((long)puVar8 + uVar14) ^ uStack_12c) * 0x1000193) * 0x1000193
                       ) * 0x1000193) * 0x1000193;
          uVar14 = uVar14 + 4;
        } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
      }
      if (uVar9 != 0) {
        uVar13 = 0;
        do {
          uStack_12c = ((int)*(char *)((long)puVar8 + uVar13 + uVar14) ^ uStack_12c) * 0x1000193;
          uVar13 = uVar13 + 1;
        } while (uVar9 != uVar13);
      }
    }
    uStack_130 = 2;
    if ((cRam000000000f721b40 == '\0') && (iVar4 = func_0x04108328(0xf721b40), iVar4 != 0)) {
      func_0x0d68e4b0();
      func_0x0410844d(0xf721b40);
    }
    auStack_410[0] = uStack_12c;
    uStack_408 = 0;
    uStack_400 = 3;
    uStack_3f8 = 1;
    uStack_3f0 = 0;
    uStack_3e8 = &UNK_0d692560;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &UNK_0d68e2e0;
    puStack_3d0 = &UNK_0d6928a0;
    puStack_3c8 = &UNK_0d6928b0;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    plStack_3b0 = (long *)0x0;
    func_0x048b05a0(&plStack_150,auStack_410);
    plVar7 = plStack_3b0;
    if (plStack_3b0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b0 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
        func_0x0412c2d0(plVar7);
      }
    }
    uStack_2c8 = uStack_140;
    uStack_2c4 = uStack_13c;
    uStack_2c0 = uStack_138;
    uStack_2bc = uStack_134;
    uStack_2d8 = plStack_150;
    uStack_2d0 = (long *)CONCAT44(uStack_144,uStack_148);
    func_0x0d6922f0(auStack_410,&uStack_2d8,&uStack_3a8);
    if (uStack_3f8._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x60);
      iVar4 = *piVar10;
      while (iVar4 != (int)uStack_3f8) {
        piVar10 = piVar10 + 0x16;
        iVar4 = *piVar10;
      }
      lVar6 = *(long *)(piVar10 + 0xc);
      while (lVar6 != uStack_408) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar6 = *(long *)(piVar10 + 0xc);
      }
code_r0x0d6a5a7f:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_3f8._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x48);
        iVar4 = *piVar10;
        while (iVar4 != (int)uStack_3f8) {
          piVar10 = piVar10 + 0x1a;
          iVar4 = *piVar10;
        }
        goto code_r0x0d6a5a7f;
      }
      if (uStack_3f8._4_4_ == 0) {
        puVar15 = (uint *)(CONCAT44(uStack_3fc,uStack_400) + 0x18);
        *puVar15 = *puVar15 | 0x90000;
      }
    }
    if ((char)uStack_120 == '\0') {
      func_0x0d692680(auStack_410,&lStack_158);
    }
    uVar11 = uStack_124;
    lVar6 = lStack_158;
    if ((cRam000000000f721b20 == '\0') && (iVar4 = func_0x04108328(0xf721b20), iVar4 != 0)) {
      func_0x0d68e3a0();
      func_0x0eee2f40(&UNK_048ae800,0xf721aa0,0xf53dab8);
      func_0x0410844d(0xf721b20);
    }
    plVar7 = (long *)(*(long *)(lVar6 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar6 + 0x20) - *(long *)(lVar6 + 0x18)) >> 3)
                             - 1U & *(uint *)(lRam000000000f721aa0 + 4)) * 8);
    do {
      lVar12 = *plVar7;
      if (lVar12 == -1) goto code_r0x0d6a5b10;
      plVar7 = (long *)(*(long *)(lVar6 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(lVar6 + 0x30) + 8 + lVar12 * 0x18) !=
             *(uint *)(lRam000000000f721aa0 + 4));
    if (plVar7 == *(long **)(lVar6 + 0x38)) {
code_r0x0d6a5b10:
      lVar6 = 0xf721aa0;
    }
    else {
      lVar6 = plVar7[2];
    }
    puVar2 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x28);
    for (puVar15 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x20);
        (puVar15 != puVar2 && (*puVar15 != uVar11)); puVar15 = puVar15 + 0xe) {
    }
    if ((puVar15 == puVar2) &&
       (cVar3 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012d00c7),
       cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_410[0] = auStack_410[0] & 0xffffff00;
    func_0x05d9c620(puVar15 + 2,&uStack_12c,&uStack_12c,auStack_410);
    lStack_118 = lStack_158;
    plStack_110 = plStack_150;
    uStack_108 = uStack_148;
    uStack_104 = uStack_144;
    uStack_100 = uStack_140;
    uStack_fc = uStack_13c;
    uStack_f8 = uStack_138;
    uStack_f4 = uStack_134;
    uStack_f0 = uStack_130;
    uStack_ec = uStack_12c;
    uStack_e8 = uStack_128;
    uStack_e4 = uStack_124;
    uStack_e0 = uStack_120;
    func_0x048b0bc0(&uStack_3a8);
    func_0x0d691f10(&uStack_3a8,&UNK_014a08a1,5);
    bVar16 = (bStack_380 & 1) == 0;
    puVar8 = puStack_370;
    if (bVar16) {
      puVar8 = &uStack_37f;
    }
    uVar13 = (ulong)(bStack_380 >> 1);
    if (!bVar16) {
      uVar13 = CONCAT26(uStack_372,CONCAT15(uStack_373,CONCAT41(uStack_377,uStack_378)));
    }
    if (uVar13 == 0) {
      uStack_ec = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar13 & 3);
      if (uVar13 < 4) {
        uStack_ec = 0x811c9dc5;
        uVar14 = 0;
      }
      else {
        uStack_ec = 0x811c9dc5;
        uVar14 = 0;
        do {
          uStack_ec = ((int)*(char *)((long)puVar8 + uVar14 + 3) ^
                      ((int)*(char *)((long)puVar8 + uVar14 + 2) ^
                      ((int)*(char *)((long)puVar8 + uVar14 + 1) ^
                      ((int)*(char *)((long)puVar8 + uVar14) ^ uStack_ec) * 0x1000193) * 0x1000193)
                      * 0x1000193) * 0x1000193;
          uVar14 = uVar14 + 4;
        } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
      }
      if (uVar9 != 0) {
        uVar13 = 0;
        do {
          uStack_ec = ((int)*(char *)((long)puVar8 + uVar13 + uVar14) ^ uStack_ec) * 0x1000193;
          uVar13 = uVar13 + 1;
        } while (uVar9 != uVar13);
      }
    }
    uStack_f0 = 2;
    if ((cRam000000000f721b40 == '\0') && (iVar4 = func_0x04108328(0xf721b40), iVar4 != 0)) {
      func_0x0d68e4b0();
      func_0x0410844d(0xf721b40);
    }
    auStack_410[0] = uStack_ec;
    uStack_408 = 0;
    uStack_400 = 3;
    uStack_3f8 = 1;
    uStack_3f0 = 0;
    uStack_3e8 = &UNK_0d692560;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &UNK_0d68e2e0;
    puStack_3d0 = &UNK_0d692900;
    puStack_3c8 = &UNK_0d692910;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    plStack_3b0 = (long *)0x0;
    func_0x048b05a0(&plStack_110,auStack_410);
    plVar7 = plStack_3b0;
    if (plStack_3b0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b0 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
        func_0x0412c2d0(plVar7);
      }
    }
    uStack_2c8 = uStack_100;
    uStack_2c4 = uStack_fc;
    uStack_2c0 = uStack_f8;
    uStack_2bc = uStack_f4;
    uStack_2d8 = plStack_110;
    uStack_2d0 = (long *)CONCAT44(uStack_104,uStack_108);
    func_0x0d6922f0(auStack_410,&uStack_2d8,&uStack_3a8);
    if (uStack_3f8._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x60);
      iVar4 = *piVar10;
      while (iVar4 != (int)uStack_3f8) {
        piVar10 = piVar10 + 0x16;
        iVar4 = *piVar10;
      }
      lVar6 = *(long *)(piVar10 + 0xc);
      while (lVar6 != uStack_408) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar6 = *(long *)(piVar10 + 0xc);
      }
code_r0x0d6a5e8f:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_3f8._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x48);
        iVar4 = *piVar10;
        while (iVar4 != (int)uStack_3f8) {
          piVar10 = piVar10 + 0x1a;
          iVar4 = *piVar10;
        }
        goto code_r0x0d6a5e8f;
      }
      if (uStack_3f8._4_4_ == 0) {
        puVar15 = (uint *)(CONCAT44(uStack_3fc,uStack_400) + 0x18);
        *puVar15 = *puVar15 | 0x90000;
      }
    }
    if ((char)uStack_e0 == '\0') {
      func_0x0d692680(auStack_410,&lStack_118);
    }
    uVar11 = uStack_e4;
    lVar6 = lStack_118;
    if ((cRam000000000f721b20 == '\0') && (iVar4 = func_0x04108328(0xf721b20), iVar4 != 0)) {
      func_0x0d68e3a0();
      func_0x0eee2f40(&UNK_048ae800,0xf721aa0,0xf53dab8);
      func_0x0410844d(0xf721b20);
    }
    plVar7 = (long *)(*(long *)(lVar6 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar6 + 0x20) - *(long *)(lVar6 + 0x18)) >> 3)
                             - 1U & *(uint *)(lRam000000000f721aa0 + 4)) * 8);
    do {
      lVar12 = *plVar7;
      if (lVar12 == -1) goto code_r0x0d6a5f20;
      plVar7 = (long *)(*(long *)(lVar6 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(lVar6 + 0x30) + 8 + lVar12 * 0x18) !=
             *(uint *)(lRam000000000f721aa0 + 4));
    if (plVar7 == *(long **)(lVar6 + 0x38)) {
code_r0x0d6a5f20:
      lVar6 = 0xf721aa0;
    }
    else {
      lVar6 = plVar7[2];
    }
    puVar2 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x28);
    for (puVar15 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x20);
        (puVar15 != puVar2 && (*puVar15 != uVar11)); puVar15 = puVar15 + 0xe) {
    }
    if ((puVar15 == puVar2) &&
       (cVar3 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012d00c7),
       cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_410[0] = auStack_410[0] & 0xffffff00;
    func_0x05d9c620(puVar15 + 2,&uStack_ec,&uStack_ec,auStack_410);
    lStack_d8 = lStack_118;
    plStack_d0 = plStack_110;
    uStack_c8 = uStack_108;
    uStack_c4 = uStack_104;
    uStack_c0 = uStack_100;
    uStack_bc = uStack_fc;
    uStack_b8 = uStack_f8;
    uStack_b4 = uStack_f4;
    uStack_b0 = uStack_f0;
    uStack_ac = uStack_ec;
    uStack_a8 = uStack_e8;
    uStack_a4 = uStack_e4;
    uStack_a0 = uStack_e0;
    func_0x048b0bc0(&uStack_3a8);
    func_0x0d691f10(&uStack_3a8,&UNK_01430721,0x1f);
    bVar16 = (bStack_380 & 1) == 0;
    puVar8 = puStack_370;
    if (bVar16) {
      puVar8 = &uStack_37f;
    }
    uVar13 = (ulong)(bStack_380 >> 1);
    if (!bVar16) {
      uVar13 = CONCAT26(uStack_372,CONCAT15(uStack_373,CONCAT41(uStack_377,uStack_378)));
    }
    if (uVar13 == 0) {
      uStack_ac = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar13 & 3);
      if (uVar13 < 4) {
        uStack_ac = 0x811c9dc5;
        uVar14 = 0;
      }
      else {
        uStack_ac = 0x811c9dc5;
        uVar14 = 0;
        do {
          uStack_ac = ((int)*(char *)((long)puVar8 + uVar14 + 3) ^
                      ((int)*(char *)((long)puVar8 + uVar14 + 2) ^
                      ((int)*(char *)((long)puVar8 + uVar14 + 1) ^
                      ((int)*(char *)((long)puVar8 + uVar14) ^ uStack_ac) * 0x1000193) * 0x1000193)
                      * 0x1000193) * 0x1000193;
          uVar14 = uVar14 + 4;
        } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
      }
      if (uVar9 != 0) {
        uVar13 = 0;
        do {
          uStack_ac = ((int)*(char *)((long)puVar8 + uVar13 + uVar14) ^ uStack_ac) * 0x1000193;
          uVar13 = uVar13 + 1;
        } while (uVar9 != uVar13);
      }
    }
    uStack_b0 = 2;
    if ((cRam000000000f721b40 == '\0') && (iVar4 = func_0x04108328(0xf721b40), iVar4 != 0)) {
      func_0x0d68e4b0();
      func_0x0410844d(0xf721b40);
    }
    auStack_410[0] = uStack_ac;
    uStack_408 = 0;
    uStack_400 = 3;
    uStack_3f8 = 1;
    uStack_3f0 = 0;
    uStack_3e8 = &UNK_0d692560;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &UNK_0d68e2e0;
    puStack_3d0 = &UNK_0d692960;
    puStack_3c8 = &UNK_0d692970;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    plStack_3b0 = (long *)0x0;
    func_0x048b05a0(&plStack_d0,auStack_410);
    plVar7 = plStack_3b0;
    if (plStack_3b0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b0 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
        func_0x0412c2d0(plVar7);
      }
    }
    uStack_2c8 = uStack_c0;
    uStack_2c4 = uStack_bc;
    uStack_2c0 = uStack_b8;
    uStack_2bc = uStack_b4;
    uStack_2d8 = plStack_d0;
    uStack_2d0 = (long *)CONCAT44(uStack_c4,uStack_c8);
    func_0x0d6922f0(auStack_410,&uStack_2d8,&uStack_3a8);
    if (uStack_3f8._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x60);
      iVar4 = *piVar10;
      while (iVar4 != (int)uStack_3f8) {
        piVar10 = piVar10 + 0x16;
        iVar4 = *piVar10;
      }
      lVar6 = *(long *)(piVar10 + 0xc);
      while (lVar6 != uStack_408) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar6 = *(long *)(piVar10 + 0xc);
      }
code_r0x0d6a629f:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_3f8._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x48);
        iVar4 = *piVar10;
        while (iVar4 != (int)uStack_3f8) {
          piVar10 = piVar10 + 0x1a;
          iVar4 = *piVar10;
        }
        goto code_r0x0d6a629f;
      }
      if (uStack_3f8._4_4_ == 0) {
        puVar15 = (uint *)(CONCAT44(uStack_3fc,uStack_400) + 0x18);
        *puVar15 = *puVar15 | 0x90000;
      }
    }
    if ((char)uStack_a0 == '\0') {
      func_0x0d692680(auStack_410,&lStack_d8);
    }
    uVar11 = uStack_a4;
    lVar6 = lStack_d8;
    if ((cRam000000000f721b20 == '\0') && (iVar4 = func_0x04108328(0xf721b20), iVar4 != 0)) {
      func_0x0d68e3a0();
      func_0x0eee2f40(&UNK_048ae800,0xf721aa0,0xf53dab8);
      func_0x0410844d(0xf721b20);
    }
    plVar7 = (long *)(*(long *)(lVar6 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar6 + 0x20) - *(long *)(lVar6 + 0x18)) >> 3)
                             - 1U & *(uint *)(lRam000000000f721aa0 + 4)) * 8);
    do {
      lVar12 = *plVar7;
      if (lVar12 == -1) goto code_r0x0d6a6330;
      plVar7 = (long *)(*(long *)(lVar6 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(lVar6 + 0x30) + 8 + lVar12 * 0x18) !=
             *(uint *)(lRam000000000f721aa0 + 4));
    if (plVar7 == *(long **)(lVar6 + 0x38)) {
code_r0x0d6a6330:
      lVar6 = 0xf721aa0;
    }
    else {
      lVar6 = plVar7[2];
    }
    puVar2 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x28);
    for (puVar15 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x20);
        (puVar15 != puVar2 && (*puVar15 != uVar11)); puVar15 = puVar15 + 0xe) {
    }
    if ((puVar15 == puVar2) &&
       (cVar3 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012d00c7),
       cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_410[0] = auStack_410[0] & 0xffffff00;
    func_0x05d9c620(puVar15 + 2,&uStack_ac,&uStack_ac,auStack_410);
    lStack_98 = lStack_d8;
    plStack_90 = plStack_d0;
    uStack_88 = uStack_c8;
    uStack_84 = uStack_c4;
    uStack_80 = uStack_c0;
    uStack_7c = uStack_bc;
    uStack_78 = uStack_b8;
    uStack_74 = uStack_b4;
    uStack_70 = uStack_b0;
    uStack_6c = uStack_ac;
    uStack_68 = uStack_a8;
    uStack_64 = uStack_a4;
    uStack_60 = uStack_a0;
    func_0x048b0bc0(&uStack_3a8);
    func_0x0d691f10(&uStack_3a8,&UNK_0120ff27,0xe);
    bVar16 = (bStack_380 & 1) == 0;
    puVar8 = puStack_370;
    if (bVar16) {
      puVar8 = &uStack_37f;
    }
    uVar13 = (ulong)(bStack_380 >> 1);
    if (!bVar16) {
      uVar13 = CONCAT26(uStack_372,CONCAT15(uStack_373,CONCAT41(uStack_377,uStack_378)));
    }
    if (uVar13 == 0) {
      uStack_6c = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar13 & 3);
      if (uVar13 < 4) {
        uStack_6c = 0x811c9dc5;
        uVar14 = 0;
      }
      else {
        uStack_6c = 0x811c9dc5;
        uVar14 = 0;
        do {
          uStack_6c = ((int)*(char *)((long)puVar8 + uVar14 + 3) ^
                      ((int)*(char *)((long)puVar8 + uVar14 + 2) ^
                      ((int)*(char *)((long)puVar8 + uVar14 + 1) ^
                      ((int)*(char *)((long)puVar8 + uVar14) ^ uStack_6c) * 0x1000193) * 0x1000193)
                      * 0x1000193) * 0x1000193;
          uVar14 = uVar14 + 4;
        } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
      }
      if (uVar9 != 0) {
        uVar13 = 0;
        do {
          uStack_6c = ((int)*(char *)((long)puVar8 + uVar13 + uVar14) ^ uStack_6c) * 0x1000193;
          uVar13 = uVar13 + 1;
        } while (uVar9 != uVar13);
      }
    }
    uStack_70 = 2;
    if ((cRam000000000f721b40 == '\0') && (iVar4 = func_0x04108328(0xf721b40), iVar4 != 0)) {
      func_0x0d68e4b0();
      func_0x0410844d(0xf721b40);
    }
    auStack_410[0] = uStack_6c;
    uStack_408 = 0;
    uStack_400 = 3;
    uStack_3f8 = 1;
    uStack_3f0 = 0;
    uStack_3e8 = &UNK_0d692560;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &UNK_0d68e2e0;
    puStack_3d0 = &UNK_0d6929c0;
    puStack_3c8 = &UNK_0d6929d0;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    plStack_3b0 = (long *)0x0;
    func_0x048b05a0(&plStack_90,auStack_410);
    plVar7 = plStack_3b0;
    if (plStack_3b0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b0 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
        func_0x0412c2d0(plVar7);
      }
    }
    uStack_2c8 = uStack_80;
    uStack_2c4 = uStack_7c;
    uStack_2c0 = uStack_78;
    uStack_2bc = uStack_74;
    uStack_2d8 = plStack_90;
    uStack_2d0 = (long *)CONCAT44(uStack_84,uStack_88);
    func_0x0d6922f0(auStack_410,&uStack_2d8,&uStack_3a8);
    if (uStack_3f8._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x60);
      iVar4 = *piVar10;
      while (iVar4 != (int)uStack_3f8) {
        piVar10 = piVar10 + 0x16;
        iVar4 = *piVar10;
      }
      lVar6 = *(long *)(piVar10 + 0xc);
      while (lVar6 != uStack_408) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar6 = *(long *)(piVar10 + 0xc);
      }
code_r0x0d6a66af:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_3f8._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x48);
        iVar4 = *piVar10;
        while (iVar4 != (int)uStack_3f8) {
          piVar10 = piVar10 + 0x1a;
          iVar4 = *piVar10;
        }
        goto code_r0x0d6a66af;
      }
      if (uStack_3f8._4_4_ == 0) {
        puVar15 = (uint *)(CONCAT44(uStack_3fc,uStack_400) + 0x18);
        *puVar15 = *puVar15 | 0x90000;
      }
    }
    if ((char)uStack_60 == '\0') {
      func_0x0d692680(auStack_410,&lStack_98);
    }
    uVar11 = uStack_64;
    lVar6 = lStack_98;
    if ((cRam000000000f721b20 == '\0') && (iVar4 = func_0x04108328(0xf721b20), iVar4 != 0)) {
      func_0x0d68e3a0();
      func_0x0eee2f40(&UNK_048ae800,0xf721aa0,0xf53dab8);
      func_0x0410844d(0xf721b20);
    }
    plVar7 = (long *)(*(long *)(lVar6 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar6 + 0x20) - *(long *)(lVar6 + 0x18)) >> 3)
                             - 1U & *(uint *)(lRam000000000f721aa0 + 4)) * 8);
    do {
      lVar12 = *plVar7;
      if (lVar12 == -1) goto code_r0x0d6a6740;
      plVar7 = (long *)(*(long *)(lVar6 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(lVar6 + 0x30) + 8 + lVar12 * 0x18) !=
             *(uint *)(lRam000000000f721aa0 + 4));
    if (plVar7 == *(long **)(lVar6 + 0x38)) {
code_r0x0d6a6740:
      lVar6 = 0xf721aa0;
    }
    else {
      lVar6 = plVar7[2];
    }
    puVar2 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x28);
    for (puVar15 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x20);
        (puVar15 != puVar2 && (*puVar15 != uVar11)); puVar15 = puVar15 + 0xe) {
    }
    if ((puVar15 == puVar2) &&
       (cVar3 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012d00c7),
       cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_410[0] = auStack_410[0] & 0xffffff00;
    func_0x05d9c620(puVar15 + 2,&uStack_6c,&uStack_6c,auStack_410);
    uStack_218 = lStack_98;
    uStack_210 = plStack_90;
    uStack_208 = uStack_88;
    uStack_204 = uStack_84;
    uStack_200 = uStack_80;
    uStack_1fc = uStack_7c;
    uStack_1f8 = uStack_78;
    uStack_1f4 = uStack_74;
    uStack_1f0 = uStack_70;
    uStack_1ec = uStack_6c;
    uStack_1e8 = uStack_68;
    uStack_1e4 = uStack_64;
    uStack_1e0 = uStack_60;
    func_0x048b0bc0(&uStack_3a8);
    func_0x0d691f10(&uStack_3a8,&UNK_0143e950,0x20);
    bVar16 = (bStack_380 & 1) == 0;
    puVar8 = puStack_370;
    if (bVar16) {
      puVar8 = &uStack_37f;
    }
    uVar13 = (ulong)(bStack_380 >> 1);
    if (!bVar16) {
      uVar13 = CONCAT26(uStack_372,CONCAT15(uStack_373,CONCAT41(uStack_377,uStack_378)));
    }
    if (uVar13 == 0) {
      uStack_1ec = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar13 & 3);
      if (uVar13 < 4) {
        uStack_1ec = 0x811c9dc5;
        uVar14 = 0;
      }
      else {
        uStack_1ec = 0x811c9dc5;
        uVar14 = 0;
        do {
          uStack_1ec = ((int)*(char *)((long)puVar8 + uVar14 + 3) ^
                       ((int)*(char *)((long)puVar8 + uVar14 + 2) ^
                       ((int)*(char *)((long)puVar8 + uVar14 + 1) ^
                       ((int)*(char *)((long)puVar8 + uVar14) ^ uStack_1ec) * 0x1000193) * 0x1000193
                       ) * 0x1000193) * 0x1000193;
          uVar14 = uVar14 + 4;
        } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
      }
      if (uVar9 != 0) {
        uVar13 = 0;
        do {
          uStack_1ec = ((int)*(char *)((long)puVar8 + uVar13 + uVar14) ^ uStack_1ec) * 0x1000193;
          uVar13 = uVar13 + 1;
        } while (uVar9 != uVar13);
      }
    }
    uStack_1f0 = 2;
    if ((cRam000000000f721b40 == '\0') && (iVar4 = func_0x04108328(0xf721b40), iVar4 != 0)) {
      func_0x0d68e4b0();
      func_0x0410844d(0xf721b40);
    }
    auStack_410[0] = uStack_1ec;
    uStack_408 = 0;
    uStack_400 = 3;
    uStack_3f8 = 1;
    uStack_3f0 = 0;
    uStack_3e8 = &UNK_0d692560;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &UNK_0d68e2e0;
    puStack_3d0 = &UNK_0d692a20;
    puStack_3c8 = &UNK_0d692a30;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    plStack_3b0 = (long *)0x0;
    func_0x048b05a0(&uStack_210,auStack_410);
    plVar7 = plStack_3b0;
    if (plStack_3b0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b0 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
        func_0x0412c2d0(plVar7);
      }
    }
    uStack_2c8 = uStack_200;
    uStack_2c4 = uStack_1fc;
    uStack_2c0 = uStack_1f8;
    uStack_2bc = uStack_1f4;
    uStack_2d8 = uStack_210;
    uStack_2d0 = (long *)CONCAT44(uStack_204,uStack_208);
    func_0x0d6922f0(auStack_410,&uStack_2d8,&uStack_3a8);
    if (uStack_3f8._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x60);
      iVar4 = *piVar10;
      while (iVar4 != (int)uStack_3f8) {
        piVar10 = piVar10 + 0x16;
        iVar4 = *piVar10;
      }
      lVar6 = *(long *)(piVar10 + 0xc);
      while (lVar6 != uStack_408) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar6 = *(long *)(piVar10 + 0xc);
      }
code_r0x0d6a6abf:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_3f8._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x48);
        iVar4 = *piVar10;
        while (iVar4 != (int)uStack_3f8) {
          piVar10 = piVar10 + 0x1a;
          iVar4 = *piVar10;
        }
        goto code_r0x0d6a6abf;
      }
      if (uStack_3f8._4_4_ == 0) {
        puVar15 = (uint *)(CONCAT44(uStack_3fc,uStack_400) + 0x18);
        *puVar15 = *puVar15 | 0x90000;
      }
    }
    if ((char)uStack_1e0 == '\0') {
      func_0x0d692680(auStack_410,&uStack_218);
    }
    uVar11 = uStack_1e4;
    lVar6 = uStack_218;
    if ((cRam000000000f721b20 == '\0') && (iVar4 = func_0x04108328(0xf721b20), iVar4 != 0)) {
      func_0x0d68e3a0();
      func_0x0eee2f40(&UNK_048ae800,0xf721aa0,0xf53dab8);
      func_0x0410844d(0xf721b20);
    }
    plVar7 = (long *)(*(long *)(lVar6 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar6 + 0x20) - *(long *)(lVar6 + 0x18)) >> 3)
                             - 1U & *(uint *)(lRam000000000f721aa0 + 4)) * 8);
    do {
      lVar12 = *plVar7;
      if (lVar12 == -1) goto code_r0x0d6a6b50;
      plVar7 = (long *)(*(long *)(lVar6 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(lVar6 + 0x30) + 8 + lVar12 * 0x18) !=
             *(uint *)(lRam000000000f721aa0 + 4));
    if (plVar7 == *(long **)(lVar6 + 0x38)) {
code_r0x0d6a6b50:
      lVar6 = 0xf721aa0;
    }
    else {
      lVar6 = plVar7[2];
    }
    puVar2 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x28);
    for (puVar15 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x20);
        (puVar15 != puVar2 && (*puVar15 != uVar11)); puVar15 = puVar15 + 0xe) {
    }
    if ((puVar15 == puVar2) &&
       (cVar3 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012d00c7),
       cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_410[0] = auStack_410[0] & 0xffffff00;
    func_0x05d9c620(puVar15 + 2,&uStack_1ec,&uStack_1ec,auStack_410);
    lStack_1d8 = uStack_218;
    plStack_1d0 = uStack_210;
    uStack_1c8 = uStack_208;
    uStack_1c4 = uStack_204;
    uStack_1c0 = uStack_200;
    uStack_1bc = uStack_1fc;
    uStack_1b8 = uStack_1f8;
    uStack_1b4 = uStack_1f4;
    uStack_1b0 = uStack_1f0;
    uStack_1ac = uStack_1ec;
    uStack_1a8 = uStack_1e8;
    uStack_1a4 = uStack_1e4;
    uStack_1a0 = uStack_1e0;
    func_0x048b0bc0(&uStack_3a8);
    func_0x0d691f10(&uStack_3a8,&UNK_014dbf5d,0x13);
    bVar16 = (bStack_380 & 1) == 0;
    puVar8 = puStack_370;
    if (bVar16) {
      puVar8 = &uStack_37f;
    }
    uVar13 = (ulong)(bStack_380 >> 1);
    if (!bVar16) {
      uVar13 = CONCAT26(uStack_372,CONCAT15(uStack_373,CONCAT41(uStack_377,uStack_378)));
    }
    if (uVar13 == 0) {
      uStack_1ac = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar13 & 3);
      if (uVar13 < 4) {
        uStack_1ac = 0x811c9dc5;
        uVar14 = 0;
      }
      else {
        uStack_1ac = 0x811c9dc5;
        uVar14 = 0;
        do {
          uStack_1ac = ((int)*(char *)((long)puVar8 + uVar14 + 3) ^
                       ((int)*(char *)((long)puVar8 + uVar14 + 2) ^
                       ((int)*(char *)((long)puVar8 + uVar14 + 1) ^
                       ((int)*(char *)((long)puVar8 + uVar14) ^ uStack_1ac) * 0x1000193) * 0x1000193
                       ) * 0x1000193) * 0x1000193;
          uVar14 = uVar14 + 4;
        } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
      }
      if (uVar9 != 0) {
        uVar13 = 0;
        do {
          uStack_1ac = ((int)*(char *)((long)puVar8 + uVar13 + uVar14) ^ uStack_1ac) * 0x1000193;
          uVar13 = uVar13 + 1;
        } while (uVar9 != uVar13);
      }
    }
    uStack_1b0 = 2;
    if ((cRam000000000f721b40 == '\0') && (iVar4 = func_0x04108328(0xf721b40), iVar4 != 0)) {
      func_0x0d68e4b0();
      func_0x0410844d(0xf721b40);
    }
    auStack_410[0] = uStack_1ac;
    uStack_408 = 0;
    uStack_400 = 3;
    uStack_3f8 = 1;
    uStack_3f0 = 0;
    uStack_3e8 = &UNK_0d692560;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &UNK_0d68e2e0;
    puStack_3d0 = &UNK_0d692a80;
    puStack_3c8 = &UNK_0d692a90;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    plStack_3b0 = (long *)0x0;
    func_0x048b05a0(&plStack_1d0,auStack_410);
    plVar7 = plStack_3b0;
    if (plStack_3b0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b0 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
        func_0x0412c2d0(plVar7);
      }
    }
    uStack_2c8 = uStack_1c0;
    uStack_2c4 = uStack_1bc;
    uStack_2c0 = uStack_1b8;
    uStack_2bc = uStack_1b4;
    uStack_2d8 = plStack_1d0;
    uStack_2d0 = (long *)CONCAT44(uStack_1c4,uStack_1c8);
    func_0x0d6922f0(auStack_410,&uStack_2d8,&uStack_3a8);
    if (uStack_3f8._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x60);
      iVar4 = *piVar10;
      while (iVar4 != (int)uStack_3f8) {
        piVar10 = piVar10 + 0x16;
        iVar4 = *piVar10;
      }
      lVar6 = *(long *)(piVar10 + 0xc);
      while (lVar6 != uStack_408) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar6 = *(long *)(piVar10 + 0xc);
      }
code_r0x0d6a6ecf:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_3f8._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x48);
        iVar4 = *piVar10;
        while (iVar4 != (int)uStack_3f8) {
          piVar10 = piVar10 + 0x1a;
          iVar4 = *piVar10;
        }
        goto code_r0x0d6a6ecf;
      }
      if (uStack_3f8._4_4_ == 0) {
        puVar15 = (uint *)(CONCAT44(uStack_3fc,uStack_400) + 0x18);
        *puVar15 = *puVar15 | 0x90000;
      }
    }
    if ((char)uStack_1a0 == '\0') {
      func_0x0d692680(auStack_410,&lStack_1d8);
    }
    uVar11 = uStack_1a4;
    lVar6 = lStack_1d8;
    if ((cRam000000000f721b20 == '\0') && (iVar4 = func_0x04108328(0xf721b20), iVar4 != 0)) {
      func_0x0d68e3a0();
      func_0x0eee2f40(&UNK_048ae800,0xf721aa0,0xf53dab8);
      func_0x0410844d(0xf721b20);
    }
    plVar7 = (long *)(*(long *)(lVar6 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar6 + 0x20) - *(long *)(lVar6 + 0x18)) >> 3)
                             - 1U & *(uint *)(lRam000000000f721aa0 + 4)) * 8);
    do {
      lVar12 = *plVar7;
      if (lVar12 == -1) goto code_r0x0d6a6f60;
      plVar7 = (long *)(*(long *)(lVar6 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(lVar6 + 0x30) + 8 + lVar12 * 0x18) !=
             *(uint *)(lRam000000000f721aa0 + 4));
    if (plVar7 == *(long **)(lVar6 + 0x38)) {
code_r0x0d6a6f60:
      lVar6 = 0xf721aa0;
    }
    else {
      lVar6 = plVar7[2];
    }
    puVar2 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x28);
    for (puVar15 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x20);
        (puVar15 != puVar2 && (*puVar15 != uVar11)); puVar15 = puVar15 + 0xe) {
    }
    if ((puVar15 == puVar2) &&
       (cVar3 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012d00c7),
       cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_410[0] = auStack_410[0] & 0xffffff00;
    func_0x05d9c620(puVar15 + 2,&uStack_1ac,&uStack_1ac,auStack_410);
    uStack_258 = lStack_1d8;
    uStack_250 = plStack_1d0;
    uStack_248 = uStack_1c8;
    uStack_244 = uStack_1c4;
    uStack_240 = uStack_1c0;
    uStack_23c = uStack_1bc;
    uStack_238 = uStack_1b8;
    uStack_234 = uStack_1b4;
    uStack_230 = uStack_1b0;
    uStack_22c = uStack_1ac;
    uStack_228 = uStack_1a8;
    uStack_224 = uStack_1a4;
    uStack_220 = uStack_1a0;
    func_0x048b0bc0(&uStack_3a8);
    func_0x0d691f10(&uStack_3a8,&UNK_012348f1,0x11);
    bVar16 = (bStack_380 & 1) == 0;
    puVar8 = puStack_370;
    if (bVar16) {
      puVar8 = &uStack_37f;
    }
    uVar13 = (ulong)(bStack_380 >> 1);
    if (!bVar16) {
      uVar13 = CONCAT26(uStack_372,CONCAT15(uStack_373,CONCAT41(uStack_377,uStack_378)));
    }
    if (uVar13 == 0) {
      uStack_22c = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar13 & 3);
      if (uVar13 < 4) {
        uStack_22c = 0x811c9dc5;
        uVar14 = 0;
      }
      else {
        uStack_22c = 0x811c9dc5;
        uVar14 = 0;
        do {
          uStack_22c = ((int)*(char *)((long)puVar8 + uVar14 + 3) ^
                       ((int)*(char *)((long)puVar8 + uVar14 + 2) ^
                       ((int)*(char *)((long)puVar8 + uVar14 + 1) ^
                       ((int)*(char *)((long)puVar8 + uVar14) ^ uStack_22c) * 0x1000193) * 0x1000193
                       ) * 0x1000193) * 0x1000193;
          uVar14 = uVar14 + 4;
        } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
      }
      if (uVar9 != 0) {
        uVar13 = 0;
        do {
          uStack_22c = ((int)*(char *)((long)puVar8 + uVar13 + uVar14) ^ uStack_22c) * 0x1000193;
          uVar13 = uVar13 + 1;
        } while (uVar9 != uVar13);
      }
    }
    uStack_230 = 2;
    if ((cRam000000000f721b40 == '\0') && (iVar4 = func_0x04108328(0xf721b40), iVar4 != 0)) {
      func_0x0d68e4b0();
      func_0x0410844d(0xf721b40);
    }
    auStack_410[0] = uStack_22c;
    uStack_408 = 0;
    uStack_400 = 3;
    uStack_3f8 = 1;
    uStack_3f0 = 0;
    uStack_3e8 = &UNK_0d692560;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &UNK_0d68e2e0;
    puStack_3d0 = &UNK_0d692ae0;
    puStack_3c8 = &UNK_0d692af0;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    plStack_3b0 = (long *)0x0;
    func_0x048b05a0(&uStack_250,auStack_410);
    plVar7 = plStack_3b0;
    if (plStack_3b0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b0 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
        func_0x0412c2d0(plVar7);
      }
    }
    uStack_2c8 = uStack_240;
    uStack_2c4 = uStack_23c;
    uStack_2c0 = uStack_238;
    uStack_2bc = uStack_234;
    uStack_2d8 = uStack_250;
    uStack_2d0 = (long *)CONCAT44(uStack_244,uStack_248);
    func_0x0d6922f0(auStack_410,&uStack_2d8,&uStack_3a8);
    if (uStack_3f8._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x60);
      iVar4 = *piVar10;
      while (iVar4 != (int)uStack_3f8) {
        piVar10 = piVar10 + 0x16;
        iVar4 = *piVar10;
      }
      lVar6 = *(long *)(piVar10 + 0xc);
      while (lVar6 != uStack_408) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar6 = *(long *)(piVar10 + 0xc);
      }
code_r0x0d6a72df:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_3f8._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x48);
        iVar4 = *piVar10;
        while (iVar4 != (int)uStack_3f8) {
          piVar10 = piVar10 + 0x1a;
          iVar4 = *piVar10;
        }
        goto code_r0x0d6a72df;
      }
      if (uStack_3f8._4_4_ == 0) {
        puVar15 = (uint *)(CONCAT44(uStack_3fc,uStack_400) + 0x18);
        *puVar15 = *puVar15 | 0x90000;
      }
    }
    if ((char)uStack_220 == '\0') {
      func_0x0d692680(auStack_410,&uStack_258);
    }
    uVar11 = uStack_224;
    lVar6 = uStack_258;
    if ((cRam000000000f721b20 == '\0') && (iVar4 = func_0x04108328(0xf721b20), iVar4 != 0)) {
      func_0x0d68e3a0();
      func_0x0eee2f40(&UNK_048ae800,0xf721aa0,0xf53dab8);
      func_0x0410844d(0xf721b20);
    }
    plVar7 = (long *)(*(long *)(lVar6 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar6 + 0x20) - *(long *)(lVar6 + 0x18)) >> 3)
                             - 1U & *(uint *)(lRam000000000f721aa0 + 4)) * 8);
    do {
      lVar12 = *plVar7;
      if (lVar12 == -1) goto code_r0x0d6a7370;
      plVar7 = (long *)(*(long *)(lVar6 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(lVar6 + 0x30) + 8 + lVar12 * 0x18) !=
             *(uint *)(lRam000000000f721aa0 + 4));
    if (plVar7 == *(long **)(lVar6 + 0x38)) {
code_r0x0d6a7370:
      lVar6 = 0xf721aa0;
    }
    else {
      lVar6 = plVar7[2];
    }
    puVar2 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x28);
    for (puVar15 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x20);
        (puVar15 != puVar2 && (*puVar15 != uVar11)); puVar15 = puVar15 + 0xe) {
    }
    if ((puVar15 == puVar2) &&
       (cVar3 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012d00c7),
       cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_410[0] = auStack_410[0] & 0xffffff00;
    func_0x05d9c620(puVar15 + 2,&uStack_22c,&uStack_22c,auStack_410);
    uStack_2d8 = (long *)uStack_258;
    uStack_2d0 = uStack_250;
    uStack_2c8 = uStack_248;
    uStack_2c4 = uStack_244;
    uStack_2c0 = uStack_240;
    uStack_2bc = uStack_23c;
    uStack_2b8 = uStack_238;
    uStack_2b4 = uStack_234;
    uStack_2b0 = uStack_230;
    uStack_2ac = uStack_22c;
    uStack_2a8 = uStack_228;
    uStack_2a4 = uStack_224;
    uStack_2a0 = uStack_220;
    func_0x048b0bc0(&uStack_3a8);
    func_0x0d691f10(&uStack_3a8,&UNK_014873f2,0xf);
    bVar16 = (bStack_380 & 1) != 0;
    puVar8 = &uStack_37f;
    if (bVar16) {
      puVar8 = puStack_370;
    }
    uVar13 = (ulong)(bStack_380 >> 1);
    if (bVar16) {
      uVar13 = CONCAT26(uStack_372,CONCAT15(uStack_373,CONCAT41(uStack_377,uStack_378)));
    }
    if (uVar13 == 0) {
      uStack_2ac = 0x811c9dc5;
    }
    else {
      uVar9 = (ulong)((uint)uVar13 & 3);
      if (uVar13 < 4) {
        uStack_2ac = 0x811c9dc5;
        uVar14 = 0;
      }
      else {
        uStack_2ac = 0x811c9dc5;
        uVar14 = 0;
        do {
          uStack_2ac = ((int)*(char *)((long)puVar8 + uVar14 + 3) ^
                       ((int)*(char *)((long)puVar8 + uVar14 + 2) ^
                       ((int)*(char *)((long)puVar8 + uVar14 + 1) ^
                       ((int)*(char *)((long)puVar8 + uVar14) ^ uStack_2ac) * 0x1000193) * 0x1000193
                       ) * 0x1000193) * 0x1000193;
          uVar14 = uVar14 + 4;
        } while ((uVar13 & 0xfffffffffffffffc) != uVar14);
      }
      if (uVar9 != 0) {
        uVar13 = 0;
        do {
          uStack_2ac = ((int)*(char *)((long)puVar8 + uVar13 + uVar14) ^ uStack_2ac) * 0x1000193;
          uVar13 = uVar13 + 1;
        } while (uVar9 != uVar13);
      }
    }
    uStack_2b0 = 2;
    if ((cRam000000000f721b40 == '\0') && (iVar4 = func_0x04108328(0xf721b40), iVar4 != 0)) {
      func_0x0d68e4b0();
      func_0x0410844d(0xf721b40);
    }
    auStack_410[0] = uStack_2ac;
    uStack_408 = 0;
    uStack_400 = 3;
    uStack_3f8 = 1;
    uStack_3f0 = 0;
    uStack_3e8 = &UNK_0d692560;
    puStack_3e0 = &SUB_048b06d0;
    puStack_3d8 = &UNK_0d68e2e0;
    puStack_3d0 = &UNK_0d692b40;
    puStack_3c8 = &UNK_0d692b50;
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    plStack_3b0 = (long *)0x0;
    func_0x048b05a0(&uStack_2d0,auStack_410);
    plVar7 = plStack_3b0;
    if (plStack_3b0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_3b0 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
        func_0x0412c2d0(plVar7);
      }
    }
    uStack_48 = uStack_2c0;
    uStack_44 = uStack_2bc;
    uStack_40 = uStack_2b8;
    uStack_3c = uStack_2b4;
    uStack_58 = (undefined4)uStack_2d0;
    uStack_54 = uStack_2d0._4_4_;
    uStack_50 = uStack_2c8;
    uStack_4c = uStack_2c4;
    func_0x0d6922f0(auStack_410,&uStack_58,&uStack_3a8);
    if (uStack_3f8._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x60);
      iVar4 = *piVar10;
      while (iVar4 != (int)uStack_3f8) {
        piVar10 = piVar10 + 0x16;
        iVar4 = *piVar10;
      }
      lVar6 = *(long *)(piVar10 + 0xc);
      while (lVar6 != uStack_408) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar6 = *(long *)(piVar10 + 0xc);
      }
code_r0x0d6a76df:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_3f8._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x48);
        iVar4 = *piVar10;
        while (iVar4 != (int)uStack_3f8) {
          piVar10 = piVar10 + 0x1a;
          iVar4 = *piVar10;
        }
        goto code_r0x0d6a76df;
      }
      if (uStack_3f8._4_4_ == 0) {
        puVar15 = (uint *)(CONCAT44(uStack_3fc,uStack_400) + 0x18);
        *puVar15 = *puVar15 | 0x90000;
      }
    }
    if ((char)uStack_2a0 == '\0') {
      func_0x0d692680(auStack_410,&uStack_2d8);
    }
    uVar11 = uStack_2a4;
    lVar6 = (long)uStack_2d8;
    if ((cRam000000000f721b20 == '\0') && (iVar4 = func_0x04108328(0xf721b20), iVar4 != 0)) {
      func_0x0d68e3a0();
      func_0x0eee2f40(&UNK_048ae800,0xf721aa0,0xf53dab8);
      func_0x0410844d(0xf721b20);
    }
    plVar7 = (long *)(*(long *)(lVar6 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar6 + 0x20) - *(long *)(lVar6 + 0x18)) >> 3)
                             - 1U & *(uint *)(lRam000000000f721aa0 + 4)) * 8);
    do {
      lVar12 = *plVar7;
      if (lVar12 == -1) goto code_r0x0d6a7770;
      plVar7 = (long *)(*(long *)(lVar6 + 0x30) + lVar12 * 0x18);
    } while (*(uint *)(*(long *)(lVar6 + 0x30) + 8 + lVar12 * 0x18) !=
             *(uint *)(lRam000000000f721aa0 + 4));
    if (plVar7 == *(long **)(lVar6 + 0x38)) {
code_r0x0d6a7770:
      lVar6 = 0xf721aa0;
    }
    else {
      lVar6 = plVar7[2];
    }
    puVar2 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x28);
    for (puVar15 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x20);
        (puVar15 != puVar2 && (*puVar15 != uVar11)); puVar15 = puVar15 + 0xe) {
    }
    if ((puVar15 == puVar2) &&
       (cVar3 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_012d00c7),
       cVar3 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_410[0] = auStack_410[0] & 0xffffff00;
    func_0x05d9c620(puVar15 + 2,&uStack_2ac,&uStack_2ac,auStack_410);
    func_0x048b0bc0(&uStack_3a8);
  }
  if ((cRam000000000f721bd8 == '\0') && (iVar4 = func_0x04108328(0xf721bd8), iVar4 != 0)) {
    func_0x0d692c60();
    func_0x0eee2f40(&UNK_048ae800,0xf721b58,0xf53dab8);
    func_0x0410844d(0xf721bd8);
  }
  plVar7 = (long *)(lRam000000000f721a48 +
                   (ulong)((int)((ulong)(lRam000000000f721a50 - lRam000000000f721a48) >> 3) - 1U &
                          *(uint *)(lRam000000000f721b58 + 4)) * 8);
  do {
    lVar6 = *plVar7;
    if (lVar6 == -1) goto code_r0x0d6a7873;
    plVar7 = (long *)(lRam000000000f721a60 + lVar6 * 0x18);
  } while (*(uint *)(lRam000000000f721a60 + 8 + lVar6 * 0x18) != *(uint *)(lRam000000000f721b58 + 4)
          );
  if (plVar7 == plRam000000000f721a68) {
code_r0x0d6a7873:
    lVar6 = 0xf721b58;
    if (iRam000000000f721bb8 != -0x2b3da790) goto code_r0x0d6a78df;
code_r0x0d6a78a1:
    lVar6 = *(long *)(lVar6 + 0x68);
    if (lVar6 == 0) goto code_r0x0d6a78df;
    bVar16 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar12 = lVar6 + 9;
    if (bVar16) {
      lVar12 = *(long *)(lVar6 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar16) {
      uVar13 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x0d693550(&uStack_298,lVar12,uVar13);
  }
  else {
    lVar6 = plVar7[2];
    if (*(int *)(lVar6 + 0x60) == -0x2b3da790) goto code_r0x0d6a78a1;
code_r0x0d6a78df:
    func_0x0d693550(&uStack_298,0,0);
  }
  if ((char)uStack_268 != '\0') goto code_r0x0d6a7ffe;
  uStack_270 = 0x1e0551d400000002;
  uStack_348 = 0;
  uStack_340 = 0;
  uStack_358 = 0;
  uStack_350 = 0;
  uStack_368 = 0;
  uStack_360 = 0;
  uStack_378 = 0;
  uStack_377 = 0;
  uStack_373 = 0;
  uStack_372 = 0;
  puStack_370 = (undefined7 *)0x0;
  pcStack_388 = (code *)0x0;
  bStack_380 = 0;
  uStack_37f = 0;
  uStack_398 = (long *)0x0;
  uStack_390 = (long *)0x0;
  uStack_3a8 = (long *)0x0;
  plStack_3a0 = (long *)0x0;
  uStack_338 = 0x3f600000;
  func_0x048afb10(&uStack_368,8);
  uStack_310 = 0;
  uStack_308 = 0;
  uStack_320 = 0;
  uStack_318 = 0;
  uStack_330 = 0;
  uStack_328 = 0;
  uStack_300 = 0xff00;
  uStack_2fc = 0;
  uStack_2f8 = 0;
  uStack_2f4 = 0;
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar5 = &UNK_0ef46ce8;
  if (uStack_3a8 != (long *)0x0) {
    lVar6 = *uStack_3a8;
    uStack_3a8 = puVar5;
    (**(code **)(lVar6 + 8))();
    puVar5 = uStack_3a8;
  }
  uStack_3a8 = puVar5;
  if ((bStack_380 & 1) != 0) {
    func_0x0412a280(puStack_370,CONCAT71(uStack_37f,bStack_380) & 0xfffffffffffffffe);
  }
  bStack_380 = 0x18;
  uStack_37f = 0x6e5f636967616d;
  uStack_378 = 0x75;
  uStack_377 = 0x7265626d;
  uStack_373 = 0;
  if ((cRam000000000f721bf8 == '\0') && (iVar4 = func_0x04108328(0xf721bf8), iVar4 != 0)) {
    func_0x0d692d70();
    func_0x0410844d(0xf721bf8);
  }
  auStack_410[0] = uStack_270._4_4_;
  uStack_408 = 0;
  uStack_400 = 3;
  uStack_3f8 = 1;
  uStack_3f0 = 0;
  uStack_3e8 = &UNK_0490ce30;
  puStack_3e0 = &SUB_048b06d0;
  puStack_3d8 = &SUB_0490cb20;
  puStack_3d0 = &UNK_0d694370;
  puStack_3c8 = &UNK_0d694380;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  plStack_3b0 = (long *)0x0;
  func_0x048b05a0(&uStack_290,auStack_410);
  plVar7 = plStack_3b0;
  if (plStack_3b0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_3b0 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
      func_0x0412c2d0(plVar7);
    }
  }
  uStack_2c8 = uStack_280;
  uStack_2c4 = uStack_27c;
  uStack_2c0 = uStack_278;
  uStack_2bc = uStack_274;
  uStack_2d8 = (long *)CONCAT44(uStack_28c,uStack_290);
  uStack_2d0 = (long *)CONCAT44(uStack_284,uStack_288);
  func_0x0d694100(auStack_410,&uStack_2d8,&uStack_3a8);
  if (uStack_3f8._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x60);
    iVar4 = *piVar10;
    while (iVar4 != (int)uStack_3f8) {
      piVar10 = piVar10 + 0x16;
      iVar4 = *piVar10;
    }
    lVar6 = *(long *)(piVar10 + 0xc);
    while (lVar6 != uStack_408) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar6 = *(long *)(piVar10 + 0xc);
    }
code_r0x0d6a7b7f:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
  }
  else {
    if (uStack_3f8._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_3fc,uStack_400) + 0x78) + 0x48);
      iVar4 = *piVar10;
      while (iVar4 != (int)uStack_3f8) {
        piVar10 = piVar10 + 0x1a;
        iVar4 = *piVar10;
      }
      goto code_r0x0d6a7b7f;
    }
    if (uStack_3f8._4_4_ == 0) {
      puVar15 = (uint *)(CONCAT44(uStack_3fc,uStack_400) + 0x18);
      *puVar15 = *puVar15 | 0x90000;
    }
  }
  uStack_258 = CONCAT44(uStack_294,uStack_298);
  uStack_250 = (long *)CONCAT44(uStack_28c,uStack_290);
  uStack_248 = uStack_288;
  uStack_244 = uStack_284;
  uStack_240 = uStack_280;
  uStack_23c = uStack_27c;
  uStack_238 = uStack_278;
  uStack_234 = uStack_274;
  uStack_230 = (undefined4)uStack_270;
  uStack_22c = uStack_270._4_4_;
  uStack_228 = CONCAT31(uStack_228._1_3_,(char)uStack_268);
  func_0x048b0bc0(&uStack_3a8);
  func_0x0d693b50(&uStack_3a8,uStack_258 + 0x18);
  if (uStack_390._4_4_ == 2) {
    piVar10 = *(int **)(uStack_398[0xf] + 0x60);
    iVar4 = *piVar10;
    while (iVar4 != (int)uStack_390) {
      piVar10 = piVar10 + 0x16;
      iVar4 = *piVar10;
    }
    plVar7 = *(long **)(piVar10 + 0xc);
    while (plVar7 != plStack_3a0) {
      piVar10 = *(int **)(piVar10 + 0xe);
      plVar7 = *(long **)(piVar10 + 0xc);
    }
code_r0x0d6a7c3f:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else {
    if (uStack_390._4_4_ == 1) {
      piVar10 = *(int **)(uStack_398[0xf] + 0x48);
      iVar4 = *piVar10;
      while (iVar4 != (int)uStack_390) {
        piVar10 = piVar10 + 0x1a;
        iVar4 = *piVar10;
      }
      goto code_r0x0d6a7c3f;
    }
    if (uStack_390._4_4_ == 0) {
      *(uint *)(uStack_398 + 3) = *(uint *)(uStack_398 + 3) | 0x40000;
    }
  }
  func_0x0d6943d0(&uStack_3a8,&uStack_258,&UNK_013236a8,7);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar7 = (long)&UNK_0f47d890;
  if (uStack_390 != (long *)0x0) {
    lVar6 = *uStack_390;
    uStack_390 = plVar7;
    (**(code **)(lVar6 + 8))();
    plVar7 = uStack_390;
  }
  uStack_390 = plVar7;
  auStack_410[0] = (uint)uStack_398;
  uStack_408 = 0;
  uStack_400 = 0;
  uStack_3f8 = 1;
  uStack_3f0 = 0;
  uStack_3e8 = &UNK_0d6953e0;
  puStack_3e0 = &SUB_048b06d0;
  puStack_3d8 = &UNK_0d6950f0;
  puStack_3d0 = &UNK_0d6954a0;
  puStack_3c8 = &UNK_0d695810;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  plStack_3b0 = (long *)0x0;
  func_0x048b05a0(plStack_3a0,auStack_410);
  plVar7 = plStack_3b0;
  if (plStack_3b0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_3b0 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x0d694670(&uStack_3a8);
  uStack_2a8 = CONCAT31(uStack_2a8._1_3_,(undefined1)uStack_228);
  uStack_2b8 = uStack_238;
  uStack_2b4 = uStack_234;
  uStack_2b0 = uStack_230;
  uStack_2ac = uStack_22c;
  uStack_2c8 = uStack_248;
  uStack_2c4 = uStack_244;
  uStack_2c0 = uStack_240;
  uStack_2bc = uStack_23c;
  uStack_2d8 = (long *)uStack_258;
  uStack_2d0 = uStack_250;
  func_0x048b0bc0(&uStack_390);
  func_0x0d693b50(&uStack_3a8,(long)uStack_2d8 + 0x18);
  if (uStack_390._4_4_ == 2) {
    piVar10 = *(int **)(uStack_398[0xf] + 0x60);
    iVar4 = *piVar10;
    while (iVar4 != (int)uStack_390) {
      piVar10 = piVar10 + 0x16;
      iVar4 = *piVar10;
    }
    plVar7 = *(long **)(piVar10 + 0xc);
    while (plVar7 != plStack_3a0) {
      piVar10 = *(int **)(piVar10 + 0xe);
      plVar7 = *(long **)(piVar10 + 0xc);
    }
code_r0x0d6a7ecf:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
  }
  else {
    if (uStack_390._4_4_ == 1) {
      piVar10 = *(int **)(uStack_398[0xf] + 0x48);
      iVar4 = *piVar10;
      while (iVar4 != (int)uStack_390) {
        piVar10 = piVar10 + 0x1a;
        iVar4 = *piVar10;
      }
      goto code_r0x0d6a7ecf;
    }
    if (uStack_390._4_4_ == 0) {
      *(uint *)(uStack_398 + 3) = *(uint *)(uStack_398 + 3) | 0x40000;
    }
  }
  func_0x0d6943d0(&uStack_3a8,&uStack_2d8,&UNK_01391889,8);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar7 = (long)&UNK_0f47d7c8;
  if (uStack_390 != (long *)0x0) {
    lVar6 = *uStack_390;
    uStack_390 = plVar7;
    (**(code **)(lVar6 + 8))();
    plVar7 = uStack_390;
  }
  uStack_390 = plVar7;
  auStack_410[0] = (uint)uStack_398;
  uStack_408 = 0;
  uStack_400 = 0;
  uStack_3f8 = 1;
  uStack_3f0 = 0;
  uStack_3e8 = &UNK_0d692560;
  puStack_3e0 = &SUB_048b06d0;
  puStack_3d8 = &UNK_0d68e2e0;
  puStack_3d0 = &UNK_0d695c80;
  puStack_3c8 = &UNK_0d695de0;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  plStack_3b0 = (long *)0x0;
  func_0x048b05a0(plStack_3a0,auStack_410);
  plVar7 = plStack_3b0;
  if (plStack_3b0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_3b0 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x0d694670(&uStack_3a8);
  func_0x048b0bc0(&uStack_390);
code_r0x0d6a7ffe:
  func_0x0eee2f40(&SUB_04904f60,0xf721a30,0xf53dab8);
  return;
}


