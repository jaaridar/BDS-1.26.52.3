/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2cf130 (ELF vaddr 0xd1cf130)
 * Label: JigsawStructurePostprocessAction::vslot3
 * Body:  [[0d2cf130, 0d2cff02] [0d2cff10, 0d2cffee] [0d2cfff0, 0d2d0063]]
 * Ghidra: wg_JigsawStructurePostprocessAction__vslot3
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawStructurePostprocessAction__vslot3(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  char cVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined1 uStack_8a9;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined *puStack_898;
  code *pcStack_890;
  undefined4 uStack_888;
  undefined1 uStack_884;
  long *plStack_880;
  undefined8 uStack_878;
  undefined *puStack_870;
  undefined *puStack_860;
  long *plStack_858;
  long lStack_850;
  long lStack_848;
  byte bStack_840;
  undefined7 uStack_83f;
  undefined4 uStack_838;
  undefined1 uStack_834;
  undefined8 uStack_830;
  byte bStack_828;
  undefined6 uStack_827;
  undefined1 uStack_821;
  undefined1 uStack_820;
  undefined6 uStack_81f;
  undefined1 uStack_819;
  undefined8 uStack_818;
  byte bStack_810;
  undefined7 uStack_80f;
  undefined1 uStack_808;
  undefined7 uStack_807;
  undefined1 uStack_800;
  undefined7 uStack_7ff;
  undefined *puStack_7f8;
  long *plStack_7f0;
  long lStack_7e8;
  long lStack_7e0;
  byte bStack_7d8;
  undefined4 uStack_7d7;
  undefined4 uStack_7d3;
  undefined4 uStack_7cf;
  undefined4 uStack_7cb;
  undefined2 uStack_7c7;
  undefined5 uStack_7c5;
  byte bStack_7c0;
  undefined7 uStack_7bf;
  undefined1 uStack_7b8;
  undefined2 uStack_7b7;
  undefined8 uStack_7b0;
  byte bStack_7a8;
  undefined4 uStack_7a7;
  undefined4 uStack_7a3;
  undefined4 uStack_79f;
  undefined4 uStack_79b;
  undefined1 uStack_797;
  undefined6 uStack_796;
  long lStack_790;
  undefined *puStack_788;
  undefined2 uStack_780;
  long *plStack_778;
  long *plStack_770;
  long lStack_768;
  byte bStack_760;
  undefined1 uStack_75f;
  undefined1 uStack_75e;
  undefined5 uStack_75d;
  undefined8 uStack_750;
  byte bStack_748;
  undefined1 uStack_747;
  undefined1 uStack_746;
  undefined5 uStack_745;
  undefined8 uStack_738;
  byte bStack_730;
  undefined1 uStack_72f;
  undefined1 uStack_72e;
  undefined5 uStack_72d;
  undefined8 uStack_720;
  undefined *puStack_718;
  undefined2 uStack_710;
  long *plStack_708;
  long *plStack_700;
  long lStack_6f8;
  undefined *puStack_6f0;
  long *plStack_6e8;
  long lStack_6e0;
  long lStack_6d8;
  undefined *puStack_6d0;
  long *plStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  undefined *puStack_6b0;
  undefined *apuStack_6a8 [2];
  undefined *puStack_698;
  code *pcStack_690;
  undefined4 uStack_688;
  undefined1 uStack_684;
  long lStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined *puStack_638;
  long **pplStack_630;
  undefined8 uStack_628;
  long *plStack_620;
  undefined8 uStack_618;
  undefined *puStack_610;
  undefined1 *puStack_520;
  undefined8 uStack_518;
  undefined1 auStack_510 [384];
  undefined2 uStack_390;
  undefined1 uStack_38e;
  undefined8 uStack_38c;
  undefined8 uStack_380;
  undefined2 uStack_378;
  byte bStack_368;
  undefined7 uStack_367;
  undefined8 uStack_358;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long *plStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined1 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [256];
  undefined1 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [384];
  undefined2 uStack_50;
  undefined1 uStack_4e;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined2 uStack_38;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uStack_710 = 0;
    puStack_718 = &UNK_0f47e3c0;
    plStack_708 = (long *)0x0;
    plStack_700 = (long *)0x0;
    lStack_6f8 = 0;
    uStack_2f8 = 0;
    puStack_2f0 = (undefined1 *)0x0;
    plStack_308 = (long *)0x0;
    plStack_300 = (long *)0x0;
    plStack_700 = (long *)func_0x0d6c9310(&plStack_708,&plStack_308);
    if (((ulong)plStack_300 & 1) != 0) {
      func_0x0412a280(puStack_2f0,(ulong)plStack_300 & 0xfffffffffffffffe);
    }
    plVar8 = plStack_308;
    plStack_308 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    plStack_300 = _DAT_0f71e6d8;
    plStack_308 = (long *)&UNK_0ef474c0;
    uStack_2f8 = CONCAT44(uStack_2f8._4_4_,0xffffffff);
    puStack_2f0 = auStack_2e0;
    uStack_2e8 = 0x800000000;
    puStack_1e0 = auStack_1d0;
    uStack_1d8 = 0x800000000;
    uStack_50 = 0xfffc;
    uStack_4e = 1;
    uStack_4c = 0xffffffff00000000;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x0d2c9c80(&bStack_368,*(undefined8 *)(param_1 + 0x10));
    plVar8 = plStack_300;
    apuStack_6a8[0] = &UNK_0f45f1b8;
    plStack_880 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    if (plStack_880 == (long *)0x0) {
      func_0x048b0de0(&uStack_648,&puStack_788);
      _DAT_0f54fd90 = (undefined4)uStack_648;
      uRam000000000f54fd94 = uStack_648._4_4_;
      uVar2 = (undefined4)uStack_640;
      uVar5 = uStack_640._4_4_;
      uStack_648 = (byte *)0x0;
      uStack_640 = (long *)0x0;
      plVar4 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
      _DAT_0f54fd98 = uVar2;
      uRam000000000f54fd9c = uVar5;
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar3 = plVar4 + 1;
        lVar7 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          func_0x0412c2d0(plVar4);
        }
      }
      plVar4 = uStack_640;
      if (uStack_640 != (long *)0x0) {
        LOCK();
        plVar3 = uStack_640 + 1;
        lVar7 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*uStack_640 + 0x10))(uStack_640);
          func_0x0412c2d0(plVar4);
        }
      }
      plStack_880 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    }
    plStack_620 = plVar8 + 3;
    puStack_898 = &UNK_0d2e63c0;
    uStack_888 = 0x222a670a;
    pcStack_890 = (code *)0x0;
    uStack_884 = 4;
    uStack_878 = 0;
    puStack_870 = (undefined *)0x0;
    puStack_638 = &UNK_0d2e63c0;
    pplStack_630 = (long **)0x0;
    uStack_628 = CONCAT35(uStack_628._5_3_,0x4222a670a);
    uStack_8a8 = (byte *)0x0;
    uStack_618 = 0;
    puStack_610 = &UNK_0d2e63a0;
    uStack_648 = &bStack_368;
    cVar6 = func_0x0ed6b850(&plStack_308,&puStack_718,&uStack_648,apuStack_6a8);
    if ((pplStack_630 != (long **)0x0) &&
       ((*(code *)pplStack_630)(&uStack_648), pcStack_890 != (code *)0x0)) {
      (*pcStack_890)(&uStack_8a8);
    }
    if (cVar6 != '\0') {
      bStack_7a8 = 0x20;
      uStack_7a7 = _DAT_011cb7e1;
      uStack_7a3 = _UNK_011cb7e5;
      uStack_79f = _UNK_011cb7e9;
      uStack_79b = _UNK_011cb7ed;
      uStack_797 = 0;
      FUN_0d6c4240(&puStack_6d0,&puStack_718);
      lVar9 = param_2 + 8;
      uStack_648 = &bStack_7a8;
      lStack_790 = param_2;
      lVar7 = func_0x0d6c9580(lVar9,uStack_648,&UNK_01563a4f,&uStack_648,&uStack_8a8);
      if ((ulong)*(uint *)(lVar7 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar7 + 0x60) * 8))(&uStack_648,lVar7 + 0x38);
      }
      *(undefined **)(lVar7 + 0x38) = &UNK_0f47e0b0;
      *(long **)(lVar7 + 0x40) = plStack_6c8;
      *(long *)(lVar7 + 0x48) = lStack_6c0;
      *(long *)(lVar7 + 0x50) = lStack_6b8;
      if (lStack_6b8 == 0) {
        *(long *)(lVar7 + 0x40) = lVar7 + 0x48;
      }
      else {
        plStack_6c8 = &lStack_6c0;
        *(long *)(lStack_6c0 + 0x10) = lVar7 + 0x48;
        lStack_6c0 = 0;
        lStack_6b8 = 0;
      }
      *(undefined4 *)(lVar7 + 0x60) = 10;
      puStack_6d0 = &UNK_0f47e0b0;
      func_0x0d6c9500(&plStack_6c8,lStack_6c0);
      if ((bStack_7a8 & 1) != 0) {
        func_0x0412a280(CONCAT62(uStack_796,CONCAT11(uStack_797,uStack_79b._3_1_)),
                        CONCAT35((undefined3)uStack_7a3,CONCAT41(uStack_7a7,bStack_7a8)) &
                        0xfffffffffffffffe);
      }
      puStack_860 = &UNK_0f47e0b0;
      lStack_850 = 0;
      lStack_848 = 0;
      bStack_730 = 2;
      uStack_72f = 0x58;
      uStack_72e = 0;
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uStack_648 = &bStack_730;
      plStack_858 = &lStack_850;
      lVar7 = func_0x0d6c9580(&plStack_858,uStack_648,&UNK_01563a4f,&uStack_648,&uStack_8a8);
      if ((ulong)*(uint *)(lVar7 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar7 + 0x60) * 8))(&uStack_648,lVar7 + 0x38);
      }
      *(undefined **)(lVar7 + 0x38) = &UNK_0f47e2e0;
      *(undefined4 *)(lVar7 + 0x40) = uVar2;
      *(undefined4 *)(lVar7 + 0x60) = 3;
      if ((bStack_730 & 1) != 0) {
        func_0x0412a280(uStack_720,
                        CONCAT53(uStack_72d,CONCAT12(uStack_72e,CONCAT11(uStack_72f,bStack_730))) &
                        0xfffffffffffffffe);
      }
      bStack_748 = 2;
      uStack_747 = 0x59;
      uStack_746 = 0;
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      uStack_648 = &bStack_748;
      lVar7 = func_0x0d6c9580(&plStack_858,uStack_648,&UNK_01563a4f,&uStack_648,&uStack_8a8);
      if ((ulong)*(uint *)(lVar7 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar7 + 0x60) * 8))(&uStack_648,lVar7 + 0x38);
      }
      *(undefined **)(lVar7 + 0x38) = &UNK_0f47e2e0;
      *(undefined4 *)(lVar7 + 0x40) = uVar2;
      *(undefined4 *)(lVar7 + 0x60) = 3;
      if ((bStack_748 & 1) != 0) {
        func_0x0412a280(uStack_738,
                        CONCAT53(uStack_745,CONCAT12(uStack_746,CONCAT11(uStack_747,bStack_748))) &
                        0xfffffffffffffffe);
      }
      bStack_760 = 2;
      uStack_75f = 0x5a;
      uStack_75e = 0;
      uVar2 = *(undefined4 *)(param_1 + 0x20);
      uStack_648 = &bStack_760;
      lVar7 = func_0x0d6c9580(&plStack_858,uStack_648,&UNK_01563a4f,&uStack_648,&uStack_8a8);
      if ((ulong)*(uint *)(lVar7 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar7 + 0x60) * 8))(&uStack_648,lVar7 + 0x38);
      }
      *(undefined **)(lVar7 + 0x38) = &UNK_0f47e2e0;
      *(undefined4 *)(lVar7 + 0x40) = uVar2;
      *(undefined4 *)(lVar7 + 0x60) = 3;
      if ((bStack_760 & 1) != 0) {
        func_0x0412a280(uStack_750,
                        CONCAT53(uStack_75d,CONCAT12(uStack_75e,CONCAT11(uStack_75f,bStack_760))) &
                        0xfffffffffffffffe);
      }
      bStack_7c0 = 0x12;
      uStack_7bf = 0x506e696769724f;
      uStack_7b8 = 0x6f;
      uStack_7b7 = 0x73;
      puStack_7f8 = &UNK_0f47e0b0;
      plStack_7f0 = plStack_858;
      lStack_7e8 = lStack_850;
      lStack_7e0 = lStack_848;
      plVar8 = &lStack_7e8;
      if (lStack_848 != 0) {
        *(long **)(lStack_850 + 0x10) = &lStack_7e8;
        lStack_850 = 0;
        lStack_848 = 0;
        plStack_858 = &lStack_850;
        plVar8 = plStack_7f0;
      }
      plStack_7f0 = plVar8;
      uStack_648 = &bStack_7c0;
      lVar7 = func_0x0d6c9580(lVar9,uStack_648,&UNK_01563a4f,&uStack_648,&uStack_8a8);
      if ((ulong)*(uint *)(lVar7 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar7 + 0x60) * 8))(&uStack_648,lVar7 + 0x38);
      }
      *(undefined **)(lVar7 + 0x38) = &UNK_0f47e0b0;
      *(long **)(lVar7 + 0x40) = plStack_7f0;
      *(long *)(lVar7 + 0x48) = lStack_7e8;
      *(long *)(lVar7 + 0x50) = lStack_7e0;
      if (lStack_7e0 == 0) {
        *(long *)(lVar7 + 0x40) = lVar7 + 0x48;
      }
      else {
        *(long *)(lStack_7e8 + 0x10) = lVar7 + 0x48;
        lStack_7e8 = 0;
        lStack_7e0 = 0;
        plStack_7f0 = &lStack_7e8;
      }
      *(undefined4 *)(lVar7 + 0x60) = 10;
      puStack_7f8 = &UNK_0f47e0b0;
      func_0x0d6c9500(&plStack_7f0,lStack_7e8);
      if ((bStack_7c0 & 1) != 0) {
        func_0x0412a280(uStack_7b0,CONCAT71(uStack_7bf,bStack_7c0) & 0xfffffffffffffffe);
      }
      bStack_7d8 = 0x22;
      uStack_7d7 = _DAT_014249aa;
      uStack_7d3 = _UNK_014249ae;
      uStack_7cf = _UNK_014249b2;
      uStack_7cb = _UNK_014249b6;
      uStack_7c7 = 0x74;
      uVar1 = *(undefined1 *)(param_1 + 0x48);
      uStack_648 = &bStack_7d8;
      lVar7 = func_0x0d6c9580(lVar9,uStack_648,&UNK_01563a4f,&uStack_648,&uStack_8a8);
      if ((ulong)*(uint *)(lVar7 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar7 + 0x60) * 8))(&uStack_648,lVar7 + 0x38);
      }
      *(undefined **)(lVar7 + 0x38) = &UNK_0f47e040;
      *(undefined1 *)(lVar7 + 0x40) = uVar1;
      *(undefined4 *)(lVar7 + 0x60) = 1;
      if ((bStack_7d8 & 1) != 0) {
        func_0x0412a280(CONCAT53(uStack_7c5,CONCAT21(uStack_7c7,uStack_7cb._3_1_)),
                        CONCAT35((undefined3)uStack_7d3,CONCAT41(uStack_7d7,bStack_7d8)) &
                        0xfffffffffffffffe);
      }
      bStack_810 = 0x1e;
      uStack_80f = 0x6564756c636e49;
      uStack_808 = 0x45;
      uStack_807 = 0x7365697469746e;
      uStack_800 = 0;
      FUN_0d6bbef0(lStack_790,&bStack_810,*(undefined1 *)(param_1 + 0x49));
      if ((bStack_810 & 1) != 0) {
        func_0x0412a280(CONCAT71(uStack_7ff,uStack_800),
                        CONCAT71(uStack_80f,bStack_810) & 0xfffffffffffffffe);
      }
      bStack_828 = 0x1c;
      uStack_827 = 0x64697571694c;
      uStack_821 = 0x53;
      uStack_820 = 0x65;
      uStack_81f = 0x73676e697474;
      uStack_819 = 0;
      uVar1 = *(undefined1 *)(param_1 + 0x4a);
      uStack_648 = &bStack_828;
      lVar7 = func_0x0d6c9580(lVar9,uStack_648,&UNK_01563a4f,&uStack_648,&uStack_8a8);
      if ((ulong)*(uint *)(lVar7 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar7 + 0x60) * 8))(&uStack_648,lVar7 + 0x38);
      }
      *(undefined **)(lVar7 + 0x38) = &UNK_0f47e040;
      *(undefined1 *)(lVar7 + 0x40) = uVar1;
      *(undefined4 *)(lVar7 + 0x60) = 1;
      if ((bStack_828 & 1) != 0) {
        func_0x0412a280(uStack_818,
                        CONCAT17(uStack_821,CONCAT61(uStack_827,bStack_828)) & 0xfffffffffffffffe);
      }
      uStack_668 = *(undefined8 *)(param_1 + 0x24);
      uStack_660 = *(undefined8 *)(param_1 + 0x2c);
      uStack_658 = *(undefined8 *)(param_1 + 0x34);
      uStack_780 = 0;
      puStack_788 = &UNK_0f47e3c0;
      plStack_778 = (long *)0x0;
      plStack_770 = (long *)0x0;
      lStack_768 = 0;
      puStack_638 = (undefined *)0x0;
      pplStack_630 = (long **)0x0;
      uStack_648 = (byte *)0x0;
      uStack_640 = (long *)0x0;
      plStack_770 = (long *)func_0x0d6c9310(&plStack_778,&uStack_648);
      if (((ulong)uStack_640 & 1) != 0) {
        func_0x0412a280(pplStack_630,(ulong)uStack_640 & 0xfffffffffffffffe);
      }
      plVar8 = (long *)uStack_648;
      uStack_648 = (byte *)0x0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
      plVar8 = _DAT_0f71e6d8;
      uStack_640 = _DAT_0f71e6d8;
      uStack_648 = &UNK_0ef474c0;
      puStack_638 = (undefined *)CONCAT44(puStack_638._4_4_,0xffffffff);
      pplStack_630 = &plStack_620;
      uStack_628 = 0x800000000;
      puStack_520 = auStack_510;
      uStack_518 = 0x800000000;
      uStack_390 = 0xfffc;
      uStack_38e = 1;
      uStack_38c = 0xffffffff00000000;
      uStack_380 = 0;
      uStack_378 = 0;
      puStack_6b0 = &UNK_0f45f410;
      lStack_680 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      if (lStack_680 == 0) {
        func_0x048b0de0(&uStack_8a8,&uStack_8a9);
        _DAT_0f54fd90 = (undefined4)uStack_8a8;
        uRam000000000f54fd94 = uStack_8a8._4_4_;
        uVar2 = (undefined4)uStack_8a0;
        uVar5 = uStack_8a0._4_4_;
        uStack_8a8 = (byte *)0x0;
        uStack_8a0 = (long *)0x0;
        plVar4 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
        _DAT_0f54fd98 = uVar2;
        uRam000000000f54fd9c = uVar5;
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar3 = plVar4 + 1;
          lVar7 = *plVar3;
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (lVar7 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            func_0x0412c2d0(plVar4);
          }
        }
        plVar4 = uStack_8a0;
        if (uStack_8a0 != (long *)0x0) {
          LOCK();
          plVar3 = uStack_8a0 + 1;
          lVar7 = *plVar3;
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (lVar7 == 0) {
            (**(code **)(*uStack_8a0 + 0x10))(uStack_8a0);
            func_0x0412c2d0(plVar4);
          }
        }
        lStack_680 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      }
      plStack_880 = plVar8 + 3;
      puStack_698 = &UNK_0d2ea6c0;
      uStack_688 = 0xe3381109;
      pcStack_690 = (code *)0x0;
      uStack_684 = 4;
      uStack_678 = 0;
      uStack_670 = 0;
      puStack_898 = &UNK_0d2ea6c0;
      pcStack_890 = (code *)0x0;
      uStack_888 = 0xe3381109;
      uStack_884 = 4;
      apuStack_6a8[0] = (undefined *)0x0;
      uStack_8a8 = (byte *)&uStack_668;
      uStack_878 = 0;
      puStack_870 = &UNK_0d2ea6a0;
      func_0x0ed6b850(&uStack_648,&puStack_788,&uStack_8a8,&puStack_6b0);
      if ((pcStack_890 != (code *)0x0) && ((*pcStack_890)(&uStack_8a8), pcStack_690 != (code *)0x0))
      {
        (*pcStack_690)(apuStack_6a8);
      }
      bStack_840 = 0x16;
      uStack_83f = 0x6f426b6e756843;
      uStack_838 = 0x73646e75;
      uStack_834 = 0;
      FUN_0d6c4240(&puStack_6f0,&puStack_788);
      uStack_8a8 = &bStack_840;
      lVar7 = func_0x0d6c9580(lVar9,uStack_8a8,&UNK_01563a4f,&uStack_8a8,apuStack_6a8);
      if ((ulong)*(uint *)(lVar7 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar7 + 0x60) * 8))(&uStack_8a8,lVar7 + 0x38);
      }
      *(undefined **)(lVar7 + 0x38) = &UNK_0f47e0b0;
      *(long **)(lVar7 + 0x40) = plStack_6e8;
      *(long *)(lVar7 + 0x48) = lStack_6e0;
      *(long *)(lVar7 + 0x50) = lStack_6d8;
      if (lStack_6d8 == 0) {
        *(long *)(lVar7 + 0x40) = lVar7 + 0x48;
      }
      else {
        plStack_6e8 = &lStack_6e0;
        *(long *)(lStack_6e0 + 0x10) = lVar7 + 0x48;
        lStack_6e0 = 0;
        lStack_6d8 = 0;
      }
      *(undefined4 *)(lVar7 + 0x60) = 10;
      puStack_6f0 = &UNK_0f47e0b0;
      func_0x0d6c9500(&plStack_6e8,lStack_6e0);
      if ((bStack_840 & 1) != 0) {
        func_0x0412a280(uStack_830,CONCAT71(uStack_83f,bStack_840) & 0xfffffffffffffffe);
      }
      func_0x048ffe50(&uStack_648);
      plVar4 = plStack_778;
      param_2 = lStack_790;
      plVar8 = plStack_770;
      if (plStack_778 != (long *)0x0) {
        while (plVar4 != plVar8) {
          if ((*(byte *)(plVar8 + -3) & 1) != 0) {
            func_0x0412a280(plVar8[-1],plVar8[-3] & 0xfffffffffffffffe);
          }
          plVar8 = plVar8 + -4;
          plVar3 = (long *)*plVar8;
          *plVar8 = 0;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 8))();
          }
        }
        plStack_770 = plVar4;
        func_0x0412a280(plStack_778,lStack_768 - (long)plStack_778);
      }
      puStack_860 = &UNK_0f47e0b0;
      func_0x0d6c9500(&plStack_858,lStack_850);
    }
    if (lStack_320 != 0) {
      lStack_318 = lStack_320;
      func_0x0412a280(lStack_320,lStack_310 - lStack_320);
    }
    if ((bStack_368 & 1) != 0) {
      func_0x0412a280(uStack_358,CONCAT71(uStack_367,bStack_368) & 0xfffffffffffffffe);
    }
    func_0x048ffe50(&plStack_308);
    plVar4 = plStack_708;
    plVar8 = plStack_700;
    if (plStack_708 != (long *)0x0) {
      while (plVar4 != plVar8) {
        if ((*(byte *)(plVar8 + -3) & 1) != 0) {
          func_0x0412a280(plVar8[-1],plVar8[-3] & 0xfffffffffffffffe);
        }
        plVar8 = plVar8 + -4;
        plVar3 = (long *)*plVar8;
        *plVar8 = 0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      plStack_700 = plVar4;
      func_0x0412a280(plStack_708,lStack_6f8 - (long)plStack_708);
    }
  }
  func_0x0cad6ff0(param_1,param_2);
  return;
}



/* ---- referenced strings ----
 * 0x11cb7e1  StructureSection
 * 0x14249aa  JigsawReplacement
 */
