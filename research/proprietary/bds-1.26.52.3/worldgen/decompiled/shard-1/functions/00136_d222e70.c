/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd222e70
 * Label: string:bool cereal::BasicLoader::load(SchemaReader &, Type &, const
 * Body:  [[0d222e70, 0d2230a6] [0d2230b0, 0d2232d7] [0d2232e0, 0d22341b] [0d223440, 0d223600] [0d223610, 0d223737] [0d223740, 0d22378a] [0d223790, 0d2238f3]]
 * Ghidra: FUN_0d222e70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0d222e70(long param_1,undefined8 *param_2,uint *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  byte bVar3;
  uint *puVar4;
  long *plVar5;
  uint *puVar6;
  char cVar7;
  int iVar8;
  ulong *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  byte *extraout_RDX;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  long **pplVar17;
  long lVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong uVar21;
  long *plVar22;
  ulong *puVar23;
  ulong *puVar24;
  long *plVar25;
  bool bVar26;
  undefined8 uStack_9b0;
  ulong uStack_9a8;
  long lStack_9a0;
  long lStack_998;
  long lStack_990;
  long lStack_988;
  long lStack_980;
  long lStack_978;
  byte bStack_970;
  ulong uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  long *plStack_948;
  long lStack_940;
  long lStack_938;
  byte *pbStack_930;
  ulong uStack_928;
  byte *pbStack_920;
  ulong uStack_918;
  undefined8 uStack_910;
  undefined *puStack_908;
  undefined8 uStack_900;
  undefined4 uStack_8f8;
  undefined1 auStack_8f0 [1024];
  ulong uStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  undefined8 *puStack_4d8;
  ulong *puStack_4d0;
  ulong *puStack_4c8;
  long lStack_4c0;
  undefined4 uStack_4b8;
  uint uStack_4b4;
  uint uStack_4b0;
  uint uStack_4ac;
  ulong uStack_4a8;
  ulong uStack_498;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined8 uStack_480;
  ulong uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_460;
  ulong uStack_458;
  ulong uStack_450;
  long *plStack_448;
  undefined8 uStack_440;
  long lStack_438;
  uint *puStack_430;
  uint *puStack_428;
  uint *puStack_420;
  undefined8 *puStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  byte bStack_3f8;
  undefined8 uStack_38;
  
  if ((*param_3 & 1) == 0) {
    uStack_4a8 = *(ulong *)(param_3 + 4);
    uStack_4b8 = *param_3;
    uStack_4b4 = param_3[1];
    uStack_4b0 = param_3[2];
    uStack_4ac = param_3[3];
  }
  else {
    lStack_4c0 = 0xd222eb1;
    func_0x0412e5e0(&uStack_4b8,*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 2));
  }
  if (DAT_0f7b8fb8 == '\0') {
    lStack_4c0 = 0xd223375;
    iVar8 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar8 != 0) {
      lStack_4c0 = 0xd223389;
      func_0x0ee5ea20(&DAT_0f7b8f98);
      lStack_4c0 = 0xd2233a3;
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      lStack_4c0 = 0xd2233af;
      func_0x0410844d(&DAT_0f7b8fb8);
    }
  }
  bVar26 = (uStack_4b8 & 1) == 0;
  uStack_498 = uStack_4a8;
  if (bVar26) {
    uStack_498 = (long)&uStack_4b8 + 1U;
  }
  puStack_490 = (undefined *)(ulong)((byte)uStack_4b8 >> 1);
  if (!bVar26) {
    puStack_490 = (undefined *)CONCAT44(uStack_4ac,uStack_4b0);
  }
  puStack_488 = &UNK_01d3f279;
  uStack_480 = 0x11;
  lStack_4c0 = 0xd222f1c;
  func_0x049151c0(&lStack_438,&uStack_498,2,0x2f);
  uStack_440 = uStack_38;
  pplVar17 = &plStack_448;
  lStack_4c0 = 0xd222f47;
  plStack_448 = &lStack_438;
  cVar7 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98);
  if (cVar7 != '\0') {
    if (DAT_0f7b8fb8 == '\0') {
      lStack_4c0 = 0xd2233c0;
      iVar8 = func_0x04108328(&DAT_0f7b8fb8);
      if (iVar8 != 0) {
        lStack_4c0 = 0xd2233d4;
        func_0x0ee5ea20(&DAT_0f7b8f98);
        lStack_4c0 = 0xd2233ee;
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        lStack_4c0 = 0xd2233fa;
        func_0x0410844d(&DAT_0f7b8fb8);
      }
    }
    bVar26 = (uStack_4b8 & 1) != 0;
    uStack_458 = (long)&uStack_4b8 + 1U;
    if (bVar26) {
      uStack_458 = uStack_4a8;
    }
    uStack_450 = (ulong)((byte)uStack_4b8 >> 1);
    if (bVar26) {
      uStack_450 = CONCAT44(uStack_4ac,uStack_4b0);
    }
    lStack_4c0 = 0xd222f9f;
    (**(code **)(_DAT_0f7b8f98 + 0x98))(&lStack_438,&DAT_0f7b8f98,&uStack_458);
    uStack_498 = 0x674e065df3ae244c;
    puStack_490 = &UNK_0140f690;
    puStack_488 = (undefined *)0x1;
    uStack_480 = CONCAT44(uStack_480._4_4_,0xd8);
    if (bStack_3f8 == 0) {
      uStack_478 = 0;
      uStack_470 = 0;
      uStack_468 = 0;
      lStack_4c0 = 0xd223009;
      func_0x0eedeb80(2,0x2d,&lStack_438,&uStack_478,&uStack_498);
      if ((uStack_478 & 1) != 0) {
        lStack_4c0 = 0xd223023;
        func_0x0412a280(uStack_468,uStack_478 & 0xfffffffffffffffe);
      }
    }
    lVar15 = lStack_410;
    if ((bStack_3f8 & 1) == 0) {
      if (lStack_410 != 0) {
        while (lVar15 != lStack_408) {
          lStack_4c0 = 0xd22305c;
          func_0x048b3e80(lStack_408 + -0x40);
          lStack_408 = lStack_408 + -0x40;
        }
        lStack_408 = lVar15;
        lStack_4c0 = 0xd223081;
        func_0x0412a280(lStack_410,lStack_400 - lStack_410);
      }
      puVar6 = puStack_428;
      puVar4 = puStack_420;
      if (puStack_428 != (uint *)0x0) {
        for (; puVar6 != puVar4; puVar4 = puVar4 + -0x14) {
          if (((char)puVar4[-2] == '\x01') && ((puVar4[-0xc] & 1) != 0)) {
            lStack_4c0 = 0xd2230dc;
            func_0x0412a280(*(undefined8 *)(puVar4 + -8),
                            *(ulong *)(puVar4 + -0xc) & 0xfffffffffffffffe);
          }
        }
        puStack_420 = puVar6;
        lStack_4c0 = 0xd2231fe;
        func_0x0412a280(puStack_428,(long)puStack_418 - (long)puStack_428);
      }
    }
    goto LAB_0d223336;
  }
  param_2 = (undefined8 *)*param_2;
  puVar23 = (ulong *)param_2[1];
  if (puVar23 < (ulong *)param_2[2]) {
    if ((uStack_4b8 & 1) == 0) {
      puVar23[2] = uStack_4a8;
      *(uint *)puVar23 = uStack_4b8;
      *(uint *)((long)puVar23 + 4) = uStack_4b4;
      *(uint *)(puVar23 + 1) = uStack_4b0;
      *(uint *)((long)puVar23 + 0xc) = uStack_4ac;
    }
    else {
      lStack_4c0 = 0xd2231ce;
      func_0x0412e5e0(puVar23,uStack_4a8,CONCAT44(uStack_4ac,uStack_4b0));
    }
    puVar14 = puVar23 + 3;
    param_2[1] = puVar14;
  }
  else {
    puVar9 = (ulong *)*param_2;
    lVar15 = (long)puVar23 - (long)puVar9;
    uVar13 = (lVar15 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar13) {
      lStack_4c0 = 0xd223404;
      func_0x04907a00();
LAB_0d223404:
      lStack_4c0 = 0xd223409;
      lVar12 = func_0x04882eb0();
      lStack_4c0 = 0xd22341a;
      func_0x041084d6(&DAT_0f7b8fb8);
      if ((uStack_4b8 & 1) != 0) {
        pplVar17 = (long **)(CONCAT44(uStack_4b4,uStack_4b8) & 0xfffffffffffffffe);
        lStack_4c0 = 0xd223458;
        func_0x0412a280(uStack_4a8);
      }
      lStack_4c0 = 0xd223460;
      lVar18 = lVar12;
      func_0x0eee2d70();
      lStack_4e8 = lVar12;
      lStack_4e0 = param_1;
      puStack_4d8 = param_2;
      puStack_4d0 = puVar23;
      puStack_4c8 = puVar9;
      lStack_4c0 = lVar15;
      func_0x0eee2dd0(auStack_8f0,0,0x408);
      bVar26 = (*extraout_RDX & 1) != 0;
      pbStack_920 = extraout_RDX + 1;
      if (bVar26) {
        pbStack_920 = *(byte **)(extraout_RDX + 0x10);
      }
      uStack_918 = (ulong)(*extraout_RDX >> 1);
      if (bVar26) {
        uStack_918 = *(ulong *)(extraout_RDX + 8);
      }
      pbVar1 = (byte *)pplVar17[1];
      bVar26 = (*pbVar1 & 1) != 0;
      pbStack_930 = pbVar1 + 1;
      if (bVar26) {
        pbStack_930 = *(byte **)(pbVar1 + 0x10);
      }
      uStack_928 = (ulong)(*pbVar1 >> 1);
      if (bVar26) {
        uStack_928 = *(ulong *)(pbVar1 + 8);
      }
      func_0x09acd4b0(&uStack_9b0,auStack_8f0,&pbStack_920,&pbStack_930);
      uStack_910 = 0xf398c75b668f13b;
      puStack_908 = &UNK_0140f690;
      uStack_900 = 1;
      uStack_8f8 = 0x34;
      if (bStack_970 == 0) {
        uStack_960 = 0;
        uStack_958 = 0;
        uStack_950 = 0;
        func_0x0eedeb80(2,0x2d,&uStack_9b0,&uStack_960,&uStack_910);
        if ((uStack_960 & 1) != 0) {
          func_0x0412a280(uStack_950,uStack_960 & 0xfffffffffffffffe);
        }
      }
      lVar15 = lStack_988;
      if ((bStack_970 & 1) == 0) {
        if (lStack_988 != 0) {
          while (lVar15 != lStack_980) {
            func_0x048b3e80(lStack_980 + -0x40);
            lStack_980 = lStack_980 + -0x40;
          }
          lStack_980 = lVar15;
          func_0x0412a280(lStack_988,lStack_978 - lStack_988);
        }
        lVar12 = lStack_9a0;
        lVar15 = lStack_998;
        if (lStack_9a0 != 0) {
          for (; lVar12 != lVar15; lVar15 = lVar15 + -0x50) {
            if ((*(char *)(lVar15 + -8) == '\x01') && ((*(byte *)(lVar15 + -0x30) & 1) != 0)) {
              func_0x0412a280(*(undefined8 *)(lVar15 + -0x20),
                              *(ulong *)(lVar15 + -0x30) & 0xfffffffffffffffe);
            }
          }
          lStack_998 = lVar12;
          func_0x0412a280(lStack_9a0,lStack_990 - lStack_9a0);
        }
      }
      if (0xfffffffffffffff7 < uStack_4f0) {
        uVar11 = func_0x04882e30();
        if ((uStack_9b0 & 1) != 0) {
          func_0x0412a280(lStack_9a0,uStack_9b0 & 0xfffffffffffffffe);
        }
        func_0x0eee2d70(uVar11);
        pcVar2 = (code *)swi(3);
        lVar15 = (*pcVar2)();
        return lVar15;
      }
      lStack_938 = *(long *)(extraout_RDX + 0x30);
      lStack_940 = *(long *)(extraout_RDX + 0x50);
      plVar22 = *pplVar17;
      lVar15 = (long)&uStack_9b0 + 1;
      if (uStack_4f0 < 0x17) {
        uStack_9b0 = CONCAT71(uStack_9b0._1_7_,(char)uStack_4f0 * '\x02');
        lVar12 = lVar15;
        if (uStack_4f0 == 0) goto LAB_0d223703;
      }
      else {
        uVar13 = 0x1a;
        if ((uStack_4f0 | 7) != 0x17) {
          uVar13 = (uStack_4f0 | 7) + 1;
        }
        lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
        if (lVar12 == 0) {
          func_0x0eec74c0(uVar13,0);
        }
        uStack_9b0 = uVar13 | 1;
        uStack_9a8 = uStack_4f0;
        lStack_9a0 = lVar12;
      }
      func_0x0eee2f00(lVar12,auStack_8f0,uStack_4f0);
LAB_0d223703:
      *(undefined1 *)(lVar12 + uStack_4f0) = 0;
      plVar10 = (long *)plVar22[1];
      plStack_948 = plVar22;
      if (plVar10 == (long *)0x0) {
        plVar22 = plVar22 + 1;
        plVar25 = plVar22;
      }
      else {
        bVar3 = (byte)uStack_9b0;
        uVar13 = (ulong)((byte)uStack_9b0 >> 1);
        if ((uStack_9b0 & 1) != 0) {
          lVar15 = lStack_9a0;
          uVar13 = uStack_9a8;
        }
        do {
          while( true ) {
            plVar22 = plVar10;
            bVar26 = (*(byte *)(plVar22 + 4) & 1) != 0;
            lVar12 = (long)plVar22 + 0x21;
            if (bVar26) {
              lVar12 = plVar22[6];
            }
            uVar16 = (ulong)(*(byte *)(plVar22 + 4) >> 1);
            if (bVar26) {
              uVar16 = plVar22[5];
            }
            uVar21 = uVar13;
            if (uVar16 < uVar13) {
              uVar21 = uVar16;
            }
            iVar8 = func_0x0eee2ff0(lVar15,lVar12,uVar21);
            if (iVar8 == 0) break;
            if (-1 < iVar8) goto LAB_0d223795;
LAB_0d223740:
            plVar10 = (long *)*plVar22;
            plVar25 = plVar22;
            if ((long *)*plVar22 == (long *)0x0) goto LAB_0d2237cd;
          }
          if (uVar13 < uVar16) goto LAB_0d223740;
LAB_0d223795:
          iVar8 = func_0x0eee2ff0(lVar12,lVar15,uVar21);
          if (iVar8 == 0) {
            if (uVar13 <= uVar16) goto LAB_0d223861;
          }
          else if (-1 < iVar8) goto LAB_0d223861;
          plVar10 = (long *)plVar22[1];
        } while ((long *)plVar22[1] != (long *)0x0);
        plVar25 = plVar22 + 1;
      }
LAB_0d2237cd:
      plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
      if (plVar10 == (long *)0x0) {
        func_0x0eec74c0(0x48,0);
      }
      plVar5 = plStack_948;
      plVar10[6] = lStack_9a0;
      plVar10[4] = uStack_9b0;
      plVar10[5] = uStack_9a8;
      uStack_9b0 = 0;
      uStack_9a8 = 0;
      lStack_9a0 = 0;
      plVar10[7] = 0;
      plVar10[8] = 0;
      *plVar10 = 0;
      plVar10[1] = 0;
      plVar10[2] = (long)plVar22;
      *plVar25 = (long)plVar10;
      if (*(long *)*plStack_948 != 0) {
        *plStack_948 = *(long *)*plStack_948;
      }
      func_0x048bed00(plStack_948[1],plVar10);
      plVar5[2] = plVar5[2] + 1;
      plVar22 = plVar10;
      bVar3 = (byte)uStack_9b0;
LAB_0d223861:
      plVar22[7] = lStack_938;
      plVar22[8] = lStack_940;
      if ((bVar3 & 1) != 0) {
        func_0x0412a280(lStack_9a0,uStack_9b0 & 0xfffffffffffffffe);
      }
      *(undefined1 *)(lVar18 + 0x40) = 1;
      return lVar18;
    }
    lVar12 = (long)param_2[2] - (long)puVar9 >> 3;
    uVar16 = lVar12 * 0x5555555555555556;
    if (uVar13 < uVar16) {
      uVar13 = uVar16;
    }
    if (0x555555555555554 < (ulong)(lVar12 * -0x5555555555555555)) {
      uVar13 = 0xaaaaaaaaaaaaaaa;
    }
    lStack_460 = param_1;
    puStack_418 = param_2;
    if (uVar13 == 0) {
      lStack_438 = 0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar13) goto LAB_0d223404;
      lStack_4c0 = 0xd2231a9;
      lStack_438 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13 * 0x18);
      if (lStack_438 == 0) {
        lStack_4c0 = 0xd2231b8;
        func_0x0eec74c0(uVar13 * 0x18,0);
        lStack_438 = 0;
      }
    }
    puStack_430 = (uint *)(lStack_438 + lVar15);
    puStack_420 = (uint *)(lStack_438 + uVar13 * 0x18);
    puStack_428 = puStack_430;
    if ((uStack_4b8 & 1) == 0) {
      *(ulong *)(puStack_430 + 4) = uStack_4a8;
      *puStack_430 = uStack_4b8;
      puStack_430[1] = uStack_4b4;
      puStack_430[2] = uStack_4b0;
      puStack_430[3] = uStack_4ac;
      puVar19 = (ulong *)((long)puStack_430 - lVar15);
      puVar14 = (ulong *)(puStack_430 + 6);
      puVar24 = puVar9;
      puVar20 = puVar19;
      if (puVar9 != puVar23) {
LAB_0d2232b0:
        do {
          puVar19[2] = puVar9[2];
          uVar13 = puVar9[1];
          *puVar19 = *puVar9;
          puVar19[1] = uVar13;
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9 = puVar9 + 3;
          puVar19 = puVar19 + 3;
        } while (puVar9 != puVar23);
        do {
          if ((*puVar24 & 1) != 0) {
            lStack_4c0 = 0xd2232ff;
            func_0x0412a280(puVar24[2],*puVar24 & 0xfffffffffffffffe);
          }
          puVar24 = puVar24 + 3;
        } while (puVar24 != puVar23);
        puVar9 = (ulong *)*param_2;
        puVar19 = puVar20;
      }
    }
    else {
      lStack_4c0 = 0xd223270;
      func_0x0412e5e0(puStack_430,uStack_4a8,CONCAT44(uStack_4ac,uStack_4b0));
      puVar9 = (ulong *)*param_2;
      puVar23 = (ulong *)param_2[1];
      puVar19 = (ulong *)((long)puStack_430 - ((long)puVar23 - (long)puVar9));
      puVar14 = (ulong *)(puStack_428 + 6);
      puVar24 = puVar9;
      puVar20 = puVar19;
      if (puVar9 != puVar23) goto LAB_0d2232b0;
    }
    *param_2 = puVar19;
    param_2[1] = puVar14;
    lVar15 = param_2[2];
    param_2[2] = puStack_420;
    param_1 = lStack_460;
    if (puVar9 != (ulong *)0x0) {
      lStack_4c0 = 0xd22332d;
      func_0x0412a280(puVar9,lVar15 - (long)puVar9);
      param_1 = lStack_460;
    }
  }
  param_2[1] = puVar14;
LAB_0d223336:
  if ((uStack_4b8 & 1) != 0) {
    lStack_4c0 = 0xd22334e;
    func_0x0412a280(uStack_4a8,CONCAT44(uStack_4b4,uStack_4b8) & 0xfffffffffffffffe);
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  return param_1;
}


