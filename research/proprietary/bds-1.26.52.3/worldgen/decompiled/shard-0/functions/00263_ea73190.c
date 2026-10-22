/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeb73190 (ELF vaddr 0xea73190)
 * Label: caller-of-callee
 * Body:  [[0eb73190, 0eb74601] [0eb74610, 0eb746e2] [0eb746f0, 0eb74732] [0eb74740, 0eb77e1f]]
 * Ghidra: FUN_0eb73190
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eb73190(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  byte *pbVar16;
  code *pcVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_2c10;
  long *plStack_2c08;
  undefined8 uStack_2c00;
  code *pcStack_2bf8;
  undefined8 uStack_2bf0;
  undefined *puStack_2be8;
  undefined1 *puStack_2be0;
  undefined1 *puStack_2bd8;
  undefined *puStack_2bd0;
  undefined *puStack_2bc8;
  undefined4 uStack_2bc0;
  undefined1 auStack_2bb8 [16];
  undefined1 auStack_2ba8 [16];
  long lStack_2b98;
  undefined1 auStack_2b90 [16];
  undefined1 auStack_2b80 [16];
  undefined8 *puStack_2b70;
  undefined1 auStack_2b68 [16];
  long lStack_2b58;
  long lStack_2b50;
  long lStack_2b48;
  long lStack_2b40;
  undefined4 uStack_2b38;
  undefined4 uStack_2b34;
  long lStack_2b30;
  long lStack_2b28;
  undefined4 uStack_2b20;
  undefined4 uStack_2b1c;
  long lStack_2b18;
  long lStack_2b10;
  long lStack_2b08;
  undefined2 uStack_2b00;
  undefined2 uStack_2afe;
  uint uStack_2afc;
  uint uStack_2af8;
  uint uStack_2af4;
  long lStack_2af0;
  undefined2 uStack_2ae8;
  undefined2 uStack_2ae6;
  uint uStack_2ae4;
  uint uStack_2ae0;
  undefined1 uStack_2adc;
  undefined8 *puStack_2ad8;
  undefined8 *puStack_2ad0;
  undefined8 *puStack_2ac8;
  undefined8 uStack_2ac0;
  undefined8 uStack_2ab8;
  undefined8 uStack_2ab0;
  undefined8 uStack_2aa8;
  undefined8 *puStack_2aa0;
  undefined8 *puStack_2a98;
  undefined8 *puStack_2a90;
  undefined8 uStack_2a88;
  undefined8 uStack_2a80;
  int iStack_2a78;
  undefined4 uStack_2a74;
  char cStack_2a70;
  undefined7 uStack_2a6f;
  undefined1 auStack_2a68 [16];
  undefined8 *puStack_2a58;
  undefined8 uStack_2a50;
  undefined8 uStack_2a48;
  undefined8 uStack_2a40;
  undefined8 uStack_2a38;
  long lStack_2a30;
  undefined8 *puStack_2a28;
  undefined8 *puStack_2a20;
  undefined8 *puStack_2a18;
  undefined8 uStack_2a10;
  undefined8 uStack_2a08;
  undefined8 uStack_2a00;
  char cStack_29f8;
  undefined8 *puStack_29e8;
  undefined8 *puStack_29e0;
  undefined8 *puStack_29d8;
  undefined8 uStack_29d0;
  undefined8 uStack_29c8;
  undefined8 uStack_29c0;
  undefined8 uStack_29b8;
  undefined8 *puStack_29a8;
  undefined8 *puStack_29a0;
  undefined8 *puStack_2998;
  undefined8 uStack_2990;
  undefined8 uStack_2988;
  undefined8 uStack_2980;
  undefined8 uStack_2978;
  undefined8 *puStack_2968;
  undefined8 *puStack_2960;
  undefined8 *puStack_2958;
  undefined8 uStack_2950;
  undefined8 uStack_2948;
  undefined8 uStack_2940;
  char cStack_2938;
  undefined7 uStack_2937;
  undefined8 *puStack_2928;
  undefined8 *puStack_2920;
  undefined8 *puStack_2918;
  undefined8 uStack_2910;
  undefined8 uStack_2908;
  undefined8 uStack_2900;
  undefined1 uStack_28f8;
  undefined7 uStack_28f7;
  undefined8 *puStack_28e8;
  undefined8 *puStack_28e0;
  undefined8 *puStack_28d8;
  undefined8 uStack_28d0;
  undefined8 uStack_28c8;
  undefined8 uStack_28c0;
  undefined1 uStack_28b8;
  undefined7 uStack_28b7;
  undefined1 auStack_28a8 [56];
  undefined1 auStack_2870 [56];
  undefined1 auStack_2838 [56];
  undefined1 auStack_2800 [56];
  undefined1 auStack_27c8 [56];
  undefined1 auStack_2790 [56];
  undefined1 auStack_2758 [56];
  undefined1 auStack_2720 [56];
  undefined1 auStack_26e8 [56];
  undefined1 auStack_26b0 [56];
  undefined1 auStack_2678 [56];
  undefined1 auStack_2640 [56];
  undefined1 auStack_2608 [56];
  undefined1 auStack_25d0 [56];
  undefined1 auStack_2598 [56];
  undefined1 auStack_2560 [56];
  undefined1 auStack_2528 [56];
  undefined1 auStack_24f0 [56];
  undefined1 auStack_24b8 [56];
  undefined1 auStack_2480 [56];
  undefined1 auStack_2448 [56];
  undefined1 auStack_2410 [56];
  undefined1 auStack_23d8 [56];
  undefined1 auStack_23a0 [56];
  undefined1 auStack_2368 [56];
  undefined1 auStack_2330 [56];
  undefined1 auStack_22f8 [56];
  undefined1 auStack_22c0 [56];
  undefined1 auStack_2288 [56];
  undefined1 auStack_2250 [56];
  undefined1 auStack_2218 [56];
  undefined1 auStack_21e0 [56];
  undefined1 auStack_21a8 [56];
  undefined1 auStack_2170 [56];
  undefined1 auStack_2138 [56];
  undefined1 auStack_2100 [56];
  undefined1 auStack_20c8 [56];
  undefined1 auStack_2090 [56];
  undefined1 auStack_2058 [56];
  undefined1 auStack_2020 [56];
  undefined1 auStack_1fe8 [56];
  undefined1 auStack_1fb0 [56];
  undefined1 auStack_1f78 [56];
  undefined1 auStack_1f40 [56];
  undefined1 auStack_1f08 [56];
  undefined1 auStack_1ed0 [56];
  undefined1 auStack_1e98 [56];
  undefined1 auStack_1e60 [56];
  undefined1 auStack_1e28 [56];
  undefined1 auStack_1df0 [56];
  undefined1 auStack_1db8 [56];
  undefined1 auStack_1d80 [56];
  undefined1 auStack_1d48 [56];
  undefined1 auStack_1d10 [56];
  undefined1 auStack_1cd8 [56];
  undefined1 auStack_1ca0 [56];
  undefined1 auStack_1c68 [56];
  undefined1 auStack_1c30 [56];
  undefined1 auStack_1bf8 [56];
  undefined1 auStack_1bc0 [56];
  undefined1 auStack_1b88 [56];
  undefined1 auStack_1b50 [56];
  undefined1 auStack_1b18 [56];
  undefined1 auStack_1ae0 [56];
  undefined1 auStack_1aa8 [56];
  undefined1 auStack_1a70 [56];
  undefined1 auStack_1a38 [56];
  undefined1 auStack_1a00 [56];
  undefined1 auStack_19c8 [56];
  undefined1 auStack_1990 [56];
  undefined1 auStack_1958 [56];
  undefined1 auStack_1920 [56];
  undefined1 auStack_18e8 [56];
  undefined1 auStack_18b0 [56];
  undefined1 auStack_1878 [56];
  undefined1 auStack_1840 [56];
  undefined1 auStack_1808 [56];
  undefined1 auStack_17d0 [56];
  undefined1 auStack_1798 [56];
  undefined1 auStack_1760 [56];
  undefined1 auStack_1728 [56];
  undefined1 auStack_16f0 [56];
  undefined1 auStack_16b8 [56];
  undefined1 auStack_1680 [56];
  undefined1 auStack_1648 [56];
  undefined1 auStack_1610 [56];
  undefined1 auStack_15d8 [56];
  undefined1 auStack_15a0 [56];
  undefined1 auStack_1568 [56];
  undefined1 auStack_1530 [56];
  undefined1 auStack_14f8 [56];
  undefined1 auStack_14c0 [56];
  undefined1 auStack_1488 [56];
  undefined1 auStack_1450 [56];
  undefined1 auStack_1418 [56];
  undefined1 auStack_13e0 [56];
  undefined1 auStack_13a8 [56];
  undefined1 auStack_1370 [56];
  undefined1 auStack_1338 [56];
  undefined1 auStack_1300 [56];
  undefined1 auStack_12c8 [56];
  undefined1 auStack_1290 [56];
  undefined1 auStack_1258 [56];
  undefined1 auStack_1220 [56];
  undefined1 auStack_11e8 [56];
  undefined1 auStack_11b0 [56];
  undefined1 auStack_1178 [56];
  undefined1 auStack_1140 [56];
  undefined1 auStack_1108 [56];
  undefined1 auStack_10d0 [56];
  undefined1 auStack_1098 [56];
  undefined1 auStack_1060 [56];
  undefined1 auStack_1028 [56];
  undefined1 auStack_ff0 [56];
  undefined1 auStack_fb8 [56];
  undefined1 auStack_f80 [56];
  undefined1 auStack_f48 [56];
  undefined1 auStack_f10 [56];
  undefined1 auStack_ed8 [56];
  undefined1 auStack_ea0 [56];
  undefined1 auStack_e68 [56];
  undefined1 auStack_e30 [56];
  undefined1 auStack_df8 [56];
  undefined1 auStack_dc0 [56];
  undefined1 auStack_d88 [56];
  undefined1 auStack_d50 [56];
  undefined1 auStack_d18 [56];
  undefined1 auStack_ce0 [56];
  undefined1 auStack_ca8 [56];
  undefined1 auStack_c70 [56];
  undefined1 auStack_c38 [56];
  undefined1 auStack_c00 [56];
  undefined1 auStack_bc8 [56];
  undefined1 auStack_b90 [56];
  undefined1 auStack_b58 [56];
  undefined1 auStack_b20 [56];
  undefined1 auStack_ae8 [56];
  undefined1 auStack_ab0 [56];
  undefined1 auStack_a78 [56];
  undefined1 auStack_a40 [56];
  undefined1 auStack_a08 [56];
  undefined1 auStack_9d0 [56];
  undefined1 auStack_998 [56];
  undefined1 auStack_960 [56];
  undefined1 auStack_928 [56];
  undefined1 auStack_8f0 [56];
  undefined1 auStack_8b8 [56];
  undefined1 auStack_880 [56];
  undefined1 auStack_848 [56];
  undefined1 auStack_810 [56];
  undefined1 auStack_7d8 [56];
  undefined1 auStack_7a0 [56];
  undefined1 auStack_768 [56];
  undefined1 auStack_730 [56];
  undefined1 auStack_6f8 [56];
  undefined1 auStack_6c0 [56];
  undefined1 auStack_688 [56];
  undefined1 auStack_650 [56];
  undefined1 auStack_618 [56];
  undefined1 auStack_5e0 [56];
  undefined1 auStack_5a8 [56];
  undefined1 auStack_570 [56];
  undefined1 auStack_538 [56];
  undefined1 auStack_500 [56];
  undefined1 auStack_4c8 [56];
  undefined1 auStack_490 [56];
  undefined1 auStack_458 [56];
  undefined1 auStack_420 [56];
  undefined1 auStack_3e8 [56];
  undefined1 auStack_3b0 [56];
  undefined1 auStack_378 [56];
  undefined1 auStack_340 [56];
  undefined1 auStack_308 [56];
  undefined1 auStack_2d0 [56];
  undefined1 auStack_298 [56];
  undefined1 auStack_260 [56];
  undefined1 auStack_228 [56];
  undefined1 auStack_1f0 [56];
  undefined1 auStack_1b8 [56];
  undefined1 auStack_180 [56];
  undefined1 auStack_148 [56];
  undefined1 auStack_110 [56];
  undefined1 auStack_d8 [56];
  undefined1 auStack_a0 [56];
  undefined1 auStack_68 [56];
  
  func_0x0e4db7a0();
  if ((DAT_0f76e830 == '\0') && (iVar6 = func_0x04108328(&DAT_0f76e830), iVar6 != 0)) {
    func_0x0ebcefc0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f76e7b0,0xf53dab8);
    func_0x0410844d(&DAT_0f76e830);
  }
  lStack_2a30 = param_1 + 0x18;
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f76e7b0 + 4)) * 8);
  do {
    lVar12 = *plVar11;
    if (lVar12 == -1) goto LAB_0eb73210;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f76e7b0 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0eb73210:
    puVar8 = &DAT_0f76e7b0;
    if (iRam000000000f76e810 != -0x2b3da790) goto LAB_0eb7327d;
LAB_0eb7323b:
    lVar12 = *(long *)(puVar8 + 0x68);
    if (lVar12 == 0) goto LAB_0eb7327d;
    bVar18 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar15 = lVar12 + 9;
    if (bVar18) {
      lVar15 = *(long *)(lVar12 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar18) {
      uVar13 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x0ebcf710(&puStack_2aa0,param_1,lVar15,uVar13);
  }
  else {
    puVar8 = (undefined *)plVar11[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_0eb7323b;
LAB_0eb7327d:
    func_0x0ebcf710(&puStack_2aa0,param_1,&UNK_011b19c3,0x28);
  }
  if (cStack_2a70 == '\0') {
    uStack_2c00._4_4_ = (uint)((ulong)uStack_2c00 >> 0x20);
    uStack_2c10._4_4_ = (undefined4)((ulong)uStack_2c10 >> 0x20);
    uStack_2a00 = CONCAT44(uStack_2a74,iStack_2a78);
    puStack_2a28 = puStack_2aa0;
    puStack_2a20 = puStack_2a98;
    puStack_2a18 = puStack_2a90;
    uStack_2a10 = uStack_2a88;
    uStack_2a08 = uStack_2a80;
    cStack_29f8 = cStack_2a70;
    func_0x0ebcfd00(auStack_2ba8,puStack_2aa0 + 3);
    if (auStack_2b90._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(lStack_2b98 + 0x78) + 0x60);
      iVar6 = *piVar10;
      while (iVar6 != auStack_2b90._0_4_) {
        piVar10 = piVar10 + 0x16;
        iVar6 = *piVar10;
      }
      lVar12 = *(long *)(piVar10 + 0xc);
      while (lVar12 != auStack_2ba8._8_8_) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar12 = *(long *)(piVar10 + 0xc);
      }
LAB_0eb7335f:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (auStack_2b90._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(lStack_2b98 + 0x78) + 0x48);
        iVar6 = *piVar10;
        while (iVar6 != auStack_2b90._0_4_) {
          piVar10 = piVar10 + 0x1a;
          iVar6 = *piVar10;
        }
        goto LAB_0eb7335f;
      }
      if (auStack_2b90._4_4_ == 0) {
        *(uint *)(lStack_2b98 + 0x18) = *(uint *)(lStack_2b98 + 0x18) | 0x40000;
      }
    }
    func_0x0ebd0320(auStack_2ba8,&puStack_2a28,&UNK_01323668,6);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f2ce5d8;
    uVar3 = auStack_2b90._0_8_;
    auStack_2b90._0_8_ = puVar9;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_2c10 = CONCAT44(uStack_2c10._4_4_,(undefined4)lStack_2b98);
    plStack_2c08 = (long *)0x0;
    uStack_2c00 = (long *)((ulong)uStack_2c00._4_4_ << 0x20);
    pcStack_2bf8 = (code *)0x1;
    uStack_2bf0 = 0;
    puStack_2be8 = &UNK_0da79540;
    puStack_2be0 = &SUB_048b06d0;
    puStack_2bd8 = &SUB_0b6acf10;
    puStack_2bd0 = &UNK_0ebd0930;
    puStack_2bc8 = &UNK_0ebd0b80;
    uStack_2bc0 = 0;
    auStack_2bb8 = ZEXT816(0);
    func_0x048b05a0(auStack_2ba8._8_8_,&uStack_2c10);
    uVar3 = auStack_2bb8._8_8_;
    if ((long *)auStack_2bb8._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_2bb8._8_8_ + 8);
      lVar12 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_2bb8._8_8_ + 0x10))(auStack_2bb8._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0ebd0630(auStack_2ba8);
    cStack_2938 = cStack_29f8;
    uStack_2948 = uStack_2a08;
    uStack_2940 = uStack_2a00;
    puStack_2958 = puStack_2a18;
    uStack_2950 = uStack_2a10;
    puStack_2968 = puStack_2a28;
    puStack_2960 = puStack_2a20;
    FUN_048b0bc0(auStack_2b90);
    puStack_29e8 = puStack_2968;
    puStack_29e0 = puStack_2960;
    puStack_29d8 = puStack_2958;
    uStack_29d0 = uStack_2950;
    uStack_29c8 = uStack_2948;
    uStack_29c0 = uStack_2940;
    uStack_29b8 = CONCAT71(uStack_2937,cStack_2938);
    func_0x0ebcfd00(auStack_2ba8,puStack_2968 + 3);
    if (auStack_2b90._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(lStack_2b98 + 0x78) + 0x60);
      iVar6 = *piVar10;
      while (iVar6 != auStack_2b90._0_4_) {
        piVar10 = piVar10 + 0x16;
        iVar6 = *piVar10;
      }
      lVar12 = *(long *)(piVar10 + 0xc);
      while (lVar12 != auStack_2ba8._8_8_) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar12 = *(long *)(piVar10 + 0xc);
      }
