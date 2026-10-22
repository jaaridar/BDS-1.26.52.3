/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9ba1740 (ELF vaddr 0x9aa1740)
 * Label: caller-of-callee
 * Body:  [[09ba1740, 09ba1a9a] [09ba1aa0, 09ba1b61] [09ba1b70, 09ba1d03] [09ba1d10, 09ba1dbb] [09ba1dc0, 09ba1e6e] [09ba1e70, 09ba1fb4] [09ba1fb7, 09ba203d]]
 * Ghidra: FUN_09ba1740
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_09ba1740(long param_1,long param_2,byte *param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  byte bVar8;
  ulong uVar9;
  byte *pbVar10;
  long *plVar11;
  byte *pbVar12;
  ulong uVar13;
  bool bVar14;
  byte *pbStack_4f8;
  ulong uStack_4f0;
  long *plStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  byte bStack_4b8;
  long lStack_4a8;
  byte *pbStack_4a0;
  ulong uStack_498;
  long *plStack_490;
  long *plStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  byte bStack_460;
  undefined8 *puStack_458;
  ulong uStack_450;
  undefined8 *puStack_448;
  ulong uStack_440;
  undefined8 uStack_438;
  ulong uStack_430;
  byte *pbStack_428;
  long *plStack_420;
  long *plStack_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined8 uStack_400;
  byte bStack_3f8;
  ulong uStack_38;
  
  pbVar12 = param_3 + 1;
  if ((*param_3 & 1) == 0) {
    uVar9 = (ulong)(*param_3 >> 1);
    pbVar10 = pbVar12;
  }
  else {
    uVar9 = *(ulong *)(param_3 + 8);
    pbVar10 = *(byte **)(param_3 + 0x10);
  }
  lStack_4a8 = param_1;
  func_0x0412f5e0(param_2,pbVar10,uVar9);
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  plVar2 = _DAT_0f5523a0;
  pbStack_428 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
    uVar6 = func_0x0eee02f0(0xf5522b8);
    func_0x041084d6(&DAT_0f7b8fb8);
    uVar6 = func_0x0eee2d70(uVar6);
    func_0x0ee38090(&pbStack_4f8);
    uVar6 = func_0x0eee2d70(uVar6);
    func_0x0ee38090(&uStack_438);
    uVar6 = func_0x0eee2d70(uVar6);
    uVar6 = func_0x0eee2d70(uVar6);
    uVar6 = func_0x0eee2d70(uVar6);
    uVar6 = func_0x0eee2d70(uVar6);
    uVar6 = func_0x04882e20(uVar6);
    uVar6 = func_0x04882e20(uVar6);
    func_0x048c3ac0(&uStack_438);
    func_0x0eee2d70(uVar6);
    pcVar1 = (code *)swi(3);
    lVar7 = (*pcVar1)();
    return lVar7;
  }
  bVar8 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar8 = *pbStack_428;
  }
  plVar11 = _DAT_0f5523a8;
  uStack_438 = (byte *)0xf5522b8;
  uStack_430 = CONCAT71(uStack_430._1_7_,1);
  plStack_420 = plVar2;
  plStack_418 = _DAT_0f5523a8;
  if (((bVar8 & 1) == 0) &&
     (cVar4 = FUN_0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  cVar4 = (**(code **)(*plVar11 + 0x610))(plVar11);
  pbStack_428 = (byte *)0x0;
  plStack_420 = (long *)0x0;
  if (plVar2 == (long *)0x0) {
LAB_09ba18bc:
  }
  else {
    LOCK();
    plVar11 = plVar2 + 1;
    lVar7 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0412c2d0(plVar2);
    }
    plVar2 = plStack_420;
    plStack_418 = (long *)0x0;
    if (plStack_420 == (long *)0x0) goto LAB_09ba18bc;
    LOCK();
    plVar11 = plStack_420 + 1;
    lVar7 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar7 != 0) goto LAB_09ba18bc;
    (**(code **)(*plStack_420 + 0x10))(plStack_420);
    FUN_0412c2d0(plVar2);
  }
  if ((char)uStack_430 == '\x01') {
    func_0x0eee02f0(uStack_438);
  }
  if (cVar4 != '\0') {
    bVar14 = (*param_3 & 1) != 0;
    if (bVar14) {
      pbVar12 = *(byte **)(param_3 + 0x10);
    }
    uVar9 = (ulong)(*param_3 >> 1);
    if (bVar14) {
      uVar9 = *(ulong *)(param_3 + 8);
    }
    if ((DAT_0f7b8fb8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7b8fb8), iVar5 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    pbStack_4a0 = pbVar12;
    uStack_498 = uVar9;
    (**(code **)(_DAT_0f7b8f98 + 0x10))
              (&pbStack_4f8,&DAT_0f7b8f98,&pbStack_4a0,param_2 + 0x18,param_4,param_5);
    lVar7 = lStack_4a8;
    bStack_3f8 = bStack_4b8;
    if (bStack_4b8 == 1) {
      *(undefined1 *)(lStack_4a8 + 0x40) = 1;
      return lStack_4a8;
    }
    uStack_438 = pbStack_4f8;
    uStack_430 = uStack_4f0;
    pbStack_428 = (byte *)plStack_4e8;
    plStack_420 = plStack_4e0;
    plStack_418 = plStack_4d8;
    plStack_4e8 = (long *)0x0;
    plStack_4e0 = (long *)0x0;
    plStack_4d8 = (long *)0x0;
    pbStack_4a0 = (byte *)&uStack_4d0;
    uStack_410 = (undefined4)uStack_4d0;
    uStack_40c = uStack_4d0._4_4_;
    uStack_408 = (undefined4)uStack_4c8;
    uStack_404 = uStack_4c8._4_4_;
    uStack_400 = uStack_4c0;
    uStack_4d0 = 0;
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    func_0x09ba8cb0(&pbStack_4a0);
    plVar11 = plStack_4e8;
    plVar2 = plStack_4e0;
    if (plStack_4e8 != (long *)0x0) {
      for (; plVar11 != plVar2; plVar2 = plVar2 + -10) {
        if (((char)plVar2[-1] == '\x01') && ((*(byte *)(plVar2 + -6) & 1) != 0)) {
          func_0x0412a280(plVar2[-4],plVar2[-6] & 0xfffffffffffffffe);
        }
      }
      plStack_4e0 = plVar11;
      func_0x0412a280(plStack_4e8,(long)plStack_4d8 - (long)plStack_4e8);
    }
    func_0x09ba2040(&uStack_438);
    func_0x0ee37ef0(lVar7,&uStack_438);
    if ((bStack_3f8 & 1) != 0) {
      return lVar7;
    }
    pbStack_4f8 = (byte *)&uStack_410;
    func_0x09ba8cb0(&pbStack_4f8);
    pbVar10 = pbStack_428;
    pbVar12 = pbStack_428;
    plVar2 = plStack_420;
    plVar11 = plStack_418;
    if (pbStack_428 == (byte *)0x0) {
      return lVar7;
    }
    for (; pbStack_428 = pbVar12, plStack_418 = plVar11, pbVar10 != (byte *)plVar2;
        plVar2 = plVar2 + -10) {
      if (((char)plVar2[-1] == '\x01') && ((*(byte *)(plVar2 + -6) & 1) != 0)) {
        func_0x0412a280(plVar2[-4],plVar2[-6] & 0xfffffffffffffffe);
      }
      pbVar12 = pbStack_428;
      plVar11 = plStack_418;
    }
    plStack_420 = (long *)pbVar10;
    goto LAB_09ba1ea9;
  }
  bVar14 = (*param_3 & 1) != 0;
  if (bVar14) {
    pbVar12 = *(byte **)(param_3 + 0x10);
  }
  uVar9 = (ulong)(*param_3 >> 1);
  if (bVar14) {
    uVar9 = *(ulong *)(param_3 + 8);
  }
  func_0x0eee2dd0(&uStack_438,0,0x408);
  uVar13 = 0;
  if (uVar9 < 0x400) {
    if (uVar9 != 0) {
      func_0x0eee2ee0(&uStack_438,pbVar12,uVar9);
    }
    uStack_38 = uVar9;
    *(undefined1 *)((long)&uStack_438 + uVar9) = 0;
    uVar13 = uStack_38;
    if ((uStack_38 & 0xfffffffffffffffc) != 0x3fc) goto LAB_09ba19ef;
    uStack_438 = (byte *)((ulong)uStack_438 & 0xffffffffffffff00);
    uStack_38 = 0;
  }
  else {
LAB_09ba19ef:
    *(undefined4 *)((long)&uStack_438 + uVar13) = 0x77656e5f;
    lVar7 = uStack_38 + 4;
    uStack_38 = uStack_38 + 4;
    *(undefined1 *)((long)&uStack_438 + lVar7) = 0;
  }
  uVar9 = uStack_38;
  if ((DAT_0f7b8fb8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7b8fb8), iVar5 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  puStack_448 = &uStack_438;
  uStack_440 = uVar9;
  (**(code **)(_DAT_0f7b8f98 + 0x20))(&pbStack_4f8,&DAT_0f7b8f98,&puStack_448);
  if (bStack_4b8 == 0) {
    pbStack_4a0 = (byte *)&uStack_4d0;
    func_0x09ba8cb0(&pbStack_4a0);
    plVar2 = plStack_4e8;
    if (plStack_4e8 != (long *)0x0) {
      for (; plVar2 != plStack_4e0; plStack_4e0 = plStack_4e0 + -10) {
        if (((char)plStack_4e0[-1] == '\x01') && ((*(byte *)(plStack_4e0 + -6) & 1) != 0)) {
          func_0x0412a280(plStack_4e0[-4],plStack_4e0[-6] & 0xfffffffffffffffe);
        }
      }
      plStack_4e0 = plVar2;
      func_0x0412a280(plStack_4e8,(long)plStack_4d8 - (long)plStack_4e8);
    }
  }
  uVar9 = uStack_38;
  if ((DAT_0f7b8fb8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7b8fb8), iVar5 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  uStack_450 = uVar9;
  puStack_458 = &uStack_438;
  (**(code **)(_DAT_0f7b8f98 + 0x10))
            (&pbStack_4a0,&DAT_0f7b8f98,&puStack_458,param_2 + 0x18,param_4,param_5);
  lVar7 = lStack_4a8;
  bStack_4b8 = bStack_460;
  if (bStack_460 == 1) {
    func_0x0ee37d00(lStack_4a8,1);
  }
  else {
    pbStack_4f8 = pbStack_4a0;
    uStack_4f0 = uStack_498;
    plStack_4e8 = plStack_490;
    plStack_4e0 = plStack_488;
    plStack_4d8 = plStack_480;
    plStack_490 = (long *)0x0;
    plStack_488 = (long *)0x0;
    plStack_480 = (long *)0x0;
    puStack_458 = &uStack_478;
    uStack_4d0 = uStack_478;
    uStack_4c8 = uStack_470;
    uStack_4c0 = uStack_468;
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_468 = 0;
    func_0x09ba8cb0(&puStack_458);
    plVar11 = plStack_490;
    plVar2 = plStack_488;
    if (plStack_490 != (long *)0x0) {
      for (; plVar11 != plVar2; plVar2 = plVar2 + -10) {
        if (((char)plVar2[-1] == '\x01') && ((*(byte *)(plVar2 + -6) & 1) != 0)) {
          func_0x0412a280(plVar2[-4],plVar2[-6] & 0xfffffffffffffffe);
        }
      }
      plStack_488 = plVar11;
      func_0x0412a280(plStack_490,(long)plStack_480 - (long)plStack_490);
    }
    func_0x09ba2100(&pbStack_4f8);
    func_0x0ee37ef0(lVar7,&pbStack_4f8);
  }
  if (bStack_4b8 != 0) {
    return lVar7;
  }
  pbStack_4a0 = (byte *)&uStack_4d0;
  func_0x09ba8cb0(&pbStack_4a0);
  plVar3 = plStack_4e8;
  pbVar12 = (byte *)plStack_4e8;
  plVar2 = plStack_4e0;
  plVar11 = plStack_4d8;
  if (plStack_4e8 == (long *)0x0) {
    return lVar7;
  }
  for (; plStack_4e8 = (long *)pbVar12, plStack_4d8 = plVar11, plVar3 != plVar2;
      plVar2 = plVar2 + -10) {
    if (((char)plVar2[-1] == '\x01') && ((*(byte *)(plVar2 + -6) & 1) != 0)) {
      func_0x0412a280(plVar2[-4],plVar2[-6] & 0xfffffffffffffffe);
    }
    pbVar12 = (byte *)plStack_4e8;
    plVar11 = plStack_4d8;
  }
  plStack_4e0 = plVar3;
LAB_09ba1ea9:
  func_0x0412a280(pbVar12,(long)plVar11 - (long)pbVar12);
  return lVar7;
}


