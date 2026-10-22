/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbbb9ab0 (ELF vaddr 0xbab9ab0)
 * Label: caller-of-callee
 * Body:  [[0bbb9ab0, 0bbb9ed0] [0bbb9ee0, 0bbb9fa8] [0bbb9fb0, 0bbba06c] [0bbba070, 0bbba10e] [0bbba110, 0bbba11b] [0bbba120, 0bbba216] [0bbba220, 0bbba2ea] [0bbba30d, 0bbba34d] [0bbba361, 0bbba38f] [0bbba3f9, 0bbba41b]]
 * Ghidra: FUN_0bbb9ab0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0bbb9ab0(uint *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  char cVar6;
  int iVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined *puVar12;
  uint *puVar13;
  ulong uVar14;
  uint *puVar15;
  bool bVar16;
  undefined8 uStack_650;
  undefined *puStack_648;
  long lStack_640;
  undefined4 uStack_638;
  byte bStack_630;
  uint7 uStack_62f;
  undefined1 uStack_628;
  undefined2 uStack_627;
  undefined1 uStack_625;
  undefined4 uStack_624;
  ulong uStack_620;
  ulong uStack_618;
  long lStack_610;
  long lStack_608;
  long lStack_600;
  long lStack_5f8;
  byte bStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  uint *puStack_5d8;
  undefined8 uStack_5d0;
  undefined4 uStack_5c8;
  long *plStack_5c0;
  uint *puStack_5b8;
  undefined8 uStack_5b0;
  long alStack_5a8 [4];
  long *plStack_588;
  long *plStack_578;
  uint *puStack_570;
  undefined8 *puStack_568;
  byte bStack_560;
  undefined7 uStack_55f;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  byte *pbStack_538;
  long *plStack_530;
  long *plStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  int iStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined4 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  uint auStack_438 [4];
  undefined1 uStack_428;
  undefined8 uStack_38;
  
  puStack_5d8 = (uint *)0x0;
  uStack_5d0 = 0;
  lStack_5e8 = 0;
  lStack_5e0 = 0;
  uStack_5c8 = 0x3f800000;
  plStack_5c0 = param_3;
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  plVar4 = _DAT_0f5523a0;
  pbStack_538 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
    uVar10 = func_0x0eee02f0(0xf5522b8);
    FUN_041084d6(&DAT_0f7b8fb8);
    func_0x05f43b50(&uStack_548);
    func_0x0bbba590(&lStack_5e8);
    uVar10 = _Unwind_Resume(uVar10);
    if ((uStack_650 & 1) != 0) {
      func_0x0412a280(lStack_640,uStack_650 & 0xfffffffffffffffe);
    }
    func_0x048c3ac0(&uStack_548);
    func_0x0bbba590(&lStack_5e8);
    uVar10 = _Unwind_Resume(uVar10);
    uVar10 = func_0x04882e20(uVar10);
    FUN_0eeb81b0(&uStack_548);
    func_0x0bbba590(&lStack_5e8);
    _Unwind_Resume(uVar10);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar11 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar11 = *pbStack_538;
  }
  plVar2 = _DAT_0f5523a8;
  uStack_548 = 0xf5522b8;
  uStack_540 = CONCAT71(uStack_540._1_7_,1);
  plStack_530 = plVar4;
  plStack_528 = _DAT_0f5523a8;
  if (((bVar11 & 1) == 0) &&
     (cVar6 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  (**(code **)(*plVar2 + 0x110))(&uStack_650,plVar2);
  puVar12 = (undefined *)(uStack_650 >> 1 & 0x7f);
  lVar9 = (long)&uStack_650 + 1;
  if ((uStack_650 & 1) != 0) {
    puVar12 = puStack_648;
    lVar9 = lStack_640;
  }
  uStack_620 = 0xf6cdc81;
  uStack_618 = (ulong)(DAT_0f6cdc80 >> 1);
  if ((DAT_0f6cdc80 & 1) != 0) {
    uStack_618 = _DAT_0f6cdc88;
    uStack_620 = _DAT_0f6cdc90;
  }
  bStack_630 = (byte)lVar9;
  uStack_62f = (uint7)((ulong)lVar9 >> 8);
  uStack_628 = SUB81(puVar12,0);
  uStack_627 = (undefined2)((ulong)puVar12 >> 8);
  uStack_625 = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_624 = (undefined4)((ulong)puVar12 >> 0x20);
  puVar15 = auStack_438;
  func_0x049151c0(puVar15,&bStack_630,2,0x2f);
  if ((uStack_650 & 1) != 0) {
    func_0x0412a280(lStack_640,uStack_650 & 0xfffffffffffffffe);
  }
  pbStack_538 = (byte *)0x0;
  plStack_530 = (long *)0x0;
  if (plVar4 == (long *)0x0) {
LAB_0bbb9caf:
  }
  else {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      func_0x0412c2d0(plVar4);
    }
    plVar4 = plStack_530;
    plStack_528 = (long *)0x0;
    if (plStack_530 == (long *)0x0) goto LAB_0bbb9caf;
    LOCK();
    plVar2 = plStack_530 + 1;
    lVar9 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar9 != 0) goto LAB_0bbb9caf;
    (**(code **)(*plStack_530 + 0x10))(plStack_530);
    func_0x0412c2d0(plVar4);
  }
  if ((char)uStack_540 == '\x01') {
    func_0x0eee02f0(uStack_548);
  }
  uStack_4a0 = 0;
  uStack_498 = 0;
  uStack_4b0 = 0;
  uStack_4a8 = 0;
  uStack_548 = 0;
  uStack_540 = 0;
  pbStack_538 = (byte *)0x0;
  plStack_530 = (long *)0x0;
  plStack_528 = (long *)0x0;
  uStack_520 = 0;
  uStack_518 = 0;
  uStack_510 = 0;
  uStack_508 = 0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  uStack_4f0 = 0;
  uStack_4e8 = 0;
  uStack_4e0 = 0;
  uStack_4d8 = 0;
  uStack_4d0 = 0;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  iStack_4b8 = 0;
  uStack_490 = 0x3f800000;
  uStack_488 = 0;
  uStack_480 = 0;
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_468 = 0;
  uStack_460 = 0;
  uStack_458 = 0;
  uStack_450 = 0;
  uStack_448 = 0;
  if (DAT_0f7b8fb8 == '\0') goto LAB_0bbba283;
  while( true ) {
    uStack_5b0 = uStack_38;
    plStack_578 = &lStack_5e8;
    puStack_568 = &uStack_548;
    puStack_5b8 = puVar15;
    puStack_570 = param_1;
    (**(code **)(_DAT_0f7b8f98 + 0xb0))
              (&bStack_630,&DAT_0f7b8f98,&puStack_5b8,0x182,&UNK_0bbe6a20,&plStack_578);
    uStack_650 = 0xd725919164ec486a;
    puStack_648 = &UNK_0140f690;
    lStack_640 = 1;
    uStack_638 = 0x3d;
    if (bStack_5f0 == 0) {
      func_0x0eedea30(&bStack_560);
      FUN_0eedeb80(2,0x2d,&bStack_630,&bStack_560,&uStack_650);
      if ((bStack_560 & 1) != 0) {
        func_0x0412a280(uStack_550,CONCAT71(uStack_55f,bStack_560) & 0xfffffffffffffffe);
      }
    }
    lVar9 = lStack_608;
    if ((bStack_5f0 & 1) == 0) {
      lVar1 = lStack_600;
      if (lStack_608 != 0) {
        while (lVar9 != lVar1) {
          func_0x048b3e80(lVar1 + -0x40);
          lVar1 = lVar1 + -0x40;
        }
        lStack_600 = lVar9;
        func_0x0412a280(lStack_608,lStack_5f8 - lStack_608);
      }
      uVar5 = uStack_620;
      uVar14 = uStack_618;
      if (uStack_620 != 0) {
        for (; uVar5 != uVar14; uVar14 = uVar14 - 0x50) {
          if ((*(char *)(uVar14 - 8) == '\x01') && ((*(byte *)(uVar14 - 0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(uVar14 - 0x20),
                            *(ulong *)(uVar14 - 0x30) & 0xfffffffffffffffe);
          }
        }
        uStack_618 = uVar5;
        func_0x0412a280(uStack_620,lStack_610 - uStack_620);
      }
    }
    if (0 < iStack_4b8) {
      bStack_630 = 0x14;
      uStack_62f = 0x72476e77617053;
      uStack_628 = 0x6f;
      uStack_627 = 0x7075;
      uStack_625 = 0;
      (**(code **)(*(long *)(*(long *)(param_1 + 0x12) + 0x40) + 0x10))
                (*(long *)(param_1 + 0x12) + 0x40,&bStack_630,&uStack_548);
      if ((bStack_630 & 1) != 0) {
        func_0x0412a280(uStack_620,CONCAT71(uStack_62f,bStack_630) & 0xfffffffffffffffe);
      }
    }
    func_0x05f43b50(&uStack_548);
    if (puStack_5d8 == (uint *)0x0) break;
    puVar15 = puStack_5d8;
    while( true ) {
      bVar16 = ((byte)puVar15[4] & 1) != 0;
      lVar9 = (long)puVar15 + 0x11;
      if (bVar16) {
        lVar9 = *(long *)(puVar15 + 8);
      }
      uVar14 = (ulong)(byte)((byte)puVar15[4] >> 1);
      if (bVar16) {
        uVar14 = *(ulong *)(puVar15 + 6);
      }
      bStack_630 = 0;
      uStack_62f = 0;
      if (lVar9 == 0) {
        uVar14 = (ulong)((uint)uVar14 & 0x7f) << 0x30;
      }
      else {
        lVar1 = uVar14 + 9;
        puVar8 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar1,8);
        if (lVar1 != 0 && puVar8 == (ulong *)0x0) {
          func_0x0eec74c0(lVar1,8);
        }
        *puVar8 = uVar14;
        memcpy(puVar8 + 1,lVar9,uVar14);
        *(undefined1 *)((long)puVar8 + uVar14 + 8) = 0;
        uVar14 = (ulong)(puVar8 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      bStack_630 = (byte)uVar14;
      uStack_62f = (uint7)(uVar14 >> 8);
      auStack_438[0] = auStack_438[0] & 0xffffff00;
      uStack_428 = 0;
      FUN_0eeb79f0(&uStack_548,&bStack_630);
      plVar4 = plStack_5c0;
      if ((uStack_62f & 0x800000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(CONCAT71(uStack_62f,bStack_630) & 0xff00ffffffffffff) - 8);
      }
      plVar2 = (long *)plVar4[4];
      if (plVar2 == (long *)0x0) {
        plStack_588 = (long *)0x0;
      }
      else if (plVar2 == plVar4) {
        plStack_588 = alStack_5a8;
        (**(code **)(*plVar2 + 0x18))();
      }
      else {
        plStack_588 = (long *)(**(code **)(*plVar2 + 0x10))();
      }
      puVar13 = *(uint **)(puVar15 + 0x1c);
      param_1 = *(uint **)(puVar15 + 0x1e);
      if (puVar13 != param_1) break;
LAB_0bbba190:
      if (plStack_588 == alStack_5a8) {
        lVar9 = 0x20;
LAB_0bbb9fb5:
        (**(code **)(*plStack_588 + lVar9))();
      }
      else {
        lVar9 = 0x28;
        if (plStack_588 != (long *)0x0) goto LAB_0bbb9fb5;
      }
      FUN_0eeb81b0(&uStack_548);
      puVar15 = *(uint **)puVar15;
      puVar13 = puStack_5d8;
      if (puVar15 == (uint *)0x0) goto joined_r0x0bbba1d9;
    }
    while (auStack_438[0] = *puVar13, plStack_588 != (long *)0x0) {
      (**(code **)(*plStack_588 + 0x30))
                (plStack_588,puVar15 + 0x10,auStack_438,puVar13 + 2,puVar13 + 0x14,puVar15 + 10);
      puVar13 = puVar13 + 0x70;
      if (puVar13 == param_1) goto LAB_0bbba190;
    }
    func_0x04891200();
LAB_0bbba283:
    iVar7 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar7 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
  }
LAB_0bbba1db:
  lVar9 = lStack_5e8;
  lStack_5e8 = 0;
  if (lVar9 != 0) {
    func_0x0412a280(lVar9,lStack_5e0 << 3);
  }
  return;
joined_r0x0bbba1d9:
  while (puVar13 != (uint *)0x0) {
    puVar15 = *(uint **)puVar13;
    func_0x0b098f50(puVar13 + 10);
    if ((puVar13[4] & 1) != 0) {
      func_0x0412a280(*(long *)(puVar13 + 8),*(ulong *)(puVar13 + 4) & 0xfffffffffffffffe);
    }
    func_0x0412a280(puVar13,0x88);
    puVar13 = puVar15;
  }
  goto LAB_0bbba1db;
}