LAB_0eb735df:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (auStack_2b90._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(lStack_2b98 + 0x78) + 0x48);
        iVar6 = *piVar10;
        while (iVar6 != auStack_2b90._0_4_) {
          piVar10 = piVar10 + 0x1a;
          iVar6 = *piVar10;
        }
        goto LAB_0eb735df;
      }
      if (auStack_2b90._4_4_ == 0) {
        *(uint *)(lStack_2b98 + 0x18) = *(uint *)(lStack_2b98 + 0x18) | 0x40000;
      }
    }
    func_0x0ebd0320(auStack_2ba8,&puStack_29e8,&UNK_0146ca3d,0x10);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0126a0;
    uVar3 = auStack_2b90._0_8_;
    auStack_2b90._0_8_ = puVar9;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_2c10 = CONCAT44(uStack_2c10._4_4_,(undefined4)lStack_2b98);
    plStack_2c08 = (long *)0x0;
    uStack_2c00 = (long *)((ulong)uStack_2c00 & 0xffffffff00000000);
    pcStack_2bf8 = (code *)0x1;
    uStack_2bf0 = 0;
    puStack_2be8 = &UNK_05daeda0;
    puStack_2be0 = &SUB_048b06d0;
    puStack_2bd8 = &SUB_05daea90;
    puStack_2bd0 = &UNK_0ebd0d50;
    puStack_2bc8 = &UNK_0ebd0ec0;
    uStack_2bc0 = 0;
    auStack_2bb8 = ZEXT816(0);
    func_0x048b05a0(auStack_2ba8._8_8_,&uStack_2c10);
    uVar3 = auStack_2bb8._8_8_;
    if ((long *)auStack_2bb8._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_2bb8._8_8_ + 8);
      lVar12 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_2bb8._8_8_ + 0x10))(auStack_2bb8._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0ebd0630(auStack_2ba8);
    uStack_28f8 = (undefined1)uStack_29b8;
    uStack_2908 = uStack_29c8;
    uStack_2900 = uStack_29c0;
    puStack_2918 = puStack_29d8;
    uStack_2910 = uStack_29d0;
    puStack_2928 = puStack_29e8;
    puStack_2920 = puStack_29e0;
    FUN_048b0bc0(auStack_2b90);
    puStack_29a8 = puStack_2928;
    puStack_29a0 = puStack_2920;
    puStack_2998 = puStack_2918;
    uStack_2990 = uStack_2910;
    uStack_2988 = uStack_2908;
    uStack_2980 = uStack_2900;
    uStack_2978 = CONCAT71(uStack_28f7,uStack_28f8);
    func_0x0ebcfd00(auStack_2ba8,puStack_2928 + 3);
    if (auStack_2b90._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(lStack_2b98 + 0x78) + 0x60);
      iVar6 = *piVar10;
      while (iVar6 != auStack_2b90._0_4_) {
        piVar10 = piVar10 + 0x16;
        iVar6 = *piVar10;
      }
      lVar12 = *(long *)(piVar10 + 0xc);
      while (lVar12 != auStack_2ba8._8_8_) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar12 = *(long *)(piVar10 + 0xc);
      }
LAB_0eb7385f:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (auStack_2b90._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(lStack_2b98 + 0x78) + 0x48);
        iVar6 = *piVar10;
        while (iVar6 != auStack_2b90._0_4_) {
          piVar10 = piVar10 + 0x1a;
          iVar6 = *piVar10;
        }
        goto LAB_0eb7385f;
      }
      if (auStack_2b90._4_4_ == 0) {
        *(uint *)(lStack_2b98 + 0x18) = *(uint *)(lStack_2b98 + 0x18) | 0x40000;
      }
    }
    func_0x0ebd0320(auStack_2ba8,&puStack_29a8,&UNK_01333a7a,0xe);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0126a0;
    uVar3 = auStack_2b90._0_8_;
    auStack_2b90._0_8_ = puVar9;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_2c10 = CONCAT44(uStack_2c10._4_4_,(undefined4)lStack_2b98);
    plStack_2c08 = (long *)0x0;
    uStack_2c00 = (long *)((ulong)uStack_2c00 & 0xffffffff00000000);
    pcStack_2bf8 = (code *)0x1;
    uStack_2bf0 = 0;
    puStack_2be8 = &UNK_05daeda0;
    puStack_2be0 = &SUB_048b06d0;
    puStack_2bd8 = &SUB_05daea90;
    puStack_2bd0 = &UNK_0ebd10a0;
    puStack_2bc8 = &UNK_0ebd1210;
    uStack_2bc0 = 0;
    auStack_2bb8 = ZEXT816(0);
    func_0x048b05a0(auStack_2ba8._8_8_,&uStack_2c10);
    uVar3 = auStack_2bb8._8_8_;
    if ((long *)auStack_2bb8._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_2bb8._8_8_ + 8);
      lVar12 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_2bb8._8_8_ + 0x10))(auStack_2bb8._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0ebd0630(auStack_2ba8);
    uStack_28b8 = (undefined1)uStack_2978;
    uStack_28c8 = uStack_2988;
    uStack_28c0 = uStack_2980;
    puStack_28d8 = puStack_2998;
    uStack_28d0 = uStack_2990;
    puStack_28e8 = puStack_29a8;
    puStack_28e0 = puStack_29a0;
    FUN_048b0bc0(auStack_2b90);
    auStack_2a68._8_8_ = puStack_28e0;
    auStack_2a68._0_8_ = puStack_28e8;
    puStack_2a58 = puStack_28d8;
    uStack_2a50 = uStack_28d0;
    uStack_2a48 = uStack_28c8;
    uStack_2a40 = uStack_28c0;
    uStack_2a38 = CONCAT71(uStack_28b7,uStack_28b8);
    func_0x0ebcfd00(auStack_2ba8,puStack_28e8 + 3);
    if (auStack_2b90._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(lStack_2b98 + 0x78) + 0x60);
      iVar6 = *piVar10;
      while (iVar6 != auStack_2b90._0_4_) {
        piVar10 = piVar10 + 0x16;
        iVar6 = *piVar10;
      }
      lVar12 = *(long *)(piVar10 + 0xc);
      while (lVar12 != auStack_2ba8._8_8_) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar12 = *(long *)(piVar10 + 0xc);
      }
