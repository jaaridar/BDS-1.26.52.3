/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5d904f0 (ELF vaddr 0x5c904f0)
 * Label: caller-of-callee
 * Body:  [[05d904f0, 05d90ba0] [05d90bb0, 05d90ea9]]
 * Ghidra: FUN_05d904f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_05d904f0(undefined4 *param_1,long *param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  byte **ppbVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined4 *puVar21;
  byte **ppbVar22;
  bool bVar23;
  long *plStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  long lStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  long lStack_950;
  byte bStack_948;
  long *plStack_938;
  long *plStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  long lStack_8f0;
  undefined4 uStack_8e8;
  uint uStack_8d8;
  undefined8 uStack_8c8;
  ulong uStack_8c0;
  long lStack_8b8;
  long lStack_8b0;
  undefined8 uStack_8a8;
  byte **ppbStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  byte bStack_868;
  undefined4 *puStack_860;
  undefined8 *puStack_858;
  undefined *puStack_850;
  undefined8 *puStack_848;
  byte *pbStack_840;
  ulong uStack_838;
  undefined *puStack_830;
  undefined8 uStack_828;
  undefined *puStack_820;
  undefined8 uStack_818;
  ulong uStack_440;
  undefined1 auStack_438 [1024];
  ulong uStack_38;
  
  puVar2 = (undefined8 *)*param_2;
  pbVar17 = (byte *)(**(code **)(*(long *)*puVar2 + 0x50))();
  bVar23 = (*pbVar17 & 1) != 0;
  pbStack_840 = pbVar17 + 1;
  if (bVar23) {
    pbStack_840 = *(byte **)(pbVar17 + 0x10);
  }
  uStack_838 = (ulong)(*pbVar17 >> 1);
  if (bVar23) {
    uStack_838 = *(ulong *)(pbVar17 + 8);
  }
  puStack_830 = &UNK_0139155b;
  uStack_828 = 6;
  puStack_820 = &UNK_013c5c09;
  uStack_818 = 0xb;
  func_0x049151c0(auStack_438,&pbStack_840,3,0x2f);
  uVar3 = *(undefined8 *)puVar2[1];
  uVar4 = ((undefined8 *)puVar2[1])[1];
  uStack_8d8 = (uint)uVar4 & 0xffff;
  uStack_928 = (byte **)CONCAT44(uStack_928._4_4_,(int)((ulong)uVar3 >> 0x20));
  uStack_918 = CONCAT44(uStack_918._4_4_,(int)((ulong)uVar3 >> 0x10)) & 0xffffffff0000ffff;
  uStack_908 = CONCAT44(uStack_908._4_4_,(int)uVar3) & 0xffffffff0000ffff;
  uStack_8f8 = (byte **)CONCAT44(uStack_8f8._4_4_,(uint)(ushort)((ulong)uVar4 >> 0x30));
  uStack_8e8 = (undefined4)((ulong)uVar4 >> 0x10);
  puStack_858 = puVar2;
  func_0x0470d9a0(&uStack_988,&UNK_01287ba2,0x28,0x122112,&uStack_928);
  bVar1 = *(byte *)(param_3 + 0x18);
  uVar19 = (ulong)bVar1;
  if ((bVar1 & 1) == 0) {
    puVar21 = (undefined4 *)(ulong)(bVar1 >> 1);
  }
  else {
    puVar21 = *(undefined4 **)(param_3 + 0x20);
  }
  ppbVar22 = (byte **)(puVar21 + 3);
  if (ppbVar22 < (byte **)0xfffffffffffffff8) {
    lStack_8b0 = param_3;
    puStack_860 = param_1;
    if (ppbVar22 < (byte **)0x17) {
      ppbStack_8a0 = (byte **)0x0;
      uStack_898 = 0;
      uStack_8a8 = (byte **)(ulong)(byte)((char)ppbVar22 * '\x02');
      uVar18 = (long)&uStack_8a8 + 1;
      if (puVar21 != (undefined4 *)0x0) {
        if ((bVar1 & 1) == 0) goto LAB_05d906ed;
LAB_05d9067e:
        lVar20 = *(long *)(lStack_8b0 + 0x28);
        goto LAB_05d906f9;
      }
    }
    else {
      uVar19 = 0x1a;
      if (((ulong)ppbVar22 | 7) != 0x17) {
        uVar19 = ((ulong)ppbVar22 | 7) + 1;
      }
      uVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19);
      if (uVar18 == 0) {
        func_0x0eec74c0(uVar19,0);
      }
      uStack_8a8 = (byte **)(uVar19 | 1);
      ppbStack_8a0 = ppbVar22;
      uStack_898 = uVar18;
      if ((bVar1 & 1) != 0) goto LAB_05d9067e;
LAB_05d906ed:
      lVar20 = lStack_8b0 + 0x19;
LAB_05d906f9:
      func_0x0eee2ee0(uVar18,lVar20,puVar21);
    }
    *(undefined8 *)(uVar18 + (long)puVar21) = 0x6375727473636d2e;
    *(undefined4 *)(uVar18 + 8 + (long)puVar21) = 0x65727574;
    *(undefined1 *)(uVar18 + 0xc + (long)puVar21) = 0;
    uStack_918 = (long)&uStack_988 + 1;
    uStack_910 = (ulong)uStack_988 >> 1 & 0x7f;
    if (((ulong)uStack_988 & 1) != 0) {
      uStack_910 = uStack_980;
      uStack_918 = uStack_978;
    }
    bVar23 = ((ulong)uStack_8a8 & 1) != 0;
    uStack_908 = (long)&uStack_8a8 + 1;
    if (bVar23) {
      uStack_908 = uStack_898;
    }
    uStack_920 = uStack_38;
    uStack_900 = (byte **)((ulong)uStack_8a8 >> 1 & 0x7f);
    if (bVar23) {
      uStack_900 = ppbStack_8a0;
    }
    ppbVar22 = &pbStack_840;
    uStack_928 = (byte **)auStack_438;
    func_0x049151c0(ppbVar22,&uStack_928,3,0x2f);
    puVar21 = puStack_860;
    if (((ulong)uStack_8a8 & 1) != 0) {
      func_0x0412a280(uStack_898,(ulong)uStack_8a8 & 0xfffffffffffffffe);
    }
    if (((ulong)uStack_988 & 1) != 0) {
      func_0x0412a280(uStack_978,(ulong)uStack_988 & 0xfffffffffffffffe);
    }
    (**(code **)(*(long *)puStack_858[2] + 0x30))(&plStack_990);
    if (plStack_990 == (long *)0x0) {
      *(undefined1 *)(puVar21 + 0x10) = 1;
      *(undefined1 *)puVar21 = 0;
      return puVar21;
    }
    uStack_8c8 = 0;
    uStack_8c0 = 0;
    lStack_8b8 = 0;
    puStack_850 = &UNK_0ef9fe28;
    puStack_848 = &uStack_8c8;
    uStack_928 = (byte **)((ulong)uStack_928 & 0xffffffffffff0000);
    func_0x0d6ba180(&uStack_928,plStack_990,&puStack_850,0);
    if (((ulong)uStack_928 & 1) != 0) {
      func_0x0412a280(uStack_918,(ulong)uStack_928 & 0xfffffffffffffffe);
    }
    plStack_938 = (long *)0x0;
    plStack_930 = (long *)0x0;
    uVar19 = uStack_440;
    if (DAT_0f7b8fb8 != '\0') goto LAB_05d908a7;
  }
  else {
    FUN_04882e30();
  }
  iVar16 = func_0x04108328(&DAT_0f7b8fb8);
  if (iVar16 != 0) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
    puVar21 = puStack_860;
  }
