/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xde8feb0 (ELF vaddr 0xdd8feb0)
 * Label: caller-of-callee
 * Body:  [[0de8feb0, 0de90778] [0de90780, 0de91b61] [0de91b70, 0de91df8] [0de91e00, 0de9504c]]
 * Ghidra: FUN_0de8feb0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0de8feb0(long param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  long *plVar23;
  ulong uVar24;
  undefined *puVar25;
  bool bVar26;
  undefined *puStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  code *pcStack_a48;
  long *plStack_a40;
  long *plStack_a38;
  long *plStack_a30;
  long *plStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  ulong uStack_a10;
  long *plStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined1 auStack_9e8 [8];
  long lStack_9e0;
  long lStack_9d8;
  long lStack_9d0;
  long lStack_9c8;
  long lStack_9c0;
  long *plStack_9b8;
  long lStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  long lStack_998;
  long lStack_990;
  undefined *puStack_988;
  long *plStack_980;
  long *plStack_978;
  undefined8 uStack_970;
  undefined *puStack_968;
  undefined *puStack_960;
  undefined1 *puStack_958;
  long lStack_950;
  undefined *puStack_948;
  undefined *puStack_940;
  ulong uStack_938;
  long lStack_930;
  undefined *puStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  long lStack_910;
  long lStack_908;
  undefined4 uStack_900;
  undefined4 uStack_8fc;
  long lStack_8f8;
  long lStack_8f0;
  long lStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  long lStack_8d0;
  byte bStack_8c8;
  undefined1 uStack_8c7;
  undefined2 uStack_8c6;
  uint uStack_8c4;
  uint uStack_8c0;
  uint uStack_8bc;
  long lStack_8b8;
  long lStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  long *plStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined *puStack_860;
  long *plStack_858;
  ulong uStack_850;
  long *plStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  long lStack_828;
  ulong uStack_820;
  long lStack_818;
  undefined8 uStack_810;
  undefined *puStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  long *plStack_7e0;
  long *plStack_7d8;
  long *plStack_7d0;
  long *plStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  ulong uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined *puStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  ulong uStack_768;
  undefined8 uStack_760;
  long *plStack_758;
  undefined8 uStack_750;
  long lStack_740;
  undefined *puStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  long *plStack_718;
  long *plStack_710;
  long *plStack_708;
  long *plStack_700;
  undefined *puStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  ulong uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  char cStack_6c0;
  undefined *puStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  long *plStack_690;
  long *plStack_688;
  undefined1 *puStack_680;
  undefined *puStack_678;
  undefined *puStack_670;
  undefined4 uStack_668;
  undefined8 uStack_660;
  long *plStack_658;
  undefined *puStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  long *plStack_628;
  long *plStack_620;
  long *plStack_618;
  long *plStack_610;
  undefined *puStack_608;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined1 uStack_5d0;
  byte bStack_5c0;
  undefined6 uStack_5bf;
  undefined1 uStack_5b9;
  undefined1 uStack_5b8;
  undefined6 uStack_5b7;
  undefined1 uStack_5b1;
  undefined8 uStack_5b0;
  undefined *puStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined1 uStack_570;
  undefined *puStack_568;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  ulong uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined1 uStack_530;
  byte bStack_528;
  undefined4 uStack_527;
  undefined2 uStack_523;
  undefined1 uStack_521;
  undefined8 uStack_518;
  byte bStack_510;
  undefined4 uStack_50f;
  undefined2 uStack_50b;
  undefined1 uStack_509;
  undefined8 uStack_500;
  undefined *puStack_4f8;
  long *plStack_4f0;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined1 uStack_4e0;
  long *plStack_4d8;
  long *plStack_4d0;
  long *plStack_4c8;
  long *plStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined1 uStack_498;
  undefined8 uStack_488;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long *plStack_458;
  undefined1 uStack_450;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  int iStack_428;
  int iStack_424;
  undefined8 uStack_420;
  undefined *puStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined1 uStack_3f0;
  ulong uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  char cStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 uStack_3b0;
  byte bStack_3a8;
  undefined7 uStack_3a7;
  undefined8 uStack_398;
  char cStack_390;
  undefined *puStack_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined1 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long *plStack_358;
  undefined1 uStack_350;
  undefined *puStack_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined1 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long *plStack_318;
  undefined1 uStack_310;
  undefined *puStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined1 uStack_2f0;
  undefined1 auStack_2e8 [8];
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 uStack_2b0;
  uint uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined1 uStack_270;
  undefined1 auStack_268 [8];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  char cStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined1 auStack_1b0 [384];
  
  if ((DAT_0f740a00 == '\0') && (iVar10 = func_0x04108328(&DAT_0f740a00), iVar10 != 0)) {
    func_0x0df5fad0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f740980,0xf53dab8);
    func_0x0410844d(&DAT_0f740a00);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f740980 + 4)) * 8);
  do {
    lVar20 = *plVar12;
    if (lVar20 == -1) goto LAB_0de8ff20;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f740980 + 4))
  ;
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_0de8ff20:
    puVar11 = &DAT_0f740980;
    if (iRam000000000f7409e0 != -0x2b3da790) goto LAB_0de8ff78;
LAB_0de8ff4b:
    lVar20 = *(long *)(puVar11 + 0x68);
    if (lVar20 == 0) goto LAB_0de8ff78;
    bVar26 = (*(byte *)(lVar20 + 8) & 1) != 0;
    puVar11 = (undefined *)(lVar20 + 9);
    if (bVar26) {
      puVar11 = *(undefined **)(lVar20 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar26) {
      uVar24 = *(ulong *)(lVar20 + 0x10);
    }
  }
  else {
    puVar11 = (undefined *)plVar12[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0de8ff4b;
LAB_0de8ff78:
    puVar11 = &UNK_0148e612;
    uVar24 = 0xd;
  }
  func_0x0df601a0(&puStack_738,param_1,puVar11,uVar24);
  lStack_828 = param_1;
  if ((char)plStack_708 == '\0') {
    func_0x0df60d40(&puStack_988,&puStack_738,&UNK_01391889,8,1);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0f4a89e8;
    if (uStack_970 != (long *)0x0) {
      lVar20 = *uStack_970;
      uStack_970 = plVar12;
      (**(code **)(lVar20 + 8))();
      plVar12 = uStack_970;
    }
    uStack_970 = plVar12;
    puStack_a68 = (undefined *)CONCAT44(puStack_a68._4_4_,plStack_978._0_4_);
    uStack_a60 = (long *)0x0;
    uStack_a58 = (long *)((ulong)uStack_a58._4_4_ << 0x20);
    uStack_a50 = (long *)0x1;
    pcStack_a48 = (code *)0x0;
    plStack_a40 = (long *)&UNK_0df64800;
    plStack_a38 = (long *)&SUB_048b06d0;
    plStack_a30 = (long *)&SUB_0df64210;
    plStack_a28 = (long *)&UNK_0df64810;
    uStack_a20 = &UNK_0df64970;
    uStack_a18 = (long *)((ulong)uStack_a18._4_4_ << 0x20);
    uStack_a10 = 0;
    plStack_a08 = (long *)0x0;
    func_0x048b05a0(plStack_980,&puStack_a68);
    plVar12 = plStack_a08;
    if (plStack_a08 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_a08 + 1;
      lVar20 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_a08 + 0x10))(plStack_a08);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x0df61000(&puStack_988);
    uStack_538 = CONCAT71(uStack_538._1_7_,(char)plStack_708);
    uStack_548 = (ulong)plStack_718;
    uStack_540 = plStack_710;
    uStack_558 = (undefined4)uStack_728;
    uStack_554 = uStack_728._4_4_;
    uStack_550 = uStack_720;
    uStack_54c = uStack_71c;
    puStack_568 = puStack_738;
    uStack_560 = (undefined4)uStack_730;
    uStack_55c = uStack_730._4_4_;
    func_0x048b0bc0(&uStack_970);
    puStack_608 = puStack_568;
    uStack_600 = uStack_560;
    uStack_5fc = uStack_55c;
    uStack_5f8 = uStack_558;
    uStack_5f4 = uStack_554;
    uStack_5f0 = uStack_550;
    uStack_5ec = uStack_54c;
    uStack_5e8 = uStack_548;
    uStack_5e0 = uStack_540;
    uStack_5d8 = uStack_538;
    func_0x0df60d40(&puStack_988,&puStack_608,&UNK_011d5876,5,0);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar13 = &UNK_0f0123c0;
    if (uStack_970 != (long *)0x0) {
      lVar20 = *uStack_970;
      uStack_970 = puVar13;
      (**(code **)(lVar20 + 8))();
      puVar13 = uStack_970;
    }
    uStack_970 = puVar13;
    puStack_a68 = (undefined *)CONCAT44(puStack_a68._4_4_,plStack_978._0_4_);
    uStack_a60 = (long *)0x0;
    uStack_a58 = (long *)((ulong)uStack_a58 & 0xffffffff00000000);
    uStack_a50 = (long *)0x1;
    pcStack_a48 = (code *)0x0;
    plStack_a40 = (long *)&UNK_05e08030;
    plStack_a38 = (long *)&SUB_048b06d0;
    plStack_a30 = (long *)&UNK_05e07cf0;
    plStack_a28 = (long *)&UNK_0df64dc0;
    uStack_a20 = &UNK_0df64f70;
    uStack_a18 = (long *)((ulong)uStack_a18 & 0xffffffff00000000);
    uStack_a10 = 0;
    plStack_a08 = (long *)0x0;
    func_0x048b05a0(plStack_980,&puStack_a68);
    plVar12 = plStack_a08;
    if (plStack_a08 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_a08 + 1;
      lVar20 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_a08 + 0x10))(plStack_a08);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x0df61000(&puStack_988);
    puStack_6f8 = (undefined *)CONCAT44(uStack_5fc,uStack_600);
    uStack_6f0 = (long *)CONCAT44(uStack_5f4,uStack_5f8);
    uStack_6e8 = CONCAT44(uStack_5ec,uStack_5f0);
    uStack_6e0 = (undefined4)uStack_5e8;
    uStack_6dc = uStack_5e8._4_4_;
    uVar7 = (undefined1)uStack_5d8;
    func_0x048b0bc0(&uStack_970);
    uStack_768 = 0;
    uStack_760 = 0;
    plStack_758 = (long *)0x0;
    uStack_750 = 0;
    uStack_780 = 0xffffffffffffffff;
    uStack_778 = 0;
    uStack_770 = 0xff;
    puStack_788 = &UNK_0f489570;
    uStack_888 = 0;
    uStack_840 = 0;
    uStack_838 = 0;
    uStack_850 = 0;
    plStack_848 = (long *)0x0;
    puStack_860 = (undefined *)0x0;
    plStack_858 = (long *)0x0;
    uStack_870 = (long *)0x0;
    uStack_868 = (long *)0x0;
    uStack_880 = (long *)0x0;
    plStack_878 = (long *)0x0;
    uStack_830 = 0;
    uStack_8a0 = -1;
    uStack_898 = 0;
    uStack_890 = 0xff;
    uStack_8a8 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_888);
    uStack_880 = (long *)func_0x041681f0(&uStack_888,0xf547a30);
    plStack_878 = (long *)func_0x041681f0(&uStack_888,0xf547770);
    uStack_870 = (long *)0x0;
    uStack_868 = (long *)0x0;
    puStack_860 = (undefined *)0x0;
    plStack_858 = (long *)0x0;
    uStack_850 = 0;
    plStack_848 = (long *)0x0;
    uStack_840 = 0;
    uStack_838 = 0;
    uStack_830 = 0;
    puStack_648 = (undefined *)CONCAT17(puStack_648._7_1_,0x242b535c5e0a);
    func_0x0ed60210(&uStack_8a8,&puStack_648,0);
    uStack_7f0 = CONCAT71(uStack_7f0._1_7_,(undefined1)uStack_890);
    uStack_800 = uStack_8a0;
    uStack_7f8 = uStack_898;
    puStack_808 = &UNK_0f4e3c70;
    func_0x04167a20(&uStack_7e8,&uStack_888);
    plStack_7e0 = uStack_880;
    plStack_7d8 = plStack_878;
    plStack_7d0 = uStack_870;
    plStack_7c8 = uStack_868;
    uStack_7c0 = puStack_860;
    uStack_7b8 = plStack_858;
    if (plStack_858 != (long *)0x0) {
      LOCK();
      plStack_858[1] = plStack_858[1] + 1;
      UNLOCK();
    }
    uStack_7b0 = uStack_850;
    if (((ulong)plStack_848 & 1) == 0) {
      uStack_798 = uStack_838;
      uStack_7a8 = (ulong)plStack_848;
      uStack_7a0 = uStack_840;
    }
    else {
      func_0x0412e5e0(&uStack_7a8,uStack_838,uStack_840);
    }
    uStack_790 = uStack_830;
    plStack_980 = (long *)0xffffffffffffffff;
    plStack_978 = (long *)0x0;
    uStack_970._0_1_ = 0xff;
    puStack_988 = &UNK_0f4a8968;
    func_0x0df65150(&puStack_968,&puStack_788,&puStack_808);
    uStack_970 = (long *)CONCAT71(uStack_970._1_7_,0xff);
    if ((int)uStack_5e0 == 4) {
      if ((DAT_0f740a00 == '\0') && (iVar10 = func_0x04108328(&DAT_0f740a00), iVar10 != 0)) {
        func_0x0df5fad0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f740980,0xf53dab8);
        func_0x0410844d(&DAT_0f740a00);
      }
      plVar12 = (long *)(*(long *)(puStack_608 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(puStack_608 + 0x20) -
                                             *(long *)(puStack_608 + 0x18)) >> 3) - 1U &
                               *(uint *)(_DAT_0f740980 + 4)) * 8);
      do {
        lVar20 = *plVar12;
        if (lVar20 == -1) goto LAB_0de9067c;
        plVar12 = (long *)(*(long *)(puStack_608 + 0x30) + lVar20 * 0x18);
      } while (*(uint *)(*(long *)(puStack_608 + 0x30) + 8 + lVar20 * 0x18) !=
               *(uint *)(_DAT_0f740980 + 4));
      if (plVar12 == *(long **)(puStack_608 + 0x38)) {
LAB_0de9067c:
        puVar11 = &DAT_0f740980;
      }
      else {
        puVar11 = (undefined *)plVar12[2];
      }
      puVar11 = (undefined *)func_0x048b1040(puStack_608 + 0x18,puVar11,uStack_5e0._4_4_,1);
      if (puVar11 == (undefined *)0x0) {
        puStack_a68 = (undefined *)0x0;
        uStack_a60 = (long *)0x0;
        FUN_048b10d0(&puStack_a68);
        puVar25 = *(undefined **)(puStack_a68 + 0x38);
        puVar11 = puStack_a68;
        if (puVar25 == (undefined *)0x0) goto LAB_0de90756;
LAB_0de90772:
        do {
          puVar11 = puVar25;
          puVar25 = *(undefined **)(puVar11 + 0x38);
          if (*(undefined **)(puVar11 + 0x38) == (undefined *)0x0) {
            puStack_a68 = (undefined *)0x0;
            uStack_a60 = (long *)0x0;
            FUN_048b10d0(&puStack_a68);
            puVar25 = puStack_a68;
          }
        } while (puVar25 != (undefined *)0x0);
      }
      else {
        puVar25 = *(undefined **)(puVar11 + 0x38);
        if (*(undefined **)(puVar11 + 0x38) != (undefined *)0x0) goto LAB_0de90772;
LAB_0de90756:
        puStack_a68 = (undefined *)0x0;
        uStack_a60 = (long *)0x0;
        FUN_048b10d0(&puStack_a68);
        puVar25 = puStack_a68;
        if (puStack_a68 != (undefined *)0x0) goto LAB_0de90772;
      }
      lVar20 = *(long *)(puVar11 + 0x48);
      puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xe0);
      if (puVar13 == (undefined8 *)0x0) {
        func_0x0eec74c0(0xe0,0);
      }
