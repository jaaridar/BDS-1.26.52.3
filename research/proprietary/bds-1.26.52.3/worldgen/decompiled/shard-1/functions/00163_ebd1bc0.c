/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xecd1bc0 (ELF vaddr 0xebd1bc0)
 * Label: caller-of-callee
 * Body:  [[0ecd1bc0, 0ecd2617] [0ecd2620, 0ecd2661] [0ecd2670, 0ecd2e27] [0ecd2e30, 0ecd2e71] [0ecd2e80, 0ecd48c7] [0ecd48d0, 0ecd4911] [0ecd4920, 0ecd6888]]
 * Ghidra: FUN_0ecd1bc0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ecd1bc0(long param_1)

{
  byte bVar1;
  uint *puVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  uint uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  ulong uVar12;
  int *piVar13;
  byte *pbVar14;
  long *plVar15;
  code *pcVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long lVar24;
  uint *puVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  long *plStack_988;
  long *plStack_980;
  code *pcStack_978;
  undefined1 auStack_970 [4];
  int iStack_96c;
  ulong uStack_968;
  undefined1 auStack_960 [16];
  undefined1 auStack_950 [16];
  undefined1 auStack_940 [16];
  undefined1 auStack_930 [16];
  undefined1 auStack_920 [16];
  long lStack_910;
  long *plStack_908;
  long *plStack_900;
  code *pcStack_8f8;
  undefined1 auStack_8f0 [8];
  code *pcStack_8e8;
  int iStack_8e0;
  uint uStack_8dc;
  undefined4 uStack_8d8;
  uint uStack_8d4;
  uint uStack_8d0;
  undefined4 uStack_8cc;
  undefined *puStack_8c8;
  undefined1 auStack_8c0 [16];
  undefined1 auStack_8b0 [16];
  undefined1 auStack_8a0 [16];
  long lStack_890;
  long *plStack_888;
  long *plStack_880;
  long *plStack_878;
  undefined1 auStack_870 [8];
  code *pcStack_868;
  int iStack_860;
  uint uStack_85c;
  undefined4 uStack_858;
  uint uStack_854;
  uint uStack_850;
  undefined4 uStack_84c;
  undefined4 uStack_848;
  undefined4 uStack_844;
  undefined1 auStack_840 [16];
  undefined8 uStack_830;
  byte bStack_828;
  undefined7 uStack_827;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined1 auStack_808 [16];
  undefined8 uStack_7f8;
  code *pcStack_7f0;
  code *pcStack_7e8;
  undefined8 uStack_7e0;
  undefined *puStack_7d8;
  long lStack_7d0;
  undefined8 uStack_7c8;
  undefined1 auStack_7c0 [16];
  long lStack_7b0;
  undefined1 auStack_7a8 [16];
  long lStack_798;
  long lStack_790;
  long *plStack_738;
  long *plStack_730;
  long *plStack_728;
  code *pcStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  long *plStack_6f8;
  long *plStack_6f0;
  long *plStack_6e8;
  code *pcStack_6e0;
  code *pcStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  byte bStack_6c0;
  undefined6 uStack_6bf;
  undefined1 uStack_6b9;
  undefined1 uStack_6b8;
  undefined6 uStack_6b7;
  undefined1 uStack_6b1;
  undefined8 uStack_6b0;
  long *plStack_6a8;
  long *plStack_6a0;
  long *plStack_698;
  code *pcStack_690;
  code *pcStack_688;
  long *plStack_680;
  long *plStack_678;
  undefined *puStack_670;
  undefined *puStack_668;
  undefined *puStack_660;
  undefined4 uStack_658;
  undefined1 auStack_650 [24];
  long *plStack_638;
  long *plStack_630;
  long *plStack_628;
  code *pcStack_620;
  code *pcStack_618;
  long *plStack_610;
  undefined1 uStack_608;
  undefined7 uStack_607;
  byte bStack_5f8;
  undefined4 uStack_5f7;
  undefined2 uStack_5f3;
  undefined1 uStack_5f1;
  undefined8 uStack_5e8;
  byte bStack_5e0;
  undefined4 uStack_5df;
  undefined2 uStack_5db;
  undefined1 uStack_5d9;
  undefined8 uStack_5d0;
  long *plStack_5c8;
  long *plStack_5c0;
  long *plStack_5b8;
  code *pcStack_5b0;
  code *pcStack_5a8;
  long *plStack_5a0;
  undefined8 uStack_598;
  long *plStack_588;
  long *plStack_580;
  long *plStack_578;
  code *pcStack_570;
  code *pcStack_568;
  long *plStack_560;
  undefined8 uStack_558;
  undefined8 uStack_548;
  long *plStack_540;
  long *plStack_538;
  code *pcStack_530;
  code *pcStack_528;
  long *plStack_520;
  undefined8 uStack_518;
  undefined *puStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined1 uStack_4f0;
  ulong uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  char cStack_4d0;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined1 uStack_4b0;
  byte bStack_4a8;
  undefined7 uStack_4a7;
  undefined8 uStack_498;
  char cStack_490;
  long *plStack_488;
  long *plStack_480;
  long *plStack_478;
  code *pcStack_470;
  code *pcStack_468;
  long *plStack_460;
  undefined1 uStack_458;
  undefined *puStack_448;
  long *plStack_440;
  long lStack_438;
  undefined1 uStack_430;
  undefined1 auStack_428 [8];
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  undefined1 auStack_400 [16];
  long lStack_3f0;
  undefined1 auStack_3e8 [16];
  long lStack_3d8;
  long lStack_3d0;
  long *plStack_3c8;
  long *plStack_3c0;
  long *plStack_3b8;
  code *pcStack_3b0;
  code *pcStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  long *plStack_388;
  long *plStack_380;
  long *plStack_378;
  code *pcStack_370;
  code *pcStack_368;
  long *plStack_360;
  undefined1 uStack_358;
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  code *pcStack_330;
  code *pcStack_328;
  long *plStack_320;
  undefined1 uStack_318;
  undefined7 uStack_317;
  undefined *puStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined1 uStack_2f0;
  undefined1 auStack_2e8 [8];
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long *plStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 uStack_270;
  undefined1 auStack_268 [8];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long *plStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f8;
  code *pcStack_1f0;
  code *pcStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined1 auStack_1b0 [384];
  
  if ((DAT_0f773cb8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f773cb8), iVar9 != 0)) {
    func_0x0ed373c0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f773c38,0xf53dab8);
    func_0x0410844d(&DAT_0f773cb8);
  }
  plVar15 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f773c38 + 4)) * 8);
  do {
    lVar24 = *plVar15;
    if (lVar24 == -1) goto LAB_0ecd1c30;
    plVar15 = (long *)(*(long *)(param_1 + 0x30) + lVar24 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f773c38 + 4))
  ;
  if (plVar15 == *(long **)(param_1 + 0x38)) {
LAB_0ecd1c30:
    puVar11 = &DAT_0f773c38;
    if (iRam000000000f773c98 != -0x2b3da790) goto LAB_0ecd1c88;
LAB_0ecd1c5b:
    lVar24 = *(long *)(puVar11 + 0x68);
    if (lVar24 == 0) goto LAB_0ecd1c88;
    bVar26 = (*(byte *)(lVar24 + 8) & 1) != 0;
    puVar11 = (undefined *)(lVar24 + 9);
    if (bVar26) {
      puVar11 = *(undefined **)(lVar24 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar24 + 8) >> 1);
    if (bVar26) {
      uVar12 = *(ulong *)(lVar24 + 0x10);
    }
  }
  else {
    puVar11 = (undefined *)plVar15[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0ecd1c5b;
LAB_0ecd1c88:
    puVar11 = &UNK_011d0047;
    uVar12 = 0x1a;
  }
  func_0x0ed37800(&plStack_888,param_1,puVar11,uVar12);
  uStack_854 = uStack_854 & 0xffffff00;
  uStack_850 = uStack_850 & 0xffffff00;
  if ((char)uStack_858 == '\0') {
    func_0x0ed3b080(auStack_808,&UNK_012edbc5);
    puVar11 = (undefined *)((ulong)uStack_7e0 >> 1 & 0x7f);
    lVar24 = (long)&uStack_7e0 + 1;
    if (((ulong)uStack_7e0 & 1) != 0) {
      puVar11 = puStack_7d8;
      lVar24 = lStack_7d0;
    }
    if (puVar11 == (undefined *)0x0) {
      uStack_85c = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)puVar11 & 3);
      if (puVar11 < 4) {
        uStack_85c = 0x811c9dc5;
        uVar22 = 0;
      }
      else {
        uStack_85c = 0x811c9dc5;
        uVar22 = 0;
        do {
          uStack_85c = ((int)*(char *)(lVar24 + 3 + uVar22) ^
                       ((int)*(char *)(lVar24 + 2 + uVar22) ^
                       ((int)*(char *)(lVar24 + 1 + uVar22) ^
                       ((int)*(char *)(lVar24 + uVar22) ^ uStack_85c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar22 = uVar22 + 4;
        } while (((ulong)puVar11 & 0xfffffffffffffffc) != uVar22);
      }
      if (uVar12 != 0) {
        uVar21 = 0;
        do {
          uStack_85c = ((int)*(char *)(lVar24 + uVar22 + uVar21) ^ uStack_85c) * 0x1000193;
          uVar21 = uVar21 + 1;
        } while (uVar12 != uVar21);
      }
    }
    iStack_860 = 2;
    if ((DAT_0f773cd8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f773cd8), iVar9 != 0)) {
      func_0x0ed374d0();
      func_0x0410844d(&DAT_0f773cd8);
    }
    plStack_988 = (long *)CONCAT44(plStack_988._4_4_,uStack_85c);
    plStack_980 = (long *)0x0;
    pcStack_978 = (code *)CONCAT44(pcStack_978._4_4_,3);
    _auStack_970 = ZEXT816(1);
    auStack_960._8_8_ = &SUB_048b06d0;
    auStack_960._0_8_ = &UNK_0ed3b6c0;
    auStack_950._8_8_ = &UNK_0ed3b780;
    auStack_950._0_8_ = &UNK_0ed37300;
    auStack_940._0_12_ = ZEXT812(0xed3b790);
    auStack_930 = ZEXT816(0);
    func_0x048b05a0(&plStack_880,&plStack_988);
    uVar17 = auStack_930._8_8_;
    if ((long *)auStack_930._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_930._8_8_ + 8);
      lVar24 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*(long *)auStack_930._8_8_ + 0x10))(auStack_930._8_8_);
        func_0x0412c2d0(uVar17);
      }
    }
    pcStack_8f8 = (code *)auStack_870;
    auStack_8f0 = (undefined1  [8])pcStack_868;
    plStack_908 = plStack_880;
    plStack_900 = plStack_878;
    func_0x0ed3b450(&plStack_988,&plStack_908,auStack_808);
    if (iStack_96c == 2) {
      piVar13 = *(int **)(*(long *)((long)pcStack_978 + 0x78) + 0x60);
      iVar9 = *piVar13;
      while ((undefined1  [4])iVar9 != auStack_970) {
        piVar13 = piVar13 + 0x16;
        iVar9 = *piVar13;
      }
      lVar24 = *(long *)(piVar13 + 0xc);
      while ((long *)lVar24 != plStack_980) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar24 = *(long *)(piVar13 + 0xc);
      }
