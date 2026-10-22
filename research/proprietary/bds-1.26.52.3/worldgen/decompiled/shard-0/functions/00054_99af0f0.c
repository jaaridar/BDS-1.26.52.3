/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9aaf0f0 (ELF vaddr 0x99af0f0)
 * Label: caller-of-callee
 * Body:  [[09aaf0f0, 09aaf590] [09aaf5a0, 09aaf638] [09aaf640, 09aaf982] [09aaf990, 09aafa2d] [09aafa30, 09aafa52] [09aafa60, 09aafb1a] [09aafb20, 09aafbac] [09aafbb0, 09aafbe4] [09aafbf0, 09aafc59] [09aafc60, 09aafc79] [09aafc80, 09aafd15] [09aafd20, 09aafd8a] [09aafd90, 09aafde9] [09aafdf0, 09aafe37] [09aafe40, 09aafe64] [09aafe70, 09ab0025] [09ab0030, 09ab00c3] [09ab00d0, 09ab0109] [09ab0110, 09ab04ed] [09ab04f0, 09ab061e] [09ab0620, 09ab06ed] [09ab06f0, 09ab0724] [09ab0730, 09ab0799] [09ab07a0, 09ab07b9] [09ab07c0, 09ab0855] [09ab0860, 09ab089d] [09ab08a0, 09ab08f6] [09ab0900, 09ab0924] [09ab0930, 09ab0d1c] [09ab0d20, 09ab10a4] [09ab10b0, 09ab1470] [09ab1480, 09ab1587] [09ab1590, 09ab15c4] [09ab15d0, 09ab1635] [09ab1640, 09ab1658] [09ab1660, 09ab1f27]]
 * Ghidra: FUN_09aaf0f0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_09aaf0f0(long param_1,long *param_2,byte *param_3)

{
  long lVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined2 uVar8;
  undefined6 uVar9;
  char cVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  ulong uVar22;
  undefined7 *puVar23;
  byte *pbVar24;
  long *plVar25;
  long lVar26;
  byte *pbVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  byte *pbVar31;
  bool bVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  byte *pbStack_320;
  byte *pbStack_318;
  long lStack_310;
  long *plStack_308;
  long *plStack_300;
  undefined8 *puStack_2f8;
  long lStack_2f0;
  undefined4 uStack_2e8;
  ulong uStack_2e0;
  long lStack_2d8;
  byte bStack_2d0;
  undefined7 uStack_2cf;
  ulong uStack_2c8;
  byte *pbStack_2c0;
  byte *pbStack_2b8;
  byte *pbStack_2b0;
  long lStack_2a8;
  byte *pbStack_2a0;
  byte *pbStack_298;
  byte *pbStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  long lStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 uStack_268;
  long lStack_260;
  byte bStack_258;
  undefined7 *puStack_248;
  ulong uStack_240;
  undefined1 auStack_238 [4];
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  int *piStack_228;
  byte *pbStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  byte bStack_208;
  undefined7 uStack_207;
  ulong uStack_200;
  undefined7 *puStack_1f8;
  byte bStack_1f0;
  undefined7 uStack_1ef;
  ulong uStack_1e8;
  undefined7 *puStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined4 uStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  long *plStack_1a0;
  ulong uStack_198;
  float fStack_190;
  long lStack_188;
  ulong uStack_180;
  byte *pbStack_178;
  ulong uStack_170;
  float fStack_168;
  long lStack_160;
  undefined2 uStack_158;
  undefined6 uStack_156;
  undefined2 uStack_150;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  ulong uStack_140;
  undefined1 auStack_138 [16];
  byte *pbStack_128;
  byte *pbStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  long lStack_f0;
  byte bStack_e8;
  long lStack_68;
  undefined7 *puStack_60;
  ulong uStack_58;
  undefined7 *puStack_50;
  ulong uStack_48;
  undefined7 *puStack_40;
  ulong uStack_38;
  
  lStack_2d8 = *param_2;
  lStack_68 = param_1;
  if ((param_3[0x18] & 1) == 0) {
    piStack_228 = *(int **)(param_3 + 0x28);
    auStack_238 = *(undefined1 (*) [4])(param_3 + 0x18);
    uStack_234 = *(undefined4 *)(param_3 + 0x1c);
    uStack_230 = *(undefined4 *)(param_3 + 0x20);
    uStack_22c = *(undefined4 *)(param_3 + 0x24);
  }
  else {
    FUN_0412e5e0(auStack_238,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x20));
  }
  pbVar31 = param_3 + 1;
  bVar32 = (*param_3 & 1) == 0;
  pbStack_128 = *(byte **)(param_3 + 0x10);
  if (bVar32) {
    pbStack_128 = pbVar31;
  }
  pbStack_120 = (byte *)(ulong)(*param_3 >> 1);
  if (!bVar32) {
    pbStack_120 = (byte *)*(ulong *)(param_3 + 8);
  }
  puStack_118 = &UNK_012713f5;
  puStack_110 = (undefined *)0x10;
  func_0x048ad670(&bStack_1f0,&pbStack_128,2,0x2f);
  bVar32 = (*param_3 & 1) == 0;
  pbStack_128 = *(byte **)(param_3 + 0x10);
  if (bVar32) {
    pbStack_128 = pbVar31;
  }
  pbStack_120 = (byte *)(ulong)(*param_3 >> 1);
  if (!bVar32) {
    pbStack_120 = (byte *)*(ulong *)(param_3 + 8);
  }
  puStack_118 = &UNK_0146923d;
  puStack_110 = (undefined *)0xe;
  func_0x048ad670(&bStack_2d0,&pbStack_128,2,0x2f);
  bVar32 = (*param_3 & 1) != 0;
  pbStack_128 = pbVar31;
  if (bVar32) {
    pbStack_128 = *(byte **)(param_3 + 0x10);
  }
  pbStack_120 = (byte *)(ulong)(*param_3 >> 1);
  if (bVar32) {
    pbStack_120 = *(byte **)(param_3 + 8);
  }
  puStack_118 = &UNK_0138004d;
  puStack_110 = (undefined *)0xc;
  func_0x048ad670(&bStack_208,&pbStack_128,2,0x2f);
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  lStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0x3f800000;
  lStack_1b0 = 0;
  uStack_1a8 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_198 = 0;
  fStack_190 = 1.0;
  lStack_188 = 0;
  uStack_180 = 0;
  pbStack_178 = (byte *)0x0;
  uStack_170 = 0;
  fStack_168 = 1.0;
  lStack_160 = 0;
  uStack_158 = 0;
  uStack_156 = 0;
  uStack_150 = 0;
  uStack_14e = 0;
  uStack_148 = 0;
  if ((DAT_0f7b8fb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f7b8fb8), iVar11 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  uStack_38 = (ulong)(bStack_1f0 >> 1);
  puVar23 = &uStack_1ef;
  puStack_40 = puVar23;
  if ((bStack_1f0 & 1) != 0) {
    uStack_38 = uStack_1e8;
    puStack_40 = puStack_1e0;
  }
  cVar10 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&puStack_40);
  if (cVar10 != '\0') {
    if (DAT_0f7b8fb8 == '\0') goto LAB_09ab1e3f;
    while( true ) {
      uStack_48 = (ulong)(bStack_1f0 >> 1);
      puStack_50 = puVar23;
      if ((bStack_1f0 & 1) != 0) {
        uStack_48 = uStack_1e8;
        puStack_50 = puStack_1e0;
      }
      (**(code **)(_DAT_0f7b8f98 + 0x60))(&pbStack_128,&DAT_0f7b8f98,&puStack_50);
      plStack_308 = (long *)0x74e8f49157620b10;
      plStack_300 = (long *)&UNK_0140f690;
      puStack_2f8 = (undefined8 *)0x1;
      lStack_2f0 = CONCAT44(lStack_2f0._4_4_,0x36);
      if (bStack_e8 == 0) {
        func_0x0eedea30(&pbStack_320);
        func_0x0eedeb80(2,0x2d,&pbStack_128,&pbStack_320,&plStack_308);
        if (((ulong)pbStack_320 & 1) != 0) {
          thunk_FUN_0ee326a0(lStack_310,(ulong)pbStack_320 & 0xfffffffffffffffe);
        }
      }
      bStack_258 = bStack_e8;
      if ((bStack_e8 & 1) == 0) break;
      puStack_288 = puStack_118;
      pbStack_298 = pbStack_128;
      pbStack_290 = pbStack_120;
      func_0x04863060(&pbStack_220,0);
      func_0x0485e1c0(&pbStack_128);
      if (bStack_258 == 0) {
        func_0x05d8b230(&pbStack_298);
      }
      cVar10 = func_0x0485e320(&pbStack_128,&pbStack_298,&pbStack_220,0);
      if (cVar10 == '\0') {
        pbVar31 = pbStack_2c0;
        if ((bStack_2d0 & 1) == 0) {
          pbVar31 = (byte *)&uStack_2cf;
        }
        func_0x0eede920(0,1,0,0x1d,8,&UNK_013c1f41,100,&UNK_013676a8,pbVar31);
        goto LAB_09ab01f9;
      }
      uVar12 = func_0x04864680(&pbStack_220,&UNK_01247cf6);
      cVar10 = func_0x04864260(uVar12);
      if (cVar10 == '\0') {
        pbStack_320 = (byte *)((ulong)pbStack_320 & 0xffffffffffff0000);
        func_0x04863cb0(&plStack_308,uVar12,&pbStack_320);
        uStack_148 = func_0x09e24b50(&plStack_308);
        if (((ulong)plStack_308 & 1) != 0) {
          thunk_FUN_0ee326a0(puStack_2f8,(ulong)plStack_308 & 0xfffffffffffffffe);
        }
        if (((ulong)pbStack_320 & 1) != 0) {
          thunk_FUN_0ee326a0(lStack_310,(ulong)pbStack_320 & 0xfffffffffffffffe);
        }
      }
      uVar12 = func_0x04864680(&pbStack_220,&UNK_01314a0c);
      cVar10 = func_0x04864260(uVar12);
      if (cVar10 != '\0') goto LAB_09aaf916;
      func_0x04865630(&pbStack_2b8,uVar12);
      func_0x048656b0(&puStack_248,uVar12);
LAB_09aaf5a8:
      cVar10 = func_0x04862c80(&pbStack_2b8,&puStack_248);
      if (cVar10 != '\0') {
        func_0x04862b40(&puStack_248);
        func_0x04862b40(&pbStack_2b8);
        goto LAB_09aaf916;
      }
      uVar12 = func_0x04862b80(&pbStack_2b8);
      pbStack_320 = (byte *)((ulong)pbStack_320 & 0xffffffffffff0000);
      func_0x04863cb0(&plStack_308,uVar12,&pbStack_320);
      lVar28 = lStack_160;
      puVar4 = (undefined8 *)CONCAT62(uStack_156,uStack_158);
      if (puVar4 < (undefined8 *)CONCAT62(uStack_14e,uStack_150)) {
        puVar4[2] = puStack_2f8;
        *puVar4 = plStack_308;
        puVar4[1] = plStack_300;
        plStack_308 = (long *)0x0;
        plStack_300 = (long *)0x0;
        puStack_2f8 = (undefined8 *)0x0;
        uStack_158 = SUB82(puVar4 + 3,0);
        uStack_156 = (undefined6)((ulong)(puVar4 + 3) >> 0x10);
joined_r0x09aaf7cb:
        if (((ulong)pbStack_320 & 1) != 0) {
          thunk_FUN_0ee326a0(lStack_310,(ulong)pbStack_320 & 0xfffffffffffffffe);
        }
        func_0x04862ba0(&pbStack_2b8);
        goto LAB_09aaf5a8;
      }
      puVar23 = (undefined7 *)((long)puVar4 - lStack_160);
      uVar30 = ((long)puVar23 >> 3) * -0x5555555555555555 + 1;
      if (uVar30 < 0xaaaaaaaaaaaaaab) {
        lVar26 = (long)CONCAT62(uStack_14e,uStack_150) - lStack_160;
        lVar13 = lVar26 >> 3;
        uVar15 = lVar13 * 0x5555555555555556;
        if (uVar30 < uVar15) {
          uVar30 = uVar15;
        }
        if (0x555555555555554 < (ulong)(lVar13 * -0x5555555555555555)) {
          uVar30 = 0xaaaaaaaaaaaaaaa;
        }
        if (0xaaaaaaaaaaaaaaa < uVar30) goto LAB_09ab1e3a;
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar30 * 0x18);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar30 * 0x18,0);
        }
        lVar29 = lVar13 + uVar30 * 0x18;
        *(undefined8 **)(lVar13 + 0x10 + (long)puVar23) = puStack_2f8;
        *(undefined8 *)(lVar13 + (long)puVar23) = plStack_308;
        ((undefined8 *)(lVar13 + (long)puVar23))[1] = plStack_300;
        plStack_308 = (long *)0x0;
        plStack_300 = (long *)0x0;
        puStack_2f8 = (undefined8 *)0x0;
        lVar1 = lVar13 + 0x18 + (long)puVar23;
        func_0x0eee2f00(lVar13,lVar28,puVar23);
        uStack_158 = (undefined2)lVar1;
        uVar8 = uStack_158;
        uStack_156 = (undefined6)((ulong)lVar1 >> 0x10);
        uVar9 = uStack_156;
        uStack_150 = (undefined2)lVar29;
        uStack_14e = (undefined6)((ulong)lVar29 >> 0x10);
        lStack_160 = lVar13;
        uStack_158 = uVar8;
        uStack_156 = uVar9;
        if ((lVar28 != 0) &&
           (thunk_FUN_0ee326a0(lVar28,lVar26), uStack_158 = uVar8, uStack_156 = uVar9,
           ((ulong)plStack_308 & 1) != 0)) {
          thunk_FUN_0ee326a0(puStack_2f8,(ulong)plStack_308 & 0xfffffffffffffffe);
        }
        goto joined_r0x09aaf7cb;
      }
      func_0x0488efe0();
