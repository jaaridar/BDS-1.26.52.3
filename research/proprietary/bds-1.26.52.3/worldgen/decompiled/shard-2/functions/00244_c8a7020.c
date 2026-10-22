/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9a7020 (ELF vaddr 0xc8a7020)
 * Label: caller-of-callee
 * Body:  [[0c9a7020, 0c9a70fd] [0c9a7100, 0c9a9b35]]
 * Ghidra: FUN_0c9a7020
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c9a7020(long param_1)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  byte *pbVar26;
  bool bVar27;
  bool bStack_b41;
  long *plStack_b40;
  long *plStack_b38;
  long *plStack_b30;
  long lStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  byte bStack_af8;
  long lStack_af0;
  undefined1 auStack_ae8 [8];
  undefined8 uStack_ae0;
  long *plStack_ad8;
  long *plStack_ac8;
  long *plStack_ac0;
  undefined *puStack_ab8;
  ulong uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  byte bStack_a88;
  undefined1 auStack_a78 [8];
  undefined4 uStack_a70;
  undefined4 uStack_a6c;
  long *plStack_a68;
  undefined1 auStack_a58 [8];
  long *plStack_a50;
  long *plStack_a48;
  undefined8 *puStack_a38;
  ulong uStack_a30;
  long *plStack_a28;
  long *plStack_a20;
  long lStack_a18;
  undefined4 uStack_a10;
  undefined4 uStack_a0c;
  undefined8 uStack_a08;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  undefined4 uStack_9f8;
  undefined4 uStack_9f4;
  undefined8 uStack_9f0;
  byte bStack_9e8;
  long *plStack_9d8;
  long *plStack_9d0;
  long lStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  byte bStack_998;
  long *plStack_988;
  long *plStack_980;
  long lStack_978;
  undefined1 auStack_968 [4];
  undefined4 uStack_964;
  undefined4 uStack_960;
  undefined4 uStack_95c;
  long *plStack_958;
  long *plStack_948;
  long *plStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  long *plStack_908;
  long *plStack_900;
  long *plStack_8f8;
  long *plStack_8f0;
  long *plStack_8e8;
  long *plStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  long lStack_8c8;
  bool *pbStack_8c0;
  undefined1 *puStack_8b8;
  undefined1 uStack_8b0;
  long *plStack_8a8;
  long *plStack_8a0;
  long *plStack_898;
  long *plStack_890;
  long *plStack_888;
  long *plStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  long lStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  byte bStack_838;
  ulong uStack_478;
  undefined *puStack_468;
  long **pplStack_460;
  undefined **ppuStack_448;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined1 auStack_430 [4];
  undefined4 uStack_42c;
  undefined4 uStack_428;
  uint uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  byte bStack_400;
  undefined2 uStack_3ff;
  undefined1 uStack_3fd;
  undefined4 uStack_3fc;
  byte bStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  undefined8 uStack_3e0;
  long *plStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3a8;
  undefined1 auStack_3a0 [16];
  undefined1 uStack_390;
  undefined1 uStack_38e;
  long *plStack_388;
  long *plStack_38;
  
  plVar16 = *(long **)(param_1 + 8);
  lStack_af0 = *plVar16;
  plStack_b40 = plVar16;
  if ((char)plVar16[1] == '\x01') {
    lVar15 = plVar16[2];
    if ((*(byte *)(plVar16 + 8) & 1) == 0) {
      plStack_958 = (long *)plVar16[10];
      auStack_968 = *(undefined1 (*) [4])(plVar16 + 8);
      uStack_964 = *(undefined4 *)((long)plVar16 + 0x44);
      uStack_960 = (undefined4)plVar16[9];
      uStack_95c = *(undefined4 *)((long)plVar16 + 0x4c);
      uVar12 = (ulong)auStack_968[0];
      if (((uint)auStack_968 & 1) == 0) goto LAB_0c9a7087;
LAB_0c9a7189:
      plVar16 = (long *)CONCAT44(uStack_95c,uStack_960);
      bStack_b41 = plVar16 != (long *)0x0;
      if (bStack_b41) goto LAB_0c9a71a3;
LAB_0c9a709f:
      (**(code **)(**(long **)(lStack_af0 + 0x140) + 0x80))
                (&uStack_438,*(long **)(lStack_af0 + 0x140),lVar15 + 8);
      uVar9 = uStack_438;
      bVar27 = (uStack_438 & 1) != 0;
      pcVar22 = (char *)((long)&uStack_438 + 1);
      if (bVar27) {
        pcVar22 = (char *)CONCAT44(uStack_424,uStack_428);
      }
      uVar12 = (ulong)((byte)uStack_438 >> 1);
      if (bVar27) {
        uVar12 = CONCAT44(uStack_42c,auStack_430);
      }
      if (uVar12 == 0) {
LAB_0c9a8ee5:
        auStack_a58 = (undefined1  [8])0x0;
        plStack_a50 = (long *)0x0;
        plStack_a48 = (long *)0x0;
      }
      else {
        uVar20 = 0;
        uVar21 = uVar12;
        pcVar23 = pcVar22;
        pcVar24 = pcVar22;
        pcVar25 = pcVar22;
        do {
          if (((*pcVar23 == '\\') || (*pcVar23 == '/')) &&
             (uVar20 < 0x40 && 0 < (long)pcVar25 - (long)pcVar24)) {
            (&uStack_878)[uVar20 * 2] = pcVar24;
            (&uStack_870)[uVar20 * 2] = (long)pcVar25 - (long)pcVar24;
            uVar20 = uVar20 + 1;
            pcVar24 = pcVar23 + (uVar21 != 0);
          }
          pcVar23 = pcVar23 + 1;
          pcVar25 = pcVar25 + 1;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
        if (uVar20 < 0x40 && 0 < (long)(pcVar22 + (uVar12 - (long)pcVar24))) {
          (&uStack_878)[uVar20 * 2] = pcVar24;
          (&uStack_870)[uVar20 * 2] = pcVar22 + (uVar12 - (long)pcVar24);
          uVar20 = uVar20 + 1;
        }
        else {
          uStack_478 = uVar20;
          if (uVar20 == 0) goto LAB_0c9a8ee5;
        }
        uStack_478 = uVar20;
        func_0x048ad670(auStack_a58,&uStack_878,uVar20 - 1,0x2f);
        uVar9 = uStack_438;
      }
      if ((uVar9 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_424,uStack_428),
                        CONCAT44(uStack_434,uStack_438) & 0xfffffffffffffffe);
      }
LAB_0c9a72df:
      plStack_988 = (long *)0x0;
      plStack_980 = (long *)0x0;
      lStack_978 = 0;
      if ((DAT_0f7b8fb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f7b8fb8), iVar11 != 0)) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
      }
      plStack_8a8 = plStack_a48;
      plStack_8a0 = plStack_a50;
      if (((ulong)auStack_a58 & 1) == 0) {
        plStack_8a8 = (long *)(auStack_a58 + 1);
        plStack_8a0 = (long *)((ulong)auStack_a58 >> 1 & 0x7f);
      }
      puStack_468 = &UNK_0f3e93a8;
      pplStack_460 = &plStack_988;
      ppuStack_448 = &puStack_468;
      (**(code **)(_DAT_0f7b8f98 + 0x160))(&uStack_878,&DAT_0f7b8f98,&plStack_8a8,&puStack_468);
      auStack_ae8 = (undefined1  [8])0x0;
      uStack_ae0 = (long *)0x0;
      plStack_ad8 = (long *)0x0;
      func_0x0412f5e0(auStack_ae8,&uStack_878,uStack_478);
      plVar16 = plStack_b40;
      if (ppuStack_448 == &puStack_468) {
        lVar14 = 0x20;
LAB_0c9a73ec:
        (**(code **)(*ppuStack_448 + lVar14))();
      }
      else {
        lVar14 = 0x28;
        if (ppuStack_448 != (undefined **)0x0) goto LAB_0c9a73ec;
      }
      pbStack_8c0 = &bStack_b41;
      uStack_8b0 = 1;
      puStack_8b8 = auStack_ae8;
      if (bStack_b41 == true) {
        (**(code **)(**(long **)(lStack_af0 + 0x140) + 0x80))
                  (&uStack_878,*(long **)(lStack_af0 + 0x140),lVar15 + 8);
        func_0x0eee2dd0(&uStack_438,0,0x408);
        lVar14 = lStack_868;
        plVar17 = uStack_878;
        plVar16 = (long *)((ulong)uStack_878 >> 1 & 0x7f);
        lVar15 = (long)&uStack_878 + 1;
        if (((ulong)uStack_878 & 1) != 0) {
          plVar16 = uStack_870;
          lVar15 = lStack_868;
        }
        if (plVar16 < (long *)0x400) {
          if (plVar16 != (long *)0x0) {
            func_0x0eee2ee0(&uStack_438,lVar15,plVar16);
          }
          plStack_38 = plVar16;
          *(undefined1 *)((long)&uStack_438 + (long)plVar16) = 0;
        }
        plVar16 = plStack_b40;
        if (((ulong)plVar17 & 1) != 0) {
          func_0x0412a280(lVar14,(ulong)uStack_878 & 0xfffffffffffffffe);
          plVar16 = plStack_b40;
        }
      }
      else {
        uStack_870 = (long *)((ulong)auStack_a58 >> 1 & 0x7f);
        uStack_878 = (long *)(auStack_a58 + 1);
        if (((ulong)auStack_a58 & 1) != 0) {
          uStack_870 = plStack_a50;
          uStack_878 = plStack_a48;
        }
        bVar27 = (*(byte *)(lVar15 + 8) & 1) != 0;
        lStack_868 = lVar15 + 9;
        if (bVar27) {
          lStack_868 = *(long *)(lVar15 + 0x18);
        }
        uStack_860 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
        if (bVar27) {
          uStack_860 = *(ulong *)(lVar15 + 0x10);
        }
        func_0x049151c0(&uStack_438,&uStack_878,2,0x2f);
      }
      if ((DAT_0f7b8fb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f7b8fb8), iVar11 != 0)) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
        plVar16 = plStack_b40;
      }
      plStack_880 = (long *)((ulong)auStack_ae8 >> 1 & 0x7f);
      plVar17 = (long *)(auStack_ae8 + 1);
      plStack_888 = plVar17;
      if (((ulong)auStack_ae8 & 1) != 0) {
        plStack_880 = uStack_ae0;
        plStack_888 = plStack_ad8;
      }
      pbVar26 = (byte *)&uStack_878;
      (**(code **)(_DAT_0f7b8f98 + 0x70))(pbVar26,&DAT_0f7b8f98,&plStack_888);
      bStack_998 = bStack_838;
      if (bStack_838 == 0) {
        plStack_9d8 = uStack_878;
        plStack_9d0 = uStack_870;
        lStack_9c8 = lStack_868;
        uStack_9c0 = uStack_860;
        uStack_9b8 = uStack_858;
        lStack_868 = 0;
        uStack_860 = 0;
        uStack_858 = 0;
        uStack_9b0 = uStack_850;
        uStack_9a8 = uStack_848;
        uStack_9a0 = uStack_840;
        uStack_850 = 0;
        uStack_848 = 0;
        uStack_840 = 0;
        func_0x048e6d60(&uStack_878);
      }
      if ((bStack_998 & 1) == 0) {
        func_0x0c9aef60(&plStack_9d8);
        uStack_9f0 = uStack_9a0;
        uStack_a08 = uStack_9b8;
        lStack_a18 = lStack_9c8;
        uStack_a10 = (undefined4)uStack_9c0;
        uStack_a0c = uStack_9c0._4_4_;
        plStack_b38 = plStack_9d8;
        plStack_b30 = plStack_9d0;
        lStack_9c8 = 0;
        uStack_9c0 = 0;
        uStack_9b8 = 0;
        uStack_a00 = (undefined4)uStack_9b0;
        uStack_9fc = uStack_9b0._4_4_;
        uStack_9f8 = (undefined4)uStack_9a8;
        uStack_9f4 = uStack_9a8._4_4_;
        uStack_9b0 = 0;
        uStack_9a8 = 0;
        uStack_9a0 = 0;
        uStack_878 = plStack_9d8;
        uStack_870 = plStack_9d0;
        lStack_b28 = 0;
        uStack_b20 = 0;
        uStack_b18 = 0;
        uStack_b10 = 0;
        uStack_b08 = 0;
        uStack_b00 = 0;
        bStack_9e8 = 0;
        plStack_a28 = plStack_9d8;
        plStack_a20 = plStack_9d0;
        lStack_868 = 0;
        uStack_860 = 0;
        uStack_858 = 0;
        uStack_850 = 0;
        uStack_848 = 0;
        uStack_840 = 0;
        func_0x048e6d60(&uStack_878);
        func_0x048e6d60(&plStack_b38);
      }
      else {
        plStack_908 = (long *)0x0;
        plStack_900 = (long *)0x0;
        plStack_b38 = plStack_ad8;
        plStack_b30 = uStack_ae0;
        if (((ulong)auStack_ae8 & 1) == 0) {
          plStack_b38 = plVar17;
          plStack_b30 = (long *)((ulong)auStack_ae8 >> 1 & 0x7f);
        }
        func_0x0ee599d0(&uStack_878,&plStack_908,&plStack_b38);
        plStack_b38 = (long *)0x4e11f0a723cb56a9;
        plStack_b30 = (long *)&UNK_0140f690;
        lStack_b28 = 1;
        uStack_b20 = CONCAT44(uStack_b20._4_4_,0x51e);
        if (bStack_838 == 0) {
          plStack_ac8 = (long *)0x0;
          plStack_ac0 = (long *)0x0;
          puStack_ab8 = (undefined *)0x0;
          func_0x0eedeb80(0x100000008,0x2d,&uStack_878,&plStack_ac8,&plStack_b38);
          if (((ulong)plStack_ac8 & 1) != 0) {
            func_0x0412a280(puStack_ab8,(ulong)plStack_ac8 & 0xfffffffffffffffe);
          }
        }
        if ((bStack_838 & 1) == 0) {
          func_0x048e6d60(&uStack_878);
        }
        cVar10 = (**(code **)(*plStack_908 + 0x50))();
        if (cVar10 == '\0') {
          if ((DAT_0f7b8fb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f7b8fb8), iVar11 != 0)) {
            func_0x0ee5ea20(&DAT_0f7b8f98);
            func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
            func_0x0410844d(&DAT_0f7b8fb8);
          }
          plStack_8e8 = (long *)&uStack_438;
          bVar27 = ((ulong)auStack_ae8 & 1) == 0;
          plStack_8f8 = plStack_ad8;
          if (bVar27) {
            plStack_8f8 = plVar17;
          }
          plStack_8e0 = plStack_38;
          plStack_8f0 = (long *)((ulong)auStack_ae8 >> 1 & 0x7f);
          if (!bVar27) {
            plStack_8f0 = uStack_ae0;
          }
          (**(code **)(_DAT_0f7b8f98 + 0xe8))(&plStack_b38,&DAT_0f7b8f98,&plStack_8e8,&plStack_8f8);
          bStack_838 = bStack_af8;
          if (bStack_af8 == 0) {
            uStack_878 = plStack_b38;
            uStack_870 = plStack_b30;
            lStack_868 = lStack_b28;
            uStack_860 = uStack_b20;
            uStack_858 = uStack_b18;
            lStack_b28 = 0;
            uStack_b20 = 0;
            uStack_b18 = 0;
            uStack_850 = uStack_b10;
            uStack_848 = uStack_b08;
            uStack_840 = uStack_b00;
            uStack_b10 = 0;
            uStack_b08 = 0;
            uStack_b00 = 0;
            func_0x048e6d60(&plStack_b38);
          }
          if ((bStack_838 & 1) == 0) {
            func_0x0c9af1a0(&uStack_878);
            uStack_9f0 = uStack_840;
            uStack_a08 = uStack_858;
            lStack_a18 = lStack_868;
            uStack_a10 = (undefined4)uStack_860;
            uStack_a0c = uStack_860._4_4_;
            plStack_ac8 = uStack_878;
            plStack_ac0 = uStack_870;
            lStack_868 = 0;
            uStack_860 = 0;
            uStack_858 = 0;
            uStack_a00 = (undefined4)uStack_850;
            uStack_9fc = uStack_850._4_4_;
            uStack_9f8 = (undefined4)uStack_848;
            uStack_9f4 = uStack_848._4_4_;
            uStack_850 = 0;
            uStack_848 = 0;
            uStack_840 = 0;
            plStack_b38 = uStack_878;
            plStack_b30 = uStack_870;
            puStack_ab8 = (undefined *)0x0;
            uStack_ab0 = 0;
            uStack_aa8 = 0;
            uStack_aa0 = 0;
            uStack_a98 = 0;
            uStack_a90 = 0;
            bStack_9e8 = 0;
            plStack_a28 = uStack_878;
            plStack_a20 = uStack_870;
            lStack_b28 = 0;
            uStack_b20 = 0;
            uStack_b18 = 0;
            uStack_b10 = 0;
            uStack_b08 = 0;
            uStack_b00 = 0;
            func_0x048e6d60(&plStack_b38);
            func_0x048e6d60(&plStack_ac8);
            goto joined_r0x0c9a9588;
          }
LAB_0c9a7aab:
          if (((ulong)auStack_ae8 & 1) == 0) {
            plStack_a68 = plStack_ad8;
            auStack_a78 = auStack_ae8;
            uStack_a70 = (undefined4)uStack_ae0;
            uStack_a6c = uStack_ae0._4_4_;
          }
          else {
            func_0x0412e5e0(auStack_a78,plStack_ad8,uStack_ae0);
          }
          if ((DAT_0f7b8fb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f7b8fb8), iVar11 != 0)) {
            func_0x0ee5ea20(&DAT_0f7b8f98);
            func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
            func_0x0410844d(&DAT_0f7b8fb8);
          }
          plVar16 = (long *)(auStack_a78 + 1);
          bVar27 = ((ulong)auStack_a78 & 1) == 0;
          plStack_ac8 = plStack_a68;
          if (bVar27) {
            plStack_ac8 = plVar16;
          }
          plStack_ac0 = (long *)((ulong)auStack_a78 >> 1 & 0x7f);
          if (!bVar27) {
            plStack_ac0 = (long *)CONCAT44(uStack_a6c,uStack_a70);
          }
          puStack_ab8 = &UNK_013bcd97;
          uStack_ab0 = 0xf;
          func_0x049151c0(&uStack_878,&plStack_ac8,2,0x2f);
          uStack_a30 = uStack_478;
          puStack_a38 = &uStack_878;
          (**(code **)(_DAT_0f7b8f98 + 0x20))(&plStack_b38,&DAT_0f7b8f98,&puStack_a38);
          plStack_ac8 = (long *)0x4e11f0a723cb56a9;
          plStack_ac0 = (long *)&UNK_0140f690;
          puStack_ab8 = (undefined *)0x1;
          uStack_ab0 = CONCAT44(uStack_ab0._4_4_,0x718);
          if (bStack_af8 == 0) {
            plStack_948 = (long *)0x0;
            plStack_940 = (long *)0x0;
            uStack_938 = 0;
            func_0x0eedeb80(2,0x2d,&plStack_b38,&plStack_948,&plStack_ac8);
            if (((ulong)plStack_948 & 1) != 0) {
              func_0x0412a280(uStack_938,(ulong)plStack_948 & 0xfffffffffffffffe);
            }
          }
          if ((bStack_af8 & 1) == 0) {
            func_0x048e6d60(&plStack_b38);
          }
          if ((DAT_0f7b8fb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f7b8fb8), iVar11 != 0)) {
            func_0x0ee5ea20(&DAT_0f7b8f98);
            func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
            func_0x0410844d(&DAT_0f7b8fb8);
          }
          bVar27 = ((ulong)auStack_a78 & 1) == 0;
          plStack_ac8 = plStack_a68;
          if (bVar27) {
            plStack_ac8 = plVar16;
          }
          plStack_ac0 = (long *)((ulong)auStack_a78 >> 1 & 0x7f);
          if (!bVar27) {
            plStack_ac0 = (long *)CONCAT44(uStack_a6c,uStack_a70);
          }
          puStack_ab8 = &UNK_0128214c;
          uStack_ab0 = 0x10;
          func_0x049151c0(&uStack_878,&plStack_ac8,2,0x2f);
          uStack_a30 = uStack_478;
          puStack_a38 = &uStack_878;
          (**(code **)(_DAT_0f7b8f98 + 0x20))(&plStack_b38,&DAT_0f7b8f98,&puStack_a38);
          plStack_ac8 = (long *)0x4e11f0a723cb56a9;
          plStack_ac0 = (long *)&UNK_0140f690;
          puStack_ab8 = (undefined *)0x1;
          uStack_ab0 = CONCAT44(uStack_ab0._4_4_,0x718);
          if (bStack_af8 == 0) {
            plStack_948 = (long *)0x0;
            plStack_940 = (long *)0x0;
            uStack_938 = 0;
            func_0x0eedeb80(2,0x2d,&plStack_b38,&plStack_948,&plStack_ac8);
            if (((ulong)plStack_948 & 1) != 0) {
              func_0x0412a280(uStack_938,(ulong)plStack_948 & 0xfffffffffffffffe);
            }
          }
          if ((bStack_af8 & 1) == 0) {
            func_0x048e6d60(&plStack_b38);
          }
          if ((DAT_0f7b8fb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f7b8fb8), iVar11 != 0)) {
            func_0x0ee5ea20(&DAT_0f7b8f98);
            func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
            func_0x0410844d(&DAT_0f7b8fb8);
          }
          bVar27 = ((ulong)auStack_a78 & 1) == 0;
          plStack_ac8 = plStack_a68;
          if (bVar27) {
            plStack_ac8 = plVar16;
          }
          plStack_ac0 = (long *)((ulong)auStack_a78 >> 1 & 0x7f);
          if (!bVar27) {
            plStack_ac0 = (long *)CONCAT44(uStack_a6c,uStack_a70);
          }
          puStack_ab8 = &UNK_01423430;
          uStack_ab0 = 9;
          func_0x049151c0(&uStack_878,&plStack_ac8,2,0x2f);
          uStack_a30 = uStack_478;
          puStack_a38 = &uStack_878;
          (**(code **)(_DAT_0f7b8f98 + 0x20))(&plStack_b38,&DAT_0f7b8f98,&puStack_a38);
          plStack_ac8 = (long *)0x4e11f0a723cb56a9;
          plStack_ac0 = (long *)&UNK_0140f690;
          puStack_ab8 = (undefined *)0x1;
          uStack_ab0 = CONCAT44(uStack_ab0._4_4_,0x718);
          if (bStack_af8 == 0) {
            plStack_948 = (long *)0x0;
            plStack_940 = (long *)0x0;
            uStack_938 = 0;
            func_0x0eedeb80(2,0x2d,&plStack_b38,&plStack_948,&plStack_ac8);
            if (((ulong)plStack_948 & 1) != 0) {
              func_0x0412a280(uStack_938,(ulong)plStack_948 & 0xfffffffffffffffe);
            }
          }
          if ((bStack_af8 & 1) == 0) {
            func_0x048e6d60(&plStack_b38);
          }
          if ((DAT_0f7b8fb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f7b8fb8), iVar11 != 0)) {
            func_0x0ee5ea20(&DAT_0f7b8f98);
            func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
            func_0x0410844d(&DAT_0f7b8fb8);
          }
          bVar27 = ((ulong)auStack_a78 & 1) != 0;
          plStack_ac8 = plVar16;
          if (bVar27) {
            plStack_ac8 = plStack_a68;
          }
          plStack_ac0 = (long *)((ulong)auStack_a78 >> 1 & 0x7f);
          if (bVar27) {
            plStack_ac0 = (long *)CONCAT44(uStack_a6c,uStack_a70);
          }
          puStack_ab8 = &UNK_012cde44;
          uStack_ab0 = 0x12;
          func_0x049151c0(&uStack_878,&plStack_ac8,2,0x2f);
          uStack_a30 = uStack_478;
          puStack_a38 = &uStack_878;
          (**(code **)(_DAT_0f7b8f98 + 0x20))(&plStack_b38,&DAT_0f7b8f98,&puStack_a38);
          plStack_ac8 = (long *)0x4e11f0a723cb56a9;
          plStack_ac0 = (long *)&UNK_0140f690;
          puStack_ab8 = (undefined *)0x1;
          uStack_ab0 = CONCAT44(uStack_ab0._4_4_,0x718);
          if (bStack_af8 == 0) {
            plStack_948 = (long *)0x0;
            plStack_940 = (long *)0x0;
            uStack_938 = 0;
            func_0x0eedeb80(2,0x2d,&plStack_b38,&plStack_948,&plStack_ac8);
            if (((ulong)plStack_948 & 1) != 0) {
              func_0x0412a280(uStack_938,(ulong)plStack_948 & 0xfffffffffffffffe);
            }
          }
          if ((bStack_af8 & 1) == 0) {
            func_0x048e6d60(&plStack_b38);
          }
          if (((ulong)auStack_a78 & 1) != 0) {
            func_0x0412a280(plStack_a68,(ulong)auStack_a78 & 0xfffffffffffffffe);
          }
          if (((ulong)plStack_988 & 1) == 0) {
            bStack_9e8 = 1;
            plStack_a28 = plStack_988;
            plStack_a20 = plStack_980;
            lStack_a18 = lStack_978;
          }
          else {
            bStack_9e8 = 1;
            func_0x0412e5e0(&plStack_a28,lStack_978,plStack_980);
          }
        }
        else {
          auStack_a78 = (undefined1  [8])0x0;
          if ((DAT_0f7b8fb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f7b8fb8), iVar11 != 0)) {
            func_0x0ee5ea20(&DAT_0f7b8f98);
            func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
            func_0x0410844d(&DAT_0f7b8fb8);
          }
          plStack_8e0 = plStack_38;
          plStack_8e8 = (long *)&uStack_438;
          (**(code **)(_DAT_0f7b8f98 + 0x100))(&plStack_b38,&DAT_0f7b8f98,&plStack_8e8,auStack_a78);
          bStack_838 = bStack_af8;
          if (bStack_af8 == 0) {
            uStack_878 = plStack_b38;
            uStack_870 = plStack_b30;
            lStack_868 = lStack_b28;
            uStack_860 = uStack_b20;
            uStack_858 = uStack_b18;
            lStack_b28 = 0;
            uStack_b20 = 0;
            uStack_b18 = 0;
            uStack_850 = uStack_b10;
            uStack_848 = uStack_b08;
            uStack_840 = uStack_b00;
            uStack_b10 = 0;
            uStack_b08 = 0;
            uStack_b00 = 0;
            func_0x048e6d60(&plStack_b38);
          }
          if ((bStack_838 & 1) == 0) {
            func_0x0c9af020(&uStack_878);
            uStack_9f0 = uStack_840;
            uStack_a08 = uStack_858;
            lStack_a18 = lStack_868;
            uStack_a10 = (undefined4)uStack_860;
            uStack_a0c = uStack_860._4_4_;
            plStack_ac8 = uStack_878;
            plStack_ac0 = uStack_870;
            lStack_868 = 0;
            uStack_860 = 0;
            uStack_858 = 0;
            uStack_a00 = (undefined4)uStack_850;
            uStack_9fc = uStack_850._4_4_;
            uStack_9f8 = (undefined4)uStack_848;
            uStack_9f4 = uStack_848._4_4_;
            uStack_850 = 0;
            uStack_848 = 0;
            uStack_840 = 0;
            plStack_b38 = uStack_878;
            plStack_b30 = uStack_870;
            puStack_ab8 = (undefined *)0x0;
            uStack_ab0 = 0;
            uStack_aa8 = 0;
            uStack_aa0 = 0;
            uStack_a98 = 0;
            uStack_a90 = 0;
            bStack_9e8 = 0;
            plStack_a28 = uStack_878;
            plStack_a20 = uStack_870;
            lStack_b28 = 0;
            uStack_b20 = 0;
            uStack_b18 = 0;
            uStack_b10 = 0;
            uStack_b08 = 0;
            uStack_b00 = 0;
            func_0x048e6d60(&plStack_b38);
            func_0x048e6d60(&plStack_ac8);
          }
          else {
            (**(code **)(*plStack_908 + 0x68))(plStack_908,auStack_a78);
            if ((DAT_0f7b8fb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f7b8fb8), iVar11 != 0)) {
              func_0x0ee5ea20(&DAT_0f7b8f98);
              func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
              func_0x0410844d(&DAT_0f7b8fb8);
            }
            bVar27 = ((ulong)auStack_ae8 & 1) == 0;
            plStack_898 = plStack_ad8;
            if (bVar27) {
              plStack_898 = plVar17;
            }
            plStack_8f0 = plStack_38;
            plStack_890 = (long *)((ulong)auStack_ae8 >> 1 & 0x7f);
            if (!bVar27) {
              plStack_890 = uStack_ae0;
            }
            plStack_8f8 = (long *)&uStack_438;
            (**(code **)(_DAT_0f7b8f98 + 0xe0))
                      (&plStack_ac8,&DAT_0f7b8f98,&plStack_8f8,&plStack_898);
            bStack_af8 = bStack_a88;
            if (bStack_a88 == 0) {
              plStack_b38 = plStack_ac8;
              plStack_b30 = plStack_ac0;
              lStack_b28 = (long)puStack_ab8;
              uStack_b20 = uStack_ab0;
              uStack_b18 = uStack_aa8;
              puStack_ab8 = (undefined *)0x0;
              uStack_ab0 = 0;
              uStack_aa8 = 0;
              uStack_b10 = uStack_aa0;
              uStack_b08 = uStack_a98;
              uStack_b00 = uStack_a90;
              uStack_aa0 = 0;
              uStack_a98 = 0;
              uStack_a90 = 0;
              func_0x048e6d60(&plStack_ac8);
            }
            if ((bStack_af8 & 1) != 0) {
              if (bStack_838 == 0) {
                func_0x048e6d60(&uStack_878);
              }
              goto LAB_0c9a7aab;
            }
            func_0x0c9af0e0(&plStack_b38);
            uStack_9f0 = uStack_b00;
            uStack_a08 = uStack_b18;
            lStack_a18 = lStack_b28;
            uStack_a10 = (undefined4)uStack_b20;
            uStack_a0c = uStack_b20._4_4_;
            plStack_948 = plStack_b38;
            plStack_940 = plStack_b30;
            lStack_b28 = 0;
            uStack_b20 = 0;
            uStack_b18 = 0;
            uStack_a00 = (undefined4)uStack_b10;
            uStack_9fc = uStack_b10._4_4_;
            uStack_9f8 = (undefined4)uStack_b08;
            uStack_9f4 = uStack_b08._4_4_;
            uStack_b10 = 0;
            uStack_b08 = 0;
            uStack_b00 = 0;
            plStack_ac8 = plStack_b38;
            plStack_ac0 = plStack_b30;
            uStack_938 = 0;
            uStack_930 = 0;
            uStack_928 = 0;
            uStack_920 = 0;
            uStack_918 = 0;
            uStack_910 = 0;
            bStack_9e8 = 0;
            plStack_a28 = plStack_b38;
            plStack_a20 = plStack_b30;
            puStack_ab8 = (undefined *)0x0;
            uStack_ab0 = 0;
            uStack_aa8 = 0;
            uStack_aa0 = 0;
            uStack_a98 = 0;
            uStack_a90 = 0;
            func_0x048e6d60(&plStack_ac8);
            func_0x048e6d60(&plStack_948);
            if (bStack_af8 == 0) {
              func_0x048e6d60(&plStack_b38);
            }
          }