LAB_0de907ce:
      *(undefined1 *)(puVar13 + 3) = (undefined1)uStack_970;
      puVar13[1] = plStack_980;
      puVar13[2] = plStack_978;
      *puVar13 = &UNK_0f4a8968;
      puVar13[5] = puStack_960;
      puVar13[6] = puStack_958;
      *(undefined1 *)(puVar13 + 7) = (undefined1)lStack_950;
      puVar13[4] = &UNK_0f489570;
      *(undefined1 *)(puVar13 + 8) = 0;
      *(undefined1 *)(puVar13 + 0xb) = 0;
      if ((char)lStack_930 == '\x01') {
        puVar13[10] = uStack_938;
        puVar13[8] = puStack_948;
        puVar13[9] = puStack_940;
        puStack_948 = (undefined *)0x0;
        puStack_940 = (undefined *)0x0;
        uStack_938 = 0;
        *(undefined1 *)(puVar13 + 0xb) = 1;
      }
      *(undefined1 *)(puVar13 + 0xf) = (undefined1)lStack_910;
      *(undefined4 *)(puVar13 + 0xd) = (undefined4)uStack_920;
      *(undefined4 *)((long)puVar13 + 0x6c) = uStack_920._4_4_;
      *(undefined4 *)(puVar13 + 0xe) = (undefined4)uStack_918;
      *(undefined4 *)((long)puVar13 + 0x74) = uStack_918._4_4_;
      puVar13[0xc] = &UNK_0f4e3c70;
      func_0x04167a20(puVar13 + 0x10,&lStack_908);
      puVar13[0x11] = CONCAT44(uStack_8fc,uStack_900);
      puVar13[0x12] = lStack_8f8;
      puVar13[0x13] = lStack_8f0;
      puVar13[0x14] = lStack_8e8;
      puVar13[0x15] = uStack_8e0;
      puVar13[0x16] = uStack_8d8;
      uStack_8e0 = 0;
      uStack_8d8 = (long *)0x0;
      puVar13[0x17] = lStack_8d0;
      puVar13[0x1a] = lStack_8b8;
      *(uint *)(puVar13 + 0x18) = CONCAT22(uStack_8c6,CONCAT11(uStack_8c7,bStack_8c8));
      *(uint *)((long)puVar13 + 0xc4) = uStack_8c4;
      *(uint *)(puVar13 + 0x19) = uStack_8c0;
      *(uint *)((long)puVar13 + 0xcc) = uStack_8bc;
      bStack_8c8 = 0;
      uStack_8c7 = 0;
      uStack_8c6 = 0;
      uStack_8c4 = 0;
      uStack_8c0 = 0;
      uStack_8bc = 0;
      lStack_8b8 = 0;
      puVar13[0x1b] = lStack_8b0;
      plVar12 = *(long **)(lVar20 + 8);
      *(undefined8 **)(lVar20 + 8) = puVar13;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x28))();
      }
    }
    else if ((int)uStack_5e0 == 1) {
      if ((DAT_0f740a00 == '\0') && (iVar10 = func_0x04108328(&DAT_0f740a00), iVar10 != 0)) {
        func_0x0df5fad0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f740980,0xf53dab8);
        func_0x0410844d(&DAT_0f740a00);
      }
      plVar12 = (long *)(*(long *)(puStack_608 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(puStack_608 + 0x20) -
                                             *(long *)(puStack_608 + 0x18)) >> 3) - 1U &
                               *(uint *)(_DAT_0f740980 + 4)) * 8);
      do {
        lVar20 = *plVar12;
        if (lVar20 == -1) goto LAB_0de905fc;
        plVar12 = (long *)(*(long *)(puStack_608 + 0x30) + lVar20 * 0x18);
      } while (*(uint *)(*(long *)(puStack_608 + 0x30) + 8 + lVar20 * 0x18) !=
               *(uint *)(_DAT_0f740980 + 4));
      if (plVar12 == *(long **)(puStack_608 + 0x38)) {
LAB_0de905fc:
        puVar11 = &DAT_0f740980;
      }
      else {
        puVar11 = (undefined *)plVar12[2];
      }
      puVar11 = (undefined *)func_0x048b0c90(puStack_608 + 0x18,puVar11,uStack_5e0._4_4_,1);
      if (puVar11 == (undefined *)0x0) {
        puStack_a68 = (undefined *)0x0;
        uStack_a60 = (long *)0x0;
        func_0x048b0d20(&puStack_a68);
        puVar11 = puStack_a68;
      }
      lVar20 = *(long *)(puVar11 + 0x58);
      puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xe0);
      if (puVar13 == (undefined8 *)0x0) {
        func_0x0eec74c0(0xe0,0);
      }
      goto LAB_0de907ce;
    }
    uStack_590 = (undefined4)uStack_6e8;
    uStack_58c = uStack_6e8._4_4_;
    uStack_588 = CONCAT44(uStack_6dc,uStack_6e0);
    uStack_5a0 = puStack_6f8;
    uStack_598 = uStack_6f0;
    puStack_5a8 = puStack_608;
    uVar4 = (undefined4)uStack_488;
    uStack_578._0_5_ = CONCAT41(uVar4,uVar7);
    uStack_578 = CONCAT44(uStack_488._3_4_,(undefined4)uStack_578);
    func_0x0df60790(&puStack_a68,puStack_608 + 0x18);
    param_1 = lStack_828;
    if (uStack_a50._4_4_ == 2) {
      piVar22 = *(int **)(uStack_a58[0xf] + 0x60);
      iVar10 = *piVar22;
      while (iVar10 != (int)uStack_a50) {
        piVar22 = piVar22 + 0x16;
        iVar10 = *piVar22;
      }
      plVar12 = *(long **)(piVar22 + 0xc);
      while (plVar12 != uStack_a60) {
        piVar22 = *(int **)(piVar22 + 0xe);
        plVar12 = *(long **)(piVar22 + 0xc);
      }
LAB_0de90a0f:
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 4;
    }
    else {
      if (uStack_a50._4_4_ == 1) {
        piVar22 = *(int **)(uStack_a58[0xf] + 0x48);
        iVar10 = *piVar22;
        while (iVar10 != (int)uStack_a50) {
          piVar22 = piVar22 + 0x1a;
          iVar10 = *piVar22;
        }
        goto LAB_0de90a0f;
      }
      if (uStack_a50._4_4_ == 0) {
        *(uint *)(uStack_a58 + 3) = *(uint *)(uStack_a58 + 3) | 0x40000;
      }
    }
    func_0x0df60d40(&puStack_a68,&puStack_5a8,&UNK_0148af92,0x15,0x10);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar13 = &UNK_0ef46ef8;
    if (uStack_a50 != (long *)0x0) {
      lVar20 = *uStack_a50;
      uStack_a50 = puVar13;
      (**(code **)(lVar20 + 8))();
      puVar13 = uStack_a50;
    }
    uStack_a50 = puVar13;
    puStack_6b8 = (undefined *)CONCAT44(puStack_6b8._4_4_,(undefined4)uStack_a58);
    uStack_6b0 = 0;
    uStack_6a8 = (ulong)uStack_6a8._4_4_ << 0x20;
    uStack_6a0 = 1;
    uStack_698 = 0;
    plStack_690 = (long *)&UNK_04906f70;
    plStack_688 = (long *)&SUB_048b06d0;
    puStack_680 = &SUB_04906c50;
    puStack_678 = &UNK_0df652a0;
    puStack_670 = &UNK_0df65400;
    uStack_668 = 0;
    uStack_660 = 0;
    plStack_658 = (long *)0x0;
    func_0x048b05a0(uStack_a60,&puStack_6b8);
    plVar12 = plStack_658;
    if (plStack_658 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_658 + 1;
      lVar20 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_658 + 0x10))(plStack_658);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x0df61000(&puStack_a68);
    func_0x048b0bc0(&uStack_a50);
    puStack_988 = &UNK_0f4a8968;
    puStack_928 = &UNK_0f4e3c70;
    if ((bStack_8c8 & 1) != 0) {
      func_0x0412a280(lStack_8b8,
                      CONCAT44(uStack_8c4,CONCAT22(uStack_8c6,CONCAT11(uStack_8c7,bStack_8c8))) &
                      0xfffffffffffffffe);
    }
    plVar12 = uStack_8d8;
    if (uStack_8d8 != (long *)0x0) {
      LOCK();
      plVar14 = uStack_8d8 + 1;
      lVar20 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*uStack_8d8 + 0x10))(uStack_8d8);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x04167a40(&lStack_908);
    puStack_968 = &UNK_0f489570;
    if (((char)lStack_930 == '\x01') && (((ulong)puStack_948 & 1) != 0)) {
      func_0x0412a280(uStack_938,(ulong)puStack_948 & 0xfffffffffffffffe);
    }
    puStack_808 = &UNK_0f4e3c70;
    if ((uStack_7a8 & 1) != 0) {
      func_0x0412a280(uStack_798,uStack_7a8 & 0xfffffffffffffffe);
    }
    plVar12 = uStack_7b8;
    if (uStack_7b8 != (long *)0x0) {
      LOCK();
      plVar14 = uStack_7b8 + 1;
      lVar20 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*uStack_7b8 + 0x10))(uStack_7b8);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x04167a40(&uStack_7e8);
    if (((ulong)puStack_648 & 1) == 0) {
      if (((ulong)plStack_848 & 1) != 0) goto LAB_0de90ccc;
LAB_0de90c92:
      uStack_8a8 = &UNK_0f4e3c70;
      plVar12 = plStack_858;
    }
    else {
      func_0x0412a280(uStack_638,(ulong)puStack_648 & 0xfffffffffffffffe);
      if (((ulong)plStack_848 & 1) == 0) goto LAB_0de90c92;
LAB_0de90ccc:
      uStack_8a8 = &UNK_0f4e3c70;
      func_0x0412a280(uStack_838,(ulong)plStack_848 & 0xfffffffffffffffe);
      plVar12 = plStack_858;
    }
    plStack_858 = plVar12;
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar14 = plVar12 + 1;
      lVar20 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x04167a40(&uStack_888);
    puStack_788 = &UNK_0f489570;
    if (((char)uStack_750 == '\x01') && ((uStack_768 & 1) != 0)) {
      func_0x0412a280(plStack_758,uStack_768 & 0xfffffffffffffffe);
    }
  }
  if ((DAT_0f741580 == '\0') && (iVar10 = func_0x04108328(&DAT_0f741580), iVar10 != 0)) {
    func_0x0df8ccf0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f741500,0xf53dab8);
    func_0x0410844d(&DAT_0f741580);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f741500 + 4)) * 8);
  do {
    lVar20 = *plVar12;
    if (lVar20 == -1) goto LAB_0de90db0;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f741500 + 4))
  ;
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_0de90db0:
    puVar11 = &DAT_0f741500;
    if (iRam000000000f741560 != -0x2b3da790) goto LAB_0de90e1d;