LAB_09ab1e3a:
      func_0x04882eb0();
LAB_09ab1e3f:
      iVar11 = func_0x04108328(&DAT_0f7b8fb8);
      if (iVar11 != 0) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
      }
    }
    pbStack_298 = pbStack_128;
    pbStack_290 = pbStack_120;
    puStack_288 = puStack_118;
    puStack_280 = puStack_110;
    lStack_278 = lStack_108;
    uStack_270 = uStack_100;
    uStack_26c = uStack_fc;
    uStack_268 = CONCAT44(uStack_f4,uStack_f8);
    lStack_260 = lStack_f0;
    pbVar31 = pbStack_2c0;
    if ((bStack_2d0 & 1) == 0) {
      pbVar31 = (byte *)&uStack_2cf;
    }
    func_0x0eede920(0,1,0,0x1d,8,&UNK_013c1f41,0x6c,&UNK_012951e1,pbVar31);
    goto joined_r0x09aaf883;
  }
  goto LAB_09ab02da;
LAB_09aaf916:
  uVar12 = func_0x04864680(&pbStack_220,&UNK_013e8e5e);
  func_0x04863480(&puStack_248,uVar12);
  cVar10 = func_0x04864260(&puStack_248);
  if (cVar10 == '\0') {
    func_0x04865230(&pbStack_2b8,&puStack_248);
    pbStack_2a0 = pbStack_2b0;
    pbVar31 = pbStack_2b8;
    if (pbStack_2b8 != pbStack_2b0) {
      do {
        uVar12 = func_0x04864970(&puStack_248,pbVar31);
        puStack_2f8 = (undefined8 *)0x0;
        lStack_2f0 = 0;
        plStack_308 = (long *)0x0;
        plStack_300 = (long *)0x0;
        uStack_2e8 = 0x3f800000;
        func_0x04865230(&pbStack_320,uVar12);
        pbVar6 = pbStack_318;
        pbVar27 = pbStack_320;
        for (pbVar24 = pbStack_320; pbStack_320 = pbVar27, pbVar24 != pbVar6;
            pbVar24 = pbVar24 + 0x18) {
          uVar14 = func_0x04864990(uVar12,pbVar24);
          func_0x09ab22c0(&plStack_308,pbVar24,pbVar24,uVar14);
          pbVar27 = pbStack_320;
        }
        pbVar24 = pbStack_318;
        if (pbVar27 != (byte *)0x0) {
          for (; pbVar27 != pbVar24; pbVar24 = pbVar24 + -0x18) {
            if ((pbVar24[-0x18] & 1) != 0) {
              thunk_FUN_0ee326a0(*(undefined8 *)(pbVar24 + -8),
                                 *(ulong *)(pbVar24 + -0x18) & 0xfffffffffffffffe);
            }
          }
          pbStack_318 = pbVar27;
          thunk_FUN_0ee326a0(pbStack_320,lStack_310 - (long)pbStack_320);
        }
        pbVar24 = pbVar31 + 1;
        bVar32 = (*pbVar31 & 1) == 0;
        pbVar27 = *(byte **)(pbVar31 + 0x10);
        if (bVar32) {
          pbVar27 = pbVar24;
        }
        uVar30 = (ulong)(*pbVar31 >> 1);
        if (!bVar32) {
          uVar30 = *(ulong *)(pbVar31 + 8);
        }
        uVar15 = func_0x04883620(&pbStack_320,pbVar27,uVar30);
        uVar30 = uStack_180;
        if (uStack_180 != 0) {
          uVar22 = uStack_180 - (uStack_180 >> 1 & 0x5555555555555555);
          uVar22 = (uVar22 >> 2 & 0x3333333333333333) + (uVar22 & 0x3333333333333333);
          uVar22 = ((uVar22 >> 4) + uVar22 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar22 >> 0x38 < 2) {
            uVar19 = uStack_180 - 1 & uVar15;
          }
          else {
            uVar19 = uVar15;
            if (uStack_180 <= uVar15) {
              if ((uVar15 | uStack_180) >> 0x20 == 0) {
                uVar19 = (uVar15 & 0xffffffff) % (uStack_180 & 0xffffffff);
              }
              else {
                uVar19 = uVar15 % uStack_180;
              }
            }
          }
          plVar17 = *(long **)(lStack_188 + uVar19 * 8);
          uStack_2e0 = uVar19;
          if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
            if ((*pbVar31 & 1) == 0) {
              uVar21 = (ulong)(*pbVar31 >> 1);
            }
            else {
              uVar21 = *(ulong *)(pbVar31 + 8);
              pbVar24 = *(byte **)(pbVar31 + 0x10);
            }
            if ((byte)(uVar22 >> 0x38) < 2) {
              uVar22 = uStack_180 - 1;
              uStack_140 = uVar22;
              do {
                if (plVar17[1] == uVar15) {
                  bVar2 = *(byte *)(plVar17 + 2);
                  if ((bVar2 & 1) == 0) {
                    uVar18 = (ulong)(bVar2 >> 1);
                  }
                  else {
                    uVar18 = plVar17[3];
                  }
                  if (uVar18 == uVar21) {
                    if ((bVar2 & 1) == 0) {
                      lVar28 = (long)plVar17 + 0x11;
                    }
                    else {
                      lVar28 = plVar17[4];
                    }
                    iVar11 = func_0x0eee3000(lVar28,pbVar24,uVar21);
                    uVar22 = uStack_140;
                    uVar19 = uStack_2e0;
                    plVar25 = plStack_308;
                    puVar4 = puStack_2f8;
                    if (iVar11 == 0) goto joined_r0x09ab0098;
                  }
                }
                else if ((plVar17[1] & uVar22) != uVar19) break;
                plVar17 = (long *)*plVar17;
              } while (plVar17 != (long *)0x0);
            }
            else {
              do {
                uVar22 = plVar17[1];
                if (uVar22 == uVar15) {
                  bVar2 = *(byte *)(plVar17 + 2);
                  if ((bVar2 & 1) == 0) {
                    uVar22 = (ulong)(bVar2 >> 1);
                  }
                  else {
                    uVar22 = plVar17[3];
                  }
                  if (uVar22 == uVar21) {
                    if ((bVar2 & 1) == 0) {
                      lVar28 = (long)plVar17 + 0x11;
                    }
                    else {
                      lVar28 = plVar17[4];
                    }
                    iVar11 = func_0x0eee3000(lVar28,pbVar24,uVar21);
                    uVar19 = uStack_2e0;
                    plVar25 = plStack_308;
                    puVar4 = puStack_2f8;
                    if (iVar11 == 0) goto joined_r0x09ab0098;
                  }
                }
                else {
                  if (uVar30 <= uVar22) {
                    if ((uVar22 | uVar30) >> 0x20 == 0) {
                      uVar22 = (uVar22 & 0xffffffff) % (uVar30 & 0xffffffff);
                    }
                    else {
                      uVar22 = uVar22 % uVar30;
                    }
                  }
                  if (uVar22 != uVar19) break;
                }
                plVar17 = (long *)*plVar17;
              } while (plVar17 != (long *)0x0);
            }
          }
        }
        pbVar24 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
        if (pbVar24 == (byte *)0x0) {
          func_0x0eec74c0(0x50,0);
        }
        pbStack_318 = (byte *)&lStack_188;
        lStack_310 = 0;
        pbVar24[0] = 0;
        pbVar24[1] = 0;
        pbVar24[2] = 0;
        pbVar24[3] = 0;
        pbVar24[4] = 0;
        pbVar24[5] = 0;
        pbVar24[6] = 0;
        pbVar24[7] = 0;
        *(ulong *)(pbVar24 + 8) = uVar15;
        pbStack_320 = pbVar24;
        if ((*pbVar31 & 1) == 0) {
          *(undefined8 *)(pbVar24 + 0x20) = *(undefined8 *)(pbVar31 + 0x10);
          uVar12 = *(undefined8 *)(pbVar31 + 8);
          *(undefined8 *)(pbVar24 + 0x10) = *(undefined8 *)pbVar31;
          *(undefined8 *)(pbVar24 + 0x18) = uVar12;
        }
        else {
          FUN_0412e5e0(pbVar24 + 0x10,*(undefined8 *)(pbVar31 + 0x10),*(undefined8 *)(pbVar31 + 8));
        }
        plVar25 = plStack_300;
        plVar17 = plStack_308;
        plStack_308 = (long *)0x0;
        *(long **)(pbVar24 + 0x28) = plVar17;
        *(long **)(pbVar24 + 0x30) = plStack_300;
        plStack_300 = (long *)0x0;
        *(undefined8 **)(pbVar24 + 0x38) = puStack_2f8;
        *(long *)(pbVar24 + 0x40) = lStack_2f0;
        *(undefined4 *)(pbVar24 + 0x48) = uStack_2e8;
        if (lStack_2f0 != 0) {
          plVar16 = (long *)puStack_2f8[1];
          if (((ulong)plVar25 & (long)plVar25 - 1U) == 0) {
            plVar16 = (long *)((ulong)plVar16 & (long)plVar25 - 1U);
          }
          else if (plVar25 <= plVar16) {
            if (((ulong)plVar16 | (ulong)plVar25) >> 0x20 == 0) {
              plVar16 = (long *)(((ulong)plVar16 & 0xffffffff) % ((ulong)plVar25 & 0xffffffff));
            }
            else {
              plVar16 = (long *)((ulong)plVar16 % (ulong)plVar25);
            }
          }
          plVar17[(long)plVar16] = (long)(pbVar24 + 0x38);
          puStack_2f8 = (undefined8 *)0x0;
          lStack_2f0 = 0;
        }
        lStack_310 = CONCAT71(lStack_310._1_7_,1);
        if ((long)uVar30 < 0) {
          fVar33 = (float)uVar30;
          if (uVar30 != 0) goto LAB_09aafe54;
LAB_09aafe70:
          uVar22 = 1;
          if (2 < uVar30) {
            uVar22 = (ulong)((uVar30 & uVar30 - 1) != 0);
          }
          uVar22 = uVar30 * 2 | uVar22;
          fVar33 = (float)ceilf((float)(uStack_170 + 1) / fStack_168);
          uVar30 = (long)(fVar33 - _DAT_01198778) & (long)fVar33 >> 0x3f | (long)fVar33;
          if (uVar30 < uVar22) {
            uVar30 = uVar22;
          }
          uVar22 = 2;
          if ((uVar30 == 1) || (uVar22 = uVar30, (uVar30 & uVar30 - 1) == 0)) {
            bVar32 = uVar22 < uStack_180;
            if (uVar22 <= uStack_180) goto LAB_09aaff0b;
LAB_09aafee1:
            func_0x048f8410(&lStack_188,uVar22);
          }
          else {
            uVar22 = func_0x0412c3f0();
            bVar32 = uVar22 < uStack_180;
            if (uStack_180 < uVar22) goto LAB_09aafee1;
LAB_09aaff0b:
            uVar30 = uStack_180;
            if (bVar32) {
              fVar33 = (float)ceilf((float)uStack_170 / fStack_168);
              uVar19 = (long)(fVar33 - _DAT_01198778) & (long)fVar33 >> 0x3f | (long)fVar33;
              if ((uVar30 < 3) ||
                 (uVar21 = uVar30 - (uVar30 >> 1 & 0x5555555555555555),
                 uVar21 = (uVar21 >> 2 & 0x3333333333333333) + (uVar21 & 0x3333333333333333),
                 1 < (byte)(((uVar21 >> 4) + uVar21 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           ))) {
                uVar19 = func_0x0412c3f0(uVar19);
              }
              else if (1 < uVar19) {
                lVar28 = 0x3f;
                if (uVar19 - 1 != 0) {
                  for (; uVar19 - 1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                  }
                }
                uVar19 = 1L << (-((byte)lVar28 ^ 0x3f) & 0x3f);
              }
              if (uVar22 <= uVar19) {
                uVar22 = uVar19;
              }
              if (uVar22 < uVar30) goto LAB_09aafee1;
            }
          }
          uVar30 = uStack_180;
          if ((uStack_180 & uStack_180 - 1) == 0) {
            uVar22 = uVar15 & uStack_180 - 1;
          }
          else {
            uVar22 = uVar15;
            if (uStack_180 <= uVar15) {
              if ((uVar15 | uStack_180) >> 0x20 == 0) {
                uVar22 = (uVar15 & 0xffffffff) % (uStack_180 & 0xffffffff);
              }
              else {
                uVar22 = uVar15 % uStack_180;
              }
            }
          }
        }
        else {
          fVar33 = (float)(long)uVar30;
          if (uVar30 == 0) goto LAB_09aafe70;
LAB_09aafe54:
          uVar22 = uStack_2e0;
          if (fVar33 * fStack_168 < (float)(uStack_170 + 1)) goto LAB_09aafe70;
        }
        puVar4 = *(undefined8 **)(lStack_188 + uVar22 * 8);
        if (puVar4 == (undefined8 *)0x0) {
          *(byte **)pbStack_320 = pbStack_178;
          pbStack_178 = pbStack_320;
          *(byte ***)(lStack_188 + uVar22 * 8) = &pbStack_178;
          if (*(long *)pbStack_320 != 0) {
            uVar15 = *(ulong *)(*(long *)pbStack_320 + 8);
            if ((uVar30 & uVar30 - 1) == 0) {
              *(byte **)(lStack_188 + (uVar15 & uVar30 - 1) * 8) = pbStack_320;
            }
            else {
              if (uVar30 <= uVar15) {
                if ((uVar15 | uVar30) >> 0x20 == 0) {
                  *(byte **)(lStack_188 + ((uVar15 & 0xffffffff) % (uVar30 & 0xffffffff)) * 8) =
                       pbStack_320;
                  goto LAB_09ab0083;
                }
                uVar15 = uVar15 % uVar30;
              }
              *(byte **)(lStack_188 + uVar15 * 8) = pbStack_320;
            }
          }
        }
        else {
          *(undefined8 *)pbStack_320 = *puVar4;
          *puVar4 = pbStack_320;
        }
LAB_09ab0083:
        uStack_170 = uStack_170 + 1;
        plVar25 = plStack_308;
        puVar4 = puStack_2f8;
joined_r0x09ab0098:
        while (puVar4 != (undefined8 *)0x0) {
          puVar3 = (undefined8 *)*puVar4;
          plStack_308 = plVar25;
          FUN_04863610(puVar4 + 5);
          if ((*(byte *)(puVar4 + 2) & 1) != 0) {
            thunk_FUN_0ee326a0(puVar4[4],puVar4[2] & 0xfffffffffffffffe);
          }
          thunk_FUN_0ee326a0(puVar4,0x38);
          plVar25 = plStack_308;
          puVar4 = puVar3;
        }
        plStack_308 = (long *)0x0;
        if (plVar25 != (long *)0x0) {
          thunk_FUN_0ee326a0(plVar25,(long)plStack_300 << 3);
        }
        pbVar31 = pbVar31 + 0x18;
      } while (pbVar31 != pbStack_2a0);
    }
    pbVar24 = pbStack_2b8;
    pbVar31 = pbStack_2b0;
    if (pbStack_2b8 != (byte *)0x0) {
      for (; pbVar24 != pbVar31; pbVar31 = pbVar31 + -0x18) {
        if ((pbVar31[-0x18] & 1) != 0) {
          thunk_FUN_0ee326a0(*(undefined8 *)(pbVar31 + -8),
                             *(ulong *)(pbVar31 + -0x18) & 0xfffffffffffffffe);
        }
      }
      pbStack_2b0 = pbVar24;
      thunk_FUN_0ee326a0(pbStack_2b8,lStack_2a8 - (long)pbStack_2b8);
    }
  }
  FUN_04863610(&puStack_248);
