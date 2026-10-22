/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd66d750 (ELF vaddr 0xd56d750)
 * Label: caller-of-callee
 * Body:  [[0d66d750, 0d66dd17] [0d66dd20, 0d66e3ef]]
 * Ghidra: FUN_0d66d750
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_0d66d750(ulong *param_1,long param_2,byte *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong *puVar7;
  char cVar8;
  int iVar9;
  ulong uVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  long lStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  long lStack_940;
  char cStack_938;
  long *plStack_928;
  long *plStack_920;
  ulong uStack_918;
  ulong uStack_910;
  long lStack_908;
  ulong uStack_8f8;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  undefined4 uStack_8e8;
  undefined4 uStack_8e4;
  undefined8 uStack_8e0;
  long lStack_8d8;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  undefined8 uStack_8c8;
  long lStack_8c0;
  byte bStack_8b8;
  ulong uStack_8b0;
  long lStack_8a8;
  ulong *puStack_8a0;
  long lStack_898;
  ulong uStack_890;
  ulong uStack_888;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  ulong uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  byte *pbStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  long lStack_810;
  char cStack_808;
  ulong uStack_448;
  ulong uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  ulong uStack_38;
  
  bVar16 = (*(byte *)(param_2 + 0xf0) & 1) != 0;
  uStack_848 = param_2 + 0xf1;
  if (bVar16) {
    uStack_848 = *(ulong *)(param_2 + 0x100);
  }
  uStack_840 = (undefined *)(ulong)(*(byte *)(param_2 + 0xf0) >> 1);
  if (bVar16) {
    uStack_840 = (undefined *)*(ulong *)(param_2 + 0xf8);
  }
  uStack_838 = 0xf552660;
  uStack_830 = _DAT_0f552a60;
  bVar16 = (*param_3 & 1) != 0;
  pbStack_828 = param_3 + 1;
  if (bVar16) {
    pbStack_828 = *(byte **)(param_3 + 0x10);
  }
  uStack_820 = (ulong)(*param_3 >> 1);
  if (bVar16) {
    uStack_820 = *(ulong *)(param_3 + 8);
  }
  puStack_8a0 = param_1;
  func_0x048ad670(&uStack_918,&uStack_848,3,0x2f);
  uVar10 = uStack_910;
  uVar1 = uStack_918;
  uStack_978 = uStack_918;
  uStack_970 = uStack_910;
  uStack_968 = lStack_908;
  uStack_918 = 0;
  uStack_910 = 0;
  bVar16 = (uVar1 & 1) == 0;
  lStack_8a8 = lStack_908;
  lVar14 = lStack_908;
  if (bVar16) {
    lVar14 = (long)&uStack_978 + 1;
  }
  lStack_908 = 0;
  uVar13 = uVar1 >> 1 & 0x7f;
  if (!bVar16) {
    uVar13 = uVar10;
  }
  memset(&uStack_438,0,0x400);
  uVar10 = _DAT_0f552e70;
  if (_DAT_0f552e70 == 0xffffffffffffffff) {
    uStack_38 = _DAT_0f552e70;
    memset(&uStack_848,0,0x408);
joined_r0x0d66d8d5:
    if (uVar13 < 0x400) {
      if (uVar13 != 0) {
        func_0x0eee2f00(&uStack_848,lVar14,uVar13);
      }
      uStack_448 = uVar13;
      *(undefined1 *)((long)&uStack_848 + uVar13) = 0;
      uVar13 = uStack_448;
      if (uVar10 <= 0x3ff - uStack_448) {
LAB_0d66d93d:
        func_0x0eee2f00((long)&uStack_848 + uVar13,&uStack_438,uVar10);
        uVar13 = uVar10 + uStack_448;
        goto LAB_0d66d963;
      }
    }
    else {
      uVar13 = 0;
      if (uVar10 < 0x400) goto LAB_0d66d93d;
    }
    uStack_848 = uStack_848 & 0xffffffffffffff00;
    uStack_448 = 0;
    uVar10 = 0;
  }
  else {
    func_0x0eee2f00(&uStack_438,0xf552a70);
    uStack_38 = uVar10;
    memset(&uStack_848,0,0x408);
    if (uVar10 != 0) goto joined_r0x0d66d8d5;
    if (0x3ff < uVar13) {
      uVar10 = 0;
      goto LAB_0d66d97c;
    }
    if (uVar13 == 0) {
      uVar13 = 0;
    }
    else {
      func_0x0eee2f00(&uStack_848,lVar14,uVar13);
    }
LAB_0d66d963:
    uStack_448 = uVar13;
    *(undefined1 *)((long)&uStack_848 + uVar13) = 0;
    uVar10 = uStack_448;
  }
LAB_0d66d97c:
  func_0x0412f5e0(&uStack_918,&uStack_848,uVar10);
  if ((uVar1 & 1) != 0) {
    func_0x0412a280(lStack_8a8,uStack_978 & 0xfffffffffffffffe);
  }
  plStack_928 = (long *)0x0;
  plStack_920 = (long *)0x0;
  if ((DAT_0f7b8fb8 == '\0') && (iVar9 = FUN_04108328(&DAT_0f7b8fb8), iVar9 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  uVar10 = uStack_910;
  uVar1 = uStack_918;
  uStack_978 = uStack_918;
  uStack_970 = uStack_910;
  uStack_968 = lStack_908;
  uStack_918 = 0;
  uStack_910 = 0;
  bVar16 = (uVar1 & 1) != 0;
  lStack_898 = (long)&uStack_978 + 1;
  if (bVar16) {
    lStack_898 = lStack_908;
  }
  lStack_908 = 0;
  uStack_890 = uVar1 >> 1 & 0x7f;
  if (bVar16) {
    uStack_890 = uVar10;
  }
  (**(code **)(_DAT_0f7b8f98 + 0x10))(&uStack_848,&DAT_0f7b8f98,&lStack_898,&plStack_928,0x1a1,0);
  cVar8 = cStack_808;
  uVar1 = uStack_820;
  if (cStack_808 == '\0') {
    if (uStack_820 != 0) {
      while (uVar1 != uStack_818) {
        FUN_048b3e80(uStack_818 - 0x40);
        uStack_818 = uStack_818 - 0x40;
      }
      uStack_818 = uVar1;
      func_0x0412a280(uStack_820,lStack_810 - uStack_820);
    }
    lVar12 = uStack_838;
    lVar14 = uStack_830;
    if (uStack_838 != 0) {
      for (; lVar12 != lVar14; lVar14 = lVar14 + -0x50) {
        if ((*(char *)(lVar14 + -8) == '\x01') && ((*(byte *)(lVar14 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar14 + -0x20),
                          *(ulong *)(lVar14 + -0x30) & 0xfffffffffffffffe);
        }
      }
      uStack_830 = lVar12;
      func_0x0412a280(uStack_838,(long)pbStack_828 - uStack_838);
    }
  }
  if ((uStack_978 & 1) != 0) {
    func_0x0412a280(uStack_968,uStack_978 & 0xfffffffffffffffe);
  }
  plVar6 = plStack_928;
  if (cVar8 == '\0') {
    bStack_8b8 = 1;
    uStack_8f8 = 0;
    bVar11 = 1;
  }
  else {
    uStack_8b0 = 0;
    lVar14 = plStack_928[3];
    if (lVar14 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = lVar14 + 8;
      func_0x0412d770(lVar12);
    }
    (**(code **)(*plVar6 + 0x78))(&uStack_978,plVar6,&uStack_8b0);
    if (lVar14 != 0) {
      func_0x0412d790(lVar12);
    }
    uVar1 = uStack_8b0;
    cStack_808 = cStack_938;
    if (cStack_938 == '\0') {
      uStack_848 = uStack_978;
      uStack_840 = (undefined *)uStack_970;
      uStack_838._0_4_ = (undefined4)uStack_968;
      uStack_838._4_4_ = uStack_968._4_4_;
      uStack_830._0_4_ = (undefined4)uStack_960;
      uStack_830._4_4_ = uStack_960._4_4_;
      pbStack_828 = (byte *)lStack_958;
      uStack_820._0_4_ = (undefined4)uStack_950;
      uStack_820._4_4_ = uStack_950._4_4_;
      uStack_818._0_4_ = (undefined4)uStack_948;
      uStack_818._4_4_ = uStack_948._4_4_;
      lStack_810 = lStack_940;
      func_0x0d67a100(&uStack_848);
      lStack_8c0 = lStack_810;
      uVar5 = uStack_818._4_4_;
      uVar4 = (undefined4)uStack_818;
      uStack_8cc = uStack_820._4_4_;
      uStack_8d0 = (undefined4)uStack_820;
      lStack_8d8 = (long)pbStack_828;
      uVar3 = uStack_830._4_4_;
      uVar2 = (undefined4)uStack_830;
      uStack_8e4 = uStack_838._4_4_;
      uStack_8e8 = (undefined4)uStack_838;
      uStack_978 = uStack_848;
      uStack_970 = (ulong)uStack_840;
      uStack_838 = 0;
      uStack_830 = 0;
      pbStack_828 = (byte *)0x0;
      uStack_820 = 0;
      uStack_818 = 0;
      lStack_810 = 0;
      uStack_968 = 0;
      uStack_960 = 0;
      lStack_958 = 0;
      uStack_950 = 0;
      uStack_948 = 0;
      lStack_940 = 0;
      bStack_8b8 = 0;
      uStack_8f8 = uStack_848;
      uStack_8f0 = (undefined4)uStack_840;
      uStack_8ec = uStack_840._4_4_;
      uStack_8e0 = CONCAT44(uVar3,uVar2);
      uStack_8c8 = CONCAT44(uVar5,uVar4);
      func_0x048e6d60(&uStack_978);
      bVar11 = 0;
      uVar1 = uStack_820;
    }
    else {
      uVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uStack_8b0);
      if (uVar1 != 0 && uVar10 == 0) {
        func_0x0eec74c0(uVar1,0);
      }
      memset(uVar10,0,uVar1);
      func_0x0ee76a70(&uStack_8f8,plStack_928,uVar10,uVar1);
      cStack_938 = bStack_8b8;
      if (bStack_8b8 == '\0') {
        uStack_970 = CONCAT44(uStack_8ec,uStack_8f0);
        uStack_978 = uStack_8f8;
        uStack_968._0_4_ = uStack_8e8;
        uStack_968._4_4_ = uStack_8e4;
        uStack_960._0_4_ = (undefined4)uStack_8e0;
        uStack_960._4_4_ = uStack_8e0._4_4_;
        lStack_958 = lStack_8d8;
        uStack_950._0_4_ = uStack_8d0;
        uStack_950._4_4_ = uStack_8cc;
        uStack_948._0_4_ = (undefined4)uStack_8c8;
        uStack_948._4_4_ = uStack_8c8._4_4_;
        lStack_940 = lStack_8c0;
        func_0x0d67a1c0(&uStack_978);
        lStack_8c0 = lStack_940;
        uVar5 = uStack_948._4_4_;
        uVar4 = (undefined4)uStack_948;
        uStack_8cc = uStack_950._4_4_;
        uStack_8d0 = (undefined4)uStack_950;
        lStack_8d8 = lStack_958;
        uVar3 = uStack_960._4_4_;
        uVar2 = (undefined4)uStack_960;
        uStack_8e4 = uStack_968._4_4_;
        uStack_8e8 = (undefined4)uStack_968;
        uStack_888 = uStack_978;
        uStack_880 = (undefined4)uStack_970;
        uStack_87c = uStack_970._4_4_;
        uStack_968 = 0;
        uStack_960 = 0;
        lStack_958 = 0;
        uStack_950 = 0;
        uStack_948 = 0;
        lStack_940 = 0;
        uStack_878 = 0;
        uStack_870 = 0;
        uStack_868 = 0;
        uStack_860 = 0;
        uStack_858 = 0;
        uStack_850 = 0;
        bStack_8b8 = 0;
        uStack_8f8 = uStack_978;
        uStack_8f0 = (undefined4)uStack_970;
        uStack_8ec = uStack_970._4_4_;
        uStack_8e0 = CONCAT44(uVar3,uVar2);
        uStack_8c8 = CONCAT44(uVar5,uVar4);
        func_0x048e6d60(&uStack_888);
        func_0x0ee38090(&uStack_978);
        if (uVar10 != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,uVar10);
        }
        bVar11 = 0;
        uVar1 = uStack_820;
      }
      else {
        uStack_888 = uStack_8b0;
        if ((DAT_0f721a10 == '\0') && (iVar9 = FUN_04108328(&DAT_0f721a10), iVar9 != 0)) {
          _DAT_0f721a00 = (code *)&UNK_0d68adc0;
          _DAT_0f721a08 = &UNK_0d68ae90;
          func_0x0410844d(&DAT_0f721a10);
        }
        uStack_8f8 = uVar10;
        uVar10 = (*_DAT_0f721a00)(0,&uStack_8f8,&uStack_888);
        uVar1 = uStack_8f8;
        uStack_8f8 = 0;
        if (uVar1 != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
        }
        lVar14 = uStack_950;
        bStack_8b8 = 1;
        uStack_8f8 = uVar10;
        if (cStack_938 == '\0') {
          if (uStack_950 != 0) {
            while (lVar14 != uStack_948) {
              FUN_048b3e80(uStack_948 + -0x40);
              uStack_948 = uStack_948 + -0x40;
            }
            uStack_948 = lVar14;
            func_0x0412a280(uStack_950,lStack_940 - uStack_950);
          }
          lVar12 = uStack_968;
          lVar14 = uStack_960;
          if (uStack_968 != 0) {
            for (; lVar12 != lVar14; lVar14 = lVar14 + -0x50) {
              if ((*(char *)(lVar14 + -8) == '\x01') && ((*(byte *)(lVar14 + -0x30) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(lVar14 + -0x20),
                                *(ulong *)(lVar14 + -0x30) & 0xfffffffffffffffe);
              }
            }
            uStack_960 = lVar12;
            func_0x0412a280(uStack_968,lStack_958 - uStack_968);
          }
        }
        bVar11 = 1;
        uVar1 = uStack_820;
      }
    }
    uStack_820 = uVar1;
    if (cStack_808 == '\0') {
      uVar10 = uStack_818;
      if (uVar1 != 0) {
        while (uVar1 != uVar10) {
          FUN_048b3e80(uVar10 - 0x40);
          uVar10 = uVar10 - 0x40;
        }
        uStack_818 = uVar1;
        func_0x0412a280(uStack_820,lStack_810 - uStack_820);
      }
      lVar12 = uStack_838;
      lVar14 = uStack_830;
      if (uStack_838 != 0) {
        for (; lVar12 != lVar14; lVar14 = lVar14 + -0x50) {
          if ((*(char *)(lVar14 + -8) == '\x01') && ((*(byte *)(lVar14 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(lVar14 + -0x20),
                            *(ulong *)(lVar14 + -0x30) & 0xfffffffffffffffe);
          }
        }
        uStack_830 = lVar12;
        func_0x0412a280(uStack_838,(long)pbStack_828 - uStack_838);
      }
    }
  }
  if ((plStack_928 != (long *)0x0) &&
     (func_0x0ee56810(&uStack_848,&plStack_928), uVar1 = uStack_820, cStack_808 == '\0')) {
    uVar10 = uStack_818;
    if (uStack_820 != 0) {
      while (uVar1 != uVar10) {
        FUN_048b3e80(uVar10 - 0x40);
        uVar10 = uVar10 - 0x40;
      }
      uStack_818 = uVar1;
      func_0x0412a280(uStack_820,lStack_810 - uStack_820);
    }
    lVar12 = uStack_838;
    lVar14 = uStack_830;
    if (uStack_838 != 0) {
      for (; lVar12 != lVar14; lVar14 = lVar14 + -0x50) {
        if ((*(char *)(lVar14 + -8) == '\x01') && ((*(byte *)(lVar14 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar14 + -0x20),
                          *(ulong *)(lVar14 + -0x30) & 0xfffffffffffffffe);
        }
      }
      uStack_830 = lVar12;
      func_0x0412a280(uStack_838,(long)pbStack_828 - uStack_838);
    }
  }
  plVar6 = plStack_920;
  plStack_920 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = plStack_928;
  plStack_928 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if ((uStack_918 & 1) != 0) {
    func_0x0412a280(lStack_908,uStack_918 & 0xfffffffffffffffe);
  }
  uStack_848 = 0xc74a8599753162e2;
  uStack_840 = &UNK_0140f690;
  uStack_838 = 1;
  uStack_830 = CONCAT44(uStack_830._4_4_,0x131);
  if (bVar11 == 0) {
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_428 = 0;
    func_0x0eedeb80(2,0x2d,&uStack_8f8,&uStack_438,&uStack_848);
    bVar11 = bStack_8b8;
    if ((uStack_438 & 1) != 0) {
      func_0x0412a280(uStack_428,uStack_438 & 0xfffffffffffffffe);
      bVar11 = bStack_8b8;
    }
  }
  puVar7 = puStack_8a0;
  if ((bVar11 & 1) == 0) {
    *puStack_8a0 = 0;
    lVar14 = CONCAT44(uStack_8cc,uStack_8d0);
    if (lVar14 != 0) {
      lVar12 = lVar14;
      lVar15 = uStack_8c8;
      if (lVar14 != uStack_8c8) {
        do {
          lVar15 = lVar15 + -0x40;
          FUN_048b3e80(lVar15);
        } while (lVar15 != lVar14);
        lVar12 = CONCAT44(uStack_8cc,uStack_8d0);
      }
      uStack_8c8 = lVar14;
      func_0x0412a280(lVar12,lStack_8c0 - lVar12);
    }
    lVar14 = CONCAT44(uStack_8e4,uStack_8e8);
    if (lVar14 != 0) {
      lVar12 = lVar14;
      lVar15 = uStack_8e0;
      if (lVar14 != uStack_8e0) {
        do {
          if ((*(char *)(lVar15 + -8) == '\x01') && ((*(byte *)(lVar15 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(lVar15 + -0x20),
                            *(ulong *)(lVar15 + -0x30) & 0xfffffffffffffffe);
          }
          lVar15 = lVar15 + -0x50;
        } while (lVar15 != lVar14);
        lVar12 = CONCAT44(uStack_8e4,uStack_8e8);
      }
      uStack_8e0 = lVar14;
      func_0x0412a280(lVar12,lStack_8d8 - lVar12);
    }
  }
  else {
    *puStack_8a0 = uStack_8f8;
  }
  return puVar7;
}


