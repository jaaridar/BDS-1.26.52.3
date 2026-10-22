/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x63fd5e0 (ELF vaddr 0x62fd5e0)
 * Label: caller-of-callee
 * Body:  [[063fd5e0, 063fd906] [063fd910, 063fde26] [063fde30, 063fdf50] [063fdf60, 063fe06f]]
 * Ghidra: FUN_063fd5e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_063fd5e0(byte *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined *puVar12;
  char cVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  ulong *puVar18;
  ulong uVar19;
  byte *pbVar20;
  bool bVar21;
  undefined8 uStack_978;
  ulong uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  long lStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  long lStack_940;
  ulong uStack_938;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  long lStack_8f0;
  uint uStack_8e8;
  uint uStack_8d8;
  uint uStack_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 *puStack_880;
  ulong uStack_878;
  undefined8 *puStack_870;
  ulong uStack_868;
  byte *pbStack_860;
  ulong uStack_858;
  undefined8 *puStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  long *plStack_838;
  undefined *puStack_830;
  undefined *puStack_828;
  long lStack_820;
  long lStack_818;
  long lStack_810;
  long lStack_808;
  byte bStack_800;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined4 *puStack_428;
  ulong uStack_38;
  
  if ((*param_2 == _DAT_0f7ba058) && (param_2[1] == _DAT_0f7ba060)) {
    puVar15 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar15 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    uVar16 = _UNK_01378204;
    uStack_438 = 0x39;
    uStack_430 = 0x30;
    *(undefined8 *)(puVar15 + 8) = _DAT_013781fc;
    *(undefined8 *)(puVar15 + 10) = uVar16;
    uVar16 = _UNK_013781f4;
    *(undefined8 *)(puVar15 + 4) = _DAT_013781ec;
    *(undefined8 *)(puVar15 + 6) = uVar16;
    uVar5 = _UNK_013781e8;
    uVar4 = _UNK_013781e4;
    uVar3 = _UNK_013781e0;
    *puVar15 = _DAT_013781dc;
    puVar15[1] = uVar3;
    puVar15[2] = uVar4;
    puVar15[3] = uVar5;
    *(undefined1 *)(puVar15 + 0xc) = 0;
    uVar19 = param_3[1];
    puStack_428 = puVar15;
    if (uVar19 < (ulong)param_3[2]) {
      func_0x0412e5e0(uVar19,puVar15,0x30);
      param_3[1] = uVar19 + 0x18;
      uVar19 = 0x38;
      goto LAB_063fdb16;
    }
    uVar16 = func_0x04909a40(param_3,&uStack_438);
    param_3[1] = uVar16;
    puVar15 = puStack_428;
    uVar19 = uStack_438;
joined_r0x063fdad2:
    if ((uVar19 & 1) == 0) {
      return 0;
    }
    uVar19 = uStack_438 & 0xfffffffffffffffe;
    puStack_428 = puVar15;
LAB_063fdb16:
    func_0x0412a280(puVar15,uVar19);
    return 0;
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f7b8fb8), iVar14 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  pbVar20 = param_1 + 1;
  bVar21 = (*param_1 & 1) == 0;
  pbStack_860 = *(byte **)(param_1 + 0x10);
  if (bVar21) {
    pbStack_860 = pbVar20;
  }
  uStack_858 = (ulong)(*param_1 >> 1);
  if (!bVar21) {
    uStack_858 = *(ulong *)(param_1 + 8);
  }
  cVar13 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&pbStack_860);
  if (cVar13 == '\0') {
    bVar21 = (*param_1 & 1) != 0;
    if (bVar21) {
      pbVar20 = *(byte **)(param_1 + 0x10);
    }
    param_2 = (long *)(ulong)(*param_1 >> 1);
    if (bVar21) {
      param_2 = *(long **)(param_1 + 8);
    }
    if (param_2 < (long *)0xfffffffffffffff8) {
      if (param_2 < (long *)0x17) {
        uStack_840 = (byte *)CONCAT71(uStack_840._1_7_,(char)param_2 * '\x02');
        puVar17 = (undefined *)((long)&uStack_840 + 1);
        if (param_2 != (long *)0x0) goto LAB_063fda04;
      }
      else {
        uVar19 = 0x1a;
        if (((ulong)param_2 | 7) != 0x17) {
          uVar19 = ((ulong)param_2 | 7) + 1;
        }
        puVar17 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19);
        if (puVar17 == (undefined *)0x0) {
          func_0x0eec74c0(uVar19,0);
        }
        uStack_840 = (byte *)(uVar19 | 1);
        plStack_838 = param_2;
        puStack_830 = puVar17;
LAB_063fda04:
        func_0x0eee2ee0(puVar17,pbVar20,param_2);
      }
      puVar17[(long)param_2] = 0;
      puVar18 = (ulong *)FUN_0412f0e0(&uStack_840,0,&UNK_0123edca,0x1f);
      puStack_428 = (undefined4 *)puVar18[2];
      uStack_438 = *puVar18;
      uStack_430 = puVar18[1];
      *puVar18 = 0;
      puVar18[1] = 0;
      puVar18[2] = 0;
      if (((ulong)uStack_840 & 1) != 0) {
        func_0x0412a280(puStack_830,(ulong)uStack_840 & 0xfffffffffffffffe);
      }
      uVar19 = uStack_438;
      puVar15 = (undefined4 *)param_3[1];
      if (puVar15 < (undefined4 *)param_3[2]) {
        if ((uStack_438 & 1) == 0) {
          *(undefined4 **)(puVar15 + 4) = puStack_428;
          *puVar15 = (undefined4)uStack_438;
          puVar15[1] = uStack_438._4_4_;
          puVar15[2] = (undefined4)uStack_430;
          puVar15[3] = uStack_430._4_4_;
        }
        else {
          func_0x0412e5e0(puVar15,puStack_428,uStack_430);
        }
        param_3[1] = puVar15 + 6;
        param_3[1] = puVar15 + 6;
        puVar15 = puStack_428;
      }
      else {
        uVar16 = func_0x04909a40(param_3,&uStack_438);
        param_3[1] = uVar16;
        puVar15 = puStack_428;
        uVar19 = uStack_438;
      }
      goto joined_r0x063fdad2;
    }
    FUN_04882e30();
