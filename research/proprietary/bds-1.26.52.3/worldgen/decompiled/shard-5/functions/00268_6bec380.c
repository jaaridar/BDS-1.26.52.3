/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6cec380 (ELF vaddr 0x6bec380)
 * Label: callee-of:0xc961580
 * Body:  [[06cec380, 06cec3dc] [06cec3e0, 06cec6eb]]
 * Ghidra: FUN_06cec380
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06cec380(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  bool bVar13;
  undefined1 uStack_1d;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  
  uStack_1c = param_2;
  if ((DAT_0f5a2500 == '\0') && (iVar12 = FUN_04108328(&DAT_0f5a2500), iVar12 != 0)) {
    _DAT_0f5a2430 = 0;
    _DAT_0f5a2420 = 0;
    uRam000000000f5a2428 = 0;
    _DAT_0f5a2410 = 0;
    uRam000000000f5a2418 = 0;
    _DAT_0f5a2438 = 0x3f800000;
    _DAT_0f5a2440 = 0;
    uRam000000000f5a2448 = 0;
    _DAT_0f5a2450 = 0;
    uRam000000000f5a2458 = 0;
    _DAT_0f5a2460 = 0;
    _DAT_0f5a2468 = 0;
    _DAT_0f5a2470 = 0;
    uRam000000000f5a2478 = 0;
    _DAT_0f5a2480 = 0;
    uRam000000000f5a2488 = 0;
    _DAT_0f5a2490 = 0x3f800000;
    _DAT_0f5a2498 = 0;
    uRam000000000f5a24a0 = 0;
    _DAT_0f5a24a8 = 0;
    uRam000000000f5a24b0 = 0;
    _DAT_0f5a24b8 = 0;
    _DAT_0f5a24c0 = 0;
    _DAT_0f5a24c8 = 0;
    LOCK();
    _DAT_0f5a24d0 = 0;
    UNLOCK();
    _DAT_0f5a24e8 = 0;
    uRam000000000f5a24f0 = 0;
    _DAT_0f5a24d8 = 0;
    uRam000000000f5a24e0 = 0;
    _DAT_0f5a24f8 = 0x3f800000;
    func_0x0eee2f40(&UNK_06cf5e90,&DAT_0f5a2410,0xf53dab8);
    func_0x0410844d(&DAT_0f5a2500);
  }
  if ((DAT_0f5a2500 == '\0') && (iVar12 = FUN_04108328(&DAT_0f5a2500), iVar12 != 0)) {
    _DAT_0f5a2430 = 0;
    _DAT_0f5a2420 = 0;
    uRam000000000f5a2428 = 0;
    _DAT_0f5a2410 = 0;
    uRam000000000f5a2418 = 0;
    _DAT_0f5a2438 = 0x3f800000;
    _DAT_0f5a2440 = 0;
    uRam000000000f5a2448 = 0;
    _DAT_0f5a2450 = 0;
    uRam000000000f5a2458 = 0;
    _DAT_0f5a2460 = 0;
    _DAT_0f5a2468 = 0;
    _DAT_0f5a2470 = 0;
    uRam000000000f5a2478 = 0;
    _DAT_0f5a2480 = 0;
    uRam000000000f5a2488 = 0;
    _DAT_0f5a2490 = 0x3f800000;
    _DAT_0f5a2498 = 0;
    uRam000000000f5a24a0 = 0;
    _DAT_0f5a24a8 = 0;
    uRam000000000f5a24b0 = 0;
    _DAT_0f5a24b8 = 0;
    _DAT_0f5a24c0 = 0;
    _DAT_0f5a24c8 = 0;
    LOCK();
    _DAT_0f5a24d0 = 0;
    UNLOCK();
    _DAT_0f5a24e8 = 0;
    uRam000000000f5a24f0 = 0;
    _DAT_0f5a24d8 = 0;
    uRam000000000f5a24e0 = 0;
    _DAT_0f5a24f8 = 0x3f800000;
    func_0x0eee2f40(&UNK_06cf5e90,&DAT_0f5a2410,0xf53dab8);
    func_0x0410844d(&DAT_0f5a2500);
  }
  if (_DAT_0f5a2468 != 0) {
    lVar10 = func_0x0eee2fc0();
    LOCK();
    bVar13 = _DAT_0f5a24c0 != _DAT_0f5a24d0;
    lVar11 = _DAT_0f5a24c0;
    lVar7 = lVar10;
    if (bVar13) {
      lVar11 = _DAT_0f5a24d0;
      lVar7 = _DAT_0f5a24d0;
    }
    _DAT_0f5a24d0 = lVar7;
    UNLOCK();
    if (bVar13) {
      iVar12 = 3000;
      do {
        while( true ) {
          if ((lVar11 == lVar10) && (iVar9 = _DAT_0f5a24c8 + 1, iVar9 != -1)) goto LAB_06cec428;
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          LOCK();
          bVar13 = _DAT_0f5a24c0 == _DAT_0f5a24d0;
          lVar11 = _DAT_0f5a24c0;
          lVar7 = lVar10;
          if (!bVar13) {
            lVar11 = _DAT_0f5a24d0;
            lVar7 = _DAT_0f5a24d0;
          }
          _DAT_0f5a24d0 = lVar7;
          UNLOCK();
          if (bVar13) goto LAB_06cec423;
        }
        func_0x0eee35d0();
        iVar12 = 0;
        LOCK();
        bVar13 = _DAT_0f5a24c0 != _DAT_0f5a24d0;
        lVar11 = _DAT_0f5a24c0;
        lVar7 = lVar10;
        if (bVar13) {
          lVar11 = _DAT_0f5a24d0;
          lVar7 = _DAT_0f5a24d0;
        }
        _DAT_0f5a24d0 = lVar7;
        UNLOCK();
      } while (bVar13);
    }
LAB_06cec423:
    iVar9 = 1;
LAB_06cec428:
    puStack_18 = &uStack_1c;
    _DAT_0f5a24c8 = iVar9;
    lVar11 = func_0x06cfc530(&DAT_0f5a24d8,puStack_18,&UNK_01563a4f,&puStack_18,&uStack_1d);
    uVar3 = *(undefined4 *)param_3;
    uVar4 = *(undefined4 *)((long)param_3 + 4);
    uVar5 = *(undefined4 *)(param_3 + 1);
    uVar6 = *(undefined4 *)((long)param_3 + 0xc);
    *param_3 = 0;
    param_3[1] = 0;
    plVar2 = *(long **)(lVar11 + 0x20);
    *(undefined4 *)(lVar11 + 0x18) = uVar3;
    *(undefined4 *)(lVar11 + 0x1c) = uVar4;
    *(undefined4 *)(lVar11 + 0x20) = uVar5;
    *(undefined4 *)(lVar11 + 0x24) = uVar6;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar11 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_0412c2d0(plVar2);
      }
    }
    if (_DAT_0f5a24d0 == lVar10) {
      if (_DAT_0f5a24c8 == 1) {
        _DAT_0f5a24c8 = 0;
        _DAT_0f5a24d0 = _DAT_0f5a24c0;
        return;
      }
      if (_DAT_0f5a24c8 != 0) {
        _DAT_0f5a24c8 = _DAT_0f5a24c8 + -1;
        return;
      }
    }
    cVar8 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
    if (cVar8 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
      return;
    }
  }
  return;
}


