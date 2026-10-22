/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x63fbf70 (ELF vaddr 0x62fbf70)
 * Label: caller-of-callee
 * Body:  [[063fbf70, 063fc1d6] [063fc1e0, 063fc8a5] [063fc8b0, 063fce10] [063fce20, 063fd39f]]
 * Ghidra: FUN_063fbf70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_063fbf70(byte *param_1,long *param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined *puVar12;
  ulong uVar13;
  char cVar14;
  undefined4 uVar15;
  int iVar16;
  long lVar17;
  undefined8 uVar18;
  ulong *puVar19;
  uint uVar20;
  long *plVar21;
  undefined *puVar22;
  long *plVar23;
  long *unaff_R13;
  byte *pbVar24;
  ulong uVar25;
  bool bVar26;
  byte *pbStack_a28;
  undefined *puStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  long lStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined *puStack_9f0;
  uint uStack_9e8;
  undefined4 uStack_9e4;
  undefined2 uStack_9e0;
  long lStack_9d8;
  long lStack_9d0;
  long lStack_9c8;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined *puStack_980;
  byte bStack_978;
  byte *pbStack_968;
  undefined *puStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined *puStack_930;
  ulong uStack_928;
  long *plStack_918;
  long *plStack_910;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  ulong uStack_8f0;
  ulong uStack_8e8;
  undefined8 uStack_8d8;
  long *plStack_8d0;
  undefined *puStack_8c8;
  byte bStack_8c0;
  undefined7 uStack_8bf;
  undefined *puStack_8b8;
  byte *pbStack_8b0;
  byte *pbStack_8a8;
  undefined *puStack_8a0;
  byte *pbStack_898;
  undefined *puStack_890;
  byte *pbStack_888;
  ulong uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined *puStack_840;
  undefined4 uStack_838;
  uint uStack_828;
  undefined1 *puStack_750;
  undefined8 uStack_748;
  undefined1 auStack_740 [384];
  undefined2 uStack_5c0;
  undefined1 uStack_5be;
  undefined8 uStack_5bc;
  undefined8 uStack_5b0;
  undefined2 uStack_5a8;
  undefined *puStack_5a0;
  undefined2 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 *puStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined4 uStack_500;
  undefined1 uStack_4fc;
  undefined *puStack_4f8;
  undefined2 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 *puStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined4 uStack_458;
  undefined2 uStack_454;
  undefined8 uStack_450;
  undefined1 uStack_448;
  undefined8 uStack_438;
  long *plStack_430;
  long lStack_428;
  undefined *puStack_38;
  
  if ((DAT_0f7b8fb8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7b8fb8), iVar16 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  pbVar24 = param_1 + 1;
  bVar26 = (*param_1 & 1) == 0;
  pbStack_888 = *(byte **)(param_1 + 0x10);
  if (bVar26) {
    pbStack_888 = pbVar24;
  }
  uStack_880 = (ulong)(*param_1 >> 1);
  if (!bVar26) {
    uStack_880 = *(ulong *)(param_1 + 8);
  }
  cVar14 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&pbStack_888);
  if (cVar14 == '\0') {
    bVar26 = (*param_1 & 1) != 0;
    if (bVar26) {
      pbVar24 = *(byte **)(param_1 + 0x10);
    }
    param_2 = (long *)(ulong)(*param_1 >> 1);
    if (bVar26) {
      param_2 = *(long **)(param_1 + 8);
    }
    if (param_2 < (long *)0xfffffffffffffff8) {
      if (param_2 < (long *)0x17) {
        uStack_438 = CONCAT71(uStack_438._1_7_,(char)param_2 * '\x02');
        lVar17 = (long)&uStack_438 + 1;
        if (param_2 == (long *)0x0) goto LAB_063fc2b1;
      }
      else {
        uVar25 = 0x1a;
        if (((ulong)param_2 | 7) != 0x17) {
          uVar25 = ((ulong)param_2 | 7) + 1;
        }
        lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar25);
        if (lVar17 == 0) {
          FUN_0eec74c0(uVar25,0);
        }
        uStack_438 = uVar25 | 1;
        plStack_430 = param_2;
        lStack_428 = lVar17;
      }
      func_0x0eee2ee0(lVar17,pbVar24,param_2);
LAB_063fc2b1:
      *(undefined1 *)(lVar17 + (long)param_2) = 0;
      puVar19 = (ulong *)func_0x0412f0e0(&uStack_438,0,&UNK_0123edca,0x1f);
      uStack_868 = (undefined *)puVar19[2];
      uStack_878 = (byte *)*puVar19;
      uStack_870 = (undefined *)puVar19[1];
      *puVar19 = 0;
      puVar19[1] = 0;
      puVar19[2] = 0;
      if ((uStack_438 & 1) != 0) {
        func_0x0412a280(lStack_428,uStack_438 & 0xfffffffffffffffe);
      }
      uVar25 = (ulong)uStack_878;
      puVar1 = *(undefined4 **)(param_3 + 8);
      if (puVar1 < *(undefined4 **)(param_3 + 0x10)) {
        if (((ulong)uStack_878 & 1) == 0) {
          *(undefined **)(puVar1 + 4) = uStack_868;
          *puVar1 = (undefined4)uStack_878;
          puVar1[1] = uStack_878._4_4_;
          puVar1[2] = (undefined4)uStack_870;
          puVar1[3] = uStack_870._4_4_;
        }
        else {
          func_0x0412e5e0(puVar1,uStack_868,uStack_870);
        }
        *(undefined4 **)(param_3 + 8) = puVar1 + 6;
        *(undefined4 **)(param_3 + 8) = puVar1 + 6;
      }
      else {
        uVar18 = func_0x04909a40(param_3,&uStack_878);
        *(undefined8 *)(param_3 + 8) = uVar18;
        uVar25 = (ulong)uStack_878;
      }
      if ((uVar25 & 1) != 0) {
        func_0x0412a280(uStack_868,(ulong)uStack_878 & 0xfffffffffffffffe);
      }
      return 0;
    }
    func_0x04882e30();
LAB_063fd2bf:
    iVar16 = func_0x04108328(&DAT_0f774768);
    if (iVar16 != 0) {
      func_0x0ed58ba0(0xf7746f8);
      func_0x0eee2f40(&SUB_04904f60,0xf7746f8,0xf53dab8);
      func_0x0410844d(&DAT_0f774768);
    }
  }
  else {
    bVar26 = (*param_1 & 1) != 0;
    uStack_878 = pbVar24;
    if (bVar26) {
      uStack_878 = *(byte **)(param_1 + 0x10);
    }
    uStack_870 = (undefined *)(ulong)(*param_1 >> 1);
    if (bVar26) {
      uStack_870 = (undefined *)*(ulong *)(param_1 + 8);
    }
    uStack_868 = &UNK_0142e542;
    uStack_860 = (undefined8 *)0x9;
    param_1 = (byte *)&uStack_438;
    func_0x049151c0(param_1,&uStack_878,2,0x2f);
    puStack_890 = puStack_38;
    pbStack_898 = param_1;
    cVar14 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&pbStack_898);
    if (cVar14 == '\0') {
      if ((DAT_0f7b8fb8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7b8fb8), iVar16 != 0)) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
      }
      puStack_8a0 = puStack_38;
      pbStack_8a8 = param_1;
      (**(code **)(_DAT_0f7b8f98 + 0x80))(&uStack_878,&DAT_0f7b8f98,&pbStack_8a8);
      pbStack_a28 = (byte *)0xd1cff2edc0381001;
      puStack_a20 = &UNK_0140f690;
      uStack_a18 = 1;
      uStack_a10 = CONCAT44(uStack_a10._4_4_,0xa7);
      if ((byte)uStack_838 == 0) {
        func_0x0eedea30(&uStack_9b8);
        func_0x0eedeb80(2,0x2d,&uStack_878,&uStack_9b8,&pbStack_a28);
        if (((ulong)uStack_9b8 & 1) != 0) {
          func_0x0412a280(uStack_9a8,(ulong)uStack_9b8 & 0xfffffffffffffffe);
        }
      }
      lVar17 = uStack_850;
      if (((byte)uStack_838 & 1) == 0) {
        if (uStack_850 != 0) {
          while (lVar17 != uStack_848) {
            func_0x048b3e80(uStack_848 + -0x40);
            uStack_848 = uStack_848 + -0x40;
          }
          uStack_848 = lVar17;
          func_0x0412a280(uStack_850,(long)puStack_840 - uStack_850);
        }
        puVar12 = uStack_868;
        puVar22 = (undefined *)uStack_860;
        if (uStack_868 != (undefined *)0x0) {
          for (; puVar12 != puVar22; puVar22 = puVar22 + -0x50) {
            if ((puVar22[-8] == '\x01') && ((puVar22[-0x30] & 1) != 0)) {
              func_0x0412a280(*(undefined8 *)(puVar22 + -0x20),
                              *(ulong *)(puVar22 + -0x30) & 0xfffffffffffffffe);
            }
          }
          uStack_860 = (undefined8 *)puVar12;
          func_0x0412a280(uStack_868,uStack_858 - (long)uStack_868);
        }
      }
    }
    if (DAT_0f774768 == '\0') goto LAB_063fd2bf;
  }
  func_0x0ee382a0(&pbStack_a28,&UNK_0f02ff58);
  lStack_9d8 = 0;
  lStack_9d0 = 0;
  lStack_9c8 = 0;
  uStack_a10 = *param_2;
  lStack_a08 = param_2[1];
  uStack_a00 = param_2[2];
  uStack_9f8 = param_2[3];
  puStack_9f0 = (undefined *)param_2[4];
  uStack_9e8 = *(uint *)(param_2 + 5);
  uStack_9e4 = *(undefined4 *)((long)param_2 + 0x2c);
  uStack_9e0 = (undefined2)param_2[6];
  if (&uStack_a10 != param_2) {
    func_0x064436c0(&lStack_9d8,param_2[7],param_2[8],
                    (param_2[8] - param_2[7] >> 3) * -0x3333333333333333);
  }
  uStack_870 = (undefined *)0xf7746f8;
  uStack_868 = (undefined *)CONCAT44(uStack_868._4_4_,0xffffffff);
  uStack_860 = &uStack_850;
  uStack_858 = 0x800000000;
  puStack_750 = auStack_740;
  uStack_748 = 0x800000000;
  uStack_5c0 = 0xfffc;
  uStack_5be = 1;
  uStack_5bc = 0xffffffff00000000;
  uStack_5b0 = 0;
  uStack_5a8 = 0;
  uStack_878 = &UNK_0ef47258;
  uStack_598 = 0;
  puStack_5a0 = &UNK_0ef472c8;
  puStack_538 = &uStack_578;
  uStack_590 = 0;
  uStack_588 = 0;
  uStack_580 = 0;
  uStack_578 = 0;
  uStack_570 = 0;
  uStack_568 = 0;
  uStack_560 = 0;
  uStack_558 = 0;
  uStack_550 = 0x100;
  uStack_548 = 0;
  uStack_540 = 0;
  uStack_530 = 0;
  uStack_528 = 0;
  uStack_520 = 0;
  uStack_518 = 0;
  uStack_510 = 0;
  uStack_508 = 0x200;
  uStack_500 = 0x144;
  uStack_4fc = 0;
  uStack_4f0 = 0;
  puStack_4f8 = &UNK_0ef473d8;
  puStack_490 = &uStack_4d0;
  uStack_4e8 = 0;
  uStack_4e0 = 0;
  uStack_4d8 = 0;
  uStack_4d0 = 0;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  uStack_4b8 = 0;
  uStack_4b0 = 0;
  uStack_4a8 = 0x100;
  uStack_4a0 = 0;
  uStack_498 = 0;
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_488 = 0;
  uStack_480 = 0;
  uStack_468 = 0;
  uStack_460 = 0x200;
  uStack_458 = 0x144;
  uStack_454 = 0x2000;
  uStack_448 = 1;
  uStack_450 = 4;
  uStack_8f8 = &UNK_0f031ad0;
  uStack_940 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (uStack_940 == 0) {
    func_0x048b0de0(&uStack_9b8,&bStack_8c0);
    _DAT_0f54fd90 = (undefined4)uStack_9b8;
    uRam000000000f54fd94 = uStack_9b8._4_4_;
    uVar15 = (undefined4)uStack_9b0;
    uVar4 = uStack_9b0._4_4_;
    uStack_9b8 = (byte **)0x0;
    uStack_9b0 = (long *)0x0;
    plVar23 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar15;
    uRam000000000f54fd9c = uVar4;
    if (plVar23 != (long *)0x0) {
      LOCK();
      plVar21 = plVar23 + 1;
      lVar17 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
        func_0x0412c2d0(plVar23);
      }
    }
    plVar23 = uStack_9b0;
    if (uStack_9b0 != (long *)0x0) {
      LOCK();
      plVar21 = uStack_9b0 + 1;
      lVar17 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_9b0 + 0x10))(uStack_9b0);
        func_0x0412c2d0(plVar23);
      }
    }
    uStack_940 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  uStack_958 = &UNK_06464e40;
  uStack_950 = (code *)0x0;
  uStack_948 = CONCAT35(uStack_948._5_3_,0x4c29ad5f5);
  uStack_938 = 0;
  puStack_930 = (undefined *)0x0;
  uStack_9a8 = &UNK_06464e40;
  uStack_9a0 = (code *)0x0;
  uStack_998 = CONCAT35(uStack_998._5_3_,0x4c29ad5f5);
  pbStack_968 = (byte *)0x0;
  uStack_990 = 0xf774710;
  uStack_988 = 0;
  puStack_980 = &UNK_06464d60;
  uStack_9b8 = &pbStack_a28;
  uVar15 = func_0x0ed6b850(&uStack_878,&puStack_4f8,&uStack_9b8,&uStack_8f8);
  if ((uStack_9a0 != (code *)0x0) && ((*uStack_9a0)(&uStack_9b8), uStack_950 != (code *)0x0)) {
    (*uStack_950)(&pbStack_968);
  }
  if ((char)uVar15 == '\0') {
    func_0x0ed6c330(&uStack_9b8,&uStack_868);
    func_0x04a782c0(&pbStack_968,uStack_9b8,uStack_9b0,&UNK_013a8ff4,1);
    if (((ulong)pbStack_968 & 1) != 0) {
      func_0x0412a280(uStack_958,(ulong)pbStack_968 & 0xfffffffffffffffe);
    }
    plVar21 = (long *)uStack_9b8;
    plVar23 = uStack_9b0;
    if (uStack_9b8 != (byte **)0x0) {
      for (; plVar21 != plVar23; plVar23 = plVar23 + -3) {
        if ((*(byte *)(plVar23 + -3) & 1) != 0) {
          func_0x0412a280(plVar23[-1],plVar23[-3] & 0xfffffffffffffffe);
        }
      }
      uStack_9b0 = plVar21;
      func_0x0412a280(uStack_9b8,(long)uStack_9a8 - (long)uStack_9b8);
    }
    plVar23 = (long *)0x0;
    uVar25 = 0;
  }
  else {
    func_0x048e6440(&uStack_9b8,&uStack_878);
    uVar25 = (ulong)uStack_9b8 & 0xffffffffffffff00;
    puStack_900 = uStack_9a8;
    plVar23 = (long *)uStack_9b8;
    unaff_R13 = uStack_9b0;
  }
  func_0x048e65b0(&uStack_878);
  if (lStack_9d8 != 0) {
    lStack_9d0 = lStack_9d8;
    func_0x0412a280(lStack_9d8,lStack_9c8 - lStack_9d8);
  }
  if (((ulong)pbStack_a28 & 1) != 0) {
    func_0x0412a280(uStack_a18,(ulong)pbStack_a28 & 0xfffffffffffffffe);
  }
  if ((char)uVar15 == '\0') {
    return uVar15;
  }
  lVar17 = *param_2;
  lVar2 = param_2[1];
  uStack_828 = (uint)lVar2 & 0xffff;
  uStack_878 = (byte *)CONCAT44(uStack_878._4_4_,(int)((ulong)lVar17 >> 0x20));
  uStack_868 = (undefined *)
               (CONCAT44(uStack_868._4_4_,(int)((ulong)lVar17 >> 0x10)) & 0xffffffff0000ffff);
  uStack_858 = CONCAT44(uStack_858._4_4_,(int)lVar17) & 0xffffffff0000ffff;
  uStack_848 = CONCAT44(uStack_848._4_4_,(uint)(ushort)((ulong)lVar2 >> 0x30));
  uStack_838 = (undefined4)((ulong)lVar2 >> 0x10);
  func_0x0470d9a0(&pbStack_a28,&UNK_01287ba2,0x28,0x122112,&uStack_878);
  puVar19 = (ulong *)func_0x0412f8c0(&pbStack_a28,&UNK_012d8de1,5);
  uStack_8e8 = puVar19[2];
  uStack_8f8 = (undefined *)*puVar19;
  uStack_8f0 = puVar19[1];
  *puVar19 = 0;
  puVar19[1] = 0;
  puVar19[2] = 0;
  if (((ulong)pbStack_a28 & 1) != 0) {
    func_0x0412a280(uStack_a18,(ulong)pbStack_a28 & 0xfffffffffffffffe);
  }
  uStack_868 = (undefined *)((long)&uStack_8f8 + 1);
  uStack_860 = (undefined8 *)((ulong)uStack_8f8 >> 1 & 0x7f);
  if (((ulong)uStack_8f8 & 1) != 0) {
    uStack_860 = (undefined8 *)uStack_8f0;
    uStack_868 = (undefined *)uStack_8e8;
  }
  uStack_870 = puStack_38;
  uStack_878 = param_1;
  func_0x048ad670(&bStack_8c0,&uStack_878,2,0x2f);
  puVar22 = (undefined *)(ulong)(bStack_8c0 >> 1);
  pbVar24 = (byte *)&uStack_8bf;
  if ((bStack_8c0 & 1) != 0) {
    puVar22 = puStack_8b8;
    pbVar24 = pbStack_8b0;
  }
  plStack_918 = (long *)0x0;
  plStack_910 = (long *)0x0;
  if ((DAT_0f7b8fb8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7b8fb8), iVar16 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  uStack_9b8 = (byte **)pbVar24;
  uStack_9b0 = (long *)puVar22;
  (**(code **)(_DAT_0f7b8f98 + 0x10))(&pbStack_a28,&DAT_0f7b8f98,&uStack_9b8,&plStack_918,0x10e,0);
  uStack_838 = CONCAT31(uStack_838._1_3_,(char)uStack_9e8);
  if ((char)uStack_9e8 == '\0') {
    uStack_878 = pbStack_a28;
    uStack_870 = puStack_a20;
    uStack_868._0_4_ = (undefined4)uStack_a18;
    uStack_868._4_4_ = uStack_a18._4_4_;
    uStack_860._0_4_ = (undefined4)uStack_a10;
    uStack_860._4_4_ = uStack_a10._4_4_;
    uStack_858 = lStack_a08;
    uStack_850._0_4_ = (undefined4)uStack_a00;
    uStack_850._4_4_ = uStack_a00._4_4_;
    uStack_848._0_4_ = (undefined4)uStack_9f8;
    uStack_848._4_4_ = uStack_9f8._4_4_;
    puStack_840 = puStack_9f0;
    func_0x064439d0(&uStack_878);
    puStack_930 = puStack_840;
    uVar11 = uStack_848._4_4_;
    uVar10 = (undefined4)uStack_848;
    uVar9 = uStack_850._4_4_;
    uVar8 = (undefined4)uStack_850;
    uStack_948 = uStack_858;
    uVar7 = uStack_860._4_4_;
    uVar6 = (undefined4)uStack_860;
    uVar5 = uStack_868._4_4_;
    uVar4 = (undefined4)uStack_868;
    pbStack_a28 = uStack_878;
    puStack_a20 = uStack_870;
    uStack_868 = (undefined *)0x0;
    uStack_860 = (undefined8 *)0x0;
    uStack_858 = 0;
    uStack_850 = 0;
    uStack_848 = 0;
    puStack_840 = (undefined *)0x0;
    uStack_a18 = 0;
    uStack_a10 = 0;
    lStack_a08 = 0;
    uStack_a00 = 0;
    uStack_9f8 = 0;
    puStack_9f0 = (undefined *)0x0;
    uStack_928 = uStack_928 & 0xffffffffffffff00;
    pbStack_968 = uStack_878;
    puStack_960 = uStack_870;
    uStack_958 = (undefined *)CONCAT44(uVar5,uVar4);
    uStack_950 = (code *)CONCAT44(uVar7,uVar6);
    uStack_940 = CONCAT44(uVar9,uVar8);
    uStack_938 = CONCAT44(uVar11,uVar10);
    func_0x048e6d60(&pbStack_a28);
    goto LAB_063fce88;
  }
  if (((ulong)plVar23 & 1) == 0) {
    uStack_8d8 = (ulong)plVar23 & 0xff | uVar25;
    puStack_8c8 = puStack_900;
    uVar20 = (uint)plVar23;
    plStack_8d0 = unaff_R13;
  }
  else {
    func_0x0412e5e0(&uStack_8d8,puStack_900,unaff_R13);
    uVar20 = (uint)(byte)uStack_8d8;
  }
  bVar26 = (uVar20 & 1) != 0;
  puVar22 = (undefined *)((long)&uStack_8d8 + 1);
  if (bVar26) {
    puVar22 = puStack_8c8;
  }
  plVar21 = (long *)(ulong)(byte)((byte)uVar20 >> 1);
  if (bVar26) {
    plVar21 = plStack_8d0;
  }
  func_0x0ee76e70(&uStack_9b8,plStack_918,puVar22,plVar21);
  uStack_9e8 = CONCAT31(uStack_9e8._1_3_,bStack_978);
  if (bStack_978 == 0) {
    pbStack_a28 = (byte *)uStack_9b8;
    puStack_a20 = (undefined *)uStack_9b0;
    uStack_a18._0_4_ = SUB84(uStack_9a8,0);
    uStack_a18._4_4_ = uStack_9a8._4_4_;
    uStack_a10._0_4_ = SUB84(uStack_9a0,0);
    uStack_a10._4_4_ = uStack_9a0._4_4_;
    lStack_a08 = uStack_998;
    uStack_a00._0_4_ = (undefined4)uStack_990;
    uStack_a00._4_4_ = uStack_990._4_4_;
    uStack_9f8._0_4_ = (undefined4)uStack_988;
    uStack_9f8._4_4_ = uStack_988._4_4_;
    puStack_9f0 = puStack_980;
    func_0x06443a90(&pbStack_a28);
    puStack_930 = puStack_9f0;
    uVar11 = uStack_9f8._4_4_;
    uVar10 = (undefined4)uStack_9f8;
    uVar9 = uStack_a00._4_4_;
    uVar8 = (undefined4)uStack_a00;
    uStack_948 = lStack_a08;
    uVar7 = uStack_a10._4_4_;
    uVar6 = (undefined4)uStack_a10;
    uVar5 = uStack_a18._4_4_;
    uVar4 = (undefined4)uStack_a18;
    uStack_9b8 = (byte **)pbStack_a28;
    uStack_9b0 = (long *)puStack_a20;
    uStack_a18 = 0;
    uStack_a10 = 0;
    lStack_a08 = 0;
    uStack_a00 = 0;
    uStack_9f8 = 0;
    puStack_9f0 = (undefined *)0x0;
    uStack_9a8 = (undefined *)0x0;
    uStack_9a0 = (code *)0x0;
    uStack_998 = 0;
    uStack_990 = 0;
    uStack_988 = 0;
    puStack_980 = (undefined *)0x0;
    uStack_928 = uStack_928 & 0xffffffffffffff00;
    pbStack_968 = pbStack_a28;
    puStack_960 = puStack_a20;
    uStack_958 = (undefined *)CONCAT44(uVar5,uVar4);
    uStack_950 = (code *)CONCAT44(uVar7,uVar6);
    uStack_940 = CONCAT44(uVar9,uVar8);
    uStack_938 = CONCAT44(uVar11,uVar10);
    func_0x048e6d60(&uStack_9b8);
    if ((uStack_9e8 & 1) == 0) goto LAB_063fcdac;
  }
  else {
    pbStack_968 = (byte *)0x0;
    puStack_960 = (undefined *)0x0;
    uStack_958 = (undefined *)0x0;
    uStack_950 = (code *)0x0;
    uStack_948 = 0;
    uStack_940 = 0;
    uStack_938 = 0;
    puStack_930 = (undefined *)0x0;
    uStack_928 = 1;
    if ((bStack_978 & 1) == 0) {
LAB_063fcdac:
      lVar2 = uStack_a00;
      lVar17 = uStack_9f8;
      if (uStack_a00 != 0) {
        while (lVar2 != lVar17) {
          func_0x048b3e80(lVar17 + -0x40);
          lVar17 = lVar17 + -0x40;
        }
        uStack_9f8 = lVar2;
        func_0x0412a280(uStack_a00,(long)puStack_9f0 - uStack_a00);
      }
      lVar2 = uStack_a18;
      lVar17 = uStack_a10;
      if (uStack_a18 != 0) {
        for (; lVar2 != lVar17; lVar17 = lVar17 + -0x50) {
          if ((*(char *)(lVar17 + -8) == '\x01') && ((*(byte *)(lVar17 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(lVar17 + -0x20),
                            *(ulong *)(lVar17 + -0x30) & 0xfffffffffffffffe);
          }
        }
        uStack_a10 = lVar2;
        func_0x0412a280(uStack_a18,lStack_a08 - uStack_a18);
      }
    }
  }
  if ((uStack_8d8 & 1) != 0) {
    func_0x0412a280(puStack_8c8,uStack_8d8 & 0xfffffffffffffffe);
  }
LAB_063fce88:
  lVar17 = uStack_850;
  if ((byte)uStack_838 == '\0') {
    lVar2 = uStack_848;
    if (uStack_850 != 0) {
      while (lVar17 != lVar2) {
        func_0x048b3e80(lVar2 + -0x40);
        lVar2 = lVar2 + -0x40;
      }
      uStack_848 = lVar17;
      func_0x0412a280(uStack_850,(long)puStack_840 - uStack_850);
    }
    uVar13 = (ulong)uStack_868;
    uVar3 = (ulong)uStack_860;
    if (uStack_868 != (undefined *)0x0) {
      for (; uVar13 != uVar3; uVar3 = uVar3 - 0x50) {
        if ((*(char *)(uVar3 - 8) == '\x01') && ((*(byte *)(uVar3 - 0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(uVar3 - 0x20),
                          *(ulong *)(uVar3 - 0x30) & 0xfffffffffffffffe);
        }
      }
      uStack_860 = (undefined8 *)uVar13;
      func_0x0412a280(uStack_868,uStack_858 - (long)uStack_868);
    }
  }
  if (plStack_918 != (long *)0x0) {
    func_0x0ee56810(&uStack_878,&plStack_918);
    lVar17 = uStack_850;
    if ((byte)uStack_838 == '\0') {
      lVar2 = uStack_848;
      if (uStack_850 != 0) {
        while (lVar17 != lVar2) {
          func_0x048b3e80(lVar2 + -0x40);
          lVar2 = lVar2 + -0x40;
        }
        uStack_848 = lVar17;
        func_0x0412a280(uStack_850,(long)puStack_840 - uStack_850);
      }
      uVar13 = (ulong)uStack_868;
      uVar3 = (ulong)uStack_860;
      if (uStack_868 != (undefined *)0x0) {
        for (; uVar13 != uVar3; uVar3 = uVar3 - 0x50) {
          if ((*(char *)(uVar3 - 8) == '\x01') && ((*(byte *)(uVar3 - 0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(uVar3 - 0x20),
                            *(ulong *)(uVar3 - 0x30) & 0xfffffffffffffffe);
          }
        }
        uStack_860 = (undefined8 *)uVar13;
        func_0x0412a280(uStack_868,uStack_858 - (long)uStack_868);
      }
    }
  }
  plVar21 = plStack_910;
  plStack_910 = (long *)0x0;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
  }
  plVar21 = plStack_918;
  plStack_918 = (long *)0x0;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))();
  }
  if ((bStack_8c0 & 1) != 0) {
    func_0x0412a280(pbStack_8b0,CONCAT71(uStack_8bf,bStack_8c0) & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_8f8 & 1) != 0) {
    func_0x0412a280(uStack_8e8,(ulong)uStack_8f8 & 0xfffffffffffffffe);
  }
  uStack_878 = (byte *)0xd1cff2edc0381001;
  uStack_870 = &UNK_0140f690;
  uStack_868 = (undefined *)0x1;
  uStack_860 = (undefined8 *)CONCAT44(uStack_860._4_4_,0xbb);
  if ((byte)uStack_928 == 0) {
    func_0x0eedea30(&pbStack_a28);
    func_0x0eedeb80(2,0x2d,&pbStack_968,&pbStack_a28,&uStack_878);
    if (((ulong)pbStack_a28 & 1) != 0) {
      func_0x0412a280(uStack_a18,(ulong)pbStack_a28 & 0xfffffffffffffffe);
    }
  }
  lVar17 = uStack_940;
  if (((byte)uStack_928 & 1) == 0) {
    lVar2 = uStack_938;
    if (uStack_940 != 0) {
      while (lVar17 != lVar2) {
        func_0x048b3e80(lVar2 + -0x40);
        lVar2 = lVar2 + -0x40;
      }
      uStack_938 = lVar17;
      func_0x0412a280(uStack_940,(long)puStack_930 - uStack_940);
    }
    lVar2 = (long)uStack_958;
    lVar17 = (long)uStack_950;
    if (uStack_958 != (undefined *)0x0) {
      for (; lVar2 != lVar17; lVar17 = lVar17 + -0x50) {
        if ((*(char *)(lVar17 + -8) == '\x01') && ((*(byte *)(lVar17 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar17 + -0x20),
                          *(ulong *)(lVar17 + -0x30) & 0xfffffffffffffffe);
        }
      }
      uStack_950 = (code *)lVar2;
      func_0x0412a280(uStack_958,uStack_948 - (long)uStack_958);
    }
  }
  if (((ulong)plVar23 & 1) != 0) {
    func_0x0412a280(puStack_900,uVar25 | (byte)plVar23 & 0xfe);
  }
  return uVar15;
}