LAB_063fe025:
    iVar14 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar14 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
LAB_063fd7d3:
    uStack_878 = uStack_38;
    puStack_880 = param_3;
    (**(code **)(_DAT_0f7b8f98 + 0x80))(&uStack_840,&DAT_0f7b8f98,&puStack_880);
    uStack_920 = &UNK_0140f690;
    uStack_918 = 1;
    uStack_910 = CONCAT44(uStack_910._4_4_,0xd6);
    uStack_928 = param_1;
    if (bStack_800 == 0) {
      func_0x0eedea30(&uStack_978);
      func_0x0eedeb80(2,0x2d,&uStack_840,&uStack_978,&uStack_928);
      if (((ulong)uStack_978 & 1) != 0) {
        func_0x0412a280(uStack_968,(ulong)uStack_978 & 0xfffffffffffffffe);
      }
    }
    lVar1 = lStack_818;
    if ((bStack_800 & 1) == 0) {
      if (lStack_818 != 0) {
        while (lVar1 != lStack_810) {
          func_0x048b3e80(lStack_810 + -0x40);
          lStack_810 = lStack_810 + -0x40;
        }
        lStack_810 = lVar1;
        func_0x0412a280(lStack_818,lStack_808 - lStack_818);
      }
      puVar12 = puStack_830;
      puVar17 = puStack_828;
      if (puStack_830 != (undefined *)0x0) {
        for (; puVar12 != puVar17; puVar17 = puVar17 + -0x50) {
          if ((puVar17[-8] == '\x01') && ((puVar17[-0x30] & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(puVar17 + -0x20),
                            *(ulong *)(puVar17 + -0x30) & 0xfffffffffffffffe);
          }
        }
        puStack_828 = puVar12;
        func_0x0412a280(puStack_830,lStack_820 - (long)puStack_830);
      }
    }
  }
  else {
    bVar21 = (*param_1 & 1) != 0;
    uStack_840 = pbVar20;
    if (bVar21) {
      uStack_840 = *(byte **)(param_1 + 0x10);
    }
    plStack_838 = (long *)(ulong)(*param_1 >> 1);
    if (bVar21) {
      plStack_838 = *(long **)(param_1 + 8);
    }
    puStack_830 = &UNK_0142e542;
    puStack_828 = (undefined *)0x9;
    param_3 = &uStack_438;
    func_0x049151c0(param_3,&uStack_840,2,0x2f);
    uStack_868 = uStack_38;
    puStack_870 = param_3;
    cVar13 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&puStack_870);
    param_1 = (byte *)0xd1cff2edc0381001;
    if (cVar13 == '\0') {
      if (DAT_0f7b8fb8 == '\0') goto LAB_063fe025;
      goto LAB_063fd7d3;
    }
  }
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uStack_8d8 = (uint)lVar2 & 0xffff;
  uStack_928 = (byte *)CONCAT44(uStack_928._4_4_,(int)((ulong)lVar1 >> 0x20));
  uStack_918 = CONCAT44(uStack_918._4_4_,(int)((ulong)lVar1 >> 0x10)) & 0xffffffff0000ffff;
  uStack_908 = CONCAT44(uStack_908._4_4_,(int)lVar1) & 0xffffffff0000ffff;
  uStack_8f8 = CONCAT44(uStack_8f8._4_4_,(uint)(ushort)((ulong)lVar2 >> 0x30));
  uStack_8e8 = (uint)((ulong)lVar2 >> 0x10);
  func_0x0470d9a0(&uStack_8c8,&UNK_01287ba2,0x28,0x122112,&uStack_928);
  puVar18 = (ulong *)func_0x0412f8c0(&uStack_8c8,&UNK_012d8de1,5);
  uStack_968 = puVar18[2];
  uStack_978 = (undefined8 *)*puVar18;
  uStack_970 = puVar18[1];
  *puVar18 = 0;
  puVar18[1] = 0;
  puVar18[2] = 0;
  uStack_918 = (long)&uStack_978 + 1;
  uStack_910 = (ulong)uStack_978 >> 1 & 0x7f;
  if (((ulong)uStack_978 & 1) != 0) {
    uStack_910 = uStack_970;
    uStack_918 = uStack_968;
  }
  uStack_920 = (undefined *)uStack_38;
  uStack_928 = (byte *)param_3;
  func_0x049151c0(&uStack_840,&uStack_928,2,0x2f);
  if (((ulong)uStack_978 & 1) != 0) {
    func_0x0412a280(uStack_968,(ulong)uStack_978 & 0xfffffffffffffffe);
  }
  if ((uStack_8c8 & 1) != 0) {
    func_0x0412a280(uStack_8b8,CONCAT44(uStack_8c4,uStack_8c8) & 0xfffffffffffffffe);
  }
  uStack_848 = uStack_440;
  puStack_850 = &uStack_840;
  (**(code **)(_DAT_0f7b8f98 + 0x20))(&uStack_978,&DAT_0f7b8f98,&puStack_850);
  uVar19 = uStack_938;
  uStack_8e8 = CONCAT31(uStack_8e8._1_3_,(byte)uStack_938);
  if ((byte)uStack_938 == '\0') {
    uStack_928 = (byte *)uStack_978;
    uStack_920 = (undefined *)uStack_970;
    uStack_918._0_4_ = (undefined4)uStack_968;
    uStack_918._4_4_ = uStack_968._4_4_;
    uStack_910._0_4_ = (undefined4)uStack_960;
    uStack_910._4_4_ = uStack_960._4_4_;
    uStack_908 = lStack_958;
    uStack_900._0_4_ = (undefined4)uStack_950;
    uStack_900._4_4_ = uStack_950._4_4_;
    uStack_8f8._0_4_ = (undefined4)uStack_948;
    uStack_8f8._4_4_ = uStack_948._4_4_;
    lStack_8f0 = lStack_940;
    func_0x06443b50(&uStack_928);
    lStack_940 = lStack_8f0;
    uVar11 = uStack_8f8._4_4_;
    uVar10 = (undefined4)uStack_8f8;
    uVar9 = uStack_900._4_4_;
    uVar8 = (undefined4)uStack_900;
    lStack_958 = uStack_908;
    uVar7 = uStack_910._4_4_;
    uVar5 = (undefined4)uStack_910;
    uVar4 = uStack_918._4_4_;
    uVar3 = (undefined4)uStack_918;
    uStack_8c8 = (uint)uStack_928;
    uStack_8c4 = uStack_928._4_4_;
    uStack_8c0 = (undefined4)uStack_920;
    uStack_8bc = uStack_920._4_4_;
    uStack_918 = 0;
    uStack_910 = 0;
    uStack_908 = 0;
    uStack_900 = 0;
    uStack_8f8 = 0;
    lStack_8f0 = 0;
    uStack_8b8 = 0;
    uStack_8b0 = 0;
    uStack_8a8 = 0;
    uStack_8a0 = 0;
    uStack_898 = 0;
    uStack_890 = 0;
    uStack_938 = uStack_938 & 0xffffffffffffff00;
    uStack_978 = (undefined8 *)uStack_928;
    uStack_970 = (ulong)uStack_920;
    uStack_968 = CONCAT44(uVar4,uVar3);
    uStack_960 = CONCAT44(uVar7,uVar5);
    uStack_950 = CONCAT44(uVar9,uVar8);
    uStack_948 = CONCAT44(uVar11,uVar10);
    func_0x048e6d60(&uStack_8c8);
    if ((uStack_8e8 & 1) != 0) goto LAB_063fde71;
  }
  else {
    uStack_978 = (undefined8 *)0x0;
    uStack_970 = 0;
    uStack_968 = 0;
    uStack_960 = 0;
    lStack_958 = 0;
    uStack_950 = 0;
    uStack_948 = 0;
    lStack_940 = 0;
    uStack_938 = 1;
    if ((uVar19 & 1) != 0) goto LAB_063fde71;
  }
  lVar2 = uStack_900;
  lVar1 = uStack_8f8;
  if (uStack_900 != 0) {
    while (lVar2 != lVar1) {
      func_0x048b3e80(lVar1 + -0x40);
      lVar1 = lVar1 + -0x40;
    }
    uStack_8f8 = lVar2;
    func_0x0412a280(uStack_900,lStack_8f0 - uStack_900);
  }
  uVar6 = uStack_918;
  uVar19 = uStack_910;
  if (uStack_918 != 0) {
    for (; uVar6 != uVar19; uVar19 = uVar19 - 0x50) {
      if ((*(char *)(uVar19 - 8) == '\x01') && ((*(byte *)(uVar19 - 0x30) & 1) != 0)) {
        func_0x0412a280(*(undefined8 *)(uVar19 - 0x20),
                        *(ulong *)(uVar19 - 0x30) & 0xfffffffffffffffe);
      }
    }
    uStack_910 = uVar6;
    func_0x0412a280(uStack_918,uStack_908 - uStack_918);
  }
