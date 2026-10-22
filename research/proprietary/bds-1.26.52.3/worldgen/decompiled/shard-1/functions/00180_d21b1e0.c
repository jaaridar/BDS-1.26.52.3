/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd31b1e0 (ELF vaddr 0xd21b1e0)
 * Label: caller-of-callee
 * Body:  [[0d31b1e0, 0d31bfcd] [0d31bfd0, 0d31c060] [0d31c070, 0d31c0ea] [0d31c0f0, 0d31c0fe] [0d31c100, 0d31c44b] [0d31c450, 0d31c52a] [0d31c530, 0d31c58a] [0d31c590, 0d31c5ad] [0d31c5b0, 0d31c6d2] [0d31c6e0, 0d31c703] [0d31c710, 0d31c772] [0d31c780, 0d31cd80] [0d31cd90, 0d31cff6] [0d31d000, 0d31d226] [0d31d230, 0d31d3fb] [0d31d400, 0d31d421] [0d31d430, 0d31d506] [0d31d510, 0d31d598] [0d31d5a0, 0d31d689] [0d31d690, 0d31da40] [0d31da50, 0d31da7e] [0d31da80, 0d31e68a] [0d31e690, 0d31e735] [0d31e740, 0d31e854] [0d31e860, 0d31ea99] [0d31eaa0, 0d31ed44] [0d31ed50, 0d31ef4c] [0d31f02b, 0d31f06c] [0d31f1ea, 0d31f1fc] [0d31f249, 0d31f3f4]]
 * Ghidra: FUN_0d31b1e0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_0d31b1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5,long param_6,undefined8 *param_7,long *param_8)

