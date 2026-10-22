/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd61d410 (ELF vaddr 0xd51d410)
 * Label: caller-of-callee
 * Body:  [[0d61d410, 0d61f5b4] [0d61f5c0, 0d620b69] [0d620b8b, 0d620b98] [0d620efb, 0d620f26] [0d62104e, 0d6210de]]
 * Ghidra: FUN_0d61d410
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d61d410(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  uint *puVar2;
  undefined1 **ppuVar3;
  byte bVar4;
  char *pcVar5;
  undefined1 ***pppuVar6;
  undefined1 ***pppuVar7;
  code *pcVar8;
  ushort uVar9;
  undefined8 *puVar10;
  undefined2 uVar11;
  long ****pppplVar12;
  short *psVar13;
  char cVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  long *plVar18;
  undefined1 ****ppppuVar19;
  undefined1 ****ppppuVar20;
  undefined1 ***pppuVar21;
  undefined1 ****ppppuVar22;
  undefined1 ****ppppuVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  undefined1 ***pppuVar30;
  long lVar31;
  undefined8 uVar32;
  undefined1 ****ppppuVar33;
  short *psVar34;
  ulong uVar35;
  int *piVar36;
  bool bVar37;
  undefined8 uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  undefined1 ****ppppuStack_6a0;
  short sStack_698;
  short sStack_696;
  short sStack_694;
  undefined2 uStack_692;
  ulong uStack_690;
  ulong uStack_688;
  byte *pbStack_680;
  undefined8 *puStack_678;
  undefined8 uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  long *plStack_640;
  undefined1 ***pppuStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 *puStack_620;
  undefined8 uStack_618;
  undefined *puStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  long *plStack_5f8;
  undefined8 uStack_5d8;
  undefined1 uStack_5c8;
  undefined2 uStack_5c6;
  undefined1 uStack_5c4;
  undefined1 ****ppppuStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_598;
  ulong uStack_590;
  undefined2 uStack_588;
  undefined1 ***pppuStack_580;
  undefined1 ***pppuStack_578;
  undefined8 uStack_570;
  ulong uStack_568;
  undefined8 uStack_560;
  undefined1 ****ppppuStack_558;
  undefined1 ****ppppuStack_550;
  undefined1 ****ppppuStack_548;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined2 uStack_528;
  long ****pppplStack_518;
  short *psStack_510;
  char *pcStack_508;
  long *plStack_500;
  undefined1 *****pppppuStack_4f8;
  undefined1 ***pppuStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 *puStack_4e0;
  uint uStack_498;
  undefined1 ****ppppuStack_488;
  undefined1 ****ppppuStack_480;
  undefined8 uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  long *plStack_460;
  undefined8 *puStack_458;
  undefined1 ***pppuStack_450;
  undefined *puStack_448;
  undefined8 uStack_440;
  undefined1 ****ppppuStack_438;
  short *psStack_430;
  char *pcStack_428;
  long *plStack_420;
  undefined1 ***pppuStack_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined8 *puStack_400;
  undefined8 uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  undefined8 uStack_3b8;
  undefined1 uStack_3a8;
  undefined2 uStack_3a6;
  undefined1 uStack_3a4;
  undefined8 uStack_38;
  
  *param_1 = &UNK_0f47b718;
  param_1[1] = param_2;
  pbStack_680 = (byte *)(param_1 + 2);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f600000;
  func_0x048af640(param_1 + 10,8);
  *(undefined8 *)((long)param_1 + 0x92) = 0;
  *(undefined8 *)((long)param_1 + 0x9a) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[7] = &UNK_0f534768;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puStack_678 = param_1 + 7;
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0ef44a60;
  *(undefined1 *)(puVar16 + 3) = 1;
  param_1[8] = puVar16 + 3;
  param_1[9] = puVar16;
  param_1[7] = &UNK_0ef471f0;
  func_0x05d54750(&ppppuStack_438,&UNK_0f47bb80);
  ppppuStack_480 = (undefined1 ****)(param_1 + 0x16);
  *ppppuStack_480 = (undefined1 ***)0x0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = param_1 + 0x1a;
  param_1[0x20] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = ppppuStack_438;
  param_1[0x29] = 0;
  psVar34 = psStack_430;
  puStack_458 = param_3;
  if (((ulong)psStack_430 >> 0x37 & 1) != 0) {
    uVar35 = (ulong)psStack_430 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar35 - 8);
    lVar27 = lVar24 + 9;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar18 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar18 = lVar24;
    func_0x0eee2f00(plVar18 + 1,uVar35,lVar24);
    *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
    psVar34 = (short *)((ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  param_1[0x29] = psVar34;
  param_1[0x2a] = 0;
  if (((ulong)pcStack_428 & 0x80000000000000) == 0) {
    param_1[0x2a] = pcStack_428;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
  }
  else {
    uVar35 = (ulong)pcStack_428 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar35 - 8);
    lVar27 = lVar24 + 9;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar18 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar18 = lVar24;
    func_0x0eee2f00(plVar18 + 1,uVar35,lVar24);
    *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
    param_1[0x2a] = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x33] = 0;
    if (((ulong)pcStack_428 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pcStack_428 & 0xff00ffffffffffff) - 8);
    }
  }
  pcStack_428 = (char *)0x0;
  if (((ulong)psStack_430 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)psStack_430 & 0xff00ffffffffffff) - 8)
    ;
  }
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x70,0);
  }
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0f47c6b8;
  puVar16[6] = 0;
  puVar16[4] = puVar16 + 4;
  puVar16[5] = puVar16 + 4;
  puVar16[7] = 0;
  puVar16[8] = 0;
  puVar16[9] = 0;
  puVar16[10] = 0;
  puVar16[0xb] = 0;
  puVar16[0xc] = 0;
  puVar16[3] = &UNK_0f47c708;
  puVar16[0xd] = &UNK_0f47c738;
  param_1[0x34] = puVar16 + 3;
  param_1[0x35] = puVar16;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  puVar10 = puStack_678;
  puVar16[2] = 0;
  puVar16[3] = 0;
  *puVar16 = 0;
  puVar16[1] = 0;
  *(undefined4 *)(puVar16 + 4) = 0x3f800000;
  param_1[0x36] = puVar16;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0x3f800000;
  plStack_460 = param_1 + 0x3c;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x3f800000;
  func_0x0e7f3f70(puStack_678);
  func_0x0d8a24d0(puVar10);
  func_0x0da5ca80(puVar10);
  if ((DAT_0f721450 == '\0') && (iVar15 = func_0x04108328(&DAT_0f721450), iVar15 != 0)) {
    func_0x0d657dc0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7213d0,0xf53dab8);
    func_0x0410844d(&DAT_0f721450);
  }
  plVar18 = (long *)(param_1[10] +
                    (ulong)((int)((ulong)(param_1[0xb] - param_1[10]) >> 3) - 1U &
                           *(uint *)(_DAT_0f7213d0 + 4)) * 8);
  do {
    lVar27 = *plVar18;
    if (lVar27 == -1) goto LAB_0d61d935;
    plVar18 = (long *)(param_1[0xd] + lVar27 * 0x18);
  } while (*(uint *)(param_1[0xd] + 8 + lVar27 * 0x18) != *(uint *)(_DAT_0f7213d0 + 4));
  if (plVar18 == (long *)param_1[0xe]) {
LAB_0d61d935:
    puVar17 = &DAT_0f7213d0;
    if (iRam000000000f721430 != -0x2b3da790) goto LAB_0d61d9aa;
LAB_0d61d965:
    lVar27 = *(long *)(puVar17 + 0x68);
    if (lVar27 == 0) goto LAB_0d61d9aa;
    bVar37 = (*(byte *)(lVar27 + 8) & 1) != 0;
    lVar24 = lVar27 + 9;
    if (bVar37) {
      lVar24 = *(long *)(lVar27 + 0x18);
    }
    uVar35 = (ulong)(*(byte *)(lVar27 + 8) >> 1);
    if (bVar37) {
      uVar35 = *(ulong *)(lVar27 + 0x10);
    }
    func_0x0d658630(&pppplStack_518,puStack_678,lVar24,uVar35);
  }
  else {
    puVar17 = (undefined *)plVar18[2];
    if (*(int *)(puVar17 + 0x60) == -0x2b3da790) goto LAB_0d61d965;
LAB_0d61d9aa:
    func_0x0d658630(&pppplStack_518,puStack_678,0,0);
  }
  if ((char)puStack_4e8 == '\0') {
    uStack_528._1_1_ = (undefined1)((ushort)uStack_528 >> 8);
    uStack_608._4_4_ = (uint)(uStack_608 >> 0x20);
    uStack_648._4_4_ = (uint)((ulong)uStack_648 >> 0x20);
    uStack_658._4_4_ = (undefined4)((ulong)uStack_658 >> 0x20);
    func_0x0d6590a0(&ppppuStack_438,&pppplStack_518,&UNK_013771cd,0xe);
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar18 = (long)&UNK_0f012628;
    if (plStack_420 != (long *)0x0) {
      lVar27 = *plStack_420;
      plStack_420 = plVar18;
      (**(code **)(lVar27 + 8))();
      plVar18 = plStack_420;
    }
    plStack_420 = plVar18;
    uStack_658 = (undefined1 ****)CONCAT44(uStack_658._4_4_,pcStack_428._0_4_);
    uStack_650 = (short *)0x0;
    uStack_648 = (char *)((ulong)uStack_648._4_4_ << 0x20);
    plStack_640 = (long *)0x1;
    pppuStack_638 = (undefined1 ***)0x0;
    uStack_630 = (undefined1 ***)&UNK_05eadd90;
    uStack_628 = (undefined8 *)&SUB_048b06d0;
    puStack_620 = (undefined8 *)&SUB_05eada80;
    uStack_618 = &UNK_0d6596a0;
    puStack_610 = &UNK_0d659840;
    uStack_608 = (ulong)uStack_608._4_4_ << 0x20;
    uStack_600 = 0;
    plStack_5f8 = (long *)0x0;
    func_0x048b05a0(psStack_430,&uStack_658);
    plVar18 = plStack_5f8;
    if (plStack_5f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5f8 + 1;
      lVar27 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar27 == 0) {
        (**(code **)(*plStack_5f8 + 0x10))(plStack_5f8);
        func_0x0412c2d0(plVar18);
      }
    }
    func_0x0d6593a0(&ppppuStack_438);
    uStack_528 = CONCAT11(uStack_528._1_1_,(char)puStack_4e8);
    FUN_048b0bc0(&plStack_420);
    func_0x0d6590a0(&ppppuStack_438,&ppppuStack_558,&UNK_014c17f6,0x17);
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar18 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar18 = (long)&UNK_0f47bd40;
    if (plStack_420 != (long *)0x0) {
      lVar27 = *plStack_420;
      plStack_420 = plVar18;
      (**(code **)(lVar27 + 8))();
      plVar18 = plStack_420;
    }
    plStack_420 = plVar18;
    uStack_658 = (undefined1 ****)CONCAT44(uStack_658._4_4_,pcStack_428._0_4_);
    uStack_650 = (short *)0x0;
    uStack_648 = (char *)((ulong)uStack_648 & 0xffffffff00000000);
    plStack_640 = (long *)0x1;
    pppuStack_638 = (undefined1 ***)0x0;
    uStack_630 = (undefined1 ***)&UNK_0d659a10;
    uStack_628 = (undefined8 *)&SUB_048b06d0;
    puStack_620 = (undefined8 *)&SUB_0d640470;
    uStack_618 = &UNK_0d659a20;
    puStack_610 = &UNK_0d659b70;
    uStack_608 = uStack_608 & 0xffffffff00000000;
    uStack_600 = 0;
    plStack_5f8 = (long *)0x0;
    func_0x048b05a0(psStack_430,&uStack_658);
    plVar18 = plStack_5f8;
    if (plStack_5f8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5f8 + 1;
      lVar27 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar27 == 0) {
        (**(code **)(*plStack_5f8 + 0x10))(plStack_5f8);
        func_0x0412c2d0(plVar18);
      }
    }
    iVar15 = *(int *)((long)psStack_430 + 0x1c);
    if (iVar15 == 2) {
      piVar36 = *(int **)(*(long *)(*(long *)((long)psStack_430 + 0x10) + 0x78) + 0x60);
      iVar15 = *piVar36;
      while (iVar15 != *(int *)((long)psStack_430 + 0x18)) {
        piVar36 = piVar36 + 0x16;
        iVar15 = *piVar36;
      }
      lVar27 = *(long *)(piVar36 + 0xc);
      while (lVar27 != *(long *)((long)psStack_430 + 8)) {
        piVar36 = *(int **)(piVar36 + 0xe);
        lVar27 = *(long *)(piVar36 + 0xc);
      }
      *(byte *)((long)piVar36 + 0x12) = *(byte *)((long)piVar36 + 0x12) | 4;
    }
    else if (iVar15 == 1) {
      piVar36 = *(int **)(*(long *)(*(long *)((long)psStack_430 + 0x10) + 0x78) + 0x48);
      iVar15 = *piVar36;
      while (iVar15 != *(int *)((long)psStack_430 + 0x18)) {
        piVar36 = piVar36 + 0x1a;
        iVar15 = *piVar36;
      }
      *(byte *)((long)piVar36 + 0x12) = *(byte *)((long)piVar36 + 0x12) | 4;
    }
    else if (iVar15 == 0) {
      puVar2 = (uint *)(*(long *)((long)psStack_430 + 0x10) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
    func_0x0d6593a0(&ppppuStack_438);
    FUN_048b0bc0(&plStack_420);
  }
  plVar18 = (long *)param_1[0x2c];
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar1 = plVar18 + 1;
    lVar27 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar27 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
    }
  }
  param_1[0x2d] = 0;
  lVar27 = param_1[8];
  lVar24 = param_1[9];
  if (lVar24 != 0) {
    LOCK();
    *(long *)(lVar24 + 8) = *(long *)(lVar24 + 8) + 1;
    UNLOCK();
  }
  param_1[0x2b] = lVar27;
  plVar18 = (long *)param_1[0x2c];
  param_1[0x2c] = lVar24;
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar1 = plVar18 + 1;
    lVar27 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar27 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
    }
    lVar27 = param_1[0x2b];
  }
  if (lVar27 != 0) {
    param_1[0x2d] = puStack_678;
  }
  func_0x05d54750(&uStack_478,&UNK_0f47bba8);
  pcVar5 = (char *)param_1[0x2b];
  if (((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) &&
     (cVar14 = func_0x0eeddcf0(&UNK_013c6966,&UNK_01259d39,0xf5,&UNK_01259d48,&UNK_01424f0d),
     cVar14 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  param_1[0x31] = uStack_478;
  if ((param_1[0x32] & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_1[0x32] & 0xff00ffffffffffff) - 8);
  }
  param_1[0x32] = 0;
  uVar35 = uStack_470;
  if ((uStack_470 & 0x80000000000000) != 0) {
    uVar35 = uStack_470 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar35 - 8);
    lVar27 = lVar24 + 9;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar18 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar18 = lVar24;
    func_0x0eee2f00(plVar18 + 1,uVar35,lVar24);
    *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
    uVar35 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  param_1[0x32] = uVar35;
  if ((param_1[0x33] & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_1[0x33] & 0xff00ffffffffffff) - 8);
  }
  param_1[0x33] = 0;
  uVar35 = uStack_468;
  if ((uStack_468 & 0x80000000000000) != 0) {
    uVar35 = uStack_468 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar35 - 8);
    lVar27 = lVar24 + 9;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar18 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar18 = lVar24;
    func_0x0eee2f00(plVar18 + 1,uVar35,lVar24);
    *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
    uVar35 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  param_1[0x33] = uVar35;
  pppplStack_518 = (long ****)ppppuStack_480;
  pcVar5 = (char *)param_1[0x2b];
  plVar18 = (long *)param_1[0x2c];
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar18[1] = plVar18[1] + 1;
    UNLOCK();
  }
  pppuVar30 = (undefined1 ***)param_1[0x2d];
  pppuStack_4f0 = (undefined1 ***)param_1[0x2e];
  psStack_510 = (short *)(param_1 + 0x28);
  pcStack_508 = pcVar5;
  pppppuStack_4f8 = (undefined1 *****)pppuVar30;
  plStack_500 = plVar18;
  if (pppuStack_4f0 == (undefined1 ***)0x0) {
    pppuStack_4f0 = (undefined1 ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (pppuStack_4f0 == (undefined1 ***)0x0) {
      func_0x0eec74c0(8,0);
    }
    *pppuStack_4f0 = (undefined1 **)0x0;
    param_1[0x2e] = pppuStack_4f0;
    puStack_4e8 = (undefined8 *)param_1[0x2f];
  }
  else {
    puStack_4e8 = (undefined8 *)param_1[0x2f];
  }
  if (puStack_4e8 == (undefined8 *)0x0) {
    puStack_4e8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puStack_4e8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puStack_4e8 = 0;
    param_1[0x2f] = puStack_4e8;
  }
  puStack_620 = param_1 + 0x31;
  uStack_658 = (undefined1 ****)pppplStack_518;
  uStack_650 = psStack_510;
  pcStack_508 = (char *)0x0;
  plStack_500 = (long *)0x0;
  pppppuStack_4f8 = (undefined1 *****)0x0;
  uStack_630 = pppuStack_4f0;
  uStack_618 = (undefined *)uStack_478;
  puStack_610 = (undefined *)0x0;
  uVar35 = uStack_470;
  uStack_648 = pcVar5;
  plStack_640 = plVar18;
  pppuStack_638 = pppuVar30;
  uStack_628 = puStack_4e8;
  puStack_4e0 = puStack_620;
  if ((uStack_470 & 0x80000000000000) != 0) {
    uVar35 = uStack_470 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar35 - 8);
    lVar27 = lVar24 + 9;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar18 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar18 = lVar24;
    func_0x0eee2f00(plVar18 + 1,uVar35,lVar24);
    *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
    uVar35 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_608 = 0;
  uVar29 = uStack_468;
  puStack_610 = (undefined *)uVar35;
  if ((uStack_468 & 0x80000000000000) != 0) {
    uVar35 = uStack_468 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar35 - 8);
    lVar27 = lVar24 + 9;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar18 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar18 = lVar24;
    func_0x0eee2f00(plVar18 + 1,uVar35,lVar24);
    *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
    uVar29 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_5d8 = 0;
  uStack_5c8 = 1;
  uStack_5c6 = 0xfffc;
  uStack_5c4 = 1;
  uStack_608 = uVar29;
  func_0x05d54750(&sStack_698,&UNK_0f47bb80);
  puVar16 = puStack_620;
  uStack_6b8 = CONCAT26(uStack_692,CONCAT24(sStack_694,CONCAT22(sStack_696,sStack_698)));
  if (*(char *)((long)puStack_620 + 6) == '\0') {
    *puStack_620 = uStack_6b8;
    if ((puStack_620[1] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puStack_620[1] & 0xff00ffffffffffff) - 8);
    }
    puVar16[1] = 0;
    uVar35 = uStack_690;
    if ((uStack_690 & 0x80000000000000) != 0) {
      uVar35 = uStack_690 & 0xff00ffffffffffff;
      lVar24 = *(long *)(uVar35 - 8);
      lVar27 = lVar24 + 9;
      plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
      if (lVar27 != 0 && plVar18 == (long *)0x0) {
        func_0x0eec74c0(lVar27,8);
      }
      *plVar18 = lVar24;
      func_0x0eee2f00(plVar18 + 1,uVar35,lVar24);
      *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
      uVar35 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    puVar16[1] = uVar35;
    if ((puVar16[2] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar16[2] & 0xff00ffffffffffff) - 8);
    }
    puVar16[2] = 0;
    uVar35 = uStack_688;
    if ((uStack_688 & 0x80000000000000) != 0) {
      uVar35 = uStack_688 & 0xff00ffffffffffff;
      lVar24 = *(long *)(uVar35 - 8);
      lVar27 = lVar24 + 9;
      plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
      if (lVar27 != 0 && plVar18 == (long *)0x0) {
        func_0x0eec74c0(lVar27,8);
      }
      *plVar18 = lVar24;
      func_0x0eee2f00(plVar18 + 1,uVar35,lVar24);
      *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
      uVar35 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    puVar16[2] = uVar35;
    uStack_6b8 = CONCAT26(uStack_692,CONCAT24(sStack_694,CONCAT22(sStack_696,sStack_698)));
  }
  ppppuStack_6a0 = uStack_658;
  ppppuStack_488 = (undefined1 ****)CONCAT71(ppppuStack_488._1_7_,uStack_5c4);
  uStack_6b0 = uStack_690;
  if ((uStack_690 & 0x80000000000000) != 0) {
    uVar35 = uStack_690 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar35 - 8);
    lVar27 = lVar24 + 9;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar18 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar18 = lVar24;
    func_0x0eee2f00(plVar18 + 1,uVar35,lVar24);
    *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
    uStack_6b0 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_6a8 = 0;
  uVar35 = uStack_688;
  if ((uStack_688 & 0x80000000000000) != 0) {
    uVar35 = uStack_688 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar35 - 8);
    lVar27 = lVar24 + 9;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar18 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar18 = lVar24;
    func_0x0eee2f00(plVar18 + 1,uVar35,lVar24);
    *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
    uVar35 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  psVar34 = uStack_650;
  uVar29 = (ulong)puStack_610 & 0x80000000000000;
  uVar9 = (ushort)((ulong)puStack_610 >> 0x30);
  uStack_6a8 = uVar35;
  if (uVar29 == 0) {
    if (((ulong)puStack_610 & 0x7f000000000000) == 0) goto LAB_0d61e6c2;
    uVar25 = (ulong)(uVar9 & 0x7f);
LAB_0d61e67a:
    if (((uVar25 != 4) || (*(int *)((ulong)puStack_610 & 0xff00ffffffffffff) != 0x61746562)) ||
       (((short)uStack_618 != 9999 || ((uStack_618._2_2_ != 9999 || (uStack_618._4_2_ != 9999))))))
    goto LAB_0d61e6c2;
LAB_0d61e906:
    if (uVar29 == 0) {
      if (((ulong)puStack_610 & 0x7f000000000000) != 0) {
        uVar25 = (ulong)(uVar9 & 0x7f);
LAB_0d61e93d:
        uVar26 = 3;
        if (((uVar25 == 4) &&
            (piVar36 = (int *)((ulong)puStack_610 & 0xff00ffffffffffff), *piVar36 == 0x61746562)) &&
           (((short)uStack_618 == 9999 && ((uStack_618._2_2_ == 9999 && (uStack_618._4_2_ == 9999)))
            ))) {
          uStack_6b8 = uStack_618;
          if ((uStack_6b0 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6b0 & 0xff00ffffffffffff) - 8)
            ;
            piVar36 = (int *)((ulong)puStack_610 & 0xff00ffffffffffff);
            uVar29 = (ulong)puStack_610 & 0x80000000000000;
          }
          uStack_6b0 = 0;
          puVar17 = puStack_610;
          if (uVar29 != 0) {
            lVar24 = *(long *)(piVar36 + -2);
            lVar27 = lVar24 + 9;
            plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
            if (lVar27 != 0 && plVar18 == (long *)0x0) {
              func_0x0eec74c0(lVar27,8);
            }
            *plVar18 = lVar24;
            func_0x0eee2f00(plVar18 + 1,piVar36,lVar24);
            *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
            puVar17 = (undefined *)((ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          uStack_6b0 = (ulong)puVar17;
          if ((uStack_6a8 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6a8 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_6a8 = 0;
          uVar26 = 3;
          uVar35 = uStack_608;
          if ((uStack_608 & 0x80000000000000) != 0) {
            uVar35 = uStack_608 & 0xff00ffffffffffff;
            lVar24 = *(long *)(uVar35 - 8);
            lVar27 = lVar24 + 9;
            plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8,3);
            if (lVar27 != 0 && plVar18 == (long *)0x0) {
              func_0x0eec74c0(lVar27,8);
            }
            *plVar18 = lVar24;
            func_0x0eee2f00(plVar18 + 1,uVar35,lVar24);
            *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
            uVar26 = 3;
            uVar35 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
        }
        goto LAB_0d61eb72;
      }
    }
    else {
      uVar25 = *(ulong *)(((ulong)puStack_610 & 0xff00ffffffffffff) - 8);
      if (uVar25 != 0) goto LAB_0d61e93d;
    }
    uVar26 = 3;
  }
  else {
    uVar25 = *(ulong *)(((ulong)puStack_610 & 0xff00ffffffffffff) - 8);
    if (uVar25 != 0) goto LAB_0d61e67a;
LAB_0d61e6c2:
    if ((uStack_690 & 0x80000000000000) != 0) {
      uVar25 = *(ulong *)((uStack_690 & 0xff00ffffffffffff) - 8);
      if (uVar25 != 0) goto LAB_0d61e6fe;
      goto LAB_0d61e906;
    }
    if ((uStack_690 & 0x7f000000000000) == 0) goto LAB_0d61e906;
    uVar25 = (ulong)((ushort)(uStack_690 >> 0x30) & 0x7f);
LAB_0d61e6fe:
    if ((((uVar25 != 4) || (*(int *)(uStack_690 & 0xff00ffffffffffff) != 0x61746562)) ||
        (sStack_698 != 9999)) || ((sStack_696 != 9999 || (sStack_694 != 9999)))) goto LAB_0d61e906;
    uStack_6b8 = *(undefined8 *)uStack_650;
    if ((uStack_6b0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6b0 & 0xff00ffffffffffff) - 8);
    }
    uStack_6b0 = 0;
    uVar35 = *(ulong *)(psVar34 + 4);
    if ((uVar35 & 0x80000000000000) != 0) {
      lVar24 = *(long *)((uVar35 & 0xff00ffffffffffff) - 8);
      lVar27 = lVar24 + 9;
      plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
      if (lVar27 != 0 && plVar18 == (long *)0x0) {
        func_0x0eec74c0(lVar27,8);
      }
      *plVar18 = lVar24;
      func_0x0eee2f00(plVar18 + 1,uVar35 & 0xff00ffffffffffff,lVar24);
      *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
      uVar35 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_6b0 = uVar35;
    if ((uStack_6a8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6a8 & 0xff00ffffffffffff) - 8);
    }
    uStack_6a8 = 0;
    uVar35 = *(ulong *)(psVar34 + 8);
    uVar26 = 1;
    if ((uVar35 & 0x80000000000000) != 0) {
      lVar24 = *(long *)((uVar35 & 0xff00ffffffffffff) - 8);
      lVar27 = lVar24 + 9;
      plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8,1);
      if (lVar27 != 0 && plVar18 == (long *)0x0) {
        func_0x0eec74c0(lVar27,8);
      }
      *plVar18 = lVar24;
      func_0x0eee2f00(plVar18 + 1,uVar35 & 0xff00ffffffffffff,lVar24);
      *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
      uVar26 = 1;
      uVar35 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
  }
LAB_0d61eb72:
  uStack_6a8 = uVar35;
  func_0x0d6b3300(&ppppuStack_5b8,&uStack_618,&uStack_6b8,uVar26);
  if ((uStack_630 == (undefined1 ***)0x0) &&
     (cVar14 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_013be32f),
     cVar14 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((uStack_648 == (char *)0x0) || (pppuVar30 = uStack_630, *uStack_648 != '\x01')) {
    cVar14 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_013be32f);
    pppuVar30 = uStack_630;
    if (cVar14 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((uStack_648 == (char *)0x0) &&
       (cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar14 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  if ((*uStack_648 == '\0') &&
     (cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar14 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  pppuVar21 = pppuStack_638;
  ppppuVar19 = (undefined1 ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (ppppuVar19 == (undefined1 ****)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  uStack_570 = uStack_618;
  pppuStack_578 = pppuVar21;
  pppuStack_580 = (undefined1 ***)uStack_618;
  puVar17 = puStack_610;
  pppuStack_450 = pppuVar30;
  if (((ulong)puStack_610 & 0x80000000000000) != 0) {
    uVar35 = (ulong)puStack_610 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar35 - 8);
    lVar27 = lVar24 + 9;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar18 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar18 = lVar24;
    func_0x0eee2f00(plVar18 + 1,uVar35,lVar24);
    *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
    puVar17 = (undefined *)((ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  uStack_560 = 0;
  uStack_660 = uStack_608;
  if ((uStack_608 & 0x80000000000000) != 0) {
    uVar35 = uStack_608 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar35 - 8);
    lVar27 = lVar24 + 9;
    uStack_568 = (ulong)puVar17;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar18 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar18 = lVar24;
    func_0x0eee2f00(plVar18 + 1,uVar35,lVar24);
    *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
    uStack_660 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  pppuStack_4f0 = (undefined1 ***)uStack_590;
  pppppuStack_4f8 = (undefined1 *****)uStack_598;
  pcStack_508 = (char *)uStack_5a8;
  psStack_510 = (short *)uStack_5b0;
  uVar11 = uStack_5c6;
  uStack_528 = uStack_588;
  uStack_568 = 0;
  uStack_560 = 0;
  ppppuStack_558 = ppppuStack_5b8;
  uStack_5b0 = 0;
  uStack_5a8 = 0;
  pppplStack_518 = (long ****)ppppuStack_5b8;
  ppppuStack_550 = (undefined1 ****)0x0;
  ppppuStack_548 = (undefined1 ****)0x0;
  uStack_538 = 0;
  uStack_598 = 0;
  uStack_590 = 0;
  uStack_530 = 0;
  puStack_4e8 = (undefined8 *)CONCAT62(puStack_4e8._2_6_,uStack_588);
  uStack_670 = pppuStack_580;
  uStack_668 = (ulong)puVar17;
  func_0x0d6a8a30(ppppuVar19,pppuStack_578,&uStack_670,&pppplStack_518);
  if (((ulong)pppuStack_4f0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppuStack_4f0 & 0xff00ffffffffffff) - 8);
  }
  pppuStack_4f0 = (undefined1 ***)0x0;
  if (((ulong)pppppuStack_4f8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppuStack_4f8 & 0xff00ffffffffffff) - 8);
  }
  pppppuStack_4f8 = (undefined1 *****)0x0;
  if (((ulong)pcStack_508 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)pcStack_508 & 0xff00ffffffffffff) - 8)
    ;
  }
  pcStack_508 = (char *)0x0;
  if (((ulong)psStack_510 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)psStack_510 & 0xff00ffffffffffff) - 8)
    ;
  }
  psStack_510 = (short *)0x0;
  if ((uStack_660 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_660 & 0xff00ffffffffffff) - 8);
  }
  uStack_660 = 0;
  if ((uStack_668 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_668 & 0xff00ffffffffffff) - 8);
  }
  *ppppuVar19 = (undefined1 ***)&UNK_0f47bbe0;
  ppppuVar19[0xe] = pppuStack_450;
  *(undefined2 *)(ppppuVar19 + 0xf) = uVar11;
  *(undefined1 *)((long)ppppuVar19 + 0x7a) = ppppuStack_488._0_1_;
  pppplStack_518 = (long ****)ppppuVar19;
  if ((uStack_590 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_590 & 0xff00ffffffffffff) - 8);
  }
  uStack_590 = 0;
  if ((uStack_598 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_598 & 0xff00ffffffffffff) - 8);
  }
  uStack_598 = 0;
  if ((uStack_5a8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_5a8 & 0xff00ffffffffffff) - 8);
  }
  uStack_5a8 = 0;
  if ((uStack_5b0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_5b0 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_6a8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6a8 & 0xff00ffffffffffff) - 8);
  }
  uStack_6a8 = 0;
  if ((uStack_6b0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6b0 & 0xff00ffffffffffff) - 8);
  }
  if (pppplStack_518 != (long ****)0x0) {
    pppuVar30 = *ppppuStack_6a0;
    pppuVar21 = ppppuStack_6a0[1];
    while ((pppuVar30 != pppuVar21 &&
           (cVar14 = func_0x04fa7a10(*pppuVar30 + 4,pppplStack_518 + 7), cVar14 != '\0'))) {
      pppuVar30 = pppuVar30 + 1;
    }
    func_0x0d6af860(ppppuStack_6a0,pppuVar30,&pppplStack_518);
    pppplVar12 = pppplStack_518;
    pppplStack_518 = (long ****)0x0;
    if (pppplVar12 != (long ****)0x0) {
      (*(code *)(*pppplVar12)[1])();
    }
  }
  ppppuVar19 = uStack_658;
  uStack_5c8 = 0;
  if ((uStack_690 & 0x80000000000000) == 0) {
    if ((uStack_690 & 0x7f000000000000) == 0) goto LAB_0d61f28e;
    uVar35 = (ulong)((ushort)(uStack_690 >> 0x30) & 0x7f);
LAB_0d61f255:
    if ((((uVar35 != 4) || (*(int *)(uStack_690 & 0xff00ffffffffffff) != 0x61746562)) ||
        (sStack_698 != 9999)) || ((sStack_696 != 9999 || (sStack_694 != 9999)))) goto LAB_0d61f28e;
  }
  else {
    uVar35 = *(ulong *)((uStack_690 & 0xff00ffffffffffff) - 8);
    if (uVar35 != 0) goto LAB_0d61f255;
LAB_0d61f28e:
    if (((uStack_648 == (char *)0x0) || (*uStack_648 == '\0')) &&
       (cVar14 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x182,&UNK_013fa33d,&UNK_01353d17),
       cVar14 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((uStack_628 == (undefined8 *)0x0) &&
       (cVar14 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_0143b987,0x183,&UNK_013fa33d,&UNK_01353d17),
       cVar14 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((uStack_648 == (char *)0x0) &&
       (cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar14 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((*uStack_648 == '\0') &&
       (cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
       cVar14 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    pppuVar30 = pppuStack_638;
    ppppuVar20 = (undefined1 ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
    if (ppppuVar20 == (undefined1 ****)0x0) {
      func_0x0eec74c0(0x1a0,0);
    }
    func_0x0d6b23d0(ppppuVar20,&uStack_618,&sStack_698);
    ppppuVar20[8] = (undefined1 ***)0x0;
    ppppuVar20[9] = (undefined1 ***)0x0;
    ppppuVar20[10] = (undefined1 ***)0x0;
    pppuVar21 = (undefined1 ***)pppuVar30[1];
    pppuVar6 = (undefined1 ***)pppuVar30[2];
    if (pppuVar6 == (undefined1 ***)0x0) {
      ppppuVar20[8] = pppuVar21;
      ppppuVar20[9] = (undefined1 ***)0x0;
    }
    else {
      LOCK();
      pppuVar6[1] = (undefined1 **)((long)pppuVar6[1] + 1);
      UNLOCK();
      pppuVar7 = ppppuVar20[9];
      ppppuVar20[8] = pppuVar21;
      ppppuVar20[9] = pppuVar6;
      if (pppuVar7 != (undefined1 ***)0x0) {
        LOCK();
        pppuVar21 = pppuVar7 + 1;
        ppuVar3 = *pppuVar21;
        *pppuVar21 = (undefined1 **)((long)*pppuVar21 + -1);
        UNLOCK();
        if (ppuVar3 == (undefined1 **)0x0) {
          (*(code *)(*pppuVar7)[2])(pppuVar7);
          func_0x0412c2d0(pppuVar7);
        }
        pppuVar21 = ppppuVar20[8];
      }
    }
    if ((pppuVar21 == (undefined1 ***)0x0) ||
       (ppppuVar20[10] = pppuVar30, *(char *)pppuVar21 == '\0')) {
      uVar26 = FUN_04890760();
      uVar26 = FUN_04882e20(uVar26);
      uVar26 = FUN_04882e20(uVar26);
      if (((ulong)ppppuStack_438 & 1) != 0) {
        thunk_FUN_0ee326a0(pcStack_428,(ulong)ppppuStack_438 & 0xfffffffffffffffe);
      }
      func_0x0d6213a0(param_1 + 0x3d);
      func_0x0d6213d0(plStack_460);
      func_0x0d657b80(param_1 + 0x37);
      func_0x0d621450(param_1 + 0x36);
      func_0x0d61d3d0(param_1[0x35]);
      func_0x0d6214a0(ppppuStack_480);
      func_0x04904f60(puStack_678);
      bVar4 = *pbStack_680;
      while ((bVar4 & 1) == 0) {
        uVar32 = uVar26;
        func_0x0eee2d70();
        param_1[0xb] = uVar32;
        thunk_FUN_0ee326a0();
        bVar4 = *pbStack_680;
      }
      thunk_FUN_0ee326a0(param_1[4],param_1[2] & 0xfffffffffffffffe);
      func_0x0eee2d70(uVar26);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    ppppuVar20[0xe] = (undefined1 ***)0x0;
    ppppuVar20[0xf] = (undefined1 ***)0x0;
    ppppuVar20[0xc] = (undefined1 ***)0x0;
    ppppuVar20[0xd] = (undefined1 ***)0x0;
    *(undefined4 *)(ppppuVar20 + 0x10) = 0x3f800000;
    *(undefined1 *)(ppppuVar20 + 0x12) = 0;
    *(undefined1 *)(ppppuVar20 + 0x24) = 0;
    *ppppuVar20 = (undefined1 ***)&UNK_0f47bce0;
    ppppuVar20[0x2a] = (undefined1 ***)0x0;
    ppppuVar20[0x30] = (undefined1 ***)0x0;
    ppppuVar20[0x32] = (undefined1 ***)0x0;
    ppppuStack_558 = (undefined1 ****)0x0;
    ppppuStack_550 = (undefined1 ****)0x0;
    ppppuStack_548 = (undefined1 ****)0x0;
    pppplStack_518 = (long ****)&ppppuStack_558;
    psStack_510 = (short *)((ulong)psStack_510 & 0xffffffffffffff00);
    ppppuVar22 = (undefined1 ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (ppppuVar22 == (undefined1 ****)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    ppppuStack_550 = ppppuVar22 + 3;
    *(undefined1 *)ppppuVar22 = 0x10;
    *(undefined8 *)((long)ppppuVar22 + 1) = 0x73676e6974746573;
    *(undefined1 *)((long)ppppuVar22 + 9) = 0;
    uStack_498 = 0;
    ppppuStack_558 = ppppuVar22;
    ppppuStack_548 = ppppuStack_550;
    func_0x0d6ad9e0(ppppuVar20 + 0xc,ppppuVar22,ppppuStack_550,&pppplStack_518);
    if ((ulong)uStack_498 != 0xffffffff) {
      (**(code **)(&UNK_0f47df80 + (ulong)uStack_498 * 8))(&ppppuStack_5b8,&pppplStack_518);
    }
    ppppuVar23 = ppppuStack_558;
    ppppuVar22 = ppppuStack_550;
    if (ppppuStack_558 != (undefined1 ****)0x0) {
      for (; ppppuVar23 != ppppuVar22; ppppuVar22 = ppppuVar22 + -3) {
        if (((ulong)ppppuVar22[-3] & 1) != 0) {
          thunk_FUN_0ee326a0(ppppuVar22[-1],(ulong)ppppuVar22[-3] & 0xfffffffffffffffe);
        }
      }
      ppppuStack_550 = ppppuVar23;
      thunk_FUN_0ee326a0(ppppuStack_558,(long)ppppuStack_548 - (long)ppppuStack_558);
    }
    ppppuVar22 = (undefined1 ****)ppppuVar20[0x2a];
    ppppuVar23 = (undefined1 ****)&UNK_0f47be90;
    pppplStack_518 = (long ****)&UNK_0f47be90;
    psStack_510 = (short *)&UNK_0d6409b0;
    ppppuVar33 = ppppuVar20 + 0x26;
    ppppuVar20[0x2a] = (undefined1 ***)0x0;
    pppppuStack_4f8 = (undefined1 *****)&pppplStack_518;
    if (ppppuVar22 == ppppuVar33) {
      lVar27 = 0x20;
LAB_0d61f65e:
      (**(code **)((long)*ppppuVar22 + lVar27))();
      if (pppppuStack_4f8 == (undefined1 *****)0x0) {
        ppppuVar20[0x2a] = (undefined1 ***)0x0;
      }
      else {
        if ((long *****)pppppuStack_4f8 == &pppplStack_518) {
          ppppuVar23 = *pppppuStack_4f8;
          goto LAB_0d61f6a1;
        }
        ppppuVar20[0x2a] = (undefined1 ***)pppppuStack_4f8;
      }
    }
    else {
      lVar27 = 0x28;
      if (ppppuVar22 != (undefined1 ****)0x0) goto LAB_0d61f65e;
LAB_0d61f6a1:
      ppppuVar20[0x2a] = (undefined1 ***)ppppuVar33;
      (*(code *)ppppuVar23[3])(pppppuStack_4f8,ppppuVar33);
      if ((long *****)pppppuStack_4f8 == &pppplStack_518) {
        lVar27 = 0x20;
      }
      else {
        lVar27 = 0x28;
        if (pppppuStack_4f8 == (undefined1 *****)0x0) goto LAB_0d61f6e7;
      }
      (**(code **)((long)*pppppuStack_4f8 + lVar27))();
    }
LAB_0d61f6e7:
    pppplStack_518 = (long ****)ppppuVar20;
    func_0x0d6afb30(ppppuVar19,&pppplStack_518);
    if (pppplStack_518 != (long ****)0x0) {
      (*(code *)(*pppplStack_518)[1])();
    }
  }
  ppppuStack_438 = uStack_658;
  psStack_430 = uStack_650;
  pcStack_428 = uStack_648;
  plStack_420 = plStack_640;
  uStack_648 = (undefined *)0x0;
  plStack_640 = (long *)0x0;
  pppuStack_418 = pppuStack_638;
  pppuStack_638 = (undefined1 ***)0x0;
  uStack_410 = (undefined4)uStack_630;
  uStack_40c = uStack_630._4_4_;
  uStack_408 = (undefined4)uStack_628;
  uStack_404 = uStack_628._4_4_;
  puStack_400 = puStack_620;
  uStack_3f8 = CONCAT26(uStack_692,CONCAT24(sStack_694,CONCAT22(sStack_696,sStack_698)));
  uStack_3f0 = 0;
  uVar35 = uStack_690;
  if ((uStack_690 & 0x80000000000000) != 0) {
    uVar35 = uStack_690 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar35 - 8);
    lVar27 = lVar24 + 9;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar18 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar18 = lVar24;
    func_0x0eee2f00(plVar18 + 1,uVar35,lVar24);
    *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
    uVar35 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_3e8 = 0;
  uVar29 = uStack_688;
  uStack_3f0 = uVar35;
  if ((uStack_688 & 0x80000000000000) != 0) {
    uVar35 = uStack_688 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar35 - 8);
    lVar27 = lVar24 + 9;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar18 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar18 = lVar24;
    func_0x0eee2f00(plVar18 + 1,uVar35,lVar24);
    *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
    uVar29 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  psVar34 = psStack_430;
  uStack_3b8 = 0;
  uStack_3a8 = 1;
  uStack_3a6 = 0xfffc;
  uStack_3a4 = 1;
  ppppuStack_488 = ppppuStack_438;
  uStack_6b8 = *(undefined8 *)psStack_430;
  uVar35 = *(ulong *)(psStack_430 + 4);
  uStack_3e8 = uVar29;
  if ((uVar35 & 0x80000000000000) != 0) {
    lVar24 = *(long *)((uVar35 & 0xff00ffffffffffff) - 8);
    lVar27 = lVar24 + 9;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar18 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar18 = lVar24;
    func_0x0eee2f00(plVar18 + 1,uVar35 & 0xff00ffffffffffff,lVar24);
    *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
    uVar35 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_6a8 = 0;
  uVar29 = *(ulong *)(psVar34 + 8);
  uStack_6b0 = uVar35;
  if ((uVar29 & 0x80000000000000) != 0) {
    lVar24 = *(long *)((uVar29 & 0xff00ffffffffffff) - 8);
    lVar27 = lVar24 + 9;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar18 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar18 = lVar24;
    func_0x0eee2f00(plVar18 + 1,uVar29 & 0xff00ffffffffffff,lVar24);
    *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
    uVar29 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  psVar13 = psStack_430;
  uVar35 = uStack_3f0 & 0x80000000000000;
  uVar9 = (ushort)(uStack_3f0 >> 0x30);
  uStack_6a8 = uVar29;
  if (uVar35 == 0) {
    if ((uStack_3f0 & 0x7f000000000000) == 0) goto LAB_0d61fa64;
    uVar25 = (ulong)(uVar9 & 0x7f);
LAB_0d61fa1c:
    if ((((uVar25 != 4) || (*(int *)(uStack_3f0 & 0xff00ffffffffffff) != 0x61746562)) ||
        ((short)uStack_3f8 != 9999)) || ((uStack_3f8._2_2_ != 9999 || (uStack_3f8._4_2_ != 9999))))
    goto LAB_0d61fa64;
LAB_0d61fc3b:
    if (uVar35 == 0) {
      if ((uStack_3f0 & 0x7f000000000000) == 0) goto LAB_0d61fe5b;
      uVar25 = (ulong)(uVar9 & 0x7f);
    }
    else {
      uVar25 = *(ulong *)((uStack_3f0 & 0xff00ffffffffffff) - 8);
      if (uVar25 == 0) goto LAB_0d61fe5b;
    }
    if ((((uVar25 != 4) ||
         (piVar36 = (int *)(uStack_3f0 & 0xff00ffffffffffff), *piVar36 != 0x61746562)) ||
        ((short)uStack_3f8 != 9999)) || ((uStack_3f8._2_2_ != 9999 || (uStack_3f8._4_2_ != 9999))))
    goto LAB_0d61fe5b;
    uStack_6b8 = uStack_3f8;
    if ((uStack_6b0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6b0 & 0xff00ffffffffffff) - 8);
      piVar36 = (int *)(uStack_3f0 & 0xff00ffffffffffff);
      uVar35 = uStack_3f0 & 0x80000000000000;
    }
    uStack_6b0 = 0;
    uVar29 = uStack_3f0;
    if (uVar35 != 0) {
      lVar24 = *(long *)(piVar36 + -2);
      lVar27 = lVar24 + 9;
      plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
      if (lVar27 != 0 && plVar18 == (long *)0x0) {
        func_0x0eec74c0(lVar27,8);
      }
      *plVar18 = lVar24;
      func_0x0eee2f00(plVar18 + 1,piVar36,lVar24);
      *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
      uVar29 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_6b0 = uVar29;
    if ((uStack_6a8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6a8 & 0xff00ffffffffffff) - 8);
    }
    uStack_6a8 = 0;
    uVar29 = uStack_3e8;
    if ((uStack_3e8 & 0x80000000000000) == 0) goto LAB_0d61fe5b;
    uVar29 = uStack_3e8 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar29 - 8);
    lVar27 = lVar24 + 9;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar18 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
  }
  else {
    uVar25 = *(ulong *)((uStack_3f0 & 0xff00ffffffffffff) - 8);
    if (uVar25 != 0) goto LAB_0d61fa1c;
LAB_0d61fa64:
    uVar25 = *(ulong *)(psVar34 + 4);
    if ((uVar25 & 0x80000000000000) != 0) {
      uVar28 = *(ulong *)((uVar25 & 0xff00ffffffffffff) - 8);
      if (uVar28 != 0) goto LAB_0d61fa9f;
      goto LAB_0d61fc3b;
    }
    if ((uVar25 & 0x7f000000000000) == 0) goto LAB_0d61fc3b;
    uVar28 = (ulong)((ushort)(uVar25 >> 0x30) & 0x7f);
LAB_0d61fa9f:
    if (((uVar28 != 4) || (*(int *)(uVar25 & 0xff00ffffffffffff) != 0x61746562)) ||
       ((*psVar34 != 9999 || ((psVar34[1] != 9999 || (psVar34[2] != 9999)))))) goto LAB_0d61fc3b;
    uStack_6b8 = *(undefined8 *)psStack_430;
    if ((uStack_6b0 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6b0 & 0xff00ffffffffffff) - 8);
    }
    uStack_6b0 = 0;
    uVar35 = *(ulong *)(psVar13 + 4);
    if ((uVar35 & 0x80000000000000) != 0) {
      lVar24 = *(long *)((uVar35 & 0xff00ffffffffffff) - 8);
      lVar27 = lVar24 + 9;
      plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
      if (lVar27 != 0 && plVar18 == (long *)0x0) {
        func_0x0eec74c0(lVar27,8);
      }
      *plVar18 = lVar24;
      func_0x0eee2f00(plVar18 + 1,uVar35 & 0xff00ffffffffffff,lVar24);
      *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
      uVar35 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_6b0 = uVar35;
    if ((uStack_6a8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6a8 & 0xff00ffffffffffff) - 8);
    }
    uStack_6a8 = 0;
    uVar29 = *(ulong *)(psVar13 + 8);
    if ((uVar29 & 0x80000000000000) == 0) goto LAB_0d61fe5b;
    uVar29 = uVar29 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar29 - 8);
    lVar27 = lVar24 + 9;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar18 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
  }
  *plVar18 = lVar24;
  func_0x0eee2f00(plVar18 + 1,uVar29,lVar24);
  *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
  uVar29 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
LAB_0d61fe5b:
  uStack_6a8 = uVar29;
  func_0x0d6b3300(&ppppuStack_5b8,&uStack_3f8,&uStack_6b8,1);
  if ((CONCAT44(uStack_40c,uStack_410) == 0) &&
     (cVar14 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_011b0892),
     cVar14 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((pcStack_428 == (char *)0x0) || (*pcStack_428 != '\x01')) {
    cVar14 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_011b0892);
    if (cVar14 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    pppuVar30 = (undefined1 ***)CONCAT44(uStack_40c,uStack_410);
    if ((pcStack_428 == (char *)0x0) &&
       (cVar14 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar14 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  else {
    pppuVar30 = (undefined1 ***)CONCAT44(uStack_40c,uStack_410);
  }
  if ((*pcStack_428 == '\0') &&
     (cVar14 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar14 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  pppuVar21 = pppuStack_418;
  ppppuVar19 = (undefined1 ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (ppppuVar19 == (undefined1 ****)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pppuStack_578 = pppuVar21;
  uStack_570 = uStack_3f8;
  uVar35 = uStack_3f0;
  ppppuStack_6a0 = ppppuVar19;
  pppuStack_580 = pppuVar30;
  if ((uStack_3f0 & 0x80000000000000) != 0) {
    uVar35 = uStack_3f0 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar35 - 8);
    lVar27 = lVar24 + 9;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar18 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar18 = lVar24;
    func_0x0eee2f00(plVar18 + 1,uVar35,lVar24);
    *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
    uVar35 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_560 = 0;
  uVar29 = uStack_3e8;
  if ((uStack_3e8 & 0x80000000000000) != 0) {
    uVar29 = uStack_3e8 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar29 - 8);
    lVar27 = lVar24 + 9;
    uStack_568 = uVar35;
    plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
    if (lVar27 != 0 && plVar18 == (long *)0x0) {
      func_0x0eec74c0(lVar27,8);
    }
    *plVar18 = lVar24;
    func_0x0eee2f00(plVar18 + 1,uVar29,lVar24);
    *(undefined1 *)((long)plVar18 + lVar24 + 8) = 0;
    uVar29 = (ulong)(plVar18 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uVar11 = uStack_3a6;
  pppuStack_4f0 = (undefined1 ***)uStack_590;
  pppppuStack_4f8 = (undefined1 *****)uStack_598;
  pcStack_508 = (char *)uStack_5a8;
  psStack_510 = (short *)uStack_5b0;
  uStack_528 = uStack_588;
  uStack_670 = (undefined1 ***)uStack_3f8;
  uStack_568 = 0;
  uStack_560 = 0;
  ppppuStack_558 = ppppuStack_5b8;
  uStack_5b0 = 0;
  uStack_5a8 = 0;
  pppplStack_518 = (long ****)ppppuStack_5b8;
  ppppuStack_550 = (undefined1 ****)0x0;
  ppppuStack_548 = (undefined1 ****)0x0;
  uStack_538 = 0;
  uStack_598 = 0;
  uStack_590 = 0;
  uStack_530 = 0;
  puStack_4e8 = (undefined8 *)CONCAT62(puStack_4e8._2_6_,uStack_588);
  uStack_668 = uVar35;
  uStack_660 = uVar29;
  func_0x0d6a8a30(ppppuStack_6a0,pppuStack_578,&uStack_670,&pppplStack_518);
  ppppuVar19 = ppppuStack_488;
  if (((ulong)pppuStack_4f0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppuStack_4f0 & 0xff00ffffffffffff) - 8);
  }
  pppuStack_4f0 = (undefined1 ***)0x0;
  if (((ulong)pppppuStack_4f8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,((ulong)pppppuStack_4f8 & 0xff00ffffffffffff) - 8);
  }
  pppppuStack_4f8 = (undefined1 *****)0x0;
  if (((ulong)pcStack_508 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)pcStack_508 & 0xff00ffffffffffff) - 8)
    ;
  }
  pcStack_508 = (char *)0x0;
  if (((ulong)psStack_510 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)psStack_510 & 0xff00ffffffffffff) - 8)
    ;
  }
  psStack_510 = (short *)0x0;
  if ((uStack_660 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_660 & 0xff00ffffffffffff) - 8);
  }
  uStack_660 = 0;
  if ((uStack_668 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_668 & 0xff00ffffffffffff) - 8);
  }
  ppppuVar20 = ppppuStack_6a0;
  *ppppuStack_6a0 = (undefined1 ***)&UNK_0f47c8b8;
  ppppuStack_6a0[0xe] = pppuStack_580;
  *(undefined2 *)(ppppuStack_6a0 + 0xf) = uVar11;
  *(undefined1 *)((long)ppppuStack_6a0 + 0x7a) = 1;
  pppplStack_518 = (long ****)ppppuStack_6a0;
  if ((uStack_590 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_590 & 0xff00ffffffffffff) - 8);
  }
  uStack_590 = 0;
  if ((uStack_598 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_598 & 0xff00ffffffffffff) - 8);
  }
  uStack_598 = 0;
  if ((uStack_5a8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_5a8 & 0xff00ffffffffffff) - 8);
  }
  uStack_5a8 = 0;
  if ((uStack_5b0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_5b0 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_6a8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6a8 & 0xff00ffffffffffff) - 8);
  }
  uStack_6a8 = 0;
  if ((uStack_6b0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_6b0 & 0xff00ffffffffffff) - 8);
  }
  pppuVar30 = *ppppuVar19;
  pppuVar21 = ppppuVar19[1];
  if (pppuVar30 != pppuVar21) {
    do {
      cVar14 = func_0x04fa7a10(*pppuVar30 + 4,ppppuVar20 + 7);
      if (cVar14 == '\0') break;
      pppuVar30 = pppuVar30 + 1;
    } while (pppuVar30 != pppuVar21);
  }
  func_0x0d6af860(ppppuVar19,pppuVar30,&pppplStack_518);
  puVar16 = puStack_458;
  pppplVar12 = pppplStack_518;
  pppplStack_518 = (long ****)0x0;
  if (pppplVar12 != (long ****)0x0) {
    (*(code *)(*pppplVar12)[1])();
  }
  uStack_3a8 = 0;
  func_0x0d6210e0(&ppppuStack_438);
  if ((uStack_688 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_688 & 0xff00ffffffffffff) - 8);
  }
  uStack_688 = 0;
  if ((uStack_690 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_690 & 0xff00ffffffffffff) - 8);
  }
  func_0x0d621240(&uStack_658);
  if ((uStack_468 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_468 & 0xff00ffffffffffff) - 8);
  }
  uStack_468 = 0;
  if ((uStack_470 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_470 & 0xff00ffffffffffff) - 8);
  }
  if (*(char *)(puVar16 + 2) == '\x01') {
    uStack_658 = (undefined1 ****)*puVar16;
    uStack_650 = (short *)puVar16[1];
    uStack_648 = &UNK_01338e30;
    plStack_640 = (long *)0x22;
    func_0x049151c0(&ppppuStack_438,&uStack_658,2,0x2f);
    func_0x0412f5e0(pbStack_680,&ppppuStack_438,uStack_38);
  }
  else {
    puStack_448 = &UNK_01338e30;
    uStack_440 = 0x22;
    func_0x0ee35840(&ppppuStack_438,&puStack_448,4);
    func_0x0ee35a00(&uStack_658,&ppppuStack_438);
    if (pbStack_680 == (byte *)&uStack_658) {
      if (((ulong)uStack_658 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_648,(ulong)uStack_658 & 0xfffffffffffffffe);
      }
    }
    else {
      if ((*pbStack_680 & 1) != 0) {
        thunk_FUN_0ee326a0(param_1[4],param_1[2] & 0xfffffffffffffffe);
      }
      *(char **)(pbStack_680 + 0x10) = uStack_648;
      *(undefined4 *)pbStack_680 = (undefined4)uStack_658;
      *(undefined4 *)(pbStack_680 + 4) = uStack_658._4_4_;
      *(undefined4 *)(pbStack_680 + 8) = (undefined4)uStack_650;
      *(undefined4 *)(pbStack_680 + 0xc) = uStack_650._4_4_;
    }
    if (((ulong)psStack_430 & 1) != 0) {
      thunk_FUN_0ee326a0(plStack_420,(ulong)psStack_430 & 0xfffffffffffffffe);
    }
  }
  *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + 1;
  if (param_1[0x3c] == 0) {
    if ((*pbStack_680 & 1) == 0) {
      pcStack_428 = *(char **)(pbStack_680 + 0x10);
      ppppuStack_438 = *(undefined1 *****)pbStack_680;
      psStack_430 = *(short **)(pbStack_680 + 8);
    }
    else {
      FUN_0412e5e0(&ppppuStack_438,param_1[4],param_1[3]);
    }
    func_0x0d622740(&uStack_658,param_1,&ppppuStack_438);
    if (((ulong)ppppuStack_438 & 1) != 0) {
      thunk_FUN_0ee326a0(pcStack_428,(ulong)ppppuStack_438 & 0xfffffffffffffffe);
    }
    ppppuVar19 = uStack_658;
    if (uStack_658 != (undefined1 ****)0x0) {
      uStack_658 = (undefined1 ****)0x0;
      plVar18 = (long *)*plStack_460;
      *plStack_460 = (long)ppppuVar19;
      if (plVar18 != (long *)0x0) {
        lVar27 = *plVar18;
        if (lVar27 != 0) {
          lVar24 = lVar27;
          lVar31 = plVar18[1];
          if (lVar27 != plVar18[1]) {
            do {
              lVar24 = lVar31 + -0x38;
              func_0x0d63fed0(lVar31 + -0x18,*(undefined8 *)(lVar31 + -0x10));
              lVar31 = lVar24;
            } while (lVar24 != lVar27);
            lVar24 = *plVar18;
          }
          plVar1 = (long *)uStack_658;
          plVar18[1] = lVar27;
          thunk_FUN_0ee326a0(lVar24,plVar18[2] - lVar24);
          thunk_FUN_0ee326a0(plVar18,0x18);
          uStack_658 = (undefined1 ****)0x0;
          if (plVar1 == (long *)0x0) {
            return;
          }
          lVar27 = *plVar1;
          plVar18 = plVar1;
          if (lVar27 != 0) {
            lVar24 = lVar27;
            lVar31 = plVar1[1];
            if (lVar27 != plVar1[1]) {
              do {
                lVar24 = lVar31 + -0x38;
                func_0x0d63fed0(lVar31 + -0x18,*(undefined8 *)(lVar31 + -0x10));
                lVar31 = lVar24;
              } while (lVar24 != lVar27);
              lVar24 = *plVar1;
            }
            plVar1[1] = lVar27;
            thunk_FUN_0ee326a0(lVar24,plVar1[2] - lVar24);
          }
        }
        thunk_FUN_0ee326a0(plVar18,0x18);
      }
    }
  }
  return;
}


