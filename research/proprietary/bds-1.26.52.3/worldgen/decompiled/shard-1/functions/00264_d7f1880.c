/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd8f1880 (ELF vaddr 0xd7f1880)
 * Label: caller-of-callee
 * Body:  [[0d8f1880, 0d8f1f21] [0d8f1f30, 0d8f3071] [0d8f3080, 0d8f3751] [0d8f3760, 0d8f3df1] [0d8f3e00, 0d8fce64]]
 * Ghidra: FUN_0d8f1880
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d8f1880(long param_1)

{
  long *plVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined4 *puVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  uint uVar18;
  undefined *puVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  bool bVar23;
  uint auStack_620 [2];
  long *plStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined *puStack_5f8;
  undefined1 *puStack_5f0;
  undefined1 *puStack_5e8;
  undefined *puStack_5e0;
  undefined *puStack_5d8;
  undefined4 uStack_5d0;
  undefined8 uStack_5c8;
  long *plStack_5c0;
  undefined8 *puStack_5b8;
  long *plStack_5b0;
  uint uStack_5a8;
  undefined1 uStack_5a4;
  undefined1 uStack_5a3;
  undefined1 uStack_5a2;
  undefined1 uStack_5a1;
  undefined1 uStack_5a0;
  undefined1 uStack_59f;
  undefined1 uStack_59e;
  undefined1 uStack_59d;
  undefined1 uStack_59c;
  undefined1 uStack_59b;
  undefined1 uStack_59a;
  undefined1 uStack_599;
  undefined1 uStack_598;
  undefined1 uStack_597;
  undefined1 uStack_596;
  undefined2 uStack_595;
  undefined1 uStack_593;
  undefined2 uStack_592;
  byte bStack_590;
  undefined4 uStack_58f;
  undefined1 uStack_58b;
  undefined1 uStack_58a;
  undefined1 uStack_589;
  undefined1 uStack_588;
  undefined1 uStack_587;
  undefined1 uStack_586;
  undefined1 uStack_585;
  undefined1 uStack_584;
  undefined1 uStack_583;
  undefined1 uStack_582;
  undefined1 uStack_581;
  undefined1 uStack_580;
  undefined1 uStack_57f;
  undefined1 uStack_57e;
  undefined2 uStack_57d;
  undefined1 uStack_57b;
  undefined2 uStack_57a;
  undefined4 uStack_578;
  undefined1 uStack_574;
  undefined2 uStack_573;
  undefined1 uStack_571;
  undefined1 uStack_570;
  undefined2 uStack_56f;
  undefined1 uStack_56d;
  undefined4 uStack_56c;
  undefined8 *puStack_568;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  undefined8 uStack_530;
  long lStack_528;
  long lStack_520;
  long lStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long lStack_500;
  undefined2 uStack_4f8;
  undefined2 uStack_4f6;
  uint uStack_4f4;
  uint uStack_4f0;
  undefined1 uStack_4ec;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  char cStack_4b0;
  undefined1 uStack_4af;
  undefined2 uStack_4ae;
  undefined2 uStack_4ac;
  undefined2 uStack_4aa;
  long lStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  ulong uStack_420;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined8 uStack_370;
  undefined8 uStack_368;
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
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
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
  undefined8 uStack_268;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 uStack_230;
  undefined1 uStack_228;
  undefined7 uStack_227;
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
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
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
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
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
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 uStack_f0;
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
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
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
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  func_0x0d8ee2e0();
  lStack_4a0 = param_1 + 0x18;
  lVar11 = func_0x06fd8710();
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar23 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar20 = lVar11 + 9;
    if (bVar23) {
      lVar20 = *(long *)(lVar11 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar23) {
      uVar21 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0d985f40(&uStack_458,param_1,lVar20,uVar21);
    if ((char)uStack_428 != '\0') goto LAB_0d8f18f0;
LAB_0d8f1935:
    uStack_4b8 = uStack_428;
    uStack_4c8 = uStack_438;
    uStack_4d8 = uStack_448;
    uStack_4d0 = uStack_440;
    uStack_4cc = uStack_43c;
    uStack_4e8 = uStack_458;
    uStack_4e0 = uStack_450;
    func_0x0d986480(&puStack_5b8,uStack_458 + 3);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f19ef:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f19ef;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    if ((DAT_0f5a52d0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5a52d0), iVar10 != 0)) {
      func_0x06fd86a0(0xf5a52b8);
      func_0x0410844d(&DAT_0f5a52d0);
    }
    uStack_4c0 = 0xb8ce6d7700000001;
    plVar17 = uStack_4e8 + 3;
    puStack_5b8 = (undefined8 *)func_0x06fd8710(plVar17);
    plStack_5b0 = plVar17;
    func_0x0ed621a0(&puStack_5b8,uStack_4c0._4_4_);
    plStack_5b0 = &uStack_4e0;
    puStack_5b8 = (undefined8 *)CONCAT62(puStack_5b8._2_6_,0x10);
    uStack_5a8 = uStack_4c0._4_4_;
    uStack_5a0 = 0;
    uStack_59f = 0;
    uStack_59e = 0;
    uStack_59d = 0;
    uStack_59c = 0;
    uStack_59b = 0;
    uStack_59a = 0;
    uStack_599 = 0;
    uStack_598 = 0;
    uStack_597 = 0;
    uStack_596 = 0;
    uStack_595 = 0;
    uStack_593 = 0;
    uStack_592 = 0;
    bStack_590 = 0;
    uStack_58f = 0;
    uStack_58b = 0;
    uStack_58a = 0;
    uStack_589 = 0;
    uStack_588 = 0;
    uStack_587 = 0;
    uStack_586 = 0;
    uStack_585 = 0;
    uStack_584 = 0;
    uStack_583 = 0;
    uStack_582 = 0;
    uStack_581 = 0;
    uStack_580 = 0;
    uStack_57f = 0;
    uStack_57e = 0;
    uStack_57d = 0;
    uStack_57b = 0;
    uStack_57a = 0;
    uStack_578 = 0x61687314;
    uStack_574 = 0x6b;
    uStack_573 = 0x5f65;
    uStack_571 = 0x74;
    uStack_570 = 0x69;
    uStack_56f = 0x656d;
    uStack_56d = 0;
    lStack_560 = 0;
    lStack_558 = 0;
    lStack_550 = 0;
    lStack_548 = 0;
    lStack_540 = 0;
    lStack_538 = 0;
    uStack_530 = CONCAT44(uStack_530._4_4_,0x3f600000);
    func_0x048afb10(&lStack_560,8);
    uStack_508 = 0;
    lStack_500 = 0;
    lStack_518 = 0;
    uStack_510 = 0;
    lStack_528 = 0;
    lStack_520 = 0;
    uStack_4f8 = 0xff00;
    uStack_4f4 = uStack_4f4 & 0xffffff00;
    uStack_4f0 = uStack_4f0 & 0xffffff00;
    uStack_4ec = 0;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610._4_4_ << 0x20);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05daeda0;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_05daea90;
    puStack_5e0 = &UNK_0d9867f0;
    puStack_5d8 = &UNK_0d986950;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    plVar17 = plStack_5b0;
    if ((DAT_0f550a20 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550a20), iVar10 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_620[0] = _DAT_0f550a0c;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = (long)&UNK_0ef439d0;
    plStack_618 = plVar13 + 3;
    lVar11 = CONCAT17(uStack_599,
                      CONCAT16(uStack_59a,
                               CONCAT15(uStack_59b,
                                        CONCAT14(uStack_59c,
                                                 CONCAT13(uStack_59d,
                                                          CONCAT12(uStack_59e,
                                                                   CONCAT11(uStack_59f,uStack_5a0)))
                                                ))));
    lVar20 = CONCAT26(uStack_592,
                      CONCAT15(uStack_593,
                               CONCAT23(uStack_595,
                                        CONCAT12(uStack_596,CONCAT11(uStack_597,uStack_598)))));
    uStack_5a0 = 0;
    uStack_59f = 0;
    uStack_59e = 0;
    uStack_59d = 0;
    uStack_59c = 0;
    uStack_59b = 0;
    uStack_59a = 0;
    uStack_599 = 0;
    uStack_598 = 0;
    uStack_597 = 0;
    uStack_596 = 0;
    uStack_595 = 0;
    uStack_593 = 0;
    uStack_592 = 0;
    plVar13[3] = lVar11;
    plVar13[4] = lVar20;
    plVar13[7] = CONCAT26(uStack_57a,
                          CONCAT15(uStack_57b,
                                   CONCAT23(uStack_57d,
                                            CONCAT12(uStack_57e,CONCAT11(uStack_57f,uStack_580)))));
    plVar13[5] = CONCAT17(uStack_589,
                          CONCAT16(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590))))
    ;
    plVar13[6] = CONCAT17(uStack_581,
                          CONCAT16(uStack_582,
                                   CONCAT15(uStack_583,
                                            CONCAT14(uStack_584,
                                                     CONCAT13(uStack_585,
                                                              CONCAT12(uStack_586,
                                                                       CONCAT11(uStack_587,
                                                                                uStack_588)))))));
    bStack_590 = 0;
    uStack_58f = 0;
    uStack_58b = 0;
    uStack_58a = 0;
    uStack_589 = 0;
    uStack_588 = 0;
    uStack_587 = 0;
    uStack_586 = 0;
    uStack_585 = 0;
    uStack_584 = 0;
    uStack_583 = 0;
    uStack_582 = 0;
    uStack_581 = 0;
    uStack_580 = 0;
    uStack_57f = 0;
    uStack_57e = 0;
    uStack_57d = 0;
    uStack_57b = 0;
    uStack_57a = 0;
    plVar13[10] = (long)puStack_568;
    plVar13[8] = CONCAT17(uStack_571,CONCAT25(uStack_573,CONCAT14(uStack_574,uStack_578)));
    plVar13[9] = CONCAT44(uStack_56c,CONCAT13(uStack_56d,CONCAT21(uStack_56f,uStack_570)));
    uStack_578 = 0;
    uStack_574 = 0;
    uStack_573 = 0;
    uStack_571 = 0;
    uStack_570 = 0;
    uStack_56f = 0;
    uStack_56d = 0;
    uStack_56c = 0;
    puStack_568 = (undefined8 *)0x0;
    plVar13[0xb] = lStack_560;
    plVar13[0xc] = lStack_558;
    plVar13[0xd] = lStack_550;
    lStack_560 = 0;
    lStack_558 = 0;
    lStack_550 = 0;
    plVar13[0xe] = lStack_548;
    plVar13[0xf] = lStack_540;
    plVar13[0x10] = lStack_538;
    lStack_548 = 0;
    lStack_540 = 0;
    lStack_538 = 0;
    *(undefined4 *)(plVar13 + 0x11) = (undefined4)uStack_530;
    plVar13[0x12] = lStack_528;
    plVar13[0x13] = lStack_520;
    plVar13[0x14] = lStack_518;
    lStack_528 = 0;
    lStack_520 = 0;
    lStack_518 = 0;
    plVar13[0x17] = lStack_500;
    *(uint *)(plVar13 + 0x15) = (uint)uStack_510;
    *(undefined4 *)((long)plVar13 + 0xac) = uStack_510._4_4_;
    *(uint *)(plVar13 + 0x16) = (uint)uStack_508;
    *(undefined4 *)((long)plVar13 + 0xb4) = uStack_508._4_4_;
    uStack_510 = 0;
    uStack_508 = 0;
    lStack_500 = 0;
    *(ulong *)((long)plVar13 + 0xc5) = CONCAT17(uStack_4ec,CONCAT43(uStack_4f0,uStack_4f4._1_3_));
    plVar13[0x18] = CONCAT44(uStack_4f4,CONCAT22(uStack_4f6,uStack_4f8));
    uStack_498 = (long *)0x0;
    uStack_490 = (long *)0x0;
    uStack_610 = plVar13;
    func_0x048afd20(plVar17,auStack_620);
    plVar13 = uStack_610;
    if (uStack_610 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_610 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*uStack_610 + 0x10))(uStack_610);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = uStack_490;
    if (uStack_490 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_490 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*uStack_490 + 0x10))(uStack_490);
        func_0x0412c2d0(plVar13);
      }
    }
    lVar11 = plVar17[2];
    iVar10 = *(int *)((long)plVar17 + 0x1c);
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(lVar11 + 0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != *(int *)(plVar17 + 3)) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      for (; *(long *)(piVar16 + 0xc) != plVar17[1]; piVar16 = *(int **)(piVar16 + 0xe)) {
      }
LAB_0d8f1f3a:
      piVar16[4] = piVar16[4] | (int)puStack_5b8 << 0x10;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(lVar11 + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != *(int *)(plVar17 + 3)) {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f1f3a;
      }
      if (iVar10 == 0) {
        *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) | (int)puStack_5b8 << 0x10;
      }
    }
    func_0x048b0bc0(&uStack_5a0);
    lVar11 = func_0x06fd9530(lStack_4a0);
    if (*(int *)(lVar11 + 0x60) == -0x2b3da790) goto LAB_0d8f1f58;
