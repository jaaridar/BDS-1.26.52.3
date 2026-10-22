/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd5ef500 (ELF vaddr 0xd4ef500)
 * Label: caller-of-callee
 * Body:  [[0d5ef500, 0d5ef850] [0d5ef860, 0d5ef895] [0d5ef8a0, 0d5ef8ec] [0d5ef8f0, 0d5ef971] [0d5ef980, 0d5efa5d] [0d5efa60, 0d5efb1d] [0d5efb20, 0d5efd1c] [0d5efd20, 0d5efe79] [0d5efe80, 0d5f0200]]
 * Ghidra: FUN_0d5ef500
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_0d5ef500(long *param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  ulong *puStack_5f8;
  ulong *puStack_5f0;
  long lStack_5e8;
  long *plStack_5d8;
  uint uStack_5cc;
  ulong *puStack_5c8;
  ulong *puStack_5c0;
  long lStack_5b8;
  undefined1 auStack_5a8 [16];
  undefined8 uStack_598;
  ulong uStack_590;
  long lStack_588;
  undefined *puStack_578;
  ulong uStack_570;
  ulong uStack_568;
  undefined **ppuStack_558;
  uint uStack_518;
  byte bStack_508;
  undefined7 uStack_507;
  undefined8 uStack_4f8;
  long lStack_4f0;
  undefined1 auStack_4e8 [16];
  undefined1 auStack_4d8 [16];
  ulong **ppuStack_4c8;
  ulong uStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined *puStack_498;
  ulong **ppuStack_490;
  undefined **ppuStack_478;
  long alStack_468 [4];
  long *plStack_448;
  byte bStack_438;
  undefined5 uStack_437;
  undefined2 uStack_432;
  undefined1 uStack_430;
  undefined5 uStack_42f;
  undefined1 uStack_42a;
  undefined1 uStack_429;
  undefined1 uStack_428;
  undefined7 uStack_427;
  undefined1 uStack_420;
  undefined8 uStack_38;
  
  plVar6 = param_1 + 5;
  func_0x0412d550(plVar6);
  cVar2 = *(char *)(param_1[0x17] + 8);
  plStack_5d8 = plVar6;
  func_0x0412d610(plVar6);
  if (cVar2 == '\x01') {
    return '\x03';
  }
  uStack_598 = 0;
  uStack_590 = 0;
  lStack_588 = 0;
  bStack_438 = 0x1a;
  uStack_437 = 0x65746e6f63;
  uStack_432 = 0x746e;
  uStack_430 = 0x73;
  uStack_42f = 0x6e6f736a2e;
  uStack_42a = 0;
  cVar2 = (**(code **)(*param_1 + 0x48))(param_1,&bStack_438,&uStack_598,0);
  if ((bStack_438 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_427,uStack_428),
                    CONCAT26(uStack_432,CONCAT51(uStack_437,bStack_438)) & 0xfffffffffffffffe);
  }
  if (cVar2 != '\0') {
    func_0x04863060(auStack_5a8,0);
    func_0x0485e1c0(&bStack_438);
    uVar7 = uStack_598 >> 1 & 0x7f;
    lVar8 = (long)&uStack_598 + 1;
    if ((uStack_598 & 1) != 0) {
      uVar7 = uStack_590;
      lVar8 = lStack_588;
    }
    func_0x0485e650(&bStack_438,lVar8,uVar7,auStack_5a8,0);
    func_0x0485e2d0(&bStack_438);
    cVar2 = func_0x04864290(auStack_5a8);
    if ((cVar2 == '\0') || (cVar2 = func_0x04864260(auStack_5a8), cVar2 != '\0')) {
      func_0x0412d450(plStack_5d8);
      *(undefined1 *)(param_1[0x17] + 8) = 3;
      cVar2 = '\x02';
      func_0x0412d520(plStack_5d8);
    }
    else {
      puStack_5c8 = (ulong *)0x0;
      puStack_5c0 = (ulong *)0x0;
      lStack_5b8 = 0;
      uVar4 = func_0x04864680(auStack_5a8,&UNK_012ef64f);
      func_0x04865630(auStack_4d8,uVar4);
      func_0x048656b0(auStack_4e8,uVar4);
      while (cVar2 = func_0x04862c80(auStack_4d8,auStack_4e8), cVar2 == '\0') {
        uVar4 = func_0x04862b80(auStack_4d8);
        uVar4 = func_0x04864680(uVar4,&UNK_013aa12a);
        puStack_5f8 = (ulong *)((ulong)puStack_5f8 & 0xffffffffffff0000);
        func_0x04863cb0(&puStack_578,uVar4,&puStack_5f8);
        uStack_428 = (undefined1)uStack_568;
        uStack_427 = (undefined7)(uStack_568 >> 8);
        bStack_438 = (byte)puStack_578;
        uStack_437 = (undefined5)((ulong)puStack_578 >> 8);
        uStack_432 = (undefined2)((ulong)puStack_578 >> 0x30);
        uStack_430 = (undefined1)uStack_570;
        uStack_42f = (undefined5)(uStack_570 >> 8);
        uStack_42a = (undefined1)(uStack_570 >> 0x30);
        uStack_429 = (undefined1)(uStack_570 >> 0x38);
        puStack_578 = (undefined *)0x0;
        uStack_570 = 0;
        uStack_568 = 0;
        func_0x0535d9e0(&bStack_508,&puStack_5c8,puStack_5c8,puStack_5c0,&bStack_438);
        if ((bStack_438 & 1) != 0) {
          func_0x0412a280(CONCAT71(uStack_427,uStack_428),
                          CONCAT26(uStack_432,CONCAT51(uStack_437,bStack_438)) & 0xfffffffffffffffe)
          ;
        }
        if (((ulong)puStack_578 & 1) != 0) {
          func_0x0412a280(uStack_568,(ulong)puStack_578 & 0xfffffffffffffffe);
        }
        if (((ulong)puStack_5f8 & 1) != 0) {
          func_0x0412a280(lStack_5e8,(ulong)puStack_5f8 & 0xfffffffffffffffe);
        }
        func_0x04862ba0(auStack_4d8);
      }
      func_0x04862b40(auStack_4e8);
      func_0x04862b40(auStack_4d8);
      piVar5 = (int *)(**(code **)(*param_1 + 0x18))(param_1);
      if (*piVar5 == 1) {
LAB_0d5efbc7:
        uVar7 = 0;
      }
      else {
        uVar4 = func_0x04864680(auStack_5a8,&UNK_013236a8);
        iVar3 = func_0x04863e00(uVar4,0);
        if (iVar3 == 1) goto LAB_0d5efbc7;
        puStack_498 = &UNK_0f47c068;
        ppuStack_490 = &puStack_5c8;
        ppuStack_478 = &puStack_498;
        (**(code **)(*param_1 + 0x50))(param_1,&UNK_01e7bc28,&puStack_498,0);
        if (ppuStack_478 == &puStack_498) {
          lVar8 = 0x20;
LAB_0d5efc2a:
          (**(code **)(*ppuStack_478 + lVar8))();
        }
        else {
          lVar8 = 0x28;
          if (ppuStack_478 != (undefined **)0x0) goto LAB_0d5efc2a;
        }
        uVar7 = CONCAT71((int7)((ulong)&puStack_498 >> 8),1);
      }
      lVar12 = lStack_5b8;
      puVar9 = puStack_5c0;
      puVar10 = puStack_5c8;
      puStack_5c8 = (ulong *)0x0;
      puStack_5c0 = (ulong *)0x0;
      lStack_5b8 = 0;
      puStack_5f8 = puVar10;
      puStack_5f0 = puVar9;
      lStack_5e8 = lVar12;
      func_0x0412d450(plStack_5d8);
      lVar8 = param_1[0x17];
      cVar2 = *(char *)(lVar8 + 8);
      if (cVar2 != '\x01') {
        if (puVar10 != puVar9) {
          lStack_4f0 = lVar12;
          uStack_5cc = (uint)uVar7;
          puVar11 = puVar10;
          do {
            plVar6 = (long *)param_1[0x17];
            uStack_568 = puVar11[2];
            puStack_578 = (undefined *)*puVar11;
            uStack_570 = puVar11[1];
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = 0;
            uStack_428 = 0;
            uStack_427 = 0;
            uStack_420 = 0;
            bStack_438 = 0;
            uStack_437 = 0;
            uStack_432 = 0;
            uStack_430 = 0;
            uStack_42f = 0;
            uStack_42a = 0;
            uStack_429 = 0;
            (**(code **)(*plVar6 + 0x10))(plVar6,&puStack_578,&bStack_438);
            if ((bStack_438 & 1) != 0) {
              func_0x0412a280(CONCAT71(uStack_427,uStack_428),
                              CONCAT26(uStack_432,CONCAT51(uStack_437,bStack_438)) &
                              0xfffffffffffffffe);
            }
            if (((ulong)puStack_578 & 1) != 0) {
              func_0x0412a280(uStack_568,(ulong)puStack_578 & 0xfffffffffffffffe);
            }
            puVar11 = puVar11 + 3;
          } while (puVar11 != puVar9);
          lVar8 = param_1[0x17];
          uVar7 = (ulong)uStack_5cc;
          lVar12 = lStack_4f0;
        }
        *(undefined1 *)(lVar8 + 8) = 1;
      }
      func_0x0412d520(plStack_5d8);
      if (puVar10 != (ulong *)0x0) {
        for (; puVar10 != puVar9; puVar9 = puVar9 + -3) {
          if ((puVar9[-3] & 1) != 0) {
            func_0x0412a280(puVar9[-1],puVar9[-3] & 0xfffffffffffffffe);
          }
        }
        func_0x0412a280(puVar10,lVar12 - (long)puVar10);
      }
      if (((byte)uVar7 & cVar2 != '\x01') == 1) {
        cVar2 = (**(code **)(*param_1 + 0x28))(param_1);
        if (cVar2 != '\0') {
          uVar4 = (**(code **)(*param_1 + 0x18))(param_1);
          func_0x0d5f1f30(&puStack_578,uVar4,1);
          if (uStack_518 == 1) {
            plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
            if (plVar6 == (long *)0x0) {
              func_0x0eec74c0(0x20,0);
            }
            *plVar6 = (long)&UNK_0f47cd50;
            func_0x0d66a250(&bStack_438,&puStack_578);
            plVar6[1] = 0;
            plVar6[2] = 0;
            plVar6[3] = 0;
            func_0x0412f5e0(plVar6 + 1,&bStack_438,uStack_38);
          }
          else {
            plVar6 = (long *)0x0;
          }
          if (uStack_518 != 0xffffffff) {
            (**(code **)(&UNK_0f47ba40 + (ulong)uStack_518 * 8))(&bStack_438,&puStack_578);
          }
          if (plVar6 != (long *)0x0) {
            puStack_5f8 = (ulong *)0x0;
            puStack_5f0 = (ulong *)0x0;
            lStack_5e8 = 0;
            bStack_438 = 0x1a;
            uStack_437 = 0x65746e6f63;
            uStack_432 = 0x746e;
            uStack_430 = 0x73;
            uStack_42f = 0x6e6f736a2e;
            uStack_42a = 0;
            cVar2 = (**(code **)(*param_1 + 0x48))(param_1,&bStack_438,&puStack_5f8,0);
            if ((bStack_438 & 1) != 0) {
              func_0x0412a280(CONCAT71(uStack_427,uStack_428),
                              CONCAT26(uStack_432,CONCAT51(uStack_437,bStack_438)) &
                              0xfffffffffffffffe);
            }
            if (cVar2 == '\0') {
LAB_0d5f0012:
              func_0x048630e0(&bStack_438,1);
              uVar4 = func_0x04864680(auStack_5a8,&UNK_013236a8);
              func_0x04863790(uVar4,&bStack_438);
              func_0x04863610(&bStack_438);
              uVar7 = func_0x04864680(auStack_5a8,&UNK_012ef64f);
              func_0x048642c0(uVar7);
              puStack_578 = &UNK_0f47c1e8;
              bStack_438 = (byte)plStack_5d8;
              uStack_437 = (undefined5)((ulong)plStack_5d8 >> 8);
              uStack_432 = (undefined2)((ulong)plStack_5d8 >> 0x30);
              uStack_430 = 1;
              uStack_570 = uVar7;
              ppuStack_558 = &puStack_578;
              func_0x0412d550();
              (**(code **)(*(long *)param_1[0x17] + 0x30))
                        ((long *)param_1[0x17],&UNK_0d641c80,&puStack_578);
              func_0x0412d610(plStack_5d8);
              if (ppuStack_558 == &puStack_578) {
                lVar8 = 0x20;
LAB_0d5f00ec:
                (**(code **)(*ppuStack_558 + lVar8))();
              }
              else {
                lVar8 = 0x28;
                if (ppuStack_558 != (undefined **)0x0) goto LAB_0d5f00ec;
              }
              func_0x04868330(&bStack_438);
              func_0x04868370(&bStack_508,&bStack_438,auStack_5a8);
              func_0x0d66a2f0(plVar6,1,&bStack_508);
              if ((bStack_508 & 1) != 0) {
                func_0x0412a280(uStack_4f8,CONCAT71(uStack_507,bStack_508) & 0xfffffffffffffffe);
              }
              func_0x05f9f9a0(&bStack_438);
            }
            else {
              func_0x04863060(&puStack_578,0);
              func_0x0485e1c0(&bStack_438);
              cVar2 = func_0x0485e320(&bStack_438,&puStack_5f8,&puStack_578,0);
              if ((cVar2 == '\0') || (cVar2 = func_0x04864290(&puStack_578), cVar2 == '\0')) {
                func_0x0485e2d0(&bStack_438);
LAB_0d5f0005:
                func_0x04863610(&puStack_578);
                goto LAB_0d5f0012;
              }
              uVar4 = func_0x04864680(&puStack_578,&UNK_013236a8);
              iVar3 = func_0x04863e00(uVar4,0);
              func_0x0485e2d0(&bStack_438);
              if (iVar3 != 1) goto LAB_0d5f0005;
              func_0x04863610(&puStack_578);
            }
            if (((ulong)puStack_5f8 & 1) != 0) {
              func_0x0412a280(lStack_5e8,(ulong)puStack_5f8 & 0xfffffffffffffffe);
            }
            (**(code **)(*plVar6 + 8))(plVar6);
          }
        }
        cVar2 = '\0';
      }
      else {
        cVar2 = (cVar2 == '\x01') * '\x03';
      }
      puVar10 = puStack_5c8;
      puVar9 = puStack_5c0;
      if (puStack_5c8 != (ulong *)0x0) {
        for (; puVar10 != puVar9; puVar9 = puVar9 + -3) {
          if ((puVar9[-3] & 1) != 0) {
            func_0x0412a280(puVar9[-1],puVar9[-3] & 0xfffffffffffffffe);
          }
        }
        puStack_5c0 = puVar10;
        func_0x0412a280(puStack_5c8,lStack_5b8 - (long)puStack_5c8);
      }
    }
    func_0x04863610(auStack_5a8);
    goto joined_r0x0d5ef9c6;
  }
  puStack_5f8 = (ulong *)0x0;
  puStack_5f0 = (ulong *)0x0;
  lStack_5e8 = 0;
  ppuStack_4c8 = &puStack_5f8;
  uVar4 = (**(code **)(*param_1 + 0x18))(param_1);
  func_0x0ee35a00(&uStack_4c0,uVar4);
  uStack_4a8 = param_1[1];
  uStack_4a0 = (long *)param_1[2];
  if (param_1[2] != 0) {
    LOCK();
    plVar6 = (long *)(param_1[2] + 8);
    *plVar6 = *plVar6 + 1;
    UNLOCK();
  }
  plStack_448 = (long *)0x0;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *plVar6 = (long)&UNK_0f47c0e8;
  plVar6[1] = (long)ppuStack_4c8;
  plVar6[4] = lStack_4b0;
  plVar6[2] = uStack_4c0;
  plVar6[3] = lStack_4b8;
  uStack_4c0 = 0;
  lStack_4b8 = 0;
  lStack_4b0 = 0;
  *(undefined4 *)(plVar6 + 5) = (undefined4)uStack_4a8;
  *(undefined4 *)((long)plVar6 + 0x2c) = uStack_4a8._4_4_;
  *(undefined4 *)(plVar6 + 6) = (undefined4)uStack_4a0;
  *(undefined4 *)((long)plVar6 + 0x34) = uStack_4a0._4_4_;
  uStack_4a8 = 0;
  uStack_4a0 = (long *)0x0;
  plStack_448 = plVar6;
  (**(code **)(*param_1 + 0x50))(param_1,&UNK_01e7bc28,alStack_468,1);
  if (plStack_448 == alStack_468) {
    lVar8 = 0x20;
LAB_0d5ef7ae:
    (**(code **)(*plStack_448 + lVar8))();
    plVar6 = uStack_4a0;
  }
  else {
    lVar8 = 0x28;
    plVar6 = uStack_4a0;
    if (plStack_448 != (long *)0x0) goto LAB_0d5ef7ae;
  }
  uStack_4a0 = plVar6;
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0412c2d0(plVar6);
    }
  }
  if ((uStack_4c0 & 1) != 0) {
    func_0x0412a280(lStack_4b0,uStack_4c0 & 0xfffffffffffffffe);
  }
  func_0x0412d450(plStack_5d8);
  puVar9 = puStack_5f0;
  lVar8 = param_1[0x17];
  cVar2 = *(char *)(lVar8 + 8);
  if (cVar2 != '\x01') {
    if (puStack_5f8 != puStack_5f0) {
      uStack_5cc = CONCAT31(uStack_5cc._1_3_,cVar2);
      puVar10 = puStack_5f8;
      do {
        plVar6 = (long *)param_1[0x17];
        if ((*puVar10 & 1) == 0) {
          uStack_568 = puVar10[2];
          puStack_578 = (undefined *)*puVar10;
          uStack_570 = puVar10[1];
        }
        else {
          func_0x0412e5e0(&puStack_578,puVar10[2],puVar10[1]);
        }
        uStack_428 = 0;
        uStack_427 = 0;
        uStack_420 = 0;
        bStack_438 = 0;
        uStack_437 = 0;
        uStack_432 = 0;
        uStack_430 = 0;
        uStack_42f = 0;
        uStack_42a = 0;
        uStack_429 = 0;
        (**(code **)(*plVar6 + 0x10))(plVar6,&puStack_578,&bStack_438);
        if ((bStack_438 & 1) != 0) {
          func_0x0412a280(CONCAT71(uStack_427,uStack_428),
                          CONCAT26(uStack_432,CONCAT51(uStack_437,bStack_438)) & 0xfffffffffffffffe)
          ;
        }
        if (((ulong)puStack_578 & 1) != 0) {
          func_0x0412a280(uStack_568,(ulong)puStack_578 & 0xfffffffffffffffe);
        }
        puVar10 = puVar10 + 3;
      } while (puVar10 != puVar9);
      lVar8 = param_1[0x17];
      cVar2 = (char)uStack_5cc;
    }
    *(undefined1 *)(lVar8 + 8) = 1;
  }
  func_0x0412d520(plStack_5d8);
  puVar10 = puStack_5f8;
  puVar9 = puStack_5f0;
  if (puStack_5f8 != (ulong *)0x0) {
    for (; puVar10 != puVar9; puVar9 = puVar9 + -3) {
      if ((puVar9[-3] & 1) != 0) {
        func_0x0412a280(puVar9[-1],puVar9[-3] & 0xfffffffffffffffe);
      }
    }
    puStack_5f0 = puVar10;
    func_0x0412a280(puStack_5f8,lStack_5e8 - (long)puStack_5f8);
  }
  cVar2 = (cVar2 == '\x01') * '\x02' + '\x01';
joined_r0x0d5ef9c6:
  if ((uStack_598 & 1) != 0) {
    func_0x0412a280(lStack_588,uStack_598 & 0xfffffffffffffffe);
  }
  return cVar2;
}


