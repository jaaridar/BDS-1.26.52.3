/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xee3eaf0 (ELF vaddr 0xed3eaf0)
 * Label: caller-of-callee
 * Body:  [[0ee3eaf0, 0ee3f0f2] [0ee3f100, 0ee3f3cd] [0ee3f3d0, 0ee3f40e] [0ee3f410, 0ee3f449] [0ee3f450, 0ee3f5a1] [0ee3f5b0, 0ee3ffc4] [0ee3ffd0, 0ee406b6]]
 * Ghidra: FUN_0ee3eaf0
 */


/* WARNING: Removing unreachable block (ram,0x0ee3f584) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0ee3eaf0(long *param_1,long *param_2,long *param_3,char param_4,long param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  char *pcVar14;
  long lVar15;
  undefined *puVar16;
  char *pcVar17;
  undefined *puVar18;
  int iVar19;
  char *pcVar20;
  undefined *puVar21;
  byte bVar22;
  undefined8 *puVar23;
  undefined1 auStack_16f8 [8];
  long *plStack_16f0;
  int iStack_16e4;
  long lStack_16e0;
  undefined8 uStack_16d8;
  undefined *puStack_16d0;
  long lStack_16c8;
  undefined4 uStack_16c0;
  long *plStack_16b8;
  long *plStack_16b0;
  long *plStack_16a8;
  long *plStack_16a0;
  undefined8 **ppuStack_1698;
  undefined *puStack_1690;
  undefined8 uStack_1688;
  undefined8 uStack_1680;
  byte bStack_1678;
  undefined7 uStack_1677;
  undefined8 uStack_1668;
  byte bStack_1658;
  char cStack_1650;
  undefined1 auStack_1648 [8];
  uint uStack_1640;
  undefined4 uStack_163c;
  undefined8 uStack_1638;
  undefined *puStack_1630;
  undefined *puStack_1628;
  long lStack_1620;
  long lStack_1618;
  long lStack_1610;
  long lStack_1608;
  byte bStack_1600;
  long lStack_15f8;
  long lStack_15f0;
  long lStack_15e8;
  char *pcStack_15e0;
  long *plStack_15d8;
  undefined8 uStack_15d0;
  long *plStack_15c8;
  long *plStack_15c0;
  long *plStack_15b0;
  undefined4 uStack_15a8;
  undefined4 uStack_15a4;
  undefined4 uStack_15a0;
  undefined4 uStack_159c;
  undefined8 uStack_1598;
  undefined8 uStack_1590;
  undefined8 uStack_1580;
  undefined8 **ppuStack_1578;
  undefined8 uStack_1570;
  long lStack_1568;
  undefined *puStack_1560;
  undefined8 **ppuStack_1558;
  undefined8 uStack_1550;
  undefined8 **ppuStack_1548;
  undefined8 uStack_1540;
  undefined8 **ppuStack_1538;
  undefined8 uStack_1530;
  undefined8 **ppuStack_1528;
  undefined8 uStack_1520;
  undefined8 *puStack_1518;
  undefined8 uStack_1510;
  undefined *puStack_1508;
  long **pplStack_1500;
  undefined8 ***pppuStack_14f8;
  undefined **ppuStack_14e8;
  byte bStack_14d0;
  undefined7 uStack_14cf;
  undefined8 uStack_14c0;
  undefined4 uStack_14b8;
  undefined4 uStack_14b4;
  undefined4 uStack_14b0;
  undefined4 uStack_14ac;
  undefined4 uStack_14a8;
  undefined4 uStack_14a4;
  undefined4 uStack_14a0;
  undefined4 uStack_149c;
  undefined4 uStack_1498;
  undefined4 uStack_1494;
  undefined4 uStack_1490;
  undefined4 uStack_148c;
  undefined4 uStack_1488;
  undefined4 uStack_1484;
  undefined4 uStack_1480;
  undefined4 uStack_147c;
  undefined4 uStack_1478;
  undefined4 uStack_1474;
  undefined4 uStack_1470;
  undefined4 uStack_146c;
  undefined4 uStack_1468;
  undefined4 uStack_1464;
  undefined4 uStack_1460;
  undefined4 uStack_145c;
  long lStack_1458;
  long lStack_1450;
  long lStack_1448;
  long lStack_1440;
  long lStack_1438;
  long lStack_1430;
  byte bStack_1428;
  undefined *puStack_1068;
  char cStack_1059;
  long lStack_1058;
  undefined *puStack_1050;
  long lStack_1048;
  long lStack_1040;
  long lStack_1038;
  long lStack_1030;
  long lStack_1028;
  long lStack_1020;
  byte bStack_1018;
  undefined *puStack_c58;
  undefined8 uStack_c48;
  long lStack_c38;
  long lStack_c30;
  long lStack_c28;
  long lStack_c20;
  long lStack_c18;
  long lStack_c10;
  byte bStack_c08;
  ulong uStack_848;
  undefined8 *puStack_840;
  ulong uStack_838;
  long *plStack_830;
  undefined *puStack_828;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined *puStack_430;
  long lStack_428;
  undefined4 uStack_420;
  undefined8 uStack_38;
  
  plStack_15c8 = (long *)0x0;
  plStack_15c0 = (long *)0x0;
  lStack_1058 = *param_2;
  puStack_1050 = (undefined *)param_2[1];
  lStack_16e0 = param_5;
  func_0x0ee599d0(&uStack_c48,&plStack_15c8,&lStack_1058);
  uStack_438 = 0x22958a09a0a8ddc7;
  puStack_430 = &UNK_0140f690;
  lStack_428 = 1;
  uStack_420 = 0x300;
  if (bStack_c08 == 0) {
    lStack_1058 = *param_1;
    puStack_1050 = (undefined *)param_1[1];
    lStack_1048 = *param_2;
    lStack_1040 = param_2[1];
    FUN_0470d9a0(&puStack_840,&UNK_011b4e13,0x4d,0xdd,&lStack_1058);
    func_0x0eedeb80(8,0xf,&uStack_c48,&puStack_840,&uStack_438);
    if (((ulong)puStack_840 & 1) != 0) {
      thunk_FUN_0ee326a0(plStack_830,(ulong)puStack_840 & 0xfffffffffffffffe);
    }
  }
  lVar15 = lStack_c20;
  plVar9 = plStack_15c8;
  if ((bStack_c08 & 1) == 0) {
    if (lStack_c20 != 0) {
      while (lVar15 != lStack_c18) {
        func_0x048b3e80(lStack_c18 + -0x40);
        lStack_c18 = lStack_c18 + -0x40;
      }
      lStack_c18 = lVar15;
      thunk_FUN_0ee326a0(lStack_c20,lStack_c10 - lStack_c20);
    }
    lVar3 = lStack_c38;
    lVar15 = lStack_c30;
    if (lStack_c38 != 0) {
      for (; lVar3 != lVar15; lVar15 = lVar15 + -0x50) {
        if ((*(char *)(lVar15 + -8) == '\x01') && ((*(byte *)(lVar15 + -0x30) & 1) != 0)) {
          thunk_FUN_0ee326a0(*(undefined8 *)(lVar15 + -0x20),
                             *(ulong *)(lVar15 + -0x30) & 0xfffffffffffffffe);
        }
      }
      lStack_c30 = lVar3;
      thunk_FUN_0ee326a0(lStack_c38,lStack_c28 - lStack_c38);
    }
    iVar19 = 1;
LAB_0ee40536:
    plVar9 = plStack_15c0;
    if (plStack_15c0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_15c0 + 1;
      lVar15 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_15c0 + 0x10))(plStack_15c0);
        func_0x0412c2d0(plVar9);
      }
    }
    return iVar19;
  }
  (**(code **)(*plStack_15c8 + 200))(plStack_15c8,1);
  (**(code **)(*plVar9 + 0x18))(&plStack_16a8,plVar9,1,1);
  uStack_1598 = *param_1;
  uStack_1590 = param_1[1];
  uStack_15a8 = (undefined4)*param_2;
  uStack_15a4 = *(undefined4 *)((long)param_2 + 4);
  uStack_15a0 = (undefined4)param_2[1];
  uStack_159c = *(undefined4 *)((long)param_2 + 0xc);
  (**(code **)(*param_3 + 0x10))(param_3);
  plStack_15b0 = param_3;
  if (DAT_0f7b8fb8 == '\0') goto LAB_0ee4057f;
  do {
    uStack_1478 = uStack_15a8;
    uStack_1474 = uStack_15a4;
    uStack_1470 = uStack_15a0;
    uStack_146c = uStack_159c;
    cVar5 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&uStack_1478);
    iVar19 = 1;
    if (cVar5 == '\0') {
LAB_0ee40396:
      func_0x0ee56c60(&uStack_c48,plStack_16a8);
      lStack_1058 = 0x22958a09a0a8ddc7;
      puStack_1050 = &UNK_0140f690;
      lStack_1048 = 1;
      lStack_1040 = CONCAT44(lStack_1040._4_4_,0x310);
      if (bStack_c08 == 0) {
        func_0x0eedea30(&uStack_438);
        func_0x0eedeb80(2,0x2d,&uStack_c48,&uStack_438,&lStack_1058);
        if ((uStack_438 & 1) != 0) {
          thunk_FUN_0ee326a0(lStack_428,uStack_438 & 0xfffffffffffffffe);
        }
      }
      lVar15 = lStack_c20;
      if ((bStack_c08 & 1) == 0) {
        if (lStack_c20 != 0) {
          while (lVar15 != lStack_c18) {
            func_0x048b3e80(lStack_c18 + -0x40);
            lStack_c18 = lStack_c18 + -0x40;
          }
          lStack_c18 = lVar15;
          thunk_FUN_0ee326a0(lStack_c20,lStack_c10 - lStack_c20);
        }
        lVar3 = lStack_c38;
        lVar15 = lStack_c30;
        if (lStack_c38 != 0) {
          for (; lVar3 != lVar15; lVar15 = lVar15 + -0x50) {
            if ((*(char *)(lVar15 + -8) == '\x01') && ((*(byte *)(lVar15 + -0x30) & 1) != 0)) {
              thunk_FUN_0ee326a0(*(undefined8 *)(lVar15 + -0x20),
                                 *(ulong *)(lVar15 + -0x30) & 0xfffffffffffffffe);
            }
          }
          lStack_c30 = lVar3;
          thunk_FUN_0ee326a0(lStack_c38,lStack_c28 - lStack_c38);
        }
      }
      (**(code **)(*plStack_15c8 + 200))(plStack_15c8,0);
      plVar9 = plStack_16a8;
      plStack_16a8 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 8))();
      }
      goto LAB_0ee40536;
    }
    if ((DAT_0f7b8fb8 == '\0') && (iVar19 = func_0x04108328(&DAT_0f7b8fb8), iVar19 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    iVar19 = 1;
    uStack_1488 = uStack_15a8;
    uStack_1484 = uStack_15a4;
    uStack_1480 = uStack_15a0;
    uStack_147c = uStack_159c;
    cVar5 = (**(code **)(_DAT_0f7b8f98 + 0x88))(&DAT_0f7b8f98,&uStack_1488);
    if (cVar5 == '\0') goto LAB_0ee40396;
    if ((DAT_0f7b8fb8 == '\0') && (iVar19 = func_0x04108328(&DAT_0f7b8fb8), iVar19 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    uStack_1498 = (undefined4)uStack_1598;
    uStack_1494 = uStack_1598._4_4_;
    uStack_1490 = (undefined4)uStack_1590;
    uStack_148c = uStack_1590._4_4_;
    cVar5 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&uStack_1498);
    iVar19 = 3;
    if (cVar5 == '\0') goto LAB_0ee40396;
    pcStack_15e0 = *(char **)(lStack_16e0 + 0x50);
    plStack_15d8 = *(long **)(lStack_16e0 + 0x58);
    if (plStack_15d8 != (long *)0x0) {
      LOCK();
      plStack_15d8[1] = plStack_15d8[1] + 1;
      UNLOCK();
    }
    uStack_15d0 = *(undefined8 *)(lStack_16e0 + 0x60);
    if ((pcStack_15e0 != (char *)0x0) && (*pcStack_15e0 != '\0')) {
      uStack_14a8 = (undefined4)uStack_1598;
      uStack_14a4 = uStack_1598._4_4_;
      uStack_14a0 = (undefined4)uStack_1590;
      uStack_149c = uStack_1590._4_4_;
      func_0x0ee3c730(&uStack_c48,&pcStack_15e0,&uStack_14a8);
      if (uStack_c48 == (long *)0x0) {
LAB_0ee3eded:
        plVar9 = (long *)0x0;
      }
      else {
        cVar5 = (**(code **)(*uStack_c48 + 0x60))(uStack_c48);
        plVar9 = uStack_c48;
        if (cVar5 == '\0') {
          (**(code **)(*uStack_c48 + 8))(uStack_c48);
          goto LAB_0ee3eded;
        }
      }
      plVar13 = plStack_15d8;
      pcStack_15e0 = (char *)0x0;
      plStack_15d8 = (long *)0x0;
      if (plVar13 == (long *)0x0) {
        uStack_15d0 = 0;
      }
      else {
        LOCK();
        plVar1 = plVar13 + 1;
        lVar15 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar15 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          func_0x0412c2d0(plVar13);
        }
        plVar13 = plStack_15d8;
        uStack_15d0 = 0;
        if (plStack_15d8 != (long *)0x0) {
          LOCK();
          plVar1 = plStack_15d8 + 1;
          lVar15 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar15 == 0) {
            (**(code **)(*plStack_15d8 + 0x10))(plStack_15d8);
            func_0x0412c2d0(plVar13);
          }
        }
      }
      iVar19 = 1;
      if (plVar9 != (long *)0x0) {
        plStack_16f0 = plVar9;
        uVar6 = (**(code **)(*plVar9 + 0x50))(plVar9);
        LOCK();
        *(undefined4 *)(plStack_15b0 + 2) = uVar6;
        UNLOCK();
        func_0x0eee2dd0(&uStack_c48,0,0x408);
        if ((DAT_0f7b8fb8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7b8fb8), iVar7 != 0)) {
          func_0x0ee5ea20(&DAT_0f7b8f98);
          func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
          func_0x0410844d(&DAT_0f7b8fb8);
        }
        uStack_14b8 = uStack_15a8;
        uStack_14b4 = uStack_15a4;
        uStack_14b0 = uStack_15a0;
        uStack_14ac = uStack_159c;
        (**(code **)(_DAT_0f7b8f98 + 0x178))(&lStack_1058,&DAT_0f7b8f98,&uStack_c48,&uStack_14b8);
        uStack_438 = 0x22958a09a0a8ddc7;
        puStack_430 = &UNK_0140f690;
        lStack_428 = 1;
        uStack_420 = 0x1d3;
        if (bStack_1018 == 0) {
          func_0x0eedea30(&puStack_840);
          func_0x0eedeb80(2,0x2d,&lStack_1058,&puStack_840,&uStack_438);
          if (((ulong)puStack_840 & 1) != 0) {
            thunk_FUN_0ee326a0(plStack_830,(ulong)puStack_840 & 0xfffffffffffffffe);
          }
        }
        lVar15 = lStack_1030;
        if ((bStack_1018 & 1) == 0) {
          if (lStack_1030 != 0) {
            while (lVar15 != lStack_1028) {
              func_0x048b3e80(lStack_1028 + -0x40);
              lStack_1028 = lStack_1028 + -0x40;
            }
            lStack_1028 = lVar15;
            thunk_FUN_0ee326a0(lStack_1030,lStack_1020 - lStack_1030);
          }
          lVar3 = lStack_1048;
          lVar15 = lStack_1040;
          if (lStack_1048 != 0) {
            for (; lVar3 != lVar15; lVar15 = lVar15 + -0x50) {
              if ((*(char *)(lVar15 + -8) == '\x01') && ((*(byte *)(lVar15 + -0x30) & 1) != 0)) {
                thunk_FUN_0ee326a0(*(undefined8 *)(lVar15 + -0x20),
                                   *(ulong *)(lVar15 + -0x30) & 0xfffffffffffffffe);
              }
            }
            lStack_1040 = lVar3;
            thunk_FUN_0ee326a0(lStack_1048,lStack_1038 - lStack_1048);
          }
        }
        plVar9 = plStack_16f0;
        if (uStack_848 < 0x3ff) {
          *(undefined1 *)((long)&uStack_c48 + uStack_848) = 0x2f;
          *(undefined1 *)((long)&uStack_c48 + uStack_848 + 1) = 0;
          uStack_848 = uStack_848 + 1;
        }
        iVar7 = (**(code **)(*plStack_16f0 + 0x18))(plStack_16f0);
        if (iVar7 == 0) {
          uStack_1580 = 0x100000;
          if (param_4 != '\0') {
            uStack_1580 = 0x10000;
          }
          while( true ) {
            (**(code **)(*plVar9 + 0x28))(&uStack_438,plVar9);
            lVar3 = lStack_428;
            uVar11 = uStack_438;
            puVar18 = (undefined *)(uStack_438 >> 1 & 0x7f);
            lVar15 = (long)&uStack_438 + 1;
            if ((uStack_438 & 1) != 0) {
              puVar18 = puStack_430;
              lVar15 = lStack_428;
            }
            func_0x0eee2dd0(&lStack_1058,0,0x408);
            if (puVar18 < (undefined *)0x400) {
              if (puVar18 != (undefined *)0x0) {
                func_0x0eee2ee0(&lStack_1058,lVar15,puVar18);
              }
              puStack_c58 = puVar18;
              *(undefined1 *)((long)&lStack_1058 + (long)puVar18) = 0;
            }
            if ((uVar11 & 1) != 0) {
              thunk_FUN_0ee326a0(lVar3,uStack_438 & 0xfffffffffffffffe);
            }
            puVar18 = puStack_c58;
            puVar2 = *(undefined8 **)(lStack_16e0 + 0x88);
            if (*(undefined8 **)(lStack_16e0 + 0x80) == puVar2) break;
            puVar23 = *(undefined8 **)(lStack_16e0 + 0x80) + 2;
            do {
              bVar22 = *(byte *)(puVar23 + -2);
              if ((bVar22 & 1) == 0) {
                puVar16 = (undefined *)(ulong)(bVar22 >> 1);
              }
              else {
                puVar16 = (undefined *)puVar23[-1];
              }
              if (puVar16 <= puVar18) {
                if ((bVar22 & 1) == 0) {
                  iVar7 = func_0x0eee3000(&lStack_1058,(long)puVar23 + -0xf);
                }
                else {
                  iVar7 = func_0x0eee3000(&lStack_1058,*puVar23);
                }
                if (iVar7 == 0) goto LAB_0ee3f3f1;
              }
              puVar10 = puVar23 + 1;
              plVar9 = plStack_16f0;
              puVar23 = puVar23 + 3;
            } while (puVar10 != puVar2);
LAB_0ee40030:
            iVar7 = (**(code **)(*plVar9 + 0x20))(plVar9);
            LOCK();
            *(int *)(plStack_15b0 + 1) = (int)plStack_15b0[1] + 1;
            UNLOCK();
            if (iVar7 != 0) goto LAB_0ee3f197;
          }
LAB_0ee3f3f1:
          puVar2 = *(undefined8 **)(lStack_16e0 + 0xa0);
          if (*(undefined8 **)(lStack_16e0 + 0x98) != puVar2) {
            puVar23 = *(undefined8 **)(lStack_16e0 + 0x98) + 2;
            do {
              bVar22 = *(byte *)(puVar23 + -2);
              if ((bVar22 & 1) == 0) {
                puVar16 = (undefined *)(ulong)(bVar22 >> 1);
              }
              else {
                puVar16 = (undefined *)puVar23[-1];
              }
              if (puVar16 <= puVar18) {
                if ((bVar22 & 1) == 0) {
                  iVar7 = func_0x0eee3000(&lStack_1058,(long)puVar23 + -0xf);
                  plVar9 = plStack_16f0;
                }
                else {
                  iVar7 = func_0x0eee3000(&lStack_1058,*puVar23);
                  plVar9 = plStack_16f0;
                }
                plStack_16f0 = plVar9;
                if (iVar7 == 0) goto LAB_0ee40030;
              }
              puVar10 = puVar23 + 1;
              puVar23 = puVar23 + 3;
            } while (puVar10 != puVar2);
          }
          puStack_840 = &uStack_c48;
          uStack_838 = uStack_848;
          plStack_830 = &lStack_1058;
          puStack_828 = puVar18;
          func_0x049151c0(&uStack_438,&puStack_840,2,0x2f);
          uStack_1510 = uStack_38;
          iStack_16e4 = iVar19;
          puStack_1518 = &uStack_438;
          func_0x0ee45a20(&puStack_840,&puStack_1518);
          func_0x0eee2dd0(&uStack_1468,0,0x400);
          puVar16 = puStack_c58;
          if (puStack_c58 == (undefined *)0xffffffffffffffff) {
            puStack_1068 = puStack_c58;
LAB_0ee3f55c:
            iVar7 = iStack_16e4;
            puStack_1068 = puVar16;
            if (puVar16 == (undefined *)0x1) {
              pcVar14 = (char *)&uStack_1468;
              uVar11 = 0;
              pcVar17 = (char *)((long)&uStack_1468 + 1);
              pcVar20 = pcVar14;
LAB_0ee3f68b:
              if (((*pcVar20 == '\\') || (*pcVar20 == '/')) &&
                 (uVar11 < 0x40 && (pcVar20 != pcVar14 && -1 < (long)pcVar20 - (long)pcVar14))) {
                uVar11 = uVar11 + 1;
                pcVar14 = pcVar20 + (pcVar20 != pcVar17);
              }
            }
            else {
              pcVar14 = (char *)&uStack_1468;
              uVar11 = 0;
              puVar4 = (undefined *)0x0;
              do {
                puVar21 = puVar4;
                if (((*(char *)((long)&uStack_1468 + (long)puVar21) == '\\') ||
                    (*(char *)((long)&uStack_1468 + (long)puVar21) == '/')) &&
                   (uVar11 < 0x40 &&
                    ((char *)((long)&uStack_1468 + (long)puVar21) != pcVar14 &&
                    -1 < ((long)&uStack_1468 + (long)puVar21) - (long)pcVar14))) {
                  uVar11 = uVar11 + 1;
                  pcVar14 = (char *)((long)&uStack_1468 + (long)(puVar21 + (puVar16 != puVar21)));
                }
                if (((*(char *)((long)&uStack_1468 + (long)(puVar21 + 1)) == '\\') ||
                    (*(char *)((long)&uStack_1468 + (long)(puVar21 + 1)) == '/')) &&
                   (uVar11 < 0x40 &&
                    (auStack_16f8 + ((long)puVar21 - (long)pcVar14) !=
                     (undefined1 *)0xfffffffffffffd6f &&
                    -1 < (long)(auStack_16f8 + ((long)puVar21 - (long)pcVar14) + 0x291)))) {
                  uVar11 = uVar11 + 1;
                  pcVar14 = (char *)((long)&uStack_1468 +
                                    (long)(puVar21 + (ulong)(puVar16 + -1 != puVar21) + 1));
                }
                puVar4 = puVar21 + 2;
              } while ((undefined *)((ulong)puVar16 & 0xfffffffffffffffe) != puVar21 + 2);
              pcVar20 = (char *)((long)&uStack_1468 + (long)(puVar21 + 2));
              pcVar17 = (char *)((long)&uStack_1468 + (long)puVar16);
              if (((ulong)puVar16 & 1) != 0) goto LAB_0ee3f68b;
            }
            if ((uVar11 < 0x40 && 0 < (long)pcVar17 - (long)pcVar14) + uVar11 <=
                *(ulong *)(lStack_16e0 + 0xb0)) goto LAB_0ee3f844;
            func_0x0ee450c0();
            uVar12 = func_0x0412dc70();
            uStack_1688 = _DAT_0f535bf0;
            uStack_1680 = _UNK_0f535bf8;
            ppuStack_1698 = _DAT_0f535be0;
            puStack_1690 = (undefined *)_UNK_0f535be8;
            bStack_1678 = 0;
            cStack_1650 = '\0';
            uStack_16d8 = (undefined *)0x0;
            puStack_16d0 = (undefined *)0x0;
            lStack_16c8 = 0;
            func_0x0eee17a0(&uStack_16d8,&ppuStack_1698,auStack_1648,1);
            if ((cStack_1650 == '\x01') && ((bStack_1678 & 1) != 0)) {
              thunk_FUN_0ee326a0(uStack_1668,CONCAT71(uStack_1677,bStack_1678) & 0xfffffffffffffffe)
              ;
            }
            bStack_1600 = 0;
            uStack_1640 = 0x16;
            puStack_1630 = uStack_16d8;
            puStack_1628 = puStack_16d0;
            lStack_1620 = lStack_16c8;
            lStack_1618 = 0;
            lStack_1610 = 0;
            lStack_1608 = 0;
            ppuStack_1698 = (undefined8 **)0x22958a09a0a8ddc7;
            puStack_1690 = &UNK_0140f690;
            uStack_1688 = 1;
            uStack_1680 = CONCAT44(uStack_1680._4_4_,0x1f7);
            uStack_1638 = uVar12;
            func_0x0eedea30(&uStack_16d8);
            func_0x0eedeb80(2,0x2d,&uStack_1640,&uStack_16d8,&ppuStack_1698);
            if (((ulong)uStack_16d8 & 1) != 0) {
              thunk_FUN_0ee326a0(lStack_16c8,(ulong)uStack_16d8 & 0xfffffffffffffffe);
            }
            lVar15 = lStack_1618;
            plVar9 = plStack_16f0;
            if ((bStack_1600 & 1) != 0) goto LAB_0ee3f844;
            lVar3 = lStack_1610;
            if (lStack_1618 != 0) {
              while (lVar15 != lVar3) {
                func_0x048b3e80(lVar3 + -0x40);
                lVar3 = lVar3 + -0x40;
              }
              lStack_1610 = lVar15;
              thunk_FUN_0ee326a0(lStack_1618,lStack_1608 - lStack_1618);
            }
            puVar16 = puStack_1630;
            puVar18 = puStack_1628;
            if (puStack_1630 != (undefined *)0x0) {
              for (; puVar16 != puVar18; puVar18 = puVar18 + -0x50) {
                if ((puVar18[-8] == '\x01') && ((puVar18[-0x30] & 1) != 0)) {
                  thunk_FUN_0ee326a0(*(undefined8 *)(puVar18 + -0x20),
                                     *(ulong *)(puVar18 + -0x30) & 0xfffffffffffffffe);
                }
              }
              puStack_1628 = puVar16;
              thunk_FUN_0ee326a0(puStack_1630,lStack_1620 - (long)puStack_1630);
            }
            iVar19 = 6;
            goto LAB_0ee4038d;
          }
          func_0x0eee2f00(&uStack_1468,&lStack_1058);
          puStack_1068 = puVar16;
          iVar7 = iStack_16e4;
          if (puVar16 != (undefined *)0x0) goto LAB_0ee3f55c;
LAB_0ee3f844:
          ppuStack_1528 = &puStack_840;
          uStack_1520 = uStack_440;
          cVar5 = func_0x0ee3c850(lStack_16e0,&ppuStack_1528);
          plVar9 = plStack_16f0;
          iVar19 = iVar7;
          if (cVar5 == '\0') goto LAB_0ee40030;
          if ((&cStack_1059)[(long)puVar18] == '/') {
            if ((DAT_0f7b8fb8 == '\0') && (iVar19 = func_0x04108328(&DAT_0f7b8fb8), iVar19 != 0)) {
              func_0x0ee5ea20(&DAT_0f7b8f98);
              func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
              func_0x0410844d(&DAT_0f7b8fb8);
              plVar9 = plStack_16f0;
              iVar7 = iStack_16e4;
            }
            ppuStack_1538 = &puStack_840;
            uStack_1530 = uStack_440;
            (**(code **)(_DAT_0f7b8f98 + 0x80))(&uStack_1468,&DAT_0f7b8f98,&ppuStack_1538);
            ppuStack_1698 = (undefined8 **)0x22958a09a0a8ddc7;
            puStack_1690 = &UNK_0140f690;
            uStack_1688 = 1;
            uStack_1680 = CONCAT44(uStack_1680._4_4_,0x201);
            if (bStack_1428 == 0) {
              func_0x0eedea30(&uStack_1640);
              func_0x0eedeb80(2,0x2d,&uStack_1468,&uStack_1640,&ppuStack_1698);
              if ((uStack_1640 & 1) != 0) {
                thunk_FUN_0ee326a0(puStack_1630,
                                   CONCAT44(uStack_163c,uStack_1640) & 0xfffffffffffffffe);
              }
            }
            lVar15 = lStack_1440;
            iVar19 = iVar7;
            if ((bStack_1428 & 1) != 0) goto LAB_0ee40030;
            lVar3 = lStack_1438;
            if (lStack_1440 != 0) {
              while (lVar15 != lVar3) {
                func_0x048b3e80(lVar3 + -0x40);
                lVar3 = lVar3 + -0x40;
              }
              lStack_1438 = lVar15;
              thunk_FUN_0ee326a0(lStack_1440,lStack_1430 - lStack_1440);
            }
            lVar3 = lStack_1458;
            lVar15 = lStack_1450;
            if (lStack_1458 != 0) {
              for (; lVar3 != lVar15; lVar15 = lVar15 + -0x50) {
                if ((*(char *)(lVar15 + -8) == '\x01') && ((*(byte *)(lVar15 + -0x30) & 1) != 0)) {
                  thunk_FUN_0ee326a0(*(undefined8 *)(lVar15 + -0x20),
                                     *(ulong *)(lVar15 + -0x30) & 0xfffffffffffffffe);
                }
              }
              lStack_1450 = lVar3;
              thunk_FUN_0ee326a0(lStack_1458,lStack_1448 - lStack_1458);
            }
            iVar19 = 1;
          }
          else {
            if (*(char *)(lStack_16e0 + 0x49) == '\x01') {
              plVar13 = (long *)func_0x0ee56790();
              ppuStack_1548 = &puStack_840;
              uStack_1540 = uStack_440;
              cVar5 = (**(code **)(*plVar13 + 0xf8))(plVar13,&ppuStack_1548);
              if (cVar5 != '\0') goto LAB_0ee40030;
            }
            iVar19 = (**(code **)(*plVar9 + 0x30))(plVar9);
            if (iVar19 == 0) {
              iVar19 = iVar7;
              if ((DAT_0f7b8fb8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f7b8fb8), iVar8 != 0)) {
                func_0x0ee5ea20(&DAT_0f7b8f98);
                func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
                func_0x0410844d(&DAT_0f7b8fb8);
                plVar9 = plStack_16f0;
                iVar19 = iStack_16e4;
              }
              ppuStack_1558 = &puStack_840;
              uStack_1550 = uStack_440;
              (**(code **)(_DAT_0f7b8f98 + 0x168))(&lStack_15f8,&DAT_0f7b8f98,&ppuStack_1558);
              lVar15 = lStack_15f0 - lStack_15f8;
              if (1 < (ulong)((lVar15 >> 3) * -0x5555555555555555)) {
                if ((*(byte *)(lStack_15f8 + -0x30 + lVar15) & 1) == 0) {
                  lVar15 = lStack_15f8 + lVar15;
                  lStack_16c8 = *(long *)(lVar15 + -0x20);
                  uStack_16d8 = *(undefined **)(lVar15 + -0x30);
                  puStack_16d0 = *(undefined **)(lVar15 + -0x28);
                }
                else {
                  FUN_0412e5e0(&uStack_16d8,*(undefined8 *)(lStack_15f8 + lVar15 + -0x20),
                               *(undefined8 *)(lStack_15f8 + lVar15 + -0x28));
                }
                plVar13 = (long *)func_0x0ee56790();
                puStack_1560 = (undefined *)((ulong)uStack_16d8 >> 1 & 0x7f);
                lStack_1568 = (long)&uStack_16d8 + 1;
                if (((ulong)uStack_16d8 & 1) != 0) {
                  puStack_1560 = puStack_16d0;
                  lStack_1568 = lStack_16c8;
                }
                (**(code **)(*plVar13 + 0x80))(&uStack_1468,plVar13,&lStack_1568);
                ppuStack_1698 = (undefined8 **)0x22958a09a0a8ddc7;
                puStack_1690 = &UNK_0140f690;
                uStack_1688 = 1;
                uStack_1680 = CONCAT44(uStack_1680._4_4_,0x216);
                if (bStack_1428 == 0) {
                  func_0x0eedea30(&uStack_1640);
                  func_0x0eedeb80(2,0x2d,&uStack_1468,&uStack_1640,&ppuStack_1698);
                  if ((uStack_1640 & 1) != 0) {
                    thunk_FUN_0ee326a0(puStack_1630,
                                       CONCAT44(uStack_163c,uStack_1640) & 0xfffffffffffffffe);
                  }
                }
                bVar22 = bStack_1428;
                func_0x0ee38090(&uStack_1468);
                if ((bVar22 & 1) == 0) {
                  iVar19 = 1;
                  (**(code **)(*plVar9 + 0x38))(plVar9);
                }
                if (((ulong)uStack_16d8 & 1) != 0) {
                  thunk_FUN_0ee326a0(lStack_16c8,(ulong)uStack_16d8 & 0xfffffffffffffffe);
                }
                if ((bVar22 & 1) == 0) {
                  func_0x048e6e10(&lStack_15f8);
                  goto LAB_0ee4038d;
                }
              }
              uVar12 = (**(code **)(*plVar9 + 0x58))(plVar9);
              if ((DAT_0f7b8fb8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7b8fb8), iVar7 != 0)) {
                func_0x0ee5ea20(&DAT_0f7b8f98);
                func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
                func_0x0410844d(&DAT_0f7b8fb8);
                plVar9 = plStack_16f0;
              }
              ppuStack_1578 = &puStack_840;
              uStack_1570 = uStack_440;
              (**(code **)(_DAT_0f7b8f98 + 400))(&plStack_16a0,&DAT_0f7b8f98,&ppuStack_1578,uVar12);
              uVar12 = uStack_440;
              plStack_16b8 = (long *)0x0;
              plStack_16b0 = (long *)0x0;
              if ((DAT_0f7b8fb8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f7b8fb8), iVar7 != 0)) {
                func_0x0ee5ea20(&DAT_0f7b8f98);
                func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
                func_0x0410844d(&DAT_0f7b8fb8);
                plVar9 = plStack_16f0;
              }
              ppuStack_1698 = &puStack_840;
              puStack_1690 = (undefined *)uVar12;
              (**(code **)(_DAT_0f7b8f98 + 0x10))
                        (&uStack_1468,&DAT_0f7b8f98,&ppuStack_1698,&plStack_16b8,0x12e,0);
              ppuStack_1698 = (undefined8 **)0x22958a09a0a8ddc7;
              puStack_1690 = &UNK_0140f690;
              uStack_1688 = 1;
              uStack_1680 = CONCAT44(uStack_1680._4_4_,0x226);
              if (bStack_1428 == 0) {
                func_0x0eedea30(&uStack_1640);
                func_0x0eedeb80(8,1,&uStack_1468,&uStack_1640,&ppuStack_1698);
                if ((uStack_1640 & 1) != 0) {
                  thunk_FUN_0ee326a0(puStack_1630,
                                     CONCAT44(uStack_163c,uStack_1640) & 0xfffffffffffffffe);
                }
              }
              if ((bStack_1428 & 1) == 0) {
                (**(code **)(*plVar9 + 0x38))(plVar9);
                iVar19 = 1;
                bVar22 = 0;
              }
              else {
                bStack_1658 = 1;
                puStack_1508 = &UNK_0f5358d8;
                pplStack_1500 = &plStack_16b8;
                pppuStack_14f8 = &ppuStack_1698;
                ppuStack_14e8 = &puStack_1508;
                (**(code **)(*plVar9 + 0x48))(plVar9,uStack_1580,&puStack_1508);
                if (ppuStack_14e8 == &puStack_1508) {
                  lVar15 = 0x20;
LAB_0ee3fd8b:
                  (**(code **)(*ppuStack_14e8 + lVar15))();
                }
                else {
                  lVar15 = 0x28;
                  if (ppuStack_14e8 != (undefined **)0x0) goto LAB_0ee3fd8b;
                }
                if (plStack_16b8 != (long *)0x0) {
                  func_0x0ee56810(&uStack_1640,&plStack_16b8);
                  uStack_16d8 = (undefined *)0x22958a09a0a8ddc7;
                  puStack_16d0 = &UNK_0140f690;
                  lStack_16c8 = 1;
                  uStack_16c0 = 0x23e;
                  if (bStack_1600 == 0) {
                    func_0x0eedea30(&bStack_14d0);
                    func_0x0eedeb80(2,0x2d,&uStack_1640,&bStack_14d0,&uStack_16d8);
                    if ((bStack_14d0 & 1) != 0) {
                      thunk_FUN_0ee326a0(uStack_14c0,
                                         CONCAT71(uStack_14cf,bStack_14d0) & 0xfffffffffffffffe);
                    }
                  }
                  func_0x0ee38090(&uStack_1640);
                }
                iVar7 = (**(code **)(*plVar9 + 0x38))(plVar9);
                bVar22 = bStack_1658;
                if ((bStack_1658 & 1) == 0) {
                  iVar19 = 1;
                }
                if (iVar7 != 0) {
                  iVar19 = iVar7;
                }
                if ((bStack_1658 & 1) == 0) {
                  func_0x05ff1910(&ppuStack_1698);
                }
                bVar22 = iVar7 == 0 & bVar22;
              }
              lVar15 = lStack_1440;
              if (bStack_1428 == 0) {
                lVar3 = lStack_1438;
                if (lStack_1440 != 0) {
                  while (lVar15 != lVar3) {
                    func_0x048b3e80(lVar3 + -0x40);
                    lVar3 = lVar3 + -0x40;
                  }
                  lStack_1438 = lVar15;
                  thunk_FUN_0ee326a0(lStack_1440,lStack_1430 - lStack_1440);
                }
                lVar3 = lStack_1458;
                lVar15 = lStack_1450;
                if (lStack_1458 != 0) {
                  for (; lVar3 != lVar15; lVar15 = lVar15 + -0x50) {
                    if ((*(char *)(lVar15 + -8) == '\x01') && ((*(byte *)(lVar15 + -0x30) & 1) != 0)
                       ) {
                      thunk_FUN_0ee326a0(*(undefined8 *)(lVar15 + -0x20),
                                         *(ulong *)(lVar15 + -0x30) & 0xfffffffffffffffe);
                    }
                  }
                  lStack_1450 = lVar3;
                  thunk_FUN_0ee326a0(lStack_1458,lStack_1448 - lStack_1458);
                }
              }
              if (plStack_16b8 != (long *)0x0) {
                func_0x0ee56810(&uStack_1468,&plStack_16b8);
                func_0x0ee38090(&uStack_1468);
              }
              plVar9 = plStack_16b0;
              plStack_16b0 = (long *)0x0;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))();
              }
              plVar9 = plStack_16b8;
              plStack_16b8 = (long *)0x0;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))();
              }
              plVar9 = plStack_16a0;
              plStack_16a0 = (long *)0x0;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))();
              }
              lVar3 = lStack_15f8;
              lVar15 = lStack_15f0;
              if (lStack_15f8 != 0) {
                for (; lVar3 != lVar15; lVar15 = lVar15 + -0x18) {
                  if ((*(byte *)(lVar15 + -0x18) & 1) != 0) {
                    thunk_FUN_0ee326a0(*(undefined8 *)(lVar15 + -8),
                                       *(ulong *)(lVar15 + -0x18) & 0xfffffffffffffffe);
                  }
                }
                lStack_15f0 = lVar3;
                thunk_FUN_0ee326a0(lStack_15f8,lStack_15e8 - lStack_15f8);
              }
              plVar9 = plStack_16f0;
              if (bVar22 != 0) goto LAB_0ee40030;
            }
          }
LAB_0ee4038d:
          (**(code **)(*plVar9 + 8))(plVar9);
        }
        else {
LAB_0ee3f197:
          iVar19 = 0;
          if (*(char *)(lStack_16e0 + 0x48) != '\x01') goto LAB_0ee4038d;
          (**(code **)(*plVar9 + 8))(plVar9);
          plVar9 = (long *)func_0x0ee56790();
          uStack_1468 = (undefined4)uStack_1598;
          uStack_1464 = uStack_1598._4_4_;
          uStack_1460 = (undefined4)uStack_1590;
          uStack_145c = uStack_1590._4_4_;
          (**(code **)(*plVar9 + 0x20))(&lStack_1058,plVar9,&uStack_1468);
          uStack_438 = 0x22958a09a0a8ddc7;
          puStack_430 = &UNK_0140f690;
          lStack_428 = 1;
          uStack_420 = 0x252;
          iVar19 = 0;
          if (bStack_1018 == 0) {
            func_0x0eedea30(&puStack_840);
            func_0x0eedeb80(2,0x2d,&lStack_1058,&puStack_840,&uStack_438);
            if (((ulong)puStack_840 & 1) != 0) {
              thunk_FUN_0ee326a0(plStack_830,(ulong)puStack_840 & 0xfffffffffffffffe);
            }
            iVar19 = ((byte)~bStack_1018 & 1) << 2;
          }
          func_0x0ee38090(&lStack_1058);
        }
      }
      goto LAB_0ee40396;
    }
    FUN_04890760();
LAB_0ee4057f:
    iVar19 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar19 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
  } while( true );
}