{
  undefined8 ****ppppuVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *****pppppuVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  long *plVar9;
  char cVar10;
  char cVar11;
  undefined1 uVar12;
  byte bVar13;
  undefined4 uVar14;
  undefined8 *******pppppppuVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 ******ppppppuVar19;
  undefined8 *****pppppuVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  long lVar27;
  long *plVar28;
  int *piVar29;
  uint uVar30;
  int iVar31;
  byte *pbVar32;
  undefined8 ******ppppppuVar33;
  ulong uVar34;
  undefined8 *******pppppppuVar35;
  undefined8 uVar36;
  undefined8 *******pppppppuVar37;
  undefined8 ******ppppppuVar38;
  long lVar39;
  undefined8 ******ppppppuVar40;
  ulong uVar41;
  long lVar42;
  int iVar43;
  undefined8 *******unaff_R12;
  int iVar44;
  undefined8 *******pppppppuVar45;
  byte *pbVar46;
  undefined8 *******pppppppuVar47;
  byte *pbVar48;
  int iVar49;
  undefined8 *******pppppppuVar50;
  undefined8 *puVar51;
  uint uVar52;
  int *piVar53;
  bool bVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float fVar58;
  uint uVar59;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float fVar60;
  uint uVar61;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  undefined8 *******pppppppuStack_448;
  float fStack_438;
  ulong uStack_430;
  undefined8 ******ppppppuStack_428;
  undefined8 ******ppppppuStack_410;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  undefined8 *******pppppppuStack_3b8;
  undefined8 *******pppppppuStack_3b0;
  undefined8 uStack_3a8;
  float fStack_3a0;
  float fStack_39c;
  undefined8 ******ppppppuStack_398;
  undefined8 ******ppppppuStack_390;
  undefined8 uStack_388;
  float fStack_380;
  float fStack_37c;
  int iStack_378;
  int iStack_374;
  int iStack_370;
  int iStack_36c;
  undefined8 *******pppppppuStack_368;
  undefined8 *******pppppppuStack_360;
  long lStack_358;
  undefined8 ******ppppppuStack_350;
  undefined8 uStack_348;
  int iStack_340;
  int iStack_33c;
  int iStack_338;
  int iStack_334;
  undefined8 *******pppppppuStack_330;
  undefined8 *******pppppppuStack_328;
  undefined8 *******pppppppuStack_320;
  long lStack_318;
  undefined1 auStack_308 [4];
  undefined4 uStack_304;
  long *plStack_300;
  long lStack_2f8;
  undefined8 ******ppppppuStack_2f0;
  ulong uStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  uint uStack_2c8;
  int iStack_2c4;
  uint uStack_2c0;
  int iStack_2bc;
  undefined8 uStack_2b8;
  float fStack_2b0;
  float fStack_2ac;
  undefined8 *******pppppppuStack_2a0;
  undefined8 ******ppppppuStack_298;
  undefined8 ******ppppppuStack_290;
  undefined8 uStack_288;
  int iStack_280;
  int iStack_27c;
  int iStack_278;
  int iStack_274;
  int iStack_270;
  undefined4 uStack_26c;
  uint uStack_268;
  int iStack_264;
  int iStack_260;
  undefined4 uStack_25c;
  ulong uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 *******pppppppuStack_240;
  long lStack_238;
  undefined8 ******ppppppuStack_230;
  undefined8 ******ppppppuStack_228;
  long lStack_220;
  long *plStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  uint uStack_1f8;
  undefined8 *******pppppppuStack_1f0;
  undefined8 *******pppppppuStack_1e8;
  ulong *puStack_1e0;
  byte *pbStack_1d8;
  byte *pbStack_1d0;
  long lStack_1c8;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  byte *pbStack_1a0;
  long lStack_198;
  long lStack_190;
  byte *pbStack_188;
  long lStack_180;
  long lStack_178;
  byte *pbStack_170;
  long lStack_168;
  undefined8 *******pppppppuStack_160;
  undefined8 *******pppppppuStack_158;
  undefined8 *******pppppppuStack_150;
  code *pcStack_148;
  code *pcStack_140;
  undefined8 *******pppppppuStack_138;
  undefined8 *******pppppppuStack_130;
  undefined8 *******pppppppuStack_128;
  undefined8 *******pppppppuStack_120;
  undefined8 *******pppppppuStack_118;
  undefined8 *******pppppppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  undefined8 *puStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  uint uStack_b4;
  undefined8 ******ppppppuStack_b0;
  long lStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 *******pppppppuStack_98;
  undefined8 ******ppppppuStack_90;
  undefined8 *******pppppppuStack_88;
  undefined8 *******pppppppuStack_80;
  undefined8 ******ppppppuStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 *******pppppppuStack_60;
  undefined8 *puStack_58;
  undefined8 *******pppppppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  uVar61 = (uint)((ulong)param_4 >> 0x20);
  uVar59 = (uint)((ulong)param_3 >> 0x20);
  uStack_1f8 = *(uint *)(param_6 + 0xb8);
  uVar22 = (ulong)uStack_1f8;
  if ((int)uStack_1f8 < 1) {
    param_5[4] = 0;
    param_5[5] = 0;
    param_5[2] = 0;
    param_5[3] = 0;
    *param_5 = 0;
    param_5[1] = 0;
    return param_5;
  }
  lVar39 = (long)(int)*param_8;
  lVar42 = *param_8 >> 0x20;
  lVar27 = (long)*(int *)(param_6 + 0xbc);
  pppppppuStack_360 = (undefined8 *******)(lVar39 - lVar27);
  if ((long)pppppppuStack_360 < -0x7fffffff) {
    pppppppuStack_360 = (undefined8 *******)0xffffffff80000000;
  }
  ppppppuStack_428 = (undefined8 ******)(lVar39 + lVar27);
  if (0x7ffffffd < (long)ppppppuStack_428) {
    ppppppuStack_428 = (undefined8 ******)0x7ffffffe;
  }
  uVar41 = (long)*(short *)(param_6 + 0xcc) + (ulong)*(uint *)(param_6 + 200);
  ppppppuStack_390 =
       (undefined8 ******)((long)*(short *)(param_6 + 0xce) - (ulong)*(uint *)(param_6 + 0xc4));
  ppppppuVar40 = (undefined8 ******)(lVar42 + *(int *)(param_6 + 0xc0) + 1);
  uStack_430 = lVar42 - *(int *)(param_6 + 0xc0);
  if ((long)uStack_430 <= (long)uVar41) {
    uStack_430 = uVar41;
  }
  if ((long)ppppppuVar40 <= (long)ppppppuStack_390) {
    ppppppuStack_390 = ppppppuVar40;
  }
  uStack_388 = (undefined8 *******)((int)param_8[1] - lVar27);
  if ((long)uStack_388 < -0x7fffffff) {
    uStack_388 = (undefined8 *******)0xffffffff80000000;
  }
  pppppppuStack_3b0 = (undefined8 *******)(lVar27 + (int)param_8[1]);
  if (0x7ffffffd < (long)pppppppuStack_3b0) {
    pppppppuStack_3b0 = (undefined8 *******)0x7ffffffe;
  }
  plStack_218 = param_7 + 1;
  uStack_210 = param_7[10];
  uStack_208 = *param_7;
  puStack_200 = (undefined8 *)(param_6 + 0xd8);
  pppppppuStack_1f0 = *(undefined8 ********)(param_6 + 0x10);
  pppppppuStack_1e8 = *(undefined8 ********)(param_6 + 0x18);
  puStack_1e0 = *(ulong **)(param_6 + 0x20);
  *(undefined8 *)(param_6 + 0x10) = 0;
  *(undefined8 *)(param_6 + 0x18) = 0;
  *(undefined8 *)(param_6 + 0x20) = 0;
  pbStack_1d8 = *(byte **)(param_6 + 0x28);
  pbStack_1d0 = *(byte **)(param_6 + 0x30);
  lStack_1c8 = *(long *)(param_6 + 0x38);
  *(undefined8 *)(param_6 + 0x28) = 0;
  *(undefined8 *)(param_6 + 0x30) = 0;
  *(undefined8 *)(param_6 + 0x38) = 0;
  pbStack_1c0 = *(byte **)(param_6 + 0x40);
  pbStack_1b8 = *(byte **)(param_6 + 0x48);
  lStack_1b0 = *(long *)(param_6 + 0x50);
  *(undefined8 *)(param_6 + 0x40) = 0;
  *(undefined8 *)(param_6 + 0x48) = 0;
  *(undefined8 *)(param_6 + 0x50) = 0;
  lStack_1a8 = *(long *)(param_6 + 0x58);
  pbStack_1a0 = *(byte **)(param_6 + 0x60);
  lStack_198 = *(long *)(param_6 + 0x68);
  *(undefined8 *)(param_6 + 0x58) = 0;
  *(undefined8 *)(param_6 + 0x60) = 0;
  *(undefined8 *)(param_6 + 0x68) = 0;
  lStack_190 = *(long *)(param_6 + 0x70);
  pbStack_188 = *(byte **)(param_6 + 0x78);
  lStack_180 = *(long *)(param_6 + 0x80);
  *(undefined8 *)(param_6 + 0x70) = 0;
  *(undefined8 *)(param_6 + 0x78) = 0;
  *(undefined8 *)(param_6 + 0x80) = 0;
  lStack_178 = *(long *)(param_6 + 0x88);
  pbStack_170 = *(byte **)(param_6 + 0x90);
  lStack_168 = *(long *)(param_6 + 0x98);
  *(undefined8 *)(param_6 + 0x88) = 0;
  *(undefined8 *)(param_6 + 0x90) = 0;
  *(undefined8 *)(param_6 + 0x98) = 0;
  pppppppuStack_160 = *(undefined8 ********)(param_6 + 0xa0);
  pppppppuStack_158 = *(undefined8 ********)(param_6 + 0xa8);
  pppppppuStack_150 = *(undefined8 ********)(param_6 + 0xb0);
  *(undefined8 *)(param_6 + 0xa0) = 0;
  *(undefined8 *)(param_6 + 0xa8) = 0;
  *(undefined8 *)(param_6 + 0xb0) = 0;
  pcStack_148 = (code *)&UNK_0d2fdf20;
  pcStack_140 = (code *)&UNK_0d2fdf30;
  pppppppuStack_138 = (undefined8 *******)0x0;
  pppppppuStack_130 = (undefined8 *******)0x0;
  pppppppuStack_128 = (undefined8 *******)0x0;
  pppppppuStack_120 = (undefined8 *******)0x0;
  pppppppuStack_118 = (undefined8 *******)0x0;
  pppppppuStack_110 = (undefined8 *******)0x0;
  uStack_108 = 0;
  uStack_100 = 0;
  if (*(char *)(param_6 + 0xd2) == '\x01') {
    pcStack_148 = (code *)&UNK_0d2fda80;
    pcStack_140 = (code *)&UNK_0d2fdec0;
  }
  pppppppuStack_328 = &pppppppuStack_138;
  lVar27 = uVar22 * 0x90;
  puStack_e0 = param_5;
  lStack_d8 = param_6;
  pppppppuVar15 = (undefined8 *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar27);
  if (pppppppuVar15 == (undefined8 *******)0x0) {
    func_0x0eec74c0(lVar27,0);
  }
  iStack_338 = (int)pppppppuVar15;
  iStack_334 = (int)((ulong)pppppppuVar15 >> 0x20);
  pppppppuVar45 = pppppppuVar15 + uVar22 * 0x12;
  uStack_348 = pppppppuVar15;
  iStack_340 = iStack_338;
  iStack_33c = iStack_334;
  pppppppuStack_330 = pppppppuVar45;
  func_0x0d30a410(&pppppppuStack_138,0,0,pppppppuVar15);
  pppppppuVar37 = pppppppuStack_138;
  pppppppuStack_130 = pppppppuVar15;
  if (pppppppuStack_138 != (undefined8 *******)0x0) {
    lVar27 = (long)pppppppuStack_128 - (long)pppppppuStack_138;
    pppppppuStack_138 = pppppppuVar15;
    pppppppuStack_128 = pppppppuVar45;
    func_0x0412a280(pppppppuVar37,lVar27);
    pppppppuVar15 = pppppppuStack_138;
    pppppppuVar45 = pppppppuStack_128;
  }
  pppppppuStack_128 = pppppppuVar45;
  pppppppuStack_138 = pppppppuVar15;
  pppppppuStack_448 = pppppppuStack_1e8;
  pppppppuVar15 = pppppppuStack_1f0;
  uStack_3a8 = (undefined8 *******)(long)*(int *)(lStack_d8 + 0xb8);
  piVar29 = (int *)((long)uStack_3a8 * 3);
  ppppppuVar40 = (undefined8 ******)((long)puStack_1e0 - (long)pppppppuStack_1f0);
  if (piVar29 <= (int *)((long)ppppppuVar40 >> 3)) goto LAB_0d31b62a;
  if (-1 < *(int *)(lStack_d8 + 0xb8)) {
    ppppppuVar33 = (undefined8 ******)((long)uStack_3a8 * 0x18);
    puVar16 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,ppppppuVar33);
    if (puVar16 == (ulong *)0x0) goto LAB_0d31ee09;
    do {
      unaff_R12 = (undefined8 *******)((long)pppppppuStack_448 - (long)pppppppuVar15);
      pppppppuVar45 = (undefined8 *******)((long)puVar16 + (long)unaff_R12);
      pppppppuVar37 = pppppppuVar45 + -((long)unaff_R12 >> 3);
      memcpy(pppppppuVar37,pppppppuVar15,unaff_R12);
      pppppppuStack_1f0 = pppppppuVar37;
      pppppppuStack_1e8 = pppppppuVar45;
      puStack_1e0 = puVar16 + (long)piVar29;
      if (pppppppuVar15 != (undefined8 *******)0x0) {
        func_0x0412a280(pppppppuVar15,ppppppuVar40);
      }
LAB_0d31b62a:
      pbVar32 = pbStack_1d0;
      pbVar48 = pbStack_1d8;
      lVar27 = lStack_1c8 - (long)pbStack_1d8;
      if ((int *)(lVar27 >> 2) < piVar29) {
        if ((int)uStack_3a8 < 0) goto LAB_0d31eebd;
        lVar39 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)piVar29 * 4);
        if (lVar39 == 0) {
          func_0x0eec74c0((long)piVar29 * 4,0);
        }
        unaff_R12 = (undefined8 *******)(pbVar32 + -(long)pbVar48);
        lVar42 = (long)piVar29 * 4 + lVar39;
        pbVar46 = (byte *)(lVar39 + (long)unaff_R12);
        pbVar32 = pbVar46 + ((long)unaff_R12 >> 2) * -4;
        memcpy(pbVar32,pbVar48,unaff_R12);
        pbStack_1d8 = pbVar32;
        pbStack_1d0 = pbVar46;
        lStack_1c8 = lVar42;
        if (pbVar48 != (byte *)0x0) {
          func_0x0412a280(pbVar48,lVar27);
        }
      }
      pbVar32 = pbStack_1b8;
      pbVar48 = pbStack_1c0;
      lVar27 = lStack_1b0 - (long)pbStack_1c0;
      if ((int *)(lVar27 >> 2) < piVar29) {
        if ((int)uStack_3a8 < 0) goto LAB_0d31eebd;
        lVar39 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)piVar29 * 4);
        if (lVar39 == 0) {
          func_0x0eec74c0((long)piVar29 * 4,0);
        }
        unaff_R12 = (undefined8 *******)(pbVar32 + -(long)pbVar48);
        lVar42 = (long)piVar29 * 4 + lVar39;
        pbVar46 = (byte *)(lVar39 + (long)unaff_R12);
        pbVar32 = pbVar46 + ((long)unaff_R12 >> 2) * -4;
        memcpy(pbVar32,pbVar48,unaff_R12);
        pbStack_1c0 = pbVar32;
        pbStack_1b8 = pbVar46;
        lStack_1b0 = lVar42;
        if (pbVar48 != (byte *)0x0) {
          func_0x0412a280(pbVar48,lVar27);
        }
      }
      pbVar48 = pbStack_1a0;
      lVar27 = lStack_1a8;
      piVar53 = (int *)(lStack_198 - lStack_1a8);
      if (piVar53 < piVar29) {
        if ((int)uStack_3a8 < 0) goto LAB_0d31eecc;
        lVar39 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,piVar29);
        if (lVar39 == 0) {
          func_0x0eec74c0(piVar29,0);
        }
        unaff_R12 = (undefined8 *******)(pbVar48 + -lVar27);
        memcpy(lVar39,lVar27,unaff_R12);
        lStack_1a8 = lVar39;
        pbStack_1a0 = (byte *)((long)unaff_R12 + lVar39);
        lStack_198 = lVar39 + (long)piVar29;
        if (lVar27 != 0) {
          func_0x0412a280(lVar27,piVar53);
        }
      }
      pbVar48 = pbStack_188;
      lVar27 = lStack_190;
      lVar39 = lStack_180 - lStack_190;
      if ((int *)((lVar39 >> 2) * -0x5555555555555555) < piVar29) {
        if ((int)uStack_3a8 < 0) goto LAB_0d31eed1;
        lVar42 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)piVar29 * 0xc);
        if (lVar42 == 0) {
          func_0x0eec74c0((long)piVar29 * 0xc,0);
        }
        unaff_R12 = (undefined8 *******)(pbVar48 + -lVar27);
        lVar17 = (long)piVar29 * 0xc + lVar42;
        memcpy(lVar42,lVar27,unaff_R12);
        lStack_190 = lVar42;
        pbStack_188 = (byte *)(lVar42 + (long)unaff_R12);
        lStack_180 = lVar17;
        if (lVar27 != 0) {
          func_0x0412a280(lVar27,lVar39);
        }
      }
      pbVar48 = pbStack_170;
      lVar27 = lStack_178;
      lVar39 = lStack_168 - lStack_178;
      if ((int *)((lVar39 >> 3) * -0x5555555555555555) < piVar29) {
        if ((int)uStack_3a8 < 0) goto LAB_0d31eed6;
        lVar42 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)piVar29 * 0x18);
        if (lVar42 == 0) {
          func_0x0eec74c0((long)piVar29 * 0x18,0);
        }
        unaff_R12 = (undefined8 *******)(pbVar48 + -lVar27);
        lVar17 = (long)piVar29 * 0x18 + lVar42;
        memcpy(lVar42,lVar27,unaff_R12);
        lStack_178 = lVar42;
        pbStack_170 = (byte *)(lVar42 + (long)unaff_R12);
        lStack_168 = lVar17;
        if (lVar27 != 0) {
          func_0x0412a280(lVar27,lVar39);
        }
      }
      pppppppuVar37 = pppppppuStack_158;
      pppppppuVar15 = pppppppuStack_160;
      lVar27 = (long)pppppppuStack_150 - (long)pppppppuStack_160;
      if ((int *)((lVar27 >> 3) * -0x5555555555555555) < piVar29) {
        if ((int)uStack_3a8 < 0) goto LAB_0d31eedb;
        unaff_R12 = (undefined8 *******)
                    (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)piVar29 * 0x18);
        if (unaff_R12 == (undefined8 *******)0x0) {
          func_0x0eec74c0((long)piVar29 * 0x18,0);
        }
        pppppppuStack_158 =
             (undefined8 *******)(((long)pppppppuVar37 - (long)pppppppuVar15) + (long)unaff_R12);
        pppppppuStack_150 = unaff_R12 + (long)piVar29 * 3;
        if (pppppppuVar15 != pppppppuVar37) {
          lVar39 = 0;
          do {
            pbVar48 = (byte *)((long)unaff_R12 + lVar39);
            pbVar48[0] = 0;
            pbVar48[1] = 0;
            pbVar48[2] = 0;
            pbVar48[3] = 0;
            pbVar48[4] = 0;
            pbVar48[5] = 0;
            pbVar48[6] = 0;
            pbVar48[7] = 0;
            pbVar48[8] = 0;
            pbVar48[9] = 0;
            pbVar48[10] = 0;
            pbVar48[0xb] = 0;
            pbVar48[0xc] = 0;
            pbVar48[0xd] = 0;
            pbVar48[0xe] = 0;
            pbVar48[0xf] = 0;
            pbVar48 = (byte *)((long)unaff_R12 + lVar39 + 0x10);
            pbVar48[0] = 0;
            pbVar48[1] = 0;
            pbVar48[2] = 0;
            pbVar48[3] = 0;
            pbVar48[4] = 0;
            pbVar48[5] = 0;
            pbVar48[6] = 0;
            pbVar48[7] = 0;
            *(undefined8 *)((long)unaff_R12 + lVar39) =
                 *(undefined8 *)((long)pppppppuVar15 + lVar39);
            *(undefined4 *)((long)unaff_R12 + lVar39 + 8) =
                 *(undefined4 *)((long)pppppppuVar15 + lVar39 + 8);
            *(undefined8 *)((long)unaff_R12 + lVar39 + 0xc) =
                 *(undefined8 *)((long)pppppppuVar15 + lVar39 + 0xc);
            *(undefined4 *)((long)unaff_R12 + lVar39 + 0x14) =
                 *(undefined4 *)((long)pppppppuVar15 + lVar39 + 0x14);
            lVar42 = lVar39 + 0x18;
            lVar39 = lVar39 + 0x18;
          } while ((undefined8 *******)((long)pppppppuVar15 + lVar42) != pppppppuVar37);
        }
        pppppppuStack_160 = unaff_R12;
        if (pppppppuVar15 != (undefined8 *******)0x0) {
          func_0x0412a280(pppppppuVar15,lVar27);
        }
      }
      pppppppuVar15 = pppppppuStack_118;
      ppppppuVar40 = *(undefined8 *******)(lStack_d8 + 8);
      ppppppuVar33 = (undefined8 ******)
                     (((long)pppppppuStack_130 - (long)pppppppuStack_138 >> 4) * -0x5555555555555555
                     );
      iVar49 = (int)uStack_100 + -1;
      uStack_100 = CONCAT44(uStack_100._4_4_,iVar49);
      if (pppppppuStack_118 < pppppppuStack_110) {
        *(undefined4 *)pppppppuStack_118 = 0;
        *(int *)((long)pppppppuStack_118 + 4) = iVar49;
        pppppppuStack_118[1] = ppppppuVar40;
        pppppppuStack_118[2] = ppppppuVar33;
        *(undefined4 *)(pppppppuStack_118 + 3) = 0;
        pppppppuVar47 = pppppppuStack_118 + 4;
        iVar49 = (int)pppppppuStack_3b0;
      }
      else {
        lVar27 = (long)pppppppuStack_118 - (long)pppppppuStack_120;
        uVar22 = (lVar27 >> 5) + 1;
        if (0x7ffffffffffffff < uVar22) goto LAB_0d31eee0;
        uStack_3a8 = pppppppuStack_120;
        uVar34 = (long)pppppppuStack_110 - (long)pppppppuStack_120;
        uVar41 = (long)uVar34 >> 4;
        if ((ulong)((long)uVar34 >> 4) <= uVar22) {
          uVar41 = uVar22;
        }
        if (0x7fffffffffffffdf < uVar34) {
          uVar41 = 0x7ffffffffffffff;
        }
        if (0x7ffffffffffffff < uVar41) goto LAB_0d31eee5;
        lVar42 = uVar41 * 0x20;
        lVar39 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar42);
        if (lVar39 == 0) {
          func_0x0eec74c0(lVar42,0);
        }
        pppppppuStack_110 = (undefined8 *******)(lVar42 + lVar39);
        *(undefined4 *)(lVar39 + lVar27) = 0;
        *(int *)(lVar39 + 4 + lVar27) = iVar49;
        *(undefined8 *******)(lVar39 + 8 + lVar27) = ppppppuVar40;
        *(undefined8 *******)(lVar39 + 0x10 + lVar27) = ppppppuVar33;
        *(undefined4 *)(lVar39 + 0x18 + lVar27) = 0;
        pppppppuVar47 = (undefined8 *******)(lVar39 + lVar27 + 0x20);
        pppppppuStack_120 = (undefined8 *******)(lVar39 + lVar27 + (lVar27 >> 5) * -0x20);
        pppppppuVar37 = pppppppuStack_120;
        for (pppppppuVar45 = uStack_3a8; pppppppuVar45 != pppppppuVar15;
            pppppppuVar45 = pppppppuVar45 + 4) {
          uVar14 = *(undefined4 *)pppppppuVar45;
          uVar3 = *(undefined4 *)((long)pppppppuVar45 + 4);
          uVar5 = *(undefined4 *)(pppppppuVar45 + 1);
          uVar6 = *(undefined4 *)((long)pppppppuVar45 + 0xc);
          ppppppuVar40 = pppppppuVar45[3];
          pppppppuVar37[2] = pppppppuVar45[2];
          pppppppuVar37[3] = ppppppuVar40;
          *(undefined4 *)pppppppuVar37 = uVar14;
          *(undefined4 *)((long)pppppppuVar37 + 4) = uVar3;
          *(undefined4 *)(pppppppuVar37 + 1) = uVar5;
          *(undefined4 *)((long)pppppppuVar37 + 0xc) = uVar6;
          pppppppuVar37 = pppppppuVar37 + 4;
        }
        iVar49 = (int)pppppppuStack_3b0;
        if (uStack_3a8 != (undefined8 *******)0x0) {
          pppppppuStack_118 = pppppppuVar47;
          func_0x0412a280(uStack_3a8,uVar34);
        }
      }
      iStack_33c = (int)ppppppuStack_428 + 1;
      iStack_334 = iVar49 + 1;
      lVar27 = (long)pppppppuVar47 - (long)pppppppuStack_120 >> 5;
      if (1 < lVar27) {
        uVar22 = lVar27 - 2U >> 1;
        lVar27 = uVar22 * 0x20;
        iVar49 = *(int *)(pppppppuStack_120 + uVar22 * 4);
        iVar26 = *(int *)((long)pppppppuVar47 + -0x1c);
        iVar25 = *(int *)(pppppppuVar47 + -4);
        bVar54 = iVar49 < iVar25;
        if (iVar49 == iVar25) {
          bVar54 = *(int *)((long)pppppppuStack_120 + lVar27 + 4) < iVar26;
        }
        if (bVar54) {
          uVar14 = *(undefined4 *)(pppppppuVar47 + -1);
          ppppppuVar40 = pppppppuVar47[-3];
          ppppppuVar33 = pppppppuVar47[-2];
          pppppppuVar15 = pppppppuVar47 + -4;
          do {
            pppppppuVar37 = (undefined8 *******)(lVar27 + (long)pppppppuStack_120);
            *(int *)pppppppuVar15 = iVar49;
            *(undefined4 *)((long)pppppppuVar15 + 4) = *(undefined4 *)((long)pppppppuVar37 + 4);
            ppppppuVar19 = pppppppuVar37[2];
            pppppppuVar15[1] = pppppppuVar37[1];
            pppppppuVar15[2] = ppppppuVar19;
            *(undefined4 *)(pppppppuVar15 + 3) = *(undefined4 *)(pppppppuVar37 + 3);
            if (uVar22 == 0) break;
            uVar22 = uVar22 - 1 >> 1;
            lVar27 = uVar22 * 0x20;
            iVar49 = *(int *)(pppppppuStack_120 + uVar22 * 4);
            bVar54 = iVar49 < iVar25;
            if (iVar49 == iVar25) {
              bVar54 = *(int *)((long)pppppppuStack_120 + lVar27 + 4) < iVar26;
            }
            pppppppuVar15 = pppppppuVar37;
          } while (bVar54);
          *(int *)pppppppuVar37 = iVar25;
          *(int *)((long)pppppppuVar37 + 4) = iVar26;
          *(undefined4 *)(pppppppuVar37 + 3) = uVar14;
          pppppppuVar37[1] = ppppppuVar40;
          pppppppuVar37[2] = ppppppuVar33;
        }
      }
      uStack_348 = (undefined8 *******)CONCAT44((undefined4)uStack_430,(int)pppppppuStack_360);
      iStack_340 = (int)uStack_388;
      iStack_338 = (int)ppppppuStack_390;
      pppppppuStack_330 = (undefined8 *******)0x0;
      pppppppuStack_328 = (undefined8 *******)0x0;
      pppppppuStack_320 = (undefined8 *******)0x0;
      pppppppuStack_118 = pppppppuVar47;
      if (pppppppuStack_130 < pppppppuStack_128) {
        *(int *)(pppppppuStack_130 + 1) = iStack_340;
        *pppppppuStack_130 = uStack_348;
        *(ulong *)((long)pppppppuStack_130 + 0xc) = CONCAT44(iStack_338,iStack_33c);
        *(int *)((long)pppppppuStack_130 + 0x14) = iStack_334;
        pppppppuStack_130[3] = (undefined8 ******)0x0;
        pppppppuStack_130[4] = (undefined8 ******)0x0;
        pppppppuStack_130[5] = (undefined8 ******)0x0;
        pppppppuStack_130 = pppppppuStack_130 + 6;
      }
      else {
        pppppppuStack_130 = (undefined8 *******)func_0x0d30a1f0(&pppppppuStack_138,&uStack_348);
        if (pppppppuStack_330 != (undefined8 *******)0x0) {
          pppppppuStack_328 = pppppppuStack_330;
          func_0x0412a280(pppppppuStack_330,(long)pppppppuStack_320 - (long)pppppppuStack_330);
        }
      }
      ppppppuVar40 = pppppppuStack_120[1];
      pppppppuVar15 = (undefined8 *******)pppppppuStack_160[(long)ppppppuVar40 * 3];
      iStack_f0 = *(int *)(pppppppuStack_160 + (long)ppppppuVar40 * 3 + 1);
      uVar18 = *(undefined8 *)((long)pppppppuStack_160 + (long)ppppppuVar40 * 0x18 + 0xc);
      iStack_ec = (int)uVar18;
      iStack_e8 = (int)((ulong)uVar18 >> 0x20);
      iStack_e4 = *(int *)((long)pppppppuStack_160 + (long)ppppppuVar40 * 0x18 + 0x14);
      uStack_f8 = pppppppuVar15;
      if (((iStack_ec + 1 == (int)pppppppuVar15) &&
          (uStack_f8._4_4_ = (int)((ulong)pppppppuVar15 >> 0x20), iStack_e8 + 1 == uStack_f8._4_4_))
         && (iStack_e4 + 1 == iStack_f0)) {
        iStack_33c = (int)pppppppuVar15 + 1;
        iStack_338 = uStack_f8._4_4_ + 1;
        iStack_334 = iStack_f0 + 1;
        uStack_348 = pppppppuVar15;
        iStack_340 = iStack_f0;
        func_0x04f4b150(pppppppuStack_138 + (long)pppppppuStack_120[2] * 6 + 3,&uStack_348);
      }
      else {
        func_0x04f4b150(pppppppuStack_138 + (long)pppppppuStack_120[2] * 6 + 3,&uStack_f8);
      }