LAB_0de90ddb:
    lVar20 = *(long *)(puVar11 + 0x68);
    if (lVar20 == 0) goto LAB_0de90e1d;
    bVar26 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar21 = lVar20 + 9;
    if (bVar26) {
      lVar21 = *(long *)(lVar20 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar26) {
      uVar24 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0df8d090(&puStack_808,param_1,lVar21,uVar24);
  }
  else {
    puVar11 = (undefined *)plVar12[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0de90ddb;
LAB_0de90e1d:
    func_0x0df8d090(&puStack_808,param_1,&UNK_0145d00c,5);
  }
  if ((char)plStack_7d8 == '\0') {
    puStack_6b8 = puStack_808;
    uStack_6b0 = uStack_800;
    uStack_6a8 = uStack_7f8;
    uStack_6a0 = uStack_7f0;
    uStack_698 = uStack_7e8;
    plStack_690 = plStack_7e0;
    plStack_688 = plStack_7d8;
    func_0x0df8dba0(&puStack_988,&puStack_6b8,&UNK_011e9523);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef46ce8;
    if (uStack_970 != (long *)0x0) {
      lVar20 = *uStack_970;
      uStack_970 = plVar12;
      (**(code **)(lVar20 + 8))();
      plVar12 = uStack_970;
    }
    uStack_970 = plVar12;
    puStack_a68 = (undefined *)CONCAT44(puStack_a68._4_4_,plStack_978._0_4_);
    uStack_a60 = (long *)0x0;
    uStack_a58 = (long *)((ulong)uStack_a58 & 0xffffffff00000000);
    uStack_a50 = (long *)0x1;
    pcStack_a48 = (code *)0x0;
    plStack_a40 = (long *)&UNK_0490ce30;
    plStack_a38 = (long *)&SUB_048b06d0;
    plStack_a30 = (long *)&SUB_0490cb20;
    plStack_a28 = (long *)&UNK_0df8e0e0;
    uStack_a20 = &UNK_0df8e240;
    uStack_a18 = (long *)((ulong)uStack_a18 & 0xffffffff00000000);
    uStack_a10 = 0;
    plStack_a08 = (long *)0x0;
    func_0x048b05a0(plStack_980,&puStack_a68);
    plVar12 = plStack_a08;
    if (plStack_a08 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_a08 + 1;
      lVar20 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_a08 + 0x10))(plStack_a08);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x0df8dde0(&puStack_988);
    plStack_878 = (long *)CONCAT71(plStack_878._1_7_,(char)plStack_688);
    uStack_888 = uStack_698;
    uStack_880 = plStack_690;
    uStack_898 = uStack_6a8;
    uStack_890 = uStack_6a0;
    uStack_8a8 = puStack_6b8;
    uStack_8a0 = uStack_6b0;
    func_0x048b0bc0(&uStack_970);
    func_0x0df8dba0(&puStack_988,&uStack_8a8,&UNK_012ba56c);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef46ce8;
    if (uStack_970 != (long *)0x0) {
      lVar20 = *uStack_970;
      uStack_970 = plVar12;
      (**(code **)(lVar20 + 8))();
      plVar12 = uStack_970;
    }
    uStack_970 = plVar12;
    puStack_a68 = (undefined *)CONCAT44(puStack_a68._4_4_,plStack_978._0_4_);
    uStack_a60 = (long *)0x0;
    uStack_a58 = (long *)((ulong)uStack_a58 & 0xffffffff00000000);
    uStack_a50 = (undefined8 *)0x1;
    pcStack_a48 = (code *)0x0;
    plStack_a40 = (long *)&UNK_0490ce30;
    plStack_a38 = (long *)&SUB_048b06d0;
    plStack_a30 = (long *)&SUB_0490cb20;
    plStack_a28 = (long *)&UNK_0df8e410;
    uStack_a20 = &UNK_0df8e570;
    uStack_a18 = (long *)((ulong)uStack_a18 & 0xffffffff00000000);
    uStack_a10 = 0;
    plStack_a08 = (long *)0x0;
    func_0x048b05a0(plStack_980,&puStack_a68);
    plVar12 = plStack_a08;
    if (plStack_a08 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_a08 + 1;
      lVar20 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_a08 + 0x10))(plStack_a08);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x0df8dde0(&puStack_988);
    func_0x048b0bc0(&uStack_970);
  }
  uStack_6a8 = 0;
  uStack_6a0 = CONCAT71(uStack_6a0._1_7_,0xff);
  puStack_6b8 = &UNK_0f4e3cf0;
  plStack_690 = (long *)0x0;
  plStack_688 = (long *)0x0;
  uStack_6b0 = 0x10;
  uStack_698 = 1;
  puStack_680 = (undefined1 *)CONCAT71(puStack_680._1_7_,1);
  uStack_778 = 0;
  uStack_770 = CONCAT71(uStack_770._1_7_,0xff);
  puStack_788 = &UNK_0f4e3cf0;
  uStack_760 = 0;
  plStack_758 = (long *)0x0;
  uStack_780 = 2;
  uStack_768 = 2;
  uStack_750 = CONCAT71(uStack_750._1_7_,1);
  uStack_730 = 0xffffffffffffffff;
  uStack_728 = 0;
  uStack_720 = CONCAT31(uStack_720._1_3_,0xff);
  puStack_738 = &UNK_0f4a32d8;
  plStack_718 = (long *)0x0;
  plStack_710 = (long *)0x0;
  plStack_708 = (long *)0x0;
  plStack_700 = (long *)0x0;
  uStack_5a0 = (undefined *)0x10;
  uStack_598 = (long *)0x0;
  uStack_590 = CONCAT31(uStack_590._1_3_,0xff);
  puStack_5a8 = &UNK_0f4e3cf0;
  uStack_588 = 1;
  uStack_580 = 0;
  uStack_578 = 0;
  uStack_570 = 1;
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  *(undefined1 *)(plVar12 + 3) = (undefined1)uStack_6a0;
  plVar12[1] = uStack_6b0;
  plVar12[2] = uStack_6a8;
  *plVar12 = (long)&UNK_0f4e3cf0;
  plVar12[4] = 1;
  plVar12[5] = 0;
  plVar12[6] = 0;
  uStack_580 = 0;
  uStack_578 = 0;
  *(undefined1 *)(plVar12 + 7) = 1;
  uStack_600 = (undefined4)uStack_780;
  uStack_5fc = uStack_780._4_4_;
  uStack_5f8 = (undefined4)uStack_778;
  uStack_5f4 = uStack_778._4_4_;
  uStack_5f0 = CONCAT31(uStack_5f0._1_3_,(undefined1)uStack_770);
  puStack_608 = &UNK_0f4e3cf0;
  uStack_5e8 = 2;
  uStack_5e0 = 0;
  uStack_5d8 = 0;
  uStack_5d0 = 1;
  plStack_718 = plVar12;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  *(undefined1 *)(plVar14 + 3) = (undefined1)uStack_770;
  plVar14[1] = uStack_780;
  plVar14[2] = uStack_778;
  *plVar14 = (long)&UNK_0f4e3cf0;
  plVar14[4] = 2;
  plVar14[5] = 0;
  plVar14[6] = 0;
  uStack_5e0 = 0;
  uStack_5d8 = 0;
  *(undefined1 *)(plVar14 + 7) = 1;
  uStack_560 = (undefined4)uStack_6b0;
  uStack_55c = uStack_6b0._4_4_;
  uStack_558 = (undefined4)uStack_6a8;
  uStack_554 = uStack_6a8._4_4_;
  uStack_550 = CONCAT31(uStack_550._1_3_,(undefined1)uStack_6a0);
  puStack_568 = &UNK_0f4e3cf0;
  uStack_548 = 1;
  uStack_540 = 0;
  uStack_538 = 0;
  uStack_530 = 1;
  plStack_710 = plVar14;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  *(undefined1 *)(plVar15 + 3) = (undefined1)uStack_6a0;
  plVar15[1] = uStack_6b0;
  plVar15[2] = uStack_6a8;
  *plVar15 = (long)&UNK_0f4e3cf0;
  plVar15[4] = 1;
  plVar15[5] = 0;
  plVar15[6] = 0;
  uStack_540 = 0;
  uStack_538 = 0;
  *(undefined1 *)(plVar15 + 7) = 1;
  plStack_708 = plVar15;
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
  if (plVar16 == (long *)0x0) {
    func_0x0eec74c0(0xb8,0);
  }
  plVar16[1] = -1;
  plVar16[2] = 0;
  *(undefined1 *)(plVar16 + 3) = 0xff;
  *plVar16 = (long)&UNK_0f4a3258;
  *(undefined1 *)(plVar16 + 4) = 0;
  *(undefined1 *)(plVar16 + 0xc) = 0;
  *(undefined1 *)(plVar16 + 0xd) = 0;
  *(undefined1 *)(plVar16 + 0x15) = 0;
  plVar16[0x16] = 0x10000000f;
  puStack_568 = &UNK_0f4e3cf0;
  puStack_608 = &UNK_0f4e3cf0;
  puStack_5a8 = &UNK_0f4e3cf0;
  plStack_700 = plVar16;
  if ((DAT_0f741608 == '\0') && (iVar10 = func_0x04108328(&DAT_0f741608), iVar10 != 0)) {
    func_0x0df8e810();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f741588,0xf53dab8);
    func_0x0410844d(&DAT_0f741608);
  }
  plVar23 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f741588 + 4)) * 8);
  do {
    lVar20 = *plVar23;
    if (lVar20 == -1) goto LAB_0de914d0;
    plVar23 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f741588 + 4))
  ;
  if (plVar23 == *(long **)(param_1 + 0x38)) {
LAB_0de914d0:
    puVar11 = &DAT_0f741588;
    if (iRam000000000f7415e8 != -0x2b3da790) goto LAB_0de9153d;
LAB_0de914fb:
    lVar20 = *(long *)(puVar11 + 0x68);
    if (lVar20 == 0) goto LAB_0de9153d;
    bVar26 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar21 = lVar20 + 9;
    if (bVar26) {
      lVar21 = *(long *)(lVar20 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar26) {
      uVar24 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0df8f7c0(&puStack_808,param_1,lVar21,uVar24);
    puVar11 = uStack_8a8;
    lVar20 = uStack_8a0;
    uVar24 = uStack_898;
    uVar8 = uStack_890;
    uVar9 = uStack_888;
    plVar23 = uStack_880;
    plVar17 = plStack_878;
    uStack_8a8 = puStack_808;
    uStack_8a0 = uStack_800;
    uStack_898 = uStack_7f8;
    uStack_890 = uStack_7f0;
    uStack_888 = uStack_7e8;
    uStack_880 = plStack_7e0;
    plStack_878 = plStack_7d8;
  }
  else {
    puVar11 = (undefined *)plVar23[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0de914fb;
LAB_0de9153d:
    func_0x0df8f7c0(&puStack_808,param_1,&UNK_012c1c46,6);
    puVar11 = uStack_8a8;
    lVar20 = uStack_8a0;
    uVar24 = uStack_898;
    uVar8 = uStack_890;
    uVar9 = uStack_888;
    plVar23 = uStack_880;
    plVar17 = plStack_878;
    uStack_8a8 = puStack_808;
    uStack_8a0 = uStack_800;
    uStack_898 = uStack_7f8;
    uStack_890 = uStack_7f0;
    uStack_888 = uStack_7e8;
    uStack_880 = plStack_7e0;
    plStack_878 = plStack_7d8;
  }
  bVar26 = (char)plStack_7d8 == '\0';
  puStack_808 = uStack_8a8;
  uStack_800 = uStack_8a0;
  uStack_7f8 = uStack_898;
  uStack_7f0 = uStack_890;
  plStack_7e0 = uStack_880;
  plStack_7d8 = plStack_878;
  if (bVar26) {
    if ((DAT_0f741628 == '\0') && (iVar10 = func_0x04108328(&DAT_0f741628), iVar10 != 0)) {
      func_0x0df8e920();
      func_0x0410844d(&DAT_0f741628);
    }
    puVar11 = uStack_8a8;
    uStack_880 = (long *)0x34474c3b00000001;
    if ((DAT_0f741608 == '\0') && (iVar10 = func_0x04108328(&DAT_0f741608), iVar10 != 0)) {
      func_0x0df8e810();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f741588,0xf53dab8);
      func_0x0410844d(&DAT_0f741608);
    }
    plStack_980 = (long *)(puVar11 + 0x18);
    plVar23 = (long *)(*(long *)(puVar11 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(puVar11 + 0x20) - *(long *)(puVar11 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f741588 + 4)) * 8);
    do {
      lVar20 = *plVar23;
      if (lVar20 == -1) goto LAB_0de91640;
      plVar23 = (long *)(*(long *)(puVar11 + 0x30) + lVar20 * 0x18);
    } while (*(uint *)(*(long *)(puVar11 + 0x30) + 8 + lVar20 * 0x18) !=
             *(uint *)(_DAT_0f741588 + 4));
    if (plVar23 == *(long **)(puVar11 + 0x38)) {
LAB_0de91640:
      puStack_988 = &DAT_0f741588;
    }
    else {
      puStack_988 = (undefined *)plVar23[2];
    }
    func_0x0ed621a0(&puStack_988,uStack_880._4_4_);
    puStack_988 = (undefined *)CONCAT62(puStack_988._2_6_,1);
    plStack_978 = (long *)CONCAT44(plStack_978._4_4_,uStack_880._4_4_);
    uStack_970 = (long *)0x0;
    puStack_968 = (undefined *)0x0;
    puStack_960 = (undefined *)0x0;
    puStack_958 = (undefined1 *)0x0;
    lStack_950 = 0;
    puStack_948 = (undefined *)0x7365756c61760c;
    lStack_930 = 0;
    puStack_928 = (undefined *)0x0;
    uStack_920 = 0;
    uStack_918 = 0;
    lStack_910 = 0;
    lStack_908 = 0;
    uStack_900 = 0x3f600000;
    plStack_980 = &uStack_8a0;
    func_0x048afb10(&lStack_930,8);
    uStack_8d8 = (long *)0x0;
    lStack_8d0 = 0;
    lStack_8e8 = 0;
    uStack_8e0 = 0;
    lStack_8f8 = 0;
    lStack_8f0 = 0;
    bStack_8c8 = 0;
    uStack_8c7 = 0xff;
    uStack_8c4 = uStack_8c4 & 0xffffff00;
    uStack_8c0 = uStack_8c0 & 0xffffff00;
    uStack_8bc = uStack_8bc & 0xffffff00;
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar13 = &UNK_0f4a7d38;
    if (uStack_970 != (long *)0x0) {
      lVar20 = *uStack_970;
      uStack_970 = puVar13;
      (**(code **)(lVar20 + 8))();
      puVar13 = uStack_970;
    }
    uStack_970 = puVar13;
    puStack_a68 = (undefined *)CONCAT44(puStack_a68._4_4_,plStack_978._0_4_);
    uStack_a60 = (long *)0x0;
    uStack_a58 = (long *)((ulong)uStack_a58 & 0xffffffff00000000);
    uStack_a50 = (undefined8 *)0x1;
    pcStack_a48 = (code *)0x0;
    plStack_a40 = (long *)&UNK_0df96830;
    plStack_a38 = (long *)&SUB_048b06d0;
    plStack_a30 = (long *)&UNK_0df94c20;
    plStack_a28 = (long *)&UNK_0df968f0;
    uStack_a20 = &UNK_0df96b30;
    uStack_a18 = (long *)((ulong)uStack_a18 & 0xffffffff00000000);
    uStack_a10 = 0;
    plStack_a08 = (long *)0x0;
    func_0x048b05a0(plStack_980,&puStack_a68);
    plVar23 = plStack_a08;
    if (plStack_a08 != (long *)0x0) {
      LOCK();
      plVar17 = plStack_a08 + 1;
      lVar20 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_a08 + 0x10))(plStack_a08);
        func_0x0412c2d0(plVar23);
      }
    }
    plVar23 = plStack_980;
    if ((DAT_0f550a20 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550a20), iVar10 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    puStack_a68 = (undefined *)CONCAT44(puStack_a68._4_4_,_DAT_0f550a0c);
    plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar17 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    puVar11 = puStack_968;
    puVar13 = uStack_970;
    plVar17[1] = 0;
    plVar17[2] = 0;
    *plVar17 = (long)&UNK_0ef439d0;
    uStack_a60 = plVar17 + 3;
    uStack_970 = (long *)0x0;
    puStack_968 = (undefined *)0x0;
    plVar17[3] = (long)puVar13;
    plVar17[4] = (long)puVar11;
    plVar17[7] = lStack_950;
    plVar17[5] = (long)puStack_960;
    plVar17[6] = (long)puStack_958;
    puStack_960 = (undefined *)0x0;
    puStack_958 = (undefined1 *)0x0;
    lStack_950 = 0;
    plVar17[10] = uStack_938;
    plVar17[8] = (long)puStack_948;
    plVar17[9] = (long)puStack_940;
    puStack_948 = (undefined *)0x0;
    puStack_940 = (undefined *)0x0;
    uStack_938 = 0;
    plVar17[0xb] = lStack_930;
    plVar17[0xc] = (long)puStack_928;
    plVar17[0xd] = uStack_920;
    lStack_930 = 0;
    puStack_928 = (undefined *)0x0;
    uStack_920 = 0;
    plVar17[0xe] = uStack_918;
    plVar17[0xf] = lStack_910;
    plVar17[0x10] = lStack_908;
    uStack_918 = 0;
    lStack_910 = 0;
    lStack_908 = 0;
    *(undefined4 *)(plVar17 + 0x11) = uStack_900;
    plVar17[0x12] = lStack_8f8;
    plVar17[0x13] = lStack_8f0;
    plVar17[0x14] = lStack_8e8;
    lStack_8f8 = 0;
    lStack_8f0 = 0;
    lStack_8e8 = 0;
    plVar17[0x17] = lStack_8d0;
    *(undefined4 *)(plVar17 + 0x15) = (undefined4)uStack_8e0;
    *(undefined4 *)((long)plVar17 + 0xac) = uStack_8e0._4_4_;
    *(undefined4 *)(plVar17 + 0x16) = (undefined4)uStack_8d8;
    *(undefined4 *)((long)plVar17 + 0xb4) = uStack_8d8._4_4_;
    uStack_8e0 = 0;
    uStack_8d8 = (long *)0x0;
    lStack_8d0 = 0;
    *(ulong *)((long)plVar17 + 0xc5) =
         CONCAT17((undefined1)uStack_8bc,CONCAT43(uStack_8c0,uStack_8c4._1_3_));
    plVar17[0x18] = CONCAT44(uStack_8c4,CONCAT22(uStack_8c6,CONCAT11(uStack_8c7,bStack_8c8)));
    puStack_6f8 = (undefined *)0x0;
    uStack_6f0 = (long *)0x0;
    uStack_a58 = plVar17;
    func_0x048afd20(plVar23,&puStack_a68);
    plVar17 = uStack_a58;
    if (uStack_a58 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_a58 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*uStack_a58 + 0x10))(uStack_a58);
        func_0x0412c2d0(plVar17);
      }
    }
    plVar17 = uStack_6f0;
    if (uStack_6f0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_6f0 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*uStack_6f0 + 0x10))(uStack_6f0);
        func_0x0412c2d0(plVar17);
      }
    }
    puVar11 = uStack_8a8;
    lVar20 = plVar23[2];
    iVar10 = *(int *)((long)plVar23 + 0x1c);
    if (iVar10 == 2) {
      piVar22 = *(int **)(*(long *)(lVar20 + 0x78) + 0x60);
      iVar10 = *piVar22;
      while (iVar10 != (int)plVar23[3]) {
        piVar22 = piVar22 + 0x16;
        iVar10 = *piVar22;
      }
      for (; *(long *)(piVar22 + 0xc) != plVar23[1]; piVar22 = *(int **)(piVar22 + 0xe)) {
      }
LAB_0de91b7a:
      piVar22[4] = piVar22[4] | (int)puStack_988 << 0x10;
    }
    else {
      if (iVar10 == 1) {
        piVar22 = *(int **)(*(long *)(lVar20 + 0x78) + 0x48);
        iVar10 = *piVar22;
        while (iVar10 != (int)plVar23[3]) {
          piVar22 = piVar22 + 0x1a;
          iVar10 = *piVar22;
        }
        goto LAB_0de91b7a;
      }
      if (iVar10 == 0) {
        *(uint *)(lVar20 + 0x18) = *(uint *)(lVar20 + 0x18) | (int)puStack_988 << 0x10;
      }
    }
    iVar10 = (int)uStack_880;
    uVar4 = uStack_880._4_4_;
    func_0x048b0bc0(&uStack_970);
    uStack_4a8 = uStack_730;
    uStack_4a0 = uStack_728;
    uStack_498 = (undefined1)uStack_720;
    plStack_708 = (long *)0x0;
    plStack_700 = (long *)0x0;
    plStack_718 = (long *)0x0;
    plStack_710 = (long *)0x0;
    if (iVar10 == 4) {
      if ((DAT_0f741608 == '\0') && (iVar10 = func_0x04108328(&DAT_0f741608), iVar10 != 0)) {
        func_0x0df8e810();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f741588,0xf53dab8);
        func_0x0410844d(&DAT_0f741608);
      }
      plVar23 = (long *)(*(long *)(puVar11 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(puVar11 + 0x20) - *(long *)(puVar11 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f741588 + 4)) * 8);
      do {
        lVar20 = *plVar23;
        if (lVar20 == -1) goto LAB_0de91cb8;
        plVar23 = (long *)(*(long *)(puVar11 + 0x30) + lVar20 * 0x18);
      } while (*(uint *)(*(long *)(puVar11 + 0x30) + 8 + lVar20 * 0x18) !=
               *(uint *)(_DAT_0f741588 + 4));
      if (plVar23 == *(long **)(puVar11 + 0x38)) {
LAB_0de91cb8:
        puVar25 = &DAT_0f741588;
      }
      else {
        puVar25 = (undefined *)plVar23[2];
      }
      puVar11 = (undefined *)func_0x048b1040(puVar11 + 0x18,puVar25,uVar4,1);
      if (puVar11 == (undefined *)0x0) {
        puStack_988 = (undefined *)0x0;
        plStack_980 = (long *)0x0;
        FUN_048b10d0(&puStack_988);
        puVar25 = *(undefined **)(puStack_988 + 0x38);
        puVar11 = puStack_988;
        if (puVar25 == (undefined *)0x0) goto LAB_0de91dca;
LAB_0de91def:
        do {
          puVar11 = puVar25;
          puVar25 = *(undefined **)(puVar11 + 0x38);
          if (*(undefined **)(puVar11 + 0x38) == (undefined *)0x0) {
            puStack_988 = (undefined *)0x0;
            plStack_980 = (long *)0x0;
            FUN_048b10d0(&puStack_988);
            puVar25 = puStack_988;
          }
        } while (puVar25 != (undefined *)0x0);
      }
      else {
        puVar25 = *(undefined **)(puVar11 + 0x38);
        if (*(undefined **)(puVar11 + 0x38) != (undefined *)0x0) goto LAB_0de91def;
LAB_0de91dca:
        puStack_988 = (undefined *)0x0;
        plStack_980 = (long *)0x0;
        FUN_048b10d0(&puStack_988);
        puVar25 = puStack_988;
        if (puStack_988 != (undefined *)0x0) goto LAB_0de91def;
      }
      lVar20 = *(long *)(puVar11 + 0x48);
      puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar13 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