LAB_0d8f1fb4:
    func_0x0d986b30(&uStack_458,param_1,&UNK_0121a962,0x1f);
    if ((char)uStack_428 == '\0') goto LAB_0d8f1fda;
LAB_0d8f1f95:
    lVar11 = func_0x0bc15e00(lStack_4a0);
    if (*(int *)(lVar11 + 0x60) == -0x2b3da790) goto LAB_0d8f2414;
LAB_0d8f243e:
    puVar19 = &UNK_014255b6;
    uVar21 = 0x1c;
  }
  else {
    func_0x0d985f40(&uStack_458,param_1,&UNK_014dcafd,0x23);
    if ((char)uStack_428 == '\0') goto LAB_0d8f1935;
LAB_0d8f18f0:
    lVar11 = func_0x06fd9530(lStack_4a0);
    if (*(int *)(lVar11 + 0x60) != -0x2b3da790) goto LAB_0d8f1fb4;
LAB_0d8f1f58:
    lVar11 = *(long *)(lVar11 + 0x68);
    if (lVar11 == 0) goto LAB_0d8f1fb4;
    bVar23 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar20 = lVar11 + 9;
    if (bVar23) {
      lVar20 = *(long *)(lVar11 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar23) {
      uVar21 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0d986b30(&uStack_458,param_1,lVar20,uVar21);
    if ((char)uStack_428 != '\0') goto LAB_0d8f1f95;
LAB_0d8f1fda:
    uStack_468 = uStack_428;
    uStack_478 = (undefined4)uStack_438;
    uStack_474 = uStack_438._4_4_;
    uStack_470 = uStack_430;
    uStack_488 = (undefined4)uStack_448;
    uStack_484 = uStack_448._4_4_;
    uStack_480 = uStack_440;
    uStack_47c = uStack_43c;
    uStack_498 = uStack_458;
    uStack_490 = uStack_450;
    func_0x0d987070(&puStack_5b8,uStack_458 + 3);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f208f:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f208f;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d9873e0(&puStack_5b8,&uStack_498,&UNK_013e2de6,0xc);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05daeda0;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_05daea90;
    puStack_5e0 = &UNK_0d987940;
    puStack_5d8 = &UNK_0d987aa0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d987640(&puStack_5b8);
    uStack_4b8 = CONCAT71(uStack_4b8._1_7_,(char)uStack_468);
    uStack_4c8 = CONCAT44(uStack_474,uStack_478);
    uStack_4c0 = uStack_470;
    uStack_4d8 = (long *)CONCAT44(uStack_484,uStack_488);
    uStack_4d0 = uStack_480;
    uStack_4cc = uStack_47c;
    uStack_4e8 = uStack_498;
    uStack_4e0 = uStack_490;
    func_0x048b0bc0(&uStack_5a0);
    func_0x0d987070(&puStack_5b8,uStack_4e8 + 3);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f22cf:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f22cf;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d9873e0(&puStack_5b8,&uStack_4e8,&UNK_013294e4,0x19);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ef8;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_04906f70;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_04906c50;
    puStack_5e0 = &UNK_0d987c80;
    puStack_5d8 = &UNK_0d987de0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d987640(&puStack_5b8);
    func_0x048b0bc0(&uStack_5a0);
    lVar11 = func_0x0bc15e00(lStack_4a0);
    if (*(int *)(lVar11 + 0x60) != -0x2b3da790) goto LAB_0d8f243e;
LAB_0d8f2414:
    lVar11 = *(long *)(lVar11 + 0x68);
    if (lVar11 == 0) goto LAB_0d8f243e;
    bVar23 = (*(byte *)(lVar11 + 8) & 1) != 0;
    puVar19 = (undefined *)(lVar11 + 9);
    if (bVar23) {
      puVar19 = *(undefined **)(lVar11 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar23) {
      uVar21 = *(ulong *)(lVar11 + 0x10);
    }
  }
  func_0x0d987fc0(&puStack_5b8,param_1,puVar19,uVar21);
  lVar11 = func_0x0bc13f60(lStack_4a0);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar23 = (*(byte *)(lVar11 + 8) & 1) != 0;
    puVar19 = (undefined *)(lVar11 + 9);
    if (bVar23) {
      puVar19 = *(undefined **)(lVar11 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar23) {
      uVar21 = *(ulong *)(lVar11 + 0x10);
    }
  }
  else {
    puVar19 = &UNK_0148d088;
    uVar21 = 0x24;
  }
  func_0x0d988830(&puStack_5b8,param_1,puVar19,uVar21);
  lVar11 = func_0x06fda330(lStack_4a0);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar23 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar20 = lVar11 + 9;
    if (bVar23) {
      lVar20 = *(long *)(lVar11 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar23) {
      uVar21 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0d992d20(&uStack_458,param_1,lVar20,uVar21);
    plVar17 = uStack_498;
    plVar13 = uStack_490;
    uVar4 = uStack_480;
    uVar5 = uStack_47c;
    uVar6 = uStack_470;
    uVar7 = uStack_468;
    uStack_498 = uStack_458;
    uStack_490 = uStack_450;
    uStack_480 = uStack_440;
    uStack_47c = uStack_43c;
    uStack_470 = uStack_430;
    uStack_468 = uStack_428;
  }
  else {
    func_0x0d992d20(&uStack_458,param_1,&UNK_01302e6f,0x1d);
    plVar17 = uStack_498;
    plVar13 = uStack_490;
    uVar4 = uStack_480;
    uVar5 = uStack_47c;
    uVar6 = uStack_470;
    uVar7 = uStack_468;
    uStack_498 = uStack_458;
    uStack_490 = uStack_450;
    uStack_480 = uStack_440;
    uStack_47c = uStack_43c;
    uStack_470 = uStack_430;
    uStack_468 = uStack_428;
  }
  bVar23 = (char)uStack_428 == '\0';
  uStack_458 = uStack_498;
  uStack_450 = uStack_490;
  uStack_440 = uStack_480;
  uStack_43c = uStack_47c;
  uStack_430 = uStack_470;
  uStack_428 = uStack_468;
  if (bVar23) {
    uStack_448._4_4_ = (undefined4)((ulong)uStack_448 >> 0x20);
    uStack_438._4_4_ = (undefined4)((ulong)uStack_438 >> 0x20);
    uStack_478 = (undefined4)uStack_438;
    uStack_474 = uStack_438._4_4_;
    uStack_488 = (undefined4)uStack_448;
    uStack_484 = uStack_448._4_4_;
    func_0x0d993260(&puStack_5b8,uStack_498 + 3);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f25ef:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f25ef;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d9935d0(&puStack_5b8,&uStack_498,&UNK_0130e035);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ce8;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_0490ce30;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_0490cb20;
    puStack_5e0 = &UNK_0d993a80;
    puStack_5d8 = &UNK_0d993be0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d993780(&puStack_5b8);
    uStack_4b8 = CONCAT71(uStack_4b8._1_7_,(char)uStack_468);
    uStack_4c8 = CONCAT44(uStack_474,uStack_478);
    uStack_4c0 = uStack_470;
    uStack_4d8 = (long *)CONCAT44(uStack_484,uStack_488);
    uStack_4d0 = uStack_480;
    uStack_4cc = uStack_47c;
    uStack_4e8 = uStack_498;
    uStack_4e0 = uStack_490;
    func_0x048b0bc0(&uStack_5a0);
    func_0x0d993260(&puStack_5b8,uStack_4e8 + 3);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f287f:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f287f;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d9935d0(&puStack_5b8,&uStack_4e8,&UNK_013fcdca);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ce8;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_0490ce30;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_0490cb20;
    puStack_5e0 = &UNK_0d993dc0;
    puStack_5d8 = &UNK_0d993f20;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d993780(&puStack_5b8);
    func_0x048b0bc0(&uStack_5a0);
    plVar17 = uStack_498;
    plVar13 = uStack_490;
    uVar4 = uStack_480;
    uVar5 = uStack_47c;
    uVar6 = uStack_470;
    uVar7 = uStack_468;
  }
  uStack_468 = uVar7;
  uStack_470 = uVar6;
  uStack_47c = uVar5;
  uStack_480 = uVar4;
  uStack_490 = plVar13;
  uStack_498 = plVar17;
  func_0x0eb7a560(param_1);
  lVar11 = func_0x06fdb970(lStack_4a0);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar23 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar20 = lVar11 + 9;
    if (bVar23) {
      lVar20 = *(long *)(lVar11 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar23) {
      uVar21 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0d994100(&uStack_458,param_1,lVar20,uVar21);
    if ((char)uStack_428 != '\0') goto LAB_0d8f29ef;
LAB_0d8f2a34:
    uStack_4b8 = uStack_428;
    uStack_4c8 = uStack_438;
    uStack_4d8 = uStack_448;
    uStack_4d0 = uStack_440;
    uStack_4cc = uStack_43c;
    uStack_4e8 = uStack_458;
    uStack_4e0 = uStack_450;
    func_0x0d994640(&puStack_5b8,uStack_458 + 3);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f2aef:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f2aef;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    if ((DAT_0f5a54f8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5a54f8), iVar10 != 0)) {
      func_0x06fdb170(0xf5a54e0);
      func_0x0410844d(&DAT_0f5a54f8);
    }
    uStack_4c0 = 0xff08346500000001;
    plVar17 = uStack_4e8 + 3;
    puStack_5b8 = (undefined8 *)func_0x06fdb970(plVar17);
    plStack_5b0 = plVar17;
    func_0x0ed621a0(&puStack_5b8,uStack_4c0._4_4_);
    plStack_5b0 = &uStack_4e0;
    puStack_5b8 = (undefined8 *)CONCAT62(puStack_5b8._2_6_,0x10);
    uStack_5a8 = uStack_4c0._4_4_;
    uStack_5a0 = 0;
    uStack_59f = 0;
    uStack_59e = 0;
    uStack_59d = 0;
    uStack_59c = 0;
    uStack_59b = 0;
    uStack_59a = 0;
    uStack_599 = 0;
    uStack_598 = 0;
    uStack_597 = 0;
    uStack_596 = 0;
    uStack_595 = 0;
    uStack_593 = 0;
    uStack_592 = 0;
    bStack_590 = 0;
    uStack_58f = 0;
    uStack_58b = 0;
    uStack_58a = 0;
    uStack_589 = 0;
    uStack_588 = 0;
    uStack_587 = 0;
    uStack_586 = 0;
    uStack_585 = 0;
    uStack_584 = 0;
    uStack_583 = 0;
    uStack_582 = 0;
    uStack_581 = 0;
    uStack_580 = 0;
    uStack_57f = 0;
    uStack_57e = 0;
    uStack_57d = 0;
    uStack_57b = 0;
    uStack_57a = 0;
    uStack_578 = 0x6666650e;
    uStack_574 = 0x65;
    uStack_573 = 0x7463;
    uStack_571 = 0x73;
    uStack_570 = 0;
    lStack_560 = 0;
    lStack_558 = 0;
    lStack_550 = 0;
    lStack_548 = 0;
    lStack_540 = 0;
    lStack_538 = 0;
    uStack_530 = CONCAT44(uStack_530._4_4_,0x3f600000);
    func_0x048afb10(&lStack_560,8);
    uStack_508 = 0;
    lStack_500 = 0;
    lStack_518 = 0;
    uStack_510 = 0;
    lStack_528 = 0;
    lStack_520 = 0;
    uStack_4f8 = 0xff00;
    uStack_4f4 = uStack_4f4 & 0xffffff00;
    uStack_4f0 = uStack_4f0 & 0xffffff00;
    uStack_4ec = 0;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f48c228;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_0d998420;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_0d997010;
    puStack_5e0 = &UNK_0d9984e0;
    puStack_5d8 = &UNK_0d9986e0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    plVar17 = plStack_5b0;
    if ((DAT_0f550a20 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550a20), iVar10 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_620[0] = _DAT_0f550a0c;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = (long)&UNK_0ef439d0;
    plStack_618 = plVar13 + 3;
    lVar11 = CONCAT17(uStack_599,
                      CONCAT16(uStack_59a,
                               CONCAT15(uStack_59b,
                                        CONCAT14(uStack_59c,
                                                 CONCAT13(uStack_59d,
                                                          CONCAT12(uStack_59e,
                                                                   CONCAT11(uStack_59f,uStack_5a0)))
                                                ))));
    lVar20 = CONCAT26(uStack_592,
                      CONCAT15(uStack_593,
                               CONCAT23(uStack_595,
                                        CONCAT12(uStack_596,CONCAT11(uStack_597,uStack_598)))));
    uStack_5a0 = 0;
    uStack_59f = 0;
    uStack_59e = 0;
    uStack_59d = 0;
    uStack_59c = 0;
    uStack_59b = 0;
    uStack_59a = 0;
    uStack_599 = 0;
    uStack_598 = 0;
    uStack_597 = 0;
    uStack_596 = 0;
    uStack_595 = 0;
    uStack_593 = 0;
    uStack_592 = 0;
    plVar13[3] = lVar11;
    plVar13[4] = lVar20;
    plVar13[7] = CONCAT26(uStack_57a,
                          CONCAT15(uStack_57b,
                                   CONCAT23(uStack_57d,
                                            CONCAT12(uStack_57e,CONCAT11(uStack_57f,uStack_580)))));
    plVar13[5] = CONCAT17(uStack_589,
                          CONCAT16(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590))))
    ;
    plVar13[6] = CONCAT17(uStack_581,
                          CONCAT16(uStack_582,
                                   CONCAT15(uStack_583,
                                            CONCAT14(uStack_584,
                                                     CONCAT13(uStack_585,
                                                              CONCAT12(uStack_586,
                                                                       CONCAT11(uStack_587,
                                                                                uStack_588)))))));
    bStack_590 = 0;
    uStack_58f = 0;
    uStack_58b = 0;
    uStack_58a = 0;
    uStack_589 = 0;
    uStack_588 = 0;
    uStack_587 = 0;
    uStack_586 = 0;
    uStack_585 = 0;
    uStack_584 = 0;
    uStack_583 = 0;
    uStack_582 = 0;
    uStack_581 = 0;
    uStack_580 = 0;
    uStack_57f = 0;
    uStack_57e = 0;
    uStack_57d = 0;
    uStack_57b = 0;
    uStack_57a = 0;
    plVar13[10] = (long)puStack_568;
    plVar13[8] = CONCAT17(uStack_571,CONCAT25(uStack_573,CONCAT14(uStack_574,uStack_578)));
    plVar13[9] = CONCAT44(uStack_56c,CONCAT13(uStack_56d,CONCAT21(uStack_56f,uStack_570)));
    uStack_578 = 0;
    uStack_574 = 0;
    uStack_573 = 0;
    uStack_571 = 0;
    uStack_570 = 0;
    uStack_56f = 0;
    uStack_56d = 0;
    uStack_56c = 0;
    puStack_568 = (undefined8 *)0x0;
    plVar13[0xb] = lStack_560;
    plVar13[0xc] = lStack_558;
    plVar13[0xd] = lStack_550;
    lStack_560 = 0;
    lStack_558 = 0;
    lStack_550 = 0;
    plVar13[0xe] = lStack_548;
    plVar13[0xf] = lStack_540;
    plVar13[0x10] = lStack_538;
    lStack_548 = 0;
    lStack_540 = 0;
    lStack_538 = 0;
    *(undefined4 *)(plVar13 + 0x11) = (undefined4)uStack_530;
    plVar13[0x12] = lStack_528;
    plVar13[0x13] = lStack_520;
    plVar13[0x14] = lStack_518;
    lStack_528 = 0;
    lStack_520 = 0;
    lStack_518 = 0;
    plVar13[0x17] = lStack_500;
    *(uint *)(plVar13 + 0x15) = (uint)uStack_510;
    *(undefined4 *)((long)plVar13 + 0xac) = uStack_510._4_4_;
    *(uint *)(plVar13 + 0x16) = (uint)uStack_508;
    *(undefined4 *)((long)plVar13 + 0xb4) = uStack_508._4_4_;
    uStack_510 = 0;
    uStack_508 = 0;
    lStack_500 = 0;
    *(ulong *)((long)plVar13 + 0xc5) = CONCAT17(uStack_4ec,CONCAT43(uStack_4f0,uStack_4f4._1_3_));
    plVar13[0x18] = CONCAT44(uStack_4f4,CONCAT22(uStack_4f6,uStack_4f8));
    uStack_498 = (long *)0x0;
    uStack_490 = (long *)0x0;
    uStack_610 = plVar13;
    func_0x048afd20(plVar17,auStack_620);
    plVar13 = uStack_610;
    if (uStack_610 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_610 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*uStack_610 + 0x10))(uStack_610);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = uStack_490;
    if (uStack_490 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_490 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*uStack_490 + 0x10))(uStack_490);
        func_0x0412c2d0(plVar13);
      }
    }
    lVar11 = plVar17[2];
    iVar10 = *(int *)((long)plVar17 + 0x1c);
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(lVar11 + 0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != *(int *)(plVar17 + 3)) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      for (; *(long *)(piVar16 + 0xc) != plVar17[1]; piVar16 = *(int **)(piVar16 + 0xe)) {
      }
