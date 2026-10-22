/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5f9b340 (ELF vaddr 0x5e9b340)
 * Label: caller-of-callee
 * Body:  [[05f9b340, 05f9b600] [05f9b610, 05f9b8c4] [05f9b8d0, 05f9b908] [05f9b910, 05f9b9d0] [05f9b9e0, 05f9bade] [05f9bae0, 05f9bb5f] [05f9bc70, 05f9bc8f]]
 * Ghidra: FUN_05f9b340
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_05f9b340(undefined8 param_1,long *param_2,ulong *param_3)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  byte bVar5;
  ulong *puVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  long *plVar10;
  uint *puVar11;
  byte *pbVar12;
  undefined8 uVar13;
  byte bVar14;
  uint *puVar15;
  bool bVar16;
  byte *pbStack_6e8;
  ulong uStack_6e0;
  byte *pbStack_6d8;
  long *plStack_6d0;
  long *plStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  byte bStack_6a8;
  undefined4 uStack_698;
  uint uStack_694;
  uint uStack_690;
  uint uStack_68c;
  long lStack_688;
  undefined8 uStack_678;
  undefined8 uStack_670;
  ulong uStack_668;
  undefined4 uStack_660;
  uint uStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  ulong uStack_648;
  uint uStack_638;
  uint uStack_634;
  uint uStack_630;
  uint uStack_62c;
  undefined8 uStack_628;
  ulong *puStack_618;
  byte bStack_610;
  undefined7 uStack_60f;
  undefined8 uStack_600;
  long lStack_5f8;
  ulong uStack_5f0;
  undefined1 auStack_5e8 [800];
  undefined8 uStack_2c8;
  int iStack_250;
  
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  FUN_0412d610(0xf5522b8);
  plVar10 = _DAT_0f5523a0;
  pbStack_6d8 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
    uVar13 = func_0x0eee02f0(0xf5522b8);
    func_0x041084d6(&DAT_0f7b8fb8);
    func_0x04886070(&uStack_678);
    func_0x0d20be50(auStack_5e8);
    func_0x0eee2d70(uVar13);
    pcVar3 = (code *)swi(3);
    uVar13 = (*pcVar3)();
    return uVar13;
  }
  bVar14 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar14 = *pbStack_6d8;
  }
  plVar1 = _DAT_0f5523a8;
  pbStack_6e8 = (byte *)0xf5522b8;
  uStack_6e0 = CONCAT71(uStack_6e0._1_7_,1);
  plStack_6d0 = plVar10;
  plStack_6c8 = _DAT_0f5523a8;
  if (((bVar14 & 1) == 0) &&
     (cVar7 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uVar8 = (**(code **)(*plVar1 + 0x690))(plVar1);
  func_0x0d207510(auStack_5e8,uVar8,0);
  pbStack_6d8 = (byte *)0x0;
  plStack_6d0 = (long *)0x0;
  if (plVar10 == (long *)0x0) {
LAB_05f9b480:
  }
  else {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
    plVar10 = plStack_6d0;
    plStack_6c8 = (long *)0x0;
    if (plStack_6d0 == (long *)0x0) goto LAB_05f9b480;
    LOCK();
    plVar1 = plStack_6d0 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 != 0) goto LAB_05f9b480;
    (**(code **)(*plStack_6d0 + 0x10))(plStack_6d0);
    func_0x0412c2d0(plVar10);
  }
  if ((char)uStack_6e0 == '\x01') {
    func_0x0eee02f0(pbStack_6e8);
  }
  plVar10 = (long *)(**(code **)(*param_2 + 0x558))(param_2);
  puVar11 = (uint *)(**(code **)(*plVar10 + 0x50))(plVar10);
  if ((*puVar11 & 1) == 0) {
    uStack_628 = *(undefined8 *)(puVar11 + 4);
    uStack_638 = *puVar11;
    uStack_634 = puVar11[1];
    uStack_630 = puVar11[2];
    uStack_62c = puVar11[3];
  }
  else {
    func_0x0412e5e0(&uStack_638,*(undefined8 *)(puVar11 + 4),*(undefined8 *)(puVar11 + 2));
  }
  (**(code **)(*param_2 + 0x8b0))(&bStack_610,param_2);
  puStack_618 = param_3;
  func_0x0d1f6ce0(&pbStack_6e8,&uStack_638,&bStack_610,auStack_5e8);
  uStack_678 = (uint *)0xe48783ca8524476c;
  uStack_670 = (uint *)&UNK_0140f690;
  uStack_668 = 1;
  uStack_660 = 0x8e;
  if (bStack_6a8 == 0) {
    func_0x0eedea30(&uStack_698);
    func_0x0eedeb80(2,0x2d,&pbStack_6e8,&uStack_698,&uStack_678);
    if ((uStack_698 & 1) != 0) {
      func_0x0412a280(lStack_688,CONCAT44(uStack_694,uStack_698) & 0xfffffffffffffffe);
    }
  }
  bVar5 = bStack_6a8;
  lVar2 = lStack_6c0;
  bVar14 = (byte)pbStack_6e8;
  if ((bStack_6a8 & 1) == 0) {
    if (lStack_6c0 != 0) {
      while (lVar2 != lStack_6b8) {
        func_0x048b3e80(lStack_6b8 + -0x40);
        lStack_6b8 = lStack_6b8 + -0x40;
      }
      lStack_6b8 = lVar2;
      func_0x0412a280(lStack_6c0,lStack_6b0 - lStack_6c0);
    }
    pbVar12 = pbStack_6d8;
    plVar10 = plStack_6d0;
    if (pbStack_6d8 != (byte *)0x0) {
      for (; pbVar12 != (byte *)plVar10; plVar10 = plVar10 + -10) {
        if (((char)plVar10[-1] == '\x01') && ((*(byte *)(plVar10 + -6) & 1) != 0)) {
          func_0x0412a280(plVar10[-4],plVar10[-6] & 0xfffffffffffffffe);
        }
      }
      plStack_6d0 = (long *)pbVar12;
      func_0x0412a280(pbStack_6d8,(long)plStack_6c8 - (long)pbStack_6d8);
    }
  }
  if ((bStack_610 & 1) == 0) {
    if ((uStack_638 & 1) != 0) goto LAB_05f9b6a6;
LAB_05f9b66c:
    bVar14 = bVar5 & bVar14 & iStack_250 == 1;
  }
  else {
    func_0x0412a280(uStack_600,CONCAT71(uStack_60f,bStack_610) & 0xfffffffffffffffe);
    if ((uStack_638 & 1) == 0) goto LAB_05f9b66c;
LAB_05f9b6a6:
    func_0x0412a280(uStack_628,CONCAT44(uStack_634,uStack_638) & 0xfffffffffffffffe);
    bVar14 = bVar5 & bVar14 & iStack_250 == 1;
  }
  if (bVar14 != 0) {
    func_0x05f9bca0(auStack_5e8);
    plVar10 = (long *)(**(code **)(*param_2 + 0x558))(param_2);
    puVar6 = puStack_618;
    pbVar12 = (byte *)(**(code **)(*plVar10 + 0x50))(plVar10);
    bVar16 = (*pbVar12 & 1) != 0;
    pbStack_6e8 = pbVar12 + 1;
    if (bVar16) {
      pbStack_6e8 = *(byte **)(pbVar12 + 0x10);
    }
    uStack_6e0 = (ulong)(*pbVar12 >> 1);
    if (bVar16) {
      uStack_6e0 = *(ulong *)(pbVar12 + 8);
    }
    pbStack_6d8 = &UNK_013c4a7c;
    plStack_6d0 = (long *)0x11;
    func_0x048ad670(&uStack_678,&pbStack_6e8,2,0x2f);
    if (puVar6 == &uStack_678) {
      if (((ulong)uStack_678 & 1) != 0) {
        func_0x0412a280(uStack_668,(ulong)uStack_678 & 0xfffffffffffffffe);
      }
    }
    else {
      if ((*puVar6 & 1) != 0) {
        func_0x0412a280(puVar6[2],*puVar6 & 0xfffffffffffffffe);
      }
      puVar6[2] = uStack_668;
      *(undefined4 *)puVar6 = (undefined4)uStack_678;
      *(undefined4 *)((long)puVar6 + 4) = uStack_678._4_4_;
      *(undefined4 *)(puVar6 + 1) = (undefined4)uStack_670;
      *(undefined4 *)((long)puVar6 + 0xc) = uStack_670._4_4_;
    }
    if ((*puVar6 & 1) == 0) {
      pbStack_6d8 = (byte *)puVar6[2];
      pbStack_6e8 = (byte *)*puVar6;
      uStack_6e0 = puVar6[1];
    }
    else {
      func_0x0412e5e0(&pbStack_6e8,puVar6[2],puVar6[1]);
    }
    uStack_2c8 = func_0x0eee3790(0);
    cVar7 = func_0x0d1ecd30(&pbStack_6e8,auStack_5e8);
    if (((ulong)pbStack_6e8 & 1) != 0) {
      func_0x0412a280(pbStack_6d8,(ulong)pbStack_6e8 & 0xfffffffffffffffe);
    }
    uVar13 = 1;
    if (cVar7 != '\0') goto LAB_05f9bb1f;
    uStack_678 = (uint *)0x0;
    uStack_670 = (uint *)0x0;
    uStack_668 = 0;
    if ((*puVar6 & 1) == 0) {
      uStack_648 = puVar6[2];
      uStack_658 = (uint)*puVar6;
      uStack_654 = *(undefined4 *)((long)puVar6 + 4);
      uStack_650 = (undefined4)puVar6[1];
      uStack_64c = *(undefined4 *)((long)puVar6 + 0xc);
    }
    else {
      func_0x0412e5e0(&uStack_658,puVar6[2],puVar6[1]);
    }
    func_0x09b9e700(&uStack_658,&uStack_678);
    if ((uStack_658 & 1) != 0) {
      func_0x0412a280(uStack_648,CONCAT44(uStack_654,uStack_658) & 0xfffffffffffffffe);
    }
    puVar11 = uStack_670;
    if (uStack_678 != uStack_670) {
      puVar15 = uStack_678;
      do {
        if ((DAT_0f7b8fb8 == '\0') && (iVar9 = func_0x04108328(&DAT_0f7b8fb8), iVar9 != 0)) {
          func_0x0ee5ea20(&DAT_0f7b8f98);
          func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
          func_0x0410844d(&DAT_0f7b8fb8);
        }
        if ((*puVar15 & 1) == 0) {
          lStack_688 = *(long *)(puVar15 + 4);
          uStack_698 = *puVar15;
          uStack_694 = puVar15[1];
          uStack_690 = puVar15[2];
          uStack_68c = puVar15[3];
        }
        else {
          func_0x0412e5e0(&uStack_698,*(undefined8 *)(puVar15 + 4),*(undefined8 *)(puVar15 + 2));
        }
        bVar16 = (uStack_698 & 1) == 0;
        lStack_5f8 = lStack_688;
        if (bVar16) {
          lStack_5f8 = (long)&uStack_698 + 1;
        }
        uStack_5f0 = (ulong)((byte)uStack_698 >> 1);
        if (!bVar16) {
          uStack_5f0 = CONCAT44(uStack_68c,uStack_690);
        }
        (**(code **)(_DAT_0f7b8f98 + 0x20))(&pbStack_6e8,&DAT_0f7b8f98,&lStack_5f8);
        lVar2 = lStack_6c0;
        if (bStack_6a8 == 0) {
          lVar4 = lStack_6b8;
          if (lStack_6c0 != 0) {
            while (lVar2 != lVar4) {
              func_0x048b3e80(lVar4 + -0x40);
              lVar4 = lVar4 + -0x40;
            }
            lStack_6b8 = lVar2;
            func_0x0412a280(lStack_6c0,lStack_6b0 - lStack_6c0);
          }
          pbVar12 = pbStack_6d8;
          plVar10 = plStack_6d0;
          if (pbStack_6d8 != (byte *)0x0) {
            for (; pbVar12 != (byte *)plVar10; plVar10 = plVar10 + -10) {
              if (((char)plVar10[-1] == '\x01') && ((*(byte *)(plVar10 + -6) & 1) != 0)) {
                func_0x0412a280(plVar10[-4],plVar10[-6] & 0xfffffffffffffffe);
              }
            }
            plStack_6d0 = (long *)pbVar12;
            func_0x0412a280(pbStack_6d8,(long)plStack_6c8 - (long)pbStack_6d8);
          }
        }
        if ((uStack_698 & 1) != 0) {
          func_0x0412a280(lStack_688,CONCAT44(uStack_694,uStack_698) & 0xfffffffffffffffe);
        }
        puVar15 = puVar15 + 6;
      } while (puVar15 != puVar11);
    }
    if (puStack_618 != (ulong *)&UNK_017224f0) {
      if ((*puStack_618 & 1) == 0) {
        *puStack_618 = 0;
        puStack_618[1] = 0;
        puStack_618[2] = 0;
      }
      else {
        func_0x04885120(puStack_618,&UNK_017224f1,0);
      }
    }
    puVar15 = uStack_678;
    puVar11 = uStack_670;
    if (uStack_678 != (uint *)0x0) {
      for (; puVar15 != puVar11; puVar11 = puVar11 + -6) {
        if ((puVar11[-6] & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(puVar11 + -2),
                          *(ulong *)(puVar11 + -6) & 0xfffffffffffffffe);
        }
      }
      uStack_670 = puVar15;
      func_0x0412a280(uStack_678,uStack_668 - (long)uStack_678);
    }
  }
  uVar13 = 0;
LAB_05f9bb1f:
  func_0x0d20be50(auStack_5e8);
  return uVar13;
}


