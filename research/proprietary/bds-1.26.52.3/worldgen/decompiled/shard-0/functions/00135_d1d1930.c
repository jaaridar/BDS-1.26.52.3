/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d1930
 * Label: string:JigsawReplacement
 * Body:  [[0d1d1930, 0d1d1ec3] [0d1d1ed0, 0d1d2070] [0d1d20de, 0d1d2162] [0d1d2196, 0d1d235a]]
 * Ghidra: FUN_0d1d1930
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d1d1930(ulong *param_1,byte *param_2,ulong param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  undefined8 uVar14;
  byte *pbVar15;
  long *plVar16;
  undefined4 unaff_EBP;
  long lVar17;
  long unaff_R12;
  byte *unaff_R13;
  byte bVar18;
  bool bVar19;
  
  plVar16 = (long *)(param_3 & 0xffffffff);
  if ((*param_2 & 1) == 0) {
    param_1[2] = *(ulong *)(param_2 + 0x10);
    uVar8 = *(undefined4 *)(param_2 + 4);
    uVar5 = *(undefined4 *)(param_2 + 8);
    uVar6 = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)((long)param_1 + 4) = uVar8;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined4 *)((long)param_1 + 0xc) = uVar6;
    if ((*(byte *)(unaff_R12 + 0x278) & 1) == 0) goto LAB_0d1d1990;