LAB_0de91e54:
      *(undefined1 *)(puVar13 + 3) = uStack_498;
      *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_4a8;
      *(undefined4 *)((long)puVar13 + 0xc) = uStack_4a8._4_4_;
      *(undefined4 *)(puVar13 + 2) = (undefined4)uStack_4a0;
      *(undefined4 *)((long)puVar13 + 0x14) = uStack_4a0._4_4_;
      *puVar13 = &UNK_0f4a32d8;
      puVar13[4] = plVar12;
      puVar13[5] = plVar14;
      puVar13[6] = plVar15;
      puVar13[7] = plVar16;
      plVar12 = *(long **)(lVar20 + 8);
      *(undefined8 **)(lVar20 + 8) = puVar13;
      param_1 = lStack_828;
      if (plVar12 != (long *)0x0) goto LAB_0de91e9a;
    }
    else {
      if (iVar10 == 1) {
        if ((DAT_0f741608 == '\0') && (iVar10 = func_0x04108328(&DAT_0f741608), iVar10 != 0)) {
          func_0x0df8e810();
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f741588,0xf53dab8);
          func_0x0410844d(&DAT_0f741608);
        }
        plVar23 = (long *)(*(long *)(puVar11 + 0x18) +
                          (ulong)((int)((ulong)(*(long *)(puVar11 + 0x20) -
                                               *(long *)(puVar11 + 0x18)) >> 3) - 1U &
                                 *(uint *)(_DAT_0f741588 + 4)) * 8);
        do {
          lVar20 = *plVar23;
          if (lVar20 == -1) goto LAB_0de91c38;
          plVar23 = (long *)(*(long *)(puVar11 + 0x30) + lVar20 * 0x18);
        } while (*(uint *)(*(long *)(puVar11 + 0x30) + 8 + lVar20 * 0x18) !=
                 *(uint *)(_DAT_0f741588 + 4));
        if (plVar23 == *(long **)(puVar11 + 0x38)) {
LAB_0de91c38:
          puVar25 = &DAT_0f741588;
        }
        else {
          puVar25 = (undefined *)plVar23[2];
        }
        puVar11 = (undefined *)func_0x048b0c90(puVar11 + 0x18,puVar25,uVar4,1);
        if (puVar11 == (undefined *)0x0) {
          puStack_988 = (undefined *)0x0;
          plStack_980 = (long *)0x0;
          func_0x048b0d20(&puStack_988);
          puVar11 = puStack_988;
        }
        lVar20 = *(long *)(puVar11 + 0x58);
        puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
        if (puVar13 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x40,0);
        }
        goto LAB_0de91e54;
      }
      (**(code **)(*plVar16 + 0x28))(plVar16);
      (**(code **)(*plVar15 + 0x28))(plVar15);
      (**(code **)(*plVar14 + 0x28))(plVar14);
LAB_0de91e9a:
      param_1 = lStack_828;
      (**(code **)(*plVar12 + 0x28))(plVar12);
    }
    plVar16 = (long *)0x0;
    puVar11 = uStack_8a8;
    lVar20 = uStack_8a0;
    uVar24 = uStack_898;
    uVar8 = uStack_890;
    uVar9 = uStack_888;
    plVar23 = uStack_880;
    plVar17 = plStack_878;
  }
  plStack_878 = plVar17;
  uStack_880 = plVar23;
  uStack_888 = uVar9;
  uStack_890 = uVar8;
  uStack_898 = uVar24;
  uStack_8a0 = lVar20;
  uStack_8a8 = puVar11;
  if ((DAT_0f740d10 == '\0') && (iVar10 = func_0x04108328(&DAT_0f740d10), iVar10 != 0)) {
    func_0x0df703c0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f740c90,0xf53dab8);
    func_0x0410844d(&DAT_0f740d10);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f740c90 + 4)) * 8);
  do {
    lVar20 = *plVar12;
    if (lVar20 == -1) goto LAB_0de91f00;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f740c90 + 4))
  ;
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_0de91f00:
    puVar11 = &DAT_0f740c90;
    if (iRam000000000f740cf0 != -0x2b3da790) goto LAB_0de91f6d;
