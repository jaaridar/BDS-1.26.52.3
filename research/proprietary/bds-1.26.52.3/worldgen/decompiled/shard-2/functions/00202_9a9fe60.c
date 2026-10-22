/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9b9fe60 (ELF vaddr 0x9a9fe60)
 * Label: caller-of-callee
 * Body:  [[09b9fe60, 09b9ff55] [09b9ff60, 09ba0482] [09ba0490, 09ba065b] [09ba0660, 09ba08a2] [09ba08b0, 09ba096e] [09ba0970, 09ba0d29] [09ba0d30, 09ba0dac] [09ba0db0, 09ba0ee5] [09ba0ef0, 09ba114a] [09ba1150, 09ba11f0] [09ba1200, 09ba1603] [09ba160e, 09ba163e] [09ba164c, 09ba1652] [09ba1656, 09ba165a] [09ba168e, 09ba16a9] [09ba16fd, 09ba173a]]
 * Ghidra: FUN_09b9fe60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_09b9fe60(undefined8 param_1,byte *param_2)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  char cVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  undefined4 *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  byte bVar22;
  byte *pbVar23;
  byte *pbVar24;
  bool bVar25;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  byte *pbStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  ulong uStack_ad0;
  byte bStack_ac8;
  byte bStack_ac0;
  byte *pbStack_ab8;
  undefined *puStack_ab0;
  undefined4 *puStack_aa8;
  undefined4 *puStack_aa0;
  undefined4 *puStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  byte bStack_a78;
  byte *pbStack_a68;
  undefined *puStack_a60;
  undefined8 *puStack_a58;
  undefined4 *puStack_a50;
  undefined4 *puStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  ulong uStack_a28;
  undefined8 uStack_a20;
  ulong uStack_a18;
  long lStack_a10;
  undefined8 uStack_a08;
  undefined *puStack_a00;
  long *plStack_9f8;
  long *plStack_9f0;
  long *plStack_9e8;
  undefined4 uStack_9e0;
  undefined4 uStack_9dc;
  undefined4 uStack_9d8;
  undefined4 uStack_9d4;
  undefined8 uStack_9d0;
  char cStack_9c8;
  byte *pbStack_9b8;
  undefined4 uStack_9b0;
  undefined4 uStack_9ac;
  undefined8 uStack_9a8;
  undefined8 *puStack_998;
  ulong uStack_990;
  undefined8 *puStack_988;
  ulong uStack_980;
  byte *pbStack_978;
  ulong uStack_970;
  undefined8 *puStack_968;
  ulong uStack_960;
  undefined8 *puStack_958;
  ulong uStack_950;
  byte *pbStack_948;
  ulong uStack_940;
  byte *pbStack_938;
  ulong uStack_930;
  undefined8 *puStack_928;
  ulong uStack_920;
  undefined8 *puStack_918;
  ulong uStack_910;
  byte *pbStack_908;
  undefined *puStack_900;
  long lStack_8f8;
  long lStack_8f0;
  long lStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  byte *pbStack_8c8;
  undefined *puStack_8c0;
  undefined4 *puStack_8b8;
  undefined4 *puStack_8b0;
  undefined4 *puStack_8a8;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  undefined4 uStack_898;
  undefined4 uStack_894;
  undefined8 uStack_890;
  byte *pbStack_888;
  undefined *puStack_880;
  undefined4 *puStack_878;
  undefined4 *puStack_870;
  undefined4 *puStack_868;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  undefined4 uStack_858;
  undefined4 uStack_854;
  undefined8 uStack_850;
  undefined8 uStack_840;
  undefined *puStack_838;
  byte *pbStack_830;
  long *plStack_828;
  long *plStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  char cStack_800;
  ulong uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  byte abStack_410 [24];
  byte bStack_3f8;
  ulong uStack_38;
  
  func_0x0ee56810(&uStack_840,param_2 + 0x18);
  cStack_9c8 = cStack_800;
  if (cStack_800 == '\0') {
    uStack_a08 = uStack_840;
    puStack_a00 = puStack_838;
    plStack_9f8 = (long *)pbStack_830;
    plStack_9f0 = plStack_828;
    plStack_9e8 = plStack_820;
    pbStack_830 = (byte *)0x0;
    plStack_828 = (long *)0x0;
    plStack_820 = (long *)0x0;
    uStack_438 = &uStack_818;
    uStack_9e0 = (undefined4)uStack_818;
    uStack_9dc = uStack_818._4_4_;
    uStack_9d8 = (undefined4)uStack_810;
    uStack_9d4 = uStack_810._4_4_;
    uStack_9d0 = uStack_808;
    uStack_818 = 0;
    uStack_810 = 0;
    uStack_808 = 0;
    func_0x09ba8cb0(&uStack_438);
    pbVar23 = pbStack_830;
    plVar2 = plStack_828;
    if (pbStack_830 != (byte *)0x0) {
      for (; pbVar23 != (byte *)plVar2; plVar2 = plVar2 + -10) {
        if (((char)plVar2[-1] == '\x01') && ((*(byte *)(plVar2 + -6) & 1) != 0)) {
          func_0x0412a280(plVar2[-4],plVar2[-6] & 0xfffffffffffffffe);
        }
      }
      plStack_828 = (long *)pbVar23;
      func_0x0412a280(pbStack_830,(long)plStack_820 - (long)pbStack_830);
    }
  }
  if (cStack_9c8 == '\0') {
    func_0x09ba21c0(&uStack_a08);
    func_0x0ee37ef0(param_1,&uStack_a08);
    goto joined_r0x09ba1284;
  }
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  plVar2 = _DAT_0f5523a0;
  pbVar23 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
    uVar21 = func_0x0eee02f0(0xf5522b8);
    func_0x041084d6(&DAT_0f7b8fb8);
    func_0x0ee38090(&uStack_a08);
    uVar21 = func_0x0eee2d70(uVar21);
    func_0x048e6d60(&pbStack_888);
    func_0x0ee38090(&uStack_b08);
    func_0x0ee38090(&uStack_a08);
    uVar21 = func_0x0eee2d70(uVar21);
    func_0x0ee38090(&uStack_a08);
    uVar21 = func_0x0eee2d70(uVar21);
    func_0x048c3ac0(&uStack_840);
    func_0x0ee38090(&uStack_a08);
    func_0x0eee2d70(uVar21);
    pcVar3 = (code *)swi(3);
    uVar21 = (*pcVar3)();
    return uVar21;
  }
  bVar22 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar22 = *pbVar23;
  }
  plVar1 = _DAT_0f5523a8;
  uStack_840 = (undefined8 *)0xf5522b8;
  puStack_838 = (undefined *)CONCAT71(puStack_838._1_7_,1);
  pbStack_830 = pbVar23;
  plStack_828 = plVar2;
  plStack_820 = _DAT_0f5523a8;
  if (((bVar22 & 1) == 0) &&
     (cVar15 = FUN_0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar15 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  cVar15 = (**(code **)(*plVar1 + 0x610))(plVar1);
  pbStack_830 = (byte *)0x0;
  plStack_828 = (long *)0x0;
  if (plVar2 == (long *)0x0) {
LAB_09ba0109:
  }
  else {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 != 0) {
      plStack_820 = (long *)0x0;
      goto LAB_09ba0109;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0412c2d0(plVar2);
    plVar2 = plStack_828;
    plStack_820 = (long *)0x0;
    if (plStack_828 == (long *)0x0) goto LAB_09ba0109;
    plStack_820 = (long *)0x0;
    LOCK();
    plVar1 = plStack_828 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 != 0) goto LAB_09ba0109;
    (**(code **)(*plStack_828 + 0x10))(plStack_828);
    FUN_0412c2d0(plVar2);
  }
  if ((char)puStack_838 == '\x01') {
    func_0x0eee02f0(uStack_840);
  }
  if (cVar15 != '\0') {
    func_0x0ee37d00(param_1,1);
    goto joined_r0x09ba1284;
  }
  if (*(int *)(param_2 + 0x60) == 2) {
    func_0x0eee2dd0(&uStack_840,0,0x408);
    pbVar23 = param_2 + 1;
    bVar25 = (*param_2 & 1) == 0;
    pbVar24 = *(byte **)(param_2 + 0x10);
    if (bVar25) {
      pbVar24 = pbVar23;
    }
    uVar20 = (ulong)(*param_2 >> 1);
    if (!bVar25) {
      uVar20 = *(ulong *)(param_2 + 8);
    }
    if (uVar20 < 0x400) {
      if (uVar20 != 0) {
        func_0x0eee2ee0(&uStack_840,pbVar24,uVar20);
      }
      uStack_440 = uVar20;
      *(undefined1 *)((long)&uStack_840 + uVar20) = 0;
      uVar17 = uStack_440;
      if ((uStack_440 & 0xfffffffffffffffc) != 0x3fc) goto LAB_09ba024a;
      uStack_840 = (undefined8 *)((ulong)uStack_840 & 0xffffffffffffff00);
      uStack_440 = 0;
      func_0x0eee2dd0(&uStack_438,0,0x408);
LAB_09ba0292:
      if (uVar20 != 0) {
        func_0x0eee2ee0(&uStack_438,pbVar24,uVar20);
      }
      uStack_38 = uVar20;
      *(undefined1 *)((long)&uStack_438 + uVar20) = 0;
      uVar20 = uStack_38;
      if ((uStack_38 & 0xfffffffffffffffc) != 0x3fc) goto LAB_09ba02f3;
      uStack_438 = (undefined8 *)((ulong)uStack_438 & 0xffffffffffffff00);
      uStack_38 = 0;
      if (*(long *)(param_2 + 0x50) != 0) goto LAB_09ba0325;
LAB_09ba04fd:
      if ((DAT_0f7b8fb8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7b8fb8), iVar16 != 0)) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
      }
      puStack_918 = &uStack_840;
      uStack_910 = uStack_440;
      cVar15 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&puStack_918);
      if (cVar15 != '\0') {
        if (DAT_0f7b8fb8 == '\0') {
LAB_09ba1560:
          iVar16 = func_0x04108328(&DAT_0f7b8fb8);
          if (iVar16 != 0) {
            func_0x0ee5ea20(&DAT_0f7b8f98);
            func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
            func_0x0410844d(&DAT_0f7b8fb8);
          }
        }
        puStack_928 = &uStack_840;
        uStack_920 = uStack_440;
        (**(code **)(_DAT_0f7b8f98 + 0x20))(&uStack_b08,&DAT_0f7b8f98,&puStack_928);
        pbStack_ab8 = (byte *)0x4fc0d7b9a17d8c7;
        puStack_ab0 = &UNK_0140f690;
        puStack_aa8 = (undefined4 *)0x1;
        puStack_aa0 = (undefined4 *)CONCAT44(puStack_aa0._4_4_,0x112);
        if (bStack_ac8 == 0) {
          pbStack_a68 = (byte *)0x0;
          puStack_a60 = (undefined *)0x0;
          puStack_a58 = (undefined8 *)0x0;
          func_0x0eedeb80(2,0x2d,&uStack_b08,&pbStack_a68,&pbStack_ab8);
          if (((ulong)pbStack_a68 & 1) != 0) {
            func_0x0412a280(puStack_a58,(ulong)pbStack_a68 & 0xfffffffffffffffe);
          }
        }
        if ((bStack_ac8 & 1) == 0) {
          pbStack_ab8 = (byte *)&uStack_ae0;
          func_0x09ba8cb0(&pbStack_ab8);
          puVar4 = uStack_af8;
          puVar19 = uStack_af0;
          if (uStack_af8 != (undefined4 *)0x0) {
            for (; puVar4 != puVar19; puVar19 = puVar19 + -0x14) {
              if ((*(char *)(puVar19 + -2) == '\x01') && ((*(byte *)(puVar19 + -0xc) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(puVar19 + -8),
                                *(ulong *)(puVar19 + -0xc) & 0xfffffffffffffffe);
              }
            }
            uStack_af0 = puVar4;
            func_0x0412a280(uStack_af8,(long)pbStack_ae8 - (long)uStack_af8);
          }
        }
      }
      if ((DAT_0f7b8fb8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7b8fb8), iVar16 != 0)) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
      }
      bVar25 = (*param_2 & 1) == 0;
      pbStack_938 = *(byte **)(param_2 + 0x10);
      if (bVar25) {
        pbStack_938 = pbVar23;
      }
      uStack_930 = (ulong)(*param_2 >> 1);
      if (!bVar25) {
        uStack_930 = *(ulong *)(param_2 + 8);
      }
      cVar15 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&pbStack_938);
      if (cVar15 == '\0') {
LAB_09ba0786:
        if ((DAT_0f7b8fb8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7b8fb8), iVar16 != 0)) {
          func_0x0ee5ea20(&DAT_0f7b8f98);
          func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
          func_0x0410844d(&DAT_0f7b8fb8);
        }
        puStack_968 = &uStack_438;
        uStack_960 = uStack_38;
        bVar25 = (*param_2 & 1) != 0;
        pbStack_978 = pbVar23;
        if (bVar25) {
          pbStack_978 = *(byte **)(param_2 + 0x10);
        }
        uStack_970 = (ulong)(*param_2 >> 1);
        if (bVar25) {
          uStack_970 = *(ulong *)(param_2 + 8);
        }
        (**(code **)(_DAT_0f7b8f98 + 0x38))(&pbStack_ab8,&DAT_0f7b8f98,&puStack_968,&pbStack_978);
        bStack_ac8 = bStack_a78;
        if (bStack_a78 == 0) {
          uStack_b08 = pbStack_ab8;
          uStack_b00 = puStack_ab0;
          uStack_af8 = puStack_aa8;
          uStack_af0 = puStack_aa0;
          pbStack_ae8 = (byte *)puStack_a98;
          puStack_aa8 = (undefined4 *)0x0;
          puStack_aa0 = (undefined4 *)0x0;
          puStack_a98 = (undefined4 *)0x0;
          pbStack_a68 = (byte *)&uStack_a90;
          uStack_ae0 = uStack_a90;
          uStack_ad8 = uStack_a88;
          uStack_ad0 = uStack_a80;
          uStack_a90 = 0;
          uStack_a88 = 0;
          uStack_a80 = 0;
          func_0x09ba8cb0(&pbStack_a68);
          puVar4 = puStack_aa8;
          puVar19 = puStack_aa0;
          if (puStack_aa8 != (undefined4 *)0x0) {
            for (; puVar4 != puVar19; puVar19 = puVar19 + -0x14) {
              if ((*(char *)(puVar19 + -2) == '\x01') && ((*(byte *)(puVar19 + -0xc) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(puVar19 + -8),
                                *(ulong *)(puVar19 + -0xc) & 0xfffffffffffffffe);
              }
            }
            puStack_aa0 = puVar4;
            func_0x0412a280(puStack_aa8,(long)puStack_a98 - (long)puStack_aa8);
          }
        }
        if (bStack_ac8 == 0) {
          func_0x09bacce0(&uStack_b08,&uStack_438,param_2);
          pbStack_8c8 = uStack_b08;
          puStack_8c0 = uStack_b00;
          puStack_8b8 = uStack_af8;
          puStack_8b0 = uStack_af0;
          puStack_8a8 = (undefined4 *)pbStack_ae8;
          uStack_af8 = (undefined4 *)0x0;
          uStack_af0 = (undefined4 *)0x0;
          pbStack_ae8 = (byte *)0x0;
          uStack_8a0 = (undefined4)uStack_ae0;
          uStack_89c = uStack_ae0._4_4_;
          uStack_898 = (undefined4)uStack_ad8;
          uStack_894 = uStack_ad8._4_4_;
          uStack_890 = uStack_ad0;
          uStack_ae0 = 0;
          uStack_ad8 = 0;
          uStack_ad0 = 0;
          func_0x052bddf0(&pbStack_a68,&pbStack_8c8);
          func_0x048e6d60(&pbStack_8c8);
        }
        else {
          uStack_a38 = 0;
          uStack_a30 = 0;
          puStack_a48 = (undefined4 *)0x0;
          uStack_a40 = 0;
          puStack_a58 = (undefined8 *)0x0;
          puStack_a50 = (undefined4 *)0x0;
          pbStack_a68 = (byte *)0x0;
          puStack_a60 = (undefined *)0x0;
          uStack_a28 = 1;
        }
        if ((bStack_ac8 & 1) == 0) {
          pbStack_ab8 = (byte *)&uStack_ae0;
          func_0x09ba8cb0(&pbStack_ab8);
          puVar13 = uStack_af8;
          puVar19 = uStack_af8;
          puVar4 = uStack_af0;
          pbVar23 = pbStack_ae8;
          if (uStack_af8 != (undefined4 *)0x0) {
            for (; uStack_af8 = puVar19, pbStack_ae8 = pbVar23, puVar13 != puVar4;
                puVar4 = puVar4 + -0x14) {
              if ((*(char *)(puVar4 + -2) == '\x01') && ((*(byte *)(puVar4 + -0xc) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(puVar4 + -8),
                                *(ulong *)(puVar4 + -0xc) & 0xfffffffffffffffe);
              }
              puVar19 = uStack_af8;
              pbVar23 = pbStack_ae8;
            }
            uStack_af0 = puVar13;
            goto LAB_09ba0ded;
          }
        }
      }
      else {
        if ((DAT_0f7b8fb8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7b8fb8), iVar16 != 0)) {
          func_0x0ee5ea20(&DAT_0f7b8f98);
          func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
          func_0x0410844d(&DAT_0f7b8fb8);
        }
        bVar25 = (*param_2 & 1) == 0;
        pbStack_948 = *(byte **)(param_2 + 0x10);
        if (bVar25) {
          pbStack_948 = pbVar23;
        }
        uStack_940 = (ulong)(*param_2 >> 1);
        if (!bVar25) {
          uStack_940 = *(ulong *)(param_2 + 8);
        }
        puStack_958 = &uStack_840;
        uStack_950 = uStack_440;
        (**(code **)(_DAT_0f7b8f98 + 0x38))(&uStack_b08,&DAT_0f7b8f98,&pbStack_948,&puStack_958);
        bStack_a78 = bStack_ac8;
        if (bStack_ac8 == 1) goto LAB_09ba0786;
        pbStack_ab8 = uStack_b08;
        puStack_ab0 = uStack_b00;
        puStack_aa8 = uStack_af8;
        puStack_aa0 = uStack_af0;
        puStack_a98 = (undefined4 *)pbStack_ae8;
        uStack_af8 = (undefined4 *)0x0;
        uStack_af0 = (undefined4 *)0x0;
        pbStack_ae8 = (byte *)0x0;
        uStack_a90 = uStack_ae0;
        uStack_a88 = uStack_ad8;
        uStack_a80 = uStack_ad0;
        uStack_ae0 = 0;
        uStack_ad8 = 0;
        uStack_ad0 = 0;
        pbStack_a68 = (byte *)&uStack_ae0;
        func_0x09ba8cb0(&pbStack_a68);
        lVar12 = (long)uStack_af8;
        lVar18 = (long)uStack_af0;
        if (uStack_af8 != (undefined4 *)0x0) {
          for (; lVar12 != lVar18; lVar18 = lVar18 + -0x50) {
            if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
              func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                              *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
            }
          }
          uStack_af0 = (undefined4 *)lVar12;
          func_0x0412a280(uStack_af8,(long)pbStack_ae8 - (long)uStack_af8);
        }
        bVar25 = (*param_2 & 1) != 0;
        pbStack_a68 = pbVar23;
        if (bVar25) {
          pbStack_a68 = *(byte **)(param_2 + 0x10);
        }
        puStack_a60 = (undefined *)(ulong)(*param_2 >> 1);
        if (bVar25) {
          puStack_a60 = (undefined *)*(ulong *)(param_2 + 8);
        }
        puStack_a58 = &uStack_840;
        puStack_a50 = (undefined4 *)uStack_440;
        func_0x0470d9a0(&pbStack_9b8,&UNK_013b686a,0x3f,0xdd,&pbStack_a68);
        uVar11 = _UNK_0f1d7dbc;
        uVar10 = _UNK_0f1d7db8;
        uVar9 = _UNK_0f1d7db4;
        uVar8 = _UNK_0f1d7dac;
        uVar7 = _UNK_0f1d7da8;
        uVar6 = _UNK_0f1d7da4;
        uVar5 = _DAT_0f1d7da0;
        uStack_b08 = (byte *)CONCAT44(_UNK_0f1d7da4,_DAT_0f1d7da0);
        uStack_b00 = (undefined *)CONCAT44(_UNK_0f1d7dac,_UNK_0f1d7da8);
        uStack_af8 = (undefined4 *)CONCAT44(_UNK_0f1d7db4,_DAT_0f1d7db0);
        uStack_af0 = (undefined4 *)CONCAT44(_UNK_0f1d7dbc,_UNK_0f1d7db8);
        pbStack_ae8 = pbStack_9b8;
        uStack_ae0 = CONCAT44(uStack_9ac,uStack_9b0);
        uStack_ad8 = uStack_9a8;
        bStack_ac8 = 0;
        uStack_ad0 = uStack_ad0 & 0xff000000;
        bStack_ac0 = 1;
        if (puStack_aa0 < puStack_a98) {
          puStack_aa0[4] = _DAT_0f1d7db0;
          puStack_aa0[5] = uVar9;
          puStack_aa0[6] = uVar10;
          puStack_aa0[7] = uVar11;
          *puStack_aa0 = uVar5;
          puStack_aa0[1] = uVar6;
          puStack_aa0[2] = uVar7;
          puStack_aa0[3] = uVar8;
          *(undefined8 *)(puStack_aa0 + 0xc) = uStack_9a8;
          *(byte **)(puStack_aa0 + 8) = pbStack_9b8;
          *(undefined8 *)(puStack_aa0 + 10) = uStack_ae0;
          *(undefined1 *)(puStack_aa0 + 0x10) = 0;
          *(ulong *)(puStack_aa0 + 0xe) = uStack_ad0;
          *(undefined1 *)(puStack_aa0 + 0x12) = 1;
          puVar19 = puStack_aa0 + 0x14;
        }
        else {
          puStack_aa0 = (undefined4 *)func_0x0489d2c0(&puStack_aa8,&uStack_b08);
          puVar19 = puStack_aa0;
          if (((bStack_ac0 & 1) != 0) && (((ulong)pbStack_ae8 & 1) != 0)) {
            func_0x0412a280(uStack_ad8,(ulong)pbStack_ae8 & 0xfffffffffffffffe);
            puVar19 = puStack_aa0;
          }
        }
        uStack_a30 = uStack_a80;
        uStack_a38 = uStack_a88;
        uStack_a40 = uStack_a90;
        puStack_a48 = puStack_a98;
        puStack_a58 = (undefined8 *)puStack_aa8;
        pbStack_908 = pbStack_ab8;
        puStack_900 = puStack_ab0;
        puStack_aa8 = (undefined4 *)0x0;
        puStack_aa0 = (undefined4 *)0x0;
        puStack_a98 = (undefined4 *)0x0;
        uStack_a90 = 0;
        uStack_a88 = 0;
        uStack_a80 = 0;
        uStack_b08 = pbStack_ab8;
        uStack_b00 = puStack_ab0;
        lStack_8f8 = 0;
        lStack_8f0 = 0;
        lStack_8e8 = 0;
        uStack_8e0 = 0;
        uStack_8d8 = 0;
        uStack_8d0 = 0;
        uStack_a28 = uStack_a28 & 0xffffffffffffff00;
        pbStack_a68 = pbStack_ab8;
        puStack_a60 = puStack_ab0;
        uStack_af8 = (undefined4 *)0x0;
        uStack_af0 = (undefined4 *)0x0;
        pbStack_ae8 = (byte *)0x0;
        uStack_ae0 = 0;
        uStack_ad8 = 0;
        uStack_ad0 = 0;
        puStack_a50 = puVar19;
        pbStack_9b8 = (byte *)&uStack_ae0;
        func_0x09ba8cb0(&pbStack_9b8);
        puVar4 = uStack_af8;
        puVar19 = uStack_af0;
        if (uStack_af8 != (undefined4 *)0x0) {
          for (; puVar4 != puVar19; puVar19 = puVar19 + -0x14) {
            if ((*(char *)(puVar19 + -2) == '\x01') && ((*(byte *)(puVar19 + -0xc) & 1) != 0)) {
              func_0x0412a280(*(undefined8 *)(puVar19 + -8),
                              *(ulong *)(puVar19 + -0xc) & 0xfffffffffffffffe);
            }
          }
          uStack_af0 = puVar4;
          func_0x0412a280(uStack_af8,(long)pbStack_ae8 - (long)uStack_af8);
        }
        uStack_b08 = (byte *)&uStack_8e0;
        func_0x09ba8cb0(&uStack_b08);
        lVar12 = lStack_8f8;
        lVar18 = lStack_8f0;
        if (lStack_8f8 != 0) {
          for (; lVar12 != lVar18; lVar18 = lVar18 + -0x50) {
            if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
              func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                              *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
            }
          }
          lStack_8f0 = lVar12;
          func_0x0412a280(lStack_8f8,lStack_8e8 - lStack_8f8);
        }
        if ((bStack_a78 != 0) ||
           (uStack_b08 = (byte *)&uStack_a90, func_0x09ba8cb0(&uStack_b08), puVar13 = puStack_aa8,
           puVar19 = puStack_aa8, puVar4 = puStack_aa0, pbVar23 = (byte *)puStack_a98,
           puStack_aa8 == (undefined4 *)0x0)) goto LAB_09ba0df5;
        for (; puStack_aa8 = puVar19, puStack_a98 = (undefined4 *)pbVar23, puVar13 != puVar4;
            puVar4 = puVar4 + -0x14) {
          if ((*(char *)(puVar4 + -2) == '\x01') && ((*(byte *)(puVar4 + -0xc) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(puVar4 + -8),
                            *(ulong *)(puVar4 + -0xc) & 0xfffffffffffffffe);
          }
          puVar19 = puStack_aa8;
          pbVar23 = (byte *)puStack_a98;
        }
        puStack_aa0 = puVar13;
LAB_09ba0ded:
        func_0x0412a280(puVar19,(long)pbVar23 - (long)puVar19);
      }
    }
    else {
      uVar17 = 0;
LAB_09ba024a:
      *(undefined4 *)((long)&uStack_840 + uVar17) = 0x646c6f5f;
      lVar18 = uStack_440 + 4;
      uStack_440 = uStack_440 + 4;
      *(undefined1 *)((long)&uStack_840 + lVar18) = 0;
      func_0x0eee2dd0(&uStack_438,0,0x408);
      if (uVar20 < 0x400) goto LAB_09ba0292;
      uVar20 = 0;
LAB_09ba02f3:
      *(undefined4 *)((long)&uStack_438 + uVar20) = 0x77656e5f;
      lVar18 = uStack_38 + 4;
      uStack_38 = uStack_38 + 4;
      *(undefined1 *)((long)&uStack_438 + lVar18) = 0;
      if (*(long *)(param_2 + 0x50) == 0) goto LAB_09ba04fd;
LAB_09ba0325:
      uVar20 = uStack_38;
      if (0xfffffffffffffff7 < uStack_38) {
        FUN_04882e30();
LAB_09ba155b:
        func_0x04891200();
        goto LAB_09ba1560;
      }
      if (uStack_38 < 0x17) {
        uStack_a20 = CONCAT71(uStack_a20._1_7_,(char)uStack_38 * '\x02');
        lVar18 = (long)&uStack_a20 + 1;
        if (uStack_38 != 0) goto LAB_09ba03ab;
      }
      else {
        uVar17 = 0x1a;
        if ((uStack_38 | 7) != 0x17) {
          uVar17 = (uStack_38 | 7) + 1;
        }
        lVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
        if (lVar18 == 0) {
          func_0x0eec74c0(uVar17,0);
        }
        uStack_a20 = uVar17 | 1;
        uStack_a18 = uVar20;
        lStack_a10 = lVar18;
LAB_09ba03ab:
        func_0x0eee2f00(lVar18,&uStack_438,uVar20);
      }
      *(undefined1 *)(lVar18 + uVar20) = 0;
      plVar2 = *(long **)(param_2 + 0x50);
      if (plVar2 == (long *)0x0) goto LAB_09ba155b;
      (**(code **)(*plVar2 + 0x30))(&pbStack_ab8,plVar2,&uStack_a20);
      bVar22 = bStack_a78;
      bStack_ac8 = bStack_a78;
      if (bStack_a78 == 0) {
        uStack_b08 = pbStack_ab8;
        uStack_b00 = puStack_ab0;
        uStack_af8 = puStack_aa8;
        uStack_af0 = puStack_aa0;
        pbStack_ae8 = (byte *)puStack_a98;
        puStack_aa8 = (undefined4 *)0x0;
        puStack_aa0 = (undefined4 *)0x0;
        puStack_a98 = (undefined4 *)0x0;
        pbStack_a68 = (byte *)&uStack_a90;
        uStack_ae0 = uStack_a90;
        uStack_ad8 = uStack_a88;
        uStack_ad0 = uStack_a80;
        uStack_a90 = 0;
        uStack_a88 = 0;
        uStack_a80 = 0;
        func_0x09ba8cb0(&pbStack_a68);
        puVar4 = puStack_aa8;
        puVar19 = puStack_aa0;
        if (puStack_aa8 != (undefined4 *)0x0) {
          for (; puVar4 != puVar19; puVar19 = puVar19 + -0x14) {
            if ((*(char *)(puVar19 + -2) == '\x01') && ((*(byte *)(puVar19 + -0xc) & 1) != 0)) {
              func_0x0412a280(*(undefined8 *)(puVar19 + -8),
                              *(ulong *)(puVar19 + -0xc) & 0xfffffffffffffffe);
            }
          }
          puStack_aa0 = puVar4;
          func_0x0412a280(puStack_aa8,(long)puStack_a98 - (long)puStack_aa8);
        }
      }
      if ((uStack_a20 & 1) != 0) {
        func_0x0412a280(lStack_a10,uStack_a20 & 0xfffffffffffffffe);
      }
      if (bVar22 != 0) goto LAB_09ba04fd;
      func_0x09bacaa0(&uStack_b08,&uStack_438);
      pbStack_888 = uStack_b08;
      puStack_880 = uStack_b00;
      puStack_878 = uStack_af8;
      puStack_870 = uStack_af0;
      puStack_868 = (undefined4 *)pbStack_ae8;
      uStack_af8 = (undefined4 *)0x0;
      uStack_af0 = (undefined4 *)0x0;
      pbStack_ae8 = (byte *)0x0;
      uStack_860 = (undefined4)uStack_ae0;
      uStack_85c = uStack_ae0._4_4_;
      uStack_858 = (undefined4)uStack_ad8;
      uStack_854 = uStack_ad8._4_4_;
      uStack_850 = uStack_ad0;
      uStack_ae0 = 0;
      uStack_ad8 = 0;
      uStack_ad0 = 0;
      func_0x052bddf0(&pbStack_a68,&pbStack_888);
      func_0x048e6d60(&pbStack_888);
      func_0x0ee38090(&uStack_b08);
    }