LAB_09ab01f9:
  func_0x0485e2d0(&pbStack_128);
  FUN_04863610(&pbStack_220);
joined_r0x09aaf883:
  if (bStack_258 == 1) {
    if (((ulong)pbStack_298 & 1) != 0) {
      uVar30 = (ulong)pbStack_298 & 0xfffffffffffffffe;
      goto LAB_09ab02d5;
    }
  }
  else {
    lVar28 = CONCAT44(uStack_26c,uStack_270);
    if (lVar28 != 0) {
      lVar13 = lVar28;
      if (lVar28 != uStack_268) {
        do {
          uStack_268 = uStack_268 + -0x40;
          func_0x048b3e80(uStack_268);
        } while (uStack_268 != lVar28);
        lVar13 = CONCAT44(uStack_26c,uStack_270);
      }
      uStack_268 = lVar28;
      thunk_FUN_0ee326a0(lVar13,lStack_260 - lVar13);
    }
    puVar7 = puStack_288;
    puVar5 = puStack_280;
    if (puStack_288 != (undefined *)0x0) {
      for (; puVar7 != puVar5; puVar5 = puVar5 + -0x50) {
        if ((puVar5[-8] == '\x01') && ((puVar5[-0x30] & 1) != 0)) {
          thunk_FUN_0ee326a0(*(undefined8 *)(puVar5 + -0x20),
                             *(ulong *)(puVar5 + -0x30) & 0xfffffffffffffffe);
        }
      }
      puStack_280 = puVar7;
      uVar30 = lStack_278 - (long)puStack_288;
LAB_09ab02d5:
      thunk_FUN_0ee326a0(puStack_288,uVar30);
    }
  }
