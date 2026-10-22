/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4ac9ab0 (ELF vaddr 0x49c9ab0)
 * Label: caller-of-callee
 * Body:  [[04ac9ab0, 04ad4ace]]
 * Ghidra: FUN_04ac9ab0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04ac9ab0(undefined8 param_1,long *param_2)

{
  uint *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  uint *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  byte *pbVar18;
  uint *puVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  bool bVar22;
  byte bStack_618;
  undefined4 uStack_617;
  undefined2 uStack_613;
  undefined1 uStack_611;
  byte bStack_610;
  undefined4 uStack_60f;
  undefined1 uStack_60b;
  undefined1 uStack_60a;
  undefined1 uStack_609;
  undefined1 uStack_608;
  undefined2 uStack_607;
  undefined1 uStack_605;
  undefined1 uStack_604;
  undefined1 uStack_603;
  undefined2 uStack_602;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  long *plStack_5d8;
  undefined8 uStack_5d0;
  uint *puStack_5c8;
  uint *puStack_5c0;
  undefined8 *puStack_5b8;
  ulong uStack_5b0;
  undefined *puStack_5a8;
  undefined8 uStack_5a0;
  undefined8 **ppuStack_598;
  undefined **ppuStack_588;
  undefined *puStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined **ppuStack_558;
  undefined *puStack_538;
  byte bStack_530;
  undefined1 auStack_52f [2];
  byte abStack_52d [3];
  undefined2 uStack_52a;
  byte bStack_528;
  undefined2 uStack_527;
  undefined1 uStack_525;
  undefined2 uStack_524;
  undefined2 uStack_522;
  undefined8 uStack_520;
  undefined8 uStack_518;
  ulong uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 *puStack_4d8;
  byte bStack_4d0;
  undefined4 uStack_4cf;
  undefined1 auStack_4cb [4];
  undefined2 uStack_4c7;
  undefined1 uStack_4c5;
  undefined4 uStack_4c4;
  undefined1 uStack_4c0;
  undefined2 uStack_4bf;
  undefined5 uStack_4bd;
  undefined8 uStack_4b8;
  undefined8 **ppuStack_4a8;
  undefined8 *puStack_498;
  byte bStack_490;
  undefined4 uStack_48f;
  undefined1 auStack_48b [4];
  undefined2 uStack_487;
  undefined2 uStack_485;
  undefined1 uStack_483;
  undefined2 uStack_482;
  undefined1 uStack_480;
  undefined5 uStack_47f;
  undefined2 uStack_47a;
  undefined8 uStack_478;
  undefined8 **ppuStack_468;
  ulong uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  ulong uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 *puStack_418;
  byte bStack_410;
  undefined7 uStack_40f;
  undefined1 uStack_408;
  undefined2 uStack_407;
  undefined5 uStack_405;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 **ppuStack_3e8;
  undefined8 *puStack_3d8;
  byte bStack_3d0;
  undefined4 uStack_3cf;
  undefined1 auStack_3cb [4];
  undefined4 uStack_3c7;
  undefined4 uStack_3c3;
  undefined4 uStack_3bf;
  undefined3 uStack_3bb;
  undefined8 uStack_3b8;
  undefined8 **ppuStack_3a8;
  long *plStack_390;
  ulong uStack_388;
  ulong uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined *puStack_358;
  byte bStack_350;
  undefined7 uStack_34f;
  undefined1 uStack_348;
  undefined2 uStack_347;
  undefined1 uStack_345;
  undefined4 uStack_344;
  undefined8 uStack_340;
  undefined8 uStack_338;
  ulong uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  ulong uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  ulong uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  ulong uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long alStack_278 [4];
  long *plStack_258;
  long alStack_248 [4];
  long *plStack_228;
  long alStack_218 [4];
  long *plStack_1f8;
  long alStack_1e8 [4];
  long *plStack_1c8;
  long alStack_1b8 [4];
  long *plStack_198;
  long alStack_188 [4];
  long *plStack_168;
  long alStack_158 [4];
  long *plStack_138;
  long alStack_128 [4];
  long *plStack_108;
  long alStack_f8 [4];
  long *plStack_d8;
  long alStack_c8 [4];
  long *plStack_a8;
  long alStack_98 [4];
  long *plStack_78;
  long alStack_68 [4];
  long *plStack_48;
  
  plVar8 = (long *)param_2[4];
  uStack_5d0 = param_1;
  if (plVar8 == (long *)0x0) {
    plStack_a8 = (long *)0x0;
  }
  else if (plVar8 == param_2) {
    plStack_a8 = alStack_c8;
    (**(code **)(*plVar8 + 0x18))();
  }
  else {
    plStack_a8 = (long *)(**(code **)(*plVar8 + 0x10))();
  }
  puStack_578 = (undefined *)0x0;
  uStack_570 = 0x5f6169636163611a;
  uStack_568 = 0x79706f6e6163;
  ppuStack_558 = (undefined **)0x0;
  pbVar18 = (byte *)((long)&uStack_570 + 1);
  uVar7 = func_0x0eee2e90(pbVar18);
  puStack_578 = (undefined *)0xcbf29ce484222325;
  if (uVar7 != 0) {
    uVar17 = (ulong)((uint)uVar7 & 7);
    if (uVar7 < 8) {
      puStack_578 = (undefined *)0xcbf29ce484222325;
    }
    else {
      uVar7 = uVar7 & 0xfffffffffffffff8;
      puStack_578 = (undefined *)0xcbf29ce484222325;
      do {
        puStack_578 = (undefined *)
                      (((((((((long)puStack_578 * 0x100000001b3 ^ (ulong)*pbVar18) * 0x100000001b3 ^
                            (ulong)pbVar18[1]) * 0x100000001b3 ^ (ulong)pbVar18[2]) * 0x100000001b3
                          ^ (ulong)pbVar18[3]) * 0x100000001b3 ^ (ulong)pbVar18[4]) * 0x100000001b3
                        ^ (ulong)pbVar18[5]) * 0x100000001b3 ^ (ulong)pbVar18[6]) * 0x100000001b3 ^
                      (ulong)pbVar18[7]);
        pbVar18 = pbVar18 + 8;
        uVar7 = uVar7 - 8;
      } while (uVar7 != 0);
    }
    if (uVar17 != 0) {
      uVar7 = 0;
      do {
        puStack_578 = (undefined *)((long)puStack_578 * 0x100000001b3 ^ (ulong)pbVar18[uVar7]);
        uVar7 = uVar7 + 1;
      } while (uVar17 != uVar7);
    }
  }
  if (plStack_a8 == (long *)0x0) {
    ppuStack_598 = (undefined8 **)0x0;
    bStack_3d0 = 0;
    uStack_3cf = 0;
    auStack_3cb = (undefined1  [4])((uint)auStack_3cb & 0xff000000);
    puStack_3d8 = (undefined8 *)&UNK_0ef58bb8;
    ppuStack_3a8 = (undefined8 **)0x0;
  }
  else {
    if (plStack_a8 == alStack_c8) {
      ppuStack_598 = &puStack_5b8;
      (**(code **)(*plStack_a8 + 0x18))();
    }
    else {
      ppuStack_598 = (undefined8 **)(**(code **)(*plStack_a8 + 0x10))();
    }
    ppuStack_3a8 = ppuStack_598;
    bStack_3d0 = 0;
    uStack_3cf = 0;
    auStack_3cb = (undefined1  [4])((uint)auStack_3cb[3] << 0x18);
    puStack_3d8 = (undefined8 *)&UNK_0ef58bb8;
    if (ppuStack_598 == (undefined8 **)0x0) {
      ppuStack_3a8 = (undefined8 **)0x0;
    }
    else if (ppuStack_598 == &puStack_5b8) {
      ppuStack_3a8 = (undefined8 **)(auStack_3cb + 3);
      (*(code *)(*ppuStack_598)[3])(ppuStack_598);
    }
    else {
      ppuStack_598 = (undefined8 **)0x0;
    }
  }
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef589d0;
  bStack_618 = 0;
  uStack_617 = 0;
  uStack_613 = 0;
  uStack_611 = 0;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  if (puStack_3d8 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_3d8)(&puStack_3d8,&bStack_618);
    puVar9 = puStack_3d8;
  }
  puStack_3d8 = (undefined8 *)0x0;
  bStack_618 = (byte)puVar9;
  uStack_617 = (undefined4)((ulong)puVar9 >> 8);
  uStack_613 = (undefined2)((ulong)puVar9 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar9 >> 0x38);
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&puStack_538,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar15 = plVar8 + 0x11;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0ef58a20;
  pbVar18 = (byte *)(plVar8 + 0x2e);
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  *(undefined1 *)(plVar8 + 0x36) = 0;
  if (pbVar18 != &bStack_618) {
    puVar9 = (undefined8 *)CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)))
    ;
    if (puVar9 == (undefined8 *)0x0) {
      lVar11 = 0;
    }
    else {
      (*(code *)*puVar9)(&bStack_618,pbVar18);
      lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
    }
    bStack_618 = 0;
    uStack_617 = 0;
    uStack_613 = 0;
    uStack_611 = 0;
    *(long *)pbVar18 = lVar11;
  }
  plStack_5d8 = plVar8 + 4;
  puVar19 = (uint *)(plVar8 + 0x12);
  if (plVar15 != (long *)&DAT_0f552108) {
    if ((*puVar19 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar8[0x14] = _DAT_0f552120;
        uVar5 = uRam000000000f55211c;
        uVar4 = _DAT_0f552118;
        uVar3 = uRam000000000f552114;
        *puVar19 = _DAT_0f552110;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar3;
        *(undefined4 *)(plVar8 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar5;
      }
      else {
        func_0x04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar22 = (_DAT_0f552110 & 1) != 0;
      lVar11 = 0xf552111;
      if (bVar22) {
        lVar11 = _DAT_0f552120;
      }
      uVar7 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar22) {
        uVar7 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar19,lVar11,uVar7);
    }
  }
  plVar13 = plVar8 + 1;
  plVar8[0x11] = _DAT_0f552108;
  plVar8[0x15] = 0;
  lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  puStack_5c8 = puVar19;
  if (lVar11 != 0) {
    (**(code **)(lVar11 + 8))(&bStack_618);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  plStack_390 = param_2;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef58b18;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0ef58b68;
  puVar9[0xe] = plStack_5d8;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  puVar20 = puVar9 + 4;
  bStack_618 = (byte)puVar20;
  uStack_617 = (undefined4)((ulong)puVar20 >> 8);
  uStack_613 = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar20 >> 0x38);
  bStack_610 = (byte)puVar9;
  uStack_60f = (undefined4)((ulong)puVar9 >> 8);
  uStack_60b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_60a = (undefined1)((ulong)puVar9 >> 0x30);
  uStack_609 = (undefined1)((ulong)puVar9 >> 0x38);
  puVar10 = (undefined4 *)func_0x04b081a0(uStack_5d0,&puStack_578,0);
  plVar16 = *(long **)(puVar10 + 0x24);
  if (plVar16 < *(long **)(puVar10 + 0x26)) {
    plVar16[2] = 0;
    plVar16[3] = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[4] = 0;
    if (plVar16 == plVar15) {
LAB_04ac9fee:
      *plVar16 = *plVar15;
      plVar16[5] = (long)puVar20;
      plVar16[6] = (long)puVar9;
LAB_04aca057:
      LOCK();
      puVar9[1] = puVar9[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_5c8 & 1) == 0) {
        plVar16[3] = *(long *)(puStack_5c8 + 4);
        lVar11 = *(long *)(puStack_5c8 + 2);
        plVar16[1] = *(long *)puStack_5c8;
        plVar16[2] = lVar11;
        goto LAB_04ac9fee;
      }
      func_0x04885070(plVar16 + 1,plVar8[0x14],plVar8[0x13]);
      *plVar16 = *plVar15;
      puVar9 = (undefined8 *)
               CONCAT17(uStack_609,
                        CONCAT16(uStack_60a,CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
      plVar16[5] = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
      plVar16[6] = CONCAT17(uStack_609,
                            CONCAT16(uStack_60a,CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))
                                    ));
      if (puVar9 != (undefined8 *)0x0) goto LAB_04aca057;
    }
    plVar16 = plVar16 + 7;
    *(long **)(puVar10 + 0x24) = plVar16;
  }
  else {
    plVar16 = (long *)func_0x04b0c1b0(puVar10 + 0x22,plVar15,&bStack_618);
  }
  *(long **)(puVar10 + 0x24) = plVar16;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar15 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar11 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar15 = (long *)CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar11 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  LOCK();
  lVar11 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  if (puStack_3d8 != (undefined8 *)0x0) {
    (*(code *)puStack_3d8[1])(&puStack_3d8);
  }
  if (ppuStack_598 == &puStack_5b8) {
    lVar11 = 0x20;
LAB_04aca36e:
    (**(code **)((long)*ppuStack_598 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (ppuStack_598 != (undefined8 **)0x0) goto LAB_04aca36e;
  }
  if ((uStack_570 & 1) != 0) {
    func_0x0412a280(uStack_560,uStack_570 & 0xfffffffffffffffe);
  }
  uStack_524 = 0;
  uStack_522 = 0;
  uStack_520 = 0;
  uStack_518 = 0;
  bStack_530 = 0x16;
  _auStack_52f = 0x706f6e6163;
  uStack_52a = 0x5f79;
  bStack_528 = 0x73;
  uStack_527 = 0x7a69;
  uStack_525 = 0x65;
  puStack_538 = (undefined *)0x8b1d0ddeab3880db;
  uStack_570 = 0;
  uStack_5b0 = 0;
  puStack_578 = (undefined *)0x0;
  puStack_5b8 = (undefined8 *)&UNK_0ef58e08;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puVar9 = puStack_5b8;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef58be0;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  puStack_5b8 = (undefined8 *)0x0;
  bStack_618 = (byte)puVar9;
  uStack_617 = (undefined4)((ulong)puVar9 >> 8);
  uStack_613 = (undefined2)((ulong)puVar9 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar9 >> 0x38);
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&puStack_358,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar15 = plVar8 + 0x11;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0ef58c30;
  plVar8[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar8 + 0x2f) = 1;
  plVar8[0x30] = 0;
  plVar8[0x31] = 0;
  puVar9 = (undefined8 *)CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  if (puVar9 == (undefined8 *)0x0) {
    lVar11 = 0;
  }
  else {
    (*(code *)*puVar9)(&bStack_618,plVar8 + 0x30);
    lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  }
  bStack_618 = 0;
  uStack_617 = 0;
  uStack_613 = 0;
  uStack_611 = 0;
  plVar8[0x30] = lVar11;
  puVar19 = (uint *)(plVar8 + 0x12);
  if (plVar15 == (long *)&DAT_0f552078) {
    plVar8[0x15] = 0;
  }
  else {
    if ((*puVar19 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar8[0x14] = _DAT_0f552090;
        uVar5 = uRam000000000f55208c;
        uVar4 = _DAT_0f552088;
        uVar3 = uRam000000000f552084;
        *puVar19 = _DAT_0f552080;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar3;
        *(undefined4 *)(plVar8 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar5;
      }
      else {
        func_0x04885070(puVar19,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar22 = (_DAT_0f552080 & 1) != 0;
      lVar11 = 0xf552081;
      if (bVar22) {
        lVar11 = _DAT_0f552090;
      }
      uVar7 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar22) {
        uVar7 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puVar19,lVar11,uVar7);
    }
    lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
    plVar8[0x11] = _DAT_0f552078;
    plVar8[0x15] = 0;
    if (lVar11 != 0) {
      (**(code **)(lVar11 + 8))(&bStack_618);
    }
  }
  plVar13 = plVar8 + 1;
  puStack_5c0 = puVar19;
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef58d10;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0ef58d60;
  puVar9[0xe] = plVar8 + 4;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  puVar20 = puVar9 + 4;
  bStack_618 = (byte)puVar20;
  uStack_617 = (undefined4)((ulong)puVar20 >> 8);
  uStack_613 = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar20 >> 0x38);
  bStack_610 = (byte)puVar9;
  uStack_60f = (undefined4)((ulong)puVar9 >> 8);
  uStack_60b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_60a = (undefined1)((ulong)puVar9 >> 0x30);
  uStack_609 = (undefined1)((ulong)puVar9 >> 0x38);
  puStack_5c8 = (uint *)(plVar8 + 4);
  puVar10 = (undefined4 *)func_0x04b0cb10(plStack_5d8,&puStack_538,1);
  plVar16 = *(long **)(puVar10 + 0x24);
  if (plVar16 < *(long **)(puVar10 + 0x26)) {
    plVar16[2] = 0;
    plVar16[3] = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[4] = 0;
    if (plVar16 != plVar15) {
      puVar19 = (uint *)(plVar16 + 1);
      if ((*puStack_5c0 & 1) == 0) {
        plVar16[3] = *(long *)(puStack_5c0 + 4);
        lVar11 = *(long *)(puStack_5c0 + 2);
        *(undefined8 *)puVar19 = *(undefined8 *)puStack_5c0;
        plVar16[2] = lVar11;
      }
      else {
        puStack_5c0 = puVar19;
        func_0x04885070(puVar19,plVar8[0x14],plVar8[0x13]);
      }
    }
    *plVar16 = *plVar15;
    plVar16[5] = (long)puVar20;
    plVar16[6] = (long)puVar9;
    LOCK();
    puVar9[1] = puVar9[1] + 1;
    UNLOCK();
    plVar16 = plVar16 + 7;
    *(long **)(puVar10 + 0x24) = plVar16;
  }
  else {
    plVar16 = (long *)func_0x04b0e8e0(puVar10 + 0x22,plVar15,&bStack_618);
  }
  *(long **)(puVar10 + 0x24) = plVar16;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar15 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar11 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar15 = (long *)CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar11 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  puVar19 = puStack_5c8;
  LOCK();
  lVar11 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  *(undefined4 *)(plVar8 + 0x2e) = 1;
  puStack_498 = (undefined8 *)0x0;
  bStack_490 = 0;
  uStack_48f = 0;
  auStack_48b._0_3_ = 0;
  auStack_48b[3] = 0;
  uStack_487 = 0;
  uStack_485 = 0;
  uStack_483 = 0;
  uStack_482 = 0;
  (**(code **)(plVar8[4] + 0x10))(puVar19,&puStack_498);
  if (((ulong)puStack_498 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_482,
                             CONCAT15(uStack_483,
                                      CONCAT23(uStack_485,CONCAT21(uStack_487,auStack_48b[3])))),
                    (ulong)puStack_498 & 0xfffffffffffffffe);
  }
  if (puStack_578 != (undefined *)0x0) {
    (**(code **)(puStack_578 + 8))(&puStack_578);
  }
  if ((bStack_530 & 1) != 0) {
    func_0x0412a280(uStack_520,
                    CONCAT26(uStack_52a,CONCAT51(_auStack_52f,bStack_530)) & 0xfffffffffffffffe);
  }
  uStack_345 = 0;
  uStack_344 = 0;
  uStack_340 = 0;
  uStack_338 = 0;
  puStack_358 = (undefined *)0x3a4ad5b186795d27;
  bStack_350 = 0x14;
  uStack_34f = 0x6c625f6661656c;
  uStack_348 = 0x6f;
  uStack_347 = 0x6b63;
  bStack_530 = 0;
  _auStack_52f = 0;
  uStack_52a = 0;
  uStack_5b0 = 0;
  puStack_538 = (undefined *)0x0;
  puStack_5b8 = (undefined8 *)&UNK_0ef59000;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puVar9 = puStack_5b8;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef58e30;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  puStack_5b8 = (undefined8 *)0x0;
  bStack_618 = (byte)puVar9;
  uStack_617 = (undefined4)((ulong)puVar9 >> 8);
  uStack_613 = (undefined2)((ulong)puVar9 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar9 >> 0x38);
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&puStack_4d8,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0ef58e80;
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  puVar9 = (undefined8 *)CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  if (puVar9 == (undefined8 *)0x0) {
    lVar11 = 0;
  }
  else {
    (*(code *)*puVar9)(&bStack_618,plVar8 + 0x2e);
    lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  }
  plVar15 = plVar8 + 1;
  plVar8[0x2e] = lVar11;
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  LOCK();
  *plVar15 = *plVar15 + 1;
  UNLOCK();
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar13 = plVar8 + 4;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef58f60;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0ef58fb0;
  puVar9[0xe] = plVar13;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  puVar20 = puVar9 + 4;
  bStack_618 = (byte)puVar20;
  uStack_617 = (undefined4)((ulong)puVar20 >> 8);
  uStack_613 = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar20 >> 0x38);
  bStack_610 = (byte)puVar9;
  uStack_60f = (undefined4)((ulong)puVar9 >> 8);
  uStack_60b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_60a = (undefined1)((ulong)puVar9 >> 0x30);
  uStack_609 = (undefined1)((ulong)puVar9 >> 0x38);
  puVar10 = (undefined4 *)func_0x04b0cb10(plStack_5d8,&puStack_358,1);
  puVar19 = (uint *)(plVar8 + 0x11);
  plVar16 = *(long **)(puVar10 + 0x24);
  if (plVar16 < *(long **)(puVar10 + 0x26)) {
    plVar16[2] = 0;
    plVar16[3] = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[4] = 0;
    if ((uint *)plVar16 != puVar19) {
      puVar12 = (uint *)(plVar16 + 1);
      if ((*(byte *)(plVar8 + 0x12) & 1) == 0) {
        plVar16[3] = plVar8[0x14];
        lVar11 = plVar8[0x13];
        *(long *)puVar12 = plVar8[0x12];
        plVar16[2] = lVar11;
      }
      else {
        puStack_5c8 = puVar19;
        puStack_5c0 = puVar12;
        func_0x04885070(puVar12,plVar8[0x14],plVar8[0x13]);
        puVar19 = puStack_5c8;
      }
    }
    *plVar16 = *(long *)puVar19;
    plVar16[5] = (long)puVar20;
    plVar16[6] = (long)puVar9;
    LOCK();
    puVar9[1] = puVar9[1] + 1;
    UNLOCK();
    plVar16 = plVar16 + 7;
    *(long **)(puVar10 + 0x24) = plVar16;
  }
  else {
    plVar16 = (long *)func_0x04b0e8e0(puVar10 + 0x22,puVar19,&bStack_618);
  }
  *(long **)(puVar10 + 0x24) = plVar16;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar16 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar16 = *plVar16 + 1;
    UNLOCK();
  }
  plVar16 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar14 = plVar16 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar16 = (long *)CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar14 = plVar16 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  LOCK();
  lVar11 = *plVar15;
  *plVar15 = *plVar15 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  puStack_418 = (undefined8 *)0x0;
  bStack_410 = 0;
  uStack_40f = 0;
  uStack_408 = 0;
  uStack_407 = 0;
  uStack_405 = 0;
  (**(code **)(*plVar13 + 0x10))(plVar13,&puStack_418);
  if (((ulong)puStack_418 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_405,CONCAT21(uStack_407,uStack_408)),
                    (ulong)puStack_418 & 0xfffffffffffffffe);
  }
  if (puStack_538 != (undefined *)0x0) {
    (**(code **)(puStack_538 + 8))(&puStack_538);
  }
  if ((bStack_350 & 1) != 0) {
    func_0x0412a280(uStack_340,CONCAT71(uStack_34f,bStack_350) & 0xfffffffffffffffe);
  }
  uStack_4c0 = 0;
  uStack_4bf = 0;
  uStack_4bd = 0;
  uStack_4b8 = 0;
  bStack_4d0 = 0x1e;
  uStack_4cf = 0x706d6973;
  auStack_4cb = (undefined1  [4])0x7966696c;
  uStack_4c7 = 0x635f;
  uStack_4c5 = 0x61;
  uStack_4c4 = 0x79706f6e;
  puStack_4d8 = (undefined8 *)0xf99aedd4f2404807;
  bStack_350 = 0;
  uStack_34f = 0;
  uStack_5b0 = 0;
  puStack_358 = (undefined *)0x0;
  puStack_5b8 = (undefined8 *)&UNK_0ef591f8;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1d0,0);
  }
  puVar9 = puStack_5b8;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef59028;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  puStack_5b8 = (undefined8 *)0x0;
  bStack_618 = (byte)puVar9;
  uStack_617 = (undefined4)((ulong)puVar9 >> 8);
  uStack_613 = (undefined2)((ulong)puVar9 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar9 >> 0x38);
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&uStack_388,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar15 = plVar8 + 0x11;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0ef59078;
  plVar8[0x2f] = 0;
  plVar8[0x30] = 0;
  plVar8[0x2e] = (long)(plVar8 + 0x2f);
  pbVar18 = (byte *)(plVar8 + 0x32);
  plVar8[0x32] = 0;
  plVar8[0x33] = 0;
  if (pbVar18 != &bStack_618) {
    puVar9 = (undefined8 *)CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)))
    ;
    if (puVar9 == (undefined8 *)0x0) {
      lVar11 = 0;
    }
    else {
      (*(code *)*puVar9)(&bStack_618,pbVar18);
      lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
    }
    bStack_618 = 0;
    uStack_617 = 0;
    uStack_613 = 0;
    uStack_611 = 0;
    *(long *)pbVar18 = lVar11;
  }
  puVar19 = (uint *)(plVar8 + 0x12);
  if (plVar15 != (long *)&DAT_0f551f88) {
    if ((*puVar19 & 1) == 0) {
      if ((_DAT_0f551f90 & 1) == 0) {
        plVar8[0x14] = _DAT_0f551fa0;
        uVar5 = uRam000000000f551f9c;
        uVar4 = _DAT_0f551f98;
        uVar3 = uRam000000000f551f94;
        *puVar19 = _DAT_0f551f90;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar3;
        *(undefined4 *)(plVar8 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar5;
      }
      else {
        func_0x04885070(puVar19,_DAT_0f551fa0,CONCAT44(uRam000000000f551f9c,_DAT_0f551f98));
      }
    }
    else {
      bVar22 = (_DAT_0f551f90 & 1) != 0;
      lVar11 = 0xf551f91;
      if (bVar22) {
        lVar11 = _DAT_0f551fa0;
      }
      uVar7 = (ulong)((_DAT_0f551f90 & 0xff) >> 1);
      if (bVar22) {
        uVar7 = CONCAT44(uRam000000000f551f9c,_DAT_0f551f98);
      }
      func_0x04885120(puVar19,lVar11,uVar7);
    }
  }
  plVar8[0x11] = _DAT_0f551f88;
  plVar8[0x15] = 0;
  lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  if (lVar11 != 0) {
    (**(code **)(lVar11 + 8))(&bStack_618);
  }
  plVar13 = plVar8 + 1;
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  puStack_5c8 = (uint *)plVar13;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef59158;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0ef591a8;
  puVar9[0xe] = plVar8 + 4;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  puVar20 = puVar9 + 4;
  bStack_618 = (byte)puVar20;
  uStack_617 = (undefined4)((ulong)puVar20 >> 8);
  uStack_613 = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar20 >> 0x38);
  bStack_610 = (byte)puVar9;
  uStack_60f = (undefined4)((ulong)puVar9 >> 8);
  uStack_60b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_60a = (undefined1)((ulong)puVar9 >> 0x30);
  uStack_609 = (undefined1)((ulong)puVar9 >> 0x38);
  puStack_5c0 = (uint *)(plVar8 + 4);
  puVar10 = (undefined4 *)func_0x04b0cb10(plStack_5d8,&puStack_4d8,0);
  plVar13 = *(long **)(puVar10 + 0x24);
  if (plVar13 < *(long **)(puVar10 + 0x26)) {
    plVar13[2] = 0;
    plVar13[3] = 0;
    *plVar13 = 0;
    plVar13[1] = 0;
    plVar13[4] = 0;
    if (plVar13 != plVar15) {
      plVar16 = plVar13 + 1;
      if ((*puVar19 & 1) == 0) {
        plVar13[3] = plVar8[0x14];
        lVar11 = plVar8[0x13];
        *plVar16 = *(long *)puVar19;
        plVar13[2] = lVar11;
      }
      else {
        plStack_5d8 = plVar16;
        func_0x04885070(plVar16,plVar8[0x14],plVar8[0x13]);
      }
    }
    *plVar13 = *plVar15;
    plVar13[5] = (long)puVar20;
    plVar13[6] = (long)puVar9;
    LOCK();
    puVar9[1] = puVar9[1] + 1;
    UNLOCK();
    plVar13 = plVar13 + 7;
    *(long **)(puVar10 + 0x24) = plVar13;
  }
  else {
    plVar13 = (long *)func_0x04b0e8e0(puVar10 + 0x22,plVar15,&bStack_618);
  }
  *(long **)(puVar10 + 0x24) = plVar13;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar15 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar13 = plVar15 + 1;
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar15 = (long *)CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar13 = plVar15 + 1;
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  puVar12 = puStack_5c0;
  puVar19 = puStack_5c8;
  LOCK();
  lVar11 = *(long *)puStack_5c8;
  *(long *)puStack_5c8 = *(long *)puStack_5c8 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *(long *)puVar19;
    *(long *)puVar19 = *(long *)puVar19 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *(long *)puStack_5c8;
    *(long *)puStack_5c8 = *(long *)puStack_5c8 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  bStack_618 = 0;
  uStack_617 = 0;
  uStack_613 = 0;
  uStack_611 = 0;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  uStack_608 = 0;
  uStack_607 = 0;
  uStack_605 = 0;
  uStack_604 = 0;
  uStack_603 = 0;
  uStack_602 = 0;
  (**(code **)(*(long *)puVar12 + 0x10))(puVar12,&bStack_618);
  plVar8 = plStack_390;
  if ((bStack_618 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_602,
                             CONCAT15(uStack_603,
                                      CONCAT14(uStack_604,
                                               CONCAT13(uStack_605,CONCAT21(uStack_607,uStack_608)))
                                     )),
                    CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618))) &
                    0xfffffffffffffffe);
  }
  if (puStack_358 != (undefined *)0x0) {
    (**(code **)(puStack_358 + 8))(&puStack_358);
  }
  if ((bStack_4d0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_4bd,CONCAT21(uStack_4bf,uStack_4c0)),
                    CONCAT35(auStack_4cb._0_3_,CONCAT41(uStack_4cf,bStack_4d0)) & 0xfffffffffffffffe
                   );
  }
  if (plStack_a8 == alStack_c8) {
    lVar11 = 0x20;
LAB_04acb0bc:
    (**(code **)(*plStack_a8 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (plStack_a8 != (long *)0x0) goto LAB_04acb0bc;
  }
  bStack_618 = 0xc;
  uStack_617 = 0x6f6e6163;
  uStack_613 = 0x7970;
  uStack_611 = 0;
  plVar15 = (long *)plVar8[4];
  if (plVar15 == (long *)0x0) {
    plStack_48 = (long *)0x0;
  }
  else if (plVar15 == plVar8) {
    plStack_48 = alStack_68;
    (**(code **)(*plVar15 + 0x18))();
  }
  else {
    plStack_48 = (long *)(**(code **)(*plVar15 + 0x10))();
  }
  func_0x04ad80a0(&bStack_618,uStack_5d0,alStack_68);
  if (plStack_48 == alStack_68) {
    lVar11 = 0x20;
LAB_04acb162:
    (**(code **)(*plStack_48 + lVar11))();
    plVar15 = (long *)plVar8[4];
    if (plVar15 != (long *)0x0) goto LAB_04acb150;
LAB_04acb171:
    plStack_d8 = (long *)0x0;
  }
  else {
    lVar11 = 0x28;
    if (plStack_48 != (long *)0x0) goto LAB_04acb162;
    plVar15 = (long *)plVar8[4];
    if (plVar15 == (long *)0x0) goto LAB_04acb171;
LAB_04acb150:
    if (plVar15 == plVar8) {
      plStack_d8 = alStack_f8;
      (**(code **)(*plVar15 + 0x18))();
    }
    else {
      plStack_d8 = (long *)(**(code **)(*plVar15 + 0x10))();
    }
  }
  puStack_578 = (undefined *)0x0;
  uStack_570 = 0x5f7972726568631a;
  uStack_568 = 0x79706f6e6163;
  ppuStack_558 = (undefined **)0x0;
  pbVar18 = (byte *)((long)&uStack_570 + 1);
  uVar7 = func_0x0eee2e90(pbVar18);
  puStack_578 = (undefined *)0xcbf29ce484222325;
  if (uVar7 != 0) {
    uVar17 = (ulong)((uint)uVar7 & 7);
    if (uVar7 < 8) {
      puStack_578 = (undefined *)0xcbf29ce484222325;
    }
    else {
      uVar7 = uVar7 & 0xfffffffffffffff8;
      puStack_578 = (undefined *)0xcbf29ce484222325;
      do {
        puStack_578 = (undefined *)
                      (((((((((long)puStack_578 * 0x100000001b3 ^ (ulong)*pbVar18) * 0x100000001b3 ^
                            (ulong)pbVar18[1]) * 0x100000001b3 ^ (ulong)pbVar18[2]) * 0x100000001b3
                          ^ (ulong)pbVar18[3]) * 0x100000001b3 ^ (ulong)pbVar18[4]) * 0x100000001b3
                        ^ (ulong)pbVar18[5]) * 0x100000001b3 ^ (ulong)pbVar18[6]) * 0x100000001b3 ^
                      (ulong)pbVar18[7]);
        pbVar18 = pbVar18 + 8;
        uVar7 = uVar7 - 8;
      } while (uVar7 != 0);
    }
    if (uVar17 != 0) {
      uVar7 = 0;
      do {
        puStack_578 = (undefined *)((long)puStack_578 * 0x100000001b3 ^ (ulong)pbVar18[uVar7]);
        uVar7 = uVar7 + 1;
      } while (uVar17 != uVar7);
    }
  }
  if (plStack_d8 == (long *)0x0) {
    ppuStack_598 = (undefined8 **)0x0;
    bStack_410 = 0;
    uStack_40f = 0;
    puStack_418 = (undefined8 *)&UNK_0ef5b150;
    ppuStack_3e8 = (undefined8 **)0x0;
  }
  else {
    if (plStack_d8 == alStack_f8) {
      ppuStack_598 = &puStack_5b8;
      (**(code **)(*plStack_d8 + 0x18))();
    }
    else {
      ppuStack_598 = (undefined8 **)(**(code **)(*plStack_d8 + 0x10))();
    }
    ppuStack_3e8 = ppuStack_598;
    bStack_410 = 0;
    uStack_40f = 0;
    puStack_418 = (undefined8 *)&UNK_0ef5b150;
    if (ppuStack_598 == (undefined8 **)0x0) {
      ppuStack_3e8 = (undefined8 **)0x0;
    }
    else if (ppuStack_598 == &puStack_5b8) {
      ppuStack_3e8 = (undefined8 **)&uStack_408;
      (*(code *)(*ppuStack_598)[3])(ppuStack_598);
    }
    else {
      ppuStack_598 = (undefined8 **)0x0;
    }
  }
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef5af68;
  bStack_618 = 0;
  uStack_617 = 0;
  uStack_613 = 0;
  uStack_611 = 0;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  if (puStack_418 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_418)(&puStack_418,&bStack_618);
    puVar9 = puStack_418;
  }
  puStack_418 = (undefined8 *)0x0;
  bStack_618 = (byte)puVar9;
  uStack_617 = (undefined4)((ulong)puVar9 >> 8);
  uStack_613 = (undefined2)((ulong)puVar9 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar9 >> 0x38);
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&puStack_538,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar15 = plVar8 + 0x11;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0ef5afb8;
  pbVar18 = (byte *)(plVar8 + 0x2e);
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  *(undefined1 *)(plVar8 + 0x36) = 0;
  if (pbVar18 != &bStack_618) {
    puVar9 = (undefined8 *)CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)))
    ;
    if (puVar9 == (undefined8 *)0x0) {
      lVar11 = 0;
    }
    else {
      (*(code *)*puVar9)(&bStack_618,pbVar18);
      lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
    }
    bStack_618 = 0;
    uStack_617 = 0;
    uStack_613 = 0;
    uStack_611 = 0;
    *(long *)pbVar18 = lVar11;
  }
  plStack_5d8 = plVar8 + 4;
  puVar19 = (uint *)(plVar8 + 0x12);
  if (plVar15 != (long *)&DAT_0f552108) {
    if ((*puVar19 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar8[0x14] = _DAT_0f552120;
        uVar5 = uRam000000000f55211c;
        uVar4 = _DAT_0f552118;
        uVar3 = uRam000000000f552114;
        *puVar19 = _DAT_0f552110;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar3;
        *(undefined4 *)(plVar8 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar5;
      }
      else {
        func_0x04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar22 = (_DAT_0f552110 & 1) != 0;
      lVar11 = 0xf552111;
      if (bVar22) {
        lVar11 = _DAT_0f552120;
      }
      uVar7 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar22) {
        uVar7 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar19,lVar11,uVar7);
    }
  }
  plVar13 = plVar8 + 1;
  plVar8[0x11] = _DAT_0f552108;
  plVar8[0x15] = 0;
  lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  if (lVar11 != 0) {
    (**(code **)(lVar11 + 8))(&bStack_618);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef5b0b0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0ef5b100;
  puVar9[0xe] = plStack_5d8;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  puVar20 = puVar9 + 4;
  bStack_618 = (byte)puVar20;
  uStack_617 = (undefined4)((ulong)puVar20 >> 8);
  uStack_613 = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar20 >> 0x38);
  bStack_610 = (byte)puVar9;
  uStack_60f = (undefined4)((ulong)puVar9 >> 8);
  uStack_60b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_60a = (undefined1)((ulong)puVar9 >> 0x30);
  uStack_609 = (undefined1)((ulong)puVar9 >> 0x38);
  puStack_5c8 = puVar19;
  puVar10 = (undefined4 *)func_0x04b081a0(uStack_5d0,&puStack_578,0);
  plVar16 = *(long **)(puVar10 + 0x24);
  if (plVar16 < *(long **)(puVar10 + 0x26)) {
    plVar16[2] = 0;
    plVar16[3] = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[4] = 0;
    if (plVar16 == plVar15) {
LAB_04acb666:
      *plVar16 = *plVar15;
      plVar16[5] = (long)puVar20;
      plVar16[6] = (long)puVar9;
LAB_04acb6d3:
      LOCK();
      puVar9[1] = puVar9[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_5c8 & 1) == 0) {
        plVar16[3] = *(long *)(puStack_5c8 + 4);
        lVar11 = *(long *)(puStack_5c8 + 2);
        plVar16[1] = *(long *)puStack_5c8;
        plVar16[2] = lVar11;
        goto LAB_04acb666;
      }
      func_0x04885070(plVar16 + 1,plVar8[0x14],plVar8[0x13]);
      *plVar16 = *plVar15;
      puVar9 = (undefined8 *)
               CONCAT17(uStack_609,
                        CONCAT16(uStack_60a,CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
      plVar16[5] = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
      plVar16[6] = CONCAT17(uStack_609,
                            CONCAT16(uStack_60a,CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))
                                    ));
      if (puVar9 != (undefined8 *)0x0) goto LAB_04acb6d3;
    }
    plVar16 = plVar16 + 7;
    *(long **)(puVar10 + 0x24) = plVar16;
  }
  else {
    plVar16 = (long *)func_0x04b0c1b0(puVar10 + 0x22,plVar15,&bStack_618);
  }
  *(long **)(puVar10 + 0x24) = plVar16;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar15 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar11 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar15 = (long *)CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar11 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  LOCK();
  lVar11 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  plVar15 = plStack_5d8;
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    plVar15 = plStack_5d8;
  }
  plStack_5d8 = plVar15;
  if (puStack_418 != (undefined8 *)0x0) {
    (*(code *)puStack_418[1])(&puStack_418);
  }
  if (ppuStack_598 == &puStack_5b8) {
    lVar11 = 0x20;
LAB_04acb9d2:
    (**(code **)((long)*ppuStack_598 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (ppuStack_598 != (undefined8 **)0x0) goto LAB_04acb9d2;
  }
  if ((uStack_570 & 1) != 0) {
    func_0x0412a280(uStack_560,uStack_570 & 0xfffffffffffffffe);
  }
  uStack_525 = 0;
  uStack_524 = 0;
  uStack_522 = 0;
  uStack_520 = 0;
  uStack_518 = 0;
  puStack_538 = (undefined *)0x3a4ad5b186795d27;
  bStack_530 = 0x14;
  _auStack_52f = 0x5f6661656c;
  uStack_52a = 0x6c62;
  bStack_528 = 0x6f;
  uStack_527 = 0x6b63;
  uStack_570 = 0;
  uStack_5b0 = 0;
  puStack_578 = (undefined *)0x0;
  puStack_5b8 = (undefined8 *)&UNK_0ef5b3a0;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puVar9 = puStack_5b8;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef5b178;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  puStack_5b8 = (undefined8 *)0x0;
  bStack_618 = (byte)puVar9;
  uStack_617 = (undefined4)((ulong)puVar9 >> 8);
  uStack_613 = (undefined2)((ulong)puVar9 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar9 >> 0x38);
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&puStack_358,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0ef5b1c8;
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  puVar9 = (undefined8 *)CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  if (puVar9 == (undefined8 *)0x0) {
    lVar11 = 0;
  }
  else {
    (*(code *)*puVar9)(&bStack_618,plVar8 + 0x2e);
    lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  }
  plVar13 = plVar8 + 1;
  plVar8[0x2e] = lVar11;
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar16 = plVar8 + 4;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef5b2a8;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0ef5b2f8;
  puVar9[0xe] = plVar16;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  puVar20 = puVar9 + 4;
  bStack_618 = (byte)puVar20;
  uStack_617 = (undefined4)((ulong)puVar20 >> 8);
  uStack_613 = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar20 >> 0x38);
  bStack_610 = (byte)puVar9;
  uStack_60f = (undefined4)((ulong)puVar9 >> 8);
  uStack_60b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_60a = (undefined1)((ulong)puVar9 >> 0x30);
  uStack_609 = (undefined1)((ulong)puVar9 >> 0x38);
  puVar10 = (undefined4 *)func_0x04b39e00(plVar15,&puStack_538,1);
  puVar19 = (uint *)(plVar8 + 0x11);
  puVar12 = *(uint **)(puVar10 + 0x24);
  if (puVar12 < *(uint **)(puVar10 + 0x26)) {
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[0] = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    puVar12[8] = 0;
    puVar12[9] = 0;
    if (puVar12 != puVar19) {
      puVar1 = puVar12 + 2;
      if ((*(byte *)(plVar8 + 0x12) & 1) == 0) {
        *(long *)(puVar12 + 6) = plVar8[0x14];
        lVar11 = plVar8[0x13];
        *(long *)puVar1 = plVar8[0x12];
        *(long *)(puVar12 + 4) = lVar11;
      }
      else {
        puStack_5c8 = puVar19;
        puStack_5c0 = puVar1;
        func_0x04885070(puVar1,plVar8[0x14],plVar8[0x13]);
        puVar19 = puStack_5c8;
      }
    }
    *(undefined8 *)puVar12 = *(undefined8 *)puVar19;
    *(undefined8 **)(puVar12 + 10) = puVar20;
    *(undefined8 **)(puVar12 + 0xc) = puVar9;
    LOCK();
    puVar9[1] = puVar9[1] + 1;
    UNLOCK();
    puVar12 = puVar12 + 0xe;
    *(uint **)(puVar10 + 0x24) = puVar12;
  }
  else {
    puVar12 = (uint *)func_0x04b3be50(puVar10 + 0x22,puVar19,&bStack_618);
  }
  plVar15 = plStack_5d8;
  *(uint **)(puVar10 + 0x24) = puVar12;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar14 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar14 = *plVar14 + 1;
    UNLOCK();
  }
  plVar14 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar2 = plVar14 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar14 = (long *)CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar2 = plVar14 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  LOCK();
  lVar11 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  uStack_4f8 = 0;
  uStack_4f0 = 0;
  uStack_4e8 = 0;
  (**(code **)(*plVar16 + 0x10))(plVar16,&uStack_4f8);
  if ((uStack_4f8 & 1) != 0) {
    func_0x0412a280(uStack_4e8,uStack_4f8 & 0xfffffffffffffffe);
  }
  if (puStack_578 != (undefined *)0x0) {
    (**(code **)(puStack_578 + 8))(&puStack_578);
  }
  if ((bStack_530 & 1) != 0) {
    func_0x0412a280(uStack_520,
                    CONCAT26(uStack_52a,CONCAT51(_auStack_52f,bStack_530)) & 0xfffffffffffffffe);
  }
  uStack_608 = 0;
  uStack_607 = 0;
  uStack_605 = 0;
  uStack_604 = 0;
  uStack_603 = 0;
  uStack_602 = 0;
  uStack_600 = 0;
  uStack_5f8 = 0;
  bStack_610 = 0xc;
  uStack_60f = 0x67696568;
  uStack_60b = 0x68;
  uStack_60a = 0x74;
  uStack_609 = 0;
  bStack_618 = 0;
  uStack_617 = 0xd5b8855;
  uStack_613 = 0x4060;
  uStack_611 = 0x22;
  bStack_530 = 0;
  _auStack_52f = 0;
  uStack_52a = 0;
  puStack_538 = &UNK_0ef5b598;
  plVar8 = (long *)func_0x04b39250(plVar15,&bStack_618,&puStack_538);
  *(undefined4 *)(plVar8 + 0x2a) = 4;
  uStack_458 = 0;
  uStack_450 = 0;
  uStack_448 = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_458);
  if ((uStack_458 & 1) != 0) {
    func_0x0412a280(uStack_448,uStack_458 & 0xfffffffffffffffe);
  }
  if (puStack_538 != (undefined *)0x0) {
    (**(code **)(puStack_538 + 8))(&puStack_538);
  }
  if ((bStack_610 & 1) != 0) {
    func_0x0412a280(uStack_600,
                    CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610)))) &
                    0xfffffffffffffffe);
  }
  uStack_608 = 0;
  uStack_607 = 0;
  uStack_605 = 0;
  uStack_604 = 0;
  uStack_603 = 0;
  uStack_602 = 0;
  uStack_600 = 0;
  uStack_5f8 = 0;
  bStack_610 = 0xc;
  uStack_60f = 0x69646172;
  uStack_60b = 0x75;
  uStack_60a = 0x73;
  uStack_609 = 0;
  bStack_618 = 0xcf;
  uStack_617 = 0x8342d569;
  uStack_613 = 0x64c4;
  uStack_611 = 0xa3;
  bStack_350 = 0;
  uStack_34f = 0;
  puStack_358 = &UNK_0ef5b5b0;
  plVar8 = (long *)func_0x04b39250(plVar15,&bStack_618,&puStack_358);
  *(undefined4 *)(plVar8 + 0x2a) = 3;
  uStack_438 = 0;
  uStack_430 = 0;
  uStack_428 = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_438);
  if ((uStack_438 & 1) != 0) {
    func_0x0412a280(uStack_428,uStack_438 & 0xfffffffffffffffe);
  }
  if (puStack_358 != (undefined *)0x0) {
    (**(code **)(puStack_358 + 8))(&puStack_358);
  }
  if ((bStack_610 & 1) != 0) {
    func_0x0412a280(uStack_600,
                    CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610)))) &
                    0xfffffffffffffffe);
  }
  uStack_4c4 = 0;
  uStack_4c0 = 0;
  uStack_4bf = 0;
  uStack_4bd = 0;
  uStack_4b8 = 0;
  bStack_4d0 = 0x16;
  uStack_4cf = 0x6e757274;
  auStack_4cb = (undefined1  [4])0x69775f6b;
  uStack_4c7 = 0x7464;
  uStack_4c5 = 0x68;
  puStack_4d8 = (undefined8 *)0x23f87548b6fadcd4;
  bStack_3d0 = 0;
  uStack_3cf = 0;
  auStack_3cb = (undefined1  [4])((uint)auStack_3cb & 0xff000000);
  uStack_5b0 = 0;
  puStack_3d8 = (undefined8 *)0x0;
  puStack_5b8 = (undefined8 *)&UNK_0ef5b7a8;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puVar9 = puStack_5b8;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef5b5d8;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  puStack_5b8 = (undefined8 *)0x0;
  bStack_618 = (byte)puVar9;
  uStack_617 = (undefined4)((ulong)puVar9 >> 8);
  uStack_613 = (undefined2)((ulong)puVar9 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar9 >> 0x38);
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&puStack_498,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0ef5b628;
  plVar8[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar8 + 0x2f) = 1;
  plVar8[0x30] = 0;
  plVar8[0x31] = 0;
  puVar9 = (undefined8 *)CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  if (puVar9 == (undefined8 *)0x0) {
    lVar11 = 0;
  }
  else {
    (*(code *)*puVar9)(&bStack_618,plVar8 + 0x30);
    lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  }
  bStack_618 = 0;
  uStack_617 = 0;
  uStack_613 = 0;
  uStack_611 = 0;
  plVar8[0x30] = lVar11;
  puVar19 = (uint *)(plVar8 + 0x12);
  if (plVar8 + 0x11 == (long *)&DAT_0f552078) {
    plVar8[0x15] = 0;
  }
  else {
    if ((*puVar19 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar8[0x14] = _DAT_0f552090;
        uVar5 = uRam000000000f55208c;
        uVar4 = _DAT_0f552088;
        uVar3 = uRam000000000f552084;
        *puVar19 = _DAT_0f552080;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar3;
        *(undefined4 *)(plVar8 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar5;
      }
      else {
        func_0x04885070(puVar19,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar22 = (_DAT_0f552080 & 1) != 0;
      lVar11 = 0xf552081;
      if (bVar22) {
        lVar11 = _DAT_0f552090;
      }
      uVar7 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar22) {
        uVar7 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puVar19,lVar11,uVar7);
    }
    lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
    plVar8[0x11] = _DAT_0f552078;
    plVar8[0x15] = 0;
    if (lVar11 != 0) {
      (**(code **)(lVar11 + 8))(&bStack_618);
    }
  }
  plVar13 = plVar8 + 1;
  puStack_5c0 = puVar19;
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  puStack_5c8 = (uint *)(plVar8 + 0x11);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef5b708;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0ef5b758;
  puVar9[0xe] = plVar8 + 4;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  puVar20 = puVar9 + 4;
  bStack_618 = (byte)puVar20;
  uStack_617 = (undefined4)((ulong)puVar20 >> 8);
  uStack_613 = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar20 >> 0x38);
  bStack_610 = (byte)puVar9;
  uStack_60f = (undefined4)((ulong)puVar9 >> 8);
  uStack_60b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_60a = (undefined1)((ulong)puVar9 >> 0x30);
  uStack_609 = (undefined1)((ulong)puVar9 >> 0x38);
  puVar10 = (undefined4 *)func_0x04b39e00(plVar15,&puStack_4d8,0);
  plVar15 = *(long **)(puVar10 + 0x24);
  if (plVar15 < *(long **)(puVar10 + 0x26)) {
    plVar15[2] = 0;
    plVar15[3] = 0;
    *plVar15 = 0;
    plVar15[1] = 0;
    plVar15[4] = 0;
    if ((uint *)plVar15 != puStack_5c8) {
      puVar19 = (uint *)(plVar15 + 1);
      if ((*puStack_5c0 & 1) == 0) {
        plVar15[3] = *(long *)(puStack_5c0 + 4);
        lVar11 = *(long *)(puStack_5c0 + 2);
        *(undefined8 *)puVar19 = *(undefined8 *)puStack_5c0;
        plVar15[2] = lVar11;
      }
      else {
        puStack_5c0 = puVar19;
        func_0x04885070(puVar19,plVar8[0x14],plVar8[0x13]);
      }
    }
    *plVar15 = *(long *)puStack_5c8;
    plVar15[5] = (long)puVar20;
    plVar15[6] = (long)puVar9;
    LOCK();
    puVar9[1] = puVar9[1] + 1;
    UNLOCK();
    plVar15 = plVar15 + 7;
    *(long **)(puVar10 + 0x24) = plVar15;
  }
  else {
    plVar15 = (long *)func_0x04b3be50(puVar10 + 0x22,puStack_5c8,&bStack_618);
  }
  plVar16 = plStack_5d8;
  *(long **)(puVar10 + 0x24) = plVar15;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar15 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar14 = plVar15 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar15 = (long *)CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar14 = plVar15 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  plVar15 = plStack_390;
  LOCK();
  lVar11 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  *(undefined4 *)(plVar8 + 0x2e) = 1;
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_308 = 0;
  (**(code **)(plVar8[4] + 0x10))(plVar8 + 4,&uStack_318);
  if ((uStack_318 & 1) != 0) {
    func_0x0412a280(uStack_308,uStack_318 & 0xfffffffffffffffe);
  }
  if (puStack_3d8 != (undefined8 *)0x0) {
    (*(code *)puStack_3d8[1])(&puStack_3d8);
  }
  if ((bStack_4d0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_4bd,CONCAT21(uStack_4bf,uStack_4c0)),
                    CONCAT35(auStack_4cb._0_3_,CONCAT41(uStack_4cf,bStack_4d0)) & 0xfffffffffffffffe
                   );
  }
  puStack_5a8 = (undefined *)0x0;
  uStack_5a0 = 0;
  puStack_5b8 = (undefined8 *)0x0;
  uStack_5b0 = 0;
  ppuStack_598 = (undefined8 **)0x0;
  func_0x0412f5e0(&uStack_5b0,&UNK_011d3bb0,0x1d);
  puStack_5b8 = (undefined8 *)0x31fd97cba10ae638;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  bStack_618 = 0xa0;
  uStack_617 = 0xef5b9;
  uStack_613 = 0;
  uStack_611 = 0;
  plVar8 = (long *)func_0x04b397d0(plVar16,&puStack_5b8,&bStack_618);
  uStack_298 = 0;
  uStack_290 = 0;
  uStack_288 = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_298);
  if ((uStack_298 & 1) != 0) {
    func_0x0412a280(uStack_288,uStack_298 & 0xfffffffffffffffe);
  }
  lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  if (lVar11 != 0) {
    (**(code **)(lVar11 + 8))(&bStack_618);
  }
  if ((uStack_5b0 & 1) != 0) {
    func_0x0412a280(uStack_5a0,uStack_5b0 & 0xfffffffffffffffe);
  }
  uStack_4bd = 0;
  uStack_4b8 = 0;
  bStack_4d0 = 0x24;
  uStack_4cf = _DAT_011ec534;
  auStack_4cb = (undefined1  [4])_UNK_011ec538;
  uStack_4c7 = (undefined2)_UNK_011ec53c;
  uStack_4c5 = (undefined1)((uint)_UNK_011ec53c >> 0x10);
  uStack_4c4._1_3_ = (undefined3)_UNK_011ec540;
  uStack_4c4 = CONCAT31(uStack_4c4._1_3_,(char)((uint)_UNK_011ec53c >> 0x18));
  uStack_4c0 = (undefined1)((uint)_UNK_011ec540 >> 0x18);
  uStack_4bf = 0x6563;
  puStack_4d8 = (undefined8 *)0x862a36eafe56a0ca;
  uStack_5b0 = 0;
  puStack_5b8 = (undefined8 *)&UNK_0ef5b9b8;
  plVar8 = (long *)func_0x04b397d0(plVar16,&puStack_4d8,&puStack_5b8);
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_2b8);
  if ((uStack_2b8 & 1) != 0) {
    func_0x0412a280(uStack_2a8,uStack_2b8 & 0xfffffffffffffffe);
  }
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  if ((bStack_4d0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_4bd,CONCAT21(uStack_4bf,uStack_4c0)),
                    CONCAT35(auStack_4cb._0_3_,CONCAT41(uStack_4cf,bStack_4d0)) & 0xfffffffffffffffe
                   );
  }
  uStack_47a = 0;
  uStack_478 = 0;
  bStack_490 = 0x2a;
  uStack_48f = _DAT_011d3bce;
  auStack_48b = (undefined1  [4])_UNK_011d3bd2;
  uStack_487 = (undefined2)_UNK_011d3bd6;
  uStack_485 = (undefined2)((uint)_UNK_011d3bd6 >> 0x10);
  uStack_483 = (undefined1)_UNK_011d3bda;
  uStack_482 = 0x5f73;
  uStack_480 = 99;
  uStack_47f = 0x65636e6168;
  puStack_498 = (undefined8 *)0xc60b1d9b6c767e85;
  bStack_4d0 = 0;
  uStack_4cf = 0;
  auStack_4cb = (undefined1  [4])((uint)auStack_4cb & 0xff000000);
  puStack_4d8 = (undefined8 *)&UNK_0ef5b9d0;
  plVar8 = (long *)func_0x04b397d0(plVar16,&puStack_498,&puStack_4d8);
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_2d8);
  if ((uStack_2d8 & 1) != 0) {
    func_0x0412a280(uStack_2c8,uStack_2d8 & 0xfffffffffffffffe);
  }
  if (puStack_4d8 != (undefined8 *)0x0) {
    (*(code *)puStack_4d8[1])(&puStack_4d8);
  }
  if ((bStack_490 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_47a,CONCAT51(uStack_47f,uStack_480)),
                    CONCAT35(auStack_48b._0_3_,CONCAT41(uStack_48f,bStack_490)) & 0xfffffffffffffffe
                   );
  }
  uStack_378 = 0;
  uStack_370 = 0;
  uStack_388 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  func_0x0412f5e0(&uStack_380,&UNK_011ec547,0x1f);
  uStack_388 = 0x25c6e132646a705b;
  bStack_490 = 0;
  uStack_48f = 0;
  auStack_48b = (undefined1  [4])((uint)auStack_48b & 0xff000000);
  puStack_498 = (undefined8 *)&UNK_0ef5b9e8;
  plVar8 = (long *)func_0x04b397d0(plVar16,&uStack_388,&puStack_498);
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_2f8);
  if ((uStack_2f8 & 1) != 0) {
    func_0x0412a280(uStack_2e8,uStack_2f8 & 0xfffffffffffffffe);
  }
  if (puStack_498 != (undefined8 *)0x0) {
    (*(code *)puStack_498[1])(&puStack_498);
  }
  if ((uStack_380 & 1) != 0) {
    func_0x0412a280(uStack_370,uStack_380 & 0xfffffffffffffffe);
  }
  if (plStack_d8 == alStack_f8) {
    lVar11 = 0x20;
LAB_04acc7ea:
    (**(code **)(*plStack_d8 + lVar11))();
    plVar8 = (long *)plVar15[4];
    if (plVar8 != (long *)0x0) goto LAB_04acc7a2;
LAB_04acc7f9:
    plStack_108 = (long *)0x0;
  }
  else {
    lVar11 = 0x28;
    if (plStack_d8 != (long *)0x0) goto LAB_04acc7ea;
    plVar8 = (long *)plVar15[4];
    if (plVar8 == (long *)0x0) goto LAB_04acc7f9;
LAB_04acc7a2:
    if (plVar8 == plVar15) {
      plStack_108 = alStack_128;
      (**(code **)(*plVar8 + 0x18))();
    }
    else {
      plStack_108 = (long *)(**(code **)(*plVar8 + 0x10))();
    }
  }
  puStack_578 = (undefined *)0x0;
  uStack_570 = 0x635f79636e616618;
  uStack_568 = 0x79706f6e61;
  ppuStack_558 = (undefined **)0x0;
  pbVar18 = (byte *)((long)&uStack_570 + 1);
  uVar7 = func_0x0eee2e90(pbVar18);
  puStack_578 = (undefined *)0xcbf29ce484222325;
  if (uVar7 != 0) {
    uVar17 = (ulong)((uint)uVar7 & 7);
    if (uVar7 < 8) {
      puStack_578 = (undefined *)0xcbf29ce484222325;
    }
    else {
      uVar7 = uVar7 & 0xfffffffffffffff8;
      puStack_578 = (undefined *)0xcbf29ce484222325;
      do {
        puStack_578 = (undefined *)
                      (((((((((long)puStack_578 * 0x100000001b3 ^ (ulong)*pbVar18) * 0x100000001b3 ^
                            (ulong)pbVar18[1]) * 0x100000001b3 ^ (ulong)pbVar18[2]) * 0x100000001b3
                          ^ (ulong)pbVar18[3]) * 0x100000001b3 ^ (ulong)pbVar18[4]) * 0x100000001b3
                        ^ (ulong)pbVar18[5]) * 0x100000001b3 ^ (ulong)pbVar18[6]) * 0x100000001b3 ^
                      (ulong)pbVar18[7]);
        pbVar18 = pbVar18 + 8;
        uVar7 = uVar7 - 8;
      } while (uVar7 != 0);
    }
    if (uVar17 != 0) {
      uVar7 = 0;
      do {
        puStack_578 = (undefined *)((long)puStack_578 * 0x100000001b3 ^ (ulong)pbVar18[uVar7]);
        uVar7 = uVar7 + 1;
      } while (uVar17 != uVar7);
    }
  }
  if (plStack_108 == (long *)0x0) {
    ppuStack_598 = (undefined8 **)0x0;
    bStack_3d0 = 0;
    uStack_3cf = 0;
    auStack_3cb = (undefined1  [4])((uint)auStack_3cb & 0xff000000);
    puStack_3d8 = (undefined8 *)&UNK_0ef5bbf8;
    ppuStack_3a8 = (undefined8 **)0x0;
  }
  else {
    if (plStack_108 == alStack_128) {
      ppuStack_598 = &puStack_5b8;
      (**(code **)(*plStack_108 + 0x18))();
    }
    else {
      ppuStack_598 = (undefined8 **)(**(code **)(*plStack_108 + 0x10))();
    }
    ppuStack_3a8 = ppuStack_598;
    bStack_3d0 = 0;
    uStack_3cf = 0;
    auStack_3cb = (undefined1  [4])((uint)auStack_3cb & 0xff000000);
    puStack_3d8 = (undefined8 *)&UNK_0ef5bbf8;
    if (ppuStack_598 == (undefined8 **)0x0) {
      ppuStack_3a8 = (undefined8 **)0x0;
    }
    else if (ppuStack_598 == &puStack_5b8) {
      ppuStack_3a8 = (undefined8 **)(auStack_3cb + 3);
      (*(code *)(*ppuStack_598)[3])(ppuStack_598);
    }
    else {
      ppuStack_598 = (undefined8 **)0x0;
    }
  }
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef5ba10;
  bStack_618 = 0;
  uStack_617 = 0;
  uStack_613 = 0;
  uStack_611 = 0;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  if (puStack_3d8 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_3d8)(&puStack_3d8,&bStack_618);
    puVar9 = puStack_3d8;
  }
  puStack_3d8 = (undefined8 *)0x0;
  bStack_618 = (byte)puVar9;
  uStack_617 = (undefined4)((ulong)puVar9 >> 8);
  uStack_613 = (undefined2)((ulong)puVar9 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar9 >> 0x38);
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&puStack_538,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0ef5ba60;
  pbVar18 = (byte *)(plVar8 + 0x2e);
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  *(undefined1 *)(plVar8 + 0x36) = 0;
  if (pbVar18 != &bStack_618) {
    puVar9 = (undefined8 *)CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)))
    ;
    if (puVar9 == (undefined8 *)0x0) {
      lVar11 = 0;
    }
    else {
      (*(code *)*puVar9)(&bStack_618,pbVar18);
      lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
    }
    bStack_618 = 0;
    uStack_617 = 0;
    uStack_613 = 0;
    uStack_611 = 0;
    *(long *)pbVar18 = lVar11;
  }
  plVar15 = plVar8 + 4;
  puVar19 = (uint *)(plVar8 + 0x12);
  if (plVar8 + 0x11 != (long *)&DAT_0f552108) {
    if ((*puVar19 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar8[0x14] = _DAT_0f552120;
        uVar5 = uRam000000000f55211c;
        uVar4 = _DAT_0f552118;
        uVar3 = uRam000000000f552114;
        *puVar19 = _DAT_0f552110;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar3;
        *(undefined4 *)(plVar8 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar5;
      }
      else {
        func_0x04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar22 = (_DAT_0f552110 & 1) != 0;
      lVar11 = 0xf552111;
      if (bVar22) {
        lVar11 = _DAT_0f552120;
      }
      uVar7 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar22) {
        uVar7 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar19,lVar11,uVar7);
    }
  }
  plVar13 = plVar8 + 1;
  plVar8[0x11] = _DAT_0f552108;
  plVar8[0x15] = 0;
  lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  if (lVar11 != 0) {
    (**(code **)(lVar11 + 8))(&bStack_618);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  plStack_5d8 = plVar8 + 0x11;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef5bb58;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0ef5bba8;
  puVar9[0xe] = plVar15;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  puVar20 = puVar9 + 4;
  bStack_618 = (byte)puVar20;
  uStack_617 = (undefined4)((ulong)puVar20 >> 8);
  uStack_613 = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar20 >> 0x38);
  bStack_610 = (byte)puVar9;
  uStack_60f = (undefined4)((ulong)puVar9 >> 8);
  uStack_60b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_60a = (undefined1)((ulong)puVar9 >> 0x30);
  uStack_609 = (undefined1)((ulong)puVar9 >> 0x38);
  puStack_5c8 = puVar19;
  puVar10 = (undefined4 *)func_0x04b081a0(uStack_5d0,&puStack_578,0);
  plVar16 = *(long **)(puVar10 + 0x24);
  if (plVar16 < *(long **)(puVar10 + 0x26)) {
    plVar16[2] = 0;
    plVar16[3] = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[4] = 0;
    if (plVar16 == plStack_5d8) {
LAB_04acccf6:
      *plVar16 = *plStack_5d8;
      plVar16[5] = (long)puVar20;
      plVar16[6] = (long)puVar9;
LAB_04accd80:
      LOCK();
      puVar9[1] = puVar9[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_5c8 & 1) == 0) {
        plVar16[3] = *(long *)(puStack_5c8 + 4);
        lVar11 = *(long *)(puStack_5c8 + 2);
        plVar16[1] = *(long *)puStack_5c8;
        plVar16[2] = lVar11;
        goto LAB_04acccf6;
      }
      func_0x04885070(plVar16 + 1,plVar8[0x14],plVar8[0x13]);
      *plVar16 = *plStack_5d8;
      puVar9 = (undefined8 *)
               CONCAT17(uStack_609,
                        CONCAT16(uStack_60a,CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
      plVar16[5] = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
      plVar16[6] = CONCAT17(uStack_609,
                            CONCAT16(uStack_60a,CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))
                                    ));
      if (puVar9 != (undefined8 *)0x0) goto LAB_04accd80;
    }
    plVar16 = plVar16 + 7;
    *(long **)(puVar10 + 0x24) = plVar16;
  }
  else {
    plVar16 = (long *)func_0x04b0c1b0(puVar10 + 0x22,plStack_5d8,&bStack_618);
  }
  *(long **)(puVar10 + 0x24) = plVar16;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar16 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar16 = *plVar16 + 1;
    UNLOCK();
  }
  plVar16 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar14 = plVar16 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar16 = (long *)CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar14 = plVar16 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  LOCK();
  lVar11 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  if (puStack_3d8 != (undefined8 *)0x0) {
    (*(code *)puStack_3d8[1])(&puStack_3d8);
  }
  if (ppuStack_598 == &puStack_5b8) {
    lVar11 = 0x20;
LAB_04acd24b:
    (**(code **)((long)*ppuStack_598 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (ppuStack_598 != (undefined8 **)0x0) goto LAB_04acd24b;
  }
  if ((uStack_570 & 1) != 0) {
    func_0x0412a280(uStack_560,uStack_570 & 0xfffffffffffffffe);
  }
  uStack_608 = 0;
  uStack_607 = 0;
  uStack_605 = 0;
  uStack_604 = 0;
  uStack_603 = 0;
  uStack_602 = 0;
  uStack_600 = 0;
  uStack_5f8 = 0;
  bStack_610 = 0xc;
  uStack_60f = 0x67696568;
  uStack_60b = 0x68;
  uStack_60a = 0x74;
  uStack_609 = 0;
  bStack_618 = 0;
  uStack_617 = 0xd5b8855;
  uStack_613 = 0x4060;
  uStack_611 = 0x22;
  uStack_570 = 0;
  puStack_578 = &UNK_0ef5be48;
  plVar8 = (long *)func_0x04b43dc0(plVar15,&bStack_618,&puStack_578);
  *(undefined4 *)(plVar8 + 0x2a) = 1;
  puStack_498 = (undefined8 *)0x0;
  bStack_490 = 0;
  uStack_48f = 0;
  auStack_48b._0_3_ = 0;
  auStack_48b[3] = 0;
  uStack_487 = 0;
  uStack_485 = 0;
  uStack_483 = 0;
  uStack_482 = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,&puStack_498);
  if (((ulong)puStack_498 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_482,
                             CONCAT15(uStack_483,
                                      CONCAT23(uStack_485,CONCAT21(uStack_487,auStack_48b[3])))),
                    (ulong)puStack_498 & 0xfffffffffffffffe);
  }
  if (puStack_578 != (undefined *)0x0) {
    (**(code **)(puStack_578 + 8))(&puStack_578);
  }
  if ((bStack_610 & 1) != 0) {
    func_0x0412a280(uStack_600,
                    CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610)))) &
                    0xfffffffffffffffe);
  }
  uStack_608 = 0;
  uStack_607 = 0;
  uStack_605 = 0;
  uStack_604 = 0;
  uStack_603 = 0;
  uStack_602 = 0;
  uStack_600 = 0;
  uStack_5f8 = 0;
  bStack_610 = 0xc;
  uStack_60f = 0x69646172;
  uStack_60b = 0x75;
  uStack_60a = 0x73;
  uStack_609 = 0;
  bStack_618 = 0xcf;
  uStack_617 = 0x8342d569;
  uStack_613 = 0x64c4;
  uStack_611 = 0xa3;
  bStack_530 = 0;
  _auStack_52f = 0;
  uStack_52a = 0;
  puStack_538 = &UNK_0ef5be60;
  plVar8 = (long *)func_0x04b43dc0(plVar15,&bStack_618,&puStack_538);
  *(undefined4 *)(plVar8 + 0x2a) = 0;
  puStack_418 = (undefined8 *)0x0;
  bStack_410 = 0;
  uStack_40f = 0;
  uStack_408 = 0;
  uStack_407 = 0;
  uStack_405 = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,&puStack_418);
  if (((ulong)puStack_418 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_405,CONCAT21(uStack_407,uStack_408)),
                    (ulong)puStack_418 & 0xfffffffffffffffe);
  }
  if (puStack_538 != (undefined *)0x0) {
    (**(code **)(puStack_538 + 8))(&puStack_538);
  }
  if ((bStack_610 & 1) != 0) {
    func_0x0412a280(uStack_600,
                    CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610)))) &
                    0xfffffffffffffffe);
  }
  uStack_4c5 = 0;
  uStack_4c4 = 0;
  uStack_4c0 = 0;
  uStack_4bf = 0;
  uStack_4bd = 0;
  uStack_4b8 = 0;
  puStack_4d8 = (undefined8 *)0x3a4ad5b186795d27;
  bStack_4d0 = 0x14;
  uStack_4cf = 0x6661656c;
  auStack_4cb = (undefined1  [4])0x6f6c625f;
  uStack_4c7 = 0x6b63;
  bStack_350 = 0;
  uStack_34f = 0;
  uStack_5b0 = 0;
  puStack_358 = (undefined *)0x0;
  puStack_5b8 = (undefined8 *)&UNK_0ef5c058;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puVar9 = puStack_5b8;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef5be88;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  puStack_5b8 = (undefined8 *)0x0;
  bStack_618 = (byte)puVar9;
  uStack_617 = (undefined4)((ulong)puVar9 >> 8);
  uStack_613 = (undefined2)((ulong)puVar9 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar9 >> 0x38);
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&uStack_388,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0ef5bed8;
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  puVar9 = (undefined8 *)CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  if (puVar9 == (undefined8 *)0x0) {
    lVar11 = 0;
  }
  else {
    (*(code *)*puVar9)(&bStack_618,plVar8 + 0x2e);
    lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  }
  plVar13 = plVar8 + 1;
  plVar8[0x2e] = lVar11;
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  plStack_5d8 = plVar13;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar13 = plVar8 + 4;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef5bfb8;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0ef5c008;
  puVar9[0xe] = plVar13;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  puVar20 = puVar9 + 4;
  bStack_618 = (byte)puVar20;
  uStack_617 = (undefined4)((ulong)puVar20 >> 8);
  uStack_613 = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar20 >> 0x38);
  bStack_610 = (byte)puVar9;
  uStack_60f = (undefined4)((ulong)puVar9 >> 8);
  uStack_60b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_60a = (undefined1)((ulong)puVar9 >> 0x30);
  uStack_609 = (undefined1)((ulong)puVar9 >> 0x38);
  puVar10 = (undefined4 *)func_0x04b44340(plVar15,&puStack_4d8);
  plVar15 = plVar8 + 0x11;
  plVar16 = *(long **)(puVar10 + 0x24);
  if (plVar16 < *(long **)(puVar10 + 0x26)) {
    plVar16[2] = 0;
    plVar16[3] = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[4] = 0;
    if (plVar16 != plVar15) {
      puVar19 = (uint *)(plVar16 + 1);
      if ((*(byte *)(plVar8 + 0x12) & 1) == 0) {
        plVar16[3] = plVar8[0x14];
        lVar11 = plVar8[0x13];
        *(long *)puVar19 = plVar8[0x12];
        plVar16[2] = lVar11;
      }
      else {
        puStack_5c8 = puVar19;
        func_0x04885070(puVar19,plVar8[0x14],plVar8[0x13]);
      }
    }
    *plVar16 = *plVar15;
    plVar16[5] = (long)puVar20;
    plVar16[6] = (long)puVar9;
    LOCK();
    puVar9[1] = puVar9[1] + 1;
    UNLOCK();
    plVar16 = plVar16 + 7;
    *(long **)(puVar10 + 0x24) = plVar16;
  }
  else {
    plVar16 = (long *)func_0x04b46160(puVar10 + 0x22,plVar15,&bStack_618);
  }
  plVar15 = plStack_5d8;
  *(long **)(puVar10 + 0x24) = plVar16;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar16 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar16 = *plVar16 + 1;
    UNLOCK();
  }
  plVar16 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar14 = plVar16 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar16 = (long *)CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar14 = plVar16 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  LOCK();
  lVar11 = *plVar15;
  *plVar15 = *plVar15 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  bStack_618 = 0;
  uStack_617 = 0;
  uStack_613 = 0;
  uStack_611 = 0;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  uStack_608 = 0;
  uStack_607 = 0;
  uStack_605 = 0;
  uStack_604 = 0;
  uStack_603 = 0;
  uStack_602 = 0;
  (**(code **)(*plVar13 + 0x10))(plVar13,&bStack_618);
  plVar8 = plStack_390;
  if ((bStack_618 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_602,
                             CONCAT15(uStack_603,
                                      CONCAT14(uStack_604,
                                               CONCAT13(uStack_605,CONCAT21(uStack_607,uStack_608)))
                                     )),
                    CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618))) &
                    0xfffffffffffffffe);
  }
  if (puStack_358 != (undefined *)0x0) {
    (**(code **)(puStack_358 + 8))(&puStack_358);
  }
  if ((bStack_4d0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_4bd,CONCAT21(uStack_4bf,uStack_4c0)),
                    CONCAT35(auStack_4cb._0_3_,CONCAT41(uStack_4cf,bStack_4d0)) & 0xfffffffffffffffe
                   );
  }
  if (plStack_108 == alStack_128) {
    lVar11 = 0x20;
LAB_04acd56f:
    (**(code **)(*plStack_108 + lVar11))();
    plVar15 = (long *)plVar8[4];
    if (plVar15 != (long *)0x0) goto LAB_04acd527;
LAB_04acd57e:
    plStack_138 = (long *)0x0;
  }
  else {
    lVar11 = 0x28;
    if (plStack_108 != (long *)0x0) goto LAB_04acd56f;
    plVar15 = (long *)plVar8[4];
    if (plVar15 == (long *)0x0) goto LAB_04acd57e;
LAB_04acd527:
    if (plVar15 == plVar8) {
      plStack_138 = alStack_158;
      (**(code **)(*plVar15 + 0x18))();
    }
    else {
      plStack_138 = (long *)(**(code **)(*plVar15 + 0x10))();
    }
  }
  puStack_538 = (undefined *)0x0;
  bStack_530 = 0x1e;
  _auStack_52f = 0x72676e616d;
  uStack_52a = 0x766f;
  bStack_528 = 0x65;
  uStack_527 = 0x635f;
  uStack_525 = 0x61;
  uStack_524 = 0x6f6e;
  uStack_522 = 0x7970;
  pbVar18 = auStack_52f;
  uStack_520 = 0;
  uStack_518 = 0;
  uVar7 = func_0x0eee2e90(pbVar18);
  puStack_538 = (undefined *)0xcbf29ce484222325;
  if (uVar7 != 0) {
    uVar17 = (ulong)((uint)uVar7 & 7);
    if (uVar7 < 8) {
      puStack_538 = (undefined *)0xcbf29ce484222325;
    }
    else {
      uVar7 = uVar7 & 0xfffffffffffffff8;
      puStack_538 = (undefined *)0xcbf29ce484222325;
      do {
        puStack_538 = (undefined *)
                      (((((((((long)puStack_538 * 0x100000001b3 ^ (ulong)*pbVar18) * 0x100000001b3 ^
                            (ulong)pbVar18[1]) * 0x100000001b3 ^ (ulong)pbVar18[2]) * 0x100000001b3
                          ^ (ulong)pbVar18[3]) * 0x100000001b3 ^ (ulong)pbVar18[4]) * 0x100000001b3
                        ^ (ulong)pbVar18[5]) * 0x100000001b3 ^ (ulong)pbVar18[6]) * 0x100000001b3 ^
                      (ulong)pbVar18[7]);
        pbVar18 = pbVar18 + 8;
        uVar7 = uVar7 - 8;
      } while (uVar7 != 0);
    }
    if (uVar17 != 0) {
      uVar7 = 0;
      do {
        puStack_538 = (undefined *)((long)puStack_538 * 0x100000001b3 ^ (ulong)pbVar18[uVar7]);
        uVar7 = uVar7 + 1;
      } while (uVar17 != uVar7);
    }
  }
  if (plStack_138 == (long *)0x0) {
    ppuStack_558 = (undefined **)0x0;
    uStack_5b0 = 0;
    puStack_5b8 = (undefined8 *)&UNK_0ef5c268;
    ppuStack_588 = (undefined **)0x0;
  }
  else {
    if (plStack_138 == alStack_158) {
      ppuStack_558 = &puStack_578;
      (**(code **)(*plStack_138 + 0x18))();
    }
    else {
      ppuStack_558 = (undefined **)(**(code **)(*plStack_138 + 0x10))();
    }
    ppuStack_588 = ppuStack_558;
    uStack_5b0 = 0;
    puStack_5b8 = (undefined8 *)&UNK_0ef5c268;
    if (ppuStack_558 == (undefined **)0x0) {
      ppuStack_588 = (undefined **)0x0;
    }
    else if (ppuStack_558 == &puStack_578) {
      ppuStack_588 = &puStack_5a8;
      (**(code **)(*ppuStack_558 + 0x18))(ppuStack_558);
    }
    else {
      ppuStack_558 = (undefined **)0x0;
    }
  }
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef5c080;
  bStack_618 = 0;
  uStack_617 = 0;
  uStack_613 = 0;
  uStack_611 = 0;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  if (puStack_5b8 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_5b8)(&puStack_5b8,&bStack_618);
    puVar9 = puStack_5b8;
  }
  puStack_5b8 = (undefined8 *)0x0;
  bStack_618 = (byte)puVar9;
  uStack_617 = (undefined4)((ulong)puVar9 >> 8);
  uStack_613 = (undefined2)((ulong)puVar9 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar9 >> 0x38);
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&puStack_358,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar15 = plVar8 + 0x11;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0ef5c0d0;
  pbVar18 = (byte *)(plVar8 + 0x2e);
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  *(undefined1 *)(plVar8 + 0x36) = 0;
  if (pbVar18 != &bStack_618) {
    puVar9 = (undefined8 *)CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)))
    ;
    if (puVar9 == (undefined8 *)0x0) {
      lVar11 = 0;
    }
    else {
      (*(code *)*puVar9)(&bStack_618,pbVar18);
      lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
    }
    bStack_618 = 0;
    uStack_617 = 0;
    uStack_613 = 0;
    uStack_611 = 0;
    *(long *)pbVar18 = lVar11;
  }
  puVar19 = (uint *)(plVar8 + 0x12);
  if (plVar15 != (long *)&DAT_0f552108) {
    if ((*puVar19 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar8[0x14] = _DAT_0f552120;
        uVar5 = uRam000000000f55211c;
        uVar4 = _DAT_0f552118;
        uVar3 = uRam000000000f552114;
        *puVar19 = _DAT_0f552110;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar3;
        *(undefined4 *)(plVar8 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar5;
      }
      else {
        func_0x04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar22 = (_DAT_0f552110 & 1) != 0;
      lVar11 = 0xf552111;
      if (bVar22) {
        lVar11 = _DAT_0f552120;
      }
      uVar7 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar22) {
        uVar7 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar19,lVar11,uVar7);
    }
  }
  plVar13 = plVar8 + 1;
  plVar8[0x11] = _DAT_0f552108;
  plVar8[0x15] = 0;
  lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  plStack_5d8 = plVar15;
  if (lVar11 != 0) {
    (**(code **)(lVar11 + 8))(&bStack_618);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  puStack_5c8 = puVar19;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef5c1c8;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0ef5c218;
  puVar9[0xe] = plVar8 + 4;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  puVar20 = puVar9 + 4;
  bStack_618 = (byte)puVar20;
  uStack_617 = (undefined4)((ulong)puVar20 >> 8);
  uStack_613 = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar20 >> 0x38);
  bStack_610 = (byte)puVar9;
  uStack_60f = (undefined4)((ulong)puVar9 >> 8);
  uStack_60b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_60a = (undefined1)((ulong)puVar9 >> 0x30);
  uStack_609 = (undefined1)((ulong)puVar9 >> 0x38);
  puVar10 = (undefined4 *)func_0x04b081a0(uStack_5d0,&puStack_538,0);
  plVar15 = *(long **)(puVar10 + 0x24);
  if (plVar15 < *(long **)(puVar10 + 0x26)) {
    plVar15[2] = 0;
    plVar15[3] = 0;
    *plVar15 = 0;
    plVar15[1] = 0;
    plVar15[4] = 0;
    if (plVar15 == plStack_5d8) {
LAB_04acda3c:
      *plVar15 = *plStack_5d8;
      plVar15[5] = (long)puVar20;
      plVar15[6] = (long)puVar9;
LAB_04acdaa3:
      LOCK();
      puVar9[1] = puVar9[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_5c8 & 1) == 0) {
        plVar15[3] = *(long *)(puStack_5c8 + 4);
        lVar11 = *(long *)(puStack_5c8 + 2);
        plVar15[1] = *(long *)puStack_5c8;
        plVar15[2] = lVar11;
        goto LAB_04acda3c;
      }
      func_0x04885070(plVar15 + 1,plVar8[0x14],plVar8[0x13]);
      *plVar15 = *plStack_5d8;
      puVar9 = (undefined8 *)
               CONCAT17(uStack_609,
                        CONCAT16(uStack_60a,CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
      plVar15[5] = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
      plVar15[6] = CONCAT17(uStack_609,
                            CONCAT16(uStack_60a,CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))
                                    ));
      if (puVar9 != (undefined8 *)0x0) goto LAB_04acdaa3;
    }
    plVar15 = plVar15 + 7;
    *(long **)(puVar10 + 0x24) = plVar15;
  }
  else {
    plVar15 = (long *)func_0x04b0c1b0(puVar10 + 0x22,plStack_5d8,&bStack_618);
  }
  plVar16 = plStack_390;
  *(long **)(puVar10 + 0x24) = plVar15;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar15 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar14 = plVar15 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar15 = (long *)CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar14 = plVar15 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  LOCK();
  lVar11 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  if (ppuStack_558 == &puStack_578) {
    lVar11 = 0x20;
LAB_04acdc85:
    (**(code **)(*ppuStack_558 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (ppuStack_558 != (undefined **)0x0) goto LAB_04acdc85;
  }
  if ((bStack_530 & 1) != 0) {
    func_0x0412a280(uStack_520,
                    CONCAT26(uStack_52a,CONCAT51(_auStack_52f,bStack_530)) & 0xfffffffffffffffe);
  }
  func_0x04b47e90(plVar8 + 4);
  if (plStack_138 == alStack_158) {
    lVar11 = 0x20;
LAB_04acdca3:
    (**(code **)(*plStack_138 + lVar11))();
    plVar8 = (long *)plVar16[4];
    if (plVar8 != (long *)0x0) goto LAB_04acdc1d;
LAB_04acdcb6:
    plStack_168 = (long *)0x0;
  }
  else {
    lVar11 = 0x28;
    if (plStack_138 != (long *)0x0) goto LAB_04acdca3;
    plVar8 = (long *)plVar16[4];
    if (plVar8 == (long *)0x0) goto LAB_04acdcb6;
LAB_04acdc1d:
    if (plVar8 == plVar16) {
      plStack_168 = alStack_188;
      (**(code **)(*plVar8 + 0x18))();
    }
    else {
      plStack_168 = (long *)(**(code **)(*plVar8 + 0x10))();
    }
  }
  puStack_578 = (undefined *)0x0;
  uStack_570 = 0x61635f6167656d16;
  uStack_568 = 0x79706f6e;
  ppuStack_558 = (undefined **)0x0;
  pbVar18 = (byte *)((long)&uStack_570 + 1);
  uVar7 = func_0x0eee2e90(pbVar18);
  puStack_578 = (undefined *)0xcbf29ce484222325;
  if (uVar7 != 0) {
    uVar17 = (ulong)((uint)uVar7 & 7);
    if (uVar7 < 8) {
      puStack_578 = (undefined *)0xcbf29ce484222325;
    }
    else {
      uVar7 = uVar7 & 0xfffffffffffffff8;
      puStack_578 = (undefined *)0xcbf29ce484222325;
      do {
        puStack_578 = (undefined *)
                      (((((((((long)puStack_578 * 0x100000001b3 ^ (ulong)*pbVar18) * 0x100000001b3 ^
                            (ulong)pbVar18[1]) * 0x100000001b3 ^ (ulong)pbVar18[2]) * 0x100000001b3
                          ^ (ulong)pbVar18[3]) * 0x100000001b3 ^ (ulong)pbVar18[4]) * 0x100000001b3
                        ^ (ulong)pbVar18[5]) * 0x100000001b3 ^ (ulong)pbVar18[6]) * 0x100000001b3 ^
                      (ulong)pbVar18[7]);
        pbVar18 = pbVar18 + 8;
        uVar7 = uVar7 - 8;
      } while (uVar7 != 0);
    }
    if (uVar17 != 0) {
      uVar7 = 0;
      do {
        puStack_578 = (undefined *)((long)puStack_578 * 0x100000001b3 ^ (ulong)pbVar18[uVar7]);
        uVar7 = uVar7 + 1;
      } while (uVar17 != uVar7);
    }
  }
  if (plStack_168 == (long *)0x0) {
    ppuStack_598 = (undefined8 **)0x0;
    bStack_490 = 0;
    uStack_48f = 0;
    auStack_48b = (undefined1  [4])((uint)auStack_48b[3] << 0x18);
    puStack_498 = (undefined8 *)&UNK_0ef5e760;
    ppuStack_468 = (undefined8 **)0x0;
  }
  else {
    if (plStack_168 == alStack_188) {
      ppuStack_598 = &puStack_5b8;
      (**(code **)(*plStack_168 + 0x18))();
    }
    else {
      ppuStack_598 = (undefined8 **)(**(code **)(*plStack_168 + 0x10))();
    }
    ppuStack_468 = ppuStack_598;
    bStack_490 = 0;
    uStack_48f = 0;
    auStack_48b = (undefined1  [4])((uint)auStack_48b[3] << 0x18);
    puStack_498 = (undefined8 *)&UNK_0ef5e760;
    if (ppuStack_598 == (undefined8 **)0x0) {
      ppuStack_468 = (undefined8 **)0x0;
    }
    else if (ppuStack_598 == &puStack_5b8) {
      ppuStack_468 = (undefined8 **)(auStack_48b + 3);
      (*(code *)(*ppuStack_598)[3])(ppuStack_598);
    }
    else {
      ppuStack_598 = (undefined8 **)0x0;
    }
  }
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef5e578;
  bStack_618 = 0;
  uStack_617 = 0;
  uStack_613 = 0;
  uStack_611 = 0;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  if (puStack_498 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_498)(&puStack_498,&bStack_618);
    puVar9 = puStack_498;
  }
  puStack_498 = (undefined8 *)0x0;
  bStack_618 = (byte)puVar9;
  uStack_617 = (undefined4)((ulong)puVar9 >> 8);
  uStack_613 = (undefined2)((ulong)puVar9 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar9 >> 0x38);
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&puStack_538,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar15 = plVar8 + 0x11;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0ef5e5c8;
  pbVar18 = (byte *)(plVar8 + 0x2e);
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  *(undefined1 *)(plVar8 + 0x36) = 0;
  if (pbVar18 != &bStack_618) {
    puVar9 = (undefined8 *)CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)))
    ;
    if (puVar9 == (undefined8 *)0x0) {
      lVar11 = 0;
    }
    else {
      (*(code *)*puVar9)(&bStack_618,pbVar18);
      lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
    }
    bStack_618 = 0;
    uStack_617 = 0;
    uStack_613 = 0;
    uStack_611 = 0;
    *(long *)pbVar18 = lVar11;
  }
  plStack_5d8 = plVar8 + 4;
  puVar19 = (uint *)(plVar8 + 0x12);
  if (plVar15 != (long *)&DAT_0f552108) {
    if ((*puVar19 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar8[0x14] = _DAT_0f552120;
        uVar5 = uRam000000000f55211c;
        uVar4 = _DAT_0f552118;
        uVar3 = uRam000000000f552114;
        *puVar19 = _DAT_0f552110;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar3;
        *(undefined4 *)(plVar8 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar5;
      }
      else {
        func_0x04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar22 = (_DAT_0f552110 & 1) != 0;
      lVar11 = 0xf552111;
      if (bVar22) {
        lVar11 = _DAT_0f552120;
      }
      uVar7 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar22) {
        uVar7 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar19,lVar11,uVar7);
    }
  }
  plVar13 = plVar8 + 1;
  plVar8[0x11] = _DAT_0f552108;
  plVar8[0x15] = 0;
  lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  if (lVar11 != 0) {
    (**(code **)(lVar11 + 8))(&bStack_618);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef5e6c0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0ef5e710;
  puVar9[0xe] = plStack_5d8;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  puVar20 = puVar9 + 4;
  bStack_618 = (byte)puVar20;
  uStack_617 = (undefined4)((ulong)puVar20 >> 8);
  uStack_613 = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar20 >> 0x38);
  bStack_610 = (byte)puVar9;
  uStack_60f = (undefined4)((ulong)puVar9 >> 8);
  uStack_60b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_60a = (undefined1)((ulong)puVar9 >> 0x30);
  uStack_609 = (undefined1)((ulong)puVar9 >> 0x38);
  puStack_5c8 = puVar19;
  puVar10 = (undefined4 *)func_0x04b081a0(uStack_5d0,&puStack_578,0);
  plVar16 = *(long **)(puVar10 + 0x24);
  if (plVar16 < *(long **)(puVar10 + 0x26)) {
    plVar16[2] = 0;
    plVar16[3] = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[4] = 0;
    if (plVar16 == plVar15) {
LAB_04ace195:
      *plVar16 = *plVar15;
      plVar16[5] = (long)puVar20;
      plVar16[6] = (long)puVar9;
LAB_04ace1ff:
      LOCK();
      puVar9[1] = puVar9[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_5c8 & 1) == 0) {
        plVar16[3] = *(long *)(puStack_5c8 + 4);
        lVar11 = *(long *)(puStack_5c8 + 2);
        plVar16[1] = *(long *)puStack_5c8;
        plVar16[2] = lVar11;
        goto LAB_04ace195;
      }
      func_0x04885070(plVar16 + 1,plVar8[0x14],plVar8[0x13]);
      *plVar16 = *plVar15;
      puVar9 = (undefined8 *)
               CONCAT17(uStack_609,
                        CONCAT16(uStack_60a,CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
      plVar16[5] = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
      plVar16[6] = CONCAT17(uStack_609,
                            CONCAT16(uStack_60a,CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))
                                    ));
      if (puVar9 != (undefined8 *)0x0) goto LAB_04ace1ff;
    }
    plVar16 = plVar16 + 7;
    *(long **)(puVar10 + 0x24) = plVar16;
  }
  else {
    plVar16 = (long *)func_0x04b0c1b0(puVar10 + 0x22,plVar15,&bStack_618);
  }
  *(long **)(puVar10 + 0x24) = plVar16;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar15 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar11 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar15 = (long *)CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar11 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  LOCK();
  lVar11 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  if (puStack_498 != (undefined8 *)0x0) {
    (*(code *)puStack_498[1])(&puStack_498);
  }
  if (ppuStack_598 == &puStack_5b8) {
    lVar11 = 0x20;
LAB_04ace517:
    (**(code **)((long)*ppuStack_598 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (ppuStack_598 != (undefined8 **)0x0) goto LAB_04ace517;
  }
  if ((uStack_570 & 1) != 0) {
    func_0x0412a280(uStack_560,uStack_570 & 0xfffffffffffffffe);
  }
  uStack_522 = 0;
  uStack_520 = 0;
  uStack_518 = 0;
  bStack_530 = 0x1a;
  _auStack_52f = 0x706f6e6163;
  uStack_52a = 0x5f79;
  bStack_528 = 0x68;
  uStack_527 = 0x6965;
  uStack_525 = 0x67;
  uStack_524 = 0x7468;
  puStack_538 = (undefined *)0x3974dd08a6783749;
  uStack_570 = 0;
  uStack_5b0 = 0;
  puStack_578 = (undefined *)0x0;
  puStack_5b8 = (undefined8 *)&UNK_0ef5e9b0;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puVar9 = puStack_5b8;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef5e788;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  puStack_5b8 = (undefined8 *)0x0;
  bStack_618 = (byte)puVar9;
  uStack_617 = (undefined4)((ulong)puVar9 >> 8);
  uStack_613 = (undefined2)((ulong)puVar9 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar9 >> 0x38);
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&puStack_358,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar15 = plVar8 + 0x11;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0ef5e7d8;
  plVar8[0x2e] = 0x7fffffff80000000;
  plVar8[0x30] = 0;
  plVar8[0x31] = 0;
  puVar9 = (undefined8 *)CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  if (puVar9 == (undefined8 *)0x0) {
    lVar11 = 0;
  }
  else {
    (*(code *)*puVar9)(&bStack_618,plVar8 + 0x30);
    lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  }
  bStack_618 = 0;
  uStack_617 = 0;
  uStack_613 = 0;
  uStack_611 = 0;
  plVar8[0x30] = lVar11;
  puVar19 = (uint *)(plVar8 + 0x12);
  if (plVar15 == (long *)&DAT_0f5520a8) {
    plVar8[0x15] = 0;
  }
  else {
    if ((*puVar19 & 1) == 0) {
      if ((_DAT_0f5520b0 & 1) == 0) {
        plVar8[0x14] = _DAT_0f5520c0;
        uVar5 = uRam000000000f5520bc;
        uVar4 = _DAT_0f5520b8;
        uVar3 = uRam000000000f5520b4;
        *puVar19 = _DAT_0f5520b0;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar3;
        *(undefined4 *)(plVar8 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar5;
      }
      else {
        func_0x04885070(puVar19,_DAT_0f5520c0,CONCAT44(uRam000000000f5520bc,_DAT_0f5520b8));
      }
    }
    else {
      bVar22 = (_DAT_0f5520b0 & 1) != 0;
      lVar11 = 0xf5520b1;
      if (bVar22) {
        lVar11 = _DAT_0f5520c0;
      }
      uVar7 = (ulong)((_DAT_0f5520b0 & 0xff) >> 1);
      if (bVar22) {
        uVar7 = CONCAT44(uRam000000000f5520bc,_DAT_0f5520b8);
      }
      func_0x04885120(puVar19,lVar11,uVar7);
    }
    lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
    plVar8[0x11] = _DAT_0f5520a8;
    plVar8[0x15] = 0;
    if (lVar11 != 0) {
      (**(code **)(lVar11 + 8))(&bStack_618);
    }
  }
  plVar13 = plVar8 + 1;
  puStack_5c0 = puVar19;
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef5e8b8;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0ef5e908;
  puVar9[0xe] = plVar8 + 4;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  puVar20 = puVar9 + 4;
  bStack_618 = (byte)puVar20;
  uStack_617 = (undefined4)((ulong)puVar20 >> 8);
  uStack_613 = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar20 >> 0x38);
  bStack_610 = (byte)puVar9;
  uStack_60f = (undefined4)((ulong)puVar9 >> 8);
  uStack_60b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_60a = (undefined1)((ulong)puVar9 >> 0x30);
  uStack_609 = (undefined1)((ulong)puVar9 >> 0x38);
  puStack_5c8 = (uint *)(plVar8 + 4);
  puVar10 = (undefined4 *)func_0x04b77b50(plStack_5d8,&puStack_538,1);
  plVar16 = *(long **)(puVar10 + 0x24);
  if (plVar16 < *(long **)(puVar10 + 0x26)) {
    plVar16[2] = 0;
    plVar16[3] = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[4] = 0;
    if (plVar16 != plVar15) {
      puVar19 = (uint *)(plVar16 + 1);
      if ((*puStack_5c0 & 1) == 0) {
        plVar16[3] = *(long *)(puStack_5c0 + 4);
        lVar11 = *(long *)(puStack_5c0 + 2);
        *(undefined8 *)puVar19 = *(undefined8 *)puStack_5c0;
        plVar16[2] = lVar11;
      }
      else {
        puStack_5c0 = puVar19;
        func_0x04885070(puVar19,plVar8[0x14],plVar8[0x13]);
      }
    }
    *plVar16 = *plVar15;
    plVar16[5] = (long)puVar20;
    plVar16[6] = (long)puVar9;
    LOCK();
    puVar9[1] = puVar9[1] + 1;
    UNLOCK();
    plVar16 = plVar16 + 7;
    *(long **)(puVar10 + 0x24) = plVar16;
  }
  else {
    plVar16 = (long *)func_0x04b799e0(puVar10 + 0x22,plVar15,&bStack_618);
  }
  *(long **)(puVar10 + 0x24) = plVar16;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar15 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar11 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar15 = (long *)CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar11 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  puVar19 = puStack_5c8;
  LOCK();
  lVar11 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  *(undefined4 *)(plVar8 + 0x2e) = 1;
  uStack_388 = 0;
  uStack_380 = 0;
  uStack_378 = 0;
  (**(code **)(plVar8[4] + 0x10))(puVar19,&uStack_388);
  if ((uStack_388 & 1) != 0) {
    func_0x0412a280(uStack_378,uStack_388 & 0xfffffffffffffffe);
  }
  if (puStack_578 != (undefined *)0x0) {
    (**(code **)(puStack_578 + 8))(&puStack_578);
  }
  if ((bStack_530 & 1) != 0) {
    func_0x0412a280(uStack_520,
                    CONCAT26(uStack_52a,CONCAT51(_auStack_52f,bStack_530)) & 0xfffffffffffffffe);
  }
  uStack_604 = 0;
  uStack_603 = 0;
  uStack_602 = 0;
  uStack_600 = 0;
  uStack_5f8 = 0;
  bStack_610 = 0x16;
  uStack_60f = 0x65736162;
  uStack_60b = 0x5f;
  uStack_60a = 0x72;
  uStack_609 = 0x61;
  uStack_608 = 100;
  uStack_607 = 0x7569;
  uStack_605 = 0x73;
  bStack_618 = 0x77;
  uStack_617 = 0x27b98841;
  uStack_613 = 0xaece;
  uStack_611 = 0xc3;
  bStack_530 = 0;
  _auStack_52f = 0;
  uStack_52a = 0;
  puStack_538 = &UNK_0ef5eba8;
  plVar8 = (long *)func_0x04b775b0(plStack_5d8,&bStack_618,1,&puStack_538);
  *(undefined4 *)(plVar8 + 0x2a) = 0;
  uStack_4f8 = 0;
  uStack_4f0 = 0;
  uStack_4e8 = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_4f8);
  if ((uStack_4f8 & 1) != 0) {
    func_0x0412a280(uStack_4e8,uStack_4f8 & 0xfffffffffffffffe);
  }
  if (puStack_538 != (undefined *)0x0) {
    (**(code **)(puStack_538 + 8))(&puStack_538);
  }
  if ((bStack_610 & 1) != 0) {
    func_0x0412a280(uStack_600,
                    CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610)))) &
                    0xfffffffffffffffe);
  }
  uStack_605 = 0;
  uStack_604 = 0;
  uStack_603 = 0;
  uStack_602 = 0;
  uStack_600 = 0;
  uStack_5f8 = 0;
  bStack_610 = 0x14;
  uStack_60f = 0x65726f63;
  uStack_60b = 0x5f;
  uStack_60a = 0x77;
  uStack_609 = 0x69;
  uStack_608 = 100;
  uStack_607 = 0x6874;
  bStack_618 = 0x89;
  uStack_617 = 0xb121c260;
  uStack_613 = 0x5d9a;
  uStack_611 = 0x89;
  bStack_350 = 0;
  uStack_34f = 0;
  puStack_358 = &UNK_0ef5ebc0;
  plVar8 = (long *)func_0x04b775b0(plStack_5d8,&bStack_618,0,&puStack_358);
  *(undefined4 *)(plVar8 + 0x2a) = 1;
  uStack_458 = 0;
  uStack_450 = 0;
  uStack_448 = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_458);
  if ((uStack_458 & 1) != 0) {
    func_0x0412a280(uStack_448,uStack_458 & 0xfffffffffffffffe);
  }
  if (puStack_358 != (undefined *)0x0) {
    (**(code **)(puStack_358 + 8))(&puStack_358);
  }
  if ((bStack_610 & 1) != 0) {
    func_0x0412a280(uStack_600,
                    CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610)))) &
                    0xfffffffffffffffe);
  }
  uStack_4c0 = 0;
  uStack_4bf = 0;
  uStack_4bd = 0;
  uStack_4b8 = 0;
  bStack_4d0 = 0x1e;
  uStack_4cf = 0x706d6973;
  auStack_4cb = (undefined1  [4])0x7966696c;
  uStack_4c7 = 0x635f;
  uStack_4c5 = 0x61;
  uStack_4c4 = 0x79706f6e;
  puStack_4d8 = (undefined8 *)0xf99aedd4f2404807;
  bStack_3d0 = 0;
  uStack_3cf = 0;
  auStack_3cb = (undefined1  [4])((uint)auStack_3cb & 0xff000000);
  uStack_5b0 = 0;
  puStack_3d8 = (undefined8 *)0x0;
  puStack_5b8 = (undefined8 *)&UNK_0ef5edb8;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1d0,0);
  }
  puVar9 = puStack_5b8;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef5ebe8;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  puStack_5b8 = (undefined8 *)0x0;
  bStack_618 = (byte)puVar9;
  uStack_617 = (undefined4)((ulong)puVar9 >> 8);
  uStack_613 = (undefined2)((ulong)puVar9 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar9 >> 0x38);
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&puStack_418,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar15 = plVar8 + 0x11;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0ef5ec38;
  plVar8[0x2f] = 0;
  plVar8[0x30] = 0;
  plVar8[0x2e] = (long)(plVar8 + 0x2f);
  pbVar18 = (byte *)(plVar8 + 0x32);
  plVar8[0x32] = 0;
  plVar8[0x33] = 0;
  if (pbVar18 != &bStack_618) {
    puVar9 = (undefined8 *)CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)))
    ;
    if (puVar9 == (undefined8 *)0x0) {
      lVar11 = 0;
    }
    else {
      (*(code *)*puVar9)(&bStack_618,pbVar18);
      lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
    }
    bStack_618 = 0;
    uStack_617 = 0;
    uStack_613 = 0;
    uStack_611 = 0;
    *(long *)pbVar18 = lVar11;
  }
  puVar19 = (uint *)(plVar8 + 0x12);
  if (plVar15 != (long *)&DAT_0f551f88) {
    if ((*puVar19 & 1) == 0) {
      if ((_DAT_0f551f90 & 1) == 0) {
        plVar8[0x14] = _DAT_0f551fa0;
        uVar5 = uRam000000000f551f9c;
        uVar4 = _DAT_0f551f98;
        uVar3 = uRam000000000f551f94;
        *puVar19 = _DAT_0f551f90;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar3;
        *(undefined4 *)(plVar8 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar5;
      }
      else {
        func_0x04885070(puVar19,_DAT_0f551fa0,CONCAT44(uRam000000000f551f9c,_DAT_0f551f98));
      }
    }
    else {
      bVar22 = (_DAT_0f551f90 & 1) != 0;
      lVar11 = 0xf551f91;
      if (bVar22) {
        lVar11 = _DAT_0f551fa0;
      }
      uVar7 = (ulong)((_DAT_0f551f90 & 0xff) >> 1);
      if (bVar22) {
        uVar7 = CONCAT44(uRam000000000f551f9c,_DAT_0f551f98);
      }
      func_0x04885120(puVar19,lVar11,uVar7);
    }
  }
  plVar8[0x11] = _DAT_0f551f88;
  plVar8[0x15] = 0;
  lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  if (lVar11 != 0) {
    (**(code **)(lVar11 + 8))(&bStack_618);
  }
  plVar13 = plVar8 + 1;
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  puStack_5c8 = (uint *)plVar13;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef5ed18;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0ef5ed68;
  puVar9[0xe] = plVar8 + 4;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  puVar20 = puVar9 + 4;
  bStack_618 = (byte)puVar20;
  uStack_617 = (undefined4)((ulong)puVar20 >> 8);
  uStack_613 = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar20 >> 0x38);
  bStack_610 = (byte)puVar9;
  uStack_60f = (undefined4)((ulong)puVar9 >> 8);
  uStack_60b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_60a = (undefined1)((ulong)puVar9 >> 0x30);
  uStack_609 = (undefined1)((ulong)puVar9 >> 0x38);
  puStack_5c0 = (uint *)(plVar8 + 4);
  puVar10 = (undefined4 *)func_0x04b77b50(plStack_5d8,&puStack_4d8,0);
  plVar13 = *(long **)(puVar10 + 0x24);
  if (plVar13 < *(long **)(puVar10 + 0x26)) {
    plVar13[2] = 0;
    plVar13[3] = 0;
    *plVar13 = 0;
    plVar13[1] = 0;
    plVar13[4] = 0;
    if (plVar13 != plVar15) {
      if ((*puVar19 & 1) == 0) {
        plVar13[3] = plVar8[0x14];
        lVar11 = plVar8[0x13];
        plVar13[1] = *(long *)puVar19;
        plVar13[2] = lVar11;
      }
      else {
        func_0x04885070(plVar13 + 1,plVar8[0x14],plVar8[0x13]);
      }
    }
    *plVar13 = *plVar15;
    plVar13[5] = (long)puVar20;
    plVar13[6] = (long)puVar9;
    LOCK();
    puVar9[1] = puVar9[1] + 1;
    UNLOCK();
    plVar13 = plVar13 + 7;
    *(long **)(puVar10 + 0x24) = plVar13;
  }
  else {
    plVar13 = (long *)func_0x04b799e0(puVar10 + 0x22,plVar15,&bStack_618);
  }
  puVar19 = puStack_5c0;
  *(long **)(puVar10 + 0x24) = plVar13;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar15 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar13 = plVar15 + 1;
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar15 = (long *)CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar13 = plVar15 + 1;
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  puVar12 = puStack_5c8;
  LOCK();
  lVar11 = *(long *)puStack_5c8;
  *(long *)puStack_5c8 = *(long *)puStack_5c8 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *(long *)puVar12;
    *(long *)puVar12 = *(long *)puVar12 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *(long *)puStack_5c8;
    *(long *)puStack_5c8 = *(long *)puStack_5c8 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  uStack_438 = 0;
  uStack_430 = 0;
  uStack_428 = 0;
  (**(code **)(*(long *)puVar19 + 0x10))(puVar19,&uStack_438);
  if ((uStack_438 & 1) != 0) {
    func_0x0412a280(uStack_428,uStack_438 & 0xfffffffffffffffe);
  }
  if (puStack_3d8 != (undefined8 *)0x0) {
    (*(code *)puStack_3d8[1])(&puStack_3d8);
  }
  if ((bStack_4d0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_4bd,CONCAT21(uStack_4bf,uStack_4c0)),
                    CONCAT35(auStack_4cb._0_3_,CONCAT41(uStack_4cf,bStack_4d0)) & 0xfffffffffffffffe
                   );
  }
  uStack_405 = 0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  puStack_418 = (undefined8 *)0x3a4ad5b186795d27;
  bStack_410 = 0x14;
  uStack_40f = 0x6c625f6661656c;
  uStack_408 = 0x6f;
  uStack_407 = 0x6b63;
  bStack_4d0 = 0;
  uStack_4cf = 0;
  auStack_4cb = (undefined1  [4])((uint)auStack_4cb & 0xff000000);
  uStack_5b0 = 0;
  puStack_4d8 = (undefined8 *)0x0;
  puStack_5b8 = (undefined8 *)&UNK_0ef5efb0;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puVar9 = puStack_5b8;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef5ede0;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  puStack_5b8 = (undefined8 *)0x0;
  bStack_618 = (byte)puVar9;
  uStack_617 = (undefined4)((ulong)puVar9 >> 8);
  uStack_613 = (undefined2)((ulong)puVar9 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar9 >> 0x38);
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&uStack_318,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0ef5ee30;
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  puVar9 = (undefined8 *)CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  if (puVar9 == (undefined8 *)0x0) {
    lVar11 = 0;
  }
  else {
    (*(code *)*puVar9)(&bStack_618,plVar8 + 0x2e);
    lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  }
  plVar15 = plVar8 + 1;
  plVar8[0x2e] = lVar11;
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  LOCK();
  *plVar15 = *plVar15 + 1;
  UNLOCK();
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar13 = plVar8 + 4;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef5ef10;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0ef5ef60;
  puVar9[0xe] = plVar13;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  puVar20 = puVar9 + 4;
  bStack_618 = (byte)puVar20;
  uStack_617 = (undefined4)((ulong)puVar20 >> 8);
  uStack_613 = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar20 >> 0x38);
  bStack_610 = (byte)puVar9;
  uStack_60f = (undefined4)((ulong)puVar9 >> 8);
  uStack_60b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_60a = (undefined1)((ulong)puVar9 >> 0x30);
  uStack_609 = (undefined1)((ulong)puVar9 >> 0x38);
  puVar10 = (undefined4 *)func_0x04b77b50(plStack_5d8,&puStack_418,1);
  plVar16 = plVar8 + 0x11;
  plVar14 = *(long **)(puVar10 + 0x24);
  if (plVar14 < *(long **)(puVar10 + 0x26)) {
    plVar14[2] = 0;
    plVar14[3] = 0;
    *plVar14 = 0;
    plVar14[1] = 0;
    plVar14[4] = 0;
    if (plVar14 != plVar16) {
      plVar2 = plVar14 + 1;
      if ((*(byte *)(plVar8 + 0x12) & 1) == 0) {
        plVar14[3] = plVar8[0x14];
        lVar11 = plVar8[0x13];
        *plVar2 = plVar8[0x12];
        plVar14[2] = lVar11;
      }
      else {
        plStack_5d8 = plVar16;
        puStack_5c8 = (uint *)plVar2;
        func_0x04885070(plVar2,plVar8[0x14],plVar8[0x13]);
        plVar16 = plStack_5d8;
      }
    }
    *plVar14 = *plVar16;
    plVar14[5] = (long)puVar20;
    plVar14[6] = (long)puVar9;
    LOCK();
    puVar9[1] = puVar9[1] + 1;
    UNLOCK();
    plVar14 = plVar14 + 7;
    *(long **)(puVar10 + 0x24) = plVar14;
  }
  else {
    plVar14 = (long *)func_0x04b799e0(puVar10 + 0x22,plVar16,&bStack_618);
  }
  *(long **)(puVar10 + 0x24) = plVar14;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar16 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar16 = *plVar16 + 1;
    UNLOCK();
  }
  plVar16 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar14 = plVar16 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar16 = (long *)CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar14 = plVar16 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  LOCK();
  lVar11 = *plVar15;
  *plVar15 = *plVar15 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  bStack_618 = 0;
  uStack_617 = 0;
  uStack_613 = 0;
  uStack_611 = 0;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  uStack_608 = 0;
  uStack_607 = 0;
  uStack_605 = 0;
  uStack_604 = 0;
  uStack_603 = 0;
  uStack_602 = 0;
  (**(code **)(*plVar13 + 0x10))(plVar13,&bStack_618);
  plVar8 = plStack_390;
  if ((bStack_618 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_602,
                             CONCAT15(uStack_603,
                                      CONCAT14(uStack_604,
                                               CONCAT13(uStack_605,CONCAT21(uStack_607,uStack_608)))
                                     )),
                    CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618))) &
                    0xfffffffffffffffe);
  }
  if (puStack_4d8 != (undefined8 *)0x0) {
    (*(code *)puStack_4d8[1])(&puStack_4d8);
  }
  if ((bStack_410 & 1) != 0) {
    func_0x0412a280(uStack_400,CONCAT71(uStack_40f,bStack_410) & 0xfffffffffffffffe);
  }
  if (plStack_168 == alStack_188) {
    lVar11 = 0x20;
LAB_04acf461:
    (**(code **)(*plStack_168 + lVar11))();
    plVar15 = (long *)plVar8[4];
    if (plVar15 != (long *)0x0) goto LAB_04acf419;
LAB_04acf470:
    plStack_198 = (long *)0x0;
  }
  else {
    lVar11 = 0x28;
    if (plStack_168 != (long *)0x0) goto LAB_04acf461;
    plVar15 = (long *)plVar8[4];
    if (plVar15 == (long *)0x0) goto LAB_04acf470;
LAB_04acf419:
    if (plVar15 == plVar8) {
      plStack_198 = alStack_1b8;
      (**(code **)(*plVar15 + 0x18))();
    }
    else {
      plStack_198 = (long *)(**(code **)(*plVar15 + 0x10))();
    }
  }
  puStack_578 = (undefined *)0x0;
  uStack_570 = 0x69705f6167656d20;
  uStack_568 = 0x706f6e61635f656e;
  uStack_560 = 0x79;
  ppuStack_558 = (undefined **)0x0;
  pbVar18 = (byte *)((long)&uStack_570 + 1);
  uVar7 = func_0x0eee2e90(pbVar18);
  puStack_578 = (undefined *)0xcbf29ce484222325;
  if (uVar7 != 0) {
    uVar17 = (ulong)((uint)uVar7 & 7);
    if (uVar7 < 8) {
      puStack_578 = (undefined *)0xcbf29ce484222325;
    }
    else {
      uVar7 = uVar7 & 0xfffffffffffffff8;
      puStack_578 = (undefined *)0xcbf29ce484222325;
      do {
        puStack_578 = (undefined *)
                      (((((((((long)puStack_578 * 0x100000001b3 ^ (ulong)*pbVar18) * 0x100000001b3 ^
                            (ulong)pbVar18[1]) * 0x100000001b3 ^ (ulong)pbVar18[2]) * 0x100000001b3
                          ^ (ulong)pbVar18[3]) * 0x100000001b3 ^ (ulong)pbVar18[4]) * 0x100000001b3
                        ^ (ulong)pbVar18[5]) * 0x100000001b3 ^ (ulong)pbVar18[6]) * 0x100000001b3 ^
                      (ulong)pbVar18[7]);
        pbVar18 = pbVar18 + 8;
        uVar7 = uVar7 - 8;
      } while (uVar7 != 0);
    }
    if (uVar17 != 0) {
      uVar7 = 0;
      do {
        puStack_578 = (undefined *)((long)puStack_578 * 0x100000001b3 ^ (ulong)pbVar18[uVar7]);
        uVar7 = uVar7 + 1;
      } while (uVar17 != uVar7);
    }
  }
  if (plStack_198 == (long *)0x0) {
    ppuStack_598 = (undefined8 **)0x0;
    bStack_490 = 0;
    uStack_48f = 0;
    auStack_48b = (undefined1  [4])((uint)auStack_48b & 0xff000000);
    puStack_498 = (undefined8 *)&UNK_0ef5f1c0;
    ppuStack_468 = (undefined8 **)0x0;
  }
  else {
    if (plStack_198 == alStack_1b8) {
      ppuStack_598 = &puStack_5b8;
      (**(code **)(*plStack_198 + 0x18))();
    }
    else {
      ppuStack_598 = (undefined8 **)(**(code **)(*plStack_198 + 0x10))();
    }
    ppuStack_468 = ppuStack_598;
    bStack_490 = 0;
    uStack_48f = 0;
    auStack_48b = (undefined1  [4])((uint)auStack_48b & 0xff000000);
    puStack_498 = (undefined8 *)&UNK_0ef5f1c0;
    if (ppuStack_598 == (undefined8 **)0x0) {
      ppuStack_468 = (undefined8 **)0x0;
    }
    else if (ppuStack_598 == &puStack_5b8) {
      ppuStack_468 = (undefined8 **)(auStack_48b + 3);
      (*(code *)(*ppuStack_598)[3])(ppuStack_598);
    }
    else {
      ppuStack_598 = (undefined8 **)0x0;
    }
  }
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef5efd8;
  bStack_618 = 0;
  uStack_617 = 0;
  uStack_613 = 0;
  uStack_611 = 0;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  if (puStack_498 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_498)(&puStack_498,&bStack_618);
    puVar9 = puStack_498;
  }
  puStack_498 = (undefined8 *)0x0;
  bStack_618 = (byte)puVar9;
  uStack_617 = (undefined4)((ulong)puVar9 >> 8);
  uStack_613 = (undefined2)((ulong)puVar9 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar9 >> 0x38);
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&puStack_538,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar15 = plVar8 + 0x11;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0ef5f028;
  pbVar18 = (byte *)(plVar8 + 0x2e);
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  *(undefined1 *)(plVar8 + 0x36) = 0;
  if (pbVar18 != &bStack_618) {
    puVar9 = (undefined8 *)CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)))
    ;
    if (puVar9 == (undefined8 *)0x0) {
      lVar11 = 0;
    }
    else {
      (*(code *)*puVar9)(&bStack_618,pbVar18);
      lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
    }
    bStack_618 = 0;
    uStack_617 = 0;
    uStack_613 = 0;
    uStack_611 = 0;
    *(long *)pbVar18 = lVar11;
  }
  plVar13 = plVar8 + 4;
  puVar19 = (uint *)(plVar8 + 0x12);
  plStack_5d8 = plVar13;
  if (plVar15 != (long *)&DAT_0f552108) {
    if ((*puVar19 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar8[0x14] = _DAT_0f552120;
        uVar5 = uRam000000000f55211c;
        uVar4 = _DAT_0f552118;
        uVar3 = uRam000000000f552114;
        *puVar19 = _DAT_0f552110;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar3;
        *(undefined4 *)(plVar8 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar5;
      }
      else {
        func_0x04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar22 = (_DAT_0f552110 & 1) != 0;
      lVar11 = 0xf552111;
      if (bVar22) {
        lVar11 = _DAT_0f552120;
      }
      uVar7 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar22) {
        uVar7 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar19,lVar11,uVar7);
    }
  }
  plVar16 = plVar8 + 1;
  plVar8[0x11] = _DAT_0f552108;
  plVar8[0x15] = 0;
  lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  if (lVar11 != 0) {
    (**(code **)(lVar11 + 8))(&bStack_618);
  }
  LOCK();
  *plVar16 = *plVar16 + 1;
  UNLOCK();
  puStack_5c8 = puVar19;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef5f120;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0ef5f170;
  puVar9[0xe] = plVar13;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  puVar20 = puVar9 + 4;
  bStack_618 = (byte)puVar20;
  uStack_617 = (undefined4)((ulong)puVar20 >> 8);
  uStack_613 = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar20 >> 0x38);
  bStack_610 = (byte)puVar9;
  uStack_60f = (undefined4)((ulong)puVar9 >> 8);
  uStack_60b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_60a = (undefined1)((ulong)puVar9 >> 0x30);
  uStack_609 = (undefined1)((ulong)puVar9 >> 0x38);
  puVar10 = (undefined4 *)func_0x04b081a0(uStack_5d0,&puStack_578,0);
  plVar13 = *(long **)(puVar10 + 0x24);
  if (plVar13 < *(long **)(puVar10 + 0x26)) {
    plVar13[2] = 0;
    plVar13[3] = 0;
    *plVar13 = 0;
    plVar13[1] = 0;
    plVar13[4] = 0;
    if (plVar13 == plVar15) {
LAB_04acf95e:
      *plVar13 = *plVar15;
      plVar13[5] = (long)puVar20;
      plVar13[6] = (long)puVar9;
LAB_04acf9c7:
      LOCK();
      puVar9[1] = puVar9[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_5c8 & 1) == 0) {
        plVar13[3] = *(long *)(puStack_5c8 + 4);
        lVar11 = *(long *)(puStack_5c8 + 2);
        plVar13[1] = *(long *)puStack_5c8;
        plVar13[2] = lVar11;
        goto LAB_04acf95e;
      }
      func_0x04885070(plVar13 + 1,plVar8[0x14],plVar8[0x13]);
      *plVar13 = *plVar15;
      puVar9 = (undefined8 *)
               CONCAT17(uStack_609,
                        CONCAT16(uStack_60a,CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
      plVar13[5] = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
      plVar13[6] = CONCAT17(uStack_609,
                            CONCAT16(uStack_60a,CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))
                                    ));
      if (puVar9 != (undefined8 *)0x0) goto LAB_04acf9c7;
    }
    plVar13 = plVar13 + 7;
    *(long **)(puVar10 + 0x24) = plVar13;
  }
  else {
    plVar13 = (long *)func_0x04b0c1b0(puVar10 + 0x22,plVar15,&bStack_618);
  }
  plVar15 = plStack_5d8;
  *(long **)(puVar10 + 0x24) = plVar13;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar13 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar13 = *plVar13 + 1;
    UNLOCK();
  }
  plVar13 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar14 = plVar13 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar13 = (long *)CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar14 = plVar13 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  LOCK();
  lVar11 = *plVar16;
  *plVar16 = *plVar16 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  if (puStack_498 != (undefined8 *)0x0) {
    (*(code *)puStack_498[1])(&puStack_498);
  }
  if (ppuStack_598 == &puStack_5b8) {
    lVar11 = 0x20;
LAB_04acfce6:
    (**(code **)((long)*ppuStack_598 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (ppuStack_598 != (undefined8 **)0x0) goto LAB_04acfce6;
  }
  if ((uStack_570 & 1) != 0) {
    func_0x0412a280(uStack_560,uStack_570 & 0xfffffffffffffffe);
  }
  uStack_522 = 0;
  uStack_520 = 0;
  uStack_518 = 0;
  bStack_530 = 0x1a;
  _auStack_52f = 0x706f6e6163;
  uStack_52a = 0x5f79;
  bStack_528 = 0x68;
  uStack_527 = 0x6965;
  uStack_525 = 0x67;
  uStack_524 = 0x7468;
  puStack_538 = (undefined *)0x3974dd08a6783749;
  uStack_570 = 0;
  uStack_5b0 = 0;
  puStack_578 = (undefined *)0x0;
  puStack_5b8 = (undefined8 *)&UNK_0ef5f410;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puVar9 = puStack_5b8;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef5f1e8;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  puStack_5b8 = (undefined8 *)0x0;
  bStack_618 = (byte)puVar9;
  uStack_617 = (undefined4)((ulong)puVar9 >> 8);
  uStack_613 = (undefined2)((ulong)puVar9 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar9 >> 0x38);
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&puStack_358,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0ef5f238;
  plVar8[0x2e] = 0x7fffffff80000000;
  plVar8[0x30] = 0;
  plVar8[0x31] = 0;
  puVar9 = (undefined8 *)CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  if (puVar9 == (undefined8 *)0x0) {
    lVar11 = 0;
  }
  else {
    (*(code *)*puVar9)(&bStack_618,plVar8 + 0x30);
    lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  }
  bStack_618 = 0;
  uStack_617 = 0;
  uStack_613 = 0;
  uStack_611 = 0;
  plVar8[0x30] = lVar11;
  puVar19 = (uint *)(plVar8 + 0x12);
  if (plVar8 + 0x11 == (long *)&DAT_0f5520a8) {
    plVar8[0x15] = 0;
  }
  else {
    if ((*puVar19 & 1) == 0) {
      if ((_DAT_0f5520b0 & 1) == 0) {
        plVar8[0x14] = _DAT_0f5520c0;
        uVar5 = uRam000000000f5520bc;
        uVar4 = _DAT_0f5520b8;
        uVar3 = uRam000000000f5520b4;
        *puVar19 = _DAT_0f5520b0;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar3;
        *(undefined4 *)(plVar8 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar5;
      }
      else {
        func_0x04885070(puVar19,_DAT_0f5520c0,CONCAT44(uRam000000000f5520bc,_DAT_0f5520b8));
      }
    }
    else {
      bVar22 = (_DAT_0f5520b0 & 1) != 0;
      lVar11 = 0xf5520b1;
      if (bVar22) {
        lVar11 = _DAT_0f5520c0;
      }
      uVar7 = (ulong)((_DAT_0f5520b0 & 0xff) >> 1);
      if (bVar22) {
        uVar7 = CONCAT44(uRam000000000f5520bc,_DAT_0f5520b8);
      }
      func_0x04885120(puVar19,lVar11,uVar7);
    }
    lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
    plVar8[0x11] = _DAT_0f5520a8;
    plVar8[0x15] = 0;
    if (lVar11 != 0) {
      (**(code **)(lVar11 + 8))(&bStack_618);
    }
  }
  plVar13 = plVar8 + 1;
  puStack_5c0 = puVar19;
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  puStack_5c8 = (uint *)(plVar8 + 0x11);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef5f318;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0ef5f368;
  puVar9[0xe] = plVar8 + 4;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  puVar20 = puVar9 + 4;
  bStack_618 = (byte)puVar20;
  uStack_617 = (undefined4)((ulong)puVar20 >> 8);
  uStack_613 = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar20 >> 0x38);
  bStack_610 = (byte)puVar9;
  uStack_60f = (undefined4)((ulong)puVar9 >> 8);
  uStack_60b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_60a = (undefined1)((ulong)puVar9 >> 0x30);
  uStack_609 = (undefined1)((ulong)puVar9 >> 0x38);
  puVar10 = (undefined4 *)func_0x04b81e00(plVar15,&puStack_538,1);
  plVar15 = *(long **)(puVar10 + 0x24);
  if (plVar15 < *(long **)(puVar10 + 0x26)) {
    plVar15[2] = 0;
    plVar15[3] = 0;
    *plVar15 = 0;
    plVar15[1] = 0;
    plVar15[4] = 0;
    if ((uint *)plVar15 != puStack_5c8) {
      puVar19 = (uint *)(plVar15 + 1);
      if ((*puStack_5c0 & 1) == 0) {
        plVar15[3] = *(long *)(puStack_5c0 + 4);
        lVar11 = *(long *)(puStack_5c0 + 2);
        *(undefined8 *)puVar19 = *(undefined8 *)puStack_5c0;
        plVar15[2] = lVar11;
      }
      else {
        puStack_5c0 = puVar19;
        func_0x04885070(puVar19,plVar8[0x14],plVar8[0x13]);
      }
    }
    *plVar15 = *(long *)puStack_5c8;
    plVar15[5] = (long)puVar20;
    plVar15[6] = (long)puVar9;
    LOCK();
    puVar9[1] = puVar9[1] + 1;
    UNLOCK();
    plVar15 = plVar15 + 7;
    *(long **)(puVar10 + 0x24) = plVar15;
  }
  else {
    plVar15 = (long *)func_0x04b83c90(puVar10 + 0x22,puStack_5c8,&bStack_618);
  }
  plVar16 = plStack_5d8;
  *(long **)(puVar10 + 0x24) = plVar15;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar15 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar14 = plVar15 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar15 = (long *)CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar14 = plVar15 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  LOCK();
  lVar11 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  *(undefined4 *)(plVar8 + 0x2e) = 1;
  uStack_388 = 0;
  uStack_380 = 0;
  uStack_378 = 0;
  (**(code **)(plVar8[4] + 0x10))(plVar8 + 4,&uStack_388);
  if ((uStack_388 & 1) != 0) {
    func_0x0412a280(uStack_378,uStack_388 & 0xfffffffffffffffe);
  }
  if (puStack_578 != (undefined *)0x0) {
    (**(code **)(puStack_578 + 8))(&puStack_578);
  }
  if ((bStack_530 & 1) != 0) {
    func_0x0412a280(uStack_520,
                    CONCAT26(uStack_52a,CONCAT51(_auStack_52f,bStack_530)) & 0xfffffffffffffffe);
  }
  uStack_604 = 0;
  uStack_603 = 0;
  uStack_602 = 0;
  uStack_600 = 0;
  uStack_5f8 = 0;
  bStack_610 = 0x16;
  uStack_60f = 0x65736162;
  uStack_60b = 0x5f;
  uStack_60a = 0x72;
  uStack_609 = 0x61;
  uStack_608 = 100;
  uStack_607 = 0x7569;
  uStack_605 = 0x73;
  bStack_618 = 0x77;
  uStack_617 = 0x27b98841;
  uStack_613 = 0xaece;
  uStack_611 = 0xc3;
  bStack_530 = 0;
  _auStack_52f = 0;
  uStack_52a = 0;
  puStack_538 = &UNK_0ef5f608;
  plVar8 = (long *)func_0x04b81860(plVar16,&bStack_618,1,&puStack_538);
  *(undefined4 *)(plVar8 + 0x2a) = 0;
  uStack_4f8 = 0;
  uStack_4f0 = 0;
  uStack_4e8 = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_4f8);
  if ((uStack_4f8 & 1) != 0) {
    func_0x0412a280(uStack_4e8,uStack_4f8 & 0xfffffffffffffffe);
  }
  if (puStack_538 != (undefined *)0x0) {
    (**(code **)(puStack_538 + 8))(&puStack_538);
  }
  if ((bStack_610 & 1) != 0) {
    func_0x0412a280(uStack_600,
                    CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610)))) &
                    0xfffffffffffffffe);
  }
  uStack_3bb = 0;
  uStack_3b8 = 0;
  bStack_3d0 = 0x28;
  uStack_3cf = _DAT_01257a3a;
  auStack_3cb = (undefined1  [4])_UNK_01257a3e;
  uStack_3c7 = _UNK_01257a42;
  uStack_3c3 = _UNK_01257a46;
  uStack_3bf = 0x72656966;
  puStack_3d8 = (undefined8 *)0x139caed5c2c7f99c;
  bStack_350 = 0;
  uStack_34f = 0;
  uStack_5b0 = 0;
  puStack_358 = (undefined *)0x0;
  puStack_5b8 = (undefined8 *)&UNK_0ef5f800;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puVar9 = puStack_5b8;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef5f630;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  puStack_5b8 = (undefined8 *)0x0;
  bStack_618 = (byte)puVar9;
  uStack_617 = (undefined4)((ulong)puVar9 >> 8);
  uStack_613 = (undefined2)((ulong)puVar9 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar9 >> 0x38);
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&puStack_4d8,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0ef5f680;
  plVar8[0x2e] = _DAT_014eae60;
  *(undefined1 *)(plVar8 + 0x2f) = 1;
  plVar8[0x30] = 0;
  plVar8[0x31] = 0;
  puVar9 = (undefined8 *)CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  if (puVar9 == (undefined8 *)0x0) {
    lVar11 = 0;
  }
  else {
    (*(code *)*puVar9)(&bStack_618,plVar8 + 0x30);
    lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  }
  bStack_618 = 0;
  uStack_617 = 0;
  uStack_613 = 0;
  uStack_611 = 0;
  plVar8[0x30] = lVar11;
  puVar19 = (uint *)(plVar8 + 0x12);
  if (plVar8 + 0x11 == (long *)&DAT_0f552018) {
    plVar8[0x15] = 0;
  }
  else {
    if ((*puVar19 & 1) == 0) {
      if ((_DAT_0f552020 & 1) == 0) {
        plVar8[0x14] = _DAT_0f552030;
        uVar5 = uRam000000000f55202c;
        uVar4 = _DAT_0f552028;
        uVar3 = uRam000000000f552024;
        *puVar19 = _DAT_0f552020;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar3;
        *(undefined4 *)(plVar8 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar5;
      }
      else {
        func_0x04885070(puVar19,_DAT_0f552030,CONCAT44(uRam000000000f55202c,_DAT_0f552028));
      }
    }
    else {
      bVar22 = (_DAT_0f552020 & 1) != 0;
      lVar11 = 0xf552021;
      if (bVar22) {
        lVar11 = _DAT_0f552030;
      }
      uVar7 = (ulong)((_DAT_0f552020 & 0xff) >> 1);
      if (bVar22) {
        uVar7 = CONCAT44(uRam000000000f55202c,_DAT_0f552028);
      }
      func_0x04885120(puVar19,lVar11,uVar7);
    }
    lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
    plVar8[0x11] = _DAT_0f552018;
    plVar8[0x15] = 0;
    if (lVar11 != 0) {
      (**(code **)(lVar11 + 8))(&bStack_618);
    }
  }
  plVar15 = plVar8 + 1;
  puStack_5c0 = puVar19;
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  LOCK();
  *plVar15 = *plVar15 + 1;
  UNLOCK();
  puStack_5c8 = (uint *)(plVar8 + 0x11);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef5f760;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0ef5f7b0;
  puVar9[0xe] = plVar8 + 4;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  puVar20 = puVar9 + 4;
  bStack_618 = (byte)puVar20;
  uStack_617 = (undefined4)((ulong)puVar20 >> 8);
  uStack_613 = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar20 >> 0x38);
  bStack_610 = (byte)puVar9;
  uStack_60f = (undefined4)((ulong)puVar9 >> 8);
  uStack_60b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_60a = (undefined1)((ulong)puVar9 >> 0x30);
  uStack_609 = (undefined1)((ulong)puVar9 >> 0x38);
  puVar10 = (undefined4 *)func_0x04b81e00(plVar16,&puStack_3d8,1);
  plVar13 = *(long **)(puVar10 + 0x24);
  if (plVar13 < *(long **)(puVar10 + 0x26)) {
    plVar13[2] = 0;
    plVar13[3] = 0;
    *plVar13 = 0;
    plVar13[1] = 0;
    plVar13[4] = 0;
    if ((uint *)plVar13 != puStack_5c8) {
      puVar19 = (uint *)(plVar13 + 1);
      if ((*puStack_5c0 & 1) == 0) {
        plVar13[3] = *(long *)(puStack_5c0 + 4);
        lVar11 = *(long *)(puStack_5c0 + 2);
        *(undefined8 *)puVar19 = *(undefined8 *)puStack_5c0;
        plVar13[2] = lVar11;
      }
      else {
        puStack_5c0 = puVar19;
        func_0x04885070(puVar19,plVar8[0x14],plVar8[0x13]);
      }
    }
    *plVar13 = *(long *)puStack_5c8;
    plVar13[5] = (long)puVar20;
    plVar13[6] = (long)puVar9;
    LOCK();
    puVar9[1] = puVar9[1] + 1;
    UNLOCK();
    plVar13 = plVar13 + 7;
    *(long **)(puVar10 + 0x24) = plVar13;
  }
  else {
    plVar13 = (long *)func_0x04b83c90(puVar10 + 0x22,puStack_5c8,&bStack_618);
  }
  plVar16 = plStack_5d8;
  *(long **)(puVar10 + 0x24) = plVar13;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar13 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar13 = *plVar13 + 1;
    UNLOCK();
  }
  plVar13 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar14 = plVar13 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar13 = (long *)CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar14 = plVar13 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  LOCK();
  lVar11 = *plVar15;
  *plVar15 = *plVar15 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  *(undefined4 *)(plVar8 + 0x2e) = 0;
  uStack_458 = 0;
  uStack_450 = 0;
  uStack_448 = 0;
  (**(code **)(plVar8[4] + 0x10))(plVar8 + 4,&uStack_458);
  if ((uStack_458 & 1) != 0) {
    func_0x0412a280(uStack_448,uStack_458 & 0xfffffffffffffffe);
  }
  if (puStack_358 != (undefined *)0x0) {
    (**(code **)(puStack_358 + 8))(&puStack_358);
  }
  if ((bStack_3d0 & 1) != 0) {
    func_0x0412a280(CONCAT35(uStack_3bb,CONCAT41(uStack_3bf,uStack_3c3._3_1_)),
                    CONCAT35(auStack_3cb._0_3_,CONCAT41(uStack_3cf,bStack_3d0)) & 0xfffffffffffffffe
                   );
  }
  uStack_605 = 0;
  uStack_604 = 0;
  uStack_603 = 0;
  uStack_602 = 0;
  uStack_600 = 0;
  uStack_5f8 = 0;
  bStack_610 = 0x14;
  uStack_60f = 0x65726f63;
  uStack_60b = 0x5f;
  uStack_60a = 0x77;
  uStack_609 = 0x69;
  uStack_608 = 100;
  uStack_607 = 0x6874;
  bStack_618 = 0x89;
  uStack_617 = 0xb121c260;
  uStack_613 = 0x5d9a;
  uStack_611 = 0x89;
  bStack_3d0 = 0;
  uStack_3cf = 0;
  auStack_3cb = (undefined1  [4])((uint)auStack_3cb & 0xff000000);
  puStack_3d8 = (undefined8 *)&UNK_0ef5f818;
  plVar8 = (long *)func_0x04b81860(plVar16,&bStack_618,0,&puStack_3d8);
  *(undefined4 *)(plVar8 + 0x2a) = 1;
  uStack_438 = 0;
  uStack_430 = 0;
  uStack_428 = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_438);
  if ((uStack_438 & 1) != 0) {
    func_0x0412a280(uStack_428,uStack_438 & 0xfffffffffffffffe);
  }
  if (puStack_3d8 != (undefined8 *)0x0) {
    (*(code *)puStack_3d8[1])(&puStack_3d8);
  }
  if ((bStack_610 & 1) != 0) {
    func_0x0412a280(uStack_600,
                    CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610)))) &
                    0xfffffffffffffffe);
  }
  uStack_405 = 0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  puStack_418 = (undefined8 *)0x3a4ad5b186795d27;
  bStack_410 = 0x14;
  uStack_40f = 0x6c625f6661656c;
  uStack_408 = 0x6f;
  uStack_407 = 0x6b63;
  bStack_4d0 = 0;
  uStack_4cf = 0;
  auStack_4cb = (undefined1  [4])((uint)auStack_4cb & 0xff000000);
  uStack_5b0 = 0;
  puStack_4d8 = (undefined8 *)0x0;
  puStack_5b8 = (undefined8 *)&UNK_0ef5fa10;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puVar9 = puStack_5b8;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef5f840;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  puStack_5b8 = (undefined8 *)0x0;
  bStack_618 = (byte)puVar9;
  uStack_617 = (undefined4)((ulong)puVar9 >> 8);
  uStack_613 = (undefined2)((ulong)puVar9 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar9 >> 0x38);
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&uStack_318,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0ef5f890;
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  puVar9 = (undefined8 *)CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  if (puVar9 == (undefined8 *)0x0) {
    lVar11 = 0;
  }
  else {
    (*(code *)*puVar9)(&bStack_618,plVar8 + 0x2e);
    lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  }
  plVar15 = plVar8 + 1;
  plVar8[0x2e] = lVar11;
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  LOCK();
  *plVar15 = *plVar15 + 1;
  UNLOCK();
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar13 = plVar8 + 4;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef5f970;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0ef5f9c0;
  puVar9[0xe] = plVar13;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  puVar20 = puVar9 + 4;
  bStack_618 = (byte)puVar20;
  uStack_617 = (undefined4)((ulong)puVar20 >> 8);
  uStack_613 = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar20 >> 0x38);
  bStack_610 = (byte)puVar9;
  uStack_60f = (undefined4)((ulong)puVar9 >> 8);
  uStack_60b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_60a = (undefined1)((ulong)puVar9 >> 0x30);
  uStack_609 = (undefined1)((ulong)puVar9 >> 0x38);
  puVar10 = (undefined4 *)func_0x04b81e00(plVar16,&puStack_418,1);
  plVar16 = plVar8 + 0x11;
  plVar14 = *(long **)(puVar10 + 0x24);
  if (plVar14 < *(long **)(puVar10 + 0x26)) {
    plVar14[2] = 0;
    plVar14[3] = 0;
    *plVar14 = 0;
    plVar14[1] = 0;
    plVar14[4] = 0;
    if (plVar14 != plVar16) {
      plVar2 = plVar14 + 1;
      if ((*(byte *)(plVar8 + 0x12) & 1) == 0) {
        plVar14[3] = plVar8[0x14];
        lVar11 = plVar8[0x13];
        *plVar2 = plVar8[0x12];
        plVar14[2] = lVar11;
      }
      else {
        plStack_5d8 = plVar16;
        puStack_5c8 = (uint *)plVar2;
        func_0x04885070(plVar2,plVar8[0x14],plVar8[0x13]);
        plVar16 = plStack_5d8;
      }
    }
    *plVar14 = *plVar16;
    plVar14[5] = (long)puVar20;
    plVar14[6] = (long)puVar9;
    LOCK();
    puVar9[1] = puVar9[1] + 1;
    UNLOCK();
    plVar14 = plVar14 + 7;
    *(long **)(puVar10 + 0x24) = plVar14;
  }
  else {
    plVar14 = (long *)func_0x04b83c90(puVar10 + 0x22,plVar16,&bStack_618);
  }
  *(long **)(puVar10 + 0x24) = plVar14;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar16 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar16 = *plVar16 + 1;
    UNLOCK();
  }
  plVar16 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar14 = plVar16 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar16 = (long *)CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar14 = plVar16 + 1;
    lVar11 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  LOCK();
  lVar11 = *plVar15;
  *plVar15 = *plVar15 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  bStack_618 = 0;
  uStack_617 = 0;
  uStack_613 = 0;
  uStack_611 = 0;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  uStack_608 = 0;
  uStack_607 = 0;
  uStack_605 = 0;
  uStack_604 = 0;
  uStack_603 = 0;
  uStack_602 = 0;
  (**(code **)(*plVar13 + 0x10))(plVar13,&bStack_618);
  plVar8 = plStack_390;
  if ((bStack_618 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_602,
                             CONCAT15(uStack_603,
                                      CONCAT14(uStack_604,
                                               CONCAT13(uStack_605,CONCAT21(uStack_607,uStack_608)))
                                     )),
                    CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618))) &
                    0xfffffffffffffffe);
  }
  if (puStack_4d8 != (undefined8 *)0x0) {
    (*(code *)puStack_4d8[1])(&puStack_4d8);
  }
  if ((bStack_410 & 1) != 0) {
    func_0x0412a280(uStack_400,CONCAT71(uStack_40f,bStack_410) & 0xfffffffffffffffe);
  }
  if (plStack_198 == alStack_1b8) {
    lVar11 = 0x20;
LAB_04ad0c3f:
    (**(code **)(*plStack_198 + lVar11))();
    plVar15 = (long *)plVar8[4];
    if (plVar15 != (long *)0x0) goto LAB_04ad0bf7;
LAB_04ad0c4e:
    plStack_1c8 = (long *)0x0;
  }
  else {
    lVar11 = 0x28;
    if (plStack_198 != (long *)0x0) goto LAB_04ad0c3f;
    plVar15 = (long *)plVar8[4];
    if (plVar15 == (long *)0x0) goto LAB_04ad0c4e;
LAB_04ad0bf7:
    if (plVar15 == plVar8) {
      plStack_1c8 = alStack_1e8;
      (**(code **)(*plVar15 + 0x18))();
    }
    else {
      plStack_1c8 = (long *)(**(code **)(*plVar15 + 0x10))();
    }
  }
  puStack_578 = (undefined *)0x0;
  uStack_570 = 0x61635f656e697016;
  uStack_568 = 0x79706f6e;
  ppuStack_558 = (undefined **)0x0;
  pbVar18 = (byte *)((long)&uStack_570 + 1);
  uVar7 = func_0x0eee2e90(pbVar18);
  puStack_578 = (undefined *)0xcbf29ce484222325;
  if (uVar7 != 0) {
    uVar17 = (ulong)((uint)uVar7 & 7);
    if (uVar7 < 8) {
      puStack_578 = (undefined *)0xcbf29ce484222325;
    }
    else {
      uVar7 = uVar7 & 0xfffffffffffffff8;
      puStack_578 = (undefined *)0xcbf29ce484222325;
      do {
        puStack_578 = (undefined *)
                      (((((((((long)puStack_578 * 0x100000001b3 ^ (ulong)*pbVar18) * 0x100000001b3 ^
                            (ulong)pbVar18[1]) * 0x100000001b3 ^ (ulong)pbVar18[2]) * 0x100000001b3
                          ^ (ulong)pbVar18[3]) * 0x100000001b3 ^ (ulong)pbVar18[4]) * 0x100000001b3
                        ^ (ulong)pbVar18[5]) * 0x100000001b3 ^ (ulong)pbVar18[6]) * 0x100000001b3 ^
                      (ulong)pbVar18[7]);
        pbVar18 = pbVar18 + 8;
        uVar7 = uVar7 - 8;
      } while (uVar7 != 0);
    }
    if (uVar17 != 0) {
      uVar7 = 0;
      do {
        puStack_578 = (undefined *)((long)puStack_578 * 0x100000001b3 ^ (ulong)pbVar18[uVar7]);
        uVar7 = uVar7 + 1;
      } while (uVar17 != uVar7);
    }
  }
  if (plStack_1c8 == (long *)0x0) {
    ppuStack_598 = (undefined8 **)0x0;
    bStack_3d0 = 0;
    uStack_3cf = 0;
    auStack_3cb = (undefined1  [4])((uint)auStack_3cb & 0xff000000);
    puStack_3d8 = (undefined8 *)&UNK_0ef5fc20;
    ppuStack_3a8 = (undefined8 **)0x0;
  }
  else {
    if (plStack_1c8 == alStack_1e8) {
      ppuStack_598 = &puStack_5b8;
      (**(code **)(*plStack_1c8 + 0x18))();
    }
    else {
      ppuStack_598 = (undefined8 **)(**(code **)(*plStack_1c8 + 0x10))();
    }
    ppuStack_3a8 = ppuStack_598;
    bStack_3d0 = 0;
    uStack_3cf = 0;
    auStack_3cb = (undefined1  [4])((uint)auStack_3cb & 0xff000000);
    puStack_3d8 = (undefined8 *)&UNK_0ef5fc20;
    if (ppuStack_598 == (undefined8 **)0x0) {
      ppuStack_3a8 = (undefined8 **)0x0;
    }
    else if (ppuStack_598 == &puStack_5b8) {
      ppuStack_3a8 = (undefined8 **)(auStack_3cb + 3);
      (*(code *)(*ppuStack_598)[3])(ppuStack_598);
    }
    else {
      ppuStack_598 = (undefined8 **)0x0;
    }
  }
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef5fa38;
  bStack_618 = 0;
  uStack_617 = 0;
  uStack_613 = 0;
  uStack_611 = 0;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  if (puStack_3d8 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_3d8)(&puStack_3d8,&bStack_618);
    puVar9 = puStack_3d8;
  }
  puStack_3d8 = (undefined8 *)0x0;
  bStack_618 = (byte)puVar9;
  uStack_617 = (undefined4)((ulong)puVar9 >> 8);
  uStack_613 = (undefined2)((ulong)puVar9 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar9 >> 0x38);
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&puStack_538,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar15 = plVar8 + 0x11;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0ef5fa88;
  pbVar18 = (byte *)(plVar8 + 0x2e);
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  *(undefined1 *)(plVar8 + 0x36) = 0;
  if (pbVar18 != &bStack_618) {
    puVar9 = (undefined8 *)CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)))
    ;
    if (puVar9 == (undefined8 *)0x0) {
      lVar11 = 0;
    }
    else {
      (*(code *)*puVar9)(&bStack_618,pbVar18);
      lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
    }
    bStack_618 = 0;
    uStack_617 = 0;
    uStack_613 = 0;
    uStack_611 = 0;
    *(long *)pbVar18 = lVar11;
  }
  plStack_5d8 = plVar8 + 4;
  puVar19 = (uint *)(plVar8 + 0x12);
  if (plVar15 != (long *)&DAT_0f552108) {
    if ((*puVar19 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar8[0x14] = _DAT_0f552120;
        uVar5 = uRam000000000f55211c;
        uVar4 = _DAT_0f552118;
        uVar3 = uRam000000000f552114;
        *puVar19 = _DAT_0f552110;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar3;
        *(undefined4 *)(plVar8 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar5;
      }
      else {
        func_0x04885070(puVar19,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar22 = (_DAT_0f552110 & 1) != 0;
      lVar11 = 0xf552111;
      if (bVar22) {
        lVar11 = _DAT_0f552120;
      }
      uVar7 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar22) {
        uVar7 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar19,lVar11,uVar7);
    }
  }
  plVar13 = plVar8 + 1;
  plVar8[0x11] = _DAT_0f552108;
  plVar8[0x15] = 0;
  lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  if (lVar11 != 0) {
    (**(code **)(lVar11 + 8))(&bStack_618);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef5fb80;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0ef5fbd0;
  puVar9[0xe] = plStack_5d8;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  puVar20 = puVar9 + 4;
  bStack_618 = (byte)puVar20;
  uStack_617 = (undefined4)((ulong)puVar20 >> 8);
  uStack_613 = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar20 >> 0x38);
  bStack_610 = (byte)puVar9;
  uStack_60f = (undefined4)((ulong)puVar9 >> 8);
  uStack_60b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_60a = (undefined1)((ulong)puVar9 >> 0x30);
  uStack_609 = (undefined1)((ulong)puVar9 >> 0x38);
  puStack_5c8 = puVar19;
  puVar10 = (undefined4 *)func_0x04b081a0(uStack_5d0,&puStack_578,0);
  plVar16 = *(long **)(puVar10 + 0x24);
  if (plVar16 < *(long **)(puVar10 + 0x26)) {
    plVar16[2] = 0;
    plVar16[3] = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[4] = 0;
    if (plVar16 == plVar15) {
LAB_04ad1125:
      *plVar16 = *plVar15;
      plVar16[5] = (long)puVar20;
      plVar16[6] = (long)puVar9;
LAB_04ad118f:
      LOCK();
      puVar9[1] = puVar9[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_5c8 & 1) == 0) {
        plVar16[3] = *(long *)(puStack_5c8 + 4);
        lVar11 = *(long *)(puStack_5c8 + 2);
        plVar16[1] = *(long *)puStack_5c8;
        plVar16[2] = lVar11;
        goto LAB_04ad1125;
      }
      func_0x04885070(plVar16 + 1,plVar8[0x14],plVar8[0x13]);
      *plVar16 = *plVar15;
      puVar9 = (undefined8 *)
               CONCAT17(uStack_609,
                        CONCAT16(uStack_60a,CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
      plVar16[5] = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
      plVar16[6] = CONCAT17(uStack_609,
                            CONCAT16(uStack_60a,CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))
                                    ));
      if (puVar9 != (undefined8 *)0x0) goto LAB_04ad118f;
    }
    plVar16 = plVar16 + 7;
    *(long **)(puVar10 + 0x24) = plVar16;
  }
  else {
    plVar16 = (long *)func_0x04b0c1b0(puVar10 + 0x22,plVar15,&bStack_618);
  }
  *(long **)(puVar10 + 0x24) = plVar16;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar15 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar11 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar15 = (long *)CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar11 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  LOCK();
  lVar11 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  if (puStack_3d8 != (undefined8 *)0x0) {
    (*(code *)puStack_3d8[1])(&puStack_3d8);
  }
  if (ppuStack_598 == &puStack_5b8) {
    lVar11 = 0x20;
LAB_04ad149d:
    (**(code **)((long)*ppuStack_598 + lVar11))();
  }
  else {
    lVar11 = 0x28;
    if (ppuStack_598 != (undefined8 **)0x0) goto LAB_04ad149d;
  }
  if ((uStack_570 & 1) != 0) {
    func_0x0412a280(uStack_560,uStack_570 & 0xfffffffffffffffe);
  }
  uStack_522 = 0;
  uStack_520 = 0;
  uStack_518 = 0;
  bStack_530 = 0x1a;
  _auStack_52f = 0x706f6e6163;
  uStack_52a = 0x5f79;
  bStack_528 = 0x68;
  uStack_527 = 0x6965;
  uStack_525 = 0x67;
  uStack_524 = 0x7468;
  puStack_538 = (undefined *)0x3974dd08a6783749;
  uStack_570 = 0;
  uStack_5b0 = 0;
  puStack_578 = (undefined *)0x0;
  puStack_5b8 = (undefined8 *)&UNK_0ef5fe70;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puVar9 = puStack_5b8;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef5fc48;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  puStack_5b8 = (undefined8 *)0x0;
  bStack_618 = (byte)puVar9;
  uStack_617 = (undefined4)((ulong)puVar9 >> 8);
  uStack_613 = (undefined2)((ulong)puVar9 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar9 >> 0x38);
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&puStack_358,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar15 = plVar8 + 0x11;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0ef5fc98;
  plVar8[0x2e] = 0x7fffffff80000000;
  plVar8[0x30] = 0;
  plVar8[0x31] = 0;
  puVar9 = (undefined8 *)CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  if (puVar9 == (undefined8 *)0x0) {
    lVar11 = 0;
  }
  else {
    (*(code *)*puVar9)(&bStack_618,plVar8 + 0x30);
    lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  }
  bStack_618 = 0;
  uStack_617 = 0;
  uStack_613 = 0;
  uStack_611 = 0;
  plVar8[0x30] = lVar11;
  puVar19 = (uint *)(plVar8 + 0x12);
  if (plVar15 == (long *)&DAT_0f5520a8) {
    plVar8[0x15] = 0;
  }
  else {
    if ((*puVar19 & 1) == 0) {
      if ((_DAT_0f5520b0 & 1) == 0) {
        plVar8[0x14] = _DAT_0f5520c0;
        uVar5 = uRam000000000f5520bc;
        uVar4 = _DAT_0f5520b8;
        uVar3 = uRam000000000f5520b4;
        *puVar19 = _DAT_0f5520b0;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar3;
        *(undefined4 *)(plVar8 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar5;
      }
      else {
        func_0x04885070(puVar19,_DAT_0f5520c0,CONCAT44(uRam000000000f5520bc,_DAT_0f5520b8));
      }
    }
    else {
      bVar22 = (_DAT_0f5520b0 & 1) != 0;
      lVar11 = 0xf5520b1;
      if (bVar22) {
        lVar11 = _DAT_0f5520c0;
      }
      uVar7 = (ulong)((_DAT_0f5520b0 & 0xff) >> 1);
      if (bVar22) {
        uVar7 = CONCAT44(uRam000000000f5520bc,_DAT_0f5520b8);
      }
      func_0x04885120(puVar19,lVar11,uVar7);
    }
    lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
    plVar8[0x11] = _DAT_0f5520a8;
    plVar8[0x15] = 0;
    if (lVar11 != 0) {
      (**(code **)(lVar11 + 8))(&bStack_618);
    }
  }
  plVar13 = plVar8 + 1;
  puStack_5c0 = puVar19;
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef5fd78;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0ef5fdc8;
  puVar9[0xe] = plVar8 + 4;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  puVar20 = puVar9 + 4;
  bStack_618 = (byte)puVar20;
  uStack_617 = (undefined4)((ulong)puVar20 >> 8);
  uStack_613 = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar20 >> 0x38);
  bStack_610 = (byte)puVar9;
  uStack_60f = (undefined4)((ulong)puVar9 >> 8);
  uStack_60b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_60a = (undefined1)((ulong)puVar9 >> 0x30);
  uStack_609 = (undefined1)((ulong)puVar9 >> 0x38);
  puStack_5c8 = (uint *)(plVar8 + 4);
  puVar10 = (undefined4 *)func_0x04b8baa0(plStack_5d8,&puStack_538);
  plVar16 = *(long **)(puVar10 + 0x24);
  if (plVar16 < *(long **)(puVar10 + 0x26)) {
    plVar16[2] = 0;
    plVar16[3] = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[4] = 0;
    if (plVar16 != plVar15) {
      puVar19 = (uint *)(plVar16 + 1);
      if ((*puStack_5c0 & 1) == 0) {
        plVar16[3] = *(long *)(puStack_5c0 + 4);
        lVar11 = *(long *)(puStack_5c0 + 2);
        *(undefined8 *)puVar19 = *(undefined8 *)puStack_5c0;
        plVar16[2] = lVar11;
      }
      else {
        puStack_5c0 = puVar19;
        func_0x04885070(puVar19,plVar8[0x14],plVar8[0x13]);
      }
    }
    *plVar16 = *plVar15;
    plVar16[5] = (long)puVar20;
    plVar16[6] = (long)puVar9;
    LOCK();
    puVar9[1] = puVar9[1] + 1;
    UNLOCK();
    plVar16 = plVar16 + 7;
    *(long **)(puVar10 + 0x24) = plVar16;
  }
  else {
    plVar16 = (long *)func_0x04b8d920(puVar10 + 0x22,plVar15,&bStack_618);
  }
  puVar19 = puStack_5c8;
  *(long **)(puVar10 + 0x24) = plVar16;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar15 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar11 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar15 = (long *)CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar11 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  LOCK();
  lVar11 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  *(undefined4 *)(plVar8 + 0x2e) = 1;
  puStack_498 = (undefined8 *)0x0;
  bStack_490 = 0;
  uStack_48f = 0;
  auStack_48b._0_3_ = 0;
  auStack_48b[3] = 0;
  uStack_487 = 0;
  uStack_485 = 0;
  uStack_483 = 0;
  uStack_482 = 0;
  (**(code **)(plVar8[4] + 0x10))(puVar19,&puStack_498);
  if (((ulong)puStack_498 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_482,
                             CONCAT15(uStack_483,
                                      CONCAT23(uStack_485,CONCAT21(uStack_487,auStack_48b[3])))),
                    (ulong)puStack_498 & 0xfffffffffffffffe);
  }
  if (puStack_578 != (undefined *)0x0) {
    (**(code **)(puStack_578 + 8))(&puStack_578);
  }
  if ((bStack_530 & 1) != 0) {
    func_0x0412a280(uStack_520,
                    CONCAT26(uStack_52a,CONCAT51(_auStack_52f,bStack_530)) & 0xfffffffffffffffe);
  }
  uStack_344 = 0;
  uStack_340 = 0;
  uStack_338 = 0;
  bStack_350 = 0x16;
  uStack_34f = 0x61725f65736162;
  uStack_348 = 100;
  uStack_347 = 0x7569;
  uStack_345 = 0x73;
  puStack_358 = (undefined *)0xc3aece27b9884177;
  bStack_530 = 0;
  _auStack_52f = 0;
  uStack_52a = 0;
  uStack_5b0 = 0;
  puStack_538 = (undefined *)0x0;
  puStack_5b8 = (undefined8 *)&UNK_0ef60068;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puVar9 = puStack_5b8;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef5fe98;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  puStack_5b8 = (undefined8 *)0x0;
  bStack_618 = (byte)puVar9;
  uStack_617 = (undefined4)((ulong)puVar9 >> 8);
  uStack_613 = (undefined2)((ulong)puVar9 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar9 >> 0x38);
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&puStack_4d8,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar15 = plVar8 + 0x11;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0ef5fee8;
  plVar8[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar8 + 0x2f) = 1;
  plVar8[0x30] = 0;
  plVar8[0x31] = 0;
  puVar9 = (undefined8 *)CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  if (puVar9 == (undefined8 *)0x0) {
    lVar11 = 0;
  }
  else {
    (*(code *)*puVar9)(&bStack_618,plVar8 + 0x30);
    lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  }
  bStack_618 = 0;
  uStack_617 = 0;
  uStack_613 = 0;
  uStack_611 = 0;
  plVar8[0x30] = lVar11;
  puVar19 = (uint *)(plVar8 + 0x12);
  if (plVar15 == (long *)&DAT_0f552078) {
    plVar8[0x15] = 0;
  }
  else {
    if ((*puVar19 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar8[0x14] = _DAT_0f552090;
        uVar5 = uRam000000000f55208c;
        uVar4 = _DAT_0f552088;
        uVar3 = uRam000000000f552084;
        *puVar19 = _DAT_0f552080;
        *(undefined4 *)((long)plVar8 + 0x94) = uVar3;
        *(undefined4 *)(plVar8 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar8 + 0x9c) = uVar5;
      }
      else {
        func_0x04885070(puVar19,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar22 = (_DAT_0f552080 & 1) != 0;
      lVar11 = 0xf552081;
      if (bVar22) {
        lVar11 = _DAT_0f552090;
      }
      uVar7 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar22) {
        uVar7 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puVar19,lVar11,uVar7);
    }
    lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
    plVar8[0x11] = _DAT_0f552078;
    plVar8[0x15] = 0;
    if (lVar11 != 0) {
      (**(code **)(lVar11 + 8))(&bStack_618);
    }
  }
  plVar13 = plVar8 + 1;
  puStack_5c0 = puVar19;
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  LOCK();
  *plVar13 = *plVar13 + 1;
  UNLOCK();
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef5ffc8;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0ef60018;
  puVar9[0xe] = plVar8 + 4;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  puVar20 = puVar9 + 4;
  bStack_618 = (byte)puVar20;
  uStack_617 = (undefined4)((ulong)puVar20 >> 8);
  uStack_613 = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar20 >> 0x38);
  bStack_610 = (byte)puVar9;
  uStack_60f = (undefined4)((ulong)puVar9 >> 8);
  uStack_60b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_60a = (undefined1)((ulong)puVar9 >> 0x30);
  uStack_609 = (undefined1)((ulong)puVar9 >> 0x38);
  puStack_5c8 = (uint *)(plVar8 + 4);
  puVar10 = (undefined4 *)func_0x04b8baa0(plStack_5d8,&puStack_358);
  plVar16 = *(long **)(puVar10 + 0x24);
  if (plVar16 < *(long **)(puVar10 + 0x26)) {
    plVar16[2] = 0;
    plVar16[3] = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[4] = 0;
    if (plVar16 != plVar15) {
      puVar19 = (uint *)(plVar16 + 1);
      if ((*puStack_5c0 & 1) == 0) {
        plVar16[3] = *(long *)(puStack_5c0 + 4);
        lVar11 = *(long *)(puStack_5c0 + 2);
        *(undefined8 *)puVar19 = *(undefined8 *)puStack_5c0;
        plVar16[2] = lVar11;
      }
      else {
        puStack_5c0 = puVar19;
        func_0x04885070(puVar19,plVar8[0x14],plVar8[0x13]);
      }
    }
    *plVar16 = *plVar15;
    plVar16[5] = (long)puVar20;
    plVar16[6] = (long)puVar9;
    LOCK();
    puVar9[1] = puVar9[1] + 1;
    UNLOCK();
    plVar16 = plVar16 + 7;
    *(long **)(puVar10 + 0x24) = plVar16;
  }
  else {
    plVar16 = (long *)func_0x04b8d920(puVar10 + 0x22,plVar15,&bStack_618);
  }
  puVar19 = puStack_5c8;
  *(long **)(puVar10 + 0x24) = plVar16;
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  if (*(long *)(puVar10 + 2) != 0) {
    LOCK();
    plVar15 = (long *)(*(long *)(puVar10 + 2) + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = (long *)plVar8[0xf];
  *(undefined4 *)(plVar8 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar8 + 0x74) = uVar4;
  *(undefined4 *)(plVar8 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar8 + 0x7c) = uVar6;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar11 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  *(undefined1 *)(plVar8 + 0x10) = *(undefined1 *)((long)puVar10 + 0xa1);
  plVar15 = (long *)CONCAT17(uStack_609,
                             CONCAT16(uStack_60a,
                                      CONCAT15(uStack_60b,CONCAT41(uStack_60f,bStack_610))));
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar11 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  LOCK();
  lVar11 = *plVar13;
  *plVar13 = *plVar13 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar11 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  *(undefined4 *)(plVar8 + 0x2e) = 1;
  puStack_418 = (undefined8 *)0x0;
  bStack_410 = 0;
  uStack_40f = 0;
  uStack_408 = 0;
  uStack_407 = 0;
  uStack_405 = 0;
  (**(code **)(plVar8[4] + 0x10))(puVar19,&puStack_418);
  if (((ulong)puStack_418 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_405,CONCAT21(uStack_407,uStack_408)),
                    (ulong)puStack_418 & 0xfffffffffffffffe);
  }
  if (puStack_538 != (undefined *)0x0) {
    (**(code **)(puStack_538 + 8))(&puStack_538);
  }
  if ((bStack_350 & 1) != 0) {
    func_0x0412a280(uStack_340,CONCAT71(uStack_34f,bStack_350) & 0xfffffffffffffffe);
  }
  uStack_4c5 = 0;
  uStack_4c4 = 0;
  uStack_4c0 = 0;
  uStack_4bf = 0;
  uStack_4bd = 0;
  uStack_4b8 = 0;
  puStack_4d8 = (undefined8 *)0x3a4ad5b186795d27;
  bStack_4d0 = 0x14;
  uStack_4cf = 0x6661656c;
  auStack_4cb = (undefined1  [4])0x6f6c625f;
  uStack_4c7 = 0x6b63;
  bStack_350 = 0;
  uStack_34f = 0;
  uStack_5b0 = 0;
  puStack_358 = (undefined *)0x0;
  puStack_5b8 = (undefined8 *)&UNK_0ef60260;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puVar9 = puStack_5b8;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef60090;
  bStack_610 = 0;
  uStack_60f = 0;
  uStack_60b = 0;
  uStack_60a = 0;
  uStack_609 = 0;
  puStack_5b8 = (undefined8 *)0x0;
  bStack_618 = (byte)puVar9;
  uStack_617 = (undefined4)((ulong)puVar9 >> 8);
  uStack_613 = (undefined2)((ulong)puVar9 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar9 >> 0x38);
  plVar8[4] = (long)&UNK_0f2ccd78;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  *(undefined1 *)(plVar8 + 0xd) = 0;
  func_0x04aa75f0(plVar8 + 0xe,&uStack_388,&UNK_01254d89);
  *(undefined1 *)(plVar8 + 0x10) = 0;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plVar8[0x17] = 0xffffffff;
  plVar8[0x26] = 0;
  plVar8[0x27] = 0;
  plVar8[0x18] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = 0;
  plVar8[0x1c] = 0;
  plVar8[0x1d] = 0;
  plVar8[0x1e] = 0;
  plVar8[0x1f] = 0;
  plVar8[4] = (long)&UNK_0ef600e0;
  plVar8[0x2e] = 0;
  plVar8[0x2f] = 0;
  puVar9 = (undefined8 *)CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  if (puVar9 == (undefined8 *)0x0) {
    lVar11 = 0;
  }
  else {
    (*(code *)*puVar9)(&bStack_618,plVar8 + 0x2e);
    lVar11 = CONCAT17(uStack_611,CONCAT25(uStack_613,CONCAT41(uStack_617,bStack_618)));
  }
  plVar15 = plVar8 + 1;
  plVar8[0x2e] = lVar11;
  if (puStack_5b8 != (undefined8 *)0x0) {
    (*(code *)puStack_5b8[1])(&puStack_5b8);
  }
  LOCK();
  *plVar15 = *plVar15 + 1;
  UNLOCK();
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar13 = plVar8 + 4;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0ef601c0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = &UNK_0ef60210;
  puVar9[0xe] = plVar13;
  puVar9[0xf] = plVar8;
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  puVar20 = puVar9 + 4;
  bStack_618 = (byte)puVar20;
  uStack_617 = (undefined4)((ulong)puVar20 >> 8);
  uStack_613 = (undefined2)((ulong)puVar20 >> 0x28);
  uStack_611 = (undefined1)((ulong)puVar20 >> 0x38);
  bStack_610 = (byte)puVar9;
  uStack_60f = (undefined4)((ulong)puVar9 >> 8);
  uStack_60b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_60a = (undefined1)((ulong)puVar9 >> 0x30);
  uStack_609 = (undefined1)((ulong)puVar9 >> 0x38);
  puVar10 = (undefined4 *)func_0x04b8baa0(plStack_5d8,&puStack_4d8);
  plVar16 = plVar8 + 0x11;
  plVar14 = *(long **)(puVar10 + 0x24);
  if (plVar14 < *(long **)(puVar10 + 0x26)) {
    plVar14[2] = 0;
    plVar14[3] = 0;
    *plVar14 = 0;
    plVar14[1] = 0;
    plVar14[4] = 0;
    if (plVar14 != plVar16) {
      plVar2 = plVar14 + 1;
      if ((*(byte *)(plVar8 + 0x12) & 1) == 0) {
        plVar14[3] = plVar8[0x14];
        lVar11 = plVar8[0x13];
        *plVar2 = plVar8[0x12];
        plVar14[2] = lVar11;
      }
      else {
        plStack_5d8 = plVar16;
        puStack_5c8 = (uint *)plVar2;
        func_0x04885070(plVar2,plVar8[0x14],plVar8[0x13]);
        plVar16 = plStack_5d8;
      }
    }
    *plVar14 = *plVar16;
    plVar14[5] = (long)puVar20;
    plVar14[6] = (long)p
/* truncated by DecompileTargets.java */


/* ---- referenced strings ----
 * 0x11d3bce  hanging_leaves_chance
 * 0x11ec534  corner_hole_chance
 * 0x1257a3a  radius_step_modifier
 * 0x13abfa3  random_spread_canopy
 */
