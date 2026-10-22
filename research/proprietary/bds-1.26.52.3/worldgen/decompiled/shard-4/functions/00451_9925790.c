/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9a25790 (ELF vaddr 0x9925790)
 * Label: caller-of-callee
 * Body:  [[09a25790, 09a25b37] [09a25b40, 09a25d48]]
 * Ghidra: FUN_09a25790
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_09a25790(long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  byte *pbVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  byte bStack_4d8;
  undefined7 uStack_4d7;
  ulong uStack_4d0;
  undefined7 *puStack_4c8;
  byte bStack_4c0;
  undefined7 uStack_4bf;
  undefined4 uStack_4b8;
  undefined1 uStack_4b4;
  undefined8 uStack_4b0;
  undefined1 auStack_4a8 [8];
  ulong uStack_4a0;
  byte *pbStack_498;
  long *plStack_490;
  long *plStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  byte bStack_468;
  undefined7 *puStack_460;
  undefined *puStack_458;
  undefined7 *puStack_450;
  undefined8 uStack_448;
  undefined1 *puStack_440;
  ulong uStack_438;
  undefined1 auStack_430 [1024];
  ulong uStack_30;
  
  uVar8 = (ulong)(*(byte *)(param_1 + 0x18) >> 1);
  bVar10 = *(byte *)(param_1 + 0x18) & 1;
  uVar11 = *(ulong *)(param_1 + 0x20);
  uVar12 = uVar11;
  if (bVar10 == 0) {
    uVar12 = uVar8;
  }
  if (uVar12 != 0) goto LAB_09a25c25;
  FUN_0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  plVar7 = _DAT_0f5523a0;
  pbVar4 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
LAB_09a25ca1:
    uVar9 = func_0x0eee02f0(0xf5522b8);
    func_0x041084d6(&DAT_0f7b8fb8);
    uVar9 = func_0x0eee2d70(uVar9);
    if ((bStack_4c0 & 1) != 0) goto LAB_09a25ce6;
    while ((bStack_4d8 & 1) == 0) {
      func_0x048c3ac0(auStack_4a8);
      func_0x0eee2d70(uVar9);
LAB_09a25ce6:
      func_0x0412a280(uStack_4b0,CONCAT71(uStack_4bf,bStack_4c0) & 0xfffffffffffffffe);
    }
    func_0x0412a280(puStack_4c8,CONCAT71(uStack_4d7,bStack_4d8) & 0xfffffffffffffffe);
    func_0x048c3ac0(auStack_4a8);
    uVar9 = func_0x0eee2d70(uVar9);
    uVar9 = func_0x04882e20(uVar9);
    uVar9 = func_0x04882e20(uVar9);
    func_0x048c3ac0(auStack_4a8);
    func_0x0eee2d70(uVar9);
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return uVar9;
  }
  bVar10 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar10 = *pbVar4;
  }
  plVar1 = _DAT_0f5523a8;
  auStack_4a8 = (undefined1  [8])0xf5522b8;
  uStack_4a0 = CONCAT71(uStack_4a0._1_7_,1);
  pbStack_498 = pbVar4;
  plStack_490 = plVar7;
  plStack_488 = _DAT_0f5523a8;
  if (((bVar10 & 1) == 0) &&
     (cVar5 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  (**(code **)(*plVar1 + 0x18))(&bStack_4d8,plVar1);
  bStack_4c0 = 0x16;
  puStack_450 = &uStack_4bf;
  uStack_4bf = 0x736f6e67616964;
  uStack_4b8 = 0x73636974;
  bVar13 = (bStack_4d8 & 1) != 0;
  puStack_460 = &uStack_4d7;
  if (bVar13) {
    puStack_460 = puStack_4c8;
  }
  uStack_4b4 = 0;
  puStack_458 = (undefined *)(ulong)(bStack_4d8 >> 1);
  if (bVar13) {
    puStack_458 = (undefined *)uStack_4d0;
  }
  uStack_448 = 0xb;
  func_0x049151c0(auStack_430,&puStack_460,2,0x2f);
  if ((bStack_4c0 & 1) != 0) {
    func_0x0412a280(uStack_4b0,CONCAT71(uStack_4bf,bStack_4c0) & 0xfffffffffffffffe);
  }
  if ((bStack_4d8 & 1) != 0) {
    func_0x0412a280(puStack_4c8,CONCAT71(uStack_4d7,bStack_4d8) & 0xfffffffffffffffe);
  }
  plStack_490 = (long *)0x0;
  pbStack_498 = (byte *)0x0;
  if (plVar7 != (long *)0x0) {
    plStack_490 = (long *)0x0;
    pbStack_498 = (byte *)0x0;
    LOCK();
    plVar1 = plVar7 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      func_0x0412c2d0(plVar7);
    }
    plVar7 = plStack_490;
    plStack_488 = (long *)0x0;
    if (plStack_490 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_490 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_490 + 0x10))(plStack_490);
        func_0x0412c2d0(plVar7);
      }
    }
  }
  if ((char)uStack_4a0 == '\x01') {
    func_0x0eee02f0(auStack_4a8);
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar6 = FUN_04108328(&DAT_0f7b8fb8), iVar6 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    __cxa_atexit(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  uStack_438 = uStack_30;
  puStack_440 = auStack_430;
  (**(code **)(_DAT_0f7b8f98 + 0x80))(auStack_4a8,&DAT_0f7b8f98,&puStack_440);
  puStack_460 = (undefined7 *)0xb20c872880b29934;
  puStack_458 = &UNK_0140f690;
  puStack_450 = (undefined7 *)0x1;
  uStack_448 = CONCAT44(uStack_448._4_4_,0x96);
  if (bStack_468 == 0) {
    func_0x0eedea30(&bStack_4d8);
    func_0x0eedeb80(2,0x2d,auStack_4a8,&bStack_4d8,&puStack_460);
    if ((bStack_4d8 & 1) != 0) {
      func_0x0412a280(puStack_4c8,CONCAT71(uStack_4d7,bStack_4d8) & 0xfffffffffffffffe);
    }
  }
  lVar2 = lStack_480;
  if ((bStack_468 & 1) == 0) {
    if (lStack_480 != 0) {
      while (lVar2 != lStack_478) {
        FUN_048b3e80(lStack_478 + -0x40);
        lStack_478 = lStack_478 + -0x40;
      }
      lStack_478 = lVar2;
      func_0x0412a280(lStack_480,lStack_470 - lStack_480);
    }
    pbVar4 = pbStack_498;
    plVar7 = plStack_490;
    if (pbStack_498 != (byte *)0x0) {
      for (; pbVar4 != (byte *)plVar7; plVar7 = plVar7 + -10) {
        if (((char)plVar7[-1] == '\x01') && ((*(byte *)(plVar7 + -6) & 1) != 0)) {
          func_0x0412a280(plVar7[-4],plVar7[-6] & 0xfffffffffffffffe);
        }
      }
      plStack_490 = (long *)pbVar4;
      func_0x0412a280(pbStack_498,(long)plStack_488 - (long)pbStack_498);
    }
  }
  else {
    if (0xfffffffffffffff7 < uStack_30) {
      func_0x04882e30();
      goto LAB_09a25ca1;
    }
    if (uStack_30 < 0x17) {
      auStack_4a8[0] = (char)uStack_30 * '\x02';
      plVar7 = (long *)(auStack_4a8 + 1);
      if (uStack_30 != 0) goto LAB_09a25bba;
    }
    else {
      uVar11 = 0x1a;
      if ((uStack_30 | 7) != 0x17) {
        uVar11 = (uStack_30 | 7) + 1;
      }
      plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar11);
      if (plVar7 == (long *)0x0) {
        func_0x0eec74c0(uVar11,0);
      }
      auStack_4a8 = (undefined1  [8])(uVar11 | 1);
      uStack_4a0 = uStack_30;
      pbStack_498 = (byte *)plVar7;
LAB_09a25bba:
      func_0x0eee2f00(plVar7,auStack_430,uStack_30);
    }
    *(undefined1 *)((long)plVar7 + uStack_30) = 0;
    if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(param_1 + 0x28),
                      *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffe);
    }
    *(byte **)(param_1 + 0x28) = pbStack_498;
    *(undefined1 (*) [8])(param_1 + 0x18) = auStack_4a8;
    *(ulong *)(param_1 + 0x20) = uStack_4a0;
  }
  uVar11 = *(ulong *)(param_1 + 0x20);
  bVar10 = *(byte *)(param_1 + 0x18) & 1;
  uVar8 = (ulong)(*(byte *)(param_1 + 0x18) >> 1);
LAB_09a25c25:
  if (bVar10 != 0) {
    uVar8 = uVar11;
  }
  return CONCAT71((int7)(uVar8 >> 8),uVar8 != 0);
}