LAB_0de91f2b:
    lVar20 = *(long *)(puVar11 + 0x68);
    if (lVar20 == 0) goto LAB_0de91f6d;
    bVar26 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar21 = lVar20 + 9;
    if (bVar26) {
      lVar21 = *(long *)(lVar20 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar26) {
      uVar24 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0df96d00(&uStack_208,param_1,lVar21,uVar24);
  }
  else {
    puVar11 = (undefined *)plVar12[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0de91f2b;
LAB_0de91f6d:
    func_0x0df96d00(&uStack_208,param_1,&UNK_011e5e32,6);
  }
  if (cStack_1d8 == '\0') {
    uStack_6f0 = (long *)0xffffffffffffffff;
    uStack_6e8 = 0;
    uVar3 = (uint)uStack_6e0 >> 8;
    uStack_6e0 = CONCAT31((int3)uVar3,0xff);
    puStack_6f8 = &UNK_0f489570;
    uStack_6d8 = 0x617263656e696d12;
    uStack_6d0 = 0x7466;
    uStack_6c8 = 0;
    cStack_6c0 = '\x01';
    pcStack_a48 = (code *)0x0;
    uStack_a00 = 0;
    uStack_9f8 = 0;
    uStack_a10 = 0;
    plStack_a08 = (long *)0x0;
    uStack_a20 = (undefined *)0x0;
    uStack_a18 = (long *)0x0;
    plStack_a30 = (long *)0x0;
    plStack_a28 = (long *)0x0;
    plStack_a40 = (long *)0x0;
    plStack_a38 = (long *)0x0;
    uStack_9f0 = 0;
    uStack_a60 = (long *)0xffffffffffffffff;
    uStack_a58 = (long *)0x0;
    uStack_a50 = (long *)0xff;
    puStack_a68 = &UNK_0f4e3c70;
    func_0x041679a0(&pcStack_a48);
    plStack_a40 = (long *)func_0x041681f0(&pcStack_a48,0xf547a30);
    plStack_a38 = (long *)func_0x041681f0(&pcStack_a48,0xf547770);
    plStack_a30 = (long *)0x0;
    plStack_a28 = (long *)0x0;
    uStack_a20 = (undefined *)0x0;
    uStack_a18 = (long *)0x0;
    uStack_a10 = 0;
    plStack_a08 = (long *)0x0;
    uStack_a00 = 0;
    uStack_9f8 = 0;
    uStack_9f0 = 0;
    bStack_510 = 10;
    uStack_50f = 0x2b535c5e;
    uStack_50b = 0x24;
    func_0x0ed60210(&puStack_a68,&bStack_510,0);
    uStack_7f0 = CONCAT71(uStack_7f0._1_7_,(undefined1)uStack_a50);
    uStack_800 = (long)uStack_a60;
    uStack_7f8 = (ulong)uStack_a58;
    puStack_808 = &UNK_0f4e3c70;
    func_0x04167a20(&uStack_7e8,&pcStack_a48);
    plStack_7e0 = plStack_a40;
    plStack_7d8 = plStack_a38;
    plStack_7d0 = plStack_a30;
    plStack_7c8 = plStack_a28;
    uStack_7c0 = uStack_a20;
    uStack_7b8 = uStack_a18;
    if (uStack_a18 != (long *)0x0) {
      LOCK();
      uStack_a18[1] = uStack_a18[1] + 1;
      UNLOCK();
    }
    uStack_7b0 = uStack_a10;
    if (((ulong)plStack_a08 & 1) == 0) {
      uStack_798 = uStack_9f8;
      uStack_7a8 = (ulong)plStack_a08;
      uStack_7a0 = uStack_a00;
    }
    else {
      func_0x0412e5e0(&uStack_7a8,uStack_9f8,uStack_a00);
    }
    uStack_790 = uStack_9f0;
    plStack_980 = (long *)0xffffffffffffffff;
    plStack_978 = (long *)0x0;
    uStack_970._0_1_ = 0xff;
    puStack_988 = &UNK_0f4a8968;
    func_0x0df65150(&puStack_968,&puStack_6f8,&puStack_808);
    uStack_970 = (long *)CONCAT71(uStack_970._1_7_,0xff);
    puStack_808 = &UNK_0f4e3c70;
    if ((uStack_7a8 & 1) != 0) {
      func_0x0412a280(uStack_798,uStack_7a8 & 0xfffffffffffffffe);
    }
    plVar12 = uStack_7b8;
    if (uStack_7b8 != (long *)0x0) {
      LOCK();
      plVar14 = uStack_7b8 + 1;
      lVar20 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*uStack_7b8 + 0x10))(uStack_7b8);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x04167a40(&uStack_7e8);
    if ((bStack_510 & 1) == 0) {
      if (((ulong)plStack_a08 & 1) != 0) goto LAB_0de9229a;
LAB_0de92262:
      puStack_a68 = &UNK_0f4e3c70;
      plVar12 = uStack_a18;
    }
    else {
      func_0x0412a280(uStack_500,
                      CONCAT17(uStack_509,CONCAT25(uStack_50b,CONCAT41(uStack_50f,bStack_510))) &
                      0xfffffffffffffffe);
      if (((ulong)plStack_a08 & 1) == 0) goto LAB_0de92262;
LAB_0de9229a:
      puStack_a68 = &UNK_0f4e3c70;
      func_0x0412a280(uStack_9f8,(ulong)plStack_a08 & 0xfffffffffffffffe);
      plVar12 = uStack_a18;
    }
    uStack_a18 = plVar12;
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar14 = plVar12 + 1;
      lVar20 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x04167a40(&pcStack_a48);
    puStack_6f8 = &UNK_0f489570;
    if ((cStack_6c0 == '\x01') && ((uStack_6d8 & 1) != 0)) {
      func_0x0412a280(uStack_6c8,uStack_6d8 & 0xfffffffffffffffe);
    }
    plVar14 = plStack_688;
    plVar12 = plStack_690;
    uVar8 = uStack_698;
    uStack_640 = 0xffffffffffffffff;
    uStack_638 = 0;
    uStack_630 = CONCAT31(uStack_630._1_3_,0xff);
    puStack_648 = &UNK_0f4a3358;
    plStack_628 = (long *)0x0;
    plStack_620 = (long *)0x0;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)0x0;
    uStack_480 = (undefined4)uStack_6b0;
    uStack_47c = uStack_6b0._4_4_;
    uStack_478 = (undefined4)uStack_6a8;
    uStack_474 = uStack_6a8._4_4_;
    uStack_470 = CONCAT31(uStack_470._1_3_,(undefined1)uStack_6a0);
    uStack_488 = &UNK_0f4e3cf0;
    uStack_468 = uStack_698;
    uStack_460 = plStack_690;
    plStack_458 = plStack_688;
    if (plStack_688 != (long *)0x0) {
      LOCK();
      plStack_688[1] = plStack_688[1] + 1;
      UNLOCK();
    }
    uVar7 = puStack_680._0_1_;
    uStack_450 = puStack_680._0_1_;
    puStack_4b8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puStack_4b8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    plVar15 = plStack_758;
    uVar9 = uStack_760;
    uVar24 = uStack_768;
    *(undefined1 *)(puStack_4b8 + 3) = (undefined1)uStack_6a0;
    puStack_4b8[1] = uStack_6b0;
    puStack_4b8[2] = uStack_6a8;
    *puStack_4b8 = &UNK_0f4e3cf0;
    lStack_740 = uVar8;
    puStack_4b8[4] = uVar8;
    uStack_820 = (ulong)plVar12;
    puStack_4b8[5] = plVar12;
    puStack_4b8[6] = plVar14;
    uStack_460 = 0;
    plStack_458 = (long *)0x0;
    *(undefined1 *)(puStack_4b8 + 7) = uVar7;
    uStack_340 = (undefined4)uStack_780;
    uStack_33c = uStack_780._4_4_;
    uStack_338 = (undefined4)uStack_778;
    uStack_334 = uStack_778._4_4_;
    uStack_330 = (undefined1)uStack_770;
    puStack_348 = &UNK_0f4e3cf0;
    uStack_328 = uStack_768;
    uStack_320 = uStack_760;
    plStack_318 = plStack_758;
    if (plStack_758 != (long *)0x0) {
      LOCK();
      plStack_758[1] = plStack_758[1] + 1;
      UNLOCK();
    }
    uVar6 = (char)uStack_750;
    uStack_310 = (char)uStack_750;
    plStack_628 = puStack_4b8;
    puStack_4b0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puStack_4b0 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    lVar20 = lStack_740;
    uVar5 = uStack_820;
    *(undefined1 *)(puStack_4b0 + 3) = (undefined1)uStack_770;
    puStack_4b0[1] = uStack_780;
    puStack_4b0[2] = uStack_778;
    *puStack_4b0 = &UNK_0f4e3cf0;
    puStack_4b0[4] = uVar24;
    puStack_4b0[5] = uVar9;
    puStack_4b0[6] = plVar15;
    uStack_320 = 0;
    plStack_318 = (long *)0x0;
    *(undefined1 *)(puStack_4b0 + 7) = uVar6;
    uStack_380 = (undefined4)uStack_6b0;
    uStack_37c = uStack_6b0._4_4_;
    uStack_378 = (undefined4)uStack_6a8;
    uStack_374 = uStack_6a8._4_4_;
    uStack_370 = (undefined1)uStack_6a0;
    puStack_388 = &UNK_0f4e3cf0;
    uStack_368 = lStack_740;
    uStack_360 = uStack_820;
    plStack_358 = plVar14;
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar14[1] = plVar14[1] + 1;
      UNLOCK();
    }
    uStack_350 = uVar7;
    plStack_620 = puStack_4b0;
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    *(undefined1 *)(puVar13 + 3) = (undefined1)uStack_6a0;
    puVar13[1] = uStack_6b0;
    puVar13[2] = uStack_6a8;
    *puVar13 = &UNK_0f4e3cf0;
    puVar13[4] = lVar20;
    puVar13[5] = uVar5;
    puVar13[6] = plVar14;
    uStack_360 = 0;
    plStack_358 = (long *)0x0;
    *(undefined1 *)(puVar13 + 7) = uVar7;
    puStack_388 = &UNK_0f4e3cf0;
    puStack_348 = &UNK_0f4e3cf0;
    uStack_488 = &UNK_0f4e3cf0;
    iStack_428 = iStack_1e8;
    iStack_424 = iStack_1e4;
    uStack_438 = uStack_1f8;
    uStack_434 = uStack_1f4;
    uStack_430 = uStack_1f0;
    uStack_42c = uStack_1ec;
    uStack_448 = uStack_208;
    uStack_444 = uStack_204;
    uStack_440 = uStack_200;
    uStack_43c = uStack_1fc;
    uStack_420 = 0x1e1bc4d500000004;
    plStack_618 = puVar13;
    if ((DAT_0f740c78 == '\0') && (iVar10 = func_0x04108328(&DAT_0f740c78), iVar10 != 0)) {
      func_0x0df70280();
      func_0x0410844d(&DAT_0f740c78);
    }
    puStack_a68 = (undefined *)CONCAT44(puStack_a68._4_4_,uStack_420._4_4_);
    uStack_a60 = (long *)0x0;
    uStack_a58 = (long *)((ulong)uStack_a58 & 0xffffffff00000000);
    uStack_a50 = (long *)0x1;
    pcStack_a48 = FUN_048aead0;
    plStack_a40 = (long *)&UNK_0df98bf0;
    plStack_a38 = (long *)&UNK_0df98cb0;
    plStack_a30 = (long *)0x0;
    plStack_a28 = (long *)((ulong)plStack_a28 & 0xffffffff00000000);
    uStack_a20 = (undefined *)0x0;
    uStack_a18 = (long *)0x0;
    func_0x049057f0(&uStack_440,&puStack_a68);
    func_0x048aea50(&puStack_a68);
    uStack_898 = CONCAT44(uStack_42c,uStack_430);
    uStack_890 = CONCAT44(iStack_424,iStack_428);
    uStack_8a8 = (undefined *)CONCAT44(uStack_43c,uStack_440);
    uStack_8a0 = CONCAT44(uStack_434,uStack_438);
    puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar18 = &UNK_0f4a8180;
    if ((DAT_0f551bc8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f551bc8), iVar10 != 0)) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    puStack_a68 = (undefined *)CONCAT44(puStack_a68._4_4_,_DAT_0f551bb4);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = (long)&UNK_0ef46c48;
    uStack_a60 = plVar12 + 3;
    plVar12[3] = (long)puVar18;
    plVar12[4] = 0;
    *(undefined1 *)(plVar12 + 5) = 0xff;
    puStack_4f8 = (undefined *)0x0;
    plStack_4f0 = (long *)0x0;
    uStack_a58 = plVar12;
    func_0x048afd20(&uStack_8a8,&puStack_a68);
    puVar18 = puStack_4b0;
    plVar12 = uStack_a58;
    if (uStack_a58 != (long *)0x0) {
      LOCK();
      plVar14 = uStack_a58 + 1;
      lVar20 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*uStack_a58 + 0x10))(uStack_a58);
        func_0x0412c2d0(plVar12);
      }
    }
    plVar12 = plStack_4f0;
    if (plStack_4f0 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_4f0 + 1;
      lVar20 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_4f0 + 0x10))(plStack_4f0);
        func_0x0412c2d0(plVar12);
      }
    }
    if ((DAT_0f740c78 == '\0') && (iVar10 = func_0x04108328(&DAT_0f740c78), iVar10 != 0)) {
      func_0x0df70280();
      func_0x0410844d(&DAT_0f740c78);
    }
    if (iStack_424 == 2) {
      piVar22 = *(int **)(*(long *)(CONCAT44(uStack_42c,uStack_430) + 0x78) + 0x60);
      iVar10 = *piVar22;
      while (iVar10 != iStack_428) {
        piVar22 = piVar22 + 0x16;
        iVar10 = *piVar22;
      }
      lVar20 = *(long *)(piVar22 + 0xc);
      while (lVar20 != CONCAT44(uStack_434,uStack_438)) {
        piVar22 = *(int **)(piVar22 + 0xe);
        lVar20 = *(long *)(piVar22 + 0xc);
      }
LAB_0de928af:
      *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 2;
    }
    else {
      if (iStack_424 == 1) {
        piVar22 = *(int **)(*(long *)(CONCAT44(uStack_42c,uStack_430) + 0x78) + 0x48);
        iVar10 = *piVar22;
        while (iVar10 != iStack_428) {
          piVar22 = piVar22 + 0x1a;
          iVar10 = *piVar22;
        }
        goto LAB_0de928af;
      }
      if (iStack_424 == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_42c,uStack_430) + 0x18);
        *puVar2 = *puVar2 | 0x20000;
      }
    }
    if ((DAT_0f740c78 == '\0') && (iVar10 = func_0x04108328(&DAT_0f740c78), iVar10 != 0)) {
      func_0x0df70280();
      func_0x0410844d(&DAT_0f740c78);
    }
    puStack_a68 = (undefined *)CONCAT44(puStack_a68._4_4_,0xbf75c8f8);
    uStack_a60 = (long *)0x0;
    uStack_a58 = (long *)CONCAT44(uStack_a58._4_4_,1);
    uStack_a50 = (long *)0x0;
    pcStack_a48 = (code *)&UNK_0df994f0;
    plStack_a40 = (long *)&SUB_048b06d0;
    plStack_a38 = (long *)&UNK_0df9e730;
    plStack_a30 = (long *)0x0;
    plStack_a28 = (long *)((ulong)plStack_a28 & 0xffffffff00000000);
    uStack_a20 = (undefined *)0x0;
    uStack_a18 = (long *)0x0;
    func_0x049057f0(&uStack_440,&puStack_a68);
    func_0x048aea50(&puStack_a68);
    uStack_898 = CONCAT44(uStack_42c,uStack_430);
    uStack_890 = CONCAT44(iStack_424,iStack_428);
    uStack_8a8 = (undefined *)CONCAT44(uStack_43c,uStack_440);
    uStack_8a0 = CONCAT44(uStack_434,uStack_438);
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar19 = &UNK_0f4a8180;
    if ((DAT_0f551cb0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f551cb0), iVar10 != 0)) {
      func_0x04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    puStack_a68 = (undefined *)CONCAT44(puStack_a68._4_4_,_DAT_0f551c9c);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = (long)&UNK_0ef46c98;
    uStack_a60 = plVar12 + 3;
    plVar12[3] = (long)puVar19;
    *(undefined1 *)(plVar12 + 4) = 0xff;
    puStack_4f8 = (undefined *)0x0;
    plStack_4f0 = (long *)0x0;
    uStack_a58 = plVar12;
    func_0x048afd20(&uStack_8a8,&puStack_a68);
    plVar12 = uStack_a58;
    if (uStack_a58 != (long *)0x0) {
      LOCK();
      plVar14 = uStack_a58 + 1;
      lVar20 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*uStack_a58 + 0x10))(uStack_a58);
        func_0x0412c2d0(plVar12);
      }
    }
    plVar12 = plStack_4f0;
    if (plStack_4f0 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_4f0 + 1;
      lVar20 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_4f0 + 0x10))(plStack_4f0);
        func_0x0412c2d0(plVar12);
      }
    }
    lStack_740 = CONCAT44(uStack_444,uStack_448);
    iVar10 = (int)uStack_420;
    uStack_820 = CONCAT44(uStack_820._4_4_,uStack_420._4_4_);
    uStack_a60 = plStack_980;
    uStack_a58 = plStack_978;
    uStack_a50 = (long *)CONCAT71(uStack_a50._1_7_,(undefined1)uStack_970);
    puStack_a68 = &UNK_0f4a8968;
    plStack_a40 = (long *)puStack_960;
    plStack_a38 = (long *)puStack_958;
    plStack_a30 = (long *)CONCAT71(plStack_a30._1_7_,(undefined1)lStack_950);
    pcStack_a48 = (code *)&UNK_0f489570;
    plStack_a28 = (long *)((ulong)plStack_a28 & 0xffffffffffffff00);
    uVar24 = uStack_a10 >> 8;
    uStack_a10 = uStack_a10 & 0xffffffffffffff00;
    if ((char)lStack_930 == '\x01') {
      uStack_a18 = (long *)uStack_938;
      plStack_a28 = (long *)puStack_948;
      uStack_a20 = puStack_940;
      puStack_948 = (undefined *)0x0;
      puStack_940 = (undefined *)0x0;
      uStack_938 = 0;
      uStack_a10 = CONCAT71((int7)uVar24,1);
    }
    uStack_9f0 = CONCAT71(uStack_9f0._1_7_,(undefined1)lStack_910);
    uStack_a00 = uStack_920;
    uStack_9f8 = uStack_918;
    plStack_a08 = (long *)&UNK_0f4e3c70;
    func_0x04167a20(auStack_9e8,&lStack_908);
    lStack_9e0 = CONCAT44(uStack_8fc,uStack_900);
    lStack_9d8 = lStack_8f8;
    lStack_9d0 = lStack_8f0;
    lStack_9c8 = lStack_8e8;
    lStack_9c0 = uStack_8e0;
    plStack_9b8 = uStack_8d8;
    uStack_8e0 = 0;
    uStack_8d8 = (long *)0x0;
    lStack_9b0 = lStack_8d0;
    uStack_9a8 = CONCAT44(uStack_8c4,CONCAT22(uStack_8c6,CONCAT11(uStack_8c7,bStack_8c8)));
    uStack_9a0 = CONCAT44(uStack_8bc,uStack_8c0);
    lStack_998 = lStack_8b8;
    lStack_990 = lStack_8b0;
    bStack_8c8 = 0;
    uStack_8c7 = 0;
    uStack_8c6 = 0;
    uStack_8c4 = 0;
    uStack_8c0 = 0;
    uStack_8bc = 0;
    lStack_8b8 = 0;
    uStack_4e0 = (undefined1)uStack_630;
    plStack_4f0 = (long *)uStack_640;
    uStack_4e8 = (undefined4)uStack_638;
    uStack_4e4 = uStack_638._4_4_;
    puStack_4f8 = &UNK_0f4a3358;
    plStack_4d8 = puStack_4b8;
    plStack_4d0 = puVar18;
    plStack_628 = (long *)0x0;
    plStack_620 = (long *)0x0;
    plStack_618 = (long *)0x0;
    plStack_610 = (long *)0x0;
    plStack_4c0 = (long *)0x0;
    uStack_8a0 = -1;
    uStack_898 = 0;
    uStack_890 = CONCAT71(uStack_890._1_7_,0xff);
    uStack_8a8 = &UNK_0f4e3d70;
    uStack_888 = 0;
    plStack_4c8 = puVar13;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xf8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0xf8,0);
    }
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = (long)&UNK_0f4a83f8;
    plVar12[4] = (long)uStack_a60;
    plVar12[5] = (long)uStack_a58;
    *(undefined1 *)(plVar12 + 6) = (undefined1)uStack_a50;
    plVar12[3] = (long)&UNK_0f4a8968;
    plVar12[8] = (long)plStack_a40;
    plVar12[9] = (long)plStack_a38;
    *(undefined1 *)(plVar12 + 10) = plStack_a30._0_1_;
    plVar12[7] = (long)&UNK_0f489570;
    *(undefined1 *)(plVar12 + 0xb) = 0;
    *(undefined1 *)(plVar12 + 0xe) = 0;
    if ((char)uStack_a10 == '\x01') {
      plVar12[0xd] = (long)uStack_a18;
      plVar12[0xb] = (long)plStack_a28;
      plVar12[0xc] = (long)uStack_a20;
      plStack_a28 = (long *)0x0;
      uStack_a20 = (undefined *)0x0;
      uStack_a18 = (long *)0x0;
      *(undefined1 *)(plVar12 + 0xe) = 1;
    }
    *(undefined1 *)(plVar12 + 0x12) = (undefined1)uStack_9f0;
    *(undefined4 *)(plVar12 + 0x10) = (undefined4)uStack_a00;
    *(undefined4 *)((long)plVar12 + 0x84) = uStack_a00._4_4_;
    *(undefined4 *)(plVar12 + 0x11) = (undefined4)uStack_9f8;
    *(undefined4 *)((long)plVar12 + 0x8c) = uStack_9f8._4_4_;
    plVar12[0xf] = (long)&UNK_0f4e3c70;
    func_0x04167a20(plVar12 + 0x13,auStack_9e8);
    plVar12[0x14] = lStack_9e0;
    plVar12[0x15] = lStack_9d8;
    plVar12[0x16] = lStack_9d0;
    plVar12[0x17] = lStack_9c8;
    plVar12[0x18] = lStack_9c0;
    plVar12[0x19] = (long)plStack_9b8;
    lStack_9c0 = 0;
    plStack_9b8 = (long *)0x0;
    plVar12[0x1a] = lStack_9b0;
    plVar12[0x1d] = lStack_998;
    *(undefined4 *)(plVar12 + 0x1b) = (undefined4)uStack_9a8;
    *(undefined4 *)((long)plVar12 + 0xdc) = uStack_9a8._4_4_;
    *(undefined4 *)(plVar12 + 0x1c) = (undefined4)uStack_9a0;
    *(undefined4 *)((long)plVar12 + 0xe4) = uStack_9a0._4_4_;
    uStack_9a8 = 0;
    uStack_9a0 = 0;
    lStack_998 = 0;
    plVar12[0x1e] = lStack_990;
    uStack_880 = plVar12 + 3;
    plStack_878 = plVar12;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0x58,0);
    }
    param_1 = lStack_828;
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = (long)&UNK_0f4a8448;
    uStack_870 = plVar12 + 3;
    *(undefined4 *)(plVar12 + 4) = (undefined4)uStack_640;
    *(undefined4 *)((long)plVar12 + 0x24) = uStack_640._4_4_;
    *(undefined4 *)(plVar12 + 5) = (undefined4)uStack_638;
    *(undefined4 *)((long)plVar12 + 0x2c) = uStack_638._4_4_;
    *(undefined1 *)(plVar12 + 6) = (undefined1)uStack_630;
    plVar12[3] = (long)&UNK_0f4a3358;
    plVar12[7] = (long)puStack_4b8;
    plVar12[8] = (long)puStack_4b0;
    plVar12[9] = (long)puVar13;
    plStack_4c8 = (long *)0x0;
    plStack_4c0 = (long *)0x0;
    plStack_4d8 = (long *)0x0;
    plStack_4d0 = (long *)0x0;
    plVar12[10] = 0;
    uStack_868 = plVar12;
    if (iVar10 == 4) {
      if ((DAT_0f740d10 == '\0') && (iVar10 = func_0x04108328(&DAT_0f740d10), iVar10 != 0)) {
        func_0x0df703c0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f740c90,0xf53dab8);
        func_0x0410844d(&DAT_0f740d10);
      }
      plVar12 = (long *)(*(long *)(lStack_740 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lStack_740 + 0x20) -
                                             *(long *)(lStack_740 + 0x18)) >> 3) - 1U &
                               *(uint *)(_DAT_0f740c90 + 4)) * 8);
      do {
        lVar20 = *plVar12;
        if (lVar20 == -1) goto LAB_0de92fa8;
        plVar12 = (long *)(*(long *)(lStack_740 + 0x30) + lVar20 * 0x18);
      } while (*(uint *)(*(long *)(lStack_740 + 0x30) + 8 + lVar20 * 0x18) !=
               *(uint *)(_DAT_0f740c90 + 4));
      if (plVar12 == *(long **)(lStack_740 + 0x38)) {
LAB_0de92fa8:
        puVar11 = &DAT_0f740c90;
      }
      else {
        puVar11 = (undefined *)plVar12[2];
      }
      lVar20 = func_0x048b1040(lStack_740 + 0x18,puVar11,uStack_820 & 0xffffffff,1);
      if (lVar20 == 0) {
        lStack_818 = 0;
        uStack_810 = 0;
        FUN_048b10d0(&lStack_818);
        lVar21 = *(long *)(lStack_818 + 0x38);
        lVar20 = lStack_818;
        if (lVar21 == 0) goto LAB_0de93141;
LAB_0de93166:
        do {
          lVar20 = lVar21;
          lVar21 = *(long *)(lVar20 + 0x38);
          if (*(long *)(lVar20 + 0x38) == 0) {
            lStack_818 = 0;
            uStack_810 = 0;
            FUN_048b10d0(&lStack_818);
            lVar21 = lStack_818;
          }
        } while (lVar21 != 0);
      }
      else {
        lVar21 = *(long *)(lVar20 + 0x38);
        if (*(long *)(lVar20 + 0x38) != 0) goto LAB_0de93166;
LAB_0de93141:
        lStack_818 = 0;
        uStack_810 = 0;
        FUN_048b10d0(&lStack_818);
        lVar21 = lStack_818;
        if (lStack_818 != 0) goto LAB_0de93166;
      }
      lVar20 = *(long *)(lVar20 + 0x48);
      puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
      if (puVar13 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x48,0);
      }
