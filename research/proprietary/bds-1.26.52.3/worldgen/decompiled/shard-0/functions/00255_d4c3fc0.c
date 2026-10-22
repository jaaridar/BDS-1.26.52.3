/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd5c3fc0 (ELF vaddr 0xd4c3fc0)
 * Label: caller-of-callee
 * Body:  [[0d5c3fc0, 0d5c4a40] [0d5c4a50, 0d5c5134]]
 * Ghidra: FUN_0d5c3fc0
 */


/* WARNING: Removing unreachable block (ram,0x0d5c445d) */
/* WARNING: Removing unreachable block (ram,0x0d5c446f) */
/* WARNING: Removing unreachable block (ram,0x0d5c4481) */
/* WARNING: Removing unreachable block (ram,0x0d5c44aa) */
/* WARNING: Removing unreachable block (ram,0x0d5c44bc) */
/* WARNING: Removing unreachable block (ram,0x0d5c4e9a) */
/* WARNING: Removing unreachable block (ram,0x0d5c4eac) */
/* WARNING: Removing unreachable block (ram,0x0d5c4ebd) */
/* WARNING: Removing unreachable block (ram,0x0d5c4ee6) */
/* WARNING: Removing unreachable block (ram,0x0d5c4ef8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d5c3fc0(long param_1,char param_2,byte *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long *plVar13;
  ulong uVar14;
  undefined *puVar15;
  char cVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  byte *pbVar21;
  undefined **unaff_R15;
  bool bVar22;
  undefined4 uStack_b38;
  undefined2 uStack_b34;
  undefined2 uStack_b32;
  undefined4 uStack_b30;
  undefined2 uStack_b2c;
  undefined1 uStack_b2a;
  undefined1 uStack_b29;
  ulong uStack_b28;
  undefined8 uStack_b18;
  undefined *puStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  long lStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  long lStack_ae0;
  byte bStack_ad8;
  long *plStack_ac8;
  long *plStack_ac0;
  undefined **ppuStack_ab8;
  undefined *puStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  long lStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  long lStack_a80;
  undefined8 uStack_a78;
  undefined2 uStack_a70;
  undefined4 uStack_a6c;
  undefined8 uStack_a68;
  long lStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined4 uStack_a38;
  undefined8 *puStack_a30;
  undefined **ppuStack_a28;
  undefined *puStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  long lStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  long lStack_9f0;
  ulong uStack_9e8;
  long lStack_9d8;
  long *plStack_9d0;
  undefined *puStack_9c8;
  undefined8 uStack_9c0;
  undefined4 uStack_9b8;
  byte *pbStack_9b0;
  undefined **ppuStack_9a8;
  undefined *puStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  long lStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  long lStack_970;
  byte bStack_968;
  undefined **ppuStack_958;
  undefined *puStack_950;
  undefined8 uStack_948;
  undefined8 *puStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 *puStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined2 uStack_910;
  undefined8 uStack_908;
  long lStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  long lStack_8a0;
  undefined *puStack_898;
  undefined **ppuStack_890;
  undefined *puStack_888;
  undefined **ppuStack_880;
  undefined *puStack_878;
  undefined *puStack_870;
  ulong uStack_868;
  undefined **ppuStack_860;
  undefined *puStack_858;
  undefined **ppuStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  ulong uStack_838;
  undefined *puStack_830;
  undefined *puStack_828;
  undefined *puStack_820;
  long lStack_818;
  long lStack_810;
  long lStack_808;
  byte bStack_800;
  undefined *puStack_440;
  undefined *apuStack_438 [128];
  undefined *puStack_38;
  
  pbStack_9b0 = param_3;
  if ((*(long *)(param_1 + 0x50) == 0) &&
     (cVar16 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013ba8bf),
     cVar16 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((**(char **)(param_1 + 0x50) == '\0') &&
     (cVar16 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013ba8bf),
     cVar16 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    FUN_04890760();
LAB_0d5c5044:
    iVar17 = func_0x04108328(&DAT_0f7b8fb8);
    if (iVar17 != 0) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
      unaff_R15 = apuStack_438;
    }
  }
  else {
    lStack_9d8 = param_1 + 8;
    func_0x0d5c5250(&plStack_9d0);
    puStack_9c8 = &UNK_0f5354a8;
    LOCK();
    UNLOCK();
    LOCK();
    uStack_9c0 = 0;
    UNLOCK();
    LOCK();
    uStack_9b8 = 0;
    UNLOCK();
    bVar22 = (*(byte *)(param_1 + 0x38) & 1) != 0;
    uStack_840 = (undefined *)(param_1 + 0x39);
    if (bVar22) {
      uStack_840 = *(undefined **)(param_1 + 0x48);
    }
    uStack_838 = (ulong)(*(byte *)(param_1 + 0x38) >> 1);
    if (bVar22) {
      uStack_838 = *(ulong *)(param_1 + 0x40);
    }
    puStack_830 = &UNK_0136f96a;
    puStack_828 = (undefined *)0xe;
    puStack_820 = &UNK_013be2c9;
    lStack_818 = 3;
    unaff_R15 = apuStack_438;
    func_0x049151c0(unaff_R15,&uStack_840,3,0x2f);
    if (DAT_0f7b8fb8 == '\0') goto LAB_0d5c5044;
  }
  uStack_848 = puStack_38;
  ppuStack_850 = unaff_R15;
  (**(code **)(_DAT_0f7b8f98 + 0x158))(&uStack_840,&DAT_0f7b8f98,&ppuStack_850);
  puStack_38 = puStack_440;
  if (puStack_440 != (undefined *)0xffffffffffffffff) {
    func_0x0eee2f00(apuStack_438,&uStack_840);
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar17 = func_0x04108328(&DAT_0f7b8fb8), iVar17 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
    unaff_R15 = apuStack_438;
  }
  puStack_858 = puStack_38;
  ppuStack_860 = unaff_R15;
  (**(code **)(_DAT_0f7b8f98 + 0x80))(&uStack_840,&DAT_0f7b8f98,&ppuStack_860);
  ppuStack_958 = (undefined **)0xf5dfc55b0f8a0bbe;
  puStack_950 = &UNK_0140f690;
  uStack_948 = 1;
  puStack_940 = (undefined8 *)CONCAT44(puStack_940._4_4_,0x76);
  if (bStack_800 == 0) {
    uStack_b18 = unaff_R15;
    FUN_0470d9a0(&ppuStack_ab8,&UNK_011cbee3,0x22,0xc,&uStack_b18);
    func_0x0eedeb80(8,0xd,&uStack_840,&ppuStack_ab8,&ppuStack_958);
    if (((ulong)ppuStack_ab8 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_aa8,(ulong)ppuStack_ab8 & 0xfffffffffffffffe);
    }
  }
  lVar2 = lStack_818;
  if ((bStack_800 & 1) == 0) {
    if (lStack_818 != 0) {
      while (lVar2 != lStack_810) {
        func_0x048b3e80(lStack_810 + -0x40);
        lStack_810 = lStack_810 + -0x40;
      }
      lStack_810 = lVar2;
      thunk_FUN_0ee326a0(lStack_818,lStack_808 - lStack_818);
    }
    puVar15 = puStack_830;
    puVar1 = puStack_828;
    if (puStack_830 != (undefined *)0x0) {
      for (; puVar15 != puVar1; puVar1 = puVar1 + -0x50) {
        if ((puVar1[-8] == '\x01') && ((puVar1[-0x30] & 1) != 0)) {
          thunk_FUN_0ee326a0(*(undefined8 *)(puVar1 + -0x20),
                             *(ulong *)(puVar1 + -0x30) & 0xfffffffffffffffe);
        }
      }
      puStack_828 = puVar15;
      thunk_FUN_0ee326a0(puStack_830,(long)puStack_820 - (long)puStack_830);
    }
  }
  ppuStack_958 = &puStack_950;
  puStack_940 = &uStack_938;
  puStack_928 = &uStack_920;
  uStack_908 = *(undefined8 *)(param_1 + 0x68);
  lStack_900 = *(long *)(param_1 + 0x70);
  if (lStack_900 == 0) {
    uStack_8f8 = *(undefined8 *)(param_1 + 0x78);
  }
  else {
    LOCK();
    *(long *)(lStack_900 + 8) = *(long *)(lStack_900 + 8) + 1;
    UNLOCK();
    uStack_8f8 = *(undefined8 *)(param_1 + 0x78);
  }
  puStack_a30 = (undefined8 *)(param_1 + 0x78);
  uStack_8a8 = 0xffffffffffffffff;
  uStack_8b0 = 0;
  uStack_8b8 = 0;
  uStack_8c0 = 0;
  uStack_8c8 = 0;
  uStack_8d0 = 0;
  uStack_8d8 = 0;
  uStack_8e0 = 0;
  uStack_8e8 = 0;
  uStack_8f0 = 0;
  uStack_910 = 0;
  uStack_918 = 0;
  uStack_920 = 0;
  uStack_930 = 0;
  uStack_938 = 0;
  uStack_948 = 0;
  puStack_950 = (undefined *)0x0;
  func_0x0ee35a00(&uStack_840,lStack_9d8);
  puStack_870 = (undefined *)((long)&uStack_840 + 1);
  uStack_868 = (ulong)uStack_840 >> 1 & 0x7f;
  if (((ulong)uStack_840 & 1) != 0) {
    uStack_868 = uStack_838;
    puStack_870 = puStack_830;
  }
  puStack_878 = puStack_38;
  ppuStack_880 = apuStack_438;
  iVar17 = FUN_0ee3eaf0(&puStack_870,&ppuStack_880,&puStack_9c8,1,&ppuStack_958);
  if (((ulong)uStack_840 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_830,(ulong)uStack_840 & 0xfffffffffffffffe);
  }
  if (iVar17 != 0) goto LAB_0d5c500d;
  if (param_2 == '\x02') {
    if ((_DAT_0f7219a8 & 1) == 0) {
      uStack_b28 = _DAT_0f7219b8;
      uStack_b38 = _DAT_0f7219a8;
      uStack_b34 = (undefined2)uRam000000000f7219ac;
      uStack_b32 = (undefined2)((uint)uRam000000000f7219ac >> 0x10);
      uStack_b30 = uRam000000000f7219b0;
      uStack_b2c = (undefined2)uRam000000000f7219b4;
      uStack_b2a = (undefined1)((uint)uRam000000000f7219b4 >> 0x10);
      uStack_b29 = (undefined1)((uint)uRam000000000f7219b4 >> 0x18);
    }
    else {
      puVar18 = (undefined8 *)0xf7219b0;
      puVar19 = (undefined8 *)&DAT_0f7219b8;
LAB_0d5c4687:
      FUN_0412e5e0(&uStack_b38,*puVar19,*puVar18);
    }
  }
  else if (param_2 == '\x01') {
    uStack_b38 = CONCAT31((int3)_DAT_0128397b,0x1a);
    uStack_b34 = (undefined2)((uint5)_DAT_0128397b >> 0x18);
    uStack_b32 = (undefined2)_DAT_01283980;
    uStack_b30 = (undefined4)(CONCAT53(_UNK_01283983,_DAT_01283980) >> 0x10);
    uStack_b2c = (undefined2)((uint5)_UNK_01283983 >> 0x18);
    uStack_b2a = 0;
  }
  else if (param_2 == '\0') {
    if ((_DAT_0f721990 & 1) != 0) {
      puVar18 = (undefined8 *)0xf721998;
      puVar19 = (undefined8 *)&DAT_0f7219a0;
      goto LAB_0d5c4687;
    }
    uStack_b28 = _DAT_0f7219a0;
    uStack_b38 = _DAT_0f721990;
    uStack_b34 = (undefined2)uRam000000000f721994;
    uStack_b32 = (undefined2)((uint)uRam000000000f721994 >> 0x10);
    uStack_b30 = uRam000000000f721998;
    uStack_b2c = (undefined2)uRam000000000f72199c;
    uStack_b2a = (undefined1)((uint)uRam000000000f72199c >> 0x10);
    uStack_b29 = (undefined1)((uint)uRam000000000f72199c >> 0x18);
  }
  else {
    uStack_b38 = 0;
    uStack_b34 = 0;
    uStack_b32 = 0;
    uStack_b30 = 0;
    uStack_b2c = 0;
    uStack_b2a = 0;
    uStack_b29 = 0;
    uStack_b28 = 0;
  }
  bVar22 = (uStack_b38 & 1) != 0;
  uStack_aa8 = (long)&uStack_b38 + 1;
  if (bVar22) {
    uStack_aa8 = uStack_b28;
  }
  uStack_aa0 = (long *)(ulong)((byte)uStack_b38 >> 1);
  if (bVar22) {
    uStack_aa0 = (long *)CONCAT17(uStack_b29,CONCAT16(uStack_b2a,CONCAT24(uStack_b2c,uStack_b30)));
  }
  puStack_ab0 = puStack_38;
  ppuStack_ab8 = apuStack_438;
  func_0x049151c0(&uStack_840,&ppuStack_ab8,2,0x2f);
  plStack_ac8 = (long *)0x0;
  plStack_ac0 = (long *)0x0;
  if ((DAT_0f7b8fb8 == '\0') && (iVar17 = func_0x04108328(&DAT_0f7b8fb8), iVar17 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  puStack_9a0 = puStack_440;
  ppuStack_9a8 = (undefined **)&uStack_840;
  (**(code **)(_DAT_0f7b8f98 + 0x10))(&uStack_b18,&DAT_0f7b8f98,&ppuStack_9a8,&plStack_ac8,0x10f,0);
  uStack_a78 = CONCAT71(uStack_a78._1_7_,bStack_ad8);
  if (bStack_ad8 == 0) {
    ppuStack_ab8 = uStack_b18;
    puStack_ab0 = puStack_b10;
    uStack_aa8._0_4_ = (undefined4)uStack_b08;
    uStack_aa8._4_4_ = uStack_b08._4_4_;
    uStack_aa0._0_4_ = (undefined4)uStack_b00;
    uStack_aa0._4_4_ = uStack_b00._4_4_;
    lStack_a98 = lStack_af8;
    uStack_a90._0_4_ = (undefined4)uStack_af0;
    uStack_a90._4_4_ = uStack_af0._4_4_;
    uStack_a88._0_4_ = (undefined4)uStack_ae8;
    uStack_a88._4_4_ = uStack_ae8._4_4_;
    lStack_a80 = lStack_ae0;
    func_0x0d5d7390(&ppuStack_ab8,&uStack_840);
    lStack_9f0 = lStack_a80;
    uVar12 = uStack_a88._4_4_;
    uVar11 = (undefined4)uStack_a88;
    uVar10 = uStack_a90._4_4_;
    uVar9 = (undefined4)uStack_a90;
    lStack_a08 = lStack_a98;
    uVar8 = uStack_aa0._4_4_;
    uVar7 = (undefined4)uStack_aa0;
    uVar6 = uStack_aa8._4_4_;
    uVar5 = (undefined4)uStack_aa8;
    uStack_b18 = ppuStack_ab8;
    puStack_b10 = puStack_ab0;
    uStack_aa8 = 0;
    uStack_aa0 = (long *)0x0;
    lStack_a98 = 0;
    uStack_a90 = (long *)0x0;
    uStack_a88 = (long *)0x0;
    lStack_a80 = 0;
    uStack_b08 = 0;
    uStack_b00 = 0;
    lStack_af8 = 0;
    uStack_af0 = 0;
    uStack_ae8 = 0;
    lStack_ae0 = 0;
    uStack_9e8 = uStack_9e8 & 0xffffffffffffff00;
    ppuStack_a28 = ppuStack_ab8;
    puStack_a20 = puStack_ab0;
    uStack_a18 = CONCAT44(uVar6,uVar5);
    uStack_a10 = CONCAT44(uVar8,uVar7);
    uStack_a00 = CONCAT44(uVar10,uVar9);
    uStack_9f8 = CONCAT44(uVar12,uVar11);
    func_0x048e6d60(&uStack_b18);
  }
  else {
    bVar22 = (*pbStack_9b0 & 1) != 0;
    pbVar21 = pbStack_9b0 + 1;
    if (bVar22) {
      pbVar21 = *(byte **)(pbStack_9b0 + 0x10);
    }
    uVar20 = (ulong)(*pbStack_9b0 >> 1);
    if (bVar22) {
      uVar20 = *(ulong *)(pbStack_9b0 + 8);
    }
    func_0x0ee76e70(&ppuStack_9a8,plStack_ac8,pbVar21,uVar20);
    bStack_ad8 = bStack_968;
    if (bStack_968 == 0) {
      uStack_b18 = ppuStack_9a8;
      puStack_b10 = puStack_9a0;
      uStack_b08._0_4_ = (undefined4)uStack_998;
      uStack_b08._4_4_ = uStack_998._4_4_;
      uStack_b00._0_4_ = (undefined4)uStack_990;
      uStack_b00._4_4_ = uStack_990._4_4_;
      lStack_af8 = lStack_988;
      uStack_af0._0_4_ = (undefined4)uStack_980;
      uStack_af0._4_4_ = uStack_980._4_4_;
      uStack_ae8._0_4_ = (undefined4)uStack_978;
      uStack_ae8._4_4_ = uStack_978._4_4_;
      lStack_ae0 = lStack_970;
      func_0x0d5d74d0(&uStack_b18);
      lStack_9f0 = lStack_ae0;
      uVar12 = uStack_ae8._4_4_;
      uVar11 = (undefined4)uStack_ae8;
      uVar10 = uStack_af0._4_4_;
      uVar9 = (undefined4)uStack_af0;
      lStack_a08 = lStack_af8;
      uVar8 = uStack_b00._4_4_;
      uVar7 = (undefined4)uStack_b00;
      uVar6 = uStack_b08._4_4_;
      uVar5 = (undefined4)uStack_b08;
      ppuStack_9a8 = uStack_b18;
      puStack_9a0 = puStack_b10;
      uStack_b08 = 0;
      uStack_b00 = 0;
      lStack_af8 = 0;
      uStack_af0 = 0;
      uStack_ae8 = 0;
      lStack_ae0 = 0;
      uStack_998 = 0;
      uStack_990 = 0;
      lStack_988 = 0;
      uStack_980 = 0;
      uStack_978 = 0;
      lStack_970 = 0;
      uStack_9e8 = uStack_9e8 & 0xffffffffffffff00;
      ppuStack_a28 = uStack_b18;
      puStack_a20 = puStack_b10;
      uStack_a18 = CONCAT44(uVar6,uVar5);
      uStack_a10 = CONCAT44(uVar8,uVar7);
      uStack_a00 = CONCAT44(uVar10,uVar9);
      uStack_9f8 = CONCAT44(uVar12,uVar11);
      func_0x048e6d60(&ppuStack_9a8);
      lVar2 = uStack_af0;
    }
    else {
      ppuStack_a28 = (undefined **)0x0;
      puStack_a20 = (undefined *)0x0;
      uStack_a18 = 0;
      uStack_a10 = 0;
      lStack_a08 = 0;
      uStack_a00 = 0;
      uStack_9f8 = 0;
      lStack_9f0 = 0;
      uStack_9e8 = 1;
      lVar2 = uStack_af0;
    }
    uStack_af0 = lVar2;
    if ((bStack_ad8 & 1) == 0) {
      lVar3 = uStack_ae8;
      if (lVar2 != 0) {
        while (lVar2 != lVar3) {
          func_0x048b3e80(lVar3 + -0x40);
          lVar3 = lVar3 + -0x40;
        }
        uStack_ae8 = lVar2;
        thunk_FUN_0ee326a0(uStack_af0,lStack_ae0 - uStack_af0);
      }
      lVar3 = uStack_b08;
      lVar2 = uStack_b00;
      if (uStack_b08 != 0) {
        for (; lVar3 != lVar2; lVar2 = lVar2 + -0x50) {
          if ((*(char *)(lVar2 + -8) == '\x01') && ((*(byte *)(lVar2 + -0x30) & 1) != 0)) {
            thunk_FUN_0ee326a0(*(undefined8 *)(lVar2 + -0x20),
                               *(ulong *)(lVar2 + -0x30) & 0xfffffffffffffffe);
          }
        }
        uStack_b00 = lVar3;
        thunk_FUN_0ee326a0(uStack_b08,lStack_af8 - uStack_b08);
      }
    }
  }
  plVar13 = uStack_a90;
  if ((char)uStack_a78 == '\0') {
    plVar4 = uStack_a88;
    if (uStack_a90 != (long *)0x0) {
      while (plVar13 != plVar4) {
        func_0x048b3e80(plVar4 + -8);
        plVar4 = plVar4 + -8;
      }
      uStack_a88 = plVar13;
      thunk_FUN_0ee326a0(uStack_a90,lStack_a80 - (long)uStack_a90);
    }
    uVar14 = uStack_aa8;
    uVar20 = (ulong)uStack_aa0;
    if (uStack_aa8 != 0) {
      for (; uVar14 != uVar20; uVar20 = uVar20 - 0x50) {
        if ((*(char *)(uVar20 - 8) == '\x01') && ((*(byte *)(uVar20 - 0x30) & 1) != 0)) {
          thunk_FUN_0ee326a0(*(undefined8 *)(uVar20 - 0x20),
                             *(ulong *)(uVar20 - 0x30) & 0xfffffffffffffffe);
        }
      }
      uStack_aa0 = (long *)uVar14;
      thunk_FUN_0ee326a0(uStack_aa8,lStack_a98 - uStack_aa8);
    }
  }
  if (plStack_ac8 != (long *)0x0) {
    func_0x0ee56810(&ppuStack_ab8,&plStack_ac8);
    plVar13 = uStack_a90;
    if ((char)uStack_a78 == '\0') {
      plVar4 = uStack_a88;
      if (uStack_a90 != (long *)0x0) {
        while (plVar13 != plVar4) {
          func_0x048b3e80(plVar4 + -8);
          plVar4 = plVar4 + -8;
        }
        uStack_a88 = plVar13;
        thunk_FUN_0ee326a0(uStack_a90,lStack_a80 - (long)uStack_a90);
      }
      uVar14 = uStack_aa8;
      uVar20 = (ulong)uStack_aa0;
      if (uStack_aa8 != 0) {
        for (; uVar14 != uVar20; uVar20 = uVar20 - 0x50) {
          if ((*(char *)(uVar20 - 8) == '\x01') && ((*(byte *)(uVar20 - 0x30) & 1) != 0)) {
            thunk_FUN_0ee326a0(*(undefined8 *)(uVar20 - 0x20),
                               *(ulong *)(uVar20 - 0x30) & 0xfffffffffffffffe);
          }
        }
        uStack_aa0 = (long *)uVar14;
        thunk_FUN_0ee326a0(uStack_aa8,lStack_a98 - uStack_aa8);
      }
    }
  }
  plVar13 = plStack_ac0;
  plStack_ac0 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  plVar13 = plStack_ac8;
  plStack_ac8 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  ppuStack_ab8 = (undefined **)0xf5dfc55b0f8a0bbe;
  puStack_ab0 = &UNK_0140f690;
  uStack_aa8 = 1;
  uStack_aa0 = (long *)CONCAT44(uStack_aa0._4_4_,0x95);
  if ((byte)uStack_9e8 == 0) {
    func_0x0eedea30(&uStack_b18);
    func_0x0eedeb80(2,0x2d,&ppuStack_a28,&uStack_b18,&ppuStack_ab8);
    if (((ulong)uStack_b18 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_b08,(ulong)uStack_b18 & 0xfffffffffffffffe);
    }
  }
  lVar2 = uStack_a00;
  if (((byte)uStack_9e8 & 1) == 0) {
    lVar3 = uStack_9f8;
    if (uStack_a00 != 0) {
      while (lVar2 != lVar3) {
        func_0x048b3e80(lVar3 + -0x40);
        lVar3 = lVar3 + -0x40;
      }
      uStack_9f8 = lVar2;
      thunk_FUN_0ee326a0(uStack_a00,lStack_9f0 - uStack_a00);
    }
    lVar3 = uStack_a18;
    lVar2 = uStack_a10;
    if (uStack_a18 != 0) {
      for (; lVar3 != lVar2; lVar2 = lVar2 + -0x50) {
        if ((*(char *)(lVar2 + -8) == '\x01') && ((*(byte *)(lVar2 + -0x30) & 1) != 0)) {
          thunk_FUN_0ee326a0(*(undefined8 *)(lVar2 + -0x20),
                             *(ulong *)(lVar2 + -0x30) & 0xfffffffffffffffe);
        }
      }
      uStack_a10 = lVar3;
      thunk_FUN_0ee326a0(uStack_a18,lStack_a08 - uStack_a18);
    }
  }
  ppuStack_ab8 = &puStack_ab0;
  uStack_aa0 = &lStack_a98;
  uStack_a88 = &lStack_a80;
  uStack_a68 = *(undefined8 *)(param_1 + 0x68);
  lStack_a60 = *(long *)(param_1 + 0x70);
  if (lStack_a60 == 0) {
    uStack_a58 = *puStack_a30;
  }
  else {
    LOCK();
    *(long *)(lStack_a60 + 8) = *(long *)(lStack_a60 + 8) + 1;
    UNLOCK();
    uStack_a58 = *puStack_a30;
  }
  uStack_a38 = 1;
  uStack_a40 = 0;
  uStack_a48 = 0;
  uStack_a50 = 0;
  uStack_a6c = 0xffffffff;
  uStack_a70 = 1;
  uStack_a78 = 0;
  lStack_a80 = 0;
  uStack_a90 = (long *)0x0;
  lStack_a98 = 0;
  uStack_aa8 = 0;
  puStack_ab0 = (undefined *)0x0;
  ppuStack_890 = apuStack_438;
  puStack_888 = puStack_38;
  func_0x0ee35a00(&uStack_b18,lStack_9d8);
  lStack_8a0 = (long)&uStack_b18 + 1;
  puStack_898 = (undefined *)((ulong)uStack_b18 >> 1 & 0x7f);
  if (((ulong)uStack_b18 & 1) != 0) {
    puStack_898 = puStack_b10;
    lStack_8a0 = uStack_b08;
  }
  func_0x0ee3d1a0(&ppuStack_890,&lStack_8a0,&puStack_9c8,1,&ppuStack_ab8);
  if (((ulong)uStack_b18 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_b08,(ulong)uStack_b18 & 0xfffffffffffffffe);
  }
  func_0x0ee3cd80(&ppuStack_ab8);
  if ((uStack_b38 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_b28,
                       CONCAT26(uStack_b32,CONCAT24(uStack_b34,uStack_b38)) & 0xfffffffffffffffe);
  }
LAB_0d5c500d:
  func_0x0ee3cea0(&ppuStack_958);
  if (plStack_9d0 != (long *)0x0) {
    (**(code **)(*plStack_9d0 + 8))();
  }
  return;
}



/* ---- referenced strings ----
 * 0x128397b  contents.json
 * 0x1283980  nts.json
 */
