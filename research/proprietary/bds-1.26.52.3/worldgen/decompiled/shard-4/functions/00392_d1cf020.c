/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2cf020 (ELF vaddr 0xd1cf020)
 * Label: caller-of-seed
 * Body:  [[0d2cf020, 0d2cff02] [0d2cff10, 0d2cffee] [0d2cfff0, 0d2d0063]]
 * Ghidra: FUN_0d2cf020
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0d2cf020(undefined8 *param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  char cVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 **unaff_RBP;
  long lVar13;
  long unaff_R12;
  undefined8 *unaff_R13;
  long unaff_R15;
  undefined1 uStack_911;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined *puStack_900;
  code *pcStack_8f8;
  undefined4 uStack_8f0;
  undefined1 uStack_8ec;
  long *plStack_8e8;
  undefined8 uStack_8e0;
  undefined *puStack_8d8;
  undefined *puStack_8c8;
  long *plStack_8c0;
  long lStack_8b8;
  long lStack_8b0;
  byte bStack_8a8;
  undefined7 uStack_8a7;
  undefined4 uStack_8a0;
  undefined1 uStack_89c;
  undefined8 uStack_898;
  byte bStack_890;
  undefined6 uStack_88f;
  undefined1 uStack_889;
  undefined1 uStack_888;
  undefined6 uStack_887;
  undefined1 uStack_881;
  undefined8 uStack_880;
  byte bStack_878;
  undefined7 uStack_877;
  undefined1 uStack_870;
  undefined7 uStack_86f;
  undefined1 uStack_868;
  undefined7 uStack_867;
  undefined *puStack_860;
  long *plStack_858;
  long lStack_850;
  long lStack_848;
  byte bStack_840;
  undefined4 uStack_83f;
  undefined4 uStack_83b;
  undefined4 uStack_837;
  undefined4 uStack_833;
  undefined2 uStack_82f;
  undefined5 uStack_82d;
  byte bStack_828;
  undefined7 uStack_827;
  undefined1 uStack_820;
  undefined2 uStack_81f;
  undefined8 uStack_818;
  byte bStack_810;
  undefined4 uStack_80f;
  undefined4 uStack_80b;
  undefined4 uStack_807;
  undefined4 uStack_803;
  undefined1 uStack_7ff;
  undefined6 uStack_7fe;
  long lStack_7f8;
  undefined *puStack_7f0;
  undefined2 uStack_7e8;
  long *plStack_7e0;
  long *plStack_7d8;
  long lStack_7d0;
  byte bStack_7c8;
  undefined1 uStack_7c7;
  undefined1 uStack_7c6;
  undefined5 uStack_7c5;
  undefined8 uStack_7b8;
  byte bStack_7b0;
  undefined1 uStack_7af;
  undefined1 uStack_7ae;
  undefined5 uStack_7ad;
  undefined8 uStack_7a0;
  byte bStack_798;
  undefined1 uStack_797;
  undefined1 uStack_796;
  undefined5 uStack_795;
  undefined8 uStack_788;
  undefined *puStack_780;
  undefined2 uStack_778;
  long *plStack_770;
  long *plStack_768;
  long lStack_760;
  undefined *puStack_758;
  long *plStack_750;
  long lStack_748;
  long lStack_740;
  undefined *puStack_738;
  long *plStack_730;
  long lStack_728;
  long lStack_720;
  undefined *puStack_718;
  undefined *apuStack_710 [2];
  undefined *puStack_700;
  code *pcStack_6f8;
  undefined4 uStack_6f0;
  undefined1 uStack_6ec;
  long lStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined *puStack_6a0;
  long **pplStack_698;
  undefined8 uStack_690;
  long *plStack_688;
  undefined8 uStack_680;
  undefined *puStack_678;
  undefined1 *puStack_588;
  undefined8 uStack_580;
  undefined1 auStack_578 [384];
  undefined2 uStack_3f8;
  undefined1 uStack_3f6;
  undefined8 uStack_3f4;
  undefined8 uStack_3e8;
  undefined2 uStack_3e0;
  byte bStack_3d0;
  undefined7 uStack_3cf;
  undefined8 uStack_3c0;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long *plStack_370;
  long *plStack_368;
  undefined8 uStack_360;
  undefined1 *puStack_358;
  undefined8 uStack_350;
  undefined1 auStack_348 [256];
  undefined1 *puStack_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [384];
  undefined2 uStack_b8;
  undefined1 uStack_b6;
  undefined8 uStack_b4;
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 **ppuStack_70;
  undefined4 uStack_64;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined4 uStack_50;
  undefined8 *puStack_48;
  undefined8 **ppuStack_40;
  undefined8 ***pppuStack_38;
  
  *param_1 = &UNK_0f45e800;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar2 = *(uint *)(param_2 + 0x30);
  lVar10 = param_2;
  uStack_64 = param_4;
  puStack_60 = param_3;
  puStack_48 = param_1;
  if ((ulong)uVar2 != 0xffffffff) {
    unaff_R13 = param_1 + 1;
    unaff_R15 = param_2 + 8;
    unaff_RBP = &puStack_58;
    ppuStack_70 = (undefined8 **)0xd2cf087;
    lVar10 = unaff_R15;
    puStack_58 = unaff_R13;
    (**(code **)(&UNK_0f45ee88 + (ulong)uVar2 * 8))(unaff_RBP);
    *(uint *)(param_1 + 6) = uVar2;
    puStack_58 = puStack_60;
    uStack_50 = uStack_64;
    unaff_R12 = param_2;
    if ((ulong)*(uint *)(param_2 + 0x30) != 0xffffffff) {
      pppuStack_38 = &ppuStack_40;
      ppuStack_70 = (undefined8 **)0xd2cf0d2;
      ppuStack_40 = unaff_RBP;
      (**(code **)(&UNK_0f45ef28 + (ulong)*(uint *)(param_2 + 0x30) * 8))(&pppuStack_38,unaff_R15);
      return param_1;
    }
  }
  ppuStack_40 = &puStack_58;
  ppuStack_70 = (undefined8 **)0xd2cf10a;
  puStack_58 = puStack_60;
  uStack_50 = uStack_64;
  uVar8 = func_0x04931450();
  ppuStack_70 = (undefined8 **)0xd2cf115;
  func_0x0d2e0480(unaff_R13);
  ppuStack_70 = (undefined8 **)0xd2cf11d;
  lVar9 = _Unwind_Resume(uVar8);
  ppuStack_70 = (undefined8 **)0xd2cf128;
  func_0x0624d960(param_1);
  ppuStack_70 = (undefined8 **)0xd2cf130;
  lVar13 = lVar9;
  _Unwind_Resume();
  puStack_98 = param_1;
  lStack_90 = unaff_R12;
  puStack_88 = unaff_R13;
  lStack_80 = lVar9;
  lStack_78 = unaff_R15;
  ppuStack_70 = unaff_RBP;
  if (*(long *)(lVar13 + 0x10) != 0) {
    uStack_778 = 0;
    puStack_780 = &UNK_0f47e3c0;
    plStack_770 = (long *)0x0;
    plStack_768 = (long *)0x0;
    lStack_760 = 0;
    uStack_360 = 0;
    puStack_358 = (undefined1 *)0x0;
    plStack_370 = (long *)0x0;
    plStack_368 = (long *)0x0;
    plStack_768 = (long *)func_0x0d6c9310(&plStack_770,&plStack_370);
    if (((ulong)plStack_368 & 1) != 0) {
      func_0x0412a280(puStack_358,(ulong)plStack_368 & 0xfffffffffffffffe);
    }
    plVar12 = plStack_370;
    plStack_370 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 8))();
    }
    plStack_368 = _DAT_0f71e6d8;
    plStack_370 = (long *)&UNK_0ef474c0;
    uStack_360 = CONCAT44(uStack_360._4_4_,0xffffffff);
    puStack_358 = auStack_348;
    uStack_350 = 0x800000000;
    puStack_248 = auStack_238;
    uStack_240 = 0x800000000;
    uStack_b8 = 0xfffc;
    uStack_b6 = 1;
    uStack_b4 = 0xffffffff00000000;
    uStack_a8 = 0;
    uStack_a0 = 0;
    func_0x0d2c9c80(&bStack_3d0,*(undefined8 *)(lVar13 + 0x10));
    plVar12 = plStack_368;
    apuStack_710[0] = &UNK_0f45f1b8;
    plStack_8e8 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    if (plStack_8e8 == (long *)0x0) {
      func_0x048b0de0(&uStack_6b0,&puStack_7f0);
      _DAT_0f54fd90 = (undefined4)uStack_6b0;
      uRam000000000f54fd94 = uStack_6b0._4_4_;
      uVar3 = (undefined4)uStack_6a8;
      uVar6 = uStack_6a8._4_4_;
      uStack_6b0 = (byte *)0x0;
      uStack_6a8 = (long *)0x0;
      plVar5 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
      _DAT_0f54fd98 = uVar3;
      uRam000000000f54fd9c = uVar6;
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar4 = plVar5 + 1;
        lVar9 = *plVar4;
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          func_0x0412c2d0(plVar5);
        }
      }
      plVar5 = uStack_6a8;
      if (uStack_6a8 != (long *)0x0) {
        LOCK();
        plVar4 = uStack_6a8 + 1;
        lVar9 = *plVar4;
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*uStack_6a8 + 0x10))(uStack_6a8);
          func_0x0412c2d0(plVar5);
        }
      }
      plStack_8e8 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    }
    plStack_688 = plVar12 + 3;
    puStack_900 = &UNK_0d2e63c0;
    uStack_8f0 = 0x222a670a;
    pcStack_8f8 = (code *)0x0;
    uStack_8ec = 4;
    uStack_8e0 = 0;
    puStack_8d8 = (undefined *)0x0;
    puStack_6a0 = &UNK_0d2e63c0;
    pplStack_698 = (long **)0x0;
    uStack_690 = CONCAT35(uStack_690._5_3_,0x4222a670a);
    uStack_910 = (byte *)0x0;
    uStack_680 = 0;
    puStack_678 = &UNK_0d2e63a0;
    uStack_6b0 = &bStack_3d0;
    cVar7 = func_0x0ed6b850(&plStack_370,&puStack_780,&uStack_6b0,apuStack_710);
    if ((pplStack_698 != (long **)0x0) &&
       ((*(code *)pplStack_698)(&uStack_6b0), pcStack_8f8 != (code *)0x0)) {
      (*pcStack_8f8)(&uStack_910);
    }
    if (cVar7 != '\0') {
      bStack_810 = 0x20;
      uStack_80f = _DAT_011cb7e1;
      uStack_80b = _UNK_011cb7e5;
      uStack_807 = _UNK_011cb7e9;
      uStack_803 = _UNK_011cb7ed;
      uStack_7ff = 0;
      func_0x0d6c4240(&puStack_738,&puStack_780);
      lVar9 = lVar10 + 8;
      uStack_6b0 = &bStack_810;
      lStack_7f8 = lVar10;
      lVar10 = FUN_0d6c9580(lVar9,uStack_6b0,&UNK_01563a4f,&uStack_6b0,&uStack_910);
      if ((ulong)*(uint *)(lVar10 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar10 + 0x60) * 8))
                  (&uStack_6b0,lVar10 + 0x38);
      }
      *(undefined **)(lVar10 + 0x38) = &UNK_0f47e0b0;
      *(long **)(lVar10 + 0x40) = plStack_730;
      *(long *)(lVar10 + 0x48) = lStack_728;
      *(long *)(lVar10 + 0x50) = lStack_720;
      if (lStack_720 == 0) {
        *(long *)(lVar10 + 0x40) = lVar10 + 0x48;
      }
      else {
        plStack_730 = &lStack_728;
        *(long *)(lStack_728 + 0x10) = lVar10 + 0x48;
        lStack_728 = 0;
        lStack_720 = 0;
      }
      *(undefined4 *)(lVar10 + 0x60) = 10;
      puStack_738 = &UNK_0f47e0b0;
      FUN_0d6c9500(&plStack_730,lStack_728);
      if ((bStack_810 & 1) != 0) {
        func_0x0412a280(CONCAT62(uStack_7fe,CONCAT11(uStack_7ff,uStack_803._3_1_)),
                        CONCAT35((undefined3)uStack_80b,CONCAT41(uStack_80f,bStack_810)) &
                        0xfffffffffffffffe);
      }
      puStack_8c8 = &UNK_0f47e0b0;
      lStack_8b8 = 0;
      lStack_8b0 = 0;
      bStack_798 = 2;
      uStack_797 = 0x58;
      uStack_796 = 0;
      uVar3 = *(undefined4 *)(lVar13 + 0x18);
      uStack_6b0 = &bStack_798;
      plStack_8c0 = &lStack_8b8;
      lVar10 = FUN_0d6c9580(&plStack_8c0,uStack_6b0,&UNK_01563a4f,&uStack_6b0,&uStack_910);
      if ((ulong)*(uint *)(lVar10 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar10 + 0x60) * 8))
                  (&uStack_6b0,lVar10 + 0x38);
      }
      *(undefined **)(lVar10 + 0x38) = &UNK_0f47e2e0;
      *(undefined4 *)(lVar10 + 0x40) = uVar3;
      *(undefined4 *)(lVar10 + 0x60) = 3;
      if ((bStack_798 & 1) != 0) {
        func_0x0412a280(uStack_788,
                        CONCAT53(uStack_795,CONCAT12(uStack_796,CONCAT11(uStack_797,bStack_798))) &
                        0xfffffffffffffffe);
      }
      bStack_7b0 = 2;
      uStack_7af = 0x59;
      uStack_7ae = 0;
      uVar3 = *(undefined4 *)(lVar13 + 0x1c);
      uStack_6b0 = &bStack_7b0;
      lVar10 = FUN_0d6c9580(&plStack_8c0,uStack_6b0,&UNK_01563a4f,&uStack_6b0,&uStack_910);
      if ((ulong)*(uint *)(lVar10 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar10 + 0x60) * 8))
                  (&uStack_6b0,lVar10 + 0x38);
      }
      *(undefined **)(lVar10 + 0x38) = &UNK_0f47e2e0;
      *(undefined4 *)(lVar10 + 0x40) = uVar3;
      *(undefined4 *)(lVar10 + 0x60) = 3;
      if ((bStack_7b0 & 1) != 0) {
        func_0x0412a280(uStack_7a0,
                        CONCAT53(uStack_7ad,CONCAT12(uStack_7ae,CONCAT11(uStack_7af,bStack_7b0))) &
                        0xfffffffffffffffe);
      }
      bStack_7c8 = 2;
      uStack_7c7 = 0x5a;
      uStack_7c6 = 0;
      uVar3 = *(undefined4 *)(lVar13 + 0x20);
      uStack_6b0 = &bStack_7c8;
      lVar10 = FUN_0d6c9580(&plStack_8c0,uStack_6b0,&UNK_01563a4f,&uStack_6b0,&uStack_910);
      if ((ulong)*(uint *)(lVar10 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar10 + 0x60) * 8))
                  (&uStack_6b0,lVar10 + 0x38);
      }
      *(undefined **)(lVar10 + 0x38) = &UNK_0f47e2e0;
      *(undefined4 *)(lVar10 + 0x40) = uVar3;
      *(undefined4 *)(lVar10 + 0x60) = 3;
      if ((bStack_7c8 & 1) != 0) {
        func_0x0412a280(uStack_7b8,
                        CONCAT53(uStack_7c5,CONCAT12(uStack_7c6,CONCAT11(uStack_7c7,bStack_7c8))) &
                        0xfffffffffffffffe);
      }
      bStack_828 = 0x12;
      uStack_827 = 0x506e696769724f;
      uStack_820 = 0x6f;
      uStack_81f = 0x73;
      puStack_860 = &UNK_0f47e0b0;
      plStack_858 = plStack_8c0;
      lStack_850 = lStack_8b8;
      lStack_848 = lStack_8b0;
      plVar12 = &lStack_850;
      if (lStack_8b0 != 0) {
        *(long **)(lStack_8b8 + 0x10) = &lStack_850;
        lStack_8b8 = 0;
        lStack_8b0 = 0;
        plStack_8c0 = &lStack_8b8;
        plVar12 = plStack_858;
      }
      plStack_858 = plVar12;
      uStack_6b0 = &bStack_828;
      lVar10 = FUN_0d6c9580(lVar9,uStack_6b0,&UNK_01563a4f,&uStack_6b0,&uStack_910);
      if ((ulong)*(uint *)(lVar10 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar10 + 0x60) * 8))
                  (&uStack_6b0,lVar10 + 0x38);
      }
      *(undefined **)(lVar10 + 0x38) = &UNK_0f47e0b0;
      *(long **)(lVar10 + 0x40) = plStack_858;
      *(long *)(lVar10 + 0x48) = lStack_850;
      *(long *)(lVar10 + 0x50) = lStack_848;
      if (lStack_848 == 0) {
        *(long *)(lVar10 + 0x40) = lVar10 + 0x48;
      }
      else {
        *(long *)(lStack_850 + 0x10) = lVar10 + 0x48;
        lStack_850 = 0;
        lStack_848 = 0;
        plStack_858 = &lStack_850;
      }
      *(undefined4 *)(lVar10 + 0x60) = 10;
      puStack_860 = &UNK_0f47e0b0;
      FUN_0d6c9500(&plStack_858,lStack_850);
      if ((bStack_828 & 1) != 0) {
        func_0x0412a280(uStack_818,CONCAT71(uStack_827,bStack_828) & 0xfffffffffffffffe);
      }
      bStack_840 = 0x22;
      uStack_83f = _DAT_014249aa;
      uStack_83b = _UNK_014249ae;
      uStack_837 = _UNK_014249b2;
      uStack_833 = _UNK_014249b6;
      uStack_82f = 0x74;
      uVar1 = *(undefined1 *)(lVar13 + 0x48);
      uStack_6b0 = &bStack_840;
      lVar10 = FUN_0d6c9580(lVar9,uStack_6b0,&UNK_01563a4f,&uStack_6b0,&uStack_910);
      if ((ulong)*(uint *)(lVar10 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar10 + 0x60) * 8))
                  (&uStack_6b0,lVar10 + 0x38);
      }
      *(undefined **)(lVar10 + 0x38) = &UNK_0f47e040;
      *(undefined1 *)(lVar10 + 0x40) = uVar1;
      *(undefined4 *)(lVar10 + 0x60) = 1;
      if ((bStack_840 & 1) != 0) {
        func_0x0412a280(CONCAT53(uStack_82d,CONCAT21(uStack_82f,uStack_833._3_1_)),
                        CONCAT35((undefined3)uStack_83b,CONCAT41(uStack_83f,bStack_840)) &
                        0xfffffffffffffffe);
      }
      bStack_878 = 0x1e;
      uStack_877 = 0x6564756c636e49;
      uStack_870 = 0x45;
      uStack_86f = 0x7365697469746e;
      uStack_868 = 0;
      func_0x0d6bbef0(lStack_7f8,&bStack_878,*(undefined1 *)(lVar13 + 0x49));
      if ((bStack_878 & 1) != 0) {
        func_0x0412a280(CONCAT71(uStack_867,uStack_868),
                        CONCAT71(uStack_877,bStack_878) & 0xfffffffffffffffe);
      }
      bStack_890 = 0x1c;
      uStack_88f = 0x64697571694c;
      uStack_889 = 0x53;
      uStack_888 = 0x65;
      uStack_887 = 0x73676e697474;
      uStack_881 = 0;
      uVar1 = *(undefined1 *)(lVar13 + 0x4a);
      uStack_6b0 = &bStack_890;
      lVar10 = FUN_0d6c9580(lVar9,uStack_6b0,&UNK_01563a4f,&uStack_6b0,&uStack_910);
      if ((ulong)*(uint *)(lVar10 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar10 + 0x60) * 8))
                  (&uStack_6b0,lVar10 + 0x38);
      }
      *(undefined **)(lVar10 + 0x38) = &UNK_0f47e040;
      *(undefined1 *)(lVar10 + 0x40) = uVar1;
      *(undefined4 *)(lVar10 + 0x60) = 1;
      if ((bStack_890 & 1) != 0) {
        func_0x0412a280(uStack_880,
                        CONCAT17(uStack_889,CONCAT61(uStack_88f,bStack_890)) & 0xfffffffffffffffe);
      }
      uStack_6d0 = *(undefined8 *)(lVar13 + 0x24);
      uStack_6c8 = *(undefined8 *)(lVar13 + 0x2c);
      uStack_6c0 = *(undefined8 *)(lVar13 + 0x34);
      uStack_7e8 = 0;
      puStack_7f0 = &UNK_0f47e3c0;
      plStack_7e0 = (long *)0x0;
      plStack_7d8 = (long *)0x0;
      lStack_7d0 = 0;
      puStack_6a0 = (undefined *)0x0;
      pplStack_698 = (long **)0x0;
      uStack_6b0 = (byte *)0x0;
      uStack_6a8 = (long *)0x0;
      plStack_7d8 = (long *)func_0x0d6c9310(&plStack_7e0,&uStack_6b0);
      if (((ulong)uStack_6a8 & 1) != 0) {
        func_0x0412a280(pplStack_698,(ulong)uStack_6a8 & 0xfffffffffffffffe);
      }
      plVar12 = (long *)uStack_6b0;
      uStack_6b0 = (byte *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 8))();
      }
      plVar12 = _DAT_0f71e6d8;
      uStack_6a8 = _DAT_0f71e6d8;
      uStack_6b0 = &UNK_0ef474c0;
      puStack_6a0 = (undefined *)CONCAT44(puStack_6a0._4_4_,0xffffffff);
      pplStack_698 = &plStack_688;
      uStack_690 = 0x800000000;
      puStack_588 = auStack_578;
      uStack_580 = 0x800000000;
      uStack_3f8 = 0xfffc;
      uStack_3f6 = 1;
      uStack_3f4 = 0xffffffff00000000;
      uStack_3e8 = 0;
      uStack_3e0 = 0;
      puStack_718 = &UNK_0f45f410;
      lStack_6e8 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      if (lStack_6e8 == 0) {
        func_0x048b0de0(&uStack_910,&uStack_911);
        _DAT_0f54fd90 = (undefined4)uStack_910;
        uRam000000000f54fd94 = uStack_910._4_4_;
        uVar3 = (undefined4)uStack_908;
        uVar6 = uStack_908._4_4_;
        uStack_910 = (byte *)0x0;
        uStack_908 = (long *)0x0;
        plVar5 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
        _DAT_0f54fd98 = uVar3;
        uRam000000000f54fd9c = uVar6;
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar4 = plVar5 + 1;
          lVar10 = *plVar4;
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (lVar10 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            func_0x0412c2d0(plVar5);
          }
        }
        plVar5 = uStack_908;
        if (uStack_908 != (long *)0x0) {
          LOCK();
          plVar4 = uStack_908 + 1;
          lVar10 = *plVar4;
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (lVar10 == 0) {
            (**(code **)(*uStack_908 + 0x10))(uStack_908);
            func_0x0412c2d0(plVar5);
          }
        }
        lStack_6e8 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      }
      plStack_8e8 = plVar12 + 3;
      puStack_700 = &UNK_0d2ea6c0;
      uStack_6f0 = 0xe3381109;
      pcStack_6f8 = (code *)0x0;
      uStack_6ec = 4;
      uStack_6e0 = 0;
      uStack_6d8 = 0;
      puStack_900 = &UNK_0d2ea6c0;
      pcStack_8f8 = (code *)0x0;
      uStack_8f0 = 0xe3381109;
      uStack_8ec = 4;
      apuStack_710[0] = (undefined *)0x0;
      uStack_910 = (byte *)&uStack_6d0;
      uStack_8e0 = 0;
      puStack_8d8 = &UNK_0d2ea6a0;
      func_0x0ed6b850(&uStack_6b0,&puStack_7f0,&uStack_910,&puStack_718);
      if ((pcStack_8f8 != (code *)0x0) && ((*pcStack_8f8)(&uStack_910), pcStack_6f8 != (code *)0x0))
      {
        (*pcStack_6f8)(apuStack_710);
      }
      bStack_8a8 = 0x16;
      uStack_8a7 = 0x6f426b6e756843;
      uStack_8a0 = 0x73646e75;
      uStack_89c = 0;
      func_0x0d6c4240(&puStack_758,&puStack_7f0);
      uStack_910 = &bStack_8a8;
      lVar10 = FUN_0d6c9580(lVar9,uStack_910,&UNK_01563a4f,&uStack_910,apuStack_710);
      if ((ulong)*(uint *)(lVar10 + 0x60) != 0xffffffff) {
        (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar10 + 0x60) * 8))
                  (&uStack_910,lVar10 + 0x38);
      }
      *(undefined **)(lVar10 + 0x38) = &UNK_0f47e0b0;
      *(long **)(lVar10 + 0x40) = plStack_750;
      *(long *)(lVar10 + 0x48) = lStack_748;
      *(long *)(lVar10 + 0x50) = lStack_740;
      if (lStack_740 == 0) {
        *(long *)(lVar10 + 0x40) = lVar10 + 0x48;
      }
      else {
        plStack_750 = &lStack_748;
        *(long *)(lStack_748 + 0x10) = lVar10 + 0x48;
        lStack_748 = 0;
        lStack_740 = 0;
      }
      *(undefined4 *)(lVar10 + 0x60) = 10;
      puStack_758 = &UNK_0f47e0b0;
      FUN_0d6c9500(&plStack_750,lStack_748);
      if ((bStack_8a8 & 1) != 0) {
        func_0x0412a280(uStack_898,CONCAT71(uStack_8a7,bStack_8a8) & 0xfffffffffffffffe);
      }
      func_0x048ffe50(&uStack_6b0);
      plVar5 = plStack_7e0;
      lVar10 = lStack_7f8;
      plVar12 = plStack_7d8;
      if (plStack_7e0 != (long *)0x0) {
        while (plVar5 != plVar12) {
          if ((*(byte *)(plVar12 + -3) & 1) != 0) {
            func_0x0412a280(plVar12[-1],plVar12[-3] & 0xfffffffffffffffe);
          }
          plVar12 = plVar12 + -4;
          plVar4 = (long *)*plVar12;
          *plVar12 = 0;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 8))();
          }
        }
        plStack_7d8 = plVar5;
        func_0x0412a280(plStack_7e0,lStack_7d0 - (long)plStack_7e0);
      }
      puStack_8c8 = &UNK_0f47e0b0;
      FUN_0d6c9500(&plStack_8c0,lStack_8b8);
    }
    if (lStack_388 != 0) {
      lStack_380 = lStack_388;
      func_0x0412a280(lStack_388,lStack_378 - lStack_388);
    }
    if ((bStack_3d0 & 1) != 0) {
      func_0x0412a280(uStack_3c0,CONCAT71(uStack_3cf,bStack_3d0) & 0xfffffffffffffffe);
    }
    func_0x048ffe50(&plStack_370);
    plVar5 = plStack_770;
    plVar12 = plStack_768;
    if (plStack_770 != (long *)0x0) {
      while (plVar5 != plVar12) {
        if ((*(byte *)(plVar12 + -3) & 1) != 0) {
          func_0x0412a280(plVar12[-1],plVar12[-3] & 0xfffffffffffffffe);
        }
        plVar12 = plVar12 + -4;
        plVar4 = (long *)*plVar12;
        *plVar12 = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
      plStack_768 = plVar5;
      func_0x0412a280(plStack_770,lStack_760 - (long)plStack_770);
    }
  }
  puVar11 = (undefined8 *)func_0x0cad6ff0(lVar13,lVar10);
  return puVar11;
}



/* ---- referenced strings ----
 * 0x11cb7e1  StructureSection
 * 0x14249aa  JigsawReplacement
 */
