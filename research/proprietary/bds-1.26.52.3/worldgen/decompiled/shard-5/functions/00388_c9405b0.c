/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca405b0 (ELF vaddr 0xc9405b0)
 * Label: caller-of-callee
 * Body:  [[0ca405b0, 0ca41fba] [0ca41fc0, 0ca42302] [0ca42310, 0ca42487] [0ca42699, 0ca426cd] [0ca42739, 0ca4277a]]
 * Ghidra: FUN_0ca405b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ca405b0(byte *param_1,byte *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  long lVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  int iVar17;
  byte *pbVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  byte *pbVar25;
  byte *pbVar26;
  long lVar27;
  long lVar28;
  bool bVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined8 uStack_888;
  ulong uStack_880;
  long lStack_878;
  byte bStack_870;
  undefined7 uStack_86f;
  undefined8 uStack_868;
  undefined8 uStack_860;
  byte *pbStack_858;
  ulong uStack_850;
  ulong uStack_848;
  ulong uStack_840;
  undefined4 uStack_838;
  undefined4 uStack_834;
  ulong uStack_830;
  ulong uStack_828;
  ulong uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined1 auStack_808 [96];
  uint uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined4 uStack_758;
  undefined1 uStack_754;
  undefined1 uStack_750;
  undefined4 uStack_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined1 uStack_708;
  undefined2 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined1 uStack_6d0;
  undefined1 *puStack_6c8;
  byte *pbStack_6c0;
  ulong uStack_6b8;
  undefined1 *puStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  char cStack_698;
  undefined1 *puStack_690;
  undefined8 uStack_688;
  byte *pbStack_680;
  ulong uStack_678;
  ulong uStack_670;
  undefined6 uStack_668;
  undefined2 uStack_662;
  long lStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined8 uStack_618;
  undefined1 uStack_610;
  undefined1 auStack_600 [8];
  ulong uStack_5f8;
  ulong uStack_5f0;
  undefined8 uStack_5e8;
  ulong uStack_5e0;
  long lStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined *puStack_588;
  ulong uStack_580;
  ulong uStack_578;
  undefined8 uStack_570;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined8 uStack_560;
  undefined8 uStack_558;
  ulong uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined1 auStack_538 [96];
  uint uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined4 uStack_488;
  undefined1 uStack_484;
  char cStack_480;
  undefined1 uStack_478;
  undefined8 *puStack_470;
  undefined8 uStack_468;
  byte *pbStack_460;
  ulong uStack_458;
  undefined *puStack_450;
  ulong uStack_448;
  ulong uStack_440;
  undefined8 uStack_438;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined1 auStack_400 [96];
  uint uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined4 uStack_350;
  undefined1 uStack_34c;
  undefined1 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 uStack_300;
  undefined2 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 uStack_2c8;
  char cStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  pbVar18 = param_2 + 1;
  pbVar26 = *(byte **)(param_2 + 0x10);
  uStack_458 = *(ulong *)(param_2 + 8);
  if ((*param_2 & 1) == 0) {
    pbVar26 = pbVar18;
    uStack_458 = (ulong)(*param_2 >> 1);
  }
  pbStack_460 = pbVar26;
  func_0x05f72110(&puStack_450,&pbStack_460);
  if (lStack_50 != 4) {
    return;
  }
  if ((int)puStack_450 != 0x6e6f736a) {
    return;
  }
  uStack_888 = 0;
  uStack_880 = 0;
  lStack_878 = 0;
  func_0x0d62a0d0(*(undefined8 *)(*(long *)(param_1 + 8) + 0xe8),param_2,&uStack_888,
                  *(undefined4 *)(*(long *)(param_1 + 8) + 0x108));
  uVar23 = uStack_888 >> 1 & 0x7f;
  lVar27 = (long)&uStack_888 + 1;
  if ((uStack_888 & 1) != 0) {
    uVar23 = uStack_880;
    lVar27 = lStack_878;
  }
  puVar8 = *(undefined4 **)(param_1 + 0x10);
  uVar21 = **(ulong **)(**(long **)(*(long *)(param_1 + 8) + 0xe8) + 8);
  uVar6 = *(undefined1 *)(uVar21 + 0x159);
  puStack_470 = *(undefined8 **)(param_1 + 0x18);
  uStack_468 = *(undefined8 *)(param_1 + 0x20);
  if ((DAT_0f5ea4a0 == '\0') && (iVar17 = func_0x04108328(&DAT_0f5ea4a0), iVar17 != 0)) {
    func_0x08b670e0(&DAT_0f5ea138);
    func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
    func_0x0410844d(&DAT_0f5ea4a0);
  }
  func_0x0d5f7010(&bStack_870,uVar21,&DAT_0f5ea138);
  if ((uVar23 != 0xffffffffffffffff) && (uVar23 == 0 || lVar27 != 0)) {
    cVar16 = func_0x0d681fb0(uVar23,lVar27);
    if (cVar16 == '\0') {
      bVar29 = (*param_2 & 1) != 0;
      pbStack_858 = pbVar18;
      if (bVar29) {
        pbStack_858 = *(byte **)(param_2 + 0x10);
      }
      uStack_850 = (ulong)(*param_2 >> 1);
      if (bVar29) {
        uStack_850 = *(ulong *)(param_2 + 8);
      }
      func_0x0470d9a0(&uStack_688,&UNK_01319300,10,0xd,&pbStack_858);
      param_2 = (byte *)((ulong)uStack_688 >> 1 & 0x7f);
      uVar21 = (long)&uStack_688 + 1;
      if (((ulong)uStack_688 & 1) != 0) {
        param_2 = pbStack_680;
        uVar21 = uStack_678;
      }
      uStack_5e8 = 0;
      if (uVar21 != 0) {
        pbVar25 = param_2 + 9;
        pbVar18 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,pbVar25,8);
        if (pbVar25 != (byte *)0x0 && pbVar18 == (byte *)0x0) goto LAB_0ca423ee;
        goto LAB_0ca40814;
      }
      uStack_5e8 = (ulong)((uint)param_2 & 0x7f) << 0x30;
      goto LAB_0ca4114e;
    }
    func_0x05d54750(&uStack_688,&UNK_0f3ec648);
    if (uVar23 < 0xfffffffffffffff8) {
      if (uVar23 < 0x17) {
        uStack_5e8 = CONCAT71(uStack_5e8._1_7_,(char)uVar23 * '\x02');
        lVar20 = (long)&uStack_5e8 + 1;
        if (uVar23 != 0) goto LAB_0ca408a4;
      }
      else {
        uVar21 = 0x1a;
        if ((uVar23 | 7) != 0x17) {
          uVar21 = (uVar23 | 7) + 1;
        }
        lVar20 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar21);
        if (lVar20 == 0) {
          func_0x0eec74c0(uVar21,0);
        }
        uStack_5e8 = uVar21 | 1;
        uStack_5e0 = uVar23;
        lStack_5d8 = lVar20;
LAB_0ca408a4:
        func_0x0eee2f00(lVar20,lVar27,uVar23);
      }
      *(undefined1 *)(lVar20 + uVar23) = 0;
      func_0x0d689160(&pbStack_858,&uStack_688,&uStack_5e8);
      uVar7 = uStack_7a8;
      uStack_558 = uStack_828;
      uStack_560 = uStack_830;
      uStack_570 = uStack_840;
      puStack_588 = &UNK_0f47d3f0;
      uStack_580 = uStack_850;
      uStack_578 = uStack_848;
      uStack_848 = 0;
      uStack_840 = 0;
      uStack_568 = uStack_838;
      uStack_564 = uStack_834;
      uStack_830 = 0;
      uStack_828 = 0;
      uStack_550 = uStack_820;
      uStack_548 = uStack_818;
      uStack_540 = uStack_810;
      uStack_820 = 0;
      uStack_818 = 0;
      uStack_810 = 0;
      auStack_538[0] = 0;
      uStack_4d8 = 0xffffffff;
      if ((ulong)uStack_7a8 != 0xffffffff) {
        puStack_6b0 = auStack_538;
        (**(code **)(&UNK_0f3eb9a0 + (ulong)uStack_7a8 * 8))(&puStack_6b0,auStack_808);
        uStack_4d8 = uVar7;
      }
      uStack_4d0 = uStack_7a0;
      uStack_4c8 = uStack_798;
      uStack_4c0 = uStack_790;
      uStack_7a0 = 0;
      uStack_798 = 0;
      uStack_790 = 0;
      uStack_4b8 = uStack_788;
      uStack_4b0 = uStack_780;
      uStack_4a8 = uStack_778;
      uStack_788 = 0;
      uStack_780 = 0;
      uStack_778 = 0;
      uStack_4a0 = uStack_770;
      uStack_498 = uStack_768;
      uStack_490 = uStack_760;
      uStack_770 = 0;
      uStack_768 = 0;
      uStack_760 = 0;
      uStack_484 = uStack_754;
      uStack_488 = uStack_758;
      cStack_480 = '\x01';
      uStack_478 = 1;
      func_0x05d85c50(&uStack_7a0);
      if ((ulong)uStack_7a8 != 0xffffffff) {
        (**(code **)(&UNK_0f3eb988 + (ulong)uStack_7a8 * 8))(&puStack_6b0,auStack_808);
      }
      uStack_7a8 = 0xffffffff;
      if ((uStack_820 & 1) != 0) {
        func_0x0412a280(uStack_810,uStack_820 & 0xfffffffffffffffe);
      }
      if ((uStack_828 >> 0x37 & 1) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_828 & 0xff00ffffffffffff) - 8);
      }
      uStack_828 = 0;
      if ((uStack_830 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_830 & 0xff00ffffffffffff) - 8);
      }
      uStack_830 = 0;
      if ((uStack_840 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_840 & 0xff00ffffffffffff) - 8);
      }
      uStack_840 = 0;
      if ((uStack_848 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_848 & 0xff00ffffffffffff) - 8);
      }
      uStack_848 = 0;
      if ((uStack_5e8 & 1) != 0) {
        func_0x0412a280(lStack_5d8,uStack_5e8 & 0xfffffffffffffffe);
      }
      if ((uStack_678 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_678 & 0xff00ffffffffffff) - 8);
      }
      uStack_678 = 0;
      uVar23 = uStack_578;
      uVar19 = uStack_570;
      uVar12 = uStack_560;
      uVar13 = uStack_558;
      uVar21 = uStack_550;
      uVar14 = uStack_548;
      uVar15 = uStack_540;
      uVar7 = uStack_4d8;
      if (((ulong)pbStack_680 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)pbStack_680 & 0xff00ffffffffffff) - 8);
        uVar23 = uStack_578;
        uVar19 = uStack_570;
        uVar12 = uStack_560;
        uVar13 = uStack_558;
        uVar21 = uStack_550;
        uVar14 = uStack_548;
        uVar15 = uStack_540;
        uVar7 = uStack_4d8;
      }
      goto joined_r0x0ca40c3f;
    }
    func_0x04882e30();