joined_r0x0c9a9588:
          if (bStack_838 == 0) {
            func_0x048e6d60(&uStack_878);
          }
        }
        plVar13 = plStack_900;
        plVar16 = plStack_b40;
        if (plStack_900 != (long *)0x0) {
          LOCK();
          plVar1 = plStack_900 + 1;
          lVar15 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar15 == 0) {
            (**(code **)(*plStack_900 + 0x10))(plStack_900);
            FUN_0412c2d0(plVar13);
            plVar16 = plStack_b40;
          }
        }
      }
      if (bStack_998 == 0) {
        func_0x048e6d60(&plStack_9d8);
      }
      func_0x0c9af260(&pbStack_8c0);
      if (bStack_9e8 == 0) {
        if (DAT_0f7b8fb8 == '\0') goto LAB_0c9a9a05;
        goto LAB_0c9a81d9;
      }
    }
    else {
      func_0x0412e5e0(auStack_968,plVar16[10],plVar16[9]);
      uVar12 = (ulong)auStack_968[0];
      if (((uint)auStack_968 & 1) != 0) goto LAB_0c9a7189;
LAB_0c9a7087:
      plVar16 = (long *)(uVar12 >> 1);
      bStack_b41 = plVar16 != (long *)0x0;
      if (!bStack_b41) goto LAB_0c9a709f;
LAB_0c9a71a3:
      pbVar26 = (byte *)(lVar15 + 8);
      plVar17 = plStack_958;
      if ((uVar12 & 1) == 0) {
        plVar17 = (long *)(auStack_968 + 1);
      }
      if (plVar16 < (long *)0xfffffffffffffff8) {
        if (plVar16 < (long *)0x17) {
          auStack_a58[0] = (char)plVar16 * '\x02';
          plVar13 = (long *)(auStack_a58 + 1);
        }
        else {
          uVar12 = 0x1a;
          if (((ulong)plVar16 | 7) != 0x17) {
            uVar12 = ((ulong)plVar16 | 7) + 1;
          }
          plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar12);
          if (plVar13 == (long *)0x0) {
            func_0x0eec74c0(uVar12,0);
          }
          auStack_a58 = (undefined1  [8])(uVar12 | 1);
          plStack_a50 = plVar16;
          plStack_a48 = plVar13;
        }
        func_0x0eee2ee0(plVar13,plVar17,plVar16);
        *(undefined1 *)((long)plVar13 + (long)plVar16) = 0;
        goto LAB_0c9a72df;
      }
      FUN_04882e30();