LAB_0d8f308a:
      piVar16[4] = piVar16[4] | (int)puStack_5b8 << 0x10;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(lVar11 + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != *(int *)(plVar17 + 3)) {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f308a;
      }
      if (iVar10 == 0) {
        *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) | (int)puStack_5b8 << 0x10;
      }
    }
    func_0x048b0bc0(&uStack_5a0);
    lVar11 = func_0x06fe3370(lStack_4a0);
    if (*(int *)(lVar11 + 0x60) == -0x2b3da790) goto LAB_0d8f30a8;
LAB_0d8f3104:
    func_0x0d999750(&uStack_458,param_1,&UNK_0140bbbe,0x21);
    if ((char)uStack_428 == '\0') goto LAB_0d8f312a;
LAB_0d8f30e5:
    lVar11 = func_0x06fdc7b0(lStack_4a0);
    if (*(int *)(lVar11 + 0x60) == -0x2b3da790) goto LAB_0d8f3788;
LAB_0d8f37e4:
    func_0x0d998b60(&uStack_458,param_1,&UNK_0129d60c,0x28);
    if ((char)uStack_428 != '\0') goto LAB_0d8f37c5;
LAB_0d8f380a:
    uStack_4b8 = uStack_428;
    uStack_4c8 = uStack_438;
    uStack_4d8 = uStack_448;
    uStack_4d0 = uStack_440;
    uStack_4cc = uStack_43c;
    uStack_4e8 = uStack_458;
    uStack_4e0 = uStack_450;
    func_0x0d9990a0(&puStack_5b8,uStack_458 + 3);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f38bf:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f38bf;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    if ((DAT_0f5a55b0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5a55b0), iVar10 != 0)) {
      func_0x06fdc740(0xf5a5598);
      func_0x0410844d(&DAT_0f5a55b0);
    }
    uStack_4c0 = 0x6e6e8d5400000001;
    plVar17 = uStack_4e8 + 3;
    puStack_5b8 = (undefined8 *)func_0x06fdc7b0(plVar17);
    plStack_5b0 = plVar17;
    func_0x0ed621a0(&puStack_5b8,uStack_4c0._4_4_);
    plStack_5b0 = &uStack_4e0;
    puStack_5b8 = (undefined8 *)CONCAT62(puStack_5b8._2_6_,0x10);
    uStack_5a8 = uStack_4c0._4_4_;
    uStack_5a0 = 0;
    uStack_59f = 0;
    uStack_59e = 0;
    uStack_59d = 0;
    uStack_59c = 0;
    uStack_59b = 0;
    uStack_59a = 0;
    uStack_599 = 0;
    uStack_598 = 0;
    uStack_597 = 0;
    uStack_596 = 0;
    uStack_595 = 0;
    uStack_593 = 0;
    uStack_592 = 0;
    bStack_590 = 0;
    uStack_58f = 0;
    uStack_58b = 0;
    uStack_58a = 0;
    uStack_589 = 0;
    uStack_588 = 0;
    uStack_587 = 0;
    uStack_586 = 0;
    uStack_585 = 0;
    uStack_584 = 0;
    uStack_583 = 0;
    uStack_582 = 0;
    uStack_581 = 0;
    uStack_580 = 0;
    uStack_57f = 0;
    uStack_57e = 0;
    uStack_57d = 0;
    uStack_57b = 0;
    uStack_57a = 0;
    uStack_578 = 0x6666650c;
    uStack_574 = 0x65;
    uStack_573 = 0x7463;
    uStack_571 = 0;
    lStack_560 = 0;
    lStack_558 = 0;
    lStack_550 = 0;
    lStack_548 = 0;
    lStack_540 = 0;
    lStack_538 = 0;
    uStack_530 = CONCAT44(uStack_530._4_4_,0x3f600000);
    func_0x048afb10(&lStack_560,8);
    uStack_508 = 0;
    lStack_500 = 0;
    lStack_518 = 0;
    uStack_510 = 0;
    lStack_528 = 0;
    lStack_520 = 0;
    uStack_4f8 = 0xff00;
    uStack_4f4 = uStack_4f4 & 0xffffff00;
    uStack_4f0 = uStack_4f0 & 0xffffff00;
    uStack_4ec = 0;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ce8;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_0490ce30;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_0490cb20;
    puStack_5e0 = &UNK_0d999410;
    puStack_5d8 = &UNK_0d999570;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    plVar17 = plStack_5b0;
    if ((DAT_0f550a20 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550a20), iVar10 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_620[0] = _DAT_0f550a0c;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = (long)&UNK_0ef439d0;
    plStack_618 = plVar13 + 3;
    lVar11 = CONCAT17(uStack_599,
                      CONCAT16(uStack_59a,
                               CONCAT15(uStack_59b,
                                        CONCAT14(uStack_59c,
                                                 CONCAT13(uStack_59d,
                                                          CONCAT12(uStack_59e,
                                                                   CONCAT11(uStack_59f,uStack_5a0)))
                                                ))));
    lVar20 = CONCAT26(uStack_592,
                      CONCAT15(uStack_593,
                               CONCAT23(uStack_595,
                                        CONCAT12(uStack_596,CONCAT11(uStack_597,uStack_598)))));
    uStack_5a0 = 0;
    uStack_59f = 0;
    uStack_59e = 0;
    uStack_59d = 0;
    uStack_59c = 0;
    uStack_59b = 0;
    uStack_59a = 0;
    uStack_599 = 0;
    uStack_598 = 0;
    uStack_597 = 0;
    uStack_596 = 0;
    uStack_595 = 0;
    uStack_593 = 0;
    uStack_592 = 0;
    plVar13[3] = lVar11;
    plVar13[4] = lVar20;
    plVar13[7] = CONCAT26(uStack_57a,
                          CONCAT15(uStack_57b,
                                   CONCAT23(uStack_57d,
                                            CONCAT12(uStack_57e,CONCAT11(uStack_57f,uStack_580)))));
    plVar13[5] = CONCAT17(uStack_589,
                          CONCAT16(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590))))
    ;
    plVar13[6] = CONCAT17(uStack_581,
                          CONCAT16(uStack_582,
                                   CONCAT15(uStack_583,
                                            CONCAT14(uStack_584,
                                                     CONCAT13(uStack_585,
                                                              CONCAT12(uStack_586,
                                                                       CONCAT11(uStack_587,
                                                                                uStack_588)))))));
    bStack_590 = 0;
    uStack_58f = 0;
    uStack_58b = 0;
    uStack_58a = 0;
    uStack_589 = 0;
    uStack_588 = 0;
    uStack_587 = 0;
    uStack_586 = 0;
    uStack_585 = 0;
    uStack_584 = 0;
    uStack_583 = 0;
    uStack_582 = 0;
    uStack_581 = 0;
    uStack_580 = 0;
    uStack_57f = 0;
    uStack_57e = 0;
    uStack_57d = 0;
    uStack_57b = 0;
    uStack_57a = 0;
    plVar13[10] = (long)puStack_568;
    plVar13[8] = CONCAT17(uStack_571,CONCAT25(uStack_573,CONCAT14(uStack_574,uStack_578)));
    plVar13[9] = CONCAT44(uStack_56c,CONCAT13(uStack_56d,CONCAT21(uStack_56f,uStack_570)));
    uStack_578 = 0;
    uStack_574 = 0;
    uStack_573 = 0;
    uStack_571 = 0;
    uStack_570 = 0;
    uStack_56f = 0;
    uStack_56d = 0;
    uStack_56c = 0;
    puStack_568 = (undefined8 *)0x0;
    plVar13[0xb] = lStack_560;
    plVar13[0xc] = lStack_558;
    plVar13[0xd] = lStack_550;
    lStack_560 = 0;
    lStack_558 = 0;
    lStack_550 = 0;
    plVar13[0xe] = lStack_548;
    plVar13[0xf] = lStack_540;
    plVar13[0x10] = lStack_538;
    lStack_548 = 0;
    lStack_540 = 0;
    lStack_538 = 0;
    *(undefined4 *)(plVar13 + 0x11) = (undefined4)uStack_530;
    plVar13[0x12] = lStack_528;
    plVar13[0x13] = lStack_520;
    plVar13[0x14] = lStack_518;
    lStack_528 = 0;
    lStack_520 = 0;
    lStack_518 = 0;
    plVar13[0x17] = lStack_500;
    *(uint *)(plVar13 + 0x15) = (uint)uStack_510;
    *(undefined4 *)((long)plVar13 + 0xac) = uStack_510._4_4_;
    *(uint *)(plVar13 + 0x16) = (uint)uStack_508;
    *(undefined4 *)((long)plVar13 + 0xb4) = uStack_508._4_4_;
    uStack_510 = 0;
    uStack_508 = 0;
    lStack_500 = 0;
    *(ulong *)((long)plVar13 + 0xc5) = CONCAT17(uStack_4ec,CONCAT43(uStack_4f0,uStack_4f4._1_3_));
    plVar13[0x18] = CONCAT44(uStack_4f4,CONCAT22(uStack_4f6,uStack_4f8));
    uStack_498 = (long *)0x0;
    uStack_490 = (long *)0x0;
    uStack_610 = plVar13;
    func_0x048afd20(plVar17,auStack_620);
    plVar13 = uStack_610;
    if (uStack_610 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_610 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*uStack_610 + 0x10))(uStack_610);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = uStack_490;
    if (uStack_490 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_490 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*uStack_490 + 0x10))(uStack_490);
        func_0x0412c2d0(plVar13);
      }
    }
    lVar11 = plVar17[2];
    iVar10 = *(int *)((long)plVar17 + 0x1c);
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(lVar11 + 0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != *(int *)(plVar17 + 3)) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      for (; *(long *)(piVar16 + 0xc) != plVar17[1]; piVar16 = *(int **)(piVar16 + 0xe)) {
      }
