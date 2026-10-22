/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeb72510 (ELF vaddr 0xea72510)
 * Label: string:temperature
 * Body:  [[0eb72510, 0eb73160]]
 * Ghidra: FUN_0eb72510
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eb72510(long param_1)

{
  long *plVar1;
  uint *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  long *plVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined *puVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  uint auStack_ab0 [2];
  long lStack_aa8;
  undefined4 uStack_aa0;
  undefined4 uStack_a9c;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined *puStack_a88;
  undefined1 *puStack_a80;
  undefined1 *puStack_a78;
  undefined *puStack_a70;
  undefined *puStack_a68;
  undefined4 uStack_a60;
  undefined8 uStack_a58;
  long *plStack_a50;
  undefined4 uStack_a48;
  undefined4 uStack_a44;
  undefined4 uStack_a40;
  undefined4 uStack_a3c;
  undefined4 uStack_a38;
  undefined4 uStack_a34;
  undefined4 uStack_a30;
  undefined4 uStack_a2c;
  undefined4 uStack_a28;
  undefined4 uStack_a24;
  undefined4 uStack_a20;
  uint uStack_a1c;
  undefined4 uStack_a18;
  uint uStack_a14;
  uint uStack_a10;
  undefined4 uStack_a08;
  undefined4 uStack_a04;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  undefined4 uStack_9f8;
  undefined4 uStack_9f4;
  undefined4 uStack_9f0;
  undefined4 uStack_9ec;
  undefined4 uStack_9e8;
  undefined4 uStack_9e4;
  undefined4 uStack_9e0;
  uint auStack_9dc [2];
  int iStack_9d4;
  char cStack_9d0;
  undefined4 uStack_9c8;
  undefined4 uStack_9c4;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  undefined4 uStack_9b8;
  undefined4 uStack_9b4;
  undefined4 uStack_9b0;
  undefined4 uStack_9ac;
  undefined4 uStack_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  undefined4 uStack_998;
  undefined4 uStack_994;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  undefined4 uStack_988;
  undefined4 uStack_984;
  undefined4 uStack_980;
  uint uStack_97c;
  undefined4 uStack_978;
  uint uStack_974;
  uint uStack_970;
  undefined1 auStack_968 [40];
  byte bStack_940;
  undefined1 auStack_93f [7];
  ulong uStack_938;
  undefined1 *puStack_930;
  undefined1 auStack_8b0 [64];
  undefined1 auStack_870 [64];
  undefined1 auStack_830 [64];
  undefined1 auStack_7f0 [64];
  undefined1 auStack_7b0 [64];
  undefined1 auStack_770 [64];
  undefined1 auStack_730 [64];
  undefined1 auStack_6f0 [64];
  undefined1 auStack_6b0 [64];
  undefined1 auStack_670 [64];
  undefined1 auStack_630 [64];
  undefined1 auStack_5f0 [64];
  undefined1 auStack_5b0 [64];
  undefined1 auStack_570 [64];
  undefined1 auStack_530 [64];
  undefined1 auStack_4f0 [64];
  undefined1 auStack_4b0 [64];
  undefined1 auStack_470 [64];
  undefined1 auStack_430 [64];
  undefined1 auStack_3f0 [64];
  undefined1 auStack_3b0 [64];
  undefined1 auStack_370 [64];
  undefined1 auStack_330 [64];
  undefined1 auStack_2f0 [64];
  undefined1 auStack_2b0 [64];
  undefined1 auStack_270 [64];
  undefined1 auStack_230 [64];
  undefined1 auStack_1f0 [64];
  undefined1 auStack_1b0 [64];
  undefined1 auStack_170 [64];
  undefined1 auStack_130 [64];
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [64];
  
  lVar9 = func_0x0788e4a0(param_1 + 0x18);
  if ((*(int *)(lVar9 + 0x60) == -0x2b3da790) && (lVar9 = *(long *)(lVar9 + 0x68), lVar9 != 0)) {
    bVar16 = (*(byte *)(lVar9 + 8) & 1) != 0;
    puVar12 = (undefined *)(lVar9 + 9);
    if (bVar16) {
      puVar12 = *(undefined **)(lVar9 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar16) {
      uVar14 = *(ulong *)(lVar9 + 0x10);
    }
  }
  else {
    puVar12 = &UNK_012a0446;
    uVar14 = 0x10;
  }
  func_0x0788e890(&uStack_a48,param_1,puVar12,uVar14,0);
  uStack_a14 = uStack_a14 & 0xffffff00;
  uStack_a10 = uStack_a10 & 0xffffff00;
  if ((char)uStack_a18 != '\0') {
    return;
  }
  func_0x07892190(auStack_968,&uStack_a48,&UNK_013c28d2,4);
  uVar14 = (ulong)(bStack_940 >> 1);
  puVar4 = auStack_93f;
  if ((bStack_940 & 1) != 0) {
    uVar14 = uStack_938;
    puVar4 = puStack_930;
  }
  if (uVar14 == 0) {
    uStack_a1c = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar14 & 3);
    if (uVar14 < 4) {
      uStack_a1c = 0x811c9dc5;
      uVar15 = 0;
    }
    else {
      uStack_a1c = 0x811c9dc5;
      uVar15 = 0;
      do {
        uStack_a1c = ((int)(char)puVar4[uVar15 + 3] ^
                     ((int)(char)puVar4[uVar15 + 2] ^
                     ((int)(char)puVar4[uVar15 + 1] ^
                     ((int)(char)puVar4[uVar15] ^ uStack_a1c) * 0x1000193) * 0x1000193) * 0x1000193)
                     * 0x1000193;
        uVar15 = uVar15 + 4;
      } while ((uVar14 & 0xfffffffffffffffc) != uVar15);
    }
    if (uVar10 != 0) {
      uVar14 = 0;
      do {
        uStack_a1c = ((int)(char)puVar4[uVar14 + uVar15] ^ uStack_a1c) * 0x1000193;
        uVar14 = uVar14 + 1;
      } while (uVar10 != uVar14);
    }
  }
  uStack_a20 = 2;
  if ((DAT_0f5afb30 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5afb30), iVar8 != 0)) {
    func_0x07892120(0xf5afb18);
    FUN_0410844d(&DAT_0f5afb30);
  }
  auStack_ab0[0] = uStack_a1c;
  lStack_aa8 = 0;
  uStack_aa0 = 3;
  uStack_a98 = 1;
  uStack_a90 = 0;
  puStack_a88 = &UNK_078927f0;
  puStack_a80 = &SUB_048b06d0;
  puStack_a78 = &SUB_0788e4a0;
  puStack_a70 = &UNK_0ebb7cc0;
  puStack_a68 = &UNK_0ebb7cd0;
  uStack_a60 = 0;
  uStack_a58 = 0;
  plStack_a50 = (long *)0x0;
  func_0x048b05a0(&uStack_a40,auStack_ab0);
  plVar5 = plStack_a50;
  if (plStack_a50 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_a50 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_a50 + 0x10))(plStack_a50);
      func_0x0412c2d0(plVar5);
    }
  }
  uStack_9f8 = uStack_a30;
  uStack_9f4 = uStack_a2c;
  uStack_9f0 = uStack_a28;
  uStack_9ec = uStack_a24;
  uStack_a08 = uStack_a40;
  uStack_a04 = uStack_a3c;
  uStack_a00 = uStack_a38;
  uStack_9fc = uStack_a34;
  func_0x07892580(auStack_ab0,&uStack_a08,auStack_968);
  if (uStack_a98._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_a9c,uStack_aa0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_a98) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_aa8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