LAB_0de931c4:
      *(undefined1 *)(puVar13 + 3) = (undefined1)uStack_890;
      puVar13[1] = uStack_8a0;
      puVar13[2] = uStack_898;
      *puVar13 = &UNK_0f4e3d70;
      puVar13[4] = uStack_888;
      puVar13[5] = uStack_880;
      puVar13[6] = plStack_878;
      uStack_880 = (long *)0x0;
      plStack_878 = (long *)0x0;
      *(undefined4 *)(puVar13 + 7) = (undefined4)uStack_870;
      *(undefined4 *)((long)puVar13 + 0x3c) = uStack_870._4_4_;
      *(undefined4 *)(puVar13 + 8) = (undefined4)uStack_868;
      *(undefined4 *)((long)puVar13 + 0x44) = uStack_868._4_4_;
      uStack_870 = (long *)0x0;
      uStack_868 = (long *)0x0;
      plVar12 = *(long **)(lVar20 + 8);
      *(undefined8 **)(lVar20 + 8) = puVar13;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x28))();
      }
      uStack_8a8 = &UNK_0f4e3d70;
      param_1 = lStack_828;
    }
    else {
      if (iVar10 == 1) {
        if ((DAT_0f740d10 == '\0') && (iVar10 = func_0x04108328(&DAT_0f740d10), iVar10 != 0)) {
          func_0x0df703c0();
          func_0x0eee2f40(&UNK_048ae800,&DAT_0f740c90,0xf53dab8);
          func_0x0410844d(&DAT_0f740d10);
        }
        plVar12 = (long *)(*(long *)(lStack_740 + 0x18) +
                          (ulong)((int)((ulong)(*(long *)(lStack_740 + 0x20) -
                                               *(long *)(lStack_740 + 0x18)) >> 3) - 1U &
                                 *(uint *)(_DAT_0f740c90 + 4)) * 8);
        do {
          lVar20 = *plVar12;
          if (lVar20 == -1) goto LAB_0de92f18;
          plVar12 = (long *)(*(long *)(lStack_740 + 0x30) + lVar20 * 0x18);
        } while (*(uint *)(*(long *)(lStack_740 + 0x30) + 8 + lVar20 * 0x18) !=
                 *(uint *)(_DAT_0f740c90 + 4));
        if (plVar12 == *(long **)(lStack_740 + 0x38)) {
LAB_0de92f18:
          puVar11 = &DAT_0f740c90;
        }
        else {
          puVar11 = (undefined *)plVar12[2];
        }
        lVar20 = func_0x048b0c90(lStack_740 + 0x18,puVar11,uStack_820 & 0xffffffff,1);
        if (lVar20 == 0) {
          lStack_818 = 0;
          uStack_810 = 0;
          func_0x048b0d20(&lStack_818);
          lVar20 = lStack_818;
        }
        lVar20 = *(long *)(lVar20 + 0x58);
        puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
        if (puVar13 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x48,0);
        }
        goto LAB_0de931c4;
      }
      plVar14 = plVar12 + 1;
      uStack_8a8 = &UNK_0f4e3d70;
      LOCK();
      lVar20 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
      }
    }
    plVar12 = plStack_878;
    if (plStack_878 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_878 + 1;
      lVar20 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_878 + 0x10))(plStack_878);
        func_0x0412c2d0(plVar12);
      }
    }
    plVar12 = plStack_4c0;
    puStack_4f8 = &UNK_0f4a3358;
    plStack_4c0 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x28))();
    }
    plVar12 = plStack_4c8;
    plStack_4c8 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x28))();
    }
    plVar12 = plStack_4d0;
    plStack_4d0 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x28))();
    }
    plVar12 = plStack_4d8;
    plStack_4d8 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x28))();
    }
    puStack_a68 = &UNK_0f4a8968;
    plStack_a08 = (long *)&UNK_0f4e3c70;
    if ((uStack_9a8 & 1) != 0) {
      func_0x0412a280(lStack_998,uStack_9a8 & 0xfffffffffffffffe);
    }
    plVar12 = plStack_9b8;
    if (plStack_9b8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_9b8 + 1;
      lVar20 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_9b8 + 0x10))(plStack_9b8);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x04167a40(auStack_9e8);
    pcStack_a48 = (code *)&UNK_0f489570;
    if (((char)uStack_a10 == '\x01') && (((ulong)plStack_a28 & 1) != 0)) {
      func_0x0412a280(uStack_a18,(ulong)plStack_a28 & 0xfffffffffffffffe);
    }
    if (plStack_610 != (long *)0x0) {
      (**(code **)(*plStack_610 + 0x28))();
    }
    if (plStack_618 != (long *)0x0) {
      (**(code **)(*plStack_618 + 0x28))();
    }
    if (plStack_620 != (long *)0x0) {
      (**(code **)(*plStack_620 + 0x28))();
    }
    if (plStack_628 != (long *)0x0) {
      (**(code **)(*plStack_628 + 0x28))();
    }
    puStack_988 = &UNK_0f4a8968;
    puStack_928 = &UNK_0f4e3c70;
    if ((bStack_8c8 & 1) != 0) {
      func_0x0412a280(lStack_8b8,
                      CONCAT44(uStack_8c4,CONCAT22(uStack_8c6,CONCAT11(uStack_8c7,bStack_8c8))) &
                      0xfffffffffffffffe);
    }
    plVar12 = uStack_8d8;
    if (uStack_8d8 != (long *)0x0) {
      LOCK();
      plVar14 = uStack_8d8 + 1;
      lVar20 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*uStack_8d8 + 0x10))(uStack_8d8);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x04167a40(&lStack_908);
    puStack_968 = &UNK_0f489570;
    plVar16 = plStack_700;
    if (((char)lStack_930 == '\x01') && (((ulong)puStack_948 & 1) != 0)) {
      func_0x0412a280(uStack_938,(ulong)puStack_948 & 0xfffffffffffffffe);
      plVar16 = plStack_700;
    }
  }
  puStack_738 = &UNK_0f4a32d8;
  plStack_700 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x28))(plVar16);
  }
  if (plStack_708 != (long *)0x0) {
    (**(code **)(*plStack_708 + 0x28))();
  }
  if (plStack_710 != (long *)0x0) {
    (**(code **)(*plStack_710 + 0x28))();
  }
  if (plStack_718 != (long *)0x0) {
    (**(code **)(*plStack_718 + 0x28))();
  }
  plVar12 = plStack_758;
  puStack_788 = &UNK_0f4e3cf0;
  if (plStack_758 != (long *)0x0) {
    LOCK();
    plVar14 = plStack_758 + 1;
    lVar20 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_758 + 0x10))(plStack_758);
      func_0x0412c2d0(plVar12);
    }
  }
  plVar12 = plStack_688;
  puStack_6b8 = &UNK_0f4e3cf0;
  if (plStack_688 != (long *)0x0) {
    LOCK();
    plVar14 = plStack_688 + 1;
    lVar20 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_688 + 0x10))(plStack_688);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x0deb4d50(param_1);
  func_0x0ddd7590(param_1);
  if ((DAT_0f740520 == '\0') && (iVar10 = func_0x04108328(&DAT_0f740520), iVar10 != 0)) {
    func_0x0df489e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7404a0,0xf53dab8);
    func_0x0410844d(&DAT_0f740520);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7404a0 + 4)) * 8);
  do {
    lVar20 = *plVar12;
    if (lVar20 == -1) goto LAB_0de935d0;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f7404a0 + 4))
  ;
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_0de935d0:
    puVar11 = &DAT_0f7404a0;
    if (iRam000000000f740500 != -0x2b3da790) goto LAB_0de9363d;