LAB_0d8f3e0a:
      piVar16[4] = piVar16[4] | (int)puStack_5b8 << 0x10;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(lVar11 + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != *(int *)(plVar17 + 3)) {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f3e0a;
      }
      if (iVar10 == 0) {
        *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) | (int)puStack_5b8 << 0x10;
      }
    }
    func_0x048b0bc0(&uStack_5a0);
    lVar11 = func_0x06fdd560(lStack_4a0);
    if (*(int *)(lVar11 + 0x60) == -0x2b3da790) goto LAB_0d8f3e28;
LAB_0d8f3e84:
    func_0x0d99a340(&uStack_458,param_1,&UNK_0131e314,0x23);
    if ((char)uStack_428 == '\0') goto LAB_0d8f3eaa;
LAB_0d8f3e65:
    lVar11 = func_0x0bc16ce0(lStack_4a0);
    if (*(int *)(lVar11 + 0x60) == -0x2b3da790) goto LAB_0d8f4f44;
LAB_0d8f4f6e:
    puVar19 = &UNK_0140bbe0;
    uVar21 = 0x20;
  }
  else {
    func_0x0d994100(&uStack_458,param_1,&UNK_0131e2f4,0x1f);
    if ((char)uStack_428 == '\0') goto LAB_0d8f2a34;
LAB_0d8f29ef:
    lVar11 = func_0x06fe3370(lStack_4a0);
    if (*(int *)(lVar11 + 0x60) != -0x2b3da790) goto LAB_0d8f3104;
LAB_0d8f30a8:
    lVar11 = *(long *)(lVar11 + 0x68);
    if (lVar11 == 0) goto LAB_0d8f3104;
    bVar23 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar20 = lVar11 + 9;
    if (bVar23) {
      lVar20 = *(long *)(lVar11 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar23) {
      uVar21 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0d999750(&uStack_458,param_1,lVar20,uVar21);
    if ((char)uStack_428 != '\0') goto LAB_0d8f30e5;
LAB_0d8f312a:
    uStack_4b8 = uStack_428;
    uStack_4c8 = uStack_438;
    uStack_4d8 = uStack_448;
    uStack_4d0 = uStack_440;
    uStack_4cc = uStack_43c;
    uStack_4e8 = uStack_458;
    uStack_4e0 = uStack_450;
    func_0x0d999c90(&puStack_5b8,uStack_458 + 3);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f31df:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f31df;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    if ((DAT_0f5a5a00 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5a5a00), iVar10 != 0)) {
      func_0x06fe3300(0xf5a59e8);
      func_0x0410844d(&DAT_0f5a5a00);
    }
    uStack_4c0 = 0x6cc0e41a00000001;
    plVar17 = uStack_4e8 + 3;
    puStack_5b8 = (undefined8 *)func_0x06fe3370(plVar17);
    plStack_5b0 = plVar17;
    func_0x0ed621a0(&puStack_5b8,uStack_4c0._4_4_);
    plStack_5b0 = &uStack_4e0;
    puStack_5b8 = (undefined8 *)CONCAT62(puStack_5b8._2_6_,0x10);
    uStack_5a8 = uStack_4c0._4_4_;
    uStack_5a0 = 0;
    uStack_59f = 0;
    uStack_59e = 0;
    uStack_59d = 0;
    uStack_59c = 0;
    uStack_59b = 0;
    uStack_59a = 0;
    uStack_599 = 0;
    uStack_598 = 0;
    uStack_597 = 0;
    uStack_596 = 0;
    uStack_595 = 0;
    uStack_593 = 0;
    uStack_592 = 0;
    bStack_590 = 0;
    uStack_58f = 0;
    uStack_58b = 0;
    uStack_58a = 0;
    uStack_589 = 0;
    uStack_588 = 0;
    uStack_587 = 0;
    uStack_586 = 0;
    uStack_585 = 0;
    uStack_584 = 0;
    uStack_583 = 0;
    uStack_582 = 0;
    uStack_581 = 0;
    uStack_580 = 0;
    uStack_57f = 0;
    uStack_57e = 0;
    uStack_57d = 0;
    uStack_57b = 0;
    uStack_57a = 0;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar6 = _UNK_013e2e1a;
    uStack_578 = 0x29;
    uStack_574 = 0;
    uStack_573 = 0;
    uStack_571 = 0;
    uStack_570 = 0x20;
    uStack_56f = 0;
    uStack_56d = 0;
    uStack_56c = 0;
    puVar12[2] = _DAT_013e2e12;
    puVar12[3] = uVar6;
    uVar6 = _UNK_013e2e0a;
    *puVar12 = _DAT_013e2e02;
    puVar12[1] = uVar6;
    *(undefined1 *)(puVar12 + 4) = 0;
    lStack_540 = 0;
    lStack_538 = 0;
    lStack_550 = 0;
    lStack_548 = 0;
    lStack_560 = 0;
    lStack_558 = 0;
    uStack_530 = CONCAT44(uStack_530._4_4_,0x3f600000);
    puStack_568 = puVar12;
    func_0x048afb10(&lStack_560,8);
    uStack_508 = 0;
    lStack_500 = 0;
    lStack_518 = 0;
    uStack_510 = 0;
    lStack_528 = 0;
    lStack_520 = 0;
    uStack_4f8 = 0xff00;
    uStack_4f4 = uStack_4f4 & 0xffffff00;
    uStack_4f0 = uStack_4f0 & 0xffffff00;
    uStack_4ec = 0;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ef8;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_04906f70;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_04906c50;
    puStack_5e0 = &UNK_0d99a000;
    puStack_5d8 = &UNK_0d99a160;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    plVar17 = plStack_5b0;
    if ((DAT_0f550a20 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550a20), iVar10 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_620[0] = _DAT_0f550a0c;
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = (long)&UNK_0ef439d0;
    plStack_618 = plVar13 + 3;
    lVar11 = CONCAT17(uStack_599,
                      CONCAT16(uStack_59a,
                               CONCAT15(uStack_59b,
                                        CONCAT14(uStack_59c,
                                                 CONCAT13(uStack_59d,
                                                          CONCAT12(uStack_59e,
                                                                   CONCAT11(uStack_59f,uStack_5a0)))
                                                ))));
    lVar20 = CONCAT26(uStack_592,
                      CONCAT15(uStack_593,
                               CONCAT23(uStack_595,
                                        CONCAT12(uStack_596,CONCAT11(uStack_597,uStack_598)))));
    uStack_5a0 = 0;
    uStack_59f = 0;
    uStack_59e = 0;
    uStack_59d = 0;
    uStack_59c = 0;
    uStack_59b = 0;
    uStack_59a = 0;
    uStack_599 = 0;
    uStack_598 = 0;
    uStack_597 = 0;
    uStack_596 = 0;
    uStack_595 = 0;
    uStack_593 = 0;
    uStack_592 = 0;
    plVar13[3] = lVar11;
    plVar13[4] = lVar20;
    plVar13[7] = CONCAT26(uStack_57a,
                          CONCAT15(uStack_57b,
                                   CONCAT23(uStack_57d,
                                            CONCAT12(uStack_57e,CONCAT11(uStack_57f,uStack_580)))));
    plVar13[5] = CONCAT17(uStack_589,
                          CONCAT16(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590))))
    ;
    plVar13[6] = CONCAT17(uStack_581,
                          CONCAT16(uStack_582,
                                   CONCAT15(uStack_583,
                                            CONCAT14(uStack_584,
                                                     CONCAT13(uStack_585,
                                                              CONCAT12(uStack_586,
                                                                       CONCAT11(uStack_587,
                                                                                uStack_588)))))));
    bStack_590 = 0;
    uStack_58f = 0;
    uStack_58b = 0;
    uStack_58a = 0;
    uStack_589 = 0;
    uStack_588 = 0;
    uStack_587 = 0;
    uStack_586 = 0;
    uStack_585 = 0;
    uStack_584 = 0;
    uStack_583 = 0;
    uStack_582 = 0;
    uStack_581 = 0;
    uStack_580 = 0;
    uStack_57f = 0;
    uStack_57e = 0;
    uStack_57d = 0;
    uStack_57b = 0;
    uStack_57a = 0;
    plVar13[10] = (long)puStack_568;
    plVar13[8] = CONCAT17(uStack_571,CONCAT25(uStack_573,CONCAT14(uStack_574,uStack_578)));
    plVar13[9] = CONCAT44(uStack_56c,CONCAT13(uStack_56d,CONCAT21(uStack_56f,uStack_570)));
    uStack_578 = 0;
    uStack_574 = 0;
    uStack_573 = 0;
    uStack_571 = 0;
    uStack_570 = 0;
    uStack_56f = 0;
    uStack_56d = 0;
    uStack_56c = 0;
    puStack_568 = (undefined8 *)0x0;
    plVar13[0xb] = lStack_560;
    plVar13[0xc] = lStack_558;
    plVar13[0xd] = lStack_550;
    lStack_560 = 0;
    lStack_558 = 0;
    lStack_550 = 0;
    plVar13[0xe] = lStack_548;
    plVar13[0xf] = lStack_540;
    plVar13[0x10] = lStack_538;
    lStack_548 = 0;
    lStack_540 = 0;
    lStack_538 = 0;
    *(undefined4 *)(plVar13 + 0x11) = (undefined4)uStack_530;
    plVar13[0x12] = lStack_528;
    plVar13[0x13] = lStack_520;
    plVar13[0x14] = lStack_518;
    lStack_528 = 0;
    lStack_520 = 0;
    lStack_518 = 0;
    plVar13[0x17] = lStack_500;
    *(uint *)(plVar13 + 0x15) = (uint)uStack_510;
    *(undefined4 *)((long)plVar13 + 0xac) = uStack_510._4_4_;
    *(uint *)(plVar13 + 0x16) = (uint)uStack_508;
    *(undefined4 *)((long)plVar13 + 0xb4) = uStack_508._4_4_;
    uStack_510 = 0;
    uStack_508 = 0;
    lStack_500 = 0;
    *(ulong *)((long)plVar13 + 0xc5) = CONCAT17(uStack_4ec,CONCAT43(uStack_4f0,uStack_4f4._1_3_));
    plVar13[0x18] = CONCAT44(uStack_4f4,CONCAT22(uStack_4f6,uStack_4f8));
    uStack_498 = (long *)0x0;
    uStack_490 = (long *)0x0;
    uStack_610 = plVar13;
    func_0x048afd20(plVar17,auStack_620);
    plVar13 = uStack_610;
    if (uStack_610 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_610 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*uStack_610 + 0x10))(uStack_610);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = uStack_490;
    if (uStack_490 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_490 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*uStack_490 + 0x10))(uStack_490);
        func_0x0412c2d0(plVar13);
      }
    }
    lVar11 = plVar17[2];
    iVar10 = *(int *)((long)plVar17 + 0x1c);
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(lVar11 + 0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != *(int *)(plVar17 + 3)) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      for (; *(long *)(piVar16 + 0xc) != plVar17[1]; piVar16 = *(int **)(piVar16 + 0xe)) {
      }
LAB_0d8f376a:
      piVar16[4] = piVar16[4] | (int)puStack_5b8 << 0x10;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(lVar11 + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != *(int *)(plVar17 + 3)) {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f376a;
      }
      if (iVar10 == 0) {
        *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) | (int)puStack_5b8 << 0x10;
      }
    }
    func_0x048b0bc0(&uStack_5a0);
    lVar11 = func_0x06fdc7b0(lStack_4a0);
    if (*(int *)(lVar11 + 0x60) != -0x2b3da790) goto LAB_0d8f37e4;
