/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd202a00 (ELF vaddr 0xd102a00)
 * Label: caller-of-callee
 * Body:  [[0d202a00, 0d202b90] [0d202ba0, 0d202d10] [0d202d20, 0d202db0] [0d202dc0, 0d202e40] [0d202e50, 0d202e75] [0d202e80, 0d202f0e] [0d202f10, 0d203156] [0d203160, 0d203239] [0d203240, 0d203437] [0d203440, 0d203494] [0d2034a0, 0d2034b7] [0d2034c0, 0d2034e1] [0d2034f0, 0d2036b0] [0d2036c0, 0d2037be]]
 * Ghidra: FUN_0d202a00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d202a00(ulong param_1)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  bool bVar15;
  undefined8 uStack_568;
  ulong uStack_560;
  long lStack_558;
  undefined8 uStack_548;
  ulong uStack_540;
  long lStack_538;
  long lStack_530;
  long lStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  byte bStack_508;
  undefined1 *puStack_500;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  undefined4 uStack_4e8;
  ulong uStack_4e0;
  long *plStack_4d8;
  long *plStack_4d0;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined1 *puStack_4b8;
  long *plStack_4b0;
  long *plStack_4a8;
  long *plStack_4a0;
  long lStack_490;
  long *plStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  byte bStack_470;
  undefined7 uStack_46f;
  undefined8 uStack_460;
  long lStack_458;
  ulong uStack_450;
  long lStack_448;
  ulong uStack_440;
  undefined1 auStack_438 [1024];
  undefined8 uStack_38;
  
  func_0x0eee2dd0(auStack_438,0,0x408);
  uStack_4e0 = param_1;
  if (DAT_0f7b8fb8 == '\0') goto LAB_0d20376c;
