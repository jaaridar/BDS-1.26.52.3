/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6d72dd0 (ELF vaddr 0x6c72dd0)
 * Label: caller-of-callee
 * Body:  [[06d72dd0, 06d735c9] [06d735d0, 06d73793] [06d737a0, 06d737d5] [06d737e0, 06d738a3] [06d738b0, 06d73958] [06d73960, 06d73af0] [06d73b00, 06d74020] [06d74030, 06d74178] [06d74180, 06d744eb]]
 * Ghidra: FUN_06d72dd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_06d72dd0(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  long *plVar13;
  int iVar14;
  undefined4 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  byte bVar19;
  undefined1 uVar20;
  byte *pbVar21;
  long lVar22;
  byte *pbVar23;
  long lVar24;
  bool bVar25;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined4 *puStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  long lStack_7a0;
  byte bStack_798;
  byte bStack_790;
  long *plStack_788;
  long *plStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined4 *puStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  long lStack_740;
  byte bStack_738;
  byte *pbStack_728;
  byte *pbStack_720;
  byte *pbStack_718;
  undefined4 uStack_708;
  undefined4 uStack_704;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined8 uStack_6f0;
  undefined4 *puStack_6e8;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined8 uStack_6d8;
  long lStack_6d0;
  byte bStack_6c8;
  undefined8 uStack_6b8;
  ulong uStack_6b0;
  long lStack_6a8;
  long lStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined4 *puStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  long lStack_660;
  byte bStack_658;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined4 *puStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  long lStack_610;
  byte bStack_608;
  undefined8 *puStack_5f8;
  char cStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined4 *puStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_5b0;
  byte bStack_5a8;
  undefined1 auStack_598 [4];
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined4 *puStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  long lStack_560;
  byte bStack_558;
  long lStack_550;
  undefined8 *puStack_548;
  undefined8 uStack_540;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined *puStack_430;
  undefined8 uStack_428;
  undefined4 uStack_420;
  undefined8 uStack_38;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar3 = (undefined8 *)*puVar2;
  if (((char *)*puVar3 == (char *)0x0) || (*(char *)*puVar3 == '\0')) {
LAB_06d74399:
    uStack_708 = _DAT_0f778530;
LAB_06d743b3:
    uVar20 = (undefined1)uStack_708;
  }
  else {
    (**(code **)(*(long *)puVar3[2] + 0x778))(&uStack_778);
    uStack_7d8 = (long)&uStack_778 + 1;
    uStack_7d0 = uStack_778 >> 1 & 0x7f;
    if ((uStack_778 & 1) != 0) {
      uStack_7d0 = uStack_770;
      uStack_7d8 = (ulong)uStack_768;
    }
    uStack_7c8 = (undefined4 *)&UNK_014168e5;
    uStack_7c0 = (undefined4 *)0x12;
    func_0x049151c0(&uStack_438,&uStack_7d8,2,0x2f);
    if ((uStack_778 & 1) != 0) {
      func_0x0412a280(uStack_768,uStack_778 & 0xfffffffffffffffe);
    }
    puStack_5f8 = puVar3 + 0x67;
    cStack_5f0 = '\x01';
    func_0x0412d550(puStack_5f8);
    plStack_788 = (long *)0x0;
    plStack_780 = (long *)0x0;
    if ((DAT_0f7b8fb8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f7b8fb8), iVar14 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      FUN_0410844d(&DAT_0f7b8fb8);
    }
    uStack_540 = uStack_38;
    puStack_548 = &uStack_438;
    (**(code **)(_DAT_0f7b8f98 + 0x10))(&uStack_7d8,&DAT_0f7b8f98,&puStack_548,&plStack_788,0x137,0)
    ;
    plVar13 = plStack_788;
    bStack_658 = bStack_798;
    if (bStack_798 == 0) {
      uStack_698 = uStack_7d8;
      uStack_690 = uStack_7d0;
      uStack_688._0_4_ = SUB84(uStack_7c8,0);
      uStack_688._4_4_ = uStack_7c8._4_4_;
      uStack_680._0_4_ = SUB84(uStack_7c0,0);
      uStack_680._4_4_ = uStack_7c0._4_4_;
      puStack_678 = puStack_7b8;
      uStack_670._0_4_ = (undefined4)uStack_7b0;
      uStack_670._4_4_ = uStack_7b0._4_4_;
      uStack_668._0_4_ = (undefined4)uStack_7a8;
      uStack_668._4_4_ = uStack_7a8._4_4_;
      lStack_660 = lStack_7a0;
      func_0x06d74690(&uStack_698,&uStack_438);
      lStack_6d0 = lStack_660;
      uVar8 = uStack_668._4_4_;
      uVar6 = (undefined4)uStack_668;
      uStack_6dc = uStack_670._4_4_;
      uStack_6e0 = (undefined4)uStack_670;
      puStack_6e8 = puStack_678;
      uVar5 = uStack_680._4_4_;
      uVar4 = (undefined4)uStack_680;
      uStack_6f4 = uStack_688._4_4_;
      uStack_6f8 = (undefined4)uStack_688;
      uStack_478 = (undefined4)uStack_698;
      uStack_474 = uStack_698._4_4_;
      uStack_470 = (undefined4)uStack_690;
      uStack_46c = uStack_690._4_4_;
      uStack_688 = 0;
      uStack_680 = 0;
      puStack_678 = (undefined4 *)0x0;
      uStack_670 = 0;
      uStack_668 = 0;
      lStack_660 = 0;
      uStack_468 = 0;
      uStack_460 = 0;
      uStack_458 = 0;
      uStack_450 = 0;
      uStack_448 = 0;
      uStack_440 = 0;
      bStack_6c8 = 0;
      uStack_708 = (undefined4)uStack_698;
      uStack_704 = uStack_698._4_4_;
      uStack_700 = (undefined4)uStack_690;
      uStack_6fc = uStack_690._4_4_;
      uStack_6f0 = CONCAT44(uVar5,uVar4);
      uStack_6d8 = CONCAT44(uVar8,uVar6);
      func_0x048e6d60(&uStack_478);
      func_0x0ee38090(&uStack_698);
      func_0x048f9be0(&plStack_788);
      func_0x06cfcdf0(&puStack_5f8);
    }
    else {
      pbStack_728 = (byte *)0x0;
      pbStack_720 = (byte *)0x0;
      pbStack_718 = (byte *)0x0;
      lStack_6a0 = 0;
      lVar18 = plStack_788[3];
      if (lVar18 == 0) {
        lVar22 = 0;
      }
      else {
        lVar22 = lVar18 + 8;
        func_0x0412d770(lVar22);
      }
      (**(code **)(*plVar13 + 0x78))(&uStack_7d8,plVar13,&lStack_6a0);
      if (lVar18 != 0) {
        func_0x0412d790(lVar22);
      }
      puVar12 = puStack_7b8;
      puVar15 = uStack_7c0;
      uVar11 = _UNK_0f089464;
      uVar10 = _UNK_0f089460;
      uVar9 = _UNK_0f08945c;
      uVar8 = _UNK_0f089454;
      uVar6 = _UNK_0f089450;
      uVar5 = _UNK_0f08944c;
      uVar4 = _DAT_0f089448;
      bStack_738 = bStack_798;
      if (bStack_798 == 0) {
        uStack_778 = uStack_7d8;
        uStack_770 = uStack_7d0;
        uStack_768 = uStack_7c8;
        uStack_760 = uStack_7c0;
        puStack_758 = puStack_7b8;
        uStack_750 = uStack_7b0;
        uStack_748 = uStack_7a8;
        lStack_740 = lStack_7a0;
        uStack_7c8 = (undefined4 *)CONCAT44(_UNK_0f08945c,_DAT_0f089458);
        uStack_7c0 = (undefined4 *)CONCAT44(_UNK_0f089464,_UNK_0f089460);
        uStack_7d8 = CONCAT44(_UNK_0f08944c,_DAT_0f089448);
        uStack_7d0 = CONCAT44(_UNK_0f089454,_UNK_0f089450);
        puStack_7b8 = (undefined4 *)((ulong)puStack_7b8 & 0xffffffffffffff00);
        bStack_790 = 0;
        if (puVar15 < puVar12) {
          puVar15[4] = _DAT_0f089458;
          puVar15[5] = uVar9;
          puVar15[6] = uVar10;
          puVar15[7] = uVar11;
          *puVar15 = uVar4;
          puVar15[1] = uVar5;
          puVar15[2] = uVar6;
          puVar15[3] = uVar8;
          *(undefined1 *)(puVar15 + 8) = 0;
          *(undefined1 *)(puVar15 + 0x12) = 0;
          uStack_580 = puVar15 + 0x14;
        }
        else {
          uStack_760 = (undefined4 *)func_0x0489d2c0(&uStack_768,&uStack_7d8);
          uStack_580 = uStack_760;
          if (((bStack_790 & 1) != 0) && (((ulong)puStack_7b8 & 1) != 0)) {
            func_0x0412a280(uStack_7a8,(ulong)puStack_7b8 & 0xfffffffffffffffe);
            uStack_580 = uStack_760;
          }
        }
        lStack_560 = lStack_740;
        uStack_568 = uStack_748;
        uStack_570 = uStack_750;
        puStack_578 = puStack_758;
        uStack_588 = uStack_768;
        uStack_768 = (undefined4 *)0x0;
        uStack_760 = (undefined4 *)0x0;
        puStack_758 = (undefined4 *)0x0;
        uStack_750 = 0;
        uStack_748 = 0;
        lStack_740 = 0;
        bStack_558 = 0;
        auStack_598 = (undefined1  [4])(uint)uStack_778;
        uStack_594 = uStack_778._4_4_;
        uStack_590 = (undefined4)uStack_770;
        uStack_58c = uStack_770._4_4_;
      }
      else if (lStack_6a0 == 0) {
        bStack_558 = 1;
      }
      else {
        uStack_6b8 = 0;
        uStack_6b0 = 0;
        lStack_6a8 = 0;
        func_0x0412ffc0(&uStack_6b8,lStack_6a0,0);
        lVar18 = (long)&uStack_6b8 + 1;
        if ((uStack_6b8 & 1) != 0) {
          lVar18 = lStack_6a8;
        }
        func_0x0ee768f0(&uStack_7d8,plStack_788,lVar18,lStack_6a0,&lStack_550);
        puVar12 = puStack_7b8;
        puVar15 = uStack_7c0;
        uVar11 = _UNK_0f089484;
        uVar10 = _UNK_0f089480;
        uVar9 = _UNK_0f08947c;
        uVar8 = _UNK_0f089474;
        uVar6 = _UNK_0f089470;
        uVar5 = _UNK_0f08946c;
        uVar4 = _DAT_0f089468;
        bStack_5a8 = bStack_798;
        if (bStack_798 == 0) {
          uStack_5e8 = uStack_7d8;
          uStack_5e0 = uStack_7d0;
          uStack_5d8 = uStack_7c8;
          uStack_5d0 = uStack_7c0;
          puStack_5c8 = puStack_7b8;
          uStack_5c0 = uStack_7b0;
          uStack_5b8 = uStack_7a8;
          lStack_5b0 = lStack_7a0;
          uStack_7c8 = (undefined4 *)CONCAT44(_UNK_0f08947c,_DAT_0f089478);
          uStack_7c0 = (undefined4 *)CONCAT44(_UNK_0f089484,_UNK_0f089480);
          uStack_7d8 = CONCAT44(_UNK_0f08946c,_DAT_0f089468);
          uStack_7d0 = CONCAT44(_UNK_0f089474,_UNK_0f089470);
          puStack_7b8 = (undefined4 *)((ulong)puStack_7b8 & 0xffffffffffffff00);
          bStack_790 = 0;
          if (puVar15 < puVar12) {
            puVar15[4] = _DAT_0f089478;
            puVar15[5] = uVar9;
            puVar15[6] = uVar10;
            puVar15[7] = uVar11;
            *puVar15 = uVar4;
            puVar15[1] = uVar5;
            puVar15[2] = uVar6;
            puVar15[3] = uVar8;
            *(undefined1 *)(puVar15 + 8) = 0;
            *(undefined1 *)(puVar15 + 0x12) = 0;
            uStack_580 = puVar15 + 0x14;
          }
          else {
            uStack_5d0 = (undefined4 *)func_0x0489d2c0(&uStack_5d8,&uStack_7d8);
            uStack_580 = uStack_5d0;
            if (((bStack_790 & 1) != 0) && (((ulong)puStack_7b8 & 1) != 0)) {
              func_0x0412a280(uStack_7a8,(ulong)puStack_7b8 & 0xfffffffffffffffe);
              uStack_580 = uStack_5d0;
            }
          }
          lStack_560 = lStack_5b0;
          uStack_568 = uStack_5b8;
          uStack_570 = uStack_5c0;
          puStack_578 = puStack_5c8;
          uStack_588 = uStack_5d8;
          uStack_5d8 = (undefined4 *)0x0;
          uStack_5d0 = (undefined4 *)0x0;
          puStack_5c8 = (undefined4 *)0x0;
          uStack_5c0 = 0;
          uStack_5b8 = 0;
          lStack_5b0 = 0;
          bStack_558 = 0;
          auStack_598 = (undefined1  [4])(uint)uStack_5e8;
          uStack_594 = uStack_5e8._4_4_;
          uStack_590 = (undefined4)uStack_5e0;
          uStack_58c = uStack_5e0._4_4_;
        }
        else {
          if (lStack_550 == lStack_6a0) {
            uVar17 = uStack_6b8 >> 1 & 0x7f;
            lVar18 = (long)&uStack_6b8 + 1;
            if ((uStack_6b8 & 1) != 0) {
              uVar17 = uStack_6b0;
              lVar18 = lStack_6a8;
            }
            func_0x0edfe0e0(lVar18,uVar17,10,&pbStack_728);
          }
          func_0x0ee37d00(auStack_598,1);
        }
        lVar18 = uStack_5c0;
        if (bStack_5a8 == 0) {
          lVar22 = uStack_5b8;
          if (uStack_5c0 != 0) {
            while (lVar18 != lVar22) {
              func_0x048b3e80(lVar22 + -0x40);
              lVar22 = lVar22 + -0x40;
            }
            uStack_5b8 = lVar18;
            func_0x0412a280(uStack_5c0,lStack_5b0 - uStack_5c0);
          }
          lVar22 = (long)uStack_5d8;
          lVar18 = (long)uStack_5d0;
          if (uStack_5d8 != (undefined4 *)0x0) {
            for (; lVar22 != lVar18; lVar18 = lVar18 + -0x50) {
              if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                                *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
              }
            }
            uStack_5d0 = (undefined4 *)lVar22;
            func_0x0412a280(uStack_5d8,(long)puStack_5c8 - (long)uStack_5d8);
          }
        }
        if ((uStack_6b8 & 1) != 0) {
          func_0x0412a280(lStack_6a8,uStack_6b8 & 0xfffffffffffffffe);
        }
      }
      lVar18 = uStack_750;
      if (bStack_738 == 0) {
        lVar22 = uStack_748;
        if (uStack_750 != 0) {
          while (lVar18 != lVar22) {
            func_0x048b3e80(lVar22 + -0x40);
            lVar22 = lVar22 + -0x40;
          }
          uStack_748 = lVar18;
          func_0x0412a280(uStack_750,lStack_740 - uStack_750);
        }
        uVar16 = (ulong)uStack_768;
        uVar17 = (ulong)uStack_760;
        if (uStack_768 != (undefined4 *)0x0) {
          for (; uVar16 != uVar17; uVar17 = uVar17 - 0x50) {
            if ((*(char *)(uVar17 - 8) == '\x01') && ((*(byte *)(uVar17 - 0x30) & 1) != 0)) {
              func_0x0412a280(*(undefined8 *)(uVar17 - 0x20),
                              *(ulong *)(uVar17 - 0x30) & 0xfffffffffffffffe);
            }
          }
          uStack_760 = (undefined4 *)uVar16;
          func_0x0412a280(uStack_768,(long)puStack_758 - (long)uStack_768);
        }
      }
      bVar19 = bStack_558;
      pbVar7 = pbStack_720;
      bStack_608 = bStack_558;
      if (bStack_558 == 0) {
        uStack_648 = CONCAT44(uStack_594,auStack_598);
        uStack_640 = CONCAT44(uStack_58c,uStack_590);
        uStack_638._0_4_ = SUB84(uStack_588,0);
        uStack_638._4_4_ = uStack_588._4_4_;
        uStack_630._0_4_ = SUB84(uStack_580,0);
        uStack_630._4_4_ = uStack_580._4_4_;
        puStack_628 = puStack_578;
        uStack_620._0_4_ = (undefined4)uStack_570;
        uStack_620._4_4_ = uStack_570._4_4_;
        uStack_618._0_4_ = (undefined4)uStack_568;
        uStack_618._4_4_ = uStack_568._4_4_;
        lStack_610 = lStack_560;
        func_0x06d747d0(&uStack_648,&uStack_438);
        lStack_6d0 = lStack_610;
        uVar8 = uStack_618._4_4_;
        uVar6 = (undefined4)uStack_618;
        uStack_6dc = uStack_620._4_4_;
        uStack_6e0 = (undefined4)uStack_620;
        puStack_6e8 = puStack_628;
        uVar5 = uStack_630._4_4_;
        uVar4 = (undefined4)uStack_630;
        uStack_6f4 = uStack_638._4_4_;
        uStack_6f8 = (undefined4)uStack_638;
        uStack_4b8 = (undefined4)uStack_648;
        uStack_4b4 = uStack_648._4_4_;
        uStack_4b0 = (undefined4)uStack_640;
        uStack_4ac = uStack_640._4_4_;
        uStack_638 = 0;
        uStack_630 = 0;
        puStack_628 = (undefined4 *)0x0;
        uStack_620 = 0;
        uStack_618 = 0;
        lStack_610 = 0;
        uStack_4a8 = 0;
        uStack_4a0 = 0;
        uStack_498 = 0;
        uStack_490 = 0;
        uStack_488 = 0;
        uStack_480 = 0;
        bStack_6c8 = 0;
        uStack_708 = (undefined4)uStack_648;
        uStack_704 = uStack_648._4_4_;
        uStack_700 = (undefined4)uStack_640;
        uStack_6fc = uStack_640._4_4_;
        uStack_6f0 = CONCAT44(uVar5,uVar4);
        uStack_6d8 = CONCAT44(uVar8,uVar6);
        func_0x048e6d60(&uStack_4b8);
        bVar25 = false;
        lVar18 = uStack_620;
        bVar19 = bStack_608;
joined_r0x06d73823:
        uStack_620 = lVar18;
        if ((bVar19 & 1) == 0) {
          lVar22 = uStack_618;
          if (lVar18 != 0) {
            while (lVar18 != lVar22) {
              func_0x048b3e80(lVar22 + -0x40);
              lVar22 = lVar22 + -0x40;
            }
            uStack_618 = lVar18;
            func_0x0412a280(uStack_620,lStack_610 - uStack_620);
          }
          lVar22 = uStack_638;
          lVar18 = uStack_630;
          if (uStack_638 != 0) {
            for (; lVar22 != lVar18; lVar18 = lVar18 + -0x50) {
              if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                                *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
              }
            }
            uStack_630 = lVar22;
            func_0x0412a280(uStack_638,(long)puStack_628 - uStack_638);
          }
        }
        pbVar23 = pbStack_728;
        pbVar7 = pbStack_720;
        if (pbStack_728 != (byte *)0x0) {
          for (; pbVar23 != pbVar7; pbVar7 = pbVar7 + -0x18) {
            if ((pbVar7[-0x18] & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(pbVar7 + -8),
                              *(ulong *)(pbVar7 + -0x18) & 0xfffffffffffffffe);
            }
          }
          pbStack_720 = pbVar23;
          func_0x0412a280(pbStack_728,(long)pbStack_718 - (long)pbStack_728);
        }
        lVar18 = uStack_670;
        if (bStack_658 == 0) {
          if (uStack_670 != 0) {
            while (lVar18 != uStack_668) {
              func_0x048b3e80(uStack_668 + -0x40);
              uStack_668 = uStack_668 + -0x40;
            }
            uStack_668 = lVar18;
            func_0x0412a280(uStack_670,lStack_660 - uStack_670);
          }
          lVar22 = uStack_688;
          lVar18 = uStack_680;
          if (uStack_688 != 0) {
            for (; lVar22 != lVar18; lVar18 = lVar18 + -0x50) {
              if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                                *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
              }
            }
            uStack_680 = lVar22;
            func_0x0412a280(uStack_688,(long)puStack_678 - uStack_688);
          }
        }
        if ((plStack_788 != (long *)0x0) &&
           (func_0x0ee56810(&uStack_7d8,&plStack_788), lVar18 = uStack_7b0, bStack_798 == 0)) {
          if (uStack_7b0 != 0) {
            while (lVar18 != uStack_7a8) {
              func_0x048b3e80(uStack_7a8 + -0x40);
              uStack_7a8 = uStack_7a8 + -0x40;
            }
            uStack_7a8 = lVar18;
            func_0x0412a280(uStack_7b0,lStack_7a0 - uStack_7b0);
          }
          puVar12 = uStack_7c8;
          puVar15 = uStack_7c0;
          if (uStack_7c8 != (undefined4 *)0x0) {
            for (; puVar12 != puVar15; puVar15 = puVar15 + -0x14) {
              if ((*(char *)(puVar15 + -2) == '\x01') && ((*(byte *)(puVar15 + -0xc) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(puVar15 + -8),
                                *(ulong *)(puVar15 + -0xc) & 0xfffffffffffffffe);
              }
            }
            uStack_7c0 = puVar12;
            func_0x0412a280(uStack_7c8,(long)puStack_7b8 - (long)uStack_7c8);
          }
        }
        plVar13 = plStack_780;
        plStack_780 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
        }
        plVar13 = plStack_788;
        plStack_788 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
        }
        if (cStack_5f0 == '\x01') {
          func_0x0412d610(puStack_5f8);
        }
        if (bVar25) goto LAB_06d743b3;
      }
      else {
        pbVar23 = pbStack_728;
        if (pbStack_728 == pbStack_720) {
LAB_06d737f4:
          if (pbVar23 != pbVar7) {
            bStack_6c8 = 1;
            bVar25 = true;
            uStack_708 = _DAT_0f778530;
            uStack_704 = uRam000000000f778534;
            uStack_700 = _DAT_0f778538;
            uStack_6fc = uRam000000000f77853c;
            lVar18 = uStack_620;
            goto joined_r0x06d73823;
          }
        }
        else {
          if ((*(byte *)(puVar2 + 1) & 1) == 0) {
            uVar17 = (ulong)(*(byte *)(puVar2 + 1) >> 1);
            lVar18 = (long)puVar2 + 9;
          }
          else {
            uVar17 = puVar2[2];
            lVar18 = puVar2[3];
          }
          do {
            bVar1 = *pbVar23;
            if ((bVar1 & 1) == 0) {
              uVar16 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar16 = *(ulong *)(pbVar23 + 8);
            }
            if (uVar16 == uVar17) {
              if ((bVar1 & 1) == 0) {
                pbVar21 = pbVar23 + 1;
              }
              else {
                pbVar21 = *(byte **)(pbVar23 + 0x10);
              }
              iVar14 = func_0x0eee3000(pbVar21,lVar18,uVar17);
              if (iVar14 == 0) goto LAB_06d737f4;
            }
            pbVar23 = pbVar23 + 0x18;
          } while (pbVar23 != pbVar7);
        }
        if (pbVar7 < pbStack_718) {
          if ((*(byte *)(puVar2 + 1) & 1) == 0) {
            *(undefined8 *)(pbVar7 + 0x10) = puVar2[3];
            uVar4 = *(undefined4 *)((long)puVar2 + 0xc);
            uVar5 = *(undefined4 *)(puVar2 + 2);
            uVar6 = *(undefined4 *)((long)puVar2 + 0x14);
            *(undefined4 *)pbVar7 = *(undefined4 *)(puVar2 + 1);
            *(undefined4 *)(pbVar7 + 4) = uVar4;
            *(undefined4 *)(pbVar7 + 8) = uVar5;
            *(undefined4 *)(pbVar7 + 0xc) = uVar6;
          }
          else {
            func_0x0412e5e0(pbVar7,puVar2[3],puVar2[2]);
          }
          pbStack_720 = pbVar7 + 0x18;
        }
        else {
          pbStack_720 = (byte *)func_0x04909a40(&pbStack_728);
        }
        func_0x04a782c0(auStack_598,pbStack_728,pbStack_720,&UNK_013a8ff4,1);
        func_0x0ee743b0(&uStack_778,plStack_788,0);
        bStack_798 = bStack_738;
        if (bStack_738 == 0) {
          uStack_7d8 = uStack_778;
          uStack_7d0 = uStack_770;
          uStack_7c8._0_4_ = SUB84(uStack_768,0);
          uStack_7c8._4_4_ = uStack_768._4_4_;
          uStack_7c0._0_4_ = SUB84(uStack_760,0);
          uStack_7c0._4_4_ = uStack_760._4_4_;
          puStack_7b8 = puStack_758;
          uStack_7b0._0_4_ = (undefined4)uStack_750;
          uStack_7b0._4_4_ = uStack_750._4_4_;
          uStack_7a8._0_4_ = (undefined4)uStack_748;
          uStack_7a8._4_4_ = uStack_748._4_4_;
          lStack_7a0 = lStack_740;
          func_0x06d74910(&uStack_7d8);
          lStack_6d0 = lStack_7a0;
          uVar8 = uStack_7a8._4_4_;
          uVar6 = (undefined4)uStack_7a8;
          uStack_6dc = uStack_7b0._4_4_;
          uStack_6e0 = (undefined4)uStack_7b0;
          puStack_6e8 = puStack_7b8;
          uVar5 = uStack_7c0._4_4_;
          uVar4 = (undefined4)uStack_7c0;
          uStack_6f4 = uStack_7c8._4_4_;
          uStack_6f8 = (undefined4)uStack_7c8;
          uStack_4f8 = (undefined4)uStack_7d8;
          uStack_4f4 = uStack_7d8._4_4_;
          uStack_4f0 = (undefined4)uStack_7d0;
          uStack_4ec = uStack_7d0._4_4_;
          uStack_7c8 = (undefined4 *)0x0;
          uStack_7c0 = (undefined4 *)0x0;
          puStack_7b8 = (undefined4 *)0x0;
          uStack_7b0 = 0;
          uStack_7a8 = 0;
          lStack_7a0 = 0;
          uStack_4e8 = 0;
          uStack_4e0 = 0;
          uStack_4d8 = 0;
          uStack_4d0 = 0;
          uStack_4c8 = 0;
          uStack_4c0 = 0;
          bStack_6c8 = 0;
          uStack_708 = (undefined4)uStack_7d8;
          uStack_704 = uStack_7d8._4_4_;
          uStack_700 = (undefined4)uStack_7d0;
          uStack_6fc = uStack_7d0._4_4_;
          uStack_6f0 = CONCAT44(uVar5,uVar4);
          uStack_6d8 = CONCAT44(uVar8,uVar6);
          func_0x048e6d60(&uStack_4f8);
          bVar19 = 0;
        }
        else {
          bVar25 = ((uint)auStack_598 & 1) != 0;
          puVar15 = (undefined4 *)(auStack_598 + 1);
          if (bVar25) {
            puVar15 = uStack_588;
          }
          uVar17 = (ulong)(auStack_598[0] >> 1);
          if (bVar25) {
            uVar17 = CONCAT44(uStack_58c,uStack_590);
          }
          func_0x0ee76e70(&uStack_5e8,plStack_788,puVar15,uVar17);
          bVar19 = bStack_5a8;
          bStack_738 = bStack_5a8;
          if (bStack_5a8 != 1) {
            uStack_778 = uStack_5e8;
            uStack_770 = uStack_5e0;
            uStack_768._0_4_ = SUB84(uStack_5d8,0);
            uStack_768._4_4_ = uStack_5d8._4_4_;
            uStack_760._0_4_ = SUB84(uStack_5d0,0);
            uStack_760._4_4_ = uStack_5d0._4_4_;
            puStack_758 = puStack_5c8;
            uStack_750._0_4_ = (undefined4)uStack_5c0;
            uStack_750._4_4_ = uStack_5c0._4_4_;
            uStack_748._0_4_ = (undefined4)uStack_5b8;
            uStack_748._4_4_ = uStack_5b8._4_4_;
            lStack_740 = lStack_5b0;
            func_0x06d749d0(&uStack_778,&uStack_438);
            lStack_6d0 = lStack_740;
            uVar8 = uStack_748._4_4_;
            uVar6 = (undefined4)uStack_748;
            uStack_6dc = uStack_750._4_4_;
            uStack_6e0 = (undefined4)uStack_750;
            puStack_6e8 = puStack_758;
            uVar5 = uStack_760._4_4_;
            uVar4 = (undefined4)uStack_760;
            uStack_6f4 = uStack_768._4_4_;
            uStack_6f8 = (undefined4)uStack_768;
            uStack_538 = (uint)uStack_778;
            uStack_534 = uStack_778._4_4_;
            uStack_530 = (undefined4)uStack_770;
            uStack_52c = uStack_770._4_4_;
            uStack_768 = (undefined4 *)0x0;
            uStack_760 = (undefined4 *)0x0;
            puStack_758 = (undefined4 *)0x0;
            uStack_750 = 0;
            uStack_748 = 0;
            lStack_740 = 0;
            uStack_528 = 0;
            uStack_520 = 0;
            uStack_518 = 0;
            uStack_510 = 0;
            uStack_508 = 0;
            uStack_500 = 0;
            bStack_6c8 = 0;
            uStack_708 = (uint)uStack_778;
            uStack_704 = uStack_778._4_4_;
            uStack_700 = (undefined4)uStack_770;
            uStack_6fc = uStack_770._4_4_;
            uStack_6f0 = CONCAT44(uVar5,uVar4);
            uStack_6d8 = CONCAT44(uVar8,uVar6);
            func_0x048e6d60(&uStack_538);
          }
          lVar18 = uStack_750;
          if ((bStack_738 & 1) == 0) {
            lVar22 = uStack_748;
            if (uStack_750 != 0) {
              while (lVar18 != lVar22) {
                func_0x048b3e80(lVar22 + -0x40);
                lVar22 = lVar22 + -0x40;
              }
              uStack_748 = lVar18;
              func_0x0412a280(uStack_750,lStack_740 - uStack_750);
            }
            uVar16 = (ulong)uStack_768;
            uVar17 = (ulong)uStack_760;
            if (uStack_768 != (undefined4 *)0x0) {
              for (; uVar16 != uVar17; uVar17 = uVar17 - 0x50) {
                if ((*(char *)(uVar17 - 8) == '\x01') && ((*(byte *)(uVar17 - 0x30) & 1) != 0)) {
                  func_0x0412a280(*(undefined8 *)(uVar17 - 0x20),
                                  *(ulong *)(uVar17 - 0x30) & 0xfffffffffffffffe);
                }
              }
              uStack_760 = (undefined4 *)uVar16;
              func_0x0412a280(uStack_768,(long)puStack_758 - (long)uStack_768);
            }
          }
        }
        lVar18 = uStack_7b0;
        if (bStack_798 == 0) {
          lVar22 = uStack_7a8;
          if (uStack_7b0 != 0) {
            while (lVar18 != lVar22) {
              func_0x048b3e80(lVar22 + -0x40);
              lVar22 = lVar22 + -0x40;
            }
            uStack_7a8 = lVar18;
            func_0x0412a280(uStack_7b0,lStack_7a0 - uStack_7b0);
          }
          puVar12 = uStack_7c8;
          puVar15 = uStack_7c0;
          if (uStack_7c8 != (undefined4 *)0x0) {
            for (; puVar12 != puVar15; puVar15 = puVar15 + -0x14) {
              if ((*(char *)(puVar15 + -2) == '\x01') && ((*(byte *)(puVar15 + -0xc) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(puVar15 + -8),
                                *(ulong *)(puVar15 + -0xc) & 0xfffffffffffffffe);
              }
            }
            uStack_7c0 = puVar12;
            func_0x0412a280(uStack_7c8,(long)puStack_7b8 - (long)uStack_7c8);
          }
        }
        if (((uint)auStack_598 & 1) != 0) {
          func_0x0412a280(uStack_588,CONCAT44(uStack_594,auStack_598) & 0xfffffffffffffffe);
        }
        lVar18 = uStack_620;
        if (bStack_608 == 0) {
          if (uStack_620 != 0) {
            while (lVar18 != uStack_618) {
              func_0x048b3e80(uStack_618 + -0x40);
              uStack_618 = uStack_618 + -0x40;
            }
            uStack_618 = lVar18;
            func_0x0412a280(uStack_620,lStack_610 - uStack_620);
          }
          lVar22 = uStack_638;
          lVar18 = uStack_630;
          if (uStack_638 != 0) {
            for (; lVar22 != lVar18; lVar18 = lVar18 + -0x50) {
              if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                                *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
              }
            }
            uStack_630 = lVar22;
            func_0x0412a280(uStack_638,(long)puStack_628 - uStack_638);
          }
        }
        pbVar23 = pbStack_728;
        pbVar7 = pbStack_720;
        if (pbStack_728 != (byte *)0x0) {
          for (; pbVar23 != pbVar7; pbVar7 = pbVar7 + -0x18) {
            if ((pbVar7[-0x18] & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(pbVar7 + -8),
                              *(ulong *)(pbVar7 + -0x18) & 0xfffffffffffffffe);
            }
          }
          pbStack_720 = pbVar23;
          func_0x0412a280(pbStack_728,(long)pbStack_718 - (long)pbStack_728);
        }
        lVar18 = uStack_670;
        if (bStack_658 == 0) {
          if (uStack_670 != 0) {
            while (lVar18 != uStack_668) {
              func_0x048b3e80(uStack_668 + -0x40);
              uStack_668 = uStack_668 + -0x40;
            }
            uStack_668 = lVar18;
            func_0x0412a280(uStack_670,lStack_660 - uStack_670);
          }
          lVar22 = uStack_688;
          lVar18 = uStack_680;
          if (uStack_688 != 0) {
            for (; lVar22 != lVar18; lVar18 = lVar18 + -0x50) {
              if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                                *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
              }
            }
            uStack_680 = lVar22;
            func_0x0412a280(uStack_688,(long)puStack_678 - uStack_688);
          }
        }
        if ((plStack_788 != (long *)0x0) &&
           (func_0x0ee56810(&uStack_7d8,&plStack_788), lVar18 = uStack_7b0, bStack_798 == 0)) {
          lVar22 = uStack_7a8;
          if (uStack_7b0 != 0) {
            while (lVar18 != lVar22) {
              func_0x048b3e80(lVar22 + -0x40);
              lVar22 = lVar22 + -0x40;
            }
            uStack_7a8 = lVar18;
            func_0x0412a280(uStack_7b0,lStack_7a0 - uStack_7b0);
          }
          puVar12 = uStack_7c8;
          puVar15 = uStack_7c0;
          if (uStack_7c8 != (undefined4 *)0x0) {
            for (; puVar12 != puVar15; puVar15 = puVar15 + -0x14) {
              if ((*(char *)(puVar15 + -2) == '\x01') && ((*(byte *)(puVar15 + -0xc) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(puVar15 + -8),
                                *(ulong *)(puVar15 + -0xc) & 0xfffffffffffffffe);
              }
            }
            uStack_7c0 = puVar12;
            func_0x0412a280(uStack_7c8,(long)puStack_7b8 - (long)uStack_7c8);
          }
        }
        plVar13 = plStack_780;
        plStack_780 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
        }
        plVar13 = plStack_788;
        plStack_788 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
        }
        if (cStack_5f0 == '\x01') {
          func_0x0412d610(puStack_5f8);
        }
        if (bVar19 != 0) goto LAB_06d74399;
      }
    }
    uStack_420 = 0x2ae;
    uStack_428 = 1;
    puStack_430 = &UNK_0140f690;
    uStack_438 = 0x4156fc962f5c74d4;
    uStack_7d8 = 0;
    uStack_7d0 = 0;
    uStack_7c8 = (undefined4 *)0x0;
    func_0x0eedeb80(8,0x17,&uStack_708,&uStack_7d8,&uStack_438);
    if ((uStack_7d8 & 1) != 0) {
      func_0x0412a280(uStack_7c8,uStack_7d8 & 0xfffffffffffffffe);
    }
    puVar15 = (undefined4 *)&DAT_0f778530;
    if ((bStack_6c8 & 1) != 0) {
      puVar15 = &uStack_708;
    }
    uVar20 = *(undefined1 *)puVar15;
    if ((bStack_6c8 & 1) == 0) {
      lVar18 = CONCAT44(uStack_6dc,uStack_6e0);
      if (lVar18 != 0) {
        lVar22 = lVar18;
        lVar24 = uStack_6d8;
        if (lVar18 != uStack_6d8) {
          do {
            lVar24 = lVar24 + -0x40;
            func_0x048b3e80(lVar24);
          } while (lVar24 != lVar18);
          lVar22 = CONCAT44(uStack_6dc,uStack_6e0);
        }
        uStack_6d8 = lVar18;
        func_0x0412a280(lVar22,lStack_6d0 - lVar22);
      }
      lVar18 = CONCAT44(uStack_6f4,uStack_6f8);
      if (lVar18 != 0) {
        lVar22 = lVar18;
        lVar24 = uStack_6f0;
        if (lVar18 != uStack_6f0) {
          do {
            if ((*(char *)(lVar24 + -8) == '\x01') && ((*(byte *)(lVar24 + -0x30) & 1) != 0)) {
              func_0x0412a280(*(undefined8 *)(lVar24 + -0x20),
                              *(ulong *)(lVar24 + -0x30) & 0xfffffffffffffffe);
            }
            lVar24 = lVar24 + -0x50;
          } while (lVar24 != lVar18);
          lVar22 = CONCAT44(uStack_6f4,uStack_6f8);
        }
        uStack_6f0 = lVar18;
        func_0x0412a280(lVar22,(long)puStack_6e8 - lVar22);
      }
    }
  }
  return uVar20;
}