LAB_05d908a7:
  uStack_8a8 = ppbVar22;
  ppbStack_8a0 = (byte **)uVar19;
  (**(code **)(_DAT_0f7b8f98 + 0x10))(&uStack_988,&DAT_0f7b8f98,&uStack_8a8,&plStack_938,0x12f,0);
  uStack_8e8 = CONCAT31(uStack_8e8._1_3_,bStack_948);
  if (bStack_948 == 0) {
    uStack_928 = uStack_988;
    uStack_920 = uStack_980;
    uStack_918._0_4_ = (undefined4)uStack_978;
    uStack_918._4_4_ = uStack_978._4_4_;
    uStack_910._0_4_ = (undefined4)uStack_970;
    uStack_910._4_4_ = uStack_970._4_4_;
    uStack_908 = lStack_968;
    uStack_900._0_4_ = (undefined4)uStack_960;
    uStack_900._4_4_ = uStack_960._4_4_;
    uStack_8f8._0_4_ = (undefined4)uStack_958;
    uStack_8f8._4_4_ = uStack_958._4_4_;
    lStack_8f0 = lStack_950;
    func_0x05d91150(&uStack_928);
    lVar5 = lStack_8f0;
    uVar15 = uStack_8f8._4_4_;
    uVar14 = (undefined4)uStack_8f8;
    uVar13 = uStack_900._4_4_;
    uVar12 = (undefined4)uStack_900;
    lVar20 = uStack_908;
    uVar11 = uStack_910._4_4_;
    uVar10 = (undefined4)uStack_910;
    uVar9 = uStack_918._4_4_;
    uVar8 = (undefined4)uStack_918;
    uStack_988 = uStack_928;
    uStack_980 = uStack_920;
    uStack_918 = 0;
    uStack_910 = 0;
    uStack_908 = 0;
    uStack_900 = (byte **)0x0;
    uStack_8f8 = (byte **)0x0;
    lStack_8f0 = 0;
    uStack_978 = 0;
    uStack_970 = 0;
    lStack_968 = 0;
    uStack_960 = 0;
    uStack_958 = 0;
    lStack_950 = 0;
    *(undefined1 *)(puVar21 + 0x10) = 0;
    *puVar21 = (undefined4)uStack_928;
    puVar21[1] = uStack_928._4_4_;
    puVar21[2] = (undefined4)uStack_920;
    puVar21[3] = uStack_920._4_4_;
    puVar21[4] = uVar8;
    puVar21[5] = uVar9;
    puVar21[6] = uVar10;
    puVar21[7] = uVar11;
    *(long *)(puVar21 + 8) = lVar20;
    puVar21[10] = uVar12;
    puVar21[0xb] = uVar13;
    puVar21[0xc] = uVar14;
    puVar21[0xd] = uVar15;
    *(long *)(puVar21 + 0xe) = lVar5;
    func_0x048e6d60(&uStack_988);
    func_0x0ee38090(&uStack_928);
    func_0x048f9be0(&plStack_938);
  }
  else {
    uVar19 = uStack_8c8 >> 1 & 0x7f;
    lVar20 = (long)&uStack_8c8 + 1;
    if ((uStack_8c8 & 1) != 0) {
      uVar19 = uStack_8c0;
      lVar20 = lStack_8b8;
    }
    func_0x0ee76e70(&uStack_8a8,plStack_938,lVar20,uVar19);
    bStack_948 = bStack_868;
    if (bStack_868 != 1) {
      uStack_988 = uStack_8a8;
      uStack_980 = (ulong)ppbStack_8a0;
      uStack_978._0_4_ = (undefined4)uStack_898;
      uStack_978._4_4_ = uStack_898._4_4_;
      uStack_970._0_4_ = (undefined4)uStack_890;
      uStack_970._4_4_ = uStack_890._4_4_;
      lStack_968 = uStack_888;
      uStack_960._0_4_ = (undefined4)uStack_880;
      uStack_960._4_4_ = uStack_880._4_4_;
      uStack_958._0_4_ = (undefined4)uStack_878;
      uStack_958._4_4_ = uStack_878._4_4_;
      lStack_950 = uStack_870;
      func_0x05d91210(&uStack_988);
      lVar5 = lStack_950;
      uVar15 = uStack_958._4_4_;
      uVar14 = (undefined4)uStack_958;
      uVar13 = uStack_960._4_4_;
      uVar12 = (undefined4)uStack_960;
      lVar20 = lStack_968;
      uVar11 = uStack_970._4_4_;
      uVar10 = (undefined4)uStack_970;
      uVar9 = uStack_978._4_4_;
      uVar8 = (undefined4)uStack_978;
      uStack_8a8 = uStack_988;
      ppbStack_8a0 = (byte **)uStack_980;
      uStack_978 = 0;
      uStack_970 = 0;
      lStack_968 = 0;
      uStack_960 = 0;
      uStack_958 = 0;
      lStack_950 = 0;
      uStack_898 = 0;
      uStack_890 = 0;
      uStack_888 = 0;
      uStack_880 = 0;
      uStack_878 = 0;
      uStack_870 = 0;
      *(undefined1 *)(puVar21 + 0x10) = 0;
      *puVar21 = (undefined4)uStack_988;
      puVar21[1] = uStack_988._4_4_;
      puVar21[2] = (undefined4)uStack_980;
      puVar21[3] = uStack_980._4_4_;
      puVar21[4] = uVar8;
      puVar21[5] = uVar9;
      puVar21[6] = uVar10;
      puVar21[7] = uVar11;
      *(long *)(puVar21 + 8) = lVar20;
      puVar21[10] = uVar12;
      puVar21[0xb] = uVar13;
      puVar21[0xc] = uVar14;
      puVar21[0xd] = uVar15;
      *(long *)(puVar21 + 0xe) = lVar5;
      func_0x048e6d60(&uStack_8a8);
      lVar20 = uStack_960;
      if ((bStack_948 & 1) == 0) {
        lVar5 = uStack_958;
        if (uStack_960 != 0) {
          while (lVar20 != lVar5) {
            func_0x048b3e80(lVar5 + -0x40);
            lVar5 = lVar5 + -0x40;
          }
          uStack_958 = lVar20;
          func_0x0412a280(uStack_960,lStack_950 - uStack_960);
        }
        uVar18 = uStack_978;
        uVar19 = uStack_970;
        if (uStack_978 != 0) {
          for (; uVar18 != uVar19; uVar19 = uVar19 - 0x50) {
            if ((*(char *)(uVar19 - 8) == '\x01') && ((*(byte *)(uVar19 - 0x30) & 1) != 0)) {
              func_0x0412a280(*(undefined8 *)(uVar19 - 0x20),
                              *(ulong *)(uVar19 - 0x30) & 0xfffffffffffffffe);
            }
          }
          uStack_970 = uVar18;
          func_0x0412a280(uStack_978,lStack_968 - uStack_978);
        }
      }
    }
    ppbVar22 = uStack_900;
    if ((char)uStack_8e8 == '\0') {
      ppbVar6 = uStack_8f8;
      if (uStack_900 != (byte **)0x0) {
        while (ppbVar22 != ppbVar6) {
          func_0x048b3e80(ppbVar6 + -8);
          ppbVar6 = ppbVar6 + -8;
        }
        uStack_8f8 = ppbVar22;
        func_0x0412a280(uStack_900,lStack_8f0 - (long)uStack_900);
      }
      uVar18 = uStack_918;
      uVar19 = uStack_910;
      if (uStack_918 != 0) {
        for (; uVar18 != uVar19; uVar19 = uVar19 - 0x50) {
          if ((*(char *)(uVar19 - 8) == '\x01') && ((*(byte *)(uVar19 - 0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(uVar19 - 0x20),
                            *(ulong *)(uVar19 - 0x30) & 0xfffffffffffffffe);
          }
        }
        uStack_910 = uVar18;
        func_0x0412a280(uStack_918,uStack_908 - uStack_918);
      }
    }
    if (plStack_938 != (long *)0x0) {
      func_0x0ee56810(&uStack_928,&plStack_938);
      ppbVar22 = uStack_900;
      if ((char)uStack_8e8 == '\0') {
        ppbVar6 = uStack_8f8;
        if (uStack_900 != (byte **)0x0) {
          while (ppbVar22 != ppbVar6) {
            func_0x048b3e80(ppbVar6 + -8);
            ppbVar6 = ppbVar6 + -8;
          }
          uStack_8f8 = ppbVar22;
          func_0x0412a280(uStack_900,lStack_8f0 - (long)uStack_900);
        }
        uVar18 = uStack_918;
        uVar19 = uStack_910;
        if (uStack_918 != 0) {
          for (; uVar18 != uVar19; uVar19 = uVar19 - 0x50) {
            if ((*(char *)(uVar19 - 8) == '\x01') && ((*(byte *)(uVar19 - 0x30) & 1) != 0)) {
              func_0x0412a280(*(undefined8 *)(uVar19 - 0x20),
                              *(ulong *)(uVar19 - 0x30) & 0xfffffffffffffffe);
            }
          }
          uStack_910 = uVar18;
          func_0x0412a280(uStack_918,uStack_908 - uStack_918);
        }
      }
    }
    plVar7 = plStack_930;
    plStack_930 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    plVar7 = plStack_938;
    plStack_938 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    if (bStack_868 != 0) {
      func_0x05d64840(lStack_8b0 + 0x30,plStack_990);
      *(undefined1 *)(puVar21 + 0x10) = 1;
      *(undefined1 *)puVar21 = 1;
    }
  }
  if ((uStack_8c8 & 1) != 0) {
    func_0x0412a280(lStack_8b8,uStack_8c8 & 0xfffffffffffffffe);
  }
  plVar7 = plStack_990;
  plStack_990 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  return puVar21;
}