LAB_0d31bfe3:
      pppppppuVar15 = pppppppuStack_1f0;
      if (pppppppuStack_120 == pppppppuStack_118) {
        uStack_3f8 = (undefined8 *******)0x0;
        uStack_3f0._0_4_ = 0;
        uStack_3f0._4_4_ = 0;
        pppppppuVar45 = (undefined8 *******)0x0;
        uStack_3f0 = (undefined8 *******)0x0;
        uStack_3e8._0_4_ = 0;
        uStack_3e8._4_4_ = 0;
        pppppppuVar37 = (undefined8 *******)0x0;
        uStack_3e8 = (undefined8 *******)0x0;
        unaff_R12 = (undefined8 *******)((long)pppppppuStack_1e8 - (long)pppppppuStack_1f0);
        if (unaff_R12 == (undefined8 *******)0x0) {
          pppppppuVar37 = (undefined8 *******)0x0;
          pppppppuStack_360 = (undefined8 *******)0x0;
          pppppppuVar45 = (undefined8 *******)0x0;
          goto LAB_0d31ec01;
        }
        if ((long)unaff_R12 < 0) goto LAB_0d31eec2;
        pppppppuVar45 =
             (undefined8 *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,unaff_R12);
        if (pppppppuVar45 == (undefined8 *******)0x0) {
LAB_0d31edd2:
          func_0x0eec74c0(unaff_R12,0);
        }
        pppppppuVar37 = (undefined8 *******)((long)unaff_R12 + (long)pppppppuVar45);
        ppppppuStack_390 = (undefined8 ******)0x0;
        pppppppuVar47 = (undefined8 *******)0x0;
        uStack_3f8 = pppppppuVar45;
        pppppppuStack_360 = pppppppuVar45;
        uStack_3e8 = pppppppuVar37;
        uStack_3f0 = pppppppuVar45;
        goto LAB_0d31e8a9;
      }
      ppppppuStack_a0 = pppppppuStack_120[1];
      ppppppuStack_2f0 = pppppppuStack_120[2];
      uStack_d0 = (ulong)*(uint *)(pppppppuStack_120 + 3);
      lVar27 = (long)pppppppuStack_118 - (long)pppppppuStack_120 >> 5;
      if (1 < lVar27) {
        uVar14 = *(undefined4 *)pppppppuStack_120;
        uVar3 = *(undefined4 *)((long)pppppppuStack_120 + 4);
        uStack_3e8._0_4_ = *(int *)(pppppppuStack_120 + 3);
        pppppppuVar15 = (undefined8 *******)pppppppuStack_120[1];
        uStack_3f0._0_4_ = (int)pppppppuStack_120[2];
        uStack_3f0._4_4_ = (int)((ulong)pppppppuStack_120[2] >> 0x20);
        lVar39 = 0;
        pppppppuVar37 = pppppppuStack_120;
        do {
          pppppppuVar45 = pppppppuVar37 + lVar39 * 4 + 4;
          lVar42 = lVar39 * 2 + 1;
          lVar17 = lVar39 * 2 + 2;
          if (lVar17 < lVar27) {
            iVar26 = *(int *)(pppppppuVar37 + lVar39 * 4 + 8);
            iVar49 = *(int *)(pppppppuVar37 + lVar39 * 4 + 4);
            bVar54 = iVar49 < iVar26;
            if (iVar49 == iVar26) {
              bVar54 = *(int *)((long)pppppppuVar37 + lVar39 * 0x20 + 0x24) <
                       *(int *)((long)pppppppuVar37 + lVar39 * 0x20 + 0x44);
            }
            if (bVar54) {
              pppppppuVar45 = pppppppuVar37 + lVar39 * 4 + 8;
              lVar42 = lVar17;
              iVar49 = iVar26;
            }
          }
          else {
            iVar49 = *(int *)pppppppuVar45;
          }
          lVar39 = lVar42;
          *(int *)pppppppuVar37 = iVar49;
          *(undefined4 *)((long)pppppppuVar37 + 4) = *(undefined4 *)((long)pppppppuVar45 + 4);
          ppppppuVar40 = pppppppuVar45[2];
          pppppppuVar37[1] = pppppppuVar45[1];
          pppppppuVar37[2] = ppppppuVar40;
          *(undefined4 *)(pppppppuVar37 + 3) = *(undefined4 *)(pppppppuVar45 + 3);
          pppppppuVar37 = pppppppuVar45;
        } while (lVar39 <= (long)(lVar27 - 2U >> 1));
        pppppppuVar37 = pppppppuVar45 + 1;
        uStack_3f8._0_4_ = SUB84(pppppppuVar15,0);
        uStack_3f8._4_4_ = (undefined4)((ulong)pppppppuVar15 >> 0x20);
        uStack_3f8 = pppppppuVar15;
        if (pppppppuVar45 == pppppppuStack_118 + -4) {
          *(undefined4 *)pppppppuVar45 = uVar14;
          *(undefined4 *)((long)pppppppuVar45 + 4) = uVar3;
          *(int *)(pppppppuVar45 + 3) = (int)uStack_3e8;
          *(undefined4 *)pppppppuVar37 = (undefined4)uStack_3f8;
          *(undefined4 *)((long)pppppppuVar45 + 0xc) = uStack_3f8._4_4_;
          *(int *)(pppppppuVar45 + 2) = (int)uStack_3f0;
          *(int *)((long)pppppppuVar45 + 0x14) = uStack_3f0._4_4_;
        }
        else {
          *(undefined4 *)pppppppuVar45 = *(undefined4 *)(pppppppuStack_118 + -4);
          *(undefined4 *)((long)pppppppuVar45 + 4) =
               *(undefined4 *)((long)pppppppuStack_118 + -0x1c);
          *(undefined4 *)(pppppppuVar45 + 3) = *(undefined4 *)(pppppppuStack_118 + -1);
          ppppppuVar40 = pppppppuStack_118[-2];
          *pppppppuVar37 = pppppppuStack_118[-3];
          pppppppuVar45[2] = ppppppuVar40;
          *(undefined4 *)(pppppppuStack_118 + -4) = uVar14;
          *(undefined4 *)((long)pppppppuStack_118 + -0x1c) = uVar3;
          *(undefined4 *)(pppppppuStack_118 + -3) = (undefined4)uStack_3f8;
          *(undefined4 *)((long)pppppppuStack_118 + -0x14) = uStack_3f8._4_4_;
          *(int *)(pppppppuStack_118 + -2) = (int)uStack_3f0;
          *(int *)((long)pppppppuStack_118 + -0xc) = uStack_3f0._4_4_;
          *(int *)(pppppppuStack_118 + -1) = (int)uStack_3e8;
          lVar27 = (long)((long)pppppppuVar45 + (0x20 - (long)pppppppuStack_120)) >> 5;
          if (1 < lVar27) {
            uVar22 = lVar27 - 2U >> 1;
            lVar27 = uVar22 * 0x20;
            iVar49 = *(int *)(pppppppuStack_120 + uVar22 * 4);
            iVar26 = *(int *)((long)pppppppuVar45 + 4);
            iVar25 = *(int *)pppppppuVar45;
            bVar54 = iVar49 < iVar25;
            if (iVar49 == iVar25) {
              bVar54 = *(int *)((long)pppppppuStack_120 + lVar27 + 4) < iVar26;
            }
            if (bVar54) {
              iStack_338 = *(int *)(pppppppuVar45 + 3);
              pppppppuVar37 = (undefined8 *******)*pppppppuVar37;
              iStack_340 = (int)pppppppuVar45[2];
              iStack_33c = (int)((ulong)pppppppuVar45[2] >> 0x20);
              do {
                pppppppuVar15 = (undefined8 *******)(lVar27 + (long)pppppppuStack_120);
                *(int *)pppppppuVar45 = iVar49;
                *(undefined4 *)((long)pppppppuVar45 + 4) = *(undefined4 *)((long)pppppppuVar15 + 4);
                ppppppuVar40 = pppppppuVar15[2];
                pppppppuVar45[1] = pppppppuVar15[1];
                pppppppuVar45[2] = ppppppuVar40;
                *(undefined4 *)(pppppppuVar45 + 3) = *(undefined4 *)(pppppppuVar15 + 3);
                if (uVar22 == 0) break;
                uVar22 = uVar22 - 1 >> 1;
                lVar27 = uVar22 * 0x20;
                iVar49 = *(int *)(pppppppuStack_120 + uVar22 * 4);
                bVar54 = iVar49 < iVar25;
                if (iVar49 == iVar25) {
                  bVar54 = *(int *)((long)pppppppuStack_120 + lVar27 + 4) < iVar26;
                }
                pppppppuVar45 = pppppppuVar15;
              } while (bVar54);
              *(int *)pppppppuVar15 = iVar25;
              *(int *)((long)pppppppuVar15 + 4) = iVar26;
              *(int *)(pppppppuVar15 + 3) = iStack_338;
              uStack_348._0_4_ = SUB84(pppppppuVar37,0);
              uStack_348._4_4_ = (undefined4)((ulong)pppppppuVar37 >> 0x20);
              *(undefined4 *)(pppppppuVar15 + 1) = (undefined4)uStack_348;
              *(undefined4 *)((long)pppppppuVar15 + 0xc) = uStack_348._4_4_;
              *(int *)(pppppppuVar15 + 2) = iStack_340;
              *(int *)((long)pppppppuVar15 + 0x14) = iStack_33c;
              uStack_348 = pppppppuVar37;
            }
          }
        }
      }
      pppppppuStack_118 = pppppppuStack_118 + -4;
      ppppppuVar40 = pppppppuStack_1f0[(long)ppppppuStack_a0];
      lStack_a8 = (long)ppppppuStack_a0 * 3;
      iStack_b8 = *(int *)(lStack_190 + (long)ppppppuStack_a0 * 0xc);
      iStack_bc = *(int *)(lStack_190 + 4 + (long)ppppppuStack_a0 * 0xc);
      iStack_c0 = *(int *)(lStack_190 + 8 + (long)ppppppuStack_a0 * 0xc);
      cVar2 = *(char *)(lStack_1a8 + (long)ppppppuStack_a0);
      cVar10 = (*(code *)(*ppppppuVar40)[5])(ppppppuVar40);
      iStack_270 = *(int *)(pppppppuStack_160 + lStack_a8);
      uStack_258 = (ulong)*(uint *)((long)pppppppuStack_160 + lStack_a8 * 8 + 4);
      iStack_278 = *(int *)(pppppppuStack_160 + lStack_a8 + 1);
      iStack_274 = *(int *)((long)pppppppuStack_160 + lStack_a8 * 8 + 0xc);
      iStack_280 = *(int *)(pppppppuStack_160 + lStack_a8 + 2);
      iStack_27c = *(int *)((long)pppppppuStack_160 + lStack_a8 * 8 + 0x14);
      pppppppuStack_448 =
           (undefined8 *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x100);
      if (pppppppuStack_448 == (undefined8 *******)0x0) {
        func_0x0eec74c0(0x100,0);
      }
      pppppppuStack_368 = pppppppuStack_448 + 0x20;
      pppppppuStack_448[0x1e] = (undefined8 ******)0x0;
      pppppppuStack_448[0x1f] = (undefined8 ******)0x0;
      pppppppuStack_448[0x1c] = (undefined8 ******)0x0;
      pppppppuStack_448[0x1d] = (undefined8 ******)0x0;
      pppppppuStack_448[0x1a] = (undefined8 ******)0x0;
      pppppppuStack_448[0x1b] = (undefined8 ******)0x0;
      pppppppuStack_448[0x18] = (undefined8 ******)0x0;
      pppppppuStack_448[0x19] = (undefined8 ******)0x0;
      pppppppuStack_448[0x16] = (undefined8 ******)0x0;
      pppppppuStack_448[0x17] = (undefined8 ******)0x0;
      pppppppuStack_448[0x14] = (undefined8 ******)0x0;
      pppppppuStack_448[0x15] = (undefined8 ******)0x0;
      pppppppuStack_448[0x12] = (undefined8 ******)0x0;
      pppppppuStack_448[0x13] = (undefined8 ******)0x0;
      pppppppuStack_448[0x10] = (undefined8 ******)0x0;
      pppppppuStack_448[0x11] = (undefined8 ******)0x0;
      pppppppuStack_448[0xe] = (undefined8 ******)0x0;
      pppppppuStack_448[0xf] = (undefined8 ******)0x0;
      pppppppuStack_448[0xc] = (undefined8 ******)0x0;
      pppppppuStack_448[0xd] = (undefined8 ******)0x0;
      pppppppuStack_448[10] = (undefined8 ******)0x0;
      pppppppuStack_448[0xb] = (undefined8 ******)0x0;
      pppppppuStack_448[8] = (undefined8 ******)0x0;
      pppppppuStack_448[9] = (undefined8 ******)0x0;
      pppppppuStack_448[6] = (undefined8 ******)0x0;
      pppppppuStack_448[7] = (undefined8 ******)0x0;
      pppppppuStack_448[4] = (undefined8 ******)0x0;
      pppppppuStack_448[5] = (undefined8 ******)0x0;
      pppppppuStack_448[2] = (undefined8 ******)0x0;
      pppppppuStack_448[3] = (undefined8 ******)0x0;
      *pppppppuStack_448 = (undefined8 ******)0x0;
      pppppppuStack_448[1] = (undefined8 ******)0x0;
      lVar27 = func_0x0d336ab0(ppppppuVar40);
      func_0x0d3350a0(&uStack_348,lVar27);
      func_0x0d2eeed0(&ppppppuStack_230,lVar27,plStack_218);
      ppppppuStack_90 = ppppppuStack_228;
      if (ppppppuStack_230 == ppppppuStack_228) {
LAB_0d31e748:
        if (ppppppuStack_230 != (undefined8 ******)0x0) {
          ppppppuStack_228 = ppppppuStack_230;
          func_0x0412a280(ppppppuStack_230,lStack_220 - (long)ppppppuStack_230);
        }
        if (pppppppuStack_328 != (undefined8 *******)0x0) {
          pppppppuStack_320 = pppppppuStack_328;
          func_0x0412a280(pppppppuStack_328,lStack_318 - (long)pppppppuStack_328);
        }
        lVar27 = CONCAT44(iStack_33c,iStack_340);
        if (lVar27 != 0) {
          iStack_338 = iStack_340;
          iStack_334 = iStack_33c;
          func_0x0412a280(lVar27,(long)pppppppuStack_330 - lVar27);
        }
        func_0x0412a280(pppppppuStack_448,(long)pppppppuStack_368 - (long)pppppppuStack_448);
        goto LAB_0d31bfe3;
      }
      iStack_c4 = (int)uStack_d0 + 1;
      ppppppuStack_b0 = (undefined8 ******)0xffffffffffffffff;
      pppppppuVar37 = pppppppuStack_448;
      ppppppuVar40 = ppppppuStack_230;
      lStack_358 = lVar27;