LAB_0d202a3f:
  bVar15 = (*(byte *)(param_1 + 0x18) & 1) != 0;
  lStack_448 = param_1 + 0x19;
  if (bVar15) {
    lStack_448 = *(long *)(param_1 + 0x28);
  }
  uStack_440 = (ulong)(*(byte *)(param_1 + 0x18) >> 1);
  if (bVar15) {
    uStack_440 = *(ulong *)(param_1 + 0x20);
  }
  plVar10 = &lStack_448;
  (**(code **)(_DAT_0f7b8f98 + 0x178))(&uStack_548,&DAT_0f7b8f98,auStack_438);
  puStack_500 = (undefined1 *)0x24c35f4ab055ef74;
  puStack_4f8 = &UNK_0140f690;
  uStack_4f0 = 1;
  uStack_4e8 = 0x9d;
  if (bStack_508 == 0) {
    uStack_568 = 0;
    uStack_560 = 0;
    lStack_558 = 0;
    plVar10 = &uStack_568;
    func_0x0eedeb80(2,0x2d,&uStack_548,plVar10,&puStack_500);
    if ((uStack_568 & 1) != 0) {
      func_0x0412a280(lStack_558,uStack_568 & 0xfffffffffffffffe);
    }
  }
  lVar3 = lStack_520;
  if ((bStack_508 & 1) == 0) {
    lVar11 = lStack_518;
    if (lStack_520 != 0) {
      while (lVar3 != lVar11) {
        func_0x048b3e80(lVar11 + -0x40);
        lVar11 = lVar11 + -0x40;
      }
      lStack_518 = lVar3;
      func_0x0412a280(lStack_520,lStack_510 - lStack_520);
    }
    lVar11 = lStack_538;
    lVar3 = lStack_530;
    if (lStack_538 != 0) {
      for (; lVar11 != lVar3; lVar3 = lVar3 + -0x50) {
        if ((*(char *)(lVar3 + -8) == '\x01') && ((*(byte *)(lVar3 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar3 + -0x20),
                          *(ulong *)(lVar3 + -0x30) & 0xfffffffffffffffe);
        }
      }
      lStack_530 = lVar11;
      func_0x0412a280(lStack_538,lStack_528 - lStack_538);
    }
  }
  plStack_488 = (long *)0x0;
  plStack_480 = (long *)0x0;
  puStack_4f8 = (undefined *)uStack_38;
  puStack_500 = auStack_438;
  func_0x0ee599d0(&uStack_548,&plStack_488,&puStack_500);
  puStack_500 = (undefined1 *)0x24c35f4ab055ef74;
  puStack_4f8 = &UNK_0140f690;
  uStack_4f0 = 1;
  uStack_4e8 = 0xa0;
  if (bStack_508 == 0) {
    uStack_568 = 0;
    uStack_560 = 0;
    lStack_558 = 0;
    plVar10 = &uStack_568;
    func_0x0eedeb80(0x100000008,0x2d,&uStack_548,plVar10,&puStack_500);
    if ((uStack_568 & 1) != 0) {
      func_0x0412a280(lStack_558,uStack_568 & 0xfffffffffffffffe);
    }
  }
  lVar3 = lStack_520;
  if ((bStack_508 & 1) == 0) {
    lVar11 = lStack_518;
    if (lStack_520 != 0) {
      while (lVar3 != lVar11) {
        func_0x048b3e80(lVar11 + -0x40);
        lVar11 = lVar11 + -0x40;
      }
      lStack_518 = lVar3;
      func_0x0412a280(lStack_520,lStack_510 - lStack_520);
    }
    lVar11 = lStack_538;
    lVar3 = lStack_530;
    if (lStack_538 != 0) {
      for (; lVar11 != lVar3; lVar3 = lVar3 + -0x50) {
        if ((*(char *)(lVar3 + -8) == '\x01') && ((*(byte *)(lVar3 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar3 + -0x20),
                          *(ulong *)(lVar3 + -0x30) & 0xfffffffffffffffe);
        }
      }
      lStack_530 = lVar11;
      func_0x0412a280(lStack_538,lStack_528 - lStack_538);
    }
  }
  (**(code **)(*plStack_488 + 0x10))(&plStack_4d0,plStack_488,2);
  lVar3 = param_1 + 0x38;
  func_0x0412d680(lVar3);
  lVar11 = *(long *)(param_1 + 0x78);
  lVar8 = *(long *)(param_1 + 0x80);
  uVar13 = uStack_4e0;
  plVar12 = plStack_4d8;
  lStack_490 = lVar3;
  if (lVar11 != lVar8) {
    do {
      (**(code **)(**(long **)(uStack_4e0 + 0x30) + 0x40))
                (&uStack_548,*(long **)(uStack_4e0 + 0x30),lVar11);
      if (uStack_548 != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
      }
      lVar11 = lVar11 + 0x18;
    } while (lVar11 != lVar8);
    lVar11 = *(long *)(uStack_4e0 + 0x78);
    lVar8 = *(long *)(uStack_4e0 + 0x80);
    uVar13 = uStack_4e0;
    plVar12 = plStack_4d8;
  }
  for (; uStack_4e0 = uVar13, lVar11 != lVar8; lVar8 = lVar8 + -0x18) {
    plStack_4d8 = plVar12;
    if ((*(byte *)(lVar8 + -0x18) & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(lVar8 + -8),*(ulong *)(lVar8 + -0x18) & 0xfffffffffffffffe);
    }
    uVar13 = uStack_4e0;
    plVar12 = plStack_4d8;
  }
  *(long *)(uVar13 + 0x80) = lVar11;
  plStack_4d8 = *(long **)(uVar13 + 0x60);
  if (plStack_4d8 == *(long **)(uVar13 + 0x68)) {
LAB_0d2035a5:
    plStack_4d8 = plVar12;
    func_0x0412d6b0(lStack_490);
    func_0x0ee56c60(&uStack_548,plStack_4d0);
    puStack_500 = (undefined1 *)0x24c35f4ab055ef74;
    puStack_4f8 = &UNK_0140f690;
    uStack_4f0 = 1;
    uStack_4e8 = 0xa6;
    if (bStack_508 == 0) {
      uStack_568 = 0;
      uStack_560 = 0;
      lStack_558 = 0;
      func_0x0eedeb80(2,0x2d,&uStack_548,&uStack_568,&puStack_500);
      if ((uStack_568 & 1) != 0) {
        func_0x0412a280(lStack_558,uStack_568 & 0xfffffffffffffffe);
      }
    }
    lVar3 = lStack_520;
    if ((bStack_508 & 1) == 0) {
      lVar11 = lStack_518;
      if (lStack_520 != 0) {
        while (lVar3 != lVar11) {
          func_0x048b3e80(lVar11 + -0x40);
          lVar11 = lVar11 + -0x40;
        }
        lStack_518 = lVar3;
        func_0x0412a280(lStack_520,lStack_510 - lStack_520);
      }
      lVar11 = lStack_538;
      lVar3 = lStack_530;
      if (lStack_538 != 0) {
        for (; lVar11 != lVar3; lVar3 = lVar3 + -0x50) {
          if ((*(char *)(lVar3 + -8) == '\x01') && ((*(byte *)(lVar3 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(lVar3 + -0x20),
                            *(ulong *)(lVar3 + -0x30) & 0xfffffffffffffffe);
          }
        }
        lStack_530 = lVar11;
        func_0x0412a280(lStack_538,lStack_528 - lStack_538);
      }
    }
    plVar10 = plStack_4d0;
    plStack_4d0 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    plVar10 = plStack_480;
    if (plStack_480 != (long *)0x0) {
      LOCK();
      plVar12 = plStack_480 + 1;
      lVar3 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_480 + 0x10))(plStack_480);
        FUN_0412c2d0(plVar10);
      }
    }
    return;
  }
  do {
    plStack_4b0 = plVar10;
    lVar3 = *plStack_4d8;
    plVar10 = (long *)plStack_4d8[1];
    if (plVar10 != (long *)0x0) {
      LOCK();
      plVar10[1] = plVar10[1] + 1;
      UNLOCK();
    }
    func_0x0412d680(lVar3);
    bVar4 = *(byte *)(lVar3 + 0x61);
    cVar5 = *(char *)(lVar3 + 0x60);
    func_0x0412d6b0(lVar3);
    if ((cVar5 == '\0') && ((bVar4 & 1) != 0)) {
      plStack_4a8 = (long *)0x0;
      plStack_4a0 = (long *)0x0;
      func_0x0412d680(lVar3);
      puVar1 = (ulong *)(lVar3 + 0x40);
      if ((*(byte *)(lVar3 + 0x40) & 1) == 0) {
        puStack_4b8 = *(undefined1 **)(lVar3 + 0x50);
        uStack_4c8 = *(uint *)puVar1;
        uStack_4c4 = *(undefined4 *)(lVar3 + 0x44);
        uStack_4c0 = *(undefined4 *)(lVar3 + 0x48);
        uStack_4bc = *(undefined4 *)(lVar3 + 0x4c);
      }
      else {
        func_0x0412e5e0(&uStack_4c8,*(undefined8 *)(lVar3 + 0x50),*(undefined8 *)(lVar3 + 0x48));
      }
      func_0x0412d6b0(lVar3);
      puStack_4f8 = (undefined *)CONCAT44(uStack_4bc,uStack_4c0);
      puStack_500 = puStack_4b8;
      if ((uStack_4c8 & 1) == 0) {
        puStack_500 = (undefined1 *)((long)&uStack_4c8 + 1);
        puStack_4f8 = (undefined *)(ulong)((byte)uStack_4c8 >> 1);
      }
      func_0x0ee599d0(&uStack_548,&plStack_4a8,&puStack_500);
      plStack_4b0 = (long *)(ulong)((uint)plStack_4b0 & 0xff000000 | 8);
      puStack_500 = (undefined1 *)0x89ec4735e8adcfa0;
      puStack_4f8 = &UNK_0140f690;
      uStack_4f0 = 1;
      uStack_4e8 = 0x7e;
      if (bStack_508 == 0) {
        func_0x0412d680(lVar3);
        if ((*(byte *)puVar1 & 1) == 0) {
          lStack_558 = *(long *)(lVar3 + 0x50);
          uStack_568 = *puVar1;
          uStack_560 = *(ulong *)(lVar3 + 0x48);
        }
        else {
          func_0x0412e5e0(&uStack_568,*(undefined8 *)(lVar3 + 0x50),*(undefined8 *)(lVar3 + 0x48));
        }
        func_0x0412d6b0(lVar3);
        lStack_458 = lStack_558;
        uStack_450 = uStack_560;
        if ((uStack_568 & 1) == 0) {
          lStack_458 = (long)&uStack_568 + 1;
          uStack_450 = uStack_568 >> 1 & 0x7f;
        }
        func_0x0470d9a0(&bStack_470,&UNK_012831f9,0x4c,0xd,&lStack_458);
        if ((uStack_568 & 1) != 0) {
          func_0x0412a280(lStack_558,uStack_568 & 0xfffffffffffffffe);
        }
        func_0x0eedeb80((ulong)plStack_4b0 | 0x100000000,0x10,&uStack_548,&bStack_470,&puStack_500);
        if ((bStack_470 & 1) != 0) {
          func_0x0412a280(uStack_460,CONCAT71(uStack_46f,bStack_470) & 0xfffffffffffffffe);
        }
      }
      bVar4 = bStack_508;
      lVar11 = lStack_520;
      if ((bStack_508 & 1) == 0) {
        lVar8 = lStack_518;
        if (lStack_520 != 0) {
          while (lVar11 != lVar8) {
            func_0x048b3e80(lVar8 + -0x40);
            lVar8 = lVar8 + -0x40;
          }
          lStack_518 = lVar11;
          func_0x0412a280(lStack_520,lStack_510 - lStack_520);
        }
        lVar8 = lStack_538;
        lVar11 = lStack_530;
        if (lStack_538 != 0) {
          for (; lVar8 != lVar11; lVar11 = lVar11 + -0x50) {
            if ((*(char *)(lVar11 + -8) == '\x01') && ((*(byte *)(lVar11 + -0x30) & 1) != 0)) {
              func_0x0412a280(*(undefined8 *)(lVar11 + -0x20),
                              *(ulong *)(lVar11 + -0x30) & 0xfffffffffffffffe);
            }
          }
          lStack_530 = lVar8;
          func_0x0412a280(lStack_538,lStack_528 - lStack_538);
        }
      }
      if ((uStack_4c8 & 1) != 0) {
        func_0x0412a280(puStack_4b8,CONCAT44(uStack_4c4,uStack_4c8) & 0xfffffffffffffffe);
      }
      plVar12 = plStack_4a8;
      if ((bVar4 & 1) == 0) {
        plStack_4d8 = plStack_4d8 + 2;
      }
      else {
        func_0x0412d680(lVar3);
        lVar11 = 0;
        if (*(char *)(lVar3 + 0x60) == '\0') {
          lVar11 = *(long *)(lVar3 + 0x30) - *(long *)(lVar3 + 0x28);
        }
        func_0x0412d6b0(lVar3);
        (**(code **)(*plVar12 + 0x58))(plVar12,lVar11,0);
        uVar6 = *(undefined8 *)(uVar13 + 0x30);
        func_0x0412d680(lVar3);
        *(undefined1 *)(lVar3 + 0x61) = 0;
        if (*(char *)(lVar3 + 0x60) == '\x01') {
          uStack_568 = 0;
        }
        else {
          puStack_500 = *(undefined1 **)(lVar3 + 0x28);
          puStack_4f8 = (undefined *)(*(long *)(lVar3 + 0x30) - (long)puStack_500);
          bVar15 = (*(byte *)(lVar3 + 0x40) & 1) != 0;
          lVar11 = lVar3 + 0x41;
          if (bVar15) {
            lVar11 = *(long *)(lVar3 + 0x50);
          }
          param_1 = (ulong)(*(byte *)(lVar3 + 0x40) >> 1);
          if (bVar15) {
            param_1 = *(ulong *)(lVar3 + 0x48);
          }
          if (0xfffffffffffffff7 < param_1) break;
          uStack_478 = uVar6;
          if (param_1 < 0x17) {
            uStack_548 = CONCAT71(uStack_548._1_7_,(char)param_1 * '\x02');
            lVar8 = (long)&uStack_548 + 1;
            if (param_1 != 0) goto LAB_0d203302;
          }
          else {
            uVar13 = (param_1 | 7) + 1;
            if ((param_1 | 7) == 0x17) {
              uVar13 = 0x1a;
            }
            lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
            if (lVar8 == 0) {
              func_0x0eec74c0(uVar13,0);
            }
            uStack_548 = uVar13 | 1;
            uStack_540 = param_1;
            lStack_538 = lVar8;
LAB_0d203302:
            func_0x0eee2ee0(lVar8,lVar11,param_1);
          }
          *(undefined1 *)(lVar8 + param_1) = 0;
          func_0x041b3380(&uStack_568,uStack_478,&puStack_500,&uStack_548);
          uVar13 = uStack_4e0;
          if ((uStack_548 & 1) != 0) {
            func_0x0412a280(lStack_538,uStack_548 & 0xfffffffffffffffe);
          }
        }
        func_0x0412d6b0(lVar3);
        plVar12 = plStack_4a8;
        if (uStack_568 != 0) {
          if ((*(char *)(uStack_568 + 4) == '\x05') &&
             (func_0x0ee5bf30(plStack_4a8), (*(byte *)((long)plVar12 + 0x18a) & 1) == 0)) {
            LOCK();
            *(undefined1 *)((long)plStack_4a8 + 0x18b) = 1;
            UNLOCK();
          }
          if (uStack_568 != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
          }
        }
      }
      plVar12 = plStack_4a0;
      if (plStack_4a0 != (long *)0x0) {
        LOCK();
        plVar14 = plStack_4a0 + 1;
        lVar11 = *plVar14;
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (lVar11 == 0) {
          (**(code **)(*plStack_4a0 + 0x10))(plStack_4a0);
          FUN_0412c2d0(plVar12);
        }
      }
      if ((bVar4 & 1) != 0) goto LAB_0d2033ed;
    }
    else {
LAB_0d2033ed:
      func_0x0412d680(lVar3);
      if (*(char *)(lVar3 + 0x60) == '\x01') {
        func_0x0412d6b0(lVar3);
LAB_0d203408:
        plVar12 = *(long **)(uVar13 + 0x68);
        plVar14 = plStack_4d8;
        if (plStack_4d8 + 2 == plVar12) {
          if (plStack_4d8 != plVar12) {
LAB_0d2034f9:
            do {
              plVar9 = (long *)plVar12[-1];
              if (plVar9 != (long *)0x0) {
                LOCK();
                plVar2 = plVar9 + 1;
                lVar3 = *plVar2;
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (lVar3 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                  FUN_0412c2d0(plVar9);
                }
              }
              plVar12 = plVar12 + -2;
            } while (plVar12 != plVar14);
          }
        }
        else {
          do {
            lVar3 = plVar14[2];
            lVar11 = plVar14[3];
            plVar14[2] = 0;
            plVar14[3] = 0;
            plVar9 = (long *)plVar14[1];
            *(int *)plVar14 = (int)lVar3;
            *(undefined4 *)((long)plVar14 + 4) = *(undefined4 *)((long)plVar14 + 0x14);
            *(int *)(plVar14 + 1) = (int)lVar11;
            *(undefined4 *)((long)plVar14 + 0xc) = *(undefined4 *)((long)plVar14 + 0x1c);
            if (plVar9 != (long *)0x0) {
              LOCK();
              plVar2 = plVar9 + 1;
              lVar3 = *plVar2;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (lVar3 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
                FUN_0412c2d0(plVar9);
              }
            }
            plVar9 = plVar14 + 4;
            plVar14 = plVar14 + 2;
          } while (plVar9 != plVar12);
          plVar12 = *(long **)(uVar13 + 0x68);
          if (plVar14 != plVar12) goto LAB_0d2034f9;
        }
        *(long **)(uVar13 + 0x68) = plVar14;
      }
      else {
        if (*(char *)(lVar3 + 0x58) == '\0') {
          iVar7 = *(int *)(lVar3 + 0x5c);
          func_0x0412d6b0(lVar3);
          if (iVar7 == 0) goto LAB_0d203408;
        }
        else {
          func_0x0412d6b0(lVar3);
        }
        plStack_4d8 = plStack_4d8 + 2;
      }
    }
    if (plVar10 != (long *)0x0) {
      LOCK();
      plVar12 = plVar10 + 1;
      lVar3 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        FUN_0412c2d0(plVar10);
      }
    }
    plVar12 = plStack_4d8;
    plVar10 = plStack_4b0;
    if (plStack_4d8 == *(long **)(uVar13 + 0x68)) goto LAB_0d2035a5;
  } while( true );
  FUN_04882e30();
LAB_0d20376c:
  iVar7 = func_0x04108328(&DAT_0f7b8fb8);
  if (iVar7 != 0) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
    param_1 = uStack_4e0;
  }
  goto LAB_0d202a3f;
}