LAB_0ca4245f:
    func_0x0ca42980();
LAB_0ca42464:
    uVar19 = FUN_04882eb0();
    func_0x041084d6(&DAT_0f5ea4a0);
    while ((uStack_888 & 1) == 0) {
      while( true ) {
        func_0x0eee2d70(uVar19);
        func_0x0412a280(uStack_678,(ulong)uStack_688 & 0xfffffffffffffffe);
        if ((bStack_870 & 1) == 0) break;
        func_0x0412a280(uStack_860,CONCAT71(uStack_86f,bStack_870) & 0xfffffffffffffffe);
        if ((uStack_888 & 1) != 0) goto LAB_0ca42757;
      }
    }
LAB_0ca42757:
    func_0x0412a280(lStack_878,uStack_888 & 0xfffffffffffffffe);
    uVar19 = func_0x0eee2d70(uVar19);
    func_0x04882e20(uVar19);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  func_0x04890760();
  pbVar25 = param_1;
LAB_0ca423ee:
  func_0x0eec74c0(pbVar25,8);
LAB_0ca40814:
  *(byte **)pbVar18 = param_2;
  func_0x0eee2f00(pbVar18 + 8,uVar21,param_2);
  (pbVar18 + 8)[(long)param_2] = 0;
  uStack_5e8 = (ulong)(pbVar18 + 8) & 0xff00ffffffffffff | 0x80000000000000;
