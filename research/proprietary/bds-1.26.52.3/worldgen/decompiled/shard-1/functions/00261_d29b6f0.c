/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd39b6f0 (ELF vaddr 0xd29b6f0)
 * Label: caller-of-callee
 * Body:  [[0d39b6f0, 0d39b811] [0d39b820, 0d39b85d] [0d39b860, 0d39b989] [0d39b990, 0d39bdfc] [0d39be00, 0d39bfd1] [0d39bfe0, 0d39c057] [0d39c060, 0d39c0d1] [0d39c0e0, 0d39c15a] [0d39c160, 0d39c32a] [0d39c330, 0d39c38a] [0d39c390, 0d39c5a8] [0d39c5b0, 0d39c624] [0d39c630, 0d39c9de] [0d39cae7, 0d39cafd] [0d39cb59, 0d39cb63] [0d39cb7e, 0d39cbbc] [0d39cbc0, 0d39cbe0] [0d39cc30, 0d39cca1]]
 * Ghidra: FUN_0d39b6f0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d39b6f0(long param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  undefined8 *****pppppuVar1;
  long lVar2;
  undefined1 auVar3 [8];
  byte *pbVar4;
  undefined1 uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 *******pppppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 *******pppppppuVar13;
  long *plVar14;
  ulong *puVar15;
  undefined8 ******ppppppuVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 ******ppppppuVar19;
  undefined8 *******pppppppuVar20;
  undefined8 ******ppppppuVar21;
  undefined8 ******ppppppuVar22;
  undefined8 ******ppppppuVar23;
  bool bVar24;
  undefined1 auStack_678 [8];
  undefined8 *******pppppppuStack_670;
  undefined8 ******ppppppuStack_668;
  undefined4 uStack_660;
  undefined1 auStack_658 [4];
  undefined4 uStack_654;
  undefined8 uStack_650;
  undefined8 ******ppppppuStack_648;
  undefined8 ******ppppppuStack_638;
  undefined8 *******pppppppuStack_630;
  byte *pbStack_628;
  long *plStack_620;
  long *plStack_618;
  long lStack_610;
  undefined8 *******pppppppuStack_608;
  undefined8 *******pppppppuStack_600;
  long lStack_5f8;
  undefined8 *******pppppppuStack_5f0;
  ulong uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  long lStack_5d0;
  undefined8 ******ppppppuStack_5c8;
  undefined4 uStack_5bc;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  undefined8 uStack_5a0;
  long *plStack_598;
  long alStack_590 [2];
  undefined8 *****pppppuStack_580;
  undefined8 ****ppppuStack_578;
  undefined8 uStack_570;
  undefined1 auStack_568 [8];
  undefined8 *******pppppppuStack_560;
  undefined8 ******ppppppuStack_558;
  undefined8 ******ppppppuStack_550;
  long *plStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
  byte bStack_528;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  undefined *puStack_478;
  undefined8 *******pppppppuStack_470;
  undefined8 ******ppppppuStack_468;
  undefined8 ******ppppppuStack_460;
  undefined **ppuStack_458;
  undefined8 ******ppppppuStack_448;
  ulong uStack_440;
  byte bStack_438;
  undefined7 uStack_437;
  undefined1 uStack_430;
  undefined1 uStack_42f;
  uint6 uStack_42e;
  ulong uStack_428;
  undefined8 *******pppppppuStack_38;
  
  bStack_438 = 0x10;
  uStack_437 = 0x65727574616566;
  uStack_430 = 0x73;
  uStack_42f = 0;
  lStack_610 = param_1;
  lStack_5d0 = param_3;
  uStack_5bc = param_4;
  uStack_5a0 = param_2;
  func_0x09ae1060(&lStack_4a8,param_3,&bStack_438);
  if ((bStack_438 & 1) != 0) {
    func_0x0412a280(uStack_428,CONCAT71(uStack_437,bStack_438) & 0xfffffffffffffffe);
  }
  pppppuStack_580 = &ppppuStack_578;
  ppppuStack_578 = (undefined8 ****)0x0;
  uStack_570 = 0;
  pppppppuStack_608 = &pppppppuStack_600;
  pppppppuStack_600 = (undefined8 *******)0x0;
  lStack_5f8 = 0;
  func_0x0eee2dd0(&uStack_430,0,0x3f8);
  bStack_438 = 0x66;
  uStack_437 = 0x73657275746165;
  pppppppuStack_38 = (undefined8 *******)0x8;
  ppppppuStack_638 = (undefined8 ******)0x0;
  pppppppuStack_630 = (undefined8 *******)0x0;
  pbStack_628 = (byte *)0x0;
  pppppppuVar20 = *(undefined8 ********)(*(long *)(lStack_5d0 + 0x98) + 8);
  pppppppuVar13 = *(undefined8 ********)(*(long *)(lStack_5d0 + 0x98) + 0x10);
  if (pppppppuVar20 != pppppppuVar13) {
    do {
      pppppppuVar11 = pppppppuStack_38;
      if ((undefined8 *******)0xfffffffffffffff7 < pppppppuStack_38) {
        func_0x04882e30();
        goto LAB_0d39c9be;
      }
      if (pppppppuStack_38 < (undefined8 *******)0x17) {
        auStack_678[0] = (char)pppppppuStack_38 * '\x02';
        ppppppuVar23 = (undefined8 ******)(auStack_678 + 1);
        if (pppppppuStack_38 != (undefined8 *******)0x0) goto LAB_0d39b8b2;
      }
      else {
        uVar18 = ((ulong)pppppppuStack_38 | 7) + 1;
        if (((ulong)pppppppuStack_38 | 7) == 0x17) {
          uVar18 = 0x1a;
        }
        ppppppuVar23 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
        if (ppppppuVar23 == (undefined8 ******)0x0) {
          func_0x0eec74c0(uVar18,0);
        }
        auStack_678 = (undefined1  [8])(uVar18 | 1);
        pppppppuStack_670 = pppppppuVar11;
        ppppppuStack_668 = ppppppuVar23;
LAB_0d39b8b2:
        memcpy(ppppppuVar23,&bStack_438,pppppppuVar11);
      }
      *(undefined1 *)((long)ppppppuVar23 + (long)pppppppuVar11) = 0;
      puStack_478 = &UNK_0f462b08;
      ppppppuStack_558 = &ppppppuStack_638;
      ppppppuStack_550 = &pppppuStack_580;
      auStack_568 = (undefined1  [8])&UNK_0f462b08;
      pppppppuStack_560 = pppppppuVar20;
      plStack_548 = (long *)auStack_568;
      pppppppuStack_470 = pppppppuVar20;
      ppppppuStack_468 = ppppppuStack_558;
      ppppppuStack_460 = ppppppuStack_550;
      ppuStack_458 = &puStack_478;
      func_0x0d62a6f0(pppppppuVar20[0x1d],auStack_678,auStack_568,
                      *(undefined4 *)(pppppppuVar20 + 0x21),0);
      if (plStack_548 == (long *)auStack_568) {
        lVar9 = 0x20;
LAB_0d39b995:
        (**(code **)(*plStack_548 + lVar9))();
        if (ppuStack_458 != &puStack_478) goto LAB_0d39b974;
LAB_0d39b9a8:
        lVar9 = 0x20;
LAB_0d39b9ad:
        (**(code **)(*ppuStack_458 + lVar9))();
      }
      else {
        lVar9 = 0x28;
        if (plStack_548 != (long *)0x0) goto LAB_0d39b995;
        if (ppuStack_458 == &puStack_478) goto LAB_0d39b9a8;
LAB_0d39b974:
        lVar9 = 0x28;
        if (ppuStack_458 != (undefined **)0x0) goto LAB_0d39b9ad;
      }
      if (((ulong)auStack_678 & 1) != 0) {
        func_0x0412a280(ppppppuStack_668,(ulong)auStack_678 & 0xfffffffffffffffe);
      }
      pppppppuVar20 = pppppppuVar20 + 0x22;
    } while (pppppppuVar20 != pppppppuVar13);
    if (((ulong)ppppppuStack_638 & 1) != 0) {
      func_0x0412a280(pbStack_628,(ulong)ppppppuStack_638 & 0xfffffffffffffffe);
    }
  }
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  plVar14 = _DAT_0f5523a0;
  pbVar4 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) goto LAB_0d39c9c3;
  bVar7 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar7 = *pbVar4;
  }
  plVar17 = _DAT_0f5523a8;
  auStack_568 = (undefined1  [8])0xf5522b8;
  pppppppuStack_560 = (undefined8 *******)CONCAT71(pppppppuStack_560._1_7_,1);
  ppppppuStack_558 = (undefined8 ******)pbVar4;
  ppppppuStack_550 = (undefined8 ******)plVar14;
  plStack_548 = _DAT_0f5523a8;
  if (((bVar7 & 1) == 0) &&
     (cVar6 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  (**(code **)(*plVar17 + 0x110))(auStack_678,plVar17);
  pppppppuStack_630 = (undefined8 *******)((ulong)auStack_678 >> 1 & 0x7f);
  ppppppuStack_638 = (undefined8 ******)(auStack_678 + 1);
  if (((ulong)auStack_678 & 1) != 0) {
    pppppppuStack_630 = pppppppuStack_670;
    ppppppuStack_638 = ppppppuStack_668;
  }
  pbStack_628 = &UNK_013025af;
  plStack_620 = (long *)0x14;
  func_0x049151c0(&bStack_438,&ppppppuStack_638,2,0x2f);
  if (((ulong)auStack_678 & 1) != 0) {
    func_0x0412a280(ppppppuStack_668,(ulong)auStack_678 & 0xfffffffffffffffe);
  }
  ppppppuStack_558 = (undefined8 ******)0x0;
  ppppppuStack_550 = (undefined8 ******)0x0;
  if (plVar14 == (long *)0x0) {
LAB_0d39bbbc:
  }
  else {
    LOCK();
    plVar17 = plVar14 + 1;
    lVar9 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar9 != 0) {
      plStack_548 = (long *)0x0;
      goto LAB_0d39bbbc;
    }
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    ppppppuVar23 = ppppppuStack_550;
    plStack_548 = (long *)0x0;
    if (ppppppuStack_550 == (undefined8 ******)0x0) goto LAB_0d39bbbc;
    plStack_548 = (long *)0x0;
    LOCK();
    ppppppuVar21 = ppppppuStack_550 + 1;
    pppppuVar1 = *ppppppuVar21;
    *ppppppuVar21 = (undefined8 *****)((long)*ppppppuVar21 + -1);
    UNLOCK();
    if (pppppuVar1 != (undefined8 *****)0x0) goto LAB_0d39bbbc;
    (*(code *)(*ppppppuStack_550)[2])(ppppppuStack_550);
    func_0x0412c2d0(ppppppuVar23);
  }
  if ((char)pppppppuStack_560 == '\x01') {
    func_0x0eee02f0(auStack_568);
  }
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  plStack_620 = _DAT_0f5523a0;
  pbStack_628 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
    ppppppuStack_638 = (undefined8 ******)0x0;
    pppppppuStack_630 = (undefined8 *******)((ulong)pppppppuStack_630._1_7_ << 8);
    pbStack_628 = (byte *)0x0;
    plStack_620 = (long *)0x0;
    plStack_618 = (long *)0x0;
    func_0x0eee02f0(0xf5522b8);
    plVar14 = (long *)0x0;
  }
  else {
    bVar7 = 1;
    if (_DAT_0f5523a0 != (long *)0x0) {
      LOCK();
      _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
      UNLOCK();
      bVar7 = *pbStack_628;
    }
    plVar14 = _DAT_0f5523a8;
    ppppppuStack_638 = (undefined8 ******)0xf5522b8;
    pppppppuStack_630 = (undefined8 *******)CONCAT71(pppppppuStack_630._1_7_,1);
    plStack_618 = _DAT_0f5523a8;
    if (((bVar7 & 1) == 0) &&
       (cVar6 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  pppppppuVar20 = pppppppuStack_38;
  if ((undefined8 *******)0xfffffffffffffff7 < pppppppuStack_38) {
LAB_0d39c9be:
    func_0x04882e30();
LAB_0d39c9c3:
    plVar14 = (long *)func_0x0eee02f0(0xf5522b8);
    func_0x0bd4f620(auStack_678);
    if (((ulong)_auStack_658 & 1) != 0) {
      func_0x0412a280(ppppppuStack_648,(ulong)_auStack_658 & 0xfffffffffffffffe);
    }
    func_0x0485e2d0(auStack_568);
    func_0x04863610(&uStack_5e8);
    if ((uStack_5b8 & 1) != 0) {
      func_0x0412a280(uStack_5a8,uStack_5b8 & 0xfffffffffffffffe);
    }
    func_0x0d3ca180(&plStack_598,alStack_590[0]);
    func_0x048c3ac0(&ppppppuStack_638);
LAB_0d39cc4a:
    do {
      func_0x0bd4f5c0(&pppppppuStack_608,pppppppuStack_600);
      func_0x0d3c9ab0(ppppuStack_578);
      func_0x0d624dd0(&lStack_4a8);
      plVar17 = plVar14;
      lVar9 = _Unwind_Resume();
      (**(code **)(*plVar17 + lVar9))();
      if (((ulong)auStack_678 & 1) == 0) goto LAB_0d39cc30;
      func_0x0412a280(ppppppuStack_668,(ulong)auStack_678 & 0xfffffffffffffffe);
    } while (((ulong)ppppppuStack_638 & 1) == 0);
    goto LAB_0d39cc37;
  }
  if (pppppppuStack_38 < (undefined8 *******)0x17) {
    auStack_568[0] = (char)pppppppuStack_38 * '\x02';
    ppppppuVar23 = (undefined8 ******)(auStack_568 + 1);
    if (pppppppuStack_38 != (undefined8 *******)0x0) goto LAB_0d39bd30;
  }
  else {
    uVar18 = 0x1a;
    if (((ulong)pppppppuStack_38 | 7) != 0x17) {
      uVar18 = ((ulong)pppppppuStack_38 | 7) + 1;
    }
    ppppppuVar23 = (undefined8 ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
    if (ppppppuVar23 == (undefined8 ******)0x0) {
      func_0x0eec74c0(uVar18,0);
    }
    auStack_568 = (undefined1  [8])(uVar18 | 1);
    pppppppuStack_560 = pppppppuVar20;
    ppppppuStack_558 = ppppppuVar23;
LAB_0d39bd30:
    memcpy(ppppppuVar23,&bStack_438,pppppppuVar20);
  }
  *(undefined1 *)((long)ppppppuVar23 + (long)pppppppuVar20) = 0;
  auStack_678._0_6_ = 0x6e6f736a08;
  (**(code **)(*plVar14 + 0x358))(&plStack_598,plVar14,auStack_568,auStack_678);
  if (((ulong)auStack_678 & 1) == 0) {
    if (((ulong)auStack_568 & 1) == 0) goto LAB_0d39bd8b;
LAB_0d39bdc1:
    func_0x0412a280(ppppppuStack_558,(ulong)auStack_568 & 0xfffffffffffffffe);
    plVar14 = plStack_598;
    if (plStack_598 != alStack_590) goto LAB_0d39be14;
  }
  else {
    func_0x0412a280(ppppppuStack_668,(ulong)auStack_678 & 0xfffffffffffffffe);
    if (((ulong)auStack_568 & 1) != 0) goto LAB_0d39bdc1;
LAB_0d39bd8b:
    plVar14 = plStack_598;
    if (plStack_598 != alStack_590) {
LAB_0d39be14:
      do {
        if (((pbStack_628 != (byte *)0x0) && (*pbStack_628 == 0)) &&
           (cVar6 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
           cVar6 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        ppppppuVar23 = (undefined8 ******)((long)plVar14 + 0x21);
        bVar24 = (*(byte *)(plVar14 + 4) & 1) == 0;
        ppppppuStack_448 = (undefined8 ******)plVar14[6];
        if (bVar24) {
          ppppppuStack_448 = ppppppuVar23;
        }
        uStack_440 = (ulong)(*(byte *)(plVar14 + 4) >> 1);
        if (!bVar24) {
          uStack_440 = plVar14[5];
        }
        ppppppuStack_5c8 = (undefined8 ******)((ulong)ppppppuStack_5c8 & 0xffffffffffffff00);
        func_0x0d7781b0(auStack_568,plStack_618,&ppppppuStack_448,&ppppppuStack_5c8);
        uStack_5e8 = 0;
        uStack_5e0 = 0;
        uStack_5d8 = 0;
        auStack_678 = (undefined1  [8])0x7ec74bcb8d8cc4ca;
        pppppppuStack_670 = (undefined8 *******)&UNK_0140f690;
        ppppppuStack_668 = (undefined8 ******)0x1;
        uStack_660 = 0x75;
        puVar15 = (ulong *)auStack_568;
        if (bStack_528 == 0) {
          func_0x0eedea30(auStack_658);
          FUN_0eedeb80(2,0x2d,auStack_568,auStack_658,auStack_678);
          if (((ulong)_auStack_658 & 1) != 0) {
            func_0x0412a280(ppppppuStack_648,(ulong)_auStack_658 & 0xfffffffffffffffe);
          }
          puVar15 = &uStack_5e8;
          if ((bStack_528 & 1) != 0) {
            puVar15 = (ulong *)auStack_568;
          }
        }
        uStack_5a8 = puVar15[2];
        uStack_5b8 = *puVar15;
        uStack_5b0 = puVar15[1];
        *puVar15 = 0;
        puVar15[1] = 0;
        puVar15[2] = 0;
        if ((uStack_5e8 & 1) != 0) {
          func_0x0412a280(uStack_5d8,uStack_5e8 & 0xfffffffffffffffe);
        }
        lVar9 = lStack_540;
        if ((bStack_528 & 1) == 0) {
          lVar2 = lStack_538;
          if (lStack_540 != 0) {
            while (lVar9 != lVar2) {
              func_0x048b3e80(lVar2 + -0x40);
              lVar2 = lVar2 + -0x40;
            }
            lStack_538 = lVar9;
            func_0x0412a280(lStack_540,lStack_530 - lStack_540);
          }
          ppppppuVar19 = ppppppuStack_558;
          ppppppuVar21 = ppppppuStack_550;
          if (ppppppuStack_558 != (undefined8 ******)0x0) {
            for (; ppppppuVar19 != ppppppuVar21; ppppppuVar21 = ppppppuVar21 + -10) {
              if ((*(char *)(ppppppuVar21 + -1) == '\x01') && (((ulong)ppppppuVar21[-6] & 1) != 0))
              {
                func_0x0412a280(ppppppuVar21[-4],(ulong)ppppppuVar21[-6] & 0xfffffffffffffffe);
              }
            }
            ppppppuStack_550 = ppppppuVar19;
            func_0x0412a280(ppppppuStack_558,(long)plStack_548 - (long)ppppppuStack_558);
          }
        }
        else if (((ulong)auStack_568 & 1) != 0) {
          func_0x0412a280(ppppppuStack_558,(ulong)auStack_568 & 0xfffffffffffffffe);
        }
        bVar7 = (byte)uStack_5b8 & 1;
        if ((uStack_5b8 & 1) == 0) {
          if ((byte)uStack_5b8 >> 1 != 0) goto LAB_0d39c0eb;
        }
        else if (uStack_5b0 != 0) {
LAB_0d39c0eb:
          func_0x04863060(&uStack_5e8,0);
          func_0x0485e1c0(auStack_568);
          cVar6 = func_0x0485e320(auStack_568,&uStack_5b8,&uStack_5e8,0);
          if (cVar6 == '\0') {
            bVar24 = (*(byte *)(plVar14 + 4) & 1) != 0;
            _auStack_658 = ppppppuVar23;
            if (bVar24) {
              _auStack_658 = (undefined8 ******)plVar14[6];
            }
            uStack_650 = (undefined8 ******)(ulong)(*(byte *)(plVar14 + 4) >> 1);
            if (bVar24) {
              uStack_650 = (undefined8 ******)plVar14[5];
            }
            func_0x0470d9a0(auStack_678,&UNK_0136f5d3,100,0xd,auStack_658);
            ppppppuStack_5c8 = (undefined8 ******)(auStack_678 + 1);
            if (((ulong)auStack_678 & 1) != 0) {
              ppppppuStack_5c8 = ppppppuStack_668;
            }
            func_0x09adffe0(1,3,0x11,&ppppppuStack_5c8);
            auVar3 = auStack_678;
            ppppppuVar23 = ppppppuStack_668;
          }
          else {
            bVar24 = (*(byte *)(plVar14 + 4) & 1) != 0;
            if (bVar24) {
              ppppppuVar23 = (undefined8 ******)plVar14[6];
            }
            uVar18 = (ulong)(*(byte *)(plVar14 + 4) >> 1);
            if (bVar24) {
              uVar18 = plVar14[5];
            }
            func_0x0d39ccb0(auStack_658,ppppppuVar23,uVar18,&uStack_5e8);
            ppppppuVar21 = uStack_650;
            if (((ulong)_auStack_658 & 1) == 0) {
              ppppppuVar21 = (undefined8 ******)((ulong)_auStack_658 >> 1 & 0x7f);
            }
            auVar3 = (undefined1  [8])_auStack_658;
            ppppppuVar23 = ppppppuStack_648;
            if (ppppppuVar21 != (undefined8 ******)0x0) {
              ppppppuVar23 = ppppppuVar21;
              ppppppuVar19 = (undefined8 ******)(auStack_658 + 1);
              if (((ulong)_auStack_658 & 1) != 0) {
                ppppppuVar19 = ppppppuStack_648;
              }
              do {
                if (ppppppuVar23 == (undefined8 ******)0x0) goto LAB_0d39c25d;
                ppppppuVar16 = (undefined8 ******)((long)ppppppuVar23 - 1);
                lVar9 = (long)ppppppuVar23 - 1;
                ppppppuVar23 = ppppppuVar16;
              } while (*(char *)((long)ppppppuVar19 + lVar9) != ':');
              if (ppppppuVar21 < ppppppuVar16) {
                ppppppuVar23 = ppppppuVar21;
              }
              if (((ppppppuVar16 == (undefined8 ******)0xffffffffffffffff) ||
                  (ppppppuVar23 != (undefined8 ******)0x9)) ||
                 (*(char *)(ppppppuVar19 + 1) != 't' ||
                  *ppppppuVar19 != (undefined8 *****)0x66617263656e696d)) {
LAB_0d39c25d:
                auStack_678 = (undefined1  [8])ppppppuVar19;
                func_0x0b64d750(1,3,0xe,&UNK_0126953a,auStack_678);
                auVar3 = (undefined1  [8])_auStack_658;
                ppppppuVar23 = ppppppuStack_648;
              }
              else {
                pppppppuVar11 = (undefined8 *******)func_0x0d3ca1d0(&pppppppuStack_608,auStack_658);
                pppppppuVar20 = &pppppppuStack_600;
                pppppppuVar13 = pppppppuStack_600;
                auVar3 = (undefined1  [8])_auStack_658;
                ppppppuVar23 = ppppppuStack_648;
                if (pppppppuVar11 == pppppppuVar20) {
LAB_0d39c33f:
                  pppppppuVar11 = pppppppuVar20;
                  if (pppppppuVar13 != (undefined8 *******)0x0) {
                    do {
                      bVar24 = (*(byte *)(pppppppuVar13 + 4) & 1) != 0;
                      ppppppuVar23 = (undefined8 ******)((long)pppppppuVar13 + 0x21);
                      if (bVar24) {
                        ppppppuVar23 = pppppppuVar13[6];
                      }
                      ppppppuVar16 = (undefined8 ******)(ulong)(*(byte *)(pppppppuVar13 + 4) >> 1);
                      if (bVar24) {
                        ppppppuVar16 = pppppppuVar13[5];
                      }
                      ppppppuVar22 = ppppppuVar21;
                      if (ppppppuVar16 < ppppppuVar21) {
                        ppppppuVar22 = ppppppuVar16;
                      }
                      pppppppuStack_5f0 = pppppppuVar13;
                      iVar8 = func_0x0eee2ff0(ppppppuVar19,ppppppuVar23,ppppppuVar22);
                      if (iVar8 == 0) {
                        if (ppppppuVar21 < ppppppuVar16) goto LAB_0d39c330;
                      }
                      else if (iVar8 < 0) goto LAB_0d39c330;
                      iVar8 = func_0x0eee2ff0(ppppppuVar23,ppppppuVar19,ppppppuVar22);
                      auVar3 = (undefined1  [8])_auStack_658;
                      ppppppuVar23 = ppppppuStack_648;
                      if (iVar8 == 0) {
                        if (ppppppuVar21 <= ppppppuVar16) goto joined_r0x0d39c1d3;
                      }
                      else if (-1 < iVar8) goto joined_r0x0d39c1d3;
                      pppppppuVar13 = (undefined8 *******)pppppppuStack_5f0[1];
                      if (pppppppuVar13 == (undefined8 *******)0x0) {
                        pppppppuVar20 = pppppppuStack_5f0 + 1;
                        pppppppuVar11 = pppppppuStack_5f0;
                        break;
                      }
                    } while( true );
                  }
                  ppppppuVar23 = (undefined8 ******)
                                 (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
                  if (ppppppuVar23 == (undefined8 ******)0x0) {
                    func_0x0eec74c0(0x48,0);
                  }
                  pppppppuStack_670 = &pppppppuStack_608;
                  ppppppuStack_668 = (undefined8 ******)0x0;
                  auStack_678 = (undefined1  [8])ppppppuVar23;
                  if (((ulong)_auStack_658 & 1) == 0) {
                    ppppppuVar23[6] = ppppppuStack_648;
                    *(undefined1 (*) [4])(ppppppuVar23 + 4) = auStack_658;
                    *(undefined4 *)((long)ppppppuVar23 + 0x24) = uStack_654;
                    *(undefined4 *)(ppppppuVar23 + 5) = (undefined4)uStack_650;
                    *(undefined4 *)((long)ppppppuVar23 + 0x2c) = uStack_650._4_4_;
                  }
                  else {
                    func_0x0412e5e0(ppppppuVar23 + 4,ppppppuStack_648,uStack_650);
                  }
                  func_0x048635d0(ppppppuVar23 + 7,&uStack_5e8);
                  *ppppppuVar23 = (undefined8 *****)0x0;
                  ppppppuVar23[1] = (undefined8 *****)0x0;
                  ppppppuVar23[2] = pppppppuVar11;
                  *pppppppuVar20 = ppppppuVar23;
                  if ((undefined8 *******)*pppppppuStack_608 != (undefined8 *******)0x0) {
                    pppppppuStack_608 = (undefined8 *******)*pppppppuStack_608;
                  }
                  func_0x048bed00(pppppppuStack_600,ppppppuVar23);
                  lStack_5f8 = lStack_5f8 + 1;
                  auVar3 = (undefined1  [8])_auStack_658;
                  ppppppuVar23 = ppppppuStack_648;
                }
              }
            }
          }
joined_r0x0d39c1d3:
          if (((ulong)auVar3 & 1) != 0) {
            func_0x0412a280(ppppppuVar23,(ulong)auVar3 & 0xfffffffffffffffe);
          }
          func_0x0485e2d0(auStack_568);
          func_0x04863610(&uStack_5e8);
          bVar7 = (byte)uStack_5b8 & 1;
        }
        if (bVar7 != 0) {
          func_0x0412a280(uStack_5a8,uStack_5b8 & 0xfffffffffffffffe);
        }
        plVar17 = (long *)plVar14[1];
        if ((long *)plVar14[1] == (long *)0x0) {
          do {
            plVar10 = (long *)plVar14[2];
            bVar24 = plVar14 != (long *)*plVar10;
            plVar14 = plVar10;
          } while (bVar24);
        }
        else {
          do {
            plVar10 = plVar17;
            plVar17 = (long *)*plVar10;
          } while ((long *)*plVar10 != (long *)0x0);
        }
        plVar14 = plVar10;
      } while (plVar10 != alStack_590);
    }
  }
  func_0x0d3ca180(&plStack_598,alStack_590[0]);
  plVar14 = plStack_620;
  pbStack_628 = (byte *)0x0;
  plStack_620 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar17 = plVar14 + 1;
    lVar9 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
      plVar14 = plStack_620;
      plStack_618 = (long *)0x0;
      if (plStack_620 != (long *)0x0) {
        plStack_618 = (long *)0x0;
        LOCK();
        plVar17 = plStack_620 + 1;
        lVar9 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*plStack_620 + 0x10))(plStack_620);
          func_0x0412c2d0(plVar14);
          goto joined_r0x0d39c574;
        }
      }
    }
    else {
      plStack_618 = (long *)0x0;
    }
  }
joined_r0x0d39c574:
  if ((char)pppppppuStack_630 == '\x01') {
    func_0x0eee02f0(ppppppuStack_638);
  }
  lVar9 = *(long *)(lStack_610 + 0x30);
  if (*(long *)(lStack_610 + 0x38) != lVar9) {
    pppppppuStack_5f0 = (undefined8 *******)(lStack_610 + 0x58);
    ppppppuVar23 = (undefined8 ******)0x0;
    do {
      pppppppuVar20 = pppppppuStack_5f0;
      if ((*(char *)(lVar9 + 8 + (long)ppppppuVar23 * 0x18) != '\x01') ||
         (plVar14 = (long *)(lVar9 + (long)ppppppuVar23 * 0x18),
         *(long *)(*(long *)(*plVar14 + 0x18) + plVar14[2] * 8) == 0)) {
        do {
          pppppppuVar20 = (undefined8 *******)*pppppppuVar20;
          if (pppppppuVar20 == (undefined8 *******)0x0) {
            pppppppuVar20 = (undefined8 *******)&UNK_01e79d90;
            goto LAB_0d39c637;
          }
        } while (ppppppuVar23 != pppppppuVar20[7]);
        pppppppuVar20 = pppppppuVar20 + 3;
LAB_0d39c637:
        ppppuVar12 = (undefined8 ****)func_0x0d3c9b00(&pppppuStack_580,pppppppuVar20);
        uVar5 = (undefined1)uStack_5bc;
        if (((undefined8 *****)ppppuVar12 == &ppppuStack_578) ||
           (cVar6 = func_0x0d39cfc0(lStack_610,uStack_5a0,
                                    *(undefined1 *)(*ppppuVar12[7][0x1d] + 0x11),lStack_5d0,
                                    pppppppuVar20,ppppuVar12 + 8,
                                    *(long *)(*ppppuVar12[7][0x1d])[1] + 0x180,
                                    (undefined1)uStack_5bc), cVar6 == '\0')) {
          pppppppuVar13 = (undefined8 *******)func_0x0d3ca1d0(&pppppppuStack_608,pppppppuVar20);
          if ((undefined8 ********)pppppppuVar13 == &pppppppuStack_600) {
            if (((ulong)*pppppppuVar20 & 1) == 0) {
              ppppppuVar21 = (undefined8 ******)((long)pppppppuVar20 + 1);
            }
            else {
              ppppppuVar21 = pppppppuVar20[2];
            }
            bStack_438 = (byte)ppppppuVar21;
            uStack_437 = (undefined7)((ulong)ppppppuVar21 >> 8);
            func_0x04b22000(1,3,0xe,&UNK_0120098a,&bStack_438);
          }
          else {
            func_0x05d54750(auStack_568,&UNK_0f0863e8);
            func_0x0d5e9c60(&bStack_438,auStack_568);
            func_0x0d39cfc0(lStack_610,uStack_5a0,1,lStack_5d0,pppppppuVar20,pppppppuVar13 + 7,
                            &bStack_438,uVar5);
            if ((uStack_428 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(uStack_428 & 0xff00ffffffffffff) - 8);
            }
            uStack_428 = 0;
            if ((uStack_42e & 0x8000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,
                         (CONCAT62(uStack_42e,CONCAT11(uStack_42f,uStack_430)) & 0xff00ffffffffffff)
                         - 8);
            }
            uStack_430 = 0;
            uStack_42f = 0;
            uStack_42e = 0;
            if (((ulong)ppppppuStack_558 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)ppppppuStack_558 & 0xff00ffffffffffff) - 8);
            }
            ppppppuStack_558 = (undefined8 ******)0x0;
            if (((ulong)pppppppuStack_560 & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,((ulong)pppppppuStack_560 & 0xff00ffffffffffff) - 8);
            }
          }
        }
      }
      ppppppuVar23 = (undefined8 ******)((long)ppppppuVar23 + 1);
      lVar9 = *(long *)(lStack_610 + 0x30);
    } while (ppppppuVar23 <
             (undefined8 ******)((*(long *)(lStack_610 + 0x38) - lVar9 >> 3) * -0x5555555555555555))
    ;
  }
  func_0x0bd4f5c0(&pppppppuStack_608,pppppppuStack_600);
  func_0x0d3c9ab0(ppppuStack_578);
  lVar9 = lStack_490;
  if (lStack_490 != 0) {
    while (lVar9 != lStack_488) {
      func_0x0d686e00(lStack_488 + -0x40);
      lStack_488 = lStack_488 + -0x40;
    }
    lStack_488 = lVar9;
    func_0x0412a280(lStack_490,lStack_480 - lStack_490);
  }
  lVar2 = lStack_4a8;
  lVar9 = lStack_4a0;
  if (lStack_4a8 != 0) {
    for (; lVar2 != lVar9; lVar9 = lVar9 + -0x18) {
      if ((*(byte *)(lVar9 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar9 + -8),*(ulong *)(lVar9 + -0x18) & 0xfffffffffffffffe);
      }
    }
    lStack_4a0 = lVar2;
    func_0x0412a280(lStack_4a8,lStack_498 - lStack_4a8);
  }
  return;
LAB_0d39cc30:
  if (((ulong)ppppppuStack_638 & 1) != 0) {
LAB_0d39cc37:
    func_0x0412a280(pbStack_628,(ulong)ppppppuStack_638 & 0xfffffffffffffffe);
  }
  goto LAB_0d39cc4a;
LAB_0d39c330:
  pppppppuVar13 = (undefined8 *******)*pppppppuStack_5f0;
  pppppppuVar20 = pppppppuStack_5f0;
  goto LAB_0d39c33f;
}


