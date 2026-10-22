/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8a23f80 (ELF vaddr 0x8923f80)
 * Label: caller-of-seed
 * Body:  [[08a23f80, 08a24c88] [08a24c90, 08a24cc9] [08a24cd0, 08a258be] [08a258c0, 08a25915] [08a25920, 08a25991] [08a259a0, 08a267b7] [08a267c0, 08a27548] [08a27550, 08a2757d] [08a27580, 08a27abb] [08a27ac0, 08a27c37] [08a27c40, 08a27fdd] [08a27fe0, 08a280e9] [08a285d5, 08a28654]]
 * Ghidra: FUN_08a23f80
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08a23f80(long param_1,long param_2,undefined8 param_3)

{
  ulong *puVar1;
  byte *****pppppbVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 uVar7;
  byte *******pppppppbVar8;
  code *pcVar9;
  bool bVar10;
  ulong *puVar11;
  byte ******ppppppbVar12;
  byte *******pppppppbVar13;
  byte *******pppppppbVar14;
  byte *******pppppppbVar15;
  byte *******pppppppbVar16;
  char cVar17;
  undefined1 uVar18;
  byte bVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  undefined4 *puVar27;
  byte *******pppppppbVar28;
  byte ******ppppppbVar29;
  long *plVar30;
  long lVar31;
  long *plVar32;
  ulong uVar33;
  long extraout_RDX;
  byte *******pppppppbVar34;
  byte *******pppppppbVar35;
  uint uVar36;
  long lVar37;
  long lVar38;
  undefined4 uVar39;
  ulong *puVar40;
  ulong uVar41;
  long lVar42;
  float fVar43;
  byte *******pppppppbStack_15b8;
  byte *******pppppppbStack_15b0;
  byte ******ppppppbStack_15a8;
  byte ******ppppppbStack_15a0;
  undefined8 uStack_1598;
  ulong uStack_1590;
  byte *****pppppbStack_1588;
  undefined2 uStack_1580;
  undefined4 uStack_1578;
  undefined4 uStack_1574;
  long lStack_1570;
  long lStack_1568;
  undefined4 uStack_1560;
  byte *******pppppppbStack_1558;
  byte *******pppppppbStack_1550;
  byte *******pppppppbStack_1548;
  byte *******pppppppbStack_1538;
  byte *******pppppppbStack_1530;
  byte ******ppppppbStack_1528;
  byte *****pppppbStack_1518;
  undefined8 uStack_1510;
  undefined8 uStack_1508;
  long lStack_1500;
  long lStack_14f8;
  undefined4 uStack_14f0;
  ulong *puStack_14e8;
  ulong *puStack_14e0;
  ulong *puStack_14d8;
  undefined4 uStack_14d0;
  long *plStack_14c8;
  long *plStack_14c0;
  byte *******pppppppbStack_14b8;
  byte *******pppppppbStack_14b0;
  byte ******ppppppbStack_14a8;
  byte ******ppppppbStack_14a0;
  undefined8 uStack_1498;
  undefined4 uStack_1490;
  undefined8 uStack_148c;
  undefined4 uStack_1484;
  undefined4 uStack_1480;
  undefined4 uStack_147c;
  undefined8 uStack_1478;
  undefined4 uStack_1470;
  undefined4 uStack_146c;
  undefined *puStack_1468;
  undefined8 uStack_1460;
  ulong uStack_1458;
  undefined8 uStack_1450;
  undefined8 uStack_1448;
  undefined4 uStack_1440;
  undefined4 uStack_143c;
  undefined4 uStack_1438;
  long lStack_1428;
  undefined *puStack_1420;
  undefined8 uStack_1418;
  undefined2 uStack_1410;
  undefined6 uStack_140e;
  undefined8 uStack_1408;
  undefined8 uStack_1400;
  undefined4 uStack_13f8;
  undefined1 uStack_13f4;
  undefined4 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  undefined8 uStack_13c8;
  undefined *puStack_13c0;
  undefined8 uStack_13b8;
  undefined2 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined4 uStack_1398;
  undefined4 uStack_1394;
  undefined1 uStack_1390;
  undefined4 uStack_138c;
  byte *******pppppppbStack_1388;
  byte *******pppppppbStack_1380;
  byte ******ppppppbStack_1378;
  undefined8 uStack_1370;
  undefined8 uStack_1368;
  undefined8 *puStack_1360;
  byte *******pppppppbStack_1358;
  byte *******pppppppbStack_1350;
  byte ******ppppppbStack_1348;
  byte *******pppppppbStack_1340;
  byte *******pppppppbStack_1338;
  byte *******pppppppbStack_1330;
  ulong uStack_1328;
  undefined4 uStack_1320;
  byte *******pppppppbStack_1318;
  byte *******pppppppbStack_1310;
  undefined8 uStack_1308;
  undefined4 uStack_1300;
  undefined4 uStack_12fc;
  undefined4 uStack_12f8;
  int iStack_12e0;
  byte ******ppppppbStack_c68;
  byte ******ppppppbStack_c60;
  byte ******ppppppbStack_c58;
  byte *******pppppppbStack_c50;
  undefined8 *puStack_c48;
  byte *******pppppppbStack_c40;
  byte *******pppppppbStack_c38;
  byte ******ppppppbStack_c30;
  byte ******ppppppbStack_c28;
  byte *******pppppppbStack_c20;
  byte *******pppppppbStack_c18;
  ulong uStack_c10;
  undefined4 uStack_c08;
  byte *******pppppppbStack_c00;
  byte *******pppppppbStack_bf8;
  undefined4 uStack_bf0;
  undefined4 uStack_bec;
  undefined4 uStack_be8;
  undefined4 uStack_be4;
  undefined1 uStack_be0;
  undefined2 uStack_bdf;
  char *pcStack_bd8;
  long *plStack_bd0;
  long *plStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined4 uStack_bb0;
  byte *******pppppppbStack_ba8;
  byte *******pppppppbStack_ba0;
  byte ******ppppppbStack_b98;
  byte ******ppppppbStack_b90;
  undefined4 uStack_b88;
  undefined4 uStack_b84;
  undefined8 *puStack_b80;
  undefined2 uStack_b68;
  undefined4 uStack_b60;
  byte bStack_650;
  undefined1 uStack_64f;
  undefined1 uStack_64e;
  undefined4 uStack_490;
  undefined1 auStack_488 [100];
  undefined4 uStack_424;
  undefined1 uStack_3f3;
  
  lVar31 = *(long *)(param_2 + 0x10);
  uVar4 = *(uint *)(param_2 + 0x18);
  plVar30 = (long *)(*(long *)(lVar31 + 0x38) +
                    (ulong)(((uint)(*(int *)(lVar31 + 0x40) - (int)*(long *)(lVar31 + 0x38)) >> 3) -
                            1 & 0xb845379) * 8);
  do {
    if (*plVar30 == -1) {
      return;
    }
    lVar37 = *plVar30 * 0x20;
    plVar30 = (long *)(*(long *)(lVar31 + 0x50) + lVar37);
  } while (*(int *)(*(long *)(lVar31 + 0x50) + 8 + lVar37) != 0xb845379);
  if (plVar30 == *(long **)(lVar31 + 0x58)) {
    return;
  }
  lVar31 = plVar30[2];
  if (lVar31 == 0) {
    return;
  }
  uVar33 = (ulong)((uVar4 & 0x3ffff) >> 0xb);
  if ((ulong)(*(long *)(lVar31 + 0x10) - *(long *)(lVar31 + 8) >> 3) <= uVar33) {
    return;
  }
  lVar37 = *(long *)(*(long *)(lVar31 + 8) + uVar33 * 8);
  if (lVar37 == 0) {
    return;
  }
  uVar36 = *(uint *)(lVar37 + (ulong)(uVar4 & 0x7ff) * 4);
  if (0x3fffe < (uVar4 & 0xfffc0000 ^ uVar36)) {
    return;
  }
  lVar31 = *(long *)(*(long *)(lVar31 + 0x50) + (ulong)((uVar36 & 0x3ff80) >> 4));
  if (lVar31 == 0) {
    return;
  }
  pcVar6 = *(char **)(param_1 + 0x88);
  plVar30 = *(long **)(param_1 + 0x90);
  if (plVar30 != (long *)0x0) {
    LOCK();
    plVar30[1] = plVar30[1] + 1;
    UNLOCK();
  }
  plStack_14c8 = *(long **)(param_1 + 0x98);
  pcStack_bd8 = pcVar6;
  plStack_bd0 = plVar30;
  plStack_bc8 = plStack_14c8;
  if ((pcVar6 == (char *)0x0) &&
     (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01207b8e),
     cVar17 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*pcVar6 == '\0') &&
     (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01207b8e),
     cVar17 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  pcStack_bd8 = (char *)0x0;
  plStack_bd0 = (long *)0x0;
  if (plVar30 != (long *)0x0) {
    LOCK();
    plVar32 = plVar30 + 1;
    lVar37 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar37 == 0) {
      (**(code **)(*plVar30 + 0x10))(plVar30);
      func_0x0412c2d0(plVar30);
    }
    plVar30 = plStack_bd0;
    plStack_bc8 = (long *)0x0;
    if (plStack_bd0 != (long *)0x0) {
      LOCK();
      plVar32 = plStack_bd0 + 1;
      lVar37 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar37 == 0) {
        (**(code **)(*plStack_bd0 + 0x10))(plStack_bd0);
        func_0x0412c2d0(plVar30);
      }
    }
  }
  lVar37 = func_0x0b3cd8b0(param_2);
  if ((*(long *)(param_1 + 0x88) == 0) &&
     (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
     cVar17 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((**(char **)(param_1 + 0x88) == '\0') &&
     (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
     cVar17 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar31 = lVar31 + (ulong)(uVar36 & 0x7f) * 0x1f8;
  uVar20 = (**(code **)(**(long **)(param_1 + 0x98) + 0x568))();
  lVar22 = *(long *)(param_2 + 0x10);
  uVar4 = *(uint *)(param_2 + 0x18);
  plVar30 = (long *)(*(long *)(lVar22 + 0x38) +
                    (ulong)((int)((ulong)(*(long *)(lVar22 + 0x40) - *(long *)(lVar22 + 0x38)) >> 3)
                            - 1U & 0xaf993816) * 8);
  do {
    if (*plVar30 == -1) {
      plVar32 = *(long **)(lVar22 + 0x58);
      plVar30 = plVar32;
      goto LAB_08a242c9;
    }
    lVar38 = *plVar30 * 0x20;
    plVar30 = (long *)(*(long *)(lVar22 + 0x50) + lVar38);
  } while (*(int *)(*(long *)(lVar22 + 0x50) + 8 + lVar38) != -0x5066c7ea);
  plVar32 = *(long **)(lVar22 + 0x58);
LAB_08a242c9:
  if ((plVar30 == plVar32) || (lVar22 = plVar30[2], lVar22 == 0)) {
LAB_08a280bc:
    func_0x04890760();
LAB_08a280c1:
    func_0x04890760();
LAB_08a280c6:
    func_0x04890760();
  }
  else {
    uVar33 = (ulong)((uVar4 & 0x3ffff) >> 0xb);
    if (((ulong)(*(long *)(lVar22 + 0x10) - *(long *)(lVar22 + 8) >> 3) <= uVar33) ||
       (((lVar38 = *(long *)(*(long *)(lVar22 + 8) + uVar33 * 8), lVar38 == 0 ||
         (uVar36 = *(uint *)(lVar38 + (ulong)(uVar4 & 0x7ff) * 4),
         0x3fffe < (uVar4 & 0xfffc0000 ^ uVar36))) ||
        (lVar22 = *(long *)(*(long *)(lVar22 + 0x50) + (ulong)(uVar36 >> 4 & 0x3ff8)), lVar22 == 0))
       )) goto LAB_08a280bc;
    func_0x0c943380(auStack_488,uVar20,*(undefined4 *)(lVar22 + (ulong)(uVar36 & 0x7f) * 4));
    if ((*(long *)(param_1 + 0x88) == 0) &&
       (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(param_1 + 0x88) == '\0') &&
       (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_3f3 = (**(code **)(**(long **)(param_1 + 0x98) + 0x108))();
    if ((*(long *)(param_1 + 0x88) == 0) &&
       (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(param_1 + 0x88) == '\0') &&
       (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    cVar17 = (**(code **)(**(long **)(param_1 + 0x98) + 0xad0))();
    if ((cVar17 != '\0') && (cVar17 = func_0x0bc62140(param_2), cVar17 == '\0')) {
      uStack_424 = 0;
    }
    uVar18 = (**(code **)(**(long **)(param_2 + 0xa00) + 0x10))();
    if ((*(long *)(param_1 + 0x88) == 0) &&
       (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(param_1 + 0x88) == '\0') &&
       (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar21 = (**(code **)(**(long **)(param_1 + 0x98) + 0x568))();
    lVar22 = lVar21 + 0x50;
    lVar38 = lVar22;
    if ((*(char *)(lVar21 + 0x77) == '\0') &&
       (((lVar42 = lVar21 + 0x70, *(char *)(lVar21 + 0x68) != '\0' ||
         (lVar38 = lVar42, (*(byte *)(lVar21 + 0x56) & 1) != 0)) &&
        (cVar17 = FUN_04fa7a10(lVar42,lVar22), lVar38 = lVar22, cVar17 != '\0')))) {
      lVar38 = lVar42;
    }
    lVar22 = 0xf72b850;
    if (((*(byte *)(lVar38 + 6) | *(byte *)(lVar38 + 0x18)) & 1) != 0) {
      lVar22 = lVar38;
    }
    uVar20 = func_0x0cc443d0(0xf6ff9e0,lVar22);
    if ((*(long *)(param_1 + 0x88) == 0) &&
       (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(param_1 + 0x88) == '\0') &&
       (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar22 = (**(code **)(**(long **)(param_1 + 0x98) + 0x58))();
    pppppppbStack_15b0 = (byte *******)0x0;
    ppppppbStack_15a8 = (byte ******)0x0;
    pppppppbStack_15b8 = (byte *******)&pppppppbStack_15b0;
    uStack_13c8 = uVar20;
    func_0x067c7640(&pppppppbStack_15b8,*(undefined8 *)(lVar22 + 0x30),lVar22 + 0x38);
    ppppppbVar29 = ppppppbStack_15a8;
    pppppppbVar28 = pppppppbStack_15b0;
    if (ppppppbStack_15a8 != (byte ******)0x0) {
      pppppppbStack_1388 = (byte *******)&pppppppbStack_1380;
      pppppppbStack_15b0 = (byte *******)0x0;
      ppppppbStack_15a8 = (byte ******)0x0;
      plStack_bd0 = (long *)0x100000002;
      plStack_bc8 = (long *)((ulong)plStack_bc8 & 0xffffffffffff0000);
      uStack_bc0 = 0;
      uStack_bb8 = 0;
      uStack_bb0 = 0;
      pcStack_bd8 = &UNK_0f11faf8;
      pppppppbStack_ba8 = pppppppbStack_15b8;
      pppppppbStack_ba0 = pppppppbVar28;
      ppppppbStack_b98 = ppppppbVar29;
      pppppppbVar28[2] = (byte ******)&pppppppbStack_ba0;
      pppppppbStack_1380 = (byte *******)0x0;
      ppppppbStack_1378 = (byte ******)0x0;
      ppppppbStack_b90 = (byte ******)CONCAT44(ppppppbStack_b90._4_4_,1);
      pppppppbStack_15b8 = (byte *******)&pppppppbStack_15b0;
      func_0x067c7d60(&pppppppbStack_1388,0);
      (**(code **)(**(long **)(param_1 + 0xd0) + 0x38))
                (*(long **)(param_1 + 0xd0),param_3,&pcStack_bd8,*(undefined1 *)(lVar31 + 0xb0));
      pcStack_bd8 = &UNK_0f11faf8;
      func_0x067c7d60(&pppppppbStack_ba8,pppppppbStack_ba0);
    }
    func_0x067c7d60(&pppppppbStack_15b8,pppppppbStack_15b0);
    if ((*(long *)(param_1 + 0x88) == 0) &&
       (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(param_1 + 0x88) == '\0') &&
       (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar22 = (**(code **)(**(long **)(param_1 + 0x98) + 0x2f0))();
    if (*(long *)(lVar22 + 0x1a8) != 0) {
      func_0x083ed0b0(&pppppppbStack_1388);
      plStack_bd0 = (long *)0x100000002;
      plStack_bc8 = (long *)((ulong)plStack_bc8 & 0xffffffffffff0000);
      uStack_bc0 = 0;
      uStack_bb8 = 0;
      uStack_bb0 = 0;
      pcStack_bd8 = &UNK_0f117948;
      pppppppbStack_ba8 = (byte *******)&UNK_0f47e0b0;
      pppppppbStack_ba0 = pppppppbStack_1380;
      ppppppbStack_b98 = ppppppbStack_1378;
      ppppppbStack_b90 = uStack_1370;
      pppppppbVar28 = &ppppppbStack_b98;
      if (uStack_1370 != (byte ******)0x0) {
        pppppppbStack_1380 = &ppppppbStack_1378;
        ppppppbStack_1378[2] = (byte *****)&ppppppbStack_b98;
        ppppppbStack_1378 = (byte ******)0x0;
        uStack_1370 = (byte ******)0x0;
        pppppppbVar28 = pppppppbStack_ba0;
      }
      pppppppbStack_ba0 = pppppppbVar28;
      uStack_b88 = 1;
      pppppppbStack_1388 = (byte *******)&UNK_0f47e0b0;
      func_0x0d6c9500(&pppppppbStack_1380,ppppppbStack_1378);
      (**(code **)(**(long **)(param_1 + 0xd0) + 0x38))
                (*(long **)(param_1 + 0xd0),param_3,&pcStack_bd8,*(undefined1 *)(lVar31 + 0xb0));
      pcStack_bd8 = &UNK_0f117948;
      pppppppbStack_ba8 = (byte *******)&UNK_0f47e0b0;
      func_0x0d6c9500(&pppppppbStack_ba0,ppppppbStack_b98);
    }
    if ((*(long *)(param_1 + 0x88) == 0) &&
       (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(param_1 + 0x88) == '\0') &&
       (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    (**(code **)(**(long **)(param_1 + 0x98) + 0x298))(&pppppppbStack_15b8);
    pppppppbVar28 = pppppppbStack_15b8;
    if (pppppppbStack_15b8 != (byte *******)0x0) {
      ppppppbVar29 = (byte ******)0x1194;
      if (pppppppbStack_15b8[2] < (byte ******)0x1194) {
        ppppppbVar29 = pppppppbStack_15b8[2];
      }
      pppppppbStack_1388 = (byte *******)0x0;
      pppppppbStack_1380 = (byte *******)0x0;
      ppppppbStack_1378 = (byte ******)0x0;
      func_0x07752190(&pppppppbStack_1388,pppppppbStack_15b8[3],pppppppbStack_15b8[4],
                      ((long)pppppppbStack_15b8[4] - (long)pppppppbStack_15b8[3] >> 4) *
                      -0xf0f0f0f0f0f0f0f);
      func_0x07748ca0(&uStack_1370,pppppppbVar28 + 6);
      ppppppbStack_1348 = (byte ******)CONCAT62(ppppppbStack_1348._2_6_,(short)ppppppbVar29);
      plStack_bd0 = (long *)0x100000002;
      plStack_bc8 = (long *)((ulong)plStack_bc8 & 0xffffffffffff0000);
      uStack_bc0 = 0;
      uStack_bb8 = 0;
      uStack_bb0 = 0;
      pcStack_bd8 = &UNK_0f0e3350;
      pppppppbStack_ba8 = (byte *******)0x0;
      pppppppbStack_ba0 = (byte *******)0x0;
      ppppppbStack_b98 = (byte ******)0x0;
      func_0x07752190(&pppppppbStack_ba8,pppppppbStack_1388,pppppppbStack_1380,
                      ((long)pppppppbStack_1380 - (long)pppppppbStack_1388 >> 4) *
                      -0xf0f0f0f0f0f0f0f);
      func_0x07748ca0(&ppppppbStack_b90,&uStack_1370);
      uStack_b60 = 5;
      uStack_b68 = ppppppbStack_1348._0_2_;
      ppppppbVar29 = uStack_1370;
      puVar23 = puStack_1360;
      while (puVar23 != (undefined8 *)0x0) {
        puVar26 = (undefined8 *)*puVar23;
        uStack_1370 = ppppppbVar29;
        if ((*(byte *)(puVar23 + 3) & 1) != 0) {
          func_0x0412a280(puVar23[5],puVar23[3] & 0xfffffffffffffffe);
        }
        func_0x0412a280(puVar23,0x40);
        ppppppbVar29 = uStack_1370;
        puVar23 = puVar26;
      }
      uStack_1370 = (byte ******)0x0;
      if (ppppppbVar29 != (byte ******)0x0) {
        func_0x0412a280(ppppppbVar29,(long)uStack_1368 << 3);
      }
      pppppppbStack_14b8 = (byte *******)&pppppppbStack_1388;
      func_0x077530e0(&pppppppbStack_14b8);
      (**(code **)(**(long **)(param_1 + 0xd0) + 0x38))
                (*(long **)(param_1 + 0xd0),param_3,&pcStack_bd8,*(undefined1 *)(lVar31 + 0xb0));
      pcStack_bd8 = &UNK_0f0e3350;
      ppppppbVar29 = ppppppbStack_b90;
      while (puStack_b80 != (undefined8 *)0x0) {
        puVar23 = (undefined8 *)*puStack_b80;
        ppppppbStack_b90 = ppppppbVar29;
        if ((*(byte *)(puStack_b80 + 3) & 1) != 0) {
          func_0x0412a280(puStack_b80[5],puStack_b80[3] & 0xfffffffffffffffe);
        }
        func_0x0412a280(puStack_b80,0x40);
        ppppppbVar29 = ppppppbStack_b90;
        puStack_b80 = puVar23;
      }
      ppppppbStack_b90 = (byte ******)0x0;
      if (ppppppbVar29 != (byte ******)0x0) {
        func_0x0412a280(ppppppbVar29,CONCAT44(uStack_b84,uStack_b88) << 3);
      }
      pppppppbStack_1388 = (byte *******)&pppppppbStack_ba8;
      func_0x077530e0(&pppppppbStack_1388);
    }
    pppppppbVar28 = pppppppbStack_15b0;
    if (pppppppbStack_15b0 != (byte *******)0x0) {
      LOCK();
      pppppppbVar8 = pppppppbStack_15b0 + 1;
      ppppppbVar29 = *pppppppbVar8;
      *pppppppbVar8 = (byte ******)((long)*pppppppbVar8 + -1);
      UNLOCK();
      if (ppppppbVar29 == (byte ******)0x0) {
        (*(code *)(*pppppppbStack_15b0)[2])(pppppppbStack_15b0);
        func_0x0412c2d0(pppppppbVar28);
      }
    }
    puVar23 = (undefined8 *)func_0x0b3cf240(param_2);
    lVar22 = *(long *)(param_2 + 0x10);
    uVar4 = *(uint *)(param_2 + 0x18);
    lVar38 = *(long *)(lVar22 + 0x38);
    uVar36 = (int)((ulong)(*(long *)(lVar22 + 0x40) - lVar38) >> 3) - 1;
    plVar30 = (long *)(lVar38 + (ulong)(uVar36 & 0xfc0dbbb5) * 8);
    lVar21 = *(long *)(lVar22 + 0x50);
    do {
      if (*plVar30 == -1) {
        plVar32 = *(long **)(lVar22 + 0x58);
        plVar30 = plVar32;
        goto LAB_08a24d0d;
      }
      lVar42 = *plVar30 * 0x20;
      plVar30 = (long *)(lVar21 + lVar42);
    } while (*(int *)(lVar21 + 8 + lVar42) != -0x3f2444b);
    plVar32 = *(long **)(lVar22 + 0x58);
LAB_08a24d0d:
    if ((plVar30 == plVar32) || (lVar22 = plVar30[2], lVar22 == 0)) goto LAB_08a280c1;
    uVar33 = (ulong)((uVar4 & 0x3ffff) >> 0xb);
    if (((ulong)(*(long *)(lVar22 + 0x10) - *(long *)(lVar22 + 8) >> 3) <= uVar33) ||
       (lVar42 = *(long *)(*(long *)(lVar22 + 8) + uVar33 * 8), lVar42 == 0)) goto LAB_08a280c1;
    uVar5 = *(uint *)(lVar42 + (ulong)(uVar4 & 0x7ff) * 4);
    if ((0x3fffe < (uVar5 ^ uVar4 & 0xfffc0000)) ||
       (lVar22 = *(long *)(*(long *)(lVar22 + 0x50) + (ulong)(uVar5 >> 4 & 0x3ff8)), lVar22 == 0))
    goto LAB_08a280c1;
    uVar20 = *(undefined8 *)(lVar22 + (ulong)(uVar5 & 0x7f) * 8);
    plVar30 = (long *)(lVar38 + (ulong)(uVar36 & 0x88d3eddf) * 8);
    do {
      lVar22 = *plVar30;
      plVar30 = plVar32;
      if (lVar22 == -1) break;
      lVar22 = lVar22 * 0x20;
      plVar30 = (long *)(lVar21 + lVar22);
    } while (*(int *)(lVar21 + 8 + lVar22) != -0x772c1221);
    uVar39 = 0xffffffff;
    if (((((plVar30 != plVar32) && (lVar22 = plVar30[2], lVar22 != 0)) &&
         (uVar33 < (ulong)(*(long *)(lVar22 + 0x10) - *(long *)(lVar22 + 8) >> 3))) &&
        ((lVar38 = *(long *)(*(long *)(lVar22 + 8) + uVar33 * 8), lVar38 != 0 &&
         (uVar36 = *(uint *)(lVar38 + (ulong)(uVar4 & 0x7ff) * 4),
         (uVar4 & 0xfffc0000 ^ uVar36) < 0x3ffff)))) &&
       (lVar22 = *(long *)(*(long *)(lVar22 + 0x50) + (ulong)(uVar36 >> 4 & 0x3ff8)), lVar22 != 0))
    {
      uVar39 = *(undefined4 *)(lVar22 + (ulong)(uVar36 & 0x7f) * 4);
    }
    uVar24 = *(undefined8 *)(param_2 + 0x208);
    uStack_13d0 = *(undefined8 *)(param_2 + 0x218);
    if ((*(long *)(param_1 + 0x88) == 0) &&
       (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(param_1 + 0x88) == '\0') &&
       (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    (**(code **)(**(long **)(param_1 + 0x98) + 0x8b0))(&pppppbStack_1518);
    if ((*(long *)(param_1 + 0x88) == 0) &&
       (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(param_1 + 0x88) == '\0') &&
       (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar22 = (**(code **)(**(long **)(param_1 + 0x98) + 0x568))();
    if ((*(long *)(param_1 + 0x88) == 0) &&
       (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(param_1 + 0x88) == '\0') &&
       (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lStack_1428 = (**(code **)(**(long **)(param_1 + 0x98) + 0x568))();
    uStack_13d8 = uVar24;
    func_0x08a3d7f0(&pppppppbStack_1388,*(undefined8 *)(param_1 + 0xb8));
    if (iStack_12e0 == 0) {
      func_0x08b43230(&puStack_1468,&uStack_1370);
    }
    else {
      if (iStack_12e0 == 3) {
        if (((ulong)ppppppbStack_1378 & 0xffffffff) == 0xffffffff) goto LAB_08a280d0;
        pppppppbStack_15b8 = (byte *******)&pppppppbStack_14b8;
        cVar17 = (**(code **)(&UNK_0f478180 + ((ulong)ppppppbStack_1378 & 0xffffffff) * 8))
                           (&pppppppbStack_15b8,&pppppppbStack_1388);
        if (cVar17 != '\0') {
          if (((ulong)ppppppbStack_1378 & 0xffffffff) == 0xffffffff) goto LAB_08a280d0;
          pppppppbStack_15b8 = (byte *******)&pppppppbStack_14b8;
          (**(code **)(&UNK_0f478150 + ((ulong)ppppppbStack_1378 & 0xffffffff) * 8))
                    (&puStack_1468,&pppppppbStack_15b8,&pppppppbStack_1388);
          goto LAB_08a25105;
        }
      }
      puStack_1468 = (undefined *)0x0;
      uStack_1460 = 0;
      uStack_1458 = 0;
    }
LAB_08a25105:
    if ((*(long *)(param_1 + 0x88) == 0) &&
       (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(param_1 + 0x88) == '\0') &&
       (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uVar24 = (**(code **)(**(long **)(param_1 + 0x98) + 0xe0))();
    if ((*(long *)(param_1 + 0x88) == 0) &&
       (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(param_1 + 0x88) == '\0') &&
       (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uVar25 = (**(code **)(**(long **)(param_1 + 0x98) + 0xe8))();
    func_0x0bbdebc0(&pppppppbStack_14b8,uVar25,lVar37 + 0x60);
    if ((*(long *)(param_1 + 0x88) == 0) &&
       (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(param_1 + 0x88) == '\0') &&
       (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uVar25 = (**(code **)(**(long **)(param_1 + 0x98) + 0x988))();
    uStack_13e0 = uVar24;
    func_0x0ee382a0(&puStack_1420,&UNK_0f0863e8);
    if ((*(long *)(param_1 + 0x88) == 0) &&
       (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(param_1 + 0x88) == '\0') &&
       (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar37 = (**(code **)(**(long **)(param_1 + 0x98) + 0x568))();
    if ((*(long *)(param_1 + 0x88) == 0) &&
       (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(param_1 + 0x88) == '\0') &&
       (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puVar26 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x98) + 0x280))();
    lStack_1428 = lStack_1428 + 8;
    pppppppbVar28 = (byte *******)(ulong)*(uint *)(param_2 + 0xab8);
    uVar24 = *puVar26;
    uVar7 = *puVar23;
    uVar3 = *(undefined1 *)(param_1 + 0x3c0);
    pppppppbStack_15b8 = (byte *******)&UNK_0f47e0b0;
    pppppppbStack_15b0 = pppppppbStack_14b0;
    ppppppbStack_15a8 = ppppppbStack_14a8;
    ppppppbStack_15a0 = ppppppbStack_14a0;
    pppppppbVar8 = &ppppppbStack_15a8;
    if (ppppppbStack_14a0 != (byte ******)0x0) {
      ppppppbStack_14a8[2] = (byte *****)&ppppppbStack_15a8;
      ppppppbStack_14a8 = (byte ******)0x0;
      ppppppbStack_14a0 = (byte ******)0x0;
      pppppppbVar8 = pppppppbStack_15b0;
      pppppppbStack_14b0 = &ppppppbStack_14a8;
    }
    pppppppbStack_15b0 = pppppppbVar8;
    uStack_13e8 = uVar25;
    func_0x07eeca00(&pppppppbStack_1388,auStack_488,uVar7,uVar20,uVar39,uVar18,uStack_13d8,
                    uStack_13d0,&pppppbStack_1518,lVar22 + 0x278,lStack_1428,&puStack_1468,
                    uStack_13e0,uVar3,&pppppppbStack_15b8,uVar25,&puStack_1420,lVar37 + 0x20,
                    param_1 + 0x478,param_1 + 0x5b8,uVar24,pppppppbVar28,uStack_13c8);
    plStack_bd0 = (long *)0x100000002;
    plStack_bc8 = (long *)((ulong)plStack_bc8 & 0xffffffffffff0000);
    uStack_bc0 = 0;
    uStack_bb8 = 0;
    uStack_bb0 = 0;
    pcStack_bd8 = &UNK_0f102c20;
    func_0x07ee4f00(&pppppppbStack_ba8,&pppppppbStack_1388);
    uStack_490 = 5;
    func_0x07ee4cc0(&pppppppbStack_1388);
    pppppppbStack_15b8 = (byte *******)&UNK_0f47e0b0;
    func_0x0d6c9500(&pppppppbStack_15b0,ppppppbStack_15a8);
    if (((ulong)puStack_1420 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_140e,uStack_1410),(ulong)puStack_1420 & 0xfffffffffffffffe);
    }
    pppppppbStack_14b8 = (byte *******)&UNK_0f47e0b0;
    func_0x0d6c9500(&pppppppbStack_14b0,ppppppbStack_14a8);
    if (((ulong)puStack_1468 & 1) == 0) {
      if (((ulong)pppppbStack_1518 & 1) != 0) goto LAB_08a2566e;
LAB_08a2563f:
      lVar37 = *(long *)(param_1 + 0x88);
    }
    else {
      func_0x0412a280(uStack_1458,(ulong)puStack_1468 & 0xfffffffffffffffe);
      if (((ulong)pppppbStack_1518 & 1) == 0) goto LAB_08a2563f;
LAB_08a2566e:
      func_0x0412a280(uStack_1508,(ulong)pppppbStack_1518 & 0xfffffffffffffffe);
      lVar37 = *(long *)(param_1 + 0x88);
    }
    if ((lVar37 == 0) &&
       (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(param_1 + 0x88) == '\0') &&
       (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    bVar19 = (**(code **)(**(long **)(param_1 + 0x98) + 0xc38))();
    bVar19 = bVar19 & *(byte *)(param_2 + 0xcd8);
    bStack_650 = bVar19;
    if ((*(long *)(param_1 + 0x88) == 0) &&
       (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(param_1 + 0x88) == '\0') &&
       (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_64f = (**(code **)(**(long **)(param_1 + 0x98) + 0xc40))();
    uStack_64e = *(undefined1 *)(param_1 + 0x168);
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x38))
              (*(long **)(param_1 + 0xd0),param_3,&pcStack_bd8,*(undefined1 *)(lVar31 + 0xb0));
    if ((*(long *)(param_1 + 0x88) == 0) &&
       (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(param_1 + 0x88) == '\0') &&
       (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
       cVar17 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar37 = (**(code **)(**(long **)(param_1 + 0x98) + 0xe8))();
    plVar30 = *(long **)(lVar37 + 0x10);
    if (plVar30 != (long *)0x0) {
      pppppppbVar28 = (byte *******)&uStack_1370;
      do {
        ppppppbStack_15a8 = (byte ******)0x0;
        ppppppbStack_15a0 = (byte ******)0x0;
        pppppppbStack_15b8 = (byte *******)0x0;
        pppppppbStack_15b0 = (byte *******)0x0;
        uStack_1598 = 0;
        if (&pppppppbStack_15b8 != (byte ********)(plVar30 + 2)) {
          if ((*(byte *)(plVar30 + 3) & 1) == 0) {
            ppppppbStack_15a0 = (byte ******)plVar30[5];
            pppppppbStack_15b0 = (byte *******)plVar30[3];
            ppppppbStack_15a8 = (byte ******)plVar30[4];
          }
          else {
            func_0x04885070(&pppppppbStack_15b0,plVar30[5],plVar30[4]);
          }
        }
        pppppppbStack_15b8 = (byte *******)plVar30[2];
        uStack_1590 = plVar30[7];
        pppppbStack_1588 = (byte *****)plVar30[8];
        if (pppppbStack_1588 != (byte *****)0x0) {
          LOCK();
          pppppbStack_1588[1] = (byte ****)((long)pppppbStack_1588[1] + 1);
          UNLOCK();
        }
        for (lVar22 = *(long *)(uStack_1590 + 0x10); pppppbVar2 = pppppbStack_1588,
            lVar22 != *(long *)(uStack_1590 + 0x18); lVar22 = lVar22 + 0x48) {
          if (*(char *)(lVar22 + 0x40) == '\x01') {
            func_0x0bbdebc0(&pppppppbStack_14b8,lVar37,&pppppppbStack_15b8);
            pppppppbStack_1380 = (byte *******)0x100000002;
            ppppppbStack_1378 = (byte ******)((ulong)ppppppbStack_1378 & 0xffffffffffff0000);
            uStack_1370 = (byte ******)0x0;
            uStack_1368 = (byte *******)0x0;
            puStack_1360 = (undefined8 *)((ulong)puStack_1360 & 0xffffffff00000000);
            pppppppbStack_1388 = (byte *******)&UNK_0f102b80;
            pppppppbStack_1358 = (byte *******)&UNK_0f47e0b0;
            pppppppbStack_1350 = pppppppbStack_14b0;
            ppppppbStack_1348 = ppppppbStack_14a8;
            pppppppbStack_1340 = (byte *******)ppppppbStack_14a0;
            if (ppppppbStack_14a0 == (byte ******)0x0) {
              pppppppbStack_1350 = &ppppppbStack_1348;
            }
            else {
              ppppppbStack_14a8[2] = (byte *****)&ppppppbStack_1348;
              pppppppbStack_14b0 = &ppppppbStack_14a8;
              ppppppbStack_14a8 = (byte ******)0x0;
              ppppppbStack_14a0 = (byte ******)0x0;
            }
            pppppppbStack_1338 = (byte *******)CONCAT44(pppppppbStack_1338._4_4_,1);
            pppppppbStack_14b8 = (byte *******)&UNK_0f47e0b0;
            func_0x0d6c9500(&pppppppbStack_14b0,ppppppbStack_14a8);
            (**(code **)(**(long **)(param_1 + 0xd0) + 0x38))
                      (*(long **)(param_1 + 0xd0),param_3,&pppppppbStack_1388,
                       *(undefined1 *)(lVar31 + 0xb0));
            pppppppbStack_1388 = (byte *******)&UNK_0f102b80;
            pppppppbStack_1358 = (byte *******)&UNK_0f47e0b0;
            func_0x0d6c9500(&pppppppbStack_1350,ppppppbStack_1348);
            pppppbVar2 = pppppbStack_1588;
            break;
          }
        }
        pppppbStack_1588 = pppppbVar2;
        if (pppppbVar2 != (byte *****)0x0) {
          LOCK();
          plVar32 = (long *)((long)pppppbVar2 + 8);
          lVar22 = *plVar32;
          *plVar32 = *plVar32 + -1;
          UNLOCK();
          if (lVar22 == 0) {
            (**(code **)((long)*pppppbVar2 + 0x10))(pppppbVar2);
            func_0x0412c2d0(pppppbVar2);
          }
        }
        if (((ulong)pppppppbStack_15b0 & 1) != 0) {
          func_0x0412a280(ppppppbStack_15a0,(ulong)pppppppbStack_15b0 & 0xfffffffffffffffe);
        }
        plVar30 = (long *)*plVar30;
      } while (plVar30 != (long *)0x0);
    }
    if (*(char *)(lVar31 + 0xb0) == '\0') {
      if ((*(long *)(param_1 + 0x88) == 0) &&
         (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
         cVar17 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((**(char **)(param_1 + 0x88) == '\0') &&
         (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
         cVar17 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      (**(code **)(**(long **)(param_1 + 0x98) + 0xc48))(&pppppppbStack_15b8);
      func_0x08a39470(&pppppppbStack_1388,pppppppbStack_15b8,pppppppbStack_15b0);
      if (pppppppbStack_15b0 != (byte *******)0x0) {
        func_0x0412c2d0();
      }
      (**(code **)(**(long **)(param_1 + 0xd0) + 0x38))
                (*(long **)(param_1 + 0xd0),param_3,&pppppppbStack_1388,
                 *(undefined1 *)(lVar31 + 0xb0));
      pppppppbVar8 = pppppppbStack_1358;
      pppppppbStack_1388 = (byte *******)&UNK_0f120458;
      if (pppppppbStack_1358 != (byte *******)0x0) {
        if (pppppppbStack_1358 != pppppppbStack_1350) {
          pppppppbVar35 = pppppppbStack_1350 + -3;
          do {
            pppppppbVar35[-1] = (byte ******)&UNK_0f47e0b0;
            func_0x0d6c9500(pppppppbVar35,pppppppbVar35[1]);
            if (((ulong)pppppppbVar35[-6] & 1) != 0) {
              func_0x0412a280(pppppppbVar35[-4],(ulong)pppppppbVar35[-6] & 0xfffffffffffffffe);
            }
            pppppppbVar34 = pppppppbVar35 + -7;
            pppppppbVar35 = pppppppbVar35 + -10;
          } while (pppppppbVar34 != pppppppbVar8);
        }
        pppppppbStack_1350 = pppppppbVar8;
        func_0x0412a280(pppppppbStack_1358,(long)ppppppbStack_1348 - (long)pppppppbStack_1358);
      }
    }
    uStack_147c = *(undefined4 *)(param_2 + 0xa40);
    uStack_1470 = _DAT_01de6244;
    uStack_1478 = _DAT_01de623c;
    pppppppbStack_14b0 = (byte *******)0x100000002;
    ppppppbStack_14a8 = (byte ******)((ulong)ppppppbStack_14a8 & 0xffffffffffff0000);
    ppppppbStack_14a0 = (byte ******)0x0;
    uStack_1498 = 0;
    uStack_1490 = 0;
    pppppppbStack_14b8 = (byte *******)&UNK_0f0fbc48;
    uStack_148c = *(undefined8 *)(param_2 + 0xa34);
    uStack_1484 = *(undefined4 *)(param_2 + 0xa3c);
    uStack_1480 = 0;
    uStack_146c = 1;
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x38))
              (*(long **)(param_1 + 0xd0),param_3,&pppppppbStack_14b8,*(undefined1 *)(lVar31 + 0xb0)
              );
    lVar37 = plStack_14c8[0xff];
    pppppppbStack_1380 = (byte *******)0x0;
    lVar22 = *(long *)(lVar37 + 0x50);
    if (lVar22 != 0) {
      pppppppbStack_1388 = *(byte ********)(lVar22 + 8);
      pppppppbVar8 = *(byte ********)(lVar22 + 0x10);
      if (pppppppbVar8 != (byte *******)0x0) {
        LOCK();
        pppppppbVar8[1] = (byte ******)((long)pppppppbVar8[1] + 1);
        UNLOCK();
        pppppppbStack_1380 = pppppppbVar8;
      }
      if ((pppppppbStack_1388 == (byte *******)0x0) ||
         (ppppppbStack_1378 = *(byte *******)(lVar37 + 0x58), *(char *)pppppppbStack_1388 == '\0'))
      goto LAB_08a280cb;
      func_0x0caa9d10(ppppppbStack_1378,param_3,*(undefined1 *)(lVar31 + 0xb0),
                      *(undefined8 *)(param_1 + 0xd0));
      pppppppbStack_1388 = (byte *******)0x0;
      pppppppbStack_1380 = (byte *******)0x0;
      if (pppppppbVar8 != (byte *******)0x0) {
        LOCK();
        pppppppbVar35 = pppppppbVar8 + 1;
        ppppppbVar29 = *pppppppbVar35;
        *pppppppbVar35 = (byte ******)((long)*pppppppbVar35 + -1);
        UNLOCK();
        if (ppppppbVar29 == (byte ******)0x0) {
          (*(code *)(*pppppppbVar8)[2])(pppppppbVar8);
          func_0x0412c2d0(pppppppbVar8);
        }
        pppppppbVar8 = pppppppbStack_1380;
        ppppppbStack_1378 = (byte ******)0x0;
        if (pppppppbStack_1380 != (byte *******)0x0) {
          LOCK();
          pppppppbVar35 = pppppppbStack_1380 + 1;
          ppppppbVar29 = *pppppppbVar35;
          *pppppppbVar35 = (byte ******)((long)*pppppppbVar35 + -1);
          UNLOCK();
          if (ppppppbVar29 == (byte ******)0x0) {
            (*(code *)(*pppppppbStack_1380)[2])(pppppppbStack_1380);
            func_0x0412c2d0(pppppppbVar8);
          }
        }
      }
      if ((*(long *)(param_1 + 0x88) == 0) &&
         (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
         cVar17 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((**(char **)(param_1 + 0x88) == '\0') &&
         (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
         cVar17 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      uStack_143c = (**(code **)(**(long **)(param_1 + 0x98) + 0x128))();
      uStack_1460 = 0x100000002;
      uStack_1458 = uStack_1458 & 0xffffffffffff0000;
      uStack_1450 = 0;
      uStack_1448 = 0;
      uStack_1440 = 0;
      puStack_1468 = &UNK_0f103b60;
      uStack_1438 = 1;
      (**(code **)(**(long **)(param_1 + 0xd0) + 0x38))
                (*(long **)(param_1 + 0xd0),param_3,&puStack_1468,*(undefined1 *)(lVar31 + 0xb0));
      if ((*(long *)(param_1 + 0x88) == 0) &&
         (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
         cVar17 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((**(char **)(param_1 + 0x88) == '\0') &&
         (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
         cVar17 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      uStack_13f4 = (**(code **)(**(long **)(param_1 + 0x98) + 0x148))();
      uStack_1418 = 0x100000002;
      uStack_1410 = 0;
      uStack_1408 = 0;
      uStack_1400 = 0;
      uStack_13f8 = 0;
      puStack_1420 = &UNK_0f103a20;
      uStack_13f0 = 1;
      (**(code **)(**(long **)(param_1 + 0xd0) + 0x38))
                (*(long **)(param_1 + 0xd0),param_3,&puStack_1420,*(undefined1 *)(lVar31 + 0xb0));
      if ((*(long *)(param_1 + 0x88) == 0) &&
         (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
         cVar17 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((**(char **)(param_1 + 0x88) == '\0') &&
         (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
         cVar17 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      lVar37 = (**(code **)(**(long **)(param_1 + 0x98) + 0x568))();
      fVar43 = *(float *)(lVar37 + 0x334);
      if ((fVar43 != 0.0) || (NAN(fVar43))) {
        fVar43 = fVar43 * _DAT_01198ce4;
        pppppppbStack_1380 = (byte *******)0x100000002;
        ppppppbStack_1378 = (byte ******)((ulong)ppppppbStack_1378._2_6_ << 0x10);
        uStack_1370 = (byte ******)0x0;
        uStack_1368 = (byte *******)0x0;
        puStack_1360 = (undefined8 *)0xbba00000000;
        pppppppbStack_1388 = (byte *******)&UNK_0f117c68;
        pppppppbStack_1358 = (byte *******)0x0;
        pppppppbStack_1350 =
             (byte *******)((ulong)((int)fVar43 - (uint)(fVar43 < (float)(int)fVar43)) << 0x20);
        ppppppbStack_1348 = (byte ******)CONCAT44(ppppppbStack_1348._4_4_,1);
        (**(code **)(**(long **)(param_1 + 0xd0) + 0x38))
                  (*(long **)(param_1 + 0xd0),param_3,&pppppppbStack_1388,
                   *(undefined1 *)(lVar31 + 0xb0));
      }
      else if (0.0 < *(float *)(lVar37 + 0x32c)) {
        fVar43 = *(float *)(lVar37 + 0x32c) * _DAT_01198ce4;
        pppppppbStack_1380 = (byte *******)0x100000002;
        ppppppbStack_1378 = (byte ******)((ulong)ppppppbStack_1378._2_6_ << 0x10);
        uStack_1370 = (byte ******)0x0;
        uStack_1368 = (byte *******)0x0;
        puStack_1360 = (undefined8 *)0xbb900000000;
        pppppppbStack_1388 = (byte *******)&UNK_0f117c68;
        pppppppbStack_1358 = (byte *******)0x0;
        pppppppbStack_1350 =
             (byte *******)((ulong)((int)fVar43 - (uint)(fVar43 < (float)(int)fVar43)) << 0x20);
        ppppppbStack_1348 = (byte ******)CONCAT44(ppppppbStack_1348._4_4_,1);
        (**(code **)(**(long **)(param_1 + 0xd0) + 0x38))
                  (*(long **)(param_1 + 0xd0),param_3,&pppppppbStack_1388,
                   *(undefined1 *)(lVar31 + 0xb0));
      }
      if ((*(long *)(param_1 + 0x88) == 0) &&
         (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
         cVar17 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((**(char **)(param_1 + 0x88) == '\0') &&
         (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc),
         cVar17 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      puVar27 = (undefined4 *)(**(code **)(**(long **)(param_1 + 0x98) + 0xaa8))();
      uStack_1394 = *puVar27;
      uStack_1390 = *(undefined1 *)(puVar27 + 1);
      uStack_13b8 = 0x100000002;
      uStack_13b0 = 0;
      uStack_13a8 = 0;
      uStack_13a0 = 0;
      uStack_1398 = 0;
      puStack_13c0 = &UNK_0f0e2d10;
      uStack_138c = 1;
      (**(code **)(**(long **)(param_1 + 0xd0) + 0x48))(*(long **)(param_1 + 0xd0),&puStack_13c0);
      puVar23 = (undefined8 *)func_0x0b3cf240(param_2);
      lVar37 = *(long *)(param_2 + 0x10);
      uVar4 = *(uint *)(param_2 + 0x18);
      plVar30 = (long *)(*(long *)(lVar37 + 0x38) +
                        (ulong)((int)((ulong)(*(long *)(lVar37 + 0x40) - *(long *)(lVar37 + 0x38))
                                     >> 3) - 1U & 0x68b75d48) * 8);
      do {
        if (*plVar30 == -1) {
          plVar32 = *(long **)(lVar37 + 0x58);
          plVar30 = plVar32;
          goto LAB_08a26429;
        }
        lVar22 = *plVar30 * 0x20;
        plVar30 = (long *)(*(long *)(lVar37 + 0x50) + lVar22);
      } while (*(int *)(*(long *)(lVar37 + 0x50) + 8 + lVar22) != 0x68b75d48);
      plVar32 = *(long **)(lVar37 + 0x58);
LAB_08a26429:
      if ((plVar30 != plVar32) && (lVar37 = plVar30[2], lVar37 != 0)) {
        uVar33 = (ulong)((uVar4 & 0x3ffff) >> 0xb);
        if ((uVar33 < (ulong)(*(long *)(lVar37 + 0x10) - *(long *)(lVar37 + 8) >> 3)) &&
           (((lVar22 = *(long *)(*(long *)(lVar37 + 8) + uVar33 * 8), lVar22 != 0 &&
             (uVar36 = *(uint *)(lVar22 + (ulong)(uVar4 & 0x7ff) * 4),
             (uVar4 & 0xfffc0000 ^ uVar36) < 0x3ffff)) &&
            (lVar37 = *(long *)(*(long *)(lVar37 + 0x50) + (ulong)(uVar36 >> 4 & 0x3ff8)),
            lVar37 != 0)))) {
          lVar22 = (ulong)(uVar36 & 0x7f) * 0x5b8;
          pppppbStack_1518 = (byte *****)*puVar23;
          uStack_1510._0_2_ =
               CONCAT11(*(undefined1 *)(lVar37 + 1 + lVar22),*(undefined1 *)(lVar37 + lVar22));
          uStack_1508 = 0;
          lStack_1500 = 0;
          lStack_14f8 = 0;
          pppppppbStack_1388 = (byte *******)&UNK_0f1de198;
          pppppppbStack_1380 = (byte *******)&pppppbStack_1518;
          uStack_1368 = (byte *******)&pppppppbStack_1388;
          func_0x0bc2c590(lVar37 + lVar22,&pppppppbStack_1388);
          if ((byte ********)uStack_1368 == &pppppppbStack_1388) {
            lVar37 = 0x20;
LAB_08a26544:
            (**(code **)((long)*uStack_1368 + lVar37))();
          }
          else {
            lVar37 = 0x28;
            if (uStack_1368 != (byte *******)0x0) goto LAB_08a26544;
          }
          pppppppbStack_15b0 = (byte *******)0x100000002;
          ppppppbStack_15a8 = (byte ******)((ulong)ppppppbStack_15a8 & 0xffffffffffff0000);
          ppppppbStack_15a0 = (byte ******)0x0;
          uStack_1598 = 0;
          uStack_1590 = uStack_1590 & 0xffffffff00000000;
          pppppppbStack_15b8 = (byte *******)&UNK_0f0e2c70;
          pppppbStack_1588 = pppppbStack_1518;
          uStack_1580 = (undefined2)uStack_1510;
          uStack_1578 = (undefined4)uStack_1508;
          uStack_1574 = uStack_1508._4_4_;
          lStack_1570 = lStack_1500;
          lStack_1568 = lStack_14f8;
          uStack_1560 = 1;
          (**(code **)(**(long **)(param_1 + 0xd0) + 0x48))
                    (*(long **)(param_1 + 0xd0),&pppppppbStack_15b8);
          if ((*(long *)(param_1 + 0x88) == 0) &&
             (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
             cVar17 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((**(char **)(param_1 + 0x88) == '\0') &&
             (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc
                                      ), cVar17 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          uVar20 = (**(code **)(**(long **)(param_1 + 0x98) + 0xac0))();
          func_0x0d200f70(&plStack_14c0,uVar20);
          (**(code **)(**(long **)(param_1 + 0xd0) + 0x38))
                    (*(long **)(param_1 + 0xd0),param_3,plStack_14c0,*(undefined1 *)(lVar31 + 0xb0))
          ;
          uStack_1510 = 0x100000002;
          uStack_1508 = uStack_1508 & 0xffffffffffff0000;
          lStack_1500 = 0;
          lStack_14f8 = 0;
          uStack_14f0 = 0;
          pppppbStack_1518 = (byte *****)&UNK_0f111788;
          puStack_14e8 = (ulong *)0x0;
          puStack_14e0 = (ulong *)0x0;
          puStack_14d8 = (ulong *)0x0;
          uStack_14d0 = 5;
          if ((*(long *)(param_1 + 0x88) == 0) &&
             (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
             cVar17 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((**(char **)(param_1 + 0x88) == '\0') &&
             (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc
                                      ), cVar17 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          lVar37 = (**(code **)(**(long **)(param_1 + 0x98) + 0xa00))();
          plVar30 = *(long **)(lVar37 + 0x10);
          if (plVar30 != (long *)0x0) {
            pppppppbVar28 = &ppppppbStack_c68;
            do {
              func_0x0bc01740(pppppppbVar28,plVar30 + 4);
              pppppppbVar15 = pppppppbStack_bf8;
              pppppppbVar14 = pppppppbStack_c00;
              uVar33 = uStack_c10;
              pppppppbVar13 = pppppppbStack_c18;
              pppppppbVar16 = pppppppbStack_c20;
              ppppppbVar12 = ppppppbStack_c28;
              ppppppbVar29 = ppppppbStack_c30;
              pppppppbVar34 = pppppppbStack_c38;
              pppppppbVar35 = pppppppbStack_c40;
              puVar23 = puStack_c48;
              pppppppbVar8 = pppppppbStack_c50;
              pppppppbStack_1388 = (byte *******)((ulong)pppppppbStack_1388 & 0xffffffffffffff00);
              pppppppbStack_1380 = (byte *******)ppppppbStack_c60;
              ppppppbStack_1378 = ppppppbStack_c58;
              uStack_1370 = ppppppbStack_c68;
              pppppppbStack_1358 = pppppppbStack_c40;
              uStack_1368 = pppppppbStack_c50;
              puStack_1360 = puStack_c48;
              pppppppbStack_c50 = (byte *******)0x0;
              puStack_c48 = (undefined8 *)0x0;
              pppppppbStack_c40 = (byte *******)0x0;
              pppppppbStack_1340 = (byte *******)ppppppbStack_c28;
              pppppppbStack_1350 = pppppppbStack_c38;
              ppppppbStack_1348 = ppppppbStack_c30;
              pppppppbStack_c38 = (byte *******)0x0;
              ppppppbStack_c30 = (byte ******)0x0;
              ppppppbStack_c28 = (byte ******)0x0;
              uStack_1328 = uStack_c10;
              pppppppbStack_1338 = pppppppbStack_c20;
              pppppppbStack_1330 = pppppppbStack_c18;
              pppppppbStack_c20 = (byte *******)0x0;
              pppppppbStack_c18 = (byte *******)0x0;
              uStack_c10 = 0;
              uStack_1320 = uStack_c08;
              pppppppbStack_1318 = pppppppbStack_c00;
              pppppppbStack_1310 = pppppppbStack_bf8;
              pppppppbStack_c00 = (byte *******)0x0;
              pppppppbStack_bf8 = (byte *******)0x0;
              uStack_1308._0_3_ = CONCAT21(uStack_bdf,uStack_be0);
              uStack_1308 = CONCAT44(uStack_bf0,(undefined4)uStack_1308);
              uStack_1300 = uStack_bec;
              uStack_12fc = uStack_be8;
              uStack_12f8 = uStack_be4;
              if (puStack_14e0 < puStack_14d8) {
                puStack_14e0[2] = (ulong)ppppppbStack_c58;
                puStack_14e0[3] = (ulong)ppppppbStack_c68;
                *puStack_14e0 = (ulong)pppppppbStack_1388;
                puStack_14e0[1] = (ulong)ppppppbStack_c60;
                puStack_14e0[6] = (ulong)pppppppbVar35;
                puStack_14e0[4] = (ulong)pppppppbVar8;
                puStack_14e0[5] = (ulong)puVar23;
                uStack_1368 = (byte *******)0x0;
                puStack_1360 = (undefined8 *)0x0;
                pppppppbStack_1358 = (byte *******)0x0;
                puStack_14e0[9] = (ulong)ppppppbVar12;
                puStack_14e0[7] = (ulong)pppppppbVar34;
                puStack_14e0[8] = (ulong)ppppppbVar29;
                pppppppbStack_1350 = (byte *******)0x0;
                ppppppbStack_1348 = (byte ******)0x0;
                pppppppbStack_1340 = (byte *******)0x0;
                puStack_14e0[0xc] = uVar33;
                puStack_14e0[10] = (ulong)pppppppbVar16;
                puStack_14e0[0xb] = (ulong)pppppppbVar13;
                pppppppbStack_1338 = (byte *******)0x0;
                pppppppbStack_1330 = (byte *******)0x0;
                uStack_1328 = 0;
                *(undefined4 *)(puStack_14e0 + 0xd) = uStack_c08;
                puStack_14e0[0xe] = (ulong)pppppppbVar14;
                puStack_14e0[0xf] = (ulong)pppppppbVar15;
                pppppppbStack_1318 = (byte *******)0x0;
                pppppppbStack_1310 = (byte *******)0x0;
                *(undefined4 *)(puStack_14e0 + 0x12) = uStack_be4;
                *(undefined4 *)(puStack_14e0 + 0x10) = (undefined4)uStack_1308;
                *(undefined4 *)((long)puStack_14e0 + 0x84) = uStack_bf0;
                *(undefined4 *)(puStack_14e0 + 0x11) = uStack_bec;
                *(undefined4 *)((long)puStack_14e0 + 0x8c) = uStack_be8;
                *(undefined4 *)(puStack_14e0 + 0x13) = 1;
                puStack_14e0 = puStack_14e0 + 0x14;
              }
              else {
                puStack_14e0 = (ulong *)func_0x08a8f590(&puStack_14e8,&pppppppbStack_1388);
                pppppppbVar8 = pppppppbStack_1310;
                if (pppppppbStack_1310 != (byte *******)0x0) {
                  LOCK();
                  pppppppbVar35 = pppppppbStack_1310 + 1;
                  ppppppbVar29 = *pppppppbVar35;
                  *pppppppbVar35 = (byte ******)((long)*pppppppbVar35 + -1);
                  UNLOCK();
                  if (ppppppbVar29 == (byte ******)0x0) {
                    (*(code *)(*pppppppbStack_1310)[2])(pppppppbStack_1310);
                    func_0x0412c2d0(pppppppbVar8);
                  }
                }
                if (((ulong)pppppppbStack_1338 & 1) != 0) {
                  func_0x0412a280(uStack_1328,(ulong)pppppppbStack_1338 & 0xfffffffffffffffe);
                }
              }
              if (((ulong)pppppppbStack_1350 & 1) != 0) {
                func_0x0412a280(pppppppbStack_1340,(ulong)pppppppbStack_1350 & 0xfffffffffffffffe);
              }
              pppppppbVar8 = pppppppbStack_bf8;
              if (((ulong)uStack_1368 & 1) != 0) {
                func_0x0412a280(pppppppbStack_1358,(ulong)uStack_1368 & 0xfffffffffffffffe);
                pppppppbVar8 = pppppppbStack_bf8;
              }
              pppppppbStack_bf8 = pppppppbVar8;
              if (pppppppbVar8 != (byte *******)0x0) {
                LOCK();
                pppppppbVar35 = (byte *******)((long)pppppppbVar8 + 8);
                ppppppbVar29 = *pppppppbVar35;
                *pppppppbVar35 = (byte ******)((long)*pppppppbVar35 + -1);
                UNLOCK();
                if (ppppppbVar29 == (byte ******)0x0) {
                  (*(code *)(*pppppppbVar8)[2])(pppppppbVar8);
                  func_0x0412c2d0(pppppppbVar8);
                }
              }
              if (((ulong)pppppppbStack_c20 & 1) != 0) {
                func_0x0412a280(uStack_c10,(ulong)pppppppbStack_c20 & 0xfffffffffffffffe);
              }
              if (((ulong)pppppppbStack_c38 & 1) != 0) {
                func_0x0412a280(ppppppbStack_c28,(ulong)pppppppbStack_c38 & 0xfffffffffffffffe);
              }
              if (((ulong)pppppppbStack_c50 & 1) != 0) {
                func_0x0412a280(pppppppbStack_c40,(ulong)pppppppbStack_c50 & 0xfffffffffffffffe);
              }
              plVar30 = (long *)*plVar30;
            } while (plVar30 != (long *)0x0);
          }
          (**(code **)(**(long **)(param_1 + 0xd0) + 0x38))
                    (*(long **)(param_1 + 0xd0),param_3,&pppppbStack_1518,
                     *(undefined1 *)(lVar31 + 0xb0));
          if ((*(long *)(param_1 + 0x88) == 0) &&
             (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
             cVar17 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((**(char **)(param_1 + 0x88) == '\0') &&
             (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc
                                      ), cVar17 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          cVar17 = (**(code **)(**(long **)(param_1 + 0x98) + 0x900))();
          if (cVar17 == '\0') {
            cVar17 = (**(code **)(**(long **)(param_1 + 0x2f8) + 0x10))();
            if (cVar17 == '\0') {
              if ((*(long *)(param_1 + 0x88) == 0) &&
                 (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,
                                           &UNK_011a4bbc), cVar17 != '\0')) {
                _DAT_00000000 = 0xdeadc0de;
              }
              if ((**(char **)(param_1 + 0x88) == '\0') &&
                 (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                           &UNK_011a4bbc), cVar17 != '\0')) {
                _DAT_00000000 = 0xdeadc0de;
              }
              cVar17 = (**(code **)(**(long **)(param_1 + 0x98) + 0xb30))();
              if (cVar17 != '\0') {
                pppppppbStack_1388 = (byte *******)((ulong)pppppppbStack_1388 & 0xffffffffffffff00);
                (**(code **)(**(long **)(param_1 + 0x248) + 0x50))
                          (*(long **)(param_1 + 0x248),&pppppppbStack_1388,0);
              }
            }
          }
          else {
            if ((*(long *)(param_1 + 0x88) == 0) &&
               (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc
                                        ), cVar17 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            if ((**(char **)(param_1 + 0x88) == '\0') &&
               (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                         &UNK_011a4bbc), cVar17 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            cVar17 = (**(code **)(**(long **)(param_1 + 0x98) + 0xb30))();
            if (cVar17 != '\0') {
              pppppppbStack_1350 = (byte *******)0x100000000;
              pppppppbStack_1358 = (byte *******)0x0;
              pppppppbStack_1380 = (byte *******)0x100000002;
              ppppppbStack_1378 = (byte ******)((ulong)ppppppbStack_1378 & 0xffffffffffff0000);
              uStack_1370 = (byte ******)0x0;
              uStack_1368 = (byte *******)0x0;
              puStack_1360 = (undefined8 *)0xbbd00000000;
              pppppppbStack_1388 = (byte *******)&UNK_0f117c68;
              ppppppbStack_1348 = (byte ******)CONCAT44(ppppppbStack_1348._4_4_,1);
              (**(code **)(**(long **)(param_1 + 0xd0) + 0x38))
                        (*(long **)(param_1 + 0xd0),param_3,&pppppppbStack_1388,
                         *(undefined1 *)(lVar31 + 0xb0));
            }
          }
          if ((*(long *)(param_1 + 0x88) == 0) &&
             (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
             cVar17 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((**(char **)(param_1 + 0x88) == '\0') &&
             (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc
                                      ), cVar17 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          (**(code **)(**(long **)(param_1 + 0x98) + 0xb80))(*(long **)(param_1 + 0x98),param_2);
          uVar33 = (ulong)bVar19;
          lVar37 = *(long *)(param_1 + 0x450 + uVar33 * 8);
          if (lVar37 == 0) {
            pppppppbStack_1380 = (byte *******)0x100000002;
            ppppppbStack_1378 = (byte ******)((ulong)ppppppbStack_1378 & 0xffffffffffff0000);
            uStack_1370 = (byte ******)0x0;
            uStack_1368 = (byte *******)0x0;
            puStack_1360 = (undefined8 *)((ulong)puStack_1360 & 0xffffffff00000000);
            pppppppbStack_1388 = (byte *******)&UNK_0f12e580;
            pppppppbStack_1358 = (byte *******)&pppppppbStack_1350;
            pppppppbStack_1350 = (byte *******)0x0;
            ppppppbStack_1348 = (byte ******)0x0;
            pppppppbStack_1340 = (byte *******)0x0;
            pppppppbStack_1338 = (byte *******)0x0;
            pppppppbStack_1330 = (byte *******)0x0;
            uStack_1328 = 0;
            uStack_1320 = 0x3f800000;
            pppppppbStack_1318 = (byte *******)0x0;
            pppppppbStack_1310 = (byte *******)0x0;
            uStack_1308 = 0;
            uStack_1300 = 2;
            if ((*(long *)(param_1 + 0x88) == 0) &&
               (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc
                                        ), cVar17 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            if ((**(char **)(param_1 + 0x88) == '\0') &&
               (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                         &UNK_011a4bbc), cVar17 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            lVar37 = (**(code **)(**(long **)(param_1 + 0x98) + 800))();
            if ((*(long *)(param_1 + 0x88) == 0) &&
               (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc
                                        ), cVar17 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            if ((**(char **)(param_1 + 0x88) == '\0') &&
               (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                         &UNK_011a4bbc), cVar17 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            lVar22 = (**(code **)(**(long **)(param_1 + 0x98) + 0x2b0))();
            if ((*(long *)(param_1 + 0x88) == 0) &&
               (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc
                                        ), cVar17 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            if ((**(char **)(param_1 + 0x88) == '\0') &&
               (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                         &UNK_011a4bbc), cVar17 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            pppppppbVar28 = (byte *******)(**(code **)(**(long **)(param_1 + 0x98) + 0x2d0))();
            if ((*(long *)(lVar37 + 0x50) == 0) &&
               (cVar17 = func_0x0eeddcf0(&UNK_013e6278,&UNK_01435097,0x191c,&UNK_013642e4,
                                         &UNK_0120eed2), cVar17 != '\0')) {
              _DAT_00000000 = 0xdeadc0de;
            }
            func_0x0c8ba4e0(&pppppppbStack_1358,&pppppppbStack_1340,uVar33,lVar37 + 0x30,lVar22,
                            lVar22 + 0x18,pppppppbVar28);
            puVar23 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
            if (puVar23 == (undefined8 *)0x0) {
              func_0x0eec74c0(0x90,0);
            }
            pppppppbVar35 = pppppppbStack_1338;
            pppppppbVar8 = pppppppbStack_1340;
            *(undefined4 *)(puVar23 + 5) = puStack_1360._0_4_;
            *(undefined4 *)(puVar23 + 3) = (undefined4)uStack_1370;
            *(undefined4 *)((long)puVar23 + 0x1c) = uStack_1370._4_4_;
            *(undefined4 *)(puVar23 + 4) = (undefined4)uStack_1368;
            *(undefined4 *)((long)puVar23 + 0x24) = uStack_1368._4_4_;
            puVar23[1] = pppppppbStack_1380;
            puVar23[2] = ppppppbStack_1378;
            *puVar23 = &UNK_0f12e580;
            puVar23[6] = pppppppbStack_1358;
            puVar23[7] = pppppppbStack_1350;
            puVar23[8] = ppppppbStack_1348;
            if (ppppppbStack_1348 == (byte ******)0x0) {
              puVar23[6] = puVar23 + 7;
            }
            else {
              pppppppbStack_1350[2] = (byte ******)(puVar23 + 7);
              pppppppbStack_1358 = (byte *******)&pppppppbStack_1350;
              pppppppbStack_1350 = (byte *******)0x0;
              ppppppbStack_1348 = (byte ******)0x0;
            }
            lVar37 = uVar33 * 8 + 0x450;
            pppppppbStack_1340 = (byte *******)0x0;
            puVar23[9] = pppppppbVar8;
            puVar23[10] = pppppppbStack_1338;
            pppppppbStack_1338 = (byte *******)0x0;
            puVar23[0xb] = pppppppbStack_1330;
            puVar23[0xc] = uStack_1328;
            *(undefined4 *)(puVar23 + 0xd) = uStack_1320;
            if (uStack_1328 != 0) {
              ppppppbVar29 = pppppppbStack_1330[1];
              if (((ulong)pppppppbVar35 & (long)pppppppbVar35 - 1U) == 0) {
                ppppppbVar29 = (byte ******)((ulong)ppppppbVar29 & (long)pppppppbVar35 - 1U);
              }
              else if (pppppppbVar35 <= ppppppbVar29) {
                if (((ulong)ppppppbVar29 | (ulong)pppppppbVar35) >> 0x20 == 0) {
                  ppppppbVar29 = (byte ******)
                                 (((ulong)ppppppbVar29 & 0xffffffff) %
                                 ((ulong)pppppppbVar35 & 0xffffffff));
                }
                else {
                  ppppppbVar29 = (byte ******)((ulong)ppppppbVar29 % (ulong)pppppppbVar35);
                }
              }
              pppppppbVar8[(long)ppppppbVar29] = (byte ******)(puVar23 + 0xb);
              pppppppbStack_1330 = (byte *******)0x0;
              uStack_1328 = 0;
            }
            puVar23[0xe] = pppppppbStack_1318;
            puVar23[0xf] = pppppppbStack_1310;
            puVar23[0x10] = uStack_1308;
            pppppppbStack_1318 = (byte *******)0x0;
            pppppppbStack_1310 = (byte *******)0x0;
            uStack_1308 = 0;
            *(undefined4 *)(puVar23 + 0x11) = uStack_1300;
            plVar30 = *(long **)(param_1 + lVar37);
            *(undefined8 **)(param_1 + lVar37) = puVar23;
            if (plVar30 == (long *)0x0) {
              pppppppbStack_1388 = (byte *******)&UNK_0f12e580;
              pppppppbVar8 = pppppppbStack_1340;
              pppppppbVar35 = pppppppbStack_1330;
            }
            else {
              (**(code **)(*plVar30 + 8))();
              pppppppbVar34 = pppppppbStack_1318;
              pppppppbStack_1388 = (byte *******)&UNK_0f12e580;
              pppppppbVar8 = pppppppbStack_1340;
              pppppppbVar35 = pppppppbStack_1330;
              pppppppbVar16 = pppppppbStack_1310;
              if (pppppppbStack_1318 != (byte *******)0x0) {
                while (pppppppbVar28 = pppppppbVar16, pppppppbVar34 != pppppppbVar28) {
                  if (((ulong)pppppppbVar28[-3] & 1) != 0) {
                    func_0x0412a280(pppppppbVar28[-1],(ulong)pppppppbVar28[-3] & 0xfffffffffffffffe)
                    ;
                  }
                  pppppppbVar16 = pppppppbVar28 + -3;
                }
                pppppppbStack_1310 = pppppppbVar34;
                func_0x0412a280(pppppppbStack_1318,uStack_1308 - (long)pppppppbStack_1318);
                pppppppbVar8 = pppppppbStack_1340;
                pppppppbVar35 = pppppppbStack_1330;
              }
            }
            while (pppppppbVar35 != (byte *******)0x0) {
              pppppppbVar28 = (byte *******)*pppppppbVar35;
              pppppppbStack_1340 = pppppppbVar8;
              if (((ulong)pppppppbVar35[2] & 1) != 0) {
                func_0x0412a280(pppppppbVar35[4],(ulong)pppppppbVar35[2] & 0xfffffffffffffffe);
              }
              func_0x0412a280(pppppppbVar35,0x30);
              pppppppbVar8 = pppppppbStack_1340;
              pppppppbVar35 = pppppppbVar28;
            }
            pppppppbStack_1340 = (byte *******)0x0;
            if (pppppppbVar8 != (byte *******)0x0) {
              func_0x0412a280(pppppppbVar8,(long)pppppppbStack_1338 << 3);
            }
            func_0x088a1480(&pppppppbStack_1358,pppppppbStack_1350);
            lVar37 = *(long *)(param_1 + lVar37);
          }
          (**(code **)(**(long **)(param_1 + 0xd0) + 0x38))
                    (*(long **)(param_1 + 0xd0),param_3,lVar37,*(undefined1 *)(lVar31 + 0xb0));
          plVar30 = *(long **)(param_1 + 0xd0);
          if ((*(long *)(param_1 + 0x88) == 0) &&
             (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
             cVar17 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((**(char **)(param_1 + 0x88) == '\0') &&
             (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc
                                      ), cVar17 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          lVar37 = (**(code **)(**(long **)(param_1 + 0x98) + 0x918))();
          pppppppbStack_1558 = (byte *******)0x0;
          pppppppbStack_1550 = (byte *******)0x0;
          pppppppbStack_1548 = (byte *******)0x0;
          plVar32 = *(long **)(lVar37 + 0x38);
          if (plVar32 != (long *)0x0) {
            pppppppbVar28 = (byte *******)&pppppppbStack_1558;
            do {
              while (pppppppbVar8 = pppppppbStack_1550, pppppppbStack_1548 <= pppppppbStack_1550) {
                pppppppbStack_1550 = (byte *******)func_0x0b0b96a0(pppppppbVar28,plVar32 + 3);
                plVar32 = (long *)*plVar32;
                if (plVar32 == (long *)0x0) goto LAB_08a275b7;
              }
              *(int *)pppppppbStack_1550 = (int)plVar32[3];
              func_0x0b04c660(pppppppbStack_1550 + 1,plVar32 + 4);
              func_0x0b04c660(pppppppbVar8 + 0x12,plVar32 + 0x15);
              *(byte *)(pppppppbVar8 + 0x24) = *(byte *)(plVar32 + 0x27);
              pppppppbVar8[0x23] = (byte ******)plVar32[0x26];
              pppppppbStack_1550 = pppppppbVar8 + 0x25;
              plVar32 = (long *)*plVar32;
            } while (plVar32 != (long *)0x0);
          }
LAB_08a275b7:
          pppppppbStack_1538 = (byte *******)0x0;
          pppppppbStack_1530 = (byte *******)0x0;
          ppppppbStack_1528 = (byte ******)0x0;
          func_0x0893f840(&pppppppbStack_1538,pppppppbStack_1558,pppppppbStack_1550,
                          ((long)pppppppbStack_1550 - (long)pppppppbStack_1558 >> 3) *
                          0x14c1bacf914c1bad);
          pppppppbStack_1380 = (byte *******)0x100000002;
          ppppppbStack_1378 = (byte ******)((ulong)ppppppbStack_1378 & 0xffffffffffff0000);
          uStack_1370 = (byte ******)0x0;
          uStack_1368 = (byte *******)0x0;
          puStack_1360 = (undefined8 *)((ulong)puStack_1360 & 0xffffffff00000000);
          pppppppbStack_1388 = (byte *******)&UNK_0f12e3a0;
          pppppppbStack_1358 = pppppppbStack_1538;
          pppppppbStack_1350 = pppppppbStack_1530;
          ppppppbStack_1348 = ppppppbStack_1528;
          pppppppbStack_1340 = (byte *******)CONCAT44(pppppppbStack_1340._4_4_,1);
          (**(code **)(*plVar30 + 0x38))
                    (plVar30,param_3,&pppppppbStack_1388,*(undefined1 *)(lVar31 + 0xb0));
          pppppppbVar35 = pppppppbStack_1358;
          pppppppbStack_1388 = (byte *******)&UNK_0f12e3a0;
          pppppppbVar8 = pppppppbStack_1350;
          if (pppppppbStack_1358 != (byte *******)0x0) {
            while (pppppppbVar35 != pppppppbVar8) {
              func_0x04a3a0b0(pppppppbVar8 + -0x13);
              func_0x04a3a0b0(pppppppbVar8 + -0x24);
              pppppppbVar28 = pppppppbVar8 + -0x25;
              pppppppbVar8 = pppppppbVar28;
            }
            pppppppbStack_1350 = pppppppbVar35;
            func_0x0412a280(pppppppbStack_1358,(long)ppppppbStack_1348 - (long)pppppppbStack_1358);
          }
          pppppppbVar35 = pppppppbStack_1558;
          pppppppbVar8 = pppppppbStack_1550;
          if (pppppppbStack_1558 != (byte *******)0x0) {
            while (pppppppbVar35 != pppppppbVar8) {
              func_0x04a3a0b0(pppppppbVar8 + -0x13);
              func_0x04a3a0b0(pppppppbVar8 + -0x24);
              pppppppbVar28 = pppppppbVar8 + -0x25;
              pppppppbVar8 = pppppppbVar28;
            }
            pppppppbStack_1550 = pppppppbVar35;
            func_0x0412a280(pppppppbStack_1558,(long)pppppppbStack_1548 - (long)pppppppbStack_1558);
          }
          lVar37 = *(long *)(param_2 + 0x10);
          uVar4 = *(uint *)(param_2 + 0x18);
          plVar30 = (long *)(*(long *)(lVar37 + 0x38) +
                            (ulong)((int)((ulong)(*(long *)(lVar37 + 0x40) -
                                                 *(long *)(lVar37 + 0x38)) >> 3) - 1U & 0x81576d3b)
                            * 8);
          do {
            if (*plVar30 == -1) {
              plVar32 = *(long **)(lVar37 + 0x58);
              plVar30 = plVar32;
              goto LAB_08a277c8;
            }
            lVar22 = *plVar30 * 0x20;
            plVar30 = (long *)(*(long *)(lVar37 + 0x50) + lVar22);
          } while (*(int *)(*(long *)(lVar37 + 0x50) + 8 + lVar22) != -0x7ea892c5);
          plVar32 = *(long **)(lVar37 + 0x58);
LAB_08a277c8:
          if ((plVar30 != plVar32) && (lVar37 = plVar30[2], lVar37 != 0)) {
            uVar33 = (ulong)((uVar4 & 0x3ffff) >> 0xb);
            if ((uVar33 < (ulong)(*(long *)(lVar37 + 0x10) - *(long *)(lVar37 + 8) >> 3)) &&
               (((lVar22 = *(long *)(*(long *)(lVar37 + 8) + uVar33 * 8), lVar22 != 0 &&
                 (uVar36 = *(uint *)(lVar22 + (ulong)(uVar4 & 0x7ff) * 4),
                 (uVar4 & 0xfffc0000 ^ uVar36) < 0x3ffff)) &&
                (lVar37 = *(long *)(*(long *)(lVar37 + 0x50) + (ulong)(uVar36 >> 4 & 0x3ff8)),
                lVar37 != 0)))) {
              func_0x072ade00(&pppppppbStack_1538,lVar37 + (ulong)(uVar36 & 0x7f) * 0x18);
              pppppppbStack_1380 = (byte *******)0x100000002;
              ppppppbStack_1378 = (byte ******)((ulong)ppppppbStack_1378 & 0xffffffffffff0000);
              uStack_1370 = (byte ******)0x0;
              uStack_1368 = (byte *******)0x0;
              puStack_1360 = (undefined8 *)((ulong)puStack_1360 & 0xffffffff00000000);
              pppppppbStack_1388 = (byte *******)&UNK_0f111648;
              pppppppbStack_1358 = pppppppbStack_1538;
              pppppppbStack_1350 = pppppppbStack_1530;
              ppppppbStack_1348 = ppppppbStack_1528;
              pppppppbStack_1340 = (byte *******)CONCAT44(pppppppbStack_1340._4_4_,1);
              (**(code **)(**(long **)(param_1 + 0xd0) + 0x38))
                        (*(long **)(param_1 + 0xd0),param_3,&pppppppbStack_1388,
                         *(undefined1 *)(lVar31 + 0xb0));
              pppppppbVar8 = pppppppbStack_1358;
              pppppppbStack_1388 = (byte *******)&UNK_0f111648;
              pppppppbVar34 = pppppppbStack_1350;
              if (pppppppbStack_1358 != (byte *******)0x0) {
                while (pppppppbVar35 = pppppppbVar34, pppppppbVar8 != pppppppbVar35) {
                  if (((ulong)pppppppbVar35[-3] & 1) != 0) {
                    func_0x0412a280(pppppppbVar35[-1],(ulong)pppppppbVar35[-3] & 0xfffffffffffffffe)
                    ;
                  }
                  pppppppbVar34 = pppppppbVar35 + -3;
                }
                pppppppbStack_1350 = pppppppbVar8;
                func_0x0412a280(pppppppbStack_1358,
                                (long)ppppppbStack_1348 - (long)pppppppbStack_1358);
              }
            }
          }
          (**(code **)(*plStack_14c8 + 0x960))(&pppppppbStack_1538);
          pppppppbVar8 = pppppppbStack_1530;
          pppppppbStack_1388 = pppppppbStack_1538;
          pppppppbStack_1380 = pppppppbStack_1530;
          ppppppbStack_1378 = ppppppbStack_1528;
          if ((pppppppbStack_1538 != (byte *******)0x0) && (*(byte *)pppppppbStack_1538 == 1)) {
            func_0x0b6b6c40(ppppppbStack_1528,lVar31,param_3,*(undefined8 *)(param_1 + 0xd0));
          }
          pppppppbStack_1388 = (byte *******)0x0;
          pppppppbStack_1380 = (byte *******)0x0;
          if (pppppppbVar8 != (byte *******)0x0) {
            LOCK();
            pppppppbVar34 = pppppppbVar8 + 1;
            ppppppbVar29 = *pppppppbVar34;
            *pppppppbVar34 = (byte ******)((long)*pppppppbVar34 + -1);
            UNLOCK();
            if (ppppppbVar29 == (byte ******)0x0) {
              (*(code *)(*pppppppbVar8)[2])(pppppppbVar8);
              func_0x0412c2d0(pppppppbVar8);
            }
            pppppppbVar8 = pppppppbStack_1380;
            ppppppbStack_1378 = (byte ******)0x0;
            if (pppppppbStack_1380 != (byte *******)0x0) {
              LOCK();
              ppppppbVar29 = (byte ******)(pppppppbStack_1380 + 1);
              pppppbVar2 = *ppppppbVar29;
              *ppppppbVar29 = (byte *****)((long)*ppppppbVar29 + -1);
              UNLOCK();
              if (pppppbVar2 == (byte *****)0x0) {
                (*(code *)(*pppppppbStack_1380)[2])(pppppppbStack_1380);
                func_0x0412c2d0(pppppppbVar8);
              }
            }
          }
          if (bVar19 != 0) {
            func_0x08a39690(&pppppppbStack_1388,*(undefined8 *)(plStack_14c8[0x69] + 0x70),
                            *(undefined8 *)(plStack_14c8[0x69] + 0x78));
            (**(code **)(**(long **)(param_1 + 0xd0) + 0x38))
                      (*(long **)(param_1 + 0xd0),param_3,&pppppppbStack_1388,
                       *(undefined1 *)(lVar31 + 0xb0));
            pppppppbVar8 = pppppppbStack_1358;
            pppppppbStack_1388 = (byte *******)&UNK_0f11ff58;
            pppppppbVar34 = pppppppbStack_1350;
            if (pppppppbStack_1358 != (byte *******)0x0) {
              while (pppppppbVar35 = pppppppbVar34, pppppppbVar8 != pppppppbVar35) {
                if (((ulong)pppppppbVar35[-3] & 1) == 0) {
                  bVar19 = *(byte *)(pppppppbVar35 + -6);
                }
                else {
                  func_0x0412a280(pppppppbVar35[-1],(ulong)pppppppbVar35[-3] & 0xfffffffffffffffe);
                  bVar19 = *(byte *)(pppppppbVar35 + -6);
                }
                if ((bVar19 & 1) != 0) {
                  func_0x0412a280(pppppppbVar35[-4],(ulong)pppppppbVar35[-6] & 0xfffffffffffffffe);
                }
                pppppppbVar28 = pppppppbVar35 + -6;
                pppppppbVar34 = pppppppbVar28;
              }
              pppppppbStack_1350 = pppppppbVar8;
              func_0x0412a280(pppppppbStack_1358,(long)ppppppbStack_1348 - (long)pppppppbStack_1358)
              ;
            }
          }
          if ((*(long *)(param_1 + 0x88) == 0) &&
             (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
             cVar17 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((**(char **)(param_1 + 0x88) == '\0') &&
             (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc
                                      ), cVar17 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          plVar30 = (long *)(**(code **)(**(long **)(param_1 + 0x98) + 0xf8))();
          if ((*plVar30 != plVar30[1]) || (plVar30[3] != plVar30[4])) {
            func_0x08a397e0(&pppppppbStack_1388,plVar30);
            (**(code **)(**(long **)(param_1 + 0xd0) + 0x38))
                      (*(long **)(param_1 + 0xd0),param_3,&pppppppbStack_1388,
                       *(undefined1 *)(lVar31 + 0xb0));
            pppppppbVar8 = pppppppbStack_1340;
            pppppppbStack_1388 = (byte *******)&UNK_0f12eb20;
            pppppppbVar34 = pppppppbStack_1338;
            if (pppppppbStack_1340 != (byte *******)0x0) {
              while (pppppppbVar35 = pppppppbVar34, pppppppbVar8 != pppppppbVar35) {
                ppppppbVar29 = pppppppbVar35[-3];
                if (ppppppbVar29 != (byte ******)0x0) {
                  pppppppbVar35[-2] = ppppppbVar29;
                  func_0x0412a280(ppppppbVar29,(long)pppppppbVar35[-1] - (long)ppppppbVar29);
                }
                pppppppbVar28 = pppppppbVar35 + -6;
                pppppppbVar34 = pppppppbVar28;
                if (((ulong)*pppppppbVar28 & 1) != 0) {
                  func_0x0412a280(pppppppbVar35[-4],(ulong)pppppppbVar35[-6] & 0xfffffffffffffffe);
                }
              }
              pppppppbStack_1338 = pppppppbVar8;
              func_0x0412a280(pppppppbStack_1340,(long)pppppppbStack_1330 - (long)pppppppbStack_1340
                             );
            }
            pppppppbStack_1538 = (byte *******)&pppppppbStack_1358;
            func_0x07c938d0(&pppppppbStack_1538);
          }
          if ((*(long *)(param_1 + 0x88) == 0) &&
             (cVar17 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_011a4bbc),
             cVar17 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((**(char **)(param_1 + 0x88) == '\0') &&
             (cVar17 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_011a4bbc
                                      ), cVar17 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          (**(code **)(**(long **)(param_1 + 0x98) + 0x950))(&pppppppbStack_1388);
          bVar10 = false;
          if ((pppppppbStack_1380 == (byte *******)0x0) ||
             (((uint)ppppppbStack_1378 & 0x3ffff) == 0x3ffff)) goto LAB_08a27e39;
          plVar30 = (long *)func_0x0412c300();
          if (plVar30 == (long *)0x0) {
            bVar10 = false;
            goto LAB_08a27e39;
          }
          if (pppppppbStack_1388 == (byte *******)0x0) {
LAB_08a27e0d:
            bVar10 = false;
            pppppppbVar28 = pppppppbStack_1388;
          }
          else {
            pppppppbVar35 = (byte *******)((ulong)ppppppbStack_1378 & 0xffffffff);
            uVar33 = (ulong)(((uint)ppppppbStack_1378 & 0x3ffff) >> 0xb);
            if (((((ulong)((long)pppppppbStack_1388[0x1c] - (long)pppppppbStack_1388[0x1b] >> 3) <=
                   uVar33) ||
                 (pppppbVar2 = pppppppbStack_1388[0x1b][uVar33], pppppbVar2 == (byte *****)0x0)) ||
                (uVar4 = *(uint *)((long)pppppbVar2 + (ulong)((uint)ppppppbStack_1378 & 0x7ff) * 4),
                0x3fffe < ((uint)ppppppbStack_1378 & 0xfffc0000 ^ uVar4))) ||
               (pppppppbStack_1388[0x23] <= (byte ******)(ulong)(uVar4 & 0x3ffff)))
            goto LAB_08a27e0d;
            bVar10 = true;
            pppppppbVar28 = pppppppbStack_1388 + 5;
          }
          LOCK();
          plVar32 = plVar30 + 1;
          lVar31 = *plVar32;
          *plVar32 = *plVar32 + -1;
          UNLOCK();
          if (lVar31 == 0) {
            (**(code **)(*plVar30 + 0x10))(plVar30);
            func_0x0412c2d0(plVar30);
          }
LAB_08a27e39:
          if (pppppppbStack_1380 != (byte *******)0x0) {
            func_0x0412c2d0();
          }
          if (bVar10) {
            lVar31 = func_0x0741d930(pppppppbVar28,0xd73ab3e2);
            uVar36 = (uint)pppppppbVar35;
            uVar33 = (ulong)((uint)((ulong)pppppppbVar35 >> 0xb) & 0x7f);
            uVar41 = (ulong)(uVar36 & 0x7ff);
            uVar4 = *(uint *)(*(long *)(*(long *)(lVar31 + 8) + uVar33 * 8) + uVar41 * 4);
            lVar31 = *(long *)(*(long *)(lVar31 + 0x50) + (ulong)((uVar4 & 0x3ff80) >> 4));
            lVar37 = func_0x06e2d6e0(pppppppbVar28,0xb3a6d8ba);
            if (((uVar33 < (ulong)(*(long *)(lVar37 + 0x10) - *(long *)(lVar37 + 8) >> 3)) &&
                (lVar22 = *(long *)(*(long *)(lVar37 + 8) + uVar33 * 8), lVar22 != 0)) &&
               (uVar5 = *(uint *)(lVar22 + uVar41 * 4), (uVar36 & 0xfffc0000 ^ uVar5) < 0x3ffff)) {
              lVar37 = (ulong)((uVar5 & 0x7f) * 0x50) +
                       *(long *)(*(long *)(lVar37 + 0x50) + (ulong)((uVar5 & 0x3ff80) >> 4));
            }
            else {
              pppppppbStack_1388 = (byte *******)CONCAT44(pppppppbStack_1388._4_4_,uVar36);
              func_0x06e2f120(lVar37,&pppppppbStack_1388,0);
              lVar37 = (ulong)(((uint)(extraout_RDX - 1U) & 0x7f) * 0x50) +
                       *(long *)(*(long *)(lVar37 + 0x50) + (extraout_RDX - 1U >> 7) * 8);
            }
            func_0x072288f0((ulong)(uVar4 & 0x7f) * 0x98 + lVar31,*(undefined8 *)(param_1 + 0xd0),
                            lVar37,param_3);
            lVar31 = func_0x08a99c90(pppppppbVar28,0x2e0151a7);
            uVar4 = *(uint *)(*(long *)(*(long *)(lVar31 + 8) + uVar33 * 8) + uVar41 * 4);
            func_0x072323e0((ulong)((uVar4 & 0x7f) * 0x60) +
                            *(long *)(*(long *)(lVar31 + 0x50) + (ulong)((uVar4 & 0x3ff80) >> 4)),
                            *(undefined8 *)(param_1 + 0xd0),param_3);
          }
          puVar11 = puStack_14e8;
          pppppbStack_1518 = (byte *****)&UNK_0f111788;
          if (puStack_14e8 != (ulong *)0x0) {
            if (puStack_14e8 != puStack_14e0) {
              puVar40 = puStack_14e0;
              do {
                puVar1 = puVar40 + -0x14;
                if ((ulong)(uint)puVar40[-1] != 0xffffffff) {
                  (**(code **)(&UNK_0f13a1b8 + (ulong)(uint)puVar40[-1] * 8))
                            (&pppppppbStack_1388,puVar1);
                }
                *(undefined4 *)(puVar40 + -1) = 0xffffffff;
                puVar40 = puVar1;
              } while (puVar1 != puVar11);
            }
            puStack_14e0 = puVar11;
            func_0x0412a280(puStack_14e8,(long)puStack_14d8 - (long)puStack_14e8);
          }
          if (plStack_14c0 != (long *)0x0) {
            (**(code **)(*plStack_14c0 + 8))();
          }
          pppppppbStack_15b8 = (byte *******)&UNK_0f0e2c70;
          lVar31 = CONCAT44(uStack_1574,uStack_1578);
          if (lVar31 != 0) {
            lStack_1570 = lVar31;
            func_0x0412a280(lVar31,lStack_1568 - lVar31);
          }
          pcStack_bd8 = &UNK_0f102c20;
          func_0x07ee4cc0(&pppppppbStack_ba8);
          func_0x048dbd40(auStack_488);
          return;
        }
      }
      goto LAB_08a280c6;
    }
  }
LAB_08a280cb:
  func_0x04890760();
LAB_08a280d0:
  uVar20 = func_0x04931450();
  func_0x082f4270(&pppppppbStack_1388);
  func_0x082f4380(&pppppbStack_1518);
  if (plStack_14c0 != (long *)0x0) {
    (**(code **)(*plStack_14c0 + 8))(plStack_14c0);
  }
  pppppppbStack_15b8 = (byte *******)&UNK_0f0e2c70;
  lVar31 = CONCAT44(uStack_1574,uStack_1578);
  if (lVar31 != 0) {
    func_0x0412a280(lVar31,lStack_1568 - lVar31);
  }
  pcStack_bd8 = &UNK_0f102c20;
  func_0x07ee4cc0(&pppppppbStack_ba8);
  func_0x048dbd40(auStack_488);
  func_0x0eee2d70(uVar20);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