LAB_0d31c462:
      pppppppuStack_360 = (undefined8 *******)*ppppppuVar40;
      pppppppuStack_3b0 =
           (undefined8 *******)((long)pppppppuStack_360 * 0x90 + *(long *)(lVar27 + 0x10));
      uVar18 = FUN_0d335180(&uStack_348);
      lVar42 = func_0x0d372520(uVar18,cVar2);
      lVar27 = *(long *)(lVar42 + 0x68);
      lVar39 = *(long *)(lVar27 + 0x1b0);
      if (lVar39 == 0) {
LAB_0d31c4f7:
        for (plVar28 = *(long **)(lVar27 + 0x350); plVar28 != *(long **)(lVar27 + 0x358);
            plVar28 = plVar28 + 2) {
          puVar51 = (undefined8 *)*plVar28;
          if (*(ulong *)(puVar51[1] + 8) == _DAT_0f6ff6b0) {
            uVar22 = (**(code **)*puVar51)(puVar51,lVar27,*(ushort *)(lVar42 + 0x128));
            goto LAB_0d31c53b;
          }
        }
        uVar22 = 0;
LAB_0d31c53b:
        pppppppuVar47 = (undefined8 *******)(uVar22 & 0xffffffff);
        if ((uVar22 >> 0x20 & 1) == 0) {
          pppppppuVar47 = (undefined8 *******)0x0;
        }
      }
      else {
        lVar17 = lVar27 + 0x1b0;
        do {
          bVar54 = *(ulong *)(lVar39 + 0x20) < _DAT_0f6ff6b0;
          if (!bVar54) {
            lVar17 = lVar39;
          }
          lVar39 = *(long *)(lVar39 + (ulong)bVar54 * 8);
        } while (lVar39 != 0);
        if ((lVar17 == lVar27 + 0x1b0) || (_DAT_0f6ff6b0 < *(ulong *)(lVar17 + 0x20)))
        goto LAB_0d31c4f7;
        cVar11 = (char)*(undefined4 *)(lVar17 + 0x2c);
        pppppppuVar47 =
             (undefined8 *******)
             (ulong)((uint)(*(ushort *)(lVar42 + 0x128) >>
                           (((char)*(undefined4 *)(lVar17 + 0x30) - cVar11) + 1U & 0x1f)) &
                    0xffffU >> (0x10U - cVar11 & 0x1f));
      }
      fVar55 = (float)(int)*(undefined8 *)((long)pppppppuStack_3b0 + 0x7c);
      fVar57 = (float)(int)((ulong)*(undefined8 *)((long)pppppppuStack_3b0 + 0x7c) >> 0x20);
      fVar60 = (float)*(int *)((long)pppppppuStack_3b0 + 0x84);
      if (cVar2 == '\x03') {
        fVar55 = (float)((uint)fVar55 ^ _DAT_014e9ac0);
        fVar60 = (float)((uint)fVar57 ^ _UNK_014e9ac4);
        fStack_3a0 = _UNK_014e9ac8;
        fStack_39c = _UNK_014e9acc;
LAB_0d31c5be:
        uStack_3a8 = (undefined8 *******)CONCAT44(fVar60,fVar55);
      }
      else {
        if (cVar2 == '\x02') {
          fVar60 = (float)((uint)fVar60 ^ _DAT_014e9ac0);
          uVar61 = uVar61 ^ _UNK_014e9ac4;
          in_XMM3_Dc = (float)((uint)in_XMM3_Dc ^ (uint)_UNK_014e9ac8);
          in_XMM3_Dd = (float)((uint)in_XMM3_Dd ^ (uint)_UNK_014e9acc);
          uVar59 = _UNK_014e9ac4;
          in_XMM2_Dc = _UNK_014e9ac8;
          in_XMM2_Dd = _UNK_014e9acc;
        }
        else if (cVar2 == '\x01') {
          uVar61 = uVar61 ^ _UNK_014e9ac4;
          in_XMM3_Dc = (float)((uint)in_XMM3_Dc ^ (uint)_UNK_014e9ac8);
          in_XMM3_Dd = (float)((uint)in_XMM3_Dd ^ (uint)_UNK_014e9acc);
          fVar60 = fVar57;
          fStack_3a0 = 0.0;
          fStack_39c = 0.0;
          goto LAB_0d31c5be;
        }
        uStack_3a8 = (undefined8 *******)CONCAT44(uVar61,fVar60);
        fStack_3a0 = in_XMM3_Dc;
        fStack_39c = in_XMM3_Dd;
      }
      fVar55 = fVar57;
      fVar60 = fVar57;
      fVar58 = fVar57;
      ppppppuStack_350 = ppppppuVar40;
      fVar56 = (float)func_0x0eee4390();
      iVar49 = (int)fVar56 + iStack_b8;
      fVar57 = (float)func_0x0eee4390(fVar57);
      uVar30 = (int)fVar57 + iStack_bc;
      fVar57 = (float)func_0x0eee4390((int)uStack_3a8);
      iStack_378 = (int)fVar57 + iStack_c0;
      uVar22 = (ulong)pppppppuVar47 & 0xff;
      iStack_36c = *(int *)(&UNK_019b3c50 + uVar22 * 0xc) + iVar49;
      iVar26 = *(int *)(&UNK_019b3c54 + uVar22 * 0xc) + uVar30;
      iStack_370 = *(int *)(&UNK_019b3c58 + uVar22 * 0xc) + iStack_378;
      bVar54 = (*(byte *)(pppppppuStack_3b0 + 3) & 1) != 0;
      pppppppuVar15 = (undefined8 *******)((long)pppppppuStack_3b0 + 0x19);
      if (bVar54) {
        pppppppuVar15 = (undefined8 *******)pppppppuStack_3b0[5];
      }
      pppppppuVar45 = (undefined8 *******)(ulong)(*(byte *)(pppppppuStack_3b0 + 3) >> 1);
      if (bVar54) {
        pppppppuVar45 = (undefined8 *******)pppppppuStack_3b0[4];
      }
      pbVar32 = (byte *)puStack_200[1];
      uStack_3a8 = pppppppuVar47;
      iStack_374 = iVar49;
      uStack_268 = uVar30;
      for (pbVar48 = (byte *)*puStack_200; pbVar48 != pbVar32; pbVar48 = pbVar48 + 0x30) {
        bVar13 = *pbVar48;
        if ((bVar13 & 1) == 0) {
          pppppppuVar47 = (undefined8 *******)(ulong)(bVar13 >> 1);
        }
        else {
          pppppppuVar47 = *(undefined8 ********)(pbVar48 + 8);
        }
        if (pppppppuVar45 == pppppppuVar47) {
          if ((bVar13 & 1) == 0) {
            pbVar46 = pbVar48 + 1;
          }
          else {
            pbVar46 = *(byte **)(pbVar48 + 0x10);
          }
          iVar49 = func_0x0eee3000(pppppppuVar15,pbVar46,pppppppuVar45);
          if (iVar49 == 0) break;
        }
      }
      unaff_R12 = pppppppuVar15;
      if (pbVar48 == pbVar32) {
LAB_0d31c718:
        if ((undefined8 *******)0xfffffffffffffff7 < pppppppuVar45) {
          func_0x04882e30();
          goto LAB_0d31edd2;
        }
      }
      else {
        if ((pbVar48[0x18] & 1) != 0) {
          pppppppuVar45 = *(undefined8 ********)(pbVar48 + 0x20);
          unaff_R12 = *(undefined8 ********)(pbVar48 + 0x28);
          goto LAB_0d31c718;
        }
        unaff_R12 = (undefined8 *******)(pbVar48 + 0x19);
        pppppppuVar45 = (undefined8 *******)(ulong)(pbVar48[0x18] >> 1);
      }
      if (pppppppuVar45 < (undefined8 *******)0x17) {
        uStack_248 = CONCAT71(uStack_248._1_7_,(char)pppppppuVar45 * '\x02');
        lVar27 = (long)&uStack_248 + 1;
        if (pppppppuVar45 != (undefined8 *******)0x0) goto LAB_0d31c7dc;
                    /* WARNING: Ignoring partial resolution of indirect */
        uStack_248._1_1_ = 0;
      }
      else {
        uVar22 = ((ulong)pppppppuVar45 | 7) + 1;
        if (((ulong)pppppppuVar45 | 7) == 0x17) {
          uVar22 = 0x1a;
        }
        lVar27 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22);
        if (lVar27 == 0) {
          func_0x0eec74c0(uVar22,0);
        }
        uStack_248 = uVar22 | 1;
        pppppppuStack_240 = pppppppuVar45;
        lStack_238 = lVar27;
LAB_0d31c7dc:
        func_0x0eee2ee0(lVar27,unaff_R12,pppppppuVar45);
        *(byte *)(lVar27 + (long)pppppppuVar45) = 0;
      }
      pppppppuVar45 = pppppppuStack_240;
      if ((uStack_248 & 1) == 0) {
        pppppppuVar45 = (undefined8 *******)(ulong)((byte)uStack_248 >> 1);
      }
      pppppppuStack_448 = pppppppuVar37;
      if (((pppppppuVar45 == (undefined8 *******)0x0) ||
          (lVar27 = func_0x0d347430(uStack_208,&uStack_248), lVar27 == 0)) ||
         (pbVar48 = *(byte **)(lVar27 + 0x28), pbVar48 == (byte *)0x0)) {
LAB_0d31cba0:
        uStack_3f8 = pppppppuVar15;
        func_0x06ef7140(1,3,0x1f,&UNK_0143fe61,&uStack_3f8);
LAB_0d31cbc6:
        ppppppuVar40 = ppppppuStack_350;
        lVar27 = lStack_358;
        if ((uStack_248 & 1) != 0) {
          func_0x0412a280(lStack_238,uStack_248 & 0xfffffffffffffffe);
        }
        ppppppuVar40 = ppppppuVar40 + 1;
        pppppppuVar37 = pppppppuStack_448;
        if (ppppppuVar40 == ppppppuStack_90) goto LAB_0d31e748;
        goto LAB_0d31c462;
      }
      if (*(long *)(pbVar48 + 0x20) == *(long *)(pbVar48 + 0x18)) {
        bVar13 = *pbVar48;
        if ((bVar13 & 1) == 0) {
          uVar22 = (ulong)(bVar13 >> 1);
        }
        else {
          uVar22 = *(ulong *)(pbVar48 + 8);
        }
        if (uVar22 == 0xf) {
          if ((bVar13 & 1) == 0) {
            pbVar32 = pbVar48 + 1;
          }
          else {
            pbVar32 = *(byte **)(pbVar48 + 0x10);
          }
          if (*(long *)(pbVar32 + 7) == 0x7974706d653a7466 && *(long *)pbVar32 == 0x66617263656e696d
             ) goto LAB_0d31c857;
        }
        else if (uVar22 == 5) {
          if ((bVar13 & 1) == 0) {
            pbVar32 = pbVar48 + 1;
          }
          else {
            pbVar32 = *(byte **)(pbVar48 + 0x10);
          }
          if (pbVar32[4] == 0x79 && *(int *)pbVar32 == 0x74706d65) goto LAB_0d31c857;
        }
        goto LAB_0d31cba0;
      }
LAB_0d31c857:
      if ((pbVar48[0x30] & 1) == 0) {
        if (pbVar48[0x30] >> 1 != 0) goto LAB_0d31c8d1;
LAB_0d31ca57:
        if ((pbVar48[0x30] & 1) == 0) {
          uStack_3f8 = (undefined8 *******)(pbVar48 + 0x31);
        }
        else {
          uStack_3f8 = *(undefined8 ********)(pbVar48 + 0x40);
        }
        func_0x06ef7140(1,3,0x1f,&UNK_01250453,&uStack_3f8);
        goto LAB_0d31cbc6;
      }
      if (*(long *)(pbVar48 + 0x38) == 0) goto LAB_0d31ca57;
LAB_0d31c8d1:
      lVar27 = func_0x0d347430(uStack_208,pbVar48 + 0x30);
      if ((lVar27 == 0) || (pbVar32 = *(byte **)(lVar27 + 0x28), pbVar32 == (byte *)0x0))
      goto LAB_0d31ca57;
      if (*(long *)(pbVar32 + 0x20) == *(long *)(pbVar32 + 0x18)) {
        bVar13 = *pbVar32;
        if ((bVar13 & 1) == 0) {
          uVar22 = (ulong)(bVar13 >> 1);
          pppppppuVar15 = *(undefined8 ********)(pbVar32 + 0x10);
          if (uVar22 == 0xf) goto LAB_0d31cc17;
LAB_0d31cadc:
          if (uVar22 == 5) {
            pppppppuVar45 = (undefined8 *******)(pbVar32 + 1);
            if ((bVar13 & 1) != 0) {
              pppppppuVar45 = pppppppuVar15;
            }
            if (*(byte *)((long)pppppppuVar45 + 4) == 0x79 && *(int *)pppppppuVar45 == 0x74706d65)
            goto LAB_0d31c90b;
          }
        }
        else {
          uVar22 = *(ulong *)(pbVar32 + 8);
          pppppppuVar15 = *(undefined8 ********)(pbVar32 + 0x10);
          if (uVar22 != 0xf) goto LAB_0d31cadc;
LAB_0d31cc17:
          pppppppuVar45 = (undefined8 *******)(pbVar32 + 1);
          if ((bVar13 & 1) != 0) {
            pppppppuVar45 = pppppppuVar15;
          }
          if (*(long *)((long)pppppppuVar45 + 7) == 0x7974706d653a7466 &&
              *pppppppuVar45 == (undefined8 ******)0x66617263656e696d) goto LAB_0d31c90b;
        }
        uStack_3f8 = pppppppuVar15;
        if ((bVar13 & 1) == 0) {
          uStack_3f8 = (undefined8 *******)(pbVar32 + 1);
        }
        func_0x07310ef0(1,3,0x1f,&UNK_012b5b89,&uStack_3f8);
        goto LAB_0d31cbc6;
      }
