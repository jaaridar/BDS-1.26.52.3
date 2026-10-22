/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc979740 (ELF vaddr 0xc879740)
 * Label: caller-of-callee
 * Body:  [[0c979740, 0c9798a4] [0c9798b0, 0c97a3de] [0c97a3e0, 0c97a679]]
 * Ghidra: FUN_0c979740
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0c979740(long param_1,byte *param_2)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  bool bVar11;
  uint uStack_8dc;
  undefined1 auStack_8c8 [16];
  undefined1 auStack_8b8 [16];
  ulong uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  char cStack_868;
  byte *pbStack_858;
  byte *pbStack_850;
  long lStack_848;
  undefined4 uStack_840;
  byte bStack_838;
  undefined7 uStack_837;
  undefined8 uStack_828;
  byte bStack_818;
  undefined7 uStack_817;
  undefined8 uStack_808;
  byte bStack_7f8;
  undefined1 uStack_7f7;
  undefined1 uStack_7f6;
  undefined5 uStack_7f5;
  undefined8 uStack_7e8;
  undefined *puStack_7e0;
  long *plStack_7d8;
  long *plStack_7d0;
  byte *pbStack_7c8;
  ulong uStack_7c0;
  byte *pbStack_7b8;
  ulong uStack_7b0;
  undefined8 *puStack_7a8;
  ulong uStack_7a0;
  byte *pbStack_798;
  ulong uStack_790;
  undefined8 *puStack_788;
  ulong uStack_780;
  undefined8 *puStack_778;
  ulong uStack_770;
  undefined *apuStack_768 [2];
  undefined *puStack_758;
  ulong uStack_750;
  ulong uStack_748;
  uint uStack_738;
  undefined4 uStack_734;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  ulong uStack_728;
  long alStack_710 [8];
  undefined *apuStack_6d0 [6];
  undefined8 uStack_6a0;
  undefined1 auStack_638 [16];
  undefined *apuStack_628 [2];
  undefined *puStack_618;
  undefined1 auStack_610 [64];
  long alStack_5d0 [8];
  undefined *apuStack_590 [6];
  undefined8 uStack_560;
  undefined8 uStack_4f8;
  ulong uStack_4f0;
  undefined8 uStack_4e8;
  undefined1 uStack_4e0;
  uint7 uStack_4df;
  undefined1 uStack_4d8;
  uint7 uStack_4d7;
  undefined1 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_f8;
  undefined1 auStack_f0 [192];
  
  pbVar1 = param_2 + 1;
  bVar11 = (*param_2 & 1) == 0;
  uStack_4f8 = *(byte **)(param_2 + 0x10);
  if (bVar11) {
    uStack_4f8 = pbVar1;
  }
  uStack_4f0 = (ulong)(*param_2 >> 1);
  if (!bVar11) {
    uStack_4f0 = *(ulong *)(param_2 + 8);
  }
  uStack_560 = 0;
  puStack_7e0 = &UNK_0eeed250;
  apuStack_590[0] = &UNK_0eeed250;
  func_0x0ee5df20(apuStack_628,&UNK_0ef44650,&uStack_4f8,8);
  apuStack_628[0] = &UNK_0ef445e8;
  apuStack_590[0] = &UNK_0ef44638;
  puStack_618 = &UNK_0ef44610;
  func_0x04863060(auStack_8b8,0);
  func_0x04863060(auStack_8c8,0);
  func_0x0485e1c0(auStack_f0);
  cVar5 = func_0x0485e6a0(auStack_f0,apuStack_628,auStack_8b8,0);
  if ((cVar5 == '\0') || (cVar5 = func_0x04864270(auStack_8b8), cVar5 == '\0')) {
    uStack_8dc = 0;
  }
  else {
    func_0x04865630(&pbStack_858,auStack_8b8);
    func_0x048656b0(&uStack_8a8,auStack_8b8);
    uStack_8dc = 0;
    while (cVar5 = func_0x04862c80(&pbStack_858,&uStack_8a8), cVar5 == '\0') {
      uVar7 = func_0x04862b80(&pbStack_858);
      uStack_4d8 = 0;
      uStack_4d7 = 0;
      uStack_4d0 = 0;
      uStack_4e8 = 0;
      uStack_4e0 = 0;
      uStack_4df = 0;
      uStack_4f8 = (byte *)0x0;
      uStack_4f0 = 0;
      uStack_4c8 = 0;
      uStack_4c0 = 0;
      uStack_4b8 = 0;
      cVar5 = func_0x0ee36690(uVar7,&uStack_4f8,&UNK_01dd2ee0);
      if (cVar5 != '\0') {
        if ((*(long *)(param_1 + 0x120) == 0) &&
           (cVar5 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_014adc19),
           cVar5 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if ((**(char **)(param_1 + 0x120) == '\0') &&
           (cVar5 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_014adc19),
           cVar5 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        (**(code **)(**(long **)(param_1 + 0x130) + 0x40))
                  (&plStack_7d8,*(long **)(param_1 + 0x130),&uStack_4f8,0);
        if (plStack_7d8 == (long *)0x0) {
          func_0x04864a50(auStack_8c8,uVar7);
        }
        else if (*(int *)(**(long **)(*plStack_7d8 + 8) + 0xb0) == 3) {
          func_0x0ee364f0(apuStack_768,**(long **)(*plStack_7d8 + 8) + 0x128);
          if ((uStack_4c8 & 1) == 0) {
            uStack_728 = uStack_4b8;
            uStack_738 = (uint)uStack_4c8;
            uStack_734 = uStack_4c8._4_4_;
            uStack_730 = (undefined4)uStack_4c0;
            uStack_72c = uStack_4c0._4_4_;
          }
          else {
            func_0x0412e5e0(&uStack_738,uStack_4b8,uStack_4c0);
          }
          cVar5 = func_0x0ee37ba0(&uStack_4f8,apuStack_768);
          if (cVar5 == '\0') {
            func_0x04863060(auStack_638,0);
            func_0x0ee36c90(apuStack_768,auStack_638);
            func_0x04864a50(auStack_8c8,auStack_638);
            uVar7 = func_0x04863610(auStack_638);
            uStack_8dc = (uint)CONCAT71((int7)((ulong)uVar7 >> 8),1);
          }
          else {
            func_0x04864a50(auStack_8c8,uVar7);
          }
          if ((uStack_738 & 1) != 0) {
            func_0x0412a280(uStack_728,CONCAT44(uStack_734,uStack_738) & 0xfffffffffffffffe);
          }
          if ((uStack_748 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_748 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_748 = 0;
          if ((uStack_750 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_750 & 0xff00ffffffffffff) - 8)
            ;
          }
        }
        else {
          func_0x04864a50(auStack_8c8,uVar7);
        }
        plVar4 = plStack_7d0;
        if (plStack_7d0 != (long *)0x0) {
          LOCK();
          plVar2 = plStack_7d0 + 1;
          lVar3 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar3 == 0) {
            (**(code **)(*plStack_7d0 + 0x10))(plStack_7d0);
            func_0x0412c2d0(plVar4);
          }
        }
      }
      if ((uStack_4c8 & 1) != 0) {
        func_0x0412a280(uStack_4b8,uStack_4c8 & 0xfffffffffffffffe);
      }
      if ((uStack_4d7 & 0x800000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(CONCAT71(uStack_4d7,uStack_4d8) & 0xff00ffffffffffff) - 8);
      }
      uStack_4d8 = 0;
      uStack_4d7 = 0;
      if ((uStack_4df & 0x800000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(CONCAT71(uStack_4df,uStack_4e0) & 0xff00ffffffffffff) - 8);
      }
      func_0x04862ba0(&pbStack_858);
    }
    func_0x04862b40(&uStack_8a8);
    func_0x04862b40(&pbStack_858);
  }
  if (alStack_5d0[0] != 0) {
    func_0x0ee5ca80(auStack_610,1);
    func_0x0ee56810(&uStack_4f8,alStack_5d0);
    if ((char)uStack_4b8 == '\0') {
      func_0x048e6d60(&uStack_4f8);
    }
  }
  if ((uStack_8dc & 1) == 0) goto LAB_0c97a474;
  bVar11 = (*param_2 & 1) == 0;
  pbVar9 = *(byte **)(param_2 + 0x10);
  if (bVar11) {
    pbVar9 = pbVar1;
  }
  uVar8 = (ulong)(*param_2 >> 1);
  if (!bVar11) {
    uVar8 = *(ulong *)(param_2 + 8);
  }
  func_0x0eee2dd0(&uStack_4f8,0,0x408);
  uVar10 = 0;
  if (uVar8 < 0x400) {
    if (uVar8 != 0) {
      func_0x0eee2f00(&uStack_4f8,pbVar9,uVar8);
    }
    uStack_f8 = uVar8;
    *(undefined1 *)((long)&uStack_4f8 + uVar8) = 0;
    uVar10 = uStack_f8;
    if (6 < uStack_f8 - 0x3f9) goto LAB_0c979d6b;
    uStack_4f8 = (byte *)((ulong)uStack_4f8 & 0xffffffffffffff00);
    uStack_f8 = 0;
  }
  else {
LAB_0c979d6b:
    *(undefined4 *)((long)&uStack_4f8 + uVar10 + 3) = 0x70756b63;
    *(undefined4 *)((long)&uStack_4f8 + uVar10) = 0x6361622e;
    lVar3 = uStack_f8 + 7;
    uStack_f8 = uStack_f8 + 7;
    *(undefined1 *)((long)&uStack_4f8 + lVar3) = 0;
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7b8fb8), iVar6 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    FUN_0410844d(&DAT_0f7b8fb8);
  }
  uStack_770 = uStack_f8;
  puStack_778 = &uStack_4f8;
  cVar5 = (**(code **)(_DAT_0f7b8f98 + 0x18))(&DAT_0f7b8f98,&puStack_778);
  if (cVar5 != '\0') {
    if ((DAT_0f7b8fb8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7b8fb8), iVar6 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      FUN_0410844d(&DAT_0f7b8fb8);
    }
    uStack_780 = uStack_f8;
    puStack_788 = &uStack_4f8;
    (**(code **)(_DAT_0f7b8f98 + 0x20))(apuStack_768,&DAT_0f7b8f98,&puStack_788);
    pbStack_858 = (byte *)0x4e11f0a723cb56a9;
    pbStack_850 = &UNK_0140f690;
    lStack_848 = 1;
    uStack_840 = 0x6f1;
    if ((byte)uStack_728 == 0) {
      uStack_8a8 = 0;
      uStack_8a0 = 0;
      uStack_898 = 0;
      func_0x0eedeb80(2,0x2d,apuStack_768,&uStack_8a8,&pbStack_858);
      if ((uStack_8a8 & 1) != 0) {
        func_0x0412a280(uStack_898,uStack_8a8 & 0xfffffffffffffffe);
      }
    }
    if (((byte)uStack_728 & 1) == 0) {
      func_0x048e6d60(apuStack_768);
    }
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7b8fb8), iVar6 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    FUN_0410844d(&DAT_0f7b8fb8);
  }
  bVar11 = (*param_2 & 1) == 0;
  pbStack_798 = *(byte **)(param_2 + 0x10);
  if (bVar11) {
    pbStack_798 = pbVar1;
  }
  uStack_790 = (ulong)(*param_2 >> 1);
  if (!bVar11) {
    uStack_790 = *(ulong *)(param_2 + 8);
  }
  uStack_7a0 = uStack_f8;
  puStack_7a8 = &uStack_4f8;
  (**(code **)(_DAT_0f7b8f98 + 0x48))(apuStack_768,&DAT_0f7b8f98,&pbStack_798,&puStack_7a8);
  pbStack_858 = (byte *)0x4e11f0a723cb56a9;
  pbStack_850 = &UNK_0140f690;
  lStack_848 = 1;
  uStack_840 = 0x6f3;
  if ((byte)uStack_728 == '\0') {
    uStack_8a8 = 0;
    uStack_8a0 = 0;
    uStack_898 = 0;
    func_0x0eedeb80(2,0x2d,apuStack_768,&uStack_8a8,&pbStack_858);
    if ((uStack_8a8 & 1) != 0) {
      func_0x0412a280(uStack_898,uStack_8a8 & 0xfffffffffffffffe);
    }
  }
  if ((uStack_728 & 1) == 0) {
    func_0x048e6d60(apuStack_768);
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7b8fb8), iVar6 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    FUN_0410844d(&DAT_0f7b8fb8);
  }
  bVar11 = (*param_2 & 1) == 0;
  pbStack_7b8 = *(byte **)(param_2 + 0x10);
  if (bVar11) {
    pbStack_7b8 = pbVar1;
  }
  uStack_7b0 = (ulong)(*param_2 >> 1);
  if (!bVar11) {
    uStack_7b0 = *(ulong *)(param_2 + 8);
  }
  (**(code **)(_DAT_0f7b8f98 + 0x20))(apuStack_768,&DAT_0f7b8f98,&pbStack_7b8);
  pbStack_858 = (byte *)0x4e11f0a723cb56a9;
  pbStack_850 = &UNK_0140f690;
  lStack_848 = 1;
  uStack_840 = 0x6f4;
  if ((byte)uStack_728 == '\0') {
    uStack_8a8 = 0;
    uStack_8a0 = 0;
    uStack_898 = 0;
    func_0x0eedeb80(2,0x2d,apuStack_768,&uStack_8a8,&pbStack_858);
    if ((uStack_8a8 & 1) != 0) {
      func_0x0412a280(uStack_898,uStack_8a8 & 0xfffffffffffffffe);
    }
  }
  if ((uStack_728 & 1) == 0) {
    func_0x048e6d60(apuStack_768);
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7b8fb8), iVar6 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    FUN_0410844d(&DAT_0f7b8fb8);
  }
  bVar11 = (*param_2 & 1) == 0;
  pbStack_7c8 = *(byte **)(param_2 + 0x10);
  if (bVar11) {
    pbStack_7c8 = pbVar1;
  }
  uStack_7c0 = (ulong)(*param_2 >> 1);
  if (!bVar11) {
    uStack_7c0 = *(ulong *)(param_2 + 8);
  }
  (**(code **)(_DAT_0f7b8f98 + 0x40))(apuStack_768,&DAT_0f7b8f98,&pbStack_7c8);
  pbStack_858 = (byte *)0x4e11f0a723cb56a9;
  pbStack_850 = &UNK_0140f690;
  lStack_848 = 1;
  uStack_840 = 0x6f5;
  if ((byte)uStack_728 == 0) {
    uStack_8a8 = 0;
    uStack_8a0 = 0;
    uStack_898 = 0;
    func_0x0eedeb80(2,0x2d,apuStack_768,&uStack_8a8,&pbStack_858);
    if ((uStack_8a8 & 1) != 0) {
      func_0x0412a280(uStack_898,uStack_8a8 & 0xfffffffffffffffe);
    }
  }
  if (((byte)uStack_728 & 1) == 0) {
    func_0x048e6d60(apuStack_768);
  }
  bVar11 = (*param_2 & 1) != 0;
  pbStack_858 = pbVar1;
  if (bVar11) {
    pbStack_858 = *(byte **)(param_2 + 0x10);
  }
  pbStack_850 = (byte *)(ulong)(*param_2 >> 1);
  if (bVar11) {
    pbStack_850 = *(byte **)(param_2 + 8);
  }
  uStack_6a0 = 0;
  apuStack_6d0[0] = puStack_7e0;
  func_0x0ee5df20(apuStack_768,&UNK_0ef46fd8,&pbStack_858,0x10);
  apuStack_768[0] = &UNK_0ef46f70;
  apuStack_6d0[0] = &UNK_0ef46fc0;
  puStack_758 = &UNK_0ef46f98;
  bStack_7f8 = 2;
  uStack_7f7 = 9;
  uStack_7f6 = 0;
  func_0x04869b40(&pbStack_858,&bStack_7f8);
  if ((bStack_7f8 & 1) != 0) {
    func_0x0412a280(uStack_7e8,
                    CONCAT53(uStack_7f5,CONCAT12(uStack_7f6,CONCAT11(uStack_7f7,bStack_7f8))) &
                    0xfffffffffffffffe);
  }
  func_0x04869bd0(&pbStack_858,&puStack_758,auStack_8c8);
  if (alStack_710[0] != 0) {
    func_0x0ee5ca80(&uStack_750,1);
    func_0x0ee56810(&uStack_8a8,alStack_710);
    if (cStack_868 == '\0') {
      func_0x048e6d60(&uStack_8a8);
    }
  }
  if ((bStack_818 & 1) != 0) {
    func_0x0412a280(uStack_808,CONCAT71(uStack_817,bStack_818) & 0xfffffffffffffffe);
  }
  pbVar1 = pbStack_858;
  if ((bStack_838 & 1) != 0) {
    func_0x0412a280(uStack_828,CONCAT71(uStack_837,bStack_838) & 0xfffffffffffffffe);
    pbVar1 = pbStack_858;
  }
  pbStack_858 = pbVar1;
  pbVar9 = pbStack_850;
  if (pbVar1 != (byte *)0x0) {
    for (; pbVar1 != pbVar9; pbVar9 = pbVar9 + -0x18) {
      if ((pbVar9[-0x18] & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(pbVar9 + -8),*(ulong *)(pbVar9 + -0x18) & 0xfffffffffffffffe
                       );
      }
    }
    pbStack_850 = pbVar1;
    func_0x0412a280(pbStack_858,lStack_848 - (long)pbStack_858);
  }
  apuStack_768[0] = &UNK_0ef47050;
  apuStack_6d0[0] = &UNK_0ef470a0;
  puStack_758 = &UNK_0ef47078;
  func_0x0ee5c730(&uStack_750);
  func_0x0413c8a0(apuStack_768,&UNK_0ef46fe0);
  func_0x04138180(apuStack_6d0);
LAB_0c97a474:
  func_0x0485e2d0(auStack_f0);
  func_0x04863610(auStack_8c8);
  func_0x04863610(auStack_8b8);
  apuStack_628[0] = &UNK_0ef446c8;
  apuStack_590[0] = &UNK_0ef44718;
  puStack_618 = &UNK_0ef446f0;
  func_0x0ee5c730(auStack_610);
  func_0x0413c8a0(apuStack_628,&UNK_0ef44658);
  func_0x04138180(apuStack_590);
  return uStack_8dc;
}