LAB_0eb73abf:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (auStack_2b90._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(lStack_2b98 + 0x78) + 0x48);
        iVar6 = *piVar10;
        while (iVar6 != auStack_2b90._0_4_) {
          piVar10 = piVar10 + 0x1a;
          iVar6 = *piVar10;
        }
        goto LAB_0eb73abf;
      }
      if (auStack_2b90._4_4_ == 0) {
        *(uint *)(lStack_2b98 + 0x18) = *(uint *)(lStack_2b98 + 0x18) | 0x40000;
      }
    }
    func_0x0ebd0320(auStack_2ba8,auStack_2a68,&UNK_012b0c5f,0x15);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0126a0;
    uVar3 = auStack_2b90._0_8_;
    auStack_2b90._0_8_ = puVar9;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_2c10 = CONCAT44(uStack_2c10._4_4_,(undefined4)lStack_2b98);
    plStack_2c08 = (long *)0x0;
    uStack_2c00 = (long *)((ulong)uStack_2c00 & 0xffffffff00000000);
    pcStack_2bf8 = (code *)0x1;
    uStack_2bf0 = 0;
    puStack_2be8 = &UNK_05daeda0;
    puStack_2be0 = &SUB_048b06d0;
    puStack_2bd8 = &SUB_05daea90;
    puStack_2bd0 = &UNK_0ebd13f0;
    puStack_2bc8 = &UNK_0ebd1560;
    uStack_2bc0 = 0;
    auStack_2bb8 = ZEXT816(0);
    func_0x048b05a0(auStack_2ba8._8_8_,&uStack_2c10);
    uVar3 = auStack_2bb8._8_8_;
    if ((long *)auStack_2bb8._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_2bb8._8_8_ + 8);
      lVar12 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_2bb8._8_8_ + 0x10))(auStack_2bb8._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0ebd0630(auStack_2ba8);
    uStack_2aa8 = CONCAT71(uStack_2aa8._1_7_,(undefined1)uStack_2a38);
    uStack_2ab8 = uStack_2a48;
    uStack_2ab0 = uStack_2a40;
    puStack_2ac8 = puStack_2a58;
    uStack_2ac0 = uStack_2a50;
    puStack_2ad8 = (undefined8 *)auStack_2a68._0_8_;
    puStack_2ad0 = (undefined8 *)auStack_2a68._8_8_;
    FUN_048b0bc0(auStack_2b90);
    func_0x0ebcfd00(auStack_2ba8,puStack_2ad8 + 3);
    if (auStack_2b90._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(lStack_2b98 + 0x78) + 0x60);
      iVar6 = *piVar10;
      while (iVar6 != auStack_2b90._0_4_) {
        piVar10 = piVar10 + 0x16;
        iVar6 = *piVar10;
      }
      lVar12 = *(long *)(piVar10 + 0xc);
      while (lVar12 != auStack_2ba8._8_8_) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar12 = *(long *)(piVar10 + 0xc);
      }
LAB_0eb73cef:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (auStack_2b90._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(lStack_2b98 + 0x78) + 0x48);
        iVar6 = *piVar10;
        while (iVar6 != auStack_2b90._0_4_) {
          piVar10 = piVar10 + 0x1a;
          iVar6 = *piVar10;
        }
        goto LAB_0eb73cef;
      }
      if (auStack_2b90._4_4_ == 0) {
        *(uint *)(lStack_2b98 + 0x18) = *(uint *)(lStack_2b98 + 0x18) | 0x40000;
      }
    }
    func_0x0ebd0320(auStack_2ba8,&puStack_2ad8,&UNK_0123038c,0x24);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0ef46ef8;
    uVar3 = auStack_2b90._0_8_;
    auStack_2b90._0_8_ = puVar9;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_2c10 = CONCAT44(uStack_2c10._4_4_,(undefined4)lStack_2b98);
    plStack_2c08 = (long *)0x0;
    uStack_2c00 = (long *)((ulong)uStack_2c00 & 0xffffffff00000000);
    pcStack_2bf8 = (code *)0x1;
    uStack_2bf0 = 0;
    puStack_2be8 = &UNK_04906f70;
    puStack_2be0 = &SUB_048b06d0;
    puStack_2bd8 = &SUB_04906c50;
    puStack_2bd0 = &UNK_0ebd1740;
    puStack_2bc8 = &UNK_0ebd18a0;
    uStack_2bc0 = 0;
    auStack_2bb8 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_2ba8._8_8_,&uStack_2c10);
    uVar3 = auStack_2bb8._8_8_;
    if ((long *)auStack_2bb8._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_2bb8._8_8_ + 8);
      lVar12 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_2bb8._8_8_ + 0x10))(auStack_2bb8._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    func_0x0ebd0630(auStack_2ba8);
    FUN_048b0bc0(auStack_2b90);
  }
  if ((DAT_0f76e1e0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f76e1e0), iVar6 != 0)) {
    func_0x0ebb9e00();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f76e160,0xf53dab8);
    func_0x0410844d(&DAT_0f76e1e0);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f76e160 + 4)) * 8);
  do {
    lVar12 = *plVar11;
    if (lVar12 == -1) goto LAB_0eb73e80;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f76e160 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0eb73e80:
    puVar8 = &DAT_0f76e160;
    if (iRam000000000f76e1c0 != -0x2b3da790) goto LAB_0eb73f07;
LAB_0eb73eab:
    lVar12 = *(long *)(puVar8 + 0x68);
    if (lVar12 == 0) goto LAB_0eb73f07;
    bVar18 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar15 = lVar12 + 9;
    if (bVar18) {
      lVar15 = *(long *)(lVar12 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar18) {
      uVar13 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x0ebd1a80(&puStack_2aa0,param_1,lVar15,uVar13);
    if (cStack_2a70 != '\0') goto LAB_0eb73ee8;
LAB_0eb73f2d:
    uStack_2aa8 = CONCAT71(uStack_2a6f,cStack_2a70);
    uStack_2ab8 = uStack_2a80;
    puStack_2ac8 = puStack_2a90;
    uStack_2ac0 = uStack_2a88;
    puStack_2ad8 = puStack_2aa0;
    puStack_2ad0 = puStack_2a98;
    func_0x0ebd2070(auStack_2ba8,puStack_2aa0 + 3);
    if (auStack_2b90._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(lStack_2b98 + 0x78) + 0x60);
      iVar6 = *piVar10;
      while (iVar6 != auStack_2b90._0_4_) {
        piVar10 = piVar10 + 0x16;
        iVar6 = *piVar10;
      }
      lVar12 = *(long *)(piVar10 + 0xc);
      while (lVar12 != auStack_2ba8._8_8_) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar12 = *(long *)(piVar10 + 0xc);
      }
LAB_0eb73fef:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (auStack_2b90._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(lStack_2b98 + 0x78) + 0x48);
        iVar6 = *piVar10;
        while (iVar6 != auStack_2b90._0_4_) {
          piVar10 = piVar10 + 0x1a;
          iVar6 = *piVar10;
        }
        goto LAB_0eb73fef;
      }
      if (auStack_2b90._4_4_ == 0) {
        *(uint *)(lStack_2b98 + 0x18) = *(uint *)(lStack_2b98 + 0x18) | 0x40000;
      }
    }
    if ((DAT_0f76e148 == '\0') && (iVar6 = func_0x04108328(&DAT_0f76e148), iVar6 != 0)) {
      func_0x0ebb9440();
      func_0x0410844d(&DAT_0f76e148);
    }
    puVar9 = puStack_2ad8;
    uStack_2ab0 = 0x3571369700000001;
    if ((DAT_0f76e1e0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f76e1e0), iVar6 != 0)) {
      func_0x0ebb9e00();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f76e160,0xf53dab8);
      func_0x0410844d(&DAT_0f76e1e0);
    }
    plVar11 = (long *)(puVar9[3] +
                      (ulong)((int)((ulong)(puVar9[4] - puVar9[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f76e160 + 4)) * 8);
    do {
      lVar12 = *plVar11;
      if (lVar12 == -1) goto LAB_0eb74090;
      plVar11 = (long *)(puVar9[6] + lVar12 * 0x18);
    } while (*(uint *)(puVar9[6] + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f76e160 + 4));
    if (plVar11 == (long *)puVar9[7]) {
LAB_0eb74090:
      auStack_2ba8._0_8_ = &DAT_0f76e160;
    }
    else {
      auStack_2ba8._0_8_ = plVar11[2];
    }
    auStack_2ba8._8_8_ = puVar9 + 3;
    func_0x0ed621a0(auStack_2ba8,uStack_2ab0._4_4_);
    auStack_2ba8._0_2_ = 0x10;
    auStack_2ba8._8_8_ = &puStack_2ad0;
    lStack_2b98 = CONCAT44(lStack_2b98._4_4_,uStack_2ab0._4_4_);
    auStack_2b90 = (undefined1  [16])0x0;
    auStack_2b80 = (undefined1  [16])0x0;
    puStack_2b70 = (undefined8 *)0x0;
    auStack_2b68._0_9_ = ZEXT89(0x737465736572700e);
    lStack_2b50 = 0;
    lStack_2b48 = 0;
    lStack_2b40 = 0;
    uStack_2b38 = 0;
    uStack_2b34 = 0;
    lStack_2b30 = 0;
    lStack_2b28 = 0;
    uStack_2b20 = 0x3f600000;
    func_0x048afb10(&lStack_2b50,8);
    uStack_2af8 = 0;
    uStack_2af4 = 0;
    lStack_2af0 = 0;
    lStack_2b08 = 0;
    uStack_2b00 = 0;
    uStack_2afe = 0;
    uStack_2afc = 0;
    lStack_2b18 = 0;
    lStack_2b10 = 0;
    uStack_2ae8 = 0xff00;
    uStack_2ae4 = uStack_2ae4 & 0xffffff00;
    uStack_2ae0 = uStack_2ae0 & 0xffffff00;
    uStack_2adc = 0;
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f4dbba8;
    uVar3 = auStack_2b90._0_8_;
    auStack_2b90._0_8_ = puVar9;
    if ((long *)uVar3 != (long *)0x0) {
      (**(code **)(*(long *)uVar3 + 8))();
    }
    uStack_2c10 = CONCAT44(uStack_2c10._4_4_,(undefined4)lStack_2b98);
    plStack_2c08 = (long *)0x0;
    uStack_2c00 = (long *)((ulong)uStack_2c00 & 0xffffffff00000000);
    pcStack_2bf8 = (code *)0x1;
    uStack_2bf0 = 0;
    puStack_2be8 = &UNK_0ebd6310;
    puStack_2be0 = &SUB_048b06d0;
    puStack_2bd8 = &UNK_0ebd4b60;
    puStack_2bd0 = &UNK_0ebd63d0;
    puStack_2bc8 = &UNK_0ebd6610;
    uStack_2bc0 = 0;
    auStack_2bb8 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_2ba8._8_8_,&uStack_2c10);
    uVar3 = auStack_2bb8._8_8_;
    if ((long *)auStack_2bb8._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_2bb8._8_8_ + 8);
      lVar12 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_2bb8._8_8_ + 0x10))(auStack_2bb8._8_8_);
        func_0x0412c2d0(uVar3);
      }
    }
    uVar3 = auStack_2ba8._8_8_;
    if ((DAT_0f550a20 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550a20), iVar6 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_2c10 = CONCAT44(uStack_2c10._4_4_,_DAT_0f550a0c);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    *(undefined1 (*) [16])(plVar11 + 1) = (undefined1  [16])0x0;
    *plVar11 = (long)&UNK_0ef439d0;
    plStack_2c08 = plVar11 + 3;
    uVar4 = auStack_2b90._0_8_;
    uVar5 = auStack_2b90._8_8_;
    auStack_2b90 = (undefined1  [16])0x0;
    plVar11[3] = uVar4;
    plVar11[4] = uVar5;
    plVar11[7] = (long)puStack_2b70;
    plVar11[5] = auStack_2b80._0_8_;
    plVar11[6] = auStack_2b80._8_8_;
    auStack_2b80 = (undefined1  [16])0x0;
    puStack_2b70 = (undefined8 *)0x0;
    plVar11[10] = lStack_2b58;
    plVar11[8] = auStack_2b68._0_8_;
    plVar11[9] = auStack_2b68._8_8_;
    auStack_2b68 = (undefined1  [16])0x0;
    lStack_2b58 = 0;
    plVar11[0xb] = lStack_2b50;
    plVar11[0xc] = lStack_2b48;
    plVar11[0xd] = lStack_2b40;
    lStack_2b50 = 0;
    lStack_2b48 = 0;
    lStack_2b40 = 0;
    plVar11[0xe] = CONCAT44(uStack_2b34,uStack_2b38);
    plVar11[0xf] = lStack_2b30;
    plVar11[0x10] = lStack_2b28;
    uStack_2b38 = 0;
    uStack_2b34 = 0;
    lStack_2b30 = 0;
    lStack_2b28 = 0;
    *(undefined4 *)(plVar11 + 0x11) = uStack_2b20;
    plVar11[0x12] = lStack_2b18;
    plVar11[0x13] = lStack_2b10;
    plVar11[0x14] = lStack_2b08;
    lStack_2b18 = 0;
    lStack_2b10 = 0;
    lStack_2b08 = 0;
    plVar11[0x17] = lStack_2af0;
    plVar11[0x15] = CONCAT44(uStack_2afc,CONCAT22(uStack_2afe,uStack_2b00));
    plVar11[0x16] = CONCAT44(uStack_2af4,uStack_2af8);
    uStack_2b00 = 0;
    uStack_2afe = 0;
    uStack_2afc = 0;
    uStack_2af8 = 0;
    uStack_2af4 = 0;
    lStack_2af0 = 0;
    *(ulong *)((long)plVar11 + 0xc5) = CONCAT17(uStack_2adc,CONCAT43(uStack_2ae0,uStack_2ae4._1_3_))
    ;
    plVar11[0x18] = CONCAT44(uStack_2ae4,CONCAT22(uStack_2ae6,uStack_2ae8));
    auStack_2a68 = (undefined1  [16])0x0;
    uStack_2c00 = plVar11;
    func_0x048afd20(uVar3,&uStack_2c10);
    plVar11 = uStack_2c00;
    if (uStack_2c00 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_2c00 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*uStack_2c00 + 0x10))(uStack_2c00);
        func_0x0412c2d0(plVar11);
      }
    }
    uVar4 = auStack_2a68._8_8_;
    if ((long *)auStack_2a68._8_8_ != (long *)0x0) {
      LOCK();
      plVar11 = (long *)(auStack_2a68._8_8_ + 8);
      lVar12 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*(long *)auStack_2a68._8_8_ + 0x10))(auStack_2a68._8_8_);
        func_0x0412c2d0(uVar4);
      }
    }
    lVar12 = *(long *)(uVar3 + 0x10);
    iVar6 = *(int *)(uVar3 + 0x1c);
    if (iVar6 == 2) {
      piVar10 = *(int **)(*(long *)(lVar12 + 0x78) + 0x60);
      iVar6 = *piVar10;
      while (iVar6 != *(int *)(uVar3 + 0x18)) {
        piVar10 = piVar10 + 0x16;
        iVar6 = *piVar10;
      }
      for (; *(long *)(piVar10 + 0xc) != *(long *)(uVar3 + 8); piVar10 = *(int **)(piVar10 + 0xe)) {
      }
LAB_0eb7461a:
      piVar10[4] = piVar10[4] | auStack_2ba8._0_4_ << 0x10;
    }
    else {
      if (iVar6 == 1) {
        piVar10 = *(int **)(*(long *)(lVar12 + 0x78) + 0x48);
        iVar6 = *piVar10;
        while (iVar6 != *(int *)(uVar3 + 0x18)) {
          piVar10 = piVar10 + 0x1a;
          iVar6 = *piVar10;
        }
        goto LAB_0eb7461a;
      }
      if (iVar6 == 0) {
        *(uint *)(lVar12 + 0x18) = *(uint *)(lVar12 + 0x18) | auStack_2ba8._0_4_ << 0x10;
      }
    }
    FUN_048b0bc0(auStack_2b90);
    lVar12 = func_0x0e236fd0(lStack_2a30);
    if (*(int *)(lVar12 + 0x60) != -0x2b3da790) goto LAB_0eb7467a;