LAB_0ecd1f0f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (iStack_96c == 1) {
        piVar13 = *(int **)(*(long *)((long)pcStack_978 + 0x78) + 0x48);
        iVar9 = *piVar13;
        while ((undefined1  [4])iVar9 != auStack_970) {
          piVar13 = piVar13 + 0x1a;
          iVar9 = *piVar13;
        }
        goto LAB_0ecd1f0f;
      }
      if (iStack_96c == 0) {
        *(uint *)((long)pcStack_978 + 0x18) = *(uint *)((long)pcStack_978 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_850 == '\0') {
      func_0x0ed3b7e0(&plStack_988,&plStack_888);
    }
    uVar6 = uStack_854;
    plVar15 = plStack_888;
    if ((DAT_0f773cb8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f773cb8), iVar9 != 0)) {
      func_0x0ed373c0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f773c38,0xf53dab8);
      func_0x0410844d(&DAT_0f773cb8);
    }
    plVar18 = (long *)(plVar15[3] +
                      (ulong)((int)((ulong)(plVar15[4] - plVar15[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f773c38 + 4)) * 8);
    do {
      lVar24 = *plVar18;
      if (lVar24 == -1) goto LAB_0ecd1fa0;
      plVar18 = (long *)(plVar15[6] + lVar24 * 0x18);
    } while (*(uint *)(plVar15[6] + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f773c38 + 4));
    if (plVar18 == (long *)plVar15[7]) {
LAB_0ecd1fa0:
      puVar11 = &DAT_0f773c38;
    }
    else {
      puVar11 = (undefined *)plVar18[2];
    }
    puVar2 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (puVar25 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x20);
        (puVar25 != puVar2 && (*puVar25 != uVar6)); puVar25 = puVar25 + 0xe) {
    }
    if ((puVar25 == puVar2) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014aaa22),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_988 = (long *)((ulong)plStack_988 & 0xffffffffffffff00);
    func_0x05d9c620(puVar25 + 2,&uStack_85c,&uStack_85c,&plStack_988);
    plStack_908 = plStack_888;
    plStack_900 = plStack_880;
    pcStack_8f8 = (code *)plStack_878;
    _auStack_8f0 = _auStack_870;
    iStack_8e0 = iStack_860;
    uStack_8dc = uStack_85c;
    uStack_8d8 = uStack_858;
    uStack_8d4 = uStack_854;
    uStack_8d0 = uStack_850;
    func_0x048b0bc0(auStack_808);
    func_0x0ed3b080(auStack_808);
    puVar11 = (undefined *)((ulong)uStack_7e0 >> 1 & 0x7f);
    lVar24 = (long)&uStack_7e0 + 1;
    if (((ulong)uStack_7e0 & 1) != 0) {
      puVar11 = puStack_7d8;
      lVar24 = lStack_7d0;
    }
    if (puVar11 == (undefined *)0x0) {
      uStack_8dc = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)puVar11 & 3);
      if (puVar11 < 4) {
        uStack_8dc = 0x811c9dc5;
        uVar22 = 0;
      }
      else {
        uStack_8dc = 0x811c9dc5;
        uVar22 = 0;
        do {
          uStack_8dc = ((int)*(char *)(lVar24 + 3 + uVar22) ^
                       ((int)*(char *)(lVar24 + 2 + uVar22) ^
                       ((int)*(char *)(lVar24 + 1 + uVar22) ^
                       ((int)*(char *)(lVar24 + uVar22) ^ uStack_8dc) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar22 = uVar22 + 4;
        } while (((ulong)puVar11 & 0xfffffffffffffffc) != uVar22);
      }
      if (uVar12 != 0) {
        uVar21 = 0;
        do {
          uStack_8dc = ((int)*(char *)(lVar24 + uVar22 + uVar21) ^ uStack_8dc) * 0x1000193;
          uVar21 = uVar21 + 1;
        } while (uVar12 != uVar21);
      }
    }
    iStack_8e0 = 2;
    if ((DAT_0f773cd8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f773cd8), iVar9 != 0)) {
      func_0x0ed374d0();
      func_0x0410844d(&DAT_0f773cd8);
    }
    plStack_988 = (long *)CONCAT44(plStack_988._4_4_,uStack_8dc);
    plStack_980 = (long *)0x0;
    pcStack_978 = (code *)CONCAT44(pcStack_978._4_4_,3);
    _auStack_970 = ZEXT816(1);
    auStack_960._8_8_ = &SUB_048b06d0;
    auStack_960._0_8_ = &UNK_0ed3b6c0;
    auStack_950._8_8_ = &UNK_0ed3b9a0;
    auStack_950._0_8_ = &UNK_0ed37300;
    auStack_940._0_12_ = ZEXT812(0xed3b9b0);
    auStack_930 = ZEXT816(0);
    func_0x048b05a0(&plStack_900,&plStack_988);
    uVar17 = auStack_930._8_8_;
    if ((long *)auStack_930._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_930._8_8_ + 8);
      lVar24 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*(long *)auStack_930._8_8_ + 0x10))(auStack_930._8_8_);
        func_0x0412c2d0(uVar17);
      }
    }
    plStack_698 = (long *)auStack_8f0;
    pcStack_690 = pcStack_8e8;
    plStack_6a8 = plStack_900;
    plStack_6a0 = (long *)pcStack_8f8;
    func_0x0ed3b450(&plStack_988,&plStack_6a8,auStack_808);
    if (iStack_96c == 2) {
      piVar13 = *(int **)(*(long *)(pcStack_978 + 0x78) + 0x60);
      iVar9 = *piVar13;
      while ((undefined1  [4])iVar9 != auStack_970) {
        piVar13 = piVar13 + 0x16;
        iVar9 = *piVar13;
      }
      lVar24 = *(long *)(piVar13 + 0xc);
      while ((long *)lVar24 != plStack_980) {
        piVar13 = *(int **)(piVar13 + 0xe);
        lVar24 = *(long *)(piVar13 + 0xc);
      }
LAB_0ecd230f:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 9;
    }
    else {
      if (iStack_96c == 1) {
        piVar13 = *(int **)(*(long *)(pcStack_978 + 0x78) + 0x48);
        iVar9 = *piVar13;
        while ((undefined1  [4])iVar9 != auStack_970) {
          piVar13 = piVar13 + 0x1a;
          iVar9 = *piVar13;
        }
        goto LAB_0ecd230f;
      }
      if (iStack_96c == 0) {
        *(uint *)(pcStack_978 + 0x18) = *(uint *)(pcStack_978 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_8d0 == '\0') {
      func_0x0ed3b7e0(&plStack_988,&plStack_908);
    }
    uVar6 = uStack_8d4;
    plVar15 = plStack_908;
    if ((DAT_0f773cb8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f773cb8), iVar9 != 0)) {
      func_0x0ed373c0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f773c38,0xf53dab8);
      func_0x0410844d(&DAT_0f773cb8);
    }
    plVar18 = (long *)(plVar15[3] +
                      (ulong)((int)((ulong)(plVar15[4] - plVar15[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f773c38 + 4)) * 8);
    do {
      lVar24 = *plVar18;
      if (lVar24 == -1) goto LAB_0ecd23a0;
      plVar18 = (long *)(plVar15[6] + lVar24 * 0x18);
    } while (*(uint *)(plVar15[6] + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f773c38 + 4));
    if (plVar18 == (long *)plVar15[7]) {
LAB_0ecd23a0:
      puVar11 = &DAT_0f773c38;
    }
    else {
      puVar11 = (undefined *)plVar18[2];
    }
    puVar2 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x28);
    for (puVar25 = *(uint **)(*(long *)(puVar11 + 0x68) + 0x20);
        (puVar25 != puVar2 && (*puVar25 != uVar6)); puVar25 = puVar25 + 0xe) {
    }
    if ((puVar25 == puVar2) &&
       (cVar8 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014aaa22),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    plStack_988 = (long *)((ulong)plStack_988 & 0xffffffffffffff00);
    func_0x05d9c620(puVar25 + 2,&uStack_8dc,&uStack_8dc,&plStack_988);
    func_0x048b0bc0(auStack_808);
  }
  if ((DAT_0f773d70 == '\0') && (iVar9 = func_0x04108328(&DAT_0f773d70), iVar9 != 0)) {
    func_0x0ed3bac0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f773cf0,0xf53dab8);
    func_0x0410844d(&DAT_0f773d70);
  }
  plVar15 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f773cf0 + 4)) * 8);
  do {
    lVar24 = *plVar15;
    if (lVar24 == -1) goto LAB_0ecd24a0;
    plVar15 = (long *)(*(long *)(param_1 + 0x30) + lVar24 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f773cf0 + 4))
  ;
  if (plVar15 == *(long **)(param_1 + 0x38)) {
LAB_0ecd24a0:
    puVar11 = &DAT_0f773cf0;
    if (iRam000000000f773d50 != -0x2b3da790) goto LAB_0ecd250d;
LAB_0ecd24cb:
    lVar24 = *(long *)(puVar11 + 0x68);
    if (lVar24 == 0) goto LAB_0ecd250d;
    bVar26 = (*(byte *)(lVar24 + 8) & 1) != 0;
    lVar19 = lVar24 + 9;
    if (bVar26) {
      lVar19 = *(long *)(lVar24 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar24 + 8) >> 1);
    if (bVar26) {
      uVar12 = *(ulong *)(lVar24 + 0x10);
    }
    func_0x0ed3bef0(&plStack_888,param_1,lVar19,uVar12);
    plVar15 = plStack_888;
  }
  else {
    puVar11 = (undefined *)plVar15[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0ecd24cb;
LAB_0ecd250d:
    func_0x0ed3bef0(&plStack_888,param_1,&UNK_014e0249,0x1a);
    plVar15 = plStack_888;
  }
  plStack_888 = plVar15;
  if ((char)uStack_858 == '\0') {
    if ((DAT_0f773d70 == '\0') && (iVar9 = func_0x04108328(&DAT_0f773d70), iVar9 != 0)) {
      func_0x0ed3bac0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f773cf0,0xf53dab8);
      func_0x0410844d(&DAT_0f773d70);
    }
    plVar18 = (long *)(plVar15[3] +
                      (ulong)((int)((ulong)(plVar15[4] - plVar15[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f773cf0 + 4)) * 8);
    do {
      lVar24 = *plVar18;
      if (lVar24 == -1) goto LAB_0ecd25a0;
      plVar18 = (long *)(plVar15[6] + lVar24 * 0x18);
    } while (*(uint *)(plVar15[6] + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f773cf0 + 4));
    if (plVar18 == (long *)plVar15[7]) {
LAB_0ecd25a0:
      puVar11 = &DAT_0f773cf0;
    }
    else {
      puVar11 = (undefined *)plVar18[2];
    }
    for (pbVar14 = (byte *)plStack_888[10]; pbVar14 != (byte *)plStack_888[0xb];
        pbVar14 = pbVar14 + 0x38) {
      bVar1 = *pbVar14;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0x1a) goto LAB_0ecd267a;
      }
      else if (*(long *)(pbVar14 + 8) == 0x1a) {
LAB_0ecd267a:
        if ((bVar1 & 1) == 0) {
          pbVar20 = pbVar14 + 1;
        }
        else {
          pbVar20 = *(byte **)(pbVar14 + 0x10);
        }
        auVar27[0] = -(*pbVar20 == 0x5b);
        auVar27[1] = -(pbVar20[1] == 99);
        auVar27[2] = -(pbVar20[2] == 0x65);
        auVar27[3] = -(pbVar20[3] == 0x72);
        auVar27[4] = -(pbVar20[4] == 0x65);
        auVar27[5] = -(pbVar20[5] == 0x61);
        auVar27[6] = -(pbVar20[6] == 0x6c);
        auVar27[7] = -(pbVar20[7] == 0x3a);
        auVar27[8] = -(pbVar20[8] == 100);
        auVar27[9] = -(pbVar20[9] == 0x6f);
        auVar27[10] = -(pbVar20[10] == 99);
        auVar27[0xb] = -(pbVar20[0xb] == 0x75);
        auVar27[0xc] = -(pbVar20[0xc] == 0x6d);
        auVar27[0xd] = -(pbVar20[0xd] == 0x65);
        auVar27[0xe] = -(pbVar20[0xe] == 0x6e);
        auVar27[0xf] = -(pbVar20[0xf] == 0x74);
        auVar30[0] = -(pbVar20[10] == 99);
        auVar30[1] = -(pbVar20[0xb] == 0x75);
        auVar30[2] = -(pbVar20[0xc] == 0x6d);
        auVar30[3] = -(pbVar20[0xd] == 0x65);
        auVar30[4] = -(pbVar20[0xe] == 0x6e);
        auVar30[5] = -(pbVar20[0xf] == 0x74);
        auVar30[6] = -(pbVar20[0x10] == 0x61);
        auVar30[7] = -(pbVar20[0x11] == 0x74);
        auVar30[8] = -(pbVar20[0x12] == 0x69);
        auVar30[9] = -(pbVar20[0x13] == 0x6f);
        auVar30[10] = -(pbVar20[0x14] == 0x6e);
        auVar30[0xb] = -(pbVar20[0x15] == 0x5f);
        auVar30[0xc] = -(pbVar20[0x16] == 0x74);
        auVar30[0xd] = -(pbVar20[0x17] == 0x61);
        auVar30[0xe] = -(pbVar20[0x18] == 0x67);
        auVar30[0xf] = -(pbVar20[0x19] == 0x5d);
        auVar30 = auVar30 & auVar27;
        if ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar14 == (byte *)plStack_888[0xb]) {
LAB_0ecd26a8:
      uVar6 = uStack_85c;
      if (iStack_860 == 0) {
        if (((puVar11 == (undefined *)0x0) || (*(int *)(puVar11 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar11 + 0x68) == 0)) goto LAB_0ecd273b;
        lVar24 = *(long *)(puVar11 + 0x68) + 0x38;
      }
      else {
        if (puVar11 == (undefined *)0x0) {
          puVar11 = (undefined *)FUN_048aead0(plVar15 + 3,0,uStack_85c);
        }
        auStack_808._0_8_ = func_0x048b0c90(plVar15 + 3,puVar11,uVar6,1);
        if (auStack_808._0_8_ == 0) {
          auStack_808 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_808);
          if (auStack_808._0_8_ == 0) goto LAB_0ecd273b;
        }
        if ((*(int *)(auStack_808._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_808._0_8_ + 0x58) != 0)) {
          lVar24 = *(long *)(auStack_808._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0ecd273b:
          lVar24 = 0;
        }
      }
      auVar27 = _auStack_970;
      pcStack_978 = (code *)&UNK_0488e0b0;
      uStack_968._0_4_ = 0x48b5725f;
      auVar3._8_4_ = 0;
      auVar3._0_8_ = uStack_968;
      _auStack_970 = auVar3 << 0x40;
      uStack_968._5_3_ = auVar27._13_3_;
      uStack_968._4_1_ = 0;
      plStack_988 = (long *)0x0;
      auStack_808 = (undefined1  [16])0x0;
      pcStack_7f0 = (code *)&UNK_0488e0b0;
      pcStack_7e8 = (code *)0x0;
      uStack_7e0 = (undefined *)CONCAT35(uStack_7e0._5_3_,0x48b5725f);
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plVar15 == (long *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar17 = _UNK_013bbadf;
      plStack_908 = (long *)0x21;
      plStack_900 = (long *)0x1a;
      *(ulong *)((long)plVar15 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)plVar15 + 0x12) = uVar17;
      lVar19 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *plVar15 = _DAT_013bbacd;
      plVar15[1] = lVar19;
      *(undefined1 *)((long)plVar15 + 0x1a) = 0;
      pcStack_8f8 = (code *)plVar15;
      lVar24 = func_0x048b5060(lVar24,&plStack_908);
      *(undefined8 *)(lVar24 + 0x20) = 0;
      if ((undefined1 *)(lVar24 + 0x20) == auStack_808) {
        pcVar16 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar24 + 0x40) != (code *)0x0) {
          puVar23 = (undefined8 *)(lVar24 + 0x28);
          (**(code **)(lVar24 + 0x40))(puVar23);
          if (uStack_7e0._4_1_ != '\0') {
            if (uStack_7e0._4_1_ == '\x02') {
              (*pcStack_7f0)(5,auStack_808 + 8,puVar23);
            }
            else {
              uVar17 = auStack_808._8_8_;
              auStack_808._8_8_ = 0;
              *puVar23 = uVar17;
            }
          }
        }
        *(code **)(lVar24 + 0x38) = pcStack_7f0;
        *(code **)(lVar24 + 0x40) = pcStack_7e8;
        *(undefined4 *)(lVar24 + 0x48) = (undefined4)uStack_7e0;
        *(char *)(lVar24 + 0x4c) = uStack_7e0._4_1_;
        pcVar16 = pcStack_7e8;
      }
      if (((ulong)plStack_908 & 1) != 0) {
        func_0x0412a280(pcStack_8f8,(ulong)plStack_908 & 0xfffffffffffffffe);
        pcVar16 = pcStack_7e8;
      }
      if (pcVar16 != (code *)0x0) {
        (*pcVar16)(auStack_808 + 8);
      }
      if (_auStack_970 != (code *)0x0) {
        (*_auStack_970)(&plStack_988);
      }
    }
    else {
      iVar9 = *(int *)(pbVar14 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550ad8), iVar10 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar9 == _DAT_0f550ac4) goto LAB_0ecd26a8;
    }
    plStack_678 = (long *)CONCAT44(uStack_854,uStack_858);
    plStack_680 = (long *)CONCAT44(uStack_85c,iStack_860);
    pcStack_688 = pcStack_868;
    plStack_698 = plStack_878;
    pcStack_690 = (code *)auStack_870;
    plStack_6a8 = plStack_888;
    plStack_6a0 = plStack_880;
    func_0x0ed3ca00(auStack_808,&plStack_6a8,&UNK_01493f37,4);
    pcVar16 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar16 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar16 = &UNK_0f4e2440;
    if (pcStack_7f0 != (code *)0x0) {
      lVar24 = *(long *)pcStack_7f0;
      pcStack_7f0 = pcVar16;
      (**(code **)(lVar24 + 8))();
      pcVar16 = pcStack_7f0;
    }
    pcStack_7f0 = pcVar16;
    plStack_988 = (long *)CONCAT44(plStack_988._4_4_,(undefined4)uStack_7f8);
    plStack_980 = (long *)0x0;
    pcStack_978 = (code *)((ulong)pcStack_978 & 0xffffffff00000000);
    _auStack_970 = ZEXT816(1);
    auStack_960._8_8_ = &SUB_048b06d0;
    auStack_960._0_8_ = &UNK_0ed3b6c0;
    auStack_950._8_8_ = &UNK_0ed3cfa0;
    auStack_950._0_8_ = &UNK_0ed37300;
    auStack_940._0_12_ = ZEXT812(0xed3d100);
    auStack_930 = ZEXT816(0);
    func_0x048b05a0(auStack_808._8_8_,&plStack_988);
    uVar17 = auStack_930._8_8_;
    if ((long *)auStack_930._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_930._8_8_ + 8);
      lVar24 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*(long *)auStack_930._8_8_ + 0x10))(auStack_930._8_8_);
        func_0x0412c2d0(uVar17);
      }
    }
    func_0x0ed3cca0(auStack_808);
    uStack_8d8 = CONCAT31(uStack_8d8._1_3_,plStack_678._0_1_);
    iStack_8e0 = (int)plStack_680;
    uStack_8dc = (uint)((ulong)plStack_680 >> 0x20);
    pcStack_8f8 = (code *)plStack_698;
    pcStack_8e8 = pcStack_688;
    auStack_8f0 = (undefined1  [8])pcStack_690;
    plStack_908 = plStack_6a8;
    plStack_900 = plStack_6a0;
    func_0x048b0bc0(&pcStack_7f0);
    func_0x0ed3ca00(auStack_808,&plStack_908,&UNK_012a1e75,7);
    pcVar16 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar16 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar16 = &UNK_0f0126a0;
    if (pcStack_7f0 != (code *)0x0) {
      lVar24 = *(long *)pcStack_7f0;
      pcStack_7f0 = pcVar16;
      (**(code **)(lVar24 + 8))();
      pcVar16 = pcStack_7f0;
    }
    pcStack_7f0 = pcVar16;
    plStack_988 = (long *)CONCAT44(plStack_988._4_4_,(undefined4)uStack_7f8);
    plStack_980 = (long *)0x0;
    pcStack_978 = (code *)((ulong)pcStack_978 & 0xffffffff00000000);
    _auStack_970 = ZEXT816(1);
    auStack_960._8_8_ = &SUB_048b06d0;
    auStack_960._0_8_ = &UNK_05daeda0;
    auStack_950._8_8_ = &UNK_0ed3d560;
    auStack_950._0_8_ = &UNK_05daea90;
    auStack_940._0_12_ = ZEXT812(0xed3d6c0);
    auStack_930 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_808._8_8_,&plStack_988);
    uVar17 = auStack_930._8_8_;
    if ((long *)auStack_930._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_930._8_8_ + 8);
      lVar24 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*(long *)auStack_930._8_8_ + 0x10))(auStack_930._8_8_);
        func_0x0412c2d0(uVar17);
      }
    }
    func_0x0ed3cca0(auStack_808);
    func_0x048b0bc0(&pcStack_7f0);
  }
  if ((DAT_0f773e28 == '\0') && (iVar9 = func_0x04108328(&DAT_0f773e28), iVar9 != 0)) {
    func_0x0ed3d960();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f773da8,0xf53dab8);
    func_0x0410844d(&DAT_0f773e28);
  }
  plVar15 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f773da8 + 4)) * 8);
  do {
    lVar24 = *plVar15;
    if (lVar24 == -1) goto LAB_0ecd2cb0;
    plVar15 = (long *)(*(long *)(param_1 + 0x30) + lVar24 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f773da8 + 4))
  ;
  if (plVar15 == *(long **)(param_1 + 0x38)) {
LAB_0ecd2cb0:
    puVar11 = &DAT_0f773da8;
    if (iRam000000000f773e08 != -0x2b3da790) goto LAB_0ecd2d1d;
LAB_0ecd2cdb:
    lVar24 = *(long *)(puVar11 + 0x68);
    if (lVar24 == 0) goto LAB_0ecd2d1d;
    bVar26 = (*(byte *)(lVar24 + 8) & 1) != 0;
    lVar19 = lVar24 + 9;
    if (bVar26) {
      lVar19 = *(long *)(lVar24 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar24 + 8) >> 1);
    if (bVar26) {
      uVar12 = *(ulong *)(lVar24 + 0x10);
    }
    func_0x0ed3dfe0(&plStack_888,param_1,lVar19,uVar12);
    plVar15 = plStack_888;
  }
  else {
    puVar11 = (undefined *)plVar15[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0ecd2cdb;
LAB_0ecd2d1d:
    func_0x0ed3dfe0(&plStack_888,param_1,&UNK_01238e2b,0x17);
    plVar15 = plStack_888;
  }
  plStack_888 = plVar15;
  if ((char)uStack_858 == '\0') {
    if ((DAT_0f773e28 == '\0') && (iVar9 = func_0x04108328(&DAT_0f773e28), iVar9 != 0)) {
      func_0x0ed3d960();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f773da8,0xf53dab8);
      func_0x0410844d(&DAT_0f773e28);
    }
    plVar18 = (long *)(plVar15[3] +
                      (ulong)((int)((ulong)(plVar15[4] - plVar15[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f773da8 + 4)) * 8);
    do {
      lVar24 = *plVar18;
      if (lVar24 == -1) goto LAB_0ecd2db0;
      plVar18 = (long *)(plVar15[6] + lVar24 * 0x18);
    } while (*(uint *)(plVar15[6] + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f773da8 + 4));
    if (plVar18 == (long *)plVar15[7]) {
LAB_0ecd2db0:
      puVar11 = &DAT_0f773da8;
    }
    else {
      puVar11 = (undefined *)plVar18[2];
    }
    for (pbVar14 = (byte *)plStack_888[10]; pbVar14 != (byte *)plStack_888[0xb];
        pbVar14 = pbVar14 + 0x38) {
      bVar1 = *pbVar14;
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 == 0x1a) goto LAB_0ecd2e8a;
      }
      else if (*(long *)(pbVar14 + 8) == 0x1a) {
LAB_0ecd2e8a:
        if ((bVar1 & 1) == 0) {
          pbVar20 = pbVar14 + 1;
        }
        else {
          pbVar20 = *(byte **)(pbVar14 + 0x10);
        }
        auVar28[0] = -(*pbVar20 == 0x5b);
        auVar28[1] = -(pbVar20[1] == 99);
        auVar28[2] = -(pbVar20[2] == 0x65);
        auVar28[3] = -(pbVar20[3] == 0x72);
        auVar28[4] = -(pbVar20[4] == 0x65);
        auVar28[5] = -(pbVar20[5] == 0x61);
        auVar28[6] = -(pbVar20[6] == 0x6c);
        auVar28[7] = -(pbVar20[7] == 0x3a);
        auVar28[8] = -(pbVar20[8] == 100);
        auVar28[9] = -(pbVar20[9] == 0x6f);
        auVar28[10] = -(pbVar20[10] == 99);
        auVar28[0xb] = -(pbVar20[0xb] == 0x75);
        auVar28[0xc] = -(pbVar20[0xc] == 0x6d);
        auVar28[0xd] = -(pbVar20[0xd] == 0x65);
        auVar28[0xe] = -(pbVar20[0xe] == 0x6e);
        auVar28[0xf] = -(pbVar20[0xf] == 0x74);
        auVar31[0] = -(pbVar20[10] == 99);
        auVar31[1] = -(pbVar20[0xb] == 0x75);
        auVar31[2] = -(pbVar20[0xc] == 0x6d);
        auVar31[3] = -(pbVar20[0xd] == 0x65);
        auVar31[4] = -(pbVar20[0xe] == 0x6e);
        auVar31[5] = -(pbVar20[0xf] == 0x74);
        auVar31[6] = -(pbVar20[0x10] == 0x61);
        auVar31[7] = -(pbVar20[0x11] == 0x74);
        auVar31[8] = -(pbVar20[0x12] == 0x69);
        auVar31[9] = -(pbVar20[0x13] == 0x6f);
        auVar31[10] = -(pbVar20[0x14] == 0x6e);
        auVar31[0xb] = -(pbVar20[0x15] == 0x5f);
        auVar31[0xc] = -(pbVar20[0x16] == 0x74);
        auVar31[0xd] = -(pbVar20[0x17] == 0x61);
        auVar31[0xe] = -(pbVar20[0x18] == 0x67);
        auVar31[0xf] = -(pbVar20[0x19] == 0x5d);
        auVar31 = auVar31 & auVar28;
        if ((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar14 == (byte *)plStack_888[0xb]) {
LAB_0ecd2eb8:
      uVar6 = uStack_85c;
      if (iStack_860 == 0) {
        if (((puVar11 == (undefined *)0x0) || (*(int *)(puVar11 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar11 + 0x68) == 0)) goto LAB_0ecd2f4b;
        lVar24 = *(long *)(puVar11 + 0x68) + 0x38;
      }
      else {
        if (puVar11 == (undefined *)0x0) {
          puVar11 = (undefined *)FUN_048aead0(plVar15 + 3,0,uStack_85c);
        }
        auStack_808._0_8_ = func_0x048b0c90(plVar15 + 3,puVar11,uVar6,1);
        if (auStack_808._0_8_ == 0) {
          auStack_808 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_808);
          if (auStack_808._0_8_ == 0) goto LAB_0ecd2f4b;
        }
        if ((*(int *)(auStack_808._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_808._0_8_ + 0x58) != 0)) {
          lVar24 = *(long *)(auStack_808._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0ecd2f4b:
          lVar24 = 0;
        }
      }
      auVar27 = _auStack_970;
      pcStack_978 = (code *)&UNK_0488e0b0;
      uStack_968._0_4_ = 0x48b5725f;
      auVar4._8_4_ = 0;
      auVar4._0_8_ = uStack_968;
      _auStack_970 = auVar4 << 0x40;
      uStack_968._5_3_ = auVar27._13_3_;
      uStack_968._4_1_ = 0;
      plStack_988 = (long *)0x0;
      auStack_808 = (undefined1  [16])0x0;
      pcStack_7f0 = (code *)&UNK_0488e0b0;
      pcStack_7e8 = (code *)0x0;
      uStack_7e0 = (undefined *)CONCAT35(uStack_7e0._5_3_,0x48b5725f);
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plVar15 == (long *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar17 = _UNK_013bbadf;
      plStack_908 = (long *)0x21;
      plStack_900 = (long *)0x1a;
      *(ulong *)((long)plVar15 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)plVar15 + 0x12) = uVar17;
      lVar19 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *plVar15 = _DAT_013bbacd;
      plVar15[1] = lVar19;
      *(undefined1 *)((long)plVar15 + 0x1a) = 0;
      pcStack_8f8 = (code *)plVar15;
      lVar24 = func_0x048b5060(lVar24,&plStack_908);
      *(undefined8 *)(lVar24 + 0x20) = 0;
      if ((undefined1 *)(lVar24 + 0x20) == auStack_808) {
        pcVar16 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar24 + 0x40) != (code *)0x0) {
          puVar23 = (undefined8 *)(lVar24 + 0x28);
          (**(code **)(lVar24 + 0x40))(puVar23);
          if (uStack_7e0._4_1_ != '\0') {
            if (uStack_7e0._4_1_ == '\x02') {
              (*pcStack_7f0)(5,auStack_808 + 8,puVar23);
            }
            else {
              uVar17 = auStack_808._8_8_;
              auStack_808._8_8_ = 0;
              *puVar23 = uVar17;
            }
          }
        }
        *(code **)(lVar24 + 0x38) = pcStack_7f0;
        *(code **)(lVar24 + 0x40) = pcStack_7e8;
        *(undefined4 *)(lVar24 + 0x48) = (undefined4)uStack_7e0;
        *(char *)(lVar24 + 0x4c) = uStack_7e0._4_1_;
        pcVar16 = pcStack_7e8;
      }
      if (((ulong)plStack_908 & 1) != 0) {
        func_0x0412a280(pcStack_8f8,(ulong)plStack_908 & 0xfffffffffffffffe);
        pcVar16 = pcStack_7e8;
      }
      if (pcVar16 != (code *)0x0) {
        (*pcVar16)(auStack_808 + 8);
      }
      if (_auStack_970 != (code *)0x0) {
        (*_auStack_970)(&plStack_988);
      }
    }
    else {
      iVar9 = *(int *)(pbVar14 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550ad8), iVar10 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar9 == _DAT_0f550ac4) goto LAB_0ecd2eb8;
    }
    uStack_6c8 = CONCAT44(uStack_854,uStack_858);
    uStack_6d0 = (long *)CONCAT44(uStack_85c,iStack_860);
    pcStack_6d8 = pcStack_868;
    plStack_6e8 = plStack_878;
    pcStack_6e0 = (code *)auStack_870;
    plStack_6f8 = plStack_888;
    plStack_6f0 = plStack_880;
    func_0x0ed3eb50(auStack_808,&plStack_6f8,&UNK_014030d1,6);
    pcVar16 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar16 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar16 = &UNK_0f011880;
    if (pcStack_7f0 != (code *)0x0) {
      lVar24 = *(long *)pcStack_7f0;
      pcStack_7f0 = pcVar16;
      (**(code **)(lVar24 + 8))();
      pcVar16 = pcStack_7f0;
    }
    pcStack_7f0 = pcVar16;
    plStack_988 = (long *)CONCAT44(plStack_988._4_4_,(undefined4)uStack_7f8);
    plStack_980 = (long *)0x0;
    pcStack_978 = (code *)((ulong)pcStack_978 & 0xffffffff00000000);
    _auStack_970 = ZEXT816(1);
    auStack_960._8_8_ = &SUB_048b06d0;
    auStack_960._0_8_ = &UNK_05ef7590;
    auStack_950._8_8_ = &UNK_0ed3f0d0;
    auStack_950._0_8_ = &UNK_05ef7250;
    auStack_940._0_12_ = ZEXT812(0xed3f250);
    auStack_930 = ZEXT816(0);
    func_0x048b05a0(auStack_808._8_8_,&plStack_988);
    uVar17 = auStack_930._8_8_;
    if ((long *)auStack_930._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_930._8_8_ + 8);
      lVar24 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*(long *)auStack_930._8_8_ + 0x10))(auStack_930._8_8_);
        func_0x0412c2d0(uVar17);
      }
    }
    func_0x0ed3edd0(auStack_808);
    uStack_558 = CONCAT71(uStack_558._1_7_,(undefined1)uStack_6c8);
    pcStack_568 = pcStack_6d8;
    plStack_560 = uStack_6d0;
    plStack_578 = plStack_6e8;
    pcStack_570 = pcStack_6e0;
    plStack_588 = plStack_6f8;
    plStack_580 = plStack_6f0;
    func_0x048b0bc0(&pcStack_7f0);
    plStack_738 = plStack_588;
    plStack_730 = plStack_580;
    plStack_728 = plStack_578;
    pcStack_720 = pcStack_570;
    uStack_718 = pcStack_568;
    uStack_710 = plStack_560;
    uStack_708 = uStack_558;
    func_0x0ed3eb50(auStack_808,&plStack_738,&UNK_012ae43f,5);
    pcVar16 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar16 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar16 = &UNK_0f011880;
    if (pcStack_7f0 != (code *)0x0) {
      lVar24 = *(long *)pcStack_7f0;
      pcStack_7f0 = pcVar16;
      (**(code **)(lVar24 + 8))();
      pcVar16 = pcStack_7f0;
    }
    pcStack_7f0 = pcVar16;
    plStack_988 = (long *)CONCAT44(plStack_988._4_4_,(undefined4)uStack_7f8);
    plStack_980 = (long *)0x0;
    pcStack_978 = (code *)((ulong)pcStack_978 & 0xffffffff00000000);
    _auStack_970 = ZEXT816(1);
    auStack_960._8_8_ = &SUB_048b06d0;
    auStack_960._0_8_ = &UNK_05ef7590;
    auStack_950._8_8_ = &UNK_0ed3f420;
    auStack_950._0_8_ = &UNK_05ef7250;
    auStack_940._0_12_ = ZEXT812(0xed3f5a0);
    auStack_930 = ZEXT816(0);
    func_0x048b05a0(auStack_808._8_8_,&plStack_988);
    uVar17 = auStack_930._8_8_;
    if ((long *)auStack_930._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_930._8_8_ + 8);
      lVar24 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*(long *)auStack_930._8_8_ + 0x10))(auStack_930._8_8_);
        func_0x0412c2d0(uVar17);
      }
    }
    func_0x0ed3edd0(auStack_808);
    plStack_678 = (long *)CONCAT71(plStack_678._1_7_,(char)uStack_708);
    pcStack_688 = uStack_718;
    plStack_680 = uStack_710;
    plStack_698 = plStack_728;
    pcStack_690 = pcStack_720;
    plStack_6a8 = plStack_738;
    plStack_6a0 = plStack_730;
    func_0x048b0bc0(&pcStack_7f0);
    func_0x0ed3eb50(auStack_808,&plStack_6a8,&UNK_012ae445,6);
    pcVar16 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar16 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar16 = &UNK_0f0123c0;
    if (pcStack_7f0 != (code *)0x0) {
      lVar24 = *(long *)pcStack_7f0;
      pcStack_7f0 = pcVar16;
      (**(code **)(lVar24 + 8))();
      pcVar16 = pcStack_7f0;
    }
    pcStack_7f0 = pcVar16;
    plStack_988 = (long *)CONCAT44(plStack_988._4_4_,(undefined4)uStack_7f8);
    plStack_980 = (long *)0x0;
    pcStack_978 = (code *)((ulong)pcStack_978 & 0xffffffff00000000);
    _auStack_970 = ZEXT816(1);
    auStack_960._8_8_ = &SUB_048b06d0;
    auStack_960._0_8_ = &UNK_05e08030;
    auStack_950._8_8_ = &UNK_0ed3f780;
    auStack_950._0_8_ = &UNK_05e07cf0;
    auStack_940._0_12_ = ZEXT812(0xed3f930);
    auStack_930 = ZEXT816(0);
    func_0x048b05a0(auStack_808._8_8_,&plStack_988);
    uVar17 = auStack_930._8_8_;
    if ((long *)auStack_930._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_930._8_8_ + 8);
      lVar24 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*(long *)auStack_930._8_8_ + 0x10))(auStack_930._8_8_);
        func_0x0412c2d0(uVar17);
      }
    }
    func_0x0ed3edd0(auStack_808);
    uStack_8d8 = CONCAT31(uStack_8d8._1_3_,plStack_678._0_1_);
    iStack_8e0 = (int)plStack_680;
    uStack_8dc = (uint)((ulong)plStack_680 >> 0x20);
    pcStack_8f8 = (code *)plStack_698;
    pcStack_8e8 = pcStack_688;
    auStack_8f0 = (undefined1  [8])pcStack_690;
    plStack_908 = plStack_6a8;
    plStack_900 = plStack_6a0;
    func_0x048b0bc0(&pcStack_7f0);
    func_0x0ed3eb50(auStack_808,&plStack_908,&UNK_014acf75,5);
    pcVar16 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pcVar16 == (code *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *(undefined **)pcVar16 = &UNK_0f0123c0;
    if (pcStack_7f0 != (code *)0x0) {
      lVar24 = *(long *)pcStack_7f0;
      pcStack_7f0 = pcVar16;
      (**(code **)(lVar24 + 8))();
      pcVar16 = pcStack_7f0;
    }
    pcStack_7f0 = pcVar16;
    plStack_988 = (long *)CONCAT44(plStack_988._4_4_,(undefined4)uStack_7f8);
    plStack_980 = (long *)0x0;
    pcStack_978 = (code *)((ulong)pcStack_978 & 0xffffffff00000000);
    _auStack_970 = ZEXT816(1);
    auStack_960._8_8_ = &SUB_048b06d0;
    auStack_960._0_8_ = &UNK_05e08030;
    auStack_950._8_8_ = &UNK_0ed3fb10;
    auStack_950._0_8_ = &UNK_05e07cf0;
    auStack_940._0_12_ = ZEXT812(0xed3fcc0);
    auStack_930 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_808._8_8_,&plStack_988);
    uVar17 = auStack_930._8_8_;
    if ((long *)auStack_930._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_930._8_8_ + 8);
      lVar24 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*(long *)auStack_930._8_8_ + 0x10))(auStack_930._8_8_);
        func_0x0412c2d0(uVar17);
      }
    }
    func_0x0ed3edd0(auStack_808);
    func_0x048b0bc0(&pcStack_7f0);
  }
  if ((DAT_0f773ee0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f773ee0), iVar9 != 0)) {
    func_0x0ed3ff60();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f773e60,0xf53dab8);
    func_0x0410844d(&DAT_0f773ee0);
  }
  plVar15 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f773e60 + 4)) * 8);
  do {
    lVar24 = *plVar15;
    if (lVar24 == -1) goto LAB_0ecd3760;
    plVar15 = (long *)(*(long *)(param_1 + 0x30) + lVar24 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f773e60 + 4))
  ;
  if (plVar15 == *(long **)(param_1 + 0x38)) {
LAB_0ecd3760:
    puVar11 = &DAT_0f773e60;
    if (iRam000000000f773ec0 != -0x2b3da790) goto LAB_0ecd37cd;
LAB_0ecd378b:
    lVar24 = *(long *)(puVar11 + 0x68);
    if (lVar24 == 0) goto LAB_0ecd37cd;
    bVar26 = (*(byte *)(lVar24 + 8) & 1) != 0;
    lVar19 = lVar24 + 9;
    if (bVar26) {
      lVar19 = *(long *)(lVar24 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar24 + 8) >> 1);
    if (bVar26) {
      uVar12 = *(ulong *)(lVar24 + 0x10);
    }
    func_0x0ed40680(&plStack_738,param_1,lVar19,uVar12);
  }
  else {
    puVar11 = (undefined *)plVar15[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0ecd378b;
LAB_0ecd37cd:
    func_0x0ed40680(&plStack_738,param_1,&UNK_0128796f,0x1b);
  }
  if ((char)uStack_708 == '\0') {
    uStack_548._7_1_ = (undefined1)((ulong)uStack_548 >> 0x38);
    uStack_7c8._4_4_ = (uint)(uStack_7c8 >> 0x20);
    uStack_7f8._4_4_ = (uint)((ulong)uStack_7f8 >> 0x20);
    uStack_710 = (long *)0x1e1bc4d500000004;
    if ((DAT_0f773f00 == '\0') && (iVar9 = func_0x04108328(&DAT_0f773f00), iVar9 != 0)) {
      func_0x0ed40070();
      func_0x0410844d(&DAT_0f773f00);
    }
    auStack_808._0_4_ = uStack_710._4_4_;
    auStack_808._8_8_ = 0;
    uStack_7f8 = (long *)((ulong)uStack_7f8._4_4_ << 0x20);
    pcStack_7f0 = (code *)0x1;
    pcStack_7e8 = FUN_048aead0;
    uStack_7e0 = &UNK_0cef97a0;
    puStack_7d8 = &UNK_0ed41360;
    lStack_7d0 = 0;
    uStack_7c8 = (ulong)uStack_7c8._4_4_ << 0x20;
    auStack_7c0 = (undefined1  [16])0x0;
    func_0x049057f0(&plStack_730,auStack_808);
    func_0x048aea50(auStack_808);
    pcStack_978 = pcStack_720;
    _auStack_970 = uStack_718;
    plStack_988 = plStack_730;
    plStack_980 = plStack_728;
    plStack_888 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plStack_888 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plStack_888 = (long)&UNK_0ef474e0;
    plStack_880 = (long *)0x0;
    plStack_878 = (long *)CONCAT71(plStack_878._1_7_,0xff);
    func_0x0ed411e0(auStack_808,&plStack_988,&plStack_888);
    if (plStack_880 != (long *)0x0) {
      (**(code **)(*plStack_880 + 0x28))();
    }
    if (plStack_888 != (long *)0x0) {
      (**(code **)(*plStack_888 + 8))();
    }
    if ((DAT_0f773f00 == '\0') && (iVar9 = func_0x04108328(&DAT_0f773f00), iVar9 != 0)) {
      func_0x0ed40070();
      func_0x0410844d(&DAT_0f773f00);
    }
    if (uStack_718._4_4_ == 2) {
      piVar13 = *(int **)(*(long *)(pcStack_720 + 0x78) + 0x60);
      iVar9 = *piVar13;
      while (iVar9 != (int)uStack_718) {
        piVar13 = piVar13 + 0x16;
        iVar9 = *piVar13;
      }
      plVar15 = *(long **)(piVar13 + 0xc);
      while (plVar15 != plStack_728) {
        piVar13 = *(int **)(piVar13 + 0xe);
        plVar15 = *(long **)(piVar13 + 0xc);
      }
LAB_0ecd39bf:
      *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 2;
    }
    else {
      if (uStack_718._4_4_ == 1) {
        piVar13 = *(int **)(*(long *)(pcStack_720 + 0x78) + 0x48);
        iVar9 = *piVar13;
        while (iVar9 != (int)uStack_718) {
          piVar13 = piVar13 + 0x1a;
          iVar9 = *piVar13;
        }
        goto LAB_0ecd39bf;
      }
      if (uStack_718._4_4_ == 0) {
        *(uint *)(pcStack_720 + 0x18) = *(uint *)(pcStack_720 + 0x18) | 0x20000;
      }
    }
    if ((DAT_0f773f00 == '\0') && (iVar9 = func_0x04108328(&DAT_0f773f00), iVar9 != 0)) {
      func_0x0ed40070();
      func_0x0410844d(&DAT_0f773f00);
    }
    auStack_808._0_4_ = 0xbf75c8f8;
    auStack_808._8_8_ = 0;
    uStack_7f8 = (long *)((ulong)uStack_7f8 & 0xffffffff00000000);
    pcStack_7f0 = (code *)0x0;
    pcStack_7e8 = (code *)&SUB_0490fc00;
    uStack_7e0 = &SUB_048b06d0;
    puStack_7d8 = &UNK_0ed415d0;
    lStack_7d0 = 0;
    uStack_7c8 = uStack_7c8 & 0xffffffff00000000;
    auStack_7c0 = ZEXT816(0);
    func_0x049057f0(&plStack_730,auStack_808);
    func_0x048aea50(auStack_808);
    pcStack_978 = pcStack_720;
    _auStack_970 = uStack_718;
    plStack_988 = plStack_730;
    plStack_980 = plStack_728;
    puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar23 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar23 = &UNK_0ef474e0;
    if ((DAT_0f551cb0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f551cb0), iVar9 != 0)) {
      func_0x04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    auStack_808._0_4_ = _DAT_0f551c9c;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    plVar15[1] = 0;
    plVar15[2] = 0;
    *plVar15 = (long)&UNK_0ef46c98;
    plVar15[3] = (long)puVar23;
    *(undefined1 *)(plVar15 + 4) = 0xff;
    auStack_808._8_8_ = plVar15 + 3;
    plStack_888 = (long *)0x0;
    plStack_880 = (long *)0x0;
    uStack_7f8 = plVar15;
    func_0x048afd20(&plStack_988,auStack_808);
    plVar15 = uStack_7f8;
    if (uStack_7f8 != (long *)0x0) {
      LOCK();
      plVar18 = uStack_7f8 + 1;
      lVar24 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*uStack_7f8 + 0x10))(uStack_7f8);
        func_0x0412c2d0(plVar15);
      }
    }
    plVar15 = plStack_880;
    if (plStack_880 != (long *)0x0) {
      LOCK();
      plVar18 = plStack_880 + 1;
      lVar24 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_880 + 0x10))(plStack_880);
        func_0x0412c2d0(plVar15);
      }
    }
    plStack_5c8 = plStack_738;
    plStack_5c0 = plStack_730;
    plStack_5b8 = plStack_728;
    pcStack_5b0 = pcStack_720;
    pcStack_5a8 = uStack_718;
    plStack_5a0 = uStack_710;
    uStack_598 = uStack_708;
    auStack_920 = (undefined1  [16])0x0;
    auStack_930 = (undefined1  [16])0x0;
    auStack_940 = (undefined1  [16])0x0;
    auStack_950 = (undefined1  [16])0x0;
    auStack_960 = (undefined1  [16])0x0;
    lStack_910 = 0;
    plStack_980 = (long *)0xffffffffffffffff;
    pcStack_978 = (code *)0x0;
    stack0xfffffffffffff691 = SUB1615((undefined1  [16])0x0,1);
    auStack_970[0] = 0xff;
    plStack_988 = (long *)&UNK_0f4e3c70;
    func_0x041679a0(&uStack_968);
    uVar17 = func_0x041681f0(&uStack_968,0xf547a30);
    auStack_960._0_8_ = uVar17;
    uVar17 = func_0x041681f0(&uStack_968,0xf547770);
    auStack_960._8_8_ = uVar17;
    auStack_950 = (undefined1  [16])0x0;
    auStack_940 = (undefined1  [16])0x0;
    auStack_930 = (undefined1  [16])0x0;
    auStack_920 = (undefined1  [16])0x0;
    lStack_910 = 0;
    uStack_548 = (long *)CONCAT17(uStack_548._7_1_,0x242b535c5e0a);
    func_0x0ed60210(&plStack_988,&uStack_548,0);
    pcStack_7f0 = (code *)CONCAT71(pcStack_7f0._1_7_,auStack_970[0]);
    uStack_7f8 = (long *)pcStack_978;
    auStack_808._8_8_ = plStack_980;
    auStack_808._0_8_ = &UNK_0f4e3c70;
    func_0x04167a20(&pcStack_7e8,&uStack_968);
    uStack_7e0 = (undefined *)auStack_960._0_8_;
    puStack_7d8 = (undefined *)auStack_960._8_8_;
    lStack_7d0 = auStack_950._0_8_;
    uStack_7c8 = auStack_950._8_8_;
    auStack_7c0 = auStack_940;
    if (auStack_940._8_8_ != 0) {
      LOCK();
      *(long *)(auStack_940._8_8_ + 8) = *(long *)(auStack_940._8_8_ + 8) + 1;
      UNLOCK();
    }
    lStack_7b0 = auStack_930._0_8_;
    if ((auStack_930[8] & 1) == 0) {
      lStack_798 = auStack_920._8_8_;
      auStack_7a8._8_8_ = auStack_920._0_8_;
      auStack_7a8._0_8_ = auStack_930._8_8_;
    }
    else {
      func_0x0412e5e0(auStack_7a8,auStack_920._8_8_,auStack_920._0_8_);
    }
    lStack_790 = lStack_910;
    plStack_6a0 = (long *)0xffffffffffffffff;
    plStack_698 = (long *)0x0;
    pcStack_690 = (code *)CONCAT71(pcStack_690._1_7_,0xff);
    plStack_6a8 = (long *)&UNK_0f4e3cf0;
    pcStack_688 = (code *)0x0;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(0x98,0);
    }
    *(undefined1 (*) [16])(plVar15 + 1) = (undefined1  [16])0x0;
    *plVar15 = (long)&UNK_0f0fb8c0;
    plVar18 = plVar15 + 3;
    plVar15[4] = auStack_808._8_8_;
    plVar15[5] = (long)uStack_7f8;
    *(undefined1 *)(plVar15 + 6) = pcStack_7f0._0_1_;
    plVar15[3] = (long)&UNK_0f4e3c70;
    func_0x04167a20(plVar15 + 7,&pcStack_7e8);
    plVar15[8] = (long)uStack_7e0;
    plVar15[9] = (long)puStack_7d8;
    plVar15[10] = lStack_7d0;
    plVar15[0xb] = uStack_7c8;
    plVar15[0xc] = auStack_7c0._0_8_;
    plVar15[0xd] = auStack_7c0._8_8_;
    auStack_7c0 = (undefined1  [16])0x0;
    plVar15[0xe] = lStack_7b0;
    plVar15[0x11] = lStack_798;
    plVar15[0xf] = auStack_7a8._0_8_;
    plVar15[0x10] = auStack_7a8._8_8_;
    auStack_7a8 = (undefined1  [16])0x0;
    lStack_798 = 0;
    plVar15[0x12] = lStack_790;
    puStack_670 = (undefined *)((ulong)puStack_670 & 0xffffffffffffff00);
    plStack_680 = plVar18;
    plStack_678 = plVar15;
    if ((int)plStack_5a0 == 4) {
      lVar24 = func_0x0ed41830(&plStack_5c8);
      lVar24 = *(long *)(lVar24 + 0x48);
      puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar23 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
LAB_0ecd3f37:
      *(undefined1 *)(puVar23 + 3) = pcStack_690._0_1_;
      puVar23[1] = plStack_6a0;
      puVar23[2] = plStack_698;
      *puVar23 = &UNK_0f4e3cf0;
      puVar23[4] = 0;
      puVar23[5] = plVar18;
      puVar23[6] = plVar15;
      plStack_680 = (long *)0x0;
      plStack_678 = (long *)0x0;
      *(undefined1 *)(puVar23 + 7) = 0;
      plVar15 = *(long **)(lVar24 + 8);
      *(undefined8 **)(lVar24 + 8) = puVar23;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x28))();
      }
    }
    else if ((int)plStack_5a0 == 1) {
      lVar24 = func_0x0ed416e0(&plStack_5c8);
      lVar24 = *(long *)(lVar24 + 0x58);
      puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar23 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      goto LAB_0ecd3f37;
    }
    pcStack_6d8 = pcStack_5a8;
    uStack_6c8 = CONCAT71(uStack_6c8._1_7_,(undefined1)uStack_598);
    plStack_6e8 = plStack_5b8;
    pcStack_6e0 = pcStack_5b0;
    plStack_6f8 = plStack_5c8;
    plStack_6f0 = plStack_5c0;
    uStack_6d0 = (long *)0x1e1bc4d500000004;
    if ((DAT_0f773f00 == '\0') && (iVar9 = func_0x04108328(&DAT_0f773f00), iVar9 != 0)) {
      func_0x0ed40070();
      func_0x0410844d(&DAT_0f773f00);
    }
    plStack_888 = (long *)CONCAT44(plStack_888._4_4_,uStack_6d0._4_4_);
    plStack_880 = (long *)0x0;
    plStack_878 = (long *)((ulong)plStack_878 & 0xffffffff00000000);
    pcStack_868 = FUN_048aead0;
    auStack_870 = (undefined1  [8])0x1;
    iStack_860 = 0x4905970;
    uStack_85c = 0;
    uStack_858 = 0xed419b0;
    uStack_854 = 0;
    uStack_850 = 0;
    uStack_84c = 0;
    uStack_848 = 0;
    auStack_840 = ZEXT816(0);
    func_0x049057f0(&plStack_6f0,&plStack_888);
    func_0x048aea50(&plStack_888);
    pcStack_8f8 = pcStack_6e0;
    auStack_8f0 = (undefined1  [8])pcStack_6d8;
    plStack_908 = plStack_6f0;
    plStack_900 = plStack_6e8;
    plStack_638 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plStack_638 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plStack_638 = (long)&UNK_0ef44b00;
    plStack_630 = (long *)0x0;
    plStack_628 = (long *)CONCAT71(plStack_628._1_7_,0xff);
    func_0x0ed411e0(&plStack_888,&plStack_908,&plStack_638);
    if (plStack_630 != (long *)0x0) {
      (**(code **)(*plStack_630 + 0x28))();
    }
    if (plStack_638 != (long *)0x0) {
      (**(code **)(*plStack_638 + 8))();
    }
    plStack_588 = plStack_6f8;
    plStack_580 = plStack_6f0;
    plStack_578 = plStack_6e8;
    pcStack_570 = pcStack_6e0;
    pcStack_568 = pcStack_6d8;
    plStack_560 = uStack_6d0;
    uStack_558 = uStack_6c8;
    auStack_8a0 = (undefined1  [16])0x0;
    auStack_8b0 = (undefined1  [16])0x0;
    auStack_8c0 = (undefined1  [16])0x0;
    uStack_8d0 = 0;
    uStack_8cc = 0;
    puStack_8c8 = (undefined *)0x0;
    iStack_8e0 = 0;
    uStack_8dc = 0;
    uStack_8d8 = 0;
    uStack_8d4 = 0;
    lStack_890 = 0;
    plStack_900 = (long *)0xffffffffffffffff;
    pcStack_8f8 = (code *)0x0;
    stack0xfffffffffffff711 = SUB1615((undefined1  [16])0x0,1);
    auStack_8f0[0] = 0xff;
    plStack_908 = (long *)&UNK_0f4e3c70;
    func_0x041679a0(&pcStack_8e8);
    uVar17 = func_0x041681f0(&pcStack_8e8,0xf547a30);
    iStack_8e0 = (int)uVar17;
    uStack_8dc = (uint)((ulong)uVar17 >> 0x20);
    uVar17 = func_0x041681f0(&pcStack_8e8,0xf547770);
    uStack_8d8 = (undefined4)uVar17;
    uStack_8d4 = (uint)((ulong)uVar17 >> 0x20);
    uStack_8d0 = 0;
    uStack_8cc = 0;
    puStack_8c8 = (undefined *)0x0;
    auStack_8c0 = (undefined1  [16])0x0;
    auStack_8b0 = (undefined1  [16])0x0;
    auStack_8a0 = (undefined1  [16])0x0;
    lStack_890 = 0;
    plStack_638 = (long *)CONCAT17(plStack_638._7_1_,0x242b535c5e0a);
    func_0x0ed60210(&plStack_908,&plStack_638,0);
    auStack_870[0] = auStack_8f0[0];
    plStack_880 = plStack_900;
    plStack_878 = (long *)pcStack_8f8;
    plStack_888 = (long *)&UNK_0f4e3c70;
    func_0x04167a20(&pcStack_868,&pcStack_8e8);
    iStack_860 = iStack_8e0;
    uStack_85c = uStack_8dc;
    uStack_858 = uStack_8d8;
    uStack_854 = uStack_8d4;
    uStack_850 = uStack_8d0;
    uStack_84c = uStack_8cc;
    uStack_848 = SUB84(puStack_8c8,0);
    uStack_844 = (undefined4)((ulong)puStack_8c8 >> 0x20);
    auStack_840 = auStack_8c0;
    if (auStack_8c0._8_8_ != 0) {
      LOCK();
      *(long *)(auStack_8c0._8_8_ + 8) = *(long *)(auStack_8c0._8_8_ + 8) + 1;
      UNLOCK();
    }
    uStack_830 = auStack_8b0._0_8_;
    if ((auStack_8b0[8] & 1) == 0) {
      uStack_818 = auStack_8a0._8_8_;
      uStack_827 = auStack_8b0._9_7_;
      uStack_820 = auStack_8a0._0_8_;
      bStack_828 = auStack_8b0[8];
    }
    else {
      func_0x0412e5e0(&bStack_828,auStack_8a0._8_8_,auStack_8a0._0_8_);
    }
    uStack_810 = lStack_890;
    if ((int)plStack_560 == 4) {
      lVar24 = func_0x0ed41830(&plStack_588);
      lVar24 = *(long *)(lVar24 + 0x48);
      puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar23 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
LAB_0ecd43f3:
      *(undefined1 *)(puVar23 + 3) = auStack_870[0];
      puVar23[1] = plStack_880;
      puVar23[2] = plStack_878;
      *puVar23 = &UNK_0f4e3c70;
      func_0x04167a20(puVar23 + 4,&pcStack_868);
      puVar23[5] = CONCAT44(uStack_85c,iStack_860);
      puVar23[6] = CONCAT44(uStack_854,uStack_858);
      puVar23[7] = CONCAT44(uStack_84c,uStack_850);
      puVar23[8] = CONCAT44(uStack_844,uStack_848);
      puVar23[9] = auStack_840._0_8_;
      puVar23[10] = auStack_840._8_8_;
      auStack_840 = (undefined1  [16])0x0;
      puVar23[0xb] = uStack_830;
      puVar23[0xe] = uStack_818;
      puVar23[0xc] = CONCAT71(uStack_827,bStack_828);
      puVar23[0xd] = uStack_820;
      bStack_828 = 0;
      uStack_827 = 0;
      uStack_820 = 0;
      uStack_818 = 0;
      puVar23[0xf] = uStack_810;
      plVar15 = *(long **)(lVar24 + 8);
      *(undefined8 **)(lVar24 + 8) = puVar23;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x28))();
      }
    }
    else if ((int)plStack_560 == 1) {
      lVar24 = func_0x0ed416e0(&plStack_588);
      lVar24 = *(long *)(lVar24 + 0x58);
      puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar23 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      goto LAB_0ecd43f3;
    }
    plStack_888 = (long *)&UNK_0f4e3c70;
    if ((bStack_828 & 1) != 0) {
      func_0x0412a280(uStack_818,CONCAT71(uStack_827,bStack_828) & 0xfffffffffffffffe);
    }
    uVar17 = auStack_840._8_8_;
    if ((long *)auStack_840._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_840._8_8_ + 8);
      lVar24 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*(long *)auStack_840._8_8_ + 0x10))(auStack_840._8_8_);
        func_0x0412c2d0(uVar17);
      }
    }
    func_0x04167a40(&pcStack_868);
    if (((ulong)plStack_638 & 1) == 0) {
      if ((auStack_8b0[8] & 1) == 0) goto LAB_0ecd452a;
LAB_0ecd4564:
      plStack_908 = (long *)&UNK_0f4e3c70;
      func_0x0412a280(auStack_8a0._8_8_,auStack_8b0._8_8_ & 0xfffffffffffffffe);
      plVar15 = (long *)auStack_8c0._8_8_;
    }
    else {
      func_0x0412a280(plStack_628,(ulong)plStack_638 & 0xfffffffffffffffe);
      if ((auStack_8b0[8] & 1) != 0) goto LAB_0ecd4564;
LAB_0ecd452a:
      plStack_908 = (long *)&UNK_0f4e3c70;
      plVar15 = (long *)auStack_8c0._8_8_;
    }
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar18 = plVar15 + 1;
      lVar24 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x04167a40(&pcStack_8e8);
    plVar15 = plStack_678;
    plStack_6a8 = (long *)&UNK_0f4e3cf0;
    if (plStack_678 != (long *)0x0) {
      LOCK();
      plVar18 = plStack_678 + 1;
      lVar24 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_678 + 0x10))(plStack_678);
        func_0x0412c2d0(plVar15);
      }
    }
    auStack_808._0_8_ = &UNK_0f4e3c70;
    if ((auStack_7a8[0] & 1) != 0) {
      func_0x0412a280(lStack_798,auStack_7a8._0_8_ & 0xfffffffffffffffe);
    }
    uVar17 = auStack_7c0._8_8_;
    if ((long *)auStack_7c0._8_8_ != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(auStack_7c0._8_8_ + 8);
      lVar24 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*(long *)auStack_7c0._8_8_ + 0x10))(auStack_7c0._8_8_);
        func_0x0412c2d0(uVar17);
      }
    }
    func_0x04167a40(&pcStack_7e8);
    if (((ulong)uStack_548 & 1) == 0) {
      if ((auStack_930[8] & 1) == 0) goto LAB_0ecd4671;
LAB_0ecd46a1:
      plStack_988 = (long *)&UNK_0f4e3c70;
      func_0x0412a280(auStack_920._8_8_,auStack_930._8_8_ & 0xfffffffffffffffe);
      plVar15 = (long *)auStack_940._8_8_;
    }
    else {
      func_0x0412a280(plStack_538,(ulong)uStack_548 & 0xfffffffffffffffe);
      if ((auStack_930[8] & 1) != 0) goto LAB_0ecd46a1;
LAB_0ecd4671:
      plStack_988 = (long *)&UNK_0f4e3c70;
      plVar15 = (long *)auStack_940._8_8_;
    }
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar18 = plVar15 + 1;
      lVar24 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        func_0x0412c2d0(plVar15);
      }
    }
    func_0x04167a40(&uStack_968);
  }
  if ((DAT_0f773f98 == '\0') && (iVar9 = func_0x04108328(&DAT_0f773f98), iVar9 != 0)) {
    func_0x0ed41cd0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f773f18,0xf53dab8);
    func_0x0410844d(&DAT_0f773f98);
  }
  plVar15 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f773f18 + 4)) * 8);
  do {
    lVar24 = *plVar15;
    if (lVar24 == -1) goto LAB_0ecd4750;
    plVar15 = (long *)(*(long *)(param_1 + 0x30) + lVar24 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f773f18 + 4))
  ;
  if (plVar15 == *(long **)(param_1 + 0x38)) {
LAB_0ecd4750:
    puVar11 = &DAT_0f773f18;
    if (iRam000000000f773f78 != -0x2b3da790) goto LAB_0ecd47bd;
LAB_0ecd477b:
    lVar24 = *(long *)(puVar11 + 0x68);
    if (lVar24 == 0) goto LAB_0ecd47bd;
    bVar26 = (*(byte *)(lVar24 + 8) & 1) != 0;
    lVar19 = lVar24 + 9;
    if (bVar26) {
      lVar19 = *(long *)(lVar24 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar24 + 8) >> 1);
    if (bVar26) {
      uVar12 = *(ulong *)(lVar24 + 0x10);
    }
    func_0x0ed42630(&plStack_738,param_1,lVar19,uVar12);
    plVar15 = plStack_738;
  }
  else {
    puVar11 = (undefined *)plVar15[2];
    if (*(int *)(puVar11 + 0x60) == -0x2b3da790) goto LAB_0ecd477b;
LAB_0ecd47bd:
    func_0x0ed42630(&plStack_738,param_1,&UNK_01357cdb,0x17);
    plVar15 = plStack_738;
  }
  if ((char)uStack_708 != '\0') {
    return;
  }
  plStack_738 = plVar15;
  if ((DAT_0f773f98 == '\0') && (iVar9 = func_0x04108328(&DAT_0f773f98), iVar9 != 0)) {
    func_0x0ed41cd0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f773f18,0xf53dab8);
    func_0x0410844d(&DAT_0f773f98);
  }
  plVar18 = (long *)(plVar15[3] +
                    (ulong)((int)((ulong)(plVar15[4] - plVar15[3]) >> 3) - 1U &
                           *(uint *)(_DAT_0f773f18 + 4)) * 8);
  do {
    lVar24 = *plVar18;
    if (lVar24 == -1) goto LAB_0ecd4850;
    plVar18 = (long *)(plVar15[6] + lVar24 * 0x18);
  } while (*(uint *)(plVar15[6] + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f773f18 + 4));
  if (plVar18 == (long *)plVar15[7]) {
LAB_0ecd4850:
    puVar11 = &DAT_0f773f18;
  }
  else {
    puVar11 = (undefined *)plVar18[2];
  }
  for (pbVar14 = (byte *)plStack_738[10]; pbVar14 != (byte *)plStack_738[0xb];
      pbVar14 = pbVar14 + 0x38) {
    bVar1 = *pbVar14;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x1a) goto LAB_0ecd492a;
    }
    else if (*(long *)(pbVar14 + 8) == 0x1a) {
LAB_0ecd492a:
      if ((bVar1 & 1) == 0) {
        pbVar20 = pbVar14 + 1;
      }
      else {
        pbVar20 = *(byte **)(pbVar14 + 0x10);
      }
      auVar29[0] = -(*pbVar20 == 0x5b);
      auVar29[1] = -(pbVar20[1] == 99);
      auVar29[2] = -(pbVar20[2] == 0x65);
      auVar29[3] = -(pbVar20[3] == 0x72);
      auVar29[4] = -(pbVar20[4] == 0x65);
      auVar29[5] = -(pbVar20[5] == 0x61);
      auVar29[6] = -(pbVar20[6] == 0x6c);
      auVar29[7] = -(pbVar20[7] == 0x3a);
      auVar29[8] = -(pbVar20[8] == 100);
      auVar29[9] = -(pbVar20[9] == 0x6f);
      auVar29[10] = -(pbVar20[10] == 99);
      auVar29[0xb] = -(pbVar20[0xb] == 0x75);
      auVar29[0xc] = -(pbVar20[0xc] == 0x6d);
      auVar29[0xd] = -(pbVar20[0xd] == 0x65);
      auVar29[0xe] = -(pbVar20[0xe] == 0x6e);
      auVar29[0xf] = -(pbVar20[0xf] == 0x74);
      auVar32[0] = -(pbVar20[10] == 99);
      auVar32[1] = -(pbVar20[0xb] == 0x75);
      auVar32[2] = -(pbVar20[0xc] == 0x6d);
      auVar32[3] = -(pbVar20[0xd] == 0x65);
      auVar32[4] = -(pbVar20[0xe] == 0x6e);
      auVar32[5] = -(pbVar20[0xf] == 0x74);
      auVar32[6] = -(pbVar20[0x10] == 0x61);
      auVar32[7] = -(pbVar20[0x11] == 0x74);
      auVar32[8] = -(pbVar20[0x12] == 0x69);
      auVar32[9] = -(pbVar20[0x13] == 0x6f);
      auVar32[10] = -(pbVar20[0x14] == 0x6e);
      auVar32[0xb] = -(pbVar20[0x15] == 0x5f);
      auVar32[0xc] = -(pbVar20[0x16] == 0x74);
      auVar32[0xd] = -(pbVar20[0x17] == 0x61);
      auVar32[0xe] = -(pbVar20[0x18] == 0x67);
      auVar32[0xf] = -(pbVar20[0x19] == 0x5d);
      auVar32 = auVar32 & auVar29;
      if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar14 == (byte *)plStack_738[0xb]) {
LAB_0ecd4958:
    if ((int)uStack_710 == 0) {
      if (((puVar11 == (undefined *)0x0) || (*(int *)(puVar11 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar11 + 0x68) == 0)) goto LAB_0ecd49e9;
      lVar24 = *(long *)(puVar11 + 0x68) + 0x38;
    }
    else {
      uVar7 = uStack_710._4_4_;
      if (puVar11 == (undefined *)0x0) {
        puVar11 = (undefined *)FUN_048aead0(plVar15 + 3);
      }
      auStack_808._0_8_ = func_0x048b0c90(plVar15 + 3,puVar11,uVar7,1);
      if (auStack_808._0_8_ == 0) {
        auStack_808 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_808);
        if (auStack_808._0_8_ == 0) goto LAB_0ecd49e9;
      }
      if ((*(int *)(auStack_808._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_808._0_8_ + 0x58) != 0)) {
        lVar24 = *(long *)(auStack_808._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0ecd49e9:
        lVar24 = 0;
      }
    }
    auVar27 = _auStack_970;
    pcStack_978 = (code *)&UNK_0488e0b0;
    uStack_968._0_4_ = 0x48b5725f;
    auVar5._8_4_ = 0;
    auVar5._0_8_ = uStack_968;
    _auStack_970 = auVar5 << 0x40;
    uStack_968._5_3_ = auVar27._13_3_;
    uStack_968._4_1_ = 0;
    plStack_988 = (long *)0x0;
    auStack_808 = (undefined1  [16])0x0;
    pcStack_7f0 = (code *)&UNK_0488e0b0;
    pcStack_7e8 = (code *)0x0;
    uStack_7e0 = (undefined *)CONCAT35(uStack_7e0._5_3_,0x48b5725f);
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar15 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar17 = _UNK_013bbadf;
    plStack_888 = (long *)0x21;
    plStack_880 = (long *)0x1a;
    *(ulong *)((long)plVar15 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)plVar15 + 0x12) = uVar17;
    lVar19 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *plVar15 = _DAT_013bbacd;
    plVar15[1] = lVar19;
    *(undefined1 *)((long)plVar15 + 0x1a) = 0;
    plStack_878 = plVar15;
    lVar24 = func_0x048b5060(lVar24,&plStack_888);
    *(undefined8 *)(lVar24 + 0x20) = 0;
    if ((undefined1 *)(lVar24 + 0x20) == auStack_808) {
      pcVar16 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar24 + 0x40) != (code *)0x0) {
        puVar23 = (undefined8 *)(lVar24 + 0x28);
        (**(code **)(lVar24 + 0x40))(puVar23);
        if (uStack_7e0._4_1_ != '\0') {
          if (uStack_7e0._4_1_ == '\x02') {
            (*pcStack_7f0)(5,auStack_808 + 8,puVar23);
          }
          else {
            uVar17 = auStack_808._8_8_;
            auStack_808._8_8_ = 0;
            *puVar23 = uVar17;
          }
        }
      }
      *(code **)(lVar24 + 0x38) = pcStack_7f0;
      *(code **)(lVar24 + 0x40) = pcStack_7e8;
      *(undefined4 *)(lVar24 + 0x48) = (undefined4)uStack_7e0;
      *(char *)(lVar24 + 0x4c) = uStack_7e0._4_1_;
      pcVar16 = pcStack_7e8;
    }
    if (((ulong)plStack_888 & 1) != 0) {
      func_0x0412a280(plStack_878,(ulong)plStack_888 & 0xfffffffffffffffe);
      pcVar16 = pcStack_7e8;
    }
    if (pcVar16 != (code *)0x0) {
      (*pcVar16)(auStack_808 + 8);
    }
    if (_auStack_970 != (code *)0x0) {
      (*_auStack_970)(&plStack_988);
    }
  }
  else {
    iVar9 = *(int *)(pbVar14 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550ad8), iVar10 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar9 == _DAT_0f550ac4) goto LAB_0ecd4958;
  }
  uStack_1d8 = uStack_708;
  pcStack_1e8 = uStack_718;
  plStack_1e0 = uStack_710;
  plStack_1f8 = plStack_728;
  pcStack_1f0 = pcStack_720;
  plStack_208 = plStack_738;
  plStack_200 = plStack_730;
  plStack_3c8 = plStack_738;
  plStack_3c0 = plStack_730;
  plStack_3b8 = plStack_728;
  pcStack_3b0 = pcStack_720;
  pcStack_3a8 = uStack_718;
  plStack_3a0 = uStack_710;
  uStack_398 = uStack_708;
  func_0x0ed431e0(auStack_808,&plStack_3c8,&UNK_0145b712,0x10,1);
  pcVar16 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar16 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar16 = &UNK_0ef44b00;
  if (pcStack_7f0 != (code *)0x0) {
    lVar24 = *(long *)pcStack_7f0;
    pcStack_7f0 = pcVar16;
    (**(code **)(lVar24 + 8))();
    pcVar16 = pcStack_7f0;
  }
  pcStack_7f0 = pcVar16;
  plStack_988 = (long *)CONCAT44(plStack_988._4_4_,(undefined4)uStack_7f8);
  plStack_980 = (long *)0x0;
  pcStack_978 = (code *)((ulong)pcStack_978 & 0xffffffff00000000);
  _auStack_970 = ZEXT816(1);
  auStack_960._8_8_ = &SUB_048b06d0;
  auStack_960._0_8_ = &UNK_048b3f30;
  auStack_950._8_8_ = &UNK_0ed437a0;
  auStack_950._0_8_ = &SUB_048b2190;
  auStack_940._0_12_ = ZEXT812(0xed43960);
  auStack_930 = ZEXT816(0);
  func_0x048b05a0(auStack_808._8_8_,&plStack_988);
  uVar17 = auStack_930._8_8_;
  if ((long *)auStack_930._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(auStack_930._8_8_ + 8);
    lVar24 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*(long *)auStack_930._8_8_ + 0x10))(auStack_930._8_8_);
      func_0x0412c2d0(uVar17);
    }
  }
  func_0x0ed434a0(auStack_808);
  uStack_458 = (undefined1)uStack_398;
  pcStack_468 = pcStack_3a8;
  plStack_460 = plStack_3a0;
  plStack_478 = plStack_3b8;
  pcStack_470 = pcStack_3b0;
  plStack_488 = plStack_3c8;
  plStack_480 = plStack_3c0;
  func_0x048b0bc0(&pcStack_7f0);
  uStack_500 = 0xffffffffffffffff;
  uStack_4f8 = 0;
  uStack_4f0 = 1;
  puStack_508 = &UNK_0f489570;
  uStack_4e8 = 0x617263656e696d12;
  uStack_4e0 = 0x7466;
  uStack_4d8 = 0;
  cStack_4d0 = '\x01';
  uStack_4c0 = 0xffffffffffffffff;
  uStack_4b8 = 0;
  uStack_4b0 = 2;
  puStack_4c8 = &UNK_0f489570;
  bStack_4a8 = 0;
  cStack_490 = '\0';
  auStack_920 = (undefined1  [16])0x0;
  auStack_930 = (undefined1  [16])0x0;
  auStack_940 = (undefined1  [16])0x0;
  auStack_950 = (undefined1  [16])0x0;
  auStack_960 = (undefined1  [16])0x0;
  lStack_910 = 0;
  plStack_980 = (long *)0xffffffffffffffff;
  pcStack_978 = (code *)0x0;
  stack0xfffffffffffff691 = SUB1615((undefined1  [16])0x0,1);
  auStack_970[0] = 0xff;
  plStack_988 = (long *)&UNK_0f4e3c70;
  func_0x041679a0(&uStack_968);
  uVar17 = func_0x041681f0(&uStack_968,0xf547a30);
  auStack_960._0_8_ = uVar17;
  uVar17 = func_0x041681f0(&uStack_968,0xf547770);
  auStack_950 = (undefined1  [16])0x0;
  auStack_940 = (undefined1  [16])0x0;
  auStack_930 = (undefined1  [16])0x0;
  auStack_920 = (undefined1  [16])0x0;
  lStack_910 = 0;
  bStack_6c0 = 0x1c;
  uStack_6bf = 0x63656e696d5e;
  uStack_6b9 = 0x72;
  uStack_6b8 = 0x61;
  uStack_6b7 = 0x242a2e3a7466;
  uStack_6b1 = 0;
  auStack_960._8_8_ = uVar17;
  func_0x0ed60210(&plStack_988,&bStack_6c0,1);
  auStack_970[0] = 2;
  uStack_280 = plStack_980;
  uStack_278 = pcStack_978;
  uStack_270 = 2;
  puStack_288 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_268,&uStack_968);
  uStack_260 = auStack_960._0_8_;
  uStack_258 = auStack_960._8_8_;
  uStack_250 = auStack_950._0_8_;
  uStack_248 = auStack_950._8_8_;
  uStack_240 = auStack_940._0_8_;
  plStack_238 = (long *)auStack_940._8_8_;
  if ((long *)auStack_940._8_8_ != (long *)0x0) {
    LOCK();
    *(long *)(auStack_940._8_8_ + 8) = *(long *)(auStack_940._8_8_ + 8) + 1;
    UNLOCK();
  }
  uStack_230 = auStack_930._0_8_;
  if ((auStack_930[8] & 1) == 0) {
    uStack_218 = auStack_920._8_8_;
    uStack_228 = auStack_930._8_8_;
    uStack_220 = auStack_920._0_8_;
  }
  else {
    func_0x0412e5e0(&uStack_228,auStack_920._8_8_,auStack_920._0_8_);
  }
  uStack_210 = lStack_910;
  uStack_820 = 0;
  uStack_818 = 0;
  uStack_830 = 0;
  bStack_828 = 0;
  uStack_827 = 0;
  auStack_840 = (undefined1  [16])0x0;
  uStack_850 = 0;
  uStack_84c = 0;
  uStack_848 = 0;
  uStack_844 = 0;
  iStack_860 = 0;
  uStack_85c = 0;
  uStack_858 = 0;
  uStack_854 = 0;
  uStack_810 = 0;
  plStack_880 = (long *)0xffffffffffffffff;
  plStack_878 = (long *)0x0;
  stack0xfffffffffffff791 = SUB1615((undefined1  [16])0x0,1);
  auStack_870[0] = 0xff;
  plStack_888 = (long *)&UNK_0f4e3c70;
  func_0x041679a0(&pcStack_868);
  uVar17 = func_0x041681f0(&pcStack_868,0xf547a30);
  iStack_860 = (int)uVar17;
  uStack_85c = (uint)((ulong)uVar17 >> 0x20);
  uVar17 = func_0x041681f0(&pcStack_868,0xf547770);
  uStack_858 = (undefined4)uVar17;
  uStack_854 = (uint)((ulong)uVar17 >> 0x20);
  uStack_850 = 0;
  uStack_84c = 0;
  uStack_848 = 0;
  uStack_844 = 0;
  auStack_840 = (undefined1  [16])0x0;
  uStack_830 = 0;
  bStack_828 = 0;
  uStack_827 = 0;
  uStack_820 = 0;
  uStack_818 = 0;
  uStack_810 = 0;
  bStack_5e0 = 10;
  uStack_5df = 0x2b535c5e;
  uStack_5db = 0x24;
  func_0x0ed60210(&plStack_888,&bStack_5e0,0);
  uStack_2f0 = auStack_870[0];
  plStack_300 = plStack_880;
  uStack_2f8 = plStack_878;
  puStack_308 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_2e8,&pcStack_868);
  uStack_2e0 = CONCAT44(uStack_85c,iStack_860);
  uStack_2d8 = CONCAT44(uStack_854,uStack_858);
  uStack_2d0 = CONCAT44(uStack_84c,uStack_850);
  uStack_2c8 = CONCAT44(uStack_844,uStack_848);
  uStack_2c0 = auStack_840._0_8_;
  plStack_2b8 = (long *)auStack_840._8_8_;
  if ((long *)auStack_840._8_8_ != (long *)0x0) {
    LOCK();
    *(long *)(auStack_840._8_8_ + 8) = *(long *)(auStack_840._8_8_ + 8) + 1;
    UNLOCK();
  }
  uStack_2b0 = uStack_830;
  if ((bStack_828 & 1) == 0) {
    uStack_298 = uStack_818;
    uStack_2a8 = CONCAT71(uStack_827,bStack_828);
    uStack_2a0 = uStack_820;
  }
  else {
    func_0x0412e5e0(&uStack_2a8,uStack_818,uStack_820);
  }
  uStack_290 = uStack_810;
  uStack_1c8 = 0xffffffffffffffff;
  uStack_1c0 = 0;
  uStack_1b8 = 0xff;
  puStack_1d0 = &UNK_0f497470;
  func_0x0db8d170(auStack_1b0,&puStack_508,&puStack_4c8,&puStack_288,&puStack_308);
  uStack_1b8 = 0xff;
  if ((int)plStack_460 == 4) {
    lVar24 = func_0x0ed43c80(&plStack_488);
    lVar24 = *(long *)(lVar24 + 0x48);
    puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
    if (puVar23 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x1a0,0);
    }