LAB_0de935fb:
    lVar20 = *(long *)(puVar11 + 0x68);
    if (lVar20 == 0) goto LAB_0de9363d;
    bVar26 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar21 = lVar20 + 9;
    if (bVar26) {
      lVar21 = *(long *)(lVar20 + 0x18);
    }
    uVar24 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar26) {
      uVar24 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0df6da40(&puStack_6b8,param_1,lVar21,uVar24);
    lVar20 = uStack_6b0;
    lVar21 = uStack_6a8;
    uVar8 = uStack_6a0;
  }
  else {
    puVar11 = (undefined *)plVar12[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0de935fb;
LAB_0de9363d:
    func_0x0df6da40(&puStack_6b8,param_1,&UNK_013e2a2b,0xb);
    lVar20 = uStack_6b0;
    lVar21 = uStack_6a8;
    uVar8 = uStack_6a0;
  }
  if ((char)plStack_688 != '\0') {
    return;
  }
  uStack_6b0._0_4_ = (undefined4)lVar20;
  uStack_6b0._4_4_ = (undefined4)((ulong)lVar20 >> 0x20);
  uStack_6a8._0_4_ = (undefined4)lVar21;
  uStack_6a8._4_4_ = (uint)((ulong)lVar21 >> 0x20);
  uStack_6a0._0_4_ = (undefined4)uVar8;
  uStack_6a0._4_4_ = (undefined4)((ulong)uVar8 >> 0x20);
  uStack_478 = (undefined4)uStack_6a8;
  uStack_474 = uStack_6a8._4_4_;
  uStack_470 = (undefined4)uStack_6a0;
  uStack_46c = uStack_6a0._4_4_;
  uStack_480 = (undefined4)uStack_6b0;
  uStack_47c = uStack_6b0._4_4_;
  uStack_6b0 = lVar20;
  uStack_6a8 = lVar21;
  uStack_6a0 = uVar8;
  uStack_488 = puStack_6b8;
  uStack_468 = uStack_698;
  uStack_460 = plStack_690;
  plStack_458 = plStack_688;
  func_0x0df6e650(&puStack_988,&uStack_488,&UNK_013762e9,10,1);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0ef44b00;
  if (uStack_970 != (long *)0x0) {
    lVar20 = *uStack_970;
    uStack_970 = plVar12;
    (**(code **)(lVar20 + 8))();
    plVar12 = uStack_970;
  }
  uStack_970 = plVar12;
  puStack_a68 = (undefined *)CONCAT44(puStack_a68._4_4_,plStack_978._0_4_);
  uStack_a60 = (long *)0x0;
  uStack_a58 = (long *)((ulong)uStack_a58 & 0xffffffff00000000);
  uStack_a50 = (long *)0x1;
  pcStack_a48 = (code *)0x0;
  plStack_a40 = (long *)&UNK_048b3f30;
  plStack_a38 = (long *)&SUB_048b06d0;
  plStack_a30 = (long *)&SUB_048b2190;
  plStack_a28 = (long *)&UNK_0df6ec10;
  uStack_a20 = &UNK_0df6edd0;
  uStack_a18 = (long *)((ulong)uStack_a18 & 0xffffffff00000000);
  uStack_a10 = 0;
  plStack_a08 = (long *)0x0;
  func_0x048b05a0(plStack_980,&puStack_a68);
  plVar12 = plStack_a08;
  if (plStack_a08 != (long *)0x0) {
    LOCK();
    plVar14 = plStack_a08 + 1;
    lVar20 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_a08 + 0x10))(plStack_a08);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x0df6e910(&puStack_988);
  plStack_618 = (long *)CONCAT71(plStack_618._1_7_,plStack_458._0_1_);
  plStack_628 = (long *)uStack_468;
  plStack_620 = (long *)uStack_460;
  uStack_638 = CONCAT44(uStack_474,uStack_478);
  uStack_630 = uStack_470;
  uStack_62c = uStack_46c;
  puStack_648 = uStack_488;
  uStack_640 = CONCAT44(uStack_47c,uStack_480);
  func_0x048b0bc0(&uStack_970);
  func_0x0debb800(&puStack_6f8,&puStack_648,0xff);
  uStack_400 = 0xffffffffffffffff;
  uStack_3f8 = 0;
  uStack_3f0 = 1;
  puStack_408 = &UNK_0f489570;
  uStack_3e8 = 0x617263656e696d12;
  uStack_3e0 = 0x7466;
  uStack_3d8 = 0;
  cStack_3d0 = '\x01';
  uStack_3c0 = 0xffffffffffffffff;
  uStack_3b8 = 0;
  uStack_3b0 = 2;
  puStack_3c8 = &UNK_0f489570;
  bStack_3a8 = 0;
  cStack_390 = '\0';
  pcStack_a48 = (code *)0x0;
  uStack_a00 = 0;
  uStack_9f8 = 0;
  uStack_a10 = 0;
  plStack_a08 = (long *)0x0;
  uStack_a20 = (undefined *)0x0;
  uStack_a18 = (long *)0x0;
  plStack_a30 = (long *)0x0;
  plStack_a28 = (long *)0x0;
  plStack_a40 = (long *)0x0;
  plStack_a38 = (long *)0x0;
  uStack_9f0 = 0;
  uStack_a60 = (long *)0xffffffffffffffff;
  uStack_a58 = (long *)0x0;
  uStack_a50._0_1_ = 0xff;
  uStack_a50._1_7_ = 0;
  puStack_a68 = &UNK_0f4e3c70;
  func_0x041679a0(&pcStack_a48);
  plStack_a40 = (long *)func_0x041681f0(&pcStack_a48,0xf547a30);
  plStack_a38 = (long *)func_0x041681f0(&pcStack_a48,0xf547770);
  plStack_a30 = (long *)0x0;
  plStack_a28 = (long *)0x0;
  uStack_a20 = (undefined *)0x0;
  uStack_a18 = (long *)0x0;
  uStack_a10 = 0;
  plStack_a08 = (long *)0x0;
  uStack_a00 = 0;
  uStack_9f8 = 0;
  uStack_9f0 = 0;
  bStack_5c0 = 0x1c;
  uStack_5bf = 0x63656e696d5e;
  uStack_5b9 = 0x72;
  uStack_5b8 = 0x61;
  uStack_5b7 = 0x242a2e3a7466;
  uStack_5b1 = 0;
  func_0x0ed60210(&puStack_a68,&bStack_5c0,1);
  uStack_a50 = (long *)CONCAT71(uStack_a50._1_7_,2);
  uStack_280 = (undefined4)uStack_a60;
  uStack_27c = uStack_a60._4_4_;
  uStack_278 = (undefined4)uStack_a58;
  uStack_274 = uStack_a58._4_4_;
  uStack_270 = 2;
  puStack_288 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_268,&pcStack_a48);
  uStack_260 = plStack_a40;
  uStack_258 = plStack_a38;
  uStack_250 = plStack_a30;
  uStack_248 = plStack_a28;
  uStack_240 = (undefined4)uStack_a20;
  uStack_23c = uStack_a20._4_4_;
  uStack_238 = (undefined4)uStack_a18;
  uStack_234 = uStack_a18._4_4_;
  if (uStack_a18 != (long *)0x0) {
    LOCK();
    uStack_a18[1] = uStack_a18[1] + 1;
    UNLOCK();
  }
  uStack_230 = uStack_a10;
  if (((ulong)plStack_a08 & 1) == 0) {
    uStack_218 = uStack_9f8;
    uStack_228 = (ulong)plStack_a08;
    uStack_220 = uStack_a00;
  }
  else {
    func_0x0412e5e0(&uStack_228,uStack_9f8,uStack_a00);
  }
  uStack_210 = uStack_9f0;
  uStack_7e8 = 0;
  uStack_7a0 = 0;
  uStack_798 = 0;
  uStack_7b0 = 0;
  uStack_7a8 = 0;
  uStack_7c0 = 0;
  uStack_7b8 = (long *)0x0;
  plStack_7d0 = (long *)0x0;
  plStack_7c8 = (long *)0x0;
  plStack_7e0 = (long *)0x0;
  plStack_7d8 = (long *)0x0;
  uStack_790 = 0;
  uStack_800 = 0xffffffffffffffff;
  uStack_7f8 = 0;
  uStack_7f0 = 0xff;
  puStack_808 = &UNK_0f4e3c70;
  func_0x041679a0(&uStack_7e8);
  plStack_7e0 = (long *)func_0x041681f0(&uStack_7e8,0xf547a30);
  plStack_7d8 = (long *)func_0x041681f0(&uStack_7e8,0xf547770);
  plStack_7d0 = (long *)0x0;
  plStack_7c8 = (long *)0x0;
  uStack_7c0 = 0;
  uStack_7b8 = (long *)0x0;
  uStack_7b0 = 0;
  uStack_7a8 = 0;
  uStack_7a0 = 0;
  uStack_798 = 0;
  uStack_790 = 0;
  bStack_528 = 10;
  uStack_527 = 0x2b535c5e;
  uStack_523 = 0x24;
  func_0x0ed60210(&puStack_808,&bStack_528,0);
  uStack_2f0 = (undefined1)uStack_7f0;
  uStack_300 = (undefined4)uStack_800;
  uStack_2fc = uStack_800._4_4_;
  uStack_2f8 = (undefined4)uStack_7f8;
  uStack_2f4 = uStack_7f8._4_4_;
  puStack_308 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_2e8,&uStack_7e8);
  uStack_2e0 = plStack_7e0;
  uStack_2d8 = plStack_7d8;
  uStack_2d0 = plStack_7d0;
  uStack_2c8 = plStack_7c8;
  uStack_2c0 = (undefined4)uStack_7c0;
  uStack_2bc = uStack_7c0._4_4_;
  uStack_2b8 = (undefined4)uStack_7b8;
  uStack_2b4 = uStack_7b8._4_4_;
  if (uStack_7b8 != (long *)0x0) {
    LOCK();
    uStack_7b8[1] = uStack_7b8[1] + 1;
    UNLOCK();
  }
  uStack_2b0 = uStack_7b0;
  if ((uStack_7a8 & 1) == 0) {
    uStack_298 = uStack_798;
    uStack_2a8 = (uint)uStack_7a8;
    uStack_2a4 = uStack_7a8._4_4_;
    uStack_2a0 = (undefined4)uStack_7a0;
    uStack_29c = uStack_7a0._4_4_;
  }
  else {
    func_0x0412e5e0(&uStack_2a8,uStack_798,uStack_7a0);
  }
  uStack_290 = uStack_790;
  uStack_1c8 = 0xffffffffffffffff;
  uStack_1c0 = 0;
  uStack_1b8 = 0xff;
  puStack_1d0 = &UNK_0f497470;
  func_0x0db8d170(auStack_1b0,&puStack_408,&puStack_3c8,&puStack_288,&puStack_308);
  uStack_1b8 = 0xff;
  if ((int)uStack_6d0 == 4) {
    lVar20 = func_0x0df6f0f0(&puStack_6f8);
    lVar20 = *(long *)(lVar20 + 0x48);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x1a0,0);
    }