LAB_09ba0df5:
    uStack_840 = (undefined8 *)0x4fc0d7b9a17d8c7;
    puStack_838 = &UNK_0140f690;
    pbStack_830 = (byte *)0x1;
    plStack_828 = (long *)CONCAT44(plStack_828._4_4_,0x12a);
    if ((uStack_a28 & 1) == 0) {
      uStack_438 = (undefined8 *)0x0;
      uStack_430 = 0;
      lStack_428 = 0;
      func_0x0eedeb80(8,0xf,&pbStack_a68,&uStack_438,&uStack_840);
      if (((ulong)uStack_438 & 1) != 0) {
        func_0x0412a280(lStack_428,(ulong)uStack_438 & 0xfffffffffffffffe);
      }
    }
    if (((byte)uStack_a28 & 1) == 0) {
      uStack_840 = &uStack_a40;
      func_0x09ba8cb0(&uStack_840);
      puVar14 = puStack_a58;
      puVar19 = puStack_a50;
      if (puStack_a58 != (undefined8 *)0x0) {
        for (; puVar14 != (undefined8 *)puVar19; puVar19 = puVar19 + -0x14) {
          if ((*(char *)(puVar19 + -2) == '\x01') && ((*(byte *)(puVar19 + -0xc) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(puVar19 + -8),
                            *(ulong *)(puVar19 + -0xc) & 0xfffffffffffffffe);
          }
        }
        puStack_a50 = (undefined4 *)puVar14;
        func_0x0412a280(puStack_a58,(long)puStack_a48 - (long)puStack_a58);
      }
    }
  }
  else {
    uStack_a38 = 0;
    uStack_a30 = 0;
    puStack_a48 = (undefined4 *)0x0;
    uStack_a40 = 0;
    puStack_a58 = (undefined8 *)0x0;
    puStack_a50 = (undefined4 *)0x0;
    pbStack_a68 = (byte *)0x0;
    puStack_a60 = (undefined *)0x0;
    uStack_a28 = 1;
  }
  func_0x0eee2dd0(&uStack_840,0,0x408);
  bVar25 = (*param_2 & 1) != 0;
  pbVar23 = param_2 + 1;
  if (bVar25) {
    pbVar23 = *(byte **)(param_2 + 0x10);
  }
  uVar20 = (ulong)(*param_2 >> 1);
  if (bVar25) {
    uVar20 = *(ulong *)(param_2 + 8);
  }
  if (uVar20 < 0x400) {
    if (uVar20 != 0) {
      func_0x0eee2ee0(&uStack_840,pbVar23,uVar20);
    }
    uStack_440 = uVar20;
    *(undefined1 *)((long)&uStack_840 + uVar20) = 0;
    uVar20 = uStack_440;
    if ((uStack_440 & 0xfffffffffffffffc) != 0x3fc) goto LAB_09ba0fd0;
    uStack_840 = (undefined8 *)((ulong)uStack_840 & 0xffffffffffffff00);
    uStack_440 = 0;
  }
  else {
    uVar20 = 0;
LAB_09ba0fd0:
    *(undefined4 *)((long)&uStack_840 + uVar20) = 0x77656e5f;
    lVar18 = uStack_440 + 4;
    uStack_440 = uStack_440 + 4;
    *(undefined1 *)((long)&uStack_840 + lVar18) = 0;
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7b8fb8), iVar16 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  uStack_980 = uStack_440;
  puStack_988 = &uStack_840;
  cVar15 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&puStack_988);
  if (cVar15 != '\0') {
    if ((DAT_0f7b8fb8 == '\0') && (iVar16 = func_0x04108328(&DAT_0f7b8fb8), iVar16 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    uStack_990 = uStack_440;
    puStack_998 = &uStack_840;
    (**(code **)(_DAT_0f7b8f98 + 0x20))(&uStack_438,&DAT_0f7b8f98,&puStack_998);
    uStack_b08 = (byte *)0x4fc0d7b9a17d8c7;
    uStack_b00 = &UNK_0140f690;
    uStack_af8 = (undefined4 *)0x1;
    uStack_af0 = (undefined4 *)CONCAT44(uStack_af0._4_4_,0xbd);
    if (bStack_3f8 == 0) {
      pbStack_ab8 = (byte *)0x0;
      puStack_ab0 = (undefined *)0x0;
      puStack_aa8 = (undefined4 *)0x0;
      func_0x0eedeb80(2,0x2d,&uStack_438,&pbStack_ab8,&uStack_b08);
      if (((ulong)pbStack_ab8 & 1) != 0) {
        func_0x0412a280(puStack_aa8,(ulong)pbStack_ab8 & 0xfffffffffffffffe);
      }
    }
    if ((bStack_3f8 & 1) == 0) {
      uStack_b08 = abStack_410;
      func_0x09ba8cb0(&uStack_b08);
      lVar18 = lStack_428;
      if (lStack_428 != 0) {
        for (; lVar18 != lStack_420; lStack_420 = lStack_420 + -0x50) {
          if ((*(char *)(lStack_420 + -8) == '\x01') && ((*(byte *)(lStack_420 + -0x30) & 1) != 0))
          {
            func_0x0412a280(*(undefined8 *)(lStack_420 + -0x20),
                            *(ulong *)(lStack_420 + -0x30) & 0xfffffffffffffffe);
          }
        }
        lStack_420 = lVar18;
        func_0x0412a280(lStack_428,lStack_418 - lStack_428);
      }
    }
  }
  func_0x0ee37d00(param_1,1);
joined_r0x09ba1284:
  if (cStack_9c8 == '\0') {
    uStack_840 = (undefined8 *)&uStack_9e0;
    func_0x09ba8cb0(&uStack_840);
    plVar1 = plStack_9f8;
    plVar2 = plStack_9f0;
    if (plStack_9f8 != (long *)0x0) {
      for (; plVar1 != plVar2; plVar2 = plVar2 + -10) {
        if (((char)plVar2[-1] == '\x01') && ((*(byte *)(plVar2 + -6) & 1) != 0)) {
          func_0x0412a280(plVar2[-4],plVar2[-6] & 0xfffffffffffffffe);
        }
      }
      plStack_9f0 = plVar1;
      func_0x0412a280(plStack_9f8,(long)plStack_9e8 - (long)plStack_9f8);
    }
  }
  return param_1;
}