LAB_0d31c90b:
      if (((((iStack_36c < iStack_270) || (iStack_274 < iStack_36c)) || (iStack_370 < iStack_278))
          || ((iStack_27c < iStack_370 || (iVar26 < (int)uStack_258)))) || (iStack_280 < iVar26)) {
        ppppppuStack_398 = ppppppuStack_2f0;
LAB_0d31cb1d:
        if ((uint)uStack_d0 != uStack_1f8) {
LAB_0d31cce6:
          plVar28 = plStack_218;
          func_0x0d2ef290(&uStack_3f8,pbVar48);
          unaff_R12 = uStack_3f8;
          pppppppuVar15 = (undefined8 *******)CONCAT44(uStack_3f0._4_4_,(int)uStack_3f0);
          for (uVar22 = (long)pppppppuVar15 - (long)uStack_3f8 >> 3; 1 < uVar22; uVar22 = uVar22 - 1
              ) {
            iVar49 = (**(code **)(*plVar28 + 0x18))(plVar28,uVar22 & 0xffffffff);
            ppppppuVar40 = unaff_R12[uVar22 - 1];
            unaff_R12[uVar22 - 1] = unaff_R12[iVar49];
            unaff_R12[iVar49] = ppppppuVar40;
          }
          pppppppuVar45 = pppppppuVar37;
          pppppppuVar47 = unaff_R12;
          if (unaff_R12 != pppppppuVar15) {
            pppppppuStack_3b8 = pppppppuVar15;
            do {
              while( true ) {
                bVar54 = (*pbVar48 & 1) == 0;
                ppppppuVar40 = *(undefined8 *******)(pbVar48 + 0x10);
                if (bVar54) {
                  ppppppuVar40 = (undefined8 ******)(pbVar48 + 1);
                }
                ppppppuVar33 = (undefined8 ******)(ulong)(*pbVar48 >> 1);
                if (!bVar54) {
                  ppppppuVar33 = *(undefined8 *******)(pbVar48 + 8);
                }
                ppppppuVar19 = *unaff_R12;
                pppppppuVar45 =
                     *(undefined8 ********)(*(long *)(pbVar48 + 0x18) + (long)ppppppuVar19 * 8);
                if (pppppppuVar37 < pppppppuStack_368) break;
                pppppppuStack_2a0 =
                     (undefined8 *******)((long)pppppppuVar37 - (long)pppppppuStack_448);
                lVar27 = (long)pppppppuStack_2a0 >> 5;
                uVar22 = lVar27 + 1;
                ppppppuStack_390 = ppppppuVar40;
                uStack_388 = pppppppuVar45;
                if (0x7ffffffffffffff < uVar22) goto LAB_0d31eea4;
                uVar34 = (long)pppppppuStack_368 - (long)pppppppuStack_448;
                uVar41 = (long)uVar34 >> 4;
                if ((ulong)((long)uVar34 >> 4) <= uVar22) {
                  uVar41 = uVar22;
                }
                if (0x7fffffffffffffdf < uVar34) {
                  uVar41 = 0x7ffffffffffffff;
                }
                if (0x7ffffffffffffff < uVar41) goto LAB_0d31eea9;
                lVar42 = uVar41 * 0x20;
                lVar39 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar42);
                if (lVar39 == 0) {
                  func_0x0eec74c0(lVar42,0);
                }
                pppppppuVar37 = pppppppuStack_2a0;
                *(undefined8 *******)(lVar39 + (long)pppppppuStack_2a0) = ppppppuStack_390;
                *(undefined8 *******)(lVar39 + 8 + (long)pppppppuStack_2a0) = ppppppuVar33;
                *(undefined8 *******)(lVar39 + 0x10 + (long)pppppppuStack_2a0) = ppppppuVar19;
                *(undefined8 ********)(lVar39 + 0x18 + (long)pppppppuStack_2a0) = uStack_388;
                pppppppuVar45 =
                     (undefined8 *******)((long)pppppppuStack_2a0 + lVar27 * -0x20 + lVar39);
                memcpy(pppppppuVar45,pppppppuStack_448);
                func_0x0412a280(pppppppuStack_448,uVar34);
                pppppppuVar37 = (undefined8 *******)((long)pppppppuVar37 + lVar39 + 0x20);
                unaff_R12 = unaff_R12 + 1;
                pppppppuVar15 = pppppppuStack_3b8;
                pppppppuStack_448 = pppppppuVar45;
                pppppppuStack_368 = (undefined8 *******)(lVar42 + lVar39);
                pppppppuVar47 = uStack_3f8;
                if (unaff_R12 == pppppppuStack_3b8) goto joined_r0x0d31e71c;
              }
              *pppppppuVar37 = ppppppuVar40;
              pppppppuVar37[1] = ppppppuVar33;
              pppppppuVar37[2] = ppppppuVar19;
              pppppppuVar37[3] = pppppppuVar45;
              pppppppuVar37 = pppppppuVar37 + 4;
              unaff_R12 = unaff_R12 + 1;
              pppppppuVar45 = pppppppuStack_448;
              pppppppuVar47 = uStack_3f8;
            } while (unaff_R12 != pppppppuVar15);
          }
joined_r0x0d31e71c:
          pppppppuStack_448 = pppppppuVar45;
          if (pppppppuVar47 != (undefined8 *******)0x0) {
            uStack_3f0._0_4_ = (int)pppppppuVar47;
            uStack_3f0._4_4_ = (int)((ulong)pppppppuVar47 >> 0x20);
            func_0x0412a280(pppppppuVar47,
                            CONCAT44(uStack_3e8._4_4_,(int)uStack_3e8) - (long)pppppppuVar47);
          }
        }
      }
      else {
        ppppppuVar40 = (undefined8 ******)
                       (((long)pppppppuStack_130 - (long)pppppppuStack_138 >> 4) *
                       -0x5555555555555555);
        ppppppuStack_398 = ppppppuStack_b0;
        if (ppppppuStack_b0 < ppppppuVar40) goto LAB_0d31cb1d;
        uStack_3f8 = (undefined8 *******)CONCAT44((int)uStack_258,iStack_270);
        uStack_3f0._0_4_ = iStack_278;
        uStack_3f0._4_4_ = iStack_274;
        uStack_3e8._0_4_ = iStack_280;
        uStack_3e8._4_4_ = iStack_27c;
        lStack_3e0 = 0;
        lStack_3d8 = 0;
        lStack_3d0 = 0;
        if (pppppppuStack_130 < pppppppuStack_128) {
          *(int *)(pppppppuStack_130 + 1) = iStack_278;
          *pppppppuStack_130 = uStack_3f8;
          *(ulong *)((long)pppppppuStack_130 + 0xc) = CONCAT44(iStack_280,iStack_274);
          *(int *)((long)pppppppuStack_130 + 0x14) = iStack_27c;
          pppppppuStack_130[3] = (undefined8 ******)0x0;
          pppppppuStack_130[4] = (undefined8 ******)0x0;
          pppppppuStack_130[5] = (undefined8 ******)0x0;
          pppppppuStack_130 = pppppppuStack_130 + 6;
        }
        else {
          pppppppuStack_130 = (undefined8 *******)func_0x0d30a1f0(&pppppppuStack_138,&uStack_3f8);
          if (lStack_3e0 != 0) {
            lStack_3d8 = lStack_3e0;
            func_0x0412a280(lStack_3e0,lStack_3d0 - lStack_3e0);
          }
        }
        ppppppuStack_398 = ppppppuVar40;
        ppppppuStack_b0 = ppppppuVar40;
        if ((uint)uStack_d0 != uStack_1f8) goto LAB_0d31cce6;
      }
      plVar28 = plStack_218;
      func_0x0d2ef290(&uStack_3f8,pbVar32);
      pppppppuVar45 = uStack_3f8;
      pppppppuVar15 = (undefined8 *******)CONCAT44(uStack_3f0._4_4_,(int)uStack_3f0);
      for (uVar22 = (long)pppppppuVar15 - (long)uStack_3f8 >> 3; 1 < uVar22; uVar22 = uVar22 - 1) {
        iVar49 = (**(code **)(*plVar28 + 0x18))(plVar28,uVar22 & 0xffffffff);
        ppppppuVar40 = pppppppuVar45[uVar22 - 1];
        pppppppuVar45[uVar22 - 1] = pppppppuVar45[iVar49];
        pppppppuVar45[iVar49] = ppppppuVar40;
      }
      pppppppuVar47 = pppppppuStack_448;
      pppppppuVar50 = pppppppuVar45;
      if (pppppppuVar45 != pppppppuVar15) {
        pppppppuVar35 = (undefined8 *******)(pbVar32 + 1);
        pppppppuStack_3b8 = pppppppuVar35;
        do {
          bVar54 = (*pbVar32 & 1) == 0;
          pppppppuVar50 = *(undefined8 ********)(pbVar32 + 0x10);
          if (bVar54) {
            pppppppuVar50 = pppppppuVar35;
          }
          ppppppuVar40 = (undefined8 ******)(ulong)(*pbVar32 >> 1);
          if (!bVar54) {
            ppppppuVar40 = *(undefined8 *******)(pbVar32 + 8);
          }
          ppppppuVar33 = *pppppppuVar45;
          ppppppuVar19 = *(undefined8 *******)(*(long *)(pbVar32 + 0x18) + (long)ppppppuVar33 * 8);
          if (pppppppuStack_368 <= pppppppuVar37) {
            pppppppuStack_2a0 = (undefined8 *******)((long)pppppppuVar37 - (long)pppppppuVar47);
            lVar27 = (long)pppppppuStack_2a0 >> 5;
            uVar22 = lVar27 + 1;
            if (uVar22 < 0x800000000000000) {
              uVar34 = (long)pppppppuStack_368 - (long)pppppppuVar47;
              uVar41 = (long)uVar34 >> 4;
              if ((ulong)((long)uVar34 >> 4) <= uVar22) {
                uVar41 = uVar22;
              }
              if (0x7fffffffffffffdf < uVar34) {
                uVar41 = 0x7ffffffffffffff;
              }
              pppppppuStack_448 = pppppppuVar47;
              ppppppuStack_390 = ppppppuVar33;
              if (uVar41 < 0x800000000000000) {
                lVar42 = uVar41 * 0x20;
                lVar39 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar42);
                if (lVar39 == 0) {
                  func_0x0eec74c0(lVar42,0);
                }
                uStack_388 = (undefined8 *******)(lVar39 + (long)pppppppuStack_2a0);
                *(undefined8 ********)(lVar39 + (long)pppppppuStack_2a0) = pppppppuVar50;
                *(undefined8 *******)(lVar39 + 8 + (long)pppppppuStack_2a0) = ppppppuVar40;
                *(undefined8 *******)(lVar39 + 0x10 + (long)pppppppuStack_2a0) = ppppppuStack_390;
                *(undefined8 *******)(lVar39 + 0x18 + (long)pppppppuStack_2a0) = ppppppuVar19;
                pppppppuVar50 = uStack_388 + lVar27 * -4;
                memcpy(pppppppuVar50,pppppppuVar47);
                func_0x0412a280(pppppppuVar47,uVar34);
                pppppppuVar35 = pppppppuStack_3b8;
                pppppppuStack_368 = (undefined8 *******)(lVar42 + lVar39);
                pppppppuVar37 = uStack_388;
                goto joined_r0x0d31d01b;
              }
              func_0x04882eb0();
            }
            func_0x0d30a1e0();
LAB_0d31ee90:
            func_0x04882eb0();
LAB_0d31ee9a:
            func_0x04882eb0();
LAB_0d31ee9f:
            func_0x0d31aca0();
            unaff_R12 = pppppppuStack_448;
LAB_0d31eea4:
            func_0x0d30a1e0();
LAB_0d31eea9:
            func_0x04882eb0();
            goto LAB_0d31eeae;
          }
          *pppppppuVar37 = pppppppuVar50;
          pppppppuVar37[1] = ppppppuVar40;
          pppppppuVar37[2] = ppppppuVar33;
          pppppppuVar37[3] = ppppppuVar19;
          pppppppuVar50 = pppppppuVar47;
joined_r0x0d31d01b:
          pppppppuVar47 = pppppppuVar50;
          pppppppuVar45 = pppppppuVar45 + 1;
          pppppppuVar37 = pppppppuVar37 + 4;
          pppppppuVar50 = uStack_3f8;
        } while (pppppppuVar45 != pppppppuVar15);
      }
      pppppppuStack_448 = pppppppuVar47;
      if (pppppppuVar50 != (undefined8 *******)0x0) {
        uStack_3f0._0_4_ = (int)pppppppuVar50;
        uStack_3f0._4_4_ = (int)((ulong)pppppppuVar50 >> 0x20);
        func_0x0412a280(pppppppuVar50,
                        CONCAT44(uStack_3e8._4_4_,(int)uStack_3e8) - (long)pppppppuVar50);
      }
      if (pppppppuStack_448 == pppppppuVar37) goto LAB_0d31cbc6;
      iStack_260 = uStack_268 - (int)uStack_258;
      uStack_26c = *(undefined4 *)((long)pppppppuStack_3b0 + 0x8c);
      uStack_b4 = -(uint)((char)uStack_3a8 == '\0') | (uint)((char)uStack_3a8 == '\x01');
      iVar49 = 0x7fffffff;
      pppppppuVar15 = pppppppuStack_448;
      pppppppuStack_2a0 = pppppppuVar37;
LAB_0d31d250:
      ppppppuVar40 = pppppppuVar15[3];
      if ((ppppppuVar40 == (undefined8 ******)0x0) ||
         (pppppppuStack_98 = pppppppuVar15, cVar11 = (*(code *)(*ppppppuVar40)[0xd])(ppppppuVar40),
         cVar11 == '\0')) goto LAB_0d31cbc6;
      uVar12 = (*(code *)(*ppppppuVar40)[0x10])(ppppppuVar40);
      ppppppuStack_390 = (undefined8 ******)CONCAT71(ppppppuStack_390._1_7_,uVar12);
      FUN_0412d680(ppppppuVar40 + 3);
      pppppppuVar15 = (undefined8 *******)ppppppuVar40[1];
      ppppppuStack_290 = ppppppuVar40;
      if (pppppppuVar15 == (undefined8 *******)0x0) {
        if ((ppppppuVar40[0x17] == (undefined8 *****)0x0) || (*(char *)ppppppuVar40[0x17] != '\x01')
           ) {
          pppppppuVar15 = (undefined8 *******)0x0;
        }
        else {
          (*(code *)(*ppppppuVar40[0x19])[2])(&uStack_3f8,ppppppuVar40[0x19],ppppppuVar40);
          iVar25 = uStack_3f0._4_4_;
          iVar26 = (int)uStack_3f0;
          uVar14 = (undefined4)uStack_3f8;
          uVar3 = uStack_3f8._4_4_;
          fVar55 = 0.0;
          fVar60 = 0.0;
          fVar58 = 0.0;
          uStack_3f8 = (undefined8 *******)0x0;
          uStack_3f0._0_4_ = 0;
          uStack_3f0._4_4_ = 0;
          pppppuVar20 = ppppppuVar40[2];
          *(undefined4 *)(ppppppuVar40 + 1) = uVar14;
          *(undefined4 *)((long)ppppppuVar40 + 0xc) = uVar3;
          *(int *)(ppppppuVar40 + 2) = iVar26;
          *(int *)((long)ppppppuVar40 + 0x14) = iVar25;
          if (pppppuVar20 != (undefined8 *****)0x0) {
            LOCK();
            pppppuVar4 = pppppuVar20 + 1;
            ppppuVar1 = *pppppuVar4;
            *pppppuVar4 = (undefined8 ****)((long)*pppppuVar4 + -1);
            UNLOCK();
            if (ppppuVar1 == (undefined8 ****)0x0) {
              (*(code *)(*pppppuVar20)[2])(pppppuVar20);
              func_0x0412c2d0(pppppuVar20);
              plVar28 = (long *)CONCAT44(uStack_3f0._4_4_,(int)uStack_3f0);
              if (plVar28 != (long *)0x0) {
                LOCK();
                plVar9 = plVar28 + 1;
                lVar27 = *plVar9;
                *plVar9 = *plVar9 + -1;
                UNLOCK();
                if (lVar27 == 0) {
                  (**(code **)(*plVar28 + 0x10))(plVar28);
                  func_0x0412c2d0(plVar28);
                }
              }
            }
          }
          pppppppuVar15 = (undefined8 *******)ppppppuStack_290[1];
        }
      }
      func_0x0412d6b0(ppppppuVar40 + 3);
      lStack_3d0 = 0;
      lStack_3c8 = 0;
      lStack_3e0 = 0;
      lStack_3d8 = 0;
      uStack_3f0._0_4_ = 0;
      uStack_3f0._4_4_ = 0;
      uStack_3e8._0_4_ = 0;
      uStack_3e8._4_4_ = 0;
      lVar27 = (long)pppppppuVar15[3] - (long)pppppppuVar15[2] >> 4;
      uVar22 = lVar27 * -0x71c71c71c71c71c7;
      uStack_3f8 = pppppppuVar15;
      if (pppppppuVar15[3] != pppppppuVar15[2]) {
        func_0x0ca7b2e0(&uStack_3f0,uVar22);
      }
      uVar41 = lStack_3d0 - lStack_3d8 >> 3;
      if (uVar22 < uVar41 || uVar22 - uVar41 == 0) {
        if (uVar22 < uVar41) {
          lStack_3d0 = lStack_3d8 + lVar27 * 0x71c71c71c71c71c8;
        }
      }
      else {
        func_0x0ca7b2e0(&lStack_3d8);
      }
      plVar28 = plStack_218;
      auStack_308[0] = 0;
      auStack_308[1] = 1;
      auStack_308[2] = 2;
      auStack_308[3] = 3;
      iVar26 = (**(code **)(*plStack_218 + 0x18))(plStack_218,4);
      auStack_308[3] = auStack_308[iVar26];
      auStack_308[iVar26] = 3;
      iVar26 = (**(code **)(*plVar28 + 0x18))(plVar28,3);
      uVar12 = auStack_308[iVar26];
      auStack_308[iVar26] = auStack_308[2];
      auStack_308[2] = uVar12;
      iVar26 = (**(code **)(*plVar28 + 0x18))(plVar28,2);
      uStack_3a8 = pppppppuVar15 + 2;
      uVar12 = auStack_308[iVar26];
      auStack_308[iVar26] = auStack_308[1];
      auStack_308[1] = uVar12;
      uStack_25c = CONCAT13(auStack_308[3],
                            CONCAT12(auStack_308[2],CONCAT11(auStack_308[1],auStack_308[0])));
      pppppppuStack_88 = pppppppuVar15 + 1;
      lVar27 = 0;
      pppppppuStack_80 = pppppppuVar15;
LAB_0d31d555:
      pppppppuVar15 = pppppppuStack_80;
      func_0x0d2eeed0(auStack_308,pppppppuStack_80,plStack_218);
      lStack_2e0 = lVar27;
      uVar30 = (uint)*(byte *)((long)&uStack_25c + lVar27);
      if ((uVar30 | 2) == 3) {
        iVar26 = *(int *)((long)pppppppuVar15 + 4);
        ppppppuVar40 = (undefined8 ******)(ulong)*(uint *)(pppppppuVar15 + 1);
      }
      else {
        ppppppuVar40 = *pppppppuVar15;
        iVar26 = (int)((ulong)ppppppuVar40 >> 0x20);
        pppppppuVar15 = pppppppuStack_88;
      }
      iVar25 = *(int *)pppppppuVar15;
      iVar23 = (int)ppppppuVar40 + -1;
      iStack_2bc = iVar25 + -1;
      uStack_2c0 = iVar26 - 1;
      pppppppuStack_3b8 = (undefined8 *******)(ulong)uStack_2c0;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      lStack_2d8 = CONCAT44(lStack_2d8._4_4_,iStack_2bc);
      iStack_2c4 = iVar23;
      uVar14 = (*pcStack_148)(&uStack_3f8,&UNK_01de6224,*(byte *)((long)&uStack_25c + lVar27),
                              &uStack_2d0,uStack_3a8,auStack_308,uStack_208);
      plVar9 = plStack_300;
      plVar28 = (long *)CONCAT44(uStack_304,
                                 CONCAT13(auStack_308[3],
                                          CONCAT12(auStack_308[2],
                                                   CONCAT11(auStack_308[1],auStack_308[0]))));
      if (plVar28 == plStack_300) goto joined_r0x0d31da92;
      lStack_250 = CONCAT44(lStack_250._4_4_,1 - (int)ppppppuVar40);
      iStack_264 = 1 - iVar25;
      uStack_288 = CONCAT44(uStack_288._4_4_,uVar30);