LAB_0eb727ff:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
  }
  else {
    if (uStack_a98._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_a9c,uStack_aa0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_a98) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_0eb727ff;
    }
    if (uStack_a98._4_4_ == 0) {
      puVar13 = (uint *)(CONCAT44(uStack_a9c,uStack_aa0) + 0x18);
      *puVar13 = *puVar13 | 0x90000;
    }
  }
  if ((char)uStack_a10 == '\0') {
    func_0x07892860(auStack_ab0,&uStack_a48,&UNK_013ad25e,0x16);
  }
  uVar6 = uStack_a14;
  lVar9 = func_0x0788e4a0(CONCAT44(uStack_a44,uStack_a48) + 0x18);
  puVar2 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (puVar13 = *(uint **)(*(long *)(lVar9 + 0x68) + 0x20);
      (puVar13 != puVar2 && (*puVar13 != uVar6)); puVar13 = puVar13 + 0xe) {
  }
  if ((puVar13 == puVar2) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01344e06),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_ab0[0] = auStack_ab0[0] & 0xffffff00;
  func_0x05d9c620(puVar13 + 2,&uStack_a1c,&uStack_a1c,auStack_ab0);
  uStack_9a8 = uStack_a48;
  uStack_9a4 = uStack_a44;
  uStack_9a0 = uStack_a40;
  uStack_99c = uStack_a3c;
  uStack_998 = uStack_a38;
  uStack_994 = uStack_a34;
  uStack_990 = uStack_a30;
  uStack_98c = uStack_a2c;
  uStack_988 = uStack_a28;
  uStack_984 = uStack_a24;
  uStack_980 = uStack_a20;
  uStack_97c = uStack_a1c;
  uStack_978 = uStack_a18;
  uStack_974 = uStack_a14;
  uStack_970 = uStack_a10;
  func_0x048b0bc0(auStack_968);
  func_0x07823d00(auStack_8b0,&uStack_9a8,&UNK_0145b40a,8);
  func_0x078240e0(auStack_870,auStack_8b0,&UNK_0134e260,7);
  func_0x078244c0(auStack_830,auStack_870,&UNK_014bbe95,0xd);
  func_0x078248a0(auStack_7f0,auStack_830,&UNK_011dbf78,10);
  func_0x07824c80(auStack_7b0,auStack_7f0,&UNK_011fbcf6,0xb);
  func_0x07825060(auStack_770,auStack_7b0,&UNK_014d7627,4);
  func_0x07825440(auStack_730,auStack_770,&UNK_012088f6,4);
  func_0x07825820(auStack_6f0,auStack_730,&UNK_01420777,9);
  func_0x07825c00(auStack_6b0,auStack_6f0,&UNK_013f9fd9,4);
  func_0x07825fe0(auStack_670,auStack_6b0,&UNK_01383b35,8);
  func_0x078263c0(auStack_630,auStack_670,&UNK_014a26c9,0xf);
  func_0x078267a0(auStack_5f0,auStack_630,&UNK_01333c55,0x10);
  func_0x07826b80(auStack_5b0,auStack_5f0,&UNK_0147575a,4);
  func_0x07826f60(auStack_570,auStack_5b0,&UNK_0139ef89,0xd);
  func_0x07827340(auStack_530,auStack_570,&UNK_011f14e6,5);
  func_0x07827720(auStack_4f0,auStack_530,&UNK_0124bef0,6);
  func_0x07827b00(auStack_4b0,auStack_4f0,&UNK_012fe303,6);
  func_0x07827ee0(auStack_470,auStack_4b0,&UNK_011c6e8c,5);
  func_0x078282c0(auStack_430,auStack_470,&UNK_01384360,6);
  func_0x078286a0(auStack_3f0,auStack_430,&UNK_01333c66,0xd);
  func_0x07828a80(auStack_3b0,auStack_3f0,&UNK_011a64b6,6);
  func_0x07828e60(auStack_370,auStack_3b0,&UNK_013ecefc,0xd);
  func_0x07829240(auStack_330,auStack_370,&UNK_0124b87e,5);
  func_0x07829620(auStack_2f0,auStack_330,&UNK_014d77f3,9);
  func_0x07829a00(auStack_2b0,auStack_2f0,&UNK_0125b7c4,9);
  func_0x07829de0(auStack_270,auStack_2b0,&UNK_013c1836,8);
  func_0x0782a1c0(auStack_230,auStack_270,&UNK_0141a29e,0xb);
  func_0x0782a5a0(auStack_1f0,auStack_230,&UNK_01321bd6,8);
  func_0x0782a980(auStack_1b0,auStack_1f0,&UNK_0121603b,10);
  func_0x0782ad60(auStack_170,auStack_1b0,&UNK_01265852,10);
  func_0x0782b140(auStack_130,auStack_170,&UNK_01333c74,10);
  func_0x0782b520(auStack_f0,auStack_130,&UNK_01406050,10);
  func_0x0782b900(auStack_b0,auStack_f0,&UNK_01428610,8);
  func_0x0782bce0(auStack_70,auStack_b0,&UNK_011abfde,0xd);
  func_0x0782c0c0(&uStack_a08,auStack_70,&UNK_0136b492,10);
  func_0x07892190(auStack_968,&uStack_a08,&UNK_014abe75,3);
  uVar14 = (ulong)(bStack_940 >> 1);
  puVar4 = auStack_93f;
  if ((bStack_940 & 1) != 0) {
    uVar14 = uStack_938;
    puVar4 = puStack_930;
  }
  if (uVar14 == 0) {
    auStack_9dc[0] = 0x811c9dc5;
  }
  else {
    uVar10 = (ulong)((uint)uVar14 & 3);
    if (uVar14 < 4) {
      auStack_9dc[0] = 0x811c9dc5;
      uVar15 = 0;
    }
    else {
      auStack_9dc[0] = 0x811c9dc5;
      uVar15 = 0;
      do {
        auStack_9dc[0] =
             ((int)(char)puVar4[uVar15 + 3] ^
             ((int)(char)puVar4[uVar15 + 2] ^
             ((int)(char)puVar4[uVar15 + 1] ^
             ((int)(char)puVar4[uVar15] ^ auStack_9dc[0]) * 0x1000193) * 0x1000193) * 0x1000193) *
             0x1000193;
        uVar15 = uVar15 + 4;
      } while ((uVar14 & 0xfffffffffffffffc) != uVar15);
    }
    if (uVar10 != 0) {
      uVar14 = 0;
      do {
        auStack_9dc[0] = ((int)(char)puVar4[uVar14 + uVar15] ^ auStack_9dc[0]) * 0x1000193;
        uVar14 = uVar14 + 1;
      } while (uVar10 != uVar14);
    }
  }
  uStack_9e0 = 2;
  if ((DAT_0f5afb30 == '\0') && (iVar8 = func_0x04108328(&DAT_0f5afb30), iVar8 != 0)) {
    func_0x07892120(0xf5afb18);
    FUN_0410844d(&DAT_0f5afb30);
  }
  auStack_ab0[0] = auStack_9dc[0];
  lStack_aa8 = 0;
  uStack_aa0 = 3;
  uStack_a98 = 1;
  uStack_a90 = 0;
  puStack_a88 = &UNK_078927f0;
  puStack_a80 = &SUB_048b06d0;
  puStack_a78 = &SUB_0788e4a0;
  puStack_a70 = &UNK_0ebb7d20;
  puStack_a68 = &UNK_0ebb7d30;
  uStack_a60 = 0;
  uStack_a58 = 0;
  plStack_a50 = (long *)0x0;
  func_0x048b05a0(&uStack_a00,auStack_ab0);
  plVar5 = plStack_a50;
  if (plStack_a50 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_a50 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_a50 + 0x10))(plStack_a50);
      func_0x0412c2d0(plVar5);
    }
  }
  uStack_9b8 = uStack_9f0;
  uStack_9b4 = uStack_9ec;
  uStack_9b0 = uStack_9e8;
  uStack_9ac = uStack_9e4;
  uStack_9c8 = uStack_a00;
  uStack_9c4 = uStack_9fc;
  uStack_9c0 = uStack_9f8;
  uStack_9bc = uStack_9f4;
  func_0x07892580(auStack_ab0,&uStack_9c8,auStack_968);
  if (uStack_a98._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_a9c,uStack_aa0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_a98) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar9 = *(long *)(piVar11 + 0xc);
    while (lVar9 != lStack_aa8) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar9 = *(long *)(piVar11 + 0xc);
    }
  }
  else {
    if (uStack_a98._4_4_ != 1) {
      if (uStack_a98._4_4_ == 0) {
        puVar13 = (uint *)(CONCAT44(uStack_a9c,uStack_aa0) + 0x18);
        *puVar13 = *puVar13 | 0x90000;
      }
      goto joined_r0x0eb72fcb;
    }
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_a9c,uStack_aa0) + 0x78) + 0x48);
    iVar8 = *piVar11;
    while (iVar8 != (int)uStack_a98) {
      piVar11 = piVar11 + 0x1a;
      iVar8 = *piVar11;
    }
  }
  *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 9;
joined_r0x0eb72fcb:
  if (cStack_9d0 == '\0') {
    func_0x07892860(auStack_ab0,&uStack_a08,&UNK_013ad25e,0x16);
  }
  lVar9 = func_0x0788e4a0(CONCAT44(uStack_a04,uStack_a08) + 0x18);
  piVar3 = *(int **)(*(long *)(lVar9 + 0x68) + 0x28);
  for (piVar11 = *(int **)(*(long *)(lVar9 + 0x68) + 0x20);
      (piVar11 != piVar3 && (*piVar11 != iStack_9d4)); piVar11 = piVar11 + 0xe) {
  }
  if ((piVar11 == piVar3) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01344e06),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  auStack_ab0[0] = auStack_ab0[0] & 0xffffff00;
  func_0x05d9c620(piVar11 + 2,auStack_9dc,auStack_9dc,auStack_ab0);
  func_0x048b0bc0(auStack_968);
  return;
}