LAB_09ab02da:
  if ((DAT_0f7b8fb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f7b8fb8), iVar11 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  uStack_240 = (ulong)(bStack_208 >> 1);
  puStack_248 = &uStack_207;
  if ((bStack_208 & 1) != 0) {
    uStack_240 = uStack_200;
    puStack_248 = puStack_1f8;
  }
  cVar10 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&puStack_248);
  if (cVar10 != '\0') {
    if ((DAT_0f7b8fb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f7b8fb8), iVar11 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    puStack_60 = &uStack_207;
    uStack_58 = (ulong)(bStack_208 >> 1);
    if ((bStack_208 & 1) != 0) {
      uStack_58 = uStack_200;
      puStack_60 = puStack_1f8;
    }
    (**(code **)(_DAT_0f7b8f98 + 0x60))(&pbStack_128,&DAT_0f7b8f98,&puStack_60);
    plStack_308 = (long *)0x74e8f49157620b10;
    plStack_300 = (long *)&UNK_0140f690;
    puStack_2f8 = (undefined8 *)0x1;
    lStack_2f0 = CONCAT44(lStack_2f0._4_4_,0x72);
    if (bStack_e8 == 0) {
      func_0x0eedea30(&pbStack_320);
      func_0x0eedeb80(2,0x2d,&pbStack_128,&pbStack_320,&plStack_308);
      if (((ulong)pbStack_320 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_310,(ulong)pbStack_320 & 0xfffffffffffffffe);
      }
    }
    bStack_258 = bStack_e8;
    if ((bStack_e8 & 1) == 0) {
      pbStack_298 = pbStack_128;
      pbStack_290 = pbStack_120;
      puStack_288 = puStack_118;
      puStack_280 = puStack_110;
      lStack_278 = lStack_108;
      uStack_270 = uStack_100;
      uStack_26c = uStack_fc;
      uStack_268 = CONCAT44(uStack_f4,uStack_f8);
      lStack_260 = lStack_f0;
      pbVar31 = pbStack_2c0;
      if ((bStack_2d0 & 1) == 0) {
        pbVar31 = (byte *)&uStack_2cf;
      }
      func_0x0eede920(0,1,0,0xc,8,&UNK_013c1f41,0x93,&UNK_012951e1,pbVar31);
      if (bStack_258 != 1) goto LAB_09ab0dc2;
LAB_09ab0ccb:
      if (((ulong)pbStack_298 & 1) == 0) goto LAB_09ab0e7a;
      uVar30 = (ulong)pbStack_298 & 0xfffffffffffffffe;
    }
    else {
      puStack_288 = puStack_118;
      pbStack_298 = pbStack_128;
      pbStack_290 = pbStack_120;
      func_0x04863060(auStack_138,0);
      func_0x0485e1c0(&pbStack_128);
      if (bStack_258 == 0) {
        func_0x05d8b230(&pbStack_298);
      }
      cVar10 = func_0x0485e320(&pbStack_128,&pbStack_298,auStack_138,0);
      if (cVar10 == '\0') {
        pbVar31 = pbStack_2c0;
        if ((bStack_2d0 & 1) == 0) {
          pbVar31 = (byte *)&uStack_2cf;
        }
        func_0x0eede920(0,1,0,0xc,8,&UNK_013c1f41,0x8b,&UNK_013676a8,pbVar31);
      }
      else {
        func_0x04865230(&pbStack_320,auStack_138);
        if (pbStack_320 != pbStack_318) {
          pbStack_2a0 = pbStack_318;
          pbVar31 = pbStack_318;
          pbVar24 = pbStack_320;
          do {
            uVar12 = func_0x04864970(auStack_138,pbVar24);
            cVar10 = func_0x04865490(uVar12);
            if (cVar10 == '\0') {
              if ((*pbVar24 & 1) == 0) {
                pbVar27 = pbVar24 + 1;
              }
              else {
                pbVar27 = *(byte **)(pbVar24 + 0x10);
              }
              puVar23 = &uStack_207;
              if ((bStack_208 & 1) != 0) {
                puVar23 = puStack_1f8;
              }
              func_0x0eede920(0,1,0,0xc,4,&UNK_013c1f41,0x82,&UNK_01367705,pbVar27,puVar23);
            }
            else {
              pbStack_220 = (byte *)((ulong)pbStack_220 & 0xffffffffffff0000);
              func_0x04863cb0(&pbStack_2b8,uVar12,&pbStack_220);
              pbVar31 = pbVar24 + 1;
              bVar32 = (*pbVar24 & 1) == 0;
              pbVar27 = *(byte **)(pbVar24 + 0x10);
              if (bVar32) {
                pbVar27 = pbVar31;
              }
              uVar30 = (ulong)(*pbVar24 >> 1);
              if (!bVar32) {
                uVar30 = *(ulong *)(pbVar24 + 8);
              }
              uVar15 = func_0x04883620(&plStack_308,pbVar27,uVar30);
              uVar30 = uStack_1a8;
              if (uStack_1a8 != 0) {
                uVar22 = uStack_1a8 - (uStack_1a8 >> 1 & 0x5555555555555555);
                uVar22 = (uVar22 >> 2 & 0x3333333333333333) + (uVar22 & 0x3333333333333333);
                uVar22 = ((uVar22 >> 4) + uVar22 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
                if (uVar22 >> 0x38 < 2) {
                  uVar19 = uStack_1a8 - 1 & uVar15;
                }
                else {
                  uVar19 = uVar15;
                  if (uStack_1a8 <= uVar15) {
                    if ((uVar15 | uStack_1a8) >> 0x20 == 0) {
                      uVar19 = (uVar15 & 0xffffffff) % (uStack_1a8 & 0xffffffff);
                    }
                    else {
                      uVar19 = uVar15 % uStack_1a8;
                    }
                  }
                }
                plVar17 = *(long **)(lStack_1b0 + uVar19 * 8);
                uStack_2e0 = uVar19;
                if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)
                   ) {
                  if ((*pbVar24 & 1) == 0) {
                    uVar21 = (ulong)(*pbVar24 >> 1);
                  }
                  else {
                    uVar21 = *(ulong *)(pbVar24 + 8);
                    pbVar31 = *(byte **)(pbVar24 + 0x10);
                  }
                  if ((byte)(uVar22 >> 0x38) < 2) {
                    uVar22 = uStack_1a8 - 1;
                    uStack_140 = uVar22;
                    do {
                      if (plVar17[1] == uVar15) {
                        bVar2 = *(byte *)(plVar17 + 2);
                        if ((bVar2 & 1) == 0) {
                          uVar18 = (ulong)(bVar2 >> 1);
                        }
                        else {
                          uVar18 = plVar17[3];
                        }
                        if (uVar18 == uVar21) {
                          if ((bVar2 & 1) == 0) {
                            lVar28 = (long)plVar17 + 0x11;
                          }
                          else {
                            lVar28 = plVar17[4];
                          }
                          iVar11 = func_0x0eee3000(lVar28,pbVar31,uVar21);
                          uVar22 = uStack_140;
                          uVar19 = uStack_2e0;
                          if (iVar11 == 0) goto LAB_09ab0b37;
                        }
                      }
                      else if ((plVar17[1] & uVar22) != uVar19) break;
                      plVar17 = (long *)*plVar17;
                    } while (plVar17 != (long *)0x0);
                  }
                  else {
                    do {
                      uVar22 = plVar17[1];
                      if (uVar22 == uVar15) {
                        bVar2 = *(byte *)(plVar17 + 2);
                        if ((bVar2 & 1) == 0) {
                          uVar22 = (ulong)(bVar2 >> 1);
                        }
                        else {
                          uVar22 = plVar17[3];
                        }
                        if (uVar22 == uVar21) {
                          if ((bVar2 & 1) == 0) {
                            lVar28 = (long)plVar17 + 0x11;
                          }
                          else {
                            lVar28 = plVar17[4];
                          }
                          iVar11 = func_0x0eee3000(lVar28,pbVar31,uVar21);
                          uVar19 = uStack_2e0;
                          if (iVar11 == 0) goto LAB_09ab0b37;
                        }
                      }
                      else {
                        if (uVar30 <= uVar22) {
                          if ((uVar22 | uVar30) >> 0x20 == 0) {
                            uVar22 = (uVar22 & 0xffffffff) % (uVar30 & 0xffffffff);
                          }
                          else {
                            uVar22 = uVar22 % uVar30;
                          }
                        }
                        if (uVar22 != uVar19) break;
                      }
                      plVar17 = (long *)*plVar17;
                    } while (plVar17 != (long *)0x0);
                  }
                }
              }
              plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
              if (plVar17 == (long *)0x0) {
                func_0x0eec74c0(0x40,0);
              }
              plStack_300 = &lStack_1b0;
              puStack_2f8 = (undefined8 *)0x0;
              *plVar17 = 0;
              plVar17[1] = uVar15;
              plStack_308 = plVar17;
              if ((*pbVar24 & 1) == 0) {
                plVar17[4] = *(long *)(pbVar24 + 0x10);
                lVar28 = *(long *)(pbVar24 + 8);
                plVar17[2] = *(long *)pbVar24;
                plVar17[3] = lVar28;
              }
              else {
                FUN_0412e5e0(plVar17 + 2,*(undefined8 *)(pbVar24 + 0x10),
                             *(undefined8 *)(pbVar24 + 8));
              }
              plVar17[7] = lStack_2a8;
              plVar17[5] = (long)pbStack_2b8;
              plVar17[6] = (long)pbStack_2b0;
              pbStack_2b8 = (byte *)0x0;
              pbStack_2b0 = (byte *)0x0;
              lStack_2a8 = 0;
              puStack_2f8 = (undefined8 *)CONCAT71(puStack_2f8._1_7_,1);
              if ((long)uVar30 < 0) {
                fVar33 = (float)uVar30;
                if (uVar30 != 0) goto LAB_09ab0914;
LAB_09ab0930:
                uVar22 = 1;
                if (2 < uVar30) {
                  uVar22 = (ulong)((uVar30 & uVar30 - 1) != 0);
                }
                uVar22 = uVar30 * 2 | uVar22;
                fVar33 = (float)ceilf((float)(uStack_198 + 1) / fStack_190);
                uVar30 = (long)(fVar33 - _DAT_01198778) & (long)fVar33 >> 0x3f | (long)fVar33;
                if (uVar30 < uVar22) {
                  uVar30 = uVar22;
                }
                uVar22 = 2;
                if ((uVar30 == 1) || (uVar22 = uVar30, (uVar30 & uVar30 - 1) == 0)) {
                  bVar32 = uVar22 < uStack_1a8;
                  if (uVar22 <= uStack_1a8) goto LAB_09ab09cb;
LAB_09ab09a1:
                  func_0x04883ab0(&lStack_1b0,uVar22);
                }
                else {
                  uVar22 = func_0x0412c3f0();
                  bVar32 = uVar22 < uStack_1a8;
                  if (uStack_1a8 < uVar22) goto LAB_09ab09a1;
LAB_09ab09cb:
                  uVar30 = uStack_1a8;
                  if (bVar32) {
                    fVar33 = (float)ceilf((float)uStack_198 / fStack_190);
                    uVar19 = (long)(fVar33 - _DAT_01198778) & (long)fVar33 >> 0x3f | (long)fVar33;
                    if ((uVar30 < 3) ||
                       (uVar21 = uVar30 - (uVar30 >> 1 & 0x5555555555555555),
                       uVar21 = (uVar21 >> 2 & 0x3333333333333333) + (uVar21 & 0x3333333333333333),
                       1 < (byte)(((uVar21 >> 4) + uVar21 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                 >> 0x38))) {
                      uVar19 = func_0x0412c3f0(uVar19);
                    }
                    else if (1 < uVar19) {
                      lVar28 = 0x3f;
                      if (uVar19 - 1 != 0) {
                        for (; uVar19 - 1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                        }
                      }
                      uVar19 = 1L << (-((byte)lVar28 ^ 0x3f) & 0x3f);
                    }
                    if (uVar22 <= uVar19) {
                      uVar22 = uVar19;
                    }
                    if (uVar22 < uVar30) goto LAB_09ab09a1;
                  }
                }
                uVar30 = uStack_1a8;
                if ((uStack_1a8 & uStack_1a8 - 1) == 0) {
                  uVar22 = uVar15 & uStack_1a8 - 1;
                }
                else {
                  uVar22 = uVar15;
                  if (uStack_1a8 <= uVar15) {
                    if ((uVar15 | uStack_1a8) >> 0x20 == 0) {
                      uVar22 = (uVar15 & 0xffffffff) % (uStack_1a8 & 0xffffffff);
                    }
                    else {
                      uVar22 = uVar15 % uStack_1a8;
                    }
                  }
                }
              }
              else {
                fVar33 = (float)(long)uVar30;
                if (uVar30 == 0) goto LAB_09ab0930;
LAB_09ab0914:
                uVar22 = uStack_2e0;
                if (fVar33 * fStack_190 < (float)(uStack_198 + 1)) goto LAB_09ab0930;
              }
              plVar17 = *(long **)(lStack_1b0 + uVar22 * 8);
              if (plVar17 == (long *)0x0) {
                *plStack_308 = (long)plStack_1a0;
                plStack_1a0 = plStack_308;
                *(long ***)(lStack_1b0 + uVar22 * 8) = &plStack_1a0;
                if (*plStack_308 != 0) {
                  uVar15 = *(ulong *)(*plStack_308 + 8);
                  if ((uVar30 & uVar30 - 1) == 0) {
                    *(long **)(lStack_1b0 + (uVar15 & uVar30 - 1) * 8) = plStack_308;
                  }
                  else {
                    if (uVar30 <= uVar15) {
                      if ((uVar15 | uVar30) >> 0x20 == 0) {
                        *(long **)(lStack_1b0 + ((uVar15 & 0xffffffff) % (uVar30 & 0xffffffff)) * 8)
                             = plStack_308;
                        goto LAB_09ab0b2f;
                      }
                      uVar15 = uVar15 % uVar30;
                    }
                    *(long **)(lStack_1b0 + uVar15 * 8) = plStack_308;
                  }
                }
              }
              else {
                *plStack_308 = *plVar17;
                *plVar17 = (long)plStack_308;
              }
LAB_09ab0b2f:
              uStack_198 = uStack_198 + 1;
LAB_09ab0b37:
              if (((ulong)pbStack_2b8 & 1) != 0) {
                thunk_FUN_0ee326a0(lStack_2a8,(ulong)pbStack_2b8 & 0xfffffffffffffffe);
              }
              pbVar31 = pbStack_2a0;
              if (((ulong)pbStack_220 & 1) != 0) {
                thunk_FUN_0ee326a0(uStack_210,(ulong)pbStack_220 & 0xfffffffffffffffe);
              }
            }
            pbVar24 = pbVar24 + 0x18;
          } while (pbVar24 != pbVar31);
        }
        pbVar24 = pbStack_320;
        pbVar31 = pbStack_318;
        if (pbStack_320 != (byte *)0x0) {
          for (; pbVar24 != pbVar31; pbVar31 = pbVar31 + -0x18) {
            if ((pbVar31[-0x18] & 1) != 0) {
              thunk_FUN_0ee326a0(*(undefined8 *)(pbVar31 + -8),
                                 *(ulong *)(pbVar31 + -0x18) & 0xfffffffffffffffe);
            }
          }
          pbStack_318 = pbVar24;
          thunk_FUN_0ee326a0(pbStack_320,lStack_310 - (long)pbStack_320);
        }
      }
      func_0x0485e2d0(&pbStack_128);
      FUN_04863610(auStack_138);
      if (bStack_258 == 1) goto LAB_09ab0ccb;
LAB_09ab0dc2:
      lVar28 = CONCAT44(uStack_26c,uStack_270);
      if (lVar28 != 0) {
        lVar26 = uStack_268;
        lVar13 = lVar28;
        if (lVar28 != uStack_268) {
          do {
            lVar26 = lVar26 + -0x40;
            func_0x048b3e80(lVar26);
          } while (lVar26 != lVar28);
          lVar13 = CONCAT44(uStack_26c,uStack_270);
        }
        uStack_268 = lVar28;
        thunk_FUN_0ee326a0(lVar13,lStack_260 - lVar13);
      }
      puVar7 = puStack_288;
      puVar5 = puStack_280;
      if (puStack_288 == (undefined *)0x0) goto LAB_09ab0e7a;
      for (; puVar7 != puVar5; puVar5 = puVar5 + -0x50) {
        if ((puVar5[-8] == '\x01') && ((puVar5[-0x30] & 1) != 0)) {
          thunk_FUN_0ee326a0(*(undefined8 *)(puVar5 + -0x20),
                             *(ulong *)(puVar5 + -0x30) & 0xfffffffffffffffe);
        }
      }
      puStack_280 = puVar7;
      uVar30 = lStack_278 - (long)puStack_288;
    }
    thunk_FUN_0ee326a0(puStack_288,uVar30);
  }
LAB_09ab0e7a:
  if ((DAT_0f7b8fb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f7b8fb8), iVar11 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  pbStack_2b0 = (byte *)(ulong)(bStack_2d0 >> 1);
  pbStack_2b8 = (byte *)&uStack_2cf;
  if ((bStack_2d0 & 1) != 0) {
    pbStack_2b0 = (byte *)uStack_2c8;
    pbStack_2b8 = pbStack_2c0;
  }
  cVar10 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&pbStack_2b8);
  if (cVar10 != '\0') {
    if ((DAT_0f7b8fb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f7b8fb8), iVar11 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    uStack_218 = (ulong)(bStack_2d0 >> 1);
    pbStack_220 = (byte *)&uStack_2cf;
    if ((bStack_2d0 & 1) != 0) {
      uStack_218 = uStack_2c8;
      pbStack_220 = pbStack_2c0;
    }
    (**(code **)(_DAT_0f7b8f98 + 0x60))(&pbStack_128,&DAT_0f7b8f98,&pbStack_220);
    plStack_308 = (long *)0x74e8f49157620b10;
    plStack_300 = (long *)&UNK_0140f690;
    puStack_2f8 = (undefined8 *)0x1;
    lStack_2f0 = CONCAT44(lStack_2f0._4_4_,0x99);
    if (bStack_e8 == 0) {
      func_0x0eedea30(&pbStack_320);
      func_0x0eedeb80(2,0x2d,&pbStack_128,&pbStack_320,&plStack_308);
      if (((ulong)pbStack_320 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_310,(ulong)pbStack_320 & 0xfffffffffffffffe);
      }
    }
    bStack_258 = bStack_e8;
    if ((bStack_e8 & 1) == 0) {
      pbStack_298 = pbStack_128;
      pbStack_290 = pbStack_120;
      puStack_288 = puStack_118;
      puStack_280 = puStack_110;
      lStack_278 = lStack_108;
      uStack_270 = uStack_100;
      uStack_26c = uStack_fc;
      uStack_268 = CONCAT44(uStack_f4,uStack_f8);
      lStack_260 = lStack_f0;
      pbVar31 = (byte *)&uStack_2cf;
      if ((bStack_2d0 & 1) != 0) {
        pbVar31 = pbStack_2c0;
      }
      func_0x0eede920(0,1,0,0xc,8,&UNK_013c1f41,0xb0,&UNK_012951e1,pbVar31);
      if (bStack_258 != 1) goto LAB_09ab1226;
LAB_09ab117b:
      if (((ulong)pbStack_298 & 1) == 0) goto LAB_09ab12ea;
      uVar30 = (ulong)pbStack_298 & 0xfffffffffffffffe;
    }
    else {
      puStack_288 = puStack_118;
      pbStack_298 = pbStack_128;
      pbStack_290 = pbStack_120;
      func_0x04863060(&pbStack_320,0);
      func_0x0485e1c0(&pbStack_128);
      if (bStack_258 == 0) {
        func_0x05d8b230(&pbStack_298);
      }
      cVar10 = func_0x0485e320(&pbStack_128,&pbStack_298,&pbStack_320,0);
      if (cVar10 == '\0') {
        pbVar31 = (byte *)&uStack_2cf;
        if ((bStack_2d0 & 1) != 0) {
          pbVar31 = pbStack_2c0;
        }
        func_0x0eede920(0,1,0,0xc,8,&UNK_013c1f41,0xa8,&UNK_013676a8,pbVar31);
      }
      else {
        func_0x04865230(&plStack_308,&pbStack_320);
        plVar17 = plStack_300;
        if (plStack_308 != plStack_300) {
          plVar25 = plStack_308;
          do {
            uVar12 = func_0x04864970(&pbStack_320,plVar25);
            func_0x09ab22c0(&lStack_1d8,plVar25,plVar25,uVar12);
            plVar25 = plVar25 + 3;
          } while (plVar25 != plVar17);
        }
        plVar25 = plStack_308;
        plVar17 = plStack_300;
        if (plStack_308 != (long *)0x0) {
          for (; plVar25 != plVar17; plVar17 = plVar17 + -3) {
            if ((*(byte *)(plVar17 + -3) & 1) != 0) {
              thunk_FUN_0ee326a0(plVar17[-1],plVar17[-3] & 0xfffffffffffffffe);
            }
          }
          plStack_300 = plVar25;
          thunk_FUN_0ee326a0(plStack_308,(long)puStack_2f8 - (long)plStack_308);
        }
      }
      func_0x0485e2d0(&pbStack_128);
      FUN_04863610(&pbStack_320);
      if (bStack_258 == 1) goto LAB_09ab117b;
LAB_09ab1226:
      lVar28 = CONCAT44(uStack_26c,uStack_270);
      if (lVar28 != 0) {
        lVar26 = uStack_268;
        lVar13 = lVar28;
        if (lVar28 != uStack_268) {
          do {
            lVar26 = lVar26 + -0x40;
            func_0x048b3e80(lVar26);
          } while (lVar26 != lVar28);
          lVar13 = CONCAT44(uStack_26c,uStack_270);
        }
        uStack_268 = lVar28;
        thunk_FUN_0ee326a0(lVar13,lStack_260 - lVar13);
      }
      puVar7 = puStack_288;
      puVar5 = puStack_280;
      if (puStack_288 == (undefined *)0x0) goto LAB_09ab12ea;
      for (; puVar7 != puVar5; puVar5 = puVar5 + -0x50) {
        if ((puVar5[-8] == '\x01') && ((puVar5[-0x30] & 1) != 0)) {
          thunk_FUN_0ee326a0(*(undefined8 *)(puVar5 + -0x20),
                             *(ulong *)(puVar5 + -0x30) & 0xfffffffffffffffe);
        }
      }
      puStack_280 = puVar7;
      uVar30 = lStack_278 - (long)puStack_288;
    }
    thunk_FUN_0ee326a0(puStack_288,uVar30);
  }
LAB_09ab12ea:
  lVar28 = lStack_2d8;
  if (((uint)auStack_238 & 1) == 0) {
    uVar30 = (ulong)(auStack_238[0] >> 1);
  }
  else {
    uVar30 = CONCAT44(uStack_22c,uStack_230);
  }
  if (uVar30 == 7) {
    piVar20 = (int *)(auStack_238 + 1);
    if (((uint)auStack_238 & 1) != 0) {
      piVar20 = piStack_228;
    }
    if (*(int *)((long)piVar20 + 3) == 0x746c7561 && *piVar20 == 0x61666564) {
      func_0x09aaed10(lStack_2d8 + 0x60,&lStack_1d8);
      func_0x06042870(lVar28 + 0x88,&lStack_1b0);
      func_0x09aaee50(lVar28 + 0xb0,&lStack_188);
      lVar13 = *(long *)(lVar28 + 0xd8);
      lVar26 = lVar28;
      if (lVar13 != 0) {
        lVar26 = *(long *)(lVar28 + 0xe0);
        lVar29 = lVar13;
        if (lVar13 != lVar26) {
          do {
            if ((*(byte *)(lVar26 + -0x18) & 1) != 0) {
              thunk_FUN_0ee326a0(*(undefined8 *)(lVar26 + -8),
                                 *(ulong *)(lVar26 + -0x18) & 0xfffffffffffffffe);
            }
            lVar26 = lVar26 + -0x18;
          } while (lVar26 != lVar13);
          lVar29 = *(long *)(lVar28 + 0xd8);
        }
        lVar26 = lStack_2d8;
        *(long *)(lStack_2d8 + 0xe0) = lVar13;
        thunk_FUN_0ee326a0(lVar29,*(long *)(lStack_2d8 + 0xe8) - lVar29);
        *(long *)(lVar28 + 0xd8) = 0;
        *(undefined8 *)(lVar28 + 0xe0) = 0;
        *(undefined8 *)(lVar28 + 0xe8) = 0;
      }
      *(long *)(lVar26 + 0xd8) = lStack_160;
      *(ulong *)(lVar26 + 0xe0) = CONCAT62(uStack_156,uStack_158);
      *(ulong *)(lVar26 + 0xe8) = CONCAT62(uStack_14e,uStack_150);
      lStack_160 = 0;
      uStack_158 = 0;
      uStack_156 = 0;
      uStack_150 = 0;
      uStack_14e = 0;
      *(undefined2 *)(lVar26 + 0xf0) = uStack_148;
      goto LAB_09ab1c00;
    }
  }
  piVar20 = piStack_228;
  if (((uint)auStack_238 & 1) == 0) {
    piVar20 = (int *)(auStack_238 + 1);
  }
  uVar15 = func_0x04883620(&pbStack_128,piVar20);
  pbVar31 = (byte *)(lVar28 + 0x38);
  uVar30 = *(ulong *)(lVar28 + 0x40);
  if (uVar30 != 0) {
    uVar22 = uVar30 - (uVar30 >> 1 & 0x5555555555555555);
    uVar22 = (uVar22 >> 2 & 0x3333333333333333) + (uVar22 & 0x3333333333333333);
    uVar22 = ((uVar22 >> 4) + uVar22 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar22 >> 0x38 < 2) {
      uVar19 = uVar30 - 1 & uVar15;
    }
    else {
      uVar19 = uVar15;
      if (uVar30 <= uVar15) {
        if ((uVar15 | uVar30) >> 0x20 == 0) {
          uVar19 = (uVar15 & 0xffffffff) % (uVar30 & 0xffffffff);
        }
        else {
          uVar19 = uVar15 % uVar30;
        }
      }
    }
    plVar17 = *(long **)(*(long *)pbVar31 + uVar19 * 8);
    uStack_2e0 = uVar19;
    if ((plVar17 != (long *)0x0) &&
       (plVar17 = (long *)*plVar17, lVar28 = lStack_2d8, plVar17 != (long *)0x0)) {
      if (((uint)auStack_238 & 1) == 0) {
        uVar21 = (ulong)(auStack_238[0] >> 1);
        piVar20 = (int *)(auStack_238 + 1);
      }
      else {
        uVar21 = CONCAT44(uStack_22c,uStack_230);
        piVar20 = piStack_228;
      }
      pbStack_2a0 = pbVar31;
      if ((byte)(uVar22 >> 0x38) < 2) {
        do {
          if (plVar17[1] == uVar15) {
            bVar2 = *(byte *)(plVar17 + 2);
            if ((bVar2 & 1) == 0) {
              uVar22 = (ulong)(bVar2 >> 1);
            }
            else {
              uVar22 = plVar17[3];
            }
            if (uVar22 == uVar21) {
              if ((bVar2 & 1) == 0) {
                lVar28 = (long)plVar17 + 0x11;
              }
              else {
                lVar28 = plVar17[4];
              }
              iVar11 = func_0x0eee3000(lVar28,piVar20,uVar21);
              uVar19 = uStack_2e0;
              if (iVar11 == 0) goto LAB_09ab1c00;
            }
          }
          else {
            pbVar31 = pbStack_2a0;
            lVar28 = lStack_2d8;
            if ((plVar17[1] & uVar30 - 1) != uVar19) break;
          }
          plVar17 = (long *)*plVar17;
          pbVar31 = pbStack_2a0;
          lVar28 = lStack_2d8;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar22 = plVar17[1];
          if (uVar22 == uVar15) {
            bVar2 = *(byte *)(plVar17 + 2);
            if ((bVar2 & 1) == 0) {
              uVar22 = (ulong)(bVar2 >> 1);
            }
            else {
              uVar22 = plVar17[3];
            }
            if (uVar22 == uVar21) {
              if ((bVar2 & 1) == 0) {
                lVar28 = (long)plVar17 + 0x11;
              }
              else {
                lVar28 = plVar17[4];
              }
              iVar11 = func_0x0eee3000(lVar28,piVar20,uVar21);
              uVar19 = uStack_2e0;
              if (iVar11 == 0) goto LAB_09ab1c00;
            }
          }
          else {
            if (uVar30 <= uVar22) {
              if ((uVar22 | uVar30) >> 0x20 == 0) {
                uVar22 = (uVar22 & 0xffffffff) % (uVar30 & 0xffffffff);
              }
              else {
                uVar22 = uVar22 % uVar30;
              }
            }
            pbVar31 = pbStack_2a0;
            lVar28 = lStack_2d8;
            if (uVar22 != uVar19) break;
          }
          plVar17 = (long *)*plVar17;
          pbVar31 = pbStack_2a0;
          lVar28 = lStack_2d8;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  pbVar24 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xc0);
  if (pbVar24 == (byte *)0x0) {
    func_0x0eec74c0(0xc0,0);
  }
  puStack_118 = (undefined *)0x0;
  pbVar24[0] = 0;
  pbVar24[1] = 0;
  pbVar24[2] = 0;
  pbVar24[3] = 0;
  pbVar24[4] = 0;
  pbVar24[5] = 0;
  pbVar24[6] = 0;
  pbVar24[7] = 0;
  *(ulong *)(pbVar24 + 8) = uVar15;
  pbStack_128 = pbVar24;
  pbStack_120 = pbVar31;
  if (((uint)auStack_238 & 1) == 0) {
    *(int **)(pbVar24 + 0x20) = piStack_228;
    *(ulong *)(pbVar24 + 0x10) = CONCAT44(uStack_234,auStack_238);
    *(ulong *)(pbVar24 + 0x18) = CONCAT44(uStack_22c,uStack_230);
  }
  else {
    FUN_0412e5e0(pbVar24 + 0x10,piStack_228,CONCAT44(uStack_22c,uStack_230));
  }
  uVar21 = uStack_180;
  lVar29 = lStack_188;
  uVar19 = uStack_1a8;
  lVar26 = lStack_1b0;
  uVar22 = uStack_1d0;
  lVar13 = lStack_1d8;
  lStack_1d8 = 0;
  *(long *)(pbVar24 + 0x28) = lVar13;
  *(ulong *)(pbVar24 + 0x30) = uStack_1d0;
  uStack_1d0 = 0;
  *(long *)(pbVar24 + 0x38) = lStack_1c8;
  *(long *)(pbVar24 + 0x40) = lStack_1c0;
  *(undefined4 *)(pbVar24 + 0x48) = uStack_1b8;
  if (lStack_1c0 != 0) {
    uVar18 = *(ulong *)(lStack_1c8 + 8);
    if ((uVar22 & uVar22 - 1) == 0) {
      uVar18 = uVar18 & uVar22 - 1;
    }
    else if (uVar22 <= uVar18) {
      if ((uVar18 | uVar22) >> 0x20 == 0) {
        uVar18 = (uVar18 & 0xffffffff) % (uVar22 & 0xffffffff);
      }
      else {
        uVar18 = uVar18 % uVar22;
      }
    }
    *(byte **)(lVar13 + uVar18 * 8) = pbVar24 + 0x38;
    lStack_1c8 = 0;
    lStack_1c0 = 0;
  }
  lStack_1b0 = 0;
  *(long *)(pbVar24 + 0x50) = lVar26;
  *(ulong *)(pbVar24 + 0x58) = uStack_1a8;
  uStack_1a8 = 0;
  *(long **)(pbVar24 + 0x60) = plStack_1a0;
  *(ulong *)(pbVar24 + 0x68) = uStack_198;
  *(float *)(pbVar24 + 0x70) = fStack_190;
  if (uStack_198 != 0) {
    uVar22 = plStack_1a0[1];
    if ((uVar19 & uVar19 - 1) == 0) {
      uVar22 = uVar22 & uVar19 - 1;
    }
    else if (uVar19 <= uVar22) {
      if ((uVar22 | uVar19) >> 0x20 == 0) {
        uVar22 = (uVar22 & 0xffffffff) % (uVar19 & 0xffffffff);
      }
      else {
        uVar22 = uVar22 % uVar19;
      }
    }
    *(byte **)(lVar26 + uVar22 * 8) = pbVar24 + 0x60;
    plStack_1a0 = (long *)0x0;
    uStack_198 = 0;
  }
  lStack_188 = 0;
  *(long *)(pbVar24 + 0x78) = lVar29;
  *(ulong *)(pbVar24 + 0x80) = uStack_180;
  uStack_180 = 0;
  *(byte **)(pbVar24 + 0x88) = pbStack_178;
  *(ulong *)(pbVar24 + 0x90) = uStack_170;
  *(float *)(pbVar24 + 0x98) = fStack_168;
  if (uStack_170 != 0) {
    uVar22 = *(ulong *)(pbStack_178 + 8);
    if ((uVar21 & uVar21 - 1) == 0) {
      uVar22 = uVar22 & uVar21 - 1;
    }
    else if (uVar21 <= uVar22) {
      if ((uVar22 | uVar21) >> 0x20 == 0) {
        uVar22 = (uVar22 & 0xffffffff) % (uVar21 & 0xffffffff);
      }
      else {
        uVar22 = uVar22 % uVar21;
      }
    }
    *(byte **)(lVar29 + uVar22 * 8) = pbVar24 + 0x88;
    pbStack_178 = (byte *)0x0;
    uStack_170 = 0;
  }
  *(long *)(pbVar24 + 0xa0) = lStack_160;
  *(ulong *)(pbVar24 + 0xa8) = CONCAT62(uStack_156,uStack_158);
  *(ulong *)(pbVar24 + 0xb0) = CONCAT62(uStack_14e,uStack_150);
  lStack_160 = 0;
  uStack_158 = 0;
  uStack_156 = 0;
  uStack_150 = 0;
  uStack_14e = 0;
  *(undefined2 *)(pbVar24 + 0xb8) = uStack_148;
  puStack_118 = (undefined *)CONCAT71(puStack_118._1_7_,1);
  fVar33 = (float)(*(long *)(lVar28 + 0x50) + 1);
  if ((long)uVar30 < 0) {
    fVar35 = (float)uVar30;
    fVar34 = *(float *)(lVar28 + 0x58);
    if (uVar30 != 0) goto LAB_09ab19ed;
LAB_09ab19fe:
    uVar22 = 1;
    if (2 < uVar30) {
      uVar22 = (ulong)((uVar30 & uVar30 - 1) != 0);
    }
    uVar22 = uVar22 | uVar30 * 2;
    fVar33 = (float)ceilf(fVar33 / fVar34);
    uVar30 = (long)(fVar33 - _DAT_01198778) & (long)fVar33 >> 0x3f | (long)fVar33;
    if (uVar30 < uVar22) {
      uVar30 = uVar22;
    }
    uVar22 = 2;
    if ((uVar30 == 1) || (uVar22 = uVar30, (uVar30 & uVar30 - 1) == 0)) {
      uVar30 = *(ulong *)(lStack_2d8 + 0x40);
      bVar32 = uVar22 < uVar30;
      if (uVar22 <= uVar30) goto LAB_09ab1a9e;
LAB_09ab1a78:
      func_0x048f6c60(pbVar31,uVar22);
    }
    else {
      uVar22 = func_0x0412c3f0();
      uVar30 = *(ulong *)(lStack_2d8 + 0x40);
      bVar32 = uVar22 < uVar30;
      if (uVar30 < uVar22) goto LAB_09ab1a78;
LAB_09ab1a9e:
      if (bVar32) {
        fVar33 = (float)ceilf((float)*(ulong *)(lStack_2d8 + 0x50) / *(float *)(lStack_2d8 + 0x58));
        uVar19 = (long)(fVar33 - _DAT_01198778) & (long)fVar33 >> 0x3f | (long)fVar33;
        if ((uVar30 < 3) ||
           (uVar21 = uVar30 - (uVar30 >> 1 & 0x5555555555555555),
           uVar21 = (uVar21 >> 2 & 0x3333333333333333) + (uVar21 & 0x3333333333333333),
           1 < (byte)(((uVar21 >> 4) + uVar21 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar19 = func_0x0412c3f0(uVar19);
        }
        else if (1 < uVar19) {
          lVar28 = 0x3f;
          if (uVar19 - 1 != 0) {
            for (; uVar19 - 1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
            }
          }
          uVar19 = 1L << (-((byte)lVar28 ^ 0x3f) & 0x3f);
        }
        if (uVar22 <= uVar19) {
          uVar22 = uVar19;
        }
        if (uVar22 < uVar30) goto LAB_09ab1a78;
      }
    }
    uVar30 = *(ulong *)(lStack_2d8 + 0x40);
    lVar28 = lStack_2d8;
    if ((uVar30 & uVar30 - 1) == 0) {
      uVar22 = uVar15 & uVar30 - 1;
    }
    else {
      uVar22 = uVar15;
      if (uVar30 <= uVar15) {
        if ((uVar15 | uVar30) >> 0x20 == 0) {
          uVar22 = (uVar15 & 0xffffffff) % (uVar30 & 0xffffffff);
        }
        else {
          uVar22 = uVar15 % uVar30;
        }
      }
    }
  }
  else {
    fVar35 = (float)(long)uVar30;
    fVar34 = *(float *)(lVar28 + 0x58);
    if (uVar30 == 0) goto LAB_09ab19fe;
LAB_09ab19ed:
    uVar22 = uStack_2e0;
    if (fVar35 * fVar34 < fVar33) goto LAB_09ab19fe;
  }
  lVar13 = *(long *)pbVar31;
  puVar4 = *(undefined8 **)(lVar13 + uVar22 * 8);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)pbStack_128 = *(undefined8 *)(lVar28 + 0x48);
    *(byte **)(lVar28 + 0x48) = pbStack_128;
    *(long *)(lVar13 + uVar22 * 8) = lVar28 + 0x48;
    if (*(long *)pbStack_128 != 0) {
      uVar15 = *(ulong *)(*(long *)pbStack_128 + 8);
      if ((uVar30 & uVar30 - 1) == 0) {
        *(byte **)(lVar13 + (uVar15 & uVar30 - 1) * 8) = pbStack_128;
      }
      else {
        if (uVar30 <= uVar15) {
          if ((uVar15 | uVar30) >> 0x20 == 0) {
            *(byte **)(lVar13 + ((uVar15 & 0xffffffff) % (uVar30 & 0xffffffff)) * 8) = pbStack_128;
            goto LAB_09ab1bfc;
          }
          uVar15 = uVar15 % uVar30;
        }
        *(byte **)(lVar13 + uVar15 * 8) = pbStack_128;
      }
    }
  }
  else {
    *(undefined8 *)pbStack_128 = *puVar4;
    *puVar4 = pbStack_128;
  }
LAB_09ab1bfc:
  *(long *)(lVar28 + 0x50) = *(long *)(lVar28 + 0x50) + 1;
LAB_09ab1c00:
  lVar28 = lStack_68;
  *(undefined1 *)(lStack_68 + 0x40) = 1;
  func_0x048f69d0(&lStack_1d8);
  if ((bStack_208 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_1f8,CONCAT71(uStack_207,bStack_208) & 0xfffffffffffffffe);
  }
  if ((bStack_2d0 & 1) != 0) {
    thunk_FUN_0ee326a0(pbStack_2c0,CONCAT71(uStack_2cf,bStack_2d0) & 0xfffffffffffffffe);
  }
  if ((bStack_1f0 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_1e0,CONCAT71(uStack_1ef,bStack_1f0) & 0xfffffffffffffffe);
  }
  if (((uint)auStack_238 & 1) != 0) {
    thunk_FUN_0ee326a0(piStack_228,CONCAT44(uStack_234,auStack_238) & 0xfffffffffffffffe);
  }
  return lVar28;
}