LAB_0d31d6b1:
      puStack_70 = &uStack_3f8;
      lStack_68 = *plVar28;
      ppppppuVar40 = *uStack_3a8 + lStack_68 * 0x12;
      pppppppuStack_60 = pppppppuStack_3b0;
      puStack_58 = &uStack_348;
      pppppppuStack_50 = pppppppuStack_360;
      ppppppuStack_78 = ppppppuVar40;
      cVar11 = func_0x0d335850(cVar2,uVar30,(char)ppppppuStack_390 == '\x01');
      if (cVar11 == '\0') goto LAB_0d31d6a2;
      fStack_438 = (float)*(int *)((long)ppppppuVar40 + 0x7c);
      iVar26 = *(int *)(ppppppuVar40 + 0x10);
      fVar57 = (float)*(int *)((long)ppppppuVar40 + 0x84);
      if (uVar30 == 3) {
        fVar55 = (float)((uint)fVar55 ^ _UNK_014e9ac4);
        fVar60 = (float)((uint)fVar60 ^ (uint)_UNK_014e9ac8);
        fVar58 = (float)((uint)fVar58 ^ (uint)_UNK_014e9acc);
        uStack_2b8 = CONCAT44(uVar59,fVar57);
        fStack_2b0 = in_XMM2_Dc;
        fStack_2ac = in_XMM2_Dd;
        uStack_388 = (undefined8 *******)func_0x0eee4390((uint)fStack_438 ^ _DAT_014e9ac0);
        iVar25 = 0;
        iVar43 = iStack_264;
        fStack_380 = extraout_XMM0_Dc_00;
        fStack_37c = extraout_XMM0_Dd_00;
        fStack_438 = (float)uStack_2b8;
LAB_0d31d882:
        iVar31 = 0;
        iVar44 = iVar23;
      }
      else if (uVar30 == 2) {
        fVar55 = (float)((uint)fVar55 ^ _UNK_014e9ac4);
        fVar60 = (float)((uint)fVar60 ^ (uint)_UNK_014e9ac8);
        fVar58 = (float)((uint)fVar58 ^ (uint)_UNK_014e9acc);
        uVar59 = uVar59 ^ _UNK_014e9ac4;
        in_XMM2_Dc = (float)((uint)in_XMM2_Dc ^ (uint)_UNK_014e9ac8);
        in_XMM2_Dd = (float)((uint)in_XMM2_Dd ^ (uint)_UNK_014e9acc);
        uStack_2b8 = CONCAT44(uVar59,(uint)fVar57 ^ _DAT_014e9ac0);
        fStack_2b0 = in_XMM2_Dc;
        fStack_2ac = in_XMM2_Dd;
        fStack_438 = (float)func_0x0eee4390((uint)fStack_438 ^ _DAT_014e9ac0);
        uStack_388 = (undefined8 *******)func_0x0eee4390((float)uStack_2b8);
        iVar25 = 0;
        iVar44 = 0;
        iVar31 = (int)lStack_250;
        iVar43 = iStack_264;
        fStack_380 = extraout_XMM0_Dc;
        fStack_37c = extraout_XMM0_Dd;
      }
      else {
        if (uVar30 != 1) {
          uStack_388 = (undefined8 *******)CONCAT44(uVar59,fVar57);
          iVar25 = (int)lStack_2d8;
          iVar43 = 0;
          fStack_380 = in_XMM2_Dc;
          fStack_37c = in_XMM2_Dd;
          goto LAB_0d31d882;
        }
        uStack_388 = (undefined8 *******)CONCAT44(fVar55,fStack_438);
        uVar59 = uVar59 ^ _UNK_014e9ac4;
        in_XMM2_Dc = (float)((uint)in_XMM2_Dc ^ (uint)_UNK_014e9ac8);
        in_XMM2_Dd = (float)((uint)in_XMM2_Dd ^ (uint)_UNK_014e9acc);
        fStack_380 = fVar60;
        fStack_37c = fVar58;
        fStack_438 = (float)func_0x0eee4390((uint)fVar57 ^ _DAT_014e9ac0);
        iVar25 = (int)lStack_2d8;
        iVar31 = (int)lStack_250;
        iVar43 = 0;
        iVar44 = 0;
      }
      bVar13 = (*(code *)(*ppppppuStack_290)[5])();
      uVar21 = (uint)(float)iVar26;
      uStack_430 = (ulong)uVar21;
      uVar30 = (iStack_260 - uVar21) + uStack_b4;
      uStack_2b8 = (ulong)uVar30;
      if (bVar13 == 0 && cVar10 == '\0') {
        uStack_2c0 = uVar30 + (int)uStack_258;
      }
      else {
        if (iVar49 == 0x7fffffff) {
          iVar49 = func_0x0d2f0c40(uStack_210,iStack_374,iStack_378,1);
        }
        uStack_2c0 = iVar49 - uVar21;
      }
      uVar22 = (ulong)uStack_2c0;
      iStack_2bc = iStack_370 - (int)(float)uStack_388;
      uVar24 = iStack_36c - (int)fStack_438;
      uStack_2c8 = iVar43 + iStack_2bc;
      iStack_2c4 = iVar44 + uVar24;
      uStack_388 = (undefined8 *******)CONCAT44(uStack_388._4_4_,iStack_2bc);
      iStack_2bc = iVar25 + iStack_2bc;
      uStack_2d0 = CONCAT44(uStack_2c0,iVar31 + uVar24);
      uStack_2c0 = (int)pppppppuStack_3b8 + uStack_2c0;
      (*pcStack_140)(uVar14,&uStack_2d0);
      uVar52 = uStack_2c0;
      iVar26 = (int)uStack_2d0;
      puVar16 = (ulong *)(uStack_2d0 & 0xffffffff);
      uVar30 = (uint)uStack_288;
      if (((int)uStack_2d0 < *(int *)(pppppppuStack_138 + (long)ppppppuStack_398 * 6)) ||
         (pppppppuVar15 = pppppppuStack_138 + (long)ppppppuStack_398 * 6,
         *(int *)((long)pppppppuVar15 + 0xc) < iStack_2c4)) goto LAB_0d31d6a2;
      uVar8 = uStack_2d0._4_4_;
      ppppppuStack_428 = (undefined8 ******)(ulong)uStack_2d0._4_4_;
      if (((int)uStack_2d0._4_4_ < *(int *)((long)pppppppuVar15 + 4)) ||
         (((*(int *)(pppppppuVar15 + 2) < (int)uStack_2c0 ||
           (pppppppuVar37 = (undefined8 *******)(ulong)uStack_2c8,
           (int)uStack_2c8 < *(int *)(pppppppuVar15 + 1))) ||
          (*(int *)((long)pppppppuVar15 + 0x14) < iStack_2bc)))) goto LAB_0d31d6a2;
      ppppppuStack_298 = pppppppuVar15[3];
      ppppppuVar40 = pppppppuVar15[4];
      ppppppuVar33 = ppppppuStack_298;
      if (ppppppuStack_298 != ppppppuVar40) {
        while ((((*(int *)((long)ppppppuVar33 + 0xc) < (int)uStack_2d0 ||
                 (iStack_2c4 < *(int *)ppppppuVar33)) ||
                ((*(int *)((long)ppppppuVar33 + 0x14) < (int)uStack_2c8 ||
                 ((iStack_2bc < *(int *)(ppppppuVar33 + 1) ||
                  (*(int *)(ppppppuVar33 + 2) < (int)uStack_2d0._4_4_)))))) ||
               ((int)uStack_2c0 < *(int *)((long)ppppppuVar33 + 4)))) {
          ppppppuVar33 = ppppppuVar33 + 3;
          if (ppppppuVar33 == ppppppuVar40) goto LAB_0d31da9d;
        }
        goto LAB_0d31d6a2;
      }
LAB_0d31da9d:
      uStack_2e8 = uVar22;
      if ((iStack_2bc - uStack_2c8 & uStack_2c0 - uStack_2d0._4_4_ & iStack_2c4 - (int)uStack_2d0)
          == 0xffffffff) {
        iVar25 = uStack_2c8 + 1;
        uVar18 = CONCAT44(uStack_2d0._4_4_ + 1,(int)uStack_2d0 + 1);
        ppppppuStack_410 = pppppppuVar15[5];
        if (ppppppuVar40 < ppppppuStack_410) {
          *(int *)ppppppuVar40 = (int)uStack_2d0;
          *(uint *)((long)ppppppuVar40 + 4) = uStack_2d0._4_4_;
          *(uint *)(ppppppuVar40 + 1) = uStack_2c8;
          *(undefined8 *)((long)ppppppuVar40 + 0xc) = uVar18;
          *(int *)((long)ppppppuVar40 + 0x14) = iVar25;
          goto LAB_0d31db11;
        }
        lVar27 = (long)ppppppuVar40 - (long)ppppppuStack_298;
        ppppppuVar33 = (undefined8 ******)(lVar27 >> 3);
        piVar29 = (int *)((long)ppppppuVar33 * -0x5555555555555555 + 1);
        pppppppuStack_3b8 = pppppppuVar37;
        uStack_288 = uVar18;
        if ((int *)0xaaaaaaaaaaaaaaa < piVar29) goto LAB_0d31edfa;
        lVar39 = (long)ppppppuStack_410 - (long)ppppppuStack_298 >> 3;
        piVar53 = (int *)(lVar39 * 0x5555555555555556);
        if (piVar29 < piVar53) {
          piVar29 = piVar53;
        }
        if (0x555555555555554 < (ulong)(lVar39 * -0x5555555555555555)) {
          piVar29 = (int *)0xaaaaaaaaaaaaaaa;
        }
        if (piVar29 == (int *)0x0) {
          ppppppuVar19 = (undefined8 ******)0x0;
        }
        else {
          if ((int *)0xaaaaaaaaaaaaaaa < piVar29) goto LAB_0d31ee90;
          lStack_2d8 = (long)piVar29 * 0x18;
          ppppppuVar19 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
          if (ppppppuVar19 == (undefined8 ******)0x0) {
            func_0x0eec74c0(lStack_2d8,0);
            ppppppuVar19 = (undefined8 ******)0x0;
          }
        }
        *(int *)((long)ppppppuVar19 + lVar27) = iVar26;
        *(uint *)((long)ppppppuVar19 + lVar27 + 4) = uVar8;
        *(int *)((long)ppppppuVar19 + lVar27 + 8) = (int)pppppppuStack_3b8;
        *(undefined8 *)((long)ppppppuVar19 + lVar27 + 0xc) = uStack_288;
        *(int *)((long)ppppppuVar19 + lVar27 + 0x14) = iVar25;
        ppppppuVar38 = ppppppuStack_298;
        if (ppppppuStack_298 == ppppppuVar40) goto LAB_0d31de70;
        lVar39 = lVar27 + (long)ppppppuVar33 * -8;
        lVar42 = 0;
        do {
          *(undefined4 *)((long)ppppppuVar19 + lVar42 + lVar39 + 0x14) = 0;
          *(undefined8 *)((long)ppppppuVar19 + lVar42 + lVar39 + 0xc) = 0;
          *(undefined8 *)((long)ppppppuVar19 + lVar42 + lVar39) =
               *(undefined8 *)((long)ppppppuStack_298 + lVar42);
          *(undefined4 *)((long)ppppppuVar19 + lVar42 + lVar39 + 8) =
               *(undefined4 *)((long)ppppppuStack_298 + lVar42 + 8);
          *(undefined8 *)((long)ppppppuVar19 + lVar42 + lVar39 + 0xc) =
               *(undefined8 *)((long)ppppppuStack_298 + lVar42 + 0xc);
          *(undefined4 *)((long)ppppppuVar19 + lVar42 + lVar39 + 0x14) =
               *(undefined4 *)((long)ppppppuStack_298 + lVar42 + 0x14);
          lVar17 = lVar42 + 0x18;
          lVar42 = lVar42 + 0x18;
        } while ((undefined8 ******)((long)ppppppuStack_298 + lVar17) != ppppppuVar40);
      }
      else {
        ppppppuStack_410 = pppppppuVar15[5];
        if (ppppppuVar40 < ppppppuStack_410) {
          *(int *)ppppppuVar40 = (int)uStack_2d0;
          *(uint *)((long)ppppppuVar40 + 4) = uStack_2d0._4_4_;
          *(uint *)(ppppppuVar40 + 1) = uStack_2c8;
          *(int *)((long)ppppppuVar40 + 0xc) = iStack_2c4;
          *(uint *)(ppppppuVar40 + 2) = uStack_2c0;
          *(int *)((long)ppppppuVar40 + 0x14) = iStack_2bc;
LAB_0d31db11:
          ppppppuVar40 = ppppppuVar40 + 3;
          goto LAB_0d31dea8;
        }
        lStack_2d8 = CONCAT44(lStack_2d8._4_4_,iStack_2bc);
        uStack_288 = CONCAT44(uStack_288._4_4_,iStack_2c4);
        lVar27 = (long)ppppppuVar40 - (long)ppppppuStack_298;
        ppppppuVar33 = (undefined8 ******)(lVar27 >> 3);
        piVar29 = (int *)((long)ppppppuVar33 * -0x5555555555555555 + 1);
        pppppppuStack_3b8 = pppppppuVar37;
        if ((int *)0xaaaaaaaaaaaaaaa < piVar29) goto LAB_0d31edfa;
        lVar39 = (long)ppppppuStack_410 - (long)ppppppuStack_298 >> 3;
        piVar53 = (int *)(lVar39 * 0x5555555555555556);
        if (piVar29 < piVar53) {
          piVar29 = piVar53;
        }
        if (0x555555555555554 < (ulong)(lVar39 * -0x5555555555555555)) {
          piVar29 = (int *)0xaaaaaaaaaaaaaaa;
        }
        if (piVar29 == (int *)0x0) {
          ppppppuVar19 = (undefined8 ******)0x0;
        }
        else {
          if ((int *)0xaaaaaaaaaaaaaaa < piVar29) goto LAB_0d31ee90;
          lStack_250 = (long)piVar29 * 0x18;
          ppppppuVar19 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
          if (ppppppuVar19 == (undefined8 ******)0x0) {
            func_0x0eec74c0(lStack_250,0);
            ppppppuVar19 = (undefined8 ******)0x0;
          }
        }
        *(int *)((long)ppppppuVar19 + lVar27) = iVar26;
        *(uint *)((long)ppppppuVar19 + lVar27 + 4) = uVar8;
        *(int *)((long)ppppppuVar19 + lVar27 + 8) = (int)pppppppuStack_3b8;
        *(uint *)((long)ppppppuVar19 + lVar27 + 0xc) = (uint)uStack_288;
        *(uint *)((long)ppppppuVar19 + lVar27 + 0x10) = uVar52;
        *(int *)((long)ppppppuVar19 + lVar27 + 0x14) = (int)lStack_2d8;
        ppppppuVar38 = ppppppuStack_298;
        if (ppppppuStack_298 == ppppppuVar40) goto LAB_0d31de70;
        lVar39 = lVar27 + (long)ppppppuVar33 * -8;
        lVar42 = 0;
        do {
          *(undefined4 *)((long)ppppppuVar19 + lVar42 + lVar39 + 0x14) = 0;
          *(undefined8 *)((long)ppppppuVar19 + lVar42 + lVar39 + 0xc) = 0;
          *(undefined8 *)((long)ppppppuVar19 + lVar42 + lVar39) =
               *(undefined8 *)((long)ppppppuStack_298 + lVar42);
          *(undefined4 *)((long)ppppppuVar19 + lVar42 + lVar39 + 8) =
               *(undefined4 *)((long)ppppppuStack_298 + lVar42 + 8);
          *(undefined8 *)((long)ppppppuVar19 + lVar42 + lVar39 + 0xc) =
               *(undefined8 *)((long)ppppppuStack_298 + lVar42 + 0xc);
          *(undefined4 *)((long)ppppppuVar19 + lVar42 + lVar39 + 0x14) =
               *(undefined4 *)((long)ppppppuStack_298 + lVar42 + 0x14);
          lVar17 = lVar42 + 0x18;
          lVar42 = lVar42 + 0x18;
        } while ((undefined8 ******)((long)ppppppuStack_298 + lVar17) != ppppppuVar40);
      }
      ppppppuStack_410 = pppppppuVar15[5];
      ppppppuVar38 = pppppppuVar15[3];
LAB_0d31de70:
      ppppppuVar40 = (undefined8 ******)((long)ppppppuVar19 + lVar27 + 0x18);
      pppppppuVar15[3] = ppppppuVar19;
      pppppppuVar15[4] = ppppppuVar40;
      pppppppuVar15[5] = ppppppuVar19 + (long)piVar29 * 3;
      if (ppppppuVar38 != (undefined8 ******)0x0) {
        func_0x0412a280(ppppppuVar38,(long)ppppppuStack_410 - (long)ppppppuVar38);
      }
