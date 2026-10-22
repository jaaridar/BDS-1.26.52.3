/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd77ad70 (ELF vaddr 0xd67ad70)
 * Label: caller-of-callee
 * Body:  [[0d77ad70, 0d77b190] [0d77b1a0, 0d77b469] [0d77b4c5, 0d77b4fa] [0d77b508, 0d77b529]]
 * Ghidra: FUN_0d77ad70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0d77ad70(undefined8 *param_1,long *param_2,byte *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  bool bVar20;
  undefined1 auStack_538 [8];
  ulong uStack_530;
  undefined8 *puStack_528;
  undefined7 *puStack_518;
  ulong uStack_510;
  undefined8 *puStack_508;
  undefined8 *puStack_500;
  undefined4 *puStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  byte bStack_4d8;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined4 *puStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  byte bStack_488;
  byte bStack_478;
  undefined7 uStack_477;
  ulong uStack_470;
  undefined7 *puStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  ulong uStack_450;
  byte *pbStack_448;
  ulong uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  byte bStack_418;
  undefined7 uStack_417;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  byte bStack_3f8;
  byte bStack_3f0;
  undefined8 *puStack_38;
  
  puStack_460 = param_1;
  (**(code **)(*param_2 + 0x168))(&bStack_478);
  pbVar17 = *(byte **)(param_3 + 0x10);
  puVar15 = *(undefined8 **)(param_3 + 8);
  if ((*param_3 & 1) == 0) {
    pbVar17 = param_3 + 1;
    puVar15 = (undefined8 *)(ulong)(*param_3 >> 1);
  }
  uVar19 = 0;
  do {
    uVar18 = uVar19;
    if ((long)puVar15 + uVar18 == 0) goto LAB_0d77adf7;
    uVar19 = uVar18 - 1;
  } while ((((byte *)((long)puVar15 + (long)pbVar17))[uVar18 - 1] != 0x5c) &&
          (((byte *)((long)puVar15 + (long)pbVar17))[uVar18 - 1] != 0x2f));
  if ((undefined8 *)((long)puVar15 + uVar19) == (undefined8 *)0xffffffffffffffff) {
LAB_0d77adf7:
    puVar16 = (undefined8 *)0x0;
    func_0x0eee2dd0(&uStack_438,0,0x408);
    if (puVar15 < (undefined8 *)0x400) {
      puVar16 = puVar15;
      if (puVar15 != (undefined8 *)0x0) {
        func_0x0eee2f00(&uStack_438,pbVar17,puVar15);
      }
LAB_0d77ae95:
      *(undefined1 *)((long)&uStack_438 + (long)puVar16) = 0;
      puStack_38 = puVar16;
    }
  }
  else {
    if (puVar15 <= (undefined8 *)((long)puVar15 + uVar19)) {
      uVar14 = func_0x04882ef0(&UNK_01306d2f);
      func_0x041084d6(&DAT_0f7b8fb8);
      if (((ulong)auStack_538 & 1) != 0) goto LAB_0d77b4dd;
      while ((bStack_478 & 1) == 0) {
        func_0x0eee2d70(uVar14);
LAB_0d77b4dd:
        thunk_FUN_0ee326a0(puStack_528,(ulong)auStack_538 & 0xfffffffffffffffe);
      }
      thunk_FUN_0ee326a0(puStack_468,CONCAT71(uStack_477,bStack_478) & 0xfffffffffffffffe);
      func_0x0eee2d70(uVar14);
      pcVar1 = (code *)swi(3);
      puVar15 = (undefined8 *)(*pcVar1)();
      return puVar15;
    }
    puVar16 = (undefined8 *)0x0;
    func_0x0eee2dd0(&uStack_438,0,0x408);
    if (0xfffffffffffffbff < uVar19) {
      puVar16 = (undefined8 *)~uVar19;
      if (uVar19 != 0xffffffffffffffff) {
        func_0x0eee2f00(&uStack_438,(byte *)((long)puVar15 + (long)pbVar17) + uVar18,puVar16);
      }
      goto LAB_0d77ae95;
    }
  }
  puStack_518 = &uStack_477;
  uStack_510 = (ulong)(bStack_478 >> 1);
  if ((bStack_478 & 1) != 0) {
    uStack_510 = uStack_470;
    puStack_518 = puStack_468;
  }
  puStack_508 = &uStack_438;
  puStack_500 = puVar16;
  func_0x048ad670(auStack_538,&puStack_518,2,0x2f);
  if ((DAT_0f7b8fb8 == '\0') && (iVar13 = func_0x04108328(&DAT_0f7b8fb8), iVar13 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  bVar20 = (*param_3 & 1) != 0;
  pbStack_448 = param_3 + 1;
  if (bVar20) {
    pbStack_448 = *(byte **)(param_3 + 0x10);
  }
  uStack_440 = (ulong)(*param_3 >> 1);
  if (bVar20) {
    uStack_440 = *(ulong *)(param_3 + 8);
  }
  puStack_458 = (undefined8 *)(auStack_538 + 1);
  uStack_450 = (ulong)auStack_538 >> 1 & 0x7f;
  if (((ulong)auStack_538 & 1) != 0) {
    uStack_450 = uStack_530;
    puStack_458 = puStack_528;
  }
  (**(code **)(_DAT_0f7b8f98 + 0x48))(&uStack_438,&DAT_0f7b8f98,&pbStack_448,&puStack_458);
  puVar15 = puStack_460;
  puStack_4b8 = puStack_528;
  uStack_4c0 = uStack_530;
  uStack_4c8 = auStack_538;
  uVar11 = _UNK_0f4827f4;
  uVar10 = _UNK_0f4827f0;
  uVar9 = _UNK_0f4827ec;
  uVar8 = _UNK_0f4827e4;
  uVar7 = _UNK_0f4827e0;
  uVar6 = _UNK_0f4827dc;
  uVar5 = _DAT_0f4827d8;
  bStack_4d8 = bStack_3f8;
  if (bStack_3f8 == 0) {
    puStack_518 = uStack_438;
    uStack_510 = (ulong)uStack_430;
    puVar2 = (undefined4 *)CONCAT44(uStack_41c,uStack_420);
    puStack_508 = uStack_428;
    puStack_4f8 = (undefined4 *)CONCAT71(uStack_417,bStack_418);
    lStack_4f0 = lStack_410;
    lStack_4e8 = lStack_408;
    lStack_4e0 = lStack_400;
    uStack_428 = (undefined8 *)CONCAT44(_UNK_0f4827ec,_DAT_0f4827e8);
    uStack_420 = _UNK_0f4827f0;
    uStack_41c = _UNK_0f4827f4;
    uStack_438 = (undefined7 *)CONCAT44(_UNK_0f4827dc,_DAT_0f4827d8);
    uStack_430 = (undefined *)CONCAT44(_UNK_0f4827e4,_UNK_0f4827e0);
    bStack_418 = 0;
    bStack_3f0 = 0;
    if (puVar2 < puStack_4f8) {
      puVar2[4] = _DAT_0f4827e8;
      puVar2[5] = uVar9;
      puVar2[6] = uVar10;
      puVar2[7] = uVar11;
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      *(undefined1 *)(puVar2 + 8) = 0;
      *(undefined1 *)(puVar2 + 0x12) = 0;
      puStack_4b0 = (undefined8 *)(puVar2 + 0x14);
    }
    else {
      puStack_500 = (undefined8 *)func_0x0489d2c0(&puStack_508,&uStack_438);
      puStack_4b0 = puStack_500;
      if (((bStack_3f0 & 1) != 0) && ((bStack_418 & 1) != 0)) {
        thunk_FUN_0ee326a0(lStack_408,CONCAT71(uStack_417,bStack_418) & 0xfffffffffffffffe);
        puStack_4b0 = puStack_500;
      }
    }
    lStack_490 = lStack_4e0;
    lStack_498 = lStack_4e8;
    lStack_4a0 = lStack_4f0;
    puStack_4a8 = puStack_4f8;
    puStack_4b8 = puStack_508;
    puStack_508 = (undefined8 *)0x0;
    puStack_500 = (undefined8 *)0x0;
    puStack_4f8 = (undefined4 *)0x0;
    lStack_4f0 = 0;
    lStack_4e8 = 0;
    lStack_4e0 = 0;
    bStack_488 = 0;
    lVar3 = lStack_4f0;
    uStack_4c8 = (undefined1  [8])puStack_518;
    uStack_4c0 = uStack_510;
  }
  else {
    bStack_488 = 1;
    auStack_538 = (undefined1  [8])0x0;
    uStack_530 = 0;
    puStack_528 = (undefined8 *)0x0;
    lVar3 = lStack_4f0;
  }
  lStack_4f0 = lVar3;
  if ((bStack_4d8 & 1) == 0) {
    lVar4 = lStack_4e8;
    if (lVar3 != 0) {
      while (lVar3 != lVar4) {
        func_0x048b3e80(lVar4 + -0x40);
        lVar4 = lVar4 + -0x40;
      }
      lStack_4e8 = lVar3;
      thunk_FUN_0ee326a0(lStack_4f0,lStack_4e0 - lStack_4f0);
    }
    puVar12 = puStack_508;
    puVar16 = puStack_500;
    if (puStack_508 != (undefined8 *)0x0) {
      for (; puVar12 != puVar16; puVar16 = puVar16 + -10) {
        if ((*(char *)(puVar16 + -1) == '\x01') && ((*(byte *)(puVar16 + -6) & 1) != 0)) {
          thunk_FUN_0ee326a0(puVar16[-4],puVar16[-6] & 0xfffffffffffffffe);
        }
      }
      puStack_500 = puVar12;
      thunk_FUN_0ee326a0(puStack_508,(long)puStack_4f8 - (long)puStack_508);
    }
  }
  if (((ulong)auStack_538 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_528,(ulong)auStack_538 & 0xfffffffffffffffe);
  }
  uStack_438 = (undefined7 *)0x11ce8d796fc35d23;
  uStack_430 = &UNK_0140f690;
  uStack_428 = (undefined8 *)0x1;
  uStack_420 = 0x7ce;
  if (bStack_488 == 0) {
    puStack_518 = (undefined7 *)0x0;
    uStack_510 = 0;
    puStack_508 = (undefined8 *)0x0;
    func_0x0eedeb80(2,0x2d,&uStack_4c8,&puStack_518,&uStack_438);
    if (((ulong)puStack_518 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_508,(ulong)puStack_518 & 0xfffffffffffffffe);
    }
  }
  if ((bStack_488 & 1) == 0) {
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
joined_r0x0d77b2c8:
    if ((bStack_488 & 1) != 0) goto LAB_0d77b2ca;
LAB_0d77b30c:
    lVar4 = lStack_4a0;
    lVar3 = lStack_498;
    if (lStack_4a0 != 0) {
      while (lVar4 != lVar3) {
        func_0x048b3e80(lVar3 + -0x40);
        lVar3 = lVar3 + -0x40;
      }
      lStack_498 = lVar4;
      thunk_FUN_0ee326a0(lStack_4a0,lStack_490 - lStack_4a0);
    }
    puVar12 = puStack_4b8;
    puVar16 = puStack_4b0;
    if (puStack_4b8 == (undefined8 *)0x0) goto LAB_0d77b3ca;
    for (; puVar12 != puVar16; puVar16 = puVar16 + -10) {
      if ((*(char *)(puVar16 + -1) == '\x01') && ((*(byte *)(puVar16 + -6) & 1) != 0)) {
        thunk_FUN_0ee326a0(puVar16[-4],puVar16[-6] & 0xfffffffffffffffe);
      }
    }
    puStack_4b0 = puVar12;
    uVar19 = (long)puStack_4a8 - (long)puStack_4b8;
  }
  else {
    if (((ulong)uStack_4c8 & 1) != 0) {
      FUN_0412e5e0(puVar15,puStack_4b8,uStack_4c0);
      goto joined_r0x0d77b2c8;
    }
    puVar15[2] = puStack_4b8;
    *(undefined4 *)puVar15 = (undefined4)uStack_4c8;
    *(undefined4 *)((long)puVar15 + 4) = uStack_4c8._4_4_;
    *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_4c0;
    *(undefined4 *)((long)puVar15 + 0xc) = uStack_4c0._4_4_;
    if ((bStack_488 & 1) == 0) goto LAB_0d77b30c;
LAB_0d77b2ca:
    if (((ulong)uStack_4c8 & 1) == 0) goto LAB_0d77b3ca;
    uVar19 = (ulong)uStack_4c8 & 0xfffffffffffffffe;
  }
  thunk_FUN_0ee326a0(puStack_4b8,uVar19);
LAB_0d77b3ca:
  if ((bStack_478 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_468,CONCAT71(uStack_477,bStack_478) & 0xfffffffffffffffe);
  }
  return puVar15;
}


