/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb737ee0 (ELF vaddr 0xb637ee0)
 * Label: caller-of-callee
 * Body:  [[0b737ee0, 0b738367] [0b738370, 0b7384c0] [0b7384d0, 0b738893] [0b7388a0, 0b738a98] [0b738aa0, 0b738d60] [0b738d70, 0b738e0a] [0b738e10, 0b7392c4] [0b7392cb, 0b7392db] [0b739346, 0b73939c] [0b7393b0, 0b739478]]
 * Ghidra: FUN_0b737ee0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b737ee0(long param_1,char *param_2)

{
  byte **ppbVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  byte *pbVar11;
  long *plVar12;
  byte **ppbVar13;
  long lVar14;
  undefined8 uVar15;
  byte bVar16;
  byte *pbVar17;
  byte **ppbVar18;
  long *plVar19;
  undefined *puVar20;
  byte **unaff_R12;
  byte **unaff_R13;
  undefined8 *puVar21;
  bool bVar22;
  byte **ppbStack_538;
  byte bStack_530;
  undefined8 uStack_52f;
  undefined2 uStack_527;
  undefined1 uStack_525;
  undefined4 uStack_524;
  byte **ppbStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined *puStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  byte *pbStack_4e8;
  byte *pbStack_4e0;
  long *plStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  byte bStack_4b8;
  undefined1 auStack_4a8 [8];
  byte **ppbStack_4a0;
  byte **ppbStack_498;
  byte **ppbStack_488;
  byte **ppbStack_480;
  long lStack_478;
  byte **ppbStack_468;
  byte **ppbStack_460;
  byte ***pppbStack_458;
  byte **ppbStack_450;
  byte **ppbStack_448;
  byte **ppbStack_440;
  byte *pbStack_438;
  byte **ppbStack_430;
  undefined8 *puStack_428;
  undefined8 *puStack_420;
  byte **ppbStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  byte bStack_3f8;
  byte **ppbStack_38;
  
  if (*param_2 != '\x01') {
    return;
  }
  ppbVar18 = *(byte ***)(param_1 + 8);
  pbVar11 = (byte *)func_0x05f95d30(ppbVar18[3]);
  if (pbVar11 == (byte *)0x0) {
    puVar20 = &UNK_01327969;
    goto LAB_0b73915b;
  }
  ppbVar18[0x18] = pbVar11;
  pbVar11 = (byte *)(**(code **)(*(long *)pbVar11 + 0x8d8))(pbVar11);
  ppbVar18[0x19] = pbVar11;
  plVar12 = (long *)(**(code **)(*(long *)ppbVar18[0x18] + 0x558))();
  pbVar11 = (byte *)(**(code **)(*plVar12 + 0x50))(plVar12);
  bVar22 = (*pbVar11 & 1) != 0;
  pbStack_438 = pbVar11 + 1;
  if (bVar22) {
    pbStack_438 = *(byte **)(pbVar11 + 0x10);
  }
  ppbStack_430 = (byte **)(ulong)(*pbVar11 >> 1);
  if (bVar22) {
    ppbStack_430 = *(byte ***)(pbVar11 + 8);
  }
  puStack_428 = (undefined8 *)&UNK_0139155b;
  puStack_420 = (undefined8 *)0x6;
  ppbStack_418 = (byte **)&UNK_013c5c09;
  lStack_410 = 0xb;
  func_0x048ad670(&uStack_4f8,&pbStack_438,3,0x2f);
  ppbVar1 = ppbVar18 + 0x15;
  if (ppbVar1 == (byte **)&uStack_4f8) {
    if (((ulong)uStack_4f8 & 1) != 0) {
      func_0x0412a280(pbStack_4e8,(ulong)uStack_4f8 & 0xfffffffffffffffe);
    }
  }
  else {
    if (((ulong)*ppbVar1 & 1) != 0) {
      func_0x0412a280(ppbVar18[0x17],(ulong)ppbVar18[0x15] & 0xfffffffffffffffe);
    }
    ppbVar18[0x17] = pbStack_4e8;
    *(undefined4 *)ppbVar1 = (undefined4)uStack_4f8;
    *(undefined4 *)((long)ppbVar18 + 0xac) = uStack_4f8._4_4_;
    *(undefined4 *)(ppbVar18 + 0x16) = (undefined4)uStack_4f0;
    *(undefined4 *)((long)ppbVar18 + 0xb4) = uStack_4f0._4_4_;
  }
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  plVar12 = _DAT_0f5523a0;
  pbStack_4e8 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
    uVar15 = func_0x0eee02f0(0xf5522b8);
    func_0x041084d6(&DAT_0f7b8fb8);
    if (((ulong)auStack_4a8 & 1) != 0) {
      func_0x0412a280(ppbStack_498,(ulong)auStack_4a8 & 0xfffffffffffffffe);
      func_0x0b6f5510(&ppbStack_488);
      uVar15 = func_0x0eee2d70(uVar15);
      if ((bStack_530 & 1) != 0) {
        func_0x0412a280(ppbStack_520,
                        CONCAT71((undefined7)uStack_52f,bStack_530) & 0xfffffffffffffffe);
      }
      func_0x048c3ac0(&uStack_4f8);
      uVar15 = func_0x0eee2d70(uVar15);
    }
    func_0x0b6f5510(&ppbStack_488);
    uVar15 = func_0x0eee2d70(uVar15);
    uVar15 = func_0x04882e20(uVar15);
    plVar12 = (long *)func_0x04882e20(uVar15);
    lVar14 = 0x20;
    if ((ppbStack_418 == (byte **)0xf5522b8) || (lVar14 = 0x28, ppbStack_418 != (byte **)0x0)) {
      (**(code **)(*ppbStack_418 + lVar14))();
    }
    lVar14 = 0x20;
    plVar19 = plStack_4d8;
    if (plStack_4d8 == &uStack_4f8) goto LAB_0b739446;
    lVar14 = 0x28;
    if (plStack_4d8 != (long *)0x0) goto LAB_0b739446;
    while ((bStack_530 & 1) == 0) {
      func_0x0b6f5510(&uStack_518);
      plVar19 = plVar12;
      lVar14 = func_0x0eee2d70();
LAB_0b739446:
      (**(code **)(*plVar19 + lVar14))();
    }
    func_0x0412a280(ppbStack_520,CONCAT71((undefined7)uStack_52f,bStack_530) & 0xfffffffffffffffe);
    func_0x0b6f5510(&uStack_518);
    func_0x0eee2d70(plVar12);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar16 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar16 = *pbStack_4e8;
  }
  plVar19 = _DAT_0f5523a8;
  uStack_4f8 = (byte **)0xf5522b8;
  uStack_4f0 = (byte **)CONCAT71(uStack_4f0._1_7_,1);
  pbStack_4e0 = (byte *)plVar12;
  plStack_4d8 = _DAT_0f5523a8;
  if (((bVar16 & 1) == 0) &&
     (cVar9 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar9 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  (**(code **)(*plVar19 + 0x778))(&bStack_530,plVar19);
  bVar22 = (bStack_530 & 1) == 0;
  uStack_518 = ppbStack_520;
  if (bVar22) {
    uStack_518 = (byte **)&uStack_52f;
  }
  uStack_510 = (byte **)(ulong)(bStack_530 >> 1);
  if (!bVar22) {
    uStack_510 = (byte **)CONCAT44(uStack_524,
                                   CONCAT13(uStack_525,CONCAT21(uStack_527,uStack_52f._7_1_)));
  }
  puStack_508 = &UNK_01c053b1;
  uStack_500 = 0x12;
  unaff_R13 = &pbStack_438;
  func_0x049151c0(unaff_R13,&uStack_518,2,0x2f);
  if ((bStack_530 & 1) != 0) {
    func_0x0412a280(ppbStack_520,CONCAT71((undefined7)uStack_52f,bStack_530) & 0xfffffffffffffffe);
  }
  pbStack_4e8 = (byte *)0x0;
  pbStack_4e0 = (byte *)0x0;
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar19 = plVar12 + 1;
    lVar14 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
    pbVar11 = pbStack_4e0;
    plStack_4d8 = (long *)0x0;
    if (pbStack_4e0 != (byte *)0x0) {
      LOCK();
      pbVar17 = pbStack_4e0 + 8;
      lVar14 = *(long *)pbVar17;
      *(long *)pbVar17 = *(long *)pbVar17 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*(long *)pbStack_4e0 + 0x10))(pbStack_4e0);
        func_0x0412c2d0(pbVar11);
      }
    }
  }
  if ((char)uStack_4f0 == '\x01') {
    func_0x0eee02f0(uStack_4f8);
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7b8fb8), iVar10 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    FUN_0410844d(&DAT_0f7b8fb8);
  }
  unaff_R12 = (byte **)0xb73a56ee5b2b7c89;
  ppbStack_480 = ppbStack_38;
  ppbStack_488 = unaff_R13;
  cVar9 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&ppbStack_488);
  ppbStack_538 = ppbVar18;
  if (cVar9 == '\0') {
    if ((DAT_0f7b8fb8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7b8fb8), iVar10 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      FUN_0410844d(&DAT_0f7b8fb8);
    }
    ppbStack_4a0 = ppbStack_38;
    auStack_4a8 = (undefined1  [8])unaff_R13;
    (**(code **)(_DAT_0f7b8f98 + 0x80))(&uStack_4f8,&DAT_0f7b8f98,auStack_4a8);
    uStack_518 = (byte **)0xb73a56ee5b2b7c89;
    uStack_510 = (byte **)&UNK_0140f690;
    puStack_508 = (undefined *)0x1;
    uStack_500 = CONCAT44(uStack_500._4_4_,0x338);
    if (bStack_4b8 == 0) {
      func_0x0eedea30(&bStack_530);
      func_0x0eedeb80(2,0x2d,&uStack_4f8,&bStack_530,&uStack_518);
      if ((bStack_530 & 1) != 0) {
        func_0x0412a280(ppbStack_520,
                        CONCAT71((undefined7)uStack_52f,bStack_530) & 0xfffffffffffffffe);
      }
    }
    lVar14 = lStack_4d0;
    if ((bStack_4b8 & 1) != 0) goto LAB_0b738511;
    if (lStack_4d0 != 0) {
      while (lVar14 != lStack_4c8) {
        func_0x048b3e80(lStack_4c8 + -0x40);
        lStack_4c8 = lStack_4c8 + -0x40;
      }
      lStack_4c8 = lVar14;
      func_0x0412a280(lStack_4d0,lStack_4c0 - lStack_4d0);
    }
    pbVar17 = pbStack_4e8;
    pbVar11 = pbStack_4e0;
    if (pbStack_4e8 == (byte *)0x0) goto LAB_0b738511;
    do {
      if (pbVar17 == pbVar11) goto LAB_0b7384ff;
      if ((pbVar11[-8] == 1) && ((pbVar11[-0x30] & 1) != 0)) {
        func_0x0412a280(*(long *)(pbVar11 + -0x20),*(ulong *)(pbVar11 + -0x30) & 0xfffffffffffffffe)
        ;
      }
      pbVar11 = pbVar11 + -0x50;
    } while( true );
  }
  if (DAT_0f7b8fb8 == '\0') goto LAB_0b73917b;
