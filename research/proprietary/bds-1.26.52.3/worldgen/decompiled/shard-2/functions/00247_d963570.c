/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xda63570 (ELF vaddr 0xd963570)
 * Label: caller-of-callee
 * Body:  [[0da63570, 0da63c51] [0da63c60, 0da63e49] [0da63e50, 0da63e92] [0da63ea0, 0da6f104]]
 * Ghidra: FUN_0da63570
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0da63570(long param_1)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  int *piVar13;
  byte *pbVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  byte *pbVar18;
  code *pcVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_6d0;
  long *plStack_6c8;
  undefined8 uStack_6c0;
  code *pcStack_6b8;
  undefined8 uStack_6b0;
  undefined *puStack_6a8;
  undefined1 *puStack_6a0;
  undefined *puStack_698;
  undefined *puStack_690;
  undefined *puStack_688;
  undefined4 uStack_680;
  undefined1 auStack_678 [16];
  undefined1 auStack_668 [16];
  undefined4 uStack_658;
  undefined4 uStack_654;
  int iStack_650;
  undefined2 uStack_64c;
  undefined1 uStack_64a;
  undefined1 uStack_649;
  undefined1 uStack_648;
  undefined1 uStack_647;
  undefined1 uStack_646;
  undefined1 uStack_645;
  undefined1 uStack_644;
  undefined1 uStack_643;
  undefined1 uStack_642;
  undefined1 uStack_641;
  undefined4 uStack_640;
  char cStack_63c;
  undefined2 uStack_63b;
  undefined1 uStack_639;
  undefined1 uStack_638;
  undefined5 uStack_637;
  undefined1 uStack_632;
  undefined1 uStack_631;
  undefined1 uStack_630;
  undefined1 uStack_62f;
  undefined1 uStack_62e;
  undefined1 uStack_62d;
  undefined1 uStack_62c;
  undefined1 uStack_62b;
  undefined1 uStack_62a;
  undefined1 uStack_629;
  undefined1 auStack_628 [16];
  long lStack_618;
  undefined1 auStack_610 [16];
  long lStack_600;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  long lStack_5f0;
  long lStack_5e8;
  undefined8 uStack_5e0;
  undefined1 auStack_5d8 [16];
  long lStack_5c8;
  undefined2 uStack_5c0;
  undefined2 uStack_5be;
  uint uStack_5bc;
  uint uStack_5b8;
  uint uStack_5b4;
  long lStack_5b0;
  undefined2 uStack_5a8;
  undefined2 uStack_5a6;
  uint uStack_5a4;
  uint uStack_5a0;
  undefined1 uStack_59c;
  undefined *puStack_598;
  undefined *puStack_590;
  undefined8 *puStack_588;
  undefined *puStack_580;
  undefined *puStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined2 uStack_560;
  undefined4 uStack_55e;
  undefined2 uStack_55a;
  undefined *puStack_558;
  undefined *puStack_550;
  undefined8 *puStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined2 uStack_520;
  undefined4 uStack_51e;
  undefined2 uStack_51a;
  undefined1 auStack_518 [16];
  undefined *puStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long lStack_4e0;
  undefined *puStack_4d8;
  undefined *puStack_4d0;
  undefined *puStack_4c8;
  undefined *puStack_4c0;
  undefined8 uStack_4b8;
  char cStack_4b0;
  undefined7 uStack_4af;
  undefined *puStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined8 uStack_400;
  undefined1 uStack_3f8;
  undefined7 uStack_3f7;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  
  func_0x0db46bd0();
  func_0x0ecd99f0(param_1);
  lVar11 = param_1 + 0x18;
  lVar9 = func_0x0b29d5e0(lVar11);
  if ((*(int *)(lVar9 + 0x60) == -0x2b3da790) && (lVar9 = *(long *)(lVar9 + 0x68), lVar9 != 0)) {
    bVar20 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar16 = lVar9 + 9;
    if (bVar20) {
      lVar16 = *(long *)(lVar9 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0dadc5c0(&puStack_598,param_1,lVar16,uVar15);
    if ((char)uStack_568 != '\0') goto LAB_0da635e3;
LAB_0da63623:
    uStack_528 = uStack_568;
    puStack_538 = puStack_578;
    uStack_530 = uStack_570;
    puStack_548 = puStack_588;
    puStack_540 = puStack_580;
    puStack_558 = puStack_598;
    puStack_550 = puStack_590;
    func_0x0dadcb00(auStack_668,puStack_598 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar9 = *(long *)(piVar13 + 0xc);
      while (lVar9 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar9 = *(long *)(piVar13 + 0xc);
      }
LAB_0da636df:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da636df;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    if ((DAT_0f6b2000 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6b2000), iVar7 != 0)) {
      func_0x0b29d570(0xf6b1fe8);
      func_0x0410844d(&DAT_0f6b2000);
    }
    uStack_530 = 0x160da1c300000001;
    puVar17 = puStack_558 + 0x18;
    auStack_668._0_8_ = func_0x0b29d5e0(puVar17);
    auStack_668._8_8_ = puVar17;
    FUN_0ed621a0(auStack_668,uStack_530._4_4_);
    auStack_668._0_2_ = 0x10;
    auStack_668._8_8_ = &puStack_550;
    uStack_658 = uStack_530._4_4_;
    iStack_650 = 0;
    uStack_64c = 0;
    uStack_64a = 0;
    uStack_649 = 0;
    uStack_648 = 0;
    uStack_647 = 0;
    uStack_646 = 0;
    uStack_645 = 0;
    uStack_644 = 0;
    uStack_643 = 0;
    uStack_642 = 0;
    uStack_641 = 0;
    uStack_640 = 0;
    cStack_63c = 0;
    uStack_63b = 0;
    uStack_639 = 0;
    uStack_638 = 0;
    uStack_637 = 0;
    uStack_632 = 0;
    uStack_631 = 0;
    uStack_630 = 0;
    uStack_62f = 0;
    uStack_62e = 0;
    uStack_62d = 0;
    uStack_62c = 0;
    uStack_62b = 0;
    uStack_62a = 0;
    uStack_629 = 0;
    auStack_628._0_8_ = 0x736b636f6c620c;
    auStack_610 = (undefined1  [16])0x0;
    lStack_600 = 0;
    uStack_5f8 = 0;
    uStack_5f4 = 0;
    lStack_5f0 = 0;
    lStack_5e8 = 0;
    uStack_5e0 = CONCAT44(uStack_5e0._4_4_,0x3f600000);
    func_0x048afb10(auStack_610,8);
    uStack_5b8 = 0;
    uStack_5b4 = 0;
    lStack_5b0 = 0;
    lStack_5c8 = 0;
    uStack_5c0 = 0;
    uStack_5be = 0;
    uStack_5bc = 0;
    auStack_5d8 = (undefined1  [16])0x0;
    uStack_5a8 = 0xff00;
    uStack_5a4 = uStack_5a4 & 0xffffff00;
    uStack_5a0 = uStack_5a0 & 0xffffff00;
    uStack_59c = 0;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f3f5028;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0._4_4_ << 0x20);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_0cbc9cc0;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &UNK_0cbc85f0;
    puStack_690 = &UNK_0dadceb0;
    puStack_688 = &UNK_0dadd090;
    uStack_680 = 0;
    auStack_678 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    uVar5 = auStack_668._8_8_;
    if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,_DAT_0f550a0c);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    *(undefined1 (*) [16])(plVar10 + 1) = (undefined1  [16])0x0;
    *plVar10 = (long)&UNK_0ef439d0;
    plStack_6c8 = plVar10 + 3;
    lVar9 = CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    lVar16 = CONCAT17(uStack_641,
                      CONCAT16(uStack_642,
                               CONCAT15(uStack_643,
                                        CONCAT14(uStack_644,
                                                 CONCAT13(uStack_645,
                                                          CONCAT12(uStack_646,
                                                                   CONCAT11(uStack_647,uStack_648)))
                                                ))));
    iStack_650 = 0;
    uStack_64c = 0;
    uStack_64a = 0;
    uStack_649 = 0;
    uStack_648 = 0;
    uStack_647 = 0;
    uStack_646 = 0;
    uStack_645 = 0;
    uStack_644 = 0;
    uStack_643 = 0;
    uStack_642 = 0;
    uStack_641 = 0;
    plVar10[3] = lVar9;
    plVar10[4] = lVar16;
    plVar10[7] = CONCAT17(uStack_629,
                          CONCAT16(uStack_62a,
                                   CONCAT15(uStack_62b,
                                            CONCAT14(uStack_62c,
                                                     CONCAT13(uStack_62d,
                                                              CONCAT12(uStack_62e,
                                                                       CONCAT11(uStack_62f,
                                                                                uStack_630)))))));
    plVar10[5] = CONCAT17(uStack_639,CONCAT25(uStack_63b,CONCAT14(cStack_63c,uStack_640)));
    plVar10[6] = CONCAT17(uStack_631,CONCAT16(uStack_632,CONCAT51(uStack_637,uStack_638)));
    uStack_640 = 0;
    cStack_63c = 0;
    uStack_63b = 0;
    uStack_639 = 0;
    uStack_638 = 0;
    uStack_637 = 0;
    uStack_632 = 0;
    uStack_631 = 0;
    uStack_630 = 0;
    uStack_62f = 0;
    uStack_62e = 0;
    uStack_62d = 0;
    uStack_62c = 0;
    uStack_62b = 0;
    uStack_62a = 0;
    uStack_629 = 0;
    plVar10[10] = lStack_618;
    plVar10[8] = auStack_628._0_8_;
    plVar10[9] = auStack_628._8_8_;
    auStack_628 = (undefined1  [16])0x0;
    lStack_618 = 0;
    plVar10[0xb] = auStack_610._0_8_;
    plVar10[0xc] = auStack_610._8_8_;
    plVar10[0xd] = lStack_600;
    auStack_610 = (undefined1  [16])0x0;
    lStack_600 = 0;
    plVar10[0xe] = CONCAT44(uStack_5f4,uStack_5f8);
    plVar10[0xf] = lStack_5f0;
    plVar10[0x10] = lStack_5e8;
    uStack_5f8 = 0;
    uStack_5f4 = 0;
    lStack_5f0 = 0;
    lStack_5e8 = 0;
    *(undefined4 *)(plVar10 + 0x11) = (undefined4)uStack_5e0;
    plVar10[0x12] = auStack_5d8._0_8_;
    plVar10[0x13] = auStack_5d8._8_8_;
    plVar10[0x14] = lStack_5c8;
    auStack_5d8 = (undefined1  [16])0x0;
    lStack_5c8 = 0;
    plVar10[0x17] = lStack_5b0;
    plVar10[0x15] = CONCAT44(uStack_5bc,CONCAT22(uStack_5be,uStack_5c0));
    plVar10[0x16] = CONCAT44(uStack_5b4,uStack_5b8);
    uStack_5c0 = 0;
    uStack_5be = 0;
    uStack_5bc = 0;
    uStack_5b8 = 0;
    uStack_5b4 = 0;
    lStack_5b0 = 0;
    *(ulong *)((long)plVar10 + 0xc5) = CONCAT17(uStack_59c,CONCAT43(uStack_5a0,uStack_5a4._1_3_));
    plVar10[0x18] = CONCAT44(uStack_5a4,CONCAT22(uStack_5a6,uStack_5a8));
    auStack_518 = (undefined1  [16])0x0;
    uStack_6c0 = plVar10;
    FUN_048afd20(uVar5,&uStack_6d0);
    plVar10 = uStack_6c0;
    if (uStack_6c0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_6c0 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*uStack_6c0 + 0x10))(uStack_6c0);
        FUN_0412c2d0(plVar10);
      }
    }
    uVar6 = auStack_518._8_8_;
    if ((long *)auStack_518._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_518._8_8_ + 8);
      lVar9 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*(long *)auStack_518._8_8_ + 0x10))(auStack_518._8_8_);
        FUN_0412c2d0(uVar6);
      }
    }
    lVar9 = *(long *)(uVar5 + 0x10);
    iVar7 = *(int *)(uVar5 + 0x1c);
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(lVar9 + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != *(int *)(uVar5 + 0x18)) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      for (; *(long *)(piVar13 + 0xc) != *(long *)(uVar5 + 8); piVar13 = *(int **)(piVar13 + 0xe)) {
      }
LAB_0da63c6a:
      piVar13[4] = piVar13[4] | auStack_668._0_4_ << 0x10;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(lVar9 + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != *(int *)(uVar5 + 0x18)) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da63c6a;
      }
      if (iVar7 == 0) {
        *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) | auStack_668._0_4_ << 0x10;
      }
    }
    func_0x048b0bc0(&iStack_650);
    lVar9 = func_0x0b29b960(lVar11);
    if (*(int *)(lVar9 + 0x60) == -0x2b3da790) goto LAB_0da63c83;
