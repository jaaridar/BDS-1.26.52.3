/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x64db970 (ELF vaddr 0x63db970)
 * Label: caller-of-callee
 * Body:  [[064db970, 064dbdbd] [064dbdc0, 064dbfb5] [064dbfc0, 064dbff5] [064dc000, 064dc067] [064dc070, 064dc089] [064dc090, 064dc324] [064dc330, 064dc6ec] [064dc6f0, 064dc724] [064dc730, 064dc796] [064dc7a0, 064dc7b9] [064dc7c0, 064dca12] [064dca20, 064dce30] [064dce40, 064ddce8] [064ddcf0, 064decf1] [064ded00, 064df3bd] [064df3c0, 064df421] [064df430, 064df4a6] [064df4b0, 064df558] [064df560, 064df5dc] [064df5e0, 064df725] [064dfbee, 064dfbf6] [064dfdaa, 064dfde7] [064dfebc, 064dfedb]]
 * Ghidra: FUN_064db970
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_064db970(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined7 *puVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  code *pcVar19;
  byte *pbVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined7 *puVar24;
  undefined7 *puVar25;
  ulong uVar26;
  undefined7 *puVar27;
  long lVar28;
  undefined7 *puVar29;
  long *plVar30;
  ulong uVar31;
  long lVar32;
  long *plVar33;
  uint uVar34;
  undefined2 *puVar35;
  bool bVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  ulong uStack_7e8;
  undefined1 auStack_7d8 [4];
  undefined4 uStack_7d4;
  undefined1 uStack_7d0;
  undefined1 uStack_7cf;
  undefined2 uStack_7ce;
  undefined4 uStack_7cc;
  undefined8 *puStack_7c8;
  undefined4 uStack_7c0;
  undefined1 uStack_7bc;
  undefined1 uStack_7bb;
  undefined2 uStack_7ba;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  long lStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 *puStack_798;
  undefined8 uStack_788;
  undefined8 uStack_780;
  char cStack_778;
  undefined8 uStack_777;
  undefined4 uStack_76f;
  undefined1 uStack_76b;
  undefined2 uStack_76a;
  undefined8 *puStack_768;
  undefined1 auStack_760 [4];
  undefined4 uStack_75c;
  uint uStack_758;
  undefined4 uStack_754;
  undefined8 *puStack_750;
  undefined8 *puStack_748;
  undefined8 **ppuStack_740;
  undefined8 **ppuStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  long lStack_720;
  long lStack_718;
  long lStack_710;
  undefined8 *puStack_708;
  long *plStack_700;
  long *plStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined4 uStack_6d0;
  undefined2 uStack_6cc;
  undefined2 uStack_6ca;
  undefined4 uStack_6c8;
  undefined2 uStack_6c4;
  undefined1 uStack_6c2;
  undefined1 uStack_6c1;
  undefined8 uStack_6c0;
  undefined4 uStack_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  long lStack_6a8;
  undefined8 *puStack_698;
  undefined1 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 *puStack_678;
  undefined1 auStack_670 [16];
  undefined8 *puStack_660;
  undefined1 auStack_658 [16];
  undefined8 uStack_648;
  undefined8 uStack_640;
  code *pcStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined8 *puStack_600;
  code *pcStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined *puStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined *puStack_5c0;
  code *pcStack_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined8 uStack_5a0;
  undefined *puStack_598;
  undefined2 uStack_58c;
  undefined1 auStack_588 [24];
  code *pcStack_570;
  byte bStack_540;
  undefined7 uStack_53f;
  undefined1 uStack_538;
  undefined7 uStack_537;
  undefined1 uStack_530;
  undefined7 uStack_52f;
  ulong uStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  ulong uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 *puStack_4e0;
  undefined1 auStack_4d8 [16];
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 *puStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  byte *pbStack_408;
  undefined1 auStack_400 [16];
  undefined8 uStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  long *plStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 auStack_3a0 [24];
  code *pcStack_388;
  undefined1 auStack_360 [24];
  code *pcStack_348;
  undefined1 auStack_318 [24];
  code *pcStack_300;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 uStack_2b8;
  code *apcStack_2b0 [2];
  undefined1 auStack_2a0 [24];
  code *apcStack_288 [3];
  code *pcStack_270;
  undefined1 auStack_260 [24];
  code *apcStack_248 [3];
  code *pcStack_230;
  undefined1 auStack_220 [24];
  code *pcStack_208;
  undefined1 auStack_200 [24];
  code *pcStack_1e8;
  undefined1 auStack_1d8 [24];
  code *apcStack_1c0 [2];
  undefined1 auStack_1b0 [24];
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [8];
  code *pcStack_158;
  code *pcStack_148;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [8];
  code *pcStack_118;
  code *pcStack_108;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [16];
  code *pcStack_d0;
  code *pcStack_c8;
  undefined1 auStack_98 [24];
  code *pcStack_80;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  
  bStack_540 = 0x1e;
  uStack_53f = 0x75736552637052;
  uStack_538 = 0x6c;
  uStack_537 = 0x6d616572745374;
  uStack_530 = 0;
  uStack_2d8._0_4_ = 0x6370521e;
  uStack_2d8._4_4_ = 0x75736552;
  uStack_2d0._0_4_ = 0x7453746c;
  uStack_2d0._4_4_ = 0x6d616572;
  puStack_2c8 = (undefined8 *)((ulong)puStack_2c8 & 0xffffffffffffff00);
  lStack_520 = 0;
  lStack_518 = 0;
  lStack_510 = 0;
  lStack_508 = 0;
  lStack_500 = 0;
  lStack_4f8 = 0;
  uStack_4f0 = 0;
  uStack_4e8 = 0;
  puStack_4e0 = (undefined8 *)0x0;
  uStack_528 = param_2;
  func_0x048b1dc0(auStack_4d8);
  func_0x048b1dc0(&uStack_4c8);
  uStack_428 = 0;
  uStack_420 = 0;
  uStack_438 = 0;
  uStack_430 = 0;
  uStack_448 = 0;
  uStack_440 = 0;
  uStack_458 = 0;
  uStack_450 = 0;
  uStack_468 = 0;
  uStack_460 = 0;
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_488 = (undefined8 *)0x0;
  puStack_480 = (undefined8 *)0x0;
  uStack_498 = 0;
  uStack_490 = 0;
  uStack_4a8 = 0;
  uStack_4a0 = 0;
  uStack_4b8 = 0;
  uStack_4b0 = 0;
  if ((uStack_4f0 & 1) == 0) {
    puStack_4e0 = puStack_2c8;
    uStack_4f0 = CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8);
    uStack_4e8 = CONCAT44(uStack_2d0._4_4_,(undefined4)uStack_2d0);
  }
  else {
    func_0x04885120(&uStack_4f0,(long)&uStack_2d8 + 1,0xf);
    if (((uint)uStack_2d8 & 1) != 0) {
      func_0x0412a280(puStack_2c8,CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8) & 0xfffffffffffffffe);
    }
  }
  uStack_7c0 = 0x61657208;
  uStack_7bc = 100;
  uStack_7bb = 0;
  auStack_760 = (undefined1  [4])0x7165720e;
  uStack_75c = 0x74736575;
  uStack_758 = uStack_758 & 0xffffff00;
  uStack_418 = (undefined8 *)0x0;
  uStack_410 = (undefined4 *)0x0;
  pbStack_408 = (byte *)0x0;
  func_0x048b1dc0(auStack_400);
  func_0x0652b590(&uStack_3f0);
  uStack_50 = param_1;
  if (((ulong)uStack_418 & 1) == 0) {
    if (((uint)auStack_760 & 1) == 0) {
      pbStack_408 = (byte *)puStack_750;
      uStack_418 = (undefined8 *)CONCAT44(uStack_75c,auStack_760);
      uStack_410 = (undefined4 *)CONCAT44(uStack_754,uStack_758);
    }
    else {
      func_0x04885070(&uStack_418,puStack_750,CONCAT44(uStack_754,uStack_758));
    }
  }
  else {
    bVar36 = ((uint)auStack_760 & 1) != 0;
    puVar18 = (undefined8 *)(auStack_760 + 1);
    if (bVar36) {
      puVar18 = puStack_750;
    }
    uVar23 = (ulong)(auStack_760[0] >> 1);
    if (bVar36) {
      uVar23 = CONCAT44(uStack_754,uStack_758);
    }
    func_0x04885120(&uStack_418,puVar18,uVar23);
  }
  auStack_400 = func_0x06522e70();
  uStack_7e8 = uStack_528;
  lVar11 = func_0x06522ca0();
  uStack_688 = (undefined8 **)CONCAT44(uStack_688._4_4_,*(undefined4 *)(lVar11 + 8));
  uStack_2d8 = &uStack_688;
  lVar12 = func_0x06520320(uStack_7e8 + 0x78,&uStack_688,&UNK_01563a4f,&uStack_2d8,&puStack_748);
  uStack_2d8._0_4_ = 0xf037f68;
  uStack_2d8._4_4_ = 0;
  uStack_2b8 = &uStack_2d8;
  func_0x06521a20(&uStack_2d8,lVar12 + 0x20);
  if (uStack_2b8 == &uStack_2d8) {
    lVar12 = 0x20;
LAB_064dbc82:
    (**(code **)(*uStack_2b8 + lVar12))();
  }
  else {
    lVar12 = 0x28;
    if (uStack_2b8 != (long *)0x0) goto LAB_064dbc82;
  }
  uStack_688 = (undefined8 **)CONCAT44(uStack_688._4_4_,*(undefined4 *)(lVar11 + 8));
  uStack_2d8 = &uStack_688;
  lVar12 = func_0x06521b10(uStack_7e8 + 0xa0,&uStack_688,&UNK_01563a4f,&uStack_2d8,&puStack_748);
  uStack_2d8._0_4_ = 0xf038070;
  uStack_2d8._4_4_ = 0;
  uStack_2b8 = &uStack_2d8;
  func_0x065224e0(&uStack_2d8,lVar12 + 0x20);
  if (uStack_2b8 == &uStack_2d8) {
    lVar12 = 0x20;
LAB_064dbd0a:
    (**(code **)(*uStack_2b8 + lVar12))();
  }
  else {
    lVar12 = 0x28;
    if (uStack_2b8 != (long *)0x0) goto LAB_064dbd0a;
  }
  uStack_2d8._0_4_ = 0;
  uStack_2d8._4_4_ = 0;
  uStack_2d0._0_4_ = 0;
  uStack_2d0._4_4_ = 0;
  puStack_2c8 = (undefined8 *)0x0;
  uStack_688 = (undefined8 **)CONCAT44(_UNK_0f0380f4,_DAT_0f0380f0);
  uStack_680 = CONCAT44(_UNK_0f0380fc,_UNK_0f0380f8);
  lVar12 = func_0x0651ddc0(&uStack_2d8,&uStack_688);
  uStack_2d0._0_4_ = (undefined4)lVar12;
  uStack_2d0._4_4_ = (undefined4)((ulong)lVar12 >> 0x20);
  if (CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8) == lVar12) {
    if (lVar12 != 0) {
      uStack_2d0._0_4_ = (uint)uStack_2d8;
      uStack_2d0._4_4_ = uStack_2d8._4_4_;
      func_0x0412a280(CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8),(long)puStack_2c8 - lVar12);
    }
  }
  else {
    puStack_748 = (undefined8 *)CONCAT44(puStack_748._4_4_,*(undefined4 *)(lVar11 + 8));
    uStack_688 = &puStack_748;
    lVar12 = func_0x065225d0(uStack_7e8 + 200,&puStack_748,&UNK_01563a4f,&uStack_688,&uStack_788);
    lVar11 = *(long *)(lVar12 + 0x18);
    if (lVar11 != 0) {
      lVar28 = *(long *)(lVar12 + 0x20);
      lVar32 = lVar11;
      if (lVar11 != lVar28) {
        do {
          if ((*(byte *)(lVar28 + -0x18) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar28 + -8),
                            *(ulong *)(lVar28 + -0x18) & 0xfffffffffffffffe);
          }
          lVar28 = lVar28 + -0x18;
        } while (lVar28 != lVar11);
        lVar32 = *(long *)(lVar12 + 0x18);
      }
      *(long *)(lVar12 + 0x20) = lVar11;
      func_0x0412a280(lVar32,*(long *)(lVar12 + 0x28) - lVar32);
      *(long *)(lVar12 + 0x18) = 0;
      *(undefined8 *)(lVar12 + 0x20) = 0;
      *(undefined8 *)(lVar12 + 0x28) = 0;
    }
    *(uint *)(lVar12 + 0x18) = (uint)uStack_2d8;
    *(undefined4 *)(lVar12 + 0x1c) = uStack_2d8._4_4_;
    *(undefined4 *)(lVar12 + 0x20) = (undefined4)uStack_2d0;
    *(undefined4 *)(lVar12 + 0x24) = uStack_2d0._4_4_;
    *(undefined8 **)(lVar12 + 0x28) = puStack_2c8;
  }
  puVar27 = &uStack_53f;
  auVar40 = func_0x06522ca0();
  bVar36 = (bStack_540 & 1) == 0;
  puVar29 = (undefined7 *)CONCAT71(uStack_52f,uStack_530);
  if (bVar36) {
    puVar29 = puVar27;
  }
  uVar23 = (ulong)(bStack_540 >> 1);
  if (!bVar36) {
    uVar23 = CONCAT71(uStack_537,uStack_538);
  }
  puVar13 = (undefined7 *)func_0x04883620(&uStack_2d8,puVar29,uVar23);
  plVar17 = (long *)(uStack_7e8 + 0x20);
  puVar29 = *(undefined7 **)(uStack_7e8 + 0x28);
  puVar25 = puVar27;
  if (puVar29 != (undefined7 *)0x0) {
    uVar23 = (long)puVar29 - ((ulong)puVar29 >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
    uVar23 = ((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar23 >> 0x38 < 2) {
      puVar25 = (undefined7 *)((long)puVar29 - 1U & (ulong)puVar13);
    }
    else {
      puVar25 = puVar13;
      if (puVar29 <= puVar13) {
        if (((ulong)puVar13 | (ulong)puVar29) >> 0x20 == 0) {
          puVar25 = (undefined7 *)(((ulong)puVar13 & 0xffffffff) % ((ulong)puVar29 & 0xffffffff));
        }
        else {
          puVar25 = (undefined7 *)((ulong)puVar13 % (ulong)puVar29);
        }
      }
    }
    puVar18 = *(undefined8 **)(*plVar17 + (long)puVar25 * 8);
    if ((puVar18 != (undefined8 *)0x0) && (plVar14 = (long *)*puVar18, plVar14 != (long *)0x0)) {
      if ((bStack_540 & 1) == 0) {
        uVar15 = (ulong)(bStack_540 >> 1);
      }
      else {
        uVar15 = CONCAT71(uStack_537,uStack_538);
        puVar27 = (undefined7 *)CONCAT71(uStack_52f,uStack_530);
      }
      if ((byte)(uVar23 >> 0x38) < 2) {
        do {
          lStack_48 = auVar40._8_8_;
          lStack_40 = auVar40._0_8_;
          if ((undefined7 *)plVar14[1] == puVar13) {
            bVar3 = *(byte *)(plVar14 + 2);
            if ((bVar3 & 1) == 0) {
              uVar23 = (ulong)(bVar3 >> 1);
            }
            else {
              uVar23 = plVar14[3];
            }
            if (uVar23 == uVar15) {
              if ((bVar3 & 1) == 0) {
                lVar11 = (long)plVar14 + 0x11;
              }
              else {
                lVar11 = plVar14[4];
              }
              iVar8 = func_0x0eee3000(lVar11,puVar27,uVar15);
              auVar40._8_8_ = lStack_48;
              auVar40._0_8_ = lStack_40;
              if (iVar8 == 0) goto LAB_064dc0b8;
            }
          }
          else if ((undefined7 *)((ulong)plVar14[1] & (long)puVar29 - 1U) != puVar25) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          lStack_48 = auVar40._8_8_;
          lStack_40 = auVar40._0_8_;
          puVar24 = (undefined7 *)plVar14[1];
          if (puVar24 == puVar13) {
            bVar3 = *(byte *)(plVar14 + 2);
            if ((bVar3 & 1) == 0) {
              uVar23 = (ulong)(bVar3 >> 1);
            }
            else {
              uVar23 = plVar14[3];
            }
            if (uVar23 == uVar15) {
              if ((bVar3 & 1) == 0) {
                lVar11 = (long)plVar14 + 0x11;
              }
              else {
                lVar11 = plVar14[4];
              }
              iVar8 = func_0x0eee3000(lVar11,puVar27,uVar15);
              auVar40._8_8_ = lStack_48;
              auVar40._0_8_ = lStack_40;
              if (iVar8 == 0) goto LAB_064dc0b8;
            }
          }
          else {
            if (puVar29 <= puVar24) {
              if (((ulong)puVar24 | (ulong)puVar29) >> 0x20 == 0) {
                puVar24 = (undefined7 *)
                          (((ulong)puVar24 & 0xffffffff) % ((ulong)puVar29 & 0xffffffff));
              }
              else {
                puVar24 = (undefined7 *)((ulong)puVar24 % (ulong)puVar29);
              }
            }
            if (puVar24 != puVar25) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  lStack_48 = auVar40._8_8_;
  lStack_40 = auVar40._0_8_;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  uStack_2d8._0_4_ = (uint)plVar14;
  uStack_2d8._4_4_ = (undefined4)((ulong)plVar14 >> 0x20);
  puStack_2c8 = (undefined8 *)0x0;
  *plVar14 = 0;
  plVar14[1] = (long)puVar13;
  uStack_2d0 = plVar17;
  if ((bStack_540 & 1) == 0) {
    plVar14[4] = CONCAT71(uStack_52f,uStack_530);
    plVar14[2] = CONCAT71(uStack_53f,bStack_540);
    plVar14[3] = CONCAT71(uStack_537,uStack_538);
  }
  else {
    func_0x0412e5e0(plVar14 + 2,CONCAT71(uStack_52f,uStack_530),CONCAT71(uStack_537,uStack_538));
  }
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[5] = 0;
  plVar14[6] = 0;
  *(undefined4 *)(plVar14 + 9) = 0x3f800000;
  puStack_2c8 = (undefined8 *)CONCAT71(puStack_2c8._1_7_,1);
  fVar37 = (float)(*(long *)(uStack_7e8 + 0x38) + 1);
  if ((long)puVar29 < 0) {
    fVar38 = (float)puVar29;
    fVar39 = *(float *)(uStack_7e8 + 0x40);
    if (puVar29 == (undefined7 *)0x0) goto LAB_064dc202;
LAB_064dc1f1:
    if (fVar38 * fVar39 < fVar37) goto LAB_064dc202;
LAB_064dc530:
    lVar11 = *plVar17;
    plVar17 = *(long **)(lVar11 + (long)puVar25 * 8);
    if (plVar17 == (long *)0x0) {
      *plVar14 = *(long *)(uStack_7e8 + 0x30);
      *(long **)(uStack_7e8 + 0x30) = plVar14;
      *(ulong *)(lVar11 + (long)puVar25 * 8) = uStack_7e8 + 0x30;
      if (*plVar14 != 0) {
        puVar27 = *(undefined7 **)(*plVar14 + 8);
        if (((ulong)puVar29 & (long)puVar29 - 1U) == 0) {
          *(long **)(lVar11 + ((ulong)puVar27 & (long)puVar29 - 1U) * 8) = plVar14;
        }
        else {
          if (puVar29 <= puVar27) {
            if (((ulong)puVar27 | (ulong)puVar29) >> 0x20 == 0) {
              *(long **)(lVar11 + (((ulong)puVar27 & 0xffffffff) % ((ulong)puVar29 & 0xffffffff)) *
                                  8) = plVar14;
              goto LAB_064dc54e;
            }
            puVar27 = (undefined7 *)((ulong)puVar27 % (ulong)puVar29);
          }
          *(long **)(lVar11 + (long)puVar27 * 8) = plVar14;
        }
      }
    }
    else {
      *plVar14 = *plVar17;
      *plVar17 = (long)plVar14;
    }
LAB_064dc54e:
    *(long *)(uStack_7e8 + 0x38) = *(long *)(uStack_7e8 + 0x38) + 1;
    goto LAB_064dc557;
  }
  fVar38 = (float)(long)puVar29;
  fVar39 = *(float *)(uStack_7e8 + 0x40);
  if (puVar29 != (undefined7 *)0x0) goto LAB_064dc1f1;
LAB_064dc202:
  uVar23 = 1;
  if ((undefined7 *)0x2 < puVar29) {
    uVar23 = (ulong)(((ulong)puVar29 & (long)puVar29 - 1U) != 0);
  }
  uVar23 = uVar23 | (long)puVar29 * 2;
  fVar37 = (float)func_0x0eee3ab0(fVar37 / fVar39);
  uVar15 = (long)(fVar37 - _DAT_01198778) & (long)fVar37 >> 0x3f | (long)fVar37;
  if (uVar15 < uVar23) {
    uVar15 = uVar23;
  }
  uVar23 = 2;
  if ((uVar15 == 1) || (uVar23 = uVar15, (uVar15 & uVar15 - 1) == 0)) {
    uVar15 = *(ulong *)(uStack_7e8 + 0x28);
    bVar36 = uVar23 < uVar15;
    if (uVar15 < uVar23) goto LAB_064dc280;
LAB_064dc391:
    if (bVar36) {
      fVar37 = (float)func_0x0eee3ab0((float)*(ulong *)(uStack_7e8 + 0x38) /
                                      *(float *)(uStack_7e8 + 0x40));
      uVar26 = (long)(fVar37 - _DAT_01198778) & (long)fVar37 >> 0x3f | (long)fVar37;
      if ((uVar15 < 3) ||
         (uVar31 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
         uVar31 = (uVar31 >> 2 & 0x3333333333333333) + (uVar31 & 0x3333333333333333),
         1 < (byte)(((uVar31 >> 4) + uVar31 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        uVar26 = func_0x0412c3f0(uVar26);
        if (uVar26 < uVar23) {
          uVar26 = uVar23;
        }
      }
      else {
        if (1 < uVar26) {
          lVar11 = 0x3f;
          if (uVar26 - 1 != 0) {
            for (; uVar26 - 1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          uVar26 = 1L << (-((byte)lVar11 ^ 0x3f) & 0x3f);
        }
        if (uVar26 < uVar23) {
          uVar26 = uVar23;
        }
      }
      uVar23 = uVar26;
      if (uVar23 < uVar15) {
        if (uVar23 != 0) goto LAB_064dc280;
        lVar11 = *plVar17;
        *plVar17 = 0;
        if (lVar11 != 0) {
          func_0x0412a280(lVar11,*(long *)(uStack_7e8 + 0x28) << 3);
        }
        *(undefined8 *)(uStack_7e8 + 0x28) = 0;
      }
    }
LAB_064dc4f0:
    puVar29 = *(undefined7 **)(uStack_7e8 + 0x28);
    if (((ulong)puVar29 & (long)puVar29 - 1U) == 0) {
      puVar25 = (undefined7 *)((ulong)puVar13 & (long)puVar29 - 1U);
    }
    else {
      puVar25 = puVar13;
      if (puVar29 <= puVar13) {
        if (((ulong)puVar13 | (ulong)puVar29) >> 0x20 == 0) {
          puVar25 = (undefined7 *)(((ulong)puVar13 & 0xffffffff) % ((ulong)puVar29 & 0xffffffff));
        }
        else {
          puVar25 = (undefined7 *)((ulong)puVar13 % (ulong)puVar29);
        }
      }
    }
    goto LAB_064dc530;
  }
  uVar23 = func_0x0412c3f0();
  uVar15 = *(ulong *)(uStack_7e8 + 0x28);
  bVar36 = uVar23 < uVar15;
  if (uVar23 <= uVar15) goto LAB_064dc391;
LAB_064dc280:
  if (uVar23 >> 0x3d == 0) {
    lVar11 = uVar23 * 8;
    lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar11);
    if (lVar12 == 0) {
      func_0x0eec74c0(lVar11,0);
    }
    lVar28 = *plVar17;
    *plVar17 = lVar12;
    if (lVar28 != 0) {
      func_0x0412a280(lVar28,*(long *)(uStack_7e8 + 0x28) << 3);
      lVar12 = *(long *)(uStack_7e8 + 0x20);
    }
    *(ulong *)(uStack_7e8 + 0x28) = uVar23;
    func_0x0eee2dd0(lVar12,0,lVar11);
    plVar16 = *(long **)(uStack_7e8 + 0x30);
    if (plVar16 != (long *)0x0) {
      uVar26 = plVar16[1];
      uVar15 = uVar23 - 1;
      if ((uVar23 & uVar15) == 0) {
        *(ulong *)(lVar12 + (uVar26 & uVar15) * 8) = uStack_7e8 + 0x30;
        uVar23 = uVar26 & uVar15;
        while (plVar30 = plVar16, plVar16 = (long *)*plVar30, plVar16 != (long *)0x0) {
          uVar26 = plVar16[1] & uVar15;
          if (uVar26 != uVar23) {
            if (*(long *)(lVar12 + uVar26 * 8) == 0) {
              *(long **)(lVar12 + uVar26 * 8) = plVar30;
              uVar23 = uVar26;
            }
            else {
              *plVar30 = *plVar16;
              *plVar16 = **(undefined8 **)(lVar12 + uVar26 * 8);
              **(long **)(lVar12 + uVar26 * 8) = (long)plVar16;
              plVar16 = plVar30;
            }
          }
        }
      }
      else {
        if (uVar23 <= uVar26) {
          if ((uVar26 | uVar23) >> 0x20 == 0) {
            uVar26 = (uVar26 & 0xffffffff) % (uVar23 & 0xffffffff);
          }
          else {
            uVar26 = uVar26 % uVar23;
          }
        }
        *(ulong *)(lVar12 + uVar26 * 8) = uStack_7e8 + 0x30;
        plVar30 = (long *)*plVar16;
        while (plVar30 != (long *)0x0) {
          uVar15 = plVar30[1];
          if (uVar23 <= uVar15) {
            if ((uVar15 | uVar23) >> 0x20 == 0) {
              uVar15 = (uVar15 & 0xffffffff) % (uVar23 & 0xffffffff);
            }
            else {
              uVar15 = uVar15 % uVar23;
            }
          }
          if (uVar15 != uVar26) {
            if (*(long *)(lVar12 + uVar15 * 8) == 0) {
              *(long **)(lVar12 + uVar15 * 8) = plVar16;
              uVar26 = uVar15;
            }
            else {
              *plVar16 = *plVar30;
              *plVar30 = **(long **)(lVar12 + uVar15 * 8);
              **(undefined8 **)(lVar12 + uVar15 * 8) = plVar30;
              plVar30 = plVar16;
            }
          }
          plVar16 = plVar30;
          plVar30 = (long *)*plVar16;
        }
      }
    }
    goto LAB_064dc4f0;
  }
LAB_064df717:
  FUN_04882eb0();
LAB_064df71c:
  uVar21 = FUN_04882eb0();
  func_0x05f93280(&uStack_418);
  func_0x06523ec0(&uStack_788);
  func_0x0651ff50(&uStack_688);
  if (((uint)auStack_7d8 & 1) != 0) {
    func_0x0412a280(puStack_7c8,CONCAT44(uStack_7d4,auStack_7d8) & 0xfffffffffffffffe);
  }
  func_0x06520290(&bStack_540);
  func_0x0eee2d70(uVar21);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
LAB_064dc0b8:
LAB_064dc557:
  bVar36 = (uStack_7c0 & 1) == 0;
  lVar11 = lStack_7b0;
  if (bVar36) {
    lVar11 = (long)&uStack_7c0 + 1;
  }
  uVar23 = (ulong)((byte)uStack_7c0 >> 1);
  if (!bVar36) {
    uVar23 = CONCAT44(uStack_7b4,uStack_7b8);
  }
  uVar15 = func_0x04883620(&uStack_2d8,lVar11,uVar23);
  plVar17 = plVar14 + 5;
  uVar23 = plVar14[6];
  if (uVar23 != 0) {
    uVar26 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
    uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
    uVar26 = ((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar26 >> 0x38 < 2) {
      uStack_7e8 = uVar23 - 1 & uVar15;
    }
    else {
      uStack_7e8 = uVar15;
      if (uVar23 <= uVar15) {
        if ((uVar15 | uVar23) >> 0x20 == 0) {
          uStack_7e8 = (uVar15 & 0xffffffff) % (uVar23 & 0xffffffff);
        }
        else {
          uStack_7e8 = uVar15 % uVar23;
        }
      }
    }
    puVar18 = *(undefined8 **)(*plVar17 + uStack_7e8 * 8);
    if ((puVar18 != (undefined8 *)0x0) && (plVar16 = (long *)*puVar18, plVar16 != (long *)0x0)) {
      if ((uStack_7c0 & 1) == 0) {
        uVar31 = (ulong)((byte)uStack_7c0 >> 1);
        lVar11 = (long)&uStack_7c0 + 1;
      }
      else {
        uVar31 = CONCAT44(uStack_7b4,uStack_7b8);
        lVar11 = lStack_7b0;
      }
      if ((byte)(uVar26 >> 0x38) < 2) {
        do {
          if (plVar16[1] == uVar15) {
            bVar3 = *(byte *)(plVar16 + 2);
            if ((bVar3 & 1) == 0) {
              uVar26 = (ulong)(bVar3 >> 1);
            }
            else {
              uVar26 = plVar16[3];
            }
            if (uVar26 == uVar31) {
              if ((bVar3 & 1) == 0) {
                lVar12 = (long)plVar16 + 0x11;
              }
              else {
                lVar12 = plVar16[4];
              }
              iVar8 = func_0x0eee3000(lVar12,lVar11,uVar31);
              if (iVar8 == 0) goto LAB_064dcc3f;
            }
          }
          else if ((plVar16[1] & uVar23 - 1) != uStack_7e8) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar26 = plVar16[1];
          if (uVar26 == uVar15) {
            bVar3 = *(byte *)(plVar16 + 2);
            if ((bVar3 & 1) == 0) {
              uVar26 = (ulong)(bVar3 >> 1);
            }
            else {
              uVar26 = plVar16[3];
            }
            if (uVar26 == uVar31) {
              if ((bVar3 & 1) == 0) {
                lVar12 = (long)plVar16 + 0x11;
              }
              else {
                lVar12 = plVar16[4];
              }
              iVar8 = func_0x0eee3000(lVar12,lVar11,uVar31);
              if (iVar8 == 0) goto LAB_064dcc3f;
            }
          }
          else {
            if (uVar23 <= uVar26) {
              if ((uVar26 | uVar23) >> 0x20 == 0) {
                uVar26 = (uVar26 & 0xffffffff) % (uVar23 & 0xffffffff);
              }
              else {
                uVar26 = uVar26 % uVar23;
              }
            }
            if (uVar26 != uStack_7e8) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (plVar16 == (long *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uStack_2d8._0_4_ = (uint)plVar16;
  uStack_2d8._4_4_ = (undefined4)((ulong)plVar16 >> 0x20);
  puStack_2c8 = (undefined8 *)0x0;
  *plVar16 = 0;
  plVar16[1] = uVar15;
  uStack_2d0 = plVar17;
  if ((uStack_7c0 & 1) == 0) {
    plVar16[4] = lStack_7b0;
    plVar16[2] = CONCAT26(uStack_7ba,CONCAT15(uStack_7bb,CONCAT14(uStack_7bc,uStack_7c0)));
    plVar16[3] = CONCAT44(uStack_7b4,uStack_7b8);
  }
  else {
    func_0x0412e5e0(plVar16 + 2,lStack_7b0,CONCAT44(uStack_7b4,uStack_7b8));
  }
  plVar16[5] = 0;
  plVar16[6] = 0;
  func_0x048b1dc0(plVar16 + 5);
  puStack_2c8 = (undefined8 *)CONCAT71(puStack_2c8._1_7_,1);
  if ((long)uVar23 < 0) {
    fVar39 = (float)uVar23;
    fVar37 = *(float *)(plVar14 + 9);
    if (uVar23 != 0) goto LAB_064dc8ec;
LAB_064dc8fd:
    uVar26 = 1;
    if (2 < uVar23) {
      uVar26 = (ulong)((uVar23 & uVar23 - 1) != 0);
    }
    uVar26 = uVar26 | uVar23 * 2;
    fVar37 = (float)func_0x0eee3ab0((float)(plVar14[8] + 1) / fVar37);
    uVar23 = (long)(fVar37 - _DAT_01198778) & (long)fVar37 >> 0x3f | (long)fVar37;
    if (uVar23 < uVar26) {
      uVar23 = uVar26;
    }
    uVar26 = 2;
    if ((uVar23 == 1) || (uVar26 = uVar23, (uVar23 & uVar23 - 1) == 0)) {
      uVar23 = plVar14[6];
      bVar36 = uVar26 < uVar23;
      if (uVar26 <= uVar23) goto LAB_064dca7c;
LAB_064dc981:
      if (uVar26 >> 0x3d != 0) goto LAB_064df71c;
      lVar11 = uVar26 * 8;
      lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar11);
      if (lVar12 == 0) {
        func_0x0eec74c0(lVar11,0);
      }
      lVar28 = *plVar17;
      *plVar17 = lVar12;
      if (lVar28 != 0) {
        func_0x0412a280(lVar28,plVar14[6] << 3);
        lVar12 = plVar14[5];
      }
      plVar14[6] = uVar26;
      func_0x0eee2dd0(lVar12,0,lVar11);
      plVar30 = (long *)plVar14[7];
      if (plVar30 != (long *)0x0) {
        uVar31 = plVar30[1];
        uVar23 = uVar26 - 1;
        if ((uVar26 & uVar23) == 0) {
          *(long **)(lVar12 + (uVar31 & uVar23) * 8) = plVar14 + 7;
          uVar26 = uVar31 & uVar23;
          while (plVar33 = plVar30, plVar30 = (long *)*plVar33, plVar30 != (long *)0x0) {
            uVar31 = plVar30[1] & uVar23;
            if (uVar31 != uVar26) {
              if (*(long *)(lVar12 + uVar31 * 8) == 0) {
                *(long **)(lVar12 + uVar31 * 8) = plVar33;
                uVar26 = uVar31;
              }
              else {
                *plVar33 = *plVar30;
                *plVar30 = **(undefined8 **)(lVar12 + uVar31 * 8);
                **(long **)(lVar12 + uVar31 * 8) = (long)plVar30;
                plVar30 = plVar33;
              }
            }
          }
        }
        else {
          if (uVar26 <= uVar31) {
            if ((uVar31 | uVar26) >> 0x20 == 0) {
              uVar31 = (uVar31 & 0xffffffff) % (uVar26 & 0xffffffff);
            }
            else {
              uVar31 = uVar31 % uVar26;
            }
          }
          *(long **)(lVar12 + uVar31 * 8) = plVar14 + 7;
          plVar33 = (long *)*plVar30;
          while (plVar33 != (long *)0x0) {
            uVar23 = plVar33[1];
            if (uVar26 <= uVar23) {
              if ((uVar23 | uVar26) >> 0x20 == 0) {
                uVar23 = (uVar23 & 0xffffffff) % (uVar26 & 0xffffffff);
              }
              else {
                uVar23 = uVar23 % uVar26;
              }
            }
            if (uVar23 != uVar31) {
              if (*(long *)(lVar12 + uVar23 * 8) == 0) {
                *(long **)(lVar12 + uVar23 * 8) = plVar30;
                uVar31 = uVar23;
              }
              else {
                *plVar30 = *plVar33;
                *plVar33 = **(long **)(lVar12 + uVar23 * 8);
                **(undefined8 **)(lVar12 + uVar23 * 8) = plVar33;
                plVar33 = plVar30;
              }
            }
            plVar30 = plVar33;
            plVar33 = (long *)*plVar30;
          }
        }
      }
    }
    else {
      uVar26 = func_0x0412c3f0();
      uVar23 = plVar14[6];
      bVar36 = uVar26 < uVar23;
      if (uVar23 < uVar26) goto LAB_064dc981;
LAB_064dca7c:
      if (bVar36) {
        fVar37 = (float)func_0x0eee3ab0((float)(ulong)plVar14[8] / *(float *)(plVar14 + 9));
        uVar31 = (long)(fVar37 - _DAT_01198778) & (long)fVar37 >> 0x3f | (long)fVar37;
        if ((uVar23 < 3) ||
           (uVar22 = uVar23 - (uVar23 >> 1 & 0x5555555555555555),
           uVar22 = (uVar22 >> 2 & 0x3333333333333333) + (uVar22 & 0x3333333333333333),
           1 < (byte)(((uVar22 >> 4) + uVar22 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar31 = func_0x0412c3f0(uVar31);
          if (uVar31 < uVar26) {
            uVar31 = uVar26;
          }
        }
        else {
          if (1 < uVar31) {
            lVar11 = 0x3f;
            if (uVar31 - 1 != 0) {
              for (; uVar31 - 1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            uVar31 = 1L << (-((byte)lVar11 ^ 0x3f) & 0x3f);
          }
          if (uVar31 < uVar26) {
            uVar31 = uVar26;
          }
        }
        uVar26 = uVar31;
        if (uVar26 < uVar23) {
          if (uVar26 != 0) goto LAB_064dc981;
          lVar11 = *plVar17;
          *plVar17 = 0;
          if (lVar11 != 0) {
            func_0x0412a280(lVar11,plVar14[6] << 3);
          }
          plVar14[6] = 0;
        }
      }
    }
    uVar23 = plVar14[6];
    if ((uVar23 & uVar23 - 1) == 0) {
      uStack_7e8 = uVar15 & uVar23 - 1;
    }
    else {
      uStack_7e8 = uVar15;
      if (uVar23 <= uVar15) {
        if ((uVar15 | uVar23) >> 0x20 == 0) {
          uStack_7e8 = (uVar15 & 0xffffffff) % (uVar23 & 0xffffffff);
        }
        else {
          uStack_7e8 = uVar15 % uVar23;
        }
      }
    }
  }
  else {
    fVar39 = (float)(long)uVar23;
    fVar37 = *(float *)(plVar14 + 9);
    if (uVar23 == 0) goto LAB_064dc8fd;
LAB_064dc8ec:
    if (fVar39 * fVar37 < (float)(plVar14[8] + 1)) goto LAB_064dc8fd;
  }
  lVar11 = *plVar17;
  plVar17 = *(long **)(lVar11 + uStack_7e8 * 8);
  if (plVar17 == (long *)0x0) {
    *plVar16 = plVar14[7];
    plVar14[7] = (long)plVar16;
    *(long **)(lVar11 + uStack_7e8 * 8) = plVar14 + 7;
    if (*plVar16 != 0) {
      uVar15 = *(ulong *)(*plVar16 + 8);
      if ((uVar23 & uVar23 - 1) == 0) {
        *(long **)(lVar11 + (uVar15 & uVar23 - 1) * 8) = plVar16;
      }
      else {
        if (uVar23 <= uVar15) {
          if ((uVar15 | uVar23) >> 0x20 == 0) {
            *(long **)(lVar11 + ((uVar15 & 0xffffffff) % (uVar23 & 0xffffffff)) * 8) = plVar16;
            goto LAB_064dcc3b;
          }
          uVar15 = uVar15 % uVar23;
        }
        *(long **)(lVar11 + uVar15 * 8) = plVar16;
      }
    }
  }
  else {
    *plVar16 = *plVar17;
    *plVar17 = (long)plVar16;
  }
LAB_064dcc3b:
  plVar14[8] = plVar14[8] + 1;
LAB_064dcc3f:
  uVar23 = uStack_528;
  plVar16[5] = lStack_40;
  plVar16[6] = lStack_48;
  lVar11 = func_0x06522e70();
  uStack_688 = (undefined8 **)CONCAT44(uStack_688._4_4_,*(undefined4 *)(lVar11 + 8));
  uStack_2d8 = &uStack_688;
  lVar12 = func_0x06520320(uVar23 + 0x78,uStack_2d8,&UNK_01563a4f,&uStack_2d8,&puStack_748);
  uStack_2d8._0_4_ = 0xf038110;
  uStack_2d8._4_4_ = 0;
  uStack_2b8 = &uStack_2d8;
  func_0x06521a20(&uStack_2d8,lVar12 + 0x20);
  if (uStack_2b8 == &uStack_2d8) {
    lVar12 = 0x20;
LAB_064dcce8:
    (**(code **)(*uStack_2b8 + lVar12))();
  }
  else {
    lVar12 = 0x28;
    if (uStack_2b8 != (long *)0x0) goto LAB_064dcce8;
  }
  uStack_688 = (undefined8 **)CONCAT44(uStack_688._4_4_,*(undefined4 *)(lVar11 + 8));
  uStack_2d8 = &uStack_688;
  lVar12 = func_0x06521b10(uVar23 + 0xa0,uStack_2d8,&UNK_01563a4f,&uStack_2d8,&puStack_748);
  uStack_2d8._0_4_ = 0xf038208;
  uStack_2d8._4_4_ = 0;
  uStack_2b8 = &uStack_2d8;
  func_0x065224e0(&uStack_2d8,lVar12 + 0x20);
  if (uStack_2b8 == &uStack_2d8) {
    lVar12 = 0x20;
LAB_064dcd76:
    (**(code **)(*uStack_2b8 + lVar12))();
  }
  else {
    lVar12 = 0x28;
    if (uStack_2b8 != (long *)0x0) goto LAB_064dcd76;
  }
  uStack_2d8._0_4_ = 0;
  uStack_2d8._4_4_ = 0;
  uStack_2d0._0_4_ = 0;
  uStack_2d0._4_4_ = 0;
  puStack_2c8 = (undefined8 *)0x0;
  uStack_688 = (undefined8 **)CONCAT44(_UNK_0f0380f4,_DAT_0f0380f0);
  uStack_680 = CONCAT44(_UNK_0f0380fc,_UNK_0f0380f8);
  lVar12 = func_0x0651ddc0(&uStack_2d8,&uStack_688);
  uStack_2d0._0_4_ = (undefined4)lVar12;
  uStack_2d0._4_4_ = (undefined4)((ulong)lVar12 >> 0x20);
  if (CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8) == lVar12) {
    if (lVar12 != 0) {
      uStack_2d0._0_4_ = (uint)uStack_2d8;
      uStack_2d0._4_4_ = uStack_2d8._4_4_;
      func_0x0412a280(CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8),(long)puStack_2c8 - lVar12);
    }
    if ((uStack_7c0 & 1) == 0) goto LAB_064dce9a;
LAB_064dcf44:
    uVar23 = uStack_528;
    func_0x0412e5e0(&uStack_6b8,lStack_7b0,CONCAT44(uStack_7b4,uStack_7b8));
    uStack_780 = uVar23;
  }
  else {
    puStack_748 = (undefined8 *)CONCAT44(puStack_748._4_4_,*(undefined4 *)(lVar11 + 8));
    uStack_688 = &puStack_748;
    lVar12 = func_0x065225d0(uVar23 + 200,&puStack_748,&UNK_01563a4f,&uStack_688,&uStack_788);
    lVar11 = *(long *)(lVar12 + 0x18);
    if (lVar11 != 0) {
      lVar28 = *(long *)(lVar12 + 0x20);
      lVar32 = lVar11;
      if (lVar11 != lVar28) {
        do {
          if ((*(byte *)(lVar28 + -0x18) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar28 + -8),
                            *(ulong *)(lVar28 + -0x18) & 0xfffffffffffffffe);
          }
          lVar28 = lVar28 + -0x18;
        } while (lVar28 != lVar11);
        lVar32 = *(long *)(lVar12 + 0x18);
      }
      *(long *)(lVar12 + 0x20) = lVar11;
      func_0x0412a280(lVar32,*(long *)(lVar12 + 0x28) - lVar32);
      *(long *)(lVar12 + 0x18) = 0;
      *(undefined8 *)(lVar12 + 0x20) = 0;
      *(undefined8 *)(lVar12 + 0x28) = 0;
    }
    *(uint *)(lVar12 + 0x18) = (uint)uStack_2d8;
    *(undefined4 *)(lVar12 + 0x1c) = uStack_2d8._4_4_;
    *(undefined4 *)(lVar12 + 0x20) = (undefined4)uStack_2d0;
    *(undefined4 *)(lVar12 + 0x24) = uStack_2d0._4_4_;
    *(undefined8 **)(lVar12 + 0x28) = puStack_2c8;
    if ((uStack_7c0 & 1) != 0) goto LAB_064dcf44;
LAB_064dce9a:
    lStack_6a8 = lStack_7b0;
    uStack_6b4 = CONCAT22(uStack_7ba,CONCAT11(uStack_7bb,uStack_7bc));
    uStack_6b8 = uStack_7c0;
    uStack_6b0 = uStack_7b8;
    uStack_6ac = uStack_7b4;
    uStack_780 = uStack_528;
  }
  uVar10 = uStack_6b8 & 1;
  if ((uStack_6b8 & 1) == 0) {
    uVar23 = (ulong)((byte)uStack_6b8 >> 1);
    if (uVar23 == 0) goto LAB_064dcfc4;
LAB_064dcf7d:
    uVar15 = uVar23 + 0xd;
    if (0xfffffffffffffff7 < uVar15) {
      func_0x04882e30();
      goto LAB_064df717;
    }
    if (uVar15 < 0x17) {
      uStack_777._0_7_ = 0;
      uStack_777._7_1_ = '\0';
      uStack_76f = 0;
      uStack_76b = 0;
      uStack_76a = 0;
      puStack_768 = (undefined8 *)0x0;
      cStack_778 = (char)uVar15 * '\x02';
      bVar36 = false;
    }
    else {
      lVar11 = 0x1a;
      if ((uVar15 | 7) != 0x17) {
        lVar11 = (uVar15 | 7) + 1;
      }
      puStack_768 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar11);
      if (puStack_768 == (undefined8 *)0x0) {
        func_0x0eec74c0(lVar11,0);
      }
      bVar36 = true;
      cStack_778 = '\x01';
      uStack_777._0_7_ = (undefined7)((ulong)lVar11 >> 8);
      uStack_76f = (undefined4)(uVar15 >> 8);
      uStack_76b = (undefined1)(uVar15 >> 0x28);
      uStack_76a = (undefined2)(uVar15 >> 0x30);
      uStack_777._7_1_ = (char)uVar15;
    }
    puVar35 = &uStack_76a;
    puVar18 = &uStack_777;
    if (bVar36) {
      puVar35 = (undefined2 *)((long)puStack_768 + 0xd);
      puVar18 = puStack_768;
    }
    *(undefined8 *)((long)puVar18 + 5) = 0x3a656e6974756f72;
    *puVar18 = 0x756f726f43637052;
    lVar11 = lStack_6a8;
    if (uVar10 == 0) {
      lVar11 = (long)&uStack_6b8 + 1;
    }
    func_0x0eee2ee0(puVar35,lVar11,uVar23);
    *(undefined1 *)((long)puVar35 + uVar23) = 0;
  }
  else {
    uVar23 = CONCAT44(uStack_6ac,uStack_6b0);
    if (uVar23 != 0) goto LAB_064dcf7d;
LAB_064dcfc4:
    cStack_778 = '\x18';
    uStack_777._0_7_ = 0x6f726f43637052;
    uStack_777._7_1_ = 'u';
    uStack_76f = 0x656e6974;
    uStack_76b = 0;
  }
  if ((uStack_6b8 & 1) != 0) {
    func_0x0412a280(lStack_6a8,CONCAT44(uStack_6b4,uStack_6b8) & 0xfffffffffffffffe);
  }
  puVar18 = puStack_768;
  uVar23 = uStack_780;
  uVar21 = CONCAT71((undefined7)uStack_777,cStack_778);
  uVar4 = CONCAT26(uStack_76a,CONCAT15(uStack_76b,CONCAT41(uStack_76f,uStack_777._7_1_)));
  uStack_6d0 = 0x725f5f1a;
  uStack_6cc = 0x6370;
  uStack_6ca = 0x705f;
  uStack_6c8 = 0x696d6f72;
  uStack_6c4 = 0x6573;
  uStack_6c2 = 0;
  uStack_688 = (undefined8 **)0x0;
  uStack_680 = 0;
  puStack_678 = (undefined8 *)0x0;
  func_0x048b1dc0(auStack_670);
  func_0x0652b590(&puStack_660);
  if (((ulong)uStack_688 & 1) == 0) {
    puStack_678 = (undefined8 *)uStack_6c0;
    uStack_688 = (undefined8 **)CONCAT44(CONCAT22(uStack_6ca,uStack_6cc),uStack_6d0);
    uStack_680 = CONCAT44(CONCAT13(uStack_6c1,CONCAT12(uStack_6c2,uStack_6c4)),uStack_6c8);
  }
  else {
    func_0x04885120(&uStack_688,(long)&uStack_6d0 + 1,0xd);
  }
  auStack_670 = func_0x065aaf60();
  func_0x06523ef0(&uStack_2d8,&uStack_3f0);
  func_0x06523ef0(apcStack_1c0,&puStack_660);
  uStack_7a8 = (undefined8 **)0x0;
  uStack_7a0 = (undefined8 *)0x0;
  puStack_798 = (undefined8 *)0x0;
  uStack_7d0 = 0;
  _auStack_7d8 = &uStack_7a8;
  puStack_698 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x230);
  if (puStack_698 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x230,0);
  }
  puStack_798 = puStack_698 + 0x46;
  ppuStack_740 = &puStack_38;
  ppuStack_738 = &puStack_698;
  uStack_730 = uStack_730 & 0xffffffffffffff00;
  uStack_7a8 = (undefined8 **)puStack_698;
  uStack_7a0 = puStack_698;
  puStack_748 = &uStack_7a8;
  puStack_38 = puStack_698;
  func_0x06523ef0(puStack_698,&uStack_2d8);
  puStack_698 = puStack_698 + 0x23;
  func_0x06523ef0(puStack_698,apcStack_1c0);
  uStack_7a0 = puStack_698 + 0x23;
  if (pcStack_d0 != (code *)0x0) {
    (*pcStack_d0)(auStack_e8);
  }
  if (pcStack_118 != (code *)0x0) {
    (*pcStack_118)(auStack_130);
  }
  if (pcStack_158 != (code *)0x0) {
    (*pcStack_158)(auStack_170);
  }
  if (pcStack_198 != (code *)0x0) {
    (*pcStack_198)(auStack_1b0);
  }
  if (pcStack_1e8 != (code *)0x0) {
    (*pcStack_1e8)(auStack_200);
  }
  if (pcStack_230 != (code *)0x0) {
    (*pcStack_230)(apcStack_248);
  }
  if (pcStack_270 != (code *)0x0) {
    (*pcStack_270)(apcStack_288);
  }
  if (apcStack_2b0[0] != (code *)0x0) {
    (*apcStack_2b0[0])(&puStack_2c8);
  }
  uStack_6e8 = 0;
  uStack_6e0 = 0;
  plStack_6f8 = (long *)0x0;
  uStack_6f0 = 0;
  puStack_708 = (undefined8 *)0x0;
  plStack_700 = (long *)0x0;
  lStack_718 = 0;
  lStack_710 = 0;
  uStack_728 = 0;
  lStack_720 = 0;
  ppuStack_738 = (undefined8 **)0x0;
  uStack_730 = 0;
  puStack_748 = (undefined8 *)0x0;
  ppuStack_740 = (undefined8 **)0x0;
  if ((uStack_7c0 & 1) == 0) {
    lStack_720 = lStack_7b0;
    uStack_730 = CONCAT44(CONCAT22(uStack_7ba,CONCAT11(uStack_7bb,uStack_7bc)),uStack_7c0);
    uStack_728 = CONCAT44(uStack_7b4,uStack_7b8);
  }
  else {
    func_0x04885070(&uStack_730,lStack_7b0,CONCAT44(uStack_7b4,uStack_7b8));
  }
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (plVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x88,0);
  }
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0f038288;
  uVar9 = func_0x0d858500(&uStack_7a8);
  plVar14 = plVar17 + 3;
  *(undefined1 *)(plVar17 + 4) = 0;
  *(undefined4 *)((long)plVar17 + 0x24) = uVar9;
  *(undefined4 *)(plVar17 + 5) = 0;
  plVar17[6] = 0;
  plVar17[7] = 0;
  plVar17[8] = 0;
  plVar17[3] = (long)&UNK_0f0382d8;
  plVar17[10] = uVar23;
  plVar17[0xb] = uVar21;
  plVar17[0xc] = uVar4;
  plVar17[0xd] = (long)puVar18;
  *(undefined4 *)(plVar17 + 0xe) = (undefined4)uStack_7a8;
  *(undefined4 *)((long)plVar17 + 0x74) = uStack_7a8._4_4_;
  *(undefined4 *)(plVar17 + 0xf) = (undefined4)uStack_7a0;
  *(undefined4 *)((long)plVar17 + 0x7c) = uStack_7a0._4_4_;
  plVar17[0x10] = (long)puStack_798;
  uStack_7a8 = (undefined8 **)0x0;
  uStack_7a0 = (undefined8 *)0x0;
  puStack_798 = (undefined8 *)0x0;
  uVar9 = func_0x0d858620(plVar14);
  plVar16 = plStack_6f8;
  *(undefined4 *)(plVar17 + 5) = uVar9;
  plStack_700 = plVar14;
  if (plStack_6f8 != (long *)0x0) {
    LOCK();
    plVar14 = plStack_6f8 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      lVar11 = *plStack_6f8;
      plStack_6f8 = plVar17;
      (**(code **)(lVar11 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
      plVar17 = plStack_6f8;
    }
  }
  plStack_6f8 = plVar17;
  puStack_2c8 = (undefined8 *)pbStack_408;
  uStack_2d8._0_4_ = (uint)uStack_418;
  uStack_2d8._4_4_ = (undefined4)((ulong)uStack_418 >> 0x20);
  uStack_2d0._0_4_ = SUB84(uStack_410,0);
  uStack_2d0._4_4_ = (undefined4)((ulong)uStack_410 >> 0x20);
  uStack_418 = (undefined8 *)0x0;
  uStack_410 = (undefined4 *)0x0;
  pbStack_408 = (byte *)0x0;
  uStack_2c0 = auStack_400._0_4_;
  uStack_2bc = auStack_400._4_4_;
  uStack_2b8 = (long *)auStack_400._8_8_;
  func_0x065281f0(apcStack_2b0,&uStack_3f0);
  uStack_188 = puStack_678;
  pcStack_198 = (code *)uStack_688;
  uStack_190 = uStack_680;
  uStack_688 = (undefined8 **)0x0;
  uStack_680 = 0;
  puStack_678 = (undefined8 *)0x0;
  uStack_180 = auStack_670._0_4_;
  uStack_17c = auStack_670._4_4_;
  uStack_178 = auStack_670._8_4_;
  uStack_174 = auStack_670._12_4_;
  func_0x065281f0(auStack_170,&puStack_660);
  auStack_7d8 = (undefined1  [4])0x0;
  uStack_7d4 = 0;
  uStack_7d0 = 0;
  uStack_7cf = 0;
  uStack_7ce = 0;
  uStack_7cc = 0;
  puStack_7c8 = (undefined8 *)0x0;
  puStack_698 = (undefined8 *)auStack_7d8;
  uStack_690 = 0;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x280);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x280,0);
  }
  auStack_7d8 = SUB84(puVar18,0);
  uStack_7d4 = (undefined4)((ulong)puVar18 >> 0x20);
  uStack_7d0 = SUB81(puVar18,0);
  uStack_7cf = (undefined1)((ulong)puVar18 >> 8);
  uStack_7ce = (undefined2)((ulong)puVar18 >> 0x10);
  puVar1 = puVar18 + 0x50;
  uStack_7cc = uStack_7d4;
  puStack_7c8 = puVar1;
  if (((uint)uStack_2d8 & 1) == 0) {
    puVar18[2] = puStack_2c8;
    *puVar18 = CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8);
    puVar18[1] = CONCAT44(uStack_2d0._4_4_,(undefined4)uStack_2d0);
  }
  else {
    func_0x0412e5e0(puVar18,puStack_2c8,CONCAT44(uStack_2d0._4_4_,(undefined4)uStack_2d0));
  }
  *(undefined4 *)(puVar18 + 3) = uStack_2c0;
  *(undefined4 *)((long)puVar18 + 0x1c) = uStack_2bc;
  *(undefined4 *)(puVar18 + 4) = (undefined4)uStack_2b8;
  *(undefined4 *)((long)puVar18 + 0x24) = uStack_2b8._4_4_;
  func_0x06523ef0(puVar18 + 5,apcStack_2b0);
  if (((ulong)pcStack_198 & 1) == 0) {
    puVar18[0x2a] = uStack_188;
    puVar18[0x28] = pcStack_198;
    puVar18[0x29] = uStack_190;
  }
  else {
    func_0x0412e5e0(puVar18 + 0x28,uStack_188,uStack_190);
  }
  *(undefined4 *)(puVar18 + 0x2b) = uStack_180;
  *(undefined4 *)((long)puVar18 + 0x15c) = uStack_17c;
  *(undefined4 *)(puVar18 + 0x2c) = uStack_178;
  *(undefined4 *)((long)puVar18 + 0x164) = uStack_174;
  func_0x06523ef0(puVar18 + 0x2d,auStack_170);
  uStack_7d0 = SUB81(puVar1,0);
  uStack_7cf = (undefined1)((ulong)puVar1 >> 8);
  uStack_7ce = (undefined2)((ulong)puVar1 >> 0x10);
  uStack_7cc = (undefined4)((ulong)puVar1 >> 0x20);
  if (pcStack_80 != (code *)0x0) {
    (*pcStack_80)(auStack_98);
  }
  if (pcStack_c8 != (code *)0x0) {
    (*pcStack_c8)(auStack_e0);
  }
  if (pcStack_108 != (code *)0x0) {
    (*pcStack_108)(auStack_120);
  }
  if (pcStack_148 != (code *)0x0) {
    (*pcStack_148)(auStack_160);
  }
  if (((ulong)pcStack_198 & 1) != 0) {
    func_0x0412a280(uStack_188,(ulong)pcStack_198 & 0xfffffffffffffffe);
  }
  if (apcStack_1c0[0] != (code *)0x0) {
    (*apcStack_1c0[0])(auStack_1d8);
  }
  if (pcStack_208 != (code *)0x0) {
    (*pcStack_208)(auStack_220);
  }
  if (apcStack_248[0] != (code *)0x0) {
    (*apcStack_248[0])(auStack_260);
  }
  if (apcStack_288[0] != (code *)0x0) {
    (*apcStack_288[0])(auStack_2a0);
  }
  if (((uint)uStack_2d8 & 1) != 0) {
    func_0x0412a280(puStack_2c8,CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8) & 0xfffffffffffffffe);
  }
  uVar10 = (**(code **)(*plStack_700 + 0x20))();
  lVar11 = CONCAT44(uStack_7d4,auStack_7d8);
  lVar12 = CONCAT44(uStack_7cc,CONCAT22(uStack_7ce,CONCAT11(uStack_7cf,uStack_7d0)));
  uVar15 = (lVar12 - lVar11 >> 6) * -0x3333333333333333;
  uVar23 = 0;
  if ((uVar10 != 0) && ((uint)uVar15 != 0)) {
    uVar34 = 0;
    uVar23 = 0;
    do {
      auVar40 = (**(code **)(*plStack_700 + 0x28))(plStack_700,uVar34);
      lVar28 = auVar40._8_8_;
      lVar12 = auVar40._0_8_;
      auVar40 = func_0x06527d70();
      if (auVar40._8_8_ != lVar28) {
LAB_064dd880:
        auVar40 = func_0x06527e30();
        if (auVar40._8_8_ == lVar28) {
          if (auVar40._0_8_ == 0) {
            lVar11 = func_0x048aead0(auVar40._8_8_);
            iVar8 = *(int *)(lVar11 + 8);
          }
          else {
            iVar8 = *(int *)(auVar40._0_8_ + 8);
          }
          if (lVar12 == 0) {
            lVar11 = func_0x048aead0(lVar28);
            iVar2 = *(int *)(lVar11 + 8);
          }
          else {
            iVar2 = *(int *)(lVar12 + 8);
          }
          if (iVar8 == iVar2) goto LAB_064dda75;
        }
        auVar40 = func_0x06527ef0();
        if (auVar40._8_8_ == lVar28) {
          if (auVar40._0_8_ == 0) {
            lVar11 = func_0x048aead0(auVar40._8_8_);
            iVar8 = *(int *)(lVar11 + 8);
          }
          else {
            iVar8 = *(int *)(auVar40._0_8_ + 8);
          }
          if (lVar12 == 0) {
            lVar11 = func_0x048aead0(lVar28);
            iVar2 = *(int *)(lVar11 + 8);
          }
          else {
            iVar2 = *(int *)(lVar12 + 8);
          }
          if (iVar8 == iVar2) goto LAB_064dda75;
        }
        auVar40 = func_0x06527fb0();
        if (auVar40._8_8_ == lVar28) {
          if (auVar40._0_8_ == 0) {
            lVar11 = func_0x048aead0(auVar40._8_8_);
            iVar8 = *(int *)(lVar11 + 8);
          }
          else {
            iVar8 = *(int *)(auVar40._0_8_ + 8);
          }
          if (lVar12 == 0) {
            lVar11 = func_0x048aead0(lVar28);
            iVar2 = *(int *)(lVar11 + 8);
          }
          else {
            iVar2 = *(int *)(lVar12 + 8);
          }
          if (iVar8 == iVar2) goto LAB_064dda75;
        }
        auVar40 = func_0x06528070();
        if (auVar40._8_8_ == lVar28) {
          if (auVar40._0_8_ == 0) {
            lVar11 = func_0x048aead0(auVar40._8_8_);
            iVar8 = *(int *)(lVar11 + 8);
          }
          else {
            iVar8 = *(int *)(auVar40._0_8_ + 8);
          }
          if (lVar12 == 0) {
            lVar11 = func_0x048aead0(lVar28);
            iVar2 = *(int *)(lVar11 + 8);
          }
          else {
            iVar2 = *(int *)(lVar12 + 8);
          }
          if (iVar8 == iVar2) goto LAB_064dda75;
        }
        auVar40 = func_0x06528130();
        if (auVar40._8_8_ == lVar28) {
          if (auVar40._0_8_ == 0) {
            lVar11 = func_0x048aead0(auVar40._8_8_);
            iVar8 = *(int *)(lVar11 + 8);
          }
          else {
            iVar8 = *(int *)(auVar40._0_8_ + 8);
          }
          if (lVar12 == 0) {
            lVar11 = func_0x048aead0(lVar28);
            iVar2 = *(int *)(lVar11 + 8);
          }
          else {
            iVar2 = *(int *)(lVar12 + 8);
          }
          if (iVar8 == iVar2) goto LAB_064dda75;
        }
        lVar11 = CONCAT44(uStack_7d4,auStack_7d8);
        if (*(long *)(lVar11 + 0x20 + uVar23 * 0x140) != lVar28) goto LAB_064ddc80;
        lVar11 = *(long *)(uVar23 * 0x140 + lVar11 + 0x18);
        if (lVar11 == 0) {
          lVar11 = func_0x048aead0();
          iVar8 = *(int *)(lVar11 + 8);
          if (lVar12 == 0) goto LAB_064dda5d;
LAB_064dda45:
          if (iVar8 == *(int *)(lVar12 + 8)) {
LAB_064dda72:
            uVar23 = (ulong)((int)uVar23 + 1);
            goto LAB_064dda75;
          }
        }
        else {
          iVar8 = *(int *)(lVar11 + 8);
          if (lVar12 != 0) goto LAB_064dda45;
LAB_064dda5d:
          lVar11 = func_0x048aead0(lVar28);
          if (iVar8 == *(int *)(lVar11 + 8)) goto LAB_064dda72;
        }
        lVar11 = CONCAT44(uStack_7d4,auStack_7d8);
        goto LAB_064ddc7b;
      }
      if (auVar40._0_8_ == 0) {
        lVar11 = func_0x048aead0(auVar40._8_8_);
        iVar8 = *(int *)(lVar11 + 8);
        if (lVar12 == 0) goto LAB_064dd86e;
LAB_064dd851:
        if (iVar8 != *(int *)(lVar12 + 8)) goto LAB_064dd880;
      }
      else {
        iVar8 = *(int *)(auVar40._0_8_ + 8);
        if (lVar12 != 0) goto LAB_064dd851;
LAB_064dd86e:
        lVar11 = func_0x048aead0(lVar28);
        if (iVar8 != *(int *)(lVar11 + 8)) goto LAB_064dd880;
      }
LAB_064dda75:
    } while (((uint)uVar23 < (uint)uVar15) && (uVar34 = uVar34 + 1, uVar34 < uVar10));
    lVar11 = CONCAT44(uStack_7d4,auStack_7d8);
    lVar12 = CONCAT44(uStack_7cc,CONCAT22(uStack_7ce,CONCAT11(uStack_7cf,uStack_7d0)));
    uVar15 = (lVar12 - lVar11 >> 6) * -0x3333333333333333;
  }
  lVar28 = lStack_718;
  if (uVar15 == uVar23) {
    lVar32 = lStack_710;
    if (lStack_718 != 0) {
      while (lVar28 != lVar32) {
        func_0x05fe8450(lVar32 + -0x140);
        lVar32 = lVar32 + -0x140;
      }
      lStack_710 = lVar28;
      func_0x0412a280(lStack_718,(long)puStack_708 - lStack_718);
      lVar11 = CONCAT44(uStack_7d4,auStack_7d8);
      lVar12 = CONCAT44(uStack_7cc,CONCAT22(uStack_7ce,CONCAT11(uStack_7cf,uStack_7d0)));
    }
    puStack_708 = puStack_7c8;
    if (uStack_488 < puStack_480) {
      *uStack_488 = 0;
      uStack_488[1] = 0;
      uStack_488[2] = 0;
      *uStack_488 = puStack_748;
      uStack_488[1] = ppuStack_740;
      uStack_488[2] = ppuStack_738;
      puStack_748 = (undefined8 *)0x0;
      ppuStack_740 = (undefined8 **)0x0;
      ppuStack_738 = (undefined8 **)0x0;
      uStack_488[5] = lStack_720;
      uStack_488[3] = uStack_730;
      uStack_488[4] = uStack_728;
      uStack_730 = 0;
      uStack_728 = 0;
      lStack_720 = 0;
      uStack_488[6] = 0;
      uStack_488[7] = 0;
      uStack_488[8] = 0;
      uStack_488[6] = lVar11;
      uStack_488[7] = lVar12;
      uStack_488[8] = puStack_7c8;
      lStack_718 = 0;
      lStack_710 = 0;
      puStack_708 = (undefined8 *)0x0;
      uStack_488[9] = plStack_700;
      uStack_488[10] = plStack_6f8;
      plStack_700 = (long *)0x0;
      plStack_6f8 = (undefined8 *)0x0;
      uStack_488[0xb] = 0;
      uStack_488[0xc] = 0;
      uStack_488[0xd] = 0;
      *(undefined4 *)(uStack_488 + 0xb) = (undefined4)uStack_6f0;
      *(undefined4 *)((long)uStack_488 + 0x5c) = uStack_6f0._4_4_;
      *(undefined4 *)(uStack_488 + 0xc) = (undefined4)uStack_6e8;
      *(undefined4 *)((long)uStack_488 + 100) = uStack_6e8._4_4_;
      uStack_488[0xd] = uStack_6e0;
      uStack_6f0 = 0;
      uStack_6e8 = 0;
      uStack_6e0 = 0;
      uStack_488 = uStack_488 + 0xe;
    }
    else {
      lStack_718 = lVar11;
      lStack_710 = lVar12;
      uStack_488 = (undefined8 *)func_0x0652ac80(&uStack_490,&puStack_748);
    }
  }
  else {
LAB_064ddc7b:
    if (lVar11 != 0) {
LAB_064ddc80:
      lVar28 = CONCAT44(uStack_7cc,CONCAT22(uStack_7ce,CONCAT11(uStack_7cf,uStack_7d0)));
      lVar12 = lVar11;
      if (lVar11 != lVar28) {
        do {
          lVar28 = lVar28 + -0x140;
          func_0x05fe8450(lVar28);
        } while (lVar28 != lVar11);
        lVar12 = CONCAT44(uStack_7d4,auStack_7d8);
      }
      uStack_7d0 = (undefined1)lVar11;
      uStack_7cf = (undefined1)((ulong)lVar11 >> 8);
      uStack_7ce = (undefined2)((ulong)lVar11 >> 0x10);
      uStack_7cc = (undefined4)((ulong)lVar11 >> 0x20);
      func_0x0412a280(lVar12,(long)puStack_7c8 - lVar12);
    }
  }
  func_0x05f93280(&puStack_748);
  uVar23 = (ulong)uStack_7a8;
  if (uStack_7a8 != (undefined8 **)0x0) {
    if (uStack_7a8 != (undefined8 **)uStack_7a0) {
      lVar11 = (long)uStack_7a0 - 0x40;
      do {
        if (*(code **)(lVar11 + 0x18) != (code *)0x0) {
          (**(code **)(lVar11 + 0x18))(lVar11);
        }
        if (*(code **)(lVar11 + -0x30) != (code *)0x0) {
          (**(code **)(lVar11 + -0x30))(lVar11 + -0x48);
        }
        if (*(code **)(lVar11 + -0x70) != (code *)0x0) {
          (**(code **)(lVar11 + -0x70))(lVar11 + -0x88);
        }
        if (*(code **)(lVar11 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar11 + -0xb0))(lVar11 + -200);
        }
        uVar15 = lVar11 - 0xd8;
        lVar11 = lVar11 + -0x118;
      } while (uVar15 != uVar23);
    }
    uStack_7a0 = (undefined8 *)uVar23;
    func_0x0412a280(uStack_7a8,(long)puStack_798 - (long)uStack_7a8);
  }
  if (pcStack_570 != (code *)0x0) {
    (*pcStack_570)(auStack_588);
  }
  if (pcStack_5b8 != (code *)0x0) {
    (*pcStack_5b8)(&uStack_5d0);
  }
  if (pcStack_5f8 != (code *)0x0) {
    (*pcStack_5f8)(&uStack_610);
  }
  if (pcStack_638 != (code *)0x0) {
    (*pcStack_638)(auStack_658 + 8);
  }
  if (((ulong)uStack_688 & 1) != 0) {
    func_0x0412a280(puStack_678,(ulong)uStack_688 & 0xfffffffffffffffe);
  }
  if ((uStack_6d0 & 1) != 0) {
    func_0x0412a280(uStack_6c0,
                    CONCAT26(uStack_6ca,CONCAT24(uStack_6cc,uStack_6d0)) & 0xfffffffffffffffe);
  }
  if (pcStack_300 != (code *)0x0) {
    (*pcStack_300)(auStack_318);
  }
  if (pcStack_348 != (code *)0x0) {
    (*pcStack_348)(auStack_360);
  }
  if (pcStack_388 != (code *)0x0) {
    (*pcStack_388)(auStack_3a0);
  }
  if (pcStack_3c8 != (code *)0x0) {
    (*pcStack_3c8)(&puStack_3e0);
  }
  if (((ulong)uStack_418 & 1) != 0) {
    func_0x0412a280(pbStack_408,(ulong)uStack_418 & 0xfffffffffffffffe);
  }
  if (((uint)auStack_760 & 1) != 0) {
    func_0x0412a280(puStack_750,CONCAT44(uStack_75c,auStack_760) & 0xfffffffffffffffe);
  }
  if ((uStack_7c0 & 1) != 0) {
    func_0x0412a280(lStack_7b0,
                    CONCAT26(uStack_7ba,CONCAT15(uStack_7bb,CONCAT14(uStack_7bc,uStack_7c0))) &
                    0xfffffffffffffffe);
  }
  auStack_7d8 = (undefined1  [4])0x72747310;
  uStack_7d4 = 0x496d6165;
  uStack_7d0 = 100;
  uStack_7cf = 0;
  uStack_688 = (undefined8 **)0x0;
  uStack_680 = 0;
  puStack_678 = (undefined8 *)0x0;
  func_0x048b1dc0(auStack_670);
  func_0x0652b590(&puStack_660);
  if (((ulong)uStack_688 & 1) == 0) {
    if (((uint)auStack_7d8 & 1) == 0) {
      puStack_678 = puStack_7c8;
      uStack_688 = (undefined8 **)CONCAT44(uStack_7d4,auStack_7d8);
      uStack_680 = CONCAT44(uStack_7cc,CONCAT22(uStack_7ce,CONCAT11(uStack_7cf,uStack_7d0)));
    }
    else {
      func_0x04885070(&uStack_688,puStack_7c8,
                      CONCAT44(uStack_7cc,CONCAT22(uStack_7ce,CONCAT11(uStack_7cf,uStack_7d0))));
    }
  }
  else {
    bVar36 = ((uint)auStack_7d8 & 1) != 0;
    puVar18 = (undefined8 *)(auStack_7d8 + 1);
    if (bVar36) {
      puVar18 = puStack_7c8;
    }
    uVar23 = (ulong)(auStack_7d8[0] >> 1);
    if (bVar36) {
      uVar23 = CONCAT44(uStack_7cc,CONCAT22(uStack_7ce,CONCAT11(uStack_7cf,uStack_7d0)));
    }
    func_0x04885120(&uStack_688,puVar18,uVar23);
  }
  auVar40 = func_0x0651f830();
  auStack_670 = auVar40;
  if (pcStack_5f8 != (code *)0x0) {
    (*pcStack_5f8)(&uStack_610);
  }
  puVar6 = puStack_5d8;
  puStack_600 = (undefined8 *)&UNK_0602fa80;
  pcStack_5f8 = (code *)0x0;
  uStack_5f0 = CONCAT35(uStack_5f0._5_3_,0x23aa0f67c);
  uStack_610 = 0;
  puStack_5d8 = &UNK_0602fa60;
  if (puVar6 != &UNK_0602fa60) {
    uStack_5e0 = 0;
  }
  if (pcStack_5b8 != (code *)0x0) {
    (*pcStack_5b8)(&uStack_5d0);
  }
  uVar23 = uStack_528;
  puVar6 = puStack_598;
  puStack_5c0 = &UNK_0602fa80;
  uStack_5b0 = 0x3aa0f67c;
  pcStack_5b8 = (code *)0x0;
  uStack_5ac = CONCAT31(uStack_5ac._1_3_,2);
  uStack_5d0 = 0xffffffffffffffff;
  puStack_598 = &UNK_0602fa60;
  if (puVar6 != &UNK_0602fa60) {
    uStack_5a0 = 0;
  }
  uStack_58c = 0;
  puStack_660 = (undefined8 *)&UNK_0652d090;
  auVar40 = func_0x0651e0c0();
  lVar12 = auVar40._0_8_;
  lVar11 = lVar12;
  if (lVar12 == 0) {
    lVar11 = func_0x048aead0(auVar40._8_8_);
  }
  uStack_418 = (undefined8 *)CONCAT44(uStack_418._4_4_,*(undefined4 *)(lVar11 + 8));
  uStack_2d8 = &uStack_418;
  lVar11 = func_0x06520320(uVar23 + 0x78,&uStack_418,&UNK_01563a4f,&uStack_2d8,&puStack_748);
  uStack_2d8._0_4_ = 0xf038540;
  uStack_2d8._4_4_ = 0;
  uStack_2b8 = &uStack_2d8;
  func_0x06521a20(&uStack_2d8,lVar11 + 0x20);
  if (uStack_2b8 == &uStack_2d8) {
    lVar11 = 0x20;
LAB_064de228:
    (**(code **)(*uStack_2b8 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (uStack_2b8 != (long *)0x0) goto LAB_064de228;
  }
  if (lVar12 == 0) {
    lVar12 = func_0x048aead0(auVar40._8_8_);
  }
  uStack_418 = (undefined8 *)CONCAT44(uStack_418._4_4_,*(undefined4 *)(lVar12 + 8));
  uStack_2d8 = &uStack_418;
  lVar11 = func_0x06521b10(uVar23 + 0xa0,&uStack_418,&UNK_01563a4f,&uStack_2d8,&puStack_748);
  uStack_2d8._0_4_ = 0xf0385c0;
  uStack_2d8._4_4_ = 0;
  uStack_2b8 = &uStack_2d8;
  func_0x065224e0(&uStack_2d8,lVar11 + 0x20);
  if (uStack_2b8 == &uStack_2d8) {
    lVar11 = 0x20;
LAB_064de253:
    (**(code **)(*uStack_2b8 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (uStack_2b8 != (long *)0x0) goto LAB_064de253;
  }
  uVar23 = uStack_528;
  auVar40 = func_0x0651f830();
  lVar12 = auVar40._0_8_;
  lVar11 = lVar12;
  if (lVar12 == 0) {
    lVar11 = func_0x048aead0(auVar40._8_8_);
  }
  uStack_418 = (undefined8 *)CONCAT44(uStack_418._4_4_,*(undefined4 *)(lVar11 + 8));
  uStack_2d8 = &uStack_418;
  lVar11 = func_0x06520320(uVar23 + 0x78,&uStack_418,&UNK_01563a4f,&uStack_2d8,&puStack_748);
  uStack_2d8._0_4_ = 0xf038640;
  uStack_2d8._4_4_ = 0;
  uStack_2b8 = &uStack_2d8;
  func_0x06521a20(&uStack_2d8,lVar11 + 0x20);
  if (uStack_2b8 == &uStack_2d8) {
    lVar11 = 0x20;
LAB_064de387:
    (**(code **)(*uStack_2b8 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (uStack_2b8 != (long *)0x0) goto LAB_064de387;
  }
  if (lVar12 == 0) {
    lVar12 = func_0x048aead0(auVar40._8_8_);
  }
  uStack_418 = (undefined8 *)CONCAT44(uStack_418._4_4_,*(undefined4 *)(lVar12 + 8));
  uStack_2d8 = &uStack_418;
  lVar11 = func_0x06521b10(uVar23 + 0xa0,&uStack_418,&UNK_01563a4f,&uStack_2d8,&puStack_748);
  uStack_2d8._0_4_ = 0xf0386c0;
  uStack_2d8._4_4_ = 0;
  uStack_2b8 = &uStack_2d8;
  func_0x065224e0(&uStack_2d8,lVar11 + 0x20);
  if (uStack_2b8 == &uStack_2d8) {
    lVar11 = 0x20;
  }
  else {
    lVar11 = 0x28;
    if (uStack_2b8 == (long *)0x0) goto LAB_064de3b8;
  }
  (**(code **)(*uStack_2b8 + lVar11))();
LAB_064de3b8:
  uVar23 = uStack_528;
  func_0x06523ef0(&uStack_2d8,&puStack_660);
  uStack_788 = 0;
  uStack_780 = 0;
  cStack_778 = 0;
  uStack_777._0_7_ = 0;
  ppuStack_740 = (undefined8 **)((ulong)ppuStack_740 & 0xffffffffffffff00);
  puStack_748 = &uStack_788;
  lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x118);
  if (lVar11 == 0) {
    func_0x0eec74c0(0x118,0);
  }
  cStack_778 = (char)(lVar11 + 0x118);
  uStack_777._0_7_ = (undefined7)((ulong)(lVar11 + 0x118) >> 8);
  uStack_6d0 = (uint)lVar11;
  uStack_6cc = (undefined2)((ulong)lVar11 >> 0x20);
  uStack_6ca = (undefined2)((ulong)lVar11 >> 0x30);
  uStack_410 = &uStack_6d0;
  pbStack_408 = (byte *)&uStack_7a8;
  auStack_400._0_8_ = auStack_400._0_8_ & 0xffffffffffffff00;
  uStack_7a8 = (undefined8 **)lVar11;
  uStack_788 = lVar11;
  uStack_780 = lVar11;
  uStack_418 = &uStack_788;
  func_0x06523ef0(lVar11,&uStack_2d8);
  uStack_780 = (long)uStack_7a8 + 0x118;
  if (pcStack_1e8 != (code *)0x0) {
    (*pcStack_1e8)(auStack_200);
  }
  if (pcStack_230 != (code *)0x0) {
    (*pcStack_230)(apcStack_248);
  }
  if (pcStack_270 != (code *)0x0) {
    (*pcStack_270)(apcStack_288);
  }
  if (apcStack_2b0[0] != (code *)0x0) {
    (*apcStack_2b0[0])(&puStack_2c8);
  }
  pbStack_408 = (byte *)0x0;
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  pcStack_3c8 = (code *)0x0;
  uStack_3c0 = 0;
  puStack_3d8 = (undefined8 *)0x0;
  plStack_3d0 = (long *)0x0;
  puStack_3e8 = (undefined8 *)0x0;
  puStack_3e0 = (undefined8 *)0x0;
  auStack_400._8_8_ = 0;
  uStack_3f0 = 0;
  uStack_418 = (undefined8 *)0x0;
  uStack_410 = (undefined4 *)0x0;
  auStack_400._0_8_ = 0x6c65636e61630c;
  pcVar19 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
  if (pcVar19 == (code *)0x0) {
    func_0x0eec74c0(0x70,0);
  }
  *(undefined8 *)((long)pcVar19 + 8) = 0;
  *(undefined8 *)((long)pcVar19 + 0x10) = 0;
  *(undefined **)pcVar19 = &UNK_0f038740;
  uVar9 = func_0x0d858500(&uStack_788);
  plVar17 = (long *)((long)pcVar19 + 0x18);
  *(undefined1 *)((long)pcVar19 + 0x20) = 0;
  *(undefined4 *)((long)pcVar19 + 0x24) = uVar9;
  *(undefined4 *)((long)pcVar19 + 0x28) = 0;
  *(undefined8 *)((long)pcVar19 + 0x30) = 0;
  *(undefined8 *)((long)pcVar19 + 0x38) = 0;
  *(undefined8 *)((long)pcVar19 + 0x40) = 0;
  *(undefined **)((long)pcVar19 + 0x18) = &UNK_0f038790;
  *(ulong *)((long)pcVar19 + 0x50) = uVar23;
  *(undefined4 *)((long)pcVar19 + 0x58) = (undefined4)uStack_788;
  *(undefined4 *)((long)pcVar19 + 0x5c) = uStack_788._4_4_;
  *(undefined4 *)((long)pcVar19 + 0x60) = (undefined4)uStack_780;
  *(undefined4 *)((long)pcVar19 + 100) = uStack_780._4_4_;
  *(ulong *)((long)pcVar19 + 0x68) = CONCAT71((undefined7)uStack_777,cStack_778);
  uStack_788 = 0;
  uStack_780 = 0;
  cStack_778 = 0;
  uStack_777._0_7_ = 0;
  uVar9 = func_0x0d858620(plVar17);
  pcVar7 = pcStack_3c8;
  *(undefined4 *)((long)pcVar19 + 0x28) = uVar9;
  plStack_3d0 = plVar17;
  if (pcStack_3c8 != (code *)0x0) {
    LOCK();
    plVar17 = (long *)((long)pcStack_3c8 + 8);
    lVar11 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      lVar11 = *(long *)pcStack_3c8;
      pcStack_3c8 = pcVar19;
      (**(code **)(lVar11 + 0x10))(pcVar7);
      func_0x0412c2d0(pcVar7);
      pcVar19 = pcStack_3c8;
    }
  }
  pcStack_3c8 = pcVar19;
  puStack_2c8 = puStack_678;
  uStack_2d8._0_4_ = (uint)uStack_688;
  uStack_2d8._4_4_ = (undefined4)((ulong)uStack_688 >> 0x20);
  uStack_2d0._0_4_ = (undefined4)uStack_680;
  uStack_2d0._4_4_ = (undefined4)(uStack_680 >> 0x20);
  uStack_688 = (undefined8 **)0x0;
  uStack_680 = 0;
  puStack_678 = (undefined8 *)0x0;
  uStack_2c0 = auStack_670._0_4_;
  uStack_2bc = auStack_670._4_4_;
  uStack_2b8 = (long *)auStack_670._8_8_;
  func_0x065281f0(apcStack_2b0,&puStack_660);
  puStack_748 = (undefined8 *)0x0;
  ppuStack_740 = (undefined8 **)0x0;
  ppuStack_738 = (undefined8 **)0x0;
  uStack_7a0 = (undefined8 *)((ulong)uStack_7a0 & 0xffffffffffffff00);
  uStack_7a8 = &puStack_748;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x140,0);
  }
  puVar1 = puVar18 + 0x28;
  puStack_748 = puVar18;
  ppuStack_738 = (undefined8 **)puVar1;
  if (((uint)uStack_2d8 & 1) == 0) {
    puVar18[2] = puStack_2c8;
    *puVar18 = CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8);
    puVar18[1] = CONCAT44(uStack_2d0._4_4_,(undefined4)uStack_2d0);
    ppuStack_740 = (undefined8 **)puVar18;
  }
  else {
    ppuStack_740 = (undefined8 **)puVar18;
    func_0x0412e5e0(puVar18,puStack_2c8,CONCAT44(uStack_2d0._4_4_,(undefined4)uStack_2d0));
  }
  *(undefined4 *)(puVar18 + 3) = uStack_2c0;
  *(undefined4 *)((long)puVar18 + 0x1c) = uStack_2bc;
  *(undefined4 *)(puVar18 + 4) = (undefined4)uStack_2b8;
  *(undefined4 *)((long)puVar18 + 0x24) = uStack_2b8._4_4_;
  func_0x06523ef0(puVar18 + 5,apcStack_2b0);
  ppuStack_740 = (undefined8 **)puVar1;
  if (apcStack_1c0[0] != (code *)0x0) {
    (*apcStack_1c0[0])(auStack_1d8);
  }
  if (pcStack_208 != (code *)0x0) {
    (*pcStack_208)(auStack_220);
  }
  if (apcStack_248[0] != (code *)0x0) {
    (*apcStack_248[0])(auStack_260);
  }
  if (apcStack_288[0] != (code *)0x0) {
    (*apcStack_288[0])(auStack_2a0);
  }
  if (((uint)uStack_2d8 & 1) != 0) {
    func_0x0412a280(puStack_2c8,CONCAT44(uStack_2d8._4_4_,(uint)uStack_2d8) & 0xfffffffffffffffe);
  }
  uVar10 = (**(code **)(*plStack_3d0 + 0x20))();
  uVar15 = ((long)ppuStack_740 - (long)puStack_748 >> 6) * -0x3333333333333333;
  uVar23 = 0;
  if ((uVar10 != 0) && ((uint)uVar15 != 0)) {
    uVar34 = 0;
    uVar23 = 0;
    do {
      auVar40 = (**(code **)(*plStack_3d0 + 0x28))(plStack_3d0,uVar34);
      lVar12 = auVar40._8_8_;
      lVar11 = auVar40._0_8_;
      auVar40 = func_0x06527d70();
      if (auVar40._8_8_ == lVar12) {
        if (auVar40._0_8_ == 0) {
          lVar28 = func_0x048aead0(auVar40._8_8_);
          iVar8 = *(int *)(lVar28 + 8);
          if (lVar11 == 0) goto LAB_064de870;
LAB_064de851:
          if (iVar8 != *(int *)(lVar11 + 8)) goto LAB_064de890;
        }
        else {
          iVar8 = *(int *)(auVar40._0_8_ + 8);
          if (lVar11 != 0) goto LAB_064de851;
LAB_064de870:
          lVar28 = func_0x048aead0(lVar12);
          if (iVar8 != *(int *)(lVar28 + 8)) goto LAB_064de890;
        }
      }
      else {
LAB_064de890:
        auVar40 = func_0x06527e30();
        if (auVar40._8_8_ == lVar12) {
          if (auVar40._0_8_ == 0) {
            lVar28 = func_0x048aead0(auVar40._8_8_);
            iVar8 = *(int *)(lVar28 + 8);
          }
          else {
            iVar8 = *(int *)(auVar40._0_8_ + 8);
          }
          if (lVar11 == 0) {
            lVar28 = func_0x048aead0(lVar12);
            iVar2 = *(int *)(lVar28 + 8);
          }
          else {
            iVar2 = *(int *)(lVar11 + 8);
          }
          if (iVar8 == iVar2) goto LAB_064dea8a;
        }
        auVar40 = func_0x06527ef0();
        if (auVar40._8_8_ == lVar12) {
          if (auVar40._0_8_ == 0) {
            lVar28 = func_0x048aead0(auVar40._8_8_);
            iVar8 = *(int *)(lVar28 + 8);
          }
          else {
            iVar8 = *(int *)(auVar40._0_8_ + 8);
          }
          if (lVar11 == 0) {
            lVar28 = func_0x048aead0(lVar12);
            iVar2 = *(int *)(lVar28 + 8);
          }
          else {
            iVar2 = *(int *)(lVar11 + 8);
          }
          if (iVar8 == iVar2) goto LAB_064dea8a;
        }
        auVar40 = func_0x06527fb0();
        if (auVar40._8_8_ == lVar12) {
          if (auVar40._0_8_ == 0) {
            lVar28 = func_0x048aead0(auVar40._8_8_);
            iVar8 = *(int *)(lVar28 + 8);
          }
          else {
            iVar8 = *(int *)(auVar40._0_8_ + 8);
          }
          if (lVar11 == 0) {
            lVar28 = func_0x048aead0(lVar12);
            iVar2 = *(int *)(lVar28 + 8);
          }
          else {
            iVar2 = *(int *)(lVar11 + 8);
          }
          if (iVar8 == iVar2) goto LAB_064dea8a;
        }
        auVar40 = func_0x06528070();
        if (auVar40._8_8_ == lVar12) {
          if (auVar40._0_8_ == 0) {
            lVar28 = func_0x048aead0(auVar40._8_8_);
            iVar8 = *(int *)(lVar28 + 8);
          }
          else {
            iVar8 = *(int *)(auVar40._0_8_ + 8);
          }
          if (lVar11 == 0) {
            lVar28 = func_0x048aead0(lVar12);
            iVar2 = *(int *)(lVar28 + 8);
          }
          else {
            iVar2 = *(int *)(lVar11 + 8);
          }
          if (iVar8 == iVar2) goto LAB_064dea8a;
        }
        auVar40 = func_0x06528130();
        if (auVar40._8_8_ == lVar12) {
          if (auVar40._0_8_ == 0) {
            lVar28 = func_0x048aead0(auVar40._8_8_);
            iVar8 = *(int *)(lVar28 + 8);
          }
          else {
            iVar8 = *(int *)(auVar40._0_8_ + 8);
          }
          if (lVar11 == 0) {
            lVar28 = func_0x048aead0(lVar12);
            iVar2 = *(int *)(lVar28 + 8);
          }
          else {
            iVar2 = *(int *)(lVar11 + 8);
          }
          if (iVar8 == iVar2) goto LAB_064dea8a;
        }
        puVar18 = puStack_748;
        ppuVar5 = ppuStack_740;
        if (puStack_748[uVar23 * 0x28 + 4] != lVar12) goto joined_r0x064dec84;
        if (puStack_748[uVar23 * 0x28 + 3] == 0) {
          lVar28 = func_0x048aead0();
          iVar8 = *(int *)(lVar28 + 8);
          if (lVar11 == 0) goto LAB_064dea72;
LAB_064dea59:
          if (iVar8 != *(int *)(lVar11 + 8)) goto LAB_064dec71;
        }
        else {
          iVar8 = *(int *)(puStack_748[uVar23 * 0x28 + 3] + 8);
          if (lVar11 != 0) goto LAB_064dea59;
LAB_064dea72:
          lVar11 = func_0x048aead0(lVar12);
          if (iVar8 != *(int *)(lVar11 + 8)) goto LAB_064dec71;
        }
        uVar23 = (ulong)((int)uVar23 + 1);
      }
LAB_064dea8a:
    } while (((uint)uVar23 < (uint)uVar15) && (uVar34 = uVar34 + 1, uVar34 < uVar10));
    uVar15 = ((long)ppuStack_740 - (long)puStack_748 >> 6) * -0x3333333333333333;
  }
  puVar18 = puStack_3e8;
  if (uVar15 == uVar23) {
    puVar1 = puStack_3e0;
    if (puStack_3e8 != (undefined8 *)0x0) {
      while (puVar18 != puVar1) {
        func_0x05fe8450(puVar1 + -0x28);
        puVar1 = puVar1 + -0x28;
      }
      puStack_3e0 = puVar18;
      func_0x0412a280(puStack_3e8,(long)puStack_3d8 - (long)puStack_3e8);
    }
    puStack_3d8 = ppuStack_738;
    if (uStack_488 < puStack_480) {
      *uStack_488 = 0;
      uStack_488[1] = 0;
      uStack_488[2] = 0;
      *uStack_488 = uStack_418;
      uStack_488[1] = uStack_410;
      uStack_488[2] = pbStack_408;
      uStack_418 = (undefined8 *)0x0;
      uStack_410 = (undefined4 *)0x0;
      pbStack_408 = (byte *)0x0;
      uStack_488[5] = uStack_3f0;
      uStack_488[3] = auStack_400._0_8_;
      uStack_488[4] = auStack_400._8_8_;
      auStack_400._0_8_ = 0;
      auStack_400._8_8_ = 0;
      uStack_3f0 = 0;
      uStack_488[6] = 0;
      uStack_488[7] = 0;
      uStack_488[8] = 0;
      uStack_488[6] = puStack_748;
      uStack_488[7] = ppuStack_740;
      uStack_488[8] = ppuStack_738;
      puStack_3e8 = (undefined8 *)0x0;
      puStack_3e0 = (undefined8 *)0x0;
      puStack_3d8 = (undefined8 *)0x0;
      uStack_488[9] = plStack_3d0;
      uStack_488[10] = pcStack_3c8;
      plStack_3d0 = (long *)0x0;
      pcStack_3c8 = (code *)0x0;
      uStack_488[0xb] = 0;
      uStack_488[0xc] = 0;
      uStack_488[0xd] = 0;
      uStack_488[0xb] = uStack_3c0;
      uStack_488[0xc] = uStack_3b8;
      uStack_488[0xd] = uStack_3b0;
      uStack_3c0 = 0;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      uStack_488 = uStack_488 + 0xe;
    }
    else {
      puStack_3e8 = puStack_748;
      puStack_3e0 = ppuStack_740;
      uStack_488 = (undefined8 *)func_0x0652ac80(&uStack_490,&uStack_418);
    }
  }
  else {
LAB_064dec71:
    puVar18 = puStack_748;
    ppuVar5 = ppuStack_740;
    if (puStack_748 != (undefined8 *)0x0) {
joined_r0x064dec84:
      while (puVar1 = puStack_748, (undefined8 **)puStack_748 != ppuVar5) {
        puStack_748 = puVar18;
        func_0x05fe8450(ppuVar5 + -0x28);
        puVar18 = puStack_748;
        ppuVar5 = ppuVar5 + -0x28;
        puStack_748 = puVar1;
      }
      ppuStack_740 = (undefined8 **)puStack_748;
      puStack_748 = puVar18;
      func_0x0412a280(puVar18,(long)ppuStack_738 - (long)puVar18);
    }
  }
  func_0x05f93280(&uStack_418);
  lVar11 = uStack_788;
  if (uStack_788 != 0) {
    if (uStack_788 != uStack_780) {
      lVar12 = uStack_780 + -0x40;
      do {
        if (*(code **)(lVar12 + 0x18) != (code *)0x0) {
          (**(code **)(lVar12 + 0x18))(lVar12);
        }
        if (*(code **)(lVar12 + -0x30) != (code *)0x0) {
          (**(code **)(lVar12 + -0x30))(lVar12 + -0x48);
        }
        if (*(code **)(lVar12 + -0x70) != (code *)0x0) {
          (**(code **)(lVar12 + -0x70))(lVar12 + -0x88);
        }
        if (*(code **)(lVar12 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar12 + -0xb0))(lVar12 + -200);
        }
        lVar28 = lVar12 + -0xd8;
        lVar12 = lVar12 + -0x118;
      } while (lVar28 != lVar11);
    }
    uStack_780 = lVar11;
    func_0x0412a280(uStack_788,CONCAT71((undefined7)uStack_777,cStack_778) - uStack_788);
  }
  if (pcStack_570 != (code *)0x0) {
    (*pcStack_570)(auStack_588);
  }
  if (pcStack_5b8 != (code *)0x0) {
    (*pcStack_5b8)(&uStack_5d0);
  }
  if (pcStack_5f8 != (code *)0x0) {
    (*pcStack_5f8)(&uStack_610);
  }
  if (pcStack_638 != (code *)0x0) {
    (*pcStack_638)(auStack_658 + 8);
  }
  if (((ulong)uStack_688 & 1) != 0) {
    func_0x0412a280(puStack_678,(ulong)uStack_688 & 0xfffffffffffffffe);
  }
  if (((uint)auStack_7d8 & 1) != 0) {
    func_0x0412a280(puStack_7c8,CONCAT44(uStack_7d4,auStack_7d8) & 0xfffffffffffffffe);
  }
  pbVar20 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (pbVar20 == (byte *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar21 = _UNK_0119edb5;
  uStack_418 = (undefined8 *)0x21;
  uStack_410 = (undefined4 *)0x18;
  *(undefined8 *)pbVar20 = _DAT_0119edad;
  *(undefined8 *)(pbVar20 + 8) = uVar21;
  pbVar20[0x10] = 0x70;
  pbVar20[0x11] = 99;
  pbVar20[0x12] = 0x4d;
  pbVar20[0x13] = 0x6f;
  pbVar20[0x14] = 100;
  pbVar20[0x15] = 0x75;
  pbVar20[0x16] = 0x6c;
  pbVar20[0x17] = 0x65;
  pbVar20[0x18] = 0;
  uStack_688 = (undefined8 **)CONCAT26(uStack_688._6_2_,1);
  uStack_680 = 0;
  puStack_678 = (undefined8 *)0x0;
  auStack_670._0_8_ = 0;
  pbStack_408 = pbVar20;
  func_0x0d84f800(&uStack_2d8,
                  (((((((((((((((((((((((((ulong)*pbVar20 ^ 0x55c5e55dfb685f30) * 0x100000001b3 ^
                                        (ulong)pbVar20[1]) * 0x100000001b3 ^ (ulong)pbVar20[2]) *
                                       0x100000001b3 ^ (ulong)pbVar20[3]) * 0x100000001b3 ^
                                     (ulong)pbVar20[4]) * 0x100000001b3 ^ (ulong)pbVar20[5]) *
                                    0x100000001b3 ^ (ulong)pbVar20[6]) * 0x100000001b3 ^
                                  (ulong)pbVar20[7]) * 0x100000001b3 ^ (ulong)pbVar20[8]) *
                                 0x100000001b3 ^ (ulong)pbVar20[9]) * 0x100000001b3 ^
                               (ulong)pbVar20[10]) * 0x100000001b3 ^ (ulong)pbVar20[0xb]) *
                              0x100000001b3 ^ (ulong)pbVar20[0xc]) * 0x100000001b3 ^
                            (ulong)pbVar20[0xd]) * 0x100000001b3 ^ (ulong)pbVar20[0xe]) *
                           0x100000001b3 ^ (ulong)pbVar20[0xf]) * 0x100000001b3 ^
                         (ulong)pbVar20[0x10]) * 0x100000001b3 ^ (ulong)pbVar20[0x11]) *
                        0x100000001b3 ^ (ulong)pbVar20[0x12]) * 0x100000001b3 ^ (ulong)pbVar20[0x13]
                      ) * 0x100000001b3 ^ (ulong)pbVar20[0x14]) * 0x100000001b3 ^
                    (ulong)pbVar20[0x15]) * 0x100000001b3 ^ (ulong)pbVar20[0x16]) * 0x100000001b3 ^
                  (ulong)pbVar20[0x17]) * 0x100000001b3,
                  (((((((((((((((((((((((((ulong)*pbVar20 ^ 0x74aadb8998c6c69c) * 0x100000001b3 ^
                                        (ulong)pbVar20[1]) * 0x100000001b3 ^ (ulong)pbVar20[2]) *
                                       0x100000001b3 ^ (ulong)pbVar20[3]) * 0x100000001b3 ^
                                     (ulong)pbVar20[4]) * 0x100000001b3 ^ (ulong)pbVar20[5]) *
                                    0x100000001b3 ^ (ulong)pbVar20[6]) * 0x100000001b3 ^
                                  (ulong)pbVar20[7]) * 0x100000001b3 ^ (ulong)pbVar20[8]) *
                                 0x100000001b3 ^ (ulong)pbVar20[9]) * 0x100000001b3 ^
                               (ulong)pbVar20[10]) * 0x100000001b3 ^ (ulong)pbVar20[0xb]) *
                              0x100000001b3 ^ (ulong)pbVar20[0xc]) * 0x100000001b3 ^
                            (ulong)pbVar20[0xd]) * 0x100000001b3 ^ (ulong)pbVar20[0xe]) *
                           0x100000001b3 ^ (ulong)pbVar20[0xf]) * 0x100000001b3 ^
                         (ulong)pbVar20[0x10]) * 0x100000001b3 ^ (ulong)pbVar20[0x11]) *
                        0x100000001b3 ^ (ulong)pbVar20[0x12]) * 0x100000001b3 ^ (ulong)pbVar20[0x13]
                      ) * 0x100000001b3 ^ (ulong)pbVar20[0x14]) * 0x100000001b3 ^
                    (ulong)pbVar20[0x15]) * 0x100000001b3 ^ (ulong)pbVar20[0x16]) * 0x100000001b3 ^
                  (ulong)pbVar20[0x17]) * 0x100000001b3,&uStack_418,&uStack_688,0);
  if ((uStack_680 & 1) != 0) {
    func_0x0412a280(auStack_670._0_8_,uStack_680 & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_418 & 1) != 0) {
    func_0x0412a280(pbStack_408,(ulong)uStack_418 & 0xfffffffffffffffe);
  }
  auStack_4d8 = func_0x0652d8d0();
  lVar12 = lStack_508;
  lVar11 = lStack_500;
  if (lStack_508 != 0) {
    for (; lVar12 != lVar11; lVar11 = lVar11 + -0x30) {
      if ((*(byte *)(lVar11 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar11 + -0x10),
                        *(ulong *)(lVar11 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_500 = lVar12;
    func_0x0412a280(lStack_508,lStack_4f8 - lStack_508);
  }
  puStack_678 = (undefined8 *)lStack_510;
  uStack_680 = lStack_518;
  uStack_688 = (undefined8 **)lStack_520;
  lStack_520 = 0;
  lStack_518 = 0;
  lStack_510 = 0;
  lStack_508 = 0;
  lStack_500 = 0;
  lStack_4f8 = 0;
  puStack_660 = puStack_4e0;
  auStack_670._0_8_ = uStack_4f0;
  auStack_670._8_8_ = uStack_4e8;
  uStack_4f0 = 0;
  uStack_4e8 = 0;
  puStack_4e0 = (undefined8 *)0x0;
  uStack_648 = uStack_4c8;
  uStack_640 = uStack_4c0;
  pcStack_638 = (code *)uStack_4b8;
  uStack_630 = uStack_4b0;
  uStack_628 = uStack_4a8;
  uStack_4b8 = 0;
  uStack_4b0 = 0;
  uStack_4a8 = 0;
  uStack_620 = uStack_4a0;
  uStack_618 = uStack_498;
  uStack_4a0 = 0;
  uStack_498 = 0;
  uStack_610 = uStack_490;
  uStack_608 = (undefined4)uStack_488;
  uStack_604 = uStack_488._4_4_;
  puStack_600 = puStack_480;
  uStack_490 = 0;
  uStack_488 = (undefined8 *)0x0;
  puStack_480 = (undefined8 *)0x0;
  pcStack_5f8 = (code *)uStack_478;
  uStack_5f0 = uStack_470;
  uStack_5e8 = uStack_468;
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_468 = 0;
  uStack_5e0 = uStack_460;
  puStack_5d8 = (undefined *)uStack_458;
  uStack_5d0 = uStack_450;
  uStack_460 = 0;
  uStack_458 = 0;
  uStack_450 = 0;
  uStack_5c8 = uStack_448;
  puStack_5c0 = (undefined *)uStack_440;
  pcStack_5b8 = (code *)uStack_438;
  uStack_448 = 0;
  uStack_440 = 0;
  uStack_438 = 0;
  uStack_5b0 = (undefined4)uStack_430;
  uStack_5ac = uStack_430._4_4_;
  uStack_5a8 = (undefined4)uStack_428;
  uStack_5a4 = uStack_428._4_4_;
  uStack_5a0 = uStack_420;
  uStack_430 = 0;
  uStack_428 = 0;
  uStack_420 = 0;
  auStack_658 = auStack_4d8;
  func_0x0d84fd50(&uStack_2d8,&uStack_688);
  func_0x0651ffe0(&uStack_688);
  uStack_688 = (undefined8 **)0x0;
  uStack_680 = 0;
  puStack_678 = (undefined8 *)0x0;
  uStack_418 = (undefined8 *)0x0;
  uStack_410 = (undefined4 *)0x0;
  pbStack_408 = (byte *)0x0;
  FUN_0d841110(uStack_50,&uStack_2d8,1,&uStack_688,&uStack_418);
  lVar12 = (long)uStack_418;
  lVar11 = (long)uStack_410;
  if (uStack_418 != (undefined8 *)0x0) {
    for (; lVar12 != lVar11; lVar11 = lVar11 + -0x18) {
      if ((*(byte *)(lVar11 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar11 + -8),*(ulong *)(lVar11 + -0x18) & 0xfffffffffffffffe
                       );
      }
    }
    uStack_410 = (undefined4 *)lVar12;
    func_0x0412a280(uStack_418,(long)pbStack_408 - (long)uStack_418);
  }
  lVar12 = (long)uStack_688;
  lVar11 = uStack_680;
  if (uStack_688 != (undefined8 **)0x0) {
    for (; lVar12 != lVar11; lVar11 = lVar11 + -0x18) {
      if ((*(byte *)(lVar11 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar11 + -8),*(ulong *)(lVar11 + -0x18) & 0xfffffffffffffffe
                       );
      }
    }
    uStack_680 = lVar12;
    func_0x0412a280(uStack_688,(long)puStack_678 - (long)uStack_688);
  }
  func_0x0d84fa30(&uStack_2d8);
  func_0x0651ffe0(&lStack_508);
  lVar12 = lStack_520;
  lVar11 = lStack_518;
  if (lStack_520 != 0) {
    for (; lVar12 != lVar11; lVar11 = lVar11 + -0x30) {
      if ((*(byte *)(lVar11 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar11 + -0x10),
                        *(ulong *)(lVar11 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_518 = lVar12;
    func_0x0412a280(lStack_520,lStack_510 - lStack_520);
  }
  if ((bStack_540 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_52f,uStack_530),
                    CONCAT71(uStack_53f,bStack_540) & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x119edad  RpcResultStreamRpcModule
 */