LAB_0b73822f:
  ppbStack_4a0 = ppbStack_38;
  auStack_4a8 = (undefined1  [8])unaff_R13;
  ppbStack_468 = ppbVar18;
  (**(code **)(_DAT_0f7b8f98 + 0xb0))
            (&uStack_4f8,&DAT_0f7b8f98,auStack_4a8,0x196,&UNK_0b71f0b0,&ppbStack_468);
  uStack_510 = (byte **)&UNK_0140f690;
  puStack_508 = (undefined *)0x1;
  uStack_500 = CONCAT44(uStack_500._4_4_,0x335);
  uStack_518 = unaff_R12;
  if (bStack_4b8 == 0) {
    func_0x0eedea30(&bStack_530);
    func_0x0eedeb80(2,0x2d,&uStack_4f8,&bStack_530,&uStack_518);
    if ((bStack_530 & 1) != 0) {
      func_0x0412a280(ppbStack_520,CONCAT71((undefined7)uStack_52f,bStack_530) & 0xfffffffffffffffe)
      ;
    }
  }
  lVar14 = lStack_4d0;
  if ((bStack_4b8 & 1) == 0) {
    lVar4 = lStack_4c8;
    if (lStack_4d0 != 0) {
      while (lVar14 != lVar4) {
        func_0x048b3e80(lVar4 + -0x40);
        lVar4 = lVar4 + -0x40;
      }
      lStack_4c8 = lVar14;
      func_0x0412a280(lStack_4d0,lStack_4c0 - lStack_4d0);
    }
    pbVar17 = pbStack_4e8;
    pbVar11 = pbStack_4e0;
    if (pbStack_4e8 != (byte *)0x0) {
      for (; pbVar17 != pbVar11; pbVar11 = pbVar11 + -0x50) {
        if ((pbVar11[-8] == 1) && ((pbVar11[-0x30] & 1) != 0)) {
          func_0x0412a280(*(long *)(pbVar11 + -0x20),
                          *(ulong *)(pbVar11 + -0x30) & 0xfffffffffffffffe);
        }
      }
LAB_0b7384ff:
      pbStack_4e0 = pbVar17;
      func_0x0412a280(pbStack_4e8,(long)plStack_4d8 - (long)pbStack_4e8);
    }
  }
