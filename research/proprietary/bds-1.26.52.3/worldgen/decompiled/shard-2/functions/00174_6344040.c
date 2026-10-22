/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6444040 (ELF vaddr 0x6344040)
 * Label: caller-of-callee
 * Body:  [[06444040, 06444aae] [06444ab0, 06444ae9] [06444af0, 06444b57] [06444b60, 06444bac] [06444bb0, 06444c87] [06444c90, 06444e97] [06444ea0, 06445cc8] [06445cd0, 06445d6c] [06445d70, 06445fe7] [06445ff0, 06446160] [06446170, 0644627e] [0644654e, 0644657d] [0644660c, 06446645]]
 * Ghidra: FUN_06444040
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_06444040(long param_1,undefined8 *param_2,byte *param_3)

{
  long *plVar1;
  undefined8 *****pppppuVar2;
  long *plVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  uint uVar10;
  char cVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *******pppppppuVar16;
  undefined *puVar17;
  ulong *puVar18;
  undefined8 uVar19;
  undefined8 *******pppppppuVar20;
  undefined8 *******pppppppuVar21;
  undefined *puVar22;
  undefined8 *****pppppuVar23;
  ulong uVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 *******pppppppuVar27;
  undefined8 ******ppppppuVar28;
  byte *pbVar29;
  ulong uVar30;
  undefined8 *******pppppppuVar31;
  undefined8 *******pppppppuVar32;
  undefined8 *******pppppppuVar33;
  undefined8 *******pppppppuVar34;
  undefined8 *******pppppppuVar35;
  undefined8 *******pppppppuVar36;
  undefined8 *******pppppppuVar37;
  undefined8 ******ppppppuVar38;
  byte *pbVar39;
  undefined8 ******ppppppuVar40;
  ulong uVar41;
  undefined8 *******pppppppuVar42;
  bool bVar43;
  byte *pbStack_e38;
  byte *pbStack_e30;
  byte *pbStack_e28;
  byte *pbStack_e18;
  ulong uStack_e10;
  undefined8 *puStack_e08;
  undefined8 *puStack_e00;
  long lStack_df8;
  undefined4 uStack_df0;
  undefined4 uStack_dec;
  undefined8 uStack_de8;
  long lStack_de0;
  byte bStack_dd8;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined *puStack_db8;
  code *pcStack_db0;
  undefined8 uStack_da8;
  undefined8 *****pppppuStack_da0;
  ulong uStack_d98;
  undefined *puStack_d90;
  undefined8 uStack_d88;
  undefined *puStack_d80;
  code *pcStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  long lStack_d10;
  undefined4 uStack_d08;
  undefined4 uStack_d04;
  undefined4 uStack_d00;
  undefined4 uStack_cfc;
  long lStack_cf8;
  byte *pbStack_ce8;
  ulong uStack_ce0;
  undefined8 *puStack_cd8;
  undefined8 *****pppppuStack_cc8;
  undefined8 *****pppppuStack_cc0;
  undefined8 *****pppppuStack_cb8;
  undefined8 *****pppppuStack_cb0;
  undefined8 uStack_ca8;
  undefined8 *****pppppuStack_ca0;
  undefined8 *****pppppuStack_c98;
  undefined8 ******ppppppuStack_c90;
  undefined8 *****pppppuStack_c88;
  undefined8 *****pppppuStack_c80;
  undefined8 *****pppppuStack_c78;
  int iStack_c70;
  undefined4 uStack_c6c;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 *****pppppuStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 *****pppppuStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined4 uStack_c20;
  byte bStack_c1c;
  undefined2 auStack_c10 [4];
  undefined8 uStack_c08;
  long *plStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined2 uStack_be8;
  undefined1 auStack_be0 [8];
  ulong uStack_bd8;
  ulong uStack_bd0;
  undefined8 *****pppppuStack_bc8;
  undefined8 *****pppppuStack_bc0;
  undefined *puStack_bb8;
  code *pcStack_bb0;
  undefined8 uStack_ba8;
  undefined8 *****pppppuStack_ba0;
  undefined8 uStack_b98;
  undefined *puStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined4 uStack_b28;
  undefined4 uStack_b24;
  undefined4 uStack_b20;
  undefined4 uStack_b1c;
  undefined8 uStack_b18;
  char cStack_b10;
  undefined *apuStack_b08 [2];
  ulong uStack_af8;
  ulong uStack_af0;
  long lStack_ae8;
  ulong uStack_ae0;
  ulong uStack_ad8;
  byte bStack_ad0;
  undefined7 uStack_acf;
  byte bStack_ac0;
  undefined7 uStack_abf;
  undefined1 auStack_ab8 [8];
  undefined8 uStack_ab0;
  ulong uStack_aa8;
  uint uStack_aa0;
  undefined1 auStack_a98 [64];
  uint uStack_a58;
  undefined1 auStack_a50 [88];
  undefined1 *puStack_9f8;
  undefined *puStack_9f0;
  undefined1 *puStack_9e8;
  undefined *puStack_9e0;
  undefined1 auStack_9d8 [38];
  char cStack_9b2;
  ulong uStack_9b0;
  ulong uStack_9a8;
  undefined8 ******appppppuStack_9a0 [2];
  undefined8 *****pppppuStack_990;
  code *pcStack_988;
  int iStack_980;
  char cStack_97c;
  undefined8 *****pppppuStack_978;
  undefined8 *****pppppuStack_970;
  undefined8 *****apppppuStack_960 [3];
  undefined8 *****pppppuStack_948;
  undefined8 *****pppppuStack_940;
  undefined8 uStack_930;
  undefined4 uStack_928;
  undefined4 uStack_924;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  undefined8 *****pppppuStack_918;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  undefined4 uStack_908;
  undefined4 uStack_904;
  undefined8 *****pppppuStack_900;
  undefined4 uStack_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  undefined8 uStack_8e8;
  undefined4 uStack_8e0;
  byte bStack_8dc;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined4 uStack_890;
  byte bStack_88c;
  byte bStack_880;
  undefined7 uStack_87f;
  undefined8 uStack_870;
  code *pcStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined1 auStack_7c8 [4];
  undefined4 uStack_7c4;
  undefined8 uStack_7c0;
  undefined8 *puStack_7b8;
  undefined8 *puStack_7b0;
  long lStack_7a8;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined4 uStack_798;
  undefined4 uStack_794;
  long lStack_790;
  byte bStack_788;
  undefined1 *puStack_6a0;
  undefined8 uStack_698;
  undefined1 auStack_690 [384];
  undefined2 uStack_510;
  undefined1 uStack_50e;
  undefined8 uStack_50c;
  undefined8 uStack_500;
  undefined1 uStack_4f8;
  undefined *apuStack_4e8 [5];
  ulong uStack_4c0;
  ulong uStack_4b8;
  undefined1 auStack_4b0 [24];
  code *pcStack_498;
  undefined1 auStack_488 [80];
  undefined1 auStack_438 [1024];
  undefined *puStack_38;
  
  if ((param_3[0x18] & 1) == 0) {
    lStack_cf8 = *(long *)(param_3 + 0x28);
    uStack_d08 = *(uint *)(param_3 + 0x18);
    uStack_d04 = *(undefined4 *)(param_3 + 0x1c);
    uStack_d00 = *(undefined4 *)(param_3 + 0x20);
    uStack_cfc = *(undefined4 *)(param_3 + 0x24);
  }
  else {
    func_0x0412e5e0(&uStack_d08,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x20));
  }
  bVar43 = (*param_3 & 1) != 0;
  _auStack_7c8 = param_3 + 1;
  if (bVar43) {
    _auStack_7c8 = *(byte **)(param_3 + 0x10);
  }
  uStack_7c0 = (ulong)(*param_3 >> 1);
  if (bVar43) {
    uStack_7c0 = *(ulong *)(param_3 + 8);
  }
  puStack_7b8 = (undefined8 *)&UNK_012bf330;
  puStack_7b0 = (undefined8 *)0xd;
  func_0x049151c0(auStack_438,auStack_7c8,2,0x2f);
  puStack_9e0 = puStack_38;
  puStack_9e8 = auStack_438;
  cVar11 = (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,&puStack_9e8);
  uVar10 = uStack_d08;
  if (cVar11 == '\0') {
    if ((uStack_d08 & 1) == 0) {
      uVar30 = (ulong)((byte)uStack_d08 >> 1);
    }
    else {
      uVar30 = CONCAT44(uStack_cfc,uStack_d00);
    }
    uVar24 = uVar30 + 0xe;
    if (0xfffffffffffffff7 < uVar24) {
      FUN_04882e30();
LAB_06446211:
      iVar12 = func_0x04108328(&DAT_0f774768);
      if (iVar12 != 0) {
        func_0x0ed58ba0(0xf7746f8);
        func_0x0eee2f40(&SUB_04904f60,0xf7746f8,0xf53dab8);
        func_0x0410844d(&DAT_0f774768);
      }
      goto LAB_06444246;
    }
    if (uVar24 < 0x17) {
      uStack_7c0 = 0;
      puStack_7b8 = (undefined8 *)0x0;
      _auStack_7c8 = (byte *)(ulong)(byte)((char)uVar24 * '\x02');
    }
    else {
      uVar41 = 0x1a;
      if ((uVar24 | 7) != 0x17) {
        uVar41 = (uVar24 | 7) + 1;
      }
      puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar41);
      if (puVar14 == (undefined8 *)0x0) {
        func_0x0eec74c0(uVar41,0);
      }
      _auStack_7c8 = (byte *)(uVar41 | 1);
      uStack_7c0 = uVar24;
      puStack_7b8 = puVar14;
    }
    puVar17 = (undefined *)((long)puStack_7b8 + 0xe);
    bVar43 = ((ulong)_auStack_7c8 & 1) != 0;
    puVar14 = (undefined8 *)(auStack_7c8 + 1);
    if (bVar43) {
      puVar14 = puStack_7b8;
    }
    *(undefined8 *)((long)puVar14 + 6) = 0x2844495555206574;
    *puVar14 = 0x6574616c706d6554;
    puVar22 = (undefined *)((long)&uStack_7c0 + 7);
    if (bVar43) {
      puVar22 = puVar17;
    }
    if (uVar30 != 0) {
      lVar15 = lStack_cf8;
      if ((uVar10 & 1) == 0) {
        lVar15 = (long)&uStack_d08 + 1;
      }
      func_0x0eee2ee0(puVar22,lVar15,uVar30);
    }
    puVar22[uVar30] = 0;
    puVar18 = (ulong *)func_0x0412f8c0(auStack_7c8,&UNK_0120a2a7,0x2b);
    uVar30 = *puVar18;
    puVar14 = (undefined8 *)puVar18[2];
    *puVar18 = 0;
    puVar18[1] = 0;
    puVar18[2] = 0;
    if (((ulong)_auStack_7c8 & 1) != 0) {
      func_0x0412a280(puStack_7b8,(ulong)_auStack_7c8 & 0xfffffffffffffffe);
    }
    if ((uVar30 & 1) == 0) goto LAB_064461b1;
    uVar30 = uVar30 & 0xfffffffffffffffe;
  }
  else {
    puStack_9f0 = puStack_38;
    puStack_9f8 = auStack_438;
    (**(code **)(*(long *)*param_2 + 0x60))(auStack_7c8,(long *)*param_2,&puStack_9f8);
    apuStack_b08[0] = (undefined1 *)0x250e76836b7ab032;
    apuStack_b08[1] = &UNK_0140f690;
    uStack_af8 = 1;
    uStack_af0 = CONCAT44(uStack_af0._4_4_,0x67);
    if (bStack_788 == 0) {
      func_0x0eedea30(&pppppuStack_bc8);
      func_0x0eedeb80(2,0x2d,auStack_7c8,&pppppuStack_bc8,apuStack_b08);
      if (((ulong)pppppuStack_bc8 & 1) != 0) {
        func_0x0412a280(puStack_bb8,(ulong)pppppuStack_bc8 & 0xfffffffffffffffe);
      }
    }
    bStack_dd8 = bStack_788;
    if ((bStack_788 & 1) == 0) {
      pbStack_e18 = _auStack_7c8;
      uStack_e10 = uStack_7c0;
      puStack_e08 = puStack_7b8;
      puStack_e00 = puStack_7b0;
      lStack_df8 = lStack_7a8;
      uStack_df0 = uStack_7a0;
      uStack_dec = uStack_79c;
      uStack_de8 = CONCAT44(uStack_794,uStack_798);
      lStack_de0 = lStack_790;
      apuStack_b08[1] = puStack_38;
      apuStack_b08[0] = auStack_438;
      func_0x0470d9a0(auStack_7c8,&UNK_013ae497,0x2c,0xd,apuStack_b08);
      lVar15 = param_2[3];
      puVar4 = *(undefined4 **)(lVar15 + 8);
      if (puVar4 < *(undefined4 **)(lVar15 + 0x10)) {
        if (((ulong)_auStack_7c8 & 1) == 0) {
          *(undefined8 **)(puVar4 + 4) = puStack_7b8;
          *puVar4 = auStack_7c8;
          puVar4[1] = uStack_7c4;
          puVar4[2] = (undefined4)uStack_7c0;
          puVar4[3] = uStack_7c0._4_4_;
        }
        else {
          func_0x0412e5e0(puVar4,puStack_7b8,uStack_7c0);
        }
        *(undefined4 **)(lVar15 + 8) = puVar4 + 6;
        *(undefined4 **)(lVar15 + 8) = puVar4 + 6;
      }
      else {
        uVar19 = func_0x04909a40(lVar15,auStack_7c8);
        *(undefined8 *)(lVar15 + 8) = uVar19;
      }
      if (((ulong)_auStack_7c8 & 1) != 0) {
        func_0x0412a280(puStack_7b8,(ulong)_auStack_7c8 & 0xfffffffffffffffe);
      }
      if (bStack_dd8 != 1) {
        lVar15 = CONCAT44(uStack_dec,uStack_df0);
        if (lVar15 != 0) {
          lVar25 = uStack_de8;
          lVar13 = lVar15;
          if (lVar15 != uStack_de8) {
            do {
              lVar25 = lVar25 + -0x40;
              func_0x048b3e80(lVar25);
            } while (lVar25 != lVar15);
            lVar13 = CONCAT44(uStack_dec,uStack_df0);
          }
          uStack_de8 = lVar15;
          func_0x0412a280(lVar13,lStack_de0 - lVar13);
        }
        puVar26 = puStack_e08;
        puVar14 = puStack_e00;
        if (puStack_e08 == (undefined8 *)0x0) goto LAB_064461b1;
        for (; puVar26 != puVar14; puVar14 = puVar14 + -10) {
          if ((*(char *)(puVar14 + -1) == '\x01') && ((*(byte *)(puVar14 + -6) & 1) != 0)) {
            func_0x0412a280(puVar14[-4],puVar14[-6] & 0xfffffffffffffffe);
          }
        }
        goto LAB_0644619f;
      }
LAB_064460e7:
      if (((ulong)pbStack_e18 & 1) == 0) goto LAB_064461b1;
      uVar30 = (ulong)pbStack_e18 & 0xfffffffffffffffe;
      puVar14 = puStack_e08;
    }
    else {
      puStack_e08 = puStack_7b8;
      pbStack_e18 = _auStack_7c8;
      uStack_e10 = uStack_7c0;
      lStack_d10 = param_1;
      if (DAT_0f774768 == '\0') goto LAB_06446211;
LAB_06444246:
      uStack_7c0 = 0xf7746f8;
      puStack_7b8 = (undefined8 *)CONCAT44(puStack_7b8._4_4_,0xffffffff);
      puStack_7b0 = (undefined8 *)&uStack_7a0;
      lStack_7a8 = 0x800000000;
      puStack_6a0 = auStack_690;
      uStack_698 = 0x800000000;
      uStack_510 = 0xfffc;
      uStack_50e = 1;
      uStack_50c = 0xffffffff00000000;
      uStack_500 = 0;
      uStack_4f8 = 0;
      _auStack_7c8 = &UNK_0f4e39b8;
      auStack_c10[0] = 0xd;
      uStack_c08 = 0;
      plStack_c00 = (long *)0x0;
      uStack_bf8 = 0;
      uStack_bf0 = 0;
      uStack_be8 = 0x100;
      func_0x0ee382a0(&bStack_880,&UNK_0f030020);
      pcStack_868 = _DAT_0f7ba058;
      uStack_860 = _DAT_0f7ba060;
      uStack_858 = 0;
      uStack_850 = 0;
      uStack_848 = 0;
      uStack_840 = 0;
      uStack_838 = 0;
      uStack_830 = 0;
      uStack_828 = 0;
      uStack_820 = 0;
      uStack_818 = 0;
      uStack_810 = 0;
      uStack_808 = 0;
      uStack_800 = 0;
      uStack_7f8 = 0;
      uStack_7f0 = 0;
      uStack_7e8 = 0;
      uStack_7e0 = 0;
      uStack_7d8 = 0;
      uStack_7d0 = 0;
      if (bStack_dd8 == 0) {
        func_0x05d8b230(&pbStack_e18);
      }
      func_0x0ed684d0(apuStack_b08,&pbStack_e18);
      apuStack_4e8[0] = &UNK_0f030080;
      ppppppuVar38 = (undefined8 ******)(uStack_7c0 + 0x18);
      puStack_bb8 = &UNK_04913860;
      pcStack_bb0 = (code *)0x0;
      uStack_ba8 = CONCAT35(uStack_ba8._5_3_,0x48240cd28);
      pppppuStack_bc8 = (undefined8 *****)auStack_c10;
      puStack_b90 = &UNK_04913840;
      pppppuStack_ba0 = ppppppuVar38;
      uStack_dc8 = (undefined8 ******)func_0x04913c20(ppppppuVar38);
      uStack_dc0 = ppppppuVar38;
      uStack_b98 = uStack_dc8;
      pppppuStack_cc8 = (undefined8 *****)func_0x04913c20(ppppppuVar38);
      pppppuStack_cc0 = ppppppuVar38;
      cVar11 = func_0x04913500(&uStack_dc8,&pppppuStack_cc8);
      if ((cVar11 == '\0') &&
         (cVar11 = FUN_0eeddcf0(&UNK_014784b5,&UNK_011ec167,0xa2,&UNK_01221c2c,&UNK_0120a2d3),
         cVar11 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      pppppuStack_ca0 = (undefined8 *****)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      if ((undefined8 ******)pppppuStack_ca0 == (undefined8 ******)0x0) {
        func_0x048b0de0(&uStack_dc8,auStack_9d8);
        _DAT_0f54fd90 = (undefined4)uStack_dc8;
        uRam000000000f54fd94 = uStack_dc8._4_4_;
        uVar6 = (undefined4)uStack_dc0;
        uVar7 = uStack_dc0._4_4_;
        uStack_dc8 = (undefined8 ******)0x0;
        uStack_dc0 = (undefined8 ******)0x0;
        plVar3 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
        _DAT_0f54fd98 = uVar6;
        uRam000000000f54fd9c = uVar7;
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar15 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar15 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            FUN_0412c2d0(plVar3);
          }
        }
        ppppppuVar40 = uStack_dc0;
        if (uStack_dc0 != (undefined8 ******)0x0) {
          LOCK();
          ppppppuVar28 = uStack_dc0 + 1;
          pppppuVar2 = *ppppppuVar28;
          *ppppppuVar28 = (undefined8 *****)((long)*ppppppuVar28 + -1);
          UNLOCK();
          if (pppppuVar2 == (undefined8 *****)0x0) {
            (*(code *)(*uStack_dc0)[2])(uStack_dc0);
            FUN_0412c2d0(ppppppuVar40);
          }
        }
        pppppuStack_ca0 = (undefined8 *****)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      }
      pppppuStack_cb8 = (undefined8 *****)&UNK_06446a30;
      pppppuStack_cb0 = (undefined8 ******)0x0;
      uStack_ca8 = (undefined8 ******)CONCAT35(uStack_ca8._5_3_,0x39ea88212);
      pppppuStack_c98 = (undefined8 ******)0x0;
      ppppppuStack_c90 = (undefined8 *******)0x0;
      puStack_db8 = &UNK_06446a30;
      pcStack_db0 = (code *)0x0;
      uStack_da8 = CONCAT35(uStack_da8._5_3_,0x39ea88212);
      pppppuStack_cc8 = (undefined8 ******)0x0;
      uStack_d98 = 0;
      puStack_d90 = &UNK_06446950;
      uStack_dc8 = (undefined8 ******)&bStack_880;
      pppppuStack_da0 = ppppppuVar38;
      cVar11 = func_0x0ed6b4a0(auStack_7c8,apuStack_b08,&uStack_dc8,&pppppuStack_bc8,apuStack_4e8);
      if ((pcStack_db0 != (code *)0x0) &&
         ((*pcStack_db0)(&uStack_dc8), (undefined8 ******)pppppuStack_cb0 != (undefined8 ******)0x0)
         ) {
        (*(code *)pppppuStack_cb0)(&pppppuStack_cc8);
      }
      if (pcStack_bb0 != (code *)0x0) {
        (*pcStack_bb0)(&pppppuStack_bc8);
      }
      func_0x04907660(&uStack_ae0);
      if (uStack_af8 != 0) {
        uStack_af0 = uStack_af8;
        func_0x0412a280(uStack_af8,lStack_ae8 - uStack_af8);
      }
      if (cVar11 == '\0') {
        func_0x04a3b850(apuStack_b08);
        func_0x0ed6c330(&pppppuStack_bc8,&puStack_7b8);
        pppppuVar2 = pppppuStack_bc0;
        if (pppppuStack_bc8 != pppppuStack_bc0) {
          ppppppuVar38 = (undefined8 ******)pppppuStack_bc8;
          do {
            while( true ) {
              if (((ulong)*ppppppuVar38 & 1) == 0) {
                pppppuVar23 = (undefined8 *****)((long)ppppppuVar38 + 1);
              }
              else {
                pppppuVar23 = ppppppuVar38[2];
              }
              uVar19 = func_0x0eee2e90(pppppuVar23);
              uVar19 = func_0x04885260(apuStack_b08,pppppuVar23,uVar19);
              uStack_dc8 = (undefined8 ******)CONCAT71(uStack_dc8._1_7_,10);
              func_0x04885260(uVar19,&uStack_dc8,1);
              lVar15 = param_2[3];
              puVar4 = *(undefined4 **)(lVar15 + 8);
              if (*(undefined4 **)(lVar15 + 0x10) <= puVar4) break;
              if (((ulong)*ppppppuVar38 & 1) == 0) {
                *(undefined8 ******)(puVar4 + 4) = ppppppuVar38[2];
                uVar6 = *(undefined4 *)((long)ppppppuVar38 + 4);
                uVar7 = *(undefined4 *)(ppppppuVar38 + 1);
                uVar8 = *(undefined4 *)((long)ppppppuVar38 + 0xc);
                *puVar4 = *(undefined4 *)ppppppuVar38;
                puVar4[1] = uVar6;
                puVar4[2] = uVar7;
                puVar4[3] = uVar8;
              }
              else {
                func_0x0412e5e0(puVar4,ppppppuVar38[2],ppppppuVar38[1]);
              }
              *(undefined4 **)(lVar15 + 8) = puVar4 + 6;
              *(undefined4 **)(lVar15 + 8) = puVar4 + 6;
              ppppppuVar38 = ppppppuVar38 + 3;
              if (ppppppuVar38 == (undefined8 ******)pppppuVar2) goto LAB_06444b87;
            }
            uVar19 = func_0x04909a40(lVar15,ppppppuVar38);
            *(undefined8 *)(lVar15 + 8) = uVar19;
            ppppppuVar38 = ppppppuVar38 + 3;
          } while (ppppppuVar38 != (undefined8 ******)pppppuVar2);
        }
LAB_06444b87:
        pppppuVar2 = pppppuStack_bc8;
        param_1 = lStack_d10;
        ppppppuVar38 = (undefined8 ******)pppppuStack_bc0;
        if ((undefined8 ******)pppppuStack_bc8 != (undefined8 ******)0x0) {
          for (; (undefined8 ******)pppppuVar2 != ppppppuVar38; ppppppuVar38 = ppppppuVar38 + -3) {
            if (((ulong)ppppppuVar38[-3] & 1) != 0) {
              func_0x0412a280(ppppppuVar38[-1],(ulong)ppppppuVar38[-3] & 0xfffffffffffffffe);
            }
          }
          pppppuStack_bc0 = pppppuVar2;
          func_0x0412a280(pppppuStack_bc8,(long)puStack_bb8 - (long)pppppuStack_bc8);
        }
        apuStack_b08[0] = _UNK_0eeed6a8;
        *(undefined8 *)((long)apuStack_b08 + *(long *)(_UNK_0eeed6a8 + -0x18)) = _UNK_0eeed6c0;
        apuStack_b08[1] = &UNK_0eeed150;
        if ((bStack_ac0 & 1) != 0) {
          func_0x0412a280(uStack_ab0,CONCAT71(uStack_abf,bStack_ac0) & 0xfffffffffffffffe);
        }
        apuStack_b08[1] = &UNK_0eeece20;
        FUN_04167a40(&uStack_af8);
        func_0x0413aec0(apuStack_b08,&UNK_0eeed6b0);
        func_0x04138180(auStack_a98);
        func_0x063ff160(&pcStack_868);
        if ((bStack_880 & 1) != 0) {
          func_0x0412a280(uStack_870,CONCAT71(uStack_87f,bStack_880) & 0xfffffffffffffffe);
        }
        plVar3 = plStack_c00;
        uStack_c08 = 0;
        plStack_c00 = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar15 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar15 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            FUN_0412c2d0(plVar3);
          }
          plVar3 = plStack_c00;
          uStack_bf8 = 0;
          if (plStack_c00 != (long *)0x0) {
            LOCK();
            plVar1 = plStack_c00 + 1;
            lVar15 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar15 == 0) {
              (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
              FUN_0412c2d0(plVar3);
            }
          }
        }
        func_0x0490a470(auStack_7c8);
        if (bStack_dd8 == 1) goto LAB_064460e7;
        lVar15 = CONCAT44(uStack_dec,uStack_df0);
        if (lVar15 != 0) {
          lVar25 = uStack_de8;
          lVar13 = lVar15;
          if (lVar15 != uStack_de8) {
            do {
              lVar25 = lVar25 + -0x40;
              func_0x048b3e80(lVar25);
            } while (lVar25 != lVar15);
            lVar13 = CONCAT44(uStack_dec,uStack_df0);
          }
          uStack_de8 = lVar15;
          func_0x0412a280(lVar13,lStack_de0 - lVar13);
        }
        puVar26 = puStack_e08;
        puVar14 = puStack_e00;
        if (puStack_e08 == (undefined8 *)0x0) goto LAB_064461b1;
        for (; puVar26 != puVar14; puVar14 = puVar14 + -10) {
          if ((*(char *)(puVar14 + -1) == '\x01') && ((*(byte *)(puVar14 + -6) & 1) != 0)) {
            func_0x0412a280(puVar14[-4],puVar14[-6] & 0xfffffffffffffffe);
          }
        }
      }
      else {
        pbStack_e38 = (byte *)0x0;
        pbStack_e30 = (byte *)0x0;
        pbStack_e28 = (byte *)0x0;
        lVar15 = param_2[1];
        if (bStack_dd8 == 0) {
          func_0x05d8b230(&pbStack_e18);
        }
        pbStack_ce8 = pbStack_e18;
        uStack_ce0 = uStack_e10;
        puStack_cd8 = puStack_e08;
        pbStack_e18 = (byte *)0x0;
        uStack_e10 = 0;
        puStack_e08 = (undefined8 *)0x0;
        func_0x0d686f30(apuStack_b08,&UNK_0120a215,0x15,lVar15 + 0xd8,&pbStack_ce8);
        if (((ulong)pbStack_ce8 & 1) != 0) {
          func_0x0412a280(puStack_cd8,(ulong)pbStack_ce8 & 0xfffffffffffffffe);
        }
        func_0x05d54750(auStack_be0,&UNK_0f030020);
        func_0x0d6afff0(&pppppuStack_cc8,lVar15,apuStack_b08,auStack_be0,1);
        if ((((~uStack_ca8._6_1_ | bStack_c1c) & 1) == 0) && (*(long *)(lVar15 + 0x50) != 0)) {
          lVar13 = func_0x0417cc60();
          plVar3 = *(long **)(lVar15 + 0x50);
          if (plVar3 == (long *)0x0) goto LAB_06446266;
          pppppppuVar20 = (undefined8 *******)ppppppuStack_c90;
          if ((char)uStack_c6c == '\x02') {
            pppppppuVar20 = &ppppppuStack_c90;
          }
          pppppppuVar21 = (undefined8 *******)0x0;
          if (iStack_c70 == 0x229b0859) {
            pppppppuVar21 = pppppppuVar20;
          }
          (**(code **)(*plVar3 + 0x30))(plVar3,pppppppuVar21,&uStack_c68);
          lVar15 = func_0x0417cc60();
          pppppuStack_cb8 = (undefined8 *****)((double)(lVar15 - lVar13) / _DAT_014f0138);
          pppppuStack_cb0 =
               (undefined8 *****)
               CONCAT71(pppppuStack_cb0._1_7_,(byte)pppppuStack_cb0 & ~bStack_c1c & uStack_ca8._6_1_
                       );
        }
        uVar19 = uStack_c28;
        pppppuVar23 = pppppuStack_c40;
        pppppuVar2 = pppppuStack_c58;
        if (((~uStack_ca8._6_1_ | bStack_c1c) & 1) == 0) {
          func_0x05ebb920(&uStack_dc8,&pppppuStack_cc8);
          func_0x05ebb920(auStack_9d8,&uStack_dc8);
          func_0x05d85c50(&uStack_d68);
          if (pcStack_d78 != (code *)0x0) {
            (*pcStack_d78)(&puStack_d90);
          }
          if ((uStack_d98 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_d98 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_d98 = 0;
          if (((ulong)pppppuStack_da0 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pppppuStack_da0 & 0xff00ffffffffffff) - 8);
          }
          pppppuStack_da0 = (undefined8 ******)0x0;
        }
        else {
          uStack_928 = (undefined4)uStack_c68;
          uStack_924 = uStack_c68._4_4_;
          uStack_920 = (undefined4)uStack_c60;
          uStack_91c = uStack_c60._4_4_;
          uStack_c68 = (undefined8 ******)0x0;
          uStack_c60 = (undefined8 ******)0x0;
          pppppuStack_c58 = (undefined8 ******)0x0;
          uStack_910 = (undefined4)uStack_c50;
          uStack_90c = uStack_c50._4_4_;
          uStack_908 = (undefined4)uStack_c48;
          uStack_904 = uStack_c48._4_4_;
          uStack_c50 = (undefined8 ******)0x0;
          uStack_c48 = (undefined8 ******)0x0;
          pppppuStack_c40 = (undefined8 ******)0x0;
          uStack_8f8 = (undefined4)uStack_c38;
          uStack_8f4 = uStack_c38._4_4_;
          uStack_8f0 = (undefined4)uStack_c30;
          uStack_8ec = uStack_c30._4_4_;
          uStack_c38 = (undefined8 ******)0x0;
          uStack_c30 = (undefined8 ******)0x0;
          uStack_c28 = 0;
          bStack_88c = bStack_c1c;
          uStack_890 = uStack_c20;
          pppppuStack_918 = pppppuVar2;
          uStack_8d8 = 0;
          uStack_8d0 = 0;
          uStack_8c8 = 0;
          pppppuStack_900 = pppppuVar23;
          uStack_8c0 = 0;
          uStack_8b8 = 0;
          uStack_8b0 = 0;
          uStack_8e8 = uVar19;
          uStack_8a8 = 0;
          uStack_8a0 = 0;
          uStack_898 = 0;
          uStack_8e0 = uStack_c20;
          bStack_8dc = bStack_c1c;
          uStack_dc8 = (undefined8 ******)0x0;
          uStack_dc0 = (undefined8 ******)0x0;
          puStack_db8 = (undefined *)0x0;
          pcStack_db0._0_1_ = 1;
          uStack_da8 = 0;
          pppppuStack_da0 = (undefined8 *****)0x0;
          uStack_d98 = 0;
          puStack_d80 = &UNK_0488e0b0;
          pcStack_d78 = (code *)0x0;
          uStack_d70 = CONCAT35(uStack_d70._5_3_,0x48b5725f);
          puStack_d90 = (undefined *)0x0;
          uStack_d38 = 0;
          uStack_d30 = 0;
          uStack_d48 = 0;
          uStack_d40 = 0;
          uStack_d58 = 0;
          uStack_d50 = 0;
          uStack_d68 = 0;
          uStack_d60 = 0;
          uStack_d28 = 0;
          uStack_d20 = CONCAT35(uStack_d20._5_3_,0xfefffffc);
          func_0x0c4a4310(&uStack_d68,&uStack_928);
          pcStack_db0 = (code *)((ulong)pcStack_db0._1_7_ << 8);
          func_0x05ebb920(apuStack_4e8,&uStack_dc8);
          func_0x05d85c50(&uStack_d68);
          if (pcStack_d78 != (code *)0x0) {
            (*pcStack_d78)(&puStack_d90);
          }
          if ((uStack_d98 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_d98 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_d98 = 0;
          if (((ulong)pppppuStack_da0 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pppppuStack_da0 & 0xff00ffffffffffff) - 8);
          }
          pppppuStack_da0 = (undefined8 *****)0x0;
          func_0x05d85c50(&uStack_928);
          func_0x05ebb920(&uStack_dc8,apuStack_4e8);
          func_0x05ebb920(auStack_9d8,&uStack_dc8);
          func_0x05d85c50(&uStack_d68);
          if (pcStack_d78 != (code *)0x0) {
            (*pcStack_d78)(&puStack_d90);
          }
          if ((uStack_d98 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_d98 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_d98 = 0;
          if (((ulong)pppppuStack_da0 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)pppppuStack_da0 & 0xff00ffffffffffff) - 8);
          }
          pppppuStack_da0 = (undefined8 ******)0x0;
          func_0x05d85c50(auStack_488);
          if (pcStack_498 != (code *)0x0) {
            (*pcStack_498)(auStack_4b0);
          }
          if ((uStack_4b8 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_4b8 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_4b8 = 0;
          if ((uStack_4c0 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_4c0 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_4c0 = 0;
          func_0x05d85c50(&uStack_8d8);
        }
        func_0x05d85c50(&uStack_c68);
        if ((undefined8 ******)pppppuStack_c78 != (undefined8 ******)0x0) {
          (*(code *)pppppuStack_c78)(&ppppppuStack_c90);
        }
        if (((ulong)pppppuStack_c98 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)pppppuStack_c98 & 0xff00ffffffffffff) - 8);
        }
        pppppuStack_c98 = (undefined8 ******)0x0;
        if (((ulong)pppppuStack_ca0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,((ulong)pppppuStack_ca0 & 0xff00ffffffffffff) - 8);
        }
        if ((uStack_bd0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_bd0 & 0xff00ffffffffffff) - 8);
        }
        uStack_bd0 = 0;
        if ((uStack_bd8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_bd8 & 0xff00ffffffffffff) - 8);
        }
        ppppppuVar38 = (undefined8 ******)pppppuStack_978;
        if ((cStack_9b2 == '\x01') && ((uStack_930._4_1_ & 1) == 0)) {
          func_0x0ee382a0(&uStack_dc8,&UNK_0f030020);
          pcStack_db0 = _DAT_0f7ba058;
          uStack_da8 = _DAT_0f7ba060;
          pppppuStack_da0 = (undefined8 ******)0x0;
          uStack_d98 = 0;
          puStack_d90 = (undefined *)0x0;
          uStack_d88 = 0;
          puStack_d80 = (undefined *)0x0;
          pcStack_d78 = (code *)0x0;
          uStack_d70 = 0;
          uStack_d68 = 0;
          uStack_d60 = 0;
          uStack_d58 = 0;
          uStack_d50 = 0;
          uStack_d48 = 0;
          uStack_d40 = 0;
          uStack_d38 = 0;
          uStack_d30 = 0;
          uStack_d28 = 0;
          uStack_d20 = 0;
          uStack_d18 = 0;
          pppppppuVar16 = (undefined8 *******)&uStack_908;
          pppppppuVar20 = (undefined8 *******)&uStack_910;
          pppppppuVar21 = (undefined8 *******)&pppppuStack_918;
          pppppppuVar27 = (undefined8 *******)&uStack_920;
          pppppppuVar31 = (undefined8 *******)&uStack_928;
          pppppppuVar32 = (undefined8 *******)&uStack_930;
          pppppppuVar33 = (undefined8 *******)&pppppuStack_948;
          pppppppuVar37 = (undefined8 *******)apppppuStack_960;
          pppppppuVar36 = (undefined8 *******)&pppppuStack_978;
          pppppppuVar35 = (undefined8 *******)&pppppuStack_990;
          pppppppuVar34 = appppppuStack_9a0;
          if (cStack_97c != '\x02') {
            pppppppuVar16 = (undefined8 *******)(appppppuStack_9a0[0] + 0x13);
            pppppppuVar20 = (undefined8 *******)(appppppuStack_9a0[0] + 0x12);
            pppppppuVar21 = (undefined8 *******)(appppppuStack_9a0[0] + 0x11);
            pppppppuVar27 = (undefined8 *******)(appppppuStack_9a0[0] + 0x10);
            pppppppuVar31 = (undefined8 *******)(appppppuStack_9a0[0] + 0xf);
            pppppppuVar32 = (undefined8 *******)(appppppuStack_9a0[0] + 0xe);
            pppppppuVar33 = (undefined8 *******)(appppppuStack_9a0[0] + 0xb);
            pppppppuVar37 = (undefined8 *******)(appppppuStack_9a0[0] + 8);
            pppppppuVar36 = (undefined8 *******)(appppppuStack_9a0[0] + 5);
            pppppppuVar35 = (undefined8 *******)(appppppuStack_9a0[0] + 2);
            pppppppuVar34 = (undefined8 *******)appppppuStack_9a0[0];
          }
          bVar43 = iStack_980 == 0x229b0859;
          pppppppuVar42 = (undefined8 *******)0x0;
          if (bVar43) {
            pppppppuVar42 = pppppppuVar34;
          }
          pppppuStack_cc8 = *pppppppuVar42;
          pppppuStack_cc0 = pppppppuVar42[1];
          pppppppuVar34 = (undefined8 *******)&DAT_00000010;
          if (bVar43) {
            pppppppuVar34 = pppppppuVar35;
          }
          uStack_ca8 = pppppppuVar34[2];
          pppppuStack_cb8 = *pppppppuVar34;
          pppppuStack_cb0 = pppppppuVar34[1];
          *pppppppuVar34 = (undefined8 ******)0x0;
          pppppppuVar34[1] = (undefined8 ******)0x0;
          pppppppuVar34[2] = (undefined8 ******)0x0;
          pppppppuVar35 = (undefined8 *******)0x28;
          if (bVar43) {
            pppppppuVar35 = pppppppuVar36;
          }
          ppppppuStack_c90 = pppppppuVar35[2];
          pppppuStack_ca0 = *pppppppuVar35;
          pppppuStack_c98 = pppppppuVar35[1];
          *pppppppuVar35 = (undefined8 ******)0x0;
          pppppppuVar35[1] = (undefined8 ******)0x0;
          pppppppuVar35[2] = (undefined8 ******)0x0;
          pppppppuVar36 = (undefined8 *******)0x40;
          if (bVar43) {
            pppppppuVar36 = pppppppuVar37;
          }
          pppppuStack_c78 = pppppppuVar36[2];
          pppppuStack_c88 = *pppppppuVar36;
          pppppuStack_c80 = pppppppuVar36[1];
          *pppppppuVar36 = (undefined8 ******)0x0;
          pppppppuVar36[1] = (undefined8 ******)0x0;
          pppppppuVar36[2] = (undefined8 ******)0x0;
          pppppppuVar37 = (undefined8 *******)0x58;
          if (bVar43) {
            pppppppuVar37 = pppppppuVar33;
          }
          uStack_c60 = pppppppuVar37[2];
          iStack_c70 = *(int *)pppppppuVar37;
          uStack_c6c = *(undefined4 *)((long)pppppppuVar37 + 4);
          uStack_c68 = pppppppuVar37[1];
          *pppppppuVar37 = (undefined8 ******)0x0;
          pppppppuVar37[1] = (undefined8 ******)0x0;
          pppppppuVar33 = (undefined8 *******)0x70;
          if (bVar43) {
            pppppppuVar33 = pppppppuVar32;
          }
          pppppppuVar37[2] = (undefined8 ******)0x0;
          pppppuStack_c58 = *pppppppuVar33;
          pppppppuVar32 = (undefined8 *******)&DAT_00000078;
          if (bVar43) {
            pppppppuVar32 = pppppppuVar31;
          }
          uStack_c50 = *pppppppuVar32;
          pppppppuVar31 = (undefined8 *******)0x80;
          if (bVar43) {
            pppppppuVar31 = pppppppuVar27;
          }
          uStack_c48 = *pppppppuVar31;
          *pppppppuVar33 = (undefined8 ******)0x0;
          pppppppuVar33[1] = (undefined8 ******)0x0;
          pppppppuVar33[2] = (undefined8 ******)0x0;
          pppppppuVar27 = (undefined8 *******)0x88;
          if (bVar43) {
            pppppppuVar27 = pppppppuVar21;
          }
          pppppuStack_c40 = *pppppppuVar27;
          pppppppuVar21 = (undefined8 *******)&DAT_00000090;
          if (bVar43) {
            pppppppuVar21 = pppppppuVar20;
          }
          uStack_c38 = *pppppppuVar21;
          pppppppuVar20 = (undefined8 *******)0x98;
          if (bVar43) {
            pppppppuVar20 = pppppppuVar16;
          }
          uStack_c30 = *pppppppuVar20;
          *pppppppuVar27 = (undefined8 ******)0x0;
          pppppppuVar27[1] = (undefined8 ******)0x0;
          pppppppuVar27[2] = (undefined8 ******)0x0;
          func_0x063ffd40(&pcStack_db0,&pppppuStack_cc8);
          func_0x063ff160(&pppppuStack_cc8);
          pppppuStack_bc8 = uStack_dc8;
          pppppuStack_bc0 = uStack_dc0;
          puStack_bb8 = puStack_db8;
          uStack_dc8 = (undefined8 ******)0x0;
          uStack_dc0 = (undefined8 ******)0x0;
          puStack_db8 = (undefined *)0x0;
          pcStack_bb0 = pcStack_db0;
          uStack_ba8 = uStack_da8;
          pppppuStack_ba0 = pppppuStack_da0;
          uStack_b98 = uStack_d98;
          puStack_b90 = puStack_d90;
          pppppuStack_da0 = (undefined8 ******)0x0;
          uStack_d98 = 0;
          puStack_d90 = (undefined *)0x0;
          uStack_b78 = pcStack_d78;
          uStack_b88 = uStack_d88;
          uStack_b80 = puStack_d80;
          uStack_d88 = 0;
          puStack_d80 = (undefined *)0x0;
          pcStack_d78 = (code *)0x0;
          uStack_b60 = uStack_d60;
          uStack_b70 = uStack_d70;
          uStack_b68 = uStack_d68;
          uStack_d70 = 0;
          uStack_d68 = 0;
          uStack_d60 = 0;
          uStack_b48 = uStack_d48;
          uStack_b58 = uStack_d58;
          uStack_b50 = uStack_d50;
          uStack_d58 = 0;
          uStack_d50 = 0;
          uStack_d48 = 0;
          uStack_b40 = uStack_d40;
          uStack_b38 = uStack_d38;
          uStack_b30 = uStack_d30;
          uStack_d40 = 0;
          uStack_d38 = 0;
          uStack_d30 = 0;
          uStack_b28 = (undefined4)uStack_d28;
          uStack_b24 = uStack_d28._4_4_;
          uStack_b20 = (undefined4)uStack_d20;
          uStack_b1c = uStack_d20._4_4_;
          uStack_b18 = uStack_d18;
          uStack_d28 = 0;
          uStack_d20 = 0;
          uStack_d18 = 0;
          cStack_b10 = '\x01';
          func_0x063ff160(&pcStack_db0);
          if (((ulong)uStack_dc8 & 1) != 0) {
            func_0x0412a280(puStack_db8,(ulong)uStack_dc8 & 0xfffffffffffffffe);
          }
        }
        else {
          for (; (ppppppuVar38 != (undefined8 ******)pppppuStack_970 &&
                 (*(short *)ppppppuVar38 == 0)); ppppppuVar38 = ppppppuVar38 + 7) {
          }
          ppppppuVar40 = (undefined8 ******)pppppuStack_948;
          if (ppppppuVar38 != (undefined8 ******)pppppuStack_970) {
            ppppppuVar28 = ppppppuVar38 + 4;
            if (pbStack_e30 < pbStack_e28) goto LAB_0644598b;
            do {
              pbStack_e30 = (byte *)func_0x04909a40(&pbStack_e38);
              while( true ) {
                do {
                  ppppppuVar28 = ppppppuVar38;
                  ppppppuVar38 = ppppppuVar28 + 7;
                  ppppppuVar40 = (undefined8 ******)pppppuStack_948;
                  if (ppppppuVar38 == (undefined8 ******)pppppuStack_970) goto joined_r0x06445a0a;
                } while (*(short *)ppppppuVar38 == 0);
                ppppppuVar28 = ppppppuVar28 + 0xb;
                if (pbStack_e28 <= pbStack_e30) break;
LAB_0644598b:
                pbVar9 = pbStack_e30;
                if (((ulong)*ppppppuVar28 & 1) == 0) {
                  *(undefined8 ******)(pbStack_e30 + 0x10) = ppppppuVar28[2];
                  uVar6 = *(undefined4 *)((long)ppppppuVar28 + 4);
                  uVar7 = *(undefined4 *)(ppppppuVar28 + 1);
                  uVar8 = *(undefined4 *)((long)ppppppuVar28 + 0xc);
                  *(undefined4 *)pbStack_e30 = *(undefined4 *)ppppppuVar28;
                  *(undefined4 *)(pbStack_e30 + 4) = uVar6;
                  *(undefined4 *)(pbStack_e30 + 8) = uVar7;
                  *(undefined4 *)(pbStack_e30 + 0xc) = uVar8;
                }
                else {
                  func_0x0412e5e0(pbStack_e30,ppppppuVar38[6],ppppppuVar38[5]);
                }
                pbStack_e30 = pbVar9 + 0x18;
              }
            } while( true );
          }
joined_r0x06445a0a:
          for (; (ppppppuVar40 != (undefined8 ******)pppppuStack_940 &&
                 (*(char *)ppppppuVar40 == '\0')); ppppppuVar40 = ppppppuVar40 + 4) {
          }
          if (ppppppuVar40 != (undefined8 ******)pppppuStack_940) {
            ppppppuVar38 = ppppppuVar40 + 1;
            if (pbStack_e30 < pbStack_e28) goto LAB_06445a4a;
            do {
              pbStack_e30 = (byte *)func_0x04909a40(&pbStack_e38);
              while( true ) {
                do {
                  ppppppuVar38 = ppppppuVar40;
                  ppppppuVar40 = ppppppuVar38 + 4;
                  if (ppppppuVar40 == (undefined8 ******)pppppuStack_940) goto LAB_06445aa6;
                } while (*(char *)ppppppuVar40 == '\0');
                ppppppuVar38 = ppppppuVar38 + 5;
                if (pbStack_e28 <= pbStack_e30) break;
LAB_06445a4a:
                pbVar9 = pbStack_e30;
                if (((ulong)*ppppppuVar38 & 1) == 0) {
                  *(undefined8 ******)(pbStack_e30 + 0x10) = ppppppuVar38[2];
                  uVar6 = *(undefined4 *)((long)ppppppuVar38 + 4);
                  uVar7 = *(undefined4 *)(ppppppuVar38 + 1);
                  uVar8 = *(undefined4 *)((long)ppppppuVar38 + 0xc);
                  *(undefined4 *)pbStack_e30 = *(undefined4 *)ppppppuVar38;
                  *(undefined4 *)(pbStack_e30 + 4) = uVar6;
                  *(undefined4 *)(pbStack_e30 + 8) = uVar7;
                  *(undefined4 *)(pbStack_e30 + 0xc) = uVar8;
                }
                else {
                  func_0x0412e5e0(pbStack_e30,ppppppuVar40[3],ppppppuVar40[2]);
                }
                pbStack_e30 = pbVar9 + 0x18;
              }
            } while( true );
          }
LAB_06445aa6:
          pppppuStack_bc8 = (undefined8 *****)((ulong)pppppuStack_bc8 & 0xffffffffffffff00);
          cStack_b10 = '\0';
        }
        param_1 = lStack_d10;
        func_0x05d85c50(&pppppuStack_978);
        if (pcStack_988 != (code *)0x0) {
          (*pcStack_988)(appppppuStack_9a0);
        }
        if ((uStack_9a8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_9a8 & 0xff00ffffffffffff) - 8);
        }
        uStack_9a8 = 0;
        if ((uStack_9b0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_9b0 & 0xff00ffffffffffff) - 8);
        }
        func_0x05d85c50(auStack_a50);
        if ((ulong)uStack_a58 != 0xffffffff) {
          (**(code **)(&UNK_0f02ff80 + (ulong)uStack_a58 * 8))(&uStack_dc8,auStack_ab8);
        }
        uStack_a58 = 0xffffffff;
        if ((bStack_ad0 & 1) != 0) {
          func_0x0412a280(CONCAT71(uStack_abf,bStack_ac0),
                          CONCAT71(uStack_acf,bStack_ad0) & 0xfffffffffffffffe);
        }
        if ((uStack_ad8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_ad8 & 0xff00ffffffffffff) - 8);
        }
        uStack_ad8 = 0;
        if ((uStack_ae0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_ae0 & 0xff00ffffffffffff) - 8);
        }
        uStack_ae0 = 0;
        if ((uStack_af0 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_af0 & 0xff00ffffffffffff) - 8);
        }
        uStack_af0 = 0;
        if ((uStack_af8 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_af8 & 0xff00ffffffffffff) - 8);
        }
        if (cStack_b10 == '\0') {
          func_0x04a3b850(apuStack_b08);
          pbVar9 = pbStack_e30;
          if (pbStack_e38 != pbStack_e30) {
            pbVar39 = pbStack_e38;
            do {
              while( true ) {
                bVar43 = (*pbVar39 & 1) != 0;
                pbVar29 = pbVar39 + 1;
                if (bVar43) {
                  pbVar29 = *(byte **)(pbVar39 + 0x10);
                }
                uVar30 = (ulong)(*pbVar39 >> 1);
                if (bVar43) {
                  uVar30 = *(ulong *)(pbVar39 + 8);
                }
                uVar19 = func_0x04885260(apuStack_b08,pbVar29,uVar30);
                uStack_dc8 = (undefined8 ******)CONCAT71(uStack_dc8._1_7_,10);
                func_0x04885260(uVar19,&uStack_dc8,1);
                lVar15 = param_2[3];
                puVar4 = *(undefined4 **)(lVar15 + 8);
                if (*(undefined4 **)(lVar15 + 0x10) <= puVar4) break;
                if ((*pbVar39 & 1) == 0) {
                  *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(pbVar39 + 0x10);
                  uVar6 = *(undefined4 *)(pbVar39 + 4);
                  uVar7 = *(undefined4 *)(pbVar39 + 8);
                  uVar8 = *(undefined4 *)(pbVar39 + 0xc);
                  *puVar4 = *(undefined4 *)pbVar39;
                  puVar4[1] = uVar6;
                  puVar4[2] = uVar7;
                  puVar4[3] = uVar8;
                }
                else {
                  func_0x0412e5e0(puVar4,*(undefined8 *)(pbVar39 + 0x10),
                                  *(undefined8 *)(pbVar39 + 8));
                }
                *(undefined4 **)(lVar15 + 8) = puVar4 + 6;
                *(undefined4 **)(lVar15 + 8) = puVar4 + 6;
                pbVar39 = pbVar39 + 0x18;
                if (pbVar39 == pbVar9) goto LAB_06445d8f;
              }
              uVar19 = func_0x04909a40(lVar15,pbVar39);
              *(undefined8 *)(lVar15 + 8) = uVar19;
              pbVar39 = pbVar39 + 0x18;
            } while (pbVar39 != pbVar9);
          }
LAB_06445d8f:
          if ((uStack_aa0 & 0x10) == 0) {
            if ((uStack_aa0 & 8) != 0) {
              puVar18 = &uStack_af0;
              uStack_aa8 = uStack_ae0;
              goto LAB_06445df0;
            }
            uStack_dc8 = (undefined8 ******)((ulong)uStack_dc8._1_7_ << 8);
            puVar17 = (undefined *)((long)&uStack_dc8 + 1);
            ppppppuVar38 = (undefined8 ******)0x0;
          }
          else {
            if (uStack_aa8 < CONCAT71(uStack_acf,bStack_ad0)) {
              uStack_aa8 = CONCAT71(uStack_acf,bStack_ad0);
            }
            puVar18 = &uStack_ad8;
LAB_06445df0:
            uVar30 = *puVar18;
            ppppppuVar38 = (undefined8 ******)(uStack_aa8 - uVar30);
            if ((undefined8 ******)0xfffffffffffffff7 < ppppppuVar38) goto LAB_06446261;
            if (ppppppuVar38 < (undefined8 ******)0x17) {
              uStack_dc8 = (undefined8 ******)CONCAT71(uStack_dc8._1_7_,(char)ppppppuVar38 * '\x02')
              ;
              puVar17 = (undefined *)((long)&uStack_dc8 + 1);
              if (ppppppuVar38 == (undefined8 ******)0x0) {
                ppppppuVar38 = (undefined8 ******)0x0;
                goto LAB_06445e85;
              }
            }
            else {
              uVar24 = 0x1a;
              if (((ulong)ppppppuVar38 | 7) != 0x17) {
                uVar24 = ((ulong)ppppppuVar38 | 7) + 1;
              }
              puVar17 = (undefined *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24);
              if (puVar17 == (undefined *)0x0) {
                func_0x0eec74c0(uVar24,0);
              }
              uStack_dc8 = (undefined8 ******)(uVar24 | 1);
              uStack_dc0 = ppppppuVar38;
              puStack_db8 = puVar17;
            }
            func_0x0eee2ee0(puVar17,uVar30,ppppppuVar38);
          }
LAB_06445e85:
          *(byte *)((long)ppppppuVar38 + (long)puVar17) = 0;
          puVar18 = (ulong *)FUN_0412f0e0(&uStack_dc8,0,&UNK_0142e57f,0x2b);
          param_1 = lStack_d10;
          uVar30 = *puVar18;
          uVar24 = puVar18[2];
          *puVar18 = 0;
          puVar18[1] = 0;
          puVar18[2] = 0;
          if (((ulong)uStack_dc8 & 1) != 0) {
            func_0x0412a280(puStack_db8,(ulong)uStack_dc8 & 0xfffffffffffffffe);
          }
          if ((uVar30 & 1) != 0) {
            func_0x0412a280(uVar24,uVar30 & 0xfffffffffffffffe);
          }
          apuStack_b08[0] = _UNK_0eeed6a8;
          *(undefined8 *)((long)apuStack_b08 + *(long *)(_UNK_0eeed6a8 + -0x18)) = _UNK_0eeed6c0;
          apuStack_b08[1] = &UNK_0eeed150;
          if ((bStack_ac0 & 1) != 0) {
            func_0x0412a280(uStack_ab0,CONCAT71(uStack_abf,bStack_ac0) & 0xfffffffffffffffe);
          }
          apuStack_b08[1] = &UNK_0eeece20;
          FUN_04167a40(&uStack_af8);
          func_0x0413aec0(apuStack_b08,&UNK_0eeed6b0);
          func_0x04138180(auStack_a98);
        }
        else {
          plVar3 = *(long **)(param_2[2] + 0x20);
          if (plVar3 == (long *)0x0) {
            func_0x04891200();
LAB_06446261:
            FUN_04882e30();
LAB_06446266:
            uVar19 = func_0x04891200();
            func_0x041084d6(&DAT_0f774768);
            func_0x0eedfc00(&pbStack_e18);
            while ((uStack_d08 & 1) == 0) {
              func_0x0eee2d70(uVar19);
              func_0x0412a280(puStack_7b8,(ulong)_auStack_7c8 & 0xfffffffffffffffe);
            }
            func_0x0412a280(lStack_cf8,CONCAT44(uStack_d04,uStack_d08) & 0xfffffffffffffffe);
            func_0x0eee2d70(uVar19);
            pcVar5 = (code *)swi(3);
            lVar15 = (*pcVar5)();
            return lVar15;
          }
          (**(code **)(*plVar3 + 0x30))(plVar3,&pcStack_bb0);
        }
        if ((cStack_b10 == '\x01') &&
           (func_0x063ff160(&pcStack_bb0), ((ulong)pppppuStack_bc8 & 1) != 0)) {
          func_0x0412a280(puStack_bb8,(ulong)pppppuStack_bc8 & 0xfffffffffffffffe);
        }
        pbVar39 = pbStack_e38;
        pbVar9 = pbStack_e30;
        if (pbStack_e38 != (byte *)0x0) {
          for (; pbVar39 != pbVar9; pbVar9 = pbVar9 + -0x18) {
            if ((pbVar9[-0x18] & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(pbVar9 + -8),
                              *(ulong *)(pbVar9 + -0x18) & 0xfffffffffffffffe);
            }
          }
          pbStack_e30 = pbVar39;
          func_0x0412a280(pbStack_e38,(long)pbStack_e28 - (long)pbStack_e38);
        }
        func_0x063ff160(&pcStack_868);
        if ((bStack_880 & 1) != 0) {
          func_0x0412a280(uStack_870,CONCAT71(uStack_87f,bStack_880) & 0xfffffffffffffffe);
        }
        plVar3 = plStack_c00;
        uStack_c08 = 0;
        plStack_c00 = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar15 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar15 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            FUN_0412c2d0(plVar3);
          }
          plVar3 = plStack_c00;
          uStack_bf8 = 0;
          if (plStack_c00 != (long *)0x0) {
            LOCK();
            plVar1 = plStack_c00 + 1;
            lVar15 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar15 == 0) {
              (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
              FUN_0412c2d0(plVar3);
            }
          }
        }
        func_0x0490a470(auStack_7c8);
        if (bStack_dd8 == 1) goto LAB_064460e7;
        lVar15 = CONCAT44(uStack_dec,uStack_df0);
        if (lVar15 != 0) {
          lVar25 = uStack_de8;
          lVar13 = lVar15;
          if (lVar15 != uStack_de8) {
            do {
              lVar25 = lVar25 + -0x40;
              func_0x048b3e80(lVar25);
            } while (lVar25 != lVar15);
            lVar13 = CONCAT44(uStack_dec,uStack_df0);
          }
          uStack_de8 = lVar15;
          func_0x0412a280(lVar13,lStack_de0 - lVar13);
        }
        puVar26 = puStack_e08;
        puVar14 = puStack_e00;
        if (puStack_e08 == (undefined8 *)0x0) goto LAB_064461b1;
        for (; puVar26 != puVar14; puVar14 = puVar14 + -10) {
          if ((*(char *)(puVar14 + -1) == '\x01') && ((*(byte *)(puVar14 + -6) & 1) != 0)) {
            func_0x0412a280(puVar14[-4],puVar14[-6] & 0xfffffffffffffffe);
          }
        }
      }
LAB_0644619f:
      uVar30 = lStack_df8 - (long)puStack_e08;
      puVar14 = puStack_e08;
      puStack_e00 = puVar26;
    }
  }
  func_0x0412a280(puVar14,uVar30);
LAB_064461b1:
  if ((uStack_d08 & 1) != 0) {
    func_0x0412a280(lStack_cf8,CONCAT44(uStack_d04,uStack_d08) & 0xfffffffffffffffe);
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  return param_1;
}