LAB_0eb74638:
    lVar12 = *(long *)(lVar12 + 0x68);
    if (lVar12 == 0) goto LAB_0eb7467a;
    bVar18 = (*(byte *)(lVar12 + 8) & 1) != 0;
    lVar15 = lVar12 + 9;
    if (bVar18) {
      lVar15 = *(long *)(lVar12 + 0x18);
    }
    uVar13 = (ulong)(*(byte *)(lVar12 + 8) >> 1);
    if (bVar18) {
      uVar13 = *(ulong *)(lVar12 + 0x10);
    }
    func_0x0ebb7d80(&puStack_2aa0,param_1,lVar15,uVar13);
  }
  else {
    puVar8 = (undefined *)plVar11[2];
    if (*(int *)(puVar8 + 0x60) == -0x2b3da790) goto LAB_0eb73eab;
LAB_0eb73f07:
    func_0x0ebd1a80(&puStack_2aa0,param_1,&DAT_011ab9b0,0x1f);
    if (cStack_2a70 == '\0') goto LAB_0eb73f2d;
LAB_0eb73ee8:
    lVar12 = func_0x0e236fd0(lStack_2a30);
    if (*(int *)(lVar12 + 0x60) == -0x2b3da790) goto LAB_0eb74638;
LAB_0eb7467a:
    func_0x0ebb7d80(&puStack_2aa0,param_1,&UNK_01425a49,0x1c);
  }
  if (cStack_2a70 != '\0') {
    return;
  }
  puVar9 = puStack_2aa0 + 3;
  lVar12 = func_0x0e236fd0(puVar9);
  for (pbVar14 = (byte *)puStack_2aa0[10]; pbVar14 != (byte *)puStack_2aa0[0xb];
      pbVar14 = pbVar14 + 0x38) {
    bVar2 = *pbVar14;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1d) goto LAB_0eb7474a;
    }
    else if (*(long *)(pbVar14 + 8) == 0x1d) {
LAB_0eb7474a:
      if ((bVar2 & 1) == 0) {
        pbVar16 = pbVar14 + 1;
      }
      else {
        pbVar16 = *(byte **)(pbVar14 + 0x10);
      }
      auVar19[0] = -(*pbVar16 == DAT_014e1c20);
      auVar19[1] = -(pbVar16[1] == DAT_014e1c20._1_1_);
      auVar19[2] = -(pbVar16[2] == DAT_014e1c20._2_1_);
      auVar19[3] = -(pbVar16[3] == DAT_014e1c20._3_1_);
      auVar19[4] = -(pbVar16[4] == DAT_014e1c20._4_1_);
      auVar19[5] = -(pbVar16[5] == DAT_014e1c20._5_1_);
      auVar19[6] = -(pbVar16[6] == DAT_014e1c20._6_1_);
      auVar19[7] = -(pbVar16[7] == DAT_014e1c20._7_1_);
      auVar19[8] = -(pbVar16[8] == DAT_014e1c20._8_1_);
      auVar19[9] = -(pbVar16[9] == DAT_014e1c20._9_1_);
      auVar19[10] = -(pbVar16[10] == DAT_014e1c20._10_1_);
      auVar19[0xb] = -(pbVar16[0xb] == DAT_014e1c20._11_1_);
      auVar19[0xc] = -(pbVar16[0xc] == DAT_014e1c20._12_1_);
      auVar19[0xd] = -(pbVar16[0xd] == DAT_014e1c20._13_1_);
      auVar19[0xe] = -(pbVar16[0xe] == DAT_014e1c20._14_1_);
      auVar19[0xf] = -(pbVar16[0xf] == DAT_014e1c20._15_1_);
      auVar20[0] = -(pbVar16[0xd] == DAT_014e80e0);
      auVar20[1] = -(pbVar16[0xe] == DAT_014e80e0._1_1_);
      auVar20[2] = -(pbVar16[0xf] == DAT_014e80e0._2_1_);
      auVar20[3] = -(pbVar16[0x10] == DAT_014e80e0._3_1_);
      auVar20[4] = -(pbVar16[0x11] == DAT_014e80e0._4_1_);
      auVar20[5] = -(pbVar16[0x12] == DAT_014e80e0._5_1_);
      auVar20[6] = -(pbVar16[0x13] == DAT_014e80e0._6_1_);
      auVar20[7] = -(pbVar16[0x14] == DAT_014e80e0._7_1_);
      auVar20[8] = -(pbVar16[0x15] == DAT_014e80e0._8_1_);
      auVar20[9] = -(pbVar16[0x16] == DAT_014e80e0._9_1_);
      auVar20[10] = -(pbVar16[0x17] == DAT_014e80e0._10_1_);
      auVar20[0xb] = -(pbVar16[0x18] == DAT_014e80e0._11_1_);
      auVar20[0xc] = -(pbVar16[0x19] == DAT_014e80e0._12_1_);
      auVar20[0xd] = -(pbVar16[0x1a] == DAT_014e80e0._13_1_);
      auVar20[0xe] = -(pbVar16[0x1b] == DAT_014e80e0._14_1_);
      auVar20[0xf] = -(pbVar16[0x1c] == DAT_014e80e0._15_1_);
      auVar20 = auVar20 & auVar19;
      if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar14 != (byte *)puStack_2aa0[0xb]) {
    iVar6 = *(int *)(pbVar14 + 0x1c);
    if ((DAT_0f561458 == '\0') && (iVar7 = func_0x04108328(&DAT_0f561458), iVar7 != 0)) {
      func_0x05eada10(0xf561440);
      func_0x0410844d(&DAT_0f561458);
    }
    if (iVar6 != _DAT_0f561444) goto LAB_0eb749ef;
  }
  if (iStack_2a78 == 0) {
    if ((*(int *)(lVar12 + 0x60) != -0x2b3da790) || (*(long *)(lVar12 + 0x68) == 0))
    goto LAB_0eb747ed;
    lVar12 = *(long *)(lVar12 + 0x68) + 0x38;
  }
  else {
    lVar12 = func_0x048b0c90(puVar9,lVar12,uStack_2a74,1);
    if (lVar12 == 0) {
      auStack_2ba8 = (undefined1  [16])0x0;
      func_0x048b0d20(auStack_2ba8);
      lVar12 = auStack_2ba8._0_8_;
      if (auStack_2ba8._0_8_ == 0) goto LAB_0eb747ed;
    }
    if ((*(int *)(lVar12 + 0x50) == -0x45dcb126) && (*(long *)(lVar12 + 0x58) != 0)) {
      lVar12 = *(long *)(lVar12 + 0x58) + 0x40;
    }
    else {
LAB_0eb747ed:
      lVar12 = 0;
    }
  }
  uStack_2c10 = 0;
  uStack_2c00 = (long *)&UNK_05ead3e0;
  pcStack_2bf8 = (code *)&UNK_05ead970;
  uStack_2bf0 = CONCAT35(uStack_2bf0._5_3_,0x17fe5f144);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x18,0);
  }
  *puVar9 = 0x1005000150001;
  puVar9[1] = &UNK_01254d89;
  puVar9[2] = &UNK_01254d89;
  auStack_2b90._8_8_ = &UNK_05ead970;
  auStack_2b90._0_8_ = &UNK_05ead3e0;
  auStack_2b80._0_5_ = 0x17fe5f144;
  uStack_2c10 = 0;
  auStack_2ba8._8_8_ = puVar9;
  auStack_2ba8._0_8_ = &UNK_0daac7f0;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_014590aa;
  puStack_2ad8 = (undefined8 *)0x21;
  puStack_2ad0 = (undefined8 *)0x1d;
  *(ulong *)((long)puVar9 + 0xd) = CONCAT53(_UNK_014590a5,_DAT_014590a2);
  *(undefined8 *)((long)puVar9 + 0x15) = uVar3;
  uVar3 = CONCAT35(_DAT_014590a2,_UNK_0145909d);
  *puVar9 = _DAT_01459095;
  puVar9[1] = uVar3;
  *(undefined1 *)((long)puVar9 + 0x1d) = 0;
  puStack_2ac8 = puVar9;
  lVar12 = func_0x048b5060(lVar12,&puStack_2ad8);
  *(undefined **)(lVar12 + 0x20) = &UNK_0daac7f0;
  pcVar17 = (code *)&UNK_05ead970;
  if ((undefined1 *)(lVar12 + 0x20) != auStack_2ba8) {
    puVar9 = (undefined8 *)(lVar12 + 0x28);
    if (*(code **)(lVar12 + 0x40) == (code *)0x0) {
LAB_0eb74969:
      uVar3 = auStack_2ba8._8_8_;
      auStack_2ba8._8_8_ = 0;
      *puVar9 = uVar3;
    }
    else {
      (**(code **)(lVar12 + 0x40))(puVar9);
      if (auStack_2b80[4] != '\0') {
        if (auStack_2b80[4] != '\x02') goto LAB_0eb74969;
        (*(code *)auStack_2b90._0_8_)(5,auStack_2ba8 + 8,puVar9);
      }
    }
    *(undefined8 *)(lVar12 + 0x38) = auStack_2b90._0_8_;
    *(undefined8 *)(lVar12 + 0x40) = auStack_2b90._8_8_;
    *(undefined4 *)(lVar12 + 0x48) = auStack_2b80._0_4_;
    *(char *)(lVar12 + 0x4c) = auStack_2b80[4];
    pcVar17 = (code *)auStack_2b90._8_8_;
  }
  if (((ulong)puStack_2ad8 & 1) != 0) {
    thunk_FUN_0ee326a0(puStack_2ac8,(ulong)puStack_2ad8 & 0xfffffffffffffffe);
    pcVar17 = (code *)auStack_2b90._8_8_;
  }
  if (pcVar17 != (code *)0x0) {
    (*pcVar17)(auStack_2ba8 + 8);
  }
  if (pcStack_2bf8 != (code *)0x0) {
    (*pcStack_2bf8)(&uStack_2c10);
  }
