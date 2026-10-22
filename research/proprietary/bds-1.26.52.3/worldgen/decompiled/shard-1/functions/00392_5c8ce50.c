/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5d8ce50 (ELF vaddr 0x5c8ce50)
 * Label: caller-of-callee
 * Body:  [[05d8ce50, 05d8d5cd] [05d8d61c, 05d8d63c] [05d8d651, 05d8d662]]
 * Ghidra: FUN_05d8ce50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_05d8ce50(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  byte ***pppbVar14;
  ulong uVar15;
  byte **ppbVar16;
  long *plVar17;
  bool bVar18;
  undefined1 uStack_951;
  undefined8 uStack_950;
  ulong uStack_948;
  byte *pbStack_940;
  long *plStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined *puStack_920;
  ulong uStack_918;
  undefined4 uStack_910;
  undefined1 auStack_908 [4];
  undefined4 uStack_904;
  undefined4 uStack_900;
  undefined4 uStack_8fc;
  byte **ppbStack_8f8;
  long lStack_8f0;
  byte **ppbStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  ulong uStack_8d0;
  undefined8 uStack_8c8;
  ulong uStack_8c0;
  ulong uStack_8b8;
  long lStack_8b0;
  uint uStack_8a8;
  uint uStack_898;
  byte **ppbStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  byte **ppbStack_868;
  undefined8 uStack_860;
  byte bStack_858;
  undefined7 uStack_857;
  undefined8 uStack_848;
  byte *pbStack_840;
  ulong uStack_838;
  undefined *puStack_830;
  undefined8 uStack_828;
  undefined *puStack_820;
  undefined8 uStack_818;
  undefined8 uStack_440;
  byte *apbStack_438 [128];
  undefined8 uStack_38;
  
  lVar12 = *param_1;
  pbVar8 = (byte *)(**(code **)(**(long **)(lVar12 + 0x20) + 0x50))();
  bVar18 = (*pbVar8 & 1) != 0;
  pbStack_840 = pbVar8 + 1;
  if (bVar18) {
    pbStack_840 = *(byte **)(pbVar8 + 0x10);
  }
  uStack_838 = (ulong)(*pbVar8 >> 1);
  if (bVar18) {
    uStack_838 = *(ulong *)(pbVar8 + 8);
  }
  puStack_830 = &UNK_0139155b;
  uStack_828 = 6;
  puStack_820 = &UNK_013c5c09;
  uStack_818 = 0xb;
  ppbVar16 = apbStack_438;
  func_0x049151c0(ppbVar16,&pbStack_840,3,0x2f);
  puVar2 = *(undefined8 **)(lVar12 + 0x28);
  uVar10 = *puVar2;
  uVar3 = puVar2[1];
  uStack_898 = (uint)uVar3 & 0xffff;
  ppbStack_8e8 = (byte **)CONCAT44(ppbStack_8e8._4_4_,(int)((ulong)uVar10 >> 0x20));
  uStack_8d8 = (byte **)(CONCAT44(uStack_8d8._4_4_,(int)((ulong)uVar10 >> 0x10)) &
                        0xffffffff0000ffff);
  uStack_8c8 = CONCAT44(uStack_8c8._4_4_,(int)uVar10) & 0xffffffff0000ffff;
  uStack_8b8 = CONCAT44(uStack_8b8._4_4_,(uint)(ushort)((ulong)uVar3 >> 0x30));
  uStack_8a8 = (uint)((ulong)uVar3 >> 0x10);
  func_0x0470d9a0(&uStack_950,&UNK_01287ba2,0x28,0x122112,&ppbStack_8e8);
  bVar11 = *(byte *)(param_2 + 0x18);
  if ((bVar11 & 1) == 0) {
    plVar17 = (long *)(ulong)(bVar11 >> 1);
  }
  else {
    plVar17 = *(long **)(param_2 + 0x20);
  }
  uVar13 = (long)plVar17 + 0xc;
  lStack_8f0 = param_2;
  if (uVar13 < 0xfffffffffffffff8) {
    if (uVar13 < 0x17) {
      puStack_920 = (undefined *)0x0;
      uStack_918 = 0;
      uStack_928 = (ulong)(byte)((char)uVar13 * '\x02');
      uVar9 = (long)&uStack_928 + 1;
      if (plVar17 != (long *)0x0) {
        if ((bVar11 & 1) == 0) goto LAB_05d8d01b;
LAB_05d8cfb9:
        lVar12 = *(long *)(lStack_8f0 + 0x28);
        goto LAB_05d8d024;
      }
    }
    else {
      uVar15 = 0x1a;
      if ((uVar13 | 7) != 0x17) {
        uVar15 = (uVar13 | 7) + 1;
      }
      uVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
      if (uVar9 == 0) {
        func_0x0eec74c0(uVar15,0);
      }
      uStack_928 = uVar15 | 1;
      puStack_920 = (undefined *)uVar13;
      uStack_918 = uVar9;
      if ((bVar11 & 1) != 0) goto LAB_05d8cfb9;
LAB_05d8d01b:
      lVar12 = lStack_8f0 + 0x19;
LAB_05d8d024:
      func_0x0eee2ee0(uVar9,lVar12,plVar17);
    }
    *(undefined8 *)(uVar9 + (long)plVar17) = 0x6375727473636d2e;
    *(undefined4 *)(uVar9 + 8 + (long)plVar17) = 0x65727574;
    *(undefined1 *)(uVar9 + 0xc + (long)plVar17) = 0;
    uStack_8d8 = (byte **)((long)&uStack_950 + 1);
    uStack_8d0 = (ulong)uStack_950 >> 1 & 0x7f;
    if (((ulong)uStack_950 & 1) != 0) {
      uStack_8d0 = uStack_948;
      uStack_8d8 = (byte **)pbStack_940;
    }
    bVar18 = (uStack_928 & 1) != 0;
    uStack_8c8 = (long)&uStack_928 + 1;
    if (bVar18) {
      uStack_8c8 = uStack_918;
    }
    uStack_8e0 = uStack_38;
    uStack_8c0 = uStack_928 >> 1 & 0x7f;
    if (bVar18) {
      uStack_8c0 = (ulong)puStack_920;
    }
    ppbStack_8e8 = ppbVar16;
    func_0x049151c0(&pbStack_840,&ppbStack_8e8,3,0x2f);
    if ((uStack_928 & 1) != 0) {
      func_0x0412a280(uStack_918,uStack_928 & 0xfffffffffffffffe);
    }
    if (((ulong)uStack_950 & 1) != 0) {
      func_0x0412a280(pbStack_940,(ulong)uStack_950 & 0xfffffffffffffffe);
    }
    func_0x0412d550(0xf5522b8);
    LOCK();
    _DAT_0f552388 = _DAT_0f552388 + 1;
    UNLOCK();
    func_0x0412d610(0xf5522b8);
    plStack_938 = _DAT_0f5523a0;
    pbStack_940 = _DAT_0f552398;
    if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
      uVar10 = func_0x0eee02f0(0xf5522b8);
      FUN_041084d6(&DAT_0f7b8fb8);
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))(plVar17);
      }
      if (((uint)auStack_908 & 1) != 0) {
        func_0x0412a280(ppbStack_8f8,CONCAT44(uStack_904,auStack_908) & 0xfffffffffffffffe);
      }
      _Unwind_Resume(uVar10);
      pcVar4 = (code *)swi(3);
      uVar13 = (*pcVar4)();
      return uVar13;
    }
    bVar11 = 1;
    if (_DAT_0f5523a0 != (long *)0x0) {
      LOCK();
      _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
      UNLOCK();
      bVar11 = *pbStack_940;
    }
    uVar10 = _DAT_0f5523a8;
    uStack_950 = (byte **)0xf5522b8;
    uStack_948 = CONCAT71(uStack_948._1_7_,1);
    uStack_930 = _DAT_0f5523a8;
    if (((bVar11 & 1) == 0) &&
       (cVar5 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
       cVar5 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_860 = uStack_440;
    uStack_951 = 0;
    ppbStack_868 = &pbStack_840;
    func_0x0d7781b0(&ppbStack_8e8,uVar10,&ppbStack_868,&uStack_951);
    ppbStack_888 = (byte **)0x0;
    uStack_880 = 0;
    uStack_878 = 0;
    uStack_928 = 0x62b39289b064de50;
    puStack_920 = &UNK_0140f690;
    uStack_918 = 1;
    uStack_910 = 0xa1;
    pppbVar14 = &ppbStack_8e8;
    bVar11 = (byte)uStack_8a8;
    if ((byte)uStack_8a8 == 0) {
      func_0x0eedea30(&bStack_858);
      FUN_0eedeb80(2,0x2d,&ppbStack_8e8,&bStack_858,&uStack_928);
      if ((bStack_858 & 1) != 0) {
        func_0x0412a280(uStack_848,CONCAT71(uStack_857,bStack_858) & 0xfffffffffffffffe);
      }
      pppbVar14 = &ppbStack_888;
      bVar11 = (byte)uStack_8a8;
      if ((uStack_8a8 & 1) != 0) {
        pppbVar14 = &ppbStack_8e8;
      }
    }
    ppbStack_8f8 = pppbVar14[2];
    auStack_908 = *(undefined1 (*) [4])pppbVar14;
    uStack_904 = *(undefined4 *)((long)pppbVar14 + 4);
    uStack_900 = *(undefined4 *)(pppbVar14 + 1);
    uStack_8fc = *(undefined4 *)((long)pppbVar14 + 0xc);
    *pppbVar14 = (byte **)0x0;
    pppbVar14[1] = (byte **)0x0;
    pppbVar14[2] = (byte **)0x0;
    if (((ulong)ppbStack_888 & 1) != 0) {
      func_0x0412a280(uStack_878,(ulong)ppbStack_888 & 0xfffffffffffffffe);
      bVar11 = (byte)uStack_8a8;
    }
    uVar13 = uStack_8c0;
    if ((bVar11 & 1) == 0) {
      uVar15 = uStack_8b8;
      if (uStack_8c0 != 0) {
        while (uVar13 != uVar15) {
          func_0x048b3e80(uVar15 - 0x40);
          uVar15 = uVar15 - 0x40;
        }
        uStack_8b8 = uVar13;
        func_0x0412a280(uStack_8c0,lStack_8b0 - uStack_8c0);
      }
      uVar15 = (ulong)uStack_8d8;
      uVar13 = uStack_8d0;
      if (uStack_8d8 != (byte **)0x0) {
        for (; uVar15 != uVar13; uVar13 = uVar13 - 0x50) {
          if ((*(char *)(uVar13 - 8) == '\x01') && ((*(byte *)(uVar13 - 0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(uVar13 - 0x20),
                            *(ulong *)(uVar13 - 0x30) & 0xfffffffffffffffe);
          }
        }
        uStack_8d0 = uVar15;
        uVar13 = uStack_8c8 - (long)uStack_8d8;
        goto LAB_05d8d3d5;
      }
    }
    else if (((ulong)ppbStack_8e8 & 1) != 0) {
      uVar13 = (ulong)ppbStack_8e8 & 0xfffffffffffffffe;
LAB_05d8d3d5:
      func_0x0412a280(uStack_8d8,uVar13);
    }
    plVar17 = plStack_938;
    pbStack_940 = (byte *)0x0;
    plStack_938 = (long *)0x0;
    if (plVar17 == (long *)0x0) {
LAB_05d8d438:
    }
    else {
      LOCK();
      plVar1 = plVar17 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
      plVar17 = plStack_938;
      uStack_930 = 0;
      if (plStack_938 == (long *)0x0) goto LAB_05d8d438;
      LOCK();
      plVar1 = plStack_938 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 != 0) goto LAB_05d8d438;
      (**(code **)(*plStack_938 + 0x10))(plStack_938);
      func_0x0412c2d0(plVar17);
    }
    if ((char)uStack_948 == '\x01') {
      func_0x0eee02f0(uStack_950);
    }
    bVar18 = ((uint)auStack_908 & 1) != 0;
    uStack_8d8 = (byte **)(auStack_908 + 1);
    if (bVar18) {
      uStack_8d8 = ppbStack_8f8;
    }
    uStack_8d0 = (ulong)(auStack_908[0] >> 1);
    if (bVar18) {
      uStack_8d0 = CONCAT44(uStack_8fc,uStack_900);
    }
    ppbStack_8e8 = (byte **)&UNK_0ef9fd98;
    uStack_8e0 = 0;
    func_0x0d6c71b0(&uStack_950,&ppbStack_8e8);
    ppbVar16 = &pbStack_840;
    plVar17 = (long *)uStack_950;
    if (DAT_0f7b8fb8 != '\0') goto LAB_05d8d4ad;
  }
  else {
    func_0x04882e30();
  }
  iVar7 = func_0x04108328(&DAT_0f7b8fb8);
  if (iVar7 != 0) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
LAB_05d8d4ad:
  uStack_948 = uStack_440;
  uStack_950 = ppbVar16;
  cVar5 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&uStack_950);
  if (cVar5 == '\0') {
    uVar13 = 0;
  }
  else {
    uVar6 = func_0x05d64840(lStack_8f0 + 0x30,plVar17);
    uVar13 = (ulong)uVar6;
  }
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))(plVar17);
  }
  if (((uint)auStack_908 & 1) != 0) {
    func_0x0412a280(ppbStack_8f8,CONCAT44(uStack_904,auStack_908) & 0xfffffffffffffffe);
  }
  return uVar13;
}


