/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x676eae0 (ELF vaddr 0x666eae0)
 * Label: caller-of-callee
 * Body:  [[0676eae0, 06771e02] [06771e10, 06772039] [06772040, 067724e0]]
 * Ghidra: FUN_0676eae0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0676eae0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong ***pppuVar3;
  int iVar4;
  ulong *puVar5;
  ulong ****ppppuVar6;
  undefined8 uVar7;
  ulong ****ppppuVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  ulong ***pppuVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  ulong **ppuVar22;
  ulong **ppuVar23;
  long lVar24;
  ulong **ppuVar25;
  undefined8 in_R8;
  undefined8 in_R9;
  uint uVar26;
  bool bVar27;
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined *puVar30;
  ulong ****ppppuStack_ca8;
  ulong ***pppuStack_ca0;
  undefined8 uStack_c98;
  undefined4 uStack_c90;
  undefined4 uStack_c8c;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  ulong ****ppppuStack_c78;
  undefined1 auStack_c70 [4];
  undefined4 uStack_c6c;
  uint uStack_c68;
  undefined4 uStack_c64;
  ulong **ppuStack_c60;
  ulong ****ppppuStack_c58;
  ulong uStack_c50;
  undefined4 uStack_c48;
  undefined4 uStack_c44;
  undefined4 uStack_c40;
  undefined4 uStack_c3c;
  long *plStack_c30;
  uint uStack_c24;
  byte bStack_c20;
  undefined4 uStack_c1f;
  undefined2 uStack_c1b;
  undefined1 uStack_c19;
  undefined8 uStack_c10;
  byte bStack_c08;
  undefined4 uStack_c07;
  undefined2 uStack_c03;
  undefined1 uStack_c01;
  undefined8 uStack_bf8;
  byte bStack_bf0;
  undefined4 uStack_bef;
  undefined2 uStack_beb;
  undefined1 uStack_be9;
  undefined8 uStack_be0;
  undefined4 uStack_bd8;
  undefined1 uStack_bd4;
  undefined2 uStack_bd3;
  undefined1 uStack_bd1;
  undefined1 uStack_bd0;
  undefined1 uStack_bcf;
  undefined2 uStack_bce;
  undefined4 uStack_bcc;
  ulong **ppuStack_bc8;
  undefined4 uStack_bc0;
  undefined4 uStack_bbc;
  undefined4 uStack_bb8;
  undefined4 uStack_bb4;
  undefined1 auStack_bb0 [16];
  undefined1 auStack_ba0 [24];
  code *pcStack_b88;
  undefined1 auStack_b60 [24];
  code *pcStack_b48;
  undefined1 auStack_b20 [24];
  code *pcStack_b08;
  undefined1 auStack_ad8 [24];
  code *pcStack_ac0;
  long lStack_a98;
  long lStack_a90;
  long lStack_a88;
  long lStack_a80;
  long lStack_a78;
  long lStack_a70;
  ulong uStack_a68;
  long *plStack_a60;
  ulong **ppuStack_a58;
  undefined1 auStack_a50 [16];
  undefined1 auStack_a40 [16];
  long lStack_a30;
  undefined8 *puStack_a28;
  undefined8 *puStack_a20;
  long lStack_a18;
  long lStack_a10;
  long lStack_a08;
  long lStack_a00;
  long lStack_9f8;
  long lStack_9f0;
  ulong uStack_9e8;
  ulong uStack_9e0;
  long lStack_9d8;
  long lStack_9d0;
  long lStack_9c8;
  long lStack_9c0;
  long lStack_9b8;
  long lStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  long lStack_998;
  ulong ***pppuStack_988;
  ulong ****ppppuStack_980;
  ulong *****pppppuStack_978;
  undefined1 uStack_970;
  undefined7 uStack_96f;
  undefined4 uStack_968;
  undefined4 uStack_964;
  undefined8 uStack_960;
  ulong ***pppuStack_958;
  ulong ***pppuStack_950;
  ulong ***pppuStack_948;
  long *plStack_940;
  long *plStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined1 auStack_918 [4];
  undefined4 uStack_914;
  undefined8 uStack_910;
  ulong **ppuStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  code *pcStack_8f0;
  undefined1 auStack_8e8 [16];
  long *plStack_8d8;
  long *plStack_8d0;
  undefined8 uStack_8c8;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined4 uStack_8b8;
  code *pcStack_8b0;
  long *plStack_8a8;
  long alStack_8a0 [3];
  code *apcStack_888 [3];
  code *pcStack_870;
  undefined1 auStack_860 [24];
  code *pcStack_848;
  undefined1 auStack_840 [24];
  code *pcStack_828;
  undefined1 auStack_818 [24];
  code *apcStack_800 [2];
  undefined1 auStack_7f0 [24];
  ulong **ppuStack_7d8;
  ulong **ppuStack_7d0;
  ulong **ppuStack_7c8;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined1 auStack_7b0 [16];
  undefined1 auStack_7a0 [8];
  code *pcStack_798;
  code *pcStack_788;
  undefined1 auStack_770 [16];
  undefined1 auStack_760 [8];
  code *pcStack_758;
  code *pcStack_748;
  undefined1 auStack_728 [8];
  undefined1 auStack_720 [16];
  code *pcStack_710;
  code *pcStack_708;
  undefined1 auStack_6e8 [16];
  undefined1 auStack_6d8 [24];
  code *pcStack_6c0;
  ulong **ppuStack_698;
  ulong **ppuStack_690;
  ulong **ppuStack_688;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined1 auStack_670 [16];
  undefined1 auStack_660 [8];
  undefined1 auStack_658 [16];
  code *pcStack_648;
  code *pcStack_640;
  undefined1 auStack_620 [16];
  undefined1 auStack_610 [8];
  code *pcStack_608;
  code *pcStack_5f8;
  undefined1 auStack_5e0 [16];
  undefined1 auStack_5d0 [8];
  code *pcStack_5c8;
  undefined1 auStack_5c0 [24];
  code *pcStack_5a8;
  undefined1 auStack_598 [24];
  code *apcStack_580 [3];
  code *pcStack_568;
  ulong **ppuStack_558;
  ulong **ppuStack_550;
  ulong **ppuStack_548;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined1 auStack_530 [8];
  code *pcStack_528;
  undefined1 auStack_520 [24];
  code *pcStack_508;
  undefined1 auStack_4f8 [24];
  code *apcStack_4e0 [3];
  code *pcStack_4c8;
  undefined1 auStack_4a0 [24];
  code *pcStack_488;
  undefined1 auStack_458 [24];
  code *pcStack_440;
  ulong ****ppppuStack_418;
  ulong uStack_410;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  ulong **ppuStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined1 auStack_3d0 [16];
  undefined1 *apuStack_3c0 [2];
  undefined *puStack_3b0;
  code *pcStack_3a8;
  undefined4 uStack_3a0;
  undefined1 uStack_39c;
  undefined8 uStack_390;
  undefined *puStack_388;
  undefined1 auStack_380 [24];
  code *pcStack_368;
  undefined1 auStack_340 [24];
  code *pcStack_328;
  undefined1 auStack_2f8 [24];
  code *pcStack_2e0;
  ulong **ppuStack_2b8;
  ulong **ppuStack_2b0;
  ulong **ppuStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [24];
  code *pcStack_268;
  undefined1 auStack_240 [24];
  code *pcStack_228;
  undefined1 auStack_200 [24];
  code *pcStack_1e8;
  undefined1 auStack_1b8 [24];
  code *pcStack_1a0;
  ulong **ppuStack_178;
  ulong **ppuStack_170;
  ulong **ppuStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [24];
  code *pcStack_128;
  undefined1 auStack_100 [24];
  code *pcStack_e8;
  undefined1 auStack_c0 [24];
  code *pcStack_a8;
  undefined1 auStack_78 [24];
  code *pcStack_60;
  
  ppuStack_908 = (ulong **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (ppuStack_908 == (ulong **)0x0) {
    FUN_0eec74c0(0x30,0);
  }
  uVar7 = _UNK_01224fe0;
  _auStack_918 = (ulong **)0x31;
  uStack_910 = (ulong **)0x2f;
  *(ulong *)((long)ppuStack_908 + 0x1f) = CONCAT71(_UNK_01224fd9,DAT_01224fd8);
  *(undefined8 *)((long)ppuStack_908 + 0x27) = uVar7;
  puVar5 = (ulong *)CONCAT17(DAT_01224fd8,_UNK_01224fd1);
  ppuStack_908[2] = _DAT_01224fc9;
  ppuStack_908[3] = puVar5;
  puVar5 = _UNK_01224fc1;
  *ppuStack_908 = _DAT_01224fb9;
  ppuStack_908[1] = puVar5;
  *(undefined1 *)((long)ppuStack_908 + 0x2f) = 0;
  uStack_a68 = 0;
  plStack_a60 = (long *)0x0;
  lStack_a78 = 0;
  lStack_a70 = 0;
  lStack_a88 = 0;
  lStack_a80 = 0;
  lStack_a98 = 0;
  lStack_a90 = 0;
  ppuStack_a58 = (ulong **)0x0;
  func_0x048b1dc0(auStack_a50);
  func_0x048b1dc0(auStack_a40);
  uStack_9a0 = 0;
  lStack_998 = 0;
  lStack_9b0 = 0;
  uStack_9a8 = 0;
  lStack_9c0 = 0;
  lStack_9b8 = 0;
  lStack_9d0 = 0;
  lStack_9c8 = 0;
  uStack_9e0 = 0;
  lStack_9d8 = 0;
  lStack_9f0 = 0;
  uStack_9e8 = 0;
  lStack_a00 = 0;
  lStack_9f8 = 0;
  lStack_a10 = 0;
  lStack_a08 = 0;
  puStack_a20 = (undefined8 *)0x0;
  lStack_a18 = 0;
  lStack_a30 = 0;
  puStack_a28 = (undefined8 *)0x0;
  if ((uStack_a68 & 1) == 0) {
    if (((ulong)_auStack_918 & 1) == 0) {
      ppuStack_a58 = ppuStack_908;
      uStack_a68 = (ulong)_auStack_918;
      plStack_a60 = (long *)uStack_910;
    }
    else {
      FUN_04885070(&uStack_a68,ppuStack_908,uStack_910);
    }
  }
  else {
    plVar18 = (long *)((ulong)_auStack_918 >> 1 & 0x7f);
    ppuVar25 = (ulong **)(auStack_918 + 1);
    if (((ulong)_auStack_918 & 1) != 0) {
      plVar18 = (long *)uStack_910;
      ppuVar25 = ppuStack_908;
    }
    func_0x04885120(&uStack_a68,ppuVar25,plVar18);
  }
  if (((ulong)_auStack_918 & 1) != 0) {
    func_0x0412a280(ppuStack_908,(ulong)_auStack_918 & 0xfffffffffffffffe);
  }
  lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar24 == 0) {
    func_0x048b0de0(auStack_918,&uStack_bd8);
    _DAT_0f54fd90 = auStack_918;
    uRam000000000f54fd94 = uStack_914;
    uVar12 = (undefined4)uStack_910;
    uVar29 = uStack_910._4_4_;
    _auStack_918 = (ulong **)0x0;
    uStack_910 = (ulong **)0x0;
    plVar18 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar12;
    uRam000000000f54fd9c = uVar29;
    if (plVar18 != (long *)0x0) {
      LOCK();
      plVar19 = plVar18 + 1;
      lVar24 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        func_0x0412c2d0(plVar18);
      }
    }
    plVar18 = (long *)uStack_910;
    if (uStack_910 != (ulong **)0x0) {
      LOCK();
      plVar19 = (long *)(uStack_910 + 1);
      lVar24 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)((long)*uStack_910 + 0x10))(uStack_910);
        func_0x0412c2d0(plVar18);
      }
    }
    lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f58a8a0 == '\0') && (iVar14 = func_0x04108328(&DAT_0f58a8a0), iVar14 != 0)) {
    func_0x06806aa0(0xf58a888,lVar24);
    func_0x0410844d(&DAT_0f58a8a0);
  }
  if ((DAT_0f58a8a0 == '\0') && (iVar14 = func_0x04108328(&DAT_0f58a8a0), iVar14 != 0)) {
    func_0x06806aa0(0xf58a888,lVar24);
    func_0x0410844d(&DAT_0f58a8a0);
  }
  _auStack_918 = (ulong **)0xf58a888;
  uStack_910 = (ulong **)CONCAT44(uStack_910._4_4_,_DAT_0f58a88c);
  ppuStack_908 = (ulong **)0x0;
  uStack_900 = (undefined *)CONCAT44(uStack_900._4_4_,0x80);
  uStack_8f8 = (undefined *)0x78;
  pcStack_8f0 = (code *)&SUB_068069c0;
  auStack_8e8._0_8_ = &UNK_06806b10;
  auStack_8e8._8_8_ = 0;
  plStack_8d8 = (long *)&UNK_068071b0;
  plStack_8d0 = (long *)0x0;
  uStack_8c8._0_4_ = 0;
  uStack_8c8._4_4_ = 0;
  uStack_8c0 = 0;
  uStack_8bc = 0;
  uStack_8b8 = 0;
  pcStack_8b0 = (code *)0x0;
  plStack_8a8 = (long *)0x0;
  alStack_8a0[0] = 0;
  func_0x048aee30(&uStack_bd8,lVar24,auStack_918,0x2ce81e47);
  lVar24 = alStack_8a0[0];
  alStack_8a0[0] = 0;
  if (lVar24 != 0) {
    func_0x048ae940(lVar24);
    func_0x0412a280(lVar24,0x78);
  }
  plVar18 = plStack_8a8;
  if (plStack_8a8 != (long *)0x0) {
    LOCK();
    plVar19 = plStack_8a8 + 1;
    lVar24 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plStack_8a8 + 0x10))(plStack_8a8);
      func_0x0412c2d0(plVar18);
    }
  }
  if ((DAT_0f585ae0 == '\0') && (iVar14 = func_0x04108328(&DAT_0f585ae0), iVar14 != 0)) {
    func_0x067ce370();
    func_0x0410844d(&DAT_0f585ae0);
  }
  auStack_918 = (undefined1  [4])_DAT_0f585acc;
  uStack_910 = (ulong **)&UNK_067ce1a0;
  plVar18 = (long *)uStack_910;
  ppuStack_908 = (ulong **)&UNK_06807240;
  puVar30 = &UNK_06807240;
  uStack_910._0_4_ = 0x67ce1a0;
  uVar12 = _DAT_0f585acc;
  uVar29 = (undefined4)uStack_910;
  uStack_910 = (ulong **)plVar18;
  func_0x05da1460(&uStack_bd8);
  lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar24 == 0) {
    func_0x048b0de0(auStack_918,&uStack_bd8);
    uRam000000000f54fd94 = uStack_914;
    _DAT_0f54fd90 = auStack_918;
    uVar10 = (undefined4)uStack_910;
    uVar11 = uStack_910._4_4_;
    auStack_918 = (undefined1  [4])0x0;
    uStack_914 = 0;
    uStack_910 = (ulong **)0x0;
    plVar18 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar10;
    uRam000000000f54fd9c = uVar11;
    if (plVar18 != (long *)0x0) {
      LOCK();
      plVar19 = plVar18 + 1;
      lVar24 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        func_0x0412c2d0(plVar18);
      }
    }
    plVar18 = (long *)uStack_910;
    if (uStack_910 != (ulong **)0x0) {
      LOCK();
      plVar19 = (long *)(uStack_910 + 1);
      lVar24 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)((long)*uStack_910 + 0x10))(uStack_910);
        func_0x0412c2d0(plVar18);
      }
    }
    lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f586d08 == '\0') && (iVar14 = func_0x04108328(&DAT_0f586d08), iVar14 != 0)) {
    func_0x06807430();
    func_0x0410844d(&DAT_0f586d08);
  }
  if ((DAT_0f586d08 == '\0') && (iVar14 = func_0x04108328(&DAT_0f586d08), iVar14 != 0)) {
    func_0x06807430();
    func_0x0410844d(&DAT_0f586d08);
  }
  _auStack_918 = (ulong **)&DAT_0f586cf0;
  uStack_910 = (ulong **)CONCAT44(uStack_910._4_4_,_DAT_0f586cf4);
  ppuStack_908 = (ulong **)0x0;
  uStack_900 = (undefined *)CONCAT44(uStack_900._4_4_,0x280);
  uStack_8f8 = (undefined *)0x20;
  pcStack_8f0 = (code *)&UNK_06807370;
  auStack_8e8._0_8_ = 0;
  auStack_8e8._8_8_ = 0;
  plStack_8d8 = (long *)&UNK_068074b0;
  plStack_8d0 = (long *)0x1;
  uStack_8c8._0_4_ = 0x65b1ed0;
  uStack_8c8._4_4_ = 0;
  uStack_8c0 = 0x6807b40;
  uStack_8bc = 0;
  uStack_8b8 = 0;
  pcStack_8b0 = (code *)0x0;
  plStack_8a8 = (long *)0x0;
  alStack_8a0[0] = 0;
  func_0x048aee30(&uStack_bd8,lVar24,auStack_918,0xba5f0b00,in_R8,in_R9,uVar12,uVar29,puVar30);
  lVar24 = alStack_8a0[0];
  alStack_8a0[0] = 0;
  if (lVar24 != 0) {
    func_0x048ae940(lVar24);
    func_0x0412a280(lVar24,0x78);
  }
  plVar18 = plStack_8a8;
  if (plStack_8a8 != (long *)0x0) {
    LOCK();
    plVar19 = plStack_8a8 + 1;
    lVar24 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plStack_8a8 + 0x10))(plStack_8a8);
      func_0x0412c2d0(plVar18);
    }
  }
  if ((DAT_0f585bc8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f585bc8), iVar14 != 0)) {
    func_0x067d0130();
    func_0x0410844d(&DAT_0f585bc8);
  }
  func_0x065ac270(&uStack_bd8,_DAT_0f585bb4,&UNK_06807b50);
  lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar24 == 0) {
    func_0x048b0de0(auStack_918,&uStack_bd8);
    _DAT_0f54fd90 = auStack_918;
    uRam000000000f54fd94 = uStack_914;
    uVar12 = (undefined4)uStack_910;
    uVar29 = uStack_910._4_4_;
    _auStack_918 = (ulong **)0x0;
    uStack_910 = (ulong **)0x0;
    plVar18 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar12;
    uRam000000000f54fd9c = uVar29;
    if (plVar18 != (long *)0x0) {
      LOCK();
      plVar19 = plVar18 + 1;
      lVar24 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        func_0x0412c2d0(plVar18);
      }
    }
    plVar18 = (long *)uStack_910;
    if (uStack_910 != (ulong **)0x0) {
      LOCK();
      plVar19 = (long *)(uStack_910 + 1);
      lVar24 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)((long)*uStack_910 + 0x10))(uStack_910);
        func_0x0412c2d0(plVar18);
      }
    }
    lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f586dc0 == '\0') && (iVar14 = func_0x04108328(&DAT_0f586dc0), iVar14 != 0)) {
    func_0x06807e30();
    func_0x0410844d(&DAT_0f586dc0);
  }
  if ((DAT_0f586dc0 == '\0') && (iVar14 = func_0x04108328(&DAT_0f586dc0), iVar14 != 0)) {
    func_0x06807e30();
    func_0x0410844d(&DAT_0f586dc0);
  }
  _auStack_918 = (ulong **)&DAT_0f586da8;
  uStack_910 = (ulong **)CONCAT44(uStack_910._4_4_,_DAT_0f586dac);
  ppuStack_908 = (ulong **)0x0;
  uStack_900 = (undefined *)CONCAT44(uStack_900._4_4_,0x280);
  uStack_8f8 = (undefined *)0x20;
  pcStack_8f0 = (code *)&UNK_06807d70;
  auStack_8e8._0_8_ = &UNK_06807eb0;
  auStack_8e8._8_8_ = 0;
  plStack_8d8 = (long *)&UNK_068082e0;
  plStack_8d0 = (long *)0x1;
  uStack_8c8._0_4_ = 0x65bd0c0;
  uStack_8c8._4_4_ = 0;
  uStack_8c0 = 0x6808370;
  uStack_8bc = 0;
  uStack_8b8 = 0;
  pcStack_8b0 = (code *)0x0;
  plStack_8a8 = (long *)0x0;
  alStack_8a0[0] = 0;
  func_0x048aee30(&uStack_bd8,lVar24,auStack_918,0xe8bfd6af);
  lVar24 = alStack_8a0[0];
  alStack_8a0[0] = 0;
  if (lVar24 != 0) {
    func_0x048ae940(lVar24);
    func_0x0412a280(lVar24,0x78);
  }
  plVar18 = plStack_8a8;
  if (plStack_8a8 != (long *)0x0) {
    LOCK();
    plVar19 = plStack_8a8 + 1;
    lVar24 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plStack_8a8 + 0x10))(plStack_8a8);
      func_0x0412c2d0(plVar18);
    }
  }
  if ((DAT_0f585d38 == '\0') && (iVar14 = func_0x04108328(&DAT_0f585d38), iVar14 != 0)) {
    func_0x067d12f0();
    func_0x0410844d(&DAT_0f585d38);
  }
  func_0x065ac270(&uStack_bd8,_DAT_0f585d24,&UNK_06808380);
  lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar24 == 0) {
    func_0x048b0de0(auStack_918,&uStack_bd8);
    _DAT_0f54fd90 = auStack_918;
    uRam000000000f54fd94 = uStack_914;
    uVar12 = (undefined4)uStack_910;
    uVar29 = uStack_910._4_4_;
    _auStack_918 = (ulong **)0x0;
    uStack_910 = (ulong **)0x0;
    plVar18 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar12;
    uRam000000000f54fd9c = uVar29;
    if (plVar18 != (long *)0x0) {
      LOCK();
      plVar19 = plVar18 + 1;
      lVar24 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        func_0x0412c2d0(plVar18);
      }
    }
    plVar18 = (long *)uStack_910;
    if (uStack_910 != (ulong **)0x0) {
      LOCK();
      plVar19 = (long *)(uStack_910 + 1);
      lVar24 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)((long)*uStack_910 + 0x10))(uStack_910);
        func_0x0412c2d0(plVar18);
      }
    }
    lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f586e78 == '\0') && (iVar14 = func_0x04108328(&DAT_0f586e78), iVar14 != 0)) {
    func_0x06808640();
    func_0x0410844d(&DAT_0f586e78);
  }
  if ((DAT_0f586e78 == '\0') && (iVar14 = func_0x04108328(&DAT_0f586e78), iVar14 != 0)) {
    func_0x06808640();
    func_0x0410844d(&DAT_0f586e78);
  }
  _auStack_918 = (ulong **)&DAT_0f586e60;
  uStack_910 = (ulong **)CONCAT44(uStack_910._4_4_,_DAT_0f586e64);
  ppuStack_908 = (ulong **)0x0;
  uStack_900 = (undefined *)CONCAT44(uStack_900._4_4_,0x280);
  uStack_8f8 = (undefined *)0x10;
  pcStack_8f0 = (code *)&UNK_06808580;
  auStack_8e8._0_8_ = &UNK_068086c0;
  auStack_8e8._8_8_ = 0;
  plStack_8d8 = (long *)&UNK_06808950;
  plStack_8d0 = (long *)0x1;
  uStack_8c8._0_4_ = 0x65bc1f0;
  uStack_8c8._4_4_ = 0;
  uStack_8c0 = 0x6808a00;
  uStack_8bc = 0;
  uStack_8b8 = 0;
  pcStack_8b0 = (code *)0x0;
  plStack_8a8 = (long *)0x0;
  alStack_8a0[0] = 0;
  func_0x048aee30(&uStack_bd8,lVar24,auStack_918,0xab8ba06f);
  lVar24 = alStack_8a0[0];
  alStack_8a0[0] = 0;
  if (lVar24 != 0) {
    func_0x048ae940(lVar24);
    func_0x0412a280(lVar24,0x78);
  }
  plVar18 = plStack_8a8;
  if (plStack_8a8 != (long *)0x0) {
    LOCK();
    plVar19 = plStack_8a8 + 1;
    lVar24 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plStack_8a8 + 0x10))(plStack_8a8);
      func_0x0412c2d0(plVar18);
    }
  }
  if ((DAT_0f585ea8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f585ea8), iVar14 != 0)) {
    func_0x067d20f0();
    func_0x0410844d(&DAT_0f585ea8);
  }
  func_0x065ac270(&uStack_bd8,_DAT_0f585e94,&UNK_06808a10);
  auStack_a40 = func_0x067ce030();
  bStack_c08 = 0xc;
  uStack_c07 = 0x746e6563;
  uStack_c03 = 0x7265;
  uStack_c01 = 0;
  func_0x065134a0(&uStack_bd8,&bStack_c08);
  bStack_c20 = 0xc;
  uStack_c1f = 0x6873656d;
  uStack_c1b = 0x6449;
  uStack_c19 = 0;
  func_0x064f17b0(&ppuStack_178,&bStack_c20);
  bStack_bf0 = 10;
  uStack_bef = 0x6f6c6f63;
  uStack_beb = 0x72;
  func_0x0675a590(&ppuStack_2b8,&bStack_bf0);
  auStack_c70 = (undefined1  [4])0x74706f0e;
  uStack_c6c = 0x736e6f69;
  uStack_c68 = uStack_c68 & 0xffffff00;
  uStack_3f8 = (ulong **)0x0;
  uStack_3f0 = (ulong **)0x0;
  ppuStack_3e8 = (ulong **)0x0;
  func_0x048b1dc0(&uStack_3e0);
  func_0x0652b590(auStack_3d0);
  if (((ulong)uStack_3f8 & 1) == 0) {
    if (((uint)auStack_c70 & 1) == 0) {
      ppuStack_3e8 = ppuStack_c60;
      uStack_3f8 = (ulong **)CONCAT44(uStack_c6c,auStack_c70);
      uStack_3f0 = (ulong **)CONCAT44(uStack_c64,uStack_c68);
    }
    else {
      FUN_04885070(&uStack_3f8,ppuStack_c60,CONCAT44(uStack_c64,uStack_c68));
    }
  }
  else {
    bVar27 = ((uint)auStack_c70 & 1) != 0;
    ppuVar25 = (ulong **)(auStack_c70 + 1);
    if (bVar27) {
      ppuVar25 = ppuStack_c60;
    }
    uVar20 = (ulong)(auStack_c70[0] >> 1);
    if (bVar27) {
      uVar20 = CONCAT44(uStack_c64,uStack_c68);
    }
    func_0x04885120(&uStack_3f8,ppuVar25,uVar20);
  }
  plVar18 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (plVar18 == (long *)0x0) {
    func_0x048b0de0(auStack_918,&pppuStack_988);
    _DAT_0f54fd90 = auStack_918;
    uRam000000000f54fd94 = uStack_914;
    uVar12 = (undefined4)uStack_910;
    uVar29 = uStack_910._4_4_;
    _auStack_918 = (ulong **)0x0;
    uStack_910 = (ulong **)0x0;
    plVar18 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar12;
    uRam000000000f54fd9c = uVar29;
    if (plVar18 != (long *)0x0) {
      LOCK();
      plVar19 = plVar18 + 1;
      lVar24 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        func_0x0412c2d0(plVar18);
      }
    }
    plVar18 = (long *)uStack_910;
    if (uStack_910 != (ulong **)0x0) {
      LOCK();
      plVar19 = (long *)(uStack_910 + 1);
      lVar24 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)((long)*uStack_910 + 0x10))(uStack_910);
        func_0x0412c2d0(plVar18);
      }
    }
    plVar18 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (DAT_0f586f98 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f586f98);
    if (iVar14 != 0) {
      func_0x06808b20();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f586f18,0xf53dab8);
      func_0x0410844d(&DAT_0f586f98);
    }
  }
  plVar19 = (long *)(*plVar18 +
                    (ulong)((int)((ulong)(plVar18[1] - *plVar18) >> 3) - 1U &
                           *(uint *)(_DAT_0f586f18 + 4)) * 8);
  do {
    lVar24 = *plVar19;
    if (lVar24 == -1) goto LAB_0676f7a0;
    plVar19 = (long *)(plVar18[3] + lVar24 * 0x18);
  } while (*(uint *)(plVar18[3] + 8 + lVar24 * 0x18) != *(uint *)(_DAT_0f586f18 + 4));
  if (plVar19 == (long *)plVar18[4]) {
LAB_0676f7a0:
    uStack_3e0 = &DAT_0f586f18;
  }
  else {
    uStack_3e0 = (undefined *)plVar19[2];
  }
  uStack_3d8 = plVar18;
  if (pcStack_3a8 != (code *)0x0) {
    (*pcStack_3a8)(apuStack_3c0);
  }
  puStack_3b0 = &UNK_06808f10;
  uStack_3a0 = 0xf7cff6ea;
  pcStack_3a8 = (code *)&UNK_06809030;
  uStack_39c = 1;
  apuStack_3c0[0] = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x2c);
  if (apuStack_3c0[0] == (undefined1 *)0x0) {
    FUN_0eec74c0(0x2c,0);
  }
  puVar30 = puStack_388;
  *apuStack_3c0[0] = 0;
  apuStack_3c0[0][0x28] = 0;
  puStack_388 = &UNK_06808d60;
  if (puVar30 != &UNK_06808d60) {
    uStack_390 = 0;
  }
  func_0x06523ef0(auStack_918,auStack_bb0);
  plStack_c30 = param_1;
  func_0x06523ef0(apcStack_800,auStack_150);
  func_0x06523ef0(auStack_6e8,auStack_290);
  func_0x06523ef0(auStack_5d0,auStack_3d0);
  uStack_c88 = (ulong ****)0x0;
  uStack_c80 = (ulong ****)0x0;
  ppppuStack_c78 = (ulong ****)0x0;
  pppuStack_ca0 = (ulong ***)((ulong)pppuStack_ca0 & 0xffffffffffffff00);
  ppppuStack_ca8 = (ulong ****)&uStack_c88;
  ppppuStack_c58 = (ulong ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x460);
  if (ppppuStack_c58 == (ulong ****)0x0) {
    FUN_0eec74c0(0x460,0);
  }
  ppppuStack_c78 = ppppuStack_c58 + 0x8c;
  ppppuStack_980 = (ulong ****)&ppppuStack_418;
  pppppuStack_978 = &ppppuStack_c58;
  uStack_970 = 0;
  uStack_c88 = ppppuStack_c58;
  uStack_c80 = ppppuStack_c58;
  pppuStack_988 = (ulong ***)&uStack_c88;
  ppppuStack_418 = ppppuStack_c58;
  func_0x06523ef0(ppppuStack_c58,auStack_918);
  ppppuStack_c58 = ppppuStack_c58 + 0x23;
  func_0x06523ef0(ppppuStack_c58,apcStack_800);
  ppppuStack_c58 = ppppuStack_c58 + 0x23;
  func_0x06523ef0(ppppuStack_c58,auStack_6e8);
  ppppuStack_c58 = ppppuStack_c58 + 0x23;
  func_0x06523ef0(ppppuStack_c58,auStack_5d0);
  uStack_c80 = ppppuStack_c58 + 0x23;
  if (apcStack_4e0[0] != (code *)0x0) {
    (*apcStack_4e0[0])(auStack_4f8);
  }
  if (pcStack_528 != (code *)0x0) {
    (*pcStack_528)(&uStack_540);
  }
  if (pcStack_568 != (code *)0x0) {
    (*pcStack_568)(apcStack_580);
  }
  if (pcStack_5a8 != (code *)0x0) {
    (*pcStack_5a8)(auStack_5c0);
  }
  if (pcStack_5f8 != (code *)0x0) {
    (*pcStack_5f8)(auStack_610);
  }
  if (pcStack_640 != (code *)0x0) {
    (*pcStack_640)(auStack_658);
  }
  if ((code *)CONCAT44(uStack_67c,uStack_680) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_67c,uStack_680))(&ppuStack_698);
  }
  if (pcStack_6c0 != (code *)0x0) {
    (*pcStack_6c0)(auStack_6d8);
  }
  if (pcStack_710 != (code *)0x0) {
    (*pcStack_710)(auStack_728);
  }
  if (pcStack_758 != (code *)0x0) {
    (*pcStack_758)(auStack_770);
  }
  if (pcStack_798 != (code *)0x0) {
    (*pcStack_798)(auStack_7b0);
  }
  if (ppuStack_7d8 != (ulong **)0x0) {
    (*(code *)ppuStack_7d8)(auStack_7f0);
  }
  if (pcStack_828 != (code *)0x0) {
    (*pcStack_828)(auStack_840);
  }
  if (pcStack_870 != (code *)0x0) {
    (*pcStack_870)(apcStack_888);
  }
  if (pcStack_8b0 != (code *)0x0) {
    (*pcStack_8b0)(&uStack_8c8);
  }
  if (pcStack_8f0 != (code *)0x0) {
    (*pcStack_8f0)(&ppuStack_908);
  }
  pppppuStack_978 = (ulong *****)0x0;
  uStack_964 = 0;
  uStack_960 = 0;
  uStack_928 = 0;
  uStack_920 = 0;
  plStack_938 = (long *)0x0;
  uStack_930 = 0;
  pppuStack_948 = (ulong ***)0x0;
  plStack_940 = (long *)0x0;
  pppuStack_958 = (ulong ***)0x0;
  pppuStack_950 = (ulong ***)0x0;
  pppuStack_988 = (ulong ***)0x0;
  ppppuStack_980 = (ulong ****)0x0;
  uStack_970 = 0x16;
  uStack_96f = 0x757274736e6f63;
  uStack_968 = 0x726f7463;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
  if (puVar15 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x68,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f050790;
  uVar12 = func_0x0d858500(&uStack_c88);
  plVar18 = puVar15 + 3;
  *(undefined1 *)(puVar15 + 4) = 1;
  *(undefined4 *)((long)puVar15 + 0x24) = uVar12;
  *(undefined4 *)(puVar15 + 5) = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[8] = 0;
  puVar15[3] = &UNK_0f0507e0;
  *(undefined4 *)(puVar15 + 10) = (undefined4)uStack_c88;
  *(undefined4 *)((long)puVar15 + 0x54) = uStack_c88._4_4_;
  *(undefined4 *)(puVar15 + 0xb) = (undefined4)uStack_c80;
  *(undefined4 *)((long)puVar15 + 0x5c) = uStack_c80._4_4_;
  puVar15[0xc] = ppppuStack_c78;
  uStack_c88 = (ulong ****)0x0;
  uStack_c80 = (ulong ****)0x0;
  ppppuStack_c78 = (ulong ****)0x0;
  uVar12 = func_0x0d858620(plVar18);
  plVar19 = plStack_938;
  *(undefined4 *)(puVar15 + 5) = uVar12;
  plStack_940 = plVar18;
  if (plStack_938 == (long *)0x0) {
LAB_0676fc7a:
    lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    plStack_938 = puVar15;
  }
  else {
    LOCK();
    plVar18 = plStack_938 + 1;
    lVar24 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar24 != 0) goto LAB_0676fc7a;
    lVar24 = *plStack_938;
    plStack_938 = puVar15;
    (**(code **)(lVar24 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (lVar24 == 0) {
    func_0x048b0de0(auStack_918,&ppppuStack_ca8);
    _DAT_0f54fd90 = auStack_918;
    uRam000000000f54fd94 = uStack_914;
    uVar12 = (undefined4)uStack_910;
    uVar29 = uStack_910._4_4_;
    _auStack_918 = (ulong **)0x0;
    uStack_910 = (ulong **)0x0;
    plVar18 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar12;
    uRam000000000f54fd9c = uVar29;
    if (plVar18 != (long *)0x0) {
      LOCK();
      plVar19 = plVar18 + 1;
      lVar24 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        func_0x0412c2d0(plVar18);
      }
    }
    plVar18 = (long *)uStack_910;
    if (uStack_910 != (ulong **)0x0) {
      LOCK();
      plVar19 = (long *)(uStack_910 + 1);
      lVar24 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)((long)*uStack_910 + 0x10))(uStack_910);
        func_0x0412c2d0(plVar18);
      }
    }
    lVar24 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (DAT_0f586fb8 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f586fb8);
    if (iVar14 != 0) {
      func_0x06808c50();
      func_0x0410844d(&DAT_0f586fb8);
    }
  }
  if (DAT_0f586fb8 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f586fb8);
    if (iVar14 != 0) {
      func_0x06808c50();
      func_0x0410844d(&DAT_0f586fb8);
    }
  }
  _auStack_918 = (ulong **)&DAT_0f586fa0;
  uStack_910 = (ulong **)CONCAT44(uStack_910._4_4_,_DAT_0f586fa4);
  ppuStack_908 = (ulong **)0x0;
  uStack_900 = (undefined *)CONCAT44(uStack_900._4_4_,0x80);
  uStack_8f8 = (undefined *)0x2c;
  pcStack_8f0 = (code *)&UNK_06808a60;
  auStack_8e8._0_8_ = &UNK_06808cd0;
  auStack_8e8._8_8_ = 0;
  plStack_8d8 = (long *)&UNK_06809050;
  plStack_8d0 = (long *)0x1;
  uStack_8c8._0_4_ = 0x48b5640;
  uStack_8c8._4_4_ = 0;
  uStack_8c0 = 0x68090e0;
  uStack_8bc = 0;
  uStack_8b8 = 0;
  pcStack_8b0 = (code *)0x0;
  plStack_8a8 = (long *)0x0;
  alStack_8a0[0] = 0;
  func_0x048aee30(&ppppuStack_418,lVar24,auStack_918,0xf7cff6ea);
  lVar24 = alStack_8a0[0];
  alStack_8a0[0] = 0;
  if (lVar24 != 0) {
    func_0x048ae940(lVar24);
    func_0x0412a280(lVar24,0x78);
  }
  plVar18 = plStack_8a8;
  if (plStack_8a8 != (long *)0x0) {
    LOCK();
    plVar19 = plStack_8a8 + 1;
    lVar24 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plStack_8a8 + 0x10))(plStack_8a8);
      func_0x0412c2d0(plVar18);
    }
  }
  if (DAT_0f586fe8 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f586fe8);
    if (iVar14 != 0) {
      func_0x0680bde0();
      func_0x0410844d(&DAT_0f586fe8);
    }
  }
  auStack_918 = (undefined1  [4])_DAT_0f586fd4;
  uStack_910 = (ulong **)0x1;
  ppuStack_908 = (ulong **)&UNK_0680bad0;
  uStack_900 = &UNK_0680bb90;
  func_0x065abe60(&ppppuStack_418);
  uStack_c48 = uStack_408;
  uStack_c44 = uStack_404;
  uStack_c40 = uStack_400;
  uStack_c3c = uStack_3fc;
  ppppuStack_c58 = ppppuStack_418;
  uStack_c50 = uStack_410;
  auStack_918 = (undefined1  [4])0xf55160ec;
  uStack_910 = (ulong **)0x0;
  ppuStack_908 = (ulong **)((ulong)ppuStack_908 & 0xffffffff00000000);
  uStack_900 = (undefined *)0x0;
  uStack_8f8 = &UNK_065b4120;
  pcStack_8f0 = (code *)&SUB_048b06d0;
  auStack_8e8._0_8_ = &UNK_0680c100;
  auStack_8e8._8_8_ = 0;
  plStack_8d8 = (long *)((ulong)plStack_8d8 & 0xffffffff00000000);
  plStack_8d0 = (long *)0x0;
  uStack_8c8._0_4_ = 0;
  uStack_8c8._4_4_ = 0;
  func_0x049057f0(&ppppuStack_c58,auStack_918);
  func_0x048aea50(auStack_918);
  uStack_c98 = (ulong ***)CONCAT44(uStack_c44,uStack_c48);
  uStack_c90 = uStack_c40;
  uStack_c8c = uStack_c3c;
  ppppuStack_ca8 = ppppuStack_c58;
  pppuStack_ca0 = (ulong ***)uStack_c50;
  _auStack_918 = (ulong **)CONCAT44(uStack_914,0xf55160ec);
  uStack_910 = (ulong **)0x0;
  ppuStack_908 = (ulong **)CONCAT44(ppuStack_908._4_4_,1);
  uStack_900 = (undefined *)0x0;
  uStack_8f8 = &UNK_065b4120;
  pcStack_8f0 = (code *)&SUB_048b06d0;
  auStack_8e8._0_8_ = &UNK_0680c3b0;
  auStack_8e8._8_8_ = 0;
  plStack_8d8 = (long *)((ulong)plStack_8d8 & 0xffffffff00000000);
  plStack_8d0 = (long *)0x0;
  uStack_8c8._0_4_ = 0;
  uStack_8c8._4_4_ = 0;
  func_0x049057f0(&ppppuStack_ca8,auStack_918);
  func_0x048aea50(auStack_918);
  ppuStack_908 = ppuStack_bc8;
  _auStack_918 = (ulong **)CONCAT17(uStack_bd1,CONCAT25(uStack_bd3,CONCAT14(uStack_bd4,uStack_bd8)))
  ;
  uStack_910 = (ulong **)CONCAT44(uStack_bcc,CONCAT22(uStack_bce,CONCAT11(uStack_bcf,uStack_bd0)));
  uStack_bd8 = 0;
  uStack_bd4 = 0;
  uStack_bd3 = 0;
  uStack_bd1 = 0;
  uStack_bd0 = 0;
  uStack_bcf = 0;
  uStack_bce = 0;
  uStack_bcc = 0;
  ppuStack_bc8 = (ulong **)0x0;
  uStack_900 = (undefined *)CONCAT44(uStack_bbc,uStack_bc0);
  uStack_8f8 = (undefined *)CONCAT44(uStack_bb4,uStack_bb8);
  func_0x065281f0(&pcStack_8f0,auStack_bb0);
  ppuStack_7c8 = ppuStack_168;
  ppuStack_7d8 = ppuStack_178;
  ppuStack_7d0 = ppuStack_170;
  ppuStack_178 = (ulong **)0x0;
  ppuStack_170 = (ulong **)0x0;
  ppuStack_168 = (ulong **)0x0;
  uStack_7c0 = uStack_160;
  uStack_7bc = uStack_15c;
  uStack_7b8 = uStack_158;
  uStack_7b4 = uStack_154;
  func_0x065281f0(auStack_7b0,auStack_150);
  ppuStack_688 = ppuStack_2a8;
  ppuStack_698 = ppuStack_2b8;
  ppuStack_690 = ppuStack_2b0;
  ppuStack_2b8 = (ulong **)0x0;
  ppuStack_2b0 = (ulong **)0x0;
  ppuStack_2a8 = (ulong **)0x0;
  uStack_680 = uStack_2a0;
  uStack_67c = uStack_29c;
  uStack_678 = uStack_298;
  uStack_674 = uStack_294;
  func_0x065281f0(auStack_670,auStack_290);
  ppuStack_548 = ppuStack_3e8;
  ppuStack_558 = uStack_3f8;
  ppuStack_550 = uStack_3f0;
  uStack_3f8 = (ulong **)0x0;
  uStack_3f0 = (ulong **)0x0;
  ppuStack_3e8 = (ulong **)0x0;
  uStack_540 = (undefined4)uStack_3e0;
  uStack_53c = uStack_3e0._4_4_;
  uStack_538 = (undefined4)uStack_3d8;
  uStack_534 = uStack_3d8._4_4_;
  func_0x065281f0(auStack_530,auStack_3d0);
  ppppuStack_ca8 = (ulong ****)0x0;
  pppuStack_ca0 = (ulong ***)0x0;
  uStack_c98 = (ulong ***)0x0;
  uStack_c50 = uStack_c50 & 0xffffffffffffff00;
  ppppuStack_c58 = (ulong ****)&ppppuStack_ca8;
  pppuVar16 = (ulong ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x500);
  if (pppuVar16 == (ulong ***)0x0) {
    FUN_0eec74c0(0x500,0);
  }
  pppuVar3 = pppuVar16 + 0xa0;
  ppppuStack_ca8 = (ulong ****)pppuVar16;
  pppuStack_ca0 = pppuVar16;
  uStack_c98 = pppuVar3;
  if (((ulong)_auStack_918 & 1) == 0) {
    pppuVar16[2] = ppuStack_908;
    *pppuVar16 = _auStack_918;
    pppuVar16[1] = uStack_910;
  }
  else {
    func_0x0412e5e0(pppuVar16,ppuStack_908,uStack_910);
  }
  *(undefined4 *)(pppuVar16 + 3) = (undefined4)uStack_900;
  *(undefined4 *)((long)pppuVar16 + 0x1c) = uStack_900._4_4_;
  *(undefined4 *)(pppuVar16 + 4) = (undefined4)uStack_8f8;
  *(undefined4 *)((long)pppuVar16 + 0x24) = uStack_8f8._4_4_;
  func_0x06523ef0(pppuVar16 + 5,&pcStack_8f0);
  if (((ulong)ppuStack_7d8 & 1) == 0) {
    pppuVar16[0x2a] = ppuStack_7c8;
    pppuVar16[0x28] = ppuStack_7d8;
    pppuVar16[0x29] = ppuStack_7d0;
  }
  else {
    func_0x0412e5e0(pppuVar16 + 0x28,ppuStack_7c8,ppuStack_7d0);
  }
  *(undefined4 *)(pppuVar16 + 0x2b) = uStack_7c0;
  *(undefined4 *)((long)pppuVar16 + 0x15c) = uStack_7bc;
  *(undefined4 *)(pppuVar16 + 0x2c) = uStack_7b8;
  *(undefined4 *)((long)pppuVar16 + 0x164) = uStack_7b4;
  func_0x06523ef0(pppuVar16 + 0x2d,auStack_7b0);
  if (((ulong)ppuStack_698 & 1) == 0) {
    pppuVar16[0x52] = ppuStack_688;
    pppuVar16[0x50] = ppuStack_698;
    pppuVar16[0x51] = ppuStack_690;
  }
  else {
    func_0x0412e5e0(pppuVar16 + 0x50,ppuStack_688,ppuStack_690);
  }
  *(undefined4 *)(pppuVar16 + 0x53) = uStack_680;
  *(undefined4 *)((long)pppuVar16 + 0x29c) = uStack_67c;
  *(undefined4 *)(pppuVar16 + 0x54) = uStack_678;
  *(undefined4 *)((long)pppuVar16 + 0x2a4) = uStack_674;
  func_0x06523ef0(pppuVar16 + 0x55,auStack_670);
  if (((ulong)ppuStack_558 & 1) == 0) {
    pppuVar16[0x7a] = ppuStack_548;
    pppuVar16[0x78] = ppuStack_558;
    pppuVar16[0x79] = ppuStack_550;
  }
  else {
    func_0x0412e5e0(pppuVar16 + 0x78,ppuStack_548,ppuStack_550);
  }
  *(undefined4 *)(pppuVar16 + 0x7b) = uStack_540;
  *(undefined4 *)((long)pppuVar16 + 0x3dc) = uStack_53c;
  *(undefined4 *)(pppuVar16 + 0x7c) = uStack_538;
  *(undefined4 *)((long)pppuVar16 + 0x3e4) = uStack_534;
  func_0x06523ef0(pppuVar16 + 0x7d,auStack_530);
  pppuStack_ca0 = pppuVar3;
  if (pcStack_440 != (code *)0x0) {
    (*pcStack_440)(auStack_458);
  }
  if (pcStack_488 != (code *)0x0) {
    (*pcStack_488)(auStack_4a0);
  }
  if (pcStack_4c8 != (code *)0x0) {
    (*pcStack_4c8)(apcStack_4e0);
  }
  if (pcStack_508 != (code *)0x0) {
    (*pcStack_508)(auStack_520);
  }
  if (((ulong)ppuStack_558 & 1) != 0) {
    func_0x0412a280(ppuStack_548,(ulong)ppuStack_558 & 0xfffffffffffffffe);
  }
  if (apcStack_580[0] != (code *)0x0) {
    (*apcStack_580[0])(auStack_598);
  }
  if (pcStack_5c8 != (code *)0x0) {
    (*pcStack_5c8)(auStack_5e0);
  }
  if (pcStack_608 != (code *)0x0) {
    (*pcStack_608)(auStack_620);
  }
  if (pcStack_648 != (code *)0x0) {
    (*pcStack_648)(auStack_660);
  }
  if (((ulong)ppuStack_698 & 1) != 0) {
    func_0x0412a280(ppuStack_688,(ulong)ppuStack_698 & 0xfffffffffffffffe);
  }
  if (pcStack_6c0 != (code *)0x0) {
    (*pcStack_6c0)(auStack_6d8);
  }
  if (pcStack_708 != (code *)0x0) {
    (*pcStack_708)(auStack_720);
  }
  if (pcStack_748 != (code *)0x0) {
    (*pcStack_748)(auStack_760);
  }
  if (pcStack_788 != (code *)0x0) {
    (*pcStack_788)(auStack_7a0);
  }
  if (((ulong)ppuStack_7d8 & 1) != 0) {
    func_0x0412a280(ppuStack_7c8,(ulong)ppuStack_7d8 & 0xfffffffffffffffe);
  }
  if (apcStack_800[0] != (code *)0x0) {
    (*apcStack_800[0])(auStack_818);
  }
  if (pcStack_848 != (code *)0x0) {
    (*pcStack_848)(auStack_860);
  }
  if (apcStack_888[0] != (code *)0x0) {
    (*apcStack_888[0])(alStack_8a0);
  }
  if ((code *)CONCAT44(uStack_8c8._4_4_,(undefined4)uStack_8c8) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_8c8._4_4_,(undefined4)uStack_8c8))(auStack_8e8 + 8);
  }
  if (((ulong)_auStack_918 & 1) != 0) {
    func_0x0412a280(ppuStack_908,(ulong)_auStack_918 & 0xfffffffffffffffe);
  }
  uVar13 = (**(code **)(*plStack_940 + 0x20))();
  uVar21 = ((long)pppuStack_ca0 - (long)ppppuStack_ca8 >> 6) * -0x3333333333333333;
  uVar20 = 0;
  if ((uVar13 != 0) && ((uint)uVar21 != 0)) {
    uVar26 = 0;
    uVar20 = 0;
    uStack_c24 = uVar13;
    do {
      auVar28 = (**(code **)(*plStack_940 + 0x28))(plStack_940,uVar26);
      ppuVar25 = auVar28._8_8_;
      lVar24 = auVar28._0_8_;
      auVar28 = func_0x06527d70();
      if (auVar28._8_8_ == ppuVar25) {
        if (auVar28._0_8_ == 0) {
          lVar17 = func_0x048aead0(auVar28._8_8_);
          iVar14 = *(int *)(lVar17 + 8);
          if (lVar24 != 0) goto LAB_06770641;
LAB_0677065e:
          lVar17 = func_0x048aead0(ppuVar25);
          if (iVar14 != *(int *)(lVar17 + 8)) goto LAB_06770670;
        }
        else {
          iVar14 = *(int *)(auVar28._0_8_ + 8);
          if (lVar24 == 0) goto LAB_0677065e;
LAB_06770641:
          if (iVar14 != *(int *)(lVar24 + 8)) goto LAB_06770670;
        }
      }
      else {
LAB_06770670:
        auVar28 = func_0x06527e30();
        if (auVar28._8_8_ == ppuVar25) {
          if (auVar28._0_8_ == 0) {
            lVar17 = func_0x048aead0(auVar28._8_8_);
            iVar14 = *(int *)(lVar17 + 8);
          }
          else {
            iVar14 = *(int *)(auVar28._0_8_ + 8);
          }
          if (lVar24 == 0) {
            lVar17 = func_0x048aead0(ppuVar25);
            iVar4 = *(int *)(lVar17 + 8);
          }
          else {
            iVar4 = *(int *)(lVar24 + 8);
          }
          if (iVar14 == iVar4) goto LAB_06770865;
        }
        auVar28 = func_0x06527ef0();
        if (auVar28._8_8_ == ppuVar25) {
          if (auVar28._0_8_ == 0) {
            lVar17 = func_0x048aead0(auVar28._8_8_);
            iVar14 = *(int *)(lVar17 + 8);
          }
          else {
            iVar14 = *(int *)(auVar28._0_8_ + 8);
          }
          if (lVar24 == 0) {
            lVar17 = func_0x048aead0(ppuVar25);
            iVar4 = *(int *)(lVar17 + 8);
          }
          else {
            iVar4 = *(int *)(lVar24 + 8);
          }
          if (iVar14 == iVar4) goto LAB_06770865;
        }
        auVar28 = func_0x06527fb0();
        if (auVar28._8_8_ == ppuVar25) {
          if (auVar28._0_8_ == 0) {
            lVar17 = func_0x048aead0(auVar28._8_8_);
            iVar14 = *(int *)(lVar17 + 8);
          }
          else {
            iVar14 = *(int *)(auVar28._0_8_ + 8);
          }
          if (lVar24 == 0) {
            lVar17 = func_0x048aead0(ppuVar25);
            iVar4 = *(int *)(lVar17 + 8);
          }
          else {
            iVar4 = *(int *)(lVar24 + 8);
          }
          if (iVar14 == iVar4) goto LAB_06770865;
        }
        auVar28 = func_0x06528070();
        if (auVar28._8_8_ == ppuVar25) {
          if (auVar28._0_8_ == 0) {
            lVar17 = func_0x048aead0(auVar28._8_8_);
            iVar14 = *(int *)(lVar17 + 8);
          }
          else {
            iVar14 = *(int *)(auVar28._0_8_ + 8);
          }
          if (lVar24 == 0) {
            lVar17 = func_0x048aead0(ppuVar25);
            iVar4 = *(int *)(lVar17 + 8);
          }
          else {
            iVar4 = *(int *)(lVar24 + 8);
          }
          if (iVar14 == iVar4) goto LAB_06770865;
        }
        auVar28 = func_0x06528130();
        if (auVar28._8_8_ == ppuVar25) {
          if (auVar28._0_8_ == 0) {
            lVar17 = func_0x048aead0(auVar28._8_8_);
            iVar14 = *(int *)(lVar17 + 8);
          }
          else {
            iVar14 = *(int *)(auVar28._0_8_ + 8);
          }
          if (lVar24 == 0) {
            lVar17 = func_0x048aead0(ppuVar25);
            iVar4 = *(int *)(lVar17 + 8);
          }
          else {
            iVar4 = *(int *)(lVar24 + 8);
          }
          if (iVar14 == iVar4) goto LAB_06770865;
        }
        ppppuVar6 = ppppuStack_ca8;
        pppuVar16 = pppuStack_ca0;
        plVar18 = plStack_c30;
        if (ppppuStack_ca8[uVar20 * 0x28 + 4] != (ulong ***)ppuVar25) goto joined_r0x06770a8a;
        if (ppppuStack_ca8[uVar20 * 0x28 + 3] == (ulong ***)0x0) {
          lVar17 = func_0x048aead0();
          iVar14 = *(int *)(lVar17 + 8);
          if (lVar24 != 0) goto LAB_06770835;
LAB_0677084d:
          lVar24 = func_0x048aead0(ppuVar25);
          if (iVar14 != *(int *)(lVar24 + 8)) goto LAB_06770a7a;
        }
        else {
          iVar14 = *(int *)(ppppuStack_ca8[uVar20 * 0x28 + 3] + 1);
          if (lVar24 == 0) goto LAB_0677084d;
LAB_06770835:
          if (iVar14 != *(int *)(lVar24 + 8)) goto LAB_06770a7a;
        }
        uVar20 = (ulong)((int)uVar20 + 1);
      }
LAB_06770865:
    } while (((uint)uVar20 < (uint)uVar21) && (uVar26 = uVar26 + 1, uVar26 < uStack_c24));
    uVar21 = ((long)pppuStack_ca0 - (long)ppppuStack_ca8 >> 6) * -0x3333333333333333;
  }
  pppuVar16 = pppuStack_958;
  plVar19 = plStack_c30;
  if (uVar21 == uVar20) {
    pppuVar3 = pppuStack_950;
    if (pppuStack_958 != (ulong ***)0x0) {
      while (pppuVar16 != pppuVar3) {
        func_0x05fe8450(pppuVar3 + -0x28);
        pppuVar3 = pppuVar3 + -0x28;
      }
      pppuStack_950 = pppuVar16;
      func_0x0412a280(pppuStack_958,(long)pppuStack_948 - (long)pppuStack_958);
    }
    pppuStack_948 = uStack_c98;
    if (puStack_a28 < puStack_a20) {
      *puStack_a28 = 0;
      puStack_a28[1] = 0;
      puStack_a28[2] = 0;
      *puStack_a28 = pppuStack_988;
      puStack_a28[1] = ppppuStack_980;
      puStack_a28[2] = pppppuStack_978;
      pppuStack_988 = (ulong ***)0x0;
      ppppuStack_980 = (ulong ****)0x0;
      pppppuStack_978 = (ulong *****)0x0;
      puStack_a28[5] = uStack_960;
      puStack_a28[3] = CONCAT71(uStack_96f,uStack_970);
      puStack_a28[4] = CONCAT44(uStack_964,uStack_968);
      uStack_970 = 0;
      uStack_96f = 0;
      uStack_968 = 0;
      uStack_964 = 0;
      uStack_960 = 0;
      puStack_a28[6] = 0;
      puStack_a28[7] = 0;
      puStack_a28[8] = 0;
      puStack_a28[6] = ppppuStack_ca8;
      puStack_a28[7] = pppuStack_ca0;
      puStack_a28[8] = uStack_c98;
      pppuStack_958 = (ulong ***)0x0;
      pppuStack_950 = (ulong ***)0x0;
      pppuStack_948 = (ulong ***)0x0;
      puStack_a28[9] = plStack_940;
      puStack_a28[10] = plStack_938;
      plStack_940 = (long *)0x0;
      plStack_938 = (undefined8 *)0x0;
      puStack_a28[0xb] = 0;
      puStack_a28[0xc] = 0;
      puStack_a28[0xd] = 0;
      puStack_a28[0xb] = uStack_930;
      puStack_a28[0xc] = uStack_928;
      puStack_a28[0xd] = uStack_920;
      uStack_930 = 0;
      uStack_928 = 0;
      uStack_920 = 0;
      puStack_a28 = puStack_a28 + 0xe;
    }
    else {
      pppuStack_958 = (ulong ***)ppppuStack_ca8;
      pppuStack_950 = pppuStack_ca0;
      puStack_a28 = (undefined8 *)func_0x0652ac80(&lStack_a30,&pppuStack_988);
    }
    puVar15 = puStack_a28 + -0xe;
  }
  else {
LAB_06770a7a:
    plVar19 = plStack_c30;
    ppppuVar6 = ppppuStack_ca8;
    pppuVar16 = pppuStack_ca0;
    plVar18 = plStack_c30;
    if (ppppuStack_ca8 != (ulong ****)0x0) {
joined_r0x06770a8a:
      while (plVar19 = plStack_c30, ppppuVar8 = ppppuStack_ca8, plStack_c30 = plVar18,
            ppppuStack_ca8 != (ulong ****)pppuVar16) {
        ppppuStack_ca8 = ppppuVar6;
        func_0x05fe8450(pppuVar16 + -0x28);
        ppppuVar6 = ppppuStack_ca8;
        pppuVar16 = pppuVar16 + -0x28;
        plVar18 = plStack_c30;
        plStack_c30 = plVar19;
        ppppuStack_ca8 = ppppuVar8;
      }
      pppuStack_ca0 = (ulong ***)ppppuStack_ca8;
      ppppuStack_ca8 = ppppuVar6;
      func_0x0412a280(ppppuVar6,(long)uStack_c98 - (long)ppppuVar6);
    }
    puVar15 = (undefined8 *)0xf585408;
  }
  func_0x05f93280(&pppuStack_988);
  ppuVar25 = (ulong **)uStack_c88;
  if (uStack_c88 != (ulong ****)0x0) {
    if (uStack_c88 != uStack_c80) {
      ppuVar23 = (ulong **)(uStack_c80 + -8);
      do {
        if ((code *)ppuVar23[3] != (code *)0x0) {
          (*(code *)ppuVar23[3])(ppuVar23);
        }
        if ((code *)ppuVar23[-6] != (code *)0x0) {
          (*(code *)ppuVar23[-6])(ppuVar23 + -9);
        }
        if ((code *)ppuVar23[-0xe] != (code *)0x0) {
          (*(code *)ppuVar23[-0xe])(ppuVar23 + -0x11);
        }
        if ((code *)ppuVar23[-0x16] != (code *)0x0) {
          (*(code *)ppuVar23[-0x16])(ppuVar23 + -0x19);
        }
        ppuVar22 = ppuVar23 + -0x1b;
        ppuVar23 = ppuVar23 + -0x23;
      } while (ppuVar22 != ppuVar25);
    }
    uStack_c80 = (ulong ****)ppuVar25;
    func_0x0412a280(uStack_c88,(long)ppppuStack_c78 - (long)uStack_c88);
  }
  func_0x064e40a0(puVar15);
  if (pcStack_2e0 != (code *)0x0) {
    (*pcStack_2e0)(auStack_2f8);
  }
  if (pcStack_328 != (code *)0x0) {
    (*pcStack_328)(auStack_340);
  }
  if (pcStack_368 != (code *)0x0) {
    (*pcStack_368)(auStack_380);
  }
  if (pcStack_3a8 != (code *)0x0) {
    (*pcStack_3a8)(apuStack_3c0);
  }
  if (((ulong)uStack_3f8 & 1) != 0) {
    func_0x0412a280(ppuStack_3e8,(ulong)uStack_3f8 & 0xfffffffffffffffe);
  }
  if (((uint)auStack_c70 & 1) != 0) {
    func_0x0412a280(ppuStack_c60,CONCAT44(uStack_c6c,auStack_c70) & 0xfffffffffffffffe);
  }
  if (pcStack_1a0 != (code *)0x0) {
    (*pcStack_1a0)(auStack_1b8);
  }
  if (pcStack_1e8 != (code *)0x0) {
    (*pcStack_1e8)(auStack_200);
  }
  if (pcStack_228 != (code *)0x0) {
    (*pcStack_228)(auStack_240);
  }
  if (pcStack_268 != (code *)0x0) {
    (*pcStack_268)(auStack_280);
  }
  if (((ulong)ppuStack_2b8 & 1) != 0) {
    func_0x0412a280(ppuStack_2a8,(ulong)ppuStack_2b8 & 0xfffffffffffffffe);
  }
  if ((bStack_bf0 & 1) != 0) {
    func_0x0412a280(uStack_be0,
                    CONCAT17(uStack_be9,CONCAT25(uStack_beb,CONCAT41(uStack_bef,bStack_bf0))) &
                    0xfffffffffffffffe);
  }
  if (pcStack_60 != (code *)0x0) {
    (*pcStack_60)(auStack_78);
  }
  if (pcStack_a8 != (code *)0x0) {
    (*pcStack_a8)(auStack_c0);
  }
  if (pcStack_e8 != (code *)0x0) {
    (*pcStack_e8)(auStack_100);
  }
  if (pcStack_128 != (code *)0x0) {
    (*pcStack_128)(auStack_140);
  }
  if (((ulong)ppuStack_178 & 1) != 0) {
    func_0x0412a280(ppuStack_168,(ulong)ppuStack_178 & 0xfffffffffffffffe);
  }
  if ((bStack_c20 & 1) != 0) {
    func_0x0412a280(uStack_c10,
                    CONCAT17(uStack_c19,CONCAT25(uStack_c1b,CONCAT41(uStack_c1f,bStack_c20))) &
                    0xfffffffffffffffe);
  }
  if (pcStack_ac0 != (code *)0x0) {
    (*pcStack_ac0)(auStack_ad8);
  }
  if (pcStack_b08 != (code *)0x0) {
    (*pcStack_b08)(auStack_b20);
  }
  if (pcStack_b48 != (code *)0x0) {
    (*pcStack_b48)(auStack_b60);
  }
  if (pcStack_b88 != (code *)0x0) {
    (*pcStack_b88)(auStack_ba0);
  }
  if ((uStack_bd8 & 1) != 0) {
    func_0x0412a280(ppuStack_bc8,
                    CONCAT17(uStack_bd1,CONCAT25(uStack_bd3,CONCAT14(uStack_bd4,uStack_bd8))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_c08 & 1) != 0) {
    func_0x0412a280(uStack_bf8,
                    CONCAT17(uStack_c01,CONCAT25(uStack_c03,CONCAT41(uStack_c07,bStack_c08))) &
                    0xfffffffffffffffe);
  }
  uStack_bd8 = 0x6e65630c;
  uStack_bd4 = 0x74;
  uStack_bd3 = 0x7265;
  uStack_bd1 = 0;
  func_0x065af670(auStack_918);
  ppuVar25 = (ulong **)((long)&uStack_bd8 + 1);
  if (((ulong)uStack_900 & 1) == 0) {
    if ((uStack_bd8 & 1) == 0) {
      pcStack_8f0 = (code *)ppuStack_bc8;
      uStack_900 = (undefined *)
                   CONCAT44(CONCAT13(uStack_bd1,CONCAT21(uStack_bd3,uStack_bd4)),uStack_bd8);
      uStack_8f8 = (undefined *)
                   CONCAT44(uStack_bcc,CONCAT22(uStack_bce,CONCAT11(uStack_bcf,uStack_bd0)));
    }
    else {
      FUN_04885070(&uStack_900,ppuStack_bc8,
                   CONCAT44(uStack_bcc,CONCAT22(uStack_bce,CONCAT11(uStack_bcf,uStack_bd0))));
    }
  }
  else {
    bVar27 = (uStack_bd8 & 1) == 0;
    ppuVar23 = ppuStack_bc8;
    if (bVar27) {
      ppuVar23 = ppuVar25;
    }
    uVar20 = (ulong)((byte)uStack_bd8 >> 1);
    if (!bVar27) {
      uVar20 = CONCAT44(uStack_bcc,CONCAT22(uStack_bce,CONCAT11(uStack_bcf,uStack_bd0)));
    }
    func_0x04885120(&uStack_900,ppuVar23,uVar20);
  }
  auStack_8e8 = func_0x065f3710();
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar18 == (long *)0x0) {
    FUN_0eec74c0(0xb0,0);
  }
  plVar2 = plStack_8d0;
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0f0509d8;
  plStack_8d8 = plVar18 + 4;
  plVar18[10] = 0;
  plVar18[0x10] = 0;
  *(undefined1 *)(plVar18 + 0x12) = 0;
  plVar18[0x13] = 0;
  plVar18[0x14] = 0;
  plVar18[0x15] = 0;
  plVar18[4] = (long)&UNK_0f050a28;
  if (plStack_8d0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_8d0 + 1;
    lVar24 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      lVar24 = *plStack_8d0;
      plStack_8d0 = plVar18;
      (**(code **)(lVar24 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
      plVar18 = plStack_8d0;
    }
  }
  plStack_8d0 = plVar18;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x40,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f050a80;
  uStack_8c8 = puVar15 + 3;
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f050ad0;
  plVar18 = (long *)CONCAT44(uStack_8bc,uStack_8c0);
  uStack_8c0 = SUB84(puVar15,0);
  uStack_8bc = (undefined4)((ulong)puVar15 >> 0x20);
  if (plVar18 == (long *)0x0) {
LAB_0677102b:
    if (uStack_9e8 < uStack_9e0) goto LAB_0677103d;
LAB_06771079:
    uStack_9e8 = func_0x065b01f0(&lStack_9f0,auStack_918);
  }
  else {
    LOCK();
    plVar2 = plVar18 + 1;
    lVar24 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar24 != 0) goto LAB_0677102b;
    (**(code **)(*plVar18 + 0x10))(plVar18);
    func_0x0412c2d0(plVar18);
    if (uStack_9e0 <= uStack_9e8) goto LAB_06771079;
LAB_0677103d:
    uVar20 = uStack_9e8;
    func_0x065b0410(uStack_9e8,auStack_918);
    uStack_9e8 = uVar20 + 0x1b0;
  }
  lVar24 = uStack_9e8 - 0x1b0;
  func_0x0652dc20(auStack_918);
  func_0x064e40a0(lVar24);
  if ((uStack_bd8 & 1) != 0) {
    func_0x0412a280(ppuStack_bc8,
                    CONCAT17(uStack_bd1,CONCAT25(uStack_bd3,CONCAT14(uStack_bd4,uStack_bd8))) &
                    0xfffffffffffffffe);
  }
  uStack_bd8 = 0x73656d0c;
  uStack_bd4 = 0x68;
  uStack_bd3 = 0x6449;
  uStack_bd1 = 0;
  func_0x065af670(auStack_918);
  if (((ulong)uStack_900 & 1) == 0) {
    if ((uStack_bd8 & 1) == 0) {
      pcStack_8f0 = (code *)ppuStack_bc8;
      uStack_900 = (undefined *)
                   CONCAT44(CONCAT13(uStack_bd1,CONCAT21(uStack_bd3,uStack_bd4)),uStack_bd8);
      uStack_8f8 = (undefined *)
                   CONCAT44(uStack_bcc,CONCAT22(uStack_bce,CONCAT11(uStack_bcf,uStack_bd0)));
    }
    else {
      FUN_04885070(&uStack_900,ppuStack_bc8,
                   CONCAT44(uStack_bcc,CONCAT22(uStack_bce,CONCAT11(uStack_bcf,uStack_bd0))));
    }
  }
  else {
    bVar27 = (uStack_bd8 & 1) == 0;
    ppuVar23 = ppuStack_bc8;
    if (bVar27) {
      ppuVar23 = ppuVar25;
    }
    uVar20 = (ulong)((byte)uStack_bd8 >> 1);
    if (!bVar27) {
      uVar20 = CONCAT44(uStack_bcc,CONCAT22(uStack_bce,CONCAT11(uStack_bcf,uStack_bd0)));
    }
    func_0x04885120(&uStack_900,ppuVar23,uVar20);
  }
  auVar28 = func_0x0d8543b0();
  auStack_8e8 = auVar28;
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar18 == (long *)0x0) {
    FUN_0eec74c0(0xb0,0);
  }
  plVar2 = plStack_8d0;
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0f050b30;
  plStack_8d8 = plVar18 + 4;
  plVar18[10] = 0;
  plVar18[0x10] = 0;
  *(undefined1 *)(plVar18 + 0x12) = 0;
  plVar18[0x13] = 0;
  plVar18[0x14] = 0;
  plVar18[0x15] = 0;
  plVar18[4] = (long)&UNK_0f050b80;
  if (plStack_8d0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_8d0 + 1;
    lVar24 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      lVar24 = *plStack_8d0;
      plStack_8d0 = plVar18;
      (**(code **)(lVar24 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
      plVar18 = plStack_8d0;
    }
  }
  plStack_8d0 = plVar18;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x40,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f050bd8;
  uStack_8c8 = puVar15 + 3;
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f050c28;
  plVar18 = (long *)CONCAT44(uStack_8bc,uStack_8c0);
  uStack_8c0 = SUB84(puVar15,0);
  uStack_8bc = (undefined4)((ulong)puVar15 >> 0x20);
  if (plVar18 == (long *)0x0) {
LAB_067712c1:
    if (uStack_9e8 < uStack_9e0) goto LAB_067712d3;
LAB_0677130f:
    uStack_9e8 = func_0x065b01f0(&lStack_9f0,auStack_918);
  }
  else {
    LOCK();
    plVar2 = plVar18 + 1;
    lVar24 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar24 != 0) goto LAB_067712c1;
    (**(code **)(*plVar18 + 0x10))(plVar18);
    func_0x0412c2d0(plVar18);
    if (uStack_9e0 <= uStack_9e8) goto LAB_0677130f;
LAB_067712d3:
    uVar20 = uStack_9e8;
    func_0x065b0410(uStack_9e8,auStack_918);
    uStack_9e8 = uVar20 + 0x1b0;
  }
  lVar24 = uStack_9e8 - 0x1b0;
  func_0x0652dc20(auStack_918);
  func_0x064e40a0(lVar24);
  if ((uStack_bd8 & 1) != 0) {
    func_0x0412a280(ppuStack_bc8,
                    CONCAT17(uStack_bd1,CONCAT25(uStack_bd3,CONCAT14(uStack_bd4,uStack_bd8))) &
                    0xfffffffffffffffe);
  }
  uStack_bd8 = 0x6c6f630a;
  uStack_bd4 = 0x6f;
  uStack_bd3 = 0x72;
  func_0x065af670(auStack_918);
  if (((ulong)uStack_900 & 1) == 0) {
    if ((uStack_bd8 & 1) == 0) {
      pcStack_8f0 = (code *)ppuStack_bc8;
      uStack_900 = (undefined *)
                   CONCAT44(CONCAT13(uStack_bd1,CONCAT21(uStack_bd3,uStack_bd4)),uStack_bd8);
      uStack_8f8 = (undefined *)
                   CONCAT44(uStack_bcc,CONCAT22(uStack_bce,CONCAT11(uStack_bcf,uStack_bd0)));
    }
    else {
      FUN_04885070(&uStack_900,ppuStack_bc8,
                   CONCAT44(uStack_bcc,CONCAT22(uStack_bce,CONCAT11(uStack_bcf,uStack_bd0))));
    }
  }
  else {
    bVar27 = (uStack_bd8 & 1) == 0;
    ppuVar23 = ppuStack_bc8;
    if (bVar27) {
      ppuVar23 = ppuVar25;
    }
    uVar20 = (ulong)((byte)uStack_bd8 >> 1);
    if (!bVar27) {
      uVar20 = CONCAT44(uStack_bcc,CONCAT22(uStack_bce,CONCAT11(uStack_bcf,uStack_bd0)));
    }
    func_0x04885120(&uStack_900,ppuVar23,uVar20);
  }
  auVar28 = func_0x067d6080();
  auStack_8e8 = auVar28;
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar18 == (long *)0x0) {
    FUN_0eec74c0(0xb0,0);
  }
  plVar2 = plStack_8d0;
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0f050c88;
  plStack_8d8 = plVar18 + 4;
  plVar18[10] = 0;
  plVar18[0x10] = 0;
  *(undefined1 *)(plVar18 + 0x12) = 0;
  plVar18[0x13] = 0;
  plVar18[0x14] = 0;
  plVar18[0x15] = 0;
  plVar18[4] = (long)&UNK_0f050cd8;
  if (plStack_8d0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_8d0 + 1;
    lVar24 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      lVar24 = *plStack_8d0;
      plStack_8d0 = plVar18;
      (**(code **)(lVar24 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
      plVar18 = plStack_8d0;
    }
  }
  plStack_8d0 = plVar18;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x40,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f050d30;
  uStack_8c8 = puVar15 + 3;
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f050d80;
  plVar18 = (long *)CONCAT44(uStack_8bc,uStack_8c0);
  uStack_8c0 = SUB84(puVar15,0);
  uStack_8bc = (undefined4)((ulong)puVar15 >> 0x20);
  if (plVar18 == (long *)0x0) {
LAB_0677154f:
    if (uStack_9e8 < uStack_9e0) goto LAB_06771561;
LAB_0677159d:
    uStack_9e8 = func_0x065b01f0(&lStack_9f0,auStack_918);
  }
  else {
    LOCK();
    plVar2 = plVar18 + 1;
    lVar24 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar24 != 0) goto LAB_0677154f;
    (**(code **)(*plVar18 + 0x10))(plVar18);
    func_0x0412c2d0(plVar18);
    if (uStack_9e0 <= uStack_9e8) goto LAB_0677159d;
LAB_06771561:
    uVar20 = uStack_9e8;
    func_0x065b0410(uStack_9e8,auStack_918);
    uStack_9e8 = uVar20 + 0x1b0;
  }
  lVar24 = uStack_9e8 - 0x1b0;
  func_0x0652dc20(auStack_918);
  func_0x064e40a0(lVar24);
  if ((uStack_bd8 & 1) != 0) {
    func_0x0412a280(ppuStack_bc8,
                    CONCAT17(uStack_bd1,CONCAT25(uStack_bd3,CONCAT14(uStack_bd4,uStack_bd8))) &
                    0xfffffffffffffffe);
  }
  uStack_bd8 = 0x6163730a;
  uStack_bd4 = 0x6c;
  uStack_bd3 = 0x65;
  func_0x065af670(auStack_918);
  if (((ulong)uStack_900 & 1) == 0) {
    if ((uStack_bd8 & 1) == 0) {
      pcStack_8f0 = (code *)ppuStack_bc8;
      uStack_900 = (undefined *)
                   CONCAT44(CONCAT13(uStack_bd1,CONCAT21(uStack_bd3,uStack_bd4)),uStack_bd8);
      uStack_8f8 = (undefined *)
                   CONCAT44(uStack_bcc,CONCAT22(uStack_bce,CONCAT11(uStack_bcf,uStack_bd0)));
    }
    else {
      FUN_04885070(&uStack_900,ppuStack_bc8,
                   CONCAT44(uStack_bcc,CONCAT22(uStack_bce,CONCAT11(uStack_bcf,uStack_bd0))));
    }
  }
  else {
    bVar27 = (uStack_bd8 & 1) == 0;
    ppuVar23 = ppuStack_bc8;
    if (bVar27) {
      ppuVar23 = ppuVar25;
    }
    uVar20 = (ulong)((byte)uStack_bd8 >> 1);
    if (!bVar27) {
      uVar20 = CONCAT44(uStack_bcc,CONCAT22(uStack_bce,CONCAT11(uStack_bcf,uStack_bd0)));
    }
    func_0x04885120(&uStack_900,ppuVar23,uVar20);
  }
  auVar28 = func_0x0669cae0();
  auStack_8e8 = auVar28;
  func_0x0669bff0();
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar18 == (long *)0x0) {
    FUN_0eec74c0(0xb0,0);
  }
  plVar2 = plStack_8d0;
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0f050de0;
  plStack_8d8 = plVar18 + 4;
  plVar18[10] = 0;
  plVar18[0x10] = 0;
  *(undefined1 *)(plVar18 + 0x12) = 0;
  plVar18[0x13] = 0;
  plVar18[0x14] = 0;
  plVar18[0x15] = 0;
  plVar18[4] = (long)&UNK_0f050e30;
  if (plStack_8d0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_8d0 + 1;
    lVar24 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      lVar24 = *plStack_8d0;
      plStack_8d0 = plVar18;
      (**(code **)(lVar24 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
      plVar18 = plStack_8d0;
    }
  }
  plStack_8d0 = plVar18;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x40,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f050e88;
  uStack_8c8 = puVar15 + 3;
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f050ed8;
  plVar18 = (long *)CONCAT44(uStack_8bc,uStack_8c0);
  uStack_8c0 = SUB84(puVar15,0);
  uStack_8bc = (undefined4)((ulong)puVar15 >> 0x20);
  if (plVar18 == (long *)0x0) {
LAB_067717e2:
    if (uStack_9e8 < uStack_9e0) goto LAB_067717f4;
LAB_06771830:
    uStack_9e8 = func_0x065b01f0(&lStack_9f0,auStack_918);
  }
  else {
    LOCK();
    plVar2 = plVar18 + 1;
    lVar24 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar24 != 0) goto LAB_067717e2;
    (**(code **)(*plVar18 + 0x10))(plVar18);
    func_0x0412c2d0(plVar18);
    if (uStack_9e0 <= uStack_9e8) goto LAB_06771830;
LAB_067717f4:
    uVar20 = uStack_9e8;
    func_0x065b0410(uStack_9e8,auStack_918);
    uStack_9e8 = uVar20 + 0x1b0;
  }
  lVar24 = uStack_9e8 - 0x1b0;
  func_0x0652dc20(auStack_918);
  func_0x064e40a0(lVar24);
  if ((uStack_bd8 & 1) != 0) {
    func_0x0412a280(ppuStack_bc8,
                    CONCAT17(uStack_bd1,CONCAT25(uStack_bd3,CONCAT14(uStack_bd4,uStack_bd8))) &
                    0xfffffffffffffffe);
  }
  uStack_bd8 = 0x746f7210;
  uStack_bd4 = 0x61;
  uStack_bd3 = 0x6974;
  uStack_bd1 = 0x6f;
  uStack_bd0 = 0x6e;
  uStack_bcf = 0;
  func_0x065af670(auStack_918);
  if (((ulong)uStack_900 & 1) == 0) {
    if ((uStack_bd8 & 1) == 0) {
      pcStack_8f0 = (code *)ppuStack_bc8;
      uStack_900 = (undefined *)
                   CONCAT44(CONCAT13(uStack_bd1,CONCAT21(uStack_bd3,uStack_bd4)),uStack_bd8);
      uStack_8f8 = (undefined *)
                   CONCAT44(uStack_bcc,CONCAT22(uStack_bce,CONCAT11(uStack_bcf,uStack_bd0)));
    }
    else {
      FUN_04885070(&uStack_900,ppuStack_bc8,
                   CONCAT44(uStack_bcc,CONCAT22(uStack_bce,CONCAT11(uStack_bcf,uStack_bd0))));
    }
  }
  else {
    bVar27 = (uStack_bd8 & 1) == 0;
    ppuVar23 = ppuStack_bc8;
    if (bVar27) {
      ppuVar23 = ppuVar25;
    }
    uVar20 = (ulong)((byte)uStack_bd8 >> 1);
    if (!bVar27) {
      uVar20 = CONCAT44(uStack_bcc,CONCAT22(uStack_bce,CONCAT11(uStack_bcf,uStack_bd0)));
    }
    func_0x04885120(&uStack_900,ppuVar23,uVar20);
  }
  auVar28 = func_0x0669cae0();
  auStack_8e8 = auVar28;
  func_0x0669bff0();
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar18 == (long *)0x0) {
    FUN_0eec74c0(0xb0,0);
  }
  plVar2 = plStack_8d0;
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0f050f38;
  plStack_8d8 = plVar18 + 4;
  plVar18[10] = 0;
  plVar18[0x10] = 0;
  *(undefined1 *)(plVar18 + 0x12) = 0;
  plVar18[0x13] = 0;
  plVar18[0x14] = 0;
  plVar18[0x15] = 0;
  plVar18[4] = (long)&UNK_0f050f88;
  if (plStack_8d0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_8d0 + 1;
    lVar24 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      lVar24 = *plStack_8d0;
      plStack_8d0 = plVar18;
      (**(code **)(lVar24 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
      plVar18 = plStack_8d0;
    }
  }
  plStack_8d0 = plVar18;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x40,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f050fe0;
  uStack_8c8 = puVar15 + 3;
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f051030;
  plVar18 = (long *)CONCAT44(uStack_8bc,uStack_8c0);
  uStack_8c0 = SUB84(puVar15,0);
  uStack_8bc = (undefined4)((ulong)puVar15 >> 0x20);
  if (plVar18 == (long *)0x0) {
LAB_06771a7a:
    if (uStack_9e8 < uStack_9e0) goto LAB_06771a8c;
LAB_06771ac8:
    uStack_9e8 = func_0x065b01f0(&lStack_9f0,auStack_918);
  }
  else {
    LOCK();
    plVar2 = plVar18 + 1;
    lVar24 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar24 != 0) goto LAB_06771a7a;
    (**(code **)(*plVar18 + 0x10))(plVar18);
    func_0x0412c2d0(plVar18);
    if (uStack_9e0 <= uStack_9e8) goto LAB_06771ac8;
LAB_06771a8c:
    uVar20 = uStack_9e8;
    func_0x065b0410(uStack_9e8,auStack_918);
    uStack_9e8 = uVar20 + 0x1b0;
  }
  lVar24 = uStack_9e8 - 0x1b0;
  func_0x0652dc20(auStack_918);
  func_0x064e40a0(lVar24);
  if ((uStack_bd8 & 1) != 0) {
    func_0x0412a280(ppuStack_bc8,
                    CONCAT17(uStack_bd1,CONCAT25(uStack_bd3,CONCAT14(uStack_bd4,uStack_bd8))) &
                    0xfffffffffffffffe);
  }
  uStack_bd8 = 0x706c610a;
  uStack_bd4 = 0x68;
  uStack_bd3 = 0x61;
  func_0x065af670(auStack_918);
  if (((ulong)uStack_900 & 1) == 0) {
    if ((uStack_bd8 & 1) == 0) {
      pcStack_8f0 = (code *)ppuStack_bc8;
      uStack_900 = (undefined *)
                   CONCAT44(CONCAT13(uStack_bd1,CONCAT21(uStack_bd3,uStack_bd4)),uStack_bd8);
      uStack_8f8 = (undefined *)
                   CONCAT44(uStack_bcc,CONCAT22(uStack_bce,CONCAT11(uStack_bcf,uStack_bd0)));
    }
    else {
      FUN_04885070(&uStack_900,ppuStack_bc8,
                   CONCAT44(uStack_bcc,CONCAT22(uStack_bce,CONCAT11(uStack_bcf,uStack_bd0))));
    }
  }
  else {
    bVar27 = (uStack_bd8 & 1) != 0;
    if (bVar27) {
      ppuVar25 = ppuStack_bc8;
    }
    uVar20 = (ulong)((byte)uStack_bd8 >> 1);
    if (bVar27) {
      uVar20 = CONCAT44(uStack_bcc,CONCAT22(uStack_bce,CONCAT11(uStack_bcf,uStack_bd0)));
    }
    func_0x04885120(&uStack_900,ppuVar25,uVar20);
  }
  auVar28 = func_0x067f3150();
  auStack_8e8 = auVar28;
  func_0x067ee910();
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar18 == (undefined8 *)0x0) {
    FUN_0eec74c0(0xb0,0);
  }
  plVar2 = plStack_8d0;
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0f051090;
  plStack_8d8 = plVar18 + 4;
  plVar18[10] = 0;
  plVar18[0x10] = 0;
  *(undefined1 *)(plVar18 + 0x12) = 0;
  plVar18[0x13] = 0;
  plVar18[0x14] = 0;
  plVar18[0x15] = 0;
  plVar18[4] = (long)&UNK_0f0510e0;
  if (plStack_8d0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_8d0 + 1;
    lVar24 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      lVar24 = *plStack_8d0;
      plStack_8d0 = plVar18;
      (**(code **)(lVar24 + 0x10))(plVar2);
      func_0x0412c2d0(plVar2);
      plVar18 = plStack_8d0;
    }
  }
  plStack_8d0 = plVar18;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x40,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f051138;
  uStack_8c8 = puVar15 + 3;
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f051188;
  plVar18 = (long *)CONCAT44(uStack_8bc,uStack_8c0);
  uStack_8c0 = SUB84(puVar15,0);
  uStack_8bc = (undefined4)((ulong)puVar15 >> 0x20);
  if (plVar18 == (long *)0x0) {
LAB_06771d0d:
    if (uStack_9e0 <= uStack_9e8) {
LAB_06771d5b:
      uStack_9e8 = func_0x065b01f0(&lStack_9f0,auStack_918);
      goto LAB_06771d73;
    }
  }
  else {
    LOCK();
    plVar2 = plVar18 + 1;
    lVar24 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar24 != 0) goto LAB_06771d0d;
    (**(code **)(*plVar18 + 0x10))(plVar18);
    func_0x0412c2d0(plVar18);
    if (uStack_9e0 <= uStack_9e8) goto LAB_06771d5b;
  }
  uVar20 = uStack_9e8;
  func_0x065b0410(uStack_9e8,auStack_918);
  uStack_9e8 = uVar20 + 0x1b0;