LAB_0d1d1957:
    uVar14 = *(undefined8 *)(unaff_R12 + 0x280);
    uVar2 = *(undefined8 *)(unaff_R12 + 0x288);
    plVar16[-1] = 0xd1d196f;
    func_0x0412e5e0(param_1 + 3,uVar2,uVar14);
  }
  else {
    uVar14 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    plVar16[-1] = 0xd1d1981;
    func_0x0412e5e0(param_1,uVar2,uVar14);
    if ((*(byte *)(unaff_R12 + 0x278) & 1) != 0) goto LAB_0d1d1957;
LAB_0d1d1990:
    param_1[5] = *(ulong *)(unaff_R12 + 0x288);
    uVar8 = *(undefined4 *)(unaff_R12 + 0x27c);
    uVar5 = *(undefined4 *)(unaff_R12 + 0x280);
    uVar6 = *(undefined4 *)(unaff_R12 + 0x284);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(unaff_R12 + 0x278);
    *(undefined4 *)((long)param_1 + 0x1c) = uVar8;
    *(undefined4 *)(param_1 + 4) = uVar5;
    *(undefined4 *)((long)param_1 + 0x24) = uVar6;
  }
  param_1[6] = *(ulong *)(unaff_R12 + 800);
  lVar12 = unaff_R12 + 0x518;
  plVar16[0xf] = (long)(param_1 + 3);
  plVar16[-1] = 0xd1d19cf;
  lVar10 = func_0x0d2279e0(lVar12,0xf71d6f8);
  if (lVar10 == 0) {
    plVar16[-1] = 0xd1d19e8;
    lVar10 = func_0x0d2279e0(unaff_R12 + 0x4f0,0xf71d6f8);
    if (lVar10 != 0) goto LAB_0d1d19ed;
    uVar8 = 5;
  }
  else {
LAB_0d1d19ed:
    uVar8 = 5;
    if (*(int *)(lVar10 + 0x50) == 5) {
      uVar8 = *(undefined4 *)(lVar10 + 0x38);
    }
  }
  *(undefined4 *)(param_1 + 7) = uVar8;
  *(byte *)((long)param_1 + 0x3c) = *(byte *)(unaff_R12 + 0x375);
  *(byte *)((long)param_1 + 0x3d) = *(byte *)(unaff_R12 + 0x376);
  plVar16[-1] = 0xd1d1a25;
  uVar8 = func_0x0d212e60();
  *(undefined4 *)(param_1 + 8) = uVar8;
  lVar10 = *(long *)(unaff_R12 + 0xb0);
  bVar18 = 0;
  if ((lVar10 != 0) &&
     (0x13 < (int)((ulong)(*(long *)(unaff_R12 + 0xb8) - lVar10) >> 4) * -0x11111111)) {
    if (*(int *)(lVar10 + 0x11d8) != 1) {
      plVar16[-1] = 0xd1d205d;
      uVar14 = func_0x04931450();
      plVar16[-1] = 0xd1d206c;
      func_0x041084d6(&DAT_0f7b8fb8);
      if ((param_1[0x54] & 1) != 0) goto LAB_0d1d2311;
      if ((param_1[0x51] & 1) != 0) goto LAB_0d1d2332;
LAB_0d1d21b4:
      bVar18 = (byte)param_1[0x4f];
      do {
        if (bVar18 == 1) {
          plVar16[-1] = 0xd1d21c7;
          func_0x048f6240(plVar16[0xb]);
        }
        plVar16[-1] = 0xd1d21d0;
        func_0x048f6080(*plVar16);
        plVar16[-1] = 0xd1d21dc;
        func_0x0ee386e0(param_1 + 0x35);
        plVar16[-1] = 0xd1d21e8;
        func_0x0ee386e0(param_1 + 0x34);
        plVar16[-1] = 0xd1d21f2;
        func_0x048f60c0(plVar16[1]);
        if ((*(byte *)plVar16[0xc] & 1) == 0) goto LAB_0d1d20de;
LAB_0d1d2200:
        uVar11 = param_1[0x29];
        uVar4 = param_1[0x2b];
        plVar16[-1] = 0xd1d2217;
        func_0x0412a280(uVar4,uVar11 & 0xfffffffffffffffe);
        if ((param_1[0x22] & 1) == 0) goto LAB_0d1d20eb;
LAB_0d1d2224:
        uVar11 = param_1[0x22];
        uVar4 = param_1[0x24];
        plVar16[-1] = 0xd1d223b;
        func_0x0412a280(uVar4,uVar11 & 0xfffffffffffffffe);
        if ((param_1[0x1f] & 1) == 0) goto LAB_0d1d20ff;
LAB_0d1d224f:
        uVar11 = param_1[0x1f];
        uVar4 = param_1[0x21];
        plVar16[-1] = 0xd1d2266;
        func_0x0412a280(uVar4,uVar11 & 0xfffffffffffffffe);
        if ((param_1[0x1c] & 1) == 0) goto LAB_0d1d2109;
LAB_0d1d2270:
        uVar11 = param_1[0x1c];
        uVar4 = param_1[0x1e];
        plVar16[-1] = 0xd1d2287;
        func_0x0412a280(uVar4,uVar11 & 0xfffffffffffffffe);
        if ((*(byte *)plVar16[0xd] & 1) == 0) goto LAB_0d1d2117;
LAB_0d1d2295:
        uVar11 = param_1[0x18];
        uVar4 = param_1[0x1a];
        plVar16[-1] = 0xd1d22ac;
        func_0x0412a280(uVar4,uVar11 & 0xfffffffffffffffe);
        if ((*(byte *)plVar16[0xe] & 1) == 0) goto LAB_0d1d2125;
LAB_0d1d22ba:
        uVar11 = param_1[0x12];
        uVar4 = param_1[0x14];
        plVar16[-1] = 0xd1d22d1;
        func_0x0412a280(uVar4,uVar11 & 0xfffffffffffffffe);
        if ((*(byte *)plVar16[0xf] & 1) == 0) goto LAB_0d1d2133;
LAB_0d1d22df:
        uVar11 = param_1[3];
        uVar4 = param_1[5];
        plVar16[-1] = 0xd1d22f0;
        func_0x0412a280(uVar4,uVar11 & 0xfffffffffffffffe);
        bVar18 = (byte)*param_1;
        while ((bVar18 & 1) == 0) {
          plVar16[-1] = 0xd1d2144;
          func_0x0eee2d70(uVar14);
          plVar16[-1] = 0xd1d2154;
          func_0x0412a280();
          if ((*(byte *)plVar16[0xc] & 1) != 0) goto LAB_0d1d2200;
LAB_0d1d20de:
          if ((param_1[0x22] & 1) != 0) goto LAB_0d1d2224;
LAB_0d1d20eb:
          if ((param_1[0x1f] & 1) != 0) goto LAB_0d1d224f;
LAB_0d1d20ff:
          if ((param_1[0x1c] & 1) != 0) goto LAB_0d1d2270;
LAB_0d1d2109:
          if ((*(byte *)plVar16[0xd] & 1) != 0) goto LAB_0d1d2295;
LAB_0d1d2117:
          if ((*(byte *)plVar16[0xe] & 1) != 0) goto LAB_0d1d22ba;
LAB_0d1d2125:
          if ((*(byte *)plVar16[0xf] & 1) != 0) goto LAB_0d1d22df;
LAB_0d1d2133:
          bVar18 = (byte)*param_1;
        }
        uVar11 = *param_1;
        uVar4 = param_1[2];
        plVar16[-1] = 0xd1d2309;
        func_0x0412a280(uVar4,uVar11 & 0xfffffffffffffffe);
        plVar16[-1] = 0xd1d2311;
        func_0x0eee2d70(uVar14);
LAB_0d1d2311:
        uVar11 = param_1[0x54];
        uVar4 = param_1[0x56];
        plVar16[-1] = 0xd1d2328;
        func_0x0412a280(uVar4,uVar11 & 0xfffffffffffffffe);
        if ((param_1[0x51] & 1) == 0) goto LAB_0d1d21b4;
LAB_0d1d2332:
        uVar11 = param_1[0x51];
        uVar4 = param_1[0x53];
        plVar16[-1] = 0xd1d2349;
        func_0x0412a280(uVar4,uVar11 & 0xfffffffffffffffe);
        bVar18 = (byte)param_1[0x4f];
      } while( true );
    }
    bVar18 = *(byte *)(lVar10 + 0x11d4);
  }
  *(byte *)((long)param_1 + 0x44) = bVar18;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(unaff_R12 + 0x370);
  plVar16[-1] = 0xd1d1a82;
  lVar10 = func_0x0d2279e0(lVar12,0xf71d538);
  if (lVar10 == 0) {
    plVar16[-1] = 0xd1d1a9b;
    lVar10 = func_0x0d2279e0(unaff_R12 + 0x4f0,0xf71d538);
    if (lVar10 != 0) goto LAB_0d1d1aa0;
LAB_0d1d1aac:
    uVar11 = 0;
  }
  else {
LAB_0d1d1aa0:
    if (*(int *)(lVar10 + 0x50) != 7) goto LAB_0d1d1aac;
    uVar11 = *(ulong *)(lVar10 + 0x38);
  }
  param_1[10] = uVar11;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(unaff_R12 + 0x2c8);
  *(byte *)(param_1 + 0xd) = *(byte *)(unaff_R12 + 0x43a);
  *(byte *)((long)param_1 + 0x69) = *(byte *)(unaff_R12 + 0x43b);
  *(byte *)((long)param_1 + 0x6a) = *(byte *)(unaff_R12 + 0x43d);
  *(undefined4 *)((long)param_1 + 0x6c) = *(undefined4 *)(unaff_R12 + 0x440);
  *(byte *)(param_1 + 0xe) = *(byte *)(unaff_R12 + 0x451);
  *(undefined4 *)((long)param_1 + 0x74) = *(undefined4 *)(unaff_R12 + 0x3a8);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(unaff_R12 + 0x350);
  uVar8 = *(undefined4 *)(unaff_R12 + 0x344);
  uVar5 = *(undefined4 *)(unaff_R12 + 0x348);
  uVar6 = *(undefined4 *)(unaff_R12 + 0x34c);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(unaff_R12 + 0x340);
  *(undefined4 *)((long)param_1 + 0x7c) = uVar8;
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  *(undefined4 *)((long)param_1 + 0x84) = uVar6;
  puVar1 = param_1 + 0x12;
  bVar18 = *(byte *)(unaff_R12 + 0x358);
  plVar16[0xe] = (long)puVar1;
  if ((bVar18 & 1) == 0) {
    param_1[0x14] = *(ulong *)(unaff_R12 + 0x368);
    uVar11 = *(ulong *)(unaff_R12 + 0x360);
    *puVar1 = *(ulong *)(unaff_R12 + 0x358);
    param_1[0x13] = uVar11;
  }
  else {
    uVar14 = *(undefined8 *)(unaff_R12 + 0x360);
    uVar2 = *(undefined8 *)(unaff_R12 + 0x368);
    plVar16[-1] = 0xd1d1b62;
    func_0x0412e5e0(puVar1,uVar2,uVar14);
  }
  *(undefined4 *)plVar16 = unaff_EBP;
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(unaff_R12 + 0x2a8);
  uVar8 = *(undefined4 *)(unaff_R12 + 0x29c);
  uVar5 = *(undefined4 *)(unaff_R12 + 0x2a0);
  uVar6 = *(undefined4 *)(unaff_R12 + 0x2a4);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(unaff_R12 + 0x298);
  *(undefined4 *)((long)param_1 + 0xac) = uVar8;
  *(undefined4 *)(param_1 + 0x16) = uVar5;
  *(undefined4 *)((long)param_1 + 0xb4) = uVar6;
  puVar1 = param_1 + 0x18;
  if ((*(byte *)(unaff_R12 + 0x2b0) & 1) == 0) {
    param_1[0x1a] = *(ulong *)(unaff_R12 + 0x2c0);
    uVar11 = *(ulong *)(unaff_R12 + 0x2b8);
    *puVar1 = *(ulong *)(unaff_R12 + 0x2b0);
    param_1[0x19] = uVar11;
  }
  else {
    uVar14 = *(undefined8 *)(unaff_R12 + 0x2b8);
    uVar2 = *(undefined8 *)(unaff_R12 + 0x2c0);
    plVar16[-1] = 0xd1d1bc6;
    func_0x0412e5e0(puVar1,uVar2,uVar14);
  }
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(unaff_R12 + 0x290);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  pbVar15 = (byte *)((long)param_1 + 0x11c);
  pbVar15[0] = 0;
  pbVar15[1] = 0;
  pbVar15[2] = 0;
  pbVar15[3] = 0;
  pbVar15[4] = 0;
  pbVar15[5] = 0;
  pbVar15[6] = 0;
  pbVar15[7] = 0;
  pbVar15 = (byte *)((long)param_1 + 0x124);
  pbVar15[0] = 0;
  pbVar15[1] = 0;
  pbVar15[2] = 0;
  pbVar15[3] = 0;
  pbVar15[4] = 0;
  pbVar15[5] = 0;
  pbVar15[6] = 0;
  pbVar15[7] = 0;
  uVar8 = *(undefined4 *)(unaff_R12 + 0xc);
  uVar5 = *(undefined4 *)(unaff_R12 + 0x10);
  uVar6 = *(undefined4 *)(unaff_R12 + 0x14);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(unaff_R12 + 8);
  *(undefined4 *)((long)param_1 + 0x134) = uVar8;
  *(undefined4 *)(param_1 + 0x27) = uVar5;
  *(undefined4 *)((long)param_1 + 0x13c) = uVar6;
  *(byte *)(param_1 + 0x28) = *(byte *)(unaff_R12 + 0x18);
  plVar16[0xd] = (long)puVar1;
  plVar16[-1] = 0xd1d1c27;
  lVar12 = func_0x0d2279e0(lVar12,0xf71d798);
  if (lVar12 == 0) {
    plVar16[-1] = 0xd1d1c40;
    lVar12 = func_0x0d2279e0(unaff_R12 + 0x4f0,0xf71d798);
    if (lVar12 == 0) {
      pbVar15 = (byte *)0x0;
      goto LAB_0d1d1c57;
    }
  }
  pbVar15 = (byte *)0x0;
  if (*(int *)(lVar12 + 0x50) == 3) {
    pbVar15 = (byte *)(lVar12 + 0x38);
  }