LAB_0b738511:
  if ((DAT_0f7b8fb8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7b8fb8), iVar10 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    FUN_0410844d(&DAT_0f7b8fb8);
    ppbVar18 = ppbStack_538;
  }
  ppbVar1 = (byte **)((long)ppbVar18 + 0xa9);
  bVar22 = (*(byte *)(ppbVar18 + 0x15) & 1) == 0;
  ppbVar13 = (byte **)ppbVar18[0x17];
  if (bVar22) {
    ppbVar13 = ppbVar1;
  }
  pbVar11 = (byte *)(ulong)(*(byte *)(ppbVar18 + 0x15) >> 1);
  if (!bVar22) {
    pbVar11 = ppbVar18[0x16];
  }
  bStack_530 = (byte)ppbVar13;
  uStack_52f._0_7_ = (undefined7)((ulong)ppbVar13 >> 8);
  uStack_52f._7_1_ = SUB81(pbVar11,0);
  uStack_527 = (undefined2)((ulong)pbVar11 >> 8);
  uStack_525 = (undefined1)((ulong)pbVar11 >> 0x18);
  uStack_524 = (undefined4)((ulong)pbVar11 >> 0x20);
  cVar9 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&bStack_530);
  if (cVar9 == '\0') {
    if ((DAT_0f7b8fb8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7b8fb8), iVar10 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      FUN_0410844d(&DAT_0f7b8fb8);
      ppbVar18 = ppbStack_538;
    }
    bVar22 = (*(byte *)(ppbVar18 + 0x15) & 1) == 0;
    ppbStack_488 = (byte **)ppbVar18[0x17];
    if (bVar22) {
      ppbStack_488 = ppbVar1;
    }
    ppbStack_480 = (byte **)(ulong)(*(byte *)(ppbVar18 + 0x15) >> 1);
    if (!bVar22) {
      ppbStack_480 = (byte **)ppbVar18[0x16];
    }
    (**(code **)(_DAT_0f7b8f98 + 0x80))(&pbStack_438,&DAT_0f7b8f98,&ppbStack_488);
    uStack_4f0 = (byte **)&UNK_0140f690;
    pbStack_4e8 = (byte *)0x1;
    pbStack_4e0 = (byte *)CONCAT44(pbStack_4e0._4_4_,0x33f);
    uStack_4f8 = unaff_R12;
    if (bStack_3f8 == 0) {
      func_0x0eedea30(&uStack_518);
      func_0x0eedeb80(2,0x2d,&pbStack_438,&uStack_518,&uStack_4f8);
      if (((ulong)uStack_518 & 1) != 0) {
        func_0x0412a280(puStack_508,(ulong)uStack_518 & 0xfffffffffffffffe);
      }
    }
    lVar14 = lStack_410;
    if ((bStack_3f8 & 1) == 0) {
      lVar4 = lStack_408;
      if (lStack_410 != 0) {
        while (lVar14 != lVar4) {
          func_0x048b3e80(lVar4 + -0x40);
          lVar4 = lVar4 + -0x40;
        }
        lStack_408 = lVar14;
        func_0x0412a280(lStack_410,lStack_400 - lStack_410);
      }
      puVar2 = puStack_428;
      puVar21 = puStack_420;
      if (puStack_428 != (undefined8 *)0x0) {
        for (; puVar2 != puVar21; puVar21 = puVar21 + -10) {
          if ((*(char *)(puVar21 + -1) == '\x01') && ((*(byte *)(puVar21 + -6) & 1) != 0)) {
            func_0x0412a280(puVar21[-4],puVar21[-6] & 0xfffffffffffffffe);
          }
        }
        puStack_420 = puVar2;
        func_0x0412a280(puStack_428,(long)ppbStack_418 - (long)puStack_428);
      }
    }
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7b8fb8), iVar10 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    FUN_0410844d(&DAT_0f7b8fb8);
    ppbVar18 = ppbStack_538;
  }
  bVar22 = (*(byte *)(ppbVar18 + 0x15) & 1) != 0;
  auStack_4a8 = (undefined1  [8])ppbVar1;
  if (bVar22) {
    auStack_4a8 = (undefined1  [8])ppbVar18[0x17];
  }
  ppbStack_4a0 = (byte **)(ulong)(*(byte *)(ppbVar18 + 0x15) >> 1);
  if (bVar22) {
    ppbStack_4a0 = (byte **)ppbVar18[0x16];
  }
  unaff_R13 = &pbStack_438;
  ppbStack_468 = ppbVar18;
  (**(code **)(_DAT_0f7b8f98 + 0xb0))
            (unaff_R13,&DAT_0f7b8f98,auStack_4a8,0x196,&UNK_0b721290,&ppbStack_468);
  uStack_4f0 = (byte **)&UNK_0140f690;
  pbStack_4e8 = (byte *)0x1;
  pbStack_4e0 = (byte *)CONCAT44(pbStack_4e0._4_4_,0x39e);
  uStack_4f8 = unaff_R12;
  if (bStack_3f8 == 0) {
    func_0x0eedea30(&uStack_518);
    func_0x0eedeb80(2,0x2d,&pbStack_438,&uStack_518,&uStack_4f8);
    ppbVar18 = ppbStack_538;
    if (((ulong)uStack_518 & 1) != 0) {
      func_0x0412a280(puStack_508,(ulong)uStack_518 & 0xfffffffffffffffe);
    }
  }
  lVar14 = lStack_410;
  if ((bStack_3f8 & 1) == 0) {
    lVar4 = lStack_408;
    if (lStack_410 != 0) {
      while (lVar14 != lVar4) {
        func_0x048b3e80(lVar4 + -0x40);
        lVar4 = lVar4 + -0x40;
      }
      lStack_408 = lVar14;
      func_0x0412a280(lStack_410,lStack_400 - lStack_410);
      ppbVar18 = ppbStack_538;
    }
    puVar2 = puStack_428;
    puVar21 = puStack_420;
    if (puStack_428 != (undefined8 *)0x0) {
      for (; puVar2 != puVar21; puVar21 = puVar21 + -10) {
        if ((*(char *)(puVar21 + -1) == '\x01') && ((*(byte *)(puVar21 + -6) & 1) != 0)) {
          func_0x0412a280(puVar21[-4],puVar21[-6] & 0xfffffffffffffffe);
        }
      }
      puStack_420 = puVar2;
      func_0x0412a280(puStack_428,(long)ppbStack_418 - (long)puStack_428);
    }
  }
  uStack_518 = (byte **)0x0;
  uStack_510 = (byte **)0x0;
  puStack_508 = (undefined *)0x0;
  puVar21 = *(undefined8 **)(*(long *)(ppbVar18[0x19] + 0x98) + 8);
  puVar2 = *(undefined8 **)(*(long *)(ppbVar18[0x19] + 0x98) + 0x10);
  if (puVar21 != puVar2) {
    do {
      if (*(char *)(*(long *)puVar21[0x1d] + 0x88) == '\0') {
        bStack_530 = 0x14;
        uStack_52f._0_7_ = 0x75746375727473;
        uStack_52f._7_1_ = 0x72;
        uStack_527 = 0x7365;
        uStack_525 = 0;
        uStack_4f8 = (byte **)&UNK_0f2d4258;
        uStack_4f0 = ppbStack_538;
        pbStack_4e0 = (byte *)&uStack_518;
        plStack_4d8 = &uStack_4f8;
        pbStack_438 = &UNK_0f2d4258;
        ppbStack_430 = ppbStack_538;
        pbStack_4e8 = (byte *)puVar21;
        puStack_428 = puVar21;
        puStack_420 = (undefined8 *)pbStack_4e0;
        ppbStack_418 = unaff_R13;
        func_0x0d62a6f0((long *)puVar21[0x1d],&bStack_530,unaff_R13,*(undefined4 *)(puVar21 + 0x21),
                        0);
        if (ppbStack_418 == unaff_R13) {
          lVar14 = 0x20;
LAB_0b738a16:
          (**(code **)(*ppbStack_418 + lVar14))();
          if (plStack_4d8 != &uStack_4f8) goto LAB_0b7389fa;
LAB_0b738a2b:
          lVar14 = 0x20;
LAB_0b738a30:
          (**(code **)(*plStack_4d8 + lVar14))();
        }
        else {
          lVar14 = 0x28;
          if (ppbStack_418 != (byte **)0x0) goto LAB_0b738a16;
          if (plStack_4d8 == &uStack_4f8) goto LAB_0b738a2b;
LAB_0b7389fa:
          lVar14 = 0x28;
          if (plStack_4d8 != (long *)0x0) goto LAB_0b738a30;
        }
        if ((bStack_530 & 1) != 0) {
          func_0x0412a280(ppbStack_520,
                          CONCAT71((undefined7)uStack_52f,bStack_530) & 0xfffffffffffffffe);
        }
      }
      ppbVar1 = uStack_518;
      puVar21 = puVar21 + 0x22;
    } while (puVar21 != puVar2);
    unaff_R12 = (byte **)0xb73a56ee5b2b7c89;
    ppbVar18 = ppbStack_538;
    if (uStack_518 != (byte **)0x0) {
      if (uStack_518 != uStack_510) {
        unaff_R13 = (byte **)0xffffffff;
        ppbVar18 = uStack_510;
        do {
          ppbVar13 = ppbVar18 + -0x3c;
          if ((ulong)*(uint *)(ppbVar18 + -2) != 0xffffffff) {
            (**(code **)(&UNK_0f2d0d08 + (ulong)*(uint *)(ppbVar18 + -2) * 8))
                      (&pbStack_438,ppbVar13);
          }
          *(undefined4 *)(ppbVar18 + -2) = 0xffffffff;
          ppbVar18 = ppbVar13;
        } while (ppbVar13 != ppbVar1);
      }
      unaff_R12 = (byte **)0xb73a56ee5b2b7c89;
      uStack_510 = ppbVar1;
      func_0x0412a280(uStack_518,(long)puStack_508 - (long)uStack_518);
      ppbVar18 = ppbStack_538;
    }
  }
  (**(code **)(*ppbVar18 + 0x98))(ppbVar18);
  ppbStack_488 = (byte **)0x0;
  ppbStack_480 = (byte **)0x0;
  lStack_478 = 0;
  plVar12 = (long *)(**(code **)(*(long *)ppbVar18[0x18] + 0x558))();
  pbVar11 = (byte *)(**(code **)(*plVar12 + 0x50))(plVar12);
  if ((*pbVar11 & 1) == 0) {
    ppbStack_498 = *(byte ***)(pbVar11 + 0x10);
    auStack_4a8 = *(undefined1 (*) [8])pbVar11;
    ppbStack_4a0 = *(byte ***)(pbVar11 + 8);
  }
  else {
    func_0x0412e5e0(auStack_4a8,*(undefined8 *)(pbVar11 + 0x10),*(undefined8 *)(pbVar11 + 8));
  }
  uStack_4f8 = (byte **)(auStack_4a8 + 1);
  uStack_4f0 = (byte **)((ulong)auStack_4a8 >> 1 & 0x7f);
  if (((ulong)auStack_4a8 & 1) != 0) {
    uStack_4f0 = ppbStack_4a0;
    uStack_4f8 = ppbStack_498;
  }
  pbStack_4e8 = &UNK_01c053c9;
  pbStack_4e0 = (byte *)0xa;
  func_0x049151c0(&pbStack_438,&uStack_4f8,2,0x2f);
  if ((DAT_0f7b8fb8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7b8fb8), iVar10 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    FUN_0410844d(&DAT_0f7b8fb8);
    ppbVar18 = ppbStack_538;
  }
  ppbStack_460 = ppbStack_38;
  ppbStack_468 = &pbStack_438;
  cVar9 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&ppbStack_468);
  if (cVar9 != '\0') {
    if ((DAT_0f7b8fb8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f7b8fb8), iVar10 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      FUN_0410844d(&DAT_0f7b8fb8);
      ppbVar18 = ppbStack_538;
    }
    ppbStack_440 = ppbStack_38;
    pppbStack_458 = &ppbStack_488;
    ppbStack_450 = ppbVar18;
    ppbStack_448 = &pbStack_438;
    (**(code **)(_DAT_0f7b8f98 + 0xb0))
              (&uStack_4f8,&DAT_0f7b8f98,&ppbStack_448,0x196,&UNK_0b71d210,&pppbStack_458);
    uStack_510 = (byte **)&UNK_0140f690;
    puStack_508 = (undefined *)0x1;
    uStack_500 = CONCAT44(uStack_500._4_4_,0x2d4);
    uStack_518 = unaff_R12;
    if (bStack_4b8 == 0) {
      func_0x0eedea30(&bStack_530);
      func_0x0eedeb80(2,0x2d,&uStack_4f8,&bStack_530,&uStack_518);
      if ((bStack_530 & 1) != 0) {
        func_0x0412a280(ppbStack_520,
                        CONCAT71((undefined7)uStack_52f,bStack_530) & 0xfffffffffffffffe);
      }
    }
    lVar14 = lStack_4d0;
    if ((bStack_4b8 & 1) == 0) {
      lVar4 = lStack_4c8;
      if (lStack_4d0 != 0) {
        while (lVar14 != lVar4) {
          func_0x048b3e80(lVar4 + -0x40);
          lVar4 = lVar4 + -0x40;
        }
        lStack_4c8 = lVar14;
        func_0x0412a280(lStack_4d0,lStack_4c0 - lStack_4d0);
      }
      pbVar17 = pbStack_4e8;
      pbVar11 = pbStack_4e0;
      if (pbStack_4e8 != (byte *)0x0) {
        for (; pbVar17 != pbVar11; pbVar11 = pbVar11 + -0x50) {
          if ((pbVar11[-8] == 1) && ((pbVar11[-0x30] & 1) != 0)) {
            func_0x0412a280(*(long *)(pbVar11 + -0x20),
                            *(ulong *)(pbVar11 + -0x30) & 0xfffffffffffffffe);
          }
        }
        pbStack_4e0 = pbVar17;
        func_0x0412a280(pbStack_4e8,(long)plStack_4d8 - (long)pbStack_4e8);
      }
    }
  }
  if (((ulong)auStack_4a8 & 1) != 0) {
    func_0x0412a280(ppbStack_498,(ulong)auStack_4a8 & 0xfffffffffffffffe);
  }
  ppbVar1 = ppbStack_488;
  if (ppbStack_488 != (byte **)0x0) {
    unaff_R13 = ppbStack_480;
    if (ppbStack_488 != ppbStack_480) {
      ppbVar13 = ppbStack_480;
      do {
        unaff_R12 = ppbVar13 + -0x3c;
        if ((ulong)*(uint *)(ppbVar13 + -2) != 0xffffffff) {
          (**(code **)(&UNK_0f2d0d08 + (ulong)*(uint *)(ppbVar13 + -2) * 8))(&pbStack_438,unaff_R12)
          ;
        }
        *(undefined4 *)(ppbVar13 + -2) = 0xffffffff;
        ppbVar18 = ppbStack_538;
        ppbVar13 = unaff_R12;
        unaff_R13 = unaff_R12;
      } while (unaff_R12 != ppbVar1);
    }
    ppbStack_480 = ppbVar1;
    func_0x0412a280(ppbStack_488,lStack_478 - (long)ppbStack_488);
  }
  plVar12 = (long *)func_0x0b7394b0(ppbVar18[3]);
  if (plVar12 == (long *)0x0) {
    puVar20 = &UNK_014d870c;
LAB_0b73915b:
    cVar9 = func_0x0eeddcf0(&UNK_01259441,&UNK_01198d5e,0x15c,&UNK_0119dfc2,puVar20);
    if (cVar9 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    func_0x04109e60();
LAB_0b73917b:
    iVar10 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar10 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      FUN_0410844d(&DAT_0f7b8fb8);
      ppbVar18 = ppbStack_538;
    }
    goto LAB_0b73822f;
  }
  pbStack_438 = &UNK_0f2d4168;
  ppbStack_430 = ppbVar18;
  ppbStack_418 = &pbStack_438;
  (**(code **)(*plVar12 + 0x28))(&uStack_518,plVar12,&pbStack_438);
  if (ppbStack_418 == &pbStack_438) {
    lVar14 = 0x20;
  }
  else {
    lVar14 = 0x28;
    if (ppbStack_418 == (byte **)0x0) goto joined_r0x0b738eea;
  }
  (**(code **)(*ppbStack_418 + lVar14))();