LAB_0de93d5a:
    *(undefined1 *)(puVar13 + 3) = uStack_1b8;
    *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_1c8;
    *(undefined4 *)((long)puVar13 + 0xc) = uStack_1c8._4_4_;
    *(undefined4 *)(puVar13 + 2) = (undefined4)uStack_1c0;
    *(undefined4 *)((long)puVar13 + 0x14) = uStack_1c0._4_4_;
    *puVar13 = &UNK_0f497470;
    func_0x0db8d440(puVar13 + 4,auStack_1b0);
    plVar12 = *(long **)(lVar20 + 8);
    *(undefined8 **)(lVar20 + 8) = puVar13;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x28))();
    }
  }
  else if ((int)uStack_6d0 == 1) {
    lVar20 = func_0x0df6efa0(&puStack_6f8);
    lVar20 = *(long *)(lVar20 + 0x58);
    puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
    if (puVar13 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x1a0,0);
    }
    goto LAB_0de93d5a;
  }
  uStack_538 = CONCAT71(uStack_538._1_7_,(undefined1)uStack_6c8);
  uStack_548 = uStack_6d8;
  uStack_540 = uStack_6d0;
  uStack_558 = (undefined4)uStack_6e8;
  uStack_554 = uStack_6e8._4_4_;
  uStack_550 = uStack_6e0;
  uStack_54c = uStack_6dc;
  puStack_568 = puStack_6f8;
  uStack_560 = (undefined4)uStack_6f0;
  uStack_55c = uStack_6f0._4_4_;
  func_0x0df6e030(&puStack_988,puStack_6f8 + 0x18);
  if (uStack_970._4_4_ == 2) {
    piVar22 = *(int **)(plStack_978[0xf] + 0x60);
    iVar10 = *piVar22;
    while (iVar10 != (int)uStack_970) {
      piVar22 = piVar22 + 0x16;
      iVar10 = *piVar22;
    }
    plVar12 = *(long **)(piVar22 + 0xc);
    while (plVar12 != plStack_980) {
      piVar22 = *(int **)(piVar22 + 0xe);
      plVar12 = *(long **)(piVar22 + 0xc);
    }
LAB_0de93e4f:
    *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 4;
  }
  else {
    if (uStack_970._4_4_ == 1) {
      piVar22 = *(int **)(plStack_978[0xf] + 0x48);
      iVar10 = *piVar22;
      while (iVar10 != (int)uStack_970) {
        piVar22 = piVar22 + 0x1a;
        iVar10 = *piVar22;
      }
      goto LAB_0de93e4f;
    }
    if (uStack_970._4_4_ == 0) {
      *(uint *)(plStack_978 + 3) = *(uint *)(plStack_978 + 3) | 0x40000;
    }
  }
  func_0x0df6e650(&puStack_988,&puStack_568,&UNK_011ff877,0xd,0x10);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0f4a7340;
  if (uStack_970 != (long *)0x0) {
    lVar20 = *uStack_970;
    uStack_970 = plVar12;
    (**(code **)(lVar20 + 8))();
    plVar12 = uStack_970;
  }
  uStack_970 = plVar12;
  uStack_8a8 = (undefined *)CONCAT44(uStack_8a8._4_4_,plStack_978._0_4_);
  uStack_8a0 = 0;
  uStack_898 = uStack_898 & 0xffffffff00000000;
  uStack_890 = 1;
  uStack_888 = 0;
  uStack_880 = (long *)&UNK_0df6f4b0;
  plStack_878 = (long *)&SUB_048b06d0;
  uStack_870 = (long *)&UNK_0df5fa10;
  uStack_868 = (long *)&UNK_0df6f570;
  puStack_860 = &UNK_0df6f830;
  plStack_858 = (long *)((ulong)plStack_858 & 0xffffffff00000000);
  uStack_850 = 0;
  plStack_848 = (long *)0x0;
  func_0x048b05a0(plStack_980,&uStack_8a8);
  plVar12 = plStack_848;
  if (plStack_848 != (long *)0x0) {
    LOCK();
    plVar14 = plStack_848 + 1;
    lVar20 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_848 + 0x10))(plStack_848);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x0df6e910(&puStack_988);
  uStack_5d8 = CONCAT71(uStack_5d8._1_7_,(undefined1)uStack_538);
  uStack_5e8 = uStack_548;
  uStack_5e0 = uStack_540;
  uStack_5f8 = uStack_558;
  uStack_5f4 = uStack_554;
  uStack_5f0 = uStack_550;
  uStack_5ec = uStack_54c;
  puStack_608 = puStack_568;
  uStack_600 = uStack_560;
  uStack_5fc = uStack_55c;
  func_0x048b0bc0(&uStack_970);
  func_0x0df6e030(&puStack_988,puStack_608 + 0x18);
  if (uStack_970._4_4_ == 2) {
    piVar22 = *(int **)(plStack_978[0xf] + 0x60);
    iVar10 = *piVar22;
    while (iVar10 != (int)uStack_970) {
      piVar22 = piVar22 + 0x16;
      iVar10 = *piVar22;
    }
    plVar12 = *(long **)(piVar22 + 0xc);
    while (plVar12 != plStack_980) {
      piVar22 = *(int **)(piVar22 + 0xe);
      plVar12 = *(long **)(piVar22 + 0xc);
    }
LAB_0de940df:
    *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 4;
  }
  else {
    if (uStack_970._4_4_ == 1) {
      piVar22 = *(int **)(plStack_978[0xf] + 0x48);
      iVar10 = *piVar22;
      while (iVar10 != (int)uStack_970) {
        piVar22 = piVar22 + 0x1a;
        iVar10 = *piVar22;
      }
      goto LAB_0de940df;
    }
    if (uStack_970._4_4_ == 0) {
      *(uint *)(plStack_978 + 3) = *(uint *)(plStack_978 + 3) | 0x40000;
    }
  }
  func_0x0df6e650(&puStack_988,&puStack_608,&UNK_011bc44b,6,0x10);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0f4a73b8;
  if (uStack_970 != (long *)0x0) {
    lVar20 = *uStack_970;
    uStack_970 = plVar12;
    (**(code **)(lVar20 + 8))();
    plVar12 = uStack_970;
  }
  uStack_970 = plVar12;
  uStack_8a8 = (undefined *)CONCAT44(uStack_8a8._4_4_,plStack_978._0_4_);
  uStack_8a0 = 0;
  uStack_898 = uStack_898 & 0xffffffff00000000;
  uStack_890 = 1;
  uStack_888 = 0;
  uStack_880 = (long *)&UNK_0df70650;
  plStack_878 = (long *)&SUB_048b06d0;
  uStack_870 = (long *)&UNK_0df70300;
  uStack_868 = (long *)&UNK_0df70710;
  puStack_860 = &UNK_0df70a20;
  plStack_858 = (long *)((ulong)plStack_858 & 0xffffffff00000000);
  uStack_850 = 0;
  plStack_848 = (long *)0x0;
  func_0x048b05a0(plStack_980,&uStack_8a8);
  plVar12 = plStack_848;
  if (plStack_848 != (long *)0x0) {
    LOCK();
    plVar14 = plStack_848 + 1;
    lVar20 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_848 + 0x10))(plStack_848);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x0df6e910(&puStack_988);
  uStack_578 = CONCAT71(uStack_578._1_7_,(undefined1)uStack_5d8);
  uStack_588 = uStack_5e8;
  uStack_580 = uStack_5e0;
  uStack_598 = (long *)CONCAT44(uStack_5f4,uStack_5f8);
  uStack_590 = uStack_5f0;
  uStack_58c = uStack_5ec;
  puStack_5a8 = puStack_608;
  uStack_5a0 = (undefined *)CONCAT44(uStack_5fc,uStack_600);
  func_0x048b0bc0(&uStack_970);
  func_0x0df6e030(&puStack_988,puStack_5a8 + 0x18);
  if (uStack_970._4_4_ == 2) {
    piVar22 = *(int **)(plStack_978[0xf] + 0x60);
    iVar10 = *piVar22;
    while (iVar10 != (int)uStack_970) {
      piVar22 = piVar22 + 0x16;
      iVar10 = *piVar22;
    }
    plVar12 = *(long **)(piVar22 + 0xc);
    while (plVar12 != plStack_980) {
      piVar22 = *(int **)(piVar22 + 0xe);
      plVar12 = *(long **)(piVar22 + 0xc);
    }
  }
  else {
    if (uStack_970._4_4_ != 1) {
      if (uStack_970._4_4_ == 0) {
        *(uint *)(plStack_978 + 3) = *(uint *)(plStack_978 + 3) | 0x40000;
      }
      goto LAB_0de94373;
    }
    piVar22 = *(int **)(plStack_978[0xf] + 0x48);
    iVar10 = *piVar22;
    while (iVar10 != (int)uStack_970) {
      piVar22 = piVar22 + 0x1a;
      iVar10 = *piVar22;
    }
  }
  *(byte *)((long)piVar22 + 0x12) = *(byte *)((long)piVar22 + 0x12) | 4;
LAB_0de94373:
  func_0x0df6e650(&puStack_988,&puStack_5a8,&UNK_0124f693,6,0x10);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0f4a7430;
  if (uStack_970 != (long *)0x0) {
    lVar20 = *uStack_970;
    uStack_970 = plVar12;
    (**(code **)(lVar20 + 8))();
    plVar12 = uStack_970;
  }
  uStack_970 = plVar12;
  uStack_8a8 = (undefined *)CONCAT44(uStack_8a8._4_4_,plStack_978._0_4_);
  uStack_8a0 = 0;
  uStack_898 = uStack_898 & 0xffffffff00000000;
  uStack_890 = 1;
  uStack_888 = 0;
  uStack_880 = (long *)&UNK_0df718d0;
  plStack_878 = (long *)&SUB_048b06d0;
  uStack_870 = (long *)&UNK_0df715d0;
  uStack_868 = (long *)&UNK_0df71990;
  puStack_860 = &UNK_0df71cf0;
  plStack_858 = (long *)((ulong)plStack_858 & 0xffffffff00000000);
  uStack_850 = 0;
  plStack_848 = (long *)0x0;
  func_0x048b05a0(plStack_980,&uStack_8a8);
  plVar12 = plStack_848;
  if (plStack_848 != (long *)0x0) {
    LOCK();
    plVar14 = plStack_848 + 1;
    lVar20 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_848 + 0x10))(plStack_848);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x0df6e910(&puStack_988);
  plStack_708 = (long *)CONCAT71(plStack_708._1_7_,(undefined1)uStack_578);
  plStack_718 = (long *)uStack_588;
  plStack_710 = (long *)uStack_580;
  uStack_728 = uStack_598;
  uStack_720 = uStack_590;
  uStack_71c = uStack_58c;
  puStack_738 = puStack_5a8;
  uStack_730 = uStack_5a0;
  func_0x048b0bc0(&uStack_970);
  func_0x0df6e650(&puStack_988,&puStack_738,&UNK_0133a14a,0x15,0);
  puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar13 = &UNK_0f4a74a8;
  if (uStack_970 != (long *)0x0) {
    lVar20 = *uStack_970;
    uStack_970 = puVar13;
    (**(code **)(lVar20 + 8))();
    puVar13 = uStack_970;
  }
  uStack_970 = puVar13;
  uStack_8a8 = (undefined *)CONCAT44(uStack_8a8._4_4_,plStack_978._0_4_);
  uStack_8a0 = 0;
  uStack_898 = uStack_898 & 0xffffffff00000000;
  uStack_890 = 1;
  uStack_888 = 0;
  uStack_880 = (long *)&UNK_0df73420;
  plStack_878 = (long *)&SUB_048b06d0;
  uStack_870 = (long *)&UNK_0df73100;
  uStack_868 = (long *)&UNK_0df734e0;
  puStack_860 = &UNK_0df73790;
  plStack_858 = (long *)((ulong)plStack_858 & 0xffffffff00000000);
  uStack_850 = 0;
  plStack_848 = (long *)0x0;
  func_0x048b05a0(plStack_980,&uStack_8a8);
  plVar12 = plStack_848;
  if (plStack_848 != (long *)0x0) {
    LOCK();
    plVar14 = plStack_848 + 1;
    lVar20 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_848 + 0x10))(plStack_848);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x0df6e910(&puStack_988);
  plStack_758 = (long *)CONCAT71(plStack_758._1_7_,(char)plStack_708);
  uStack_768 = (ulong)plStack_718;
  uStack_760 = plStack_710;
  uStack_778 = uStack_728;
  uStack_770 = CONCAT44(uStack_71c,uStack_720);
  puStack_788 = puStack_738;
  uStack_780 = uStack_730;
  func_0x048b0bc0(&uStack_970);
  func_0x0debb800(&puStack_988,&puStack_788,2);
  puStack_1d0 = &UNK_0f497470;
  func_0x0db72800(auStack_1b0);
  puStack_308 = &UNK_0f4e3c70;
  if ((uStack_2a8 & 1) != 0) {
    func_0x0412a280(uStack_298,CONCAT44(uStack_2a4,uStack_2a8) & 0xfffffffffffffffe);
  }
  plVar12 = (long *)CONCAT44(uStack_2b4,uStack_2b8);
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar14 = plVar12 + 1;
    lVar20 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x04167a40(auStack_2e8);
  if ((bStack_528 & 1) != 0) {
    func_0x0412a280(uStack_518,
                    CONCAT17(uStack_521,CONCAT25(uStack_523,CONCAT41(uStack_527,bStack_528))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_7a8 & 1) == 0) {
    puStack_808 = &UNK_0f4e3c70;
    plVar12 = uStack_7b8;
  }
  else {
    puStack_808 = &UNK_0f4e3c70;
    func_0x0412a280(uStack_798,uStack_7a8 & 0xfffffffffffffffe);
    plVar12 = uStack_7b8;
  }
  uStack_7b8 = plVar12;
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar14 = plVar12 + 1;
    lVar20 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x04167a40(&uStack_7e8);
  puStack_288 = &UNK_0f4e3c70;
  if ((uStack_228 & 1) != 0) {
    func_0x0412a280(uStack_218,uStack_228 & 0xfffffffffffffffe);
  }
  plVar12 = (long *)CONCAT44(uStack_234,uStack_238);
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar14 = plVar12 + 1;
    lVar20 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x04167a40(auStack_268);
  if ((bStack_5c0 & 1) != 0) {
    func_0x0412a280(uStack_5b0,
                    CONCAT17(uStack_5b9,CONCAT61(uStack_5bf,bStack_5c0)) & 0xfffffffffffffffe);
  }
  if (((ulong)plStack_a08 & 1) == 0) {
    puStack_a68 = &UNK_0f4e3c70;
    plVar12 = uStack_a18;
  }
  else {
    puStack_a68 = &UNK_0f4e3c70;
    func_0x0412a280(uStack_9f8,(ulong)plStack_a08 & 0xfffffffffffffffe);
    plVar12 = uStack_a18;
  }
  uStack_a18 = plVar12;
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar14 = plVar12 + 1;
    lVar20 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x04167a40(&pcStack_a48);
  puStack_3c8 = &UNK_0f489570;
  if ((cStack_390 == '\x01') && ((bStack_3a8 & 1) != 0)) {
    func_0x0412a280(uStack_398,CONCAT71(uStack_3a7,bStack_3a8) & 0xfffffffffffffffe);
  }
  puStack_408 = &UNK_0f489570;
  if ((cStack_3d0 == '\x01') && ((uStack_3e8 & 1) != 0)) {
    func_0x0412a280(uStack_3d8,uStack_3e8 & 0xfffffffffffffffe);
  }
  return;
}