LAB_0c9a9a05:
      iVar11 = func_0x04108328(&DAT_0f7b8fb8);
      if (iVar11 != 0) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
        plVar16 = plStack_b40;
      }
LAB_0c9a81d9:
      plStack_9d0 = (long *)((ulong)auStack_ae8 >> 1 & 0x7f);
      plStack_9d8 = plVar17;
      if (((ulong)auStack_ae8 & 1) != 0) {
        plStack_9d0 = uStack_ae0;
        plStack_9d8 = plStack_ad8;
      }
      (**(code **)(_DAT_0f7b8f98 + 0x98))(&uStack_878,&DAT_0f7b8f98,&plStack_9d8);
      uStack_438 = 0x23cb56a9;
      uStack_434 = 0x4e11f0a7;
      auStack_430 = (undefined1  [4])0x140f690;
      uStack_42c = 0;
      uStack_428 = 1;
      uStack_424 = 0;
      uStack_420 = 0x535;
      if (bStack_838 == 0) {
        plStack_b38 = (long *)0x0;
        plStack_b30 = (long *)0x0;
        lStack_b28 = 0;
        func_0x0eedeb80(2,0x2d,&uStack_878,&plStack_b38,&uStack_438);
        if (((ulong)plStack_b38 & 1) != 0) {
          func_0x0412a280(lStack_b28,(ulong)plStack_b38 & 0xfffffffffffffffe);
        }
      }
      if ((bStack_838 & 1) == 0) {
        func_0x048e6d60(&uStack_878);
      }
    }
    uStack_878 = (long *)0x4e11f0a723cb56a9;
    uStack_870 = (long *)&UNK_0140f690;
    lStack_868 = 1;
    uStack_860 = CONCAT44(uStack_860._4_4_,0x537);
    if ((bStack_9e8 & 1) == 0) {
      uStack_438 = 0;
      uStack_434 = 0;
      auStack_430 = (undefined1  [4])0x0;
      uStack_42c = 0;
      uStack_428 = 0;
      uStack_424 = 0;
      func_0x0eedeb80(2,0x2d,&plStack_a28,&uStack_438,&uStack_878);
      if ((uStack_438 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_424,uStack_428),
                        CONCAT44(uStack_434,uStack_438) & 0xfffffffffffffffe);
      }
    }
    if ((bStack_9e8 & 1) == 0) {
      uStack_8d8 = (long *)0x0;
      uStack_8d0 = (long *)0x0;
      lStack_8c8 = 0;
joined_r0x0c9a8459:
      if ((bStack_9e8 & 1) == 0) goto LAB_0c9a83bb;
LAB_0c9a845f:
      if (((ulong)plStack_a28 & 1) == 0) goto joined_r0x0c9a8472;
      func_0x0412a280(lStack_a18,(ulong)plStack_a28 & 0xfffffffffffffffe);
      if (((ulong)auStack_ae8 & 1) == 0) goto LAB_0c9a8478;
LAB_0c9a83d3:
      func_0x0412a280(plStack_ad8,(ulong)auStack_ae8 & 0xfffffffffffffffe);
      if (((ulong)plStack_988 & 1) != 0) goto LAB_0c9a83f4;
LAB_0c9a8486:
      if (((ulong)auStack_a58 & 1) == 0) goto LAB_0c9a8490;
LAB_0c9a8417:
      func_0x0412a280(plStack_a48,(ulong)auStack_a58 & 0xfffffffffffffffe);
      lVar15 = plVar16[2];
      bVar3 = *(byte *)(lVar15 + 8);
    }
    else {
      if (((ulong)plStack_a28 & 1) != 0) {
        func_0x0412e5e0(&uStack_8d8,lStack_a18,plStack_a20);
        goto joined_r0x0c9a8459;
      }
      lStack_8c8 = lStack_a18;
      uStack_8d8 = plStack_a28;
      uStack_8d0 = plStack_a20;
      if ((bStack_9e8 & 1) != 0) goto LAB_0c9a845f;
LAB_0c9a83bb:
      func_0x048e6d60(&plStack_a28);
joined_r0x0c9a8472:
      if (((ulong)auStack_ae8 & 1) != 0) goto LAB_0c9a83d3;
LAB_0c9a8478:
      if (((ulong)plStack_988 & 1) == 0) goto LAB_0c9a8486;
LAB_0c9a83f4:
      func_0x0412a280(lStack_978,(ulong)plStack_988 & 0xfffffffffffffffe);
      if (((ulong)auStack_a58 & 1) != 0) goto LAB_0c9a8417;
LAB_0c9a8490:
      lVar15 = plVar16[2];
      bVar3 = *(byte *)(lVar15 + 8);
    }
    puVar8 = (undefined4 *)(lVar15 + 8);
    if ((bVar3 & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(lVar15 + 0x18),*(ulong *)(lVar15 + 8) & 0xfffffffffffffffe);
    }
    *(long *)(puVar8 + 4) = lStack_8c8;
    *puVar8 = (undefined4)uStack_8d8;
    puVar8[1] = uStack_8d8._4_4_;
    puVar8[2] = (undefined4)uStack_8d0;
    puVar8[3] = uStack_8d0._4_4_;
    uStack_8d8 = (long *)((ulong)uStack_8d8 & 0xffffffffffff0000);
    if (((uint)auStack_968 & 1) != 0) {
      func_0x0412a280(plStack_958,CONCAT44(uStack_964,auStack_968) & 0xfffffffffffffffe);
    }
    lVar15 = plVar16[2];
    if ((*(byte *)(lVar15 + 8) & 1) == 0) {
      lStack_868 = *(long *)(lVar15 + 0x18);
      uStack_878 = *(long **)(lVar15 + 8);
      uStack_870 = *(long **)(lVar15 + 0x10);
    }
    else {
      func_0x0412e5e0(&uStack_878,*(undefined8 *)(lVar15 + 0x18),*(undefined8 *)(lVar15 + 0x10));
      lVar15 = plVar16[2];
    }
    pbVar7 = (byte *)(lVar15 + 0x48);
    if (pbVar7 == pbVar26) {
      if (((ulong)uStack_878 & 1) != 0) {
        func_0x0412a280(lStack_868,(ulong)uStack_878 & 0xfffffffffffffffe);
      }
    }
    else {
      if ((*pbVar7 & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar15 + 0x58),
                        *(ulong *)(lVar15 + 0x48) & 0xfffffffffffffffe);
      }
      *(long *)(lVar15 + 0x58) = lStack_868;
      *(undefined4 *)pbVar7 = (undefined4)uStack_878;
      *(undefined4 *)(lVar15 + 0x4c) = uStack_878._4_4_;
      *(undefined4 *)(lVar15 + 0x50) = (undefined4)uStack_870;
      *(undefined4 *)(lVar15 + 0x54) = uStack_870._4_4_;
    }
  }
  if (((char)plVar16[7] == '\x01') && ((char)plVar16[1] == '\x01')) {
    bVar27 = (*(byte *)(plVar16 + 8) & 1) != 0;
    uStack_878 = (long *)((long)plVar16 + 0x41);
    if (bVar27) {
      uStack_878 = (long *)plVar16[10];
    }
    uStack_870 = (long *)(ulong)(*(byte *)(plVar16 + 8) >> 1);
    if (bVar27) {
      uStack_870 = (long *)plVar16[9];
    }
    lVar15 = plVar16[2];
    bVar27 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lStack_868 = lVar15 + 9;
    if (bVar27) {
      lStack_868 = *(long *)(lVar15 + 0x18);
    }
    uStack_860 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar27) {
      uStack_860 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x048ad670(&uStack_438,&uStack_878,2,0x2f);
    lVar15 = plVar16[2];
    puVar2 = (uint *)(lVar15 + 0x98);
    if (puVar2 == &uStack_438) {
      if ((uStack_438 & 1) != 0) {
        plVar17 = (long *)CONCAT44(uStack_434,uStack_438);
        lVar15 = CONCAT44(uStack_424,uStack_428);
        goto LAB_0c9a878b;
      }
    }
    else {
      if ((*(byte *)puVar2 & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar15 + 0xa8),
                        *(ulong *)(lVar15 + 0x98) & 0xfffffffffffffffe);
      }
      *(ulong *)(lVar15 + 0xa8) = CONCAT44(uStack_424,uStack_428);
      *puVar2 = uStack_438;
      *(undefined4 *)(lVar15 + 0x9c) = uStack_434;
      *(undefined1 (*) [4])(lVar15 + 0xa0) = auStack_430;
      *(undefined4 *)(lVar15 + 0xa4) = uStack_42c;
    }
  }
  else {
    (**(code **)(**(long **)(lStack_af0 + 0x140) + 0x80))
              (&uStack_878,*(long **)(lStack_af0 + 0x140),plVar16[2] + 8);
    lVar15 = plVar16[2];
    pbVar26 = (byte *)(lVar15 + 0x98);
    if (pbVar26 != (byte *)&uStack_878) {
      if ((*pbVar26 & 1) == 0) {
        if (((ulong)uStack_878 & 1) == 0) {
          *(long *)(lVar15 + 0xa8) = lStack_868;
          *(undefined4 *)pbVar26 = (undefined4)uStack_878;
          *(undefined4 *)(lVar15 + 0x9c) = uStack_878._4_4_;
          *(undefined4 *)(lVar15 + 0xa0) = (undefined4)uStack_870;
          *(undefined4 *)(lVar15 + 0xa4) = uStack_870._4_4_;
        }
        else {
          func_0x04885070(pbVar26,lStack_868,uStack_870);
        }
      }
      else {
        plVar17 = (long *)((ulong)uStack_878 >> 1 & 0x7f);
        lVar15 = (long)&uStack_878 + 1;
        if (((ulong)uStack_878 & 1) != 0) {
          plVar17 = uStack_870;
          lVar15 = lStack_868;
        }
        func_0x04885120(pbVar26,lVar15,plVar17);
      }
    }
    plVar17 = uStack_878;
    lVar15 = lStack_868;
    if (((ulong)uStack_878 & 1) != 0) {
LAB_0c9a878b:
      func_0x0412a280(lVar15,(ulong)plVar17 & 0xfffffffffffffffe);
    }
  }
  lVar15 = plVar16[2];
  func_0x0eee2dd0(&uStack_878,0,0x408);
  bVar27 = (*(byte *)(lVar15 + 0x98) & 1) != 0;
  lVar14 = lVar15 + 0x99;
  if (bVar27) {
    lVar14 = *(long *)(lVar15 + 0xa8);
  }
  uVar12 = (ulong)(*(byte *)(lVar15 + 0x98) >> 1);
  if (bVar27) {
    uVar12 = *(ulong *)(lVar15 + 0xa0);
  }
  if (uVar12 < 0x400) {
    if (uVar12 != 0) {
      func_0x0eee2ee0(&uStack_878,lVar14,uVar12);
    }
    uStack_478 = uVar12;
    *(undefined1 *)((long)&uStack_878 + uVar12) = 0;
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f7b8fb8), iVar11 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    func_0x0410844d(&DAT_0f7b8fb8);
  }
  plVar16 = plStack_b40;
  plStack_a20 = (long *)uStack_478;
  plStack_ac8 = (long *)plStack_b40[2];
  plStack_ac0 = (long *)plStack_b40[3];
  if (plStack_b40[3] != 0) {
    LOCK();
    plVar17 = (long *)(plStack_b40[3] + 8);
    *plVar17 = *plVar17 + 1;
    UNLOCK();
  }
  plStack_a28 = &uStack_878;
  (**(code **)(_DAT_0f7b8f98 + 0xb0))
            (&uStack_438,&DAT_0f7b8f98,&plStack_a28,0x280,&UNK_0c9aa6a0,&plStack_ac8);
  plStack_b38 = (long *)0x4e11f0a723cb56a9;
  plStack_b30 = (long *)&UNK_0140f690;
  lStack_b28 = 1;
  uStack_b20 = CONCAT44(uStack_b20._4_4_,0x25d);
  if (bStack_3f8 == 0) {
    plStack_9d8 = (long *)0x0;
    plStack_9d0 = (long *)0x0;
    lStack_9c8 = 0;
    func_0x0eedeb80(2,0x2d,&uStack_438,&plStack_9d8,&plStack_b38);
    if (((ulong)plStack_9d8 & 1) != 0) {
      func_0x0412a280(lStack_9c8,(ulong)plStack_9d8 & 0xfffffffffffffffe);
    }
  }
  plVar17 = plStack_ac0;
  if ((bStack_3f8 & 1) == 0) {
    func_0x048e6d60(&uStack_438);
    plVar17 = plStack_ac0;
  }
  plStack_ac0 = plVar17;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar13 = plVar17 + 1;
    lVar15 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      FUN_0412c2d0(plVar17);
    }
  }
  func_0x0c9a9f60(plVar16[5] + 0x58,plVar16 + 4,&uStack_878);
  if (((char)plVar16[7] == '\x01') && ((char)plVar16[1] == '\x01')) {
    lVar15 = (**(code **)(**(long **)(lStack_af0 + 0x138) + 0xb0))
                       (*(long **)(lStack_af0 + 0x138),plVar16[2] + 0x60);
    if (lVar15 == 0) {
      lVar15 = plVar16[2];
      goto LAB_0c9a9352;
    }
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plVar16 = (long)&UNK_0f47e0b0;
    plVar16[2] = 0;
    plVar16[3] = 0;
    plVar16[1] = (long)(plVar16 + 2);
    func_0x0d20c820(lVar15,plVar16);
    lVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x5b8);
    if (lVar15 == 0) {
      func_0x0eec74c0(0x5b8,0);
    }
    func_0x0d20ad60(lVar15,plVar16);
    plVar17 = plStack_b40;
    lVar14 = plStack_b40[2];
    lVar4 = *(long *)(lVar14 + 0x90);
    *(long *)(lVar14 + 0x90) = lVar15;
    if (lVar4 != 0) {
      func_0x0d20be50(lVar4);
      func_0x0412a280(lVar4,0x5b8);
      lVar14 = plVar17[2];
      lVar15 = *(long *)(lVar14 + 0x90);
    }
    *(long *)(lVar14 + 0x88) = lVar15;
    (**(code **)(*plVar16 + 8))(plVar16);
    lVar14 = plVar17[2];
    lVar15 = *(long *)(lVar14 + 0x88);
  }
  else {
    lVar15 = (**(code **)(**(long **)(lStack_af0 + 0x138) + 0xb0))
                       (*(long **)(lStack_af0 + 0x138),plVar16[2] + 8);
    lVar14 = plVar16[2];
    *(long *)(lVar14 + 0x88) = lVar15;
  }
  if (lVar15 == 0) {
    *(undefined4 *)(lVar14 + 0x28) = 1;
    return;
  }
  plVar16 = (long *)(lVar14 + 8);
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
  if (plVar17 == (long *)0x0) goto LAB_0c9a9487;
  while( true ) {
    uStack_438 = CONCAT31((int3)_DAT_011e316e,0x26);
    uStack_434._1_3_ = (undefined3)_UNK_011e3172;
    uStack_434 = CONCAT31(uStack_434._1_3_,(char)((uint)_DAT_011e316e >> 0x18));
    auStack_430._1_3_ = (undefined3)_UNK_011e3176;
    auStack_430 = (undefined1  [4])CONCAT31(auStack_430._1_3_,(char)((uint)_UNK_011e3172 >> 0x18));
    uStack_42c._1_3_ = (undefined3)_UNK_011e317a;
    uStack_42c = CONCAT31(uStack_42c._1_3_,(char)((uint)_UNK_011e3176 >> 0x18));
    uStack_428 = 0x74726f70;
    uStack_424 = uStack_424 & 0xffffff00;
    func_0x0d21fbb0(plVar17,&uStack_438,lVar15,plVar16);
    plVar16 = plStack_b40;
    if (((char)plStack_b40[7] == '\x01') && ((char)plStack_b40[1] == '\x01')) {
      lVar15 = *(long *)(lStack_af0 + 0x160);
      if ((*(long *)(lVar15 + 8) == 0) &&
         (cVar10 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013e99a5),
         cVar10 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((**(char **)(lVar15 + 8) == '\0') &&
         (cVar10 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013e99a5),
         cVar10 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      uVar5 = *(undefined8 *)(lVar15 + 0x18);
      lVar15 = plVar16[2];
      if ((*(byte *)(lVar15 + 0x98) & 1) == 0) {
        lStack_b28 = *(undefined8 *)(lVar15 + 0xa8);
        plStack_b38 = *(long **)(lVar15 + 0x98);
        plStack_b30 = *(long **)(lVar15 + 0xa0);
      }
      else {
        func_0x0412e5e0(&plStack_b38,*(undefined8 *)(lVar15 + 0xa8),*(undefined8 *)(lVar15 + 0xa0));
        lVar15 = plStack_b40[2];
      }
      func_0x0c9aa110(&uStack_438,uVar5,&plStack_b38,lVar15 + 8);
      plVar16 = plStack_b40;
      if (((ulong)plStack_b38 & 1) != 0) {
        func_0x0412a280(lStack_b28,(ulong)plStack_b38 & 0xfffffffffffffffe);
      }
      if ((bStack_400 & 1) != 0) {
        func_0x0412a280(uStack_3f0,
                        CONCAT44(uStack_3fc,CONCAT13(uStack_3fd,CONCAT21(uStack_3ff,bStack_400))) &
                        0xfffffffffffffffe);
      }
      plVar13 = plStack_3d8;
      bStack_400 = 4;
      uStack_3ff = 0x6264;
      uStack_3fd = 0;
      lStack_3e8 = *(long *)(plVar16[2] + 0x88) + 8;
      uVar5 = *(undefined8 *)(lStack_af0 + 0x178);
      plVar16 = *(long **)(lStack_af0 + 0x180);
      if (plVar16 != (long *)0x0) {
        LOCK();
        plVar16[1] = plVar16[1] + 1;
        UNLOCK();
      }
      uVar6 = *(undefined8 *)(lStack_af0 + 0x188);
      uStack_3e0 = 0;
      plStack_3d8 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        lVar15 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar15 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          FUN_0412c2d0(plVar13);
        }
        plVar13 = plStack_3d8;
        uStack_3d0 = 0;
        if (plStack_3d8 != (long *)0x0) {
          LOCK();
          plVar1 = plStack_3d8 + 1;
          lVar15 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar15 == 0) {
            lVar15 = *plStack_3d8;
            uStack_3e0 = uVar5;
            plStack_3d8 = plVar16;
            (**(code **)(lVar15 + 0x10))(plVar13);
            FUN_0412c2d0(plVar13);
            uVar5 = uStack_3e0;
            plVar16 = plStack_3d8;
          }
        }
      }
      plStack_3d8 = plVar16;
      uStack_3e0 = uVar5;
      uStack_390 = 0;
      uStack_3a8 = 500000000;
      uStack_38e = 1;
      uStack_3d0 = uVar6;
      if (plStack_388 != (long *)0x0) {
        lVar15 = *plStack_388;
        plStack_388 = plVar17;
        (**(code **)(lVar15 + 8))();
        plVar17 = plStack_388;
      }
      plStack_388 = plVar17;
      bVar27 = ((uint)auStack_430 & 1) != 0;
      plStack_9d8 = (long *)(auStack_430 + 1);
      if (bVar27) {
        plStack_9d8 = (long *)CONCAT44(uStack_41c,uStack_420);
      }
      plStack_9d0 = (long *)(ulong)(auStack_430[0] >> 1);
      if (bVar27) {
        plStack_9d0 = (long *)CONCAT44(uStack_424,uStack_428);
      }
      func_0x0ee599d0(&plStack_b38,auStack_3a0,&plStack_9d8);
      plVar16 = plStack_b40;
      plStack_9d8 = (long *)0x4e11f0a723cb56a9;
      plStack_9d0 = (long *)&UNK_0140f690;
      lStack_9c8 = 1;
      uStack_9c0 = CONCAT44(uStack_9c0._4_4_,0x28d);
      if (bStack_af8 == 0) {
        plStack_ac8 = (long *)0x0;
        plStack_ac0 = (long *)0x0;
        puStack_ab8 = (undefined *)0x0;
        func_0x0eedeb80(0x100000008,0x2d,&plStack_b38,&plStack_ac8,&plStack_9d8);
        if (((ulong)plStack_ac8 & 1) != 0) {
          func_0x0412a280(puStack_ab8,(ulong)plStack_ac8 & 0xfffffffffffffffe);
        }
      }
      if ((bStack_af8 & 1) == 0) {
        func_0x048e6d60(&plStack_b38);
      }
      func_0x0c9aa270(&plStack_b38,&uStack_438,lStack_af0 + 400);
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x18,0);
      }
      *puVar18 = &UNK_0f534768;
      puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar19 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      plVar17 = plStack_b38;
      puVar19[1] = 0;
      puVar19[2] = 0;
      *puVar19 = &UNK_0ef44a60;
      *(undefined1 *)(puVar19 + 3) = 1;
      puVar18[1] = puVar19 + 3;
      puVar18[2] = puVar19;
      plStack_b38 = (long *)0x0;
      lVar15 = plVar16[2];
      plVar16 = *(long **)(lVar15 + 0x78);
      *(undefined8 **)(lVar15 + 0x78) = puVar18;
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 8))();
      }
      plVar16 = *(long **)(lVar15 + 0x80);
      *(long **)(lVar15 + 0x80) = plVar17;
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 8))();
      }
      plVar17 = plStack_b38;
      plVar16 = plStack_b40;
      plStack_b38 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))();
      }
      func_0x0c9aa500(&uStack_438);
      lVar15 = plVar16[2];
      plVar17 = *(long **)(lVar15 + 0x80);
      goto joined_r0x0c9a930d;
    }
    plVar16 = *(long **)(lStack_af0 + 0x138);
    lVar14 = *(long *)(lStack_af0 + 0x160);
    if ((*(long *)(lVar14 + 8) == 0) &&
       (cVar10 = FUN_0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013e99a5),
       cVar10 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    if ((**(char **)(lVar14 + 8) == '\0') &&
       (cVar10 = FUN_0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013e99a5),
       cVar10 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uVar5 = *(undefined8 *)(lVar14 + 0x18);
    lVar14 = plStack_b40[2];
    lVar4 = *(long *)(lVar14 + 0x88);
    plStack_b38 = *(long **)(lStack_af0 + 400);
    plStack_b30 = *(long **)(lStack_af0 + 0x198);
    if (plStack_b30 != (long *)0x0) {
      LOCK();
      plStack_b30[1] = plStack_b30[1] + 1;
      UNLOCK();
    }
    lStack_b28 = *(undefined8 *)(lStack_af0 + 0x1a0);
    if ((plStack_b38 != (long *)0x0) && ((char)*plStack_b38 != '\0')) break;
    func_0x04890760();
LAB_0c9a9487:
    func_0x0eec74c0(0x70,0);
  }
  plStack_9d8 = plVar17;
  (**(code **)(*plVar16 + 0x88))
            (&uStack_438,plVar16,uVar5,lVar14 + 8,lVar4 + 8,lStack_af0 + 0x178,&UNK_01d3cf20,
             &plStack_b38,&plStack_9d8);
  plVar16 = plStack_b40;
  lVar15 = plStack_b40[2];
  uVar5 = CONCAT44(uStack_434,uStack_438);
  uStack_438 = 0;
  uStack_434 = 0;
  plVar17 = *(long **)(lVar15 + 0x78);
  *(undefined8 *)(lVar15 + 0x78) = uVar5;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  uVar5 = CONCAT44(uStack_42c,auStack_430);
  auStack_430 = (undefined1  [4])0x0;
  uStack_42c = 0;
  plVar17 = *(long **)(lVar15 + 0x80);
  *(undefined8 *)(lVar15 + 0x80) = uVar5;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
    plVar17 = (long *)CONCAT44(uStack_42c,auStack_430);
    auStack_430 = (undefined1  [4])0x0;
    uStack_42c = 0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
  }
  plVar17 = (long *)CONCAT44(uStack_434,uStack_438);
  uStack_438 = 0;
  uStack_434 = 0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  plVar17 = plStack_9d8;
  plStack_9d8 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  plVar17 = plStack_b30;
  plStack_b38 = (long *)0x0;
  plStack_b30 = (long *)0x0;
  if (plVar17 == (long *)0x0) {
LAB_0c9a8ea0:
    lStack_b28 = 0;
    lVar15 = plVar16[2];
    plVar17 = *(long **)(lVar15 + 0x80);
  }
  else {
    LOCK();
    plVar13 = plVar17 + 1;
    lVar15 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar15 != 0) goto LAB_0c9a8ea0;
    (**(code **)(*plVar17 + 0x10))(plVar17);
    FUN_0412c2d0(plVar17);
    plVar17 = plStack_b30;
    if (plStack_b30 == (long *)0x0) goto LAB_0c9a8ea0;
    lStack_b28 = 0;
    LOCK();
    plVar13 = plStack_b30 + 1;
    lVar15 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar15 != 0) goto LAB_0c9a8ea0;
    (**(code **)(*plStack_b30 + 0x10))(plStack_b30);
    FUN_0412c2d0(plVar17);
    lVar15 = plVar16[2];
    plVar17 = *(long **)(lVar15 + 0x80);
  }
joined_r0x0c9a930d:
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0xb0))(&uStack_438);
    uVar9 = uStack_438;
    if (((uint)auStack_430 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_41c,uStack_420),
                      CONCAT44(uStack_42c,auStack_430) & 0xfffffffffffffffe);
    }
    lVar15 = plVar16[2];
    if (uVar9 == 0) {
      if (*(long *)(lVar15 + 0x20) == 0) {
        *(undefined4 *)(lVar15 + 0x28) = 2;
        return;
      }
      *(undefined4 *)(lVar15 + 0x28) = 0;
      return;
    }
  }
LAB_0c9a9352:
  *(undefined4 *)(lVar15 + 0x28) = 1;
  return;
}



/* ---- referenced strings ----
 * 0x11e316e  FileArchiver Export
 */