LAB_0d1d1c57:
  puVar1 = param_1 + 0x29;
  pbVar13 = &UNK_01e79d90;
  if (pbVar15 != (byte *)0x0) {
    pbVar13 = pbVar15;
  }
  if ((*pbVar13 & 1) == 0) {
    param_1[0x2b] = *(ulong *)(pbVar13 + 0x10);
    uVar8 = *(undefined4 *)(pbVar13 + 4);
    uVar5 = *(undefined4 *)(pbVar13 + 8);
    uVar6 = *(undefined4 *)(pbVar13 + 0xc);
    *(undefined4 *)puVar1 = *(undefined4 *)pbVar13;
    *(undefined4 *)((long)param_1 + 0x14c) = uVar8;
    *(undefined4 *)(param_1 + 0x2a) = uVar5;
    *(undefined4 *)((long)param_1 + 0x154) = uVar6;
  }
  else {
    uVar14 = *(undefined8 *)(pbVar13 + 8);
    uVar2 = *(undefined8 *)(pbVar13 + 0x10);
    plVar16[-1] = 0xd1d1c92;
    func_0x0412e5e0(puVar1,uVar2,uVar14);
  }
  plVar16[1] = (long)(param_1 + 0x2c);
  plVar16[0xc] = (long)puVar1;
  plVar16[-1] = 0xd1d1cb0;
  func_0x0491cee0(param_1 + 0x2c,unaff_R12 + 0x138);
  plVar16[-1] = 0xd1d1cc4;
  func_0x0491cee0(param_1 + 0x2f,unaff_R12 + 0x150);
  *(byte *)(param_1 + 0x32) = *(byte *)(unaff_R12 + 0x168);
  lVar12 = unaff_R12 + 0x50;
  lVar10 = lVar12;
  if ((*(char *)(unaff_R12 + 0x77) == '\0') &&
     ((lVar17 = unaff_R12 + 0x70, *(char *)(unaff_R12 + 0x68) != '\0' ||
      (lVar10 = lVar17, (*(byte *)(unaff_R12 + 0x56) & 1) != 0)))) {
    plVar16[-1] = 0xd1d1d05;
    cVar7 = func_0x04fa7a10(lVar17,lVar12);
    lVar10 = lVar12;
    if (cVar7 != '\0') {
      lVar10 = lVar17;
    }
  }
  lVar12 = 0xf72b850;
  if (((*(byte *)(lVar10 + 6) | *(byte *)(lVar10 + 0x18)) & 1) != 0) {
    lVar12 = lVar10;
  }
  plVar16[-1] = 0xd1d1d2d;
  func_0x0d88e390(param_1 + 0x33,lVar12);
  *(byte *)(param_1 + 0x37) = *(byte *)(unaff_R12 + 0x439);
  *(byte *)((long)param_1 + 0x1b9) = (byte)(int)*plVar16;
  *plVar16 = (long)(param_1 + 0x38);
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(unaff_R12 + 0x398);
  puVar1 = param_1 + 0x3f;
  iVar9 = *(int *)(unaff_R12 + 0x3a8);
  plVar16[0xb] = (long)puVar1;
  if ((iVar9 == 0) || (*(char *)(unaff_R12 + 0x430) != '\x01')) {
    *(byte *)puVar1 = 0;
    bVar18 = 0;
  }
  else {
    bVar18 = 1;
    plVar16[-1] = 0xd1d1da8;
    func_0x0491d030(puVar1,unaff_R12 + 0x3b0);
  }
  *(byte *)(param_1 + 0x4f) = bVar18;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(byte *)((long)param_1 + 0x284) = *(byte *)(unaff_R12 + 0x4c2);
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  if (DAT_0f7b8fb8 == '\0') {
    plVar16[-1] = 0xd1d2019;
    iVar9 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar9 != 0) {
      plVar16[-1] = 0xd1d202d;
      func_0x0ee5ea20(&DAT_0f7b8f98);
      plVar16[-1] = 0xd1d2047;
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      plVar16[-1] = 0xd1d2053;
      func_0x0410844d(&DAT_0f7b8fb8);
    }
  }
  pbVar15 = (byte *)plVar16[0x10];
  bVar19 = (*pbVar15 & 1) != 0;
  pbVar13 = pbVar15 + 1;
  if (bVar19) {
    pbVar13 = *(byte **)(pbVar15 + 0x10);
  }
  uVar11 = (ulong)(*pbVar15 >> 1);
  if (bVar19) {
    uVar11 = *(ulong *)(pbVar15 + 8);
  }
  plVar16[0x11] = (long)pbVar13;
  plVar16[0x12] = uVar11;
  pcVar3 = *(code **)(_DAT_0f7b8f98 + 0x100);
  plVar16[-1] = 0xd1d1e4e;
  (*pcVar3)(plVar16 + 2,&DAT_0f7b8f98,plVar16 + 0x11,param_1 + 0xc);
  if ((char)plVar16[10] == '\0') {
    lVar12 = plVar16[7];
    if (lVar12 != 0) {
      lVar10 = plVar16[8];
      lVar17 = lVar12;
      if (lVar12 != lVar10) {
        do {
          lVar10 = lVar10 + -0x40;
          plVar16[-1] = 0xd1d1e8c;
          func_0x048b3e80(lVar10);
        } while (lVar10 != lVar12);
        lVar17 = plVar16[7];
      }
      plVar16[8] = lVar12;
      plVar16[-1] = 0xd1d1ea8;
      func_0x0412a280(lVar17,plVar16[9] - lVar17);
    }
    lVar12 = plVar16[4];
    if (lVar12 != 0) {
      lVar10 = plVar16[5];
      lVar17 = lVar12;
      if (lVar12 != lVar10) {
        do {
          if ((*(char *)(lVar10 + -8) == '\x01') && ((*(byte *)(lVar10 + -0x30) & 1) != 0)) {
            uVar11 = *(ulong *)(lVar10 + -0x30);
            uVar14 = *(undefined8 *)(lVar10 + -0x20);
            plVar16[-1] = 0xd1d1ef8;
            func_0x0412a280(uVar14,uVar11 & 0xfffffffffffffffe);
          }
          lVar10 = lVar10 + -0x50;
        } while (lVar10 != lVar12);
        lVar17 = plVar16[4];
      }
      plVar16[5] = lVar12;
      plVar16[-1] = 0xd1d1f11;
      func_0x0412a280(lVar17,plVar16[6] - lVar17);
    }
  }
  if ((*unaff_R13 & 1) == 0) {
    uVar11 = (ulong)(*unaff_R13 >> 1);
  }
  else {
    uVar11 = *(ulong *)(unaff_R13 + 8);
  }
  if (uVar11 == 0) {
    unaff_R13 = pbVar15;
  }
  plVar16[-1] = 0xd1d1f37;
  func_0x0d1d0e90(param_1,unaff_R13);
  pbVar15 = (byte *)*plVar16;
  plVar16[-1] = 0xd1d1f43;
  uVar14 = func_0x0d212860();
  plVar16[-1] = 0xd1d1f50;
  func_0x09b93790(plVar16 + 2,uVar14);
  if ((*pbVar15 & 1) != 0) {
    uVar11 = param_1[0x38];
    uVar4 = param_1[0x3a];
    plVar16[-1] = 0xd1d1f6d;
    func_0x0412a280(uVar4,uVar11 & 0xfffffffffffffffe);
  }
  *(long *)(pbVar15 + 0x10) = plVar16[4];
  uVar8 = *(undefined4 *)((long)plVar16 + 0x14);
  lVar12 = plVar16[3];
  uVar5 = *(undefined4 *)((long)plVar16 + 0x1c);
  *(int *)pbVar15 = (int)plVar16[2];
  *(undefined4 *)(pbVar15 + 4) = uVar8;
  *(int *)(pbVar15 + 8) = (int)lVar12;
  *(undefined4 *)(pbVar15 + 0xc) = uVar5;
  *(undefined2 *)(plVar16 + 2) = 0;
  if ((param_1[0x3b] & 1) == 0) {
    param_1[0x3d] = plVar16[7];
    uVar11 = plVar16[6];
    param_1[0x3b] = plVar16[5];
    param_1[0x3c] = uVar11;
  }
  else {
    uVar11 = param_1[0x3b];
    uVar4 = param_1[0x3d];
    plVar16[-1] = 0xd1d1fc1;
    func_0x0412a280(uVar4,uVar11 & 0xfffffffffffffffe);
    bVar18 = *(byte *)(plVar16 + 2);
    param_1[0x3d] = plVar16[7];
    uVar8 = *(undefined4 *)((long)plVar16 + 0x2c);
    lVar12 = plVar16[6];
    uVar5 = *(undefined4 *)((long)plVar16 + 0x34);
    *(int *)(param_1 + 0x3b) = (int)plVar16[5];
    *(undefined4 *)((long)param_1 + 0x1dc) = uVar8;
    *(int *)(param_1 + 0x3c) = (int)lVar12;
    *(undefined4 *)((long)param_1 + 0x1e4) = uVar5;
    *(undefined2 *)(plVar16 + 5) = 0;
    if ((bVar18 & 1) != 0) {
      plVar16[-1] = 0xd1d1ff4;
      func_0x0412a280(plVar16[4],plVar16[2] & 0xfffffffffffffffe);
    }
  }
  return;
}