LAB_0d31dea8:
      ppppppuVar33 = (undefined8 ******)(ulong)bVar13;
      pppppppuVar15[4] = ppppppuVar40;
      iVar26 = *(int *)(pbStack_1c0 + (long)ppppppuStack_a0 * 4);
      uVar30 = iVar26 - (int)(float)uStack_2b8;
      if (bVar13 != 0) {
        uVar30 = 1;
      }
      pppppppuVar15 = (undefined8 *******)(ulong)uVar30;
      ppppppuStack_428 =
           (undefined8 ******)func_0x0d2fdf40(&pppppppuStack_1f0,ppppppuStack_290,iStack_c4);
      uVar22 = uStack_2b8;
      *(ulong *)(lStack_190 + (long)ppppppuStack_428 * 0xc) = (ulong)uVar24 | uStack_2e8 << 0x20;
      *(float *)(lStack_190 + 8 + (long)ppppppuStack_428 * 0xc) = (float)uStack_388;
      *(uint *)(pbStack_1c0 + (long)ppppppuStack_428 * 4) = uVar30;
      *(undefined1 *)(lStack_1a8 + (long)ppppppuStack_428) =
           *(undefined1 *)((long)&uStack_25c + lStack_2e0);
      pppppppuStack_160[(long)ppppppuStack_428 * 3 + 2] =
           (undefined8 ******)CONCAT44(iStack_2bc,uStack_2c0);
      pppppppuVar37 = pppppppuStack_160 + (long)ppppppuStack_428 * 3;
      *(int *)pppppppuVar37 = (int)uStack_2d0;
      *(uint *)((long)pppppppuVar37 + 4) = uStack_2d0._4_4_;
      *(uint *)(pppppppuVar37 + 1) = uStack_2c8;
      *(int *)((long)pppppppuVar37 + 0xc) = iStack_2c4;
      if (cVar10 == '\0') {
        uStack_2e8 = (ulong)uStack_268;
      }
      else if (bVar13 == 0) {
        uStack_2e8 = (ulong)((int)uStack_2e8 + uVar21);
      }
      else {
        if (iVar49 == 0x7fffffff) {
          iVar49 = func_0x0d2f0c40(uStack_210,iStack_374,iStack_378,1);
        }
        uStack_2e8 = (ulong)(uint)(((int)(((uint)(uVar22 >> 0x1f) & 1) + (int)uVar22) >> 1) + iVar49
                                  );
      }
      pppppppuVar37 = (undefined8 *******)(lStack_178 + lStack_a8 * 8);
      uVar52 = ((int)uStack_2e8 - iStack_260) + iVar26;
      ppppppuVar40 = (undefined8 ******)(ulong)uVar52;
      piVar53 = *(int **)(lStack_178 + 8 + lStack_a8 * 8);
      piVar29 = *(int **)(lStack_178 + 0x10 + lStack_a8 * 8);
      if (piVar53 < piVar29) {
        *piVar53 = iStack_36c;
        piVar53[1] = uVar52;
        piVar53[2] = iStack_370;
        iVar26 = (int)uStack_2b8;
        piVar53[3] = iVar26;
        *(byte *)(piVar53 + 4) = bVar13;
        ppppppuVar40 = (undefined8 ******)(piVar53 + 5);
LAB_0d31e1e9:
        pppppppuVar37[1] = ppppppuVar40;
        puVar16 = (ulong *)(lStack_178 + (long)ppppppuStack_428 * 0x18);
        uVar30 = ((int)uStack_2e8 - uVar21) + uVar30;
        uVar41 = (ulong)uVar30;
        uVar22 = (ulong)(uint)-iVar26;
        piVar53 = *(int **)(lStack_178 + 8 + (long)ppppppuStack_428 * 0x18);
        piVar29 = *(int **)(lStack_178 + 0x10 + (long)ppppppuStack_428 * 0x18);
        if (piVar53 < piVar29) {
          *piVar53 = iStack_374;
          piVar53[1] = uVar30;
          piVar53[2] = iStack_378;
          piVar53[3] = -iVar26;
          *(char *)(piVar53 + 4) = cVar10;
          piVar53 = piVar53 + 5;
        }
        else {
          uVar34 = *puVar16;
          ppppppuVar40 = (undefined8 ******)((long)piVar53 - uVar34);
          pppppppuVar15 = (undefined8 *******)(((long)ppppppuVar40 >> 2) * -0x3333333333333333 + 1);
          uStack_2e8 = uVar41;
          uStack_2b8 = uVar22;
          if ((undefined8 *******)0xccccccccccccccc < pppppppuVar15) goto LAB_0d31edeb;
          piVar29 = (int *)((long)piVar29 - uVar34);
          pppppppuVar37 = (undefined8 *******)(((long)piVar29 >> 2) * -0x6666666666666666);
          if (pppppppuVar15 < pppppppuVar37) {
            pppppppuVar15 = pppppppuVar37;
          }
          if (0x666666666666665 < (ulong)(((long)piVar29 >> 2) * -0x3333333333333333)) {
            pppppppuVar15 = (undefined8 *******)0xccccccccccccccc;
          }
          uStack_430 = uVar34;
          if ((undefined8 *******)0xccccccccccccccc < pppppppuVar15) goto LAB_0d31ee04;
          uVar22 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pppppppuVar15 * 0x14);
          if (uVar22 == 0) {
            func_0x0eec74c0((long)pppppppuVar15 * 0x14,0);
          }
          uStack_388 = (undefined8 *******)(uVar22 + (long)pppppppuVar15 * 0x14);
          *(int *)(uVar22 + (long)ppppppuVar40) = iStack_374;
          *(int *)(uVar22 + 4 + (long)ppppppuVar40) = (int)uStack_2e8;
          *(int *)(uVar22 + 8 + (long)ppppppuVar40) = iStack_378;
          *(int *)(uVar22 + 0xc + (long)ppppppuVar40) = (int)uStack_2b8;
          *(char *)(uVar22 + 0x10 + (long)ppppppuVar40) = cVar10;
          piVar53 = (int *)(uVar22 + 0x14 + (long)ppppppuVar40);
          memcpy(uVar22,uVar34,ppppppuVar40);
          *puVar16 = uVar22;
          puVar16[1] = (ulong)piVar53;
          puVar16[2] = (ulong)uStack_388;
          if (uVar34 != 0) {
            func_0x0412a280(uVar34,piVar29);
          }
        }
        pppppppuVar15 = pppppppuStack_118;
        puVar16[1] = (ulong)piVar53;
        lVar27 = lStack_2e0;
        if ((int)uStack_d0 < (int)uStack_1f8) {
          uVar14 = *(undefined4 *)(pbStack_1d8 + (long)ppppppuStack_428 * 4);
          iVar26 = (int)uStack_100 + -1;
          uStack_100 = CONCAT44(uStack_100._4_4_,iVar26);
          if (pppppppuStack_110 <= pppppppuStack_118) {
            lVar39 = (long)pppppppuStack_118 - (long)pppppppuStack_120;
            uVar22 = (lVar39 >> 5) + 1;
            if (uVar22 < 0x800000000000000) {
              uStack_388 = pppppppuStack_120;
              uVar34 = (long)pppppppuStack_110 - (long)pppppppuStack_120;
              uVar41 = (long)uVar34 >> 4;
              if ((ulong)((long)uVar34 >> 4) <= uVar22) {
                uVar41 = uVar22;
              }
              if (0x7fffffffffffffdf < uVar34) {
                uVar41 = 0x7ffffffffffffff;
              }
              if (uVar41 < 0x800000000000000) {
                lVar17 = uVar41 * 0x20;
                lVar42 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar17);
                if (lVar42 == 0) {
                  func_0x0eec74c0(lVar17,0);
                }
                lVar27 = lStack_2e0;
                *(undefined4 *)(lVar42 + lVar39) = uStack_26c;
                *(int *)(lVar42 + 4 + lVar39) = iVar26;
                *(undefined8 *******)(lVar42 + 8 + lVar39) = ppppppuStack_428;
                *(undefined8 *******)(lVar42 + 0x10 + lVar39) = ppppppuStack_398;
                *(undefined4 *)(lVar42 + 0x18 + lVar39) = uVar14;
                pppppppuStack_120 = (undefined8 *******)(lVar42 + lVar39 + (lVar39 >> 5) * -0x20);
                pppppppuVar37 = pppppppuStack_120;
                for (pppppppuVar45 = uStack_388; pppppppuVar45 != pppppppuVar15;
                    pppppppuVar45 = pppppppuVar45 + 4) {
                  uVar14 = *(undefined4 *)pppppppuVar45;
                  uVar3 = *(undefined4 *)((long)pppppppuVar45 + 4);
                  uVar5 = *(undefined4 *)(pppppppuVar45 + 1);
                  uVar6 = *(undefined4 *)((long)pppppppuVar45 + 0xc);
                  fVar55 = *(float *)((long)pppppppuVar45 + 0x14);
                  fVar60 = *(float *)(pppppppuVar45 + 3);
                  fVar58 = *(float *)((long)pppppppuVar45 + 0x1c);
                  *(undefined4 *)(pppppppuVar37 + 2) = *(undefined4 *)(pppppppuVar45 + 2);
                  *(float *)((long)pppppppuVar37 + 0x14) = fVar55;
                  *(float *)(pppppppuVar37 + 3) = fVar60;
                  *(float *)((long)pppppppuVar37 + 0x1c) = fVar58;
                  *(undefined4 *)pppppppuVar37 = uVar14;
                  *(undefined4 *)((long)pppppppuVar37 + 4) = uVar3;
                  *(undefined4 *)(pppppppuVar37 + 1) = uVar5;
                  *(undefined4 *)((long)pppppppuVar37 + 0xc) = uVar6;
                  pppppppuVar37 = pppppppuVar37 + 4;
                }
                pppppppuStack_110 = (undefined8 *******)(lVar17 + lVar42);
                pppppppuVar15 = (undefined8 *******)(lVar42 + lVar39 + 0x20);
                if (uStack_388 != (undefined8 *******)0x0) {
                  pppppppuStack_118 = pppppppuVar15;
                  func_0x0412a280(uStack_388,uVar34);
                }
                goto LAB_0d31e53f;
              }
              goto LAB_0d31ee9a;
            }
            goto LAB_0d31ee9f;
          }
          *(undefined4 *)pppppppuStack_118 = uStack_26c;
          *(int *)((long)pppppppuStack_118 + 4) = iVar26;
          pppppppuStack_118[1] = ppppppuStack_428;
          pppppppuStack_118[2] = ppppppuStack_398;
          *(undefined4 *)(pppppppuStack_118 + 3) = uVar14;
          pppppppuVar15 = pppppppuStack_118 + 4;
LAB_0d31e53f:
          lVar39 = (long)pppppppuVar15 - (long)pppppppuStack_120 >> 5;
          pppppppuStack_118 = pppppppuVar15;
          if (1 < lVar39) {
            uVar22 = lVar39 - 2U >> 1;
            lVar39 = uVar22 * 0x20;
            iVar26 = *(int *)(pppppppuStack_120 + uVar22 * 4);
            iVar25 = *(int *)((long)pppppppuVar15 + -0x1c);
            iVar23 = *(int *)(pppppppuVar15 + -4);
            bVar54 = iVar26 < iVar23;
            if (iVar26 == iVar23) {
              bVar54 = *(int *)((long)pppppppuStack_120 + lVar39 + 4) < iVar25;
            }
            if (!bVar54) goto LAB_0d31e63b;
            uStack_38 = *(undefined4 *)(pppppppuVar15 + -1);
            ppppppuVar40 = pppppppuVar15[-3];
            ppppppuVar33 = pppppppuVar15[-2];
            pppppppuVar15 = pppppppuVar15 + -4;
            do {
              pppppppuVar37 = (undefined8 *******)(lVar39 + (long)pppppppuStack_120);
              *(int *)pppppppuVar15 = iVar26;
              *(undefined4 *)((long)pppppppuVar15 + 4) = *(undefined4 *)((long)pppppppuVar37 + 4);
              ppppppuVar19 = pppppppuVar37[2];
              pppppppuVar15[1] = pppppppuVar37[1];
              pppppppuVar15[2] = ppppppuVar19;
              *(undefined4 *)(pppppppuVar15 + 3) = *(undefined4 *)(pppppppuVar37 + 3);
              if (uVar22 == 0) break;
              uVar22 = uVar22 - 1 >> 1;
              lVar39 = uVar22 * 0x20;
              iVar26 = *(int *)(pppppppuStack_120 + uVar22 * 4);
              bVar54 = iVar26 < iVar23;
              if (iVar26 == iVar23) {
                bVar54 = *(int *)((long)pppppppuStack_120 + lVar39 + 4) < iVar25;
              }
              pppppppuVar15 = pppppppuVar37;
            } while (bVar54);
            *(int *)pppppppuVar37 = iVar23;
            *(int *)((long)pppppppuVar37 + 4) = iVar25;
            *(undefined4 *)(pppppppuVar37 + 3) = uStack_38;
            uStack_48._0_4_ = SUB84(ppppppuVar40,0);
            uStack_48._4_4_ = (undefined4)((ulong)ppppppuVar40 >> 0x20);
            uStack_40._0_4_ = SUB84(ppppppuVar33,0);
            uStack_40._4_4_ = (undefined4)((ulong)ppppppuVar33 >> 0x20);
            *(undefined4 *)(pppppppuVar37 + 1) = (undefined4)uStack_48;
            *(undefined4 *)((long)pppppppuVar37 + 0xc) = uStack_48._4_4_;
            *(undefined4 *)(pppppppuVar37 + 2) = (undefined4)uStack_40;
            *(undefined4 *)((long)pppppppuVar37 + 0x14) = uStack_40._4_4_;
            uStack_48 = ppppppuVar40;
            uStack_40 = ppppppuVar33;
          }
        }
LAB_0d31e63b:
        bVar7 = true;
        bVar54 = true;
        plVar28 = (long *)CONCAT44(uStack_304,
                                   CONCAT13(auStack_308[3],
                                            CONCAT12(auStack_308[2],
                                                     CONCAT11(auStack_308[1],auStack_308[0]))));
        plVar9 = plStack_300;
        goto joined_r0x0d31da92;
      }
      pppppppuVar45 = (undefined8 *******)*pppppppuVar37;
      puVar16 = (ulong *)((long)piVar53 - (long)pppppppuVar45);
      uVar22 = ((long)puVar16 >> 2) * -0x3333333333333333 + 1;
      if (uVar22 < 0xccccccccccccccd) {
        piVar29 = (int *)((long)piVar29 - (long)pppppppuVar45);
        uVar41 = ((long)piVar29 >> 2) * -0x6666666666666666;
        if (uVar22 < uVar41) {
          uVar22 = uVar41;
        }
        if (0x666666666666665 < (ulong)(((long)piVar29 >> 2) * -0x3333333333333333)) {
          uVar22 = 0xccccccccccccccc;
        }
        pppppppuStack_3b8 = pppppppuVar45;
        uStack_388 = pppppppuVar37;
        if (uVar22 < 0xccccccccccccccd) {
          ppppppuVar33 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
          if (ppppppuVar33 == (undefined8 ******)0x0) {
            func_0x0eec74c0(uVar22 * 0x14,0);
          }
          pppppppuVar15 = pppppppuStack_3b8;
          *(int *)((long)ppppppuVar33 + (long)puVar16) = iStack_36c;
          *(uint *)((long)ppppppuVar33 + 4 + (long)puVar16) = uVar52;
          *(int *)((long)(ppppppuVar33 + 1) + (long)puVar16) = iStack_370;
          *(int *)((long)ppppppuVar33 + 0xc + (long)puVar16) = (int)uStack_2b8;
          *(byte *)((long)(ppppppuVar33 + 2) + (long)puVar16) = bVar13;
          ppppppuVar40 = (undefined8 ******)((long)ppppppuVar33 + 0x14 + (long)puVar16);
          memcpy(ppppppuVar33,pppppppuStack_3b8,puVar16);
          *uStack_388 = ppppppuVar33;
          uStack_388[1] = ppppppuVar40;
          uStack_388[2] = (undefined8 ******)(uVar22 * 0x14 + (long)ppppppuVar33);
          if (pppppppuVar15 != (undefined8 *******)0x0) {
            func_0x0412a280(pppppppuVar15,piVar29);
          }
          iVar26 = (int)uStack_2b8;
          pppppppuVar37 = uStack_388;
          goto LAB_0d31e1e9;
        }
        func_0x04882eb0();
LAB_0d31edeb:
        func_0x0629e090();
      }
      func_0x0629e090();
LAB_0d31edfa:
      func_0x04fa48b0();
LAB_0d31ee04:
      func_0x04882eb0();
LAB_0d31ee09:
      func_0x0eec74c0(ppppppuVar33,0);
    } while( true );
  }
  goto LAB_0d31eec7;
