/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6281700 (ELF vaddr 0x6181700)
 * Label: caller-of-callee
 * Body:  [[06281700, 06281fd0] [06281fe0, 06282167] [06282170, 0628230b] [06282310, 0628263d] [06282640, 06282782]]
 * Ghidra: FUN_06281700
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06281700(long param_1,undefined4 param_2)

{
  long *plVar1;
  ulong *******pppppppuVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong ******ppppppuVar6;
  ulong *******pppppppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  long lVar14;
  byte bVar15;
  ulong uVar16;
  long lVar17;
  ulong ******ppppppuVar18;
  ulong ******ppppppuVar19;
  ulong uVar20;
  ulong *******pppppppuVar21;
  ulong ******ppppppuVar22;
  undefined1 uStack_a79;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  ulong *******pppppppuStack_a68;
  code *pcStack_a60;
  undefined4 uStack_a58;
  undefined1 uStack_a54;
  ulong *******pppppppuStack_a50;
  undefined8 uStack_a48;
  undefined *puStack_a40;
  ulong ******ppppppuStack_a38;
  ulong ******ppppppuStack_a30;
  long lStack_a28;
  ulong *******pppppppuStack_a18;
  ulong *******pppppppuStack_a10;
  long lStack_a08;
  byte bStack_a00;
  ulong ******ppppppuStack_9f0;
  ulong *******pppppppuStack_9e8;
  ulong *******pppppppuStack_9e0;
  ulong *******pppppppuStack_9d8;
  code *pcStack_9d0;
  undefined4 uStack_9c8;
  undefined1 uStack_9c4;
  ulong *******pppppppuStack_9c0;
  ulong ******ppppppuStack_9b8;
  undefined *puStack_9b0;
  ulong *******pppppppuStack_9a8;
  ulong *******pppppppuStack_9a0;
  long lStack_998;
  ulong ******ppppppuStack_990;
  ulong uStack_988;
  ulong ******ppppppuStack_980;
  ulong ******ppppppuStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  ulong ******ppppppuStack_960;
  long lStack_958;
  undefined4 uStack_950;
  undefined4 uStack_94c;
  undefined4 uStack_948;
  undefined4 uStack_944;
  long lStack_940;
  byte bStack_938;
  ulong *******pppppppuStack_8e8;
  undefined8 uStack_8e0;
  long *plStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined2 uStack_8c0;
  ulong *******pppppppuStack_8b8;
  ulong *******pppppppuStack_8b0;
  undefined *puStack_8a8;
  code *pcStack_8a0;
  undefined4 uStack_898;
  undefined1 uStack_894;
  long lStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined *puStack_870;
  undefined1 *puStack_868;
  undefined8 uStack_860;
  undefined1 *puStack_858;
  undefined8 uStack_850;
  undefined1 auStack_848 [8];
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined4 *puStack_830;
  uint uStack_7b8;
  undefined1 auStack_7b0 [8];
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined4 *puStack_798;
  uint uStack_720;
  ulong ******ppppppuStack_718;
  ulong uStack_710;
  undefined8 uStack_708;
  ulong ******ppppppuStack_700;
  long lStack_6f8;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined8 uStack_6e8;
  long lStack_6e0;
  undefined1 *puStack_5f0;
  undefined8 uStack_5e8;
  undefined1 auStack_5e0 [384];
  undefined2 uStack_460;
  undefined1 uStack_45e;
  undefined8 uStack_45c;
  undefined8 uStack_450;
  undefined1 uStack_448;
  undefined1 auStack_438 [1024];
  undefined8 uStack_38;
  
  func_0x06281650(auStack_438,param_1,param_2);
  if ((DAT_0f7b8fb8 == '\0') && (iVar13 = FUN_04108328(&DAT_0f7b8fb8), iVar13 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  uStack_850 = uStack_38;
  puStack_858 = auStack_438;
  cVar12 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&puStack_858);
  if (cVar12 == '\0') {
    return;
  }
  ppppppuStack_a38 = (ulong ******)0x0;
  ppppppuStack_a30 = (ulong ******)0x0;
  lStack_a28 = 0;
  if ((DAT_0f7b8fb8 == '\0') && (iVar13 = FUN_04108328(&DAT_0f7b8fb8), iVar13 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  uStack_860 = uStack_38;
  puStack_868 = auStack_438;
  (**(code **)(_DAT_0f7b8f98 + 0x60))(&ppppppuStack_978,&DAT_0f7b8f98,&puStack_868);
  pppppppuStack_9e8 = (ulong *******)0xba2af6ff3ca9d92c;
  pppppppuStack_9e0 = (ulong *******)&UNK_0140f690;
  pppppppuStack_9d8 = (ulong *******)0x1;
  pcStack_9d0 = (code *)CONCAT44(pcStack_9d0._4_4_,0x1bc);
  bVar15 = bStack_938;
  if (bStack_938 == 0) {
    uStack_a78 = (ulong *******)0x0;
    uStack_a70 = (ulong *******)0x0;
    pppppppuStack_a68 = (ulong *******)0x0;
    func_0x0eedeb80(2,0x2d,&ppppppuStack_978,&uStack_a78,&pppppppuStack_9e8);
    bVar15 = bStack_938;
    if (((ulong)uStack_a78 & 1) != 0) {
      func_0x0412a280(pppppppuStack_a68,(ulong)uStack_a78 & 0xfffffffffffffffe);
      bVar15 = bStack_938;
    }
  }
  ppppppuVar19 = uStack_968;
  ppppppuVar22 = ppppppuStack_978;
  if ((bVar15 & 1) == 0) {
    ppppppuStack_718 = ppppppuStack_978;
    uStack_710 = uStack_970;
    uStack_708 = uStack_968;
    ppppppuStack_700 = ppppppuStack_960;
    lStack_6f8 = lStack_958;
    uStack_6f0 = uStack_950;
    uStack_6ec = uStack_94c;
    uStack_6e8 = CONCAT44(uStack_944,uStack_948);
    lStack_6e0 = lStack_940;
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uStack_968 = (ulong ******)0x0;
    ppppppuStack_960 = (ulong ******)0x0;
    ppppppuStack_978 = (ulong ******)0x0;
    uStack_970 = 0;
    lStack_958 = 0;
    if ((DAT_0f569528 & 1) == 0) {
      ppppppuStack_960 = _DAT_0f569538;
      uStack_970 = CONCAT71(uRam000000000f569529,DAT_0f569528);
      uStack_968 = _DAT_0f569530;
    }
    else {
      func_0x04885070(&uStack_970,_DAT_0f569538,_DAT_0f569530);
    }
    ppppppuStack_978 = _DAT_0f569520;
    uStack_a78 = (ulong *******)0x0;
    uStack_a70 = (ulong *******)0x0;
    pppppppuStack_a68 = (ulong *******)0x0;
    pppppppuStack_8b0 = (ulong *******)((ulong)pppppppuStack_8b0 & 0xffffffffffffff00);
    pppppppuStack_8b8 = (ulong *******)&uStack_a78;
    pppppppuVar21 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (pppppppuVar21 == (ulong *******)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    pppppppuStack_a68 = pppppppuVar21 + 5;
    pppppppuStack_9e0 = (ulong *******)&pppppppuStack_a18;
    pppppppuStack_9d8 = (ulong *******)&pppppppuStack_8e8;
    pcStack_9d0 = (code *)((ulong)pcStack_9d0 & 0xffffffffffffff00);
    pppppppuVar21[2] = (ulong ******)0x0;
    pppppppuVar21[3] = (ulong ******)0x0;
    *pppppppuVar21 = (ulong ******)0x0;
    pppppppuVar21[1] = (ulong ******)0x0;
    pppppppuVar21[4] = (ulong ******)0x0;
    uStack_a78 = pppppppuVar21;
    pppppppuStack_a18 = pppppppuVar21;
    pppppppuStack_9e8 = (ulong *******)&uStack_a78;
    pppppppuStack_8e8 = pppppppuVar21;
    if (pppppppuVar21 != &ppppppuStack_978) {
      if ((uStack_970 & 1) == 0) {
        pppppppuVar21[3] = ppppppuStack_960;
        *(undefined4 *)(pppppppuVar21 + 1) = (undefined4)uStack_970;
        *(undefined4 *)((long)pppppppuVar21 + 0xc) = uStack_970._4_4_;
        *(undefined4 *)(pppppppuVar21 + 2) = (undefined4)uStack_968;
        *(undefined4 *)((long)pppppppuVar21 + 0x14) = uStack_968._4_4_;
      }
      else {
        uStack_a70 = pppppppuVar21;
        func_0x04885070(pppppppuVar21 + 1,ppppppuStack_960,uStack_968);
      }
    }
    *pppppppuVar21 = ppppppuStack_978;
    uStack_a70 = pppppppuStack_8e8 + 5;
    puStack_830 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_830 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar11 = _UNK_01460a2f;
    uStack_840 = 0x21;
    uStack_838 = 0x1d;
    *(ulong *)((long)puStack_830 + 0xd) = CONCAT53(_UNK_01460a2a,_DAT_01460a27);
    *(undefined8 *)((long)puStack_830 + 0x15) = uVar11;
    uVar10 = _UNK_01460a26;
    uVar9 = _UNK_01460a22;
    uVar8 = _UNK_01460a1e;
    *puStack_830 = _DAT_01460a1a;
    puStack_830[1] = uVar8;
    puStack_830[2] = uVar9;
    puStack_830[3] = uVar10;
    *(undefined1 *)((long)puStack_830 + 0x1d) = 0;
    uStack_7b8 = 0;
    func_0x060aeeb0(uVar4,0,2,&uStack_a78,auStack_848,1);
    if ((ulong)uStack_7b8 != 0xffffffff) {
      (**(code **)(&UNK_0f023e00 + (ulong)uStack_7b8 * 8))(&pppppppuStack_9e8,&uStack_840);
    }
    pppppppuVar7 = uStack_a78;
    uStack_7b8 = 0xffffffff;
    pppppppuVar21 = uStack_a70;
    if (uStack_a78 != (ulong *******)0x0) {
      for (; pppppppuVar7 != pppppppuVar21; pppppppuVar21 = pppppppuVar21 + -5) {
        if (((ulong)pppppppuVar21[-4] & 1) != 0) {
          func_0x0412a280(pppppppuVar21[-2],(ulong)pppppppuVar21[-4] & 0xfffffffffffffffe);
        }
      }
      uStack_a70 = pppppppuVar7;
      func_0x0412a280(uStack_a78,(long)pppppppuStack_a68 - (long)uStack_a78);
    }
    if ((uStack_970 & 1) != 0) {
      func_0x0412a280(ppppppuStack_960,uStack_970 & 0xfffffffffffffffe);
    }
    ppppppuVar19 = (ulong ******)0x0;
    uVar20 = 0;
    ppppppuVar22 = (ulong ******)0x0;
  }
  else {
    uStack_708 = uStack_968;
    uStack_710 = uStack_970;
    ppppppuStack_718 = (ulong ******)((ulong)ppppppuStack_978 & 0xffffffffffff0000);
    uVar20 = (ulong)((uint)((ulong)ppppppuStack_978 >> 1) & 0x7f);
    if (((ulong)ppppppuStack_978 & 1) != 0) {
      uVar20 = uStack_970;
    }
    if (uVar20 != 0) {
      ppppppuStack_990 = ppppppuStack_978;
      uStack_988 = uStack_970;
      ppppppuStack_980 = uStack_968;
      uStack_710 = *(ulong *)(param_1 + 0x50);
      uStack_708 = (ulong ******)CONCAT44((int)((ulong)uStack_968 >> 0x20),0xffffffff);
      ppppppuStack_700 = (ulong ******)&uStack_6f0;
      lStack_6f8 = 0x800000000;
      puStack_5f0 = auStack_5e0;
      uStack_5e8 = 0x800000000;
      uStack_460 = 0xfbf8;
      uStack_45e = 1;
      uStack_45c = 0xffffffff00000000;
      uStack_450 = 0;
      uStack_448 = 0;
      ppppppuStack_718 = (ulong ******)&UNK_0f4e3998;
      pppppppuStack_8e8 = (ulong *******)CONCAT62(pppppppuStack_8e8._2_6_,0xd);
      uStack_8e0 = 0;
      plStack_8d8 = (long *)0x0;
      uStack_8d0 = 0;
      uStack_8c8 = 0;
      uStack_8c0 = 0x100;
      pppppppuStack_9a8 = (ulong *******)0x0;
      pppppppuStack_9a0 = (ulong *******)0x0;
      lStack_998 = 0;
      func_0x0ed62aa0(&ppppppuStack_978,&ppppppuStack_990);
      puStack_870 = &UNK_0f02d280;
      pppppppuVar21 = (ulong *******)(uStack_710 + 0x18);
      pppppppuStack_9d8 = (ulong *******)&UNK_04913860;
      uStack_9c8 = 0x8240cd28;
      pcStack_9d0 = (code *)0x0;
      uStack_9c4 = 4;
      pppppppuStack_9e8 = (ulong *******)&pppppppuStack_8e8;
      puStack_9b0 = &UNK_04913840;
      pppppppuStack_9c0 = pppppppuVar21;
      uStack_a78 = (ulong *******)func_0x04913c20(pppppppuVar21);
      uStack_a70 = pppppppuVar21;
      ppppppuStack_9b8 = (ulong ******)uStack_a78;
      pppppppuStack_8b8 = (ulong *******)func_0x04913c20(pppppppuVar21);
      pppppppuStack_8b0 = pppppppuVar21;
      cVar12 = func_0x04913500(&uStack_a78,&pppppppuStack_8b8);
      if ((cVar12 == '\0') &&
         (cVar12 = func_0x0eeddcf0(&UNK_014784b5,&UNK_011ec167,0xa2,&UNK_01221c2c,&UNK_013422c4),
         cVar12 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      lStack_890 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      if (lStack_890 == 0) {
        func_0x048b0de0(&uStack_a78,&uStack_a79);
        _DAT_0f54fd90 = (undefined4)uStack_a78;
        uRam000000000f54fd94 = uStack_a78._4_4_;
        uVar8 = (undefined4)uStack_a70;
        uVar9 = uStack_a70._4_4_;
        uStack_a78 = (ulong *******)0x0;
        uStack_a70 = (ulong *******)0x0;
        plVar5 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
        _DAT_0f54fd98 = uVar8;
        uRam000000000f54fd9c = uVar9;
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar3 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            func_0x0412c2d0(plVar5);
          }
        }
        pppppppuVar7 = uStack_a70;
        if (uStack_a70 != (ulong *******)0x0) {
          LOCK();
          pppppppuVar2 = uStack_a70 + 1;
          ppppppuVar22 = *pppppppuVar2;
          *pppppppuVar2 = (ulong ******)((long)*pppppppuVar2 + -1);
          UNLOCK();
          if (ppppppuVar22 == (ulong ******)0x0) {
            (*(code *)(*uStack_a70)[2])(uStack_a70);
            func_0x0412c2d0(pppppppuVar7);
          }
        }
        lStack_890 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      }
      puStack_8a8 = &UNK_063bb200;
      uStack_898 = 0xab3e1687;
      pcStack_8a0 = (code *)0x0;
      uStack_894 = 3;
      uStack_888 = 0;
      uStack_880 = 0;
      pppppppuStack_a68 = (ulong *******)&UNK_063bb200;
      pcStack_a60 = (code *)0x0;
      uStack_a58 = 0xab3e1687;
      uStack_a54 = 3;
      pppppppuStack_8b8 = (ulong *******)0x0;
      uStack_a78 = (ulong *******)&pppppppuStack_9a8;
      uStack_a48 = 0;
      puStack_a40 = &UNK_063bb1e0;
      pppppppuStack_a50 = pppppppuVar21;
      cVar12 = func_0x0ed6b4a0(&ppppppuStack_718,&ppppppuStack_978,&uStack_a78,&pppppppuStack_9e8,
                               &puStack_870);
      if ((pcStack_a60 != (code *)0x0) && ((*pcStack_a60)(&uStack_a78), pcStack_8a0 != (code *)0x0))
      {
        (*pcStack_8a0)(&pppppppuStack_8b8);
      }
      if (pcStack_9d0 != (code *)0x0) {
        (*pcStack_9d0)(&pppppppuStack_9e8);
      }
      func_0x04907660(&uStack_950);
      if (uStack_968 != (ulong ******)0x0) {
        ppppppuStack_960 = uStack_968;
        func_0x0412a280(uStack_968,lStack_958 - (long)uStack_968);
      }
      pppppppuVar21 = pppppppuStack_9a8;
      if (cVar12 == '\0') {
        pppppppuStack_a18 = (ulong *******)((ulong)pppppppuStack_a18 & 0xffffffffffffff00);
        bStack_a00 = 0;
        pppppppuVar7 = pppppppuStack_9a0;
        if (pppppppuStack_9a8 != (ulong *******)0x0) {
          while (pppppppuVar21 != pppppppuVar7) {
            func_0x062a5a00(pppppppuVar7 + -0xd);
            pppppppuVar7 = pppppppuVar7 + -0xd;
          }
          pppppppuStack_9a0 = pppppppuVar21;
          func_0x0412a280(pppppppuStack_9a8,lStack_998 - (long)pppppppuStack_9a8);
        }
      }
      else {
        pppppppuStack_a18 = pppppppuStack_9a8;
        pppppppuStack_a10 = pppppppuStack_9a0;
        lStack_a08 = lStack_998;
        bStack_a00 = 1;
      }
      plVar5 = plStack_8d8;
      uStack_8e0 = 0;
      plStack_8d8 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          func_0x0412c2d0(plVar5);
        }
        plVar5 = plStack_8d8;
        uStack_8d0 = 0;
        if (plStack_8d8 != (long *)0x0) {
          LOCK();
          plVar1 = plStack_8d8 + 1;
          lVar3 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar3 == 0) {
            (**(code **)(*plStack_8d8 + 0x10))(plStack_8d8);
            func_0x0412c2d0(plVar5);
          }
        }
      }
      func_0x0490a470(&ppppppuStack_718);
      if (((ulong)ppppppuStack_990 & 1) != 0) {
        func_0x0412a280(ppppppuStack_980,(ulong)ppppppuStack_990 & 0xfffffffffffffffe);
      }
      bVar15 = bStack_a00;
      pppppppuVar7 = pppppppuStack_a10;
      pppppppuVar21 = pppppppuStack_a18;
      if (bStack_a00 == 1) {
        func_0x06282a80(param_1 + 0x78,
                        ((long)pppppppuStack_a10 - (long)pppppppuStack_a18 >> 3) *
                        0x4ec4ec4ec4ec4ec5 +
                        (*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78) >> 3) *
                        0x4ec4ec4ec4ec4ec5);
        if (pppppppuVar21 != pppppppuVar7) {
          uVar20 = *(ulong *)(param_1 + 0x80);
          do {
            while (*(ulong *)(param_1 + 0x88) <= uVar20) {
              uVar20 = func_0x062a8a60(param_1 + 0x78,pppppppuVar21);
              *(ulong *)(param_1 + 0x80) = uVar20;
              pppppppuVar21 = pppppppuVar21 + 0xd;
              bVar15 = bStack_a00;
              if (pppppppuVar21 == pppppppuVar7) goto LAB_06282365;
            }
            func_0x062a8040(uVar20,pppppppuVar21);
            uVar20 = uVar20 + 0x68;
            *(ulong *)(param_1 + 0x80) = uVar20;
            *(ulong *)(param_1 + 0x80) = uVar20;
            pppppppuVar21 = pppppppuVar21 + 0xd;
            bVar15 = bStack_a00;
          } while (pppppppuVar21 != pppppppuVar7);
        }
      }
LAB_06282365:
      pppppppuVar21 = pppppppuStack_a18;
      if (((bVar15 & 1) != 0) &&
         (pppppppuVar7 = pppppppuStack_a10, pppppppuStack_a18 != (ulong *******)0x0)) {
        while (pppppppuVar21 != pppppppuVar7) {
          func_0x062a5a00(pppppppuVar7 + -0xd);
          pppppppuVar7 = pppppppuVar7 + -0xd;
        }
        pppppppuStack_a10 = pppppppuVar21;
        func_0x0412a280(pppppppuStack_a18,lStack_a08 - (long)pppppppuStack_a18);
      }
      ppppppuVar6 = ppppppuStack_a38;
      ppppppuVar19 = ppppppuStack_a38;
      ppppppuVar22 = ppppppuStack_a30;
      if (ppppppuStack_a38 == (ulong ******)0x0) {
        return;
      }
      while (ppppppuStack_a38 = ppppppuVar19, ppppppuVar6 != ppppppuVar22) {
        func_0x062a5a00(ppppppuVar22 + -0xd);
        ppppppuVar19 = ppppppuStack_a38;
        ppppppuVar22 = ppppppuVar22 + -0xd;
      }
      ppppppuStack_a30 = ppppppuVar6;
      uVar20 = lStack_a28 - (long)ppppppuVar19;
      goto LAB_06282403;
    }
    uVar20 = (ulong)ppppppuStack_978 & 0xffffffffffffff00;
    uStack_878 = *(undefined8 *)(param_1 + 0x18);
    uStack_968 = (ulong ******)0x0;
    ppppppuStack_960 = (ulong ******)0x0;
    ppppppuStack_978 = (ulong ******)0x0;
    uStack_970 = 0;
    lStack_958 = 0;
    ppppppuStack_9f0 = ppppppuVar19;
    if ((DAT_0f569528 & 1) == 0) {
      ppppppuStack_960 = _DAT_0f569538;
      uStack_970 = CONCAT71(uRam000000000f569529,DAT_0f569528);
      uStack_968 = _DAT_0f569530;
    }
    else {
      func_0x04885070(&uStack_970,_DAT_0f569538,_DAT_0f569530);
    }
    ppppppuStack_978 = _DAT_0f569520;
    uStack_a78 = (ulong *******)0x0;
    uStack_a70 = (ulong *******)0x0;
    pppppppuStack_a68 = (ulong *******)0x0;
    pppppppuStack_8b0 = (ulong *******)((ulong)pppppppuStack_8b0 & 0xffffffffffffff00);
    pppppppuStack_8b8 = (ulong *******)&uStack_a78;
    pppppppuVar21 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (pppppppuVar21 == (ulong *******)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    pppppppuStack_a68 = pppppppuVar21 + 5;
    pppppppuStack_9e0 = (ulong *******)&pppppppuStack_a18;
    pppppppuStack_9d8 = (ulong *******)&pppppppuStack_8e8;
    pcStack_9d0 = (code *)((ulong)pcStack_9d0 & 0xffffffffffffff00);
    pppppppuVar21[2] = (ulong ******)0x0;
    pppppppuVar21[3] = (ulong ******)0x0;
    *pppppppuVar21 = (ulong ******)0x0;
    pppppppuVar21[1] = (ulong ******)0x0;
    pppppppuVar21[4] = (ulong ******)0x0;
    uStack_a78 = pppppppuVar21;
    pppppppuStack_a18 = pppppppuVar21;
    pppppppuStack_9e8 = (ulong *******)&uStack_a78;
    pppppppuStack_8e8 = pppppppuVar21;
    if (pppppppuVar21 != &ppppppuStack_978) {
      if ((uStack_970 & 1) == 0) {
        pppppppuVar21[3] = ppppppuStack_960;
        *(undefined4 *)(pppppppuVar21 + 1) = (undefined4)uStack_970;
        *(undefined4 *)((long)pppppppuVar21 + 0xc) = uStack_970._4_4_;
        *(undefined4 *)(pppppppuVar21 + 2) = (undefined4)uStack_968;
        *(undefined4 *)((long)pppppppuVar21 + 0x14) = uStack_968._4_4_;
      }
      else {
        uStack_a70 = pppppppuVar21;
        func_0x04885070(pppppppuVar21 + 1,ppppppuStack_960,uStack_968);
      }
    }
    *pppppppuVar21 = ppppppuStack_978;
    uStack_a70 = pppppppuStack_8e8 + 5;
    puStack_798 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
    if (puStack_798 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x1a,0);
    }
    ppppppuVar19 = ppppppuStack_9f0;
    uVar10 = _UNK_0142e148;
    uVar9 = _UNK_0142e144;
    uVar8 = _UNK_0142e140;
    uStack_7a8 = 0x1b;
    uStack_7a0 = 0x17;
    *puStack_798 = _DAT_0142e13c;
    puStack_798[1] = uVar8;
    puStack_798[2] = uVar9;
    puStack_798[3] = uVar10;
    *(undefined8 *)((long)puStack_798 + 0xf) = 0x7974706d65207369;
    *(undefined1 *)((long)puStack_798 + 0x17) = 0;
    uStack_720 = 0;
    func_0x060aeeb0(uStack_878,0,2,&uStack_a78,auStack_7b0,1);
    if ((ulong)uStack_720 != 0xffffffff) {
      (**(code **)(&UNK_0f023e00 + (ulong)uStack_720 * 8))(&pppppppuStack_9e8,&uStack_7a8);
    }
    pppppppuVar7 = uStack_a78;
    uStack_720 = 0xffffffff;
    pppppppuVar21 = uStack_a70;
    if (uStack_a78 != (ulong *******)0x0) {
      for (; pppppppuVar7 != pppppppuVar21; pppppppuVar21 = pppppppuVar21 + -5) {
        if (((ulong)pppppppuVar21[-4] & 1) != 0) {
          func_0x0412a280(pppppppuVar21[-2],(ulong)pppppppuVar21[-4] & 0xfffffffffffffffe);
        }
      }
      uStack_a70 = pppppppuVar7;
      func_0x0412a280(uStack_a78,(long)pppppppuStack_a68 - (long)uStack_a78);
    }
    if ((uStack_970 & 1) != 0) {
      func_0x0412a280(ppppppuStack_960,uStack_970 & 0xfffffffffffffffe);
    }
  }
  if ((bVar15 & 1) == 0) {
    lVar3 = CONCAT44(uStack_6ec,uStack_6f0);
    if (lVar3 != 0) {
      lVar14 = uStack_6e8;
      lVar17 = lVar3;
      if (lVar3 != uStack_6e8) {
        do {
          lVar14 = lVar14 + -0x40;
          FUN_048b3e80(lVar14);
        } while (lVar14 != lVar3);
        lVar17 = CONCAT44(uStack_6ec,uStack_6f0);
      }
      uStack_6e8 = lVar3;
      func_0x0412a280(lVar17,lStack_6e0 - lVar17);
    }
    ppppppuVar18 = uStack_708;
    ppppppuVar6 = ppppppuStack_700;
    if (uStack_708 != (ulong ******)0x0) {
      for (; ppppppuVar18 != ppppppuVar6; ppppppuVar6 = ppppppuVar6 + -10) {
        if ((*(char *)(ppppppuVar6 + -1) == '\x01') && (((ulong)ppppppuVar6[-6] & 1) != 0)) {
          func_0x0412a280(ppppppuVar6[-4],(ulong)ppppppuVar6[-6] & 0xfffffffffffffffe);
        }
      }
      ppppppuStack_700 = ppppppuVar18;
      uVar16 = lStack_6f8 - (long)ppppppuVar18;
      goto LAB_062820f5;
    }
  }
  else if (((ulong)ppppppuStack_718 & 1) != 0) {
    uVar16 = (ulong)ppppppuStack_718 & 0xfffffffffffffffe;
    ppppppuVar18 = uStack_708;
LAB_062820f5:
    func_0x0412a280(ppppppuVar18,uVar16);
  }
  ppppppuVar18 = ppppppuStack_a38;
  ppppppuVar6 = ppppppuStack_a30;
  if (ppppppuStack_a38 != (ulong ******)0x0) {
    while (ppppppuVar18 != ppppppuVar6) {
      func_0x062a5a00(ppppppuVar6 + -0xd);
      ppppppuVar6 = ppppppuVar6 + -0xd;
    }
    ppppppuStack_a30 = ppppppuVar18;
    func_0x0412a280(ppppppuStack_a38,lStack_a28 - (long)ppppppuStack_a38);
  }
  if (((ulong)ppppppuVar22 & 1) == 0) {
    return;
  }
  uVar20 = uVar20 | (byte)ppppppuVar22 & 0xfe;
LAB_06282403:
  func_0x0412a280(ppppppuVar19,uVar20);
  return;
}



/* ---- referenced strings ----
 * 0x142e13c  Group manifest is empty
 * 0x1460a1a  Failed to read group manifest
 * 0x1460a27  d group manifest
 */