joined_r0x0b738eea:
  if ((byte **)&uStack_518 != ppbVar18 + 0x1c) {
    if (ppbVar18[0x1d] == (byte *)0x0) {
      pbVar11 = (byte *)0x0;
    }
    else {
      pbVar11 = (byte *)func_0x0412c300();
      uStack_4f0 = (byte **)pbVar11;
      if (pbVar11 != (byte *)0x0) {
        uStack_4f8 = (byte **)ppbVar18[0x1c];
        if (uStack_4f8 != (byte **)0x0) {
          (**(code **)(*(long *)uStack_4f8[5] + 0x10))();
        }
        LOCK();
        pbVar17 = pbVar11 + 8;
        lVar14 = *(long *)pbVar17;
        *(long *)pbVar17 = *(long *)pbVar17 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*(long *)pbVar11 + 0x10))(pbVar11);
          func_0x0412c2d0(pbVar11);
        }
      }
      pbVar11 = ppbVar18[0x1d];
    }
    uVar5 = (undefined4)uStack_518;
    uVar6 = uStack_518._4_4_;
    uVar7 = (undefined4)uStack_510;
    uVar8 = uStack_510._4_4_;
    uStack_518 = (byte **)0x0;
    uStack_510 = (byte **)0x0;
    *(undefined4 *)(ppbVar18 + 0x1c) = uVar5;
    *(undefined4 *)((long)ppbVar18 + 0xe4) = uVar6;
    *(undefined4 *)(ppbVar18 + 0x1d) = uVar7;
    *(undefined4 *)((long)ppbVar18 + 0xec) = uVar8;
    if (pbVar11 != (byte *)0x0) {
      func_0x0412c2d0();
    }
  }
  if (uStack_510 != (byte **)0x0) {
    plVar12 = (long *)func_0x0412c300();
    uStack_4f0 = (byte **)plVar12;
    if (plVar12 != (long *)0x0) {
      uStack_4f8 = uStack_518;
      if (uStack_518 != (byte **)0x0) {
        (**(code **)(*(long *)uStack_518[5] + 0x10))();
      }
      LOCK();
      plVar19 = plVar12 + 1;
      lVar14 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        func_0x0412c2d0(plVar12);
      }
    }
    if (uStack_510 != (byte **)0x0) {
      func_0x0412c2d0();
    }
  }
  return;
}