LAB_0eb749ef:
  func_0x0eb77f50(auStack_2870,&puStack_2aa0,&UNK_014b1d68,0x10);
  func_0x0eb77f50(auStack_2838,auStack_2870,&UNK_01463312,0x17);
  func_0x0eb77f50(auStack_2800,auStack_2838,&UNK_011a59b0,0x1d);
  func_0x0eb77f50(auStack_27c8,auStack_2800,&UNK_013fcef9,0x16);
  func_0x0eb77f50(auStack_2790,auStack_27c8,&UNK_0134424a,0x1f);
  func_0x0eb77f50(auStack_2758,auStack_2790,&DAT_013d3092,0x14);
  func_0x0eb77f50(auStack_2720,auStack_2758,&UNK_011a114e,0x13);
  func_0x0eb77f50(auStack_26e8,auStack_2720,&UNK_012f53d9,0x11);
  func_0x0eb77f50(auStack_26b0,auStack_26e8,&UNK_01467903,0x1a);
  func_0x0eb77f50(auStack_2678,auStack_26b0,&UNK_012c5ee1,0x18);
  func_0x0eb77f50(auStack_2640,auStack_2678,&UNK_0139eea2,0xe);
  func_0x0eb77f50(auStack_2608,auStack_2640,&UNK_0128e9b3,0x19);
  func_0x0eb77f50(auStack_25d0,auStack_2608,&DAT_011fba0d,0x22);
  func_0x0eb77f50(auStack_2598,auStack_25d0,&DAT_012f8d9e,0x18);
  func_0x0eb77f50(auStack_2560,auStack_2598,&DAT_01380b38,0x1a);
  func_0x0eb77f50(auStack_2528,auStack_2560,&DAT_012936f6,0x16);
  func_0x0eb77f50(auStack_24f0,auStack_2528,&DAT_013e6fa6,0x17);
  func_0x0eb77f50(auStack_24b8,auStack_24f0,&UNK_0132defd,0x18);
  func_0x0eb77f50(auStack_2480,auStack_24b8,&DAT_01365adf,0x17);
  func_0x0eb77f50(auStack_2448,auStack_2480,&DAT_011a59ce,0x1a);
  func_0x0eb77f50(auStack_2410,auStack_2448,&DAT_013129e3,0x1a);
  func_0x0eb77f50(auStack_23d8,auStack_2410,&DAT_012df6d5,0x18);
  func_0x0eb77f50(auStack_23a0,auStack_23d8,&UNK_0122ada1,0x1a);
  func_0x0eb77f50(auStack_2368,auStack_23a0,&DAT_012abadc,0x1c);
  func_0x0eb77f50(auStack_2330,auStack_2368,&DAT_01295a6e,0x19);
  func_0x0eb77f50(auStack_22f8,auStack_2330,&DAT_0132df32,0x19);
  func_0x0eb77f50(auStack_22c0,auStack_22f8,&DAT_013ba1c8,0x14);
  func_0x0eb77f50(auStack_2288,auStack_22c0,&DAT_01230325,0x18);
  func_0x0eb77f50(auStack_2250,auStack_2288,&DAT_012c5efa,0x14);
  func_0x0eb77f50(auStack_2218,auStack_2250,&UNK_01333a89,0x1b);
  func_0x0eb77f50(auStack_21e0,auStack_2218,&DAT_0143b884,0x1c);
  func_0x0eb77f50(auStack_21a8,auStack_21e0,&DAT_0137e57f,0x17);
  func_0x0eb77f50(auStack_2170,auStack_21a8,&UNK_014b1d88,0x12);
  func_0x0eb77f50(auStack_2138,auStack_2170,&UNK_013b6d07,0xf);
  func_0x0eb77f50(auStack_2100,auStack_2138,&DAT_0144b3c0,0x12);
  func_0x0eb77f50(auStack_20c8,auStack_2100,&DAT_013d307d,0x14);
  func_0x0eb77f50(auStack_2090,auStack_20c8,&DAT_01298b42,0x18);
  func_0x0eb77f50(auStack_2058,auStack_2090,&UNK_0148706b,0xf);
  func_0x0eb77f50(auStack_2020,auStack_2058,&DAT_01275d55,0x1d);
  func_0x0eb77f50(auStack_1fe8,auStack_2020,&DAT_013e2e49,0x18);
  func_0x0eb77f50(auStack_1fb0,auStack_1fe8,&UNK_01230a44,0x20);
  func_0x0eb77f50(auStack_1f78,auStack_1fb0,&DAT_013ecd6d,0x2b);
  func_0x0eb77f50(auStack_1f40,auStack_1f78,&DAT_01405fb7,0x1f);
  func_0x0eb77f50(auStack_1f08,auStack_1f40,&DAT_01365afd,0x13);
  func_0x0eb77f50(auStack_1ed0,auStack_1f08,&DAT_012f8dc8,0x11);
  func_0x0eb77f50(auStack_1e98,auStack_1ed0,&DAT_011c6ce2,0x1c);
  func_0x0eb77f50(auStack_1e60,auStack_1e98,&DAT_0144fbbe,0x18);
  func_0x0eb77f50(auStack_1e28,auStack_1e60,&UNK_013129fe,0x10);
  func_0x0eb77f50(auStack_1df0,auStack_1e28,&UNK_0132df8f,0xf);
  func_0x0eb77f50(auStack_1db8,auStack_1df0,&UNK_012657dc,0x1c);
  func_0x0eb77f50(auStack_1d80,auStack_1db8,&UNK_013cd4c5,0x14);
  func_0x0eb77f50(auStack_1d48,auStack_1d80,&UNK_011abfb3,0x13);
  func_0x0eb77f50(auStack_1d10,auStack_1d48,&DAT_011f6254,0x15);
  func_0x0eb77f50(auStack_1cd8,auStack_1d10,&DAT_0132df4c,0x15);
  func_0x0eb77f50(auStack_1ca0,auStack_1cd8,&DAT_0144fbd7,0x1a);
  func_0x0eb77f50(auStack_1c68,auStack_1ca0,&UNK_0149d327,0x16);
  func_0x0eb77f50(auStack_1c30,auStack_1c68,&UNK_011dbdab,0x17);
  func_0x0eb77f50(auStack_1bf8,auStack_1c30,&DAT_013ba297,0x23);
  func_0x0eb77f50(auStack_1bc0,auStack_1bf8,&DAT_0144fbf2,0x11);
  func_0x0eb77f50(auStack_1b88,auStack_1bc0,&DAT_0141b679,0x14);
  func_0x0eb77f50(auStack_1b50,auStack_1b88,&DAT_012f8dda,0x14);
  func_0x0eb77f50(auStack_1b18,auStack_1b50,&DAT_0142080c,0x17);
  func_0x0eb77f50(auStack_1ae0,auStack_1b18,&DAT_0125fb22,0x22);
  func_0x0eb77f50(auStack_1aa8,auStack_1ae0,&DAT_01365b11,0x14);
  func_0x0eb77f50(auStack_1a70,auStack_1aa8,&DAT_0125fb45,0x1c);
  func_0x0eb77f50(auStack_1a38,auStack_1a70,&DAT_01384244,0x15);
  func_0x0eb77f50(auStack_1a00,auStack_1a38,&DAT_0122adef,0x14);
  func_0x0eb77f50(auStack_19c8,auStack_1a00,&DAT_013cd4da,0x14);
  func_0x0eb77f50(auStack_1990,auStack_19c8,&DAT_011dbd96,0x14);
  func_0x0eb77f50(auStack_1958,auStack_1990,&DAT_01435f3c,0x16);
  func_0x0eb77f50(auStack_1920,auStack_1958,&DAT_01467974,0x14);
  func_0x0eb77f50(auStack_18e8,auStack_1920,&DAT_011f5d19,0x12);
  func_0x0eb77f50(auStack_18b0,auStack_18e8,&UNK_013ececc,0x1b);
  func_0x0eb77f50(auStack_1878,auStack_18b0,&UNK_0143b819,0xe);
  func_0x0eb77f50(auStack_1840,auStack_1878,&DAT_0141b68e,0x16);
  func_0x0eb77f50(auStack_1808,auStack_1840,&UNK_013d2c91,0x28);
  func_0x0eb77f50(auStack_17d0,auStack_1808,&UNK_012b0c84,0x13);
  func_0x0eb77f50(auStack_1798,auStack_17d0,&UNK_0129371d,0x16);
  func_0x0eb77f50(auStack_1760,auStack_1798,&DAT_012984b3,0x20);
  func_0x0eb77f50(auStack_1728,auStack_1760,&DAT_01298493,0x1f);
  func_0x0eb77f50(auStack_16f0,auStack_1728,&DAT_0139ee0f,0x24);
  func_0x0eb77f50(auStack_16b8,auStack_16f0,&UNK_0140098a,0xf);
  func_0x0eb77f50(auStack_1680,auStack_16b8,&UNK_0132df7d,0x11);
  func_0x0eb77f50(auStack_1648,auStack_1680,&UNK_012fe2da,0x16);
  func_0x0eb77f50(auStack_1610,auStack_1648,&DAT_01215a46,0x1e);
  func_0x0eb77f50(auStack_15d8,auStack_1610,&DAT_01365b3d,0x11);
  func_0x0eb77f50(auStack_15a0,auStack_15d8,&UNK_013d3218,0x1e);
  func_0x0eb77f50(auStack_1568,auStack_15a0,&DAT_01365b26,0x16);
  func_0x0eb77f50(auStack_1530,auStack_1568,&DAT_01405d10,0x21);
  func_0x0eb77f50(auStack_14f8,auStack_1530,&DAT_01454c37,0x12);
  func_0x0eb77f50(auStack_14c0,auStack_14f8,&DAT_011abede,0x1b);
  func_0x0eb77f50(auStack_1488,auStack_14c0,&DAT_0127f0ce,0x1b);
  func_0x0eb77f50(auStack_1450,auStack_1488,&DAT_0127eed6,0x11);
  func_0x0eb77f50(auStack_1418,auStack_1450,&DAT_01454c4a,0x13);
  func_0x0eb77f50(auStack_13e0,auStack_1418,&DAT_011e0c6e,0x1a);
  func_0x0eb77f50(auStack_13a8,auStack_13e0,&DAT_012e5553,0x1a);
  func_0x0eb77f50(auStack_1370,auStack_13a8,&DAT_0134e197,0x1c);
  func_0x0eb77f50(auStack_1338,auStack_1370,&DAT_01265275,0x1a);
  func_0x0eb77f50(auStack_1300,auStack_1338,&DAT_014d776a,0x1c);
  func_0x0eb77f50(auStack_12c8,auStack_1300,&DAT_011c01e7,0x12);
  func_0x0eb77f50(auStack_1290,auStack_12c8,&DAT_011abec8,0x15);
  func_0x0eb77f50(auStack_1258,auStack_1290,&DAT_0137e4c4,0x11);
  func_0x0eb77f50(auStack_1220,auStack_1258,&DAT_0127f06d,0x15);
  func_0x0eb77f50(auStack_11e8,auStack_1220,&UNK_011fbce6,0xf);
  func_0x0eb77f50(auStack_11b0,auStack_11e8,&DAT_0131842f,0x15);
  func_0x0eb77f50(auStack_1178,auStack_11b0,&UNK_0127f370,0x19);
  func_0x0eb77f50(auStack_1140,auStack_1178,&DAT_01333b6c,0x10);
  func_0x0eb77f50(auStack_1108,auStack_1140,&UNK_011abfc7,0x16);
  func_0x0eb77f50(auStack_10d0,auStack_1108,&DAT_01486a84,0x17);
  func_0x0eb77f50(auStack_1098,auStack_10d0,&DAT_014bbed6,0x13);
  func_0x0eb77f50(auStack_1060,auStack_1098,&UNK_014a20a6,0xe);
  func_0x0eb77f50(auStack_1028,auStack_1060,&UNK_01399f53,0x14);
  func_0x0eb77f50(auStack_ff0,auStack_1028,&DAT_014bbf2d,0x13);
  func_0x0eb77f50(auStack_fb8,auStack_ff0,&UNK_01318761,0x13);
  func_0x0eb77f50(auStack_f80,auStack_fb8,&DAT_012652dc,0x11);
  func_0x0eb77f50(auStack_f48,auStack_f80,&DAT_012fe1ca,0x1b);
  func_0x0eb77f50(auStack_f10,auStack_f48,&DAT_01454c1f,0x17);
  func_0x0eb77f50(auStack_ed8,auStack_f10,&UNK_0139ef70,0x18);
  func_0x0eb77f50(auStack_ea0,auStack_ed8,&DAT_011e093f,0x17);
  func_0x0eb77f50(auStack_e68,auStack_ea0,&UNK_0143bb80,0x1d);
  func_0x0eb77f50(auStack_e30,auStack_e68,&UNK_0134eb05,0x2c);
  func_0x0eb77f50(auStack_df8,auStack_e30,&DAT_0139eefa,0x1a);
  func_0x0eb77f50(auStack_dc0,auStack_df8,&DAT_014549d0,0x17);
  func_0x0eb77f50(auStack_d88,auStack_dc0,&DAT_0134e206,0x15);
  func_0x0eb77f50(auStack_d50,auStack_d88,&DAT_01420765,0x11);
  func_0x0eb77f50(auStack_d18,auStack_d50,&DAT_01383b07,0x19);
  func_0x0eb77f50(auStack_ce0,auStack_d18,&UNK_012657f9,0x1a);
  func_0x0eb77f50(auStack_ca8,auStack_ce0,&DAT_012cad05,0x2d);
  func_0x0eb77f50(auStack_c70,auStack_ca8,&DAT_011c68a7,0x17);
  func_0x0eb77f50(auStack_c38,auStack_c70,&DAT_0134e1dd,0x1c);
  func_0x0eb77f50(auStack_c00,auStack_c38,&UNK_012e55b5,0x14);
  func_0x0eb77f50(auStack_bc8,auStack_c00,&DAT_011dba4e,0x14);
  func_0x0eb77f50(auStack_b90,auStack_bc8,&DAT_01333a4c,0x1b);
  func_0x0eb77f50(auStack_b58,auStack_b90,&DAT_011ab9ea,0x1b);
  func_0x0eb77f50(auStack_b20,auStack_b58,&UNK_013ba1b6,0x11);
  func_0x0eb77f50(auStack_ae8,auStack_b20,&DAT_01486ac4,0x12);
  func_0x0eb77f50(auStack_ab0,auStack_ae8,&DAT_011fb5c6,0x20);
  func_0x0eb77f50(auStack_a78,auStack_ab0,&DAT_0124bde7,0x26);
  func_0x0eb77f50(auStack_a40,auStack_a78,&UNK_011c6e79,0x12);
  func_0x0eb77f50(auStack_a08,auStack_a40,&DAT_0146ca59,0x12);
  func_0x0eb77f50(auStack_9d0,auStack_a08,&UNK_012e55ca,0x14);
  func_0x0eb77f50(auStack_998,auStack_9d0,&DAT_01333b7d,0x14);
  func_0x0eb77f50(auStack_960,auStack_998,&UNK_012df16d,0x12);
  func_0x0eb77f50(auStack_928,auStack_960,&UNK_013ecee8,0x13);
  func_0x0eb77f50(auStack_8f0,auStack_928,&UNK_014d77d9,0x19);
  func_0x0eb77f50(auStack_8b8,auStack_8f0,&UNK_012652ee,0xe);
  func_0x0eb77f50(auStack_880,auStack_8b8,&DAT_014d7754,0x15);
  func_0x0eb77f50(auStack_848,auStack_880,&DAT_014bbea3,0x1b);
  func_0x0eb77f50(auStack_810,auStack_848,&DAT_012fdcb5,0x1f);
  func_0x0eb77f50(auStack_7d8,auStack_810,&DAT_011c6cff,0x12);
  func_0x0eb77f50(auStack_7a0,auStack_7d8,&DAT_014d75ff,0x19);
  func_0x0eb77f50(auStack_768,auStack_7a0,&DAT_01420725,0x12);
  func_0x0eb77f50(auStack_730,auStack_768,&DAT_011a599c,0x13);
  func_0x0eb77f50(auStack_6f8,auStack_730,&DAT_012cad9d,0x16);
  func_0x0eb77f50(auStack_6c0,auStack_6f8,&DAT_01265716,0x15);
  func_0x0eb77f50(auStack_688,auStack_6c0,&DAT_0143b870,0x13);
  func_0x0eb77f50(auStack_650,auStack_688,&DAT_01333ac6,0x14);
  func_0x0eb77f50(auStack_618,auStack_650,&UNK_014a26ab,0x1d);
  func_0x0eb77f50(auStack_5e0,auStack_618,&DAT_012abac8,0x13);
  func_0x0eb77f50(auStack_5a8,auStack_5e0,&UNK_013ba3d3,0x12);
  func_0x0eb77f50(auStack_570,auStack_5a8,&UNK_012e3138,0xd);
  func_0x0eb77f50(auStack_538,auStack_570,&DAT_0124b884,0x18);
  func_0x0eb77f50(auStack_500,auStack_538,&UNK_01265814,0xe);
  func_0x0eb77f50(auStack_4c8,auStack_500,&DAT_01333a18,0x11);
  func_0x0eb77f50(auStack_490,auStack_4c8,&UNK_01265823,0x16);
  func_0x0eb77f50(auStack_458,auStack_490,&UNK_01333c2c,0x15);
  func_0x0eb77f50(auStack_420,auStack_458,&UNK_0126583a,0x17);
  func_0x0eb77f50(auStack_3e8,auStack_420,&UNK_014bc5ed,0x1d);
  func_0x0eb77f50(auStack_3b0,auStack_3e8,&DAT_01246120,0x12);
  func_0x0eb77f50(auStack_378,auStack_3b0,&UNK_014bc60b,0x16);
  func_0x0eb77f50(auStack_340,auStack_378,&DAT_01383b21,0x13);
  func_0x0eb77f50(auStack_308,auStack_340,&UNK_013d3237,0x14);
  func_0x0eb77f50(auStack_2d0,auStack_308,&DAT_0136ad12,0x11);
  func_0x0eb77f50(auStack_298,auStack_2d0,&UNK_01333c42,0x12);
  func_0x0eb77f50(auStack_260,auStack_298,&DAT_013d2bc9,0x16);
  func_0x0eb77f50(auStack_228,auStack_260,&UNK_012b14cb,0x1f);
  func_0x0eb77f50(auStack_1f0,auStack_228,&DAT_011c6d5e,0x1a);
  func_0x0eb77f50(auStack_1b8,auStack_1f0,&UNK_0137ea88,0x12);
  func_0x0eb77f50(auStack_180,auStack_1b8,&DAT_012fdc2f,0x1e);
  func_0x0eb77f50(&puStack_2a28,auStack_180,&UNK_013183e9,0xf);
  func_0x0eb77f50(&puStack_2968,&puStack_2a28,&DAT_01486a44,0x13);
  func_0x0eb77f50(&puStack_29e8,&puStack_2968,&UNK_0142096a,0x12);
  func_0x0eb77f50(&puStack_2928,&puStack_29e8,&DAT_011c6871,0x20);
  func_0x0eb77f50(&puStack_29a8,&puStack_2928,&UNK_014207a0,0x22);
  func_0x0eb77f50(&puStack_28e8,&puStack_29a8,&DAT_0128ab12,0x1a);
  func_0x0eb77f50(auStack_2a68,&puStack_28e8,&DAT_01454ca8,0x1c);
  func_0x0eb77f50(&puStack_2ad8,auStack_2a68,&UNK_013ba3e6,0x24);
  func_0x0eb77f50(&uStack_2c10,&puStack_2ad8,&DAT_0137a414,0x16);
  func_0x0eb77f50(auStack_2ba8,&uStack_2c10,&DAT_013c86de,0x15);
  func_0x0eb77f50(auStack_28a8,auStack_2ba8,&DAT_0143ba3f,0x1e);
  func_0x0eb77f50(auStack_110,&puStack_2aa0,&UNK_0122ab26,0x10);
  func_0x0eb77f50(auStack_d8,auStack_110,&UNK_013a0aaf,0x16);
  func_0x0eb77f50(auStack_a0,auStack_d8,&UNK_011ed14f,0x1e);
  func_0x0eb77f50(auStack_68,auStack_a0,&DAT_0120ff36,0x12);
  func_0x0eb77f50(auStack_28a8,auStack_68,&DAT_01312eb4,0x1d);
  func_0x0eb77f50(auStack_2870,auStack_28a8,&UNK_014b5f0e,0x17);
  func_0x0eb77f50(auStack_2838,auStack_2870,&UNK_013ee60b,0x17);
  func_0x0eb77f50(auStack_2800,auStack_2838,&UNK_01231fae,0x14);
  func_0x0eb77f50(auStack_27c8,auStack_2800,&UNK_013506f7,0xe);
  func_0x0eb77f50(auStack_2790,auStack_27c8,&UNK_012cc470,0x1d);
  func_0x0eb77f50(auStack_2758,auStack_2790,&UNK_0127a534,0x1b);
  func_0x0eb77f50(auStack_2720,auStack_2758,&DAT_01208797,0x1e);
  func_0x0eb77f50(auStack_26e8,auStack_2720,&DAT_012bdedb,0x19);
  func_0x0eb77f50(auStack_26b0,auStack_26e8,&DAT_0142ca36,0x16);
  func_0x0eb77f50(auStack_2678,auStack_26b0,&DAT_0145f59e,0x1d);
  func_0x0eb77f50(auStack_2640,auStack_2678,&UNK_0142ca4d,0x18);
  func_0x0eb77f50(auStack_2608,auStack_2640,&DAT_0125840c,0x28);
  func_0x0eb77f50(auStack_25d0,auStack_2608,&DAT_014ae88e,0x20);
  func_0x0eb77f50(auStack_2598,auStack_25d0,&DAT_014795cc,0x1e);
  func_0x0eb77f50(auStack_2560,auStack_2598,&DAT_0128b564,0x27);
  func_0x0eb77f50(auStack_2528,auStack_2560,&DAT_0135c51a,0x20);
  func_0x0eb77f50(auStack_24f0,auStack_2528,&DAT_014795aa,0x21);
  func_0x0eb77f50(auStack_24b8,auStack_24f0,&DAT_01390f2f,0x20);
  func_0x0eb77f50(auStack_2480,auStack_24b8,&DAT_0130a98e,0x1f);
  func_0x0eb77f50(auStack_2448,auStack_2480,&DAT_014480ea,0x23);
  func_0x0eb77f50(auStack_2410,auStack_2448,&DAT_01486a9c,0x27);
  func_0x0eb77f50(auStack_23d8,auStack_2410,&DAT_011fb59f,0x26);
  func_0x0eb77f50(auStack_23a0,auStack_23d8,&DAT_012f1ee6,0x1d);
  func_0x0eb77f50(auStack_2368,auStack_23a0,&DAT_013dfcea,0x1d);
  func_0x0eb77f50(auStack_2330,auStack_2368,&DAT_01222b41,0x2b);
  func_0x0eb77f50(auStack_22f8,auStack_2330,&DAT_0130a92a,0x1b);
  func_0x0eb77f50(auStack_22c0,auStack_22f8,&UNK_0145f561,0x1e);
  func_0x0eb77f50(auStack_2288,auStack_22c0,&DAT_01272549,0x1f);
  func_0x0eb77f50(auStack_2250,auStack_2288,&DAT_01340c4c,0x18);
  func_0x0eb77f50(auStack_2218,auStack_2250,&DAT_0145f5bc,0x21);
  func_0x0eb77f50(auStack_21e0,auStack_2218,&DAT_013aca38,0x1d);
  func_0x0eb77f50(auStack_21a8,auStack_21e0,&DAT_01412f6c,0x1f);
  func_0x0eb77f50(auStack_2170,auStack_21a8,&DAT_01340c65,0x20);
  func_0x0eb77f50(auStack_2138,auStack_2170,&DAT_0123d4e5,0x27);
  func_0x0eb77f50(auStack_2100,auStack_2138,&DAT_0145f5de,0x17);
  func_0x0eb77f50(auStack_20c8,auStack_2100,&DAT_011d456f,0x1e);
  func_0x0eb77f50(auStack_2090,auStack_20c8,&DAT_013f9e7b,0x18);
  func_0x0eb77f50(auStack_2058,auStack_2090,&DAT_014ae8af,0x21);
  func_0x0eb77f50(auStack_2020,auStack_2058,&DAT_01495787,0x24);
  func_0x0eb77f50(auStack_1fe8,auStack_2020,&DAT_012a48c2,0x1b);
  func_0x0eb77f50(auStack_1fb0,auStack_1fe8,&DAT_0147958f,0x1a);
  func_0x0eb77f50(auStack_1f78,auStack_1fb0,&DAT_0119d16f,0x21);
  func_0x0eb77f50(auStack_1f40,auStack_1f78,&DAT_0130a946,0x21);
  func_0x0eb77f50(auStack_1f08,auStack_1f40,&DAT_012d76f6,0x21);
  func_0x0eb77f50(auStack_1ed0,auStack_1f08,&DAT_01258435,0x21);
  func_0x0eb77f50(auStack_1e98,auStack_1ed0,&DAT_0135c53b,0x29);
  func_0x0eb77f50(auStack_1e60,auStack_1e98,&DAT_012f1f9e,0x1c);
  func_0x0eb77f50(auStack_1e28,auStack_1e60,&DAT_014c9b55,0x19);
  func_0x0eb77f50(auStack_1df0,auStack_1e28,&DAT_01258457,0x20);
  func_0x0eb77f50(auStack_1db8,auStack_1df0,&DAT_012f1f5c,0x27);
  func_0x0eb77f50(auStack_1d80,auStack_1db8,&DAT_0128b4f9,0x20);
  func_0x0eb77f50(auStack_1d48,auStack_1d80,&DAT_0119d14f,0x1f);
  func_0x0eb77f50(auStack_1d10,auStack_1d48,&DAT_0142ca66,0x1f);
  func_0x0eb77f50(auStack_1cd8,auStack_1d10,&DAT_0135c4f8,0x21);
  func_0x0eb77f50(auStack_1ca0,auStack_1cd8,&DAT_012f1f3d,0x1e);
  func_0x0eb77f50(auStack_1c68,auStack_1ca0,&DAT_0142ca86,0x27);
  func_0x0eb77f50(auStack_1c30,auStack_1c68,&DAT_012087da,0x22);
  func_0x0eb77f50(auStack_1bf8,auStack_1c30,&DAT_0147956e,0x20);
  func_0x0eb77f50(auStack_1bc0,auStack_1bf8,&DAT_01325c26,0x26);
  func_0x0eb77f50(auStack_1b88,auStack_1bc0,&DAT_01272569,0x16);
  func_0x0eb77f50(auStack_1b50,auStack_1b88,&DAT_012f1f04,0x38);
  func_0x0eb77f50(auStack_1b18,auStack_1b50,&DAT_0145f5f6,0x26);
  func_0x0eb77f50(auStack_1ae0,auStack_1b18,&DAT_0145f61d,0x1c);
  func_0x0eb77f50(auStack_1aa8,auStack_1ae0,&DAT_01412f8c,0x27);
  func_0x0eb77f50(auStack_1a70,auStack_1aa8,&DAT_012d76d1,0x24);
  func_0x0eb77f50(auStack_1a38,auStack_1a70,&DAT_01222b15,0x18);
  func_0x0eb77f50(auStack_1a00,auStack_1a38,&DAT_012d7772,0x27);
  func_0x0eb77f50(auStack_19c8,auStack_1a00,&DAT_01325c99,0x1f);
  func_0x0eb77f50(auStack_1990,auStack_19c8,&DAT_012a492b,0x24);
  func_0x0eb77f50(auStack_1958,auStack_1990,&DAT_01412fb4,0x1e);
  func_0x0eb77f50(auStack_1920,auStack_1958,&DAT_013c55a5,0x20);
  func_0x0eb77f50(auStack_18e8,auStack_1920,&DAT_01325c7b,0x1d);
  func_0x0eb77f50(auStack_18b0,auStack_18e8,&DAT_01222b6d,0x1f);
  func_0x0eb77f50(auStack_1878,auStack_18b0,&DAT_0142caae,0x2d);
  func_0x0eb77f50(auStack_1840,auStack_1878,&DAT_011d458e,0x25);
  func_0x0eb77f50(auStack_1808,auStack_1840,&DAT_012724ec,0x21);
  func_0x0eb77f50(auStack_17d0,auStack_1808,&DAT_011b9017,0x20);
  func_0x0eb77f50(auStack_1798,auStack_17d0,&DAT_013aca56,0x1e);
  func_0x0eb77f50(auStack_1760,auStack_1798,&DAT_014ae8d1,0x1f);
  func_0x0eb77f50(auStack_1728,auStack_1760,&DAT_0130a968,0x25);
  func_0x0eb77f50(auStack_16f0,auStack_1728,&DAT_0145f63a,0x1f);
  func_0x0eb77f50(auStack_16b8,auStack_16f0,&DAT_0135c4d0,0x27);
  func_0x0eb77f50(auStack_1680,auStack_16b8,&DAT_012087fd,0x17);
  func_0x0eb77f50(auStack_1648,auStack_1680,&DAT_01258478,0x28);
  func_0x0eb77f50(auStack_1610,auStack_1648,&DAT_012f1f84,0x19);
  func_0x0eb77f50(auStack_15d8,auStack_1610,&UNK_0130a8e2,0x1d);
  func_0x0eb77f50(auStack_15a0,auStack_15d8,&DAT_012d7739,0x1e);
  func_0x0eb77f50(auStack_1568,auStack_15a0,&DAT_01340c86,0x2e);
  func_0x0eb77f50(auStack_1530,auStack_1568,&DAT_01325c4d,0x2d);
  func_0x0eb77f50(auStack_14f8,auStack_1530,&DAT_0145f65a,0x26);
  func_0x0eb77f50(auStack_14c0,auStack_14f8,&DAT_011ed18c,0x18);
  func_0x0eb77f50(auStack_1488,auStack_14c0,&DAT_0128b51a,0x1b);
  func_0x0eb77f50(auStack_1450,auStack_1488,&DAT_012d7758,0x19);
  func_0x0eb77f50(auStack_1418,auStack_1450,&DAT_012bdef5,0x1d);
  func_0x0eb77f50(auStack_13e0,auStack_1418,&DAT_013aca75,0x1d);
  func_0x0eb77f50(auStack_13a8,auStack_13e0,&DAT_012a48de,0x1d);
  func_0x0eb77f50(auStack_1370,auStack_13a8,&DAT_012a48fc,0x2e);
  func_0x0eb77f50(auStack_1338,auStack_1370,&DAT_013f9e94,0x25);
  func_0x0eb77f50(auStack_1300,auStack_1338,&DAT_0128b536,0x2d);
  func_0x0eb77f50(auStack_12c8,auStack_1300,&DAT_013dfcc4,0x25);
  func_0x0eb77f50(auStack_1290,auStack_12c8,&DAT_012087b6,0x23);
  func_0x0eb77f50(auStack_1258,auStack_1290,&DAT_011b8fed,0x29);
  func_0x0eb77f50(auStack_1220,auStack_1258,&DAT_012d7718,0x20);
  func_0x0eb77f50(auStack_11e8,auStack_1220,&DAT_01272530,0x18);
  func_0x0eb77f50(auStack_11b0,auStack_11e8,&DAT_0123d47a,0x25);
  func_0x0eb77f50(auStack_1178,auStack_11b0,&UNK_01376c73,0x18);
  func_0x0eb77f50(auStack_1140,auStack_1178,&DAT_0127250e,0x21);
  func_0x0eb77f50(auStack_1108,auStack_1140,&UNK_01479538,0x28);
  func_0x0eb77f50(auStack_10d0,auStack_1108,&UNK_01325be4,0x22);
  func_0x0eb77f50(auStack_1098,auStack_10d0,&DAT_0123d50d,0x30);
  func_0x0eb77f50(auStack_1060,auStack_1098,&DAT_013aca93,0x2f);
  func_0x0eb77f50(auStack_1028,auStack_1060,&DAT_0142cadc,0x26);
  func_0x0eb77f50(auStack_ff0,auStack_1028,&DAT_0128b5c1,0x1e);
  func_0x0eb77f50(auStack_fb8,auStack_ff0,&DAT_0145f681,0x21);
  func_0x0eb77f50(auStack_f80,auStack_fb8,&DAT_012f2079,0x25);
  func_0x0eb77f50(auStack_f48,auStack_f80,&DAT_0135c5ac,0x20);
  func_0x0eb77f50(auStack_f10,auStack_f48,&DAT_0142cb03,0x23);
  func_0x0eb77f50(auStack_ed8,auStack_f10,&DAT_01495802,0x27);
  func_0x0eb77f50(auStack_ea0,auStack_ed8,&DAT_012a4979,0x27);
  func_0x0eb77f50(auStack_e68,auStack_ea0,&DAT_014ae908,0x28);
  func_0x0eb77f50(auStack_e30,auStack_e68,&DAT_012a49a1,0x21);
  func_0x0eb77f50(auStack_df8,auStack_e30,&DAT_012f2014,0x25);
  func_0x0eb77f50(auStack_dc0,auStack_df8,&DAT_014c9b88,0x20);
  func_0x0eb77f50(auStack_d88,auStack_dc0,&DAT_01222b98,0x25);
  func_0x0eb77f50(auStack_d50,auStack_d88,&DAT_0144810e,0x1d);
  func_0x0eb77f50(auStack_d18,auStack_d50,&DAT_01340cb5,0x20);
  func_0x0eb77f50(auStack_ce0,auStack_d18,&DAT_013acad2,0x1c);
  func_0x0eb77f50(auStack_ca8,auStack_ce0,&DAT_0145f6a3,0x1a);
  func_0x0eb77f50(auStack_c70,auStack_ca8,&DAT_012f203a,0x1d);
  func_0x0eb77f50(auStack_c38,auStack_c70,&DAT_0130aa18,0x24);
  func_0x0eb77f50(auStack_c00,auStack_c38,&DAT_0130aa3d,0x27);
  func_0x0eb77f50(auStack_bc8,auStack_c00,&DAT_01272586,0x1a);
  func_0x0eb77f50(auStack_b90,auStack_bc8,&DAT_012584e2,0x22);
  func_0x0eb77f50(auStack_b58,auStack_b90,&DAT_01222bbe,0x25);
  func_0x0eb77f50(auStack_b20,auStack_b58,&DAT_01390f8d,0x1f);
  func_0x0eb77f50(auStack_ae8,auStack_b20,&DAT_0141305b,0x23);
  func_0x0eb77f50(auStack_ab0,auStack_ae8,&DAT_012bdf1b,0x1f);
  func_0x0eb77f50(auStack_a78,auStack_ab0,&DAT_0141307f,0x20);
  func_0x0eb77f50(auStack_a40,auStack_a78,&DAT_0128b5fa,0x34);
  func_0x0eb77f50(auStack_a08,auStack_a40,&DAT_011ed1b0,0x30);
  func_0x0eb77f50(auStack_9d0,auStack_a08,&DAT_01258505,0x1f);
  func_0x0eb77f50(auStack_998,auStack_9d0,&DAT_0149582a,0x1f);
  func_0x0eb77f50(auStack_960,auStack_998,&DAT_012f2058,0x20);
  func_0x0eb77f50(auStack_928,auStack_960,&DAT_011d45bd,0x21);
  func_0x0eb77f50(auStack_8f0,auStack_928,&DAT_013c55f8,0x1c);
  func_0x0eb77f50(auStack_8b8,auStack_8f0,&DAT_0128b62f,0x28);
  func_0x0eb77f50(auStack_880,auStack_8b8,&DAT_011ed1f9,0x1d);
  func_0x0eb77f50(auStack_848,auStack_880,&DAT_013f9ef0,0x1c);
  func_0x0eb77f50(auStack_810,auStack_848,&DAT_011ed1e1,0x17);
  func_0x0eb77f50(auStack_7d8,auStack_810,&DAT_0123d54e,0x20);
  func_0x0eb77f50(auStack_7a0,auStack_7d8,&DAT_013c5615,0x1f);
  func_0x0eb77f50(auStack_768,auStack_7a0,&DAT_013dfd08,0x1e);
  func_0x0eb77f50(auStack_730,auStack_768,&DAT_013acaef,0x28);
  func_0x0eb77f50(auStack_6f8,auStack_730,&DAT_01325d0f,0x29);
  func_0x0eb77f50(auStack_6c0,auStack_6f8,&DAT_011b908c,0x1f);
  func_0x0eb77f50(auStack_688,auStack_6c0,&DAT_01222c03,0x1c);
  func_0x0eb77f50(auStack_650,auStack_688,&DAT_01391000,0x1e);
  func_0x0eb77f50(auStack_618,auStack_650,&DAT_013c5635,0x23);
  func_0x0eb77f50(auStack_5e0,auStack_618,&DAT_012725b9,0x1f);
  func_0x0eb77f50(auStack_5a8,auStack_5e0,&DAT_013f9f0d,0x1e);
  func_0x0eb77f50(auStack_570,auStack_5a8,&DAT_0119d1af,0x24);
  func_0x0eb77f50(auStack_538,auStack_570,&DAT_0128b658,0x24);
  func_0x0eb77f50(auStack_500,auStack_538,&DAT_01340cd6,0x17);
  func_0x0eb77f50(auStack_4c8,auStack_500,&DAT_0147960d,0x21);
  func_0x0eb77f50(auStack_490,auStack_4c8,&DAT_014c9b6f,0x18);
  func_0x0eb77f50(auStack_458,auStack_490,&DAT_013f9ec2,0x2d);
  func_0x0eb77f50(auStack_420,auStack_458,&DAT_01412ff6,0x31);
  func_0x0eb77f50(auStack_3e8,auStack_420,&DAT_011b9065,0x26);
  func_0x0eb77f50(auStack_3b0,auStack_3e8,&DAT_01413028,0x32);
  func_0x0eb77f50(auStack_378,auStack_3b0,&DAT_0128b5e0,0x19);
  func_0x0eb77f50(auStack_340,auStack_378,&DAT_012725a1,0x17);
  func_0x0eb77f50(auStack_308,auStack_340,&DAT_01376ca1,0x18);
  func_0x0eb77f50(auStack_2d0,auStack_308,&DAT_014ae8f1,0x16);
  func_0x0eb77f50(auStack_298,auStack_2d0,&DAT_011b9047,0x1d);
  func_0x0eb77f50(auStack_260,auStack_298,&DAT_0149584a,0x1f);
  func_0x0eb77f50(auStack_228,auStack_260,&DAT_0145f6be,0x1f);
  func_0x0eb77f50(auStack_1f0,auStack_228,&DAT_012725d9,0x1f);
  func_0x0eb77f50(auStack_1b8,auStack_1f0,&DAT_012a49c3,0x24);
  func_0x0eb77f50(auStack_180,auStack_1b8,&DAT_014795eb,0x21);
  func_0x0eb77f50(&puStack_2a28,auStack_180,&DAT_014c9ba9,0x25);
  func_0x0eb77f50(&puStack_2968,&puStack_2a28,&DAT_01390fad,0x25);
  func_0x0eb77f50(&puStack_29e8,&puStack_2968,&DAT_0119d191,0x1d);
  func_0x0eb77f50(&puStack_2928,&puStack_29e8,&DAT_01222be4,0x1e);
  func_0x0eb77f50(&puStack_29a8,&puStack_2928,&DAT_01390fd3,0x2c);
  func_0x0eb77f50(&puStack_28e8,&puStack_29a8,&UNK_01400918,0x17);
  func_0x0eb77f50(auStack_2a68,&puStack_28e8,&UNK_013e74c9,0x1b);
  func_0x0eb77f50(&puStack_2ad8,auStack_2a68,&UNK_014d0f4e,0x1b);
  func_0x0eb77f50(&uStack_2c10,&puStack_2ad8,&UNK_014d90b5,0x16);
  func_0x0eb77f50(auStack_2ba8,&uStack_2c10,&UNK_01280a11,0x1b);
  func_0x0eb77f50(auStack_148,auStack_2ba8,&DAT_01226bc7,0x18);
  func_0x0eb77f50(auStack_2ba8,&puStack_2aa0,&UNK_012fdd94,0x15);
  func_0x0eb77f50(&uStack_2c10,auStack_2ba8,&UNK_012fe2f1,0x11);
  func_0x0eb77f50(&uStack_2c10,&puStack_2aa0,&UNK_011e8d75,0x25);
  func_0x0eb77f50(auStack_2ba8,&uStack_2c10,&DAT_012b7675,0x27);
  func_0x0eb77f50(&puStack_2ad8,auStack_2ba8,&DAT_014c31da,0x2a);
  iStack_2a78 = 3;
  uStack_2a74 = 0xd339e83e;
  func_0x0e236fd0(puStack_2aa0 + 3);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0f4db500;
  auStack_2ba8._8_8_ = 0;
  auStack_2ba8._0_8_ = puVar9;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_011ab9c7;
  lStack_2b98 = 0x21;
  auStack_2b90._8_8_ = puVar9;
  auStack_2b90._0_8_ = 0x1f;
  *(ulong *)((long)puVar9 + 0xf) = CONCAT71(_UNK_011ab9c0,DAT_011ab9bf);
  *(undefined8 *)((long)puVar9 + 0x17) = uVar3;
  uVar3 = CONCAT17(DAT_011ab9bf,_UNK_011ab9b8);
  *puVar9 = _DAT_011ab9b0;
  puVar9[1] = uVar3;
  *(undefined1 *)((long)puVar9 + 0x1f) = 0;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_011ab9c7;
  auStack_2b80._8_8_ = 0x1f;
  auStack_2b80._0_8_ = 0x21;
  *(ulong *)((long)puVar9 + 0xf) = CONCAT71(_UNK_011ab9c0,DAT_011ab9bf);
  *(undefined8 *)((long)puVar9 + 0x17) = uVar3;
  uVar3 = CONCAT17(DAT_011ab9bf,_UNK_011ab9b8);
  *puVar9 = _DAT_011ab9b0;
  puVar9[1] = uVar3;
  *(undefined1 *)((long)puVar9 + 0x1f) = 0;
  lStack_2b48 = 0;
  lStack_2b40 = 0;
  lStack_2b58 = 0;
  lStack_2b50 = 0;
  auStack_2b68 = (undefined1  [16])0x0;
  uStack_2b38 = 0x3f600000;
  puStack_2b70 = puVar9;
  func_0x048afb10(auStack_2b68,8);
  lStack_2b10 = 0;
  lStack_2b08 = 0;
  uStack_2b20 = 0;
  uStack_2b1c = 0;
  lStack_2b18 = 0;
  lStack_2b30 = 0;
  lStack_2b28 = 0;
  uStack_2b00 = 0xff00;
  uStack_2afc = uStack_2afc & 0xffffff00;
  uStack_2af8 = uStack_2af8 & 0xffffff00;
  uStack_2af4 = uStack_2af4 & 0xffffff00;
  if ((DAT_0f74bf70 == '\0') && (iVar6 = func_0x04108328(&DAT_0f74bf70), iVar6 != 0)) {
    func_0x0e2370c0(0xf74bf58);
    func_0x0410844d(&DAT_0f74bf70);
  }
  uStack_2c10 = CONCAT44(uStack_2c10._4_4_,uStack_2a74);
  plStack_2c08 = (long *)0x0;
  uStack_2c00 = (long *)((ulong)uStack_2c00 & 0xffffffff00000000);
  pcStack_2bf8 = (code *)0x2;
  uStack_2bf0 = 1;
  puStack_2be8 = &UNK_0ebba030;
  puStack_2be0 = &UNK_07d98660;
  puStack_2bd8 = &UNK_0ebb9d40;
  puStack_2bd0 = &UNK_0ebba050;
  puStack_2bc8 = &UNK_0ebba720;
  uStack_2bc0 = 0;
  auStack_2bb8 = (undefined1  [16])0x0;
  func_0x048b05a0(&puStack_2a98,&uStack_2c10);
  uVar3 = auStack_2bb8._8_8_;
  if ((long *)auStack_2bb8._8_8_ != (long *)0x0) {
    LOCK();
    plVar11 = (long *)(auStack_2bb8._8_8_ + 8);
    lVar12 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*(long *)auStack_2bb8._8_8_ + 0x10))(auStack_2bb8._8_8_);
      func_0x0412c2d0(uVar3);
    }
  }
  puStack_2ac8 = (undefined8 *)uStack_2a88;
  uStack_2ac0 = uStack_2a80;
  puStack_2ad8 = puStack_2a98;
  puStack_2ad0 = puStack_2a90;
  func_0x0ebb8670(&uStack_2c10,&puStack_2ad8,auStack_2ba8);
  FUN_048b0bc0(auStack_2ba8);
  return;
}



/* ---- referenced strings ----
 * 0x11ab9b0  minecraft:apply_knockback_rules
 * 0x11ab9bf  _knockback_rules
 * 0x1459095  [__dev_aid:actor_def_version]
 * 0x14590a2  tor_def_version]
 * 0x14e80e0  tor_def_version]
 */