LAB_0ca4114e:
  pbStack_858 = (byte *)((ulong)pbStack_858 & 0xffffffffffffff00);
  uStack_848 = uStack_848 & 0xffffffffffffff00;
  uVar30 = pbStack_858._0_4_;
  uVar31 = (undefined4)uStack_850;
  uVar21 = uStack_848;
  func_0x0eeb79f0(auStack_48,&uStack_5e8);
  if ((uStack_5e8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_5e8 & 0xff00ffffffffffff) - 8);
  }
  uStack_5e8 = 0;
  if (((ulong)uStack_688 & 1) != 0) {
    func_0x0412a280(uStack_678,(ulong)uStack_688 & 0xfffffffffffffffe);
  }
  puStack_6b0 = (undefined1 *)((ulong)puStack_6b0 & 0xffffffffffffff00);
  cStack_698 = '\0';
  func_0x0c194eb0(&uStack_688,uStack_468,lVar27,uVar23,(**(uint **)(puVar8 + 4) & 2) >> 1,
                  &puStack_6b0,uVar30,uVar31,uVar21);
  if (cStack_698 == '\x01') {
    if ((uStack_6a0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6a0 & 0xff00ffffffffffff) - 8);
    }
    uStack_6a0 = 0;
    if ((uStack_6a8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6a8 & 0xff00ffffffffffff) - 8);
    }
    uStack_6a8 = 0;
  }
  if (uStack_688._6_1_ == '\0') {
    puStack_588 = (undefined *)((ulong)puStack_588 & 0xffffffffffffff00);
    cStack_480 = '\0';
    uStack_478 = 0;
  }
  else {
    func_0x05d54750(auStack_600,&UNK_0f3ec648);
    uStack_6b8 = uStack_678;
    puStack_6c8 = uStack_688;
    pbStack_6c0 = pbStack_680;
    pbStack_680 = (byte *)0x0;
    uStack_678 = 0;
    uStack_5e0 = CONCAT26(uStack_662,uStack_668);
    uStack_5e8 = uStack_670;
    uStack_662 = 0;
    lStack_5d8 = lStack_660;
    uStack_5d0 = uStack_658;
    uStack_5c8 = uStack_650;
    uStack_5c0 = uStack_648;
    uStack_5b8 = uStack_640;
    uStack_5b0 = uStack_638;
    uStack_5a8 = uStack_630;
    uStack_5a0 = uStack_628;
    uStack_650 = 0;
    uStack_648 = 0;
    uStack_640 = 0;
    uStack_638 = 0;
    uStack_630 = 0;
    uStack_628 = 0;
    uStack_598 = uStack_620;
    uStack_594 = uStack_61c;
    uStack_590 = (undefined4)uStack_618;
    uStack_58c = uStack_618._4_4_;
    uStack_620 = 0;
    uStack_618 = 0;
    lStack_660 = 0;
    uStack_658 = 0;
    func_0x0d688ef0(&pbStack_858,&UNK_0120ff27,0xe,auStack_600,&puStack_6c8,&uStack_5e8);
    uVar7 = uStack_7a8;
    uStack_558 = uStack_828;
    uStack_560 = uStack_830;
    uStack_570 = uStack_840;
    puStack_588 = &UNK_0f47d3f0;
    uStack_580 = uStack_850;
    uStack_578 = uStack_848;
    uStack_848 = 0;
    uStack_840 = 0;
    uStack_568 = uStack_838;
    uStack_564 = uStack_834;
    uStack_830 = 0;
    uStack_828 = 0;
    uStack_550 = uStack_820;
    uStack_548 = uStack_818;
    uStack_540 = uStack_810;
    uStack_820 = 0;
    uStack_818 = 0;
    uStack_810 = 0;
    auStack_538[0] = 0;
    uStack_4d8 = 0xffffffff;
    if ((ulong)uStack_7a8 != 0xffffffff) {
      puStack_690 = auStack_538;
      (**(code **)(&UNK_0f3eb9a0 + (ulong)uStack_7a8 * 8))(&puStack_690,auStack_808);
      uStack_4d8 = uVar7;
    }
    uStack_4d0 = uStack_7a0;
    uStack_4c8 = uStack_798;
    uStack_4c0 = uStack_790;
    uStack_7a0 = 0;
    uStack_798 = 0;
    uStack_790 = 0;
    uStack_4b8 = uStack_788;
    uStack_4b0 = uStack_780;
    uStack_4a8 = uStack_778;
    uStack_788 = 0;
    uStack_780 = 0;
    uStack_778 = 0;
    uStack_4a0 = uStack_770;
    uStack_498 = uStack_768;
    uStack_490 = uStack_760;
    uStack_770 = 0;
    uStack_768 = 0;
    uStack_760 = 0;
    uStack_484 = uStack_754;
    uStack_488 = uStack_758;
    cStack_480 = '\x01';
    uStack_478 = uStack_610;
    func_0x05d85c50(&uStack_7a0);
    if ((ulong)uStack_7a8 != 0xffffffff) {
      (**(code **)(&UNK_0f3eb988 + (ulong)uStack_7a8 * 8))(&puStack_690,auStack_808);
    }
    uStack_7a8 = 0xffffffff;
    if ((uStack_820 & 1) != 0) {
      func_0x0412a280(uStack_810,uStack_820 & 0xfffffffffffffffe);
    }
    if ((uStack_828 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_828 & 0xff00ffffffffffff) - 8);
    }
    uStack_828 = 0;
    if ((uStack_830 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_830 & 0xff00ffffffffffff) - 8);
    }
    uStack_830 = 0;
    if ((uStack_840 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_840 & 0xff00ffffffffffff) - 8);
    }
    uStack_840 = 0;
    if ((uStack_848 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_848 & 0xff00ffffffffffff) - 8);
    }
    uStack_848 = 0;
    func_0x04907660(&uStack_5e8);
    if ((uStack_6b8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6b8 & 0xff00ffffffffffff) - 8);
    }
    uStack_6b8 = 0;
    if (((ulong)pbStack_6c0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pbStack_6c0 & 0xff00ffffffffffff) - 8);
    }
    pbStack_6c0 = (byte *)0x0;
    if ((uStack_5f0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_5f0 & 0xff00ffffffffffff) - 8);
    }
    uStack_5f0 = 0;
    if ((uStack_5f8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_5f8 & 0xff00ffffffffffff) - 8);
    }
    uStack_5f8 = 0;
  }
  func_0x04907660(&uStack_670);
  if ((uStack_678 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_678 & 0xff00ffffffffffff) - 8);
  }
  uStack_678 = 0;
  if (((ulong)pbStack_680 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)pbStack_680 & 0xff00ffffffffffff) - 8)
    ;
  }
  func_0x0eeb81b0(auStack_48);
  uVar23 = uStack_578;
  uVar19 = uStack_570;
  uVar12 = uStack_560;
  uVar13 = uStack_558;
  uVar21 = uStack_550;
  uVar14 = uStack_548;
  uVar15 = uStack_540;
  uVar7 = uStack_4d8;