LAB_0ecd5340:
    *(undefined1 *)(puVar23 + 3) = uStack_1b8;
    puVar23[1] = uStack_1c8;
    puVar23[2] = uStack_1c0;
    *puVar23 = &UNK_0f497470;
    func_0x0db8d440(puVar23 + 4,auStack_1b0);
    plVar15 = *(long **)(lVar24 + 8);
    *(undefined8 **)(lVar24 + 8) = puVar23;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x28))();
    }
  }
  else if ((int)plStack_460 == 1) {
    lVar24 = func_0x0ed43b30(&plStack_488);
    lVar24 = *(long *)(lVar24 + 0x58);
    puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
    if (puVar23 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x1a0,0);
    }
    goto LAB_0ecd5340;
  }
  uStack_358 = uStack_458;
  pcStack_368 = pcStack_468;
  plStack_360 = plStack_460;
  plStack_378 = plStack_478;
  pcStack_370 = pcStack_470;
  plStack_388 = plStack_488;
  plStack_380 = plStack_480;
  func_0x0ed431e0(auStack_808,&plStack_388,&UNK_011e8f56,0xd,0);
  pcVar16 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar16 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar16 = &UNK_0f4e2658;
  if (pcStack_7f0 != (code *)0x0) {
    lVar24 = *(long *)pcStack_7f0;
    pcStack_7f0 = pcVar16;
    (**(code **)(lVar24 + 8))();
    pcVar16 = pcStack_7f0;
  }
  pcStack_7f0 = pcVar16;
  plStack_908 = (long *)CONCAT44(plStack_908._4_4_,(undefined4)uStack_7f8);
  plStack_900 = (long *)0x0;
  pcStack_8f8 = (code *)((ulong)pcStack_8f8 & 0xffffffff00000000);
  _auStack_8f0 = ZEXT816(1);
  iStack_8e0 = 0xed44db0;
  uStack_8dc = 0;
  uStack_8d8 = 0x48b06d0;
  uStack_8d4 = 0;
  uStack_8d0 = 0xed44a00;
  uStack_8cc = 0;
  puStack_8c8 = &UNK_0ed44e70;
  auStack_8c0._0_12_ = ZEXT812(0xed44fe0);
  auStack_8b0 = ZEXT816(0);
  func_0x048b05a0(auStack_808._8_8_,&plStack_908);
  uVar17 = auStack_8b0._8_8_;
  if ((long *)auStack_8b0._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(auStack_8b0._8_8_ + 8);
    lVar24 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*(long *)auStack_8b0._8_8_ + 0x10))(auStack_8b0._8_8_);
      func_0x0412c2d0(uVar17);
    }
  }
  func_0x0ed434a0(auStack_808);
  uStack_318 = uStack_358;
  pcStack_328 = pcStack_368;
  plStack_320 = plStack_360;
  plStack_338 = plStack_378;
  pcStack_330 = pcStack_370;
  plStack_348 = plStack_388;
  plStack_340 = plStack_380;
  func_0x048b0bc0(&pcStack_7f0);
  uStack_548 = plStack_348;
  plStack_540 = plStack_340;
  plStack_538 = plStack_338;
  pcStack_530 = pcStack_330;
  pcStack_528 = pcStack_328;
  plStack_520 = plStack_320;
  uStack_518 = CONCAT71(uStack_317,uStack_318);
  func_0x0ed431e0(auStack_808,&uStack_548,&UNK_011b4811,10,0);
  pcVar16 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar16 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar16 = &UNK_0f4e2748;
  if (pcStack_7f0 != (code *)0x0) {
    lVar24 = *(long *)pcStack_7f0;
    pcStack_7f0 = pcVar16;
    (**(code **)(lVar24 + 8))();
    pcVar16 = pcStack_7f0;
  }
  pcStack_7f0 = pcVar16;
  plStack_908 = (long *)CONCAT44(plStack_908._4_4_,(undefined4)uStack_7f8);
  plStack_900 = (long *)0x0;
  pcStack_8f8 = (code *)((ulong)pcStack_8f8 & 0xffffffff00000000);
  _auStack_8f0 = ZEXT816(1);
  iStack_8e0 = 0xed466e0;
  uStack_8dc = 0;
  uStack_8d8 = 0x48b06d0;
  uStack_8d4 = 0;
  uStack_8d0 = 0xed46310;
  uStack_8cc = 0;
  puStack_8c8 = &UNK_0ed467a0;
  auStack_8c0._0_12_ = ZEXT812(0xed469a0);
  auStack_8b0 = ZEXT816(0);
  func_0x048b05a0(auStack_808._8_8_,&plStack_908);
  uVar17 = auStack_8b0._8_8_;
  if ((long *)auStack_8b0._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(auStack_8b0._8_8_ + 8);
    lVar24 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*(long *)auStack_8b0._8_8_ + 0x10))(auStack_8b0._8_8_);
      func_0x0412c2d0(uVar17);
    }
  }
  func_0x0ed434a0(auStack_808);
  uStack_608 = (undefined1)uStack_518;
  pcStack_618 = pcStack_528;
  plStack_610 = plStack_520;
  plStack_628 = plStack_538;
  pcStack_620 = pcStack_530;
  plStack_638 = uStack_548;
  plStack_630 = plStack_540;
  func_0x048b0bc0(&pcStack_7f0);
  plStack_5c8 = plStack_638;
  plStack_5c0 = plStack_630;
  plStack_5b8 = plStack_628;
  pcStack_5b0 = pcStack_620;
  pcStack_5a8 = pcStack_618;
  plStack_5a0 = plStack_610;
  uStack_598 = CONCAT71(uStack_607,uStack_608);
  func_0x0ed431e0(auStack_808,&plStack_5c8,&UNK_0123d5a9,4,0);
  pcVar16 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar16 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar16 = &UNK_0f4e2838;
  if (pcStack_7f0 != (code *)0x0) {
    lVar24 = *(long *)pcStack_7f0;
    pcStack_7f0 = pcVar16;
    (**(code **)(lVar24 + 8))();
    pcVar16 = pcStack_7f0;
  }
  pcStack_7f0 = pcVar16;
  plStack_908 = (long *)CONCAT44(plStack_908._4_4_,(undefined4)uStack_7f8);
  plStack_900 = (long *)0x0;
  pcStack_8f8 = (code *)((ulong)pcStack_8f8 & 0xffffffff00000000);
  _auStack_8f0 = ZEXT816(1);
  iStack_8e0 = 0xed4e1b0;
  uStack_8dc = 0;
  uStack_8d8 = 0x48b06d0;
  uStack_8d4 = 0;
  uStack_8d0 = 0xed4dde0;
  uStack_8cc = 0;
  puStack_8c8 = &UNK_0ed4e270;
  auStack_8c0._0_12_ = ZEXT812(0xed4e460);
  auStack_8b0 = ZEXT816(0);
  func_0x048b05a0(auStack_808._8_8_,&plStack_908);
  uVar17 = auStack_8b0._8_8_;
  if ((long *)auStack_8b0._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(auStack_8b0._8_8_ + 8);
    lVar24 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*(long *)auStack_8b0._8_8_ + 0x10))(auStack_8b0._8_8_);
      func_0x0412c2d0(uVar17);
    }
  }
  func_0x0ed434a0(auStack_808);
  uStack_6c8 = CONCAT71(uStack_6c8._1_7_,(undefined1)uStack_598);
  pcStack_6d8 = pcStack_5a8;
  uStack_6d0 = plStack_5a0;
  plStack_6e8 = plStack_5b8;
  pcStack_6e0 = pcStack_5b0;
  plStack_6f8 = plStack_5c8;
  plStack_6f0 = plStack_5c0;
  func_0x048b0bc0(&pcStack_7f0);
  auStack_8a0 = (undefined1  [16])0x0;
  auStack_8b0 = (undefined1  [16])0x0;
  auStack_8c0 = (undefined1  [16])0x0;
  uStack_8d0 = 0;
  uStack_8cc = 0;
  puStack_8c8 = (undefined *)0x0;
  iStack_8e0 = 0;
  uStack_8dc = 0;
  uStack_8d8 = 0;
  uStack_8d4 = 0;
  lStack_890 = 0;
  plStack_900 = (long *)0xffffffffffffffff;
  pcStack_8f8 = (code *)0x0;
  stack0xfffffffffffff711 = SUB1615((undefined1  [16])0x0,1);
  auStack_8f0[0] = 0xff;
  plStack_908 = (long *)&UNK_0f4e3c70;
  func_0x041679a0(&pcStack_8e8);
  uVar17 = func_0x041681f0(&pcStack_8e8,0xf547a30);
  iStack_8e0 = (int)uVar17;
  uStack_8dc = (uint)((ulong)uVar17 >> 0x20);
  uVar17 = func_0x041681f0(&pcStack_8e8,0xf547770);
  uStack_8d8 = (undefined4)uVar17;
  uStack_8d4 = (uint)((ulong)uVar17 >> 0x20);
  uStack_8d0 = 0;
  uStack_8cc = 0;
  puStack_8c8 = (undefined *)0x0;
  auStack_8c0 = (undefined1  [16])0x0;
  auStack_8b0 = (undefined1  [16])0x0;
  auStack_8a0 = (undefined1  [16])0x0;
  lStack_890 = 0;
  bStack_5f8 = 10;
  uStack_5f7 = 0x2b535c5e;
  uStack_5f3 = 0x24;
  func_0x0ed60210(&plStack_908,&bStack_5f8,0);
  uStack_430 = auStack_8f0[0];
  plStack_440 = plStack_900;
  lStack_438 = (long)pcStack_8f8;
  puStack_448 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_428,&pcStack_8e8);
  lStack_420 = CONCAT44(uStack_8dc,iStack_8e0);
  lStack_418 = CONCAT44(uStack_8d4,uStack_8d8);
  lStack_410 = CONCAT44(uStack_8cc,uStack_8d0);
  lStack_408 = (long)puStack_8c8;
  auStack_400 = auStack_8c0;
  if (auStack_8c0._8_8_ != 0) {
    LOCK();
    *(long *)(auStack_8c0._8_8_ + 8) = *(long *)(auStack_8c0._8_8_ + 8) + 1;
    UNLOCK();
  }
  lStack_3f0 = auStack_8b0._0_8_;
  if ((auStack_8b0[8] & 1) == 0) {
    lStack_3d8 = auStack_8a0._8_8_;
    auStack_3e8._8_8_ = auStack_8a0._0_8_;
    auStack_3e8._0_8_ = auStack_8b0._8_8_;
  }
  else {
    func_0x0412e5e0(auStack_3e8,auStack_8a0._8_8_,auStack_8a0._0_8_);
  }
  lStack_3d0 = lStack_890;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  *(undefined1 (*) [16])(plVar15 + 1) = (undefined1  [16])0x0;
  *plVar15 = (long)&UNK_0f0fb8c0;
  plVar15[4] = (long)plStack_440;
  plVar15[5] = lStack_438;
  *(undefined1 *)(plVar15 + 6) = uStack_430;
  plVar15[3] = (long)&UNK_0f4e3c70;
  func_0x04167a20(plVar15 + 7,auStack_428);
  plVar15[8] = lStack_420;
  plVar15[9] = lStack_418;
  plVar15[10] = lStack_410;
  plVar15[0xb] = lStack_408;
  plVar15[0xc] = auStack_400._0_8_;
  plVar15[0xd] = auStack_400._8_8_;
  auStack_400 = (undefined1  [16])0x0;
  plVar15[0xe] = lStack_3f0;
  plVar15[0x11] = lStack_3d8;
  plVar15[0xf] = auStack_3e8._0_8_;
  plVar15[0x10] = auStack_3e8._8_8_;
  auStack_3e8 = (undefined1  [16])0x0;
  lStack_3d8 = 0;
  plVar15[0x12] = lStack_3d0;
  if ((int)uStack_6d0 == 4) {
    lVar24 = func_0x0ed43c80(&plStack_6f8);
    lVar24 = *(long *)(lVar24 + 0x48);
    puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (puVar23 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x48,0);
    }
  }
  else {
    if ((int)uStack_6d0 != 1) goto LAB_0ecd5ccc;
    lVar24 = func_0x0ed43b30(&plStack_6f8);
    lVar24 = *(long *)(lVar24 + 0x58);
    puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (puVar23 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x48,0);
    }
  }
  puVar23[1] = 0xffffffffffffffff;
  puVar23[2] = 0;
  *(undefined1 *)(puVar23 + 3) = 0xff;
  *puVar23 = &UNK_0f4e3d70;
  puVar23[4] = 0;
  puVar23[5] = plVar15 + 3;
  puVar23[6] = plVar15;
  puVar23[7] = 0;
  puVar23[8] = 0;
  plVar15 = *(long **)(lVar24 + 8);
  *(undefined8 **)(lVar24 + 8) = puVar23;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x28))();
  }
  plVar15 = (long *)0x0;