LAB_0d31e8a9:
  pppppppuVar50 = pppppppuStack_160;
  lVar42 = lStack_178;
  lVar39 = lStack_190;
  lVar27 = lStack_1a8;
  pbVar48 = pbStack_1c0;
  ppppppuVar40 = pppppppuVar15[(long)pppppppuVar47];
  pppppppuStack_3b0 = pppppppuVar45;
  uStack_3a8 = pppppppuVar47;
  ppppppuVar33 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
  if (ppppppuVar33 == (undefined8 ******)0x0) {
    func_0x0eec74c0(0x58,0);
  }
  pppppuVar20 = *(undefined8 ******)((long)ppppppuStack_390 + lVar39);
  uVar14 = *(undefined4 *)((long)ppppppuStack_390 + lVar39 + 8);
  uVar3 = *(undefined4 *)(pbVar48 + (long)uStack_3a8 * 4);
  bVar13 = *(byte *)(lVar27 + (long)uStack_3a8);
  iStack_340 = *(int *)((long)pppppppuVar50 + (long)ppppppuStack_390 * 2 + 8);
  uStack_348 = *(undefined8 ********)((long)pppppppuVar50 + (long)ppppppuStack_390 * 2);
  iStack_334 = *(int *)((long)pppppppuVar50 + (long)ppppppuStack_390 * 2 + 0x14);
  uVar18 = *(undefined8 *)((long)pppppppuVar50 + (long)ppppppuStack_390 * 2 + 0xc);
  iStack_33c = (int)uVar18;
  iStack_338 = (int)((ulong)uVar18 >> 0x20);
  uVar12 = *(undefined1 *)(lStack_d8 + 0xf0);
  pppppuVar4 = *(undefined8 ******)((long)pppppppuVar50 + (long)ppppppuStack_390 * 2);
  *(undefined4 *)(ppppppuVar33 + 1) =
       *(undefined4 *)((long)pppppppuVar50 + (long)ppppppuStack_390 * 2 + 8);
  *ppppppuVar33 = pppppuVar4;
  *(undefined8 *)((long)ppppppuVar33 + 0xc) = uVar18;
  *(int *)((long)ppppppuVar33 + 0x14) = iStack_334;
  ppppppuVar33[3] = ppppppuVar40;
  *(undefined4 *)(ppppppuVar33 + 4) = uVar3;
  *(byte *)((long)ppppppuVar33 + 0x24) = bVar13;
  ppppppuVar33[5] = pppppuVar20;
  *(undefined4 *)(ppppppuVar33 + 6) = uVar14;
  ppppppuVar33[7] = (undefined8 *****)0x0;
  ppppppuVar33[8] = (undefined8 *****)0x0;
  ppppppuVar33[9] = (undefined8 *****)0x0;
  lVar27 = *(long *)(lVar42 + (long)ppppppuStack_390 * 2);
  unaff_R12 = (undefined8 *******)(*(long *)(lVar42 + 8 + (long)ppppppuStack_390 * 2) - lVar27);
  if (unaff_R12 != (undefined8 *******)0x0) {
    if (0xccccccccccccccc < (ulong)(((long)unaff_R12 >> 2) * -0x3333333333333333))
    goto LAB_0d31eeae;
    pppppuVar20 = (undefined8 *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,unaff_R12);
    if (pppppuVar20 == (undefined8 *****)0x0) {
      func_0x0eec74c0(unaff_R12,0);
    }
    ppppppuVar33[7] = pppppuVar20;
    ppppppuVar33[8] = pppppuVar20;
    ppppppuVar33[9] = (undefined8 *****)((long)pppppuVar20 + (long)unaff_R12);
    memcpy(pppppuVar20,lVar27,unaff_R12);
    ppppppuVar33[8] = (undefined8 *****)((long)pppppuVar20 + (long)unaff_R12);
  }
  *(undefined1 *)(ppppppuVar33 + 10) = uVar12;
  if (pppppppuStack_360 < pppppppuVar37) {
    ppppppuStack_230 = (undefined8 ******)0x0;
    *pppppppuStack_360 = ppppppuVar33;
    pppppppuVar50 = pppppppuStack_360 + 1;
    pppppppuVar45 = pppppppuStack_3b0;
    uStack_3f0 = pppppppuVar50;
  }
  else {
    lVar27 = (long)pppppppuStack_360 - (long)pppppppuStack_3b0;
    uVar22 = (lVar27 >> 3) + 1;
    unaff_R12 = pppppppuVar37;
    ppppppuStack_230 = ppppppuVar33;
    if (0x1fffffffffffffff < uVar22) goto LAB_0d31eeb3;
    unaff_R12 = (undefined8 *******)((long)pppppppuVar37 - (long)pppppppuStack_3b0);
    uVar41 = (long)unaff_R12 >> 2;
    if ((ulong)((long)unaff_R12 >> 2) <= uVar22) {
      uVar41 = uVar22;
    }
    if ((undefined8 *******)0x7ffffffffffffff7 < unaff_R12) {
      uVar41 = 0x1fffffffffffffff;
    }
    if (0x1fffffffffffffff < uVar41) goto LAB_0d31eeb8;
    lVar39 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar41 * 8);
    if (lVar39 == 0) {
      func_0x0eec74c0(uVar41 * 8,0);
    }
    pppppppuVar15 = pppppppuStack_3b0;
    pppppppuVar37 = (undefined8 *******)(lVar39 + uVar41 * 8);
    ppppppuStack_230 = (undefined8 ******)0x0;
    *(undefined8 *******)(lVar39 + lVar27) = ppppppuVar33;
    pppppppuVar50 = (undefined8 *******)(lVar39 + lVar27 + 8);
    pppppppuVar45 = (undefined8 *******)(lVar39 + lVar27 + (lVar27 >> 3) * -8);
    memcpy(pppppppuVar45,pppppppuStack_3b0);
    uStack_3f8 = pppppppuVar45;
    uStack_3f0 = pppppppuVar50;
    uStack_3e8 = pppppppuVar37;
    func_0x0412a280(pppppppuVar15,unaff_R12);
    ppppppuVar40 = ppppppuStack_230;
    uStack_3f0 = pppppppuVar50;
    if (ppppppuStack_230 != (undefined8 ******)0x0) {
      pppppuVar20 = ppppppuStack_230[7];
      if (pppppuVar20 != (undefined8 *****)0x0) {
        ppppppuStack_230[8] = pppppuVar20;
        func_0x0412a280(pppppuVar20,(long)ppppppuStack_230[9] - (long)pppppuVar20);
      }
      func_0x0412a280(ppppppuVar40,0x58);
    }
  }
  pppppppuVar47 = (undefined8 *******)((long)uStack_3a8 + 1);
  ppppppuStack_390 = (undefined8 ******)((long)ppppppuStack_390 + 0xc);
  pppppppuVar15 = pppppppuStack_1f0;
  pppppppuStack_360 = pppppppuVar50;
  if ((undefined8 *******)((long)pppppppuStack_1e8 - (long)pppppppuStack_1f0 >> 3) <= pppppppuVar47)
  {
LAB_0d31ec01:
    puVar51 = puStack_e0;
    ppppppuVar40 = pppppppuStack_138[3];
    if (ppppppuVar40 == pppppppuStack_138[4]) {
      uVar36 = 0x7fffffff7fffffff;
      uVar18 = 0x8000000180000001;
      iVar49 = 0x7fffffff;
      iVar26 = -0x7fffffff;
    }
    else {
      iVar26 = -0x7fffffff;
      iVar49 = 0x7fffffff;
      iVar43 = -0x7fffffff;
      iVar31 = -0x7fffffff;
      iVar25 = 0x7fffffff;
      iVar23 = 0x7fffffff;
      do {
        if (*(int *)ppppppuVar40 < iVar25) {
          iVar25 = *(int *)ppppppuVar40;
        }
        if (*(int *)((long)ppppppuVar40 + 4) < iVar23) {
          iVar23 = *(int *)((long)ppppppuVar40 + 4);
        }
        if (*(int *)(ppppppuVar40 + 1) < iVar49) {
          iVar49 = *(int *)(ppppppuVar40 + 1);
        }
        iVar44 = *(int *)((long)ppppppuVar40 + 0xc);
        if (*(int *)((long)ppppppuVar40 + 0xc) < iVar43) {
          iVar44 = iVar43;
        }
        iVar43 = iVar44;
        iVar44 = *(int *)(ppppppuVar40 + 2);
        if (*(int *)(ppppppuVar40 + 2) < iVar31) {
          iVar44 = iVar31;
        }
        iVar31 = iVar44;
        iVar44 = *(int *)((long)ppppppuVar40 + 0x14);
        if (*(int *)((long)ppppppuVar40 + 0x14) < iVar26) {
          iVar44 = iVar26;
        }
        iVar26 = iVar44;
        ppppppuVar40 = ppppppuVar40 + 3;
      } while (ppppppuVar40 != pppppppuStack_138[4]);
      uVar36 = CONCAT44(iVar23,iVar25);
      uVar18 = CONCAT44(iVar31,iVar43);
    }
    *puStack_e0 = uVar36;
    *(int *)(puStack_e0 + 1) = iVar49;
    *(undefined8 *)((long)puStack_e0 + 0xc) = uVar18;
    *(int *)((long)puStack_e0 + 0x14) = iVar26;
    puStack_e0[3] = pppppppuVar45;
    puStack_e0[4] = pppppppuStack_360;
    puStack_e0[5] = pppppppuVar37;
    if (pppppppuStack_120 != (undefined8 *******)0x0) {
      pppppppuStack_118 = pppppppuStack_120;
      func_0x0412a280(pppppppuStack_120,(long)pppppppuStack_110 - (long)pppppppuStack_120);
    }
    pppppppuVar37 = pppppppuStack_138;
    pppppppuVar15 = pppppppuStack_130;
    if (pppppppuStack_138 != (undefined8 *******)0x0) {
      for (; pppppppuVar37 != pppppppuVar15; pppppppuVar15 = pppppppuVar15 + -6) {
        ppppppuVar40 = pppppppuVar15[-3];
        if (ppppppuVar40 != (undefined8 ******)0x0) {
          pppppppuVar15[-2] = ppppppuVar40;
          func_0x0412a280(ppppppuVar40,(long)pppppppuVar15[-1] - (long)ppppppuVar40);
        }
      }
      pppppppuStack_130 = pppppppuVar37;
      func_0x0412a280(pppppppuStack_138,(long)pppppppuStack_128 - (long)pppppppuStack_138);
      puVar51 = puStack_e0;
    }
    func_0x0d2ff840(&pppppppuStack_1f0);
    return puVar51;
  }
  goto LAB_0d31e8a9;
LAB_0d31d6a2:
  plVar28 = plVar28 + 1;
  if (plVar28 == plVar9) goto LAB_0d31d510;
  goto LAB_0d31d6b1;
LAB_0d31d510:
  plVar28 = (long *)CONCAT44(uStack_304,
                             CONCAT13(auStack_308[3],
                                      CONCAT12(auStack_308[2],
                                               CONCAT11(auStack_308[1],auStack_308[0]))));
joined_r0x0d31da92:
  bVar7 = false;
  bVar54 = false;
  plVar9 = plStack_300;
  lVar27 = lStack_2e0;
joined_r0x0d31da92:
  plStack_300 = plVar28;
  if (plStack_300 != (long *)0x0) {
    func_0x0412a280(plStack_300,lStack_2f8 - (long)plStack_300);
    plVar9 = plStack_300;
    bVar54 = bVar7;
  }
  plStack_300 = plVar9;
  lVar27 = lVar27 + 1;
  if (lVar27 == 4 || bVar54) goto LAB_0d31e690;
  goto LAB_0d31d555;
LAB_0d31eeae:
  func_0x0629e090();
LAB_0d31eeb3:
  func_0x0d2e0130();
LAB_0d31eeb8:
  func_0x04882eb0();
LAB_0d31eebd:
  func_0x04aa1da0();
  pppppppuVar37 = uStack_3e8;
  pppppppuVar45 = uStack_3f0;
LAB_0d31eec2:
  uStack_3e8 = pppppppuVar37;
  uStack_3f0 = pppppppuVar45;
  func_0x0d2e0130();
LAB_0d31eec7:
  func_0x0d30a1b0();
LAB_0d31eecc:
  func_0x0d30a1d0();
LAB_0d31eed1:
  func_0x04aa2290();
LAB_0d31eed6:
  func_0x0d30a1c0();
LAB_0d31eedb:
  func_0x04fa48b0();
LAB_0d31eee0:
  func_0x0d31aca0();
LAB_0d31eee5:
  uVar18 = func_0x04882eb0();
  if (pppppppuStack_330 == (undefined8 *******)0x0) goto LAB_0d31f2d3;
  func_0x0412a280(pppppppuStack_330,(long)pppppppuStack_320 - (long)pppppppuStack_330);
  func_0x0d31f4f0(&plStack_218);
  uVar18 = _Unwind_Resume(uVar18);
  func_0x0d30a390(&uStack_348);
  func_0x0d31f4f0(&plStack_218);
  uVar18 = _Unwind_Resume(uVar18);
  func_0x0d2cacb0(&uStack_3f8);
  func_0x0d31f4f0(&plStack_218);
  uVar18 = _Unwind_Resume(uVar18);
  func_0x0d31f4f0(&plStack_218);
  uVar18 = _Unwind_Resume(uVar18);
  if ((uStack_248 & 1) != 0) goto LAB_0d31f374;
LAB_0d31f279:
  if (ppppppuStack_230 != (undefined8 ******)0x0) goto LAB_0d31f39e;
LAB_0d31f28a:
  if (pppppppuStack_328 != (undefined8 *******)0x0) goto LAB_0d31f3c7;
  do {
    lVar27 = CONCAT44(iStack_33c,iStack_340);
    while( true ) {
      if (lVar27 != 0) {
        iStack_338 = (int)lVar27;
        iStack_334 = (int)((ulong)lVar27 >> 0x20);
        func_0x0412a280(lVar27,(long)pppppppuStack_330 - lVar27);
      }
      func_0x0412a280(unaff_R12,(long)pppppppuStack_368 - (long)unaff_R12);
LAB_0d31f2d3:
      func_0x0d31f4f0(&plStack_218);
      uVar18 = _Unwind_Resume(uVar18);
      plVar28 = (long *)CONCAT44(uStack_304,
                                 CONCAT13(auStack_308[3],
                                          CONCAT12(auStack_308[2],
                                                   CONCAT11(auStack_308[1],auStack_308[0]))));
      if (plVar28 != (long *)0x0) {
        plStack_300 = plVar28;
        func_0x0412a280(plVar28,lStack_2f8 - (long)plVar28);
      }
      if (lStack_3d8 != 0) {
        lStack_3d0 = lStack_3d8;
        func_0x0412a280(lStack_3d8,lStack_3c8 - lStack_3d8);
      }
      if (uStack_3f0 != (undefined8 *******)0x0) {
        uStack_3e8._0_4_ = (int)uStack_3f0;
        uStack_3e8._4_4_ = (int)((ulong)uStack_3f0 >> 0x20);
        func_0x0412a280(uStack_3f0,lStack_3e0 - (long)uStack_3f0);
      }
      if ((uStack_248 & 1) == 0) goto LAB_0d31f279;
LAB_0d31f374:
      func_0x0412a280(lStack_238,uStack_248 & 0xfffffffffffffffe);
      if (ppppppuStack_230 == (undefined8 ******)0x0) goto LAB_0d31f28a;
LAB_0d31f39e:
      ppppppuStack_228 = ppppppuStack_230;
      func_0x0412a280(ppppppuStack_230,lStack_220 - (long)ppppppuStack_230);
      if (pppppppuStack_328 == (undefined8 *******)0x0) break;
LAB_0d31f3c7:
      pppppppuStack_320 = pppppppuStack_328;
      func_0x0412a280(pppppppuStack_328,lStack_318 - (long)pppppppuStack_328);
      lVar27 = CONCAT44(iStack_33c,iStack_340);
    }
  } while( true );
LAB_0d31e690:
  if (lStack_3d8 != 0) {
    lStack_3d0 = lStack_3d8;
    func_0x0412a280(lStack_3d8,lStack_3c8 - lStack_3d8);
  }
  lVar27 = CONCAT44(uStack_3f0._4_4_,(int)uStack_3f0);
  if (lVar27 != 0) {
    uStack_3e8._0_4_ = (int)uStack_3f0;
    uStack_3e8._4_4_ = uStack_3f0._4_4_;
    func_0x0412a280(lVar27,lStack_3e0 - lVar27);
  }
  pppppppuVar15 = pppppppuStack_98 + 4;
  if (bVar54 || pppppppuVar15 == pppppppuStack_2a0) goto LAB_0d31cbc6;
  goto LAB_0d31d250;
}