LAB_06771d73:
  lVar24 = uStack_9e8 + -0x1b0;
  func_0x0652dc20(auStack_918);
  func_0x064e40a0(lVar24);
  if ((uStack_bd8 & 1) != 0) {
    func_0x0412a280(ppuStack_bc8,
                    CONCAT17(uStack_bd1,CONCAT25(uStack_bd3,CONCAT14(uStack_bd4,uStack_bd8))) &
                    0xfffffffffffffffe);
  }
  func_0x064e40a0(&lStack_a98);
  auStack_a50 = func_0x0680ac20();
  lVar17 = lStack_a80;
  lVar24 = lStack_a78;
  if (lStack_a80 != 0) {
    for (; lVar17 != lVar24; lVar24 = lVar24 + -0x30) {
      if ((*(byte *)(lVar24 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar24 + -0x10),
                        *(ulong *)(lVar24 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_a78 = lVar17;
    func_0x0412a280(lStack_a80,lStack_a70 - lStack_a80);
  }
  lVar9 = lStack_a88;
  lVar17 = lStack_a90;
  lVar24 = lStack_a98;
  lStack_a98 = 0;
  lStack_a90 = 0;
  lStack_a88 = 0;
  *plVar19 = lVar24;
  plVar19[1] = lVar17;
  plVar19[2] = lVar9;
  lStack_a80 = 0;
  lStack_a78 = 0;
  lStack_a70 = 0;
  plVar19[5] = (long)ppuStack_a58;
  plVar19[3] = uStack_a68;
  plVar19[4] = (long)plStack_a60;
  uStack_a68 = 0;
  plStack_a60 = (long *)0x0;
  ppuStack_a58 = (ulong **)0x0;
  *(undefined4 *)(plVar19 + 8) = auStack_a40._0_4_;
  *(undefined4 *)((long)plVar19 + 0x44) = auStack_a40._4_4_;
  *(undefined4 *)(plVar19 + 9) = auStack_a40._8_4_;
  *(undefined4 *)((long)plVar19 + 0x4c) = auStack_a40._12_4_;
  *(undefined1 (*) [16])(plVar19 + 6) = auStack_a50;
  plVar19[10] = lStack_a30;
  plVar19[0xb] = (long)puStack_a28;
  plVar19[0xc] = (long)puStack_a20;
  lStack_a30 = 0;
  puStack_a28 = (undefined8 *)0x0;
  puStack_a20 = (undefined8 *)0x0;
  plVar19[0xd] = lStack_a18;
  plVar19[0xe] = lStack_a10;
  lStack_a18 = 0;
  lStack_a10 = 0;
  plVar19[0xf] = lStack_a08;
  plVar19[0x10] = lStack_a00;
  plVar19[0x11] = lStack_9f8;
  lStack_a08 = 0;
  lStack_a00 = 0;
  lStack_9f8 = 0;
  plVar19[0x12] = lStack_9f0;
  plVar19[0x13] = uStack_9e8;
  plVar19[0x14] = uStack_9e0;
  lStack_9f0 = 0;
  uStack_9e8 = 0;
  uStack_9e0 = 0;
  plVar19[0x15] = lStack_9d8;
  plVar19[0x16] = lStack_9d0;
  plVar19[0x17] = lStack_9c8;
  lStack_9d8 = 0;
  lStack_9d0 = 0;
  lStack_9c8 = 0;
  plVar19[0x18] = lStack_9c0;
  plVar19[0x19] = lStack_9b8;
  plVar19[0x1a] = lStack_9b0;
  lStack_9c0 = 0;
  lStack_9b8 = 0;
  lStack_9b0 = 0;
  *(undefined4 *)(plVar19 + 0x1b) = (undefined4)uStack_9a8;
  *(undefined4 *)((long)plVar19 + 0xdc) = uStack_9a8._4_4_;
  *(undefined4 *)(plVar19 + 0x1c) = (undefined4)uStack_9a0;
  *(undefined4 *)((long)plVar19 + 0xe4) = uStack_9a0._4_4_;
  plVar19[0x1d] = lStack_998;
  uStack_9a8 = 0;
  uStack_9a0 = 0;
  lStack_998 = 0;
  func_0x0651ffe0(&lStack_a80);
  lVar17 = lStack_a98;
  lVar24 = lStack_a90;
  if (lStack_a98 != 0) {
    for (; lVar17 != lVar24; lVar24 = lVar24 + -0x30) {
      if ((*(byte *)(lVar24 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar24 + -0x10),
                        *(ulong *)(lVar24 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_a90 = lVar17;
    func_0x0412a280(lStack_a98,lStack_a88 - lStack_a98);
  }
  return plVar19;
}



/* ---- referenced strings ----
 * 0x1224fb9  WidgetComponentRenderPrimitiveTypeWireframeMesh
 * 0x1224fc9  enderPrimitiveTypeWireframeMesh
 * 0x1224fd8  ypeWireframeMesh
 */