joined_r0x0ca40c3f:
  uStack_4d8 = uVar7;
  if (cStack_480 == '\x01') {
    pbStack_858 = &UNK_0f47d3f0;
    uStack_578 = 0;
    uStack_570 = 0;
    uStack_560 = 0;
    uStack_558 = 0;
    uStack_550 = 0;
    uStack_548 = 0;
    uStack_540 = 0;
    auStack_808[0] = 0;
    uStack_7a8 = 0xffffffff;
    uStack_850 = uStack_580;
    uStack_848 = uVar23;
    uStack_840 = uVar19;
    uStack_838 = uStack_568;
    uStack_834 = uStack_564;
    uStack_830 = uVar12;
    uStack_828 = uVar13;
    uStack_820 = uVar21;
    uStack_818 = uVar14;
    uStack_810 = uVar15;
    if ((ulong)uVar7 != 0xffffffff) {
      uStack_688 = auStack_808;
      (**(code **)(&UNK_0f3eb9a0 + (ulong)uVar7 * 8))(&uStack_688,auStack_538);
      uStack_7a8 = uVar7;
    }
    uStack_7a0 = uStack_4d0;
    uStack_798 = uStack_4c8;
    uStack_790 = uStack_4c0;
    uStack_4d0 = 0;
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    uStack_788 = uStack_4b8;
    uStack_780 = uStack_4b0;
    uStack_778 = uStack_4a8;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    uStack_770 = uStack_4a0;
    uStack_768 = uStack_498;
    uStack_760 = uStack_490;
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_490 = 0;
    uStack_754 = uStack_484;
    uStack_758 = uStack_488;
    uStack_748 = *puVar8;
    uStack_744 = puVar8[1];
    uStack_740 = puVar8[2];
    uStack_73c = puVar8[3];
    uStack_750 = uVar6;
    func_0x0491cee0(&uStack_738,puVar8 + 4);
    func_0x0491cee0(&uStack_720,puVar8 + 10);
    uStack_708 = *(undefined1 *)(puVar8 + 0x10);
    uStack_700 = *(undefined2 *)(puVar8 + 0x12);
    uStack_6f8 = *puStack_470;
    uStack_6f0 = puStack_470[1];
    if (puStack_470[1] != 0) {
      LOCK();
      plVar1 = (long *)(puStack_470[1] + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    if ((bStack_870 & 1) == 0) {
      uStack_6d8 = uStack_860;
      uStack_6e8 = CONCAT71(uStack_86f,bStack_870);
      uStack_6e0 = uStack_868;
    }
    else {
      func_0x0412e5e0(&uStack_6e8,uStack_860,uStack_868);
    }
    uVar7 = uStack_7a8;
    uStack_420 = uStack_828;
    uStack_428 = uStack_830;
    uStack_438 = uStack_840;
    uStack_6d0 = uStack_478;
    puStack_450 = &UNK_0f47d3f0;
    uStack_448 = uStack_850;
    uStack_440 = uStack_848;
    uStack_848 = 0;
    uStack_840 = 0;
    uStack_430 = uStack_838;
    uStack_42c = uStack_834;
    uStack_830 = 0;
    uStack_828 = 0;
    uStack_408 = uStack_810;
    uStack_418 = uStack_820;
    uStack_410 = uStack_818;
    uStack_820 = 0;
    uStack_818 = 0;
    uStack_810 = 0;
    auStack_400[0] = 0;
    uStack_3a0 = 0xffffffff;
    if ((ulong)uStack_7a8 != 0xffffffff) {
      uStack_688 = auStack_400;
      (**(code **)(&UNK_0f3eb9a0 + (ulong)uStack_7a8 * 8))(&uStack_688,auStack_808);
      uStack_3a0 = uVar7;
    }
    uStack_398 = uStack_7a0;
    uStack_390 = uStack_798;
    uStack_388 = uStack_790;
    uStack_7a0 = 0;
    uStack_798 = 0;
    uStack_790 = 0;
    uStack_380 = uStack_788;
    uStack_378 = uStack_780;
    uStack_370 = uStack_778;
    uStack_788 = 0;
    uStack_780 = 0;
    uStack_778 = 0;
    uStack_368 = uStack_770;
    uStack_360 = uStack_768;
    uStack_358 = uStack_760;
    uStack_770 = 0;
    uStack_768 = 0;
    uStack_760 = 0;
    uStack_34c = uStack_754;
    uStack_350 = uStack_758;
    uStack_348 = uStack_750;
    uStack_340 = CONCAT44(uStack_744,uStack_748);
    uStack_338 = CONCAT44(uStack_73c,uStack_740);
    uStack_330 = uStack_738;
    uStack_328 = uStack_730;
    uStack_320 = uStack_728;
    uStack_738 = 0;
    uStack_730 = 0;
    uStack_728 = 0;
    uStack_318 = uStack_720;
    uStack_310 = uStack_718;
    uStack_308 = uStack_710;
    uStack_720 = 0;
    uStack_718 = 0;
    uStack_710 = 0;
    uStack_300 = uStack_708;
    uStack_2f8 = uStack_700;
    uStack_2f0 = uStack_6f8;
    uStack_2e8 = uStack_6f0;
    uStack_6f8 = 0;
    uStack_6f0 = 0;
    uStack_2d0 = uStack_6d8;
    uStack_2e0 = uStack_6e8;
    uStack_2d8 = uStack_6e0;
    uStack_6e8 = 0;
    uStack_6e0 = 0;
    uStack_6d8 = 0;
    cStack_2c0 = '\x01';
    uStack_2b8 = 0;
    lStack_2b0 = 0;
    lStack_2a8 = 0;
    uStack_2c8 = uStack_6d0;
    func_0x0ca06de0(&pbStack_858);
    func_0x0ca33c70(&puStack_588);
  }
  else {
    uStack_578 = uVar23;
    uStack_570 = uVar19;
    uStack_560 = uVar12;
    uStack_558 = uVar13;
    uStack_550 = uVar21;
    uStack_548 = uVar14;
    uStack_540 = uVar15;
    func_0x0ca33c70(&puStack_588);
    puStack_450 = (undefined *)((ulong)puStack_450 & 0xffffffffffffff00);
    cStack_2c0 = '\0';
    uStack_2b8 = 0;
    lStack_2b0 = 0;
    lStack_2a8 = 0;
  }
  if ((bStack_870 & 1) != 0) {
    func_0x0412a280(uStack_860,CONCAT71(uStack_86f,bStack_870) & 0xfffffffffffffffe);
  }
  if ((uStack_2b8 & 1) == 0) {
    if ((byte)uStack_2b8 >> 1 != 0) goto LAB_0ca41882;
  }
  else if (lStack_2b0 != 0) {
LAB_0ca41882:
    lVar27 = lStack_2a8;
    if ((uStack_2b8 & 1) == 0) {
      lVar27 = (long)&uStack_2b8 + 1;
    }
    func_0x0ca427b0(pbVar26,lVar27);
  }
  uVar7 = uStack_3a0;
  if (cStack_2c0 != '\x01') goto LAB_0ca42370;
  plVar1 = *(long **)(param_1 + 0x28);
  puVar22 = (undefined8 *)plVar1[1];
  if (puVar22 < (undefined8 *)plVar1[2]) {
    *puVar22 = &UNK_0f47d3f0;
    puVar22[1] = uStack_448;
    puVar22[2] = 0;
    puVar22[2] = uStack_440;
    uStack_440 = 0;
    puVar22[3] = 0;
    puVar22[3] = uStack_438;
    uStack_438 = 0;
    puVar22[4] = CONCAT44(uStack_42c,uStack_430);
    puVar22[5] = 0;
    puVar22[5] = uStack_428;
    uStack_428 = 0;
    puVar22[6] = 0;
    puVar22[6] = uStack_420;
    uStack_420 = 0;
    puVar22[9] = uStack_408;
    *(undefined4 *)(puVar22 + 7) = (undefined4)uStack_418;
    *(undefined4 *)((long)puVar22 + 0x3c) = uStack_418._4_4_;
    *(undefined4 *)(puVar22 + 8) = (undefined4)uStack_410;
    *(undefined4 *)((long)puVar22 + 0x44) = uStack_410._4_4_;
    uStack_418 = 0;
    uStack_410 = 0;
    uStack_408 = 0;
    *(undefined1 *)(puVar22 + 10) = 0;
    *(undefined4 *)(puVar22 + 0x16) = 0xffffffff;
    if ((ulong)uStack_3a0 != 0xffffffff) {
      pbStack_858 = (byte *)(puVar22 + 10);
      (**(code **)(&UNK_0f3eb9a0 + (ulong)uStack_3a0 * 8))(&pbStack_858,auStack_400);
      *(uint *)(puVar22 + 0x16) = uVar7;
    }
    puVar22[0x17] = 0;
    puVar22[0x18] = 0;
    puVar22[0x19] = 0;
    puVar22[0x17] = uStack_398;
    puVar22[0x18] = uStack_390;
    puVar22[0x19] = uStack_388;
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_388 = 0;
    puVar22[0x1a] = 0;
    puVar22[0x1b] = 0;
    puVar22[0x1c] = 0;
    puVar22[0x1a] = uStack_380;
    puVar22[0x1b] = uStack_378;
    puVar22[0x1c] = uStack_370;
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    puVar22[0x1d] = 0;
    puVar22[0x1e] = 0;
    puVar22[0x1f] = 0;
    puVar22[0x1d] = uStack_368;
    puVar22[0x1e] = uStack_360;
    puVar22[0x1f] = uStack_358;
    uStack_368 = 0;
    uStack_360 = 0;
    uStack_358 = 0;
    *(undefined4 *)(puVar22 + 0x20) = uStack_350;
    *(undefined1 *)((long)puVar22 + 0x104) = uStack_34c;
    *(undefined1 *)(puVar22 + 0x21) = uStack_348;
    puVar22[0x22] = uStack_340;
    puVar22[0x23] = uStack_338;
    puVar22[0x24] = uStack_330;
    puVar22[0x25] = uStack_328;
    puVar22[0x26] = uStack_320;
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    puVar22[0x27] = uStack_318;
    puVar22[0x28] = uStack_310;
    puVar22[0x29] = uStack_308;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    *(undefined1 *)(puVar22 + 0x2a) = uStack_300;
    *(undefined2 *)(puVar22 + 0x2b) = uStack_2f8;
    puVar22[0x2c] = uStack_2f0;
    puVar22[0x2d] = uStack_2e8;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    puVar22[0x30] = uStack_2d0;
    *(undefined4 *)(puVar22 + 0x2e) = (undefined4)uStack_2e0;
    *(undefined4 *)((long)puVar22 + 0x174) = uStack_2e0._4_4_;
    *(undefined4 *)(puVar22 + 0x2f) = (undefined4)uStack_2d8;
    *(undefined4 *)((long)puVar22 + 0x17c) = uStack_2d8._4_4_;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    *(undefined1 *)(puVar22 + 0x31) = uStack_2c8;
    puVar22 = puVar22 + 0x32;
  }
  else {
    lVar27 = (long)puVar22 - *plVar1;
    uVar23 = (lVar27 >> 4) * -0x70a3d70a3d70a3d7 + 1;
    if (0xa3d70a3d70a3d7 < uVar23) goto LAB_0ca4245f;
    lVar20 = plVar1[2] - *plVar1 >> 4;
    uVar21 = lVar20 * 0x1eb851eb851eb852;
    if (uVar23 < uVar21) {
      uVar23 = uVar21;
    }
    if (0x51eb851eb851ea < (ulong)(lVar20 * -0x70a3d70a3d70a3d7)) {
      uVar23 = 0xa3d70a3d70a3d7;
    }
    if (uVar23 == 0) {
      lVar20 = 0;
    }
    else {
      if (0xa3d70a3d70a3d7 < uVar23) goto LAB_0ca42464;
      lVar20 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23 * 400);
      if (lVar20 == 0) {
        func_0x0eec74c0(uVar23 * 400,0);
        lVar20 = 0;
      }
    }
    uVar7 = uStack_3a0;
    lVar2 = lVar20 + lVar27;
    *(undefined **)(lVar20 + lVar27) = &UNK_0f47d3f0;
    *(ulong *)(lVar20 + 8 + lVar27) = uStack_448;
    *(undefined8 *)(lVar20 + 0x10 + lVar27) = 0;
    *(ulong *)(lVar20 + 0x10 + lVar27) = uStack_440;
    uStack_440 = 0;
    *(undefined8 *)(lVar20 + 0x18 + lVar27) = 0;
    *(ulong *)(lVar20 + 0x18 + lVar27) = uStack_438;
    uStack_438 = 0;
    *(ulong *)(lVar20 + 0x20 + lVar27) = CONCAT44(uStack_42c,uStack_430);
    *(undefined8 *)(lVar20 + 0x28 + lVar27) = 0;
    *(ulong *)(lVar20 + 0x28 + lVar27) = uStack_428;
    uStack_428 = 0;
    *(undefined8 *)(lVar20 + 0x30 + lVar27) = 0;
    *(ulong *)(lVar20 + 0x30 + lVar27) = uStack_420;
    uStack_420 = 0;
    *(undefined8 *)(lVar20 + 0x48 + lVar27) = uStack_408;
    puVar8 = (undefined4 *)(lVar20 + 0x38 + lVar27);
    *puVar8 = (undefined4)uStack_418;
    puVar8[1] = uStack_418._4_4_;
    puVar8[2] = (undefined4)uStack_410;
    puVar8[3] = uStack_410._4_4_;
    uStack_418 = 0;
    uStack_410 = 0;
    uStack_408 = 0;
    *(undefined1 *)(lVar20 + 0x50 + lVar27) = 0;
    *(undefined4 *)(lVar20 + 0xb0 + lVar27) = 0xffffffff;
    if ((ulong)uStack_3a0 != 0xffffffff) {
      pbStack_858 = (byte *)(lVar20 + lVar27 + 0x50);
      (**(code **)(&UNK_0f3eb9a0 + (ulong)uStack_3a0 * 8))(&pbStack_858,auStack_400);
      *(uint *)(lVar2 + 0xb0) = uVar7;
    }
    *(undefined8 *)(lVar2 + 0xb8) = 0;
    *(undefined8 *)(lVar2 + 0xc0) = 0;
    *(undefined8 *)(lVar2 + 200) = 0;
    *(undefined8 *)(lVar2 + 0xb8) = uStack_398;
    *(undefined8 *)(lVar2 + 0xc0) = uStack_390;
    *(undefined8 *)(lVar2 + 200) = uStack_388;
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_388 = 0;
    *(undefined8 *)(lVar2 + 0xd0) = 0;
    *(undefined8 *)(lVar2 + 0xd8) = 0;
    *(undefined8 *)(lVar2 + 0xe0) = 0;
    *(undefined8 *)(lVar2 + 0xd0) = uStack_380;
    *(undefined8 *)(lVar2 + 0xd8) = uStack_378;
    *(undefined8 *)(lVar2 + 0xe0) = uStack_370;
    uStack_380 = 0;
    uStack_378 = 0;
    uStack_370 = 0;
    *(undefined8 *)(lVar2 + 0xe8) = 0;
    *(undefined8 *)(lVar2 + 0xf0) = 0;
    *(undefined8 *)(lVar2 + 0xf8) = 0;
    *(undefined8 *)(lVar2 + 0xe8) = uStack_368;
    *(undefined8 *)(lVar2 + 0xf0) = uStack_360;
    *(undefined8 *)(lVar2 + 0xf8) = uStack_358;
    uStack_368 = 0;
    uStack_360 = 0;
    uStack_358 = 0;
    *(undefined4 *)(lVar2 + 0x100) = uStack_350;
    *(undefined1 *)(lVar2 + 0x104) = uStack_34c;
    *(undefined1 *)(lVar2 + 0x108) = uStack_348;
    *(undefined8 *)(lVar2 + 0x110) = uStack_340;
    *(undefined8 *)(lVar2 + 0x118) = uStack_338;
    *(undefined8 *)(lVar2 + 0x120) = uStack_330;
    *(undefined8 *)(lVar2 + 0x128) = uStack_328;
    *(undefined8 *)(lVar2 + 0x130) = uStack_320;
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    *(undefined8 *)(lVar2 + 0x138) = uStack_318;
    *(undefined8 *)(lVar2 + 0x140) = uStack_310;
    *(undefined8 *)(lVar2 + 0x148) = uStack_308;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    *(undefined1 *)(lVar2 + 0x150) = uStack_300;
    *(undefined2 *)(lVar2 + 0x158) = uStack_2f8;
    *(undefined8 *)(lVar2 + 0x160) = uStack_2f0;
    *(undefined8 *)(lVar2 + 0x168) = uStack_2e8;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    *(undefined8 *)(lVar2 + 0x180) = uStack_2d0;
    *(undefined4 *)(lVar2 + 0x170) = (undefined4)uStack_2e0;
    *(undefined4 *)(lVar2 + 0x174) = uStack_2e0._4_4_;
    *(undefined4 *)(lVar2 + 0x178) = (undefined4)uStack_2d8;
    *(undefined4 *)(lVar2 + 0x17c) = uStack_2d8._4_4_;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    *(undefined1 *)(lVar2 + 0x188) = uStack_2c8;
    lVar24 = *plVar1;
    lVar9 = plVar1[1];
    lVar27 = lVar2 + (lVar24 - lVar9);
    if (lVar24 - lVar9 != 0) {
      lVar28 = 0;
      do {
        *(undefined **)(lVar27 + lVar28) = &UNK_0f47d3f0;
        *(undefined8 *)(lVar27 + 8 + lVar28) = *(undefined8 *)(lVar24 + 8 + lVar28);
        *(undefined8 *)(lVar27 + 0x10 + lVar28) = 0;
        *(undefined8 *)(lVar27 + 0x10 + lVar28) = *(undefined8 *)(lVar24 + 0x10 + lVar28);
        *(undefined8 *)(lVar24 + 0x10 + lVar28) = 0;
        *(undefined8 *)(lVar27 + 0x18 + lVar28) = 0;
        *(undefined8 *)(lVar27 + 0x18 + lVar28) = *(undefined8 *)(lVar24 + 0x18 + lVar28);
        *(undefined8 *)(lVar24 + 0x18 + lVar28) = 0;
        *(undefined8 *)(lVar27 + 0x20 + lVar28) = *(undefined8 *)(lVar24 + 0x20 + lVar28);
        *(undefined8 *)(lVar27 + 0x28 + lVar28) = 0;
        *(undefined8 *)(lVar27 + 0x28 + lVar28) = *(undefined8 *)(lVar24 + 0x28 + lVar28);
        *(undefined8 *)(lVar24 + 0x28 + lVar28) = 0;
        *(undefined8 *)(lVar27 + 0x30 + lVar28) = 0;
        *(undefined8 *)(lVar27 + 0x30 + lVar28) = *(undefined8 *)(lVar24 + 0x30 + lVar28);
        *(undefined8 *)(lVar24 + 0x30 + lVar28) = 0;
        *(undefined8 *)(lVar27 + 0x48 + lVar28) = *(undefined8 *)(lVar24 + 0x48 + lVar28);
        puVar8 = (undefined4 *)(lVar24 + 0x38 + lVar28);
        uVar30 = puVar8[1];
        uVar31 = puVar8[2];
        uVar11 = puVar8[3];
        puVar4 = (undefined4 *)(lVar27 + 0x38 + lVar28);
        *puVar4 = *puVar8;
        puVar4[1] = uVar30;
        puVar4[2] = uVar31;
        puVar4[3] = uVar11;
        puVar22 = (undefined8 *)(lVar24 + 0x38 + lVar28);
        *puVar22 = 0;
        puVar22[1] = 0;
        *(undefined8 *)(lVar24 + 0x48 + lVar28) = 0;
        *(undefined1 *)(lVar27 + 0x50 + lVar28) = 0;
        *(undefined4 *)(lVar27 + 0xb0 + lVar28) = 0xffffffff;
        uVar7 = *(uint *)(lVar24 + 0xb0 + lVar28);
        if ((ulong)uVar7 != 0xffffffff) {
          pbStack_858 = (byte *)(lVar27 + lVar28 + 0x50);
          (**(code **)(&UNK_0f3eb9a0 + (ulong)uVar7 * 8))(&pbStack_858,lVar24 + 0x50 + lVar28);
          *(uint *)(lVar27 + 0xb0 + lVar28) = uVar7;
        }
        puVar22 = (undefined8 *)(lVar27 + 0xb8 + lVar28);
        *puVar22 = 0;
        puVar22[1] = 0;
        *(undefined8 *)(lVar27 + 200 + lVar28) = 0;
        puVar22 = (undefined8 *)(lVar24 + 0xb8 + lVar28);
        uVar19 = puVar22[1];
        puVar5 = (undefined8 *)(lVar27 + 0xb8 + lVar28);
        *puVar5 = *puVar22;
        puVar5[1] = uVar19;
        *(undefined8 *)(lVar27 + 200 + lVar28) = *(undefined8 *)(lVar24 + 200 + lVar28);
        puVar22 = (undefined8 *)(lVar24 + 0xb8 + lVar28);
        *puVar22 = 0;
        puVar22[1] = 0;
        *(undefined8 *)(lVar24 + 200 + lVar28) = 0;
        puVar22 = (undefined8 *)(lVar27 + 0xd0 + lVar28);
        *puVar22 = 0;
        puVar22[1] = 0;
        *(undefined8 *)(lVar27 + 0xe0 + lVar28) = 0;
        puVar22 = (undefined8 *)(lVar24 + 0xd0 + lVar28);
        uVar19 = puVar22[1];
        puVar5 = (undefined8 *)(lVar27 + 0xd0 + lVar28);
        *puVar5 = *puVar22;
        puVar5[1] = uVar19;
        *(undefined8 *)(lVar27 + 0xe0 + lVar28) = *(undefined8 *)(lVar24 + 0xe0 + lVar28);
        puVar22 = (undefined8 *)(lVar24 + 0xd0 + lVar28);
        *puVar22 = 0;
        puVar22[1] = 0;
        *(undefined8 *)(lVar24 + 0xe0 + lVar28) = 0;
        puVar22 = (undefined8 *)(lVar27 + 0xe8 + lVar28);
        *puVar22 = 0;
        puVar22[1] = 0;
        *(undefined8 *)(lVar27 + 0xf8 + lVar28) = 0;
        puVar22 = (undefined8 *)(lVar24 + 0xe8 + lVar28);
        uVar19 = puVar22[1];
        puVar5 = (undefined8 *)(lVar27 + 0xe8 + lVar28);
        *puVar5 = *puVar22;
        puVar5[1] = uVar19;
        *(undefined8 *)(lVar27 + 0xf8 + lVar28) = *(undefined8 *)(lVar24 + 0xf8 + lVar28);
        puVar22 = (undefined8 *)(lVar24 + 0xe8 + lVar28);
        *puVar22 = 0;
        puVar22[1] = 0;
        *(undefined8 *)(lVar24 + 0xf8 + lVar28) = 0;
        *(undefined4 *)(lVar27 + 0x100 + lVar28) = *(undefined4 *)(lVar24 + 0x100 + lVar28);
        *(undefined1 *)(lVar27 + 0x104 + lVar28) = *(undefined1 *)(lVar24 + 0x104 + lVar28);
        *(undefined1 *)(lVar27 + 0x108 + lVar28) = *(undefined1 *)(lVar24 + 0x108 + lVar28);
        puVar22 = (undefined8 *)(lVar24 + 0x110 + lVar28);
        uVar19 = puVar22[1];
        puVar5 = (undefined8 *)(lVar27 + 0x110 + lVar28);
        *puVar5 = *puVar22;
        puVar5[1] = uVar19;
        *(undefined8 *)(lVar27 + 0x120 + lVar28) = *(undefined8 *)(lVar24 + 0x120 + lVar28);
        puVar22 = (undefined8 *)(lVar24 + 0x128 + lVar28);
        uVar19 = puVar22[1];
        puVar5 = (undefined8 *)(lVar27 + 0x128 + lVar28);
        *puVar5 = *puVar22;
        puVar5[1] = uVar19;
        puVar22 = (undefined8 *)(lVar24 + 0x120 + lVar28);
        *puVar22 = 0;
        puVar22[1] = 0;
        *(undefined8 *)(lVar24 + 0x130 + lVar28) = 0;
        *(undefined8 *)(lVar27 + 0x138 + lVar28) = *(undefined8 *)(lVar24 + 0x138 + lVar28);
        puVar22 = (undefined8 *)(lVar24 + 0x140 + lVar28);
        uVar19 = puVar22[1];
        puVar5 = (undefined8 *)(lVar27 + 0x140 + lVar28);
        *puVar5 = *puVar22;
        puVar5[1] = uVar19;
        puVar22 = (undefined8 *)(lVar24 + 0x138 + lVar28);
        *puVar22 = 0;
        puVar22[1] = 0;
        *(undefined8 *)(lVar24 + 0x148 + lVar28) = 0;
        *(undefined1 *)(lVar27 + 0x150 + lVar28) = *(undefined1 *)(lVar24 + 0x150 + lVar28);
        *(undefined2 *)(lVar27 + 0x158 + lVar28) = *(undefined2 *)(lVar24 + 0x158 + lVar28);
        puVar22 = (undefined8 *)(lVar24 + 0x160 + lVar28);
        uVar19 = puVar22[1];
        puVar5 = (undefined8 *)(lVar27 + 0x160 + lVar28);
        *puVar5 = *puVar22;
        puVar5[1] = uVar19;
        puVar22 = (undefined8 *)(lVar24 + 0x160 + lVar28);
        *puVar22 = 0;
        puVar22[1] = 0;
        *(undefined8 *)(lVar27 + 0x180 + lVar28) = *(undefined8 *)(lVar24 + 0x180 + lVar28);
        puVar8 = (undefined4 *)(lVar24 + 0x170 + lVar28);
        uVar30 = puVar8[1];
        uVar31 = puVar8[2];
        uVar11 = puVar8[3];
        puVar4 = (undefined4 *)(lVar27 + 0x170 + lVar28);
        *puVar4 = *puVar8;
        puVar4[1] = uVar30;
        puVar4[2] = uVar31;
        puVar4[3] = uVar11;
        puVar22 = (undefined8 *)(lVar24 + 0x170 + lVar28);
        *puVar22 = 0;
        puVar22[1] = 0;
        *(undefined8 *)(lVar24 + 0x180 + lVar28) = 0;
        *(undefined1 *)(lVar27 + 0x188 + lVar28) = *(undefined1 *)(lVar24 + 0x188 + lVar28);
        lVar3 = lVar24 + lVar28;
        lVar28 = lVar28 + 400;
      } while (lVar3 + 400 != lVar9);
      do {
        func_0x0ca06de0(lVar24);
        lVar24 = lVar24 + 400;
      } while (lVar24 != lVar9);
      lVar24 = *plVar1;
    }
    puVar22 = (undefined8 *)(lVar2 + 400);
    *plVar1 = lVar27;
    plVar1[1] = (long)puVar22;
    lVar27 = plVar1[2];
    plVar1[2] = lVar20 + uVar23 * 400;
    if (lVar24 != 0) {
      func_0x0412a280(lVar24,lVar27 - lVar24);
    }
  }
  plVar1[1] = (long)puVar22;
LAB_0ca42370:
  if ((uStack_2b8 & 1) != 0) {
    func_0x0412a280(lStack_2a8,uStack_2b8 & 0xfffffffffffffffe);
  }
  if (cStack_2c0 == '\x01') {
    func_0x0ca06de0(&puStack_450);
  }
  if ((uStack_888 & 1) != 0) {
    func_0x0412a280(lStack_878,uStack_888 & 0xfffffffffffffffe);
  }
  return;
}


