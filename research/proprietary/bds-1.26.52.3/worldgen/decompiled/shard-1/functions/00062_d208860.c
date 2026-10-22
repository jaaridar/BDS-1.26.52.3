/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd308860 (ELF vaddr 0xd208860)
 * Label: string:Loading Jigsaw Structure .json files
 * Body:  [[0d308860, 0d308c9d] [0d308ca0, 0d308cf0] [0d308d00, 0d308d5b] [0d308d60, 0d308e9e] [0d308ea0, 0d309013] [0d309020, 0d309097] [0d3091ce, 0d309203]]
 * Ghidra: FUN_0d308860
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d308860(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  long lStack_5f8;
  undefined8 uStack_5f0;
  ulong uStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  long *plStack_5c8;
  undefined8 uStack_5c0;
  undefined4 uStack_5b8;
  long lStack_5a8;
  long lStack_5a0;
  long lStack_598;
  undefined1 auStack_590 [24];
  ulong uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  int iStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined4 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  long alStack_468 [4];
  long *plStack_448;
  uint uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined *puStack_428;
  code *pcStack_420;
  undefined8 uStack_418;
  undefined **ppuStack_408;
  undefined *apuStack_3f8 [2];
  undefined *puStack_3e8;
  undefined1 *puStack_3e0;
  undefined8 uStack_3d8;
  undefined **ppuStack_3c8;
  undefined *apuStack_3b8 [2];
  undefined *puStack_3a8;
  undefined1 *puStack_3a0;
  undefined8 uStack_398;
  undefined **ppuStack_388;
  undefined *apuStack_378 [2];
  undefined *puStack_368;
  undefined1 *puStack_360;
  undefined8 uStack_358;
  undefined **ppuStack_348;
  ulong uStack_38;
  
  uStack_578 = 0x24000001200531;
  uStack_438 = uStack_438 & 0xffffff00;
  puStack_428 = (undefined *)((ulong)puStack_428 & 0xffffffffffffff00);
  lStack_5a8 = param_1;
  FUN_0eeb79f0(auStack_590,&uStack_578);
  if ((uStack_578 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_578 & 0xff00ffffffffffff) - 8);
  }
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  lVar9 = *(long *)(lStack_5a8 + 0x18);
  *(undefined8 **)(lStack_5a8 + 0x18) = puVar8;
  lStack_5a0 = param_3;
  if (lVar9 != 0) {
    func_0x049e9990(lVar9);
    func_0x0412a280(lVar9,0x60);
  }
  uStack_438 = 0x13ae05d;
  uStack_434 = 0;
  puStack_428 = &UNK_0f45fa20;
  pcStack_420 = FUN_0d2f3fc0;
  uStack_418 = 0;
  apuStack_3f8[0] = &UNK_01327389;
  puStack_3e8 = &UNK_0f45fa20;
  puStack_3e0 = &SUB_0d2f7bb0;
  uStack_3d8 = 0;
  apuStack_3b8[0] = &UNK_01496cea;
  puStack_3a8 = &UNK_0f45fa20;
  puStack_3a0 = &SUB_0d2f5270;
  uStack_398 = 0;
  apuStack_378[0] = &UNK_013923b3;
  puStack_368 = &UNK_0f45fa20;
  puStack_360 = &SUB_0d2f68b0;
  uStack_358 = 0;
  plStack_5c8 = (long *)0x0;
  uStack_5c0 = 0;
  lStack_5d8 = 0;
  lStack_5d0 = 0;
  uStack_5b8 = 0x3f800000;
  ppuStack_408 = &puStack_428;
  ppuStack_3c8 = &puStack_3e8;
  ppuStack_388 = &puStack_3a8;
  ppuStack_348 = &puStack_368;
  func_0x0d326720(&lStack_5d8,&UNK_013ae05d,&uStack_438);
  func_0x0d326720(&lStack_5d8,apuStack_3f8[0],apuStack_3f8);
  func_0x0d326720(&lStack_5d8,apuStack_3b8[0],apuStack_3b8);
  func_0x0d326720(&lStack_5d8,apuStack_378[0],apuStack_378);
  if (ppuStack_348 == &puStack_368) {
    lVar9 = 0x20;
LAB_0d308b59:
    (**(code **)(*ppuStack_348 + lVar9))();
    if (ppuStack_388 != &puStack_3a8) goto LAB_0d308b1a;
LAB_0d308b6c:
    lVar9 = 0x20;
LAB_0d308b71:
    (**(code **)(*ppuStack_388 + lVar9))();
    if (ppuStack_3c8 != &puStack_3e8) goto LAB_0d308b31;
LAB_0d308b84:
    lVar9 = 0x20;
LAB_0d308b89:
    (**(code **)(*ppuStack_3c8 + lVar9))();
    if (ppuStack_408 != &puStack_428) goto LAB_0d308b48;
LAB_0d308b9c:
    lVar9 = 0x20;
  }
  else {
    lVar9 = 0x28;
    if (ppuStack_348 != (undefined **)0x0) goto LAB_0d308b59;
    if (ppuStack_388 == &puStack_3a8) goto LAB_0d308b6c;
LAB_0d308b1a:
    lVar9 = 0x28;
    if (ppuStack_388 != (undefined **)0x0) goto LAB_0d308b71;
    if (ppuStack_3c8 == &puStack_3e8) goto LAB_0d308b84;
LAB_0d308b31:
    lVar9 = 0x28;
    if (ppuStack_3c8 != (undefined **)0x0) goto LAB_0d308b89;
    if (ppuStack_408 == &puStack_428) goto LAB_0d308b9c;
LAB_0d308b48:
    lVar9 = 0x28;
    if (ppuStack_408 == (undefined **)0x0) goto LAB_0d308ba7;
  }
  (**(code **)(*ppuStack_408 + lVar9))();