LAB_0ecd5ccc:
  uStack_558 = CONCAT71(uStack_558._1_7_,(undefined1)uStack_6c8);
  pcStack_568 = pcStack_6d8;
  plStack_560 = uStack_6d0;
  plStack_578 = plStack_6e8;
  pcStack_570 = pcStack_6e0;
  plStack_588 = plStack_6f8;
  plStack_580 = plStack_6f0;
  func_0x0ed431e0(auStack_808,&plStack_588,&UNK_013a1027,0xf,0);
  pcVar16 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar16 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar16 = &UNK_0f0122d0;
  if (pcStack_7f0 != (code *)0x0) {
    lVar24 = *(long *)pcStack_7f0;
    pcStack_7f0 = pcVar16;
    (**(code **)(lVar24 + 8))();
    pcVar16 = pcStack_7f0;
  }
  pcStack_7f0 = pcVar16;
  plStack_6a8 = (long *)CONCAT44(plStack_6a8._4_4_,(undefined4)uStack_7f8);
  plStack_6a0 = (long *)0x0;
  plStack_698 = (long *)((ulong)plStack_698 & 0xffffffff00000000);
  pcStack_690 = (code *)0x1;
  pcStack_688 = (code *)0x0;
  plStack_680 = (long *)&UNK_05de9430;
  plStack_678 = (long *)&SUB_048b06d0;
  puStack_670 = &UNK_05de9110;
  puStack_668 = &UNK_0ed4e8e0;
  puStack_660 = &UNK_0ed4ea50;
  uStack_658 = 0;
  auStack_650._0_16_ = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_808._8_8_,&plStack_6a8);
  uVar17 = auStack_650._8_8_;
  if ((long *)auStack_650._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_650._8_8_ + 8);
    lVar24 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*(long *)auStack_650._8_8_ + 0x10))(auStack_650._8_8_);
      func_0x0412c2d0(uVar17);
    }
  }
  func_0x0ed434a0(auStack_808);
  func_0x048b0bc0(&pcStack_7f0);
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar18 = plVar15 + 1;
    lVar24 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  puStack_448 = &UNK_0f4e3c70;
  if ((auStack_3e8[0] & 1) != 0) {
    func_0x0412a280(lStack_3d8,auStack_3e8._0_8_ & 0xfffffffffffffffe);
  }
  uVar17 = auStack_400._8_8_;
  if ((long *)auStack_400._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(auStack_400._8_8_ + 8);
    lVar24 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*(long *)auStack_400._8_8_ + 0x10))(auStack_400._8_8_);
      func_0x0412c2d0(uVar17);
    }
  }
  func_0x04167a40(auStack_428);
  if ((bStack_5f8 & 1) == 0) {
  }
  else {
    func_0x0412a280(uStack_5e8,
                    CONCAT17(uStack_5f1,CONCAT25(uStack_5f3,CONCAT41(uStack_5f7,bStack_5f8))) &
                    0xfffffffffffffffe);
  }
  if ((auStack_8b0[8] & 1) == 0) {
    plStack_908 = (long *)&UNK_0f4e3c70;
    plVar15 = (long *)auStack_8c0._8_8_;
  }
  else {
    plStack_908 = (long *)&UNK_0f4e3c70;
    func_0x0412a280(auStack_8a0._8_8_,auStack_8b0._8_8_ & 0xfffffffffffffffe);
    plVar15 = (long *)auStack_8c0._8_8_;
  }
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar18 = plVar15 + 1;
    lVar24 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x04167a40(&pcStack_8e8);
  puStack_1d0 = &UNK_0f497470;
  func_0x0db72800(auStack_1b0);
  puStack_308 = &UNK_0f4e3c70;
  if ((uStack_2a8 & 1) != 0) {
    func_0x0412a280(uStack_298,uStack_2a8 & 0xfffffffffffffffe);
  }
  plVar15 = plStack_2b8;
  if (plStack_2b8 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_2b8 + 1;
    lVar24 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x04167a40(auStack_2e8);
  if ((bStack_5e0 & 1) != 0) {
    func_0x0412a280(uStack_5d0,
                    CONCAT17(uStack_5d9,CONCAT25(uStack_5db,CONCAT41(uStack_5df,bStack_5e0))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_828 & 1) == 0) {
    plStack_888 = (long *)&UNK_0f4e3c70;
    plVar15 = (long *)auStack_840._8_8_;
  }
  else {
    plStack_888 = (long *)&UNK_0f4e3c70;
    func_0x0412a280(uStack_818,CONCAT71(uStack_827,bStack_828) & 0xfffffffffffffffe);
    plVar15 = (long *)auStack_840._8_8_;
  }
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar18 = plVar15 + 1;
    lVar24 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x04167a40(&pcStack_868);
  puStack_288 = &UNK_0f4e3c70;
  if ((uStack_228 & 1) != 0) {
    func_0x0412a280(uStack_218,uStack_228 & 0xfffffffffffffffe);
  }
  plVar15 = plStack_238;
  if (plStack_238 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_238 + 1;
    lVar24 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plStack_238 + 0x10))(plStack_238);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x04167a40(auStack_268);
  if ((bStack_6c0 & 1) == 0) {
  }
  else {
    func_0x0412a280(uStack_6b0,
                    CONCAT17(uStack_6b9,CONCAT61(uStack_6bf,bStack_6c0)) & 0xfffffffffffffffe);
  }
  if ((auStack_930[8] & 1) == 0) {
    plStack_988 = (long *)&UNK_0f4e3c70;
    plVar15 = (long *)auStack_940._8_8_;
  }
  else {
    plStack_988 = (long *)&UNK_0f4e3c70;
    func_0x0412a280(auStack_920._8_8_,auStack_930._8_8_ & 0xfffffffffffffffe);
    plVar15 = (long *)auStack_940._8_8_;
  }
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar18 = plVar15 + 1;
    lVar24 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  func_0x04167a40(&uStack_968);
  puStack_4c8 = &UNK_0f489570;
  if ((cStack_490 == '\x01') && ((bStack_4a8 & 1) != 0)) {
    func_0x0412a280(uStack_498,CONCAT71(uStack_4a7,bStack_4a8) & 0xfffffffffffffffe);
  }
  puStack_508 = &UNK_0f489570;
  if ((cStack_4d0 == '\x01') && ((uStack_4e8 & 1) != 0)) {
    func_0x0412a280(uStack_4d8,uStack_4e8 & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 */