LAB_0da63cb0:
    puVar17 = &DAT_013ecdea;
    uVar15 = 0x22;
  }
  else {
    func_0x0dadc5c0(&puStack_598,param_1,&DAT_0126572c,0x2a);
    if ((char)uStack_568 == '\0') goto LAB_0da63623;
LAB_0da635e3:
    lVar9 = func_0x0b29b960(lVar11);
    if (*(int *)(lVar9 + 0x60) != -0x2b3da790) goto LAB_0da63cb0;
LAB_0da63c83:
    lVar9 = *(long *)(lVar9 + 0x68);
    if (lVar9 == 0) goto LAB_0da63cb0;
    bVar20 = (*(byte *)(lVar9 + 8) & 1) != 0;
    puVar17 = (undefined *)(lVar9 + 9);
    if (bVar20) {
      puVar17 = *(undefined **)(lVar9 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar9 + 0x10);
    }
  }
  func_0x0dadedc0(auStack_668,param_1,puVar17,uVar15);
  lVar9 = func_0x0b29e440(lVar11);
  if ((*(int *)(lVar9 + 0x60) == -0x2b3da790) && (lVar9 = *(long *)(lVar9 + 0x68), lVar9 != 0)) {
    bVar20 = (*(byte *)(lVar9 + 8) & 1) != 0;
    puVar17 = (undefined *)(lVar9 + 9);
    if (bVar20) {
      puVar17 = *(undefined **)(lVar9 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar9 + 0x10);
    }
  }
  else {
    puVar17 = &DAT_0131867d;
    uVar15 = 0x19;
  }
  func_0x0d929a70(auStack_668,param_1,puVar17,uVar15,0);
  lVar9 = func_0x0b29f1a0(lVar11);
  if ((*(int *)(lVar9 + 0x60) == -0x2b3da790) && (lVar9 = *(long *)(lVar9 + 0x68), lVar9 != 0)) {
    bVar20 = (*(byte *)(lVar9 + 8) & 1) != 0;
    puVar17 = (undefined *)(lVar9 + 9);
    if (bVar20) {
      puVar17 = *(undefined **)(lVar9 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar9 + 0x10);
    }
  }
  else {
    puVar17 = &DAT_011abefa;
    uVar15 = 0x1d;
  }
  func_0x0d92a3f0(auStack_668,param_1,puVar17,uVar15,0);
  func_0x0d9084a0(param_1);
  lVar11 = func_0x0daab720(lVar11);
  if ((*(int *)(lVar11 + 0x60) == -0x2b3da790) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0))
  {
    bVar20 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar9 = lVar11 + 9;
    if (bVar20) {
      lVar9 = *(long *)(lVar11 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0daabf00(&lStack_4e0,param_1,lVar9,uVar15);
  }
  else {
    func_0x0daabf00(&lStack_4e0,param_1,&UNK_01425a49,0x1c);
  }
  if (cStack_4b0 != '\0') {
    return;
  }
  lVar9 = lStack_4e0 + 0x18;
  lVar11 = func_0x0daab720(lVar9);
  for (pbVar14 = *(byte **)(lStack_4e0 + 0x50); pbVar14 != *(byte **)(lStack_4e0 + 0x58);
      pbVar14 = pbVar14 + 0x38) {
    bVar3 = *pbVar14;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x1d) goto LAB_0da63eaa;
    }
    else if (*(long *)(pbVar14 + 8) == 0x1d) {
LAB_0da63eaa:
      if ((bVar3 & 1) == 0) {
        pbVar18 = pbVar14 + 1;
      }
      else {
        pbVar18 = *(byte **)(pbVar14 + 0x10);
      }
      auVar21[0] = -(*pbVar18 == DAT_014e1c20);
      auVar21[1] = -(pbVar18[1] == DAT_014e1c20._1_1_);
      auVar21[2] = -(pbVar18[2] == DAT_014e1c20._2_1_);
      auVar21[3] = -(pbVar18[3] == DAT_014e1c20._3_1_);
      auVar21[4] = -(pbVar18[4] == DAT_014e1c20._4_1_);
      auVar21[5] = -(pbVar18[5] == DAT_014e1c20._5_1_);
      auVar21[6] = -(pbVar18[6] == DAT_014e1c20._6_1_);
      auVar21[7] = -(pbVar18[7] == DAT_014e1c20._7_1_);
      auVar21[8] = -(pbVar18[8] == DAT_014e1c20._8_1_);
      auVar21[9] = -(pbVar18[9] == DAT_014e1c20._9_1_);
      auVar21[10] = -(pbVar18[10] == DAT_014e1c20._10_1_);
      auVar21[0xb] = -(pbVar18[0xb] == DAT_014e1c20._11_1_);
      auVar21[0xc] = -(pbVar18[0xc] == DAT_014e1c20._12_1_);
      auVar21[0xd] = -(pbVar18[0xd] == DAT_014e1c20._13_1_);
      auVar21[0xe] = -(pbVar18[0xe] == DAT_014e1c20._14_1_);
      auVar21[0xf] = -(pbVar18[0xf] == DAT_014e1c20._15_1_);
      auVar22[0] = -(pbVar18[0xd] == DAT_014e80e0);
      auVar22[1] = -(pbVar18[0xe] == DAT_014e80e0._1_1_);
      auVar22[2] = -(pbVar18[0xf] == DAT_014e80e0._2_1_);
      auVar22[3] = -(pbVar18[0x10] == DAT_014e80e0._3_1_);
      auVar22[4] = -(pbVar18[0x11] == DAT_014e80e0._4_1_);
      auVar22[5] = -(pbVar18[0x12] == DAT_014e80e0._5_1_);
      auVar22[6] = -(pbVar18[0x13] == DAT_014e80e0._6_1_);
      auVar22[7] = -(pbVar18[0x14] == DAT_014e80e0._7_1_);
      auVar22[8] = -(pbVar18[0x15] == DAT_014e80e0._8_1_);
      auVar22[9] = -(pbVar18[0x16] == DAT_014e80e0._9_1_);
      auVar22[10] = -(pbVar18[0x17] == DAT_014e80e0._10_1_);
      auVar22[0xb] = -(pbVar18[0x18] == DAT_014e80e0._11_1_);
      auVar22[0xc] = -(pbVar18[0x19] == DAT_014e80e0._12_1_);
      auVar22[0xd] = -(pbVar18[0x1a] == DAT_014e80e0._13_1_);
      auVar22[0xe] = -(pbVar18[0x1b] == DAT_014e80e0._14_1_);
      auVar22[0xf] = -(pbVar18[0x1c] == DAT_014e80e0._15_1_);
      auVar22 = auVar22 & auVar21;
      if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar14 == *(byte **)(lStack_4e0 + 0x58)) {
LAB_0da63ed9:
    if ((int)uStack_4b8 == 0) {
      if ((*(int *)(lVar11 + 0x60) != -0x2b3da790) || (*(long *)(lVar11 + 0x68) == 0))
      goto LAB_0da63f56;
      lVar11 = *(long *)(lVar11 + 0x68) + 0x38;
    }
    else {
      lVar11 = func_0x048b0c90(lVar9,lVar11,uStack_4b8._4_4_,1);
      if (lVar11 == 0) {
        auStack_668 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_668);
        lVar11 = auStack_668._0_8_;
        if (auStack_668._0_8_ == 0) goto LAB_0da63f56;
      }
      if ((*(int *)(lVar11 + 0x50) == -0x45dcb126) && (*(long *)(lVar11 + 0x58) != 0)) {
        lVar11 = *(long *)(lVar11 + 0x58) + 0x40;
      }
      else {
LAB_0da63f56:
        lVar11 = 0;
      }
    }
    uStack_6d0 = 0;
    uStack_6c0 = (long *)&UNK_05ead3e0;
    pcVar19 = (code *)&UNK_05ead970;
    pcStack_6b8 = (code *)&UNK_05ead970;
    uStack_6b0 = CONCAT35(uStack_6b0._5_3_,0x17fe5f144);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar12 = 0x10032001a0001;
    puVar12[1] = &UNK_01254d89;
    puVar12[2] = &UNK_01254d89;
    iStack_650 = 0x5ead3e0;
    uStack_64c = 0;
    uStack_64a = 0;
    uStack_649 = 0;
    uStack_648 = 0x70;
    uStack_647 = 0xd9;
    uStack_646 = 0xea;
    uStack_645 = 5;
    uStack_644 = 0;
    uStack_643 = 0;
    uStack_642 = 0;
    uStack_641 = 0;
    uStack_640 = 0x7fe5f144;
    cStack_63c = '\x01';
    uStack_6d0 = 0;
    auStack_668._8_8_ = puVar12;
    auStack_668._0_8_ = &UNK_0daac7f0;
    puStack_588 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_588 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar5 = _UNK_014590aa;
    puStack_598 = (undefined *)0x21;
    puStack_590 = (undefined *)0x1d;
    *(ulong *)((long)puStack_588 + 0xd) = CONCAT53(_UNK_014590a5,_DAT_014590a2);
    *(undefined8 *)((long)puStack_588 + 0x15) = uVar5;
    uVar5 = CONCAT35(_DAT_014590a2,_UNK_0145909d);
    *puStack_588 = _DAT_01459095;
    puStack_588[1] = uVar5;
    *(undefined1 *)((long)puStack_588 + 0x1d) = 0;
    lVar11 = FUN_048b5060(lVar11,&puStack_598);
    *(undefined **)(lVar11 + 0x20) = &UNK_0daac7f0;
    if ((undefined1 *)(lVar11 + 0x20) != auStack_668) {
      puVar12 = (undefined8 *)(lVar11 + 0x28);
      if (*(code **)(lVar11 + 0x40) == (code *)0x0) {
LAB_0da640e3:
        uVar5 = auStack_668._8_8_;
        auStack_668._8_8_ = 0;
        *puVar12 = uVar5;
      }
      else {
        (**(code **)(lVar11 + 0x40))(puVar12);
        if (cStack_63c != '\0') {
          if (cStack_63c != '\x02') goto LAB_0da640e3;
          (*(code *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650))))
                    (5,auStack_668 + 8,puVar12);
        }
      }
      pcVar19 = (code *)CONCAT17(uStack_641,
                                 CONCAT16(uStack_642,
                                          CONCAT15(uStack_643,
                                                   CONCAT14(uStack_644,
                                                            CONCAT13(uStack_645,
                                                                     CONCAT12(uStack_646,
                                                                              CONCAT11(uStack_647,
                                                                                       uStack_648)))
                                                           ))));
      *(ulong *)(lVar11 + 0x38) =
           CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
      *(ulong *)(lVar11 + 0x40) =
           CONCAT17(uStack_641,
                    CONCAT16(uStack_642,
                             CONCAT15(uStack_643,
                                      CONCAT14(uStack_644,
                                               CONCAT13(uStack_645,
                                                        CONCAT12(uStack_646,
                                                                 CONCAT11(uStack_647,uStack_648)))))
                            ));
      *(undefined4 *)(lVar11 + 0x48) = uStack_640;
      *(char *)(lVar11 + 0x4c) = cStack_63c;
    }
    if (((ulong)puStack_598 & 1) != 0) {
      func_0x0412a280(puStack_588,(ulong)puStack_598 & 0xfffffffffffffffe);
      pcVar19 = (code *)CONCAT17(uStack_641,
                                 CONCAT16(uStack_642,
                                          CONCAT15(uStack_643,
                                                   CONCAT14(uStack_644,
                                                            CONCAT13(uStack_645,
                                                                     CONCAT12(uStack_646,
                                                                              CONCAT11(uStack_647,
                                                                                       uStack_648)))
                                                           ))));
    }
    if (pcVar19 != (code *)0x0) {
      (*pcVar19)(auStack_668 + 8);
    }
    if (pcStack_6b8 != (code *)0x0) {
      (*pcStack_6b8)(&uStack_6d0);
    }
  }
  else {
    iVar7 = *(int *)(pbVar14 + 0x1c);
    if ((DAT_0f561458 == '\0') && (iVar8 = func_0x04108328(&DAT_0f561458), iVar8 != 0)) {
      func_0x05eada10(0xf561440);
      func_0x0410844d(&DAT_0f561458);
    }
    if (iVar7 == _DAT_0f561444) goto LAB_0da63ed9;
  }
  uStack_637 = (undefined5)uStack_4af;
  uStack_632 = (undefined1)((uint7)uStack_4af >> 0x28);
  uStack_631 = (undefined1)((uint7)uStack_4af >> 0x30);
  uStack_648 = SUB81(puStack_4c0,0);
  uStack_647 = (undefined1)((ulong)puStack_4c0 >> 8);
  uStack_646 = (undefined1)((ulong)puStack_4c0 >> 0x10);
  uStack_645 = (undefined1)((ulong)puStack_4c0 >> 0x18);
  uStack_644 = (undefined1)((ulong)puStack_4c0 >> 0x20);
  uStack_643 = (undefined1)((ulong)puStack_4c0 >> 0x28);
  uStack_642 = (undefined1)((ulong)puStack_4c0 >> 0x30);
  uStack_641 = (undefined1)((ulong)puStack_4c0 >> 0x38);
  uStack_640 = (undefined4)uStack_4b8;
  cStack_63c = (char)((ulong)uStack_4b8 >> 0x20);
  uStack_63b = (undefined2)((ulong)uStack_4b8 >> 0x28);
  uStack_639 = (undefined1)((ulong)uStack_4b8 >> 0x38);
  uStack_658 = SUB84(puStack_4d0,0);
  uStack_654 = (undefined4)((ulong)puStack_4d0 >> 0x20);
  iStack_650 = (int)puStack_4c8;
  uStack_64c = (undefined2)((ulong)puStack_4c8 >> 0x20);
  uStack_64a = (undefined1)((ulong)puStack_4c8 >> 0x30);
  uStack_649 = (undefined1)((ulong)puStack_4c8 >> 0x38);
  if ((DAT_0f7332a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7332a8), iVar7 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  if ((DAT_0f7327d8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7327d8), iVar7 != 0)) {
    func_0x0daac8f0(0xf7327c0);
    func_0x0410844d(&DAT_0f7327d8);
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,_DAT_0f7327c4);
  plStack_6c8 = (long *)&SUB_0daac800;
  uStack_6c0 = (long *)&UNK_0daac8e0;
  func_0x05da1460(auStack_668 + 8);
  uStack_4b8 = 0x23dbfdb200000003;
  func_0x0daab720(lStack_4e0 + 0x18);
  auStack_668._0_8_ = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if ((undefined8 *)auStack_668._0_8_ == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)auStack_668._0_8_ = &UNK_0f491358;
  auStack_668._8_8_ = 0;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar5 = _UNK_0126574e;
  uStack_648 = SUB81(puVar12,0);
  uStack_647 = (undefined1)((ulong)puVar12 >> 8);
  uStack_646 = (undefined1)((ulong)puVar12 >> 0x10);
  uStack_645 = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_644 = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_643 = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_642 = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_641 = (undefined1)((ulong)puVar12 >> 0x38);
  uStack_658 = 0x31;
  uStack_654 = 0;
  iStack_650 = 0x2a;
  uStack_64c = 0;
  uStack_64a = 0;
  uStack_649 = 0;
  *(ulong *)((long)puVar12 + 0x1a) = CONCAT26(_UNK_0126574c,_DAT_01265746);
  *(undefined8 *)((long)puVar12 + 0x22) = uVar5;
  uVar5 = CONCAT62(_DAT_01265746,_UNK_01265744);
  puVar12[2] = _DAT_0126573c;
  puVar12[3] = uVar5;
  uVar5 = _UNK_01265734;
  *puVar12 = _DAT_0126572c;
  puVar12[1] = uVar5;
  *(undefined1 *)((long)puVar12 + 0x2a) = 0;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar5 = _UNK_0126574e;
  uStack_630 = SUB81(puVar12,0);
  uStack_62f = (undefined1)((ulong)puVar12 >> 8);
  uStack_62e = (undefined1)((ulong)puVar12 >> 0x10);
  uStack_62d = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_62c = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_62b = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_62a = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_629 = (undefined1)((ulong)puVar12 >> 0x38);
  uStack_640 = 0x31;
  cStack_63c = 0;
  uStack_63b = 0;
  uStack_639 = 0;
  uStack_638 = 0x2a;
  uStack_637 = 0;
  uStack_632 = 0;
  uStack_631 = 0;
  *(ulong *)((long)puVar12 + 0x1a) = CONCAT26(_UNK_0126574c,_DAT_01265746);
  *(undefined8 *)((long)puVar12 + 0x22) = uVar5;
  uVar5 = CONCAT62(_DAT_01265746,_UNK_01265744);
  puVar12[2] = _DAT_0126573c;
  puVar12[3] = uVar5;
  uVar5 = _UNK_01265734;
  *puVar12 = _DAT_0126572c;
  puVar12[1] = uVar5;
  *(undefined1 *)((long)puVar12 + 0x2a) = 0;
  lStack_600 = 0;
  lStack_618 = 0;
  auStack_610 = ZEXT816(0);
  auStack_628 = ZEXT816(0);
  uStack_5f8 = 0x3f600000;
  func_0x048afb10(auStack_628,8);
  lStack_5c8 = 0;
  uStack_5e0 = 0;
  auStack_5d8 = ZEXT816(0);
  lStack_5f0 = 0;
  lStack_5e8 = 0;
  uStack_5c0 = 0xff00;
  uStack_5bc = uStack_5bc & 0xffffff00;
  uStack_5b8 = uStack_5b8 & 0xffffff00;
  uStack_5b4 = uStack_5b4 & 0xffffff00;
  if ((DAT_0f7332a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7332a8), iVar7 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_4b8._4_4_);
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
  pcStack_6b8 = (code *)0x2;
  uStack_6b0 = 1;
  puStack_6a8 = &UNK_0daad490;
  puStack_6a0 = &UNK_07d98660;
  puStack_698 = &SUB_0b29d5e0;
  puStack_690 = &UNK_0daad4b0;
  puStack_688 = &UNK_0daad730;
  uStack_680 = 0;
  auStack_678 = ZEXT816(0);
  func_0x048b05a0(&puStack_4d8,&uStack_6d0);
  uVar5 = auStack_678._8_8_;
  if ((long *)auStack_678._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_678._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  puStack_588 = (undefined8 *)puStack_4c8;
  puStack_580 = puStack_4c0;
  puStack_598 = puStack_4d8;
  puStack_590 = puStack_4d0;
  func_0x0daacff0(&uStack_6d0,&puStack_598,auStack_668);
  func_0x048b0bc0(auStack_668);
  uStack_4b8 = 0x9665931b00000003;
  func_0x0daab720(lStack_4e0 + 0x18);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f4913e0;
  auStack_668._8_8_ = 0;
  auStack_668._0_8_ = puVar12;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar5 = _UNK_013ece02;
  uStack_648 = SUB81(puVar12,0);
  uStack_647 = (undefined1)((ulong)puVar12 >> 8);
  uStack_646 = (undefined1)((ulong)puVar12 >> 0x10);
  uStack_645 = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_644 = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_643 = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_642 = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_641 = (undefined1)((ulong)puVar12 >> 0x38);
  uStack_658 = 0x29;
  uStack_654 = 0;
  iStack_650 = 0x22;
  uStack_64c = 0;
  uStack_64a = 0;
  uStack_649 = 0;
  puVar12[2] = _DAT_013ecdfa;
  puVar12[3] = uVar5;
  uVar5 = _UNK_013ecdf2;
  *puVar12 = _DAT_013ecdea;
  puVar12[1] = uVar5;
  *(undefined2 *)(puVar12 + 4) = 0x776f;
  *(undefined1 *)((long)puVar12 + 0x22) = 0;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar5 = _UNK_013ece02;
  uStack_630 = SUB81(puVar12,0);
  uStack_62f = (undefined1)((ulong)puVar12 >> 8);
  uStack_62e = (undefined1)((ulong)puVar12 >> 0x10);
  uStack_62d = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_62c = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_62b = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_62a = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_629 = (undefined1)((ulong)puVar12 >> 0x38);
  uStack_640 = 0x29;
  cStack_63c = 0;
  uStack_63b = 0;
  uStack_639 = 0;
  uStack_638 = 0x22;
  uStack_637 = 0;
  uStack_632 = 0;
  uStack_631 = 0;
  puVar12[2] = _DAT_013ecdfa;
  puVar12[3] = uVar5;
  uVar5 = _UNK_013ecdf2;
  *puVar12 = _DAT_013ecdea;
  puVar12[1] = uVar5;
  *(undefined2 *)(puVar12 + 4) = 0x776f;
  *(undefined1 *)((long)puVar12 + 0x22) = 0;
  lStack_600 = 0;
  lStack_618 = 0;
  auStack_610 = ZEXT816(0);
  auStack_628 = ZEXT816(0);
  uStack_5f8 = 0x3f600000;
  func_0x048afb10(auStack_628,8);
  lStack_5c8 = 0;
  uStack_5e0 = 0;
  auStack_5d8 = ZEXT816(0);
  lStack_5f0 = 0;
  lStack_5e8 = 0;
  uStack_5c0 = 0xff00;
  uStack_5bc = uStack_5bc & 0xffffff00;
  uStack_5b8 = uStack_5b8 & 0xffffff00;
  uStack_5b4 = uStack_5b4 & 0xffffff00;
  if ((DAT_0f7332a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7332a8), iVar7 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_4b8._4_4_);
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
  pcStack_6b8 = (code *)0x2;
  uStack_6b0 = 1;
  puStack_6a8 = &UNK_0daadea0;
  puStack_6a0 = &UNK_07d98660;
  puStack_698 = &SUB_0b29b960;
  puStack_690 = &UNK_0daadec0;
  puStack_688 = &UNK_0daae140;
  uStack_680 = 0;
  auStack_678 = ZEXT816(0);
  func_0x048b05a0(&puStack_4d8,&uStack_6d0);
  uVar5 = auStack_678._8_8_;
  if ((long *)auStack_678._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_678._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  puStack_588 = (undefined8 *)puStack_4c8;
  puStack_580 = puStack_4c0;
  puStack_598 = puStack_4d8;
  puStack_590 = puStack_4d0;
  func_0x0daacff0(&uStack_6d0,&puStack_598,auStack_668);
  func_0x048b0bc0(auStack_668);
  uStack_4b8 = 0x6d1e4e1600000003;
  func_0x0daab720(lStack_4e0 + 0x18);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f491468;
  auStack_668._8_8_ = 0;
  auStack_668._0_8_ = puVar12;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar5 = _UNK_0131868e;
  uStack_648 = SUB81(puVar12,0);
  uStack_647 = (undefined1)((ulong)puVar12 >> 8);
  uStack_646 = (undefined1)((ulong)puVar12 >> 0x10);
  uStack_645 = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_644 = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_643 = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_642 = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_641 = (undefined1)((ulong)puVar12 >> 0x38);
  uStack_658 = 0x21;
  uStack_654 = 0;
  iStack_650 = 0x19;
  uStack_64c = 0;
  uStack_64a = 0;
  uStack_649 = 0;
  *(ulong *)((long)puVar12 + 9) = CONCAT17(UNK_0131868d,_DAT_01318686);
  *(undefined8 *)((long)puVar12 + 0x11) = uVar5;
  uVar5 = CONCAT71(_DAT_01318686,UNK_01318685);
  *puVar12 = _DAT_0131867d;
  puVar12[1] = uVar5;
  *(undefined1 *)((long)puVar12 + 0x19) = 0;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar5 = _UNK_0131868e;
  uStack_630 = SUB81(puVar12,0);
  uStack_62f = (undefined1)((ulong)puVar12 >> 8);
  uStack_62e = (undefined1)((ulong)puVar12 >> 0x10);
  uStack_62d = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_62c = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_62b = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_62a = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_629 = (undefined1)((ulong)puVar12 >> 0x38);
  uStack_640 = 0x21;
  cStack_63c = 0;
  uStack_63b = 0;
  uStack_639 = 0;
  uStack_638 = 0x19;
  uStack_637 = 0;
  uStack_632 = 0;
  uStack_631 = 0;
  *(ulong *)((long)puVar12 + 9) = CONCAT17(UNK_0131868d,_DAT_01318686);
  *(undefined8 *)((long)puVar12 + 0x11) = uVar5;
  uVar5 = CONCAT71(_DAT_01318686,UNK_01318685);
  *puVar12 = _DAT_0131867d;
  puVar12[1] = uVar5;
  *(undefined1 *)((long)puVar12 + 0x19) = 0;
  lStack_600 = 0;
  lStack_618 = 0;
  auStack_610 = ZEXT816(0);
  auStack_628 = ZEXT816(0);
  uStack_5f8 = 0x3f600000;
  func_0x048afb10(auStack_628,8);
  lStack_5c8 = 0;
  uStack_5e0 = 0;
  auStack_5d8 = ZEXT816(0);
  lStack_5f0 = 0;
  lStack_5e8 = 0;
  uStack_5c0 = 0xff00;
  uStack_5bc = uStack_5bc & 0xffffff00;
  uStack_5b8 = uStack_5b8 & 0xffffff00;
  uStack_5b4 = uStack_5b4 & 0xffffff00;
  if ((DAT_0f7332a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7332a8), iVar7 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_4b8._4_4_);
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
  pcStack_6b8 = (code *)0x2;
  uStack_6b0 = 1;
  puStack_6a8 = &UNK_0daae8b0;
  puStack_6a0 = &UNK_07d98660;
  puStack_698 = &SUB_0b29e440;
  puStack_690 = &UNK_0daae8d0;
  puStack_688 = &UNK_0daaeb50;
  uStack_680 = 0;
  auStack_678 = ZEXT816(0);
  func_0x048b05a0(&puStack_4d8,&uStack_6d0);
  uVar5 = auStack_678._8_8_;
  if ((long *)auStack_678._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_678._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  puStack_588 = (undefined8 *)puStack_4c8;
  puStack_580 = puStack_4c0;
  puStack_598 = puStack_4d8;
  puStack_590 = puStack_4d0;
  func_0x0daacff0(&uStack_6d0,&puStack_598,auStack_668);
  func_0x048b0bc0(auStack_668);
  uStack_4b8 = 0x865ff82300000003;
  func_0x0daab720(lStack_4e0 + 0x18);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f4914f0;
  auStack_668._8_8_ = 0;
  auStack_668._0_8_ = puVar12;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar5 = _UNK_011abf0f;
  uStack_648 = SUB81(puVar12,0);
  uStack_647 = (undefined1)((ulong)puVar12 >> 8);
  uStack_646 = (undefined1)((ulong)puVar12 >> 0x10);
  uStack_645 = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_644 = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_643 = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_642 = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_641 = (undefined1)((ulong)puVar12 >> 0x38);
  uStack_658 = 0x21;
  uStack_654 = 0;
  iStack_650 = 0x1d;
  uStack_64c = 0;
  uStack_64a = 0;
  uStack_649 = 0;
  *(ulong *)((long)puVar12 + 0xd) = CONCAT53(_UNK_011abf0a,_DAT_011abf07);
  *(undefined8 *)((long)puVar12 + 0x15) = uVar5;
  uVar5 = CONCAT35(_DAT_011abf07,_UNK_011abf02);
  *puVar12 = _DAT_011abefa;
  puVar12[1] = uVar5;
  *(undefined1 *)((long)puVar12 + 0x1d) = 0;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar5 = _UNK_011abf0f;
  uStack_630 = SUB81(puVar12,0);
  uStack_62f = (undefined1)((ulong)puVar12 >> 8);
  uStack_62e = (undefined1)((ulong)puVar12 >> 0x10);
  uStack_62d = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_62c = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_62b = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_62a = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_629 = (undefined1)((ulong)puVar12 >> 0x38);
  uStack_640 = 0x21;
  cStack_63c = 0;
  uStack_63b = 0;
  uStack_639 = 0;
  uStack_638 = 0x1d;
  uStack_637 = 0;
  uStack_632 = 0;
  uStack_631 = 0;
  *(ulong *)((long)puVar12 + 0xd) = CONCAT53(_UNK_011abf0a,_DAT_011abf07);
  *(undefined8 *)((long)puVar12 + 0x15) = uVar5;
  uVar5 = CONCAT35(_DAT_011abf07,_UNK_011abf02);
  *puVar12 = _DAT_011abefa;
  puVar12[1] = uVar5;
  *(undefined1 *)((long)puVar12 + 0x1d) = 0;
  lStack_600 = 0;
  lStack_618 = 0;
  auStack_610 = ZEXT816(0);
  auStack_628 = ZEXT816(0);
  uStack_5f8 = 0x3f600000;
  func_0x048afb10(auStack_628,8);
  lStack_5c8 = 0;
  uStack_5e0 = 0;
  auStack_5d8 = ZEXT816(0);
  lStack_5f0 = 0;
  lStack_5e8 = 0;
  uStack_5c0 = 0xff00;
  uStack_5bc = uStack_5bc & 0xffffff00;
  uStack_5b8 = uStack_5b8 & 0xffffff00;
  uStack_5b4 = uStack_5b4 & 0xffffff00;
  if ((DAT_0f7332a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7332a8), iVar7 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_4b8._4_4_);
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
  pcStack_6b8 = (code *)0x2;
  uStack_6b0 = 1;
  puStack_6a8 = &UNK_0daaf2c0;
  puStack_6a0 = &UNK_07d98660;
  puStack_698 = &SUB_0b29f1a0;
  puStack_690 = &UNK_0daaf2e0;
  puStack_688 = &UNK_0daaf560;
  uStack_680 = 0;
  auStack_678 = ZEXT816(0);
  func_0x048b05a0(&puStack_4d8,&uStack_6d0);
  uVar5 = auStack_678._8_8_;
  if ((long *)auStack_678._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_678._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  puStack_588 = (undefined8 *)puStack_4c8;
  puStack_580 = puStack_4c0;
  puStack_598 = puStack_4d8;
  puStack_590 = puStack_4d0;
  func_0x0daacff0(&uStack_6d0,&puStack_598,auStack_668);
  func_0x048b0bc0(auStack_668);
  uStack_4b8 = 0xd049c3bc00000003;
  func_0x0daab720(lStack_4e0 + 0x18);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f491578;
  auStack_668._8_8_ = 0;
  auStack_668._0_8_ = puVar12;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar5 = _UNK_012fe1fe;
  uStack_648 = SUB81(puVar12,0);
  uStack_647 = (undefined1)((ulong)puVar12 >> 8);
  uStack_646 = (undefined1)((ulong)puVar12 >> 0x10);
  uStack_645 = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_644 = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_643 = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_642 = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_641 = (undefined1)((ulong)puVar12 >> 0x38);
  uStack_658 = 0x29;
  uStack_654 = 0;
  iStack_650 = 0x24;
  uStack_64c = 0;
  uStack_64a = 0;
  uStack_649 = 0;
  puVar12[2] = _DAT_012fe1f6;
  puVar12[3] = uVar5;
  uVar5 = _UNK_012fe1ee;
  *puVar12 = _DAT_012fe1e6;
  puVar12[1] = uVar5;
  *(undefined4 *)(puVar12 + 4) = 0x73646e75;
  *(undefined1 *)((long)puVar12 + 0x24) = 0;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar5 = _UNK_012fe1fe;
  uStack_630 = SUB81(puVar12,0);
  uStack_62f = (undefined1)((ulong)puVar12 >> 8);
  uStack_62e = (undefined1)((ulong)puVar12 >> 0x10);
  uStack_62d = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_62c = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_62b = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_62a = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_629 = (undefined1)((ulong)puVar12 >> 0x38);
  uStack_640 = 0x29;
  cStack_63c = 0;
  uStack_63b = 0;
  uStack_639 = 0;
  uStack_638 = 0x24;
  uStack_637 = 0;
  uStack_632 = 0;
  uStack_631 = 0;
  puVar12[2] = _DAT_012fe1f6;
  puVar12[3] = uVar5;
  uVar5 = _UNK_012fe1ee;
  *puVar12 = _DAT_012fe1e6;
  puVar12[1] = uVar5;
  *(undefined4 *)(puVar12 + 4) = 0x73646e75;
  *(undefined1 *)((long)puVar12 + 0x24) = 0;
  lStack_600 = 0;
  lStack_618 = 0;
  auStack_610 = ZEXT816(0);
  auStack_628 = ZEXT816(0);
  uStack_5f8 = 0x3f600000;
  func_0x048afb10(auStack_628,8);
  lStack_5c8 = 0;
  uStack_5e0 = 0;
  auStack_5d8 = ZEXT816(0);
  lStack_5f0 = 0;
  lStack_5e8 = 0;
  uStack_5c0 = 0xff00;
  uStack_5bc = uStack_5bc & 0xffffff00;
  uStack_5b8 = uStack_5b8 & 0xffffff00;
  uStack_5b4 = uStack_5b4 & 0xffffff00;
  if ((DAT_0f7332a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7332a8), iVar7 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_4b8._4_4_);
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
  pcStack_6b8 = (code *)0x2;
  uStack_6b0 = 1;
  puStack_6a8 = &UNK_0daafcd0;
  puStack_6a0 = &UNK_07d98660;
  puStack_698 = &SUB_0b29c6c0;
  puStack_690 = &UNK_0daafcf0;
  puStack_688 = &UNK_0daaff70;
  uStack_680 = 0;
  auStack_678 = ZEXT816(0);
  func_0x048b05a0(&puStack_4d8,&uStack_6d0);
  uVar5 = auStack_678._8_8_;
  if ((long *)auStack_678._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_678._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  puStack_588 = (undefined8 *)puStack_4c8;
  puStack_580 = puStack_4c0;
  puStack_598 = puStack_4d8;
  puStack_590 = puStack_4d0;
  func_0x0daacff0(&uStack_6d0,&puStack_598,auStack_668);
  func_0x048b0bc0(auStack_668);
  func_0x0da6f580(auStack_668,&lStack_4e0,&DAT_012fe1e6,0x24);
  func_0x0d9083b0(param_1);
  func_0x0e4db7a0(param_1);
  if ((DAT_0f732928 == '\0') && (iVar7 = func_0x04108328(&DAT_0f732928), iVar7 != 0)) {
    func_0x0dab1b40();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7328a8,0xf53dab8);
    func_0x0410844d(&DAT_0f732928);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7328a8 + 4)) * 8);
  do {
    lVar11 = *plVar10;
    if (lVar11 == -1) goto LAB_0da64fe0;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f7328a8 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0da64fe0:
    puVar17 = &DAT_0f7328a8;
    if (iRam000000000f732908 != -0x2b3da790) goto LAB_0da6504d;
LAB_0da6500b:
    lVar11 = *(long *)(puVar17 + 0x68);
    if (lVar11 == 0) goto LAB_0da6504d;
    bVar20 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar9 = lVar11 + 9;
    if (bVar20) {
      lVar9 = *(long *)(lVar11 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0dad4250(auStack_518,param_1,lVar9,uVar15);
  }
  else {
    puVar17 = (undefined *)plVar10[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0da6500b;
LAB_0da6504d:
    func_0x0dad4250(auStack_518,param_1,&DAT_0127f06d,0x15);
  }
  if ((char)uStack_4e8 == '\0') {
    puStack_a8 = (undefined *)auStack_518._0_8_;
    puStack_a0 = (undefined *)auStack_518._8_8_;
    puStack_98 = puStack_508;
    puStack_90 = puStack_500;
    puStack_88 = puStack_4f8;
    uStack_80 = uStack_4f0;
    uStack_78 = uStack_4e8;
    func_0x0dad4840(auStack_668,(undefined *)(auStack_518._0_8_ + 0x18));
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da6512f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da6512f;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dad4e80(auStack_668,&puStack_a8,&UNK_011b9970,0x18);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_05daeda0;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_05daea90;
    puStack_690 = &UNK_0dad5490;
    puStack_688 = &UNK_0dad55f0;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dad5190(auStack_668);
    uStack_38 = (undefined1)uStack_78;
    puStack_48 = puStack_88;
    uStack_40 = uStack_80;
    puStack_58 = puStack_98;
    puStack_50 = puStack_90;
    puStack_68 = puStack_a8;
    puStack_60 = puStack_a0;
    func_0x048b0bc0(&iStack_650);
    puStack_1e8 = puStack_68;
    puStack_1e0 = puStack_60;
    puStack_1d8 = puStack_58;
    puStack_1d0 = puStack_50;
    puStack_1c8 = puStack_48;
    uStack_1c0 = uStack_40;
    uStack_1b8 = CONCAT71(uStack_37,uStack_38);
    func_0x0dad4840(auStack_668,puStack_68 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da653cf:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da653cf;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dad4e80(auStack_668,&puStack_1e8,&UNK_0123debc,0xb);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ce8;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_0490ce30;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_0490cb20;
    puStack_690 = &UNK_0dad57c0;
    puStack_688 = &UNK_0dad5920;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dad5190(auStack_668);
    uStack_f8 = (undefined1)uStack_1b8;
    puStack_108 = puStack_1c8;
    uStack_100 = uStack_1c0;
    puStack_118 = puStack_1d8;
    puStack_110 = puStack_1d0;
    puStack_128 = puStack_1e8;
    puStack_120 = puStack_1e0;
    func_0x048b0bc0(&iStack_650);
    puStack_1a8 = puStack_128;
    puStack_1a0 = puStack_120;
    puStack_198 = puStack_118;
    puStack_190 = puStack_110;
    puStack_188 = puStack_108;
    uStack_180 = uStack_100;
    uStack_178 = CONCAT71(uStack_f7,uStack_f8);
    func_0x0dad4840(auStack_668,puStack_128 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da6565f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da6565f;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dad4e80(auStack_668,&puStack_1a8,&UNK_013c6078,0xf);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ce8;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_0490ce30;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_0490cb20;
    puStack_690 = &UNK_0dad5b00;
    puStack_688 = &UNK_0dad5c60;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dad5190(auStack_668);
    uStack_b8 = (undefined1)uStack_178;
    puStack_c8 = puStack_188;
    uStack_c0 = uStack_180;
    puStack_d8 = puStack_198;
    puStack_d0 = puStack_190;
    puStack_e8 = puStack_1a8;
    puStack_e0 = puStack_1a0;
    func_0x048b0bc0(&iStack_650);
    puStack_168 = puStack_e8;
    puStack_160 = puStack_e0;
    puStack_158 = puStack_d8;
    puStack_150 = puStack_d0;
    puStack_148 = puStack_c8;
    uStack_140 = uStack_c0;
    uStack_138 = CONCAT71(uStack_b7,uStack_b8);
    func_0x0dad4840(auStack_668,puStack_e8 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da658df:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da658df;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dad4e80(auStack_668,&puStack_168,&UNK_01448b3e,0x14);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ce8;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_0490ce30;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_0490cb20;
    puStack_690 = &UNK_0dad5e40;
    puStack_688 = &UNK_0dad5fa0;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dad5190(auStack_668);
    uStack_1f8 = CONCAT71(uStack_1f8._1_7_,(undefined1)uStack_138);
    puStack_208 = puStack_148;
    uStack_200 = uStack_140;
    puStack_218 = puStack_158;
    puStack_210 = puStack_150;
    puStack_228 = puStack_168;
    puStack_220 = puStack_160;
    func_0x048b0bc0(&iStack_650);
    uStack_55e = 0;
    uStack_55a = 0;
    puStack_590 = (undefined *)0xffffffffffffffff;
    puStack_588 = (undefined8 *)0x0;
    puStack_580 = (undefined *)CONCAT71(puStack_580._1_7_,0xff);
    puStack_598 = &UNK_0f0edc68;
    puStack_578 = (undefined *)0x0;
    uStack_570 = _DAT_014f0238;
    uStack_568 = 0;
    uStack_560 = 0;
    func_0x0da70d70(&puStack_268,&puStack_228,&puStack_598);
    uStack_2f8 = uStack_238;
    puStack_308 = puStack_248;
    uStack_300 = uStack_240;
    puStack_318 = puStack_258;
    puStack_310 = puStack_250;
    puStack_328 = puStack_268;
    puStack_320 = puStack_260;
    func_0x0dad4840(auStack_668,puStack_268 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da65bef:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da65bef;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dad4e80(auStack_668,&puStack_328,&UNK_013ad593,9);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ce8;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_0490ce30;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_0490cb20;
    puStack_690 = &UNK_0dad6180;
    puStack_688 = &UNK_0dad62e0;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dad5190(auStack_668);
    uStack_338 = CONCAT71(uStack_338._1_7_,(undefined1)uStack_2f8);
    puStack_348 = puStack_308;
    uStack_340 = uStack_300;
    puStack_358 = puStack_318;
    puStack_350 = puStack_310;
    puStack_368 = puStack_328;
    puStack_360 = puStack_320;
    func_0x048b0bc0(&iStack_650);
    puStack_2e8 = puStack_368;
    puStack_2e0 = puStack_360;
    puStack_2d8 = puStack_358;
    puStack_2d0 = puStack_350;
    puStack_2c8 = puStack_348;
    uStack_2c0 = uStack_340;
    uStack_2b8 = uStack_338;
    func_0x0dad4840(auStack_668,puStack_368 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da65e6f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da65e6f;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dad4e80(auStack_668,&puStack_2e8,&UNK_0120912b,0xf);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f2ce5d8;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_0da79540;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_0b6acf10;
    puStack_690 = &UNK_0dad64c0;
    puStack_688 = &UNK_0dad6720;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dad5190(auStack_668);
    uStack_3b8 = CONCAT71(uStack_3b8._1_7_,(undefined1)uStack_2b8);
    puStack_3c8 = puStack_2c8;
    uStack_3c0 = uStack_2c0;
    puStack_3d8 = puStack_2d8;
    puStack_3d0 = puStack_2d0;
    puStack_3e8 = puStack_2e8;
    puStack_3e0 = puStack_2e0;
    func_0x048b0bc0(&iStack_650);
    puStack_2a8 = puStack_3e8;
    puStack_2a0 = puStack_3e0;
    puStack_298 = puStack_3d8;
    puStack_290 = puStack_3d0;
    puStack_288 = puStack_3c8;
    uStack_280 = uStack_3c0;
    uStack_278 = uStack_3b8;
    func_0x0dad4840(auStack_668,puStack_3e8 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da660ff:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da660ff;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dad4e80(auStack_668,&puStack_2a8,&UNK_0119dc32,0x12);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f4923a0;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_0dad9ed0;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &UNK_0dad8890;
    puStack_690 = &UNK_0dad9f90;
    puStack_688 = &UNK_0dada240;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dad5190(auStack_668);
    uStack_378 = CONCAT71(uStack_378._1_7_,(undefined1)uStack_278);
    puStack_388 = puStack_288;
    uStack_380 = uStack_280;
    puStack_398 = puStack_298;
    puStack_390 = puStack_290;
    puStack_3a8 = puStack_2a8;
    puStack_3a0 = puStack_2a0;
    func_0x048b0bc0(&iStack_650);
    puStack_468 = puStack_3a8;
    puStack_460 = puStack_3a0;
    puStack_458 = puStack_398;
    puStack_450 = puStack_390;
    puStack_448 = puStack_388;
    uStack_440 = uStack_380;
    uStack_438 = uStack_378;
    func_0x0dad4840(auStack_668,puStack_3a8 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da6638f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da6638f;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dad4e80(auStack_668,&puStack_468,&UNK_0130b5d7,0x1f);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ce8;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_0490ce30;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_0490cb20;
    puStack_690 = &UNK_0dada6c0;
    puStack_688 = &UNK_0dada820;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dad5190(auStack_668);
    uStack_478 = CONCAT71(uStack_478._1_7_,(undefined1)uStack_438);
    puStack_488 = puStack_448;
    uStack_480 = uStack_440;
    puStack_498 = puStack_458;
    puStack_490 = puStack_450;
    puStack_4a8 = puStack_468;
    puStack_4a0 = puStack_460;
    func_0x048b0bc0(&iStack_650);
    uStack_51e = 0;
    uStack_51a = 0;
    puStack_550 = (undefined *)0xffffffffffffffff;
    puStack_548 = (undefined8 *)0x0;
    puStack_540 = (undefined *)CONCAT71(puStack_540._1_7_,0xff);
    puStack_558 = &UNK_0f0edc68;
    puStack_538 = (undefined *)0x0;
    uStack_530 = _DAT_014f0238;
    uStack_528 = 0;
    uStack_520 = 0;
    func_0x0da70d70(&puStack_428,&puStack_4a8,&puStack_558);
    func_0x0dad4840(auStack_668,puStack_428 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da6665f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da6665f;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dad4e80(auStack_668,&puStack_428,&UNK_0123de97,0x24);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ef8;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_04906f70;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &UNK_04906c50;
    puStack_690 = &UNK_0dadaa00;
    puStack_688 = &UNK_0dadab60;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dad5190(auStack_668);
    func_0x048b0bc0(&iStack_650);
  }
  func_0x0da6f580(&puStack_598,&lStack_4e0,&DAT_0127f06d,0x15);
  uStack_570 = 0xbb4f619c00000003;
  func_0x0daab720(puStack_598 + 0x18);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f491600;
  auStack_668._8_8_ = 0;
  auStack_668._0_8_ = puVar12;
  uStack_658._1_3_ = (undefined3)_DAT_0127f06d;
  uStack_658 = CONCAT31(uStack_658._1_3_,0x2a);
  uStack_654 = (undefined4)((ulong)_DAT_0127f06d >> 0x18);
  iStack_650._0_1_ = (undefined1)((ulong)_DAT_0127f06d >> 0x38);
  iStack_650._1_3_ = (undefined3)_UNK_0127f075;
  uStack_64c = (undefined2)((ulong)_UNK_0127f075 >> 0x18);
  uStack_64a = 0x65;
  uStack_649 = 0x72;
  uStack_648 = 0x5f;
  uStack_647 = 0x6c;
  uStack_646 = 0x65;
  uStack_645 = 0x76;
  uStack_644 = 0x65;
  uStack_643 = 0x6c;
  uStack_642 = 0;
  uStack_640 = CONCAT31(uStack_658._1_3_,0x2a);
  cStack_63c = (char)((ulong)_DAT_0127f06d >> 0x18);
  uStack_63b = (undefined2)((ulong)_DAT_0127f06d >> 0x20);
  uStack_639 = (undefined1)((ulong)_DAT_0127f06d >> 0x30);
  uStack_637 = (undefined5)_UNK_0127f075;
  uStack_632 = 0x65;
  uStack_631 = 0x72;
  uStack_630 = 0x5f;
  uStack_62f = 0x6c;
  uStack_62e = 0x65;
  uStack_62d = 0x76;
  uStack_62c = 0x65;
  uStack_62b = 0x6c;
  uStack_62a = 0;
  auStack_628 = ZEXT816(0);
  lStack_618 = 0;
  auStack_610 = ZEXT816(0);
  lStack_600 = 0;
  uStack_5f8 = 0x3f600000;
  uStack_638 = (undefined1)iStack_650;
  func_0x048afb10(auStack_628,8);
  lStack_5c8 = 0;
  uStack_5e0 = 0;
  auStack_5d8 = ZEXT816(0);
  lStack_5f0 = 0;
  lStack_5e8 = 0;
  uStack_5c0 = 0xff00;
  uStack_5bc = uStack_5bc & 0xffffff00;
  uStack_5b8 = uStack_5b8 & 0xffffff00;
  uStack_5b4 = uStack_5b4 & 0xffffff00;
  if ((DAT_0f7332a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7332a8), iVar7 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_570._4_4_);
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
  pcStack_6b8 = (code *)0x2;
  uStack_6b0 = 1;
  puStack_6a8 = &UNK_0dab1e00;
  puStack_6a0 = &UNK_07d98660;
  puStack_698 = &UNK_0dab1a80;
  puStack_690 = &UNK_0dab1e20;
  puStack_688 = &UNK_0dab24f0;
  uStack_680 = 0;
  auStack_678 = ZEXT816(0);
  func_0x048b05a0(&puStack_590,&uStack_6d0);
  uVar5 = auStack_678._8_8_;
  if ((long *)auStack_678._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_678._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  puStack_548 = (undefined8 *)puStack_580;
  puStack_540 = puStack_578;
  puStack_558 = puStack_590;
  puStack_550 = (undefined *)puStack_588;
  func_0x0daacff0(&uStack_6d0,&puStack_558,auStack_668);
  func_0x048b0bc0(auStack_668);
  if ((DAT_0f7329e0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7329e0), iVar7 != 0)) {
    func_0x0dab3320();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f732960,0xf53dab8);
    func_0x0410844d(&DAT_0f7329e0);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f732960 + 4)) * 8);
  do {
    lVar11 = *plVar10;
    if (lVar11 == -1) goto LAB_0da66a50;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f732960 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0da66a50:
    puVar17 = &DAT_0f732960;
    if (iRam000000000f7329c0 != -0x2b3da790) goto LAB_0da66abd;
LAB_0da66a7b:
    lVar11 = *(long *)(puVar17 + 0x68);
    if (lVar11 == 0) goto LAB_0da66abd;
    bVar20 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar9 = lVar11 + 9;
    if (bVar20) {
      lVar9 = *(long *)(lVar11 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0dadad40(&puStack_598,param_1,lVar9,uVar15);
  }
  else {
    puVar17 = (undefined *)plVar10[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0da66a7b;
LAB_0da66abd:
    func_0x0dadad40(&puStack_598,param_1,&DAT_01333b6c,0x10);
  }
  if ((char)uStack_568 == '\0') {
    auStack_518._8_8_ = puStack_590;
    auStack_518._0_8_ = puStack_598;
    puStack_508 = (undefined *)puStack_588;
    puStack_500 = puStack_580;
    puStack_4f8 = puStack_578;
    uStack_4f0 = uStack_570;
    uStack_4e8 = uStack_568;
    func_0x0dadb330(auStack_668,puStack_598 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da66b9f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da66b9f;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dadb8e0(auStack_668,auStack_518,&UNK_013e05f5,0xc);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef44b00;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_048b3f30;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_048b2190;
    puStack_690 = &UNK_0dadbef0;
    puStack_688 = &UNK_0dadc0b0;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dadbbf0(auStack_668);
    uStack_528 = CONCAT71(uStack_528._1_7_,(char)uStack_4e8);
    puStack_538 = puStack_4f8;
    uStack_530 = uStack_4f0;
    puStack_548 = (undefined8 *)puStack_508;
    puStack_540 = puStack_500;
    puStack_558 = (undefined *)auStack_518._0_8_;
    puStack_550 = (undefined *)auStack_518._8_8_;
    func_0x048b0bc0(&iStack_650);
    func_0x0dadb330(auStack_668,puStack_558 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da66dff:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da66dff;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dadb8e0(auStack_668,&puStack_558,&UNK_0119dc14,0x1d);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ce8;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_0490ce30;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_0490cb20;
    puStack_690 = &UNK_0dadc280;
    puStack_688 = &UNK_0dadc3e0;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dadbbf0(auStack_668);
    func_0x048b0bc0(&iStack_650);
  }
  func_0x0da6f580(&puStack_598,&lStack_4e0,&DAT_01333b6c,0x10);
  uStack_570 = 0x6bdfd6a00000003;
  func_0x0daab720(puStack_598 + 0x18);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f491698;
  auStack_668._8_8_ = 0;
  auStack_668._0_8_ = puVar12;
  uStack_658._1_3_ = (undefined3)_DAT_01333b6c;
  uStack_658 = CONCAT31(uStack_658._1_3_,0x20);
  uStack_654 = (undefined4)((ulong)_DAT_01333b6c >> 0x18);
  iStack_650._0_1_ = (undefined1)((ulong)_DAT_01333b6c >> 0x38);
  iStack_650._1_3_ = (undefined3)_UNK_01333b74;
  uStack_64c = (undefined2)((ulong)_UNK_01333b74 >> 0x18);
  uStack_64a = (undefined1)((ulong)_UNK_01333b74 >> 0x28);
  uStack_649 = (undefined1)((ulong)_UNK_01333b74 >> 0x30);
  uStack_648 = (undefined1)((ulong)_UNK_01333b74 >> 0x38);
  uStack_647 = 0;
  uStack_640 = CONCAT31(uStack_658._1_3_,0x20);
  cStack_63c = (char)((ulong)_DAT_01333b6c >> 0x18);
  uStack_63b = (undefined2)((ulong)_DAT_01333b6c >> 0x20);
  uStack_639 = (undefined1)((ulong)_DAT_01333b6c >> 0x30);
  uStack_637 = (undefined5)_UNK_01333b74;
  uStack_62f = 0;
  auStack_628 = ZEXT816(0);
  lStack_618 = 0;
  auStack_610 = ZEXT816(0);
  lStack_600 = 0;
  uStack_5f8 = 0x3f600000;
  uStack_638 = (undefined1)iStack_650;
  uStack_632 = uStack_64a;
  uStack_631 = uStack_649;
  uStack_630 = uStack_648;
  func_0x048afb10(auStack_628,8);
  lStack_5c8 = 0;
  uStack_5e0 = 0;
  auStack_5d8 = ZEXT816(0);
  lStack_5f0 = 0;
  lStack_5e8 = 0;
  uStack_5c0 = 0xff00;
  uStack_5bc = uStack_5bc & 0xffffff00;
  uStack_5b8 = uStack_5b8 & 0xffffff00;
  uStack_5b4 = uStack_5b4 & 0xffffff00;
  if ((DAT_0f7332a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7332a8), iVar7 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_570._4_4_);
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
  pcStack_6b8 = (code *)0x2;
  uStack_6b0 = 1;
  puStack_6a8 = &UNK_0dab3550;
  puStack_6a0 = &UNK_07d98660;
  puStack_698 = &UNK_0dab3260;
  puStack_690 = &UNK_0dab3570;
  puStack_688 = &UNK_0dab3c40;
  uStack_680 = 0;
  auStack_678 = ZEXT816(0);
  func_0x048b05a0(&puStack_590,&uStack_6d0);
  uVar5 = auStack_678._8_8_;
  if ((long *)auStack_678._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_678._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  puStack_548 = (undefined8 *)puStack_580;
  puStack_540 = puStack_578;
  puStack_558 = puStack_590;
  puStack_550 = (undefined *)puStack_588;
  func_0x0daacff0(&uStack_6d0,&puStack_558,auStack_668);
  func_0x048b0bc0(auStack_668);
  if ((DAT_0f732a98 == '\0') && (iVar7 = func_0x04108328(&DAT_0f732a98), iVar7 != 0)) {
    func_0x0dab49f0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f732a18,0xf53dab8);
    func_0x0410844d(&DAT_0f732a98);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f732a18 + 4)) * 8);
  do {
    lVar11 = *plVar10;
    if (lVar11 == -1) goto LAB_0da671d0;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f732a18 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0da671d0:
    puVar17 = &DAT_0f732a18;
    if (iRam000000000f732a78 != -0x2b3da790) goto LAB_0da6723d;
LAB_0da671fb:
    lVar11 = *(long *)(puVar17 + 0x68);
    if (lVar11 == 0) goto LAB_0da6723d;
    bVar20 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar9 = lVar11 + 9;
    if (bVar20) {
      lVar9 = *(long *)(lVar11 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0dadd260(&puStack_598,param_1,lVar9,uVar15);
  }
  else {
    puVar17 = (undefined *)plVar10[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0da671fb;
LAB_0da6723d:
    func_0x0dadd260(&puStack_598,param_1,&UNK_014a20a6,0xe);
  }
  if ((char)uStack_568 == '\0') {
    puStack_4a8 = puStack_598;
    puStack_4a0 = puStack_590;
    puStack_498 = (undefined *)puStack_588;
    puStack_490 = puStack_580;
    puStack_488 = puStack_578;
    uStack_480 = uStack_570;
    uStack_478 = uStack_568;
    func_0x0dadd850(auStack_668,puStack_598 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da673ef:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da673ef;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dadde00(auStack_668,&puStack_4a8,&UNK_01410416,4);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef44b00;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_048b3f30;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_048b2190;
    puStack_690 = &UNK_0dade3b0;
    puStack_688 = &UNK_0dade570;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dade0b0(auStack_668);
    uStack_3f8 = (undefined1)uStack_478;
    puStack_408 = puStack_488;
    uStack_400 = uStack_480;
    puStack_418 = puStack_498;
    puStack_410 = puStack_490;
    puStack_428 = puStack_4a8;
    puStack_420 = puStack_4a0;
    func_0x048b0bc0(&iStack_650);
    auStack_518._8_8_ = puStack_420;
    auStack_518._0_8_ = puStack_428;
    puStack_508 = puStack_418;
    puStack_500 = puStack_410;
    puStack_4f8 = puStack_408;
    uStack_4f0 = uStack_400;
    uStack_4e8 = CONCAT71(uStack_3f7,uStack_3f8);
    func_0x0dadd850(auStack_668,puStack_428 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da6768f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da6768f;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dadde00(auStack_668,auStack_518,&UNK_01448b53,0x11);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ef8;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_04906f70;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &UNK_04906c50;
    puStack_690 = &UNK_0dade740;
    puStack_688 = &UNK_0dade8a0;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dade0b0(auStack_668);
    uStack_528 = CONCAT71(uStack_528._1_7_,(char)uStack_4e8);
    puStack_538 = puStack_4f8;
    uStack_530 = uStack_4f0;
    puStack_548 = (undefined8 *)puStack_508;
    puStack_540 = puStack_500;
    puStack_558 = (undefined *)auStack_518._0_8_;
    puStack_550 = (undefined *)auStack_518._8_8_;
    func_0x048b0bc0(&iStack_650);
    func_0x0dadd850(auStack_668,puStack_558 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da678ef:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da678ef;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dadde00(auStack_668,&puStack_558,&UNK_0130b5f7,9);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ce8;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_0490ce30;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_0490cb20;
    puStack_690 = &UNK_0dadea80;
    puStack_688 = &UNK_0dadebe0;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dade0b0(auStack_668);
    func_0x048b0bc0(&iStack_650);
  }
  func_0x0da6f580(&puStack_598,&lStack_4e0,&UNK_014a20a6,0xe);
  uStack_570 = 0x2eb8819700000003;
  func_0x0daab720(puStack_598 + 0x18);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f491720;
  auStack_668._8_8_ = 0;
  auStack_668._0_8_ = puVar12;
  uStack_658 = 0x6e696d1c;
  uStack_654 = 0x61726365;
  iStack_650 = 0x623a7466;
  uStack_64c = 0x736f;
  uStack_64a = 0x73;
  uStack_649 = 0;
  uStack_640 = 0x6e696d1c;
  cStack_63c = 0x65;
  uStack_63b = 0x7263;
  uStack_639 = 0x61;
  uStack_638 = 0x66;
  uStack_637 = 0x736f623a74;
  uStack_632 = 0x73;
  uStack_631 = 0;
  auStack_628 = ZEXT816(0);
  lStack_618 = 0;
  auStack_610 = ZEXT816(0);
  lStack_600 = 0;
  uStack_5f8 = 0x3f600000;
  func_0x048afb10(auStack_628,8);
  lStack_5c8 = 0;
  uStack_5e0 = 0;
  auStack_5d8 = ZEXT816(0);
  lStack_5f0 = 0;
  lStack_5e8 = 0;
  uStack_5c0 = 0xff00;
  uStack_5bc = uStack_5bc & 0xffffff00;
  uStack_5b8 = uStack_5b8 & 0xffffff00;
  uStack_5b4 = uStack_5b4 & 0xffffff00;
  if ((DAT_0f7332a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7332a8), iVar7 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_570._4_4_);
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
  pcStack_6b8 = (code *)0x2;
  uStack_6b0 = 1;
  puStack_6a8 = &UNK_0dab4c20;
  puStack_6a0 = &UNK_07d98660;
  puStack_698 = &UNK_0dab4930;
  puStack_690 = &UNK_0dab4c40;
  puStack_688 = &UNK_0dab5310;
  uStack_680 = 0;
  auStack_678 = ZEXT816(0);
  func_0x048b05a0(&puStack_590,&uStack_6d0);
  uVar5 = auStack_678._8_8_;
  if ((long *)auStack_678._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_678._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  puStack_548 = (undefined8 *)puStack_580;
  puStack_540 = puStack_578;
  puStack_558 = puStack_590;
  puStack_550 = (undefined *)puStack_588;
  func_0x0daacff0(&uStack_6d0,&puStack_558,auStack_668);
  func_0x048b0bc0(auStack_668);
  if ((DAT_0f732b50 == '\0') && (iVar7 = func_0x04108328(&DAT_0f732b50), iVar7 != 0)) {
    func_0x0dab5ec0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f732ad0,0xf53dab8);
    func_0x0410844d(&DAT_0f732b50);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f732ad0 + 4)) * 8);
  do {
    lVar11 = *plVar10;
    if (lVar11 == -1) goto LAB_0da67ce0;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f732ad0 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0da67ce0:
    puVar17 = &DAT_0f732ad0;
    if (iRam000000000f732b30 != -0x2b3da790) goto LAB_0da67d4d;
LAB_0da67d0b:
    lVar11 = *(long *)(puVar17 + 0x68);
    if (lVar11 == 0) goto LAB_0da67d4d;
    bVar20 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar9 = lVar11 + 9;
    if (bVar20) {
      lVar9 = *(long *)(lVar11 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0dadf620(&puStack_558,param_1,lVar9,uVar15);
  }
  else {
    puVar17 = (undefined *)plVar10[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0da67d0b;
LAB_0da67d4d:
    func_0x0dadf620(&puStack_558,param_1,&DAT_011e093f,0x17);
  }
  if ((char)uStack_528 == '\0') {
    puStack_468 = puStack_558;
    puStack_460 = puStack_550;
    puStack_458 = (undefined *)puStack_548;
    puStack_450 = puStack_540;
    puStack_448 = puStack_538;
    uStack_440 = uStack_530;
    uStack_438 = uStack_528;
    func_0x0dadfc10(auStack_668,puStack_558 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da67e8f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da67e8f;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae0180(auStack_668,&puStack_468,&UNK_013c2ccd,5);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_05daeda0;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_05daea90;
    puStack_690 = &UNK_0dae0700;
    puStack_688 = &UNK_0dae0860;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dae0400(auStack_668);
    uStack_478 = CONCAT71(uStack_478._1_7_,(undefined1)uStack_438);
    puStack_488 = puStack_448;
    uStack_480 = uStack_440;
    puStack_498 = puStack_458;
    puStack_490 = puStack_450;
    puStack_4a8 = puStack_468;
    puStack_4a0 = puStack_460;
    func_0x048b0bc0(&iStack_650);
    uStack_55e = 0;
    uStack_55a = 0;
    puStack_590 = (undefined *)0xffffffffffffffff;
    puStack_588 = (undefined8 *)0x0;
    puStack_580 = (undefined *)CONCAT71(puStack_580._1_7_,0xff);
    puStack_598 = &UNK_0f0edc68;
    puStack_578 = _DAT_014e8be0;
    uStack_570 = _UNK_014e8be8;
    uStack_568 = 0;
    uStack_560 = 0;
    func_0x0da71140(&puStack_428,&puStack_4a8,&puStack_598);
    func_0x0dadfc10(auStack_668,puStack_428 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da6816f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da6816f;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae0180(auStack_668,&puStack_428,&UNK_013c2cd3,6);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_05daeda0;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_05daea90;
    puStack_690 = &UNK_0dae0a30;
    puStack_688 = &UNK_0dae0b90;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dae0400(auStack_668);
    uStack_4e8 = CONCAT71(uStack_4e8._1_7_,uStack_3f8);
    puStack_4f8 = puStack_408;
    uStack_4f0 = uStack_400;
    puStack_508 = puStack_418;
    puStack_500 = puStack_410;
    auStack_518._8_8_ = puStack_420;
    auStack_518._0_8_ = puStack_428;
    func_0x048b0bc0(&iStack_650);
    uStack_62e = 0;
    uStack_62d = 0;
    uStack_62c = 0;
    uStack_62b = 0;
    uStack_62a = 0;
    uStack_629 = 0;
    uStack_658 = 0;
    uStack_654 = 0;
    iStack_650 = CONCAT31(iStack_650._1_3_,0xff);
    auStack_668._8_8_ = 0xffffffffffffffff;
    auStack_668._0_8_ = &UNK_0f0edc68;
    uStack_648 = SUB81(_DAT_014e8be0,0);
    uStack_647 = (undefined1)((ulong)_DAT_014e8be0 >> 8);
    uStack_646 = (undefined1)((ulong)_DAT_014e8be0 >> 0x10);
    uStack_645 = (undefined1)((ulong)_DAT_014e8be0 >> 0x18);
    uStack_644 = (undefined1)((ulong)_DAT_014e8be0 >> 0x20);
    uStack_643 = (undefined1)((ulong)_DAT_014e8be0 >> 0x28);
    uStack_642 = (undefined1)((ulong)_DAT_014e8be0 >> 0x30);
    uStack_641 = (undefined1)((ulong)_DAT_014e8be0 >> 0x38);
    uStack_640 = (undefined4)_UNK_014e8be8;
    cStack_63c = (char)((ulong)_UNK_014e8be8 >> 0x20);
    uStack_63b = (undefined2)((ulong)_UNK_014e8be8 >> 0x28);
    uStack_639 = (undefined1)((ulong)_UNK_014e8be8 >> 0x38);
    uStack_638 = 0;
    uStack_637 = 0;
    uStack_632 = 0;
    uStack_631 = 0;
    uStack_630 = 0;
    uStack_62f = 0;
    func_0x0da71140(&uStack_6d0,auStack_518,auStack_668);
  }
  func_0x0da6f580(&puStack_598,&lStack_4e0,&DAT_011e093f,0x17);
  uStack_570 = 0xf129c86c00000003;
  func_0x0daab720(puStack_598 + 0x18);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f4917a8;
  auStack_668._8_8_ = 0;
  auStack_668._0_8_ = puVar12;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x1a,0);
  }
  uVar5 = _UNK_011e0947;
  uStack_648 = SUB81(puVar12,0);
  uStack_647 = (undefined1)((ulong)puVar12 >> 8);
  uStack_646 = (undefined1)((ulong)puVar12 >> 0x10);
  uStack_645 = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_644 = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_643 = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_642 = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_641 = (undefined1)((ulong)puVar12 >> 0x38);
  uStack_658 = 0x1b;
  uStack_654 = 0;
  iStack_650 = 0x17;
  uStack_64c = 0;
  uStack_64a = 0;
  uStack_649 = 0;
  *puVar12 = _DAT_011e093f;
  puVar12[1] = uVar5;
  *(undefined8 *)((long)puVar12 + 0xf) = 0x786f625f6e6f6973;
  *(undefined1 *)((long)puVar12 + 0x17) = 0;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x1a,0);
  }
  uVar5 = _UNK_011e0947;
  uStack_630 = SUB81(puVar12,0);
  uStack_62f = (undefined1)((ulong)puVar12 >> 8);
  uStack_62e = (undefined1)((ulong)puVar12 >> 0x10);
  uStack_62d = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_62c = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_62b = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_62a = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_629 = (undefined1)((ulong)puVar12 >> 0x38);
  uStack_640 = 0x1b;
  cStack_63c = 0;
  uStack_63b = 0;
  uStack_639 = 0;
  uStack_638 = 0x17;
  uStack_637 = 0;
  uStack_632 = 0;
  uStack_631 = 0;
  *puVar12 = _DAT_011e093f;
  puVar12[1] = uVar5;
  *(undefined8 *)((long)puVar12 + 0xf) = 0x786f625f6e6f6973;
  *(undefined1 *)((long)puVar12 + 0x17) = 0;
  lStack_600 = 0;
  lStack_618 = 0;
  auStack_610 = ZEXT816(0);
  auStack_628 = ZEXT816(0);
  uStack_5f8 = 0x3f600000;
  func_0x048afb10(auStack_628,8);
  lStack_5c8 = 0;
  uStack_5e0 = 0;
  auStack_5d8 = ZEXT816(0);
  lStack_5f0 = 0;
  lStack_5e8 = 0;
  uStack_5c0 = 0xff00;
  uStack_5bc = uStack_5bc & 0xffffff00;
  uStack_5b8 = uStack_5b8 & 0xffffff00;
  uStack_5b4 = uStack_5b4 & 0xffffff00;
  if ((DAT_0f7332a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7332a8), iVar7 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_570._4_4_);
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
  pcStack_6b8 = (code *)0x2;
  uStack_6b0 = 1;
  puStack_6a8 = &UNK_0dab60d0;
  puStack_6a0 = &UNK_07d98660;
  puStack_698 = &UNK_0dab5e00;
  puStack_690 = &UNK_0dab60f0;
  puStack_688 = &UNK_0dab68d0;
  uStack_680 = 0;
  auStack_678 = ZEXT816(0);
  func_0x048b05a0(&puStack_590,&uStack_6d0);
  uVar5 = auStack_678._8_8_;
  if ((long *)auStack_678._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_678._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  puStack_548 = (undefined8 *)puStack_580;
  puStack_540 = puStack_578;
  puStack_558 = puStack_590;
  puStack_550 = (undefined *)puStack_588;
  func_0x0daacff0(&uStack_6d0,&puStack_558,auStack_668);
  func_0x048b0bc0(auStack_668);
  if ((DAT_0f732c08 == '\0') && (iVar7 = func_0x04108328(&DAT_0f732c08), iVar7 != 0)) {
    func_0x0dab7430();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f732b88,0xf53dab8);
    func_0x0410844d(&DAT_0f732c08);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f732b88 + 4)) * 8);
  do {
    lVar11 = *plVar10;
    if (lVar11 == -1) goto LAB_0da68670;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f732b88 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0da68670:
    puVar17 = &DAT_0f732b88;
    if (iRam000000000f732be8 != -0x2b3da790) goto LAB_0da686dd;
LAB_0da6869b:
    lVar11 = *(long *)(puVar17 + 0x68);
    if (lVar11 == 0) goto LAB_0da686dd;
    bVar20 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar9 = lVar11 + 9;
    if (bVar20) {
      lVar9 = *(long *)(lVar11 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0dae0d70(&puStack_598,param_1,lVar9,uVar15);
  }
  else {
    puVar17 = (undefined *)plVar10[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0da6869b;
LAB_0da686dd:
    func_0x0dae0d70(&puStack_598,param_1,&DAT_0139eefa,0x1a);
  }
  if ((char)uStack_568 == '\0') {
    auStack_518._8_8_ = puStack_590;
    auStack_518._0_8_ = puStack_598;
    puStack_508 = (undefined *)puStack_588;
    puStack_500 = puStack_580;
    puStack_4f8 = puStack_578;
    uStack_4f0 = uStack_570;
    uStack_4e8 = uStack_568;
    func_0x0dae1360(auStack_668,puStack_598 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da6881f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da6881f;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae18d0(auStack_668,auStack_518,&UNK_011b1492,0xf);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef46ce8;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_0490ce30;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_0490cb20;
    puStack_690 = &UNK_0dae1e80;
    puStack_688 = &UNK_0dae1fe0;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dae1b80(auStack_668);
    uStack_528 = CONCAT71(uStack_528._1_7_,(char)uStack_4e8);
    puStack_538 = puStack_4f8;
    uStack_530 = uStack_4f0;
    puStack_548 = (undefined8 *)puStack_508;
    puStack_540 = puStack_500;
    puStack_558 = (undefined *)auStack_518._0_8_;
    puStack_550 = (undefined *)auStack_518._8_8_;
    func_0x048b0bc0(&iStack_650);
    func_0x0dae1360(auStack_668,puStack_558 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da68a7f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da68a7f;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae18d0(auStack_668,&puStack_558,&UNK_01425a66,0x11);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_05daeda0;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_05daea90;
    puStack_690 = &UNK_0dae21b0;
    puStack_688 = &UNK_0dae2310;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dae1b80(auStack_668);
    func_0x048b0bc0(&iStack_650);
  }
  func_0x0da6f580(&puStack_598,&lStack_4e0,&DAT_0139eefa,0x1a);
  uStack_570 = 0x304f457200000003;
  func_0x0daab720(puStack_598 + 0x18);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f491830;
  auStack_668._8_8_ = 0;
  auStack_668._0_8_ = puVar12;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar5 = _UNK_0139ef0c;
  uStack_648 = SUB81(puVar12,0);
  uStack_647 = (undefined1)((ulong)puVar12 >> 8);
  uStack_646 = (undefined1)((ulong)puVar12 >> 0x10);
  uStack_645 = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_644 = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_643 = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_642 = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_641 = (undefined1)((ulong)puVar12 >> 0x38);
  uStack_658 = 0x21;
  uStack_654 = 0;
  iStack_650 = 0x1a;
  uStack_64c = 0;
  uStack_64a = 0;
  uStack_649 = 0;
  *(ulong *)((long)puVar12 + 10) = CONCAT26(_UNK_0139ef0a,_DAT_0139ef04);
  *(undefined8 *)((long)puVar12 + 0x12) = uVar5;
  uVar5 = CONCAT62(_DAT_0139ef04,_UNK_0139ef02);
  *puVar12 = _DAT_0139eefa;
  puVar12[1] = uVar5;
  *(undefined1 *)((long)puVar12 + 0x1a) = 0;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar5 = _UNK_0139ef0c;
  uStack_630 = SUB81(puVar12,0);
  uStack_62f = (undefined1)((ulong)puVar12 >> 8);
  uStack_62e = (undefined1)((ulong)puVar12 >> 0x10);
  uStack_62d = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_62c = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_62b = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_62a = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_629 = (undefined1)((ulong)puVar12 >> 0x38);
  uStack_640 = 0x21;
  cStack_63c = 0;
  uStack_63b = 0;
  uStack_639 = 0;
  uStack_638 = 0x1a;
  uStack_637 = 0;
  uStack_632 = 0;
  uStack_631 = 0;
  *(ulong *)((long)puVar12 + 10) = CONCAT26(_UNK_0139ef0a,_DAT_0139ef04);
  *(undefined8 *)((long)puVar12 + 0x12) = uVar5;
  uVar5 = CONCAT62(_DAT_0139ef04,_UNK_0139ef02);
  *puVar12 = _DAT_0139eefa;
  puVar12[1] = uVar5;
  *(undefined1 *)((long)puVar12 + 0x1a) = 0;
  lStack_600 = 0;
  lStack_618 = 0;
  auStack_610 = ZEXT816(0);
  auStack_628 = ZEXT816(0);
  uStack_5f8 = 0x3f600000;
  func_0x048afb10(auStack_628,8);
  lStack_5c8 = 0;
  uStack_5e0 = 0;
  auStack_5d8 = ZEXT816(0);
  lStack_5f0 = 0;
  lStack_5e8 = 0;
  uStack_5c0 = 0xff00;
  uStack_5bc = uStack_5bc & 0xffffff00;
  uStack_5b8 = uStack_5b8 & 0xffffff00;
  uStack_5b4 = uStack_5b4 & 0xffffff00;
  if ((DAT_0f7332a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7332a8), iVar7 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_570._4_4_);
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
  pcStack_6b8 = (code *)0x2;
  uStack_6b0 = 1;
  puStack_6a8 = &UNK_0dab7640;
  puStack_6a0 = &UNK_07d98660;
  puStack_698 = &UNK_0dab7370;
  puStack_690 = &UNK_0dab7660;
  puStack_688 = &UNK_0dab7e40;
  uStack_680 = 0;
  auStack_678 = ZEXT816(0);
  func_0x048b05a0(&puStack_590,&uStack_6d0);
  uVar5 = auStack_678._8_8_;
  if ((long *)auStack_678._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_678._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  puStack_548 = (undefined8 *)puStack_580;
  puStack_540 = puStack_578;
  puStack_558 = puStack_590;
  puStack_550 = (undefined *)puStack_588;
  func_0x0daacff0(&uStack_6d0,&puStack_558,auStack_668);
  func_0x048b0bc0(auStack_668);
  if ((DAT_0f732cc0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f732cc0), iVar7 != 0)) {
    func_0x0dab8af0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f732c40,0xf53dab8);
    func_0x0410844d(&DAT_0f732cc0);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f732c40 + 4)) * 8);
  do {
    lVar11 = *plVar10;
    if (lVar11 == -1) goto LAB_0da68ed0;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f732c40 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0da68ed0:
    puVar17 = &DAT_0f732c40;
    if (iRam000000000f732ca0 != -0x2b3da790) goto LAB_0da68f3d;
LAB_0da68efb:
    lVar11 = *(long *)(puVar17 + 0x68);
    if (lVar11 == 0) goto LAB_0da68f3d;
    bVar20 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar9 = lVar11 + 9;
    if (bVar20) {
      lVar9 = *(long *)(lVar11 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0dae24f0(&puStack_598,param_1,lVar9,uVar15);
  }
  else {
    puVar17 = (undefined *)plVar10[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0da68efb;
LAB_0da68f3d:
    func_0x0dae24f0(&puStack_598,param_1,&DAT_01333a4c,0x1b);
  }
  if ((char)uStack_568 == '\0') {
    puStack_1e8 = puStack_598;
    puStack_1e0 = puStack_590;
    puStack_1d8 = (undefined *)puStack_588;
    puStack_1d0 = puStack_580;
    puStack_1c8 = puStack_578;
    uStack_1c0 = uStack_570;
    uStack_1b8 = uStack_568;
    func_0x0dae2ae0(auStack_668,puStack_598 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da6907f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da6907f;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae30a0(auStack_668,&puStack_1e8,&UNK_0124bea2,4);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_05daeda0;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_05daea90;
    puStack_690 = &UNK_0dae3650;
    puStack_688 = &UNK_0dae37b0;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dae3350(auStack_668);
    uStack_f8 = (undefined1)uStack_1b8;
    puStack_108 = puStack_1c8;
    uStack_100 = uStack_1c0;
    puStack_118 = puStack_1d8;
    puStack_110 = puStack_1d0;
    puStack_128 = puStack_1e8;
    puStack_120 = puStack_1e0;
    func_0x048b0bc0(&iStack_650);
    puStack_1a8 = puStack_128;
    puStack_1a0 = puStack_120;
    puStack_198 = puStack_118;
    puStack_190 = puStack_110;
    puStack_188 = puStack_108;
    uStack_180 = uStack_100;
    uStack_178 = CONCAT71(uStack_f7,uStack_f8);
    func_0x0dae2ae0(auStack_668,puStack_128 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da6931f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da6931f;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae30a0(auStack_668,&puStack_1a8,&UNK_012f55b6,4);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_05daeda0;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_05daea90;
    puStack_690 = &UNK_0dae3980;
    puStack_688 = &UNK_0dae3ae0;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dae3350(auStack_668);
    uStack_b8 = (undefined1)uStack_178;
    puStack_c8 = puStack_188;
    uStack_c0 = uStack_180;
    puStack_d8 = puStack_198;
    puStack_d0 = puStack_190;
    puStack_e8 = puStack_1a8;
    puStack_e0 = puStack_1a0;
    func_0x048b0bc0(&iStack_650);
    puStack_168 = puStack_e8;
    puStack_160 = puStack_e0;
    puStack_158 = puStack_d8;
    puStack_150 = puStack_d0;
    puStack_148 = puStack_c8;
    uStack_140 = uStack_c0;
    uStack_138 = CONCAT71(uStack_b7,uStack_b8);
    func_0x0dae2ae0(auStack_668,puStack_e8 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da695af:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da695af;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae30a0(auStack_668,&puStack_168,&UNK_0139ef64,0xb);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_05daeda0;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_05daea90;
    puStack_690 = &UNK_0dae3cc0;
    puStack_688 = &UNK_0dae3e20;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dae3350(auStack_668);
    uStack_1f8 = CONCAT71(uStack_1f8._1_7_,(undefined1)uStack_138);
    puStack_208 = puStack_148;
    uStack_200 = uStack_140;
    puStack_218 = puStack_158;
    puStack_210 = puStack_150;
    puStack_228 = puStack_168;
    puStack_220 = puStack_160;
    func_0x048b0bc0(&iStack_650);
    puStack_268 = puStack_228;
    puStack_260 = puStack_220;
    puStack_258 = puStack_218;
    puStack_250 = puStack_210;
    puStack_248 = puStack_208;
    uStack_240 = uStack_200;
    uStack_238 = uStack_1f8;
    func_0x0dae2ae0(auStack_668,puStack_228 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da6983f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da6983f;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae30a0(auStack_668,&puStack_268,&UNK_01265757,4);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_05daeda0;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_05daea90;
    puStack_690 = &UNK_0dae4000;
    puStack_688 = &UNK_0dae4160;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dae3350(auStack_668);
    uStack_2f8 = CONCAT71(uStack_2f8._1_7_,(undefined1)uStack_238);
    puStack_308 = puStack_248;
    uStack_300 = uStack_240;
    puStack_318 = puStack_258;
    puStack_310 = puStack_250;
    puStack_328 = puStack_268;
    puStack_320 = puStack_260;
    func_0x048b0bc0(&iStack_650);
    puStack_368 = puStack_328;
    puStack_360 = puStack_320;
    puStack_358 = puStack_318;
    puStack_350 = puStack_310;
    puStack_348 = puStack_308;
    uStack_340 = uStack_300;
    uStack_338 = uStack_2f8;
    func_0x0dae2ae0(auStack_668,puStack_328 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da69acf:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da69acf;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae30a0(auStack_668,&puStack_368,&UNK_01292be9,6);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_05daeda0;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_05daea90;
    puStack_690 = &UNK_0dae4340;
    puStack_688 = &UNK_0dae44a0;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dae3350(auStack_668);
    uStack_2b8 = CONCAT71(uStack_2b8._1_7_,(undefined1)uStack_338);
    puStack_2c8 = puStack_348;
    uStack_2c0 = uStack_340;
    puStack_2d8 = puStack_358;
    puStack_2d0 = puStack_350;
    puStack_2e8 = puStack_368;
    puStack_2e0 = puStack_360;
    func_0x048b0bc0(&iStack_650);
    puStack_3e8 = puStack_2e8;
    puStack_3e0 = puStack_2e0;
    puStack_3d8 = puStack_2d8;
    puStack_3d0 = puStack_2d0;
    puStack_3c8 = puStack_2c8;
    uStack_3c0 = uStack_2c0;
    uStack_3b8 = uStack_2b8;
    func_0x0dae2ae0(auStack_668,puStack_2e8 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da69d5f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da69d5f;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae30a0(auStack_668,&puStack_3e8,&UNK_013294c4,6);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_05daeda0;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_05daea90;
    puStack_690 = &UNK_0dae4680;
    puStack_688 = &UNK_0dae47e0;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dae3350(auStack_668);
    uStack_278 = CONCAT71(uStack_278._1_7_,(undefined1)uStack_3b8);
    puStack_288 = puStack_3c8;
    uStack_280 = uStack_3c0;
    puStack_298 = puStack_3d8;
    puStack_290 = puStack_3d0;
    puStack_2a8 = puStack_3e8;
    puStack_2a0 = puStack_3e0;
    func_0x048b0bc0(&iStack_650);
    puStack_3a8 = puStack_2a8;
    puStack_3a0 = puStack_2a0;
    puStack_398 = puStack_298;
    puStack_390 = puStack_290;
    puStack_388 = puStack_288;
    uStack_380 = uStack_280;
    uStack_378 = uStack_278;
    func_0x0dae2ae0(auStack_668,puStack_2a8 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da69fef:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da69fef;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae30a0(auStack_668,&puStack_3a8,&UNK_014d77bd,4);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_05daeda0;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_05daea90;
    puStack_690 = &UNK_0dae49c0;
    puStack_688 = &UNK_0dae4b20;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dae3350(auStack_668);
    uStack_438 = CONCAT71(uStack_438._1_7_,(undefined1)uStack_378);
    puStack_448 = puStack_388;
    uStack_440 = uStack_380;
    puStack_458 = puStack_398;
    puStack_450 = puStack_390;
    puStack_468 = puStack_3a8;
    puStack_460 = puStack_3a0;
    func_0x048b0bc0(&iStack_650);
    puStack_4a8 = puStack_468;
    puStack_4a0 = puStack_460;
    puStack_498 = puStack_458;
    puStack_490 = puStack_450;
    puStack_488 = puStack_448;
    uStack_480 = uStack_440;
    uStack_478 = uStack_438;
    func_0x0dae2ae0(auStack_668,puStack_468 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da6a27f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da6a27f;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae30a0(auStack_668,&puStack_4a8,&UNK_014a254e,6);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_05daeda0;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_05daea90;
    puStack_690 = &UNK_0dae4d00;
    puStack_688 = &UNK_0dae4e60;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dae3350(auStack_668);
    uStack_3f8 = (undefined1)uStack_478;
    puStack_408 = puStack_488;
    uStack_400 = uStack_480;
    puStack_418 = puStack_498;
    puStack_410 = puStack_490;
    puStack_428 = puStack_4a8;
    puStack_420 = puStack_4a0;
    func_0x048b0bc0(&iStack_650);
    auStack_518._8_8_ = puStack_420;
    auStack_518._0_8_ = puStack_428;
    puStack_508 = puStack_418;
    puStack_500 = puStack_410;
    puStack_4f8 = puStack_408;
    uStack_4f0 = uStack_400;
    uStack_4e8 = CONCAT71(uStack_3f7,uStack_3f8);
    func_0x0dae2ae0(auStack_668,puStack_428 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da6a50f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da6a50f;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae30a0(auStack_668,auStack_518,&UNK_0122c1d6,4);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_05daeda0;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_05daea90;
    puStack_690 = &UNK_0dae5040;
    puStack_688 = &UNK_0dae51a0;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dae3350(auStack_668);
    uStack_528 = CONCAT71(uStack_528._1_7_,(char)uStack_4e8);
    puStack_538 = puStack_4f8;
    uStack_530 = uStack_4f0;
    puStack_548 = (undefined8 *)puStack_508;
    puStack_540 = puStack_500;
    puStack_558 = (undefined *)auStack_518._0_8_;
    puStack_550 = (undefined *)auStack_518._8_8_;
    func_0x048b0bc0(&iStack_650);
    func_0x0dae2ae0(auStack_668,puStack_558 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      lVar11 = *(long *)(piVar13 + 0xc);
      while (lVar11 != auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar11 = *(long *)(piVar13 + 0xc);
      }
LAB_0da6a75f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
    }
    else {
      if (iVar7 == 1) {
        piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
        iVar7 = *piVar13;
        while (iVar7 != iStack_650) {
          piVar13 = piVar13 + 0x1a;
          iVar7 = *piVar13;
        }
        goto LAB_0da6a75f;
      }
      if (iVar7 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0dae30a0(auStack_668,&puStack_558,&UNK_0143bb4a,5);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f0126a0;
    plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
    iStack_650 = (int)puVar12;
    uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
    uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
    uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
    plStack_6c8 = (long *)0x0;
    uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
    pcStack_6b8 = (code *)0x1;
    uStack_6b0 = 0;
    puStack_6a8 = &UNK_05daeda0;
    puStack_6a0 = &SUB_048b06d0;
    puStack_698 = &SUB_05daea90;
    puStack_690 = &UNK_0dae5380;
    puStack_688 = &UNK_0dae54e0;
    uStack_680 = 0;
    auStack_678 = ZEXT816(0);
    func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
    uVar5 = auStack_678._8_8_;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar10 = (long *)(auStack_678._8_8_ + 8);
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        FUN_0412c2d0(uVar5);
      }
    }
    func_0x0dae3350(auStack_668);
    func_0x048b0bc0(&iStack_650);
  }
  func_0x0da6f580(&puStack_598,&lStack_4e0,&DAT_01333a4c,0x1b);
  uStack_570 = 0x7ffd445100000003;
  func_0x0daab720(puStack_598 + 0x18);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f4918b8;
  auStack_668._8_8_ = 0;
  auStack_668._0_8_ = puVar12;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar5 = _UNK_01333a5f;
  uStack_648 = SUB81(puVar12,0);
  uStack_647 = (undefined1)((ulong)puVar12 >> 8);
  uStack_646 = (undefined1)((ulong)puVar12 >> 0x10);
  uStack_645 = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_644 = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_643 = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_642 = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_641 = (undefined1)((ulong)puVar12 >> 0x38);
  uStack_658 = 0x21;
  uStack_654 = 0;
  iStack_650 = 0x1b;
  uStack_64c = 0;
  uStack_64a = 0;
  uStack_649 = 0;
  *(ulong *)((long)puVar12 + 0xb) = CONCAT35(_UNK_01333a5c,_DAT_01333a57);
  *(undefined8 *)((long)puVar12 + 0x13) = uVar5;
  uVar5 = CONCAT53(_DAT_01333a57,_UNK_01333a54);
  *puVar12 = _DAT_01333a4c;
  puVar12[1] = uVar5;
  *(undefined1 *)((long)puVar12 + 0x1b) = 0;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar5 = _UNK_01333a5f;
  uStack_630 = SUB81(puVar12,0);
  uStack_62f = (undefined1)((ulong)puVar12 >> 8);
  uStack_62e = (undefined1)((ulong)puVar12 >> 0x10);
  uStack_62d = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_62c = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_62b = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_62a = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_629 = (undefined1)((ulong)puVar12 >> 0x38);
  uStack_640 = 0x21;
  cStack_63c = 0;
  uStack_63b = 0;
  uStack_639 = 0;
  uStack_638 = 0x1b;
  uStack_637 = 0;
  uStack_632 = 0;
  uStack_631 = 0;
  *(ulong *)((long)puVar12 + 0xb) = CONCAT35(_UNK_01333a5c,_DAT_01333a57);
  *(undefined8 *)((long)puVar12 + 0x13) = uVar5;
  uVar5 = CONCAT53(_DAT_01333a57,_UNK_01333a54);
  *puVar12 = _DAT_01333a4c;
  puVar12[1] = uVar5;
  *(undefined1 *)((long)puVar12 + 0x1b) = 0;
  lStack_600 = 0;
  lStack_618 = 0;
  auStack_610 = ZEXT816(0);
  auStack_628 = ZEXT816(0);
  uStack_5f8 = 0x3f600000;
  func_0x048afb10(auStack_628,8);
  lStack_5c8 = 0;
  uStack_5e0 = 0;
  auStack_5d8 = ZEXT816(0);
  lStack_5f0 = 0;
  lStack_5e8 = 0;
  uStack_5c0 = 0xff00;
  uStack_5bc = uStack_5bc & 0xffffff00;
  uStack_5b8 = uStack_5b8 & 0xffffff00;
  uStack_5b4 = uStack_5b4 & 0xffffff00;
  if ((DAT_0f7332a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7332a8), iVar7 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_570._4_4_);
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
  pcStack_6b8 = (code *)0x2;
  uStack_6b0 = 1;
  puStack_6a8 = &UNK_0dab8d30;
  puStack_6a0 = &UNK_07d98660;
  puStack_698 = &UNK_0dab8a30;
  puStack_690 = &UNK_0dab8d50;
  puStack_688 = &UNK_0dab9420;
  uStack_680 = 0;
  auStack_678 = ZEXT816(0);
  func_0x048b05a0(&puStack_590,&uStack_6d0);
  uVar5 = auStack_678._8_8_;
  if ((long *)auStack_678._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_678._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  puStack_548 = (undefined8 *)puStack_580;
  puStack_540 = puStack_578;
  puStack_558 = puStack_590;
  puStack_550 = (undefined *)puStack_588;
  func_0x0daacff0(&uStack_6d0,&puStack_558,auStack_668);
  func_0x048b0bc0(auStack_668);
  func_0x0da71510(param_1);
  func_0x0da6f580(&puStack_598,&lStack_4e0,&DAT_01486ac4,0x12);
  uStack_570 = 0x7782b8b100000003;
  func_0x0daab720(puStack_598 + 0x18);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f491940;
  auStack_668._8_8_ = 0;
  auStack_668._0_8_ = puVar12;
  uStack_658._1_3_ = (undefined3)_DAT_01486ac4;
  uStack_658 = CONCAT31(uStack_658._1_3_,0x24);
  uStack_654 = (undefined4)((ulong)_DAT_01486ac4 >> 0x18);
  iStack_650._0_1_ = (undefined1)((ulong)_DAT_01486ac4 >> 0x38);
  iStack_650._1_3_ = (undefined3)_UNK_01486acc;
  uStack_64c = (undefined2)((ulong)_UNK_01486acc >> 0x18);
  uStack_64a = (undefined1)((ulong)_UNK_01486acc >> 0x28);
  uStack_649 = (undefined1)((ulong)_UNK_01486acc >> 0x30);
  uStack_648 = (undefined1)((ulong)_UNK_01486acc >> 0x38);
  uStack_647 = 0x6e;
  uStack_646 = 0x67;
  uStack_645 = 0;
  uStack_640 = CONCAT31(uStack_658._1_3_,0x24);
  cStack_63c = (char)((ulong)_DAT_01486ac4 >> 0x18);
  uStack_63b = (undefined2)((ulong)_DAT_01486ac4 >> 0x20);
  uStack_639 = (undefined1)((ulong)_DAT_01486ac4 >> 0x30);
  uStack_637 = (undefined5)_UNK_01486acc;
  uStack_62f = 0x6e;
  uStack_62e = 0x67;
  uStack_62d = 0;
  auStack_628 = ZEXT816(0);
  lStack_618 = 0;
  auStack_610 = ZEXT816(0);
  lStack_600 = 0;
  uStack_5f8 = 0x3f600000;
  uStack_638 = (undefined1)iStack_650;
  uStack_632 = uStack_64a;
  uStack_631 = uStack_649;
  uStack_630 = uStack_648;
  func_0x048afb10(auStack_628,8);
  lStack_5c8 = 0;
  uStack_5e0 = 0;
  auStack_5d8 = ZEXT816(0);
  lStack_5f0 = 0;
  lStack_5e8 = 0;
  uStack_5c0 = 0xff00;
  uStack_5bc = uStack_5bc & 0xffffff00;
  uStack_5b8 = uStack_5b8 & 0xffffff00;
  uStack_5b4 = uStack_5b4 & 0xffffff00;
  if ((DAT_0f7332a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7332a8), iVar7 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_570._4_4_);
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
  pcStack_6b8 = (code *)0x2;
  uStack_6b0 = 1;
  puStack_6a8 = &UNK_0daba3f0;
  puStack_6a0 = &UNK_07d98660;
  puStack_698 = &UNK_0daba0f0;
  puStack_690 = &UNK_0daba410;
  puStack_688 = &UNK_0dabaae0;
  uStack_680 = 0;
  auStack_678 = ZEXT816(0);
  func_0x048b05a0(&puStack_590,&uStack_6d0);
  uVar5 = auStack_678._8_8_;
  if ((long *)auStack_678._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_678._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  puStack_548 = (undefined8 *)puStack_580;
  puStack_540 = puStack_578;
  puStack_558 = puStack_590;
  puStack_550 = (undefined *)puStack_588;
  func_0x0daacff0(&uStack_6d0,&puStack_558,auStack_668);
  func_0x048b0bc0(auStack_668);
  func_0x0d8a5280(param_1);
  func_0x0e4db7a0(param_1);
  if ((DAT_0f732e30 == '\0') && (iVar7 = func_0x04108328(&DAT_0f732e30), iVar7 != 0)) {
    func_0x0dabbbc0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f732db0,0xf53dab8);
    func_0x0410844d(&DAT_0f732e30);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f732db0 + 4)) * 8);
  do {
    lVar11 = *plVar10;
    if (lVar11 == -1) goto LAB_0da6ae00;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f732db0 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0da6ae00:
    puVar17 = &DAT_0f732db0;
    if (iRam000000000f732e10 != -0x2b3da790) goto LAB_0da6ae6d;
LAB_0da6ae2b:
    lVar11 = *(long *)(puVar17 + 0x68);
    if (lVar11 == 0) goto LAB_0da6ae6d;
    bVar20 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar9 = lVar11 + 9;
    if (bVar20) {
      lVar9 = *(long *)(lVar11 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x0daea2f0(&puStack_598,param_1,lVar9,uVar15);
  }
  else {
    puVar17 = (undefined *)plVar10[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0da6ae2b;
LAB_0da6ae6d:
    func_0x0daea2f0(&puStack_598,param_1,&DAT_013aca38,0x1d);
  }
  if ((char)uStack_568 != '\0') goto LAB_0da6c182;
  puStack_228 = puStack_598;
  puStack_220 = puStack_590;
  puStack_218 = (undefined *)puStack_588;
  puStack_210 = puStack_580;
  puStack_208 = puStack_578;
  uStack_200 = uStack_570;
  uStack_1f8 = uStack_568;
  if ((DAT_0f732d98 == '\0') && (iVar7 = func_0x04108328(&DAT_0f732d98), iVar7 != 0)) {
    func_0x0dabba80();
    func_0x0410844d(&DAT_0f732d98);
  }
  if ((DAT_0f72c370 == '\0') && (iVar7 = func_0x04108328(&DAT_0f72c370), iVar7 != 0)) {
    func_0x0d8b8690(0xf72c358);
    func_0x0410844d(&DAT_0f72c370);
  }
  auStack_668._0_4_ = _DAT_0f72c35c;
  auStack_668._8_8_ = &SUB_0d8b84a0;
  uStack_658 = 0xdaeaf10;
  uStack_654 = 0;
  func_0x05da1460(&puStack_220);
  lVar11 = func_0x0d8b84a0(puStack_228 + 0x18);
  if ((*(byte *)(lVar11 + 0x1a) & 4) != 0) {
    func_0x0daea8e0(auStack_668,puStack_228 + 0x18);
    iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
    if (iVar7 == 2) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x16;
        iVar7 = *piVar13;
      }
      puVar4 = *(undefined1 **)(piVar13 + 0xc);
      while (puVar4 != (undefined1 *)auStack_668._8_8_) {
        piVar13 = *(int **)(piVar13 + 0xe);
        puVar4 = *(undefined1 **)(piVar13 + 0xc);
      }
    }
    else {
      if (iVar7 != 1) {
        if (iVar7 == 0) {
          puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
          *puVar2 = *puVar2 | 0x40000;
        }
        goto LAB_0da6b043;
      }
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x1a;
        iVar7 = *piVar13;
      }
    }
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
LAB_0da6b043:
  uStack_238 = uStack_1f8;
  puStack_248 = puStack_208;
  uStack_240 = uStack_200;
  puStack_258 = puStack_218;
  puStack_250 = puStack_210;
  puStack_268 = puStack_228;
  puStack_260 = puStack_220;
  func_0x0daea8e0(auStack_668,puStack_228 + 0x18);
  iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
  if (iVar7 == 2) {
    piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
    iVar7 = *piVar13;
    while (iVar7 != iStack_650) {
      piVar13 = piVar13 + 0x16;
      iVar7 = *piVar13;
    }
    puVar4 = *(undefined1 **)(piVar13 + 0xc);
    while (puVar4 != (undefined1 *)auStack_668._8_8_) {
      piVar13 = *(int **)(piVar13 + 0xe);
      puVar4 = *(undefined1 **)(piVar13 + 0xc);
    }
LAB_0da6b0ff:
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
  else {
    if (iVar7 == 1) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x1a;
        iVar7 = *piVar13;
      }
      goto LAB_0da6b0ff;
    }
    if (iVar7 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0daeaf20(auStack_668,&puStack_268,&DAT_0145f6ec,0x10,0x10);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f0126a0;
  plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
  iStack_650 = (int)puVar12;
  uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
  uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
  pcStack_6b8 = (code *)0x1;
  uStack_6b0 = 0;
  puStack_6a8 = &UNK_05daeda0;
  puStack_6a0 = &SUB_048b06d0;
  puStack_698 = &SUB_05daea90;
  puStack_690 = &UNK_0daeb540;
  puStack_688 = &UNK_0daeb6a0;
  uStack_680 = 0;
  auStack_678 = ZEXT816(0);
  func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
  uVar5 = auStack_678._8_8_;
  if ((long *)auStack_678._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_678._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  func_0x0daeb240(auStack_668);
  uStack_2f8 = CONCAT71(uStack_2f8._1_7_,(undefined1)uStack_238);
  puStack_308 = puStack_248;
  uStack_300 = uStack_240;
  puStack_318 = puStack_258;
  puStack_310 = puStack_250;
  puStack_328 = puStack_268;
  puStack_320 = puStack_260;
  func_0x048b0bc0(&iStack_650);
  puStack_368 = puStack_328;
  puStack_360 = puStack_320;
  puStack_358 = puStack_318;
  puStack_350 = puStack_310;
  puStack_348 = puStack_308;
  uStack_340 = uStack_300;
  uStack_338 = uStack_2f8;
  func_0x0daeaf20(auStack_668,&puStack_368,&UNK_0119d269,0xd,0);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f0122d0;
  plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
  iStack_650 = (int)puVar12;
  uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
  uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
  pcStack_6b8 = (code *)0x1;
  uStack_6b0 = 0;
  puStack_6a8 = &UNK_05de9430;
  puStack_6a0 = &SUB_048b06d0;
  puStack_698 = &UNK_05de9110;
  puStack_690 = &UNK_0daeb880;
  puStack_688 = &UNK_0daeb9f0;
  uStack_680 = 0;
  auStack_678 = ZEXT816(0);
  func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
  uVar5 = auStack_678._8_8_;
  if ((long *)auStack_678._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_678._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  func_0x0daeb240(auStack_668);
  uStack_2b8 = CONCAT71(uStack_2b8._1_7_,(undefined1)uStack_338);
  puStack_2c8 = puStack_348;
  uStack_2c0 = uStack_340;
  puStack_2d8 = puStack_358;
  puStack_2d0 = puStack_350;
  puStack_2e8 = puStack_368;
  puStack_2e0 = puStack_360;
  func_0x048b0bc0(&iStack_650);
  puStack_3e8 = puStack_2e8;
  puStack_3e0 = puStack_2e0;
  puStack_3d8 = puStack_2d8;
  puStack_3d0 = puStack_2d0;
  puStack_3c8 = puStack_2c8;
  uStack_3c0 = uStack_2c0;
  uStack_3b8 = uStack_2b8;
  func_0x0daea8e0(auStack_668,puStack_2e8 + 0x18);
  iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
  if (iVar7 == 2) {
    piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
    iVar7 = *piVar13;
    while (iVar7 != iStack_650) {
      piVar13 = piVar13 + 0x16;
      iVar7 = *piVar13;
    }
    puVar4 = *(undefined1 **)(piVar13 + 0xc);
    while (puVar4 != (undefined1 *)auStack_668._8_8_) {
      piVar13 = *(int **)(piVar13 + 0xe);
      puVar4 = *(undefined1 **)(piVar13 + 0xc);
    }
LAB_0da6b55f:
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
  else {
    if (iVar7 == 1) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x1a;
        iVar7 = *piVar13;
      }
      goto LAB_0da6b55f;
    }
    if (iVar7 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0daeaf20(auStack_668,&puStack_3e8,&UNK_0123d56f,0xc,0x10);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0ef46ce8;
  plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
  iStack_650 = (int)puVar12;
  uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
  uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
  pcStack_6b8 = (code *)0x1;
  uStack_6b0 = 0;
  puStack_6a8 = &UNK_0490ce30;
  puStack_6a0 = &SUB_048b06d0;
  puStack_698 = &SUB_0490cb20;
  puStack_690 = &UNK_0daebbd0;
  puStack_688 = &UNK_0daebd30;
  uStack_680 = 0;
  auStack_678 = ZEXT816(0);
  func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
  uVar5 = auStack_678._8_8_;
  if ((long *)auStack_678._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_678._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  func_0x0daeb240(auStack_668);
  uStack_278 = CONCAT71(uStack_278._1_7_,(undefined1)uStack_3b8);
  puStack_288 = puStack_3c8;
  uStack_280 = uStack_3c0;
  puStack_298 = puStack_3d8;
  puStack_290 = puStack_3d0;
  puStack_2a8 = puStack_3e8;
  puStack_2a0 = puStack_3e0;
  func_0x048b0bc0(&iStack_650);
  puStack_3a8 = puStack_2a8;
  puStack_3a0 = puStack_2a0;
  puStack_398 = puStack_298;
  puStack_390 = puStack_290;
  puStack_388 = puStack_288;
  uStack_380 = uStack_280;
  uStack_378 = uStack_278;
  func_0x0daea8e0(auStack_668,puStack_2a8 + 0x18);
  iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
  if (iVar7 == 2) {
    piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
    iVar7 = *piVar13;
    while (iVar7 != iStack_650) {
      piVar13 = piVar13 + 0x16;
      iVar7 = *piVar13;
    }
    puVar4 = *(undefined1 **)(piVar13 + 0xc);
    while (puVar4 != (undefined1 *)auStack_668._8_8_) {
      piVar13 = *(int **)(piVar13 + 0xe);
      puVar4 = *(undefined1 **)(piVar13 + 0xc);
    }
LAB_0da6b7ff:
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
  else {
    if (iVar7 == 1) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x1a;
        iVar7 = *piVar13;
      }
      goto LAB_0da6b7ff;
    }
    if (iVar7 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0daeaf20(auStack_668,&puStack_3a8,&UNK_013ecc40,0x1d,0x10);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0ef46ef8;
  plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
  iStack_650 = (int)puVar12;
  uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
  uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
  pcStack_6b8 = (code *)0x1;
  uStack_6b0 = 0;
  puStack_6a8 = &UNK_04906f70;
  puStack_6a0 = &SUB_048b06d0;
  puStack_698 = &UNK_04906c50;
  puStack_690 = &UNK_0daebf10;
  puStack_688 = &UNK_0daec070;
  uStack_680 = 0;
  auStack_678 = ZEXT816(0);
  func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
  uVar5 = auStack_678._8_8_;
  if ((long *)auStack_678._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_678._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  func_0x0daeb240(auStack_668);
  uStack_438 = CONCAT71(uStack_438._1_7_,(undefined1)uStack_378);
  puStack_448 = puStack_388;
  uStack_440 = uStack_380;
  puStack_458 = puStack_398;
  puStack_450 = puStack_390;
  puStack_468 = puStack_3a8;
  puStack_460 = puStack_3a0;
  func_0x048b0bc0(&iStack_650);
  puStack_4a8 = puStack_468;
  puStack_4a0 = puStack_460;
  puStack_498 = puStack_458;
  puStack_490 = puStack_450;
  puStack_488 = puStack_448;
  uStack_480 = uStack_440;
  uStack_478 = uStack_438;
  func_0x0daea8e0(auStack_668,puStack_468 + 0x18);
  iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
  if (iVar7 == 2) {
    piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
    iVar7 = *piVar13;
    while (iVar7 != iStack_650) {
      piVar13 = piVar13 + 0x16;
      iVar7 = *piVar13;
    }
    puVar4 = *(undefined1 **)(piVar13 + 0xc);
    while (puVar4 != (undefined1 *)auStack_668._8_8_) {
      piVar13 = *(int **)(piVar13 + 0xe);
      puVar4 = *(undefined1 **)(piVar13 + 0xc);
    }
LAB_0da6ba9f:
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
  else {
    if (iVar7 == 1) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x1a;
        iVar7 = *piVar13;
      }
      goto LAB_0da6ba9f;
    }
    if (iVar7 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0daeaf20(auStack_668,&puStack_4a8,&UNK_0131a5b1,0x14,0x10);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0ef44b00;
  plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
  iStack_650 = (int)puVar12;
  uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
  uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
  pcStack_6b8 = (code *)0x1;
  uStack_6b0 = 0;
  puStack_6a8 = &UNK_048b3f30;
  puStack_6a0 = &SUB_048b06d0;
  puStack_698 = &SUB_048b2190;
  puStack_690 = &UNK_0daec250;
  puStack_688 = &UNK_0daec420;
  uStack_680 = 0;
  auStack_678 = ZEXT816(0);
  func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
  uVar5 = auStack_678._8_8_;
  if ((long *)auStack_678._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_678._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  func_0x0daeb240(auStack_668);
  uStack_3f8 = (undefined1)uStack_478;
  puStack_408 = puStack_488;
  uStack_400 = uStack_480;
  puStack_418 = puStack_498;
  puStack_410 = puStack_490;
  puStack_428 = puStack_4a8;
  puStack_420 = puStack_4a0;
  func_0x048b0bc0(&iStack_650);
  auStack_518._8_8_ = puStack_420;
  auStack_518._0_8_ = puStack_428;
  puStack_508 = puStack_418;
  puStack_500 = puStack_410;
  puStack_4f8 = puStack_408;
  uStack_4f0 = uStack_400;
  uStack_4e8 = CONCAT71(uStack_3f7,uStack_3f8);
  func_0x0daea8e0(auStack_668,puStack_428 + 0x18);
  iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
  if (iVar7 == 2) {
    piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
    iVar7 = *piVar13;
    while (iVar7 != iStack_650) {
      piVar13 = piVar13 + 0x16;
      iVar7 = *piVar13;
    }
    puVar4 = *(undefined1 **)(piVar13 + 0xc);
    while (puVar4 != (undefined1 *)auStack_668._8_8_) {
      piVar13 = *(int **)(piVar13 + 0xe);
      puVar4 = *(undefined1 **)(piVar13 + 0xc);
    }
LAB_0da6bd3f:
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
  else {
    if (iVar7 == 1) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x1a;
        iVar7 = *piVar13;
      }
      goto LAB_0da6bd3f;
    }
    if (iVar7 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0daeaf20(auStack_668,auStack_518,&UNK_01340d28,7,0x10);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f2ce5d8;
  plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
  iStack_650 = (int)puVar12;
  uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
  uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
  pcStack_6b8 = (code *)0x1;
  uStack_6b0 = 0;
  puStack_6a8 = &UNK_0da79540;
  puStack_6a0 = &SUB_048b06d0;
  puStack_698 = &SUB_0b6acf10;
  puStack_690 = &UNK_0daec600;
  puStack_688 = &UNK_0daec860;
  uStack_680 = 0;
  auStack_678 = ZEXT816(0);
  func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
  uVar5 = auStack_678._8_8_;
  if ((long *)auStack_678._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_678._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  func_0x0daeb240(auStack_668);
  uStack_528 = CONCAT71(uStack_528._1_7_,(char)uStack_4e8);
  puStack_538 = puStack_4f8;
  uStack_530 = uStack_4f0;
  puStack_548 = (undefined8 *)puStack_508;
  puStack_540 = puStack_500;
  puStack_558 = (undefined *)auStack_518._0_8_;
  puStack_550 = (undefined *)auStack_518._8_8_;
  func_0x048b0bc0(&iStack_650);
  func_0x0daea8e0(auStack_668,puStack_558 + 0x18);
  iVar7 = CONCAT13(uStack_649,CONCAT12(uStack_64a,uStack_64c));
  if (iVar7 == 2) {
    piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x60);
    iVar7 = *piVar13;
    while (iVar7 != iStack_650) {
      piVar13 = piVar13 + 0x16;
      iVar7 = *piVar13;
    }
    puVar4 = *(undefined1 **)(piVar13 + 0xc);
    while (puVar4 != (undefined1 *)auStack_668._8_8_) {
      piVar13 = *(int **)(piVar13 + 0xe);
      puVar4 = *(undefined1 **)(piVar13 + 0xc);
    }
LAB_0da6bf9f:
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
  else {
    if (iVar7 == 1) {
      piVar13 = *(int **)(*(long *)(CONCAT44(uStack_654,uStack_658) + 0x78) + 0x48);
      iVar7 = *piVar13;
      while (iVar7 != iStack_650) {
        piVar13 = piVar13 + 0x1a;
        iVar7 = *piVar13;
      }
      goto LAB_0da6bf9f;
    }
    if (iVar7 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_654,uStack_658) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0daeaf20(auStack_668,&puStack_558,&UNK_0124b94f,0x18,0x10);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0ef46ef8;
  plVar10 = (long *)CONCAT17(uStack_649,CONCAT16(uStack_64a,CONCAT24(uStack_64c,iStack_650)));
  iStack_650 = (int)puVar12;
  uStack_64c = (undefined2)((ulong)puVar12 >> 0x20);
  uStack_64a = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_649 = (undefined1)((ulong)puVar12 >> 0x38);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_658);
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
  pcStack_6b8 = (code *)0x1;
  uStack_6b0 = 0;
  puStack_6a8 = &UNK_04906f70;
  puStack_6a0 = &SUB_048b06d0;
  puStack_698 = &UNK_04906c50;
  puStack_690 = &UNK_0daeca40;
  puStack_688 = &UNK_0daecba0;
  uStack_680 = 0;
  auStack_678 = ZEXT816(0);
  func_0x048b05a0(auStack_668._8_8_,&uStack_6d0);
  uVar5 = auStack_678._8_8_;
  if ((long *)auStack_678._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_678._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  func_0x0daeb240(auStack_668);
  puVar17 = puStack_558;
  func_0x048b0bc0(&iStack_650);
  if ((DAT_0f732e30 == '\0') && (iVar7 = func_0x04108328(&DAT_0f732e30), iVar7 != 0)) {
    func_0x0dabbbc0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f732db0,0xf53dab8);
    func_0x0410844d(&DAT_0f732e30);
  }
  plVar10 = (long *)(*(long *)(puVar17 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(puVar17 + 0x20) - *(long *)(puVar17 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f732db0 + 4)) * 8);
  do {
    lVar11 = *plVar10;
    if (lVar11 == -1) goto LAB_0da6c140;
    plVar10 = (long *)(*(long *)(puVar17 + 0x30) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(puVar17 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f732db0 + 4))
  ;
  if (plVar10 == *(long **)(puVar17 + 0x38)) {
LAB_0da6c140:
    auStack_668._0_8_ = &DAT_0f732db0;
  }
  else {
    auStack_668._0_8_ = plVar10[2];
  }
  auStack_668._8_8_ = puVar17 + 0x18;
  func_0x0ed624b0(auStack_668,&UNK_0124b94f,0x18);
LAB_0da6c182:
  func_0x0da6f580(&puStack_598,&lStack_4e0,&DAT_013aca38,0x1d);
  uStack_570 = 0xd400296600000003;
  func_0x0daab720(puStack_598 + 0x18);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f4919c8;
  auStack_668._8_8_ = 0;
  auStack_668._0_8_ = puVar12;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar5 = _UNK_013aca4d;
  uStack_648 = SUB81(puVar12,0);
  uStack_647 = (undefined1)((ulong)puVar12 >> 8);
  uStack_646 = (undefined1)((ulong)puVar12 >> 0x10);
  uStack_645 = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_644 = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_643 = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_642 = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_641 = (undefined1)((ulong)puVar12 >> 0x38);
  uStack_658 = 0x21;
  uStack_654 = 0;
  iStack_650 = 0x1d;
  uStack_64c = 0;
  uStack_64a = 0;
  uStack_649 = 0;
  *(ulong *)((long)puVar12 + 0xd) = CONCAT53(_UNK_013aca48,_DAT_013aca45);
  *(undefined8 *)((long)puVar12 + 0x15) = uVar5;
  uVar5 = CONCAT35(_DAT_013aca45,_UNK_013aca40);
  *puVar12 = _DAT_013aca38;
  puVar12[1] = uVar5;
  *(undefined1 *)((long)puVar12 + 0x1d) = 0;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar5 = _UNK_013aca4d;
  uStack_630 = SUB81(puVar12,0);
  uStack_62f = (undefined1)((ulong)puVar12 >> 8);
  uStack_62e = (undefined1)((ulong)puVar12 >> 0x10);
  uStack_62d = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_62c = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_62b = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_62a = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_629 = (undefined1)((ulong)puVar12 >> 0x38);
  uStack_640 = 0x21;
  cStack_63c = 0;
  uStack_63b = 0;
  uStack_639 = 0;
  uStack_638 = 0x1d;
  uStack_637 = 0;
  uStack_632 = 0;
  uStack_631 = 0;
  *(ulong *)((long)puVar12 + 0xd) = CONCAT53(_UNK_013aca48,_DAT_013aca45);
  *(undefined8 *)((long)puVar12 + 0x15) = uVar5;
  uVar5 = CONCAT35(_DAT_013aca45,_UNK_013aca40);
  *puVar12 = _DAT_013aca38;
  puVar12[1] = uVar5;
  *(undefined1 *)((long)puVar12 + 0x1d) = 0;
  lStack_600 = 0;
  lStack_618 = 0;
  auStack_610 = ZEXT816(0);
  auStack_628 = ZEXT816(0);
  uStack_5f8 = 0x3f600000;
  func_0x048afb10(auStack_628,8);
  lStack_5c8 = 0;
  uStack_5e0 = 0;
  auStack_5d8 = ZEXT816(0);
  lStack_5f0 = 0;
  lStack_5e8 = 0;
  uStack_5c0 = 0xff00;
  uStack_5bc = uStack_5bc & 0xffffff00;
  uStack_5b8 = uStack_5b8 & 0xffffff00;
  uStack_5b4 = uStack_5b4 & 0xffffff00;
  if ((DAT_0f7332a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7332a8), iVar7 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_570._4_4_);
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
  pcStack_6b8 = (code *)0x2;
  uStack_6b0 = 1;
  puStack_6a8 = &UNK_0dabbe70;
  puStack_6a0 = &UNK_07d98660;
  puStack_698 = &UNK_0dabbb00;
  puStack_690 = &UNK_0dabbe90;
  puStack_688 = &UNK_0dabc560;
  uStack_680 = 0;
  auStack_678 = ZEXT816(0);
  func_0x048b05a0(&puStack_590,&uStack_6d0);
  uVar5 = auStack_678._8_8_;
  if ((long *)auStack_678._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_678._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  puStack_548 = (undefined8 *)puStack_580;
  puStack_540 = puStack_578;
  puStack_558 = puStack_590;
  puStack_550 = (undefined *)puStack_588;
  func_0x0daacff0(&uStack_6d0,&puStack_558,auStack_668);
  func_0x048b0bc0(auStack_668);
  func_0x0d8d8b00(param_1);
  func_0x0da6f580(&puStack_598,&lStack_4e0,&DAT_0124bde7,0x26);
  uStack_570 = 0xd487704f00000003;
  func_0x0daab720(puStack_598 + 0x18);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f491a50;
  auStack_668._8_8_ = 0;
  auStack_668._0_8_ = puVar12;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar5 = _UNK_0124bdff;
  uStack_648 = SUB81(puVar12,0);
  uStack_647 = (undefined1)((ulong)puVar12 >> 8);
  uStack_646 = (undefined1)((ulong)puVar12 >> 0x10);
  uStack_645 = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_644 = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_643 = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_642 = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_641 = (undefined1)((ulong)puVar12 >> 0x38);
  uStack_658 = 0x29;
  uStack_654 = 0;
  iStack_650 = 0x26;
  uStack_64c = 0;
  uStack_64a = 0;
  uStack_649 = 0;
  puVar12[2] = _DAT_0124bdf7;
  puVar12[3] = uVar5;
  uVar5 = _UNK_0124bdef;
  *puVar12 = _DAT_0124bde7;
  puVar12[1] = uVar5;
  *(undefined8 *)((long)puVar12 + 0x1e) = 0x676e696b63617274;
  *(undefined1 *)((long)puVar12 + 0x26) = 0;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar5 = _UNK_0124bdff;
  uStack_630 = SUB81(puVar12,0);
  uStack_62f = (undefined1)((ulong)puVar12 >> 8);
  uStack_62e = (undefined1)((ulong)puVar12 >> 0x10);
  uStack_62d = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_62c = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_62b = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_62a = (undefined1)((ulong)puVar12 >> 0x30);
  uStack_629 = (undefined1)((ulong)puVar12 >> 0x38);
  uStack_640 = 0x29;
  cStack_63c = 0;
  uStack_63b = 0;
  uStack_639 = 0;
  uStack_638 = 0x26;
  uStack_637 = 0;
  uStack_632 = 0;
  uStack_631 = 0;
  puVar12[2] = _DAT_0124bdf7;
  puVar12[3] = uVar5;
  uVar5 = _UNK_0124bdef;
  *puVar12 = _DAT_0124bde7;
  puVar12[1] = uVar5;
  *(undefined8 *)((long)puVar12 + 0x1e) = 0x676e696b63617274;
  *(undefined1 *)((long)puVar12 + 0x26) = 0;
  lStack_600 = 0;
  lStack_618 = 0;
  auStack_610 = ZEXT816(0);
  auStack_628 = ZEXT816(0);
  uStack_5f8 = 0x3f600000;
  func_0x048afb10(auStack_628,8);
  lStack_5c8 = 0;
  uStack_5e0 = 0;
  auStack_5d8 = ZEXT816(0);
  lStack_5f0 = 0;
  lStack_5e8 = 0;
  uStack_5c0 = 0xff00;
  uStack_5bc = uStack_5bc & 0xffffff00;
  uStack_5b8 = uStack_5b8 & 0xffffff00;
  uStack_5b4 = uStack_5b4 & 0xffffff00;
  if ((DAT_0f7332a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7332a8), iVar7 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_570._4_4_);
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
  pcStack_6b8 = (code *)0x2;
  uStack_6b0 = 1;
  puStack_6a8 = &UNK_0dabce90;
  puStack_6a0 = &UNK_07d98660;
  puStack_698 = &SUB_0d92ad70;
  puStack_690 = &UNK_0dabceb0;
  puStack_688 = &UNK_0dabd6a0;
  uStack_680 = 0;
  auStack_678 = ZEXT816(0);
  func_0x048b05a0(&puStack_590,&uStack_6d0);
  uVar5 = auStack_678._8_8_;
  if ((long *)auStack_678._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_678._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  puStack_548 = (undefined8 *)puStack_580;
  puStack_540 = puStack_578;
  puStack_558 = puStack_590;
  puStack_550 = (undefined *)puStack_588;
  func_0x0daacff0(&uStack_6d0,&puStack_558,auStack_668);
  func_0x048b0bc0(auStack_668);
  func_0x0d8d9750(param_1);
  func_0x0da6f580(&puStack_598,&lStack_4e0,&DAT_01333b7d,0x14);
  uStack_570 = 0x578c4c2100000003;
  func_0x0daab720(puStack_598 + 0x18);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f491ad8;
  auStack_668._8_8_ = 0;
  auStack_668._0_8_ = puVar12;
  uStack_658._1_3_ = (undefined3)_DAT_01333b7d;
  uStack_658 = CONCAT31(uStack_658._1_3_,0x28);
  uStack_654 = (undefined4)((ulong)_DAT_01333b7d >> 0x18);
  iStack_650._0_1_ = (undefined1)((ulong)_DAT_01333b7d >> 0x38);
  iStack_650._1_3_ = (undefined3)_UNK_01333b85;
  uStack_64c = (undefined2)((ulong)_UNK_01333b85 >> 0x18);
  uStack_64a = (undefined1)((ulong)_UNK_01333b85 >> 0x28);
  uStack_649 = (undefined1)((ulong)_UNK_01333b85 >> 0x30);
  uStack_648 = (undefined1)((ulong)_UNK_01333b85 >> 0x38);
  uStack_647 = 99;
  uStack_646 = 0x72;
  uStack_645 = 0x6f;
  uStack_644 = 0x70;
  uStack_643 = 0;
  uStack_640 = CONCAT31(uStack_658._1_3_,0x28);
  cStack_63c = (char)((ulong)_DAT_01333b7d >> 0x18);
  uStack_63b = (undefined2)((ulong)_DAT_01333b7d >> 0x20);
  uStack_639 = (undefined1)((ulong)_DAT_01333b7d >> 0x30);
  uStack_637 = (undefined5)_UNK_01333b85;
  uStack_62f = 99;
  uStack_62e = 0x72;
  uStack_62d = 0x6f;
  uStack_62c = 0x70;
  uStack_62b = 0;
  auStack_628 = ZEXT816(0);
  lStack_618 = 0;
  auStack_610 = ZEXT816(0);
  lStack_600 = 0;
  uStack_5f8 = 0x3f600000;
  uStack_638 = (undefined1)iStack_650;
  uStack_632 = uStack_64a;
  uStack_631 = uStack_649;
  uStack_630 = uStack_648;
  func_0x048afb10(auStack_628,8);
  lStack_5c8 = 0;
  uStack_5e0 = 0;
  auStack_5d8 = ZEXT816(0);
  lStack_5f0 = 0;
  lStack_5e8 = 0;
  uStack_5c0 = 0xff00;
  uStack_5bc = uStack_5bc & 0xffffff00;
  uStack_5b8 = uStack_5b8 & 0xffffff00;
  uStack_5b4 = uStack_5b4 & 0xffffff00;
  if ((DAT_0f7332a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7332a8), iVar7 != 0)) {
    func_0x0daab910(0xf733290);
    func_0x0410844d(&DAT_0f7332a8);
  }
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,uStack_570._4_4_);
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = (long *)((ulong)uStack_6c0 & 0xffffffff00000000);
  pcStack_6b8 = (code *)0x2;
  uStack_6b0 = 1;
  puStack_6a8 = &UNK_0dabdf10;
  puStack_6a0 = &UNK_07d98660;
  puStack_698 = &SUB_0d92c920;
  puStack_690 = &UNK_0dabdf30;
  puStack_688 = &UNK_0dabe710;
  uStack_680 = 0;
  auStack_678 = ZEXT816(0);
  func_0x048b05a0(&puStack_590,&uStack_6d0);
  uVar5 = auStack_678._8_8_;
  if ((long *)auStack_678._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_678._8_8_ + 8);
    lVar11 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
      FUN_0412c2d0(uVar5);
    }
  }
  puStack_548 = (undefined8 *)puStack_580;
  puStack_540 = puStack_578;
  puStack_558 = puStack_590;
  puStack_550 = (undefined *)puStack_588;
  func_0x0daacff0(&uStack_6d0,&puStack_558,auStack_668);
  func_0x048b0bc0(auStack_668);
  func_0x0d8da110(param_1);
  func_0x0da6f580(&puStac
/* truncated by DecompileTargets.java */


/* ---- referenced strings ----
 * 0x11abefa  minecraft:freezing_vulnerable
 * 0x11abf07  ezing_vulnerable
 * 0x11e093f  minecraft:collision_box
 * 0x126572c  minecraft:block_movement_slowdown_immunity
 * 0x126573c  movement_slowdown_immunity
 * 0x1265746  lowdown_immunity
 * 0x127f06d  minecraft:anger_level
 * 0x12fe1e6  minecraft:uses_legacy_ambient_sounds
 * 0x12fe1f6  egacy_ambient_sounds
 * 0x131867d  minecraft:freezing_immune
 * 0x1318686  :freezing_immune
 * 0x1333a4c  minecraft:exhaustion_values
 * 0x1333a57  xhaustion_values
 * 0x1333b6c  minecraft:barter
 * 0x139eefa  minecraft:damage_over_time
 * 0x139ef04  damage_over_time
 * 0x13aca38  minecraft:behavior.follow_mob
 * 0x13aca45  avior.follow_mob
 * 0x13ecdea  minecraft:can_stand_on_powder_snow
 * 0x13ecdfa  and_on_powder_snow
 * 0x1459095  [__dev_aid:actor_def_version]
 * 0x14590a2  tor_def_version]
 * 0x1486ac4  minecraft:flocking
 * 0x14e80e0  tor_def_version]
 */