LAB_0d308ba7:
  uStack_4d0 = 0;
  uStack_4c8 = 0;
  uStack_4e0 = 0;
  uStack_4d8 = 0;
  uStack_578 = 0;
  uStack_570 = 0;
  uStack_568 = 0;
  uStack_560 = 0;
  uStack_558 = 0;
  uStack_550 = 0;
  uStack_548 = 0;
  uStack_540 = 0;
  uStack_538 = 0;
  uStack_530 = 0;
  uStack_528 = 0;
  uStack_520 = 0;
  uStack_518 = 0;
  uStack_510 = 0;
  uStack_508 = 0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  uStack_4f0 = 0;
  iStack_4e8 = 0;
  uStack_4c0 = 0x3f800000;
  uStack_4b8 = 0;
  uStack_4b0 = 0;
  uStack_4a8 = 0;
  uStack_4a0 = 0;
  uStack_498 = 0;
  uStack_490 = 0;
  uStack_488 = 0;
  uStack_480 = 0;
  uStack_478 = 0;
  lStack_598 = *(long *)(param_2 + 0x98);
  lStack_5f8 = *(long *)(lStack_598 + 8);
  lVar9 = *(long *)(lStack_598 + 0x10);
  if ((lStack_5f8 != lVar9) && (plStack_5c8 != (long *)0x0)) {
    plVar15 = plStack_5c8;
    do {
      while (plStack_5c8 = plVar15, plVar15 == (long *)0x0) {
        lStack_5f8 = lStack_5f8 + 0x110;
        if (lStack_5f8 == lVar9) goto LAB_0d308f3c;
      }
      do {
        lVar9 = plVar15[2];
        uVar10 = func_0x0eee2e90(lVar9);
        memset(&uStack_438,0,0x400);
        if (uVar10 < 0x400) {
          if (uVar10 != 0) {
            memcpy(&uStack_438,lVar9,uVar10);
          }
          lVar9 = lStack_5f8;
          uStack_38 = uVar10;
          *(undefined1 *)((long)&uStack_438 + uVar10) = 0;
          uVar10 = uStack_38;
          if (0xfffffffffffffff7 < uStack_38) {
            uVar14 = func_0x04882e30();
            if ((uStack_438 & 1) != 0) {
              func_0x0412a280(puStack_428,CONCAT44(uStack_434,uStack_438) & 0xfffffffffffffffe);
            }
            func_0x05f43b50(&uStack_578);
            func_0x0d309210(&lStack_5d8);
            func_0x0eeb81b0(auStack_590);
            func_0x0eee2d70(uVar14);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (uStack_38 < 0x17) {
            uStack_5f0 = CONCAT71(uStack_5f0._1_7_,(char)uStack_38 * '\x02');
            lVar11 = (long)&uStack_5f0 + 1;
            if (uStack_38 == 0) {
              uVar10 = 0;
              goto LAB_0d308dbe;
            }
          }
          else {
            uVar16 = (uStack_38 | 7) + 1;
            if ((uStack_38 | 7) == 0x17) {
              uVar16 = 0x1a;
            }
            lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16);
            if (lVar11 == 0) {
              func_0x0eec74c0(uVar16,0);
            }
            uStack_5f0 = uVar16 | 1;
            uStack_5e8 = uVar10;
            lStack_5e0 = lVar11;
          }
          memcpy(lVar11,&uStack_438,uVar10);
        }
        else {
          uStack_5f0 = uStack_5f0 & 0xffffffffffffff00;
          uVar10 = 0;
          lVar11 = (long)&uStack_5f0 + 1;
          lVar9 = lStack_5f8;
        }
LAB_0d308dbe:
        *(undefined1 *)(lVar11 + uVar10) = 0;
        plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (plVar12 == (long *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        *plVar12 = (long)&UNK_0f4603e0;
        plVar12[1] = lStack_5a8;
        plVar12[2] = (long)&lStack_5f8;
        plVar12[3] = (long)(plVar15 + 4);
        plVar12[4] = (long)&uStack_578;
        uVar14 = *(undefined8 *)(lVar9 + 0xe8);
        plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
        if (plVar13 == (long *)0x0) {
          func_0x0eec74c0(0x28,0);
        }
        *plVar13 = (long)&UNK_0f4603e0;
        uVar2 = *(undefined4 *)((long)plVar12 + 0xc);
        lVar11 = plVar12[2];
        uVar3 = *(undefined4 *)((long)plVar12 + 0x14);
        lVar6 = plVar12[3];
        uVar4 = *(undefined4 *)((long)plVar12 + 0x1c);
        lVar7 = plVar12[4];
        uVar5 = *(undefined4 *)((long)plVar12 + 0x24);
        *(int *)(plVar13 + 1) = (int)plVar12[1];
        *(undefined4 *)((long)plVar13 + 0xc) = uVar2;
        *(int *)(plVar13 + 2) = (int)lVar11;
        *(undefined4 *)((long)plVar13 + 0x14) = uVar3;
        *(int *)(plVar13 + 3) = (int)lVar6;
        *(undefined4 *)((long)plVar13 + 0x1c) = uVar4;
        *(int *)(plVar13 + 4) = (int)lVar7;
        *(undefined4 *)((long)plVar13 + 0x24) = uVar5;
        plStack_448 = plVar13;
        func_0x0d62a6f0(uVar14,&uStack_5f0,alStack_468,*(undefined4 *)(lVar9 + 0x108),1);
        if (plStack_448 == alStack_468) {
          lVar9 = 0x20;
LAB_0d308ea5:
          (**(code **)(*plStack_448 + lVar9))();
        }
        else {
          lVar9 = 0x28;
          if (plStack_448 != (long *)0x0) goto LAB_0d308ea5;
        }
        (**(code **)(*plVar12 + 0x28))(plVar12);
        if ((uStack_5f0 & 1) != 0) {
          func_0x0412a280(lStack_5e0);
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
      lVar9 = *(long *)(lStack_598 + 0x10);
      lStack_5f8 = lStack_5f8 + 0x110;
      plVar15 = plStack_5c8;
    } while (lStack_5f8 != lVar9);
LAB_0d308f3c:
    if (0 < iStack_4e8) {
      uStack_438 = 0x67694a1e;
      uStack_434 = 0x53776173;
      uStack_430 = 0x63757274;
      uStack_42c = 0x65727574;
      puStack_428 = (undefined *)((ulong)puStack_428 & 0xffffffffffffff00);
      (**(code **)(*(long *)(lStack_5a0 + 0x40) + 0x10))(lStack_5a0 + 0x40,&uStack_438,&uStack_578);
      if ((uStack_438 & 1) != 0) {
        func_0x0412a280(puStack_428,CONCAT44(uStack_434,uStack_438) & 0xfffffffffffffffe);
      }
    }
  }
  func_0x05f43b50(&uStack_578);
  lVar9 = lStack_5d8;
  plVar15 = plStack_5c8;
  do {
    if (plVar15 == (long *)0x0) {
      lStack_5d8 = 0;
      if (lVar9 != 0) {
        func_0x0412a280(lVar9,lStack_5d0 << 3);
      }
      func_0x0eeb81b0(auStack_590);
      return;
    }
    plVar12 = (long *)*plVar15;
    plVar13 = (long *)plVar15[8];
    lStack_5d8 = lVar9;
    if (plVar13 == plVar15 + 4) {
      lVar9 = 0x20;
LAB_0d309025:
      (**(code **)(*plVar13 + lVar9))();
    }
    else {
      lVar9 = 0x28;
      if (plVar13 != (long *)0x0) goto LAB_0d309025;
    }
    func_0x0412a280(plVar15,0x50);
    lVar9 = lStack_5d8;
    plVar15 = plVar12;
  } while( true );
}