LAB_0d8f3788:
    lVar11 = *(long *)(lVar11 + 0x68);
    if (lVar11 == 0) goto LAB_0d8f37e4;
    bVar23 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar20 = lVar11 + 9;
    if (bVar23) {
      lVar20 = *(long *)(lVar11 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar23) {
      uVar21 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0d998b60(&uStack_458,param_1,lVar20,uVar21);
    if ((char)uStack_428 == '\0') goto LAB_0d8f380a;
LAB_0d8f37c5:
    lVar11 = func_0x06fdd560(lStack_4a0);
    if (*(int *)(lVar11 + 0x60) != -0x2b3da790) goto LAB_0d8f3e84;
LAB_0d8f3e28:
    lVar11 = *(long *)(lVar11 + 0x68);
    if (lVar11 == 0) goto LAB_0d8f3e84;
    bVar23 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar20 = lVar11 + 9;
    if (bVar23) {
      lVar20 = *(long *)(lVar11 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar23) {
      uVar21 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0d99a340(&uStack_458,param_1,lVar20,uVar21);
    if ((char)uStack_428 != '\0') goto LAB_0d8f3e65;
LAB_0d8f3eaa:
    uStack_1e8 = uStack_428;
    uStack_1f8 = (undefined4)uStack_438;
    uStack_1f4 = uStack_438._4_4_;
    uStack_1f0 = uStack_430;
    uStack_208 = (undefined4)uStack_448;
    uStack_204 = uStack_448._4_4_;
    uStack_200 = uStack_440;
    uStack_1fc = uStack_43c;
    uStack_218 = (undefined4)uStack_458;
    uStack_214 = uStack_458._4_4_;
    uStack_210 = (undefined4)uStack_450;
    uStack_20c = uStack_450._4_4_;
    func_0x0d99a880(&puStack_5b8,uStack_458 + 3);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f3f5f:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f3f5f;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d99ac60(&puStack_5b8,&uStack_218,&UNK_013fcdd7,6);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ce8;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_0490ce30;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_0490cb20;
    puStack_5e0 = &UNK_0d99b150;
    puStack_5d8 = &UNK_0d99b2b0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d99ae50(&puStack_5b8);
    uStack_1a8 = (undefined1)uStack_1e8;
    uStack_1b8 = uStack_1f8;
    uStack_1b4 = uStack_1f4;
    uStack_1b0 = uStack_1f0;
    uStack_1c8 = uStack_208;
    uStack_1c4 = uStack_204;
    uStack_1c0 = uStack_200;
    uStack_1bc = uStack_1fc;
    uStack_1d8 = uStack_218;
    uStack_1d4 = uStack_214;
    uStack_1d0 = uStack_210;
    uStack_1cc = uStack_20c;
    func_0x048b0bc0(&uStack_5a0);
    uStack_2d8 = uStack_1d8;
    uStack_2d4 = uStack_1d4;
    uStack_2d0 = uStack_1d0;
    uStack_2cc = uStack_1cc;
    uStack_2c8 = uStack_1c8;
    uStack_2c4 = uStack_1c4;
    uStack_2c0 = uStack_1c0;
    uStack_2bc = uStack_1bc;
    uStack_2b8 = uStack_1b8;
    uStack_2b4 = uStack_1b4;
    uStack_2b0 = uStack_1b0;
    uStack_2a8 = CONCAT71(uStack_1a7,uStack_1a8);
    func_0x0d99a880(&puStack_5b8,CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f41df:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f41df;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d99ac60(&puStack_5b8,&uStack_2d8,&UNK_0123ca53,6);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05daeda0;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_05daea90;
    puStack_5e0 = &UNK_0d99b490;
    puStack_5d8 = &UNK_0d99b5f0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d99ae50(&puStack_5b8);
    uStack_228 = (undefined1)uStack_2a8;
    uStack_238 = uStack_2b8;
    uStack_234 = uStack_2b4;
    uStack_230 = uStack_2b0;
    uStack_248 = uStack_2c8;
    uStack_244 = uStack_2c4;
    uStack_240 = uStack_2c0;
    uStack_23c = uStack_2bc;
    uStack_258 = uStack_2d8;
    uStack_254 = uStack_2d4;
    uStack_250 = uStack_2d0;
    uStack_24c = uStack_2cc;
    func_0x048b0bc0(&uStack_5a0);
    uStack_298 = uStack_258;
    uStack_294 = uStack_254;
    uStack_290 = uStack_250;
    uStack_28c = uStack_24c;
    uStack_288 = uStack_248;
    uStack_284 = uStack_244;
    uStack_280 = uStack_240;
    uStack_27c = uStack_23c;
    uStack_278 = uStack_238;
    uStack_274 = uStack_234;
    uStack_270 = uStack_230;
    uStack_268 = CONCAT71(uStack_227,uStack_228);
    func_0x0d99a880(&puStack_5b8,CONCAT44(uStack_254,uStack_258) + 0x18);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f445f:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f445f;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d99ac60(&puStack_5b8,&uStack_298,&UNK_0144b2fb,0xd);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05daeda0;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_05daea90;
    puStack_5e0 = &UNK_0d99b7d0;
    puStack_5d8 = &UNK_0d99b930;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d99ae50(&puStack_5b8);
    uStack_328 = CONCAT71(uStack_328._1_7_,(undefined1)uStack_268);
    uStack_338 = uStack_278;
    uStack_334 = uStack_274;
    uStack_330 = uStack_270;
    uStack_348 = uStack_288;
    uStack_344 = uStack_284;
    uStack_340 = uStack_280;
    uStack_33c = uStack_27c;
    uStack_358 = uStack_298;
    uStack_354 = uStack_294;
    uStack_350 = uStack_290;
    uStack_34c = uStack_28c;
    func_0x048b0bc0(&uStack_5a0);
    uStack_398 = uStack_358;
    uStack_394 = uStack_354;
    uStack_390 = uStack_350;
    uStack_38c = uStack_34c;
    uStack_388 = uStack_348;
    uStack_384 = uStack_344;
    uStack_380 = uStack_340;
    uStack_37c = uStack_33c;
    uStack_378 = uStack_338;
    uStack_374 = uStack_334;
    uStack_370 = uStack_330;
    uStack_368 = uStack_328;
    func_0x0d99a880(&puStack_5b8,CONCAT44(uStack_354,uStack_358) + 0x18);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f46bf:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f46bf;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d99ac60(&puStack_5b8,&uStack_398,&UNK_01222e20,8);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f48fd28;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_0d99c140;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_0d99be50;
    puStack_5e0 = &UNK_0d99c150;
    puStack_5d8 = &UNK_0d99c2b0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d99ae50(&puStack_5b8);
    uStack_2e8 = CONCAT71(uStack_2e8._1_7_,(undefined1)uStack_368);
    uStack_2f8 = uStack_378;
    uStack_2f4 = uStack_374;
    uStack_2f0 = uStack_370;
    uStack_308 = uStack_388;
    uStack_304 = uStack_384;
    uStack_300 = uStack_380;
    uStack_2fc = uStack_37c;
    uStack_318 = uStack_398;
    uStack_314 = uStack_394;
    uStack_310 = uStack_390;
    uStack_30c = uStack_38c;
    func_0x048b0bc0(&uStack_5a0);
    uStack_418 = uStack_318;
    uStack_414 = uStack_314;
    uStack_410 = uStack_310;
    uStack_40c = uStack_30c;
    uStack_408 = uStack_308;
    uStack_404 = uStack_304;
    uStack_400 = uStack_300;
    uStack_3fc = uStack_2fc;
    uStack_3f8 = uStack_2f8;
    uStack_3f4 = uStack_2f4;
    uStack_3f0 = uStack_2f0;
    uStack_3e8 = uStack_2e8;
    func_0x0d99a880(&puStack_5b8,CONCAT44(uStack_314,uStack_318) + 0x18);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f493f:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f493f;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d99ac60(&puStack_5b8,&uStack_418,&UNK_01343dd6,8);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f48fcb8;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_0d9452a0;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_0d944cb0;
    puStack_5e0 = &UNK_0d99c730;
    puStack_5d8 = &UNK_0d99c890;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d99ae50(&puStack_5b8);
    uStack_3a8 = CONCAT71(uStack_3a8._1_7_,(undefined1)uStack_3e8);
    uStack_3b8 = uStack_3f8;
    uStack_3b4 = uStack_3f4;
    uStack_3b0 = uStack_3f0;
    uStack_3c8 = uStack_408;
    uStack_3c4 = uStack_404;
    uStack_3c0 = uStack_400;
    uStack_3bc = uStack_3fc;
    uStack_3d8 = uStack_418;
    uStack_3d4 = uStack_414;
    uStack_3d0 = uStack_410;
    uStack_3cc = uStack_40c;
    func_0x048b0bc0(&uStack_5a0);
    uStack_498 = (long *)CONCAT44(uStack_3d4,uStack_3d8);
    uStack_490 = (long *)CONCAT44(uStack_3cc,uStack_3d0);
    uStack_488 = uStack_3c8;
    uStack_484 = uStack_3c4;
    uStack_480 = uStack_3c0;
    uStack_47c = uStack_3bc;
    uStack_478 = uStack_3b8;
    uStack_474 = uStack_3b4;
    uStack_470 = uStack_3b0;
    uStack_468 = uStack_3a8;
    func_0x0d99a880(&puStack_5b8,uStack_498 + 3);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f4bbf:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f4bbf;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d99ac60(&puStack_5b8,&uStack_498,&UNK_01226c24,0xc);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ef8;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_04906f70;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_04906c50;
    puStack_5e0 = &UNK_0d99ca70;
    puStack_5d8 = &UNK_0d99cbd0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d99ae50(&puStack_5b8);
    uStack_4b8 = CONCAT71(uStack_4b8._1_7_,(char)uStack_468);
    uStack_4c8 = CONCAT44(uStack_474,uStack_478);
    uStack_4c0 = uStack_470;
    uStack_4d8 = (long *)CONCAT44(uStack_484,uStack_488);
    uStack_4d0 = uStack_480;
    uStack_4cc = uStack_47c;
    uStack_4e8 = uStack_498;
    uStack_4e0 = uStack_490;
    func_0x048b0bc0(&uStack_5a0);
    func_0x0d99a880(&puStack_5b8,uStack_4e8 + 3);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f4dff:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f4dff;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d99ac60(&puStack_5b8,&uStack_4e8,&UNK_0120bb04,0x13);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ce8;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_0490ce30;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_0490cb20;
    puStack_5e0 = &UNK_0d99cdb0;
    puStack_5d8 = &UNK_0d99cf10;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d99ae50(&puStack_5b8);
    func_0x048b0bc0(&uStack_5a0);
    lVar11 = func_0x0bc16ce0(lStack_4a0);
    if (*(int *)(lVar11 + 0x60) != -0x2b3da790) goto LAB_0d8f4f6e;
LAB_0d8f4f44:
    lVar11 = *(long *)(lVar11 + 0x68);
    if (lVar11 == 0) goto LAB_0d8f4f6e;
    bVar23 = (*(byte *)(lVar11 + 8) & 1) != 0;
    puVar19 = (undefined *)(lVar11 + 9);
    if (bVar23) {
      puVar19 = *(undefined **)(lVar11 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar23) {
      uVar21 = *(ulong *)(lVar11 + 0x10);
    }
  }
  func_0x0d99d0f0(&puStack_5b8,param_1,puVar19,uVar21);
  lVar11 = func_0x06fde940(lStack_4a0);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar23 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar20 = lVar11 + 9;
    if (bVar23) {
      lVar20 = *(long *)(lVar11 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar23) {
      uVar21 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0d99d960(&uStack_458,param_1,lVar20,uVar21);
    plVar17 = uStack_458;
  }
  else {
    func_0x0d99d960(&uStack_458,param_1,&UNK_011cc7dc,0x1f);
    plVar17 = uStack_458;
  }
  uStack_458 = plVar17;
  if ((char)uStack_428 == '\0') {
    uStack_458._0_4_ = SUB84(plVar17,0);
    uStack_458._4_4_ = (undefined4)((ulong)plVar17 >> 0x20);
    uStack_450._4_4_ = (undefined4)((ulong)uStack_450 >> 0x20);
    uStack_448._4_4_ = (undefined4)((ulong)uStack_448 >> 0x20);
    uStack_438._4_4_ = (undefined4)((ulong)uStack_438 >> 0x20);
    uStack_3f8 = (undefined4)uStack_438;
    uStack_3f4 = uStack_438._4_4_;
    uStack_408 = (undefined4)uStack_448;
    uStack_404 = uStack_448._4_4_;
    uStack_418 = (undefined4)uStack_458;
    uStack_414 = uStack_458._4_4_;
    uStack_410 = (undefined4)uStack_450;
    uStack_40c = uStack_450._4_4_;
    uStack_400 = uStack_440;
    uStack_3fc = uStack_43c;
    uStack_3f0 = uStack_430;
    uStack_3e8 = uStack_428;
    func_0x0d99dea0(&puStack_5b8,plVar17 + 3);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f50bf:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f50bf;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d99e210(&puStack_5b8,&uStack_418,&UNK_01416ab9,0xc);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05daeda0;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_05daea90;
    puStack_5e0 = &UNK_0d99e700;
    puStack_5d8 = &UNK_0d99e860;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d99e400(&puStack_5b8);
    uStack_3a8 = CONCAT71(uStack_3a8._1_7_,(undefined1)uStack_3e8);
    uStack_3b8 = uStack_3f8;
    uStack_3b4 = uStack_3f4;
    uStack_3b0 = uStack_3f0;
    uStack_3c8 = uStack_408;
    uStack_3c4 = uStack_404;
    uStack_3c0 = uStack_400;
    uStack_3bc = uStack_3fc;
    uStack_3d8 = uStack_418;
    uStack_3d4 = uStack_414;
    uStack_3d0 = uStack_410;
    uStack_3cc = uStack_40c;
    func_0x048b0bc0(&uStack_5a0);
    uStack_498 = (long *)CONCAT44(uStack_3d4,uStack_3d8);
    uStack_490 = (long *)CONCAT44(uStack_3cc,uStack_3d0);
    uStack_488 = uStack_3c8;
    uStack_484 = uStack_3c4;
    uStack_480 = uStack_3c0;
    uStack_47c = uStack_3bc;
    uStack_478 = uStack_3b8;
    uStack_474 = uStack_3b4;
    uStack_470 = uStack_3b0;
    uStack_468 = uStack_3a8;
    func_0x0d99dea0(&puStack_5b8,uStack_498 + 3);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f533f:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f533f;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d99e210(&puStack_5b8,&uStack_498,&UNK_01463249,9);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ef8;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_04906f70;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_04906c50;
    puStack_5e0 = &UNK_0d99ea40;
    puStack_5d8 = &UNK_0d99eba0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d99e400(&puStack_5b8);
    uStack_4b8 = CONCAT71(uStack_4b8._1_7_,(char)uStack_468);
    uStack_4c8 = CONCAT44(uStack_474,uStack_478);
    uStack_4c0 = uStack_470;
    uStack_4d8 = (long *)CONCAT44(uStack_484,uStack_488);
    uStack_4d0 = uStack_480;
    uStack_4cc = uStack_47c;
    uStack_4e8 = uStack_498;
    uStack_4e0 = uStack_490;
    func_0x048b0bc0(&uStack_5a0);
    func_0x0d99dea0(&puStack_5b8,uStack_4e8 + 3);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f557f:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f557f;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d99e210(&puStack_5b8,&uStack_4e8,&UNK_014304d2,6);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ef8;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_04906f70;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_04906c50;
    puStack_5e0 = &UNK_0d99ed80;
    puStack_5d8 = &UNK_0d99eee0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d99e400(&puStack_5b8);
    func_0x048b0bc0(&uStack_5a0);
  }
  func_0x0d8e8540(param_1);
  func_0x0e72a950(param_1);
  lVar11 = func_0x06fe05f0(lStack_4a0);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar23 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar20 = lVar11 + 9;
    if (bVar23) {
      lVar20 = *(long *)(lVar11 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar23) {
      uVar21 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0d99f0c0(&uStack_498,param_1,lVar20,uVar21);
    if ((char)uStack_468 != '\0') goto LAB_0d8f56fc;
LAB_0d8f5741:
    uStack_4aa = 0;
    uStack_4ae = 0;
    uStack_4ac = 0;
    uStack_168 = uStack_468;
    uStack_178 = uStack_478;
    uStack_174 = uStack_474;
    uStack_188 = uStack_488;
    uStack_184 = uStack_484;
    uStack_180 = uStack_480;
    uStack_17c = uStack_47c;
    uStack_198 = (undefined4)uStack_498;
    uStack_194 = uStack_498._4_4_;
    uStack_190 = (undefined4)uStack_490;
    uStack_18c = uStack_490._4_4_;
    func_0x0d99f600(&puStack_5b8,uStack_498 + 3);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f580f:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f580f;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d99f9d0(&puStack_5b8,&uStack_198,&UNK_01275bcc,0x12);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05daeda0;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_05daea90;
    puStack_5e0 = &UNK_0d99fec0;
    puStack_5d8 = &UNK_0d9a0020;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d99fbc0(&puStack_5b8);
    uStack_e8 = (undefined1)uStack_168;
    uStack_f8 = uStack_178;
    uStack_f4 = uStack_174;
    uStack_108 = uStack_188;
    uStack_104 = uStack_184;
    uStack_100 = uStack_180;
    uStack_fc = uStack_17c;
    uStack_118 = uStack_198;
    uStack_114 = uStack_194;
    uStack_110 = uStack_190;
    uStack_10c = uStack_18c;
    func_0x048b0bc0(&uStack_5a0);
    uStack_450 = (long *)0xffffffffffffffff;
    uStack_448 = (long *)0x0;
    uStack_440 = CONCAT31(uStack_440._1_3_,0xff);
    uStack_458 = (long *)&UNK_0f0edc68;
    uStack_438 = 0;
    uStack_430 = _DAT_014f0478;
    uStack_428 = 0;
    uStack_420 = 0;
    func_0x0d8f1640(&uStack_d8,&uStack_118,&uStack_458);
    uStack_128 = CONCAT71(uStack_a7,uStack_a8);
    uStack_138 = uStack_b8;
    uStack_134 = uStack_b4;
    uStack_148 = uStack_c8;
    uStack_144 = uStack_c4;
    uStack_140 = uStack_c0;
    uStack_13c = uStack_bc;
    uStack_158 = uStack_d8;
    uStack_154 = uStack_d4;
    uStack_150 = uStack_d0;
    uStack_14c = uStack_cc;
    func_0x0d99f600(&puStack_5b8,CONCAT44(uStack_d4,uStack_d8) + 0x18);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f5b4f:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f5b4f;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d99f9d0(&puStack_5b8,&uStack_158,&UNK_011a1032,0x13);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05daeda0;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_05daea90;
    puStack_5e0 = &UNK_0d9a0200;
    puStack_5d8 = &UNK_0d9a0360;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d99fbc0(&puStack_5b8);
    uStack_1e8 = CONCAT71(uStack_1e8._1_7_,(undefined1)uStack_128);
    uStack_1f8 = uStack_138;
    uStack_1f4 = uStack_134;
    uStack_208 = uStack_148;
    uStack_204 = uStack_144;
    uStack_200 = uStack_140;
    uStack_1fc = uStack_13c;
    uStack_218 = uStack_158;
    uStack_214 = uStack_154;
    uStack_210 = uStack_150;
    uStack_20c = uStack_14c;
    func_0x048b0bc0(&uStack_5a0);
    uStack_4e0 = (long *)0xffffffffffffffff;
    uStack_4d8 = (long *)0x0;
    uStack_4d0 = CONCAT31(uStack_4d0._1_3_,0xff);
    uStack_4e8 = (long *)&UNK_0f0edc68;
    uStack_4c8 = 0;
    uStack_4c0 = _DAT_014f0478;
    uStack_4b8 = 0;
    cStack_4b0 = '\0';
    uStack_4af = 0;
    func_0x0d8f1640(&uStack_1d8,&uStack_218,&uStack_4e8);
    uStack_2a8 = CONCAT71(uStack_1a7,uStack_1a8);
    uStack_2b8 = uStack_1b8;
    uStack_2b4 = uStack_1b4;
    uStack_2b0 = uStack_1b0;
    uStack_2c8 = uStack_1c8;
    uStack_2c4 = uStack_1c4;
    uStack_2c0 = uStack_1c0;
    uStack_2bc = uStack_1bc;
    uStack_2d8 = uStack_1d8;
    uStack_2d4 = uStack_1d4;
    uStack_2d0 = uStack_1d0;
    uStack_2cc = uStack_1cc;
    func_0x0d99f600(&puStack_5b8,CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f5e7f:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f5e7f;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d99f9d0(&puStack_5b8,&uStack_2d8,&UNK_01416ac6,0x11);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ce8;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_0490ce30;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_0490cb20;
    puStack_5e0 = &UNK_0d9a0540;
    puStack_5d8 = &UNK_0d9a06a0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d99fbc0(&puStack_5b8);
    uStack_228 = (undefined1)uStack_2a8;
    uStack_238 = uStack_2b8;
    uStack_234 = uStack_2b4;
    uStack_230 = uStack_2b0;
    uStack_248 = uStack_2c8;
    uStack_244 = uStack_2c4;
    uStack_240 = uStack_2c0;
    uStack_23c = uStack_2bc;
    uStack_258 = uStack_2d8;
    uStack_254 = uStack_2d4;
    uStack_250 = uStack_2d0;
    uStack_24c = uStack_2cc;
    func_0x048b0bc0(&uStack_5a0);
    uStack_298 = uStack_258;
    uStack_294 = uStack_254;
    uStack_290 = uStack_250;
    uStack_28c = uStack_24c;
    uStack_288 = uStack_248;
    uStack_284 = uStack_244;
    uStack_280 = uStack_240;
    uStack_27c = uStack_23c;
    uStack_278 = uStack_238;
    uStack_274 = uStack_234;
    uStack_270 = uStack_230;
    uStack_268 = CONCAT71(uStack_227,uStack_228);
    func_0x0d99f600(&puStack_5b8,CONCAT44(uStack_254,uStack_258) + 0x18);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f60ff:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f60ff;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d99f9d0(&puStack_5b8,&uStack_298,&UNK_014b1d2d,0x12);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ce8;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_0490ce30;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_0490cb20;
    puStack_5e0 = &UNK_0d9a0880;
    puStack_5d8 = &UNK_0d9a09e0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d99fbc0(&puStack_5b8);
    uStack_328 = CONCAT71(uStack_328._1_7_,(undefined1)uStack_268);
    uStack_338 = uStack_278;
    uStack_334 = uStack_274;
    uStack_330 = uStack_270;
    uStack_348 = uStack_288;
    uStack_344 = uStack_284;
    uStack_340 = uStack_280;
    uStack_33c = uStack_27c;
    uStack_358 = uStack_298;
    uStack_354 = uStack_294;
    uStack_350 = uStack_290;
    uStack_34c = uStack_28c;
    func_0x048b0bc0(&uStack_5a0);
    uStack_398 = uStack_358;
    uStack_394 = uStack_354;
    uStack_390 = uStack_350;
    uStack_38c = uStack_34c;
    uStack_388 = uStack_348;
    uStack_384 = uStack_344;
    uStack_380 = uStack_340;
    uStack_37c = uStack_33c;
    uStack_378 = uStack_338;
    uStack_374 = uStack_334;
    uStack_370 = uStack_330;
    uStack_368 = uStack_328;
    func_0x0d99f600(&puStack_5b8,CONCAT44(uStack_354,uStack_358) + 0x18);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f635f:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f635f;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d99f9d0(&puStack_5b8,&uStack_398,&UNK_01394e7b,0x10);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f4900e8;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_0d9a0bc0;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_0d94e4f0;
    puStack_5e0 = &UNK_0d9a0bd0;
    puStack_5d8 = &UNK_0d9a0da0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d99fbc0(&puStack_5b8);
    uStack_2e8 = CONCAT71(uStack_2e8._1_7_,(undefined1)uStack_368);
    uStack_2f8 = uStack_378;
    uStack_2f4 = uStack_374;
    uStack_2f0 = uStack_370;
    uStack_308 = uStack_388;
    uStack_304 = uStack_384;
    uStack_300 = uStack_380;
    uStack_2fc = uStack_37c;
    uStack_318 = uStack_398;
    uStack_314 = uStack_394;
    uStack_310 = uStack_390;
    uStack_30c = uStack_38c;
    func_0x048b0bc0(&uStack_5a0);
    uStack_418 = uStack_318;
    uStack_414 = uStack_314;
    uStack_410 = uStack_310;
    uStack_40c = uStack_30c;
    uStack_408 = uStack_308;
    uStack_404 = uStack_304;
    uStack_400 = uStack_300;
    uStack_3fc = uStack_2fc;
    uStack_3f8 = uStack_2f8;
    uStack_3f4 = uStack_2f4;
    uStack_3f0 = uStack_2f0;
    uStack_3e8 = uStack_2e8;
    func_0x0d99f600(&puStack_5b8,CONCAT44(uStack_314,uStack_318) + 0x18);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f65df:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f65df;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d99f9d0(&puStack_5b8,&uStack_418,&UNK_012db44c,10);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ef8;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_04906f70;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_04906c50;
    puStack_5e0 = &UNK_0d9a0f80;
    puStack_5d8 = &UNK_0d9a10e0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d99fbc0(&puStack_5b8);
    uStack_3a8 = CONCAT71(uStack_3a8._1_7_,(undefined1)uStack_3e8);
    uStack_3b8 = uStack_3f8;
    uStack_3b4 = uStack_3f4;
    uStack_3b0 = uStack_3f0;
    uStack_3c8 = uStack_408;
    uStack_3c4 = uStack_404;
    uStack_3c0 = uStack_400;
    uStack_3bc = uStack_3fc;
    uStack_3d8 = uStack_418;
    uStack_3d4 = uStack_414;
    uStack_3d0 = uStack_410;
    uStack_3cc = uStack_40c;
    func_0x048b0bc0(&uStack_5a0);
    func_0x0d99f600(&puStack_5b8,CONCAT44(uStack_3d4,uStack_3d8) + 0x18);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f681f:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f681f;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d99f9d0(&puStack_5b8,&uStack_3d8,&UNK_0144b324,8);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f48fda0;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_0d9a4930;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_0d9a2ee0;
    puStack_5e0 = &UNK_0d9a4940;
    puStack_5d8 = &UNK_0d9a4b10;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d99fbc0(&puStack_5b8);
    func_0x048b0bc0(&uStack_5a0);
    lVar11 = func_0x0bc17bd0(lStack_4a0);
    if (*(int *)(lVar11 + 0x60) == -0x2b3da790) goto LAB_0d8f6964;
LAB_0d8f698e:
    puVar19 = &UNK_01235539;
    uVar21 = 0x1f;
  }
  else {
    func_0x0d99f0c0(&uStack_498,param_1,&UNK_01339517,0x21);
    if ((char)uStack_468 == '\0') goto LAB_0d8f5741;
LAB_0d8f56fc:
    lVar11 = func_0x0bc17bd0(lStack_4a0);
    if (*(int *)(lVar11 + 0x60) != -0x2b3da790) goto LAB_0d8f698e;
LAB_0d8f6964:
    lVar11 = *(long *)(lVar11 + 0x68);
    if (lVar11 == 0) goto LAB_0d8f698e;
    bVar23 = (*(byte *)(lVar11 + 8) & 1) != 0;
    puVar19 = (undefined *)(lVar11 + 9);
    if (bVar23) {
      puVar19 = *(undefined **)(lVar11 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar23) {
      uVar21 = *(ulong *)(lVar11 + 0x10);
    }
  }
  func_0x0d9a50d0(&puStack_5b8,param_1,puVar19,uVar21);
  if ((DAT_0f72e210 == '\0') && (iVar10 = func_0x04108328(&DAT_0f72e210), iVar10 != 0)) {
    func_0x0d9a5a00();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f72e190,0xf53dab8);
    func_0x0410844d(&DAT_0f72e210);
  }
  plVar17 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f72e190 + 4)) * 8);
  do {
    lVar11 = *plVar17;
    if (lVar11 == -1) goto LAB_0d8f6a00;
    plVar17 = (long *)(*(long *)(param_1 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f72e190 + 4))
  ;
  if (plVar17 == *(long **)(param_1 + 0x38)) {
LAB_0d8f6a00:
    puVar19 = &DAT_0f72e190;
    if (iRam000000000f72e1f0 != -0x2b3da790) goto LAB_0d8f6a58;
LAB_0d8f6a2b:
    lVar11 = *(long *)(puVar19 + 0x68);
    if (lVar11 == 0) goto LAB_0d8f6a58;
    bVar23 = (*(byte *)(lVar11 + 8) & 1) != 0;
    puVar19 = (undefined *)(lVar11 + 9);
    if (bVar23) {
      puVar19 = *(undefined **)(lVar11 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar23) {
      uVar21 = *(ulong *)(lVar11 + 0x10);
    }
  }
  else {
    puVar19 = (undefined *)plVar17[2];
    if (*(int *)(puVar19 + 0x60) == -0x2b3da790) goto LAB_0d8f6a2b;
LAB_0d8f6a58:
    puVar19 = &UNK_01471b6a;
    uVar21 = 0x1c;
  }
  func_0x0d9a5e40(&uStack_458,param_1,puVar19,uVar21);
  uVar6 = uStack_428;
  uStack_428._0_5_ = (uint5)(uint)uStack_428;
  uVar7 = uStack_428;
  uStack_420 = uStack_420 & 0xffffffffffffff00;
  uStack_428._0_1_ = (char)uVar6;
  bVar23 = (char)uStack_428 == '\0';
  uStack_428 = uVar7;
  if (bVar23) {
    func_0x0d9a96c0(&puStack_5b8,&UNK_01240b70,4);
    bVar23 = (bStack_590 & 1) == 0;
    puVar14 = (undefined4 *)
              CONCAT26(uStack_57a,
                       CONCAT15(uStack_57b,
                                CONCAT23(uStack_57d,
                                         CONCAT12(uStack_57e,CONCAT11(uStack_57f,uStack_580)))));
    if (bVar23) {
      puVar14 = &uStack_58f;
    }
    uVar21 = (ulong)(bStack_590 >> 1);
    if (!bVar23) {
      uVar21 = CONCAT17(uStack_581,
                        CONCAT16(uStack_582,
                                 CONCAT15(uStack_583,
                                          CONCAT14(uStack_584,
                                                   CONCAT13(uStack_585,
                                                            CONCAT12(uStack_586,
                                                                     CONCAT11(uStack_587,uStack_588)
                                                                    ))))));
    }
    if (uVar21 == 0) {
      uVar18 = 0x811c9dc5;
    }
    else {
      uVar15 = (ulong)((uint)uVar21 & 3);
      if (uVar21 < 4) {
        uVar18 = 0x811c9dc5;
        uVar22 = 0;
      }
      else {
        uVar18 = 0x811c9dc5;
        uVar22 = 0;
        do {
          uVar18 = ((int)*(char *)((long)puVar14 + uVar22 + 3) ^
                   ((int)*(char *)((long)puVar14 + uVar22 + 2) ^
                   ((int)*(char *)((long)puVar14 + uVar22 + 1) ^
                   ((int)*(char *)((long)puVar14 + uVar22) ^ uVar18) * 0x1000193) * 0x1000193) *
                   0x1000193) * 0x1000193;
          uVar22 = uVar22 + 4;
        } while ((uVar21 & 0xfffffffffffffffc) != uVar22);
      }
      if (uVar15 != 0) {
        uVar21 = 0;
        do {
          uVar18 = ((int)*(char *)((long)puVar14 + uVar21 + uVar22) ^ uVar18) * 0x1000193;
          uVar21 = uVar21 + 1;
        } while (uVar15 != uVar21);
      }
    }
    uStack_430 = CONCAT44(uVar18,2);
    if ((DAT_0f72e230 == '\0') && (iVar10 = func_0x04108328(&DAT_0f72e230), iVar10 != 0)) {
      func_0x0d9a5b10();
      func_0x0410844d(&DAT_0f72e230);
    }
    auStack_620[0] = uStack_430._4_4_;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)CONCAT44(uStack_610._4_4_,3);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_0d9a9c70;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_0d9a5940;
    puStack_5e0 = &UNK_0d9a9d30;
    puStack_5d8 = &UNK_0d9a9d40;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(&uStack_450,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    uStack_4d8 = (long *)CONCAT44(uStack_43c,uStack_440);
    uStack_4d0 = (undefined4)uStack_438;
    uStack_4cc = uStack_438._4_4_;
    uStack_4e8 = uStack_450;
    uStack_4e0 = uStack_448;
    func_0x0d9a9a00(auStack_620,&uStack_4e8,&puStack_5b8);
    if (uStack_608._4_4_ == 2) {
      piVar16 = *(int **)(*(long *)((long)uStack_610 + 0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != (int)uStack_608) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      lVar11 = *(long *)(piVar16 + 0xc);
      while ((long *)lVar11 != plStack_618) {
        piVar16 = *(int **)(piVar16 + 0xe);
        lVar11 = *(long *)(piVar16 + 0xc);
      }
LAB_0d8f6cef:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 9;
    }
    else {
      if (uStack_608._4_4_ == 1) {
        piVar16 = *(int **)(*(long *)((long)uStack_610 + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != (int)uStack_608) {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f6cef;
      }
      if (uStack_608._4_4_ == 0) {
        *(uint *)((long)uStack_610 + 0x18) = *(uint *)((long)uStack_610 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_420 == '\0') {
      func_0x0d9a9d90(auStack_620,&uStack_458);
    }
    plVar17 = uStack_458;
    iVar10 = uStack_428._4_4_;
    if ((DAT_0f72e210 == '\0') && (iVar9 = func_0x04108328(&DAT_0f72e210), iVar9 != 0)) {
      func_0x0d9a5a00();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f72e190,0xf53dab8);
      func_0x0410844d(&DAT_0f72e210);
    }
    plVar13 = (long *)(plVar17[3] +
                      (ulong)((int)((ulong)(plVar17[4] - plVar17[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f72e190 + 4)) * 8);
    do {
      lVar11 = *plVar13;
      if (lVar11 == -1) goto LAB_0d8f6d91;
      plVar13 = (long *)(plVar17[6] + lVar11 * 0x18);
    } while (*(uint *)(plVar17[6] + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f72e190 + 4));
    if (plVar13 == (long *)plVar17[7]) {
LAB_0d8f6d91:
      puVar19 = &DAT_0f72e190;
    }
    else {
      puVar19 = (undefined *)plVar13[2];
    }
    piVar3 = *(int **)(*(long *)(puVar19 + 0x68) + 0x28);
    for (piVar16 = *(int **)(*(long *)(puVar19 + 0x68) + 0x20);
        (piVar16 != piVar3 && (*piVar16 != iVar10)); piVar16 = piVar16 + 0xe) {
    }
    if ((piVar16 == piVar3) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0148d340),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_620[0] = auStack_620[0] & 0xffffff00;
    func_0x05d9c620(piVar16 + 2,(long)&uStack_430 + 4,(long)&uStack_430 + 4,auStack_620);
    uStack_4e8 = uStack_458;
    uStack_4e0 = uStack_450;
    uStack_4d8 = uStack_448;
    uStack_4d0 = uStack_440;
    uStack_4cc = uStack_43c;
    uStack_4c8 = uStack_438;
    uStack_4c0 = uStack_430;
    uStack_4b8 = uStack_428;
    cStack_4b0 = (char)uStack_420;
    uStack_4af = (undefined1)(uStack_420 >> 8);
    uStack_4ae = (undefined2)(uStack_420 >> 0x10);
    func_0x048b0bc0(&puStack_5b8);
    func_0x0d9a96c0(&puStack_5b8,&UNK_01226c31,6);
    bVar23 = (bStack_590 & 1) != 0;
    puVar14 = &uStack_58f;
    if (bVar23) {
      puVar14 = (undefined4 *)
                CONCAT26(uStack_57a,
                         CONCAT15(uStack_57b,
                                  CONCAT23(uStack_57d,
                                           CONCAT12(uStack_57e,CONCAT11(uStack_57f,uStack_580)))));
    }
    uVar21 = (ulong)(bStack_590 >> 1);
    if (bVar23) {
      uVar21 = CONCAT17(uStack_581,
                        CONCAT16(uStack_582,
                                 CONCAT15(uStack_583,
                                          CONCAT14(uStack_584,
                                                   CONCAT13(uStack_585,
                                                            CONCAT12(uStack_586,
                                                                     CONCAT11(uStack_587,uStack_588)
                                                                    ))))));
    }
    if (uVar21 == 0) {
      uVar18 = 0x811c9dc5;
    }
    else {
      uVar15 = (ulong)((uint)uVar21 & 3);
      if (uVar21 < 4) {
        uVar18 = 0x811c9dc5;
        uVar22 = 0;
      }
      else {
        uVar18 = 0x811c9dc5;
        uVar22 = 0;
        do {
          uVar18 = ((int)*(char *)((long)puVar14 + uVar22 + 3) ^
                   ((int)*(char *)((long)puVar14 + uVar22 + 2) ^
                   ((int)*(char *)((long)puVar14 + uVar22 + 1) ^
                   ((int)*(char *)((long)puVar14 + uVar22) ^ uVar18) * 0x1000193) * 0x1000193) *
                   0x1000193) * 0x1000193;
          uVar22 = uVar22 + 4;
        } while ((uVar21 & 0xfffffffffffffffc) != uVar22);
      }
      if (uVar15 != 0) {
        uVar21 = 0;
        do {
          uVar18 = ((int)*(char *)((long)puVar14 + uVar21 + uVar22) ^ uVar18) * 0x1000193;
          uVar21 = uVar21 + 1;
        } while (uVar15 != uVar21);
      }
    }
    uStack_4c0 = CONCAT44(uVar18,2);
    if ((DAT_0f72e230 == '\0') && (iVar10 = func_0x04108328(&DAT_0f72e230), iVar10 != 0)) {
      func_0x0d9a5b10();
      func_0x0410844d(&DAT_0f72e230);
    }
    auStack_620[0] = uStack_4c0._4_4_;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)CONCAT44(uStack_610._4_4_,3);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_0d9a9c70;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_0d9a5940;
    puStack_5e0 = &UNK_0d9a9f50;
    puStack_5d8 = &UNK_0d9a9f60;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(&uStack_4e0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    uStack_488 = uStack_4d0;
    uStack_484 = uStack_4cc;
    uStack_480 = (undefined4)uStack_4c8;
    uStack_47c = uStack_4c8._4_4_;
    uStack_498 = uStack_4e0;
    uStack_490 = uStack_4d8;
    func_0x0d9a9a00(auStack_620,&uStack_498,&puStack_5b8);
    if (uStack_608._4_4_ == 2) {
      piVar16 = *(int **)(uStack_610[0xf] + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != (int)uStack_608) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      plVar17 = *(long **)(piVar16 + 0xc);
      while (plVar17 != plStack_618) {
        piVar16 = *(int **)(piVar16 + 0xe);
        plVar17 = *(long **)(piVar16 + 0xc);
      }
LAB_0d8f70ff:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 9;
    }
    else {
      if (uStack_608._4_4_ == 1) {
        piVar16 = *(int **)(uStack_610[0xf] + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != (int)uStack_608) {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f70ff;
      }
      if (uStack_608._4_4_ == 0) {
        *(uint *)(uStack_610 + 3) = *(uint *)(uStack_610 + 3) | 0x90000;
      }
    }
    if (cStack_4b0 == '\0') {
      func_0x0d9a9d90(auStack_620,&uStack_4e8);
    }
    plVar17 = uStack_4e8;
    iVar10 = uStack_4b8._4_4_;
    if ((DAT_0f72e210 == '\0') && (iVar9 = func_0x04108328(&DAT_0f72e210), iVar9 != 0)) {
      func_0x0d9a5a00();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f72e190,0xf53dab8);
      func_0x0410844d(&DAT_0f72e210);
    }
    plVar13 = (long *)(plVar17[3] +
                      (ulong)((int)((ulong)(plVar17[4] - plVar17[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f72e190 + 4)) * 8);
    do {
      lVar11 = *plVar13;
      if (lVar11 == -1) goto LAB_0d8f7190;
      plVar13 = (long *)(plVar17[6] + lVar11 * 0x18);
    } while (*(uint *)(plVar17[6] + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f72e190 + 4));
    if (plVar13 == (long *)plVar17[7]) {
LAB_0d8f7190:
      puVar19 = &DAT_0f72e190;
    }
    else {
      puVar19 = (undefined *)plVar13[2];
    }
    piVar3 = *(int **)(*(long *)(puVar19 + 0x68) + 0x28);
    for (piVar16 = *(int **)(*(long *)(puVar19 + 0x68) + 0x20);
        (piVar16 != piVar3 && (*piVar16 != iVar10)); piVar16 = piVar16 + 0xe) {
    }
    if ((piVar16 == piVar3) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0148d340),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_620[0] = auStack_620[0] & 0xffffff00;
    func_0x05d9c620(piVar16 + 2,(long)&uStack_4c0 + 4,(long)&uStack_4c0 + 4,auStack_620);
    func_0x048b0bc0(&puStack_5b8);
  }
  lVar11 = func_0x06fe13d0(lStack_4a0);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar23 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar20 = lVar11 + 9;
    if (bVar23) {
      lVar20 = *(long *)(lVar11 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar23) {
      uVar21 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0d9a9fb0(&uStack_458,param_1,lVar20,uVar21);
    plVar17 = uStack_458;
  }
  else {
    func_0x0d9a9fb0(&uStack_458,param_1,&UNK_0129d635,0x21);
    plVar17 = uStack_458;
  }
  uStack_458 = plVar17;
  if ((char)uStack_428 == '\0') {
    uStack_458._0_4_ = SUB84(plVar17,0);
    uStack_458._4_4_ = (undefined4)((ulong)plVar17 >> 0x20);
    uStack_450._4_4_ = (undefined4)((ulong)uStack_450 >> 0x20);
    uStack_448._4_4_ = (undefined4)((ulong)uStack_448 >> 0x20);
    uStack_438._4_4_ = (undefined4)((ulong)uStack_438 >> 0x20);
    uStack_3f8 = (undefined4)uStack_438;
    uStack_3f4 = uStack_438._4_4_;
    uStack_408 = (undefined4)uStack_448;
    uStack_404 = uStack_448._4_4_;
    uStack_418 = (undefined4)uStack_458;
    uStack_414 = uStack_458._4_4_;
    uStack_410 = (undefined4)uStack_450;
    uStack_40c = uStack_450._4_4_;
    uStack_400 = uStack_440;
    uStack_3fc = uStack_43c;
    uStack_3f0 = uStack_430;
    uStack_3e8 = uStack_428;
    func_0x0d9aa4f0(&puStack_5b8,plVar17 + 3);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f736f:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f736f;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d9aa8b0(&puStack_5b8,&uStack_418,&UNK_01492c33,4);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_05daeda0;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_05daea90;
    puStack_5e0 = &UNK_0d9aada0;
    puStack_5d8 = &UNK_0d9aaf00;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d9aaaa0(&puStack_5b8);
    uStack_3a8 = CONCAT71(uStack_3a8._1_7_,(undefined1)uStack_3e8);
    uStack_3b8 = uStack_3f8;
    uStack_3b4 = uStack_3f4;
    uStack_3b0 = uStack_3f0;
    uStack_3c8 = uStack_408;
    uStack_3c4 = uStack_404;
    uStack_3c0 = uStack_400;
    uStack_3bc = uStack_3fc;
    uStack_3d8 = uStack_418;
    uStack_3d4 = uStack_414;
    uStack_3d0 = uStack_410;
    uStack_3cc = uStack_40c;
    func_0x048b0bc0(&uStack_5a0);
    uStack_498 = (long *)CONCAT44(uStack_3d4,uStack_3d8);
    uStack_490 = (long *)CONCAT44(uStack_3cc,uStack_3d0);
    uStack_488 = uStack_3c8;
    uStack_484 = uStack_3c4;
    uStack_480 = uStack_3c0;
    uStack_47c = uStack_3bc;
    uStack_478 = uStack_3b8;
    uStack_474 = uStack_3b4;
    uStack_470 = uStack_3b0;
    uStack_468 = uStack_3a8;
    func_0x0d9aa4f0(&puStack_5b8,uStack_498 + 3);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f763f:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f763f;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d9aa8b0(&puStack_5b8,&uStack_498,&UNK_011bc303,0xd);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ef8;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_04906f70;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_04906c50;
    puStack_5e0 = &UNK_0d9ab0e0;
    puStack_5d8 = &UNK_0d9ab240;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d9aaaa0(&puStack_5b8);
    uStack_4b8 = CONCAT71(uStack_4b8._1_7_,(char)uStack_468);
    uStack_4c8 = CONCAT44(uStack_474,uStack_478);
    uStack_4c0 = uStack_470;
    uStack_4d8 = (long *)CONCAT44(uStack_484,uStack_488);
    uStack_4d0 = uStack_480;
    uStack_4cc = uStack_47c;
    uStack_4e8 = uStack_498;
    uStack_4e0 = uStack_490;
    func_0x048b0bc0(&uStack_5a0);
    func_0x0d9aa4f0(&puStack_5b8,uStack_4e8 + 3);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f78cf:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f78cf;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d9aa8b0(&puStack_5b8,&uStack_4e8,&UNK_0147c3bf,5);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f48c750;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_0d9a9c70;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &UNK_0d9a5940;
    puStack_5e0 = &UNK_0d9ab420;
    puStack_5d8 = &UNK_0d9ab580;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d9aaaa0(&puStack_5b8);
    func_0x048b0bc0(&uStack_5a0);
  }
  func_0x0e72a950(param_1);
  lVar11 = func_0x06fe24d0(lStack_4a0);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar23 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar20 = lVar11 + 9;
    if (bVar23) {
      lVar20 = *(long *)(lVar11 + 0x18);
    }
    uVar21 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar23) {
      uVar21 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0d9ab9f0(&uStack_458,param_1,lVar20,uVar21);
    if ((char)uStack_428 != '\0') goto LAB_0d8f7a59;
LAB_0d8f7a9e:
    uStack_2a8 = uStack_428;
    uStack_2b8 = (undefined4)uStack_438;
    uStack_2b4 = uStack_438._4_4_;
    uStack_2b0 = uStack_430;
    uStack_2c8 = (undefined4)uStack_448;
    uStack_2c4 = uStack_448._4_4_;
    uStack_2c0 = uStack_440;
    uStack_2bc = uStack_43c;
    uStack_2d8 = (undefined4)uStack_458;
    uStack_2d4 = uStack_458._4_4_;
    uStack_2d0 = (undefined4)uStack_450;
    uStack_2cc = uStack_450._4_4_;
    func_0x0d9abf30(&puStack_5b8,uStack_458 + 3);
    iVar10 = CONCAT13(uStack_599,CONCAT12(uStack_59a,CONCAT11(uStack_59b,uStack_59c)));
    if (iVar10 == 2) {
      piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                             CONCAT16(uStack_5a2,
                                                      CONCAT15(uStack_5a3,
                                                               CONCAT14(uStack_5a4,uStack_5a8)))) +
                                   0x78) + 0x60);
      iVar10 = *piVar16;
      while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0)))) {
        piVar16 = piVar16 + 0x16;
        iVar10 = *piVar16;
      }
      puVar12 = *(undefined8 **)(piVar16 + 0xc);
      while (puVar12 != plStack_5b0) {
        piVar16 = *(int **)(piVar16 + 0xe);
        puVar12 = *(undefined8 **)(piVar16 + 0xc);
      }
LAB_0d8f7b4f:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
    }
    else {
      if (iVar10 == 1) {
        piVar16 = *(int **)(*(long *)(CONCAT17(uStack_5a1,
                                               CONCAT16(uStack_5a2,
                                                        CONCAT15(uStack_5a3,
                                                                 CONCAT14(uStack_5a4,uStack_5a8))))
                                     + 0x78) + 0x48);
        iVar10 = *piVar16;
        while (iVar10 != CONCAT13(uStack_59d,CONCAT12(uStack_59e,CONCAT11(uStack_59f,uStack_5a0))))
        {
          piVar16 = piVar16 + 0x1a;
          iVar10 = *piVar16;
        }
        goto LAB_0d8f7b4f;
      }
      if (iVar10 == 0) {
        puVar2 = (uint *)(CONCAT17(uStack_5a1,
                                   CONCAT16(uStack_5a2,
                                            CONCAT15(uStack_5a3,CONCAT14(uStack_5a4,uStack_5a8)))) +
                         0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0d9ac350(&puStack_5b8,&uStack_2d8,&UNK_011a1046,0xe);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ef8;
    plVar17 = (long *)CONCAT17(uStack_599,
                               CONCAT16(uStack_59a,
                                        CONCAT15(uStack_59b,
                                                 CONCAT14(uStack_59c,
                                                          CONCAT13(uStack_59d,
                                                                   CONCAT12(uStack_59e,
                                                                            CONCAT11(uStack_59f,
                                                                                     uStack_5a0)))))
                                       ));
    uStack_5a0 = SUB81(puVar12,0);
    uStack_59f = (undefined1)((ulong)puVar12 >> 8);
    uStack_59e = (undefined1)((ulong)puVar12 >> 0x10);
    uStack_59d = (undefined1)((ulong)puVar12 >> 0x18);
    uStack_59c = (undefined1)((ulong)puVar12 >> 0x20);
    uStack_59b = (undefined1)((ulong)puVar12 >> 0x28);
    uStack_59a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_599 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    auStack_620[0] = uStack_5a8;
    plStack_618 = (long *)0x0;
    uStack_610 = (long *)((ulong)uStack_610 & 0xffffffff00000000);
    uStack_608 = 1;
    uStack_600 = 0;
    puStack_5f8 = &UNK_04906f70;
    puStack_5f0 = &SUB_048b06d0;
    puStack_5e8 = &SUB_04906c50;
    puStack_5e0 = &UNK_0d9ac840;
    puStack_5d8 = &UNK_0d9ac9a0;
    uStack_5d0 = 0;
    uStack_5c8 = 0;
    plStack_5c0 = (long *)0x0;
    func_0x048b05a0(plStack_5b0,auStack_620);
    plVar17 = plStack_5c0;
    if (plStack_5c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_5c0 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_5c0 + 0x10))(plStack_5c0);
        func_0x0412c2d0(plVar17);
      }
    }
    func_0x0d9ac540(&puStack_5b8);
    uStack_228 = (undefined1)uStack_2a8;
    uStack_238 = uStack_2b8;
    uStack_234 = uStack_2b4;
    uStack_230 = uStack_2b0;
    uStack_248 = uStack_2c8;
    uStack_244 = uStack_2c4;
    uStack_240 = uStack_2c0;
    uStack_23c = uStack_2bc;
    uStack_258 = uStack_2d8;
    uSta
/* truncated by DecompileTargets.java */


/* ---- referenced strings ----
 * 0x11bc39f  thrown_potion_effect
 * 0x12db49b  definition_event
 * 0x13b0544  wind_burst_on_hit
 * 0x13e2e02  apply_effect_to_blocking_targets
 * 0x13e2e12  blocking_targets
 */