LAB_063fde71:
  uStack_920 = &UNK_0140f690;
  uStack_918 = 1;
  uStack_910 = CONCAT44(uStack_910._4_4_,0xe1);
  uStack_928 = param_1;
  if ((byte)uStack_938 == 0) {
    func_0x0eedea30(&uStack_8c8);
    func_0x0eedeb80(2,0x2d,&uStack_978,&uStack_8c8,&uStack_928);
    if ((uStack_8c8 & 1) != 0) {
      func_0x0412a280(uStack_8b8,CONCAT44(uStack_8c4,uStack_8c8) & 0xfffffffffffffffe);
    }
  }
  lVar1 = uStack_950;
  if (((byte)uStack_938 & 1) == 0) {
    lVar2 = uStack_948;
    if (uStack_950 != 0) {
      while (lVar1 != lVar2) {
        func_0x048b3e80(lVar2 + -0x40);
        lVar2 = lVar2 + -0x40;
      }
      uStack_948 = lVar1;
      func_0x0412a280(uStack_950,lStack_940 - uStack_950);
    }
    lVar2 = uStack_968;
    lVar1 = uStack_960;
    if (uStack_968 != 0) {
      for (; lVar2 != lVar1; lVar1 = lVar1 + -0x50) {
        if ((*(char *)(lVar1 + -8) == '\x01') && ((*(byte *)(lVar1 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar1 + -0x20),
                          *(ulong *)(lVar1 + -0x30) & 0xfffffffffffffffe);
        }
      }
      uStack_960 = lVar2;
      func_0x0412a280(uStack_968,lStack_958 - uStack_968);
    }
  }
  return 1;
}



/* ---- referenced strings ----
 * 0x13781dc  Cannot delete prefab instance file with empty ID
 * 0x13781ec  efab instance file with empty ID
 * 0x13781fc  le with empty ID
 */
